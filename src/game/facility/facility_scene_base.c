#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 FacilitySceneBase_1958ea0(__int64 result);
__int64
game_facility_FacilitySceneBase_PushState_lambda0_Invoke(__int64 a1,
                                                         unsigned __int8* a2);
__int64 game_facility_FacilitySceneBase_CreateBindInitialLoad_lambda0_Invoke(
    __int64 a1);
__int16* game_8697c0(__int16* result, char, float);
__int64 GameRoutine_1486de0();
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_15e2a60();
__int64 ProcRegistry_65a640(_QWORD*);
__int64 game_GameView_Update();
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _DWORD* GameData_212d168;
extern _DWORD GameData_21d925c[32];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern int GameData_21d92dc;
void SceneManager_138a380(_QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void FacilitySceneBase_1958ed0(__int64 a1, _QWORD* a2);
bool game_facility_FacilitySceneBase_PushState_lambda1_Invoke();

__int64 FacilitySceneBase_1958ea0(__int64 result)
{
  float v1;

  v1 = 1.0;
  if ((result & 1) != 0) {
    v1 = 0.0;
  }
  *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) = v1;
  return result;
}

void FacilitySceneBase_1958ed0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int16* v5;
  float v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 != nullptr && *(_BYTE*)(a1 + 12) == 1 &&
      (*(_DWORD*)(a1 + 8) & 0x80000000) == 0) {
    GameRoutine_15e2a60();
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
    if (*(_BYTE*)(a1 + 28) == 1) {
      GameRoutine_1553220(*(unsigned int*)(a1 + 24));
      if (*(_BYTE*)(a1 + 28) == 1) {
        *(_BYTE*)(a1 + 28) = 0;
      }
    }
    SceneManager_138a380(*(_QWORD**)GameData_212dce8);
    ProcRegistry_65a640(a2);
    *(_DWORD*)(a1 + 8) = -1;
    *(_BYTE*)(a1 + 12) = 1;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    GameRoutine_1486de0();
    v4 = --GameData_21d92dc;
    *GameData_212d168 = GameData_21d925c[v4];
    game_GameView_Update();
    if (game_gmap_GmapClock_instance_ != 0) {
      v5 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
    }
    else {
      v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (v5[1] * *v5 * v5[2] != 0 ||
        (game_gmap_GmapClock_instance_ != 0
             ? (v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
             : (v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
         game_gmap_GmapClock_instance_ == 0)) {
      v6 = 0x0.0p+0f;
    }
    else {
      v6 = *(float*)(game_gmap_GmapClock_instance_ + 44);
    }
    game_8697c0(v5, 0, v6);
    v7 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v9 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v11 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v10 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v12 = v10 == v11;
      v13 = v8 - 1 + v9;
      v14 = v13 >> 7;
      v15 = v13 & 0x7F;
      v16 = 16 * (v10 - v11) - 1;
      v17 = *(_QWORD*)(v11 + 8 * v14);
      if (v12) {
        v16 = 0;
      }
      v18 = v17 + 32 * v15;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v18 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v7[21] = *(_QWORD*)(v18 + 24);
      v19 = *(_QWORD*)(v18 + 16);
      v7[27] = v8 - 1;
      v7[20] = v19;
      if ((unsigned __int64)(v16 - (v8 + v9) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v20 = *(_QWORD*)(v10 - 8);
        if (v20 != 0) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
          v10 = v7[24];
        }
        v7[24] = v10 - 8;
      }
    }
  }
}

__int64

game_facility_FacilitySceneBase_PushState_lambda0_Invoke(__int64 a1,
                                                         unsigned __int8* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

bool game_facility_FacilitySceneBase_PushState_lambda1_Invoke()
{

#pragma clang fp contract(off)
  __int64 v0;
  _BOOL4 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = true;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v2 = *(_QWORD*)(v0 + 8);
    std___1___shared_weak_count___release_weak(v0);
    if (v2 != -1) {
      v4 = *(_QWORD*)(GameData_21f4000 + 256);
      v3 = *(_QWORD*)(GameData_21f4000 + 264);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v3);
      if (*(float*)(v4 + 44) >= *(float*)(v4 + 40) &&
          *(float*)(v4 + 124) >= *(float*)(v4 + 120) &&
          *(float*)(v4 + 164) >= *(float*)(v4 + 160) &&
          *(float*)(v4 + 204) >= *(float*)(v4 + 200)) {
        v8 = *(_QWORD*)(v4 + 424);
        v1 = v8 == 0 || *(_QWORD*)(v8 + 80) == 0;
      }
      else {
        v1 = false;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v6);
      }
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    return true;
  }
  return v1;
}

__int64

game_facility_FacilitySceneBase_CreateBindInitialLoad_lambda0_Invoke(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

#pragma GCC visibility pop
