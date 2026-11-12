#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2036570[])();
extern __int64 (*game_facility_anonymous_ProcTheaterSceneAct_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_2131208[3];
extern __int64 GameData_2131210[2];
extern __int64 GameData_224ade8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
extern int GameData_224ade4;
__int64 ProcTheaterSceneAct_Destructor_alt1(__int64 a1) __asm__(
    "ProcTheaterSceneAct_Destructor");
__int64 ProcTheaterSceneAct_Unknown21(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_144f120(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1950100(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 GameRoutine_1113120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1113400(_QWORD, _QWORD);
__int64 GameRoutine_13da730(__int64 result, __int64);
__int64 GameRoutine_13e3560(_QWORD);
__int64 GameRoutine_13e3e50(_QWORD, _QWORD);
__int64 GameRoutine_13e4860(_QWORD, _QWORD);
__int64 GameRoutine_14107c0(_QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_144ef80(_QWORD);
__int64 GameRoutine_149edd0(_QWORD);
__int64 GameRoutine_149eed0(_QWORD);
__int64 GameRoutine_1952d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 ProcTheaterUI_1113db0(_QWORD);
__int64 SceneCharacter_14009a0(_QWORD, _QWORD);
__int64 SceneCharacter_1401180(_QWORD, double);
__int64 SceneCharacter_1401300(_QWORD, float);
__int64 SceneManager_138e5e0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_facility_anonymous_ProcTheaterUI_CreateBindChoice(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a966f7;
extern _UNKNOWN GameData_1ad7f83;
extern _UNKNOWN GameData_1af6bd7;
extern _UNKNOWN GameData_2241878;
extern _UNKNOWN game_g_random_mutex;
extern _UNKNOWN* GameData_2036610;
extern __int64 (*GameData_2035fb0[])();
extern __int64 (*GameData_20363b0[])();
extern __int64 GameData_1aa2351;
extern __int64 GameData_1ae74c5;
extern __int64 GameData_2131678;
extern __int64 GameData_21f4000;
extern __int64 GameData_2236778;
extern __int64 GameData_2241850;
extern __int64 GameData_2241868;
extern __int64 GameData_22420e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1a9f09e;
extern char GameData_2241870;
unsigned __int64 SceneManager_138d3a0(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_1115ca0(_QWORD);
void __attribute__((noreturn)) GameRoutine_13e0e50(void);
void __attribute__((noreturn)) GameRoutine_13eb280(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcTheaterSceneAct_13dc340_alt1(__int64 a1) __asm__(
    "ProcTheaterSceneAct_13dc340");
__int64 ProcTheaterSceneAct_13dca90(__int64 a1);
__int64 ProcTheaterSceneAct_13dcac0(__int64 a1);
_QWORD* game_facility_anonymous_ProcTheaterSceneAct_HideAudience(__int64 a1,
                                                                 __int64 a2);
__int64 ProcTheaterSceneAct_13dcdb0(__int64 a1);
__int64 ProcTheaterSceneAct_13dcea0(__int64 a1);
__int64 ProcTheaterSceneAct_13dd3a0(__int64 result);
__int64 ProcTheaterSceneAct_13dde20_alt1(__int64 a1) __asm__(
    "ProcTheaterSceneAct_13dde20");
__int64 ProcTheaterSceneAct_13de8d0(__int64 a1);
__int64 ProcTheaterSceneAct_13de9a0(__int64 a1);
__int64 ProcTheaterSceneAct_13deaa0_alt1(__int64 a1) __asm__(
    "ProcTheaterSceneAct_13deaa0");
__int64
ProcTheaterSceneAct_13deec0_alt1() __asm__("ProcTheaterSceneAct_13deec0");
__int64 ProcTheaterSceneAct_13def20(__int64 result);
unsigned __int64 ProcTheaterSceneAct_13defe0(unsigned __int64 result);
_QWORD* game_facility_anonymous_ProcTheaterSceneAct_ShowAudience(__int64 a1,
                                                                 __int64 a2);
__int64 ProcTheaterSceneAct_13df3b0(__int64 a1);
void ProcTheaterSceneAct_13df3e0();
__int64 ProcTheaterSceneAct_13df660(__int64 result);
void game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop_closure_Invoke();
__int64 ProcTheaterSceneAct_13e18a0_alt2(
    __int64* a1, _QWORD* a2, _BYTE* a3) __asm__("ProcTheaterSceneAct_13e18a0");
float ProcTheaterSceneAct_13e2420(__int64 a1);
__int64 ProcTheaterSceneAct_Unknown5(__int64 a1);
__attribute__((swiftcall)) void SceneTalk_1497bf0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_13e59c0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, _QWORD,
                                                      _QWORD);
__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8, _QWORD*,
                                                      _QWORD*, float);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameRoutine_1112d80(__int64 result);
__int64 GameRoutine_13da230(_QWORD, _QWORD);
__int64 GameRoutine_13e4b20(_QWORD);
__int64 GameRoutine_14245d0(void);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 GameRoutine_1795980(__int64, int, __int64);
__int64 GameRoutine_1952d00_alt1(__int64, __int64,
                                 __int64) __asm__("GameRoutine_1952d00");
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 SceneCameraWorkUpdater_14559c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_14020c0(void);
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 SceneManager_138e5e0_alt1(_QWORD,
                                  _QWORD) __asm__("SceneManager_138e5e0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_13e5040(_QWORD, _QWORD);
__int64 game_13e5ba0(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(__int64);
__int64 game_facility_140c240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_facility_14994e0(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, double);
__n128 GameRoutine_13892a0(__int64);
__n128 game_facility_TheaterSceneDiff_Initialize_1423e60(_QWORD*, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 long double) __asm__("snd_Fade_Fade_10c830");
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_2131360;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a9654d;
extern _UNKNOWN GameData_1aa5e40;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ae74e3;
extern _UNKNOWN GameData_1aeed23;
extern _UNKNOWN GameData_1afa938;
extern _UNKNOWN GameData_1afe408;
extern _UNKNOWN GameData_2171098;
extern _UNKNOWN GameData_224ae08;
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_2035db0[])();
extern __int64 (*GameData_2035e20[])();
extern __int64 (*GameData_2035eb0[])();
extern __int64 (*GameData_2035f30[])();
extern __int64 (*GameData_2036030[])();
extern __int64 (*GameData_20360b0[])();
extern __int64 (*GameData_20362b0[])();
extern __int64 (*GameData_2036330[])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131420;
extern __int64* GameData_2131630[3];
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_224ae20;
extern __int64 game_GameModeData_instance_;
extern int* GameData_2131428;
long double snd_getDefineValue(_QWORD);
void GameRoutine_1400780(_QWORD*, __int64, float);
void GameRoutine_1418aa0();
void GameRoutine_1486f50();
void GameRoutine_1488120();
void GameRoutine_19526e0(__int64, __int64, float);
void SceneCharacter_1401180_alt1(__int64,
                                 float) __asm__("SceneCharacter_1401180");
void SceneManager_138d3a0_alt1(_QWORD*,
                               __int64) __asm__("SceneManager_138d3a0");
void SceneManager_138d7c0(__int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_13db2e0();
void __attribute__((noreturn))
GameRoutine_13e0e50_alt1() __asm__("GameRoutine_13e0e50");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_facility_SceneManager_CreateMob(_QWORD*, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_facility_anonymous_ProcTheaterSceneAct_StartOpeningCameraWork(
    __int64 result);
__int64 (***ProcTheaterSceneAct_13dc9a0(__int64 a1, __int64 a2))();
_QWORD* ProcTheaterSceneAct_13dcbe0(_QWORD* result);
void ProcTheaterSceneAct_13dcd10();
void ProcTheaterSceneAct_13dd000(__int64 a1);
__int64 ProcTheaterSceneAct_13dd4e0(__int64 a1);
__int64 ProcTheaterSceneAct_13dd940(__int64 result);
__int64 ProcTheaterSceneAct_13de2a0(__int64 a1);
__int64
game_facility_anonymous_ProcTheaterSceneAct_PlayHighlightReaction(__int64 a1);
__int64 ProcTheaterSceneAct_13deea0();
__int64 (***ProcTheaterSceneAct_13df160(__int64 (***result)(), __int64 a2))();
__int64 ProcTheaterSceneAct_13df9f0(__int64 a1, __int64* a2);
void ProcTheaterSceneAct_13e0100(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
ProcTheaterSceneAct_13e02f0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
ProcTheaterSceneAct_13e03f0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void ProcTheaterSceneAct_13e04f0(PSEUDO_X8 x8_,
                                                            __int64 a1);
__int64
game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop(__int64 result);
__int64
game_facility_anonymous_ProcTheaterSceneAct_StartOpeningCameraWork_closure0_Invoke();
__int64
ProcTheaterSceneAct_13e0e80_alt1(__int64 a1, __int64 a2,
                                 int a3) __asm__("ProcTheaterSceneAct_13e0e80");
__int64 ProcTheaterSceneAct_StartFade(__int64 a1);
__int64 ProcTheaterSceneAct_Unknown2(__int64 a1);
_QWORD* GameRoutine_13e4b20_alt1(__int64) __asm__("GameRoutine_13e4b20");
__attribute__((swiftcall)) void
GameRoutine_1950100_alt1(PSEUDO_X8, __int64, __int64, __int64,
                         unsigned int) __asm__("GameRoutine_1950100");
__int64 GameRoutine_13e3560_alt1(_DWORD*) __asm__("GameRoutine_13e3560");
__int64
GameRoutine_14127e0_alt1(__int64,
                         unsigned __int8*) __asm__("GameRoutine_14127e0");
__int64
LayoutAccessor_155cda0_alt1(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64
ProcTheaterSceneAct_13e18a0_alt1(__int64*, const char**,
                                 _BYTE*) __asm__("ProcTheaterSceneAct_13e18a0");
__int64 ProcTheaterUI_1113db0_alt1() __asm__("ProcTheaterUI_1113db0");
__int64 SceneCharacter_14009a0_alt1(_QWORD*,
                                    __int64) __asm__("SceneCharacter_14009a0");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_facility_14107c0(__int64, __int64);
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_13e3e50(__int64, unsigned __int64);
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void GameRoutine_14877f0_alt1(__int64, __int64) __asm__("GameRoutine_14877f0");
void GameRoutine_1958ed0_alt1(__int64, __int64) __asm__("GameRoutine_1958ed0");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void __attribute__((noreturn))
GameRoutine_1115ca0_alt1() __asm__("GameRoutine_1115ca0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_facility_anonymous_ProcTheaterUI_CreateBindChoice_alt1(
    __int64, __int64*, char,
    __int64*) __asm__("game_facility_anonymous_ProcTheaterUI_CreateBindChoice");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTheaterSceneAct_13dc340(__int64 a1);
void ProcTheaterSceneAct_13dde20(__int64 a1);
void ProcTheaterSceneAct_13deaa0(__int64 a1);
void ProcTheaterSceneAct_13deec0();
void ProcTheaterSceneAct_Destructor(__int64 a1);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_2033228[])();
extern __int64 (*GameData_2036430[])();
void game_facility_anonymous_ProcTheaterSceneAct_SetResultCamera();
void game_facility_anonymous_ProcTheaterSceneAct_PlayAudienceMotion_closure_Invoke(
    __int64 a1, const char** a2);
void game_facility_anonymous_ProcTheaterSceneAct_HideAudience_closure_Invoke(
    __int64 a1, const char** a2);
_QWORD* SceneCharacter_14020c0_alt1(__int64) __asm__("SceneCharacter_14020c0");
__attribute__((swiftcall)) void
SceneTalk_1497bf0_alt1(PSEUDO_X8, unsigned __int64*,
                       int) __asm__("SceneTalk_1497bf0");
__attribute__((swiftcall)) void game_13e59c0_alt1(PSEUDO_X8,
                                                  unsigned __int64 result, int,
                                                  int,
                                                  char) __asm__("game_13e59c0");
__attribute__((swiftcall)) void
game_facility_144f120_alt1(PSEUDO_X8, __int64,
                           __int64) __asm__("game_facility_144f120");
__int64 GameHr_1112d80(__int64 result);
__int64 GameRoutine_13892a0_alt1(__int64) __asm__("GameRoutine_13892a0");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 SceneCharacter_1401180_alt2(__int64,
                                    float) __asm__("SceneCharacter_1401180");
__int64 game_13e5ba0_alt1(__int64, unsigned int, char) __asm__("game_13e5ba0");
__int64 game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(_QWORD*,
                                                                  __int64,
                                                                  float);
void GameHr_138cae0(_QWORD*, __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void game_facility_140c240_alt1(__int64, const char*, __int64,
                                __int64) __asm__("game_facility_140c240");
void game_facility_TheaterSceneDiff_Initialize_1423e60_alt1(
    _QWORD*,
    __int64) __asm__("game_facility_TheaterSceneDiff_Initialize_1423e60");
__int64 ProcTheaterSceneAct_13e0e80(__int64 a1, unsigned int a2, int a3);
__int64 ProcTheaterSceneAct_13e18a0(__int64* a1, const char** a2, _BYTE* a3);

__int64 game_facility_anonymous_ProcTheaterSceneAct_StartOpeningCameraWork(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (**v18)();
  __int64 v19;
  __int64 v20;
  __int64 (***v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64* v26;

  v1 = result;
  v2 = GameData_2236778;
  if (GameData_2236778 != 0) {
    result = LayoutAccessor_155ea30(GameData_2236778 + 168);
    if ((result & 1) == 0) {
      result = LayoutAccessor_155e830(v2 + 168, 1);
    }
  }
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 256LL);
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    result = std___1___shared_weak_count___release_weak(v3);
    if (v6 != 0) {
      if (v4 == 0) {
      LABEL_29:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
        return result;
      }
      v7 = fw_memory_g_heap_manager_ptr;
      if (*(_BYTE*)(*(_QWORD*)(v1 + 208) + 72LL) == 3) {
        v8 = &GameData_1a9654d;
      }
      else {
        v8 = &GameData_1aa5e40;
      }
      v9 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_BYTE*)(v9 + 39) = 0;
      v18 = (__int64 (**)())((*(__int64 (*)[2])0x28LL) + 1);
      v19 = 39;
      v20 = v9;
      v10 = v8[3];
      *(_QWORD*)(v9 + 16) = v8[2];
      *(_QWORD*)(v9 + 24) = v10;
      *(_QWORD*)(v9 + 31) = *(_QWORD*)((char*)v8 + 31);
      v11 = v8[1];
      *(_QWORD*)v9 = *v8;
      *(_QWORD*)(v9 + 8) = v11;
      result = (__int64)(game_facility_144f120((void*)(&v22), v4, &v18),
                         (void*)(&v22));
      if (((unsigned __int8)v18 & 1) != 0 && v20 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v12);
      }
      v13 = v22;
      if (v22 == 0) {
        goto LABEL_26;
      }
      v18 = GameData_2035db0;
      v19 = v1;
      v21 = &v18;
      v24 = game_HashString(&GameData_1afe408);
      v25 = &v18;
      v26 = &v24;
      SceneCameraWorkUpdater_14559c0(
          v13 + 144, &v24, std___1_piecewise_construct_ptr, &v26, &v25);
      if (v21 == &v18) {
        v14 = 4;
      }
      else {
        if (v21 == nullptr) {
        LABEL_21:
          v15 = v22;
          v18 = GameData_2035eb0;
          v21 = &v18;
          v24 = game_HashString(&GameData_1aeed23);
          v25 = &v18;
          v26 = &v24;
          SceneCameraWorkUpdater_14559c0(
              v15 + 144, &v24, std___1_piecewise_construct_ptr, &v26, &v25);
          result = (__int64)v21;
          if (v21 == &v18) {
            v16 = 4;
            goto LABEL_25;
          }
          if (v21 != nullptr) {
            v16 = 5;
          LABEL_25:
            result = (*v21)[v16]();
          }
        LABEL_26:
          v17 = v23;
          if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            result = std___1___shared_weak_count___release_weak(v17);
          }
          goto LABEL_29;
        }
        v14 = 5;
      }
      (*v21)[v14]();
      goto LABEL_21;
    }
  }
  return result;
}

void ProcTheaterSceneAct_13dc340(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  int v8;
  __int16 v9;
  const char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int16 v30;
  const char* v31;
  unsigned int v32;
  const char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  int v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v51;
    unsigned __int64 v52;
    char* v53;
  } v51_;
  struct {
    __int64 v54;
    __int64 v55;
    char* v56;
    int v57;
    char v58;
    char gap69_[3];
    int v59;
    float v60;
    int v61;
    __int16 v62;
  } v54_;
  char v63;
  struct {
    char gap88_[1];
    _BYTE v64[7];
    char gap96_[8];
    const char* v65;
    int v66;
    char v67;
    char gap117_[3];
    int v68;
    float v69;
    int v70;
    __int16 v71;
    char gap134_[18];
    const char* v72;
  } v64_;

  v64_.v72 = v64_.v64;
  v2 = SceneManager_138e5e0(GameData_21f4000);
  if (v2 != 0) {
    v3 = v2;
    v4 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40, 16,
                                             0);
    *(_BYTE*)(v4 + 38) = 0;
    v54_.v54 = 41;
    v54_.v55 = 38;
    v54_.v56 = (char*)v4;
    *(_QWORD*)(v4 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v4 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v4 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v4 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v4 + 8) = 0xE3BC83E3A283E3A9LL;
    game_facility_14107c0((__int64)&v63, (__int64)&v54_.v54);
    if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
      v5 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v5,
                                         (__int64)v54_.v56);
    }
    v6 = v64_.v68;
    v7 = v64_.v69;
    v8 = v64_.v70;
    v9 = v64_.v71;
    if ((v63 & 1) != 0) {
      v10 = v64_.v65;
    }
    else {
      v10 = v64_.v72;
    }
    v11 = strlen_alt1(v10);
    if (v11 > 0xFFFFFFFFFFFFFFF6LL) {
    LABEL_92:
      String_60a1d0_alt1();
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v11 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v14, 16, 0);
      v51_.v52 = v12;
      v51_.v53 = v13;
      v51_.v51 = v14 | 1;
    }
    else {
      v13 = (char*)&v51_.v51 + 1;
      LOBYTE(v51_.v51) = 2 * v11;
      if (v11 == 0) {
      LABEL_19:
        v13[v12] = 0;
        v15 = v64_.v66;
        v16 = v64_.v67;
        if ((v51_.v51 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v54_.v54, (__int64)v51_.v53,
                                             v51_.v52);
        }
        else {
          v54_.v54 = v51_.v51;
          v54_.v55 = v51_.v52;
          v54_.v56 = v51_.v53;
        }
        v17 = *(_QWORD*)(v3 + 112);
        v18 = *(_QWORD*)(v3 + 120);
        v54_.v57 = v15;
        v54_.v58 = v16;
        v54_.v59 = v6;
        v54_.v60 = v7;
        v54_.v61 = v8;
        v54_.v62 = v9;
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0_alt1(v17, (unsigned __int8*)&v54_.v54);
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak_alt2(v18);
          }
          if ((v54_.v54 & 1) == 0) {
            goto LABEL_32;
          }
        }
        else {
          GameRoutine_14127e0_alt1(v17, (unsigned __int8*)&v54_.v54);
          if ((v54_.v54 & 1) == 0) {
          LABEL_32:
            if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
              v20 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v20 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v20,
                                                 (__int64)v51_.v53);
            }
            if ((v63 & 1) != 0 && v64_.v65 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v21,
                                                 (__int64)v64_.v65);
            }
            goto LABEL_42;
          }
        }
        if (v54_.v56 != nullptr) {
          v19 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v19,
                                             (__int64)v54_.v56);
        }
        goto LABEL_32;
      }
    }
    memmove_alt1((__int64)v13, (__int64)v10, v12);
    goto LABEL_19;
  }
