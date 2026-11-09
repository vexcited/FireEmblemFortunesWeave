#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapDrawEffect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapDrawEffect_Destructor(_QWORD* a1);

__int64 MapDrawEffect_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 j;
  __int64 v10;
  __int64 v11;
  __int64 k;
  __int64 v13;
  __int64 v14;
  __int64 m;
  __int64 v16;
  __int64 v17;
  __int64 n;
  __int64 v19;
  __int64 v20;
  __int64 ii;
  __int64 v22;
  __int64 v23;
  __int64 jj;
  __int64 v25;
  __int64 v26;
  __int64 kk;
  __int64 v28;
  __int64 v29;
  __int64 mm;
  __int64 v31;
  __int64 v32;
  __int64 nn;
  __int64 v34;
  __int64 v35;
  __int64 i1;
  __int64 v37;
  __int64 v38;
  __int64 i2;
  __int64 v40;
  __int64 result;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;

  v1 = a1[1];
  v2 = a1[2];
  for (*a1 = game_map_MapDrawEffect_vtable; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  a1[2] = v1;
  v5 = a1[4];
  for (i = a1[5]; i != v5; i -= 16) {
    v7 = *(_QWORD*)(i - 8);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  a1[5] = v5;
  v8 = a1[7];
  for (j = a1[8]; j != v8; j -= 16) {
    v10 = *(_QWORD*)(j - 8);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  a1[8] = v8;
  v11 = a1[10];
  for (k = a1[11]; k != v11; k -= 16) {
    v13 = *(_QWORD*)(k - 8);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  a1[11] = v11;
  v14 = a1[13];
  for (m = a1[14]; m != v14; m -= 16) {
    v16 = *(_QWORD*)(m - 8);
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  a1[14] = v14;
  v17 = a1[16];
  for (n = a1[17]; n != v17; n -= 16) {
    v19 = *(_QWORD*)(n - 8);
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  a1[17] = v17;
  v20 = a1[19];
  for (ii = a1[20]; ii != v20; ii -= 16) {
    v22 = *(_QWORD*)(ii - 8);
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  a1[20] = v20;
  v23 = a1[22];
  for (jj = a1[23]; jj != v23; jj -= 16) {
    v25 = *(_QWORD*)(jj - 8);
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  a1[23] = v23;
  v26 = a1[25];
  for (kk = a1[26]; kk != v26; kk -= 16) {
    v28 = *(_QWORD*)(kk - 8);
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  }
  a1[26] = v26;
  v29 = a1[28];
  for (mm = a1[29]; mm != v29; mm -= 16) {
    v31 = *(_QWORD*)(mm - 8);
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
  }
  a1[29] = v29;
  v32 = a1[31];
  for (nn = a1[32]; nn != v32; nn -= 16) {
    v34 = *(_QWORD*)(nn - 8);
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  a1[32] = v32;
  v35 = a1[34];
  for (i1 = a1[35]; i1 != v35; i1 -= 16) {
    v37 = *(_QWORD*)(i1 - 8);
    if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak(v37);
    }
  }
  a1[35] = v35;
  v38 = a1[37];
  for (i2 = a1[38]; i2 != v38; i2 -= 16) {
    v40 = *(_QWORD*)(i2 - 8);
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
  }
  a1[38] = v38;
  result = nn_os_FinalizeMutex(a1 + 72);
  v42 = a1 - 2;
  v43 = 40;
  do {
    v47 = v43 * 8;
    v43 -= 3;
    v45 = a1[v43];
    if (v45 != 0) {
      v48 = *(_QWORD*)((char*)v42 + v47);
      if (v45 == v48) {
        goto LABEL_81;
      }
      do {
        v49 = *(_QWORD*)(v48 - 8);
        if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          result = std___1___shared_weak_count___release_weak(v49);
        }
        v48 -= 16;
      } while (v48 != v45);
      v44 = a1[v43];
      *(_QWORD*)((char*)v42 + v47) = v45;
      v45 = v44;
      if (v44 != 0) {
      LABEL_81:
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v45);
      }
    }
  } while (v43 != 4);
  v50 = a1[1];
  if (v50 != 0) {
    v51 = a1[2];
    if (v50 == v51) {
      goto LABEL_101;
    }
    do {
      v52 = *(_QWORD*)(v51 - 8);
      if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
        result = std___1___shared_weak_count___release_weak(v52);
      }
      v51 -= 16;
    } while (v51 != v50);
    v53 = a1[1];
    a1[2] = v50;
    v50 = v53;
    if (v53 != 0) {
    LABEL_101:
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v50);
    }
  }
  return result;
}

#pragma GCC visibility pop
