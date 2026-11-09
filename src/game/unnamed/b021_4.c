#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c880[5];

__int64 GameRoutine_13633c0(_QWORD);

__int64 GameRoutine_155e830(_QWORD, _QWORD);

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_15621a0(_QWORD, _QWORD);

__int64 GameRoutine_1563e00(_QWORD, _QWORD);

__int64 GameRoutine_157b780(_QWORD);

__int64 GameRoutine_1583e80(_QWORD, _QWORD);

__int64 GameRoutine_1605f00(__int64);

__int64 GameRoutine_16061b0(__int64, __int64);

_QWORD* GameRoutine_1606250(_QWORD* result);

__int64 GameRoutine_165bbf0(__int64*);

__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_56b600(_QWORD);

_QWORD* GameHr_16115c0(__int64 a1, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1336);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = GameRoutine_1a0a0c0(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        GameRoutine_1a09c50(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD* GameHr_1611770(__int64 a1, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1312);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = GameRoutine_1a0a0c0(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        GameRoutine_1a09c50(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD* GameHr_1611920(_QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 <= 2) {
    v4 = result[2];
    *v2 = v3 + 1;
    v6 = *(_QWORD*)(v4 + 8 * v3 + 1960);
    v7 = *(_QWORD*)(v4 + 1064);
    GameRoutine_1605f00(v6);
    v8 = *(_QWORD*)(v6 + 16);
    if (v8 != 0) {
      v9 = GameRoutine_1a0a0c0(v8);
      if (v9 != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 8);
        if (v11 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          GameRoutine_1a09c50(v10);
        }
      }
    }
    *(_QWORD*)(v6 + 32) = v7;
    *(_DWORD*)(v6 + 24) = 3;
    v12 = *a2;
    *(_BYTE*)(v6 + 64) = 0;
    *(_DWORD*)(v6 + 60) = v12;
    return GameRoutine_1606250((_QWORD*)v6);
  }
  return result;
}

_QWORD* GameHr_1611ae0(_QWORD* result, int* a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  int* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  if (*(int*)result[1] <= 6) {
    v2 = result[2];
    v4 = result;
    v5 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v6 = (int*)v4[1];
    v7 = v5 ^ 1;
    v8 = *v6;
    *v6 = v8 + 1;
    v9 = *(_QWORD*)(v2 + 8 * v8 + 1376);
    v10 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v9);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      v12 = GameRoutine_1a0a0c0(v11);
      if (v12 != 0) {
        v13 = v12;
        v14 = *(_QWORD*)(v9 + 8);
        if (v14 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 40LL))(v14, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          GameRoutine_1a09c50(v13);
        }
      }
    }
    *(_QWORD*)(v9 + 32) = v10;
    *(_DWORD*)(v9 + 24) = 4;
    v15 = *a2;
    *(_BYTE*)(v9 + 64) = v7 & 1;
    *(_DWORD*)(v9 + 60) = v15;
    return GameRoutine_1606250((_QWORD*)v9);
  }
  return result;
}

_QWORD* GameHr_1611ce0(_QWORD* result, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v8;
  int* v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v2 = result[3];
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v5 = *(_QWORD*)(v4 + 1456);
  if (((v3 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v4 + 1464) - v5) >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) != 0 &&
      *(int*)result[1] <= 6) {
    v6 = result;
    v8 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v9 = (int*)v6[1];
    v10 = v6;
    v11 = v8 ^ 1;
    v12 = *v9;
    *v9 = v12 + 1;
    v13 = *(_QWORD*)(v2 + 8 * v12 + 1376);
    v14 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v13);
    v15 = *(_QWORD*)(v13 + 16);
    if (v15 != 0) {
      v16 = GameRoutine_1a0a0c0(v15);
      if (v16 != 0) {
        v17 = v16;
        v18 = *(_QWORD*)(v13 + 8);
        if (v18 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 40LL))(v18, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          GameRoutine_1a09c50(v17);
        }
      }
    }
    *(_QWORD*)(v13 + 32) = v14;
    *(_DWORD*)(v13 + 24) = 4;
    v19 = *a2;
    *(_BYTE*)(v13 + 64) = v11 & 1;
    *(_DWORD*)(v13 + 60) = v19;
    result = GameRoutine_1606250((_QWORD*)v13);
    ++*(_DWORD*)v10[2];
  }
  return result;
}

