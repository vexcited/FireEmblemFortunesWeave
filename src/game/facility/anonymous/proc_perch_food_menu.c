#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_145e5c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_145e820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_192d3d0(_QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 _ZN4game4menu8GameMenu12Unknown16e9cd0Ev(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212f6b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcPerchFoodMenu_Unknown103(__int64 a1);
__int64 ProcPerchFoodMenu_Unknown105(__int64 a1);
__int64 ProcPerchFoodMenu_Unknown143(__int64 a1, __int64 a2, __int64 a3);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_PerchFoodMenuItem_vtable[])();
__int64
game_facility_anonymous_ProcPerchFoodMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                     int* a2);
__int64 FacilityUtil_9494a0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*GameData_2114d78[])();
extern __int64 (*game_menu_MaterialMenuItem_Empty_vtable[])();
__int64 game_facility_anonymous_ProcPerchFoodMenu_AddItemList(__int64 a1);
_QWORD* GameMenu_16e9cd0(__int64, __int64);
__int64 FacilityUnitList_145e5c0(__int64***, __int64, char);
__int64 FacilityUnitList_145e820(__int64***, __int64, char);
__int64 GameHr_192d3d0(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 ProcPerchFoodMenu_Unknown103(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64*** v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;

  v2 = GameData_212dcd0;
  v3 = (_QWORD*)*GameData_212dcd0;
  v5 = *(__int64**)(*GameData_212dcd0 + 48);
  v4 = *(__int64**)(*GameData_212dcd0 + 56);
  if (v4 == v5) {
    v6 = 0;
  }
  else {
    v6 = *v5;
  }
  v7 = *(__int64****)(game_UnitListSet_instance_ + 24);
  if (v7 != nullptr) {
    v8 = FacilityUnitList_145e5c0(v7, v6, 2);
    v3 = (_QWORD*)*v2;
    v6 = v8;
    v5 = *(__int64**)(*v2 + 48);
    v4 = *(__int64**)(*v2 + 56);
  }
  if (v4 == v5) {
    if (v6 != 0) {
      goto LABEL_8;
    }
    return 0;
  }
  if (*v5 == v6) {
    return 0;
  }
LABEL_8:
  if (v6 != 0) {
    v9 = v3[8];
    v3[7] = v5;
    if ((unsigned __int64)v5 >= v9) {
      v12 = v9 - (_QWORD)v5;
      v13 = v12 >> 2;
      if ((unsigned __int64)(v12 >> 2) <= 1) {
        v13 = 1;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v13;
      }
      if (v14 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v15 = v6;
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v18 = &v17[v14];
      v10 = v17 + 1;
      *v17 = v15;
      v3[6] = v17;
      v3[7] = v17 + 1;
      v3[8] = v18;
      if (v5 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v19, (__int64)v5);
      }
      v6 = v15;
    }
    else {
      *v5 = v6;
      v10 = v5 + 1;
    }
    v3[7] = v10;
  }
  GameMenu_16e9cd0(a1, v6);
  GameHr_192d3d0(a1);
  return 13;
}

__int64 ProcPerchFoodMenu_Unknown105(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64*** v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;

  v2 = GameData_212dcd0;
  v3 = (_QWORD*)*GameData_212dcd0;
  v5 = *(__int64**)(*GameData_212dcd0 + 48);
  v4 = *(__int64**)(*GameData_212dcd0 + 56);
  if (v4 == v5) {
    v6 = 0;
  }
  else {
    v6 = *v5;
  }
  v7 = *(__int64****)(game_UnitListSet_instance_ + 24);
  if (v7 != nullptr) {
    v8 = FacilityUnitList_145e820(v7, v6, 2);
    v3 = (_QWORD*)*v2;
    v6 = v8;
    v5 = *(__int64**)(*v2 + 48);
    v4 = *(__int64**)(*v2 + 56);
  }
  if (v4 == v5) {
    if (v6 != 0) {
      goto LABEL_8;
    }
    return 0;
  }
  if (*v5 == v6) {
    return 0;
  }
LABEL_8:
  if (v6 != 0) {
    v9 = v3[8];
    v3[7] = v5;
    if ((unsigned __int64)v5 >= v9) {
      v12 = v9 - (_QWORD)v5;
      v13 = v12 >> 2;
      if ((unsigned __int64)(v12 >> 2) <= 1) {
        v13 = 1;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v13;
      }
      if (v14 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v15 = v6;
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v18 = &v17[v14];
      v10 = v17 + 1;
      *v17 = v15;
      v3[6] = v17;
      v3[7] = v17 + 1;
      v3[8] = v18;
      if (v5 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v19, (__int64)v5);
      }
      v6 = v15;
    }
    else {
      *v5 = v6;
      v10 = v5 + 1;
    }
    v3[7] = v10;
  }
  GameMenu_16e9cd0(a1, v6);
  GameHr_192d3d0(a1);
  return 13;
}

__int64 game_facility_anonymous_ProcPerchFoodMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_QWORD*)v2 = game_menu_MaterialMenuItem_Empty_vtable;
  *(_DWORD*)(v2 + 40) = -1;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v8_.v8[0] = GameData_2114d78;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  FacilityUtil_9494a0((__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64 ProcPerchFoodMenu_Unknown143(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[3];
  char v8;
  _QWORD v9[3];
  char v10;

  v3 = a3;
  if (a2 == 0) {
    v4 = 0;
    if (a3 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = __dynamic_cast(a2, GameData_212e008[0], GameData_212f6b0, 0);
  if (v3 != 0) {
  LABEL_3:
    v3 = __dynamic_cast(v3, GameData_212e008[0], GameData_212f6b0, 0);
  }

LABEL_4:
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  v7[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
  v7[1] = 0;
  v9[0] = v5;
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v7[2] = 0;
  v8 = 0;
  return GameRoutine_19ef8e0(v9, v7) & 1;
}

__int64

game_facility_anonymous_ProcPerchFoodMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_facility_anonymous_PerchFoodMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
