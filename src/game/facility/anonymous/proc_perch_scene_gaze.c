#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
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
__n128 ProcPerchSceneGaze_Destructor(__int64 a1);
__int64 ProcPerchSceneGaze_Unknown2(__int64 result);
__int64 ProcPerchSceneGaze_Unknown12(__int64 a1);
__n128 ProcPerchSceneGaze_1438490(__int64 a1);
__n128 ProcPerchSceneGaze_14385a0(__int64 a1);
__int64 ProcPerchSceneGaze_14386e0(__int64 a1);
__n128 ProcPerchSceneGaze_14387f0(_QWORD* a1);
__n128 ProcPerchSceneGaze_1438900(_QWORD* a1);
__int64 ProcPerchSceneGaze_CameraStateFront_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateFront_Unknown3(__n128 a1);
void ProcPerchSceneGaze_CameraStateFront_Unknown6();
__n128
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure0_Invoke();
__n128
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure1_Invoke();
__int64 ProcPerchSceneGaze_CameraStateArm_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown3(__n128 a1);
_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown4(__n128 a1);
void ProcPerchSceneGaze_CameraStateArm_Unknown6();
__int64 ProcPerchSceneGaze_CameraStateShoulder_Unknown2(__int64 a1);
_QWORD* ProcPerchSceneGaze_CameraStateShoulder_Unknown4(__n128 a1);
void ProcPerchSceneGaze_CameraStateShoulder_Unknown6();
_QWORD* ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2(__n128 a1);
__int64 ProcPerchSceneGaze_143cd70();

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
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v2);
  }
  v3 = GameData_2262ae0;
  if (GameData_2262ae0 != 0 && (*(_BYTE*)(GameData_2262ae0 + 1017) & 1) == 0) {
    v4 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v6_.v6, "%s%s", "Alpha", "Out");
      ProcTransitionAnim_156af20(v4, 4, 1, (__int64*)(v3 + 168),
                                 (__int64)"L_Key", (__int64)v6_.v6);
    }
    *(_WORD*)(v3 + 1016) = 256;
  }
}

