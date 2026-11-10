#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 SubEquipMenuItem_15c3520(__int64 a1);

__int64 SubEquipMenuItem_15c3520(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 208) != 0) {
    v1 = "SE_SYS_Equip";
  }
  else {
    v1 = "SE_SYS_Remove";
  }
  snd_Fade_Fade_10c830(v4, 0.0f);
  snd_play_ff2d0((void*)(&v3), v1, v1, v4, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v4);
}

#pragma GCC visibility pop
