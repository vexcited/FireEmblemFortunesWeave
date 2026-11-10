#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ActionWaitAttack_10d49d0(_QWORD);
__int64 GameRoutine_1495240(void);
extern __int64 GameData_21ec7b0;
extern __int64 game_ProcGameSkipView_instance_;

void __attribute__((noreturn)) IProcFacilitySceneCombat_DeletingDestructor()
{
  __udf(0x8002u);
};
__int64 IProcFacilitySceneCombat_14951c0();

__int64 IProcFacilitySceneCombat_14951c0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;

  result = GameRoutine_1495240();
  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v1 != 0 && (*(_BYTE*)(v1 + 113) & 8) != 0 &&
        game_ProcGameSkipView_instance_ != 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0) {
      result = ActionWaitAttack_10d49d0(result);
      if ((result & 1) != 0) {
        v2 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
          *(_DWORD*)(v2 + 156) &= ~2u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
