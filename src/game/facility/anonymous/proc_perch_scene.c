#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aeb5df;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f4010;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchScene_15f0f70();
void ProcPerchScene_15f0fa0();
__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2);
__int64 GameRoutine_14368c0(void);
__int64 GameRoutine_144fca0(_QWORD, _QWORD);
__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14514d0(_QWORD, _QWORD);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1472720(_QWORD);
__int64 GameRoutine_1486c20(float);
__int64 GameRoutine_15f0540(_QWORD, _QWORD);
__int64 GameRoutine_170cac0(_QWORD);
__int64 GameRoutine_1775750(_QWORD, _QWORD);
__int64 GameRoutine_1775df0(_QWORD, _QWORD);
__int64 GameRoutine_8696e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1ab1a04;
extern _UNKNOWN GameData_1af2e0a;
extern _UNKNOWN* GameData_2174240;
extern __int64 (*GameData_2060a68[])();
extern __int64 (*GameData_2060ae8[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9f88;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_224ae20;
extern __int64 GameData_2262ae0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64* GameData_2131410;
extern char GameData_1aa5e95[];
float ProcTheaterSceneAct_13e2420(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera();
__int64 ProcPerchScene_15ee6b0();
__int64 ProcPerchScene_15ee740();
void game_facility_anonymous_ProcPerchScene_SetQuestionCamera();
void ProcPerchScene_15eea60();
__int64 ProcPerchScene_15eec60();
__int64 ProcPerchScene_15ef1d0(__int64 result);
__int64 ProcPerchScene_15ef780(__int64 a1);
bool ProcPerchScene_15ef7f0();
__int64 ProcPerchScene_15ef820(__int64 result);
__int64 ProcPerchScene_15efc60(__int64 a1);
__int64 ProcPerchScene_15efc80(__int64 result);
__int64 ProcPerchScene_15efd40(__int64 a1);
__int64 ProcPerchScene_15efd70(__int64 a1);
__int64 ProcPerchScene_15f02e0();
__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera_closure_Invoke(
    __int64 a1);
__int64
game_facility_anonymous_ProcPerchScene_SetQuestionCamera_closure_Invoke();
_QWORD* GameRoutine_658c00(_QWORD* result);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int16* GameRoutine_1958ed0(__int16* result, __int64);
__int64 GameRoutine_1958ed0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1958ed0");
__int64 GameRoutine_658d60(__int64*);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_1afe8f0;
extern __int64 (*GameData_2060c20[])();
extern __int64 (*GameData_2060d08[])();
extern __int64 (*GameData_2060db8[])();
extern __int64 (*GameData_2060e00[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchScene_vtable[])();
extern __int64* GameData_2132488;
extern __int64 GameData_212c608[2];
extern __int64 GameData_225ae28;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_2241730;
void GameRoutine_1488300();
_QWORD* ProcPerchScene_15edda0(__int64 a1);
unsigned __int64 ProcPerchScene_15f0160();
_QWORD* ProcPerchScene_Destructor(__int64 a1);
__int64
ProcPerchScene_15f0fe0_alt1(__int64 a1) __asm__("ProcPerchScene_15f0fe0");
_QWORD* ProcPerchScene_15f1480(__int64 a1);
_QWORD* ProcPerchScene_15f16f0(__int16* a1);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 FacilityVariable_1472720(__int64);
__int64 GameHr_8696e0(int);
__int64 game_809dc0_alt1(__int64, _QWORD*, __n128) __asm__("game_809dc0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void GameRoutine_1958ed0_alt2(__int64, __int64) __asm__("GameRoutine_1958ed0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void ProcPerchScene_15f0fe0(__int64 a1);
__attribute__((swiftcall)) void PerchSceneDiff_14224a0(PSEUDO_X8, __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameHr_1421620(__int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_975940(__int64);
__int64 ShowmanSceneDiff_147d3c0(__int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_147dd40(int);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcPerchScene_15eedf0(__int64 a1);
void ProcPerchScene_15f0540(__int64 a1, unsigned __int8* a2);

_QWORD* ProcPerchScene_15edda0(__int64 a1)
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

  v1 = *(_DWORD*)(a1 + 152);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(_DWORD*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(_DWORD*)(a1 + 156);
            if (v5 == 0) {
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
  v5 = *(_DWORD*)(a1 + 156);
  if (v5 == 0) {
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
  *(_QWORD*)(a1 + 152) = 0;
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

__int64 game_facility_anonymous_ProcPerchScene_SetGreetCamera()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  v0 = GameData_212dce8;
  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)v0 + 264LL);
    if (v2 != 0) {
      v3 = *(_QWORD*)(*(_QWORD*)v0 + 256LL);
      v4 = result;
      v5 = *(_QWORD*)(*(_QWORD*)v0 + 264LL);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v6 = std___1___shared_weak_count_lock(v5);
      result = std___1___shared_weak_count___release_weak(v2);
      if (v6 != 0) {
        if (v3 == 0) {
          goto LABEL_15;
        }
        v9[0] = GameData_2060a68;
        v9[1] = v4;
        v10 = v9;
        v12 = v11;
        v11[0] = GameData_2060a68;
        v11[1] = v4;
        GameRoutine_14514d0(v11, v3 + 272);
        if (v12 == v11) {
          v7 = 32;
        }
        else {
          if (v12 == nullptr) {
            goto LABEL_10;
          }
          v7 = 40;
        }
        (*(void (**)(void*))(*v12 + v7))(v12);
      LABEL_10:
        result = (__int64)v10;
        if (v10 == v9) {
          v8 = 32;
        }
        else {
          if (v10 == nullptr) {
            goto LABEL_15;
          }
          v8 = 40;
        }
        result = (*(__int64 (**)(void*))(*v10 + v8))(v10);
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15ee6b0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  bool v3;
  unsigned __int64 add;
  unsigned int v5;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 128);
    v2 = *(_QWORD*)(result + 136);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
      v3 = *(_QWORD*)(v1 + 56) == 0;
      add = atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL);
      result = !v3;
      if (add == 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
        return v5;
      }
    }
    else {
      return *(_QWORD*)(v1 + 56) != 0;
    }
  }
  return result;
}

__int64 ProcPerchScene_15ee740()
{
  __int64* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v0 = GameData_2131410;
  v1 = *GameData_2131410;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      56, 16, 0);
  *(_BYTE*)(v3 + 50) = 0;
  v14 = 57;
  v15 = 50;
  v16 = v3;
  *(_WORD*)(v3 + 48) = -32103;
  *(_QWORD*)(v3 + 16) = 0x83E3A683E3A08AE5LL;
  *(_QWORD*)(v3 + 24) = 0xE58883E38383E38BLL;
  *(_QWORD*)(v3 + 32) = 0xAEBDE78D85E98D86LL;
  *(_QWORD*)(v3 + 40) = 0xE68F95E5AAB3E85FLL;
  *(_QWORD*)v3 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v3 + 8) = 0x828FE55FA89CE68ALL;
  GameRoutine_15f0540(v1, &v14);
  if ((v14 & 1) != 0 && v16 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v4, v16);
  }
  v5 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 128);
    v7 = *(_QWORD*)(v5 + 136);
    if (v7 == 0) {
      if (*(_QWORD*)(v6 + 56) == 0) {
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = *(_QWORD*)(v6 + 56);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v5 = v9;
    }
    if (v8 != 0) {
    LABEL_11:
      BYTE2(v14) = 1;
      LOWORD(v14) = 257;
      SceneCharacter_1400a90(v5, &v14);
    }
  }
LABEL_12:
  v10 = *v0;
  v11 = fw_memory_HeapManager_Allocate(*v2, 48, 16, 0);
  v14 = 49;
  v15 = 41;
  v16 = v11;
  *(_WORD*)(v11 + 40) = 130;
  *(_QWORD*)(v11 + 16) = 0x9DE9AB83E38783E3LL;
  *(_QWORD*)(v11 + 24) = 0x5FBAA4E7A8A1E89ELL;
  *(_QWORD*)(v11 + 32) = 0x99E68F95E5AAB3E8LL;
  *(_QWORD*)v11 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v11 + 8) = 0xA283E35FA89CE68ALL;
  result = GameRoutine_15f0540(v10, &v14);
  if ((v14 & 1) != 0 && v16 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v2 + v13, v16);
  }
  if (GameData_2262ae0 != 0) {
    return LayoutAccessor_155e830(GameData_2262ae0 + 168, 1);
  }
  return result;
}

