#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchSceneGaze_14381a0();
void ProcPerchSceneGaze_14381d0();
__int64 GameRoutine_13f9200(_QWORD);
__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN** GameData_21313e0[3];
extern _UNKNOWN** GameData_21313e8[2];
extern _UNKNOWN** GameData_21313f0;
extern __int64 (*GameData_203de10[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1aa5e95[];
void __attribute__((noreturn)) String_60a1d0(void);
__int64 ProcPerchSceneGaze_14393f0();
_QWORD*
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Clone(
    __int64 a1);
__int64
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_CloneInto(
    __int64 result, _QWORD* a2);
__int64
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Invoke(
    __int64 a1);
__int64 ProcPerchSceneGaze_1439bb0();
void ProcPerchSceneGaze_1439df0();
void ProcPerchSceneGaze_143a390();
__int64 ProcPerchSceneGaze_143c080();
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__int64* GameRoutine_1439a20(__int64* result);
__int64 GameRoutine_14127e0(__int64, unsigned __int8*);
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_1553220_alt1(_QWORD) __asm__("GameRoutine_1553220");
__int64 GameRoutine_1958ed0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1958ed0");
__int64 GameRoutine_2b0();
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, __int64,
                                   __int64);
__int64 SceneCharacterLookAt_1416a00(__int64, __int64, float, float);
__int64 SceneManager_138e5e0(__int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_809dc0(_QWORD, _QWORD, long double);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 sprintf(_QWORD, const char*, ...);
__n128 GameRoutine_1439890(_QWORD*, __int64, __n128 result);
__n128 GameRoutine_14a1520(_QWORD*, char);
__n128 GameRoutine_658c00(_QWORD*);
__n128 ProcPerchSceneGaze_14393f0_alt1() __asm__("ProcPerchSceneGaze_14393f0");
__n128 ProcPerchSceneGaze_1439bb0_alt1() __asm__("ProcPerchSceneGaze_1439bb0");
__n128 ProcPerchSceneGaze_1439df0_alt1(__n128 result) __asm__(
    "ProcPerchSceneGaze_1439df0");
__n128 ProcPerchSceneGaze_143c080_alt1() __asm__("ProcPerchSceneGaze_143c080");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _BYTE GameData_1abbaec[];
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_203d960;
extern _UNKNOWN* GameData_203d968;
extern _UNKNOWN* GameData_203d970;
extern _UNKNOWN* GameData_203d978;
extern _UNKNOWN* GameData_203d980;
extern _UNKNOWN* GameData_203d988;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_2132438;
extern _UNKNOWN GameData_1a9e360;
extern _UNKNOWN GameData_1ac4892;
extern _UNKNOWN GameData_1ad438b;
extern _UNKNOWN GameData_1aeedbf;
extern _UNKNOWN GameData_1af2af7;
extern __int64 (*GameData_203db08[])();
extern __int64 (*GameData_203dbf0[])();
extern __int64 (*GameData_203dca0[])();
extern __int64 (*GameData_203dce8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateShoulder_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchSceneGaze_vtable[])();
extern __int64* GameData_2132440[2];
extern __int64* GameData_2132488;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_2246328;
extern __int64 GameData_2246330;
extern __int64 GameData_2246338;
extern __int64 GameData_2246340;
extern __int64 GameData_2246348;
extern __int64 GameData_2262ae0;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern int GameData_2241730;
float game_facility_14107c0(__int64, __int64);
void GameRoutine_1405080(__int64);
void GameRoutine_143a500(__int64*);
void GameRoutine_1958ed0(__int64, __int64);
void GameRoutine_658d60(__int64*);
void LayoutAccessor_1567000(__int64, char);
void game_facility_anonymous_143a790(__int64);
void snd_Fade_Fade_10c830(__int64, float);
_QWORD* ProcPerchSceneGaze_14376e0(__int64 a1);
void ProcPerchSceneGaze_1437ac0();
__n128 ProcPerchSceneGaze_Destructor_alt1(__int64 a1) __asm__(
    "ProcPerchSceneGaze_Destructor");
__int64 ProcPerchSceneGaze_Unknown2(__int64 result);
__int64 ProcPerchSceneGaze_Unknown12(__int64 a1);
__n128 ProcPerchSceneGaze_1438490(__int64 a1);
__n128 ProcPerchSceneGaze_14385a0_alt1(__int64 a1) __asm__(
    "ProcPerchSceneGaze_14385a0");
__int64 ProcPerchSceneGaze_14386e0(__int64 a1);
__n128 ProcPerchSceneGaze_14387f0(_QWORD* a1);
__n128 ProcPerchSceneGaze_1438900_alt1(_QWORD* a1) __asm__(
    "ProcPerchSceneGaze_1438900");
__int64 ProcPerchSceneGaze_CameraStateFront_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateFront_Unknown3_alt1(__n128 a1) __asm__(
    "ProcPerchSceneGaze_CameraStateFront_Unknown3");
void ProcPerchSceneGaze_CameraStateFront_Unknown6();
__n128
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure0_Invoke_alt1() __asm__(
    "game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_"
    "AddGazeCameraWorkSe_closure0_Invoke");
__n128
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure1_Invoke_alt1() __asm__(
    "game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_"
    "AddGazeCameraWorkSe_closure1_Invoke");
__int64 ProcPerchSceneGaze_CameraStateArm_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown3_alt1(__n128 a1) __asm__(
    "ProcPerchSceneGaze_CameraStateArm_Unknown3");
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown4_alt1(__n128 a1) __asm__(
    "ProcPerchSceneGaze_CameraStateArm_Unknown4");
void ProcPerchSceneGaze_CameraStateArm_Unknown6();
__int64 ProcPerchSceneGaze_CameraStateShoulder_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateShoulder_Unknown4_alt1(__n128 a1) __asm__(
    "ProcPerchSceneGaze_CameraStateShoulder_Unknown4");
void ProcPerchSceneGaze_CameraStateShoulder_Unknown6();
_QWORD* ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2_alt1(
    __n128 a1) __asm__("ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2");
__int64 ProcPerchSceneGaze_143cd70();
_QWORD* SceneCameraWorkUpdater_14559c0(__int64, unsigned __int64*, __int64,
                                       _QWORD**, __int64*);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__int64 game_HashString(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1ab175e;
extern _UNKNOWN GameData_1abd603;
extern _UNKNOWN GameData_1ad060c;
extern __int64 (*GameData_203de90[])();
extern __int64 (*GameData_203df10[])();
extern __int64 (*GameData_203df90[])();
extern __int64 fw_memory_g_heap_manager;
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcPerchSceneGaze_1439890(_QWORD* a1, const char* a2);
__int64*
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
    __int64* result);
__int64 GameHr_14a1520(__int64*, char);
__int64 GameRoutine_143a500_alt1(__int64 result) __asm__("GameRoutine_143a500");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64
ProcTransitionAnim_156af20_alt1(__int64, int, int, __int64*, const char*,
                                __int64) __asm__("ProcTransitionAnim_156af20");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
extern __int64 (*ProcPerchSceneGaze_1438490_ptr[])();
extern __int64 (*ProcPerchSceneGaze_14387f0_ptr[])();
extern char GameData_1a9e360_alt1[] __asm__("GameData_1a9e360");
extern char GameData_1abbaec_alt1[] __asm__("GameData_1abbaec");
extern char GameData_1ac4892_alt1[] __asm__("GameData_1ac4892");
extern char GameData_1ad438b_alt1[] __asm__("GameData_1ad438b");
extern char GameData_1aeedbf_alt1[] __asm__("GameData_1aeedbf");
extern char GameData_1af2af7_alt1[] __asm__("GameData_1af2af7");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameHr_1405080(__int64);
void GameHr_14127e0(__int64, unsigned __int8*);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcPerchSceneGaze_14393f0_alt2(_QWORD*) __asm__(
    "ProcPerchSceneGaze_14393f0");
void ProcPerchSceneGaze_1439bb0_alt2(_QWORD*) __asm__(
    "ProcPerchSceneGaze_1439bb0");
void ProcPerchSceneGaze_143c080_alt2(_QWORD*) __asm__(
    "ProcPerchSceneGaze_143c080");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_facility_anonymous_143a790_alt1(const char*) __asm__(
    "game_facility_anonymous_143a790");
void ProcPerchSceneGaze_Destructor(__int64 a1);
void ProcPerchSceneGaze_14385a0(__int64 a1);
void ProcPerchSceneGaze_1438900(_QWORD* a1);
_QWORD* ProcPerchSceneGaze_CameraStateFront_Unknown3();
void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure0_Invoke();
void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure1_Invoke();
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown3();
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown4();
_QWORD* ProcPerchSceneGaze_CameraStateShoulder_Unknown4();
_QWORD* ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2();
void ProcPerchSceneGaze_14393f0_alt3() __asm__("ProcPerchSceneGaze_14393f0");
void ProcPerchSceneGaze_1439bb0_alt3() __asm__("ProcPerchSceneGaze_1439bb0");
void ProcPerchSceneGaze_143c080_alt3() __asm__("ProcPerchSceneGaze_143c080");
void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure_Invoke();

_QWORD* ProcPerchSceneGaze_14376e0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(unsigned __int8*)(a1 + 152);
  if (*(_BYTE*)(a1 + 152) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(unsigned __int8*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(unsigned __int8*)(a1 + 153);
            if (*(_BYTE*)(a1 + 153) == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(unsigned __int8*)(a1 + 153);
  if (*(_BYTE*)(a1 + 153) == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_WORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

void ProcPerchSceneGaze_1437ac0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[2];
    __int64 v7;
  } v6_;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v6_.v6[0] = 49;
  v6_.v6[1] = 41;
  v6_.v7 = v1;
  *(_WORD*)(v1 + 40) = 137;
  *(_QWORD*)(v1 + 16) = 0xE95F9EB3E8B3A6E8LL;
  *(_QWORD*)(v1 + 24) = 0xB382E38F81E3B4B3LL;
  *(_QWORD*)(v1 + 32) = 0x83E3B383E39E83E3LL;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)&v5), (__int64)v6_.v6, 0);
  if ((v6_.v6[0] & 1) != 0 && v6_.v7 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v0 + v2, v6_.v7);
  }
  v3 = GameData_2262ae0;
  if (GameData_2262ae0 != 0 && (*(_BYTE*)(GameData_2262ae0 + 1017) & 1) == 0) {
    v4 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf_alt1((__int64)v6_.v6, "%s%s", "Alpha", "Out");
      ProcTransitionAnim_156af20_alt1(v4, 4, 1, (__int64*)(v3 + 168), "L_Key",
                                      (__int64)v6_.v6);
    }
    *(_WORD*)(v3 + 1016) = 256;
  }
}