_QWORD* GameHr_1612020(_QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 > 2) {
    return result;
  }
  v4 = result[2];
  *v2 = v3 + 1;
  v6 = *(_QWORD*)(v4 + 1064);
  v7 = *(_QWORD*)(v4 + 8 * v3 + 1824);
  GameRoutine_1605f00(v7);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 != 0) {
    v9 = GameRoutine_1a0a0c0(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v7 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        GameRoutine_1a09c50(v10);
      }
    }
  }
  *(_QWORD*)(v7 + 32) = v6;
  *(_DWORD*)(v7 + 24) = 7;
  v12 = *a2;
  *(_DWORD*)(v7 + 60) = *a2;
  v13 = GameData_212c880[0];
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (v12 & 0xFFF)) +
                   592LL);
  if (v14 != 0) {
    GameRoutine_1583e80(v6, v14);
    GameRoutine_1606250((_QWORD*)v7);
  }
  else {
    GameRoutine_16061b0(v7, (__int64)"MID_Sys_Empty");
  }
  v15 = *(_QWORD*)(v4 + 1064);
  v16 = *(_QWORD*)(v4 + 8 * v3 + 1848);
  GameRoutine_1605f00(v16);
  v17 = *(_QWORD*)(v16 + 16);
  if (v17 != 0) {
    v18 = GameRoutine_1a0a0c0(v17);
    if (v18 != 0) {
      v19 = v18;
      v20 = *(_QWORD*)(v16 + 8);
      if (v20 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 40LL))(v20, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        GameRoutine_1a09c50(v19);
      }
    }
  }
  *(_QWORD*)(v16 + 32) = v15;
  v21 = *v13;
  *(_DWORD*)(v16 + 24) = 8;
  v22 = *a2;
  *(_DWORD*)(v16 + 60) = *a2;
  v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v22 & 0xFFF)) +
                   592LL);
  if (v23 != 0) {
    if (*(_WORD*)(v23 + 128) != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v23 + 136) + 8LL);
      GameRoutine_1583e80(v15, v23);
      if (v24 != 0) {
        GameRoutine_1606250((_QWORD*)v16);
        goto LABEL_23;
      }
    }
    else {
      GameRoutine_1583e80(v15, v23);
    }
  }
  GameRoutine_16061b0(v16, (__int64)"MID_Sys_Empty");
LABEL_23:
  v25 = *(_QWORD*)(v4 + 1064);
  v26 = *(_QWORD*)(v4 + 8 * v3 + 1872);
  GameRoutine_1605f00(v26);
  v27 = *(_QWORD*)(v26 + 16);
  if (v27 != 0) {
    v28 = GameRoutine_1a0a0c0(v27);
    if (v28 != 0) {
      v29 = v28;
      v30 = *(_QWORD*)(v26 + 8);
      if (v30 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 40LL))(v30, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        GameRoutine_1a09c50(v29);
      }
    }
  }
  *(_QWORD*)(v26 + 32) = v25;
  v31 = *v13;
  *(_DWORD*)(v26 + 24) = 9;
  v32 = *a2;
  *(_DWORD*)(v26 + 60) = *a2;
  v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v32 & 0xFFF)) +
                   592LL);
  if (v33 != 0 && (*(_WORD*)GameRoutine_1583e80(v25, v33) & 0xFFF) != 0) {
    return GameRoutine_1606250((_QWORD*)v26);
  }
  else {
    return (_QWORD*)GameRoutine_16061b0(v26, (__int64)"MID_Sys_Empty");
  }
}

__int64 GameHr_165c540(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[2];
  _QWORD* v19;
  __int64 v20;
  _BYTE v21[4];
  _DWORD v22[2];

  GameRoutine_1560070(&v19, *(_QWORD*)(a1 + 8), "L_Festival");
  result = v20;
  if (v20 != 0) {
    v5 = GameRoutine_1a0a0c0(v20);
    v6 = v19;
    result = v20;
    if (v5 != 0) {
      v7 = (__int64)v19;
    }
    else {
      v7 = 0;
    }
    if (v20 != 0) {
      result = GameRoutine_1a09c50(v20);
    }
    if (v7 != 0) {
      result = GameRoutine_155e830(v6, a2 & 1);
      if ((a2 & 1) != 0 && (*(_BYTE*)(a1 + 80) & 1) == 0) {
        v8 = GameRoutine_15621a0(v6, "T_Txt");
        if (v8 != 0) {
          v9 = v8;
          v10 = GameRoutine_15621a0(v6, "T_Txt");
          if (v10 != 0) {
            GameRoutine_190a0c0(&v19, v22, v21, v10, *(_QWORD*)(v10 + 216));
            v11 = v22[0];
            v12 = v22[1];
          }
          else {
            v11 = 0;
            v12 = 0;
          }
          v13 = *(_BYTE*)(v9 + 88);
          *(_DWORD*)(v9 + 80) = v11;
          *(_DWORD*)(v9 + 84) = v12;
          *(_BYTE*)(v9 + 88) = v13 | 0x10;
        }
        v14 = GameRoutine_1563e00(v6, "A_Txt");
        if (v14 != 0) {
          GameRoutine_56b600(v14);
          v15 = v6[1];
          if (v15 != 0) {
            v16 = GameRoutine_1a0a0c0(v15);
            if (v16 != 0) {
              v17 = v16;
              if (*v6 != 0) {
                GameRoutine_13633c0(*v6);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
                GameRoutine_1a09c50(v17);
              }
            }
          }
        }
        v18[0] = v7;
        v18[1] = v5;
        if (v5 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_165bbf0(v18);
          result = GameRoutine_1a09c50(v5);
        }
        else {
          result = GameRoutine_165bbf0(v18);
        }
        *(_BYTE*)(a1 + 80) = 1;
      }
    }
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return GameRoutine_1a09c50(v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
