#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_5770(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, char);
__int64 GameRoutine_5cc0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, char);
__int64 GameRoutine_6720(char*, __int64);
__int64 GameRoutine_6a0(unsigned __int64*, __int64, unsigned __int64);
__int64 GameRoutine_6b55a0(__int64 result, unsigned __int8);
__int64 GameRoutine_8060(_QWORD*, int*, __int64, __int64, __int64, __int64);
__int64 GameRoutine_86a0(__int64, int*, _BYTE*, unsigned __int64);
__int64 Value_2ad0(__int64*, __int64, __int64);
__int64 Value_4c20();
__int64 memcpy(_QWORD, _QWORD, _QWORD);
bool Value_3510(__int64);
extern _DWORD GameData_1b37d88[29];
extern _QWORD GameData_1aff2c8[7];
extern __int64 GameData_212c060;
extern unsigned __int8 GameData_1aff300[8];
int* GameRoutine_2de0(__int64, unsigned __int64);
void GameRoutine_651250(void*);
__int64* timeline_3dd0(__int64* a1, unsigned __int64 a2);
__int64* timeline_3fe0(__int64* a1, unsigned __int64 a2);
__int64 timeline_4720(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 timeline_4c1c();
__int64* timeline_57f0(__int64* a1, int a2);
__int64* timeline_5aa0(__int64* a1, float a2);
__attribute__((swiftcall)) void timeline_6530(PSEUDO_X8 x8_, __int64 a1,
                                              _BYTE* a2, __int64 unused_int2,
                                              unsigned __int64 a3, __int64 a4,
                                              __int64 a5);

__int64* timeline_3dd0(__int64* a1, unsigned __int64 a2)
{
  unsigned int v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  char v18;
  __int64 v19;
  __int64 v20;

  v3 = a2;
  v4 = GameRoutine_2de0(*a1, a2);
  if (v4 == nullptr) {
    return a1;
  }
  *v4 = 2;
  v4[1] = v3;
  v5 = *a1;
  v6 = *(_QWORD*)(*a1 + 8);
  v7 = *(_QWORD*)(*a1 + 80);
  v8 = *a1 + 152;
  if ((*(_BYTE*)(*a1 + 4) & 2) == 0) {
    if (v7 + 1 <= v8) {
    LABEL_21:
      **(_BYTE**)(v5 + 80) = 91;
      v20 = *(_QWORD*)(v5 + 80) + 1LL;
      goto LABEL_22;
    }
    v9 = v5 + 88;
    v10 = v7 - (v5 + 88);
    *(_QWORD*)(v5 + 80) = v5 + 88;
    if (v10 >= 0) {
      v11 = *(_QWORD*)(v6 + 16);
      if ((unsigned __int64)(v11 + v10) <= *(_QWORD*)(v6 + 32)) {
        memcpy(*(_QWORD*)(v6 + 24) + v11, v9, v10);
        *(_QWORD*)(v6 + 16) += v10;
      }
      else {
        v12 = v4;
        v13 = Value_2ad0((__int64*)v6, v9, v10);
        v4 = v12;
        if ((v13 & 1) == 0) {
          goto LABEL_17;
        }
      }
      goto LABEL_21;
    }
  LABEL_15:
    if (*(_DWORD*)(v6 + 40) == 0) {
      *(_DWORD*)(v6 + 40) = 22;
    }
    goto LABEL_17;
  }
  if (v7 + 5 > v8) {
    v14 = v5 + 88;
    v15 = v7 - (v5 + 88);
    *(_QWORD*)(v5 + 80) = v5 + 88;
    if (v15 < 0) {
      goto LABEL_15;
    }
    v16 = *(_QWORD*)(v6 + 16);
    if ((unsigned __int64)(v16 + v15) <= *(_QWORD*)(v6 + 32)) {
      memcpy(*(_QWORD*)(v6 + 24) + v16, v14, v15);
      *(_QWORD*)(v6 + 16) += v15;
      v19 = *(_QWORD*)(v5 + 80);
      if (v3 <= 0xF) {
      LABEL_13:
        v20 = v19 + 1;
        if (v19 + 1 <= v8) {
          *(_BYTE*)v19 = v3 | 0x90;
        LABEL_22:
          *(_QWORD*)(v5 + 80) = v20;
          return a1;
        }
      LABEL_30:
        v20 = 0;
        goto LABEL_22;
      }
    LABEL_25:
      if (HIWORD(v3) != 0) {
        v20 = v19 + 5;
        if (v19 + 5 <= v8) {
          *(_BYTE*)v19 = -35;
          *(_DWORD*)(v19 + 1) = bswap32(v3);
          goto LABEL_22;
        }
      }
      else {
        v20 = v19 + 3;
        if (v19 + 3 <= v8) {
          *(_BYTE*)(v19 + 2) = v3;
          *(_BYTE*)v19 = -36;
          *(_BYTE*)(v19 + 1) = BYTE1(v3);
          goto LABEL_22;
        }
      }
      goto LABEL_30;
    }
    v17 = v4;
    v18 = Value_2ad0((__int64*)v6, v14, v15);
    v4 = v17;
    if ((v18 & 1) == 0) {
    LABEL_17:
      if (*(_DWORD*)*a1 == 0) {
        *(_DWORD*)*a1 = 8;
      }
      *v4 = 5;
      return a1;
    }
  }
  v19 = *(_QWORD*)(v5 + 80);
  if (v3 <= 0xF) {
    goto LABEL_13;
  }
  goto LABEL_25;
}

__int64* timeline_3fe0(__int64* a1, unsigned __int64 a2)
{
  unsigned int v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  char v18;
  __int64 v19;
  __int64 v20;

  v3 = a2;
  v4 = GameRoutine_2de0(*a1, a2);
  if (v4 == nullptr) {
    return a1;
  }
  *v4 = 3;
  v4[1] = v3;
  v5 = *a1;
  v6 = *(_QWORD*)(*a1 + 8);
  v7 = *(_QWORD*)(*a1 + 80);
  v8 = *a1 + 152;
  if ((*(_BYTE*)(*a1 + 4) & 2) == 0) {
    if (v7 + 1 <= v8) {
    LABEL_21:
      **(_BYTE**)(v5 + 80) = 123;
      v20 = *(_QWORD*)(v5 + 80) + 1LL;
      goto LABEL_22;
    }
    v9 = v5 + 88;
    v10 = v7 - (v5 + 88);
    *(_QWORD*)(v5 + 80) = v5 + 88;
    if (v10 >= 0) {
      v11 = *(_QWORD*)(v6 + 16);
      if ((unsigned __int64)(v11 + v10) <= *(_QWORD*)(v6 + 32)) {
        memcpy(*(_QWORD*)(v6 + 24) + v11, v9, v10);
        *(_QWORD*)(v6 + 16) += v10;
      }
      else {
        v12 = v4;
        v13 = Value_2ad0((__int64*)v6, v9, v10);
        v4 = v12;
        if ((v13 & 1) == 0) {
          goto LABEL_17;
        }
      }
      goto LABEL_21;
    }
  LABEL_15:
    if (*(_DWORD*)(v6 + 40) == 0) {
      *(_DWORD*)(v6 + 40) = 22;
    }
    goto LABEL_17;
  }
  if (v7 + 5 > v8) {
    v14 = v5 + 88;
    v15 = v7 - (v5 + 88);
    *(_QWORD*)(v5 + 80) = v5 + 88;
    if (v15 < 0) {
      goto LABEL_15;
    }
    v16 = *(_QWORD*)(v6 + 16);
    if ((unsigned __int64)(v16 + v15) <= *(_QWORD*)(v6 + 32)) {
      memcpy(*(_QWORD*)(v6 + 24) + v16, v14, v15);
      *(_QWORD*)(v6 + 16) += v15;
      v19 = *(_QWORD*)(v5 + 80);
      if (v3 <= 0xF) {
      LABEL_13:
        v20 = v19 + 1;
        if (v19 + 1 <= v8) {
          *(_BYTE*)v19 = v3 | 0x80;
        LABEL_22:
          *(_QWORD*)(v5 + 80) = v20;
          return a1;
        }
      LABEL_30:
        v20 = 0;
        goto LABEL_22;
      }
    LABEL_25:
      if (HIWORD(v3) != 0) {
        v20 = v19 + 5;
        if (v19 + 5 <= v8) {
          *(_BYTE*)v19 = -33;
          *(_DWORD*)(v19 + 1) = bswap32(v3);
          goto LABEL_22;
        }
      }
      else {
        v20 = v19 + 3;
        if (v19 + 3 <= v8) {
          *(_BYTE*)(v19 + 2) = v3;
          *(_BYTE*)v19 = -34;
          *(_BYTE*)(v19 + 1) = BYTE1(v3);
          goto LABEL_22;
        }
      }
      goto LABEL_30;
    }
    v17 = v4;
    v18 = Value_2ad0((__int64*)v6, v14, v15);
    v4 = v17;
    if ((v18 & 1) == 0) {
    LABEL_17:
      if (*(_DWORD*)*a1 == 0) {
        *(_DWORD*)*a1 = 8;
      }
      *v4 = 5;
      return a1;
    }
  }
  v19 = *(_QWORD*)(v5 + 80);
  if (v3 <= 0xF) {
    goto LABEL_13;
  }
  goto LABEL_25;
}

__int64 timeline_4720(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _DWORD* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;

  if ((*(_BYTE*)(a1 + 4) & 8) == 0 &&
      ((unsigned int)GameRoutine_6a0(&v35, a2, a3) != 0 || v35 != a3)) {
    if (*(_DWORD*)a1 != 0) {
      v21 = *(unsigned int*)(a1 + 16);
      v22 = *(unsigned int*)(a1 + 20) - 1LL;
      if (v22 < v21) {
      LABEL_22:
        v23 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 8 * v22);
        goto LABEL_66;
      }
    }
    else {
      *(_DWORD*)a1 = 7;
      v21 = *(unsigned int*)(a1 + 16);
      v22 = *(unsigned int*)(a1 + 20) - 1LL;
      if (v22 < v21) {
        goto LABEL_22;
      }
    }
    v24 = v22 - v21;
    v25 = __clz(v24 + 16);
    v23 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v25) + 8) +
                    8LL * (unsigned int)(v24 - GameData_1b37d88[28 - v25]));
    goto LABEL_66;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(a1 + 80);
  v8 = a1 + 152;
  if (a3 + 5 <= 0x40) {
    if (v7 + a3 + 5 <= v8) {
      goto LABEL_9;
    }
    v9 = a1 + 88;
    v10 = v7 - (a1 + 88);
    *(_QWORD*)(a1 + 80) = a1 + 88;
    if (v10 >= 0) {
      v11 = *(_QWORD*)(v6 + 16);
      if ((unsigned __int64)(v11 + v10) <= *(_QWORD*)(v6 + 32)) {
        memcpy(*(_QWORD*)(v6 + 24) + v11, v9, v10);
        *(_QWORD*)(v6 + 16) += v10;
        v12 = *(_QWORD*)(a1 + 80);
        if ((unsigned int)a3 <= 0x1F) {
        LABEL_10:
          v13 = a3 & 0x1F;
          if (v12 + v13 + 1 <= v8) {
            *(_BYTE*)v12 = a3 | 0xA0;
            v14 = 1;
          LABEL_43:
            v26 = v12 + v14;
            memcpy(v12 + v14, a2, v13);
            v27 = v26 + v13;
          LABEL_44:
            *(_QWORD*)(a1 + 80) = v27;
            return 1;
          }
          goto LABEL_57;
        }
      LABEL_26:
        if ((unsigned int)a3 > 0xFF) {
          if (WORD1(a3) != 0) {
            v13 = (unsigned int)a3;
            if (v12 + (unsigned __int64)(unsigned int)a3 + 5 <= v8) {
              *(_BYTE*)v12 = -37;
              *(_DWORD*)(v12 + 1) = bswap32(a3);
              v14 = 5;
              goto LABEL_43;
            }
          }
          else {
            v13 = (unsigned __int16)a3;
            if (v12 + (unsigned __int64)(unsigned __int16)a3 + 3 <= v8) {
              *(_BYTE*)(v12 + 2) = a3;
              *(_BYTE*)v12 = -38;
              *(_BYTE*)(v12 + 1) = BYTE1(a3);
              v14 = 3;
              goto LABEL_43;
            }
          }
        }
        else {
          v13 = (unsigned __int8)a3;
          if (v12 + (unsigned __int64)(unsigned __int8)a3 + 2 <= v8) {
            *(_BYTE*)(v12 + 1) = a3;
            *(_BYTE*)v12 = -39;
            v14 = 2;
            goto LABEL_43;
          }
        }
      LABEL_57:
        v27 = 0;
        goto LABEL_44;
      }
      if ((Value_2ad0((__int64*)v6, v9, v10) & 1) != 0) {
      LABEL_9:
        v12 = *(_QWORD*)(a1 + 80);
        if ((unsigned int)a3 <= 0x1F) {
          goto LABEL_10;
        }
        goto LABEL_26;
      }
      goto LABEL_61;
    }
  LABEL_59:
    if (*(_DWORD*)(v6 + 40) == 0) {
      *(_DWORD*)(v6 + 40) = 22;
    }
    goto LABEL_61;
  }
  if (v7 + 5 <= v8) {
  LABEL_16:
    v18 = *(_QWORD*)(a1 + 80);
    if ((unsigned int)a3 <= 0x1F) {
      goto LABEL_17;
    }
    goto LABEL_33;
  }
  v15 = a1 + 88;
  v16 = v7 - (a1 + 88);
  *(_QWORD*)(a1 + 80) = a1 + 88;
  if (v16 < 0) {
    goto LABEL_59;
  }
  v17 = *(_QWORD*)(v6 + 16);
  if ((unsigned __int64)(v17 + v16) > *(_QWORD*)(v6 + 32)) {
    if ((Value_2ad0((__int64*)v6, v15, v16) & 1) == 0) {
      goto LABEL_61;
    }
    goto LABEL_16;
  }
  memcpy(*(_QWORD*)(v6 + 24) + v17, v15, v16);
  *(_QWORD*)(v6 + 16) += v16;
  v18 = *(_QWORD*)(a1 + 80);
  if ((unsigned int)a3 <= 0x1F) {
  LABEL_17:
    if (v18 + 1 <= v8) {
      *(_BYTE*)v18 = a3 | 0xA0;
      v6 = *(_QWORD*)(a1 + 8);
      v19 = a1 + 88;
      v20 = v18 + 1 - (a1 + 88);
      *(_QWORD*)(a1 + 80) = a1 + 88;
      if (v20 < 0) {
        goto LABEL_59;
      }
      goto LABEL_48;
    }
    goto LABEL_58;
  }