void ProcPerchSceneGaze_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int v13;

  *(_QWORD*)a1 = game_facility_anonymous_ProcPerchSceneGaze_vtable;
  *(_QWORD*)(a1 + 208) = GameData_203db08;
  v2 = a1 + 208;
  if (*(_BYTE*)(a1 + 276) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 272));
    if (*(_BYTE*)(a1 + 276) == 1) {
      *(_BYTE*)(a1 + 276) = 0;
    }
  }
  if (GameData_2262ae0 != 0 && game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
  }
  v3 = *GameData_2132440[0];
  if (*GameData_2132440[0] != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2132438,
                              memory_order_acquire) &
         1) == 0) {
      v12 = v3;
      v13 = __cxa_guard_acquire_alt1((__int64)GameData_2132438);
      v3 = v12;
      if (v13 != 0) {
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)GameData_2132438);
        v3 = v12;
      }
    }
    v4 = *(__int64**)(v3 + 32);
    for (i = *(__int64**)(v3 + 40); v4 != i; v4 += 2) {
      GameHr_14a1520(v4, 1);
    }
  }
  v6 = *(_QWORD*)(a1 + 256);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  *(_QWORD*)a1 = ProcPerchSceneGaze_1438490_ptr;
  *(_QWORD*)(a1 + 208) = ProcPerchSceneGaze_14387f0_ptr;
  FacilitySceneBase_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v7 = (_QWORD*)GameData_212dce8;
  v8 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
    if (*v7 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
    }
    *v7 = 0;
  }
  game_facility_ReleaseGroups();
  v10 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203dce8;
  if (v10 == (_QWORD*)(a1 + 160)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_25;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_25:
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 ProcPerchSceneGaze_Unknown2(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _QWORD v15[25];

  v1 = result;
  v2 = game_g_game_setting_ptr;
  v3 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v3 & 2) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 240) + 40LL))(
        *(_QWORD*)(result + 240));
    if (result != 0) {
      v4 = result;
      v5 = GameData_2262ae0;
      if (GameData_2262ae0 != 0 &&
          (*(_BYTE*)(GameData_2262ae0 + 1017) & 1) == 0) {
        v6 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(v15, "%s%s", "Alpha", "Out");
          ProcTransitionAnim_156af20(v6, 4, 1, (__int64*)(v5 + 168),
                                     (__int64)"L_Key", (__int64)v15);
        }
        *(_WORD*)(v5 + 1016) = 256;
      }
      snd_Fade_Fade_10c830((__int64)v15, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Cancel_M",
                     (__int64)"SE_SYS_Cancel_M", (__int64)v15, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      result = snd_Fade_Destroy_Fade(v15);
      v7 = 4;
      *(_QWORD*)(v1 + 240) = v4;
      goto LABEL_21;
    }
    v3 = *(_DWORD*)(*(_QWORD*)v2 + 952LL);
  }
  if ((v3 & 0x88000) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 240) + 24LL))(
        *(_QWORD*)(v1 + 240));
    if (result != 0) {
      goto LABEL_15;
    }
    v3 = *(_DWORD*)(*(_QWORD*)v2 + 952LL);
  }
  if ((v3 & 0x110000) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 240) + 32LL))(
        *(_QWORD*)(v1 + 240));
    if (result != 0) {
    LABEL_15:
      *(_QWORD*)(v1 + 240) = result;
      v8 = GameData_2262ae0;
      if (GameData_2262ae0 != 0 &&
          (*(_BYTE*)(GameData_2262ae0 + 1017) & 1) == 0) {
        v9 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(v15, "%s%s", "Alpha", "Out");
          result = ProcTransitionAnim_156af20(v9, 4, 1, (__int64*)(v8 + 168),
                                              (__int64)"L_Key", (__int64)v15);
        }
        *(_WORD*)(v8 + 1016) = 256;
      }
      v7 = 1;
      goto LABEL_21;
    }
    v3 = *(_DWORD*)(*(_QWORD*)v2 + 952LL);
  }
  if ((v3 & 1) == 0) {
    return result;
  }
  if (*(float*)(*(_QWORD*)(v1 + 248) + 36LL) <
      *(float*)(*(_QWORD*)(v1 + 248) + 32LL)) {
    return result;
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 240) + 56LL))(
      *(_QWORD*)(v1 + 240));
  if ((result & 1) == 0) {
    return result;
  }
  v7 = 2;
