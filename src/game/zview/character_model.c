#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1074de0(_QWORD);
__int64 GameRoutine_81de20(_QWORD, _QWORD);
__int64 GameRoutine_81e020(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 CharacterModel_cf4780(__int64 a1);
__int64 CharacterModel_cf4780_alt1(_QWORD) __asm__("CharacterModel_cf4780");
__int64 CharacterModel_cfa1b0_alt1(_QWORD) __asm__("CharacterModel_cfa1b0");
__int64 CharacterModel_cfb0d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CharacterModel_cfb240_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("CharacterModel_cfb240");
__int64 CharacterModel_cfb400_alt1(_QWORD) __asm__("CharacterModel_cfb400");
__int64 CharacterModel_cfb780_alt1(_QWORD,
                                   _QWORD) __asm__("CharacterModel_cfb780");
__int64 GameRoutine_107e140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf5da0(_QWORD);
__int64 GameRoutine_dac700(_QWORD, _QWORD);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 WaitRelease_cfa2a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_220f840;
extern _UNKNOWN* GameData_212d4d8;
extern __int64 (*GameData_1fd8080[])();
extern __int64 (*GameData_1fd8490[])();
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*game_zview_CharacterModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f838;
extern int* GameData_212d4d0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cfa190(void);
void __attribute__((noreturn)) GameRoutine_cfb8e0(void);
_QWORD* CharacterModel_Destructor(__int64 a1);
__int64 game_zview_CharacterModel_SetupReloadAppearance(__int64 result,
                                                        __int64 a2);
__int64 CharacterModel_cf4c10(__int64 a1);
__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char a2);
__int64 CharacterModel_cf9f80(__int64* a1, __int64 a2);
_QWORD* CharacterModel_cfa1b0(_QWORD* result);
__int64 game_zview_CharacterModel_SetupComplete_lambda0_Invoke(__int64 result,
                                                               __int64* a2,
                                                               __int64* a3);
void game_zview_CharacterModel_SetupComplete_lambda1_Invoke(__int64 a1,
                                                            __int64 a2);
void game_zview_CharacterModel_GameViewExit_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_zview_CharacterModel_TryMakeObj_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
__int64 CharacterModel_cfb240(__int64* a1, __int64 a2, __int64 a3);
__int64 CharacterModel_cfb400(__int64 a1, __int64 a2);
__int64 CharacterModel_cfb540(__int64* a1, int* a2, __int64* a3, __int64 a4);
__int64* CharacterModel_cfb780(__int64* result, _QWORD* a2);
float game_zview_CharacterModel_UpdateOutlineBold_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 game_zview_CharacterModel_CommitRimMode_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
void game_zview_CharacterModel_ClothStabilize_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 CharacterModel_cf4c10_alt1(_QWORD) __asm__("CharacterModel_cf4c10");
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64
game_zview_CharacterModel_SetupReloadAppearance_lambda0_Invoke(__int64 a1);
__int64
game_zview_CharacterModel_SetShadowRemaining_lambda0_Invoke(__int64 result,
                                                            __int64 a2);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    __cxa_guard_acquire_alt1(PSEUDO_X8, _QWORD) __asm__("__cxa_guard_acquire");
__attribute__((swiftcall)) void game_zview_d56ce0(PSEUDO_X8, __int64, __int64,
                                                  float);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* LocatorModule_a7c2c0(__int64* result, __int64);
__int64 CharacterBuilder_1083840(__int64 result);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterModel_1071880(__int64, int);
__int64 CharacterModel_d1a690(__int64, unsigned int, __int64, __int64, int);
__int64 GameRoutine_10c0490(__int64 result, __int64);
__int64 GameRoutine_10cbe60(__int64 result);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_a19f00(__int64 result, __int64);
__int64 GameRoutine_d18da0(__int64 result);
__int64 GameRoutine_d19c40(_QWORD*);
__int64 GameRoutine_d2c6a0(__int64 result);
__int64 GameRoutine_d2cec0(_QWORD);
__int64 GameRoutine_d2d5e0(_QWORD);
__int64 GameRoutine_d2d740(_QWORD, _QWORD);
__int64 GameRoutine_d60390(__int64);
__int64 GameRoutine_d60750(__int64 result);
__int64 GameRoutine_d60750_alt1(_QWORD) __asm__("GameRoutine_d60750");
__int64 Graph_d29060(_QWORD);
__int64 HubCharacterNatives_ceebc0(_QWORD);
__int64 HubCharacterNatives_cf7940_alt1(_QWORD) __asm__(
    "HubCharacterNatives_cf7940");
__int64 Model_a661a0(__int64, int, __int64, int);
__int64 SkeletalBlendCallback_ce4b70(_QWORD, _QWORD, float);
__int64 __cxa_guard_release_alt1(_QWORD, float) __asm__("__cxa_guard_release");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_zview_CharacterAnim_CommitReduceFlag(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_g3d_5eb5c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
bool GameRoutine_d2d4e0();
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212ec70;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_1fd8520[])();
extern __int64 (*GameData_1fd85a0[])();
extern __int64 (*GameData_2007458[])();
extern __int64 (*GameData_20074d8[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64* GameData_212eba8[8];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21d96b8;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern float GameData_1b847b8[5];
extern float GameData_1b847cc[5];
extern int* GameData_212deb0;
extern int* GameData_212ec68;
float GameRoutine_d1cbc0(_QWORD, _QWORD);
float GameRoutine_d2d9c0(_QWORD, _QWORD, float);
void GameRoutine_10cae60(__int64, char);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_d1d700(void);
void __attribute__((noreturn)) String_60a1d0();
__int64 game_zview_CharacterModel_UpdateOutlineBold(__int64 a1);
void CharacterModel_cf55e0(__int64 a1);
__int64 CharacterModel_cf5a50(__int64 a1);
__int64 CharacterModel_cf5c00(__int64 a1);
char* CharacterModel_cf5da0(__int64 a1);
__int64 (***CharacterModel_cf67d0(__int64 (***result)()))();
__int64 CharacterModel_cf6940(__int64 a1, double a2, double a3);
__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 game_zview_CharacterModel_SetActiveSignal_lambda0_Invoke(__int64 result,
                                                                 __int64* a2);
__attribute__((swiftcall)) void CharacterModel_d1a2a0(PSEUDO_X8 x8_,
                                                      _QWORD* result, int a2);
__attribute__((swiftcall)) void CharacterModel_d1b660(PSEUDO_X8 x8_,
                                                      __int64 result);
void CharacterModel_d1b800(__int64 a1, long double a2);
_QWORD* game_zview_dac700(__int64*, _QWORD*);
__attribute__((swiftcall)) void
GameRoutine_edf510_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_edf510");
__int64 CharacterModel_cfb0d0_alt1(_QWORD*, __int64*, __int64,
                                   int) __asm__("CharacterModel_cfb0d0");
__int64 GameRoutine_d2cec0_alt1(int) __asm__("GameRoutine_d2cec0");
__int64 GameRoutine_d2d5e0_alt1(signed int) __asm__("GameRoutine_d2d5e0");
__int64
HubCharacterNatives_ceebc0_alt1(__int64) __asm__("HubCharacterNatives_ceebc0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d2d740_alt1(signed int,
                             signed int) __asm__("GameRoutine_d2d740");
bool nn_g3d_5eb5c0_alt1(__int64, float32x4_t*) __asm__("nn_g3d_5eb5c0");
double GameHr_d1cbc0(__int64, int);
float GameRoutine_d2d9c0_alt1(__int64, __int64,
                              float) __asm__("GameRoutine_d2d9c0");
int __cxa_guard_acquire_alt2(__int64) __asm__("__cxa_guard_acquire");
void CharacterModel_d1a690_alt1(__int64, unsigned int, __int64, __int64,
                                int) __asm__("CharacterModel_d1a690");
void Graph_d29060_alt1(_QWORD*, long double, double) __asm__("Graph_d29060");
void SkeletalBlendCallback_ce4b70_alt1(__int64, int, long double) __asm__(
    "SkeletalBlendCallback_ce4b70");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn))
GameRoutine_cfb8e0_alt1() __asm__("GameRoutine_cfb8e0");
void __cxa_guard_release_alt2(__int64) __asm__("__cxa_guard_release");
void game_zview_CharacterAnim_CommitReduceFlag_alt1(__int64) __asm__(
    "game_zview_CharacterAnim_CommitReduceFlag");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

_QWORD* CharacterModel_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* result;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_zview_CharacterModel_vtable;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 56);
  v4 = *(_QWORD**)(a1 + 64);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 56);
  }
  v5 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 64) = v3;
  *(_QWORD*)(a1 + 336) = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 352) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 344) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  CharacterModel_cf4780_alt1(a1);
  v9 = *(_QWORD*)(a1 + 392);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 376);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 352) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 344) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 336) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  CharacterModel_cfa1b0_alt1(*(_QWORD*)(a1 + 288));
  if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 208);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  v17 = *(_QWORD*)(a1 + 168);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  *(_QWORD*)(a1 + 32) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v18 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v19 = *(_QWORD**)(a1 + 56);
  v20 = *(_QWORD**)(a1 + 64);
  if (v19 != v20) {
    do {
      if (*v19 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 8LL))(*v19);
        *v19 = 0;
      }
      ++v19;
    } while (v19 != v20);
    v19 = *(_QWORD**)(a1 + 56);
  }
  result = *(_QWORD**)(a1 + 112);
  *(_QWORD*)(a1 + 64) = v19;
  if (result == (_QWORD*)(a1 + 80)) {
    v22 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_54;
    }
    v22 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v22))((__int64)result);
  v19 = *(_QWORD**)(a1 + 56);
LABEL_54:
  if (v19 != nullptr) {
    *(_QWORD*)(a1 + 64) = v19;
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v19);
  }
  return result;
}

__int64 CharacterModel_cf4780(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_BYTE*)(a1 + 367) == 1) {
    *(_BYTE*)(a1 + 367) = 0;
  }
  v2 = *(_QWORD*)(a1 + 16);
  do {
    v3 = v2;
    v2 = *(_QWORD*)(v2 + 600);
  } while (v2 != 0);
  v4 = *(_QWORD*)(v3 + 168);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 376);
    v13 = *(_QWORD*)(a1 + 368);
    v14 = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81de20(v4, &v13);
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v6 = *(_QWORD*)(a1 + 392);
    v11 = *(_QWORD*)(a1 + 384);
    v12 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81e020(v4, &v11);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  v7 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  if (*(_QWORD*)(a1 + 312) != 0) {
    GameRoutine_a867a0(a1 + 312);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 312) = 0;
  result = *(_QWORD*)(v9 + 128);
  if (result != 0) {
    result = GameRoutine_1074de0(result);
  }
  *(_BYTE*)(a1 + 225) = 0;
  return result;
}

__int64 game_zview_CharacterModel_SetupReloadAppearance(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  if (*(_QWORD*)(result + 312) != 0) {
    v2 = *(_QWORD*)(result + 232);
    v3 = result;
    if (v2 != 0) {
      GameRoutine_cf5da0(result);
      if (*(_BYTE*)(v3 + 44) != 1 || *(_DWORD*)(v3 + 40) != 1) {
        *(_DWORD*)(v3 + 48) = 1;
        *(_BYTE*)(v3 + 52) = 1;
      }
      if ((*(_BYTE*)(v3 + 128) & 1) == 0 && (*(_BYTE*)(v3 + 129) & 1) != 0) {
        WaitRelease_cfa2a0(v3 + 32);
      }
      *(_BYTE*)(v3 + 225) = 1;
      *(_DWORD*)(v2 + 340) &= 0xFFFFFFE3;
      v7[0] = GameData_1fd8080;
      v7[1] = v3;
      v8 = v7;
      GameRoutine_107e140(v2, a2, v7);
      result = (__int64)v8;
      if (v8 == v7) {
        v6 = 32;
      }
      else {
        if (v8 == nullptr) {
          return result;
        }
        v6 = 40;
      }
      return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
    }
  }
  return result;
}

