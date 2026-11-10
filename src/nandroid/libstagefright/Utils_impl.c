#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d4780(__int64);
__int64 SdkRoutine_86d370(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ec90(_QWORD, _QWORD);
__int64 SdkRoutine_86fe70(_QWORD, _QWORD);
__int64 SdkRoutine_86fe90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86fea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86feb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86fec0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86fee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86fef0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ff00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ff10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ff20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ff30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86ff40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmem_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ABuffer_ABuffer_plt_86e010(_QWORD, _QWORD);
__int64 nandroid_ABuffer_setRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_contains_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setRect_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ColorUtils_convertCodecColorAspectsToPlatformAspects_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ColorUtils_setHDRStaticInfoIntoFormat_plt(_QWORD, _QWORD);
__int64 nandroid_ESDS_Destroy_ESDS_plt(_QWORD);
__int64 nandroid_ESDS_ESDS_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ESDS_InitCheck_plt(_QWORD);
__int64 nandroid_ESDS_getBitRate_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ESDS_getCodecSpecificInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ESDS_getObjectTypeIndication_plt(_QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findCString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findData_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD);
__int64 nandroid_MetaDataBase_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findRect_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_hasData_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_U16_AT_plt(_QWORD);
__int64 nandroid_convertMetaDataToMessageFromMappings_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 strcasecmp_plt(_QWORD, _QWORD);
__int64 strncasecmp_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_c57bc0;
extern _UNKNOWN SdkData_c57bc5;
extern _UNKNOWN SdkData_f4cd90;
extern _UNKNOWN SdkData_f4cd98;
extern _UNKNOWN SdkData_f4cda0;
extern _UNKNOWN SdkData_f4cda8;
extern _UNKNOWN SdkData_f4cdb0;
extern _UNKNOWN SdkData_f4cdb8;
extern _UNKNOWN SdkData_f4cdc0;
extern _UNKNOWN SdkData_f4cdc8;
extern _UNKNOWN SdkData_f4cdd0;
extern _UNKNOWN SdkData_f4cdd8;
extern _UNKNOWN SdkData_f4cde0;
extern _UNKNOWN SdkData_f4cde8;
extern _UNKNOWN SdkData_f4cdf0;
extern _UNKNOWN SdkData_f4cdf8;
extern _UNKNOWN SdkData_f4ce78;
extern _UNKNOWN SdkData_f4cef8;
extern _UNKNOWN SdkData_f4cf78;
extern _UNKNOWN SdkData_f4cff8;
extern _UNKNOWN SdkData_f4d078;
extern _UNKNOWN SdkData_f4d0f8;
extern _UNKNOWN SdkData_f4d178;
extern _UNKNOWN SdkData_f4d1f8;
extern _UNKNOWN SdkData_f4d278;
extern _UNKNOWN SdkData_f4d2f8;
extern _UNKNOWN SdkData_f4d378;
extern _UNKNOWN SdkData_f4d3f8;
extern _UNKNOWN SdkData_f4d478;
extern _UNKNOWN SdkData_f4d5f8;
extern _UNKNOWN SdkData_f4d778;
extern _UNKNOWN SdkData_f4d8f8;
extern _UNKNOWN SdkData_f4da78;
extern _UNKNOWN SdkData_f4dbf8;
extern _UNKNOWN SdkData_f4dd78;
extern _UNKNOWN SdkData_f4def8;
extern _UNKNOWN SdkData_f4e078;
extern _UNKNOWN SdkData_f4e1f8;
extern _UNKNOWN SdkData_f4e378;
extern _UNKNOWN SdkData_f4e4f8;
extern __int64 SdkData_e88330;
extern __int64 SdkData_f4ce58;
extern __int64 SdkData_f4ce60;
extern __int64 SdkData_f4ced8;
extern __int64 SdkData_f4cee0;
extern __int64 SdkData_f4cf58;
extern __int64 SdkData_f4cf60;
extern __int64 SdkData_f4cfd8;
extern __int64 SdkData_f4cfe0;
extern __int64 SdkData_f4d058;
extern __int64 SdkData_f4d060;
extern __int64 SdkData_f4d0d8;
extern __int64 SdkData_f4d0e0;
extern __int64 SdkData_f4d158;
extern __int64 SdkData_f4d160;
extern __int64 SdkData_f4d1d8;
extern __int64 SdkData_f4d1e0;
extern __int64 SdkData_f4d258;
extern __int64 SdkData_f4d260;
extern __int64 SdkData_f4d2d8;
extern __int64 SdkData_f4d2e0;
extern __int64 SdkData_f4d358;
extern __int64 SdkData_f4d360;
extern __int64 SdkData_f4d3d8;
extern __int64 SdkData_f4d3e0;
extern __int64 SdkData_f4d458;
extern __int64 SdkData_f4d460;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88608[403])();
extern void (*SdkData_e88680[388])();
extern void (*SdkData_e886a0[384])();
__int64 nandroid_convertMetaDataToMessage_518130(__int64 a1, __int64* a2);
__int64 Utils_5195a0(__int64 a1, _QWORD* a2);
_BYTE* Utils_5196c0(_BYTE* result, _QWORD* a2);
__int64 Utils_519aa0(__int64* a1, __int64 a2, __int64 a3);
_QWORD* Utils_519c80(_QWORD* result, _QWORD* a2);
__int64 Utils_51a000(__int64 a1, _QWORD* a2);
__int64 Utils_51a4a0(__int64 a1, _QWORD* a2);
__int64 Utils_51a600(__int64 a1, __int64 a2, _QWORD* a3);
_QWORD* Utils_51a980(_QWORD* result, _QWORD* a2);
_QWORD* Utils_51ab40(_QWORD* result, _QWORD* a2);
_QWORD* nandroid_sp_clear(_QWORD* result);