void game_facility_anonymous_ProcPerchScene_SetQuestionCamera()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 == 0) {
        goto LABEL_14;
      }
      v6[0] = GameData_2060ae8;
      v7 = v6;
      v9 = v8;
      v8[0] = GameData_2060ae8;
      GameRoutine_14514d0(v8, v1 + 272);
      if (v9 == v8) {
        v4 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_9;
        }
        v4 = 40;
      }
      (*(void (**)(void*))(*v9 + v4))(v9);
    LABEL_9:
      if (v7 == v6) {
        v5 = 32;
      }
      else {
        if (v7 == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      (*(void (**)(void*))(*v7 + v5))(v7);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

void ProcPerchScene_15eea60()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
  }
  *(_DWORD*)(v3 + 92) = 1;
  *(_BYTE*)(v3 + 96) = 1;
  v4 = ProcTheaterSceneAct_13e2420(&GameData_1af2e0a);
  GameRoutine_1486c20(v4);
  v5 = ProcTheaterSceneAct_13e2420(&GameData_1ab1a04);
  v6 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v6 + 48);
  v7 = *(_QWORD*)(v6 + 56);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 128LL);
  }
  *(float*)(v9 + 172) = v5;
  *(_BYTE*)(v9 + 176) = 1;
  v10 = *(_QWORD*)(game_g_frame_clock + 13224);
  v12 = *(_QWORD*)(v10 + 48);
  v11 = *(_QWORD*)(v10 + 56);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 128LL);
  }
  *(_WORD*)(v13 + 329) = 256;
}

