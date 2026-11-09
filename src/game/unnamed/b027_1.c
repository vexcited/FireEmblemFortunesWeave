#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;

extern __int64 (*GameData_2010b88[])();

extern __int64 (*GameData_212b098[])();

extern __int64 (*GameData_212bab8[])();

extern __int64 (*GameData_212bb38[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c738[2];

extern __int64* GameData_212c878[6];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212d670[3];

extern __int64* GameData_212d678[2];

extern char** GameData_212def8;

extern __int64* GameData_2130190[17];

extern __int64* GameData_21301b8[12];

extern __int64 GameData_21cd0e8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_13633c0(void);

__int64 GameRoutine_155e830(_QWORD, _QWORD);

__int64 GameRoutine_155f480(_QWORD, _QWORD);

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_15613b0(_QWORD, _QWORD);

__int64 GameRoutine_15619a0(_QWORD, _QWORD);

__int64 GameRoutine_15621a0(_QWORD, _QWORD);

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);

__int64 GameRoutine_1563e00(_QWORD, _QWORD);

__int64 GameRoutine_1586140(_QWORD, _QWORD);

__int64 GameRoutine_1592340(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_17356e0(_QWORD, _QWORD);

__int64 GameRoutine_18415e0(void);

__int64 GameRoutine_188ab20(_QWORD, _QWORD);

__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

_QWORD* GameRoutine_19f2c80(_QWORD*, _QWORD*, unsigned __int16***, int, _QWORD*,
                            __int64);

__int64 GameRoutine_19f3700(__int64 result);

__int64 GameRoutine_19f3ea0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_19fc190(_QWORD, _QWORD);

__int64 GameRoutine_1a00e90(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_56b600(void);

__int64 GameRoutine_60a020(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(void);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD, _QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_746340(_QWORD, _QWORD);

__int64 GameRoutine_930b90(_QWORD, _QWORD);

_QWORD* GameRoutine_9b8fe0(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_9bcfa0(_QWORD, _QWORD);

__int64 GameRoutine_9bd480(_QWORD);

void __attribute__((noreturn)) GameRoutine_bfeba0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);

__int64 GameHr_19f3aa0(__int64 result, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _WORD* v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v25;
  unsigned int v26;
  int v27;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  signed __int64 v37;
  unsigned __int16** v38;
  unsigned __int16** v39;
  __int64 v40;
  __int64 v41;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int16** v47;
  unsigned __int16** v48;
  char* v49;

  if (a2 == 0 ||
      (unsigned int)*(unsigned __int8*)(GameData_21cd0e8 + 32) - 3 > 2) {
    return result;
  }
  *(_QWORD*)(result + 112) = a3;
  v5 = a3;
  *(_DWORD*)(result + 128) = 2;
  v6 = GameData_212c878[0];
  if (a5 != 0 && *(_QWORD*)(a5 + 664) != 0 ||
      a4 != nullptr &&
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)a4) +
                    73LL) == 10) {
    goto LABEL_21;
  }
  v7 = *(_QWORD*)(a2 + 440);
  if (v7 != 0) {
    v8 = *(unsigned __int8*)(v7 + 16);
    v9 = result;
  }
  else {
    v9 = result;
    v8 = 9;
  }
  if (*(_BYTE*)(a3 + 5) != 0) {
    v10 = a2;
    v11 = GameRoutine_6ea8c0(a3 + 5);
    if (v11 != 0 && (v12 = *(_QWORD*)(v11 + 440)) != 0) {
      v13 = *(unsigned __int8*)(v12 + 16);
    }
    else {
      v13 = 9;
    }
    result = v9;
    a2 = v10;
    if (v8 == v13) {
      goto LABEL_21;
    }
  }
  else {
    v13 = 9;
    result = v9;
    if (v8 == 9) {
      goto LABEL_21;
    }
  }
  if (v8 != 0) {
    if (v8 == 3 && v13 == 0) {
      goto LABEL_21;
    }
  LABEL_72:
    v14 = 0;
    goto LABEL_22;
  }
  if (v13 != 3) {
    goto LABEL_72;
  }
LABEL_21:
  v14 = 1;
LABEL_22:
  v44 = result;
  v45 = (_QWORD*)a2;
  *(_DWORD*)(result + 128) = v14;
  v15 = (_WORD*)(a2 + 828);
  v16 = 0;
  v17 = nullptr;
  v18 = 0;
  v19 = nullptr;
  v20 = GameData_212cfd0[0];
  v46 = v5;
  do {
    v21 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
    v22 = *(unsigned __int8*)(v21 + 72);
    v23 = (1LL << *(_BYTE*)(v21 + 73)) & 0x7DC;
    if (v22 > 7 || v23 == 0) {
      if (*v15 == 0) {
        goto LABEL_24;
      }
      result = GameRoutine_746340(*v20, 3);
      if ((result & 1) == 0) {
        goto LABEL_24;
      }
    }
    else {
      result = GameRoutine_746340(*v20, 4);
      if ((result & 1) == 0) {
        goto LABEL_24;
      }
      v25 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int16)*v15);
      v26 = *(unsigned __int8*)(v25 + 72);
      v27 = *(unsigned __int8*)(v25 + 73);
      if (v26 <= 7 && v27 == 7) {
        if (*(_BYTE*)(v5 + 5) == 0) {
          goto LABEL_24;
        }
        result = GameRoutine_6ea8c0(v5 + 5);
        if (result == 0) {
          goto LABEL_24;
        }
        result = GameRoutine_19f3ea0(v45, v5, (unsigned int)v16, 4);
        if ((result & 1) == 0) {
          goto LABEL_24;
        }
      }
      else if (((*(_DWORD*)(v5 + 8) >> v16) & 1) == 0) {
        goto LABEL_24;
      }
    }
    if ((unsigned __int64)v19 < v18) {
      *(_QWORD*)v19 = v15;
      v19 += 8;
    }
    else {
      v29 = (char*)(v19 - v17);
      v30 = (v19 - v17) >> 3;
      v31 = v30 + 1;
      if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
        goto LABEL_73;
      }
      if ((__int64)(v18 - (_QWORD)v17) >> 2 > v31) {
        v31 = (__int64)(v18 - (_QWORD)v17) >> 2;
      }
      if (v18 - (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v32 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v32 = v31;
      }
      if (v32 != 0) {
        if (v32 >> 61 != 0) {
          GameRoutine_60a210(result, a2);
        }
        v33 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v32, 16, 0);
      }
      else {
        v33 = 0;
      }
      v18 = v33 + 8 * v32;
      v34 = (char*)(v19 - v17);
      v35 = (__int64)&v29[v33 + -8 * v30];
      *(_QWORD*)&v29[v33] = v15;
      v19 = &v29[v33 + 8];
      result = GameRoutine_1a0b950(v35, v17, v34);
      if (v17 != nullptr) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v36 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36);
      }
      v17 = (char*)v35;
      v5 = v46;
      v20 = GameData_212cfd0[0];
    }
  LABEL_24:
    ++v16;
    v15 += 4;
  } while (v16 != 30);
  v37 = v19 - v17;
  v48 = nullptr;
  v49 = nullptr;
  v47 = nullptr;
  if (v19 != v17) {
    if (v37 < 0) {
    LABEL_73:
      GameRoutine_bfeba0(result, a2);
    }
    v38 = (unsigned __int16**)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                 v19 - v17, 16, 0);
    v39 = (unsigned __int16**)((char*)v38 + v37);
    v47 = v38;
    v49 = (char*)v38 + v37;
    GameRoutine_1a0b950(v38, v17, v19 - v17);
    v48 = v39;
  }
  GameRoutine_19f2c80((_QWORD*)v44, v45, &v47, *(_DWORD*)(v44 + 128), a4, a5);
  if (v47 != nullptr) {
    v48 = v47;
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v40 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40);
  }
  result = GameRoutine_19f3700(v44);
  if (v17 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v41 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41);
  }
  return result;
}

