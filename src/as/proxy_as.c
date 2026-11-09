#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_FreeTlsSlot(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_SleepThread(_QWORD, _QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 (*as_ProxyAS_vtable[])();
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProxyAS_Unknown2(__int64 result);
__int64 ProxyAS_Unknown3(__int64 result);
__int64 ProxyAS_Unknown8(__int64 a1);
__int64 ProxyAS_DeletingDestructor(__int64 a1);
__int64 ProxyAS_Unknown5(__int64 a1, __int64 a2);
__int64 ProxyAS_Unknown7(__int64 a1, __int64 a2);

__int64 ProxyAS_Unknown2(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 4785) == 1) {
    return nn_os_LockMutex(v1 + 4856);
  }
  return result;
}

__int64 ProxyAS_Unknown3(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 4785) == 1) {
    return nn_os_UnlockMutex(v1 + 4856);
  }
  return result;
}

__int64 ProxyAS_Unknown8(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  result = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 472LL))(result);
    if (result != 0) {
      v4 = *(_QWORD*)(a1 + 8);
      v5 = *(_QWORD*)(v4 +
                      8LL * (*(unsigned int (**)(__int64))(
                                *(_QWORD*)as_g_thread_info + 72LL))(
                                as_g_thread_info) +
                      4384);
      return *(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5) +
                        24);
    }
  }
  return result;
}

__int64 ProxyAS_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = as_ProxyAS_vtable;
  nn_os_FreeTlsSlot(*(unsigned int*)(a1 + 16));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 ProxyAS_Unknown5(__int64 a1, __int64 a2)
{
  return (unsigned int)(nn_os_ConvertToTimeSpan(a2) / 1000000);
}

__int64 ProxyAS_Unknown7(__int64 a1, __int64 a2)
{
  return nn_os_SleepThread(1000000LL * (int)a2, a2);
}

#pragma GCC visibility pop
