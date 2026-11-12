#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_c52150(PSEUDO_X8, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 (*gfx_light_PointLightActor_vtable[])();
extern __int64 (*gfx_light_SpotLightActor_vtable[])();
extern __int64 GameData_212e9c8[5];
extern __int64 GameData_212e9d0[4];
extern __int64 GameData_212e9d8[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_bcb7a0();
__attribute__((swiftcall)) void eft_bc9d40(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2);
__attribute__((swiftcall)) void eft_bc9e40(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
GameRoutine_c52150_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_c52150");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__attribute__((swiftcall)) void eft_bc9d40(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v3 = *(_QWORD**)(result + 384);
  v4 = *(_QWORD**)(result + 392);
  if (v3 != v4) {
    while (a2 != v3[10]) {
      v3 += 11;
      if (v3 == v4) {
        goto LABEL_11;
      }
    }
  }
  if (v3 == v4) {
  LABEL_11:
    a3[10] = 0;
    a3[2] = 0;
    a3[3] = 0;
    a3[6] = 0;
    a3[7] = 0;
    a3[8] = 0;
    a3[9] = 0;
    *a3 = gfx_light_PointLightActor_vtable;
    a3[1] = 0;
    a3[4] = 0;
    a3[5] = gfx_light_SpotLightActor_vtable;
  }
  else {
    *a3 = gfx_light_Actor_vtable;
    a3[1] = v3[1];
    v5 = v3[2];
    a3[2] = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
    a3[3] = v3[3];
    *a3 = gfx_light_PointLightActor_vtable;
    a3[4] = v3[4];
    a3[5] = gfx_light_Actor_vtable;
    a3[6] = v3[6];
    v6 = v3[7];
    a3[7] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    a3[8] = v3[8];
    a3[5] = gfx_light_SpotLightActor_vtable;
    a3[9] = v3[9];
    a3[10] = v3[10];
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void eft_bc9e40(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
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
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v56_;

  v4 = GameData_212e9c8[0];
  a2[7] = 0;
  a2[8] = 0;
  *a2 = v4 + 16;
  v5 = GameData_212e9d0[0];
  v6 = *(_QWORD*)(a1 + 168);
  a2[9] = 0;
  a2[5] = v5 + 16;
  a2[6] = 0;
  v7 = std___1___shared_weak_count_lock_alt1(v6);
  GameRoutine_c52150_alt1(
      (void*)(&v56_.v56),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 288LL) + 872LL));
  v8 = v56_.v57;
  v9 = v56_.v58;
  if (v56_.v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56_.v58 + 16), 1u,
                              memory_order_relaxed);
    v10 = v56_.v58;
  }
  else {
    v10 = 0;
  }
  a2[1] = v8;
  a2[2] = v9;
  v11 = v56_.v60;
  a2[3] = v56_.v59;
  a2[4] = v11;
  v12 = GameData_212e9d8[0];
  v56_.v57 = 0;
  v56_.v58 = 0;
  v56_.v56 = GameData_212e9d8[0] + 16;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10);
    v56_.v59 = 0;
    if (v56_.v58 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v56_.v58);
    }
  }
  else {
    v56_.v59 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v13 = (unsigned int)(*(_DWORD*)(a1 + 376) + 1);
  v14 = *(_QWORD**)(a1 + 392);
  v15 = *(_QWORD*)(a1 + 400);
  *(_DWORD*)(a1 + 376) = v13;
  a2[10] = v13;
  if ((unsigned __int64)v14 >= v15) {
    v24 = *(_QWORD*)(a1 + 384);
    v25 = (char*)v14 - v24;
    v26 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v14 - v24) >> 3) + 1;
    if (v26 > 0x2E8BA2E8BA2E8BALL) {
      GameRoutine_bcb7a0();
    }
    v27 = fw_memory_g_heap_manager_ptr;
    v28 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v15 - v24) >> 3);
    if (2 * v28 > v26) {
      v26 = 2 * v28;
    }
    if (v28 >= 0x1745D1745D1745DLL) {
      v29 = 0x2E8BA2E8BA2E8BALL;
    }
    else {
      v29 = v26;
    }
    if (v29 != 0) {
      if (v29 > 0x2E8BA2E8BA2E8BALL) {
        GameRoutine_60a210();
      }
      v30 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = a2[2];
    v32 = &v25[v30];
    *((_QWORD*)v32 + 1) = a2[1];
    *((_QWORD*)v32 + 2) = v31;
    if (v31 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)v32 = v4 + 16;
    v33 = a2[4];
    *((_QWORD*)v32 + 3) = a2[3];
    *((_QWORD*)v32 + 4) = v33;
    v34 = a2[7];
    *((_QWORD*)v32 + 6) = a2[6];
    *((_QWORD*)v32 + 7) = v34;
    if (v34 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                memory_order_relaxed);
    }
    v35 = a2[8];
    v36 = a2[9];
    v37 = *(char**)(a1 + 384);
    v38 = *(char**)(a1 + 392);
    v39 = v30 + 88 * v29;
    v40 = v5 + 16;
    v22 = v32 + 88;
    *((_QWORD*)v32 + 10) = v13;
    *((_QWORD*)v32 + 5) = v40;
    *((_QWORD*)v32 + 8) = v35;
    *((_QWORD*)v32 + 9) = v36;
    v41 = &v32[v37 - v38];
    if (v37 != v38) {
      v42 = 0;
      do {
        v46 = &v37[v42];
        v47 = &v41[v42];
        *((_QWORD*)v47 + 1) = *(_QWORD*)&v37[v42 + 8];
        v48 = *(_QWORD*)&v37[v42 + 16];
        *((_QWORD*)v47 + 2) = v48;
        if (v48 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16), 1u,
                                    memory_order_relaxed);
        }
        v49 = *((_QWORD*)v46 + 3);
        *(_QWORD*)v47 = v4 + 16;
        *((_QWORD*)v47 + 3) = v49;
        *((_QWORD*)v47 + 4) = *((_QWORD*)v46 + 4);
        *((_QWORD*)v47 + 5) = v12 + 16;
        *((_QWORD*)v47 + 6) = *((_QWORD*)v46 + 6);
        v50 = *((_QWORD*)v46 + 7);
        *((_QWORD*)v47 + 7) = v50;
        if (v50 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 16), 1u,
                                    memory_order_relaxed);
        }
        v43 = &v37[v42];
        v44 = &v41[v42];
        v42 += 88;
        v45 = *((_QWORD*)v43 + 8);
        *((_QWORD*)v47 + 5) = v40;
        *((_QWORD*)v44 + 8) = v45;
        *((_QWORD*)v44 + 9) = *((_QWORD*)v43 + 9);
        *((_QWORD*)v44 + 10) = *((_QWORD*)v43 + 10);
      } while (&v37[v42] != v38);
      do {
        v51 = *((_QWORD*)v37 + 7);
        *((_QWORD*)v37 + 5) = v12 + 16;
        *((_QWORD*)v37 + 6) = 0;
        *((_QWORD*)v37 + 7) = 0;
        if (v51 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v51);
          v52 = *((_QWORD*)v37 + 7);
          *((_QWORD*)v37 + 8) = 0;
          if (v52 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v52);
          }
        }
        else {
          *((_QWORD*)v37 + 8) = 0;
        }
        v53 = *((_QWORD*)v37 + 2);
        *((_QWORD*)v37 + 2) = 0;
        *(_QWORD*)v37 = v12 + 16;
        *((_QWORD*)v37 + 1) = 0;
        if (v53 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v53);
          v54 = *((_QWORD*)v37 + 2);
          *((_QWORD*)v37 + 3) = 0;
          if (v54 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v54);
          }
        }
        else {
          *((_QWORD*)v37 + 3) = 0;
        }
        v37 += 88;
      } while (v37 != v38);
      v37 = *(char**)(a1 + 384);
    }
    *(_QWORD*)(a1 + 384) = v41;
    *(_QWORD*)(a1 + 392) = v22;
    *(_QWORD*)(a1 + 400) = v39;
    if (v37 != nullptr) {
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v27 + v55, (__int64)v37);
    }
  }
  else {
    v17 = a2[1];
    v16 = a2[2];
    *v14 = v12 + 16;
    v14[1] = v17;
    v14[2] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                memory_order_relaxed);
    }
    *v14 = v4 + 16;
    v18 = a2[4];
    v14[3] = a2[3];
    v14[4] = v18;
    v20 = a2[6];
    v19 = a2[7];
    v14[5] = v12 + 16;
    v14[6] = v20;
    v14[7] = v19;
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
    }
    v21 = v5 + 16;
    v14[10] = v13;
    v22 = v14 + 11;
    v14[5] = v21;
    v23 = a2[9];
    v14[8] = a2[8];
    v14[9] = v23;
  }
  *(_QWORD*)(a1 + 392) = v22;
}

#pragma GCC visibility pop
