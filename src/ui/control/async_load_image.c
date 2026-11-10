#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 (*ui_control_AsyncLoadImage_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AsyncLoadImage_8b7610(__int64 a1);
__int64 AsyncLoadImage_8b7620(__int64 a1);
__int64 AsyncLoadImage_17e5490(__int64 a1);

__int64 AsyncLoadImage_8b7610(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadImage_8b7620(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 40LL))(a1, 0);
}

__int64 AsyncLoadImage_17e5490(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = ui_control_AsyncLoadImage_vtable;
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1);
  }
  v3 = *(_QWORD*)(a1 + 208);
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8));
    *(_QWORD*)(a1 + 208) = 0;
  }
  LayoutAccessor_155e140(a1 + 80);
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 64);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
