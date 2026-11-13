#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(__int64, unsigned __int64);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86f350(__int64, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmem_plt(__int64, unsigned __int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nandroid_AMessage_contains_plt(__int64, const char*);
__int64 nandroid_AMessage_findBuffer_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findFloat_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findInt32_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findInt64_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findRect_plt(__int64, const char*, __int64, __int64,
                                       __int64, __int64);
__int64 nandroid_AMessage_findString_plt(__int64, const char*, __int64);
__int64 nandroid_AString_AString_plt_86d9f0(__int64);
__int64 nandroid_AString_AString_plt_86da90(__int64, const char*);
__int64 nandroid_AString_Destroy_AString_plt(__int64);
__int64 nandroid_AString_c_str_plt(__int64);
__int64 nandroid_AString_startsWith_plt(__int64, const char*);
__int64 nandroid_ColorUtils_convertPlatformColorAspectsToCodecAspects_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_ColorUtils_getHDRStaticInfoFromFormat_plt(_QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setCString_plt(__int64, unsigned int,
                                             const char*);
__int64 nandroid_MetaDataBase_setData_plt(__int64, unsigned int, unsigned int,
                                          __int64, unsigned __int64);
__int64 nandroid_MetaDataBase_setFloat_plt(_QWORD, _QWORD, float);
__int64 nandroid_MetaDataBase_setInt32_plt(__int64, unsigned int, int);
__int64 nandroid_MetaDataBase_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setRect_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nandroid_convertMessageToMetaDataFromMappings_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_c57bbb;
extern char SdkData_e69c70[];
extern char SdkData_e69d60[];
extern void (*SdkData_e885f8[405])();
extern void (*SdkData_e88600[404])();
extern void (*SdkData_e88608[403])();
extern void (*SdkData_e88680[388])();
extern void (*SdkData_e886b0[382])();
extern void (*SdkData_e886b8[381])();
extern void (*SdkData_e886c0[380])();
extern void (*SdkData_e886d0[378])();
extern void (*SdkData_e886e0[376])();
extern void (*SdkData_e886f0[374])();
extern void (*SdkData_e887a8[351])();
extern void (*SdkData_e88818[337])();
int sscanf_plt(const char*, const char*, ...);
void __attribute__((noreturn)) nn_fs_10de70();
__int64 nandroid_libstagefright_517380(__int64* a1, __int64* a2);
__int64 nandroid_libstagefright_51b020(__int64* a1, __int64* a2);

__int64 nandroid_libstagefright_517380(__int64* a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int* v3;
  char* v6;
  unsigned int v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int* v31;
  __int64 i;
  char* v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 result;
  __int64 v40[3];

  v2 = 240;
  v3 = (unsigned int*)SdkData_e69c70;
  do {
    {
      v6 = *((const char**)v3 - 1);
      __asm__ volatile("" ::"r"(v6));
    }
    {
      v7 = *v3;
      __asm__ volatile("" ::"r"(v7));
    }
    memset(v40, 0, sizeof(v40));
    nandroid_AString_AString_plt_86d9f0((__int64)v40);
    if ((nandroid_AMessage_findString_plt(*a1, v6, (__int64)v40) & 1) != 0) {
      {
        v8 = *a2;
        __asm__ volatile("" ::"r"(v8));
      }
      v9 = (const char*)nandroid_AString_c_str_plt((__int64)v40);
      nandroid_MetaDataBase_setCString_plt(v8, v7, v9);
    }
    v3 += 4;
    nandroid_AString_Destroy_AString_plt((__int64)v40);
    v2 -= 16;
  } while (v2 != 0);
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findFloat_plt(v10, "capture-rate", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setFloat_plt(*a2, 1667330118, *(float*)v40);
  }
  {
    v11 = *a1;
    __asm__ volatile("" ::"r"(v11));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v11, "exif-offset", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1702391654, v40[0]);
  }
  {
    v12 = *a1;
    __asm__ volatile("" ::"r"(v12));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v12, "exif-size", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1702392698, v40[0]);
  }
  {
    v13 = *a1;
    __asm__ volatile("" ::"r"(v13));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v13, "target-time", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1952543316, v40[0]);
  }
  {
    v14 = *a1;
    __asm__ volatile("" ::"r"(v14));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v14, "thumbnail-time", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1952997972, v40[0]);
  }
  {
    v15 = *a1;
    __asm__ volatile("" ::"r"(v15));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v15, "timeUs", (__int64)v40) & 1) != 0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1953066341, v40[0]);
  }
  {
    v16 = *a1;
    __asm__ volatile("" ::"r"(v16));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findInt64_plt(v16, "durationUs", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1685418593, v40[0]);
  }
  {
    v17 = *a1;
    __asm__ volatile("" ::"r"(v17));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v17, "loop", (__int64)v40) & 1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6175744Cu, v40[0]);
  }
  {
    v18 = *a1;
    __asm__ volatile("" ::"r"(v18));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v18, "time-scale", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x746D736Cu, v40[0]);
  }
  {
    v19 = *a1;
    __asm__ volatile("" ::"r"(v19));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v19, "crypto-mode", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6372794Du, v40[0]);
  }
  {
    v20 = *a1;
    __asm__ volatile("" ::"r"(v20));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v20, "crypto-default-iv-size",
                                       (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x63727953u, v40[0]);
  }
  {
    v21 = *a1;
    __asm__ volatile("" ::"r"(v21));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v21, "crypto-encrypted-byte-block",
                                       (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x63626C6Bu, v40[0]);
  }
  {
    v22 = *a1;
    __asm__ volatile("" ::"r"(v22));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v22, "crypto-skip-byte-block",
                                       (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x73626C6Bu, v40[0]);
  }
  {
    v23 = *a1;
    __asm__ volatile("" ::"r"(v23));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v23, "frame-count", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6E66726Du, v40[0]);
  }
  {
    v24 = *a1;
    __asm__ volatile("" ::"r"(v24));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v24, "max-bitrate", (__int64)v40) & 1) !=
      0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6D784272u, v40[0]);
  }
  {
    v25 = *a1;
    __asm__ volatile("" ::"r"(v25));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v25, "pcm-big-endian", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x70636D62u, v40[0]);
  }
  {
    v26 = *a1;
    __asm__ volatile("" ::"r"(v26));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v26, "temporal-layer-count",
                                       (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x634C7972u, v40[0]);
  }
  {
    v27 = *a1;
    __asm__ volatile("" ::"r"(v27));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v27, "temporal-layer-id", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x694C7972u, v40[0]);
  }
  {
    v28 = *a1;
    __asm__ volatile("" ::"r"(v28));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v28, "thumbnail-width", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x74686257u, v40[0]);
  }
  {
    v29 = *a1;
    __asm__ volatile("" ::"r"(v29));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v29, "thumbnail-height", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x74686248u, v40[0]);
  }
  {
    v30 = *a1;
    __asm__ volatile("" ::"r"(v30));
  }
  LODWORD(v40[0]) = 0;
  if ((nandroid_AMessage_findInt32_plt(v30, "valid-samples", (__int64)v40) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x76616C44u, v40[0]);
  }
  v31 = (unsigned int*)SdkData_e69d60;
  for (i = 176; i != 0; i -= 16) {
    {
      v33 = *((const char**)v31 - 1);
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v34 = *a1;
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v35 = *v31;
      __asm__ volatile("" ::"r"(v35));
    }
    v40[0] = 0;
    if ((nandroid_AMessage_findBuffer_plt(v34, v33, (__int64)v40) & 1) != 0) {
      nandroid_MetaDataBase_setData_plt(
          *a2, v35, 0x6E6F6E65u,
          *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v40[0]) +
              *(__int64*)((char*)((__int64*)0x28LL) + v40[0]),
          *(__int64*)((char*)((__int64*)0x28LL) + v40[0] + 8));
    }
    if (v40[0] != 0) {
      nandroid_RefBase_decStrong_plt(v40[0], (__int64)v40);
    }
    v31 += 4;
  }
  {
    v36 = *a1;
    __asm__ volatile("" ::"r"(v36));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findBuffer_plt(v36, "csd-0", (__int64)v40) & 1) != 0) {
    nandroid_MetaDataBase_setData_plt(
        *a2, 0x63736430u, 0x6E6F6E65u,
        *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v40[0]) +
            *(__int64*)((char*)((__int64*)0x28LL) + v40[0]),
        *(__int64*)((char*)((__int64*)0x28LL) + v40[0] + 8));
  }
  if (v40[0] != 0) {
    nandroid_RefBase_decStrong_plt(v40[0], (__int64)v40);
  }
  {
    v37 = *a1;
    __asm__ volatile("" ::"r"(v37));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findBuffer_plt(v37, "csd-1", (__int64)v40) & 1) != 0) {
    nandroid_MetaDataBase_setData_plt(
        *a2, 0x63736431u, 0x6E6F6E65u,
        *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v40[0]) +
            *(__int64*)((char*)((__int64*)0x28LL) + v40[0]),
        *(__int64*)((char*)((__int64*)0x28LL) + v40[0] + 8));
  }
  if (v40[0] != 0) {
    nandroid_RefBase_decStrong_plt(v40[0], (__int64)v40);
  }
  {
    v38 = *a1;
    __asm__ volatile("" ::"r"(v38));
  }
  v40[0] = 0;
  if ((nandroid_AMessage_findBuffer_plt(v38, "csd-2", (__int64)v40) & 1) != 0) {
    nandroid_MetaDataBase_setData_plt(
        *a2, 0x63736432u, 0x6E6F6E65u,
        *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v40[0]) +
            *(__int64*)((char*)((__int64*)0x28LL) + v40[0]),
        *(__int64*)((char*)((__int64*)0x28LL) + v40[0] + 8));
  }
  {
    result = v40[0];
    __asm__ volatile("" ::"r"(result));
  }
  if (v40[0] != 0) {
    return nandroid_RefBase_decStrong_plt(v40[0], (__int64)v40);
  }
  return result;
}

