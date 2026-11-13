#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7a88a0(_QWORD);
__int64 game_HashString(_QWORD);
extern __int64 GameData_21f4000;
__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result);
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_1391f60(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_92b240(PSEUDO_X8, _QWORD);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19513c0(_QWORD);
__int64 GameRoutine_195ab40(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138b7a0(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138dac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_facility_SceneManager_CloneObject(__int64, _QWORD*, __int64*);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1ae7519;
extern _UNKNOWN GameData_1af2a63;
extern __int64 (*GameData_2039748[])();
extern __int64 (*GameData_20397c8[])();
extern __int64 (*GameData_2039848[])();
extern __int64* GameData_2131090;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_1aa5e95[];
extern char GameData_1aa9dde[];
extern char GameData_1aeb216[];
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__n128 game_facility_DiningSceneDiff_Initialize(unsigned __int64 a1,
                                                __int64 a2);
__int64 game_facility_DiningSceneDiff_LoadProp(__int64 a1);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
void GameRoutine_14140e0(__int64*, unsigned __int64);
_QWORD* DiningSceneDiff_1413d00(float* a1, unsigned __int8* a2, __int64 a3,
                                __int64** a4, __int64* a5);
__attribute__((swiftcall)) void SceneCharacterAppearance_140f320_alt1(
    PSEUDO_X8, __int64*, __int64) __asm__("SceneCharacterAppearance_140f320");
__attribute__((swiftcall)) void
game_92b240_alt1(PSEUDO_X8, __int64) __asm__("game_92b240");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneManager_138a920_alt1(__int64,
                                  __int64) __asm__("SceneManager_138a920");
__int64 SceneManager_138b7a0_alt1(__int64,
                                  __int64) __asm__("SceneManager_138b7a0");
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 SceneManager_138dac0_alt1(__int64, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138dac0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_facility_SceneManager_CloneObject_alt1(
    __int64, unsigned __int8*,
    __int64) __asm__("game_facility_SceneManager_CloneObject");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_1389160_alt1(__int64, __int64,
                              __int64) __asm__("GameRoutine_1389160");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern const char GameData_1ae7519_alt1[] __asm__("GameData_1ae7519");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_19513c0_alt1(unsigned __int8*) __asm__("GameRoutine_19513c0");
void GameRoutine_195ab40_alt1(__int64, __int64) __asm__("GameRoutine_195ab40");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* SceneCharacter_14020c0(__int64);
__int64 SceneCharacter_1401300(__int64 result, __int64, float);
__int64 SceneManager_138e5e0(__int64);
__int64 game_facility_14107c0(__int64, __int64);
void SceneCharacter_1401550(__int64, __int64);
__int64 game_facility_DiningSceneDiff_Initialize_lambda1_Invoke(__int64 a1);

__n128 game_facility_DiningSceneDiff_Initialize(unsigned __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
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
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __n128 result;
  __int64 v36;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
    char gap24_[8];
    __int64 (***v40)();
  } v37_;
  _BYTE v41[24];
  __int64 (***v42)();
  __int64* v43;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  v37_.v37 = 0x82A0E59FA3E90CLL;
  v3 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
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
    v7 = (_BYTE*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)&v41[8] = v5;
    *(_QWORD*)&v41[16] = v7;
    *(_QWORD*)v41 = v8 | 1;
    goto LABEL_9;
  }
  v41[0] = 2 * v4;
  v7 = &v41[1];
  if (v4 != 0) {
  LABEL_9:
    memmove(v7, v3, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v9 = (__int64*)(a1 + 8);
  v7[v5] = 0;
  if ((__int64*)(a1 + 8) != &v37_.v37) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if ((v37_.v37 & 1) != 0) {
        v11 = v37_.v39;
      }
      else {
        v11 = (char*)&v37_.v37 + 1;
      }
      if ((v37_.v37 & 1) != 0) {
        v12 = v37_.v38;
      }
      else {
        v12 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
      }
      SpineModel_64dde0(v9, (__int64)v11, v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if ((v37_.v37 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v37_.v39, v37_.v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v10 = v37_.v38;
      *v9 = v37_.v37;
      *(_QWORD*)(a1 + 16) = v10;
      *(_QWORD*)(a1 + 24) = v37_.v39;
    }
  }
  v13 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v41) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v13 & 1) != 0) {
    if ((v41[0] & 1) != 0) {
      v15 = *(_BYTE**)&v41[16];
    }
    else {
      v15 = &v41[1];
    }
    if ((v41[0] & 1) != 0) {
      v16 = *(_QWORD*)&v41[8];
    }
    else {
      v16 = (unsigned __int64)v41[0] >> 1;
    }
    SpineModel_64dde0(v13, (__int64)v15, v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_34;
  }
  if ((v41[0] & 1) != 0) {
    GameRoutine_64df20(v13, *(__int64*)&v41[16], *(unsigned __int64*)&v41[8]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v14 = *(_QWORD*)&v41[8];
    *v13 = *(_QWORD*)v41;
    *(_QWORD*)(a1 + 40) = v14;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v41[16];
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
LABEL_35:
  v17 = *(_QWORD**)(a1 + 72);
  while (v17 != nullptr) {
    v19 = v17;
    v17 = (_QWORD*)*v17;
    v20 = (_QWORD*)v19[10];
    if (v20 == v19 + 6) {
      v21 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_46;
      }
      v21 = 40;
    }
    (*(void (**)(__int64))(*v20 + v21))((__int64)v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_46:
    if ((v19[2] & 1) != 0 && v19[4] != 0) {
      if (*(_QWORD*)(*v6 + 200) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v22, (_QWORD)(v19[4])),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*v6 + 200) != 0) {
      v18 = 128;
    }
    else {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v18, (_QWORD)(v19)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v23 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v23 != 0) {
    v24 = v23 & 7;
    if (v23 >= 8) {
      v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v25 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 48) = 0;
        v27 = *(_QWORD*)(a1 + 56) + 8 * v25;
        v25 += 8;
        *(_QWORD*)(v27 + 56) = 0;
      } while (v26 != v25);
    }
    else {
      v25 = 0;
    }
    if (v24 != 0) {
      v28 = 8 * v25;
      do {
        --v24;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v28) = 0;
        v28 += 8;
      } while (v24 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_61:
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v29, (_QWORD)(*(_QWORD*)&v41[16])),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v30, (_QWORD)(v37_.v39)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v31 = 4;
  v41[17] = 0;
  v41[0] = 32;
  v37_.v40 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)&v41[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v41[1] = 0xE35F82A0E59FA3E9LL;
  v37_.v37 = (__int64)GameData_2039748;
  v37_.v38 = a1;
  v42 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = (__int64*)v41;
  GameRoutine_1413d00((float*)(a1 + 56), v41,
                      (__int64)std___1_piecewise_construct_ptr, &v43,
                      (__int64*)&v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v37_.v40 == (__int64 (***)(void))&v37_.v37) {
    goto LABEL_74;
  }
  if (v37_.v40 != nullptr) {
    v31 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v37_.v40)[v31])((__int64)v37_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v32, (_QWORD)(*(_QWORD*)&v41[16])),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v33 = 4;
  v34 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v41 = 33;
  *(_QWORD*)&v41[8] = 25;
  *(_QWORD*)&v41[16] = v34;
  *(_WORD*)(v34 + 24) = 130;
  v37_.v40 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v34 + 16) = 0x99E68BA7E58B96E9LL;
  *(_QWORD*)v34 = 0xE75F82A0E59FA3E9LL;
  *(_QWORD*)(v34 + 8) = 0x8A82E3AE92E6A989LL;
  v37_.v37 = (__int64)GameData_20397c8;
  v37_.v38 = a1;
  v42 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = (__int64*)v41;
  GameRoutine_1413d00((float*)(a1 + 56), v41,
                      (__int64)std___1_piecewise_construct_ptr, &v43,
                      (__int64*)&v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v37_.v40 == (__int64 (***)(void))&v37_.v37) {
    goto LABEL_83;
  }
  if (v37_.v40 != nullptr) {
    v33 = 5;
  LABEL_83:
    ((__int64 (*)(__int64))(*v37_.v40)[v33])((__int64)v37_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v36 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v36,
                                         (_QWORD)(*(_QWORD*)&v41[16]));
  }
  return result;
}

void __attribute__((noreturn)) DiningSceneDiff_1413c50() { __udf(0x8002u); }

_QWORD* DiningSceneDiff_1413d00(float* a1, unsigned __int8* a2, __int64 a3,
                                __int64** a4, __int64* a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  _BOOL8 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 primeEm;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;

  v6 = *a2;
  v10 = (v6 & 1) == 0;
  v11 = v6 >> 1;
  if (v10) {
    v12 = a2 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a2 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a2 + 1);
  }
  v14 = std___1___hash_memory(v12, v13);
  v15 = *((_QWORD*)a1 + 1);
  v16 = v14;
  if (v15 != 0) {
    v17 = v15 - 1;
    if ((v15 & (v15 - 1)) != 0) {
      v5 = v14;
      if (v14 >= v15) {
        v5 = v14 % v15;
      }
    }
    else {
      v5 = v17 & v14;
    }
    v18 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
    if (v18 != nullptr) {
      v19 = (_QWORD*)*v18;
      if (*v18 != 0) {
        if ((v15 & v17) == 0) {
          while (1) {
            v24 = v19[1];
            if (v24 == v16) {
              v25 = *((unsigned __int8*)v19 + 16);
              v26 = v19[3];
              if ((v25 & 1) == 0) {
                v26 = v25 >> 1;
              }
              if (v26 == v13) {
                v27 = (v25 & 1) != 0 ? (_QWORD*)v19[4]
                                     : (_QWORD*)((char*)v19 + 17);
                if ((unsigned int)memcmp(v27, v12, v13) == 0) {
                  return v19;
                }
              }
            }
            else if ((v24 & v17) != v5) {
              goto LABEL_41;
            }
            v19 = (_QWORD*)*v19;
            if (v19 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v20 = v19[1];
          if (v20 == v16) {
            v21 = *((unsigned __int8*)v19 + 16);
            v22 = v19[3];
            if ((v21 & 1) == 0) {
              v22 = v21 >> 1;
            }
            if (v22 == v13) {
              v23 =
                  (v21 & 1) != 0 ? (_QWORD*)v19[4] : (_QWORD*)((char*)v19 + 17);
              if ((unsigned int)memcmp(v23, v12, v13) == 0) {
                return v19;
              }
            }
          }
          else {
            if (v20 >= v15) {
              v20 %= v15;
            }
            if (v20 != v5) {
              break;
            }
          }
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
    }
  }
LABEL_41:
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v29 = *a4;
  *v28 = 0;
  v28[1] = v16;
  v30 = *a5;
  v19 = v28;
  if ((*(_BYTE*)v29 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v28 + 2, v29[2], v29[1]);
    v34 = *(_QWORD*)(v30 + 32);
    if (v34 != 0) {
    LABEL_43:
      if (v34 == v30) {
        v19[10] = v19 + 6;
        (*(void (**)(_QWORD))(**(_QWORD**)(v30 + 32) + 24LL))(
            *(_QWORD*)(v30 + 32));
      }
      else {
        v19[10] = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      }
      goto LABEL_48;
    }
  }
  else {
    v31 = *v29;
    v32 = v29[1];
    v33 = v29[2];
    v28[3] = v32;
    v28[4] = v33;
    v28[2] = v31;
    v34 = *(_QWORD*)(v30 + 32);
    if (v34 != 0) {
      goto LABEL_43;
    }
  }
  v19[10] = 0;
LABEL_48:
  v35 = a1[8];
  v36 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v15 == 0 || (float)(v35 * (float)v15) < v36) {
    v37 = v36 / v35;
    v38 = true;
    if (v15 >= 3) {
      v38 = (v15 & (v15 - 1)) != 0;
    }
    v39 = v38 | (2 * v15);
    v40 = vcvtps_u64_f32(v37);
    if (v39 <= v40) {
      primeEm = v40;
    }
    else {
      primeEm = v39;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v42 = *((_QWORD*)a1 + 1);
    if (primeEm > v42) {
      goto LABEL_60;
    }
    if (primeEm < v42) {
      v43 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v42 < 3 || (v42 & (v42 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << (-(char)__clz(v43 - 1) & 63);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm < v42) {
      LABEL_60:
        GameRoutine_14140e0((__int64*)a1, primeEm);
      }
    }
    v15 = *((_QWORD*)a1 + 1);
    if ((v15 & (v15 - 1)) != 0) {
      if (v16 >= v15) {
        v5 = v16 % v15;
      }
      else {
        v5 = v16;
      }
    }
    else {
      v5 = (v15 - 1) & v16;
    }
  }
  v45 = *(_QWORD*)a1;
  v46 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
  if (v46 != nullptr) {
    *v19 = *v46;
    *v46 = v19;
  }
  else {
    v47 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v19;
    *v19 = v47;
    *(_QWORD*)(v45 + 8 * v5) = a1 + 4;
    if (*v19 != 0) {
      v48 = *(_QWORD*)(*v19 + 8LL);
      if ((v15 & (v15 - 1)) != 0) {
        if (v48 >= v15) {
          v48 %= v15;
        }
      }
      else {
        v48 &= v15 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v48) = v19;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v19;
}

__int64 game_facility_DiningSceneDiff_LoadProp(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
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
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  unsigned int v42;
  __int64* v43;
  char* v44;
  __int128** v45;
  const char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  char* v50;
  __int128** v51;
  __int64 v52;
  char* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int128* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 result;
  __int64 v89;
  struct {
    _QWORD v90[6];
    _QWORD* v91;
    __int64 v92;
    __int64 v93;
  } v90_;
  struct {
    __int64 v94;
    unsigned __int64 v95;
    __int128 v96;
    int v97;
    char gap132_[4];
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
  } v94_;
  struct {
    __int128 v107;
    _BYTE v108[9];
  } v107_;
  char v109[3];
  struct {
    __int128* v110;
    char gap248_[8];
    int v111;
    char gap260_[12];
    __int128 v112;
    int v113;
    char gap292_[4];
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    char v123;
    char gap369_[15];
    char v124;
    char gap385_[47];
    __int64 v125;
  } v110_;
  struct {
    __int64 v126;
    unsigned __int64 v127;
    char* v128;
  } v126_;

  v90_.v91 = nullptr;
  v90_.v92 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v90_.v93 = 0;
  v90_.v90[0] = GameData_2131338[0] + 16;
  memset(&v90_.v90[1], 0, 40);
  game_92b240_alt1((void*)((__int64*)&v107_.v107), v1);
  if ((v107_.v107 & 1) != 0) {
    v2 = *(char**)v107_.v108;
  }
  else {
    v2 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v3 = *((_QWORD*)&v107_.v107 + 1);
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  GameRoutine_1389160_alt1((__int64)v90_.v90, (__int64)v2, v3);
  if ((v107_.v107 & 1) != 0 && *(_QWORD*)v107_.v108 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *(__int64*)v107_.v108);
  }
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)v90_.v90);
  BYTE7(v107_.v107) = 0;
  LOBYTE(v107_.v107) = 12;
  *(_DWORD*)((char*)&v107_.v107 + 1) = -442522647;
  *(_WORD*)((char*)&v107_.v107 + 5) = -32096;
  GameRoutine_19513c0_alt1((unsigned __int8*)&v107_.v107);
  if ((v107_.v107 & 1) != 0 && *(_QWORD*)v107_.v108 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, *(__int64*)v107_.v108);
  }
  for (i = 0; i != 3; ++i) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) + 8 * i);
    if (v7 == 0) {
      continue;
    }
    v8 = *(_QWORD*)(v7 + 392);
    v107_.v107 = (__typeof__(v107_.v107)){0};
    v107_.v108[0] = 20;
    LOBYTE(v110_.v111) = 0;
    v110_.v123 = 0;
    v110_.v124 = 0;
    v110_.v125 = 0;
    strcpy(v109, "_D");
    v126_.v126 = v8;
    *(_QWORD*)&v107_.v108[1] = 0x335FAC9CE6BA9FE5LL;
    SceneCharacterAppearance_140f320_alt1((void*)(&v94_.v94), &v126_.v126,
                                          (__int64)&GameData_1af2a63);
    v9 = v94_.v94;
    v10 = v94_.v95;
    v11 = *((_QWORD*)&v107_.v107 + 1);
    v94_.v94 = 0;
    v94_.v95 = 0;
    *(_QWORD*)&v107_.v107 = v9;
    *((_QWORD*)&v107_.v107 + 1) = v10;
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
      v12 = v94_.v95;
      if (v94_.v95 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v12 = v94_.v95;
      if (v94_.v95 == 0) {
        goto LABEL_27;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  LABEL_27:
    v13 = game_util_Format_alt1(GameData_1aeb216, (unsigned int)i);
    v14 = strlen_alt1(v13);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_181;
    }
    v15 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v14 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
      v126_.v127 = v15;
      v126_.v128 = v16;
      v126_.v126 = v17 | 1;
    LABEL_35:
      memmove_alt1((__int64)v16, (__int64)v13, v15);
      goto LABEL_36;
    }
    v16 = (char*)&v126_.v126 + 1;
    LOBYTE(v126_.v126) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_35;
    }
  LABEL_36:
    v16[v15] = 0;
    GameRoutine_195ab40_alt1((__int64)&v94_.v94, (__int64)&v126_.v126);
    v110_.v111 = v94_.v94;
    if (v110_.v123 != 1) {
      v23 = v94_.v98;
      v24 = v94_.v99;
      v94_.v98 = 0;
      v94_.v99 = 0;
      v110_.v114 = v23;
      v110_.v115 = v24;
      v25 = v94_.v102;
      v26 = v94_.v103;
      v110_.v112 = v94_.v96;
      v94_.v102 = 0;
      v94_.v103 = 0;
      v110_.v113 = v94_.v97;
      v110_.v118 = v25;
      v110_.v119 = v26;
      v27 = v94_.v100;
      v28 = v94_.v101;
      v94_.v100 = 0;
      v94_.v101 = 0;
      v110_.v116 = v27;
      v110_.v117 = v28;
      v30 = v94_.v105;
      v29 = v94_.v106;
      v94_.v105 = 0;
      v94_.v106 = 0;
      v110_.v121 = v30;
      v110_.v122 = v29;
      v31 = v94_.v104;
      v94_.v104 = 0;
      v110_.v120 = v31;
      v110_.v123 = 1;
    LABEL_58:
      if ((v94_.v98 & 1) == 0) {
        goto LABEL_65;
      }
    LABEL_61:
      if (v94_.v100 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v94_.v100);
      }
      goto LABEL_65;
    }
    *(_QWORD*)&v18 = v94_.v96;
    *((_QWORD*)&v18 + 1) = DWORD2(v94_.v96);
    v110_.v113 = v94_.v97;
    v110_.v112 = v18;
    if ((v110_.v114 & 1) != 0 && v110_.v116 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v110_.v116);
    }
    v110_.v114 = v94_.v98;
    v110_.v115 = v94_.v99;
    LOWORD(v94_.v98) = 0;
    v110_.v116 = v94_.v100;
    if ((v110_.v117 & 1) != 0 && v110_.v119 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v110_.v119);
    }
    v110_.v117 = v94_.v101;
    v110_.v118 = v94_.v102;
    LOWORD(v94_.v101) = 0;
    v110_.v119 = v94_.v103;
    if ((v110_.v120 & 1) == 0 || v110_.v122 == 0) {
      v110_.v120 = v94_.v104;
      v110_.v121 = v94_.v105;
      LOWORD(v94_.v104) = 0;
      v110_.v122 = v94_.v106;
      if ((v94_.v98 & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_61;
    }
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v110_.v122);
    v110_.v120 = v94_.v104;
    v110_.v121 = v94_.v105;
    LOWORD(v94_.v104) = 0;
    v110_.v122 = v94_.v106;
    if ((v94_.v101 & 1) == 0 || v94_.v103 == 0) {
      goto LABEL_58;
    }
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v94_.v103);
    if ((v94_.v98 & 1) != 0) {
      goto LABEL_61;
    }
  LABEL_65:
    if ((v126_.v126 & 1) != 0 && v126_.v128 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v126_.v128);
    }
    v34 = *(_QWORD**)GameData_212dce8;
    v35 = game_util_Format_alt1(GameData_1aa5e95, (unsigned int)i);
    v36 = strlen_alt1(v35);
    if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_181:
      String_60a1d0();
    }
    v37 = v36;
    if (v36 >= 0x17) {
      if ((v36 | 7) == 0x17) {
        v39 = 26;
      }
      else {
        v39 = (v36 | 7) + 1;
      }
      v38 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v39, 16, 0);
      v94_.v95 = v37;
      *(_QWORD*)&v94_.v96 = v38;
      v94_.v94 = v39 | 1;
    LABEL_78:
      memmove_alt1((__int64)v38, (__int64)v35, v37);
      goto LABEL_79;
    }
    v38 = (char*)&v94_.v94 + 1;
    LOBYTE(v94_.v94) = 2 * v36;
    if (v36 != 0) {
      goto LABEL_78;
    }
  LABEL_79:
    v38[v37] = 0;
    SceneManager_138c000_alt1(
        v34, (unsigned __int8*)&v94_.v94,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) + 8 * i),
        (__int64)&v107_.v107);
    if ((v94_.v94 & 1) != 0 && (_QWORD)v94_.v96 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v94_.v96);
    }
    GameRoutine_a0d9a0_alt1((__int64)&v107_.v107);
  }
  v41 = &GameData_1a9f09e;
  v42 = 0;
  v43 = GameData_2131090;
  v44 = (char*)&v94_.v94 + 1;
  v45 = &v110_.v110;
  do {
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 32LL) + 56LL) != 0) {
      v46 = *(const char**)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 32LL) + 56LL);
    }
    else {
      v46 = v41;
    }
    v47 = strlen_alt1(v46);
    if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_181;
    }
    v48 = v47;
    if (v47 >= 0x17) {
      v50 = v44;
      v51 = v45;
      v52 = v1;
      v53 = v41;
      v54 = v43;
      if ((v47 | 7) == 0x17) {
        v55 = 26;
      }
      else {
        v55 = (v47 | 7) + 1;
      }
      v56 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v55, 16, 0);
      v57 = v55 | 1;
      v43 = v54;
      v41 = v53;
      v1 = v52;
      v45 = v51;
      v44 = v50;
      v49 = v56;
      v94_.v95 = v48;
      *(_QWORD*)&v94_.v96 = v56;
      v94_.v94 = v57;
    LABEL_97:
      memmove_alt1(v49, (__int64)v46, v48);
      goto LABEL_98;
    }
    v49 = (__int64)v44;
    LOBYTE(v94_.v94) = 2 * v47;
    if (v47 != 0) {
      goto LABEL_97;
    }
  LABEL_98:
    *(_BYTE*)(v49 + v48) = 0;
    if ((v94_.v94 & 1) != 0) {
      v58 = v94_.v96;
    }
    else {
      v58 = (__int64)v44;
    }
    v59 = game_HashString_alt1(v58);
    v60 = *v43;
    v61 = *(_QWORD*)(*v43 + 96);
    if ((v61 & (v61 - 1)) != 0) {
      v62 = v59;
      if (v59 >= v61) {
        v62 = v59 % v61;
      }
      v63 = *(_QWORD**)(*(_QWORD*)(v60 + 88) + 8 * v62);
      do {
        do {
          v63 = (_QWORD*)*v63;
        } while (v63[1] != v59);
      } while (v63[2] != v59);
    }
    else {
      v63 = *(_QWORD**)(*(_QWORD*)(v60 + 88) + 8 * ((v61 - 1) & v59));
      do {
        do {
          v63 = (_QWORD*)*v63;
        } while (v63[1] != v59);
      } while (v63[2] != v59);
    }
    game_1391f60((void*)(&v126_.v126), v63[3]);
    *(_QWORD*)&v110_.v112 = 0;
    LOBYTE(v107_.v107) = 20;
    strcpy((char*)&v107_.v107 + 9, "_D");
    *(_QWORD*)((char*)&v107_.v107 + 1) = 0x335FAC9CE6BA9FE5LL;
    v64 = game_util_Format_alt1(GameData_1aa9dde, v42);
    GameRoutine_60a020_alt1((__int64)&v107_.v107, v64);
    SceneManager_138dac0_alt1(*(_QWORD*)GameData_212dce8,
                              (unsigned __int8*)&v126_.v126, (__int64)&v94_.v94,
                              (__int64)&v107_.v107);
    if ((__int128**)v110_.v112 == v45) {
      v65 = 32;
      goto LABEL_115;
    }
    if ((_QWORD)v110_.v112 != 0) {
      v65 = 40;
    LABEL_115:
      (*(void (**)(__int64))(*(_QWORD*)v110_.v112 + v65))((__int64)v110_.v112);
    }
    if ((v107_.v107 & 1) != 0 && *(_QWORD*)v107_.v108 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, *(__int64*)v107_.v108);
    }
    if ((v126_.v126 & 1) != 0 && v126_.v128 != nullptr) {
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, (__int64)v126_.v128);
    }
    if ((v94_.v94 & 1) != 0 && (_QWORD)v94_.v96 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v94_.v96);
    }
    ++v42;
  } while (v42 != 3);
  game_92b240_alt1((void*)(&v94_.v94), v1);
  GameRoutine_1a09ce0_alt1((__int64)&v94_.v94, GameData_1ae7519_alt1, 0xDu);
  if ((v94_.v94 & 1) != 0) {
    v69 = (char*)v94_.v96;
  }
  else {
    v69 = (char*)&v94_.v94 + 1;
  }
  v70 = game_HashString_alt1((__int64)v69);
  if (v70 == 0) {
    goto LABEL_170;
  }
  v71 = *v43;
  v72 = *(_QWORD*)(*v43 + 96);
  if (v72 == 0 || *(_QWORD*)(v71 + 112) == 0) {
    goto LABEL_170;
  }
  v73 = v72 - 1;
  if ((v72 & (v72 - 1)) != 0) {
    v74 = v70;
    if (v70 >= v72) {
      v74 = v70 % v72;
    }
  }
  else {
    v74 = v73 & v70;
  }
  v75 = *(_QWORD**)(*(_QWORD*)(v71 + 88) + 8 * v74);
  if (v75 == nullptr) {
    goto LABEL_170;
  }
  v76 = (_QWORD*)*v75;
  if (v76 == nullptr) {
    goto LABEL_170;
  }
  if ((v72 & v73) == 0) {
    while (1) {
      v78 = v76[1];
      if (v78 == v70) {
        if (v76[2] == v70) {
          goto LABEL_157;
        }
      }
      else if ((v78 & v73) != v74) {
        goto LABEL_170;
      }
      v76 = (_QWORD*)*v76;
      if (v76 == nullptr) {
        goto LABEL_170;
      }
    }
  }
  while (2) {
    v77 = v76[1];
    if (v77 != v70) {
      if (v77 >= v72) {
        v77 %= v72;
      }
      if (v77 != v74) {
        goto LABEL_170;
      }
    }
    else if (v76[2] == v70) {
    LABEL_157:
      if (v76[3] != 0) {
        v79 = (__int64*)GameData_212dce8;
        game_facility_SceneManager_CloneObject_alt1(*(_QWORD*)GameData_212dce8,
                                                    (unsigned __int8*)&v94_.v94,
                                                    (__int64)&v94_.v94);
        v80 = *v79;
        if ((v94_.v94 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v126_.v126, v94_.v96, v94_.v95);
        }
        else {
          v126_.v126 = v94_.v94;
          v126_.v127 = v94_.v95;
          v126_.v128 = (char*)v94_.v96;
        }
        v81 = 32;
        v82 = (__int128*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v83 = v126_.v126;
        v84 = v126_.v127;
        v126_.v126 = 0;
        v126_.v127 = 0;
        v110_.v110 = v82;
        *(_QWORD*)v82 = GameData_2039848;
        *((_QWORD*)v82 + 1) = v83;
        v85 = (__int64)v126_.v128;
        v126_.v128 = nullptr;
        *((_QWORD*)v82 + 2) = v84;
        *((_QWORD*)v82 + 3) = v85;
        SceneManager_138b7a0_alt1(v80, (__int64)&v107_.v107);
        if (v110_.v110 == &v107_.v107) {
        LABEL_164:
          (*(void (**)(__int64))(*(_QWORD*)v110_.v110 + v81))(
              (__int64)v110_.v110);
        }
        else if (v110_.v110 != nullptr) {
          v81 = 40;
          goto LABEL_164;
        }
        if ((v126_.v126 & 1) != 0 && v126_.v128 != nullptr) {
          v86 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
              (__int64)v126_.v128);
        }
      }
    LABEL_170:
      if ((v94_.v94 & 1) != 0 && (_QWORD)v94_.v96 != 0) {
        v87 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v87 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, v94_.v96);
      }
      result = (__int64)v90_.v91;
      v90_.v90[0] = GameData_212e1c0 + 16;
      if (v90_.v91 == &v90_.v90[2]) {
        v89 = 32;
        return (*(__int64 (**)(__int64))(*v90_.v91 + v89))((__int64)v90_.v91);
      }
      else if (v90_.v91 != nullptr) {
        v89 = 40;
        return (*(__int64 (**)(__int64))(*v90_.v91 + v89))((__int64)v90_.v91);
      }
      return result;
    }
    v76 = (_QWORD*)*v76;
    if (v76 == nullptr) {
      goto LABEL_170;
    }
    continue;
  }
}

