#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2ae40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_animctrl_BlendLayer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BlendLayer_Destructor(__int64 result);

__int64 BlendLayer_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = wld_animctrl_BlendLayer_vtable;
  if (*(_BYTE*)(result + 52) == 1) {
    *(_BYTE*)(result + 52) = 0;
  }
  v2 = *(_QWORD*)(result + 24);
  v3 = *(_QWORD*)(result + 32);
  if (v2 != v3) {
    do {
      result = GameRoutine_d2ae40(v2);
      v2 += 56;
    } while (v2 != v3);
    v2 = *(_QWORD*)(v1 + 24);
  }
  if (v2 != 0) {
    v4 = *(_QWORD*)(v1 + 32);
    if (v2 == v4) {
      goto LABEL_14;
    }
    do {
      v5 = *(_QWORD*)(v4 - 48);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 56;
    } while (v4 != v2);
    v6 = *(_QWORD*)(v1 + 24);
    *(_QWORD*)(v1 + 32) = v2;
    v2 = v6;
    if (v6 != 0) {
    LABEL_14:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v2);
    }
  }
  return result;
}

#pragma GCC visibility pop
