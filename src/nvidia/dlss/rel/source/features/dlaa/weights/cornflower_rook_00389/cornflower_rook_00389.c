#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_6fe30(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_6ff80(PSEUDO_X8, _QWORD*, __int64);
__int64* NgxRoutine_2b2a0(_QWORD*, unsigned __int8*);
__int64* NgxRoutine_977a0();
__int64 NGXSetDltssWeights(__int64, __int64);
__int64 NgxRoutine_2b0();
__int64 NgxRoutine_2b2a0_alt1(_QWORD, _QWORD) __asm__("NgxRoutine_2b2a0");
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_70310(__int64, __int64, __int64*, _QWORD*, int, int, int,
                         __int64, char, int);
__int64 NgxRoutine_a8ee0(__int64 result, __int64, __int64);
__int64 NgxRoutine_a9080(__int64, __int64);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, char);
__int64 NgxRoutine_baf10(__int64 result);
__int64 NgxRoutine_baf10_alt1(_QWORD) __asm__("NgxRoutine_baf10");
__int64 dltss_network_65b40(__int64, __int64, __int64*, int, int, int, __int64,
                            __int64, int, __int64, int);
__int64 dltss_network_65c90(__int64, __int64, _QWORD*, __int64*, unsigned int,
                            unsigned int, _QWORD*, unsigned int, __int64,
                            __int64, int);
__int64 dltss_network_69850(__int64, __int64, __int64*, __int64*, unsigned int,
                            unsigned int, int, _QWORD*, unsigned int, __int64,
                            __int64, int);
__int64 dltss_network_6a650(__int64, __int64, _QWORD*, __int64*, int, int, int,
                            _QWORD*, __int64*, int, __int64, char, __int64, int,
                            int, int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9210(__int64, __int64);
__int64 nvidia_dlss_a9670(__int64, __int64*, unsigned int, unsigned int, int,
                          int, int, unsigned int);
__int64 nvidia_dlss_rel_source_features_dlaa_701c0(__int64, __int64, __int64,
                                                   __int64*, __int64,
                                                   unsigned int, __int64*,
                                                   unsigned int, __int64, int);
__int64 reuseWeightsBias(__int64);
__int64 strlen_plt(_QWORD);
double ceil_plt(double);
double sqrt_plt(double);
extern _UNKNOWN* NgxData_952e68;
extern _UNKNOWN* NgxData_952e78;
extern _UNKNOWN* NgxData_952e80;
extern _UNKNOWN* NgxData_952e88;
extern _UNKNOWN* NgxData_952e90;
extern _UNKNOWN* NgxData_952e98;
extern _UNKNOWN* NgxData_952ec8;
extern _UNKNOWN* NgxData_952ed0;
extern _UNKNOWN* NgxData_952ee0;
extern _UNKNOWN* NgxData_952ef0;
extern _UNKNOWN* NgxData_952f00;
extern _UNKNOWN* NgxData_952f10;
extern _UNKNOWN* NgxData_952f20;
extern _UNKNOWN* NgxData_952f30;
extern _UNKNOWN* NgxData_952f50;
extern _UNKNOWN* NgxData_952f60;
extern _UNKNOWN* NgxData_952f70;
extern _UNKNOWN* NgxData_952f78;
extern _UNKNOWN* NgxData_952f80;
extern _UNKNOWN* NgxData_952f90;
extern _UNKNOWN* NgxData_952fa0;
extern _UNKNOWN* NgxData_952fb0;
extern _UNKNOWN* NgxData_952fc0;
extern _UNKNOWN* NgxData_952fd0;
extern _UNKNOWN* NgxData_952fe0;
extern _UNKNOWN* NgxData_952ff0;
extern _UNKNOWN* NgxData_953010;
extern _UNKNOWN* NgxData_953020;
extern _UNKNOWN* NgxData_953030;
extern _UNKNOWN* NgxData_953038;
extern _UNKNOWN* NgxData_953048;
extern _UNKNOWN* NgxData_953058;
extern _UNKNOWN* NgxData_953068;
extern _UNKNOWN* NgxData_953078;
extern __int64* NgxData_952b60[2];
extern __int64 NgxData_2b6b550;
extern __int64 NgxData_2b6b558;
extern __int64 NgxData_2b6b560;
extern __int64 NgxData_2b6b568;
extern __int64 NgxData_2b6b570;
extern __int64 NgxData_2b6b578;
extern __int64 NgxData_2b6b580;
extern __int64 NgxData_2b6b588;
extern __int64 NgxData_2b6b590;
extern __int64 NgxData_2b6b598;
extern __int64 NgxData_2b6b5a0;
extern __int64 NgxData_2b6b5a8;
extern __int64 NgxData_2b6b5b0;
extern __int64 NgxData_2b6b5b8;
extern __int64 NgxData_2b6b5c0;
extern __int64 NgxData_2b6b5c8;
extern __int64 NgxData_2b6b5d0;
extern __int64 NgxData_2b6b5d8;
extern __int64 NgxData_2b6b5e0;
extern __int64 NgxData_2b6b5e8;
extern __int64 NgxData_2b6b5f0;
extern __int64 NgxData_2b6b5f8;
extern __int64 NgxData_2b6b600;
extern __int64 NgxData_2b6b608;
extern __int64 NgxData_2b6b610;
extern __int64 NgxData_2b6b618;
extern __int64 NgxData_2b6b620;
extern __int64 NgxData_2b6b628;
extern __int64 NgxData_2b6b630;
extern __int64 NgxData_2b6b638;
extern __int64 NgxData_2b6b640;
extern __int64 NgxData_2b6b648;
extern __int64 NgxData_2b6b650;
extern __int64 NgxData_2b6b658;
extern __int64 NgxData_2b6b660;
extern __int64 NgxData_2b6b668;
extern __int64 NgxData_2b6b670;
extern __int64 NgxData_2b6b678;
extern __int64 NgxData_2b6b680;
extern __int64 NgxData_2b6b688;
extern __int64 NgxData_2b6b690;
extern __int64 NgxData_2b6b698;
extern __int64 NgxData_2b6b6a0;
extern __int64 NgxData_2b6b6a8;
extern __int64 NgxData_2b6b6b0;
extern __int64 NgxData_2b6b6b8;
extern __int64 NgxData_2b6b6c0;
extern __int64 NgxData_2b6b6c8;
extern __int64 NgxData_2b6b6d0;
extern __int64 NgxData_2b6b6d8;
extern __int64 NgxData_2b6b6e0;
extern __int64 NgxData_2b6b6e8;
extern __int64 NgxData_2b6b6f0;
extern __int64 NgxData_2b6b6f8;
extern __int64 NgxData_2b6b700;
extern __int64 NgxData_2b6b708;
extern __int64 NgxData_2b6b710;
extern __int64 NgxData_2b6b718;
extern __int64 NgxData_2b6b720;
extern __int64 NgxData_2b6b728;
extern __int64 NgxData_2b6b730;
extern __int64 NgxData_2b6b738;
extern __int64 NgxData_2b6b740;
extern __int64 NgxData_2b6b748;
extern __int64 NgxData_2b6b750;
extern __int64 NgxData_2b6b758;
extern __int64 NgxData_2b6b760;
extern __int64 NgxData_2b6b768;
extern char** NgxData_953088;
extern int* NgxData_952e70;
extern int* NgxData_952ea0[5];
extern int* NgxData_952ea8[4];
extern int* NgxData_952eb0[3];
extern int* NgxData_952eb8[2];
extern int* NgxData_952ec0;
extern int* NgxData_952ed8;
extern int* NgxData_952ee8;
extern int* NgxData_952ef8;
extern int* NgxData_952f08;
extern int* NgxData_952f18;
extern int* NgxData_952f28;
extern int* NgxData_952f38[3];
extern int* NgxData_952f40[2];
extern int* NgxData_952f48;
extern int* NgxData_952f58;
extern int* NgxData_952f68;
extern int* NgxData_952f88;
extern int* NgxData_952f98;
extern int* NgxData_952fa8;
extern int* NgxData_952fb8;
extern int* NgxData_952fc8;
extern int* NgxData_952fd8;
extern int* NgxData_952fe8;
extern int* NgxData_952ff8[3];
extern int* NgxData_953000[2];
extern int* NgxData_953008;
extern int* NgxData_953018;
extern int* NgxData_953028;
extern int* NgxData_953040;
extern int* NgxData_953050;
extern int* NgxData_953060;
extern int* NgxData_953070;
extern int* NgxData_953080;
void* dltss_network_66c80(__int64, __int64, unsigned int, __int64*,
                          unsigned int, unsigned int, _QWORD*, unsigned int,
                          __int64, __int64, int);
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) NgxRoutine_e2370(const char*, ...);
void __attribute__((noreturn))
cornflower_rook_00389_2b270_alt1(_QWORD) __asm__("cornflower_rook_00389_2b270");
__int64 cornflower_rook_00389_2a920(__int64 a1);
__int64 cornflower_rook_00389_2a9e0(__int64 result, unsigned __int64 a2,
                                    int a3);
bool cornflower_rook_00389_2aaa0(_DWORD* a1);
__int64 cornflower_rook_00389_2ab30(__int64 a1);
__int64 cornflower_rook_00389_2ac40(__int64 a1);
__int64 cornflower_rook_00389_2acf0(__int64 a1);
void __attribute__((noreturn)) cornflower_rook_00389_2b250();
void __attribute__((noreturn)) cornflower_rook_00389_2b270(const char* a1);
__int64 cornflower_rook_00389_6d240(__int64** a1, __int64* a2, __int64 a3,
                                    __int64 a4, __int64 a5);
__int64 cornflower_rook_00389_98850();
_QWORD* NgxRoutine_28900(_QWORD*, __int64, __int64);
_QWORD* NgxRoutine_29e50(_QWORD*);
_QWORD* NgxRoutine_bcd70(_QWORD*);
_QWORD* NgxRoutine_bd1d0(_QWORD*, unsigned __int8);
__attribute__((swiftcall)) void NgxRoutine_be650(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
    PSEUDO_X8, unsigned __int8* result, unsigned __int64, unsigned __int64);
__int64 NgxRoutine_2ca80(unsigned __int8*, const char*, unsigned __int64);
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_db310(__int64*, __int64);
__int64 isdigit_plt(_QWORD);
__int64 memchr_plt(__int64, int, unsigned __int64);
__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");
__int64 memmove_plt(__int64, __int64, unsigned __int64);
bool NgxRoutine_2cc20(__int64, const char*);
extern _UNKNOWN* NgxData_9511b8;
extern __int64 NgxData_951178[7];
int atoi_plt(const char*);
int memcmp_plt(__int64, __int64, unsigned __int64);
unsigned __int64
NgxRoutine_2ca80_alt1(unsigned __int8*, const char*,
                      unsigned __int64) __asm__("NgxRoutine_2ca80");
unsigned __int64 strlen_plt_alt1(const char*) __asm__("strlen_plt");
__int64 cornflower_rook_00389_29ee0(__int64 a1);
_QWORD* cornflower_rook_00389_2b4a0(__int64 a1);
__int64 cornflower_rook_00389_2e600(__int64 a1);

__int64 cornflower_rook_00389_29ee0(__int64 a1)
{
  unsigned __int64 v1;
  signed __int64 v2;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  signed __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int8 v33;
  __int64 result;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  signed __int64 v49;
  signed __int64 v50;
  signed __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  char v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  int v67;
  _BOOL4 v68;
  const char* v69;
  unsigned __int64 v70;
  _QWORD* v71;
  __int64 v72;
  unsigned __int8 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  char* v77;
  char* v78;
  __int64 v79;
  char v80;
  signed __int64 v81;
  unsigned __int8 v82;
  char* v83;
  signed __int64 v84;
  signed __int64 v85;
  signed __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int8* v92;
  int v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char* v98;
  char* v99;
  __int64 v100;
  char v101;
  char v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  char* v105;
  int v106;
  char v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  char* v111;
  int v112;
  char v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  char* v117;
  char v118;
  struct {
    __int64 v119;
    unsigned __int64 v120;
    char* v121;
  } v119_;
  __int64 v122;
  struct {
    unsigned __int64 v123;
    char* v124;
  } v123_;
  struct {
    __int64 v125;
    unsigned __int64 v126;
    char* v127;
  } v125_;

  v1 = *(unsigned __int8*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  v4 = a1 + 33;
  if ((v1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen_plt_alt1("_");
  if (v6 != 0) {
    v7 = v1 >> 1;
    v8 = v6;
    if ((v1 & 1) != 0) {
      v7 = v2;
    }
    if (v7 < v6) {
      goto LABEL_49;
    }
    v9 = v5 + v7;
    v10 = v5;
    while (1) {
      v11 = memchr_plt(v10, 95, v7 - v8 + 1);
      if (v11 == 0) {
        goto LABEL_49;
      }
      v12 = v11;
      if (memcmp_plt(v11, (__int64)"_", v8) == 0) {
        break;
      }
      v10 = v12 + 1;
      v7 = v9 - (v12 + 1);
      if (v7 < v8) {
        goto LABEL_49;
      }
    }
    if (v12 == v9 || (v13 = v12 - v5, v12 - v5 == -1)) {
    LABEL_49:
      v35 = strlen_plt_alt1("No layout in layer name");
      v36 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                             (__int64)"No layout in layer name", v35);
      NgxRoutine_be650((void*)((__int64)&v125_.v125),
                       (__int64)v36 + *(_QWORD*)(*v36 - 24LL));
      v37 = NgxRoutine_db310(&v125_.v125, (__int64)NgxData_9511b8);
      v38 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v37 + 56LL))(v37, 10);
      NgxRoutine_db240(&v125_.v125);
      NgxRoutine_bd1d0(v36, v38);
      result = (__int64)NgxRoutine_bcd70(v36);
      *(_DWORD*)(a1 + 84) = 2;
      return result;
    }
  }
  else {
    v13 = 0;
  }
  v14 = *(unsigned __int8*)(a1 + 32);
  v15 = v14 >> 1;
  v16 = (v14 & 1) == 0;
  v17 = *(_QWORD*)(a1 + 40);
  if (v16) {
    v17 = v15;
    v18 = v4;
  }
  else {
    v18 = *(_QWORD*)(a1 + 48);
  }
  if (v17 >= v13) {
    v19 = v13;
  }
  else {
    v19 = v17;
  }
  if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_211;
  }
  if (v19 >= 0x17) {
    if ((v19 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v19 | 7) + 1;
    }
    v20 = (char*)NgxRoutine_420(v21);
    v125_.v126 = v19;
    v125_.v127 = v20;
    v125_.v125 = v21 | 1;
  }
  else {
    LOBYTE(v125_.v125) = 2 * v19;
    v20 = (char*)&v125_.v125 + 1;
    if (v19 == 0) {
      goto LABEL_29;
    }
  }
  memmove_plt((__int64)v20, v18, v19);
