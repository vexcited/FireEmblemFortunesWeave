#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda1_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda1_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda2_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_138ff80(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* SceneManager_138a920(__int64, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140fb60(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void game_facility_anonymous_1475e80(PSEUDO_X8,
                                                                __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_94cee0();
__int64 SceneManager_138c000(_QWORD*, __int64*, __int64, __int64*);
__int64 SceneManager_138c360(_QWORD*, __int64*, __int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1aa5e95;
extern _UNKNOWN GameData_1aa5f37;
extern __int64 (*GameData_2041ee8[])();
extern __int64 (*GameData_2041f68[])();
extern __int64 (*GameData_2041fe8[])();
extern __int64 (*GameData_2042068[])();
extern __int64 (*GameData_20420e8[])();
extern __int64 (*GameData_2042168[])();
extern __int64 (*GameData_20421e8[])();
extern __int64 (*GameData_2042268[])();
extern __int64 (*GameData_20422e8[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64* GameData_212c880[5];
extern __int64 GameData_1aa9e97;
extern __int64 GameData_1ab17e0;
extern __int64 GameData_1ac483f;
extern __int64 GameData_212dce8;
extern __int64 GameData_2131338[2];
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
void SkillReinforceSceneDiff_1476ca0_alt1(_QWORD*, __int64*, __int64*) __asm__(
    "SkillReinforceSceneDiff_1476ca0");
void __attribute__((noreturn)) String_60a1d0();
__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476990_alt1(
    float* a1,
    __int64
        a2) __asm__("game_facility_SkillReinforceSceneDiff_Initialize_1476990");
__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476f00_alt1(
    float* a1,
    __int64
        a2) __asm__("game_facility_SkillReinforceSceneDiff_Initialize_1476f00");
__int64 SkillReinforceSceneDiff_14771f0(__int64 a1);
__n128 game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_alt1(
    __int64 a1) __asm__("game_facility_SkillReinforceSceneDiff_LoadCharacter_"
                        "Reinforce");
__n128 game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_alt1(
    __int64 a1) __asm__("game_facility_SkillReinforceSceneDiff_LoadCharacter_"
                        "Educate");
void SceneManager_138a920_alt1(__int64,
                               __int64) __asm__("SceneManager_138a920");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* DiningSceneDiff_1413d00(float*, unsigned __int8*, __int64, __int64**,
                                __int64*);
__attribute__((swiftcall)) void SceneCharacterAppearance_140f320_alt1(
    PSEUDO_X8, __int64*, __int64) __asm__("SceneCharacterAppearance_140f320");
__attribute__((swiftcall)) void SceneCharacterAppearance_140fb60_alt1(
    PSEUDO_X8, __int64*, __int64) __asm__("SceneCharacterAppearance_140fb60");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern char GameData_1aa5e95_alt1[] __asm__("GameData_1aa5e95");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void game_facility_SkillReinforceSceneDiff_Initialize_1476990(float* a1,
                                                              __int64 a2);
void game_facility_SkillReinforceSceneDiff_Initialize_1476f00(float* a1,
                                                              __int64 a2);
void game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce(__int64 a1);
void game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate(__int64 a1);

void game_facility_SkillReinforceSceneDiff_Initialize_1476990(float* a1,
                                                              __int64 a2)
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
    __int128 v16;
    __int64 v17;
    char gap24_[8];
    __int128* v18;
  } v16_;
  _BYTE v19[24];
  __int128* v20;
  __int64* v21;

  *((_QWORD*)a1 + 12) = a2;
  *((_QWORD*)a1 + 13) = 0;
  BYTE13(v16_.v16) = 0;
  LOBYTE(v16_.v16) = 24;
  *(_DWORD*)((char*)&v16_.v16 + 9) = -1769151049;
  *(_QWORD*)((char*)&v16_.v16 + 1) = 0xBCE5808AE6A688E6LL;
  v3 = (const char*)(*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1);
  v4 = strlen_alt1(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    *(_QWORD*)&v19[8] = v5;
    *(_QWORD*)&v19[16] = v7;
    *(_QWORD*)v19 = v8 | 1;
  }
  else {
    v19[0] = 2 * v4;
    v7 = &v19[1];
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v7, (__int64)v3, v5);
LABEL_10:
  v7[v5] = 0;
  SkillReinforceSceneDiff_1476ca0_alt1(a1, (__int64*)&v16_.v16, (__int64*)v19);
  if ((v19[0] & 1) != 0 && *(_QWORD*)&v19[16] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v9, *(__int64*)&v19[16]);
  }
  if ((v16_.v16 & 1) != 0 && v16_.v17 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v10, v16_.v17);
  }
  v19[19] = 0;
  v19[0] = 36;
  v16_.v18 = &v16_.v16;
  *(_WORD*)&v19[17] = -30333;
  *(_QWORD*)&v19[9] = 0xE3BC83E3AD83E397LL;
  *(_QWORD*)&v19[1] = 0x83E38383E39E83E3LL;
  *(_QWORD*)&v16_.v16 = GameData_2041ee8;
  *((_QWORD*)&v16_.v16 + 1) = a1;
  v20 = &v16_.v16;
  v21 = (__int64*)v19;
  DiningSceneDiff_1413d00(a1 + 14, v19,
                          (__int64)std___1_piecewise_construct_ptr, &v21,
                          (__int64*)&v20);
  if (v16_.v18 == &v16_.v16) {
    v11 = 32;
    goto LABEL_24;
  }
  if (v16_.v18 != nullptr) {
    v11 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*(_QWORD*)v16_.v18 + v11))((__int64)v16_.v18);
  }
  if ((v19[0] & 1) != 0 && *(_QWORD*)&v19[16] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v12, *(__int64*)&v19[16]);
  }
  v13 = 32;
  v14 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  *(_BYTE*)(v14 + 31) = 0;
  *(_QWORD*)v19 = 33;
  *(_QWORD*)&v19[8] = 31;
  *(_QWORD*)&v19[16] = v14;
  v16_.v18 = &v16_.v16;
  *(_QWORD*)v14 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v14 + 8) = 0xAD82E35F968CE5B7LL;
  *(_QWORD*)(v14 + 16) = 0x83E3A983E3A383E3LL;
  *(_QWORD*)(v14 + 23) = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v16_.v16 = GameData_2041f68;
  *((_QWORD*)&v16_.v16 + 1) = a1;
  v20 = &v16_.v16;
  v21 = (__int64*)v19;
  DiningSceneDiff_1413d00(a1 + 14, v19,
                          (__int64)std___1_piecewise_construct_ptr, &v21,
                          (__int64*)&v20);
  if (v16_.v18 == &v16_.v16) {
    goto LABEL_33;
  }
  if (v16_.v18 != nullptr) {
    v13 = 40;
  LABEL_33:
    (*(void (**)(__int64))(*(_QWORD*)v16_.v18 + v13))((__int64)v16_.v18);
  }
  if ((v19[0] & 1) != 0 && *(_QWORD*)&v19[16] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v15, *(__int64*)&v19[16]);
  }
}

