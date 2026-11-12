#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1390f60(PSEUDO_X8, _QWORD);
__int64 GameRoutine_13fc020(_QWORD, _QWORD);
__int64 GameRoutine_13fc4d0(_QWORD);
__int64 GameRoutine_13fcbc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13fed60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_144e320(_QWORD);
__int64 GameRoutine_1488aa0(_QWORD);
__int64 GameRoutine_1951980(_QWORD, _QWORD);
__int64 GameRoutine_1953500(_QWORD);
__int64 GameRoutine_66ae00(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_9a4300(_QWORD);
__int64 GameRoutine_e1d240(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_13ff850(_QWORD);
__int64 SceneManager_1389860(__int64 result);
__int64 SceneManager_138a760_alt1(_QWORD) __asm__("SceneManager_138a760");
__int64 SceneManager_138dbe0_alt1(_QWORD,
                                  _QWORD) __asm__("SceneManager_138dbe0");
__int64 SceneManager_138e2c0_alt1(_QWORD,
                                  _QWORD) __asm__("SceneManager_138e2c0");
__int64 SceneManager_138ea40(_QWORD, _QWORD);
__int64 SceneObject_13fca80(_QWORD, _QWORD);
__int64 SceneObject_13fd900(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2032c78[])();
extern __int64 (*GameData_2032d58[])();
extern __int64 (*GameData_20332a8[])();
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_21f4000;
extern __int64 GameData_2241738;
extern __int64 GameData_2241740;
extern __int64 GameData_2241750;
extern __int64 GameData_224ae20;
extern __int64 GameData_224b470;
extern __int64 GameData_226bb88;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_1aa5e95[];
extern int GameData_2241730;
void __attribute__((noreturn)) GameRoutine_138ec50(_QWORD);
void __attribute__((noreturn)) GameRoutine_138ec90(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) SceneManager_IMapArgs_DeletingDestructor();
_QWORD* SceneManager_Destructor(__int64 a1);
__int64 SceneManager_138a380_alt1(_QWORD* a1) __asm__("SceneManager_138a380");
_QWORD* SceneManager_138a5a0_alt1(_QWORD* a1) __asm__("SceneManager_138a5a0");
__int64 SceneManager_138a760(__int64 result);
__int64 SceneManager_138b7a0(__int64 a1, __int64 a2);
_QWORD* SceneManager_138bf00(_QWORD* result, unsigned __int8* a2);
__int64 SceneManager_138c000(_QWORD* a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4);
__int64 SceneManager_138c360(_QWORD* a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4);
_QWORD* SceneManager_138c7e0(_QWORD* result, unsigned __int8* a2);
__int64 SceneManager_138c8e0(__int64 a1, __int64 a2);
unsigned __int64 SceneManager_138d3a0(_QWORD* a1, __int64 a2);
unsigned __int64 SceneManager_138d7c0(__int64 a1, __int64 a2, __int64 a3);
__int64 SceneManager_138dac0(__int64 a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4);
bool SceneManager_138dbe0(_QWORD* a1, __int64 a2);
__int64 SceneManager_138e200(__int64 a1, unsigned __int8* a2);
_QWORD* SceneManager_138e2c0(__int64 a1, unsigned __int8* a2);
__int64 SceneManager_138e5e0(__int64 a1);
void game_facility_SceneManager_ShowMob_lambda0_Invoke(__int64 a1, __int64 a2);
void game_facility_SceneManager_HideMob_lambda0_Invoke(__int64 a1, __int64 a2);
__int64
game_facility_SceneManager_CloneObject_lambda0_Destructor(__int64 result);
__int64
game_facility_SceneManager_CloneObject_lambda0_DeletingDestructor(__int64 a1);
_QWORD* game_facility_SceneManager_CloneObject_lambda0_Clone(__int64 a1);
_QWORD* game_facility_SceneManager_CloneObject_lambda0_CloneInto(_QWORD* a1,
                                                                 _QWORD* a2);
__int64 game_facility_SceneManager_CloneObject_lambda0_Destroy(__int64 result);
bool game_facility_SceneManager_CloneObject_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140ed50(PSEUDO_X8, __int64*, _BYTE*);
__attribute__((swiftcall)) void game_13f84c0(PSEUDO_X8, _BYTE*);
__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0_alt1(__int64*) __asm__("GameRoutine_7a88a0");
__int64 GameRoutine_ad7390(void);
__int64 GameRoutine_ecb40(void);
__int64 SceneCharacter_13ff750(_QWORD);
__int64 SceneCharacter_13ff750_alt1(__int64) __asm__("SceneCharacter_13ff750");
__int64 SceneManager_138ea40_alt1(__int64*,
                                  __int64) __asm__("SceneManager_138ea40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_9a28e0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__n128 SceneCharacterAnimator_1412540(__int64, int, unsigned __int8*);
__n128 SceneCharacter_13fed60(__int64, __int64*, __int64*, __int64*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_1a86e1b;
extern _UNKNOWN GameData_1aada0b;
extern _UNKNOWN GameData_1ac8676;
extern _UNKNOWN GameData_1ae74be;
extern __int64 (
    *game_facility_SceneManager_CloneObject_lambda0_Destructor_ptr[])();
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64 GameData_212c638;
extern __int64 GameData_212e1c0;
extern __int64 GameData_21f5378;
extern __int64 eft_g_effectSystem;
extern __int64 game_GameModeData_instance_;
extern int GameData_1aced17;
float game_facility_1410900(__int64, __int64);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
void SceneCharacterMovement_1417e70(__int64, char);
void __attribute__((noreturn))
GameRoutine_138ec50_alt1() __asm__("GameRoutine_138ec50");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 SceneManager_138c520(_QWORD* a1, __int64* a2, _BYTE* a3, __int64* a4);
__int64 game_facility_SceneManager_CloneObject(__int64 a1, unsigned __int8* a2,
                                               __int64 a3);
__int64 SceneManager_138e060(_QWORD* a1);
__attribute__((swiftcall)) void SceneManager_138e780(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2);
__attribute__((swiftcall)) void SceneManager_138e8c0(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int64 a2);
void game_facility_SceneManager_CreateMap_lambda0_Invoke_138f140(__int64 a1);
void game_facility_SceneManager_CreateMap_lambda0_Invoke_138f380(__int64 a1);
__n128 game_facility_SceneManager_CreateMob_lambda0_Invoke(__int64 a1,
                                                           __int64* a2);
__n128 game_facility_SceneManager_PlayMotionMob_lambda0_Invoke(__int64 a1,
                                                               __int64* a2,
                                                               _QWORD* a3);
_QWORD* SceneManager_13909c0(float* a1, unsigned __int64* a2, __int64 a3,
                             _QWORD** a4, _QWORD** a5);
__attribute__((swiftcall)) void SceneManager_13910f0(PSEUDO_X8 x8_, __int64 a1);
__n128 SceneManager_FacilityMapArgs_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, float32x4_t*);
__int64 GameRoutine_14886c0(__int64 result, long double);
__int64 SceneCharacter_13ffd30(__int64);
extern __int64 GameData_212dce8;
__int64 game_facility_SceneManager_SceneManager_lambda0_Invoke(__int64 a1,
                                                               long double a2);
__attribute__((swiftcall)) void
GameRoutine_1390f60_alt1(PSEUDO_X8, _QWORD* result,
                         _QWORD*) __asm__("GameRoutine_1390f60");
__int64*
GameRoutine_1488aa0_alt1(__int64* result) __asm__("GameRoutine_1488aa0");
__int64* GameRoutine_e1d240_alt1(__int64, __int64*,
                                 __int64*) __asm__("GameRoutine_e1d240");
__int64 GameRoutine_1951980_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1951980");
__int64 GameRoutine_1953500_alt1(__int64 result) __asm__("GameRoutine_1953500");
__int64 SceneCharacter_13ff850_alt1(__int64) __asm__("SceneCharacter_13ff850");
__int64 game_facility_144e320(__int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void SceneObject_13fc4d0(__int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SceneManager_138a5a0(_QWORD* a1);
void GameHr_1389860(__int64);
void SceneManager_138a380(_QWORD* a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 (*GameData_20331a8[])();
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void SceneManager_138d7c0_alt1(__int64, __int64,
                               __int64) __asm__("SceneManager_138d7c0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_facility_SceneManager_ShowMob(__int64 a1, const char** a2);

void __attribute__((noreturn)) SceneManager_IMapArgs_DeletingDestructor()
{
  __udf(0x8002u);
}

_QWORD* SceneManager_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* result;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  *(_QWORD*)a1 = GameData_2032c78;
  v2 = *(_QWORD*)(a1 + 320);
  v51 = *(_QWORD*)(a1 + 312);
  v52 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_66ae00(&v51);
  if (v52 != 0) {
    std___1___shared_weak_count___release_weak(v52);
  }
  v3 = *(_QWORD**)(a1 + 160);
  v4 = *(_QWORD**)(a1 + 168);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 160);
  }
  *(_QWORD*)(a1 + 168) = v3;
  v5 = *(_QWORD**)(a1 + 208);
  v6 = *(_QWORD**)(a1 + 216);
  if (v5 != v6) {
    do {
      if (*v5 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
      }
      ++v5;
    } while (v5 != v6);
    v5 = *(_QWORD**)(a1 + 208);
  }
  *(_QWORD*)(a1 + 216) = v5;
  v7 = *(_QWORD**)(a1 + 232);
  v8 = *(_QWORD**)(a1 + 240);
  *(_QWORD*)(a1 + 192) = *(_QWORD*)(a1 + 184);
  if (v7 != v8) {
    do {
      if (*v7 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
      }
      ++v7;
    } while (v7 != v8);
    v7 = *(_QWORD**)(a1 + 232);
  }
  *(_QWORD*)(a1 + 240) = v7;
  SceneManager_1389860(a1);
  v9 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 296) != 0) {
    v10 = *(_QWORD**)(a1 + 288);
    if (v10 != nullptr) {
      do {
        v12 = (_QWORD*)*v10;
        v13 = v10[4];
        if (v13 != 0) {
          std___1___shared_weak_count___release_weak(v13);
        }
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11);
        v10 = v12;
      } while (v12 != nullptr);
    }
    v14 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = 0;
    if (v14 != 0) {
      v15 = v14 & 7;
      if (v14 >= 8) {
        v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + 8 * v16 + 48) = 0;
          v18 = *(_QWORD*)(a1 + 272) + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(*(_QWORD*)(a1 + 272) + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    *(_QWORD*)(a1 + 296) = 0;
  }
  if (GameData_224b470 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_224b470 + 24LL))(
        GameData_224b470);
    if (GameData_224b470 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_224b470 + 8LL))(
          GameData_224b470);
    }
    GameData_224b470 = 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)GameData_2241738 + 24LL))(GameData_2241738);
  if (GameData_2241738 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_2241738 + 8LL))(GameData_2241738);
  }
  GameData_2241738 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_224ae20 + 24LL))(GameData_224ae20);
  if (GameData_224ae20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_224ae20 + 8LL))(GameData_224ae20);
  }
  GameData_224ae20 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_226bb88 + 24LL))(GameData_226bb88);
  if (GameData_226bb88 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_226bb88 + 8LL))(GameData_226bb88);
  }
  GameData_226bb88 = 0;
  GameRoutine_9a4300(7);
  (*(void (**)(__int64))(*(_QWORD*)GameData_2241740 + 24LL))(GameData_2241740);
  result = (_QWORD*)GameData_2241740;
  if (GameData_2241740 != 0) {
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2241740 +
                                                8LL))(GameData_2241740);
  }
  GameData_2241740 = 0;
  v21 = *(_QWORD*)(a1 + 320);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v21);
  }
  v22 = *(_QWORD**)(a1 + 288);
  if (v22 != nullptr) {
    do {
      v24 = (_QWORD*)*v22;
      v25 = v22[4];
      if (v25 != 0) {
        std___1___shared_weak_count___release_weak(v25);
      }
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
      v22 = v24;
    } while (v24 != nullptr);
  }
  v26 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = 0;
  if (v26 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
  }
  v28 = *(_QWORD*)(a1 + 264);
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v28);
  }
  v29 = *(_QWORD*)(a1 + 232);
  if (v29 != 0) {
    v30 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 240) = v29;
    v31 = 128;
    if (*(_QWORD*)(v30 + 200) == 0) {
      v31 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v30 + v31);
  }
  v32 = *(_QWORD*)(a1 + 208);
  if (v32 != 0) {
    v33 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 216) = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v33 + v34);
  }
  v35 = *(_QWORD*)(a1 + 184);
  if (v35 != 0) {
    v36 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 192) = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v36 + v37);
  }
  v38 = *(_QWORD*)(a1 + 160);
  if (v38 != 0) {
    v39 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 168) = v38;
    v40 = 128;
    if (*(_QWORD*)(v39 + 200) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v39 + v40);
  }
  v41 = *(_QWORD*)(a1 + 136);
  if (v41 == 0) {
    goto LABEL_100;
  }
  v42 = *(_QWORD*)(a1 + 144);
  if (v41 == v42) {
  LABEL_97:
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v46 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v46);
    goto LABEL_100;
  }
  do {
    result = *(_QWORD**)(v42 - 16);
    v44 = v42 - 48;
    if ((_QWORD*)(v42 - 48) == result) {
      v43 = 32;
    LABEL_91:
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v43))(result);
      goto LABEL_92;
    }
    if (result != nullptr) {
      v43 = 40;
      goto LABEL_91;
    }
  LABEL_92:
    v42 = v44;
  } while (v44 != v41);
  v45 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 144) = v41;
  if (v45 != 0) {
    goto LABEL_97;
  }
