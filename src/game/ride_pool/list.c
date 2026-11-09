#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_RidePool_List_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* List_Destructor_93b7a0(_QWORD* result);
__int64 List_93b820(__int64 result);
__int64 List_DeletingDestructor_93bae0(_QWORD* a1);

_QWORD* List_Destructor_93b7a0(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_RidePool_List_vtable;
  if (v1 != 0) {
    v2 = result;
    List_93b820(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
    v2[1] = 0;
  }
  return result;
}

__int64 List_93b820(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v1 = *(_QWORD*)(result + 176);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 184) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[19];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[20] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = v2[15];
  if (v9 != 0) {
    v10 = v2[16];
    if (v9 == v10) {
      goto LABEL_24;
    }
    v11 = v10 - 32;
    do {
      v14 = *(_BYTE*)(v11 + 8);
      *(_DWORD*)(v11 - 24) = 0;
      *(_QWORD*)(v11 - 32) = 0;
      if ((v14 & 1) != 0) {
        **(_BYTE**)(v11 + 24) = 0;
        *(_QWORD*)(v11 + 16) = 0;
      }
      else {
        *(_WORD*)(v11 + 8) = 0;
      }
      GameRoutine_6e3b50(v11 - 16, *(_QWORD*)(v11 - 8));
      v15 = *(_BYTE*)(v11 + 8);
      *(_QWORD*)v11 = 0;
      *(_QWORD*)(v11 - 16) = v11 - 8;
      *(_QWORD*)(v11 - 8) = 0;
      if ((v15 & 1) != 0) {
        v12 = *(_QWORD*)(v11 + 24);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
          v12 = *(_QWORD*)(v11 - 8);
        }
      }
      else {
        v12 = 0;
      }
      result = GameRoutine_6e3b50(v11 - 16, v12);
      v13 = v11 - 32;
      v11 -= 64;
    } while (v13 != v9);
    v17 = v2[15];
    v2[16] = v9;
    if (v17 != 0) {
    LABEL_24:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
    }
  }
  v19 = (_QWORD*)v2[12];
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = v2[10];
  v2[10] = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
  }
  v24 = (_QWORD*)v2[7];
  if (v24 != nullptr) {
    do {
      v25 = (_QWORD*)*v24;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v26 = 128;
      }
      else {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
      v24 = v25;
    } while (v25 != nullptr);
  }
  v27 = v2[5];
  v2[5] = 0;
  if (v27 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28);
  }
  v29 = (_QWORD*)v2[2];
  if (v29 != nullptr) {
    do {
      v30 = (_QWORD*)*v29;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v31 = 128;
      }
      else {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
      v29 = v30;
    } while (v30 != nullptr);
  }
  v32 = *v2;
  *v2 = 0;
  if (v32 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v33);
  }
  return result;
}

__int64 List_DeletingDestructor_93bae0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[1];
  *a1 = game_RidePool_List_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    List_93b820(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

#pragma GCC visibility pop
