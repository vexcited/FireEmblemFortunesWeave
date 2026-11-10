#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10ecb60(long double);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_809dc0(_QWORD, _QWORD, long double);
__int64 game_GameView_Update(_QWORD);
__n128 CombatLegionManager_e2cca0(_QWORD);
__n128 GameRoutine_106e1a0(__int64);
extern _UNKNOWN* GameData_212c960;
extern __int64 GameData_21cd0d0;
extern __int64 GameData_21ec7b0;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92e0;
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure0_Invoke(__int64 a1);
__n128
game_combat_anonymous_ZoomFadeIn_Schedule_closure1_Invoke(long double a1);
void game_combat_anonymous_ZoomFadeIn_Schedule_closure2_Invoke();
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure3_Invoke(__int64 a1);

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure0_Invoke(__int64 a1)
{
  long double v1;
  __int64 result;

  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152LL))(*(_QWORD*)(a1 + 8));
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    *(float*)&v1 = *(float*)&v1 * 0.6;
    return GameRoutine_809dc0(game_ProcFadeView_instance_, GameData_212c960,
                              v1);
  }
  return result;
}

__n128 game_combat_anonymous_ZoomFadeIn_Schedule_closure1_Invoke(long double a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;

  v1 = GameRoutine_10ecb60(a1);
  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    game_GameView_Update(v1);
    if (GameData_21cd0d0 != 0) {
      v2 = *(_QWORD*)(GameData_21cd0d0 + 8);
      v3 = *(_DWORD*)(v2 + 8);
      *(_DWORD*)(v2 + 8) = v3 + 1;
      if (v3 == 0) {
        (**(void (***)(__int64))v2)(v2);
      }
    }
  }
  GameRoutine_106e1a0(GameData_21ec7b0);
  return CombatLegionManager_e2cca0(v4);
}

void game_combat_anonymous_ZoomFadeIn_Schedule_closure2_Invoke()
{
  __int64 v0;

  v0 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
    *(_DWORD*)(GameData_21ec7b0 + 168) = 0;
    *(_BYTE*)(v0 + 172) = 0;
    *(_DWORD*)(v0 + 176) = 0;
    *(_QWORD*)(v0 + 160) = 0x3E4CCCCD00000000LL;
    *(_QWORD*)(v0 + 144) = 1065353216;
    *(_QWORD*)(v0 + 152) = 0xB0000000BLL;
  }
}

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure3_Invoke(__int64 a1)
{
  float v1;
  __int64 result;

  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152LL))(*(_QWORD*)(a1 + 8));
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return GameRoutine_809ba0(v1);
  }
  return result;
}

#pragma GCC visibility pop
