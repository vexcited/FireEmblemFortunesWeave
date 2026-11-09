#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173bc80(__int64, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20b7100;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64* GameData_212e030[4];
__int64 RestartCheckpointMenuItem_Unknown3(__int64 a1);
__int64 RestartCheckpointMenuItem_Unknown26(_QWORD* a1);
__int64 RestartCheckpointMenuItem_Unknown73(__int64 a1);
bool RestartCheckpointMenuItem_Unknown74(__int64 a1);

__int64 RestartCheckpointMenuItem_Unknown3(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    return *(_QWORD*)(a1 + 160);
  }
  else {
    return a1 + 145;
  }
}

__int64 RestartCheckpointMenuItem_Unknown26(_QWORD* a1)
{
  __int64 v2;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 592LL))(a1) != 1) {
    return 0;
  }
  (*(void (**)(_QWORD*))(*a1 + 352LL))(a1);
  v2 = __dynamic_cast(a1[1], GameData_212e030[0], &GameData_20b7100, 0);
  GameRoutine_173bc80(v2, 0);
  return 13;
}

__int64 RestartCheckpointMenuItem_Unknown73(__int64 a1)
{
  unsigned __int64 v1;

  v1 = *(unsigned int*)(a1 + 168);
  if (v1 >= 6) {
    return 9;
  }
  else {
    return (unsigned int)(0x50304070909uLL >> (8 * (unsigned __int8)v1));
  }
}

bool RestartCheckpointMenuItem_Unknown74(__int64 a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  __int64 v7;
  __int64 v8;

  if ((unsigned int)(*(_DWORD*)(a1 + 168) - 3) <= 2) {
    v1 = *(_DWORD*)(a1 + 172);
    v2 = *(_DWORD*)(game_GameRestartData_unknown_ + 1388);
    v3 = v2 != 0;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 2124) != 0) {
      if (v1 == 1) {
        goto LABEL_7;
      }
      if (v1 == 0) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_14;
        }
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        LABEL_7:
          if (v2 != 0) {
            v3 = 2;
          }
          else {
            v3 = 1;
          }
        }
      }
    }
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 0) {
        ++v3;
      }
      if (v1 == 0) {
        v6 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if ((unsigned int)(v6 - 2) < 2) {
          v4 = *(_DWORD*)(game_GameRestartData_unknown_ + 1756) != 0;
          return (unsigned int)(v3 + v4) > 1;
        }
        if (v6 == 1) {
          v7 = *(_QWORD*)(game_GameModeData_instance_ + 24);
          if (v7 != 0) {
            v8 = *(_QWORD*)(game_GameModeData_instance_ + 24);
            do {
              v8 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8LL);
              if (v8 == 0 || *(unsigned __int8*)(v8 + 89) !=
                                 *(unsigned __int8*)(v7 + 89)) {
                LOBYTE(v6) = 0;
                goto LABEL_29;
              }
            } while (*(_BYTE*)(v8 + 33) != 17);
            LOBYTE(v6) =
                (*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x202) == 0 &&
                (*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x80) == 0;
          }
        LABEL_29:
          v4 = (v7 != 0) & (unsigned __int8)v6;
          return (unsigned int)(v3 + v4) > 1;
        }
      }
    }
  LABEL_14:
    v4 = 0;
    return (unsigned int)(v3 + v4) > 1;
  }
  return false;
}

#pragma GCC visibility pop