__int64 CharacterModel_cf4c10(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_BYTE*)(a1 + 96) = 1;
  result = WaitRelease_cfa2a0(a1);
  if (*(_BYTE*)(a1 + 12) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    result = WaitRelease_cfa2a0(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    }
    if (*(_BYTE*)(a1 + 20) == 1) {
      result = WaitRelease_cfa2a0(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      }
      if (*(_BYTE*)(a1 + 20) == 1) {
        result = WaitRelease_cfa2a0(a1);
        if (*(_BYTE*)(a1 + 12) == 1) {
          v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        }
        if (*(_BYTE*)(a1 + 20) == 1) {
          result = WaitRelease_cfa2a0(a1);
          if (*(_BYTE*)(a1 + 12) == 1) {
            v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          }
          if (*(_BYTE*)(a1 + 20) == 1) {
            result = WaitRelease_cfa2a0(a1);
            if (*(_BYTE*)(a1 + 12) == 1) {
              v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
            }
            if (*(_BYTE*)(a1 + 20) == 1) {
              result = WaitRelease_cfa2a0(a1);
              if (*(_BYTE*)(a1 + 12) == 1) {
                v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
              }
              if (*(_BYTE*)(a1 + 20) == 1) {
                result = WaitRelease_cfa2a0(a1);
                if (*(_BYTE*)(a1 + 12) == 1) {
                  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
                }
                if (*(_BYTE*)(a1 + 20) == 1) {
                  result = WaitRelease_cfa2a0(a1);
                  if (*(_BYTE*)(a1 + 12) == 1) {
                    v11 =
                        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
                  }
                  if (*(_BYTE*)(a1 + 20) == 1) {
                    result = WaitRelease_cfa2a0(a1);
                    if (*(_BYTE*)(a1 + 12) == 1) {
                      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                       8LL * *(int*)(a1 + 8));
                      result =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_WORD*)(a1 + 96) = 256;
  return result;
}

__int64 game_zview_CharacterModel_UpdateOutlineBold(__int64 a1)
{
  __int64 v1;
  float v3;
  float v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int128 v12;
  int v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  float v17;
  float v18;
  __int64* v19;
  __int64* i;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float32x4_t v27;
  float v28;
  float32x4_t v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  float32x4_t* v41;
  float32x4_t v42;
  float v43;
  float v44;
  float32x4_t v45;
  int v46;
  __int64 v47;
  float v48;
  float* v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int128 v56;
  int v57;
  float v58;
  float v59;
  float v60;
  float v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  __int64 v68;
  int v69;
  float v71;
  float v72;
  float v73;
  float v74;
  struct {
    _QWORD v75[4];
    _QWORD* v76;
  } v75_;

  v1 = *(_QWORD*)(a1 + 232);
  if (v1 != 0) {
    v3 = (float)(*(float*)(*(_QWORD*)(v1 + 304) + 16LL) *
                 0x1.0aef000000000p+4f) *
         0x1.0624de0000000p-10f;
  }
  else {
    v3 = *(float*)(a1 + 148) *
         (float)((float)(*(float*)(*(_QWORD*)
                                       game_script_hub_g_frame_counter_ptr[0] +
                                   160LL) *
                         0x1.0aef000000000p+4f) /
                 0x1.f400000000000p+9f);
  }
  *(float*)(a1 + 228) = v3;
  v4 = 0x1.0000000000000p+0f;
  v5 = GameData_212eba8[0];
  v7 = *(__int64**)(*GameData_212eba8[0] + 88);
  v6 = *(__int64**)(*GameData_212eba8[0] + 96);
  if (v6 != v7) {
    while (1) {
      v8 = *v7++;
      if (v8 == *(_QWORD*)(a1 + 16)) {
        break;
      }
      if (v7 == v6) {
        v4 = 0x0.0p+0f;
        break;
      }
    }
  }
  v9 = *(_QWORD*)(a1 + 328);
  v10 = game_ProcFadeView_instance_;
  *(float*)(v9 + 80) = v4;
  if (v10 != 0) {
    v11 = v10 + ((unsigned __int64)*(unsigned __int8*)(v10 + 480) << 6);
    if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160);
    }
    else {
      v12 = *(_OWORD*)(v11 + 208);
    }
    if (*((float*)&v12 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
                        v11 + 160, *((float*)&v12 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      v13 = *(_DWORD*)(v9 + 80);
      *(_DWORD*)(v9 + 96) = 0;
      *(_DWORD*)(v9 + 84) = v13;
    }
  }
  *(_BYTE*)(v9 + 100) = 1;
  v14 = *(_QWORD*)(a1 + 16);
  if ((*(_BYTE*)(v14 + 385) & 2) != 0 || (*(_BYTE*)(v14 + 568) & 4) != 0) {
    goto LABEL_61;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
    v15 = *(_QWORD*)(v14 + 168) == 0;
    v16 = *v5;
    if (v15) {
      v17 = 0x1.3333340000000p-1f;
    }
    else {
      v17 = 0x1.0000000000000p-1f;
    }
    if (v15) {
      v18 = 0x1.3333340000000p-1f;
    }
    else {
      v18 = 0x1.0000000000000p+0f;
    }
    v19 = *(__int64**)(v16 + 32);
    for (i = *(__int64**)(v16 + 40); v19 != i; v19 += 2) {
      v21 = *(_QWORD*)(a1 + 16);
      v22 = *v19;
      if ((*(_QWORD*)(v21 + 168) == 0 || *(_QWORD*)(v22 + 168) == 0 ||
           (*(_BYTE*)(v21 + 388) & 2) != 0 ||
           (*(_BYTE*)(v22 + 388) & 2) != 0) &&
          *(_QWORD*)(v22 + 440) > *(_QWORD*)(v21 + 440)) {
        v23 = *(_QWORD*)(*(_QWORD*)(v22 + 8) + 328LL);
        GameRoutine_d60750(v23);
        if (!(*(float*)(v23 + 376) < 0x1.0000000000000p-1f)) {
          v24 = *(_QWORD*)(a1 + 16);
          v25 = *(float*)(v22 + 532);
          v26 = *(float*)(v24 + 532);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
            v30 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v30;
            __cxa_guard_release(&GameData_21a6130);
          }
          if (v24 != v22) {
            v27 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v22 + 16) + 560LL),
                            COERCE_AS(float32x4_t, GameData_21a6120));
            LODWORD(v28) = HIDWORD(*(_QWORD*)(*(_QWORD*)(v24 + 16) + 560LL));
            if ((float)(v28 - *(float*)(v24 + 552)) <=
                    LANES128(v27).n128_f32[1] &&
                v28 >=
                    (float)(LANES128(v27).n128_f32[1] - *(float*)(v22 + 552))) {
              v29 =
                  vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v24 + 16) + 560LL), v27);
              if (!((float)(LANES128_OF(vmulq_f32(v29, v29)).n128_f32[2] +
                            (float)(LANES128(v29).n128_f32[0] *
                                    LANES128(v29).n128_f32[0])) >
                    (float)((float)((float)(PSEUDO_UNFUSED(
                                        v18 * (float)(v26 + v25))) +
                                    -0x1.47ae140000000p-7f) *
                            (float)((float)(PSEUDO_UNFUSED(
                                        v18 * (float)(v26 + v25))) +
                                    -0x1.47ae140000000p-7f)))) {
                goto LABEL_103;
              }
            }
          }
        }
      }
    }
  LABEL_61:
    v48 = *(float*)(a1 + 228);
    v49 = (float*)(a1 + 404);
    *(_DWORD*)(a1 + 400) = 0;
    v50 = fabsf(v48);
    goto LABEL_62;
  }
  v31 = *(unsigned int*)(v14 + 376);
  if ((unsigned int)v31 > 4) {
    goto LABEL_61;
  }
  if (((0x1Bu >> v31) & 1) == 0) {
    goto LABEL_61;
  }
  v32 = *(__int64**)(*v5 + 32);
  v33 = *(__int64**)(*v5 + 40);
  if (v32 == v33) {
    goto LABEL_61;
  }
  v17 = GameData_1b847b8[v31];
  v34 = GameData_1b847cc[v31];
  while (1) {
    v35 = *v32;
    v36 =
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v32 + 16) + 8LL) + 387LL) & 0x40) != 0
            ? 0x1.0000000000000p+0f
            : 0x1.99999a0000000p-2f;
    if (*(_QWORD*)(*v32 + 440) > *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL)) {
      v37 = *(_QWORD*)(*(_QWORD*)(v35 + 8) + 328LL);
      GameRoutine_d60750(v37);
      if (!(*(float*)(v37 + 376) < 0x1.0000000000000p-1f)) {
        v38 = *(_QWORD*)(a1 + 16);
        v39 = *(float*)(v35 + 532);
        v40 = *(float*)(v38 + 532);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v72 = v39;
          v73 = v40;
          v46 = __cxa_guard_acquire(&GameData_21a6130);
          v39 = v72;
          v40 = v73;
          if (v46 != 0) {
            v47 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v47;
            __cxa_guard_release(&GameData_21a6130);
            v39 = v72;
            v40 = v73;
          }
        }
        if (v38 != v35) {
          v41 = *(float32x4_t**)(v35 + 16);
          v42 = vaddq_f32(v41[35], COERCE_AS(float32x4_t, GameData_21a6120));
          LODWORD(v43) = HIDWORD(*(_QWORD*)(*(_QWORD*)(v38 + 16) + 560LL));
          if ((float)(v43 - *(float*)(v38 + 552)) <=
                  LANES128(v42).n128_f32[1] &&
              v43 >=
                  (float)(LANES128(v42).n128_f32[1] - *(float*)(v35 + 552))) {
            v44 = (float)(PSEUDO_UNFUSED((float)(v34 * v36) *
                                         (float)(v40 + v39))) +
                  -0x1.47ae140000000p-7f;
            v45 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v38 + 16) + 560LL), v42);
            if (!((float)(LANES128_OF(vmulq_f32(v45, v45)).n128_f32[2] +
                          (float)(LANES128(v45).n128_f32[0] *
                                  LANES128(v45).n128_f32[0])) >
                  (float)(v44 * v44)) &&
                (*(float*)(a1 + 404) != 0x0.0p+0f ||
                 !((float)((float)(PSEUDO_UNFUSED(
                               LANES128(v41[42]).n128_f32[0] *
                               LANES128(v41[42]).n128_f32[0])) +
                           (float)(LANES128(v41[41]).n128_f32[3] *
                                   LANES128(v41[41]).n128_f32[3])) >=
                   (float)((float)(LANES128(v41[23]).n128_f32[0] *
                                   0x1.99999a0000000p-1f) *
                           (float)(LANES128(v41[23]).n128_f32[0] *
                                   0x1.99999a0000000p-1f))))) {
              break;
            }
          }
        }
      }
    }
    v32 += 2;
    if (v32 == v33) {
      goto LABEL_61;
    }
  }
LABEL_103:
  v71 = *(float*)(a1 + 400);
  v50 = fabsf(*(float*)(a1 + 228));
  if (v71 > v17) {
    v71 = v71 - v50;
    if (!(v71 < v17)) {
      goto LABEL_109;
    }
  LABEL_108:
    v71 = v17;
    goto LABEL_109;
  }
  if (v71 < v17) {
    v71 = v71 + v50;
    if (v71 > v17) {
      goto LABEL_108;
    }
  }
LABEL_109:
  v49 = (float*)(a1 + 404);
  *(float*)(a1 + 400) = v71;
  if (v71 >= v17) {
    v52 = 0x0.0p+0f;
    *v49 = 0x1.99999a0000000p-4f;
    goto LABEL_70;
  }
LABEL_62:
  v51 = *v49;
  if (*v49 > 0x0.0p+0f) {
    v51 = v51 - v50;
    if (!(v51 < 0x0.0p+0f)) {
      goto LABEL_68;
    }
  LABEL_67:
    v51 = 0x0.0p+0f;
    goto LABEL_68;
  }
  if (*v49 < 0x0.0p+0f) {
    v51 = v50 + v51;
    if (v51 > 0x0.0p+0f) {
      goto LABEL_67;
    }
  }
LABEL_68:
  *v49 = v51;
  v52 = 0x1.0000000000000p+0f;
  if (v51 > 0x0.0p+0f) {
    v52 = 0x0.0p+0f;
  }
LABEL_70:
  v53 = *(_QWORD*)(a1 + 328);
  v54 = game_ProcFadeView_instance_;
  *(float*)(v53 + 112) = v52;
  if (v54 != 0) {
    v55 = v54 + ((unsigned __int64)*(unsigned __int8*)(v54 + 480) << 6);
    if (*(float*)(v55 + 172) == *(float*)(v55 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v55 + 160) + 16LL))(v55 + 160);
    }
    else {
      v56 = *(_OWORD*)(v55 + 208);
    }
    if (*((float*)&v56 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v55 + 160) + 16LL))(
                        v55 + 160, *((float*)&v56 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      v57 = *(_DWORD*)(v53 + 112);
      *(_DWORD*)(v53 + 128) = 0;
      *(_DWORD*)(v53 + 116) = v57;
    }
  }
  v58 = 0x0.0p+0f;
  *(_BYTE*)(v53 + 132) = 1;
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 390LL) & 4) != 0) {
    v58 = 0x1.0000000000000p+0f;
  }
  v59 = *(float*)(a1 + 304);
  v60 = fabsf(*(float*)(a1 + 228) / 0x1.3333340000000p-2f);
  if (v59 > v58) {
    v61 = v59 - v60;
    if (!((float)(v59 - v60) < v58)) {
      goto LABEL_85;
    }
    goto LABEL_84;
  }
  v61 = *(float*)(a1 + 304);
  if (v59 < v58) {
    v61 = v59 + v60;
    if ((float)(v59 + v60) > v58) {
    LABEL_84:
      v61 = v58;
    }
  }
LABEL_85:
  if (vabds_f32(v61, v59) > 0x1.0000000000000p-23f) {
    v62 = *(_QWORD**)(a1 + 232);
    if (v62 != nullptr) {
      v75_.v76 = v75_.v75;
      v75_.v75[0] = GameData_1fd8520;
      v75_.v75[1] = &v74;
      v74 = (float)(v59 * 0x1.99999a0000000p-4f) + 0x1.0000000000000p+0f;
      CharacterBuilder_1083e90(v62, (__int64)v75_.v75);
      if (v75_.v76 == v75_.v75) {
        v63 = 32;
      }
      else {
        if (v75_.v76 == nullptr) {
        LABEL_92:
          *(float*)(a1 + 304) = v61;
          goto LABEL_93;
        }
        v63 = 40;
      }
      (*(void (**)(__int64))(*v75_.v76 + v63))((__int64)v75_.v76);
      goto LABEL_92;
    }
  }
LABEL_93:
  v64 = *(_QWORD*)(a1 + 160);
  if (v64 != 0) {
    v65 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 384LL);
    if ((v65 & 8) != 0) {
      v66 = 3;
    }
    else {
      v66 = 1;
    }
    if ((v65 & 4) != 0) {
      v67 = 2;
    }
    else {
      v67 = v66;
    }
    *(_DWORD*)(v64 + 120) = v67;
    v68 = *(_QWORD*)(a1 + 160);
    v69 = *(_DWORD*)(a1 + 184) < 1;
    if (*(unsigned __int8*)(v68 + 232) != v69) {
      *(_BYTE*)(v68 + 232) = v69;
    }
  }
  GameRoutine_10cae60(*(_QWORD*)(a1 + 336), 0);
  return GameRoutine_d60390(*(_QWORD*)(a1 + 328));
}