LABEL_29:
  v20[v19] = 0;
  v22 = strlen_plt_alt1("nhwc");
  v23 = (unsigned __int8)v125_.v125 >> 1;
  if ((v125_.v125 & 1) != 0) {
    v23 = v125_.v126;
  }
  if (v22 != v23) {
    goto LABEL_37;
  }
  v24 = v22;
  if (v22 == -1) {
    goto LABEL_212;
  }
  v25 = (v125_.v125 & 1) != 0 ? (__int64*)v125_.v127
                              : (__int64*)((char*)&v125_.v125 + 1);
  if (memcmp_plt((__int64)v25, (__int64)"nhwc", v24) == 0) {
    v39 = 0;
  }
  else {
  LABEL_37:
    v26 = strlen_plt_alt1("nchw8");
    v27 = (unsigned __int8)v125_.v125 >> 1;
    if ((v125_.v125 & 1) != 0) {
      v27 = v125_.v126;
    }
    if (v26 != v27) {
    LABEL_45:
      v30 = strlen_plt_alt1("Unknown layout type");
      v31 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                             (__int64)"Unknown layout type", v30);
      NgxRoutine_be650((void*)((__int64)&v122),
                       (__int64)v31 + *(_QWORD*)(*v31 - 24LL));
      v32 = NgxRoutine_db310(&v122, (__int64)NgxData_9511b8);
      v33 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v32 + 56LL))(v32, 10);
      NgxRoutine_db240(&v122);
      NgxRoutine_bd1d0(v31, v33);
      result = (__int64)NgxRoutine_bcd70(v31);
      *(_DWORD*)(a1 + 84) = 2;
      if ((v125_.v125 & 1) == 0) {
        return result;
      }
      return NgxRoutine_430(v125_.v127, v125_.v125 & 0xFFFFFFFFFFFFFFFELL);
    }
    v28 = v26;
    if (v26 == -1) {
      goto LABEL_212;
    }
    if ((v125_.v125 & 1) != 0) {
      v29 = v125_.v127;
    }
    else {
      v29 = (char*)&v125_.v125 + 1;
    }
    if (memcmp_plt((__int64)v29, (__int64)"nchw8", v28) != 0) {
      goto LABEL_45;
    }
    v39 = 1;
  }
  v40 = *(unsigned __int8*)(a1 + 32);
  *(_DWORD*)(a1 + 1844) = v39;
  v41 = *(_QWORD*)(a1 + 40);
  if ((v40 & 1) == 0) {
    v41 = v40 >> 1;
  }
  if (v13 >= v41) {
    goto LABEL_212;
  }
  v42 = v13 + 1;
  v43 = v41 - (v13 + 1);
  if ((v40 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 48);
  }
  if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_211;
  }
  if (v43 >= 0x17) {
    if ((v43 | 7) == 0x17) {
      v45 = 26;
    }
    else {
      v45 = (v43 | 7) + 1;
    }
    v44 = (char*)NgxRoutine_420(v45);
    v123_.v123 = v43;
    v123_.v124 = v44;
    v122 = v45 | 1;
    goto LABEL_65;
  }
  LOBYTE(v122) = 2 * v43;
  v44 = (char*)&v122 + 1;
  if (v41 != v42) {
  LABEL_65:
    memmove_plt((__int64)v44, v4 + v42, v43);
  }
  v44[v43] = 0;
  v46 = (unsigned __int8)v122;
  v47 = v123_.v123;
  if ((v122 & 1) != 0) {
    v48 = v123_.v124;
  }
  else {
    v48 = (char*)&v122 + 1;
  }
  v49 = strlen_plt_alt1("_");
  if (v49 != 0) {
    v50 = v46 >> 1;
    v51 = v49;
    if ((v46 & 1) != 0) {
      v50 = v47;
    }
    if (v50 < v49) {
      goto LABEL_106;
    }
    v52 = &v48[v50];
    v53 = (__int64)v48;
    while (1) {
      v54 = memchr_plt(v53, 95, v50 - v51 + 1);
      if (v54 == 0) {
        goto LABEL_106;
      }
      v55 = v54;
      if (memcmp_plt(v54, (__int64)"_", v51) == 0) {
        break;
      }
      v53 = v55 + 1;
      v50 = (signed __int64)&v52[-v55 - 1];
      if (v50 < v51) {
        goto LABEL_106;
      }
    }
    if ((char*)v55 == v52) {
      goto LABEL_106;
    }
    v56 = v55 - (_QWORD)v48;
    if (v55 - (_QWORD)v48 == -1) {
      goto LABEL_106;
    }
  }
  else {
    v56 = 0;
  }
  v57 = v123_.v123;
  if ((v122 & 1) != 0) {
    v58 = v123_.v124;
  }
  else {
    v57 = (unsigned __int64)(unsigned __int8)v122 >> 1;
    v58 = (char*)&v122 + 1;
  }
  if (v57 >= v56) {
    v59 = v56;
  }
  else {
    v59 = v57;
  }
  if (v59 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_211;
  }
  if (v59 >= 0x17) {
    if ((v59 | 7) == 0x17) {
      v61 = 26;
    }
    else {
      v61 = (v59 | 7) + 1;
    }
    v60 = (char*)NgxRoutine_420(v61);
    v119_.v120 = v59;
    v119_.v121 = v60;
    v119_.v119 = v61 | 1;
    goto LABEL_93;
  }
  LOBYTE(v119_.v119) = 2 * v59;
  v60 = (char*)&v119_.v119 + 1;
  if (v59 != 0) {
  LABEL_93:
    memmove_plt((__int64)v60, (__int64)v58, v59);
  }
  v60[v59] = 0;
  v62 = strlen_plt_alt1("conv");
  v63 = v119_.v119;
  v64 = (unsigned __int8)v119_.v119 >> 1;
  if ((v119_.v119 & 1) != 0) {
    v64 = v119_.v120;
  }
  if (v62 == v64) {
    v65 = v62;
    if (v62 == -1) {
      goto LABEL_212;
    }
    if ((v119_.v119 & 1) != 0) {
      v66 = v119_.v121;
    }
    else {
      v66 = (char*)&v119_.v119 + 1;
    }
    v67 = memcmp_plt((__int64)v66, (__int64)"conv", v65);
    v63 = v119_.v119;
    v68 = v67 != 0;
  }
  else {
    v68 = true;
  }
  if ((v63 & 1) != 0) {
    NgxRoutine_430(v119_.v121, v119_.v119 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (v68) {
  LABEL_106:
    v69 = "No conv in layer name";
  LABEL_107:
    v70 = strlen_plt_alt1(v69);
    v71 = NgxRoutine_28900((_QWORD*)NgxData_951178[0], (__int64)v69, v70);
    NgxRoutine_be650((void*)((__int64)&v119_.v119),
                     (__int64)v71 + *(_QWORD*)(*v71 - 24LL));
    v72 = NgxRoutine_db310(&v119_.v119, (__int64)NgxData_9511b8);
    v73 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v72 + 56LL))(v72, 10);
    NgxRoutine_db240(&v119_.v119);
    NgxRoutine_bd1d0(v71, v73);
    result = (__int64)NgxRoutine_bcd70(v71);
    *(_DWORD*)(a1 + 84) = 2;
    goto LABEL_108;
  }
  v74 = v123_.v123;
  if ((v122 & 1) == 0) {
    v74 = (unsigned __int64)(unsigned __int8)v122 >> 1;
  }
  if (v56 >= v74) {
  LABEL_212:
    cornflower_rook_00389_2b250();
  }
  v75 = v56 + 1;
  v76 = v74 - (v56 + 1);
  if ((v122 & 1) != 0) {
    v77 = v123_.v124;
  }
  else {
    v77 = (char*)&v122 + 1;
  }
  if (v76 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_211:
    NgxRoutine_27cb0();
  }
  if (v76 >= 0x17) {
    if ((v76 | 7) == 0x17) {
      v79 = 26;
    }
    else {
      v79 = (v76 | 7) + 1;
    }
    v78 = (char*)NgxRoutine_420(v79);
    v119_.v120 = v76;
    v119_.v121 = v78;
    v119_.v119 = v79 | 1;
    goto LABEL_128;
  }
  LOBYTE(v119_.v119) = 2 * v76;
  v78 = (char*)&v119_.v119 + 1;
  if (v74 != v75) {
  LABEL_128:
    memmove_plt((__int64)v78, (__int64)&v77[v75], v76);
  }
  v80 = v122;
  v78[v76] = 0;
  if ((v80 & 1) != 0) {
    NgxRoutine_430(v123_.v124, v122 & 0xFFFFFFFFFFFFFFFELL);
  }
  v82 = v119_.v119;
  v81 = v119_.v120;
  v122 = v119_.v119;
  v123_.v123 = v119_.v120;
  v123_.v124 = v119_.v121;
  if ((v119_.v119 & 1) != 0) {
    v83 = v119_.v121;
  }
  else {
    v83 = (char*)&v122 + 1;
  }
  v84 = strlen_plt_alt1("_");
  if (v84 != 0) {
    v85 = v84;
    if ((v82 & 1) != 0) {
      v86 = v81;
    }
    else {
      v86 = (unsigned __int64)v82 >> 1;
    }
    if (v86 < v84) {
      goto LABEL_210;
    }
    v87 = &v83[v86];
    v88 = (__int64)v83;
    while (1) {
      v89 = memchr_plt(v88, 95, v86 - v85 + 1);
      if (v89 == 0) {
        goto LABEL_210;
      }
      v90 = v89;
      if (memcmp_plt(v89, (__int64)"_", v85) == 0) {
        break;
      }
      v88 = v90 + 1;
      v86 = (signed __int64)&v87[-v90 - 1];
      if (v86 < v85) {
        goto LABEL_210;
      }
    }
    if ((char*)v90 == v87 ||
        (v91 = v90 - (_QWORD)v83, v90 - (_QWORD)v83 == -1)) {
    LABEL_210:
      v69 = "No conv size in layer name";
      goto LABEL_107;
    }
  }
  else {
    v91 = 0;
  }
  if ((v122 & 1) != 0) {
    v92 = (unsigned __int8*)v123_.v124;
  }
  else {
    v92 = (unsigned __int8*)&v122 + 1;
  }
  v93 = *v92;
  if ((unsigned int)isdigit_plt(*v92) == 0) {
    v69 = "Convolution kernel size is not digit";
    goto LABEL_107;
  }
  v94 = (unsigned __int8)v122;
  *(_DWORD*)(a1 + 1828) = v93 - 48;
  *(_DWORD*)(a1 + 1832) = v93 - 48;
  v95 = v123_.v123;
  if ((v94 & 1) == 0) {
    v95 = v94 >> 1;
  }
  if (v91 >= v95) {
    goto LABEL_212;
  }
  v96 = v91 + 1;
  v97 = v95 - (v91 + 1);
  if ((v94 & 1) != 0) {
    v98 = v123_.v124;
  }
  else {
    v98 = (char*)&v122 + 1;
  }
  if (v97 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_211;
  }
  if (v97 >= 0x17) {
    if ((v97 | 7) == 0x17) {
      v100 = 26;
    }
    else {
      v100 = (v97 | 7) + 1;
    }
    v99 = (char*)NgxRoutine_420(v100);
    v119_.v120 = v97;
    v119_.v121 = v99;
    v119_.v119 = v100 | 1;
    goto LABEL_167;
  }
  LOBYTE(v119_.v119) = 2 * v97;
  v99 = (char*)&v119_.v119 + 1;
  if (v95 != v96) {
  LABEL_167:
    memmove_plt((__int64)v99, (__int64)&v98[v96], v97);
  }
  v101 = v122;
  v99[v97] = 0;
  if ((v101 & 1) != 0) {
    NgxRoutine_430(v123_.v124, v122 & 0xFFFFFFFFFFFFFFFELL);
  }
  v102 = v119_.v119;
  v103 = v119_.v120;
  v122 = v119_.v119;
  v123_.v123 = v119_.v120;
  v123_.v124 = v119_.v121;
  if ((v119_.v119 & 1) == 0) {
    v103 = (unsigned __int8)v119_.v119 >> 1;
  }
  if (v103 >= 3) {
    v104 = 3;
  }
  else {
    v104 = v103;
  }
  LOBYTE(v119_.v119) = 2 * v104;
  if (v103 != 0) {
    if ((v102 & 1) != 0) {
      v105 = v119_.v121;
    }
    else {
      v105 = (char*)&v122 + 1;
    }
    memmove_plt((__int64)&v119_.v119 + 1, (__int64)v105, v104);
  }
  *((_BYTE*)&v119_.v119 + v104 + 1) = 0;
  v106 = atoi_plt((const char*)&v119_.v119 + 1);
  v107 = v119_.v119;
  *(_DWORD*)(a1 + 1856) = v106;
  if ((v107 & 1) != 0) {
    NgxRoutine_430(v119_.v121, v119_.v119 & 0xFFFFFFFFFFFFFFFELL);
  }
  v108 = (unsigned __int64)(unsigned __int8)v122 >> 1;
  if ((v122 & 1) != 0) {
    v108 = v123_.v123;
  }
  if (v108 <= 3) {
    goto LABEL_212;
  }
  v109 = v108 - 4;
  if (v109 >= 3) {
    v110 = 3;
  }
  else {
    v110 = v109;
  }
  LOBYTE(v119_.v119) = 2 * v110;
  if (v109 != 0) {
    if ((v122 & 1) != 0) {
      v111 = v123_.v124 + 4;
    }
    else {
      v111 = (char*)&v122 + 5;
    }
    memmove_plt((__int64)&v119_.v119 + 1, (__int64)v111, v110);
  }
  *((_BYTE*)&v119_.v119 + v110 + 1) = 0;
  v112 = atoi_plt((const char*)&v119_.v119 + 1);
  v113 = v119_.v119;
  *(_DWORD*)(a1 + 1860) = v112;
  if ((v113 & 1) != 0) {
    NgxRoutine_430(v119_.v121, v119_.v119 & 0xFFFFFFFFFFFFFFFELL);
  }
  v114 = (unsigned __int64)(unsigned __int8)v122 >> 1;
  if ((v122 & 1) != 0) {
    v114 = v123_.v123;
  }
  if (v114 <= 7) {
    goto LABEL_212;
  }
  v115 = v114 - 8;
  if (v115 >= 3) {
    v116 = 3;
  }
  else {
    v116 = v115;
  }
  LOBYTE(v119_.v119) = 2 * v116;
  if (v115 != 0) {
    if ((v122 & 1) != 0) {
      v117 = v123_.v124 + 8;
    }
    else {
      v117 = (char*)&v123_.v123 + 1;
    }
    memmove_plt((__int64)&v119_.v119 + 1, (__int64)v117, v116);
  }
  *((_BYTE*)&v119_.v119 + v116 + 1) = 0;
  result = atoi_plt((const char*)&v119_.v119 + 1);
  v118 = v119_.v119;
  *(_DWORD*)(a1 + 1864) = result;
  if ((v118 & 1) != 0) {
    result = NgxRoutine_430(v119_.v121, v119_.v119 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_108:
  if ((v122 & 1) == 0) {
    if ((v125_.v125 & 1) == 0) {
      return result;
    }
    return NgxRoutine_430(v125_.v127, v125_.v125 & 0xFFFFFFFFFFFFFFFELL);
  }
  result = NgxRoutine_430(v123_.v124, v122 & 0xFFFFFFFFFFFFFFFELL);
  if ((v125_.v125 & 1) != 0) {
    return NgxRoutine_430(v125_.v127, v125_.v125 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 cornflower_rook_00389_2a920(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 result;
  int v10;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_QWORD*)(a1 + 88);
  v3 = *(_DWORD*)(a1 + 140);
  v4 = *(_DWORD*)(a1 + 144);
  v5 = *(_QWORD**)(v1 + 8);
  v6 = *(_QWORD*)(v1 + 16);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_DWORD*)(a1 + 232);
  v8 = NgxRoutine_2b2a0(v5, (unsigned __int8*)(a1 + 32)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ((__int64 (*)(_QWORD, _QWORD, _QWORD))v8[5])(v3, v4, v7),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 8) = result;
  *(_DWORD*)(a1 + 16) = v10;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return NgxRoutine_baf10(v6);
  }
  return result;
}

__int64 cornflower_rook_00389_2a9e0(__int64 result, unsigned __int64 a2, int a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  int v8;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (HIDWORD(a2) != 0 && (_DWORD)a2 != 0 && a3 != 0) {
    *(_QWORD*)(result + 20) = a2;
    *(_DWORD*)(result + 28) = a3;
  }
  else {
    v3 = *(_QWORD*)(result + 88);
    v4 = *(_QWORD**)(v3 + 24);
    v5 = *(_QWORD*)(v3 + 32);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
    }
    v6 = result;
    v7 = NgxRoutine_2b2a0(v4, (unsigned __int8*)(result + 32)),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = ((__int64 (*)(void))v7[5])(),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v6 + 20) = result;
    *(_DWORD*)(v6 + 28) = v8;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return NgxRoutine_baf10(v5);
    }
  }
  return result;
}

bool cornflower_rook_00389_2aaa0(_DWORD* a1)
{
  int v1;
  int v2;
  int v3;

  v1 = a1[461];
  if (v1 == 1) {
    v2 = 2;
  }
  else {
    v2 = a1[461];
  }
  if (a1[24] == 0) {
    v1 = 0;
    v2 = 0;
  }
  v3 = a1[49];
  return a1[37] == a1[61] && v3 == a1[58] && a1[73] == v3 && a1[47] == a1[35] &&
         a1[48] == a1[36] && a1[457] == a1[59] && a1[458] == a1[60] &&
         a1[71] == 1 && a1[72] == 1 && a1[70] == 1 && v1 == a1[38] &&
         v2 == a1[62] && v1 == a1[50];
}

__int64 cornflower_rook_00389_2ab30(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1) & 1) == 0) {
    return 2;
  }
  v2 = *(_DWORD*)(a1 + 140);
  v3 = *(_DWORD*)(a1 + 144);
  v4 = *(_DWORD*)(a1 + 148);
  v5 = *(_DWORD*)(a1 + 232);
  v6 = *(_DWORD*)(a1 + 1828);
  v7 = *(_DWORD*)(a1 + 1832);
  v8 = *(unsigned __int8*)(a1 + 304);
  memset_plt(a1 + 320, 0, 376);
  v9 = *(_QWORD*)(a1 + 272);
  *(_DWORD*)(a1 + 352) = v2;
  *(_DWORD*)(a1 + 356) = v3;
  *(_DWORD*)(a1 + 360) = v4;
  *(_DWORD*)(a1 + 364) = v2;
  *(_DWORD*)(a1 + 368) = v3;
  *(_DWORD*)(a1 + 372) = v5;
  *(_DWORD*)(a1 + 376) = v6;
  *(_DWORD*)(a1 + 380) = v7;
  *(_DWORD*)(a1 + 384) = v8;
  *(_DWORD*)(a1 + 392) = v4 * v3;
  v10 = *(_QWORD*)(a1 + 128);
  *(_DWORD*)(a1 + 388) = v3 * v2;
  *(_DWORD*)(a1 + 400) = v3 * v2;
  v11 = *(_QWORD*)(a1 + 176);
  *(_DWORD*)(a1 + 404) = v5 * v3;
  *(_DWORD*)(a1 + 396) = v6 * v4 * v7;
  v12 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 336) = v11;
  *(_QWORD*)(a1 + 344) = v9;
  *(_QWORD*)(a1 + 320) = v10;
  *(_QWORD*)(a1 + 328) = v12;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 88LL))(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 104LL))(a1);
  if ((_DWORD)result == 0) {
    *(_BYTE*)(a1 + 312) = 1;
  }
  return result;
}

__int64 cornflower_rook_00389_2ac40(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 88);
  v3 = *(_QWORD*)(v1 + 40);
  v4 = *(_QWORD*)(v1 + 48);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = NgxRoutine_2b2a0_alt1(v3, a1 + 32);
    result = (*(__int64 (**)(__int64))(v5 + 40))(a1 + 320);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return NgxRoutine_baf10_alt1(v4);
    }
  }
  else {
    v7 = NgxRoutine_2b2a0_alt1(v3, a1 + 32);
    return (*(__int64 (**)(__int64))(v7 + 40))(a1 + 320);
  }
  return result;
}

__int64 cornflower_rook_00389_2acf0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;

  if (*(_BYTE*)(a1 + 312) != 1) {
    return 2;
  }
  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(_QWORD*)(v1 + 56);
  v3 = *(_QWORD*)(v1 + 64);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = NgxRoutine_2b2a0_alt1(v2, a1 + 32);
  (*(void (**)(__int64, __int64, __int64))(v5 + 40))(a1 + 320, a1 + 8, a1 + 20);
  if (v3 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  NgxRoutine_baf10_alt1(v3);
  return 0;
}

void __attribute__((noreturn)) cornflower_rook_00389_2b250()
{
  cornflower_rook_00389_2b270_alt1("basic_string");
}

