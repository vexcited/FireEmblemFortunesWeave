#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN* GameData_1f9caf8;
extern int* GameData_211f348[2];
extern __int64 (*GameData_21236c8[])();
extern __int64 (*GameData_2123748[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_21caab0;
extern _UNKNOWN GameData_21f8620;
extern _UNKNOWN GameData_2259440;
extern __int64 GameData_2260e70;
__int64 GameRoutine_155f480(_QWORD, _QWORD);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
float GameRoutine_15610b0(_QWORD, _QWORD);
__int64 GameRoutine_15612b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
long double GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_16de4d0(_QWORD);
__int64 GameRoutine_16defa0(_QWORD);
__int64 GameRoutine_16e6ca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e7010(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173f310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_173fac0(_QWORD, _QWORD);
__int64 GameRoutine_173fc80(_QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840e20(_QWORD, _QWORD);
__int64 GameRoutine_198e400(__int64 result, __int64);
__int64 GameRoutine_19a8d80(__int64, __int64, char, unsigned int*, __int64, int,
                            char, char, __int16);
_QWORD* GameRoutine_19bb9c0(__int64);
__int64 GameRoutine_19e22c0(_QWORD, _QWORD);
__int64 GameRoutine_19e2a20(void);
__int64* GameRoutine_19e2c00(__int64);
__int64 GameRoutine_19e6970(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(long double, double);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 GameRoutine_82e3a0(_QWORD);
__int64 GameRoutine_890160(_QWORD);
__int64 GameRoutine_8e7ca0(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 GameRoutine_a14090(_QWORD, _QWORD);

__int64 GameHr_198f8e0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(result + 24) != 0) {
    v1 = *(_QWORD**)(result + 16);
    v2 = (_QWORD*)result;
    if (v1 != nullptr) {
      v3 = GameData_212bf68;
      do {
        v5 = v1;
        v1 = (_QWORD*)*v1;
        v6 = v5[5];
        if (v6 != 0) {
          GameRoutine_198e400((__int64)(v5 + 5), v6);
          if (v5[5] != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v7 = 128;
            }
            else {
              v7 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)v3 + v7);
          }
        }
        if ((v5[2] & 1) != 0 && v5[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v3 + v8);
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v4);
      } while (v1 != nullptr);
    }
    v9 = v2[1];
    v2[2] = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*v2 + 8 * v11) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 8) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 16) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 24) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 32) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 40) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 48) = 0;
          v13 = *v2 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*v2 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    v2[3] = 0;
  }
  return result;
}

__int64 GameHr_19a9be0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  unsigned __int64 v7;
  int* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;

  v5 = 0;
  if (a2 == 0 || a3 == 0) {
    return v5 & 1;
  }
  v6 = *(_QWORD*)(a2 + 440);
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 16);
    if (v7 > 9) {
      v8 = (int*)((char*)GameData_212da30 + 144);
      if (*(_QWORD*)(a2 + 408) == 0) {
        goto LABEL_6;
      }
    }
    else {
      v8 = GameData_211f348[v7];
      if (*(_QWORD*)(a2 + 408) == 0) {
      LABEL_6:
        v9 = *(_QWORD*)(a2 + 392);
        if (v9 != 0) {
          LODWORD(v9) = *(unsigned __int8*)(v9 + 441);
          if ((_DWORD)v9 == 3) {
            LODWORD(v9) = *(unsigned __int8*)(a2 + 2136);
            if ((unsigned int)v9 <= 1) {
              LOBYTE(v9) = 1;
            }
          }
        }
        goto LABEL_12;
      }
    }
  }
  else {
    v8 = (int*)((char*)GameData_212da30 + 148);
    if (*(_QWORD*)(a2 + 408) == 0) {
      goto LABEL_6;
    }
  }
  LOBYTE(v9) = 0;
