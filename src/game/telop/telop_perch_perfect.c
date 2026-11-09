#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_174e4e0(__int64, int);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopPerchPerfect_Unknown43(__int64 a1);

__int64 TelopPerchPerfect_Unknown43(__int64 a1)
{
  float v1;
  float v2;
  char v4;
  float v5;
  float v6;

  v1 = *(float*)(a1 + 328);
  v2 = *(float*)(a1 + 420);
  if (v2 < v1) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v2 + v5;
    if (v1 >= v6) {
      v1 = v6;
    }
    *(float*)(a1 + 420) = v1;
  }
  else if ((snd_fnd_WeakHandle_isValid(a1 + 424) & 1) != 0) {
    v4 = 0;
  }
  else {
    v4 = GameRoutine_174e4e0(a1 + 832, 1) ^ 1;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