__int64 ProcPerchScene_15eec60()
{
  __int64 result;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;

  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 8);
    v17 = 0;
    v18 = &v17;
    result = GameRoutine_1462640(&v18, &v18, v1);
    v2 = v17;
    if (v17 != 0) {
      v4 = *(_QWORD*)(v17 + 48);
      v3 = *(_QWORD*)(v17 + 56);
      *(_DWORD*)(v17 + 112) = 0;
      v5 = v3 - v4;
      *(_BYTE*)(v2 + 116) = 1;
      if (v5 != 0) {
        if (v5 == 8) {
          v6 = 0;
        }
        else {
          v9 = 0;
          v6 = 0;
          do {
            v12 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
                  224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6);
            *(_QWORD*)(v2 + 96) = v12;
            v13 = *(_QWORD*)(v12 + 192);
            if ((*(_BYTE*)(v13 + 22) & 1) == 0 &&
                (*(_BYTE*)(v13 + 21) & 1) == 0) {
              *(_QWORD*)v13 = 0;
              *(_DWORD*)(v13 + 8) = 1;
            }
            *(_DWORD*)(v13 + 12) = 0;
            *(_BYTE*)(v13 + 20) = 1;
            v14 = *(_QWORD*)(v2 + 136);
            *(_QWORD*)(v2 + 96) = 0;
            *(_BYTE*)(v14 + v9) = 0;
            v15 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
                  224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6 + 8);
            *(_QWORD*)(v2 + 96) = v15;
            v16 = *(_QWORD*)(v15 + 192);
            if ((*(_BYTE*)(v16 + 22) & 1) == 0 &&
                (*(_BYTE*)(v16 + 21) & 1) == 0) {
              *(_QWORD*)v16 = 0;
              *(_DWORD*)(v16 + 8) = 1;
            }
            *(_DWORD*)(v16 + 12) = 0;
            *(_BYTE*)(v16 + 20) = 1;
            v6 += 2;
            v10 = *(_QWORD*)(v2 + 136);
            *(_QWORD*)(v2 + 96) = 0;
            v11 = v10 + v9;
            v9 += 6;
            *(_BYTE*)(v11 + 3) = 0;
          } while (((v5 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v6);
        }
        if ((v5 & 8) != 0) {
          v7 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 56LL) +
               224LL * *(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6);
          *(_QWORD*)(v2 + 96) = v7;
          v8 = *(_QWORD*)(v7 + 192);
          if ((*(_BYTE*)(v8 + 22) & 1) == 0 && (*(_BYTE*)(v8 + 21) & 1) == 0) {
            *(_QWORD*)v8 = 0;
            *(_DWORD*)(v8 + 8) = 1;
          }
          *(_DWORD*)(v8 + 12) = 0;
          *(_BYTE*)(v8 + 20) = 1;
          *(_QWORD*)(v2 + 96) = 0;
          *(_BYTE*)(*(_QWORD*)(v2 + 136) + 3 * v6) = 0;
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15eedf0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  char* v7;
  int v8;
  const char* v9;
  __int64 v10;
  __int64* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  __int64 result;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  _BYTE* v46;
  char v47;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  struct {
    _DWORD* v51;
    _DWORD* v52;
    _DWORD* v53;
  } v51_;

  v2 = GameHr_1421620(a1 + 240);
  v3 = *(_QWORD*)(a1 + 264);
  *(_DWORD*)(a1 + 352) = v2;
  if (v2 <= 1) {
    v4 = 1;
  }
  else {
    v4 = v2;
  }
  if (v4 >= 10) {
    v5 = 10;
  }
  else {
    v5 = v4;
  }
  v6 = GameRoutine_975940(*(_QWORD*)(*(_QWORD*)(v3 + 40) + 288LL));
  v7 = game_util_Format_alt1("MID_SV_Bird_%s_m02_%02d",
                             *(const char**)(v6 + 160), v5);
  v8 = *(_DWORD*)(a1 + 352);
  v9 = v7;
  if (v8 <= 1) {
    v8 = 1;
  }
  if (v8 >= 10) {
    v8 = 10;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 16LL * (unsigned int)(v8 - 1) + 72);
  v48_.v50 = 0;
  *(_QWORD*)(a1 + 360) = v10;
  v48_.v48 = v10;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 12, 16, 0);
  v13 = (__int64)v12;
  if (v10 != 0) {
    *v12 = *(unsigned __int8*)(v10 + 32);
    v14 = 1;
  }
  else {
    v14 = 0;
  }
  v51_.v51 = v12;
  v51_.v52 = &v12[v14];
  v51_.v53 = v12 + 3;
  v15 = ShowmanSceneDiff_147d3c0((__int64*)&v51_.v51);
  v16 = 128;
  if (*(_QWORD*)(*v11 + 200) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v11 + v16, v13);
  v17 = game_147dd40(v15);
  v48_.v49 = v17;
  v18 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(*v11, 12, 16, 0);
  v19 = (__int64)v18;
  if (v10 != 0) {
    *v18 = *(unsigned __int8*)(v10 + 32);
    v20 = 1;
    if (v17 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v20 = 0;
  if (v17 != 0) {
  LABEL_18:
    v18[v20++] = *(unsigned __int8*)(v17 + 32);
  }
LABEL_19:
  v51_.v51 = v18;
  v51_.v52 = &v18[v20];
  v51_.v53 = v18 + 3;
  v21 = ShowmanSceneDiff_147d3c0((__int64*)&v51_.v51);
  v22 = 128;
  if (*(_QWORD*)(*v11 + 200) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v11 + v22, v19);
  v48_.v50 = game_147dd40(v21);
  nn_os_LockMutex((__int64)&game_g_random_mutex);
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
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v29 = v28 - 3 * ((1431655766 * (unsigned __int64)v28) >> 32);
  v48_.v48 = *(&v48_.v48 + v29);
  *(&v48_.v48 + v29) = v10;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v30 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23);
  v31 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4);
  v32 = *(_DWORD*)v23 ^ (*(_DWORD*)v23 << 11);
  *(_DWORD*)v23 = *((_DWORD*)v23 + 1);
  *((_DWORD*)v23 + 1) = v30;
  v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v31;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v33;
  v34 = v33 & 0x7FFFFFFF;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v35 = v48_.v49;
  v36 = v34 - 3 * ((1431655766 * (unsigned __int64)v34) >> 32);
  v48_.v49 = *(&v48_.v48 + v36);
  *(&v48_.v48 + v36) = v35;
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v37 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23);
  v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4);
  v39 = *(_DWORD*)v23 ^ (*(_DWORD*)v23 << 11);
  *(_DWORD*)v23 = *((_DWORD*)v23 + 1);
  *((_DWORD*)v23 + 1) = v37;
  v40 = (v39 >> 8) ^ (v38 >> 19) ^ v39 ^ v38;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v38;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v40;
  LODWORD(v23) = v40 & 0x7FFFFFFF;
  result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v42 = v48_.v50;
  v43 = (_DWORD)v23 -
        3 * ((1431655766 * (unsigned __int64)(unsigned int)v23) >> 32);
  v48_.v50 = *(&v48_.v48 + v43);
  *(&v48_.v48 + v43) = v42;
  if (GameData_21ec7b8 == 0) {
    v44 = fw_memory_HeapManager_Allocate_alt1(*v11, 1376, 16, 0);
    GameRoutine_1130770(v44, v9, &v48_.v48);
    v45 = *(_QWORD*)(a1 + 40);
    if (v45 != 0) {
      *(_QWORD*)(v45 + 48) = v44;
      *(_QWORD*)(v44 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v44;
    *(_QWORD*)(v44 + 24) = "talk::Seq";
    *(_QWORD*)(v44 + 32) = a1;
    *(_DWORD*)(v44 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v44 + 64) = 0;
    *(_QWORD*)(v44 + 72) = 24;
    *(_QWORD*)(v44 + 80) = 1;
    *(_QWORD*)(v44 + 8) = &GameData_216de68;
    *(_QWORD*)(v44 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v44 + 32LL))(v44);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 136LL))(v44);
    if ((result & 1) != 0 && (*(_WORD*)(v44 + 136) & 0x100) == 0) {
      *(_WORD*)(v44 + 136) |= 0x100u;
    }
    v46 = *(_BYTE**)(v44 + 32);
    v47 = v46[138];
    if (v47 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v46 + 64LL))(*(_QWORD*)(v44 + 32));
      v47 = v46[138];
    }
    v46[138] = v47 + 1;
    *(_WORD*)(v44 + 136) |= 2u;
  }
  return result;
}

