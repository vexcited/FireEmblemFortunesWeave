#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern __int64 GameData_21c97f0;
__int64 Resources_66bfc0(unsigned __int64* a1);

__int64 Resources_66bfc0(unsigned __int64* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(GameData_21c97f0 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c97f0 + 112) == 0) {
    return 0;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = *a1;
    if (v1 >= v2) {
      v5 = v1 % v2;
    }
  }
  else {
    v5 = v4 & v1;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c97f0 + 88) + 8 * v5);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v1) {
        if (v8[2] == v1) {
          goto LABEL_27;
        }
      }
      else if ((v10 & v4) != v5) {
        return 0;
      }
      v8 = (_QWORD*)*v8;
      result = 0;
      if (v8 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v1) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v5) {
      return 0;
    }
  LABEL_16:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (v8[2] != v1) {
    goto LABEL_16;
  }

LABEL_27:
  v11 = v8[3];
  if (v11 != 0) {
    return game_HashString(*(_QWORD*)(v11 + 32));
  }
  return 0;
}

#pragma GCC visibility pop
