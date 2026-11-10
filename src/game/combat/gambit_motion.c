#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fe6640[])();
extern __int64 (*game_combat_GambitMotion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_combat_GambitMotion_Run(__int64 a1);
__n128 GambitMotion_Destructor(__int64 a1);
__n128 GambitMotion_DeletingDestructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_e37f80(signed __int64*, char*, char*);
extern __int64 (*game_combat_LegionStackDelay_vtable[])();
extern __int64 (*game_combat_LegionStackMotion_vtable[])();
extern __int64* GameData_212f3d0[5];
extern __int64* GameData_212f3d8[4];
__attribute__((swiftcall)) void GambitMotion_Unknown3(PSEUDO_X8 x8_);
void game_combat_GambitMotion_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                 int* a3);

__int64 game_combat_GambitMotion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6640;
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

__n128 GambitMotion_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_combat_GambitMotion_vtable;
  v2 = (_QWORD*)(a1 + 144);
  v3 = *(_QWORD**)(a1 + 176);
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
  v6 = *(_QWORD**)(a1 + 128);
  if (v6 == (_QWORD*)(a1 + 96)) {
    v7 = 32;
    goto LABEL_10;
  }
  if (v6 != nullptr) {
    v7 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
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

__n128 GambitMotion_DeletingDestructor(__int64 a1)
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

  *(_QWORD*)a1 = game_combat_GambitMotion_vtable;
  v2 = (_QWORD*)(a1 + 144);
  v3 = *(_QWORD**)(a1 + 176);
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
  v5 = *(_QWORD**)(a1 + 128);
  if (v5 == (_QWORD*)(a1 + 96)) {
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

__attribute__((swiftcall)) void GambitMotion_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 12;
  strcpy(a1 + 1, "Motion");
}

void game_combat_GambitMotion_Run_lambda0_Invoke(__int64 a1, __int64* a2,
                                                 int* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  float v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v33_;
  int v37;

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  v6 = v3[16];
  if (v6 == 0) {
    v7 = 0x0.0p+0f;
    v8 = (__int64*)v3[22];
    if (v8 == nullptr) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  LODWORD(v33_.v33) = *a3;
  v7 = (*(float (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v33_.v33),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = (__int64*)v3[22];
  if (v8 != nullptr) {
  LABEL_3:
    v9 = *v8;
    v37 = v5;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*, int*))(
        v9 + 48))((void*)(&v33_.v33), v8, &v37),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v10 = v33_.v34;
    v3[8] = v33_.v33;
    v3[9] = v10;
    v11 = v33_.v36;
    v3[10] = v33_.v35;
    v3[11] = v11;
  }
LABEL_4:
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       120, 16, 0),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v13 + 8) = 0;
  v14 = (atomic_ullong*)(v13 + 8);
  *(_QWORD*)(v13 + 16) = 0;
  v15 = v13;
  *(_QWORD*)v13 = GameData_212f3d0[0] + 2;
  v16 = v3[7];
  *(_BYTE*)(v13 + 40) = 12;
  *(_WORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 64) = v4;
  *(_DWORD*)(v13 + 72) = 0;
  strcpy((char*)(v13 + 41), "Motion");
  *(_QWORD*)(v13 + 24) = game_combat_LegionStackMotion_vtable;
  v17 = v13 + 24;
  v18 = v3[10];
  v19 = v3[11];
  v21 = v3[8];
  v20 = v3[9];
  *(_QWORD*)(v13 + 108) = v16;
  *(_BYTE*)(v13 + 116) = 0;
  *(_QWORD*)(v13 + 76) = v21;
  *(_QWORD*)(v13 + 100) = v19;
  *(_QWORD*)(v13 + 92) = v18;
  *(_QWORD*)(v13 + 84) = v20;
  v22 = *(_QWORD*)(v4 + 112);
  v33_.v33 = v17;
  v33_.v34 = v15;
  atomic_fetch_add_explicit(v14, 1u, memory_order_relaxed);
  GameRoutine_e37f80((signed __int64*)(v22 + 136), *(char**)(v22 + 136),
                     (char*)&v33_.v33),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v24 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v23 = std___1___shared_weak_count___release_weak(v24),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 <= 0x0.0p+0f) {
      return;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(v15, v23),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v15),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 <= 0x0.0p+0f) {
      return;
    }
  }
  v25 = fw_memory_HeapManager_Allocate(*v12, 80, 16, 0),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v25 + 8) = 0;
  v26 = (atomic_ullong*)(v25 + 8);
  *(_QWORD*)(v25 + 16) = 0;
  v27 = v25;
  v28 = GameData_212f3d8[0];
  *(_WORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 64) = v4;
  *(_DWORD*)(v25 + 72) = 0;
  *(_QWORD*)v25 = v28 + 2;
  strcpy((char*)(v25 + 40), "\nDelay");
  *(float*)(v25 + 76) = v7;
  *(_QWORD*)(v25 + 24) = game_combat_LegionStackDelay_vtable;
  v29 = v25 + 24;
  v30 = *(_QWORD*)(v4 + 112);
  v33_.v33 = v29;
  v33_.v34 = v27;
  atomic_fetch_add_explicit(v26, 1u, memory_order_relaxed);
  GameRoutine_e37f80((signed __int64*)(v30 + 136), *(char**)(v30 + 136),
                     (char*)&v33_.v33),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v32 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v31 = std___1___shared_weak_count___release_weak(v32),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v27 + 16LL))(v27, v31),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v27),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

#pragma GCC visibility pop