LABEL_42:
  v22 = 1;
  do {
    v24 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    if (v24 == 0) {
      goto LABEL_43;
    }
    v25 = v24;
    v26 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 40, 16,
                                              0);
    *(_BYTE*)(v26 + 38) = 0;
    v54_.v54 = 41;
    v54_.v55 = 38;
    v54_.v56 = (char*)v26;
    *(_QWORD*)(v26 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v26 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v26 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v26 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v26 + 8) = 0xE3BC83E3A283E3A9LL;
    game_facility_14107c0((__int64)&v63, (__int64)&v54_.v54);
    if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v27,
                                         (__int64)v54_.v56);
    }
    v28 = v64_.v68;
    v29 = v64_.v70;
    v30 = v64_.v71;
    if ((*(_BYTE*)(v25 + 72) & 1) != 0) {
      v31 = *(const char**)(v25 + 88);
    }
    else {
      v31 = (const char*)(v25 + 73);
    }
    v32 = (unsigned int)game_HashString32_alt1(v31);
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    if ((v63 & 1) != 0) {
      v33 = v64_.v65;
    }
    else {
      v33 = v64_.v72;
    }
    v34 = strlen_alt1(v33);
    if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_92;
    }
    v35 = v34;
    if (v34 >= 0x17) {
      v37 = a1;
      if ((v34 | 7) == 0x17) {
        v38 = 26;
      }
      else {
        v38 = (v34 | 7) + 1;
      }
      v39 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v38,
                                                16, 0);
      v40 = v38 | 1;
      v36 = (char*)v39;
      v51_.v52 = v35;
      v51_.v53 = (char*)v39;
      a1 = v37;
      v51_.v51 = v40;
    LABEL_67:
      memmove_alt1((__int64)v36, (__int64)v33, v35);
      goto LABEL_68;
    }
    v36 = (char*)&v51_.v51 + 1;
    LOBYTE(v51_.v51) = 2 * v34;
    if (v34 != 0) {
      goto LABEL_67;
    }
  LABEL_68:
    v36[v35] = 0;
    v41 = v64_.v66;
    v42 = v64_.v67;
    if ((v51_.v51 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v54_.v54, (__int64)v51_.v53,
                                         v51_.v52);
    }
    else {
      v54_.v54 = v51_.v51;
      v54_.v55 = v51_.v52;
      v54_.v56 = v51_.v53;
    }
    v43 = v32 ^ (v32 >> 30);
    v44 = *(_QWORD*)(v25 + 112);
    v45 = *(_QWORD*)(v25 + 120);
    v54_.v57 = v41;
    v54_.v58 = v42;
    v54_.v61 = v29;
    v54_.v62 = v30;
    v46 = 1812433253 *
              ((1812433253 * ((1812433253 * v43) ^
                              ((unsigned int)(1812433253 * v43) >> 30)) +
                1) ^
               ((1812433253 * ((1812433253 * v43) ^
                               ((unsigned int)(1812433253 * v43) >> 30)) +
                 1) >>
                30)) +
          2;
    v47 = (float)(unsigned __int16)((((1011558400 * v43) ^
                                      (unsigned int)(1812433253 * v43)) >>
                                     8) ^
                                    ((1812433253 * (v46 ^ (v46 >> 30)) + 3) >>
                                     19) ^
                                    (10240 * v43) ^ (-30363 * v43) ^
                                    (-30363 * (v46 ^ (v46 >> 30)) + 3));
    v54_.v59 = v28;
    v54_.v60 = (float)(v47 / 0x1.fffe000000000p+15f) +
               (float)(v47 / 0x1.fffe000000000p+15f);
    if (v45 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_14127e0_alt1(v44, (unsigned __int8*)&v54_.v54);
      if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak_alt2(v45);
      }
      if ((v54_.v54 & 1) == 0) {
        goto LABEL_81;
      }
    LABEL_77:
      if (v54_.v56 != nullptr) {
        v48 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v48,
                                           (__int64)v54_.v56);
      }
      goto LABEL_81;
    }
    GameRoutine_14127e0_alt1(v44, (unsigned __int8*)&v54_.v54);
    if ((v54_.v54 & 1) != 0) {
      goto LABEL_77;
    }
  LABEL_81:
    if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
      v49 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v49,
                                         (__int64)v51_.v53);
    }
    if ((v63 & 1) != 0 && v64_.v65 != nullptr) {
      v50 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v50,
                                         (__int64)v64_.v65);
    }
  LABEL_43:
    ++v22;
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v23 = 5;
    }
    else {
      v23 = 3;
    }
  } while (v22 < v23);
}

