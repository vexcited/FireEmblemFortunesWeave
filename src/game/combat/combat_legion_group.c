#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_combat_CombatLegionGroup_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* CombatLegionGroup_Destructor(_QWORD* result);
__int64 memcmp(_QWORD, _QWORD);
float CombatLegionGroup_e58940(__int64 a1, __int64 a2);
__int64 CombatLegionGroup_e58ae0(__int64 a1, __int64 a2, __int64 a3);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_e56ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fe6cf0[])();
extern __int64 (*GameData_1fe6d40[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_e3e720(__int64, __int64*, __int64, __int64, unsigned __int64,
                        char, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_e58e80(_QWORD, long double);
_QWORD* game_combat_CombatLegionGroup_AddCharacter(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   unsigned __int64 a5,
                                                   long double a6);

_QWORD* CombatLegionGroup_Destructor(_QWORD* result)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
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

  v1 = (__int64*)result[8];
  v2 = (__int64*)result[9];
  v3 = result;
  *result = game_combat_CombatLegionGroup_vtable;
  if (v1 != v2) {
    do {
      v5 = *v1;
      v6 = *(_QWORD*)(*v1 + 48);
      if (v6 == 0 || (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v5 + 56) == 0)
                                               : (v7 = true),
                      v7)) {
        v4 = 0;
      }
      else {
        v4 = *(_QWORD*)(v5 + 8);
      }
      v25 = v4;
      result = (_QWORD*)GameRoutine_a867a0(&v25);
      ++v1;
    } while (v1 != v2);
    v1 = (__int64*)v3[8];
  }
  v8 = v3[11];
  v9 = v3[2];
  v10 = v3[3];
  v3[9] = v1;
  v3[12] = v8;
  if (v9 != v10) {
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak();
      }
      v10 -= 16;
    } while (v10 != v9);
    v8 = v3[11];
  }
  v3[3] = v9;
  if (v8 != 0) {
    v12 = fw_memory_g_heap_manager;
    v3[12] = v8;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v12 + v13);
  }
  v14 = v3[8];
  if (v14 != 0) {
    v15 = fw_memory_g_heap_manager;
    v3[9] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = v3[5];
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v3[6] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19);
  }
  v20 = v3[2];
  if (v20 != 0) {
    v21 = v3[3];
    if (v20 == v21) {
      goto LABEL_39;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak();
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = v3[2];
    v3[3] = v20;
    if (v23 != 0) {
    LABEL_39:
      v24 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v24 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                    v24);
    }
  }
  return result;
}

float CombatLegionGroup_e58940(__int64 a1, __int64 a2)
{
  unsigned __int8* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int8** v5;
  unsigned __int8** v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  int v16;
  _BOOL4 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;

  v3 = *(unsigned __int8*)(a2 + 152);
  v4 = (v3 & 1) == 0;
  v5 = *(unsigned __int8***)(a1 + 16);
  v6 = *(unsigned __int8***)(a1 + 24);
  v7 = v3 >> 1;
  if (v4) {
    v8 = a2 + 153;
  }
  else {
    v8 = *(_QWORD*)(a2 + 168);
  }
  if (v4) {
    v9 = v7;
  }
  else {
    v9 = *(_QWORD*)(a2 + 160);
  }
  if (v5 == v6) {
    goto LABEL_32;
  }
  while (1) {
    v12 = *v5;
    v11 = v5[1];
    if (v11 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v13 = *v12;
    v14 = *((_QWORD*)v12 + 1);
    if ((v13 & 1) == 0) {
      v14 = v13 >> 1;
    }
    if (v9 != v14) {
      v17 = false;
      if (v11 == nullptr) {
        goto LABEL_23;
      }
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int8*))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak();
      }
      goto LABEL_23;
    }
    if ((v13 & 1) != 0) {
      v15 = *((unsigned __int8**)v12 + 2);
    }
    else {
      v15 = v12 + 1;
    }
    v16 = memcmp(v8, v15);
    v17 = v16 == 0;
    if (v16 == 0) {
      v2 = v12;
    }
    if (v11 != nullptr) {
      goto LABEL_21;
    }
  LABEL_23:
    if (v17) {
      break;
    }
    v5 += 2;
    if (v5 == v6) {
      goto LABEL_32;
    }
  }
  if (v2 == nullptr) {
  LABEL_32:
    LODWORD(v23) = 0;
    v22 = 0;
    return (float)((float)v22 / (float)(int)v23) * 10000.0;
  }
  v18 = *((__int64**)v2 + 3);
  v19 = *((_QWORD*)v2 + 4) - (_QWORD)v18;
  if (v19 != 0) {
    v20 = 0;
    while (1) {
      v21 = *v18;
      v18 += 2;
      if (a2 == v21) {
        break;
      }
      if (v19 >> 4 == ++v20) {
        goto LABEL_31;
      }
    }
    v22 = v20;
  }
  else {
  LABEL_31:
    v22 = 0;
  }
  v23 = (unsigned __int64)v19 >> 4;
  return (float)((float)v22 / (float)(int)v23) * 10000.0;
}