__int64 nandroid_convertMetaDataToMessage_518130(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  atomic_uchar* v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  _QWORD** v11;
  __int64 v12;
  __int64 v13;
  _QWORD** v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  unsigned int v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52[7];
  __int64 v53;
  __int64 v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  int v65;
  int v66;
  int v67;
  __int64 v68;
  unsigned int v69;
  unsigned __int64 v70;
  _BYTE* v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  v2 = *a2;
  if (*a2 != 0) {
    v5 = nandroid_RefBase_decStrong_plt(*a2, a2);
    if (v2 != *a2) {
      nandroid_sp_report_race_plt(v5);
    }
    *a2 = 0;
  }
  if (a1 == 0) {
    return 4294967274LL;
  }
  v75 = 0;
  if ((nandroid_MetaDataBase_findCString_plt(a1, 1835625829, &v75) & 1) == 0) {
    return 4294967274LL;
  }
  v74 = 0;
  v6 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v8 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v8 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
  v10 = SdkRoutine_4c3860(16, 1344, v9);
  nandroid_AMessage_AMessage_plt_86da50();
  v74 = v10;
  nandroid_RefBase_incStrong_plt(v10, &v74);
  nandroid_AMessage_setString_plt_86de10(v74, "mime", v75, -1);
  v73 = v74;
  if (v74 != 0) {
    nandroid_RefBase_incStrong_plt(v74, &v73);
  }
  nandroid_convertMetaDataToMessageFromMappings_plt(a1, &v73);
  if (v73 != 0) {
    nandroid_RefBase_decStrong_plt(v73, &v73);
  }
  v72 = 0;
  v70 = 0;
  v71 = nullptr;
  if ((nandroid_MetaDataBase_findData_plt(a1, 1936025956, &v72, &v71, &v70) &
       1) != 0) {
    v52[0] = 0;
    if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v8 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v11 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    v12 = SdkRoutine_4c3860(16, 64, v11);
    nandroid_ABuffer_ABuffer_plt_86e010(v12, v70);
    v52[0] = v12;
    nandroid_RefBase_incStrong_plt(v12, v52);
    v13 = v52[0];
    if (v52[0] == 0) {
      goto LABEL_173;
    }
    if (*(_QWORD*)(v52[0] + 24) == 0) {
      goto LABEL_171;
    }
    nandroid_AMessage_setBuffer_plt(v74, "ca-session-id", v52);
    memcpy_plt(*(_QWORD*)(v52[0] + 24) + *(_QWORD*)(v52[0] + 40), v71, v70);
    if (v52[0] != 0) {
      nandroid_RefBase_decStrong_plt(v52[0], v52);
    }
  }
  if ((nandroid_MetaDataBase_findData_plt(a1, 1667327075, &v72, &v71, &v70) &
       1) == 0) {
    goto LABEL_24;
  }
  v52[0] = 0;
  if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v8 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v14 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
  v15 = SdkRoutine_4c3860(16, 64, v14);
  nandroid_ABuffer_ABuffer_plt_86e010(v15, v70);
  v52[0] = v15;
  nandroid_RefBase_incStrong_plt(v15, v52);
  v13 = v52[0];
  if (v52[0] == 0) {
    goto LABEL_173;
  }
  if (*(_QWORD*)(v52[0] + 24) == 0) {
  LABEL_171:
    v44 = v52;
  LABEL_172:
    nandroid_RefBase_decStrong_plt(v13, v44);
    goto LABEL_173;
  }
  nandroid_AMessage_setBuffer_plt(v74, "ca-private-data", v52);
  memcpy_plt(*(_QWORD*)(v52[0] + 24) + *(_QWORD*)(v52[0] + 40), v71, v70);
  if (v52[0] != 0) {
    nandroid_RefBase_decStrong_plt(v52[0], v52);
  }
LABEL_24:
  v69 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1667328356, &v69) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "ca-system-id", v69);
  }
  v16 = v75;
  v17 = strncasecmp_plt("video/scrambled", v75, 15);
  if ((_DWORD)v17 == 0 ||
      (_DWORD)(v17 = strncasecmp_plt("audio/scrambled", v16, 15)) == 0) {
    v20 = *a2;
    v21 = v74;
    if (v74 != 0) {
      v17 = nandroid_RefBase_incStrong_plt(v74, a2);
    }
    if (v20 != 0) {
      v17 = nandroid_RefBase_decStrong_plt(v20, a2);
    }
    if (v20 != *a2) {
      nandroid_sp_report_race_plt(v17);
    }
    result = 0;
    *a2 = v21;
    goto LABEL_174;
  }
  v68 = 0;
  if ((nandroid_MetaDataBase_findInt64_plt(a1, 1685418593, &v68) & 1) != 0) {
    nandroid_AMessage_setInt64_plt(v74, "durationUs", v68);
  }
  v67 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1651668069, &v67) & 1) != 0 &&
      v67 >= 1) {
    nandroid_AMessage_setInt32_plt(v74, "bitrate", (unsigned int)v67);
  }
  v66 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1836597874, &v66) & 1) != 0 &&
      v66 >= 1 && v66 >= v67) {
    nandroid_AMessage_setInt32_plt(v74, "max-bitrate", (unsigned int)v66);
  }
  v65 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1937337955, &v65) & 1) != 0 &&
      v65 != 0) {
    nandroid_AMessage_setInt32_plt(v74, "is-sync-frame", 1);
  }
  v64 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1953646916, &v64) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "track-id", v64);
  }
  v63 = 0;
  if ((nandroid_MetaDataBase_findCString_plt(a1, 1818324583, &v63) & 1) != 0) {
    nandroid_AMessage_setString_plt_86de10(v74, "language", v63, -1);
  }
  v18 = v75;
  if ((unsigned int)strncasecmp_plt("video/", v75, 6) != 0 &&
      (unsigned int)strncasecmp_plt("image/", v18, 6) != 0) {
    if ((unsigned int)strncasecmp_plt("audio/", v18, 6) == 0) {
      LODWORD(v52[0]) = 0;
      LODWORD(v54) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 593717358, v52) & 1) == 0 ||
          (nandroid_MetaDataBase_findInt32_plt(a1, 1936880741, &v54) & 1) ==
              0) {
        goto LABEL_149;
      }
      nandroid_AMessage_setInt32_plt(v74, "channel-count", LODWORD(v52[0]));
      nandroid_AMessage_setInt32_plt(v74, "sample-rate", (unsigned int)v54);
      LODWORD(v53) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1651078259, &v53) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "bits-per-sample",
                                       (unsigned int)v53);
      }
      LODWORD(v51) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1667788397, &v51) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "channel-mask", (unsigned int)v51);
      }
      LODWORD(v50) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1701733220, &v50) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "encoder-delay", (unsigned int)v50);
      }
      HIDWORD(v62) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1701733232,
                                               (char*)&v62 + 4) &
           1) != 0) {
        nandroid_AMessage_setInt32_plt(v74, "encoder-padding", HIDWORD(v62));
      }
      LODWORD(v62) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1633973363, &v62) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "is-adts", (unsigned int)v62);
      }
      HIDWORD(v61) = -1;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1633775476,
                                               (char*)&v61 + 4) &
           1) != 0) {
        nandroid_AMessage_setInt32_plt(v74, "aac-profile", HIDWORD(v61));
      }
      LODWORD(v61) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1346588005, &v61) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "pcm-encoding", (unsigned int)v61);
      }
      v60 = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1751216195, &v60) & 1) !=
          0) {
        nandroid_AMessage_setInt32_plt(v74, "haptic-channel-count", v60);
      }
    }
  }
  else {
    LODWORD(v51) = 0;
    LODWORD(v50) = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 2003395700, &v51) & 1) == 0 ||
        (nandroid_MetaDataBase_findInt32_plt(a1, 1751476583, &v50) & 1) == 0) {
      goto LABEL_149;
    }
    nandroid_AMessage_setInt32_plt(v74, "width", (unsigned int)v51);
    nandroid_AMessage_setInt32_plt(v74, "height", (unsigned int)v50);
    v62 = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 1683450212, (char*)&v62 + 4) &
         1) != 0 &&
        (nandroid_MetaDataBase_findInt32_plt(a1, 1682466676, &v62) & 1) != 0) {
      nandroid_AMessage_setInt32_plt(v74, "display-width", HIDWORD(v62));
      nandroid_AMessage_setInt32_plt(v74, "display-height", (unsigned int)v62);
    }
    v61 = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 1935766103, (char*)&v61 + 4) &
         1) != 0 &&
        (nandroid_MetaDataBase_findInt32_plt(a1, 1935766088, &v61) & 1) != 0) {
      nandroid_AMessage_setInt32_plt(v74, "sar-width", HIDWORD(v61));
      nandroid_AMessage_setInt32_plt(v74, "sar-height", (unsigned int)v61);
    }
    if ((unsigned int)strncasecmp_plt("image/", v75, 6) == 0) {
      LODWORD(v52[0]) = 0;
      LODWORD(v54) = 0;
      LODWORD(v53) = 0;
      v60 = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1953066071, v52) & 1) != 0 &&
          (nandroid_MetaDataBase_findInt32_plt(a1, 1953066056, &v54) & 1) !=
              0 &&
          (nandroid_MetaDataBase_findInt32_plt(a1, 1735550034, &v53) & 1) !=
              0 &&
          (nandroid_MetaDataBase_findInt32_plt(a1, 1735550019, &v60) & 1) !=
              0) {
        nandroid_AMessage_setInt32_plt(v74, "tile-width", LODWORD(v52[0]));
        nandroid_AMessage_setInt32_plt(v74, "tile-height", (unsigned int)v54);
        nandroid_AMessage_setInt32_plt(v74, "grid-rows", (unsigned int)v53);
        nandroid_AMessage_setInt32_plt(v74, "grid-cols", v60);
      }
      HIDWORD(v59) = 0;
      if ((nandroid_MetaDataBase_findInt32_plt(a1, 1684434036,
                                               (char*)&v59 + 4) &
           1) != 0 &&
          HIDWORD(v59) != 0) {
        nandroid_AMessage_setInt32_plt(v74, "is-default", 1);
      }
    }
    v60 = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 1668246630, &v60) & 1) != 0) {
      nandroid_AMessage_setInt32_plt(v74, "color-format", v60);
    }
    v59 = 0;
    v57 = 0;
    v58 = 0;
    if ((nandroid_MetaDataBase_findRect_plt(a1, 1668444016, (char*)&v59 + 4,
                                            &v59, &v58, &v57) &
         1) != 0) {
      nandroid_AMessage_setRect_plt(v74, "crop", HIDWORD(v59),
                                    (unsigned int)v59, v58, v57);
    }
    v56 = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 1919906881, &v56) & 1) != 0) {
      nandroid_AMessage_setInt32_plt(v74, "rotation-degrees", v56);
    }
    v55 = 0;
    v52[0] = 0;
    v54 = 0;
    if ((nandroid_MetaDataBase_findData_plt(a1, 1751413331, &v55, v52, &v54) &
         1) != 0 &&
        v55 == 1751413331 && v54 == 25) {
      nandroid_ColorUtils_setHDRStaticInfoIntoFormat_plt(v52[0], &v74);
    }
    if ((nandroid_MetaDataBase_findData_plt(a1, 1751413316, &v55, v52, &v54) &
         1) != 0 &&
        v54 != 0) {
      v53 = 0;
      v22 = SdkRoutine_4d4780(64);
      nandroid_ABuffer_ABuffer_plt_86e010(v22, v54);
      v53 = v22;
      nandroid_RefBase_incStrong_plt(v22, &v53);
      v13 = v53;
      if (v53 == 0) {
        goto LABEL_173;
      }
      v23 = *(_QWORD*)(v53 + 24);
      if (v23 == 0) {
        v44 = &v53;
        goto LABEL_172;
      }
      memcpy_plt(v23 + *(_QWORD*)(v53 + 40), v52[0], v54);
      nandroid_AMessage_setBuffer_plt(v74, "hdr10-plus-info", &v53);
      if (v53 != 0) {
        nandroid_RefBase_decStrong_plt(v53, &v53);
      }
    }
    LODWORD(v53) = 0;
    if ((nandroid_MetaDataBase_findInt32_plt(a1, 1650746736, &v53) & 1) != 0) {
      nandroid_AMessage_setInt32_plt(v74, "bit-depth", (unsigned int)v53);
    }
    Utils_5195a0(a1, &v74);
  }
  HIDWORD(v62) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1768845395, (char*)&v62 + 4) &
       1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "max-input-size", HIDWORD(v62));
  }
  LODWORD(v62) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1835104343, &v62) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "max-width", (unsigned int)v62);
  }
  HIDWORD(v61) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1835104328, (char*)&v61 + 4) &
       1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "max-height", HIDWORD(v61));
  }
  LODWORD(v61) = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1919906881, &v61) & 1) != 0) {
    nandroid_AMessage_setInt32_plt(v74, "rotation-degrees", (unsigned int)v61);
  }
  v60 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a1, 1718775122, &v60) & 1) != 0 &&
      (int)v60 >= 1) {
    nandroid_AMessage_setInt32_plt(v74, "frame-rate", v60);
  }
  if ((nandroid_MetaDataBase_findData_plt(a1, 1635148643, &v72, &v71, &v70) &
       1) == 0) {
    if ((nandroid_MetaDataBase_findData_plt(a1, 1635135843, &v72, &v71, &v70) &
         1) != 0) {
      v40 = SdkRoutine_4d4780(64);
      nandroid_ABuffer_ABuffer_plt_86e010(v40, v70);
      v52[0] = v40;
      nandroid_RefBase_incStrong_plt(v40, v52);
      v13 = v52[0];
      if (v52[0] == 0) {
        goto LABEL_173;
      }
      v41 = *(_QWORD*)(v52[0] + 24);
      if (v41 != 0) {
        memcpy_plt(v41 + *(_QWORD*)(v52[0] + 40), v71, v70);
        nandroid_ABuffer_meta_plt((void*)(&v54));
        nandroid_AMessage_setInt32_plt(v54, "csd", 1);
        if (v54 != 0) {
          nandroid_RefBase_decStrong_plt(v54, &v54);
        }
        nandroid_ABuffer_meta_plt((void*)(&v54));
        nandroid_AMessage_setInt64_plt(v54, "timeUs", 0);
        if (v54 != 0) {
          nandroid_RefBase_decStrong_plt(v54, &v54);
        }
        nandroid_AMessage_setBuffer_plt(v74, "csd-0", v52);
        Utils_519c80((_QWORD*)v52[0], &v74);
        v39 = v52[0];
        if (v52[0] == 0) {
          goto LABEL_209;
        }
        goto LABEL_158;
      }
    }
    else {
      if ((nandroid_MetaDataBase_findData_plt(a1, 1702061171, &v72, &v71,
                                              &v70) &
           1) != 0) {
        memset(v52, 0, sizeof(v52));
        nandroid_ESDS_ESDS_plt(v52, v71, v70);
        if ((unsigned int)nandroid_ESDS_InitCheck_plt(v52) != 0) {
          nandroid_ESDS_Destroy_ESDS_plt(v52);
          result = 4294967274LL;
          goto LABEL_174;
        }
        v53 = 0;
        v54 = 0;
        nandroid_ESDS_getCodecSpecificInfo_plt(v52, &v54, &v53);
        v46 = (_QWORD*)SdkRoutine_4d4780(64);
        nandroid_ABuffer_ABuffer_plt_86e010(v46, v53);
        v51 = v46;
        nandroid_RefBase_incStrong_plt(v46, &v51);
        if (v51 != nullptr) {
          v47 = v51[3];
          if (v47 != 0) {
            memcpy_plt(v47 + v51[5], v54, v53);
            nandroid_ABuffer_meta_plt((void*)(&v50));
            nandroid_AMessage_setInt32_plt(v50, "csd", 1);
            if (v50 != 0) {
              nandroid_RefBase_decStrong_plt(v50, &v50);
            }
            nandroid_ABuffer_meta_plt((void*)(&v50));
            nandroid_AMessage_setInt64_plt(v50, "timeUs", 0);
            if (v50 != 0) {
              nandroid_RefBase_decStrong_plt(v50, &v50);
            }
            nandroid_AMessage_setBuffer_plt(v74, "csd-0", &v51);
            v48 = v75;
            if ((unsigned int)strcasecmp_plt(
                    v75, *(_QWORD*)SdkData_e88680[0]) != 0) {
              if ((unsigned int)strcasecmp_plt(
                      v48, *(_QWORD*)SdkData_e886a0[0]) != 0) {
                if ((unsigned int)strcasecmp_plt(
                        v48, *(_QWORD*)SdkData_e88608[0]) == 0) {
                  Utils_51a980(v51, &v74);
                }
              }
              else {
                Utils_51a4a0((__int64)v52, &v74);
                if ((nandroid_MetaDataBase_findData_plt(a1, 1937000548, &v72,
                                                        &v71, &v70) &
                     1) != 0) {
                  Utils_51a600((__int64)v71, v70, &v74);
                }
              }
            }
            else {
              Utils_51a000((__int64)&v51, &v74);
            }
            LODWORD(v50) = 0;
            HIDWORD(v59) = 0;
            if ((unsigned int)nandroid_ESDS_getBitRate_plt(
                    v52, &v50, (char*)&v59 + 4) == 0) {
              if ((nandroid_MetaDataBase_hasData_plt(a1, 1651668069) & 1) !=
                      0 ||
                  SHIDWORD(v59) < 1) {
                nandroid_AMessage_findInt32_plt(v74, "bitrate",
                                                (char*)&v59 + 4);
              }
              else {
                nandroid_AMessage_setInt32_plt(v74, "bitrate", HIDWORD(v59));
              }
              if ((nandroid_MetaDataBase_hasData_plt(a1, 1836597874) & 1) ==
                      0 &&
                  (int)v50 >= 1 && (unsigned int)v50 >= HIDWORD(v59)) {
                nandroid_AMessage_setInt32_plt(v74, "max-bitrate",
                                               (unsigned int)v50);
              }
            }
            if (v51 != nullptr) {
              nandroid_RefBase_decStrong_plt(v51, &v51);
            }
            nandroid_ESDS_Destroy_ESDS_plt(v52);
            goto LABEL_209;
          }
          nandroid_RefBase_decStrong_plt(v51, &v51);
        }
        nandroid_ESDS_Destroy_ESDS_plt(v52);
        goto LABEL_173;
      }
      if ((nandroid_MetaDataBase_findData_plt(a1, 1987066224, &v72, &v71,
                                              &v70) &
           1) == 0) {
        goto LABEL_209;
      }
      v42 = SdkRoutine_4d4780(64);
      nandroid_ABuffer_ABuffer_plt_86e010(v42, v70);
      v52[0] = v42;
      nandroid_RefBase_incStrong_plt(v42, v52);
      v13 = v52[0];
      if (v52[0] == 0) {
      LABEL_173:
        result = 4294967284LL;
        goto LABEL_174;
      }
      v43 = *(_QWORD*)(v52[0] + 24);
      if (v43 != 0) {
        memcpy_plt(v43 + *(_QWORD*)(v52[0] + 40), v71, v70);
        nandroid_ABuffer_meta_plt((void*)(&v54));
        nandroid_AMessage_setInt32_plt(v54, "csd", 1);
        if (v54 != 0) {
          nandroid_RefBase_decStrong_plt(v54, &v54);
        }
        nandroid_ABuffer_meta_plt((void*)(&v54));
        nandroid_AMessage_setInt64_plt(v54, "timeUs", 0);
        if (v54 != 0) {
          nandroid_RefBase_decStrong_plt(v54, &v54);
        }
        nandroid_AMessage_setBuffer_plt(v74, "csd-0", v52);
        Utils_51ab40((_QWORD*)v52[0], &v74);
        v39 = v52[0];
        if (v52[0] == 0) {
          goto LABEL_209;
        }
        goto LABEL_158;
      }
    }
    goto LABEL_171;
  }
  if (v70 < 7 || (v24 = v71, *v71 != 1)) {
  LABEL_149:
    result = 4294967274LL;
    goto LABEL_174;
  }
  Utils_5196c0(v71, &v74);
  v25 = v24[5];
  v52[0] = 0;
  v70 -= 6LL;
  v26 = SdkRoutine_4d4780(64);
  nandroid_ABuffer_ABuffer_plt_86e010(v26, 1024);
  v52[0] = v26;
  nandroid_RefBase_incStrong_plt(v26, v52);
  if (v52[0] == 0) {
    goto LABEL_173;
  }
  if (*(_QWORD*)(v52[0] + 24) == 0) {
  LABEL_188:
    result = 4294967284LL;
    goto LABEL_190;
  }
  v27 = v25 & 0x1F;
  v28 = v24 + 6;
  nandroid_ABuffer_setRange_plt(v52[0], 0, 0);
  if ((_DWORD)v27 != 0) {
    v29 = v70;
    while (v29 >= 2) {
      v30 = (unsigned __int16)nandroid_U16_AT_plt(v28);
      v70 -= 2LL;
      if (v70 < v30) {
        break;
      }
      v31 = (__int64)(v28 + 2);
      result = Utils_519aa0(v52, v31, v30);
      if ((_DWORD)result != 0) {
        goto LABEL_190;
      }
      v28 = (unsigned __int8*)(v31 + v30);
      --v27;
      v29 = v70 - v30;
      v70 -= v30;
      if (v27 == 0) {
        goto LABEL_131;
      }
    }
    goto LABEL_189;
  }