LABEL_12:
  v10 = *v8;
  if (*(_BYTE*)(a1 + 1105) == 1) {
    v11 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 1104LL);
    if (v11 != 0 &&
        (v12 = *(_QWORD*)(a2 + 560),
         (v13 = *(unsigned __int16*)(v11 + 16)) <
             (unsigned __int64)((*(_QWORD*)(a2 + 568) - v12) >> 1))) {
      v14 = *(_WORD*)(v12 + 2 * v13) & 0x3FF;
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = -1;
  }
  v18 = v3;
  v19 = v4;
  v15 = *(_BYTE*)(a1 + 1109);
  v17 = v10;
  v5 = GameRoutine_19a8d80(a1, a3, v9, &v17, a2, v14, v15, 0, 0);
  return v5 & 1;
}

__int64 GameHr_19a9d50(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                       __int64 a5, int a6, char a7, __int64 a8, char a9,
                       __int16 a10)
{
  unsigned int* v10;
  unsigned int v12;

  if (a2 == 0) {
    return 0;
  }
  if (a4 > 9u) {
    v10 = (unsigned int*)&GameData_2259440;
  }
  else {
    v10 = (unsigned int*)GameData_211f348[a4];
  }
  v12 = *v10;
  return GameRoutine_19a8d80(a1, a2, a3, &v12, a8, a6, a7, a9, a10) & 1;
}

_QWORD* GameHr_19bbae0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  _BYTE* v8;
  _QWORD* v9;
  _QWORD* v10;
  _BYTE* v11;
  __int64 v12;

  if (*a1 != 0) {
    v2 = a1[2];
    if (v2 == 0) {
      v3 = GameData_21caab0;
      GameRoutine_682bc0(&v12, *(_QWORD*)(*a1 + 32));
      if ((GameRoutine_8e7ca0(*(_QWORD*)(v3 + 176), v12) & 1) != 0) {
        goto LABEL_10;
      }
    LABEL_6:
      v4 = a1[1];
      if (v4 != 0) {
        v5 = *(_QWORD*)(v4 + 24);
        if (v5 != 0) {
          result = *(_QWORD**)(v5 + 80);
          if (result != nullptr && *(_BYTE*)result != 0) {
            return result;
          }
        }
      }
      goto LABEL_10;
    }
    if ((*(_BYTE*)(v2 + 416) & 8) != 0) {
      goto LABEL_6;
    }
  }
LABEL_10:
  v7 = a1[2];
  if (v7 != 0) {
    v8 = *(
        _BYTE**)(GameRoutine_975940(*(_QWORD*)(*(_QWORD*)(v7 + 392) + 288LL)) +
                 80);
    if (v8 != nullptr && *v8 != 0) {
      v9 = *(_QWORD**)(a1[2] + 392);
      return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
    }
  }
  result = GameRoutine_19bb9c0(*a1);
  if (result == nullptr) {
    return result;
  }
  v10 = GameRoutine_19bb9c0(*a1);
  v11 = *(_BYTE**)(GameRoutine_975940(v10[36]) + 80);
  if (v11 != nullptr && *v11 != 0) {
    v9 = GameRoutine_19bb9c0(*a1);
    return *(_QWORD**)(GameRoutine_975940(v9[36]) + 80);
  }
  return nullptr;
}

