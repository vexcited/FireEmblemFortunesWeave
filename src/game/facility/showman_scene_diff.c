#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_util_Format(const char*, ...);
extern __int64 GameData_21f3ff8;
extern const char GameData_1ad066d[];
__int64 ShowmanSceneDiff_Unknown4();
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* SceneCameraWorkUpdater_14559c0(float*, unsigned __int64*, __int64,
                                       _QWORD**, __int64*);
_QWORD* SceneManager_138a920(__int64, __int64);
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__attribute__((swiftcall)) void
GameRoutine_1950100(PSEUDO_X8, __int64, int8x16_t*, __int64, unsigned int);
__attribute__((swiftcall)) void GameRoutine_1950740(PSEUDO_X8, __int64, __int64,
                                                    unsigned int);
__attribute__((swiftcall)) void ProcShowmanScene_147ab40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, _QWORD,
                                                      _QWORD);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__int64 SceneManager_138c360(_QWORD*, __int64*, __int64*, __int64*);
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 SceneManager_138e5e0(__int64, __int64, __int64, __int64, __int64,
                             __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a8af63;
extern _UNKNOWN GameData_1aa5e95;
extern _UNKNOWN GameData_1ab97ee;
extern _UNKNOWN GameData_1ad4448;
extern _UNKNOWN GameData_1adfa2d;
extern _UNKNOWN GameData_1ae37eb;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_2042810)();
extern __int64 (*GameData_2042848[])();
extern __int64 (*GameData_2042878[])();
extern __int64 (*GameData_20428f8[])();
extern __int64 (*GameData_2042978[])();
extern __int64 (*GameData_20429f8[])();
extern __int64 (*GameData_2042a78[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_1a8d218;
extern __int64 GameData_212dce8;
extern __int64 GameData_2131338[2];
extern __int64 GameData_21f4000;
extern __int64 GameData_224ada0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1aa23cb[];
extern int GameData_1bd6268;
extern int GameData_224ada8;
float game_facility_14107c0(__int64, __int64);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
void GameRoutine_19513c0(unsigned __int8*);
void GameRoutine_195ab40(__int64, __int64);
void SceneManager_138d7c0(__int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void game_facility_SceneManager_CreateMob(_QWORD*, __int64);
__n128 game_facility_ShowmanSceneDiff_Initialize(unsigned __int64 a1);
__attribute__((swiftcall)) void ShowmanSceneDiff_147baa0(PSEUDO_X8 x8_,
                                                         __int64 a1);
void ShowmanSceneDiff_147bc20(__int64 a1);
void game_facility_ShowmanSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
void game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);
__int64* game_facility_ShowmanSceneDiff_StartCameraWork(__int64* result);
__n128 game_facility_ShowmanSceneDiff_Initialize_lambda3_Invoke();
__n128 game_facility_ShowmanSceneDiff_StartCameraWork_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);
__int64 ShowmanSceneDiff_147d3c0(__int64* a1);

__n128 game_facility_ShowmanSceneDiff_Initialize(unsigned __int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  _BYTE* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  _BYTE* v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
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
  _BYTE v46[24];
  __int64 (***v47)();
  __int64* v48;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v42_.v42 = (__int64 (**)(void))0xB4A0E59285E90CLL,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = strlen(v2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v4 = v3;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v3 | 7) + 1;
    }
    v6 = (_BYTE*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)&v46[8] = v4;
    *(_QWORD*)&v46[16] = v6;
    *(_QWORD*)v46 = v7 | 1;
    goto LABEL_9;
  }
  v46[0] = 2 * v3;
  v6 = &v46[1];
  if (v3 != 0) {
  LABEL_9:
    memmove(v6, v2, v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v8 = (__int64*)(a1 + 8);
  v6[v4] = 0;
  if ((__int64 (***)(void))(a1 + 8) != &v42_.v42) {
    if ((*(_BYTE*)v8 & 1) != 0) {
      if (((unsigned __int8)v42_.v42 & 1) != 0) {
        v10 = v42_.v44;
      }
      else {
        v10 = (char*)&v42_.v42 + 1;
      }
      if (((unsigned __int8)v42_.v42 & 1) != 0) {
        v11 = v42_.v43;
      }
      else {
        v11 = (unsigned __int64)(unsigned __int8)v42_.v42 >> 1;
      }
      SpineModel_64dde0(v8, (__int64)v10, v11),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (((unsigned __int8)v42_.v42 & 1) != 0) {
      GameRoutine_64df20(v8, (__int64)v42_.v44, v42_.v43),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v9 = v42_.v43;
      *v8 = (__int64)v42_.v42;
      *(_QWORD*)(a1 + 16) = v9;
      *(_QWORD*)(a1 + 24) = v42_.v44;
    }
  }
  v12 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v46) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v12 & 1) != 0) {
    if ((v46[0] & 1) != 0) {
      v14 = *(_BYTE**)&v46[16];
    }
    else {
      v14 = &v46[1];
    }
    if ((v46[0] & 1) != 0) {
      v15 = *(_QWORD*)&v46[8];
    }
    else {
      v15 = (unsigned __int64)v46[0] >> 1;
    }
    SpineModel_64dde0(v12, (__int64)v14, v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_34;
  }
  if ((v46[0] & 1) != 0) {
    GameRoutine_64df20(v12, *(__int64*)&v46[16], *(unsigned __int64*)&v46[8]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v13 = *(_QWORD*)&v46[8];
    *v12 = *(_QWORD*)v46;
    *(_QWORD*)(a1 + 40) = v13;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v46[16];
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
LABEL_35:
  v16 = *(_QWORD**)(a1 + 72);
  while (v16 != nullptr) {
    v18 = v16;
    v16 = (_QWORD*)*v16;
    v19 = (_QWORD*)v18[10];
    if (v19 == v18 + 6) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_46;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_46:
    if ((v18[2] & 1) != 0 && v18[4] != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v21),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*v5 + 200) != 0) {
      v17 = 128;
    }
    else {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v22 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v22 != 0) {
    v23 = v22 & 7;
    if (v22 >= 8) {
      v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v24 + 48) = 0;
        v26 = *(_QWORD*)(a1 + 56) + 8 * v24;
        v24 += 8;
        *(_QWORD*)(v26 + 56) = 0;
      } while (v25 != v24);
    }
    else {
      v24 = 0;
    }
    if (v23 != 0) {
      v27 = 8 * v24;
      do {
        --v23;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v27) = 0;
        v27 += 8;
      } while (v23 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_61:
  if ((v46[0] & 1) != 0 && *(_QWORD*)&v46[16] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v28),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (((unsigned __int8)v42_.v42 & 1) != 0 && v42_.v44 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v30 = 4;
  v46[17] = 0;
  v46[0] = 32;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)&v46[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v46[1] = 0xE35FB4A0E59285E9LL;
  v42_.v42 = GameData_2042878;
  v42_.v43 = a1;
  v47 = &v42_.v42;
  v48 = (__int64*)v46;
  GameRoutine_1413d00((float*)(a1 + 56), v46,
                      (__int64)std___1_piecewise_construct_ptr, &v48,
                      (__int64*)&v47),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_74;
  }
  if (v42_.v45 != nullptr) {
    v30 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v42_.v45)[v30])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46[0] & 1) != 0 && *(_QWORD*)&v46[16] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v31),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v32 = 4;
  v33 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v33 + 28) = 0;
  *(_QWORD*)v46 = 33;
  *(_QWORD*)&v46[8] = 28;
  *(_QWORD*)&v46[16] = v33;
  v42_.v45 = &v42_.v42;
  *(_DWORD*)(v33 + 24) = -1617631347;
  *(_QWORD*)(v33 + 16) = 0x86E5B383E3A783E3LL;
  *(_QWORD*)v33 = 0xE35FB4A0E59285E9LL;
  *(_QWORD*)(v33 + 8) = 0xB782E3BC83E3A283LL;
  v42_.v42 = GameData_20428f8;
  v42_.v43 = a1;
  v47 = &v42_.v42;
  v48 = (__int64*)v46;
  GameRoutine_1413d00((float*)(a1 + 56), v46,
                      (__int64)std___1_piecewise_construct_ptr, &v48,
                      (__int64*)&v47),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_83;
  }
  if (v42_.v45 != nullptr) {
    v32 = 5;
  LABEL_83:
    ((__int64 (*)(__int64))(*v42_.v45)[v32])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46[0] & 1) != 0 && *(_QWORD*)&v46[16] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v34),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v35 = 4;
  v36 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v36 + 31) = 0;
  *(_QWORD*)v46 = 33;
  *(_QWORD*)&v46[8] = 31;
  *(_QWORD*)&v46[16] = v36;
  v42_.v45 = &v42_.v42;
  *(_QWORD*)v36 = 0xE35FB4A0E59285E9LL;
  *(_QWORD*)(v36 + 8) = 0xA983E3A183E3AB82LL;
  *(_QWORD*)(v36 + 16) = 0x82E3BC83E3AF83E3LL;
  *(_QWORD*)(v36 + 23) = 0x8BA7E58B96E9AF82LL;
  v42_.v42 = GameData_2042978;
  v42_.v43 = a1;
  v47 = &v42_.v42;
  v48 = (__int64*)v46;
  GameRoutine_1413d00((float*)(a1 + 56), v46,
                      (__int64)std___1_piecewise_construct_ptr, &v48,
                      (__int64*)&v47),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_92;
  }
  if (v42_.v45 != nullptr) {
    v35 = 5;
  LABEL_92:
    ((__int64 (*)(__int64))(*v42_.v45)[v35])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46[0] & 1) != 0 && *(_QWORD*)&v46[16] != 0) {
    v37 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v37),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v38 = 4;
  v39 = fw_memory_HeapManager_Allocate(*v5, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v39 + 28) = 0;
  *(_QWORD*)v46 = 33;
  *(_QWORD*)&v46[8] = 28;
  *(_QWORD*)&v46[16] = v39;
  v42_.v45 = &v42_.v42;
  *(_DWORD*)(v39 + 24) = -1617631302;
  *(_QWORD*)(v39 + 16) = 0x99E78883E3AF82E3LL;
  *(_QWORD*)v39 = 0xE35FB4A0E59285E9LL;
  *(_QWORD*)(v39 + 8) = 0xA782E39583E3A882LL;
  v42_.v42 = GameData_20429f8;
  v42_.v43 = a1;
  v47 = &v42_.v42;
  v48 = (__int64*)v46;
  GameRoutine_1413d00((float*)(a1 + 56), v46,
                      (__int64)std___1_piecewise_construct_ptr, &v48,
                      (__int64*)&v47),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v42_.v45 == &v42_.v42) {
    goto LABEL_101;
  }
  if (v42_.v45 != nullptr) {
    v38 = 5;
  LABEL_101:
    ((__int64 (*)(__int64))(*v42_.v45)[v38])((__int64)v42_.v45),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v46[0] & 1) != 0 && *(_QWORD*)&v46[16] != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v41 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v5 + v41);
  }
  return result;
}