__int64 GameHr_19fc0b0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = a2[1];
  if (result == 0) {
    return result;
  }
  result = GameRoutine_1a0a0c0(result);
  if (result == 0) {
    return result;
  }
  v5 = *a2;
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != 0) {
      goto LABEL_5;
    }
    return 0;
  }
  v8 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  GameRoutine_1a09c50(v8);
  if (v5 == 0) {
    return 0;
  }
LABEL_5:
  v6 = a2[1];
  v9 = 0;
  v10 = 0;
  if (v6 != 0) {
    v10 = GameRoutine_1a0a0c0(v6);
    if (v10 != 0) {
      v9 = *a2;
    }
  }
  GameRoutine_19fc190(a1, &v9);
  v7 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    GameRoutine_1a09c50(v7);
  }
  return 1;
}

__int64* GameHr_19fc2e0(__int64* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;
  __int64 v17;
  __int64* v18;

  v2 = *result;
  v3 = result[1];
  v4 = result;
  if (*result != v3) {
    while (1) {
      if (*(_QWORD*)v2 != 0) {
        result = (__int64*)a2[1];
        if (result != nullptr) {
          result = (__int64*)GameRoutine_1a0a0c0(result);
          if (result != nullptr) {
            break;
          }
        }
      }
    LABEL_5:
      v2 += 16;
      if (v2 == v3) {
        v2 = *v4;
        v3 = v4[1];
        goto LABEL_35;
      }
    }
    v6 = *a2;
    v7 = result;
    if (*a2 == 0) {
    LABEL_3:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v7 + 16))(v7);
        result = (__int64*)GameRoutine_1a09c50(v7);
      }
      goto LABEL_5;
    }
    if ((*(_BYTE*)(*(_QWORD*)v2 + 8LL) & 1) != 0) {
      GameRoutine_60a270(v15, *(_QWORD*)(*(_QWORD*)v2 + 24LL),
                         *(_QWORD*)(*(_QWORD*)v2 + 16LL));
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      v9 = *(char**)(*(_QWORD*)v2 + 24LL);
      v15[0] = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      v15[1] = v8;
      v16 = v9;
    }
    if ((v15[0] & 1) != 0) {
      v10 = v16;
    }
    else {
      v10 = (char*)v15 + 1;
    }
    GameRoutine_1560070(&v17, v6, v10);
    result = v18;
    if (v18 != nullptr) {
      v11 = GameRoutine_1a0a0c0(v18);
      result = v18;
      if (v11 != 0) {
        v12 = v17;
      }
      else {
        v12 = 0;
      }
      if (v18 != nullptr) {
        result = (__int64*)GameRoutine_1a09c50(v18);
      }
      if ((v15[0] & 1) == 0) {
        goto LABEL_29;
      }
    }
    else {
      v11 = 0;
      v12 = 0;
      if ((v15[0] & 1) == 0) {
      LABEL_29:
        if (v12 != 0) {
          result = (__int64*)GameRoutine_155e830(v12, 0);
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = (__int64*)GameRoutine_1a09c50(v11);
        }
        goto LABEL_3;
      }
    }
    if (v16 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v13 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(GameData_2265ee0 + v13);
    }
    goto LABEL_29;
  }
LABEL_35:
  while (v3 != v2) {
    v14 = *(_QWORD*)(v3 - 8);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = (__int64*)GameRoutine_1a09c50(v14);
    }
    v3 -= 16;
  }
  v4[1] = v2;
  return result;
}

__int64 GameHr_1a006e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4,
                       float a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64* v23;
  char v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  char v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  char* v55;

  result = a2[1];
  if (result == 0) {
    return result;
  }
  result = GameRoutine_1a0a0c0(result);
  if (result == 0) {
    return result;
  }
  v11 = *a2;
  v12 = result;
  if (v11 == 0) {
    goto LABEL_60;
  }
  v48 = result;
  v49 = a1;
  v13 = -7680;
  v14 = 0;
  v55 = (char*)&v50 + 1;
  do {
    v19 = *a3;
    v20 = *a3 + v13;
    if (*(_QWORD*)(v20 + 7696) == 0) {
      break;
    }
    v17 = *(_QWORD*)(v20 + 7704);
    v16 = *(_QWORD*)(v20 + 7712);
    if (v17 != v16) {
      v21 = *a4;
      if (v14 >= 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
        break;
      }
      v15 = *(int*)(v20 + 7680);
      if (**(_QWORD**)(v17 + 8 * v15) == 0) {
        goto LABEL_6;
      }
      v22 = v21 + 40 * v14;
      v24 = *(_BYTE*)(v22 + 8);
      v23 = (unsigned __int64*)(v22 + 8);
      if ((v24 & 1) != 0) {
        GameRoutine_60a270(&v50, *(_QWORD*)(v21 + 40 * v14 + 24),
                           *(_QWORD*)(v21 + 40 * v14 + 16));
      }
      else {
        v25 = *v23;
        v26 = v23[1];
        v27 = (char*)v23[2];
        v51 = v26;
        v52 = v27;
        v50 = v25;
      }
      if ((v50 & 1) != 0) {
        v28 = v52;
      }
      else {
        v28 = v55;
      }
      GameRoutine_1560070(&v53, v11, v28);
      result = v54;
      if (v54 != 0) {
        v29 = GameRoutine_1a0a0c0(v54);
        result = v54;
        if (v29 != 0) {
          v30 = v53;
        }
        else {
          v30 = 0;
        }
        if (v54 != 0) {
          result = GameRoutine_1a09c50(v54);
        }
        if ((v50 & 1) == 0) {
        LABEL_34:
          if (v30 != 0) {
            v32 = *(_DWORD*)(v19 + v13 + 7684);
            v33 = *(_DWORD*)(v19 + v13 + 7688);
            LODWORD(v51) = 0;
            v50 = __PAIR64__(v33, v32);
            GameRoutine_15613b0(v30, &v50);
            v50 = 0x3F8000003F800000LL;
            GameRoutine_15619a0(v30, &v50);
            GameRoutine_155e830(v30, 1);
            v34 = GameRoutine_155f480(v30, "MapChip_Efficacy");
            if (v34 != 0) {
              v35 = GameRoutine_1a0a6c0(v34, GameData_212d670[0],
                                        GameData_212d678[0], 0);
              if (v35 != 0) {
                v36 = *(_BYTE*)(v35 + 88);
                *(_QWORD*)(v35 + 60) = 0;
                v36 |= 0x10u;
                *(float*)(v35 + 68) = a5;
                *(_BYTE*)(v35 + 88) = v36;
                v37 = *(_DWORD*)(v49 + 212);
                *(_BYTE*)(v35 + 88) = v36;
                *(_DWORD*)(v35 + 80) = v37;
                *(_DWORD*)(v35 + 84) = v37;
                GameRoutine_18415e0();
              }
            }
            result = GameRoutine_155f480(v30, "N_Rot");
            if (result != 0) {
              v38 = *(_DWORD*)(v49 + 212);
              *(_DWORD*)(result + 80) = v38;
              *(_DWORD*)(result + 84) = v38;
              *(_BYTE*)(result + 88) |= 0x10u;
            }
          }
          if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            result = GameRoutine_1a09c50(v29);
          }
          LODWORD(v15) = *(_DWORD*)(v20 + 7680);
          v16 = *(_QWORD*)(v20 + 7712);
          v17 = *(_QWORD*)(v20 + 7704);
          ++v14;
        LABEL_6:
          if ((int)v15 + 1 < (unsigned __int64)((v16 - v17) >> 3)) {
            v18 = v15 + 1;
          }
          else {
            v18 = 0;
          }
          *(_DWORD*)(v20 + 7680) = v18;
          goto LABEL_10;
        }
      }
      else {
        v30 = 0;
        v29 = 0;
        if ((v50 & 1) == 0) {
          goto LABEL_34;
        }
      }
      if (v52 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v31 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31);
      }
      goto LABEL_34;
    }
  LABEL_10:
    v13 += 48;
  } while (v13 != 0);
  v39 = *a4;
  v12 = v48;
  if (v14 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3)) {
    v40 = 40 * v14;
    do {
      v41 = (_QWORD*)(v39 + v40);
      v42 = v41 + 1;
      if ((v41[1] & 1) != 0) {
        GameRoutine_60a270(&v50, v41[3], v41[2]);
      }
      else {
        v43 = *v42;
        v44 = v42[1];
        v45 = (char*)v42[2];
        v51 = v44;
        v52 = v45;
        v50 = v43;
      }
      if ((v50 & 1) != 0) {
        v46 = v52;
      }
      else {
        v46 = (char*)&v50 + 1;
      }
      result = GameRoutine_155f480(v11, v46);
      if (result != 0) {
        *(_BYTE*)(result + 88) &= ~1u;
      }
      if ((v50 & 1) != 0 && v52 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v47);
      }
      v39 = *a4;
      ++v14;
      v40 += 40;
    } while (v14 < 0xCCCCCCCCCCCCCCCDLL * ((a4[1] - *a4) >> 3));
  }
