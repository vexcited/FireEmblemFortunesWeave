#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 GameRoutine_607560(__int64);
__int64 GameRoutine_607f20(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_SetTlsValue(_QWORD, _QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BuildThread_Unknown2(__int64 a1);
__int64 BuildThread_Unknown4(__int64 a1);

__int64 BuildThread_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  atomic_exchange((atomic_uchar* volatile)(a1 + 496), 1u);
  nn_os_WaitThread(a1 + 32);
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v3);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v6);
    }
  }
  else {
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  }
  return result;
}

__int64 BuildThread_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int8 v5;
  int v6;
  __int64 v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(unsigned int*)(as_g_thread_info + 16);
  v3 = *(int*)(as_g_thread_info + 20);
  *(_DWORD*)(as_g_thread_info + 20) = v3 + 1;
  result = nn_os_SetTlsValue(v2, v3);
  v5 = atomic_load((unsigned __int8*)(a1 + 496));
  if ((v5 & 1) == 0) {
    do {
      if (*(_BYTE*)(*(_QWORD*)(a1 + 488) + 4785LL) == 1) {
        *(_BYTE*)(*(_QWORD*)(a1 + 488) + 4784LL) = 1;
        v7 = *(_QWORD*)(a1 + 488);
        if (*(_BYTE*)(v7 + 4785) == 1) {
          nn_os_LockMutex(v7 + 4792);
          v7 = *(_QWORD*)(a1 + 488);
        }
        for (i = *(_QWORD*)(v7 + 16); i != 0; i = *(_QWORD*)(v7 + 16)) {
          while (*(_DWORD*)(i + 312) != 0) {
            i = *(_QWORD*)(i + 48);
            if (i == 0) {
              goto LABEL_22;
            }
          }
          if (*(_BYTE*)(v7 + 4785) == 1) {
            nn_os_UnlockMutex(v7 + 4792);
            v7 = *(_QWORD*)(a1 + 488);
          }
          if (*(_BYTE*)(v7 + 4785) == 1) {
            nn_os_LockMutex(v7 + 4824);
          }
          GameRoutine_607f20(i);
          v7 = *(_QWORD*)(a1 + 488);
          if (*(_BYTE*)(v7 + 4785) == 1) {
            nn_os_UnlockMutex(v7 + 4824);
            v7 = *(_QWORD*)(a1 + 488);
          }
          if (*(_BYTE*)(v7 + 4785) == 1) {
            nn_os_LockMutex(v7 + 4792);
            v7 = *(_QWORD*)(a1 + 488);
          }
        }
      LABEL_22:
        if (*(_BYTE*)(v7 + 4785) == 1) {
          nn_os_UnlockMutex(v7 + 4792);
          v7 = *(_QWORD*)(a1 + 488);
        }
        if (*(_BYTE*)(v7 + 4785) == 1) {
          nn_os_LockMutex(v7 + 4792);
          v7 = *(_QWORD*)(a1 + 488);
        }
        v9 = *(_QWORD*)(v7 + 16);
        if (v9 != 0) {
          do {
            if ((*(_BYTE*)(v9 + 318) & 1) == 0 && *(_BYTE*)(v9 + 320) == 1) {
              v10 = *(_QWORD*)(a1 + 488);
              if (*(_BYTE*)(v10 + 4785) == 1) {
                nn_os_UnlockMutex(v10 + 4792);
                v10 = *(_QWORD*)(a1 + 488);
              }
              if (*(_BYTE*)(v10 + 4785) == 1) {
                nn_os_LockMutex(v10 + 4824);
              }
              GameRoutine_607560(v9);
              v11 = *(_QWORD*)(a1 + 488);
              if (*(_BYTE*)(v11 + 4785) == 1) {
                nn_os_UnlockMutex(v11 + 4824);
                v11 = *(_QWORD*)(a1 + 488);
              }
              if (*(_BYTE*)(v11 + 4785) == 1) {
                nn_os_LockMutex(v11 + 4792);
              }
            }
            v9 = *(_QWORD*)(v9 + 48);
          } while (v9 != 0);
          v7 = *(_QWORD*)(a1 + 488);
        }
        if (*(_BYTE*)(v7 + 4785) == 1) {
          nn_os_UnlockMutex(v7 + 4792);
          v7 = *(_QWORD*)(a1 + 488);
        }
        *(_BYTE*)(v7 + 4784) = 0;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)as_g_thread_info +
                                                  56LL))(as_g_thread_info, 1);
      v6 = atomic_load((unsigned __int8*)(a1 + 496));
    } while (v6 != 1);
  }
  return result;
}

#pragma GCC visibility pop
