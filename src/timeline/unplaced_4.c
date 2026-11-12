#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
GameRoutine_b760(PSEUDO_X8, unsigned __int8** result, unsigned int*);
__attribute__((swiftcall)) void
GameRoutine_b830(PSEUDO_X8, unsigned __int8** result, unsigned int*);
__attribute__((swiftcall)) void
GameRoutine_db10(PSEUDO_X8, unsigned __int8** result, unsigned int*);
__int64 GameHr_4c20();
__int64 GameRoutine_1a0b960(unsigned __int64, __int64);
__int64 GameRoutine_b290(__int64*, __int64);
__int64 Value_10e0(unsigned __int64*, unsigned __int64*, __int64,
                   unsigned __int64, __int64, unsigned __int64, int);
__int64 Value_b320(_QWORD**, __int64, unsigned __int64, __int64,
                   unsigned __int64, unsigned __int64);
__int64 Value_b440(__int64*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 GameData_212c060;
extern unsigned __int8 GameData_1aff518[256];
unsigned __int64 GameRoutine_b600(unsigned __int8**);
unsigned __int64 GameRoutine_b6b0(unsigned __int8**);
unsigned __int64 Value_2640(_QWORD*, __int64, unsigned __int64);
unsigned __int64 Value_b210(__int64, __int64, unsigned __int64);
void GameRoutine_651310(__int64);
__int64 timeline_4c1c();
__int64 timeline_8060(__int64 a1, int* a2, __int64 a3);
__int64 timeline_a3e0(__int64 a1, int* a2, __int64 a3);

__int64 timeline_4c1c()
{
  GameHr_4c20();
  return GameHr_4c20();
}

__int64 timeline_8060(__int64 a1, int* a2, __int64 a3)
{
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  int* v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  _QWORD** v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 result;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  int* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int* v55;
  int v56;
  int v57;
  unsigned __int8* v58;
  unsigned __int8* v59;
  int v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;

  v3 = *(_QWORD*)(a1 + 56);
  v4 = *(_DWORD**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  while (1) {
    v6 = &v4[2 * v5];
    v7 = *v6;
    if (*v6 > 2) {
      break;
    }
    if (v7 == 1) {
      if (v5 == 0) {
        *v4 = 0;
        *(_DWORD*)a3 = 18;
        return 18;
      }
      *(_QWORD*)(a1 + 24) = --v5;
    }
    else {
      if (v7 != 2) {
        return timeline_a3e0(a1, a2, a3);
      }
      v8 = v6[1];
      v6[1] = v8 - 1;
      if (v8 == 0) {
        result = 12;
      LABEL_24:
        *v6 = 1;
        *(_DWORD*)a3 = result;
        *(_BYTE*)(a3 + 24) = 0;
        return result;
      }
    LABEL_9:
      v9 = v5 + 1;
      *(_QWORD*)(a1 + 24) = v5 + 1;
      if (v5 + 1 == v3) {
        *(_QWORD*)(a1 + 24) = v5;
        *a2 = 10;
        *(_BYTE*)(a3 + 24) = 0;
        *(_DWORD*)a3 = -1;
        *v6 = 5;
        return 0xFFFFFFFFLL;
      }
      ++v5;
      *(_QWORD*)&v4[2 * v9] = 0;
    }
  }
  if (v7 == 4) {
    *v6 = 3;
    goto LABEL_9;
  }
  if (v7 != 3) {
    return 0xFFFFFFFFLL;
  }
  v10 = v6[1];
  v6[1] = v10 - 1;
  if (v10 == 0) {
    result = 14;
    goto LABEL_24;
  }
  v11 = *(_QWORD***)(a1 + 8);
  v12 = (unsigned __int8*)v11[1];
  v13 = (unsigned __int8*)v11[2];
  if (v12 == v13) {
    goto LABEL_82;
  }
  v14 = *v12;
  if (v14 == 219) {
    v15 = v13 - v12;
    if (v15 < 5) {
      goto LABEL_82;
    }
    v16 = bswap32(*(_DWORD*)(v12 + 1));
    v17 = 5;
    goto LABEL_31;
  }
  if (v14 == 218) {
    v15 = v13 - v12;
    if (v15 < 3) {
      goto LABEL_82;
    }
    v16 = __rev16(*(unsigned __int16*)(v12 + 1));
    v17 = 3;
  LABEL_31:
    v19 = v16;
    v20 = v17 + v16;
    v21 = v15 - v17;
    v22 = (__int64)&v12[v17];
    goto LABEL_32;
  }
  if (v14 != 217) {
    if ((unsigned int)(v14 - 192) < 0xFFFFFFE0) {
      goto LABEL_73;
    }
    v16 = v14 & 0x1F;
    v15 = v13 - v12;
    v17 = 1;
    goto LABEL_31;
  }
  v15 = v13 - v12;
  if (v15 >= 2) {
    v16 = v12[1];
    v17 = 2;
    goto LABEL_31;
  }
LABEL_82:
  v53 = a1;
  v54 = a3;
  v55 = a2;
  v56 = Value_b440(*(__int64**)(a1 + 8));
  a2 = v55;
  a3 = v54;
  v57 = v56;
  a1 = v53;
  if (v57 != 0) {
    goto LABEL_81;
  }
  v58 = (unsigned __int8*)v11[1];
  v59 = (unsigned __int8*)v11[2];
  if (v58 == v59) {
    goto LABEL_73;
  }
  v60 = *v58;
  switch (v60) {
  case 219:
    v15 = v59 - v58;
    a3 = v54;
    a1 = v53;
    a2 = v55;
    if (v15 < 5) {
      goto LABEL_73;
    }
    v16 = bswap32(*(_DWORD*)(v58 + 1));
    v61 = 5;
    break;
  case 218:
    v15 = v59 - v58;
    a3 = v54;
    a1 = v53;
    a2 = v55;
    if (v15 < 3) {
      goto LABEL_73;
    }
    v16 = __rev16(*(unsigned __int16*)(v58 + 1));
    v61 = 3;
    break;
  case 217:
    v15 = v59 - v58;
    a3 = v54;
    a1 = v53;
    a2 = v55;
    if (v15 >= 2) {
      v16 = v58[1];
      v61 = 2;
      break;
    }
    goto LABEL_73;
  default:
    a3 = v54;
    a1 = v53;
    a2 = v55;
    if ((unsigned int)(v60 - 192) < 0xFFFFFFE0) {
      goto LABEL_73;
    }
    v16 = v60 & 0x1F;
    v15 = v59 - v58;
    v61 = 1;
    break;
  }
  v19 = v16;
  v20 = v61 + v16;
  v21 = v15 - v61;
  v22 = (__int64)&v58[v61];
  a3 = v54;
  a1 = v53;
  a2 = v55;
LABEL_32:
  if (v20 <= v15) {
    v23 = v16;
  }
  else {
    v23 = v21;
  }
  v24 = v23;
  v11[1] = (_QWORD*)(v22 + v23);
  v25 = *(_QWORD*)(a1 + 48);
  if (v25 <= v19) {
    v31 = 4;
    goto LABEL_74;
  }
  if (*(_DWORD*)(a1 + 72) != 2) {
    v32 = a1;
    v33 = *(_QWORD*)(a3 + 8);
    v34 = a2;
    v35 = a3;
    if (v25 >= v23) {
      memcpy(v33, v22, v23);
    }
    else {
      memset(v33, 0, v25);
    }
    v36 = v19 - v24;
    a3 = v35;
    a1 = v32;
    if (v19 > v24) {
      v37 = (__int64)*v11;
      v38 = *(_QWORD*)(v35 + 8);
      v39 = (*v11)[2];
      if (v39 + v36 <= (*v11)[3]) {
        memcpy(v38 + v24, *(_QWORD*)(v37 + 40) + v39, v19 - v24);
        a3 = v35;
        a1 = v32;
        *(_QWORD*)(v37 + 16) += v36;
      }
      else {
        v40 = Value_2640(*v11, v38 + v24, v19 - v24);
        a3 = v35;
        a1 = v32;
        if (v40 != v36) {
          a2 = v34;
          if (v40 != 0 || *v11 == nullptr || *((_DWORD*)*v11 + 15) == 0) {
            goto LABEL_73;
          }
          goto LABEL_81;
        }
      }
    }
    *(_BYTE*)(*(_QWORD*)(a3 + 8) + v19) = 0;
    if (*(_DWORD*)(a1 + 72) == 1) {
      if ((unsigned int)Value_10e0(nullptr, &v63, 0, 0, *(_QWORD*)(a3 + 8), v19,
                                   0) != 0) {
        a3 = v35;
        a1 = v32;
        a2 = v34;
        goto LABEL_73;
      }
      a3 = v35;
      a1 = v32;
      a2 = v34;
      if (v63 != v19) {
      LABEL_73:
        v31 = 11;
        goto LABEL_74;
      }
    }
    *(_BYTE*)(a3 + 24) = 0;
    *(_QWORD*)(a3 + 16) = v19;
    *(_DWORD*)a3 = 15;
    goto LABEL_69;
  }
  v26 = a2;
  v27 = (_QWORD*)a1;
  v28 = a3;
  v29 = GameRoutine_1a0b960(*(_QWORD*)(a1 + 48), GameData_212c060);
  if (v29 == 0) {
    result = 0xFFFFFFFFLL;
    *v26 = 14;
    *(_BYTE*)(v28 + 24) = 0;
    *(_DWORD*)v28 = -1;
    **(_BYTE**)(v28 + 8) = 0;
    v41 = v27[2];
    v42 = v27[3];
    goto LABEL_75;
  }
  v30 = v29;
  if (v25 >= v24) {
    memcpy(v29, v22, v24);
  }
  else {
    memset(v29, 0, v25);
  }
  v43 = v19 - v24;
  if (v19 <= v24) {
  LABEL_65:
    v47 = *(_QWORD*)(v28 + 8);
    *(_BYTE*)(v30 + v19) = 0;
    if ((unsigned int)Value_10e0(&v62, &v63, v47, v25, v30, v16 + 1, 1) != 0) {
      v48 = 0;
      **(_BYTE**)(v28 + 8) = 0;
      v49 = 1;
    }
    else {
      v49 = 0;
      v48 = v62 - 1;
    }
    *(_QWORD*)(v28 + 16) = v48;
    *(_BYTE*)(v28 + 24) = v49;
    *(_DWORD*)v28 = 15;
    GameRoutine_651310(v30);
    a1 = (__int64)v27;
  LABEL_69:
    v41 = *(_QWORD*)(a1 + 16);
    v50 = *(_QWORD*)(a1 + 24);
    v51 = 4;
    result = 15;
    v52 = 8 * v50;
    goto LABEL_76;
  }
  v44 = (__int64)*v11;
  v45 = (*v11)[2];
  if (v45 + v43 <= (*v11)[3]) {
    memcpy(v30 + v24, *(_QWORD*)(v44 + 40) + v45, v19 - v24);
    *(_QWORD*)(v44 + 16) += v43;
    goto LABEL_65;
  }
  v46 = Value_2640(*v11, v30 + v24, v19 - v24);
  if (v46 == v43) {
    v25 = v27[6];
    goto LABEL_65;
  }
  if (v46 != 0 || *v11 == nullptr || *((_DWORD*)*v11 + 15) == 0) {
    GameRoutine_651310(v30);
    a3 = v28;
    a1 = (__int64)v27;
    a2 = v26;
    goto LABEL_73;
  }
  GameRoutine_651310(v30);
  a3 = v28;
  a1 = (__int64)v27;
  a2 = v26;
LABEL_81:
  v31 = 12;
LABEL_74:
  *a2 = v31;
  *(_BYTE*)(a3 + 24) = 0;
  *(_DWORD*)a3 = -1;
  **(_BYTE**)(a3 + 8) = 0;
  v41 = *(_QWORD*)(a1 + 16);
  v42 = *(_QWORD*)(a1 + 24);
  result = 0xFFFFFFFFLL;
LABEL_75:
  v52 = 8 * v42;
  v51 = 5;
LABEL_76:
  *(_DWORD*)(v41 + v52) = v51;
  return result;
}

__int64 timeline_a3e0(__int64 a1, int* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  unsigned __int8* v7;
  unsigned __int8** v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int8* v11;
  unsigned int v12;
  double v13;
  unsigned __int8* v14;
  __int64 result;
  int* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned __int8* v27;
  unsigned int v28;
  int v29;
  char v30;
  unsigned __int64 v31;
  char* v32;
  unsigned int v33;
  __int64 v34;
  char v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int8* v47;
  unsigned __int8* v48;
  unsigned __int8* v49;
  unsigned __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned __int8* v53;
  unsigned int v54;
  float v55;
  unsigned __int8* v56;
  unsigned __int64 v57;
  double v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  int v71;
  unsigned __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  char v81;
  unsigned __int8* v82;
  unsigned int v83;
  int v84;
  unsigned __int8* v85;
  int v86;
  unsigned __int64 v87;
  unsigned __int8* v88;
  int v89;
  unsigned __int8* v90;
  unsigned __int8* v91;
  unsigned __int8 v92;
  unsigned __int8 v93;
  struct {
    __int64 v94;
    __int64 v95;
    unsigned __int64 v96;
    unsigned int v97;
  } v94_;
  unsigned __int64 v98;
  __int64 v99;
  unsigned int v100;

  v3 = *(__int64**)(a1 + 8);
  v8 = (unsigned __int8**)(v3 + 1);
  v7 = (unsigned __int8*)v3[1];
  if (v7 == (unsigned __int8*)v3[2]) {
    if ((unsigned int)Value_b440(*(__int64**)(a1 + 8)) != 0) {
      goto LABEL_23;
    }
    v7 = *v8;
  }
  LODWORD(v9) = (char)*v7;
  v10 = GameData_1aff518[*v7];
  if (v10 > 5) {
    if (GameData_1aff518[*v7] <= 8u) {
      if (v10 != 6) {
        if (v10 != 7) {
          if (v10 != 8) {
            goto LABEL_23;
          }
          v14 = (unsigned __int8*)v3[2];
          if (v7 != v14) {
            if ((_DWORD)v9 == -33) {
              if ((unsigned __int64)(v14 - v7) >= 5) {
                LODWORD(v9) = bswap32(*(_DWORD*)(v7 + 1));
                *v8 = v7 + 5;
                if (*(_QWORD*)(a1 + 40) >= (unsigned __int64)(unsigned int)v9) {
                  goto LABEL_21;
                }
                goto LABEL_91;
              }
            }
            else {
              if (*v7 != 222) {
                if ((int)v9 > -113) {
                  goto LABEL_148;
                }
                LODWORD(v9) = v9 & 0xF;
                *v8 = v7 + 1;
                if (*(_QWORD*)(a1 + 40) >= (unsigned __int64)(unsigned int)v9) {
                  goto LABEL_21;
                }
                goto LABEL_91;
              }
              if ((unsigned __int64)(v14 - v7) >= 3) {
                LODWORD(v9) = __rev16(*(unsigned __int16*)(v7 + 1));
                *v8 = v7 + 3;
                if (*(_QWORD*)(a1 + 40) >= (unsigned __int64)(unsigned int)v9) {
                LABEL_21:
                  result = 13;
                  *(_DWORD*)a3 = 13;
                  v16 = (int*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24));
                  v17 = 3;
                LABEL_78:
                  *v16 = v17;
                  v16[1] = v9;
                  return result;
                }
              LABEL_91:
                v18 = 7;
                goto LABEL_24;
              }
            }
          }
          if ((unsigned int)Value_b440(v3) != 0) {
            goto LABEL_148;
          }
          v87 = GameRoutine_b6b0(v8);
          if ((_DWORD)v87 == 0) {
            v9 = HIDWORD(v87);
            if (*(_QWORD*)(a1 + 40) >= (unsigned __int64)HIDWORD(v87)) {
              goto LABEL_21;
            }
            goto LABEL_91;
          }
        LABEL_260:
          if ((_DWORD)v87 == 61) {
            v18 = 11;
          }
          else {
            v18 = 12;
          }
          goto LABEL_24;
        }
        v56 = (unsigned __int8*)v3[2];
        if (v7 != v56) {
          if ((_DWORD)v9 == -35) {
            if ((unsigned __int64)(v56 - v7) >= 5) {
              LODWORD(v9) = bswap32(*(_DWORD*)(v7 + 1));
              *v8 = v7 + 5;
              if (*(_QWORD*)(a1 + 32) >= (unsigned __int64)(unsigned int)v9) {
                goto LABEL_77;
              }
              goto LABEL_97;
            }
          }
          else {
            if (*v7 != 220) {
              if ((unsigned __int8)(v9 + 96) < 0xF0u) {
                goto LABEL_148;
              }
              LODWORD(v9) = v9 & 0xF;
              *v8 = v7 + 1;
              if (*(_QWORD*)(a1 + 32) >= (unsigned __int64)(unsigned int)v9) {
                goto LABEL_77;
              }
              goto LABEL_97;
            }
            if ((unsigned __int64)(v56 - v7) >= 3) {
              LODWORD(v9) = __rev16(*(unsigned __int16*)(v7 + 1));
              *v8 = v7 + 3;
              if (*(_QWORD*)(a1 + 32) >= (unsigned __int64)(unsigned int)v9) {
                goto LABEL_77;
              }
              goto LABEL_97;
            }
          }
        }
        if ((unsigned int)Value_b440(v3) != 0) {
          goto LABEL_148;
        }
        v87 = GameRoutine_b600(v8);
        if ((_DWORD)v87 != 0) {
          goto LABEL_260;
        }
        v9 = HIDWORD(v87);
        if (*(_QWORD*)(a1 + 32) >= (unsigned __int64)HIDWORD(v87)) {
        LABEL_77:
          result = 11;
          *(_DWORD*)a3 = 11;
          v16 = (int*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24));
          v17 = 2;
          goto LABEL_78;
        }
      LABEL_97:
        v18 = 6;
        goto LABEL_24;
      }
      v49 = (unsigned __int8*)v3[2];
      if (v7 != v49) {
        if ((_DWORD)v9 == -37) {
          v50 = v49 - v7;
          if ((unsigned __int64)(v49 - v7) >= 5) {
            v52 = 5;
            v51 = bswap32(*(_DWORD*)(v7 + 1));
            goto LABEL_132;
          }
        }
        else if (*v7 == 218) {
          v50 = v49 - v7;
          if ((unsigned __int64)(v49 - v7) >= 3) {
            v52 = 3;
            v51 = __rev16(*(unsigned __int16*)(v7 + 1));
            goto LABEL_132;
          }
        }
        else {
          if (*v7 != 217) {
            if ((unsigned __int8)(v9 + 64) < 0xE0u) {
              goto LABEL_148;
            }
            v51 = v9 & 0x1F;
            v50 = v49 - v7;
            v52 = 1;
            goto LABEL_132;
          }
          v50 = v49 - v7;
          if ((unsigned __int64)(v49 - v7) >= 2) {
            v51 = v7[1];
            v52 = 2;
          LABEL_132:
            v63 = (__int64)&v7[v52];
            v100 = v51;
            LODWORD(v94_.v94) = 0;
            if (v52 + (unsigned __int64)v51 <= v50) {
              v64 = v51;
            }
            else {
              v64 = (unsigned int)(v50 - v52);
            }
            *v8 = (unsigned __int8*)(v63 + v64);
            v94_.v95 = v63;
            v94_.v96 = v64;
          LABEL_136:
            v65 = v100;
            v66 = *(_QWORD*)(a1 + 48);
            if (v66 > v100) {
              if (*(_DWORD*)(a1 + 72) == 2) {
                v67 =
                    GameRoutine_1a0b960(*(_QWORD*)(a1 + 48), GameData_212c060);
                if (v67 != 0) {
                  v68 = v67;
                  v69 = Value_b320((_QWORD**)v3, v67, v66, v94_.v95, v94_.v96,
                                   v65);
                  if (v69 != 0) {
                    *a2 = v69;
                    *(_BYTE*)(a3 + 24) = 0;
                    *(_DWORD*)a3 = -1;
                    *(_DWORD*)(*(_QWORD*)(a1 + 16) +
                               8LL * *(_QWORD*)(a1 + 24)) = 5;
                    GameRoutine_651310(v68);
                    return 0xFFFFFFFFLL;
                  }
                  v77 = *(_QWORD*)(a3 + 8);
                  v78 = *(_QWORD*)(a1 + 48);
                  v79 = v100 + 1;
                  *(_BYTE*)(v68 + v100) = 0;
                  v100 = v79;
                  if ((unsigned int)Value_10e0(&v98, (unsigned __int64*)&v99,
                                               v77, v78, v68, v79, 1) != 0) {
                    v80 = 0;
                    **(_BYTE**)(a3 + 8) = 0;
                    v81 = 1;
                  }
                  else {
                    v81 = 0;
                    v80 = v98 - 1;
                  }
                  *(_QWORD*)(a3 + 16) = v80;
                  *(_BYTE*)(a3 + 24) = v81;
                  GameRoutine_651310(v68);
                  result = 4;
                  goto LABEL_268;
                }
                v18 = 14;
                goto LABEL_24;
              }
              v71 = Value_b320((_QWORD**)v3, *(_QWORD*)(a3 + 8),
                               *(_QWORD*)(a1 + 48), v94_.v95, v94_.v96, v100);
              if (v71 != 0) {
                *a2 = v71;
                goto LABEL_25;
              }
              *(_BYTE*)(*(_QWORD*)(a3 + 8) + v100) = 0;
              *(_BYTE*)(a3 + 24) = 0;
              v72 = v100;
              *(_QWORD*)(a3 + 16) = v100;
              if (*(_DWORD*)(a1 + 72) == 1 &&
                  ((unsigned int)Value_10e0(nullptr, (unsigned __int64*)&v99, 0,
                                            0, *(_QWORD*)(a3 + 8), v72,
                                            0) != 0 ||
                   v99 != v100)) {
                goto LABEL_23;
              }
            LABEL_144:
              result = 4;
              goto LABEL_268;
            }
            v70 = v100 - v94_.v96;
            if (v100 <= v94_.v96 ||
                (v44 = GameRoutine_b290((__int64*)*v3, v100 - v94_.v96)) ==
                    v70) {
              **(_BYTE**)(a3 + 8) = 0;
              *(_QWORD*)(a3 + 16) = 0;
              *(_BYTE*)(a3 + 24) = 1;
              goto LABEL_144;
            }
          LABEL_145:
            if (v44 == 0 && *v3 != 0 && *(_DWORD*)(*v3 + 60) != 0) {
              goto LABEL_148;
            }
            goto LABEL_23;
          }
        }
      }
      if ((unsigned int)Value_b440(v3) != 0) {
        goto LABEL_148;
      }
      GameRoutine_db10((void*)((__int64)&v94_.v94), v8, &v100);
      v84 = v94_.v94;
      if ((_DWORD)v94_.v94 == 0) {
        goto LABEL_136;
      }
    LABEL_240:
      if (v84 != 61) {
        goto LABEL_148;
      }
      goto LABEL_23;
    }
    if (v10 - 9 >= 2) {
      goto LABEL_23;
    }
    v22 = v9 + 60;
    if ((unsigned int)(v9 + 60) <= 2) {
      v23 = (unsigned __int8*)v3[2];
      if (v7 != v23) {
        v24 = v23 - v7;
        if ((_DWORD)v9 == -58) {
          if (v24 >= 5) {
            v25 = 5;
            v26 = bswap32(*(_DWORD*)(v7 + 1));
            goto LABEL_100;
          }
        }
        else if (*v7 == 197) {
          if (v24 >= 3) {
            v25 = 3;
            v26 = __rev16(*(unsigned __int16*)(v7 + 1));
          LABEL_100:
            v59 = (__int64)&v7[v25];
            LODWORD(v99) = v26;
            LODWORD(v94_.v94) = 0;
            if (v25 + (unsigned __int64)v26 <= v24) {
              v60 = v26;
            }
            else {
              v60 = (unsigned int)(v24 - v25);
            }
            *v8 = (unsigned __int8*)(v59 + v60);
            v94_.v95 = v59;
            LODWORD(v94_.v96) = v60;
            goto LABEL_104;
          }
        }
        else if (v24 >= 2) {
          v26 = v7[1];
          v25 = 2;
          goto LABEL_100;
        }
      }
      if ((unsigned int)Value_b440(v3) != 0) {
        goto LABEL_148;
      }
      GameRoutine_b760((void*)((__int64)&v94_.v94), v8, (unsigned int*)&v99);
      v84 = v94_.v94;
      if ((_DWORD)v94_.v94 != 0) {
        goto LABEL_240;
      }
    LABEL_104:
      v39 = v94_.v95;
      v40 = (unsigned int)v94_.v96;
      v41 = (unsigned int)v99;
      v42 = *(_QWORD*)(a1 + 48);
      if (v42 > (unsigned int)v99) {
      LABEL_105:
        v61 = *(_QWORD*)(a3 + 8);
        if (v42 >= v40) {
          memcpy(v61, v39, v40);
          v45 = (unsigned int)v99;
          if ((unsigned int)v40 >= (unsigned int)v99) {
          LABEL_110:
            v46 = 0;
            goto LABEL_111;
          }
        }
        else {
          memset(v61, 0, v42);
          v45 = (unsigned int)v99;
          if ((unsigned int)v40 >= (unsigned int)v99) {
            goto LABEL_110;
          }
        }
        v44 = Value_b210(*v3, *(_QWORD*)(a3 + 8) + v40,
                         (unsigned int)(v45 - v40));
        v45 = (unsigned int)v99;
        if (v44 != (unsigned int)v99 - v40) {
          goto LABEL_145;
        }
        goto LABEL_110;
      }
    LABEL_54:
      if ((unsigned int)v40 < (unsigned int)v41) {
        v43 = v41 - v40;
        v44 = GameRoutine_b290((__int64*)*v3, v43);
        if (v44 != v43) {
          goto LABEL_145;
        }
      }
      v45 = 0;
      v46 = 1;
    LABEL_111:
      *(_QWORD*)(a3 + 16) = v45;
      *(_BYTE*)(a3 + 24) = v46;
      if (v22 < 3u) {
        result = 16;
      }
      else {
        result = 17;
      }
      goto LABEL_268;
    }
    v27 = (unsigned __int8*)v3[2];
    if (v7 != v27) {
      v28 = *v7;
      v29 = 12;
      if (v28 <= 0xD3) {
        switch (v28) {
        case 0xC7u:
          v31 = v27 - v7;
          if ((unsigned __int64)(v27 - v7) >= 3) {
            v33 = v7[1];
            v32 = (char*)(v7 + 2);
            v34 = 3;
            goto LABEL_49;
          }
          break;
        case 0xC8u:
          v31 = v27 - v7;
          if ((unsigned __int64)(v27 - v7) >= 4) {
            v32 = (char*)(v7 + 3);
            v34 = 4;
            v33 = __rev16(*(unsigned __int16*)(v7 + 1));
            goto LABEL_49;
          }
          break;
        case 0xC9u:
          v31 = v27 - v7;
          if ((unsigned __int64)(v27 - v7) >= 6) {
            v32 = (char*)(v7 + 5);
            v34 = 6;
            v33 = bswap32(*(_DWORD*)(v7 + 1));
            goto LABEL_49;
          }
          break;
        default:
          goto LABEL_237;
        }
      }
      else {
        v30 = v28 + 44;
        if (v28 - 212 > 4) {
          goto LABEL_237;
        }
        v31 = v27 - v7;
        if ((unsigned __int64)(v27 - v7) >= 2) {
          v32 = (char*)(v7 + 1);
          v33 = 1 << v30;
          v34 = 2;
        LABEL_49:
          v35 = *v32;
          v36 = (unsigned __int64)&v7[v34];
          LODWORD(v99) = v33;
          LODWORD(v94_.v94) = 0;
          if (v34 + (unsigned __int64)v33 <= v31) {
            v37 = v33;
          }
          else {
            v37 = (unsigned int)(v31 - v34);
          }
          *v8 = (unsigned __int8*)(v36 + v37);
          LOBYTE(v94_.v95) = v35;
          v94_.v96 = v36;
          v94_.v97 = v37;
          goto LABEL_53;
        }
      }
    }
    if ((unsigned int)Value_b440(v3) != 0) {
      goto LABEL_199;
    }
    GameRoutine_b830((void*)((__int64)&v94_.v94), v8, (unsigned int*)&v99);
    if ((_DWORD)v94_.v94 != 0) {
      if ((_DWORD)v94_.v94 != 61) {
        goto LABEL_199;
      }
      goto LABEL_236;
    }
  LABEL_53:
    v38 = v94_.v97;
    v39 = v94_.v96;
    *(_BYTE*)(a3 + 25) = v94_.v95;
    v40 = v38;
    v41 = (unsigned int)v99;
    v42 = *(_QWORD*)(a1 + 48);
    if (v42 > (unsigned int)v99) {
      goto LABEL_105;
    }
    goto LABEL_54;
  }
  if (GameData_1aff518[*v7] <= 2u) {
    if (v10 != 1) {
      if (v10 != 2) {
        goto LABEL_23;
      }
      if (v7 == (unsigned __int8*)v3[2]) {
        if ((unsigned int)Value_b440(v3) == 0) {
          v90 = (unsigned __int8*)v3[1];
          if (v90 != (unsigned __int8*)v3[2]) {
            v93 = *v90;
            v91 = v90 + 1;
            v92 = v93;
            if ((unsigned __int8)(v93 + 60) >= 0xFEu) {
              *v8 = v91;
              if (v92 == 195) {
                goto LABEL_31;
              }
            }
          }
        }
      }
      else if ((unsigned __int8)(v9 + 60) >= 0xFEu) {
        *v8 = v7 + 1;
        if ((_DWORD)v9 == -61) {
        LABEL_31:
          result = 2;
        LABEL_268:
          *(_DWORD*)a3 = result;
          v20 = *(_QWORD*)(a1 + 16);
          v21 = *(_QWORD*)(a1 + 24);
          v19 = 1;
          goto LABEL_269;
        }
      }
      result = 3;
      goto LABEL_268;
    }
    if (v7 == (unsigned __int8*)v3[2]) {
      if ((unsigned int)Value_b440(v3) != 0) {
        goto LABEL_43;
      }
      v7 = (unsigned __int8*)v3[1];
      if (v7 == (unsigned __int8*)v3[2] || *v7 != 192) {
        goto LABEL_43;
      }
    }
    else if ((_DWORD)v9 != -64) {
    LABEL_43:
      *(_DWORD*)a3 = 1;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL * *(_QWORD*)(a1 + 24)) = 1;
      return 1;
    }
    *v8 = v7 + 1;
    goto LABEL_43;
  }
  if (v10 == 3) {
    v47 = (unsigned __int8*)v3[2];
    if (v7 != v47) {
      if ((int)v9 >= -32) {
        v48 = v7 + 1;
      LABEL_60:
        *v8 = v48;
      LABEL_197:
        result = 5;
        *(_DWORD*)(a3 + 16) = v9;
        goto LABEL_268;
      }
      v62 = *v7;
      v29 = 12;
      if (v62 > 0xCF) {
        if (*v7 > 0xD1u) {
          if (v62 == 210) {
            if ((unsigned __int64)(v47 - v7) >= 5) {
              goto LABEL_196;
            }
          }
          else {
            if (v62 != 211) {
              goto LABEL_237;
            }
            if ((unsigned __int64)(v47 - v7) > 8) {
              goto LABEL_176;
            }
          }
        }
        else if (v62 == 208) {
          if ((unsigned __int64)(v47 - v7) >= 2) {
            goto LABEL_190;
          }
        }
        else if ((unsigned __int64)(v47 - v7) >= 3) {
          goto LABEL_156;
        }
      }
      else if (*v7 > 0xCDu) {
        if (v62 == 206) {
          if ((unsigned __int64)(v47 - v7) >= 5) {
            goto LABEL_192;
          }
        }
        else if ((unsigned __int64)(v47 - v7) >= 9) {
          goto LABEL_168;
        }
      }
      else if (v62 == 204) {
        if ((unsigned __int64)(v47 - v7) >= 2) {
        LABEL_188:
          *v8 = v7 + 2;
          LODWORD(v9) = v7[1];
          goto LABEL_193;
        }
      }
      else {
        if (v62 != 205) {
          goto LABEL_237;
        }
        if ((unsigned __int64)(v47 - v7) >= 3) {
        LABEL_125:
          *v8 = v7 + 3;
          LODWORD(v9) = __rev16(*(unsigned __int16*)(v7 + 1));
          goto LABEL_193;
        }
      }
    }
    if ((unsigned int)Value_b440(v3) != 0) {
    LABEL_199:
      *a2 = 12;
      goto LABEL_25;
    }
    v7 = (unsigned __int8*)v3[1];
    v82 = (unsigned __int8*)v3[2];
    if (v7 == v82) {
      goto LABEL_236;
    }
    v9 = (char)*v7;
    if (v9 >= -32) {
      v48 = v7 + 1;
      goto LABEL_60;
    }
    v83 = *v7;
    v29 = 12;
    if (v83 <= 0xCF) {
      if (*v7 <= 0xCDu) {
        if (v83 != 204) {
          if (v83 == 205) {
            if ((unsigned __int64)(v82 - v7) >= 3) {
              goto LABEL_125;
            }
            goto LABEL_236;
          }
        LABEL_237:
          *a2 = v29;
          goto LABEL_25;
        }
        if ((unsigned __int64)(v82 - v7) < 2) {
        LABEL_236:
          v29 = 11;
          goto LABEL_237;
        }
        goto LABEL_188;
      }
      if (v83 != 206) {
        if ((unsigned __int64)(v82 - v7) < 9) {
          goto LABEL_236;
        }
      LABEL_168:
        *v8 = v7 + 9;
        v9 = bswap64(*(_QWORD*)(v7 + 1));
        if ((unsigned __int64)v9 >> 31 == 0) {
          goto LABEL_197;
        }
        if (HIDWORD(v9) != 0) {
          v73 = 34;
          v74 = 0;
          if (v9 < 0) {
            v75 = 0;
          }
          else {
            v73 = 0;
            v75 = v9;
          }
        LABEL_180:
          if (v73 != 0) {
            result = 8;
            if (v74 != 0) {
              v76 = v9 & ~(v9 >> 63);
            }
            else {
              v76 = v9;
            }
            *(_QWORD*)(a3 + 16) = v76;
          }
          else {
            *(_QWORD*)(a3 + 16) = v75;
            result = 7;
          }
          goto LABEL_268;
        }
        goto LABEL_194;
      }
      if ((unsigned __int64)(v82 - v7) < 5) {
        goto LABEL_236;
      }
    LABEL_192:
      *v8 = v7 + 5;
      LODWORD(v9) = bswap32(*(_DWORD*)(v7 + 1));
    LABEL_193:
      if ((v9 & 0x80000000) == 0) {
        goto LABEL_197;
      }
      goto LABEL_194;
    }
    if (*v7 <= 0xD1u) {
      if (v83 != 208) {
        if ((unsigned __int64)(v82 - v7) < 3) {
          goto LABEL_236;
        }
      LABEL_156:
        *v8 = v7 + 3;
        LODWORD(v9) = ((v7[2] << 16) | (v7[1] << 24)) >> 16;
        goto LABEL_197;
      }
      if ((unsigned __int64)(v82 - v7) < 2) {
        goto LABEL_236;
      }
    LABEL_190:
      *v8 = v7 + 2;
      LODWORD(v9) = (char)v7[1];
      goto LABEL_197;
    }
    if (v83 != 210) {
      if (v83 != 211) {
        goto LABEL_237;
      }
      if ((unsigned __int64)(v82 - v7) <= 8) {
        goto LABEL_236;
      }
    LABEL_176:
      *v8 = v7 + 9;
      v9 = bswap64(*(_QWORD*)(v7 + 1));
      if (v9 >= (__int64)0xFFFFFFFF80000000LL) {
        if (v9 <= 0x7FFFFFFF) {
          goto LABEL_197;
        }
        if (HIDWORD(v9) == 0) {
        LABEL_194:
          *(_DWORD*)(a3 + 16) = v9;
          result = 6;
          goto LABEL_268;
        }
      }
      v74 = 1;
      v73 = 0;
      v75 = v9;
      goto LABEL_180;
    }
    if ((unsigned __int64)(v82 - v7) < 5) {
      goto LABEL_236;
    }
  LABEL_196:
    *v8 = v7 + 5;
    LODWORD(v9) = bswap32(*(_DWORD*)(v7 + 1));
    goto LABEL_197;
  }
  if (v10 == 4) {
    v53 = (unsigned __int8*)v3[2];
    if (v7 != v53) {
      if ((_DWORD)v9 == -53) {
        if ((unsigned __int64)(v53 - v7) >= 9) {
          goto LABEL_93;
        }
      }
      else {
        if (*v7 != 202) {
          goto LABEL_148;
        }
        if ((unsigned __int64)(v53 - v7) >= 5) {
        LABEL_71:
          v54 = *(_DWORD*)(v7 + 1);
          *v8 = v7 + 5;
          v55 = COERCE_FLOAT(bswap32(v54));
          goto LABEL_152;
        }
      }
    }
    if ((unsigned int)Value_b440(v3) != 0) {
      goto LABEL_148;
    }
    v7 = (unsigned __int8*)v3[1];
    v88 = (unsigned __int8*)v3[2];
    if (v7 == v88) {
      goto LABEL_23;
    }
    v89 = *v7;
    if (v89 != 203) {
      if (v89 != 202) {
        goto LABEL_148;
      }
      if ((unsigned __int64)(v88 - v7) < 5) {
        goto LABEL_23;
      }
      goto LABEL_71;
    }
    if ((unsigned __int64)(v88 - v7) < 9) {
      goto LABEL_23;
    }
  LABEL_93:
    v58 = COERCE_DOUBLE(bswap64(*(_QWORD*)(v7 + 1)));
    if (fabs(v58) > 0x1.fffffe0000000p+127) {
      v18 = 9;
      goto LABEL_24;
    }
    v55 = v58;
    *v8 = v7 + 9;
  LABEL_152:
    *(float*)(a3 + 16) = v55;
    result = 9;
    goto LABEL_268;
  }
  if (v10 != 5) {
    goto LABEL_23;
  }
  v11 = (unsigned __int8*)v3[2];
  if (v7 != v11) {
    if ((_DWORD)v9 == -53) {
      if ((unsigned __int64)(v11 - v7) >= 9) {
        goto LABEL_87;
      }
    }
    else {
      if (*v7 != 202) {
        goto LABEL_148;
      }
      if ((unsigned __int64)(v11 - v7) >= 5) {
      LABEL_11:
        v12 = *(_DWORD*)(v7 + 1);
        *v8 = v7 + 5;
        v13 = COERCE_FLOAT(bswap32(v12));
      LABEL_88:
        *(double*)(a3 + 16) = v13;
        result = 10;
        goto LABEL_268;
      }
    }
  }
  if ((unsigned int)Value_b440(v3) != 0) {
    goto LABEL_148;
  }
  v7 = (unsigned __int8*)v3[1];
  v85 = (unsigned __int8*)v3[2];
  if (v7 != v85) {
    v86 = *v7;
    if (v86 != 203) {
      if (v86 == 202) {
        if ((unsigned __int64)(v85 - v7) >= 5) {
          goto LABEL_11;
        }
        goto LABEL_23;
      }
    LABEL_148:
      v18 = 12;
      goto LABEL_24;
    }
    if ((unsigned __int64)(v85 - v7) >= 9) {
    LABEL_87:
      v57 = *(_QWORD*)(v7 + 1);
      *v8 = v7 + 9;
      v13 = COERCE_DOUBLE(bswap64(v57));
      goto LABEL_88;
    }
  }
LABEL_23:
  v18 = 11;
LABEL_24:
  *a2 = v18;
LABEL_25:
  result = 0xFFFFFFFFLL;
  *(_BYTE*)(a3 + 24) = 0;
  v19 = 5;
  *(_DWORD*)a3 = -1;
  v20 = *(_QWORD*)(a1 + 16);
  v21 = *(_QWORD*)(a1 + 24);
LABEL_269:
  *(_DWORD*)(v20 + 8 * v21) = v19;
  return result;
}

#pragma GCC visibility pop
