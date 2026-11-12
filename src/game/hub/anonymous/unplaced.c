#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__int64 DungeonEnemyTrajectory_fa03f0(__int64, char);
__int64 DungeonEnemyTrajectory_fa0960(__int64, float);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8791a0(__int64);
__int64 GameRoutine_cdeee0(_QWORD, _QWORD);
__int64 GameRoutine_cee580(_QWORD*);
__int64 GameRoutine_d1fb60(_QWORD, _QWORD);
__int64 GameRoutine_d783a0(_QWORD, float);
__int64 GameRoutine_d783a0_alt1(__int64 result,
                                float) __asm__("GameRoutine_d783a0");
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString32(void);
__int64 game_hub_d97a00(_QWORD, double);
__int64 game_zview_d12d30_alt1(__int64 result, int32x2_t*,
                               char) __asm__("game_zview_d12d30");
__int64 game_zview_d20140(__int64, int*);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_a292c0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 GameRoutine_c6a240(__int64, __int64, unsigned __int64, __n128 result);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a83570;
extern __int128 GameData_1a83900;
extern __int128 GameData_21a6120;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ec10[3];
extern __int64* GameData_212ec50[3];
extern __int64* GameData_212ed08[13];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c638;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc40[6];
extern __int64 GameData_212dc50[4];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220d620;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
float GameRoutine_d78a40(_QWORD);
float GameRoutine_d78a40_alt1(__int64*) __asm__("GameRoutine_d78a40");
void BattleUtil_7a96a0(float);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_cdeee0_alt1(__int64, __int64) __asm__("GameRoutine_cdeee0");
void GameRoutine_efa7e0();
void game_d523c0(__int64);
void game_zview_d12d30(__int64 result, int32x2_t*, char);
void game_zview_d1ff20(float32x4_t*, unsigned __int64*, char);
void game_hub_anonymous_d8b720();
__int64 game_hub_anonymous_d8c0b0(__int64 a1);
__n128 game_hub_anonymous_da69d0();
void game_hub_anonymous_da6c00(__int64 a1);
__int64 game_hub_anonymous_efd680(__int64 result);
void game_hub_anonymous_f8c620(__n128 a1);
void game_hub_anonymous_f8c6a0();
__n128 game_hub_anonymous_f8cb20(__int64 a1);
__n128 game_hub_anonymous_f8d660(__int64 a1);
__n128 game_hub_anonymous_f8d8a0(__int64 a1);
void game_hub_anonymous_f8e0a0();
__int64* snd_a292c0_alt1(__int64, unsigned int, char) __asm__("snd_a292c0");
__int64 GameHr_d1fb60(__int64, char);
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameHr_cdeee0(__int64 result, __int64);
void game_hub_d97a00_alt1(__int64, float) __asm__("game_hub_d97a00");
__int64 game_zview_cee580(_QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float GameHr_d78a40(__int64*);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void game_hub_anonymous_d8b720()
{

#pragma clang fp contract(off)
  __int64 v0;
  unsigned __int64 v1;
  bool v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  struct {
    int v16;
    __int16 v17;
    char gap10_[2];
    int v18;
  } v16_;

  v0 = *game_sound_g_game_sound_ptr[0];
  v1 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbc0[0] + 40LL);
  v2 = (v1 & 1) == 0;
  v3 = v1 >> 1;
  if (v2) {
    v4 = v3;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212dbc0[0] + 48LL);
  }
  v5 = *(unsigned __int8*)(v0 + 2728);
  v6 = *(_QWORD*)(v0 + 2736);
  if (v2) {
    v7 = *(_QWORD*)GameData_212dbc0[0] + 41LL;
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)GameData_212dbc0[0] + 56LL);
  }
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v4 != v6 ||
      ((v5 & 1) != 0 ? (v8 = *(_QWORD*)(v0 + 2744)) : (v8 = v0 + 2729),
       memcmp_alt1(v7, v8, v4) != 0)) {
    GameRoutine_60a060_alt1((char*)(v0 + 2728), v7, v4);
    snd_a292c0_alt1(v0, 4u, 1);
  }
  v9 = GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212ebf8[0] != 0) {
    v10 = *(float**)(*(_QWORD*)GameData_212ebf8[0] + 32LL);
    if (v10 != nullptr) {
      v11 = 0x1.0000000000000p+0f;
      if (*(int*)(*(_QWORD*)GameData_212dbb8[0] + 152LL) > 0) {
        v11 = 0x0.0p+0f;
      }
      *v10 = v11;
    }
    v12 = *GameData_212ec50[0];
    if (*GameData_212ec50[0] != 0) {
      GameRoutine_d783a0_alt1(*(_QWORD*)(v12 + 8), 0x0.0p+0f);
      v13 = GameRoutine_d78a40_alt1(*(__int64**)(v12 + 8));
      if (v13 == 0x1.0000000000000p+0f) {
        if (*(_BYTE*)(v12 + 16) != 1) {
          goto LABEL_25;
        }
      }
      else {
        *(_BYTE*)(v12 + 16) = 1;
      }
      *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v13;
    }
  }
