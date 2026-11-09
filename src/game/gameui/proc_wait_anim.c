#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_ProcWaitAnim_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcWaitAnim_Unknown2(__int64 a1);
__int64 ProcWaitAnim_Destructor(__int64 a1);
__int64 ProcWaitAnim_DeletingDestructor(__int64 a1);

__int64 ProcWaitAnim_Unknown2(__int64 a1)
{
  __int64 result;
  long double v3;
  __int64 v4;
  __int64 v5;
  char v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v4 = result;
      result = *(_QWORD*)(a1 + 152);
      if (result != 0) {
        if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
          v5 = *(_QWORD*)(a1 + 184);
        }
        else {
          v5 = a1 + 169;
        }
        result = GameRoutine_1563280(result, v5, 1, v3);
        v6 = result ^ 1;
      }
      else {
        v6 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v6 & 1) == 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak();
        if ((v6 & 1) == 0) {
          return result;
        }
      }
    }
  }
  v7 = *(unsigned __int8**)(a1 + 16);
  if (v7 != nullptr) {
    v8 = *v7;
    v9 = v8 > 0x10;
    v10 = (1 << v8) & 0x1CE00;
    if (!v9 && v10 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

__int64 ProcWaitAnim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_gameui_ProcWaitAnim_vtable;
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 184);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcWaitAnim_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_gameui_ProcWaitAnim_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 184);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
