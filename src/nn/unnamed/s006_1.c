#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e829e8[])();

extern __int64 (*SdkData_e82ae8[])();

extern __int64 (*SdkData_e84dc8[])();

extern __int64 (*SdkData_e85458[])();

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

__int64 SdkRoutine_8393e0(_QWORD);

__int64 SdkRoutine_847d60(_QWORD);

__int64 SdkRoutine_8492a0(void);

__int64 SdkRoutine_849340(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) SdkRoutine_84b330(void (*)(void));

void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);

__int64 SdkRoutine_84e290(_QWORD);

__int64 SdkRoutine_84e2a0(_QWORD);

__int64 SdkRoutine_84f3e0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_84f5e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkRoutine_857810(void);

__int64 SdkRoutine_8578d0(_QWORD);

__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859610(_QWORD);

__int64 SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c7a0(_QWORD);

__int64 SdkRoutine_87c7b0(_QWORD);

__int64 SdkRoutine_87c8d0(_QWORD);

__int64 SdkRoutine_87c8e0(_QWORD);

__int64 SdkRoutine_87c8f0(_QWORD);

__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d4a0(_QWORD);

__int64 SdkRoutine_87d520(_QWORD);

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

#pragma GCC visibility pop