void CharacterModel_cf55e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t* v12;
  float32x4_t v13;
  __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  bool v19;
  __int64 v20;
  __int64* v21;
  int v22;
  int v23;
  char v24;
  char v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE* v28;
  bool v29;
  float32x4_t* v30;
  float32x4_t v31;
  __int64 v32;
  float32x4_t v33;
  __int64 v34;
  long double v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v38;
  int v39;
  int v40;
  char v41;
  char v42;
  _BYTE* v43;
  __int64 v44;
  _BYTE* v45;
  bool v46;
  _BYTE v47[240];
  struct {
    float32x4_t v48;
    int v49;
  } v48_;

  if (*(_BYTE*)(a1 + 145) != 1) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 16);
  v3 = GameData_212dc38[0];
  if (v1 != 0) {
    v4 = *(char**)(GameData_220b6f0 + 160);
    v5 = *(char**)(GameData_220b6f0 + 168);
    if (v4 != v5) {
      v6 = v5 - v4 - 8;
      if ((~(_BYTE)v6 & 0x18) != 0) {
        v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
        do {
          v8 = *(_QWORD*)v4;
          v4 += 8;
          if (v8 == v1) {
            goto LABEL_21;
          }
        } while (--v7 != 0);
      }
      if (v6 >= 0x18) {
        while (*(_QWORD*)v4 != v1 && *((_QWORD*)v4 + 1) != v1 &&
               *((_QWORD*)v4 + 2) != v1 && *((_QWORD*)v4 + 3) != v1) {
          v4 += 32;
          if (v4 == v5) {
            goto LABEL_9;
          }
        }
      LABEL_21:
        v14 = *(_QWORD*)(a1 + 264);
        v15 = (unsigned __int64*)(a1 + 264);
        v16 = v14 & 0xFFFFFFFEFFFFFFFFLL;
        goto LABEL_28;
      }
    }
  }
LABEL_9:
  v9 = *(_QWORD*)(a1 + 328);
  GameRoutine_d60750(v9);
  if ((*(_BYTE*)(v9 + 380) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 16);
    if (*(_BYTE*)(v10 + 540) == 1) {
      GameRoutine_edf510_alt1((void*)((__int64)v47), *(_QWORD*)v3 + 16LL);
      LANES128(v11).n128_u32[0] = 0;
      LANES128(v11).n128_u64[1] = 0;
      if ((*(_BYTE*)(v10 + 568) & 2) != 0 ||
          (v12 = *(float32x4_t**)(*(_QWORD*)(v10 + 8) + 240LL)) == nullptr) {
        LANES128(v11).n128_f32[1] =
            *(float*)(v10 + 544) * 0x1.99999a0000000p-1f;
        v13 = vaddq_f32(v11, *(float32x4_t*)(*(_QWORD*)(v10 + 16) + 560LL));
      }
      else {
        v13 = v12[3];
      }
      if ((*(_BYTE*)(v10 + 540) & 1) == 0) {
        GameRoutine_8123d0_alt1();
      }
      v18 = *(_DWORD*)(v10 + 536);
      v48_.v48 = v13;
      v48_.v49 = v18;
      v19 = nn_g3d_5eb5c0_alt1((__int64)v47, &v48_.v48);
      v17 = 0x100000000LL;
      if (v19) {
        v17 = 0;
      }
    }
    else {
      v17 = 0;
    }
    v14 = *(_QWORD*)(a1 + 264);
    v15 = (unsigned __int64*)(a1 + 264);
    v16 = v14 & 0xFFFFFFFEFFFFFFFFLL | v17;
  }
  else {
    v14 = *(_QWORD*)(a1 + 264);
    v15 = (unsigned __int64*)(a1 + 264);
    v16 = v14 | 0x100000000LL;
  }
LABEL_28:
  *v15 = v16;
  if (v14 == v16) {
    goto LABEL_48;
  }
  v20 = *(_QWORD*)(a1 + 232);
  if (v20 != 0) {
    if ((*(_BYTE*)(a1 + 224) & 1) != 0 && (v16 & 0x180000000LL) == 0) {
      v21 = *(__int64**)(v20 + 104);
      v22 = (v16 & 1) == 0;
      v23 = *((unsigned __int8*)v21 + 16);
      if (v22 == v23) {
        goto LABEL_47;
      }
    }
    else {
      v21 = *(__int64**)(v20 + 104);
      if ((v21[2] & 1) == 0) {
        goto LABEL_47;
      }
      v22 = 0;
      v23 = 1;
    }
    if (v23 != v22) {
      v24 = *((_BYTE*)v21 + 17);
      *((_BYTE*)v21 + 16) = v22;
      if (v22 != 0) {
        v25 = 0;
      }
      else {
        v25 = 2;
      }
      *((_BYTE*)v21 + 17) = v24 & 0xFD | v25;
      *((_BYTE*)v21 + 18) = *((_BYTE*)v21 + 18) & 0xFD | v25;
      *((_BYTE*)v21 + 19) = *((_BYTE*)v21 + 19) & 0xFD | v25;
      *((_BYTE*)v21 + 20) = *((_BYTE*)v21 + 20) & 0xFD | v25;
      v26 = (_BYTE*)v21[1];
      v26[632] = 0;
      v26[664] = 0;
      v26[696] = 0;
      v26[728] = 0;
      v27 = *v21;
      if (v22 != 0) {
        (*(void (**)(__int64*))(v27 + 64))(v21);
        v28 = (_BYTE*)v21[1];
        v29 = v28[300] == 3 && v28[301] == 3;
        if (!v29 && v28[302] != 1) {
          goto LABEL_47;
        }
        v27 = *v21;
      }
      (*(void (**)(__int64*))(v27 + 72))(v21);
    }
  }
LABEL_47:
  game_zview_CharacterAnim_CommitReduceFlag_alt1(*(_QWORD*)(a1 + 344));
  HubCharacterNatives_ceebc0_alt1(*(_QWORD*)(a1 + 16));
LABEL_48:
  v30 = *(float32x4_t**)(*(_QWORD*)(a1 + 16) + 16LL);
  *(long double*)&v31 =
      ((long double (*)(__int64)) *
       (_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 16LL) + 40LL))(*(_QWORD*)v3 + 16LL);
  v32 = *(_QWORD*)(a1 + 264);
  v33 = vsubq_f32(v30[35], v31);
  v35 = COERCE_LONG_DOUBLE(vmulq_f32(v33, v33));
  *(float32x2_t*)&v35 = vadd_f32(
      COERCE_AS(float32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)&v35, *(int8x16_t*)&v35, 8u))
                    .n128_u64[0]),
      *(float32x2_t*)&v35);
  v34 = 0x40000000;
  *(float32x2_t*)&v35 = vpadd_f32(*(float32x2_t*)&v35, *(float32x2_t*)&v35);
  if (*(float*)&v35 <= 0x1.9000000000000p+8f) {
    v34 = 0;
  }
  v36 = v34 | v32 & 0xFFFFFFFFBFFFFFFFLL;
  *(_QWORD*)(a1 + 264) = v36;
  if (v32 != v36) {
    v37 = *(_QWORD*)(a1 + 232);
    if (v37 != 0) {
      if ((*(_BYTE*)(a1 + 224) & 1) != 0 && (v32 & 0x180000000LL) == 0) {
        v38 = *(__int64**)(v37 + 104);
        v39 = (v32 & 1) == 0;
        v40 = *((unsigned __int8*)v38 + 16);
        if (v39 == v40) {
          goto LABEL_70;
        }
      }
      else {
        v38 = *(__int64**)(v37 + 104);
        if ((v38[2] & 1) == 0) {
          goto LABEL_70;
        }
        v39 = 0;
        v40 = 1;
      }
      if (v40 != v39) {
        v41 = *((_BYTE*)v38 + 17);
        *((_BYTE*)v38 + 16) = v39;
        if (v39 != 0) {
          v42 = 0;
        }
        else {
          v42 = 2;
        }
        *((_BYTE*)v38 + 17) = v41 & 0xFD | v42;
        *((_BYTE*)v38 + 18) = *((_BYTE*)v38 + 18) & 0xFD | v42;
        *((_BYTE*)v38 + 19) = *((_BYTE*)v38 + 19) & 0xFD | v42;
        *((_BYTE*)v38 + 20) = *((_BYTE*)v38 + 20) & 0xFD | v42;
        v43 = (_BYTE*)v38[1];
        v43[632] = 0;
        v43[664] = 0;
        v43[696] = 0;
        v43[728] = 0;
        v44 = *v38;
        if (v39 != 0) {
          (*(void (**)(__int64*, long double))(v44 + 64))(v38, v35);
          v45 = (_BYTE*)v38[1];
          v46 = v45[300] == 3 && v45[301] == 3;
          if (!v46 && v45[302] != 1) {
            goto LABEL_70;
          }
          v44 = *v38;
        }
        (*(void (**)(__int64*, long double))(v44 + 72))(v38, v35);
      }
    }
  LABEL_70:
    game_zview_CharacterAnim_CommitReduceFlag_alt1(*(_QWORD*)(a1 + 344));
    HubCharacterNatives_ceebc0_alt1(*(_QWORD*)(a1 + 16));
  }
}

__int64 CharacterModel_cf5a50(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  bool v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int128 v8;
  float v9;
  int v10;
  int v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int128 v19;
  float v20;
  int v21;

  if (*(_BYTE*)(a1 + 145) != 1) {
    return CharacterModel_cf5c00(a1);
  }
  v1 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 592LL);
  if (*(_DWORD*)(a1 + 360) == v1) {
    return CharacterModel_cf5c00(a1);
  }
  *(_DWORD*)(a1 + 360) = v1;
  v2 = v1 == 1;
  v3 = 0x0.0p+0f;
  v4 = *(_QWORD*)(a1 + 328);
  v5 = a1;
  v6 = game_ProcFadeView_instance_;
  if (!v2) {
    v3 = 0x1.0000000000000p+0f;
  }
  *(float*)(v4 + 48) = v3;
  if (v6 != 0) {
    v7 = v6 + ((unsigned __int64)*(unsigned __int8*)(v6 + 480) << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
      a1 = v5;
    }
    else {
      v8 = *(_OWORD*)(v7 + 208);
    }
    if (*((float*)&v8 + 3) == 0x1.0000000000000p+0f) {
      LODWORD(v9) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                 (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
                                    v7 + 160, *((float*)&v8 + 3)))
                        .n128_u32[3];
      a1 = v5;
      if (v9 == 0x1.0000000000000p+0f) {
        v10 = *(_DWORD*)(v4 + 48);
        *(_DWORD*)(v4 + 64) = 0;
        *(_DWORD*)(v4 + 52) = v10;
      }
    }
  }
  *(_BYTE*)(v4 + 68) = 1;
  v11 = *(_DWORD*)(a1 + 360);
  if (v11 == 2) {
    v16 = *(_QWORD*)(a1 + 328);
    v17 = game_ProcFadeView_instance_;
    *(_DWORD*)(v16 + 16) = 0;
    if (v17 != 0) {
      v18 = v17 + ((unsigned __int64)*(unsigned __int8*)(v17 + 480) << 6);
      if (*(float*)(v18 + 172) == *(float*)(v18 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v18 + 160) + 16LL))(v18 +
                                                                       160);
        a1 = v5;
      }
      else {
        v19 = *(_OWORD*)(v18 + 208);
      }
      if (*((float*)&v19 + 3) == 0x1.0000000000000p+0f) {
        LODWORD(v20) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                    (_QWORD*)(*(_QWORD*)(v18 + 160) + 16LL))(
                                       v18 + 160, *((float*)&v19 + 3)))
                           .n128_u32[3];
        a1 = v5;
        if (v20 == 0x1.0000000000000p+0f) {
          v21 = *(_DWORD*)(v16 + 16);
          *(_DWORD*)(v16 + 32) = 0;
          *(_DWORD*)(v16 + 20) = v21;
        }
      }
    }
    *(_BYTE*)(v16 + 36) = 1;
    return CharacterModel_cf5c00(a1);
  }
  v2 = v11 == 3;
  v12 = *(_QWORD*)(a1 + 328);
  v13 = 0x0.0p+0f;
  if (!v2) {
    v13 = 0x1.0000000000000p+0f;
  }
  v14 = *(_QWORD*)(v12 + 360);
  *(_DWORD*)(v12 + 32) = 0;
  *(float*)(v12 + 16) = v13;
  *(float*)(v12 + 20) = v13;
  *(_BYTE*)(v12 + 36) = 1;
  *(_BYTE*)(v12 + 369) = 1;
  CharacterModel_cf5c00(v14);
  return CharacterModel_cf5c00(v5);
}