__int64 ProcPerchScene_15ef1d0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;

  v1 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v2 = *(unsigned int*)(GameData_21f3ff8 + 20);
    if ((v2 & 0x80000000) != 0 ||
        (v3 = *(_QWORD*)(GameData_21c9f88 + 64),
         (int)v2 >=
             (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9f88 + 72) - v3) >>
                   3))) {
      v1 = 0;
    }
    else {
      v1 = *(_QWORD*)(v3 + 8 * v2);
    }
  }
  v4 = *(_QWORD*)(result + 360);
  if ((unsigned int)(*(_DWORD*)(result + 272) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 280) == 0 || *(_QWORD*)(result + 288) == 0) {
    v7 = result + 272;
  LABEL_33:
    *(_DWORD*)v7 = *(_DWORD*)(result + 352);
    *(_QWORD*)(v7 + 8) = v4;
    *(_QWORD*)(v7 + 16) = v1;
    return result;
  }
  if ((unsigned int)(*(_DWORD*)(result + 296) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 304) == 0 || *(_QWORD*)(result + 312) == 0) {
    v7 = result + 296;
    goto LABEL_33;
  }
  if ((unsigned int)(*(_DWORD*)(result + 320) - 11) < 0xFFFFFFF6 ||
      *(_QWORD*)(result + 328) == 0 || *(_QWORD*)(result + 336) == 0) {
    v7 = result + 320;
    goto LABEL_33;
  }
  return result;
}