__int64 GameHr_19c1c60(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  double v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  char* v29;
  float v30;
  float v31;
  float v32;
  float v33;
  int v34;
  int v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  _DWORD v43[3];
  float v44[3];
  __int64 v45;
  __int64 v46;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(_QWORD*)(a1 + 136);
  v4 = *(_QWORD*)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = a1 + 121;
  }
  GameRoutine_1560070(&v45, v4, v5);
  result = v46;
  if (v46 != 0) {
    if (*(_QWORD*)(v46 + 8) == -1) {
      goto LABEL_77;
    }
    v9 = GameRoutine_1a0a0c0(v6, v7);
    if (v9 != 0) {
      v10 = v45;
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        GameRoutine_1a09c50(v11);
      }
    }
    else {
      v10 = 0;
    }
    v12 = *(_DWORD*)(a1 + 144);
    switch (v12) {
    case 3:
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v21 = *(_QWORD*)(a1 + 32);
      }
      else {
        v21 = a1 + 17;
      }
      if (v21 != 0) {
        v22 = GameRoutine_15621a0(v10, "T_Txt00");
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
        }
      }
      if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        v23 = *(_QWORD*)(a1 + 56);
      }
      else {
        v23 = a1 + 41;
      }
      if (v23 != 0) {
        v24 = GameRoutine_15621a0(v10, "T_Txt01");
        if (v24 != 0) {
          GameRoutine_156c5d0(v24, v23, 0);
        }
      }
      if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
        v25 = *(char**)(a1 + 80);
      }
      else {
        v25 = (char*)(a1 + 65);
      }
      if (v25 == nullptr) {
        goto LABEL_77;
      }
      v26 = GameRoutine_15621a0(v10, "T_Txt02");
      if (v26 == 0) {
        goto LABEL_77;
      }
      v27 = v25;
      goto LABEL_76;
    case 2:
      if (*(_BYTE*)(a1 + 148) != 1) {
        v30 = GameRoutine_15610b0(v10, "T_Txt00");
        v44[1] = v31;
        v44[2] = v32;
        v33 = GameRoutine_15610b0(v10, "T_Txt01");
        v43[1] = v34;
        v43[2] = v35;
        v36 = (float)(v33 + GameRoutine_15610b0(v10, "T_Txt02")) * 0.5;
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v37 = *(_QWORD*)(a1 + 32);
        }
        else {
          v37 = a1 + 17;
        }
        v44[0] = (float)(v30 + v33) * 0.5;
        *(float*)v43 = v36;
        if (v37 != 0) {
          v38 = GameRoutine_15621a0(v10, "T_Txt00");
          if (v38 != 0) {
            GameRoutine_156c5d0(v38, v37, 0);
          }
        }
        GameRoutine_15612b0(v10, "T_Txt00", v44);
        if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
          v39 = *(_QWORD*)(a1 + 56);
        }
        else {
          v39 = a1 + 41;
        }
        if (v39 != 0) {
          v40 = GameRoutine_15621a0(v10, "T_Txt01");
          if (v40 != 0) {
            GameRoutine_156c5d0(v40, v39, 0);
          }
        }
        GameRoutine_15612b0(v10, "T_Txt01", v43);
        goto LABEL_74;
      }
      if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
        v16 = *(_QWORD*)(a1 + 32);
      }
      else {
        v16 = a1 + 17;
      }
      if (v16 != 0) {
        v17 = GameRoutine_15621a0(v10, "T_Txt00");
        if (v17 != 0) {
          GameRoutine_156c5d0(v17, v16, 0);
        }
      }
      v18 = *(_BYTE*)(a1 + 40);
      v19 = *(char**)(a1 + 56);
      v20 = (char*)(a1 + 41);
      break;
    case 1:
      if (*(_BYTE*)(a1 + 148) == 1) {
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          v13 = *(char**)(a1 + 32);
        }
        else {
          v13 = (char*)(a1 + 17);
        }
        if (v13 == nullptr) {
          goto LABEL_49;
        }
        v14 = GameRoutine_15621a0(v10, "T_Txt00");
        if (v14 == 0) {
          goto LABEL_49;
        }
        v15 = v13;
        goto LABEL_48;
      }
      v41 = GameRoutine_15621a0(v10, "T_Txt00");
      if (v41 != 0) {
        GameRoutine_156c5d0(v41, &GameData_1a9f09e, 0);
      }
      v18 = *(_BYTE*)(a1 + 16);
      v19 = *(char**)(a1 + 32);
      v20 = (char*)(a1 + 17);
      break;
    default:
      v14 = GameRoutine_15621a0(v10, "T_Txt00");
      if (v14 == 0) {
      LABEL_49:
        v28 = GameRoutine_15621a0(v10, "T_Txt01");
        if (v28 == 0) {
        LABEL_74:
          v26 = GameRoutine_15621a0(v10, "T_Txt02");
          if (v26 == 0) {
            goto LABEL_77;
          }
          v27 = &GameData_1a9f09e;
        LABEL_76:
          GameRoutine_156c5d0(v26, v27, 0);
        LABEL_77:
          result = v46;
          if (v46 != 0) {
            return GameRoutine_1a09c50(v46);
          }
          return result;
        }
        v29 = &GameData_1a9f09e;
      LABEL_73:
        GameRoutine_156c5d0(v28, v29, 0);
        goto LABEL_74;
      }
      v15 = &GameData_1a9f09e;
    LABEL_48:
      GameRoutine_156c5d0(v14, v15, 0);
      goto LABEL_49;
    }
    if ((v18 & 1) != 0) {
      v42 = v19;
    }
    else {
      v42 = v20;
    }
    if (v42 == nullptr) {
      goto LABEL_74;
    }
    v28 = GameRoutine_15621a0(v10, "T_Txt01");
    if (v28 == 0) {
      goto LABEL_74;
    }
    v29 = v42;
    goto LABEL_73;
  }
  return result;
}

