#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlRecord_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f768[4];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ebdb90(void);
__int64 CmdbtlRecordNatives_ebd760(__int64 result);
__int64 CmdbtlRecordNatives_ebd9a0(__int64* a1, __int64 a2);

__int64 CmdbtlRecordNatives_ebd760(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 (**v6)();
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v1 = *(_QWORD*)(result + 16);
  v2 = *(_QWORD*)(result + 24);
  v6 = game_cmdbtl_CmdBtlRecord_vtable;
  if (v1 >= v2) {
    v3 = result;
    result = CmdbtlRecordNatives_ebd9a0(result + 8, &v6);
    v4 = v11;
    *(_QWORD*)(v3 + 16) = result;
    v6 = game_cmdbtl_CmdBtlRecord_vtable;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    *(_QWORD*)v1 = game_cmdbtl_CmdBtlRecord_vtable;
    *(_DWORD*)(v1 + 8) = 0;
    *(_QWORD*)(v1 + 16) = 0;
    *(_QWORD*)(v1 + 24) = 0;
    *(_QWORD*)(v1 + 32) = 0;
    *(_QWORD*)(v1 + 40) = 0;
    v6 = game_cmdbtl_CmdBtlRecord_vtable;
    *(_QWORD*)(result + 16) = v1 + 48;
  }
  v5 = v9;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 CmdbtlRecordNatives_ebd9a0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  void (***v20)(_QWORD);
  __int64 v21;
  void (**v22)(_QWORD);
  void (**v23)(_QWORD);
  void (***v24)(_QWORD);
  void (**v25)(_QWORD);
  __int64 v26;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 4);
  if (v3 > 0x555555555555555LL) {
    GameRoutine_ebdb90();
  }
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 4) >= 0x2AAAAAAAAAAAAAALL) {
    v5 = 0x555555555555555LL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0x555555555555555LL) {
    GameRoutine_60a210(a1);
  }
  v6 = 3 * v5;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      48 * v5, 16, 0);
  v10 = v9 + v2;
  v11 = GameData_212f768[0];
  *(_QWORD*)v10 = GameData_212f768[0] + 2;
  *(_DWORD*)(v10 + 8) = *(_DWORD*)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(v10 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v10 + 24) = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v10 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v10 + 40) = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = (void (***)(_QWORD))*a1;
  v15 = (void (***)(_QWORD))a1[1];
  v16 = v9 + 16 * v6;
  v17 = v10 + 48;
  v18 = v10 + *a1 - (_QWORD)v15;
  if (v15 != (void (***)(_QWORD))*a1) {
    v19 = v11 + 2;
    v20 = (void (***)(_QWORD))*a1;
    v21 = v10 + *a1 - (_QWORD)v15;
    do {
      *(_QWORD*)v21 = v19;
      *(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
      *(_QWORD*)(v21 + 16) = v20[2];
      v22 = v20[3];
      *(_QWORD*)(v21 + 24) = v22;
      if (v22 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 1), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v21 + 32) = v20[4];
      v23 = v20[5];
      *(_QWORD*)(v21 + 40) = v23;
      if (v23 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 1), 1u,
                                  memory_order_relaxed);
      }
      v20 += 6;
      v21 += 48;
    } while (v20 != v15);
    v24 = v14;
    do {
      v25 = *v24;
      v24 += 6;
      (*v25)(v14);
      v14 = v24;
    } while (v24 != v15);
    v14 = (void (***)(_QWORD))*a1;
  }
  *a1 = v18;
  a1[1] = v17;
  a1[2] = v16;
  if (v14 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v14);
  }
  return v17;
}

#pragma GCC visibility pop