LABEL_25:
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) = 0;
  }
  v14 = *(_QWORD*)v9;
  if (*(_BYTE*)(*(_QWORD*)v9 + 13LL) == 1 &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  if ((*(_BYTE*)(v14 + 232) & 0x20) != 0) {
    if (*(int*)(*(_QWORD*)GameData_212dbf0[0] + 16LL) <= 0) {
      ((void (*)(void))GameRoutine_efa7e0)();
    }
    v15 = *(_QWORD*)GameData_212dc60[0];
    game_hub_d97a00_alt1(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL),
                         0x0.0p+0f);
    v16_.v16 = 0;
    v16_.v17 = 0;
    v16_.v18 = 1065353216;
    GameHr_cdeee0(v15, (__int64)&v16_.v16);
    GameHr_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
  }
}

__int64 game_hub_anonymous_d8c0b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  v1 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v1 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v1 != 10) {
    goto LABEL_10;
  }
  v2 = GameData_21f3d10 + 65;
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v3 = *(_QWORD*)v2;
  v4 = *(unsigned __int16*)(v2 + 8);
  if (v3 != *(_QWORD*)"Hub_101_A1" || v4 != *(unsigned __int16*)"A1") {
  LABEL_10:
    v6 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v6 & 0x10) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v6 | 0x10;
      return GameRoutine_8791a0(a1);
    }
  }
  return a1;
}

