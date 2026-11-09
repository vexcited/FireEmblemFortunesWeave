#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

bool GameRoutine_56eaa0(__int64, __int64, __int64);
__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_57b5c0(_QWORD);
__int64 GameRoutine_58fac0(void);

__int64 GameHr_56ee80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;

  v2 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v2 + 14) != 0) {
    v3 = a2 + 24;
    v5 = result;
    v6 = 0;
    v7 = v2 + *(unsigned int*)(v2 + 16);
    do {
      v8 = v2 + *(unsigned int*)(v7 + 4 * v6);
      v9 = *(unsigned __int8*)(v8 + 29);
      if (v9 > 2) {
        if (v9 - 3 <= 1) {
        LABEL_14:
          v11 = *(_QWORD*)(a2 + 32);
          if (v11 != v3) {
            while (1) {
              result = GameRoutine_5714e0(v8, *(_QWORD*)(v11 + 16) + 176LL);
              if ((result & 1) != 0) {
                break;
              }
              v11 = *(_QWORD*)(v11 + 8);
              if (v11 == v3) {
                goto LABEL_4;
              }
            }
            v13 = *(_QWORD*)(v11 + 16);
            if (v13 != 0) {
              v14 = *(unsigned __int16*)(v5 + 56);
              if ((unsigned int)v14 < *(unsigned __int16*)(v5 + 58)) {
                v15 = *(_QWORD*)(v5 + 48);
                *(_WORD*)(v5 + 56) = v14 + 1;
                v16 = (_QWORD*)(v15 + 16 * v14);
                *v16 = v13;
                v16[1] = v8;
              }
            }
          }
        }
      }
      else {
        if (*(_BYTE*)(v8 + 29) == 0) {
          goto LABEL_14;
        }
        if (v9 == 1) {
          v12 = *(_QWORD*)(a2 + 32);
          if (v12 != v3) {
            while (1) {
              result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
                  **(_QWORD**)(v12 + 16) + 136LL))(*(_QWORD*)(v12 + 16), v8, 0);
              if (result != 0) {
                break;
              }
              v12 = *(_QWORD*)(v12 + 8);
              if (v12 == v3) {
                goto LABEL_4;
              }
            }
            result = GameRoutine_56eaa0(v5, result, v8);
          }
          goto LABEL_4;
        }
        if (v9 == 2) {
          v10 = *(_QWORD*)(a2 + 32);
          if (v10 != v3) {
            while (1) {
              result = GameRoutine_5714e0(v8, *(_QWORD*)(v10 + 16) + 176LL);
              if ((result & 1) != 0) {
                break;
              }
              v10 = *(_QWORD*)(v10 + 8);
              if (v10 == v3) {
                goto LABEL_4;
              }
            }
            result = *(_QWORD*)(v10 + 16);
            if (result != 0) {
              v17 = *(unsigned __int8*)(v8 + 29);
              if (v17 != 4 && v17 != 2) {
                result = GameRoutine_58fac0();
                if (result == 0) {
                  goto LABEL_4;
                }
              LABEL_34:
                v19 = *(unsigned __int16*)(v5 + 56);
                if ((unsigned int)v19 < *(unsigned __int16*)(v5 + 58)) {
                  v20 = *(_QWORD*)(v5 + 48);
                  *(_WORD*)(v5 + 56) = v19 + 1;
                  v21 = (__int64*)(v20 + 16 * v19);
                  *v21 = result;
                  v21[1] = v8;
                }
                goto LABEL_4;
              }
              result = GameRoutine_58fac0();
              if (result != 0) {
                goto LABEL_34;
              }
            }
          }
        }
      }
    LABEL_4:
      ++v6;
    } while (v6 < *(unsigned __int16*)(v2 + 14));
  }
  return result;
}

__int64 GameHr_571340(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int8 v14;
  unsigned int v15;
  _QWORD* v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  __int64 v20;

  v9 = GameRoutine_57b5c0(a3);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v9 + 72LL))(v9, a2, a5, *(_QWORD*)(a1 + 8),
                            *(unsigned __int16*)(a1 + 112));
  v10 = *(_QWORD*)(a1 + 32);
  if (v10 != 0) {
    v11 = *(unsigned __int16*)(v9 + 56);
    if ((unsigned int)v11 < *(unsigned __int16*)(v9 + 58)) {
      v12 = *(_QWORD*)(v9 + 48);
      *(_WORD*)(v9 + 56) = v11 + 1;
      v13 = (_QWORD*)(v12 + 16 * v11);
      *v13 = a4;
      v13[1] = v10;
    }
  }
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 80LL))(a4);
  if (v14 >= (unsigned int)*(unsigned __int8*)(a1 + 114)) {
    v15 = *(unsigned __int8*)(a1 + 114);
  }
  else {
    v15 = v14;
  }
  if (v15 != 0) {
    v16 = (_QWORD*)(a1 + 40);
    v17 = 1;
    v18 = 0;
    v19 = 0;
    if (*v16 == 0) {
      goto LABEL_10;
    }
  LABEL_9:
    v20 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a4 + 88LL))(
        a4, (unsigned int)v19);
    if (GameRoutine_56eaa0(v9, v20, v16[v19])) {
    LABEL_10:
      while (v17 < v15) {
        ++v18;
        v19 = v17++;
        if (v16[(unsigned int)v19] != 0) {
          goto LABEL_9;
        }
      }
    }
  }
  return v9;
}

#pragma GCC visibility pop