LABEL_131:
  nandroid_ABuffer_meta_plt((void*)(&v54));
  nandroid_AMessage_setInt32_plt(v54, "csd", 1);
  if (v54 != 0) {
    nandroid_RefBase_decStrong_plt(v54, &v54);
  }
  nandroid_ABuffer_meta_plt((void*)(&v54));
  nandroid_AMessage_setInt64_plt(v54, "timeUs", 0);
  if (v54 != 0) {
    nandroid_RefBase_decStrong_plt(v54, &v54);
  }
  nandroid_AMessage_setBuffer_plt(v74, "csd-0", v52);
  v32 = SdkRoutine_4d4780(64);
  nandroid_ABuffer_ABuffer_plt_86e010(v32, 1024);
  SdkRoutine_86ec90(v52, v32);
  if (v52[0] == 0) {
    goto LABEL_173;
  }
  if (*(_QWORD*)(v52[0] + 24) == 0) {
    goto LABEL_188;
  }
  nandroid_ABuffer_setRange_plt(v52[0], 0, 0);
  if (v70 == 0) {
  LABEL_189:
    result = 4294967274LL;
  LABEL_190:
    if (v52[0] != 0) {
      v49 = result;
      nandroid_RefBase_decStrong_plt(v52[0], v52);
      result = v49;
    }
    goto LABEL_174;
  }
  v35 = *v28;
  v33 = v28 + 1;
  v34 = v35;
  v36 = --v70;
  if (v35 != 0) {
    while (v36 >= 2) {
      v37 = (unsigned __int16)nandroid_U16_AT_plt(v33);
      v70 -= 2LL;
      if (v70 < v37) {
        break;
      }
      v38 = (__int64)(v33 + 2);
      result = Utils_519aa0(v52, v38, v37);
      if ((_DWORD)result != 0) {
        goto LABEL_190;
      }
      v33 = (unsigned __int8*)(v38 + v37);
      --v34;
      v36 = v70 - v37;
      v70 -= v37;
      if (v34 == 0) {
        goto LABEL_143;
      }
    }
    goto LABEL_189;
  }
