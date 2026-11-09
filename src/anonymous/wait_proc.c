#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
__int64 WaitProc_Unknown2(__int64 result);

__int64 WaitProc_Unknown2(__int64 result)
{
  int v1;
  int v2;
  float v3;
  float v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    if ((v2 & v1) == 0) {
      goto LABEL_10;
    }
  }
  v3 = 60.0 / (float)*(int*)(game_g_frame_clock + 476);
  if (v3 <= 0.0) {
    v3 = 1.0;
  }
  v4 = *(float*)(result + 152) - v3;
  *(float*)(result + 152) = v4;
  if (v4 <= 0.0) {
  LABEL_10:
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
