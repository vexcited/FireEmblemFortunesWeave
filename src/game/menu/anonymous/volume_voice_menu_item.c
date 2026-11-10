#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(__int64*, char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 VolumeVoiceMenuItem_OnDeselect(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1678440(_QWORD);
__int64 GameRoutine_181b920(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_sound_PlayGaugeLeftSe(void);
__int64 game_sound_PlayGaugeRightSe(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21f49b8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_sound_g_game_sound;
__int64 VolumeVoiceMenuItem_Unknown19(__int64 result);
__int64 VolumeVoiceMenuItem_PlayCursorSe(__int64 a1);
__int64 VolumeVoiceMenuItem_PlayPageSe(__int64 a1);

__int64 VolumeVoiceMenuItem_Unknown19(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 j;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  const char* v17;
  _QWORD v18[2];
  _QWORD v19[25];

  v1 = result;
  if (*(_BYTE*)(result + 144) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 946) & 0x22) != 0) {
    goto LABEL_20;
  }
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  v2 = game_GetHero(9);
  if (v2 == 0) {
    goto LABEL_15;
  }
  for (i = v2; i != 0; i = *(_QWORD*)(i + 624)) {
    v4 = i;
  }
  if (*(_BYTE*)(v4 + 441) != 3) {
    goto LABEL_15;
  }
  v5 = *(_QWORD*)(v2 + 624);
  if (v5 == 0) {
    v5 = v2;
  }
  v19[0] = v5;
  LODWORD(v18[0]) = 241;
  v6 = game_UnitPool_Find_6ead60(v19, v18);
  if (v6 == 0) {
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v8 + 144) != 0) {
      v7 = (__int64*)(v8 + 112);
      goto LABEL_16;
    }
  LABEL_15:
    v7 = &GameData_21f49b8;
    goto LABEL_16;
  }
  v7 = (__int64*)(v6 + 2104);
LABEL_16:
  if (*((_BYTE*)v7 + 32) == 2) {
    snd_Fade_Fade_10c830(v19, 0.0f);
    v9 = "SE_SYS_VolCheck_Voice_F";
  }
  else {
    snd_Fade_Fade_10c830(v19, 0.0f);
    v9 = "SE_SYS_VolCheck_Voice_M";
  }
  snd_play_ff2d0((void*)(v18), v9, v9, v19, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v19);
  *(_WORD*)(v1 + 144) = 0;
LABEL_20:
  if (*(_BYTE*)(v1 + 145) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 946) & 0x44) != 0) {
    return result;
  }
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  v10 = game_GetHero(9);
  if (v10 == 0) {
    goto LABEL_34;
  }
  for (j = v10; j != 0; j = *(_QWORD*)(j + 624)) {
    v12 = j;
  }
  if (*(_BYTE*)(v12 + 441) != 3) {
    goto LABEL_34;
  }
  v13 = *(_QWORD*)(v10 + 624);
  if (v13 == 0) {
    v13 = v10;
  }
  v19[0] = v13;
  LODWORD(v18[0]) = 241;
  v14 = game_UnitPool_Find_6ead60(v19, v18);
  if (v14 == 0) {
    v16 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v16 + 144) != 0) {
      v15 = (__int64*)(v16 + 112);
      goto LABEL_35;
    }
  LABEL_34:
    v15 = &GameData_21f49b8;
    goto LABEL_35;
  }
  v15 = (__int64*)(v14 + 2104);
LABEL_35:
  if (*((_BYTE*)v15 + 32) == 2) {
    snd_Fade_Fade_10c830(v19, 0.0f);
    v17 = "SE_SYS_VolCheck_Voice_F";
  }
  else {
    snd_Fade_Fade_10c830(v19, 0.0f);
    v17 = "SE_SYS_VolCheck_Voice_M";
  }
  snd_play_ff2d0((void*)(v18), v17, v17, v19, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v19);
  *(_WORD*)(v1 + 144) = 0;
  return result;
}

__int64 VolumeVoiceMenuItem_OnDeselect(__int64 a1)
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

