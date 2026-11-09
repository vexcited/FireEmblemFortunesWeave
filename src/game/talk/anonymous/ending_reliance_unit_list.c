#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11de9c0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_206f0f0;
extern __int64 GameData_225d648;
extern __int64* GameData_212e008[9];
__int64 EndingRelianceUnitList_Unknown100(__int64 a1);

__int64 EndingRelianceUnitList_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 != 0 &&
      ((v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                            &GameData_206f0f0, 0)) == 0 ||
       (GameData_225d648 = *(_QWORD*)(v3 + 96), GameRoutine_11de9c0(),
        (v1 = *(_QWORD*)(a1 + 336)) != 0))) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 200LL))(v1);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
