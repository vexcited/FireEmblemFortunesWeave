#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a920(__int64, __int64, __int64, __int64, __int64,
                            __int64);
__int64 GameRoutine_14299d0(__int64 result, unsigned int, __int64);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
bool GameRoutine_1389160(__int64, __int64, __int64);
extern _UNKNOWN** GameData_2131430[2];
extern _UNKNOWN** GameData_2131438;
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 GameData_212dce8;
extern char GameData_1ab9754[];
__int64 game_facility_TrainingSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
__int64 game_facility_TrainingSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void TrainingArgs_14261c0(PSEUDO_X8, __int64,
                                                     __int64, int);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_203b468[])();
extern __int64 (*GameData_203b4e8[])();
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_1aa5e95[];
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__n128 game_facility_TrainingSceneDiff_Initialize(unsigned __int64 a1,
                                                  __int64 a2);
__int64
TrainingSceneDiff_14299d0_alt1(__int64 result, unsigned int a2,
                               __int64 a3) __asm__("TrainingSceneDiff_14299d0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 SceneManager_138a920(__int64, __int64);
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 TrainingArgs_14261c0_alt1(__int64, __int64,
                                  int) __asm__("TrainingArgs_14261c0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TrainingSceneDiff_14299d0(__int64 a1, unsigned int a2, const char* a3);

__n128 game_facility_TrainingSceneDiff_Initialize(unsigned __int64 a1,
                                                  __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  signed __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _BYTE* v12;
  char* v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  _BYTE* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __n128 result;
  __int64 v45;
  __int64 v46;
  struct {
    __int64 (**v47)();
    unsigned __int64 v48;
    char* v49;
    char gap24_[8];
    __int64 (***v50)();
  } v47_;
  _BYTE v51[24];
  __int64 (***v52)();
  __int64* v53;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  v3 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 8LL);
  v4 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_127;
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v47_.v48 = v5;
    v47_.v49 = v6;
    v47_.v47 = (__int64 (**)(void))(v7 | 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_9;
  }
  LOBYTE(v47_.v47) = 2 * v4;
  v6 = (char*)&v47_.v47 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove(v6, v3, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6[v5] = 0;
  v8 = v47_.v48;
  if (((unsigned __int8)v47_.v47 & 1) == 0) {
    v8 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
  }
  if (v8 >= 6) {
    if (((unsigned __int8)v47_.v47 & 1) != 0) {
      v13 = v47_.v49;
    }
    else {
      v13 = (char*)&v47_.v47 + 1;
    }
    v14 = &v13[v8];
  LABEL_21:
    v15 = v13;
    do {
      v16 = memchr(v15, 232, v8 - 5),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v16 == 0) {
        break;
      }
      if (*(_DWORD*)v16 == -409753368 &&
          *(unsigned __int16*)(v16 + 4) == 46263) {
        if ((char*)v16 != v14 && v16 - (_QWORD)v13 != -1) {
          GameRoutine_1a0a8e0(&v47_.v47, v16 - (_QWORD)v13, 6,
                              &GameData_1a9f09e, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v8 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
          if (((unsigned __int8)v47_.v47 & 1) != 0) {
            v13 = v47_.v49;
          }
          else {
            v13 = (char*)&v47_.v47 + 1;
          }
          if (((unsigned __int8)v47_.v47 & 1) != 0) {
            v8 = v47_.v48;
          }
          v14 = &v13[v8];
          if (v8 > 5) {
            goto LABEL_21;
          }
        }
        break;
      }
      v15 = (char*)(v16 + 1);
      v8 = v14 - v15;
    } while (v14 - v15 >= 6);
  }
  v9 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = strlen(v9),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_127:
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v10 | 7) + 1;
    }
    v12 = (_BYTE*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)&v51[8] = v11;
    *(_QWORD*)&v51[16] = v12;
    *(_QWORD*)v51 = v18 | 1;
    goto LABEL_42;
  }
  v51[0] = 2 * v10;
  v12 = &v51[1];
  if (v10 != 0) {
  LABEL_42:
    memmove(v12, v9, v11),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v19 = (__int64*)(a1 + 8);
  v12[v11] = 0;
  if ((__int64 (***)(void))(a1 + 8) != &v47_.v47) {
    if ((*(_BYTE*)v19 & 1) != 0) {
      if (((unsigned __int8)v47_.v47 & 1) != 0) {
        v21 = v47_.v49;
      }
      else {
        v21 = (char*)&v47_.v47 + 1;
      }
      if (((unsigned __int8)v47_.v47 & 1) != 0) {
        v22 = v47_.v48;
      }
      else {
        v22 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
      }
      SpineModel_64dde0(v19, (__int64)v21, v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (((unsigned __int8)v47_.v47 & 1) != 0) {
      GameRoutine_64df20(v19, (__int64)v47_.v49, v47_.v48),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v20 = v47_.v48;
      *v19 = (__int64)v47_.v47;
      *(_QWORD*)(a1 + 16) = v20;
      *(_QWORD*)(a1 + 24) = v47_.v49;
    }
  }
  v23 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v51) {
  LABEL_67:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_94;
    }
    goto LABEL_68;
  }
  if ((*(_BYTE*)v23 & 1) != 0) {
    if ((v51[0] & 1) != 0) {
      v25 = *(_BYTE**)&v51[16];
    }
    else {
      v25 = &v51[1];
    }
    if ((v51[0] & 1) != 0) {
      v26 = *(_QWORD*)&v51[8];
    }
    else {
      v26 = (unsigned __int64)v51[0] >> 1;
    }
    SpineModel_64dde0(v23, (__int64)v25, v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_67;
  }
  if ((v51[0] & 1) != 0) {
    GameRoutine_64df20(v23, *(__int64*)&v51[16], *(unsigned __int64*)&v51[8]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_94;
    }
  }
  else {
    v24 = *(_QWORD*)&v51[8];
    *v23 = *(_QWORD*)v51;
    *(_QWORD*)(a1 + 40) = v24;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v51[16];
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_94;
    }
  }
LABEL_68:
  v27 = *(_QWORD**)(a1 + 72);
  if (v27 != nullptr) {
    v28 = fw_memory_g_heap_manager_ptr;
    do {
      v30 = v27;
      v27 = (_QWORD*)*v27;
      v31 = (_QWORD*)v30[10];
      if (v31 == v30 + 6) {
        v32 = 32;
      }
      else {
        if (v31 == nullptr) {
          goto LABEL_79;
        }
        v32 = 40;
      }
      (*(void (**)(__int64))(*v31 + v32))((__int64)v31),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_79:
      if ((v30[2] & 1) != 0 && v30[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v33),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
        v29 = 128;
      }
      else {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v29),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    } while (v27 != nullptr);
  }
  v34 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v34 != 0) {
    v35 = v34 & 7;
    if (v34 >= 8) {
      v37 = v34 & 0xFFFFFFFFFFFFFFF8LL;
      v36 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v36 + 48) = 0;
        v38 = *(_QWORD*)(a1 + 56) + 8 * v36;
        v36 += 8;
        *(_QWORD*)(v38 + 56) = 0;
      } while (v37 != v36);
    }
    else {
      v36 = 0;
    }
    if (v35 != 0) {
      v39 = 8 * v36;
      do {
        --v35;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v39) = 0;
        v39 += 8;
      } while (v35 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_94:
  if ((v51[0] & 1) != 0 && *(_QWORD*)&v51[16] != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (((unsigned __int8)v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v51[19] = 0;
  v51[0] = 36;
  v47_.v50 = &v47_.v47;
  v52 = &v47_.v47;
  *(_WORD*)&v51[17] = -30333;
  *(_QWORD*)&v51[9] = 0xE3BC83E3AD83E397LL;
  *(_QWORD*)&v51[1] = 0x83E38383E39E83E3LL;
  v47_.v47 = GameData_203b468;
  v47_.v48 = a1;
  v53 = (__int64*)v51;
  GameRoutine_1413d00((float*)(a1 + 56), v51,
                      (__int64)std___1_piecewise_construct_ptr, &v53,
                      (__int64*)&v52),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v47_.v50 == &v47_.v47) {
    v42 = 4;
    goto LABEL_108;
  }
  if (v47_.v50 != nullptr) {
    v42 = 5;
  LABEL_108:
    ((__int64 (*)(__int64))(*v47_.v50)[v42])((__int64)v47_.v50),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v51[0] & 1) != 0 && *(_QWORD*)&v51[16] != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v51[19] = 0;
  v51[0] = 36;
  v47_.v50 = &v47_.v47;
  v52 = &v47_.v47;
  *(_WORD*)&v51[17] = -30333;
  *(_QWORD*)&v51[9] = 0xE3BC83E3AD83E3A9LL;
  *(_QWORD*)&v51[1] = 0x83E3A383E3AD82E3LL;
  v47_.v47 = GameData_203b4e8;
  v47_.v48 = a1;
  v53 = (__int64*)v51;
  GameRoutine_1413d00((float*)(a1 + 56), v51,
                      (__int64)std___1_piecewise_construct_ptr, &v53,
                      (__int64*)&v52),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v47_.v50 == &v47_.v47) {
    v45 = 4;
    goto LABEL_118;
  }
  if (v47_.v50 != nullptr) {
    v45 = 5;
  LABEL_118:
    ((__int64 (*)(__int64))(*v47_.v50)[v45])((__int64)v47_.v50),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v51[0] & 1) != 0 && *(_QWORD*)&v51[16] != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
  }
  return result;
}

