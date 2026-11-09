#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1942920(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BuildWorker_Unknown2(__int64 a1);
__int64 BuildWorker_Unknown4(__int64 result);

__int64 BuildWorker_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((atomic_exchange((atomic_uchar* volatile)(a1 + 720), 1u) & 1) == 0) {
    nn_os_SignalLightEvent(a1 + 484);
  }
  nn_os_WaitThread(a1 + 32);
  nn_os_FinalizeLightEvent(a1 + 484);
  nn_os_FinalizeLightEvent(a1 + 496);
  *(_BYTE*)(a1 + 480) = 0;
  GameRoutine_19449a0(GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  result = nn_os_DestroyThread(a1 + 32);
  v3 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v3 != 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
    }
  }
  else {
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  }
  return result;
}

__int64 BuildWorker_Unknown4(__int64 result)
{
  int v1;
  unsigned __int8 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int8 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _BYTE v16[12];
  __int128 v17;
  _DWORD v18[10];

  v1 = *(_DWORD*)(result + 12);
  v2 = atomic_load((unsigned __int8*)(result + 720));
  if ((v2 & 1) == 0) {
    v3 = v1 - 1;
    v4 = result + 512;
    v5 = result;
    v6 = result + 556;
    v7 = (_QWORD*)(result + 624);
    do {
      result = nn_os_WaitLightEvent(v5 + 484);
      v8 = atomic_load((unsigned __int8*)(v5 + 720));
      if ((v8 & 1) != 0) {
        break;
      }
      GameRoutine_1942920(v16, v3, v4);
      memset(v18, 0, sizeof(v18));
      v17 = 0u;
      *(_QWORD*)&v16[4] = 0;
      *(_QWORD*)(v5 + 548) = 0x43800000780LL;
      v9 = *(_QWORD*)v16;
      *(_QWORD*)v4 = 0;
      *(_QWORD*)(v4 + 8) = 0;
      *(_QWORD*)(v4 + 16) = 0;
      *(_QWORD*)(v4 + 24) = 0;
      *(_DWORD*)(v4 + 32) = 0;
      v7[8] = 0;
      v7[9] = 0;
      v7[6] = 0;
      v7[7] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[2] = 0;
      v7[3] = 0;
      *v7 = 0;
      v7[1] = 0;
      *(_DWORD*)(v5 + 704) = 1036831949;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = 0;
      v10 = v18[9];
      v11 = *(_QWORD*)&v18[7];
      *(_QWORD*)v6 = v9;
      *(_QWORD*)(v6 + 8) = 0;
      v12 = *(_QWORD*)&v18[1];
      v13 = *(_QWORD*)&v18[3];
      *(_DWORD*)(v6 + 64) = v10;
      v14 = *(_QWORD*)&v18[5];
      *(_QWORD*)(v6 + 32) = v12;
      *(_QWORD*)(v6 + 40) = v13;
      *(_QWORD*)(v6 + 48) = v14;
      *(_QWORD*)(v6 + 56) = v11;
      result = nn_os_SignalLightEvent(v5 + 496);
      v15 = atomic_load((unsigned __int8*)(v5 + 720));
    } while (v15 != 1);
  }
  return result;
}

#pragma GCC visibility pop
