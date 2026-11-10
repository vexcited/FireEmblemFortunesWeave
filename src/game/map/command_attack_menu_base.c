#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 UnitMenuItem_15b81a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_1620920(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64
game_map_CommandAttackMenu_Base_CreateBindAttackMenu_lambda0_Invoke(__int64 a1);
__int64 game_map_CommandAttackMenu_Base_CreateBindAttackMenu_lambda1_Invoke(
    __int64 result, _DWORD* a2);
__int64

game_map_CommandAttackMenu_Base_CreateBindAttackMenu_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 16);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 1168LL))(v1);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  v5 = *(_QWORD*)v3;
  if ((v4 & 1) == 0) {
    return (*(__int64 (**)(__int64))(v5 + 8))(v3);
  }
  result = (*(__int64 (**)(__int64))(v5 + 464))(v3);
  if ((result & 1) != 0) {
    return BasicMenuCursor_16e0c00(v1, v3);
  }
  v7 = *(__int64**)(a1 + 24);
  v9 = (__int64*)v7[1];
  v8 = v7[2];
  if ((unsigned __int64)v9 >= v8) {
    v11 = *v7;
    v12 = (__int64)v9 - *v7;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_1620920();
    }
    v14 = v8 - v11;
    v15 = fw_memory_g_heap_manager_ptr;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v16;
    v19 = v17 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v17 + v12) = v3;
    v10 = v17 + v12 + 8;
    result = memcpy(v19, v11, v12);
    *v7 = v19;
    v7[1] = v10;
    v7[2] = v18;
    if (v11 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20, v11);
    }
  }
  else {
    *v9 = v3;
    v10 = (__int64)(v9 + 1);
  }
  v7[1] = v10;
  return result;
}

__int64 game_map_CommandAttackMenu_Base_CreateBindAttackMenu_lambda1_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  const char* v5;
  char* v6;

  v2 = *(_QWORD*)(result + 8);
  if (*a2 == 1) {
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        144, 16, 0);
    v5 = "MID_Menu_Magic";
    v6 = "MID_Sys_Remaining";
    v4 = v3;
  }
  else {
    if (*a2 != 0) {
      return result;
    }
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        144, 16, 0);
    v4 = v3;
    v5 = "MID_Menu_ExclusiveItem";
    v6 = &GameData_1a9f09e;
  }
  UnitMenuItem_15b81a0(v3, v5, v6);
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