void TrainingSceneDiff_14299d0(__int64 a1, unsigned int a2, const char* a3)
{
  __int64 v3;
  _QWORD* v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    char* v15;
  } v13_;
  _QWORD v16[2];
  char v17;
  __int64 v18;
  struct {
    char gap56_[1];
    char v19[151];
    char v20;
    char gap209_[47];
    __int64 v21;
  } v19_;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL * a2);
  if (v3 == 0) {
    return;
  }
  v19_.v19[23] = 0;
  v19_.v19[135] = 0;
  v19_.v20 = 0;
  v19_.v21 = 0;
  v17 = 20;
  strcpy(v19_.v19, "_D");
  v18 = 0x335FAC9CE6BA9FE5LL;
  TrainingArgs_14261c0_alt1(a1, v3, a2);
  v16[0] = v13_.v13;
  v16[1] = v13_.v14;
  GameRoutine_60a020_alt1((__int64)&v17, a3);
  v19_.v20 |= 2u;
  v6 = (_QWORD*)GameData_21f4000;
  v7 = game_util_Format_alt1(GameData_1aa5e95, a2);
  v8 = strlen_alt1(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v13_.v14 = v9;
    v13_.v15 = v10;
    v13_.v13 = v11 | 1;
    goto LABEL_10;
  }
  LOBYTE(v13_.v13) = 2 * v8;
  v10 = (char*)&v13_.v13 + 1;
  if (v8 != 0) {
  LABEL_10:
    memmove_alt1((__int64)v10, (__int64)v7, v9);
  }
  v10[v9] = 0;
  SceneManager_138c000_alt1(v6, (unsigned __int8*)&v13_.v13, v3, (__int64)v16);
  if ((v13_.v13 & 1) != 0 && v13_.v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v13_.v15);
  }
  GameRoutine_a0d9a0_alt1((__int64)v16);
}

