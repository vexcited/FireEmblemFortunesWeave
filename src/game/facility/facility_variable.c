#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1472240(void);
__int64 GameRoutine_159ae00(void);
__int64 GameVariable_826e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_20417b0[])();
extern __int64 GameData_22491f8;
extern __int64 GameData_2249208;
extern __int64 GameData_2249218;
extern __int64 GameData_2249228;
extern __int64 GameData_2249238;
extern __int64 GameData_2249248;
extern __int64 GameData_2249258;
extern __int64 GameData_2249278;
extern __int64 GameData_2249288;
extern __int64 GameData_2249298;
extern __int64 GameData_22492a8;
extern __int64 GameData_22492b8;
extern __int64 GameData_22492c8;
extern __int64 GameData_22492d8;
extern __int64 GameData_22492e8;
extern __int64 GameData_22492f8;
extern __int64 GameData_2249308;
extern __int64 GameData_2249378;
extern __int64 GameData_22493a0;
extern __int64 GameData_22493c8;
extern __int64 GameData_22493f0;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(void);
void game_facility_FacilityVariable_EntryState();
__int64 FacilityVariable_1472320();
__int64 FacilityVariable_1472830(__int64 result);

void game_facility_FacilityVariable_EntryState()
{
  __int64 v0;
  __int64 v1;
  _QWORD v2[4];
  _QWORD* v3;

  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameModeData_instance_ + 40;
    GameRoutine_1472240();
    v3 = v2;
    GameVariable_826e40(v0, 9, &GameData_2249378, 0, 0, 0, 0xFFFFFFFFLL, 2,
                        GameData_20417b0, v0);
    if (v3 == nullptr ||
        ((*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493a0),
         v3 == nullptr) ||
        ((*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493c8),
         v3 == nullptr)) {
      GameRoutine_60a310();
    }
    (*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493f0);
    if (v3 == v2) {
      v1 = 32;
    }
    else {
      if (v3 == nullptr) {
        return;
      }
      v1 = 40;
    }
    (*(void (**)(void))(*v3 + v1))();
  }
}

__int64 FacilityVariable_1472320()
{
  char v0;

  v0 = GameRoutine_159ae00();
  game_VariableManager_SetFlag(&GameData_22491f8, v0 & 1);
  game_VariableManager_SetFlag(&GameData_2249208, 0);
  game_VariableManager_SetFlag(&GameData_2249218, 0);
  game_VariableManager_SetFlag(&GameData_2249228, 0);
  game_VariableManager_SetFlag(&GameData_2249238, 0);
  game_VariableManager_SetFlag(&GameData_2249248, 0);
  game_VariableManager_SetFlag(&GameData_2249258, 0);
  game_VariableManager_SetFlag(&GameData_22492a8, 0);
  game_VariableManager_SetFlag(&GameData_22492b8, 0);
  game_VariableManager_SetFlag(&GameData_22492c8, 0);
  game_VariableManager_SetFlag(&GameData_22492d8, 0);
  game_VariableManager_SetFlag(&GameData_22492e8, 0);
  game_VariableManager_SetFlag(&GameData_22492f8, 0);
  return game_VariableManager_SetFlag(&GameData_2249308, 0);
}

__int64 FacilityVariable_1472830(__int64 result)
{
  int v1;
  __int64 v2;

  if ((int)result >= 1) {
    if (game_GameModeData_instance_ == 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
    GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                        &GameData_2249278, (unsigned int)result);
    if (game_GameModeData_instance_ == 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_2249278);
    if (result != 0) {
      v1 = *(_DWORD*)(result + 32);
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
      LABEL_10:
        if (v1 < (int)v2) {
          return result;
        }
        return game_VariableManager_SetFlag(&GameData_2249298, 1);
      }
    }
    else {
      v1 = 0;
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_10;
      }
    }
    result =
        game_GameVariableTable_Find(*(_QWORD*)(v2 + 48), &GameData_2249288);
    if (result != 0) {
      LODWORD(v2) = *(_DWORD*)(result + 32);
      goto LABEL_10;
    }
    if (v1 >= 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
