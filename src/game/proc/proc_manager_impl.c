#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c6960;
extern __int64 GameData_21c6968;
extern __int64 GameData_21c6970;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcManager_659d40(__int64 result);

__int64 ProcManager_659d40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  char v10;
  _QWORD* v11;
  __int64 v12;

  v1 = result;
  v2 = GameData_21c6960;
  if (GameData_21c6960 != 0) {
  LABEL_2:
    v3 = *(_QWORD*)(v1 + 32);
    v12 = v2;
    if (v3 == 0) {
      goto LABEL_29;
    }
    result =
        (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v12);
    v4 = 1;
    v5 = (_QWORD*)v2;
    do {
      while (1) {
        if ((v4 & 1) == 0 || (v2 = v5[5]) == 0) {
          v2 = v5[7];
          if (v2 == 0) {
            break;
          }
        }
        v4 = 1;
        v5 = (_QWORD*)v2;
        if ((*(_WORD*)(v2 + 136) & 1) == 0) {
          goto LABEL_2;
        }
      }
      v5 = (_QWORD*)v5[4];
      v4 = 0;
    } while (v5 != nullptr);
  }
  v6 = GameData_21c6968;
  if (GameData_21c6968 != 0) {
  LABEL_11:
    v3 = *(_QWORD*)(v1 + 32);
    v12 = v6;
    if (v3 == 0) {
      goto LABEL_29;
    }
    result =
        (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v12);
    v7 = 1;
    v8 = (_QWORD*)v6;
    do {
      while (1) {
        if ((v7 & 1) == 0 || (v6 = v8[5]) == 0) {
          v6 = v8[7];
          if (v6 == 0) {
            break;
          }
        }
        v7 = 1;
        v8 = (_QWORD*)v6;
        if ((*(_WORD*)(v6 + 136) & 1) == 0) {
          goto LABEL_11;
        }
      }
      v8 = (_QWORD*)v8[4];
      v7 = 0;
    } while (v8 != nullptr);
  }
  v9 = GameData_21c6970;
  if (GameData_21c6970 == 0) {
    return result;
  }

LABEL_20:
  v3 = *(_QWORD*)(v1 + 32);
  v12 = v9;
  if (v3 == 0) {
  LABEL_29:
    GameRoutine_60a310(v3);
  }
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v12);
  v10 = 1;
  v11 = (_QWORD*)v9;
  do {
    while (1) {
      if ((v10 & 1) == 0 || (v9 = v11[5]) == 0) {
        v9 = v11[7];
        if (v9 == 0) {
          break;
        }
      }
      v10 = 1;
      v11 = (_QWORD*)v9;
      if ((*(_WORD*)(v9 + 136) & 1) == 0) {
        goto LABEL_20;
      }
    }
    v11 = (_QWORD*)v11[4];
    v10 = 0;
  } while (v11 != nullptr);
  return result;
}

#pragma GCC visibility pop