LABEL_143:
  nandroid_ABuffer_meta_plt((void*)(&v54));
  nandroid_AMessage_setInt32_plt(v54, "csd", 1);
  if (v54 != 0) {
    nandroid_RefBase_decStrong_plt(v54, &v54);
  }
  nandroid_ABuffer_meta_plt((void*)(&v54));
  nandroid_AMessage_setInt64_plt(v54, "timeUs", 0);
  if (v54 != 0) {
    nandroid_RefBase_decStrong_plt(v54, &v54);
  }
  nandroid_AMessage_setBuffer_plt(v74, "csd-1", v52);
  v39 = v52[0];
  if (v52[0] != 0) {
  LABEL_158:
    nandroid_RefBase_decStrong_plt(v39, v52);
  }
LABEL_209:
  SdkRoutine_86fe70(a2, &v74);
  result = 0;
LABEL_174:
  if (v74 != 0) {
    v45 = result;
    nandroid_RefBase_decStrong_plt(v74, &v74);
    return v45;
  }
  return result;
}

__int64 Utils_5195a0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  unsigned int v5;
  __int64 v6;
  _DWORD v7[4];
  __int64 v8;
  __int64 v9;

  v8 = 0;
  v9 = 0;
  nandroid_MetaDataBase_findInt32_plt(a1, 1666346599, (char*)&v9 + 4);
  nandroid_MetaDataBase_findInt32_plt(a1, 1666216557, &v9);
  nandroid_MetaDataBase_findInt32_plt(a1, 1950774638, (char*)&v8 + 4);
  nandroid_MetaDataBase_findInt32_plt(a1, 1666020472, &v8);
  v6 = 0;
  v5 = 0;
  v7[0] = HIDWORD(v9);
  v7[1] = v9;
  v7[2] = HIDWORD(v8);
  v7[3] = v8;
  result = nandroid_ColorUtils_convertCodecColorAspectsToPlatformAspects_plt(
      v7, (char*)&v6 + 4, &v6, &v5);
  if ((_DWORD)result == 0) {
    if (HIDWORD(v6) != 0) {
      result = nandroid_AMessage_setInt32_plt(*a2, "color-range", HIDWORD(v6));
    }
    if ((_DWORD)v6 != 0) {
      result = nandroid_AMessage_setInt32_plt(*a2, "color-standard",
                                              (unsigned int)v6);
    }
    if (v5 != 0) {
      return nandroid_AMessage_setInt32_plt(*a2, "color-transfer", v5);
    }
  }
  return result;
}

