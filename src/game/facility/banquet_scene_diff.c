#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_22445e8;
extern __int64 GameData_22445f8;
extern __int64 GameData_2244608;
__int64 BanquetSceneDiff_Unknown4(__int64 a1);
__int64 GameRoutine_149efe0(_QWORD, _QWORD);
extern __int64 GameData_226bb60;
extern __int64 game_ProcGameSkipView_instance_;
__int64 game_facility_BanquetSceneDiff_StartCameraWork_lambda0_Invoke();
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, _QWORD,
                                                      _QWORD);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneCameraWorkUpdater_14559c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_1401690(_QWORD, _QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(_QWORD);
__int64 game_facility_14107c0(__int64, __int64);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1aa9dfb;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ac8703;
extern __int64 (*GameData_203b7e0)();
extern __int64 (*GameData_203b818[])();
extern __int64 (*GameData_203b848[])();
extern __int64 (*GameData_203b8c8[])();
extern __int64 (*GameData_203b948[])();
extern __int64 (*GameData_203b9c8[])();
extern __int64 (*GameData_203ba48[])();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 GameData_212dce8;
extern __int64 GameData_21f4000;
extern __int64 GameData_22445e0;
extern __int64 GameData_2244618;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1aa23cb[];
extern char GameData_1aa5e95[];
extern char GameData_1aa5ee6[];
extern char GameData_1afe536[];
extern int GameData_2244610;
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__n128 game_facility_BanquetSceneDiff_Initialize(unsigned __int64 a1,
                                                 __int64 a2);
__attribute__((swiftcall)) void BanquetSceneDiff_142bfb0(PSEUDO_X8 x8_,
                                                         __int64 a1);
void BanquetSceneDiff_142c160(__int64 a1);
__int64 game_facility_BanquetSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
__int64 game_facility_BanquetSceneDiff_Initialize_lambda2_Invoke(__int64 a1);
__int64* game_facility_BanquetSceneDiff_StartCameraWork(__int64* result);

__n128 game_facility_BanquetSceneDiff_Initialize(unsigned __int64 a1,
                                                 __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
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
  __n128 result;
  __int64 v41;
  struct {
    __int64 (**v42)();
    unsigned __int64 v43;
    char* v44;
    char gap24_[8];
    __int64 (***v45)();
  } v42_;
  __int128 v46;
  char* v47;
  __int64 (***v48)();
  __int128* v49;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  v42_.v42 = (__int64 (**)(void))0xB4AEE597A5E90CLL,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *((_QWORD*)&v46 + 1) = v5;
    v47 = v7;
    *(_QWORD*)&v46 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v46) = 2 * v4;
  v7 = (char*)&v46 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove(v7, v3, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v9 = (__int64*)(a1 + 8);
  v7[v5] = 0;
  if ((__int64 (***)(void))(a1 + 8) != &v42_.v42) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if (((unsigned __int8)v42_.v42 & 1) != 0) {
        v11 = v42_.v44;
      }
      else {
        v11 = (char*)&v42_.v42 + 1;
      }
      if (((unsigned __int8)v42_.v42 & 1) != 0) {
        v12 = v42_.v43;
      }
      else {
        v12 = (unsigned __int64)(unsigned __int8)v42_.v42 >> 1;
      }
      SpineModel_64dde0(v9, (__int64)v11, v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (((unsigned __int8)v42_.v42 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v42_.v44, v42_.v43),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v10 = v42_.v43;
      *v9 = (__int64)v42_.v42;
      *(_QWORD*)(a1 + 16) = v10;
      *(_QWORD*)(a1 + 24) = v42_.v44;
    }
  }
  v13 = (__int64*)(a1 + 32);
  if ((__int128*)(a1 + 32) == &v46) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v13 & 1) != 0) {
    if ((v46 & 1) != 0) {
      v15 = v47;
    }
    else {
      v15 = (char*)&v46 + 1;
    }
    if ((v46 & 1) != 0) {
      v16 = *((_QWORD*)&v46 + 1);
    }
    else {
      v16 = (unsigned __int64)(unsigned __int8)v46 >> 1;
    }
    SpineModel_64dde0(v13, (__int64)v15, v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_34;
  }
  if ((v46 & 1) != 0) {
    GameRoutine_64df20(v13, (__int64)v47, *((unsigned __int64*)&v46 + 1)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v14 = *((_QWORD*)&v46 + 1);
    *v13 = v46;
    *(_QWORD*)(a1 + 40) = v14;
    *(_QWORD*)(a1 + 48) = v47;
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
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (((unsigned __int8)v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v30),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v46) = 18;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)((char*)&v46 + 1) = 0x83E3BC83E3AD83E3LL;
  *(_WORD*)((char*)&v46 + 9) = 137;
  v42_.v42 = GameData_203b848;
  v42_.v43 = a1;
  v48 = &v42_.v42;
  v49 = &v46;
  GameRoutine_1413d00((float*)(a1 + 56), (unsigned __int8*)&v46,
                      (__int64)std___1_piecewise_construct_ptr, (__int64**)&v49,
                      (__int64*)&v48),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    v31 = 4;
    goto LABEL_75;
  }
  if (v42_.v45 != nullptr) {
    v31 = 5;
  LABEL_75:
    ((__int64 (*)(__int64))(*v42_.v45)[v31])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v32),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v46) = 18;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)((char*)&v46 + 1) = 0x89E58BA7E58B96E9LL;
  *(_WORD*)((char*)&v46 + 9) = 141;
  v42_.v42 = GameData_203b8c8;
  v42_.v43 = a1;
  v48 = &v42_.v42;
  v49 = &v46;
  GameRoutine_1413d00((float*)(a1 + 56), (unsigned __int8*)&v46,
                      (__int64)std___1_piecewise_construct_ptr, (__int64**)&v49,
                      (__int64*)&v48),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    v33 = 4;
    goto LABEL_85;
  }
  if (v42_.v45 != nullptr) {
    v33 = 5;
  LABEL_85:
    ((__int64 (*)(__int64))(*v42_.v45)[v33])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v34),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v35 = 4;
  v36 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v36 + 30) = 0;
  *(_QWORD*)&v46 = 33;
  *((_QWORD*)&v46 + 1) = 30;
  v47 = (char*)v36;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)v36 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v36 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v36 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v36 + 22) = 0x9F94E78D86E5B383LL;
  v42_.v42 = GameData_203b948;
  v42_.v43 = a1;
  v48 = &v42_.v42;
  v49 = &v46;
  GameRoutine_1413d00((float*)(a1 + 56), (unsigned __int8*)&v46,
                      (__int64)std___1_piecewise_construct_ptr, (__int64**)&v49,
                      (__int64*)&v48),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_94;
  }
  if (v42_.v45 != nullptr) {
    v35 = 5;
  LABEL_94:
    ((__int64 (*)(__int64))(*v42_.v45)[v35])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v37),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v38 = 4;
  v39 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v39 + 24) = 0;
  *(_QWORD*)&v46 = 33;
  *((_QWORD*)&v46 + 1) = 24;
  v47 = (char*)v39;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)(v39 + 16) = 0x8BA7E58B96E9AF82LL;
  *(_QWORD*)v39 = 0x83E3A183E3AB82E3LL;
  *(_QWORD*)(v39 + 8) = 0xE3BC83E3AF83E3A9LL;
  v42_.v42 = GameData_203b9c8;
  v42_.v43 = a1;
  v48 = &v42_.v42;
  v49 = &v46;
  GameRoutine_1413d00((float*)(a1 + 56), (unsigned __int8*)&v46,
                      (__int64)std___1_piecewise_construct_ptr, (__int64**)&v49,
                      (__int64*)&v48),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_103;
  }
  if (v42_.v45 != nullptr) {
    v38 = 5;
  LABEL_103:
    ((__int64 (*)(__int64))(*v42_.v45)[v38])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46 & 1) != 0 && v47 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v41 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v41);
  }
  return result;
}

