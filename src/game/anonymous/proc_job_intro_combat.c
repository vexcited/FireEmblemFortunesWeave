#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10d49d0(_QWORD);
__int64 GameRoutine_1495240(void);
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21fa488;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcJobIntroCombat_Unknown3();

__int64 ProcJobIntroCombat_Unknown3()
{
  int v0;
  int v1;
  __int64 result;
  __int64 v3;
  __int64 v4;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 >
          2 ||
      (((v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v1 = 2)
           : (v1 = 3),
       (v1 & v0) != 0)) {
    if ((((__int64 (*)(void))GameRoutine_10d49d0)() & 1) != 0 &&
        GameData_21fa488 != 0) {
      *(_BYTE*)(GameData_21fa488 + 204) = 1;
    }
  }
  result = GameRoutine_1495240();
  if (GameData_21ec7b0 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v3 != 0 && (*(_BYTE*)(v3 + 113) & 8) != 0 &&
        game_ProcGameSkipView_instance_ != 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0) {
      result = GameRoutine_10d49d0(result);
      if ((result & 1) != 0) {
        v4 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
          *(_DWORD*)(v4 + 156) &= ~2u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