LABEL_21:
  *(_BYTE*)(v1 + 152) = v7;
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

__int64 ProcPerchSceneGaze_14381a0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchSceneGaze_14381d0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcPerchSceneGaze_Unknown12(__int64 a1)
{
  __int64 result;
  long double v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  long double* v7;
  long double v8;

  if (*(_BYTE*)(a1 + 276) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 272));
    if (*(_BYTE*)(a1 + 276) == 1) {
      *(_BYTE*)(a1 + 276) = 0;
    }
  }
  result = GameRoutine_1958ed0_alt1(a1 + 208, a1);
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = v5 + 160,
           *((_QWORD*)&v3 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_u64[1],
           *((float*)&v3 + 3) == 1.0)) {
        if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v6 + 16LL))(v6);
        }
        else {
          v3 = *(long double*)(v6 + 48);
        }
        v8 = v3;
        *(_QWORD*)&v3 = 0;
        v7 = &v8;
      }
      else {
        *(_QWORD*)&v3 = 0;
        v7 = (long double*)GameData_212c960;
      }
      result = game_809dc0(v4, v7, v3);
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

__int64 ProcPerchSceneGaze_1438340()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
}

__int64 ProcPerchSceneGaze_1438420()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
}

__n128 ProcPerchSceneGaze_1438490(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_203dbf0;
  *(_QWORD*)(a1 + 208) = GameData_203dca0;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203dce8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void ProcPerchSceneGaze_14385a0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = ProcPerchSceneGaze_1438490_ptr;
  *(_QWORD*)(a1 + 208) = ProcPerchSceneGaze_14387f0_ptr;
  v2 = (_QWORD*)(a1 + 208);
  FacilitySceneBase_1958ed0(a1 + 208, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203dce8;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_12;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_12:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

__int64 ProcPerchSceneGaze_14386e0(__int64 a1)
{
  __int64 result;
  long double v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  long double* v7;
  long double v8;

  result = GameRoutine_1958ed0_alt1(a1 + 208, a1);
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = v5 + 160,
           *((_QWORD*)&v3 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_u64[1],
           *((float*)&v3 + 3) == 1.0)) {
        if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v6 + 16LL))(v6);
        }
        else {
          v3 = *(long double*)(v6 + 48);
        }
        v8 = v3;
        *(_QWORD*)&v3 = 0;
        v7 = &v8;
      }
      else {
        *(_QWORD*)&v3 = 0;
        v7 = (long double*)GameData_212c960;
      }
      result = game_809dc0(v4, v7, v3);
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

__n128 ProcPerchSceneGaze_14387f0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 26) = GameData_203dbf0;
  v2 = (__int64)(a1 - 26);
  *a1 = GameData_203dca0;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203dce8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 15);
}

