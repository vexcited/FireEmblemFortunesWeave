#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlUnit_e79c10(__int64 result, int a2);
__int64 CmdBtlUnit_e79df0(__int64 result);

__int64 CmdBtlUnit_e79c10(__int64 result, int a2)
{
  int v2;
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
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned int v17;

  if (*(_DWORD*)(result + 180) == a2) {
    return result;
  }
  *(_DWORD*)(result + 180) = a2;
  if (a2 == 2) {
    if (*(_BYTE*)(result + 520) == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v7 = result;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v8);
        result = v7;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    *(_BYTE*)(result + 191) = 0;
    v9 = result;
    GameRoutine_e7d0a0(result, 1);
    v10 = *(_QWORD*)(v9 + 208);
    result = v9;
    if (v10 != 0) {
      v6 = *(_QWORD*)(v10 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0;
        goto LABEL_24;
      }
    }
  }
  else if (a2 == 1) {
    v2 = *(unsigned __int8*)(result + 520);
    *(_DWORD*)(result + 484) = 0;
    if (v2 == 1) {
      if ((*(_BYTE*)(result + 488) & 1) != 0 && *(_QWORD*)(result + 504) != 0) {
        v3 = result;
        v4 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v4);
        result = v3;
      }
      *(_BYTE*)(result + 520) = 0;
    }
    v5 = *(_QWORD*)(result + 208);
    *(_BYTE*)(result + 191) = 0;
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 112);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 156) = 0x3F8000003F800000LL;
      LABEL_24:
        *(_DWORD*)(v6 + 164) = 1065353216;
      }
    }
  }
  v11 = *(_QWORD*)(result + 208);
  if (v11 == 0) {
    return result;
  }
  v12 = *(_QWORD*)(v11 + 120);
  v13 = *(_DWORD*)(result + 180);
  if (v12 != 0) {
    *(_BYTE*)(v12 + 417) = v13 != 1;
    v11 = *(_QWORD*)(result + 208);
    if (v11 == 0) {
      return result;
    }
    v13 = *(_DWORD*)(result + 180);
  }
  if (v13 == 1) {
    v17 = *(_DWORD*)(v11 + 340) & 0xFFFFFFFE;
  LABEL_39:
    *(_DWORD*)(v11 + 340) = v17;
    return result;
  }
  if (v13 != 2) {
    return result;
  }
  v14 = *(_QWORD*)(result + 216);
  v15 = *(_QWORD*)(result + 224);
  if (v15 == 0) {
    if ((*(_BYTE*)(v14 + 61) & 1) != 0) {
      return result;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                            memory_order_relaxed);
  v16 = *(_BYTE*)(v14 + 61);
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak();
  }
  if ((v16 & 1) == 0) {
  LABEL_38:
    v17 = *(_DWORD*)(v11 + 340) | 1;
    goto LABEL_39;
  }
  return result;
}

__int64 CmdBtlUnit_e79df0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  int v5;
  char v6;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = result;
    if (*(_QWORD*)(result + 24) != 0) {
      v3 = *(_DWORD*)(v1 + 32) - 1;
      *(_DWORD*)(v1 + 32) = v3;
      if (v3 == 0) {
        v6 = 0;
        v4 = 0xBF800000BF800000LL;
        v5 = 1065353216;
        result = GameRoutine_819f40(*(_QWORD*)(v1 + 8));
        if ((_DWORD)result != *(_DWORD*)(v1 + 16)) {
          result = GameRoutine_81a540(v1, (unsigned int)result, &v4);
        }
      }
      if (*(_BYTE*)(v2 + 176) == 1) {
        v4 = *(_QWORD*)(v2 + 24);
        if (v4 != 0) {
          result = GameRoutine_a867a0(&v4);
        }
        *(_BYTE*)(v2 + 176) = 0;
      }
      else {
        result = GameRoutine_819400(*(_QWORD*)(v2 + 16));
      }
      *(_QWORD*)(v2 + 24) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
