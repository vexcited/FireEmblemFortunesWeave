#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_FinalizeMessageQueue(_QWORD);
__int64 nn_os_SendMessageQueue(_QWORD, _QWORD);
__int64 nn_os_WaitThread(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 BuildLeader_Unknown2(__int64 a1);

__int64 BuildLeader_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  nn_os_SendMessageQueue(a1 + 1168, 0);
  nn_os_WaitThread(a1 + 32);
  *(_BYTE*)(a1 + 480) = 0;
  GameRoutine_19449a0(GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  nn_os_DestroyThread(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3);
  }
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_FinalizeMessageQueue(a1 + 1168);
  nn_os_FinalizeLightEvent(a1 + 1112);
  v4 = *(_QWORD*)(a1 + 984);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  nn_os_FinalizeLightEvent(a1 + 952);
  v5 = *(_QWORD*)(a1 + 824);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  nn_os_FinalizeLightEvent(a1 + 792);
  v6 = *(_QWORD*)(a1 + 664);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  result = nn_os_FinalizeLightEvent(a1 + 632);
  v8 = *(_QWORD*)(a1 + 504);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
  }
  return result;
}

#pragma GCC visibility pop