__attribute__((swiftcall)) void BanquetSceneDiff_142bfb0(PSEUDO_X8 x8_,
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

__int64 BanquetSceneDiff_Unknown4(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8LL) - **(_QWORD**)(a1 + 96);
  v2 = v1 & 0x7FFFFFFF8LL;
  if ((int)(v1 >> 3) >= 4) {
    v3 = &GameData_2244608;
  }
  else {
    v3 = &GameData_22445f8;
  }
  if (v2 == 8) {
    v3 = &GameData_22445e8;
  }
  return *v3;
}

void BanquetSceneDiff_142c160(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_QWORD*)a1 = &GameData_203b7e0;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 80) != 0) {
    v3 = *(_QWORD**)(a1 + 72);
    while (v3 != nullptr) {
      v5 = v3;
      v3 = (_QWORD*)*v3;
      v6 = (_QWORD*)v5[10];
      if (v6 == v5 + 6) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((v5[2] & 1) != 0 && v5[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
    }
    v9 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 72) = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11 + 48) = 0;
          v13 = *(_QWORD*)(a1 + 56) + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*(_QWORD*)(a1 + 56) + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    *(_QWORD*)(a1 + 80) = 0;
  }
  v15 = *(_QWORD**)(a1 + 72);
  while (v15 != nullptr) {
    v17 = v15;
    v15 = (_QWORD*)*v15;
    v18 = (_QWORD*)v17[10];
    if (v18 == v17 + 6) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_39;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
  LABEL_39:
    if ((v17[2] & 1) != 0 && v17[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v20 = 128;
      }
      else {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v20);
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v16 = 128;
    }
    else {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16);
  }
  v21 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v21 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v22);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0 && *(_QWORD*)(a1 + 48) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v23);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v24);
  }
  *(_QWORD*)a1 = GameData_203b818;
  if (GameData_2244618 == a1) {
    GameData_2244618 = 0;
    GameData_2244610 = 0;
  }
}