__n128 ProcPerchSceneGaze_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* i;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v10;
  __int64 v11;
  __int64 v13;
  int v14;

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
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  v3 = *GameData_2132440[0];
  if (*GameData_2132440[0] != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2132438,
                              memory_order_acquire) &
         1) == 0) {
      v13 = v3;
      v14 = __cxa_guard_acquire(GameData_2132438);
      v3 = v13;
      if (v14 != 0) {
        GameRoutine_2b0();
        __cxa_guard_release(GameData_2132438);
        v3 = v13;
      }
    }
    v4 = *(_QWORD**)(v3 + 32);
    for (i = *(_QWORD**)(v3 + 40); v4 != i; v4 += 2) {
      GameRoutine_14a1520(v4, 1);
    }
  }
  v6 = *(_QWORD*)(a1 + 256);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1();
  }
  *(_QWORD*)a1 = GameData_203dbf0;
  *(_QWORD*)(a1 + 208) = GameData_203dca0;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v7 = (_QWORD*)GameData_212dce8;
  v8 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
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
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 ProcPerchSceneGaze_Unknown2(__int64 result)
{

#pragma clang fp contract(off)
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
      snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                     (__int64)v15, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
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

__n128 ProcPerchSceneGaze_14385a0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

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
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
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

__n128 ProcPerchSceneGaze_1438900(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

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
  GameRoutine_658c00(a1 - 15);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
}

__int64 ProcPerchSceneGaze_CameraStateFront_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  *(__n128*)&v8 = ProcPerchSceneGaze_14393f0_alt1();
  if (v14 != 0) {
    v9 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
    if (v9 != 0) {
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16_.v16[2] = v15;
      v16_.v16[0] = GameData_203de10;
      v16_.v16[1] = v14;
      v10 = *(_QWORD*)(v9 + 176);
      v11 = *(_QWORD*)(v9 + 184);
      v16_.v17 = v16_.v16;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          *(__n128*)&v8 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
      }
      if (v16_.v17 == v16_.v16) {
        v12 = 32;
        goto LABEL_13;
      }
      if (v16_.v17 != nullptr) {
        v12 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v16_.v17 + v12))((__int64)v16_.v17);
      }
    }
  }
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v8);
    std___1___shared_weak_count___release_weak_alt1();
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateFront_Unknown3(__n128 a1)
{

#pragma clang fp contract(off)
  __n128 v1;
  __int64* v2;
  __int64 v3;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* result;
  __int64 v54;
  __int64 v55;
  __int64 v56[2];
  struct {
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v57_;
  struct {
    _QWORD v60[2];
    __int64 v61;
    char gap88_[8];
    _QWORD* v62;
  } v60_;

  v1 = GameRoutine_1439890(&v57_.v57, (__int64)&GameData_1ad438b, a1);
  v2 = (__int64*)GameData_212dce8;
  if (v57_.v57 == 0) {
    goto LABEL_46;
  }
  v3 = v57_.v58;
  v56[0] = v57_.v57;
  v56[1] = v57_.v58;
  if (v57_.v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57_.v58 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1439a20(v56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    GameRoutine_1439a20(v56);
  }
  v1 = ProcPerchSceneGaze_1439bb0_alt1();
  v10 = *(_QWORD*)(v57_.v57 + 80);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v57_.v57 + 48);
    if (v10 == 1) {
      v12 = 0;
      v13 = 0x0.0p+0f;
    }
    else {
      v13 = 0x0.0p+0f;
      v12 = 0;
      v17 = *(_QWORD*)(v57_.v57 + 72);
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF));
        v20 = *(_QWORD*)(v19 + 72);
        if (v20 != 0) {
          v21 = *(float*)(v20 + 60);
          if (v21 < *(float*)(v19 + 160)) {
            v21 = *(float*)(v19 + 160);
          }
        }
        else {
          v21 = *(float*)(v19 + 160);
        }
        v22 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * ((v17 + 1) >> 9)) +
                         8 * ((v17 + 1) & 0x1FF));
        v23 = *(_QWORD*)(v22 + 72);
        if (v23 != 0) {
          v18 = *(float*)(v23 + 60);
          if (v18 < *(float*)(v22 + 160)) {
            v18 = *(float*)(v22 + 160);
          }
        }
        else {
          v18 = *(float*)(v22 + 160);
        }
        PSEUDO_LOW_LANE128(v1, n128_f32, v13 + v21);
        v12 += 2;
        v17 += 2LL;
        v13 = LANES128(v1).n128_f32[0] + v18;
      } while ((v10 & 0xFFFFFFFFFFFFFFFELL) != v12);
    }
    if ((v10 & 1) != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v11 +
                                  8 * ((unsigned __int64)(v12 +
                                                          *(_QWORD*)(v57_.v57 +
                                                                     72)) >>
                                       9)) +
                       8LL * (((_WORD)v12 +
                               (unsigned __int16)*(_QWORD*)(v57_.v57 + 72)) &
                              0x1FF));
      v15 = *(_QWORD*)(v14 + 72);
      if (v15 != 0) {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v15 + 60));
        if (LANES128(v1).n128_f32[0] < *(float*)(v14 + 160)) {
          PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
        }
      }
      else {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
      }
      v13 = v13 + LANES128(v1).n128_f32[0];
      v16 = v54;
      if (v54 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v13 = 0x0.0p+0f;
  }
  v16 = v54;
  if (v54 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v24 = SceneManager_138e5e0(*v2, 0);
  if (v24 != 0) {
    if (v55 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                memory_order_relaxed);
    }
    v60_.v61 = v55;
    v60_.v60[0] = GameData_203de10;
    v60_.v60[1] = v16;
    v25 = *(_QWORD*)(v24 + 176);
    v26 = *(_QWORD*)(v24 + 184);
    v60_.v62 = v60_.v60;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v25, (__int64)v60_.v60,
                                   0x1.0000000000000p+0f, v13);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        v1 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v25, (__int64)v60_.v60,
                                   0x1.0000000000000p+0f, v13);
    }
    if (v60_.v62 == v60_.v60) {
      v27 = 32;
      goto LABEL_42;
    }
    if (v60_.v62 != nullptr) {
      v27 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v60_.v62 + v27))((__int64)v60_.v62);
    }
  }