__attribute__((swiftcall)) void ShowmanSceneDiff_147baa0(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12[2];
  char* v13;

  ProcShowmanScene_147ab40((void*)(v12), a1);
  if ((v12[0] & 1) != 0) {
    v3 = v13;
  }
  else {
    v3 = (char*)v12 + 1;
  }
  v4 = game_util_Format("BGM_%s", v3);
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
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = (char*)v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_13;
    }
  }
  result = memmove(v7, v4, v6);
LABEL_13:
  v10 = v12[0];
  v7[v6] = 0;
  if ((v10 & 1) != 0 && v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 ShowmanSceneDiff_Unknown4()
{
  int v0;
  __int64 v1;

  if (GameData_21f3ff8 == 0) {
    return game_util_Format(GameData_1ad066d, 1);
  }
  v0 = *(_DWORD*)(GameData_21f3ff8 + 12);
  if (v0 <= 1) {
    v0 = 1;
  }
  if (v0 >= 5) {
    v1 = 5;
  }
  else {
    v1 = (unsigned int)v0;
  }
  return game_util_Format(GameData_1ad066d, v1);
}

void ShowmanSceneDiff_147bc20(__int64 a1)
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

  *(_QWORD*)a1 = &GameData_2042810;
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
  *(_QWORD*)a1 = GameData_2042848;
  if (GameData_224ada0 == a1) {
    GameData_224ada0 = 0;
    GameData_224ada8 = 0;
  }
}