__n128 game_hub_anonymous_da69d0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __n128 result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = *(_QWORD*)(GameData_21f3d10 + 200);
  if (v0 != 0) {
    v2 = *(_QWORD*)(v0 + 24);
    v1 = *(_QWORD*)(v0 + 32);
    if (v1 != 0) {
      v3 = *(_QWORD*)(v0 + 24);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      DungeonEnemyTrajectory_fa03f0(v3, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_DWORD*)(v2 + 8) = 0;
      DungeonEnemyTrajectory_fa0960(v2, 0x0.0p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak(v1);
      }
    }
    else {
      DungeonEnemyTrajectory_fa03f0(*(_QWORD*)(v0 + 24), 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_DWORD*)(v2 + 8) = 0;
      DungeonEnemyTrajectory_fa0960(v2, 0x0.0p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  return result;
}

void game_hub_anonymous_da6c00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  float v14;
  __int64 v15;
  unsigned int v16;
  __int128 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = GameData_212d458[0];
  v3 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v5 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    std___1___shared_weak_count___release_weak_alt2(v3);
    if (v6 == 0 || v4 == 0) {
      if (v6 == 0) {
        goto LABEL_10;
      }
    }
    else {
      game_zview_cee580(*(_QWORD**)(v4 + 24));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
LABEL_10:
  v8 = *(_QWORD*)(*v2 + 24);
  v9 = *(_QWORD*)(*v2 + 32);
  while (v8 != v9) {
    if (*(_DWORD*)(*(_QWORD*)v8 + 1112LL) == 2 &&
        *(_QWORD*)(*(_QWORD*)v8 + 56LL) != 0) {
      game_zview_cee580(*(_QWORD**)(*(_QWORD*)v8 + 24LL));
    }
    v8 += 16;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  }
  v11 = (_QWORD*)*GameData_212ed08[0];
  v11[3] = *(_QWORD*)(*GameData_212ed08[0] + 16);
  v11[6] = v11[5];
  v11[9] = v11[8];
  v11[12] = v11[11];
  v11[15] = v11[14];
  v11[18] = v11[17];
  v11[21] = v11[20];
  v11[24] = v11[23];
  if (*(_BYTE*)(a1 + 194) == 1) {
    *(_BYTE*)(a1 + 194) = 0;
  }
  v12 = (__int64*)GameData_212dc38[0];
  v13 = *(_QWORD*)GameData_212dc38[0];
  v14 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1016LL);
  *(_DWORD*)(v13 + 1012) = 0;
  *(float*)(v13 + 1008) = v14 + 0x0.0p+0f;
  BattleUtil_7a96a0(0x0.0p+0f);
  v15 = *v12;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v23 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v23;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  v16 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v15 + 1072) = GameData_21a6120;
  v17 = *(_OWORD*)(v15 + 1072);
  *((_QWORD*)&v17 + 1) = v16;
  *(_OWORD*)(v15 + 1072) = v17;
  **(_DWORD**)(*(_QWORD*)GameData_212ebf8[0] + 16LL) = 1065353216;
  v18 = *GameData_212ec50[0];
  GameRoutine_d783a0_alt1(*(_QWORD*)(*GameData_212ec50[0] + 8), 0x0.0p+0f);
  v19 = GameHr_d78a40(*(__int64**)(v18 + 8));
  if (v19 == 0x1.0000000000000p+0f) {
    if (*(_BYTE*)(v18 + 16) != 1) {
      goto LABEL_28;
    }
  }
  else {
    *(_BYTE*)(v18 + 16) = 1;
  }
  *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v19;
LABEL_28:
  v20 = *GameData_212ec10[0];
  if (*(_BYTE*)(*GameData_212ec10[0] + 64) == 1) {
    v21 = *(_QWORD*)(v20 + 24);
    if (v21 != 0) {
      *(_QWORD*)(v20 + 32) = v21;
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
    }
    *(_BYTE*)(v20 + 64) = 0;
  }
}

__int64 game_hub_anonymous_efd680(__int64 result)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  if ((*(_BYTE*)(result + 152) & 1) != 0) {
    v1 = *(_QWORD*)(result + 168);
  }
  else {
    v1 = result + 153;
  }
  if (GameData_21ec7b8 == 0 && v1 != 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v4, v1, 0);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

void game_hub_anonymous_f8c620(__n128 a1)
{
  __int64 v1;
  struct {
    int v2;
    __int16 v3;
    char gap10_[2];
    int v4;
  } v2_;

  GameRoutine_c6a240(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                  32LL) -
                                       8LL) +
                            40LL) +
                 392LL),
      (__int64)&GameData_1a9f09e, 0, a1);
  v2_.v2 = 0;
  v1 = *(_QWORD*)GameData_212dc60[0];
  v2_.v4 = 1065353216;
  v2_.v3 = 257;
  GameRoutine_cdeee0_alt1(v1, (__int64)&v2_.v2);
}