LABEL_100:
  if ((*(_BYTE*)(a1 + 80) & 1) != 0 && *(_QWORD*)(a1 + 96) != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v47 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v47);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v48 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v48);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0 && *(_QWORD*)(a1 + 48) != 0) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v49 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v49);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v50 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v50);
  }
  *(_QWORD*)a1 = GameData_2032d58;
  if (GameData_21f4000 == a1) {
    GameData_21f4000 = 0;
    GameData_2241730 = 0;
  }
  return result;
}

void SceneManager_138a380(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = (_QWORD*)a1[20];
  v2 = (_QWORD*)a1[21];
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 8LL))(*v1);
      }
      ++v1;
    } while (v1 != v2);
    v1 = (_QWORD*)a1[20];
  }
  a1[21] = v1;
  v4 = (_QWORD*)a1[26];
  v5 = (_QWORD*)a1[27];
  if (v4 != v5) {
    do {
      if (*v4 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
      }
      ++v4;
    } while (v4 != v5);
    v4 = (_QWORD*)a1[26];
  }
  a1[27] = v4;
  v6 = (_QWORD*)a1[29];
  v7 = (_QWORD*)a1[30];
  a1[24] = a1[23];
  if (v6 != v7) {
    do {
      if (*v6 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
      }
      ++v6;
    } while (v6 != v7);
    v6 = (_QWORD*)a1[29];
  }
  a1[30] = v6;
  GameHr_1389860((__int64)a1);
  if (a1[37] != 0) {
    v8 = (_QWORD*)a1[36];
    if (v8 != nullptr) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v8;
        v12 = v8[4];
        if (v12 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v12);
        }
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v9 + v10, (__int64)v8);
        v8 = v11;
      } while (v11 != nullptr);
    }
    v13 = a1[35];
    a1[36] = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(a1[34] + 8 * v15) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 8) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 16) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 24) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 32) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 40) = 0;
          *(_QWORD*)(a1[34] + 8 * v15 + 48) = 0;
          v17 = a1[34] + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(a1[34] + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    a1[37] = 0;
  }
}

void SceneManager_138a5a0(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  struct {
    __int64 v23;
    char gap16_[8];
    char v24;
  } v23_;

  GameRoutine_1953500_alt1(*(_QWORD*)GameData_2130fc0[0]);
  game_facility_144e320(a1[32]);
  v2 = (__int64*)a1[29];
  v3 = (__int64*)a1[30];
  while (v2 != v3) {
    v4 = *v2++;
    SceneObject_13fc4d0(v4);
  }
  v5 = (__int64*)a1[20];
  v6 = (__int64*)a1[21];
  while (v5 != v6) {
    v7 = *v5++;
    SceneCharacter_13ff850_alt1(v7);
  }
  v8 = (__int64*)a1[26];
  v9 = (__int64*)a1[27];
  while (v8 != v9) {
    v10 = *v8++;
    SceneCharacter_13ff850_alt1(v10);
  }
  SceneManager_138a760((__int64)a1);
  v11 = (_QWORD*)a1[36];
  if (v11 != nullptr) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      while (1) {
        v13 = v11[4];
        if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
          break;
        }
        v11 = (_QWORD*)*v11;
        if (v11 == nullptr) {
          goto LABEL_21;
        }
      }
      v14 = (_QWORD*)*v11;
      GameRoutine_1390f60_alt1((void*)((__int64)&v23_.v23), a1 + 34, v11);
      v15 = v23_.v23;
      v23_.v23 = 0;
      if (v15 != 0) {
        if (v23_.v24 == 1) {
          v16 = *(_QWORD*)(v15 + 32);
          if (v16 != 0) {
            v17 = v15;
            std___1___shared_weak_count___release_weak_alt2(v16);
            v15 = v17;
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v18, v15);
      }
      v11 = v14;
    } while (v14 != nullptr);
  }
LABEL_21:
  v19 = GameData_226bb88;
  if (GameData_226bb88 != 0) {
    v20 = (__int64*)GameRoutine_1951980_alt1(*(_QWORD*)(GameData_226bb88 + 8),
                                             *(_QWORD*)(GameData_226bb88 + 16));
    GameRoutine_e1d240_alt1(v19 + 8, v20, *(__int64**)(v19 + 16));
    v21 = (__int64*)GameRoutine_1951980_alt1(*(_QWORD*)(v19 + 32),
                                             *(_QWORD*)(v19 + 40));
    GameRoutine_e1d240_alt1(v19 + 32, v21, *(__int64**)(v19 + 40));
  }
  v22 = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    GameRoutine_1488aa0_alt1((__int64*)(GameData_224ae20 + 8));
    GameRoutine_1488aa0_alt1((__int64*)(v22 + 32));
  }
}

__int64 SceneManager_138a760(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;

  v1 = *(__int64**)(result + 208);
  v2 = *(__int64**)(result + 216);
  v3 = result;
  if (v1 == v2) {
    goto LABEL_10;
  }
  while (1) {
    v4 = *v1;
    v5 = *(_QWORD*)(*v1 + 160);
    v6 = *(_QWORD*)(*v1 + 168);
    if (v6 == 0) {
      if (*(float*)(v5 + 16) <= 0.0) {
        break;
      }
      goto LABEL_4;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(float*)(v5 + 16);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v7 <= 0.0) {
      break;
    }
  LABEL_4:
    if (++v1 == v2) {
      v1 = v2;
      goto LABEL_26;
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
LABEL_10:
  v8 = v1 + 1;
  if (v1 != v2 && v8 != v2) {
    while (2) {
      v10 = *v8;
      v11 = *(_QWORD*)(*v8 + 160);
      v12 = *(_QWORD*)(*v8 + 168);
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        v13 = *(float*)(v11 + 16);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13 > 0.0) {
            goto LABEL_24;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          result = std___1___shared_weak_count___release_weak(v12);
          if (v13 > 0.0) {
            goto LABEL_24;
          }
        }
      LABEL_15:
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
      }
      else {
        if (*(float*)(v11 + 16) <= 0.0) {
          goto LABEL_15;
        }
      LABEL_24:
        *v1++ = *v8;
      }
      if (++v8 == v2) {
        break;
      }
      continue;
    }
  }
LABEL_26:
  if (v1 != *(__int64**)(v3 + 216)) {
    *(_QWORD*)(v3 + 216) = v1;
  }
  return result;
}

__int64 SceneManager_138b7a0(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *(_QWORD*)(a2 + 32);
  if (result != 0) {
    if (*(_BYTE*)(a1 + 132) == 1) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    }
    else {
      v4 = *(_QWORD*)(a1 + 144);
      if (v4 >= *(_QWORD*)(a1 + 152)) {
        v6 = a1;
        result = SceneManager_138ea40(a1 + 136, a2);
        v5 = v6;
      }
      else {
        v5 = a1;
        if (result == a2) {
          *(_QWORD*)(v4 + 32) = v4;
          (*(void (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)(a2 + 32) + 24LL))(*(_QWORD*)(a2 + 32), v4);
        }
        else {
          *(_QWORD*)(v4 + 32) =
              (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        }
        result = v4 + 48;
      }
      *(_QWORD*)(v5 + 144) = result;
    }
  }
  return result;
}

_QWORD* SceneManager_138bf00(_QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  v2 = result[29];
  if (v2 != result[30]) {
    v3 = a2 + 1;
    v4 = v2 + 8;
    v6 = result;
    while (1) {
      v7 = (*(_BYTE*)(*(_QWORD*)v2 + 24LL) & 1) != 0
               ? *(_QWORD*)(*(_QWORD*)v2 + 40LL)
               : *(_QWORD*)v2 + 25LL;
      v8 = *a2;
      v9 = *((unsigned __int8**)a2 + 2);
      v10 = (v8 & 1) == 0;
      v11 = v8 >> 1;
      if (v10) {
        v9 = v3;
      }
      else {
        v11 = *((_QWORD*)a2 + 1);
      }
      v15[0] = v9;
      v15[1] = v11;
      v12 = game_HashString(v7);
      result = (_QWORD*)GameRoutine_7a88a0(v15);
      if ((_QWORD*)v12 == result) {
        break;
      }
      v2 += 8;
      v4 += 8;
      if (v2 == v6[30]) {
        return result;
      }
    }
    result = *(_QWORD**)v2;
    if (*(_QWORD*)v2 != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      *(_QWORD*)v2 = 0;
    }
    v13 = v6[30];
    v14 = v13 - v4;
    if (v13 != v4) {
      result = (_QWORD*)memmove(v4 - 8, v4, v13 - v4);
    }
    v6[30] = v4 - 8 + v14;
  }
  return result;
}

