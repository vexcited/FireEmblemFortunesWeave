#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ISortiePlanResult_vtable)();

extern __int64 (
    *game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* PostGrowArgs_Unknown2(_QWORD* result);
_QWORD* PostGrowArgs_Destructor(_QWORD* result);
__int64 PostGrowArgs_DeletingDestructor(_QWORD* a1);
__int64 PostGrowArgs_Unknown5(__int64 result, __int64 a2, __int64 a3);

_QWORD* PostGrowArgs_Unknown2(_QWORD* result)
{
  _QWORD** v1;
  _QWORD** v2;
  _QWORD* v3;

  v1 = (_QWORD**)result[4];
  v2 = (_QWORD**)result[5];
  v3 = result;
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
  return result;
}

_QWORD* PostGrowArgs_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD** v6;
  _QWORD** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = result[7];
  v2 = result;
  *result = game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (_QWORD**)v2[4];
  v7 = (_QWORD**)v2[5];
  *v2 = &game_ISortiePlanResult_vtable;
  v2[2] = v2[1];
  if (v6 == v7) {
    v2[5] = v6;
    if (v6 == nullptr) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  do {
    result = *v6;
    if (*v6 != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
    }
    ++v6;
  } while (v6 != v7);
  v12 = v2[4];
  v2[5] = v12;
  if (v12 != 0) {
  LABEL_7:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }

LABEL_10:
  v9 = v2[1];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v2[2] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11);
  }
  return result;
}

__int64 PostGrowArgs_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v1 = a1[7];
  *a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqPostGrow_PostGrowArgs_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (_QWORD*)a1[4];
  v7 = (_QWORD*)a1[5];
  *a1 = &game_ISortiePlanResult_vtable;
  a1[2] = a1[1];
  if (v6 == v7) {
    a1[5] = v6;
    if (v6 == nullptr) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  do {
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    ++v6;
  } while (v6 != v7);
  v14 = a1[4];
  a1[5] = v14;
  if (v14 != 0) {
  LABEL_7:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }

LABEL_10:
  v9 = a1[1];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[2] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
}

__int64 PostGrowArgs_Unknown5(__int64 result, __int64 a2, __int64 a3)
{
  unsigned __int8* v3;
  unsigned __int8* i;
  __int64 v5;
  int v6;

  *(_DWORD*)(a2 + 87) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  v3 = *(unsigned __int8**)(result + 56);
  for (i = *(unsigned __int8**)(result + 64); v3 != i;
       *(_DWORD*)(a2 + 20 + 4 * v5) = v6) {
    *(_BYTE*)(a2 + 90) = 7;
    *(_QWORD*)a2 = a3;
    v5 = *v3;
    v6 = *((_DWORD*)v3 + 1);
    v3 += 8;
  }
  return result;
}

#pragma GCC visibility pop
