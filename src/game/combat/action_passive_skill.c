#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10de7c0(_QWORD);
extern __int64 GameData_21ec7b0;
__int64 ActionPassiveSkill_Unknown5(__int64 result);

__int64 ActionPassiveSkill_Unknown5(__int64 result)
{
  __int64 v1;
  _DWORD* v2;
  _DWORD* v3;
  __int64 v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v11;

  v1 = *(_QWORD*)(result + 32);
  v2 = *(_DWORD**)v1;
  v3 = *(_DWORD**)(v1 + 8);
  if (*(_DWORD**)v1 == v3) {
    v9 = *(_DWORD*)(result + 16);
    if (v9 != 1 && v9 != 3) {
      if (v9 == 2) {
        v11 = 3;
      }
      else {
        v11 = 1;
      }
      *(_DWORD*)(result + 16) = v11;
    }
  }
  else if (GameData_21ec7b0 != 0 &&
           (v4 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
           (*(_BYTE*)(v4 + 113) & 0x80) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  else {
    v5 = *(_DWORD*)(result + 16);
    if (v5 != 1 && v5 != 3) {
      if (v5 == 2) {
        v7 = 3;
      }
      else {
        v7 = 1;
      }
      *(_DWORD*)(result + 16) = v7;
      v2 = *(_DWORD**)v1;
      v3 = *(_DWORD**)(v1 + 8);
    }
    if (v2 != v3) {
      v8 = *(_DWORD*)(*(_QWORD*)(result + 8) + 96LL);
      do {
        if (*v2 == v8) {
          result = GameRoutine_10de7c0(v2);
        }
        v2 += 6;
      } while (v2 != v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
