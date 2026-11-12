#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_BGM_getInstance(_QWORD);
__int64 snd_BGM_resumePauseAll(_QWORD, _QWORD, long double);
__int64 snd_BGM_startPitchCheckedAll(_QWORD, _QWORD, float);
__int64 snd_BGM_startPreviousVolumeAll(_QWORD, _QWORD, float);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
void Ff_e70d0_alt1(__int64 a1, float a2) __asm__("Ff_e70d0");
__int64 snd_BGM_getInstance_alt1() __asm__("snd_BGM_getInstance");
__int64 snd_BGM_resumePauseAll_alt1(__int64 result,
                                    __int64) __asm__("snd_BGM_resumePauseAll");
__int64 snd_BGM_startPitchCheckedAll_alt1(
    __int64 result, __int64, float) __asm__("snd_BGM_startPitchCheckedAll");
__int64 snd_BGM_startPreviousVolumeAll_alt1(
    __int64 result, __int64, float) __asm__("snd_BGM_startPreviousVolumeAll");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 Ff_e70d0(__int64 a1);

__int64 Ff_e70d0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[25];
    __int64 v9;
  } v8_;

  v8_.v9 = v1;
  result = snd_fnd_WeakHandle_get_alt1(a1 + 8);
  if (*(_BYTE*)(a1 + 24) == 1 &&
      (result == 0 ||
       ((result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) + 376LL))(
             result - 5592)) &
        1) == 0)) {
    if ((*(_BYTE*)(a1 + 25) & 1) == 0) {
      if (*(_BYTE*)(a1 + 26) == 1) {
        v5 = snd_BGM_getInstance_alt1();
        snd_Fade_Fade_10c830_alt1((__int64)v8_.v8, 0x1.f400000000000p+9f);
        snd_BGM_resumePauseAll_alt1(v5, (__int64)v8_.v8);
        result = snd_Fade_Destroy_Fade_alt1(v8_.v8);
      }
      if (*(_BYTE*)(a1 + 27) == 1) {
        v6 = snd_BGM_getInstance_alt1();
        snd_Fade_Fade_10c830_alt1((__int64)v8_.v8, 0x1.f400000000000p+9f);
        snd_BGM_startPitchCheckedAll_alt1(v6, (__int64)v8_.v8,
                                          0x1.0000000000000p+0f);
        result = snd_Fade_Destroy_Fade_alt1(v8_.v8);
        if (*(_BYTE*)(a1 + 27) == 1) {
          v7 = snd_BGM_getInstance_alt1();
          snd_Fade_Fade_10c830_alt1((__int64)v8_.v8, 0x1.f400000000000p+9f);
          snd_BGM_startPreviousVolumeAll_alt1(v7, (__int64)v8_.v8,
                                              0x1.0000000000000p+0f);
          result = snd_Fade_Destroy_Fade_alt1(v8_.v8);
        }
      }
    }
    *(_DWORD*)(a1 + 24) = 0;
  }
  return result;
}

#pragma GCC visibility pop