LABEL_60:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return GameRoutine_1a09c50(v12);
  }
  return result;
}

__int64 GameHr_1a00ae0(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;

  *(_DWORD*)(a1 + 200) = 0;
  v54 = a3;
  result = a2[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v7 = *a2;
      v43 = result;
      if (v7 != 0) {
        v8 = GameRoutine_155f480(v7, "N_Weapon");
        if (v8 != 0) {
          v9 = *(_BYTE*)(v8 + 88) & 0xFE;
          if (a3 == 1) {
            ++v9;
          }
          *(_BYTE*)(v8 + 88) = v9;
        }
        result = GameRoutine_155f480(v7, "N_Efficacy");
        if (result != 0) {
          v10 = *(_BYTE*)(result + 88) & 0xFE;
          if (a3 == 2) {
            ++v10;
          }
          *(_BYTE*)(result + 88) = v10;
        }
        v11 = *(_QWORD*)(a1 + 56);
        v12 = *(_QWORD*)(a1 + 64);
        v13 = GameData_2130190[0];
        v14 = GameData_212bf68;
        if (v11 != v12) {
          v15 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v11 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v11 + 24),
                                 *(_QWORD*)(v11 + 16));
            }
            else {
              v16 = *(_QWORD*)(v11 + 8);
              v17 = *(_QWORD*)(v11 + 24);
              v46 = *(_QWORD*)(v11 + 16);
              v47 = v17;
              v45 = v16;
            }
            v18 = *(_DWORD*)(v11 + 32);
            v44 = v15;
            v48 = v18;
            v49 = *(_QWORD*)(v11 + 40);
            v19 = *(_QWORD*)(v11 + 48);
            v20 = *(_QWORD*)(v11 + 56);
            v21 = *(_QWORD*)(v11 + 64);
            v53 = *(_DWORD*)(v11 + 72);
            v51 = v20;
            v52 = v21;
            v50 = v19;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
                v22 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v22);
            }
            v11 += 80;
          } while (v11 != v12);
        }
        v23 = *(_QWORD*)(a1 + 80);
        v24 = *(_QWORD*)(a1 + 88);
        if (v23 != v24) {
          v25 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v23 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v23 + 24),
                                 *(_QWORD*)(v23 + 16));
            }
            else {
              v26 = *(_QWORD*)(v23 + 8);
              v27 = *(_QWORD*)(v23 + 24);
              v46 = *(_QWORD*)(v23 + 16);
              v47 = v27;
              v45 = v26;
            }
            v28 = *(_DWORD*)(v23 + 32);
            v44 = v25;
            v48 = v28;
            v49 = *(_QWORD*)(v23 + 40);
            v29 = *(_QWORD*)(v23 + 48);
            v30 = *(_QWORD*)(v23 + 56);
            v31 = *(_QWORD*)(v23 + 64);
            v53 = *(_DWORD*)(v23 + 72);
            v51 = v30;
            v52 = v31;
            v50 = v29;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
                v32 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v32);
            }
            v23 += 80;
          } while (v23 != v24);
        }
        v34 = *(_QWORD*)(a1 + 104);
        v33 = *(_QWORD*)(a1 + 112);
        if (v34 != v33) {
          v35 = GameData_21301b8[0] + 2;
          do {
            v44 = v13 + 2;
            if ((*(_BYTE*)(v34 + 8) & 1) != 0) {
              GameRoutine_60a270(&v45, *(_QWORD*)(v34 + 24),
                                 *(_QWORD*)(v34 + 16));
            }
            else {
              v36 = *(_QWORD*)(v34 + 8);
              v37 = *(_QWORD*)(v34 + 24);
              v46 = *(_QWORD*)(v34 + 16);
              v47 = v37;
              v45 = v36;
            }
            v38 = *(_DWORD*)(v34 + 32);
            v44 = v35;
            v48 = v38;
            v49 = *(_QWORD*)(v34 + 40);
            v39 = *(_QWORD*)(v34 + 48);
            v40 = *(_QWORD*)(v34 + 56);
            v41 = *(_QWORD*)(v34 + 64);
            v53 = *(_DWORD*)(v34 + 72);
            v51 = v40;
            v52 = v41;
            v50 = v39;
            result = GameRoutine_1a00e90(v7, &v54, &v44);
            v44 = v13 + 2;
            if ((v45 & 1) != 0 && v47 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                v42 = 128;
              }
              else {
                v42 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v42);
            }
            v34 += 80;
          } while (v34 != v33);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        return GameRoutine_1a09c50(v43);
      }
    }
  }
  return result;
}

