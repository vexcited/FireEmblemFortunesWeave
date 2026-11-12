#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

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
__n128 game_facility_PerchSceneDiff_Initialize_alt1(
    __int64 a1, __int64 a2) __asm__("game_facility_PerchSceneDiff_Initialize");
__attribute__((swiftcall)) void
PerchSceneDiff_14223a0_alt1(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                            __int64 a3) __asm__("PerchSceneDiff_14223a0");
__attribute__((swiftcall)) void PerchSceneDiff_14224a0(PSEUDO_X8 x8_,
                                                       __int64 a1);
__n128
game_facility_PerchSceneDiff_Initialize_lambda0_Invoke_alt1(__int64 a1) __asm__(
    "game_facility_PerchSceneDiff_Initialize_lambda0_Invoke");
void game_facility_PerchSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
__n128 game_facility_PerchSceneDiff_Initialize_lambda3_Invoke_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7,
    __int64
        a8) __asm__("game_facility_PerchSceneDiff_Initialize_lambda3_Invoke");
void game_facility_PerchSceneDiff_Initialize_lambda4_Invoke(__int64 a1);
__int64 GameRoutine_1400780_alt1(_QWORD*, __int64,
                                 float) __asm__("GameRoutine_1400780");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneCharacterMovement_1417e70_alt1(__int64 result, char) __asm__(
    "SceneCharacterMovement_1417e70");
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 SceneManager_138c360_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c360");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern char GameData_1a86e82_alt1[] __asm__("GameData_1a86e82");
extern char GameData_1a8aebb_alt1[] __asm__("GameData_1a8aebb");
extern char GameData_1aa5e95_alt1[] __asm__("GameData_1aa5e95");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void SceneManager_138a920_alt1(__int64,
                               __int64) __asm__("SceneManager_138a920");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void PerchSceneDiff_14223a0(PSEUDO_X8 x8_,
                                                       __int64 a1,
                                                       const char* a2,
                                                       const char* a3);
void game_facility_PerchSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
void game_facility_PerchSceneDiff_Initialize_lambda3_Invoke();
_QWORD* DiningSceneDiff_1413d00(float*, unsigned __int8*, __int64, __int64**,
                                __int64*);
__attribute__((swiftcall)) void
    PerchSceneDiff_14223a0_alt2(PSEUDO_X8, _QWORD, _QWORD,
                                _QWORD) __asm__("PerchSceneDiff_14223a0");
__int64 GameHr_7a88a0(__int64*);
__int64 GameHr_a7d120(__int64 result);
void game_facility_SceneObjectHolder_HideBindEffect_alt1(__int64) __asm__(
    "game_facility_SceneObjectHolder_HideBindEffect");
void game_facility_PerchSceneDiff_Initialize(__int64 a1, __int64 a2);

