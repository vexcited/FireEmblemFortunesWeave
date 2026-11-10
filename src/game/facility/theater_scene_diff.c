#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) TheaterSceneDiff_1424910() { __udf(0x8002u); };
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
unsigned __int64
game_facility_TheaterSceneDiff_LoadMob_Act_lambda0_Invoke(__int64 a1,
                                                          char** a2);
unsigned __int64
game_facility_TheaterSceneDiff_LoadMob_Watch_lambda0_Invoke(__int64 a1,
                                                            char** a2);
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
__n128 game_facility_TheaterSceneDiff_Initialize_1423e60(float* a1, __int64 a2);
__n128 game_facility_TheaterSceneDiff_Initialize_14243a0(float* a1, __int64 a2);
__int64 (***game_facility_TheaterSceneDiff_LoadMob_Act(__int64 a1))();
__int64
game_facility_TheaterSceneDiff_Initialize_lambda1_Invoke(__int64 result);
void game_facility_TheaterSceneDiff_LoadMob_Watch(__int64 a1);

__n128 game_facility_TheaterSceneDiff_Initialize_1423e60(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
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
  __n128 result;
  __int64 v16;
  struct {
    __int64 (**v17)();
    float* v18;
    __int64 v19;
    char gap24_[8];
    __int64* v20;
  } v17_;
  _BYTE v21[24];
  __int64 (***v22)();
  __int64* v23;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *((_QWORD*)a1 + 12) = a2;
  v17_.v17 = (__int64 (**)(void))0x94BCE6BA87E50CLL,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)&v21[8] = v5;
    *(_QWORD*)&v21[16] = v7;
    *(_QWORD*)v21 = v8 | 1;
  }
  else {
    v21[0] = 2 * v4;
    v7 = &v21[1];
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v7, v3, v5), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_10:
  v7[v5] = 0;
  TheaterSceneDiff_1424140_alt1(a1, (__int64*)&v17_.v17, (__int64*)v21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v21[0] & 1) != 0 && *(_QWORD*)&v21[16] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (((unsigned __int8)v17_.v17 & 1) != 0 && v17_.v19 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = 32;
  v21[17] = 0;
  v21[0] = 32;
  v17_.v20 = (__int64*)&v17_.v17;
  *(_QWORD*)&v21[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v21[1] = 0xE35F94BCE6BA87E5LL;
  v17_.v17 = GameData_203ad68;
  v17_.v18 = a1;
  v22 = &v17_.v17;
  v23 = (__int64*)v21;
  GameRoutine_1413d00(a1 + 14, v21, (__int64)std___1_piecewise_construct_ptr,
                      &v23, (__int64*)&v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v20 == (__int64*)&v17_.v17) {
    goto LABEL_23;
  }
  if (v17_.v20 != nullptr) {
    v11 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v17_.v20 + v11))((__int64)v17_.v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v21[0] & 1) != 0 && *(_QWORD*)&v21[16] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v13 = 32;
  v14 = fw_memory_HeapManager_Allocate_alt1(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v14 + 28) = 0;
  *(_QWORD*)v21 = 33;
  *(_QWORD*)&v21[8] = 28;
  *(_QWORD*)&v21[16] = v14;
  v17_.v20 = (__int64*)&v17_.v17;
  *(_DWORD*)(v14 + 24) = -1363286131;
  *(_QWORD*)(v14 + 16) = 0x85E99F9CE69D88E5LL;
  *(_QWORD*)v14 = 0xE35F94BCE6BA87E5LL;
  *(_QWORD*)(v14 + 8) = 0xA983E3A383E3AD82LL;
  v17_.v17 = GameData_203ade8;
  v17_.v18 = a1;
  v22 = &v17_.v17;
  v23 = (__int64*)v21;
  GameRoutine_1413d00(a1 + 14, v21, (__int64)std___1_piecewise_construct_ptr,
                      &v23, (__int64*)&v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v20 == (__int64*)&v17_.v17) {
    goto LABEL_32;
  }
  if (v17_.v20 != nullptr) {
    v13 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v17_.v20 + v13))((__int64)v17_.v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v21[0] & 1) != 0 && *(_QWORD*)&v21[16] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v6 + v16);
  }
  return result;
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