__int64 game_facility_BanquetSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 result;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (**v29)();
  unsigned __int64 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  __int128* v34;
  __int64 v35;
  __int64 v36;
  char v37;
  char v38;
  __int64 v39;

  v34 = nullptr;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v31 = (__typeof__(v31)){0};
  v36 = 0;
  v29 = game_facility_SceneManager_FacilityMapArgs_vtable;
  v30 = 0;
  v2 = game_util_Format(
      GameData_1aa5ee6,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 32LL) + 32LL));
  v3 = strlen(v2);
  GameRoutine_1389160(&v29, v2, v3);
  LOBYTE(v30) = *(_BYTE*)(*(_QWORD*)(v1 + 96) + 40LL);
  v4 = (_QWORD*)GameData_212dce8;
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, &v29);
  result = (__int64)v34;
  v29 = &game_facility_SceneManager_IMapArgs_vtable;
  if (v34 == &v31) {
    v6 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_6;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + v6))((__int64)v34);
LABEL_6:
  v7 = *(__int64**)(v1 + 96);
  v8 = *v7;
  if ((int)((unsigned __int64)(v7[1] - *v7) >> 3) >= 1) {
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(v8 + 8 * v9);
      if (v10 != 0) {
        break;
      }
    LABEL_9:
      if (++v9 >= (int)((unsigned __int64)(v7[1] - v8) >> 3)) {
        return result;
      }
    }
    v29 = nullptr;
    v30 = 0;
    LOBYTE(v31) = 20;
    LOBYTE(v34) = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    strcpy((char*)&v31 + 9, "_D");
    *(_QWORD*)((char*)&v31 + 1) = 0x335FAC9CE6BA9FE5LL;
    v28 = *(_QWORD*)(v10 + 392);
    SceneCharacterAppearance_140f320((void*)(&v25), (__int64)&v28,
                                     (__int64)&GameData_1aa9dfb);
    v11 = v25;
    v12 = v26;
    v13 = v30;
    v25 = 0;
    v26 = 0;
    v29 = (__int64 (**)())v11;
    v30 = v12;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      v14 = v26;
      if (v26 == 0) {
        goto LABEL_17;
      }
    }
    else {
      v14 = v26;
      if (v26 == 0) {
        goto LABEL_17;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  LABEL_17:
    v15 = *v4;
    v16 = game_util_Format(GameData_1aa5e95, (unsigned int)v9);
    v17 = strlen(v16);
    if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(v17);
    }
    v18 = v17;
    if (v17 >= 0x17) {
      v20 = v4;
      if ((v17 | 7) == 0x17) {
        v21 = 26;
      }
      else {
        v21 = (v17 | 7) + 1;
      }
      v22 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v21,
                                                16, 0);
      v23 = v21 | 1;
      v19 = (char*)v22;
      v26 = v18;
      v27 = v22;
      v4 = v20;
      v25 = v23;
    }
    else {
      v19 = (char*)&v25 + 1;
      LOBYTE(v25) = 2 * v17;
      if (v17 == 0) {
      LABEL_26:
        v19[v18] = 0;
        SceneManager_138c000(v15, &v25, v10, &v29);
        if ((v25 & 1) != 0 && v27 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
        }
        result = GameRoutine_a0d9a0(&v29);
        v7 = *(__int64**)(v1 + 96);
        v8 = *v7;
        goto LABEL_9;
      }
    }
    memmove(v19, v16, v18);
    goto LABEL_26;
  }
  return result;
}

