#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlUnit_e7c280(_QWORD, long double);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_e80e80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_vtable[])();
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
__n128 ProcCmdBtlSeqSupportAttack_f9dc40(__int64 a1, __n128 result);
__n128 ProcCmdBtlSeqSupportAttack_f9ddf0(__int64 a1, __n128 result);
__n128 ProcCmdBtlSeqSupportAttack_f9e060(char a1, __n128 result);
__int64 ProcCmdBtlSeqSupportAttack_Destructor(__int64 a1);
__n128 ProcCmdBtlSeqSupportAttack_DeletingDestructor(__int64 a1);

__n128 ProcCmdBtlSeqSupportAttack_f9dc40(__int64 a1, __n128 result)
{
  __int64* v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v6;
  __int64 v7;
  __int128* v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  int v20;
  __int128 v21;
  char v22;
  int v23;
  char v24;

  v2 = GameData_212ea58;
  v3 = *(_QWORD*)(*GameData_212ea58 + 1240);
  if (v3 != 0) {
    v4 = *(_DWORD**)(*GameData_212ea58 + 1232);
    v6 = *(_QWORD*)(*GameData_212ea58 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    result = std___1___shared_weak_count___release_weak(v3);
    if (v7 == 0 || v4 == nullptr) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      *(_DWORD*)(a1 + 160) = v4[28];
      v9 = (__int128*)(a1 + 160);
      *((_DWORD*)v9 + 1) = v4[29];
      v10 = *v9;
      *((_QWORD*)&v10 + 1) = (unsigned int)v4[30];
      *v9 = v10;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v13 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v13;
        __cxa_guard_release(&GameData_21a6130);
      }
      v22 = 0;
      v21 = GameData_21a6120;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v14 = v4;
      v15 = v7;
      v18 = 1;
      v24 = 0;
      v11 = *((_QWORD*)v9 + 1);
      v16 = *(_QWORD*)v9;
      v17 = v11;
      v19 = 3251109888LL;
      v20 = 1056964608;
      *(_QWORD*)&v21 = 0x3E99999A00000000LL;
      v23 = 1105199104;
      v12 = *v2 + 16;
      v21 = 0x3E99999A00000000uLL;
      GameRoutine_e80e80(v12, &v14);
      if (v15 != 0) {
        result = std___1___shared_weak_count___release_weak(v15);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
          v7, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

__n128 ProcCmdBtlSeqSupportAttack_f9ddf0(__int64 a1, __n128 result)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  int v18;
  __int128 v19;
  char v20;
  int v21;
  char v22;

  v2 = GameData_212ea58;
  v3 = *(_QWORD*)(*GameData_212ea58 + 1240);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*GameData_212ea58 + 1232);
    v6 = *(_QWORD*)(*GameData_212ea58 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    result = std___1___shared_weak_count___release_weak(v3);
    if (v7 == 0 || v4 == 0) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v11 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v11;
        __cxa_guard_release(&GameData_21a6130);
      }
      v20 = 0;
      v19 = GameData_21a6120;
      v21 = 1109393408;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v12 = v4;
      v13 = v7;
      v16 = 1;
      v22 = 0;
      v9 = *(_QWORD*)(a1 + 168);
      v14 = *(_QWORD*)(a1 + 160);
      v15 = v9;
      v17 = 0x3F800000C2DC0000LL;
      v18 = 1065353216;
      *(_QWORD*)&v19 = 0xBDCCCCCD00000000LL;
      v10 = *v2 + 16;
      v19 = 0xBDCCCCCD00000000LL;
      GameRoutine_e80e80(v10, &v12);
      if (v13 != 0) {
        result = std___1___shared_weak_count___release_weak(v13);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
          v7, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

__n128 ProcCmdBtlSeqSupportAttack_f9e060(char a1, __n128 result)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int16 v8;
  int v9;
  long double v10;

  v2 = *(_QWORD*)(GameData_2203490 + 1240);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_2203490 + 1232);
    v5 = *(_QWORD*)(GameData_2203490 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    result = std___1___shared_weak_count___release_weak(v2);
    if (v6 == 0 || v3 == 0) {
      if (v6 == 0) {
        return result;
      }
    }
    else {
      if ((a1 & 1) != 0) {
        v8 = 256;
      }
      else {
        v8 = 0;
      }
      v9 = CmdBtlUnit_e7c280(v3, *(long double*)&result) & 1;
      *(_WORD*)(v3 + 374) = v8;
      if (v9 != (CmdBtlUnit_e7c280(v3, v10) & 1)) {
        *(_BYTE*)(v3 + 191) = 1;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(
          v6, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqSupportAttack_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__n128 ProcCmdBtlSeqSupportAttack_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqSupportAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
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
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
