#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_b6adf0(_QWORD);
__int64 GameRoutine_b78b40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_GlobalEnvTask_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
_QWORD* GlobalEnvTask_Destructor(_QWORD* result);

_QWORD* GlobalEnvTask_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
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

  v1 = result[19];
  result[19] = 0;
  v2 = result;
  *result = gfxa_GlobalEnvTask_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_b6adf0(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = (_QWORD*)v2[15];
  v2[15] = 0;
  if (v5 != nullptr) {
    GameRoutine_6040f0(v5 + 3, game_g_frame_clock + 568);
    v6 = v5[20];
    v5[20] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    v7 = v5[19];
    v5[19] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    GameRoutine_604050(v5 + 3);
    v8 = v5[2];
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v5);
  }
  v10 = v2[14];
  v2[14] = 0;
  if (v10 != 0) {
    GameRoutine_6040f0(v10 + 200, game_g_frame_clock + 568);
    v11 = *(_QWORD*)(v10 + 336);
    *(_QWORD*)(v10 + 336) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = *(_QWORD*)(v10 + 328);
    *(_QWORD*)(v10 + 328) = 0;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    GameRoutine_604050(v10 + 200);
    GameRoutine_b78b40(v10 + 8);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v10);
  }
  v14 = v2[13];
  v2[13] = 0;
  if (v14 != 0) {
    GameRoutine_6040f0(v14 + 200, game_g_frame_clock + 568);
    v15 = *(_QWORD*)(v14 + 336);
    *(_QWORD*)(v14 + 336) = 0;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    }
    v16 = *(_QWORD*)(v14 + 328);
    *(_QWORD*)(v14 + 328) = 0;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
    GameRoutine_604050(v14 + 200);
    GameRoutine_b78b40(v14 + 8);
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v14);
  }
  v18 = v2[12];
  v2[12] = 0;
  if (v18 != 0) {
    GameRoutine_6040f0(v18 + 200, game_g_frame_clock + 568);
    v19 = *(_QWORD*)(v18 + 336);
    *(_QWORD*)(v18 + 336) = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    }
    v20 = *(_QWORD*)(v18 + 328);
    *(_QWORD*)(v18 + 328) = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
    }
    GameRoutine_604050(v18 + 200);
    GameRoutine_b78b40(v18 + 8);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, v18);
  }
  v22 = v2[11];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
  }
  v23 = v2[9];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v2[7];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v2[5];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v25);
    v26 = v2[3];
    if (v26 == 0) {
      return result;
    }
  }
  else {
    v26 = v2[3];
    if (v26 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v26);
  }
  return result;
}

#pragma GCC visibility pop