__int64 (***ProcTheaterSceneAct_13dc9a0(__int64 a1, __int64 a2))()
{
  __int64 v2;
  __int64 (***result)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v9)();
    int v10;
    char gap12_[20];
    __int64 (***v11)();
  } v9_;

  v2 = *(_QWORD*)(a1 + 208);
  result = &v9_.v9;
  v9_.v10 = 0;
  v9_.v9 = GameData_2035f30;
  v9_.v11 = &v9_.v9;
  if (*(_WORD*)(v2 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v2 + 160);
  v5 = 0;
  do {
    if (v9_.v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310_alt1();
    }
    ((void (*)(__int64 (***)(void), __int64))(*v9_.v11)[6])(
        v9_.v11, *(_QWORD*)(v2 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v9_.v11;
  if (v9_.v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v2 + 176) != 0) {
      v6 = 8LL * *(unsigned __int16*)(v2 + 176);
      v7 = 0;
      do {
        if (v9_.v11 == nullptr) {
          goto LABEL_17;
        }
        ((void (*)(__int64 (***)(void), __int64))(*v9_.v11)[6])(
            v9_.v11, *(_QWORD*)(v2 + 184) + v7);
        v7 += 8;
      } while (v6 != v7);
      result = v9_.v11;
    }
    if (result == &v9_.v9) {
      v8 = 4;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v8 = 5;
    }
    return (__int64 (***)(void))(
        (__int64 (*)(__int64 (***)(void), __int64))(*result)[v8])(result, a2);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dca90(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 208);
  if (v1 != 0 && *(_BYTE*)(v1 + 72) == 3) {
    return GameRoutine_149edd0(&GameData_1a966f7);
  }
  else {
    return GameRoutine_149edd0(&GameData_1ad7f83);
  }
}

__int64 ProcTheaterSceneAct_13dcac0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 152;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = std___1___shared_weak_count_lock(v12);
        result = std___1___shared_weak_count___release_weak(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock(v8);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

_QWORD* game_facility_anonymous_ProcTheaterSceneAct_HideAudience(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = *(_QWORD*)(a1 + 208);
  result = v10;
  v10[0] = GameData_2035fb0;
  v11 = v10;
  if (*(_WORD*)(v2 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v2 + 160);
  v5 = 0;
  do {
    v6 = v11;
    if (v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310(v6, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11,
                                                  *(_QWORD*)(v2 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v11;
  if (v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v2 + 176) != 0) {
      v7 = 8LL * *(unsigned __int16*)(v2 + 176);
      v8 = 0;
      do {
        v6 = v11;
        if (v11 == nullptr) {
          goto LABEL_17;
        }
        (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(
            v11, *(_QWORD*)(v2 + 184) + v8);
        v8 += 8;
      } while (v7 != v8);
      result = v11;
    }
    if (result == v10) {
      v9 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
  }
  return result;
}

_QWORD* ProcTheaterSceneAct_13dcbe0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 257;
  }
  v1 = result[42];
  if ((*(_BYTE*)(v1 + 136) & 1) == 0) {
    result = *(_QWORD**)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (result == (_QWORD*)(v1 + 64)) {
      v2 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_9;
      }
      v2 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v2))((__int64)result);
  LABEL_9:
    v3 = *(_QWORD*)(v1 + 112);
    v4 = *(_QWORD*)(v1 + 120);
    if (v3 == v4) {
    LABEL_10:
      *(_QWORD*)(v1 + 120) = v3;
      return result;
    }
    while (1) {
      result = *(_QWORD**)(v4 - 16);
      *(_QWORD*)(v4 - 16) = 0;
      if ((_QWORD*)(v4 - 48) == result) {
        v6 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_14;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*result + v6))((__int64)result);
      result = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == result) {
        v5 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
    LABEL_14:
      v4 -= 64;
      if (v4 == v3) {
        goto LABEL_10;
      }
    }
  }
  return result;
}

bool ProcTheaterSceneAct_13dccf0() { return GameData_22420e0 != 0; }

void ProcTheaterSceneAct_13dcd10()
{
  long double v0;
  __int64 v1;
  __int128 v2;
  unsigned int v3;
  unsigned int v4;

  v4 = COERCE_UNSIGNED_INT128(snd_getDefineValue("Theater_Listener_PosX"));
  v3 = COERCE_UNSIGNED_INT128(snd_getDefineValue("Theater_Listener_PosY"));
  v0 = snd_getDefineValue("Theater_Listener_PosZ");
  v1 = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    if (*(_BYTE*)(GameData_224ae20 + 96) == 1) {
      *(_DWORD*)(GameData_224ae20 + 80) = v4;
      *(_DWORD*)(v1 + 84) = v3;
      v2 = *(_OWORD*)(v1 + 80);
    }
    else {
      *(_BYTE*)(GameData_224ae20 + 96) = 1;
      *(_QWORD*)&v2 = __PAIR64__(v3, v4);
    }
    *((_QWORD*)&v2 + 1) = LODWORD(v0);
    *(_OWORD*)(v1 + 80) = v2;
  }
}

__int64 ProcTheaterSceneAct_13dcdb0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  struct {
    __int16 v8;
    char v9;
  } v8_;

  v2 = (__int64*)GameData_212dce8;
  v8_.v8 = 257;
  v8_.v9 = 1;
  SceneCharacter_14009a0_alt1(**(_QWORD***)(*(_QWORD*)GameData_212dce8 + 160LL),
                              (__int64)&v8_.v8);
  v3 = *v2;
  v8_.v9 = 1;
  v8_.v8 = 257;
  SceneCharacter_14009a0_alt1(*(_QWORD**)(*(_QWORD*)(v3 + 160) + 8LL),
                              (__int64)&v8_.v8);
  v4 = *v2;
  v8_.v9 = 1;
  v8_.v8 = 257;
  result = SceneCharacter_14009a0_alt1(*(_QWORD**)(*(_QWORD*)(v4 + 160) + 16LL),
                                       (__int64)&v8_.v8);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
    v6 = *v2;
    v8_.v9 = 1;
    v8_.v8 = 257;
    result = SceneCharacter_14009a0_alt1(
        *(_QWORD**)(*(_QWORD*)(v6 + 160) + 24LL), (__int64)&v8_.v8);
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v7 = *v2;
      v8_.v9 = 1;
      v8_.v8 = 257;
      return SceneCharacter_14009a0_alt1(
          *(_QWORD**)(*(_QWORD*)(v7 + 160) + 32LL), (__int64)&v8_.v8);
    }
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dcea0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;

  v2 = GameRoutine_13e4860(*(_QWORD*)(a1 + 208), *(unsigned int*)(a1 + 264));
  v3 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)(a1 + 280) = v2;
  *(_BYTE*)(a1 + 330) = 0;
  v4 = *(int*)(a1 + 264);
  v6 = *(__int64**)(*(_QWORD*)(v3 + 40) + 40LL);
  v5 = *v6;
  v7 = v6[1] - *v6;
  if ((int)v4 >= (int)((unsigned __int64)v7 >> 3)) {
    v8 = 0;
  }
  else {
    if (v4 >= v7 >> 3) {
      GameRoutine_13eb280();
    }
    v8 = *(_QWORD*)(v5 + 8 * v4);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 48);
      v10 = 0;
      goto LABEL_7;
    }
  }
  v9 = 0;
  v10 = 1;
LABEL_7:
  v11 = SceneManager_138e5e0(GameData_21f4000);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 96);
    if (*(_BYTE*)(v12 + 2136) != 0) {
      v13 = GameRoutine_97b2f0(v12 + 2104);
    }
    else {
      v13 = GameRoutine_67ed20(*(_QWORD*)(v12 + 392));
    }
    v14 = (char*)v13;
    if ((v10 & 1) != 0) {
      goto LABEL_14;
    }
  }
  else {
    v14 = &GameData_1a9f09e;
    if ((v10 & 1) != 0) {
    LABEL_14:
      v15 = &GameData_1a9f09e;
      return GameRoutine_1113120((unsigned int)(*(_DWORD*)(a1 + 264) + 1), v15,
                                 v9, v14);
    }
  }
  v15 = *(char**)(v8 + 40);
  return GameRoutine_1113120((unsigned int)(*(_DWORD*)(a1 + 264) + 1), v15, v9,
                             v14);
}

void ProcTheaterSceneAct_13dd000(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  char* v3;
  _QWORD** v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  _QWORD* v9;
  __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  _QWORD** v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  const char* v27;
  const char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  struct {
    _QWORD v38[2];
    __int64 v39;
  } v38_;
  struct {
    __int128 v40;
    char* v41;
    char v42;
    char gap57_[15];
    __int64 v43;
  } v40_;

  if (*(_QWORD*)(a1 + 280) == 0) {
    return;
  }
  v2 = 0;
  v3 = &GameData_1a9f09e;
  v4 = (_QWORD**)GameData_212dce8;
  do {
    v6 = **(_QWORD**)(*(_QWORD*)(a1 + 280) + 40LL);
    if (v2 >=
        (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 280) + 40LL) + 8LL) - v6) >> 3) {
      goto LABEL_69;
    }
    v7 = *(_QWORD*)(v6 + 8 * v2);
    v8 = *(const char**)(v7 + 40);
    v9 = *(_QWORD**)((*v4)[20] + 8 * v2);
    if (v8 != nullptr && *v8 != 0) {
      v10 = v9[1];
      if (v10 != 0) {
        *(_BYTE*)(v10 + 289) = 1;
        v8 = *(const char**)(v7 + 40);
      }
      if (v8 != nullptr) {
        v11 = v8;
      }
      else {
        v11 = v3;
      }
      v12 = strlen_alt1(v11);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_70;
      }
      v13 = v12;
      if (v12 >= 0x17) {
        v16 = v3;
        v17 = v4;
        if ((v12 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v12 | 7) + 1;
        }
        v19 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
        v20 = v18 | 1;
        v14 = (char*)v19;
        v38_.v38[1] = v13;
        v38_.v39 = v19;
        v4 = v17;
        v3 = v16;
        v38_.v38[0] = v20;
      }
      else {
        v14 = (char*)v38_.v38 + 1;
        LOBYTE(v38_.v38[0]) = 2 * v12;
        if (v12 == 0) {
        LABEL_27:
          v14[v13] = 0;
          game_facility_140d160((void*)(&v40_.v40), (__int64)v38_.v38);
          game_facility_SceneCharacterLookAt_ReserveResetOnRelocate(
              v9, (__int64)&v40_.v40, *(float*)(v7 + 48));
          if ((v40_.v42 & 1) != 0 && v40_.v43 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v40_.v43);
          }
          if ((v38_.v38[0] & 1) != 0 && v38_.v39 != 0) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v38_.v39);
          }
          goto LABEL_4;
        }
      }
      memmove_alt1((__int64)v14, (__int64)v11, v13);
      goto LABEL_27;
    }
    v15 = v9[1];
    if (v15 != 0) {
      *(_BYTE*)(v15 + 289) = 0;
    }
    SceneCharacter_1401180_alt2((__int64)v9, 0x0.0p+0f);
  LABEL_4:
    ++v2;
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v5 = 5;
    }
    else {
      v5 = 3;
    }
  } while (v2 < v5);
  v23 = *(unsigned __int8*)(a1 + 288);
  if ((v23 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 296);
  }
  else {
    v24 = v23 >> 1;
  }
  if (v24 != 0) {
    SceneManager_138d3a0_alt1(*v4, a1 + 288);
    if ((*(_BYTE*)(a1 + 288) & 1) != 0) {
      v25 = *(_BYTE**)(a1 + 304);
      *(_QWORD*)(a1 + 296) = 0;
    }
    else {
      v25 = (_BYTE*)(a1 + 289);
      *(_BYTE*)(a1 + 288) = 0;
    }
    *v25 = 0;
  }
  v26 = **(_QWORD**)(*(_QWORD*)(a1 + 280) + 40LL);
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 280) + 40LL) + 8LL) == v26) {
  LABEL_69:
    GameRoutine_13e0e50_alt1();
  }
  v27 = *(const char**)(*(_QWORD*)v26 + 56LL);
  if (v27 != nullptr) {
    v28 = v27;
  }
  else {
    v28 = v3;
  }
  v29 = strlen_alt1(v28);
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_70:
    String_60a1d0_alt1();
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v29 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v32, 16, 0);
    *((_QWORD*)&v40_.v40 + 1) = v30;
    v40_.v41 = v31;
    *(_QWORD*)&v40_.v40 = v32 | 1;
  }
  else {
    LOBYTE(v40_.v40) = 2 * v29;
    v31 = (char*)&v40_.v40 + 1;
    if (v29 == 0) {
      goto LABEL_58;
    }
  }
  memmove_alt1((__int64)v31, (__int64)v28, v30);
