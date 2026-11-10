#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20baba8[])();
extern __int64 (*GameData_20bb018[])();
extern __int64 (*GameData_20bb100[])();
extern __int64 GameData_20c62a8;
extern __int64 GameData_20c9670;
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
extern __int64* GameData_21319f0[9];
extern __int64 GameData_2131ce0[30];
extern __int64 GameData_2131ce8[29];
extern __int64 GameData_22416f0;
extern int GameData_2263c38;
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_168c0a0(__int64 result, _QWORD*, unsigned __int64, __int64,
                            signed __int64);
__int64 GameRoutine_1690120(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e4480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e45e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e4700(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e4860(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e7010(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1753970(_QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7fb7c0(_QWORD);
bool GameRoutine_1690120_alt1(_DWORD*, int*) __asm__("GameRoutine_1690120");
__int64 GameHr_168f760(__int64 result, int* a2, __int64 a3, char a4);

__int64 GameHr_168c360(__int64 result, _QWORD* a2, unsigned __int64 a3,
                       _QWORD* a4)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  if (a3 != 0) {
    if (a3 == 2) {
      v5 = a2 - 2;
      if (*((_DWORD*)a2 - 2) >= *(_DWORD*)(result + 8)) {
        v21 = *(_QWORD*)(result + 8);
        *a4 = *(_QWORD*)result;
        a4[1] = v21;
        v23 = *v5;
        v22 = *(a2 - 1);
        a4[2] = v23;
        a4[3] = v22;
      }
      else {
        v7 = *v5;
        v6 = *(a2 - 1);
        *a4 = v7;
        a4[1] = v6;
        v8 = *(_QWORD*)(result + 8);
        a4[2] = *(_QWORD*)result;
        a4[3] = v8;
      }
    }
    else if (a3 == 1) {
      v4 = *(_QWORD*)(result + 8);
      *a4 = *(_QWORD*)result;
      a4[1] = v4;
    }
    else if ((__int64)a3 > 8) {
      v24 = a3 >> 1;
      v25 = (_QWORD*)result;
      v29 = (_QWORD*)(result + 16 * (a3 >> 1));
      v30 = 16 * (a3 >> 1);
      GameRoutine_168c0a0(result, v29, v24, (__int64)a4, v24);
      result = GameRoutine_168c0a0((__int64)v29, a2, a3 - v24,
                                   (__int64)&a4[2 * v24], a3 - v24);
      if (v30 != 0) {
        v31 = v29;
        v32 = a4;
        v33 = a2;
        v34 = v25;
        while (v31 != a2) {
          if (*((_DWORD*)v31 + 2) >= *((_DWORD*)v34 + 2)) {
            v35 = *v34;
            v36 = v34[1];
            v34 += 2;
          }
          else {
            v35 = *v31;
            v36 = v31[1];
            v31 += 2;
          }
          *v32 = v35;
          v32[1] = v36;
          v32 += 2;
          if (v34 == v29) {
            goto LABEL_33;
          }
        }
        while (v34 != v29) {
          v37 = *v34;
          v38 = v34[1];
          v34 += 2;
          *v32 = v37;
          v32[1] = v38;
          v32 += 2;
        }
      }
      else {
        v31 = v29;
        v32 = a4;
        v33 = a2;
      LABEL_33:
        while (v31 != v33) {
          v39 = *v31;
          v40 = v31[1];
          v31 += 2;
          *v32 = v39;
          v32[1] = v40;
          v32 += 2;
        }
      }
    }
    else if ((_QWORD*)result != a2) {
      v9 = *(_QWORD*)(result + 8);
      v10 = (_QWORD*)(result + 16);
      *a4 = *(_QWORD*)result;
      a4[1] = v9;
      if ((_QWORD*)(result + 16) != a2) {
        v11 = 0;
        v12 = a4;
        do {
          v14 = v10;
          v15 = v12 + 2;
          if (*(_DWORD*)(result + 24) >= *((_DWORD*)v12 + 2)) {
            v13 = v10[1];
            *v15 = *v10;
            v15[1] = v13;
          }
          else {
            v16 = v12[1];
            *v15 = *v12;
            v12[3] = v16;
            v17 = (char*)a4;
            if (v12 != a4) {
              v18 = v11;
              while (1) {
                v17 = (char*)a4 + v18;
                v19 = *(_DWORD*)((char*)a4 + v18 - 8);
                if (*(_DWORD*)(result + 24) >= v19) {
                  break;
                }
                v20 = *((_QWORD*)v17 - 2);
                v18 -= 16;
                *((_DWORD*)v17 + 2) = v19;
                *(_QWORD*)v17 = v20;
                if (v18 == 0) {
                  v17 = (char*)a4;
                  break;
                }
              }
            }
            *(_QWORD*)v17 = *v14;
            *((_DWORD*)v17 + 2) = *(_DWORD*)(result + 24);
          }
          v10 = v14 + 2;
          v11 += 16;
          v12 = v15;
          result = (__int64)v14;
        } while (v14 + 2 != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_168f760(__int64 result, int* a2, __int64 a3, char a4)
{
  int* v7;
  int* v8;
  __int64 v9;
  int v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  int* v38;
  int v39;
  int* v40;
  int* v41;
  int v42;
  int v43;
  int v44;
  int* v45;
  int* v46;
  int v47;
  int v48;
  int* v49;
  bool v50;
  bool v51;
  int v52;
  unsigned __int64 v53;
  int* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int* v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int* v74;
  bool v76;
  __int64 v77;
  int* v78;
  int* v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  int* v88;
  int v89;
  int v90;
  bool v91;
  int* v92;
  int v93;
  int v94;
  bool v95;
  int* v96;
  __int64 v97;
  int v98;
  __int64 v99;
  int* v100;
  int* v101;
  int v102;
  int v103;
  bool v104;
  int v105;
  int* v106;
  int* v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  int v112;
  int* v113;
  int v114;
  int* v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;

  v7 = (int*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v68 = *v8;
            v69 = v8[1];
            v70 = *(a2 - 1);
            if (v69 < *v8) {
              if (v70 >= v69) {
                *v8 = v69;
                v8[1] = v68;
                v119 = *(a2 - 1);
                if (v119 < v68) {
                  v8[1] = v119;
                  *(a2 - 1) = v68;
                }
              }
              else {
                *v8 = v70;
                *(a2 - 1) = v68;
              }
              return result;
            }
            if (v70 >= v69) {
              return result;
            }
            v8[1] = v70;
            *(a2 - 1) = v69;
            v116 = v8[1];
          LABEL_209:
            v125 = *v8;
            if (v116 < *v8) {
              *v8 = v116;
              v8[1] = v125;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 != 5) {
              goto LABEL_10;
            }
            v62 = *v8;
            v61 = v8[1];
            v63 = v8[2];
            if (v61 >= *v8) {
              if (v63 < v61) {
                v8[1] = v63;
                v8[2] = v61;
                if (v63 >= v62) {
                  v64 = v62;
                  v65 = v63;
                }
                else {
                  *v8 = v63;
                  v8[1] = v62;
                  v64 = v63;
                  v65 = v62;
                }
                goto LABEL_199;
              }
              v64 = *v8;
              v65 = v8[1];
            }
            else {
              if (v63 < v61) {
                *v8 = v63;
                v8[2] = v62;
                v64 = v63;
                v65 = v61;
              LABEL_186:
                v61 = v62;
              LABEL_199:
                v121 = v8[3];
                if (v121 >= v61) {
                  v61 = v8[3];
                }
                else {
                  v8[2] = v121;
                  v8[3] = v61;
                  if (v121 < v65) {
                    v8[1] = v121;
                    v8[2] = v65;
                    if (v121 < v64) {
                      *v8 = v121;
                      v8[1] = v64;
                    }
                  }
                }
                v122 = *(a2 - 1);
                if (v122 >= v61) {
                  return result;
                }
                v8[3] = v122;
                *(a2 - 1) = v61;
                v123 = v8[2];
                v116 = v8[3];
                if (v116 >= v123) {
                  return result;
                }
                v8[2] = v116;
                v8[3] = v123;
                goto LABEL_207;
              }
              *v8 = v61;
              v8[1] = v62;
              if (v63 < v62) {
                v8[1] = v63;
                v8[2] = v62;
                v64 = v61;
                v65 = v63;
                goto LABEL_186;
              }
              v64 = v61;
              v65 = v62;
            }
            v61 = v63;
            goto LABEL_199;
          }
          v72 = *v8;
          v71 = v8[1];
          v73 = v8[2];
          if (v71 >= *v8) {
            if (v73 < v71) {
              v8[1] = v73;
              v8[2] = v71;
              if (v73 < v72) {
                *v8 = v73;
                v8[1] = v72;
              }
              goto LABEL_194;
            }
          }
          else {
            if (v73 < v71) {
              *v8 = v73;
            LABEL_192:
              v8[2] = v72;
              v71 = v72;
            LABEL_194:
              v120 = *(a2 - 1);
              if (v120 >= v71) {
                return result;
              }
              v8[2] = v120;
              *(a2 - 1) = v71;
              v116 = v8[2];
            LABEL_207:
              v124 = v8[1];
              if (v116 >= v124) {
                return result;
              }
              v8[1] = v116;
              v8[2] = v124;
              goto LABEL_209;
            }
            *v8 = v71;
            v8[1] = v72;
            if (v73 < v72) {
              v8[1] = v73;
              goto LABEL_192;
            }
          }
          v71 = v73;
          goto LABEL_194;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v66 = *(a2 - 1);
          v67 = *v8;
          if (v66 < *v8) {
            *v8 = v66;
            *(a2 - 1) = v67;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v74 = v8 + 1;
          v76 = v8 == a2 || v74 == a2;
          if ((a4 & 1) != 0) {
            if (!v76) {
              v77 = 4;
              v78 = v8;
              do {
                v81 = *v78;
                v80 = v78[1];
                v78 = v74;
                if (v80 < v81) {
                  v82 = v77;
                  do {
                    v83 = v82 - 4;
                    *(int*)((char*)v8 + v82) = v81;
                    if (v82 == 4) {
                      v79 = v8;
                      goto LABEL_125;
                    }
                    v84 = (char*)v8 + v82;
                    v82 -= 4;
                    v81 = *((_DWORD*)v84 - 2);
                  } while (v80 < v81);
                  v79 = (int*)((char*)v8 + v83);
                LABEL_125:
                  *v79 = v80;
                }
                v74 = v78 + 1;
                v77 += 4;
              } while (v78 + 1 != a2);
            }
          }
          else if (!v76) {
            do {
              v118 = *v7;
              v117 = v7[1];
              v7 = v74;
              if (v117 < v118) {
                do {
                  *v74 = v118;
                  v118 = *(v74 - 2);
                  --v74;
                } while (v117 < v118);
                *v74 = v117;
              }
              v74 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v85 = (unsigned __int64)(v9 - 2) >> 1;
            v86 = v85;
            do {
              if (v85 >= v86) {
                v87 = (2 * (v86 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v88 = &v8[v87];
                v89 = *v88;
                if ((__int64)(2 * v86 + 2) < v9) {
                  v90 = v88[1];
                  v91 = v89 < v90;
                  if (v89 <= v90) {
                    v89 = v88[1];
                  }
                  if (v91) {
                    ++v88;
                    v87 = 2 * v86 + 2;
                  }
                }
                v92 = &v8[v86];
                v93 = *v92;
                if (v89 >= *v92) {
                  do {
                    v96 = v88;
                    *v92 = v89;
                    if ((__int64)v85 < v87) {
                      break;
                    }
                    v97 = (2 * (v87 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v87 = 2 * v87 + 2;
                    v88 = &v8[v97];
                    v89 = *v88;
                    if (v87 < v9) {
                      v94 = v88[1];
                      v95 = v89 < v94;
                      if (v89 <= v94) {
                        v89 = v88[1];
                      }
                      if (v95) {
                        ++v88;
                      }
                      else {
                        v87 = v97;
                      }
                    }
                    else {
                      v87 = v97;
                    }
                    v92 = v96;
                  } while (v89 >= v93);
                  *v96 = v93;
                }
              }
              v91 = (__int64)v86-- <= 0;
            } while (!v91);
            do {
              v98 = *v8;
              v99 = 0;
              v100 = v8;
              do {
                v107 = &v100[v99];
                v106 = v107 + 1;
                v105 = v107[1];
                v108 = (2 * v99) | 1;
                v99 = 2 * v99 + 2;
                if (v99 < v9) {
                  v103 = v107[2];
                  v101 = v107 + 2;
                  v102 = v103;
                  v104 = v105 < v103;
                  if (v105 <= v103) {
                    v105 = v102;
                  }
                  if (v104) {
                    v106 = v101;
                  }
                  else {
                    v99 = v108;
                  }
                }
                else {
                  v99 = v108;
                }
                *v100 = v105;
                v100 = v106;
              } while (v99 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v106 == --a2) {
                *v106 = v98;
              }
              else {
                *v106 = *a2;
                *a2 = v98;
                v109 = ((char*)v106 - (char*)v8 + 4) >> 2;
                v91 = v109 < 2;
                v110 = v109 - 2;
                if (!v91) {
                  v111 = v110 >> 1;
                  v112 = *v106;
                  v113 = &v8[v111];
                  v114 = *v113;
                  if (*v113 < *v106) {
                    do {
                      v115 = v113;
                      *v106 = v114;
                      if (v111 == 0) {
                        break;
                      }
                      v111 = (v111 - 1) >> 1;
                      v106 = v113;
                      v113 = &v8[v111];
                      v114 = *v113;
                    } while (*v113 < v112);
                    *v115 = v112;
                  }
                }
              }
              v91 = v9-- <= 2;
            } while (!v91);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        if ((unsigned __int64)v9 >= 0x81) {
          v12 = *v11;
          v13 = *v8;
          if (*v11 >= *v8) {
            if (v10 < v12) {
              *v11 = v10;
              *(a2 - 1) = v12;
              v16 = *v8;
              if (*v11 < *v8) {
                *v8 = *v11;
                *v11 = v16;
              }
            }
          }
          else {
            if (v10 >= v12) {
              *v8 = v12;
              *v11 = v13;
              v18 = *(a2 - 1);
              if (v18 >= v13) {
                goto LABEL_28;
              }
              *v11 = v18;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v13;
          }
        LABEL_28:
          v19 = *(v11 - 1);
          v20 = v8[1];
          v21 = *(a2 - 2);
          if (v19 >= v20) {
            if (v21 < v19) {
              *(v11 - 1) = v21;
              *(a2 - 2) = v19;
              v22 = *(v11 - 1);
              v23 = v8[1];
              if (v22 < v23) {
                v8[1] = v22;
                *(v11 - 1) = v23;
              }
            }
          }
          else {
            if (v21 >= v19) {
              v8[1] = v19;
              *(v11 - 1) = v20;
              v25 = *(a2 - 2);
              if (v25 >= v20) {
                goto LABEL_40;
              }
              *(v11 - 1) = v25;
            }
            else {
              v8[1] = v21;
            }
            *(a2 - 2) = v20;
          }
        LABEL_40:
          v26 = v11[1];
          v27 = v8[2];
          v28 = *(a2 - 3);
          if (v26 >= v27) {
            if (v28 < v26) {
              v11[1] = v28;
              *(a2 - 3) = v26;
              v29 = v11[1];
              v30 = v8[2];
              if (v29 < v30) {
                v8[2] = v29;
                v11[1] = v30;
              }
            }
          }
          else {
            if (v28 >= v26) {
              v8[2] = v26;
              v11[1] = v27;
              v31 = *(a2 - 3);
              if (v31 >= v27) {
                goto LABEL_49;
              }
              v11[1] = v31;
            }
            else {
              v8[2] = v28;
            }
            *(a2 - 3) = v27;
          }
        LABEL_49:
          v32 = *(v11 - 1);
          v33 = *v11;
          v34 = v11[1];
          if (*v11 >= v32) {
            if (v34 >= v33) {
              goto LABEL_55;
            }
            *v11 = v34;
            v11[1] = v33;
            if (v34 < v32) {
              *(v11 - 1) = v34;
              *v11 = v32;
            LABEL_59:
              v35 = *v8;
              *v8 = v32;
              *v11 = v35;
              goto LABEL_60;
            }
          }
          else {
            if (v34 < v33) {
              *(v11 - 1) = v34;
              v11[1] = v32;
            LABEL_55:
              v32 = v33;
              goto LABEL_59;
            }
            *(v11 - 1) = v33;
            *v11 = v32;
            if (v34 >= v32) {
              goto LABEL_59;
            }
            *v11 = v34;
            v11[1] = v32;
          }
          v32 = v34;
          goto LABEL_59;
        }
        v14 = *v8;
        v15 = *v11;
        if (*v8 >= *v11) {
          if (v10 < v14) {
            *v8 = v10;
            *(a2 - 1) = v14;
            v17 = *v11;
            if (*v8 < *v11) {
              *v11 = *v8;
              *v8 = v17;
            }
          }
        }
        else {
          if (v10 < v14) {
            *v11 = v10;
          LABEL_36:
            *(a2 - 1) = v15;
            goto LABEL_60;
          }
          *v11 = v14;
          *v8 = v15;
          v24 = *(a2 - 1);
          if (v24 < v15) {
            *v8 = v24;
            goto LABEL_36;
          }
        }
      LABEL_60:
        v36 = *v8;
        --a3;
        if ((a4 & 1) != 0 || *(v8 - 1) < v36) {
          break;
        }
        if (v36 >= *(a2 - 1)) {
          v53 = (unsigned __int64)(v8 + 1);
          do {
            v8 = (int*)v53;
            if (v53 >= (unsigned __int64)a2) {
              break;
            }
            v53 += 4LL;
          } while (v36 >= *v8);
        }
        else {
          do {
            v52 = v8[1];
            ++v8;
          } while (v36 >= v52);
        }
        v54 = a2;
        if (v8 < a2) {
          v54 = a2;
          do {
            v55 = *--v54;
          } while (v36 < v55);
        }
        if (v8 < v54) {
          v56 = *v8;
          v57 = *v54;
          do {
            *v8 = v57;
            *v54 = v56;
            do {
              v58 = v8[1];
              ++v8;
              v56 = v58;
            } while (v36 >= v58);
            do {
              v59 = *--v54;
              v57 = v59;
            } while (v36 < v59);
          } while (v8 < v54);
        }
        v60 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v60;
        }
        a4 = 0;
        *v60 = v36;
      }
      v37 = 0;
      do {
        v38 = &v8[v37++];
        v39 = v38[1];
      } while (v39 < v36);
      v40 = &v8[v37];
      v41 = a2;
      if (v37 == 1) {
        v41 = a2;
        do {
          if (v40 >= v41) {
            break;
          }
          v43 = *--v41;
        } while (v43 >= v36);
      }
      else {
        do {
          v42 = *--v41;
        } while (v42 >= v36);
      }
      if (v40 >= v41) {
        v49 = v40 - 1;
        if (v8 == v40 - 1) {
          goto LABEL_80;
        }
      LABEL_79:
        *v8 = *v49;
        goto LABEL_80;
      }
      v44 = *v41;
      v45 = &v8[v37];
      v46 = v41;
      do {
        *v45 = v44;
        *v46 = v39;
        do {
          v47 = v45[1];
          ++v45;
          v39 = v47;
        } while (v47 < v36);
        do {
          v48 = *--v46;
          v44 = v48;
        } while (v48 >= v36);
      } while (v45 < v46);
      v49 = v45 - 1;
      if (v8 != v45 - 1) {
        goto LABEL_79;
      }
    LABEL_80:
      *v49 = v36;
      if (v40 < v41) {
        goto LABEL_83;
      }
      v50 = GameRoutine_1690120_alt1(v8, v49);
      v8 = v49 + 1;
      v51 = v50;
      result = GameRoutine_1690120_alt1(v49 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v51) {
      LABEL_83:
        result = GameHr_168f760((__int64)v7, v49, a3, a4 & 1);
        a4 = 0;
        v8 = v49 + 1;
      }
    }
    a2 = v49;
    if (!v51) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_16e3a80(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                       char a5)
{
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  bool v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  bool v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  signed __int64 v51;
  signed __int64 v52;
  signed __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  char v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64* v66;
  bool v67;
  __int64* v68;
  __int64 v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  __int64* v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;

  v8 = a2;
  v9 = (__int64*)result;
LABEL_2:
  v10 = v9;
  v92 = v8 - 2;
  v94 = v8 - 1;
  v91 = v8 - 3;
  while (1) {
    v9 = v10;
    v11 = v8 - v10;
    if (v11 <= 2) {
      break;
    }
    switch (v11) {
    case 3LL:
      return GameRoutine_16e4480(v10, v10 + 1, v94, a3);
    case 4LL:
      return GameRoutine_16e45e0(v10, v10 + 1, v10 + 2, v94, a3);
    case 5LL:
      return GameRoutine_16e4700(v10, v10 + 1, v10 + 2, v10 + 3, v94, a3);
    default:
      break;
    }
  LABEL_10:
    if (v11 <= 23) {
      v42 = v10 + 1;
      v44 = v10 == v8 || v42 == v8;
      if ((a5 & 1) != 0) {
        if (v44) {
          return result;
        }
        v45 = 0;
        v46 = v10;
        while (1) {
          v48 = v46[1];
          v15 = *(_QWORD*)(a3 + 32);
          v96 = *v46;
          v97 = v48;
          if (v15 == 0) {
            break;
          }
          v46 = v42;
          result = (*(__int64 (**)(__int64, __int64*, __int64*))(
              *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
          if ((result & 1) != 0) {
            v49 = *v46;
            v50 = v45;
            do {
              *(__int64*)((char*)v10 + v50 + 8) = *(__int64*)((char*)v10 + v50);
              if (v50 == 0) {
                v47 = v10;
                goto LABEL_87;
              }
              v15 = *(_QWORD*)(a3 + 32);
              v96 = *(__int64*)((char*)v10 + v50 - 8);
              v97 = v49;
              if (v15 == 0) {
                goto LABEL_151;
              }
              result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                  *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
              v50 -= 8;
            } while ((result & 1) != 0);
            v47 = (__int64*)((char*)v10 + v50 + 8);
          LABEL_87:
            *v47 = v49;
          }
          v42 = v46 + 1;
          v45 += 8;
          if (v46 + 1 == v8) {
            return result;
          }
        }
      }
      else {
        if (v44) {
          return result;
        }
        while (1) {
          v87 = v9[1];
          v15 = *(_QWORD*)(a3 + 32);
          v96 = *v9;
          v97 = v87;
          if (v15 == 0) {
            break;
          }
          v9 = v42;
          result = (*(__int64 (**)(__int64, __int64*, __int64*))(
              *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
          if ((result & 1) != 0) {
            v88 = *v9;
            v89 = v9;
            do {
              v90 = *(v89 - 2);
              *v89 = *(v89 - 1);
              --v89;
              v96 = v90;
              v97 = v88;
              v15 = *(_QWORD*)(a3 + 32);
              if (v15 == 0) {
                goto LABEL_151;
              }
              result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                  *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
            } while ((result & 1) != 0);
            *v89 = v88;
          }
          v42 = v9 + 1;
          if (v9 + 1 == v8) {
            return result;
          }
        }
      }
    LABEL_151:
      GameRoutine_60a310(v15, a2);
    }
    if (a4 == 0) {
      if (v10 != v8) {
        v51 = (unsigned __int64)(v11 - 2) >> 1;
        v52 = v51;
        v93 = v8;
        while (1) {
          v53 = v52;
          if (v51 >= v52) {
            v54 = (2 * (v52 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v55 = &v9[v54];
            if (2 * v52 + 2 < v11) {
              v56 = *v55;
              v15 = *(_QWORD*)(a3 + 32);
              v96 = v55[1];
              v97 = v56;
              if (v15 == 0) {
                goto LABEL_151;
              }
              v57 = (*(__int64 (**)(__int64, __int64*, __int64*))(
                  *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
              if ((v57 & 1) != 0) {
                ++v55;
              }
              v51 = (unsigned __int64)(v11 - 2) >> 1;
              if ((v57 & 1) != 0) {
                v54 = 2 * v53 + 2;
              }
            }
            v58 = &v9[v53];
            v59 = *v55;
            v15 = *(_QWORD*)(a3 + 32);
            v96 = *v58;
            v97 = v59;
            if (v15 == 0) {
              goto LABEL_151;
            }
            result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
            if ((result & 1) == 0) {
              v60 = *v58;
              do {
                v61 = v55;
                *v58 = *v55;
                if (v51 < v54) {
                  break;
                }
                v62 = (2 * v54) | 1;
                v54 = 2 * v54 + 2;
                v55 = &v9[v62];
                if (v54 >= v11) {
                  v54 = v62;
                }
                else {
                  v63 = *v55;
                  v15 = *(_QWORD*)(a3 + 32);
                  v96 = v55[1];
                  v97 = v63;
                  if (v15 == 0) {
                    goto LABEL_151;
                  }
                  v64 = (*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
                  if ((v64 & 1) != 0) {
                    ++v55;
                  }
                  v51 = (unsigned __int64)(v11 - 2) >> 1;
                  if ((v64 & 1) == 0) {
                    v54 = v62;
                  }
                }
                v65 = *v55;
                v15 = *(_QWORD*)(a3 + 32);
                v96 = v60;
                v97 = v65;
                if (v15 == 0) {
                  goto LABEL_151;
                }
                result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                    *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
                v58 = v61;
              } while ((result & 1) == 0);
              *v61 = v60;
            }
          }
          v52 = v53 - 1;
          if (v53 == 0) {
            v66 = v93;
            while (1) {
              v68 = v66;
              v69 = 0;
              v70 = v9;
              v95 = *v9;
              do {
                v71 = &v70[v69];
                v72 = (2 * v69) | 1;
                v73 = v71 + 1;
                v74 = 2 * v69 + 2;
                if (v74 >= v11) {
                  v69 = (2 * v69) | 1;
                }
                else {
                  v76 = v71[2];
                  v75 = v71 + 2;
                  v15 = *(_QWORD*)(a3 + 32);
                  v77 = *(v75 - 1);
                  v96 = v76;
                  v97 = v77;
                  if (v15 == 0) {
                    goto LABEL_151;
                  }
                  result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
                  if ((result & 1) != 0) {
                    v73 = v75;
                    v69 = v74;
                  }
                  else {
                    v69 = v72;
                  }
                }
                *v70 = *v73;
                v70 = v73;
              } while (v69 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
              v66 = v68 - 1;
              if (v73 == v68 - 1) {
                *v73 = v95;
              }
              else {
                *v73 = *v66;
                *v66 = v95;
                v78 = ((char*)v73 - (char*)v9 + 8) >> 3;
                v67 = v78 < 2;
                v79 = v78 - 2;
                if (!v67) {
                  v80 = v79 >> 1;
                  v15 = *(_QWORD*)(a3 + 32);
                  v81 = &v9[v79 >> 1];
                  v82 = *v81;
                  v96 = *v73;
                  v97 = v82;
                  if (v15 == 0) {
                    goto LABEL_151;
                  }
                  result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
                  if ((result & 1) != 0) {
                    v83 = v66;
                    v84 = *v73;
                    do {
                      v85 = v81;
                      *v73 = *v81;
                      if (v80 == 0) {
                        break;
                      }
                      v15 = *(_QWORD*)(a3 + 32);
                      v80 = (v80 - 1) >> 1;
                      v81 = &v9[v80];
                      v86 = *v81;
                      v96 = v84;
                      v97 = v86;
                      if (v15 == 0) {
                        goto LABEL_151;
                      }
                      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
                          *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
                      v73 = v85;
                    } while ((result & 1) != 0);
                    *v85 = v84;
                    v66 = v83;
                  }
                }
              }
              v67 = (unsigned __int64)v11-- > 2;
              if (!v67) {
                return result;
              }
            }
          }
        }
      }
      return result;
    }
    v12 = &v10[(unsigned __int64)v11 >> 1];
    if ((unsigned __int64)v11 < 0x81) {
      GameRoutine_16e4480(&v9[(unsigned __int64)v11 >> 1], v9, v94, a3);
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_18;
      }
    }
    else {
      GameRoutine_16e4480(v9, &v9[(unsigned __int64)v11 >> 1], v94, a3);
      GameRoutine_16e4480(v9 + 1, v12 - 1, v92, a3);
      GameRoutine_16e4480(v9 + 2, v12 + 1, v91, a3);
      GameRoutine_16e4480(v12 - 1, &v9[(unsigned __int64)v11 >> 1], v12 + 1,
                          a3);
      v13 = *v9;
      *v9 = *v12;
      *v12 = v13;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_18;
      }
    }
    v14 = *(v9 - 1);
    v15 = *(_QWORD*)(a3 + 32);
    v96 = *v9;
    v97 = v14;
    if (v15 == 0) {
      goto LABEL_151;
    }
    if (((*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v15 + 48LL))(
             v15, &v97, &v96) &
         1) != 0) {
    LABEL_18:
      v16 = *v9;
      v17 = 0;
      do {
        v15 = *(_QWORD*)(a3 + 32);
        v18 = v9[v17 + 1];
        v96 = v16;
        v97 = v18;
        if (v15 == 0) {
          goto LABEL_151;
        }
        ++v17;
      } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                    *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
                1) != 0);
      v19 = &v9[v17];
      v20 = v8;
      if (v17 != 1) {
        while (1) {
          v21 = *--v8;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v16;
          v97 = v21;
          if (v15 == 0) {
            goto LABEL_151;
          }
          if (((*(__int64 (**)(__int64, __int64*, __int64*))(
                   *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
               1) != 0) {
            goto LABEL_28;
          }
        }
      }
      do {
        if (v19 >= v8) {
          break;
        }
        v22 = *--v8;
        v15 = *(_QWORD*)(a3 + 32);
        v96 = v16;
        v97 = v22;
        if (v15 == 0) {
          goto LABEL_151;
        }
      } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                    *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
                1) == 0);
    LABEL_28:
      if (v19 >= v8) {
        v28 = v19 - 1;
        if (v9 == v19 - 1) {
          goto LABEL_40;
        }
      LABEL_39:
        *v9 = *v28;
        goto LABEL_40;
      }
      v23 = &v9[v17];
      v24 = v8;
      do {
        v25 = *v23;
        *v23 = *v24;
        *v24 = v25;
        do {
          v26 = v23[1];
          ++v23;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v16;
          v97 = v26;
          if (v15 == 0) {
            goto LABEL_151;
          }
        } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
                  1) != 0);
        do {
          v27 = *--v24;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v16;
          v97 = v27;
          if (v15 == 0) {
            goto LABEL_151;
          }
        } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
                  1) == 0);
      } while (v23 < v24);
      v28 = v23 - 1;
      if (v9 != v28) {
        goto LABEL_39;
      }
    LABEL_40:
      *v28 = v16;
      v29 = v19 >= v8;
      v8 = v20;
      if (!v29) {
        goto LABEL_44;
      }
      v10 = v28 + 1;
      v30 = GameRoutine_16e4860(v9, v28, a3);
      result = GameRoutine_16e4860(v28 + 1, v20, a3);
      if ((result & 1) != 0) {
        v8 = v28;
        if ((v30 & 1) != 0) {
          return result;
        }
        goto LABEL_2;
      }
      if ((v30 & 1) == 0) {
      LABEL_44:
        result = GameHr_16e3a80(v9, v28, a3, a4, a5 & 1);
        a5 = 0;
        v10 = v28 + 1;
      }
    }
    else {
      v31 = *v9;
      v15 = *(_QWORD*)(a3 + 32);
      v96 = *v94;
      v97 = v31;
      if (v15 == 0) {
        goto LABEL_151;
      }
      result = (*(__int64 (**)(__int64, __int64*, __int64*))(
          *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
      if ((result & 1) != 0) {
        v10 = v9;
        while (1) {
          v32 = v10[1];
          ++v10;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v32;
          v97 = v31;
          if (v15 == 0) {
            goto LABEL_151;
          }
          result = (*(__int64 (**)(__int64, __int64*, __int64*))(
              *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
          if ((result & 1) != 0) {
            goto LABEL_55;
          }
        }
      }
      v33 = v9 + 1;
      do {
        v10 = v33;
        if (v33 >= v8) {
          break;
        }
        v15 = *(_QWORD*)(a3 + 32);
        v96 = *v33;
        v97 = v31;
        if (v15 == 0) {
          goto LABEL_151;
        }
        result = (*(__int64 (**)(__int64, __int64*, __int64*))(
            *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
        v33 = v10 + 1;
      } while ((result & 1) == 0);
    LABEL_55:
      v34 = v8;
      if (v10 < v8) {
        v34 = v8;
        do {
          v35 = *--v34;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v35;
          v97 = v31;
          if (v15 == 0) {
            goto LABEL_151;
          }
          result = (*(__int64 (**)(__int64, __int64*, __int64*))(
              *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
        } while ((result & 1) != 0);
      }
    LABEL_65:
      if (v10 < v34) {
        v36 = *v10;
        *v10 = *v34;
        *v34 = v36;
        do {
          v37 = v10[1];
          ++v10;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v37;
          v97 = v31;
          if (v15 == 0) {
            goto LABEL_151;
          }
        } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                      *(_QWORD*)v15 + 48LL))(v15, &v97, &v96) &
                  1) == 0);
        while (1) {
          v38 = *--v34;
          v15 = *(_QWORD*)(a3 + 32);
          v96 = v38;
          v97 = v31;
          if (v15 == 0) {
            goto LABEL_151;
          }
          result = (*(__int64 (**)(__int64, __int64*, __int64*))(
              *(_QWORD*)v15 + 48LL))(v15, &v97, &v96);
          if ((result & 1) == 0) {
            goto LABEL_65;
          }
        }
      }
      v39 = v10 - 1;
      if (v9 != v10 - 1) {
        *v9 = *v39;
      }
      a5 = 0;
      *v39 = v31;
    }
  }
  if ((unsigned __int64)v11 < 2) {
    return result;
  }
  if (v11 != 2) {
    goto LABEL_10;
  }
  v40 = *(v8 - 1);
  v15 = *(_QWORD*)(a3 + 32);
  v96 = *v10;
  v97 = v40;
  if (v15 == 0) {
    goto LABEL_151;
  }
  result = (*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v15 + 48LL))(
      v15, &v97, &v96);
  if ((result & 1) != 0) {
    v41 = *v10;
    *v10 = *(v8 - 1);
    *(v8 - 1) = v41;
  }
  return result;
}

__int64 GameHr_1756900(__int64 a1, __int64* a2)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  v4 = (_QWORD*)GameData_212bf68;
  v5 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1072, 16, 0);
  GameRoutine_1753970(v5, 5);
  *v5 = GameData_20baba8;
  v5[22] = GameData_20bb018;
  result =
      GameRoutine_657850(v5, GameData_212c730, "IndividualResultMenu", 1, a1);
  v8 = *a2;
  v7 = a2[1];
  if (v8 != v7) {
    v9 = GameData_2131ce0[0] + 16;
    v10 = GameData_2131ce8[0] + 16;
    do {
      v11 = GameRoutine_651b90(*v4, 512, 16, 0);
      *(_WORD*)(v11 + 16) = 0;
      *(_DWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_WORD*)(v11 + 80) = 257;
      *(_BYTE*)(v11 + 82) = 1;
      *(_QWORD*)(v11 + 84) = 0;
      *(_QWORD*)v11 = GameData_20bb100;
      *(_QWORD*)(v11 + 8) = 0;
      *(_BYTE*)(v11 + 92) = 0;
      *(_QWORD*)(v11 + 104) = 0;
      *(_QWORD*)(v11 + 112) = 0;
      *(_QWORD*)(v11 + 119) = 0;
      *(_QWORD*)(v11 + 128) = 0;
      *(_QWORD*)(v11 + 136) = 1065353216;
      *(_WORD*)(v11 + 144) = 0;
      *(_WORD*)(v11 + 152) = 0;
      *(_WORD*)(v11 + 176) = 0;
      *(_WORD*)(v11 + 200) = 0;
      *(_QWORD*)(v11 + 96) = v9;
      *(_QWORD*)(v11 + 232) = 0;
      *(_QWORD*)(v11 + 240) = 0;
      *(_QWORD*)(v11 + 247) = 0;
      *(_QWORD*)(v11 + 256) = 0;
      *(_QWORD*)(v11 + 264) = 1065353216;
      *(_WORD*)(v11 + 272) = 0;
      *(_WORD*)(v11 + 280) = 0;
      *(_WORD*)(v11 + 304) = 0;
      *(_WORD*)(v11 + 328) = 0;
      *(_QWORD*)(v11 + 224) = v10;
      *(_DWORD*)(v11 + 352) = 0;
      *(_QWORD*)(v11 + 360) = 0;
      *(_QWORD*)(v11 + 368) = 0;
      *(_QWORD*)(v11 + 376) = 0;
      *(_QWORD*)(v11 + 384) = 0;
      *(_QWORD*)(v11 + 392) = 0;
      *(_QWORD*)(v11 + 400) = 0;
      *(_DWORD*)(v11 + 503) = 0;
      *(_QWORD*)(v11 + 488) = 0;
      *(_QWORD*)(v11 + 496) = 0;
      *(_QWORD*)(v11 + 472) = 0;
      *(_QWORD*)(v11 + 480) = 0;
      *(_QWORD*)(v11 + 456) = 0;
      *(_QWORD*)(v11 + 464) = 0;
      *(_QWORD*)(v11 + 440) = 0;
      *(_QWORD*)(v11 + 448) = 0;
      *(_QWORD*)(v11 + 424) = 0;
      *(_QWORD*)(v11 + 432) = 0;
      *(_QWORD*)(v11 + 408) = v8;
      *(_QWORD*)(v11 + 416) = 0;
      if (*(_QWORD*)v8 != 0 &&
          *(_DWORD*)(v8 + 12) + *(_DWORD*)(v8 + 8) + *(_DWORD*)(v8 + 16) >= 1) {
        *(_QWORD*)(v11 + 416) = *(_QWORD*)v8;
        *(_DWORD*)(v11 + 424) = *(_DWORD*)(v8 + 8);
        v12 = *(_DWORD*)(v8 + 12);
        *(_BYTE*)(v11 + 506) = 1;
        *(_DWORD*)(v11 + 428) = v12;
        v13 = *(unsigned __int8*)(v8 + 20);
        if (v13 != 15) {
          *(_DWORD*)(v11 + 4 * v13 + 436) = *(_DWORD*)(v8 + 16);
        }
      }
      *(_QWORD*)(v11 + 368) = 0;
      result = GameRoutine_16e0c00(v5, v11);
      v8 += 72;
    } while (v8 != v7);
  }
  return result;
}

void GameHr_1767a10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v33[6];
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _DWORD* v38;
  _DWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  v1 = *(_QWORD*)(a1 + 1176);
  v2 = a1;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v3 = *(_QWORD*)(v1 + 24);
  v37 = 0;
  if (&v34 != (__int64*)(v3 + 296)) {
    a1 = GameRoutine_7fb7c0(&v34);
  }
  v4 = *(_DWORD*)(v3 + 320);
  v38 = nullptr;
  v39 = nullptr;
  v40 = 0;
  v37 = v4;
  v6 = *(_QWORD*)(v3 + 328);
  v5 = *(_QWORD*)(v3 + 336);
  v7 = (_QWORD*)GameData_212bf68;
  v8 = v5 - v6;
  if (v5 == v6) {
    v11 = 0;
    v10 = nullptr;
  }
  else {
    if (v8 < 0) {
      goto LABEL_33;
    }
    v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v5 - v6, 16, 0);
    v10 = (_DWORD*)(v9 + v8);
    v11 = v9;
    v38 = (_DWORD*)v9;
    v39 = (_DWORD*)v9;
    v40 = v9 + v8;
    a1 = GameRoutine_1a0b950(v9, v6, v8);
    v39 = v10;
  }
  v13 = *(_QWORD*)(v3 + 352);
  v12 = *(_QWORD*)(v3 + 360);
  v42 = 0;
  v43 = 0;
  v14 = v12 - v13;
  v41 = 0;
  if (v12 != v13) {
    if ((v14 & 0x8000000000000000LL) == 0) {
      v15 = GameRoutine_651b90(*v7, v12 - v13, 16, 0);
      v16 = v15 + v14;
      v17 = v15;
      v41 = v15;
      v42 = v15;
      v43 = v15 + v14;
      GameRoutine_1a0b950(v15, v13, v14);
      v42 = v16;
      goto LABEL_11;
    }
  LABEL_33:
    GameRoutine_6e3e20(a1);
  }
  v17 = 0;
LABEL_11:
  v18 = *(_QWORD*)(v3 + 384);
  v44 = *(_QWORD*)(v3 + 376);
  v45 = v18;
  if ((int)(((unsigned __int64)v10 - v11) >> 2) >= 1) {
    v19 = (_QWORD*)GameRoutine_1760e40(v2, 19);
    GameRoutine_1562cf0(v19, "ItemSkill");
    v20 = GameRoutine_6ed030(*(_QWORD*)(v2 + 1176));
    if (v20 != 0) {
      v21 = v20;
      v22 = GameRoutine_15621a0(v19, "T_Item");
      if (v22 != 0) {
        GameRoutine_156c5d0(v22, v21, 0);
      }
    }
    v23 = GameRoutine_155f480(v19, "ItemIcon");
    if (v23 != 0) {
      v24 =
          GameRoutine_1a0a6c0(v23, GameData_212d670[0], GameData_212d678[0], 0);
      if (v24 != 0 && *(_QWORD*)(v2 + 1176) != 0) {
        GameRoutine_136a920(GameData_22416f0 + 1264, v24, 0, 2);
      }
    }
    v25 = *(_QWORD*)(v2 + 1168);
    v26 = *v38;
    v33[4] = 0;
    GameRoutine_17644e0(
        v19, v25,
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v26 & 0xFFF)),
        (__int64)v33);
    v17 = v41;
  }
  if (v17 != 0) {
    v27 = *v7;
    v42 = v17;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(v27 + v28);
  }
  if (v38 != nullptr) {
    v29 = *v7;
    v39 = v38;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    GameRoutine_1a0a4e0(v29 + v30);
  }
  if (v34 != 0) {
    v31 = *v7;
    v35 = v34;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    GameRoutine_1a0a4e0(v31 + v32);
  }
}

__int64 GameHr_178b5c0(unsigned int* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL8 v7;

  result = (*(__int64 (**)(unsigned int*))(*(_QWORD*)a1 + 368LL))(a1);
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)&a1[2 * a1[88] + 76];
    v7 = v3 == 0 ||
         (v4 = GameRoutine_1a0a6c0(v3, GameData_21319f0[0], &GameData_20c9670,
                                   0)) == 0 ||
         (v5 = *(_QWORD*)(v4 + 336)) == 0 ||
         (v6 = GameRoutine_1a0a6c0(v5, GameData_212e008[0], GameData_212e0c8[0],
                                   0)) == 0 ||
         *(_QWORD*)(v6 + 88) == 0;
    return GameRoutine_1567590("OpenStatus", v7);
  }
  return result;
}

__int64 GameHr_178bdb0(__int64 a1, __int64 a2, char a3)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(int*)(a1 + 368) < 1) {
    return 0;
  }
  if ((GameRoutine_16e7010(a1 + 368, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v4 = *(_DWORD*)(a1 + 372);
  v5 = *(_QWORD*)(a1 + 384);
  if (v4 < (unsigned __int64)((*(_QWORD*)(a1 + 392) - v5) >> 2)) {
    v4 = *(_DWORD*)(v5 + 4LL * v4);
  }
  v6 = *(_QWORD*)(a1 + 304);
  GameData_2263c38 = v4;
  v7 = GameData_21319f0[0];
  v8 = GameRoutine_1a0a6c0(v6, GameData_21319f0[0], &GameData_20c62a8, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v8 + 1288LL))(v8, (unsigned int)v4);
  v9 = GameRoutine_1a0a6c0(*(_QWORD*)(a1 + 312), v7, &GameData_20c62a8, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 1288LL))(
      v9, (unsigned int)GameData_2263c38);
  v10 = GameRoutine_7a7dc0("Page%02d", GameData_2263c38);
  GameRoutine_1562cf0(a1 + 200, v10);
  return 13;
}

#pragma GCC visibility pop