__int64 CharacterModel_cf5c00(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 (**v13)();
    float v14;
    char gap12_[20];
    __int64 (***v15)();
  } v13_;

  v1 = 0x0.0p+0f;
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 512LL) - 1) >= 2) {
    v3 = *(_QWORD*)(a1 + 328);
    GameRoutine_d60750(v3);
    v1 = *(float*)(v3 + 376);
  }
  v4 = *(_QWORD*)(a1 + 328);
  result = GameRoutine_d60750(v4);
  v6 = *(unsigned __int8*)(v4 + 380);
  v7 = *(_QWORD*)(a1 + 232);
  if (v7 == 0) {
    goto LABEL_24;
  }
  if (v1 > 0x0.0p+0f) {
    v8 = 0x1.0000000000000p+0f;
    if (v1 < 0x1.0000000000000p+0f) {
      v9 = (float)(v1 + -0x1.99999a0000000p-5f) / 0x1.8000000000000p-1f;
      if (v9 <= 0x1.0000000000000p+0f) {
        v8 = (float)(v1 + -0x1.99999a0000000p-5f) / 0x1.8000000000000p-1f;
      }
      if (v9 >= 0x0.0p+0f) {
        v1 = v8;
      }
      else {
        v1 = 0x0.0p+0f;
      }
    }
  }
  v10 = fmaxf(v1, 0x1.0624de0000000p-10f);
  if (v6 != 0) {
    v1 = v10;
  }
  if (*(float*)(v7 + 348) == v1) {
    goto LABEL_24;
  }
  *(float*)(v7 + 348) = v1;
  v13_.v14 = v1;
  v13_.v13 = GameData_20076d8;
  v13_.v15 = &v13_.v13;
  CharacterBuilder_1083e90((_QWORD*)v7, (__int64)&v13_.v13);
  if (v13_.v15 == &v13_.v13) {
    v11 = 4;
    goto LABEL_18;
  }
  if (v13_.v15 != nullptr) {
    v11 = 5;
  LABEL_18:
    ((__int64 (*)(__int64))(*v13_.v15)[v11])((__int64)v13_.v15);
  }
  v13_.v14 = v1;
  v13_.v13 = GameData_2007758;
  v13_.v15 = &v13_.v13;
  CharacterBuilder_1083e90((_QWORD*)v7, (__int64)&v13_.v13);
  result = (__int64)v13_.v15;
  if (v13_.v15 == &v13_.v13) {
    v12 = 4;
  }
  else {
    if (v13_.v15 == nullptr) {
      goto LABEL_24;
    }
    v12 = 5;
  }
  result = ((__int64 (*)(__int64))(*v13_.v15)[v12])((__int64)v13_.v15);
LABEL_24:
  if (*(_BYTE*)(a1 + 145) == 1) {
    result = HubCharacterNatives_cf7940(a1);
    if (result != 0) {
      *(_BYTE*)(result + 289) = v6;
    }
  }
  return result;
}

char* CharacterModel_cf5da0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  bool v11;
  _QWORD* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* result;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  int v37;
  char* v38;
  __int64 v39;

  if (*(_QWORD*)(a1 + 312) != 0 && (*(_BYTE*)(a1 + 145) & 1) != 0) {
    v2 = HubCharacterNatives_cf7940(a1);
    if (v2 != 0 && *(_BYTE*)(v2 + 288) != 0) {
      *(_BYTE*)(v2 + 288) = 0;
    }
  }
  if (*(_QWORD*)(a1 + 272) != 0) {
    v3 = *(_QWORD**)(a1 + 280);
    if (v3 != (_QWORD*)(a1 + 288)) {
      do {
        v8 = (__int64*)v3[7];
        if (v8 != nullptr) {
          LocatorModule_a7c2c0(*(__int64**)(a1 + 272), *v8);
        }
        v9 = (_QWORD*)v3[1];
        if (v9 != nullptr) {
          do {
            v10 = v9;
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
        else {
          do {
            v10 = (_QWORD*)v3[2];
            v11 = v3 == (_QWORD*)*v10;
            v3 = v10;
          } while (!v11);
        }
        v3 = v10;
      } while (v10 != (_QWORD*)(a1 + 288));
    }
  }
  CharacterModel_cfa1b0(*(_QWORD**)(a1 + 288));
  *(_QWORD*)(a1 + 280) = a1 + 288;
  v4 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 145) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 260) = 0;
  *(_DWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  if (*(_DWORD*)(v5 + 360) == -2) {
    v6 = *(_QWORD*)(v5 + 272);
    v7 = *(_QWORD*)(v5 + 280);
    while (v6 != v7) {
      if (*(_BYTE*)(v6 + 20) == 1 && *(float*)(v6 + 16) == 0x0.0p+0f &&
          GameRoutine_d2d4e0()) {
        v12 = (_QWORD*)(v6 + 16);
        v13 = *(unsigned __int8*)(v5 + 88);
        *(_DWORD*)(v5 + 24) = *(_DWORD*)v6;
        if (v13 == 1) {
          *(_DWORD*)(v5 + 32) = *(_QWORD*)(v6 + 8);
          *(_DWORD*)(v5 + 36) = *(_DWORD*)(v6 + 12);
          v14 = *(_QWORD*)(v6 + 24);
          *(_QWORD*)(v5 + 40) = *v12;
          *(_QWORD*)(v5 + 48) = v14;
          v15 = *(_QWORD*)(v6 + 32);
          v16 = *(_QWORD*)(v6 + 40);
          v17 = *(_QWORD*)(v6 + 56);
          *(_QWORD*)(v5 + 72) = *(_QWORD*)(v6 + 48);
          *(_QWORD*)(v5 + 80) = v17;
          *(_QWORD*)(v5 + 56) = v15;
          *(_QWORD*)(v5 + 64) = v16;
        }
        else {
          *(_QWORD*)(v5 + 32) = *(_QWORD*)(v6 + 8);
          v18 = *(_QWORD*)(v6 + 24);
          *(_QWORD*)(v5 + 40) = *v12;
          *(_QWORD*)(v5 + 48) = v18;
          v19 = *(_QWORD*)(v6 + 32);
          v20 = *(_QWORD*)(v6 + 40);
          v21 = *(_QWORD*)(v6 + 56);
          *(_QWORD*)(v5 + 72) = *(_QWORD*)(v6 + 48);
          *(_QWORD*)(v5 + 80) = v21;
          *(_QWORD*)(v5 + 56) = v19;
          *(_QWORD*)(v5 + 64) = v20;
          *(_BYTE*)(v5 + 88) = 1;
        }
        break;
      }
      v6 += 64;
    }
  }
  if (*(_BYTE*)(v5 + 346) == 1) {
    v22 = *(unsigned __int8*)(v5 + 88);
    *(_DWORD*)(v5 + 24) = *(_DWORD*)(v5 + 296);
    if (v22 == 1) {
      v23 = *(_QWORD*)(v5 + 336);
      v24 = *(_QWORD*)(v5 + 304);
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(v5 + 328);
      *(_QWORD*)(v5 + 64) = v23;
      v25 = *(_QWORD*)(v5 + 344);
      v26 = *(_QWORD*)(v5 + 352);
      *(_QWORD*)(v5 + 32) = v24;
      *(_QWORD*)(v5 + 72) = v25;
      *(_QWORD*)(v5 + 80) = v26;
      v27 = *(_QWORD*)(v5 + 320);
      *(_QWORD*)(v5 + 40) = *(_QWORD*)(v5 + 312);
      *(_QWORD*)(v5 + 48) = v27;
    }
    else {
      v28 = *(_QWORD*)(v5 + 344);
      *(_QWORD*)(v5 + 64) = *(_QWORD*)(v5 + 336);
      *(_QWORD*)(v5 + 72) = v28;
      *(_QWORD*)(v5 + 80) = *(_QWORD*)(v5 + 352);
      v29 = *(_QWORD*)(v5 + 312);
      *(_QWORD*)(v5 + 32) = *(_QWORD*)(v5 + 304);
      *(_QWORD*)(v5 + 40) = v29;
      v30 = *(_QWORD*)(v5 + 328);
      *(_QWORD*)(v5 + 48) = *(_QWORD*)(v5 + 320);
      *(_QWORD*)(v5 + 56) = v30;
      *(_BYTE*)(v5 + 88) = 1;
    }
  }
  v31 = *(_QWORD*)(a1 + 344);
  GameRoutine_d18da0(v31 + 96);
  result = (char*)GameRoutine_d18da0(v31 + 184);
  v33 = *(_QWORD*)(a1 + 232);
  if (v33 != 0) {
    v34 = *(unsigned __int8*)(a1 + 256);
    *(float*)(a1 + 228) = (float)(*(float*)(*(_QWORD*)(v33 + 304) + 16LL) *
                                  0x1.0aef000000000p+4f) *
                          0x1.0624de0000000p-10f;
    if (v34 != 0) {
      v35 = *(_QWORD*)(v33 + 120);
      v36 = *(unsigned __int8*)(a1 + 324);
      *(_BYTE*)(a1 + 256) = 0;
      if (v36 == 1) {
        v37 = *(_DWORD*)(a1 + 320);
        if (v37 != 0) {
          result = *(char**)(v35 + 120);
          v38 = *(char**)(v35 + 128);
          if (result != v38) {
            do {
              if (v37 == *(_DWORD*)result) {
                *(_DWORD*)result = 0;
              }
              result += 80;
            } while (result != v38);
            result = *(char**)(v35 + 120);
            v38 = *(char**)(v35 + 128);
          }
          if (0xCCCCCCCCCCCCCCCDLL * ((v38 - result) >> 4) >= 0x40) {
            v39 = CharacterModel_cfb400((__int64)result, (__int64)v38);
            result = (char*)CharacterModel_cfb240((__int64*)(v35 + 120), v39,
                                                  *(_QWORD*)(v35 + 128));
          }
        }
        if (*(_BYTE*)(a1 + 324) == 1) {
          *(_BYTE*)(a1 + 324) = 0;
        }
      }
    }
  }
  else {
    *(float*)(a1 + 228) =
        *(float*)(a1 + 148) *
        (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
  }
  return result;
}

__int64 game_zview_CharacterModel_SetActiveSignal(__int64 result, char a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _DWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  if (*(_BYTE*)(result + 256) != (a2 & 1)) {
    v4 = *(_QWORD**)(result + 232);
    if (v4 != nullptr) {
      v5 = v4[15];
      *(_BYTE*)(result + 256) = a2 & 1;
      if ((a2 & 1) != 0) {
        v6 = v4[6];
        v7 = v4[7];
        v8 = result;
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v18_.v18 = v6;
          v18_.v19 = v7;
          v16_.v16[0] = GameData_1fd8490;
          v16_.v16[1] = result;
          v16_.v17 = v16_.v16;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
        else {
          v18_.v18 = v4[6];
          v18_.v19 = 0;
          v16_.v16[0] = GameData_1fd8490;
          v16_.v16[1] = result;
          v16_.v17 = v16_.v16;
        }
        v12 = CharacterModel_cfb0d0_alt1((_QWORD*)(v5 + 120), &v18_.v18,
                                         (__int64)v16_.v16, 1);
        if (v18_.v19 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v18_.v19);
        }
        result = (__int64)v16_.v17;
        *(_DWORD*)(v8 + 320) = v12;
        *(_BYTE*)(v8 + 324) = 1;
        if ((_QWORD*)result == v16_.v16) {
          v13 = 32;
        }
        else {
          if (result == 0) {
            goto LABEL_21;
          }
          v13 = 40;
        }
        result =
            (*(__int64 (**)(__int64))(*(_QWORD*)result + v13))((__int64)result);
      LABEL_21:
        if (v7 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v7);
        }
        return result;
      }
      if (*(_BYTE*)(result + 324) == 1) {
        v9 = *(_DWORD*)(result + 320);
        if (v9 != 0) {
          v11 = *(_DWORD**)(v5 + 120);
          v10 = *(_QWORD*)(v5 + 128);
          if (v11 != (_DWORD*)v10) {
            do {
              if (v9 == *v11) {
                *v11 = 0;
              }
              v11 += 20;
            } while (v11 != (_DWORD*)v10);
            v11 = *(_DWORD**)(v5 + 120);
            v10 = *(_QWORD*)(v5 + 128);
          }
          if (0xCCCCCCCCCCCCCCCDLL * ((v10 - (__int64)v11) >> 4) >= 0x40) {
            v14 = result;
            v15 = CharacterModel_cfb400((__int64)v11, v10);
            CharacterModel_cfb240((__int64*)(v5 + 120), v15,
                                  *(_QWORD*)(v5 + 128));
            result = v14;
          }
        }
        if (*(_BYTE*)(result + 324) == 1) {
          *(_BYTE*)(result + 324) = 0;
        }
      }
    }
  }
  return result;
}

__int64 (***CharacterModel_cf67d0(__int64 (***result)()))()
{
  __int64 (**v1)();
  __int64 (**v2)();
  __int64 (**v3)();
  int v4;
  int v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 (**v10)();
    int v11;
    char gap12_[20];
    __int64 (***v12)();
  } v10_;

  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1) {
    return result;
  }
  v1 = result[29];
  if (v1 == nullptr) {
    return result;
  }
  v2 = result[2];
  v3 = result[29];
  v10_.v12 = &v10_.v10;
  v4 = *((_DWORD*)v2 + 119);
  v5 = (v4 << 29 >> 31) & 5;
  if ((v4 & 2) != 0) {
    v5 = 2;
  }
  v10_.v10 = GameData_1fd85a0;
  v10_.v11 = v5;
  CharacterBuilder_1083e90(v3, (__int64)&v10_.v10);
  if (v10_.v12 == &v10_.v10) {
    v6 = 4;
  }
  else {
    if (v10_.v12 == nullptr) {
      goto LABEL_10;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v10_.v12)[v6])((__int64)v10_.v12);