LABEL_58:
  v31[v30] = 0;
  if ((*(_BYTE*)(a1 + 288) & 1) != 0) {
    v33 = *(_QWORD*)(a1 + 304);
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
    }
  }
  v35 = *((_QWORD*)&v40_.v40 + 1);
  *(_OWORD*)(a1 + 288) = v40_.v40;
  *(_QWORD*)(a1 + 304) = v40_.v41;
  v36 = *(unsigned __int8*)(a1 + 288);
  if ((v36 & 1) != 0) {
    v37 = v35;
  }
  else {
    v37 = v36 >> 1;
  }
  if (v37 != 0) {
    GameHr_138cae0(*v4, a1 + 288);
  }
}

__int64 ProcTheaterSceneAct_13dd3a0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;

  if (*(_QWORD*)(result + 280) != 0) {
    v1 = result;
    v2 = 0;
    v3 = GameData_212dce8;
    if (*(_BYTE*)(*(_QWORD*)(result + 208) + 72LL) == 3) {
      LODWORD(v4) = 5;
    }
    else {
      LODWORD(v4) = 3;
    }
    do {
      v5 = *(__int64**)(*(_QWORD*)(v1 + 280) + 40LL);
      v6 = *v5;
      if (v2 >= (v5[1] - *v5) >> 3) {
        GameRoutine_13e0e50();
      }
      v7 = *(_QWORD*)(*(_QWORD*)v3 + 160LL);
      v8 = *(char*)(*(_QWORD*)(v6 + 8 * v2) + 52LL);
      v9 = *(_QWORD*)(v7 + 8 * v2);
      if ((v8 & 0x80000000) == 0 &&
          v2 != *(char*)(*(_QWORD*)(v6 + 8 * v2) + 52LL) && (int)v4 > v8) {
        v10 =
            *(_QWORD*)(*(_QWORD*)(v7 + 8LL * *(char*)(*(_QWORD*)(v6 + 8 * v2) +
                                                      52LL)) +
                       8LL);
        if (v10 != 0 && *(_BYTE*)(v10 + 289) == 1 &&
            (*(_BYTE*)(v10 + 288) & 1) != 0) {
          while ((*(_BYTE*)(v10 + 300) & 0xFD) != 1) {
            v10 = *(_QWORD*)(v10 + 736);
            if (v10 == 0) {
              result = SceneCharacter_1401300(v9, 1.0);
              goto LABEL_17;
            }
            if (*(_BYTE*)(v10 + 289) != 1 || *(_BYTE*)(v10 + 288) != 1) {
              break;
            }
          }
        }
      }
      result = SceneCharacter_1401180(v9, 0.0);
    LABEL_17:
      ++v2;
      if (*(_BYTE*)(*(_QWORD*)(v1 + 208) + 72LL) == 3) {
        v4 = 5;
      }
      else {
        v4 = 3;
      }
    } while (v2 < v4);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dd4e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  for (i = 1; i != 16; ++i) {
    v4 = *(_QWORD*)(a1 + 368);
    v13_.v13[0] = GameData_2036030;
    v13_.v13[1] = a1;
    v13_.v13[2] = i;
    v13_.v14 = v13_.v13;
    GameRoutine_19526e0(v4, (__int64)v13_.v13, (float)(unsigned int)i);
    if (v13_.v14 == v13_.v13) {
      v3 = 32;
    LABEL_3:
      (*(void (**)(__int64))(*v13_.v14 + v3))((__int64)v13_.v14);
      continue;
    }
    if (v13_.v14 != nullptr) {
      v3 = 40;
      goto LABEL_3;
    }
  }
  v5 = *(_QWORD*)(a1 + 368);
  v13_.v13[0] = GameData_20360b0;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  GameRoutine_1952d00_alt1(v5, 0, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v6 = 32;
  LABEL_12:
    (*(void (**)(__int64))(*v13_.v14 + v6))((__int64)v13_.v14);
  }
  else if (v13_.v14 != nullptr) {
    v6 = 40;
    goto LABEL_12;
  }
  result = ProcTheaterSceneAct_13e0e80_alt1(a1, 0, 1);
  v8 = *(_QWORD*)(a1 + 296);
  *(_BYTE*)(a1 + 329) = result & 1;
  v9 = *(unsigned __int8*)(a1 + 288);
  if ((v9 & 1) != 0) {
    v10 = v8;
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = *(_QWORD*)GameData_212dce8;
    result = SceneManager_138c8e0(*(_QWORD*)GameData_212dce8, a1 + 288);
    if ((result & 1) != 0) {
      LODWORD(v13_.v13[1]) = 0;
      v13_.v13[0] = GameData_20330a8;
      v13_.v14 = v13_.v13;
      SceneManager_138d7c0(v11, a1 + 288, (__int64)v13_.v13);
      result = (__int64)v13_.v14;
      if (v13_.v14 == v13_.v13) {
        v12 = 32;
        return (*(__int64 (**)(__int64))(*v13_.v14 + v12))((__int64)v13_.v14);
      }
      else if (v13_.v14 != nullptr) {
        v12 = 40;
        return (*(__int64 (**)(__int64))(*v13_.v14 + v12))((__int64)v13_.v14);
      }
    }
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dd940(__int64 result)
{
  __int64 v1;
  char v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  __int64 v14;
  __int64 v15;

  v1 = result;
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_7;
  }
  if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
          1 <=
      2) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v2 = (v4 & v3) == 0;
  LABEL_7:
    if ((v2 & 1) != 0) {
      goto LABEL_9;
    }
  }
  if ((*(_BYTE*)(result + 329) & 1) == 0) {
    return result;
  }
LABEL_9:
  v5 = *(_QWORD*)(result + 368);
  if ((*(_BYTE*)(v5 + 136) & 1) == 0) {
    result = *(_QWORD*)(v5 + 96);
    *(_QWORD*)(v5 + 96) = 0;
    *(_BYTE*)(v5 + 136) = 1;
    if (result == v5 + 64) {
      v6 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_15;
      }
      v6 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
  LABEL_15:
    v7 = *(_QWORD*)(v5 + 112);
    v8 = *(_QWORD*)(v5 + 120);
    if (v7 == v8) {
    LABEL_16:
      *(_QWORD*)(v5 + 120) = v7;
      goto LABEL_17;
    }
    while (1) {
      result = *(_QWORD*)(v8 - 16);
      *(_QWORD*)(v8 - 16) = 0;
      if (v8 - 48 == result) {
        v15 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_27;
        }
        v15 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
      result = *(_QWORD*)(v8 - 16);
      if (v8 - 48 == result) {
        v14 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_27;
        }
        v14 = 40;
      }
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
    LABEL_27:
      v8 -= 64;
      if (v8 == v7) {
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  v9 = *(unsigned __int8**)(v1 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

void ProcTheaterSceneAct_13dde20(__int64 a1)
{
  char* v2;
  char v3;
  unsigned __int64 v4;
  char* v5;
  char v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  char v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
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
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  char v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    const char* v56[4];
    const char** v57;
  } v56_;
  struct {
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v58_;
  _BYTE v61[4];
  struct {
    __int64 v62;
    unsigned __int64 v63;
    unsigned __int64 v64;
  } v62_;

  v62_.v63 = 0;
  v62_.v64 = 0;
  v62_.v62 = 0;
  v2 = game_13e3e50(a1 + 312, 0);
  v3 = *(_BYTE*)(a1 + 312);
  v56_.v56[0] = v2;
  v61[0] = v3;
  v4 = ProcTheaterSceneAct_13e18a0_alt1(&v62_.v62, v56_.v56, v61);
  v62_.v63 = v4;
  v5 = game_13e3e50(a1 + 312, 1u);
  v6 = *(_BYTE*)(a1 + 313);
  v56_.v56[0] = v5;
  v61[0] = v6;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 >= v62_.v64) {
    v12 = ProcTheaterSceneAct_13e18a0_alt1(&v62_.v62, v56_.v56, v61);
    goto LABEL_13;
  }
  v8 = (__int64)v5;
  v9 = strlen_alt1(v5);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_84;
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate_alt1(*v7, v13, 16, 0);
    *(_QWORD*)(v4 + 8) = v10;
    *(_QWORD*)(v4 + 16) = v11;
    *(_QWORD*)v4 = v13 | 1;
  }
  else {
    *(_BYTE*)v4 = 2 * v9;
    v11 = v4 + 1;
    if (v9 == 0) {
      goto LABEL_12;
    }
  }
  memmove_alt1(v11, v8, v10);
LABEL_12:
  *(_BYTE*)(v11 + v10) = 0;
  *(_BYTE*)(v4 + 24) = v6;
  v12 = v4 + 32;
LABEL_13:
  v62_.v63 = v12;
  v14 = game_13e3e50(a1 + 312, 2u);
  v15 = *(_BYTE*)(a1 + 314);
  v56_.v56[0] = v14;
  v61[0] = v15;
  if (v12 >= v62_.v64) {
    v20 = ProcTheaterSceneAct_13e18a0_alt1(&v62_.v62, v56_.v56, v61);
    goto LABEL_25;
  }
  v16 = (__int64)v14;
  v17 = strlen_alt1(v14);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_84:
    String_60a1d0_alt1();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v17 | 7) + 1;
    }
    v19 = fw_memory_HeapManager_Allocate_alt1(*v7, v21, 16, 0);
    *(_QWORD*)(v12 + 8) = v18;
    *(_QWORD*)(v12 + 16) = v19;
    *(_QWORD*)v12 = v21 | 1;
  }
  else {
    *(_BYTE*)v12 = 2 * v17;
    v19 = v12 + 1;
    if (v17 == 0) {
      goto LABEL_24;
    }
  }
  memmove_alt1(v19, v16, v18);
LABEL_24:
  *(_BYTE*)(v19 + v18) = 0;
  *(_BYTE*)(v12 + 24) = v15;
  v20 = v12 + 32;
LABEL_25:
  v22 = v62_.v62;
  v62_.v63 = v20;
  v58_.v58 = 0;
  v58_.v59 = 0;
  v23 = v20 - v62_.v62;
  v58_.v60 = 0;
  if (v20 != v62_.v62) {
    if (v23 < 0) {
      GameRoutine_1115ca0_alt1();
    }
    v24 = fw_memory_HeapManager_Allocate_alt1(*v7, v20 - v62_.v62, 16, 0);
    v25 = 0;
    v58_.v58 = v24;
    v58_.v60 = v24 + v23;
    do {
      v31 = (__int64*)(v22 + v25);
      v32 = (__int64*)(v24 + v25);
      if ((*(_BYTE*)(v22 + v25) & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v32, v31[2], v31[1]);
      }
      else {
        v26 = *v31;
        v27 = v31[1];
        v28 = v31[2];
        v32[1] = v27;
        v32[2] = v28;
        *v32 = v26;
      }
      v29 = v22 + v25;
      v30 = v24 + v25;
      v25 += 32;
      *(_BYTE*)(v30 + 24) = *(_BYTE*)(v29 + 24);
    } while (v22 + v25 != v20);
    v58_.v59 = v24 + v25;
  }
  v33 = *(_QWORD*)(a1 + 320);
  if (v33 != 0) {
    v34 = *(unsigned __int8*)(a1 + 312);
    v35 = v33 + 32;
    if (v34 == 8) {
      v36 = 0;
    }
    else {
      v36 = *(char*)(v35 + v34);
    }
    v38 = *(unsigned __int8*)(a1 + 313);
    if (v38 == 8) {
      v39 = 0;
    }
    else {
      v39 = *(char*)(v35 + v38);
    }
    if (v36 > v39) {
      LOBYTE(v34) = *(_BYTE*)(a1 + 313);
    }
    v40 = *(unsigned __int8*)(a1 + 314);
    if (v36 >= v39) {
      v36 = v39;
    }
    if (v40 == 8) {
      v41 = 0;
    }
    else {
      v41 = *(char*)(v35 + v40);
    }
    if (v36 <= v41) {
      v37 = v34;
    }
    else {
      v37 = *(_BYTE*)(a1 + 314);
    }
  }
  else {
    v37 = 8;
  }
  game_facility_anonymous_ProcTheaterUI_CreateBindChoice_alt1(
      a1, &v58_.v58, v37, (__int64*)(a1 + 352));
  v42 = v58_.v58;
  if (v58_.v58 != 0) {
    v43 = v58_.v59;
    if (v58_.v58 == v58_.v59) {
      goto LABEL_62;
    }
    v44 = v58_.v59;
    do {
      v45 = *(_BYTE*)(v44 - 32);
      v44 -= 32;
      if ((v45 & 1) != 0) {
        v46 = *(_QWORD*)(v43 - 16);
        if (v46 != 0) {
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v7 + v47, v46);
        }
      }
      v43 = v44;
    } while (v44 != v42);
    v58_.v59 = v42;
    v42 = v58_.v58;
    if (v58_.v58 != 0) {
    LABEL_62:
      v48 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v7 + v48, v42);
    }
  }
  v49 = *(_QWORD*)(a1 + 352);
  v56_.v57 = nullptr;
  GameRoutine_1952d00_alt1(v49, 0, (__int64)v56_.v56);
  if (v56_.v57 == v56_.v56) {
    v50 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_70;
    }
    v50 = 40;
  }
  (*(void (**)(const char**)) & (*v56_.v57)[v50])(v56_.v57);
