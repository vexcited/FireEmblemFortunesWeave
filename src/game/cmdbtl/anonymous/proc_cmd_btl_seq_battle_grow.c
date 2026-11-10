#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 Unit_6cc580(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(void);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn_closure_Invoke(
    __int64 result, __int64* a2);
__int64 ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1);
__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_UpdateLearn_closure_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int v23;

  v2 = *a2;
  v3 = GameData_212c880[0];
  if (*(_QWORD*)(*a2 + 48) ==
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (**(_DWORD**)(result + 8) & 0xFFF))) {
    v4 = *(_QWORD**)(result + 16);
    v6 = (_QWORD*)v4[50];
    v5 = v4[51];
    if ((unsigned __int64)v6 >= v5) {
      v8 = v4[49];
      v9 = (char*)v6 - v8;
      v10 = ((__int64)v6 - v8) >> 3;
      v11 = v10 + 1;
      if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
        GameRoutine_6881c0();
      }
      v12 = v5 - v8;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v15 = result;
        v16 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = result;
        v16 = 0;
      }
      v17 = v16 + 8 * v14;
      v18 = (char*)v6 - v8;
      v19 = (__int64)&v9[v16 + -8 * v10];
      *(_QWORD*)&v9[v16] = v2;
      v7 = (__int64)&v9[v16 + 8];
      memcpy(v19, v8, v18);
      v4[49] = v19;
      v4[50] = v7;
      v4[51] = v17;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20);
      }
      result = v15;
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[50] = v7;
    v21 = *(_DWORD**)(result + 8);
    if ((*v21 & 0xFFF) != 0) {
      v22 = v4[23];
      result = GameRoutine_6fcb20(
          *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*v21 & 0xFFF)), v22 + 1840);
      if ((result & 1) != 0) {
        v23 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (*v21 & 0xFFF)) +
                                  104LL);
        if (v23 == 2) {
          return Unit_6cc580(v22, v21, 0);
        }
        else if (v23 == 1) {
          return Unit_6cc9e0(v22, v21, 0);
        }
      }
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqBattleGrow_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
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

  v1 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqBattleGrow_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 400) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 344);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 352) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *(_QWORD*)(a1 + 320);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 328) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = *(_QWORD*)(a1 + 288);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 296) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 264);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 272) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = *(_QWORD*)(a1 + 200);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 160);
    if (v19 == v20) {
      goto LABEL_32;
    }
    do {
      v21 = *(_QWORD*)(v20 - 8);
      if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
      v20 -= 16;
    } while (v20 != v19);
    v22 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v19;
    if (v22 != 0) {
    LABEL_32:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
