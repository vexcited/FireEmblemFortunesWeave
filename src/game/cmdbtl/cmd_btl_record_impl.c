#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlRecord_ebcaa0();
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e9c780(_QWORD, _QWORD);
__int64 GameRoutine_e9c990(_QWORD, _QWORD);
__int64 GameRoutine_ea9100(__int64 result, _QWORD*, _QWORD*, unsigned __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_221d578;
extern __int64 (*GameData_1fecd18[])();
extern __int64 (*GameData_1fecd68[])();
extern __int64 (*GameData_1fef2b8[])();
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 (*game_cmdbtl_MindViewer_vtable[])();
extern __int64 (*game_cmdbtl_Target_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqRecord_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_221d480;
extern __int64 GameData_221d488;
extern __int64 GameData_221d490;
extern __int64 GameData_221d4a0;
extern __int64 GameData_221d4b0;
extern __int64 GameData_221d4c0;
extern __int64 GameData_221d4c8;
extern __int64 GameData_221d4d0;
extern __int64 GameData_221d4e0;
extern __int64 GameData_221d4f0;
extern __int64 GameData_221d500;
extern __int64 GameData_221d508;
extern __int64 GameData_221d510;
extern __int64 GameData_221d520;
extern __int64 GameData_221d530;
extern __int64 GameData_221d540;
extern __int64 GameData_221d548;
extern __int64 GameData_221d550;
extern __int64 GameData_221d560;
extern __int64 GameData_221d570;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
extern char GameData_221d478;
extern char GameData_221d4b8;
extern char GameData_221d4f8;
extern char GameData_221d538;
extern int GameData_221d498;
extern int GameData_221d4a8;
extern int GameData_221d4d8;
extern int GameData_221d4e8;
extern int GameData_221d518;
extern int GameData_221d528;
extern int GameData_221d558;
extern int GameData_221d568;
void __attribute__((noreturn)) GameRoutine_ebd590(_QWORD);
__int64 CmdBtlRecord_ebc930(__int64 a1);
__int64 CmdBtlRecord_ebccc0(__int64 a1, int a2, int a3, char a4);
_QWORD* CmdBtlRecord_ebd060(_QWORD* result, __int64 a2);
__int64 CmdBtlRecord_ebd120(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 CmdBtlRecord_ebc930(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_221d578,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_221d578) != 0) {
    GameData_221d498 = 1;
    GameData_221d478 = 2;
    GameData_221d480 = 0;
    GameData_221d488 = 0;
    GameData_221d490 = 0;
    GameData_221d4a0 = 0;
    GameData_221d4a8 = 0;
    GameData_221d4b0 = 0;
    GameData_221d4d0 = 0;
    GameData_221d4d8 = 0;
    GameData_221d4e0 = 0;
    GameData_221d4e8 = 0;
    GameData_221d4f0 = 0;
    GameData_221d4f8 = 2;
    GameData_221d500 = 0;
    GameData_221d508 = 0;
    GameData_221d510 = 0;
    GameData_221d518 = 2;
    GameData_221d520 = 0;
    GameData_221d4b8 = 13;
    GameData_221d528 = 0;
    GameData_221d530 = 0;
    GameData_221d538 = 0;
    GameData_221d560 = 0;
    GameData_221d568 = 0;
    GameData_221d570 = 0;
    GameData_221d540 = 0;
    GameData_221d548 = 0;
    GameData_221d550 = 0;
    GameData_221d558 = 0;
    GameData_221d4c0 = 0;
    GameData_221d4c8 = (__int64)CmdBtlRecord_ebcaa0;
    __cxa_guard_release(&GameData_221d578);
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2);
  *(_QWORD*)v2 = game_cmdbtl_anonymous_ProcCmdBtlSeqRecord_vtable;
  return GameRoutine_657850(v2, &GameData_221d478, "ProcCmdBtlSeqRecord", 1,
                            a1);
}

__int64 CmdBtlRecord_ebccc0(__int64 a1, int a2, int a3, char a4)
{
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_DWORD*)(a1 + 8) = a2;
  if (a2 == 1) {
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
    *(_QWORD*)(v12 + 16) = 0;
    *(_BYTE*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 76) = 0;
    *(_QWORD*)(v12 + 84) = 0;
    *(_QWORD*)(v12 + 92) = 0;
    *(_QWORD*)(v12 + 100) = 0;
    *(_DWORD*)(v12 + 108) = 0;
    *(_QWORD*)v12 = GameData_1fecd68;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 36) = 0xFFFFFFFF00000000LL;
    *(_DWORD*)(v12 + 72) = -1;
    v11 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_QWORD*)(a1 + 40) = v12;
    *(_QWORD*)(v12 + 24) = game_cmdbtl_MindViewer_vtable;
    *(_QWORD*)(a1 + 32) = v12 + 24;
    if (v11 == 0) {
      goto LABEL_7;
    }
  }
  else {
    if (a2 != 0) {
      goto LABEL_7;
    }
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
    *(_QWORD*)(v8 + 36) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(v8 + 8) = 0;
    *(_QWORD*)(v8 + 16) = 0;
    *(_BYTE*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_DWORD*)(v8 + 72) = -1;
    *(_QWORD*)(v8 + 76) = 0;
    *(_QWORD*)(v8 + 84) = 0;
    *(_QWORD*)(v8 + 92) = 0;
    *(_QWORD*)(v8 + 100) = 0;
    *(_DWORD*)(v8 + 108) = 0;
    *(_QWORD*)v8 = GameData_1fecd18;
    v9 = *v7;
    *(_QWORD*)(v8 + 24) = game_cmdbtl_MindBtlInfo_vtable;
    v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 88, 16, 0);
    v10[2] = 0;
    *v10 = GameData_1fef2b8;
    v10[1] = 0;
    v11 = *(_QWORD*)(a1 + 24);
    v10[6] = 0;
    v10[7] = 0;
    v10[8] = 0;
    v10[9] = 0;
    v10[10] = 0;
    v10[4] = v8 + 24;
    v10[5] = 0;
    *(_QWORD*)(v8 + 120) = v10;
    *(_QWORD*)(a1 + 16) = v8 + 24;
    *(_QWORD*)(a1 + 24) = v8;
    v10[3] = game_cmdbtl_Target_vtable;
    *(_QWORD*)(v8 + 112) = v10 + 3;
    if (v11 == 0) {
      goto LABEL_7;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
    v13 = *(_QWORD*)(a1 + 16);
    v14 = *(_QWORD*)(a1 + 24);
    if (v14 == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_7:
  v13 = *(_QWORD*)(a1 + 16);
  v14 = *(_QWORD*)(a1 + 24);
  if (v14 != 0) {
  LABEL_8:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
      if (v13 != 0) {
        goto LABEL_10;
      }
      goto LABEL_20;
    }
  }
LABEL_9:
  if (v13 == 0) {
  LABEL_20:
    v13 = *(_QWORD*)(a1 + 32);
    v21 = *(_QWORD*)(a1 + 40);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak_alt1(v21);
      }
    }
  }
