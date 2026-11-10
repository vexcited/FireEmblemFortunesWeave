#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
__int64 ProcGmapSelectMove_Unknown9();
__int64 GameRoutine_120dd60(_QWORD);
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64* GameData_212d708;
__int64 game_gmap_ProcGmapSelectMove_SelectRouteTick_closure_Invoke(__int64 a1);
__int64 game_gmap_ProcGmapSelectMove_SelectRouteTick_closure0_Invoke();

__int64 game_gmap_ProcGmapSelectMove_SelectRouteTick_closure_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_120dd60(a1);
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 4;
  v2 = *(unsigned __int8**)(v1 + 16);
  if (v2 != nullptr) {
    v3 = *v2;
    v4 = v3 > 0x10;
    v5 = (1 << v3) & 0x1CE00;
    if (!v4 && v5 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  v7 = *(_QWORD*)(GameData_21c96e8 + 8);
  v8 = *(_DWORD*)(v7 + 56);
  v9 = *(__int64**)(v7 + 8);
  if (v8 < 0) {
    while (1) {
      v10 = *v9;
      if (*(_QWORD*)(*v9 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
        break;
      }
      ++v9;
    }
  }
  else {
    v12 = *v9;
    v11 = v9 + 1;
    v10 = v12;
    if (*(_DWORD*)(v12 + 84) != v8) {
      do {
        v13 = *v11++;
        v10 = v13;
      } while (*(_DWORD*)(v13 + 84) != v8);
    }
  }
  *(_QWORD*)(v10 + 16) = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
  return 2;
}

__int64 game_gmap_ProcGmapSelectMove_SelectRouteTick_closure0_Invoke()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = (_QWORD*)*v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && v4[69] == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = (_QWORD*)v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = (_QWORD*)v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  v4[4] = v4[3];
  return 3;
}

__int64 ProcGmapSelectMove_Unknown9()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

#pragma GCC visibility pop
