#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ISortiePlanResult_vtable)();
extern __int64 fw_memory_g_heap_manager;
_QWORD* ISortiePlanResult_Destructor(_QWORD* result);

_QWORD* ISortiePlanResult_Destructor(_QWORD* result)
{
  _QWORD** v1;
  _QWORD** v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD**)result[4];
  v2 = (_QWORD**)result[5];
  v3 = result;
  *result = &game_ISortiePlanResult_vtable;
  result[2] = result[1];
  if (v1 != v2) {
    do {
      result = *v1;
      if (*v1 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v1;
    } while (v1 != v2);
    v1 = (_QWORD**)v3[4];
  }
  v3[5] = v1;
  if (v1 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v3[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v3[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

#pragma GCC visibility pop