void game_hub_anonymous_f8c6a0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __n128 v4;
  float32x4_t** v6;
  float32x4_t** v7;
  float32x4_t* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  int v13;
  float32x4_t* v15;
  float32x4_t* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v30;
  __int128 v31;
  __int64 v32;
  float32x4_t v33;
  int8x16_t v34;
  __int64 v35;
  unsigned int v36;
  float32x4_t v37;
  float v38;
  _QWORD* v39;
  float v40;
  __int64 v41;
  int8x16_t* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t* v47;
  float32x4_t v48;
  unsigned __int64 v49;
  int v50;
  __int128 v51;
  __int128 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int128 v55;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    v4 = std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v6 = *(float32x4_t***)(GameData_21ec7c0 + 24);
      v7 = *(float32x4_t***)(GameData_21ec7c0 + 32);
      if (v6 != v7) {
        while (1) {
          v8 = *v6;
          v9 = LANES128((*v6)[20]).n128_u8[0];
          v10 = LANES128((*v6)[20]).n128_u64[1];
          if ((v9 & 1) == 0) {
            v10 = v9 >> 1;
          }
          if (v10 == 12) {
            v11 =
                (v9 & 1) != 0
                    ? (unsigned __int64*)LANES128(v8[21]).n128_u64[0]
                    : (unsigned __int64*)((char*)LANES128(v8[20]).n128_u64 + 1);
            v12 = *v11;
            v13 = *((_DWORD*)v11 + 2);
            if (v12 == 0x83E3A982E39583E3LL && v13 == -1971068024) {
              break;
            }
          }
          v6 += 2;
          if (v6 == v7) {
            goto LABEL_70;
          }
        }
        v15 = v6[1];
        if (v15 != nullptr) {
          v16 = v6[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)&v15[1], 1u,
                                    memory_order_relaxed);
          v17 = std___1___shared_weak_count_lock(v16);
          v4 = std___1___shared_weak_count___release_weak(v15);
          if (v17 != 0) {
            v19 = *(_QWORD**)(GameData_220d620 + 8);
            v20 = *(_QWORD**)(GameData_220d620 + 16);
            if (v19 != v20) {
              while (1) {
                v21 = *v19;
                if ((*(_BYTE*)(*v19 + 16LL) & 1) == 0) {
                  v22 = *(unsigned __int8*)(v21 + 112);
                  v23 = *(_QWORD*)(v21 + 120);
                  if ((v22 & 1) == 0) {
                    v23 = v22 >> 1;
                  }
                  if (v23 == 21) {
                    v24 = (v22 & 1) != 0 ? *(__int64**)(v21 + 128)
                                         : (__int64*)(v21 + 113);
                    v25 = *v24;
                    v26 = v24[1];
                    v27 = *(__int64*)((char*)v24 + 13);
                    v28 = v25 == 0x83E3A982E39583E3LL &&
                          v26 == 0xE5BBA7E78A83E388LL;
                    if (v28 && v27 == 0x8885E5958BE5BBA7LL) {
                      break;
                    }
                  }
                }
                v19 += 2;
                if (v19 == v20) {
                  goto LABEL_68;
                }
              }
              v30 = v19[1];
              if (v30 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8),
                                          1u, memory_order_relaxed);
              }
              *(_QWORD*)&v31 = *(_QWORD*)(v21 + 160);
              LODWORD(v18) = *(_DWORD*)(v21 + 168);
              *((_QWORD*)&v31 + 1) = v18;
              v32 = *(_QWORD*)(LANES128(v8[1]).n128_u64[1] + 16);
              v55 = v31;
              game_zview_d12d30(v32, (int32x2_t*)&v55, 1);
              v33 = vsubq_f32(
                  v8[79],
                  *(float32x4_t*)(*(_QWORD*)(LANES128(v8[1]).n128_u64[1] + 16) +
                                  560LL));
              v34 = vmulq_f32(v33, v33);
              LANES128(v34).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                      .n64_f32[0] > 0x1.0000000000000p-23f) {
                v35 = *(_QWORD*)(GameData_21ec7c0 + 120);
                if ((*(_BYTE*)(v35 + 12) & 1) == 0) {
                  *(_BYTE*)(v35 + 12) = 1;
                }
              }
              v36 = DWORD2(v55);
              LANES128(v8[79]).n128_u64[0] = v55;
              v37 = v8[79];
              LANES128(v37).n128_u64[1] = v36;
              v8[79] = v37;
              HubCharacterNatives_cabfc0((__int64)v8, 1);
              v38 = *(float*)(v21 + 172);
              if ((LANES128(v8[83]).n128_u8[1] & 1) == 0) {
                LANES128(v8[83]).n128_u8[1] = 1;
              }
              v39 = *(_QWORD**)(LANES128(v8[1]).n128_u64[1] + 16);
              v40 = v38 * 0x1.1df46a0000000p-6f;
              if (v39[107] != 0) {
                v41 = v39[108];
                v39[107] = 0;
                v39[108] = 0;
                if (v41 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                  std___1___shared_weak_count___release_weak(v41);
                }
              }
              v42 = (int8x16_t*)v39[61];
              v43 = LANES128(v42[11]).n128_u8[4];
              LANES128(v42[2]).n128_f32[0] = v40;
              LANES128(v42[2]).n128_f32[1] = v40;
              if (v43 == 1) {
                LANES128(v42[11]).n128_u8[4] = 0;
              }
              CharacterRotate_d519c0(v42);
              v44 = *(_QWORD*)(v1 + 24);
              v45 = *(_QWORD*)(LANES128(v8[1]).n128_u64[1] + 24);
              if (v44 != 0) {
                v46 = *(float32x4_t*)(*(_QWORD*)(v44 + 16) + 560LL);
                v47 = *(float32x4_t**)(*(_QWORD*)(v44 + 8) + 240LL);
                if (v47 != nullptr) {
                  v48 = v47[3];
                }
                else {
                  LODWORD(v49) = 0;
                  *((float*)&v49 + 1) =
                      *(float*)(v44 + 544) * 0x1.99999a0000000p-1f;
                  v48 = vaddq_f32(v46, COERCE_AS(float32x4_t, v49));
                }
                LANES128(v46).n128_u32[3] = 0;
                LANES128(v48).n128_u32[3] = 0;
              }
              else {
                v46 = (__typeof__(v46)){0};
                v48 = (__typeof__(v48)){0};
              }
              v50 = *(unsigned __int8*)(v45 + 336);
              *(_QWORD*)(v45 + 272) = v44;
              if (v50 == 1) {
                *(_QWORD*)(v45 + 288) = LANES128(v46).n128_u64[0];
                *(_QWORD*)(v45 + 304) = LANES128(v48).n128_u64[0];
                v51 = *(_OWORD*)(v45 + 288);
                v52 = *(_OWORD*)(v45 + 304);
                *((_QWORD*)&v51 + 1) = LANES128(v46).n128_u32[2];
                *((_QWORD*)&v52 + 1) = LANES128(v48).n128_u32[2];
                *(_OWORD*)(v45 + 288) = v51;
                *(_OWORD*)(v45 + 304) = v52;
              }
              else {
                *(float32x4_t*)(v45 + 288) = v46;
                *(float32x4_t*)(v45 + 304) = v48;
                *(_BYTE*)(v45 + 336) = 1;
              }
              *(_DWORD*)(v45 + 320) = 1065353216;
              if (v30 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                std___1___shared_weak_count___release_weak(v30);
              }
            }
          LABEL_68:
            v53 = LANES128(v8[1]).n128_u64[1];
            v54 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 24LL);
            *(_BYTE*)(v54 + 25) = 0;
            *(_QWORD*)(v54 + 32) = 0;
            *(_QWORD*)(v54 + 37) = 0;
            *(_BYTE*)(v54 + 48) = 0;
            *(_BYTE*)(v54 + 64) = 0;
            *(_QWORD*)(v54 + 80) = 0;
            *(_BYTE*)(v54 + 96) = 1;
            *(_DWORD*)(v54 + 32) = 1086918608;
            LODWORD(v53) = *(_DWORD*)(v53 + 184);
            *(_BYTE*)(v54 + 44) = 1;
            *(_DWORD*)(v54 + 40) = v53;
            game_d523c0(*(_QWORD*)(*(_QWORD*)(v54 + 16) + 488LL));
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              v4 = std___1___shared_weak_count___release_weak(v17);
            }
          }
        }
      }
    }
  LABEL_70:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(
          v3, *(long double*)&v4);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__n128 game_hub_anonymous_f8cb20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  atomic_ullong* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  __int128 v16;
  float v17;
  float32x4_t* v18;
  __int64 v19;
  struct {
    unsigned __int64 v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    char v24;
  } v22_;
  struct {
    __int64 v25;
    char gap40_[8];
    float v26;
  } v25_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 8) = 0;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = v2;
  v6 = GameData_212dc40[0];
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  v7 = v2 + 32;
  *(_QWORD*)v2 = v6 + 16;
  *(_DWORD*)(v2 + 68) = 1065353216;
  *(_QWORD*)(v2 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v2 + 80) = 1109393408;
  *(_BYTE*)(v2 + 84) = 1;
  v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = *(_QWORD*)(*GameData_212d458[0] + 72);
  v10 = *(_QWORD*)(*GameData_212d458[0] + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v13 = *(_QWORD*)(a1 + 152);
    v14 = *(_QWORD*)(a1 + 160);
    v15 = vaddq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 16LL) + 560LL),
        COERCE_AS(float32x4_t, GameData_1a83570));
    *(_QWORD*)(v5 + 32) = LANES128(v15).n128_u64[0];
    v16 = *(_OWORD*)(v5 + 32);
    *((_QWORD*)&v16 + 1) = LANES128(v15).n128_u32[2];
    *(_OWORD*)(v5 + 32) = v16;
    v22_.v22 = v13;
    v22_.v23 = v14;
    v22_.v24 = BYTE4(v14);
    GameRoutine_fb48a0((void*)(&v25_.v25), *(_QWORD*)GameData_212dc50[0],
                       &v22_.v22),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = v25_.v26;
    *(_DWORD*)(v5 + 52) = 1084227584;
    *(_QWORD*)(v5 + 64) = 1074580685;
    *(_DWORD*)(v5 + 80) = 1109393408;
    *(float*)(v5 + 48) = v17 + 0x1.2c00000000000p+7f;
    *(_OWORD*)(v5 + 48) = *(unsigned __int64*)(v5 + 48);
    v20_.v20 = v7;
    v20_.v21 = v5;
    v18 = *(float32x4_t**)GameData_212dc38[0];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    game_zview_d1ff20(v18, &v20_.v20, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = v20_.v21;
    if (v20_.v21 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak(v19);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v11);
  }
