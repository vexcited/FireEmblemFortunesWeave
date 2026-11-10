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
__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476990(float* a1,
                                                                __int64 a2);
__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476f00(float* a1,
                                                                __int64 a2);
__int64 SkillReinforceSceneDiff_14771f0(__int64 a1);
__n128
game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce(__int64 a1);
__n128 game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate(__int64 a1);

__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476990(float* a1,
                                                                __int64 a2)
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
    __int128 v17;
    __int64 v18;
    char gap24_[8];
    __int128* v19;
  } v17_;
  _BYTE v20[24];
  __int128* v21;
  __int64* v22;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *((_QWORD*)a1 + 12) = a2;
  *((_QWORD*)a1 + 13) = 0;
  BYTE13(v17_.v17) = 0;
  LOBYTE(v17_.v17) = 24;
  *(_DWORD*)((char*)&v17_.v17 + 9) = -1769151049;
  *(_QWORD*)((char*)&v17_.v17 + 1) = 0xBCE5808AE6A688E6LL;
  v3 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1),
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
  memmove(v7, v3, v5), result = COERCE_AS(__typeof__(result),
                                          PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_10:
  v7[v5] = 0;
  SkillReinforceSceneDiff_1476ca0_alt1(a1, (__int64*)&v17_.v17, (__int64*)v20),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v17_.v17 & 1) != 0 && v17_.v18 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v20[19] = 0;
  v20[0] = 36;
  v17_.v19 = &v17_.v17;
  *(_WORD*)&v20[17] = -30333;
  *(_QWORD*)&v20[9] = 0xE3BC83E3AD83E397LL;
  *(_QWORD*)&v20[1] = 0x83E38383E39E83E3LL;
  *(_QWORD*)&v17_.v17 = GameData_2041ee8;
  *((_QWORD*)&v17_.v17 + 1) = a1;
  v21 = &v17_.v17;
  v22 = (__int64*)v20;
  GameRoutine_1413d00(a1 + 14, v20, (__int64)std___1_piecewise_construct_ptr,
                      &v22, (__int64*)&v21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v19 == &v17_.v17) {
    v11 = 32;
    goto LABEL_24;
  }
  if (v17_.v19 != nullptr) {
    v11 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*(_QWORD*)v17_.v19 + v11))((__int64)v17_.v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v13 = 32;
  v14 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v14 + 31) = 0;
  *(_QWORD*)v20 = 33;
  *(_QWORD*)&v20[8] = 31;
  *(_QWORD*)&v20[16] = v14;
  v17_.v19 = &v17_.v17;
  *(_QWORD*)v14 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v14 + 8) = 0xAD82E35F968CE5B7LL;
  *(_QWORD*)(v14 + 16) = 0x83E3A983E3A383E3LL;
  *(_QWORD*)(v14 + 23) = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v17_.v17 = GameData_2041f68;
  *((_QWORD*)&v17_.v17 + 1) = a1;
  v21 = &v17_.v17;
  v22 = (__int64*)v20;
  GameRoutine_1413d00(a1 + 14, v20, (__int64)std___1_piecewise_construct_ptr,
                      &v22, (__int64*)&v21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v19 == &v17_.v17) {
    goto LABEL_33;
  }
  if (v17_.v19 != nullptr) {
    v13 = 40;
  LABEL_33:
    (*(void (**)(__int64))(*(_QWORD*)v17_.v19 + v13))((__int64)v17_.v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v20[0] & 1) != 0 && *(_QWORD*)&v20[16] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v6 + v16);
  }
  return result;
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

