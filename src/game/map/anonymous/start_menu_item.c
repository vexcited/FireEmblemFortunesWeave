#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_871660(__int64, __int64);
extern __int64 GameData_21ca310;
_QWORD* StartMenuItem_Unknown24(_QWORD* result);
__int64 StartMenuItem_Unknown25(__int64 a1);

_QWORD* StartMenuItem_Unknown24(_QWORD* result)
{
  _QWORD* v1;

  v1 = result;
  if (*(_QWORD**)(result[1] + 336LL) == result) {
    result =
        (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 64LL))(result, 0);
  }
  *((_BYTE*)v1 + 82) =
      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL) != 0;
  return result;
}

__int64 StartMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[32];
  _BYTE* v6;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v6 = nullptr;
  v2 = GameRoutine_871660(v1, (__int64)v5);
  if (v6 == v5) {
    v3 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_7;
    }
    v3 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v6 + v3))((void*)v6);

LABEL_7:
  if (v2 != 0) {
    return 12;
  }
  return 1;
}

#pragma GCC visibility pop
