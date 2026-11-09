#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ccbf80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*game_hub_Locator_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 Locator_Destructor(__int64 a1);

__int64 Locator_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char v9;
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
  __int64 result;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v1 = *(_QWORD*)(a1 + 640);
  v2 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)a1 = game_hub_Locator_vtable;
  if (v1 != v2) {
    v4 = (char*)as_g_context_slots_ptr;
    v5 = as_g_script_manager_ptr;
    do {
      v6 = *(unsigned int*)(v1 + 8);
      if ((_DWORD)v6 != 0x2000) {
        v7 = &v4[16 * v6];
        v8 = *((_QWORD*)v7 + 1);
        if (v8 != 0 && *(_QWORD*)v7 == *(_QWORD*)v1 &&
            *(_DWORD*)(v8 + 52) == 1) {
          GameRoutine_62bec0(*v5, v1, 1);
        }
      }
      v1 += 24;
    } while (v1 != v2);
    v1 = *(_QWORD*)(a1 + 640);
  }
  v9 = *(_BYTE*)(a1 + 704);
  *(_QWORD*)(a1 + 648) = v1;
  if ((v9 & 1) != 0 && *(_QWORD*)(a1 + 720) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  v11 = *(_QWORD*)(a1 + 696);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 664);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 672);
    if (v12 == v13) {
      goto LABEL_25;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = *(_QWORD*)(a1 + 664);
    *(_QWORD*)(a1 + 672) = v12;
    if (v15 != 0) {
    LABEL_25:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 640);
  if (v17 != 0) {
    *(_QWORD*)(a1 + 648) = v17;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  if ((*(_BYTE*)(a1 + 616) & 1) != 0 && *(_QWORD*)(a1 + 632) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  result = GameRoutine_ccbf80(a1 + 24);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v21 = *(unsigned int*)(a1 + 8);
  v22 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v22 != 0x4000) {
    v23 = (_QWORD*)(util_g_handle_slots_ptr[0][v21] + 16 * v22);
    if (*v23 != 0 && v23[1] == a1) {
      *v23 = 0;
      v23[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v21);
  return result;
}

#pragma GCC visibility pop
