#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) PerchSceneDiff_1422930() { __udf(0x8002u); };
_QWORD** GameRoutine_13fdbc0(_QWORD** result, __int64, _QWORD*);
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* SceneManager_138a920(__int64, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_7a88a0(__int64*);
__int64 MapObjectModule_a7d120(__int64 result);
__int64 SceneManager_138c000(_QWORD*, __int64*, __int64, __int64*);
__int64 SceneManager_138c360(_QWORD*, __int64*, __int64*, __int64*);
__int64 SceneManager_138e5e0(__int64, __int64, __int64, __int64, __int64,
                             __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(__int64 result);
__int64 game_facility_SceneManager_CloneObject(__int64, unsigned __int8*,
                                               __int64);
__int64 game_facility_SceneObjectHolder_HideBindEffect(__int64 result);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a86e82;
extern _UNKNOWN GameData_1a8aebb;
extern _UNKNOWN GameData_1aa5e95;
extern _UNKNOWN GameData_1ac690d;
extern __int64 (*GameData_203a9d0[])();
extern __int64 (*GameData_203aa50[])();
extern __int64 (*GameData_203aad0[])();
extern __int64 (*GameData_203ab50[])();
extern __int64 (*GameData_203abd0[])();
extern __int64** GameData_21313d0;
extern __int64 GameData_1ac0cae;
extern __int64 GameData_1acc80d;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_1400780(_QWORD*, float*, float);
void GameRoutine_19513c0(unsigned __int8*);
void GameRoutine_195ab40(__int64, __int64);
void SceneCharacterMovement_1417e70(__int64, char, __n128);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__n128 game_facility_PerchSceneDiff_Initialize(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
PerchSceneDiff_14223a0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void PerchSceneDiff_14224a0(PSEUDO_X8 x8_,
                                                       __int64 a1);
__n128 game_facility_PerchSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
void game_facility_PerchSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
__n128 game_facility_PerchSceneDiff_Initialize_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);
void game_facility_PerchSceneDiff_Initialize_lambda4_Invoke(__int64 a1);

__n128 game_facility_PerchSceneDiff_Initialize(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  _BYTE* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __n128 result;
  __int64 v44;
  __int64 v45;
  struct {
    __int128 v46;
    char* v47;
    char gap24_[8];
    __int128* v48;
  } v46_;
  _BYTE v49[24];
  __int128* v50;
  __int64* v51;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  BYTE13(v46_.v46) = 0;
  LOBYTE(v46_.v46) = 24;
  *(_DWORD*)((char*)&v46_.v46 + 9) = -1466112374;
  *(_QWORD*)((char*)&v46_.v46 + 1) = 0x82E3BE81E3A2ADE6LL;
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
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
    *(_QWORD*)&v49[8] = v5;
    *(_QWORD*)&v49[16] = v7;
    *(_QWORD*)v49 = v8 | 1;
    goto LABEL_9;
  }
  v49[0] = 2 * v4;
  v7 = &v49[1];
  if (v4 != 0) {
  LABEL_9:
    memmove(v7, v3, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v9 = (__int64*)(a1 + 8);
  v7[v5] = 0;
  if ((__int128*)(a1 + 8) != &v46_.v46) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if ((v46_.v46 & 1) != 0) {
        v11 = v46_.v47;
      }
      else {
        v11 = (char*)&v46_.v46 + 1;
      }
      if ((v46_.v46 & 1) != 0) {
        v12 = *((_QWORD*)&v46_.v46 + 1);
      }
      else {
        v12 = (unsigned __int64)(unsigned __int8)v46_.v46 >> 1;
      }
      SpineModel_64dde0(v9, (__int64)v11, v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if ((v46_.v46 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v46_.v47,
                         *((unsigned __int64*)&v46_.v46 + 1)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v10 = *((_QWORD*)&v46_.v46 + 1);
      *v9 = v46_.v46;
      *(_QWORD*)(a1 + 16) = v10;
      *(_QWORD*)(a1 + 24) = v46_.v47;
    }
  }
  v13 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v49) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v13 & 1) != 0) {
    if ((v49[0] & 1) != 0) {
      v15 = *(_BYTE**)&v49[16];
    }
    else {
      v15 = &v49[1];
    }
    if ((v49[0] & 1) != 0) {
      v16 = *(_QWORD*)&v49[8];
    }
    else {
      v16 = (unsigned __int64)v49[0] >> 1;
    }
    SpineModel_64dde0(v13, (__int64)v15, v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_34;
  }
  if ((v49[0] & 1) != 0) {
    GameRoutine_64df20(v13, *(__int64*)&v49[16], *(unsigned __int64*)&v49[8]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v14 = *(_QWORD*)&v49[8];
    *v13 = *(_QWORD*)v49;
    *(_QWORD*)(a1 + 40) = v14;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v49[16];
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
      nn_mem_StandardAllocator_Free(*v6 + v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*v6 + 200) != 0) {
      v18 = 128;
    }
    else {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v18),
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
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46_.v46 & 1) != 0 && v46_.v47 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v30),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v49[23] = 0;
  v49[0] = 44;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)&v49[9] = 0xAD83E35FA89CE68ALL;
  *(_QWORD*)&v49[15] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v49[1] = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)&v46_.v46 = GameData_203a9d0;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  GameRoutine_1413d00((float*)(a1 + 56), v49,
                      (__int64)std___1_piecewise_construct_ptr, &v51,
                      (__int64*)&v50),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v46_.v48 == &v46_.v46) {
    v31 = 32;
    goto LABEL_75;
  }
  if (v46_.v48 != nullptr) {
    v31 = 40;
  LABEL_75:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v31))((__int64)v46_.v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v32),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v33 = fw_memory_HeapManager_Allocate(*v6, 48, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v33 + 46) = 0;
  *(_QWORD*)v49 = 49;
  *(_QWORD*)&v49[8] = 46;
  *(_QWORD*)&v49[16] = v33;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v33 + 16) = 0x82E3AB83E38783E3LL;
  *(_QWORD*)(v33 + 24) = 0xE3B882E3AA83E3B3LL;
  *(_QWORD*)(v33 + 32) = 0xA184E7B383E3A783LL;
  *(_QWORD*)(v33 + 38) = 0x968CE5B98AE5A184LL;
  *(_QWORD*)v33 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v33 + 8) = 0xA283E35FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203aa50;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  GameRoutine_1413d00((float*)(a1 + 56), v49,
                      (__int64)std___1_piecewise_construct_ptr, &v51,
                      (__int64*)&v50),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v46_.v48 == &v46_.v46) {
    v34 = 32;
    goto LABEL_85;
  }
  if (v46_.v48 != nullptr) {
    v34 = 40;
  LABEL_85:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v34))((__int64)v46_.v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v35 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v35),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v36 = fw_memory_HeapManager_Allocate(*v6, 56, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v36 + 50) = 0;
  *(_QWORD*)v49 = 57;
  *(_QWORD*)&v49[8] = 50;
  *(_QWORD*)&v49[16] = v36;
  *(_WORD*)(v36 + 48) = -32103;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v36 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v36 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v36 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v36 + 40) = 0xE6B68BE6A88CE65FLL;
  *(_QWORD*)v36 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v36 + 8) = 0x828FE55FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203aad0;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  GameRoutine_1413d00((float*)(a1 + 56), v49,
                      (__int64)std___1_piecewise_construct_ptr, &v51,
                      (__int64*)&v50),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v46_.v48 == &v46_.v46) {
    v37 = 32;
    goto LABEL_95;
  }
  if (v46_.v48 != nullptr) {
    v37 = 40;
  LABEL_95:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v37))((__int64)v46_.v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v38),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v39 = fw_memory_HeapManager_Allocate(*v6, 56, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v39 + 50) = 0;
  *(_QWORD*)v49 = 57;
  *(_QWORD*)&v49[8] = 50;
  *(_QWORD*)&v49[16] = v39;
  *(_WORD*)(v39 + 48) = -32103;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v39 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v39 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v39 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v39 + 40) = 0xE68F95E5AAB3E85FLL;
  *(_QWORD*)v39 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v39 + 8) = 0x828FE55FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203ab50;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  GameRoutine_1413d00((float*)(a1 + 56), v49,
                      (__int64)std___1_piecewise_construct_ptr, &v51,
                      (__int64*)&v50),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v46_.v48 == &v46_.v46) {
    v40 = 32;
    goto LABEL_105;
  }
  if (v46_.v48 != nullptr) {
    v40 = 40;
  LABEL_105:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v40))((__int64)v46_.v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v41),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v42 = fw_memory_HeapManager_Allocate(*v6, 48, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v49 = 49;
  *(_QWORD*)&v49[8] = 41;
  *(_QWORD*)&v49[16] = v42;
  *(_WORD*)(v42 + 40) = 130;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v42 + 16) = 0x9DE9AB83E38783E3LL;
  *(_QWORD*)(v42 + 24) = 0x5FBAA4E7A8A1E89ELL;
  *(_QWORD*)(v42 + 32) = 0x99E68F95E5AAB3E8LL;
  *(_QWORD*)v42 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v42 + 8) = 0xA283E35FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203abd0;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  GameRoutine_1413d00((float*)(a1 + 56), v49,
                      (__int64)std___1_piecewise_construct_ptr, &v51,
                      (__int64*)&v50),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v46_.v48 == &v46_.v46) {
    v44 = 32;
    goto LABEL_115;
  }
  if (v46_.v48 != nullptr) {
    v44 = 40;
  LABEL_115:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v44))((__int64)v46_.v48),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v45 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v45);
  }
  return result;
}