void ProcPerchSceneGaze_1438900(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 26) = ProcPerchSceneGaze_1438490_ptr;
  v2 = (__int64)(a1 - 26);
  *a1 = ProcPerchSceneGaze_14387f0_ptr;
  FacilitySceneBase_1958ed0((__int64)a1, (__int64)(a1 - 26));
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  game_facility_ReleaseGroups();
  v6 = (_QWORD*)*(a1 - 2);
  *(a1 - 26) = GameData_203dce8;
  if (v6 == a1 - 6) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_12:
  *(a1 - 26) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 9) & 0x100) != 0) {
    *((_WORD*)a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00_alt1(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v2);
}

__int64 ProcPerchSceneGaze_CameraStateFront_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_14393f0_alt3();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt2(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateFront_Unknown3()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
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
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* result;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  __int64 v39[2];
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v40_;
  struct {
    _QWORD v43[2];
    __int64 v44;
    char gap88_[8];
    _QWORD* v45;
  } v43_;

  ProcPerchSceneGaze_1439890(&v40_.v40, GameData_1ad438b_alt1);
  v0 = (__int64*)GameData_212dce8;
  if (v40_.v40 == 0) {
    goto LABEL_46;
  }
  v1 = v40_.v41;
  v39[0] = v40_.v40;
  v39[1] = v40_.v41;
  if (v40_.v41 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40_.v41 + 8), 1u,
                              memory_order_relaxed);
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v39);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt2(v1);
    }
  }
  else {
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v39);
  }
  ProcPerchSceneGaze_1439bb0_alt2(&v37_.v37);
  v2 = *(_QWORD*)(v40_.v40 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v40_.v40 + 48);
    if (v2 == 1) {
      v4 = 0;
      v5 = 0x0.0p+0f;
    }
    else {
      v5 = 0x0.0p+0f;
      v4 = 0;
      v10 = *(_QWORD*)(v40_.v40 + 72);
      do {
        v12 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
        v13 = *(_QWORD*)(v12 + 72);
        if (v13 != 0) {
          v14 = *(float*)(v13 + 60);
          if (v14 < *(float*)(v12 + 160)) {
            v14 = *(float*)(v12 + 160);
          }
        }
        else {
          v14 = *(float*)(v12 + 160);
        }
        v15 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * ((v10 + 1) >> 9)) +
                         8 * ((v10 + 1) & 0x1FF));
        v16 = *(_QWORD*)(v15 + 72);
        if (v16 != 0) {
          v11 = *(float*)(v16 + 60);
          if (v11 < *(float*)(v15 + 160)) {
            v11 = *(float*)(v15 + 160);
          }
        }
        else {
          v11 = *(float*)(v15 + 160);
        }
        v4 += 2;
        v10 += 2LL;
        v5 = (float)(v5 + v14) + v11;
      } while ((v2 & 0xFFFFFFFFFFFFFFFELL) != v4);
    }
    if ((v2 & 1) != 0) {
      v6 = *(
          _QWORD*)(*(_QWORD*)(v3 +
                              8 * ((unsigned __int64)(v4 + *(_QWORD*)(v40_.v40 +
                                                                      72)) >>
                                   9)) +
                   8LL * (((_WORD)v4 +
                           (unsigned __int16)*(_QWORD*)(v40_.v40 + 72)) &
                          0x1FF));
      v7 = *(_QWORD*)(v6 + 72);
      if (v7 != 0) {
        v8 = *(float*)(v7 + 60);
        if (v8 < *(float*)(v6 + 160)) {
          v8 = *(float*)(v6 + 160);
        }
      }
      else {
        v8 = *(float*)(v6 + 160);
      }
      v5 = v5 + v8;
      v9 = v37_.v37;
      if (v37_.v37 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v9 = v37_.v37;
  if (v37_.v37 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v17 = SceneManager_138e5e0_alt1(*v0);
  if (v17 != 0) {
    v18 = v37_.v38;
    if (v37_.v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37_.v38 + 8), 1u,
                                memory_order_relaxed);
    }
    v43_.v44 = v18;
    v43_.v43[0] = GameData_203de10;
    v43_.v43[1] = v9;
    v19 = *(_QWORD*)(v17 + 176);
    v20 = *(_QWORD*)(v17 + 184);
    v43_.v45 = v43_.v43;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v19, (__int64)v43_.v43,
                                   0x1.0000000000000p+0f, v5);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt2(v20);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v19, (__int64)v43_.v43,
                                   0x1.0000000000000p+0f, v5);
    }
    if (v43_.v45 == v43_.v43) {
      v21 = 32;
      goto LABEL_42;
    }
    if (v43_.v45 != nullptr) {
      v21 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v43_.v45 + v21))((__int64)v43_.v45);
    }
  }
LABEL_43:
  v22 = v37_.v38;
  if (v37_.v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37_.v38 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
LABEL_46:
  v23 = v40_.v41;
  if (v40_.v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  ProcPerchSceneGaze_1439df0();
  v24 = SceneManager_138e5e0_alt1(*v0);
  if (v24 != 0) {
    v25 = v24;
    v26 = *(_QWORD*)(v24 + 128);
    v27 = *(_QWORD*)(v25 + 136);
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
      GameHr_1405080(v26);
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt2(v27);
      }
    }
    else {
      GameHr_1405080(v26);
    }
  }
  v28 = (__int64*)fw_memory_g_heap_manager_ptr;
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_BYTE*)(v29 + 54) = 0;
  v40_.v40 = 57;
  v40_.v41 = 54;
  v40_.v42 = v29;
  *(_QWORD*)(v29 + 32) = 0xB3E95FA89CE68A82LL;
  *(_QWORD*)(v29 + 40) = 0x5F9B81E397B9E4A5LL;
  *(_QWORD*)(v29 + 46) = 0x8BA7E58B96E95F9BLL;
  *(_QWORD*)v29 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v29 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v29 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v29 + 24) = 0xE3BE81E3A2ADE65FLL;
  game_facility_14107c0((__int64)v43_.v43, (__int64)&v40_.v40);
  v30 = SceneManager_138e5e0_alt1(*v0);
  if (v30 == 0) {
  LABEL_58:
    if ((v43_.v43[0] & 1) == 0) {
      goto LABEL_64;
    }
    goto LABEL_59;
  }
  v31 = v30;
  v32 = *(_QWORD*)(v30 + 112);
  v33 = *(_QWORD*)(v31 + 120);
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v32, (unsigned __int8*)v43_.v43);
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt2(v33);
    }
    goto LABEL_58;
  }
  GameHr_14127e0(v32, (unsigned __int8*)v43_.v43);
  if ((v43_.v43[0] & 1) != 0) {
  LABEL_59:
    if (v43_.v44 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v28 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v28 + v34, v43_.v44);
    }
  }
LABEL_64:
  if ((v40_.v40 & 1) != 0 && v40_.v42 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*v28 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v28 + v35, v40_.v42);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v28, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateFront_Unknown6()
{
  __int64 v0;
  struct {
    __int64 v1;
    __int64 v2;
  } v1_;

  ProcPerchSceneGaze_14393f0_alt2(&v1_.v1);
  GameRoutine_143a500_alt1((__int64)&v1_.v1);
  v0 = v1_.v2;
  if (v1_.v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1_.v2 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak_alt2(v0);
  }
  game_facility_anonymous_143a790_alt1(GameData_1abbaec_alt1);
}

__int64 ProcPerchSceneGaze_14393f0()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313e0[0];
  v1 = strlen(*GameData_21313e0[0]);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

_QWORD*

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Clone(
    __int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  *result = GameData_203de10;
  result[1] = v4;
  result[2] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_CloneInto(
    __int64 result, _QWORD* a2)
{
  __int64 v2;

  *a2 = GameData_203de10;
  a2[1] = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  a2[2] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Invoke(
    __int64 a1)
{
  __int128 v2;

  v2 = *(_OWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  return GameRoutine_13f9200(&v2);
}

void ProcPerchSceneGaze_1439890(_QWORD* a1, const char* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[2];
    char* v14;
  } v13_;

  v3 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
  if (v3 == 0) {
    goto LABEL_20;
  }
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 256LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock_alt1(v6);
  std___1___shared_weak_count___release_weak_alt2(v3);
  if (v7 == 0) {
    goto LABEL_20;
  }
  if (v4 == 0) {
    goto LABEL_18;
  }
  v8 = strlen_alt1(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    v13_.v13[1] = v9;
    v13_.v14 = v10;
    v13_.v13[0] = v11 | 1;
  }
  else {
    LOBYTE(v13_.v13[0]) = 2 * v8;
    v10 = (char*)v13_.v13 + 1;
    if (v8 == 0) {
      goto LABEL_13;
    }
  }
  memcpy((__int64)v10, (__int64)a2, v9);
LABEL_13:
  v10[v9] = 0;
  game_facility_144f120((void*)(a1), v4, (__int64)v13_.v13);
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v13_.v14);
  }
LABEL_18:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != 0) {
      return;
    }
    goto LABEL_20;
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak_alt2(v7);
  if (v4 == 0) {
  LABEL_20:
    *a1 = 0;
    a1[1] = 0;
  }
}

