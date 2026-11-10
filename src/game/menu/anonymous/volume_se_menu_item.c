#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(__int64*, char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 VolumeSeMenuItem_OnDeselect(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_181b920(_QWORD, _QWORD);
__int64 game_sound_PlayGaugeLeftSe(void);
__int64 game_sound_PlayGaugeRightSe(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_stop_ffbe0(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 game_g_game_setting_ptr;
extern __int64 game_sound_g_game_sound;
__int64 VolumeSeMenuItem_Unknown19(__int64 result);
__int64 VolumeSeMenuItem_PlayCursorSe(__int64 a1);
__int64 VolumeSeMenuItem_PlayPageSe(__int64 a1);

__int64 VolumeSeMenuItem_Unknown19(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = result;
  v2 = game_g_game_setting_ptr;
  if (*(_BYTE*)(result + 144) == 1 &&
      (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 946LL) & 0x22) == 0) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "SE_SYS_VolCheck_SE", "SE_SYS_VolCheck_SE", v4,
                   0, 65537, 0, 0.0f, 1.0f);
    result = snd_Fade_Destroy_Fade(v4);
    *(_WORD*)(v1 + 144) = 0;
  }
  if (*(_BYTE*)(v1 + 145) == 1 &&
      (*(_BYTE*)(*(_QWORD*)v2 + 946LL) & 0x44) == 0) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "SE_SYS_VolCheck_SE", "SE_SYS_VolCheck_SE", v4,
                   0, 65537, 0, 0.0f, 1.0f);
    result = snd_Fade_Destroy_Fade(v4);
    *(_WORD*)(v1 + 144) = 0;
  }
  return result;
}

__int64 VolumeSeMenuItem_OnDeselect(__int64 a1)
{
  int v1;
  __int64 v2;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(unsigned __int8*)(a1 + 79);
  v2 = *(_QWORD*)a1;
  *(_WORD*)(a1 + 144) = 0;
  v4 = v1 == 0;
  v5 = 504;
  if (!v4) {
    v5 = 520;
  }
  (*(void (**)(void))(v2 + v5))();
  v6 = *(_QWORD*)(a1 + 128);
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 120);
    v8 = *(_QWORD*)(a1 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      if (v7 != 0) {
        GameRoutine_1572370(v7, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    std___1___shared_weak_count___release_weak(v6);
  }
  return GameRoutine_1673c10((__int64*)a1, 0);
}

__int64 VolumeSeMenuItem_PlayCursorSe(__int64 a1)
{
  __int64 v2;
  __int64 result;
  char v4;
  __int64 v5;
  _BYTE v6[200];

  game_sound_PlayGaugeLeftSe();
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  snd_Fade_Fade_10c910(v6, 100);
  snd_stop_ffbe0("SE_SYS_VolCheck_SE", v6);
  snd_Fade_Destroy_Fade(v6);
  v2 = *(unsigned int*)(a1 + 140);
  if ((_DWORD)v2 != 0 && (int)(result = GameRoutine_181b920(v2, 0)) > 0) {
    v4 = 1;
  }
  else {
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_VolCheck_SE", "SE_SYS_VolCheck_SE", v6,
                   0, 65537, 0, 0.0f, 1.0f);
    result = snd_Fade_Destroy_Fade(v6);
    v4 = 0;
    *(_BYTE*)(a1 + 145) = 0;
  }
  *(_BYTE*)(a1 + 144) = v4;
  return result;
}

__int64 VolumeSeMenuItem_PlayPageSe(__int64 a1)
{
  __int64 result;
  char v3;
  __int64 v4;
  _BYTE v5[200];

  game_sound_PlayGaugeRightSe();
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  snd_Fade_Fade_10c910(v5, 100);
  snd_stop_ffbe0("SE_SYS_VolCheck_SE", v5);
  snd_Fade_Destroy_Fade(v5);
  result = *(unsigned int*)(a1 + 140);
  if ((_DWORD)result != 0 &&
      (int)(result = GameRoutine_181b920(result, 0)) >= 10) {
    snd_Fade_Fade_10c830(v5, 0.0f);
    snd_play_ff2d0((void*)(&v4), "SE_SYS_VolCheck_SE", "SE_SYS_VolCheck_SE", v5,
                   0, 65537, 0, 0.0f, 1.0f);
    result = snd_Fade_Destroy_Fade(v5);
    v3 = 0;
    *(_BYTE*)(a1 + 144) = 0;
  }
  else {
    v3 = 1;
  }
  *(_BYTE*)(a1 + 145) = v3;
  return result;
}

#pragma GCC visibility pop
