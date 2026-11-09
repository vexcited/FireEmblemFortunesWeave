#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 nn_account_CloseUser(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightMessageQueue(_QWORD);
__int64 nn_os_ReceiveLightMessageQueue(_QWORD, _QWORD);
__int64 nn_os_SendLightMessageQueue(_QWORD, _QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 (*save_Task_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 Task_Unknown2(__int64 a1);
__int64 Task_Unknown4(__int64 a1);

__int64 Task_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = save_Task_vtable;
  nn_os_SendLightMessageQueue(a1 + 488, 0);
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
  result = nn_os_FinalizeLightMessageQueue(a1 + 488);
  v5 = *(_QWORD*)(a1 + 792);
  *(_QWORD*)(a1 + 792) = 0;
  if (v5 != 0) {
    if (*(_OWORD*)(v5 + 24) != 0) {
      nn_account_CloseUser(v5);
    }
    if ((*(_BYTE*)(v5 + 88) & 1) != 0 && *(_QWORD*)(v5 + 104) != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
    }
    if ((*(_BYTE*)(v5 + 56) & 1) != 0 && *(_QWORD*)(v5 + 72) != 0) {
      v7 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v7);
    }
    v8 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
    v9 = *(_QWORD*)(a1 + 792);
    *(_QWORD*)(a1 + 792) = 0;
    if (v9 != 0) {
      if (*(_OWORD*)(v9 + 24) != 0) {
        nn_account_CloseUser(v9);
      }
      if ((*(_BYTE*)(v9 + 88) & 1) != 0 && *(_QWORD*)(v9 + 104) != 0) {
        v10 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
      }
      if ((*(_BYTE*)(v9 + 56) & 1) != 0 && *(_QWORD*)(v9 + 72) != 0) {
        v11 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11);
      }
      v12 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12);
    }
  }
  v13 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14);
  }
  return result;
}

__int64 Task_Unknown4(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;

  v9 = nullptr;
  result = nn_os_ReceiveLightMessageQueue(&v9, a1 + 488);
  v3 = v9;
  if (v9 != nullptr) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v7 = *(_QWORD*)((char*)GameRoutine_20 + (_QWORD)v3);
      if (v7 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 48LL))(v7);
      v8 = *(_QWORD**)((char*)GameRoutine_20 + (_QWORD)v3);
      if (v8 == v3) {
        v5 = 32;
      }
      else {
        if (v8 == nullptr) {
          goto LABEL_5;
        }
        v5 = 40;
      }
      (*(void (**)(void))(*v8 + v5))();
    LABEL_5:
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 0xFFFFFFFF);
      v9 = nullptr;
      result = nn_os_ReceiveLightMessageQueue(&v9, a1 + 488);
      v3 = v9;
    } while (v9 != nullptr);
  }
  return result;
}

#pragma GCC visibility pop
