import json
import struct
from datetime import datetime, timedelta, timezone

from pyasn1.codec.ber import decoder
from pyasn1.error import PyAsn1Error

from definitions.GPRSChargingDataTypesV1171_pyasn_asn1c import GPRSRecord


# TODO: chunk read
def bytes_from_file(filename, chunksize=4096):
    with open(filename, "rb") as f:
        while True:
            chunk = f.read(chunksize)
            if chunk:
                for b in chunk:
                    yield b
            else:
                break


# for b in bytes_from_file('filename'):
#     do_stuff_with(b)


# for test
# with open("tests/Charging-SGW0101_-_18.20160720_-_1618+0300", "rb") as bin_file:
#     data = bin_file.read()

def date_handler(obj):
    return obj.isoformat() if hasattr(obj, 'isoformat') else obj


def timestamp(value: int) -> datetime:
    """

    :param value: int, from 4 bytes
    :return: datetime, year = 1 thus not encoded according to spec
    """
    # normaly coded in 4 bytes, like int
    timestamp_len = 4 * 8
    # month = (value >> timestamp_len - 4) & 0b1111
    month = (value >> timestamp_len - 4) & (2 ** 4 - 1)
    date = (value >> timestamp_len - 4 - 5) & (2 ** 5 - 1)
    hour = (value >> timestamp_len - 4 - 5 - 5) & (2 ** 5 - 1)
    minutes = (value >> timestamp_len - 4 - 5 - 5 - 6) & (2 ** 6 - 1)
    tz_sign = (value >> timestamp_len - 4 - 5 - 5 - 6 - 1) & (2 ** 1 - 1)
    if tz_sign == 0:
        tz_sign = -1
    tz_hour = (value >> timestamp_len - 4 - 5 - 5 - 6 - 1 - 5) & (2 ** 5 - 1)
    tz_hour = tz_hour * tz_sign
    tz_minutes = (value >> timestamp_len - 4 - 5 - 5 - 6 - 1 - 5 - 6) & (2 ** 6 - 1)
    return datetime(year=1, month=month, day=date, hour=hour, minute=minutes,
                    tzinfo=timezone(timedelta(hours=tz_hour, minutes=tz_minutes)))


def file_headers2dict(file_header: bytes) -> dict:

    file_headers = {}
    file_headers["FileLength"], file_headers["HeaderLength"] = struct.unpack(">II", file_header[:8])
    # A bytes sequence is an immutable sequence of integers, so it's possible shift one byte to int, no more !!!!
    # return int!!!!
    file_headers["HighRelease"], file_headers["HighVersion"] = file_header[8] >> (8 - 3), file_header[8] & 0b00011111
    file_headers["LowRelease"], file_headers["LowVersion"] = file_header[9] >> (8 - 3), file_header[9] & 0b00011111
    FileOpenTimestamp = int.from_bytes(file_header[10:14], "big")
    file_headers["FileOpenTimestamp"] = timestamp(FileOpenTimestamp)
    LastCDR = int.from_bytes(file_header[14:18], "big")
    file_headers["LastCDR"] = timestamp(LastCDR)
    file_headers["CDRsNumber"], file_headers["FileSequence"], file_headers["FileCloseTriger"] = \
        struct.unpack(">IIB", file_header[18:27])
    _, file_headers["IPv6_part_high"], file_headers["IPv4_IPv6_part_low"] =  struct.unpack(">LQQ", file_header[27:47])
    file_headers["LostCDR_indicator"], file_headers["LengthCDRrouteingFilter"] = struct.unpack(">BH", file_header[47:50])

    file_headers["CDR_filters"] = []
    for filter in range(file_headers["LengthCDRrouteingFilter"]):
        file_headers["CDR_filters"].append(file_header[50 + filter])

    file_headers["LengthofPrivateExtension"] = struct.unpack(">H",
                                                             file_header[
                                                             50 + file_headers["LengthCDRrouteingFilter"] :
                                                             50 + file_headers["LengthCDRrouteingFilter"] + 2
                                                             ])[0]

    file_headers["PrivateExtension"] = []
    for extention in range(file_headers["LengthofPrivateExtension"]):
        file_headers["PrivateExtension"].append(file_header[50 + file_headers["LengthCDRrouteingFilter"] + 2 + extention])

    HighReleaseIdentifierExtension_byte = 50 + file_headers["LengthCDRrouteingFilter"] + 2 +\
                                          file_headers["LengthofPrivateExtension"] + 1
    LowReleaseIdentifierExtension_byte = 50 + file_headers["LengthCDRrouteingFilter"] + 2 + \
                                          file_headers["LengthofPrivateExtension"] + 2

    if HighReleaseIdentifierExtension_byte  < file_headers["HeaderLength"]:
        file_headers["HighReleaseIdentifierExtension"] = file_header[HighReleaseIdentifierExtension_byte]
    if LowReleaseIdentifierExtension_byte  < file_headers["HeaderLength"]:
        file_headers["LowReleaseIdentifierExtension"] = file_header[LowReleaseIdentifierExtension_byte]

    return file_headers


