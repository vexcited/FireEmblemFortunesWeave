#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a360a0(_QWORD, _QWORD);
__int64 snd_BGM_isStoppingNow(void);
__int64 snd_BGM_start(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float, float);
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 CustomBGM_Unknown3(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                           float a5, float a6);
__int64 CustomBGM_Unknown3(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                           float a5, float a6)
{
  __int64 result;
  _QWORD v13[7];
  int v14;

  result = snd_BGM_isStoppingNow();
  if ((result & 1) == 0) {
    memset(&v13[1], 0, 48);
    v13[0] = a2;
    v14 = 1;
    snd_BGM_start(a1, v13, a3, a4, 0xFFFFFFFFLL, a5, a6);
    return GameManager_a360a0(*game_sound_g_game_sound_ptr[0], a2);
  }
  return result;
}

#pragma GCC visibility pop