_BYTE* Utils_5196c0(_BYTE* result, _QWORD* a2)
{
  int v4;
  int v5;
  unsigned __int8* v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  int v10;
  unsigned int v11;
  unsigned __int8* v12;
  _QWORD* v13;
  int v14;
  _QWORD* v15;
  int v16;
  struct {
    _BYTE v17[4];
    int v18;
    char v19;
    char gap17_[3];
    int v20;
    char v21;
    char gap25_[3];
    int v22;
    char v23;
    char gap33_[3];
    int v24;
    char v25;
    char gap41_[3];
    int v26;
    char v27;
    char gap49_[3];
    int v28;
    char v29;
    char gap57_[3];
    int v30;
    char v31;
    char gap65_[3];
    int v32;
    char v33;
    char gap73_[3];
    int v34;
    char v35;
    char gap81_[3];
    int v36;
    char v37;
    char gap89_[3];
    int v38;
    char v39;
    char gap97_[3];
    int v40;
    char v41;
    char gap105_[3];
    int v42;
    char v43;
    char gap113_[3];
    int v44;
    char v45;
    char gap121_[3];
    int v46;
    char v47;
    char gap129_[3];
    int v48;
    char v49;
    char gap137_[3];
    int v50;
    char v51;
    char gap145_[3];
    int v52;
    char v53;
    char gap153_[3];
    int v54;
    char v55;
    char gap161_[3];
    int v56;
    char v57;
    char gap169_[3];
    int v58;
  } v17_;

  if (*result == 1) {
    v4 = (unsigned __int8)result[1];
    v5 = (unsigned __int8)result[3];
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cd90,
                              memory_order_acquire) &
         1) == 0) {
      v13 = a2;
      v14 = v4;
      result = (_BYTE*)__cxa_guard_acquire_plt(&SdkData_f4cd90);
      v4 = v14;
      a2 = v13;
      if ((_DWORD)result != 0) {
        v17_.v17[0] = 9;
        v17_.v18 = 2;
        v17_.v24 = 2;
        v17_.v20 = 1;
        v17_.v19 = 10;
        v17_.v31 = 21;
        v17_.v22 = 4;
        v17_.v21 = 11;
        v17_.v23 = 11;
        v17_.v32 = 64;
        v17_.v25 = 12;
        v17_.v33 = 22;
        v17_.v26 = 8;
        v17_.v34 = 128;
        v17_.v27 = 13;
        v17_.v35 = 30;
        v17_.v28 = 16;
        v17_.v36 = 256;
        v17_.v29 = 20;
        v17_.v37 = 31;
        v17_.v30 = 32;
        v17_.v39 = 32;
        v17_.v38 = 512;
        v17_.v40 = 1024;
        v17_.v41 = 40;
        v17_.v42 = 2048;
        v17_.v43 = 41;
        v17_.v44 = 4096;
        v17_.v45 = 42;
        v17_.v46 = 0x2000;
        v17_.v47 = 50;
        v17_.v48 = 0x4000;
        v17_.v49 = 51;
        v17_.v50 = 0x8000;
        v17_.v51 = 52;
        v17_.v52 = 0x10000;
        v17_.v53 = 60;
        v17_.v54 = 0x20000;
        v17_.v55 = 61;
        v17_.v56 = 0x40000;
        v17_.v57 = 62;
        v17_.v58 = 0x80000;
        SdkRoutine_86fe90(&SdkData_f4cdf8, v17_.v17, 21, &SdkData_f4d478, 384);
        fw_rtld_RegisterCrtDestructor();
        result = (_BYTE*)__cxa_guard_release_plt(&SdkData_f4cd90);
        v4 = v14;
        a2 = v13;
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cd98,
                              memory_order_acquire) &
         1) != 0 ||
        (v15 = a2, v16 = v4,
         result = (_BYTE*)__cxa_guard_acquire_plt(&SdkData_f4cd98), v4 = v16,
         a2 = v15, (_DWORD)result == 0)) {
      v6 = (unsigned __int8*)SdkData_f4ced8;
      v7 = SdkData_f4cee0;
      if (SdkData_f4ced8 != SdkData_f4cee0) {
        goto LABEL_5;
      }
    }
    else {
      v17_.v17[0] = 66;
      v17_.v18 = 1;
      v17_.v19 = 77;
      v17_.v20 = 2;
      v17_.v21 = 88;
      v17_.v22 = 4;
      v17_.v23 = 100;
      v17_.v24 = 8;
      v17_.v25 = 110;
      v17_.v26 = 16;
      v17_.v27 = 122;
      v17_.v28 = 32;
      v17_.v29 = -12;
      v17_.v30 = 64;
      SdkRoutine_86fea0(&SdkData_f4ce78, v17_.v17, 7, &SdkData_f4d5f8, 384);
      fw_rtld_RegisterCrtDestructor();
      result = (_BYTE*)__cxa_guard_release_plt(&SdkData_f4cd98);
      v4 = v16;
      a2 = v15;
      v6 = (unsigned __int8*)SdkData_f4ced8;
      v7 = SdkData_f4cee0;
      if (SdkData_f4ced8 == SdkData_f4cee0) {
        return result;
      }
    LABEL_5:
      while (*v6 != v4) {
        v6 += 8;
        if (v6 == (unsigned __int8*)v7) {
          return result;
        }
      }
      v8 = *((_DWORD*)v6 + 1);
      v9 = a2;
      if (v8 == 8) {
        v10 = 4;
      }
      else {
        v10 = *((_DWORD*)v6 + 1);
      }
      if (v8 == 4) {
        v11 = 8;
      }
      else {
        v11 = v10;
      }
      result = (_BYTE*)nandroid_AMessage_setInt32_plt(*a2, "profile", v11);
      v12 = (unsigned __int8*)SdkData_f4ce58;
      if (SdkData_f4ce58 == SdkData_f4ce60) {
      LABEL_17:
        if (v11 > 8) {
          return result;
        }
        goto LABEL_20;
      }
      while (*v12 != v5) {
        v12 += 8;
        if (v12 == (unsigned __int8*)SdkData_f4ce60) {
          goto LABEL_17;
        }
      }
      result = (_BYTE*)nandroid_AMessage_setInt32_plt(
          *v9, "level", *((unsigned int*)v12 + 1));
      if (v11 <= 8) {
      LABEL_20:
        if (((1 << v11) & 0x116) != 0) {
          return (_BYTE*)nandroid_AMessage_setInt32_plt(*v9, "bit-depth", 1);
        }
      }
    }
  }
  return result;
}

__int64 Utils_519aa0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD** v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;

  v3 = *a1;
  v4 = a3 + 4;
  v8 = *(_QWORD*)(*a1 + 40);
  v7 = *(_QWORD*)(*a1 + 48);
  if (a3 + 4 + v7 <= (unsigned __int64)(*(_QWORD*)(*a1 + 32) - v8)) {
  LABEL_14:
    *(_DWORD*)(*(_QWORD*)(v3 + 24) + v8 + v7) = 0x1000000;
    memcpy_plt(*(_QWORD*)(*a1 + 24) + *(_QWORD*)(*a1 + 40) +
                   *(_QWORD*)(*a1 + 48) + 4LL,
               a2, a3);
    nandroid_ABuffer_setRange_plt(*a1, *(_QWORD*)(*a1 + 40),
                                  v4 + *(_QWORD*)(*a1 + 48));
    return 0;
  }
  v20 = 0;
  v9 = a2;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v11 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  v13 = SdkRoutine_4c3860(16, 64, v12);
  nandroid_ABuffer_ABuffer_plt_86e010(v13, a3 + *(_QWORD*)(*a1 + 48) + 1028);
  v20 = v13;
  nandroid_RefBase_incStrong_plt(v13, &v20);
  if (v20 != 0) {
    v14 = *(_QWORD*)(v20 + 24);
    if (v14 != 0) {
      memcpy_plt(v14 + *(_QWORD*)(v20 + 40),
                 *(_QWORD*)(*a1 + 24) + *(_QWORD*)(*a1 + 40),
                 *(_QWORD*)(*a1 + 48));
      v15 = nandroid_ABuffer_setRange_plt(v20, 0, *(_QWORD*)(*a1 + 48));
      v16 = *a1;
      v17 = v20;
      if (v20 != 0) {
        v15 = nandroid_RefBase_incStrong_plt(v20, a1);
      }
      if (v16 != 0) {
        v15 = nandroid_RefBase_decStrong_plt(v16, a1);
      }
      if (v16 != *a1) {
        nandroid_sp_report_race_plt(v15);
      }
      v18 = v20;
      *a1 = v17;
      if (v18 != 0) {
        nandroid_RefBase_decStrong_plt(v18, &v20);
      }
      v3 = *a1;
      a2 = v9;
      v8 = *(_QWORD*)(*a1 + 40);
      v7 = *(_QWORD*)(*a1 + 48);
      goto LABEL_14;
    }
    nandroid_RefBase_decStrong_plt(v20, &v20);
  }
  return 4294967284LL;
}