__int64*

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
    __int64* result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    __int64* v9;
  } v8_;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;

  v1 = *result;
  if (*result == 0) {
    return result;
  }
  v2 = result;
  v8_.v8[0] = GameData_203de90;
  v8_.v9 = v8_.v8;
  v10 = game_HashString((__int64)&GameData_1ad060c);
  v11 = v8_.v8;
  v12 = &v10;
  SceneCameraWorkUpdater_14559c0(v1 + 144, (unsigned __int64*)&v10,
                                 (__int64)std___1_piecewise_construct_ptr, &v12,
                                 (__int64*)&v11);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_7;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
LABEL_7:
  v4 = *v2;
  v8_.v8[0] = GameData_203df10;
  v8_.v9 = v8_.v8;
  v10 = game_HashString((__int64)&GameData_1ab175e);
  v11 = v8_.v8;
  v12 = &v10;
  SceneCameraWorkUpdater_14559c0(v4 + 144, (unsigned __int64*)&v10,
                                 (__int64)std___1_piecewise_construct_ptr, &v12,
                                 (__int64*)&v11);
  if (v8_.v9 == v8_.v8) {
    v5 = 32;
    goto LABEL_11;
  }
  if (v8_.v9 != nullptr) {
    v5 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v8_.v9 + v5))((__int64)v8_.v9);
  }
  v6 = *v2;
  v8_.v8[0] = GameData_203df90;
  v8_.v9 = v8_.v8;
  v10 = game_HashString((__int64)&GameData_1abd603);
  v11 = v8_.v8;
  v12 = &v10;
  SceneCameraWorkUpdater_14559c0(v6 + 144, (unsigned __int64*)&v10,
                                 (__int64)std___1_piecewise_construct_ptr, &v12,
                                 (__int64*)&v11);
  result = v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (__int64*)(*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64 ProcPerchSceneGaze_1439bb0()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313e8[0];
  v1 = strlen(*GameData_21313e8[0]);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

void ProcPerchSceneGaze_1439df0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = *(_QWORD*)(v1 + 392);
        if (v4 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 32LL))(v4, v1);
        }
        v5 = *(_QWORD*)(v1 + 400);
        *(_QWORD*)(v1 + 392) = 0;
        *(_QWORD*)(v1 + 400) = 0;
        if (v5 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
          v6 = *(_QWORD*)(v1 + 392);
          if (v6 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v1);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _BYTE v3[16];
  struct {
    _QWORD v4[2];
    __int64 v5;
  } v4_;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4_.v4[0] = 33;
  v4_.v4[1] = 29;
  v4_.v5 = v1;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v1 + 16) = 0xE75F9EB3E8B3A6E8LL;
  strcpy((char*)(v1 + 21), "\x9E_着地");
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v3), (__int64)v4_.v4, 0);
  if ((v4_.v4[0] & 1) != 0 && v4_.v5 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v0 + v2, v4_.v5);
  }
}

void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _BYTE v3[16];
  struct {
    _QWORD v4[2];
    __int64 v5;
  } v4_;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  *(_BYTE*)(v1 + 29) = 0;
  v4_.v4[0] = 33;
  v4_.v4[1] = 29;
  v4_.v5 = v1;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v1 + 16) = 0xE95F9EB3E8B3A6E8LL;
  *(_QWORD*)(v1 + 21) = 0xB381E39BA3E95F9ELL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v3), (__int64)v4_.v4, 0);
  if ((v4_.v4[0] & 1) != 0 && v4_.v5 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v0 + v2, v4_.v5);
  }
}

void game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure1_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _BYTE v3[16];
  struct {
    _QWORD v4[2];
    __int64 v5;
  } v4_;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *(_BYTE*)(v1 + 32) = 0;
  v4_.v4[0] = 41;
  v4_.v4[1] = 32;
  v4_.v5 = v1;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v1 + 16) = 0xE75F9EB3E8B3A6E8LL;
  *(_QWORD*)(v1 + 24) = 0xB381E39BA3E9AD9FLL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v3), (__int64)v4_.v4, 0);
  if ((v4_.v4[0] & 1) != 0 && v4_.v5 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v0 + v2, v4_.v5);
  }
}

void ProcPerchSceneGaze_143a390()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v5 = *(_QWORD*)(v1 + 392);
        v4 = *(_QWORD*)(v1 + 400);
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak(v4);
          }
        }
        if (v5 != 0) {
          *(_BYTE*)(v5 + 128) = 0;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__int64 ProcPerchSceneGaze_CameraStateArm_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_1439bb0_alt3();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt2(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown3()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
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
  _QWORD* result;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  __int64 v31[2];
  struct {
    _QWORD* v32;
    __int64 v33;
  } v32_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  ProcPerchSceneGaze_1439890(&v32_.v32, GameData_1a9e360_alt1);
  v0 = (__int64*)GameData_212dce8;
  if (v32_.v32 == nullptr) {
    goto LABEL_46;
  }
  v1 = v32_.v33;
  v31[0] = (__int64)v32_.v32;
  v31[1] = v32_.v33;
  if (v32_.v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 8), 1u,
                              memory_order_relaxed);
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v31);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt2(v1);
    }
  }
  else {
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v31);
  }
  ProcPerchSceneGaze_143c080_alt2(&v29_.v29);
  v2 = v32_.v32[10];
  if (v2 != 0) {
    v3 = v32_.v32[6];
    if (v2 == 1) {
      v4 = 0;
      v5 = 0x0.0p+0f;
    }
    else {
      v5 = 0x0.0p+0f;
      v4 = 0;
      v10 = v32_.v32[9];
      do {
        v12 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
        v13 = *(_QWORD*)(v12 + 72);
        if (v13 != 0) {
          v14 = *(float*)(v13 + 60);
          if (v14 < *(float*)(v12 + 160)) {
            v14 = *(float*)(v12 + 160);
          }
        }
        else {
          v14 = *(float*)(v12 + 160);
        }
        v15 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * ((v10 + 1) >> 9)) +
                         8 * ((v10 + 1) & 0x1FF));
        v16 = *(_QWORD*)(v15 + 72);
        if (v16 != 0) {
          v11 = *(float*)(v16 + 60);
          if (v11 < *(float*)(v15 + 160)) {
            v11 = *(float*)(v15 + 160);
          }
        }
        else {
          v11 = *(float*)(v15 + 160);
        }
        v4 += 2;
        v10 += 2LL;
        v5 = (float)(v5 + v14) + v11;
      } while ((v2 & 0xFFFFFFFFFFFFFFFELL) != v4);
    }
    if ((v2 & 1) != 0) {
      v6 = *(
          _QWORD*)(*(_QWORD*)(v3 +
                              8 * ((unsigned __int64)(v4 + v32_.v32[9]) >> 9)) +
                   8LL * (((_WORD)v4 + (unsigned __int16)v32_.v32[9]) & 0x1FF));
      v7 = *(_QWORD*)(v6 + 72);
      if (v7 != 0) {
        v8 = *(float*)(v7 + 60);
        if (v8 < *(float*)(v6 + 160)) {
          v8 = *(float*)(v6 + 160);
        }
      }
      else {
        v8 = *(float*)(v6 + 160);
      }
      v5 = v5 + v8;
      v9 = v29_.v29;
      if (v29_.v29 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v9 = v29_.v29;
  if (v29_.v29 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v17 = SceneManager_138e5e0_alt1(*v0);
  if (v17 != 0) {
    v18 = v29_.v30;
    if (v29_.v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29_.v30 + 8), 1u,
                                memory_order_relaxed);
    }
    v34_.v34[2] = v18;
    v34_.v34[0] = GameData_203de10;
    v34_.v34[1] = v9;
    v19 = *(_QWORD*)(v17 + 176);
    v20 = *(_QWORD*)(v17 + 184);
    v34_.v35 = v34_.v34;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v19, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v5);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt2(v20);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v19, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v5);
    }
    if (v34_.v35 == v34_.v34) {
      v21 = 32;
      goto LABEL_42;
    }
    if (v34_.v35 != nullptr) {
      v21 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v34_.v35 + v21))((__int64)v34_.v35);
    }
  }