__int64 game_facility_BanquetSceneDiff_Initialize_lambda2_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  char* v6;
  _QWORD* v7;
  __int64 result;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  __int64 v29;
  __int64 v30[2];
  char* v31;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v2 = *(_QWORD*)(v1 + 48);
  }
  else {
    v2 = v1 + 33;
  }
  v3 = game_HashString(v2);
  v4 = 0;
  v5 = GameData_22445e0;
  v6 = (char*)v30 + 1;
  v7 = (_QWORD*)GameData_212dce8;
  v27 = v1;
  do {
    result = SceneManager_138e5e0(*v7, v4);
    if (result == 0) {
      break;
    }
    v9 = result;
    BanquetSceneDiff_142bfb0((void*)(v30), v1);
    if ((v30[0] & 1) != 0) {
      v10 = v31;
    }
    else {
      v10 = v6;
    }
    v11 = game_util_Format(GameData_1afe536, v10, v4);
    if ((v30[0] & 1) != 0 && v31 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    }
    v13 = strlen(v11);
    if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1(v13);
    }
    v14 = v13;
    if (v13 >= 0x17) {
      v16 = v6;
      v17 = v5;
      v18 = v3;
      v19 = v7;
      if ((v13 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v13 | 7) + 1;
      }
      v21 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
      v22 = v20 | 1;
      v7 = v19;
      v3 = v18;
      v5 = v17;
      v6 = v16;
      v1 = v27;
      v15 = (char*)v21;
      v28[1] = v14;
      v29 = v21;
      v28[0] = v22;
    LABEL_23:
      memmove(v15, v11, v14);
      goto LABEL_24;
    }
    v15 = (char*)v28 + 1;
    LOBYTE(v28[0]) = 2 * v13;
    if (v13 != 0) {
      goto LABEL_23;
    }
  LABEL_24:
    v15[v14] = 0;
    game_facility_14107c0((__int64)v30, (__int64)v28);
    v23 = *(_QWORD*)(v9 + 112);
    v24 = *(_QWORD*)(v9 + 120);
    if (v24 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_14127e0(v23, v30);
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        result = std___1___shared_weak_count___release_weak(v24);
      }
      if ((v30[0] & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_30:
      if (v31 != nullptr) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
      }
      goto LABEL_34;
    }
    result = GameRoutine_14127e0(v23, v30);
    if ((v30[0] & 1) != 0) {
      goto LABEL_30;
    }
  LABEL_34:
    if ((v28[0] & 1) != 0 && v29 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
    }
    if (v3 != v5) {
      result = SceneCharacter_1401690(v9, 0);
    }
    ++v4;
  } while (v4 != 8);
  return result;
}

__int64* game_facility_BanquetSceneDiff_StartCameraWork(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17[2];
  char* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;

  v1 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21f4000 + 256);
    v3 = result[1];
    v4 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = (__int64*)std___1___shared_weak_count___release_weak(v1);
    if (v5 != 0) {
      if (v2 == 0) {
      LABEL_35:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return (__int64*)std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      BanquetSceneDiff_142bfb0((void*)(v17), v3);
      if ((v17[0] & 1) != 0) {
        v6 = v18;
      }
      else {
        v6 = (char*)v17 + 1;
      }
      v7 = game_util_Format(GameData_1aa23cb, v6);
      if ((v17[0] & 1) != 0 && v18 != nullptr) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
      }
      v9 = strlen(v7);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(v9);
      }
      v10 = v9;
      if (v9 >= 0x17) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v12, 16, 0);
        v17[1] = v10;
        v18 = v11;
        v17[0] = v12 | 1;
      }
      else {
        LOBYTE(v17[0]) = 2 * v9;
        v11 = (char*)v17 + 1;
        if (v9 == 0) {
          goto LABEL_21;
        }
      }
      memmove(v11, v7, v10);
    LABEL_21:
      v11[v10] = 0;
      result = (game_facility_144f120((void*)(&v20), v2, v17), (void*)(&v20));
      if ((v17[0] & 1) != 0 && v18 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      }
      v14 = v20;
      if (v20 == 0) {
        goto LABEL_32;
      }
      v17[0] = (__int64)GameData_203ba48;
      v19 = v17;
      v22 = game_HashString(&GameData_1ac8703);
      v23 = v17;
      v24 = &v22;
      SceneCameraWorkUpdater_14559c0(
          v14 + 144, &v22, std___1_piecewise_construct_ptr, &v24, &v23);
      result = v19;
      if (v19 == v17) {
        v15 = 32;
      }
      else {
        if (v19 == nullptr) {
        LABEL_32:
          v16 = v21;
          if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result = (__int64*)std___1___shared_weak_count___release_weak(v16);
          }
          goto LABEL_35;
        }
        v15 = 40;
      }
      result = (__int64*)(*(__int64 (**)(__int64))(*v19 + v15))((__int64)v19);
      goto LABEL_32;
    }
  }
  return result;
}

__int64 game_facility_BanquetSceneDiff_StartCameraWork_lambda0_Invoke()
{
  __int64 v0;
  int v1;
  int v2;
  __int64 result;

  v0 = GameData_226bb60;
  if (GameData_226bb60 != 0 && (*(_BYTE*)(GameData_226bb60 + 232) & 1) == 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v2 = 2)
             : (v2 = 3),
         (v2 & v1) != 0)) {
      result = GameRoutine_149efe0(GameData_226bb60, GameData_226bb60 + 184);
      *(_BYTE*)(v0 + 232) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
