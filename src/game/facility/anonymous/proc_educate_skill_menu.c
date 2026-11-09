#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_209b890;
extern __int64* GameData_212e008[9];
__int64 ProcEducateSkillMenu_Unknown88(__int64 a1);

__int64 ProcEducateSkillMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_209b890, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v4, a1 + 848, "L_InfoDetail_Before");
      GameRoutine_15d2f60(&v4, v3 + 96, *(_QWORD*)(v3 + 88), 0);
      result = v5;
      if (v5 != 0) {
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
