#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* TheaterSceneDiff_1424140(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned __int64 game_facility_SceneManager_CreateMob(_QWORD*, __int64);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
unsigned __int64 game_facility_TheaterSceneDiff_LoadMob_Act_lambda0_Invoke_alt1(
    __int64 a1, char** a2) __asm__("game_facility_TheaterSceneDiff_LoadMob_Act_"
                                   "lambda0_Invoke");
unsigned __int64
game_facility_TheaterSceneDiff_LoadMob_Watch_lambda0_Invoke_alt1(
    __int64 a1, char** a2) __asm__("game_facility_TheaterSceneDiff_LoadMob_"
                                   "Watch_lambda0_Invoke");
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* SceneManager_138a920_alt1(__int64,
                                  __int64) __asm__("SceneManager_138a920");
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1400780(_QWORD*, __int64, float);
__int64 GameRoutine_19513c0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c000_alt1(_QWORD*, __int64*, __int64,
                                  __int64*) __asm__("SceneManager_138c000");
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_1389160_alt1(__int64, __int64,
                              __int64) __asm__("GameRoutine_1389160");
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a8ed10;
extern _UNKNOWN GameData_1aa5e95_alt1 __asm__("GameData_1aa5e95");
extern _UNKNOWN GameData_1aada75;
extern _UNKNOWN GameData_1abf87e;
extern __int64 (*GameData_203ad68[])();
extern __int64 (*GameData_203ade8[])();
extern __int64 (*GameData_203ae68[])();
extern __int64 (*GameData_203aee8[])();
extern __int64 (*GameData_203af68[])();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern char GameData_1a8ecf2[];
extern char GameData_1aa5e95[];
void GameRoutine_19513c0_alt1(unsigned __int8*) __asm__("GameRoutine_19513c0");
void TheaterSceneDiff_1424140_alt1(_QWORD*, __int64*, __int64*) __asm__(
    "TheaterSceneDiff_1424140");