void game_facility_ShowmanSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD** v7;
  __int64 v12;
  __int64* v13;
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
  __int64 v26;
  __int64 v27;
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
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned int v49;
  _QWORD* v50;
  char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  char* v54;
  _QWORD** v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  char* v61;
  __int128 v62;
  __int64 v63;
  struct {
    __int64 v64;
    unsigned __int64 v65;
    char* v66;
    __int64 v67;
    int v68;
    char gap68_[4];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
  } v64_;
  struct {
    __int64 v78;
    unsigned __int64 v79;
  } v78_;
  struct {
    __int128 v80;
    __int64 v81;
    __int64 v82;
    __int128* v83;
    __int64 v84;
    char* v85;
    __int64 v86;
    int v87;
    char gap228_[4];
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    char v97;
    char gap305_[15];
    char v98;
    char gap321_[47];
    __int64 v99;
  } v80_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v80_.v83 = nullptr;
  v80_.v84 = 0;
  v80_.v81 = 0;
  v80_.v82 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v80_.v80 = (__typeof__(v80_.v80)){0};
  v80_.v85 = nullptr;
  v2 = *(_QWORD*)(v1 + 24);
  v78_.v78 = GameData_2131338[0] + 16;
  v78_.v79 = 0;
  v3 = *(_BYTE*)(v1 + 8);
  v4 = v1 + 9;
  if ((v3 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = v4;
  }
  v6 = strlen(v5),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1389160((__int64)&v78_.v78, v5, v6),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v7 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, (__int64)&v78_.v78),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v78_.v78 = (__int64)&game_facility_SceneManager_IMapArgs_vtable;
  if (v80_.v83 == &v80_.v80) {
    v12 = 32;
    goto LABEL_8;
  }
  if (v80_.v83 != nullptr) {
    v12 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*(_QWORD*)v80_.v83 + v12))((__int64)v80_.v83),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v78_.v78 = 0xB4A0E59285E90CLL;
  GameRoutine_19513c0((unsigned __int8*)&v78_.v78),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v78_.v78 & 1) != 0 && (_QWORD)v80_.v80 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v80_.v98 = 0;
  v80_.v99 = 0;
  LOBYTE(v80_.v80) = 20;
  strcpy((char*)&v80_.v80 + 9, "_D");
  *(_QWORD*)((char*)&v80_.v80 + 1) = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_682bc0(&v62, (__int64)&GameData_1a8d218),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  SceneCharacterAppearance_140f320((void*)(&v64_.v64), (__int64)&v62,
                                   (__int64)&GameData_1ab97ee),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v15 = *v13;
  v78_.v78 = v64_.v64;
  v78_.v79 = v64_.v65;
  v16 = fw_memory_HeapManager_Allocate(v15, 40, 16, 0),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_BYTE*)(v16 + 35) = 0;
  *(_QWORD*)&v62 = 41;
  *((_QWORD*)&v62 + 1) = 35;
  v63 = v16;
  *(_DWORD*)(v16 + 31) = -2004622461;
  *(_QWORD*)v16 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v16 + 8) = 0x5FAEBDE78D85E9A9LL;
  *(_QWORD*)(v16 + 16) = 0xE35FB4A0E59285E9LL;
  *(_QWORD*)(v16 + 24) = 0x8383E38B83E3A683LL;
  GameRoutine_195ab40((__int64)&v64_.v64, (__int64)&v62),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v23 = v64_.v69;
  v24 = v64_.v70;
  v64_.v69 = 0;
  v64_.v70 = 0;
  LODWORD(v80_.v83) = v64_.v64;
  v80_.v88 = v23;
  v80_.v89 = v24;
  v80_.v87 = v64_.v68;
  v80_.v85 = v64_.v66;
  v80_.v86 = v64_.v67;
  v25 = v64_.v73;
  v26 = v64_.v74;
  v64_.v73 = 0;
  v64_.v74 = 0;
  v80_.v92 = v25;
  v80_.v93 = v26;
  v27 = v64_.v71;
  v28 = v64_.v72;
  v64_.v71 = 0;
  v64_.v72 = 0;
  v80_.v90 = v27;
  v80_.v91 = v28;
  v29 = v64_.v75;
  v30 = v64_.v76;
  v64_.v75 = 0;
  v64_.v76 = 0;
  v80_.v94 = v29;
  v80_.v95 = v30;
  v31 = v64_.v77;
  v64_.v77 = 0;
  v80_.v96 = v31;
  v80_.v97 = 1;
  if ((v62 & 1) != 0 && v63 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v32),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v33 = *v7;
  v34 = game_util_Format_alt1((__int64)&GameData_1aa5e95, 0, v17, v18, v19, v20,
                              v21, v22, v60),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v35 = strlen(v34),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v35 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_62:
    String_60a1d0(),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v36 = v35;
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v35 | 7) + 1;
    }
    v37 = (char*)fw_memory_HeapManager_Allocate(*v13, v38, 16, 0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v64_.v65 = v36;
    v64_.v66 = v37;
    v64_.v64 = v38 | 1;
    goto LABEL_27;
  }
  LOBYTE(v64_.v64) = 2 * v35;
  v37 = (char*)&v64_.v64 + 1;
  if (v35 != 0) {
  LABEL_27:
    memmove(v37, v34, v36),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v37[v36] = 0;
  BYTE11(v62) = 0;
  LOBYTE(v62) = 20;
  *(_QWORD*)((char*)&v62 + 1) = 0xE3AC83E35F444950LL;
  *(_WORD*)((char*)&v62 + 9) = -32637;
  SceneManager_138c360(v33, &v64_.v64, (__int64*)&v62, &v78_.v78),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v62 & 1) != 0 && v63 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v39),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v64_.v64 & 1) != 0 && v64_.v66 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v40),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  GameRoutine_a0d9a0((__int64)&v78_.v78),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (GameData_21f3ff8 != 0) {
    v47 = *(_DWORD*)(GameData_21f3ff8 + 12);
    if (v47 <= 1) {
      v47 = 1;
    }
    if (v47 >= 5) {
      v47 = 5;
    }
    v48 = v47 + 1;
  }
  else {
    v48 = 2;
  }
  v49 = 1;
  v61 = (char*)&v78_.v78 + 1;
  do {
    v50 = *v7;
    v51 = game_util_Format_alt1((__int64)&GameData_1a8af63, v49, v41, v42, v43,
                                v44, v45, v46, (char)v61),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v52 = strlen(v51),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v52 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_62;
    }
    v53 = v52;
    if (v52 >= 0x17) {
      v55 = v7;
      if ((v52 | 7) == 0x17) {
        v56 = 26;
      }
      else {
        v56 = (v52 | 7) + 1;
      }
      v57 = fw_memory_HeapManager_Allocate(*v13, v56, 16, 0),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v58 = v56 | 1;
      v54 = (char*)v57;
      v78_.v79 = v53;
      *(_QWORD*)&v80_.v80 = v57;
      v7 = v55;
      v78_.v78 = v58;
    }
    else {
      v54 = v61;
      LOBYTE(v78_.v78) = 2 * v52;
      if (v52 == 0) {
        goto LABEL_56;
      }
    }
    memmove(v54, v51, v53),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_56:
    v54[v53] = 0;
    game_facility_SceneManager_CreateMob(v50, (__int64)&v78_.v78),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v78_.v78 & 1) != 0 && (_QWORD)v80_.v80 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v59),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    ++v49;
  } while (v48 != v49);
}