LABEL_43:
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v55 + 16LL))(
        v55, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_46:
  v28 = v57_.v58;
  if (v57_.v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57_.v58 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
        v28, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
  ProcPerchSceneGaze_1439df0_alt1(v1);
  v35 = SceneManager_138e5e0(*v2, 0);
  if (v35 != 0) {
    v36 = v35;
    v37 = *(_QWORD*)(v35 + 128);
    v38 = *(_QWORD*)(v36 + 136);
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v37);
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      GameRoutine_1405080(v37);
    }
  }
  v39 = (__int64*)fw_memory_g_heap_manager_ptr;
  v40 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_BYTE*)(v40 + 54) = 0;
  v57_.v57 = 57;
  v57_.v58 = 54;
  v57_.v59 = v40;
  *(_QWORD*)(v40 + 32) = 0xB3E95FA89CE68A82LL;
  *(_QWORD*)(v40 + 40) = 0x5F9B81E397B9E4A5LL;
  *(_QWORD*)(v40 + 46) = 0x8BA7E58B96E95F9BLL;
  *(_QWORD*)v40 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v40 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v40 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v40 + 24) = 0xE3BE81E3A2ADE65FLL;
  game_facility_14107c0((__int64)v60_.v60, (__int64)&v57_.v57);
  v47 = SceneManager_138e5e0(*v2, 0);
  if (v47 == 0) {
  LABEL_58:
    if ((v60_.v60[0] & 1) == 0) {
      goto LABEL_64;
    }
    goto LABEL_59;
  }
  v48 = v47;
  v49 = *(_QWORD*)(v47 + 112);
  v50 = *(_QWORD*)(v48 + 120);
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0(v49, (unsigned __int8*)v60_.v60);
    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      std___1___shared_weak_count___release_weak_alt1();
    }
    goto LABEL_58;
  }
  GameRoutine_14127e0(v49, (unsigned __int8*)v60_.v60);
  if ((v60_.v60[0] & 1) != 0) {
  LABEL_59:
    if (v60_.v61 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*v39 + 200) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v39 + v51);
    }
  }
LABEL_64:
  if ((v57_.v57 & 1) != 0 && v57_.v59 != 0) {
    v52 = 128;
    if (*(_QWORD*)(*v39 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v39 + v52);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v39, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateFront_Unknown6()
{
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  ProcPerchSceneGaze_14393f0_alt1();
  GameRoutine_143a500(&v8_.v8);
  v7 = v8_.v9;
  if (v8_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1();
  }
  game_facility_anonymous_143a790((__int64)GameData_1abbaec);
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

__n128

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __n128 result;
  __int64 v3;
  _BYTE v4[16];
  struct {
    _QWORD v5[2];
    __int64 v6;
  } v5_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v1 + 29) = 0;
  v5_.v5[0] = 33;
  v5_.v5[1] = 29;
  v5_.v6 = v1;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v1 + 16) = 0xE95F9EB3E8B3A6E8LL;
  *(_QWORD*)(v1 + 21) = 0xB381E39BA3E95F9ELL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v4), (__int64)v5_.v5, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v5_.v5[0] & 1) != 0 && v5_.v6 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v3);
  }
  return result;
}

__n128

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_AddGazeCameraWorkSe_closure1_Invoke()
{
  __int64 v0;
  __int64 v1;
  __n128 result;
  __int64 v3;
  _BYTE v4[16];
  struct {
    _QWORD v5[2];
    __int64 v6;
  } v5_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v1 + 32) = 0;
  v5_.v5[0] = 41;
  v5_.v5[1] = 32;
  v5_.v6 = v1;
  *(_QWORD*)v1 = 0x81E3A2ADE65F4553LL;
  *(_QWORD*)(v1 + 8) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v1 + 16) = 0xE75F9EB3E8B3A6E8LL;
  *(_QWORD*)(v1 + 24) = 0xB381E39BA3E9AD9FLL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v4), (__int64)v5_.v5, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v5_.v5[0] & 1) != 0 && v5_.v6 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v3);
  }
  return result;
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

