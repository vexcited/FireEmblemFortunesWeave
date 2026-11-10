#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameManager_a2c820(__int64, __int64, char);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, __int64);
__int64 snd_a2c9c0(__int64 result);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int128 GameData_1a82af0;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern __int64 game_sound_g_game_sound;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0();
void Sound_f904d0();
__int64 Sound_f90970(__int64 result);

void Sound_f904d0()
{

#pragma clang fp contract(off)
  float32x4_t* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  long double v18;
  long double v19;

  v1 = (_QWORD*)GameData_2203490;
  v2 = GameData_2203490 + ((__int64)*(int*)(GameData_2203490 + 608) << 7);
  v3 = *(_QWORD*)(v2 + 760);
  if (v3 == 0) {
    v7 = 0;
    *(_OWORD*)&v10 = (__typeof__(*(_OWORD*)&v10)){0};
    goto LABEL_18;
  }
  v0 = *(float32x4_t**)(v2 + 752);
  v4 = *(_QWORD*)(v2 + 760);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v4);
  std___1___shared_weak_count___release_weak(v3);
  v6 = v5 == 0 || v0 == nullptr;
  v7 = !v6;
  if (v6) {
    *(_OWORD*)&v10 = (__typeof__(*(_OWORD*)&v10)){0};
    if (v5 == 0) {
      v7 = 0;
      goto LABEL_18;
    }
  }
  else {
    v8 = LANES128(v0[13]).n128_i64[0];
    if (v8 != 0 && (v9 = CharacterBuilder_1084a50(v8, "-Jnt_C_Head")) != 0) {
      v10 = *(long double*)(v9 + 48);
    }
    else {
      v10 = COERCE_LONG_DOUBLE(
          vaddq_f32(v0[7], COERCE_AS(float32x4_t, GameData_1a82af0)));
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v10 = v17;
  }
LABEL_18:
  v11 = (__int64*)v1[54];
  if ((__int64*)v1[55] == v11) {
    goto LABEL_30;
  }
  v12 = *v11;
  v13 = v11[1];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v12 != 0) {
    v18 = v10;
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
    v10 = v18;
    LOBYTE(v0) = v14 ^ 1;
    if (v13 == 0) {
      goto LABEL_27;
    }
  }
  else if (v13 == 0) {
    goto LABEL_27;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    v10 = v19;
  }
LABEL_27:
  if (((v12 == 0) | (unsigned __int8)v0 & 1) != 0 || (v15 = v1[63]) == 0) {
  LABEL_30:
    if (v7 == 0) {
      return;
    }
    goto LABEL_31;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 40LL))(v15, v10);
LABEL_31:
  v16 = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    *(_QWORD*)(game_sound_g_game_sound + 2528) = *(_QWORD*)&v10;
    *(_BYTE*)(v16 + 2516) = 1;
    *(_DWORD*)(v16 + 2536) = DWORD2(v10);
  }
}

__int64 Sound_f90970(__int64 result)
{
  __int64 v1;
  __int64* v2;
  int v3;
  __int64 v4;
  int v5;
  _QWORD v6[25];

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 0x20) == 0 && *(_BYTE*)(result + 8) != 0) {
    v1 = result;
    snd_Fade_Fade_10cb00((__int64)v6, (__int64)"FadeTime_BGM_CmdBtl_Out");
    v2 = game_sound_g_game_sound_ptr[0];
    snd_a2c9c0(*game_sound_g_game_sound_ptr[0]);
    result = snd_Fade_Destroy_Fade(v6);
    v3 = *(unsigned __int8*)(v1 + 10);
    *(_BYTE*)(v1 + 8) = 0;
    if (v3 == 1) {
      snd_Fade_Fade_10cb00((__int64)v6, (__int64)"FadeTime_BGM_CmdBtl_Out");
      v4 = *v2;
      v5 = *(_DWORD*)(*v2 + 628);
      if (v5 != 0) {
        *(_DWORD*)(v4 + 628) = v5 - 1;
        GameManager_a2c820(v4, (__int64)v6, 1);
      }
      return snd_Fade_Destroy_Fade(v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
