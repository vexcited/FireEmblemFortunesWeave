#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_2a4d20(_QWORD* result);
_QWORD* HardwareOpusDecoderManager_2b97b0(_QWORD* result);
__int64 StreamSoundPlayer_29baf0(__int64 result);
extern _QWORD GameData_21a34b8[3];
extern _QWORD GameData_21a34d0[6];
extern _UNKNOWN GameData_21a3488;
extern __int64 GameData_21a3500;
extern char GameData_21a3508;
typedef __int64 GameAlign_21a350c __attribute__((aligned(4)));
extern GameAlign_21a350c GameData_21a350c;
__int64 nn_atk_2b9060();

__int64 nn_atk_2b9060()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_21a3508 == 1) {
    result = StreamSoundPlayer_29baf0((__int64)&GameData_21a3488);
    if (GameData_21a3508 == 1) {
      HardwareOpusDecoderManager_2b97b0(GameData_21a34d0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      GameData_21a3500 = 0;
      result = (__int64)GameRoutine_2a4d20(GameData_21a34b8);
      GameData_21a3508 = 0;
      GameData_21a350c = 0xFFFFFFFF00000000LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
