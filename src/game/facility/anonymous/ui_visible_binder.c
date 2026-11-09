#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_947000(void);
extern __int64 (*GameData_2119b98[])();
extern __int64 GameData_21f1668;
extern __int64 GameData_226d110;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
_QWORD* UIVisibleBinder_Destructor(_QWORD* result);
__int64 UIVisibleBinder_Unknown4(__int64 result);
__int64 UIVisibleBinder_Unknown5(__int64 result);

_QWORD* UIVisibleBinder_Destructor(_QWORD* result)
{
  *result = GameData_2119b98;
  if ((_QWORD*)GameData_226d110 == result) {
    GameData_226d110 = 0;
  }
  return result;
}

__int64 UIVisibleBinder_Unknown4(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  unsigned int v4;

  v1 = result;
  v2 = (__int64*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    result = GameRoutine_155ea30(
        *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL);
    if ((result & 1) != 0) {
      result = *v2;
      if (*v2 != 0) {
        result = GameRoutine_17b8f40(result, 1);
      }
      *(_BYTE*)(v1 + 20) |= 2u;
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 4) {
    result = GameRoutine_155ea30(
        *(_QWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 16LL));
    if ((result & 1) != 0) {
      v3 = *(_QWORD*)(GameData_21f1668 + 8);
      GameRoutine_155e830(*(_QWORD*)(v3 + 16), 0);
      if (*v2 != 0) {
        GameRoutine_17b8f40(*v2, 1);
      }
      result = game_gameui_Footer_instance_;
      v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
      *(_DWORD*)(v3 + 5856) = v4;
      if (result != 0) {
        result = GameRoutine_1567000(result, 0);
        v4 = *(_DWORD*)(v3 + 5856);
      }
      *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
      *(_BYTE*)(v1 + 20) |= 4u;
    }
  }
  return result;
}

__int64 UIVisibleBinder_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = result;
  if ((*(_BYTE*)(result + 20) & 2) != 0) {
    *(_BYTE*)(result + 20) &= ~2u;
    result = GameRoutine_947000();
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 4 &&
      (*(_BYTE*)(v1 + 20) & 4) != 0) {
    *(_BYTE*)(v1 + 20) &= ~4u;
    v2 = *(_QWORD*)(GameData_21f1668 + 8);
    GameRoutine_155e830(*(_QWORD*)(v2 + 16), 1);
    result = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v2 + 5856) |= 0x10000u;
  }
  return result;
}

#pragma GCC visibility pop