_QWORD* Utils_519c80(_QWORD* result, _QWORD* a2)
{
  unsigned __int8* v4;
  unsigned int v5;
  unsigned __int8 v6;
  unsigned __int64* v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  struct {
    _WORD v18[2];
    int v19;
    __int16 v20;
    char gap10_[2];
    int v21;
    char v22;
    char gap17_[3];
    int v23;
    char v24;
    char gap25_[3];
    int v25;
    char v26;
    char gap33_[3];
    int v27;
    char v28;
    char gap41_[3];
    int v29;
    char v30;
    char gap49_[3];
    int v31;
    char v32;
    char gap57_[3];
    int v33;
    char v34;
    char gap65_[3];
    int v35;
    char v36;
    char gap73_[3];
    int v37;
    char v38;
    char gap81_[3];
    int v39;
    char v40;
    char gap89_[3];
    int v41;
    char v42;
    char gap97_[3];
    int v43;
    char v44;
    char gap105_[3];
    int v45;
    char v46;
    char gap113_[3];
    int v47;
    char v48;
    char gap121_[3];
    int v49;
    char v50;
    char gap129_[3];
    int v51;
    char v52;
    char gap137_[3];
    int v53;
    char v54;
    char gap145_[3];
    int v55;
    char v56;
    char gap153_[3];
    int v57;
    char v58;
    char gap161_[3];
    int v59;
    char v60;
    char gap169_[3];
    int v61;
    char v62;
    char gap177_[3];
    int v63;
    char v64;
    char gap185_[3];
    int v65;
  } v18_;

  if (result[6] >= 4u) {
    v4 = (unsigned __int8*)(result[3] + result[5]);
    if (*v4 == 129) {
      v5 = v4[1];
      v6 = v4[2];
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cda0,
                                memory_order_acquire) &
           1) == 0) {
        v16 = a2;
        result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cda0);
        a2 = v16;
        if ((_DWORD)result != 0) {
          v18_.v18[0] = 0;
          v18_.v19 = 1;
          v18_.v20 = 1;
          v18_.v21 = 1;
          SdkRoutine_86feb0(&SdkData_f4cef8, v18_.v18, 2, &SdkData_f4d778, 384);
          fw_rtld_RegisterCrtDestructor();
          result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cda0);
          a2 = v16;
        }
      }
      v7 = (unsigned __int64*)SdkData_f4cf58;
      if (SdkData_f4cf58 != SdkData_f4cf60) {
        v8 = (v6 & 0x40) != 0;
        while (1) {
          v10 = *v7++;
          v9 = v10;
          v11 = BYTE1(v10);
          if (v8 == (unsigned __int8)v10 && v5 >> 5 == v11) {
            break;
          }
          if (v7 == (unsigned __int64*)SdkData_f4cf60) {
            goto LABEL_16;
          }
        }
        v13 = a2;
        nandroid_AMessage_setInt32_plt(*a2, "profile", HIDWORD(v9));
        if (v8 != 0) {
          v14 = 2;
        }
        else {
          v14 = 1;
        }
        result =
            (_QWORD*)nandroid_AMessage_setInt32_plt(*v13, "bit-depth", v14);
        a2 = v13;
      }
    LABEL_16:
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cda8,
                                memory_order_acquire) &
           1) == 0) {
        v17 = a2;
        result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cda8);
        a2 = v17;
        if ((_DWORD)result != 0) {
          LOBYTE(v18_.v18[0]) = 0;
          v18_.v19 = 1;
          LOBYTE(v18_.v20) = 1;
          v18_.v21 = 2;
          v18_.v22 = 2;
          v18_.v28 = 5;
          v18_.v23 = 4;
          v18_.v24 = 3;
          v18_.v26 = 4;
          v18_.v29 = 32;
          v18_.v25 = 8;
          v18_.v27 = 16;
          v18_.v34 = 8;
          v18_.v50 = 16;
          v18_.v30 = 6;
          v18_.v35 = 256;
          v18_.v51 = 0x10000;
          v18_.v31 = 64;
          v18_.v36 = 9;
          v18_.v52 = 17;
          v18_.v32 = 7;
          v18_.v37 = 512;
          v18_.v53 = 0x20000;
          v18_.v33 = 128;
          v18_.v38 = 10;
          v18_.v54 = 18;
          v18_.v39 = 1024;
          v18_.v55 = 0x40000;
          v18_.v40 = 11;
          v18_.v56 = 19;
          v18_.v41 = 2048;
          v18_.v57 = 0x80000;
          v18_.v42 = 12;
          v18_.v58 = 20;
          v18_.v43 = 4096;
          v18_.v59 = 0x100000;
          v18_.v44 = 13;
          v18_.v60 = 21;
          v18_.v45 = 0x2000;
          v18_.v61 = 0x200000;
          v18_.v46 = 14;
          v18_.v62 = 22;
          v18_.v47 = 0x4000;
          v18_.v63 = 0x400000;
          v18_.v48 = 15;
          v18_.v64 = 23;
          v18_.v49 = 0x8000;
          v18_.v65 = 0x800000;
          SdkRoutine_86fec0(&SdkData_f4cf78, v18_.v18, 24, &SdkData_f4d8f8,
                            384);
          fw_rtld_RegisterCrtDestructor();
          result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cda8);
          a2 = v17;
        }
      }
      v15 = SdkData_f4cfd8;
      if (SdkData_f4cfd8 != SdkData_f4cfe0) {
        while (*(_BYTE*)v15 != (v5 & 0x1F)) {
          v15 += 8;
          if (v15 == SdkData_f4cfe0) {
            return result;
          }
        }
        return (_QWORD*)nandroid_AMessage_setInt32_plt(
            *a2, "level", *(unsigned int*)(v15 + 4));
      }
    }
  }
  return result;
}

__int64 Utils_51a000(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  unsigned __int8* v7;
  __int64 v8;
  unsigned int v9;
  char v10[4];
  __int64 v11;
  char v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;
  __int64 v19;
  char v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  char v26;
  __int64 v27;
  char v28;
  __int64 v29;
  char v30;
  __int64 v31;
  char v32;
  __int64 v33;
  char v34;
  __int64 v35;
  char v36;
  __int64 v37;
  char v38;
  __int64 v39;
  char v40;
  __int64 v41;
  char v42;
  __int64 v43;
  char v44;
  __int64 v45;
  char v46;
  __int64 v47;
  char v48;
  __int64 v49;
  char v50;
  __int64 v51;
  char v52;
  __int64 v53;
  char v54;
  __int64 v55;
  char v56;
  __int64 v57;
  char v58;
  __int64 v59;
  char v60;
  __int64 v61;
  char v62;
  __int64 v63;
  char v64;
  __int64 v65;
  char v66;
  __int64 v67;
  char v68;
  __int64 v69;
  char v70;
  __int64 v71;
  char v72;
  __int64 v73;
  char v74;
  __int64 v75;
  char v76;
  __int64 v77;
  char v78;
  __int64 v79;
  char v80;
  __int64 v81;
  char v82;
  __int64 v83;
  char v84;
  __int64 v85;
  char v86;
  __int64 v87;
  char v88;
  __int64 v89;
  char v90;
  __int64 v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  char v96;
  __int64 v97;
  char v98;
  __int64 v99;
  char v100;
  __int64 v101;
  char v102;
  __int64 v103;
  char v104;
  __int64 v105;

  v4 = *(_QWORD*)(*(_QWORD*)a1 + 24LL) + *(_QWORD*)(*(_QWORD*)a1 + 40LL);
  result = memmem_plt(v4, *(_QWORD*)(*(_QWORD*)a1 + 48LL), &SdkData_c57bc0, 4);
  if (result != 0 &&
      result + 4 < (unsigned __int64)(v4 + *(_QWORD*)(*(_QWORD*)a1 + 48LL))) {
    v6 = *(unsigned __int8*)(result + 4);
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdb0,
                              memory_order_acquire) &
         1) != 0 ||
        (_DWORD)(result = __cxa_guard_acquire_plt(&SdkData_f4cdb0)) == 0) {
      v7 = (unsigned __int8*)SdkData_f4d058;
      v8 = SdkData_f4d060;
      if (SdkData_f4d058 != SdkData_f4d060) {
        goto LABEL_5;
      }
    }
    else {
      v16 = 4;
      v42 = 81;
      v11 = 0x400000001LL;
      v14 = 3;
      v13 = 0x800000001LL;
      v17 = 0x4000000001LL;
      v43 = 0x400000020LL;
      v10[0] = 1;
      v15 = 0x1000000001LL;
      v12 = 2;
      v18 = 5;
      v44 = 97;
      v45 = 0x400000040LL;
      v19 = 0x8000000001LL;
      v46 = 98;
      v20 = 6;
      v47 = 0x800000040LL;
      v48 = 99;
      v21 = 0x10000000001LL;
      v49 = 0x400000080LL;
      v22 = 8;
      v50 = 100;
      v23 = 0x100000001LL;
      v51 = 0x800000080LL;
      v24 = 9;
      v25 = 0x200000001LL;
      v26 = 16;
      v27 = 0x100000002LL;
      v28 = 17;
      v29 = 0x400000002LL;
      v30 = 18;
      v31 = 0x800000002LL;
      v32 = 33;
      v33 = 0x400000004LL;
      v34 = 34;
      v35 = 0x800000004LL;
      v36 = 50;
      v37 = 0x800000008LL;
      v38 = 51;
      v39 = 0x1000000008LL;
      v52 = 113;
      v40 = 52;
      v53 = 0x400000100LL;
      v54 = 114;
      v41 = 0x2000000008LL;
      v55 = 0x800000100LL;
      v56 = -127;
      v57 = 0x400000200LL;
      v58 = -126;
      v59 = 0x800000200LL;
      v60 = -111;
      v61 = 0x400000400LL;
      v62 = -110;
      v63 = 0x800000400LL;
      v64 = -109;
      v65 = 0x1000000400LL;
      v66 = -108;
      v67 = 0x2000000400LL;
      v68 = -95;
      v75 = 0x400001000LL;
      v69 = 0x400000800LL;
      v76 = -78;
      v70 = -94;
      v77 = 0x800001000LL;
      v71 = 0x800000800LL;
      v84 = -62;
      v78 = -77;
      v72 = -93;
      v79 = 0x1000001000LL;
      v86 = -47;
      v73 = 0x1000000800LL;
      v85 = 0x800002000LL;
      v80 = -76;
      v74 = -79;
      v81 = 0x2000001000LL;
      v92 = -16;
      v82 = -63;
      v93 = 0x100008000LL;
      v83 = 0x400002000LL;
      v94 = -15;
      v87 = 0x400004000LL;
      v95 = 0x400008000LL;
      v88 = -46;
      v96 = -14;
      v89 = 0x800004000LL;
      v97 = 0x800008000LL;
      v90 = -45;
      v98 = -13;
      v91 = 0x1000004000LL;
      v99 = 0x1000008000LL;
      v100 = -12;
      v101 = 0x2000008000LL;
      v102 = -11;
      v103 = 0x8000008000LL;
      v104 = -9;
      v105 = 0x1800008000LL;
      SdkRoutine_86fee0(&SdkData_f4cff8, v10, 48, &SdkData_f4e4f8, 768);
      fw_rtld_RegisterCrtDestructor();
      result = __cxa_guard_release_plt(&SdkData_f4cdb0);
      v7 = (unsigned __int8*)SdkData_f4d058;
      v8 = SdkData_f4d060;
      if (SdkData_f4d058 != SdkData_f4d060) {
      LABEL_5:
        while (*v7 != v6) {
          v7 += 12;
          if (v7 == (unsigned __int8*)v8) {
            return result;
          }
        }
        v9 = *((_DWORD*)v7 + 2);
        nandroid_AMessage_setInt32_plt(*a2, "profile",
                                       *((unsigned int*)v7 + 1));
        return nandroid_AMessage_setInt32_plt(*a2, "level", v9);
      }
    }
  }
  return result;
}

