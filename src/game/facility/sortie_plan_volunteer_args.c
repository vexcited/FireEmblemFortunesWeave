#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_90c6c0(_QWORD, _QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 SortiePlanVolunteerArgs_Unknown12(__int64 a1);

__int64 SortiePlanVolunteerArgs_Unknown12(__int64 a1)
{
  __int64 v1;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  if (v1 != 0) {
    v4 = result;
    result = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                                *(_QWORD*)(v1 + 112));
    if ((result & 0x80000000) == 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 8LL);
      if (v5 != 0) {
        v6 = v5 + 32LL * (unsigned int)result;
        *(_DWORD*)(a1 + 20) = *(_DWORD*)(v6 + 4);
        result = GameRoutine_90c6c0(v6, v4);
        *(_DWORD*)(a1 + 24) = *(_DWORD*)(v6 + 4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
