#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13633c0(_QWORD);

__int64 GameRoutine_155e830(_QWORD, _QWORD);

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);

__int64 GameRoutine_15621a0(_QWORD, _QWORD);

__int64 GameRoutine_1563e00(_QWORD, _QWORD);

__int64 GameRoutine_165bbf0(__int64*);

__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_56b600(_QWORD);

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