LABEL_33:
  if ((unsigned int)a3 > 0xFF) {
    if (WORD1(a3) != 0) {
      if (v18 + 5 <= v8) {
        *(_BYTE*)v18 = -37;
        *(_DWORD*)(v18 + 1) = bswap32(a3);
        v6 = *(_QWORD*)(a1 + 8);
        v19 = a1 + 88;
        v20 = v18 + 5 - (a1 + 88);
        *(_QWORD*)(a1 + 80) = a1 + 88;
        if (v20 < 0) {
          goto LABEL_59;
        }
        goto LABEL_48;
      }
      goto LABEL_58;
    }
    if (v18 + 3 > v8) {
    LABEL_58:
      v6 = *(_QWORD*)(a1 + 8);
      v19 = a1 + 88;
      v20 = -(a1 + 88);
      *(_QWORD*)(a1 + 80) = a1 + 88;
      if (a1 + 88 > 0) {
        goto LABEL_59;
      }
      goto LABEL_48;
    }
    *(_BYTE*)(v18 + 2) = a3;
    *(_BYTE*)v18 = -38;
    *(_BYTE*)(v18 + 1) = BYTE1(a3);
    v6 = *(_QWORD*)(a1 + 8);
    v19 = a1 + 88;
    v20 = v18 + 3 - (a1 + 88);
    *(_QWORD*)(a1 + 80) = a1 + 88;
    if (v20 < 0) {
      goto LABEL_59;
    }
  }
  else {
    if (v18 + 2 > v8) {
      goto LABEL_58;
    }
    *(_BYTE*)(v18 + 1) = a3;
    *(_BYTE*)v18 = -39;
    v6 = *(_QWORD*)(a1 + 8);
    v19 = a1 + 88;
    v20 = v18 + 2 - (a1 + 88);
    *(_QWORD*)(a1 + 80) = a1 + 88;
    if (v20 < 0) {
      goto LABEL_59;
    }
  }