void __attribute__((noreturn)) GameRoutine_13eb280(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__n128 game_facility_TheaterSceneDiff_Initialize_1423e60_alt1(
    float* a1,
    __int64 a2) __asm__("game_facility_TheaterSceneDiff_Initialize_1423e60");
__n128 game_facility_TheaterSceneDiff_Initialize_14243a0_alt1(
    float* a1,
    __int64 a2) __asm__("game_facility_TheaterSceneDiff_Initialize_14243a0");
__int64 (***game_facility_TheaterSceneDiff_LoadMob_Act_alt1(
    __int64 a1))() __asm__("game_facility_TheaterSceneDiff_LoadMob_Act");
__int64 game_facility_TheaterSceneDiff_Initialize_lambda1_Invoke_alt1(
    __int64 result) __asm__("game_facility_TheaterSceneDiff_Initialize_lambda1_"
                            "Invoke");
void game_facility_TheaterSceneDiff_LoadMob_Watch(__int64 a1);
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneManager_138c000_alt2(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
extern char GameData_1a8ed10_alt1[] __asm__("GameData_1a8ed10");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt2(__int64) __asm__("GameRoutine_a0d9a0");
void SceneManager_138a920_alt2(__int64,
                               __int64) __asm__("SceneManager_138a920");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_TheaterSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
_QWORD* DiningSceneDiff_1413d00(float*, unsigned __int8*, __int64, __int64**,
                                __int64*);
__attribute__((swiftcall)) void SceneCharacterAppearance_140f320_alt1(
    PSEUDO_X8, __int64*, __int64) __asm__("SceneCharacterAppearance_140f320");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
unsigned __int64 GameRoutine_682bc0_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_682bc0");
void GameHr_138a920(__int64, __int64);
void GameHr_138cae0(_QWORD*, __int64);
void GameHr_19513c0(unsigned __int8*);
void __attribute__((noreturn))
GameRoutine_13eb280_alt1() __asm__("GameRoutine_13eb280");
void game_facility_TheaterSceneDiff_Initialize_1423e60(float* a1, __int64 a2);
void game_facility_TheaterSceneDiff_Initialize_14243a0(float* a1, __int64 a2);
void game_facility_TheaterSceneDiff_LoadMob_Act(__int64 a1);
void game_facility_TheaterSceneDiff_LoadMob_Act_lambda0_Invoke(__int64 a1,
                                                               const char** a2);
void game_facility_TheaterSceneDiff_LoadMob_Watch_lambda0_Invoke(
    __int64 a1, const char** a2);

void game_facility_TheaterSceneDiff_Initialize_1423e60(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 (**v16)();
    float* v17;
    __int64 v18;
    char gap24_[8];
    __int64* v19;
  } v16_;
  _BYTE v20[24];
  __int64 (***v21)();
  __int64* v22;

  *((_QWORD*)a1 + 12) = a2;
  v16_.v16 = (__int64 (**)(void))0x94BCE6BA87E50CLL;
  v3 = (const char*)(*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1);
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
    *(_QWORD*)&v20[8] = v5;
    *(_QWORD*)&v20[16] = v7;
    *(_QWORD*)v20 = v8 | 1;
  }
  else {
    v20[0] = 2 * v4;
    v7 = &v20[1];
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v7, (__int64)v3, v5);
LABEL_10:
  v7[v5] = 0;
  TheaterSceneDiff_1424140_alt1(a1, (__int64*)&v16_.v16, (__int64*)v20);
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v9, *(__int64*)&v20[16]);
  }
  if (((unsigned __int8)v16_.v16 & 1) != 0 && v16_.v18 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v10, v16_.v18);
  }
  v11 = 32;
  v20[17] = 0;
  v20[0] = 32;
  v16_.v19 = (__int64*)&v16_.v16;
  *(_QWORD*)&v20[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v20[1] = 0xE35F94BCE6BA87E5LL;
  v16_.v16 = GameData_203ad68;
  v16_.v17 = a1;
  v21 = &v16_.v16;
  v22 = (__int64*)v20;
  DiningSceneDiff_1413d00(a1 + 14, v20,
                          (__int64)std___1_piecewise_construct_ptr, &v22,
                          (__int64*)&v21);
  if (v16_.v19 == (__int64*)&v16_.v16) {
    goto LABEL_23;
  }
  if (v16_.v19 != nullptr) {
    v11 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v16_.v19 + v11))((__int64)v16_.v19);
  }
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v12, *(__int64*)&v20[16]);
  }
  v13 = 32;
  v14 = fw_memory_HeapManager_Allocate_alt1(*v6, 32, 16, 0);
  *(_BYTE*)(v14 + 28) = 0;
  *(_QWORD*)v20 = 33;
  *(_QWORD*)&v20[8] = 28;
  *(_QWORD*)&v20[16] = v14;
  v16_.v19 = (__int64*)&v16_.v16;
  *(_DWORD*)(v14 + 24) = -1363286131;
  *(_QWORD*)(v14 + 16) = 0x85E99F9CE69D88E5LL;
  *(_QWORD*)v14 = 0xE35F94BCE6BA87E5LL;
  *(_QWORD*)(v14 + 8) = 0xA983E3A383E3AD82LL;
  v16_.v16 = GameData_203ade8;
  v16_.v17 = a1;
  v21 = &v16_.v16;
  v22 = (__int64*)v20;
  DiningSceneDiff_1413d00(a1 + 14, v20,
                          (__int64)std___1_piecewise_construct_ptr, &v22,
                          (__int64*)&v21);
  if (v16_.v19 == (__int64*)&v16_.v16) {
    goto LABEL_32;
  }
  if (v16_.v19 != nullptr) {
    v13 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v16_.v19 + v13))((__int64)v16_.v19);
  }
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v15, *(__int64*)&v20[16]);
  }
}

