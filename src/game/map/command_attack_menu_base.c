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
_QWORD* game_map_CommandAttackMenu_Base_CreateBindAssistMenu_alt1(
    _QWORD* a1,
    __int64 a2) __asm__("game_map_CommandAttackMenu_Base_CreateBindAssistMenu");
__int64
game_map_CommandAttackMenu_Base_CreateBindAssistMenu_lambda0_Invoke_alt1(
    __int64 a1) __asm__("game_map_CommandAttackMenu_Base_CreateBindAssistMenu_"
                        "lambda0_Invoke");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void BasicMenuCursor_16e0c00_alt2(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void Util_157bd60_alt1(__int64, __int64, __int64, int*) __asm__("Util_157bd60");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_CommandAttackMenu_Base_CreateBindAssistMenu(_QWORD* a1,
                                                          __int64 a2);
void game_map_CommandAttackMenu_Base_CreateBindAssistMenu_lambda0_Invoke(
    __int64 a1);

void game_map_CommandAttackMenu_Base_CreateBindAssistMenu(_QWORD* a1,
                                                          __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    __int64* v14;
    __int64* v15;
    __int64 v16;
  } v14_;
  __int64 v17;

  v17 = a2;
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  v14_.v14 = nullptr;
  v12_.v12[0] = GameData_206c488;
  v12_.v12[1] = &v17;
  v10_.v11 = v10_.v10;
  v12_.v12[2] = a1;
  v12_.v12[3] = &v14_.v14;
  v12_.v13 = v12_.v12;
  v10_.v10[0] = GameData_206c508;
  v9 = 4;
  Util_157bd60_alt1(a2, (__int64)v12_.v12, (__int64)v10_.v10, &v9);
  if (v10_.v11 == v10_.v10) {
    v3 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v3))((__int64)v10_.v11);
LABEL_6:
  if (v12_.v13 == v12_.v12) {
    v4 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v4))((__int64)v12_.v13);
LABEL_11:
  v5 = v14_.v14;
  v6 = v14_.v15;
  if (v14_.v14 != v14_.v15) {
    do {
      v7 = *v5++;
      BasicMenuCursor_16e0c00_alt2(a1, v7);
    } while (v5 != v6);
    v5 = v14_.v14;
  }
  if (v5 != nullptr) {
    v14_.v15 = v5;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v5);
  }
}

__int64

game_map_CommandAttackMenu_Base_CreateBindAttackMenu_lambda0_Invoke(__int64 a1)
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

void game_map_CommandAttackMenu_Base_CreateBindAssistMenu_lambda0_Invoke(
    __int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  signed __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD**)(a1 + 16);
  v3 = (*(__int64 (**)(_QWORD*))(*v1 + 1168LL))(v1);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
  v5 = *(_QWORD*)v3;
  if ((v4 & 1) != 0) {
    if (((*(__int64 (**)(__int64))(v5 + 464))(v3) & 1) != 0) {
      BasicMenuCursor_16e0c00_alt2(v1, v3);
    }
    else {
      v6 = *(__int64**)(a1 + 24);
      v8 = (__int64*)v6[1];
      v7 = v6[2];
      if ((unsigned __int64)v8 >= v7) {
        v10 = *v6;
        v11 = (signed __int64)v8 - *v6;
        v12 = (v11 >> 3) + 1;
        if (v12 >> 61 != 0) {
          GameRoutine_1620920_alt1();
        }
        v13 = v7 - v10;
        v14 = fw_memory_g_heap_manager_ptr;
        if (v13 >> 2 > v12) {
          v12 = v13 >> 2;
        }
        if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v15 = v12;
        }
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v15;
        v18 = v16 + v11 - 8 * (v11 >> 3);
        *(_QWORD*)(v16 + v11) = v3;
        v9 = v16 + v11 + 8;
        memcpy_alt1(v18, v10, v11);
        *v6 = v18;
        v6[1] = v9;
        v6[2] = v17;
        if (v10 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v19, v10);
        }
      }
      else {
        *v8 = v3;
        v9 = (__int64)(v8 + 1);
      }
      v6[1] = v9;
    }
  }
  else {
    (*(void (**)(__int64))(v5 + 8))(v3);
  }
}

#pragma GCC visibility pop
