#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_ObjectReadWrite_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ObjectReadWrite_Destructor_alt1(_QWORD* result) __asm__(
    "ObjectReadWrite_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectReadWrite_Destructor(_QWORD* a1);

void ObjectReadWrite_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[1];
  *a1 = game_hub_ObjectReadWrite_vtable;
  if (v1 != 0) {
    v2 = a1[2];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_24;
    }
    do {
      if ((*(_BYTE*)(v2 - 24) & 1) != 0) {
        v5 = *(_QWORD*)(v2 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, v5);
        }
      }
      if ((*(_BYTE*)(v2 - 48) & 1) != 0) {
        v7 = *(_QWORD*)(v2 - 32);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v7);
        }
      }
      if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
        v9 = *(_QWORD*)(v2 - 64);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v9);
        }
      }
      v2 -= 144;
    } while (v2 != v1);
    v11 = a1[1];
    a1[2] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_24:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, v1);
    }
  }
}

#pragma GCC visibility pop
