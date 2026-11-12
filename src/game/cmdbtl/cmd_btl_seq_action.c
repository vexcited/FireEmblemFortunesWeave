#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6cb640(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD GameData_1b018e8[4];
extern __int64 (*GameData_1ff3f48[])();
extern __int64 (*GameData_1ff3fc8[])();
extern __int64 GameData_21f4cc0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
__int64 game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind(__int64 a1);
_QWORD* game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda0_Clone(__int64 a1);
__int64
game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda0_CloneInto(__int64 result,
                                                              _QWORD* a2);
_QWORD* game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda1_Clone(__int64 a1);
__int64
game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda1_CloneInto(__int64 result,
                                                              _QWORD* a2);
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 Unit_6cb640(__int64);
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");

__int64 game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[2];
    __int64 v28;
    char gap24_[8];
    _QWORD* v29;
  } v27_;

  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
    if (v4 != 0) {
      goto LABEL_4;
    }
  }
  else if (v4 != 0) {
    goto LABEL_4;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v11 = *(_QWORD*)(v3 + 664);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
      if ((*(_DWORD*)(v4 + 48) & 0x80000000) != 0) {
        goto LABEL_16;
      }
      goto LABEL_5;
    }
  }
LABEL_4:
  if ((*(_DWORD*)(v4 + 48) & 0x80000000) != 0) {
    goto LABEL_16;
  }
LABEL_5:
  v6 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(
                                 v4) +
                             40) +
                  16LL * *(int*)(v4 + 48));
  v7 = v6[1];
  if (v7 != 0) {
    v8 = *v6;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
    v9 = std___1___shared_weak_count_lock_alt1(v7);
    if (v9 == 0) {
      v8 = 0;
    }
    std___1___shared_weak_count___release_weak_alt1(v7);
    v10 = *(_QWORD*)(v4 + 40);
    if (v10 == 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
LABEL_16:
  v9 = 0;
  v8 = 0;
  v10 = *(_QWORD*)(v4 + 40);
  if (v10 == 0) {
    goto LABEL_19;
  }
LABEL_17:
  if (*(_QWORD*)(v10 + 8) != -1) {
    v12 = (__int64*)(v4 + 32);
    goto LABEL_21;
  }
LABEL_19:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  v10 = *(_QWORD*)(result + 88);
  if (v10 != 0) {
    v12 = (__int64*)(result + 80);
  LABEL_21:
    v14 = *v12;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock_alt1(v10);
    if (v15 == 0) {
      v14 = 0;
    }
    result = std___1___shared_weak_count___release_weak_alt1(v10);
    if (v8 == 0) {
      goto LABEL_43;
    }
    goto LABEL_26;
  }
  v15 = 0;
  v14 = 0;
  if (v8 == 0) {
    goto LABEL_43;
  }
LABEL_26:
  result = *(_QWORD*)(v8 + 16);
  if (result != 0 && (*(_BYTE*)(result + 416) & 8) == 0 &&
      (((v16 = *(unsigned __int8*)(GameData_21f4cc0 + 9)) & 1) == 0 &&
           (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) == 0 &&
           (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0 ||
       (*(unsigned __int8*)(GameData_21f4cc0 + 12) | v16) == 0 &&
           (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) == 0 &&
           (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0) &&
      (*(_BYTE*)(GameData_21f4cc0 + 8) & 1) == 0) {
    v17 = *(_QWORD*)(result + 440);
    if (v17 != 0 &&
        (unsigned __int64)(v18 = *(unsigned __int8*)(v17 + 16)) <= 3) {
      v19 = GameData_1b018e8[v18];
    }
    else {
      v19 = 392;
    }
    if (*(_DWORD*)(*v2 + v19 + 672) == 0) {
      result = Unit_6cb640(result);
      if ((unsigned __int8)(result - 1) < 5u) {
        result = ProcList_9bd480_alt1(a1);
        if (result == 0) {
          goto LABEL_76;
        }
        goto LABEL_61;
      }
    }
  }
LABEL_43:
  if (v14 == 0) {
    goto LABEL_76;
  }
  result = *(_QWORD*)(v14 + 16);
  if (result == 0 || (*(_BYTE*)(result + 416) & 8) != 0) {
    goto LABEL_76;
  }
  v20 = *(unsigned __int8*)(GameData_21f4cc0 + 9);
  if (((v20 & 1) != 0 || (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) != 0 ||
       (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) != 0) &&
      ((*(unsigned __int8*)(GameData_21f4cc0 + 12) | v20) != 0 ||
       (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) != 0 ||
       (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) != 0)) {
    goto LABEL_76;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 8) & 1) != 0) {
    goto LABEL_76;
  }
  v21 = *(_QWORD*)(result + 440);
  if (v21 != 0 &&
      (unsigned __int64)(v22 = *(unsigned __int8*)(v21 + 16)) <= 3) {
    v23 = GameData_1b018e8[v22];
  }
  else {
    v23 = 392;
  }
  if (*(_DWORD*)(*v2 + v23 + 672) != 0) {
    goto LABEL_76;
  }
  result = Unit_6cb640(result);
  if ((unsigned __int8)(result - 1) > 4u) {
    goto LABEL_76;
  }
  result = ProcList_9bd480_alt1(a1);
  if (result == 0) {
    goto LABEL_76;
  }
  if (v8 != 0) {
  LABEL_61:
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    v27_.v28 = v9;
    v24 = result;
    v27_.v27[0] = GameData_1ff3f48;
    v27_.v27[1] = v8;
    v27_.v29 = v27_.v27;
    game_ProcList_Call_9bcfa0_alt1(result, (__int64)v27_.v27);
    if (v27_.v29 == v27_.v27) {
      v25 = 32;
    }
    else {
      if (v27_.v29 == nullptr) {
        goto LABEL_68;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*v27_.v29 + v25))((__int64)v27_.v29);
  LABEL_68:
    result = v24;
    if (v14 == 0) {
      goto LABEL_76;
    }
  }
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v27_.v28 = v15;
  v27_.v27[0] = GameData_1ff3fc8;
  v27_.v27[1] = v14;
  v27_.v29 = v27_.v27;
  game_ProcList_Call_9bcfa0_alt1(result, (__int64)v27_.v27);
  result = (__int64)v27_.v29;
  if (v27_.v29 == v27_.v27) {
    v26 = 32;
    goto LABEL_75;
  }
  if (v27_.v29 != nullptr) {
    v26 = 40;
  LABEL_75:
    result = (*(__int64 (**)(__int64))(*v27_.v29 + v26))((__int64)v27_.v29);
  }
LABEL_76:
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak_alt1(v9);
  }
  return result;
}

_QWORD* game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  *result = GameData_1ff3f48;
  result[1] = v4;
  result[2] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda0_CloneInto(__int64 result,
                                                              _QWORD* a2)
{
  __int64 v2;

  *a2 = GameData_1ff3f48;
  a2[1] = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  a2[2] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

_QWORD* game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda1_Clone(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  *result = GameData_1ff3fc8;
  result[1] = v4;
  result[2] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_cmdbtl_CmdBtlSeqAction_UpdateBlazeBind_lambda1_CloneInto(__int64 result,
                                                              _QWORD* a2)
{
  __int64 v2;

  *a2 = GameData_1ff3fc8;
  a2[1] = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  a2[2] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

#pragma GCC visibility pop
