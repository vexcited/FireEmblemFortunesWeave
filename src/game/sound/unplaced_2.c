#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_1190b0(PSEUDO_X8, __int64 result, __int64,
                                           __int64, unsigned __int8*, __int64,
                                           __int64, __int64);
__int64 GameRoutine_10d050(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
extern __int64* snd_g_manager_ptr[4];
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void game_sound_80e590(PSEUDO_X8 x8_, __int64 result,
                                                  unsigned __int8* a2,
                                                  float a4_bits_);

__attribute__((swiftcall)) void game_sound_80e590(PSEUDO_X8 x8_, __int64 result,
                                                  unsigned __int8* a2,
                                                  float a4_bits_)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int a4 = COERCE_AS(unsigned int, a4_bits_);
  __int64 v6;
  struct {
    __int64 v8;
    int v9;
  } v8_;
  struct {
    __int64 v10;
    int v11;
  } v10_;
  struct {
    _QWORD v12[25];
    __int64 v13;
    __int64 v14;
    _QWORD v15[3];
  } v12_;

  if (a2 != nullptr) {
    v6 = result;
    snd_Fade_Fade_10c830((__int64)&v10_.v10, 0x0.0p+0f);
    snd_Fade_Fade_10c830((__int64)v12_.v12, 0x0.0p+0f);
    v12_.v15[2] = 0;
    v12_.v15[0] = 0;
    v12_.v13 = 0x3F80000000000000LL;
    v12_.v14 = 0x1000100000000LL;
    *(_DWORD*)((char*)v12_.v15 + 7) = 0;
    GameRoutine_10d050((__int64)v12_.v12, (__int64)&v10_.v10);
    v12_.v13 = a4 | 0x3F80000000000000LL;
    BYTE4(v12_.v15[0]) = 0;
    v12_.v14 = 0x1000100000000LL;
    LODWORD(v12_.v15[0]) = 0;
    snd_Fade_Destroy_Fade(&v10_.v10);
    v10_.v10 = 0;
    v10_.v11 = 0x2000;
    v8_.v8 = 0;
    v8_.v9 = 0x2000;
    snd_1190b0((void*)(a3), *snd_g_manager_ptr[0], v6, (__int64)a2, a2,
               (__int64)&v10_.v10, (__int64)v12_.v12, (__int64)&v8_.v8);
    {
      snd_Fade_Destroy_Fade(v12_.v12);
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