__int64* GameHr_1a010e0(__int64* result, __int64 a2)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  void (***v10)(_QWORD);
  __int64 v11;
  _QWORD* v12;
  void (**v13)(_QWORD);
  void (**v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  __int64 v17;

  v2 = (void (***)(_QWORD))result[1];
  v3 = (void (***)(_QWORD))*result;
  v4 = (__int64)v2 - *result;
  if (result[2] - *result > (unsigned __int64)v4) {
    if (v2 == v3) {
      v7 = (__int64)v2 - *result;
    }
    else {
      if (0xCCCCCCCCCCCCCCCDLL * (v4 >> 3) >= 0x666666666666667LL) {
        GameRoutine_60a210(result, a2);
      }
      v5 = result;
      v6 = GameRoutine_651b90(GameData_2265ee0, v4, 16, 0);
      v4 += v6;
      v7 = v6;
      v8 = 0;
      v9 = GameData_2130190[0] + 2;
      do {
        v11 = v7 + v8 * 8;
        *(_QWORD*)(v7 + v8 * 8) = v9;
        v12 = (_QWORD*)(v7 + v8 * 8 + 8);
        if (((__int64)v3[v8 + 1] & 1) != 0) {
          GameRoutine_60a270(v12, v3[v8 + 3], v3[v8 + 2]);
        }
        else {
          v13 = v3[v8 + 1];
          v14 = v3[v8 + 3];
          *(_QWORD*)(v7 + v8 * 8 + 16) = v3[v8 + 2];
          *(_QWORD*)(v7 + v8 * 8 + 24) = v14;
          *v12 = v13;
        }
        v10 = &v3[v8];
        v8 += 5;
        *(_DWORD*)(v11 + 32) = *((_DWORD*)v10 + 8);
      } while (&v3[v8] != v2);
      v15 = v3;
      do {
        v16 = *v15;
        v15 += 5;
        (*v16)(v3);
        v3 = v15;
      } while (v15 != v2);
      v3 = (void (***)(_QWORD))*v5;
      result = v5;
    }
    *result = v7;
    result[1] = v4;
    result[2] = v4;
    if (v3 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v17 = 56;
      }
      return (__int64*)GameRoutine_1a0a4e0(GameData_2265ee0 + v17);
    }
  }
  return result;
}

__int64* GameHr_1a01280(__int64* result, __int64 a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  int v13;
  void (**v14)(_QWORD);
  void (**v15)(_QWORD);
  void (**v16)(_QWORD);
  _QWORD* v17;
  __int64 v18;
  void (**v19)(_QWORD);
  void (**v20)(_QWORD);
  char* v21;
  void (**v22)(char*);
  __int64 v23;

  v2 = (char*)result[1];
  v3 = (char*)*result;
  v4 = (__int64)&v2[-*result];
  if (result[2] - *result > (unsigned __int64)v4) {
    v5 = &GameData_2265ee0;
    if (v2 == v3) {
      v9 = (__int64)&v2[-*result];
      v8 = v9;
    }
    else {
      if (0xCCCCCCCCCCCCCCCDLL * (v4 >> 4) >= 0x333333333333334LL) {
        GameRoutine_60a210(result, a2);
      }
      v6 = result;
      v7 = GameRoutine_651b90(GameData_2265ee0, v4, 16, 0);
      v8 = v7 + v4;
      v9 = v7;
      v10 = 0;
      v11 = &v2[-v4] - v3 + v7 + 8;
      do {
        v17 = (_QWORD*)(v11 + v10);
        *(_QWORD*)(v11 + v10 - 8) = GameData_212b098;
        v18 = v11 + v10 - 8;
        if ((v3[v10 + 8] & 1) != 0) {
          GameRoutine_60a270(v17, *(_QWORD*)&v3[v10 + 24],
                             *(_QWORD*)&v3[v10 + 16]);
        }
        else {
          v19 = *(void (***)(_QWORD))&v3[v10 + 8];
          v20 = *(void (***)(_QWORD))&v3[v10 + 24];
          v17[1] = *(_QWORD*)&v3[v10 + 16];
          v17[2] = v20;
          *v17 = v19;
        }
        v12 = &v3[v10];
        v10 += 80;
        v13 = *((_DWORD*)v12 + 8);
        *(_QWORD*)v18 = GameData_2010b88;
        *(_DWORD*)(v18 + 32) = v13;
        *(_QWORD*)(v18 + 40) = *((_QWORD*)v12 + 5);
        v14 = *((void (***)(_QWORD))v12 + 6);
        v15 = *((void (***)(_QWORD))v12 + 7);
        v16 = *((void (***)(_QWORD))v12 + 8);
        *(_DWORD*)(v18 + 72) = *((_DWORD*)v12 + 18);
        *(_QWORD*)(v18 + 56) = v15;
        *(_QWORD*)(v18 + 64) = v16;
        *(_QWORD*)(v18 + 48) = v14;
      } while (&v3[v10] != v2);
      v21 = v3;
      do {
        v22 = *(void (***)(char*))v21;
        v21 += 80;
        (*v22)(v3);
        v3 = v21;
      } while (v21 != v2);
      v3 = (char*)*v6;
      result = v6;
      v5 = (__int64*)GameData_212bf68;
    }
    *result = v9;
    result[1] = v8;
    result[2] = v8;
    if (v3 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v23 = 56;
      }
      return (__int64*)GameRoutine_1a0a4e0(*v5 + v23);
    }
  }
  return result;
}

__int64 GameHr_1a01a00(float a1, float a2, float a3, __int64 a4, __int64* a5,
                       __int64 a6)
{
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  __int64 v20;

  result = a5[1];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v12 = *a5;
      v13 = result;
      if (v12 == 0) {
      LABEL_16:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          return GameRoutine_1a09c50(v13);
        }
        return result;
      }
      GameRoutine_1560070(&v19, v12, a6);
      if (v20 != 0) {
        v14 = GameRoutine_1a0a0c0(v20);
        v15 = v19;
        if (v20 != 0) {
          GameRoutine_1a09c50(v20);
        }
        if (v14 != 0 && v15 != 0) {
          v16 = GameRoutine_155f480(v15, "N_Top");
          if (v16 != 0) {
            v17 = *(_BYTE*)(v16 + 88);
            *(float*)(v16 + 80) = a3;
            *(float*)(v16 + 84) = a3;
            *(_BYTE*)(v16 + 88) = v17 | 0x10;
          }
          goto LABEL_12;
        }
        if (v14 != 0) {
        LABEL_12:
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
            GameRoutine_1a09c50(v14);
          }
        }
      }
      result = GameRoutine_155f480(v12, a6);
      if (result != 0) {
        v18 = *(_BYTE*)(result + 88);
        *(float*)(result + 48) = a1;
        *(float*)(result + 52) = a2;
        *(_DWORD*)(result + 56) = 0;
        *(float*)(result + 80) = a3;
        *(float*)(result + 84) = a3;
        *(_BYTE*)(result + 88) = v18 | 0x11;
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64 GameHr_1a05260(int** a1, __int64 a2, char a3, __int64 a4, char* a5)
{
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  char* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  int* v20;
  int* v21;
  unsigned __int64 v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  _BYTE* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  char v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  unsigned __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  char v98;
  char v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  char* v114;
  unsigned __int64 v115;
  int* v116;
  char v117;
  __int64 v118;
  char* v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  char* v123;
  __int64 v124;
  unsigned __int64 v125;
  char* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  char v130;
  __int64 v131;
  unsigned __int64 v132;
  char* v133;
  __int64 v134;
  unsigned __int64 v135;
  char* v136;
  int v137;
  __int64 v138;
  __int64 v139;
  _QWORD v140[2];
  _QWORD* v141;
  _BYTE* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  _BYTE* v146;
  __int64 v147;
  int v148;
  char v149;
  _BYTE v150[32];
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  char* v154;
  __int64 v155;
  unsigned __int64 v156;
  char* v157;

  v118 = GameRoutine_9bd480(a2);
  if (v118 == 0) {
    return 0;
  }
  v9 = GameRoutine_1a09c70(a4);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_175:
    GameRoutine_60a1d0();
  }
  v10 = v9;
  v11 = (_QWORD*)GameData_212bf68;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v13, 16, 0);
    v156 = v10;
    v157 = v12;
    v155 = v13 | 1;
    goto LABEL_10;
  }
  LOBYTE(v155) = 2 * v9;
  v12 = (char*)&v155 + 1;
  if (v9 != 0) {
  LABEL_10:
    GameRoutine_1a0b950(v12, a4, v10);
  }
  v12[v10] = 0;
  if (a5 != nullptr) {
    v14 = a5;
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  v15 = GameRoutine_1a09c70(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_175;
  }
  v17 = v15;
  v117 = a3 & 1;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v15 | 7) + 1;
    }
    v18 = (char*)GameRoutine_651b90(*v11, v19, 16, 0);
    v153 = v17;
    v154 = v18;
    v152 = v19 | 1;
  }
  else {
    LOBYTE(v152) = 2 * v15;
    v18 = (char*)&v152 + 1;
    if (v15 == 0) {
      goto LABEL_23;
    }
  }
  v15 = GameRoutine_1a0b950(v18, v14, v17);