LABEL_43:
  v22 = v29_.v30;
  if (v29_.v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
LABEL_46:
  v23 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  ProcPerchSceneGaze_1439df0();
  v24 = SceneManager_138e5e0_alt1(*v0);
  if (v24 != 0) {
    v25 = v24;
    v26 = *(_QWORD*)(v24 + 128);
    v27 = *(_QWORD*)(v25 + 136);
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
      GameHr_1405080(v26);
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt2(v27);
      }
    }
    else {
      GameHr_1405080(v26);
    }
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result =
      game_facility_anonymous_ProcPerchSceneGaze_CameraStateShoulder_vtable;
  return result;
}

_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown4()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
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
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* result;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  __int64 v39[2];
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v40_;
  struct {
    _QWORD v43[2];
    __int64 v44;
    char gap88_[8];
    _QWORD* v45;
  } v43_;

  ProcPerchSceneGaze_1439890(&v40_.v40, GameData_1ac4892_alt1);
  v0 = (__int64*)GameData_212dce8;
  if (v40_.v40 == 0) {
    goto LABEL_46;
  }
  v1 = v40_.v41;
  v39[0] = v40_.v40;
  v39[1] = v40_.v41;
  if (v40_.v41 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40_.v41 + 8), 1u,
                              memory_order_relaxed);
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v39);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt2(v1);
    }
  }
  else {
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v39);
  }
  ProcPerchSceneGaze_14393f0_alt2(&v37_.v37);
  v2 = *(_QWORD*)(v40_.v40 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v40_.v40 + 48);
    if (v2 == 1) {
      v4 = 0;
      v5 = 0x0.0p+0f;
    }
    else {
      v5 = 0x0.0p+0f;
      v4 = 0;
      v10 = *(_QWORD*)(v40_.v40 + 72);
      do {
        v12 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
        v13 = *(_QWORD*)(v12 + 72);
        if (v13 != 0) {
          v14 = *(float*)(v13 + 60);
          if (v14 < *(float*)(v12 + 160)) {
            v14 = *(float*)(v12 + 160);
          }
        }
        else {
          v14 = *(float*)(v12 + 160);
        }
        v15 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * ((v10 + 1) >> 9)) +
                         8 * ((v10 + 1) & 0x1FF));
        v16 = *(_QWORD*)(v15 + 72);
        if (v16 != 0) {
          v11 = *(float*)(v16 + 60);
          if (v11 < *(float*)(v15 + 160)) {
            v11 = *(float*)(v15 + 160);
          }
        }
        else {
          v11 = *(float*)(v15 + 160);
        }
        v4 += 2;
        v10 += 2LL;
        v5 = (float)(v5 + v14) + v11;
      } while ((v2 & 0xFFFFFFFFFFFFFFFELL) != v4);
    }
    if ((v2 & 1) != 0) {
      v6 = *(
          _QWORD*)(*(_QWORD*)(v3 +
                              8 * ((unsigned __int64)(v4 + *(_QWORD*)(v40_.v40 +
                                                                      72)) >>
                                   9)) +
                   8LL * (((_WORD)v4 +
                           (unsigned __int16)*(_QWORD*)(v40_.v40 + 72)) &
                          0x1FF));
      v7 = *(_QWORD*)(v6 + 72);
      if (v7 != 0) {
        v8 = *(float*)(v7 + 60);
        if (v8 < *(float*)(v6 + 160)) {
          v8 = *(float*)(v6 + 160);
        }
      }
      else {
        v8 = *(float*)(v6 + 160);
      }
      v5 = v5 + v8;
      v9 = v37_.v37;
      if (v37_.v37 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v9 = v37_.v37;
  if (v37_.v37 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v17 = SceneManager_138e5e0_alt1(*v0);
  if (v17 != 0) {
    v18 = v37_.v38;
    if (v37_.v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37_.v38 + 8), 1u,
                                memory_order_relaxed);
    }
    v43_.v44 = v18;
    v43_.v43[0] = GameData_203de10;
    v43_.v43[1] = v9;
    v19 = *(_QWORD*)(v17 + 176);
    v20 = *(_QWORD*)(v17 + 184);
    v43_.v45 = v43_.v43;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v19, (__int64)v43_.v43,
                                   0x1.0000000000000p+0f, v5);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt2(v20);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v19, (__int64)v43_.v43,
                                   0x1.0000000000000p+0f, v5);
    }
    if (v43_.v45 == v43_.v43) {
      v21 = 32;
      goto LABEL_42;
    }
    if (v43_.v45 != nullptr) {
      v21 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v43_.v45 + v21))((__int64)v43_.v45);
    }
  }
