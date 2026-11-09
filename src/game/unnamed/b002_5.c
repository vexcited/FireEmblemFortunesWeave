#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

bool GameRoutine_56eaa0(__int64, __int64, __int64);
__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_58fac0(_QWORD, _QWORD);

__int64 GameHr_56f120(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  int v16;

  v3 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v3 + 14) == 0) {
    return result;
  }
  v6 = result;
  v7 = 0;
  v8 = v3 + *(unsigned int*)(v3 + 16);
  while (1) {
    v10 = v3 + *(unsigned int*)(v8 + 4 * v7);
    v11 = *(unsigned __int8*)(v10 + 29);
    if (v11 == 2) {
      result = GameRoutine_5714e0(a3 + 176, v3 + *(unsigned int*)(v8 + 4 * v7));
      if (a2 == 0 || (result & 1) == 0) {
        goto LABEL_11;
      }
      v16 = *(unsigned __int8*)(v10 + 29);
      if (v16 == 4 || v16 == 2) {
        result = GameRoutine_58fac0(
            a2, v10 + *(unsigned int*)(v10 + 36) +
                    *(unsigned int*)(v10 + *(unsigned int*)(v10 + 36)));
        if (result == 0) {
          goto LABEL_11;
        }
      }
      else {
        result = GameRoutine_58fac0(a2, 0);
        if (result == 0) {
          goto LABEL_11;
        }
      }
      v9 = *(unsigned __int16*)(v6 + 56);
      if (v9 >= *(unsigned __int16*)(v6 + 58)) {
        return result;
      }
      goto LABEL_10;
    }
    if (v11 == 1) {
      break;
    }
    if (*(_BYTE*)(v10 + 29) == 0) {
      result = GameRoutine_5714e0(a3 + 176, v3 + *(unsigned int*)(v8 + 4 * v7));
      if ((result & 1) == 0) {
        goto LABEL_11;
      }
      v9 = *(unsigned __int16*)(v6 + 56);
      result = a2;
      if (v9 >= *(unsigned __int16*)(v6 + 58)) {
        return result;
      }
    LABEL_10:
      v12 = *(_QWORD*)(v6 + 48);
      *(_WORD*)(v6 + 56) = v9 + 1;
      v13 = (__int64*)(v12 + 16LL * v9);
      *v13 = result;
      v13[1] = v10;
    }
  LABEL_11:
    if (++v7 >= (unsigned __int64)*(unsigned __int16*)(v3 + 14)) {
      return result;
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  v14 = (unsigned __int8)result;
  if ((_BYTE)result == 0) {
    goto LABEL_11;
  }
  v15 = 0;
  while (1) {
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a3 + 88LL))(a3, v15);
    if (result != 0) {
      result = GameRoutine_5716e0(*(_QWORD*)(result + 40), v10);
      if ((result & 1) != 0) {
        result =
            (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 88LL))(a2, v15);
        if (result != 0) {
          result = GameRoutine_56eaa0(v6, result, v10);
          if ((result & 1) == 0) {
            return result;
          }
        }
      }
    }
    if (v14 == ++v15) {
      goto LABEL_11;
    }
  }
}

#pragma GCC visibility pop
