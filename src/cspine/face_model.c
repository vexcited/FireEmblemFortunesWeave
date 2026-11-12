#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpineModel_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*cspine_FaceModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FaceModel_Destructor_alt1(__int64 a1) __asm__("FaceModel_Destructor");
__int64 FaceModel_DeletingDestructor_alt1(__int64 a1) __asm__(
    "FaceModel_DeletingDestructor");
void SpineModel_Destructor_alt1(__int64) __asm__("SpineModel_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FaceModel_Destructor(__int64 a1);
void FaceModel_DeletingDestructor(__int64 a1);

void FaceModel_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = cspine_FaceModel_vtable;
  if ((*(_BYTE*)(a1 + 1432) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1448);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
      a1 = v2;
    }
  }
  SpineModel_Destructor_alt1(a1);
}

void FaceModel_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = cspine_FaceModel_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1432) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1448);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  SpineModel_Destructor_alt1(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