_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  _BYTE* result;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = a1 + 1;
  if (v4 != a2) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_64dde0();
    }
    else if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v4, a2[2], a2[1]);
    }
    else {
      v6 = *a2;
      v7 = a2[2];
      v4[1] = a2[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  result = a1 + 4;
  if (a1 + 4 == a3) {
  LABEL_13:
    if (a1[10] == 0) {
      return result;
    }
    goto LABEL_14;
  }
  if ((*result & 1) != 0) {
    result = (_BYTE*)GameRoutine_64dde0();
    goto LABEL_13;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    result = (_BYTE*)GameRoutine_64df20(result, a3[2], a3[1]);
    if (a1[10] == 0) {
      return result;
    }
  }
  else {
    v9 = *a3;
    v10 = a3[2];
    a1[5] = a3[1];
    a1[6] = v10;
    *(_QWORD*)result = v9;
    if (a1[10] == 0) {
      return result;
    }
  }

LABEL_14:
  v11 = (_QWORD*)a1[9];
  if (v11 != nullptr) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = v11;
      v11 = (_QWORD*)*v11;
      v15 = (_QWORD*)v14[10];
      if (v15 == v14 + 6) {
        v16 = 32;
      }
      else {
        if (v15 == nullptr) {
          goto LABEL_25;
        }
        v16 = 40;
      }
      (*(void (**)(void*))(*v15 + v16))(v15);
    LABEL_25:
      if ((v14[2] & 1) != 0) {
        v17 = v14[4];
        if (v17 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18, v17);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, v14);
    } while (v11 != nullptr);
  }
  v19 = a1[8];
  a1[9] = 0;
  if (v19 != 0) {
    v20 = v19 & 7;
    if (v19 >= 8) {
      v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v21 = 0;
      do {
        *(_QWORD*)(a1[7] + 8 * v21) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 8) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 16) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 24) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 32) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 40) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 48) = 0;
        v23 = a1[7] + 8 * v21;
        v21 += 8;
        *(_QWORD*)(v23 + 56) = 0;
      } while (v22 != v21);
    }
    else {
      v21 = 0;
    }
    if (v20 != 0) {
      v24 = 8 * v21;
      do {
        --v20;
        *(_QWORD*)(a1[7] + v24) = 0;
        v24 += 8;
      } while (v20 != 0);
    }
  }
  a1[10] = 0;
  return result;
}