__int64 SceneManager_138c000(_QWORD* a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4)
{
  __int64* v4;
  __int64* v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;

  if (a3 == 0) {
    return 0;
  }
  v4 = (__int64*)a1[20];
  v5 = (__int64*)a1[21];
  while (v4 != v5) {
    v10 = *v4++;
    v11 = *(_QWORD*)(v10 + 40);
    v12 = v10 + 25;
    v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
    v14 = *a2;
    v15 = *((unsigned __int8**)a2 + 2);
    v16 = (v14 & 1) == 0;
    v17 = v14 >> 1;
    if (v16) {
      v15 = a2 + 1;
    }
    else {
      v17 = *((_QWORD*)a2 + 1);
    }
    v49 = (__int64)v15;
    v50 = v17;
    v18 = game_HashString(v13);
    if (v18 == GameRoutine_7a88a0(&v49)) {
      return 0;
    }
  }
  v19 = *(_QWORD*)(*(_QWORD*)(a3 + 392) + 8LL);
  v20 = strlen(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_58:
    String_60a1d0(v20);
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                16, 0);
    v50 = v21;
    v51 = v22;
    v49 = v23 | 1;
  }
  else {
    LOBYTE(v49) = 2 * v20;
    v22 = (char*)&v49 + 1;
    if (v20 == 0) {
      goto LABEL_20;
    }
  }
  memmove(v22, v19, v21);
LABEL_20:
  v22[v21] = 0;
  v24 = SceneManager_138e2c0_alt1(a1, &v49);
  if ((v49 & 1) != 0 && v51 != nullptr) {
    v25 = v24;
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
    v24 = v25;
  }
  if (v24 != 0) {
    return 0;
  }
  v28 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v29 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       208, 16, 0);
  v20 = strlen(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_58;
  }
  v30 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v20 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate(*v28, v32, 16, 0);
    v50 = v30;
    v51 = v31;
    v49 = v32 | 1;
    goto LABEL_35;
  }
  LOBYTE(v49) = 2 * v20;
  v31 = (char*)&v49 + 1;
  if (v20 != 0) {
  LABEL_35:
    memmove(v31, v19, v30);
  }
  v31[v30] = 0;
  v33 = GameRoutine_13fed60(v29, a2, &v49, a4);
  if ((v49 & 1) != 0 && v51 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*v28 + 200LL) == 0) {
      v34 = 56;
    }
    v33 = nn_mem_StandardAllocator_Free(*v28 + v34);
  }
  v36 = (__int64*)a1[21];
  v35 = a1[22];
  *(_QWORD*)(v29 + 96) = a3;
  if ((unsigned __int64)v36 >= v35) {
    v38 = a1[20];
    v39 = (char*)v36 - v38;
    v40 = ((__int64)v36 - v38) >> 3;
    v41 = v40 + 1;
    if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
      GameRoutine_138ec50(v33);
    }
    v42 = v35 - v38;
    if (v42 >> 2 > v41) {
      v41 = v42 >> 2;
    }
    if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
      v43 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v43 = v41;
    }
    if (v43 != 0) {
      if (v43 >> 61 != 0) {
        GameRoutine_60a210(v33);
      }
      v44 = fw_memory_HeapManager_Allocate(*v28, 8 * v43, 16, 0);
    }
    else {
      v44 = 0;
    }
    v45 = v44 + 8 * v43;
    v46 = (char*)v36 - v38;
    v47 = (__int64)&v39[v44 + -8 * v40];
    *(_QWORD*)&v39[v44] = v29;
    v37 = (__int64)&v39[v44 + 8];
    memcpy(v47, v38, v46);
    a1[20] = v47;
    a1[21] = v37;
    a1[22] = v45;
    if (v38 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*v28 + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*v28 + v48);
    }
  }
  else {
    *v36 = v29;
    v37 = (__int64)(v36 + 1);
  }
  a1[21] = v37;
  return 1;
}

__int64 SceneManager_138c360(_QWORD* a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4)
{
  __int64* v4;
  __int64* v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 result;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  _QWORD v37[2];

  v4 = (__int64*)a1[20];
  v5 = (__int64*)a1[21];
  if (v4 == v5) {
  LABEL_10:
    v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         208, 16, 0);
    v21 = GameRoutine_13fed60(v20, a2, a3, a4);
    v23 = (__int64*)a1[21];
    v22 = a1[22];
    if ((unsigned __int64)v23 >= v22) {
      v25 = a1[20];
      v26 = (char*)v23 - v25;
      v27 = ((__int64)v23 - v25) >> 3;
      v28 = v27 + 1;
      if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
        GameRoutine_138ec50(v21);
      }
      v29 = v22 - v25;
      if (v29 >> 2 > v28) {
        v28 = v29 >> 2;
      }
      if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
        v30 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v30 = v28;
      }
      if (v30 != 0) {
        if (v30 >> 61 != 0) {
          GameRoutine_60a210(v21);
        }
        v31 = fw_memory_HeapManager_Allocate(*v19, 8 * v30, 16, 0);
      }
      else {
        v31 = 0;
      }
      v33 = v31 + 8 * v30;
      v34 = (char*)v23 - v25;
      v35 = (__int64)&v26[v31 + -8 * v27];
      *(_QWORD*)&v26[v31] = v20;
      v24 = (__int64)&v26[v31 + 8];
      memcpy(v35, v25, v34);
      a1[20] = v35;
      a1[21] = v24;
      a1[22] = v33;
      if (v25 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*v19 + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(*v19 + v36);
      }
    }
    else {
      *v23 = v20;
      v24 = (__int64)(v23 + 1);
    }
    result = 1;
    a1[21] = v24;
  }
  else {
    while (1) {
      v10 = *v4++;
      v11 = *(_QWORD*)(v10 + 40);
      v12 = v10 + 25;
      v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
      v14 = *a2;
      v15 = *((unsigned __int8**)a2 + 2);
      v16 = (v14 & 1) == 0;
      v17 = v14 >> 1;
      if (v16) {
        v15 = a2 + 1;
      }
      else {
        v17 = *((_QWORD*)a2 + 1);
      }
      v37[0] = v15;
      v37[1] = v17;
      v18 = game_HashString(v13);
      if (v18 == GameRoutine_7a88a0(v37)) {
        return 0;
      }
      if (v4 == v5) {
        goto LABEL_10;
      }
    }
  }
  return result;
}

__int64 SceneManager_138c520(_QWORD* a1, __int64* a2, _BYTE* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64* v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  long double v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;
  struct {
    __int64 v47[2];
    char* v48;
  } v47_;

  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*a3 == 0) {
    return 0;
  }
  v4 = (__int64*)a1[20];
  v5 = (__int64*)a1[21];
  while (v4 != v5) {
    v10 = *v4++;
    v11 = *(_QWORD*)(v10 + 40);
    v12 = v10 + 25;
    v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
    v14 = *(unsigned __int8*)a2;
    v15 = a2[2];
    v16 = (v14 & 1) == 0;
    v17 = v14 >> 1;
    if (v16) {
      v15 = (__int64)a2 + 1;
    }
    else {
      v17 = a2[1];
    }
    v47_.v47[0] = v15;
    v47_.v47[1] = v17;
    v18 = game_HashString_alt1(v13),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v18 == GameRoutine_7a88a0_alt1(v47_.v47)) {
      return 0;
    }
  }
  game_13f84c0((void*)((__int64)v47_.v47), a3),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*a4 == 0) {
    if ((v47_.v47[0] & 1) != 0) {
      v32 = v47_.v48;
    }
    else {
      v32 = (char*)v47_.v47 + 1;
    }
    GameRoutine_682bc0(&v44, (__int64)v32),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    SceneCharacterAppearance_140ed50((void*)(&v45_.v45), &v44, a3),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v34 = v45_.v45;
    v35 = v45_.v46;
    v36 = a4[1];
    v45_.v45 = 0;
    v45_.v46 = 0;
    *a4 = v34;
    a4[1] = v35;
    if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v33 = std___1___shared_weak_count___release_weak_alt1(),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v37 = v45_.v46;
    if (v45_.v46 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(v37, v33),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
  v20 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  SceneCharacter_13fed60(v20, a2, v47_.v47, a4),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v22 = (__int64*)a1[21];
  v21 = a1[22];
  if ((unsigned __int64)v22 >= v21) {
    v25 = a1[20];
    v26 = (char*)v22 - v25;
    v27 = ((__int64)v22 - v25) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      GameRoutine_138ec50_alt1(),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v29 = v21 - v25;
    if (v29 >> 2 > v28) {
      v28 = v29 >> 2;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v28;
    }
    if (v30 != 0) {
      if (v30 >> 61 != 0) {
        GameRoutine_60a210_alt1(),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v31 = fw_memory_HeapManager_Allocate_alt1(*v19, 8 * v30, 16, 0),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v31 = 0;
    }
    v38 = v31 + 8 * v30;
    v39 = (char*)v22 - v25;
    v40 = (__int64)&v26[v31 + -8 * v27];
    *(_QWORD*)&v26[v31] = v20;
    v23 = (__int64)&v26[v31 + 8];
    memcpy(v40, v25, v39),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    a1[20] = v40;
    a1[21] = v23;
    a1[22] = v38;
    if (v25 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v19 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v19 + v41),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    *v22 = v20;
    v23 = (__int64)(v22 + 1);
  }
  v42 = v47_.v47[0];
  a1[21] = v23;
  if ((v42 & 1) != 0 && v47_.v48 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v19 + v43),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return 1;
}

_QWORD* SceneManager_138c7e0(_QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  v2 = result[20];
  if (v2 != result[21]) {
    v3 = a2 + 1;
    v4 = v2 + 8;
    v6 = result;
    while (1) {
      v7 = (*(_BYTE*)(*(_QWORD*)v2 + 24LL) & 1) != 0
               ? *(_QWORD*)(*(_QWORD*)v2 + 40LL)
               : *(_QWORD*)v2 + 25LL;
      v8 = *a2;
      v9 = *((unsigned __int8**)a2 + 2);
      v10 = (v8 & 1) == 0;
      v11 = v8 >> 1;
      if (v10) {
        v9 = v3;
      }
      else {
        v11 = *((_QWORD*)a2 + 1);
      }
      v15[0] = v9;
      v15[1] = v11;
      v12 = game_HashString(v7);
      result = (_QWORD*)GameRoutine_7a88a0(v15);
      if ((_QWORD*)v12 == result) {
        break;
      }
      v2 += 8;
      v4 += 8;
      if (v2 == v6[21]) {
        return result;
      }
    }
    result = *(_QWORD**)v2;
    if (*(_QWORD*)v2 != 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      *(_QWORD*)v2 = 0;
    }
    v13 = v6[21];
    v14 = v13 - v4;
    if (v13 != v4) {
      result = (_QWORD*)memmove(v4 - 8, v4, v13 - v4);
    }
    v6[21] = v4 - 8 + v14;
  }
  return result;
}

__int64 SceneManager_138c8e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v20;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(GameData_2241750 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_2241750 + 112) == 0) {
    return 0;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_2241750 + 88) + 8 * v8);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return 0;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v7) != v8) {
        return 0;
      }
      v10 = (_QWORD*)*v10;
      v12 = 0;
      if (v10 == nullptr) {
        return v12;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      return 0;
    }
  LABEL_18:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v10[3];
  if (v14 == 0) {
    return 0;
  }
  v16 = *(char**)(a1 + 184);
  v15 = *(char**)(a1 + 192);
  if (v16 == v15) {
    return 0;
  }
  v17 = v15 - v16 - 8;
  if ((~(_BYTE)v17 & 0x18) != 0) {
    v18 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 3;
    while (*(_QWORD*)v16 != v14) {
      v16 += 8;
      if (--v18 == 0) {
        goto LABEL_35;
      }
    }
  }
  else {
  LABEL_35:
    if (v17 >= 0x18) {
      v16 += 16;
      while (1) {
        if (*((_QWORD*)v16 - 2) == v14) {
          v16 -= 16;
          return v16 != v15;
        }
        if (*((_QWORD*)v16 - 1) == v14) {
          v16 -= 8;
          return v16 != v15;
        }
        if (*(_QWORD*)v16 == v14) {
          return v16 != v15;
        }
        if (*((_QWORD*)v16 + 1) == v14) {
          break;
        }
        v20 = v16 + 16;
        v16 += 32;
        if (v20 == v15) {
          goto LABEL_36;
        }
      }
      v16 += 8;
    }
    else {
    LABEL_36:
      v16 = *(char**)(a1 + 192);
    }
  }
  return v16 != v15;
}

