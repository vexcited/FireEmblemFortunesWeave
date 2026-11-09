#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_94c420(_QWORD);
extern __int16 GameData_221b408;
extern __int64 game_script_hub_talk_g_select_menu;
bool LessonUnitMenuItem_Unknown6(__int64 a1);
__int64 LessonUnitMenuItem_Unknown25(__int64 a1);
bool LessonUnitMenuItem_Unknown58(__int64 a1);

bool LessonUnitMenuItem_Unknown6(__int64 a1)
{
  return (unsigned int)GameRoutine_94c420(*(_QWORD*)(a1 + 88)) < 0x400000;
}

__int64 LessonUnitMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 9;
  }
  return 2;
}

bool LessonUnitMenuItem_Unknown58(__int64 a1)
{
  return (unsigned int)GameRoutine_94c420(*(_QWORD*)(a1 + 88)) == 0;
}

#pragma GCC visibility pop
