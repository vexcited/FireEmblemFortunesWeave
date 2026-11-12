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
__int64 game_combat_GambitAttack_Run_lambda0_Invoke_alt1(
    __int64 a1, __int64* a2, _DWORD* a3, long double a4,
    long double a5) __asm__("game_combat_GambitAttack_Run_lambda0_Invoke");
__attribute__((swiftcall)) void GambitAttack_Unknown3(PSEUDO_X8 x8_);
__int64 GameHr_e41cc0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_e37f80_alt1(__int64*, char*,
                              char*) __asm__("GameRoutine_e37f80");
__int64 game_combat_GambitAttack_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                    _DWORD* a3);

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
                                                    _DWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  float v5;
  int v6;
  __int64* v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  v3 = *a2;
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 112LL);
  if (v4 != 0) {
    LODWORD(v23_.v23) = *a3;
    v5 = (*(float (**)(__int64, __int64*))(*(_QWORD*)v4 + 48LL))(v4, &v23_.v23);
  }
  else {
    v5 = 0x0.0p+0f;
  }
  v6 = GameHr_e41cc0(*(_QWORD*)(v3 + 104));
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 264, 16, 0);
  *(_QWORD*)(v8 + 8) = 0;
  v9 = (atomic_ullong*)(v8 + 8);
  *(_QWORD*)(v8 + 16) = 0;
  v10 = v8;
  v11 = GameData_212f3e0[0];
  *(_WORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 64) = v3;
  *(_QWORD*)v8 = v11 + 2;
  *(_BYTE*)(v8 + 40) = 12;
  strcpy((char*)(v8 + 41), "Attack");
  *(_DWORD*)(v8 + 72) = 0;
  *(_DWORD*)(v8 + 76) = v6;
  *(_QWORD*)(v8 + 80) = 0;
  *(_BYTE*)(v8 + 88) = 0;
  *(_BYTE*)(v8 + 92) = 0;
  *(_WORD*)(v8 + 96) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_BYTE*)(v8 + 128) = 0;
  *(_BYTE*)(v8 + 132) = 0;
  *(_WORD*)(v8 + 136) = 0;
  *(_QWORD*)(v8 + 160) = 0;
  *(_BYTE*)(v8 + 168) = 0;
  *(_BYTE*)(v8 + 172) = 0;
  *(_WORD*)(v8 + 176) = 0;
  *(_QWORD*)(v8 + 200) = 0;
  *(_BYTE*)(v8 + 208) = 0;
  *(_BYTE*)(v8 + 212) = 0;
  *(_WORD*)(v8 + 216) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_QWORD*)(v8 + 248) = 0;
  *(_QWORD*)(v8 + 24) = game_combat_LegionStackAttack_vtable;
  v12 = v8 + 24;
  *(_WORD*)(v8 + 256) = 256;
  v13 = *(_QWORD*)(v3 + 112);
  v23_.v23 = v12;
  v23_.v24 = v10;
  atomic_fetch_add_explicit(v9, 1u, memory_order_relaxed);
  result = (__int64)GameRoutine_e37f80_alt1(
      (__int64*)(v13 + 136), *(char**)(v13 + 136), (char*)&v23_.v23);
  v15 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 <= 0x0.0p+0f) {
      return result;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak_alt1(v10);
    if (v5 <= 0x0.0p+0f) {
      return result;
    }
  }
  v16 = fw_memory_HeapManager_Allocate_alt1(*v7, 80, 16, 0);
  *(_QWORD*)(v16 + 8) = 0;
  v17 = (atomic_ullong*)(v16 + 8);
  *(_QWORD*)(v16 + 16) = 0;
  v18 = v16;
  v19 = GameData_212f3d8[0];
  *(_WORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 64) = v3;
  *(_DWORD*)(v16 + 72) = 0;
  *(_QWORD*)v16 = v19 + 2;
  strcpy((char*)(v16 + 40), "\nDelay");
  *(float*)(v16 + 76) = v5;
  *(_QWORD*)(v16 + 24) = game_combat_LegionStackDelay_vtable;
  v20 = v16 + 24;
  v21 = *(_QWORD*)(v3 + 112);
  v23_.v23 = v20;
  v23_.v24 = v18;
  atomic_fetch_add_explicit(v17, 1u, memory_order_relaxed);
  result = (__int64)GameRoutine_e37f80_alt1(
      (__int64*)(v21 + 136), *(char**)(v21 + 136), (char*)&v23_.v23);
  v22 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak_alt1(v22);
  }
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak_alt1(v18);
  }
  return result;
}

#pragma GCC visibility pop