def cdr_headers2dict(cdr_header: bytes) -> dict:
    cdr_headers = {}
    cdr_headers["CDR_length"] = struct.unpack(">H", cdr_header[:2])[0]
    cdr_headers["ReleaseIdentifier"] = cdr_header[2] >> (8 - 3)
    cdr_headers["VersionIdentifier"] = cdr_header[2] & (2**5 -1)
    cdr_headers["DataRecordFormat"] = cdr_header[3] >> (8 - 3)
    cdr_headers["TS number"] = cdr_header[3] & (2 ** 5 - 1)
    cdr_headers["ReleaseIdentifierExtension"] = cdr_header[4]
    return cdr_headers

def cdr_decoder(cdr_bytes: bytes) -> str:
    try:
        GPRS_CDR , substrate = decoder.decode(cdr_bytes, asn1Spec=GPRSRecord())
        print(GPRS_CDR.prettyPrint())
    except PyAsn1Error:
        print("asn1 decoder error, hexdump below:\n{}".format(cdr_bytes.hex()))
    # s = GPRS_CDR.prettyPrint()
    # return s




if __name__ == "__main__":
    # ------------ Arguments ---------
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("filename", help="filename coded according to 3gpp", type=str)
    args = parser.parse_args()

    if args.filename:
        with open(args.filename, "rb") as bin_file:
            data = bin_file.read()
    # ==================================
    ##################### File Header parsing #############################
    FileLength = int.from_bytes(data[:4], "big")
    HeaderLength = int.from_bytes(data[4:8], "big")
    file_header = data[:HeaderLength]
    print(
        json.dumps(file_headers2dict(file_header), sort_keys=True, indent=4, separators=(',', ': '), ensure_ascii=False,
                   default=date_handler))
    ##################### CDRs Headers parsing #############################
    cdr_header_start = HeaderLength
    for i in range(file_headers2dict(file_header)["CDRsNumber"]):
        cdr_header_end = cdr_header_start + 5
        cdr_length = cdr_headers2dict(data[cdr_header_start : cdr_header_end])["CDR_length"]
        cdr_bytes = data[cdr_header_end: cdr_header_end + cdr_length]
        # print(cdr_bytes)

        cdr = {}
        # {**doc1, **doc2} - new syntax in 3.5, merge 2 dicts
        cdr["header"] = {**cdr_headers2dict(data[cdr_header_start: cdr_header_end]), **{"cdr #": i + 1}}
        # --- print in json
        # cdr["gprsrecord"] = cdr_decoder(cdr_bytes)
        print(json.dumps(cdr, sort_keys=True, indent=4, separators=(',', ': '), ensure_ascii=False,
                         default=date_handler))
        cdr_decoder(cdr_bytes)
        # ==================

        # open in write+ (create, ocerwrite), bin
        # for test in asn1c or on http://www.marben-products.com/asn.1/services/decoder-asn1-cdr.html
        # with open(str(i) + ".dat", "wb+") as bin_bile:
        #     bin_file.write(cdr_bytes)
        cdr_header_start = cdr_header_end + cdr_length


# ---------------- bytes printing ---------------------
#     print("native string, file size and header length: {}".format(data[:8]))
#     print("native string, file size and header length in hex: ", data[:8].hex())
#     print("file size int: ", str(int.from_bytes(data[:4], "big")))
#     print("header in hex: ", data[4:8].hex())
#     print("header in hex: ", binascii.hexlify(data[4:8]))
#     # https: // docs.python.org / 3 / library / struct.html
#     # > 	big-endian
#     # I 	unsigned int
#     print("header in hex: ", struct.unpack(">I", data[4:8])[0])
#     print("header in hex: ", str(int.from_bytes(data[4:8], "big")))
#     # The value will be 'big' on big-endian (most-significant byte first) platforms,
#     # and 'little' on little-endian (least-significant byte first) platforms.
#     # but in our format first byte has high meaming
#     print("Native byteorder: ", sys.byteorder)
#========================================================