__n128 game_facility_SkillReinforceSceneDiff_Initialize_1476f00(float* a1,
                                                                __int64 a2)
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
  *((_QWORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 13) = a2;
  v17_.v17 = (__int64 (**)(void))0x888EE69DBCE40CLL,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 32LL))(a1),
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
  SkillReinforceSceneDiff_1476ca0_alt1(a1, (__int64*)&v17_.v17, (__int64*)v21),
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
  v21[19] = 0;
  v21[0] = 36;
  v17_.v20 = (__int64*)&v17_.v17;
  *(_WORD*)&v21[17] = -30333;
  *(_QWORD*)&v21[9] = 0xE3BC83E3AD83E397LL;
  *(_QWORD*)&v21[1] = 0x83E38383E39E83E3LL;
  v17_.v17 = GameData_2041fe8;
  v17_.v18 = a1;
  v22 = &v17_.v17;
  v23 = (__int64*)v21;
  GameRoutine_1413d00(a1 + 14, v21, (__int64)std___1_piecewise_construct_ptr,
                      &v23, (__int64*)&v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v20 == (__int64*)&v17_.v17) {
    v11 = 32;
    goto LABEL_24;
  }
  if (v17_.v20 != nullptr) {
    v11 = 40;
  LABEL_24:
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
  v14 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v21 = 33;
  *(_QWORD*)&v21[8] = 25;
  *(_QWORD*)&v21[16] = v14;
  *(_WORD*)(v14 + 24) = 137;
  v17_.v20 = (__int64*)&v17_.v17;
  *(_QWORD*)(v14 + 16) = 0x83E3BC83E3AD83E3LL;
  *(_QWORD*)v14 = 0xE35F888EE69DBCE4LL;
  *(_QWORD*)(v14 + 8) = 0xA983E3A383E3AD82LL;
  v17_.v17 = GameData_2042068;
  v17_.v18 = a1;
  v22 = &v17_.v17;
  v23 = (__int64*)v21;
  GameRoutine_1413d00(a1 + 14, v21, (__int64)std___1_piecewise_construct_ptr,
                      &v23, (__int64*)&v22),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v17_.v20 == (__int64*)&v17_.v17) {
    goto LABEL_33;
  }
  if (v17_.v20 != nullptr) {
    v13 = 40;
  LABEL_33:
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

__int64 SkillReinforceSceneDiff_14771f0(__int64 a1)
{
  char* v1;
  unsigned __int64 v2;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    __int64 v10[2];
    char* v11;
  } v10_;
  struct {
    _QWORD v12[6];
    _QWORD* v13;
    __int64 v14;
    __int64 v15;
  } v12_;

  v12_.v13 = nullptr;
  v12_.v14 = 0;
  v12_.v15 = 0;
  v12_.v12[0] = GameData_2131338[0] + 16;
  memset(&v12_.v12[1], 0, 40);
  game_facility_anonymous_1475e80((void*)(v10_.v10), a1);
  if ((v10_.v10[0] & 1) != 0) {
    v1 = v10_.v11;
  }
  else {
    v1 = (char*)v10_.v10 + 1;
  }
  if ((v10_.v10[0] & 1) != 0) {
    v2 = v10_.v10[1];
  }
  else {
    v2 = (unsigned __int64)LOBYTE(v10_.v10[0]) >> 1;
  }
  GameRoutine_1389160((__int64)v12_.v12, (__int64)v1, v2);
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
  }
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)v12_.v12);
  result = (__int64)v12_.v13;
  v12_.v12[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v12_.v13 == &v12_.v12[2]) {
    v9 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
}

__n128 game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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
  _QWORD** v13;
  _QWORD* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
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
  _QWORD* v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v39;
  char v40;
  struct {
    _BYTE v41[12];
    char v42;
    char gap21_[3];
    __int64 v43;
  } v41_;
  __int64 v44[2];
  char v45;
  __int64 v46;
  struct {
    char v47[23];
    char v48;
    char gap81_[111];
    char v49;
    char gap193_[15];
    char v50;
  } v47_;
  struct {
    _QWORD v51[4];
    __int64 v52;
  } v51_;
  struct {
    __int64 v53;
    __int64 v54;
    char* v55;
    char gap296_[8];
    __int64* v56;
  } v53_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v1 = *(_QWORD*)(a1 + 8);
  v47_.v49 = 0;
  v47_.v50 = 0;
  v51_.v52 = 0;
  v47_.v48 = 0;
  v45 = 20;
  strcpy(v47_.v47, "_D");
  v2 = *(_QWORD*)(v1 + 96);
  v46 = 0x335FAC9CE6BA9FE5LL;
  v3 = v2;
  if (v2 != 0 || (v3 = *(_QWORD*)(v1 + 104)) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    if (v4 != 0) {
      v4 = *(_QWORD*)(v4 + 392);
    }
    *(_QWORD*)v41_.v41 = v4;
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
    *(_QWORD*)v41_.v41 = 0;
  }
  SceneCharacterAppearance_140fb60((void*)(&v53_.v53), v41_.v41, v5),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v44[0] = v53_.v53;
  v44[1] = v53_.v54;
  GameRoutine_60a020((__int64)&v45, (__int64)&GameData_1ab17e0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v53_.v56 = &v53_.v53;
  v53_.v53 = (__int64)GameData_20420e8;
  v47_.v50 |= 2u;
  GameRoutine_138ff80(&v53_.v53, v51_.v51),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v53_.v56 == &v53_.v53) {
    v12 = 32;
  }
  else {
    if (v53_.v56 == nullptr) {
      goto LABEL_13;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v53_.v56 + v12))((__int64)v53_.v56),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
