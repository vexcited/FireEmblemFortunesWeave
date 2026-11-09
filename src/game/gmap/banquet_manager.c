#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_BanquetManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* BanquetManager_Destructor(_QWORD* result);
__int64 BanquetManager_DeletingDestructor(_QWORD* a1);

_QWORD* BanquetManager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)result[4];
  v2 = result;
  *result = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[2];
  v2[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  return result;
}

__int64 BanquetManager_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)a1[4];
  *a1 = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

#pragma GCC visibility pop
