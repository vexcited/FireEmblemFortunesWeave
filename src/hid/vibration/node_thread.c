#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_hid_VibrationNode_Update(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeTimerEvent(_QWORD);
__int64 nn_os_StopTimerEvent(_QWORD);
__int64 nn_os_TryLockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
__int64 nn_os_WaitTimerEvent(_QWORD);
extern _UNKNOWN GameData_2166748;
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 NodeThread_Unknown2(__int64 a1);
__int64 NodeThread_Unknown4(__int64 result);

__int64 NodeThread_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  atomic_exchange((atomic_uchar* volatile)(a1 + 481), 1u);
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
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3, v2);
  }
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_StopTimerEvent(a1 + 488);
  result = nn_os_FinalizeTimerEvent(a1 + 488);
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6, v5);
  }
  return result;
}

__int64 NodeThread_Unknown4(__int64 result)
{
  unsigned __int8 v1;
  __int64 v2;
  int v3;

  v1 = atomic_load((unsigned __int8*)(result + 481));
  if ((v1 & 1) == 0) {
    v2 = result;
    do {
      nn_os_WaitTimerEvent(v2 + 488);
      result = nn_os_TryLockMutex(&GameData_2166748);
      if ((result & 1) != 0) {
        nn_hid_VibrationNode_Update();
        result = nn_os_UnlockMutex(&GameData_2166748);
      }
      v3 = atomic_load((unsigned __int8*)(v2 + 481));
    } while (v3 != 1);
  }
  return result;
}

#pragma GCC visibility pop
