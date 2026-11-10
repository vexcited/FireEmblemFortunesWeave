#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 GameData_212bf68;

extern __int64* GameData_212d458[7];

extern __int64 GameData_21c9608;

__n128 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_da3110(long double);

void GameHr_da5c00(__int64* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v1 = *(_QWORD**)(GameData_21c9608 + 904);
  v2 = *(_QWORD**)(GameData_21c9608 + 912);
  if (v1 != v2) {
    v4 = GameData_212d458[0];
    do {
      v5 = *(_QWORD**)(*v4 + 24);
      v6 = *(_QWORD**)(*v4 + 32);
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if (*(_QWORD*)(*v5 + 264LL) == *v1) {
            break;
          }
          v5 += 2;
          if (v5 == v6) {
            goto LABEL_3;
          }
        }
        v8 = v5[1];
        if (v8 != 0) {
          v9 = v5[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v10 = GameRoutine_1a0a0c0(v9);
          *(__n128*)&v12 = GameRoutine_1a09c50(v8);
          if (v10 != 0) {
            v14 = (_QWORD*)a1[1];
            v13 = a1[2];
            if ((unsigned __int64)v14 >= v13) {
              v16 = *a1;
              v17 = (__int64)v14 - *a1;
              v18 = (v17 >> 3) + 1;
              if (v18 >> 61 != 0) {
                GameRoutine_da3110(v12);
              }
              v19 = v13 - v16;
              if (v19 >> 2 > v18) {
                v18 = v19 >> 2;
              }
              if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
                v20 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v20 = v18;
              }
              if (v20 != 0) {
                if (v20 >> 61 != 0) {
                  GameRoutine_60a210(v11);
                }
                v21 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v20,
                                         16, 0);
              }
              else {
                v21 = 0;
              }
              v22 = v21 + 8 * v20;
              v23 = v21 + v17 - 8 * (v17 >> 3);
              *(_QWORD*)(v21 + v17) = v7;
              v15 = v21 + v17 + 8;
              GameRoutine_1a0b950(v23, v16, v17);
              *a1 = v23;
              a1[2] = v22;
              if (v16 != 0) {
                v24 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v24 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v16);
              }
              v4 = GameData_212d458[0];
            }
            else {
              *v14 = v7;
              v15 = (__int64)(v14 + 1);
            }
            a1[1] = v15;
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(v10,
                                                                         v12);
              GameRoutine_1a09c50(v10);
            }
          }
        }
      }
    LABEL_3:
      ++v1;
    } while (v1 != v2);
  }
}

#pragma GCC visibility pop
