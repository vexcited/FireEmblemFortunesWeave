#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _QWORD SdkData_d02e88[13];
extern __int64 (*SdkData_e829e8[])();
extern __int64 (*SdkData_e82a70[])();
extern __int64 (*SdkData_e82ae8[])();
extern _UNKNOWN SdkData_e82c40;
extern __int64 (*SdkData_e83040[])();
extern __int64 (*SdkData_e830b8[])();
extern __int64 (*SdkData_e83130[])();
extern __int64 (*SdkData_e831a8[])();
extern __int64 (*SdkData_e83220[])();
extern __int64 (*SdkData_e83298[])();
extern __int64 (*SdkData_e83388[])();
extern __int64 (*SdkData_e83400[])();
extern __int64 (*SdkData_e83478[])();
extern __int64 (*SdkData_e834f0[])();
extern __int64 (*SdkData_e83568[])();
extern __int64 (*SdkData_e835e0[])();
extern __int64 (*SdkData_e83658[])();
extern __int64 (*SdkData_e83838[])();
extern __int64 (*SdkData_e83b80[])();
extern __int64 (*SdkData_e83bf8[])();
extern __int64 (*SdkData_e83c70[])();
extern __int64 (*SdkData_e83ce8[])();
extern __int64 (*SdkData_e83d60[])();
extern __int64 (*SdkData_e83e50[])();
extern __int64 (*SdkData_e83ec8[])();
extern __int64 (*SdkData_e83f40[])();
extern __int64 (*SdkData_e83fb8[])();
extern __int64 (*SdkData_e84030[])();
extern __int64 (*SdkData_e84300[])();
extern __int64 (*SdkData_e84378[])();
extern __int64 (*SdkData_e843f0[])();
extern __int64 (*SdkData_e84468[])();
extern __int64 (*SdkData_e84558[])();
extern __int64 (*SdkData_e845d0[])();
extern __int64 (*SdkData_e84648[])();
extern __int64 (*SdkData_e84750[])();
extern __int64 (*SdkData_e847b0[])();
extern __int64 (*SdkData_e848a0[])();
extern __int64 (*SdkData_e84a80[])();
extern __int64 (*SdkData_e84be8[])();
extern __int64 (*SdkData_e84d50[])();
extern __int64 (*SdkData_e84dc8[])();
extern __int64 (*SdkData_e84e40[])();
extern __int64 (*SdkData_e85200[])();
extern __int64 (*SdkData_e85278[])();
extern __int64 (*SdkData_e852f0[])();
extern __int64 (*SdkData_e85368[])();
extern __int64 (*SdkData_e853e0[])();
extern __int64 (*SdkData_e85458[])();
extern __int64 (*SdkData_e854d0[])();
extern __int64 (*SdkData_e85548[])();
extern __int64 (*SdkData_e85638[])();
extern __int64 (*SdkData_e856b0[])();
extern __int64 SdkData_e89810;
extern __int64 SdkData_e89828;
extern __int64 SdkData_e89830;
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
__int64 SdkRoutine_833d40(_QWORD, _QWORD);
__int64 SdkRoutine_833dc0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_833e70(_QWORD);
__int64 SdkRoutine_8355a0(_QWORD, _QWORD);
__int64 SdkRoutine_835780(_QWORD, _QWORD);
__int64 SdkRoutine_835ee0(_QWORD);
__int64 SdkRoutine_836300(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8363a0(_QWORD, _QWORD);
__int64 SdkRoutine_8364d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8365b0(_QWORD);
__int64 SdkRoutine_8367d0(_QWORD);
__int64 SdkRoutine_836880(_QWORD);
__int64 SdkRoutine_836930(_QWORD);
__int64 SdkRoutine_8369e0(_QWORD);
__int64 SdkRoutine_836a90(_QWORD);
__int64 SdkRoutine_836b40(_QWORD);
__int64 SdkRoutine_836d50(_QWORD);
__int64 SdkRoutine_836e00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_836ea0(_QWORD);
__int64 SdkRoutine_836f50(_QWORD);
__int64 SdkRoutine_837000(_QWORD);
__int64 SdkRoutine_8370b0(_QWORD);
__int64 SdkRoutine_837160(_QWORD, _QWORD);
__int64 SdkRoutine_837600(unsigned __int8**);
__int64 SdkRoutine_837c80(unsigned __int8**, char, __int64, __int64, __int64,
                          __int64, __int64, __int64);
__int64 SdkRoutine_8387c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_838aa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8393e0(_QWORD);
__int64 SdkRoutine_83d850(_QWORD);
__int64 SdkRoutine_83f2c0(_QWORD, _QWORD);
__int64 SdkRoutine_8445e0(_QWORD);
__int64 SdkRoutine_844740(_QWORD);
__int64 SdkRoutine_844820(_QWORD);
__int64 SdkRoutine_847d60(_QWORD);
__int64 SdkRoutine_848050(_QWORD);
__int64 SdkRoutine_8492a0(void);
__int64 SdkRoutine_849340(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_84b330(void (*)(void));
__int64 SdkRoutine_84b820(_QWORD);
void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);
__int64 SdkRoutine_84c4a0(unsigned __int64);
__int64 SdkRoutine_84e290(_QWORD);
__int64 SdkRoutine_84e2a0(_QWORD);
__int64 SdkRoutine_84f3e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_84f5e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_857810(void);
__int64 SdkRoutine_8578d0(_QWORD);
__int64 SdkRoutine_857e60(_QWORD);
__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859610(_QWORD);
__int64 SdkRoutine_87b840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c790(_QWORD);
__int64 SdkRoutine_87c7a0(_QWORD);
__int64 SdkRoutine_87c7b0(_QWORD);
__int64 SdkRoutine_87c8d0(_QWORD);
__int64 SdkRoutine_87c8e0(_QWORD);
__int64 SdkRoutine_87c8f0(_QWORD);
__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d4a0(_QWORD);
__int64 SdkRoutine_87d4c0(_QWORD);
__int64 SdkRoutine_87d520(_QWORD);
__int64 SdkRoutine_87d5a0(_QWORD);
__int64 SdkRoutine_87d5c0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d5d0(_QWORD, _QWORD);
__int64 SdkRoutine_87d5e0(_QWORD);
__int64 SdkRoutine_87d5f0(_QWORD);
__int64 SdkRoutine_87d600(_QWORD);

__int64 SdkHr_8332c0(unsigned __int8** a1)
{
  __int64 v1;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  int v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  __int16 v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  unsigned int v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  int v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  __int64 v46;
  unsigned __int8* v47;
  unsigned __int8* v48;
  unsigned __int8* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8* v53;
  unsigned __int8* v54;
  unsigned int v55;
  int v56;
  unsigned __int8* v57;
  int v58;
  bool v59;
  unsigned int v60;
  __int64 v61;
  unsigned __int8* v62;
  __int64 v63;
  unsigned __int8* v64;
  __int16 v65;
  unsigned __int8* v66;
  _BOOL4 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  unsigned __int8* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int8* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int8* v81;
  unsigned __int8* v82;
  unsigned int v83;
  __int64 v84;
  __int64 v86;
  __int64 v87;
  char v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int8* v95;
  unsigned __int8* v96;
  unsigned __int8* v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  unsigned __int8* v104;
  __int64 v105;
  __int64 v106;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char v121[8];
  unsigned __int64 v122;
  unsigned __int8 v123;
  _BYTE v124[160];

  SdkRoutine_8355a0(v124, a1);
  v3 = *a1;
  v4 = a1[1];
  v5 = v4 - *a1;
  if (v4 == *a1) {
    goto LABEL_14;
  }
  v6 = *v3;
  if (v6 != 71) {
    if (v6 == 84) {
      if (v5 >= 2) {
        v7 = v3[1];
        if (v7 <= 0x52) {
          if (v3[1] > 0x47u) {
            if (v7 == 72) {
              *a1 = v3 + 2;
              if (SdkRoutine_835780(a1, 0) != 0) {
                v8 = SdkRoutine_836ea0(a1);
                goto LABEL_139;
              }
              goto LABEL_153;
            }
            if (v7 == 73) {
              *a1 = v3 + 2;
              if (SdkRoutine_833e70(a1) != 0) {
                v8 = SdkRoutine_8369e0(a1);
                goto LABEL_139;
              }
              goto LABEL_153;
            }
          }
          else {
            if (v7 == 65) {
              *a1 = v3 + 2;
              if (SdkRoutine_835ee0(a1) != 0) {
                v8 = SdkRoutine_8367d0(a1);
                goto LABEL_139;
              }
              goto LABEL_153;
            }
            if (v7 == 67) {
              *a1 = v3 + 2;
              v38 = SdkRoutine_833e70(a1);
              if (v38 != 0) {
                SdkRoutine_833d40(a1, 1);
                if (v39 != 0) {
                  v40 = *a1;
                  if (*a1 != a1[1]) {
                    v42 = *v40;
                    v41 = v40 + 1;
                    if (v42 == 95) {
                      *a1 = v41;
                      v43 = SdkRoutine_833e70(a1);
                      if (v43 != 0) {
                        v8 = SdkRoutine_836e00(a1, v43, v38);
                        goto LABEL_139;
                      }
                    }
                  }
                }
              }
              goto LABEL_153;
            }
          }
        }
        else if (v3[1] <= 0x55u) {
          if (v7 == 83) {
            *a1 = v3 + 2;
            if (SdkRoutine_833e70(a1) != 0) {
              v8 = SdkRoutine_836a90(a1);
              goto LABEL_139;
            }
            goto LABEL_153;
          }
          if (v7 == 84) {
            *a1 = v3 + 2;
            if (SdkRoutine_833e70(a1) != 0) {
              v8 = SdkRoutine_836930(a1);
              goto LABEL_139;
            }
            goto LABEL_153;
          }
        }
        else {
          switch (v7) {
          case 'V':
            *a1 = v3 + 2;
            if (SdkRoutine_833e70(a1) != 0) {
              v8 = SdkRoutine_836880(a1);
              goto LABEL_139;
            }
            goto LABEL_153;
          case 'W':
            *a1 = v3 + 2;
            v94 = SdkRoutine_835780(a1, 0);
            if (v94 != 0) {
              v8 = SdkRoutine_833dc0(a1, "thread-local wrapper routine for ",
                                     v94);
              goto LABEL_139;
            }
            goto LABEL_153;
          case 'c':
            *a1 = v3 + 2;
            if ((SdkRoutine_836b40(a1) & 1) == 0 &&
                (SdkRoutine_836b40(a1) & 1) == 0 && SdkHr_8332c0(a1) != 0) {
              v8 = SdkRoutine_836d50(a1);
            LABEL_139:
              v25 = v8;
              goto LABEL_154;
            }
            goto LABEL_153;
          default:
            break;
          }
        }
      }
      v66 = v3 + 1;
      *a1 = v66;
      if (v4 == v66) {
        v67 = false;
        if ((SdkRoutine_836b40(a1) & 1) != 0) {
          goto LABEL_153;
        }
      }
      else {
        v67 = *v66 == 118;
        if ((SdkRoutine_836b40(a1) & 1) != 0) {
          goto LABEL_153;
        }
      }
      if (SdkHr_8332c0(a1) != 0) {
        if (v67) {
          v8 = SdkRoutine_836f50(a1);
        }
        else {
          v8 = SdkRoutine_837000(a1);
        }
        goto LABEL_139;
      }
    LABEL_153:
      v25 = 0;
      goto LABEL_154;
    }
  LABEL_14:
    v9 = a1[90];
    v10 = a1[91];
    LOWORD(v120) = 0;
    HIDWORD(v120) = 0;
    v121[0] = 0;
    v123 = 0;
    v122 = (v10 - v9) >> 3;
    v11 = SdkRoutine_835780(a1, &v120);
    v12 = v11;
    if (v11 == 0) {
      goto LABEL_153;
    }
    v13 = a1[90];
    v14 = v122;
    v15 = (a1[91] - v13) >> 3;
    if (v122 < v15) {
      v16 = a1[83];
      if (v16 == a1[84]) {
        goto LABEL_153;
      }
      v17 = *(__int64**)v16;
      if (*(_QWORD*)v16 == 0) {
        goto LABEL_153;
      }
      v18 = *(_QWORD*)&v13[8 * v122];
      v19 = *v17;
      v20 = *(_QWORD*)(v18 + 16);
      v21 = (v17[1] - *v17) >> 3;
      if (v20 >= v21) {
        goto LABEL_153;
      }
      v22 = &v13[8 * v122 + 8];
      v23 = ~v122 + v15;
      while (1) {
        *(_QWORD*)(v18 + 24) = *(_QWORD*)(v19 + 8 * v20);
        if (v23 == 0) {
          break;
        }
        v24 = *(_QWORD*)v22;
        v22 += 8;
        v18 = v24;
        --v23;
        v25 = 0;
        v20 = *(_QWORD*)(v24 + 16);
        if (v20 >= v21) {
          goto LABEL_154;
        }
      }
    }
    if (v14 > v15) {
      SdkRoutine_84c1f0("libc++abi: shrinkToSize() can't expand!");
    }
    a1[91] = &v13[8 * v14];
    v34 = *a1;
    v33 = a1[1];
    if (v33 == *a1 || ((v35 = *v34 - 46, v59 = v35 > 0x31,
                        v36 = (1LL << v35) & 0x2000000800001LL, !v59)
                           ? (v37 = v36 == 0)
                           : (v37 = true),
                       !v37)) {
      v25 = v11;
      goto LABEL_154;
    }
    if ((unsigned __int64)(v33 - *a1) >= 0xD &&
        (*(_QWORD*)v34 == 0x6C62616E65396155LL
             ? (v44 = *(_QWORD*)(v34 + 5) == 0x4966695F656C6261LL)
             : (v44 = false),
         v44)) {
      v95 = a1[2];
      v96 = a1[3];
      v97 = v34 + 13;
      v98 = (__int64*)(a1 + 5);
      *a1 = v97;
      v99 = (v96 - v95) >> 3;
      while (v97 == v33 || *v97 != 69) {
        v103 = SdkRoutine_835ee0(a1);
        if (v103 == 0) {
          goto LABEL_153;
        }
        v101 = (__int64*)a1[3];
        if (v101 == (__int64*)a1[4]) {
          v104 = a1[2];
          v105 = v103;
          v1 = (char*)v101 - (char*)v104;
          if (v104 == (unsigned __int8*)v98) {
            v100 = SdkRoutine_8578d0(2 * ((char*)v101 - (char*)v104));
            if (v100 == 0) {
            LABEL_158:
              v31 = (unsigned __int8*)SdkRoutine_857810();
            LABEL_159:
              v110 = SdkRoutine_87c7b0(v31);
              SdkRoutine_8365b0(v124);
              v111 = SdkRoutine_87c790(v110);
              *((_BYTE*)a1 + 778) = v1;
              SdkRoutine_8365b0(v124);
              v112 = SdkRoutine_87c790(v111);
              SdkRoutine_8365b0(v124);
              v113 = SdkRoutine_87c790(v112);
              SdkRoutine_8365b0(v124);
              v114 = SdkRoutine_87c790(v113);
              SdkRoutine_8365b0(v124);
              v115 = SdkRoutine_87c790(v114);
              SdkRoutine_8365b0(v124);
              v116 = SdkRoutine_87c790(v115);
              SdkRoutine_8365b0(v124);
              v117 = SdkRoutine_87c790(v116);
              SdkRoutine_8365b0(v124);
              SdkRoutine_87c790(v117);
              __udf(0);
            }
            if (v101 != v98) {
              v106 = v100;
              SdkRoutine_858a50(v100, v104, v1);
              v100 = v106;
            }
            a1[2] = (unsigned __int8*)v100;
          }
          else {
            v100 = SdkRoutine_859610(a1[2]);
            a1[2] = (unsigned __int8*)v100;
            if (v100 == 0) {
              goto LABEL_158;
            }
          }
          v101 = (__int64*)(v100 + v1);
          v102 = v100 + 8 * (v1 >> 2);
          v103 = v105;
          a1[4] = (unsigned __int8*)v102;
        }
        *v101 = v103;
        v97 = *a1;
        v33 = a1[1];
        a1[3] = (unsigned __int8*)(v101 + 1);
      }
      *a1 = v97 + 1;
      v108 = SdkRoutine_8363a0(a1, v99);
      v45 = SdkRoutine_836300(a1, v108, v109);
      v46 = 0;
      if ((v120 & 1) != 0) {
        goto LABEL_56;
      }
    }
    else {
      v45 = 0;
      v46 = 0;
      if ((v120 & 1) != 0) {
        goto LABEL_56;
      }
    }
    if ((v120 & 0x100) != 0) {
      v46 = SdkRoutine_833e70(a1);
      if (v46 == 0) {
        goto LABEL_153;
      }
    }
  LABEL_56:
    v48 = *a1;
    v47 = a1[1];
    if (*a1 == v47 || (v50 = *v48, v49 = v48 + 1, v50 != 118)) {
      v68 = v123;
      v1 = (__int64)(a1 + 5);
      v119 = v45;
      v69 = a1[3] - a1[2];
      v118 = v46;
      while (1) {
        v70 = SdkRoutine_833e70(a1);
        if (v70 == 0) {
          goto LABEL_153;
        }
        v71 = (__int64*)a1[3];
        if (v69 == (char*)v71 - (char*)a1[2] && v68 != 0) {
          v73 = a1[614];
          v74 = *((_QWORD*)v73 + 1);
          if ((unsigned __int64)(v74 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v31 = (unsigned __int8*)SdkRoutine_8578d0(4096);
            if (v31 == nullptr) {
              goto LABEL_159;
            }
            v74 = 0;
            *(_QWORD*)v31 = v73;
            *((_QWORD*)v31 + 1) = 0;
            v73 = v31;
            a1[614] = v31;
          }
          v75 = v74 + 32;
          v76 = (__int64)&v73[v74];
          *((_QWORD*)v73 + 1) = v75;
          *(_QWORD*)(v76 + 16) = SdkData_e84dc8;
          v76 += 16;
          *(_BYTE*)(v76 + 8) = 87;
          LOWORD(v75) = *(_WORD*)(v76 + 9);
          *(_QWORD*)(v76 + 16) = v70;
          v70 = v76;
          *(_WORD*)(v76 + 9) = v75 & 0xF000 | 0x540;
          v71 = (__int64*)a1[3];
        }
        if (v71 == (__int64*)a1[4]) {
          v77 = a1[2];
          v78 = (char*)v71 - (char*)v77;
          if (v77 == (unsigned __int8*)v1) {
            v79 = SdkRoutine_8578d0(2 * ((char*)v71 - (char*)v77));
            if (v79 == 0) {
              goto LABEL_158;
            }
            if (v71 != (__int64*)v1) {
              v80 = v79;
              SdkRoutine_858a50(v79, v77, v78);
              v79 = v80;
            }
            a1[2] = (unsigned __int8*)v79;
          }
          else {
            v79 = SdkRoutine_859610(a1[2]);
            a1[2] = (unsigned __int8*)v79;
            if (v79 == 0) {
              goto LABEL_158;
            }
          }
          v71 = (__int64*)(v79 + v78);
          a1[4] = (unsigned __int8*)(v79 + 8 * (v78 >> 2));
        }
        *v71 = v70;
        v81 = *a1;
        v82 = a1[1];
        a1[3] = (unsigned __int8*)(v71 + 1);
        if (v82 != v81) {
          v83 = *v81 - 46;
          v59 = v83 > 0x31;
          v84 = (1LL << v83) & 0x2000800800001LL;
          if (v59 || v84 == 0) {
            continue;
          }
        }
        v86 = SdkRoutine_8363a0(a1, v69 >> 3);
        v45 = v119;
        v52 = v87;
        v49 = *a1;
        v47 = a1[1];
        v46 = v118;
        v51 = v86;
        goto LABEL_123;
      }
    }
    v51 = 0;
    v52 = 0;
    *a1 = v49;
  LABEL_123:
    if (v49 == v47 || *v49 != 81) {
      v93 = 0;
    }
    else {
      v88 = *((_BYTE*)a1 + 778);
      v89 = v46;
      v90 = v45;
      v91 = v52;
      v92 = v51;
      *a1 = v49 + 1;
      *((_BYTE*)a1 + 778) = 1;
      v93 = SdkRoutine_8393e0(a1);
      *((_BYTE*)a1 + 778) = v88;
      v51 = v92;
      v52 = v91;
      v45 = v90;
      v46 = v89;
      if (v93 == 0) {
        goto LABEL_153;
      }
    }
    v8 = SdkRoutine_8364d0(a1, v46, v12, v51, v52, v45, v93, (char*)&v120 + 4,
                           v121);
    goto LABEL_139;
  }
  if (v5 < 2) {
    goto LABEL_153;
  }
  v26 = v3[1];
  if (v26 == 73) {
    v120 = 0;
    *a1 = v3 + 2;
    v25 = 0;
    if ((SdkRoutine_837160(a1, &v120) & 1) == 0) {
      v61 = v120;
      if (v120 != 0) {
        v62 = a1[614];
        v63 = *((_QWORD*)v62 + 1);
        if ((unsigned __int64)(v63 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
          v31 = (unsigned __int8*)SdkRoutine_8578d0(4096);
          if (v31 == nullptr) {
            goto LABEL_159;
          }
          v63 = 0;
          *(_QWORD*)v31 = v62;
          *((_QWORD*)v31 + 1) = 0;
          v62 = v31;
          a1[614] = v31;
        }
        *((_QWORD*)v62 + 1) = v63 + 48;
        v64 = &v62[v63];
        *((_QWORD*)v64 + 2) = SdkData_e829e8;
        v25 = (__int64)(v64 + 16);
        *(_BYTE*)(v25 + 8) = 21;
        v65 = *(_WORD*)(v25 + 9);
        *(_QWORD*)(v25 + 32) = v61;
        *(_WORD*)(v25 + 9) = v65 & 0xF000 | 0x540;
        *(_QWORD*)(v25 + 16) = "initializer for module ";
        *(_QWORD*)(v25 + 24) = 23;
      }
    }
    goto LABEL_154;
  }
  if (v26 == 82) {
    *a1 = v3 + 2;
    if (SdkRoutine_835780(a1, 0) == 0) {
      goto LABEL_153;
    }
    v53 = *a1;
    v54 = a1[1];
    if (v54 == *a1 || (v55 = *v53) < 0x30 || v55 >= 0x3A && v55 - 65 > 0x19) {
      v56 = 1;
      if (v53 == v54) {
        goto LABEL_74;
      }
    }
    else {
      do {
        v60 = *v53;
        if (v60 < 0x30) {
          break;
        }
        v59 = v60 >= 0x3A && v60 - 65 > 0x19;
        if (v59) {
          break;
        }
        *a1 = ++v53;
      } while (v53 != v54);
      v56 = 0;
      if (v53 == v54) {
        goto LABEL_74;
      }
    }
    v58 = *v53;
    v57 = v53 + 1;
    if (v58 == 95) {
      *a1 = v57;
      goto LABEL_75;
    }
  LABEL_74:
    if (v56 == 0) {
      goto LABEL_153;
    }
  LABEL_75:
    v8 = SdkRoutine_8370b0(a1);
    goto LABEL_139;
  }
  if (v26 != 86) {
    goto LABEL_153;
  }
  *a1 = v3 + 2;
  v27 = SdkRoutine_835780(a1, 0);
  if (v27 == 0) {
    goto LABEL_153;
  }
  v28 = a1[614];
  v29 = *((_QWORD*)v28 + 1);
  if ((unsigned __int64)(v29 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v30 = v27;
    v31 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v31 == nullptr) {
      goto LABEL_159;
    }
    v29 = 0;
    *(_QWORD*)v31 = v28;
    *((_QWORD*)v31 + 1) = 0;
    v28 = v31;
    a1[614] = v31;
    v27 = v30;
  }
  *((_QWORD*)v28 + 1) = v29 + 48;
  *(_QWORD*)&v28[v29 + 16] = SdkData_e829e8;
  v25 = (__int64)&v28[v29 + 16];
  *(_BYTE*)(v25 + 8) = 21;
  v32 = *(_WORD*)&v28[v29 + 25];
  *(_QWORD*)(v25 + 32) = v27;
  *(_WORD*)(v25 + 9) = v32 & 0xF000 | 0x540;
  *(_QWORD*)(v25 + 16) = "guard variable for ";
  *(_QWORD*)(v25 + 24) = 19;
LABEL_154:
  SdkRoutine_8365b0(v124);
  return v25;
}

char* SdkHr_833dc0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  __int64 v10;
  __int16 v11;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v9 = (char*)v3 + v6;
  v3[1] = v6 + 48;
  v10 = SdkRoutine_857e60(a2);
  *((_QWORD*)v9 + 2) = SdkData_e829e8;
  v9 += 16;
  v9[8] = 21;
  v11 = *(_WORD*)(v9 + 9);
  *((_QWORD*)v9 + 2) = a2;
  *((_QWORD*)v9 + 3) = v10;
  *((_QWORD*)v9 + 4) = a3;
  *(_WORD*)(v9 + 9) = v11 & 0xF000 | 0x540;
  return v9;
}

__int64 SdkHr_836300(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84d50;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 10;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_8363a0(_QWORD* a1, unsigned __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v9 = a1[2];
  v10 = a1[3];
  v11 = (v10 - v9) >> 3;
  if (a2 > v11) {
    SdkRoutine_84c1f0("libc++abi: ");
  }
  v12 = (_QWORD*)a1[614];
  v13 = v9 + 8 * a2;
  v16 = ((_DWORD)v10 - (_DWORD)v13 + 15) & 0xFFFFFFF0;
  v17 = v12[1];
  if (v17 + v16 >= 0xFF0) {
    if (v16 >= 0xFF1) {
      v18 = (_QWORD*)SdkRoutine_8578d0(v16 + 16);
      if (v18 != nullptr) {
        *v18 = *v12;
        v18[1] = 0;
        *v12 = v18;
        v19 = (__int64)(v18 + 2);
        if (v10 == v13) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    LABEL_15:
      v21 = SdkRoutine_87c7b0(v18);
      return SdkRoutine_8364d0(v21, v22, v23, v24, v25, v26, v27, v28, a9);
    }
    v18 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v18 == nullptr) {
      goto LABEL_15;
    }
    v17 = 0;
    *v18 = v12;
    v18[1] = 0;
    v12 = v18;
    a1[614] = v18;
  }
  v12[1] = v17 + v16;
  v19 = (__int64)v12 + v17 + 16;
  if (v10 != v13) {
  LABEL_10:
    SdkRoutine_858a50(v19, v13, v10 - v13);
    v9 = a1[2];
    v11 = (a1[3] - v9) >> 3;
  }
LABEL_11:
  if (a2 > v11) {
    SdkRoutine_84c1f0("libc++abi: shrinkToSize() can't expand!");
  }
  a1[3] = v9 + 8 * a2;
  return v19;
}

__int64 SdkHr_8364d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, int* a8, char* a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  int v21;
  char v22;
  __int16 v23;
  __int64 v24;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4000) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v19 = (_QWORD*)SdkRoutine_8578d0(4096);
  if (v19 != nullptr) {
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  LABEL_4:
    v9[1] = v17 + 80;
    *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e84e40;
    result = (__int64)v9 + v17 + 16;
    v21 = *a8;
    v22 = *a9;
    *(_BYTE*)(result + 8) = 19;
    v23 = *(_WORD*)(result + 9);
    *(_QWORD*)(result + 16) = a2;
    *(_QWORD*)(result + 24) = a3;
    *(_QWORD*)(result + 32) = a4;
    *(_QWORD*)(result + 40) = a5;
    *(_QWORD*)(result + 48) = a6;
    *(_QWORD*)(result + 56) = a7;
    *(_DWORD*)(result + 64) = v21;
    *(_BYTE*)(result + 68) = v22;
    *(_WORD*)(result + 9) = v23 & 0xF000 | 0x100;
    return result;
  }
  v24 = SdkRoutine_87c7b0(0);
  return SdkRoutine_8365b0(v24);
}

__int64 SdkHr_8367d0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "template parameter object for ";
  *(_QWORD*)(result + 24) = 30;
  return result;
}