void __attribute__((noreturn)) cornflower_rook_00389_2b270(const char* a1)
{
  NgxRoutine_e2370(
      "out_of_range was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
}

_QWORD* cornflower_rook_00389_2b4a0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  signed __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  signed __int64 v14;
  __int64 v15;
  signed __int64 v16;
  signed __int64 v17;
  signed __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  char v36;
  unsigned __int64 v37;
  signed __int64 v38;
  __int64 v39;
  signed __int64 v40;
  signed __int64 v41;
  signed __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  char* v58;
  char v59;
  unsigned __int64 v60;
  signed __int64 v61;
  __int64 v62;
  signed __int64 v63;
  signed __int64 v64;
  signed __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  char* v80;
  char* v81;
  char v82;
  char v83;
  char* v84;
  char* v85;
  int v86;
  _QWORD* result;
  int v88;
  unsigned __int64 v89;
  signed __int64 v90;
  __int64 v91;
  signed __int64 v92;
  signed __int64 v93;
  signed __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  bool v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  char* v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  __int64* v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  char* v115;
  unsigned __int64 v116;
  _QWORD* v117;
  __int64 v118;
  unsigned __int8 v119;
  unsigned __int64 v120;
  _QWORD* v121;
  __int64 v122;
  unsigned __int8 v123;
  __int64 v124;
  char v125;
  unsigned __int64 v126;
  _QWORD* v127;
  __int64 v128;
  unsigned __int8 v129;
  int v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  char* v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  char* v139;
  signed __int64 v140;
  signed __int64 v141;
  signed __int64 v142;
  char* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  char* v149;
  unsigned __int64 v150;
  char* v151;
  __int64 v152;
  unsigned __int64 v153;
  char v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  char* v157;
  int v158;
  _BOOL4 v159;
  const char* v160;
  unsigned __int64 v161;
  _QWORD* v162;
  __int64 v163;
  unsigned __int8 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  char* v168;
  char* v169;
  __int64 v170;
  char v171;
  signed __int64 v172;
  unsigned __int8 v173;
  char* v174;
  signed __int64 v175;
  signed __int64 v176;
  signed __int64 v177;
  char* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  char* v184;
  unsigned __int64 v185;
  char* v186;
  __int64 v187;
  unsigned __int64 v188;
  char v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  char* v192;
  int v193;
  _BOOL4 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  char* v198;
  char* v199;
  __int64 v200;
  char v201;
  signed __int64 v202;
  unsigned __int8 v203;
  char* v204;
  signed __int64 v205;
  signed __int64 v206;
  signed __int64 v207;
  char* v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  char* v214;
  unsigned __int64 v215;
  char* v216;
  __int64 v217;
  unsigned __int64 v218;
  char v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  char* v222;
  int v223;
  _BOOL4 v224;
  unsigned __int64 v225;
  unsigned __int64 v226;
  unsigned __int64 v227;
  char* v228;
  char* v229;
  __int64 v230;
  char v231;
  signed __int64 v232;
  unsigned __int8 v233;
  char* v234;
  signed __int64 v235;
  signed __int64 v236;
  signed __int64 v237;
  char* v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  unsigned __int8* v243;
  int v244;
  unsigned __int64 v245;
  bool v246;
  unsigned __int8* v247;
  int v248;
  const char* v249;
  unsigned __int64 v250;
  _QWORD* v251;
  struct {
    __int64 v252;
    unsigned __int64 v253;
    char* v254;
  } v252_;
  struct {
    __int64 v255;
    unsigned __int64 v256;
    char* v257;
  } v255_;
  struct {
    __int64 v258;
    unsigned __int64 v259;
    char* v260;
  } v258_;

  v1 = *(unsigned __int8*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  v4 = a1 + 33;
  if ((v1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen_plt_alt1("dfn");
  if (v6 != 0) {
    v7 = v1 >> 1;
    v8 = v6;
    if ((v1 & 1) != 0) {
      v7 = v2;
    }
    if (v7 >= v6) {
      v9 = v5 + v7;
      v10 = v5;
      do {
        v11 = memchr_plt(v10, 100, v7 - v8 + 1);
        if (v11 == 0) {
          break;
        }
        v12 = v11;
        if (memcmp_plt(v11, (__int64)"dfn", v8) == 0) {
          if (v12 == v9 || v12 - v5 == -1) {
            break;
          }
          goto LABEL_15;
        }
        v10 = v12 + 1;
        v7 = v9 - (v12 + 1);
      } while (v7 >= v8);
    }
  }
  else {
  LABEL_15:
    *(_BYTE*)(a1 + 3232) = 1;
  }
  v13 = *(unsigned __int8*)(a1 + 32);
  v14 = *(_QWORD*)(a1 + 40);
  if ((v13 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 48);
  }
  else {
    v15 = v4;
  }
  v16 = strlen_plt_alt1("aniso_gaussian_dfn");
  if (v16 != 0) {
    v17 = v13 >> 1;
    v18 = v16;
    if ((v13 & 1) != 0) {
      v17 = v14;
    }
    if (v17 < v16) {
      goto LABEL_151;
    }
    v19 = v15 + v17;
    v20 = v15;
    while (1) {
      v21 = memchr_plt(v20, 97, v17 - v18 + 1);
      if (v21 == 0) {
        goto LABEL_151;
      }
      v22 = v21;
      if (memcmp_plt(v21, (__int64)"aniso_gaussian_dfn", v18) == 0) {
        break;
      }
      v20 = v22 + 1;
      v17 = v19 - (v22 + 1);
      if (v17 < v18) {
        goto LABEL_151;
      }
    }
    if (v22 == v19) {
      goto LABEL_151;
    }
    v23 = v22 - v15;
    if (v22 - v15 == -1) {
      goto LABEL_151;
    }
  }
  else {
    v23 = 0;
  }
  v24 = strlen_plt_alt1("aniso_gaussian_dfn");
  if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  v25 = v23 + 1;
  v26 = v24;
  if (v24 >= 0x17) {
    if ((v24 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v24 | 7) + 1;
    }
    v27 = (char*)NgxRoutine_420(v28);
    v255_.v256 = v26;
    v255_.v257 = v27;
    v255_.v255 = v28 | 1;
    goto LABEL_37;
  }
  LOBYTE(v255_.v255) = 2 * v24;
  v27 = (char*)&v255_.v255 + 1;
  if (v24 != 0) {
  LABEL_37:
    memcpy_plt_alt1((__int64)v27, (__int64)"aniso_gaussian_dfn", v26);
  }
  v27[v26] = 0;
  if ((v255_.v255 & 1) != 0) {
    v29 = v255_.v256;
  }
  else {
    v29 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
  }
  v30 = *(unsigned __int8*)(a1 + 32);
  v31 = v25 + v29;
  v32 = *(_QWORD*)(a1 + 40);
  if ((v30 & 1) == 0) {
    v32 = v30 >> 1;
  }
  v33 = v32 - v31;
  if (v32 < v31) {
    goto LABEL_455;
  }
  if ((v30 & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 48);
  }
  else {
    v34 = v4;
  }
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v47 = 26;
    }
    else {
      v47 = (v33 | 7) + 1;
    }
    v35 = (char*)NgxRoutine_420(v47);
    v258_.v259 = v33;
    v258_.v260 = v35;
    v258_.v258 = v47 | 1;
  LABEL_68:
    memmove_plt((__int64)v35, v34 + v31, v33);
    v48 = v255_.v255;
    v35[v33] = 0;
    if ((v48 & 1) == 0) {
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  LOBYTE(v258_.v258) = 2 * v33;
  v35 = (char*)&v258_.v258 + 1;
  if (v32 != v31) {
    goto LABEL_68;
  }
  v36 = v255_.v255;
  *((_BYTE*)&v258_.v258 + v33 + 1) = 0;
  if ((v36 & 1) != 0) {
  LABEL_51:
    NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_52:
  v37 = *(unsigned __int8*)(a1 + 32);
  v38 = *(_QWORD*)(a1 + 40);
  if ((v37 & 1) != 0) {
    v39 = *(_QWORD*)(a1 + 48);
  }
  else {
    v39 = v4;
  }
  v40 = strlen_plt_alt1("fastpath");
  if (v40 != 0) {
    v41 = v37 >> 1;
    v42 = v40;
    if ((v37 & 1) != 0) {
      v41 = v38;
    }
    if (v41 < v40) {
      goto LABEL_99;
    }
    v43 = v39 + v41;
    v44 = v39;
    while (1) {
      v45 = memchr_plt(v44, 102, v41 - v42 + 1);
      if (v45 == 0) {
        goto LABEL_99;
      }
      v46 = v45;
      if (memcmp_plt(v45, (__int64)"fastpath", v42) == 0) {
        break;
      }
      v44 = v46 + 1;
      v41 = v43 - (v46 + 1);
      if (v41 < v42) {
        goto LABEL_99;
      }
    }
    if (v46 == v43 || v46 - v39 == -1) {
      goto LABEL_99;
    }
  }
  v49 = strlen_plt_alt1("fastpath");
  if (v49 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  v50 = v49;
  if (v49 >= 0x17) {
    if ((v49 | 7) == 0x17) {
      v52 = 26;
    }
    else {
      v52 = (v49 | 7) + 1;
    }
    v51 = (char*)NgxRoutine_420(v52);
    v252_.v253 = v50;
    v252_.v254 = v51;
    v252_.v252 = v52 | 1;
    goto LABEL_83;
  }
  LOBYTE(v252_.v252) = 2 * v49;
  v51 = (char*)&v252_.v252 + 1;
  if (v49 != 0) {
  LABEL_83:
    memcpy_plt_alt1((__int64)v51, (__int64)"fastpath", v50);
  }
  v51[v50] = 0;
  if ((v252_.v252 & 1) != 0) {
    v53 = v252_.v253;
  }
  else {
    v53 = (unsigned __int64)(unsigned __int8)v252_.v252 >> 1;
  }
  v54 = v53 + 1;
  v55 = v258_.v259;
  if ((v258_.v258 & 1) == 0) {
    v55 = (unsigned __int64)(unsigned __int8)v258_.v258 >> 1;
  }
  v56 = v55 - v54;
  if (v55 < v54) {
    goto LABEL_455;
  }
  if ((v258_.v258 & 1) != 0) {
    v57 = v258_.v260;
  }
  else {
    v57 = (char*)&v258_.v258 + 1;
  }
  if (v56 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v56 >= 0x17) {
    if ((v56 | 7) == 0x17) {
      v70 = 26;
    }
    else {
      v70 = (v56 | 7) + 1;
    }
    v58 = (char*)NgxRoutine_420(v70);
    v255_.v256 = v56;
    v255_.v257 = v58;
    v255_.v255 = v70 | 1;
  }
  else {
    LOBYTE(v255_.v255) = 2 * v56;
    v58 = (char*)&v255_.v255 + 1;
    if (v55 == v54) {
      v59 = v258_.v258;
      *((_BYTE*)&v255_.v255 + v56 + 1) = 0;
      if ((v59 & 1) == 0) {
        goto LABEL_97;
      }
    LABEL_116:
      NgxRoutine_430(v258_.v260, v258_.v258 & 0xFFFFFFFFFFFFFFFELL);
      v258_.v258 = v255_.v255;
      v258_.v259 = v255_.v256;
      v258_.v260 = v255_.v257;
      if ((v252_.v252 & 1) == 0) {
        goto LABEL_99;
      }
      goto LABEL_98;
    }
  }
  memmove_plt((__int64)v58, (__int64)&v57[v54], v56);
  v71 = v258_.v258;
  v58[v56] = 0;
  if ((v71 & 1) != 0) {
    goto LABEL_116;
  }
LABEL_97:
  v258_.v258 = v255_.v255;
  v258_.v259 = v255_.v256;
  v258_.v260 = v255_.v257;
  if ((v252_.v252 & 1) != 0) {
  LABEL_98:
    NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_99:
  v60 = *(unsigned __int8*)(a1 + 32);
  v61 = *(_QWORD*)(a1 + 40);
  if ((v60 & 1) != 0) {
    v62 = *(_QWORD*)(a1 + 48);
  }
  else {
    v62 = v4;
  }
  v63 = strlen_plt_alt1("mid");
  if (v63 != 0) {
    v64 = v60 >> 1;
    v65 = v63;
    if ((v60 & 1) != 0) {
      v64 = v61;
    }
    if (v64 < v63) {
      goto LABEL_144;
    }
    v66 = v62 + v64;
    v67 = v62;
    while (1) {
      v68 = memchr_plt(v67, 109, v64 - v65 + 1);
      if (v68 == 0) {
        goto LABEL_144;
      }
      v69 = v68;
      if (memcmp_plt(v68, (__int64)"mid", v65) == 0) {
        break;
      }
      v67 = v69 + 1;
      v64 = v66 - (v69 + 1);
      if (v64 < v65) {
        goto LABEL_144;
      }
    }
    if (v69 == v66 || v69 - v62 == -1) {
      goto LABEL_144;
    }
  }
  v72 = strlen_plt_alt1("mid");
  if (v72 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  v73 = v72;
  if (v72 >= 0x17) {
    if ((v72 | 7) == 0x17) {
      v75 = 26;
    }
    else {
      v75 = (v72 | 7) + 1;
    }
    v74 = (char*)NgxRoutine_420(v75);
    v252_.v253 = v73;
    v252_.v254 = v74;
    v252_.v252 = v75 | 1;
    goto LABEL_128;
  }
  LOBYTE(v252_.v252) = 2 * v72;
  v74 = (char*)&v252_.v252 + 1;
  if (v72 != 0) {
  LABEL_128:
    memcpy_plt_alt1((__int64)v74, (__int64)"mid", v73);
  }
  v74[v73] = 0;
  if ((v252_.v252 & 1) != 0) {
    v76 = v252_.v253;
  }
  else {
    v76 = (unsigned __int64)(unsigned __int8)v252_.v252 >> 1;
  }
  v77 = v76 + 1;
  v78 = v258_.v259;
  if ((v258_.v258 & 1) == 0) {
    v78 = (unsigned __int64)(unsigned __int8)v258_.v258 >> 1;
  }
  v79 = v78 - v77;
  if (v78 < v77) {
    goto LABEL_455;
  }
  if ((v258_.v258 & 1) != 0) {
    v80 = v258_.v260;
  }
  else {
    v80 = (char*)&v258_.v258 + 1;
  }
  if (v79 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v79 >= 0x17) {
    if ((v79 | 7) == 0x17) {
      v124 = 26;
    }
    else {
      v124 = (v79 | 7) + 1;
    }
    v81 = (char*)NgxRoutine_420(v124);
    v255_.v256 = v79;
    v255_.v257 = v81;
    v255_.v255 = v124 | 1;
  LABEL_202:
    memmove_plt((__int64)v81, (__int64)&v80[v77], v79);
    v125 = v258_.v258;
    v81[v79] = 0;
    if ((v125 & 1) == 0) {
    LABEL_142:
      v258_.v258 = v255_.v255;
      v258_.v259 = v255_.v256;
      v258_.v260 = v255_.v257;
      if ((v252_.v252 & 1) == 0) {
        goto LABEL_144;
      }
      goto LABEL_143;
    }
    goto LABEL_203;
  }
  LOBYTE(v255_.v255) = 2 * v79;
  v81 = (char*)&v255_.v255 + 1;
  if (v78 != v77) {
    goto LABEL_202;
  }
  v82 = v258_.v258;
  *((_BYTE*)&v255_.v255 + v79 + 1) = 0;
  if ((v82 & 1) == 0) {
    goto LABEL_142;
  }
LABEL_203:
  NgxRoutine_430(v258_.v260, v258_.v258 & 0xFFFFFFFFFFFFFFFELL);
  v258_.v258 = v255_.v255;
  v258_.v259 = v255_.v256;
  v258_.v260 = v255_.v257;
  if ((v252_.v252 & 1) != 0) {
  LABEL_143:
    NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_144:
  v83 = v258_.v258;
  v84 = v258_.v260;
  if ((v258_.v258 & 1) != 0) {
    v85 = v258_.v260;
  }
  else {
    v85 = (char*)&v258_.v258 + 1;
  }
  v86 = (unsigned __int8)*v85;
  result = (_QWORD*)isdigit_plt((unsigned __int8)*v85);
  v88 = (int)result;
  if ((_DWORD)result != 0) {
    *(_DWORD*)(a1 + 3256) = v86 - 48;
    *(_DWORD*)(a1 + 3260) = v86 - 48;
    if ((v83 & 1) == 0) {
      goto LABEL_150;
    }
    goto LABEL_149;
  }
  v120 = strlen_plt_alt1("DFN kernel size is not digit");
  v121 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                          (__int64)"DFN kernel size is not digit", v120);
  NgxRoutine_be650((void*)((__int64)&v255_.v255),
                   (__int64)v121 + *(_QWORD*)(*v121 - 24LL));
  v122 = NgxRoutine_db310(&v255_.v255, (__int64)NgxData_9511b8);
  v123 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v122 + 56LL))(v122, 10);
  NgxRoutine_db240(&v255_.v255);
  NgxRoutine_bd1d0(v121, v123);
  result = NgxRoutine_bcd70(v121);
  *(_DWORD*)(a1 + 84) = 2;
  if ((v83 & 1) != 0) {
  LABEL_149:
    result = (_QWORD*)NgxRoutine_430(v84, v258_.v258 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_150:
  if (v88 == 0) {
    return result;
  }
LABEL_151:
  v89 = *(unsigned __int8*)(a1 + 32);
  v90 = *(_QWORD*)(a1 + 40);
  if ((v89 & 1) != 0) {
    v91 = *(_QWORD*)(a1 + 48);
  }
  else {
    v91 = v4;
  }
  v92 = strlen_plt_alt1("_");
  if (v92 != 0) {
    v93 = v89 >> 1;
    v94 = v92;
    if ((v89 & 1) != 0) {
      v93 = v90;
    }
    if (v93 < v92) {
      goto LABEL_207;
    }
    v95 = v91 + v93;
    v96 = v91;
    while (1) {
      v97 = memchr_plt(v96, 95, v93 - v94 + 1);
      if (v97 == 0) {
        goto LABEL_207;
      }
      v98 = v97;
      if (memcmp_plt(v97, (__int64)"_", v94) == 0) {
        break;
      }
      v96 = v98 + 1;
      v93 = v95 - (v98 + 1);
      if (v93 < v94) {
        goto LABEL_207;
      }
    }
    if (v98 == v95 || (v99 = v98 - v91, v98 - v91 == -1)) {
    LABEL_207:
      v126 = strlen_plt_alt1("No layout in layer name");
      v127 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                              (__int64)"No layout in layer name", v126);
      NgxRoutine_be650((void*)((__int64)&v258_.v258),
                       (__int64)v127 + *(_QWORD*)(*v127 - 24LL));
      v128 = NgxRoutine_db310(&v258_.v258, (__int64)NgxData_9511b8);
      v129 =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v128 + 56LL))(v128, 10);
      NgxRoutine_db240(&v258_.v258);
      NgxRoutine_bd1d0(v127, v129);
      result = NgxRoutine_bcd70(v127);
      *(_DWORD*)(a1 + 84) = 2;
      return result;
    }
  }
  else {
    v99 = 0;
  }
  v100 = *(unsigned __int8*)(a1 + 32);
  v101 = v100 >> 1;
  v102 = (v100 & 1) == 0;
  v103 = *(_QWORD*)(a1 + 40);
  if (v102) {
    v103 = v101;
    v104 = v4;
  }
  else {
    v104 = *(_QWORD*)(a1 + 48);
  }
  if (v103 >= v99) {
    v105 = v99;
  }
  else {
    v105 = v103;
  }
  if (v105 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v105 >= 0x17) {
    if ((v105 | 7) == 0x17) {
      v107 = 26;
    }
    else {
      v107 = (v105 | 7) + 1;
    }
    v106 = (char*)NgxRoutine_420(v107);
    v258_.v259 = v105;
    v258_.v260 = v106;
    v258_.v258 = v107 | 1;
  }
  else {
    LOBYTE(v258_.v258) = 2 * v105;
    v106 = (char*)&v258_.v258 + 1;
    if (v105 == 0) {
      goto LABEL_179;
    }
  }
  memmove_plt((__int64)v106, v104, v105);
LABEL_179:
  v106[v105] = 0;
  v108 = strlen_plt_alt1("nhwc");
  v109 = (unsigned __int8)v258_.v258 >> 1;
  if ((v258_.v258 & 1) != 0) {
    v109 = v258_.v259;
  }
  if (v108 != v109) {
    goto LABEL_187;
  }
  v110 = v108;
  if (v108 == -1) {
    goto LABEL_455;
  }
  v111 = (v258_.v258 & 1) != 0 ? (__int64*)v258_.v260
                               : (__int64*)((char*)&v258_.v258 + 1);
  if (memcmp_plt((__int64)v111, (__int64)"nhwc", v110) == 0) {
    v130 = 0;
  }
  else {
  LABEL_187:
    v112 = strlen_plt_alt1("nchw8");
    v113 = (unsigned __int8)v258_.v258 >> 1;
    if ((v258_.v258 & 1) != 0) {
      v113 = v258_.v259;
    }
    if (v112 != v113) {
      goto LABEL_195;
    }
    v114 = v112;
    if (v112 == -1) {
      goto LABEL_455;
    }
    if ((v258_.v258 & 1) != 0) {
      v115 = v258_.v260;
    }
    else {
      v115 = (char*)&v258_.v258 + 1;
    }
    if (memcmp_plt((__int64)v115, (__int64)"nchw8", v114) != 0) {
    LABEL_195:
      v116 = strlen_plt_alt1("Unknown layout type");
      v117 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                              (__int64)"Unknown layout type", v116);
      NgxRoutine_be650((void*)((__int64)&v255_.v255),
                       (__int64)v117 + *(_QWORD*)(*v117 - 24LL));
      v118 = NgxRoutine_db310(&v255_.v255, (__int64)NgxData_9511b8);
      v119 =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v118 + 56LL))(v118, 10);
      NgxRoutine_db240(&v255_.v255);
      NgxRoutine_bd1d0(v117, v119);
      result = NgxRoutine_bcd70(v117);
      *(_DWORD*)(a1 + 84) = 2;
      goto LABEL_267;
    }
    v130 = 1;
  }
  v131 = *(unsigned __int8*)(a1 + 32);
  *(_DWORD*)(a1 + 3252) = v130;
  v132 = *(_QWORD*)(a1 + 40);
  if ((v131 & 1) == 0) {
    v132 = v131 >> 1;
  }
  if (v99 >= v132) {
    goto LABEL_455;
  }
  v133 = v99 + 1;
  v134 = v132 - (v99 + 1);
  if ((v131 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 48);
  }
  if (v134 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v134 >= 0x17) {
    if ((v134 | 7) == 0x17) {
      v136 = 26;
    }
    else {
      v136 = (v134 | 7) + 1;
    }
    v135 = (char*)NgxRoutine_420(v136);
    v255_.v256 = v134;
    v255_.v257 = v135;
    v255_.v255 = v136 | 1;
    goto LABEL_223;
  }
  LOBYTE(v255_.v255) = 2 * v134;
  v135 = (char*)&v255_.v255 + 1;
  if (v132 != v133) {
  LABEL_223:
    memmove_plt((__int64)v135, v4 + v133, v134);
  }
  v135[v134] = 0;
  v137 = (unsigned __int8)v255_.v255;
  v138 = v255_.v256;
  if ((v255_.v255 & 1) != 0) {
    v139 = v255_.v257;
  }
  else {
    v139 = (char*)&v255_.v255 + 1;
  }
  v140 = strlen_plt_alt1("_");
  if (v140 != 0) {
    v141 = v137 >> 1;
    v142 = v140;
    if ((v137 & 1) != 0) {
      v141 = v138;
    }
    if (v141 < v140) {
      goto LABEL_264;
    }
    v143 = &v139[v141];
    v144 = (__int64)v139;
    while (1) {
      v145 = memchr_plt(v144, 95, v141 - v142 + 1);
      if (v145 == 0) {
        goto LABEL_264;
      }
      v146 = v145;
      if (memcmp_plt(v145, (__int64)"_", v142) == 0) {
        break;
      }
      v144 = v146 + 1;
      v141 = (signed __int64)&v143[-v146 - 1];
      if (v141 < v142) {
        goto LABEL_264;
      }
    }
    if ((char*)v146 == v143) {
      goto LABEL_264;
    }
    v147 = v146 - (_QWORD)v139;
    if (v146 - (_QWORD)v139 == -1) {
      goto LABEL_264;
    }
  }
  else {
    v147 = 0;
  }
  v148 = v255_.v256;
  if ((v255_.v255 & 1) != 0) {
    v149 = v255_.v257;
  }
  else {
    v148 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
    v149 = (char*)&v255_.v255 + 1;
  }
  if (v148 >= v147) {
    v150 = v147;
  }
  else {
    v150 = v148;
  }
  if (v150 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v150 >= 0x17) {
    if ((v150 | 7) == 0x17) {
      v152 = 26;
    }
    else {
      v152 = (v150 | 7) + 1;
    }
    v151 = (char*)NgxRoutine_420(v152);
    v252_.v253 = v150;
    v252_.v254 = v151;
    v252_.v252 = v152 | 1;
    goto LABEL_251;
  }
  LOBYTE(v252_.v252) = 2 * v150;
  v151 = (char*)&v252_.v252 + 1;
  if (v150 != 0) {
  LABEL_251:
    memmove_plt((__int64)v151, (__int64)v149, v150);
  }
  v151[v150] = 0;
  v153 = strlen_plt_alt1("bilinear");
  v154 = v252_.v252;
  v155 = (unsigned __int8)v252_.v252 >> 1;
  if ((v252_.v252 & 1) != 0) {
    v155 = v252_.v253;
  }
  if (v153 == v155) {
    v156 = v153;
    if (v153 == -1) {
      goto LABEL_455;
    }
    if ((v252_.v252 & 1) != 0) {
      v157 = v252_.v254;
    }
    else {
      v157 = (char*)&v252_.v252 + 1;
    }
    v158 = memcmp_plt((__int64)v157, (__int64)"bilinear", v156);
    v154 = v252_.v252;
    v159 = v158 != 0;
  }
  else {
    v159 = true;
  }
  if ((v154 & 1) != 0) {
    NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (v159) {
  LABEL_264:
    v160 = "No bilinear in layer name";
    goto LABEL_265;
  }
  v165 = v255_.v256;
  if ((v255_.v255 & 1) == 0) {
    v165 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
  }
  if (v147 >= v165) {
    goto LABEL_455;
  }
  v166 = v147 + 1;
  v167 = v165 - (v147 + 1);
  if ((v255_.v255 & 1) != 0) {
    v168 = v255_.v257;
  }
  else {
    v168 = (char*)&v255_.v255 + 1;
  }
  if (v167 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v167 >= 0x17) {
    if ((v167 | 7) == 0x17) {
      v170 = 26;
    }
    else {
      v170 = (v167 | 7) + 1;
    }
    v169 = (char*)NgxRoutine_420(v170);
    v252_.v253 = v167;
    v252_.v254 = v169;
    v252_.v252 = v170 | 1;
    goto LABEL_284;
  }
  LOBYTE(v252_.v252) = 2 * v167;
  v169 = (char*)&v252_.v252 + 1;
  if (v165 != v166) {
  LABEL_284:
    memmove_plt((__int64)v169, (__int64)&v168[v166], v167);
  }
  v171 = v255_.v255;
  v169[v167] = 0;
  if ((v171 & 1) != 0) {
    NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
  }
  v173 = v252_.v252;
  v172 = v252_.v253;
  v255_.v255 = v252_.v252;
  v255_.v256 = v252_.v253;
  v255_.v257 = v252_.v254;
  if ((v252_.v252 & 1) != 0) {
    v174 = v252_.v254;
  }
  else {
    v174 = (char*)&v255_.v255 + 1;
  }
  v175 = strlen_plt_alt1("_");
  if (v175 != 0) {
    v176 = v175;
    if ((v173 & 1) != 0) {
      v177 = v172;
    }
    else {
      v177 = (unsigned __int64)v173 >> 1;
    }
    if (v177 < v175) {
      goto LABEL_331;
    }
    v178 = &v174[v177];
    v179 = (__int64)v174;
    while (1) {
      v180 = memchr_plt(v179, 95, v177 - v176 + 1);
      if (v180 == 0) {
        goto LABEL_331;
      }
      v181 = v180;
      if (memcmp_plt(v180, (__int64)"_", v176) == 0) {
        break;
      }
      v179 = v181 + 1;
      v177 = (signed __int64)&v178[-v181 - 1];
      if (v177 < v176) {
        goto LABEL_331;
      }
    }
    if ((char*)v181 == v178) {
      goto LABEL_331;
    }
    v182 = v181 - (_QWORD)v174;
    if (v181 - (_QWORD)v174 == -1) {
      goto LABEL_331;
    }
  }
  else {
    v182 = 0;
  }
  v183 = v255_.v256;
  if ((v255_.v255 & 1) != 0) {
    v184 = v255_.v257;
  }
  else {
    v183 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
    v184 = (char*)&v255_.v255 + 1;
  }
  if (v183 >= v182) {
    v185 = v182;
  }
  else {
    v185 = v183;
  }
  if (v185 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v185 >= 0x17) {
    if ((v185 | 7) == 0x17) {
      v187 = 26;
    }
    else {
      v187 = (v185 | 7) + 1;
    }
    v186 = (char*)NgxRoutine_420(v187);
    v252_.v253 = v185;
    v252_.v254 = v186;
    v252_.v252 = v187 | 1;
    goto LABEL_318;
  }
  LOBYTE(v252_.v252) = 2 * v185;
  v186 = (char*)&v252_.v252 + 1;
  if (v185 != 0) {
  LABEL_318:
    memmove_plt((__int64)v186, (__int64)v184, v185);
  }
  v186[v185] = 0;
  v188 = strlen_plt_alt1("upsample");
  v189 = v252_.v252;
  v190 = (unsigned __int8)v252_.v252 >> 1;
  if ((v252_.v252 & 1) != 0) {
    v190 = v252_.v253;
  }
  if (v188 == v190) {
    v191 = v188;
    if (v188 == -1) {
      goto LABEL_455;
    }
    if ((v252_.v252 & 1) != 0) {
      v192 = v252_.v254;
    }
    else {
      v192 = (char*)&v252_.v252 + 1;
    }
    v193 = memcmp_plt((__int64)v192, (__int64)"upsample", v191);
    v189 = v252_.v252;
    v194 = v193 != 0;
  }
  else {
    v194 = true;
  }
  if ((v189 & 1) != 0) {
    NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (v194) {
  LABEL_331:
    v160 = "No upsample in layer name";
    goto LABEL_265;
  }
  v195 = v255_.v256;
  if ((v255_.v255 & 1) == 0) {
    v195 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
  }
  if (v182 >= v195) {
    goto LABEL_455;
  }
  v196 = v182 + 1;
  v197 = v195 - (v182 + 1);
  if ((v255_.v255 & 1) != 0) {
    v198 = v255_.v257;
  }
  else {
    v198 = (char*)&v255_.v255 + 1;
  }
  if (v197 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_454:
    NgxRoutine_27cb0();
  }
  if (v197 >= 0x17) {
    if ((v197 | 7) == 0x17) {
      v200 = 26;
    }
    else {
      v200 = (v197 | 7) + 1;
    }
    v199 = (char*)NgxRoutine_420(v200);
    v252_.v253 = v197;
    v252_.v254 = v199;
    v252_.v252 = v200 | 1;
    goto LABEL_346;
  }
  LOBYTE(v252_.v252) = 2 * v197;
  v199 = (char*)&v252_.v252 + 1;
  if (v195 != v196) {
  LABEL_346:
    memmove_plt((__int64)v199, (__int64)&v198[v196], v197);
  }
  v201 = v255_.v255;
  v199[v197] = 0;
  if ((v201 & 1) != 0) {
    NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
  }
  v203 = v252_.v252;
  v202 = v252_.v253;
  v255_.v255 = v252_.v252;
  v255_.v256 = v252_.v253;
  v255_.v257 = v252_.v254;
  if ((v252_.v252 & 1) != 0) {
    v204 = v252_.v254;
  }
  else {
    v204 = (char*)&v255_.v255 + 1;
  }
  v205 = strlen_plt_alt1("_");
  if (v205 != 0) {
    v206 = v205;
    if ((v203 & 1) != 0) {
      v207 = v202;
    }
    else {
      v207 = (unsigned __int64)v203 >> 1;
    }
    if (v207 < v205) {
      goto LABEL_393;
    }
    v208 = &v204[v207];
    v209 = (__int64)v204;
    while (1) {
      v210 = memchr_plt(v209, 95, v207 - v206 + 1);
      if (v210 == 0) {
        goto LABEL_393;
      }
      v211 = v210;
      if (memcmp_plt(v210, (__int64)"_", v206) == 0) {
        break;
      }
      v209 = v211 + 1;
      v207 = (signed __int64)&v208[-v211 - 1];
      if (v207 < v206) {
        goto LABEL_393;
      }
    }
    if ((char*)v211 == v208) {
      goto LABEL_393;
    }
    v212 = v211 - (_QWORD)v204;
    if (v211 - (_QWORD)v204 == -1) {
      goto LABEL_393;
    }
  }
  else {
    v212 = 0;
  }
  v213 = v255_.v256;
  if ((v255_.v255 & 1) != 0) {
    v214 = v255_.v257;
  }
  else {
    v213 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
    v214 = (char*)&v255_.v255 + 1;
  }
  if (v213 >= v212) {
    v215 = v212;
  }
  else {
    v215 = v213;
  }
  if (v215 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v215 >= 0x17) {
    if ((v215 | 7) == 0x17) {
      v217 = 26;
    }
    else {
      v217 = (v215 | 7) + 1;
    }
    v216 = (char*)NgxRoutine_420(v217);
    v252_.v253 = v215;
    v252_.v254 = v216;
    v252_.v252 = v217 | 1;
    goto LABEL_380;
  }
  LOBYTE(v252_.v252) = 2 * v215;
  v216 = (char*)&v252_.v252 + 1;
  if (v215 != 0) {
  LABEL_380:
    memmove_plt((__int64)v216, (__int64)v214, v215);
  }
  v216[v215] = 0;
  v218 = strlen_plt_alt1("conv");
  v219 = v252_.v252;
  v220 = (unsigned __int8)v252_.v252 >> 1;
  if ((v252_.v252 & 1) != 0) {
    v220 = v252_.v253;
  }
  if (v218 == v220) {
    v221 = v218;
    if (v218 == -1) {
      goto LABEL_455;
    }
    if ((v252_.v252 & 1) != 0) {
      v222 = v252_.v254;
    }
    else {
      v222 = (char*)&v252_.v252 + 1;
    }
    v223 = memcmp_plt((__int64)v222, (__int64)"conv", v221);
    v219 = v252_.v252;
    v224 = v223 != 0;
  }
  else {
    v224 = true;
  }
  if ((v219 & 1) != 0) {
    NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
  }
  if (v224) {
  LABEL_393:
    v160 = "No conv in layer name";
  LABEL_265:
    v161 = strlen_plt_alt1(v160);
    v162 = NgxRoutine_28900((_QWORD*)NgxData_951178[0], (__int64)v160, v161);
    NgxRoutine_be650((void*)((__int64)&v252_.v252),
                     (__int64)v162 + *(_QWORD*)(*v162 - 24LL));
    v163 = NgxRoutine_db310(&v252_.v252, (__int64)NgxData_9511b8);
    v164 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v163 + 56LL))(v163, 10);
    NgxRoutine_db240(&v252_.v252);
    NgxRoutine_bd1d0(v162, v164);
    result = NgxRoutine_bcd70(v162);
    *(_DWORD*)(a1 + 84) = 2;
    if ((v255_.v255 & 1) == 0) {
      goto LABEL_267;
    }
    goto LABEL_266;
  }
  v225 = v255_.v256;
  if ((v255_.v255 & 1) == 0) {
    v225 = (unsigned __int64)(unsigned __int8)v255_.v255 >> 1;
  }
  if (v212 >= v225) {
  LABEL_455:
    cornflower_rook_00389_2b250();
  }
  v226 = v212 + 1;
  v227 = v225 - (v212 + 1);
  if ((v255_.v255 & 1) != 0) {
    v228 = v255_.v257;
  }
  else {
    v228 = (char*)&v255_.v255 + 1;
  }
  if (v227 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_454;
  }
  if (v227 >= 0x17) {
    if ((v227 | 7) == 0x17) {
      v230 = 26;
    }
    else {
      v230 = (v227 | 7) + 1;
    }
    v229 = (char*)NgxRoutine_420(v230);
    v252_.v253 = v227;
    v252_.v254 = v229;
    v252_.v252 = v230 | 1;
    goto LABEL_408;
  }
  LOBYTE(v252_.v252) = 2 * v227;
  v229 = (char*)&v252_.v252 + 1;
  if (v225 != v226) {
  LABEL_408:
    memmove_plt((__int64)v229, (__int64)&v228[v226], v227);
  }
  v231 = v255_.v255;
  v229[v227] = 0;
  if ((v231 & 1) != 0) {
    NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
  }
  v233 = v252_.v252;
  v232 = v252_.v253;
  v255_.v255 = v252_.v252;
  v255_.v256 = v252_.v253;
  v255_.v257 = v252_.v254;
  if ((v252_.v252 & 1) != 0) {
    v234 = v252_.v254;
  }
  else {
    v234 = (char*)&v255_.v255 + 1;
  }
  v235 = strlen_plt_alt1("_");
  if (v235 == 0) {
    v242 = 0;
  LABEL_428:
    if ((v255_.v255 & 1) != 0) {
      v243 = (unsigned __int8*)v255_.v257;
    }
    else {
      v243 = (unsigned __int8*)&v255_.v255 + 1;
    }
    v244 = *v243;
    if ((unsigned int)isdigit_plt(*v243) != 0) {
      *(_DWORD*)(a1 + 3236) = v244 - 48;
      *(_DWORD*)(a1 + 3240) = v244 - 48;
      nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
          (void*)(&v252_.v252), (unsigned __int8*)&v255_.v255, v242 + 1,
          0xFFFFFFFFFFFFFFFFLL);
      if ((v255_.v255 & 1) != 0) {
        NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
      }
      v255_.v255 = v252_.v252;
      v255_.v256 = v252_.v253;
      v255_.v257 = v252_.v254;
      v245 = NgxRoutine_2ca80((unsigned __int8*)&v255_.v255, "_", 0);
      if (v245 == -1) {
        goto LABEL_447;
      }
      nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
          (void*)(&v252_.v252), (unsigned __int8*)&v255_.v255, 0, v245);
      v246 = NgxRoutine_2cc20((__int64)&v252_.v252, "conv");
      if ((v252_.v252 & 1) != 0) {
        NgxRoutine_430(v252_.v254, v252_.v252 & 0xFFFFFFFFFFFFFFFELL);
      }
      if (!v246) {
      LABEL_447:
        v249 = "No conv in layer name";
        goto LABEL_452;
      }
      nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
          (void*)(&v252_.v252), (unsigned __int8*)&v255_.v255, v226,
          0xFFFFFFFFFFFFFFFFLL);
      if ((v255_.v255 & 1) != 0) {
        NgxRoutine_430(v255_.v257, v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
      }
      v255_.v255 = v252_.v252;
      v255_.v256 = v252_.v253;
      v255_.v257 = v252_.v254;
      if (NgxRoutine_2ca80((unsigned __int8*)&v255_.v255, "_", 0) == -1) {
        goto LABEL_451;
      }
      if ((v255_.v255 & 1) != 0) {
        v247 = (unsigned __int8*)v255_.v257;
      }
      else {
        v247 = (unsigned __int8*)&v255_.v255 + 1;
      }
      v248 = *v247;
      result = (_QWORD*)isdigit_plt(*v247);
      if ((_DWORD)result != 0) {
        *(_DWORD*)(a1 + 3244) = v248 - 48;
        *(_DWORD*)(a1 + 3248) = v248 - 48;
        if ((v255_.v255 & 1) == 0) {
          goto LABEL_267;
        }
      LABEL_266:
        result = (_QWORD*)NgxRoutine_430(v255_.v257,
                                         v255_.v255 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_267;
      }
    }
    v249 = "Convolution kernel size is not digit";
    goto LABEL_452;
  }
  v236 = v235;
  if ((v233 & 1) != 0) {
    v237 = v232;
  }
  else {
    v237 = (unsigned __int64)v233 >> 1;
  }
  if (v237 >= v235) {
    v238 = &v234[v237];
    v239 = (__int64)v234;
    do {
      v240 = memchr_plt(v239, 95, v237 - v236 + 1);
      if (v240 == 0) {
        break;
      }
      v241 = v240;
      if (memcmp_plt(v240, (__int64)"_", v236) == 0) {
        if ((char*)v241 != v238) {
          v242 = v241 - (_QWORD)v234;
          if (v241 - (_QWORD)v234 != -1) {
            goto LABEL_428;
          }
        }
        break;
      }
      v239 = v241 + 1;
      v237 = (signed __int64)&v238[-v241 - 1];
    } while (v237 >= v236);
  }
LABEL_451:
  v249 = "No conv size in layer name";
LABEL_452:
  v250 = strlen_plt_alt1(v249);
  v251 = NgxRoutine_28900((_QWORD*)NgxData_951178[0], (__int64)v249, v250);
  result = NgxRoutine_29e50(v251);
  *(_DWORD*)(a1 + 84) = 2;
  if ((v255_.v255 & 1) != 0) {
    goto LABEL_266;
  }
LABEL_267:
  if ((v258_.v258 & 1) != 0) {
    return (_QWORD*)NgxRoutine_430(v258_.v260,
                                   v258_.v258 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 cornflower_rook_00389_2e600(__int64 a1)
{
  unsigned __int64 v1;
  signed __int64 v2;
  __int64 v4;
  __int64 v5;
  signed __int64 v6;
  signed __int64 v7;
  signed __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int8 v33;
  __int64 result;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  signed __int64 v49;
  signed __int64 v50;
  signed __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  char v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  int v67;
  _BOOL4 v68;
  const char* v69;
  unsigned __int64 v70;
  _QWORD* v71;
  __int64 v72;
  unsigned __int8 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  char* v77;
  char* v78;
  __int64 v79;
  char v80;
  signed __int64 v81;
  unsigned __int8 v82;
  char* v83;
  signed __int64 v84;
  signed __int64 v85;
  signed __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int8* v92;
  int v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char* v98;
  char* v99;
  __int64 v100;
  char v101;
  signed __int64 v102;
  unsigned __int8 v103;
  char* v104;
  signed __int64 v105;
  signed __int64 v106;
  signed __int64 v107;
  char* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  char* v114;
  unsigned __int64 v115;
  char* v116;
  __int64 v117;
  unsigned __int64 v118;
  char v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  char* v122;
  int v123;
  _BOOL4 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  char* v128;
  char* v129;
  __int64 v130;
  char v131;
  signed __int64 v132;
  unsigned __int8 v133;
  char* v134;
  signed __int64 v135;
  signed __int64 v136;
  char* v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  char* v141;
  unsigned __int64 v142;
  char* v143;
  __int64 v144;
  char v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  char* v148;
  _BOOL4 v149;
  unsigned __int8* v150;
  int v151;
  const char* v152;
  unsigned __int64 v153;
  _QWORD* v154;
  struct {
    __int64 v155;
    unsigned __int64 v156;
    char* v157;
  } v155_;
  struct {
    __int64 v158;
    unsigned __int64 v159;
    char* v160;
  } v158_;
  struct {
    __int64 v161;
    unsigned __int64 v162;
    char* v163;
  } v161_;

  v1 = *(unsigned __int8*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  v4 = a1 + 33;
  if ((v1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen_plt_alt1("_");
  if (v6 != 0) {
    v7 = v1 >> 1;
    v8 = v6;
    if ((v1 & 1) != 0) {
      v7 = v2;
    }
    if (v7 < v6) {
      goto LABEL_48;
    }
    v9 = v5 + v7;
    v10 = v5;
    while (1) {
      v11 = memchr_plt(v10, 95, v7 - v8 + 1);
      if (v11 == 0) {
        goto LABEL_48;
      }
      v12 = v11;
      if (memcmp_plt(v11, (__int64)"_", v8) == 0) {
        break;
      }
      v10 = v12 + 1;
      v7 = v9 - (v12 + 1);
      if (v7 < v8) {
        goto LABEL_48;
      }
    }
    if (v12 == v9 || (v13 = v12 - v5, v12 - v5 == -1)) {
    LABEL_48:
      v35 = strlen_plt_alt1("No layout in layer name");
      v36 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                             (__int64)"No layout in layer name", v35);
      NgxRoutine_be650((void*)((__int64)&v161_.v161),
                       (__int64)v36 + *(_QWORD*)(*v36 - 24LL));
      v37 = NgxRoutine_db310(&v161_.v161, (__int64)NgxData_9511b8);
      v38 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v37 + 56LL))(v37, 10);
      NgxRoutine_db240(&v161_.v161);
      NgxRoutine_bd1d0(v36, v38);
      result = (__int64)NgxRoutine_bcd70(v36);
      *(_DWORD*)(a1 + 84) = 2;
      return result;
    }
  }
  else {
    v13 = 0;
  }
  v14 = *(unsigned __int8*)(a1 + 32);
  v15 = v14 >> 1;
  v16 = (v14 & 1) == 0;
  v17 = *(_QWORD*)(a1 + 40);
  if (v16) {
    v17 = v15;
    v18 = v4;
  }
  else {
    v18 = *(_QWORD*)(a1 + 48);
  }
  if (v17 >= v13) {
    v19 = v13;
  }
  else {
    v19 = v17;
  }
  if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_289;
  }
  if (v19 >= 0x17) {
    if ((v19 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v19 | 7) + 1;
    }
    v20 = (char*)NgxRoutine_420(v21);
    v161_.v162 = v19;
    v161_.v163 = v20;
    v161_.v161 = v21 | 1;
  }
  else {
    LOBYTE(v161_.v161) = 2 * v19;
    v20 = (char*)&v161_.v161 + 1;
    if (v19 == 0) {
      goto LABEL_29;
    }
  }
  memmove_plt((__int64)v20, v18, v19);
LABEL_29:
  v20[v19] = 0;
  v22 = strlen_plt_alt1("nhwc");
  v23 = (unsigned __int8)v161_.v161 >> 1;
  if ((v161_.v161 & 1) != 0) {
    v23 = v161_.v162;
  }
  if (v22 == v23) {
    v24 = v22;
    if (v22 == -1) {
      goto LABEL_290;
    }
    v25 = (v161_.v161 & 1) != 0 ? (__int64*)v161_.v163
                                : (__int64*)((char*)&v161_.v161 + 1);
    if (memcmp_plt((__int64)v25, (__int64)"nhwc", v24) == 0) {
      v39 = 0;
      goto LABEL_51;
    }
  }
  v26 = strlen_plt_alt1("nchw8");
  v27 = (unsigned __int8)v161_.v161 >> 1;
  if ((v161_.v161 & 1) != 0) {
    v27 = v161_.v162;
  }
  if (v26 != v27) {
    goto LABEL_45;
  }
  v28 = v26;
  if (v26 == -1) {
    goto LABEL_290;
  }
  if ((v161_.v161 & 1) != 0) {
    v29 = v161_.v163;
  }
  else {
    v29 = (char*)&v161_.v161 + 1;
  }
  if (memcmp_plt((__int64)v29, (__int64)"nchw8", v28) == 0) {
    v39 = 1;
  LABEL_51:
    v40 = *(unsigned __int8*)(a1 + 32);
    *(_DWORD*)(a1 + 2132) = v39;
    v41 = *(_QWORD*)(a1 + 40);
    if ((v40 & 1) == 0) {
      v41 = v40 >> 1;
    }
    if (v13 >= v41) {
      goto LABEL_290;
    }
    v42 = v13 + 1;
    v43 = v41 - (v13 + 1);
    if ((v40 & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 48);
    }
    if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_289;
    }
    if (v43 >= 0x17) {
      if ((v43 | 7) == 0x17) {
        v45 = 26;
      }
      else {
        v45 = (v43 | 7) + 1;
      }
      v44 = (char*)NgxRoutine_420(v45);
      v158_.v159 = v43;
      v158_.v160 = v44;
      v158_.v158 = v45 | 1;
    }
    else {
      LOBYTE(v158_.v158) = 2 * v43;
      v44 = (char*)&v158_.v158 + 1;
      if (v41 == v42) {
      LABEL_65:
        v44[v43] = 0;
        v46 = (unsigned __int8)v158_.v158;
        v47 = v158_.v159;
        if ((v158_.v158 & 1) != 0) {
          v48 = v158_.v160;
        }
        else {
          v48 = (char*)&v158_.v158 + 1;
        }
        v49 = strlen_plt_alt1("_");
        if (v49 != 0) {
          v50 = v46 >> 1;
          v51 = v49;
          if ((v46 & 1) != 0) {
            v50 = v47;
          }
          if (v50 < v49) {
            goto LABEL_105;
          }
          v52 = &v48[v50];
          v53 = (__int64)v48;
          while (1) {
            v54 = memchr_plt(v53, 95, v50 - v51 + 1);
            if (v54 == 0) {
              goto LABEL_105;
            }
            v55 = v54;
            if (memcmp_plt(v54, (__int64)"_", v51) == 0) {
              break;
            }
            v53 = v55 + 1;
            v50 = (signed __int64)&v52[-v55 - 1];
            if (v50 < v51) {
              goto LABEL_105;
            }
          }
          if ((char*)v55 == v52) {
            goto LABEL_105;
          }
          v56 = v55 - (_QWORD)v48;
          if (v55 - (_QWORD)v48 == -1) {
            goto LABEL_105;
          }
        }
        else {
          v56 = 0;
        }
        v57 = v158_.v159;
        if ((v158_.v158 & 1) != 0) {
          v58 = v158_.v160;
        }
        else {
          v57 = (unsigned __int64)(unsigned __int8)v158_.v158 >> 1;
          v58 = (char*)&v158_.v158 + 1;
        }
        if (v57 >= v56) {
          v59 = v56;
        }
        else {
          v59 = v57;
        }
        if (v59 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_289;
        }
        if (v59 >= 0x17) {
          if ((v59 | 7) == 0x17) {
            v61 = 26;
          }
          else {
            v61 = (v59 | 7) + 1;
          }
          v60 = (char*)NgxRoutine_420(v61);
          v155_.v156 = v59;
          v155_.v157 = v60;
          v155_.v155 = v61 | 1;
        }
        else {
          LOBYTE(v155_.v155) = 2 * v59;
          v60 = (char*)&v155_.v155 + 1;
          if (v59 == 0) {
          LABEL_93:
            v60[v59] = 0;
            v62 = strlen_plt_alt1("conv");
            v63 = v155_.v155;
            v64 = (unsigned __int8)v155_.v155 >> 1;
            if ((v155_.v155 & 1) != 0) {
              v64 = v155_.v156;
            }
            if (v62 == v64) {
              v65 = v62;
              if (v62 == -1) {
                goto LABEL_290;
              }
              if ((v155_.v155 & 1) != 0) {
                v66 = v155_.v157;
              }
              else {
                v66 = (char*)&v155_.v155 + 1;
              }
              v67 = memcmp_plt((__int64)v66, (__int64)"conv", v65);
              v63 = v155_.v155;
              v68 = v67 != 0;
            }
            else {
              v68 = true;
            }
            if ((v63 & 1) != 0) {
              NgxRoutine_430(v155_.v157, v155_.v155 & 0xFFFFFFFFFFFFFFFELL);
            }
            if (v68) {
            LABEL_105:
              v69 = "No conv in layer name";
            LABEL_106:
              v70 = strlen_plt_alt1(v69);
              v71 = NgxRoutine_28900((_QWORD*)NgxData_951178[0], (__int64)v69,
                                     v70);
              NgxRoutine_be650((void*)((__int64)&v155_.v155),
                               (__int64)v71 + *(_QWORD*)(*v71 - 24LL));
              v72 = NgxRoutine_db310(&v155_.v155, (__int64)NgxData_9511b8);
              v73 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v72 + 56LL))(
                  v72, 10);
              NgxRoutine_db240(&v155_.v155);
              NgxRoutine_bd1d0(v71, v73);
              result = (__int64)NgxRoutine_bcd70(v71);
              goto LABEL_107;
            }
            v74 = v158_.v159;
            if ((v158_.v158 & 1) == 0) {
              v74 = (unsigned __int64)(unsigned __int8)v158_.v158 >> 1;
            }
            if (v56 >= v74) {
              goto LABEL_290;
            }
            v75 = v56 + 1;
            v76 = v74 - (v56 + 1);
            if ((v158_.v158 & 1) != 0) {
              v77 = v158_.v160;
            }
            else {
              v77 = (char*)&v158_.v158 + 1;
            }
            if (v76 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_289;
            }
            if (v76 >= 0x17) {
              if ((v76 | 7) == 0x17) {
                v79 = 26;
              }
              else {
                v79 = (v76 | 7) + 1;
              }
              v78 = (char*)NgxRoutine_420(v79);
              v155_.v156 = v76;
              v155_.v157 = v78;
              v155_.v155 = v79 | 1;
            }
            else {
              LOBYTE(v155_.v155) = 2 * v76;
              v78 = (char*)&v155_.v155 + 1;
              if (v74 == v75) {
              LABEL_128:
                v80 = v158_.v158;
                v78[v76] = 0;
                if ((v80 & 1) != 0) {
                  NgxRoutine_430(v158_.v160, v158_.v158 & 0xFFFFFFFFFFFFFFFELL);
                }
                v82 = v155_.v155;
                v81 = v155_.v156;
                v158_.v158 = v155_.v155;
                v158_.v159 = v155_.v156;
                v158_.v160 = v155_.v157;
                if ((v155_.v155 & 1) != 0) {
                  v83 = v155_.v157;
                }
                else {
                  v83 = (char*)&v158_.v158 + 1;
                }
                v84 = strlen_plt_alt1("_");
                if (v84 != 0) {
                  v85 = v84;
                  if ((v82 & 1) != 0) {
                    v86 = v81;
                  }
                  else {
                    v86 = (unsigned __int64)v82 >> 1;
                  }
                  if (v86 < v84) {
                    goto LABEL_184;
                  }
                  v87 = &v83[v86];
                  v88 = (__int64)v83;
                  while (1) {
                    v89 = memchr_plt(v88, 95, v86 - v85 + 1);
                    if (v89 == 0) {
                      goto LABEL_184;
                    }
                    v90 = v89;
                    if (memcmp_plt(v89, (__int64)"_", v85) == 0) {
                      break;
                    }
                    v88 = v90 + 1;
                    v86 = (signed __int64)&v87[-v90 - 1];
                    if (v86 < v85) {
                      goto LABEL_184;
                    }
                  }
                  if ((char*)v90 == v87 ||
                      (v91 = v90 - (_QWORD)v83, v90 - (_QWORD)v83 == -1)) {
                  LABEL_184:
                    v69 = "No conv size in layer name";
                    goto LABEL_106;
                  }
                }
                else {
                  v91 = 0;
                }
                if ((v158_.v158 & 1) != 0) {
                  v92 = (unsigned __int8*)v158_.v160;
                }
                else {
                  v92 = (unsigned __int8*)&v158_.v158 + 1;
                }
                v93 = *v92;
                if ((unsigned int)isdigit_plt(*v92) == 0) {
                  v69 = "Convolution kernel size is not digit";
                  goto LABEL_106;
                }
                v94 = (unsigned __int8)v158_.v158;
                *(_DWORD*)(a1 + 2116) = v93 - 48;
                *(_DWORD*)(a1 + 2120) = v93 - 48;
                v95 = v158_.v159;
                if ((v94 & 1) == 0) {
                  v95 = v94 >> 1;
                }
                if (v91 >= v95) {
                  goto LABEL_290;
                }
                v96 = v91 + 1;
                v97 = v95 - (v91 + 1);
                if ((v94 & 1) != 0) {
                  v98 = v158_.v160;
                }
                else {
                  v98 = (char*)&v158_.v158 + 1;
                }
                if (v97 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_289;
                }
                if (v97 >= 0x17) {
                  if ((v97 | 7) == 0x17) {
                    v100 = 26;
                  }
                  else {
                    v100 = (v97 | 7) + 1;
                  }
                  v99 = (char*)NgxRoutine_420(v100);
                  v155_.v156 = v97;
                  v155_.v157 = v99;
                  v155_.v155 = v100 | 1;
                }
                else {
                  LOBYTE(v155_.v155) = 2 * v97;
                  v99 = (char*)&v155_.v155 + 1;
                  if (v95 == v96) {
                  LABEL_167:
                    v101 = v158_.v158;
                    v99[v97] = 0;
                    if ((v101 & 1) != 0) {
                      NgxRoutine_430(v158_.v160,
                                     v158_.v158 & 0xFFFFFFFFFFFFFFFELL);
                    }
                    v103 = v155_.v155;
                    v102 = v155_.v156;
                    v158_.v158 = v155_.v155;
                    v158_.v159 = v155_.v156;
                    v158_.v160 = v155_.v157;
                    if ((v155_.v155 & 1) != 0) {
                      v104 = v155_.v157;
                    }
                    else {
                      v104 = (char*)&v158_.v158 + 1;
                    }
                    v105 = strlen_plt_alt1("_");
                    if (v105 != 0) {
                      v106 = v105;
                      if ((v103 & 1) != 0) {
                        v107 = v102;
                      }
                      else {
                        v107 = (unsigned __int64)v103 >> 1;
                      }
                      if (v107 < v105) {
                        goto LABEL_213;
                      }
                      v108 = &v104[v107];
                      v109 = (__int64)v104;
                      while (1) {
                        v110 = memchr_plt(v109, 95, v107 - v106 + 1);
                        if (v110 == 0) {
                          goto LABEL_213;
                        }
                        v111 = v110;
                        if (memcmp_plt(v110, (__int64)"_", v106) == 0) {
                          break;
                        }
                        v109 = v111 + 1;
                        v107 = (signed __int64)&v108[-v111 - 1];
                        if (v107 < v106) {
                          goto LABEL_213;
                        }
                      }
                      if ((char*)v111 == v108) {
                        goto LABEL_213;
                      }
                      v112 = v111 - (_QWORD)v104;
                      if (v111 - (_QWORD)v104 == -1) {
                        goto LABEL_213;
                      }
                    }
                    else {
                      v112 = 0;
                    }
                    v113 = v158_.v159;
                    if ((v158_.v158 & 1) != 0) {
                      v114 = v158_.v160;
                    }
                    else {
                      v113 = (unsigned __int64)(unsigned __int8)v158_.v158 >> 1;
                      v114 = (char*)&v158_.v158 + 1;
                    }
                    if (v113 >= v112) {
                      v115 = v112;
                    }
                    else {
                      v115 = v113;
                    }
                    if (v115 >= 0xFFFFFFFFFFFFFFF7LL) {
                      goto LABEL_289;
                    }
                    if (v115 >= 0x17) {
                      if ((v115 | 7) == 0x17) {
                        v117 = 26;
                      }
                      else {
                        v117 = (v115 | 7) + 1;
                      }
                      v116 = (char*)NgxRoutine_420(v117);
                      v155_.v156 = v115;
                      v155_.v157 = v116;
                      v155_.v155 = v117 | 1;
                    }
                    else {
                      LOBYTE(v155_.v155) = 2 * v115;
                      v116 = (char*)&v155_.v155 + 1;
                      if (v115 == 0) {
                      LABEL_201:
                        v116[v115] = 0;
                        v118 = strlen_plt_alt1("pool");
                        v119 = v155_.v155;
                        v120 = (unsigned __int8)v155_.v155 >> 1;
                        if ((v155_.v155 & 1) != 0) {
                          v120 = v155_.v156;
                        }
                        if (v118 == v120) {
                          v121 = v118;
                          if (v118 == -1) {
                            goto LABEL_290;
                          }
                          if ((v155_.v155 & 1) != 0) {
                            v122 = v155_.v157;
                          }
                          else {
                            v122 = (char*)&v155_.v155 + 1;
                          }
                          v123 =
                              memcmp_plt((__int64)v122, (__int64)"pool", v121);
                          v119 = v155_.v155;
                          v124 = v123 != 0;
                        }
                        else {
                          v124 = true;
                        }
                        if ((v119 & 1) != 0) {
                          NgxRoutine_430(v155_.v157,
                                         v155_.v155 & 0xFFFFFFFFFFFFFFFELL);
                        }
                        if (v124) {
                        LABEL_213:
                          v69 = "No pool in layer name";
                          goto LABEL_106;
                        }
                        v125 = v158_.v159;
                        if ((v158_.v158 & 1) == 0) {
                          v125 =
                              (unsigned __int64)(unsigned __int8)v158_.v158 >>
                              1;
                        }
                        if (v112 < v125) {
                          v126 = v112 + 1;
                          v127 = v125 - (v112 + 1);
                          if ((v158_.v158 & 1) != 0) {
                            v128 = v158_.v160;
                          }
                          else {
                            v128 = (char*)&v158_.v158 + 1;
                          }
                          if (v127 >= 0xFFFFFFFFFFFFFFF7LL) {
                            goto LABEL_289;
                          }
                          if (v127 >= 0x17) {
                            if ((v127 | 7) == 0x17) {
                              v130 = 26;
                            }
                            else {
                              v130 = (v127 | 7) + 1;
                            }
                            v129 = (char*)NgxRoutine_420(v130);
                            v155_.v156 = v127;
                            v155_.v157 = v129;
                            v155_.v155 = v130 | 1;
                          }
                          else {
                            LOBYTE(v155_.v155) = 2 * v127;
                            v129 = (char*)&v155_.v155 + 1;
                            if (v125 == v126) {
                            LABEL_229:
                              v131 = v158_.v158;
                              v129[v127] = 0;
                              if ((v131 & 1) != 0) {
                                NgxRoutine_430(v158_.v160,
                                               v158_.v158 &
                                                   0xFFFFFFFFFFFFFFFELL);
                              }
                              v133 = v155_.v155;
                              v132 = v155_.v156;
                              v158_.v158 = v155_.v155;
                              v158_.v159 = v155_.v156;
                              v158_.v160 = v155_.v157;
                              if ((v155_.v155 & 1) != 0) {
                                v134 = v155_.v157;
                              }
                              else {
                                v134 = (char*)&v158_.v158 + 1;
                              }
                              result = strlen_plt_alt1("_");
                              if (result != 0) {
                                v135 = result;
                                if ((v133 & 1) != 0) {
                                  v136 = v132;
                                }
                                else {
                                  v136 = (unsigned __int64)v133 >> 1;
                                }
                                if (v136 < result) {
                                  goto LABEL_108;
                                }
                                v137 = &v134[v136];
                                result = (__int64)v134;
                                while (1) {
                                  result =
                                      memchr_plt(result, 95, v136 - v135 + 1);
                                  if (result == 0) {
                                    goto LABEL_108;
                                  }
                                  v138 = result;
                                  result =
                                      memcmp_plt(result, (__int64)"_", v135);
                                  if ((_DWORD)result == 0) {
                                    break;
                                  }
                                  result = v138 + 1;
                                  v136 = (signed __int64)&v137[-v138 - 1];
                                  if (v136 < v135) {
                                    goto LABEL_108;
                                  }
                                }
                                if ((char*)v138 == v137) {
                                  goto LABEL_108;
                                }
                                v139 = v138 - (_QWORD)v134;
                                if (v138 - (_QWORD)v134 == -1) {
                                  goto LABEL_108;
                                }
                              }
                              else {
                                v139 = 0;
                              }
                              v140 = v158_.v159;
                              if ((v158_.v158 & 1) != 0) {
                                v141 = v158_.v160;
                              }
                              else {
                                v140 = (unsigned __int64)(unsigned __int8)
                                           v158_.v158 >>
                                       1;
                                v141 = (char*)&v158_.v158 + 1;
                              }
                              if (v140 >= v139) {
                                v142 = v139;
                              }
                              else {
                                v142 = v140;
                              }
                              if (v142 < 0xFFFFFFFFFFFFFFF7LL) {
                                if (v142 >= 0x17) {
                                  if ((v142 | 7) == 0x17) {
                                    v144 = 26;
                                  }
                                  else {
                                    v144 = (v142 | 7) + 1;
                                  }
                                  v143 = (char*)NgxRoutine_420(v144);
                                  v155_.v156 = v142;
                                  v155_.v157 = v143;
                                  v155_.v155 = v144 | 1;
                                }
                                else {
                                  LOBYTE(v155_.v155) = 2 * v142;
                                  v143 = (char*)&v155_.v155 + 1;
                                  if (v142 == 0) {
                                    goto LABEL_263;
                                  }
                                }
                                memmove_plt((__int64)v143, (__int64)v141, v142);
                              LABEL_263:
                                v143[v142] = 0;
                                result = strlen_plt_alt1("conv");
                                v145 = v155_.v155;
                                v146 = (unsigned __int8)v155_.v155 >> 1;
                                if ((v155_.v155 & 1) != 0) {
                                  v146 = v155_.v156;
                                }
                                if (result != v146) {
                                  v149 = false;
                                LABEL_272:
                                  if ((v145 & 1) != 0) {
                                    result = NgxRoutine_430(
                                        v155_.v157,
                                        v155_.v155 & 0xFFFFFFFFFFFFFFFELL);
                                  }
                                  if (!v149) {
                                    goto LABEL_108;
                                  }
                                  *(_BYTE*)(a1 + 2113) = 1;
                                  nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
                                      (void*)(&v155_.v155),
                                      (unsigned __int8*)&v158_.v158, v139 + 1,
                                      0xFFFFFFFFFFFFFFFFLL);
                                  if ((v158_.v158 & 1) != 0) {
                                    NgxRoutine_430(v158_.v160,
                                                   v158_.v158 &
                                                       0xFFFFFFFFFFFFFFFELL);
                                  }
                                  v158_.v158 = v155_.v155;
                                  v158_.v159 = v155_.v156;
                                  v158_.v160 = v155_.v157;
                                  if (NgxRoutine_2ca80_alt1(
                                          (unsigned __int8*)&v158_.v158, "_",
                                          0) == -1) {
                                    v152 = "No conv size in layer name";
                                  }
                                  else {
                                    if ((v158_.v158 & 1) != 0) {
                                      v150 = (unsigned __int8*)v158_.v160;
                                    }
                                    else {
                                      v150 = (unsigned __int8*)&v158_.v158 + 1;
                                    }
                                    v151 = *v150;
                                    result = isdigit_plt(*v150);
                                    if ((_DWORD)result != 0) {
                                      *(_DWORD*)(a1 + 2124) = v151 - 48;
                                      *(_DWORD*)(a1 + 2128) = v151 - 48;
                                    LABEL_108:
                                      if ((v158_.v158 & 1) != 0) {
                                        result = NgxRoutine_430(
                                            v158_.v160,
                                            v158_.v158 & 0xFFFFFFFFFFFFFFFELL);
                                      }
                                      goto LABEL_110;
                                    }
                                    v152 =
                                        "Convolution kernel size is not digit";
                                  }
                                  v153 = strlen_plt_alt1(v152);
                                  v154 = NgxRoutine_28900(
                                      (_QWORD*)NgxData_951178[0], (__int64)v152,
                                      v153);
                                  result = (__int64)NgxRoutine_29e50(v154);
                                LABEL_107:
                                  *(_DWORD*)(a1 + 84) = 2;
                                  goto LABEL_108;
                                }
                                v147 = result;
                                if (result != -1) {
                                  if ((v155_.v155 & 1) != 0) {
                                    v148 = v155_.v157;
                                  }
                                  else {
                                    v148 = (char*)&v155_.v155 + 1;
                                  }
                                  result = memcmp_plt((__int64)v148,
                                                      (__int64)"conv", v147);
                                  v145 = v155_.v155;
                                  v149 = result == 0;
                                  goto LABEL_272;
                                }
                                goto LABEL_290;
                              }
                            LABEL_289:
                              NgxRoutine_27cb0();
                            }
                          }
                          memmove_plt((__int64)v129, (__int64)&v128[v126],
                                      v127);
                          goto LABEL_229;
                        }
                      LABEL_290:
                        cornflower_rook_00389_2b250();
                      }
                    }
                    memmove_plt((__int64)v116, (__int64)v114, v115);
                    goto LABEL_201;
                  }
                }
                memmove_plt((__int64)v99, (__int64)&v98[v96], v97);
                goto LABEL_167;
              }
            }
            memmove_plt((__int64)v78, (__int64)&v77[v75], v76);
            goto LABEL_128;
          }
        }
        memmove_plt((__int64)v60, (__int64)v58, v59);
        goto LABEL_93;
      }
    }
    memmove_plt((__int64)v44, v4 + v42, v43);
    goto LABEL_65;
  }