void game_facility_PerchSceneDiff_Initialize(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v3;
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
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
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

  *(_QWORD*)(a1 + 96) = a2;
  BYTE13(v46_.v46) = 0;
  LOBYTE(v46_.v46) = 24;
  *(_DWORD*)((char*)&v46_.v46 + 9) = -1466112374;
  *(_QWORD*)((char*)&v46_.v46 + 1) = 0x82E3BE81E3A2ADE6LL;
  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
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
    *(_QWORD*)&v49[8] = v5;
    *(_QWORD*)&v49[16] = v7;
    *(_QWORD*)v49 = v8 | 1;
    goto LABEL_9;
  }
  v49[0] = 2 * v4;
  v7 = &v49[1];
  if (v4 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, (__int64)v3, v5);
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
      SpineModel_64dde0(v9, (__int64)v11, v12);
    }
    else if ((v46_.v46 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v46_.v47,
                         *((unsigned __int64*)&v46_.v46 + 1));
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
    SpineModel_64dde0(v13, (__int64)v15, v16);
    goto LABEL_34;
  }
  if ((v49[0] & 1) != 0) {
    GameRoutine_64df20(v13, *(__int64*)&v49[16], *(unsigned __int64*)&v49[8]);
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
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v30, *(__int64*)&v49[16]);
  }
  if ((v46_.v46 & 1) != 0 && v46_.v47 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v31, (__int64)v46_.v47);
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
  DiningSceneDiff_1413d00((float*)(a1 + 56), v49,
                          (__int64)std___1_piecewise_construct_ptr, &v51,
                          (__int64*)&v50);
  if (v46_.v48 == &v46_.v46) {
    v32 = 32;
    goto LABEL_75;
  }
  if (v46_.v48 != nullptr) {
    v32 = 40;
  LABEL_75:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v32))((__int64)v46_.v48);
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v33, *(__int64*)&v49[16]);
  }
  v34 = fw_memory_HeapManager_Allocate(*v6, 48, 16, 0);
  *(_BYTE*)(v34 + 46) = 0;
  *(_QWORD*)v49 = 49;
  *(_QWORD*)&v49[8] = 46;
  *(_QWORD*)&v49[16] = v34;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v34 + 16) = 0x82E3AB83E38783E3LL;
  *(_QWORD*)(v34 + 24) = 0xE3B882E3AA83E3B3LL;
  *(_QWORD*)(v34 + 32) = 0xA184E7B383E3A783LL;
  *(_QWORD*)(v34 + 38) = 0x968CE5B98AE5A184LL;
  *(_QWORD*)v34 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v34 + 8) = 0xA283E35FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203aa50;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v49,
                          (__int64)std___1_piecewise_construct_ptr, &v51,
                          (__int64*)&v50);
  if (v46_.v48 == &v46_.v46) {
    v35 = 32;
    goto LABEL_85;
  }
  if (v46_.v48 != nullptr) {
    v35 = 40;
  LABEL_85:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v35))((__int64)v46_.v48);
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v36, *(__int64*)&v49[16]);
  }
  v37 = fw_memory_HeapManager_Allocate(*v6, 56, 16, 0);
  *(_BYTE*)(v37 + 50) = 0;
  *(_QWORD*)v49 = 57;
  *(_QWORD*)&v49[8] = 50;
  *(_QWORD*)&v49[16] = v37;
  *(_WORD*)(v37 + 48) = -32103;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v37 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v37 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v37 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v37 + 40) = 0xE6B68BE6A88CE65FLL;
  *(_QWORD*)v37 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v37 + 8) = 0x828FE55FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203aad0;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v49,
                          (__int64)std___1_piecewise_construct_ptr, &v51,
                          (__int64*)&v50);
  if (v46_.v48 == &v46_.v46) {
    v38 = 32;
    goto LABEL_95;
  }
  if (v46_.v48 != nullptr) {
    v38 = 40;
  LABEL_95:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v38))((__int64)v46_.v48);
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v39 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v39, *(__int64*)&v49[16]);
  }
  v40 = fw_memory_HeapManager_Allocate(*v6, 56, 16, 0);
  *(_BYTE*)(v40 + 50) = 0;
  *(_QWORD*)v49 = 57;
  *(_QWORD*)&v49[8] = 50;
  *(_QWORD*)&v49[16] = v40;
  *(_WORD*)(v40 + 48) = -32103;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v40 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v40 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v40 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v40 + 40) = 0xE68F95E5AAB3E85FLL;
  *(_QWORD*)v40 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v40 + 8) = 0x828FE55FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203ab50;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v49,
                          (__int64)std___1_piecewise_construct_ptr, &v51,
                          (__int64*)&v50);
  if (v46_.v48 == &v46_.v46) {
    v41 = 32;
    goto LABEL_105;
  }
  if (v46_.v48 != nullptr) {
    v41 = 40;
  LABEL_105:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v41))((__int64)v46_.v48);
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v42, *(__int64*)&v49[16]);
  }
  v43 = fw_memory_HeapManager_Allocate(*v6, 48, 16, 0);
  *(_QWORD*)v49 = 49;
  *(_QWORD*)&v49[8] = 41;
  *(_QWORD*)&v49[16] = v43;
  *(_WORD*)(v43 + 40) = 130;
  v46_.v48 = &v46_.v46;
  *(_QWORD*)(v43 + 16) = 0x9DE9AB83E38783E3LL;
  *(_QWORD*)(v43 + 24) = 0x5FBAA4E7A8A1E89ELL;
  *(_QWORD*)(v43 + 32) = 0x99E68F95E5AAB3E8LL;
  *(_QWORD*)v43 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v43 + 8) = 0xA283E35FA89CE68ALL;
  *(_QWORD*)&v46_.v46 = GameData_203abd0;
  *((_QWORD*)&v46_.v46 + 1) = a1;
  v50 = &v46_.v46;
  v51 = (__int64*)v49;
  DiningSceneDiff_1413d00((float*)(a1 + 56), v49,
                          (__int64)std___1_piecewise_construct_ptr, &v51,
                          (__int64*)&v50);
  if (v46_.v48 == &v46_.v46) {
    v44 = 32;
    goto LABEL_115;
  }
  if (v46_.v48 != nullptr) {
    v44 = 40;
  LABEL_115:
    (*(void (**)(__int64))(*(_QWORD*)v46_.v48 + v44))((__int64)v46_.v48);
  }
  if ((v49[0] & 1) != 0 && *(_QWORD*)&v49[16] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v45, *(__int64*)&v49[16]);
  }
}

