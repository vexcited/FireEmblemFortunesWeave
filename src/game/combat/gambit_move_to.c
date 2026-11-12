#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe6470[])();
extern __int64 (*game_combat_GambitMoveTo_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_combat_GambitMoveTo_Run(__int64 a1);
__n128
GambitMoveTo_Destructor_alt1(__int64 a1) __asm__("GambitMoveTo_Destructor");
__n128 GambitMoveTo_DeletingDestructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_e37f80(signed __int64*, char*, char*);
extern __int64 (*GameData_1fe64e0[])();
extern __int64 (*game_combat_LegionStackDelay_vtable[])();
extern __int64 (*game_combat_LegionStackMoveTo_vtable[])();
extern __int64* GameData_212f3d8[4];
__attribute__((swiftcall)) void GambitMoveTo_Unknown3(PSEUDO_X8 x8_);
void game_combat_GambitMoveTo_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                 int* a3);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GambitMoveTo_Destructor(__int64 a1);

__int64 game_combat_GambitMoveTo_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6470;
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

void GambitMoveTo_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_combat_GambitMoveTo_vtable;
  v2 = (_QWORD*)(a1 + 112);
  v3 = *(_QWORD**)(a1 + 144);
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
  v5 = *(_QWORD**)(a1 + 96);
  if (v5 == (_QWORD*)(a1 + 64)) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
}

__n128 GambitMoveTo_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_combat_GambitMoveTo_vtable;
  v2 = (_QWORD*)(a1 + 112);
  v3 = *(_QWORD**)(a1 + 144);
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
  v5 = *(_QWORD**)(a1 + 96);
  if (v5 == (_QWORD*)(a1 + 64)) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  v7 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, a1);
}

__attribute__((swiftcall)) void GambitMoveTo_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 12;
  strcpy(a1 + 1, "MoveTo");
}

void game_combat_GambitMoveTo_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                 int* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  long double v26;
  __int64 v27;
  __int64 v28;
  int v29;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  if (*(_BYTE*)(v3 + 56) == 1) {
    v6 = *(_QWORD*)(v4 + 120);
    *(_BYTE*)(v6 + 104) = 1;
    *(_DWORD*)(v6 + 100) = 1036831949;
  }
  v7 = *(_QWORD*)(v3 + 96);
  v8 = 0x0.0p+0f;
  v9 = 0;
  if (v7 != 0) {
    v30_.v30 = v4;
    v29 = v5;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64*,
                                            int*))(*(_QWORD*)v7 + 48LL))(
        (void*)(&v28), v7, &v30_.v30, &v29),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v9 = v28;
  }
  v10 = *(_QWORD*)(v3 + 144);
  if (v10 != 0) {
    LODWORD(v30_.v30) = v5;
    v8 = (*(float (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10,
                                                                  &v30_.v30),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       88, 16, 0),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v12 + 8) = 0;
  v13 = (atomic_ullong*)(v12 + 8);
  *(_QWORD*)(v12 + 16) = 0;
  v14 = v12;
  *(_QWORD*)v12 = GameData_1fe64e0;
  v15 = *(_DWORD*)(v3 + 60);
  *(_BYTE*)(v12 + 40) = 12;
  *(_WORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 64) = v4;
  *(_DWORD*)(v12 + 72) = 0;
  strcpy((char*)(v12 + 41), "MoveTo");
  *(_QWORD*)(v12 + 76) = v9;
  *(_DWORD*)(v12 + 84) = v15;
  *(_QWORD*)(v12 + 24) = game_combat_LegionStackMoveTo_vtable;
  v16 = v12 + 24;
  v17 = *(_QWORD*)(v4 + 112);
  v30_.v30 = v16;
  v30_.v31 = v14;
  atomic_fetch_add_explicit(v13, 1u, memory_order_relaxed);
  GameRoutine_e37f80((signed __int64*)(v17 + 136), *(char**)(v17 + 136),
                     (char*)&v30_.v30),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v19 = v30_.v31;
  if (v30_.v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v18 = std___1___shared_weak_count___release_weak(v19),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8 <= 0x0.0p+0f) {
      return;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(v14, v18),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v14),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v8 <= 0x0.0p+0f) {
      return;
    }
  }
  v20 = fw_memory_HeapManager_Allocate(*v11, 80, 16, 0),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v20 + 8) = 0;
  v21 = (atomic_ullong*)(v20 + 8);
  *(_QWORD*)(v20 + 16) = 0;
  v22 = v20;
  v23 = GameData_212f3d8[0];
  *(_WORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 64) = v4;
  *(_DWORD*)(v20 + 72) = 0;
  *(_QWORD*)v20 = v23 + 2;
  strcpy((char*)(v20 + 40), "\nDelay");
  *(float*)(v20 + 76) = v8;
  *(_QWORD*)(v20 + 24) = game_combat_LegionStackDelay_vtable;
  v24 = v20 + 24;
  v25 = *(_QWORD*)(v4 + 112);
  v30_.v30 = v24;
  v30_.v31 = v22;
  atomic_fetch_add_explicit(v21, 1u, memory_order_relaxed);
  GameRoutine_e37f80((signed __int64*)(v25 + 136), *(char**)(v25 + 136),
                     (char*)&v30_.v30),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v27 = v30_.v31;
  if (v30_.v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v26 = std___1___shared_weak_count___release_weak(v27),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(v22, v26),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v22),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

#pragma GCC visibility pop
