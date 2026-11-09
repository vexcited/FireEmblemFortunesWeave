#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*wld_DynamicLightModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* DynamicLightModule_Destructor(_QWORD* result);
__int64 DynamicLightModule_DeletingDestructor(_QWORD* a1);

_QWORD* DynamicLightModule_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v1 = (_QWORD*)result[22];
  *result = wld_DynamicLightModule_vtable;
  if (v1 != nullptr) {
    v2 = (_QWORD*)result[23];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_8;
    }
    do {
      v4 = (_QWORD*)*(v2 - 12);
      v2 -= 12;
      result = v4;
      *v2 = 0;
      if (v4 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v2 != v1);
    v5 = v3[22];
    v3[23] = v1;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    }
  }
  return result;
}

__int64 DynamicLightModule_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)a1[22];
  *a1 = wld_DynamicLightModule_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = (_QWORD*)a1[23];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v6 = *(v4 - 12);
      v4 -= 12;
      v5 = v6;
      *v4 = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
      }
    } while (v4 != v1);
    v7 = a1[22];
    a1[23] = v1;
    if (v7 != 0) {
    LABEL_8:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