__int64 GameHr_19c2380(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  double v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(_QWORD*)(a1 + 136);
  v4 = *(_QWORD*)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = a1 + 121;
  }
  GameRoutine_1560070(&v14, v4, v5);
  result = v15;
  if (v15 != 0) {
    if (*(_QWORD*)(v15 + 8) == -1) {
      return GameRoutine_1a09c50(result);
    }
    v9 = GameRoutine_1a0a0c0(v6, v7);
    v10 = v14;
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v11);
    }
    v12 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v12 != 0) {
      v13 = GameRoutine_15621a0(v10, "T_Txt");
      if (v13 != 0) {
        GameRoutine_156c5d0(v13, v12, 0);
      }
    }
    result = v15;
    if (v15 != 0) {
      return GameRoutine_1a09c50(result);
    }
  }
  return result;
}

__int64 GameHr_19c2580(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  double v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(_QWORD*)(a1 + 136);
  v4 = *(_QWORD*)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = a1 + 121;
  }
  GameRoutine_1560070(&v14, v4, v5);
  result = v15;
  if (v15 != 0) {
    if (*(_QWORD*)(v15 + 8) == -1) {
      return GameRoutine_1a09c50(result);
    }
    v9 = GameRoutine_1a0a0c0(v6, v7);
    v10 = v14;
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v11);
    }
    v12 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
    if (v12 != 0) {
      v13 = GameRoutine_15621a0(v10, "T_Txt");
      if (v13 != 0) {
        GameRoutine_156c5d0(v13, v12, 0);
      }
    }
    result = v15;
    if (v15 != 0) {
      return GameRoutine_1a09c50(result);
    }
  }
  return result;
}

__int64 GameHr_19c28a0(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  double v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_BYTE*)(a1 + 120);
  v3 = *(_QWORD*)(a1 + 136);
  v4 = *(_QWORD*)(a1 + 112);
  if ((v2 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = a1 + 121;
  }
  GameRoutine_1560070(&v16, v4, v5);
  result = v17;
  if (v17 != 0) {
    if (*(_QWORD*)(v17 + 8) == -1) {
      return GameRoutine_1a09c50(result);
    }
    v9 = GameRoutine_1a0a0c0(v6, v7);
    v10 = v16;
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v11);
    }
    if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 32);
    }
    else {
      v12 = a1 + 17;
    }
    if (v12 != 0) {
      v13 = GameRoutine_15621a0(v10, "T_Character");
      if (v13 != 0) {
        GameRoutine_156c5d0(v13, v12, 0);
      }
    }
    v14 = (*(_BYTE*)(a1 + 40) & 1) != 0 ? *(_QWORD*)(a1 + 56) : a1 + 41;
    if (v14 != 0) {
      v15 = GameRoutine_15621a0(v10, "T_Actor");
      if (v15 != 0) {
        GameRoutine_156c5d0(v15, v14, 0);
      }
    }
    result = v17;
    if (v17 != 0) {
      return GameRoutine_1a09c50(result);
    }
  }
  return result;
}