__int64 game_facility_DiningSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
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
    __int64 v40;
    __int64 v41;
  } v39_;
  struct {
    _BYTE v42[16];
    __int64 v43;
  } v42_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(*(_QWORD*)(v1 + 96) + 56LL);
  v3 = (__int64*)GameData_212dce8;
  v4 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 == 0) {
    goto LABEL_25;
  }
  v6 = v4;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_BYTE*)(v7 + 29) = 0;
  v39_.v39 = 33;
  v39_.v40 = 29;
  v39_.v41 = v7;
  *(_QWORD*)v7 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v7 + 8) = 0x5F8583E6A8A1E8A9LL;
  *(_QWORD*)(v7 + 16) = 0xE55F82A0E59FA3E9LL;
  *(_QWORD*)(v7 + 21) = 0x9F9CE69D88E55F82LL;
  game_facility_14107c0((__int64)v42_.v42, (__int64)&v39_.v39);
  SceneCharacter_1401550(v6, (__int64)v42_.v42);
  if ((v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v8, v42_.v43);
  }
  if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v9, v39_.v41);
  }
  if (v2 != 0 && *(_BYTE*)(v2 + 32) != 0) {
    v10 = SceneCharacter_14020c0(v6);
    if (v10 != nullptr) {
      v11 = *(_QWORD*)(v2 + 48);
      if (v11 != 0 && *(_QWORD*)(v10[3] + 1672LL) ==
                          *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL)) {
        v11 = *(_QWORD*)(v2 + 72);
      LABEL_20:
        if (v11 != 0) {
          v13 = *(_QWORD**)(*(_QWORD*)(v1 + 96) + 8LL);
          v14 = *(_QWORD*)(v13[2] + 392LL);
          if (v14 == 0 || *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL) !=
                              *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1672LL)) {
            v26 = *(_QWORD*)(v13[1] + 392LL);
            v27 = v26 != 0 && *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL) ==
                                  *(_QWORD*)(*(_QWORD*)(v26 + 24) + 1672LL);
            v38 = *(_QWORD*)(*v13 + 392LL);
            if (v38 != 0 &&
                *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL) ==
                    *(_QWORD*)(*(_QWORD*)(v38 + 24) + 1672LL) &&
                !v27) {
              goto LABEL_25;
            }
          }
        }
        goto LABEL_23;
      }
      v12 = *(_QWORD*)(v2 + 72);
      if (v12 != 0 && *(_QWORD*)(v10[3] + 1672LL) ==
                          *(_QWORD*)(*(_QWORD*)(v12 + 24) + 1672LL)) {
        goto LABEL_20;
      }
    }
  }
