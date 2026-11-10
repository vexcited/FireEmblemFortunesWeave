#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_InitializeWorker(_QWORD, _QWORD, _QWORD);
__int64 gxc_NvnStateCache_Destroy_NvnStateCache(_QWORD);
__int64 gxc_NvnStateCache_NvnStateCache(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_InitializeLightEvent(_QWORD, _QWORD, _QWORD, long double);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_StartThread(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
long double GameRoutine_a8d980(_QWORD);
__int64 WorkerThread_194daa0(__int64 a1, unsigned int a2, __int64 a3,
                             __int64* a4);
__int64 WorkerThread_Unknown4(__int64 result);
__int64 gxc_NvnStateCache_UnlockAll(_QWORD);
__attribute__((swiftcall)) void WorkerThread_194dc70(PSEUDO_X8 x8_, _QWORD* a1);

__int64 WorkerThread_194daa0(__int64 a1, unsigned int a2, __int64 a3,
                             __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  long double v16;

  v5 = *a4;
  v4 = a4[1];
  v7 = a2;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 592);
  *(_QWORD*)(a1 + 584) = v5;
  *(_QWORD*)(a1 + 592) = v4;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       128, 16, 0);
  gxc_NvnStateCache_NvnStateCache();
  v12 = v11;
  v13 = *(_QWORD*)(a1 + 600);
  *(_QWORD*)(a1 + 600) = v12;
  if (v13 != 0) {
    gxc_NvnStateCache_Destroy_NvnStateCache(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v14);
    v12 = *(_QWORD*)(a1 + 600);
  }
  v15 = GameRoutine_a8d980(v12);
  nn_os_InitializeLightEvent(a1 + 484, 0, 1, v15);
  nn_os_InitializeLightEvent(a1 + 496, 1, 0, v16);
  *(_DWORD*)(a1 + 608) = v7;
  fw_world_InitializeWorker(a1, (v7 << 32) | 0x20000006, a3);
  return nn_os_StartThread(a1 + 32);
}

__attribute__((swiftcall)) void WorkerThread_194dc70(PSEUDO_X8 x8_, _QWORD* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v5;
  __int64 v6;

  nn_os_WaitLightEvent(a1 + 62);
  result = gxc_NvnStateCache_UnlockAll(a1[71]);
  v5 = a1[70];
  a1[71] = 0;
  a1[70] = 0;
  *a2 = v5;
  a2[1] = 0;
  v6 = a1[72];
  a1[72] = 0;
  a2[2] = v6;
  {
    result;
    return;
  }
}

__int64 WorkerThread_Unknown4(__int64 result)
{
  unsigned __int8 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int8 v6;
  __int64 v7;
  _QWORD* v8;
  int v9;

  v1 = atomic_load((unsigned __int8*)(result + 481));
  if ((v1 & 1) == 0) {
    v2 = (_QWORD*)(result + 512);
    v3 = result;
    do {
      result = nn_os_WaitLightEvent(v3 + 484);
      v6 = atomic_load((unsigned __int8*)(v3 + 481));
      if ((v6 & 1) != 0) {
        return result;
      }
      v7 = *(_QWORD*)(v3 + 544);
      if (v7 != 0) {
        v9 = *(_DWORD*)(v3 + 608);
        (*(void (**)(__int64, int*))(*(_QWORD*)v7 + 48LL))(v7, &v9);
        v8 = *(_QWORD**)(v3 + 544);
        *(_QWORD*)(v3 + 544) = 0;
        if (v8 == v2) {
          v4 = 32;
        }
        else {
          if (v8 == nullptr) {
            goto LABEL_6;
          }
          v4 = 40;
        }
        (*(void (**)(void*))(*v8 + v4))(v8);
      }
    LABEL_6:
      result = nn_os_SignalLightEvent(v3 + 496);
      v5 = atomic_load((unsigned __int8*)(v3 + 481));
    } while (v5 != 1);
  }
  return result;
}

#pragma GCC visibility pop
