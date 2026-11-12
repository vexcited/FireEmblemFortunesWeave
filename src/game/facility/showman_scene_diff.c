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
void game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7,
    __int64
        a8) __asm__("game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke");
__int64* game_facility_ShowmanSceneDiff_StartCameraWork(__int64* result);
__n128 game_facility_ShowmanSceneDiff_Initialize_lambda3_Invoke();
__n128 game_facility_ShowmanSceneDiff_StartCameraWork_lambda0_Invoke_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8) __asm__("game_facility_ShowmanSceneDiff_"
                                    "StartCameraWork_lambda0_Invoke");
__int64 ShowmanSceneDiff_147d3c0(__int64* a1);
__int64 SceneManager_138c360_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c360");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
__int64 game_facility_14107c0_alt1(__int64,
                                   __int64) __asm__("game_facility_14107c0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
extern char GameData_1a8af63_alt1[] __asm__("GameData_1a8af63");
extern char GameData_1aa5e95_alt1[] __asm__("GameData_1aa5e95");
extern char GameData_1ad4448_alt1[] __asm__("GameData_1ad4448");
extern const char GameData_1ae37eb_alt1[] __asm__("GameData_1ae37eb");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void SceneManager_138a920_alt1(__int64,
                               __int64) __asm__("SceneManager_138a920");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke(__int64 a1);
void game_facility_ShowmanSceneDiff_StartCameraWork_lambda0_Invoke(__int64 a1);

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
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    char* v13;
  } v12_;

  ProcShowmanScene_147ab40((void*)(v12_.v12), a1);
  if ((v12_.v12[0] & 1) != 0) {
    v3 = v12_.v13;
  }
  else {
    v3 = (char*)v12_.v12 + 1;
  }
  v4 = game_util_Format_alt2("BGM_%s", v3);
  v5 = strlen_alt1(v4);
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
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a2 = 2 * v5;
    v7 = (__int64)a2 + 1;
    if (v5 == 0) {
      goto LABEL_13;
    }
  }
  memmove_alt1(v7, (__int64)v4, v6);