#pragma clang fp contract(off)
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  *(__n128*)&v8 = ProcPerchSceneGaze_1439bb0_alt1();
  if (v14 != 0) {
    v9 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
    if (v9 != 0) {
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16_.v16[2] = v15;
      v16_.v16[0] = GameData_203de10;
      v16_.v16[1] = v14;
      v10 = *(_QWORD*)(v9 + 176);
      v11 = *(_QWORD*)(v9 + 184);
      v16_.v17 = v16_.v16;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          *(__n128*)&v8 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
      }
      if (v16_.v17 == v16_.v16) {
        v12 = 32;
        goto LABEL_13;
      }
      if (v16_.v17 != nullptr) {
        v12 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v16_.v17 + v12))((__int64)v16_.v17);
      }
    }
  }
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v8);
    std___1___shared_weak_count___release_weak_alt1();
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown3(__n128 a1)
{

#pragma clang fp contract(off)
  __n128 v1;
  __int64* v2;
  __int64 v3;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* result;
  __int64 v40;
  __int64 v41;
  __int64 v42[2];
  struct {
    _QWORD* v43;
    __int64 v44;
  } v43_;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;

  v1 = GameRoutine_1439890(&v43_.v43, (__int64)&GameData_1a9e360, a1);
  v2 = (__int64*)GameData_212dce8;
  if (v43_.v43 == nullptr) {
    goto LABEL_46;
  }
  v3 = v43_.v44;
  v42[0] = (__int64)v43_.v43;
  v42[1] = v43_.v44;
  if (v43_.v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43_.v44 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1439a20(v42);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    GameRoutine_1439a20(v42);
  }
  v1 = ProcPerchSceneGaze_143c080_alt1();
  v10 = v43_.v43[10];
  if (v10 != 0) {
    v11 = v43_.v43[6];
    if (v10 == 1) {
      v12 = 0;
      v13 = 0x0.0p+0f;
    }
    else {
      v13 = 0x0.0p+0f;
      v12 = 0;
      v17 = v43_.v43[9];
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF));
        v20 = *(_QWORD*)(v19 + 72);
        if (v20 != 0) {
          v21 = *(float*)(v20 + 60);
          if (v21 < *(float*)(v19 + 160)) {
            v21 = *(float*)(v19 + 160);
          }
        }
        else {
          v21 = *(float*)(v19 + 160);
        }
        v22 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * ((v17 + 1) >> 9)) +
                         8 * ((v17 + 1) & 0x1FF));
        v23 = *(_QWORD*)(v22 + 72);
        if (v23 != 0) {
          v18 = *(float*)(v23 + 60);
          if (v18 < *(float*)(v22 + 160)) {
            v18 = *(float*)(v22 + 160);
          }
        }
        else {
          v18 = *(float*)(v22 + 160);
        }
        PSEUDO_LOW_LANE128(v1, n128_f32, v13 + v21);
        v12 += 2;
        v17 += 2LL;
        v13 = LANES128(v1).n128_f32[0] + v18;
      } while ((v10 & 0xFFFFFFFFFFFFFFFELL) != v12);
    }
    if ((v10 & 1) != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v11 +
                                  8 * ((unsigned __int64)(v12 + v43_.v43[9]) >>
                                       9)) +
                       8LL * (((_WORD)v12 + (unsigned __int16)v43_.v43[9]) &
                              0x1FF));
      v15 = *(_QWORD*)(v14 + 72);
      if (v15 != 0) {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v15 + 60));
        if (LANES128(v1).n128_f32[0] < *(float*)(v14 + 160)) {
          PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
        }
      }
      else {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
      }
      v13 = v13 + LANES128(v1).n128_f32[0];
      v16 = v40;
      if (v40 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v13 = 0x0.0p+0f;
  }
  v16 = v40;
  if (v40 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v24 = SceneManager_138e5e0(*v2, 0);
  if (v24 != 0) {
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                memory_order_relaxed);
    }
    v45_.v45[2] = v41;
    v45_.v45[0] = GameData_203de10;
    v45_.v45[1] = v16;
    v25 = *(_QWORD*)(v24 + 176);
    v26 = *(_QWORD*)(v24 + 184);
    v45_.v46 = v45_.v45;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v25, (__int64)v45_.v45,
                                   0x1.0000000000000p+0f, v13);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        v1 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v25, (__int64)v45_.v45,
                                   0x1.0000000000000p+0f, v13);
    }
    if (v45_.v46 == v45_.v45) {
      v27 = 32;
      goto LABEL_42;
    }
    if (v45_.v46 != nullptr) {
      v27 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v45_.v46 + v27))((__int64)v45_.v46);
    }
  }
LABEL_43:
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v41 + 16LL))(
        v41, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_46:
  v28 = v43_.v44;
  if (v43_.v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43_.v44 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
        v28, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
  ProcPerchSceneGaze_1439df0_alt1(v1);
  v35 = SceneManager_138e5e0(*v2, 0);
  if (v35 != 0) {
    v36 = v35;
    v37 = *(_QWORD*)(v35 + 128);
    v38 = *(_QWORD*)(v36 + 136);
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v37);
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      GameRoutine_1405080(v37);
    }
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result =
      game_facility_anonymous_ProcPerchSceneGaze_CameraStateShoulder_vtable;
  return result;
}