LABEL_13:
  v13 = (_QWORD**)GameData_212dce8;
  v14 = *(_QWORD**)GameData_212dce8;
  v15 = game_util_Format((__int64)&GameData_1aa5e95, 0, v6, v7, v8, v9, v10,
                         v11, v39),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v16 = strlen(v15),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_58;
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    v53_.v54 = v17;
    v53_.v55 = v18;
    v53_.v53 = v19 | 1;
  }
  else {
    LOBYTE(v53_.v53) = 2 * v16;
    v18 = (char*)&v53_.v53 + 1;
    if (v16 == 0) {
      goto LABEL_22;
    }
  }
  memmove(v18, v15, v17),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
LABEL_22:
  v18[v17] = 0;
  v20 = *(_QWORD*)(v1 + 96);
  if (v20 != 0 || (v20 = *(_QWORD*)(v1 + 104)) != 0) {
    v21 = *(_QWORD*)(v20 + 8);
  }
  else {
    v21 = 0;
  }
  SceneManager_138c000(v14, &v53_.v53, v21, v44),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  GameRoutine_a0d9a0((__int64)v44),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v46 = 0x335FAC9CE6BA9FE5LL;
  v47_.v48 = 0;
  v45 = 20;
  v47_.v49 = 0;
  v47_.v50 = 0;
  v51_.v52 = 0;
  strcpy(v47_.v47, "_D");
  GameRoutine_682bc0(v41_.v41, (__int64)&GameData_1ac483f),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  SceneCharacterAppearance_140f320((void*)(&v53_.v53), (__int64)v41_.v41,
                                   (__int64)&GameData_1aa5f37),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v44[0] = v53_.v53;
  v44[1] = v53_.v54;
  GameRoutine_60a020((__int64)&v45, (__int64)&GameData_1aa9e97),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v53_.v56 = &v53_.v53;
  v53_.v53 = (__int64)GameData_2042168;
  GameRoutine_138ff80(&v53_.v53, v51_.v51),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v53_.v56 == &v53_.v53) {
    v29 = 32;
  }
  else {
    if (v53_.v56 == nullptr) {
      goto LABEL_35;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v53_.v56 + v29))((__int64)v53_.v56),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
LABEL_35:
  v30 = *v13;
  v47_.v50 |= 2u;
  v31 = game_util_Format((__int64)&GameData_1aa5e95, 1, v23, v24, v25, v26, v27,
                         v28, v40),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v32 = strlen(v31),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_58:
    String_60a1d0(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  v33 = v32;
  if (v32 >= 0x17) {
    if ((v32 | 7) == 0x17) {
      v35 = 26;
    }
    else {
      v35 = (v32 | 7) + 1;
    }
    v34 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v35, 16, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    v53_.v54 = v33;
    v53_.v55 = v34;
    v53_.v53 = v35 | 1;
  }
  else {
    LOBYTE(v53_.v53) = 2 * v32;
    v34 = (char*)&v53_.v53 + 1;
    if (v32 == 0) {
      goto LABEL_44;
    }
  }
  memmove(v34, v31, v33),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
LABEL_44:
  v34[v33] = 0;
  v41_.v42 = 0;
  v41_.v41[0] = 22;
  *(_QWORD*)&v41_.v41[1] = 0xE3A283E35F444950LL;
  *(_DWORD*)&v41_.v41[8] = 831947747;
  SceneManager_138c360(v30, &v53_.v53, (__int64*)v41_.v41, v44),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  if ((v41_.v41[0] & 1) != 0 && v41_.v43 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v36),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v37),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  }
  return GameRoutine_a0d9a0((__int64)v44);
}