__int64 GameHr_19e20c0(__int64 result)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD**)(result + 16);
  v2 = (__int64*)result;
  v3 = GameData_212bf68;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[6];
      if (v6 != 0) {
        v7 = *(_QWORD*)v3;
        v1[7] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        GameRoutine_1a0a4e0(v7 + v8);
      }
      v9 = v1[3];
      if (v9 != 0) {
        v10 = *(_QWORD*)v3;
        v1[4] = v9;
        if (*(_QWORD*)(v10 + 200) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        GameRoutine_1a0a4e0(v10 + v11);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v4);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v12 = *v2;
  *v2 = 0;
  if (v12 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v3 + v13);
  }
  return result;
}

__int64 GameHr_19e21d0(char a1)
{
  unsigned int v2;

  if ((GameRoutine_82e3a0(1) & 1) != 0 || (GameRoutine_82e3a0(3) & 1) != 0) {
    v2 = 1;
    if ((GameRoutine_19e22c0(9, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(1, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(2, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(3, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(4, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(5, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(6, a1 & 1) & 1) == 0 &&
        (GameRoutine_19e22c0(7, a1 & 1) & 1) == 0) {
      return GameRoutine_19e22c0(8, a1 & 1);
    }
  }
  else {
    return 0;
  }
  return v2;
}

bool GameHr_19e22c0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  char v14;
  void* v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  __int64* v33;

  v3 = GameRoutine_19e2a20();
  v4 = 24;
  if ((a2 & 1) == 0) {
    v4 = 0;
  }
  v5 = v3 + v4;
  v33 = (__int64*)(v3 + v4);
  v6 = *(_QWORD*)(v3 + v4);
  if (*(_QWORD*)(v5 + 8) == v6) {
    v27 = true;
  }
  else {
    v7 = 0;
    v30 = nullptr;
    v31 = 0;
    v32 = nullptr;
    do {
      v8 = (char*)&GameData_21f8620 + 24 * *(unsigned __int8*)(v6 + 24 * v7);
      v9 = *(__int64**)v8;
      v10 = *((__int64**)v8 + 1);
      while (v9 != v10) {
        v11 = *v9;
        if (*v9 != 0) {
          v12 = *(_QWORD**)(v11 + 96);
          v13 = *(_QWORD**)(v11 + 104);
          if (v12 != v13) {
            v14 = 0;
            do {
              LOBYTE(v16) = GameData_21caab0;
              if (GameData_21caab0 != 0) {
                v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                        *v12 + 16LL);
                if (v3 != 0) {
                  v17 = *(_DWORD*)(v3 + 32);
                  v16 =
                      v17 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v17 / 0x21B7900)) >>
                            32);
                  if (v16 != 0) {
                    v18 = (v17 / 0x86DE40uLL) & 3;
                    if ((int)v18 > 1) {
                      if ((_DWORD)v18 == 3) {
                        v15 = &GameData_1aabf6c;
                      }
                      else {
                        v15 = &GameData_1ad653b;
                      }
                    }
                    else {
                      v15 = &GameData_1abf89f;
                      if ((_DWORD)v18 != 0) {
                        v15 = *(&GameData_1f9caf8 + v16);
                      }
                    }
                    v3 = GameRoutine_890160(v15);
                    LOBYTE(v16) = 1;
                  }
                }
                else {
                  LOBYTE(v16) = 0;
                }
              }
              ++v12;
              v14 |= v16;
            } while (v12 != v13);
            if ((v14 & 1) != 0) {
              if ((unsigned __int64)v32 < v31) {
                *(_DWORD*)v32 = v7;
                v32 += 4;
              }
              else {
                v19 = (char*)(v32 - v30);
                v20 = (v32 - v30) >> 2;
                v21 = v20 + 1;
                if ((unsigned __int64)(v20 + 1) >> 62 != 0) {
                  GameRoutine_6e5a20(v3);
                }
                if ((__int64)(v31 - (_QWORD)v30) >> 1 > v21) {
                  v21 = (__int64)(v31 - (_QWORD)v30) >> 1;
                }
                if (v31 - (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v22 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v21;
                }
                if (v22 != 0) {
                  if (v22 >> 62 != 0) {
                    GameRoutine_60a210(v3);
                  }
                  v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v22,
                                           16, 0);
                }
                else {
                  v23 = 0;
                }
                v24 = v23 + 4 * v22;
                v25 = (__int64)&v19[v23 + -4 * v20];
                *(_DWORD*)&v19[v23] = v7;
                v31 = v24;
                v32 = &v19[v23 + 4];
                v3 = GameRoutine_1a0b950(v25, v30, v19);
                if (v30 != nullptr) {
                  v26 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v26 = 56;
                  }
                  v3 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26);
                }
                v30 = (char*)v25;
              }
              break;
            }
          }
        }
        ++v9;
      }
      ++v7;
      v6 = *v33;
    } while (0xAAAAAAAAAAAAAAABLL * ((v33[1] - *v33) >> 3) > v7);
    v27 = v30 == v32;
    if (v30 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v28 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28);
    }
  }
  return !v27;
}