LABEL_70:
  if (v22 != 0) {
    if (v20 != v22) {
      v51 = v20;
      do {
        v52 = *(_BYTE*)(v51 - 32);
        v51 -= 32;
        if ((v52 & 1) != 0) {
          v53 = *(_QWORD*)(v20 - 16);
          if (v53 != 0) {
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v54 = 128;
            }
            else {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v7 + v54, v53);
          }
        }
        v20 = v51;
      } while (v51 != v22);
    }
    v55 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v55, v22);
  }
}

__int64 ProcTheaterSceneAct_13de2a0(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 result;
  __int64 v27;
  char v28;
  __int64 v29;

  v1 = *(_QWORD*)(a1 + 352);
  *(_BYTE*)(a1 + 328) = 8;
  if ((*(_BYTE*)(v1 + 136) & 1) == 0) {
    v3 = *(_QWORD**)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (v3 == (_QWORD*)(v1 + 64)) {
      v4 = 32;
    }
    else {
      if (v3 == nullptr) {
        goto LABEL_7;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  LABEL_7:
    v5 = *(_QWORD*)(v1 + 112);
    v6 = *(_QWORD*)(v1 + 120);
    if (v5 == v6) {
    LABEL_8:
      *(_QWORD*)(v1 + 120) = v5;
      goto LABEL_9;
    }
    while (1) {
      v10 = *(_QWORD**)(v6 - 16);
      *(_QWORD*)(v6 - 16) = 0;
      if ((_QWORD*)(v6 - 48) == v10) {
        v11 = 32;
      }
      else {
        if (v10 == nullptr) {
          goto LABEL_15;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
      v12 = *(_QWORD**)(v6 - 16);
      if ((_QWORD*)(v6 - 48) == v12) {
        v9 = 32;
      }
      else {
        if (v12 == nullptr) {
          goto LABEL_15;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*v12 + v9))((__int64)v12);
    LABEL_15:
      v6 -= 64;
      if (v6 == v5) {
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  if (GameData_2236778 == 0 ||
      ((v7 = *(unsigned int*)(GameData_2236778 + 840)) & 0x80000000) != 0) {
    v13 = *(_QWORD*)(a1 + 320);
    if (v13 != 0) {
      v14 = *(unsigned __int8*)(a1 + 312);
      v15 = v13 + 32;
      if (v14 == 8) {
        v16 = 0;
      }
      else {
        v16 = *(char*)(v15 + v14);
      }
      v17 = *(unsigned __int8*)(a1 + 313);
      if (v17 == 8) {
        v18 = 0;
      }
      else {
        v18 = *(char*)(v15 + v17);
      }
      if (v16 > v18) {
        LOBYTE(v14) = *(_BYTE*)(a1 + 313);
      }
      v19 = *(unsigned __int8*)(a1 + 314);
      if (v16 >= v18) {
        v16 = v18;
      }
      if (v19 == 8) {
        v20 = 0;
      }
      else {
        v20 = *(char*)(v15 + v19);
      }
      if (v16 <= v20) {
        v8 = v14;
      }
      else {
        v8 = *(_BYTE*)(a1 + 314);
      }
    }
    else {
      v8 = 8;
    }
  }
  else {
    if ((unsigned int)v7 >= 3) {
      String_60a250("array::at");
    }
    v8 = *(_BYTE*)(a1 + v7 + 312);
  }
  v21 = *(int*)(a1 + 264);
  v22 = *(_QWORD*)(a1 + 184);
  *(_BYTE*)(a1 + 328) = v8;
  v23 = *(_QWORD*)(a1 + 208);
  v24 = *(_QWORD*)(v22 + 8 * v21);
  if (v24 != 0) {
    v24 = *(_QWORD*)(v24 + 392);
  }
  v29 = v24;
  v27 = game_13e5040(v23, &v29);
  v28 = v25;
  result = GameRoutine_13da230(a1 + 216, &v27);
  if (GameData_2236778 != 0) {
    return LayoutAccessor_155cda0(GameData_2236778 + 272, "StoryOut", 0);
  }
  return result;
}

__int64

game_facility_anonymous_ProcTheaterSceneAct_PlayHighlightReaction(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  for (i = 1; i != 16; ++i) {
    v4 = *(_QWORD*)(a1 + 368);
    v8_.v8[0] = GameData_20362b0;
    v8_.v8[1] = a1;
    v8_.v8[2] = i;
    v8_.v9 = v8_.v8;
    GameRoutine_19526e0(v4, (__int64)v8_.v8, (float)(unsigned int)i);
    if (v8_.v9 == v8_.v8) {
      v3 = 32;
    LABEL_3:
      (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
      continue;
    }
    if (v8_.v9 != nullptr) {
      v3 = 40;
      goto LABEL_3;
    }
  }
  v5 = *(_QWORD*)(a1 + 368);
  v8_.v8[0] = GameData_2036330;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_1952d00_alt1(v5, 0, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  LABEL_12:
    (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  }
  else if (v8_.v9 != nullptr) {
    v6 = 40;
    goto LABEL_12;
  }
  result = ProcTheaterSceneAct_13e0e80_alt1(a1, 0, 0);
  *(_BYTE*)(a1 + 329) = result & 1;
  return result;
}

__int64 ProcTheaterSceneAct_13de8d0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int v6;
  unsigned __int64 v7;
  __int64 v8;

  v1 = *(int*)(a1 + 264);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v1;
    v8 = a1;
    v6 = __cxa_guard_acquire(&GameData_2241878);
    v1 = v7;
    a1 = v8;
    if (v6 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560(&GameData_2241868);
      __cxa_guard_release(&GameData_2241878);
      v1 = v7;
      a1 = v8;
    }
  }
  v2 = *(_QWORD*)(a1 + 216);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 224) - v2) >> 2);
  v4 = v2 + 12LL * (int)v1;
  if (v3 <= v1) {
    return GameRoutine_149eed0(&GameData_2241868);
  }
  else {
    return GameRoutine_149eed0(v4);
  }
}

__int64 ProcTheaterSceneAct_13de9a0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  int v7;
  unsigned __int64 v8;
  __int64 v9;

  v1 = *(int*)(a1 + 264);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v8 = v1;
    v9 = a1;
    v7 = __cxa_guard_acquire(&GameData_2241878);
    v1 = v8;
    a1 = v9;
    if (v7 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560(&GameData_2241868);
      __cxa_guard_release(&GameData_2241878);
      v1 = v8;
      a1 = v9;
    }
  }
  v2 = *(_QWORD*)(a1 + 216);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 224) - v2) >> 2);
  v4 = (__int64*)(v2 + 12LL * (int)v1);
  if (v3 <= v1) {
    v5 = &GameData_2241868;
  }
  else {
    v5 = v4;
  }
  return GameRoutine_1113400(
      *((unsigned __int8*)v5 + 8) == 1,
      *(_QWORD*)(*(_QWORD*)(a1 + 184) + 8LL * *(int*)(a1 + 264)));
}

void ProcTheaterSceneAct_13deaa0(__int64 a1)
{
  unsigned __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 i;
  __int64 v30;
  __int64 v31;
  int v32;
  struct {
    __int64* v33;
    __int64 v34;
  } v33_;
  _BYTE v35[8];
  _BYTE v36[40];
  struct {
    __int64 v37[2];
    __int64 v38;
  } v37_;

  v1 = *(int*)(a1 + 264);
  v2 = &GameData_2241868;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v31 = a1;
    v32 = __cxa_guard_acquire_alt1((__int64)&GameData_2241878);
    a1 = v31;
    if (v32 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560_alt1(&GameData_2241868);
      __cxa_guard_release_alt1((__int64)&GameData_2241878);
      a1 = v31;
    }
  }
  v3 = *(_QWORD*)(a1 + 216);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (*(_QWORD*)(a1 + 224) - v3) >> 2;
  v6 = (__int64*)(v3 + 12LL * (int)v1);
  if (0xAAAAAAAAAAAAAAABLL * v5 > v1) {
    v2 = v6;
  }
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  v8 = (atomic_ullong*)(v7 + 8);
  *(_QWORD*)(v7 + 16) = 0;
  v9 = v7;
  v10 = GameData_2131678;
  *(_QWORD*)(v7 + 24) = 0;
  v11 = (__int64*)(v7 + 24);
  *(_DWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_DWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_WORD*)(v7 + 80) = 0;
  *(_WORD*)(v7 + 116) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_BYTE*)(v7 + 160) = 0;
  *(_BYTE*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_DWORD*)(v7 + 127) = 0;
  *(_QWORD*)v7 = v10 + 16;
  *(_DWORD*)(v7 + 48) = 0x2000;
  *(_WORD*)(v7 + 108) = 256;
  *(_DWORD*)(v7 + 112) = -1082130432;
  *(_DWORD*)(v7 + 292) = 2;
  v12 = *((unsigned __int8*)v2 + 8);
  if (v12 == 2) {
    v15 = fw_memory_HeapManager_Allocate_alt1(*v4, 26, 16, 0);
    *(_BYTE*)(v15 + 23) = 0;
    v16 = 23;
    v17 = v15;
    *(_QWORD*)v15 = 0xE95F94BCE6BA87E5LL;
    *(_QWORD*)(v15 + 8) = 0xA282E89E8AE6B881LL;
    *(_QWORD*)(v15 + 15) = 0xA39BE9A184E75FA2LL;
  }
  else {
    if (v12 == 1) {
      v13 = fw_memory_HeapManager_Allocate_alt1(*v4, 32, 16, 0);
      v14 = &GameData_1aa2351;
    }
    else {
      if (*((_BYTE*)v2 + 8) != 0) {
        v22 = v7;
        v25 = *v11;
        if (*v11 == 0) {
          goto LABEL_39;
        }
        goto LABEL_31;
      }
      v13 = fw_memory_HeapManager_Allocate_alt1(*v4, 32, 16, 0);
      v14 = &GameData_1ae74c5;
    }
    v15 = v13;
    *(_BYTE*)(v13 + 29) = 0;
    v16 = 29;
    v17 = v13;
    v18 = v14[1];
    *(_QWORD*)v13 = *v14;
    *(_QWORD*)(v13 + 8) = v18;
    v19 = v14[2];
    v20 = *(__int64*)((char*)v14 + 21);
    *(_QWORD*)(v13 + 16) = v19;
    *(_QWORD*)(v13 + 21) = v20;
  }
  fw_text_String_CopyTerminated_alt1(v37_.v37, v17, v16);
  v36[0] = 0;
  v36[16] = 0;
  v35[0] = 0;
  v35[4] = 0;
  GameRoutine_1950100_alt1((void*)(&v33_.v33), (__int64)v37_.v37, (__int64)v36,
                           (__int64)v35, 1u);
  if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v21, v37_.v38);
  }
  v11 = v33_.v33;
  v22 = v33_.v34;
  if (v33_.v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33_.v34 + 8), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt2(v22);
    }
  }
  v23 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  v24 = 128;
  if (*(_QWORD*)(*v4 + 200) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v4 + v24, v15);
  v25 = *v11;
  if (*v11 != 0) {
  LABEL_31:
    if (*(_DWORD*)(v25 + 16) == *((_DWORD*)v11 + 2)) {
      v26 = ProcTheaterUI_1113db0_alt1();
      v27 = *v11;
      if (*v11 != 0 && *(_DWORD*)(v27 + 16) == *((_DWORD*)v11 + 2)) {
        v28 = *(unsigned int*)(v27 + 36);
        if ((_DWORD)v28 != 0) {
          for (i = 0; i < v28; ++i) {
            v30 = *(_QWORD*)(v27 + 40 + 8 * i);
            if (v30 != 0) {
              *(_DWORD*)(v30 + 408) = v26 - 1;
              v28 = *(unsigned int*)(v27 + 36);
            }
          }
        }
      }
    }
  }
LABEL_39:
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
}

