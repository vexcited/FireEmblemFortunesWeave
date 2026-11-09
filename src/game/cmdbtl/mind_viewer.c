#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7e800(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ea6540(_QWORD);
void __attribute__((noreturn)) GameRoutine_ebd590(_QWORD);
__int64* MindViewer_ed9d60(__int64* result, _QWORD* a2);
__int64 MindViewer_eda030(__int64 a1, __int64* a2);
__int64 MindViewer_eda160(__int64 a1, __int64* a2);
_QWORD* MindViewer_eda380(_QWORD* result, __int64 a2, __int64 a3);

__int64* MindViewer_ed9d60(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v5 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_ea6540(result);
    }
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v11 > v10) {
      v10 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v10 = 0xAAAAAAAAAAAAAAALL;
    }
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(result);
    }
    v12 = 3 * v10;
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v10, 16, 0);
    v15 = a2[1];
    v16 = (_QWORD*)(v14 + v9);
    v17 = v14 + 8 * v12;
    *v16 = *a2;
    v16[1] = v15;
    v18 = a2[2];
    v16[2] = v18;
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v8 = *v5;
      v9 = v5[1] - *v5;
    }
    v19 = (char*)v16 - v9;
    v7 = v16 + 3;
    result = (__int64*)memcpy((char*)v16 - v9, v8, v9);
    *v5 = (__int64)v19;
    v5[1] = (__int64)v7;
    v5[2] = v17;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v8);
    }
  }
  else {
    *v2 = *a2;
    v2[1] = a2[1];
    v6 = a2[2];
    v2[2] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v2 + 3;
  }
  v5[1] = (__int64)v7;
  return result;
}

__int64 MindViewer_eda030(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = GameRoutine_e7e800(v2);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 MindViewer_eda160(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *(_QWORD*)(v3 + 272);
  v4 = *(_QWORD*)(v3 + 280);
  if (v5 != v4) {
    v6 = *(_QWORD*)(v3 + 280);
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v4 - 8);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, v9);
        }
      }
      v4 = v6;
    } while (v6 != v5);
  }
  *(_QWORD*)(v3 + 280) = v5;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

_QWORD* MindViewer_eda380(_QWORD* result, __int64 a2, __int64 a3)
{
  unsigned __int8* v3;
  _QWORD* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v3 = *(unsigned __int8**)(a2 + 16);
  v4 = result;
  if ((*(_BYTE*)a2 & 1) == 0) {
    v3 = (unsigned __int8*)(a2 + 1);
  }
  v7 = *v3;
  v6 = v3 + 1;
  v5 = v7;
  if (v7 != 0) {
    LODWORD(v8) = 0;
    do {
      v8 = (unsigned int)(v5 - v8 + 32 * v8);
      v9 = *v6++;
      v5 = v9;
    } while (v9 != 0);
  }
  else {
    v8 = 0;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v10 = *(unsigned __int8**)(a3 + 16);
  }
  else {
    v10 = (unsigned __int8*)(a3 + 1);
  }
  v13 = *v10;
  v12 = v10 + 1;
  v11 = v13;
  if (v13 != 0) {
    LODWORD(v14) = 0;
    do {
      v14 = (unsigned int)(v11 - v14 + 32 * v14);
      v15 = *v12++;
      v11 = v15;
    } while (v15 != 0);
    v16 = v14 << 32;
  }
  else {
    v16 = 0;
  }
  v18 = (__int64*)result[12];
  v17 = result[13];
  if ((unsigned __int64)v18 >= v17) {
    v20 = result[11];
    v21 = (char*)v18 - v20;
    v22 = ((__int64)v18 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      GameRoutine_ebd590(result);
    }
    v24 = v17 - v20;
    v25 = fw_memory_g_heap_manager_ptr;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v23;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v16 | v8;
    v29 = v27 + 8 * v26;
    v30 = (char*)v18 - v20;
    v31 = (__int64)&v21[v27 + -8 * v22];
    *(_QWORD*)&v21[v27] = v28;
    v19 = (__int64)&v21[v27 + 8];
    result = (_QWORD*)memcpy(v31, v20, v30);
    v4[11] = v31;
    v4[12] = v19;
    v4[13] = v29;
    if (v20 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
        v32 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v32, v20);
    }
  }
  else {
    *v18 = v16 | v8;
    v19 = (__int64)(v18 + 1);
  }
  v4[12] = v19;
  return result;
}

#pragma GCC visibility pop