void game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64* v9;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned int v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  struct {
    __int64 v49[2];
    char* v50;
  } v49_;
  struct {
    __int64 v51;
    unsigned __int64 v52;
    char* v53;
  } v51_;
  struct {
    __int64 (**v54)();
    int v55;
    char gap60_[4];
    __int64 v56;
    char gap72_[8];
    __int64 (***v57)();
  } v54_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v8 = *(_QWORD*)(a1 + 8);
  v9 = (__int64*)GameData_212dce8;
  v10 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0, a3, a4, a5, a6, a7,
                             a8),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v10 != 0) {
    v17 = v10;
    ProcShowmanScene_147ab40((void*)(v49_.v49), v8),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v49_.v49[0] & 1) != 0) {
      v24 = v49_.v50;
    }
    else {
      v24 = (char*)v49_.v49 + 1;
    }
    v25 = game_util_Format_alt1((__int64)&GameData_1ad4448, (__int64)v24, v18,
                                v19, v20, v21, v22, v23, v49_.v49[0]),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v26 = strlen(v25),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_64:
      String_60a1d0(),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v27 = v26;
    if (v26 >= 0x17) {
      if ((v26 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v29,
                                                  16, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v51_.v52 = v27;
      v51_.v53 = v28;
      v51_.v51 = v29 | 1;
    }
    else {
      LOBYTE(v51_.v51) = 2 * v26;
      v28 = (char*)&v51_.v51 + 1;
      if (v26 == 0) {
      LABEL_14:
        v28[v27] = 0;
        game_facility_14107c0((__int64)&v54_.v54, (__int64)&v51_.v51),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v30 = *(_QWORD*)(v17 + 112);
        v31 = *(_QWORD*)(v17 + 120);
        if (v31 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v30, (unsigned __int8*)&v54_.v54),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            std___1___shared_weak_count___release_weak(),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v18 =
                    COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          if (((unsigned __int8)v54_.v54 & 1) == 0) {
            goto LABEL_24;
          }
        }
        else {
          GameRoutine_14127e0(v30, (unsigned __int8*)&v54_.v54),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (((unsigned __int8)v54_.v54 & 1) == 0) {
          LABEL_24:
            if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v20 = COERCE_AS(
                      __typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            if ((v49_.v49[0] & 1) != 0 && v49_.v50 != nullptr) {
              v34 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v34),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v18 = COERCE_AS(
                      __typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v20 = COERCE_AS(
                      __typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            goto LABEL_34;
          }
        }
        if (v54_.v56 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v32),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        goto LABEL_24;
      }
    }
    memmove(v28, v25, v27),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_14;
  }
LABEL_34:
  if (GameData_21f3ff8 != 0) {
    v35 = *(_DWORD*)(GameData_21f3ff8 + 12);
    if (v35 <= 1) {
      v35 = 1;
    }
    if (v35 >= 5) {
      v35 = 5;
    }
    v36 = v35 + 1;
  }
  else {
    v36 = 2;
  }
  v37 = 1;
  do {
    v38 = *v9;
    v39 = game_util_Format_alt1((__int64)&GameData_1a8af63, v37, v11, v12, v13,
                                v14, v15, v16, v49_.v49[0]),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v40 = strlen(v39),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v40 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_64;
    }
    v41 = v40;
    if (v40 >= 0x17) {
      v43 = v9;
      if ((v40 | 7) == 0x17) {
        v44 = 26;
      }
      else {
        v44 = (v40 | 7) + 1;
      }
      v45 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v44, 16, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v46 = v44 | 1;
      v42 = (char*)v45;
      v51_.v52 = v41;
      v51_.v53 = (char*)v45;
      v9 = v43;
      v51_.v51 = v46;
    LABEL_51:
      memmove(v42, v39, v41),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_52;
    }
    v42 = (char*)&v51_.v51 + 1;
    LOBYTE(v51_.v51) = 2 * v40;
    if (v40 != 0) {
      goto LABEL_51;
    }
  LABEL_52:
    v42[v41] = 0;
    if ((SceneManager_138c8e0(v38, (__int64)&v51_.v51) & 1) != 0) {
      v54_.v55 = 0;
      v54_.v54 = GameData_20330a8;
      v54_.v57 = &v54_.v54;
      SceneManager_138d7c0(v38, (__int64)&v51_.v51, (__int64)&v54_.v54),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v54_.v57 == &v54_.v54) {
        v47 = 4;
        goto LABEL_57;
      }
      if (v54_.v57 != nullptr) {
        v47 = 5;
      LABEL_57:
        ((__int64 (*)(__int64))(*v54_.v57)[v47])((__int64)v54_.v57),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v48),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    ++v37;
  } while (v36 != v37);
}

__int64* game_facility_ShowmanSceneDiff_StartCameraWork(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64* v20;
  _QWORD* v21[2];
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;

  v1 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21f4000 + 256);
    v3 = result[1];
    v4 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v1);
    if (v5 != 0) {
      if (v2 == 0) {
      LABEL_35:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return (__int64*)std___1___shared_weak_count___release_weak_alt1(v5);
        }
        return result;
      }
      ProcShowmanScene_147ab40((void*)((__int64*)v21), v3);
      if (((__int64)v21[0] & 1) != 0) {
        v6 = v22;
      }
      else {
        v6 = (char*)v21 + 1;
      }
      v7 = game_util_Format(GameData_1aa23cb, v6);
      v8 = strlen(v7);
      if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(v8);
      }
      v9 = v8;
      if (v8 >= 0x17) {
        if ((v8 | 7) == 0x17) {
          v11 = 26;
        }
        else {
          v11 = (v8 | 7) + 1;
        }
        v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v11, 16, 0);
        v18 = v9;
        v19 = v10;
        v17 = v11 | 1;
      }
      else {
        LOBYTE(v17) = 2 * v8;
        v10 = (char*)&v17 + 1;
        if (v8 == 0) {
          goto LABEL_16;
        }
      }
      memmove(v10, v7, v9);
    LABEL_16:
      v10[v9] = 0;
      result = (game_facility_144f120((void*)(&v23), v2, &v17), (void*)(&v23));
      if ((v17 & 1) != 0 && v19 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
      }
      if (((__int64)v21[0] & 1) != 0 && v22 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
      }
      v14 = v23;
      if (v23 == 0) {
        goto LABEL_32;
      }
      v17 = (__int64)GameData_2042a78;
      v18 = v3;
      v20 = &v17;
      v25 = game_HashString(&GameData_1adfa2d);
      v26 = &v17;
      v21[0] = &v25;
      SceneCameraWorkUpdater_14559c0(
          (float*)(v14 + 144), (unsigned __int64*)&v25,
          (__int64)std___1_piecewise_construct_ptr, v21, (__int64*)&v26);
      result = v20;
      if (v20 == &v17) {
        v15 = 32;
      }
      else {
        if (v20 == nullptr) {
        LABEL_32:
          v16 = v24;
          if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            result =
                (__int64*)std___1___shared_weak_count___release_weak_alt1(v16);
          }
          goto LABEL_35;
        }
        v15 = 40;
      }
      result = (__int64*)(*(__int64 (**)(__int64))(*v20 + v15))((__int64)v20);
      goto LABEL_32;
    }
  }
  return result;
}