LABEL_48:
  v29 = *(_QWORD*)(v6 + 16);
  if ((unsigned __int64)(v29 + v20) <= *(_QWORD*)(v6 + 32)) {
    memcpy(*(_QWORD*)(v6 + 24) + v29, v19, v20);
    *(_QWORD*)(v6 + 16) += v20;
    v6 = *(_QWORD*)(a1 + 8);
    if ((a3 & 0x8000000000000000LL) != 0) {
      goto LABEL_59;
    }
  }
  else {
    if ((Value_2ad0((__int64*)v6, v19, v20) & 1) == 0) {
      goto LABEL_61;
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((a3 & 0x8000000000000000LL) != 0) {
      goto LABEL_59;
    }
  }
  v30 = *(_QWORD*)(v6 + 16);
  if (v30 + a3 <= *(_QWORD*)(v6 + 32)) {
    memcpy(*(_QWORD*)(v6 + 24) + v30, a2, a3);
    *(_QWORD*)(v6 + 16) += a3;
    return 1;
  }
  if ((Value_2ad0((__int64*)v6, a2, a3) & 1) != 0) {
    return 1;
  }
LABEL_61:
  v31 = *(unsigned int*)(a1 + 16);
  v32 = *(unsigned int*)(a1 + 20) - 1LL;
  if (v32 >= v31) {
    v33 = v32 - v31;
    v34 = __clz(v33 + 16);
    v23 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v34) + 8) +
                    8LL * (unsigned int)(v33 - GameData_1b37d88[28 - v34]));
    if (*(_DWORD*)a1 == 0) {
    LABEL_65:
      *(_DWORD*)a1 = 8;
    }
  }
  else {
    v23 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 8 * v32);
    if (*(_DWORD*)a1 == 0) {
      goto LABEL_65;
    }
  }