LABEL_13:
  v10 = v12_.v12[0];
  *(_BYTE*)(v7 + v6) = 0;
  if ((v10 & 1) != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
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
  const char* v2;
  char v3;
  const char* v4;
  const char* v5;
  unsigned __int64 v6;
  _QWORD** v7;
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
  _QWORD* v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  unsigned int v33;
  _QWORD* v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  _QWORD** v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int128 v44;
  __int64 v45;
  struct {
    __int64 v46;
    unsigned __int64 v47;
    char* v48;
    __int64 v49;
    int v50;
    char gap68_[4];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v46_;
  struct {
    __int64 v60;
    unsigned __int64 v61;
  } v60_;
  struct {
    __int128 v62;
    __int64 v63;
    __int64 v64;
    __int128* v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    int v69;
    char gap228_[4];
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    char v79;
    char gap305_[15];
    char v80;
    char gap321_[47];
    __int64 v81;
  } v62_;

  v62_.v65 = nullptr;
  v62_.v66 = 0;
  v62_.v63 = 0;
  v62_.v64 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v62_.v62 = (__typeof__(v62_.v62)){0};
  v62_.v67 = 0;
  v2 = *(const char**)(v1 + 24);
  v60_.v60 = GameData_2131338[0] + 16;
  v60_.v61 = 0;
  v3 = *(_BYTE*)(v1 + 8);
  v4 = (const char*)(v1 + 9);
  if ((v3 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = v4;
  }
  v6 = strlen_alt1(v5);
  GameRoutine_1389160((__int64)&v60_.v60, (__int64)v5, v6);
  v7 = (_QWORD**)GameData_212dce8;
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v60_.v60);
  v60_.v60 = (__int64)&game_facility_SceneManager_IMapArgs_vtable;
  if (v62_.v65 == &v62_.v62) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v62_.v65 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*(_QWORD*)v62_.v65 + v8))((__int64)v62_.v65);
  }
  v60_.v60 = 0xB4A0E59285E90CLL;
  GameRoutine_19513c0((unsigned __int8*)&v60_.v60);
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v60_.v60 & 1) != 0 && (_QWORD)v62_.v62 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v62_.v62);
  }
  v62_.v80 = 0;
  v62_.v81 = 0;
  LOBYTE(v62_.v62) = 20;
  strcpy((char*)&v62_.v62 + 9, "_D");
  *(_QWORD*)((char*)&v62_.v62 + 1) = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_682bc0(&v44, (__int64)&GameData_1a8d218);
  SceneCharacterAppearance_140f320((void*)(&v46_.v46), (__int64)&v44,
                                   (__int64)&GameData_1ab97ee);
  v11 = *v9;
  v60_.v60 = v46_.v46;
  v60_.v61 = v46_.v47;
  v12 = fw_memory_HeapManager_Allocate(v11, 40, 16, 0);
  *(_BYTE*)(v12 + 35) = 0;
  *(_QWORD*)&v44 = 41;
  *((_QWORD*)&v44 + 1) = 35;
  v45 = v12;
  *(_DWORD*)(v12 + 31) = -2004622461;
  *(_QWORD*)v12 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v12 + 8) = 0x5FAEBDE78D85E9A9LL;
  *(_QWORD*)(v12 + 16) = 0xE35FB4A0E59285E9LL;
  *(_QWORD*)(v12 + 24) = 0x8383E38B83E3A683LL;
  GameRoutine_195ab40((__int64)&v46_.v46, (__int64)&v44);
  v13 = v46_.v51;
  v14 = v46_.v52;
  v46_.v51 = 0;
  v46_.v52 = 0;
  LODWORD(v62_.v65) = v46_.v46;
  v62_.v70 = v13;
  v62_.v71 = v14;
  v62_.v69 = v46_.v50;
  v62_.v67 = (__int64)v46_.v48;
  v62_.v68 = v46_.v49;
  v15 = v46_.v55;
  v16 = v46_.v56;
  v46_.v55 = 0;
  v46_.v56 = 0;
  v62_.v74 = v15;
  v62_.v75 = v16;
  v17 = v46_.v53;
  v18 = v46_.v54;
  v46_.v53 = 0;
  v46_.v54 = 0;
  v62_.v72 = v17;
  v62_.v73 = v18;
  v19 = v46_.v57;
  v20 = v46_.v58;
  v46_.v57 = 0;
  v46_.v58 = 0;
  v62_.v76 = v19;
  v62_.v77 = v20;
  v21 = v46_.v59;
  v46_.v59 = 0;
  v62_.v78 = v21;
  v62_.v79 = 1;
  if ((v44 & 1) != 0 && v45 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v9 + v22, v45);
  }
  v23 = *v7;
  v24 = game_util_Format_alt2(GameData_1aa5e95_alt1, 0);
  v25 = strlen_alt1(v24);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_62:
    String_60a1d0();
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(*v9, v28, 16, 0);
    v46_.v47 = v26;
    v46_.v48 = v27;
    v46_.v46 = v28 | 1;
    goto LABEL_27;
  }
  LOBYTE(v46_.v46) = 2 * v25;
  v27 = (char*)&v46_.v46 + 1;
  if (v25 != 0) {
  LABEL_27:
    memmove_alt1((__int64)v27, (__int64)v24, v26);
  }
  v27[v26] = 0;
  BYTE11(v44) = 0;
  LOBYTE(v44) = 20;
  *(_QWORD*)((char*)&v44 + 1) = 0xE3AC83E35F444950LL;
  *(_WORD*)((char*)&v44 + 9) = -32637;
  SceneManager_138c360_alt1(v23, (unsigned __int8*)&v46_.v46, (__int64)&v44,
                            (__int64)&v60_.v60);
  if ((v44 & 1) != 0 && v45 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v9 + v29, v45);
  }
  if ((v46_.v46 & 1) != 0 && v46_.v48 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v9 + v30, (__int64)v46_.v48);
  }
  GameRoutine_a0d9a0_alt1((__int64)&v60_.v60);
  if (GameData_21f3ff8 != 0) {
    v31 = *(_DWORD*)(GameData_21f3ff8 + 12);
    if (v31 <= 1) {
      v31 = 1;
    }
    if (v31 >= 5) {
      v31 = 5;
    }
    v32 = v31 + 1;
  }
  else {
    v32 = 2;
  }
  v33 = 1;
  do {
    v34 = *v7;
    v35 = game_util_Format_alt2(GameData_1a8af63_alt1, v33);
    v36 = strlen_alt1(v35);
    if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_62;
    }
    v37 = v36;
    if (v36 >= 0x17) {
      v39 = v7;
      if ((v36 | 7) == 0x17) {
        v40 = 26;
      }
      else {
        v40 = (v36 | 7) + 1;
      }
      v41 = fw_memory_HeapManager_Allocate(*v9, v40, 16, 0);
      v42 = v40 | 1;
      v38 = (char*)v41;
      v60_.v61 = v37;
      *(_QWORD*)&v62_.v62 = v41;
      v7 = v39;
      v60_.v60 = v42;
    }
    else {
      v38 = (char*)&v60_.v60 + 1;
      LOBYTE(v60_.v60) = 2 * v36;
      if (v36 == 0) {
        goto LABEL_56;
      }
    }
    memmove_alt1((__int64)v38, (__int64)v35, v37);
  LABEL_56:
    v38[v37] = 0;
    game_facility_SceneManager_CreateMob(v34, (__int64)&v60_.v60);
    if ((v60_.v60 & 1) != 0 && (_QWORD)v62_.v62 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v9 + v43, v62_.v62);
    }
    ++v33;
  } while (v32 != v33);
}

