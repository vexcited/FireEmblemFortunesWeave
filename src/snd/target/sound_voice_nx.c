#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2892d0(_QWORD);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_21346d8;
extern _UNKNOWN* GameData_21346e0;
extern __int64 snd_target_s_platform;
void* SoundVoiceNX_14e360();
__int64 SoundVoiceNX_Unknown6(__int64 a1, unsigned int a2);
__int64 SoundVoiceNX_Unknown7();

void* SoundVoiceNX_14e360()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21346d8,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_21346e0;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_21346d8) != 0) {
    GameRoutine_2892d0(GameData_21346e0);
    GameRoutine_2b0();
    __cxa_guard_release(GameData_21346d8);
  }
  return GameData_21346e0;
}

__int64 SoundVoiceNX_Unknown6(__int64 a1, unsigned int a2)
{
  return (*(__int64 (**)(__int64, _QWORD, __int64))(
      *(_QWORD*)snd_target_s_platform + 344LL))(snd_target_s_platform, a2,
                                                4096);
}

__int64 SoundVoiceNX_Unknown7()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 360LL))(
      snd_target_s_platform);
}

#pragma GCC visibility pop
