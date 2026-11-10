#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a04e0(__int64*, float*, float*, __int64);
extern __int64 (*GameData_200dee8[])();
extern __int64 (*GameData_200df68[])();
__int64 DirectOut_Unknown18(__int64* a1);
__int64 GameRoutine_758bc0(_QWORD, float);
__int64 GameRoutine_7a96a0(double);
__int64 GameRoutine_809ba0(float);
__int64 game_GameView_Update(_QWORD);
__n128 CombatLegionManager_e2cca0(_QWORD);
extern __int64 GameData_21c96a8;
extern __int64 GameData_21cd0d0;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92e0;
float DirectOut_Unknown19() { return 0.2; };
__int64 game_combat_transition_DirectOut_Schedule_closure_Invoke(__int64 a1);

__int64 DirectOut_Unknown18(__int64* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  int v11;
  float v12;

  v10 = v9;
  v9[0] = GameData_200dee8;
  v11 = -1082130432;
  v12 = 0.0;
  v2 = (_QWORD*)a1[20];
  if ((unsigned __int64)v2 >= a1[21]) {
    v3 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v2[2] = GameData_200dee8;
    v3 = v2 + 8;
    v2[6] = v2 + 2;
    *v2 = 0xBF80000000000000LL;
  }
  v4 = v10;
  a1[20] = (__int64)v3;
  if (v4 == v9) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(_QWORD*))(*v4 + v5))(v4);
  v3 = (_QWORD*)a1[20];

LABEL_9:
  v10 = v9;
  v9[0] = GameData_200df68;
  v11 = -1082130432;
  v12 = 1.0;
  if ((unsigned __int64)v3 >= a1[21]) {
    v6 = GameRoutine_10a04e0(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v3[2] = GameData_200df68;
    v3[6] = v3 + 2;
    *v3 = 0xBF8000003F800000LL;
    v6 = (__int64)(v3 + 8);
  }
  a1[20] = v6;
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v10 + v8))(v10);
}

__int64 game_combat_transition_DirectOut_Schedule_closure_Invoke(__int64 a1)
{
  _DWORD* v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  char v6;

  if (GameData_21d92e0 != 1) {
    GameData_21d92e0 = 1;
    game_GameView_Update(a1);
    if (GameData_21cd0d0 != 0) {
      v1 = *(_DWORD**)(GameData_21cd0d0 + 8);
      v2 = v1[2] - 1;
      v1[2] = v2;
      if (v2 == 0) {
        (*(void (**)(_DWORD*))(*(_QWORD*)v1 + 8LL))(v1);
      }
    }
  }
  v3 = GameRoutine_7a96a0(0.0f);
  v4 = GameRoutine_758bc0(v3, 0.0f);
  if (GameData_21c96a8 != 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = 0;
  }
  CombatLegionManager_e2cca0(v4);
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    result = GameRoutine_809ba0(0.2f);
    if (game_ProcFadeView_instance_ != 0) {
      v6 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
      *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
      result = game_ProcFadeView_instance_;
      if (game_ProcFadeView_instance_ != 0) {
        result = GameRoutine_809ba0(0.2f);
        if (game_ProcFadeView_instance_ != 0) {
          *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v6;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
