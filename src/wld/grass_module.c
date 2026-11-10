#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Scene_a70ec0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fd13f0[])();
extern __int64 (*GameData_1fd15d8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64
GrassModule_Destructor_alt1(_QWORD* a1) __asm__("GrassModule_Destructor");
__int64 GrassModule_Unknown9(__int64 result);
__int64 Scene_a70ec0_alt1(__int64 result,
                          unsigned __int64) __asm__("Scene_a70ec0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GrassModule_Destructor_ptr[])();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GrassModule_Destructor(_QWORD* a1);

void GrassModule_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64* v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;

  *a1 = GrassModule_Destructor_ptr;
  v2 = a1[19];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = a1[18];
      v5 = v3;
      if (v4 != 0) {
        v6 = (unsigned __int64*)a1[6];
        v7 = (unsigned __int64*)a1[7];
        while (v6 != v7) {
          v8 = *v6++;
          Scene_a70ec0_alt1(v4, v8);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  v9 = (__int64*)a1[3];
  v10 = (__int64*)a1[4];
  v50 = a1;
  if (v9 != v10) {
    v11 = game_g_frame_clock_ptr[0];
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (*v9 != 0) {
        v13 = *v11;
        v14 = *v11 + 16592;
        v15 = fw_memory_HeapManager_Allocate_alt1(*v12, 24, 16, 0);
        *(_DWORD*)(v15 + 8) = 2;
        *(_QWORD*)v15 = GameData_1fd15d8;
        v16 = v15;
        v17 = *v9;
        *v9 = 0;
        *(_QWORD*)(v15 + 16) = v17;
        v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 24, 16, 0);
        v18[1] = v14;
        v18[2] = v16;
        v19 = *(_QWORD*)(v13 + 16592);
        *v18 = v19;
        *(_QWORD*)(v19 + 8) = v18;
        *(_QWORD*)(v13 + 16592) = v18;
        ++*(_QWORD*)(v13 + 16608);
      }
      ++v9;
    } while (v9 != v10);
  }
  v20 = v50[37];
  v50[37] = 0;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
  }
  v22 = v50[28];
  if (v22 != 0) {
    v23 = v50[29];
    if (v22 == v23) {
      goto LABEL_27;
    }
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = *(_QWORD*)(v23 - 56);
      if (v25 != 0) {
        *(_QWORD*)(v23 - 48) = v25;
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v26, v25);
      }
      v23 -= 112;
    } while (v23 != v22);
    v27 = v50[28];
    v50[29] = v22;
    v22 = v27;
    if (v27 != 0) {
    LABEL_27:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v22);
    }
  }
  v29 = v50[19];
  if (v29 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v29);
  }
  v30 = v50[15];
  if (v30 != 0) {
    v50[16] = v30;
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
  }
  v32 = v50[12];
  if (v32 != 0) {
    v33 = v50[13];
    if (v32 == v33) {
      goto LABEL_44;
    }
    do {
      v34 = *(_QWORD*)(v33 - 8);
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak_alt1(v34);
      }
      v33 -= 16;
    } while (v33 != v32);
    v35 = v50[12];
    v50[13] = v32;
    v32 = v35;
    if (v35 != 0) {
    LABEL_44:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v32);
    }
  }
  v37 = v50[9];
  if (v37 != 0) {
    v38 = v50[10];
    if (v37 == v38) {
      goto LABEL_55;
    }
    do {
      v39 = *(_QWORD*)(v38 - 8);
      if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        std___1___shared_weak_count___release_weak_alt1(v39);
      }
      v38 -= 16;
    } while (v38 != v37);
    v40 = v50[9];
    v50[10] = v37;
    v37 = v40;
    if (v40 != 0) {
    LABEL_55:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v37);
    }
  }
  v42 = v50[6];
  if (v42 != 0) {
    v50[7] = v42;
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
  }
  v44 = v50[3];
  if (v44 != 0) {
    v45 = (_QWORD*)v50[4];
    if ((_QWORD*)v44 == v45) {
      goto LABEL_69;
    }
    do {
      v47 = *--v45;
      v46 = v47;
      *v45 = 0;
      if (v47 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
      }
    } while (v45 != (_QWORD*)v44);
    v48 = v50[3];
    v50[4] = v44;
    v44 = v48;
    if (v48 != 0) {
    LABEL_69:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v44);
    }
  }
}

__int64 GrassModule_Unknown9(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 32);
  while (v1 != v2) {
    if (*(_QWORD*)v1 != 0) {
      *(_BYTE*)(*(_QWORD*)v1 + 32LL) = 0;
    }
    v1 += 8;
  }
  *(_BYTE*)(result + 313) = 0;
  return result;
}

#pragma GCC visibility pop