__n128 game_facility_TheaterSceneDiff_Initialize_14243a0(float* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __n128 result;
  __int64 v12;
  struct {
    __int64 v13[4];
    __int64* v14;
  } v13_;
  _BYTE v15[24];
  __int64* v16;
  __int64* v17;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *((_QWORD*)a1 + 13) = a2;
  HIBYTE(v13_.v13[0]) = 0;
  LOBYTE(v13_.v13[0]) = 12;
  *(_DWORD*)((char*)v13_.v13 + 1) = -441211160;
  *(_WORD*)((char*)v13_.v13 + 5) = -30838;
  v3 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  memmove(v6, v3, v5), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_10:
  v6[v5] = 0;
  TheaterSceneDiff_1424140_alt1(a1, v13_.v13, (__int64*)v15),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v15[0] & 1) != 0 && *(_QWORD*)&v15[16] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v13_.v13[0] & 1) != 0 && v13_.v13[2] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v10 = 32;
  v15[17] = 0;
  v15[0] = 32;
  v13_.v14 = v13_.v13;
  v16 = v13_.v13;
  *(_QWORD*)&v15[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v15[1] = 0xE35F878AE5B3A6E8LL;
  v13_.v13[0] = (__int64)GameData_203ae68;
  v13_.v13[1] = (__int64)a1;
  v17 = (__int64*)v15;
  GameRoutine_1413d00(a1 + 14, v15, (__int64)std___1_piecewise_construct_ptr,
                      &v17, (__int64*)&v16),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v13_.v14 == v13_.v13) {
    goto LABEL_23;
  }
  if (v13_.v14 != nullptr) {
    v10 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v13_.v14 + v10))((__int64)v13_.v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v15[0] & 1) != 0 && *(_QWORD*)&v15[16] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return result;
}

__int64 (***game_facility_TheaterSceneDiff_LoadMob_Act(__int64 a1))()
{
  __int64 v1;
  __int64 v2;
  __int64 (***result)();
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  const char* v7;
  unsigned __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
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
  __int64 (***v39)();
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int128 v45;
  __int64 (***v46)();
  __int64 v47;
  __int128* v48;
  __int64 v49;
  __int64 v50;
  char v51;
  char v52;
  __int64 v53;
  _QWORD v54[2];
  __int64 v55;
  char v56[8];
  __int64 v57;
  __int64 v58;

  v48 = nullptr;
  v49 = 0;
  v46 = nullptr;
  v47 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v45 = (__typeof__(v45)){0};
  v50 = 0;
  v43 = (__int64)game_facility_SceneManager_FacilityMapArgs_vtable;
  v44 = 0;
  GameRoutine_1389160(&v43, &GameData_1abf87e, 6);
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, &v43);
  v43 = (__int64)&game_facility_SceneManager_IMapArgs_vtable;
  if (v48 == &v45) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v48 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int128*))(*(_QWORD*)v48 + v2))(v48);
  }
  v43 = 0x94BCE6BA87E50CLL;
  result = (__int64 (***)())GameRoutine_19513c0(&v43);
  if ((v43 & 1) != 0) {
    v4 = v45;
    if ((_QWORD)v45 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = (__int64 (***)())nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
    }
  }
  v6 = *(_QWORD**)(v1 + 96);
  if ((int)((v6[1] - *v6) >> 3) >= 1) {
    v7 = GameData_1aa5e95;
    v8 = 0;
    for (i = game_util_Format(GameData_1aa5e95, 0);;
         i = game_util_Format(v7, (unsigned int)v8)) {
      v10 = i;
      v11 = strlen(i);
      if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(v11);
      }
      v12 = v11;
      if (v11 >= 0x17) {
        break;
      }
      v13 = (char*)v54 + 1;
      LOBYTE(v54[0]) = 2 * v11;
      if (v11 != 0) {
        goto LABEL_23;
      }
    LABEL_24:
      v13[v12] = 0;
      v43 = 0;
      v44 = 0;
      LOBYTE(v45) = 20;
      LOBYTE(v48) = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      strcpy((char*)&v45 + 9, "_D");
      *(_QWORD*)((char*)&v45 + 1) = 0x335FAC9CE6BA9FE5LL;
      v18 = game_util_Format(GameData_1a8ecf2, (unsigned int)v8);
      v19 = GameRoutine_60a020(&v45, v18);
      v20 = *(_QWORD**)(v1 + 96);
      v21 = *(_QWORD*)(*v20 + 8 * v8);
      if (v21 != 0) {
        v22 = *(_QWORD*)(v21 + 392);
        if (v22 != 0) {
          v23 = *(_QWORD*)(v22 + 8);
        }
        else {
          v23 = 0;
        }
        v25 = *(__int64**)(*(_QWORD*)(v20[3] + 40LL) + 40LL);
        v24 = *v25;
        v26 = v25[1] - *v25;
        if ((int)v8 < (int)((unsigned __int64)v26 >> 3)) {
          if (v8 >= v26 >> 3) {
            GameRoutine_13eb280(v19, v23);
          }
          v27 = *(_QWORD*)(v24 + 8 * v8);
          if (v27 != 0) {
            v28 = *(_BYTE**)(v27 + 64);
            if (v28 != nullptr && *v28 != 0) {
              v29 = v21;
              GameRoutine_682bc0(v56, v23);
              SceneCharacterAppearance_140f320((void*)(&v57), (__int64)v56,
                                               *(_QWORD*)(v27 + 64));
              v30 = v57;
              v31 = v58;
              v32 = v44;
              v57 = 0;
              v58 = 0;
              v43 = v30;
              v44 = v31;
              if (v32 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak(v32);
              }
              v33 = v58;
              v21 = v29;
              if (v58 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                std___1___shared_weak_count___release_weak(v33);
                v21 = v29;
              }
            }
          }
        }
        SceneManager_138c000(*(_QWORD*)GameData_212dce8, v54, v21, &v43);
      }
      result = (__int64 (***)())GameRoutine_a0d9a0(&v43);
      if ((v54[0] & 1) != 0) {
        v4 = v55;
        if (v55 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          result = (__int64 (***)())nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
        }
      }
      v6 = *(_QWORD**)(v1 + 96);
      if ((__int64)++v8 >= (int)((v6[1] - *v6) >> 3)) {
        goto LABEL_45;
      }
    }
    v14 = v7;
    if ((v11 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v11 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15, 16, 0);
    v17 = v15 | 1;
    v13 = (char*)v16;
    v54[1] = v12;
    v55 = v16;
    v7 = v14;
    v54[0] = v17;
  LABEL_23:
    memmove(v13, v10, v12);
    goto LABEL_24;
  }