__int64 ProcTheaterSceneAct_13deea0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  float v4;
  __int64* v5;
  __int64* v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  _QWORD v12[33];

  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    v4 = 0x1.0000000000000p-1f;
    v12[25] = v2;
    v12[26] = v0;
    v12[27] = v1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224ae08,
                              memory_order_acquire) &
         1) == 0) {
      v9 = result;
      v10 = __cxa_guard_acquire_alt1((__int64)&GameData_224ae08);
      v4 = 0x1.0000000000000p-1f;
      v11 = v10;
      result = v9;
      if (v11 != 0) {
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)&GameData_224ae08);
        v4 = 0x1.0000000000000p-1f;
        result = v9;
      }
    }
    v5 = *(__int64**)(result + 32);
    v6 = *(__int64**)(result + 40);
    if (v5 != v6) {
      v7 = v4 * 0x1.f400000000000p+9f;
      do {
        result = snd_fnd_WeakHandle_isValid(v5);
        if ((result & 1) != 0) {
          v8 = snd_fnd_WeakHandle_get((__int64)v5);
          snd_Fade_Fade_10c830((__int64)v12, v7);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, v12, 0, 0x0.0p+0);
          result = snd_Fade_Destroy_Fade(v12);
        }
        v5 += 2;
      } while (v5 != v6);
    }
  }
  return result;
}

void ProcTheaterSceneAct_13deec0()
{
  __int64 v0;

  v0 = GameData_2236778;
  if (GameData_2236778 != 0) {
    LayoutAccessor_155cda0_alt1(GameData_2236778 + 624, "Out", nullptr);
    LayoutAccessor_155d940_alt1((__int64*)(v0 + 624));
    *(_DWORD*)(v0 + 816) = 3;
  }
}

__int64 ProcTheaterSceneAct_13def20(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(int*)(result + 264) + 1LL;
  v2 = *(_QWORD*)(result + 192) - *(_QWORD*)(result + 184);
  *(_DWORD*)(result + 264) = v1;
  if (v1 >= v2 >> 3) {
    if (GameData_2236778 != 0) {
      v3 = result;
      LayoutAccessor_155cda0(GameData_2236778 + 448, "CinemaOut", 0);
      result = v3;
    }
    v4 = *(_QWORD*)(result + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 3) {
            *(_QWORD*)(result + 16) = v4;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          return result;
        }
        v4 += 64;
      }
    }
  }
  return result;
}

unsigned __int64 ProcTheaterSceneAct_13defe0(unsigned __int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _BYTE* v4;

  v1 = *(unsigned __int8*)(result + 288);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(result + 296);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = result;
    result = SceneManager_138d3a0(*(_QWORD**)GameData_212dce8, result + 288);
    if ((*(_BYTE*)(v3 + 288) & 1) != 0) {
      v4 = *(_BYTE**)(v3 + 304);
      *(_QWORD*)(v3 + 296) = 0;
    }
    else {
      v4 = (_BYTE*)(v3 + 289);
      *(_BYTE*)(v3 + 288) = 0;
    }
    *v4 = 0;
  }
  return result;
}

_QWORD* game_facility_anonymous_ProcTheaterSceneAct_ShowAudience(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = *(_QWORD*)(a1 + 208);
  result = v10;
  v10[0] = GameData_20363b0;
  v11 = v10;
  if (*(_WORD*)(v2 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v2 + 160);
  v5 = 0;
  do {
    v6 = v11;
    if (v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310(v6, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11,
                                                  *(_QWORD*)(v2 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v11;
  if (v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v2 + 176) != 0) {
      v7 = 8LL * *(unsigned __int16*)(v2 + 176);
      v8 = 0;
      do {
        v6 = v11;
        if (v11 == nullptr) {
          goto LABEL_17;
        }
        (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(
            v11, *(_QWORD*)(v2 + 184) + v8);
        v8 += 8;
      } while (v7 != v8);
      result = v11;
    }
    if (result == v10) {
      v9 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
  }
  return result;
}

__int64 (***ProcTheaterSceneAct_13df160(__int64 (***result)(), __int64 a2))()
{
  int v2;
  __int64 (**v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 (**v19)();
    int v20;
    char gap12_[20];
    __int64 (***v21)();
  } v19_;

  v2 = *((_DWORD*)result + 60);
  if ((unsigned int)(v2 - 1) < 2) {
    v8 = result[26];
    result = &v19_.v19;
    v19_.v19 = GameData_2035f30;
    v19_.v21 = &v19_.v19;
    v19_.v20 = 2;
    if (*((_WORD*)v8 + 80) != 0) {
      v9 = 8LL * *((unsigned __int16*)v8 + 80);
      v10 = 0;
      do {
        if (v19_.v21 == nullptr) {
          goto LABEL_40;
        }
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v8[21] + v10);
        v10 += 8;
      } while (v9 != v10);
      result = v19_.v21;
      if (v19_.v21 == nullptr) {
        return result;
      }
    }
    if (*((_WORD*)v8 + 88) != 0) {
      v11 = 8LL * *((unsigned __int16*)v8 + 88);
      v12 = 0;
      do {
        if (v19_.v21 == nullptr) {
          goto LABEL_40;
        }
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v8[23] + v12);
        v12 += 8;
      } while (v11 != v12);
    LABEL_33:
      result = v19_.v21;
    }
  }
  else if (v2 != 0) {
    if (v2 != 3) {
      return result;
    }
    v3 = result[26];
    result = &v19_.v19;
    v19_.v19 = GameData_2035f30;
    v19_.v21 = &v19_.v19;
    v19_.v20 = 3;
    if (*((_WORD*)v3 + 80) != 0) {
      v4 = 8LL * *((unsigned __int16*)v3 + 80);
      v5 = 0;
      do {
        if (v19_.v21 == nullptr) {
          goto LABEL_40;
        }
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v3[21] + v5);
        v5 += 8;
      } while (v4 != v5);
      result = v19_.v21;
      if (v19_.v21 == nullptr) {
        return result;
      }
    }
    if (*((_WORD*)v3 + 88) != 0) {
      v6 = 8LL * *((unsigned __int16*)v3 + 88);
      v7 = 0;
      while (v19_.v21 != nullptr) {
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v3[23] + v7);
        v7 += 8;
        if (v6 == v7) {
          goto LABEL_33;
        }
      }
      goto LABEL_40;
    }
  }
  else {
    v13 = result[26];
    result = &v19_.v19;
    v19_.v19 = GameData_2035f30;
    v19_.v21 = &v19_.v19;
    v19_.v20 = 1;
    if (*((_WORD*)v13 + 80) != 0) {
      v14 = 8LL * *((unsigned __int16*)v13 + 80);
      v15 = 0;
      do {
        if (v19_.v21 == nullptr) {
          goto LABEL_40;
        }
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v13[21] + v15);
        v15 += 8;
      } while (v14 != v15);
      result = v19_.v21;
      if (v19_.v21 == nullptr) {
        return result;
      }
    }
    if (*((_WORD*)v13 + 88) != 0) {
      v16 = 8LL * *((unsigned __int16*)v13 + 88);
      v17 = 0;
      while (v19_.v21 != nullptr) {
        ((void (*)(__int64 (***)(void), char*))(*v19_.v21)[6])(
            v19_.v21, (char*)v13[23] + v17);
        v17 += 8;
        if (v16 == v17) {
          goto LABEL_33;
        }
      }
    LABEL_40:
      GameRoutine_60a310_alt1();
    }
  }
  if (result == &v19_.v19) {
    v18 = 4;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v18 = 5;
  }
  return (__int64 (***)(void))(
      (__int64 (*)(__int64 (***)(void), __int64))(*result)[v18])(result, a2);
}

__int64 ProcTheaterSceneAct_13df3b0(__int64 a1)
{
  unsigned int v1;

  v1 = *(_DWORD*)(a1 + 240) - 1;
  if (v1 > 2) {
    return GameRoutine_149edd0(&GameData_1af6bd7);
  }
  else {
    return GameRoutine_149edd0(*(&GameData_2036610 + v1));
  }
}

void ProcTheaterSceneAct_13df3e0()
{
  __int64 v0;
  __int64 v1;
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
    __int64 v10;
    __int64 v11;
  } v10_;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt2(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = fw_memory_g_heap_manager_ptr;
        v5 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *(_BYTE*)(v5 + 32) = 0;
        v8_.v8[0] = 41;
        v8_.v8[1] = 32;
        v8_.v9 = v5;
        *(_QWORD*)v5 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v5 + 8) = 0xE3BC83E3AF83E3A9LL;
        *(_QWORD*)(v5 + 16) = 0xBCE6BA87E55FAF82LL;
        *(_QWORD*)(v5 + 24) = 0x94BCE682B5E75F94LL;
        game_facility_144f120_alt1((void*)(&v10_.v10), v1, (__int64)v8_.v8);
        v6 = v10_.v11;
        if (v10_.v11 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt2(v6);
        }
        if ((v8_.v8[0] & 1) != 0 && v8_.v9 != 0) {
          v7 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v7, v8_.v9);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt2(v3);
      }
    }
  }
}

void game_facility_anonymous_ProcTheaterSceneAct_SetResultCamera()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt2(v0);
    if (v3 != 0) {
      if (v1 == 0) {
        goto LABEL_14;
      }
      v6_.v6[0] = GameData_2036430;
      v6_.v7 = v6_.v6;
      v8_.v9 = v8_.v8;
      v8_.v8[0] = GameData_2036430;
      GameRoutine_14514d0(v8_.v8, (_QWORD*)(v1 + 272));
      if (v8_.v9 == v8_.v8) {
        v4 = 32;
      }
      else {
        if (v8_.v9 == nullptr) {
          goto LABEL_9;
        }
        v4 = 40;
      }
      (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
    LABEL_9:
      if (v6_.v7 == v6_.v6) {
        v5 = 32;
      }
      else {
        if (v6_.v7 == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak_alt2(v3);
      }
    }
  }
}

__int64 ProcTheaterSceneAct_13df660(__int64 result)
{
  if (*(_QWORD*)(result + 256) != 0) {
    return GameRoutine_13da730(result + 184, result);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13df9f0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  _QWORD** v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64** v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v58[2];
  _BYTE v59[24];
  struct {
    __int64 v60;
    __int64 v61;
  } v60_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 384, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  v7 = GameData_2132488;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 164) = 0;
  *(_QWORD*)(v5 + 152) = v7 + 2;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v5 + 176) = 0;
  *(_BYTE*)(v5 + 180) = 0;
  *(_QWORD*)(v5 + 168) = v8 + 2;
  GameRoutine_1418aa0();
  v9 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v10 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v4, 336, 16, 0);
    GameRoutine_13892a0_alt1((__int64)v10);
    v11 = *v10;
    *v9 = v10;
    (*(void (**)(__int64*))(v11 + 16))(v10);
  }
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)v5 = game_facility_anonymous_ProcTheaterSceneAct_vtable;
  *(_QWORD*)(v5 + 152) = GameData_2036570;
  v13 = *a2;
  v12 = a2[1];
  v14 = v12 - *a2;
  if (v12 != *a2) {
    if ((v14 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(*v4, v12 - *a2, 16, 0);
    v16 = v15 + v14;
    *(_QWORD*)(v5 + 184) = v15;
    *(_QWORD*)(v5 + 192) = v15;
    *(_QWORD*)(v5 + 200) = v15 + v14;
    memcpy_alt1(v15, v13, v14);
    *(_QWORD*)(v5 + 192) = v16;
  }
  v17 = a2[3];
  v18 = a2[4];
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = v17;
  *(_QWORD*)(v5 + 216) = 0;
  v19 = a2[5];
  v20 = v19 - v18;
  if (v19 != v18) {
    if (0xAAAAAAAAAAAAAAABLL * (v20 >> 2) >= 0x1555555555555556LL) {
      GameRoutine_13db2e0();
    }
    v21 = fw_memory_HeapManager_Allocate_alt1(*v4, v20, 16, 0);
    *(_QWORD*)(v5 + 216) = v21;
    *(_QWORD*)(v5 + 224) = v21;
    *(_QWORD*)(v5 + 232) = v21 + v20;
    v22 = 12 * ((v20 - 12) / 0xCuLL) + 12;
    memcpy_alt1(v21, v18, v22);
    *(_QWORD*)(v5 + 224) = v21 + v22;
  }
  v23 = a2[7];
  v24 = a2[8];
  v25 = a2[9];
  *(_DWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 320) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_WORD*)(v5 + 288) = 0;
  *(_BYTE*)(v5 + 330) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 336) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_WORD*)(v5 + 312) = 2056;
  *(_BYTE*)(v5 + 314) = 8;
  *(_QWORD*)(v5 + 240) = v23;
  *(_QWORD*)(v5 + 248) = v24;
  *(_QWORD*)(v5 + 256) = v25;
  *(_WORD*)(v5 + 328) = 8;
  GameRoutine_1486f50();
  *(_BYTE*)(v5 + 314) = 8;
  *(_WORD*)(v5 + 312) = 2056;
  v26 = ProcTheaterSceneAct_13e2420((__int64)&GameData_1afa938);
  v27 = (_QWORD**)GameData_2130fc0[0];
  v28 = *(_QWORD**)GameData_2130fc0[0];
  v29 = fw_memory_HeapManager_Allocate_alt1(*v4, 40, 16, 0);
  *(_BYTE*)(v29 + 34) = 0;
  *(_QWORD*)v59 = 41;
  *(_QWORD*)&v59[8] = 34;
  *(_QWORD*)&v59[16] = v29;
  *(_WORD*)(v29 + 32) = -26749;
  *(_QWORD*)v29 = 0x83E3AB83E38683E3LL;
  *(_QWORD*)(v29 + 8) = 0xB989E75FA882E39ELL;
  *(_QWORD*)(v29 + 16) = 0x83E3AFB9E6A588E5LL;
  *(_QWORD*)(v29 + 24) = 0xE38383E3AD83E386LL;
  game_facility_19532e0((void*)(&v60_.v60), v28, v59, v26);
  v30 = v60_.v60;
  v31 = v60_.v61;
  v32 = *(_QWORD*)(v5 + 344);
  v60_.v60 = 0;
  v60_.v61 = 0;
  *(_QWORD*)(v5 + 336) = v30;
  *(_QWORD*)(v5 + 344) = v31;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak_alt2(v32);
  }
  v33 = v60_.v61;
  if (v60_.v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60_.v61 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak_alt2(v33);
    if ((v59[0] & 1) == 0) {
      goto LABEL_21;
    }
  }
  else if ((v59[0] & 1) == 0) {
    goto LABEL_21;
  }
  if (*(_QWORD*)&v59[16] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v34, *(__int64*)&v59[16]);
  }