LABEL_66:
  *v23 = 5;
  return 0;
}

__int64 timeline_4c1c()
{
  Value_4c20();
  return Value_4c20();
}

__int64* timeline_57f0(__int64* a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int8x16_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _DWORD* v24;
  int v25;
  __int64 v26;
  char* v27;
  unsigned __int64* v28;
  int64x2_t v29;
  __int64 v30;
  _BOOL8 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char v37[32];
  __int64 v38;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (Value_3510(*a1)) {
    v9 = *a1;
    v10 = *(_QWORD*)(*a1 + 8);
    if ((*(_BYTE*)(*a1 + 4) & 2) == 0) {
      GameRoutine_5770((__int64)&v38, (__int64)v37, (__int64)"%d",
                       (unsigned int)a2, v4, v5, v6, v7, v37[0]),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v11 = v38;
      v12 = *(_QWORD*)(v9 + 80);
      if (v12 + v38 <= (unsigned __int64)(v9 + 152)) {
      LABEL_22:
        memcpy(*(_QWORD*)(v9 + 80), v37, v11),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v27 = (char*)(*(_QWORD*)(v9 + 80) + v11);
      LABEL_37:
        *(_QWORD*)(v9 + 80) = v27;
        return a1;
      }
      v13 = v9 + 88;
      v14 = v12 - (v9 + 88);
      *(_QWORD*)(v9 + 80) = v9 + 88;
      if (v14 >= 0) {
        v15 = *(_QWORD*)(v10 + 16);
        if ((unsigned __int64)(v15 + v14) <= *(_QWORD*)(v10 + 32)) {
          memcpy(*(_QWORD*)(v10 + 24) + v15, v13, v14),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          *(_QWORD*)(v10 + 16) += v14;
        }
        else if ((Value_2ad0((__int64*)v10, v13, v14) & 1) == 0) {
          goto LABEL_15;
        }
        goto LABEL_22;
      }
      goto LABEL_13;
    }
    v16 = *(_QWORD*)(v9 + 80);
    v17 = v9 + 152;
    if (v16 + 5 > (unsigned __int64)(v9 + 152)) {
      v18 = v9 + 88;
      v19 = v16 - (v9 + 88);
      *(_QWORD*)(v9 + 80) = v9 + 88;
      if (v19 < 0) {
      LABEL_13:
        if (*(_DWORD*)(v10 + 40) == 0) {
          *(_DWORD*)(v10 + 40) = 22;
        }
      LABEL_15:
        v21 = *a1;
        v22 = *(unsigned int*)(*a1 + 16);
        v23 = *(unsigned int*)(*a1 + 20) - 1LL;
        if (v23 >= v22) {
          v25 = v23 - v22;
          v26 = __clz(v25 + 16);
          v24 =
              (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 32) + 8 * (27 - v26) + 8) +
                        8LL * (unsigned int)(v25 - GameData_1b37d88[28 - v26]));
          if (*(_DWORD*)v21 == 0) {
          LABEL_19:
            *(_DWORD*)v21 = 8;
          }
        }
        else {
          v24 = (_DWORD*)(*(_QWORD*)(v21 + 24) + 8 * v23);
          if (*(_DWORD*)v21 == 0) {
            goto LABEL_19;
          }
        }
        *v24 = 5;
        return a1;
      }
      v20 = *(_QWORD*)(v10 + 16);
      if ((unsigned __int64)(v20 + v19) <= *(_QWORD*)(v10 + 32)) {
        memcpy(*(_QWORD*)(v10 + 24) + v20, v18, v19),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *(_QWORD*)(v10 + 16) += v19;
      }
      else if ((Value_2ad0((__int64*)v10, v18, v19) & 1) == 0) {
        goto LABEL_15;
      }
    }
    v28 = *(unsigned __int64**)(v9 + 80);
    LANES128(v29).n128_u64[1] =
        LANES128_OF(vdupq_n_s64(0xD3D2D1D0CCCDCECFLL)).n128_u64[1];
    v30 = 1;
    if (a2 >= 0x10000) {
      v30 = 2;
    }
    LANES128(v29).n128_u64[0] = a2;
    v31 = a2 >= 0x10000;
    if (a2 > 255) {
      v31 = v30;
    }
    v32 = a2 > -33;
    if (a2 > 127) {
      ++v32;
    }
    if (a2 > -129) {
      ++v32;
    }
    if (a2 >= -32768) {
      ++v32;
    }
    v33 = v32 + v31;
    PSEUDO_LOW_LANE128(v8, n128_u64, GameData_1aff2c8[v33]);
    v34 = GameData_1aff300[v33];
    v35 = LANES128_OF(vqtbl1q_s8(v29, v8)).n128_u64[0];
    if ((unsigned __int64)(v28 + 1) > v17) {
      if ((unsigned __int64)v28 + v34 > v17) {
        *(_QWORD*)(v9 + 80) = 0;
        return a1;
      }
      *(_QWORD*)v37 = v35;
      memcpy(v28, v37, v34),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    else {
      *v28 = v35;
    }
    v27 = (char*)v28 + v34;
    goto LABEL_37;
  }
  return a1;
}