_BYTE* TheaterSceneDiff_1424140(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  _BYTE* result;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v4 = a1 + 1;
  if (v4 != a2) {
    v6 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)v4 & 1) != 0) {
      v9 = a2[1];
      v10 = (v6 & 1) == 0;
      v11 = v6 >> 1;
      if (v10) {
        v12 = (char*)a2 + 1;
      }
      else {
        v12 = (char*)a2[2];
      }
      if (v10) {
        v13 = v11;
      }
      else {
        v13 = v9;
      }
      GameRoutine_64dde0(v4, v12, v13);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20(v4, a2[2], a2[1]);
    }
    else {
      v7 = *a2;
      v8 = a2[2];
      v4[1] = a2[1];
      v4[2] = v8;
      *v4 = v7;
    }
  }
  result = a1 + 4;
  if (a1 + 4 == a3) {
  LABEL_25:
    if (a1[10] == 0) {
      return result;
    }
    goto LABEL_26;
  }
  v15 = *(unsigned __int8*)a3;
  if ((*result & 1) != 0) {
    v18 = (v15 & 1) == 0;
    v19 = v15 >> 1;
    if (v18) {
      v20 = (char*)a3 + 1;
    }
    else {
      v20 = (char*)a3[2];
    }
    if (v18) {
      v21 = v19;
    }
    else {
      v21 = a3[1];
    }
    result = (_BYTE*)GameRoutine_64dde0(result, v20, v21);
    goto LABEL_25;
  }
  if ((v15 & 1) != 0) {
    result = (_BYTE*)GameRoutine_64df20(result, a3[2], a3[1]);
    if (a1[10] == 0) {
      return result;
    }
  }
  else {
    v16 = *a3;
    v17 = a3[2];
    a1[5] = a3[1];
    a1[6] = v17;
    *(_QWORD*)result = v16;
    if (a1[10] == 0) {
      return result;
    }
  }

LABEL_26:
  v22 = (_QWORD*)a1[9];
  if (v22 != nullptr) {
    v23 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = v22;
      v22 = (_QWORD*)*v22;
      v26 = (_QWORD*)v25[10];
      if (v26 == v25 + 6) {
        v27 = 32;
      }
      else {
        if (v26 == nullptr) {
          goto LABEL_37;
        }
        v27 = 40;
      }
      (*(void (**)(void*))(*v26 + v27))(v26);
    LABEL_37:
      if ((v25[2] & 1) != 0 && v25[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v28);
      }
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v24);
    } while (v22 != nullptr);
  }
  v29 = a1[8];
  a1[9] = 0;
  if (v29 != 0) {
    v30 = v29 & 7;
    if (v29 >= 8) {
      v32 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = 0;
      do {
        *(_QWORD*)(a1[7] + 8 * v31) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 8) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 16) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 24) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 32) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 40) = 0;
        *(_QWORD*)(a1[7] + 8 * v31 + 48) = 0;
        v33 = a1[7] + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while (v32 != v31);
    }
    else {
      v31 = 0;
    }
    if (v30 != 0) {
      v34 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(a1[7] + v34) = 0;
        v34 += 8;
      } while (v30 != 0);
    }
  }
  a1[10] = 0;
  return result;
}

void game_facility_TheaterSceneDiff_Initialize_14243a0(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    __int64 v13;
    char gap24_[8];
    __int64* v14;
  } v12_;
  _BYTE v15[24];
  __int64* v16;
  __int64* v17;

  *((_QWORD*)a1 + 13) = a2;
  HIBYTE(v12_.v12[0]) = 0;
  LOBYTE(v12_.v12[0]) = 12;
  *(_DWORD*)((char*)v12_.v12 + 1) = -441211160;
  *(_WORD*)((char*)v12_.v12 + 5) = -30838;
  v3 = (const char*)(*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1);
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
    v6 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
    *(_QWORD*)&v15[8] = v5;
    *(_QWORD*)&v15[16] = v6;
    *(_QWORD*)v15 = v7 | 1;
  }
  else {
    v15[0] = 2 * v4;
    v6 = &v15[1];
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v6, (__int64)v3, v5);
LABEL_10:
  v6[v5] = 0;
  TheaterSceneDiff_1424140_alt1(a1, v12_.v12, (__int64*)v15);
  if ((v15[0] & 1) != 0 && *(_QWORD*)&v15[16] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, *(__int64*)&v15[16]);
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v12_.v13);
  }
  v10 = 32;
  v15[17] = 0;
  v15[0] = 32;
  v12_.v14 = v12_.v12;
  v16 = v12_.v12;
  *(_QWORD*)&v15[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v15[1] = 0xE35F878AE5B3A6E8LL;
  v12_.v12[0] = (__int64)GameData_203ae68;
  v12_.v12[1] = (__int64)a1;
  v17 = (__int64*)v15;
  DiningSceneDiff_1413d00(a1 + 14, v15,
                          (__int64)std___1_piecewise_construct_ptr, &v17,
                          (__int64*)&v16);
  if (v12_.v14 == v12_.v12) {
    goto LABEL_23;
  }
  if (v12_.v14 != nullptr) {
    v10 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v12_.v14 + v10))((__int64)v12_.v14);
  }
  if ((v15[0] & 1) != 0 && *(_QWORD*)&v15[16] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, *(__int64*)&v15[16]);
  }
}