LABEL_21:
  v35 = *v27;
  v59[19] = 0;
  v59[0] = 36;
  v58[1] = (unsigned __int64)&GameData_1ae74e3;
  *(_WORD*)&v59[17] = -23934;
  *(_QWORD*)&v59[1] = 0xA0E59B81E38BA6E8LL;
  *(_QWORD*)&v59[9] = 0xE89E8AE6B881E9B4LL;
  v36 = 0x0.0p+0f;
  v58[0] = game_HashString_alt1((__int64)&GameData_1ae74e3);
  if (game_GameModeData_instance_ != 0) {
    v37 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v58);
    if (v37 != 0) {
      v36 = (float)*(int*)(v37 + 32);
    }
  }
  game_facility_19532e0((void*)(&v60_.v60), v35, v59, v36);
  v38 = v60_.v60;
  v39 = v60_.v61;
  v40 = *(_QWORD*)(v5 + 360);
  v60_.v60 = 0;
  v60_.v61 = 0;
  *(_QWORD*)(v5 + 352) = v38;
  *(_QWORD*)(v5 + 360) = v39;
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak_alt2(v40);
  }
  v41 = v60_.v61;
  if (v60_.v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60_.v61 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt2(v41);
    if ((v59[0] & 1) == 0) {
      goto LABEL_35;
    }
  }
  else if ((v59[0] & 1) == 0) {
    goto LABEL_35;
  }
  if (*(_QWORD*)&v59[16] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v42, *(__int64*)&v59[16]);
  }
LABEL_35:
  v43 = *v27;
  v59[13] = 0;
  v59[0] = 24;
  *(_DWORD*)&v59[9] = -1935546190;
  *(_QWORD*)&v59[1] = 0x80E9808AE694BCE6LL;
  game_facility_19532e0((void*)(&v60_.v60), v43, v59, 0x1.e000000000000p+3f);
  v44 = v60_.v60;
  v45 = v60_.v61;
  v46 = *(_QWORD*)(v5 + 376);
  v60_.v60 = 0;
  v60_.v61 = 0;
  *(_QWORD*)(v5 + 368) = v44;
  *(_QWORD*)(v5 + 376) = v45;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt2(v46);
  }
  v47 = v60_.v61;
  if (v60_.v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60_.v61 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak_alt2(v47);
    if ((v59[0] & 1) == 0) {
      goto LABEL_46;
    }
  }
  else if ((v59[0] & 1) == 0) {
    goto LABEL_46;
  }
  if (*(_QWORD*)&v59[16] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v48, *(__int64*)&v59[16]);
  }
LABEL_46:
  v49 = fw_memory_HeapManager_Allocate_alt1(*v4, 112, 16, 0);
  v50 = (__int64*)GameData_2131208[0];
  if (*(_QWORD*)GameData_2131208[0] == 0) {
    *GameData_2131428 = 1;
  }
  *(_WORD*)(v49 + 8) = 0;
  *(_WORD*)(v49 + 32) = 0;
  *(_QWORD*)(v49 + 56) = 0;
  *(_QWORD*)(v49 + 64) = 0;
  *(_QWORD*)(v49 + 72) = 0;
  *(_QWORD*)(v49 + 80) = 0;
  *(_DWORD*)(v49 + 88) = 1065353216;
  v51 = GameData_2131420;
  *(_QWORD*)(v49 + 96) = 0;
  *(_QWORD*)(v49 + 104) = 0;
  *v50 = v49;
  *(_QWORD*)v49 = v51 + 2;
  GameRoutine_14245d0();
  game_facility_TheaterSceneDiff_Initialize_1423e60_alt1((_QWORD*)*v50,
                                                         v5 + 184);
  v52 = fw_memory_HeapManager_Allocate_alt1(*v4, 48, 16, 0);
  v53 = (__int64**)GameData_2131210[0];
  if (*(_QWORD*)GameData_2131210[0] == 0) {
    *(_QWORD*)GameData_2131210[0] = v52;
    *GameData_2131360 = 1;
  }
  *(_QWORD*)(v52 + 24) = 0;
  *(_QWORD*)(v52 + 32) = 0;
  *(_QWORD*)(v52 + 16) = 0;
  *(_QWORD*)(v52 + 8) = 0;
  v54 = v52 + 8;
  *(_DWORD*)(v52 + 40) = 1065353216;
  v55 = (__int64*)v52;
  *(_QWORD*)v52 = GameData_2131630[0] + 2;
  game_facility_14994e0(v52 + 8);
  game_facility_14994e0(v54);
  game_facility_14994e0(v54);
  v56 = *v55;
  *v53 = v55;
  (*(void (**)(__int64*))(v56 + 16))(v55);
  GameHr_1112d80(v5);
  return ProcInst_657850_alt1(v5, (__int64)&GameData_2171098,
                              "ProcTheaterSceneAct", 1, a1);
}

void ProcTheaterSceneAct_13e0100(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;

  ProcTheaterSceneAct_13e04f0((void*)(v23_.v23), a1);
  GameRoutine_1a09ce0_alt1((__int64)v23_.v23, "_", 1u);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (const char*)(a2 + 1);
  }
  else {
    v7 = *((const char**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0_alt1((__int64)v23_.v23, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v23_.v24);
  }
  if (v10 == nullptr) {
    ProcTheaterSceneAct_13e02f0((void*)(v23_.v23), a1, a2);
    v13 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
    v14 = v13;
    if (v13 != nullptr) {
      v15 = v13[10];
      if (v15 == 0) {
        goto LABEL_38;
      }
      (*(void (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
    }
    if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v23_.v24);
    }
    if (v14 == nullptr) {
      ProcTheaterSceneAct_13e03f0((void*)(v23_.v23), a1, a2);
      v17 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)v23_.v23);
      v18 = v17;
      if (v17 != nullptr) {
        v19 = v17[10];
        if (v19 == 0) {
          goto LABEL_38;
        }
        (*(void (**)(__int64))(*(_QWORD*)v19 + 48LL))(v19);
      }
      if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v23_.v24);
      }
      if (v18 == nullptr) {
        v21 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
        if (v21 != nullptr) {
          v22 = v21[10];
          if (v22 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 48LL))(v22);
            return;
          }
        LABEL_38:
          GameRoutine_60a310_alt1();
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

ProcTheaterSceneAct_13e02f0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
  }
  else {
    v5 = a1 + 9;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void

ProcTheaterSceneAct_13e03f0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
  }
  else {
    v5 = a1 + 33;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a3 = 2 * v6;
  v8 = (__int64)a3 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a3, &GameData_1ac690d, 1);
  v10 = *a2;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = a2 + 1;
  }
  else {
    v13 = *((unsigned __int8**)a2 + 2);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a09ce0(a3, v13, v14);
    return;
  }
}

__attribute__((swiftcall)) void ProcTheaterSceneAct_13e04f0(PSEUDO_X8 x8_,
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
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
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

__int64

game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 208);
  if (*(_BYTE*)(v2 + 72) == 3) {
    GameRoutine_1795980(*(_QWORD*)(result + 8), 1, *(_QWORD*)(v2 + 48));
    v3 = *(_QWORD*)(v1 + 336);
    v5_.v5[0] = GameData_2035e20;
    v5_.v6 = v5_.v5;
    GameRoutine_1952d00_alt1(v3, 0, (__int64)v5_.v5);
    result = (__int64)v5_.v6;
    if (v5_.v6 == v5_.v5) {
      v4 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5_.v6 + v4))((__int64)v5_.v6);
  }
  return result;
}

void game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

__int64

game_facility_anonymous_ProcTheaterSceneAct_StartOpeningCameraWork_closure0_Invoke()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  float v4;
  __int64* v5;
  __int64* v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  _QWORD v12[28];

  result = GameData_224ae20;
  if (GameData_224ae20 != 0) {
    v4 = 0x1.0000000000000p-1f;
    v12[25] = v2;
    v12[26] = v0;
    v12[27] = v1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224ae08,
                              memory_order_acquire) &
         1) == 0) {
      v9 = result;
      v10 = __cxa_guard_acquire_alt1((__int64)&GameData_224ae08);
      v4 = 0x1.0000000000000p-1f;
      v11 = v10;
      result = v9;
      if (v11 != 0) {
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)&GameData_224ae08);
        v4 = 0x1.0000000000000p-1f;
        result = v9;
      }
    }
    v5 = *(__int64**)(result + 32);
    v6 = *(__int64**)(result + 40);
    if (v5 != v6) {
      v7 = v4 * 0x1.f400000000000p+9f;
      do {
        result = snd_fnd_WeakHandle_isValid(v5);
        if ((result & 1) != 0) {
          v8 = snd_fnd_WeakHandle_get((__int64)v5);
          snd_Fade_Fade_10c830((__int64)v12, v7);
          (*(void (**)(__int64, _QWORD*, _QWORD, double))(
              *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, v12, 0, 0x0.0p+0);
          result = snd_Fade_Destroy_Fade(v12);
        }
        v5 += 2;
      } while (v5 != v6);
    }
  }
  return result;
}