__int64 Utils_51a4a0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  unsigned __int8* v4;
  struct {
    char v5[4];
    int v6;
    char v7;
    char gap21_[3];
    int v8;
    char v9;
    char gap29_[3];
    int v10;
    char v11;
    char gap37_[3];
    int v12;
    char v13;
    char gap45_[3];
    int v14;
    char v15;
    char gap53_[3];
    int v16;
  } v5_;
  _BYTE v17[4];

  v17[0] = 0;
  result = nandroid_ESDS_getObjectTypeIndication_plt(a1, v17);
  if ((_DWORD)result == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdb8,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire_plt(&SdkData_f4cdb8);
      if ((_DWORD)result != 0) {
        v5_.v6 = 0;
        v5_.v5[0] = 96;
        v5_.v7 = 97;
        v5_.v8 = 1;
        v5_.v9 = 98;
        v5_.v10 = 3;
        v5_.v11 = 99;
        v5_.v12 = 4;
        v5_.v13 = 100;
        v5_.v14 = 5;
        v5_.v15 = 101;
        v5_.v16 = 2;
        SdkRoutine_86fef0(&SdkData_f4d078, v5_.v5, 6, &SdkData_f4da78, 384);
        fw_rtld_RegisterCrtDestructor();
        result = __cxa_guard_release_plt(&SdkData_f4cdb8);
      }
    }
    v4 = (unsigned __int8*)SdkData_f4d0d8;
    if (SdkData_f4d0d8 != SdkData_f4d0e0) {
      while (*v4 != v17[0]) {
        v4 += 8;
        if (v4 == (unsigned __int8*)SdkData_f4d0e0) {
          return result;
        }
      }
      return nandroid_AMessage_setInt32_plt(*a2, "profile",
                                            *((unsigned int*)v4 + 1));
    }
  }
  return result;
}

__int64 Utils_51a600(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 result;
  unsigned __int8* v7;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned __int8 v12;
  unsigned __int8* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  int v18;
  _BYTE v19[4];
  __int64 v20;
  int v21;
  __int64 v22;
  char v23;
  int v24;
  char v25;
  int v26;

  result = memmem_plt(a1, a2, &SdkData_c57bc5, 4);
  v7 = (unsigned __int8*)(result + 5);
  if (result != 0 && (unsigned __int64)v7 < a1 + a2) {
    v9 = *(unsigned __int8*)(result + 4);
    if ((v9 & 0xF0) == 0x10) {
      v10 = *v7;
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdc0,
                                memory_order_acquire) &
           1) == 0) {
        v17 = v10;
        result = __cxa_guard_acquire_plt(&SdkData_f4cdc0);
        v10 = v17;
        if ((_DWORD)result != 0) {
          LODWORD(v20) = 0;
          v19[0] = 80;
          BYTE4(v20) = 64;
          v21 = 1;
          LOBYTE(v22) = 48;
          HIDWORD(v22) = 3;
          v23 = 32;
          v24 = 4;
          v25 = 16;
          v26 = 5;
          SdkRoutine_86fef0(&SdkData_f4d0f8, v19, 5, &SdkData_f4da78, 384);
          fw_rtld_RegisterCrtDestructor();
          result = __cxa_guard_release_plt(&SdkData_f4cdc0);
          v10 = v17;
        }
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdc8,
                                memory_order_acquire) &
           1) == 0) {
        v18 = v10;
        result = __cxa_guard_acquire_plt(&SdkData_f4cdc8);
        v10 = v18;
        if ((_DWORD)result != 0) {
          LODWORD(v20) = 0;
          v19[0] = 10;
          BYTE4(v20) = 8;
          v24 = 3;
          v21 = 1;
          v23 = 4;
          v26 = 4;
          LOBYTE(v22) = 6;
          HIDWORD(v22) = 2;
          v25 = 2;
          SdkRoutine_86ff00(&SdkData_f4d178, v19, 5, &SdkData_f4dbf8, 384);
          fw_rtld_RegisterCrtDestructor();
          result = __cxa_guard_release_plt(&SdkData_f4cdc8);
          v10 = v18;
        }
      }
      v11 = v10 << 24;
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdd0,
                                memory_order_acquire) &
           1) == 0) {
        result = __cxa_guard_acquire_plt(&SdkData_f4cdd0);
        if ((_DWORD)result != 0) {
          v19[0] = -123;
          v20 = 0x100000002LL;
          LOBYTE(v21) = -126;
          v22 = 0x300000002LL;
          SdkRoutine_86ff10(&SdkData_f4d1f8, v19, 2, &SdkData_f4dd78, 384);
          fw_rtld_RegisterCrtDestructor();
          result = __cxa_guard_release_plt(&SdkData_f4cdd0);
        }
      }
      v12 = __PAIR64__(v9, v11) >> 28;
      v13 = (unsigned __int8*)SdkData_f4d258;
      if (SdkData_f4d258 != SdkData_f4d260) {
        while (*v13 != v12) {
          v13 += 12;
          if (v13 == (unsigned __int8*)SdkData_f4d260) {
            goto LABEL_14;
          }
        }
        v15 = *((_DWORD*)v13 + 2);
        nandroid_AMessage_setInt32_plt(*a3, "profile",
                                       *((unsigned int*)v13 + 1));
        return nandroid_AMessage_setInt32_plt(*a3, "level", v15);
      }
    LABEL_14:
      v14 = SdkData_f4d158;
      if (SdkData_f4d158 != SdkData_f4d160) {
        while (*(_BYTE*)v14 != (v12 & 0x70)) {
          v14 += 8;
          if (v14 == SdkData_f4d160) {
            return result;
          }
        }
        result = nandroid_AMessage_setInt32_plt(*a3, "profile",
                                                *(unsigned int*)(v14 + 4));
        v16 = SdkData_f4d1d8;
        if (SdkData_f4d1d8 != SdkData_f4d1e0) {
          while (*(_BYTE*)v16 != (v12 & 0xF)) {
            v16 += 8;
            if (v16 == SdkData_f4d1e0) {
              return result;
            }
          }
          v15 = *(_DWORD*)(v16 + 4);
          return nandroid_AMessage_setInt32_plt(*a3, "level", v15);
        }
      }
    }
  }
  return result;
}

