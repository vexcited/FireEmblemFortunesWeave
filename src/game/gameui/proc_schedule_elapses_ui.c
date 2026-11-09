#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80a410(float);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_ProcScheduleElapsesUI_vtable[])();
extern __int64 GameData_2264c40;
extern __int64 game_ProcFadeView_instance_;
__int64 ProcScheduleElapsesUI_Destructor(__int64 a1);

__int64 ProcScheduleElapsesUI_Destructor(__int64 a1)
{
  char v2;

  *(_QWORD*)a1 = game_gameui_ProcScheduleElapsesUI_vtable;
  if (game_ProcFadeView_instance_ != 0) {
    v2 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 0;
    if (game_ProcFadeView_instance_ != 0) {
      GameRoutine_80a410(0.25);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 1;
        if (game_ProcFadeView_instance_ != 0) {
          GameRoutine_80a410(0.25);
          if (game_ProcFadeView_instance_ != 0) {
            *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v2;
          }
        }
      }
    }
  }
  GameData_2264c40 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
