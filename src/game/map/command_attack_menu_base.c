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
_QWORD*
BasicMenuCursor_16e0c00_alt1(_QWORD* result,
                             __int64) __asm__("BasicMenuCursor_16e0c00");
__int64 Util_157bd60(__int64, __int64, __int64, int*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_206c488[])();
extern __int64 (*GameData_206c508[])();
void __attribute__((noreturn))
GameRoutine_1620920_alt1() __asm__("GameRoutine_1620920");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
_QWORD* game_map_CommandAttackMenu_Base_CreateBindAssistMenu(_QWORD* a1,
                                                             __int64 a2);
__int64
game_map_CommandAttackMenu_Base_CreateBindAssistMenu_lambda0_Invoke(__int64 a1);

_QWORD* game_map_CommandAttackMenu_Base_CreateBindAssistMenu(_QWORD* a1,
                                                             __int64 a2)
{
  __int64 v3;
  _QWORD* result;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64* v15;
    __int64* v16;
    __int64 v17;
  } v15_;
  __int64 v18;

  v18 = a2;
  v15_.v16 = nullptr;
  v15_.v17 = 0;
  v15_.v15 = nullptr;
  v13_.v13[0] = GameData_206c488;
  v13_.v13[1] = &v18;
  v11_.v12 = v11_.v11;
  v13_.v13[2] = a1;
  v13_.v13[3] = &v15_.v15;
  v13_.v14 = v13_.v13;
  v11_.v11[0] = GameData_206c508;
  v10 = 4;
  Util_157bd60(a2, (__int64)v13_.v13, (__int64)v11_.v11, &v10);
  if (v11_.v12 == v11_.v11) {
    v3 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v3))((__int64)v11_.v12);
LABEL_6:
  result = v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v5 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(__int64))(*v13_.v14 + v5))((__int64)v13_.v14);
LABEL_11:
  v6 = v15_.v15;
  v7 = v15_.v16;
  if (v15_.v15 != v15_.v16) {
    do {
      v8 = *v6++;
      result = BasicMenuCursor_16e0c00_alt1(a1, v8);
    } while (v6 != v7);
    v6 = v15_.v15;
  }
  if (v6 != nullptr) {
    v15_.v16 = v6;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

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

__int64

game_map_CommandAttackMenu_Base_CreateBindAssistMenu_lambda0_Invoke(__int64 a1)
{
  _QWORD* v1;
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

  v1 = *(_QWORD**)(a1 + 16);
  v3 = (*(__int64 (**)(_QWORD*))(*v1 + 1168LL))(v1);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  v5 = *(_QWORD*)v3;
  if ((v4 & 1) == 0) {
    return (*(__int64 (**)(__int64))(v5 + 8))(v3);
  }
  result = (*(__int64 (**)(__int64))(v5 + 464))(v3);
  if ((result & 1) != 0) {
    return (__int64)BasicMenuCursor_16e0c00_alt1(v1, v3);
  }
  v7 = *(__int64**)(a1 + 24);
  v9 = (__int64*)v7[1];
  v8 = v7[2];
  if ((unsigned __int64)v9 >= v8) {
    v11 = *v7;
    v12 = (__int64)v9 - *v7;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_1620920_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v17 = fw_memory_HeapManager_Allocate_alt1(
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
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v20);
    }
  }
  else {
    *v9 = v3;
    v10 = (__int64)(v9 + 1);
  }
  v7[1] = v10;
  return result;
}

#pragma GCC visibility pop
