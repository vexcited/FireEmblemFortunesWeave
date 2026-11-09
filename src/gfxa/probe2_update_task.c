#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_b47f40(_QWORD);
__int64 GameRoutine_b6adf0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_Probe2UpdateTask_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 Probe2UpdateTask_Destructor(_QWORD* a1);
_QWORD* Probe2UpdateTask_b47f40(_QWORD* result);

__int64 Probe2UpdateTask_Destructor(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
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
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *a1 = gfxa_Probe2UpdateTask_vtable;
  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 26, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 10, *v2 + 568);
  v3 = (_QWORD*)a1[62];
  v4 = fw_memory_g_heap_manager_ptr;
  while (v3 != nullptr) {
    v6 = v3;
    v3 = (_QWORD*)*v3;
    v7 = v6[11];
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v6 = v8;
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v5 = 128;
    }
    else {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, v6);
  }
  v9 = a1[60];
  a1[60] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v9);
  }
  v11 = a1[59];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_b47f40(a1[56]);
  v12 = a1[53];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = a1[51];
  a1[51] = 0;
  if (v13 != 0) {
    GameRoutine_b6adf0(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
  }
  v15 = a1[50];
  a1[50] = 0;
  if (v15 != 0) {
    GameRoutine_b6adf0(v15);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, v15);
  }
  v17 = a1[49];
  a1[49] = 0;
  if (v17 != 0) {
    GameRoutine_b6adf0(v17);
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18, v17);
  }
  v19 = (_QWORD*)a1[46];
  if (v19 != nullptr) {
    v20 = (_QWORD*)a1[47];
    if (v19 == v20) {
      goto LABEL_41;
    }
    do {
      v21 = *(v20 - 6);
      *(v20 - 6) = 0;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      v23 = *(v20 - 7);
      v20 -= 7;
      v22 = v23;
      *v20 = 0;
      if (v23 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
      }
    } while (v20 != v19);
    v24 = (_QWORD*)a1[46];
    a1[47] = v19;
    v19 = v24;
    if (v24 != nullptr) {
    LABEL_41:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v25, v19);
    }
  }
  v26 = a1[45];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[43];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_604050(a1 + 26);
  result = GameRoutine_604050(a1 + 10);
  v29 = a1[9];
  a1[9] = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30, v29);
  }
  v31 = a1[8];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  v32 = a1[5];
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    result = std___1___shared_weak_count___release_weak(v32);
    v33 = a1[3];
    if (v33 == 0) {
      return result;
    }
  }
  else {
    v33 = a1[3];
    if (v33 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    return std___1___shared_weak_count___release_weak(v33);
  }
  return result;
}

_QWORD* Probe2UpdateTask_b47f40(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    Probe2UpdateTask_b47f40(*result);
    Probe2UpdateTask_b47f40(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

#pragma GCC visibility pop
