#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*util_HandlePtr_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 util_g_handle_slots[];
extern int GameData_21a606c[];
__int64 HandlePtr_Destructor_cb2540(__int64 result);
__int64 HandlePtr_DeletingDestructor_cb25b0(__int64 a1);

__int64 HandlePtr_Destructor_cb2540(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;

  *(_QWORD*)result = util_HandlePtr_vtable;
  v1 = *(unsigned int*)(result + 8);
  v2 = *(unsigned int*)(result + 12);
  if ((_DWORD)v2 != 0x4000) {
    v3 = (_QWORD*)(util_g_handle_slots[v1] + 16 * v2);
    if (*v3 != 0 && v3[1] == result) {
      *v3 = 0;
      v3[1] = 0;
      *(_QWORD*)(result + 8) = 0x400000000001LL;
    }
  }
  --GameData_21a606c[v1];
  return result;
}

__int64 HandlePtr_DeletingDestructor_cb25b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = util_HandlePtr_vtable;
  v1 = *(unsigned int*)(a1 + 8);
  v2 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v2 != 0x4000) {
    v3 = (_QWORD*)(util_g_handle_slots[v1] + 16 * v2);
    if (*v3 != 0 && v3[1] == a1) {
      *v3 = 0;
      v3[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --GameData_21a606c[v1];
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
