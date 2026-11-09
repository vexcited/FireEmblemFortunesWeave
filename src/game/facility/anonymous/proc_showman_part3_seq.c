#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212c7b0[11];
extern __int64 game_GameModeData_instance_;
__int64 ProcShowmanPart3Seq_Unknown18();

__int64 ProcShowmanPart3Seq_Unknown18()
{
  unsigned int v0;
  __int64 v1;
  __int64** v2;
  __int64** v3;
  __int64 v4;
  int v5;
  int v6;
  bool v7;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v0 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v1 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v0;
  v2 = *(__int64***)(v1 + 72);
  v3 = *(__int64***)(v1 + 80);
  while (v2 != v3) {
    v4 = **v2;
    v5 = *(unsigned __int8*)(v4 + 112);
    v6 = *(unsigned __int8*)(v4 + 113);
    v7 = v5 == 7 && v6 == 4;
    if (v7 && *((_BYTE*)*v2 + 9) != 4) {
      return 0;
    }
    ++v2;
  }
  return 1;
}

#pragma GCC visibility pop