_QWORD* ProcPerchSceneGaze_CameraStateArm_Unknown4(__n128 a1)
{

#pragma clang fp contract(off)
  __n128 v1;
  __int64* v2;
  __int64 v3;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* result;
  __int64 v54;
  __int64 v55;
  __int64 v56[2];
  struct {
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v57_;
  struct {
    _QWORD v60[2];
    __int64 v61;
    char gap88_[8];
    _QWORD* v62;
  } v60_;

  v1 = GameRoutine_1439890(&v57_.v57, (__int64)&GameData_1ac4892, a1);
  v2 = (__int64*)GameData_212dce8;
  if (v57_.v57 == 0) {
    goto LABEL_46;
  }
  v3 = v57_.v58;
  v56[0] = v57_.v57;
  v56[1] = v57_.v58;
  if (v57_.v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57_.v58 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1439a20(v56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    GameRoutine_1439a20(v56);
  }
  v1 = ProcPerchSceneGaze_14393f0_alt1();
  v10 = *(_QWORD*)(v57_.v57 + 80);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v57_.v57 + 48);
    if (v10 == 1) {
      v12 = 0;
      v13 = 0x0.0p+0f;
    }
    else {
      v13 = 0x0.0p+0f;
      v12 = 0;
      v17 = *(_QWORD*)(v57_.v57 + 72);
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF));
        v20 = *(_QWORD*)(v19 + 72);
        if (v20 != 0) {
          v21 = *(float*)(v20 + 60);
          if (v21 < *(float*)(v19 + 160)) {
            v21 = *(float*)(v19 + 160);
          }
        }
        else {
          v21 = *(float*)(v19 + 160);
        }
        v22 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * ((v17 + 1) >> 9)) +
                         8 * ((v17 + 1) & 0x1FF));
        v23 = *(_QWORD*)(v22 + 72);
        if (v23 != 0) {
          v18 = *(float*)(v23 + 60);
          if (v18 < *(float*)(v22 + 160)) {
            v18 = *(float*)(v22 + 160);
          }
        }
        else {
          v18 = *(float*)(v22 + 160);
        }
        PSEUDO_LOW_LANE128(v1, n128_f32, v13 + v21);
        v12 += 2;
        v17 += 2LL;
        v13 = LANES128(v1).n128_f32[0] + v18;
      } while ((v10 & 0xFFFFFFFFFFFFFFFELL) != v12);
    }
    if ((v10 & 1) != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v11 +
                                  8 * ((unsigned __int64)(v12 +
                                                          *(_QWORD*)(v57_.v57 +
                                                                     72)) >>
                                       9)) +
                       8LL * (((_WORD)v12 +
                               (unsigned __int16)*(_QWORD*)(v57_.v57 + 72)) &
                              0x1FF));
      v15 = *(_QWORD*)(v14 + 72);
      if (v15 != 0) {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v15 + 60));
        if (LANES128(v1).n128_f32[0] < *(float*)(v14 + 160)) {
          PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
        }
      }
      else {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
      }
      v13 = v13 + LANES128(v1).n128_f32[0];
      v16 = v54;
      if (v54 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v13 = 0x0.0p+0f;
  }
  v16 = v54;
  if (v54 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v24 = SceneManager_138e5e0(*v2, 0);
  if (v24 != 0) {
    if (v55 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                memory_order_relaxed);
    }
    v60_.v61 = v55;
    v60_.v60[0] = GameData_203de10;
    v60_.v60[1] = v16;
    v25 = *(_QWORD*)(v24 + 176);
    v26 = *(_QWORD*)(v24 + 184);
    v60_.v62 = v60_.v60;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v25, (__int64)v60_.v60,
                                   0x1.0000000000000p+0f, v13);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        v1 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v25, (__int64)v60_.v60,
                                   0x1.0000000000000p+0f, v13);
    }
    if (v60_.v62 == v60_.v60) {
      v27 = 32;
      goto LABEL_42;
    }
    if (v60_.v62 != nullptr) {
      v27 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v60_.v62 + v27))((__int64)v60_.v62);
    }
  }