LABEL_10:
  v10_.v10 = GameData_2007458;
  v7 = (v4 & 8) == 0;
  v10_.v12 = &v10_.v10;
  LOBYTE(v10_.v11) = v7;
  CharacterBuilder_1083e90(v1, (__int64)&v10_.v10);
  if (v10_.v12 == &v10_.v10) {
    v8 = 4;
    goto LABEL_14;
  }
  if (v10_.v12 != nullptr) {
    v8 = 5;
  LABEL_14:
    ((void (*)(__int64 (***)(void)))(*v10_.v12)[v8])(v10_.v12);
  }
  LOBYTE(v10_.v11) = v7;
  v10_.v10 = GameData_20074d8;
  v10_.v12 = &v10_.v10;
  CharacterBuilder_1083e90(v1, (__int64)&v10_.v10);
  result = v10_.v12;
  if (v10_.v12 == &v10_.v10) {
    v9 = 4;
  }
  else {
    if (v10_.v12 == nullptr) {
      return result;
    }
    v9 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v10_.v12)[v9])(
      (__int64)v10_.v12);
}

__int64 CharacterModel_cf6940(__int64 a1, double a2, double a3)
{

#pragma clang fp contract(off)
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float32x4_t* v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  __int64** v15;
  __int64** v16;
  float v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int128 v21;
  char v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned __int8 explicit;
  int* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  bool v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  float v44;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;

  if ((*(_BYTE*)(a1 + 226) & 1) == 0) {
    *(_BYTE*)(a1 + 226) = 1;
  }
  *(_QWORD*)(a1 + 400) = 0;
  v4 = *GameData_212d168;
  if (*GameData_212d168 != 1) {
    v5 = v4 == 4 || v4 == 2;
    *(_BYTE*)(a1 + 364) = 1;
    if (v5 && *(_BYTE*)(a1 + 145) == 1) {
      v6 = HubCharacterNatives_cf7940(a1);
      if (v6 != 0 && (*(_BYTE*)(v6 + 288) & 1) == 0) {
        *(_BYTE*)(v6 + 288) = 1;
      }
    }
    if (*(_BYTE*)(a1 + 145) == 1) {
      v7 = HubCharacterNatives_cf7940(a1);
      if (v7 != 0) {
        *(_BYTE*)(v7 + 289) = 1;
      }
    }
    v8 = *(_QWORD*)(a1 + 232);
    if (v8 != 0) {
      *(_DWORD*)(v8 + 336) = 1065353216;
      v9 = *(_QWORD*)(v8 + 392);
      if (v9 != 0) {
        v10 = *(float32x4_t**)(v8 + 8);
        *(float*)&a3 = *(float*)(v9 + 40) +
                       (float)(0x1.0000000000000p+0f - *(float*)(v9 + 40));
        v11 = vdupq_lane_s32(*(int32x2_t*)&a3, 0);
        LANES128(v11).n128_u32[3] = 0;
        v12 = vsubq_f32(v10[22], v11);
        v13 = vmulq_f32(v12, v12);
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                    .n64_f32[0],
                0x0.0p+0f)) {
          LANES128(v10[22]).n128_u32[0] = LODWORD(a3);
          LANES128(v10[22]).n128_u32[1] = LODWORD(a3);
          v14 = v10[22];
          LANES128(v10[18]).n128_u32[2] |= 1u;
          LANES128(v14).n128_u64[1] = LODWORD(a3);
          v10[22] = v14;
          v9 = *(_QWORD*)(v8 + 392);
        }
        v15 = *(__int64***)(v8 + 528);
        v16 = *(__int64***)(v8 + 536);
        if (v15 != v16) {
          v17 = *(float*)(v9 + 44) +
                (float)(0x1.0000000000000p+0f - *(float*)(v9 + 44));
          v44 = v17;
          do {
            v19 = *v15;
            *((float*)v19 + 28) = v17;
            *((float*)v19 + 29) = v17;
            v20 = *v19;
            v21 = *((_OWORD*)v19 + 7);
            *((_DWORD*)v19 + 32) |= 0x20u;
            v22 = *((_BYTE*)v19 + 28);
            *((_QWORD*)&v21 + 1) = LODWORD(v17);
            *((_OWORD*)v19 + 7) = v21;
            if ((v22 & 1) != 0) {
              goto LABEL_25;
            }
            v23 = *(_QWORD*)(v20 + 24);
            v24 = *((_DWORD*)v19 + 4);
            v45_.v45[0] = GameData_1fc0970;
            v45_.v45[1] = v20;
            v45_.v45[2] = v19;
            v45_.v46 = v45_.v45;
            v25 = Model_a661a0(v23, v24, (__int64)v45_.v45, 0);
            if (v45_.v46 == v45_.v45) {
              v18 = 32;
            }
            else {
              if (v45_.v46 == nullptr) {
                goto LABEL_24;
              }
              v18 = 40;
            }
            (*(void (**)(__int64))(*v45_.v46 + v18))((__int64)v45_.v46);
          LABEL_24:
            v17 = v44;
            *((_DWORD*)v19 + 6) = v25;
            *((_BYTE*)v19 + 28) = 1;
          LABEL_25:
            ++v15;
            *(_BYTE*)(*(_QWORD*)(v20 + 24) + 504LL) = 1;
          } while (v15 != v16);
        }
        CharacterBuilder_1083840(v8);
      }
    }
  }
  if (*(_BYTE*)(a1 + 145) == 1) {
    v26 = HubCharacterNatives_cf7940(a1);
    if (v26 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                                      memory_order_acquire);
      v28 = GameData_212ec68;
      if ((explicit & 1) == 0) {
        v42 = v26;
        v43 = __cxa_guard_acquire(GameData_212ec70);
        v26 = v42;
        if (v43 != 0) {
          *v28 = wld_Crc32_alt1(0, "HitboxModule", 0xCu);
          __cxa_guard_release(GameData_212ec70);
          v26 = v42;
        }
      }
      v29 = *(_QWORD*)(v26 + 512);
      v30 = v29;
      while (v30 != *(_QWORD*)(v26 + 504)) {
        v31 = *(_DWORD*)(v30 - 16);
        v30 -= 16;
        v29 -= 16;
        if (v31 == *v28) {
          if (*(_QWORD*)(v26 + 512) != v29) {
            v32 = *(_QWORD*)(v29 + 8);
            if (v32 != 0 && (*(_BYTE*)(v32 + 16) & 1) == 0) {
              v33 = *(_QWORD*)(v29 + 8);
              *(_BYTE*)(v32 + 16) = 1;
              *(_BYTE*)(v32 + 17) &= ~2u;
              *(_BYTE*)(v32 + 18) &= ~2u;
              *(_BYTE*)(v32 + 19) &= ~2u;
              *(_BYTE*)(v32 + 20) &= ~2u;
              v34 = *(_BYTE**)(v32 + 8);
              v34[632] = 0;
              v34[664] = 0;
              v34[696] = 0;
              v34[728] = 0;
              (*(void (**)(__int64))(*(_QWORD*)v32 + 64LL))(v33);
              v35 = *(_BYTE**)(v32 + 8);
              v36 = v35[300] == 3 && v35[301] == 3;
              if (v36 || v35[302] == 1) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 72LL))(v32);
              }
            }
          }
          break;
        }
      }
    }
  }
  GameRoutine_10cbe60(*(_QWORD*)(a1 + 336));
  GameRoutine_d19c40(*(_QWORD**)(a1 + 344));
  v37 = *(_QWORD*)(a1 + 352);
  result = GameRoutine_10c0490(v37, 0x100000000LL);
  v39 = *(_QWORD*)(v37 + 8);
  if (*(_BYTE*)(v39 + 145) == 1) {
    v40 = *(_QWORD*)(v39 + 232);
    if (v40 != 0) {
      v41 = *(_QWORD*)(v40 + 88);
      if (v41 != 0) {
        *(_DWORD*)(v41 + 340) = 0;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  result = HubCharacterNatives_cf7940(a1);
  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                    memory_order_acquire);
    v5 = GameData_212deb0;
    if ((explicit & 1) == 0) {
      v14 = result;
      v13 = __cxa_guard_acquire_alt2((__int64)GameData_212deb8);
      v5 = GameData_212deb0;
      result = v14;
      if (v13 != 0) {
        *GameData_212deb0 = wld_Crc32_alt1(0, "CharacterBuilder", 0x10u);
        __cxa_guard_release_alt2((__int64)GameData_212deb8);
        v5 = GameData_212deb0;
        result = v14;
      }
    }
    v6 = *v5;
    v7 = *(_QWORD*)(result + 512);
    v8 = v7;
    while (v8 != *(_QWORD*)(result + 504)) {
      v9 = *(_DWORD*)(v8 - 16);
      v8 -= 16;
      v7 -= 16;
      if (v9 == v6) {
        if (*(_QWORD*)(result + 512) != v7) {
          v10 = *(_QWORD*)(v7 + 8);
          if (v10 != 0) {
            v12 = *(_QWORD*)(v10 + 392);
            v11 = *(_QWORD*)(v10 + 400);
            *a2 = v12;
            a2[1] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                        memory_order_relaxed);
            }
            {
              result;
              return;
            }
          }
        }
        break;
      }
    }
  }
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

__int64 CharacterModel_cf9f80(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 4);
  if (v3 > 0x555555555555555LL) {
    GameRoutine_cfa190();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 4) >= 0x2AAAAAAAAAAAAAALL) {
    v7 = 0x555555555555555LL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x555555555555555LL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        48 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a2 + 32);
  v10 = v8 + v2;
  if (v9 != 0) {
    if (v9 == a2) {
      *(_QWORD*)(v10 + 32) = v10;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
    }
    else {
      *(_QWORD*)(v10 + 32) = v9;
      *(_QWORD*)(a2 + 32) = 0;
    }
  }
  else {
    *(_QWORD*)(v10 + 32) = 0;
  }
  v11 = v8 + 48 * v7;
  v12 = (_QWORD*)*a1;
  v13 = (_QWORD*)a1[1];
  v14 = v10 + 48;
  v15 = v10 + *a1 - (_QWORD)v13;
  if (v13 != (_QWORD*)*a1) {
    v16 = (_QWORD*)*a1;
    v17 = v10 + *a1 - (_QWORD)v13;
    do {
      v18 = (_QWORD*)v16[4];
      if (v18 != nullptr) {
        if (v16 == v18) {
          *(_QWORD*)(v17 + 32) = v17;
          (*(void (**)(_QWORD, __int64))(*(_QWORD*)v16[4] + 24LL))(v16[4], v17);
        }
        else {
          *(_QWORD*)(v17 + 32) = v18;
          v16[4] = 0;
        }
      }
      else {
        *(_QWORD*)(v17 + 32) = 0;
      }
      v16 += 6;
      v17 += 48;
    } while (v16 != v13);
    while (1) {
      v20 = (_QWORD*)v12[4];
      if (v12 == v20) {
        v19 = 32;
      }
      else {
        if (v20 == nullptr) {
          goto LABEL_26;
        }
        v19 = 40;
      }
      (*(void (**)(void*))(*v20 + v19))(v20);
    LABEL_26:
      v12 += 6;
      if (v12 == v13) {
        v12 = (_QWORD*)*a1;
        break;
      }
    }
  }
  *a1 = v15;
  a1[1] = v14;
  a1[2] = v11;
  if (v12 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v21, v12);
  }
  return v14;
}

_QWORD* CharacterModel_cfa1b0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (result != nullptr) {
    v1 = result;
    CharacterModel_cfa1b0(*result);
    CharacterModel_cfa1b0(v1[1]);
    v2 = v1[8];
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
    v3 = fw_memory_g_heap_manager_ptr;
    if ((v1[4] & 1) != 0) {
      v4 = v1[6];
      if (v4 != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
      }
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v1);
  }
  return result;
}

__int64

game_zview_CharacterModel_SetupReloadAppearance_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 225) = 0;
  return CharacterModel_cf4c10_alt1(v1 + 32);
}

__int64 game_zview_CharacterModel_SetupComplete_lambda0_Invoke(__int64 result,
                                                               __int64* a2,
                                                               __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v13_;

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *a3;
  v6 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v7 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  v8 = *(__int64**)(*(_QWORD*)(v7 + 16) + 32LL);
  if (v8 != nullptr) {
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
    }
    v13_.v13 = v3;
    v13_.v14 = v4;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    v9 = (_QWORD*)v8[51];
    v10 = v8[52];
    v13_.v15 = v5;
    v13_.v16 = v6;
    if ((unsigned __int64)v9 >= v10) {
      v12 = game_zview_dac700(v8 + 50, &v13_.v13);
      v11 = v13_.v16;
      v8[51] = (__int64)v12;
      if (v11 == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v9 = v3;
      v9[1] = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      v9[2] = v5;
      v9[3] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      v11 = v6;
      v8[51] = (__int64)(v9 + 4);
      if (v6 == 0) {
        goto LABEL_19;
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v11);
  LABEL_19:
    result = v13_.v14;
    if (v13_.v14 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
    }
  }
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  }
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v4);
  }
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  }
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v4);
  }
  return result;
}

void game_zview_CharacterModel_SetupComplete_lambda1_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 60) = 1;
        }
      }
      return;
    }
  }
}

void game_zview_CharacterModel_GameViewExit_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 60) = 0;
        }
      }
      return;
    }
  }
}

__int64 game_zview_CharacterModel_TryMakeObj_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  result = HubCharacterNatives_cf7940(v2);
  if (v3 == result) {
    *(_WORD*)(v2 + 366) = 257;
  }
  return result;
}

__int64 CharacterModel_cfb240(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(void*))(*v21 + v22))(v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(void*))(*v15 + v16))(v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CharacterModel_cfb400(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void*))(*v10 + v11))(v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CharacterModel_cfb540(__int64* a1, int* a2, __int64* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    __int64* v33;
  } v29_;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_cfb8e0_alt1();
  }
  v7 = a1[2];
  v29_.v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210_alt1();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29_.v29 = v15;
  v29_.v30 = v17;
  v29_.v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
