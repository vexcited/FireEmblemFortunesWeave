#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpineModel_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*cspine_FaceModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FaceModel_Destructor(__int64 a1);
__int64 FaceModel_DeletingDestructor(__int64 a1);

__int64 FaceModel_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)a1 = cspine_FaceModel_vtable;
  if ((*(_BYTE*)(a1 + 1432) & 1) != 0 && *(_QWORD*)(a1 + 1448) != 0) {
    v1 = a1;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    a1 = v1;
  }
  return SpineModel_Destructor(a1);
}

__int64 FaceModel_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = cspine_FaceModel_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1432) & 1) != 0 && *(_QWORD*)(a1 + 1448) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  SpineModel_Destructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

#pragma GCC visibility pop