LABEL_14:
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__n128 game_hub_anonymous_f8d660(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  atomic_ullong* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  __int128 v16;
  float v17;
  float32x4_t* v18;
  __int64 v19;
  struct {
    unsigned __int64 v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    char v24;
  } v22_;
  struct {
    __int64 v25;
    char gap40_[8];
    float v26;
  } v25_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 8) = 0;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = v2;
  v6 = GameData_212dc40[0];
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  v7 = v2 + 32;
  *(_QWORD*)v2 = v6 + 16;
  *(_DWORD*)(v2 + 68) = 1065353216;
  *(_QWORD*)(v2 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v2 + 80) = 1109393408;
  *(_BYTE*)(v2 + 84) = 1;
  v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = *(_QWORD*)(*GameData_212d458[0] + 72);
  v10 = *(_QWORD*)(*GameData_212d458[0] + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v13 = *(_QWORD*)(a1 + 152);
    v14 = *(_QWORD*)(a1 + 160);
    v15 = vaddq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 16LL) + 560LL),
        COERCE_AS(float32x4_t, GameData_1a83570));
    *(_QWORD*)(v5 + 32) = LANES128(v15).n128_u64[0];
    v16 = *(_OWORD*)(v5 + 32);
    *((_QWORD*)&v16 + 1) = LANES128(v15).n128_u32[2];
    *(_OWORD*)(v5 + 32) = v16;
    v22_.v22 = v13;
    v22_.v23 = v14;
    v22_.v24 = BYTE4(v14);
    GameRoutine_fb48a0((void*)(&v25_.v25), *(_QWORD*)GameData_212dc50[0],
                       &v22_.v22),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = v25_.v26;
    *(_DWORD*)(v5 + 52) = 1084227584;
    *(_QWORD*)(v5 + 64) = 1078774989;
    *(_DWORD*)(v5 + 80) = 1109393408;
    *(float*)(v5 + 48) = v17 + 0x1.6800000000000p+7f;
    *(_OWORD*)(v5 + 48) = *(unsigned __int64*)(v5 + 48);
    v20_.v20 = v7;
    v20_.v21 = v5;
    v18 = *(float32x4_t**)GameData_212dc38[0];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    game_zview_d1ff20(v18, &v20_.v20, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = v20_.v21;
    if (v20_.v21 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak(v19);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v11);
  }