__int64 GameHr_19e3b70(__int64* a1)
{
  long double v2;
  double v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  long double v10;
  double v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  long double v18;
  double v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  long double v35;
  double v36;
  __int64 result;
  __int64 v38;
  __int64 (**v39)();
  int v40;
  long double v41;
  double v42;
  __int64 v43;
  __int64 (**v44)();
  __int64 v45;
  __int64 v46;
  __int64 (**v47)();
  const char* v48;
  char v49;
  int v50;
  int v51;
  char v52;
  __int64 (***v53)();
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

  GameRoutine_1560070(&v54, a1 + 106, "L_PageTab_Category");
  if (v55 != 0 && (v4 = GameRoutine_1a0a0c0(v2, v3)) != 0) {
    v5 = v4;
    v6 = 0;
    v56 = v54;
    v57 = v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v5 = 0;
    v56 = 0;
    v57 = 0;
    v6 = 1;
  }
  v47 = GameData_21236c8;
  v48 = (const char*)a1;
  v7 = *a1;
  v53 = &v47;
  v8 = (*(__int64 (**)(__int64*))(v7 + 192))(a1);
  GameRoutine_16e6ca0(a1 + 134, &v56, &v47, v8, 4, 5);
  if (v53 == &v47) {
    v9 = 4;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_10;
    }
    v9 = 5;
  }
  (*v53)[v9]();