void game_facility_anonymous_ProcTheaterSceneAct_PlayAudienceMotion_closure_Invoke(
    __int64 a1, const char** a2)
{
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    char* v13;
  } v12_;
  struct {
    __int64 (**v14)();
    int v15;
    char gap44_[20];
    __int64 (***v16)();
  } v14_;

  v3 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v4 = *a2;
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = strlen_alt1(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v12_.v12[1] = v6;
    v12_.v13 = v7;
    v12_.v12[0] = v8 | 1;
    goto LABEL_12;
  }
  LOBYTE(v12_.v12[0]) = 2 * v5;
  v7 = (char*)v12_.v12 + 1;
  if (v5 != 0) {
  LABEL_12:
    memcpy_alt1((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  v9 = *(_DWORD*)(a1 + 8);
  if ((SceneManager_138c8e0(v3, (__int64)v12_.v12) & 1) != 0) {
    v14_.v15 = v9;
    v14_.v14 = GameData_20330a8;
    v14_.v16 = &v14_.v14;
    SceneManager_138d7c0(v3, (__int64)v12_.v12, (__int64)&v14_.v14);
    if (v14_.v16 == &v14_.v14) {
      v10 = 4;
      goto LABEL_18;
    }
    if (v14_.v16 != nullptr) {
      v10 = 5;
    LABEL_18:
      ((__int64 (*)(__int64))(*v14_.v16)[v10])((__int64)v14_.v16);
    }
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
  }
}

void game_facility_anonymous_ProcTheaterSceneAct_HideAudience_closure_Invoke(
    __int64 a1, const char** a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v2 = *(_QWORD*)GameData_212dce8;
  if (*a2 != nullptr) {
    v3 = *a2;
  }
  else {
    v3 = &GameData_1a9f09e;
  }
  v4 = strlen_alt1(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v10_.v10[1] = v5;
    v10_.v11 = v6;
    v10_.v10[0] = v7 | 1;
    goto LABEL_12;
  }
  LOBYTE(v10_.v10[0]) = 2 * v4;
  v6 = (char*)v10_.v10 + 1;
  if (v4 != 0) {
  LABEL_12:
    memcpy_alt1((__int64)v6, (__int64)v3, v5);
  }
  v6[v5] = 0;
  if ((SceneManager_138c8e0(v2, (__int64)v10_.v10) & 1) != 0) {
    v12_.v12[0] = GameData_2033228;
    v12_.v13 = v12_.v12;
    SceneManager_138d7c0(v2, (__int64)v10_.v10, (__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v8 = 32;
      goto LABEL_18;
    }
    if (v12_.v13 != nullptr) {
      v8 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v11);
  }
}

__int64 ProcTheaterSceneAct_13e0e80(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4;
  unsigned int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v25;
  struct {
    _BYTE v26[16];
    __int64 v27;
    char gap40_[8];
    _BYTE* v28;
  } v26_;
  struct {
    _BYTE v29[16];
    __int64 v30;
    char v31;
  } v29_;
  unsigned __int64 v32[2];

  v4 = *(_QWORD*)(a1 + 280);
  if (v4 != 0) {
    v7 = 1;
    if ((game_13e5ba0_alt1(v4, a2, a3 & 1) & 1) == 0) {
      v8 = a3 ^ 1;
      v9 = 0;
      v10 = GameData_212dce8;
      while (1) {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 160LL) + 8 * v9);
        v13 = *(_QWORD*)(v12 + 8);
        if (v13 != 0 && *(_BYTE*)(v13 + 289) == 1 &&
            (*(_BYTE*)(v13 + 288) & 1) != 0) {
          break;
        }
      LABEL_4:
        ++v9;
        if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
          v11 = 5;
        }
        else {
          v11 = 3;
        }
        if (v9 >= v11) {
          return 0;
        }
      }
      while (1) {
        if ((*(_BYTE*)(v13 + 300) & 0xFD) == 1) {
          goto LABEL_4;
        }
        v13 = *(_QWORD*)(v13 + 736);
        if (v13 == 0) {
          break;
        }
        if (*(_BYTE*)(v13 + 289) != 1 || *(_BYTE*)(v13 + 288) != 1) {
          goto LABEL_4;
        }
      }
      game_13e59c0_alt1((void*)(v29_.v29), *(_QWORD*)(a1 + 280), v9, a2,
                        a3 & 1);
      if (v29_.v31 != 1) {
      LABEL_37:
        if (v29_.v31 == 1 && (v29_.v29[0] & 1) != 0 && v29_.v30 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v29_.v30);
        }
        goto LABEL_4;
      }
      if ((*(_BYTE*)(v12 + 48) & 1) != 0) {
        v14 = *(const char**)(v12 + 64);
      }
      else {
        v14 = (const char*)(v12 + 49);
      }
      v15 = strlen_alt1(v14);
      v26_.v28 = nullptr;
      game_facility_140c240_alt1((__int64)v29_.v29, v14, v15,
                                 (__int64)v26_.v26);
      if (v26_.v28 == v26_.v26) {
        v16 = 32;
      }
      else {
        if (v26_.v28 == nullptr) {
          goto LABEL_25;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v26_.v28 + v16))((__int64)v26_.v28);
    LABEL_25:
      if (((unsigned __int8)v8 & (v9 == *(_DWORD*)(a1 + 264))) == 1 &&
          *(_BYTE*)(a1 + 330) == 0) {
        v18 = *(_QWORD*)v10;
        *(_BYTE*)(a1 + 330) = 1;
        v19 = SceneManager_138e5e0(v18);
        if (v19 != 0) {
          v25 = v8;
          v20 = *(unsigned __int8*)(a1 + 328);
          v21 = v19;
          v32[0] = (unsigned __int64)SceneCharacter_14020c0_alt1(v19);
          SceneTalk_1497bf0_alt1((void*)((__int64)v26_.v26), v32, v20 + 41);
          ((__attribute__((swiftcall)) void (*)(PSEUDO_X8, _BYTE*, __int64,
                                                __int64))GameRoutine_1488120)(
              (void*)v32, v26_.v26, v21, 1);
          if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v26_.v27);
          }
          v8 = v25;
        }
      }
      goto LABEL_37;
    }
  }
  else {
    return 1;
  }
  return v7;
}

__int64 ProcTheaterSceneAct_13e18a0(__int64* a1, const char** a2, _BYTE* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
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

  v3 = a1[1] - *a1;
  v4 = (v3 >> 5) + 1;
  if (v4 >> 59 != 0) {
    GameRoutine_1115ca0_alt1();
  }
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1[2] - *a1;
  if (v9 >> 4 > v4) {
    v4 = v9 >> 4;
  }
  if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFE0LL) {
    v10 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v10 = v4;
  }
  if (v10 != 0) {
    if (v10 >> 59 != 0) {
      GameRoutine_60a210_alt1();
    }
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = *a2;
  v13 = strlen_alt1(*a2);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v14 = v11 + v3;
  v15 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v13 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate_alt1(*v8, v17, 16, 0);
    *(_QWORD*)(v14 + 8) = v15;
    *(_QWORD*)(v14 + 16) = v16;
    *(_QWORD*)v14 = v17 | 1;
    goto LABEL_19;
  }
  *(_BYTE*)v14 = 2 * v13;
  v16 = v14 + 1;
  if (v13 != 0) {
  LABEL_19:
    memmove_alt1(v16, (__int64)v12, v15);
  }
  *(_BYTE*)(v16 + v15) = 0;
  v18 = v11 + 32 * v10;
  v19 = *a1;
  v20 = a1[1];
  *(_BYTE*)(v14 + 24) = *a3;
  v21 = v14 + v19 - v20;
  if (v19 != v20) {
    v22 = v19;
    v23 = v14 + v19 - v20;
    do {
      v24 = *(_QWORD*)v22;
      v25 = *(_QWORD*)(v22 + 16);
      *(_QWORD*)(v23 + 8) = *(_QWORD*)(v22 + 8);
      *(_QWORD*)(v23 + 16) = v25;
      *(_QWORD*)v23 = v24;
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 16) = 0;
      *(_QWORD*)v22 = 0;
      LOBYTE(v24) = *(_BYTE*)(v22 + 24);
      v22 += 32;
      *(_BYTE*)(v23 + 24) = v24;
      v23 += 32;
    } while (v22 != v20);
    do {
      if ((*(_BYTE*)v19 & 1) != 0) {
        v26 = *(_QWORD*)(v19 + 16);
        if (v26 != 0) {
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v27 = 128;
          }
          else {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v8 + v27, v26);
        }
      }
      v19 += 32;
    } while (v19 != v20);
    v19 = *a1;
  }
  *a1 = v21;
  a1[1] = v14 + 32;
  a1[2] = v18;
  if (v19 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v28, v19);
  }
  return v14 + 32;
}

float ProcTheaterSceneAct_13e2420(__int64 a1)
{
  float v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = 0.0;
  if (a1 != 0 && GameData_2241850 != 0) {
    v2 = game_HashString(a1);
    if (v2 != 0) {
      v3 = *(_QWORD*)(GameData_2241850 + 96);
      if (v3 != 0 && *(_QWORD*)(GameData_2241850 + 112) != 0) {
        v5 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v6 = v2;
          if (v2 >= v3) {
            v6 = v2 % v3;
          }
        }
        else {
          v6 = v5 & v2;
        }
        v7 = *(_QWORD**)(*(_QWORD*)(GameData_2241850 + 88) + 8 * v6);
        if (v7 != nullptr) {
          v8 = (_QWORD*)*v7;
          if (v8 != nullptr) {
            if ((v3 & v5) == 0) {
              while (1) {
                v10 = v8[1];
                if (v10 == v2) {
                  if (v8[2] == v2) {
                    goto LABEL_28;
                  }
                }
                else if ((v10 & v5) != v6) {
                  return v1;
                }
                v8 = (_QWORD*)*v8;
                if (v8 == nullptr) {
                  return v1;
                }
              }
            }
            do {
              v9 = v8[1];
              if (v9 == v2) {
                if (v8[2] == v2) {
                LABEL_28:
                  v11 = v8[3];
                  if (v11 != 0) {
                    return *(float*)(v11 + 32);
                  }
                  return v1;
                }
              }
              else {
                if (v9 >= v3) {
                  v9 %= v3;
                }
                if (v9 != v6) {
                  return v1;
                }
              }
              v8 = (_QWORD*)*v8;
            } while (v8 != nullptr);
          }
        }
      }
    }
  }
  return v1;
}

void ProcTheaterSceneAct_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  bool v5;
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
  _QWORD* v16;
  __int64 v17;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTheaterSceneAct_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2036570;
  v2 = a1 + 152;
  v3 = (_QWORD*)GameData_2131210[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131210[0] + 24LL))(
      *(_QWORD*)GameData_2131210[0]);
  if (*v3 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = (_QWORD*)GameData_2131208[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131208[0] + 24LL))(
      *(_QWORD*)GameData_2131208[0]);
  if (*v4 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
  }
  *v4 = 0;
  if (GameData_224ade8 != 0) {
    v5 = GameData_224ade4-- <= 1;
    if (v5) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_224ade8 + 24LL))(
          (__int64)GameData_224ade8);
      if (GameData_224ade8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_224ade8 + 8LL))(
            GameData_224ade8);
      }
      GameData_224ade8 = 0;
    }
  }
  v6 = *(_QWORD*)(a1 + 376);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = *(_QWORD*)(a1 + 360);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  v8 = *(_QWORD*)(a1 + 344);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
    if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
      goto LABEL_25;
    }
  }
  else if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
    goto LABEL_25;
  }
  v9 = *(_QWORD*)(a1 + 304);
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
  }
LABEL_25:
  v11 = *(_QWORD*)(a1 + 216);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 224) = v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
  }
  v13 = *(_QWORD*)(a1 + 184);
  if (v13 != 0) {
    *(_QWORD*)(a1 + 192) = v13;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
  }
  v15 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v15;
  GameRoutine_1958ed0_alt1(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v16 = (_QWORD*)GameData_212dce8;
  v17 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v5 = (signed __int32)(*GameData_2130fb8)-- <= 1;
    if (v5) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17);
      if (*v16 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v16 + 8LL))(*v16);
      }
      *v16 = 0;
    }
  }
  game_facility_ReleaseGroups_alt1();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 ProcTheaterSceneAct_StartFade(__int64 a1)
{
  _QWORD* v1;
  _QWORD v3[25];
  unsigned int v4;

  v1 = GameRoutine_13e4b20_alt1(*(_QWORD*)(a1 + 208));
  GameRoutine_14877f0_alt1((__int64)v1, 0x13F000000LL);
  v4 = (unsigned int)snd_fnd_calcCrc32_alt1("ENV_VolControl", 0);
  snd_Fade_Fade_10c830((__int64)v3, 0x0.0p+0f);
  snd_startSlotVolume_100b50_alt1((int*)&v4, (__int64)v3, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade(v3);
}

__int64 ProcTheaterSceneAct_Unknown21(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 34);
  }
  else {
    return 0;
  }
}

__int64 ProcTheaterSceneAct_Unknown2(__int64 a1)
{
  _QWORD* v1;
  _QWORD v3[25];
  unsigned int v4;

  v1 = GameRoutine_13e4b20_alt1(*(_QWORD*)(a1 + 56));
  GameRoutine_14877f0_alt1((__int64)v1, 0x13F000000LL);
  v4 = (unsigned int)snd_fnd_calcCrc32_alt1("ENV_VolControl", 0);
  snd_Fade_Fade_10c830((__int64)v3, 0x0.0p+0f);
  snd_startSlotVolume_100b50_alt1((int*)&v4, (__int64)v3, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade(v3);
}

__int64 ProcTheaterSceneAct_Unknown5(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 34);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