unsigned __int64 SceneManager_138d3a0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64* v22;
  unsigned __int64* v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  _QWORD v40[2];

  result = SceneManager_138c8e0((__int64)a1, a2);
  if ((result & 1) != 0) {
    v5 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
    result = game_HashString(v5);
    if (result != 0) {
      v6 = *(_QWORD*)(GameData_2241750 + 96);
      if (v6 != 0 && *(_QWORD*)(GameData_2241750 + 112) != 0) {
        v8 = v6 - 1;
        if ((v6 & (v6 - 1)) != 0) {
          v9 = result;
          if (result >= v6) {
            v9 = result % v6;
          }
        }
        else {
          v9 = v8 & result;
        }
        v10 = *(_QWORD**)(*(_QWORD*)(GameData_2241750 + 88) + 8 * v9);
        if (v10 != nullptr) {
          v11 = (_QWORD*)*v10;
          if (v11 != nullptr) {
            if ((v6 & v8) == 0) {
              while (1) {
                v13 = v11[1];
                if (v13 == result) {
                  if (v11[2] == result) {
                    goto LABEL_30;
                  }
                }
                else if ((v13 & v8) != v9) {
                  return result;
                }
                v11 = (_QWORD*)*v11;
                if (v11 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v12 = v11[1];
              if (v12 == result) {
                break;
              }
              if (v12 >= v6) {
                v12 %= v6;
              }
              if (v12 != v9) {
                return result;
              }
            LABEL_19:
              v11 = (_QWORD*)*v11;
              if (v11 == nullptr) {
                return result;
              }
            }
            if (v11[2] != result) {
              goto LABEL_19;
            }
          LABEL_30:
            v14 = v11[3];
            if (v14 != 0) {
              v15 = *(__int64**)(v14 + 40);
              v16 = *v15;
              v17 = v15[1];
              if (*v15 != v17) {
                while (1) {
                  if (*(_QWORD*)(*(_QWORD*)v16 + 32LL) != 0) {
                    v18 = *(char**)(*(_QWORD*)v16 + 32LL);
                  }
                  else {
                    v18 = &GameData_1a9f09e;
                  }
                  result = strlen(v18);
                  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
                    String_60a1d0(result);
                  }
                  v19 = result;
                  if (result >= 0x17) {
                    break;
                  }
                  v20 = (char*)&v37 + 1;
                  LOBYTE(v37) = 2 * result;
                  if (result != 0) {
                    goto LABEL_45;
                  }
                LABEL_46:
                  v20[v19] = 0;
                  v22 = (unsigned __int64*)a1[20];
                  if (v22 != (unsigned __int64*)a1[21]) {
                    v23 = v22 + 1;
                    while (1) {
                      v24 = (*(_BYTE*)(*v22 + 24) & 1) != 0
                                ? *(_QWORD*)(*v22 + 40)
                                : *v22 + 25;
                      v25 = v39;
                      v26 = (unsigned __int64)(unsigned __int8)v37 >> 1;
                      if ((v37 & 1) != 0) {
                        v26 = v38;
                      }
                      else {
                        v25 = (char*)&v37 + 1;
                      }
                      v40[0] = v25;
                      v40[1] = v26;
                      v27 = game_HashString(v24);
                      result = GameRoutine_7a88a0(v40);
                      if (v27 == result) {
                        break;
                      }
                      ++v22;
                      ++v23;
                      if (v22 == (unsigned __int64*)a1[21]) {
                        goto LABEL_56;
                      }
                    }
                    result = *v22;
                    if (*v22 != 0) {
                      result = (*(__int64 (**)(unsigned __int64))(
                          *(_QWORD*)result + 8LL))(result);
                      *v22 = 0;
                    }
                    v28 = (unsigned __int64*)a1[21];
                    v29 = (char*)v28 - (char*)v23;
                    if (v28 != v23) {
                      result = memmove(v23 - 1, v23, (char*)v28 - (char*)v23);
                    }
                    a1[21] = (char*)v23 + v29 - 8;
                    if ((v37 & 1) == 0) {
                      goto LABEL_33;
                    }
                  LABEL_63:
                    if (v39 != nullptr) {
                      v30 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v30 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
                    }
                    goto LABEL_33;
                  }
                LABEL_56:
                  if ((v37 & 1) != 0) {
                    goto LABEL_63;
                  }
                LABEL_33:
                  v16 += 8;
                  if (v16 == v17) {
                    goto LABEL_67;
                  }
                }
                if ((result | 7) == 0x17) {
                  v21 = 26;
                }
                else {
                  v21 = (result | 7) + 1;
                }
                v20 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v21, 16, 0);
                v38 = v19;
                v39 = v20;
                v37 = v21 | 1;
              LABEL_45:
                result = memmove(v20, v18, v19);
                goto LABEL_46;
              }
            LABEL_67:
              v32 = (char*)a1[23];
              v31 = (char*)a1[24];
              if (v32 != v31) {
                v33 = v31 - v32 - 8;
                if ((~(_BYTE)v33 & 0x18) != 0) {
                  v34 = ((unsigned __int8)((unsigned int)v33 >> 3) + 1) & 3;
                  while (*(_QWORD*)v32 != v14) {
                    v32 += 8;
                    if (--v34 == 0) {
                      goto LABEL_72;
                    }
                  }
                }
                else {
                LABEL_72:
                  if (v33 < 0x18) {
                    return result;
                  }
                  for (v32 += 16;; v32 += 32) {
                    if (*((_QWORD*)v32 - 2) == v14) {
                      v32 -= 16;
                      goto LABEL_83;
                    }
                    if (*((_QWORD*)v32 - 1) == v14) {
                      v32 -= 8;
                      goto LABEL_83;
                    }
                    if (*(_QWORD*)v32 == v14) {
                      goto LABEL_83;
                    }
                    if (*((_QWORD*)v32 + 1) == v14) {
                      break;
                    }
                    v35 = v32 + 16;
                    if (v35 == v31) {
                      return result;
                    }
                  }
                  v32 += 8;
                }
              }
            LABEL_83:
              if (v32 != v31) {
                v36 = v32 + 8;
                if (v32 + 8 != v31) {
                  do {
                    if (*(_QWORD*)v36 != v14) {
                      *(_QWORD*)v32 = *(_QWORD*)v36;
                      v32 += 8;
                    }
                    v36 += 8;
                  } while (v36 != v31);
                  v31 = (char*)a1[24];
                }
              }
              if (v32 != v31) {
                a1[24] = v32;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 SceneManager_138d7c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  char* v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  _QWORD v40[2];

  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  result = game_HashString(v5);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_2241750 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_2241750 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = result;
        if (result >= v7) {
          v10 = result % v7;
        }
      }
      else {
        v10 = v9 & result;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_2241750 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == result) {
                if (v12[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v14 & v9) != v10) {
                return result;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                return result;
              }
            }
          }
          while (1) {
            v13 = v12[1];
            if (v13 == result) {
              break;
            }
            if (v13 >= v7) {
              v13 %= v7;
            }
            if (v13 != v10) {
              return result;
            }
          LABEL_18:
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              return result;
            }
          }
          if (v12[2] != result) {
            goto LABEL_18;
          }
        LABEL_29:
          v15 = v12[3];
          if (v15 != 0) {
            v16 = *(__int64***)(v15 + 40);
            v17 = *v16;
            v18 = v16[1];
            if (*v16 != v18) {
              while (1) {
                v19 = *v17;
                if (*(_QWORD*)(*v17 + 32) != 0) {
                  v20 = *(char**)(*v17 + 32);
                }
                else {
                  v20 = &GameData_1a9f09e;
                }
                result = strlen(v20);
                if (result >= 0xFFFFFFFFFFFFFFF7LL) {
                  String_60a1d0(result);
                }
                v22 = result;
                if (result >= 0x17) {
                  break;
                }
                v23 = (char*)&v37 + 1;
                LOBYTE(v37) = 2 * result;
                if (result != 0) {
                  goto LABEL_44;
                }
              LABEL_45:
                v23[v22] = 0;
                v25 = *(__int64**)(a1 + 160);
                v26 = *(__int64**)(a1 + 168);
                if (v25 != v26) {
                  while (1) {
                    v28 = *v25++;
                    v27 = v28;
                    v29 = *(_QWORD*)(v28 + 40);
                    v30 = v28 + 25;
                    v31 = (*(_BYTE*)(v28 + 24) & 1) != 0 ? v29 : v30;
                    v32 = v39;
                    v33 = (unsigned __int64)(unsigned __int8)v37 >> 1;
                    if ((v37 & 1) != 0) {
                      v33 = v38;
                    }
                    else {
                      v32 = (char*)&v37 + 1;
                    }
                    v40[0] = v32;
                    v40[1] = v33;
                    v34 = game_HashString(v31);
                    result = GameRoutine_7a88a0(v40);
                    if (v34 == result) {
                      break;
                    }
                    if (v25 == v26) {
                      v27 = 0;
                      break;
                    }
                  }
                  if ((v37 & 1) == 0) {
                    goto LABEL_62;
                  }
                LABEL_58:
                  v21 = v39;
                  if (v39 != nullptr) {
                    v35 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v35 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
                  }
                  goto LABEL_62;
                }
                v27 = 0;
                if ((v37 & 1) != 0) {
                  goto LABEL_58;
                }
              LABEL_62:
                if (v27 != 0) {
                  v36 = *(_QWORD*)(a3 + 32);
                  v37 = v27;
                  v40[0] = v19;
                  if (v36 == 0) {
                    GameRoutine_60a310(0, v21);
                  }
                  result = (*(__int64 (**)(__int64, __int64*, _QWORD*))(
                      *(_QWORD*)v36 + 48LL))(v36, &v37, v40);
                }
                if (++v17 == v18) {
                  return result;
                }
              }
              if ((result | 7) == 0x17) {
                v24 = 26;
              }
              else {
                v24 = (result | 7) + 1;
              }
              v23 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v24, 16, 0);
              v38 = v22;
              v39 = v23;
              v37 = v24 | 1;
            LABEL_44:
              result = memmove(v23, v20, v22);
              goto LABEL_45;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 SceneManager_138dac0(__int64 a1, unsigned __int8* a2, __int64 a3,
                             __int64 a4)
{
  __int64* v4;
  __int64* v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  _QWORD v22[2];

  v4 = *(__int64**)(a1 + 232);
  v5 = *(__int64**)(a1 + 240);
  if (v4 == v5) {
  LABEL_10:
    if ((SceneObject_13fca80(a3, 1) & 1) != 0) {
      v19 = 0;
    }
    else {
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      GameRoutine_13fc020(v19, a2);
      GameRoutine_13fcbc0(v19, a3, a4);
    }
    v20 = SceneManager_138dbe0_alt1(a1, v19);
  }
  else {
    while (1) {
      v10 = *v4++;
      v11 = *(_QWORD*)(v10 + 40);
      v12 = v10 + 25;
      v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
      v14 = *a2;
      v15 = *((unsigned __int8**)a2 + 2);
      v16 = (v14 & 1) == 0;
      v17 = v14 >> 1;
      if (v16) {
        v15 = a2 + 1;
      }
      else {
        v17 = *((_QWORD*)a2 + 1);
      }
      v22[0] = v15;
      v22[1] = v17;
      v18 = game_HashString(v13);
      if (v18 == GameRoutine_7a88a0(v22)) {
        break;
      }
      if (v4 == v5) {
        goto LABEL_10;
      }
    }
    v20 = 0;
  }
  return v20 & 1;
}

bool SceneManager_138dbe0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;

  if (a2 != 0) {
    v4 = (_QWORD*)a1[30];
    v3 = a1[31];
    if ((unsigned __int64)v4 >= v3) {
      v7 = a1[29];
      v8 = (char*)v4 - v7;
      v9 = ((__int64)v4 - v7) >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        GameRoutine_138ec90();
      }
      v11 = v3 - v7;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = (char*)v4 - v7;
      v17 = (__int64)&v8[v14 + -8 * v9];
      *(_QWORD*)&v8[v14] = a2;
      v6 = (__int64)&v8[v14 + 8];
      memcpy(v17, v7, v16);
      a1[29] = v17;
      a1[30] = v6;
      a1[31] = v15;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18);
      }
    }
    else {
      *v4 = a2;
      v6 = (__int64)(v4 + 1);
    }
    a1[30] = v6;
  }
  return a2 != 0;
}

__int64 game_facility_SceneManager_CloneObject(__int64 a1, unsigned __int8* a2,
                                               __int64 a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    __int64 v34;
  } v32_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    __int64 v37;
    __int64 v38;
  } v35_;
  struct {
    _BYTE v39[32];
    __int64* v40;
  } v39_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
  } v41_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
    __int64 v47;
  } v44_;

  v3 = *(__int64**)(a1 + 232);
  v4 = *(__int64**)(a1 + 240);
  if (v3 == v4) {
  LABEL_10:
    if ((*a2 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v41_.v41, *((_QWORD*)a2 + 2),
                                         *((_QWORD*)a2 + 1));
    }
    else {
      v17 = *((_QWORD*)a2 + 1);
      v41_.v41 = *(_QWORD*)a2;
      v41_.v42 = v17;
      v41_.v43 = *((_QWORD*)a2 + 2);
    }
    if ((*(_BYTE*)a3 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v44_.v44, *(_QWORD*)(a3 + 16),
                                         *(_QWORD*)(a3 + 8));
    }
    else {
      v18 = *(_QWORD*)(a3 + 8);
      v44_.v44 = *(_QWORD*)a3;
      v44_.v45 = v18;
      v44_.v46 = *(_QWORD*)(a3 + 16);
    }
    v44_.v47 = a1;
    if ((v41_.v41 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v32_.v32, v41_.v43, v41_.v42);
    }
    else {
      v32_.v32 = v41_.v41;
      v32_.v33 = v41_.v42;
      v32_.v34 = v41_.v43;
    }
    if ((v44_.v44 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v35_.v35, v44_.v46, v44_.v45);
    }
    else {
      v35_.v35 = v44_.v44;
      v35_.v36 = v44_.v45;
      v35_.v37 = v44_.v46;
    }
    v35_.v38 = v44_.v47;
    v19 = fw_memory_g_heap_manager_ptr;
    v20 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    *v20 =
        (__int64)game_facility_SceneManager_CloneObject_lambda0_Destructor_ptr;
    v21 = v20 + 1;
    if ((v32_.v32 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v21, v32_.v34, v32_.v33);
      if ((v35_.v35 & 1) != 0) {
        goto LABEL_24;
      }
    }
    else {
      v22 = v32_.v33;
      *v21 = v32_.v32;
      v20[2] = v22;
      v20[3] = v32_.v34;
      if ((v35_.v35 & 1) != 0) {
      LABEL_24:
        fw_text_String_CopyTerminated_alt1(v20 + 4, v35_.v37, v35_.v36);
        goto LABEL_27;
      }
    }
    v23 = v35_.v36;
    v20[4] = v35_.v35;
    v20[5] = v23;
    v20[6] = v35_.v37;
  LABEL_27:
    v39_.v40 = v20;
    v20[7] = v35_.v38;
    if (*(_BYTE*)(a1 + 132) == 1) {
      (*(void (**)(__int64*))(*v20 + 48))(v20);
    }
    else {
      v24 = *(_QWORD*)(a1 + 144);
      if (v24 >= *(_QWORD*)(a1 + 152)) {
        v26 =
            SceneManager_138ea40_alt1((__int64*)(a1 + 136), (__int64)v39_.v39);
        v20 = v39_.v40;
        *(_QWORD*)(a1 + 144) = v26;
        if (v20 == (__int64*)v39_.v39) {
          v27 = 32;
          goto LABEL_35;
        }
        if (v20 == nullptr) {
          goto LABEL_36;
        }
      }
      else {
        *(_QWORD*)(v24 + 32) = (*(__int64 (**)(__int64*))(*v20 + 16))(v20);
        *(_QWORD*)(a1 + 144) = v24 + 48;
      }
    }
    v27 = 40;
  LABEL_35:
    (*(void (**)(__int64*))(*v20 + v27))(v20);
  LABEL_36:
    if ((v35_.v35 & 1) != 0 && v35_.v37 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v28);
    }
    if ((v32_.v32 & 1) != 0 && v32_.v34 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v29);
    }
    if ((v44_.v44 & 1) != 0 && v44_.v46 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v30);
    }
    if ((v41_.v41 & 1) != 0 && v41_.v43 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v31);
    }
    return 1;
  }
  while (1) {
    v8 = *v3++;
    v9 = *(_QWORD*)(v8 + 40);
    v10 = v8 + 25;
    v11 = (*(_BYTE*)(v8 + 24) & 1) != 0 ? v9 : v10;
    v12 = *a2;
    v13 = *((_QWORD*)a2 + 2);
    v14 = (v12 & 1) == 0;
    v15 = v12 >> 1;
    if (v14) {
      v13 = (__int64)(a2 + 1);
    }
    else {
      v15 = *((_QWORD*)a2 + 1);
    }
    v41_.v41 = v13;
    v41_.v42 = v15;
    v16 = game_HashString_alt1(v11);
    if (v16 == GameRoutine_7a88a0_alt1(&v41_.v41)) {
      return 0;
    }
    if (v3 == v4) {
      goto LABEL_10;
    }
  }
}