__n128 game_facility_ShowmanSceneDiff_Initialize_lambda3_Invoke()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64* v7;
    __int64 v8;
  } v7_;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    int8x16_t v11;
    __int64 v12;
  } v11_;
  _BYTE v13[24];

  LANES128(v11_.v11).n128_u8[0] = 0;
  LOBYTE(v11_.v12) = 0;
  LOBYTE(v7_.v7) = 0;
  BYTE4(v7_.v7) = 0;
  *(_QWORD*)v13 = 0x5FB4A0E59285E928LL;
  *(_QWORD*)&v13[8] = 0xE75F90ADE592B2E7LL;
  *(_QWORD*)&v13[16] = 0xA29DE9BB94LL;
  GameRoutine_1950100((void*)(&v9_.v9), (__int64)v13, &v11_.v11,
                      (__int64)&v7_.v7, 0);
  v0 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak();
  }
  v1 = fw_memory_g_heap_manager_ptr;
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_BYTE*)(v2 + 26) = 0;
  v13[20] = 0;
  LANES128(v11_.v11).n128_u64[1] = 26;
  v11_.v12 = v2;
  LANES128(v11_.v11).n128_u64[0] = 33;
  *(_WORD*)(v2 + 24) = -30589;
  *(_QWORD*)v2 = 0xE75FB4A0E59285E9LL;
  *(_QWORD*)(v2 + 8) = 0x83E35F90ADE592B2LL;
  *(_QWORD*)(v2 + 16) = 0xE38383E38B83E3A6LL;
  v13[0] = 38;
  *(_DWORD*)&v13[16] = -2004622461;
  *(_QWORD*)&v13[9] = 0x8383E38B83E3A683LL;
  *(_QWORD*)&v13[1] = 0xE35FB4A0E59285E9LL;
  result = X8CALL_V0(__n128,
                     GameRoutine_1950740((void*)(&v7_.v7), (__int64)&v11_.v11,
                                         (__int64)v13, 0));
  v4 = v7_.v8;
  if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
        v4, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak();
    if ((v13[0] & 1) == 0) {
      goto LABEL_12;
    }
  }
  else if ((v13[0] & 1) == 0) {
    goto LABEL_12;
  }
  if (*(_QWORD*)&v13[16] != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v5);
  }