LABEL_43:
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v55 + 16LL))(
        v55, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_46:
  v28 = v57_.v58;
  if (v57_.v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57_.v58 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
        v28, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
  ProcPerchSceneGaze_1439df0_alt1(v1);
  v35 = SceneManager_138e5e0(*v2, 0);
  if (v35 != 0) {
    v36 = v35;
    v37 = *(_QWORD*)(v35 + 128);
    v38 = *(_QWORD*)(v36 + 136);
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v37);
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      GameRoutine_1405080(v37);
    }
  }
  v39 = (__int64*)fw_memory_g_heap_manager_ptr;
  v40 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_BYTE*)(v40 + 54) = 0;
  v57_.v57 = 57;
  v57_.v58 = 54;
  v57_.v59 = v40;
  *(_QWORD*)(v40 + 32) = 0xB3E95FA89CE68A82LL;
  *(_QWORD*)(v40 + 40) = 0x5F9B81E397B9E4A5LL;
  *(_QWORD*)(v40 + 46) = 0x86BAE482B5E75F9BLL;
  *(_QWORD*)v40 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v40 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v40 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v40 + 24) = 0xE3BE81E3A2ADE65FLL;
  game_facility_14107c0((__int64)v60_.v60, (__int64)&v57_.v57);
  v47 = SceneManager_138e5e0(*v2, 0);
  if (v47 == 0) {
  LABEL_58:
    if ((v60_.v60[0] & 1) == 0) {
      goto LABEL_64;
    }
    goto LABEL_59;
  }
  v48 = v47;
  v49 = *(_QWORD*)(v47 + 112);
  v50 = *(_QWORD*)(v48 + 120);
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0(v49, (unsigned __int8*)v60_.v60);
    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      std___1___shared_weak_count___release_weak_alt1();
    }
    goto LABEL_58;
  }
  GameRoutine_14127e0(v49, (unsigned __int8*)v60_.v60);
  if ((v60_.v60[0] & 1) != 0) {
  LABEL_59:
    if (v60_.v61 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*v39 + 200) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v39 + v51);
    }
  }
LABEL_64:
  if ((v57_.v57 & 1) != 0 && v57_.v59 != 0) {
    v52 = 128;
    if (*(_QWORD*)(*v39 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v39 + v52);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v39, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateFront_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateArm_Unknown6()
{
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  ProcPerchSceneGaze_1439bb0_alt1();
  GameRoutine_143a500(&v8_.v8);
  v7 = v8_.v9;
  if (v8_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1();
  }
  game_facility_anonymous_143a790(GameData_2246340);
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

#pragma clang fp contract(off)
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  *(__n128*)&v8 = ProcPerchSceneGaze_143c080_alt1();
  if (v14 != 0) {
    v9 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
    if (v9 != 0) {
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16_.v16[2] = v15;
      v16_.v16[0] = GameData_203de10;
      v16_.v16[1] = v14;
      v10 = *(_QWORD*)(v9 + 176);
      v11 = *(_QWORD*)(v9 + 184);
      v16_.v17 = v16_.v16;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          *(__n128*)&v8 = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      else {
        SceneCharacterLookAt_1416a00(v10, (__int64)v16_.v16,
                                     0x1.0000000000000p+0f, 0x0.0p+0f);
      }
      if (v16_.v17 == v16_.v16) {
        v12 = 32;
        goto LABEL_13;
      }
      if (v16_.v17 != nullptr) {
        v12 = 40;
      LABEL_13:
        (*(void (**)(__int64))(*v16_.v17 + v12))((__int64)v16_.v17);
      }
    }
  }
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v8);
    std___1___shared_weak_count___release_weak_alt1();
  }
  return a1;
}

