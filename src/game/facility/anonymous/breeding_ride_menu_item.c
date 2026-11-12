#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_18607b0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 BreedingRideMenuItem_Unknown55(_QWORD* a1);
bool BreedingRideMenuItem_Unknown58(__int64 a1);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_1953c40(_QWORD);
__int64 GameRoutine_1954030(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_facility_anonymous_BreedingRideMenuItem_ACall_closure_Invoke_alt1(
    __int64 a1,
    __int64* a2) __asm__("game_facility_anonymous_BreedingRideMenuItem_ACall_"
                         "closure_Invoke");
__int64 game_facility_anonymous_BreedingRideMenuItem_ACall_closure0_Invoke(
    __int64 result);
__int64* GameRoutine_1953c40_alt1(__int64) __asm__("GameRoutine_1953c40");
__int64 GameRoutine_1954030_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1954030");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_BreedingRideMenuItem_ACall_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 BreedingRideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int16* v7;

  GameRoutine_18607b0();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        v6 = "FullOn";
        if (*(_BYTE*)v5 != 0) {
          if (game_gmap_GmapClock_instance_ != 0) {
            v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
          }
          else {
            v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          if (*(_DWORD*)(v5 + 8) != 10000 * *v7 + 100 * v7[1] + v7[2]) {
            v6 = "FullOff";
          }
        }
        result = GameRoutine_1562cf0(v3, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

bool BreedingRideMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int16* v2;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if (*(_BYTE*)v1 == 0) {
    return false;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  return *(_DWORD*)(v1 + 8) != 10000 * *v2 + 100 * v2[1] + v2[2];
}

void game_facility_anonymous_BreedingRideMenuItem_ACall_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  struct {
    _QWORD v5[2];
    int v6;
    char gap20_[4];
    __int64 v7;
    int v8;
  } v5_;
  _QWORD** v9;
  struct {
    _QWORD* v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    _BYTE* v14;
    int v15;
    char gap92_[4];
    __int64 v16;
    int v17;
  } v10_;

  v2 = *a2;
  v5_.v5[0] = 0;
  v5_.v5[1] = 0;
  v5_.v7 = 0;
  v5_.v6 = -1;
  v5_.v8 = 0;
  v10_.v11 = 0;
  v10_.v12 = 0;
  v10_.v13 = 0;
  v10_.v14 = nullptr;
  v10_.v15 = -1;
  v10_.v16 = 0;
  v10_.v17 = 0;
  v9 = &v10_.v10;
  v10_.v10 = nullptr;
  GameRoutine_1953c40_alt1((__int64)v5_.v5);
  GameRoutine_1954030_alt1(v2, (__int64)v5_.v5);
  v5_.v8 = 0;
  v5_.v7 = 0;
  if ((v10_.v12 & 1) != 0) {
    *v10_.v14 = 0;
    v10_.v13 = 0;
  }
  else {
    LOWORD(v10_.v12) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v9, v10_.v10);
  v10_.v10 = nullptr;
  v10_.v11 = 0;
  v9 = &v10_.v10;
  if ((v10_.v12 & 1) != 0) {
    v3 = v10_.v14;
    if (v10_.v14 != nullptr) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v10_.v14);
      v3 = v10_.v10;
    }
  }
  else {
    v3 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v9, v3);
}

__int64 game_facility_anonymous_BreedingRideMenuItem_ACall_closure0_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

#pragma GCC visibility pop