LABEL_10:
  v15 = *(_QWORD*)(v13 + 40);
  *(_BYTE*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_DWORD*)(v13 + 12) = a3;
  *(_DWORD*)(v13 + 16) = -1;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  *(_DWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 48) = 0xFFFFFFFFLL;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  v18 = *(_QWORD*)(a1 + 16);
  v17 = *(_QWORD*)(a1 + 24);
  if (v17 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak_alt1(v17);
    if (v18 != 0) {
      goto LABEL_15;
    }
  }
  else if (v18 != 0) {
    goto LABEL_15;
  }
  v18 = *(_QWORD*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 40);
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      result = std___1___shared_weak_count___release_weak_alt1(v22);
    }
  }
LABEL_15:
  *(_BYTE*)(v18 + 8) = a4;
  v20 = *(_QWORD*)(a1 + 16);
  v19 = *(_QWORD*)(a1 + 24);
  if (v19 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak_alt1(v19);
    if (v20 != 0) {
      goto LABEL_18;
    }
  }
  else if (v20 != 0) {
    goto LABEL_18;
  }
  v20 = *(_QWORD*)(a1 + 32);
  v23 = *(_QWORD*)(a1 + 40);
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      result = std___1___shared_weak_count___release_weak_alt1(v23);
    }
  }
