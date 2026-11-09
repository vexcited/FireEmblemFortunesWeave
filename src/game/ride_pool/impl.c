#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_9331a0(__int64, __int64);
__int64 GameRoutine_93bb80(__int64);
__int64 GameRoutine_93bf20(__int64*);
__int64 GameRoutine_93d4a0(__int64*, __int64);
__int64 List_93b820(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_RidePool_List_vtable[])();
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 Impl_Destructor_93e760(_QWORD* a1);
__int64 Impl_DeletingDestructor_93e800(_QWORD* a1);
__int64 Impl_Unknown8_93e920(__int64 a1, __int64 a2, int a3);

__int64 Impl_Destructor_93e760(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v5;

  v1 = a1[2];
  a1[1] = game_RidePool_List_vtable;
  if (v1 != 0) {
    List_93b820(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
    a1[2] = 0;
  }
  v5 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v5);
}

__int64 Impl_DeletingDestructor_93e800(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v7;

  v1 = a1[2];
  a1[1] = game_RidePool_List_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    List_93b820(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
    a1[2] = 0;
  }
  v7 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v7);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 Impl_Unknown8_93e920(__int64 a1, __int64 a2, int a3)
{
  __int64* v3;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;

  v3 = *(__int64**)(a1 + 16);
  if (a3 > 2) {
    return GameRoutine_93d4a0(*(__int64**)(a1 + 16), a2);
  }
  GameRoutine_93bb80(*(_QWORD*)(a1 + 16));
  v5 = *(int*)(a2 + 20);
  v6 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  v7 = *(unsigned __int8*)(v6 + v5);
  *(_DWORD*)(a2 + 20) = v5 + 2;
  v8 = v7 | (*(unsigned __int8*)(v6 + v5 + 1) << 8);
  if (v8 != 0) {
    v9 = (unsigned __int64)v8 << 6;
    v10 = 0;
    do {
      GameRoutine_9331a0(v3[15] + v10, a2);
      v10 += 64;
    } while (v9 != v10);
  }
  return GameRoutine_93bf20(v3);
}

#pragma GCC visibility pop