__int64 nandroid_libstagefright_51b020(__int64* a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  char v50;
  _QWORD* v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char v59;
  char v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  _QWORD* v65;
  int v66;
  unsigned __int64 v67;
  int v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v78;
  unsigned __int64 v79;
  signed int v80;
  __int64 v81;
  __int16 v83;
  char v84;
  __int64 v85;
  int v86;
  int v87;
  char v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char v103;
  char v104;
  char v105;
  char v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  char v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  int v116[6];
  int v117[6];
  int v118[6];
  __int64 v119[3];
  _QWORD* v120;
  _QWORD* v121;
  struct {
    _QWORD* v122;
    char gap128_[4];
    int v123;
  } v122_;
  struct {
    __int64 v124;
    __int64 v125;
    __int64 v126;
    char v127;
    char gap161_[3];
    int v128;
  } v124_;
  __int64 v129;
  _BYTE v130[12];
  __int64 v131;
  int v132;
  _QWORD v133[3];
  __int64 v134;
  int v135;
  struct {
    __int64 v136;
    char gap248_[4];
    int v137;
  } v136_;
  _QWORD v138[4];

  memset(v138, 0, 24);
  nandroid_AString_AString_plt_86d9f0((__int64)v138);
  if ((nandroid_AMessage_findString_plt(*a1, "mime", (__int64)v138) & 1) != 0) {
    {
      v4 = *a2;
      __asm__ volatile("" ::"r"(v4));
    }
    v5 = (const char*)nandroid_AString_c_str_plt((__int64)v138);
    nandroid_MetaDataBase_setCString_plt(v4, 0x6D696D65u, v5);
  }
  nandroid_convertMessageToMetaDataFromMappings_plt(a1, a2);
  {
    v6 = *a1;
    __asm__ volatile("" ::"r"(v6));
  }
  v136_.v137 = 0;
  if ((nandroid_AMessage_findInt32_plt(v6, "ca-system-id",
                                       (__int64)&v136_.v137) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x63616964u, v136_.v137);
    {
      v7 = *a1;
      __asm__ volatile("" ::"r"(v7));
    }
    v124_.v124 = 0;
    v133[0] = 0;
    if ((nandroid_AMessage_findBuffer_plt(v7, "ca-session-id",
                                          (__int64)&v124_.v124) &
         1) != 0) {
      nandroid_MetaDataBase_setData_plt(
          *a2, 0x73656964u, 0,
          *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v124_.v124) +
              *(__int64*)((char*)((__int64*)0x28LL) + v124_.v124),
          *(__int64*)((char*)((__int64*)0x28LL) + v124_.v124 + 8));
      if ((nandroid_AMessage_findBuffer_plt(*a1, "ca-private-data",
                                            (__int64)v133) &
           1) == 0) {
        goto LABEL_6;
      }
    }
    else if ((nandroid_AMessage_findBuffer_plt(*a1, "ca-private-data",
                                               (__int64)v133) &
              1) == 0) {
    LABEL_6:
      {
        v8 = v133[0];
        __asm__ volatile("" ::"r"(v8));
      }
      if (v133[0] == 0) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    nandroid_MetaDataBase_setData_plt(*a2, 0x63616463u, 0,
                                      *(_QWORD*)(v133[0] + 24LL) +
                                          *(_QWORD*)(v133[0] + 40LL),
                                      *(_QWORD*)(v133[0] + 48LL));
    {
      v8 = v133[0];
      __asm__ volatile("" ::"r"(v8));
    }
    if (v133[0] == 0) {
    LABEL_8:
      if (v124_.v124 != 0) {
        nandroid_RefBase_decStrong_plt(v124_.v124, (__int64)&v124_.v124);
      }
      goto LABEL_10;
    }
  LABEL_7:
    nandroid_RefBase_decStrong_plt(v8, (__int64)v133);
    goto LABEL_8;
  }
LABEL_10:
  {
    v9 = *a1;
    __asm__ volatile("" ::"r"(v9));
  }
  v136_.v136 = 0;
  if ((nandroid_AMessage_findInt64_plt(v9, "durationUs", (__int64)&v136_.v136) &
       1) != 0) {
    nandroid_MetaDataBase_setInt64_plt(*a2, 1685418593, v136_.v136);
  }
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  v135 = 0;
  if ((nandroid_AMessage_findInt32_plt(v10, "is-sync-frame", (__int64)&v135) &
       1) != 0 &&
      v135 != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x73796E63u, 1);
  }
  {
    v11 = *a1;
    __asm__ volatile("" ::"r"(v11));
  }
  v134 = 0;
  if ((nandroid_AMessage_findInt32_plt(v11, "bitrate", (__int64)&v134 + 4) &
       1) != 0 &&
      SHIDWORD(v134) >= 1) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x62727465u, SHIDWORD(v134));
  }
  if ((nandroid_AMessage_findInt32_plt(*a1, "max-bitrate", (__int64)&v134) &
       1) != 0 &&
      (int)v134 >= 1 && (int)v134 >= SHIDWORD(v134)) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6D784272u, v134);
  }
  memset(v133, 0, sizeof(v133));
  nandroid_AString_AString_plt_86d9f0((__int64)v133);
  if ((nandroid_AMessage_findString_plt(*a1, "language", (__int64)v133) & 1) !=
      0) {
    {
      v12 = *a2;
      __asm__ volatile("" ::"r"(v12));
    }
    v13 = (const char*)nandroid_AString_c_str_plt((__int64)v133);
    nandroid_MetaDataBase_setCString_plt(v12, 0x6C616E67u, v13);
  }
  if ((nandroid_AString_startsWith_plt((__int64)v138, "video/") & 1) != 0 ||
      (nandroid_AString_startsWith_plt((__int64)v138, "image/") & 1) != 0) {
    {
      v14 = *a1;
      __asm__ volatile("" ::"r"(v14));
    }
    LODWORD(v122_.v122) = 0;
    LODWORD(v121) = 0;
    if ((nandroid_AMessage_findInt32_plt(v14, "width", (__int64)&v122_.v122) &
         1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a1, "height", (__int64)&v121) & 1) !=
            0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x77696474u, (int)v122_.v122);
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x68656967u, (int)v121);
    }
    {
      v15 = *a1;
      __asm__ volatile("" ::"r"(v15));
    }
    LODWORD(v120) = 0;
    v132 = 0;
    if ((nandroid_AMessage_findInt32_plt(v15, "sar-width", (__int64)&v120) &
         1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a1, "sar-height", (__int64)&v132) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x73617257u, (int)v120);
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x73617248u, v132);
    }
    {
      v16 = *a1;
      __asm__ volatile("" ::"r"(v16));
    }
    v131 = 0;
    if ((nandroid_AMessage_findInt32_plt(v16, "display-width",
                                         (__int64)&v131 + 4) &
         1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a1, "display-height",
                                         (__int64)&v131) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x64576964u, SHIDWORD(v131));
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x64486774u, v131);
    }
    if ((nandroid_AString_startsWith_plt((__int64)v138, "image/") & 1) != 0) {
      {
        v17 = *a1;
        __asm__ volatile("" ::"r"(v17));
      }
      LODWORD(v124_.v124) = 0;
      if ((nandroid_AMessage_findInt32_plt(v17, "is-default",
                                           (__int64)&v124_.v124) &
           1) != 0 &&
          (_DWORD)v124_.v124 != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x64666C74u, 1);
      }
      {
        v18 = *a1;
        __asm__ volatile("" ::"r"(v18));
      }
      LODWORD(v119[0]) = 0;
      v118[0] = 0;
      v117[0] = 0;
      v116[0] = 0;
      if ((nandroid_AMessage_findInt32_plt(v18, "tile-width", (__int64)v119) &
           1) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x74696C57u, v119[0]);
      }
      if ((nandroid_AMessage_findInt32_plt(*a1, "tile-height", (__int64)v118) &
           1) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x74696C48u, v118[0]);
      }
      if ((nandroid_AMessage_findInt32_plt(*a1, "grid-rows", (__int64)v117) &
           1) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x67726452u, v117[0]);
      }
      if ((nandroid_AMessage_findInt32_plt(*a1, "grid-cols", (__int64)v116) &
           1) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x67726443u, v116[0]);
      }
    }
    {
      v19 = *a1;
      __asm__ volatile("" ::"r"(v19));
    }
    *(_DWORD*)&v130[8] = 0;
    if ((nandroid_AMessage_findInt32_plt(v19, "color-format",
                                         (__int64)&v130[8]) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x636F6C66u, *(int*)&v130[8]);
    }
    {
      v20 = *a1;
      __asm__ volatile("" ::"r"(v20));
    }
    v129 = 0;
    *(_QWORD*)v130 = 0;
    if ((nandroid_AMessage_findRect_plt(v20, "crop", (__int64)&v130[4],
                                        (__int64)v130, (__int64)&v129 + 4,
                                        (__int64)&v129) &
         1) != 0) {
      nandroid_MetaDataBase_setRect_plt(
          *a2, 1668444016, *(unsigned int*)&v130[4], *(unsigned int*)v130,
          HIDWORD(v129), (unsigned int)v129);
    }
    {
      v21 = *a1;
      __asm__ volatile("" ::"r"(v21));
    }
    v124_.v128 = 0;
    if ((nandroid_AMessage_findInt32_plt(v21, "rotation-degrees",
                                         (__int64)&v124_.v128) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x726F7441u, v124_.v128);
    }
    if ((nandroid_AMessage_contains_plt(*a1, "hdr-static-info") & 1) != 0) {
      v124_.v127 = 0;
      v124_.v125 = 0;
      v124_.v126 = 0;
      v124_.v124 = 0;
      if ((nandroid_ColorUtils_getHDRStaticInfoFromFormat_plt(a1, &v124_.v124) &
           1) != 0) {
        nandroid_MetaDataBase_setData_plt(*a2, 0x68647253u, 0x68647253u,
                                          (__int64)&v124_.v124, 0x19u);
      }
    }
    {
      v22 = *a1;
      __asm__ volatile("" ::"r"(v22));
    }
    v119[0] = 0;
    if ((nandroid_AMessage_findBuffer_plt(v22, "hdr10-plus-info",
                                          (__int64)v119) &
         1) != 0) {
      nandroid_MetaDataBase_setData_plt(
          *a2, 0x68647244u, 0,
          *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v119[0]) +
              *(__int64*)((char*)((__int64*)0x28LL) + v119[0]),
          *(__int64*)((char*)((__int64*)0x28LL) + v119[0] + 8));
    }
    {
      v23 = *a1;
      __asm__ volatile("" ::"r"(v23));
    }
    v122_.v123 = 0;
    if ((nandroid_AMessage_findInt32_plt(v23, "bit-depth",
                                         (__int64)&v122_.v123) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x62646570u, v122_.v123);
    }
    {
      v24 = *a1;
      __asm__ volatile("" ::"r"(v24));
    }
    v118[0] = 0;
    v117[0] = 0;
    v116[0] = 0;
    nandroid_AMessage_findInt32_plt(v24, "color-range", (__int64)v118);
    nandroid_AMessage_findInt32_plt(*a1, "color-standard", (__int64)v117);
    nandroid_AMessage_findInt32_plt(*a1, "color-transfer", (__int64)v116);
    v124_.v124 = 0;
    v124_.v125 = 0;
    if ((unsigned int)
            nandroid_ColorUtils_convertPlatformColorAspectsToCodecAspects_plt(
                (unsigned int)v118[0], (unsigned int)v117[0],
                (unsigned int)v116[0], &v124_.v124) == 0) {
      if ((_DWORD)v124_.v124 != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x63526E67u, v124_.v124);
      }
      if (HIDWORD(v124_.v124) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x6350726Du,
                                           SHIDWORD(v124_.v124));
      }
      if ((_DWORD)v124_.v125 != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x7446756Eu, v124_.v125);
      }
      if (HIDWORD(v124_.v125) != 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x634D7478u,
                                           SHIDWORD(v124_.v125));
      }
    }
    v124_.v125 = 0;
    v124_.v126 = 0;
    v124_.v124 = 0;
    nandroid_AString_AString_plt_86d9f0((__int64)&v124_.v124);
    if ((nandroid_AMessage_findString_plt(*a1, "ts-schema",
                                          (__int64)&v124_.v124) &
         1) != 0) {
      v118[0] = 0;
      v117[0] = 0;
      LOBYTE(v116[0]) = 0;
      v25 = (const char*)nandroid_AString_c_str_plt((__int64)&v124_.v124);
      v26 = sscanf_plt(v25, "android.generic.%u%c%u%c", (unsigned int)v118,
                       v116, (unsigned int)v117, v116);
      if ((v26 == 1 || v26 == 3 && LOBYTE(v116[0]) == 43) && v118[0] != 0 &&
          v118[0] < (unsigned int)~v117[0] &&
          ((v117[0] + v118[0]) & 0x80000000) == 0) {
        nandroid_MetaDataBase_setInt32_plt(*a2, 0x634C7972u, v117[0] + v118[0]);
      }
    }
    nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
    if (v119[0] != 0) {
      nandroid_RefBase_decStrong_plt(v119[0], (__int64)v119);
    }
  }
  else if ((nandroid_AString_startsWith_plt((__int64)v138, "audio/") & 1) !=
           0) {
    {
      v27 = *a1;
      __asm__ volatile("" ::"r"(v27));
    }
    LODWORD(v124_.v124) = 0;
    if ((nandroid_AMessage_findInt32_plt(v27, "channel-count",
                                         (__int64)&v124_.v124) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x2363686Eu, v124_.v124);
    }
    {
      v28 = *a1;
      __asm__ volatile("" ::"r"(v28));
    }
    LODWORD(v119[0]) = 0;
    if ((nandroid_AMessage_findInt32_plt(v28, "sample-rate", (__int64)v119) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x73727465u, v119[0]);
    }
    {
      v29 = *a1;
      __asm__ volatile("" ::"r"(v29));
    }
    v118[0] = 0;
    if ((nandroid_AMessage_findInt32_plt(v29, "bits-per-sample",
                                         (__int64)v118) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x62697473u, v118[0]);
    }
    {
      v30 = *a1;
      __asm__ volatile("" ::"r"(v30));
    }
    v117[0] = 0;
    if ((nandroid_AMessage_findInt32_plt(v30, "channel-mask", (__int64)v117) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x63686E6Du, v117[0]);
    }
    {
      v31 = *a1;
      __asm__ volatile("" ::"r"(v31));
    }
    v116[0] = 0;
    if ((nandroid_AMessage_findInt32_plt(v31, "encoder-delay", (__int64)v116) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x656E6364u, v116[0]);
    }
    {
      v32 = *a1;
      __asm__ volatile("" ::"r"(v32));
    }
    LODWORD(v122_.v122) = 0;
    if ((nandroid_AMessage_findInt32_plt(v32, "encoder-padding",
                                         (__int64)&v122_.v122) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x656E6370u, (int)v122_.v122);
    }
    {
      v33 = *a1;
      __asm__ volatile("" ::"r"(v33));
    }
    LODWORD(v121) = 0;
    if ((nandroid_AMessage_findInt32_plt(v33, "is-adts", (__int64)&v121) & 1) !=
        0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x61647473u, (int)v121);
    }
    {
      v34 = *a1;
      __asm__ volatile("" ::"r"(v34));
    }
    LODWORD(v120) = -1;
    if ((nandroid_AMessage_findInt32_plt(v34, "aac-profile", (__int64)&v120) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x61616F74u, (int)v120);
    }
    {
      v35 = *a1;
      __asm__ volatile("" ::"r"(v35));
    }
    v132 = 0;
    if ((nandroid_AMessage_findInt32_plt(v35, "pcm-encoding", (__int64)&v132) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x50434D65u, v132);
    }
    {
      v36 = *a1;
      __asm__ volatile("" ::"r"(v36));
    }
    HIDWORD(v131) = 0;
    if ((nandroid_AMessage_findInt32_plt(v36, "haptic-channel-count",
                                         (__int64)&v131 + 4) &
         1) != 0) {
      nandroid_MetaDataBase_setInt32_plt(*a2, 0x68617043u, SHIDWORD(v131));
    }
  }
  {
    v37 = *a1;
    __asm__ volatile("" ::"r"(v37));
  }
  v132 = 0;
  if ((nandroid_AMessage_findInt32_plt(v37, "max-input-size", (__int64)&v132) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x696E7053u, v132);
  }
  {
    v38 = *a1;
    __asm__ volatile("" ::"r"(v38));
  }
  HIDWORD(v131) = 0;
  if ((nandroid_AMessage_findInt32_plt(v38, "max-width", (__int64)&v131 + 4) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6D617857u, SHIDWORD(v131));
  }
  {
    v39 = *a1;
    __asm__ volatile("" ::"r"(v39));
  }
  LODWORD(v131) = 0;
  if ((nandroid_AMessage_findInt32_plt(v39, "max-height", (__int64)&v131) &
       1) != 0) {
    nandroid_MetaDataBase_setInt32_plt(*a2, 0x6D617848u, v131);
  }
  {
    v40 = *a1;
    __asm__ volatile("" ::"r"(v40));
  }
  *(_QWORD*)&v130[4] = 0;
  if ((nandroid_AMessage_findInt32_plt(v40, "frame-rate", (__int64)&v130[8]) &
       1) != 0) {
    {
      v41 = *(_DWORD*)&v130[8];
      __asm__ volatile("" ::"r"(v41));
    }
    if (*(int*)&v130[8] >= 1) {
      {
        v42 = *a2;
        __asm__ volatile("" ::"r"(v42));
      }
    LABEL_116:
      nandroid_MetaDataBase_setInt32_plt(v42, 0x66726D52u, v41);
      goto LABEL_117;
    }
  }
  if ((nandroid_AMessage_findFloat_plt(*a1, "frame-rate", (__int64)&v130[4]) &
       1) != 0 &&
      *(float*)&v130[4] >= 0x1.0000000000000p+0f &&
      *(float*)&v130[4] <= 0x1.0000000000000p+31f) {
    {
      v42 = *a2;
      __asm__ volatile("" ::"r"(v42));
    }
    {
      v41 = (int)*(float*)&v130[4];
      __asm__ volatile("" ::"r"(v41));
    }
    goto LABEL_116;
  }
