#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2017dd0[3])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c868;

extern __int64* GameData_212c878[6];

extern __int64* GameData_212c880[5];

extern __int64* GameData_212c9f8[136];

extern __int64 GameData_21c99c8;

extern __int64 GameData_21caab0;

__int64 GameRoutine_11f0040(__int64 result, int);

void __attribute__((noreturn)) GameRoutine_11f1220(_QWORD);

__int64 GameRoutine_11f2730(__int64 result, __int64, int);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6c8300(_QWORD, _QWORD);

__int64 GameRoutine_6c8530(_QWORD);

__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_7fb7c0(void);

__int64 GameRoutine_828f50(_QWORD, _QWORD);

__int64 GameHr_11f0320(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;

  v3 = a1;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c9f8[0] + 64) +
                  8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + a2 + 2018LL));
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 8LL) - **(_QWORD**)(v4 + 40);
  if ((int)(v5 >> 3) >= 1) {
    v6 = (v5 >> 3) & 0x7FFFFFFF;
    v7 = 0;
    v8 = 4 * a2 - 4;
    do {
      v9 = **(_QWORD**)(v4 + 40);
      if (v7 >= (*(_QWORD*)(*(_QWORD*)(v4 + 40) + 8LL) - v9) >> 3) {
        GameRoutine_11f1220(a1);
      }
      v10 = *(_QWORD*)(v9 + 8 * v7);
      if (*(_BYTE*)(v10 + 33) == 0) {
        return GameRoutine_11f0040(v3, a2);
      }
      v11 = *(_QWORD*)(v3 + 8);
      v12 = *(unsigned __int8*)(v10 + 32);
      if (*(_BYTE*)(v10 + 32) != 0) {
        if (v12 == 255) {
          goto LABEL_13;
        }
        if (v12 == 254) {
          if (*(_BYTE*)(v11 + 1982) == 0) {
            goto LABEL_13;
          }
        }
        else if (*(unsigned __int8*)(v11 + 1982) == (char)v12) {
          goto LABEL_13;
        }
      }
      else if (*(_BYTE*)(v11 + 1982) != 0) {
      LABEL_13:
        v13 = *(__int16*)(v10 + 42);
        v14 = v11 + 2022;
        v15 = v13 + 7;
        v16 = v14 + 4LL * (v8 - v13);
        if ((v15 & 0xFFFC) != 0) {
          v17 = v10 + 40;
        }
        else {
          v17 = v16;
        }
        v18 = *(__int16*)(v10 + 50);
        v19 = v14 + 4LL * (v8 - v18);
        if ((((_WORD)v18 + 7) & 0xFFFC) != 0) {
          v20 = v10 + 48;
        }
        else {
          v20 = v19;
        }
        if (*(__int16*)(v17 + 2) != -3 && *(_BYTE*)(v10 + 33) == 2 &&
            *(unsigned __int16*)(v20 + 2) != 65533) {
          v21 = *(unsigned __int8*)(v10 + 34);
          if (v21 <= 2) {
            a1 = ((__int64 (*)(__int64))GameData_2017dd0[v21])(v3);
            if ((a1 & 1) != 0) {
              *(_DWORD*)(v3 + 2252) |= 1u;
              *(_DWORD*)(v3 + 2256) = *(char*)(v10 + 56);
            }
          }
        }
      }
      ++v7;
    } while (v6 != v7);
  }
  return GameRoutine_11f0040(v3, a2);
}