__int64 SdkHr_836880(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "vtable for ";
  *(_QWORD*)(result + 24) = 11;
  return result;
}

__int64 SdkHr_836930(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "VTT for ";
  *(_QWORD*)(result + 24) = 8;
  return result;
}

__int64 SdkHr_8369e0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "typeinfo for ";
  *(_QWORD*)(result + 24) = 13;
  return result;
}

__int64 SdkHr_836a90(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "typeinfo name for ";
  *(_QWORD*)(result + 24) = 18;
  return result;
}

__int64 SdkHr_836d50(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "covariant return thunk to ";
  *(_QWORD*)(result + 24) = 26;
  return result;
}

__int64 SdkHr_836e00(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e82a70;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 22;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_836ea0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "thread-local initialization routine for ";
  *(_QWORD*)(result + 24) = 40;
  return result;
}

__int64 SdkHr_836f50(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "virtual thunk to ";
  *(_QWORD*)(result + 24) = 17;
  return result;
}

__int64 SdkHr_8370b0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "reference temporary for ";
  *(_QWORD*)(result + 24) = 24;
  return result;
}

__int64 SdkHr_837600(unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  bool v12;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8** v15;
  unsigned __int8* v16;
  __int64 result;
  __int16 v18;

  v2 = *a1;
  v1 = a1[1];
  if (v1 != *a1 && (unsigned int)*v2 - 58 >= 0xFFFFFFF6) {
    v3 = (const char*)(v2 + 1);
    v4 = 0;
    v5 = v2 + 1;
    do {
      *a1 = v5;
      v6 = v3;
      v7 = v4;
      v8 = v5;
      v9 = *(v5 - 1);
      v4 = v9 + 10 * v4 - 48;
      if (v5 == v1) {
        break;
      }
      ++v5;
      ++v3;
    } while ((unsigned int)*v8 - 48 <= 9);
    if (v4 - 1 < v1 - (unsigned __int8*)v6) {
      *a1 = &v8[10 * v7 - 48 + v9];
      if (v4 >= 0xA && ((v10 = *(_QWORD*)v8, v11 = *((unsigned __int16*)v8 + 4),
                         v10 == 0x5F4C41424F4C475FLL)
                            ? (v12 = v11 == 20063)
                            : (v12 = false),
                        v12)) {
        v13 = a1[614];
        v14 = *((_QWORD*)v13 + 1);
        if ((unsigned __int64)(v14 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
          v6 = "(anonymous namespace)";
          v4 = 21;
          goto LABEL_16;
        }
        v15 = a1;
        v16 = (unsigned __int8*)SdkRoutine_8578d0(4096);
        if (v16 != nullptr) {
          v14 = 0;
          *(_QWORD*)v16 = v13;
          *((_QWORD*)v16 + 1) = 0;
          v4 = 21;
          v13 = v16;
          v6 = "(anonymous namespace)";
          goto LABEL_15;
        }
      }
      else {
        v13 = a1[614];
        v14 = *((_QWORD*)v13 + 1);
        if ((unsigned __int64)(v14 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
        LABEL_16:
          *((_QWORD*)v13 + 1) = v14 + 32;
          *(_QWORD*)&v13[v14 + 16] = SdkData_e82ae8;
          result = (__int64)&v13[v14 + 16];
          *(_BYTE*)(result + 8) = 8;
          v18 = *(_WORD*)&v13[v14 + 25];
          *(_QWORD*)(result + 16) = v6;
          *(_QWORD*)(result + 24) = v4;
          *(_WORD*)(result + 9) = v18 & 0xF000 | 0x540;
          return result;
        }
        v15 = a1;
        v16 = (unsigned __int8*)SdkRoutine_8578d0(4096);
        if (v16 != nullptr) {
          v14 = 0;
          *(_QWORD*)v16 = v13;
          *((_QWORD*)v16 + 1) = 0;
          v13 = v16;
        LABEL_15:
          v15[614] = v16;
          goto LABEL_16;
        }
      }
      SdkRoutine_87c7b0(v16);
      __udf(0);
    }
  }
  return 0;
}

char* SdkHr_8377c0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = (char*)v2 + v4;
  v2[1] = v4 + 32;
  v8 = SdkRoutine_857e60(a2);
  *((_QWORD*)v7 + 2) = SdkData_e82ae8;
  v7 += 16;
  v7[8] = 8;
  v9 = *(_WORD*)(v7 + 9);
  *((_QWORD*)v7 + 2) = a2;
  *((_QWORD*)v7 + 3) = v8;
  *(_WORD*)(v7 + 9) = v9 & 0xF000 | 0x540;
  return v7;
}

__int64 SdkHr_837870(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int64 v8;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e82ae8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 8;
  v8 = a2[1];
  v9 = *(_WORD*)((_BYTE*)v2 + v4 + 25) & 0xF000;
  *(_QWORD*)(result + 16) = *a2;
  *(_QWORD*)(result + 24) = v8;
  *(_WORD*)(result + 9) = v9 | 0x540;
  return result;
}

__int64 SdkHr_837af0(__int64 a1, __int64 a2, _BYTE* a3, __int64 a4)
{
  _WORD* v4;
  _WORD* v5;
  char* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;

  v4 = *(_WORD**)a1;
  v5 = *(_WORD**)(a1 + 8);
  if ((unsigned __int64)v5 - *(_QWORD*)a1 >= 2 && *v4 == 29779) {
    v13 = *(_QWORD**)(a1 + 4912);
    *(_QWORD*)a1 = v4 + 1;
    v14 = v13[1];
    if ((unsigned __int64)(v14 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v15 = a1;
      v16 = a3;
      v17 = a2;
      v18 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v18 == nullptr) {
        SdkRoutine_87c7b0(0);
        __udf(0);
      }
      v19 = v18;
      v14 = 0;
      *v18 = v13;
      v18[1] = 0;
      v13 = v18;
      a1 = v15;
      *(_QWORD*)(v15 + 4912) = v19;
      a2 = v17;
      a3 = v16;
    }
    v13[1] = v14 + 32;
    v20 = (char*)v13 + v14;
    *((_QWORD*)v20 + 2) = SdkData_e82ae8;
    v6 = v20 + 16;
    v6[8] = 8;
    *(_WORD*)(v6 + 9) = *(_WORD*)(v6 + 9) & 0xF000 | 0x540;
    *((_QWORD*)v6 + 2) = "std";
    *((_QWORD*)v6 + 3) = 3;
    v4 = *(_WORD**)a1;
    if (*(_QWORD*)(a1 + 8) == *(_QWORD*)a1) {
      goto LABEL_13;
    }
  }
  else {
    v6 = nullptr;
    if (v5 == v4) {
    LABEL_13:
      v11 = 0;
      v12 = v6;
      return SdkRoutine_838aa0(a1, a2, v12, v11);
    }
  }
  if (*(_BYTE*)v4 != 83) {
    goto LABEL_13;
  }
  v7 = a3;
  v8 = a2;
  v9 = a1;
  result = SdkRoutine_8387c0(a1, a2, a3, a4);
  v11 = result;
  if (result == 0) {
    return v11;
  }
  if (*(_BYTE*)(result + 8) == 27) {
    a2 = v8;
    a1 = v9;
    v12 = v6;
    return SdkRoutine_838aa0(a1, a2, v12, v11);
  }
  if (v6 != nullptr) {
    return 0;
  }
  *v7 = 1;
  return result;
}

__int64 SdkHr_838200(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84be8;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 45;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_838670(unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  _BYTE* v3;
  __int64 result;
  unsigned __int8* v6;
  unsigned __int8* v7;
  int v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2 && *v1 == 68) {
    v3 = v1 + 1;
    *a1 = v1 + 1;
    if (v1 + 1 != v2 && (*v3 == 116 || *v3 == 84)) {
      *a1 = v1 + 2;
      result = SdkRoutine_8393e0(a1);
      if (result == 0) {
        return result;
      }
      v6 = *a1;
      if (*a1 != a1[1]) {
        v8 = *v6;
        v7 = v6 + 1;
        if (v8 == 69) {
          v9 = a1[614];
          *a1 = v7;
          v10 = *((_QWORD*)v9 + 1);
          if ((unsigned __int64)(v10 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
            v11 = result;
            v12 = (unsigned __int8*)SdkRoutine_8578d0(4096);
            if (v12 == nullptr) {
              SdkRoutine_87c7b0(0);
              __udf(0);
            }
            v10 = 0;
            *(_QWORD*)v12 = v9;
            *((_QWORD*)v12 + 1) = 0;
            v9 = v12;
            a1[614] = v12;
            result = v11;
          }
          v13 = v10 + 64;
          v14 = (__int64)&v9[v10];
          *((_QWORD*)v9 + 1) = v13;
          *(_QWORD*)(v14 + 16) = SdkData_e83568;
          v14 += 16;
          *(_BYTE*)(v14 + 8) = 60;
          LOWORD(v13) = *(_WORD*)(v14 + 9);
          *(_QWORD*)(v14 + 32) = result;
          *(_QWORD*)(v14 + 40) = 0;
          result = v14;
          *(_QWORD*)(v14 + 48) = 0;
          *(_WORD*)(v14 + 9) = v13 & 0xF000 | 0x540;
          *(_QWORD*)(v14 + 16) = "decltype";
          *(_QWORD*)(v14 + 24) = 8;
          return result;
        }
      }
    }
  }
  return 0;
}

__int64 SdkHr_83a7f0(__int64 a1, __int64 a2, __int64* a3, char a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int16 v14;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v10 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 48;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e83130;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 56;
  v12 = *a3;
  v13 = a3[1];
  v14 = *(_WORD*)(result + 9) & 0xF000;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v12;
  *(_QWORD*)(result + 32) = v13;
  *(_WORD*)(result + 9) = v14 & 0xFFC0 | a4 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83a8b0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v10 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 32;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e831a8;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 55;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v12 & 0xF000 | a4 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83a960(__int64 a1, __int64 a2, __int64* a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int16 v16;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83220;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 58;
  v14 = *a3;
  v15 = a3[1];
  v16 = *(_WORD*)(result + 9) & 0xF000;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v14;
  *(_QWORD*)(result + 32) = v15;
  *(_QWORD*)(result + 40) = a4;
  *(_WORD*)(result + 9) = v16 & 0xFFC0 | a5 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83aa20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, char a7, char a8, char a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  __int16 v21;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v19 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v19 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  }
  v9[1] = v17 + 64;
  *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e83298;
  result = (__int64)v9 + v17 + 16;
  *(_BYTE*)(result + 8) = 64;
  v21 = *(_WORD*)((char*)v9 + v17 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_QWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 48) = a6;
  *(_WORD*)(result + 9) = v21 & 0xF000 | a9 & 0x3F | 0x540;
  *(_BYTE*)(result + 56) = a7 & 1;
  *(_BYTE*)(result + 57) = a8 & 1;
  return result;
}

__int64 SdkHr_83ab10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                     char a6)
{
  _QWORD* v6;
  __int64 v12;
  _QWORD* v14;
  __int64 result;
  __int16 v16;

  v6 = *(_QWORD**)(a1 + 4912);
  v12 = v6[1];
  if ((unsigned __int64)(v12 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v14 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v14 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v12 = 0;
    *v14 = v6;
    v14[1] = 0;
    v6 = v14;
    *(_QWORD*)(a1 + 4912) = v14;
  }
  v6[1] = v12 + 48;
  *(_QWORD*)((char*)v6 + v12 + 16) = SdkData_e83388;
  result = (__int64)v6 + v12 + 16;
  *(_BYTE*)(result + 8) = 63;
  v16 = *(_WORD*)((char*)v6 + v12 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v16 & 0xF000 | a6 & 0x3F | 0x540;
  *(_BYTE*)(result + 40) = a5 & 1;
  return result;
}

__int64 SdkHr_83abe0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83400;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 68;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83aca0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83478;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 57;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83ad60(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;
  __int64 v15;
  __int64 v16;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e834f0;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 61;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  v15 = *a2;
  v16 = a2[1];
  *(_QWORD*)(result + 32) = a3;
  *(_QWORD*)(result + 40) = a4;
  *(_QWORD*)(result + 16) = v15;
  *(_QWORD*)(result + 24) = v16;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83bf80(__int64 a1)
{
  unsigned __int8* v1;
  int v2;
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int16 v10;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int16 v16;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;

  v1 = *(unsigned __int8**)a1;
  if (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1 < 2u || *v1 != 100) {
    return SdkRoutine_8393e0(a1);
  }
  v2 = v1[1];
  if (v2 != 88) {
    if (v2 == 120) {
      *(_QWORD*)a1 = v1 + 2;
      result = SdkRoutine_8393e0(a1);
      if (result != 0) {
        v12 = result;
        result = SdkHr_83bf80(a1);
        if (result != 0) {
          v13 = *(_QWORD**)(a1 + 4912);
          v14 = result;
          v15 = v13[1];
          if ((unsigned __int64)(v15 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
            v9 = (_QWORD*)SdkRoutine_8578d0(4096);
            if (v9 == nullptr) {
              goto LABEL_27;
            }
            v15 = 0;
            *v9 = v13;
            v9[1] = 0;
            v13 = v9;
            *(_QWORD*)(a1 + 4912) = v9;
          }
          v13[1] = v15 + 48;
          *(_QWORD*)((char*)v13 + v15 + 16) = SdkData_e83ec8;
          result = (__int64)v13 + v15 + 16;
          *(_BYTE*)(result + 8) = 81;
          v16 = *(_WORD*)((char*)v13 + v15 + 25);
          *(_QWORD*)(result + 16) = v12;
          *(_QWORD*)(result + 24) = v14;
          *(_WORD*)(result + 9) = v16 & 0xF000 | 0x540;
          *(_BYTE*)(result + 32) = 1;
          return result;
        }
      }
      return result;
    }
    if (v2 == 105) {
      *(_QWORD*)a1 = v1 + 2;
      result = SdkRoutine_837600((unsigned __int8**)a1);
      if (result != 0) {
        v5 = result;
        result = SdkHr_83bf80(a1);
        if (result != 0) {
          v6 = *(_QWORD**)(a1 + 4912);
          v7 = result;
          v8 = v6[1];
          if ((unsigned __int64)(v8 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
          LABEL_11:
            v6[1] = v8 + 48;
            *(_QWORD*)((char*)v6 + v8 + 16) = SdkData_e83ec8;
            result = (__int64)v6 + v8 + 16;
            *(_BYTE*)(result + 8) = 81;
            v10 = *(_WORD*)((char*)v6 + v8 + 25);
            *(_QWORD*)(result + 16) = v5;
            *(_QWORD*)(result + 24) = v7;
            *(_BYTE*)(result + 32) = 0;
            *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
            return result;
          }
          v9 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v9 != nullptr) {
            v8 = 0;
            *v9 = v6;
            v9[1] = 0;
            v6 = v9;
            *(_QWORD*)(a1 + 4912) = v9;
            goto LABEL_11;
          }
        LABEL_27:
          SdkRoutine_87c7b0(v9);
          __udf(0);
        }
      }
      return result;
    }
    return SdkRoutine_8393e0(a1);
  }
  *(_QWORD*)a1 = v1 + 2;
  result = SdkRoutine_8393e0(a1);
  if (result != 0) {
    v18 = result;
    result = SdkRoutine_8393e0(a1);
    if (result != 0) {
      v19 = result;
      result = SdkHr_83bf80(a1);
      if (result != 0) {
        v20 = *(_QWORD**)(a1 + 4912);
        v21 = result;
        v22 = v20[1];
        if ((unsigned __int64)(v22 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
          v9 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v9 == nullptr) {
            goto LABEL_27;
          }
          v22 = 0;
          *v9 = v20;
          v9[1] = 0;
          v20 = v9;
          *(_QWORD*)(a1 + 4912) = v9;
        }
        v20[1] = v22 + 48;
        *(_QWORD*)((char*)v20 + v22 + 16) = SdkData_e83f40;
        result = (__int64)v20 + v22 + 16;
        *(_BYTE*)(result + 8) = 82;
        v23 = *(_WORD*)((char*)v20 + v22 + 25);
        *(_QWORD*)(result + 16) = v18;
        *(_QWORD*)(result + 24) = v19;
        *(_QWORD*)(result + 32) = v21;
        *(_WORD*)(result + 9) = v23 & 0xF000 | 0x540;
      }
    }
  }
  return result;
}

__int64 SdkHr_83c200(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int16 v22;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v8 = (_QWORD*)SdkRoutine_8578d0(4096);
  if (v8 != nullptr) {
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  LABEL_4:
    v3[1] = v6 + 48;
    *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83fb8;
    result = (__int64)v3 + v6 + 16;
    *(_BYTE*)(result + 8) = 70;
    v10 = *(_WORD*)((char*)v3 + v6 + 25);
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = a2;
    *(_QWORD*)(result + 32) = a3;
    *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
    return result;
  }
  v11 = SdkRoutine_87c7b0(0);
  result = SdkRoutine_833e70(v11);
  if (result != 0) {
    v12 = result;
    result = SdkRoutine_8393e0(v11);
    if (result != 0) {
      v14 = *(_BYTE**)v11;
      v13 = *(_BYTE**)(v11 + 8);
      if (*(_BYTE**)v11 == v13) {
        v15 = *(_BYTE**)v11;
      }
      else {
        v15 = *(_BYTE**)v11;
        if (*v14 == 110) {
          v15 = v14 + 1;
          *(_QWORD*)v11 = v14 + 1;
        }
        if (v13 != v15 && (unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
          while ((unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
            *(_QWORD*)v11 = ++v15;
            if (v15 == v13) {
              return 0;
            }
          }
          v16 = v15 - v14;
          if (v15 == v13) {
            return 0;
          }
        LABEL_18:
          if (*v15 == 69) {
            v17 = *(_QWORD**)(v11 + 4912);
            *(_QWORD*)v11 = v15 + 1;
            v18 = v17[1];
            if ((unsigned __int64)(v18 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
              v19 = result;
              v20 = (_QWORD*)SdkRoutine_8578d0(4096);
              if (v20 == nullptr) {
                SdkRoutine_87c7b0(0);
                __udf(0);
              }
              v18 = 0;
              *v20 = v17;
              v20[1] = 0;
              v17 = v20;
              *(_QWORD*)(v11 + 4912) = v20;
              result = v19;
            }
            v17[1] = v18 + 48;
            *(_QWORD*)((char*)v17 + v18 + 16) = SdkData_e84030;
            v21 = (__int64)v17 + v18 + 16;
            *(_BYTE*)(v21 + 8) = 69;
            v22 = *(_WORD*)((char*)v17 + v18 + 25);
            *(_QWORD*)(v21 + 16) = v12;
            *(_QWORD*)(v21 + 24) = result;
            result = v21;
            *(_QWORD*)(v21 + 32) = v14;
            *(_QWORD*)(v21 + 40) = v16;
            *(_WORD*)(v21 + 9) = v22 & 0xF000 | 0x542;
            return result;
          }
          return 0;
        }
      }
      v14 = nullptr;
      v16 = 0;
      if (v15 == v13) {
        return 0;
      }
      goto LABEL_18;
    }
  }
  return result;
}

__int64 SdkHr_83c430(__int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 64;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83568;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 60;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_WORD*)(result + 9) = v10 & 0xF000 | a3 & 0x3F | 0x540;
  *(_QWORD*)(result + 16) = "noexcept ";
  *(_QWORD*)(result + 24) = 9;
  return result;
}

__int64 SdkHr_83cdb0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83e50;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 42;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83ce50(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e84300;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 62;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83cef0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 64;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83568;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 60;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "sizeof... ";
  *(_QWORD*)(result + 24) = 10;
  return result;
}

__int64 SdkHr_83cfa0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84378;
  result = (__int64)v3 + v6 + 16;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_BYTE*)(result + 8) = 0;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83d040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v10 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 48;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e83fb8;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 70;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83d0f0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e843f0;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 72;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83d1a0(__int64 a1, char a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v6;
  unsigned __int8* v8;
  int v9;
  __int64 result;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  unsigned __int8* v39;
  int v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;

  v2 = *(unsigned __int8**)a1;
  v3 = *(unsigned __int8**)(a1 + 8);
  v6 = (unsigned __int64)&v3[-*(_QWORD*)a1];
  if (v6 >= 3) {
    if (*(_WORD*)v2 == 29299 && v2[2] == 78) {
      *(_QWORD*)a1 = v2 + 3;
      result = SdkRoutine_8445e0(a1);
      if (result == 0) {
        return result;
      }
      v18 = result;
      if (*(_QWORD*)(a1 + 8) != *(_QWORD*)a1 && **(_BYTE**)a1 == 73) {
        result = SdkRoutine_837c80((unsigned __int8**)a1, 0, v25, v26, v27, v28,
                                   v29, v30);
        if (result != 0) {
          v31 = *(_QWORD**)(a1 + 4912);
          v32 = v31[1];
          if ((unsigned __int64)(v32 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v33 = result;
            v14 = (_QWORD*)SdkRoutine_8578d0(4096);
            if (v14 == nullptr) {
              goto LABEL_80;
            }
            v32 = 0;
            *v14 = v31;
            v14[1] = 0;
            v31 = v14;
            *(_QWORD*)(a1 + 4912) = v14;
            result = v33;
          }
          v34 = v32 + 32;
          v35 = (__int64)v31 + v32;
          v31[1] = v34;
          *(_QWORD*)(v35 + 16) = SdkData_e84be8;
          v35 += 16;
          *(_BYTE*)(v35 + 8) = 45;
          LOWORD(v34) = *(_WORD*)(v35 + 9);
          *(_QWORD*)(v35 + 16) = v18;
          *(_QWORD*)(v35 + 24) = result;
          v18 = v35;
          *(_WORD*)(v35 + 9) = v34 & 0xF000 | 0x540;
          goto LABEL_43;
        }
        return result;
      }
    LABEL_43:
      while (1) {
        v38 = *(unsigned __int8**)a1;
        if (*(_QWORD*)a1 != *(_QWORD*)(a1 + 8)) {
          v40 = *v38;
          v39 = v38 + 1;
          if (v40 == 69) {
            break;
          }
        }
        result = SdkRoutine_844740(a1);
        if (result == 0) {
          return result;
        }
        v41 = *(_QWORD**)(a1 + 4912);
        v42 = result;
        v43 = v41[1];
        if ((unsigned __int64)(v43 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v14 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v14 == nullptr) {
            goto LABEL_80;
          }
          v43 = 0;
          *v14 = v41;
          v14[1] = 0;
          v41 = v14;
          *(_QWORD*)(a1 + 4912) = v14;
        }
        v36 = v43 + 32;
        v37 = (__int64)v41 + v43;
        v41[1] = v36;
        *(_QWORD*)(v37 + 16) = SdkData_e84468;
        v37 += 16;
        LOWORD(v36) = *(_WORD*)(v37 + 9);
        *(_BYTE*)(v37 + 8) = 23;
        *(_QWORD*)(v37 + 16) = v18;
        *(_QWORD*)(v37 + 24) = v42;
        v18 = v37;
        *(_WORD*)(v37 + 9) = v36 & 0xF000 | 0x540;
      }
      *(_QWORD*)a1 = v39;
      result = SdkRoutine_844820(a1);
      if (result == 0) {
        return result;
      }
      v55 = *(_QWORD**)(a1 + 4912);
      v56 = result;
      v57 = v55[1];
      if ((unsigned __int64)(v57 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v14 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v14 == nullptr) {
          goto LABEL_80;
        }
        v57 = 0;
        *v14 = v55;
        v14[1] = 0;
        v55 = v14;
        *(_QWORD*)(a1 + 4912) = v14;
      }
      v55[1] = v57 + 32;
      *(_QWORD*)((char*)v55 + v57 + 16) = SdkData_e84468;
      result = (__int64)v55 + v57 + 16;
      goto LABEL_78;
    }
  }
  else if (v6 != 2) {
    goto LABEL_9;
  }
  v9 = *(unsigned __int16*)v2;
  v8 = v2 + 2;
  if (v9 == 29299) {
    *(_QWORD*)a1 = v8;
    if (v3 != v8 && (unsigned int)*v8 - 48 <= 9) {
      result = SdkRoutine_844740(a1);
      if (result == 0) {
        return result;
      }
      v17 = result;
      if ((a2 & 1) != 0) {
        v18 = 0;
        while (1) {
          v19 = *(_QWORD**)(a1 + 4912);
          v20 = v19[1];
          if (v18 != 0) {
            if ((unsigned __int64)(v20 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
              v14 = (_QWORD*)SdkRoutine_8578d0(4096);
              if (v14 == nullptr) {
                goto LABEL_80;
              }
              v20 = 0;
              *v14 = v19;
              v14[1] = 0;
              v19 = v14;
              *(_QWORD*)(a1 + 4912) = v14;
            }
            v21 = v20 + 32;
            v22 = (__int64)v19 + v20;
            v19[1] = v21;
            *(_QWORD*)(v22 + 16) = SdkData_e84468;
            v22 += 16;
            LOWORD(v21) = *(_WORD*)(v22 + 9);
            *(_BYTE*)(v22 + 8) = 23;
            *(_QWORD*)(v22 + 16) = v18;
            *(_QWORD*)(v22 + 24) = v17;
            v18 = v22;
            *(_WORD*)(v22 + 9) = v21 & 0xF000 | 0x540;
            v23 = *(unsigned __int8**)a1;
            if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
              goto LABEL_20;
            }
          }
          else {
            if ((unsigned __int64)(v20 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
              v14 = (_QWORD*)SdkRoutine_8578d0(4096);
              if (v14 == nullptr) {
                goto LABEL_80;
              }
              v20 = 0;
              *v14 = v19;
              v14[1] = 0;
              v19 = v14;
              *(_QWORD*)(a1 + 4912) = v14;
            }
            v19[1] = v20 + 32;
            *(_QWORD*)((char*)v19 + v20 + 16) = SdkData_e84648;
            v18 = (__int64)v19 + v20 + 16;
            v24 = *(_WORD*)((char*)v19 + v20 + 25);
            *(_BYTE*)(v18 + 8) = 46;
            *(_QWORD*)(v18 + 16) = v17;
            *(_WORD*)(v18 + 9) = v24 & 0xF000 | 0x540;
            v23 = *(unsigned __int8**)a1;
            if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
              goto LABEL_20;
            }
          }
          if (*v23 == 69) {
            goto LABEL_72;
          }
        LABEL_20:
          v17 = SdkRoutine_844740(a1);
          result = 0;
          if (v17 == 0) {
            return result;
          }
        }
      }
      v18 = 0;
      while (1) {
        if (v18 != 0) {
          v58 = *(_QWORD**)(a1 + 4912);
          v59 = v58[1];
          if ((unsigned __int64)(v59 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v14 = (_QWORD*)SdkRoutine_8578d0(4096);
            if (v14 == nullptr) {
              goto LABEL_80;
            }
            v59 = 0;
            *v14 = v58;
            v14[1] = 0;
            v58 = v14;
            *(_QWORD*)(a1 + 4912) = v14;
          }
          v60 = v59 + 32;
          v61 = (__int64)v58 + v59;
          v58[1] = v60;
          *(_QWORD*)(v61 + 16) = SdkData_e84468;
          v61 += 16;
          LOWORD(v60) = *(_WORD*)(v61 + 9);
          *(_BYTE*)(v61 + 8) = 23;
          *(_QWORD*)(v61 + 16) = v18;
          *(_QWORD*)(v61 + 24) = v17;
          v18 = v61;
          *(_WORD*)(v61 + 9) = v60 & 0xF000 | 0x540;
          v23 = *(unsigned __int8**)a1;
          if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
            goto LABEL_63;
          }
        }
        else {
          v18 = v17;
          v23 = *(unsigned __int8**)a1;
          if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
            goto LABEL_63;
          }
        }
        if (*v23 == 69) {
        LABEL_72:
          *(_QWORD*)a1 = v23 + 1;
          goto LABEL_73;
        }
      LABEL_63:
        v17 = SdkRoutine_844740(a1);
        result = 0;
        if (v17 == 0) {
          return result;
        }
      }
    }
    result = SdkRoutine_8445e0(a1);
    if (result == 0) {
      return result;
    }
    v18 = result;
    if (*(_QWORD*)(a1 + 8) != *(_QWORD*)a1 && **(_BYTE**)a1 == 73) {
      result = SdkRoutine_837c80((unsigned __int8**)a1, 0, v44, v45, v46, v47,
                                 v48, v49);
      if (result != 0) {
        v50 = *(_QWORD**)(a1 + 4912);
        v51 = v50[1];
        if ((unsigned __int64)(v51 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v52 = result;
          v14 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v14 == nullptr) {
            goto LABEL_80;
          }
          v51 = 0;
          *v14 = v50;
          v14[1] = 0;
          v50 = v14;
          *(_QWORD*)(a1 + 4912) = v14;
          result = v52;
        }
        v53 = v51 + 32;
        v54 = (__int64)v50 + v51;
        v50[1] = v53;
        *(_QWORD*)(v54 + 16) = SdkData_e84be8;
        v54 += 16;
        *(_BYTE*)(v54 + 8) = 45;
        LOWORD(v53) = *(_WORD*)(v54 + 9);
        *(_QWORD*)(v54 + 16) = v18;
        *(_QWORD*)(v54 + 24) = result;
        v18 = v54;
        *(_WORD*)(v54 + 9) = v53 & 0xF000 | 0x540;
        goto LABEL_73;
      }
      return result;
    }
  LABEL_73:
    result = SdkRoutine_844820(a1);
    if (result == 0) {
      return result;
    }
    v62 = *(_QWORD**)(a1 + 4912);
    v56 = result;
    v63 = v62[1];
    if ((unsigned __int64)(v63 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v14 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v14 == nullptr) {
        goto LABEL_80;
      }
      v63 = 0;
      *v14 = v62;
      v14[1] = 0;
      v62 = v14;
      *(_QWORD*)(a1 + 4912) = v14;
    }
    v62[1] = v63 + 32;
    *(_QWORD*)((char*)v62 + v63 + 16) = SdkData_e84468;
    result = (__int64)v62 + v63 + 16;
  LABEL_78:
    *(_QWORD*)(result + 16) = v18;
    *(_QWORD*)(result + 24) = v56;
    *(_BYTE*)(result + 8) = 23;
    *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
    return result;
  }
LABEL_9:
  result = SdkRoutine_844820(a1);
  if ((a2 & 1) != 0 && result != 0) {
    v11 = *(_QWORD**)(a1 + 4912);
    v12 = v11[1];
    if ((unsigned __int64)(v12 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    LABEL_14:
      v15 = v12 + 32;
      v16 = (char*)v11 + v12;
      v11[1] = v15;
      *((_QWORD*)v16 + 2) = SdkData_e84648;
      v16 += 16;
      v16[8] = 46;
      LOWORD(v15) = *(_WORD*)(v16 + 9);
      *((_QWORD*)v16 + 2) = result;
      *(_WORD*)(v16 + 9) = v15 & 0xF000 | 0x540;
      return (__int64)v16;
    }
    v13 = result;
    v14 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v14 != nullptr) {
      v12 = 0;
      *v14 = v11;
      v14[1] = 0;
      v11 = v14;
      *(_QWORD*)(a1 + 4912) = v14;
      result = v13;
      goto LABEL_14;
    }
  LABEL_80:
    SdkRoutine_87c7b0(v14);
    __udf(0);
  }
  return result;
}

__int64 SdkHr_83d790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     char a6)
{
  _QWORD* v6;
  __int64 v12;
  _QWORD* v14;
  __int64 result;
  __int16 v16;
  __int64 v17;

  v6 = *(_QWORD**)(a1 + 4912);
  v12 = v6[1];
  if ((unsigned __int64)(v12 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v14 = (_QWORD*)SdkRoutine_8578d0(4096);
  if (v14 != nullptr) {
    v12 = 0;
    *v14 = v6;
    v14[1] = 0;
    v6 = v14;
    *(_QWORD*)(a1 + 4912) = v14;
  LABEL_4:
    v6[1] = v12 + 48;
    *(_QWORD*)((char*)v6 + v12 + 16) = SdkData_e83040;
    result = (__int64)v6 + v12 + 16;
    *(_BYTE*)(result + 8) = 54;
    v16 = *(_WORD*)((char*)v6 + v12 + 25);
    *(_QWORD*)(result + 16) = a2;
    *(_QWORD*)(result + 24) = a3;
    *(_QWORD*)(result + 32) = a4;
    *(_QWORD*)(result + 40) = a5;
    *(_WORD*)(result + 9) = v16 & 0xF000 | a6 & 0x3F | 0x540;
    return result;
  }
  v17 = SdkRoutine_87c7b0(0);
  return SdkRoutine_83d850(v17);
}

__int64 SdkHr_83dca0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e830b8;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 66;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 SdkHr_83f0c0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE* v3;
  _BYTE* v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int16 v14;

  v4 = *(_BYTE**)a1;
  v3 = *(_BYTE**)(a1 + 8);
  v5 = *(_BYTE**)a1;
  if (*(_BYTE**)a1 != v3) {
    v5 = *(_BYTE**)a1;
    if (*v4 == 110) {
      v5 = v4 + 1;
      *(_QWORD*)a1 = v4 + 1;
    }
  }
  if (v3 == v5 || (unsigned int)(unsigned __int8)*v5 - 48 > 9) {
    return 0;
  }
  while ((unsigned int)(unsigned __int8)*v5 - 48 <= 9) {
    *(_QWORD*)a1 = ++v5;
    if (v5 == v3) {
      v6 = v3 - v4;
      v7 = 0;
      if (v3 == v4) {
        return v7;
      }
      goto LABEL_11;
    }
  }
  v6 = v5 - v4;
  v7 = 0;
  if (v5 == v4) {
    return v7;
  }
LABEL_11:
  if (v5 != v3) {
    if (*v5 == 69) {
      v8 = *(_QWORD**)(a1 + 4912);
      *(_QWORD*)a1 = v5 + 1;
      v9 = v8[1];
      if ((unsigned __int64)(v9 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
        v11 = a2;
        v12 = a3;
        v13 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v13 == nullptr) {
          SdkRoutine_87c7b0(0);
          __udf(0);
        }
        v9 = 0;
        *v13 = v8;
        v13[1] = 0;
        v8 = v13;
        *(_QWORD*)(a1 + 4912) = v13;
        a3 = v12;
        a2 = v11;
      }
      v8[1] = v9 + 48;
      *(_QWORD*)((char*)v8 + v9 + 16) = SdkData_e835e0;
      v7 = (__int64)v8 + v9 + 16;
      *(_BYTE*)(v7 + 8) = 77;
      v14 = *(_WORD*)((char*)v8 + v9 + 25);
      *(_QWORD*)(v7 + 16) = a2;
      *(_QWORD*)(v7 + 24) = a3;
      *(_QWORD*)(v7 + 32) = v4;
      *(_QWORD*)(v7 + 40) = v6;
      *(_WORD*)(v7 + 9) = v14 & 0xF000 | 0x540;
      return v7;
    }
    return 0;
  }
  return v7;
}

__int64 SdkHr_83f220(__int64 a1, int a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 result;
  __int16 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4064) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v6 = (_QWORD*)SdkRoutine_8578d0(4096);
  if (v6 != nullptr) {
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  LABEL_4:
    v7 = v4 + 16;
    v2[1] = v7;
    result = (__int64)v2 + v7;
    *(_BYTE*)(result + 8) = 73;
    v9 = *(_WORD*)((char*)v2 + v7 + 9);
    *(_BYTE*)(result + 11) = a2 != 0;
    *(_WORD*)(result + 9) = v9 & 0xF000 | 0x540;
    *(_QWORD*)result = SdkData_e83658;
    return result;
  }
  v10 = SdkRoutine_87c7b0(0);
  return SdkRoutine_83f2c0(v10, v11);
}

__int64 SdkHr_83f2c0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83838;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 74;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83faf0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83c70;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 75;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_83fb90(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83ce8;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 76;
  v10 = *a3;
  v11 = a3[1];
  v12 = *(_WORD*)(result + 9);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v10;
  *(_QWORD*)(result + 32) = v11;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_841040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  __int16 v21;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4000) <= 0xFFFFFFFFFFFFF00FLL) {
    v19 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v19 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  }
  v9[1] = v17 + 80;
  *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e83bf8;
  result = (__int64)v9 + v17 + 16;
  *(_BYTE*)(result + 8) = 52;
  v21 = *(_WORD*)((char*)v9 + v17 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_QWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 48) = a6;
  *(_QWORD*)(result + 56) = a7;
  *(_WORD*)(result + 9) = v21 & 0xF000 | 0x540;
  *(_QWORD*)(result + 64) = a8;
  *(_QWORD*)(result + 72) = a9;
  return result;
}

__int64 SdkHr_841430(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83b80;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 39;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x500;
  return result;
}

__int64 SdkHr_842610(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83d60;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 67;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_844740(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  result = SdkRoutine_837600((unsigned __int8**)a1);
  if (result != 0 && *(_QWORD*)(a1 + 8) != *(_QWORD*)a1 &&
      **(_BYTE**)a1 == 73) {
    v9 = result;
    result =
        SdkRoutine_837c80((unsigned __int8**)a1, 0, v3, v4, v5, v6, v7, v8);
    if (result != 0) {
      v10 = *(_QWORD**)(a1 + 4912);
      v11 = v10[1];
      if ((unsigned __int64)(v11 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v12 = result;
        v13 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v13 == nullptr) {
          SdkRoutine_87c7b0(0);
          __udf(0);
        }
        v11 = 0;
        *v13 = v10;
        v13[1] = 0;
        v10 = v13;
        *(_QWORD*)(a1 + 4912) = v13;
        result = v12;
      }
      v14 = v11 + 32;
      v15 = (__int64)v10 + v11;
      v10[1] = v14;
      *(_QWORD*)(v15 + 16) = SdkData_e84be8;
      v15 += 16;
      *(_BYTE*)(v15 + 8) = 45;
      LOWORD(v14) = *(_WORD*)(v15 + 9);
      *(_QWORD*)(v15 + 16) = v9;
      *(_QWORD*)(v15 + 24) = result;
      result = v15;
      *(_WORD*)(v15 + 9) = v14 & 0xF000 | 0x540;
    }
  }
  return result;
}

__int64 SdkHr_844b60(__int64 a1, _BYTE* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  unsigned __int8* v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  char v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 result;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v3 = *(unsigned __int8**)a1;
  v4 = *(unsigned __int8**)(a1 + 8);
  if ((unsigned __int64)&v4[-*(_QWORD*)a1] < 2) {
    goto LABEL_23;
  }
  v5 = *v3;
  v6 = 62;
  v7 = 0;
  do {
    v8 = (unsigned __int64)(v7 + v6) >> 1;
    v9 = (unsigned __int8*)&SdkData_e82c40 + 16 * v8;
    v10 = *v9;
    if (v10 < v5 || v10 == v5 && v9[1] < (unsigned int)v3[1]) {
      v7 = v8 + 1;
      v8 = v6;
    }
    v6 = v8;
  } while (v8 != v7);
  v11 = (unsigned __int8*)&SdkData_e82c40 + 16 * v7;
  if (*v11 == v5 && v11[1] == v3[1]) {
    *(_QWORD*)a1 = v3 + 2;
    v12 = v11[2];
    if (v12 == 8) {
      LOBYTE(v13) = *(_BYTE*)(a1 + 777);
      LOBYTE(v14) = *(_BYTE*)(a1 + 776);
      *(_BYTE*)(a1 + 776) = 0;
      if (a2 != nullptr) {
        v16 = 1;
      }
      else {
        v16 = (char)v13;
      }
      *(_BYTE*)(a1 + 777) = v16;
      v2 = a1;
      v17 = SdkRoutine_833e70(a1);
      if (v17 == 0) {
        result = 0;
        v18 = v2;
        goto LABEL_50;
      }
      v18 = v2;
      if (a2 != nullptr) {
        *a2 = 1;
      }
      v19 = *(_QWORD**)(v2 + 4912);
      v20 = v19[1];
      if ((unsigned __int64)(v20 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
      LABEL_21:
        v19[1] = v20 + 32;
        *(_QWORD*)((char*)v19 + v20 + 16) = SdkData_e84558;
        result = (__int64)v19 + v20 + 16;
        *(_BYTE*)(result + 8) = 4;
        v23 = *(_WORD*)((char*)v19 + v20 + 25);
        *(_QWORD*)(result + 16) = v17;
        *(_WORD*)(result + 9) = v23 & 0xF000 | 0x540;
      LABEL_50:
        *(_BYTE*)(v18 + 777) = (_BYTE)v13;
        *(_BYTE*)(v18 + 776) = v14;
        return result;
      }
      v21 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v21 != nullptr) {
        v20 = 0;
        *v21 = v19;
        v21[1] = 0;
        v19 = v21;
        v18 = v2;
        *(_QWORD*)(v2 + 4912) = v21;
        goto LABEL_21;
      }
    LABEL_51:
      v32 = SdkRoutine_87c7b0(v21);
      *(_BYTE*)(v2 + 777) = (_BYTE)v13;
      *(_BYTE*)(v2 + 776) = v14;
      SdkRoutine_87c790(v32);
      __udf(0);
    }
    if (v12 <= 0xA && (v12 != 4 || (v11[3] & 1) != 0)) {
      v29 = *((_QWORD*)v11 + 1);
      v2 = a1;
      v30 = SdkRoutine_857e60(v29);
      v13 = *(_QWORD**)(v2 + 4912);
      v14 = v30;
      v31 = v13[1];
      if ((unsigned __int64)(v31 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v21 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v21 == nullptr) {
          goto LABEL_51;
        }
        v31 = 0;
        *v21 = v13;
        v21[1] = 0;
        v13 = v21;
        *(_QWORD*)(v2 + 4912) = v21;
      }
      v13[1] = v31 + 32;
      *(_QWORD*)((char*)v13 + v31 + 16) = SdkData_e82ae8;
      result = (__int64)v13 + v31 + 16;
      *(_BYTE*)(result + 8) = 8;
      v28 = *(_WORD*)((char*)v13 + v31 + 25);
      *(_QWORD*)(result + 16) = v29;
      *(_QWORD*)(result + 24) = v14;
    LABEL_40:
      *(_WORD*)(result + 9) = v28 & 0xF000 | 0x540;
      return result;
    }
    return 0;
  }
  if (*(_WORD*)v3 == 26988) {
    v14 = a1;
    *(_QWORD*)a1 = v3 + 2;
    result = SdkRoutine_837600((unsigned __int8**)a1);
    if (result != 0) {
      v13 = *(_QWORD**)(v14 + 4912);
      v24 = result;
      v27 = v13[1];
      if ((unsigned __int64)(v27 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v21 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v21 == nullptr) {
          goto LABEL_51;
        }
        v27 = 0;
        *v21 = v13;
        v21[1] = 0;
        v13 = v21;
        *(_QWORD*)(v14 + 4912) = v21;
      }
      v13[1] = v27 + 32;
      *(_QWORD*)((char*)v13 + v27 + 16) = SdkData_e845d0;
      result = (__int64)v13 + v27 + 16;
      v26 = 20;
      goto LABEL_39;
    }
  }
  else {
  LABEL_23:
    if (v3 == v4) {
      return 0;
    }
    else {
      if (*v3 != 118) {
        return 0;
      }
      *(_QWORD*)a1 = v3 + 1;
      if (v4 == v3 + 1 || (unsigned int)v3[1] - 48 > 9) {
        return 0;
      }
      v14 = a1;
      *(_QWORD*)a1 = v3 + 2;
      result = SdkRoutine_837600((unsigned __int8**)a1);
      if (result != 0) {
        v13 = *(_QWORD**)(v14 + 4912);
        v24 = result;
        v25 = v13[1];
        if ((unsigned __int64)(v25 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v21 = (_QWORD*)SdkRoutine_8578d0(4096);
          if (v21 == nullptr) {
            goto LABEL_51;
          }
          v25 = 0;
          *v21 = v13;
          v21[1] = 0;
          v13 = v21;
          *(_QWORD*)(v14 + 4912) = v21;
        }
        v13[1] = v25 + 32;
        *(_QWORD*)((char*)v13 + v25 + 16) = SdkData_e84558;
        result = (__int64)v13 + v25 + 16;
        v26 = 4;
      LABEL_39:
        *(_BYTE*)(result + 8) = v26;
        v28 = *(_WORD*)(result + 9);
        *(_QWORD*)(result + 16) = v24;
        goto LABEL_40;
      }
    }
  }
  return result;
}

char* SdkHr_845240(__int64 a1, char* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  char* v6;
  __int16 v7;
  char* result;
  __int16 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  _BYTE* v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;

  v3 = *(unsigned __int8**)a1;
  v2 = *(unsigned __int8**)(a1 + 8);
  if (*(unsigned __int8**)a1 != v2) {
    while (*v3 == 66) {
      *(_QWORD*)a1 = v3 + 1;
      if (v2 == v3 + 1 || (unsigned int)v3[1] - 58 < 0xFFFFFFF6) {
        return nullptr;
      }
      v10 = v3 + 2;
      v11 = 0;
      v12 = v3 + 2;
      do {
        *(_QWORD*)a1 = v12;
        v13 = v10;
        v14 = v11;
        v15 = v12;
        v16 = *(v12 - 1);
        v11 = v16 + 10 * v11 - 48;
        if (v12 == v2) {
          break;
        }
        ++v12;
        ++v10;
      } while ((unsigned int)*v15 - 48 <= 9);
      if (v2 - v13 < v11) {
        return nullptr;
      }
      *(_QWORD*)a1 = &v15[10 * v14 - 48 + v16];
      if (v11 == 0) {
        return nullptr;
      }
      v17 = *(_QWORD**)(a1 + 4912);
      v18 = v17[1];
      if ((unsigned __int64)(v18 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
        v19 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v19 == nullptr) {
          SdkRoutine_87c7b0(0);
          __udf(0);
        }
        v18 = 0;
        *v19 = v17;
        v19[1] = 0;
        v17 = v19;
        *(_QWORD*)(a1 + 4912) = v19;
      }
      v6 = (char*)v17 + v18;
      v17[1] = v18 + 48;
      v7 = *(_WORD*)(a2 + 9);
      *((_QWORD*)v6 + 2) = SdkData_e847b0;
      result = v6 + 16;
      v9 = *(_WORD*)(result + 9);
      *((_QWORD*)result + 2) = a2;
      *((_QWORD*)result + 3) = v13;
      result[8] = 9;
      *((_QWORD*)result + 4) = v11;
      a2 = result;
      *(_WORD*)(result + 9) = v9 & 0xF000 | v7 & 0xFC0;
      v3 = *(unsigned __int8**)a1;
      v2 = *(unsigned __int8**)(a1 + 8);
      if (*(unsigned __int8**)a1 == v2) {
        return result;
      }
    }
  }
  return a2;
}

char* SdkHr_845b20(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  char* result;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4064) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = v4 + 16;
  v2[1] = v7;
  result = (char*)v2 + v7;
  LODWORD(v7) = *(_DWORD*)(a2 + 12);
  result[8] = 47;
  v9 = *(_WORD*)(result + 9);
  *((_DWORD*)result + 3) = v7;
  *(_WORD*)(result + 9) = v9 & 0xF000 | 0x540;
  *(_QWORD*)result = SdkData_e84750;
  return result;
}

__int64 SdkHr_845bc0(__int64 a1, __int64 a2, char a3, int a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v10 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 32;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e848a0;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 49;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_DWORD*)(result + 28) = a4;
  *(_BYTE*)(result + 24) = a3 & 1;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_846080(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84a80;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 26;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_8477d0(__int64 a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;
  __int64 v11;
  __int64 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85200;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 7;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  v11 = *a2;
  v12 = a2[1];
  *(_QWORD*)(result + 32) = a3;
  *(_QWORD*)(result + 16) = v11;
  *(_QWORD*)(result + 24) = v12;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_847880(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85278;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 31;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_847920(__int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e852f0;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 32;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_BYTE*)(result + 24) = a3 & 1;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_8479d0(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85368;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 5;
  v10 = *a3;
  v11 = a3[1];
  v12 = *(_WORD*)(result + 9);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v10;
  *(_QWORD*)(result + 32) = v11;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_847a80(unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 result;
  char* v4;
  unsigned __int8** v5;
  unsigned int v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  int v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  signed __int64 v14;
  __int64 v15;
  __int16 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = *a1;
  v1 = a1[1];
  if ((unsigned __int64)(v1 - *a1) < 2) {
    return 0;
  }
  if (*(_WORD*)v2 != 30276) {
    return 0;
  }
  v4 = (char*)(v2 + 2);
  v5 = a1;
  *a1 = v2 + 2;
  if (v1 == v2 + 2) {
    goto LABEL_27;
  }
  v6 = (unsigned __int8)*v4;
  if (v6 < 0x31) {
    goto LABEL_27;
  }
  if (v6 > 0x39) {
    if (v6 == 95) {
      *a1 = v2 + 3;
      result = SdkRoutine_833e70(a1);
      if (result == 0) {
        return result;
      }
      v19 = v5[614];
      v20 = result;
      v21 = *((_QWORD*)v19 + 1);
      if ((unsigned __int64)(v21 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v22 = result;
        v12 = (unsigned __int8*)SdkRoutine_8578d0(4096);
        if (v12 == nullptr) {
          goto LABEL_38;
        }
        v21 = 0;
        *(_QWORD*)v12 = v19;
        *((_QWORD*)v12 + 1) = 0;
        v19 = v12;
        v5[614] = v12;
        v20 = v22;
      }
      *((_QWORD*)v19 + 1) = v21 + 32;
      *(_QWORD*)&v19[v21 + 16] = SdkData_e85458;
      result = (__int64)&v19[v21 + 16];
      *(_BYTE*)(result + 8) = 29;
      v23 = *(_WORD*)&v19[v21 + 25];
      *(_QWORD*)(result + 16) = v20;
      *(_QWORD*)(result + 24) = 0;
    LABEL_35:
      *(_WORD*)(result + 9) = v23 & 0xF000 | 0x540;
      return result;
    }
  LABEL_27:
    result = SdkRoutine_8393e0(a1);
    if (result == 0) {
      return result;
    }
    v24 = *v5;
    if (*v5 == v5[1]) {
      return 0;
    }
    v26 = *v24;
    v25 = v24 + 1;
    if (v26 != 95) {
      return 0;
    }
    v27 = result;
    *v5 = v25;
    result = SdkRoutine_833e70(v5);
    if (result == 0) {
      return result;
    }
    v28 = v5[614];
    v29 = result;
    v30 = *((_QWORD*)v28 + 1);
    if ((unsigned __int64)(v30 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v31 = result;
      v12 = (unsigned __int8*)SdkRoutine_8578d0(4096);
      if (v12 == nullptr) {
        goto LABEL_38;
      }
      v30 = 0;
      *(_QWORD*)v12 = v28;
      *((_QWORD*)v12 + 1) = 0;
      v28 = v12;
      v5[614] = v12;
      v29 = v31;
    }
    *((_QWORD*)v28 + 1) = v30 + 32;
    *(_QWORD*)&v28[v30 + 16] = SdkData_e85458;
    result = (__int64)&v28[v30 + 16];
    *(_BYTE*)(result + 8) = 29;
    v23 = *(_WORD*)&v28[v30 + 25];
    *(_QWORD*)(result + 16) = v29;
    *(_QWORD*)(result + 24) = v27;
    goto LABEL_35;
  }
  v7 = v2 + 2;
  v8 = v2 + 2;
  while (1) {
    v9 = *v8++;
    if ((unsigned int)(v9 - 48) > 9) {
      break;
    }
    ++v7;
    *a1 = v8;
    if (v8 == v1) {
      v7 = v1;
      break;
    }
  }
  v10 = a1[614];
  v11 = *((_QWORD*)v10 + 1);
  if ((unsigned __int64)(v11 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v12 == nullptr) {
    LABEL_38:
      v32 = SdkRoutine_87c7b0(v12);
      return SdkRoutine_847d60(v32);
    }
    v13 = v12;
    v11 = 0;
    *(_QWORD*)v12 = v10;
    *((_QWORD*)v12 + 1) = 0;
    v10 = v12;
    a1 = v5;
    v5[614] = v13;
  }
  v14 = v7 - (unsigned __int8*)v4;
  *((_QWORD*)v10 + 1) = v11 + 32;
  *(_QWORD*)&v10[v11 + 16] = SdkData_e82ae8;
  v15 = (__int64)&v10[v11 + 16];
  *(_BYTE*)(v15 + 8) = 8;
  v16 = *(_WORD*)&v10[v11 + 25];
  *(_QWORD*)(v15 + 16) = v4;
  *(_QWORD*)(v15 + 24) = v14;
  *(_WORD*)(v15 + 9) = v16 & 0xF000 | 0x540;
  v17 = *a1;
  v18 = a1[1];
  if (*a1 == v18 || *v17 != 95) {
    return 0;
  }
  *a1 = v17 + 1;
  if (v17 + 1 == v18 || v17[1] != 112) {
    result = SdkRoutine_833e70(a1);
    if (result != 0) {
      return SdkRoutine_849340(v5, result, v15);
    }
  }
  else {
    *a1 = v17 + 2;
    return SdkRoutine_8492a0();
  }
  return result;
}

char* SdkHr_847ef0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  char* v7;
  char v8;
  char* result;
  __int16 v10;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = (char*)v2 + v4;
  v2[1] = v4 + 32;
  v8 = *(_WORD*)(a2 + 9);
  *((_QWORD*)v7 + 2) = SdkData_e85638;
  result = v7 + 16;
  result[8] = 12;
  v10 = *(_WORD*)(result + 9);
  *((_QWORD*)result + 2) = a2;
  *(_WORD*)(result + 9) = v8 & 0xC0 | 0x500 | v10 & 0xF000;
  return result;
}

__int64 SdkHr_847fa0(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  char v10;
  __int64 result;
  __int16 v12;
  __int64 v13;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v8 = (_QWORD*)SdkRoutine_8578d0(4096);
  if (v8 != nullptr) {
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  LABEL_4:
    v9 = (char*)v3 + v6;
    v3[1] = v6 + 32;
    v10 = *(_WORD*)(a2 + 9);
    *((_QWORD*)v9 + 2) = SdkData_e856b0;
    result = (__int64)(v9 + 16);
    *(_BYTE*)(result + 8) = 13;
    v12 = *(_WORD*)(result + 9);
    *(_QWORD*)(result + 16) = a2;
    *(_DWORD*)(result + 24) = a3;
    *(_BYTE*)(result + 28) = 0;
    *(_WORD*)(result + 9) = v10 & 0xC0 | 0x500 | v12 & 0xF000;
    return result;
  }
  v13 = SdkRoutine_87c7b0(0);
  return SdkRoutine_848050(v13);
}

__int64 SdkHr_848050(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85368;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 5;
  *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = " complex";
  *(_QWORD*)(result + 32) = 8;
  return result;
}

__int64 SdkHr_848100(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85368;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 5;
  *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = " imaginary";
  *(_QWORD*)(result + 32) = 10;
  return result;
}

__int64 SdkHr_8492a0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v6 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e853e0;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 30;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_849340(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85458;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 29;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_849660(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e854d0;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 15;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x400;
  return result;
}

char* SdkHr_84a0d0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  char v10;
  char* result;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v8 == nullptr) {
      SdkRoutine_87c7b0(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v9 = (char*)v3 + v6;
  v3[1] = v6 + 32;
  v10 = *(_WORD*)(a3 + 9);
  *((_QWORD*)v9 + 2) = SdkData_e85548;
  result = v9 + 16;
  result[8] = 14;
  v12 = *(_WORD*)(result + 9);
  *((_QWORD*)result + 2) = a2;
  *((_QWORD*)result + 3) = a3;
  *(_WORD*)(result + 9) = v10 & 0xC0 | 0x500 | v12 & 0xF000;
  return result;
}

void __attribute__((noreturn)) SdkHr_84bb6c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  char v10;
  void (*v11)(__int64);
  __int64 v12;
  __int64 v13;

  if ((v10 & 1) != 0) {
    a1 = SdkRoutine_87c7b0(a1);
  }
  v12 = a1;
  SdkRoutine_84b820(&a9);
  v11(v9);
  v13 = SdkRoutine_87c790(v12);
  SdkRoutine_7cd620(v13);
}

void __attribute__((noreturn)) SdkHr_84bc7c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  __int64 v10;
  __int64 v11;
  char v12;
  void (*v13)(__int64, __int64);
  __int64 v14;
  __int64 v15;

  if ((v12 & 1) != 0) {
    a1 = SdkRoutine_87c7b0(a1);
  }
  v14 = a1;
  SdkRoutine_84b820(&a10);
  v13(v10, v11);
  v15 = SdkRoutine_87c790(v14);
  SdkRoutine_7cd620(v15);
}

__int64 SdkHr_84e440(__int64 result, __int64 a2)
{
  void (*v2)(__int64);
  __int64 v3;

  if ((_DWORD)result != 1) {
    SdkRoutine_84b330(*(void (**)(void))(a2 - 56));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(a2 - 88),
                       0xFFFFFFFFFFFFFFFFLL) == 1) {
    v2 = *(void (**)(__int64))(a2 - 72);
    if (v2 != nullptr) {
      v3 = a2;
      v2(a2 + 32);
      a2 = v3;
    }
    return SdkRoutine_84c4a0(a2 - 96);
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_84e570(__int64 a1)
{
  _cxa_begin_catch(a1 + 96);
  SdkRoutine_84b330(*(void (**)(void))(a1 + 40));
}

void __attribute__((noreturn)) SdkHr_84e780()
{
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v0 = ((__int64 (*)(void))SdkRoutine_87d4c0)();
  v1 = *(_QWORD*)v0;
  if (*(_QWORD*)v0 != 0) {
    goto LABEL_3;
  }
  while (1) {
    v0 = SdkRoutine_87c7b0(v0);
  LABEL_3:
    v2 = *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFF00LL;
    if (v2 == 0x434C4E47432B2B00LL) {
      *(_DWORD*)(v1 + 56) = -*(_DWORD*)(v1 + 56);
      ++*(_DWORD*)(v0 + 8);
    }
    else {
      *(_QWORD*)v0 = 0;
    }
    v3 = SdkRoutine_87d5a0(v1 + 96);
    v4 = *(_QWORD*)(v1 + 96);
    v0 = SdkRoutine_87d4c0(v3);
    if ((v4 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL) {
      v5 = *(_DWORD*)(v1 + 56);
      if (v5 < 0) {
        v5 = -v5;
      }
      *(_DWORD*)(v1 + 56) = v5 + 1;
      if (v1 != *(_QWORD*)v0) {
        *(_QWORD*)(v1 + 48) = *(_QWORD*)v0;
        *(_QWORD*)v0 = v1;
      }
      --*(_DWORD*)(v0 + 8);
      if (v2 == 0x434C4E47432B2B00LL) {
      LABEL_15:
        SdkRoutine_84b330(*(void (**)(void))(v1 + 40));
      }
    }
    else if (*(_QWORD*)v0 == 0) {
      *(_QWORD*)v0 = v1;
      if (v2 == 0x434C4E47432B2B00LL) {
        goto LABEL_15;
      }
    }
  }
}

__int64 SdkHr_84ea40(int a1, __int64 a2)
{
  __int64 v2;
  void (*v3)(__int64);
  __int64 v4;

  if (a1 != 1) {
    SdkRoutine_84b330(*(void (**)(void))(a2 - 56));
  }
  v2 = *(_QWORD*)(a2 - 88);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 - 120),
                                  0xFFFFFFFFFFFFFFFFLL) == 1) {
    v3 = *(void (**)(__int64))(v2 - 104);
    v4 = a2;
    if (v3 != nullptr) {
      v3(v2);
    }
    SdkRoutine_84c4a0(v2 - 128);
    a2 = v4;
  }
  return SdkRoutine_84c4a0(a2 - 96);
}

__int64 SdkHr_84eb20(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  unsigned __int64 v25;
  unsigned int v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  char v32;
  unsigned __int64 v33;
  char* v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  unsigned __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int8* v49;
  unsigned int v50;
  unsigned int v51;
  unsigned __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  int v62;
  __int64 v63;
  unsigned __int8* v64;
  __int64 v65;
  char v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  unsigned int v70;
  unsigned int v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int8* v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int8* v83;
  char* v84;
  char* v85;
  unsigned __int8* v86;

  result = 3;
  if (a1 != 1 || a4 == 0 || a5 == 0) {
    return result;
  }
  v9 = a3 & 0xFFFFFFFFFFFFFF00LL;
  v10 = a2;
  if (a2 == 6 && v9 == 0x434C4E47432B2B00LL) {
    v11 = *(int*)(a4 - 36);
    v12 = *(_QWORD*)(a4 - 16);
    SdkRoutine_87d5c0(a5, 0, a4);
    SdkRoutine_87d5c0(a5, 1, v11);
    SdkRoutine_87d5d0(a5, v12);
    if ((v11 & 0x80000000) == 0) {
      return 7;
    }
  LABEL_7:
    *(_QWORD*)(a4 - 16) = 0;
    return 7;
  }
  if ((a2 & 1) == 0) {
    if ((a2 & 2) == 0) {
      return result;
    }
    if ((~a2 & 0xC) != 0) {
      goto LABEL_14;
    }
    result = SdkRoutine_87b840(
        "results.reason == _URC_HANDLER_FOUND",
        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/cxa_personality.cpp",
        985, "__gxx_personality_v0");
  }
  if ((v10 & 0xE) != 0) {
    return result;
  }
LABEL_14:
  v13 = SdkRoutine_87d5e0(a5);
  if (v13 == 0) {
    return 8;
  }
  v14 = (unsigned __int8*)v13;
  v15 = SdkRoutine_87d5f0(a5);
  v16 = SdkRoutine_87d600(a5);
  v17 = *v14;
  v18 = v16;
  v85 = (char*)(v14 + 1);
  if ((_DWORD)v17 != 255) {
    v80 = SdkRoutine_84f3e0(&v85, v17, 0);
    v19 = v85 + 1;
    v20 = (unsigned __int8)*v85;
    v21 = ~v18;
    ++v85;
    v82 = v20;
    if (v20 != 255) {
      goto LABEL_17;
    }
  LABEL_21:
    v83 = nullptr;
    goto LABEL_22;
  }
  v80 = v16;
  v26 = v14[1];
  v19 = (char*)(v14 + 2);
  v21 = ~v16;
  v85 = (char*)(v14 + 2);
  v82 = v26;
  if (v26 == 255) {
    goto LABEL_21;
  }
LABEL_17:
  v22 = 0;
  v23 = 0;
  do {
    v24 = *v19++;
    v25 = (unsigned __int64)(v24 & 0x7F) << v22;
    v22 += 7;
    v23 |= v25;
  } while (v24 < 0);
  v83 = (unsigned __int8*)&v19[v23];
LABEL_22:
  v27 = v19 + 1;
  v81 = v9;
  v28 = v15 + v21;
  v78 = v14;
  v29 = 0;
  v30 = 0;
  v85 = v19 + 1;
  v31 = (unsigned __int8)*v19;
  do {
    v32 = *v27++;
    v33 = (unsigned __int64)(v32 & 0x7F) << v29;
    v29 += 7;
    v30 |= v33;
  } while (v32 < 0);
  v34 = &v27[v30];
  v84 = v27;
  v85 = v27;
  v79 = v30;
  v35 = v27;
  while (1) {
    if (v35 >= v34) {
    LABEL_94:
      v76 = SdkRoutine_87c7a0(a4);
      if (v81 == 0x434C4E47432B2B00LL) {
        SdkRoutine_84b330(*(void (**)(void))(a4 - 56));
      }
      SdkRoutine_87c7b0(v76);
    LABEL_97:
      SdkRoutine_87c7a0(a4);
      SdkRoutine_84b330(*(void (**)(void))(a4 - 56));
    }
    v36 = SdkRoutine_84f3e0(&v84, v31, 0);
    v37 = SdkRoutine_84f3e0(&v84, v31, 0);
    v38 = SdkRoutine_84f3e0(&v84, v31, 0);
    v35 = v84;
    v39 = 0;
    v40 = 0;
    do {
      v41 = *v35++;
      v42 = (unsigned __int64)(v41 & 0x7F) << v39;
      v39 += 7;
      v40 |= v42;
    } while (v41 < 0);
    v84 = v35;
    if (v36 <= v28 && v28 < v37 + v36) {
      break;
    }
    if (v28 < v36) {
      goto LABEL_94;
    }
  }
  if (v38 == 0) {
    return 8;
  }
  v43 = v38 + v80;
  if (v40 == 0) {
    if ((v10 & 1) == 0) {
      v56 = 0;
      goto LABEL_87;
    }
    return 8;
  }
  v77 = v38 + v80;
  v44 = 0;
  v45 = (__int64)&v27[v79 - 1 + v40];
  v46 = v82 & 0xF;
  while (1) {
    v47 = 0;
    v48 = 0;
    v49 = (unsigned __int8*)v45;
    do {
      v51 = *v49++;
      v50 = v51;
      v52 = (unsigned __int64)(v51 & 0x7F) << v47;
      v47 += 7LL;
      v48 |= v52;
    } while ((v51 & 0x80) != 0);
    v53 = v47 >= 0x40;
    v54 = -1LL << v47;
    if (v53 || v50 <= 0x3F) {
      v54 = 0;
    }
    v56 = v48 | v54;
    if ((v48 | v54) >= 1) {
      break;
    }
    v62 = (v56 == 0) | v44;
    if ((v10 & 8) == 0 && v56 != 0) {
      v63 = SdkRoutine_84e290(a4);
      if (v81 != 0x434C4E47432B2B00LL) {
        goto LABEL_79;
      }
      v64 = (unsigned __int8*)(a4 + 32);
      if (v63 == 0x434C4E47432B2B01LL) {
        v64 = *(unsigned __int8**)(a4 - 88);
      }
      if (v64 == nullptr) {
        goto LABEL_97;
      }
      v65 = *(_QWORD*)(a4 - 80);
      if (v65 == 0) {
        goto LABEL_97;
      }
      v66 = SdkRoutine_84f5e0(v56, v83, v82, v65, v64, a4, 0);
      v62 = v44;
      if ((v66 & 1) != 0) {
        if ((v10 & 1) != 0) {
          v43 = v77;
          goto LABEL_93;
        }
      LABEL_101:
        SdkRoutine_87b840("actions & _UA_SEARCH_PHASE",
                          "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                          "cxa_personality.cpp",
                          805, "scan_eh_tab");
        __udf(0);
      }
    }
  LABEL_61:
    v67 = 0;
    v68 = 0;
    v69 = v49;
    do {
      v71 = *v69++;
      v70 = v71;
      v72 = (unsigned __int64)(v71 & 0x7F) << v67;
      v67 += 7LL;
      v68 |= v72;
    } while ((v71 & 0x80) != 0);
    v53 = v67 >= 0x40;
    v73 = -1LL << v67;
    if (v53 || v70 <= 0x3F) {
      v73 = 0;
    }
    v75 = v68 | v73;
    if (v75 == 0) {
      v43 = v77;
      if (((unsigned __int8)v62 & ((v10 & 2) != 0)) != 0) {
        v45 = 0;
        v56 = 0;
        v64 = nullptr;
        if ((v10 & 1) == 0) {
          goto LABEL_87;
        }
        goto LABEL_83;
      }
      return 8;
    }
    v45 = (__int64)&v49[v75];
    v44 = v62;
  }
  if (v83 == nullptr || (unsigned int)v46 > 0xC ||
      ((0x1C1Du >> v46) & 1) == 0) {
    goto LABEL_94;
  }
  v86 = &v83[SdkData_d02e88[v46] * v56];
  v57 = SdkRoutine_84f3e0(&v86, v82, 0);
  if (v57 == 0) {
    if ((v10 & 0xD) != 0) {
      v63 = SdkRoutine_84e290(a4);
    LABEL_79:
      v43 = v77;
      if (v63 != 0x434C4E47432B2B01LL) {
        v64 = (unsigned __int8*)(a4 + 32);
        if ((v10 & 1) == 0) {
          goto LABEL_87;
        }
        goto LABEL_83;
      }
      v64 = *(unsigned __int8**)(a4 - 88);
      if ((v10 & 1) != 0) {
      LABEL_83:
        if (v81 == 0x434C4E47432B2B00LL) {
          goto LABEL_93;
        }
        return 6;
      }
    LABEL_87:
      if ((v10 & 2) != 0) {
        SdkRoutine_87d5c0(a5, 0, a4);
        SdkRoutine_87d5c0(a5, 1, v56);
        SdkRoutine_87d5d0(a5, v43);
        if ((v56 & 0x8000000000000000LL) == 0) {
          return 7;
        }
        goto LABEL_7;
      }
      SdkRoutine_87b840("actions & _UA_CLEANUP_PHASE",
                        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                        "cxa_personality.cpp",
                        984, "__gxx_personality_v0");
    }
    SdkRoutine_87b840(
        "actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)",
        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/cxa_personality.cpp",
        746, "scan_eh_tab");
    goto LABEL_100;
  }
  if (v81 == 0x434C4E47432B2B00LL) {
    v58 = v57;
    v59 = SdkRoutine_84e290(a4);
    v60 = (unsigned __int8*)(a4 + 32);
    if (v59 == 0x434C4E47432B2B01LL) {
      v60 = *(unsigned __int8**)(a4 - 88);
    }
    v86 = v60;
    if (v60 == nullptr) {
      goto LABEL_97;
    }
    v61 = *(_QWORD*)(a4 - 80);
    if (v61 == 0) {
      goto LABEL_97;
    }
    if (((*(__int64 (**)(__int64, __int64, unsigned __int8**))(
             *(_QWORD*)v58 + 32LL))(v58, v61, &v86) &
         1) != 0) {
      v43 = v77;
      if ((v10 & 9) == 0) {
      LABEL_100:
        SdkRoutine_87b840("actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)",
                          "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                          "cxa_personality.cpp",
                          772, "scan_eh_tab");
        goto LABEL_101;
      }
      if ((v10 & 1) == 0) {
        goto LABEL_87;
      }
      v64 = v86;
    LABEL_93:
      *(_DWORD*)(a4 - 36) = v56;
      *(_QWORD*)(a4 - 16) = v43;
      *(_QWORD*)(a4 - 8) = v64;
      *(_QWORD*)(a4 - 32) = v45;
      *(_QWORD*)(a4 - 24) = v78;
      return 6;
    }
  }
  v62 = v44;
  goto LABEL_61;
}

void __attribute__((noreturn)) SdkHr_84f214(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            unsigned __int8* a10)
{
  void (*v10)(void);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned __int8* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v17 = SdkRoutine_87c7a0(a1);
  if ((v14 & 1) != 0) {
    v18 = *v15;
    a10 = v15 + 1;
    v19 = SdkRoutine_84f3e0(&a10, v18, v12);
    v20 = *a10;
    if (v20 != 255) {
      v21 = a10 + 1;
      v22 = 0;
      v23 = 0;
      do {
        v24 = *v21++;
        v25 = (unsigned __int64)(v24 & 0x7F) << v22;
        v22 += 7;
        v23 |= v25;
      } while (v24 < 0);
      a10 = v21;
      v26 = (_QWORD*)SdkRoutine_87d4a0(v19);
      v27 = *v26;
      v28 = v26;
      if (*v26 != 0) {
        if (((unsigned int)SdkRoutine_84e2a0(v27 + 96) & (v27 != v16)) == 1 &&
            ((v29 = *(_QWORD*)(v27 + 16),
              SdkRoutine_84e290(v27 + 96) != 0x434C4E47432B2B01LL)
                 ? (v30 = v27 + 128)
                 : (v30 = *(_QWORD*)(v27 + 8)),
             (SdkRoutine_84f5e0(v13, &v21[v23], v20, v29, v30, v11, v12) & 1) ==
                 0)) {
          *(_DWORD*)(v27 + 56) = -*(_DWORD*)(v27 + 56);
          ++*((_DWORD*)v28 + 2);
          v35 = ((__int64 (*)(void))SdkRoutine_87c8e0)();
          SdkRoutine_87c8e0(v35);
          v36 = SdkRoutine_87c7a0(v27 + 96);
          v34 = SdkRoutine_87c8d0(v36);
        }
        else {
          v31 = SdkData_e89828;
          a9 = SdkData_e89828 + 16;
          v32 = SdkRoutine_84f5e0(v13, &v21[v23], v20, SdkData_e89830, &a9, v11,
                                  v12);
          if ((v32 & 1) != 0) {
            v17 = SdkRoutine_87d520(&a9);
            goto LABEL_14;
          }
          SdkRoutine_87c8e0(v32);
          v33 = (_QWORD*)SdkRoutine_87c8f0(8);
          *v33 = v31 + 16;
          v34 = SdkRoutine_87c910(v33, SdkData_e89830, SdkData_e89810);
        }
        v37 = v34;
        v38 = SdkRoutine_87d520(&a9);
        SdkRoutine_87c8e0(v38);
        v39 = SdkRoutine_87c790(v37);
        SdkRoutine_7cd620(v39);
      }
    }
    SdkRoutine_84b330(v10);
  }
LABEL_14:
  SdkRoutine_87c8e0(v17);
  SdkRoutine_84b330(v10);
}

bool SdkHr_84f5e0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                  __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8;
  __int64 v13;
  __int64 v14;
  char* v15;
  char v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  char v20;
  __int64 v22;
  __int64 v24;

  if (a2 == 0) {
    v22 = SdkRoutine_87c7a0(a6);
    SdkRoutine_87c7b0(v22);
    __udf(0);
  }
  v8 = a3 & 0xF;
  v13 = 0;
  v14 = 0;
  v15 = (char*)(a2 + ~a1);
  do {
    do {
      v16 = *v15++;
      v17 = (unsigned __int64)(v16 & 0x7F) << v13;
      v13 += 7;
      v18 = v17 | v14;
      v14 |= v17;
    } while (v16 < 0);
    if (v18 == 0) {
      break;
    }
    if ((unsigned int)v8 > 0xC || ((0x1C1Du >> v8) & 1) == 0) {
      SdkRoutine_87c7a0(a6);
      SdkRoutine_84b330(*(void (**)(void))(a6 - 56));
    }
    v24 = a2 + SdkData_d02e88[v8] * v18;
    v19 = SdkRoutine_84f3e0(&v24, a3, a7);
    v24 = a5;
    v20 = (*(__int64 (**)(__int64, __int64, __int64*))(*(_QWORD*)v19 + 32LL))(
        v19, a4, &v24);
    v13 = 0;
    v14 = 0;
  } while ((v20 & 1) == 0);
  return v18 == 0;
}

#pragma GCC visibility pop