__attribute__((swiftcall)) void PerchSceneDiff_14223a0(PSEUDO_X8 x8_,
                                                       __int64 a1,
                                                       const char* a2,
                                                       const char* a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  struct {
    __int64 v11[2];
    const char* v12;
  } v11_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a2 != nullptr) {
    v6 = a1;
    GameRoutine_60a020_alt1((__int64)a4, a2);
    GameRoutine_1a09ce0_alt1((__int64)a4, "_", 1u);
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
  GameRoutine_1a09ce0_alt1((__int64)a4, v7, v8);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v11_.v12);
  }
  if (a3 != nullptr) {
    GameRoutine_1a09ce0_alt1((__int64)a4, "_", 1u);
    v10 = strlen_alt1(a3);
    GameRoutine_1a09ce0_alt1((__int64)a4, a3, v10);
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

void __attribute__((noreturn)) PerchSceneDiff_1422930() { __udf(0x8002u); }

void game_facility_PerchSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  const char** v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  const char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    _QWORD v40[2];
    char* v41;
  } v40_;
  struct {
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
    __int64 v45;
    int v46;
    char gap68_[4];
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v42_;
  __int128 v56;
  struct {
    __int128 v57;
    __int64 v58;
    __int64 v59;
    __int128* v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    int v64;
    char gap228_[4];
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    char v74;
    char gap305_[15];
    char v75;
    char gap321_[47];
    __int64 v76;
  } v57_;

  v57_.v60 = nullptr;
  v57_.v61 = 0;
  v57_.v58 = 0;
  v57_.v59 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v57_.v57 = (__typeof__(v57_.v57)){0};
  v57_.v62 = 0;
  v56 = (unsigned __int64)(GameData_2131338[0] + 16);
  PerchSceneDiff_14224a0((void*)(&v42_.v42), v1);
  if ((v42_.v42 & 1) != 0) {
    v2 = v42_.v44;
  }
  else {
    v2 = (char*)&v42_.v42 + 1;
  }
  if ((v42_.v42 & 1) != 0) {
    v3 = v42_.v43;
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v42_.v42 >> 1;
  }
  GameRoutine_1389160((__int64)&v56, (__int64)v2, v3);
  if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v42_.v44);
  }
  v5 = (__int64*)GameData_212dce8;
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v56);
  PerchSceneDiff_14223a0((void*)(&v42_.v42), v1, nullptr,
                         GameData_1a8aebb_alt1);
  game_facility_SceneManager_CloneObject(*v5, (unsigned __int8*)&v42_.v42,
                                         (__int64)&v42_.v42);
  if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)v42_.v44);
  }
  *(_QWORD*)&v56 = GameData_212e1c0 + 16;
  if (v57_.v60 == &v57_.v57) {
    v7 = 32;
    goto LABEL_21;
  }
  if (v57_.v60 != nullptr) {
    v7 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*(_QWORD*)v57_.v60 + v7))((__int64)v57_.v60);
  }
  BYTE13(v56) = 0;
  LOBYTE(v56) = 24;
  *(_DWORD*)((char*)&v56 + 9) = -1466112374;
  *(_QWORD*)((char*)&v56 + 1) = 0x82E3BE81E3A2ADE6LL;
  GameRoutine_19513c0((unsigned __int8*)&v56);
  if ((v56 & 1) != 0 && (_QWORD)v57_.v57 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v57_.v57);
  }
  v56 = (__typeof__(v56)){0};
  LOBYTE(v57_.v60) = 0;
  v57_.v74 = 0;
  v57_.v75 = 0;
  v57_.v76 = 0;
  LOBYTE(v57_.v57) = 20;
  strcpy((char*)&v57_.v57 + 9, "_D");
  *(_QWORD*)((char*)&v57_.v57 + 1) = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_60a020_alt1((__int64)&v57_.v57, (const char*)&GameData_1acc80d);
  v9 = (_QWORD*)*v5;
  v10 = game_util_Format_alt1(GameData_1aa5e95_alt1, 0);
  v11 = strlen_alt1(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v42_.v43 = v12;
    v42_.v44 = v13;
    v42_.v42 = v14 | 1;
  }
  else {
    LOBYTE(v42_.v42) = 2 * v11;
    v13 = (char*)&v42_.v42 + 1;
    if (v11 == 0) {
      goto LABEL_36;
    }
  }
  memmove_alt1((__int64)v13, (__int64)v10, v12);