LABEL_14:
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__n128 game_hub_anonymous_f8d8a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  atomic_ullong* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  __int128 v16;
  float v17;
  float32x4_t* v18;
  __int64 v19;
  struct {
    unsigned __int64 v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    char v24;
  } v22_;
  struct {
    __int64 v25;
    char gap40_[8];
    float v26;
  } v25_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 8) = 0;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = v2;
  v6 = GameData_212dc40[0];
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  v7 = v2 + 32;
  *(_QWORD*)v2 = v6 + 16;
  *(_DWORD*)(v2 + 68) = 1065353216;
  *(_QWORD*)(v2 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v2 + 80) = 1109393408;
  *(_BYTE*)(v2 + 84) = 1;
  v8 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v8 == 0) {
    goto LABEL_14;
  }
  v9 = *(_QWORD*)(*GameData_212d458[0] + 72);
  v10 = *(_QWORD*)(*GameData_212d458[0] + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      goto LABEL_14;
    }
  }
  else {
    v13 = *(_QWORD*)(a1 + 152);
    v14 = *(_QWORD*)(a1 + 160);
    v15 = vaddq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 16LL) + 560LL),
        COERCE_AS(float32x4_t, GameData_1a83900));
    *(_QWORD*)(v5 + 32) = LANES128(v15).n128_u64[0];
    v16 = *(_OWORD*)(v5 + 32);
    *((_QWORD*)&v16 + 1) = LANES128(v15).n128_u32[2];
    *(_OWORD*)(v5 + 32) = v16;
    v22_.v22 = v13;
    v22_.v23 = v14;
    v22_.v24 = BYTE4(v14);
    GameRoutine_fb48a0((void*)(&v25_.v25), *(_QWORD*)GameData_212dc50[0],
                       &v22_.v22),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = v25_.v26;
    *(_DWORD*)(v5 + 52) = -1054867456;
    *(_QWORD*)(v5 + 64) = 0x4020000040C4CCCDLL;
    *(_DWORD*)(v5 + 80) = 1114636288;
    *(float*)(v5 + 48) = v17 + 0x1.6800000000000p+7f;
    *(_OWORD*)(v5 + 48) = *(unsigned __int64*)(v5 + 48);
    v20_.v20 = v7;
    v20_.v21 = v5;
    v18 = *(float32x4_t**)GameData_212dc38[0];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    game_zview_d1ff20(v18, &v20_.v20, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = v20_.v21;
    if (v20_.v21 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak(v19);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v11);
  }