void __attribute__((noreturn)) TheaterSceneDiff_1424910() { __udf(0x8002u); }

void game_facility_TheaterSceneDiff_LoadMob_Act(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  const char* v5;
  unsigned __int64 v6;
  char* i;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int64 (**v40)();
    __int64 v41;
  } v40_;
  struct {
    __int128 v42;
    __int64 (***v43)();
    __int64 v44;
    __int128* v45;
    __int64 v46;
    __int64 v47;
    char gap72_[88];
    char v48;
    char gap161_[15];
    char v49;
    char gap177_[47];
    __int64 v50;
  } v42_;
  struct {
    __int64 v51[2];
    __int64 v52;
  } v51_;
  __int64 v53;
  struct {
    __int64 (**v54)();
    __int64 v55;
  } v54_;

  v42_.v45 = nullptr;
  v42_.v46 = 0;
  v42_.v43 = nullptr;
  v42_.v44 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v42_.v42 = (__typeof__(v42_.v42)){0};
  v42_.v47 = 0;
  v40_.v40 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v40_.v41 = 0;
  GameRoutine_1389160_alt1((__int64)&v40_.v40, (__int64)&GameData_1abf87e, 6);
  GameHr_138a920(*(_QWORD*)GameData_212dce8, (__int64)&v40_.v40);
  v40_.v40 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v42_.v45 == &v42_.v42) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v42_.v45 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int128*))(*(_QWORD*)v42_.v45 + v2))(v42_.v45);
  }
  v40_.v40 = (__int64 (**)(void))0x94BCE6BA87E50CLL;
  GameHr_19513c0((unsigned __int8*)&v40_.v40);
  if (((unsigned __int8)v40_.v40 & 1) != 0 && (_QWORD)v42_.v42 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v42_.v42);
  }
  v4 = *(_QWORD**)(v1 + 96);
  if ((int)((v4[1] - *v4) >> 3) >= 1) {
    v5 = GameData_1aa5e95;
    v6 = 0;
    for (i = game_util_Format_alt2(GameData_1aa5e95, 0);;
         i = game_util_Format_alt2(v5, (unsigned int)v6)) {
      v8 = (__int64)i;
      v9 = strlen_alt1(i);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v10 = v9;
      if (v9 >= 0x17) {
        break;
      }
      v11 = (char*)v51_.v51 + 1;
      LOBYTE(v51_.v51[0]) = 2 * v9;
      if (v9 != 0) {
        goto LABEL_23;
      }
    LABEL_24:
      v11[v10] = 0;
      v40_.v40 = nullptr;
      v40_.v41 = 0;
      LOBYTE(v42_.v42) = 20;
      LOBYTE(v42_.v45) = 0;
      v42_.v48 = 0;
      v42_.v49 = 0;
      v42_.v50 = 0;
      strcpy((char*)&v42_.v42 + 9, "_D");
      *(_QWORD*)((char*)&v42_.v42 + 1) = 0x335FAC9CE6BA9FE5LL;
      v16 = game_util_Format_alt2(GameData_1a8ecf2, (unsigned int)v6);
      GameRoutine_60a020_alt2((__int64)&v42_.v42, v16);
      v17 = *(_QWORD**)(v1 + 96);
      v18 = *(_QWORD*)(*v17 + 8 * v6);
      if (v18 != 0) {
        v19 = *(_QWORD*)(v18 + 392);
        if (v19 != 0) {
          v20 = *(_QWORD*)(v19 + 8);
        }
        else {
          v20 = 0;
        }
        v22 = *(__int64**)(*(_QWORD*)(v17[3] + 40LL) + 40LL);
        v21 = *v22;
        v23 = v22[1] - *v22;
        if ((int)v6 < (int)((unsigned __int64)v23 >> 3)) {
          if (v6 >= v23 >> 3) {
            GameRoutine_13eb280_alt1();
          }
          v24 = *(_QWORD*)(v21 + 8 * v6);
          if (v24 != 0) {
            v25 = *(_BYTE**)(v24 + 64);
            if (v25 != nullptr && *v25 != 0) {
              v26 = v18;
              GameRoutine_682bc0_alt1(&v53, v20);
              SceneCharacterAppearance_140f320_alt1((void*)(&v54_.v54), &v53,
                                                    *(_QWORD*)(v24 + 64));
              v27 = v54_.v54;
              v28 = v54_.v55;
              v29 = v40_.v41;
              v54_.v54 = nullptr;
              v54_.v55 = 0;
              v40_.v40 = v27;
              v40_.v41 = v28;
              if (v29 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                std___1___shared_weak_count___release_weak_alt2(v29);
              }
              v30 = v54_.v55;
              v18 = v26;
              if (v54_.v55 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v54_.v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                std___1___shared_weak_count___release_weak_alt2(v30);
                v18 = v26;
              }
            }
          }
        }
        SceneManager_138c000_alt1(*(_QWORD**)GameData_212dce8, v51_.v51, v18,
                                  (__int64*)&v40_.v40);
      }
      GameRoutine_a0d9a0_alt2((__int64)&v40_.v40);
      if ((v51_.v51[0] & 1) != 0 && v51_.v52 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v51_.v52);
      }
      v4 = *(_QWORD**)(v1 + 96);
      if ((__int64)++v6 >= (int)((v4[1] - *v4) >> 3)) {
        goto LABEL_45;
      }
    }
    v12 = v5;
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v13, 16,
                                              0);
    v15 = v13 | 1;
    v11 = (char*)v14;
    v51_.v51[1] = v10;
    v51_.v52 = v14;
    v5 = v12;
    v51_.v51[0] = v15;
  LABEL_23:
    memmove_alt1((__int64)v11, v8, v10);
    goto LABEL_24;
  }