__int64* timeline_5aa0(__int64* a1, float a2)
{

#pragma clang fp contract(off)
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
  unsigned __int64 v21;
  unsigned __int64 v22;
  _DWORD* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v29[128];
  __int64 v30;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (Value_3510(*a1)) {
    v9 = *a1;
    v10 = *(_QWORD*)(*a1 + 8);
    if ((*(_BYTE*)(*a1 + 4) & 2) == 0) {
      GameRoutine_5cc0((__int64)&v30, (__int64)v29, (__int64)"%.7g", v4, v5, v6,
                       v7, v8, v29[0]),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v11 = v30;
      v12 = *(_QWORD*)(v9 + 80);
      if (v12 + v30 <= (unsigned __int64)(v9 + 152)) {
      LABEL_22:
        memcpy(*(_QWORD*)(v9 + 80), v29, v11),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v26 = *(_QWORD*)(v9 + 80) + v11;
      LABEL_26:
        *(_QWORD*)(v9 + 80) = v26;
        return a1;
      }
      v13 = v9 + 88;
      v14 = v12 - (v9 + 88);
      *(_QWORD*)(v9 + 80) = v9 + 88;
      if (v14 >= 0) {
        v15 = *(_QWORD*)(v10 + 16);
        if ((unsigned __int64)(v15 + v14) <= *(_QWORD*)(v10 + 32)) {
          memcpy(*(_QWORD*)(v10 + 24) + v15, v13, v14),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          *(_QWORD*)(v10 + 16) += v14;
        }
        else if ((Value_2ad0((__int64*)v10, v13, v14) & 1) == 0) {
          goto LABEL_15;
        }
        goto LABEL_22;
      }
      goto LABEL_13;
    }
    v16 = *(_QWORD*)(v9 + 80);
    if (v16 + 5 > (unsigned __int64)(v9 + 152)) {
      v17 = v9 + 88;
      v18 = v16 - (v9 + 88);
      *(_QWORD*)(v9 + 80) = v9 + 88;
      if (v18 < 0) {
      LABEL_13:
        if (*(_DWORD*)(v10 + 40) == 0) {
          *(_DWORD*)(v10 + 40) = 22;
        }
      LABEL_15:
        v20 = *a1;
        v21 = *(unsigned int*)(*a1 + 16);
        v22 = *(unsigned int*)(*a1 + 20) - 1LL;
        if (v22 >= v21) {
          v24 = v22 - v21;
          v25 = __clz(v24 + 16);
          v23 =
              (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 32) + 8 * (27 - v25) + 8) +
                        8LL * (unsigned int)(v24 - GameData_1b37d88[28 - v25]));
          if (*(_DWORD*)v20 == 0) {
          LABEL_19:
            *(_DWORD*)v20 = 8;
          }
        }
        else {
          v23 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 8 * v22);
          if (*(_DWORD*)v20 == 0) {
            goto LABEL_19;
          }
        }
        *v23 = 5;
        return a1;
      }
      v19 = *(_QWORD*)(v10 + 16);
      if ((unsigned __int64)(v19 + v18) <= *(_QWORD*)(v10 + 32)) {
        memcpy(*(_QWORD*)(v10 + 24) + v19, v17, v18),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *(_QWORD*)(v10 + 16) += v18;
      }
      else if ((Value_2ad0((__int64*)v10, v17, v18) & 1) == 0) {
        goto LABEL_15;
      }
    }
    v27 = *(_QWORD*)(v9 + 80);
    v26 = v27 + 5;
    if (v27 + 5 > (unsigned __int64)(v9 + 152)) {
      *(_QWORD*)(v9 + 80) = 0;
      return a1;
    }
    *(_BYTE*)v27 = -54;
    *(_DWORD*)(v27 + 1) = bswap32(LODWORD(a2));
    goto LABEL_26;
  }
  return a1;
}