LABEL_18:
  *(_DWORD*)(v20 + 56) |= 4u;
  return result;
}

_QWORD* CmdBtlRecord_ebd060(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = result[2];
  v2 = result[3];
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v4 = result;
    v5 = a2;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    result = v4;
    a2 = v5;
    if (v3 != 0) {
      goto LABEL_4;
    }
  }
  else if (v3 != 0) {
    goto LABEL_4;
  }
  v3 = result[4];
  v6 = result[5];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v6);
      a2 = v7;
    }
  }

LABEL_4:
  *(_QWORD*)(v3 + 24) = a2;
  return result;
}

__int64 CmdBtlRecord_ebd120(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  v1 = (_QWORD*)result;
  v2 = (_QWORD*)*GameData_212ea58;
  v3 = *(_DWORD*)(result + 8);
  if (v3 != 1) {
    if (v3 != 0) {
      return result;
    }
    v4 = *(_QWORD*)(result + 16);
    v5 = v1[3];
    if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                              1u, memory_order_relaxed),
                    atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0)) {
      v8 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
      v4 = v8;
      if (v8 != 0) {
        goto LABEL_15;
      }
    }
    else if (v4 != 0) {
      goto LABEL_15;
    }
    v4 = v1[4];
    v9 = v1[5];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
        v4 = v10;
      }
    }
  LABEL_15:
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    GameRoutine_e9c780(v2, *(unsigned int*)(v11 + 8));
    v12 = v1[2];
    v13 = v2[80];
    v14 = v2[81];
    if (v14 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
      if (v13 != 0) {
        goto LABEL_18;
      }
    }
    else if (v13 != 0) {
    LABEL_18:
      v15 = *(_QWORD*)(v12 + 8);
      v16 = *(_QWORD*)(v12 + 24);
      *(_QWORD*)(v13 + 16) = *(_QWORD*)(v12 + 16);
      *(_QWORD*)(v13 + 24) = v16;
      *(_QWORD*)(v13 + 8) = v15;
      v18 = *(_QWORD*)(v12 + 32);
      v17 = *(_QWORD*)(v12 + 40);
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
      }
      result = *(_QWORD*)(v13 + 40);
      *(_QWORD*)(v13 + 32) = v18;
      *(_QWORD*)(v13 + 40) = v17;
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v19 = *(_QWORD*)(v12 + 48);
      *(_DWORD*)(v13 + 56) = *(_DWORD*)(v12 + 56);
      *(_QWORD*)(v13 + 48) = v19;
      *(_DWORD*)(v13 + 60) = *(_DWORD*)(v12 + 60);
      if (v13 != v12) {
        return GameRoutine_ea9100(
            v13 + 64, *(_QWORD**)(v12 + 64), *(_QWORD**)(v12 + 72),
            0xAAAAAAAAAAAAAAABLL *
                ((__int64)(*(_QWORD*)(v12 + 72) - *(_QWORD*)(v12 + 64)) >> 3));
      }
      return result;
    }
    v13 = v2[82];
    v20 = v2[83];
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
    goto LABEL_18;
  }
  v6 = *(_QWORD*)(result + 16);
  v7 = v1[3];
  if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v21 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    v6 = v21;
    if (v21 != 0) {
      goto LABEL_32;
    }
  }
  else if (v6 != 0) {
    goto LABEL_32;
  }
  v6 = v1[4];
  v22 = v1[5];
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v23 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
      v6 = v23;
    }
  }

