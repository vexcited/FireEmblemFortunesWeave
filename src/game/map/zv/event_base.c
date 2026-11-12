#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_zv_EventBase_vtable[])();
extern __int64 GameData_21f3cb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed08[13];
__int64 EventBase_Destructor(__int64 result);
__int64 EventBase_DeletingDestructor_alt1(__int64 a1) __asm__(
    "EventBase_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EventBase_DeletingDestructor(__int64 a1);

__int64 EventBase_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  int v5;
  int v6;

  v1 = result;
  *(_QWORD*)result = game_map_zv_EventBase_vtable;
  if (*(_BYTE*)(result + 8) != 0) {
    *(_BYTE*)(result + 8) = 0;
    v2 = GameData_21f3cb0;
    v3 = *(_DWORD*)(GameData_21f3cb0 + 1048) - 1;
    *(_DWORD*)(GameData_21f3cb0 + 1048) = v3;
    if (v3 == 0) {
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 1040) + 8LL))(v2 + 1040);
    }
  }
  v4 = GameData_212ed08[0];
  if (*(_BYTE*)(v1 + 9) != 0 &&
      (result = *GameData_212ed08[0], *(_BYTE*)(v1 + 9) = 0,
       v5 = *(_DWORD*)(result + 216) - 1, *(_DWORD*)(result + 216) = v5,
       v5 == 0)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 208) + 8LL))(result +
                                                                        208);
    if (*(_BYTE*)(v1 + 10) == 0) {
      return result;
    }
  }
  else if (*(_BYTE*)(v1 + 10) == 0) {
    return result;
  }
  result = *v4;
  *(_BYTE*)(v1 + 10) = 0;
  v6 = *(_DWORD*)(result + 232) - 1;
  *(_DWORD*)(result + 232) = v6;
  if (v6 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 224) + 8LL))(result +
                                                                      224);
  }
  return result;
}

void EventBase_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;

  *(_QWORD*)a1 = game_map_zv_EventBase_vtable;
  if (*(_BYTE*)(a1 + 8) != 0) {
    *(_BYTE*)(a1 + 8) = 0;
    v2 = GameData_21f3cb0;
    v3 = *(_DWORD*)(GameData_21f3cb0 + 1048) - 1;
    *(_DWORD*)(GameData_21f3cb0 + 1048) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 1040) + 8LL))(v2 + 1040);
    }
  }
  v4 = GameData_212ed08[0];
  if (*(_BYTE*)(a1 + 9) != 0) {
    v5 = *GameData_212ed08[0];
    *(_BYTE*)(a1 + 9) = 0;
    v6 = *(_DWORD*)(v5 + 216) - 1;
    *(_DWORD*)(v5 + 216) = v6;
    if (v6 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v5 + 208) + 8LL))(v5 + 208);
    }
  }
  if (*(_BYTE*)(a1 + 10) != 0) {
    v7 = *v4;
    *(_BYTE*)(a1 + 10) = 0;
    v8 = *(_DWORD*)(v7 + 232) - 1;
    *(_DWORD*)(v7 + 232) = v8;
    if (v8 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v7 + 224) + 8LL))(v7 + 224);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

#pragma GCC visibility pop