__int64 ProcPerchScene_15ef780(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  _BOOL8 v9;

  v1 = *(_QWORD*)(a1 + 328);
  v2 = *(_QWORD*)(a1 + 336);
  if ((unsigned int)(*(_DWORD*)(a1 + 320) - 11) >= 0xFFFFFFF6 && v1 != 0 &&
      v2 != 0) {
    goto LABEL_27;
  }
  v1 = *(_QWORD*)(a1 + 304);
  v2 = *(_QWORD*)(a1 + 312);
  v5 = (unsigned int)(*(_DWORD*)(a1 + 296) - 11) < 0xFFFFFFF6 || v1 == 0;
  v6 = v5 || v2 == 0;
  if (v6 && ((v1 = *(_QWORD*)(a1 + 280), v2 = *(_QWORD*)(a1 + 288),
              (unsigned int)(*(_DWORD*)(a1 + 272) - 11) >= 0xFFFFFFF6)
                 ? (v7 = v1 == 0)
                 : (v7 = true),
             !v7 ? (v8 = v2 == 0) : (v8 = true), v8)) {
    v9 = false;
  }
  else {
  LABEL_27:
    v9 = v1 == v2;
  }
  return GameRoutine_170cac0(v9);
}

bool ProcPerchScene_15ef7f0()
{
  return GameData_224ae20 != 0 && (int)((*(_QWORD*)(GameData_224ae20 + 40) -
                                         *(_QWORD*)(GameData_224ae20 + 32)) >>
                                        4) > 0;
}