LABEL_45:
  v30 = strlen_plt_alt1("Unknown layout type");
  v31 = NgxRoutine_28900((_QWORD*)NgxData_951178[0],
                         (__int64)"Unknown layout type", v30);
  NgxRoutine_be650((void*)((__int64)&v158_.v158),
                   (__int64)v31 + *(_QWORD*)(*v31 - 24LL));
  v32 = NgxRoutine_db310(&v158_.v158, (__int64)NgxData_9511b8);
  v33 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v32 + 56LL))(v32, 10);
  NgxRoutine_db240(&v158_.v158);
  NgxRoutine_bd1d0(v31, v33);
  result = (__int64)NgxRoutine_bcd70(v31);
  *(_DWORD*)(a1 + 84) = 2;
LABEL_110:
  if ((v161_.v161 & 1) != 0) {
    return NgxRoutine_430(v161_.v163, v161_.v161 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 cornflower_rook_00389_6d240(__int64** a1, __int64* a2, __int64 a3,
                                    __int64 a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int* v17;
  _DWORD* v18;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  const char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  const char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  const char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  int v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  char* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  char* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  const char* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  const char* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  char* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  const char* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  char* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  const char* v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  char* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  const char* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  char* v207;
  __int64 v208;
  __int64 v209;
  char v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64* v223;
  __int64 v224;
  __int64 v225;
  __int64* v226;
  __int64 v227;
  __int64 v228;
  unsigned __int64 v229;
  unsigned int v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int64 v240;
  __int64 v241;
  const char* v242;
  __int64 v243;
  const char* v244;
  unsigned int v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  const char* v251;
  const char* v252;
  const char* v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  unsigned __int64 v266;
  int* v267;
  __int64 v268;
  __int64 v269;
  int v270;
  __int64 v271;
  int v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  double v285;
  double v286;
  unsigned int v287;
  double v288;
  unsigned int v289;
  __int64 v290;
  const char* v291;
  const char* v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  char v326;
  char v327;
  char v328;
  __int64 v329;
  int v331;
  __int64 v332;
  __int64 v333;
  struct {
    __int64 v334;
    __int64 v335;
    __int64 v336;
  } v334_;
  struct {
    __int64 v337;
    __int64 v338;
  } v337_;
  struct {
    __int64 v339;
    __int64 v340;
  } v339_;
  struct {
    __int64 v341;
    __int64 v342;
  } v341_;
  struct {
    __int64 v343;
    __int64 v344;
  } v343_;
  struct {
    __int64 v345;
    __int64 v346;
  } v345_;
  struct {
    __int64 v347;
    __int64 v348;
  } v347_;
  struct {
    __int64 v349;
    const char* v350;
    char* v351;
    __int64 v352;
    __int64 v353;
    const char* v354;
    const char* v355;
    const char* v356;
    __int64 v357;
  } v349_;
  struct {
    __int64 v358;
    __int64 v359;
  } v358_;
  struct {
    __int64 v360;
    __int64 v361;
  } v360_;
  struct {
    __int64 v362;
    __int64 v363;
  } v362_;
  struct {
    __int64 v364;
    __int64 v365;
  } v364_;
  struct {
    __int64 v366;
    __int64 v367;
  } v366_;
  struct {
    __int64 v368;
    __int64 v369;
  } v368_;
  struct {
    __int64 v370;
    const char* v371;
    char* v372;
    __int64 v373;
    __int64 v374;
    const char* v375;
    __int64 v376;
    __int64 v377;
    __int64 v378;
  } v370_;
  struct {
    __int64 v379;
    __int64 v380;
  } v379_;
  struct {
    __int64 v381;
    __int64 v382;
  } v381_;
  struct {
    __int64 v383;
    __int64 v384;
  } v383_;
  struct {
    __int64 v385;
    __int64 v386;
  } v385_;
  struct {
    __int64 v387;
    __int64 v388;
  } v387_;
  struct {
    __int64 v389;
    __int64 v390;
  } v389_;
  struct {
    __int64 v391;
    const char* v392;
    char* v393;
    __int64 v394;
    __int64 v395;
    const char* v396;
    __int64 v397;
    __int64 v398;
    __int64 v399;
  } v391_;
  struct {
    __int64 v400;
    __int64 v401;
  } v400_;
  struct {
    __int64 v402;
    __int64 v403;
  } v402_;
  struct {
    __int64 v404;
    __int64 v405;
  } v404_;
  struct {
    __int64 v406;
    __int64 v407;
  } v406_;
  struct {
    __int64 v408;
    __int64 v409;
  } v408_;
  struct {
    __int64 v410;
    __int64 v411;
  } v410_;
  struct {
    __int64 v412;
    const char* v413;
    char* v414;
    __int64 v415;
    __int64 v416;
    const char* v417;
    __int64 v418;
    __int64 v419;
    __int64 v420;
  } v412_;
  struct {
    __int64 v421;
    __int64 v422;
  } v421_;
  struct {
    __int64 v423;
    __int64 v424;
  } v423_;
  struct {
    __int64 v425;
    __int64 v426;
  } v425_;
  struct {
    __int64 v427;
    __int64 v428;
  } v427_;
  struct {
    __int64 v429;
    __int64 v430;
  } v429_;
  struct {
    __int64 v431;
    __int64 v432;
  } v431_;
  struct {
    __int64 v433;
    __int64 v434;
  } v433_;
  struct {
    __int64 v435;
    __int64 v436;
  } v435_;
  __int64 v437[4];
  struct {
    __int64 v438;
    __int64 v439;
  } v438_;
  struct {
    __int64 v440;
    __int64 v441;
  } v440_;
  struct {
    __int64 v442;
    __int64 v443;
  } v442_;
  struct {
    __int64 v444;
    __int64 v445;
  } v444_;
  struct {
    __int64 v446;
    __int64 v447;
  } v446_;
  struct {
    __int64 v448;
    __int64 v449;
  } v448_;
  struct {
    __int64 v450;
    __int64 v451;
    const char* v452;
    const char* v453;
  } v450_;
  struct {
    __int64 v454;
    __int64 v455;
  } v454_;
  struct {
    __int64 v456;
    __int64 v457;
  } v456_;
  struct {
    __int64 v458;
    __int64 v459;
  } v458_;
  struct {
    __int64 v460;
    __int64 v461;
  } v460_;
  struct {
    __int64 v462;
    __int64 v463;
  } v462_;
  struct {
    __int64 v464;
    __int64 v465;
  } v464_;
  struct {
    __int64 v466;
    __int64 v467;
  } v466_;
  struct {
    __int64 v468;
    __int64 v469;
  } v468_;
  struct {
    __int64 v470;
    __int64 v471;
  } v470_;
  struct {
    __int64 v472;
    __int64 v473;
  } v472_;
  struct {
    __int64 v474;
    __int64 v475;
  } v474_;
  struct {
    __int64 v476;
    __int64 v477;
  } v476_;
  struct {
    __int64 v478;
    __int64 v479;
  } v478_;
  struct {
    __int64 v480;
    __int64 v481;
  } v480_;
  struct {
    __int64 v482;
    __int64 v483;
  } v482_;
  struct {
    __int64 v484;
    __int64 v485;
  } v484_;
  struct {
    __int64 v486;
    __int64 v487;
  } v486_;
  struct {
    __int64 v488;
    __int64 v489;
  } v488_;
  struct {
    __int64 v490;
    __int64 v491;
  } v490_;
  struct {
    __int64 v492;
    __int64 v493;
  } v492_;
  struct {
    __int64 v494;
    __int64 v495;
  } v494_;
  struct {
    __int64 v496;
    __int64 v497;
  } v496_;
  struct {
    __int64 v498;
    __int64 v499;
  } v498_;

  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v5 = *(_QWORD*)(a3 + 712);
  v6 = *(_QWORD*)(a3 + 704);
  for (*(_BYTE*)(a3 + 2992) = 1; v5 != v6; v5 -= 16) {
    v11 = *(_QWORD*)(v5 - 8);
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v11),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
  *(_QWORD*)(a3 + 712) = v6;
  v12 = *(_QWORD*)(a3 + 736);
  for (i = *(_QWORD*)(a3 + 728); v12 != i; v12 -= 16) {
    v14 = *(_QWORD*)(v12 - 8);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v14),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
  *(_QWORD*)(a3 + 736) = i;
  *a1 = a2;
  LODWORD(v15) = *(_DWORD*)(a3 + 580);
  v333 = a4;
  v16 = (_QWORD*)NgxRoutine_420(40),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0xFFFFFFEDFFFFFFF0LL;
  v17 = (int*)NgxRoutine_420(4),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *v17 = 1;
  v18 = *(_DWORD**)(a3 + 680);
  if (v18 != nullptr) {
    if ((*v18)-- == 1) {
      v20 = *(_QWORD**)(a3 + 672);
      if (v20 == nullptr) {
        goto LABEL_20;
      }
      v21 = v20[1];
      if (v21 != 0) {
        v22 = v20[3];
        v20[2] = v21;
        NgxRoutine_430(v21, v22 - v21),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      NgxRoutine_430(v20, 40),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v18 = *(_DWORD**)(a3 + 680);
      if (v18 != nullptr) {
      LABEL_20:
        NgxRoutine_430(v18, 4),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    v23 = *v17;
    *(_QWORD*)(a3 + 672) = v16;
    *(_QWORD*)(a3 + 680) = v17;
    if (v23 == 0) {
      v24 = v16[1];
      if (v24 != 0) {
        v25 = v16[3];
        v16[2] = v24;
        NgxRoutine_430(v24, v25 - v24),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      NgxRoutine_430(v16, 40),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_430(v17, 4),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
  else {
    *(_QWORD*)(a3 + 672) = v16;
    *(_QWORD*)(a3 + 680) = v17;
  }
  v26 = *(unsigned __int8*)(a3 + 638);
  if (*(_BYTE*)(a3 + 638) != 0) {
    v27 = 3;
  }
  else {
    v27 = 0;
  }
  v28 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v29 = (__int64)*a1;
  v30 = v28;
  v31 = strlen_plt("input"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_529:
    NgxRoutine_27cb0(),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v32 = v31;
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v31 | 7) + 1;
    }
    v33 = (char*)NgxRoutine_420(v34),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v412_.v414 = v33;
    v412_.v413 = (const char*)v32;
    v412_.v412 = v34 | 1;
    goto LABEL_37;
  }
  LOBYTE(v412_.v412) = 2 * v31;
  v33 = (char*)&v412_.v412 + 1;
  if (v31 != 0) {
  LABEL_37:
    memcpy_plt(v33, "input", v32),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v33[v32] = 0;
  dltss_network_65b40(v30, v29, &v412_.v412, *(_DWORD*)(a3 + 520),
                      *(_DWORD*)(a3 + 524), 16, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 2, *(_QWORD*)(a3 + 672), v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v498_.v498),
                                             (_QWORD*)(a3 + 168), v30),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v35 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v36 = (__int64)*a1;
  v37 = v35;
  v38 = strlen_plt("enc_0_0_dummy"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v39 = v38;
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v38 | 7) + 1;
    }
    v40 = (char*)NgxRoutine_420(v41),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v412_.v414 = v40;
    v412_.v413 = (const char*)v39;
    v412_.v412 = v41 | 1;
    goto LABEL_48;
  }
  LOBYTE(v412_.v412) = 2 * v38;
  v40 = (char*)&v412_.v412 + 1;
  if (v38 != 0) {
  LABEL_48:
    memcpy_plt(v40, "enc_0_0_dummy", v39),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v42 = v498_.v498;
  v40[v39] = 0;
  dltss_network_65b40(v37, v36, &v412_.v412, *(_DWORD*)(v42 + 92),
                      *(_DWORD*)(v42 + 96), 32, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 1, *(_QWORD*)(a3 + 672), v27),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v496_.v496),
                                             (_QWORD*)(a3 + 168), v37),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v331 = v27;
  if ((v15 & 1) == 0) {
    v43 = NgxRoutine_420(456),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v44 = (__int64)*a1;
    v45 = v43;
    v490_.v490 = v498_.v498;
    v490_.v491 = v498_.v499;
    if (v498_.v499 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v498_.v499 + 8), 1u,
                                memory_order_relaxed);
    }
    v488_.v488 = v496_.v496;
    v488_.v489 = v496_.v497;
    if (v496_.v497 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v496_.v497 + 8), 1u,
                                memory_order_relaxed);
    }
    dltss_network_66c80(v43, v44, 1u, &v490_.v490, 3u, 0x20u, &v488_.v488, 1u,
                        *(_QWORD*)(a3 + 672), v333, v26),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v412_.v412),
                                               (_QWORD*)(a3 + 168), v45),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v46 = v412_.v412;
    v47 = v412_.v413;
    v48 = v488_.v489;
    v412_.v412 = 0;
    v412_.v413 = nullptr;
    if (v488_.v489 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v488_.v489 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v48),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v49 = v490_.v491;
    if (v490_.v491 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v490_.v491 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v49),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    goto LABEL_77;
  }
  v50 = NgxRoutine_420(320),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v51 = (__int64)*a1;
  v52 = v50;
  v53 = strlen_plt("enc_0_1_fused"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v54 = v53;
  if (v53 >= 0x17) {
    if ((v53 | 7) == 0x17) {
      v246 = 26;
    }
    else {
      v246 = (v53 | 7) + 1;
    }
    v55 = (char*)NgxRoutine_420(v246),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v412_.v414 = v55;
    v412_.v413 = (const char*)v54;
    v412_.v412 = v246 | 1;
  LABEL_377:
    memcpy_plt(v55, "enc_0_1_fused", v54),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v247 = v498_.v498;
    v56 = v498_.v499;
    v55[v54] = 0;
    v494_.v494 = v247;
    v494_.v495 = v56;
    if (v56 == 0) {
      goto LABEL_67;
    }
    goto LABEL_66;
  }
  LOBYTE(v412_.v412) = 2 * v53;
  v55 = (char*)&v412_.v412 + 1;
  if (v53 != 0) {
    goto LABEL_377;
  }
  v56 = v498_.v499;
  BYTE1(v412_.v412) = 0;
  v494_.v494 = v498_.v498;
  v494_.v495 = v498_.v499;
  if (v498_.v499 != 0) {
  LABEL_66:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_67:
  v492_.v492 = v496_.v496;
  v492_.v493 = v496_.v497;
  if (v496_.v497 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v496_.v497 + 8), 1u,
                              memory_order_relaxed);
  }
  nvidia_dlss_rel_source_features_dlaa_701c0(v52, v51, (__int64)&v412_.v412,
                                             &v494_.v494, 3, 0x20u, &v492_.v492,
                                             1u, *(_QWORD*)(a3 + 672), v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v391_.v391),
                                             (_QWORD*)(a3 + 168), v52),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v46 = v391_.v391;
  v47 = v391_.v392;
  v57 = v492_.v493;
  v391_.v391 = 0;
  v391_.v392 = nullptr;
  if (v492_.v493 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v492_.v493 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v57),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v58 = v494_.v495;
  if (v494_.v495 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v494_.v495 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v58),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_77:
  v59 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v60 = (__int64)*a1;
  v61 = v59;
  v62 = strlen_plt("enc_1_0_dummy"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v62 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v63 = v62;
  v328 = v15;
  if (v62 >= 0x17) {
    if ((v62 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v62 | 7) + 1;
    }
    v65 = NgxRoutine_420(v15),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v66 = v15 | 1;
    LOBYTE(v15) = v328;
    v64 = (char*)v65;
    v412_.v414 = (char*)v65;
    v412_.v413 = (const char*)v63;
    v412_.v412 = v66;
    goto LABEL_85;
  }
  LOBYTE(v412_.v412) = 2 * v62;
  v64 = (char*)&v412_.v412 + 1;
  if (v62 != 0) {
  LABEL_85:
    memcpy_plt(v64, "enc_1_0_dummy", v63),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v64[v63] = 0;
  dltss_network_65b40(v61, v60, &v412_.v412, *(_DWORD*)(v46 + 92),
                      *(_DWORD*)(v46 + 96), 64, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 1, *(_QWORD*)(a3 + 672),
                      v331),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v486_.v486),
                                             (_QWORD*)(a3 + 168), v61),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v329 = (__int64)v47;
  if ((v15 & 1) == 0) {
    v67 = NgxRoutine_420(456),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v68 = (__int64)*a1;
    v69 = v67;
    v480_.v480 = v46;
    v480_.v481 = (__int64)v47;
    if (v47 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                memory_order_relaxed);
    }
    v478_.v478 = v486_.v486;
    v478_.v479 = v486_.v487;
    if (v486_.v487 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v486_.v487 + 8), 1u,
                                memory_order_relaxed);
    }
    dltss_network_66c80(v67, v68, 2u, &v480_.v480, 1u, 0x40u, &v478_.v478, 1u,
                        *(_QWORD*)(a3 + 672), v333, v26),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v412_.v412),
                                               (_QWORD*)(a3 + 168), v69),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v70 = v412_.v412;
    v71 = v412_.v413;
    v72 = v478_.v479;
    v412_.v412 = 0;
    v412_.v413 = nullptr;
    if (v478_.v479 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v478_.v479 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v72),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v73 = v480_.v481;
    if (v480_.v481 == 0) {
      goto LABEL_112;
    }
  LABEL_110:
    if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v73),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    goto LABEL_112;
  }
  v74 = 1080;
  v412_.v412 = (__int64)"enc_1_1_fused";
  if (v26 == 0) {
    v74 = 1064;
  }
  v75 = "dltss_nchw8_conv_3x3_pool_conv_1x1_pool_512_032_008_fp16_e5m3_kernel";
  if (v26 == 0) {
    v75 = "dltss_nhwc_conv_3x3_pool_conv_1x1_pool_512_064_016_fp16_e5m3_kernel";
  }
  v412_.v414 = (char*)v75;
  v412_.v415 = 0x100000002LL;
  v412_.v413 = (const char*)(v333 + v74);
  v76 = NgxRoutine_420(384),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v77 = (__int64)*a1;
  v78 = v76;
  v484_.v484 = v46;
  v484_.v485 = (__int64)v47;
  if (v47 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                              memory_order_relaxed);
  }
  v482_.v482 = v486_.v486;
  v482_.v483 = v486_.v487;
  if (v486_.v487 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v486_.v487 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_65c90(v76, v77, &v412_.v412, &v484_.v484, 1u, 0x40u,
                      &v482_.v482, 1u, *(_QWORD*)(a3 + 672), v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v391_.v391),
                                             (_QWORD*)(a3 + 168), v78),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v70 = v391_.v391;
  v71 = v391_.v392;
  v79 = v482_.v483;
  v391_.v391 = 0;
  v391_.v392 = nullptr;
  if (v482_.v483 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v482_.v483 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v79),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v73 = v484_.v485;
  if (v484_.v485 != 0) {
    goto LABEL_110;
  }
