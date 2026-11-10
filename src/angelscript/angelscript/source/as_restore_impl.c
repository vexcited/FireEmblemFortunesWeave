#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1d5df0(__int64, __int64);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_212bff8;
extern __int64 (*GameData_219a968)(__int64);
__int64 asCReader_247ac0(__int64 a1, unsigned int a2, char a3, __int64 a4,
                         __int64 a5, __int64 a6);

__int64 asCReader_247ac0(__int64 a1, unsigned int a2, char a3, __int64 a4,
                         __int64 a5, __int64 a6)
{
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;

  if (a2 != 0) {
    if (a2 > 2) {
      result = ((__int64 (*)(__int64))*GameData_212bff8)(8LL * a2);
      v9 = result;
      if (result == 0) {
        goto LABEL_28;
      }
    }
    else {
      v9 = a1 + 128;
    }
    if (*(_QWORD*)(a1 + 112) != v9) {
      v11 = 8LL * a2;
      v12 = v9;
    LABEL_10:
      memset(v12, 0, v11, a4, a5, a6);
      goto LABEL_11;
    }
    v13 = *(unsigned int*)(a1 + 120);
    if ((unsigned int)v13 < a2) {
      v12 = v9 + 8 * v13;
      v11 = 8LL * (a2 + ~(_DWORD)v13) + 8;
      goto LABEL_10;
    }
  }
  else {
    v9 = 0;
  }
LABEL_11:
  result = *(_QWORD*)(a1 + 112);
  if (result != 0) {
    v14 = *(_DWORD*)(a1 + 120);
    if (result == v9) {
      if ((a3 & 1) != 0) {
        if (v14 > a2) {
          *(_DWORD*)(a1 + 120) = a2;
        }
      }
      else {
        *(_DWORD*)(a1 + 120) = 0;
      }
    }
    else {
      if ((a3 & 1) != 0) {
        if (v14 > a2) {
          *(_DWORD*)(a1 + 120) = a2;
          v14 = a2;
        }
        if (v14 != 0) {
          v15 = 0;
          do {
            *(_QWORD*)(v9 + 8 * v15) =
                *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8 * v15);
            ++v15;
          } while (v15 < *(unsigned int*)(a1 + 120));
          result = *(_QWORD*)(a1 + 112);
        }
      }
      else {
        *(_DWORD*)(a1 + 120) = 0;
      }
      if (result != a1 + 128) {
        result = GameData_219a968(result);
      }
    }
  }
  *(_QWORD*)(a1 + 112) = v9;
  *(_DWORD*)(a1 + 124) = a2;
LABEL_28:
  if ((a3 & 1) == 0) {
    result = GameRoutine_1d5df0(a1, *(_QWORD*)a1);
    *(_QWORD*)a1 = 0;
  }
  return result;
}

#pragma GCC visibility pop
