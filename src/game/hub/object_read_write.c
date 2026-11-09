#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_ObjectReadWrite_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ObjectReadWrite_Destructor(_QWORD* result);

_QWORD* ObjectReadWrite_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result[1];
  *result = game_hub_ObjectReadWrite_vtable;
  if (v1 != 0) {
    v2 = result[2];
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_24;
    }
    do {
      if ((*(_BYTE*)(v2 - 24) & 1) != 0 && *(_QWORD*)(v2 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5);
      }
      if ((*(_BYTE*)(v2 - 48) & 1) != 0 && *(_QWORD*)(v2 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      }
      if ((*(_BYTE*)(v2 - 80) & 1) != 0 && *(_QWORD*)(v2 - 64) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
      }
      v2 -= 144;
    } while (v2 != v1);
    v8 = v3[1];
    v3[2] = v1;
    if (v8 != 0) {
    LABEL_24:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
    }
  }
  return result;
}

#pragma GCC visibility pop
