- [PyASN1](http://pyasn1.sourceforge.net/codecs.html) need structure in internal format
    - for translate need to use [asn1ate](https://github.com/kimgr/asn1ate)
        - `python3 ~/_ALU_priv/python/asn1ate/asn1ate/pyasn1gen.py GPRSChargingDataTypesV1171_py_asn1c.asn > 
        GPRSChargingDataTypesV1171_pyasn_asn1c.py`
        - there could be problem with `env` `PYTHONPATH` set to smth like
        `PYTHONPATH=/home/vtsymbal/_ALU_priv/python/asn1ate`
        - [asn1ate](https://github.com/kimgr/asn1ate) don't support skeleton, all `import` definitions should be in one 
        file  
    - or translate via [asn1c](https://github.com/vlm/asn1c)
        - syntax check and tree correctioncould be done:
        `asn1c -E -P -F  GPRSChargingDataTypesV1171_py.asn  > GPRSChargingDataTypesV1171_py_asn1c.asn`
        - to prepare sources to compile:
        `asn1c -fskeletons-copy -fcompound-names ../GPRSChargingDataTypesV1171_py_asn1c_2.asn`
        - to compile decoder:
        `cc -I. -DPDU=GPRSRecord -o rectangle *.c`
        or put `-DPDU=GPRSRecord` in `Makefile.am.sample`
        and 
        `make -f  Makefile.am.sample`
        or more simple according to doc
        - `converter-sample.c` could be use to create another decoder via `main.c`