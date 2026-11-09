#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_zview_CameraQuake_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CameraQuake_Destructor(_QWORD* result);
__int64 CameraQuake_DeletingDestructor(_QWORD* a1);

_QWORD* CameraQuake_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result[4];
  v2 = result;
  *result = game_zview_CameraQuake_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[5] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[1];
  if (v6 != 0) {
    v7 = *v3;
    v2[2] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  return result;
}

__int64 CameraQuake_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[4];
  *a1 = game_zview_CameraQuake_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[5] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[1];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[2] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