LABEL_19:
  v29_.v31 = v17 + 80;
  CharacterModel_cfb780(a1, &v29_.v29);
  v21 = a1[1];
  v22 = v29_.v30;
  while (1) {
    v23 = v29_.v31;
    if (v22 == v29_.v31) {
      break;
    }
    v29_.v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  if (v29_.v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v27, v29_.v29);
  }
  return v21;
}

__int64* CharacterModel_cfb780(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(void*))(*v13 + v14))(v13);
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_zview_CharacterModel_SetActiveSignal_lambda0_Invoke(__int64 result,
                                                                 __int64* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[16];
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;
  struct {
    __int64 v26;
    int v27;
  } v26_;

  v2 = *(_QWORD**)(result + 8);
  if (v2[29] == 0) {
    return result;
  }
  v3 = *a2;
  v26_.v26 = 0;
  v26_.v27 = 0x2000;
  v4 = v2[2];
  if ((*(_BYTE*)(v4 + 384) & 0x10) != 0) {
    v7 = *(unsigned __int8*)(v3 + 32);
    v8 = (v7 & 1) == 0;
    v9 = v7 >> 1;
    if (v8) {
      v10 = v9;
    }
    else {
      v10 = *(_QWORD*)(v3 + 40);
    }
    if (v8) {
      v11 = v3 + 33;
    }
    else {
      v11 = *(_QWORD*)(v3 + 48);
    }
    v12 = v10 + 1;
    if (v10 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v12 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v14, 16, 0);
      v23_.v24 = v10 + 1;
      v23_.v25 = v13;
      v23_.v23 = v14 | 1;
    }
    else {
      v23_.v24 = 0;
      v23_.v25 = nullptr;
      v23_.v23 = (unsigned __int8)(2 * v12);
      v13 = (char*)&v23_.v23 + 1;
      if (v10 == 0) {
      LABEL_22:
        *(_WORD*)&v13[v10] = 70;
        v15 = *(_QWORD*)(v2[2] + 40LL);
        if ((v23_.v23 & 1) != 0) {
          v16 = v23_.v25;
        }
        else {
          v16 = (char*)&v23_.v23 + 1;
        }
        strlen(v16);
        game_zview_d56ce0((void*)((__int64)v22), v15, (__int64)v16,
                          *(float*)(v3 + 56));
        result = GameRoutine_112180((__int64)&v26_.v26, (__int64)v22);
        if ((v23_.v23 & 1) != 0 && v23_.v25 != nullptr) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (_QWORD)(v23_.v25));
        }
        goto LABEL_30;
      }
    }
    memmove(v13, v11, v10);
    goto LABEL_22;
  }
  v5 = *(_QWORD*)(v4 + 40);
  if ((*(_BYTE*)(v3 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(v3 + 48);
  }
  else {
    v6 = v3 + 33;
  }
  strlen(v6);
  game_zview_d56ce0((void*)((__int64)&v23_.v23), v5, v6, *(float*)(v3 + 56));
  result = GameRoutine_112180((__int64)&v26_.v26, (__int64)&v23_.v23);
LABEL_30:
  v18 = v2[44];
  v19 = *(_QWORD*)(v18 + 8);
  if (*(_BYTE*)(v19 + 145) == 1) {
    v20 = *(_QWORD*)(v19 + 232);
    if (v20 != 0) {
      v21 = *(_QWORD*)(v20 + 88);
      if (v21 != 0) {
        *(_BYTE*)(v18 + 56) = 0;
        if (*(_DWORD*)(v21 + 96) <= 1u) {
          GameRoutine_112180(v21 + 320, (__int64)&v26_.v26);
          return GameRoutine_a19f00(v21 + 272, v21 + 320);
        }
      }
    }
  }
  return result;
}

float game_zview_CharacterModel_UpdateOutlineBold_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float* v9;
  float result;
  int v11;
  __int64 v12;
  __int64 v13;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v12 = a2;
    v13 = a1;
    v11 = __cxa_guard_acquire_alt2((__int64)GameData_212d4d8),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v3 = GameData_212d4d0;
    a2 = v12;
    a1 = v13;
    if (v11 != 0) {
      *GameData_212d4d0 = wld_Crc32_alt1(0, "CharacterMaterial", 0x11u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      __cxa_guard_release_alt2((__int64)GameData_212d4d8),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v3 = GameData_212d4d0;
      a2 = v12;
      a1 = v13;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(float**)(a1 + 8);
          result = *v9;
          *(float*)(v8 + 32) = *v9;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 game_zview_CharacterModel_CommitRimMode_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v14 = result;
    v15 = a2;
    v16 = __cxa_guard_acquire(GameData_212d4d8);
    a2 = v15;
    v17 = v16;
    result = v14;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(GameData_212d4d8);
      a2 = v15;
      result = v14;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = *(_DWORD*)(result + 8);
          v9 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
          if (v8 == 1) {
            *(_WORD*)(v7 + 113) = 256;
          }
          v10 = *(__int64**)(v9 + 312);
          v11 = *(__int64**)(v9 + 320);
          if (v10 != v11) {
            v12 = (float)v8;
            do {
              v13 = *v10;
              v10 += 2;
              result = (*(__int64 (**)(__int64, const char*, __int64, float))(
                  *(_QWORD*)v13 + 16LL))(v13, "Game_RimPattern", 15, v12);
            } while (v10 != v11);
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64

game_zview_CharacterModel_SetShadowRemaining_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  _BYTE* v13;
  float v14;
  float v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  float v20;
  float v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v25 = a2;
    v26 = result;
    v24 = __cxa_guard_acquire(GameData_212df10);
    v3 = GameData_212df08;
    a2 = v25;
    result = v26;
    if (v24 != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      v3 = GameData_212df08;
      a2 = v25;
      result = v26;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(a2 + 504)) {
      return result;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != v4);
  if (*(_QWORD*)(a2 + 512) != v5) {
    v8 = *(_QWORD*)(v5 + 8);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 136);
      if (**(_BYTE**)(result + 8) == 1) {
        if ((v9 & 8) != 0) {
          v13 = (_BYTE*)(v8 + 169);
          if ((*(_BYTE*)(v8 + 169) & 1) == 0) {
            goto LABEL_29;
          }
        }
        else {
          v10 = *(float*)(v8 + 120);
          v11 = *(float*)(v8 + 144);
          v9 |= 8uLL;
          *(_QWORD*)(v8 + 136) = v9;
          if (v10 == v11 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
              *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
              *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
            v12 =
                ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                0x3F;
            *(_BYTE*)(v8 + 169) =
                (((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                 0x3F) != 0;
            v13 = (_BYTE*)(v8 + 169);
            if (v12 == 0) {
              goto LABEL_29;
            }
          }
          else {
            *(_BYTE*)(v8 + 169) = 1;
            v13 = (_BYTE*)(v8 + 169);
          }
        }
        v17 = *(unsigned __int8*)(v8 + 20);
        *(_BYTE*)(v8 + 20) = v17 & 0xFB;
        if (v17 != (v17 & 0xFFFFFFFB)) {
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
          v9 = *(_QWORD*)(v8 + 136);
        }
      LABEL_29:
        if ((v9 & 0x10) == 0) {
          v18 = v9 | 0x10;
        LABEL_38:
          v20 = *(float*)(v8 + 120);
          v21 = *(float*)(v8 + 144);
          *(_QWORD*)(v8 + 136) = v18;
          if (v20 == v21 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
              *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
              *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
            v22 =
                ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v18) &
                0x3F;
            *(_BYTE*)(v8 + 169) = v22 != 0;
            if (v22 == 0) {
              return result;
            }
          }
          else {
            *v13 = 1;
          }
          goto LABEL_45;
        }
        goto LABEL_35;
      }
      if ((v9 & 8) != 0) {
        v14 = *(float*)(v8 + 120);
        v15 = *(float*)(v8 + 144);
        v9 &= ~8uLL;
        *(_QWORD*)(v8 + 136) = v9;
        if (v14 == v15 && *(float*)(v8 + 124) == *(float*)(v8 + 148) &&
            *(float*)(v8 + 128) == *(float*)(v8 + 152) &&
            *(float*)(v8 + 132) == *(float*)(v8 + 156)) {
          v16 = ((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
                0x3F;
          *(_BYTE*)(v8 + 169) =
              (((unsigned __int8)*(_DWORD*)(v8 + 160) ^ (unsigned __int8)v9) &
               0x3F) != 0;
          v13 = (_BYTE*)(v8 + 169);
          if (v16 == 0) {
            goto LABEL_34;
          }
        }
        else {
          *(_BYTE*)(v8 + 169) = 1;
          v13 = (_BYTE*)(v8 + 169);
        }
      }
      else {
        v13 = (_BYTE*)(v8 + 169);
        if ((*(_BYTE*)(v8 + 169) & 1) == 0) {
          goto LABEL_34;
        }
      }
      v19 = *(unsigned __int8*)(v8 + 20);
      *(_BYTE*)(v8 + 20) = v19 & 0xFB;
      if (v19 != (v19 & 0xFFFFFFFB)) {
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
        v9 = *(_QWORD*)(v8 + 136);
      }
    LABEL_34:
      if ((v9 & 0x10) != 0) {
        v18 = v9 & 0xFFFFFFFFFFFFFFEFLL;
        goto LABEL_38;
      }
    LABEL_35:
      if ((*v13 & 1) == 0) {
        return result;
      }
    LABEL_45:
      v23 = *(unsigned __int8*)(v8 + 20);
      *(_BYTE*)(v8 + 20) = v23 & 0xFB;
      if (v23 != (v23 & 0xFFFFFFFB)) {
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + 728LL) = 0;
      }
    }
  }
  return result;
}

void game_zview_CharacterModel_ClothStabilize_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_WORD*)(v5 + 61) = 1;
        }
      }
      return;
    }
  }
}