LABEL_23:
  v18[v17] = 0;
  v21 = *a1;
  v20 = a1[1];
  if (*a1 == v20) {
    goto LABEL_60;
  }
  v22 = v153;
  v119 = v157;
  v114 = v154;
  v115 = v156;
  v23 = GameData_212c878[0];
  do {
    if (*((_WORD*)v21 + 2) == 0 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v23 + 64) +
                              8LL * *((unsigned __int16*)v21 + 2)) +
                   337LL) &
         4) == 0) {
      goto LABEL_26;
    }
    if ((v155 & 1) != 0) {
      GameRoutine_60a270(&v131, v119, v115);
      if ((v152 & 1) == 0) {
      LABEL_33:
        v134 = v152;
        v135 = v153;
        v136 = v154;
        goto LABEL_34;
      }
    }
    else {
      v131 = v155;
      v132 = v156;
      v133 = v157;
      if ((v152 & 1) == 0) {
        goto LABEL_33;
      }
    }
    GameRoutine_60a270(&v134, v114, v22);
  LABEL_34:
    v24 = *v21;
    v138 = 0;
    v137 = v24;
    v25 = *(_QWORD*)(v21 + 1);
    v139 = 0;
    v138 = v25;
    if (*((_BYTE*)v21 + 12) != 0) {
      v26 = *(_QWORD*)(v21 + 3);
    }
    else {
      v26 = 0;
    }
    v139 = v26;
    WORD1(v140[0]) = 0;
    HIDWORD(v140[0]) = 0;
    v142 = nullptr;
    v143 = 0;
    v141 = &v142;
    v144 = 0;
    v145 = 0;
    v146 = nullptr;
    GameRoutine_930b90(v140, v21 + 6);
    v27 = v21[24];
    v28 = *v11;
    v147 = *((_QWORD*)v21 + 11);
    v148 = v27;
    v149 = v117;
    v29 = GameRoutine_651b90(v28, 168, 16, 0);
    v30 = v131;
    v31 = v132;
    v32 = v29;
    v131 = 0;
    v132 = 0;
    *(_QWORD*)v29 = GameData_212bab8;
    *(_QWORD*)(v29 + 8) = v30;
    v33 = v133;
    v133 = nullptr;
    *(_QWORD*)(v29 + 16) = v31;
    *(_QWORD*)(v29 + 24) = v33;
    v34 = v134;
    v35 = v135;
    v134 = 0;
    *(_QWORD*)(v29 + 32) = v34;
    *(_QWORD*)(v29 + 40) = v35;
    v36 = v136;
    v135 = 0;
    v136 = nullptr;
    *(_QWORD*)(v29 + 48) = v36;
    *(_DWORD*)(v29 + 56) = v137;
    *(_QWORD*)(v29 + 60) = v138;
    if ((_BYTE)v139 != 0) {
      v37 = v139;
    }
    else {
      v37 = 0;
    }
    *(_QWORD*)(v29 + 68) = v37;
    *(_QWORD*)(v29 + 104) = 0;
    *(_WORD*)(v29 + 82) = 0;
    *(_DWORD*)(v29 + 84) = 0;
    *(_QWORD*)(v29 + 112) = 0;
    *(_QWORD*)(v29 + 120) = 0;
    *(_QWORD*)(v29 + 128) = 0;
    *(_QWORD*)(v29 + 136) = 0;
    *(_QWORD*)(v29 + 96) = v29 + 104;
    GameRoutine_930b90(v29 + 80, v140);
    v151 = v32;
    *(_QWORD*)(v32 + 144) = v147;
    *(_DWORD*)(v32 + 152) = v148;
    *(_BYTE*)(v32 + 160) = v149;
    GameRoutine_9bcfa0(v118, v150);
    (*(void (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
    LODWORD(v140[1]) = 0;
    v140[0] = 0;
    if ((v144 & 1) != 0) {
      *v146 = 0;
      v145 = 0;
    }
    else {
      LOWORD(v144) = 0;
    }
    GameRoutine_6e3b50(&v141, v142);
    v142 = nullptr;
    v143 = 0;
    v141 = &v142;
    if ((v144 & 1) != 0) {
      v38 = v146;
      if (v146 != nullptr) {
        v39 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v39 = 56;
        }
        GameRoutine_1a0a4e0(*v11 + v39);
        v38 = v142;
      }
    }
    else {
      v38 = nullptr;
    }
    v15 = GameRoutine_6e3b50(&v141, v38);
    if ((v134 & 1) != 0) {
      v16 = v136;
      if (v136 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v40 = 56;
        }
        v15 = GameRoutine_1a0a4e0(*v11 + v40);
      }
    }
    if ((v131 & 1) != 0) {
      v16 = v133;
      if (v133 != nullptr) {
        v41 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v41 = 56;
        }
        v15 = GameRoutine_1a0a4e0(*v11 + v41);
      }
    }
    v21[23] = 0;
    v20 = a1[1];
  LABEL_26:
    v21 += 28;
  } while (v21 != v20);
  v21 = *a1;
