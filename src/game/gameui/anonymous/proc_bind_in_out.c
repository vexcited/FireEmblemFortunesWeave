#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcBindInOut_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcBindInOut_Destructor(__int64 a1);
__int64 ProcBindInOut_DeletingDestructor(__int64 a1);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 game_ProcInst_Register(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_gameui_anonymous_ProcInOut_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
void ProcBindInOut_1737bc0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64 a5);

void ProcBindInOut_1737bc0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64 a5)
{
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  long double v18;
  __int64 v19;

  v6 = a3[1];
  if (v6 != 0) {
    v11 = std___1___shared_weak_count_lock(v6);
    if (v11 != 0) {
      v12 = *a3;
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v12 == 0) {
          return;
        }
      }
      else {
        v19 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v19);
        if (v12 == 0) {
          return;
        }
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
      v15 = *a3;
      v14 = a3[1];
      v16 = (_QWORD*)v13;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
      }
      v17 = GameData_212c608[0];
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      *(_QWORD*)(v13 + 120) = 0;
      *(_QWORD*)(v13 + 128) = 0;
      *(_WORD*)(v13 + 136) = 0;
      *(_QWORD*)(v13 + 16) = 0;
      *(_QWORD*)(v13 + 24) = "NULL";
      *(_QWORD*)(v13 + 138) = 0;
      *(_QWORD*)(v13 + 144) = 0;
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      *(_QWORD*)(v13 + 80) = 0;
      *(_QWORD*)(v13 + 88) = 0;
      *(_QWORD*)v13 = v17 + 16;
      *(_QWORD*)(v13 + 8) = 0;
      *(__n128*)&v18 = game_ProcInst_Register(v13);
      LODWORD(v18) = 1.0;
      v16[19] = a2;
      v16[20] = a5;
      *v16 = game_gameui_anonymous_ProcInOut_vtable;
      LayoutAccessor_1562680(a2, "IO", v18);
      v16[21] = v15;
      v16[22] = v14;
      *v16 = game_gameui_anonymous_ProcBindInOut_vtable;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
        v16[23] = a4;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
          GameData_21c67a8 = 3;
          GameData_21c67d0 = 0;
          GameData_21c67d8 = 0;
          GameData_21c67e0 = 0;
          GameData_21c67b0 = 0;
          GameData_21c67b8 = 0;
          GameData_21c67c0 = 0;
          GameData_21c67c8 = 0;
          GameData_21c6808 = 0;
          GameData_21c6810 = 0;
          GameData_21c6818 = 0;
          GameData_21c6820 = 0;
          GameData_21c6828 = 0;
          GameData_21c6850 = 0;
          GameData_21c6858 = 0;
          GameData_21c6860 = 0;
          GameData_21c6848 = 0;
          GameData_21c6838 = 0;
          GameData_21c6840 = 0;
          GameData_21c6830 = 0;
          GameData_21c67e8 = 14;
          GameData_21c67f0 = 0;
          GameData_21c67f8 = 16;
          GameData_21c6800 = 1;
          __cxa_guard_release(&GameData_21c6868);
        }
        ProcInst_657850(v16, &GameData_21c67a8, "ProcBindInOut", 0, a1);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
      else {
        v16[23] = a4;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
          GameData_21c67a8 = 3;
          GameData_21c67d0 = 0;
          GameData_21c67d8 = 0;
          GameData_21c67e0 = 0;
          GameData_21c67b0 = 0;
          GameData_21c67b8 = 0;
          GameData_21c67c0 = 0;
          GameData_21c67c8 = 0;
          GameData_21c6808 = 0;
          GameData_21c6810 = 0;
          GameData_21c6818 = 0;
          GameData_21c6820 = 0;
          GameData_21c6828 = 0;
          GameData_21c6850 = 0;
          GameData_21c6858 = 0;
          GameData_21c6860 = 0;
          GameData_21c6848 = 0;
          GameData_21c6838 = 0;
          GameData_21c6840 = 0;
          GameData_21c6830 = 0;
          GameData_21c67e8 = 14;
          GameData_21c67f0 = 0;
          GameData_21c67f8 = 16;
          GameData_21c6800 = 1;
          __cxa_guard_release(&GameData_21c6868);
        }
        ProcInst_657850(v16, &GameData_21c67a8, "ProcBindInOut", 0, a1);
      }
    }
  }
}

__int64 ProcBindInOut_Destructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_gameui_anonymous_ProcBindInOut_vtable;
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcBindInOut_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_gameui_anonymous_ProcBindInOut_vtable;
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
