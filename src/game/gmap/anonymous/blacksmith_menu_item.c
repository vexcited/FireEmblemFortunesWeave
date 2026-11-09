#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1871990(_QWORD);
extern char GameData_2260e78;
extern char GameData_226b31c;
_QWORD* BlacksmithMenuItem_Unknown24(_QWORD* result);
__int64 BlacksmithMenuItem_Unknown25(__int64 a1);

_QWORD* BlacksmithMenuItem_Unknown24(_QWORD* result)
{
  if (GameData_226b31c == 1) {
    GameData_2260e78 = 1;
  }
  if (*(_QWORD**)(result[1] + 336LL) == result) {
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 64LL))(result,
                                                                       0);
  }
  return result;
}

__int64 BlacksmithMenuItem_Unknown25(__int64 a1)
{
  GameRoutine_1871990(*(_QWORD*)(a1 + 8));
  return 9;
}

#pragma GCC visibility pop