LABEL_60:
  if (v21 != v20) {
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v116 = v20;
    do {
      if (v21[23] >= 1) {
        if (v43 < v44) {
          v45 = *v21;
          *(_QWORD*)(v43 + 4) = 0;
          *(_DWORD*)v43 = v45;
          v46 = *(_QWORD*)(v21 + 1);
          *(_QWORD*)(v43 + 12) = 0;
          *(_QWORD*)(v43 + 4) = v46;
          if (*((_BYTE*)v21 + 12) != 0) {
            v47 = *(_QWORD*)(v21 + 3);
          }
          else {
            v47 = 0;
          }
          *(_QWORD*)(v43 + 48) = 0;
          v48 = v43 + 48;
          *(_QWORD*)(v48 - 36) = v47;
          *(_WORD*)(v48 - 22) = 0;
          *(_DWORD*)(v48 - 20) = 0;
          *(_QWORD*)(v48 - 8) = v48;
          *(_QWORD*)(v48 + 8) = 0;
          *(_QWORD*)(v48 + 16) = 0;
          *(_QWORD*)(v48 + 24) = 0;
          *(_QWORD*)(v48 + 32) = 0;
          v15 = GameRoutine_930b90(v48 - 24, v21 + 6);
          v49 = *((_QWORD*)v21 + 11);
          *(_DWORD*)(v48 + 48) = v21[24];
          *(_QWORD*)(v48 + 40) = v49;
          *(_WORD*)(v48 + 56) = *((_WORD*)v21 + 52);
          v43 = v48 + 64;
        }
        else {
          v50 = v43 - v42;
          v51 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v43 - v42) >> 4) + 1;
          if (v51 > 0x249249249249249LL) {
            goto LABEL_173;
          }
          if (0xDB6DB6DB6DB6DB6ELL * ((__int64)(v44 - v42) >> 4) > v51) {
            v51 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(v44 - v42) >> 4);
          }
          if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                                 ((__int64)(v44 - v42) >> 4)) >=
              0x124924924924924LL) {
            v51 = 0x249249249249249LL;
          }
          if (v51 > 0x249249249249249LL) {
            GameRoutine_60a210(v15, v16);
          }
          v52 = v11;
          v120 = 112 * v51;
          v53 = GameRoutine_651b90(*v11, 112 * v51, 16, 0);
          v54 = v53 + v50;
          v55 = v53;
          *(_DWORD*)v54 = *v21;
          *(_QWORD*)(v54 + 4) = *(_QWORD*)(v21 + 1);
          if (*((_BYTE*)v21 + 12) != 0) {
            v56 = *(_QWORD*)(v21 + 3);
          }
          else {
            v56 = 0;
          }
          *(_QWORD*)(v54 + 12) = v56;
          *(_QWORD*)(v54 + 48) = 0;
          *(_WORD*)(v54 + 26) = 0;
          *(_DWORD*)(v54 + 28) = 0;
          *(_QWORD*)(v54 + 56) = 0;
          *(_QWORD*)(v54 + 64) = 0;
          *(_QWORD*)(v54 + 72) = 0;
          *(_QWORD*)(v54 + 80) = 0;
          *(_QWORD*)(v54 + 40) = v54 + 48;
          v15 = GameRoutine_930b90(v54 + 24, v21 + 6);
          v57 = *((_QWORD*)v21 + 11);
          v58 = v54 - v50;
          *(_DWORD*)(v54 + 96) = v21[24];
          *(_QWORD*)(v54 + 88) = v57;
          *(_WORD*)(v54 + 104) = *((_WORD*)v21 + 52);
          if (v42 != v43) {
            v59 = 0;
            do {
              v63 = v42 + v59;
              v64 = v58 + v59;
              v65 = *(_DWORD*)(v42 + v59);
              *(_QWORD*)(v64 + 4) = 0;
              *(_DWORD*)v64 = v65;
              v66 = *(_QWORD*)(v42 + v59 + 4);
              *(_QWORD*)(v64 + 12) = 0;
              *(_QWORD*)(v64 + 4) = v66;
              if (*(_BYTE*)(v42 + v59 + 12) != 0) {
                v60 = *(_QWORD*)(v63 + 12);
              }
              else {
                v60 = 0;
              }
              *(_QWORD*)(v64 + 48) = 0;
              v61 = v64 + 48;
              *(_QWORD*)(v64 + 12) = v60;
              *(_WORD*)(v64 + 26) = 0;
              *(_DWORD*)(v64 + 28) = 0;
              *(_QWORD*)(v64 + 40) = v64 + 48;
              *(_QWORD*)(v64 + 56) = 0;
              *(_QWORD*)(v64 + 64) = 0;
              *(_QWORD*)(v64 + 72) = 0;
              *(_QWORD*)(v64 + 80) = 0;
              GameRoutine_930b90(v64 + 24, v63 + 24);
              v62 = *(_QWORD*)(v63 + 88);
              v59 += 112;
              *(_DWORD*)(v61 + 48) = *(_DWORD*)(v63 + 96);
              *(_QWORD*)(v61 + 40) = v62;
              *(_WORD*)(v61 + 56) = *(_WORD*)(v63 + 104);
            } while (v42 + v59 != v43);
            v67 = v42;
            do {
              v69 = *(_BYTE*)(v67 + 64);
              *(_DWORD*)(v67 + 32) = 0;
              *(_QWORD*)(v67 + 24) = 0;
              if ((v69 & 1) != 0) {
                **(_BYTE**)(v67 + 80) = 0;
                *(_QWORD*)(v67 + 72) = 0;
              }
              else {
                *(_WORD*)(v67 + 64) = 0;
              }
              GameRoutine_6e3b50(v67 + 40, *(_QWORD*)(v67 + 48));
              v70 = *(_BYTE*)(v67 + 64);
              *(_QWORD*)(v67 + 48) = 0;
              *(_QWORD*)(v67 + 56) = 0;
              *(_QWORD*)(v67 + 40) = v67 + 48;
              if ((v70 & 1) != 0) {
                v68 = *(_QWORD*)(v67 + 80);
                if (v68 != 0) {
                  v71 = 128;
                  if (*(_QWORD*)(*v52 + 200LL) == 0) {
                    v71 = 56;
                  }
                  GameRoutine_1a0a4e0(*v52 + v71);
                  v68 = *(_QWORD*)(v67 + 48);
                }
              }
              else {
                v68 = 0;
              }
              v15 = GameRoutine_6e3b50(v67 + 40, v68);
              v67 += 112;
            } while (v67 != v43);
          }
          v43 = v54 + 112;
          v44 = v55 + v120;
          if (v42 != 0) {
            v11 = v52;
            v72 = 128;
            if (*(_QWORD*)(*v52 + 200LL) == 0) {
              v72 = 56;
            }
            v15 = GameRoutine_1a0a4e0(*v52 + v72);
            v42 = v58;
          }
          else {
            v42 = v58;
            v11 = v52;
          }
          v20 = v116;
        }
      }
      v21 += 28;
    } while (v21 != v20);
    if (v43 != v42) {
      if ((v155 & 1) != 0) {
        v15 = GameRoutine_60a270(&v121, v157, v156);
      }
      else {
        v121 = v155;
        v122 = v156;
        v123 = v157;
      }
      if ((v152 & 1) != 0) {
        v15 = GameRoutine_60a270(&v124, v154, v153);
      }
      else {
        v124 = v152;
        v125 = v153;
        v126 = v154;
      }
      v73 = v43 - v42;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      if (v43 == v42) {
        v84 = 0;
        v83 = 0;
      }
      else {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v73 >> 4)) >
            0x249249249249249LL) {
        LABEL_173:
          GameRoutine_e66f80(v15);
        }
        v74 = GameRoutine_651b90(*v11, v43 - v42, 16, 0);
        v75 = 0;
        v127 = v74;
        v128 = v74;
        v129 = v74 + v73;
        do {
          v79 = v42 + v75;
          v80 = v74 + v75;
          v81 = *(_DWORD*)(v42 + v75);
          *(_QWORD*)(v80 + 4) = 0;
          *(_DWORD*)v80 = v81;
          v82 = *(_QWORD*)(v42 + v75 + 4);
          *(_QWORD*)(v80 + 12) = 0;
          *(_QWORD*)(v80 + 4) = v82;
          if (*(_BYTE*)(v42 + v75 + 12) != 0) {
            v76 = *(_QWORD*)(v79 + 12);
          }
          else {
            v76 = 0;
          }
          *(_QWORD*)(v80 + 48) = 0;
          v77 = v80 + 48;
          *(_QWORD*)(v80 + 12) = v76;
          *(_WORD*)(v80 + 26) = 0;
          *(_DWORD*)(v80 + 28) = 0;
          *(_QWORD*)(v80 + 40) = v80 + 48;
          *(_QWORD*)(v80 + 56) = 0;
          *(_QWORD*)(v80 + 64) = 0;
          *(_QWORD*)(v80 + 72) = 0;
          *(_QWORD*)(v80 + 80) = 0;
          GameRoutine_930b90(v80 + 24, v79 + 24);
          v78 = *(_QWORD*)(v79 + 88);
          v75 += 112;
          *(_DWORD*)(v77 + 48) = *(_DWORD*)(v79 + 96);
          *(_QWORD*)(v77 + 40) = v78;
          *(_WORD*)(v77 + 56) = *(_WORD*)(v79 + 104);
        } while (v42 + v75 != v43);
        v73 = v74 + v75;
        v83 = v127;
        v84 = v129;
      }
      v85 = *v11;
      v130 = v117;
      v86 = GameRoutine_651b90(v85, 88, 16, 0);
      v87 = v121;
      v88 = v122;
      v89 = v86;
      *(_QWORD*)(v86 + 64) = v73;
      *(_QWORD*)(v86 + 72) = v84;
      *(_BYTE*)(v86 + 80) = v117;
      v151 = v86;
      v121 = 0;
      v122 = 0;
      v128 = 0;
      v129 = 0;
      v127 = 0;
      *(_QWORD*)v86 = GameData_212bb38;
      *(_QWORD*)(v86 + 8) = v87;
      v90 = v123;
      v123 = nullptr;
      *(_QWORD*)(v86 + 16) = v88;
      *(_QWORD*)(v86 + 24) = v90;
      v91 = v124;
      v92 = v125;
      v124 = 0;
      *(_QWORD*)(v86 + 32) = v91;
      *(_QWORD*)(v86 + 40) = v92;
      v93 = v126;
      v125 = 0;
      v126 = nullptr;
      *(_QWORD*)(v86 + 48) = v93;
      *(_QWORD*)(v86 + 56) = v83;
      GameRoutine_9bcfa0(v118, v150);
      (*(void (**)(__int64))(*(_QWORD*)v89 + 40LL))(v89);
      v94 = v127;
      if (v127 != 0) {
        if (v127 == v128) {
          goto LABEL_132;
        }
        v95 = v128 - 40;
        do {
          v98 = *(_BYTE*)(v95 - 8);
          *(_DWORD*)(v95 - 40) = 0;
          *(_QWORD*)(v95 - 48) = 0;
          if ((v98 & 1) != 0) {
            **(_BYTE**)(v95 + 8) = 0;
            *(_QWORD*)v95 = 0;
          }
          else {
            *(_WORD*)(v95 - 8) = 0;
          }
          GameRoutine_6e3b50(v95 - 32, *(_QWORD*)(v95 - 24));
          v99 = *(_BYTE*)(v95 - 8);
          *(_QWORD*)(v95 - 24) = 0;
          *(_QWORD*)(v95 - 16) = 0;
          *(_QWORD*)(v95 - 32) = v95 - 24;
          if ((v99 & 1) != 0) {
            v96 = *(_QWORD*)(v95 + 8);
            if (v96 != 0) {
              if (*(_QWORD*)(*v11 + 200LL) != 0) {
                v100 = 128;
              }
              else {
                v100 = 56;
              }
              GameRoutine_1a0a4e0(*v11 + v100);
              v96 = *(_QWORD*)(v95 - 24);
            }
          }
          else {
            v96 = 0;
          }
          GameRoutine_6e3b50(v95 - 32, v96);
          v97 = v95 - 72;
          v95 -= 112;
        } while (v97 != v94);
        v128 = v94;
        if (v127 != 0) {
        LABEL_132:
          v101 = 128;
          if (*(_QWORD*)(*v11 + 200LL) == 0) {
            v101 = 56;
          }
          GameRoutine_1a0a4e0(*v11 + v101);
        }
      }
      if ((v124 & 1) != 0 && v126 != nullptr) {
        v102 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v102 = 56;
        }
        GameRoutine_1a0a4e0(*v11 + v102);
      }
      if ((v121 & 1) != 0 && v123 != nullptr) {
        v103 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v103 = 56;
        }
        GameRoutine_1a0a4e0(*v11 + v103);
      }
    }
    if (v42 != 0) {
      if (v42 != v43) {
        v104 = v43 - 40;
        do {
          v107 = *(_BYTE*)(v104 - 8);
          *(_DWORD*)(v104 - 40) = 0;
          *(_QWORD*)(v104 - 48) = 0;
          if ((v107 & 1) != 0) {
            **(_BYTE**)(v104 + 8) = 0;
            *(_QWORD*)v104 = 0;
          }
          else {
            *(_WORD*)(v104 - 8) = 0;
          }
          GameRoutine_6e3b50(v104 - 32, *(_QWORD*)(v104 - 24));
          v108 = *(_BYTE*)(v104 - 8);
          *(_QWORD*)(v104 - 24) = 0;
          *(_QWORD*)(v104 - 16) = 0;
          *(_QWORD*)(v104 - 32) = v104 - 24;
          if ((v108 & 1) != 0) {
            v105 = *(_QWORD*)(v104 + 8);
            if (v105 != 0) {
              if (*(_QWORD*)(*v11 + 200LL) != 0) {
                v109 = 128;
              }
              else {
                v109 = 56;
              }
              GameRoutine_1a0a4e0(*v11 + v109);
              v105 = *(_QWORD*)(v104 - 24);
            }
          }
          else {
            v105 = 0;
          }
          GameRoutine_6e3b50(v104 - 32, v105);
          v106 = v104 - 72;
          v104 -= 112LL;
        } while (v106 != v42);
      }
      v110 = 128;
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v110 = 56;
      }
      GameRoutine_1a0a4e0(*v11 + v110);
    }
  }
  if ((v152 & 1) != 0 && v154 != nullptr) {
    v111 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v111 = 56;
    }
    GameRoutine_1a0a4e0(*v11 + v111);
  }
  if ((v155 & 1) != 0 && v157 != nullptr) {
    v112 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v112 = 56;
    }
    GameRoutine_1a0a4e0(*v11 + v112);
  }
  return 0;
}

