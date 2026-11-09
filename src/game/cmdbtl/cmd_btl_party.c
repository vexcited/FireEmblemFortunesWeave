#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlUnit_e79df0(_QWORD);
__int64 GameRoutine_e73e20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_cmdbtl_CmdBtlParty_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlParty_Destructor(__int64 a1);

__int64 CmdBtlParty_Destructor(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(__int64**)(a1 + 40);
  v2 = *(__int64**)(a1 + 48);
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlParty_vtable;
  if (v1 != v2) {
    do {
      v4 = *v1;
      v1 += 2;
      CmdBtlUnit_e79df0(v4);
    } while (v1 != v2);
    v1 = *(__int64**)(a1 + 40);
    v2 = *(__int64**)(a1 + 48);
  }
  for (; v2 != v1; v2 -= 2) {
    v5 = *(v2 - 1);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  *(_QWORD*)(a1 + 48) = v1;
  *(_DWORD*)(a1 + 28) = 0;
  GameRoutine_e73e20(a1);
  if (*(_QWORD*)(a1 + 120) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 104) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = *(_QWORD*)(a1 + 72);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 48);
    if (v7 == v8) {
      goto LABEL_26;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak();
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = v7;
    if (v10 != 0) {
    LABEL_26:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  return result;
}

#pragma GCC visibility pop
