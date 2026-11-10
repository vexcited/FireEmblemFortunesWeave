#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Slot_135980(_QWORD, _QWORD, long double);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern int GameData_21ec578;
struct PseudoSret snd_findSlot_100a50(_QWORD);
__int64 ProcKeyWait_Unknown5();

__int64 ProcKeyWait_Unknown5()
{
  __int64 result;
  long double v1;
  __int64 v2;
  long double v3;
  _BYTE v4[200];
  _QWORD v5[2];

  *(struct PseudoSret*)(v5) = snd_findSlot_100a50(&GameData_21ec578);
  result = snd_fnd_WeakHandle_isValid(v5);
  if ((result & 1) != 0) {
    v2 = snd_fnd_WeakHandle_get(v5, v1);
    *(__n128*)&v3 = snd_Fade_Fade_10c830(v4, 0.0);
    Slot_135980(v2 - 5592, v4, v3);
    return snd_Fade_Destroy_Fade(v4);
  }
  return result;
}

#pragma GCC visibility pop