LABEL_12:
  if ((LANES128(v11_.v11).n128_u8[0] & 1) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v6);
  }
  return result;
}

__n128 game_facility_ShowmanSceneDiff_StartCameraWork_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __n128 result;
  __int64 v20;
  char v21;
  _BYTE v22[16];
  struct {
    _QWORD v23[2];
    char* v24;
  } v23_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_BYTE*)(v8 + 32);
  if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
    v10 = *(_QWORD*)(v8 + 24);
  }
  else {
    v10 = v8 + 9;
  }
  v11 = *(_QWORD*)(v8 + 48);
  v12 = v8 + 33;
  if ((v9 & 1) != 0) {
    v13 = v11;
  }
  else {
    v13 = v12;
  }
  v14 = game_util_Format_alt1((__int64)&GameData_1ae37eb, v10, v13, a4, a5, a6,
                              a7, a8, v21),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = strlen(v14),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v23_.v23[1] = v16;
    v23_.v24 = v17;
    v23_.v23[0] = v18 | 1;
  }
  else {
    LOBYTE(v23_.v23[0]) = 2 * v15;
    v17 = (char*)v23_.v23 + 1;
    if (v15 == 0) {
      goto LABEL_16;
    }
  }
  memmove(v17, v14, v16),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_16:
  v17[v16] = 0;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v22), (__int64)v23_.v23, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  return result;
}