LABEL_36:
  v13[v12] = 0;
  SceneManager_138c000_alt1(v9, (unsigned __int8*)&v42_.v42,
                            *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL),
                            (__int64)&v56);
  if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v42_.v44);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v56);
  v56 = (__typeof__(v56)){0};
  *(_QWORD*)((char*)&v57_.v57 + 1) = 0x335FAC9CE6BA9FE5LL;
  v57_.v75 = 0;
  v57_.v76 = 0;
  LOBYTE(v57_.v57) = 20;
  strcpy((char*)&v57_.v57 + 9, "_D");
  PerchSceneDiff_14223a0((void*)(v40_.v40), v1, (const char*)&GameData_1ac0cae,
                         GameData_1a86e82_alt1);
  GameRoutine_195ab40((__int64)&v42_.v42, (__int64)v40_.v40);
  v16 = v42_.v47;
  v17 = v42_.v48;
  v42_.v47 = 0;
  v42_.v48 = 0;
  LODWORD(v57_.v60) = v42_.v42;
  v57_.v65 = v16;
  v57_.v66 = v17;
  v57_.v64 = v42_.v46;
  v57_.v62 = (__int64)v42_.v44;
  v57_.v63 = v42_.v45;
  v18 = v42_.v51;
  v19 = v42_.v52;
  v42_.v51 = 0;
  v42_.v52 = 0;
  v57_.v69 = v18;
  v57_.v70 = v19;
  v20 = v42_.v49;
  v21 = v42_.v50;
  v42_.v49 = 0;
  v42_.v50 = 0;
  v57_.v67 = v20;
  v57_.v68 = v21;
  v22 = v42_.v53;
  v23 = v42_.v54;
  v42_.v53 = 0;
  v42_.v54 = 0;
  v57_.v71 = v22;
  v57_.v72 = v23;
  v24 = v42_.v55;
  v42_.v55 = 0;
  v57_.v73 = v24;
  v57_.v74 = 1;
  if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v40_.v41);
  }
  v26 = (_QWORD*)*v5;
  v27 = (const char**)GameData_21313d0;
  v28 = (__int64)*GameData_21313d0;
  v29 = strlen_alt1((const char*)*GameData_21313d0);
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v29 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32,
                                                16, 0);
    v42_.v43 = v30;
    v42_.v44 = v31;
    v42_.v42 = v32 | 1;
    goto LABEL_54;
  }
  LOBYTE(v42_.v42) = 2 * v29;
  v31 = (char*)&v42_.v42 + 1;
  if (v29 != 0) {
  LABEL_54:
    memmove_alt1((__int64)v31, v28, v30);
  }
  v33 = *v27;
  v31[v30] = 0;
  v34 = strlen_alt1(v33);
  if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v35 = v34;
  if (v34 >= 0x17) {
    if ((v34 | 7) == 0x17) {
      v37 = 26;
    }
    else {
      v37 = (v34 | 7) + 1;
    }
    v36 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v37,
                                                16, 0);
    v40_.v40[1] = v35;
    v40_.v41 = v36;
    v40_.v40[0] = v37 | 1;
  }
  else {
    LOBYTE(v40_.v40[0]) = 2 * v34;
    v36 = (char*)v40_.v40 + 1;
    if (v34 == 0) {
      goto LABEL_64;
    }
  }
  memmove_alt1((__int64)v36, (__int64)v33, v35);