__int64 SceneManager_138e060(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;

  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v2) {
    v3 = 0;
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  else {
    v3 = *(_QWORD*)(v2 - 8);
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  v4 = *(_QWORD*)(v3 + 64);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 96);
    if (v5 == 0 || *(_DWORD*)(v5 + 240) != 5) {
      return 1;
    }
    v6 = (_QWORD*)(v4 + 120);
    while (1) {
      v6 = (_QWORD*)*v6;
      if (v6 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v6[5] + 240LL) != 5) {
        return 1;
      }
    }
  }
  v7 = (__int64*)a1[20];
  v8 = (__int64*)a1[21];
  if (v7 == v8) {
  LABEL_15:
    v11 = (__int64*)a1[29];
    v10 = (__int64*)a1[30];
    while (v11 != v10) {
      v15 = *v11;
      v16 = *(_QWORD*)(*v11 + 136);
      if (v16 != 0 &&
          (*(_BYTE*)(v16 + 165) != 1 || (GameRoutine_ad7390() & 1) == 0)) {
        v12 = *(_DWORD*)(v15 + 132);
        v13 = __OFSUB__(v12, 1);
        v14 = v12 - 1;
        if (v14 < 0 == v13) {
          *(_DWORD*)(v15 + 132) = v14;
          return 1;
        }
      }
      ++v11;
    }
    v17 = *(_QWORD*)(eft_g_effectSystem + 104);
    if (v17 == 0) {
      return 0;
    }
    v18 = GameData_21f5378;
    if (GameData_21f5378 == 0) {
      return 0;
    }
    v19 = v17 + 24;
    while (1) {
      v20 = *(__int16*)(v18 + 24);
      if ((v20 & 0x80000000) == 0) {
        v21 = *(_QWORD*)(v17 + 32);
        if (v21 != v19) {
          while (*(_DWORD*)(v21 + 16) != v20) {
            v21 = *(_QWORD*)(v21 + 8);
            if (v21 == v19) {
              goto LABEL_28;
            }
          }
          if (*(_BYTE*)(v21 - 7) != 1) {
            break;
          }
        }
      }
    LABEL_28:
      v18 = *(_QWORD*)v18;
      if (v18 == 0) {
        return 0;
      }
    }
  }
  else {
    while (1) {
      v9 = *v7++;
      if ((SceneCharacter_13ff750(v9) & 1) == 0) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_15;
      }
    }
  }
  return 1;
}

__int64 SceneManager_138e200(__int64 a1, unsigned __int8* a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int8* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD v17[2];

  v2 = *(__int64**)(a1 + 160);
  v3 = *(__int64**)(a1 + 168);
  if (v2 == v3) {
    return 0;
  }
  v4 = a2 + 1;
  while (1) {
    v7 = *v2++;
    v6 = v7;
    v8 = *(_QWORD*)(v7 + 40);
    v9 = v7 + 25;
    v10 = *a2;
    v11 = (*(_BYTE*)(v7 + 24) & 1) != 0 ? v8 : v9;
    v12 = *((unsigned __int8**)a2 + 2);
    v13 = (v10 & 1) == 0;
    v14 = v10 >> 1;
    if (v13) {
      v12 = v4;
    }
    else {
      v14 = *((_QWORD*)a2 + 1);
    }
    v17[0] = v12;
    v17[1] = v14;
    v15 = game_HashString(v11);
    if (v15 == GameRoutine_7a88a0(v17)) {
      break;
    }
    if (v2 == v3) {
      return 0;
    }
  }
  return v6;
}