__int64 GameHr_11f2880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 result;
  unsigned int v11;
  char v12;
  __int64 v13;
  _BYTE* v14;
  unsigned int v15;
  int v16;
  char v17[4];
  char v18[4];

  v5 = a2 + 8LL * *(int*)(a3 + 20);
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(v5 + 828));
  if ((*(_BYTE*)(v6 + 336) & 0x40) != 0) {
    v11 = *(unsigned __int8*)(v6 + 88);
    v12 = *(_BYTE*)(v5 + 831);
    v17[0] = 2;
    result = GameRoutine_6dd190(a2, v17, 1);
    v13 = *(unsigned int*)(a3 + 12332);
    if ((_DWORD)v13 != 0) {
      v14 = (_BYTE*)(a3 + 49);
      v15 = v11 >> ((v12 & 8) != 0);
      v16 = (int)result / 3;
      do {
        if (*v14 != 0) {
          result = GameRoutine_6ea8c0(v14);
          if (result != 0) {
            result = GameRoutine_11f2730(a1, result, v16 + v15);
          }
        }
        v14 += 12;
        --v13;
      } while (v13 != 0);
    }
  }
  else {
    v7 = *(_QWORD*)a3;
    v8 = *(unsigned __int8*)(v6 + 88) >> ((*(_BYTE*)(v5 + 831) & 8) != 0);
    v18[0] = 2;
    v9 = GameRoutine_6dd190(a2, v18, 1);
    return GameRoutine_11f2730(a1, v7, v9 / 3 + v8);
  }
  return result;
}

__int64 GameHr_11f29e0(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  _BYTE* v4;
  __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _BYTE v13[4];

  v3 = *((unsigned int*)a3 + 3081);
  if ((_DWORD)v3 != 0) {
    v4 = (char*)a3 + 41;
    v6 = result;
    v7 = GameData_212c880[0];
    do {
      if (*v4 == 0) {
        goto LABEL_5;
      }
      result = GameRoutine_6ea8c0(v4);
      if (result == 0) {
        goto LABEL_5;
      }
      v9 = *a3;
      v10 = result;
      if (*a3 != 0) {
        v9 = *(_WORD*)(v9 + 16) & 0xFFF;
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v9);
      if (*(_WORD*)(v11 + 256) == 0) {
        goto LABEL_3;
      }
      v8 = **(__int16**)(v11 + 264);
      if (v8 < 1) {
        goto LABEL_3;
      }
      v12 = *(unsigned __int8*)(v11 + 250);
      if (v12 == 10) {
        v13[0] = 0;
        v8 = (int)(GameRoutine_6dd190(result, v13, 1) * v8 + 99) / 100;
        goto LABEL_4;
      }
      if (v12 != 9) {
      LABEL_3:
        v8 = 0;
      }
    LABEL_4:
      result = GameRoutine_11f2730(v6, v10, v8);
    LABEL_5:
      v4 += 12;
      --v3;
    } while (v3 != 0);
  }
  return result;
}

