#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _QWORD as_g_context_slots[16384];
extern __int64 (*as_HandlePtr_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HandlePtr_Destructor(__int64 result);
__int64 HandlePtr_DeletingDestructor(__int64 a1);

__int64 HandlePtr_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;

  *(_QWORD*)result = as_HandlePtr_vtable;
  v1 = *(unsigned int*)(result + 8);
  if ((_DWORD)v1 != 0x2000) {
    v2 = &as_g_context_slots[2 * v1];
    if (*v2 != 0 && v2[1] == result) {
      *v2 = 0;
      v2[1] = 0;
    }
  }
  return result;
}

__int64 HandlePtr_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = as_HandlePtr_vtable;
  v1 = *(unsigned int*)(a1 + 8);
  if ((_DWORD)v1 != 0x2000) {
    v2 = &as_g_context_slots[2 * v1];
    if (*v2 != 0 && v2[1] == a1) {
      *v2 = 0;
      v2[1] = 0;
    }
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