_QWORD* Utils_51a980(_QWORD* result, _QWORD* a2)
{
  int v5;
  unsigned __int16* v6;
  __int64 v7;
  int v8;
  struct {
    __int16 v9[2];
    int v10;
    __int16 v11;
    char gap18_[2];
    int v12;
    __int16 v13;
    char gap26_[2];
    int v14;
    __int16 v15;
    char gap34_[2];
    int v16;
    __int16 v17;
    char gap42_[2];
    int v18;
    __int16 v19;
    char gap50_[2];
    int v20;
    __int16 v21;
    char gap58_[2];
    int v22;
    __int16 v23;
    char gap66_[2];
    int v24;
    __int16 v25;
    char gap74_[2];
    int v26;
    __int16 v27;
    char gap82_[2];
    int v28;
    __int16 v29;
    char gap90_[2];
    int v30;
  } v9_;

  if (result[6] >= 2u) {
    result = (_QWORD*)nandroid_U16_AT_plt(result[3] + result[5]);
    v5 = (unsigned __int16)result >> 11;
    if (v5 == 31) {
      v5 = (((unsigned int)result >> 5) & 0x3F) + 32;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdd8,
                              memory_order_acquire) &
         1) != 0 ||
        (v8 = v5, result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cdd8),
         v5 = v8, (_DWORD)result == 0)) {
      v6 = (unsigned __int16*)SdkData_f4d2d8;
      v7 = SdkData_f4d2e0;
      if (SdkData_f4d2d8 != SdkData_f4d2e0) {
        goto LABEL_6;
      }
    }
    else {
      v9_.v9[0] = 1;
      v9_.v10 = 1;
      v9_.v11 = 2;
      v9_.v12 = 2;
      v9_.v13 = 3;
      v9_.v14 = 3;
      v9_.v15 = 4;
      v9_.v16 = 4;
      v9_.v17 = 5;
      v9_.v18 = 5;
      v9_.v19 = 6;
      v9_.v20 = 6;
      v9_.v21 = 17;
      v9_.v22 = 17;
      v9_.v23 = 23;
      v9_.v24 = 23;
      v9_.v25 = 29;
      v9_.v26 = 29;
      v9_.v27 = 39;
      v9_.v28 = 39;
      v9_.v29 = 42;
      v9_.v30 = 42;
      SdkRoutine_86d370(&SdkData_f4d278, v9_.v9, 11, &SdkData_f4def8, 384);
      fw_rtld_RegisterCrtDestructor();
      result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cdd8);
      v5 = v8;
      v6 = (unsigned __int16*)SdkData_f4d2d8;
      v7 = SdkData_f4d2e0;
      if (SdkData_f4d2d8 != SdkData_f4d2e0) {
      LABEL_6:
        while (*v6 != v5) {
          v6 += 4;
          if (v6 == (unsigned __int16*)v7) {
            return result;
          }
        }
        return (_QWORD*)nandroid_AMessage_setInt32_plt(
            *a2, "profile", *((unsigned int*)v6 + 1));
      }
    }
  }
  return result;
}

_QWORD* Utils_51ab40(_QWORD* result, _QWORD* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int8* v10;
  int v11;
  unsigned __int8* v13;
  unsigned __int8* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  char v21;
  int v22;
  char v23;
  int v24;
  char v25;
  int v26;
  char v27;
  int v28;
  char v29;
  int v30;
  char v31;
  int v32;
  char v33;
  int v34;
  char v35;
  int v36;
  char v37;
  int v38;
  char v39;
  int v40;
  char v41;
  int v42;
  char v43;
  int v44;
  int v45;

  v2 = result[6];
  if (v2 >= 2) {
    v4 = (unsigned __int8*)(result[3] + result[5]);
    do {
      v8 = v4[1];
      v9 = v2 - 2 >= v8;
      v2 = v2 - 2 - v8;
      if (!v9) {
        return result;
      }
      v10 = v4 + 2;
      v11 = *v4;
      if (v11 == 2) {
        if ((_DWORD)v8 == 0) {
          goto LABEL_5;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cdf0,
                                  memory_order_acquire) &
             1) == 0) {
          result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cdf0);
          if ((_DWORD)result != 0) {
            LOBYTE(v19) = 10;
            HIDWORD(v19) = 1;
            LOBYTE(v20) = 11;
            HIDWORD(v20) = 2;
            v21 = 20;
            v22 = 4;
            v23 = 21;
            v24 = 8;
            v25 = 30;
            v26 = 16;
            v27 = 31;
            v28 = 32;
            v29 = 40;
            v30 = 64;
            v31 = 41;
            v32 = 128;
            v33 = 50;
            v34 = 256;
            v35 = 51;
            v36 = 512;
            v37 = 52;
            v38 = 1024;
            v39 = 60;
            v40 = 2048;
            v41 = 61;
            v42 = 4096;
            v43 = 62;
            v44 = 0x2000;
            SdkRoutine_86ff40(&SdkData_f4d3f8, &v19, 14, &SdkData_f4e378, 384);
            fw_rtld_RegisterCrtDestructor();
            result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cdf0);
          }
        }
        v14 = (unsigned __int8*)SdkData_f4d458;
        if (SdkData_f4d458 == SdkData_f4d460) {
          goto LABEL_5;
        }
        while (*v14 != *v10) {
          v14 += 8;
          if (v14 == (unsigned __int8*)SdkData_f4d460) {
            goto LABEL_5;
          }
        }
        v7 = *((unsigned int*)v14 + 1);
        v5 = *a2;
        v6 = "level";
        goto LABEL_4;
      }
      if (v11 != 1 || (_DWORD)v8 == 0) {
        goto LABEL_5;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cde0,
                                memory_order_acquire) &
           1) == 0) {
        result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cde0);
        if ((_DWORD)result != 0) {
          LOBYTE(v19) = 0;
          HIDWORD(v19) = 1;
          LOBYTE(v20) = 1;
          HIDWORD(v20) = 2;
          v21 = 2;
          v22 = 4;
          v23 = 3;
          v24 = 8;
          SdkRoutine_86ff20(&SdkData_f4d2f8, &v19, 4, &SdkData_f4e078, 384);
          fw_rtld_RegisterCrtDestructor();
          result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cde0);
        }
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cde8,
                                memory_order_acquire) &
           1) == 0) {
        result = (_QWORD*)__cxa_guard_acquire_plt(&SdkData_f4cde8);
        if ((_DWORD)result != 0) {
          v19 = 0x100000000004LL;
          v20 = 0x200000000008LL;
          SdkRoutine_86ff30(&SdkData_f4d378, &v19, 2, &SdkData_f4e1f8, 384);
          fw_rtld_RegisterCrtDestructor();
          result = (_QWORD*)__cxa_guard_release_plt(&SdkData_f4cde8);
        }
      }
      v13 = (unsigned __int8*)SdkData_f4d358;
      if (SdkData_f4d358 == SdkData_f4d360) {
        goto LABEL_5;
      }
      while (*v13 != *v10) {
        v13 += 8;
        if (v13 == (unsigned __int8*)SdkData_f4d360) {
          goto LABEL_5;
        }
      }
      v15 = *a2;
      v16 = *((_DWORD*)v13 + 1);
      LODWORD(v19) = 0;
      if ((nandroid_AMessage_findInt32_plt(v15, "android._is-hdr", &v19) & 1) !=
          0) {
        if ((_DWORD)v19 == 0) {
          goto LABEL_37;
        }
      }
      else if ((nandroid_AMessage_contains_plt(*a2, "hdr-static-info") & 1) ==
                       0 &&
                   (nandroid_AMessage_contains_plt(*a2, "hdr10-plus-info") &
                    1) == 0 ||
               (nandroid_AMessage_contains_plt(*a2, "color-transfer") & 1) !=
                   0) {
        v17 = *a2;
        v45 = 0;
        if ((nandroid_AMessage_findInt32_plt(v17, "color-transfer", &v45) &
             1) == 0 ||
            (v45 & 0xFFFFFFFE) != 6) {
          goto LABEL_37;
        }
      }
      v18 = (_DWORD*)SdkData_f4d3d8;
      if (SdkData_f4d3d8 != SdkData_f4d3e0) {
        while (*v18 != v16) {
          v18 += 2;
          if (v18 == (_DWORD*)SdkData_f4d3e0) {
            goto LABEL_37;
          }
        }
        v16 = v18[1];
        if (v16 != 4096) {
          goto LABEL_3;
        }
      LABEL_38:
        nandroid_AMessage_setInt32_plt(*a2, "bit-depth", 2);
        v16 = 4;
        goto LABEL_3;
      }
    LABEL_37:
      if (v16 == 4096) {
        goto LABEL_38;
      }
    LABEL_3:
      v5 = *a2;
      v6 = "profile";
      v7 = v16;
    LABEL_4:
      result = (_QWORD*)nandroid_AMessage_setInt32_plt(v5, v6, v7);
    LABEL_5:
      v4 = &v10[v8];
    } while (v2 > 1);
  }
  return result;
}

_QWORD* nandroid_sp_clear(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;

  v1 = *result;
  if (*result != 0) {
    v2 = result;
    result = (_QWORD*)nandroid_RefBase_decStrong_plt(*result, result);
    if (v1 != *v2) {
      result = (_QWORD*)nandroid_sp_report_race_plt(result);
    }
    *v2 = 0;
  }
  return result;
}

#pragma GCC visibility pop
