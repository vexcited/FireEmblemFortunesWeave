#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7c2c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_SceneObjectHolder_WldLocatorAccessor_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* WldLocatorAccessor_Destructor(_QWORD* result);
__int64 WldLocatorAccessor_DeletingDestructor(_QWORD* a1);

_QWORD* WldLocatorAccessor_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  v1 = (_QWORD*)result[3];
  v2 = (_QWORD*)result[4];
  v3 = result;
  result[2] = 0;
  *result = game_facility_SceneObjectHolder_WldLocatorAccessor_vtable;
  if (v1 != v2) {
    do {
      v4 = (_QWORD*)*v1++;
      result = (_QWORD*)GameRoutine_a7c2c0(*v4);
    } while (v1 != v2);
    v1 = (_QWORD*)v3[3];
  }
  v3[4] = v1;
  if (v1 != nullptr) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v1);
  }
  return result;
}

__int64 WldLocatorAccessor_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v1 = (_QWORD*)a1[3];
  v2 = (_QWORD*)a1[4];
  a1[2] = 0;
  *a1 = game_facility_SceneObjectHolder_WldLocatorAccessor_vtable;
  if (v1 != v2) {
    do {
      v4 = (_QWORD*)*v1++;
      GameRoutine_a7c2c0(*v4);
    } while (v1 != v2);
    v1 = (_QWORD*)a1[3];
  }
  a1[4] = v1;
  if (v1 != nullptr) {
    v5 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v5, v1);
  }
  v6 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6, a1);
}

#pragma GCC visibility pop
