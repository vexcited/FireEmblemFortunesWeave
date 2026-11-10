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
        (*(void (**)(void))(*v12 + v7))();
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
        result = (*(__int64 (**)(void))(*v10 + v8))();
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
      (*(void (**)(void))(*v9 + v4))();
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
      (*(void (**)(void))(*v7 + v5))();
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
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD v5[2];

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    v1 = *(_QWORD*)(v1 + 392);
  }
  v5[0] = v1;
  result = GameRoutine_1472720(v5);
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
    v5[1] = &GameData_1a856ca;
    v5[0] = game_HashString(&GameData_1a856ca, v3);
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
      if (v4 != 0) {
        v4 = *(unsigned int*)(v4 + 32);
      }
    }
    else {
      v4 = 0;
    }
    return GameRoutine_8696e0(v4);
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

#pragma GCC visibility pop