void game_facility_SkillReinforceSceneDiff_Initialize_1476f00(float* a1,
                                                              __int64 a2)
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

  *((_QWORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 13) = a2;
  v16_.v16 = (__int64 (**)(void))0x888EE69DBCE40CLL;
  v3 = (const char*)(*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1);
  v4 = strlen_alt1(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
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
  SkillReinforceSceneDiff_1476ca0_alt1(a1, (__int64*)&v16_.v16, (__int64*)v20);
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
  v20[19] = 0;
  v20[0] = 36;
  v16_.v19 = (__int64*)&v16_.v16;
  *(_WORD*)&v20[17] = -30333;
  *(_QWORD*)&v20[9] = 0xE3BC83E3AD83E397LL;
  *(_QWORD*)&v20[1] = 0x83E38383E39E83E3LL;
  v16_.v16 = GameData_2041fe8;
  v16_.v17 = a1;
  v21 = &v16_.v16;
  v22 = (__int64*)v20;
  DiningSceneDiff_1413d00(a1 + 14, v20,
                          (__int64)std___1_piecewise_construct_ptr, &v22,
                          (__int64*)&v21);
  if (v16_.v19 == (__int64*)&v16_.v16) {
    v11 = 32;
    goto LABEL_24;
  }
  if (v16_.v19 != nullptr) {
    v11 = 40;
  LABEL_24:
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
  v14 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  *(_QWORD*)v20 = 33;
  *(_QWORD*)&v20[8] = 25;
  *(_QWORD*)&v20[16] = v14;
  *(_WORD*)(v14 + 24) = 137;
  v16_.v19 = (__int64*)&v16_.v16;
  *(_QWORD*)(v14 + 16) = 0x83E3BC83E3AD83E3LL;
  *(_QWORD*)v14 = 0xE35F888EE69DBCE4LL;
  *(_QWORD*)(v14 + 8) = 0xA983E3A383E3AD82LL;
  v16_.v16 = GameData_2042068;
  v16_.v17 = a1;
  v21 = &v16_.v16;
  v22 = (__int64*)v20;
  DiningSceneDiff_1413d00(a1 + 14, v20,
                          (__int64)std___1_piecewise_construct_ptr, &v22,
                          (__int64*)&v21);
  if (v16_.v19 == (__int64*)&v16_.v16) {
    goto LABEL_33;
  }
  if (v16_.v19 != nullptr) {
    v13 = 40;
  LABEL_33:
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

__int64 SkillReinforceSceneDiff_14771f0(__int64 a1)
{
  char* v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    __int64 v6[2];
    char* v7;
  } v6_;
  struct {
    _QWORD v8[6];
    _QWORD* v9;
    __int64 v10;
    __int64 v11;
  } v8_;

  v8_.v9 = nullptr;
  v8_.v10 = 0;
  v8_.v11 = 0;
  v8_.v8[0] = GameData_2131338[0] + 16;
  memset(&v8_.v8[1], 0, 40);
  game_facility_anonymous_1475e80((void*)(v6_.v6), a1);
  if ((v6_.v6[0] & 1) != 0) {
    v1 = v6_.v7;
  }
  else {
    v1 = (char*)v6_.v6 + 1;
  }
  if ((v6_.v6[0] & 1) != 0) {
    v2 = v6_.v6[1];
  }
  else {
    v2 = (unsigned __int64)LOBYTE(v6_.v6[0]) >> 1;
  }
  GameRoutine_1389160((__int64)v8_.v8, (__int64)v1, v2);
  if ((v6_.v6[0] & 1) != 0 && v6_.v7 != nullptr) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)v6_.v7);
  }
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)v8_.v8);
  result = (__int64)v8_.v9;
  v8_.v8[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v8_.v9 == &v8_.v8[2]) {
    v5 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v5))((__int64)v8_.v9);
}