LABEL_23:
  v15 = SceneManager_138e5e0(*v3);
  if (v15 != 0) {
    SceneCharacter_1401300(v6, v15, 0x1.0000000000000p+0f);
  }
LABEL_25:
  v16 = SceneManager_138e5e0(*v3);
  if (v16 == 0) {
    goto LABEL_55;
  }
  v17 = v16;
  v18 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
  *(_BYTE*)(v18 + 29) = 0;
  v39_.v39 = 33;
  v39_.v40 = 29;
  v39_.v41 = v18;
  *(_QWORD*)v18 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v18 + 8) = 0x5F8583E6A8A1E8A9LL;
  *(_QWORD*)(v18 + 16) = 0xE55F82A0E59FA3E9LL;
  *(_QWORD*)(v18 + 21) = 0x9F9CE69D88E55F82LL;
  game_facility_14107c0((__int64)v42_.v42, (__int64)&v39_.v39);
  SceneCharacter_1401550(v17, (__int64)v42_.v42);
  if ((v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v19, v42_.v43);
  }
  if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v20, v39_.v41);
  }
  if (v2 != 0 && *(_BYTE*)(v2 + 32) != 0) {
    v21 = SceneCharacter_14020c0(v17);
    if (v21 != nullptr) {
      v22 = *(_QWORD*)(v2 + 48);
      if (v22 != 0 && *(_QWORD*)(v21[3] + 1672LL) ==
                          *(_QWORD*)(*(_QWORD*)(v22 + 24) + 1672LL)) {
        v22 = *(_QWORD*)(v2 + 72);
      LABEL_44:
        if (v22 != 0) {
          v24 = *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL);
          v25 = *(_QWORD*)(*(_QWORD*)(v24 + 16) + 392LL);
          if (v25 == 0 || *(_QWORD*)(*(_QWORD*)(v22 + 24) + 1672LL) !=
                              *(_QWORD*)(*(_QWORD*)(v25 + 24) + 1672LL)) {
            v28 = *(_QWORD*)(*(_QWORD*)(v24 + 8) + 392LL);
            if (v28 != 0 && *(_QWORD*)(*(_QWORD*)(v22 + 24) + 1672LL) ==
                                *(_QWORD*)(*(_QWORD*)(v28 + 24) + 1672LL)) {
              goto LABEL_55;
            }
          }
        }
        goto LABEL_53;
      }
      v23 = *(_QWORD*)(v2 + 72);
      if (v23 != 0 && *(_QWORD*)(v21[3] + 1672LL) ==
                          *(_QWORD*)(*(_QWORD*)(v23 + 24) + 1672LL)) {
        goto LABEL_44;
      }
    }
  }
