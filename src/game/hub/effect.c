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
__int64 GameHr_14a1390(__int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*Effect_Destructor_ptr[])();
void ProcLoadWait_9a4300_alt1(int) __asm__("ProcLoadWait_9a4300");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

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
  __int64 v14;
  __int64 j;
  _QWORD* v16;
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
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v1 = (__int64*)a1[1];
  v2 = (__int64*)a1[2];
  *a1 = Effect_Destructor_ptr;
  if (v1 != v2) {
    do {
      v4 = *(_QWORD*)*v1;
      if (v4 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(*v1 + 8)) {
        GameHr_14a1390(v1, 1);
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = (__int64*)a1[1];
    for (i = (__int64*)a1[2]; i != v1; i -= 2) {
      v6 = *(i - 1);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
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
      std___1___shared_weak_count___release_weak_alt1(v11);
    }
    v7 = v10 - 40;
    if ((*(_BYTE*)(v10 - 40) & 1) != 0) {
      v12 = *(_QWORD*)(v10 - 24);
      if (v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v13, v12);
      }
    }
  }
  a1[8] = v8;
  v14 = a1[4];
  for (j = a1[5]; j != v14; j -= 64) {
    v16 = *(_QWORD**)(j - 16);
    if ((_QWORD*)(j - 48) == v16) {
      v17 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_33;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
  LABEL_33:
    v18 = *(_QWORD*)(j - 56);
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
  }
  a1[5] = v14;
  ProcLoadWait_9a4300_alt1(4);
  v19 = a1[7];
  if (v19 != 0) {
    v20 = a1[8];
    if (v19 == v20) {
      goto LABEL_50;
    }
    do {
      v21 = v20;
      v22 = *(_QWORD*)(v20 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
      v20 = v21 - 40;
      if ((*(_BYTE*)(v21 - 40) & 1) != 0) {
        v23 = *(_QWORD*)(v21 - 24);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v24, v23);
        }
      }
    } while (v20 != v19);
    v25 = a1[7];
    a1[8] = v19;
    v19 = v25;
    if (v25 != 0) {
    LABEL_50:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v26, v19);
    }
  }
  v27 = a1[4];
  if (v27 == 0) {
    goto LABEL_69;
  }
  v28 = a1[5];
  if (v27 == v28) {
    goto LABEL_66;
  }
  do {
    v29 = *(_QWORD**)(v28 - 16);
    if ((_QWORD*)(v28 - 48) == v29) {
      v30 = 32;
      goto LABEL_61;
    }
    if (v29 != nullptr) {
      v30 = 40;
    LABEL_61:
      (*(void (**)(__int64))(*v29 + v30))((__int64)v29);
    }
    v31 = *(_QWORD*)(v28 - 56);
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
    v28 -= 64;
  } while (v28 != v27);
  v32 = a1[4];
  a1[5] = v27;
  v27 = v32;
  if (v32 != 0) {
  LABEL_66:
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v33, v27);
  }
LABEL_69:
  v34 = a1[1];
  if (v34 != 0) {
    v35 = a1[2];
    if (v34 == v35) {
      goto LABEL_77;
    }
    do {
      v36 = *(_QWORD*)(v35 - 8);
      if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_alt1(v36);
      }
      v35 -= 16;
    } while (v35 != v34);
    v37 = a1[1];
    a1[2] = v34;
    v34 = v37;
    if (v37 != 0) {
    LABEL_77:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v38, v34);
    }
  }
  *a1 = GameData_1fe3200;
  if ((_QWORD*)GameData_21f3d00 == a1) {
    GameData_21f3d00 = 0;
    GameData_2215dbc = 0;
  }
}

#pragma GCC visibility pop
