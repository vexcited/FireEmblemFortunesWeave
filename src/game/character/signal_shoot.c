#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_820d50(void);
__int64 GameRoutine_821090(void);
__int64 GameRoutine_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 Signal_Shoot_Destructor(char a1);
__int64 Signal_Shoot_DeletingDestructor(char a1);
__int64 Signal_Shoot_Unknown2(char a1);
__int64 Signal_Shoot_Unknown3(char a1);
__int64 Signal_Shoot_Unknown4(char a1);
bool Signal_Shoot_820d00();
__int64 Signal_Shoot_821040();
__int64 Signal_Shoot_Unknown5(unsigned int a1);
__int64 Signal_Shoot_Unknown6(unsigned int a1);
__int64 Signal_Shoot_Unknown7(unsigned int a1);
__int64 Signal_Shoot_Unknown8(unsigned int a1);
__int64 Signal_Shoot_Unknown9(unsigned int a1);

__int64 Signal_Shoot_Destructor(char a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = GameRoutine_8224a0(33);
  if ((a1 & 1) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (v4 != 0) {
        return *(unsigned int*)(v4 + 32);
      }
    }
  }
  else if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (result != 0) {
      return *(unsigned int*)(result + 28);
    }
    return result;
  }
  return 10;
}

__int64 Signal_Shoot_DeletingDestructor(char a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = GameRoutine_8224a0(34);
  if ((a1 & 1) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (v4 != 0) {
        return *(unsigned int*)(v4 + 32);
      }
    }
  }
  else if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (result != 0) {
      return *(unsigned int*)(result + 28);
    }
    return result;
  }
  return 10;
}

__int64 Signal_Shoot_Unknown2(char a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = GameRoutine_8224a0(35);
  if ((a1 & 1) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (v4 != 0) {
        return *(unsigned int*)(v4 + 32);
      }
    }
  }
  else if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (result != 0) {
      return *(unsigned int*)(result + 28);
    }
    return result;
  }
  return 10;
}

__int64 Signal_Shoot_Unknown3(char a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = GameRoutine_8224a0(36);
  if ((a1 & 1) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (v4 != 0) {
        return *(unsigned int*)(v4 + 32);
      }
    }
  }
  else if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (result != 0) {
      return *(unsigned int*)(result + 28);
    }
    return result;
  }
  return 10;
}

__int64 Signal_Shoot_Unknown4(char a1)
{
  __int64 v2;
  __int64 result;

  v2 = GameRoutine_8224a0(37);
  if ((a1 & 1) != 0) {
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (result != 0) {
        return *(unsigned int*)(result + 28);
      }
      return result;
    }
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

bool Signal_Shoot_820d00()
{
  __int64 v0;
  __int64 v1;

  v0 = GameRoutine_820d50();
  return game_GameModeData_instance_ == 0 ||
         (v1 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
         *(_DWORD*)(v1 + 32) == 0;
}

__int64 Signal_Shoot_821040()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_821090();
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v0);
  if (result != 0) {
    return *(_DWORD*)(result + 32) > 0;
  }
  return result;
}

__int64 Signal_Shoot_Unknown5(unsigned int a1)
{
  __int64 v2;

  v2 = GameRoutine_8224a0(33);
  return game_VariableManager_SetFlag(v2, a1);
}

__int64 Signal_Shoot_Unknown6(unsigned int a1)
{
  __int64 v2;

  v2 = GameRoutine_8224a0(34);
  return game_VariableManager_SetFlag(v2, a1);
}

__int64 Signal_Shoot_Unknown7(unsigned int a1)
{
  __int64 v2;

  v2 = GameRoutine_8224a0(35);
  return game_VariableManager_SetFlag(v2, a1);
}

__int64 Signal_Shoot_Unknown8(unsigned int a1)
{
  __int64 v2;

  v2 = GameRoutine_8224a0(36);
  return game_VariableManager_SetFlag(v2, a1);
}

__int64 Signal_Shoot_Unknown9(unsigned int a1)
{
  __int64 v2;

  v2 = GameRoutine_8224a0(37);
  return game_VariableManager_SetFlag(v2, a1);
}

#pragma GCC visibility pop
