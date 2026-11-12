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
__int64
ProcWaitAnim_Destructor_alt1(__int64 a1) __asm__("ProcWaitAnim_Destructor");
__int64 ProcWaitAnim_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcWaitAnim_DeletingDestructor");
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcWaitAnim_Destructor(__int64 a1);
void ProcWaitAnim_DeletingDestructor(__int64 a1);

__int64 ProcWaitAnim_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 152);
      if (result != 0) {
        if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
          v4 = *(_QWORD*)(a1 + 184);
        }
        else {
          v4 = a1 + 169;
        }
        result = LayoutAccessor_1563280((__int64*)result, v4, 1);
        v5 = result ^ 1;
      }
      else {
        v5 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v5 & 1) == 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        result = std___1___shared_weak_count___release_weak_alt1(v3);
        if ((v5 & 1) == 0) {
          return result;
        }
      }
    }
  }
  v6 = *(unsigned __int8**)(a1 + 16);
  if (v6 != nullptr) {
    v7 = *v6;
    v8 = v7 > 0x10;
    v9 = (1 << v7) & 0x1CE00;
    if (!v8 && v9 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

void ProcWaitAnim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_gameui_ProcWaitAnim_vtable;
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 184);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 160);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcWaitAnim_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_gameui_ProcWaitAnim_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 184);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 160);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, a1);
}

#pragma GCC visibility pop