void game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD** v7;
  _QWORD* v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _BYTE v26[12];
    char v27;
    char gap21_[3];
    __int64 v28;
  } v26_;
  __int64 v29[2];
  char v30;
  __int64 v31;
  struct {
    char v32[23];
    char v33;
    char gap81_[111];
    char v34;
    char gap193_[15];
    char v35;
  } v32_;
  struct {
    _QWORD v36[4];
    __int64 v37;
  } v36_;
  struct {
    __int64 v38;
    __int64 v39;
    char* v40;
    char gap296_[8];
    __int64* v41;
  } v38_;

  v1 = *(_QWORD*)(a1 + 8);
  v32_.v34 = 0;
  v32_.v35 = 0;
  v36_.v37 = 0;
  v32_.v33 = 0;
  v30 = 20;
  strcpy(v32_.v32, "_D");
  v2 = *(_QWORD*)(v1 + 96);
  v31 = 0x335FAC9CE6BA9FE5LL;
  v3 = v2;
  if (v2 != 0 || (v3 = *(_QWORD*)(v1 + 104)) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    if (v4 != 0) {
      v4 = *(_QWORD*)(v4 + 392);
    }
    *(_QWORD*)v26_.v26 = v4;
    if (v2 != 0 || (v2 = *(_QWORD*)(v1 + 104)) != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                      8LL * (*(_DWORD*)(v2 + 16) & 0xFFF));
    }
    else {
      v5 = 0;
    }
  }
  else {
    v5 = 0;
    *(_QWORD*)v26_.v26 = 0;
  }
  SceneCharacterAppearance_140fb60_alt1((void*)(&v38_.v38), (__int64*)v26_.v26,
                                        v5);
  v29[0] = v38_.v38;
  v29[1] = v38_.v39;
  GameRoutine_60a020_alt1((__int64)&v30, (const char*)&GameData_1ab17e0);
  v38_.v41 = &v38_.v38;
  v38_.v38 = (__int64)GameData_20420e8;
  v32_.v35 |= 2u;
  GameRoutine_138ff80(&v38_.v38, v36_.v36);
  if (v38_.v41 == &v38_.v38) {
    v6 = 32;
  }
  else {
    if (v38_.v41 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v38_.v41 + v6))((__int64)v38_.v41);
LABEL_13:
  v7 = (_QWORD**)GameData_212dce8;
  v8 = *(_QWORD**)GameData_212dce8;
  v9 = game_util_Format_alt1(GameData_1aa5e95_alt1, 0);
  v10 = strlen_alt1(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_58;
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v38_.v39 = v11;
    v38_.v40 = v12;
    v38_.v38 = v13 | 1;
  }
  else {
    LOBYTE(v38_.v38) = 2 * v10;
    v12 = (char*)&v38_.v38 + 1;
    if (v10 == 0) {
      goto LABEL_22;
    }
  }
  memmove_alt1((__int64)v12, (__int64)v9, v11);