_QWORD* SceneManager_138e2c0(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  _QWORD v28[2];

  v2 = *(_QWORD*)(a1 + 160);
  v3 = *(_QWORD*)(a1 + 168);
  if (v2 != v3) {
    v4 = a2 + 1;
    v6 = nullptr;
    while (1) {
      v7 = *(_QWORD**)v2;
      v8 = *a2;
      if ((*(_BYTE*)(*(_QWORD*)v2 + 48LL) & 1) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)v2 + 64LL);
      }
      else {
        v9 = *(_QWORD*)v2 + 49LL;
      }
      v10 = *((unsigned __int8**)a2 + 2);
      v11 = (v8 & 1) == 0;
      v12 = v8 >> 1;
      if (v11) {
        v10 = v4;
      }
      else {
        v12 = *((_QWORD*)a2 + 1);
      }
      v28[0] = v10;
      v28[1] = v12;
      v13 = game_HashString(v9);
      if (v13 != GameRoutine_7a88a0(v28)) {
        goto LABEL_4;
      }
      if (v6 == nullptr) {
        goto LABEL_3;
      }
      v14 = v7[1];
      if (v14 == 0) {
        break;
      }
      if (*(_BYTE*)(v14 + 288) == 1) {
        v15 = v7[1];
        do {
          v15 = *(_QWORD*)(v15 + 736);
          v16 = v15 == 0;
        } while (v15 != 0 && (*(_BYTE*)(v15 + 288) & 1) != 0);
      LABEL_20:
        v17 = v6[1];
        if (v17 == 0) {
          goto LABEL_27;
        }
        goto LABEL_23;
      }
      v16 = false;
      v17 = v6[1];
      if (v17 == 0) {
        goto LABEL_27;
      }
    LABEL_23:
      if (*(_BYTE*)(v17 + 288) == 1) {
        v18 = v17;
        while (1) {
          v18 = *(_QWORD*)(v18 + 736);
          if (v18 == 0) {
            break;
          }
          if ((*(_BYTE*)(v18 + 288) & 1) == 0) {
            goto LABEL_27;
          }
        }
        if (!v16) {
        LABEL_28:
          if (v14 == 0 || *(_BYTE*)(v14 + 288) != 1) {
            goto LABEL_4;
          }
          while (1) {
            v14 = *(_QWORD*)(v14 + 736);
            if (v14 == 0) {
              goto LABEL_3;
            }
            if ((*(_BYTE*)(v14 + 288) & 1) == 0) {
              goto LABEL_4;
            }
          }
        }
        goto LABEL_34;
      }
    LABEL_27:
      if (v16) {
        goto LABEL_28;
      }
    LABEL_34:
      v19 = false;
      if (v14 != 0 && *(_BYTE*)(v14 + 289) == 1 &&
          (*(_BYTE*)(v14 + 288) & 1) != 0) {
        if ((*(_BYTE*)(v14 + 300) & 0xFD) == 1) {
          v19 = false;
        }
        else {
          v20 = v7[1];
          do {
            v20 = *(_QWORD*)(v20 + 736);
            v19 = v20 == 0;
          } while (v20 != 0 && *(_BYTE*)(v20 + 289) == 1 &&
                   *(_BYTE*)(v20 + 288) == 1 &&
                   (*(_BYTE*)(v20 + 300) & 0xFD) != 1);
        }
      }
      if (v17 != 0 && *(_BYTE*)(v17 + 289) == 1 &&
          (*(_BYTE*)(v17 + 288) & 1) != 0) {
        while ((*(_BYTE*)(v17 + 300) & 0xFD) != 1) {
          v17 = *(_QWORD*)(v17 + 736);
          if (v17 == 0) {
            if (!v19) {
              goto LABEL_47;
            }
            goto LABEL_62;
          }
          if (*(_BYTE*)(v17 + 289) != 1 || *(_BYTE*)(v17 + 288) != 1) {
            break;
          }
        }
      }
      if (v19) {
      LABEL_47:
        if (v14 != 0 && *(_BYTE*)(v14 + 289) == 1 &&
            (*(_BYTE*)(v14 + 288) & 1) != 0) {
          do {
            if ((*(_BYTE*)(v14 + 300) & 0xFD) == 1) {
              break;
            }
            v14 = *(_QWORD*)(v14 + 736);
            if (v14 == 0) {
              goto LABEL_3;
            }
          } while (*(_BYTE*)(v14 + 289) == 1 && *(_BYTE*)(v14 + 288) == 1);
        }
        goto LABEL_4;
      }
    LABEL_62:
      v21 = v7[20];
      v22 = v7[21];
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
      }
      v23 = *(float*)(v21 + 16);
      v24 = v6[20];
      v25 = v6[21];
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
        v26 = *(float*)(v24 + 16);
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak(v25);
        }
      }
      else {
        v26 = *(float*)(v24 + 16);
      }
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak(v22);
        if (v23 <= v26) {
          goto LABEL_4;
        }
      }
      else if (v23 <= v26) {
        goto LABEL_4;
      }
    LABEL_3:
      v6 = v7;
    LABEL_4:
      v2 += 8;
      if (v2 == v3) {
        return v6;
      }
    }
    v16 = false;
    goto LABEL_20;
  }
  return nullptr;
}

__int64 SceneManager_138e5e0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  _QWORD v22[2];

  v2 = game_util_Format(GameData_1aa5e95);
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6, 16,
                                               0);
    v20 = v4;
    v21 = v5;
    v19 = v6 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19) = 2 * v3;
  v5 = (char*)&v19 + 1;
  if (v3 != 0) {
  LABEL_9:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v7 = *(__int64**)(a1 + 160);
  v8 = *(__int64**)(a1 + 168);
  if (v7 == v8) {
    v9 = 0;
    if ((v19 & 1) == 0) {
      return v9;
    }
    goto LABEL_23;
  }
  while (1) {
    v10 = *v7++;
    v9 = v10;
    v11 = *(_QWORD*)(v10 + 40);
    v12 = v10 + 25;
    v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
    v14 = v21;
    v15 = (unsigned __int64)(unsigned __int8)v19 >> 1;
    if ((v19 & 1) != 0) {
      v15 = v20;
    }
    else {
      v14 = (char*)&v19 + 1;
    }
    v22[0] = v14;
    v22[1] = v15;
    v16 = game_HashString(v13);
    if (v16 == GameRoutine_7a88a0(v22)) {
      break;
    }
    if (v7 == v8) {
      v9 = 0;
      break;
    }
  }
  if ((v19 & 1) != 0) {
  LABEL_23:
    if (v21 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v17);
    }
  }
  return v9;
}