LABEL_45:
  v35 = v6[3];
  if (v35 != 0) {
    result = (__int64 (***)())&v43;
    v43 = (__int64)GameData_203aee8;
    v36 = *(unsigned __int16*)(v35 + 160);
    v46 = (__int64 (***)())&v43;
    if (v36 == 0) {
      goto LABEL_51;
    }
    v37 = 8 * v36;
    v38 = 0;
    do {
      v39 = v46;
      if (v46 == nullptr) {
      LABEL_62:
        GameRoutine_60a310(v39, v4);
      }
      ((void (*)(__int64 (***)(), __int64))(*v46)[6])(
          v46, *(_QWORD*)(v35 + 168) + v38);
      v38 += 8;
    } while (v37 != v38);
    result = v46;
    if (v46 != nullptr) {
    LABEL_51:
      if (*(_WORD*)(v35 + 176) != 0) {
        v40 = 8LL * *(unsigned __int16*)(v35 + 176);
        v41 = 0;
        do {
          v39 = v46;
          if (v46 == nullptr) {
            goto LABEL_62;
          }
          ((void (*)(__int64 (***)(), __int64))(*v46)[6])(
              v46, *(_QWORD*)(v35 + 184) + v41);
          v41 += 8;
        } while (v40 != v41);
        result = v46;
      }
      if (result == (__int64 (***)())&v43) {
        v42 = 4;
      }
      else {
        if (result == nullptr) {
          return result;
        }
        v42 = 5;
      }
      return (__int64 (***)())((__int64 (*)(__int64 (***)()))(*result)[v42])(
          result);
    }
  }
  return result;
}

