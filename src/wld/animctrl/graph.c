#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d29060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*wld_animctrl_Graph_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Graph_Destructor(_QWORD* a1);

__int64 Graph_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = a1[2];
  v2 = a1[3];
  *a1 = wld_animctrl_Graph_vtable;
  for (i = fw_memory_g_heap_manager_ptr; v2 != v1; v2 -= 48) {
    if ((*(_BYTE*)(v2 - 24) & 1) != 0) {
      v5 = *(_QWORD*)(v2 - 8);
      if (v5 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)i + v6, v5);
      }
    }
  }
  v7 = a1[8];
  a1[3] = v1;
  a1[9] = v7;
  result = GameRoutine_d29060(a1);
  v9 = a1[8];
  if (v9 != 0) {
    v10 = *(_QWORD*)i;
    a1[9] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = a1[5];
  if (v12 != 0) {
    v13 = *(_QWORD*)i;
    a1[6] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = a1[2];
  if (v15 != 0) {
    v16 = a1[3];
    if (v15 == v16) {
      goto LABEL_29;
    }
    do {
      if ((*(_BYTE*)(v16 - 24) & 1) != 0) {
        v17 = *(_QWORD*)(v16 - 8);
        if (v17 != 0) {
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v18, v17);
        }
      }
      v16 -= 48;
    } while (v16 != v15);
    v19 = a1[2];
    a1[3] = v15;
    v15 = v19;
    if (v19 != 0) {
    LABEL_29:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
        v20 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)i + v20, v15);
    }
  }
  return result;
}

#pragma GCC visibility pop