__int64 game_facility_TrainingSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    _QWORD v15[6];
    _QWORD* v16;
    __int64 v17;
    __int64 v18;
  } v15_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v15_.v16 = nullptr;
  v15_.v17 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v15_.v18 = 0;
  v2 = *(_QWORD*)(v1 + 48);
  v15_.v15[0] = game_facility_SceneManager_FacilityMapArgs_vtable;
  memset(&v15_.v15[1], 0, 40);
  v3 = *(_BYTE*)(v1 + 32);
  v4 = v1 + 33;
  if ((v3 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = v4;
  }
  v6 = game_util_Format_alt1(GameData_1ab9754, v5),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v7 = strlen_alt1(v6),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameRoutine_1389160((__int64)v15_.v15, (__int64)v6, v7),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)v15_.v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = (__int64)v15_.v16;
  v15_.v15[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v15_.v16 == &v15_.v15[2]) {
    v14 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64, __int64, __int64, __int64))(
      *v15_.v16 + v14))(v15_.v16, v8, v9, v10, v11, v12);
}

__int64 game_facility_TrainingSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_14299d0(*(_QWORD*)(v1 + 96), 0, (__int64)*GameData_2131430[0]);
  return GameRoutine_14299d0(*(_QWORD*)(v1 + 96), 1u,
                             (__int64)*GameData_2131438);
}

#pragma GCC visibility pop
