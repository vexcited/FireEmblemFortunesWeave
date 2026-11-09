#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcFadeView_instance_;
__int64 FadeWaitProc_Unknown2(__int64 result);

__int64 FadeWaitProc_Unknown2(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  if (game_ProcFadeView_instance_ == 0 ||
      *(float*)((v1 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                           unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                       << 6)) +
                172) == *(float*)(v1 + 168)) {
    v2 = *(unsigned __int8**)(result + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
