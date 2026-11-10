#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_SkillMask_EachSkill_lambda0_Invoke(__int64 a1, int* a2,
                                                __int64 a3);

__int64 game_SkillMask_EachSkill_lambda0_Invoke(__int64 a1, int* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v6;

  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * *a2);
  if (v3 != 0) {
    LODWORD(v3) = *(_WORD*)(v3 + 16) & 0xFFF;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  v6 = v3;
  if (v4 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v4 + 48LL))(v4, &v6);
}

#pragma GCC visibility pop