LABEL_45:
  v32 = v4[3];
  if (v32 != 0) {
    v33 = (__int64*)&v40_.v40;
    v40_.v40 = GameData_203aee8;
    v34 = *(unsigned __int16*)(v32 + 160);
    v42_.v43 = &v40_.v40;
    if (v34 == 0) {
      goto LABEL_51;
    }
    v35 = 8 * v34;
    v36 = 0;
    do {
      if (v42_.v43 == nullptr) {
      LABEL_62:
        GameRoutine_60a310_alt1();
      }
      ((void (*)(__int64 (***)(void), __int64))(*v42_.v43)[6])(
          v42_.v43, *(_QWORD*)(v32 + 168) + v36);
      v36 += 8;
    } while (v35 != v36);
    v33 = (__int64*)v42_.v43;
    if (v42_.v43 != nullptr) {
    LABEL_51:
      if (*(_WORD*)(v32 + 176) != 0) {
        v37 = 8LL * *(unsigned __int16*)(v32 + 176);
        v38 = 0;
        do {
          if (v42_.v43 == nullptr) {
            goto LABEL_62;
          }
          ((void (*)(__int64 (***)(void), __int64))(*v42_.v43)[6])(
              v42_.v43, *(_QWORD*)(v32 + 184) + v38);
          v38 += 8;
        } while (v37 != v38);
        v33 = (__int64*)v42_.v43;
      }
      if (v33 == (__int64*)&v40_.v40) {
        v39 = 32;
      }
      else {
        if (v33 == nullptr) {
          return;
        }
        v39 = 40;
      }
      (*(void (**)(__int64*))(*v33 + v39))(v33);
    }
  }
}

void game_facility_TheaterSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;
  struct {
    __int128 v17;
    char gap48_[8];
    char v18;
    char gap57_[15];
    __int64 v19;
  } v17_;

  v1 = *(_QWORD*)(a1 + 8);
  if ((int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) - **(_QWORD**)(v1 + 96)) >>
            3) >= 1) {
    v2 = 0;
    v3 = (__int64*)GameData_212dce8;
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v5 = SceneManager_138e5e0_alt1(*v3);
      if (v5 != 0) {
        break;
      }
    LABEL_3:
      if ((int)++v2 >= (int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) -
                              **(_QWORD**)(v1 + 96)) >>
                             3)) {
        return;
      }
    }
    v6 = (_QWORD*)v5;
    v7 = game_util_Format_alt2(GameData_1a8ecf2, v2);
    v8 = strlen_alt1(v7);
    if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v9 = v8;
    if (v8 >= 0x17) {
      if ((v8 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v8 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate_alt1(*v4, v11, 16, 0);
      v15_.v15[1] = v9;
      v15_.v16 = v10;
      v15_.v15[0] = v11 | 1;
    }
    else {
      v10 = (char*)v15_.v15 + 1;
      LOBYTE(v15_.v15[0]) = 2 * v8;
      if (v8 == 0) {
      LABEL_14:
        v10[v9] = 0;
        game_facility_140d160((void*)(&v17_.v17), (__int64)v15_.v15);
        GameRoutine_1400780(v6, (__int64)&v17_.v17, 0x0.0p+0f);
        if ((v17_.v18 & 1) != 0 && v17_.v19 != 0) {
          v12 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v4 + v12, v17_.v19);
        }
        if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
          v13 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v4 + v13, (__int64)v15_.v16);
        }
        v14 = v6[1];
        if (v14 != 0) {
          *(_BYTE*)(v14 + 289) = 1;
        }
        goto LABEL_3;
      }
    }
    memmove_alt1((__int64)v10, (__int64)v7, v9);
    goto LABEL_14;
  }
}