LABEL_22:
  v12[v11] = 0;
  v14 = *(_QWORD*)(v1 + 96);
  if (v14 != 0 || (v14 = *(_QWORD*)(v1 + 104)) != 0) {
    v15 = *(_QWORD*)(v14 + 8);
  }
  else {
    v15 = 0;
  }
  SceneManager_138c000(v8, &v38_.v38, v15, v29);
  if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v38_.v40);
  }
  GameRoutine_a0d9a0_alt1((__int64)v29);
  v31 = 0x335FAC9CE6BA9FE5LL;
  v32_.v33 = 0;
  v30 = 20;
  v32_.v34 = 0;
  v32_.v35 = 0;
  v36_.v37 = 0;
  strcpy(v32_.v32, "_D");
  GameRoutine_682bc0(v26_.v26, (__int64)&GameData_1ac483f);
  SceneCharacterAppearance_140f320_alt1((void*)(&v38_.v38), (__int64*)v26_.v26,
                                        (__int64)&GameData_1aa5f37);
  v29[0] = v38_.v38;
  v29[1] = v38_.v39;
  GameRoutine_60a020_alt1((__int64)&v30, (const char*)&GameData_1aa9e97);
  v38_.v41 = &v38_.v38;
  v38_.v38 = (__int64)GameData_2042168;
  GameRoutine_138ff80(&v38_.v38, v36_.v36);
  if (v38_.v41 == &v38_.v38) {
    v17 = 32;
  }
  else {
    if (v38_.v41 == nullptr) {
      goto LABEL_35;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v38_.v41 + v17))((__int64)v38_.v41);
LABEL_35:
  v18 = *v7;
  v32_.v35 |= 2u;
  v19 = game_util_Format_alt1(GameData_1aa5e95_alt1, 1);
  v20 = strlen_alt1(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_58:
    String_60a1d0();
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
    v38_.v39 = v21;
    v38_.v40 = v22;
    v38_.v38 = v23 | 1;
  }
  else {
    LOBYTE(v38_.v38) = 2 * v20;
    v22 = (char*)&v38_.v38 + 1;
    if (v20 == 0) {
      goto LABEL_44;
    }
  }
  memmove_alt1((__int64)v22, (__int64)v19, v21);
LABEL_44:
  v22[v21] = 0;
  v26_.v27 = 0;
  v26_.v26[0] = 22;
  *(_QWORD*)&v26_.v26[1] = 0xE3A283E35F444950LL;
  *(_DWORD*)&v26_.v26[8] = 831947747;
  SceneManager_138c360(v18, &v38_.v38, (__int64*)v26_.v26, v29);
  if ((v26_.v26[0] & 1) != 0 && v26_.v28 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v26_.v28);
  }
  if ((v38_.v38 & 1) != 0 && v38_.v40 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v38_.v40);
  }
  GameRoutine_a0d9a0_alt1((__int64)v29);
}

void game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 (**v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  _QWORD** v12;
  _QWORD* v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  char* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  const char* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int128 v46;
  char* v47;
  struct {
    __int64 (**v48)();
    __int64 v49;
    char v50;
  } v48_;
  struct {
    _BYTE v51[23];
    char gap72_[8];
    char v52;
    char gap81_[111];
    char v53;
    char gap193_[15];
    char v54;
  } v51_;
  struct {
    _QWORD v55[4];
    __int64 v56;
  } v55_;
  struct {
    __int64 (**v57)();
    unsigned __int64 v58;
    char* v59;
    char gap296_[8];
    __int64* v60;
  } v57_;

  v1 = *(_QWORD*)(a1 + 8);
  v51_.v53 = 0;
  v51_.v54 = 0;
  v55_.v56 = 0;
  v48_.v48 = nullptr;
  v48_.v49 = 0;
  v51_.v52 = 0;
  v48_.v50 = 20;
  strcpy(&v51_.v51[8], "_D");
  *(_QWORD*)v51_.v51 = 0x335FAC9CE6BA9FE5LL;
  v2 = *(_QWORD*)(v1 + 96);
  v3 = v2;
  if (v2 != 0 || (v3 = *(_QWORD*)(v1 + 104)) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    if (v4 != 0) {
      v4 = *(_QWORD*)(v4 + 392);
    }
    *(_QWORD*)&v46 = v4;
    if (v2 != 0 || (v2 = *(_QWORD*)(v1 + 104)) != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                      8LL * (*(_DWORD*)(v2 + 16) & 0xFFF));
    }
    else {
      v5 = 0;
    }
  }
  else {
    v5 = 0;
    *(_QWORD*)&v46 = 0;
  }
  SceneCharacterAppearance_140fb60_alt1((void*)(&v57_.v57), (__int64*)&v46, v5);
  v6 = v57_.v57;
  v7 = v57_.v58;
  v8 = v48_.v49;
  v57_.v57 = nullptr;
  v57_.v58 = 0;
  v48_.v48 = v6;
  v48_.v49 = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = v57_.v58;
  if (v57_.v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57_.v58 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
    if ((v48_.v50 & 1) == 0) {
      goto LABEL_14;
    }
  }
  else if ((v48_.v50 & 1) == 0) {
  LABEL_14:
    v10 = v51_.v51;
    v48_.v50 = 42;
    goto LABEL_17;
  }
  *(_QWORD*)&v51_.v51[7] = 21;
  v10 = *(_BYTE**)&v51_.v51[15];