LABEL_43:
  v22 = v37_.v38;
  if (v37_.v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37_.v38 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
LABEL_46:
  v23 = v40_.v41;
  if (v40_.v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  ProcPerchSceneGaze_1439df0();
  v24 = SceneManager_138e5e0_alt1(*v0);
  if (v24 != 0) {
    v25 = v24;
    v26 = *(_QWORD*)(v24 + 128);
    v27 = *(_QWORD*)(v25 + 136);
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
      GameHr_1405080(v26);
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt2(v27);
      }
    }
    else {
      GameHr_1405080(v26);
    }
  }
  v28 = (__int64*)fw_memory_g_heap_manager_ptr;
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_BYTE*)(v29 + 54) = 0;
  v40_.v40 = 57;
  v40_.v41 = 54;
  v40_.v42 = v29;
  *(_QWORD*)(v29 + 32) = 0xB3E95FA89CE68A82LL;
  *(_QWORD*)(v29 + 40) = 0x5F9B81E397B9E4A5LL;
  *(_QWORD*)(v29 + 46) = 0x86BAE482B5E75F9BLL;
  *(_QWORD*)v29 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v29 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v29 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v29 + 24) = 0xE3BE81E3A2ADE65FLL;
  game_facility_14107c0((__int64)v43_.v43, (__int64)&v40_.v40);
  v30 = SceneManager_138e5e0_alt1(*v0);
  if (v30 == 0) {
  LABEL_58:
    if ((v43_.v43[0] & 1) == 0) {
      goto LABEL_64;
    }
    goto LABEL_59;
  }
  v31 = v30;
  v32 = *(_QWORD*)(v30 + 112);
  v33 = *(_QWORD*)(v31 + 120);
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
    GameHr_14127e0(v32, (unsigned __int8*)v43_.v43);
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt2(v33);
    }
    goto LABEL_58;
  }
  GameHr_14127e0(v32, (unsigned __int8*)v43_.v43);
  if ((v43_.v43[0] & 1) != 0) {
  LABEL_59:
    if (v43_.v44 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v28 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v28 + v34, v43_.v44);
    }
  }
LABEL_64:
  if ((v40_.v40 & 1) != 0 && v40_.v42 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*v28 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v28 + v35, v40_.v42);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v28, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateArm_Unknown6()
{
  __int64 v0;
  struct {
    __int64 v1;
    __int64 v2;
  } v1_;

  ProcPerchSceneGaze_1439bb0_alt2(&v1_.v1);
  GameRoutine_143a500_alt1((__int64)&v1_.v1);
  v0 = v1_.v2;
  if (v1_.v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1_.v2 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak_alt2(v0);
  }
  game_facility_anonymous_143a790_alt1((const char*)GameData_2246340);
}

__int64 ProcPerchSceneGaze_143c080()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313f0;
  v1 = strlen(*GameData_21313f0);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

__int64 ProcPerchSceneGaze_CameraStateShoulder_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  ProcPerchSceneGaze_143c080_alt3();
  if (v7 != 0) {
    v2 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
    if (v2 != 0) {
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9_.v9[2] = v8;
      v9_.v9[0] = GameData_203de10;
      v9_.v9[1] = v7;
      v3 = *(_QWORD*)(v2 + 176);
      v4 = *(_QWORD*)(v2 + 184);
      v9_.v10 = v9_.v9;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak_alt2(v4);
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v3, (__int64)v9_.v9, 0x1.0000000000000p+0f,
                                     0x0.0p+0f);
      }
      if (v9_.v10 == v9_.v9) {
        v5 = 32;
        goto LABEL_13;
      }
      if (v9_.v10 != nullptr) {
        v5 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      }
    }
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))((__int64)v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateShoulder_Unknown4()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
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
  _QWORD* result;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  __int64 v31[2];
  struct {
    _QWORD* v32;
    __int64 v33;
  } v32_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  ProcPerchSceneGaze_1439890(&v32_.v32, GameData_1af2af7_alt1);
  v0 = (__int64*)GameData_212dce8;
  if (v32_.v32 == nullptr) {
    goto LABEL_46;
  }
  v1 = v32_.v33;
  v31[0] = (__int64)v32_.v32;
  v31[1] = v32_.v33;
  if (v32_.v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 8), 1u,
                              memory_order_relaxed);
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v31);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt2(v1);
    }
  }
  else {
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v31);
  }
  ProcPerchSceneGaze_1439bb0_alt2(&v29_.v29);
  v2 = v32_.v32[10];
  if (v2 != 0) {
    v3 = v32_.v32[6];
    if (v2 == 1) {
      v4 = 0;
      v5 = 0x0.0p+0f;
    }
    else {
      v5 = 0x0.0p+0f;
      v4 = 0;
      v10 = v32_.v32[9];
      do {
        v12 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
        v13 = *(_QWORD*)(v12 + 72);
        if (v13 != 0) {
          v14 = *(float*)(v13 + 60);
          if (v14 < *(float*)(v12 + 160)) {
            v14 = *(float*)(v12 + 160);
          }
        }
        else {
          v14 = *(float*)(v12 + 160);
        }
        v15 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * ((v10 + 1) >> 9)) +
                         8 * ((v10 + 1) & 0x1FF));
        v16 = *(_QWORD*)(v15 + 72);
        if (v16 != 0) {
          v11 = *(float*)(v16 + 60);
          if (v11 < *(float*)(v15 + 160)) {
            v11 = *(float*)(v15 + 160);
          }
        }
        else {
          v11 = *(float*)(v15 + 160);
        }
        v4 += 2;
        v10 += 2LL;
        v5 = (float)(v5 + v14) + v11;
      } while ((v2 & 0xFFFFFFFFFFFFFFFELL) != v4);
    }
    if ((v2 & 1) != 0) {
      v6 = *(
          _QWORD*)(*(_QWORD*)(v3 +
                              8 * ((unsigned __int64)(v4 + v32_.v32[9]) >> 9)) +
                   8LL * (((_WORD)v4 + (unsigned __int16)v32_.v32[9]) & 0x1FF));
      v7 = *(_QWORD*)(v6 + 72);
      if (v7 != 0) {
        v8 = *(float*)(v7 + 60);
        if (v8 < *(float*)(v6 + 160)) {
          v8 = *(float*)(v6 + 160);
        }
      }
      else {
        v8 = *(float*)(v6 + 160);
      }
      v5 = v5 + v8;
      v9 = v29_.v29;
      if (v29_.v29 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v9 = v29_.v29;
  if (v29_.v29 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v17 = SceneManager_138e5e0_alt1(*v0);
  if (v17 != 0) {
    v18 = v29_.v30;
    if (v29_.v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29_.v30 + 8), 1u,
                                memory_order_relaxed);
    }
    v34_.v34[2] = v18;
    v34_.v34[0] = GameData_203de10;
    v34_.v34[1] = v9;
    v19 = *(_QWORD*)(v17 + 176);
    v20 = *(_QWORD*)(v17 + 184);
    v34_.v35 = v34_.v34;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v19, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v5);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt2(v20);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v19, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v5);
    }
    if (v34_.v35 == v34_.v34) {
      v21 = 32;
      goto LABEL_42;
    }
    if (v34_.v35 != nullptr) {
      v21 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v34_.v35 + v21))((__int64)v34_.v35);
    }
  }