_QWORD* ProcPerchSceneGaze_CameraStateShoulder_Unknown4(__n128 a1)
{

#pragma clang fp contract(off)
  __n128 v1;
  __int64* v2;
  __int64 v3;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* result;
  __int64 v40;
  __int64 v41;
  __int64 v42[2];
  struct {
    _QWORD* v43;
    __int64 v44;
  } v43_;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;

  v1 = GameRoutine_1439890(&v43_.v43, (__int64)&GameData_1af2af7, a1);
  v2 = (__int64*)GameData_212dce8;
  if (v43_.v43 == nullptr) {
    goto LABEL_46;
  }
  v3 = v43_.v44;
  v42[0] = (__int64)v43_.v43;
  v42[1] = v43_.v44;
  if (v43_.v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43_.v44 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1439a20(v42);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    GameRoutine_1439a20(v42);
  }
  v1 = ProcPerchSceneGaze_1439bb0_alt1();
  v10 = v43_.v43[10];
  if (v10 != 0) {
    v11 = v43_.v43[6];
    if (v10 == 1) {
      v12 = 0;
      v13 = 0x0.0p+0f;
    }
    else {
      v13 = 0x0.0p+0f;
      v12 = 0;
      v17 = v43_.v43[9];
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF));
        v20 = *(_QWORD*)(v19 + 72);
        if (v20 != 0) {
          v21 = *(float*)(v20 + 60);
          if (v21 < *(float*)(v19 + 160)) {
            v21 = *(float*)(v19 + 160);
          }
        }
        else {
          v21 = *(float*)(v19 + 160);
        }
        v22 = *(_QWORD*)(*(_QWORD*)(v11 + 8 * ((v17 + 1) >> 9)) +
                         8 * ((v17 + 1) & 0x1FF));
        v23 = *(_QWORD*)(v22 + 72);
        if (v23 != 0) {
          v18 = *(float*)(v23 + 60);
          if (v18 < *(float*)(v22 + 160)) {
            v18 = *(float*)(v22 + 160);
          }
        }
        else {
          v18 = *(float*)(v22 + 160);
        }
        PSEUDO_LOW_LANE128(v1, n128_f32, v13 + v21);
        v12 += 2;
        v17 += 2LL;
        v13 = LANES128(v1).n128_f32[0] + v18;
      } while ((v10 & 0xFFFFFFFFFFFFFFFELL) != v12);
    }
    if ((v10 & 1) != 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(v11 +
                                  8 * ((unsigned __int64)(v12 + v43_.v43[9]) >>
                                       9)) +
                       8LL * (((_WORD)v12 + (unsigned __int16)v43_.v43[9]) &
                              0x1FF));
      v15 = *(_QWORD*)(v14 + 72);
      if (v15 != 0) {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v15 + 60));
        if (LANES128(v1).n128_f32[0] < *(float*)(v14 + 160)) {
          PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
        }
      }
      else {
        PSEUDO_LOW_LANE128(v1, n128_u32, *(_DWORD*)(v14 + 160));
      }
      v13 = v13 + LANES128(v1).n128_f32[0];
      v16 = v40;
      if (v40 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v13 = 0x0.0p+0f;
  }
  v16 = v40;
  if (v40 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v24 = SceneManager_138e5e0(*v2, 0);
  if (v24 != 0) {
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                memory_order_relaxed);
    }
    v45_.v45[2] = v41;
    v45_.v45[0] = GameData_203de10;
    v45_.v45[1] = v16;
    v25 = *(_QWORD*)(v24 + 176);
    v26 = *(_QWORD*)(v24 + 184);
    v45_.v46 = v45_.v45;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v25, (__int64)v45_.v45,
                                   0x1.0000000000000p+0f, v13);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        v1 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v25, (__int64)v45_.v45,
                                   0x1.0000000000000p+0f, v13);
    }
    if (v45_.v46 == v45_.v45) {
      v27 = 32;
      goto LABEL_42;
    }
    if (v45_.v46 != nullptr) {
      v27 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v45_.v46 + v27))((__int64)v45_.v46);
    }
  }
LABEL_43:
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v41 + 16LL))(
        v41, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_46:
  v28 = v43_.v44;
  if (v43_.v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43_.v44 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
        v28, *(long double*)&v1);
    v1 = std___1___shared_weak_count___release_weak_alt1();
  }
  ProcPerchSceneGaze_1439df0_alt1(v1);
  v35 = SceneManager_138e5e0(*v2, 0);
  if (v35 != 0) {
    v36 = v35;
    v37 = *(_QWORD*)(v35 + 128);
    v38 = *(_QWORD*)(v36 + 136);
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v37);
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      GameRoutine_1405080(v37);
    }
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result = game_facility_anonymous_ProcPerchSceneGaze_CameraStateArm_vtable;
  return result;
}

void ProcPerchSceneGaze_CameraStateShoulder_Unknown6()
{
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  ProcPerchSceneGaze_143c080_alt1();
  GameRoutine_143a500(&v8_.v8);
  v7 = v8_.v9;
  if (v8_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1();
  }
  game_facility_anonymous_143a790(GameData_2246348);
}

