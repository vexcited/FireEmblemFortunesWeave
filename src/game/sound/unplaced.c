#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*snd_Vec3_vtable[])();
__attribute__((swiftcall)) void game_sound_80e4d0(PSEUDO_X8 x8_, _QWORD* result,
                                                  __int64 a2);

__attribute__((swiftcall)) void game_sound_80e4d0(PSEUDO_X8 x8_, _QWORD* result,
                                                  __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD v5[2];
  _QWORD v6[2];
  int v7;
  _BYTE v8[200];

  if (a2 != 0 &&
      (v4 = result, result = (UnitActor_81d430((void*)(v5)), (void*)(v5)),
       v6[1] = v5[0], v7 = v5[1], v6[0] = snd_Vec3_vtable, v4 != nullptr)) {
    snd_Fade_Fade_10c830(v8, 0.0f);
    snd_playAt_ff5f0((void*)((_QWORD*)a3), v4, v4, v6, v8, 0, 65537, 0, 0.0f,
                     1.0f);
    {
      (_QWORD*)snd_Fade_Destroy_Fade(v8);
      return;
    }
  }
  else {
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