LABEL_10:
  if (v57 != 0) {
    GameRoutine_1a09c50(v57);
  }
  if ((v6 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  if (v55 != 0) {
    GameRoutine_1a09c50(v55);
  }
  GameRoutine_1560070(&v54, a1 + 106, "L_PageTab");
  if (v55 != 0 && (v12 = GameRoutine_1a0a0c0(v10, v11)) != 0) {
    v13 = v12;
    v14 = 0;
    v45 = v54;
    v46 = v12;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v13 = 0;
    v45 = 0;
    v46 = 0;
    v14 = 1;
  }
  v47 = GameData_2123748;
  v48 = (const char*)a1;
  v15 = *a1;
  v53 = &v47;
  v16 = (*(__int64 (**)(__int64*))(v15 + 192))(a1);
  GameRoutine_16e6ca0(a1 + 150, &v45, &v47, v16, 14, 15);
  if (v53 == &v47) {
    v17 = 4;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_26;
    }
    v17 = 5;
  }
  ((void (*)(__int64 (***)()))(*v53)[v17])(v53);
LABEL_26:
  if (v46 != 0) {
    GameRoutine_1a09c50(v46);
  }
  if ((v14 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    GameRoutine_1a09c50(v13);
  }
  if (v55 != 0) {
    GameRoutine_1a09c50(v55);
  }
  GameRoutine_1560070(&v47, a1 + 106, "L_PageTab_Category");
  if (v48 != nullptr) {
    v20 = GameRoutine_1a0a0c0(v18, v19);
    v21 = v47;
    if (v48 != nullptr) {
      GameRoutine_1a09c50(v48);
    }
    if (v20 != 0 && v21 != nullptr) {
      GameRoutine_1560ec0(v21, "A_Tab", 0);
      GameRoutine_1562cf0(v21, "UnitOn");
      v22 = GameRoutine_155f480(v21, "Face");
      if (v22 != 0) {
        v23 = GameRoutine_1a0a6c0(v22, GameData_212d670[0], GameData_212d678[0],
                                  0);
        if (v23 != 0) {
          v24 = *((_DWORD*)a1 + 269);
          v25 = a1[136];
          v26 = v23;
          if (v24 < (unsigned __int64)((a1[137] - v25) >> 2)) {
            v24 = *(_DWORD*)(v25 + 4LL * v24);
          }
          v27 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v27 >= v24) {
            v27 = v24;
          }
          if (v24 >= 0) {
            v28 = v27;
          }
          else {
            v28 = 0;
          }
          v29 = *(unsigned __int8*)(a1[166] + v28);
          GameRoutine_15e0120(&v47);
          if (v29 != 9) {
            GameRoutine_15e0200(&v47);
          }
          v30 = *((_DWORD*)a1 + 269);
          v31 = a1[136];
          if (v30 < (unsigned __int64)((a1[137] - v31) >> 2)) {
            v30 = *(_DWORD*)(v31 + 4LL * v30);
          }
          v32 = ~*((_DWORD*)a1 + 332) + *((_DWORD*)a1 + 334);
          if (v32 >= v30) {
            v32 = v30;
          }
          if (v30 >= 0) {
            v33 = v32;
          }
          else {
            v33 = 0;
          }
          v34 = GameRoutine_682780(*(unsigned __int8*)(a1[166] + v33));
          GameRoutine_1840a20(v26, 0, v34, 6, 1);
          GameRoutine_15e04f0(&v47);
        }
      }
    }
    else if (v20 == 0) {
      goto LABEL_60;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      GameRoutine_1a09c50(v20);
    }
  }
LABEL_60:
  GameRoutine_1560070(&v47, a1 + 106, "L_KeyHelp00");
  result = (__int64)v48;
  if (v48 == nullptr) {
    goto LABEL_68;
  }
  v38 = GameRoutine_1a0a0c0(v35, v36);
  v39 = v47;
  result = (__int64)v48;
  if (v48 != nullptr) {
    result = GameRoutine_1a09c50(v48);
  }
  if (v38 != 0 && v39 != nullptr) {
    v40 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
    v50 = 0;
    v51 = v40;
    v52 = 0;
    v53 = nullptr;
    v47 = (__int64 (**)()) "Play";
    v48 = "MID_KeyHelp_Play";
    v49 = 1;
    result = GameRoutine_1593d90(v39, &v47);
  }
  else if (v38 == 0) {
    goto LABEL_68;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    result = GameRoutine_1a09c50(v38);
    if ((*((_BYTE*)a1 + 1065) & 1) != 0) {
      goto LABEL_81;
    }
  LABEL_69:
    GameRoutine_1562680(a1 + 106, "Out", 1.0);
    GameRoutine_15638b0(a1 + 106, "Out", 0);
    GameRoutine_1562f00(a1 + 106, "Out");
    GameRoutine_1563030(a1 + 106, "Out", 0);
    GameRoutine_1560070(&v47, a1 + 106, "L_Condition");
    result = (__int64)v48;
    if (v48 != nullptr) {
      v43 = GameRoutine_1a0a0c0(v41, v42);
      v44 = v47;
      result = (__int64)v48;
      if (v48 != nullptr) {
        result = GameRoutine_1a09c50(v48);
      }
      if (v43 != 0 && v44 != nullptr) {
        GameRoutine_1562680(v44, "Out", 1.0);
        GameRoutine_15638b0(v44, "Out", 0);
        GameRoutine_1562f00(v44, "Out");
        result = GameRoutine_1563030(v44, "Out", 0);
        goto LABEL_78;
      }
      if (v43 != 0) {
      LABEL_78:
        if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          result = GameRoutine_1a09c50(v43);
        }
      }
    }
    *((_BYTE*)a1 + 1520) = 0;
    goto LABEL_81;
  }