_QWORD* ProcPerchSceneGaze_CameraStateFromQuestion_Unknown2(__n128 a1)
{

#pragma clang fp contract(off)
  long double v1;
  __int64 v2;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* result;
  __int64 v29;
  __int64 v30;
  __int64 v31[2];
  struct {
    _QWORD* v32;
    __int64 v33;
  } v32_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  *(__n128*)&v1 =
      GameRoutine_1439890(&v32_.v32, (__int64)&GameData_1aeedbf, a1);
  if (v32_.v32 == nullptr) {
    goto LABEL_46;
  }
  v2 = v32_.v33;
  v31[0] = (__int64)v32_.v32;
  v31[1] = v32_.v33;
  if (v32_.v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1439a20(v31);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    GameRoutine_1439a20(v31);
  }
  *(__n128*)&v1 = ProcPerchSceneGaze_14393f0_alt1();
  v9 = v32_.v32[10];
  if (v9 != 0) {
    v10 = v32_.v32[6];
    if (v9 == 1) {
      v11 = 0;
      v12 = 0x0.0p+0f;
    }
    else {
      v12 = 0x0.0p+0f;
      v11 = 0;
      v16 = v32_.v32[9];
      do {
        v18 = *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF));
        v19 = *(_QWORD*)(v18 + 72);
        if (v19 != 0) {
          v20 = *(float*)(v19 + 60);
          if (v20 < *(float*)(v18 + 160)) {
            v20 = *(float*)(v18 + 160);
          }
        }
        else {
          v20 = *(float*)(v18 + 160);
        }
        v21 = *(_QWORD*)(*(_QWORD*)(v10 + 8 * ((v16 + 1) >> 9)) +
                         8 * ((v16 + 1) & 0x1FF));
        v22 = *(_QWORD*)(v21 + 72);
        if (v22 != 0) {
          v17 = *(float*)(v22 + 60);
          if (v17 < *(float*)(v21 + 160)) {
            v17 = *(float*)(v21 + 160);
          }
        }
        else {
          v17 = *(float*)(v21 + 160);
        }
        *(float*)&v1 = v12 + v20;
        v11 += 2;
        v16 += 2LL;
        v12 = *(float*)&v1 + v17;
      } while ((v9 & 0xFFFFFFFFFFFFFFFELL) != v11);
    }
    if ((v9 & 1) != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)(v10 +
                                  8 * ((unsigned __int64)(v11 + v32_.v32[9]) >>
                                       9)) +
                       8LL * (((_WORD)v11 + (unsigned __int16)v32_.v32[9]) &
                              0x1FF));
      v14 = *(_QWORD*)(v13 + 72);
      if (v14 != 0) {
        LODWORD(v1) = *(_DWORD*)(v14 + 60);
        if (*(float*)&v1 < *(float*)(v13 + 160)) {
          LODWORD(v1) = *(_DWORD*)(v13 + 160);
        }
      }
      else {
        LODWORD(v1) = *(_DWORD*)(v13 + 160);
      }
      v12 = v12 + *(float*)&v1;
      v15 = v29;
      if (v29 == 0) {
        goto LABEL_43;
      }
      goto LABEL_31;
    }
  }
  else {
    v12 = 0x0.0p+0f;
  }
  v15 = v29;
  if (v29 == 0) {
    goto LABEL_43;
  }
LABEL_31:
  v23 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v23 != 0) {
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
    }
    v34_.v34[2] = v30;
    v34_.v34[0] = GameData_203de10;
    v34_.v34[1] = v15;
    v24 = *(_QWORD*)(v23 + 176);
    v25 = *(_QWORD*)(v23 + 184);
    v34_.v35 = v34_.v34;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00(v24, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        *(__n128*)&v1 = std___1___shared_weak_count___release_weak_alt1();
      }
    }
    else {
      SceneCharacterLookAt_1416a00(v24, (__int64)v34_.v34,
                                   0x1.0000000000000p+0f, v12);
    }
    if (v34_.v35 == v34_.v34) {
      v26 = 32;
      goto LABEL_42;
    }
    if (v34_.v35 != nullptr) {
      v26 = 40;
    LABEL_42:
      (*(void (**)(__int64))(*v34_.v35 + v26))((__int64)v34_.v35);
    }
  }
LABEL_43:
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v30 + 16LL))(v30, v1);
    *(__n128*)&v1 = std___1___shared_weak_count___release_weak_alt1();
  }
LABEL_46:
  v27 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v27 + 16LL))(v27, v1);
    std___1___shared_weak_count___release_weak_alt1();
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