LABEL_112:
  v80 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v81 = (__int64)*a1;
  v82 = v80;
  v83 = strlen_plt("enc_2_0_dummy"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v83 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v84 = v83;
  if (v83 >= 0x17) {
    if ((v83 | 7) == 0x17) {
      v87 = 26;
    }
    else {
      v87 = (v83 | 7) + 1;
    }
    v88 = NgxRoutine_420(v87),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v89 = v87 | 1;
    v85 = v331;
    v86 = (char*)v88;
    v412_.v414 = (char*)v88;
    v412_.v413 = (const char*)v84;
    v412_.v412 = v89;
    goto LABEL_120;
  }
  v85 = v331;
  LOBYTE(v412_.v412) = 2 * v83;
  v86 = (char*)&v412_.v412 + 1;
  if (v83 != 0) {
  LABEL_120:
    memcpy_plt(v86, "enc_2_0_dummy", v84),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v86[v84] = 0;
  dltss_network_65b40(v82, v81, &v412_.v412, *(_DWORD*)(v70 + 92),
                      *(_DWORD*)(v70 + 96), 128, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 2, *(_QWORD*)(a3 + 672), v85),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v476_.v476),
                                             (_QWORD*)(a3 + 168), v82),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v90 = NgxRoutine_420(456),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v91 = (__int64)*a1;
  v92 = v90;
  v472_.v472 = v70;
  v472_.v473 = (__int64)v71;
  if (v71 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                              memory_order_relaxed);
  }
  v93 = v329;
  v470_.v470 = v476_.v476;
  v470_.v471 = v476_.v477;
  if (v476_.v477 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v476_.v477 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_66c80(v90, v91, 3u, &v472_.v472, 3u, 0x80u, &v470_.v470, 2u,
                      *(_QWORD*)(a3 + 672), v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v474_.v474),
                                             (_QWORD*)(a3 + 168), v92),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v94 = v470_.v471;
  if (v470_.v471 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v470_.v471 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v94),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v95 = v472_.v473;
  if (v472_.v473 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v472_.v473 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v95),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v96 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v97 = (__int64)*a1;
  v98 = v96;
  v99 = strlen_plt("enc_3_0_dummy"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v99 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v100 = v99;
  if (v99 >= 0x17) {
    if ((v99 | 7) == 0x17) {
      v102 = 26;
    }
    else {
      v102 = (v99 | 7) + 1;
    }
    v103 = NgxRoutine_420(v102),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v104 = v102 | 1;
    v85 = v331;
    v101 = (char*)v103;
    v412_.v414 = (char*)v103;
    v412_.v413 = (const char*)v100;
    v412_.v412 = v104;
    goto LABEL_141;
  }
  LOBYTE(v412_.v412) = 2 * v99;
  v101 = (char*)&v412_.v412 + 1;
  if (v99 != 0) {
  LABEL_141:
    memcpy_plt(v101, "enc_3_0_dummy", v100),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v105 = v474_.v474;
  v101[v100] = 0;
  dltss_network_65b40(v98, v97, &v412_.v412, *(_DWORD*)(v105 + 92),
                      *(_DWORD*)(v105 + 96), 128, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 2, *(_QWORD*)(a3 + 672), v85),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v468_.v468),
                                             (_QWORD*)(a3 + 168), v98),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v106 = NgxRoutine_420(456),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v107 = (__int64)*a1;
  v108 = v106;
  v464_.v464 = v474_.v474;
  v464_.v465 = v474_.v475;
  if (v474_.v475 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v474_.v475 + 8), 1u,
                              memory_order_relaxed);
  }
  v462_.v462 = v468_.v468;
  v462_.v463 = v468_.v469;
  if (v468_.v469 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v468_.v469 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_66c80(v106, v107, 4u, &v464_.v464, 3u, 0x80u, &v462_.v462, 2u,
                      *(_QWORD*)(a3 + 672), v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v466_.v466),
                                             (_QWORD*)(a3 + 168), v108),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v109 = v462_.v463;
  if (v462_.v463 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v462_.v463 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v109 + 16LL))(v109),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v109),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v110 = v464_.v465;
  if (v464_.v465 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v464_.v465 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v110),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v111 = NgxRoutine_420(136),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v112 = (__int64)*a1;
  v113 = v111;
  v114 = strlen_plt("enc_4_0_dummy"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v114 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v115 = v114;
  if (v114 >= 0x17) {
    if ((v114 | 7) == 0x17) {
      v117 = 26;
    }
    else {
      v117 = (v114 | 7) + 1;
    }
    v118 = NgxRoutine_420(v117),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v119 = v117 | 1;
    v85 = v331;
    v116 = (char*)v118;
    v412_.v414 = (char*)v118;
    v412_.v413 = (const char*)v115;
    v412_.v412 = v119;
    goto LABEL_162;
  }
  LOBYTE(v412_.v412) = 2 * v114;
  v116 = (char*)&v412_.v412 + 1;
  if (v114 != 0) {
  LABEL_162:
    memcpy_plt(v116, "enc_4_0_dummy", v115),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v120 = v466_.v466;
  v116[v115] = 0;
  dltss_network_65b40(v113, v112, &v412_.v412, *(_DWORD*)(v120 + 92),
                      *(_DWORD*)(v120 + 96), 256, *(unsigned int*)(a3 + 116),
                      *(unsigned int*)(a3 + 120), 2, *(_QWORD*)(a3 + 672), v85),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6fe30((void*)(&v460_.v460),
                                             (_QWORD*)(a3 + 168), v113),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v121 = NgxRoutine_420(456),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v122 = (__int64)*a1;
  v123 = v121;
  v456_.v456 = v466_.v466;
  v456_.v457 = v466_.v467;
  if (v466_.v467 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v466_.v467 + 8), 1u,
                              memory_order_relaxed);
  }
  v454_.v454 = v460_.v460;
  v454_.v455 = v460_.v461;
  if (v460_.v461 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v460_.v461 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_66c80(v121, v122, 5u, &v456_.v456, 3u, 0x100u, &v454_.v454, 2u,
                      *(_QWORD*)(a3 + 672), v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v458_.v458),
                                             (_QWORD*)(a3 + 168), v123),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v124 = v454_.v455;
  if (v454_.v455 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v454_.v455 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v124),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v125 = v456_.v457;
  if (v456_.v457 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v456_.v457 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v125),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v126 = 1304;
  v450_.v450 = 0x100000001LL;
  if (v26 == 0) {
    v126 = 1288;
  }
  v450_.v453 = "dec_4_0";
  v127 = v333 + v126;
  v450_.v451 = v333 + v126;
  if (v26 != 0) {
    v128 = "dltss_nchw8_conv_1x1_064_032_032_fp16_fp16_kernel";
  }
  else {
    v128 = "dltss_nhwc_conv_1x1_064_032_064_fp16_fp16_kernel";
  }
  v450_.v452 = v128;
  v129 = NgxRoutine_420(392),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v130 = (__int64)*a1;
  v131 = v129;
  v446_.v446 = v458_.v458;
  v446_.v447 = v458_.v459;
  if (v458_.v459 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v458_.v459 + 8), 1u,
                              memory_order_relaxed);
  }
  v132 = *(_QWORD*)(a3 + 672);
  v444_.v444 = 0;
  v444_.v445 = 0;
  dltss_network_69850(v129, v130, &v450_.v450, &v446_.v446, 1u, 0x200u, 1,
                      &v444_.v444, 2u, v132, v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v448_.v448),
                                             (_QWORD*)(a3 + 168), v131),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v133 = v444_.v445;
  if (v444_.v445 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v444_.v445 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v133 + 16LL))(v133),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v133),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v134 = v446_.v447;
  if (v446_.v447 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v446_.v447 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v134),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v450_.v451 = v127;
  v450_.v452 = v128;
  v450_.v453 = "dec_4_1";
  v135 = NgxRoutine_420(392),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v136 = (__int64)*a1;
  v137 = v135;
  v440_.v440 = v448_.v448;
  v440_.v441 = v448_.v449;
  if (v448_.v449 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v448_.v449 + 8), 1u,
                              memory_order_relaxed);
  }
  v138 = *(_QWORD*)(a3 + 672);
  v438_.v438 = 0;
  v438_.v439 = 0;
  dltss_network_69850(v135, v136, &v450_.v450, &v440_.v440, 1u, 0x100u, 1,
                      &v438_.v438, 2u, v138, v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v442_.v442),
                                             (_QWORD*)(a3 + 168), v137),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v139 = v438_.v439;
  if (v438_.v439 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v438_.v439 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v139 + 16LL))(v139),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v139),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v140 = v440_.v441;
  if (v440_.v441 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v440_.v441 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v140),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v141 = 1368;
  v437[0] = 0x100000001LL;
  if (v26 == 0) {
    v141 = 1352;
  }
  v437[3] = (__int64)"dec_3_0";
  v437[1] = v333 + v141;
  if (v26 != 0) {
    v142 =
        "dltss_nchw8_bilinear_upsample_conv_1x1_128_128_032_fp16_fp16_kernel";
  }
  else {
    v142 = "dltss_nhwc_bilinear_upsample_conv_1x1_128_128_032_fp16_fp16_kernel";
  }
  v437[2] = (__int64)v142;
  v143 = NgxRoutine_420(392),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v144 = (__int64)*a1;
  v145 = v143;
  v433_.v433 = v442_.v442;
  v433_.v434 = v442_.v443;
  if (v442_.v443 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v442_.v443 + 8), 1u,
                              memory_order_relaxed);
  }
  v431_.v431 = v460_.v460;
  v431_.v432 = v460_.v461;
  if (v460_.v461 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v460_.v461 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_69850(v143, v144, v437, &v433_.v433, 1u, 0x100u, 1, &v431_.v431,
                      2u, *(_QWORD*)(a3 + 672), v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v435_.v435),
                                             (_QWORD*)(a3 + 168), v145),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v146 = v431_.v432;
  if (v431_.v432 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v431_.v432 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v146),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v147 = v433_.v434;
  if (v433_.v434 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v433_.v434 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v147),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v450_.v451 = v127;
  v450_.v452 = v128;
  v450_.v453 = "dec_3_1";
  v148 = NgxRoutine_420(392),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v149 = (__int64)*a1;
  v150 = v148;
  v427_.v427 = v435_.v435;
  v427_.v428 = v435_.v436;
  if (v435_.v436 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v435_.v436 + 8), 1u,
                              memory_order_relaxed);
  }
  v151 = *(_QWORD*)(a3 + 672);
  v425_.v425 = 0;
  v425_.v426 = 0;
  dltss_network_69850(v148, v149, &v450_.v450, &v427_.v427, 1u, 0x80u, 1,
                      &v425_.v425, 2u, v151, v333, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v429_.v429),
                                             (_QWORD*)(a3 + 168), v150),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v152 = v425_.v426;
  if (v425_.v426 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v425_.v426 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v152 + 16LL))(v152),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v152),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v153 = v427_.v428;
  if (v427_.v428 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v427_.v428 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v153 + 16LL))(v153),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v153),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v154 = NgxRoutine_420(320),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v155 = (__int64)*a1;
  v156 = v154;
  v157 = strlen_plt("dec_2_0"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v157 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v158 = v157;
  if (v157 >= 0x17) {
    if ((v157 | 7) == 0x17) {
      v231 = 26;
    }
    else {
      v231 = (v157 | 7) + 1;
    }
    v159 = (char*)NgxRoutine_420(v231),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v412_.v414 = v159;
    v412_.v413 = (const char*)v158;
    v412_.v412 = v231 | 1;
  LABEL_341:
    memcpy_plt(v159, "dec_2_0", v158),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v232 = v468_.v468;
    v160 = v468_.v469;
    v159[v158] = 0;
    v421_.v421 = v232;
    v421_.v422 = v160;
    if (v160 == 0) {
      goto LABEL_224;
    }
    goto LABEL_223;
  }
  LOBYTE(v412_.v412) = 2 * v157;
  v159 = (char*)&v412_.v412 + 1;
  if (v157 != 0) {
    goto LABEL_341;
  }
  v160 = v468_.v469;
  BYTE1(v412_.v412) = 0;
  v421_.v421 = v468_.v468;
  v421_.v422 = v468_.v469;
  if (v468_.v469 != 0) {
  LABEL_223:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v160 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_224:
  NgxRoutine_70310(v156, v155, &v412_.v412, &v421_.v421, 1, 128, 2,
                   *(_QWORD*)(a3 + 672), 0, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v423_.v423),
                                             (_QWORD*)(a3 + 168), v156),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v161 = v421_.v422;
  if (v421_.v422 == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(v421_.v422 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v412_.v412 & 1) == 0) {
      goto LABEL_228;
    }
    goto LABEL_227;
  }
  (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_baf10(v161),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v412_.v412 & 1) != 0) {
  LABEL_227:
    NgxRoutine_430(v412_.v414, v412_.v412 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_228:
  v162 = 1400;
  LOBYTE(v412_.v412) = 0;
  v412_.v415 = 0;
  v412_.v416 = 0;
  if (v26 == 0) {
    v162 = 1384;
  }
  v412_.v413 = "dec_2_1";
  v412_.v418 = 0;
  v163 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_064_128_032_128_032_"
         "fp16_fp16_kernel";
  v412_.v419 = 0;
  if (v26 != 0) {
    v163 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_064_128_032_128_"
           "064_fp16_fp16_kernel";
  }
  v412_.v417 = v163;
  v412_.v414 = (char*)(v333 + v162);
  v412_.v420 = 0x100000001LL;
  v164 = NgxRoutine_420(648),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v165 = (__int64)*a1;
  v166 = v164;
  v408_.v408 = v429_.v429;
  v408_.v409 = v429_.v430;
  if (v429_.v430 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v429_.v430 + 8), 1u,
                              memory_order_relaxed);
  }
  v406_.v406 = v468_.v468;
  v406_.v407 = v468_.v469;
  if (v468_.v469 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v468_.v469 + 8), 1u,
                              memory_order_relaxed);
  }
  v404_.v404 = v423_.v423;
  v404_.v405 = v423_.v424;
  if (v423_.v424 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v423_.v424 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_6a650(v164, v165, &v412_.v412, &v408_.v408, 1, 128, 1,
                      &v406_.v406, &v404_.v404, 2, *(_QWORD*)(a3 + 672), 0,
                      v333, v26, 0, 0),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v410_.v410),
                                             (_QWORD*)(a3 + 168), v166),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v167 = v404_.v405;
  if (v404_.v405 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v404_.v405 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v167 + 16LL))(v167),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v167),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v168 = v406_.v407;
  if (v406_.v407 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v406_.v407 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v168 + 16LL))(v168),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v168),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v169 = v408_.v409;
  if (v408_.v409 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v408_.v409 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v169),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v170 = NgxRoutine_420(320),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v171 = (__int64)*a1;
  v172 = v170;
  v173 = strlen_plt("dec_1_0"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v173 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v174 = v173;
  if (v173 >= 0x17) {
    if ((v173 | 7) == 0x17) {
      v233 = 26;
    }
    else {
      v233 = (v173 | 7) + 1;
    }
    v175 = (char*)NgxRoutine_420(v233),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v391_.v393 = v175;
    v391_.v392 = (const char*)v174;
    v391_.v391 = v233 | 1;
  LABEL_347:
    memcpy_plt(v175, "dec_1_0", v174),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v234 = v476_.v476;
    v176 = v476_.v477;
    v175[v174] = 0;
    v400_.v400 = v234;
    v400_.v401 = v176;
    if (v176 == 0) {
      goto LABEL_252;
    }
    goto LABEL_251;
  }
  LOBYTE(v391_.v391) = 2 * v173;
  v175 = (char*)&v391_.v391 + 1;
  if (v173 != 0) {
    goto LABEL_347;
  }
  v176 = v476_.v477;
  BYTE1(v391_.v391) = 0;
  v400_.v400 = v476_.v476;
  v400_.v401 = v476_.v477;
  if (v476_.v477 != 0) {
  LABEL_251:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v176 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_252:
  NgxRoutine_70310(v172, v171, &v391_.v391, &v400_.v400, 1, 128, 1,
                   *(_QWORD*)(a3 + 672), 0, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v402_.v402),
                                             (_QWORD*)(a3 + 168), v172),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v177 = v400_.v401;
  if (v400_.v401 == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(v400_.v401 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v391_.v391 & 1) == 0) {
      goto LABEL_256;
    }
    goto LABEL_255;
  }
  (*(void (**)(__int64))(*(_QWORD*)v177 + 16LL))(v177),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_baf10(v177),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v391_.v391 & 1) != 0) {
  LABEL_255:
    NgxRoutine_430(v391_.v393, v391_.v391 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_256:
  v178 = 1448;
  LOBYTE(v391_.v391) = 0;
  v391_.v394 = 0;
  v391_.v395 = 0;
  if (v26 == 0) {
    v178 = 1432;
  }
  v391_.v392 = "dec_1_1";
  v391_.v397 = 0;
  v179 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_128_128_032_064_128_"
         "fp16_e5m3_kernel";
  v391_.v398 = 0;
  if (v26 != 0) {
    v179 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_128_128_032_064_"
           "128_fp16_e5m3_kernel";
  }
  v391_.v396 = v179;
  v391_.v393 = (char*)(v333 + v178);
  v391_.v399 = 0x100000002LL;
  v180 = NgxRoutine_420(648),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v181 = (__int64)*a1;
  v182 = v180;
  v387_.v387 = v410_.v410;
  v387_.v388 = v410_.v411;
  if (v410_.v411 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v410_.v411 + 8), 1u,
                              memory_order_relaxed);
  }
  v385_.v385 = v476_.v476;
  v385_.v386 = v476_.v477;
  if (v476_.v477 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v476_.v477 + 8), 1u,
                              memory_order_relaxed);
  }
  v383_.v383 = v402_.v402;
  v383_.v384 = v402_.v403;
  if (v402_.v403 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v402_.v403 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_6a650(v180, v181, &v391_.v391, &v387_.v387, 1, 64, 1,
                      &v385_.v385, &v383_.v383, 1, *(_QWORD*)(a3 + 672), 0,
                      v333, v26, 0, 0),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v389_.v389),
                                             (_QWORD*)(a3 + 168), v182),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v183 = v383_.v384;
  if (v383_.v384 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v383_.v384 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v183 + 16LL))(v183),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v183),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v184 = v385_.v386;
  if (v385_.v386 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v385_.v386 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v184 + 16LL))(v184),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v184),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v185 = v387_.v388;
  if (v387_.v388 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v387_.v388 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v185 + 16LL))(v185),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v185),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v186 = NgxRoutine_420(320),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v187 = (__int64)*a1;
  v188 = v186;
  v189 = strlen_plt("dec_0_0"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v189 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v190 = v189;
  if (v189 >= 0x17) {
    if ((v189 | 7) == 0x17) {
      v235 = 26;
    }
    else {
      v235 = (v189 | 7) + 1;
    }
    v191 = (char*)NgxRoutine_420(v235),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v370_.v371 = (const char*)v190;
    v370_.v372 = v191;
    v370_.v370 = v235 | 1;
  LABEL_353:
    memcpy_plt(v191, "dec_0_0", v190),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v236 = v486_.v486;
    v192 = v486_.v487;
    v191[v190] = 0;
    v379_.v379 = v236;
    v379_.v380 = v192;
    if (v192 == 0) {
      goto LABEL_280;
    }
    goto LABEL_279;
  }
  LOBYTE(v370_.v370) = 2 * v189;
  v191 = (char*)&v370_.v370 + 1;
  if (v189 != 0) {
    goto LABEL_353;
  }
  v192 = v486_.v487;
  BYTE1(v370_.v370) = 0;
  v379_.v379 = v486_.v486;
  v379_.v380 = v486_.v487;
  if (v486_.v487 != 0) {
  LABEL_279:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v192 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_280:
  NgxRoutine_70310(v188, v187, &v370_.v370, &v379_.v379, 1, 64, 1,
                   *(_QWORD*)(a3 + 672), 0, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v381_.v381),
                                             (_QWORD*)(a3 + 168), v188),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v193 = v379_.v380;
  if (v379_.v380 == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(v379_.v380 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v370_.v370 & 1) == 0) {
      goto LABEL_284;
    }
    goto LABEL_283;
  }
  (*(void (**)(__int64))(*(_QWORD*)v193 + 16LL))(v193),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_baf10(v193),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v370_.v370 & 1) != 0) {
  LABEL_283:
    NgxRoutine_430(v370_.v372, v370_.v370 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_284:
  v194 = 1496;
  LOBYTE(v370_.v370) = 0;
  v370_.v373 = 0;
  v370_.v374 = 0;
  if (v26 == 0) {
    v194 = 1480;
  }
  v370_.v371 = "dec_0_1";
  v370_.v372 = (char*)(v333 + v194);
  v195 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_256_064_064_032_064_"
         "e5m3_e5m3_kernel";
  if (v26 != 0) {
    v195 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_128_064_064_032_"
           "064_e5m3_e5m3_kernel";
  }
  v370_.v375 = v195;
  v370_.v376 = 0;
  v370_.v377 = 0;
  v370_.v378 = 0x200000002LL;
  v196 = NgxRoutine_420(648),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v197 = (__int64)*a1;
  v198 = v196;
  v366_.v366 = v389_.v389;
  v366_.v367 = v389_.v390;
  if (v389_.v390 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v389_.v390 + 8), 1u,
                              memory_order_relaxed);
  }
  v364_.v364 = v486_.v486;
  v364_.v365 = v486_.v487;
  if (v486_.v487 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v486_.v487 + 8), 1u,
                              memory_order_relaxed);
  }
  v362_.v362 = v381_.v381;
  v362_.v363 = v381_.v382;
  if (v381_.v382 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v381_.v382 + 8), 1u,
                              memory_order_relaxed);
  }
  dltss_network_6a650(v196, v197, &v370_.v370, &v366_.v366, 1, 32, 1,
                      &v364_.v364, &v362_.v362, 1, *(_QWORD*)(a3 + 672), 0,
                      v333, v26, 0, 0),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v368_.v368),
                                             (_QWORD*)(a3 + 168), v198),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v199 = v362_.v363;
  if (v362_.v363 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v362_.v363 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v199 + 16LL))(v199),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v199),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v200 = v364_.v365;
  if (v364_.v365 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v364_.v365 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v200 + 16LL))(v200),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v200),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v201 = v366_.v367;
  if (v366_.v367 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v366_.v367 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v201 + 16LL))(v201),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v201),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v202 = NgxRoutine_420(320),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v203 = (__int64)*a1;
  v204 = v202;
  v205 = strlen_plt("pdl_0"),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v205 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_529;
  }
  v206 = v205;
  if (v205 >= 0x17) {
    if ((v205 | 7) == 0x17) {
      v237 = 26;
    }
    else {
      v237 = (v205 | 7) + 1;
    }
    v207 = (char*)NgxRoutine_420(v237),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v349_.v350 = (const char*)v206;
    v349_.v351 = v207;
    v349_.v349 = v237 | 1;
  LABEL_359:
    memcpy_plt(v207, "pdl_0", v206),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v238 = v496_.v496;
    v208 = v496_.v497;
    v332 = (__int64)v71;
    v207[v206] = 0;
    v358_.v358 = v238;
    v358_.v359 = v208;
    if (v208 == 0) {
      goto LABEL_308;
    }
    goto LABEL_307;
  }
  LOBYTE(v349_.v349) = 2 * v205;
  v207 = (char*)&v349_.v349 + 1;
  if (v205 != 0) {
    goto LABEL_359;
  }
  v208 = v496_.v497;
  v332 = (__int64)v71;
  BYTE1(v349_.v349) = 0;
  v358_.v358 = v496_.v496;
  v358_.v359 = v496_.v497;
  if (v496_.v497 != 0) {
  LABEL_307:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v208 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_308:
  NgxRoutine_70310(v204, v203, &v349_.v349, &v358_.v358, 1, 32, 2,
                   *(_QWORD*)(a3 + 672), 0, v26),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v360_.v360),
                                             (_QWORD*)(a3 + 168), v204),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v209 = v358_.v359;
  v210 = v328;
  if (v358_.v359 == 0 ||
      atomic_fetch_add((atomic_ullong* volatile)(v358_.v359 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v349_.v349 & 1) == 0) {
      goto LABEL_312;
    }
    goto LABEL_311;
  }
  (*(void (**)(__int64))(*(_QWORD*)v209 + 16LL))(v209),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_baf10(v209),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v349_.v349 & 1) != 0) {
  LABEL_311:
    NgxRoutine_430(v349_.v351, v349_.v349 & 0xFFFFFFFFFFFFFFFELL),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_312:
  LOBYTE(v349_.v349) = 0;
  v349_.v350 = nullptr;
  v349_.v351 = nullptr;
  v349_.v352 = 0;
  v349_.v353 = 0;
  v349_.v354 = nullptr;
  v349_.v355 = nullptr;
  v349_.v356 = nullptr;
  v349_.v357 = 0;
  if ((v328 & 2) != 0) {
    v239 = *(_DWORD*)(a3 + 588);
    if (v239 == 1) {
      v248 = 1640;
      if (v26 != 0) {
        v249 = 1672;
      }
      else {
        v248 = 1592;
        v249 = 1624;
      }
      if (v26 != 0) {
        v250 = 1656;
      }
      else {
        v250 = 1608;
      }
      v251 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
             "dfn_3x3_128_032_032_048_032_e5m3_fp16_kernel";
      v349_.v350 = "pdl_1";
      v349_.v351 = (char*)(v333 + v248);
      v252 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
             "dfn_fastpath_3x3_128_032_032_048_032_e5m3_fp16_kernel";
      if (v26 != 0) {
        v251 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
               "dfn_3x3_256_032_032_048_032_e5m3_fp16_kernel";
      }
      else {
        v252 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
               "dfn_fastpath_3x3_128_032_032_048_032_e5m3_fp16_kernel";
      }
      v349_.v354 = v251;
      v349_.v355 = v252;
      v349_.v352 = v333 + v249;
      v349_.v353 = v333 + v250;
      v253 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
             "dfn_mid_3x3_128_032_032_048_032_e5m3_fp16_kernel";
      if (v26 != 0) {
        v253 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
               "dfn_mid_3x3_128_032_032_048_032_e5m3_fp16_kernel";
      }
      v349_.v356 = v253;
    }
    else {
      if (v239 != 0) {
        NgxRoutine_b4b90((__int64)"C:/dvs/git/dirty/git-master_hos/gpu/"
                                  "drv_secured_g/drivers/nvn2/dlss/rel/source/"
                                  "features/dlaa/dltss_network.cpp",
                         1496, (__int64)"CreateConvolutionNetwork",
                         (__int64)"Unknown Output filter type encountered "
                                  "while building dltss network"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v275 = v332;
        v245 = -1160773627;
        goto LABEL_449;
      }
      v240 = 1560;
      if (v26 == 0) {
        v240 = 1528;
      }
      v241 = 1576;
      if (v26 == 0) {
        v241 = 1544;
      }
      v242 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
             "dfn_5x5_256_032_032_048_032_e5m3_fp16_kernel";
      v243 = v333 + v240;
      if (v26 == 0) {
        v242 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
               "dfn_5x5_128_032_032_048_032_e5m3_fp16_kernel";
      }
      v349_.v350 = "pdl_1";
      v349_.v351 = (char*)v243;
      v244 = "dltss_nchw8_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
             "dfn_fastpath_5x5_256_032_032_048_032_e5m3_fp16_kernel";
      v349_.v352 = v333 + v241;
      if (v26 == 0) {
        v244 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_aniso_gaussian_"
               "dfn_fastpath_5x5_128_032_032_048_032_e5m3_fp16_kernel";
      }
      v349_.v354 = v242;
      v349_.v355 = v244;
    }
    v349_.v357 = 0x200000001LL;
    LOBYTE(v349_.v349) = 1;
    v254 = NgxRoutine_420(648),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v255 = (__int64)*a1;
    v256 = v254;
    v347_.v347 = v368_.v368;
    v347_.v348 = v368_.v369;
    if (v368_.v369 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v368_.v369 + 8), 1u,
                                memory_order_relaxed);
    }
    v345_.v345 = v496_.v496;
    v345_.v346 = v496_.v497;
    if (v496_.v497 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v496_.v497 + 8), 1u,
                                memory_order_relaxed);
    }
    v343_.v343 = v360_.v360;
    v343_.v344 = v360_.v361;
    if (v360_.v361 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v360_.v361 + 8), 1u,
                                memory_order_relaxed);
    }
    dltss_network_6a650(v254, v255, &v349_.v349, &v347_.v347, 1, 40, 0,
                        &v345_.v345, &v343_.v343, 2, *(_QWORD*)(a3 + 672), 1,
                        v333, v26, 0, 0),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v334_.v334),
                                               (_QWORD*)(a3 + 168), v256),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v257 = v334_.v334;
    v219 = v334_.v335;
    v258 = v343_.v344;
    v334_.v334 = 0;
    v334_.v335 = 0;
    if (v343_.v344 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v343_.v344 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v258 + 16LL))(v258),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v258),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v259 = v345_.v346;
    if (v345_.v346 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v345_.v346 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v259 + 16LL))(v259),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v259),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v260 = v347_.v348;
    if (v347_.v348 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v347_.v348 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v260 + 16LL))(v260),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v260),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    *(_QWORD*)(a3 + 752) = v257;
    v223 = *(__int64**)(a3 + 728);
    v224 = *(_QWORD*)(a3 + 736) - (_QWORD)v223;
    if (v224 != 0) {
      goto LABEL_329;
    }
  }
  else {
    v349_.v350 = "pdl_1";
    v349_.v351 = (char*)(v333 + 1512);
    v349_.v354 = "dltss_nhwc_bilinear_upsample_conv_1x1_conv_1x1_256_032_032_"
                 "048_032_e5m3_fp16_kernel";
    v349_.v357 = 0x200000001LL;
    v211 = NgxRoutine_420(648),
    v214 = COERCE_AS(__typeof__(v214),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v215 = COERCE_AS(__typeof__(v215),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v216 = COERCE_AS(__typeof__(v216),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v217 = COERCE_AS(__typeof__(v217),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v314 = COERCE_AS(__typeof__(v314),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v315 = COERCE_AS(__typeof__(v315),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v316 = COERCE_AS(__typeof__(v316),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v317 = COERCE_AS(__typeof__(v317),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v212 = (__int64)*a1;
    v213 = v211;
    v341_.v341 = v368_.v368;
    v341_.v342 = v368_.v369;
    if (v368_.v369 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v368_.v369 + 8), 1u,
                                memory_order_relaxed);
    }
    v339_.v339 = v496_.v496;
    v339_.v340 = v496_.v497;
    if (v496_.v497 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v496_.v497 + 8), 1u,
                                memory_order_relaxed);
    }
    v337_.v337 = v360_.v360;
    v337_.v338 = v360_.v361;
    if (v360_.v361 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v360_.v361 + 8), 1u,
                                memory_order_relaxed);
    }
    dltss_network_6a650(v211, v212, &v349_.v349, &v341_.v341, 1, 40, 0,
                        &v339_.v339, &v337_.v337, 2, *(_QWORD*)(a3 + 672), 0,
                        v333, v26, 0, 0),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    nvidia_dlss_rel_source_features_dlaa_6ff80((void*)(&v334_.v334),
                                               (_QWORD*)(a3 + 168), v213),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v218 = v334_.v334;
    v219 = v334_.v335;
    v220 = v337_.v338;
    v334_.v334 = 0;
    v334_.v335 = 0;
    if (v337_.v338 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v337_.v338 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v220 + 16LL))(v220),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v220),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v221 = v339_.v340;
    if (v339_.v340 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v339_.v340 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v221 + 16LL))(v221),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v221),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v222 = v341_.v342;
    if (v341_.v342 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v341_.v342 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v222 + 16LL))(v222),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_baf10(v222),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    *(_QWORD*)(a3 + 760) = v218;
    v223 = *(__int64**)(a3 + 728);
    v224 = *(_QWORD*)(a3 + 736) - (_QWORD)v223;
    if (v224 != 0) {
    LABEL_329:
      v93 = v329;
      v225 = v224 >> 4;
      v226 = v223;
      do {
        v227 = *v226;
        v226 += 2;
        if (*(_DWORD*)(v227 + 128) != 0) {
          v245 = -1160773631;
          NgxRoutine_b4c00((__int64)"C:/dvs/git/dirty/git-master_hos/gpu/"
                                    "drv_secured_g/drivers/nvn2/dlss/rel/"
                                    "source/features/dlaa/dltss_network.cpp",
                           1528, (__int64)"CreateConvolutionNetwork",
                           (__int64)"NVSDK_NGX_Result_FAIL_FeatureNotSupported",
                           v214, v215, v216, v217, v326),
              v214 = COERCE_AS(__typeof__(v214),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v215 = COERCE_AS(__typeof__(v215),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v216 = COERCE_AS(__typeof__(v216),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v217 = COERCE_AS(__typeof__(v217),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v314 = COERCE_AS(__typeof__(v314),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v315 = COERCE_AS(__typeof__(v315),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v316 = COERCE_AS(__typeof__(v316),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v317 = COERCE_AS(__typeof__(v317),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          goto LABEL_445;
        }
        --v225;
      } while (v225 != 0);
      if (*(_BYTE*)(a3 + 68) != 1) {
        goto LABEL_416;
      }
      v228 = 0;
      v229 = 0;
      while (1) {
        v230 = reuseWeightsBias(v223[v228]),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v230 != 1) {
          break;
        }
        v223 = *(__int64**)(a3 + 728);
        ++v229;
        v228 += 2;
        if (v229 >= (__int64)(*(_QWORD*)(a3 + 736) - (_QWORD)v223) >> 4) {
          goto LABEL_436;
        }
      }
      v245 = v230;
      goto LABEL_444;
    }
  }
  if ((*(_BYTE*)(a3 + 68) & 1) != 0) {
  LABEL_436:
    if (*(_BYTE*)(a3 + 2993) == 1) {
      v283 = *(_QWORD*)(NgxRoutine_a9080(*(_QWORD*)(a3 + 672),
                                         (__int64)"enc_0_0_dummy") +
                        32),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v284 = *(_QWORD*)(NgxRoutine_a9080(*(_QWORD*)(a3 + 672),
                                         (__int64)"dec_0_1") +
                        32) +
             v283,
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v285 = vcvtd_n_f64_u64(
          v284 + *(_QWORD*)(NgxRoutine_a9080(*(_QWORD*)(a3 + 672),
                                             (__int64)"pdl_1") +
                            32),
          3u),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v286 = sqrt_plt(v285),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v287 = (unsigned int)ceil_plt(v286 * 0x1.0000000000000p-7) << 7,
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v288 = ceil_plt(v285 / (double)v287 * 0x1.0000000000000p-7),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v287 > 0x4000 || (v289 = (unsigned int)v288 << 7) > 0x4000) {
        *(_BYTE*)(a3 + 2993) = 0;
      }
      else {
        v290 =
            NgxRoutine_a9080(*(_QWORD*)(a3 + 672), (__int64)"networkLayersMem"),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *(_QWORD*)(a3 + 696) = v290;
        nvidia_dlss_a9670(v290, *a1, v287, v289, 2, *(_DWORD*)(a3 + 116),
                          *(_DWORD*)(a3 + 120), 8u),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v291 = "pdl_1";
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"pdl_1",
                         (__int64)"input"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"networkLayersMem",
                         (__int64)"enc_0_0_dummy"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v292 = "pdl_1";
        if ((v210 & 1) == 0) {
          v291 = "enc_0_1_fused";
          NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"pdl_1",
                           (__int64)"enc_0_1_fused"),
              v214 = COERCE_AS(__typeof__(v214),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v215 = COERCE_AS(__typeof__(v215),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v216 = COERCE_AS(__typeof__(v216),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v217 = COERCE_AS(__typeof__(v217),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v314 = COERCE_AS(__typeof__(v314),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v315 = COERCE_AS(__typeof__(v315),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v316 = COERCE_AS(__typeof__(v316),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v317 = COERCE_AS(__typeof__(v317),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v292 = "input";
        }
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"pdl_1",
                         (__int64)"enc_1_0_dummy"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)v292,
                         (__int64)"enc_1_1_fused"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"input",
                         (__int64)"enc_2_0_dummy"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"input",
                         (__int64)"enc_2_1_fused"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"input",
                         (__int64)"enc_3_0_dummy"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"dec_1_1",
                         (__int64)"enc_3_1_fused"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"dec_0_1",
                         (__int64)"enc_4_0_dummy"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"enc_2_1_fused",
                         (__int64)"enc_4_1_fused"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"enc_2_1_fused",
                         (__int64)"dec_4_0"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"enc_2_1_fused",
                         (__int64)"dec_4_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"dec_0_1",
                         (__int64)"dec_3_0"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"enc_3_1_fused",
                         (__int64)"dec_3_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)v291,
                         (__int64)"dec_2_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"enc_1_1_fused",
                         (__int64)"dec_1_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"networkLayersMem",
                         (__int64)"dec_0_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        NgxRoutine_a8ee0(*(_QWORD*)(a3 + 672), (__int64)"networkLayersMem",
                         (__int64)"pdl_1"),
            v214 = COERCE_AS(__typeof__(v214),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v215 = COERCE_AS(__typeof__(v215),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v216 = COERCE_AS(__typeof__(v216),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v217 = COERCE_AS(__typeof__(v217),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v314 = COERCE_AS(__typeof__(v314),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v315 = COERCE_AS(__typeof__(v315),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v316 = COERCE_AS(__typeof__(v316),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v317 = COERCE_AS(__typeof__(v317),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    nvidia_dlss_a9210(*(_QWORD*)(a3 + 672), (__int64)*a1),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v245 = 1;
  LABEL_444:
    v93 = v329;
  LABEL_445:
    v275 = v332;
    goto LABEL_446;
  }
LABEL_416:
  v261 = *(_QWORD*)(*NgxRoutine_977a0() + 8LL * *(unsigned int*)(a3 + 616)),
  v214 = COERCE_AS(__typeof__(v214),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v215 = COERCE_AS(__typeof__(v215),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v216 = COERCE_AS(__typeof__(v216),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v217 = COERCE_AS(__typeof__(v217),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v314 = COERCE_AS(__typeof__(v314),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v315 = COERCE_AS(__typeof__(v315),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v316 = COERCE_AS(__typeof__(v316),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v317 = COERCE_AS(__typeof__(v317),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v334_.v334 = 0;
  v334_.v335 = 0;
  v334_.v336 = 0;
  NGXSetDltssWeights((__int64)&v334_.v334, v261),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v262 = *(_QWORD*)(a3 + 728);
  v263 = v334_.v334;
  if (*(_QWORD*)(a3 + 736) == v262) {
    if (v334_.v334 != 0) {
    LABEL_426:
      v276 = v334_.v335;
      v277 = v263;
      if (v263 != v334_.v335) {
        do {
          v278 = *(_QWORD*)(v276 - 24);
          if (v278 != 0) {
            v279 = *(_QWORD*)(v276 - 8);
            *(_QWORD*)(v276 - 16) = v278;
            NgxRoutine_430(v278, v279 - v278),
                v214 =
                    COERCE_AS(__typeof__(v214),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v215 =
                    COERCE_AS(__typeof__(v215),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v216 =
                    COERCE_AS(__typeof__(v216),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v217 =
                    COERCE_AS(__typeof__(v217),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v314 =
                    COERCE_AS(__typeof__(v314),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v315 =
                    COERCE_AS(__typeof__(v315),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v316 =
                    COERCE_AS(__typeof__(v316),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v317 =
                    COERCE_AS(__typeof__(v317),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v280 = v276 - 48;
          v281 = *(_QWORD*)(v276 - 48);
          if (v281 != 0) {
            v282 = *(_QWORD*)(v276 - 32);
            *(_QWORD*)(v276 - 40) = v281;
            NgxRoutine_430(v281, v282 - v281),
                v214 =
                    COERCE_AS(__typeof__(v214),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v215 =
                    COERCE_AS(__typeof__(v215),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v216 =
                    COERCE_AS(__typeof__(v216),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v217 =
                    COERCE_AS(__typeof__(v217),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v314 =
                    COERCE_AS(__typeof__(v314),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v315 =
                    COERCE_AS(__typeof__(v315),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v316 =
                    COERCE_AS(__typeof__(v316),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v317 =
                    COERCE_AS(__typeof__(v317),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v276 -= 48;
        } while (v280 != v263);
        v277 = v334_.v334;
      }
      v334_.v335 = v263;
      NgxRoutine_430(v277, v334_.v336 - v277),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v210 = v328;
    goto LABEL_436;
  }
  v264 = 0;
  v265 = 0;
  v266 = 0;
  v245 = -1160773631;
  while (1) {
    v267 = *(int**)(v262 + v265);
    if (((*(__int64 (**)(int*, __int64, __int64))(*(_QWORD*)v267 + 32LL))(
             v267, v263 + v264, a5) &
         0xFFF00000) != 0xBAD00000) {
      (*(void (**)(int*, __int64, __int64))(*(_QWORD*)v267 + 40LL))(
          v267, v263 + v264 + 24, a5),
          v214 = COERCE_AS(__typeof__(v214),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v215 = COERCE_AS(__typeof__(v215),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v216 = COERCE_AS(__typeof__(v216),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v217 = COERCE_AS(__typeof__(v217),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v314 = COERCE_AS(__typeof__(v314),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v315 = COERCE_AS(__typeof__(v315),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v316 = COERCE_AS(__typeof__(v316),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v317 = COERCE_AS(__typeof__(v317),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v263 = v334_.v334;
    v268 = v267[61] * (__int64)v267[60] * v267[62] * v267[63];
    v269 = v334_.v334 + v264;
    v270 = v267[73];
    v271 = (__int64)(*(_QWORD*)(v334_.v334 + v264 + 8) -
                     *(_QWORD*)(v334_.v334 + v264)) >>
           1;
    v272 = v267[72];
    if (v271 != v268) {
      v274 = (__int64)(*(_QWORD*)(v269 + 32) - *(_QWORD*)(v269 + 24)) >> 1;
      LODWORD(v273) = v270 * v272 * v267[74] * v267[75];
      goto LABEL_519;
    }
    v273 = v267[74] * (__int64)(v270 * v272) * v267[75];
    v274 = (__int64)(*(_QWORD*)(v269 + 32) - *(_QWORD*)(v269 + 24)) >> 1;
    if (v274 != v273) {
      break;
    }
    v262 = *(_QWORD*)(a3 + 728);
    ++v266;
    v264 += 48;
    v265 += 16;
    if (v266 >= (*(_QWORD*)(a3 + 736) - v262) >> 4) {
      goto LABEL_426;
    }
  }
  LODWORD(v271) = v267[61] * v267[60] * v267[62] * v267[63];
LABEL_519:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/features/dlaa/dltss_network.cpp",
      1551, (__int64)"CreateConvolutionNetwork",
      (__int64)"Layer %d mismatched weights and params, conv->weights: %d, "
               "data.weights : %d, conv->biases: %d, data.biases : %d",
      v266, v268, v271, v273, v274),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_b4c00(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/features/dlaa/dltss_network.cpp",
      1552, (__int64)"CreateConvolutionNetwork",
      (__int64)"NVSDK_NGX_Result_FAIL_FeatureNotSupported", v314, v315, v316,
      v317, v327),
      v214 = COERCE_AS(__typeof__(v214),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v215 = COERCE_AS(__typeof__(v215),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v216 = COERCE_AS(__typeof__(v216),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v217 = COERCE_AS(__typeof__(v217),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v314 = COERCE_AS(__typeof__(v314),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v315 = COERCE_AS(__typeof__(v315),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v316 = COERCE_AS(__typeof__(v316),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v317 = COERCE_AS(__typeof__(v317),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v318 = v334_.v334;
  v93 = v329;
  v275 = v332;
  if (v334_.v334 != 0) {
    v319 = v334_.v335;
    v320 = v334_.v334;
    if (v334_.v334 != v334_.v335) {
      do {
        v321 = *(_QWORD*)(v319 - 24);
        if (v321 != 0) {
          v322 = *(_QWORD*)(v319 - 8);
          *(_QWORD*)(v319 - 16) = v321;
          NgxRoutine_430(v321, v322 - v321),
              v214 = COERCE_AS(__typeof__(v214),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v215 = COERCE_AS(__typeof__(v215),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v216 = COERCE_AS(__typeof__(v216),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v217 = COERCE_AS(__typeof__(v217),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v314 = COERCE_AS(__typeof__(v314),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v315 = COERCE_AS(__typeof__(v315),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v316 = COERCE_AS(__typeof__(v316),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v317 = COERCE_AS(__typeof__(v317),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v323 = v319 - 48;
        v324 = *(_QWORD*)(v319 - 48);
        if (v324 != 0) {
          v325 = *(_QWORD*)(v319 - 32);
          *(_QWORD*)(v319 - 40) = v324;
          NgxRoutine_430(v324, v325 - v324),
              v214 = COERCE_AS(__typeof__(v214),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v215 = COERCE_AS(__typeof__(v215),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v216 = COERCE_AS(__typeof__(v216),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v217 = COERCE_AS(__typeof__(v217),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v314 = COERCE_AS(__typeof__(v314),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v315 = COERCE_AS(__typeof__(v315),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v316 = COERCE_AS(__typeof__(v316),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v317 = COERCE_AS(__typeof__(v317),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v319 -= 48;
      } while (v323 != v318);
      v320 = v334_.v334;
      v93 = v329;
    }
    v334_.v335 = v318;
    NgxRoutine_430(v320, v334_.v336 - v320),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_446:
  if (v219 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v219 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v219 + 16LL))(v219),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v219),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_449:
  v293 = v360_.v361;
  if (v360_.v361 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v360_.v361 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v293 + 16LL))(v293),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v293),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v294 = v368_.v369;
  if (v368_.v369 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v368_.v369 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v294 + 16LL))(v294),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v294),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v295 = v381_.v382;
  if (v381_.v382 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v381_.v382 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v295 + 16LL))(v295),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v295),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v296 = v389_.v390;
  if (v389_.v390 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v389_.v390 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v296 + 16LL))(v296),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v296),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v297 = v402_.v403;
  if (v402_.v403 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v402_.v403 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v297 + 16LL))(v297),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v297),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v298 = v410_.v411;
  if (v410_.v411 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v410_.v411 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v298 + 16LL))(v298),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v298),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v299 = v423_.v424;
  if (v423_.v424 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v423_.v424 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v299 + 16LL))(v299),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v299),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v300 = v429_.v430;
  if (v429_.v430 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v429_.v430 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v300 + 16LL))(v300),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v300),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v301 = v435_.v436;
  if (v435_.v436 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v435_.v436 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v301 + 16LL))(v301),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v301),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v302 = v442_.v443;
  if (v442_.v443 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v442_.v443 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v302 + 16LL))(v302),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v302),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v303 = v448_.v449;
  if (v448_.v449 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v448_.v449 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v303 + 16LL))(v303),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v303),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v304 = v458_.v459;
  if (v458_.v459 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v458_.v459 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v304 + 16LL))(v304),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v304),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v305 = v460_.v461;
  if (v460_.v461 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v460_.v461 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v305 + 16LL))(v305),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v305),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v306 = v466_.v467;
  if (v466_.v467 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v466_.v467 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v306 + 16LL))(v306),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v306),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v307 = v468_.v469;
  if (v468_.v469 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v468_.v469 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v307 + 16LL))(v307),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v307),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v308 = v474_.v475;
  if (v474_.v475 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v474_.v475 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v308 + 16LL))(v308),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v308),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v309 = v476_.v477;
  if (v476_.v477 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v476_.v477 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v309 + 16LL))(v309),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v309),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (v275 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v275 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v275 + 16LL))(v275),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v275),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v310 = v486_.v487;
  if (v486_.v487 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v486_.v487 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v310 + 16LL))(v310),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v310),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v93),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v311 = v496_.v497;
  if (v496_.v497 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v496_.v497 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v311 + 16LL))(v311),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v311),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v312 = v498_.v499;
  if (v498_.v499 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v498_.v499 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v312 + 16LL))(v312),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_baf10(v312),
        v214 = COERCE_AS(__typeof__(v214),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v215 = COERCE_AS(__typeof__(v215),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v216 = COERCE_AS(__typeof__(v216),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v217 = COERCE_AS(__typeof__(v217),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v314 = COERCE_AS(__typeof__(v314),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v315 = COERCE_AS(__typeof__(v315),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v316 = COERCE_AS(__typeof__(v316),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v317 = COERCE_AS(__typeof__(v317),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  return v245;
}

__int64 cornflower_rook_00389_98850()
{
  int v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  NgxData_2b6b550 = (__int64)NgxData_952e68;
  NgxData_2b6b560 = (__int64)NgxData_952e78;
  NgxData_2b6b570 = (__int64)NgxData_952e80;
  NgxData_2b6b580 = (__int64)NgxData_952e88;
  NgxData_2b6b590 = (__int64)NgxData_952e90;
  NgxData_2b6b5a0 = (__int64)NgxData_952e98;
  LODWORD(NgxData_2b6b558) = *NgxData_952e70;
  LODWORD(NgxData_2b6b568) = *NgxData_952ea0[0];
  LODWORD(NgxData_2b6b578) = *NgxData_952ea8[0];
  LODWORD(NgxData_2b6b588) = *NgxData_952eb0[0];
  v0 = *NgxData_952ec0;
  LODWORD(NgxData_2b6b598) = *NgxData_952eb8[0];
  LODWORD(NgxData_2b6b5a8) = v0;
  NgxData_2b6b5b0 = (__int64)NgxData_952ed0;
  LODWORD(NgxData_2b6b5b8) = *NgxData_952ed8;
  NgxData_2b6b5c0 = (__int64)NgxData_952ee0;
  LODWORD(NgxData_2b6b5c8) = *NgxData_952ee8;
  NgxData_2b6b5d0 = (__int64)NgxData_952ef0;
  LODWORD(NgxData_2b6b5d8) = *NgxData_952ef8;
  NgxData_2b6b5e0 = (__int64)NgxData_952f00;
  LODWORD(NgxData_2b6b5e8) = *NgxData_952f08;
  NgxData_2b6b5f0 = (__int64)NgxData_952f10;
  LODWORD(NgxData_2b6b5f8) = *NgxData_952f18;
  NgxData_2b6b600 = (__int64)NgxData_952f20;
  LODWORD(NgxData_2b6b608) = *NgxData_952f28;
  NgxData_2b6b610 = (__int64)NgxData_952f30;
  LODWORD(NgxData_2b6b618) = *NgxData_952f38[0];
  NgxData_2b6b620 = (__int64)NgxData_952ec8;
  LODWORD(NgxData_2b6b628) = *NgxData_952f40[0];
  NgxData_2b6b630 = (__int64)NgxData_952f50;
  LODWORD(NgxData_2b6b638) = *NgxData_952f58;
  NgxData_2b6b640 = (__int64)NgxData_952f60;
  LODWORD(NgxData_2b6b648) = *NgxData_952f68;
  NgxData_2b6b650 = (__int64)NgxData_952f70;
  LODWORD(NgxData_2b6b658) = *NgxData_952f48;
  NgxData_2b6b660 = (__int64)NgxData_952f80;
  LODWORD(NgxData_2b6b668) = *NgxData_952f88;
  NgxData_2b6b670 = (__int64)NgxData_952f90;
  LODWORD(NgxData_2b6b678) = *NgxData_952f98;
  NgxData_2b6b680 = (__int64)NgxData_952fa0;
  LODWORD(NgxData_2b6b688) = *NgxData_952fa8;
  NgxData_2b6b690 = (__int64)NgxData_952fb0;
  LODWORD(NgxData_2b6b698) = *NgxData_952fb8;
  NgxData_2b6b6a0 = (__int64)NgxData_952fc0;
  LODWORD(NgxData_2b6b6a8) = *NgxData_952fc8;
  NgxData_2b6b6b0 = (__int64)NgxData_952fd0;
  LODWORD(NgxData_2b6b6b8) = *NgxData_952fd8;
  NgxData_2b6b6c0 = (__int64)NgxData_952fe0;
  LODWORD(NgxData_2b6b6c8) = *NgxData_952fe8;
  NgxData_2b6b6d0 = (__int64)NgxData_952ff0;
  LODWORD(NgxData_2b6b6d8) = *NgxData_952ff8[0];
  NgxData_2b6b6e0 = (__int64)NgxData_952f78;
  LODWORD(NgxData_2b6b6e8) = *NgxData_953000[0];
  NgxData_2b6b6f0 = (__int64)NgxData_953010;
  LODWORD(NgxData_2b6b6f8) = *NgxData_953018;
  NgxData_2b6b700 = (__int64)NgxData_953020;
  LODWORD(NgxData_2b6b708) = *NgxData_953028;
  NgxData_2b6b710 = (__int64)NgxData_953030;
  LODWORD(NgxData_2b6b718) = *NgxData_953008;
  NgxData_2b6b720 = (__int64)NgxData_953038;
  LODWORD(NgxData_2b6b728) = *NgxData_953040;
  NgxData_2b6b730 = (__int64)NgxData_953048;
  LODWORD(NgxData_2b6b738) = *NgxData_953050;
  NgxData_2b6b740 = (__int64)NgxData_953058;
  LODWORD(NgxData_2b6b748) = *NgxData_953060;
  NgxData_2b6b750 = (__int64)NgxData_953068;
  LODWORD(NgxData_2b6b758) = *NgxData_953070;
  NgxData_2b6b760 = (__int64)NgxData_953078;
  LODWORD(NgxData_2b6b768) = *NgxData_953080;
  v1 = NgxData_952b60[0];
  *NgxData_952b60[0] = (__int64)*NgxData_953088;
  *((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v1) = 0;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v1] = 0;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v1 + 8] = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1) = 0;
  v2 = (__int64*)NgxRoutine_420(544);
  v3 = NgxData_2b6b550;
  v4 = NgxData_2b6b558;
  v5 = NgxData_2b6b560;
  v6 = NgxData_2b6b568;
  *(_QWORD*)((char*)((_UNKNOWN*)0x5CLL) + (_QWORD)v1) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x60LL) + (_QWORD)v1 + 4) = 0;
  *((_BYTE*)((_UNKNOWN*)0x68LL) + (_QWORD)v1) = 0;
  *v2 = v3;
  v2[1] = v4;
  v2[2] = v5;
  v2[3] = v6;
  v7 = NgxData_2b6b580;
  v8 = NgxData_2b6b588;
  v9 = NgxData_2b6b5e0;
  v10 = NgxData_2b6b5e8;
  v11 = NgxData_2b6b578;
  v2[4] = NgxData_2b6b570;
  v2[5] = v11;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v1) =
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/rel/"
      "so"
      "urce/features/dlaa/weights/cornflower_rook_00389/"
      "cornflower_rook_00389.cpp";
  *(_QWORD*)((char*)((_UNKNOWN*)0x54LL) + (_QWORD)v1) = 0x1013CED9168LL;
  v2[6] = v7;
  v2[7] = v8;
  v12 = NgxData_2b6b590;
  v13 = NgxData_2b6b598;
  v2[18] = v9;
  v2[19] = v10;
  v14 = NgxData_2b6b640;
  v15 = NgxData_2b6b648;
  v2[8] = v12;
  v2[9] = v13;
  v16 = NgxData_2b6b5a0;
  v17 = NgxData_2b6b5a8;
  v2[30] = v14;
  v2[31] = v15;
  v18 = NgxData_2b6b660;
  v19 = NgxData_2b6b668;
  v2[10] = v16;
  v2[11] = v17;
  v20 = NgxData_2b6b5b0;
  v21 = NgxData_2b6b5b8;
  v2[34] = v18;
  v2[35] = v19;
  v22 = NgxData_2b6b680;
  v23 = NgxData_2b6b688;
  v2[12] = v20;
  v2[13] = v21;
  v24 = NgxData_2b6b5c0;
  v25 = NgxData_2b6b5c8;
  v2[38] = v22;
  v2[39] = v23;
  v26 = NgxData_2b6b6a0;
  v27 = NgxData_2b6b6a8;
  v2[14] = v24;
  v2[15] = v25;
  v28 = NgxData_2b6b5d0;
  v29 = NgxData_2b6b5d8;
  v2[42] = v26;
  v2[43] = v27;
  v30 = NgxData_2b6b6c0;
  v31 = NgxData_2b6b6c8;
  v2[16] = v28;
  v2[17] = v29;
  v33 = NgxData_2b6b600;
  v32 = NgxData_2b6b608;
  v2[46] = v30;
  v2[47] = v31;
  v34 = NgxData_2b6b6e0;
  v35 = NgxData_2b6b6e8;
  v2[22] = v33;
  v2[23] = v32;
  v37 = NgxData_2b6b5f0;
  v36 = NgxData_2b6b5f8;
  v2[50] = v34;
  v2[51] = v35;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v1) = 0x100000000LL;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v1 + 8) = 1;
  *((_BYTE*)((_UNKNOWN*)0x50LL) + (_QWORD)v1) = 1;
  v2[20] = v37;
  v2[21] = v36;
  v38 = NgxData_2b6b628;
  v2[26] = NgxData_2b6b620;
  v2[27] = v38;
  v39 = NgxData_2b6b618;
  v2[24] = NgxData_2b6b610;
  v2[25] = v39;
  v40 = NgxData_2b6b638;
  v2[28] = NgxData_2b6b630;
  v2[29] = v40;
  v41 = NgxData_2b6b658;
  v2[32] = NgxData_2b6b650;
  v2[33] = v41;
  v42 = NgxData_2b6b678;
  v2[36] = NgxData_2b6b670;
  v2[37] = v42;
  v43 = NgxData_2b6b698;
  v2[40] = NgxData_2b6b690;
  v2[41] = v43;
  v44 = NgxData_2b6b6b8;
  v2[44] = NgxData_2b6b6b0;
  v2[45] = v44;
  v45 = NgxData_2b6b6d8;
  v2[48] = NgxData_2b6b6d0;
  v2[49] = v45;
  v46 = NgxData_2b6b708;
  v2[54] = NgxData_2b6b700;
  v2[55] = v46;
  v47 = NgxData_2b6b6f8;
  v2[52] = NgxData_2b6b6f0;
  v2[53] = v47;
  v48 = NgxData_2b6b728;
  v2[58] = NgxData_2b6b720;
  v2[59] = v48;
  v49 = NgxData_2b6b718;
  v2[56] = NgxData_2b6b710;
  v2[57] = v49;
  v50 = NgxData_2b6b748;
  v2[62] = NgxData_2b6b740;
  v2[63] = v50;
  v51 = NgxData_2b6b738;
  v2[60] = NgxData_2b6b730;
  v2[61] = v51;
  v52 = NgxData_2b6b768;
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[(_QWORD)v1 + 12] = 0;
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[(_QWORD)v1 + 20] = 0x412000003DCCCCCDLL;
  v2[67] = v52;
  v2[66] = NgxData_2b6b760;
  v2[65] = NgxData_2b6b758;
  v2[64] = NgxData_2b6b750;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v1] = v2;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v1 + 8] = v2 + 68;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1) = v2 + 68;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) = 0;
  return NgxRoutine_2b0();
}

#pragma GCC visibility pop