__attribute__((swiftcall)) void timeline_6530(PSEUDO_X8 x8_, __int64 a1,
                                              _BYTE* a2, __int64 unused_int2,
                                              unsigned __int64 a3, __int64 a4,
                                              __int64 a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int* v7;
  __int64 v9;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  _QWORD* v16;
  int v17;
  int v18;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v7 = (int*)(a1 + 8);
  if (*(_DWORD*)(a1 + 8) != 0) {
    goto LABEL_2;
  }
  v9 = *(_QWORD*)a1;
  if (**(_DWORD**)(v9 + 16) == 1) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if ((unsigned int)GameRoutine_8060((_QWORD*)v9, v7, a1 + 16, a3, a4,
                                         a5) == 18) {
        goto LABEL_8;
      }
    }
    else if ((unsigned int)GameRoutine_86a0(v9, v7, (_BYTE*)(a1 + 16), a3) ==
             18) {
      goto LABEL_8;
    }
  LABEL_2:
    *a6 = 0;
    return;
  }
LABEL_8:
  v11 = (unsigned __int8*)GameRoutine_1a09d20(16, GameData_212c060),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v11 == nullptr) {
    *v7 = 14;
    *a6 = 0;
    return;
  }
  v15 = v11;
  *(_QWORD*)v11 = 0;
  *((_QWORD*)v11 + 1) = 0;
  if (a2 != nullptr) {
    *a2 = 0;
    v16 = *(_QWORD**)a1;
    v16[10] = a2;
    if (*(_DWORD*)(v16[2] + 8LL * v16[3]) != 0) {
      goto LABEL_20;
    }
  }
  else {
    v16 = *(_QWORD**)a1;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 16LL) +
                   8LL * *(_QWORD*)(*(_QWORD*)a1 + 24LL)) != 0) {
      goto LABEL_20;
    }
  }
  if ((*(_BYTE*)v16 & 1) != 0) {
    GameRoutine_8060(v16, v7, a1 + 16, v12, v13, v14),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    if (*v7 != 0) {
      goto LABEL_16;
    }
  }
  else {
    GameRoutine_86a0((__int64)v16, v7, (_BYTE*)(a1 + 16), v12),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    if (*v7 != 0) {
    LABEL_16:
      v17 = *v15;
      *a6 = 0;
      if ((unsigned int)(v17 - 6) <= 4) {
        GameRoutine_6b55a0((__int64)v15, v17),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      }
      GameRoutine_651250(v15),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      return;
    }
  }
LABEL_20:
  v18 = GameRoutine_6720((char*)v15, a1),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v18 != 0) {
    *v7 = v18;
  }
  *a6 = v15;
}

#pragma GCC visibility pop
