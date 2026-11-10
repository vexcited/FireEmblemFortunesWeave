#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(void);
extern _UNKNOWN GameData_1ad7c10;
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_GameModeData_instance_;
__int64 game_gmap_anonymous_RecruitItem_ACall_closure_Invoke();

__int64 game_gmap_anonymous_RecruitItem_ACall_closure_Invoke()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD v10[2];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  if ((*(_WORD*)(v4 + 544) & 0x80) == 0) {
    v10[1] = &GameData_1ad7c10;
    v10[0] = game_HashString();
    if (game_GameModeData_instance_ != 0) {
      GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v10, 1);
    }
  }
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 16;
  }
  else {
    v7 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 16;
      v8 = 5;
    }
    else {
      v7 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 16;
      v8 = 12;
    }
    *(_DWORD*)(v7 + 152) = v8;
  }
  return 4;
}

#pragma GCC visibility pop