LABEL_117:
  {
    v43 = *a1;
    __asm__ volatile("" ::"r"(v43));
  }
  v121 = nullptr;
  v122_.v122 = nullptr;
  v120 = nullptr;
  if ((nandroid_AMessage_findBuffer_plt(v43, "csd-0", (__int64)&v122_.v122) &
       1) == 0) {
    nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                        *(const char**)SdkData_e885f8[0]);
    if ((SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124) & 1) != 0) {
      v50 = nandroid_AMessage_findBuffer_plt(*a1, "csd-avc",
                                             (__int64)&v122_.v122);
      nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
      if ((v50 & 1) != 0) {
        v51 = v122_.v122;
        {
          v52 = *a2;
          __asm__ volatile("" ::"r"(v52));
        }
        v53 = 1635148643;
        v54 = 1635148643;
      LABEL_152:
        {
          v63 = v51[6];
          __asm__ volatile("" ::"r"(v63));
        }
        {
          v64 = v51[3] + v51[5];
          __asm__ volatile("" ::"r"(v64));
        }
      LABEL_153:
        nandroid_MetaDataBase_setData_plt(v52, v53, v54, v64, v63);
        goto LABEL_189;
      }
    }
    else {
      nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
    }
    nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                        *(const char**)SdkData_e88600[0]);
    if ((SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124) & 1) != 0) {
      v59 = nandroid_AMessage_findBuffer_plt(*a1, "csd-hevc",
                                             (__int64)&v122_.v122);
      nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
      if ((v59 & 1) != 0) {
      LABEL_140:
        v51 = v122_.v122;
        {
          v52 = *a2;
          __asm__ volatile("" ::"r"(v52));
        }
        v53 = 1752589155;
        v54 = 1752589155;
        goto LABEL_152;
      }
    }
    else {
      nandroid_AString_AString_plt_86da90((__int64)v119,
                                          *(const char**)SdkData_e887a8[0]);
      if ((SdkRoutine_86f350((__int64)v138, (__int64)v119) & 1) == 0) {
        nandroid_AString_Destroy_AString_plt((__int64)v119);
        nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
        if ((nandroid_AMessage_findBuffer_plt(*a1, "esds",
                                              (__int64)&v122_.v122) &
             1) != 0) {
          goto LABEL_144;
        }
        goto LABEL_146;
      }
      v60 = nandroid_AMessage_findBuffer_plt(*a1, "csd-hevc",
                                             (__int64)&v122_.v122);
      nandroid_AString_Destroy_AString_plt((__int64)v119);
      nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
      if ((v60 & 1) != 0) {
        goto LABEL_140;
      }
    }
    if ((nandroid_AMessage_findBuffer_plt(*a1, "esds", (__int64)&v122_.v122) &
         1) != 0) {
    LABEL_144:
      v51 = v122_.v122;
      {
        v52 = *a2;
        __asm__ volatile("" ::"r"(v52));
      }
      v53 = 1702061171;
      v54 = 1702061171;
      goto LABEL_152;
    }
  LABEL_146:
    if ((nandroid_AMessage_findBuffer_plt(*a1, "mpeg2-stream-header",
                                          (__int64)&v122_.v122) &
         1) != 0) {
      v51 = v122_.v122;
      {
        v52 = *a2;
        __asm__ volatile("" ::"r"(v52));
      }
      v53 = 1937000548;
      v54 = 1835295092;
    }
    else {
      if ((nandroid_AMessage_findBuffer_plt(*a1, "d263", (__int64)&v122_.v122) &
           1) == 0) {
        goto LABEL_189;
      }
      v51 = v122_.v122;
      {
        v52 = *a2;
        __asm__ volatile("" ::"r"(v52));
      }
      v53 = 1681012275;
      v54 = 1681012275;
    }
    goto LABEL_152;
  }
  {
    v44 = v122_.v122[6];
    __asm__ volatile("" ::"r"(v44));
  }
  nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                      *(const char**)SdkData_e885f8[0]);
  v45 = SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124);
  nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
  if ((v45 & 1) != 0) {
    {
      v46 = *a1;
      __asm__ volatile("" ::"r"(v46));
    }
    v124_.v124 = 0;
    if ((nandroid_AMessage_findBuffer_plt(v46, "csd-1", (__int64)&v124_.v124) &
         1) == 0) {
    LABEL_187:
      if (v124_.v124 != 0) {
        nandroid_RefBase_decStrong_plt(v124_.v124, (__int64)&v124_.v124);
      }
      goto LABEL_189;
    }
    {
      v47 = *(__int64*)((char*)((__int64*)0x30LL) + v124_.v124) + (int)v44;
      __asm__ volatile("" ::"r"(v47));
    }
    v48 = v47 + 1024;
    if (v47 == -1024) {
      v49 = 0;
      v115 = 0;
    LABEL_155:
      v65 = v122_.v122;
      v66 = 6;
      LODWORD(v67) = 0;
      v68 = 0;
      v69 = 0;
      *(_DWORD*)v49 = 218129409;
      *(_BYTE*)(v49 + 4) = -1;
      {
        v70 = v65[6];
        __asm__ volatile("" ::"r"(v70));
      }
      do {
        {
          v73 = v65[3];
          __asm__ volatile("" ::"r"(v73));
        }
        {
          v74 = v65[5];
          __asm__ volatile("" ::"r"(v74));
        }
        v75 = v73 + v74;
        if (v70 - v69 < 5) {
          v76 = 0;
        }
        else {
          v76 = memmem_plt(v75 + v69, v70 - v69 - 1, (__int64)&SdkData_c57bbb,
                           4u);
          v65 = v122_.v122;
          {
            v73 = v122_.v122[3];
            __asm__ volatile("" ::"r"(v73));
          }
          {
            v74 = v122_.v122[5];
            __asm__ volatile("" ::"r"(v74));
          }
        }
        if (v76 >= v75 + v70 - 4 || v76 == 0) {
          v78 = v75 + v70;
        }
        else {
          v78 = v76;
        }
        v79 = v78 - (v73 + v74);
        if ((int)v67 >= 1) {
          v80 = v79 - v67;
          v81 = v73 + v74 + (unsigned int)v67;
          if ((int)v79 - (int)v67 >= 4 && v68 == 0) {
            {
              v83 = *(_WORD*)(v81 + 1);
              __asm__ volatile("" ::"r"(v83));
            }
            *(_BYTE*)(v49 + 3) = *(_BYTE*)(v81 + 3);
            *(_WORD*)(v49 + 1) = v83;
          }
          v71 = v66;
          v72 = v66 + 2LL;
          *(_WORD*)(v49 + v71) = bswap32(v80) >> 16;
          memcpy_plt(v49 + v72, v81, v80);
          v66 = v80 + v72;
          ++v68;
        }
        v67 = v79 + 4;
        {
          v70 = v65[6];
          __asm__ volatile("" ::"r"(v70));
        }
        v69 = v67;
      } while (v67 < v70);
      v84 = v68 | 0xE0;
      v85 = v124_.v124;
      v86 = v66 + 1;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      *(_BYTE*)(v49 + 5) = v84;
      {
        v90 = *(__int64*)((char*)((__int64*)0x30LL) + v85);
        __asm__ volatile("" ::"r"(v90));
      }
      do {
        {
          v91 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v85);
          __asm__ volatile("" ::"r"(v91));
        }
        {
          v92 = *(__int64*)((char*)((__int64*)0x28LL) + v85);
          __asm__ volatile("" ::"r"(v92));
        }
        v93 = v91 + v92;
        if (v90 - v89 < 5) {
          v94 = 0;
        }
        else {
          v94 = memmem_plt(v93 + v89, v90 - v89 - 1, (__int64)&SdkData_c57bbb,
                           4u);
          v85 = v124_.v124;
          {
            v91 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v124_.v124);
            __asm__ volatile("" ::"r"(v91));
          }
          {
            v92 = *(__int64*)((char*)((__int64*)0x28LL) + v124_.v124);
            __asm__ volatile("" ::"r"(v92));
          }
        }
        v95 = v93 + v90;
        v96 = v91 + v92;
        if (v94 < v93 + v90 - 4 && v94 != 0) {
          v95 = v94;
        }
        v98 = v95 - v96;
        if (v87 >= 1) {
          v99 = v86;
          v100 = v86 + 2LL;
          *(_WORD*)(v49 + v99) = bswap32(v98 - v87) >> 16;
          memcpy_plt(v49 + v100,
                     *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v85) +
                         *(__int64*)((char*)((__int64*)0x28LL) + v85) +
                         (unsigned int)v87,
                     (int)v98 - v87);
          v86 = v98 - v87 + v100;
          ++v88;
        }
        {
          v90 = *(__int64*)((char*)((__int64*)0x30LL) + v85);
          __asm__ volatile("" ::"r"(v90));
        }
        v87 = v98 + 4;
        v89 = v98 + 4;
      } while (v98 + 4 < v90);
      {
        v101 = *a2;
        __asm__ volatile("" ::"r"(v101));
      }
      *(_BYTE*)(v49 + v66) = v88;
      nandroid_MetaDataBase_setData_plt(v101, 0x61766363u, 0x61766363u, v49,
                                        v86);
      SdkRoutine_857220(v49, v115 - v49);
      goto LABEL_187;
    }
    if ((v48 & 0x8000000000000000LL) == 0) {
      v49 = SdkRoutine_85e050(v47 + 1024);
      v115 = v49 + v48;
      memset_plt(v49, 0, v48);
      goto LABEL_155;
    }
  LABEL_214:
    nn_fs_10de70();
  }
  nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                      *(const char**)SdkData_e88608[0]);
  if ((SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124) & 1) != 0) {
    goto LABEL_133;
  }
  nandroid_AString_AString_plt_86da90((__int64)v119,
                                      *(const char**)SdkData_e88680[0]);
  if ((SdkRoutine_86f350((__int64)v138, (__int64)v119) & 1) != 0) {
  LABEL_132:
    nandroid_AString_Destroy_AString_plt((__int64)v119);
  LABEL_133:
    nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
    goto LABEL_134;
  }
  nandroid_AString_AString_plt_86da90((__int64)v118,
                                      *(const char**)SdkData_e886b0[0]);
  if ((SdkRoutine_86f350((__int64)v138, (__int64)v118) & 1) != 0) {
  LABEL_131:
    nandroid_AString_Destroy_AString_plt((__int64)v118);
    goto LABEL_132;
  }
  nandroid_AString_AString_plt_86da90((__int64)v117,
                                      *(const char**)SdkData_e886b8[0]);
  if ((SdkRoutine_86f350((__int64)v138, (__int64)v117) & 1) != 0) {
    nandroid_AString_Destroy_AString_plt((__int64)v117);
    goto LABEL_131;
  }
  nandroid_AString_AString_plt_86da90((__int64)v116,
                                      *(const char**)SdkData_e886c0[0]);
  v103 = SdkRoutine_86f350((__int64)v138, (__int64)v116);
  nandroid_AString_Destroy_AString_plt((__int64)v116);
  nandroid_AString_Destroy_AString_plt((__int64)v117);
  nandroid_AString_Destroy_AString_plt((__int64)v118);
  nandroid_AString_Destroy_AString_plt((__int64)v119);
  nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
  if ((v103 & 1) != 0) {
  LABEL_134:
    v55 = (v44 << 32) + 0x1F00000000LL;
    if (v44 << 32 == 0xFFFFFFE100000000LL) {
      v57 = 0;
      v58 = 0;
    }
    else {
      v56 = v55 >> 32;
      if (v55 >> 32 < 0) {
        goto LABEL_214;
      }
      v57 = SdkRoutine_85e050(v55 >> 32);
      v58 = v57 + v56;
      memset_plt(v57, 0, v56);
    }
    v61 = v122_.v122;
    {
      v62 = v122_.v122[6];
      __asm__ volatile("" ::"r"(v62));
    }
    *(_BYTE*)v57 = 3;
    *(_BYTE*)(v57 + 1) = ((unsigned int)(v62 + 26) >> 21) | 0x80;
    *(_BYTE*)(v57 + 2) = ((unsigned int)(v62 + 26) >> 14) | 0x80;
    *(_BYTE*)(v57 + 4) = (v62 + 26) & 0x7F;
    *(_DWORD*)(v57 + 5) = 0x4000000;
    *(_BYTE*)(v57 + 3) = ((unsigned int)(v62 + 26) >> 7) | 0x80;
    *(_BYTE*)(v57 + 9) = ((unsigned int)(v62 + 18) >> 21) | 0x80;
    *(_BYTE*)(v57 + 10) = ((unsigned int)(v62 + 18) >> 14) | 0x80;
    *(_BYTE*)(v57 + 12) = (v62 + 18) & 0x7F;
    *(_BYTE*)(v57 + 11) = ((unsigned int)(v62 + 18) >> 7) | 0x80;
    *(_QWORD*)(v57 + 13) = 0xFA00000018001540LL;
    *(_DWORD*)(v57 + 21) = -100663296;
    *(_WORD*)(v57 + 25) = 1280;
    *(_BYTE*)(v57 + 27) = ((unsigned int)v62 >> 21) | 0x80;
    *(_BYTE*)(v57 + 28) = ((unsigned int)v62 >> 14) | 0x80;
    *(_BYTE*)(v57 + 29) = ((unsigned int)v62 >> 7) | 0x80;
    *(_BYTE*)(v57 + 30) = v62 & 0x7F;
    memcpy_plt(v57 + 31, v61[3] + v61[5], (int)v62);
    nandroid_MetaDataBase_setData_plt(*a2, 0x65736473u, 0x65736473u, v57,
                                      v58 - v57);
    SdkRoutine_857220(v57, v58 - v57);
    goto LABEL_189;
  }
  nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                      *(const char**)SdkData_e886f0[0]);
  v104 = SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124);
  nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
  if ((v104 & 1) != 0) {
    v51 = v122_.v122;
    {
      v52 = *a2;
      __asm__ volatile("" ::"r"(v52));
    }
    v53 = 1635135843;
    v54 = 1635135843;
    goto LABEL_152;
  }
  nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                      *(const char**)SdkData_e886e0[0]);
  v105 = SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124);
  nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
  if ((v105 & 1) != 0) {
    v51 = v122_.v122;
    {
      v52 = *a2;
      __asm__ volatile("" ::"r"(v52));
    }
    v54 = 0;
    v53 = 1987066224;
    goto LABEL_152;
  }
  nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                      *(const char**)SdkData_e886d0[0]);
  v106 = SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124);
  nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
  if ((v106 & 1) == 0) {
    nandroid_AString_AString_plt_86da90((__int64)&v124_.v124,
                                        *(const char**)SdkData_e88818[0]);
    v112 = SdkRoutine_86f350((__int64)v138, (__int64)&v124_.v124);
    nandroid_AString_Destroy_AString_plt((__int64)&v124_.v124);
    if ((v112 & 1) == 0) {
      goto LABEL_189;
    }
    v51 = v122_.v122;
    {
      v52 = *a2;
      __asm__ volatile("" ::"r"(v52));
    }
    v54 = 0;
    v53 = 1634495843;
    goto LABEL_152;
  }
  {
    v107 = v122_.v122[3];
    __asm__ volatile("" ::"r"(v107));
  }
  {
    v109 = v122_.v122[5];
    __asm__ volatile("" ::"r"(v109));
  }
  {
    v108 = v122_.v122[6];
    __asm__ volatile("" ::"r"(v108));
  }
  if ((nandroid_AMessage_findBuffer_plt(*a1, "csd-1", (__int64)&v121) & 1) !=
      0) {
    {
      v110 = v121[6];
      __asm__ volatile("" ::"r"(v110));
    }
    {
      v111 = v121[3] + v121[5];
      __asm__ volatile("" ::"r"(v111));
    }
  }
  else {
    v110 = 0;
    v111 = 0;
  }
  if ((nandroid_AMessage_findBuffer_plt(*a1, "csd-2", (__int64)&v120) & 1) !=
      0) {
    {
      v113 = v120[6];
      __asm__ volatile("" ::"r"(v113));
    }
    {
      v114 = v120[3] + v120[5];
      __asm__ volatile("" ::"r"(v114));
    }
  }
  else {
    v113 = 0;
    v114 = 0;
  }
  nandroid_MetaDataBase_setData_plt(*a2, 0x6F686472u, 0, v107 + v109, v108);
  if (v111 != 0) {
    nandroid_MetaDataBase_setData_plt(*a2, 0x6F636F64u, 0, v111, v110);
  }
  if (v114 != 0) {
    {
      v52 = *a2;
      __asm__ volatile("" ::"r"(v52));
    }
    v54 = 0;
    v64 = v114;
    v63 = v113;
    v53 = 1869836402;
    goto LABEL_153;
  }
LABEL_189:
  if (v120 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v120, (__int64)&v120);
  }
  if (v121 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v121, (__int64)&v121);
  }
  if (v122_.v122 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v122_.v122, (__int64)&v122_.v122);
  }
  nandroid_AString_Destroy_AString_plt((__int64)v133);
  return nandroid_AString_Destroy_AString_plt((__int64)v138);
}

#pragma GCC visibility pop