__int64 GameHr_11fd700(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;

  result = 1;
  switch (a1) {
  case 3:
    v21 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v21 = *(_QWORD*)(GameData_21caab0 + 96);
    }
    return *(_QWORD*)(a4 + 392) == v21;
  case 4:
  case 23:
    v7 = *(__int16*)(a2 + 2);
    result = 0;
    if (v7 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) ==
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v7);
  case 5:
  case 24:
    v8 = *(__int16*)(a2 + 2);
    result = 0;
    if (v8 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) !=
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v8);
  case 6:
    v22 = *(__int16*)(a2 + 2);
    result = 0;
    if (v22 < 0 || *(_BYTE*)a2 != 3) {
      return result;
    }
    v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c868 + 64) + 8 * v22);
    return GameRoutine_6c8530(a4) == v23;
  case 7:
    result = 0;
    if (*(__int16*)(a2 + 2) < 0 || *(_BYTE*)a2 != 7) {
      return result;
    }
    v24 = *(_QWORD*)(a4 + 440);
    if (v24 != 0) {
      v25 = *(unsigned __int8*)(v24 + 16);
    }
    else {
      v25 = 9;
    }
    return v25 == (unsigned __int8)*(_WORD*)(a2 + 2);
  case 8:
    result = 0;
    if (*(__int16*)(a2 + 2) < 0 || *(_BYTE*)a2 != 0) {
      return result;
    }
    return *(unsigned __int16*)(a2 + 2) == *(unsigned __int8*)(a4 + 1981);
  case 9:
    v10 = *(__int16*)(a2 + 2);
    result = 0;
    if (v10 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v10) +
                     336LL);
    if (v11 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
    v13 = (__int64*)(v11 + 80);
    v12 = *(_QWORD*)(v11 + 80);
    if (v12 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
    break;
  case 14:
    v7 = *(__int16*)(a3 + 2);
    result = 0;
    if (v7 < 0 || *(_BYTE*)a3 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) ==
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v7);
  case 15:
    v8 = *(__int16*)(a3 + 2);
    result = 0;
    if ((v8 & 0x8000000000000000LL) == 0 && *(_BYTE*)a3 == 2) {
      return *(_QWORD*)(a4 + 392) !=
             *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v8);
    }
    return result;
  default:
    return result;
  }
  while (1) {
    v14 = *(__int64***)(v11 + 24);
    v16 = *v14;
    v15 = v14[1];
    if (v15 != *v14) {
      break;
    }
  LABEL_22:
    v11 = v12;
    v13 = (__int64*)(v12 + 80);
    v12 = *(_QWORD*)(v12 + 80);
    if (v12 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
  }
  v17 = 0;
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 == *v16) {
    LABEL_25:
      ++v17;
    }
    else {
      while (1) {
        if (*(_QWORD*)v18 != 0) {
          v20 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            LOBYTE(result) = GameRoutine_828f50(GameData_21caab0 + 40, v18);
          }
          if (*(_BYTE*)(v18 + 16) != ((v20 == 0) | result & 1)) {
            break;
          }
        }
        v18 += 24;
        if (v18 == v19) {
          goto LABEL_25;
        }
      }
    }
    v16 += 6;
  } while (v16 != v15);
  if (v17 != 0) {
    v12 = *v13;
    goto LABEL_22;
  }
  return GameRoutine_6c8300(a4, 0) == v11;
}

__int64 GameHr_11fe0c0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  result = a1 + 8;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  if (result != a2 + 1648) {
    result = GameRoutine_7fb7c0();
  }
  v5 = *(_DWORD*)(a2 + 1672);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 32) = v5;
  v6 = *(_QWORD*)(a2 + 1680);
  v7 = *(_QWORD*)(a2 + 1688);
  v8 = (_QWORD*)GameData_212bf68;
  v9 = v7 - v6;
  if (v7 != v6) {
    if (v9 < 0) {
      goto LABEL_10;
    }
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7 - v6, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(a1 + 48) = v10;
    *(_QWORD*)(a1 + 56) = v10 + v9;
    result = GameRoutine_1a0b950(v10, v6, v9);
    *(_QWORD*)(a1 + 48) = v11;
  }
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  v12 = *(_QWORD*)(a2 + 1704);
  v13 = *(_QWORD*)(a2 + 1712);
  v14 = v13 - v12;
  if (v13 != v12) {
    if ((v14 & 0x8000000000000000LL) == 0) {
      v15 = GameRoutine_651b90(*v8, v13 - v12, 16, 0);
      v16 = v15 + v14;
      *(_QWORD*)(a1 + 64) = v15;
      *(_QWORD*)(a1 + 72) = v15;
      *(_QWORD*)(a1 + 80) = v15 + v14;
      result = GameRoutine_1a0b950(v15, v12, v14);
      *(_QWORD*)(a1 + 72) = v16;
      goto LABEL_9;
    }
  LABEL_10:
    GameRoutine_6e3e20(result);
  }
LABEL_9:
  v17 = *(_QWORD*)(a2 + 1736);
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 1728);
  *(_QWORD*)(a1 + 96) = v17;
  *(_DWORD*)(a1 + 104) = *(char*)(a2 + 584);
  v18 = *(char*)(a2 + 585);
  *(_BYTE*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 108) = v18;
  return result;
}

#pragma GCC visibility pop