__int64 ProcPerchScene_15ef820(__int64 result)
{
  bool v3;
  bool v5;
  __int64 v7;

  if ((unsigned int)(*(_DWORD*)(result + 272) - 11) >= 0xFFFFFFF6 &&
      *(_QWORD*)(result + 280) != 0 && *(_QWORD*)(result + 288) != 0) {
    v3 = (unsigned int)(*(_DWORD*)(result + 296) - 11) < 0xFFFFFFF6 ||
         *(_QWORD*)(result + 304) == 0;
    if (!v3 && *(_QWORD*)(result + 312) != 0) {
      v5 = (unsigned int)(*(_DWORD*)(result + 320) - 1) > 9 ||
           *(_QWORD*)(result + 328) == 0;
      if (!v5 && *(_QWORD*)(result + 336) != 0) {
        v7 = *(_QWORD*)(result + 8);
        if (v7 != 0) {
          while (1) {
            if (*(_BYTE*)v7 == 2) {
              if (*(_DWORD*)(v7 + 32) == 3) {
                *(_QWORD*)(result + 16) = v7;
                *(_WORD*)(result + 136) &= ~0x80u;
                break;
              }
            }
            else if (*(_BYTE*)v7 == 0) {
              break;
            }
            v7 += 64;
          }
        }
        *(_WORD*)(result + 136) |= 8u;
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15efc60(__int64 a1)
{
  __int64 v1;

  v1 = a1 + 240;
  if (*(_BYTE*)(a1 + 344) == 3) {
    return GameRoutine_1775df0(a1, v1);
  }
  else {
    return GameRoutine_1775750(a1, v1);
  }
}

__int64 ProcPerchScene_15efc80(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_BYTE*)(result + 344) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 192);
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 192) = 0;
  if (v1 == (_QWORD*)(result + 160)) {
    v3 = result;
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_7;
    }
    v2 = 40;
    v3 = result;
  }
  (*(void (**)(_QWORD*))(*v1 + v2))(v1);
  result = v3;
LABEL_7:
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 8) {
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
  return result;
}

__int64 ProcPerchScene_15efd40(__int64 a1)
{
  __int64 result;

  result = GameRoutine_14368c0();
  *(_BYTE*)(a1 + 384) = 0;
  return result;
}

__int64 ProcPerchScene_15efd70(__int64 a1)
{
  unsigned __int64 v1;
  __int64 result;
  __int64 v3;
  unsigned __int64 v4[2];

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    v1 = *(_QWORD*)(v1 + 392);
  }
  v4[0] = v1;
  result = FacilityVariable_1472720((__int64)v4);
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v4[1] = (unsigned __int64)&GameData_1a856ca;
    v4[0] = game_HashString_alt2((__int64)&GameData_1a856ca);
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v4);
      if (v3 != 0) {
        LODWORD(v3) = *(_DWORD*)(v3 + 32);
      }
    }
    else {
      LODWORD(v3) = 0;
    }
    return GameHr_8696e0(v3);
  }
  return result;
}

