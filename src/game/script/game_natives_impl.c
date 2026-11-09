#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c99c8;
extern char GameData_1a9f09e;
char* GameNatives_6b2d80(unsigned int a1);

char* GameNatives_6b2d80(unsigned int a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a1 == 0) {
    return &GameData_1a9f09e;
  }
  v1 = *(_QWORD*)(GameData_21c99c8 + 136);
  if (v1 == 0 || *(_QWORD*)(GameData_21c99c8 + 152) == 0) {
    return &GameData_1a9f09e;
  }
  v3 = v1 - 1;
  if ((v1 & (v1 - 1)) != 0) {
    v4 = a1;
    if (v1 <= a1) {
      v4 = a1 % (unsigned int)v1;
    }
  }
  else {
    v4 = ((_DWORD)v1 - 1) & a1;
  }
  v5 = *(__int64***)(*(_QWORD*)(GameData_21c99c8 + 128) + 8 * v4);
  if (v5 == nullptr) {
    return &GameData_1a9f09e;
  }
  v6 = *v5;
  if (*v5 == nullptr) {
    return &GameData_1a9f09e;
  }
  if ((v1 & v3) == 0) {
    while (1) {
      v8 = v6[1];
      if (v8 == a1) {
        if (*((_DWORD*)v6 + 4) == a1) {
          goto LABEL_26;
        }
      }
      else if ((v8 & v3) != v4) {
        return &GameData_1a9f09e;
      }
      v6 = (__int64*)*v6;
      if (v6 == nullptr) {
        return &GameData_1a9f09e;
      }
    }
  }
  while (1) {
    v7 = v6[1];
    if (v7 == a1) {
      break;
    }
    if (v7 >= v1) {
      v7 %= v1;
    }
    if (v7 != v4) {
      return &GameData_1a9f09e;
    }
  LABEL_15:
    v6 = (__int64*)*v6;
    if (v6 == nullptr) {
      return &GameData_1a9f09e;
    }
  }
  if (*((_DWORD*)v6 + 4) != a1) {
    goto LABEL_15;
  }

LABEL_26:
  v9 = v6[3];
  if (v9 != 0) {
    return *(char**)(v9 + 8);
  }
  return &GameData_1a9f09e;
}

#pragma GCC visibility pop