__n128 game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  __int64 (**v7)();
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD** v19;
  _QWORD* v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
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
  _QWORD* v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
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
  _QWORD* v52;
  char* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v66;
  char v67;
  char v68;
  __int128 v69;
  char* v70;
  struct {
    __int64 (**v71)();
    unsigned __int64 v72;
    char v73;
  } v71_;
  struct {
    _BYTE v74[23];
    char gap72_[8];
    char v75;
    char gap81_[111];
    char v76;
    char gap193_[15];
    char v77;
  } v74_;
  struct {
    _QWORD v78[4];
    __int64 v79;
  } v78_;
  struct {
    __int64 (**v80)();
    unsigned __int64 v81;
    char* v82;
    char gap296_[8];
    __int64* v83;
  } v80_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v1 = *(_QWORD*)(a1 + 8);
  v74_.v76 = 0;
  v74_.v77 = 0;
  v78_.v79 = 0;
  v71_.v71 = nullptr;
  v71_.v72 = 0;
  v74_.v75 = 0;
  v71_.v73 = 20;
  strcpy(&v74_.v74[8], "_D");
  *(_QWORD*)v74_.v74 = 0x335FAC9CE6BA9FE5LL;
  v2 = *(_QWORD*)(v1 + 96);
  v3 = v2;
  if (v2 != 0 || (v3 = *(_QWORD*)(v1 + 104)) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    if (v4 != 0) {
      v4 = *(_QWORD*)(v4 + 392);
    }
    *(_QWORD*)&v69 = v4;
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
    *(_QWORD*)&v69 = 0;
  }
  *(__n128*)&v6 = X8CALL_V0(
      __n128, SceneCharacterAppearance_140fb60((void*)(&v80_.v80), &v69, v5)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v7 = v80_.v80;
  v8 = v80_.v81;
  v9 = v71_.v72;
  v80_.v80 = nullptr;
  v80_.v81 = 0;
  v71_.v71 = v7;
  v71_.v72 = v8;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v6),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(__n128*)&v6 = std___1___shared_weak_count___release_weak(),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v10 = v80_.v81;
  if (v80_.v81 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80_.v81 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v10 + 16LL))(v10,
                                                                        v6),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v71_.v73 & 1) == 0) {
      goto LABEL_14;
    }
  }
  else if ((v71_.v73 & 1) == 0) {
  LABEL_14:
    v11 = v74_.v74;
    v71_.v73 = 42;
    goto LABEL_17;
  }
  *(_QWORD*)&v74_.v74[7] = 21;
  v11 = *(_BYTE**)&v74_.v74[15];