__int64 GameHr_1a075b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
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
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  _QWORD v30[2];
  __int64 v31;
  __int64 v32;
  char v33[4];

  v30[0] = "L_Txt";
  v30[1] = 5;
  GameRoutine_9b8fe0(&v31, a1 + 168, v30);
  if (v32 != 0) {
    v2 = GameRoutine_1a0a0c0(v32);
    v3 = v31;
    if (v32 != 0) {
      GameRoutine_1a09c50(v32);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v5 = *(unsigned __int8*)(a1 + 872);
      v6 = *(_QWORD*)(a1 + 880);
      if ((v5 & 1) == 0) {
        v6 = v5 >> 1;
      }
      if (v6 != 0) {
        if ((v5 & 1) != 0) {
          v7 = *(_QWORD*)(a1 + 888);
        }
        else {
          v7 = a1 + 873;
        }
        if (v7 != 0) {
          v8 = v7;
        }
        else {
          v8 = (__int64)*GameData_212def8;
        }
        GameRoutine_60a020(*GameData_212c738[0] + 14704, v8);
      }
      if ((*(_BYTE*)(a1 + 848) & 1) != 0) {
        v9 = *(_QWORD*)(a1 + 864);
      }
      else {
        v9 = a1 + 849;
      }
      GameRoutine_188ab20(v3, v9);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      GameRoutine_1a09c50(v2);
    }
  }