LABEL_17:
  *(_QWORD*)v10 = 0xE35F888EE69DBCE4LL;
  *((_QWORD*)v10 + 1) = 0x8383E38B83E3A683LL;
  strcpy(v10 + 13, "ット_0");
  v57_.v60 = (__int64*)&v57_.v57;
  v57_.v57 = GameData_20421e8;
  GameRoutine_138ff80(&v57_.v57, v55_.v55);
  if (v57_.v60 == (__int64*)&v57_.v57) {
    v11 = 32;
  }
  else {
    if (v57_.v60 == nullptr) {
      goto LABEL_22;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v57_.v60 + v11))((__int64)v57_.v60);
LABEL_22:
  v51_.v54 |= 2u;
  v12 = (_QWORD**)GameData_212dce8;
  v13 = *(_QWORD**)GameData_212dce8;
  v14 = game_util_Format_alt1(GameData_1aa5e95_alt1, 0);
  v15 = strlen_alt1(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
    v57_.v58 = v16;
    v57_.v59 = v17;
    v57_.v57 = (__int64 (**)(void))(v18 | 1);
  }
  else {
    LOBYTE(v57_.v57) = 2 * v15;
    v17 = (char*)&v57_.v57 + 1;
    if (v15 == 0) {
      goto LABEL_31;
    }
  }
  memmove_alt1((__int64)v17, (__int64)v14, v16);
LABEL_31:
  v17[v16] = 0;
  v19 = *(_QWORD*)(v1 + 96);
  if (v19 != 0 || (v19 = *(_QWORD*)(v1 + 104)) != 0) {
    v20 = *(_QWORD*)(v19 + 8);
  }
  else {
    v20 = 0;
  }
  SceneManager_138c000(v13, (__int64*)&v57_.v57, v20, (__int64*)&v48_.v48);
  if (((unsigned __int8)v57_.v57 & 1) != 0 && v57_.v59 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v57_.v59);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v48_.v48);
  v51_.v52 = 0;
  v51_.v53 = 0;
  v51_.v54 = 0;
  v55_.v56 = 0;
  GameRoutine_682bc0(&v46, (__int64)&GameData_1ac483f);
  SceneCharacterAppearance_140f320_alt1((void*)(&v57_.v57), (__int64*)&v46,
                                        (__int64)&GameData_1aa5f37);
  v51_.v51[21] = 0;
  v57_.v60 = (__int64*)&v57_.v57;
  v48_.v48 = v57_.v57;
  v48_.v49 = v57_.v58;
  v48_.v50 = 42;
  *(_QWORD*)v51_.v51 = 0xE35F888EE69DBCE4LL;
  *(_QWORD*)&v51_.v51[8] = 0x8383E38B83E3A683LL;
  *(_QWORD*)&v51_.v51[13] = 0x315F8883E38383E3LL;
  v57_.v57 = GameData_2042268;
  GameRoutine_138ff80(&v57_.v57, v55_.v55);
  if (v57_.v60 == (__int64*)&v57_.v57) {
    v22 = 32;
  }
  else {
    if (v57_.v60 == nullptr) {
      goto LABEL_44;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v57_.v60 + v22))((__int64)v57_.v60);
