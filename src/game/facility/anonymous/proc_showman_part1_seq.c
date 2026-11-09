#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c9718;
extern __int64 game_GameModeData_instance_;
__int64 ProcShowmanPart1Seq_Unknown18();

__int64 ProcShowmanPart1Seq_Unknown18()
{
  unsigned int v0;
  unsigned int v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  else {
    v1 = 0;
  }
  v2 = (__int64*)(GameData_21c9718 + 72 + 136LL * v1);
  v3 = *v2;
  v4 = v2[1];
  while (v3 != v4) {
    if (*(_BYTE*)(**(_QWORD**)v3 + 112LL) == 7 &&
        *(_BYTE*)(*(_QWORD*)v3 + 9LL) == 1) {
      return 0;
    }
    v3 += 8;
  }
  if (game_GameModeData_instance_ != 0) {
    v0 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = GameData_21c9718 + 72 + 136LL * v0;
  v7 = *(__int64***)v6;
  v8 = *(__int64***)(v6 + 8);
  while (v7 != v8) {
    v9 = **v7;
    v10 = *(unsigned __int8*)(v9 + 112);
    v11 = *(unsigned __int8*)(v9 + 113);
    v12 = v10 == 7 && v11 == 3;
    if (v12 && *((_BYTE*)*v7 + 9) != 4) {
      return 0;
    }
    ++v7;
  }
  return 1;
}

#pragma GCC visibility pop