LABEL_64:
  v36[v35] = 0;
  SceneManager_138c360_alt1(v26, (unsigned __int8*)&v42_.v42, (__int64)v40_.v40,
                            (__int64)&v56);
  if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, (__int64)v40_.v41);
  }
  if ((v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, (__int64)v42_.v44);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v56);
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
  PerchSceneDiff_14223a0_alt2((void*)(v15_.v15), *(_QWORD*)(a1 + 8), 0,
                              &GameData_1a8aebb);
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
    if (v11 == GameHr_7a88a0(v17)) {
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v15_.v16);
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
      GameHr_a7d120(v14);
    }
  }
}

void game_facility_PerchSceneDiff_Initialize_lambda3_Invoke()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[2];
    __int64 v9;
  } v8_;
  struct {
    __int128 v10;
    char gap48_[8];
    char v11;
    char gap57_[15];
    __int64 v12;
  } v10_;

  v0 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
  if (v0 != 0) {
    v1 = (_QWORD*)v0;
    v2 = *(_QWORD*)(v0 + 192);
    v3 = v1[25];
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterMovement_1417e70_alt1(v2, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
    else {
      SceneCharacterMovement_1417e70_alt1(v2, 1);
    }
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        32, 16, 0);
    v8_.v8[0] = 33;
    v8_.v8[1] = 25;
    v8_.v9 = v5;
    *(_WORD*)(v5 + 24) = 136;
    *(_QWORD*)v5 = 0x82E3BE81E3A2ADE6LL;
    *(_QWORD*)(v5 + 8) = 0xA683E35FA89CE68ALL;
    *(_QWORD*)(v5 + 16) = 0x83E38383E38B83E3LL;
    game_facility_140d160((void*)(&v10_.v10), (__int64)v8_.v8);
    GameRoutine_1400780_alt1(v1, (__int64)&v10_.v10, 0x0.0p+0f);
    if ((v10_.v11 & 1) != 0 && v10_.v12 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, v10_.v12);
    }
    if ((v8_.v8[0] & 1) != 0 && v8_.v9 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, v8_.v9);
    }
  }
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
  v5 = strlen_alt1((const char*)*GameData_21313d0);
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
    memmove_alt1((__int64)v7, v4, v6);
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
    if (v18 == GameHr_7a88a0(v37)) {
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v34_.v36);
    }
  }
LABEL_27:
  if (v11 != 0) {
    game_facility_SceneObjectHolder_HideBindEffect_alt1(v11);
    v20 = *(_QWORD*)(v11 + 8);
    if (v20 != 0 && *(_BYTE*)(v20 + 288) != 0) {
      *(_BYTE*)(v20 + 288) = 0;
    }
  }
  v21 = *v2;
  PerchSceneDiff_14223a0_alt2((void*)(&v34_.v34), v1, 0, &GameData_1a8aebb);
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
    if (v31 == GameHr_7a88a0(v37)) {
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v34_.v36);
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
