#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 wcslen_plt(_QWORD);
extern _UNKNOWN SdkData_bd15d4;
__int64 util_format_string_a5560(__int64 result, char* a2,
                                 unsigned __int64** a3);
__int64 util_format_string_a6500(__int64 a1, __int64 a2, int a3);

__int64 util_format_string_a5560(__int64 result, char* a2,
                                 unsigned __int64** a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64** v5;
  char* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 (*v10)(__int64, unsigned __int64*, __int64);
  int v11;
  __int64 v12;
  __int64 (*v13)(__int64, unsigned __int64*, __int64);
  __int64 v14;
  int v15;
  unsigned __int8* i;
  int v17;
  int v18;
  __int64 v19;
  int* v20;
  int v21;
  int v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  const char* v42;
  char v43;
  __int64 v44;
  __int64 (*v45)(__int64, unsigned __int64*, __int64);
  __int64 j;
  char v47;
  __int64 v48;
  __int64 (*v49)(__int64, unsigned __int64*, __int64);
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 (*v54)(__int64, unsigned __int64*, __int64);
  __int64 v55;
  __int64 (*v56)(__int64, unsigned __int64*, __int64);
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  char* v64;
  char v65;
  char v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  __int16* v70;
  unsigned int* v71;
  unsigned int* v72;
  char v73;
  __int64 v74;
  __int64 (*v75)(__int64, unsigned __int64*, __int64);
  __int64 n;
  char v77;
  unsigned int v78;
  __int64 v79;
  __int64 (*v80)(__int64, unsigned __int64*, __int64);
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 (*v84)(__int64, unsigned __int64*, __int64);
  __int64 v85;
  bool v86;
  const char** v87;
  const char* v88;
  __int64 v89;
  unsigned __int64* v90;
  unsigned int* v91;
  __int64 v92;
  unsigned __int64* v93;
  char v94;
  __int64 v95;
  __int64 (*v96)(__int64, unsigned __int64*, __int64);
  __int64 v97;
  __int64 (*v98)(__int64, unsigned __int64*, __int64);
  unsigned __int64* v99;
  unsigned __int64* v100;
  unsigned __int64* v101;
  char v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  __int64 v110;
  __int64 (*v111)(__int64, unsigned __int64*, __int64);
  unsigned int v112;
  __int64 v113;
  __int64 (*v114)(__int64, unsigned __int64*, __int64);
  __int64 v115;
  __int64 (*v116)(__int64, unsigned __int64*, __int64);
  __int64 v117;
  __int64 v118;
  __int64 (*v119)(__int64, unsigned __int64*, __int64);
  unsigned __int64 v120;
  __int64 v121;
  __int64 (*v122)(__int64, unsigned __int64*, __int64);
  __int64 k;
  char v124;
  __int64 v125;
  __int64 (*v126)(__int64, unsigned __int64*, __int64);
  __int64 v127;
  __int64 (*v128)(__int64, unsigned __int64*, __int64);
  __int64 m;
  char v130;
  unsigned int v131;
  __int64 v132;
  __int64 (*v133)(__int64, unsigned __int64*, __int64);
  __int64 v134;
  __int64 (*v135)(__int64, unsigned __int64*, __int64);
  int v136;
  int v137;
  char* v139;
  unsigned __int64 v140;
  __int64 v141;
  _BYTE v142[4];

  v3 = result + 50;
  v4 = result + 24;
  v5 = a3;
  v6 = a2;
  v7 = result;
  v8 = (unsigned __int8)*a2;
  if (v8 == 37) {
    while (1) {
    LABEL_7:
      v14 = 2;
      v15 = 0;
      v140 = 0;
      v141 = 0;
      for (i = (unsigned __int8*)(v6 + 2);; ++i) {
        v18 = *(i - 1);
        if ((unsigned int)v18 <= 0x2A) {
          break;
        }
        switch (v18) {
        case '+':
          v17 = 2;
          break;
        case '-':
          v17 = 8;
          break;
        case '0':
          v17 = 16;
          break;
        default:
          goto LABEL_24;
        }
      LABEL_9:
        v15 |= v17;
        ++v14;
      }
      switch (v18) {
      case ' ':
        v17 = 1;
        goto LABEL_9;
      case '#':
        v17 = 4;
        goto LABEL_9;
      case '*':
        v19 = *((int*)v5 + 6);
        if ((v19 & 0x80000000) != 0 &&
            (*((_DWORD*)v5 + 6) = v19 + 8, (unsigned int)v19 <= 0xFFFFFFF8)) {
          v20 = (int*)((char*)v5[1] + v19);
        }
        else {
          v20 = (int*)(*v5)++;
        }
        v25 = *v20;
        if (v25 >= 0) {
          v21 = v25;
        }
        else {
          v21 = -v25;
        }
        v15 |= 8 * ((unsigned int)v25 >> 31);
        v18 = *i;
        if (v18 != 46) {
        LABEL_37:
          v26 = -1;
          if (v18 <= 107) {
            goto LABEL_38;
          }
        LABEL_57:
          if (v18 != 108) {
            v30 = v15 | 0xA0;
            if (v18 == 122) {
              v15 |= 0xA0u;
              v31 = v14 + 1;
            }
            else {
              v31 = v14;
            }
            if (v18 == 116) {
              v27 = v30;
            }
            else {
              v27 = v15;
            }
            if (v18 == 116) {
              v28 = v14 + 1;
            }
            else {
              v28 = v31;
            }
            goto LABEL_72;
          }
          v28 = v14 + 1;
          v32 = (unsigned __int8)v6[v14 + 1];
          if (v32 == 108) {
            v28 = v14 + 2;
            v27 = v15 | 0x80;
            goto LABEL_72;
          }
          v27 = v15 | 0x20;
          goto LABEL_73;
        }
        break;
      default:
      LABEL_24:
        if ((unsigned int)(v18 - 48) > 9) {
          v21 = 0;
          --v14;
          if (v18 != 46) {
            goto LABEL_37;
          }
        }
        else {
          v21 = 0;
          do {
            v22 = v18 + 10 * v21;
            v18 = (unsigned __int8)v6[v14++];
            v21 = v22 - 48;
          } while ((unsigned int)(v18 - 48) < 0xA);
          --v14;
          if (v18 != 46) {
            goto LABEL_37;
          }
        }
        break;
      }
      v18 = (unsigned __int8)v6[v14 + 1];
      if (v18 == 42) {
        v23 = *((int*)v5 + 6);
        if ((v23 & 0x80000000) != 0 &&
            (*((_DWORD*)v5 + 6) = v23 + 8, (unsigned int)v23 <= 0xFFFFFFF8)) {
          v24 = (int*)((char*)v5[1] + v23);
        }
        else {
          v24 = (int*)(*v5)++;
        }
        v26 = *v24;
        v14 += 2;
        v18 = (unsigned __int8)v6[v14];
        if (v26 <= -1) {
          v26 = -1;
        }
        if ((unsigned __int8)v6[v14] > 0x6Bu) {
          goto LABEL_57;
        }
      }
      else if ((unsigned int)(v18 - 48) > 9) {
        v26 = 0;
        ++v14;
        if (v18 > 107) {
          goto LABEL_57;
        }
      }
      else {
        v26 = 0;
        do {
          v29 = v18 + 10 * v26;
          v18 = (unsigned __int8)v6[v14++ + 2];
          v26 = v29 - 48;
        } while ((unsigned int)(v18 - 48) < 0xA);
        ++v14;
        if (v18 > 107) {
          goto LABEL_57;
        }
      }
    LABEL_38:
      if (v18 == 76) {
        v27 = v15 | 0x800;
        v28 = v14 + 1;
      LABEL_72:
        v32 = (unsigned __int8)v6[v28];
        goto LABEL_73;
      }
      if (v18 != 104) {
        if (v18 == 106) {
          v27 = v15 | 0xA0;
        }
        else {
          v27 = v15;
        }
        if (v18 == 106) {
          v28 = v14 + 1;
        }
        else {
          v28 = v14;
        }
        goto LABEL_72;
      }
      v28 = v14 + 1;
      v32 = (unsigned __int8)v6[v14 + 1];
      if (v32 == 104) {
        v28 = v14 + 2;
        v27 = v15 | 0x100;
        goto LABEL_72;
      }
      v27 = v15 | 0x40;
    LABEL_73:
      v33 = (unsigned int)(v32 - 37);
      v140 = __PAIR64__(v26, v27);
      LODWORD(v141) = v21;
      BYTE4(v141) = v32;
      v34 = 0;
      v35 = 0;
      v36 = 512;
      v37 = 10;
      v139 = &v6[v28 + 1];
      v38 = 87;
      switch (v33) {
      case 0LL:
        if (v28 != 1) {
          goto LABEL_182;
        }
        v13 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
        v12 = *(_QWORD*)(v7 + 8);
        v142[0] = 37;
        result = v13(v12, (unsigned __int64*)v142, 1);
        goto LABEL_6;
      case 30LL:
      case 62LL:
        if ((v26 & 0x80000000) == 0) {
          goto LABEL_182;
        }
        v50 = *((int*)a3 + 6);
        if ((v50 & 0x80000000) != 0 &&
            (*((_DWORD*)a3 + 6) = v50 + 8, (unsigned int)v50 <= 0xFFFFFFF8)) {
          v51 = *(_DWORD*)((char*)a3[1] + v50);
          v52 = v21 - 1;
          if ((v27 & 8) != 0) {
            goto LABEL_100;
          }
        }
        else {
          v93 = (*a3)++;
          v51 = *(_DWORD*)v93;
          v52 = v21 - 1;
          if ((v27 & 8) != 0) {
          LABEL_100:
            v54 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v53 = *(_QWORD*)(v7 + 8);
            v142[0] = v51;
            result = v54(v53, (unsigned __int64*)v142, 1);
            if (v21 >= 2) {
              do {
                v56 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
                v55 = *(_QWORD*)(v7 + 8);
                v142[0] = 32;
                result = v56(v55, (unsigned __int64*)v142, 1);
                --v52;
              } while (v52 != 0);
            }
            goto LABEL_6;
          }
        }
        if ((v27 & 0x10) != 0) {
          v94 = 48;
        }
        else {
          v94 = 32;
        }
        if (v21 >= 2) {
          do {
            v96 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v95 = *(_QWORD*)(v7 + 8);
            v142[0] = v94;
            v96(v95, (unsigned __int64*)v142, 1);
            --v52;
          } while (v52 != 0);
        }
        v98 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
        v97 = *(_QWORD*)(v7 + 8);
        v142[0] = v51;
        result = v98(v97, (unsigned __int64*)v142, 1);
        goto LABEL_6;
      case 31LL:
      case 36LL:
      case 63LL:
      case 68LL:
        goto LABEL_110;
      case 32LL:
      case 33LL:
      case 34LL:
      case 64LL:
      case 65LL:
      case 66LL:
        result = (*(__int64 (**)(__int64, unsigned __int64*,
                                 unsigned __int64**))(v7 + 16))(v7, &v140, a3);
        if ((result & 1) == 0) {
          goto LABEL_182;
        }
        goto LABEL_6;
      case 42LL:
      case 74LL:
        v34 = 0;
        v37 = 8;
        goto LABEL_109;
      case 43LL:
        v38 = 55;
        goto LABEL_106;
      case 46LL:
      case 78LL:
        v39 = (unsigned int)v26;
        v40 = *((int*)a3 + 6);
        if ((v27 & 0x20) == 0) {
          if ((v40 & 0x80000000) != 0 &&
              (*((_DWORD*)a3 + 6) = v40 + 8, (unsigned int)v40 <= 0xFFFFFFF8)) {
            v41 = *(const char**)((char*)a3[1] + v40);
            if (v41 != nullptr) {
              v42 = v41;
            }
            else {
              v42 = "(null)";
            }
            if (v26 < 0) {
            LABEL_85:
              result = strlen_plt(v42);
              v21 -= result;
              if ((v27 & 8) == 0) {
                goto LABEL_86;
              }
              goto LABEL_304;
            }
          }
          else {
            v87 = (const char**)(*a3)++;
            v88 = *v87;
            if (v88 != nullptr) {
              v42 = v88;
            }
            else {
              v42 = "(null)";
            }
            if (v26 < 0) {
              goto LABEL_85;
            }
          }
          if (v26 != 0) {
            v89 = 0;
            while (v42[v89] != 0) {
              if (v39 == ++v89) {
                result = (unsigned int)v39;
                v21 -= v39;
                if ((v27 & 8) != 0) {
                  goto LABEL_304;
                }
              LABEL_86:
                v136 = result;
                if ((v27 & 0x10) != 0) {
                  v43 = 48;
                }
                else {
                  v43 = 32;
                }
                if (v21 >= 1) {
                  do {
                  LABEL_90:
                    v45 =
                        *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
                    v44 = *(_QWORD*)(v7 + 8);
                    v142[0] = v43;
                    result = v45(v44, (unsigned __int64*)v142, 1);
                    --v21;
                  } while (v21 != 0);
                }
              LABEL_91:
                if (v136 >= 1) {
                  for (j = (unsigned int)v136; j != 0; --j) {
                    v47 = *v42++;
                    v49 =
                        *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
                    v48 = *(_QWORD*)(v7 + 8);
                    v142[0] = v47;
                    result = v49(v48, (unsigned __int64*)v142, 1);
                  }
                }
                goto LABEL_6;
              }
            }
            result = (unsigned int)v89;
            v21 -= v89;
            if ((v27 & 8) == 0) {
              goto LABEL_86;
            }
          LABEL_304:
            if ((int)result >= 1) {
              for (k = (unsigned int)result; k != 0; --k) {
                v124 = *v42++;
                v126 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
                v125 = *(_QWORD*)(v7 + 8);
                v142[0] = v124;
                result = v126(v125, (unsigned __int64*)v142, 1);
              }
            }
          }
          else if ((v27 & 8) == 0) {
            v136 = 0;
            if ((v27 & 0x10) != 0) {
              v43 = 48;
            }
            else {
              v43 = 32;
            }
            if (v21 >= 1) {
              goto LABEL_90;
            }
            goto LABEL_91;
          }
          if (v21 >= 1) {
            do {
              v128 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
              v127 = *(_QWORD*)(v7 + 8);
              v142[0] = 32;
              result = v128(v127, (unsigned __int64*)v142, 1);
              --v21;
            } while (v21 != 0);
          }
          goto LABEL_6;
        }
        if ((v40 & 0x80000000) != 0 &&
            (*((_DWORD*)a3 + 6) = v40 + 8, (unsigned int)v40 <= 0xFFFFFFF8)) {
          v71 = *(unsigned int**)((char*)a3[1] + v40);
          if (v71 != nullptr) {
            v72 = v71;
          }
          else {
            v72 = (unsigned int*)&SdkData_bd15d4;
          }
          if (v26 < 0) {
            goto LABEL_170;
          }
        }
        else {
          v90 = (*a3)++;
          v91 = (unsigned int*)*v90;
          if (v91 != nullptr) {
            v72 = v91;
          }
          else {
            v72 = (unsigned int*)&SdkData_bd15d4;
          }
          if (v26 < 0) {
          LABEL_170:
            result = wcslen_plt(v72);
            v21 -= result;
            if ((v27 & 8) != 0) {
              goto LABEL_311;
            }
          LABEL_171:
            v137 = result;
            if ((v27 & 0x10) != 0) {
              v73 = 48;
            }
            else {
              v73 = 32;
            }
            if (v21 < 1) {
              goto LABEL_176;
            }
            goto LABEL_175;
          }
        }
        if (v26 != 0) {
          v92 = 0;
          while (v72[v92] != 0) {
            if (v39 == ++v92) {
              result = (unsigned int)v39;
              v21 -= v39;
              if ((v27 & 8) == 0) {
                goto LABEL_171;
              }
              goto LABEL_311;
            }
          }
          result = (unsigned int)v92;
          v21 -= v92;
          if ((v27 & 8) == 0) {
            goto LABEL_171;
          }
        LABEL_311:
          if ((int)result >= 1) {
            for (m = (unsigned int)result; m != 0; --m) {
              v131 = *v72++;
              v130 = v131;
              if (v131 <= 0x7F) {
                v133 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
                v132 = *(_QWORD*)(v7 + 8);
                v142[0] = v130;
                result = v133(v132, (unsigned __int64*)v142, 1);
              }
            }
          }
        LABEL_316:
          if (v21 >= 1) {
            do {
              v135 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
              v134 = *(_QWORD*)(v7 + 8);
              v142[0] = 32;
              result = v135(v134, (unsigned __int64*)v142, 1);
              --v21;
            } while (v21 != 0);
          }
          goto LABEL_6;
        }
        if ((v27 & 8) != 0) {
          goto LABEL_316;
        }
        v137 = 0;
        if ((v27 & 0x10) != 0) {
          v73 = 48;
        }
        else {
          v73 = 32;
        }
        if (v21 >= 1) {
          do {
          LABEL_175:
            v75 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v74 = *(_QWORD*)(v7 + 8);
            v142[0] = v73;
            result = v75(v74, (unsigned __int64*)v142, 1);
            --v21;
          } while (v21 != 0);
        }
      LABEL_176:
        if (v137 >= 1) {
          for (n = (unsigned int)v137; n != 0; --n) {
            v78 = *v72++;
            v77 = v78;
            if (v78 <= 0x7F) {
              v80 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
              v79 = *(_QWORD*)(v7 + 8);
              v142[0] = v77;
              result = v80(v79, (unsigned __int64*)v142, 1);
            }
          }
        }
        goto LABEL_6;
      case 48LL:
      case 80LL:
        goto LABEL_109;
      case 51LL:
        v38 = 55;
        goto LABEL_108;
      case 75LL:
      LABEL_106:
        v26 = 16;
        v34 = 1;
        v36 = 672;
        v37 = 16;
        HIDWORD(v140) = 16;
        goto LABEL_109;
      case 83LL:
      LABEL_108:
        v37 = 16;
        v34 = 1;
      LABEL_109:
        v27 |= v36;
        LODWORD(v140) = v27;
        v35 = v34;
      LABEL_110:
        if ((v27 & 8) != 0) {
          v27 &= ~0x10u;
          LODWORD(v140) = v27;
        }
        if (v26 < 0) {
          v26 = 1;
          HIDWORD(v140) = 1;
          if ((v27 & 0x200) == 0) {
          LABEL_114:
            if ((v27 & 0x100) != 0) {
              v61 = *((int*)a3 + 6);
              if ((v61 & 0x80000000) == 0 || (*((_DWORD*)a3 + 6) = v61 + 8,
                                              (unsigned int)v61 > 0xFFFFFFF8)) {
                v64 = (char*)(*a3)++;
                v58 = *v64;
                *(_DWORD*)(v7 + 52) = 0;
                if ((v58 & 0x8000000000000000LL) != 0) {
                  goto LABEL_158;
                }
                goto LABEL_138;
              }
              v58 = *((char*)a3[1] + v61);
              *(_DWORD*)(v7 + 52) = 0;
              if ((v58 & 0x8000000000000000LL) == 0) {
                goto LABEL_138;
              }
              goto LABEL_158;
            }
            if ((v27 & 0x40) != 0) {
              v67 = *((int*)a3 + 6);
              if ((v67 & 0x80000000) == 0 || (*((_DWORD*)a3 + 6) = v67 + 8,
                                              (unsigned int)v67 > 0xFFFFFFF8)) {
                v70 = (__int16*)(*a3)++;
                v58 = *v70;
                *(_DWORD*)(v7 + 52) = 0;
                if ((v58 & 0x8000000000000000LL) != 0) {
                  goto LABEL_158;
                }
                goto LABEL_138;
              }
              v58 = *(__int16*)((char*)a3[1] + v67);
              *(_DWORD*)(v7 + 52) = 0;
              if ((v58 & 0x8000000000000000LL) == 0) {
                goto LABEL_138;
              }
              goto LABEL_158;
            }
            if ((v27 & 0x80) != 0) {
              v57 = *((int*)a3 + 6);
              if ((v57 & 0x80000000) != 0) {
                *((_DWORD*)a3 + 6) = v57 + 8;
                if ((unsigned int)v57 <= 0xFFFFFFF8) {
                  goto LABEL_236;
                }
              }
            }
            else {
              v57 = *((int*)a3 + 6);
              if ((v27 & 0x20) == 0) {
                if ((v57 & 0x80000000) != 0) {
                  *((_DWORD*)a3 + 6) = v57 + 8;
                  if ((unsigned int)v57 <= 0xFFFFFFF8) {
                    v58 = *(int*)((char*)a3[1] + v57);
                    *(_DWORD*)(v7 + 52) = 0;
                    if ((v58 & 0x8000000000000000LL) != 0) {
                      goto LABEL_158;
                    }
                  LABEL_138:
                    if (v58 == 0 && v26 == 0) {
                      v58 = 0;
                      if (v37 != 8) {
                        goto LABEL_189;
                      }
                      goto LABEL_284;
                    }
                    if ((v27 & 2) == 0) {
                      if ((v27 & 1) != 0) {
                        v66 = 32;
                        goto LABEL_187;
                      }
                    LABEL_188:
                      if (v37 != 8) {
                        goto LABEL_189;
                      }
                      goto LABEL_284;
                    }
                    v66 = 43;
                  LABEL_187:
                    *(_BYTE*)(v7 + 50) = v66;
                    *(_DWORD*)(v7 + 52) = 1;
                    goto LABEL_188;
                  }
                }
                v101 = (*a3)++;
                v58 = *(int*)v101;
                *(_DWORD*)(v7 + 52) = 0;
                if ((v58 & 0x8000000000000000LL) == 0) {
                  goto LABEL_138;
                }
              LABEL_158:
                v58 = -(__int64)v58;
                v66 = 45;
                goto LABEL_187;
              }
              if ((v57 & 0x80000000) != 0) {
                *((_DWORD*)a3 + 6) = v57 + 8;
                if ((unsigned int)v57 <= 0xFFFFFFF8) {
                LABEL_236:
                  v58 = *(unsigned __int64*)((char*)a3[1] + v57);
                  *(_DWORD*)(v7 + 52) = 0;
                  if ((v58 & 0x8000000000000000LL) == 0) {
                    goto LABEL_138;
                  }
                  goto LABEL_158;
                }
              }
            }
            v99 = (*a3)++;
            v58 = *v99;
            *(_DWORD*)(v7 + 52) = 0;
            if ((v58 & 0x8000000000000000LL) == 0) {
              goto LABEL_138;
            }
            goto LABEL_158;
          }
        }
        else {
          v27 &= ~0x10u;
          LODWORD(v140) = v27;
          if ((v27 & 0x200) == 0) {
            goto LABEL_114;
          }
        }
        if ((v27 & 0x100) != 0) {
          v62 = *((int*)a3 + 6);
          if ((v62 & 0x80000000) != 0 &&
              (*((_DWORD*)a3 + 6) = v62 + 8, (unsigned int)v62 <= 0xFFFFFFF8)) {
            v63 = (char*)a3[1] + v62;
          }
          else {
            v63 = (char*)(*a3)++;
          }
          v58 = (unsigned __int8)*v63;
          v65 = v27 & 0xFC;
          *(_DWORD*)(v7 + 52) = 0;
          if (v58 == 0) {
            v35 = 0;
          }
          LODWORD(v140) = v27 & 0xFFFFFFFC;
          if ((v27 & 4) != 0) {
          LABEL_254:
            if (v35 != 0) {
              *(_BYTE*)(v7 + 51) = 48;
              *(_BYTE*)(v7 + 50) = v38 + 33;
              *(_DWORD*)(v7 + 52) = 2;
            LABEL_256:
              v85 = 0;
              do {
                if ((v58 & 0xF) >= 0xA) {
                  v102 = (v58 & 0xF) + v38;
                }
                else {
                  v102 = v58 & 0xF | 0x30;
                }
                *(_BYTE*)(v4 + v85++) = v102;
                v86 = v58 >= 0x10;
                v58 >>= 4;
              } while (v86);
              LOBYTE(v27) = v65;
              goto LABEL_262;
            }
          }
        }
        else {
          if ((v27 & 0x40) == 0) {
            if ((v27 & 0x80) != 0) {
              v59 = *((int*)a3 + 6);
              if ((v59 & 0x80000000) != 0) {
                *((_DWORD*)a3 + 6) = v59 + 8;
                if ((unsigned int)v59 <= 0xFFFFFFF8) {
                  goto LABEL_242;
                }
              }
            }
            else {
              v59 = *((int*)a3 + 6);
              if ((v27 & 0x20) == 0) {
                if ((v59 & 0x80000000) != 0 &&
                    (*((_DWORD*)a3 + 6) = v59 + 8,
                     (unsigned int)v59 <= 0xFFFFFFF8)) {
                  v60 = (char*)a3[1] + v59;
                }
                else {
                  v60 = (char*)(*a3)++;
                }
                v58 = *(unsigned int*)v60;
                v65 = v27 & 0xFC;
                *(_DWORD*)(v7 + 52) = 0;
                if (v58 == 0) {
                  v35 = 0;
                }
                LODWORD(v140) = v27 & 0xFFFFFFFC;
                if ((v27 & 4) != 0) {
                  goto LABEL_254;
                }
                goto LABEL_283;
              }
              if ((v59 & 0x80000000) != 0) {
                *((_DWORD*)a3 + 6) = v59 + 8;
                if ((unsigned int)v59 <= 0xFFFFFFF8) {
                LABEL_242:
                  v100 = (unsigned __int64*)((char*)a3[1] + v59);
                  goto LABEL_244;
                }
              }
            }
            v100 = (*a3)++;
          LABEL_244:
            v58 = *v100;
            v65 = v27 & 0xFC;
            *(_DWORD*)(v7 + 52) = 0;
            if (v58 == 0) {
              v35 = 0;
            }
            LODWORD(v140) = v27 & 0xFFFFFFFC;
            if ((v27 & 4) != 0) {
              goto LABEL_254;
            }
            goto LABEL_283;
          }
          v68 = *((int*)a3 + 6);
          if ((v68 & 0x80000000) != 0 &&
              (*((_DWORD*)a3 + 6) = v68 + 8, (unsigned int)v68 <= 0xFFFFFFF8)) {
            v69 = (char*)a3[1] + v68;
          }
          else {
            v69 = (char*)(*a3)++;
          }
          v58 = *(unsigned __int16*)v69;
          v65 = v27 & 0xFC;
          *(_DWORD*)(v7 + 52) = 0;
          if (v58 == 0) {
            v35 = 0;
          }
          LODWORD(v140) = v27 & 0xFFFFFFFC;
          if ((v27 & 4) != 0) {
            goto LABEL_254;
          }
        }
      LABEL_283:
        LOBYTE(v27) = v65;
        if (v37 != 8) {
        LABEL_189:
          if (v37 == 10) {
            if (HIDWORD(v58) != 0) {
              v85 = 0;
              do {
                *(_BYTE*)(v4 + v85++) = v58 % 0xA + 48;
                v86 = v58 >= 0xA;
                v58 /= 0xAu;
              } while (v86);
            }
            else {
              if (v58 == 0) {
              LABEL_197:
                LODWORD(v85) = 0;
                goto LABEL_262;
              }
              v85 = 0;
              do {
                *(_BYTE*)(v4 + v85++) = (unsigned int)v58 % 0xA + 48;
                v86 = (unsigned int)v58 >= 0xA;
                LODWORD(v58) = (unsigned int)v58 / 0xA;
              } while (v86);
            }
            goto LABEL_262;
          }
          if (v58 == 0) {
            goto LABEL_197;
          }
          v65 = v27;
          goto LABEL_256;
        }
      LABEL_284:
        if (v58 != 0) {
          v85 = 0;
          do {
            *(_BYTE*)(v4 + v85++) = v58 & 7 | 0x30;
            v86 = v58 >= 8;
            v58 >>= 3;
          } while (v86);
          if ((v27 & 4) == 0) {
            goto LABEL_262;
          }
        LABEL_290:
          *(_BYTE*)(v4 + (int)v85) = 48;
          LODWORD(v85) = v85 + 1;
          goto LABEL_262;
        }
        LODWORD(v85) = 0;
        if ((v27 & 4) != 0) {
          goto LABEL_290;
        }
      LABEL_262:
        v103 = v26 - v85;
        v104 = *(_DWORD*)(v7 + 52);
        v105 = v21 - (v104 + v85);
        v106 = v105;
        if (v103 > v105) {
          v105 = v103;
        }
        if ((v27 & 0x10) != 0) {
          v107 = v105;
        }
        else {
          v107 = v103;
        }
        v108 = v106 - (v107 & ~(v107 >> 31));
        if ((v27 & 8) == 0 && v108 >= 1) {
          v109 = v106 - (v107 & ~(v107 >> 31));
          do {
            v111 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v110 = *(_QWORD*)(v7 + 8);
            v142[0] = 32;
            result = v111(v110, (unsigned __int64*)v142, 1);
            --v109;
          } while (v109 != 0);
          v104 = *(_DWORD*)(v7 + 52);
        }
        if (v104 >= 1) {
          do {
            v112 = v104 - 1;
            v114 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v113 = *(_QWORD*)(v7 + 8);
            *(_DWORD*)(v7 + 52) = v112;
            v142[0] = *(_BYTE*)(v3 + v112);
            result = v114(v113, (unsigned __int64*)v142, 1);
            v104 = *(_DWORD*)(v7 + 52);
          } while (v104 > 0);
        }
        if (v107 >= 1) {
          do {
            v116 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v115 = *(_QWORD*)(v7 + 8);
            v142[0] = 48;
            result = v116(v115, (unsigned __int64*)v142, 1);
            --v107;
          } while (v107 != 0);
        }
        if ((int)v85 >= 1) {
          v117 = (unsigned int)v85 + 23LL;
          do {
            v119 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v118 = *(_QWORD*)(v7 + 8);
            v142[0] = *(_BYTE*)(v7 + v117);
            result = v119(v118, (unsigned __int64*)v142, 1);
            v120 = v117 - 23;
            --v117;
          } while (v120 > 1);
        }
        if ((v140 & 8) != 0 && v108 >= 1) {
          do {
            v122 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v121 = *(_QWORD*)(v7 + 8);
            v142[0] = 32;
            result = v122(v121, (unsigned __int64*)v142, 1);
            --v108;
          } while (v108 != 0);
        }
      LABEL_6:
        v5 = a3;
        v6 = v139;
        v8 = (unsigned __int8)*v139;
        if (v8 != 37) {
          goto LABEL_2;
        }
        break;
      default:
      LABEL_182:
        v139 = &v6[v28];
        if ((int)v28 >= 1) {
          v81 = v28 & 0x7FFFFFFF;
          do {
            v82 = *v6++;
            v84 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
            v83 = *(_QWORD*)(v7 + 8);
            v142[0] = v82;
            result = v84(v83, (unsigned __int64*)v142, 1);
            --v81;
          } while (v81 != 0);
        }
        goto LABEL_6;
      }
    }
  }
LABEL_2:
  while (v8 != 0) {
    v10 = *(__int64 (**)(__int64, unsigned __int64*, __int64))v7;
    v9 = *(_QWORD*)(v7 + 8);
    LOBYTE(v140) = v8;
    result = v10(v9, &v140, 1);
    v11 = (unsigned __int8)*++v6;
    v8 = v11;
    if (v11 == 37) {
      goto LABEL_7;
    }
  }
  return result;
}

__int64 util_format_string_a6500(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;

  *(_DWORD*)(a1 + 16) += a3;
  result = *(_QWORD*)a1;
  v5 = *(_QWORD*)(a1 + 8);
  if (result != v5) {
    v6 = v5 + ~result;
    if (v6 >= a3) {
      LODWORD(v6) = a3;
    }
    v7 = (int)v6;
    result = memcpy_plt(result, a2, (int)v6);
    v8 = (_BYTE*)(*(_QWORD*)a1 + v7);
    *(_QWORD*)a1 = v8;
    *v8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