unsigned __int64 ProcPerchScene_15f0160()
{
  _QWORD handle[2];
  unsigned __int64 result;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  _QWORD v13[25];

  result = game_HashString_alt2((__int64)&GameData_1afe8f0);
  if (result != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = result;
        if (result >= v1) {
          v4 = result % v1;
        }
      }
      else {
        v4 = v3 & result;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v8 = v6[1];
              if (v8 == result) {
                if (v6[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v8 & v3) != v4) {
                return result;
              }
              v6 = (_QWORD*)*v6;
              if (v6 == nullptr) {
                return result;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == result) {
              if (v6[2] == result) {
              LABEL_26:
                v9 = v6[3];
                if (v9 != 0) {
                  v10 = *(_QWORD*)(v9 + 32);
                  if (v10 != 0) {
                    snd_Fade_Fade_10c830_alt1((__int64)v13, 0x0.0p+0f);
                    snd_play_ff2d0_alt1((void*)(handle), v10, v10, (__int64)v13,
                                        0, 0x10001u, 0, 0x0.0p+0f,
                                        0x1.0000000000000p+0f);
                    snd_Fade_Destroy_Fade_alt1(v13);
                  }
                  else {
                    v11_.v11 = 0;
                    v11_.v12 = 0x2000;
                  }
                  result = GameData_224ae20;
                  if (GameData_224ae20 != 0) {
                    return ((__int64 (*)(__int64, __int64*,
                                         __int64))GameRoutine_1488300)(
                        GameData_224ae20, &v11_.v11, 1);
                  }
                }
                return result;
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return result;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 ProcPerchScene_15f02e0()
{
  __int64 v0;
  __int64 v1;
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

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v2 = *(_QWORD*)(v0 + 48);
  v1 = *(_QWORD*)(v0 + 56);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      result = std___1___shared_weak_count___release_weak(v1);
    }
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      result = std___1___shared_weak_count___release_weak(v1);
    }
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 8) + 128LL);
  }
  *(_DWORD*)(v4 + 92) = 0;
  *(_BYTE*)(v4 + 96) = 1;
  v5 = *(_QWORD*)(game_g_frame_clock + 13224);
  v7 = *(_QWORD*)(v5 + 48);
  v6 = *(_QWORD*)(v5 + 56);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 128LL);
  }
  if (*(_BYTE*)(v8 + 256) == 1) {
    *(_BYTE*)(v8 + 256) = 0;
  }
  v9 = *(_QWORD*)(game_g_frame_clock + 13224);
  v11 = *(_QWORD*)(v9 + 48);
  v10 = *(_QWORD*)(v9 + 56);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 128LL);
  }
  if (*(_BYTE*)(v12 + 176) == 1) {
    *(_BYTE*)(v12 + 176) = 0;
  }
  v13 = *(_QWORD*)(game_g_frame_clock + 13224);
  v15 = *(_QWORD*)(v13 + 48);
  v14 = *(_QWORD*)(v13 + 56);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else {
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
  }
  if (*(_BYTE*)(v16 + 330) == 1) {
    *(_BYTE*)(v16 + 330) = 0;
  }
  return result;
}

