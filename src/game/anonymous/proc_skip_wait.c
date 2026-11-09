#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcSkipWait_Unknown2(__int64 result);

__int64 ProcSkipWait_Unknown2(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 >=
          2) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