__attribute__((swiftcall)) void CharacterModel_d1a2a0(PSEUDO_X8 x8_,
                                                      _QWORD* result, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v4 = a2;
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v6 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v7 = a2;
      if (GameData_22356f8 <= (unsigned __int64)a2) {
        v7 = a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v7 = v6 & a2;
    }
    v8 = *(__int64***)(GameData_22356f0 + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        if ((GameData_22356f8 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v11 == a2) {
              if (*((_DWORD*)v9 + 4) == a2) {
                goto LABEL_36;
              }
            }
            else if ((v11 & v6) != v7) {
              goto LABEL_24;
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v10 == a2) {
            if (*((_DWORD*)v9 + 4) == a2) {
            LABEL_36:
              v28 = result[22];
              if (v28 != 0) {
                v29 = *(_QWORD*)(v28 + 40);
                v30 = *(_QWORD*)(v29 + 392);
                v31 = *(_QWORD*)(v29 + 400);
                if (v31 != 0) {
                  v32 = result;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8),
                                            1u, memory_order_relaxed);
                  v33 = *(_QWORD*)(v30 + 11608);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                    std___1___shared_weak_count___release_weak(v31);
                  }
                }
                else {
                  v33 = *(_QWORD*)(v30 + 11608);
                  v32 = result;
                }
                v34 = GameRoutine_d2c6a0(v4);
                v4 = CharacterModel_1071880(v33, v34);
              }
              else {
                v32 = result;
              }
              result = (_QWORD*)GameRoutine_d2c6a0(v4);
              v35 = *(_QWORD*)(v32[1] + 232LL);
              if (v35 != 0) {
                v36 = *(_QWORD*)(v35 + 392);
                v37 = *(_QWORD*)(v35 + 400);
                v38 = (unsigned int)result;
                if (v37 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8),
                                            1u, memory_order_relaxed);
                  v39 = *(_QWORD*)(v36 + 11608);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v40 = v39;
                    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                    std___1___shared_weak_count___release_weak(v37);
                    v39 = v40;
                  }
                }
                else {
                  v39 = *(_QWORD*)(v36 + 11608);
                }
                result = CharacterModel_1070c00(v39, v38);
                v41 = result[2];
                v42 = result[3];
                v43 = result;
                *(_QWORD*)(a3 + 48) = 0;
                *(_QWORD*)(a3 + 56) = 0;
                *(_QWORD*)(a3 + 16) = v41;
                *(_QWORD*)(a3 + 24) = v42;
                v44 = result[1];
                *(_QWORD*)a3 = *result;
                *(_QWORD*)(a3 + 8) = v44;
                v45 = result[5];
                *(_QWORD*)(a3 + 32) = result[4];
                *(_QWORD*)(a3 + 40) = 0;
                v46 = result[6];
                v47 = v46 - v45;
                if (v46 != v45) {
                  if ((v47 & 0x8000000000000000LL) == 0) {
                    v48 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v46 - v45, 16,
                        0);
                    v49 = v48 + v47;
                    *(_QWORD*)(a3 + 40) = v48;
                    *(_QWORD*)(a3 + 56) = v48 + v47;
                    result = (_QWORD*)memcpy(v48, v45, v47);
                    *(_QWORD*)(a3 + 48) = v49;
                    goto LABEL_53;
                  }
                LABEL_54:
                  GameRoutine_a78a90();
                }
              LABEL_53:
                v50 = v43[9];
                *(_QWORD*)(a3 + 64) = v43[8];
                *(_QWORD*)(a3 + 72) = v50;
                v51 = v43[11];
                *(_QWORD*)(a3 + 80) = v43[10];
                *(_QWORD*)(a3 + 88) = v51;
                *(_BYTE*)(a3 + 96) = *((_BYTE*)v43 + 96);
                {
                  result;
                  return;
                }
              }
            LABEL_47:
              *(_DWORD*)(a3 + 8) = 0;
              *(_QWORD*)(a3 + 84) = 0;
              *(_DWORD*)(a3 + 92) = 0;
              *(_QWORD*)(a3 + 24) = 0;
              *(_QWORD*)(a3 + 32) = 0;
              *(_QWORD*)(a3 + 40) = 0;
              *(_QWORD*)(a3 + 48) = 0;
              *(_QWORD*)(a3 + 56) = 0;
              *(_QWORD*)(a3 + 64) = 0;
              *(_QWORD*)(a3 + 72) = 0;
              *(_BYTE*)(a3 + 80) = 0;
              *(_QWORD*)a3 = 1051372203;
              *(_QWORD*)(a3 + 12) = 0x4040000000000000LL;
              *(_DWORD*)(a3 + 20) = 1069547520;
              {
                result;
                return;
              }
            }
          }
          else {
            if (v10 >= GameData_22356f8) {
              v10 %= (unsigned __int64)GameData_22356f8;
            }
            if (v10 != v7) {
              break;
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
LABEL_24:
  if (a2 != 2051587693) {
    goto LABEL_47;
  }
  v12 = *(_QWORD*)(result[1] + 232LL);
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 392);
    v14 = *(_QWORD*)(v12 + 400);
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      v15 = *(_QWORD*)(v13 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v16 = v15;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
        v15 = v16;
      }
    }
    else {
      v15 = *(_QWORD*)(v13 + 11608);
    }
    result = CharacterModel_1070c00(v15, 2622353397LL);
    v17 = result[2];
    v18 = result[3];
    v19 = result;
    *(_QWORD*)(a3 + 48) = 0;
    *(_QWORD*)(a3 + 56) = 0;
    *(_QWORD*)(a3 + 16) = v17;
    *(_QWORD*)(a3 + 24) = v18;
    v20 = result[1];
    *(_QWORD*)a3 = *result;
    *(_QWORD*)(a3 + 8) = v20;
    v21 = result[5];
    *(_QWORD*)(a3 + 32) = result[4];
    *(_QWORD*)(a3 + 40) = 0;
    v22 = result[6];
    v23 = v22 - v21;
    if (v22 != v21) {
      if (v23 < 0) {
        goto LABEL_54;
      }
      v24 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v22 - v21, 16, 0);
      v25 = v24 + v23;
      *(_QWORD*)(a3 + 40) = v24;
      *(_QWORD*)(a3 + 56) = v24 + v23;
      result = (_QWORD*)memcpy(v24, v21, v23);
      *(_QWORD*)(a3 + 48) = v25;
    }
    v26 = v19[9];
    *(_QWORD*)(a3 + 64) = v19[8];
    *(_QWORD*)(a3 + 72) = v26;
    v27 = v19[11];
    *(_QWORD*)(a3 + 80) = v19[10];
    *(_QWORD*)(a3 + 88) = v27;
    *(_BYTE*)(a3 + 96) = *((_BYTE*)v19 + 96);
  }
  else {
    *(_QWORD*)(a3 + 4) = 0;
    *(_QWORD*)(a3 + 84) = 0;
    *(_DWORD*)(a3 + 92) = 0;
    *(_QWORD*)(a3 + 24) = 0;
    *(_QWORD*)(a3 + 32) = 0;
    *(_QWORD*)(a3 + 40) = 0;
    *(_QWORD*)(a3 + 48) = 0;
    *(_QWORD*)(a3 + 56) = 0;
    *(_QWORD*)(a3 + 64) = 0;
    *(_QWORD*)(a3 + 72) = 0;
    *(_BYTE*)(a3 + 80) = 0;
    *(_QWORD*)(a3 + 12) = 0x4040000000000000LL;
    *(_DWORD*)(a3 + 20) = 1069547520;
  }
  *(_DWORD*)a3 = 1028443341;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void CharacterModel_d1b660(PSEUDO_X8 x8_,
                                                      __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* v3;
  char* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  v2 = *(_QWORD**)(result + 80);
  v3 = *(_QWORD**)(result + 88);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v2 == v3) {
    v6 = 0;
  }
  else {
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = wld_Crc32(0, "Signal_Hit", 10);
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 32LL))(*v2);
      if (v7 == (_DWORD)result) {
        v8 = *v2;
        v9 = a2[2];
        if ((unsigned __int64)v5 < v9) {
          *(_QWORD*)v5 = v8;
          v5 += 8;
        }
        else {
          v10 = &v5[-v6];
          v11 = (__int64)&v5[-v6] >> 3;
          v12 = v11 + 1;
          if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
            *a2 = v6;
            GameRoutine_d1d700();
          }
          v13 = v9 - v6;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              *a2 = v6;
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = &v5[-v6];
          v18 = (__int64)&v10[v15 + -8 * v11];
          *(_QWORD*)&v10[v15] = v8;
          v5 = &v10[v15 + 8];
          result = memcpy(v18, v6, v17);
          a2[1] = (__int64)v5;
          a2[2] = v16;
          if (v6 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v6);
          }
          v6 = v18;
        }
        a2[1] = (__int64)v5;
      }
      v2 += 2;
    } while (v2 != v3);
  }
  *a2 = v6;
  {
    result;
    return;
  }
}

void CharacterModel_d1b800(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  signed int v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  signed int v41;
  signed int v42;
  signed int v43;
  __int64 v46;
  __int64 v47;
  signed int v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  float* v56;
  float v57;
  float v58;
  unsigned int v59;
  double v61;
  float v62;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  float32x2_t* v70;
  int32x2_t v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float32x2_t* v76;
  int32x2_t v77;
  float v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  float* v89;
  int* i;
  float v91;
  float v92;
  __int64 v93;
  _QWORD* v94;
  _DWORD* v95;
  __int64 v96;
  __int64 v97;
  float* v98;
  int* j;
  float v100;
  float v101;
  __int64 v102;
  _QWORD* v103;
  _DWORD* v104;
  __int64 v105;
  int v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  int v116;
  int v117;
  struct {
    float v118[10];
    __int64 v119;
    char gap64_[72];
    _QWORD* v120;
  } v118_;

  if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 145LL) != 1) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 272);
  v2 = *(_QWORD*)(a1 + 280);
  v4 = (_QWORD*)a1;
  if (v3 != v2) {
    v5 = *(_QWORD*)(a1 + 272);
    while ((*(_BYTE*)(v5 + 49) & 1) == 0) {
      v5 += 64;
      if (v5 == v2) {
        goto LABEL_6;
      }
    }
    goto LABEL_7;
  }
LABEL_6:
  if (*(_BYTE*)(a1 + 345) != 0) {
  LABEL_7:
    v6 = *(_QWORD*)(a1 + 272);
    if (v3 != v2) {
      v6 = *(_QWORD*)(a1 + 272);
      while (*(_BYTE*)(v6 + 49) != 0) {
        v6 += 64;
        if (v6 == v2) {
          goto LABEL_21;
        }
      }
    }
    if (v6 != v2) {
      v7 = v6 + 64;
      if (v6 + 64 != v2) {
        do {
          if (*(_BYTE*)(v7 + 49) != 0) {
            *(_DWORD*)v6 = *(_DWORD*)v7;
            *(_DWORD*)(v6 + 8) = *(_QWORD*)(v7 + 8);
            *(_DWORD*)(v6 + 12) = *(_DWORD*)(v7 + 12);
            v8 = *(_QWORD*)(v7 + 24);
            *(_QWORD*)(v6 + 16) = *(_QWORD*)(v7 + 16);
            *(_QWORD*)(v6 + 24) = v8;
            v9 = *(_QWORD*)(v7 + 32);
            v10 = *(_QWORD*)(v7 + 40);
            v11 = *(_QWORD*)(v7 + 56);
            *(_QWORD*)(v6 + 48) = *(_QWORD*)(v7 + 48);
            *(_QWORD*)(v6 + 56) = v11;
            *(_QWORD*)(v6 + 32) = v9;
            *(_QWORD*)(v6 + 40) = v10;
            v6 += 64;
          }
          v7 += 64;
        } while (v7 != v2);
        v3 = *(_QWORD*)(a1 + 272);
        v2 = *(_QWORD*)(a1 + 280);
      }
    }
    if (v6 != v2) {
      *(_QWORD*)(a1 + 280) = v6;
      v2 = v6;
    }
  }
LABEL_21:
  if (v3 != v2) {
    v12 = v3;
    while (*(_BYTE*)(v12 + 53) != 1) {
      v12 += 64;
      if (v12 == v2) {
        goto LABEL_40;
      }
    }
    v13 = v3 + 64;
    while (*(_BYTE*)(v13 - 11) != 0) {
      v14 = v13 == v2;
      v13 += 64;
      if (v14) {
        goto LABEL_40;
      }
    }
    v15 = v13 - 64;
    if (v13 - 64 != v2 && v13 != v2) {
      do {
        if (*(_BYTE*)(v13 + 53) != 0) {
          *(_DWORD*)v15 = *(_DWORD*)v13;
          *(_DWORD*)(v15 + 8) = *(_QWORD*)(v13 + 8);
          *(_DWORD*)(v15 + 12) = *(_DWORD*)(v13 + 12);
          v16 = *(_QWORD*)(v13 + 24);
          *(_QWORD*)(v15 + 16) = *(_QWORD*)(v13 + 16);
          *(_QWORD*)(v15 + 24) = v16;
          v17 = *(_QWORD*)(v13 + 32);
          v18 = *(_QWORD*)(v13 + 40);
          v19 = *(_QWORD*)(v13 + 56);
          *(_QWORD*)(v15 + 48) = *(_QWORD*)(v13 + 48);
          *(_QWORD*)(v15 + 56) = v19;
          *(_QWORD*)(v15 + 32) = v17;
          *(_QWORD*)(v15 + 40) = v18;
          v15 += 64;
        }
        v13 += 64;
      } while (v13 != v2);
      v3 = *(_QWORD*)(a1 + 272);
      v2 = *(_QWORD*)(a1 + 280);
    }
    if (v15 != v2) {
      *(_QWORD*)(a1 + 280) = v15;
      v2 = v15;
    }
  }
