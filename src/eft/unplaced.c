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
  __int64 result;
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
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v53_;

  v4 = GameData_212e9c8[0];
  a2[7] = 0;
  a2[8] = 0;
  *a2 = v4 + 16;
  v5 = GameData_212e9d0[0];
  v6 = *(_QWORD*)(a1 + 168);
  a2[9] = 0;
  a2[5] = v5 + 16;
  a2[6] = 0;
  v7 = std___1___shared_weak_count_lock(v6);
  GameRoutine_c52150(
      (void*)(&v53_.v53),
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 288LL) + 872LL));
  v8 = v53_.v54;
  v9 = v53_.v55;
  if (v53_.v55 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53_.v55 + 16), 1u,
                              memory_order_relaxed);
    result = v53_.v55;
  }
  else {
    result = 0;
  }
  a2[1] = v8;
  a2[2] = v9;
  v11 = v53_.v57;
  a2[3] = v53_.v56;
  a2[4] = v11;
  v12 = GameData_212e9d8[0];
  v53_.v54 = 0;
  v53_.v55 = 0;
  v53_.v53 = GameData_212e9d8[0] + 16;
  if (result != 0) {
    std___1___shared_weak_count___release_weak(result);
    result = v53_.v55;
    v53_.v56 = 0;
    if (v53_.v55 != 0) {
      result = std___1___shared_weak_count___release_weak(v53_.v55);
    }
  }
  else {
    v53_.v56 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
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
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88 * v29, 16, 0);
    }
    else {
      result = 0;
    }
    v30 = a2[2];
    v31 = &v25[result];
    *((_QWORD*)v31 + 1) = a2[1];
    *((_QWORD*)v31 + 2) = v30;
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)v31 = v4 + 16;
    v32 = a2[4];
    *((_QWORD*)v31 + 3) = a2[3];
    *((_QWORD*)v31 + 4) = v32;
    v33 = a2[7];
    *((_QWORD*)v31 + 6) = a2[6];
    *((_QWORD*)v31 + 7) = v33;
    if (v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                memory_order_relaxed);
    }
    v34 = a2[8];
    v35 = a2[9];
    v36 = *(char**)(a1 + 384);
    v37 = *(char**)(a1 + 392);
    v38 = result + 88 * v29;
    v39 = v5 + 16;
    v22 = v31 + 88;
    *((_QWORD*)v31 + 10) = v13;
    *((_QWORD*)v31 + 5) = v39;
    *((_QWORD*)v31 + 8) = v34;
    *((_QWORD*)v31 + 9) = v35;
    v40 = &v31[v36 - v37];
    if (v36 != v37) {
      v41 = 0;
      do {
        v45 = &v36[v41];
        v46 = &v40[v41];
        *((_QWORD*)v46 + 1) = *(_QWORD*)&v36[v41 + 8];
        v47 = *(_QWORD*)&v36[v41 + 16];
        *((_QWORD*)v46 + 2) = v47;
        if (v47 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                                    memory_order_relaxed);
        }
        v48 = *((_QWORD*)v45 + 3);
        *(_QWORD*)v46 = v4 + 16;
        *((_QWORD*)v46 + 3) = v48;
        *((_QWORD*)v46 + 4) = *((_QWORD*)v45 + 4);
        *((_QWORD*)v46 + 5) = v12 + 16;
        *((_QWORD*)v46 + 6) = *((_QWORD*)v45 + 6);
        v49 = *((_QWORD*)v45 + 7);
        *((_QWORD*)v46 + 7) = v49;
        if (v49 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                    memory_order_relaxed);
        }
        v42 = &v36[v41];
        v43 = &v40[v41];
        v41 += 88;
        v44 = *((_QWORD*)v42 + 8);
        *((_QWORD*)v46 + 5) = v39;
        *((_QWORD*)v43 + 8) = v44;
        *((_QWORD*)v43 + 9) = *((_QWORD*)v42 + 9);
        *((_QWORD*)v43 + 10) = *((_QWORD*)v42 + 10);
      } while (&v36[v41] != v37);
      do {
        v50 = *((_QWORD*)v36 + 7);
        *((_QWORD*)v36 + 5) = v12 + 16;
        *((_QWORD*)v36 + 6) = 0;
        *((_QWORD*)v36 + 7) = 0;
        if (v50 != 0) {
          std___1___shared_weak_count___release_weak(v50);
          v51 = *((_QWORD*)v36 + 7);
          *((_QWORD*)v36 + 8) = 0;
          if (v51 != 0) {
            std___1___shared_weak_count___release_weak(v51);
          }
        }
        else {
          *((_QWORD*)v36 + 8) = 0;
        }
        result = *((_QWORD*)v36 + 2);
        *((_QWORD*)v36 + 2) = 0;
        *(_QWORD*)v36 = v12 + 16;
        *((_QWORD*)v36 + 1) = 0;
        if (result != 0) {
          std___1___shared_weak_count___release_weak(result);
          result = *((_QWORD*)v36 + 2);
          *((_QWORD*)v36 + 3) = 0;
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
          }
        }
        else {
          *((_QWORD*)v36 + 3) = 0;
        }
        v36 += 88;
      } while (v36 != v37);
      v36 = *(char**)(a1 + 384);
    }
    *(_QWORD*)(a1 + 384) = v40;
    *(_QWORD*)(a1 + 392) = v22;
    *(_QWORD*)(a1 + 400) = v38;
    if (v36 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v52 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v52);
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
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
