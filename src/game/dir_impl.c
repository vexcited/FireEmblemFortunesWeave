#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1b394e8[2];
extern _UNKNOWN GameData_1b394f0;
extern __int64 GameData_21ca9f0;
extern int GameData_21ca9f8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 Dir_70d5b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
__int16* Dir_70dd80(__int16* result, __int16* a2);
__int64 Dir_70df40(__int16* a1, __int16* a2);
unsigned __int64 Dir_70eb90(__int16* a1);

__int64 Dir_70d5b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  _BYTE v7[4];
  char v8[4];
  char v9[4];
  char v10;

  v5 = *(_QWORD*)(a1 + 32);
  v7[0] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v7);
    v5 = *(_QWORD*)(a1 + 32);
    v8[0] = 1;
    if (v5 != 0) {
      (*(void (**)(__int64, char*))(*(_QWORD*)v5 + 48LL))(v5, v8);
      v5 = *(_QWORD*)(a1 + 32);
      v9[0] = 2;
      if (v5 != 0) {
        (*(void (**)(__int64, char*))(*(_QWORD*)v5 + 48LL))(v5, v9);
        v5 = *(_QWORD*)(a1 + 32);
        v10 = 3;
        if (v5 != 0) {
          return (*(__int64 (**)(__int64, char*))(*(_QWORD*)v5 + 48LL))(v5,
                                                                        &v10);
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3, a4);
}

unsigned __int16* Dir_70d7a0(unsigned __int16* result)
{
  int v1;
  int v2;
  unsigned __int16 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  unsigned __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  int v13;
  __int16 v14;
  unsigned int v15;
  __int16 v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned __int64 v20;
  unsigned int v21;
  bool v23;
  int v24;
  __int16 v25;
  int v26;
  __int16 v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int16 v31;
  unsigned __int16 v32;
  int v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  __int16 v37;
  unsigned __int16 v38;
  int v39;
  unsigned int v40;
  int v41;
  __int16 v42;
  __int16 v43;
  __int16 v44;
  __int16 v45;
  int v46;
  int v47;
  unsigned __int16 v48;
  unsigned int v49;
  bool v50;
  unsigned int v51;
  unsigned int v52;
  bool v53;
  int v54;
  int v55;
  int v56;
  int v57;

  v1 = *result;
  if (*result != 0) {
    v2 = (__int16)result[5];
    v3 = result[4];
    if (v2 >= 60) {
      v4 = v2 - 119;
      if ((unsigned int)v2 < 0x77) {
        v4 = 0;
      }
      v5 = (unsigned __int16)(v4 + 59) / 0x3Cu;
      v3 += v5 + 1;
      LOWORD(v2) = v2 - 60 * v5 - 60;
      result[4] = v3;
      result[5] = v2;
    }
    if ((v2 & 0x8000) != 0) {
      v6 = -60 - v2;
      if ((unsigned __int16)v2 > 0xFFC4u) {
        v6 = 0;
      }
      v7 = (unsigned __int16)(v6 - ((unsigned __int16)v2 < 0xFFC4u)) / 0x3Cu;
      if ((unsigned __int16)v2 < 0xFFC4u) {
        ++v7;
      }
      v3 += ~v7;
      result[5] = v2 + 60 * v7 + 60;
      result[4] = v3;
    }
    v8 = result[3];
    if ((__int16)v3 >= 60) {
      v9 = v3 - 119;
      if (v3 < 0x77u) {
        v9 = 0;
      }
      v10 = (unsigned __int16)(v9 + 59) / 0x3Cu;
      v8 += v10 + 1;
      v3 = v3 - 60 * v10 - 60;
      result[3] = v8;
      result[4] = v3;
    }
    if ((v3 & 0x8000) != 0) {
      v11 = -60 - v3;
      if (v3 > 0xFFC4u) {
        v11 = 0;
      }
      v12 = (unsigned __int16)(v11 - (v3 < 0xFFC4u)) / 0x3Cu;
      if (v3 < 0xFFC4u) {
        ++v12;
      }
      v8 += ~v12;
      result[4] = v3 + 60 * v12 + 60;
      result[3] = v8;
    }
    v13 = result[2];
    if ((__int16)v8 >= 24) {
      v14 = v8 - 47;
      if (v8 < 0x2Fu) {
        v14 = 0;
      }
      v15 = (unsigned __int16)(v14 + 23) / 0x18u;
      v13 += v15 + 1;
      v8 = v8 - 24 * v15 - 24;
      result[3] = v8;
    }
    if ((v8 & 0x8000) != 0) {
      v16 = -24 - v8;
      if (v8 > 0xFFE8u) {
        v16 = 0;
      }
      v17 = (unsigned __int16)(v16 - (v8 < 0xFFE8u)) / 0x18u;
      if (v8 < 0xFFE8u) {
        ++v17;
      }
      v13 += ~v17;
      result[3] = v8 + 24 * v17 + 24;
    }
    v18 = result[1];
  LABEL_33:
    HIDWORD(v20) = 85899344 - 1030792151 * ((__int16)v1 + 4502);
    LODWORD(v20) = HIDWORD(v20);
    v19 = v20 >> 2;
    LODWORD(v20) = HIDWORD(v20);
    v21 = v20 >> 4;
    v23 = v19 > 0x28F5C28 || v21 < 0xA3D70B;
    while (1) {
      while (1) {
        v24 = v18;
        v25 = v18;
        if ((__int16)v18 <= 1) {
          v25 = 1;
        }
        v26 = GameData_1b394e8[(unsigned __int16)(v25 - 1) % 0xCu];
        if ((unsigned __int16)v18 == 2 && (((_BYTE)v1 - 106) & 3) == 0) {
          break;
        }
        if (v26 >= (__int16)v13) {
          goto LABEL_53;
        }
        v13 -= v26;
        v18 = (__int16)(v18 + 1);
        result[2] = v13;
        if (v18 >= 13) {
          if ((unsigned int)v18 >= 0x18) {
            v27 = 24;
          }
          else {
            v27 = v18;
          }
          v28 = (unsigned __int16)(v24 - v27 + 12) / 0xCu;
          v29 = v24 - 12 * v28;
          v1 += v28 + 1;
          v18 = v29 - 11;
          *result = v1;
          result[1] = v29 - 11;
          goto LABEL_33;
        }
      }
      if (v23) {
        ++v26;
      }
      if (v26 >= (__int16)v13) {
        break;
      }
      v13 -= v26;
      v18 = 3;
      result[2] = v13;
      result[1] = 3;
    }
  LABEL_53:
    while ((__int16)v13 <= 0) {
      v30 = (__int16)v24 - 1;
      if ((unsigned __int16)v24 == 1) {
        v30 = 12;
      }
      if (v30 <= 1) {
        v31 = 1;
      }
      else {
        v31 = v30;
      }
      v32 = (unsigned __int16)(v31 - 1) % 0xCu;
      if (v30 != 2 ||
          (v33 = (__int16)v1 + 4502, (((_BYTE)v1 - 106) & 3) != 0) ||
          (HIDWORD(v34) = 85899344 - 1030792151 * v33,
           LODWORD(v34) = HIDWORD(v34),
           (unsigned int)(v34 >> 2) <= 0x28F5C28) &&
              v33 % 400 != 0) {
        v35 = GameData_1b394e8[v32];
      }
      else {
        v35 = GameData_1b394e8[v32] + 1;
      }
      LOWORD(v13) = v13 + v35;
      v36 = (__int16)(v24 - 1);
      if (v36 <= -11) {
        v37 = -11;
      }
      else {
        v37 = v24 - 1;
      }
      v38 = v37 + 1;
      v39 = v38;
      v40 =
          (unsigned __int16)(v38 - v24 - (v38 != (unsigned __int16)v24)) / 0xCu;
      if (v39 != (unsigned __int16)v24) {
        ++v40;
      }
      LOWORD(v24) = v24 + 12 * v40 + 11;
      v41 = v1 + ~v40;
      if (v36 <= 0) {
        v1 = v41;
      }
      else {
        LOWORD(v24) = v36;
      }
    }
    if ((__int16)v24 >= 13) {
      v42 = v24 - 24;
      if ((unsigned __int16)v24 < 0x18u) {
        v42 = 0;
      }
      v43 = (unsigned __int16)(v42 + 11) / 0xCu;
      LOWORD(v1) = v1 + v43 + 1;
      LOWORD(v24) = v24 - 12 * v43 - 12;
    }
    if ((__int16)v24 <= 0) {
      if ((__int16)v24 <= -11) {
        v44 = -11;
      }
      else {
        v44 = v24;
      }
      v45 = (unsigned __int16)(v44 - v24 - ((__int16)v24 < -11)) / 0xCu;
      if ((__int16)v24 < -11) {
        ++v45;
      }
      LOWORD(v24) = v24 + 12 * v45 + 12;
      LOWORD(v1) = v1 + ~v45;
    }
  }
  else {
    LOWORD(v24) = result[1];
    LOWORD(v13) = result[2];
  }
  v1 = (__int16)v1;
  v46 = (unsigned __int16)v24;
  if ((__int16)v1 <= 1) {
    v1 = 1;
  }
  if (v1 >= 2000) {
    LOWORD(v1) = 2000;
  }
  v47 = (__int16)v24;
  *result = v1;
  if ((__int16)v24 <= 1) {
    v47 = 1;
  }
  if (v47 >= 12) {
    v47 = 12;
  }
  v48 = v1 + 4502;
  result[1] = v47;
  v49 = v47 - 1;
  v50 = v46 == 2 && (v48 & 3) == 0;
  if (v50 && ((v51 = (unsigned __int16)((v48 << 14) |
                                        ((unsigned __int16)(23593 * v48) >> 2)),
               v52 = v48 % 0x190u, v51 <= 0x28F)
                  ? (v53 = v52 == 0)
                  : (v53 = true),
              v53)) {
    v54 = GameData_1b394e8[v49] + 1;
  }
  else {
    v54 = GameData_1b394e8[v49];
  }
  if (v54 >= (__int16)v13) {
    LOWORD(v54) = v13;
  }
  if ((__int16)v13 < 1) {
    LOWORD(v54) = 1;
  }
  result[2] = v54;
  v55 = (__int16)result[3] & ~((__int16)result[3] >> 31);
  if (v55 >= 24) {
    LOWORD(v55) = 24;
  }
  result[3] = v55;
  v56 = (__int16)result[4] & ~((__int16)result[4] >> 31);
  if (v56 >= 59) {
    LOWORD(v56) = 59;
  }
  result[4] = v56;
  v57 = (__int16)result[5] & ~((__int16)result[5] >> 31);
  if (v57 >= 59) {
    LOWORD(v57) = 59;
  }
  result[5] = v57;
  return result;
}

__int16* Dir_70dd80(__int16* result, __int16* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int16 v5;
  int v6;
  int v7;
  int v8;
  unsigned __int16 v9;
  int v10;
  bool v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  int v15;
  __int16 v16;
  int v17;
  int v18;
  int v19;

  v2 = *result;
  if (a2[1] * *a2 * a2[2] != 0) {
    if (((__int64)result[1] << 24) + (v2 << 32) + ((__int64)result[2] << 18) +
            ((__int64)result[3] << 12) + ((__int64)result[4] << 6) +
            result[5] >=
        (unsigned __int64)(((__int64)a2[1] << 24) + ((__int64)*a2 << 32) +
                           ((__int64)a2[2] << 18) + ((__int64)a2[3] << 12) +
                           ((__int64)a2[4] << 6) + a2[5])) {
      v3 = *(_QWORD*)a2;
      *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
      *(_QWORD*)result = v3;
    }
  }
  else {
    v4 = (unsigned __int16)result[1];
    if ((int)v2 <= 1) {
      LODWORD(v2) = 1;
    }
    if ((int)v2 >= 2000) {
      v5 = 2000;
    }
    else {
      v5 = v2;
    }
    v6 = (__int16)v4;
    *result = v5;
    if ((__int16)v4 <= 1) {
      v6 = 1;
    }
    if (v6 >= 12) {
      v7 = 12;
    }
    else {
      v7 = v6;
    }
    v8 = result[2];
    v9 = v5 + 4502;
    result[1] = v7;
    v10 = v7 - 1;
    v11 = (v9 & 3) == 0 && v4 == 2;
    if (v11 &&
        ((v12 = (unsigned __int16)((v9 << 14) |
                                   ((unsigned __int16)(23593 * v9) >> 2)),
          v13 = v9 % 0x190u, v12 <= 0x28F)
             ? (v14 = v13 == 0)
             : (v14 = true),
         v14)) {
      v15 = GameData_1b394e8[v10] + 1;
    }
    else {
      v15 = GameData_1b394e8[v10];
    }
    if (v15 >= v8) {
      LOWORD(v15) = v8;
    }
    if (v8 < 1) {
      v16 = 1;
    }
    else {
      v16 = v15;
    }
    result[2] = v16;
    v17 = result[3] & ~(result[3] >> 31);
    if (v17 >= 24) {
      LOWORD(v17) = 24;
    }
    result[3] = v17;
    v18 = result[4] & ~(result[4] >> 31);
    if (v18 >= 59) {
      LOWORD(v18) = 59;
    }
    result[4] = v18;
    v19 = result[5] & ~(result[5] >> 31);
    if (v19 >= 59) {
      LOWORD(v19) = 59;
    }
    result[5] = v19;
  }
  return result;
}

__int64 Dir_70df40(__int16* a1, __int16* a2)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v23;
  unsigned __int64 v24;
  _DWORD* v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned __int64 v33;
  _DWORD* v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  char* v46;
  _DWORD* v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  unsigned __int64 v57;
  bool v58;
  int v59;
  unsigned __int64 v60;
  int v61;
  int v62;
  unsigned __int64 v63;
  int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  unsigned __int64 v71;
  unsigned int v73;
  unsigned __int64 v74;
  _DWORD* v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  unsigned int v79;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  int v84;
  int v85;
  unsigned int v86;
  unsigned __int64 v87;
  _DWORD* v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  unsigned int v92;
  char* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  char* v97;
  _DWORD* v98;
  unsigned int v99;
  unsigned int v100;

  v2 = a1[1];
  v3 = (unsigned int)*a1;
  v4 = a1[2];
  if (v2 * (_DWORD)v3 * v4 != 0) {
    v5 = a2[1];
    v6 = (unsigned int)*a2;
    v7 = a2[2];
    if (v5 * (_DWORD)v6 * v7 != 0) {
      v8 = a1[3];
      v9 = a1[4];
      v10 = ((__int64)a1[1] << 24) + (v3 << 32) + ((__int64)a1[2] << 18) +
            (v8 << 12) + (v9 << 6) + a1[5];
      v11 = a2[3];
      v12 = a2[4];
      v13 = ((__int64)a2[1] << 24) + (v6 << 32) + ((__int64)a2[2] << 18) +
            (v11 << 12) + (v12 << 6) + a2[5];
      if (v10 == v13) {
        return 0;
      }
      if (v10 < v13) {
        if (v2 < 2) {
          v18 = 0;
        }
        else if ((((_DWORD)v3 + 4502) & 3) != 0) {
          v15 = v2 - 1;
          v16 = v2 - 2;
          v17 = (v2 - 1) & 3;
          if (v16 >= 3) {
            v23 = v15 & 0xFFFFFFFC;
            v24 = 0;
            v18 = 0;
            do {
              v25 = &GameData_1b394e8[v24 + -12 * (v24 / 0xC)];
              v24 += 4LL;
              v18 +=
                  1440 * *v25 + 1440 * v25[1] + 1440 * v25[2] + 1440 * v25[3];
            } while (v23 != (_DWORD)v24);
            v19 = v24 + 1;
          }
          else {
            v18 = 0;
            v19 = 1;
          }
          if (v17 != 0) {
            v26 = v19 - 1;
            do {
              --v17;
              v27 = v26 % 0xC;
              ++v26;
              v18 += 1440 * GameData_1b394e8[v27];
            } while (v17 != 0);
          }
        }
        else {
          HIDWORD(v21) = -1030792151 * (v3 + 4502) + 85899344;
          LODWORD(v21) = HIDWORD(v21);
          v20 = v21 >> 2;
          LODWORD(v21) = HIDWORD(v21);
          if ((unsigned int)(v21 >> 4) < 0xA3D70B || v20 > 0x28F5C28) {
            if (v2 == 2) {
              v18 = 44640;
            }
            else if ((unsigned __int16)v2 == 3) {
              v18 = 86400;
            }
            else {
              v37 = v2 - 3;
              v38 = v2 - 4;
              v18 = 86400;
              v39 = (v2 - 3) & 3;
              if (v38 >= 3) {
                v41 = v37 & 0xFFFFFFFC;
                v42 = (char*)&GameData_1b394f0;
                v43 = 0;
                v44 = 4;
                do {
                  v45 = v44 / 0xC;
                  v44 += 4LL;
                  v46 = &v42[-48 * (v43 / 0xC)];
                  v42 += 16;
                  v47 = &GameData_1b394e8[v43 + -12 * v45];
                  v43 += 4LL;
                  v18 += 1440 * *(_DWORD*)v46 + 1440 * *((_DWORD*)v46 + 1) +
                         1440 * v47[4] + 1440 * v47[5];
                } while (v41 != (_DWORD)v43);
                v40 = v43 + 3;
              }
              else {
                v40 = 3;
              }
              if (v39 != 0) {
                v48 = v40 - 1;
                do {
                  --v39;
                  v49 = v48 % 0xC;
                  ++v48;
                  v18 += 1440 * GameData_1b394e8[v49];
                } while (v39 != 0);
              }
            }
          }
          else {
            v28 = v2 - 1;
            v29 = v2 - 2;
            v30 = (v2 - 1) & 3;
            if (v29 >= 3) {
              v32 = v28 & 0xFFFFFFFC;
              v33 = 0;
              v18 = 0;
              do {
                v34 = &GameData_1b394e8[v33 + -12 * (v33 / 0xC)];
                v33 += 4LL;
                v18 +=
                    1440 * *v34 + 1440 * v34[1] + 1440 * v34[2] + 1440 * v34[3];
              } while (v32 != (_DWORD)v33);
              v31 = v33 + 1;
            }
            else {
              v18 = 0;
              v31 = 1;
            }
            if (v30 != 0) {
              v35 = v31 - 1;
              do {
                --v30;
                v36 = v35 % 0xC;
                ++v35;
                v18 += 1440 * GameData_1b394e8[v36];
              } while (v30 != 0);
            }
          }
        }
        if ((int)v3 < (int)v6) {
          v50 = v6 - v3;
          if ((_DWORD)v6 - 1 == (_DWORD)v3) {
            v51 = 0;
          LABEL_65:
            if ((v50 & 1) != 0) {
              v61 = v3 + 4502;
              if ((((_DWORD)v3 + 4502) & 3) != 0 ||
                  (v62 = 527040, HIDWORD(v63) = -1030792151 * v61 + 85899344,
                   LODWORD(v63) = HIDWORD(v63),
                   (unsigned int)(v63 >> 2) <= 0x28F5C28) &&
                      v61 % 400 != 0) {
                v62 = 525600;
              }
              v51 += v62;
            }
            goto LABEL_71;
          }
          v52 = -(int)v3;
          v51 = 0;
          v53 = v50 & 0xFFFFFFFE;
          v54 = v3 + 4503;
          while (1) {
            v56 = v54 - 1;
            if (((v54 - 1) & 3) == 0 &&
                ((HIDWORD(v57) = 85899344 - 1030792151 * v56,
                  LODWORD(v57) = HIDWORD(v57),
                  (unsigned int)(v57 >> 2) <= 0x28F5C28)
                     ? (v58 = v56 % 400 == 0)
                     : (v58 = true),
                 v58)) {
              v59 = 527040;
              if ((v54 & 3) == 0) {
                goto LABEL_61;
              }
            }
            else {
              v59 = 525600;
              if ((v54 & 3) == 0) {
              LABEL_61:
                v55 = 527040;
                HIDWORD(v60) = 85899344 - 1030792151 * v54;
                LODWORD(v60) = HIDWORD(v60);
                if ((unsigned int)(v60 >> 2) > 0x28F5C28 || v54 % 400 == 0) {
                  goto LABEL_51;
                }
              }
            }
            v55 = 525600;
          LABEL_51:
            v52 -= 2;
            v54 += 2;
            v53 -= 2;
            v51 += v55 + v59;
            if (v53 == 0) {
              LODWORD(v3) = -v52;
              goto LABEL_65;
            }
          }
        }
        v51 = 0;
      LABEL_71:
        if (v5 >= 2) {
          v64 = v6 + 4502;
          if ((v64 & 3) != 0) {
            v65 = v5 - 1;
            v66 = v5 - 2;
            v67 = (v5 - 1) & 3;
            if (v66 >= 3) {
              v73 = v65 & 0xFFFFFFFC;
              v74 = 0;
              do {
                v75 = &GameData_1b394e8[v74 + -12 * (v74 / 0xC)];
                v74 += 4LL;
                v51 +=
                    1440 * *v75 + 1440 * v75[1] + 1440 * v75[2] + 1440 * v75[3];
              } while (v73 != (_DWORD)v74);
              v68 = v74 + 1;
            }
            else {
              v68 = 1;
            }
            if (v67 != 0) {
              v76 = v68 - 1;
              do {
                --v67;
                v77 = v76 % 0xC;
                ++v76;
                v51 += 1440 * GameData_1b394e8[v77];
              } while (v67 != 0);
            }
          }
          else {
            v69 = -1030792151 * v64 + 85899344;
            HIDWORD(v71) = v69;
            LODWORD(v71) = v69;
            v70 = v71 >> 2;
            HIDWORD(v71) = v69;
            LODWORD(v71) = v69;
            if ((unsigned int)(v71 >> 4) < 0xA3D70B || v70 > 0x28F5C28) {
              if (v5 == 2) {
                v51 += 44640;
              }
              else {
                v82 = v5 - 3;
                v51 += 86400;
                if (v5 != 3) {
                  v83 = v5 - 4;
                  v84 = v82 & 3;
                  if (v83 >= 3) {
                    v92 = v82 & 0xFFFFFFFC;
                    v93 = (char*)&GameData_1b394f0;
                    v94 = 0;
                    v95 = 4;
                    do {
                      v96 = v95 / 0xC;
                      v95 += 4LL;
                      v97 = &v93[-48 * (v94 / 0xC)];
                      v93 += 16;
                      v98 = &GameData_1b394e8[v94 + -12 * v96];
                      v94 += 4LL;
                      v51 += 1440 * *(_DWORD*)v97 + 1440 * *((_DWORD*)v97 + 1) +
                             1440 * v98[4] + 1440 * v98[5];
                    } while (v92 != (_DWORD)v94);
                    v85 = v94 + 3;
                  }
                  else {
                    v85 = 3;
                  }
                  if (v84 != 0) {
                    v99 = v85 - 1;
                    do {
                      --v84;
                      v100 = v99 % 0xC;
                      ++v99;
                      v51 += 1440 * GameData_1b394e8[v100];
                    } while (v84 != 0);
                  }
                }
              }
            }
            else {
              v78 = v5 - 1;
              v79 = v5 - 2;
              v80 = (v5 - 1) & 3;
              if (v79 >= 3) {
                v86 = v78 & 0xFFFFFFFC;
                v87 = 0;
                do {
                  v88 = &GameData_1b394e8[v87 + -12 * (v87 / 0xC)];
                  v87 += 4LL;
                  v51 += 1440 * *v88 + 1440 * v88[1] + 1440 * v88[2] +
                         1440 * v88[3];
                } while (v86 != (_DWORD)v87);
                v81 = v87 + 1;
              }
              else {
                v81 = 1;
              }
              if (v80 != 0) {
                v89 = v81 - 1;
                do {
                  --v80;
                  v90 = v89 % 0xC;
                  ++v89;
                  v51 += 1440 * GameData_1b394e8[v90];
                } while (v80 != 0);
              }
            }
          }
        }
        v91 = 1440 * (v7 - v4) - v9 + v12 + 60 * (v11 - v8) - v18 + v51;
        if (v91 <= 1) {
          return 1;
        }
        else {
          return (unsigned int)v91;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}

unsigned __int64 Dir_70eb90(__int16* a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned __int64 result;
  __int16 v7[3];
  int v8;
  __int16 v9;

  v1 = *a1;
  v2 = a1[1];
  v3 = a1[2];
  if (v2 * v1 * v3 == 0) {
    return 0;
  }
  v8 = 0;
  v9 = 0;
  v7[0] = v1;
  v7[2] = v3;
  v7[1] = v2;
  if (((__int64)SWORD1(GameData_21ca9f0) << 24) +
          ((__int64)(__int16)GameData_21ca9f0 << 32) +
          ((__int64)SWORD2(GameData_21ca9f0) << 18) +
          ((__int64)SHIWORD(GameData_21ca9f0) << 12) +
          ((__int64)(__int16)GameData_21ca9f8 << 6) +
          SHIWORD(GameData_21ca9f8) <=
      (unsigned __int64)(((__int64)v2 << 24) + ((__int64)v1 << 32) +
                         ((__int64)v3 << 18))) {
    result = Dir_70df40((__int16*)&GameData_21ca9f0, v7);
    if ((_DWORD)result != 0) {
      if ((int)result < 1) {
        return 0xFFFFFFFFLL;
      }
      else if ((unsigned int)result >= 0x5A0) {
        return (unsigned int)result / 0x5A0uLL;
      }
      else {
        return 1;
      }
    }
  }
  else {
    v4 = Dir_70df40(v7, (__int16*)&GameData_21ca9f0);
    if (v4 != 0) {
      if (v4 < 1) {
        v5 = -1;
      }
      else if ((unsigned int)v4 >= 0x5A0) {
        v5 = v4 / 0x5A0u;
      }
      else {
        v5 = 1;
      }
    }
    else {
      v5 = 0;
    }
    return -v5;
  }
  return result;
}

#pragma GCC visibility pop