void game_facility_TheaterSceneDiff_LoadMob_Watch(__int64 a1)
{
  __int64 v1;
  _QWORD** v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 (**v9)();
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  _QWORD* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  _QWORD** v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
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
  __int64 v35;
  struct {
    __int64 (**v36)();
    __int64 v37;
  } v36_;
  struct {
    __int128 v38;
    __int64 (***v39)();
    __int64 v40;
    __int128* v41;
    __int64 v42;
    __int64 v43;
    char gap120_[88];
    char v44;
    char gap209_[15];
    char v45;
    char gap225_[47];
    __int64 v46;
  } v38_;

  v38_.v41 = nullptr;
  v38_.v42 = 0;
  v38_.v39 = nullptr;
  v38_.v40 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v38_.v38 = (__typeof__(v38_.v38)){0};
  v38_.v43 = 0;
  v36_.v36 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v36_.v37 = 0;
  GameRoutine_1389160_alt1((__int64)&v36_.v36, (__int64)&GameData_1abf87e, 6);
  v2 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920_alt2(*(_QWORD*)GameData_212dce8, (__int64)&v36_.v36);
  v36_.v36 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v38_.v41 == &v38_.v38) {
    v3 = 32;
  }
  else {
    if (v38_.v41 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v38_.v41 + v3))((__int64)v38_.v41);