LABEL_68:
  if ((*((_BYTE*)a1 + 1065) & 1) == 0) {
    goto LABEL_69;
  }
LABEL_81:
  *((_BYTE*)a1 + 1065) = 1;
  return result;
}

__int64 GameHr_19e52e0(__int64 a1)
{
  if ((GameRoutine_16e7010(a1 + 1072, 0xFFFFFFFFLL, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  GameRoutine_16defa0(a1);
  return 13;
}

__int64 GameHr_19e5330(__int64 a1)
{
  if ((GameRoutine_16e7010(a1 + 1072, 1, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  GameRoutine_16defa0(a1);
  return 13;
}

__int64 GameHr_19e5380(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((GameRoutine_16e7010(a1 + 1392, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 GameHr_19e53e0(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((GameRoutine_16e7010(a1 + 1392, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 GameHr_19e5c10(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((GameRoutine_16e7010(a1 + 1200, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  GameRoutine_16de4d0(a1);
  return 13;
}

__int64 GameHr_19e5c80(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((GameRoutine_16e7010(a1 + 1200, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  GameRoutine_16de4d0(a1);
  return 13;
}

__int64 GameHr_19e5d00(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((GameRoutine_16e7010(a1 + 1024, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  GameRoutine_16de4d0(a1 - 176);
  return 13;
}

__int64 GameHr_19e5d70(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((GameRoutine_16e7010(a1 + 1024, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  GameRoutine_16de4d0(a1 - 176);
  return 13;
}

__int64 GameHr_19e5e70(__int64 a1, __int64 a2)
{
  const char* v4;
  __int64 v5;

  if (a2 != 0) {
    v4 = "ClearImg_Off";
  }
  else {
    v4 = "ClearImg";
  }
  GameRoutine_1562cf0(a1, v4);
  v5 = GameRoutine_155f480(a1, "Icon_Clan");
  if (v5 != 0) {
    v5 = GameRoutine_1a0a6c0(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1840e20(v5, a2);
}

__int64 GameHr_19e6ca0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if (GameData_2260e70 != 0) {
    v4 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v4 != 0) {
      GameRoutine_173fac0(v4, 1);
    }
  }
  return GameRoutine_a14090(v2, *(_QWORD*)(a1 + 8));
}

void GameHr_19e6dc0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[2];
  __int64 v5;
  __int64 v6;

  v0 = GameData_2260e70;
  if (GameData_2260e70 != 0) {
    v1 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v1 != 0) {
      GameRoutine_173fc80(v1, 1);
    }
    else {
      v2 = *(_QWORD*)(GameData_2260e70 + 160);
      v5 = *(_QWORD*)(GameData_2260e70 + 152);
      v6 = v2;
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
      }
      v4[0] = "In";
      v4[1] = 2;
      v3[0] = "Out";
      v3[1] = 3;
      *(_QWORD*)(v0 + 168) = GameRoutine_173f310(v0, &v5, 1, v4, v3, -1.0);
      if (v6 != 0) {
        GameRoutine_1a09c50(v6);
      }
    }
  }
}

const char* GameHr_19e7160(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    return *(const char**)(*(_QWORD*)(a1[11] + 8LL) + 72LL);
  }
  else {
    return "MID_Sys_Unknown";
  }
}

#pragma GCC visibility pop
