#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e41cc0(__int64, long double, long double);
__int64 GameRoutine_e51940(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
char* GameRoutine_e37f80(signed __int64*, char*, char*);
extern __int64 (*GameData_1fe65c0[])();
extern __int64 (*game_combat_GambitAttack_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 (*game_combat_LegionStackAttack_vtable[])();
extern __int64 (*game_combat_LegionStackDelay_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f3d8[4];
extern __int64* GameData_212f3e0[3];
__int64 game_combat_GambitAttack_Run(__int64 a1);
__n128 GambitAttack_Destructor(__int64 a1);
__n128 GambitAttack_DeletingDestructor(__int64 a1);
__int64 game_combat_GambitAttack_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                    _DWORD* a3, long double a4,
                                                    long double a5);
__attribute__((swiftcall)) void GambitAttack_Unknown3(PSEUDO_X8 x8_);

__int64 game_combat_GambitAttack_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe65c0;
  v3[1] = a1;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__n128 GambitAttack_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_combat_GambitAttack_vtable;
  v2 = (_QWORD*)(a1 + 80);
  v3 = *(_QWORD**)(a1 + 112);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v6 = *(_QWORD*)(a1 + 56);
  if (v6 != 0) {
    *(_QWORD*)(a1 + 64) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  return result;
}

__n128 GambitAttack_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_combat_GambitAttack_vtable;
  v2 = (_QWORD*)(a1 + 80);
  v3 = *(_QWORD**)(a1 + 112);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 56);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 64) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 40);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
    }
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v11, a1);
}

__attribute__((swiftcall)) void GambitAttack_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 12;
  strcpy(a1 + 1, "Attack");
}

__int64 game_combat_GambitAttack_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                    _DWORD* a3, long double a4,
                                                    long double a5)
{
  __int64 v5;
  __int64 v6;
  float v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v5 = *a2;
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 112LL);
  if (v6 != 0) {
    LODWORD(v25) = *a3;
    *(float*)&a4 =
        (*(float (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v25);
    v7 = *(float*)&a4;
  }
  else {
    v7 = 0.0;
  }
  v8 = GameRoutine_e41cc0(*(_QWORD*)(v5 + 104), a4, a5);
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       264, 16, 0);
  *(_QWORD*)(v10 + 8) = 0;
  v11 = (atomic_ullong*)(v10 + 8);
  *(_QWORD*)(v10 + 16) = 0;
  v12 = v10;
  v13 = GameData_212f3e0[0];
  *(_WORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 64) = v5;
  *(_QWORD*)v10 = v13 + 2;
  *(_BYTE*)(v10 + 40) = 12;
  strcpy((char*)(v10 + 41), "Attack");
  *(_DWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 76) = v8;
  *(_QWORD*)(v10 + 80) = 0;
  *(_BYTE*)(v10 + 88) = 0;
  *(_BYTE*)(v10 + 92) = 0;
  *(_WORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_BYTE*)(v10 + 128) = 0;
  *(_BYTE*)(v10 + 132) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 168) = 0;
  *(_BYTE*)(v10 + 172) = 0;
  *(_WORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_BYTE*)(v10 + 208) = 0;
  *(_BYTE*)(v10 + 212) = 0;
  *(_WORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 24) = game_combat_LegionStackAttack_vtable;
  v14 = v10 + 24;
  *(_WORD*)(v10 + 256) = 256;
  v15 = *(_QWORD*)(v5 + 112);
  v25 = v14;
  v26 = v12;
  atomic_fetch_add_explicit(v11, 1u, memory_order_relaxed);
  result = (__int64)GameRoutine_e37f80((signed __int64*)(v15 + 136),
                                       *(char**)(v15 + 136), (char*)&v25);
  v17 = v26;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak();
  }
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 <= 0.0) {
      return result;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak();
    if (v7 <= 0.0) {
      return result;
    }
  }
  v18 = fw_memory_HeapManager_Allocate(*v9, 80, 16, 0);
  *(_QWORD*)(v18 + 8) = 0;
  v19 = (atomic_ullong*)(v18 + 8);
  *(_QWORD*)(v18 + 16) = 0;
  v20 = v18;
  v21 = GameData_212f3d8[0];
  *(_WORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 64) = v5;
  *(_DWORD*)(v18 + 72) = 0;
  *(_QWORD*)v18 = v21 + 2;
  strcpy((char*)(v18 + 40), "\nDelay");
  *(float*)(v18 + 76) = v7;
  *(_QWORD*)(v18 + 24) = game_combat_LegionStackDelay_vtable;
  v22 = v18 + 24;
  v23 = *(_QWORD*)(v5 + 112);
  v25 = v22;
  v26 = v20;
  atomic_fetch_add_explicit(v19, 1u, memory_order_relaxed);
  result = (__int64)GameRoutine_e37f80((signed __int64*)(v23 + 136),
                                       *(char**)(v23 + 136), (char*)&v25);
  v24 = v26;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = std___1___shared_weak_count___release_weak();
  }
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
