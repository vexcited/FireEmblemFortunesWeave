#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1450640(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern char GameData_1ac552d[];
extern char* GameData_2119210;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64
game_facility_StableSceneDiff_SetCamera_lambda0_Invoke_alt1(__int64 a1) __asm__(
    "game_facility_StableSceneDiff_SetCamera_lambda0_Invoke");
__attribute__((swiftcall)) void ProcStableScene_1955550(PSEUDO_X8, __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19513c0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c520(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_2132468;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern char GameData_1aa5e95[];
extern char GameData_1ad102c[];
extern char GameData_1aff162[];
__int64 game_facility_StableSceneDiff_Initialize_lambda0_Invoke_alt1(
    __int64
        a1) __asm__("game_facility_StableSceneDiff_Initialize_lambda0_Invoke");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneManager_138a920_alt1(__int64,
                                  __int64) __asm__("SceneManager_138a920");
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 SceneManager_138c520_alt1(_QWORD*, unsigned __int8*, _BYTE*,
                                  _QWORD*) __asm__("SceneManager_138c520");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
bool GameRoutine_1389160_alt1(__int64, __int64,
                              __int64) __asm__("GameRoutine_1389160");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_19513c0_alt1(unsigned __int8*) __asm__("GameRoutine_19513c0");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_StableSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
_QWORD* DiningSceneDiff_1413d00(float*, unsigned __int8*, __int64, __int64**,
                                __int64*);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
SceneEffectManager_1950850(PSEUDO_X8, __int64, __int64, unsigned int);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_7a88a0(__int64*);
__int64 GameRoutine_92b980(__int64, unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool GameRoutine_1953f60(__int64);
extern _UNKNOWN* GameData_2176150;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_2119330[])();
extern __int64 (*GameData_21193b0[])();
extern __int64 (*GameData_2119430[])();
extern __int64 (*GameData_21194b0[])();
extern __int64 GameData_1ab611a;
extern __int64 GameData_1ac550c;
extern __int64 GameData_1adcd29;
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
void game_facility_StableSceneDiff_Initialize(unsigned __int64 a1, __int64 a2);
__int64 game_facility_StableSceneDiff_SetCamera(__int64 result);
void game_facility_StableSceneDiff_Initialize_lambda2_Invoke(__int64 a1);
__attribute__((swiftcall)) void game_facility_1450640(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(PSEUDO_X8 x8_,
                                                       __int64 a1);

void game_facility_StableSceneDiff_Initialize(unsigned __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  _BYTE* v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
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
  struct {
    __int64 v39;
    unsigned __int64 v40;
    char* v41;
    char gap24_[8];
    __int64 (***v42)();
  } v39_;
  _BYTE v43[24];
  __int64 (***v44)();
  __int64* v45;

  *(_QWORD*)(a1 + 96) = a2;
  v39_.v39 = 0x8E88E8A98EE50CLL;
  v3 =
      (const char*)(*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1);
  v4 = strlen_alt1(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v5 = v4;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    *(_QWORD*)&v43[8] = v5;
    *(_QWORD*)&v43[16] = v7;
    *(_QWORD*)v43 = v8 | 1;
    goto LABEL_9;
  }
  v43[0] = 2 * v4;
  v7 = &v43[1];
  if (v4 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, (__int64)v3, v5);
  }
  v9 = (__int64*)(a1 + 8);
  v7[v5] = 0;
  if ((__int64*)(a1 + 8) != &v39_.v39) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if ((v39_.v39 & 1) != 0) {
        v11 = v39_.v41;
      }
      else {
        v11 = (char*)&v39_.v39 + 1;
      }
      if ((v39_.v39 & 1) != 0) {
        v12 = v39_.v40;
      }
      else {
        v12 = (unsigned __int64)(unsigned __int8)v39_.v39 >> 1;
      }
      SpineModel_64dde0(v9, (__int64)v11, v12);
    }
    else if ((v39_.v39 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v39_.v41, v39_.v40);
    }
    else {
      v10 = v39_.v40;
      *v9 = v39_.v39;
      *(_QWORD*)(a1 + 16) = v10;
      *(_QWORD*)(a1 + 24) = v39_.v41;
    }
  }
  v13 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v43) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v13 & 1) != 0) {
    if ((v43[0] & 1) != 0) {
      v15 = *(_BYTE**)&v43[16];
    }
    else {
      v15 = &v43[1];
    }
    if ((v43[0] & 1) != 0) {
      v16 = *(_QWORD*)&v43[8];
    }
    else {
      v16 = (unsigned __int64)v43[0] >> 1;
    }
    SpineModel_64dde0(v13, (__int64)v15, v16);
    goto LABEL_34;
  }
  if ((v43[0] & 1) != 0) {
    GameRoutine_64df20(v13, *(__int64*)&v43[16], *(unsigned __int64*)&v43[8]);
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v14 = *(_QWORD*)&v43[8];
    *v13 = *(_QWORD*)v43;
    *(_QWORD*)(a1 + 40) = v14;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v43[16];
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
LABEL_35:
  v17 = *(_QWORD**)(a1 + 72);
  while (v17 != nullptr) {
    v19 = (__int64)v17;
    v17 = (_QWORD*)*v17;
    v20 = *(_QWORD**)(v19 + 80);
    if (v20 == (_QWORD*)(v19 + 48)) {
      v21 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_46;
      }
      v21 = 40;
    }
    (*(void (**)(__int64))(*v20 + v21))((__int64)v20);
  LABEL_46:
    if ((*(_BYTE*)(v19 + 16) & 1) != 0) {
      v22 = *(_QWORD*)(v19 + 32);
      if (v22 != 0) {
        if (*(_QWORD*)(*v6 + 200) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v6 + v23, v22);
      }
    }
    if (*(_QWORD*)(*v6 + 200) != 0) {
      v18 = 128;
    }
    else {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v18, v19);
  }
  v24 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v24 != 0) {
    v25 = v24 & 7;
    if (v24 >= 8) {
      v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      v26 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v26 + 48) = 0;
        v28 = *(_QWORD*)(a1 + 56) + 8 * v26;
        v26 += 8;
        *(_QWORD*)(v28 + 56) = 0;
      } while (v27 != v26);
    }
    else {
      v26 = 0;
    }
    if (v25 != 0) {
      v29 = 8 * v26;
      do {
        --v25;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v29) = 0;
        v29 += 8;
      } while (v25 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_61:
  if ((v43[0] & 1) != 0 && *(_QWORD*)&v43[16] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v30, *(__int64*)&v43[16]);
  }
  if ((v39_.v39 & 1) != 0 && v39_.v41 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v31, (__int64)v39_.v41);
  }
  v32 = 4;
  v43[17] = 0;
  v43[0] = 32;
  v39_.v42 = (__int64 (***)(void))&v39_.v39;
  *(_QWORD*)&v43[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v43[1] = 0xE35F8E88E8A98EE5LL;
  v39_.v39 = (__int64)GameData_2119330;
  v39_.v40 = a1;
  v44 = (__int64 (***)(void))&v39_.v39;
  v45 = (__int64*)v43;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v43,
                          (__int64)std___1_piecewise_construct_ptr, &v45,
                          (__int64*)&v44);
  if (v39_.v42 == (__int64 (***)(void))&v39_.v39) {
    goto LABEL_74;
  }
  if (v39_.v42 != nullptr) {
    v32 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v39_.v42)[v32])((__int64)v39_.v42);
  }
  if ((v43[0] & 1) != 0 && *(_QWORD*)&v43[16] != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v33, *(__int64*)&v43[16]);
  }
  v43[23] = 0;
  v43[0] = 44;
  v39_.v42 = (__int64 (***)(void))&v39_.v39;
  *(_QWORD*)&v43[9] = 0xA983E3A183E3AB82LL;
  *(_QWORD*)&v43[15] = 0x9AAEE5ADA8E8A983LL;
  *(_QWORD*)&v43[1] = 0xE35F8E88E8A98EE5LL;
  v39_.v39 = (__int64)GameData_21193b0;
  v39_.v40 = a1;
  v44 = (__int64 (***)(void))&v39_.v39;
  v45 = (__int64*)v43;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v43,
                          (__int64)std___1_piecewise_construct_ptr, &v45,
                          (__int64*)&v44);
  if (v39_.v42 == (__int64 (***)(void))&v39_.v39) {
    v34 = 4;
    goto LABEL_84;
  }
  if (v39_.v42 != nullptr) {
    v34 = 5;
  LABEL_84:
    ((__int64 (*)(__int64))(*v39_.v42)[v34])((__int64)v39_.v42);
  }
  if ((v43[0] & 1) != 0 && *(_QWORD*)&v43[16] != 0) {
    v35 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v35, *(__int64*)&v43[16]);
  }
  v36 = fw_memory_HeapManager_Allocate_alt1(*v6, 40, 16, 0);
  *(_BYTE*)(v36 + 37) = 0;
  *(_QWORD*)v43 = 41;
  *(_QWORD*)&v43[8] = 37;
  *(_QWORD*)&v43[16] = v36;
  v39_.v42 = (__int64 (***)(void))&v39_.v39;
  *(_QWORD*)(v36 + 16) = 0x82E39CBFE58D8FE5LL;
  *(_QWORD*)(v36 + 24) = 0xE3A782E39583E3A8LL;
  *(_QWORD*)(v36 + 29) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)v36 = 0xE45F8E88E8A98EE5LL;
  *(_QWORD*)(v36 + 8) = 0xA989E78A82E397B9LL;
  v39_.v39 = (__int64)GameData_2119430;
  v39_.v40 = a1;
  v44 = (__int64 (***)(void))&v39_.v39;
  v45 = (__int64*)v43;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v43,
                          (__int64)std___1_piecewise_construct_ptr, &v45,
                          (__int64*)&v44);
  if (v39_.v42 == (__int64 (***)(void))&v39_.v39) {
    v37 = 4;
    goto LABEL_94;
  }
  if (v39_.v42 != nullptr) {
    v37 = 5;
  LABEL_94:
    ((__int64 (*)(__int64))(*v39_.v42)[v37])((__int64)v39_.v42);
  }
  if ((v43[0] & 1) != 0 && *(_QWORD*)&v43[16] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v38, *(__int64*)&v43[16]);
  }
}

