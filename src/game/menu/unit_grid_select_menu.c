#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 UnitGridSelectMenu_178aa80(__int64 a1, int a2);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 UnitGridSelectMenu_178aa80(__int64 a1, int a2)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v5[27];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 == 1) {
    v5[25] = v2;
    v5[26] = v3;
    snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_NG",
                        (__int64)"SE_SYS_NG", (__int64)v5, 0, 0x10001u, 0,
                        0x0.0p+0f, 0x1.0000000000000p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return snd_Fade_Destroy_Fade_alt1(v5);
  }
  return result;
}

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5)
{
  __int64 v5;
  char* v6;
  _QWORD* v7;

  v5 = a1[2];
  v6 = (char*)a1[1];
  v7 = (_QWORD*)(a1[3] + (v5 >> 1));
  if ((v5 & 1) != 0) {
    v6 = *(char**)&v6[*v7];
  }
  return ((__int64 (*)(_QWORD*, _QWORD, _QWORD, __int64, _QWORD))v6)(
      v7, *a2, *a3, a4, *a5);
}

#pragma GCC visibility pop