__int64 ShowmanSceneDiff_147d3c0(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int* v29;
  char* v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int* v47;
  int v48;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      20, 16, 0);
  v4 = (char*)(v3 + 20);
  v5 = (char*)v3;
  *(_QWORD*)v3 = 0x100000000LL;
  *(_QWORD*)(v3 + 8) = 0x300000002LL;
  *(_DWORD*)(v3 + 16) = 4;
  v7 = *a1;
  v6 = a1[1];
  v8 = v6 - *a1;
  if (v6 == *a1) {
    v10 = 0;
    v9 = 0;
    v14 = 20;
  }
  else {
    if (v8 < 0) {
      GameRoutine_6e5a20();
    }
    v9 = fw_memory_HeapManager_Allocate(*v2, v6 - *a1, 16, 0);
    memcpy(v9, v7, v8);
    v10 = fw_memory_HeapManager_Allocate(*v2, v8, 16, 0);
    memcpy(v10, v7, v8);
    v11 = *(_DWORD*)v5;
    v12 = 0;
    do {
      v13 = *(_DWORD*)(v10 + v12);
      if (v11 == v13) {
        v14 = 0;
        goto LABEL_21;
      }
      v12 += 4;
    } while (v8 != v12);
    v14 = 4;
    v15 = 0;
    while (*((_DWORD*)v5 + 1) != *(_DWORD*)(v10 + v15)) {
      v15 += 4;
      if (v8 == v15) {
        v14 = 8;
        v16 = 0;
        while (*((_DWORD*)v5 + 2) != *(_DWORD*)(v10 + v16)) {
          v16 += 4;
          if (v8 == v16) {
            v14 = 12;
            v17 = 0;
            while (*((_DWORD*)v5 + 3) != *(_DWORD*)(v10 + v17)) {
              v17 += 4;
              if (v8 == v17) {
                v14 = 16;
                v18 = 0;
                while (*((_DWORD*)v5 + 4) != *(_DWORD*)(v10 + v18)) {
                  v18 += 4;
                  if (v8 == v18) {
                    goto LABEL_28;
                  }
                }
                goto LABEL_23;
              }
            }
            goto LABEL_21;
          }
        }
        break;
      }
    }
  LABEL_21:
    v19 = &v5[v14];
    if (v11 != v13) {
      v42 = 0;
      v43 = ((unsigned __int8)((unsigned int)(12 - v14) >> 2) + 1) & 3;
      do {
        v45 = *((_DWORD*)v19 + 1);
        v19 += 4;
        v44 = v45;
        v46 = v8;
        v47 = (int*)v10;
        while (1) {
          v48 = *v47++;
          if (v44 == v48) {
            break;
          }
          v46 -= 4;
          if (v46 == 0) {
            *(_DWORD*)&v5[v14] = v44;
            v14 += 4;
            break;
          }
        }
        ++v42;
      } while (v42 != v43);
    }
    if (v11 == v13) {
      do {
        v30 = v19;
        v31 = *((_DWORD*)v19 + 1);
        v32 = 0;
        while (v31 != *(_DWORD*)(v10 + v32)) {
          v32 += 4;
          if (v8 == v32) {
            *(_DWORD*)&v5[v14] = v31;
            v14 += 4;
            break;
          }
        }
        v33 = *((_DWORD*)v30 + 2);
        v34 = 0;
        while (v33 != *(_DWORD*)(v10 + v34)) {
          v34 += 4;
          if (v8 == v34) {
            *(_DWORD*)&v5[v14] = v33;
            v14 += 4;
            break;
          }
        }
        v35 = *((_DWORD*)v30 + 3);
        v36 = 0;
        while (v35 != *(_DWORD*)(v10 + v36)) {
          v36 += 4;
          if (v8 == v36) {
            *(_DWORD*)&v5[v14] = v35;
            v14 += 4;
            break;
          }
        }
        v19 = v30 + 16;
        v37 = *((_DWORD*)v30 + 4);
        v38 = 0;
        while (v37 != *(_DWORD*)(v10 + v38)) {
          v38 += 4;
          if (v8 == v38) {
            *(_DWORD*)&v5[v14] = v37;
            v14 += 4;
            break;
          }
        }
      } while (v30 != v5);
    }
  }
LABEL_23:
  if (v14 != 20) {
    v20 = &v5[v14];
    if (v4 - v5 != 20) {
      memmove(v20, v4, 20 - (v4 - v5));
    }
    v4 = &v20[20 - (v4 - v5)];
  }
  if (v10 != 0) {
  LABEL_28:
    v21 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v21);
  }
  if (v9 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v22);
  }
  if (v4 == v5) {
    v29 = &GameData_1bd6268;
  }
  else {
    nn_os_LockMutex(&game_g_random_mutex);
    v23 = game_map_MapRandom_instance__ptr[0];
    v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v26 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v23 + 1) = v24;
    v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v25;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v27;
    v28 = v27 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v29 = (int*)&v5[4 * (v28 % (int)((unsigned __int64)(v4 - v5) >> 2))];
  }
  v39 = *v29;
  v40 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v40 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v40);
  return v39;
}

#pragma GCC visibility pop
