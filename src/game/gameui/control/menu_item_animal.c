#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1888840(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20ff810[])();
extern __int64 (*GameData_2101d50[])();
extern __int64 (*game_gameui_control_MenuItemAnimal_vtable[])();
extern __int64 (*ui_control_MenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64* MenuItemAnimal_18952e0(__int64* result);
__int64 MenuItemAnimal_Destructor(_QWORD* a1);

__int64* MenuItemAnimal_18952e0(__int64* result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = (_QWORD*)result[1];
  v1 = result[2];
  v3 = result;
  if ((unsigned __int64)v2 >= v1) {
    v5 = *result;
    v6 = (__int64)v2 - *result;
    v7 = (v6 >> 3) + 1;
    if (v7 >> 61 != 0) {
      GameRoutine_6e5c60(result);
    }
    v8 = v1 - v5;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v8 >> 2 > v7) {
      v7 = v8 >> 2;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    }
    else {
      v11 = 0;
    }
    v12 = v11 + 8 * v10;
    v13 = v11 + v6 - 8 * (v6 >> 3);
    *(_QWORD*)(v11 + v6) = 0;
    v4 = v11 + v6 + 8;
    result = (__int64*)memcpy(v13, v5, v6);
    *v3 = v13;
    v3[1] = v4;
    v3[2] = v12;
    if (v5 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
    }
  }
  else {
    *v2 = 0;
    v4 = (__int64)(v2 + 1);
  }
  v3[1] = v4;
  return result;
}

__int64 MenuItemAnimal_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  *(a1 - 9) = game_gameui_control_MenuItemAnimal_vtable;
  v2 = (__int64)(a1 - 9);
  *a1 = GameData_2101d50;
  v3 = a1[130];
  a1[130] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[129];
  a1[129] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[128];
  a1[128] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[127];
  a1[127] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[126];
  a1[126] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  *a1 = GameData_20ff810;
  v8 = a1[123];
  *(a1 - 9) = ui_control_MenuItem_vtable;
  if (v8 != 0) {
    v9 = (_QWORD*)a1[122];
    v10 = a1 + 121;
    v11 = *(_QWORD**)(a1[121] + 8LL);
    *(_QWORD*)(*v9 + 8LL) = v11;
    *v11 = *v9;
    a1[123] = 0;
    if (v9 != a1 + 121) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)v9[1];
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        v9 = v13;
      } while (v13 != v10);
    }
  }
  return Element_1888840(v2);
}

#pragma GCC visibility pop