void __attribute__((noreturn)) StableSceneDiff_1956990() { __udf(0x8002u); }

void game_facility_StableSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  _QWORD** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  _QWORD* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  struct {
    __int128 v32;
    __int64 v33;
    __int64 v34;
    __int128* v35;
    __int64 v36;
    __int64 v37;
    char gap72_[88];
    char v38;
    char gap161_[15];
    char v39;
    char gap177_[47];
    __int64 v40;
  } v32_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32_.v35 = nullptr;
  v32_.v36 = 0;
  v32_.v33 = 0;
  v32_.v34 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v32_.v32 = (__typeof__(v32_.v32)){0};
  v32_.v37 = 0;
  v30_.v30 = GameData_2131338[0] + 16;
  v30_.v31 = 0;
  ProcStableScene_1955550((void*)(&v41_.v41), v1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41_.v41 & 1) != 0) {
    v2 = v41_.v43;
  }
  else {
    v2 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v3 = v41_.v42;
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  GameRoutine_1389160_alt1((__int64)&v30_.v30, (__int64)v2, v3),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v41_.v43),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v5 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30_.v30 = GameData_212e1c0 + 16;
  if (v32_.v35 == &v32_.v32) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v32_.v35 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int128*, __int64))(*(_QWORD*)v32_.v35 + v7))(v32_.v35, v6),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v30_.v30 = 0x8E88E8A98EE50CLL;
  GameRoutine_19513c0_alt1((unsigned __int8*)&v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v30_.v30 & 1) != 0 && (_QWORD)v32_.v32 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v32_.v32),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v32_.v38 = 0;
  v32_.v39 = 0;
  v32_.v40 = 0;
  v30_.v30 = 0;
  v30_.v31 = 0;
  LOBYTE(v32_.v35) = 0;
  LOBYTE(v32_.v32) = 20;
  strcpy((char*)&v32_.v32 + 9, "_D");
  v9 = *(_QWORD*)(v1 + 96);
  *(_QWORD*)((char*)&v32_.v32 + 1) = 0x335FAC9CE6BA9FE5LL;
  v10 = GameData_212c8a0;
  v11 = game_util_Format_alt1(
      GameData_1aff162,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL * *(unsigned __int8*)(v9 + 24)) +
                            32LL)]),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_60a020_alt1((__int64)&v32_.v32, v11),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *v5;
  v13 = game_util_Format_alt1(GameData_1aa5e95, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = strlen_alt1(v13),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_51:
    String_60a1d0_alt1(),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41_.v42 = v15;
    v41_.v43 = v16;
    v41_.v41 = v17 | 1;
  }
  else {
    LOBYTE(v41_.v41) = 2 * v14;
    v16 = (char*)&v41_.v41 + 1;
    if (v14 == 0) {
      goto LABEL_31;
    }
  }
  memmove_alt1((__int64)v16, (__int64)v13, v15),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_31:
  v16[v15] = 0;
  SceneManager_138c000_alt1(v12, (unsigned __int8*)&v41_.v41,
                            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL),
                            (__int64)&v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v41_.v43),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_a0d9a0_alt1((__int64)&v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32_.v38 = 0;
  v32_.v39 = 0;
  v19 = *v10;
  v32_.v40 = 0;
  v20 = *(_QWORD*)(v19 + 64);
  LOBYTE(v32_.v32) = 20;
  strcpy((char*)&v32_.v32 + 9, "_D");
  v21 = *(_QWORD*)(v1 + 96);
  *(_QWORD*)((char*)&v32_.v32 + 1) = 0x335FAC9CE6BA9FE5LL;
  LOBYTE(v32_.v35) = 0;
  v30_.v30 = 0;
  v30_.v31 = 0;
  v22 = game_util_Format_alt1(
      GameData_1ad102c,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(v20 +
                                       8LL * *(unsigned __int8*)(v21 + 24)) +
                            32LL)]),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_60a020_alt1((__int64)&v32_.v32, v22),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = *v5;
  v24 = (__int64)*GameData_2132468;
  v25 = strlen_alt1((const char*)*GameData_2132468),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_51;
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41_.v42 = v26;
    v41_.v43 = v27;
    v41_.v41 = v28 | 1;
  }
  else {
    LOBYTE(v41_.v41) = 2 * v25;
    v27 = (char*)&v41_.v41 + 1;
    if (v25 == 0) {
      goto LABEL_45;
    }
  }
  memmove_alt1((__int64)v27, v24, v26),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_45:
  v27[v26] = 0;
  SceneManager_138c520_alt1(v23, (unsigned __int8*)&v41_.v41,
                            (_BYTE*)(*(_QWORD*)(v1 + 96) + 24LL), &v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v41_.v43),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_a0d9a0_alt1((__int64)&v30_.v30),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 game_facility_StableSceneDiff_SetCamera(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v1 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21f4000 + 256);
    v3 = *(_QWORD*)(result + 8);
    v4 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = std___1___shared_weak_count___release_weak(v1);
    if (v5 != 0) {
      if (v2 == 0) {
        goto LABEL_14;
      }
      v8_.v8[0] = GameData_21194b0;
      v8_.v8[1] = v3;
      v8_.v9 = v8_.v8;
      v10_.v11 = v10_.v10;
      v10_.v10[0] = GameData_21194b0;
      v10_.v10[1] = v3;
      GameRoutine_14514d0(v10_.v10, (_QWORD*)(v2 + 272));
      if (v10_.v11 == v10_.v10) {
        v6 = 32;
      }
      else {
        if (v10_.v11 == nullptr) {
          goto LABEL_9;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
    LABEL_9:
      result = (__int64)v8_.v9;
      if (v8_.v9 == v8_.v8) {
        v7 = 32;
      }
      else {
        if (v8_.v9 == nullptr) {
          goto LABEL_14;
        }
        v7 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

void game_facility_StableSceneDiff_Initialize_lambda2_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  void* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    char* v32;
  } v30_;
  struct {
    char* v33;
    unsigned __int64 v34;
  } v33_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)GameData_212dce8;
  v3 = GameData_2176150;
  v4 = strlen_alt1((const char*)GameData_2176150);
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
    v30_.v31 = v5;
    v30_.v32 = v6;
    v30_.v30 = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v30_.v30) = 2 * v4;
  v6 = (char*)&v30_.v30 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  v8 = *(__int64**)(v2 + 160);
  v9 = *(__int64**)(v2 + 168);
  if (v8 == v9) {
    v10 = 0;
    if ((v30_.v30 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v11 = *v8++;
    v10 = v11;
    v12 = *(_QWORD*)(v11 + 40);
    v13 = v11 + 25;
    v14 = (*(_BYTE*)(v11 + 24) & 1) != 0 ? v12 : v13;
    v15 = v30_.v32;
    v16 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
    if ((v30_.v30 & 1) != 0) {
      v16 = v30_.v31;
    }
    else {
      v15 = (char*)&v30_.v30 + 1;
    }
    v33_.v33 = v15;
    v33_.v34 = v16;
    v17 = game_HashString(v14);
    if (v17 == GameHr_7a88a0((__int64*)&v33_.v33)) {
      break;
    }
    if (v8 == v9) {
      v10 = 0;
      break;
    }
  }
  if ((v30_.v30 & 1) != 0) {
  LABEL_23:
    if (v30_.v32 != nullptr) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v30_.v32);
    }
  }
LABEL_27:
  if (v10 == 0) {
    return;
  }
  v19 = *(_QWORD*)(v1 + 96);
  if (*(_QWORD*)(v19 + 96) != 0) {
    if (GameRoutine_92b980(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                      8LL * *(unsigned __int8*)(v19 + 24)),
                           *(_BYTE*)(v19 + 25)) == *(_QWORD*)(v19 + 96)) {
      v21 = (__int64*)fw_memory_g_heap_manager_ptr;
      v22 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_BYTE*)(v22 + 35) = 0;
      v30_.v30 = 41;
      v30_.v31 = 35;
      v30_.v32 = (char*)v22;
      *(_DWORD*)(v22 + 31) = -1450580035;
      v23 = &GameData_1ab611a;
      v24 = 0xE35F8E88E8A98EE5LL;
      v25 = 0xAF82E3A282E3AA83LL;
      goto LABEL_36;
    }
    v19 = *(_QWORD*)(v1 + 96);
  }
  v20 = GameRoutine_1953f60(v19);
  v21 = &fw_memory_g_heap_manager;
  if (v20) {
    v22 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40, 16,
                                              0);
    v30_.v30 = 41;
    v30_.v31 = 32;
    v30_.v32 = (char*)v22;
    v23 = &GameData_1adcd29;
  }
  else {
    v22 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40, 16,
                                              0);
    v30_.v30 = 41;
    v23 = &GameData_1ac550c;
    v30_.v31 = 32;
    v30_.v32 = (char*)v22;
  }
  v24 = *v23;
  v25 = v23[1];
  *(_BYTE*)(v22 + 32) = 0;