__int64 game_facility_TheaterSceneDiff_Initialize_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  char* v15;
  int8x16_t v16;
  char v17;
  __int64 v18;

  v1 = *(_QWORD*)(result + 8);
  if ((int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) - **(_QWORD**)(v1 + 96)) >>
            3) >= 1) {
    v2 = 0;
    v3 = (_QWORD*)GameData_212dce8;
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      result = SceneManager_138e5e0(*v3, v2);
      if (result != 0) {
        break;
      }
    LABEL_3:
      if ((int)++v2 >= (int)((*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) -
                              **(_QWORD**)(v1 + 96)) >>
                             3)) {
        return result;
      }
    }
    v5 = (_QWORD*)result;
    v6 = game_util_Format(GameData_1a8ecf2, v2);
    v7 = strlen(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(v7);
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = (char*)fw_memory_HeapManager_Allocate(*v4, v10, 16, 0);
      v14[1] = v8;
      v15 = v9;
      v14[0] = v10 | 1;
    }
    else {
      v9 = (char*)v14 + 1;
      LOBYTE(v14[0]) = 2 * v7;
      if (v7 == 0) {
      LABEL_14:
        v9[v8] = 0;
        game_facility_140d160((void*)(&v16), (__int64)v14);
        result = GameRoutine_1400780(v5, (__int64)&v16, 0.0f);
        if ((v17 & 1) != 0 && v18 != 0) {
          v11 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v11 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v4 + v11);
        }
        if ((v14[0] & 1) != 0 && v15 != nullptr) {
          v12 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v12 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v4 + v12);
        }
        v13 = v5[1];
        if (v13 != 0) {
          *(_BYTE*)(v13 + 289) = 1;
        }
        goto LABEL_3;
      }
    }
    memmove(v9, v6, v8);
    goto LABEL_14;
  }
  return result;
}

