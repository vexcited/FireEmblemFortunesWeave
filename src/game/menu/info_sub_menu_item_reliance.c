#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* RelianceUnitSelectMenu_184f060(__int64, unsigned int);
bool GameRoutine_184ef30(unsigned int);
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_map_effect_g_sequence;
__int64 InfoSubMenuItem_Reliance_Unknown25_18556c0(__int64 a1);

__int64 InfoSubMenuItem_Reliance_Unknown25_18556c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v6;
  __int64 v7;

  if (game_script_map_effect_g_sequence == 0) {
    if (GameRoutine_184ef30(1u)) {
      goto LABEL_6;
    }
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    if (GameRoutine_184ef30(3u)) {
      goto LABEL_6;
    }
    return 1;
  }
  if (!GameRoutine_184ef30(*(_DWORD*)(game_GameModeData_instance_ + 92) & 1 ^
                           3)) {
    return 1;
  }

LABEL_6:
  if (game_script_map_effect_g_sequence == 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v4 = 1;
    if (*(_QWORD*)(v6 + 152) != 0) {
      v3 = *(_QWORD*)(v6 + 152);
    }
    else {
      v3 = *(_QWORD*)(a1 + 8);
    }
    goto LABEL_22;
  }
  if (game_GameModeData_instance_ == 0) {
    v7 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v7 + 152) != 0) {
      v3 = *(_QWORD*)(v7 + 152);
    }
    else {
      v3 = *(_QWORD*)(a1 + 8);
    }
  LABEL_21:
    v4 = 3;
    goto LABEL_22;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) == 0) {
    goto LABEL_21;
  }
  v4 = 2;

LABEL_22:
  RelianceUnitSelectMenu_184f060(v3, v4);
  return 9;
}

#pragma GCC visibility pop