LABEL_36:
  *(_QWORD*)v22 = v24;
  *(_QWORD*)(v22 + 8) = v25;
  v27 = v23[2];
  v26 = v23[3];
  *(_QWORD*)(v22 + 16) = v27;
  *(_QWORD*)(v22 + 24) = v26;
  SceneEffectManager_1950850((void*)((__int64*)&v33_.v33), (__int64)&v30_.v30,
                             v10, 1u);
  v28 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
    if ((v30_.v30 & 1) == 0) {
      return;
    }
  }
  else if ((v30_.v30 & 1) == 0) {
    return;
  }
  if (v30_.v32 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v29, (__int64)v30_.v32);
  }
}

__attribute__((swiftcall)) void

game_facility_StableSceneDiff_SetCamera_lambda0_Invoke(PSEUDO_X8 x8_,
                                                       __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    char* v10;
  } v9_;

  v3 = game_util_Format_alt1(
      GameData_1ac552d,
      (&GameData_2119210)[*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL *
                                           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 +
                                                                                     8) +
                                                                          96LL) +
                                                               24LL)) +
                            32LL)]);
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
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
    v9_.v9[1] = v5;
    v9_.v10 = v6;
    v9_.v9[0] = v7 | 1;
  }
  else {
    LOBYTE(v9_.v9[0]) = 2 * v4;
    v6 = (char*)v9_.v9 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v6, (__int64)v3, v5);
LABEL_10:
  v6[v5] = 0;
  game_facility_1450640((void*)(a2), (__int64)v9_.v9);
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v9_.v10);
  }
}

#pragma GCC visibility pop