LABEL_32:
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  GameRoutine_e9c990(v2, *(unsigned int*)(v24 + 8));
  v25 = v1[4];
  v26 = v2[82];
  v27 = *(_QWORD*)(v25 + 8);
  v28 = *(_QWORD*)(v25 + 24);
  *(_QWORD*)(v26 + 16) = *(_QWORD*)(v25 + 16);
  *(_QWORD*)(v26 + 24) = v28;
  *(_QWORD*)(v26 + 8) = v27;
  v30 = *(_QWORD*)(v25 + 32);
  v29 = *(_QWORD*)(v25 + 40);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
  }
  result = *(_QWORD*)(v26 + 40);
  *(_QWORD*)(v26 + 32) = v30;
  *(_QWORD*)(v26 + 40) = v29;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v31 = *(_QWORD*)(v25 + 48);
  *(_DWORD*)(v26 + 56) = *(_DWORD*)(v25 + 56);
  *(_QWORD*)(v26 + 48) = v31;
  *(_DWORD*)(v26 + 60) = *(_DWORD*)(v25 + 60);
  if (v26 != v25) {
    result = GameRoutine_ea9100(
        v26 + 64, *(_QWORD**)(v25 + 64), *(_QWORD**)(v25 + 72),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(v25 + 72) - *(_QWORD*)(v25 + 64)) >> 3));
    v32 = *(_QWORD*)(v26 + 88);
    v33 = *(_QWORD*)(v25 + 88);
    v34 = *(_QWORD*)(v25 + 96);
    v35 = v34 - v33;
    v36 = *(_QWORD*)(v26 + 104);
    if (v34 - v33 <= (unsigned __int64)(v36 - v32)) {
      v43 = *(_QWORD*)(v26 + 96);
      v44 = v43 - v32;
      if (v35 > (unsigned __int64)(v43 - v32)) {
        v45 = v33 + v44;
        if (v43 != v32) {
          result = memmove(*(_QWORD*)(v26 + 88), v33, v44);
          v43 = *(_QWORD*)(v26 + 96);
        }
        if (v34 != v45) {
          result = memmove(v43, v45, v34 - v45);
        }
        v46 = v43 + v34 - v45;
        goto LABEL_60;
      }
      if (v34 != v33) {
        result = memmove(*(_QWORD*)(v26 + 88), v33, v34 - v33);
      }
    }
    else {
      v37 = v35 >> 3;
      v38 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v32 != 0) {
        v39 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
        *(_QWORD*)(v26 + 96) = v32;
        v40 = 128;
        if (*(_QWORD*)(v39 + 200) == 0) {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v39 + v40, v32);
        v36 = 0;
        *(_QWORD*)(v26 + 96) = 0;
        *(_QWORD*)(v26 + 104) = 0;
        *(_QWORD*)(v26 + 88) = 0;
      }
      if (v37 >> 61 != 0) {
        goto LABEL_62;
      }
      v41 = v36 >> 2;
      if (v36 >> 2 <= v37) {
        v41 = v35 >> 3;
      }
      v42 = (unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                          : v41;
      if (v42 >> 61 != 0) {
      LABEL_62:
        GameRoutine_ebd590(result);
      }
      result = fw_memory_HeapManager_Allocate(*v38, 8 * v42, 16, 0);
      v32 = result;
      *(_QWORD*)(v26 + 88) = result;
      *(_QWORD*)(v26 + 96) = result;
      *(_QWORD*)(v26 + 104) = result + 8 * v42;
      if (v34 != v33) {
        result = memcpy(result, v33, v34 - v33);
      }
    }
    v46 = v32 + v35;
  LABEL_60:
    *(_QWORD*)(v26 + 96) = v46;
  }
  return result;
}

#pragma GCC visibility pop