LABEL_53:
  v29 = SceneManager_138e5e0(*v3);
  if (v29 != 0) {
    SceneCharacter_1401300(v17, v29, 0x1.0000000000000p+0f);
  }
LABEL_55:
  result = SceneManager_138e5e0(*v3);
  if (result == 0) {
    return result;
  }
  v31 = result;
  v32 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0);
  *(_BYTE*)(v32 + 29) = 0;
  v39_.v39 = 33;
  v39_.v40 = 29;
  v39_.v41 = v32;
  *(_QWORD*)v32 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v32 + 8) = 0x5F8583E6A8A1E8A9LL;
  *(_QWORD*)(v32 + 16) = 0xE55F82A0E59FA3E9LL;
  *(_QWORD*)(v32 + 21) = 0x9F9CE69D88E55F82LL;
  game_facility_14107c0((__int64)v42_.v42, (__int64)&v39_.v39);
  SceneCharacter_1401550(v31, (__int64)v42_.v42);
  if ((v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v33, v42_.v43);
  }
  if ((v39_.v39 & 1) != 0 && v39_.v41 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v34, v39_.v41);
  }
  if (v2 == 0) {
    goto LABEL_75;
  }
  if (*(_BYTE*)(v2 + 32) == 0) {
    goto LABEL_75;
  }
  result = (__int64)SceneCharacter_14020c0(v31);
  if (result == 0) {
    goto LABEL_75;
  }
  v35 = *(_QWORD*)(v2 + 48);
  if (v35 != 0 && *(_QWORD*)(*(_QWORD*)(result + 24) + 1672LL) ==
                      *(_QWORD*)(*(_QWORD*)(v35 + 24) + 1672LL)) {
    v35 = *(_QWORD*)(v2 + 72);
  }
  else {
    v36 = *(_QWORD*)(v2 + 72);
    if (v36 == 0 || *(_QWORD*)(*(_QWORD*)(result + 24) + 1672LL) !=
                        *(_QWORD*)(*(_QWORD*)(v36 + 24) + 1672LL)) {
      goto LABEL_75;
    }
  }
  if (v35 == 0 ||
      (v37 =
           *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) + 16LL) +
                      392LL)) == 0 ||
      *(_QWORD*)(*(_QWORD*)(v35 + 24) + 1672LL) !=
          *(_QWORD*)(*(_QWORD*)(v37 + 24) + 1672LL)) {
  LABEL_75:
    result = SceneManager_138e5e0(*v3);
    if (result != 0) {
      return SceneCharacter_1401300(v31, result, 0x1.0000000000000p+0f);
    }
  }
  return result;
}

__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  v1 = *(__int64**)(GameData_21f4000 + 232);
  v2 = *(__int64**)(GameData_21f4000 + 240);
  if (v1 != v2) {
    v3 = result;
    v4 = result + 9;
    while (1) {
      v6 = *v1++;
      v5 = v6;
      v7 = *(_QWORD*)(v6 + 40);
      v8 = v6 + 25;
      v9 = *(unsigned __int8*)(v3 + 8);
      v10 = (*(_BYTE*)(v6 + 24) & 1) != 0 ? v7 : v8;
      v11 = *(_QWORD*)(v3 + 24);
      v12 = (v9 & 1) == 0;
      v13 = v9 >> 1;
      if (v12) {
        v11 = v4;
      }
      else {
        v13 = *(_QWORD*)(v3 + 16);
      }
      v16[0] = v11;
      v16[1] = v13;
      v14 = game_HashString(v10);
      result = GameRoutine_7a88a0(v16);
      if (v14 == result) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    v15 = *(_QWORD*)(v5 + 8);
    if (v15 != 0) {
      *(_BYTE*)(v15 + 289) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