__attribute__((swiftcall)) void SceneManager_138e780(PSEUDO_X8 x8_, __int64 a1,
                                                     __int64 a2)
{
  unsigned __int8* a3 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v3;
  __int64 v4;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _BYTE* v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD v23[2];

  *(_WORD*)a3 = 0;
  v3 = a3 + 1;
  v4 = a2 + 1;
  v8 = 0;
  while (1) {
    v9 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : v4;
    v10 = game_util_Format("%s_%d", v9, v8);
    result = GameRoutine_60a020(a3, v10);
    v12 = *(__int64**)(a1 + 232);
    v13 = *(__int64**)(a1 + 240);
    if (v12 == v13) {
      break;
    }
    while (1) {
      v14 = *v12++;
      v15 = *(_QWORD*)(v14 + 40);
      v16 = v14 + 25;
      v17 = (*(_BYTE*)(v14 + 24) & 1) != 0 ? v15 : v16;
      v18 = *a3;
      v19 = *((_BYTE**)a3 + 2);
      v20 = (v18 & 1) == 0;
      v21 = v18 >> 1;
      if (v20) {
        v19 = v3;
      }
      else {
        v21 = *((_QWORD*)a3 + 1);
      }
      v23[0] = v19;
      v23[1] = v21;
      v22 = game_HashString(v17);
      result = GameRoutine_7a88a0(v23);
      if (v22 == result) {
        break;
      }
      if (v12 == v13) {
        result;
        return;
      }
    }
    if (++v8 == 200) {
      if ((*a3 & 1) != 0) {
        v3 = *((_BYTE**)a3 + 2);
        *((_QWORD*)a3 + 1) = 0;
      }
      else {
        *a3 = 0;
      }
      *v3 = 0;
      {
        result;
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SceneManager_138e8c0(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;

  result = game_HashString(a2);
  v6 = a1[35];
  if (v6 == 0 || a1[37] == 0) {
    goto LABEL_30;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(a1[34] + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_30;
  }
  v11 = (_QWORD*)*v10;
  if (*v10 == 0) {
    goto LABEL_30;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (result == v13) {
        if (v11[2] == result) {
          goto LABEL_25;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_30;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_30;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (result == v12) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_30;
    }
  LABEL_14:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_30;
    }
  }
  if (v11[2] != result) {
    goto LABEL_14;
  }
LABEL_25:
  result = v11[4];
  if (result == 0 || (result = std___1___shared_weak_count_lock(result),
                      a3[1] = result, result == 0)) {
  LABEL_30:
    *a3 = 0;
    a3[1] = 0;
    {
      result;
      return;
    }
  }
  v14 = v11[3];
  *a3 = v14;
  if (v14 == 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = result;
      (*(void (**)(unsigned __int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v15);
    }
    goto LABEL_30;
  }
  {
    result;
    return;
  }
}

__int64 game_facility_SceneManager_SceneManager_lambda0_Invoke(__int64 a1,
                                                               long double a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  float32x4_t* v7;
  __int128 v8;
  unsigned __int32 v9;
  __int64 v10;
  __int128 v11;
  float v12;
  float v13;
  __int128 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 result;
  float32x4_t v22;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = (__int64*)v2[29];
  v4 = (__int64*)v2[30];
  if (v3 != v4) {
    v5 = GameData_212dce8;
    do {
      v6 = *v3;
      v7 = *(float32x4_t**)(*v3 + 8);
      if (v7 != nullptr && (*(_BYTE*)(v6 + 128) & 1) == 0) {
        *(_DWORD*)(v6 + 112) = LANES128(v7[22]).n128_u32[0];
        *(_DWORD*)(v6 + 116) = LANES128(v7[22]).n128_u32[1];
        v8 = *(_OWORD*)(v6 + 112);
        *((_QWORD*)&v8 + 1) = LANES128(v7[22]).n128_u32[2];
        *(_OWORD*)(v6 + 112) = v8;
        game_13f9460((void*)(&v22), v7 + 19);
        v9 = LANES128(v22).n128_u32[2];
        v10 = *(_QWORD*)(v6 + 8);
        *(_QWORD*)(v6 + 80) = LANES128(v22).n128_u64[0];
        v11 = *(_OWORD*)(v6 + 80);
        *((_QWORD*)&v11 + 1) = v9;
        *(_OWORD*)(v6 + 80) = v11;
        a2 = *(long double*)(v10 + 320);
        v12 = 0x1.ca5dc00000000p+5f * *(float*)&a2;
        v13 = (float)(0x1.ca5dc00000000p+5f * *((float*)&a2 + 1)) -
              *(float*)(*(_QWORD*)v5 + 128LL);
        *(float*)&a2 =
            vmuls_lane_f32(0x1.ca5dc00000000p+5f, *(float32x4_t*)&a2, 2);
        *(float*)(v6 + 96) = v12;
        *(float*)(v6 + 100) = v13;
        v14 = *(_OWORD*)(v6 + 96);
        *((_QWORD*)&v14 + 1) = LODWORD(a2);
        *(_OWORD*)(v6 + 96) = v14;
      }
      ++v3;
    } while (v3 != v4);
  }
  v15 = (__int64*)v2[20];
  v16 = (__int64*)v2[21];
  while (v15 != v16) {
    v17 = *v15++;
    SceneCharacter_13ffd30(v17);
  }
  v19 = (__int64*)v2[26];
  v18 = (__int64*)v2[27];
  while (v19 != v18) {
    v20 = *v19++;
    SceneCharacter_13ffd30(v20);
  }
  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    return GameRoutine_14886c0(GameData_224ae20, a2);
  }
  return result;
}

void game_facility_SceneManager_CreateMap_lambda0_Invoke_138f140(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(__int64**)(v1 + 160);
  v3 = *(__int64**)(v1 + 168);
  for (*(_BYTE*)(v1 + 132) = 1; v2 != v3; ++v2) {
    v4 = *v2;
    if ((SceneCharacter_13ff750_alt1(*v2) & 1) == 0) {
      break;
    }
    v6 = *(_QWORD*)(v4 + 192);
    v7 = *(_QWORD*)(v4 + 200);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterMovement_1417e70(v6, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterMovement_1417e70(v6, 1);
    }
  }
  v8 = *(_QWORD*)(v1 + 136);
  v9 = *(_QWORD*)(v1 + 144);
  if (v8 != v9) {
    do {
      v10 = *(_QWORD*)(v8 + 32);
      if (v10 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64))(*(_QWORD*)v10 + 48LL))(v10);
      v8 += 48;
    } while (v8 != v9);
    v8 = *(_QWORD*)(v1 + 136);
    v9 = *(_QWORD*)(v1 + 144);
  }
  if (v8 != v9) {
    do {
      v12 = *(_QWORD**)(v9 - 16);
      v13 = v9 - 48;
      if ((_QWORD*)(v9 - 48) == v12) {
        v11 = 32;
      }
      else {
        if (v12 == nullptr) {
          goto LABEL_17;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v12 + v11))((__int64)v12);
    LABEL_17:
      v9 -= 48;
    } while (v13 != v8);
  }
  *(_QWORD*)(v1 + 144) = v8;
}

void game_facility_SceneManager_CreateMap_lambda0_Invoke_138f380(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(__int64**)(v1 + 160);
  v3 = *(__int64**)(v1 + 168);
  for (*(_BYTE*)(v1 + 132) = 1; v2 != v3; ++v2) {
    v4 = *v2;
    if ((SceneCharacter_13ff750_alt1(*v2) & 1) == 0) {
      break;
    }
    v6 = *(_QWORD*)(v4 + 192);
    v7 = *(_QWORD*)(v4 + 200);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterMovement_1417e70(v6, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterMovement_1417e70(v6, 1);
    }
  }
  v8 = *(_QWORD*)(v1 + 136);
  v9 = *(_QWORD*)(v1 + 144);
  if (v8 != v9) {
    do {
      v10 = *(_QWORD*)(v8 + 32);
      if (v10 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64))(*(_QWORD*)v10 + 48LL))(v10);
      v8 += 48;
    } while (v8 != v9);
    v8 = *(_QWORD*)(v1 + 136);
    v9 = *(_QWORD*)(v1 + 144);
  }
  if (v8 != v9) {
    do {
      v12 = *(_QWORD**)(v9 - 16);
      v13 = v9 - 48;
      if ((_QWORD*)(v9 - 48) == v12) {
        v11 = 32;
      }
      else {
        if (v12 == nullptr) {
          goto LABEL_17;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v12 + v11))((__int64)v12);
    LABEL_17:
      v9 -= 48;
    } while (v13 != v8);
  }
  *(_QWORD*)(v1 + 144) = v8;
}

__n128 game_facility_SceneManager_CreateMob_lambda0_Invoke(__int64 a1,
                                                           __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int16 v10;
    char v11;
    char gap3_[13];
    __int64 v12;
  } v10_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  if (v3 != 0) {
    game_facility_1410900((__int64)&v10_.v10, v3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(v2 + 112);
    v5 = *(_QWORD*)(v2 + 120);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_14127e0(v4, (unsigned __int8*)&v10_.v10),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1();
      }
      if ((v10_.v10 & 1) == 0) {
        return result;
      }
    }
    else {
      GameRoutine_14127e0(v4, (unsigned __int8*)&v10_.v10),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v10_.v10 & 1) == 0) {
        return result;
      }
    }
    if (v10_.v12 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
    return result;
  }
  v7 = *(_QWORD*)(v2 + 112);
  v8 = *(_QWORD*)(v2 + 120);
  v10_.v11 = 1;
  v10_.v10 = 257;
  if (v8 == 0) {
    return SceneCharacterAnimator_1412540(v7, *(_DWORD*)(v7 + 108),
                                          (unsigned __int8*)&v10_.v10);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
  result = SceneCharacterAnimator_1412540(v7, *(_DWORD*)(v7 + 108),
                                          (unsigned __int8*)&v10_.v10);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__n128 game_facility_SceneManager_PlayMotionMob_lambda0_Invoke(__int64 a1,
                                                               __int64* a2,
                                                               _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __n128 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int16 v12;
    char v13;
    char gap3_[13];
    __int64 v14;
  } v12_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(unsigned int*)(a1 + 8);
  v4 = *a2;
  if ((unsigned int)v3 <= 4 && (v5 = *(_QWORD*)(*a3 + 16 * v3 + 96)) != 0) {
    game_facility_1410900((__int64)&v12_.v12, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = *(_QWORD*)(v4 + 112);
    v7 = *(_QWORD*)(v4 + 120);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_14127e0(v6, (unsigned __int8*)&v12_.v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      GameRoutine_14127e0(v6, (unsigned __int8*)&v12_.v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if ((v12_.v12 & 1) != 0 && v12_.v14 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  else {
    v9 = *(_QWORD*)(v4 + 112);
    v10 = *(_QWORD*)(v4 + 120);
    v12_.v13 = 1;
    v12_.v12 = 257;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      result = SceneCharacterAnimator_1412540(v9, *(_DWORD*)(v9 + 108),
                                              (unsigned __int8*)&v12_.v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
            v10, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      return SceneCharacterAnimator_1412540(v9, *(_DWORD*)(v9 + 108),
                                            (unsigned __int8*)&v12_.v12);
    }
  }
  return result;
}

void game_facility_SceneManager_ShowMob_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 289) = 1;
  }
}

void game_facility_SceneManager_HideMob_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 289) = 0;
  }
}

__int64

game_facility_SceneManager_CloneObject_lambda0_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = GameData_20332a8;
  if ((*(_BYTE*)(result + 32) & 1) != 0 && *(_QWORD*)(result + 48) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  if ((*(_BYTE*)(result + 8) & 1) != 0 && *(_QWORD*)(result + 24) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64

game_facility_SceneManager_CloneObject_lambda0_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_20332a8;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0 && *(_QWORD*)(a1 + 48) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

_QWORD* game_facility_SceneManager_CloneObject_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  v4 = v2;
  *v2 = GameData_20332a8;
  v5 = v2 + 1;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v5, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = *(_QWORD*)(a1 + 24);
    *v5 = *(_QWORD*)(a1 + 8);
    v5[1] = v6;
    v5[2] = v7;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 4, *(_QWORD*)(a1 + 48),
                                  *(_QWORD*)(a1 + 40));
  }
  else {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v4[4] = *(_QWORD*)(a1 + 32);
    v4[5] = v8;
    v4[6] = v9;
  }
  v4[7] = *(_QWORD*)(a1 + 56);
  return v4;
}

_QWORD* game_facility_SceneManager_CloneObject_lambda0_CloneInto(_QWORD* a1,
                                                                 _QWORD* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a2 = GameData_20332a8;
  result = a2 + 1;
  if ((a1[1] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a1[3], a1[2]);
  }
  else {
    v5 = a1[1];
    v6 = a1[3];
    a2[2] = a1[2];
    a2[3] = v6;
    *result = v5;
  }
  if ((a1[4] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 4, a1[6], a1[5]);
  }
  else {
    v7 = a1[4];
    v8 = a1[6];
    a2[5] = a1[5];
    a2[6] = v8;
    a2[4] = v7;
  }
  a2[7] = a1[7];
  return result;
}

__int64 game_facility_SceneManager_CloneObject_lambda0_Destroy(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 32) & 1) != 0 && *(_QWORD*)(result + 48) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  if ((*(_BYTE*)(result + 8) & 1) != 0 && *(_QWORD*)(result + 24) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

bool game_facility_SceneManager_CloneObject_lambda0_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = *(_QWORD**)(a1 + 56);
  v2 = SceneObject_13fd900(a1 + 8, a1 + 32);
  return SceneManager_138dbe0(v1, v2);
}