LABEL_40:
  v118_.v120 = (_QWORD*)a1;
  if (v3 == v2) {
    goto LABEL_155;
  }
  v20 = 0x80000000;
  v21 = nullptr;
  v22 = 0;
  do {
    if (GameRoutine_d2d740_alt1(*(_DWORD*)v3, *((_DWORD*)v4 + 74))) {
      v21 = (_QWORD*)v3;
    }
    if ((v4[46] & 1) != 0) {
      goto LABEL_77;
    }
    v23 = v4[21];
    if (v23 == 0) {
      goto LABEL_77;
    }
    v24 = *(_QWORD*)(v23 + 32);
    if (*(_BYTE*)(v24 + 124) != 1) {
      goto LABEL_77;
    }
    v25 = (__int64*)(*(_QWORD*)(v24 + 96) + 56LL * *(int*)(v24 + 120));
    v27 = *v25;
    v26 = v25[1];
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v27 != 0) {
      LODWORD(v28) = *(_DWORD*)(v27 + 108);
      if (v26 == 0) {
        goto LABEL_54;
      }
    }
    else {
      LODWORD(v28) = 0;
      if (v26 == 0) {
        goto LABEL_54;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
      if (v27 != 0) {
        goto LABEL_59;
      }
      goto LABEL_55;
    }
  LABEL_54:
    if (v27 == 0) {
    LABEL_55:
      if ((*(_BYTE*)(v24 + 124) & 1) == 0) {
        goto LABEL_217;
      }
      v28 = *(_QWORD*)(*(_QWORD*)(v24 + 96) + 56LL * *(int*)(v24 + 120) + 16);
      if ((v28 & 0x100000000LL) == 0) {
      LABEL_76:
        v4 = v118_.v120;
      LABEL_77:
        v41 = 0x80000000;
        goto LABEL_78;
      }
    }
  LABEL_59:
    v29 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v23 + 24) + 72LL) + 104LL * (int)v28);
    if (v29 == 0) {
      goto LABEL_76;
    }
    v30 = *(_QWORD*)(v29 + 16);
    v4 = v118_.v120;
    if (v30 == 0 || *(__int64 (**)(void))(v30 + 16) != eft_ClampCurve_ptr) {
      goto LABEL_77;
    }
    v31 = *(_QWORD*)(v3 + 16);
    CharacterModel_d1a2a0((void*)((__int64)v118_.v118), v118_.v120,
                          *(_DWORD*)v3);
    v32 = v118_.v119;
    if ((v31 & 0x100000000LL) != 0) {
      v33 = *(float*)&v31;
    }
    else {
      v33 = v118_.v118[0];
    }
    if (v118_.v119 != 0) {
      v34 = 56;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v34 = 128;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v118_.v119);
    }
    v4 = v118_.v120;
    if ((v118_.v120[46] & 1) != 0) {
      goto LABEL_101;
    }
    v35 = v118_.v120[21];
    if (v35 == 0) {
      goto LABEL_101;
    }
    v36 = *(_QWORD*)(v35 + 32);
    if (*(_BYTE*)(v36 + 124) != 1) {
      goto LABEL_101;
    }
    v37 = (__int64*)(*(_QWORD*)(v36 + 96) + 56LL * *(int*)(v36 + 120));
    v39 = *v37;
    v38 = v37[1];
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v39 != 0) {
      LODWORD(v40) = *(_DWORD*)(v39 + 108);
    }
    else {
      LODWORD(v40) = 0;
    }
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v116 = v40;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v38 + 16LL))(v38, v32);
      std___1___shared_weak_count___release_weak_alt1(v38);
      LODWORD(v40) = v116;
    }
    if (v39 == 0) {
      if ((*(_BYTE*)(v36 + 124) & 1) == 0) {
        goto LABEL_217;
      }
      v40 = *(_QWORD*)(*(_QWORD*)(v36 + 96) + 56LL * *(int*)(v36 + 120) + 16);
      if ((v40 & 0x100000000LL) == 0) {
        goto LABEL_101;
      }
    }
    v46 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v35 + 24) + 72LL) + 104LL * (int)v40);
    if (v46 == 0) {
      goto LABEL_101;
    }
    v47 = *(_QWORD*)(v46 + 16);
    if (v47 == 0) {
      goto LABEL_101;
    }
    if (*(__int64 (**)(void))(v47 + 16) != eft_ClampCurve_ptr) {
      goto LABEL_101;
    }
    v49 = v4[21];
    if (v49 == 0) {
      goto LABEL_101;
    }
    v50 = *(_QWORD*)(v49 + 32);
    if (*(_BYTE*)(v50 + 124) != 1) {
      goto LABEL_101;
    }
    v51 = (__int64*)(*(_QWORD*)(v50 + 96) + 56LL * *(int*)(v50 + 120));
    v53 = *v51;
    v52 = v51[1];
    if (v52 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v53 != 0) {
      LODWORD(v54) = *(_DWORD*)(v53 + 108);
    }
    else {
      LODWORD(v54) = 0;
    }
    if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v117 = v54;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v52 + 16LL))(v52, v32);
      std___1___shared_weak_count___release_weak_alt1(v52);
      LODWORD(v54) = v117;
    }
    if (v53 == 0) {
      if ((*(_BYTE*)(v50 + 124) & 1) == 0) {
        goto LABEL_217;
      }
      v54 = *(_QWORD*)(*(_QWORD*)(v50 + 96) + 56LL * *(int*)(v50 + 120) + 16);
      if ((v54 & 0x100000000LL) == 0) {
        goto LABEL_101;
      }
    }
    v55 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v49 + 24) + 72LL) + 104LL * (int)v54);
    if (v55 == 0 || ((v56 = *(float**)(v55 + 16)) == nullptr
                         ? (v58 = 0x0.0p+0f, v57 = v33 + 0x0.0p+0f)
                         : (v57 = v33 + (float)(*v56 * 0x1.1111120000000p-6f),
                            v58 = v56[2] * 0x1.1111120000000p-6f),
                     (v41 = 0x80000000, v57 < v58) && v56 != nullptr &&
                         (*(_BYTE*)(v55 + 168) & 1) == 0)) {
    LABEL_101:
      v48 = GameRoutine_d2cec0_alt1(*((_DWORD*)v4 + 74));
      if (*((_BYTE*)v4 + 332) != 0) {
        v41 = *((_DWORD*)v4 + 82);
      }
      else {
        v41 = v48;
      }
    }
  LABEL_78:
    v42 = GameRoutine_d2cec0_alt1(*(_DWORD*)v3);
    if (*(_BYTE*)(v3 + 36) != 0) {
      v43 = *(_DWORD*)(v3 + 32);
    }
    else {
      v43 = v42;
    }
    if (v43 >= v41 && v43 >= v20) {
      v20 = v43;
      v22 = v3;
    }
    v3 += 64;
  } while (v3 != v2);
  if (v22 != 0 && ((_QWORD*)v22 != v21 || *(_BYTE*)(v22 + 51) == 1)) {
    v59 = *(_DWORD*)v22;
    if (*(_BYTE*)(v22 + 48) == 1) {
      v59 = GameRoutine_d2d5e0_alt1(v59);
      v61 = GameHr_d1cbc0((__int64)v4, v59);
      v62 = *(float*)(*(_QWORD*)(*(_QWORD*)(v4[1] + 16LL) + 144LL) + 4LL);
      *(_BYTE*)(v22 + 28) = 1;
      *(float*)(v22 + 24) = *(float*)&v61 * v62;
    }
    CharacterModel_d1a690_alt1((__int64)v4, v59, *(_QWORD*)(v22 + 16),
                               *(_QWORD*)(v22 + 24),
                               *(unsigned __int8*)(v22 + 54));
    v66 = v4[21];
    if (v66 != 0) {
      v67 = *(_QWORD*)(v66 + 32);
      if (*(_BYTE*)(v67 + 124) == 1) {
        v68 = *(_QWORD*)(v67 + 96) + 56LL * *(int*)(v67 + 120);
        v70 = *(float32x2_t**)v68;
        v69 = *(_QWORD*)(v68 + 8);
        if (v69 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v70 != nullptr) {
          *(_QWORD*)&a2 = *(_QWORD*)(v22 + 8);
          LANES64(v71).n64_u64[0] =
              LANES64_OF(vceq_f32(v70[11], *(float32x2_t*)&a2)).n64_u64[0];
          if ((LANES64(v71).n64_u8[0] & 1) == 0 ||
              (LANES64(v71).n64_u8[4] & 1) == 0) {
            LANES64(v70[11]).n64_u32[0] = LODWORD(a2);
            LODWORD(a2) = *(_DWORD*)(v22 + 12);
            LANES64(v70[11]).n64_u32[1] = LODWORD(a2);
            Graph_d29060_alt1(v70, a2, LANES64(v71).n64_f64[0]);
            *(_QWORD*)&a2 = *(_QWORD*)(v22 + 8);
          }
          LANES64(v70[12]).n64_u32[0] = LODWORD(a2);
          LANES64(v70[12]).n64_u32[1] = *(_DWORD*)(v22 + 12);
        }
        if (v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
          std___1___shared_weak_count___release_weak_alt1(v69);
        }
      }
    }
    v72 = v4[32];
    if (v72 == 0) {
      goto LABEL_153;
    }
    v73 = *(_QWORD*)(v72 + 32);
    if (*(_BYTE*)(v73 + 124) != 1) {
      goto LABEL_153;
    }
    v74 = *(_QWORD*)(v73 + 96) + 56LL * *(int*)(v73 + 120);
    v76 = *(float32x2_t**)v74;
    v75 = *(_QWORD*)(v74 + 8);
    if (v75 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v75 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v76 != nullptr) {
      *(_QWORD*)&a2 = *(_QWORD*)(v22 + 8);
      LANES64(v77).n64_u64[0] =
          LANES64_OF(vceq_f32(v76[11], *(float32x2_t*)&a2)).n64_u64[0];
      if ((LANES64(v77).n64_u8[0] & 1) == 0 ||
          (LANES64(v77).n64_u8[4] & 1) == 0) {
        LANES64(v76[11]).n64_u32[0] = LODWORD(a2);
        LODWORD(a2) = *(_DWORD*)(v22 + 12);
        LANES64(v76[11]).n64_u32[1] = LODWORD(a2);
        Graph_d29060_alt1(v76, a2, LANES64(v77).n64_f64[0]);
        *(_QWORD*)&a2 = *(_QWORD*)(v22 + 8);
      }
      LANES64(v76[12]).n64_u32[0] = LODWORD(a2);
      LANES64(v76[12]).n64_u32[1] = *(_DWORD*)(v22 + 12);
    }
    if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
      std___1___shared_weak_count___release_weak_alt1(v75);
      v21 = (_QWORD*)v22;
    }
    else {
    LABEL_153:
      v21 = (_QWORD*)v22;
    }
    goto LABEL_156;
  }
  if (v21 == nullptr) {
  LABEL_155:
    v21 = v4 + 37;
  }
LABEL_156:
  v78 = 0x1.0000000000000p+0f;
  *((_DWORD*)v4 + 74) = *(_DWORD*)v21;
  *(_QWORD*)&a2 = v21[1];
  *((_DWORD*)v4 + 76) = LODWORD(a2);
  *((_DWORD*)v4 + 77) = *((_DWORD*)v21 + 3);
  v79 = v21[3];
  v4[39] = v21[2];
  v4[40] = v79;
  v80 = v21[4];
  v81 = v21[5];
  v82 = v21[7];
  v4[43] = v21[6];
  v4[44] = v82;
  v4[41] = v80;
  v4[42] = v81;
  if (*((_BYTE*)v21 + 52) == 1) {
    LODWORD(a2) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    v83 = *(_QWORD*)(v4[1] + 232LL);
    if (v83 != 0) {
      v84 = *(_QWORD*)(v83 + 392);
      v85 = *(_QWORD*)(v83 + 400);
      if (v85 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v85 + 8), 1u,
                                  memory_order_relaxed);
        v86 = *(_QWORD*)(v84 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v87 = v86;
          (*(void (**)(__int64, float))(*(_QWORD*)v85 + 16LL))(
              v85, 0x1.0000000000000p+0f);
          std___1___shared_weak_count___release_weak_alt1(v85);
          v86 = v87;
          v4 = v118_.v120;
        }
      }
      else {
        v86 = *(_QWORD*)(v84 + 11608);
      }
      *(float*)&a2 = GameRoutine_d2d9c0_alt1(*((unsigned int*)v4 + 90), v86,
                                             *((float*)v21 + 3));
    }
    if (*(float*)&a2 != 0x0.0p+0f) {
      v78 = *(float*)&a2;
    }
  }
  v88 = v4[21];
  if (v88 != 0) {
    v89 = (float*)v4[14];
    for (i = (int*)v4[15]; v89 != (float*)i;
         *(float*)(*(_QWORD*)(*(_QWORD*)(v88 + 24) + 72LL) +
                   104LL * SLODWORD(v92) + 8) =
             (float)(*((float*)v21 + 10) / v78) * v91) {
      v91 = v89[2];
      v92 = *v89;
      v89 += 3;
    }
    v93 = *(_QWORD*)(v88 + 32);
    if (*(_BYTE*)(v93 + 124) == 1) {
      v94 = (_QWORD*)(*(_QWORD*)(v93 + 96) + 56LL * *(int*)(v93 + 120));
      v95 = (_DWORD*)*v94;
      v96 = v94[1];
      if (v96 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v95 != nullptr) {
        *(_QWORD*)&a2 = v21[1];
        v95[24] = LODWORD(a2);
        LODWORD(a2) = *((_DWORD*)v21 + 3);
        v95[26] = 1120403456;
        v95[25] = LODWORD(a2);
      }
      if (v96 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
        std___1___shared_weak_count___release_weak_alt1(v96);
      }
    }
    *(_DWORD*)(*(_QWORD*)(v88 + 24) + 236LL) = *((_DWORD*)v21 + 11);
  }
  v97 = v4[32];
  if (v97 != 0) {
    v98 = (float*)v4[25];
    for (j = (int*)v4[26]; v98 != (float*)j;
         *(float*)(*(_QWORD*)(*(_QWORD*)(v97 + 24) + 72LL) +
                   104LL * SLODWORD(v101) + 8) =
             (float)(*((float*)v21 + 10) / v78) * v100) {
      v100 = v98[2];
      v101 = *v98;
      v98 += 3;
    }
    v102 = *(_QWORD*)(v97 + 32);
    if (*(_BYTE*)(v102 + 124) == 1) {
      v103 = (_QWORD*)(*(_QWORD*)(v102 + 96) + 56LL * *(int*)(v102 + 120));
      v104 = (_DWORD*)*v103;
      v105 = v103[1];
      if (v105 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v105 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v104 != nullptr) {
        *(_QWORD*)&a2 = v21[1];
        v104[24] = LODWORD(a2);
        LODWORD(a2) = *((_DWORD*)v21 + 3);
        v104[26] = 1120403456;
        v104[25] = LODWORD(a2);
      }
      if (v105 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
        std___1___shared_weak_count___release_weak_alt1(v105);
      }
    }
    *(_DWORD*)(*(_QWORD*)(v97 + 24) + 236LL) = *((_DWORD*)v21 + 11);
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v106 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v107 = (v106 & 8) != 0 ? 2 : 3;
    if ((v107 & v106) == 0 && (*((_BYTE*)v4 + 350) & 1) != 0 &&
        *((_BYTE*)v4 + 382) == 1) {
      v108 = v4[21];
      if (v108 != 0) {
        v109 = *(_QWORD*)(v108 + 32);
        if (*(_BYTE*)(v109 + 124) == 1) {
          v110 = (__int64*)(*(_QWORD*)(v109 + 96) + 56LL * *(int*)(v109 + 120));
          v112 = *v110;
          v111 = v110[1];
          if (v111 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v111 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v112 != 0) {
            LODWORD(v113) = *(_DWORD*)(v112 + 108);
          }
          else {
            LODWORD(v113) = 0;
          }
          if (v111 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111);
            std___1___shared_weak_count___release_weak_alt1(v111);
          }
          if (v112 != 0) {
            goto LABEL_211;
          }
          if ((*(_BYTE*)(v109 + 124) & 1) == 0) {
          LABEL_217:
            GameRoutine_8123d0_alt1();
          }
          v113 = *(_QWORD*)(*(_QWORD*)(v109 + 96) + 56LL * *(int*)(v109 + 120) +
                            16);
          if ((v113 & 0x100000000LL) != 0) {
          LABEL_211:
            v114 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v108 + 24) + 72LL) +
                              104LL * (int)v113);
            if (v114 != 0) {
              v115 = *(_QWORD*)(v114 + 16);
              if (v115 != 0 &&
                  *(__int64 (**)(void))(v115 + 16) == eft_ClampCurve_ptr) {
                LODWORD(a2) = *(_DWORD*)(v115 + 8);
                SkeletalBlendCallback_ce4b70_alt1(v108, 1, a2);
                *((_BYTE*)v4 + 382) = 0;
              }
            }
          }
        }
      }
    }
  }
  v4[35] = v4[34];
}

#pragma GCC visibility pop