LABEL_43:
  v22 = v29_.v30;
  if (v29_.v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
LABEL_46:
  v23 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt2(v23);
  }
  ProcPerchSceneGaze_1439df0();
  v24 = SceneManager_138e5e0_alt1(*v0);
  if (v24 != 0) {
    v25 = v24;
    v26 = *(_QWORD*)(v24 + 128);
    v27 = *(_QWORD*)(v25 + 136);
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
      GameHr_1405080(v26);
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_alt2(v27);
      }
    }
    else {
      GameHr_1405080(v26);
    }
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateShoulder_Unknown6()
{
  __int64 v0;
  struct {
    __int64 v1;
    __int64 v2;
  } v1_;

  ProcPerchSceneGaze_143c080_alt2(&v1_.v1);
  GameRoutine_143a500_alt1((__int64)&v1_.v1);
  v0 = v1_.v2;
  if (v1_.v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1_.v2 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak_alt2(v0);
  }
  game_facility_anonymous_143a790_alt1((const char*)GameData_2246348);
}

_QWORD* ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  unsigned __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* result;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  __int64 v26[2];
  struct {
    _QWORD* v27;
    __int64 v28;
  } v27_;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;

  ProcPerchSceneGaze_1439890(&v27_.v27, GameData_1aeedbf_alt1);
  if (v27_.v27 == nullptr) {
    goto LABEL_46;
  }
  v0 = v27_.v28;
  v26[0] = (__int64)v27_.v27;
  v26[1] = v27_.v28;
  if (v27_.v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27_.v28 + 8), 1u,
                              memory_order_relaxed);
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v26);
    if (atomic_fetch_add((atomic_ullong* volatile)(v0 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
      std___1___shared_weak_count___release_weak_alt2(v0);
    }
  }
  else {
    game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe(
        v26);
  }
  ProcPerchSceneGaze_14393f0_alt2(&v24_.v24);
  v1 = v27_.v27[10];
  if (v1 != 0) {
    v2 = v27_.v27[6];
    if (v1 == 1) {
      v3 = 0;
      v4 = 0x0.0p+0f;
    }
    else {
      v4 = 0x0.0p+0f;
      v3 = 0;
      v9 = v27_.v27[9];
      do {
        v11 = *(_QWORD*)(*(_QWORD*)(v2 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF));
        v12 = *(_QWORD*)(v11 + 72);
        if (v12 != 0) {
          v13 = *(float*)(v12 + 60);
          if (v13 < *(float*)(v11 + 160)) {
            v13 = *(float*)(v11 + 160);
          }
        }
        else {
          v13 = *(float*)(v11 + 160);
        }
        v14 = *(_QWORD*)(*(_QWORD*)(v2 + 8 * ((v9 + 1) >> 9)) +
                         8 * ((v9 + 1) & 0x1FF));
        v15 = *(_QWORD*)(v14 + 72);
        if (v15 != 0) {
          v10 = *(float*)(v15 + 60);
          if (v10 < *(float*)(v14 + 160)) {
            v10 = *(float*)(v14 + 160);
          }
        }
        else {
          v10 = *(float*)(v14 + 160);
        }
        v3 += 2;
        v9 += 2LL;
        v4 = (float)(v4 + v13) + v10;
      } while ((v1 & 0xFFFFFFFFFFFFFFFELL) != v3);
    }
    if ((v1 & 1) != 0) {
      v5 = *(
          _QWORD*)(*(_QWORD*)(v2 +
                              8 * ((unsigned __int64)(v3 + v27_.v27[9]) >> 9)) +
                   8LL * (((_WORD)v3 + (unsigned __int16)v27_.v27[9]) & 0x1FF));
      v6 = *(_QWORD*)(v5 + 72);
      if (v6 != 0) {
        v7 = *(float*)(v6 + 60);
        if (v7 < *(float*)(v5 + 160)) {
          v7 = *(float*)(v5 + 160);
        }
      }
      else {
        v7 = *(float*)(v5 + 160);
      }
      v4 = v4 + v7;
      v8 = v24_.v24;
      if (v24_.v24 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v4 = 0x0.0p+0f;
  }
  v8 = v24_.v24;
  if (v24_.v24 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v16 = SceneManager_138e5e0_alt1(*(_QWORD*)GameData_212dce8);
  if (v16 != 0) {
    v17 = v24_.v25;
    if (v24_.v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24_.v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v29_.v29[2] = v17;
    v29_.v29[0] = GameData_203de10;
    v29_.v29[1] = v8;
    v18 = *(_QWORD*)(v16 + 176);
    v19 = *(_QWORD*)(v16 + 184);
    v29_.v30 = v29_.v29;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v18, (__int64)v29_.v29,
                                   0x1.0000000000000p+0f, v4);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak_alt2(v19);
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v18, (__int64)v29_.v29,
                                   0x1.0000000000000p+0f, v4);
    }
    if (v29_.v30 == v29_.v29) {
      v20 = 32;
      goto LABEL_42;
    }
    if (v29_.v30 != nullptr) {
      v20 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v29_.v30 + v20))((__int64)v29_.v30);
    }
  }
LABEL_43:
  v21 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt2(v21);
  }
LABEL_46:
  v22 = v27_.v28;
  if (v27_.v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27_.v28 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt2(v22);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable;
  return result;
}

__int64 ProcPerchSceneGaze_143cd70()
{
  _QWORD* v0;
  void* v1;
  void* v2;
  void* v3;
  __int64 result;
  __int64 v5;

  v0 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v1 = GameData_203d978;
  GameData_2246328 = (__int64)v0;
  GameData_2246330 = (__int64)(v0 + 6);
  GameData_2246338 = (__int64)(v0 + 6);
  v0[2] = GameData_203d970;
  v0[3] = v1;
  v2 = GameData_203d988;
  v0[4] = GameData_203d980;
  v0[5] = v2;
  v3 = GameData_203d968;
  *v0 = GameData_203d960;
  v0[1] = v3;
  result = GameRoutine_2b0();
  v5 = *(_QWORD*)(GameData_2246328 + 8);
  GameData_2246340 = *(_QWORD*)GameData_2246328;
  GameData_2246348 = v5;
  return result;
}

#pragma GCC visibility pop