_QWORD* SceneManager_13909c0(float* a1, unsigned __int64* a2, __int64 a3,
                             _QWORD** a4, _QWORD** a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v11;
  _QWORD** v12;
  _QWORD* result;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 primeEm;
  _QWORD* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;

  v6 = *a2;
  v7 = *((_QWORD*)a1 + 1);
  if (v7 != 0) {
    v11 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v5 = *a2;
      if (v6 >= v7) {
        v5 = v6 % v7;
      }
    }
    else {
      v5 = v11 & v6;
    }
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v5);
    if (v12 != nullptr) {
      result = *v12;
      if (*v12 != nullptr) {
        if ((v7 & v11) == 0) {
          while (1) {
            v15 = result[1];
            if (v15 == v6) {
              if (result[2] == v6) {
                return result;
              }
            }
            else if ((v15 & v11) != v5) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v14 = result[1];
          if (v14 == v6) {
            if (result[2] == v6) {
              return result;
            }
          }
          else {
            if (v14 >= v7) {
              v14 %= v7;
            }
            if (v14 != v5) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v17 = *a4;
  *result = 0;
  result[1] = v6;
  v18 = *a5;
  result[2] = *v17;
  result[3] = *v18;
  v19 = v18[1];
  result[4] = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  v20 = a1[8];
  v21 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v7 == 0 || (float)(v20 * (float)v7) < v21) {
    v22 = v21 / v20;
    v23 = true;
    if (v7 >= 3) {
      v23 = (v7 & (v7 - 1)) != 0;
    }
    v24 = v23 | (2 * v7);
    v25 = vcvtps_u64_f32(v22);
    if (v24 <= v25) {
      primeEm = v25;
    }
    else {
      primeEm = v24;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v27 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v27;
    }
    v28 = *((_QWORD*)a1 + 1);
    if (primeEm <= v28) {
      if (primeEm >= v28) {
        goto LABEL_86;
      }
      v35 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v28 < 3 || (v28 & (v28 - 1)) != 0) {
        v48 = result;
        v35 = std___1___next_prime(v35);
        result = v48;
      }
      else {
        v36 = 1LL << -(char)__clz(v35 - 1);
        if (v35 >= 2) {
          v35 = v36;
        }
      }
      if (primeEm <= v35) {
        primeEm = v35;
      }
      if (primeEm >= v28) {
        goto LABEL_86;
      }
      if (primeEm == 0) {
        v49 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v49 != 0) {
          v50 = result;
          v51 = 128;
          if (*(_QWORD*)(*v16 + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v51);
          result = v50;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_86;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210(result);
    }
    v29 = result;
    v30 = fw_memory_HeapManager_Allocate(*v16, 8 * primeEm, 16, 0);
    v31 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v30;
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v32);
    }
    v33 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v34 = 0;
      result = v29;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 48) = 0;
        v37 = *(_QWORD*)a1 + 8 * v34;
        v34 += 8;
        *(_QWORD*)(v37 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v34);
    }
    else {
      v34 = 0;
      result = v29;
    }
    if ((primeEm & 7) != 0) {
      v38 = 8 * v34;
      do {
        --v33;
        *(_QWORD*)(*(_QWORD*)a1 + v38) = 0;
        v38 += 8;
      } while (v33 != 0);
    }
    v40 = (__int64*)(a1 + 4);
    v39 = *((_QWORD**)a1 + 2);
    if (v39 != nullptr) {
      v41 = v39[1];
      v42 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v41 >= primeEm) {
          v41 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v40;
        v43 = (_QWORD*)*v39;
        if (*v39 == 0) {
          goto LABEL_86;
        }
        while (1) {
          v44 = v43[1];
          if (v44 >= primeEm) {
            v44 %= primeEm;
          }
          if (v44 != v41) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
              goto LABEL_63;
            }
            *v39 = *v43;
            *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
            v43 = v39;
          }
          v44 = v41;
        LABEL_63:
          v39 = v43;
          v43 = (_QWORD*)*v43;
          v41 = v44;
          if (v43 == nullptr) {
            goto LABEL_86;
          }
        }
      }
      v45 = v41 & v42;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v40;
      while (1) {
        v46 = (_QWORD*)*v39;
        if (*v39 == 0) {
          break;
        }
        v47 = v46[1] & v42;
        if (v47 == v45) {
          v39 = (_QWORD*)*v39;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v47) != 0) {
          *v39 = *v46;
          *v46 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v47);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v47) = v46;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v47) = v39;
          v39 = v46;
          v45 = v47;
        }
      }
    }
  LABEL_86:
    v7 = *((_QWORD*)a1 + 1);
    if ((v7 & (v7 - 1)) != 0) {
      if (v6 >= v7) {
        v5 = v6 % v7;
      }
      else {
        v5 = v6;
      }
    }
    else {
      v5 = (v7 - 1) & v6;
    }
  }
  v52 = *(_QWORD*)a1;
  v53 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
  if (v53 != nullptr) {
    *result = *v53;
    *v53 = result;
  }
  else {
    v54 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v54;
    *(_QWORD*)(v52 + 8 * v5) = a1 + 4;
    if (*result != 0) {
      v55 = *(_QWORD*)(*result + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v55 >= v7) {
          v55 %= v7;
        }
      }
      else {
        v55 &= v7 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__attribute__((swiftcall)) void SceneManager_13910f0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  char* v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  int v17;
  unsigned __int64** v18;
  unsigned __int64** v19;
  unsigned __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v26;
  int v27;
  unsigned __int64** v28;
  unsigned __int64** v29;
  unsigned __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;

  result = *(_QWORD*)(a1 + 64);
  if (result == 0) {
    if (*(_QWORD*)(a1 + 48) != 0) {
      v5 = *(char**)(a1 + 48);
    }
    else {
      v5 = &GameData_1a9f09e;
    }
    result = strlen(v5);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(result);
    }
    v6 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v8 = 26;
      }
      else {
        v8 = (result | 7) + 1;
      }
      v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
      a2[1] = v6;
      a2[2] = v9;
      *a2 = v8 | 1;
      v7 = (char*)v9;
    }
    else {
      *(_BYTE*)a2 = 2 * result;
      v7 = (char*)a2 + 1;
      if (result == 0) {
        goto LABEL_14;
      }
    }
    result = memmove(v7, v5, v6);
  LABEL_14:
    v7[v6] = 0;
    {
      result;
      return;
    }
  }
  v11 = *(__int64***)(result + 40);
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
  LABEL_79:
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    {
      result;
      return;
    }
  }
  while (1) {
    v14 = *v12;
    v15 = *(_QWORD*)(*v12 + 40) != 0 ? *(char**)(*v12 + 40) : &GameData_1a9f09e;
    if (*v15 == 0) {
      break;
    }
    result = strcmp(v15, &GameData_1aced17);
    if ((_DWORD)result != 0) {
      result = strcmp(v15, &GameData_1a86e1b);
      if ((_DWORD)result != 0) {
        result = strcmp(v15, &GameData_1ac8676);
        if ((_DWORD)result != 0) {
          result = strcmp(v15, &GameData_1ae74be);
          if ((_DWORD)result != 0) {
            result = strcmp(v15, &GameData_1aada0b);
            if ((_DWORD)result != 0 || *GameData_212c790 == 0 ||
                *GameData_212c780 == 0) {
              goto LABEL_18;
            }
            v16 = *(_QWORD*)(*GameData_212c790 + 8);
            v17 = *(_DWORD*)(v16 + 56);
            v18 = *(unsigned __int64***)(v16 + 8);
            v19 = *(unsigned __int64***)(v16 + 16);
            if (v17 < 0) {
              while (v18 != v19) {
                v20 = *v18;
                if ((*v18)[12] == 0 && v20[69] == 0) {
                  goto LABEL_46;
                }
                ++v18;
              }
            }
            else if (v18 != v19) {
              while (1) {
                v21 = (__int64)*v18++;
                v20 = (unsigned __int64*)v21;
                if (*(_DWORD*)(v21 + 84) == v17) {
                  break;
                }
                if (v18 == v19) {
                  goto LABEL_34;
                }
              }
            LABEL_46:
              v22 = *v20;
              if (*v20 == 0) {
                goto LABEL_18;
              }
            LABEL_47:
              result = game_gmap_SpotMgr_GetCurrentSpot(result);
              if (v22 == result) {
                break;
              }
              goto LABEL_18;
            }
          LABEL_34:
            result = game_gmap_SpotMgr_GetCurrentSpot(result);
            v22 = result;
            if (result == 0) {
              goto LABEL_18;
            }
            goto LABEL_47;
          }
          if (*GameData_212c790 == 0 || *GameData_212c780 == 0) {
            goto LABEL_18;
          }
          v26 = *(_QWORD*)(*GameData_212c790 + 8);
          v27 = *(_DWORD*)(v26 + 56);
          v28 = *(unsigned __int64***)(v26 + 8);
          v29 = *(unsigned __int64***)(v26 + 16);
          if (v27 < 0) {
            while (v28 != v29) {
              v30 = *v28;
              if ((*v28)[12] == 0 && v30[69] == 0) {
                goto LABEL_70;
              }
              ++v28;
            }
          }
          else if (v28 != v29) {
            while (1) {
              v31 = (__int64)*v28++;
              v30 = (unsigned __int64*)v31;
              if (*(_DWORD*)(v31 + 84) == v27) {
                break;
              }
              if (v28 == v29) {
                goto LABEL_64;
              }
            }
          LABEL_70:
            v32 = *v30;
            if (*v30 == 0) {
              goto LABEL_18;
            }
          LABEL_71:
            result = game_gmap_SpotMgr_GetCurrentSpot(result);
            if (v32 != result) {
              break;
            }
            goto LABEL_18;
          }
        LABEL_64:
          result = game_gmap_SpotMgr_GetCurrentSpot(result);
          v32 = result;
          if (result == 0) {
            goto LABEL_18;
          }
          goto LABEL_71;
        }
        if (game_GameModeData_instance_ == 0 ||
            *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
          goto LABEL_18;
        }
        v23 = 70;
      }
      else {
        if (game_GameModeData_instance_ == 0 ||
            *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
          goto LABEL_18;
        }
        v23 = 71;
      }
      v24 = game_9a28e0(v23);
      if (game_GameModeData_instance_ == 0) {
        break;
      }
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v24);
      if (result == 0 || *(_DWORD*)(result + 32) == 0) {
        break;
      }
    }
    else if (game_GameModeData_instance_ != 0 &&
             *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      break;
    }
  LABEL_18:
    if (++v12 == v13) {
      goto LABEL_79;
    }
  }
  if (*(_QWORD*)(v14 + 32) != 0) {
    v33 = *(char**)(v14 + 32);
  }
  else {
    v33 = &GameData_1a9f09e;
  }
  result = strlen(v33);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v34 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (result | 7) + 1;
    }
    v37 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v36, 16, 0);
    a2[1] = v34;
    a2[2] = v37;
    *a2 = v36 | 1;
    v35 = (char*)v37;
    goto LABEL_84;
  }
  *(_BYTE*)a2 = 2 * result;
  v35 = (char*)a2 + 1;
  if (result != 0) {
  LABEL_84:
    result = memmove(v35, v33, v34);
  }
  v35[v34] = 0;
  {
    result;
    return;
  }
}

void game_facility_SceneManager_ShowMob(__int64 a1, const char** a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v2 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen_alt1(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v10_.v10[1] = v5;
    v10_.v11 = v6;
    v10_.v10[0] = v7 | 1;
    goto LABEL_12;
  }
  LOBYTE(v10_.v10[0]) = 2 * v4;
  v6 = (char*)v10_.v10 + 1;
  if (v4 != 0) {
  LABEL_12:
    memcpy_alt1((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  if ((SceneManager_138c8e0(v2, (__int64)v10_.v10) & 1) != 0) {
    v12_.v12[0] = GameData_20331a8;
    v12_.v13 = v12_.v12;
    SceneManager_138d7c0_alt1(v2, (__int64)v10_.v10, (__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v8 = 32;
      goto LABEL_18;
    }
    if (v12_.v13 != nullptr) {
      v8 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
}

__n128 SceneManager_FacilityMapArgs_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *a1 = GameData_212e1c0 + 16;
  v1 = a1 + 2;
  v2 = (_QWORD*)a1[6];
  if (v2 == v1) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
}

#pragma GCC visibility pop
