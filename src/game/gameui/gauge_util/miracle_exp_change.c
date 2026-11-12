#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MiracleExpChange_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MiracleExpChange_Destructor(__int64 a1);
unsigned __int64 MiracleExpChange_Unknown5(__int64 a1);
__int64
MiracleExpChange_Unknown3_alt1(__int64 a1) __asm__("MiracleExpChange_Unknown3");
__int64
MiracleExpChange_Unknown4_alt1(__int64 a1) __asm__("MiracleExpChange_Unknown4");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MiracleExpChange_Unknown3(__int64 a1);
void MiracleExpChange_Unknown4(__int64 a1);

__int64 MiracleExpChange_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;

  if (*(_QWORD*)(a1 + 144) == 0) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 128);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0x0.0p+0f;
        }
      }
      else {
        v4 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak_alt1(v4);
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0x0.0p+0f;
        }
      }
      return 0;
    }
  }
  return result;
}

unsigned __int64 MiracleExpChange_Unknown5(__int64 a1)
{
  __int64 v1;
  _DWORD* v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  signed int v7;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int* v26;
  int v27;
  int v28;
  int v29;

  v1 = *(_QWORD*)(a1 + 144);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_DWORD**)(*(_QWORD*)(v1 + 16) + 24LL);
  v3 = v2[105];
  if (v3 < 1) {
    return 0;
  }
  v4 = v2[100];
  v5 = v3 & 7;
  if ((unsigned int)v3 >= 8) {
    v9 = v2 + 108;
    v10 = 0;
    v7 = 0;
    v11 = -(__int64)(v3 & 0x7FFFFFF8);
    do {
      v12 = *(v9 - 7);
      v13 = *(v9 - 6);
      v10 -= 8;
      v14 = v12 - v4;
      if (v14 <= v7) {
        v14 = v7;
      }
      if (v13 - v12 > v14) {
        v14 = v13 - v12;
      }
      v15 = *(v9 - 5);
      v16 = *(v9 - 4);
      v17 = v15 - v13;
      v18 = v16 - v15;
      if (v17 > v14) {
        v14 = v17;
      }
      if (v18 > v14) {
        v14 = v18;
      }
      v19 = *(v9 - 3);
      v20 = *(v9 - 2);
      v21 = v19 - v16;
      v22 = v20 - v19;
      if (v21 > v14) {
        v14 = v21;
      }
      if (v22 > v14) {
        v14 = v22;
      }
      v23 = *(v9 - 1);
      v24 = v23 - v20;
      if (v23 - v20 <= v14) {
        v24 = v14;
      }
      v25 = *v9;
      v9 += 8;
      v4 = v25;
      v7 = v25 - v23;
      if (v7 <= v24) {
        v7 = v24;
      }
    } while (v11 != v10);
    v6 = -v10;
    if (v5 == 0) {
      return (unsigned int)v7 / 5uLL;
    }
    goto LABEL_26;
  }
  v6 = 0;
  v7 = 0;
  if ((v3 & 7) != 0) {
  LABEL_26:
    v26 = &v2[v6 + 101];
    do {
      v28 = *v26++;
      v27 = v28;
      v29 = v28 - v4;
      if (v29 > v7) {
        v7 = v29;
      }
      --v5;
      v4 = v27;
    } while (v5 != 0);
  }
  return (unsigned int)v7 / 5uLL;
}

void MiracleExpChange_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MiracleExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
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

void MiracleExpChange_Unknown4(__int64 a1)
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

  *(_QWORD*)a1 = game_gameui_GaugeUtil_MiracleExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
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
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
}

#pragma GCC visibility pop