__attribute__((swiftcall)) void

PerchSceneDiff_14223a0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    char* v12;
  } v11_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a2 != 0) {
    v6 = a1;
    GameRoutine_60a020((__int64)a4, a2);
    GameRoutine_1a09ce0(a4, &GameData_1ac690d, 1);
    a1 = v6;
  }
  PerchSceneDiff_14224a0((void*)(v11_.v11), a1);
  if ((v11_.v11[0] & 1) != 0) {
    v7 = v11_.v12;
  }
  else {
    v7 = (char*)v11_.v11 + 1;
  }
  if ((v11_.v11[0] & 1) != 0) {
    v8 = v11_.v11[1];
  }
  else {
    v8 = (unsigned __int64)LOBYTE(v11_.v11[0]) >> 1;
  }
  GameRoutine_1a09ce0(a4, v7, v8);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if (a3 != 0) {
    GameRoutine_1a09ce0(a4, &GameData_1ac690d, 1);
    v10 = strlen(a3);
    GameRoutine_1a09ce0(a4, a3, v10);
  }
}

__attribute__((swiftcall)) void PerchSceneDiff_14224a0(PSEUDO_X8 x8_,
                                                       __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
  }
  else {
    v4 = a1 + 9;
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * result;
  v7 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 32);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 40);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    GameRoutine_1a09ce0(a2, &GameData_1ac690d, 1);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = a1 + 33;
    }
    v12 = strlen(v11);
    {
      GameRoutine_1a09ce0(a2, v11, v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__n128 game_facility_PerchSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v8;
  __int64* v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
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
  __int64 v36;
  _QWORD* v37;
  __int64** v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char v52;
  struct {
    __int64 v53[2];
    char* v54;
  } v53_;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
    __int64 v58;
    int v59;
    char gap68_[4];
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
  } v55_;
  __int128 v69;
  struct {
    __int128 v70;
    __int64 v71;
    __int64 v72;
    __int128* v73;
    __int64 v74;
    char* v75;
    __int64 v76;
    int v77;
    char gap228_[4];
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    char v87;
    char gap305_[15];
    char v88;
    char gap321_[47];
    __int64 v89;
  } v70_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v70_.v73 = nullptr;
  v70_.v74 = 0;
  v70_.v71 = 0;
  v70_.v72 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v70_.v70 = (__typeof__(v70_.v70)){0};
  v70_.v75 = nullptr;
  v69 = (unsigned __int64)(GameData_2131338[0] + 16);
  PerchSceneDiff_14224a0((void*)(&v55_.v55), v1),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v55_.v55 & 1) != 0) {
    v2 = v55_.v57;
  }
  else {
    v2 = (char*)&v55_.v55 + 1;
  }
  if ((v55_.v55 & 1) != 0) {
    v3 = v55_.v56;
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  GameRoutine_1389160((__int64)&v69, (__int64)v2, v3),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v9 = (__int64*)GameData_212dce8;
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)&v69),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  PerchSceneDiff_14223a0((void*)(&v55_.v55), v1, 0, (__int64)&GameData_1a8aebb),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  game_facility_SceneManager_CloneObject(*v9, (unsigned __int8*)&v55_.v55,
                                         (__int64)&v55_.v55),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    *(__n128*)&v10 = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  *(_QWORD*)&v69 = GameData_212e1c0 + 16;
  if (v70_.v73 == &v70_.v70) {
    v12 = 32;
    goto LABEL_21;
  }
  if (v70_.v73 != nullptr) {
    v12 = 40;
  LABEL_21:
    (*(void (**)(void*))(*(_QWORD*)v70_.v73 + v12))((void*)v70_.v73),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  BYTE13(v69) = 0;
  LOBYTE(v69) = 24;
  *(_DWORD*)((char*)&v69 + 9) = -1466112374;
  *(_QWORD*)((char*)&v69 + 1) = 0x82E3BE81E3A2ADE6LL;
  GameRoutine_19513c0((unsigned __int8*)&v69),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v69 & 1) != 0 && (_QWORD)v70_.v70 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v69 = (__typeof__(v69)){0};
  LOBYTE(v70_.v73) = 0;
  v70_.v87 = 0;
  v70_.v88 = 0;
  v70_.v89 = 0;
  LOBYTE(v70_.v70) = 20;
  strcpy((char*)&v70_.v70 + 9, "_D");
  *(_QWORD*)((char*)&v70_.v70 + 1) = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_60a020((__int64)&v70_.v70, (__int64)&GameData_1acc80d),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v14 = (_QWORD*)*v9;
  v21 = game_util_Format((__int64)&GameData_1aa5e95, 0, v15, v16, v17, v18, v19,
                         v20, v52),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v22 = strlen(v21),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25,
                                                16, 0),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v55_.v56 = v23;
    v55_.v57 = v24;
    v55_.v55 = v25 | 1;
  }
  else {
    LOBYTE(v55_.v55) = 2 * v22;
    v24 = (char*)&v55_.v55 + 1;
    if (v22 == 0) {
      goto LABEL_36;
    }
  }
  memmove(v24, v21, v23),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_36:
  v24[v23] = 0;
  SceneManager_138c000(v14, &v55_.v55, *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL),
                       (__int64*)&v69),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  GameRoutine_a0d9a0((__int64)&v69),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v69 = (__typeof__(v69)){0};
  *(_QWORD*)((char*)&v70_.v70 + 1) = 0x335FAC9CE6BA9FE5LL;
  v70_.v88 = 0;
  v70_.v89 = 0;
  LOBYTE(v70_.v70) = 20;
  strcpy((char*)&v70_.v70 + 9, "_D");
  PerchSceneDiff_14223a0((void*)(v53_.v53), v1, (__int64)&GameData_1ac0cae,
                         (__int64)&GameData_1a86e82),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_195ab40((__int64)&v55_.v55, (__int64)v53_.v53),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v27 = v55_.v60;
  v28 = v55_.v61;
  v55_.v60 = 0;
  v55_.v61 = 0;
  LODWORD(v70_.v73) = v55_.v55;
  v70_.v78 = v27;
  v70_.v79 = v28;
  v70_.v77 = v55_.v59;
  v70_.v75 = v55_.v57;
  v70_.v76 = v55_.v58;
  v29 = v55_.v64;
  v30 = v55_.v65;
  v55_.v64 = 0;
  v55_.v65 = 0;
  v70_.v82 = v29;
  v70_.v83 = v30;
  v31 = v55_.v62;
  v32 = v55_.v63;
  v55_.v62 = 0;
  v55_.v63 = 0;
  v70_.v80 = v31;
  v70_.v81 = v32;
  v33 = v55_.v66;
  v34 = v55_.v67;
  v55_.v66 = 0;
  v55_.v67 = 0;
  v70_.v84 = v33;
  v70_.v85 = v34;
  v35 = v55_.v68;
  v55_.v68 = 0;
  v70_.v86 = v35;
  v70_.v87 = 1;
  if ((v53_.v53[0] & 1) != 0 && v53_.v54 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v37 = (_QWORD*)*v9;
  v38 = GameData_21313d0;
  v39 = (__int64)*GameData_21313d0;
  v40 = strlen(*GameData_21313d0),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v40 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v41 = v40;
  if (v40 >= 0x17) {
    if ((v40 | 7) == 0x17) {
      v43 = 26;
    }
    else {
      v43 = (v40 | 7) + 1;
    }
    v42 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v43,
                                                16, 0),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v55_.v56 = v41;
    v55_.v57 = v42;
    v55_.v55 = v43 | 1;
    goto LABEL_54;
  }
  LOBYTE(v55_.v55) = 2 * v40;
  v42 = (char*)&v55_.v55 + 1;
  if (v40 != 0) {
  LABEL_54:
    memmove(v42, v39, v41),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v44 = *v38;
  v42[v41] = 0;
  v45 = strlen(v44),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v46 = v45;
  if (v45 >= 0x17) {
    if ((v45 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v45 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v48,
                                                16, 0),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v53_.v53[1] = v46;
    v53_.v54 = v47;
    v53_.v53[0] = v48 | 1;
  }
  else {
    LOBYTE(v53_.v53[0]) = 2 * v45;
    v47 = (char*)v53_.v53 + 1;
    if (v45 == 0) {
      goto LABEL_64;
    }
  }
  memmove(v47, v44, v46),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_64:
  v47[v46] = 0;
  SceneManager_138c360(v37, &v55_.v55, v53_.v53, (__int64*)&v69),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v53_.v53[0] & 1) != 0 && v53_.v54 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  return GameRoutine_a0d9a0((__int64)&v69);
}