LABEL_17:
  *(_QWORD*)v11 = 0xE35F888EE69DBCE4LL;
  *((_QWORD*)v11 + 1) = 0x8383E38B83E3A683LL;
  strcpy(v11 + 13, "ット_0");
  v80_.v83 = (__int64*)&v80_.v80;
  v80_.v80 = GameData_20421e8;
  GameRoutine_138ff80(&v80_.v80, v78_.v78),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v80_.v83 == (__int64*)&v80_.v80) {
    v18 = 32;
  }
  else {
    if (v80_.v83 == nullptr) {
      goto LABEL_22;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v80_.v83 + v18))((__int64)v80_.v83),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_22:
  v74_.v77 |= 2u;
  v19 = (_QWORD**)GameData_212dce8;
  v20 = *(_QWORD**)GameData_212dce8;
  v21 = game_util_Format((__int64)&GameData_1aa5e95, 0, v12, v13, v14, v15, v16,
                         v17, v66),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v22 = strlen(v21),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v80_.v81 = v23;
    v80_.v82 = v24;
    v80_.v80 = (__int64 (**)(void))(v25 | 1),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    LOBYTE(v80_.v80) = 2 * v22;
    v24 = (char*)&v80_.v80 + 1;
    if (v22 == 0) {
      goto LABEL_31;
    }
  }
  memmove(v24, v21, v23),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_31:
  v24[v23] = 0;
  v26 = *(_QWORD*)(v1 + 96);
  if (v26 != 0 || (v26 = *(_QWORD*)(v1 + 104)) != 0) {
    v27 = *(_QWORD*)(v26 + 8);
  }
  else {
    v27 = 0;
  }
  SceneManager_138c000(v20, (__int64*)&v80_.v80, v27, (__int64*)&v71_.v71),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (((unsigned __int8)v80_.v80 & 1) != 0 && v80_.v82 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v28),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  GameRoutine_a0d9a0((__int64)&v71_.v71),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v74_.v75 = 0;
  v74_.v76 = 0;
  v74_.v77 = 0;
  v78_.v79 = 0;
  GameRoutine_682bc0(&v69, (__int64)&GameData_1ac483f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  SceneCharacterAppearance_140f320((void*)(&v80_.v80), (__int64)&v69,
                                   (__int64)&GameData_1aa5f37),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v74_.v74[21] = 0;
  v80_.v83 = (__int64*)&v80_.v80;
  v71_.v71 = v80_.v80;
  v71_.v72 = v80_.v81;
  v71_.v73 = 42;
  *(_QWORD*)v74_.v74 = 0xE35F888EE69DBCE4LL;
  *(_QWORD*)&v74_.v74[8] = 0x8383E38B83E3A683LL;
  *(_QWORD*)&v74_.v74[13] = 0x315F8883E38383E3LL;
  v80_.v80 = GameData_2042268;
  GameRoutine_138ff80(&v80_.v80, v78_.v78),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v80_.v83 == (__int64*)&v80_.v80) {
    v35 = 32;
  }
  else {
    if (v80_.v83 == nullptr) {
      goto LABEL_44;
    }
    v35 = 40;
  }
  (*(void (**)(__int64))(*v80_.v83 + v35))((__int64)v80_.v83),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_44:
  v36 = *v19;
  v74_.v77 |= 2u;
  v37 = game_util_Format((__int64)&GameData_1aa5e95, 1, v29, v30, v31, v32, v33,
                         v34, v67),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v38 = strlen(v37),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v38 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v39 = v38;
  if (v38 >= 0x17) {
    if ((v38 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v38 | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v80_.v81 = v39;
    v80_.v82 = v40;
    v80_.v80 = (__int64 (**)(void))(v41 | 1),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    LOBYTE(v80_.v80) = 2 * v38;
    v40 = (char*)&v80_.v80 + 1;
    if (v38 == 0) {
      goto LABEL_53;
    }
  }
  memmove(v40, v37, v39),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_53:
  v40[v39] = 0;
  BYTE12(v69) = 0;
  LOBYTE(v69) = 22;
  *(_QWORD*)((char*)&v69 + 1) = 0xE3A283E35F444950LL;
  DWORD2(v69) = 831947747;
  SceneManager_138c360(v36, (__int64*)&v80_.v80, (__int64*)&v69,
                       (__int64*)&v71_.v71),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v69 & 1) != 0 && v70 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v42),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (((unsigned __int8)v80_.v80 & 1) != 0 && v80_.v82 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v43),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  GameRoutine_a0d9a0((__int64)&v71_.v71),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v44 = GameRoutine_94cee0(),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v71_.v71 = nullptr;
  v71_.v72 = 0;
  v74_.v75 = 0;
  v74_.v76 = 0;
  v74_.v77 = 0;
  v78_.v79 = 0;
  v74_.v74[21] = 0;
  v71_.v73 = 42;
  v80_.v83 = (__int64*)&v80_.v80;
  *(_QWORD*)&v74_.v74[8] = 0x8383E38B83E3A683LL;
  *(_QWORD*)&v74_.v74[13] = 0x325F8883E38383E3LL;
  *(_QWORD*)v74_.v74 = 0xE35F888EE69DBCE4LL;
  v80_.v80 = GameData_20422e8;
  GameRoutine_138ff80(&v80_.v80, v78_.v78),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v80_.v83 == (__int64*)&v80_.v80) {
    v51 = 32;
  }
  else {
    if (v80_.v83 == nullptr) {
      goto LABEL_68;
    }
    v51 = 40;
  }
  (*(void (**)(__int64))(*v80_.v83 + v51))((__int64)v80_.v83),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_68:
  v52 = *v19;
  v53 = game_util_Format((__int64)&GameData_1aa5e95, 2, v45, v46, v47, v48, v49,
                         v50, v68),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v54 = strlen(v53),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v54 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_100;
  }
  v55 = v54;
  if (v54 >= 0x17) {
    if ((v54 | 7) == 0x17) {
      v57 = 26;
    }
    else {
      v57 = (v54 | 7) + 1;
    }
    v56 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v57, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v80_.v81 = v55;
    v80_.v82 = v56;
    v80_.v80 = (__int64 (**)(void))(v57 | 1),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_76;
  }
  LOBYTE(v80_.v80) = 2 * v54;
  v56 = (char*)&v80_.v80 + 1;
  if (v54 != 0) {
  LABEL_76:
    memmove(v56, v53, v55),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v56[v55] = 0;
  v58 = *(_QWORD*)(v44 + 8);
  v59 = strlen(v58),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v59 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_100:
    String_60a1d0(),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v60 = v59;
  if (v59 >= 0x17) {
    if ((v59 | 7) == 0x17) {
      v62 = 26;
    }
    else {
      v62 = (v59 | 7) + 1;
    }
    v61 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v62, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *((_QWORD*)&v69 + 1) = v60;
    v70 = v61;
    *(_QWORD*)&v69 = v62 | 1;
  }
  else {
    LOBYTE(v69) = 2 * v59;
    v61 = (char*)&v69 + 1;
    if (v59 == 0) {
      goto LABEL_86;
    }
  }
  memmove(v61, v58, v60),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_86:
  v61[v60] = 0;
  SceneManager_138c360(v52, (__int64*)&v80_.v80, (__int64*)&v69,
                       (__int64*)&v71_.v71),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v69 & 1) != 0 && v70 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v63),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (((unsigned __int8)v80_.v80 & 1) != 0 && v80_.v82 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v64),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  return GameRoutine_a0d9a0((__int64)&v71_.v71);
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