LABEL_44:
  v23 = *v12;
  v51_.v54 |= 2u;
  v24 = game_util_Format_alt1(GameData_1aa5e95_alt1, 1);
  v25 = strlen_alt1(v24);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
    v57_.v58 = v26;
    v57_.v59 = v27;
    v57_.v57 = (__int64 (**)(void))(v28 | 1);
  }
  else {
    LOBYTE(v57_.v57) = 2 * v25;
    v27 = (char*)&v57_.v57 + 1;
    if (v25 == 0) {
      goto LABEL_53;
    }
  }
  memmove_alt1((__int64)v27, (__int64)v24, v26);
LABEL_53:
  v27[v26] = 0;
  BYTE12(v46) = 0;
  LOBYTE(v46) = 22;
  *(_QWORD*)((char*)&v46 + 1) = 0xE3A283E35F444950LL;
  DWORD2(v46) = 831947747;
  SceneManager_138c360(v23, (__int64*)&v57_.v57, (__int64*)&v46,
                       (__int64*)&v48_.v48);
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v47);
  }
  if (((unsigned __int8)v57_.v57 & 1) != 0 && v57_.v59 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v57_.v59);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v48_.v48);
  v31 = GameRoutine_94cee0();
  v48_.v48 = nullptr;
  v48_.v49 = 0;
  v51_.v52 = 0;
  v51_.v53 = 0;
  v51_.v54 = 0;
  v55_.v56 = 0;
  v51_.v51[21] = 0;
  v48_.v50 = 42;
  v57_.v60 = (__int64*)&v57_.v57;
  *(_QWORD*)&v51_.v51[8] = 0x8383E38B83E3A683LL;
  *(_QWORD*)&v51_.v51[13] = 0x325F8883E38383E3LL;
  *(_QWORD*)v51_.v51 = 0xE35F888EE69DBCE4LL;
  v57_.v57 = GameData_20422e8;
  GameRoutine_138ff80(&v57_.v57, v55_.v55);
  if (v57_.v60 == (__int64*)&v57_.v57) {
    v32 = 32;
  }
  else {
    if (v57_.v60 == nullptr) {
      goto LABEL_68;
    }
    v32 = 40;
  }
  (*(void (**)(__int64))(*v57_.v60 + v32))((__int64)v57_.v60);
LABEL_68:
  v33 = *v12;
  v34 = game_util_Format_alt1(GameData_1aa5e95_alt1, 2);
  v35 = strlen_alt1(v34);
  if (v35 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v36 = v35;
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v35 | 7) + 1;
    }
    v37 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v38, 16, 0);
    v57_.v58 = v36;
    v57_.v59 = v37;
    v57_.v57 = (__int64 (**)(void))(v38 | 1);
    goto LABEL_76;
  }
  LOBYTE(v57_.v57) = 2 * v35;
  v37 = (char*)&v57_.v57 + 1;
  if (v35 != 0) {
  LABEL_76:
    memmove_alt1((__int64)v37, (__int64)v34, v36);
  }
  v37[v36] = 0;
  v39 = *(const char**)(v31 + 8);
  v40 = strlen_alt1(v39);
  if (v40 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_100:
    String_60a1d0();
  }
  v41 = v40;
  if (v40 >= 0x17) {
    if ((v40 | 7) == 0x17) {
      v43 = 26;
    }
    else {
      v43 = (v40 | 7) + 1;
    }
    v42 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v43, 16, 0);
    *((_QWORD*)&v46 + 1) = v41;
    v47 = v42;
    *(_QWORD*)&v46 = v43 | 1;
  }
  else {
    LOBYTE(v46) = 2 * v40;
    v42 = (char*)&v46 + 1;
    if (v40 == 0) {
      goto LABEL_86;
    }
  }
  memmove_alt1((__int64)v42, (__int64)v39, v41);
LABEL_86:
  v42[v41] = 0;
  SceneManager_138c360(v33, (__int64*)&v57_.v57, (__int64*)&v46,
                       (__int64*)&v48_.v48);
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v47);
  }
  if (((unsigned __int8)v57_.v57 & 1) != 0 && v57_.v59 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v57_.v59);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v48_.v48);
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
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
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
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
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
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
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
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
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda2_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
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
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