__int64 VolumeVoiceMenuItem_PlayCursorSe(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  const char* v12;
  _QWORD v13[2];
  _QWORD v14[25];

  v2 = game_sound_PlayGaugeLeftSe();
  GameRoutine_1678440(v2);
  v3 = *(unsigned int*)(a1 + 140);
  if ((_DWORD)v3 != 0) {
    result = GameRoutine_181b920(v3, 0);
    if ((int)result >= 1) {
      *(_BYTE*)(a1 + 144) = 1;
      return result;
    }
  }
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  v5 = game_GetHero(9);
  if (v5 == 0) {
    goto LABEL_16;
  }
  for (i = v5; i != 0; i = *(_QWORD*)(i + 624)) {
    v7 = i;
  }
  if (*(_BYTE*)(v7 + 441) != 3) {
    goto LABEL_16;
  }
  v8 = *(_QWORD*)(v5 + 624);
  if (v8 == 0) {
    v8 = v5;
  }
  v14[0] = v8;
  LODWORD(v13[0]) = 241;
  v9 = game_UnitPool_Find_6ead60(v14, v13);
  if (v9 == 0) {
    v11 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v11 + 144) != 0) {
      v10 = (__int64*)(v11 + 112);
      goto LABEL_17;
    }
  LABEL_16:
    v10 = &GameData_21f49b8;
    goto LABEL_17;
  }
  v10 = (__int64*)(v9 + 2104);
LABEL_17:
  if (*((_BYTE*)v10 + 32) == 2) {
    snd_Fade_Fade_10c830(v14, 0.0f);
    v12 = "SE_SYS_VolCheck_Voice_F";
  }
  else {
    snd_Fade_Fade_10c830(v14, 0.0f);
    v12 = "SE_SYS_VolCheck_Voice_M";
  }
  snd_play_ff2d0((void*)(v13), v12, v12, v14, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v14);
  *(_WORD*)(a1 + 144) = 0;
  return result;
}

__int64 VolumeVoiceMenuItem_PlayPageSe(__int64 a1)
{
  __int64 v2;
  __int64 result;
  char v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  const char* v12;
  _QWORD v13[2];
  _QWORD v14[25];

  v2 = game_sound_PlayGaugeRightSe();
  GameRoutine_1678440(v2);
  result = *(unsigned int*)(a1 + 140);
  if ((_DWORD)result == 0 ||
      (int)(result = GameRoutine_181b920(result, 0)) < 10) {
    v4 = 1;
    goto LABEL_21;
  }
  if (game_sound_g_game_sound != 0) {
    (*(void (**)(__int64))(*(_QWORD*)game_sound_g_game_sound + 184LL))(
        game_sound_g_game_sound);
  }
  v5 = game_GetHero(9);
  if (v5 == 0) {
    goto LABEL_16;
  }
  for (i = v5; i != 0; i = *(_QWORD*)(i + 624)) {
    v7 = i;
  }
  if (*(_BYTE*)(v7 + 441) != 3) {
    goto LABEL_16;
  }
  v8 = *(_QWORD*)(v5 + 624);
  if (v8 == 0) {
    v8 = v5;
  }
  v14[0] = v8;
  LODWORD(v13[0]) = 241;
  v9 = game_UnitPool_Find_6ead60(v14, v13);
  if (v9 == 0) {
    v11 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v11 + 144) != 0) {
      v10 = (__int64*)(v11 + 112);
      goto LABEL_17;
    }
  LABEL_16:
    v10 = &GameData_21f49b8;
    goto LABEL_17;
  }
  v10 = (__int64*)(v9 + 2104);
LABEL_17:
  if (*((_BYTE*)v10 + 32) == 2) {
    snd_Fade_Fade_10c830(v14, 0.0f);
    v12 = "SE_SYS_VolCheck_Voice_F";
  }
  else {
    snd_Fade_Fade_10c830(v14, 0.0f);
    v12 = "SE_SYS_VolCheck_Voice_M";
  }
  snd_play_ff2d0((void*)(v13), v12, v12, v14, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v14);
  v4 = 0;
  *(_BYTE*)(a1 + 144) = 0;
LABEL_21:
  *(_BYTE*)(a1 + 145) = v4;
  return result;
}

#pragma GCC visibility pop