LABEL_14:
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

void game_hub_anonymous_f8e0a0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  float32x4_t** v9;
  float32x4_t** v10;
  float32x4_t* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  int v16;
  float32x4_t* v18;
  float32x4_t* v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  __int64 v23;
  float32x4_t v24;
  int8x16_t v25;
  __int64 v26;
  unsigned int v27;
  float32x4_t v28;
  float v29;
  _QWORD* v30;
  float v31;
  __int64 v32;
  int8x16_t* v33;
  int v34;
  __int64 v35;
  struct {
    __int128 v36;
    char v37;
    char gap17_[3];
    char v38;
    char gap21_[3];
    char v39;
    char gap25_[3];
    int v40;
  } v36_;

  v0 = GameData_21f3cb0;
  v1 = *(_QWORD*)(GameData_21f3cb0 + 968);
  *(_QWORD*)(GameData_21f3cb0 + 960) = 0;
  *(_QWORD*)(v0 + 968) = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = v0;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    v0 = v2;
  }
  BYTE4(v36_.v36) = 0;
  BYTE8(v36_.v36) = 0;
  BYTE12(v36_.v36) = 0;
  v36_.v37 = 0;
  v36_.v38 = 0;
  v36_.v39 = 0;
  LODWORD(v36_.v36) = 0;
  v36_.v40 = 1065353216;
  game_zview_d20140(v0, (int*)&v36_.v36);
  v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    std___1___shared_weak_count___release_weak_alt1(v3);
    if (v6 == 0 || v4 == 0) {
      if (v6 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 24LL);
      if (*(_BYTE*)(v8 + 96) == 1) {
        *(_BYTE*)(v8 + 96) = 0;
      }
      *(_BYTE*)(v8 + 25) = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
LABEL_17:
  v9 = *(float32x4_t***)(GameData_21ec7c0 + 24);
  v10 = *(float32x4_t***)(GameData_21ec7c0 + 32);
  if (v9 != v10) {
    while (1) {
      v11 = *v9;
      v12 = LANES128((*v9)[20]).n128_u8[0];
      v13 = LANES128((*v9)[20]).n128_u64[1];
      if ((v12 & 1) == 0) {
        v13 = v12 >> 1;
      }
      if (v13 == 12) {
        v14 = (v12 & 1) != 0
                  ? (unsigned __int64*)LANES128(v11[21]).n128_u64[0]
                  : (unsigned __int64*)((char*)LANES128(v11[20]).n128_u64 + 1);
        v15 = *v14;
        v16 = *((_DWORD*)v14 + 2);
        if (v15 == 0x83E3A982E39583E3LL && v16 == -1971068024) {
          break;
        }
      }
      v9 += 2;
      if (v9 == v10) {
        return;
      }
    }
    v18 = v9[1];
    if (v18 != nullptr) {
      v19 = v9[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)&v18[1], 1u,
                                memory_order_relaxed);
      v20 = std___1___shared_weak_count_lock(v19);
      std___1___shared_weak_count___release_weak_alt1(v18);
      if (v20 != 0) {
        *(_QWORD*)&v22 = LANES128(v11[24]).n128_u64[1];
        LODWORD(v21) = LANES128(v11[25]).n128_u32[0];
        *((_QWORD*)&v22 + 1) = v21;
        v23 = *(_QWORD*)(LANES128(v11[1]).n128_u64[1] + 16);
        v36_.v36 = v22;
        game_zview_d12d30_alt1(v23, (int32x2_t*)&v36_.v36, 1);
        v24 = vsubq_f32(
            v11[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v11[1]).n128_u64[1] + 16) +
                            560LL));
        v25 = vmulq_f32(v24, v24);
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v26 = *(_QWORD*)(GameData_21ec7c0 + 120);
          if ((*(_BYTE*)(v26 + 12) & 1) == 0) {
            *(_BYTE*)(v26 + 12) = 1;
          }
        }
        v27 = DWORD2(v36_.v36);
        LANES128(v11[79]).n128_u64[0] = v36_.v36;
        v28 = v11[79];
        LANES128(v28).n128_u64[1] = v27;
        v11[79] = v28;
        HubCharacterNatives_cabfc0((__int64)v11, 1);
        v29 = LANES128(v11[25]).n128_f32[1];
        if ((LANES128(v11[83]).n128_u8[1] & 1) == 0) {
          LANES128(v11[83]).n128_u8[1] = 1;
        }
        v30 = *(_QWORD**)(LANES128(v11[1]).n128_u64[1] + 16);
        v31 = v29 * 0x1.1df46a0000000p-6f;
        if (v30[107] != 0) {
          v32 = v30[108];
          v30[107] = 0;
          v30[108] = 0;
          if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
            std___1___shared_weak_count___release_weak_alt1(v32);
          }
        }
        v33 = (int8x16_t*)v30[61];
        v34 = LANES128(v33[11]).n128_u8[4];
        LANES128(v33[2]).n128_f32[0] = v31;
        LANES128(v33[2]).n128_f32[1] = v31;
        if (v34 == 1) {
          LANES128(v33[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v33);
        v35 = *(_QWORD*)(LANES128(v11[1]).n128_u64[1] + 24);
        if (*(_BYTE*)(v35 + 336) == 1) {
          *(_BYTE*)(v35 + 336) = 0;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak_alt1(v20);
        }
      }
    }
  }
}

#pragma GCC visibility pop