void ProcPerchScene_15f0540(__int64 a1, unsigned __int8* a2)
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
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  PerchSceneDiff_14224a0((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
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
  GameRoutine_1a09ce0((__int64)&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v43_.v45);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(const char**)(a1 + 24);
  }
  else {
    v13 = (const char*)(a1 + 9);
  }
  v14 = strlen_alt1(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove_alt1((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = (const char*)(a2 + 1);
  }
  else {
    v21 = *((const char**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v43_.v45);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(const char**)(a1 + 48);
  }
  else {
    v27 = (const char*)(a1 + 33);
  }
  v28 = strlen_alt1(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0_alt1();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v31, 16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove_alt1((__int64)v30, (__int64)v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = (const char*)(a2 + 1);
  }
  else {
    v35 = *((const char**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v43_.v45);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

__int64

game_facility_anonymous_ProcPerchScene_SetGreetCamera_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v3 + 38) = 0;
  v6[0] = 41;
  v6[1] = 38;
  v7 = v3;
  *(_QWORD*)(v3 + 16) = 0x81E3A2ADE65FA983LL;
  *(_QWORD*)(v3 + 24) = 0x5FA89CE68A82E3BELL;
  *(_QWORD*)(v3 + 30) = 0x8BA7E58B96E95FA8LL;
  *(_QWORD*)v3 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3A183E3AB82E3A9LL;
  result = GameRoutine_144fca0(v6, v1);
  if ((v6[0] & 1) != 0 && v7 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, v7);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchScene_SetQuestionCamera_closure_Invoke()
{
  void* v0;
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

  v0 = GameData_2174240;
  v1 = strlen(GameData_2174240);
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

_QWORD* ProcPerchScene_Destructor(__int64 a1)
{
  __int16* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_anonymous_ProcPerchScene_vtable;
  *(_QWORD*)(a1 + 208) = GameData_2060c20;
  v2 = (__int16*)(a1 + 208);
  v3 = GameData_2131410;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131410 + 24LL))(*GameData_2131410);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = *(_QWORD*)(a1 + 376);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)a1 = GameData_2060d08;
  *(_QWORD*)(a1 + 208) = GameData_2060db8;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  v8 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2060e00;
  if (v8 == (_QWORD*)(a1 + 160)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_17:
  GameData_225ae28 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 ProcPerchScene_15f0f70()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchScene_15f0fa0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

void ProcPerchScene_15f0fe0(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 v2;
  __int64 v3;
  unsigned __int64 v4;
  __n128* v5;
  __n128* v6;
  __n128 v7;

  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1958ed0_alt2(a1 + 208, a1),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 220) == 1 && (*(_DWORD*)(a1 + 216) & 0x80000000) != 0) {
    v3 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168) &&
          (v5 = (__n128*)(v4 + 160),
           LANES128(v2).n128_u64[1] =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160))
                   .n128_u64[1],
           LANES128(v2).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v5)).n128_f32[3] == LANES128(*(v5)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v5)).n128_u64[0] + 16))(v5),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v2 = v5[3];
        }
        v7 = v2;
        LANES128(v2).n128_u64[0] = 0;
        v6 = &v7;
      }
      else {
        LANES128(v2).n128_u64[0] = 0;
        v6 = (__n128*)GameData_212c960;
      }
      game_809dc0_alt1(v3, v6, v2),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(a1, 1),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

__int64 ProcPerchScene_Unknown18(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = game_HashString(&GameData_1aeb5df, a2);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
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
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v11 == v2) {
                if (v8[2] == v2) {
                  goto LABEL_27;
                }
              }
              else if ((v11 & v5) != v6) {
                goto LABEL_25;
              }
              v8 = (_QWORD*)*v8;
              v10 = 0;
              if (v8 == nullptr) {
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == v2) {
              if (v8[2] == v2) {
              LABEL_27:
                v10 = v8[3];
                return GameRoutine_14877f0(v10, 0x13F000000LL);
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                break;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v10 = 0;
  return GameRoutine_14877f0(v10, 0x13F000000LL);
}

_QWORD* ProcPerchScene_15f1480(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = GameData_2060d08;
  *(_QWORD*)(a1 + 208) = GameData_2060db8;
  v2 = (_QWORD*)(a1 + 208);
  GameRoutine_1958ed0((__int16*)(a1 + 208), a1);
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
  *(_QWORD*)a1 = GameData_2060e00;
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
  GameData_225ae28 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

_QWORD* ProcPerchScene_15f16f0(__int16* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int16* v6;
  __int64 v7;

  *((_QWORD*)a1 - 26) = GameData_2060d08;
  v2 = (__int64)(a1 - 104);
  *(_QWORD*)a1 = GameData_2060db8;
  GameRoutine_1958ed0(a1, (__int64)(a1 - 104));
  *(_QWORD*)a1 = GameData_2132488 + 2;
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
  v6 = *((__int16**)a1 - 2);
  *((_QWORD*)a1 - 26) = GameData_2060e00;
  if (v6 == a1 - 24) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + v7))((__int64)v6);
LABEL_12:
  GameData_225ae28 = 0;
  *((_QWORD*)a1 - 26) = GameData_212c608[0] + 16;
  if ((*(a1 - 36) & 0x100) != 0) {
    *(a1 - 36) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00((_QWORD*)a1 - 15);
}

#pragma GCC visibility pop
