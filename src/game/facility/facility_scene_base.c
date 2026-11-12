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
__int64 GameRoutine_13892a0(__int64);
__int64 GameRoutine_1959b80();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_facility_19595c0();
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN GameData_226d108;
extern __int64 (*GameData_2119a40[])();
extern __int64 (*ProcFacilitySceneInitialLoad_Destructor_1959e00_ptr[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (
    *game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_226cf90;
extern __int64 GameData_226cf98;
extern __int64 GameData_226cfa0;
extern __int64 GameData_226cfb0;
extern __int64 GameData_226cfc0;
extern __int64 GameData_226cfd0;
extern __int64 GameData_226cfd8;
extern __int64 GameData_226cfe0;
extern __int64 GameData_226cff0;
extern __int64 GameData_226d000;
extern __int64 GameData_226d010;
extern __int64 GameData_226d018;
extern __int64 GameData_226d020;
extern __int64 GameData_226d030;
extern __int64 GameData_226d040;
extern __int64 GameData_226d050;
extern __int64 GameData_226d058;
extern __int64 GameData_226d070;
extern __int64 GameData_226d080;
extern __int64 GameData_226d090;
extern __int64 GameData_226d098;
extern __int64 GameData_226d0a0;
extern __int64 GameData_226d0b0;
extern __int64 GameData_226d0c0;
extern __int64 GameData_226d0d0;
extern __int64 GameData_226d0d8;
extern __int64 GameData_226d0e0;
extern __int64 GameData_226d0f0;
extern __int64 GameData_226d100;
extern char GameData_226cf88;
extern char GameData_226cfc8;
extern char GameData_226d008;
extern char GameData_226d048;
extern char GameData_226d088;
extern char GameData_226d0c8;
extern int GameData_226cfa8;
extern int GameData_226cfb8;
extern int GameData_226cfe8;
extern int GameData_226cff8;
extern int GameData_226d028;
extern int GameData_226d038;
extern int GameData_226d068;
extern int GameData_226d078;
extern int GameData_226d0a8;
extern int GameData_226d0b8;
extern int GameData_226d0e8;
extern int GameData_226d0f8;
int __cxa_guard_acquire(__int64);
void GameRoutine_1418aa0();
void __cxa_guard_release(__int64);
__int64 game_facility_FacilitySceneBase_CreateBindInitialLoad(__int64 a1,
                                                              __int64 a2);

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

__int64 game_facility_FacilitySceneBase_CreateBindInitialLoad(__int64 a1,
                                                              __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 result;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v13_.v13[0] = GameData_2119a40;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226d108,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_226d108) != 0) {
    GameData_226cf88 = 18;
    GameData_226cfb0 = 0;
    GameData_226cfb8 = 0;
    GameData_226cfc0 = 0;
    GameData_226cf90 = 0;
    GameData_226cf98 = 0;
    GameData_226cfa0 = 0;
    GameData_226cfa8 = 0;
    GameData_226cff0 = 0;
    GameData_226cff8 = 0;
    GameData_226d000 = 0;
    GameData_226cfd0 = 0;
    GameData_226cfd8 = 0;
    GameData_226cfe0 = 0;
    GameData_226cfe8 = 0;
    GameData_226d020 = 0;
    GameData_226d028 = 0;
    GameData_226d030 = 0;
    GameData_226d038 = 0;
    GameData_226d040 = 0;
    GameData_226cfc8 = 30;
    GameData_226d068 = 0;
    GameData_226d070 = 0;
    GameData_226d078 = 0;
    GameData_226d080 = 0;
    GameData_226d0b0 = 0;
    GameData_226d0b8 = 0;
    GameData_226d0c0 = 0;
    GameData_226d0c8 = 0;
    GameData_226d0f0 = 0;
    GameData_226d0f8 = 0;
    GameData_226d008 = 13;
    GameData_226d100 = 0;
    GameData_226d0a8 = 0;
    GameData_226d098 = 0;
    GameData_226d0a0 = 0;
    GameData_226d090 = 0;
    GameData_226d0d0 = 0;
    GameData_226d0d8 = 0;
    GameData_226d0e0 = 0;
    GameData_226d0e8 = 0;
    GameData_226d010 = 0;
    GameData_226d018 = (__int64)GameRoutine_1959b80;
    GameData_226d048 = 10;
    GameData_226d050 = 0;
    GameData_226d058 = (__int64)game_facility_19595c0;
    GameData_226d088 = 31;
    __cxa_guard_release((__int64)&GameData_226d108);
  }
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      240, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_BYTE*)(v4 + 160) = 0;
  *(_BYTE*)(v4 + 164) = 0;
  *(_QWORD*)(v4 + 152) = game_facility_FacilitySceneBase_vtable;
  v6 = GameData_2130240[0];
  *(_BYTE*)(v4 + 176) = 0;
  *(_BYTE*)(v4 + 180) = 0;
  *(_QWORD*)(v4 + 168) = v6 + 2;
  GameRoutine_1418aa0();
  v7 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v8 = (__int64*)fw_memory_HeapManager_Allocate(*v3, 336, 16, 0);
    GameRoutine_13892a0((__int64)v8);
    v9 = *v8;
    *v7 = v8;
    (*(void (**)(__int64*))(v9 + 16))(v8);
  }
  v10 = v13_.v14;
  *(_QWORD*)v4 = game_facility_anonymous_ProcFacilitySceneInitialLoad_vtable;
  *(_QWORD*)(v4 + 152) = ProcFacilitySceneInitialLoad_Destructor_1959e00_ptr;
  if (v10 != nullptr) {
    if (v10 == v13_.v13) {
      *(_QWORD*)(v4 + 224) = v4 + 192;
      (*(void (**)(_QWORD*))(*v10 + 24LL))(v10);
    }
    else {
      *(_QWORD*)(v4 + 224) = (*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
    }
  }
  else {
    *(_QWORD*)(v4 + 224) = 0;
  }
  ProcInst_657850(v4, (__int64)&GameData_226cf88,
                  (__int64)"ProcFacilitySceneInitialLoad", 1, a2);
  result = (__int64)v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v12 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13_.v14 + v12))((__int64)v13_.v14);
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