void game_facility_ShowmanSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30[2];
    char* v31;
  } v30_;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;
  struct {
    __int64 (**v35)();
    int v36;
    char gap60_[4];
    __int64 v37;
    char gap72_[8];
    __int64 (***v38)();
  } v35_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (__int64*)GameData_212dce8;
  v3 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
  if (v3 != 0) {
    v4 = v3;
    ProcShowmanScene_147ab40((void*)(v30_.v30), v1);
    if ((v30_.v30[0] & 1) != 0) {
      v5 = v30_.v31;
    }
    else {
      v5 = (char*)v30_.v30 + 1;
    }
    v6 = game_util_Format_alt2(GameData_1ad4448_alt1, v5);
    v7 = strlen_alt1(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_64:
      String_60a1d0();
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                                 16, 0);
      v32_.v33 = v8;
      v32_.v34 = v9;
      v32_.v32 = v10 | 1;
    }
    else {
      LOBYTE(v32_.v32) = 2 * v7;
      v9 = (char*)&v32_.v32 + 1;
      if (v7 == 0) {
      LABEL_14:
        v9[v8] = 0;
        game_facility_14107c0_alt1((__int64)&v35_.v35, (__int64)&v32_.v32);
        v11 = *(_QWORD*)(v4 + 112);
        v12 = *(_QWORD*)(v4 + 120);
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v11, (unsigned __int8*)&v35_.v35);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt2(v12);
          }
          if (((unsigned __int8)v35_.v35 & 1) == 0) {
            goto LABEL_24;
          }
        }
        else {
          GameRoutine_14127e0(v11, (unsigned __int8*)&v35_.v35);
          if (((unsigned __int8)v35_.v35 & 1) == 0) {
          LABEL_24:
            if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
              v14 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v14 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                  (__int64)v32_.v34);
            }
            if ((v30_.v30[0] & 1) != 0 && v30_.v31 != nullptr) {
              v15 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v15 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                  (__int64)v30_.v31);
            }
            goto LABEL_34;
          }
        }
        if (v35_.v37 != 0) {
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v35_.v37);
        }
        goto LABEL_24;
      }
    }
    memmove_alt1((__int64)v9, (__int64)v6, v8);
    goto LABEL_14;
  }
