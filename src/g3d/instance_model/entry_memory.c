#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EntryMemory_Destructor(__int64 result);
__int64 EntryMemory_Unknown2(__int64 result, __int64 a2);

__int64 EntryMemory_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 24);
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_21;
    }
    do {
      v6 = *(_QWORD**)(v2 - 8);
      *(_QWORD*)(v2 - 8) = 0;
      if (v6 != nullptr) {
        v7 = v6[3];
        if (v7 != 0) {
          v8 = *(_QWORD*)v4;
          v6[4] = v7;
          if (*(_QWORD*)(v8 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(v8 + v9);
        }
        if (*v6 != 0) {
          v10 = *(_QWORD*)v4;
          v6[1] = *v6;
          if (*(_QWORD*)(v10 + 200) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(v10 + v11);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5);
      }
      v2 -= 16;
    } while (v2 != v1);
    v12 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 24) = v1;
    if (v12 != 0) {
    LABEL_21:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13);
    }
  }
  return result;
}

__int64 EntryMemory_Unknown2(__int64 result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  v2 = *(_QWORD**)(result + 16);
  v3 = *(_QWORD**)(result + 24);
  while (v2 != v3) {
    if (*v2 == a2) {
      v4 = v2[1];
      *v2 = 0;
      *(_BYTE*)(v4 + 56) = 0;
    }
    v2 += 2;
  }
  return result;
}

#pragma GCC visibility pop
