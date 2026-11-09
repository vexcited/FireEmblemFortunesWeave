#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173bc80(__int64, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20b7100;
extern __int64* GameData_212e030[4];
__int64 ChangeRestartPageItem_Unknown25(_QWORD* a1);

__int64 ChangeRestartPageItem_Unknown25(_QWORD* a1)
{
  __int64 v2;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 328LL))(a1, 0);
  v2 = __dynamic_cast(a1[1], GameData_212e030[0], &GameData_20b7100, 0);
  GameRoutine_173bc80(v2, 1);
  return 13;
}

#pragma GCC visibility pop
