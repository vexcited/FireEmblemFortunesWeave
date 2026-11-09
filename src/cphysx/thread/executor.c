#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a06a0(float);
__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_ClearThreadCache(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 Executor_Unknown2(__int64 a1);
__int64 Executor_Unknown4(__int64 a1);

__int64 Executor_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  nn_os_WaitLightEvent(a1 + 496);
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 520) = 0;
  nn_os_ClearLightEvent(a1 + 496);
  nn_os_SignalLightEvent(a1 + 484);
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
  nn_os_FinalizeLightEvent(a1 + 484);
  result = nn_os_FinalizeLightEvent(a1 + 496);
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
  }
  return result;
}

__int64 Executor_Unknown4(__int64 a1)
{
  __int64 result;

  nn_os_WaitLightEvent(a1 + 484);
  for (result = *(_QWORD*)(a1 + 512); result != 0;
       result = *(_QWORD*)(a1 + 512)) {
    GameRoutine_14a06a0(*(float*)(a1 + 520));
    if (*(_QWORD*)(fw_memory_g_heap_manager + 760) != 0) {
      nn_mem_StandardAllocator_ClearThreadCache(fw_memory_g_heap_manager + 688);
    }
    nn_os_SignalLightEvent(a1 + 496);
    nn_os_WaitLightEvent(a1 + 484);
  }
  return result;
}

#pragma GCC visibility pop
