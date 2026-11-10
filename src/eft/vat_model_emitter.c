#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a61a80(__int64, _QWORD*);
__int64 GameRoutine_a64140(__int64 result, long double);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_bf1790(_QWORD);
__int64 ResFile_5e5f00(_QWORD);
__int64 Scene_a70a20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 VATModelEmitter_Unknown2(__int64 a1, __int64* a2);

unsigned __int64 VATModelEmitter_Unknown2(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int16* v25;
  unsigned __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 result;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int16* v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  long double v49;
  __int64 v50;
  __int64 v51;
  int v52;
  _QWORD v53[3];
  int v54;
  int v55;

  v2 = *a2;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      72, 16, 0);
  v7 = *(float*)(v2 + 328);
  v8 = *(_QWORD*)(v2 + 24);
  v9 = v6;
  v10 = *(_QWORD*)(v2 + 80);
  v11 = *(unsigned __int8*)(v2 + 321);
  v12 = a2[2];
  v52 = *(_DWORD*)(a1 + 176);
  v14 = *(_QWORD*)(a1 + 160);
  v13 = *(_QWORD*)(a1 + 168);
  v54 = *(_DWORD*)(v2 + 324);
  v55 = v11;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_BYTE*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v6 + 36) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 44) = 0x3F8000003F800000LL;
  *(_DWORD*)(v6 + 52) = 0x10000;
  GameRoutine_ad7390(v12);
  v15 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v12 + 8) + 592LL));
  v16 = *(_QWORD*)(v15 + 48);
  if (v16 == 0) {
    goto LABEL_17;
  }
  v51 = v15;
  if (v8 != 0) {
    v17 = strlen(v8);
  }
  else {
    v17 = 0;
  }
  v18 = v16 + 8;
  v19 = *(unsigned __int16*)(v16 + 12);
  v20 = v16 + 8 + 16 * v19;
  v21 = *(_DWORD*)v20;
  if (*(_DWORD*)(v16 + 8) < *(_DWORD*)v20) {
    do {
      v24 = (__int64)v21 >> 3;
      if (v17 > v24) {
        v22 = (*(unsigned __int8*)(v8 + v17 + ~v24) >> (v21 & 7)) & 1;
      }
      else {
        v22 = 0;
      }
      v19 = *(unsigned __int16*)(v16 + 12 + 16 * v19 + 2 * v22);
      v23 = v21 < *(_DWORD*)(v18 + 16 * v19);
      v21 = *(_DWORD*)(v18 + 16 * v19);
    } while (v23);
    v20 = v18 + 16 * v19;
  }
  v25 = *(unsigned __int16**)(v20 + 8);
  if (v17 == *v25) {
    v5 = &fw_memory_g_heap_manager;
    if ((unsigned int)memcmp(v25 + 1, v8) != 0 ||
        (~(v26 = v20 - v16 - 24) & 0xFFFFFFFF0LL) == 0) {
    LABEL_17:
      v27 = 0;
      goto LABEL_19;
    }
    v27 = *(_QWORD*)(v51 + 40) + 120LL * (int)(v26 >> 4);
  }
  else {
    v27 = 0;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
LABEL_19:
  v53[0] = v27;
  if (*(_BYTE*)(v12 + 165) == 1) {
    v28 = GameRoutine_ad7390(v12);
    v29 = v12 + 32;
    if ((v28 & 1) == 0) {
      v29 = 0;
    }
  }
  else {
    v29 = 0;
  }
  v53[1] = v29;
  v30 = *v5;
  v53[2] = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 800LL);
  v31 = fw_memory_HeapManager_Allocate(v30, 816, 16, 0);
  GameRoutine_a61a80(v31, v53);
  *(_QWORD*)v9 = v31;
  *(_DWORD*)(v31 + 36) = v52;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v9 + 16) = v14;
    *(_QWORD*)(v9 + 24) = v13;
    v33 = std___1___shared_weak_count_lock(v13);
    if (v33 != 0) {
      v34 = v33;
      if (v14 != 0) {
        *(_QWORD*)(v9 + 8) = Scene_a70a20(v14, v31);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v34);
      }
    }
  }
  else {
    *(_QWORD*)(v9 + 16) = v14;
    *(_QWORD*)(v9 + 24) = 0;
  }
  v35 = *(_QWORD*)v9;
  result = GameRoutine_a64140(*(_QWORD*)v9, v32);
  if (v10 != 0) {
    v37 = *(_QWORD*)(v35 + 168);
    *(_QWORD*)(v9 + 56) = v37;
    v38 = *(_QWORD*)(*(_QWORD*)v37 + 8LL);
    if (v38 == 0) {
      goto LABEL_42;
    }
    result = strlen(v10);
    v39 = v38 + 8;
    v40 = *(unsigned __int16*)(v38 + 12);
    v41 = v38 + 8 + 16 * v40;
    v42 = *(_DWORD*)v41;
    if (*(_DWORD*)(v38 + 8) < *(_DWORD*)v41) {
      do {
        v44 = (__int64)v42 >> 3;
        if (result > v44) {
          v43 = (*(unsigned __int8*)(v10 + result + ~v44) >> (v42 & 7)) & 1;
        }
        else {
          v43 = 0;
        }
        v40 = *(unsigned __int16*)(v38 + 12 + 16 * v40 + 2 * v43);
        v23 = v42 < *(_DWORD*)(v39 + 16 * v40);
        v42 = *(_DWORD*)(v39 + 16 * v40);
      } while (v23);
      v41 = v39 + 16 * v40;
    }
    v45 = *(unsigned __int16**)(v41 + 8);
    if (result == *v45 && (_DWORD)(result = memcmp(v45 + 1, v10)) == 0) {
      v46 = (unsigned __int64)(v41 - v38 - 24) >> 4;
    }
    else {
    LABEL_42:
      LODWORD(v46) = -1;
    }
    *(_DWORD*)(v9 + 64) = v46;
  }
  v47 = v54;
  *(_BYTE*)(v9 + 54) = v55;
  *(_DWORD*)(v9 + 48) = 1056964608;
  *(_BYTE*)(v9 + 52) = 1;
  *(float*)(v9 + 40) = (float)v47 / v7;
  *(float*)(v9 + 44) = v7;
  if (v13 != 0) {
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v48 = *(_QWORD*)(a1 + 472);
  *(_QWORD*)(a1 + 472) = v9;
  if (v48 != 0) {
    GameRoutine_bf1790(v48);
    v50 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v50 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v5 + v50, v49);
  }
  *(_BYTE*)(a1 + 466) = 0;
  return result;
}

#pragma GCC visibility pop
