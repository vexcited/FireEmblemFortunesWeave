#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_15e5fa0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_208fa50;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1);
__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
unsigned __int16* GameRoutine_16bfbb0(__int64, int, unsigned __int8*);
__int64
game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2);
bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);

__int64 ProcStableBreedingFoodMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_208fa50, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v7, a1 + 848, "L_InfoDetail");
      result = v8;
      if (v8 != 0) {
        v4 = std___1___shared_weak_count_lock(v8);
        v5 = v7;
        result = v8;
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        if (v4 != 0 && v5 != 0) {
          v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
          result = GameRoutine_15d2910(v5, v6);
        }
        else if (v4 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

__int64 ProcStableBreedingFoodMenu_Unknown101(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
      return 1;
    }
  }
  *(_DWORD*)(*GameData_212dcd0 + 20) = -1;
  if (a1[42] == 0) {
    return 3;
  }
  if (a1[133] != 0) {
    GameRoutine_15e5fa0();
  }
  (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
  result = a1[42];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64

game_facility_anonymous_ProcStableBreedingFoodMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*a2 == **(_DWORD**)(a1 + 24)) {
    **(_BYTE**)(a1 + 32) = 1;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  GameRoutine_16bfbb0(v5, v2, *(unsigned __int8**)(a1 + 16));
  return BasicMenuCursor_16e0c00(v3, v5);
}

bool game_facility_anonymous_ProcStableBreedingFoodMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  return *(_BYTE*)(a1 + 8) == 3 ||
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL *
                                            *(unsigned __int16*)(*(
                                                __int64 (**)(_QWORD))(
                                                *(_QWORD*)*a2 + 560LL))(*a2)) +
                             94LL) == *(unsigned __int8*)(a1 + 8);
}

#pragma GCC visibility pop
