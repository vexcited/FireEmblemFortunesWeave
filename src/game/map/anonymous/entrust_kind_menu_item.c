#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_828dc0(__int64, __int64, int);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab7db8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21cf830;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern char GameData_1a9f09e;
extern int GameData_1b4a3f0[];
char* EntrustKindMenuItem_Unknown3(__int64 a1);
__int64 EntrustKindMenuItem_Unknown25(__int64 a1, __int64 a2);

char* EntrustKindMenuItem_Unknown3(__int64 a1)
{
  if ((unsigned __int8)(*(_BYTE*)(a1 + 144) - 1) > 3u) {
    return &GameData_1a9f09e;
  }
  else {
    return (char*)GameData_1b4a3f0 +
           GameData_1b4a3f0[(unsigned __int8)(*(_BYTE*)(a1 + 144) - 1)];
  }
}

__int64 EntrustKindMenuItem_Unknown25(__int64 a1, __int64 a2)
{
  _QWORD v3[2];

  *(_BYTE*)(GameData_21ca2f8 + 25) = *(_BYTE*)(a1 + 144);
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 28;
  }
  if (game_script_map_effect_g_sequence != 0) {
    *(_DWORD*)(game_script_map_effect_g_sequence + 152) = 5;
  }
  v3[1] = &GameData_1ab7db8;
  v3[0] = game_HashString(&GameData_1ab7db8, a2);
  if (game_GameModeData_instance_ != 0) {
    GameRoutine_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                       (__int64)v3, 1);
  }
  return 7;
}

#pragma GCC visibility pop