void game_facility_PerchSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    _QWORD* v15[2];
    char* v16;
  } v15_;
  __int64 v17[2];

  v1 = *(_QWORD*)GameData_212dce8;
  PerchSceneDiff_14223a0((void*)(v15_.v15), *(_QWORD*)(a1 + 8), 0,
                         (__int64)&GameData_1a8aebb);
  v2 = *(__int64**)(v1 + 232);
  v3 = *(__int64**)(v1 + 240);
  if (v2 == v3) {
    v4 = 0;
    if (((__int64)v15_.v15[0] & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_14;
  }
  while (1) {
    v5 = *v2++;
    v4 = v5;
    v6 = *(_QWORD*)(v5 + 40);
    v7 = v5 + 25;
    v8 = (*(_BYTE*)(v5 + 24) & 1) != 0 ? v6 : v7;
    v9 = v15_.v16;
    v10 = (_QWORD*)((unsigned __int64)LOBYTE(v15_.v15[0]) >> 1);
    if (((__int64)v15_.v15[0] & 1) != 0) {
      v10 = v15_.v15[1];
    }
    else {
      v9 = (char*)v15_.v15 + 1;
    }
    v17[0] = (__int64)v9;
    v17[1] = (__int64)v10;
    v11 = game_HashString(v8);
    if (v11 == GameRoutine_7a88a0(v17)) {
      break;
    }
    if (v2 == v3) {
      v4 = 0;
      break;
    }
  }
  if (((__int64)v15_.v15[0] & 1) != 0) {
  LABEL_14:
    if (v15_.v16 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v12);
    }
  }
LABEL_18:
  if (v4 != 0) {
    v13 = *(_QWORD**)(v4 + 8);
    v17[0] = 0;
    v15_.v15[0] = v17;
    GameRoutine_13fdbc0(v15_.v15, (__int64)v15_.v15, v13);
    v14 = v17[0];
    if (v17[0] != 0) {
      *((_BYTE*)((_UNKNOWN*)0x9CLL) + v17[0]) = 1;
      MapObjectModule_a7d120(v14);
    }
  }
}