LABEL_34:
  if (GameData_21f3ff8 != 0) {
    v16 = *(_DWORD*)(GameData_21f3ff8 + 12);
    if (v16 <= 1) {
      v16 = 1;
    }
    if (v16 >= 5) {
      v16 = 5;
    }
    v17 = v16 + 1;
  }
  else {
    v17 = 2;
  }
  v18 = 1;
  do {
    v19 = *v2;
    v20 = game_util_Format_alt2(GameData_1a8af63_alt1, v18);
    v21 = strlen_alt1(v20);
    if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_64;
    }
    v22 = v21;
    if (v21 >= 0x17) {
      v24 = v2;
      if ((v21 | 7) == 0x17) {
        v25 = 26;
      }
      else {
        v25 = (v21 | 7) + 1;
      }
      v26 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25, 16, 0);
      v27 = v25 | 1;
      v23 = (char*)v26;
      v32_.v33 = v22;
      v32_.v34 = (char*)v26;
      v2 = v24;
      v32_.v32 = v27;
    LABEL_51:
      memmove_alt1((__int64)v23, (__int64)v20, v22);
      goto LABEL_52;
    }
    v23 = (char*)&v32_.v32 + 1;
    LOBYTE(v32_.v32) = 2 * v21;
    if (v21 != 0) {
      goto LABEL_51;
    }
  LABEL_52:
    v23[v22] = 0;
    if ((SceneManager_138c8e0(v19, (__int64)&v32_.v32) & 1) != 0) {
      v35_.v36 = 0;
      v35_.v35 = GameData_20330a8;
      v35_.v38 = &v35_.v35;
      SceneManager_138d7c0(v19, (__int64)&v32_.v32, (__int64)&v35_.v35);
      if (v35_.v38 == &v35_.v35) {
        v28 = 4;
        goto LABEL_57;
      }
      if (v35_.v38 != nullptr) {
        v28 = 5;
      LABEL_57:
        ((__int64 (*)(__int64))(*v35_.v38)[v28])((__int64)v35_.v38);
      }
    }
    if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v32_.v34);
    }
    ++v18;
  } while (v17 != v18);
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

void game_facility_ShowmanSceneDiff_StartCameraWork_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[16];
  struct {
    _QWORD v14[2];
    char* v15;
  } v14_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_BYTE*)(v1 + 32);
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(v1 + 24);
  }
  else {
    v3 = v1 + 9;
  }
  v4 = *(_QWORD*)(v1 + 48);
  v5 = v1 + 33;
  if ((v2 & 1) != 0) {
    v6 = v4;
  }
  else {
    v6 = v5;
  }
  v7 = game_util_Format_alt2(GameData_1ae37eb_alt1, v3, v6);
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
    v14_.v14[1] = v9;
    v14_.v15 = v10;
    v14_.v14[0] = v11 | 1;
  }
  else {
    LOBYTE(v14_.v14[0]) = 2 * v8;
    v10 = (char*)v14_.v14 + 1;
    if (v8 == 0) {
      goto LABEL_16;
    }
  }
  memmove_alt1((__int64)v10, (__int64)v7, v9);
LABEL_16:
  v10[v9] = 0;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v13), (__int64)v14_.v14, 0);
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v14_.v15);
  }
}