LABEL_27:
  if (*(_BYTE*)(a1 + 896) != 1) {
    GameRoutine_1560070(&v28, a1 + 168, "L_ItemList");
    if (v29 == 0) {
      goto LABEL_49;
    }
    v14 = GameRoutine_1a0a0c0(v29);
    if (v14 != 0) {
      v15 = v14;
      if (v28 != 0) {
        GameRoutine_1586140(v28, a1 + 824);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
    }
    v16 = v29;
    if (v29 == 0) {
      goto LABEL_49;
    }
  LABEL_37:
    GameRoutine_1a09c50(v16);
    goto LABEL_49;
  }
  v10 = GameRoutine_155fbe0(a1 + 168, "L_InfoDetail");
  v11 = *(_QWORD*)(a1 + 824);
  v12 = GameData_212c878[0];
  if (*(_BYTE*)(a1 + 897) == 1) {
    v13 = *(unsigned int*)(v11 + 92);
  }
  else {
    v13 = 1;
  }
  GameRoutine_1592340(v10,
                      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(v11 + 4)),
                      v13);
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                            8LL * *(unsigned __int16*)(v11 + 4)) +
                 337LL) &
       4) != 0 &&
      (*(_BYTE*)(a1 + 898) & 1) != 0) {
    GameRoutine_1560070(&v31, a1 + 168, "L_Bg");
    if (v32 != 0) {
      v17 = GameRoutine_1a0a0c0(v32);
      v18 = v31;
      if (v32 != 0) {
        GameRoutine_1a09c50(v32);
      }
      if (v17 != 0 && v18 != 0) {
        GameRoutine_1562cf0(v18, "Color0");
      }
      else if (v17 == 0) {
        goto LABEL_49;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        v16 = v17;
        goto LABEL_37;
      }
    }
  }
LABEL_49:
  GameRoutine_1562cf0(a1 + 168, "ArrowOff");
  v19 = GameRoutine_15621a0(a1 + 168, "L_Txt/T_Txt");
  if (v19 != 0) {
    v20 = v19;
    v21 = GameRoutine_15621a0(a1 + 168, "L_Txt/T_Txt");
    if (v21 != 0) {
      GameRoutine_190a0c0(&v31, v30, v33, v21, *(_QWORD*)(v21 + 216));
      v22 = v30[0];
    }
    else {
      v22 = 0;
    }
    v23 = *(_BYTE*)(v20 + 88);
    *(_QWORD*)(v20 + 80) = v22;
    *(_BYTE*)(v20 + 88) = v23 | 0x10;
  }
  if (GameRoutine_1563e00(a1 + 168, "A_Contents") != 0) {
    GameRoutine_56b600();
    v24 = *(_QWORD*)(a1 + 176);
    if (v24 != 0) {
      v25 = GameRoutine_1a0a0c0(v24);
      if (v25 != 0) {
        v26 = v25;
        if (*(_QWORD*)(a1 + 168) != 0) {
          GameRoutine_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          GameRoutine_1a09c50(v26);
        }
      }
    }
  }
  return GameRoutine_17356e0(a1 + 168, "A_Contents");
}

__int64 GameHr_1a07cc0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  _BYTE** v26;
  _BYTE* v27;
  char* v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;

  v2 = a1[1] - *a1;
  v3 = 0x6DB6DB6DB6DB6DB7LL * (v2 >> 4) + 1;
  if (v3 > 0x249249249249249LL) {
    GameRoutine_e66f80(a1);
  }
  if (0xDB6DB6DB6DB6DB6ELL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0xDB6DB6DB6DB6DB6ELL * ((a1[2] - *a1) >> 4);
  }
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4)) >=
      0x124924924924924LL) {
    v5 = 0x249249249249249LL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0x249249249249249LL) {
    GameRoutine_60a210(a1, a2);
  }
  v7 = GameData_212bf68;
  v8 = 112 * v5;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 112 * v5, 16, 0);
  v10 = v9 + v2;
  *(_DWORD*)v10 = *(_DWORD*)a2;
  *(_QWORD*)(v10 + 4) = *(_QWORD*)(a2 + 4);
  if (*(_BYTE*)(a2 + 12) != 0) {
    v11 = *(_QWORD*)(a2 + 12);
  }
  else {
    v11 = 0;
  }
  v12 = v9 + v8;
  *(_QWORD*)(v10 + 12) = v11;
  *(_QWORD*)(v10 + 48) = 0;
  *(_WORD*)(v10 + 26) = 0;
  *(_DWORD*)(v10 + 28) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 40) = v10 + 48;
  GameRoutine_930b90(v10 + 24, a2 + 24);
  v13 = *(_QWORD*)(a2 + 88);
  v14 = (char*)*a1;
  v15 = (char*)a1[1];
  *(_WORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 88) = v13;
  LODWORD(v13) = *(_DWORD*)(a2 + 96);
  v16 = v10 + 112;
  *(_DWORD*)(v10 + 96) = v13;
  v17 = v10 + v14 - v15;
  if (v14 != v15) {
    v34 = v12;
    v18 = 0;
    do {
      v22 = &v14[v18];
      v23 = v17 + v18;
      v24 = *(_DWORD*)&v14[v18];
      *(_QWORD*)(v23 + 4) = 0;
      *(_DWORD*)v23 = v24;
      v25 = *(_QWORD*)&v14[v18 + 4];
      *(_QWORD*)(v23 + 12) = 0;
      *(_QWORD*)(v23 + 4) = v25;
      if (v14[v18 + 12] != 0) {
        v19 = *(_QWORD*)(v22 + 12);
      }
      else {
        v19 = 0;
      }
      *(_QWORD*)(v23 + 48) = 0;
      v20 = v23 + 48;
      *(_QWORD*)(v23 + 12) = v19;
      *(_WORD*)(v23 + 26) = 0;
      *(_DWORD*)(v23 + 28) = 0;
      *(_QWORD*)(v23 + 40) = v23 + 48;
      *(_QWORD*)(v23 + 56) = 0;
      *(_QWORD*)(v23 + 64) = 0;
      *(_QWORD*)(v23 + 72) = 0;
      *(_QWORD*)(v23 + 80) = 0;
      GameRoutine_930b90(v23 + 24, v22 + 24);
      v21 = *((_BYTE**)v22 + 11);
      v18 += 112;
      *(_DWORD*)(v20 + 48) = *((_DWORD*)v22 + 24);
      *(_QWORD*)(v20 + 40) = v21;
      *(_WORD*)(v20 + 56) = *((_WORD*)v22 + 52);
    } while (&v14[v18] != v15);
    v26 = (_BYTE**)(v14 + 80);
    do {
      v29 = *((_BYTE*)v26 - 16);
      *((_DWORD*)v26 - 12) = 0;
      *(v26 - 7) = nullptr;
      if ((v29 & 1) != 0) {
        **v26 = 0;
        *(v26 - 1) = nullptr;
      }
      else {
        *((_WORD*)v26 - 8) = 0;
      }
      GameRoutine_6e3b50(v26 - 5, *(v26 - 4));
      v30 = *((_BYTE*)v26 - 16);
      *(v26 - 4) = nullptr;
      *(v26 - 3) = nullptr;
      *(v26 - 5) = v26 - 4;
      if ((v30 & 1) != 0) {
        v27 = *v26;
        if (*v26 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v7 + v31);
          v27 = *(v26 - 4);
        }
      }
      else {
        v27 = nullptr;
      }
      GameRoutine_6e3b50(v26 - 5, v27);
      v28 = (char*)(v26 + 4);
      v26 += 14;
    } while (v28 != v15);
    v14 = (char*)*a1;
    v12 = v34;
  }
  *a1 = v17;
  a1[1] = v16;
  a1[2] = v12;
  if (v14 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v32 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v7 + v32);
  }
  return v16;
}

#pragma GCC visibility pop
