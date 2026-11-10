#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(__int64*, char);
__int64 ProcLoadWait_9a4300(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe3190[])();
extern __int64 (*GameData_1fe3200[])();
extern __int64 GameData_21f3d00;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2215dbc;
void Effect_Destructor(_QWORD* a1);

void Effect_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 j;
  _QWORD* v15;
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
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v1 = (__int64*)a1[1];
  v2 = (__int64*)a1[2];
  *a1 = GameData_1fe3190;
  if (v1 != v2) {
    do {
      v4 = *(_QWORD*)*v1;
      if (v4 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(*v1 + 8)) {
        GameRoutine_14a1390(v1, 1);
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = (__int64*)a1[1];
    for (i = (__int64*)a1[2]; i != v1; i -= 2) {
      v6 = *(i - 1);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  a1[2] = v1;
  v8 = a1[7];
  v7 = a1[8];
  v9 = fw_memory_g_heap_manager_ptr;
  while (v7 != v8) {
    v10 = v7;
    v11 = *(_QWORD*)(v7 - 8);
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    v7 = v10 - 40;
    if ((*(_BYTE*)(v10 - 40) & 1) != 0 && *(_QWORD*)(v10 - 24) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v12 = 128;
      }
      else {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12);
    }
  }
  a1[8] = v8;
  v13 = a1[4];
  for (j = a1[5]; j != v13; j -= 64) {
    v15 = *(_QWORD**)(j - 16);
    if ((_QWORD*)(j - 48) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_33;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
  LABEL_33:
    v17 = *(_QWORD*)(j - 56);
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
  }
  a1[5] = v13;
  ProcLoadWait_9a4300(4);
  v18 = a1[7];
  if (v18 != 0) {
    v19 = a1[8];
    if (v18 == v19) {
      goto LABEL_50;
    }
    do {
      v20 = v19;
      v21 = *(_QWORD*)(v19 - 8);
      if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
      v19 = v20 - 40;
      if ((*(_BYTE*)(v20 - 40) & 1) != 0 && *(_QWORD*)(v20 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v22);
      }
    } while (v19 != v18);
    v23 = a1[7];
    a1[8] = v18;
    if (v23 != 0) {
    LABEL_50:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v24);
    }
  }
  v25 = a1[4];
  if (v25 == 0) {
    goto LABEL_69;
  }
  v26 = a1[5];
  if (v25 == v26) {
    goto LABEL_66;
  }
  do {
    v27 = *(_QWORD**)(v26 - 16);
    if ((_QWORD*)(v26 - 48) == v27) {
      v28 = 32;
      goto LABEL_61;
    }
    if (v27 != nullptr) {
      v28 = 40;
    LABEL_61:
      (*(void (**)(__int64))(*v27 + v28))((__int64)v27);
    }
    v29 = *(_QWORD*)(v26 - 56);
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
    v26 -= 64;
  } while (v26 != v25);
  v30 = a1[4];
  a1[5] = v25;
  if (v30 != 0) {
  LABEL_66:
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v31);
  }
LABEL_69:
  v32 = a1[1];
  if (v32 != 0) {
    v33 = a1[2];
    if (v32 == v33) {
      goto LABEL_77;
    }
    do {
      v34 = *(_QWORD*)(v33 - 8);
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v34);
      }
      v33 -= 16;
    } while (v33 != v32);
    v35 = a1[1];
    a1[2] = v32;
    if (v35 != 0) {
    LABEL_77:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v36);
    }
  }
  *a1 = GameData_1fe3200;
  if ((_QWORD*)GameData_21f3d00 == a1) {
    GameData_21f3d00 = 0;
    GameData_2215dbc = 0;
  }
}

#pragma GCC visibility pop
