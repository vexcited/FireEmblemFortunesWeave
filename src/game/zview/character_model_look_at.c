#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_zview_CharacterModelLookAt_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterModelLookAt_Destructor(_QWORD* result, long double a2);
__int64 CharacterModelLookAt_DeletingDestructor(_QWORD* a1, long double a2);

_QWORD* CharacterModelLookAt_Destructor(_QWORD* result, long double a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = result[12];
  v3 = result;
  *result = game_zview_CharacterModelLookAt_vtable;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[13] = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    result =
        (_QWORD*)((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
            v5 + v6, (__int64)v2);
  }
  v7 = v3[3];
  if (v7 != 0) {
    v8 = *v4;
    v3[4] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return (_QWORD*)((__int64 (*)(
        __int64, __int64))nn_mem_StandardAllocator_Free)(v8 + v9, (__int64)v7);
  }
  return result;
}

__int64 CharacterModelLookAt_DeletingDestructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = a1[12];
  *a1 = game_zview_CharacterModelLookAt_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[13] = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(v5 + v6,
                                                                   (__int64)v2);
  }
  v7 = a1[3];
  if (v7 != 0) {
    v8 = *(_QWORD*)v4;
    a1[4] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(v8 + v9,
                                                                   (__int64)v7);
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v10 = 56;
  }
  return ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
      *(_QWORD*)v4 + v10, (__int64)a1);
}

#pragma GCC visibility pop