__n128 game_facility_PerchSceneDiff_Initialize_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __n128 result;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int128 v19;
    char gap48_[8];
    char v20;
    char gap57_[15];
    __int64 v21;
  } v19_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0, a3, a4, a5, a6, a7,
                            a8),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v8 != 0) {
    v10 = (_QWORD*)v8;
    v11 = *(_QWORD*)(v8 + 192);
    v12 = v10[25];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterMovement_1417e70(v11, 1, result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else {
      SceneCharacterMovement_1417e70(v11, 1, result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17_.v17[0] = 33;
    v17_.v17[1] = 25;
    v17_.v18 = v14;
    *(_WORD*)(v14 + 24) = 136;
    *(_QWORD*)v14 = 0x82E3BE81E3A2ADE6LL;
    *(_QWORD*)(v14 + 8) = 0xA683E35FA89CE68ALL;
    *(_QWORD*)(v14 + 16) = 0x83E38383E38B83E3LL;
    game_facility_140d160((void*)(&v19_.v19), (__int64)v17_.v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_1400780(v10, (float*)&v19_.v19, 0x0.0p+0f),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v19_.v20 & 1) != 0 && v19_.v21 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v15);
    }
    if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v16 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v16);
    }
  }
  return result;
}

void game_facility_PerchSceneDiff_Initialize_lambda4_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    char* v36;
  } v34_;
  __int64 v37[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (__int64*)GameData_212dce8;
  v3 = *(_QWORD*)GameData_212dce8;
  v4 = (__int64)*GameData_21313d0;
  v5 = strlen(*GameData_21313d0);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    v34_.v35 = v6;
    v34_.v36 = v7;
    v34_.v34 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v34_.v34) = 2 * v5;
  v7 = (char*)&v34_.v34 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove(v7, v4, v6);
  }
  v7[v6] = 0;
  v9 = *(__int64**)(v3 + 160);
  v10 = *(__int64**)(v3 + 168);
  if (v9 == v10) {
    v11 = 0;
    if ((v34_.v34 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v12 = *v9++;
    v11 = v12;
    v13 = *(_QWORD*)(v12 + 40);
    v14 = v12 + 25;
    v15 = (*(_BYTE*)(v12 + 24) & 1) != 0 ? v13 : v14;
    v16 = v34_.v36;
    v17 = (unsigned __int64)(unsigned __int8)v34_.v34 >> 1;
    if ((v34_.v34 & 1) != 0) {
      v17 = v34_.v35;
    }
    else {
      v16 = (char*)&v34_.v34 + 1;
    }
    v37[0] = (__int64)v16;
    v37[1] = v17;
    v18 = game_HashString(v15);
    if (v18 == GameRoutine_7a88a0(v37)) {
      break;
    }
    if (v9 == v10) {
      v11 = 0;
      break;
    }
  }
  if ((v34_.v34 & 1) != 0) {
  LABEL_23:
    if (v34_.v36 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
  }
LABEL_27:
  if (v11 != 0) {
    game_facility_SceneObjectHolder_HideBindEffect(v11);
    v20 = *(_QWORD*)(v11 + 8);
    if (v20 != 0 && *(_BYTE*)(v20 + 288) != 0) {
      *(_BYTE*)(v20 + 288) = 0;
    }
  }
  v21 = *v2;
  PerchSceneDiff_14223a0((void*)(&v34_.v34), v1, 0, (__int64)&GameData_1a8aebb);
  v22 = *(__int64**)(v21 + 232);
  v23 = *(__int64**)(v21 + 240);
  if (v22 == v23) {
    v24 = 0;
    if ((v34_.v34 & 1) == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  while (1) {
    v25 = *v22++;
    v24 = v25;
    v26 = *(_QWORD*)(v25 + 40);
    v27 = v25 + 25;
    v28 = (*(_BYTE*)(v25 + 24) & 1) != 0 ? v26 : v27;
    v29 = v34_.v36;
    v30 = (unsigned __int64)(unsigned __int8)v34_.v34 >> 1;
    if ((v34_.v34 & 1) != 0) {
      v30 = v34_.v35;
    }
    else {
      v29 = (char*)&v34_.v34 + 1;
    }
    v37[0] = (__int64)v29;
    v37[1] = v30;
    v31 = game_HashString(v28);
    if (v31 == GameRoutine_7a88a0(v37)) {
      break;
    }
    if (v22 == v23) {
      v24 = 0;
      break;
    }
  }
  if ((v34_.v34 & 1) != 0) {
  LABEL_44:
    if (v34_.v36 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v32);
    }
  }
LABEL_48:
  if (v24 != 0) {
    v33 = *(_QWORD*)(v24 + 8);
    if (v33 != 0) {
      *(_BYTE*)(v33 + 289) = 0;
    }
  }
}

#pragma GCC visibility pop