__int64 ShowmanSceneDiff_147d3c0(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
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
  int* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int* v29;
  int* v30;
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
  unsigned __int64 v46;
  int* v47;
  int v48;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      20, 16, 0);
  v4 = v3 + 20;
  v5 = (int*)v3;
  *(_QWORD*)v3 = 0x100000000LL;
  *(_QWORD*)(v3 + 8) = 0x300000002LL;
  *(_DWORD*)(v3 + 16) = 4;
  v7 = *a1;
  v6 = a1[1];
  v8 = v6 - *a1;
  if (v6 == *a1) {
    v10 = 0;
    v9 = 0;
    v14 = 5;
  }
  else {
    if ((v8 & 0x8000000000000000LL) != 0) {
      GameRoutine_6e5a20();
    }
    v9 = fw_memory_HeapManager_Allocate(*v2, v6 - *a1, 16, 0);
    memcpy_alt1(v9, v7, v8);
    v10 = fw_memory_HeapManager_Allocate(*v2, v8, 16, 0);
    memcpy_alt1(v10, v7, v8);
    v11 = *v5;
    v12 = 0;
    do {
      v13 = *(_DWORD*)(v10 + v12);
      if (v11 == v13) {
        v14 = 0;
        goto LABEL_21;
      }
      v12 += 4;
    } while (v8 != v12);
    v14 = 1;
    v15 = 0;
    while (v5[1] != *(_DWORD*)(v10 + v15)) {
      v15 += 4;
      if (v8 == v15) {
        v14 = 2;
        v16 = 0;
        while (v5[2] != *(_DWORD*)(v10 + v16)) {
          v16 += 4;
          if (v8 == v16) {
            v14 = 3;
            v17 = 0;
            while (v5[3] != *(_DWORD*)(v10 + v17)) {
              v17 += 4;
              if (v8 == v17) {
                v14 = 4;
                v18 = 0;
                while (v5[4] != *(_DWORD*)(v10 + v18)) {
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
      v43 = ((unsigned __int8)((unsigned int)(12 - v14 * 4) >> 2) + 1) & 3;
      do {
        v45 = v19[1];
        ++v19;
        v44 = v45;
        v46 = v8;
        v47 = (int*)v10;
        while (1) {
          v48 = *v47++;
          if (v44 == v48) {
            break;
          }
          v46 -= 4LL;
          if (v46 == 0) {
            v5[v14++] = v44;
            break;
          }
        }
        ++v42;
      } while (v42 != v43);
    }
    if (v11 == v13) {
      do {
        v30 = v19;
        v31 = v19[1];
        v32 = 0;
        while (v31 != *(_DWORD*)(v10 + v32)) {
          v32 += 4;
          if (v8 == v32) {
            v5[v14++] = v31;
            break;
          }
        }
        v33 = v30[2];
        v34 = 0;
        while (v33 != *(_DWORD*)(v10 + v34)) {
          v34 += 4;
          if (v8 == v34) {
            v5[v14++] = v33;
            break;
          }
        }
        v35 = v30[3];
        v36 = 0;
        while (v35 != *(_DWORD*)(v10 + v36)) {
          v36 += 4;
          if (v8 == v36) {
            v5[v14++] = v35;
            break;
          }
        }
        v19 = v30 + 4;
        v37 = v30[4];
        v38 = 0;
        while (v37 != *(_DWORD*)(v10 + v38)) {
          v38 += 4;
          if (v8 == v38) {
            v5[v14++] = v37;
            break;
          }
        }
      } while (v30 != v5);
    }
  }
LABEL_23:
  if (v14 != 5) {
    v20 = (__int64)&v5[v14];
    if (v4 - (_QWORD)v5 != 20) {
      memmove_alt1(v20, v4, 20 - (v4 - (_QWORD)v5));
    }
    v4 = v20 + 20 - (v4 - (_QWORD)v5);
  }
  if (v10 != 0) {
  LABEL_28:
    v21 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v2 + v21, v10);
  }
  if (v9 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v2 + v22, v9);
  }
  if ((int*)v4 == v5) {
    v29 = &GameData_1bd6268;
  }
  else {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v29 = &v5[v28 % (int)((unsigned __int64)(v4 - (_QWORD)v5) >> 2)];
  }
  v39 = *v29;
  v40 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v40 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v40, (__int64)v5);
  return v39;
}

#pragma GCC visibility pop
