#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_174e040(__int64 result, __int64*, __int64, __int64,
                            unsigned int);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_RelianceExpChange_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RelianceExpChange_Destructor(float* a1);
_QWORD* RelianceExpChange_174e380(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                  _QWORD* a4);
__int64 RelianceExpChange_174ea70(__int64 a1, __int64* a2, __int64* a3,
                                  __int64 a4, __int64 a5, unsigned int a6);
__int64 RelianceExpChange_Unknown3_alt1(__int64 a1) __asm__(
    "RelianceExpChange_Unknown3");
__int64 RelianceExpChange_Unknown4_alt1(__int64 a1) __asm__(
    "RelianceExpChange_Unknown4");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceExpChange_Unknown3(__int64 a1);
void RelianceExpChange_Unknown4(__int64 a1);

__int64 RelianceExpChange_Destructor(float* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 result;
  __int64 v5;
  float* v6;
  __int64 v7;

  if (*((_QWORD*)a1 + 16) == 0 || *((_QWORD*)a1 + 17) == 0) {
    return 0;
  }
  v2 = *((_QWORD*)a1 + 19);
  if (v2 == 0) {
    return 0;
  }
  result = std___1___shared_weak_count_lock_alt1(v2);
  if (result == 0) {
    return result;
  }
  v5 = *((_QWORD*)a1 + 18);
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v6 = a1;
    if (v5 != 0) {
      return v6[4] != 0x0.0p+0f;
    }
  }
  else {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    std___1___shared_weak_count___release_weak_alt1(v7);
    v6 = a1;
    if (v5 != 0) {
      return v6[4] != 0x0.0p+0f;
    }
  }
  return 0;
}

_QWORD* RelianceExpChange_174e380(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                  _QWORD* a4)
{
  _QWORD* v5;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  _QWORD* result;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;

  v5 = a1 + 7;
  if (v5 != a2) {
    v8 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)v5 & 1) != 0) {
      v11 = a2[1];
      v12 = (v8 & 1) == 0;
      v13 = v8 >> 1;
      if (v12) {
        v14 = (char*)a2 + 1;
      }
      else {
        v14 = (char*)a2[2];
      }
      if (v12) {
        v15 = v13;
      }
      else {
        v15 = v11;
      }
      GameRoutine_64dde0(v5, v14, v15);
    }
    else if ((v8 & 1) != 0) {
      GameRoutine_64df20(v5, a2[2], a2[1]);
    }
    else {
      v9 = *a2;
      v10 = a2[2];
      v5[1] = a2[1];
      v5[2] = v10;
      *v5 = v9;
    }
  }
  v16 = a1 + 10;
  if (a1 + 10 != a3) {
    v17 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)v16 & 1) != 0) {
      v20 = (v17 & 1) == 0;
      v21 = v17 >> 1;
      if (v20) {
        v22 = (char*)a3 + 1;
      }
      else {
        v22 = (char*)a3[2];
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = a3[1];
      }
      GameRoutine_64dde0(v16, v22, v23);
    }
    else if ((v17 & 1) != 0) {
      GameRoutine_64df20(v16, a3[2], a3[1]);
    }
    else {
      v18 = *a3;
      v19 = a3[2];
      a1[11] = a3[1];
      a1[12] = v19;
      *v16 = v18;
    }
  }
  result = a1 + 13;
  if (a1 + 13 != a4) {
    v25 = *(unsigned __int8*)a4;
    if ((*(_BYTE*)result & 1) != 0) {
      v28 = (v25 & 1) == 0;
      v29 = v25 >> 1;
      if (v28) {
        v30 = (char*)a4 + 1;
      }
      else {
        v30 = (char*)a4[2];
      }
      if (v28) {
        v31 = v29;
      }
      else {
        v31 = a4[1];
      }
      return (_QWORD*)GameRoutine_64dde0(result, v30, v31);
    }
    else if ((v25 & 1) != 0) {
      return (_QWORD*)GameRoutine_64df20(result, a4[2], a4[1]);
    }
    else {
      v26 = *a4;
      v27 = a4[2];
      a1[14] = a4[1];
      a1[15] = v27;
      *result = v26;
    }
  }
  return result;
}

__int64 RelianceExpChange_174ea70(__int64 a1, __int64* a2, __int64* a3,
                                  __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v7;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22[2];

  v7 = a3[1];
  if (v7 != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v7);
    if (v13 != 0) {
      v14 = *a3;
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v13;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
      if (v14 != 0) {
        v17 = *a3;
        v16 = a3[1];
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
        }
        v18 = *(_QWORD*)(a1 + 168);
        *(_QWORD*)(a1 + 160) = v17;
        *(_QWORD*)(a1 + 168) = v16;
        if (v18 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
      }
    }
  }
  v19 = *a2;
  v20 = a2[1];
  v22[0] = v19;
  v22[1] = v20;
  if (v20 == 0) {
    return GameRoutine_174e040(a1, v22, a4, a5, a6);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_174e040(a1, v22, a4, a5, a6);
  return std___1___shared_weak_count___release_weak_alt1(v20);
}

void RelianceExpChange_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_RelianceExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

void RelianceExpChange_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_RelianceExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 120);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 96);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v7);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 72);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v9);
    }
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v11, a1);
}

#pragma GCC visibility pop
