#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqTalkSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqTalkSelect_Destructor(__int64 a1, long double a2);
__int64 ProcHubSeqTalkSelect_DeletingDestructor(__int64 a1, long double a2);
__int64 GameRoutine_cb18f0(_QWORD, _QWORD);
__int64 GameRoutine_d5da40(_QWORD, _QWORD);
__int64 GameRoutine_efa9a0(_QWORD, _QWORD);
__int64 GameRoutine_efc3b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_21f3d10;
extern __int64* GameData_212ebe0;
__int64 ProcHubSeqTalkSelect_10464e0(__int64 a1);
__int64 game_hub_anonymous_ProcHubSeqTalkSelect_MainSeq_closure_Invoke_10466d0(
    __int64 a1, __int64* a2);
__int64 game_hub_anonymous_ProcHubSeqTalkSelect_MainSeq_closure_Invoke_10468d0(
    __int64 a1);

__int64 ProcHubSeqTalkSelect_10464e0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock();
    if (result != 0) {
      if (*(_QWORD*)(a1 + 152) != 0 &&
          (*(_BYTE*)(GameData_21f3d10 + 12) & 1) == 0 &&
          (*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0 &&
          (*(_BYTE*)(GameData_21f3d10 + 13) & 1) == 0) {
        v3 = result;
        GameRoutine_d5da40(*GameData_212ebe0, a1);
        result = v3;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v4 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 game_hub_anonymous_ProcHubSeqTalkSelect_MainSeq_closure_Invoke_10466d0(
    __int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    v4 = *a2;
    result = std___1___shared_weak_count_lock();
    if (result != 0) {
      v5 = result;
      result = *(_QWORD*)(a1 + 8);
      if (result != 0) {
        result = GameRoutine_cb18f0(result, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 game_hub_anonymous_ProcHubSeqTalkSelect_MainSeq_closure_Invoke_10468d0(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)GameData_212dbf0[0];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(v3 + 145) = 1;
    if (*(_DWORD*)(v3 + 68) != 1) {
      v5[0] = v1;
      v5[1] = v2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_efc3b0(v3, v5, 1, 0);
      std___1___shared_weak_count___release_weak(v2);
    }
    GameRoutine_efa9a0(v3, 1);
    return std___1___shared_weak_count___release_weak(v2);
  }
  else {
    *(_BYTE*)(v3 + 145) = 1;
    if (*(_DWORD*)(v3 + 68) != 1) {
      v5[0] = v1;
      v5[1] = 0;
      GameRoutine_efc3b0(v3, v5, 1, 0);
    }
    return GameRoutine_efa9a0(v3, 1);
  }
}

__int64 ProcHubSeqTalkSelect_Destructor(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqTalkSelect_vtable;
  if (v2 != 0) {
    *(_QWORD*)(a1 + 176) = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  v5 = *(_QWORD*)(a1 + 160);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqTalkSelect_DeletingDestructor(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqTalkSelect_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 176) = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, a2);
  }
  v7 = *(_QWORD*)(a1 + 160);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
}

#pragma GCC visibility pop