void game_facility_TheaterSceneDiff_LoadMob_Watch(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD** v2;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  long double v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 (**v21)();
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  _QWORD** v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char v51;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    __int64 v54;
  } v52_;
  __int64 v55;
  struct {
    __int64 (**v56)();
    unsigned __int64 v57;
  } v56_;
  struct {
    __int128 v58;
    __int64 (***v59)();
    __int64 v60;
    __int128* v61;
    __int64 v62;
    __int64 v63;
    char gap120_[88];
    char v64;
    char gap209_[15];
    char v65;
    char gap225_[47];
    __int64 v66;
  } v58_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v58_.v61 = nullptr;
  v58_.v62 = 0;
  v58_.v59 = nullptr;
  v58_.v60 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v58_.v58 = (__typeof__(v58_.v58)){0};
  v58_.v63 = 0;
  v56_.v56 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v56_.v57 = 0;
  GameRoutine_1389160_alt1((__int64)&v56_.v56, (__int64)&GameData_1abf87e, 6),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v2 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v56_.v56),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v56_.v56 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v58_.v61 == &v58_.v58) {
    v7 = 32;
  }
  else {
    if (v58_.v61 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v58_.v61 + v7))((__int64)v58_.v61),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_6:
  v56_.v56 = (__int64 (**)(void))0x878AE5B3A6E80CLL,
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_19513c0_alt1((unsigned __int8*)&v56_.v56),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (((unsigned __int8)v56_.v56 & 1) != 0 && (_QWORD)v58_.v58 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v9 = 0;
  v10 = 1;
  v50 = (char*)&v52_.v52 + 1;
  do {
    v12 = v10;
    v58_.v64 = 0;
    v58_.v65 = 0;
    v58_.v66 = 0;
    v56_.v56 = nullptr;
    v56_.v57 = 0;
    LOBYTE(v58_.v58) = 20;
    LOBYTE(v58_.v61) = 0;
    strcpy((char*)&v58_.v58 + 9, "_D");
    *(_QWORD*)((char*)&v58_.v58 + 1) = 0x335FAC9CE6BA9FE5LL;
    v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 104) + 8LL) + 8 * v9);
    if (v13 != 0) {
      v13 = *(_QWORD*)(v13 + 392);
    }
    v55 = v13;
    *(__n128*)&v20 = X8CALL_V0(__n128, SceneCharacterAppearance_140f320(
                                           (void*)(&v52_.v52), (__int64)&v55,
                                           (__int64)&GameData_1aada75)),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v21 = (__int64 (**)(void))v52_.v52,
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v22 = v52_.v53;
    v23 = v56_.v57;
    v52_.v52 = 0;
    v52_.v53 = 0;
    v56_.v56 = v21;
    v56_.v57 = v22;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v23 + 16LL))(v23,
                                                                          v20),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(__n128*)&v20 = std___1___shared_weak_count___release_weak_alt1(),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v24 = v52_.v53;
      if (v52_.v53 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v24 = v52_.v53;
      if (v52_.v53 == 0) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v24 + 16LL))(v24,
                                                                          v20),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak_alt1(),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  LABEL_21:
    v25 = game_util_Format_alt1((__int64)&GameData_1a8ed10, (unsigned int)v9,
                                v14, v15, v16, v17, v18, v19, (char)v50),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    GameRoutine_60a020_alt1((__int64)&v58_.v58, (__int64)v25),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v26 = *v2;
    v33 =
        game_util_Format_alt1((__int64)&GameData_1aa5e95_alt1, (unsigned int)v9,
                              v27, v28, v29, v30, v31, v32, v51),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v34 = strlen(v33),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v35 = v34;
    if (v34 >= 0x17) {
      v37 = v2;
      if ((v34 | 7) == 0x17) {
        v38 = 26;
      }
      else {
        v38 = (v34 | 7) + 1;
      }
      v39 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v38,
                                                16, 0),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v40 = v38 | 1;
      v36 = (char*)v39;
      v52_.v53 = v35;
      v52_.v54 = v39;
      v2 = v37;
      v52_.v52 = v40;
    }
    else {
      v36 = v50;
      LOBYTE(v52_.v52) = 2 * v34;
      if (v34 == 0) {
        goto LABEL_30;
      }
    }
    memmove(v36, v33, v35),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_30:
    v36[v35] = 0;
    SceneManager_138c000_alt1(
        v26, &v52_.v52,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 104) + 8LL) + 8 * v9),
        (__int64*)&v56_.v56),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v52_.v52 & 1) != 0 && v52_.v54 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    *(__n128*)&v11 = GameRoutine_a0d9a0_alt1((__int64)&v56_.v56),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v9 = 1;
    v10 = 0;
  } while ((v12 & 1) != 0);
  v42 = *(_QWORD*)(*(_QWORD*)(v1 + 104) + 32LL);
  if (v42 != 0) {
    v43 = (__int64*)&v56_.v56;
    v56_.v56 = GameData_203af68;
    v44 = *(unsigned __int16*)(v42 + 160);
    v58_.v59 = &v56_.v56;
    if (v44 == 0) {
      goto LABEL_41;
    }
    v45 = 8 * v44;
    v46 = 0;
    do {
      if (v58_.v59 == nullptr) {
      LABEL_53:
        GameRoutine_60a310_alt1(),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      ((void (*)(__int64 (***)(void), __int64, long double))(*v58_.v59)[6])(
          v58_.v59, *(_QWORD*)(v42 + 168) + v46, v11),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v46 += 8;
    } while (v45 != v46);
    v43 = (__int64*)v58_.v59;
    if (v58_.v59 != nullptr) {
    LABEL_41:
      if (*(_WORD*)(v42 + 192) != 0) {
        v47 = 8LL * *(unsigned __int16*)(v42 + 192);
        v48 = 0;
        do {
          if (v58_.v59 == nullptr) {
            goto LABEL_53;
          }
          ((void (*)(__int64 (***)(void), __int64, long double))(*v58_.v59)[6])(
              v58_.v59, *(_QWORD*)(v42 + 200) + v48, v11),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v32 = COERCE_AS(__typeof__(v32),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v48 += 8;
        } while (v47 != v48);
        v43 = (__int64*)v58_.v59;
      }
      if (v43 == (__int64*)&v56_.v56) {
        v49 = 32;
      LABEL_50:
        (*(void (**)(void*))(*v43 + v49))(v43),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      else if (v43 != nullptr) {
        v49 = 40;
        goto LABEL_50;
      }
    }
  }
}

unsigned __int64

game_facility_TheaterSceneDiff_LoadMob_Act_lambda0_Invoke(__int64 a1, char** a2)
{
  _QWORD* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 result;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  v2 = *(_QWORD**)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v10[1] = v5;
    v11 = v6;
    v10[0] = v7 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v4;
    v6 = (char*)v10 + 1;
    if (v4 == 0) {
      goto LABEL_13;
    }
  }
  memcpy(v6, v3, v5);
LABEL_13:
  v6[v5] = 0;
  result = game_facility_SceneManager_CreateMob(v2, (__int64)v10);
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

unsigned __int64

game_facility_TheaterSceneDiff_LoadMob_Watch_lambda0_Invoke(__int64 a1,
                                                            char** a2)
{
  _QWORD* v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 result;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  v2 = *(_QWORD**)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v10[1] = v5;
    v11 = v6;
    v10[0] = v7 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v4;
    v6 = (char*)v10 + 1;
    if (v4 == 0) {
      goto LABEL_13;
    }
  }
  memcpy(v6, v3, v5);
LABEL_13:
  v6[v5] = 0;
  result = game_facility_SceneManager_CreateMob(v2, (__int64)v10);
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

#pragma GCC visibility pop