__int64 CombatLegionGroup_e58ae0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8* v3;
  unsigned __int8** v4;
  unsigned __int8** v5;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  int v13;
  _BOOL4 v14;

  v4 = *(unsigned __int8***)(a1 + 16);
  v5 = *(unsigned __int8***)(a1 + 24);
  if (v4 == v5) {
    return 0;
  }
  while (1) {
    v9 = *v4;
    v8 = v4[1];
    if (v8 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *v9;
    v11 = *((_QWORD*)v9 + 1);
    if ((v10 & 1) == 0) {
      v11 = v10 >> 1;
    }
    if (a3 != v11) {
      v14 = false;
      if (v8 == nullptr) {
        goto LABEL_17;
      }
    LABEL_15:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int8*))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak();
      }
      goto LABEL_17;
    }
    if ((v10 & 1) != 0) {
      v12 = *((unsigned __int8**)v9 + 2);
    }
    else {
      v12 = v9 + 1;
    }
    v13 = memcmp(a2, v12);
    v14 = v13 == 0;
    if (v13 == 0) {
      v3 = v9;
    }
    if (v8 != nullptr) {
      goto LABEL_15;
    }
  LABEL_17:
    if (v14) {
      break;
    }
    v4 += 2;
    if (v4 == v5) {
      return 0;
    }
  }
  if (v3 != nullptr) {
    return (*((_QWORD*)v3 + 4) - *((_QWORD*)v3 + 3)) >> 4;
  }
  return 0;
}

_QWORD* game_combat_CombatLegionGroup_AddCharacter(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   unsigned __int64 a5,
                                                   long double a6)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  atomic_ullong* v18;
  __int64 v19;
  long double v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v36;
  _QWORD v37[2];
  __int64 v38[3];
  int v39;
  __int64* v40;

  v38[0] = (__int64)GameData_1fe6d40;
  v40 = v38;
  v10 = GameRoutine_10784f0(a2, 3, v38, a6);
  if (v40 == v38) {
    v11 = 32;
  }
  else {
    if (v40 == nullptr) {
      goto LABEL_6;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v40 + v11))((__int64)v40);
LABEL_6:
  v13 = a1[11];
  v12 = a1[12];
  v38[0] = v10;
  v38[1] = 0;
  v38[2] = a3;
  v39 = 0;
  v14 = (v12 - v13) >> 3;
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 272,
                                                16, 0);
  v16 = v15 + 4;
  v17 = v15;
  v15[2] = 0;
  *v15 = GameData_1fe6cf0;
  v15[1] = 0;
  v18 = (atomic_ullong*)(v15 + 1);
  GameRoutine_e3e720((__int64)(v15 + 4), v38, (__int64)a1, a4, a5, 1, v14);
  v22 = (_QWORD*)a1[9];
  v21 = a1[10];
  if ((unsigned __int64)v22 >= v21) {
    v24 = a1[8];
    v36 = a5;
    v25 = (char*)v22 - v24;
    v26 = ((__int64)v22 - v24) >> 3;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
      GameRoutine_e58e80(v19, v20);
    }
    v28 = v21 - v24;
    if (v28 >> 2 > v27) {
      v27 = v28 >> 2;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
      v29 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        GameRoutine_60a210(v19);
      }
      v30 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v29;
    v32 = (char*)v22 - v24;
    v33 = (__int64)&v25[v30 + -8 * v26];
    *(_QWORD*)&v25[v30] = v16;
    v23 = (__int64)&v25[v30 + 8];
    memcpy(v33, v24, v32);
    a1[8] = v33;
    a1[9] = v23;
    a1[10] = v31;
    if (v24 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v24);
    }
    a5 = v36;
  }
  else {
    *v22 = v16;
    v23 = (__int64)(v22 + 1);
  }
  a1[9] = v23;
  v37[0] = v16;
  v37[1] = v17;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 1), 1u,
                            memory_order_relaxed);
  GameRoutine_e56ec0(a1, v37, a4, a5);
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      return v16;
    }
  LABEL_27:
    (*(void (**)(_QWORD*))(*v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    return v16;
  }
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    goto LABEL_27;
  }
  return v16;
}

#pragma GCC visibility pop