LABEL_6:
  v36_.v36 = (__int64 (**)(void))0x878AE5B3A6E80CLL;
  GameRoutine_19513c0_alt1((unsigned __int8*)&v36_.v36);
  if (((unsigned __int8)v36_.v36 & 1) != 0 && (_QWORD)v38_.v38 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v38_.v38);
  }
  v5 = 0;
  v6 = 1;
  do {
    v7 = v6;
    v38_.v44 = 0;
    v38_.v45 = 0;
    v38_.v46 = 0;
    v36_.v36 = nullptr;
    v36_.v37 = 0;
    LOBYTE(v38_.v38) = 20;
    LOBYTE(v38_.v41) = 0;
    strcpy((char*)&v38_.v38 + 9, "_D");
    *(_QWORD*)((char*)&v38_.v38 + 1) = 0x335FAC9CE6BA9FE5LL;
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 104) + 8LL) + 8 * v5);
    if (v8 != 0) {
      v8 = *(_QWORD*)(v8 + 392);
    }
    v35 = v8;
    SceneCharacterAppearance_140f320((void*)(&v32_.v32), (__int64)&v35,
                                     (__int64)&GameData_1aada75);
    v9 = (__int64 (**)(void))v32_.v32;
    v10 = v32_.v33;
    v11 = v36_.v37;
    v32_.v32 = 0;
    v32_.v33 = 0;
    v36_.v36 = v9;
    v36_.v37 = v10;
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt2(v11);
      v12 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v12 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt2(v12);
    }
  LABEL_21:
    v13 = game_util_Format_alt2(GameData_1a8ed10_alt1, (unsigned int)v5);
    GameRoutine_60a020_alt2((__int64)&v38_.v38, v13);
    v14 = *v2;
    v15 = game_util_Format_alt2(GameData_1aa5e95, (unsigned int)v5);
    v16 = strlen_alt1(v15);
    if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v17 = v16;
    if (v16 >= 0x17) {
      v19 = v2;
      if ((v16 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v16 | 7) + 1;
      }
      v21 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v20,
                                                16, 0);
      v22 = v20 | 1;
      v18 = (char*)v21;
      v32_.v33 = v17;
      v32_.v34 = v21;
      v2 = v19;
      v32_.v32 = v22;
    }
    else {
      v18 = (char*)&v32_.v32 + 1;
      LOBYTE(v32_.v32) = 2 * v16;
      if (v16 == 0) {
        goto LABEL_30;
      }
    }
    memmove_alt1((__int64)v18, (__int64)v15, v17);
  LABEL_30:
    v18[v17] = 0;
    SceneManager_138c000_alt2(
        v14, (unsigned __int8*)&v32_.v32,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 104) + 8LL) + 8 * v5),
        (__int64)&v36_.v36);
    if ((v32_.v32 & 1) != 0 && v32_.v34 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v32_.v34);
    }
    GameRoutine_a0d9a0_alt2((__int64)&v36_.v36);
    v5 = 1;
    v6 = 0;
  } while ((v7 & 1) != 0);
  v24 = *(_QWORD*)(*(_QWORD*)(v1 + 104) + 32LL);
  if (v24 != 0) {
    v25 = &v36_.v36;
    v36_.v36 = GameData_203af68;
    v26 = *(unsigned __int16*)(v24 + 160);
    v38_.v39 = &v36_.v36;
    if (v26 == 0) {
      goto LABEL_41;
    }
    v27 = 8 * v26;
    v28 = 0;
    do {
      if (v38_.v39 == nullptr) {
      LABEL_53:
        GameRoutine_60a310_alt1();
      }
      ((void (*)(__int64 (***)(void), __int64))(*v38_.v39)[6])(
          v38_.v39, *(_QWORD*)(v24 + 168) + v28);
      v28 += 8;
    } while (v27 != v28);
    v25 = v38_.v39;
    if (v38_.v39 != nullptr) {
    LABEL_41:
      if (*(_WORD*)(v24 + 192) != 0) {
        v29 = 8LL * *(unsigned __int16*)(v24 + 192);
        v30 = 0;
        do {
          if (v38_.v39 == nullptr) {
            goto LABEL_53;
          }
          ((void (*)(__int64 (***)(void), __int64))(*v38_.v39)[6])(
              v38_.v39, *(_QWORD*)(v24 + 200) + v30);
          v30 += 8;
        } while (v29 != v30);
        v25 = v38_.v39;
      }
      if (v25 == &v36_.v36) {
        v31 = 4;
      LABEL_50:
        ((__int64 (*)(__int64))(*v25)[v31])((__int64)v25);
      }
      else if (v25 != nullptr) {
        v31 = 5;
        goto LABEL_50;
      }
    }
  }
}

void game_facility_TheaterSceneDiff_LoadMob_Act_lambda0_Invoke(__int64 a1,
                                                               const char** a2)
{
  _QWORD* v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    char* v10;
  } v9_;

  v2 = *(_QWORD**)GameData_212dce8;
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
    v9_.v9[1] = v5;
    v9_.v10 = v6;
    v9_.v9[0] = v7 | 1;
  }
  else {
    LOBYTE(v9_.v9[0]) = 2 * v4;
    v6 = (char*)v9_.v9 + 1;
    if (v4 == 0) {
      goto LABEL_13;
    }
  }
  memcpy_alt1((__int64)v6, (__int64)v3, v5);
LABEL_13:
  v6[v5] = 0;
  GameHr_138cae0(v2, (__int64)v9_.v9);
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v9_.v10);
  }
}

void game_facility_TheaterSceneDiff_LoadMob_Watch_lambda0_Invoke(
    __int64 a1, const char** a2)
{
  _QWORD* v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    char* v10;
  } v9_;

  v2 = *(_QWORD**)GameData_212dce8;
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
    v9_.v9[1] = v5;
    v9_.v10 = v6;
    v9_.v9[0] = v7 | 1;
  }
  else {
    LOBYTE(v9_.v9[0]) = 2 * v4;
    v6 = (char*)v9_.v9 + 1;
    if (v4 == 0) {
      goto LABEL_13;
    }
  }
  memcpy_alt1((__int64)v6, (__int64)v3, v5);
LABEL_13:
  v6[v5] = 0;
  GameHr_138cae0(v2, (__int64)v9_.v9);
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v9_.v10);
  }
}

#pragma GCC visibility pop
