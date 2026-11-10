#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2107d08[])();
extern __int64 GameData_21ed098;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226b670;
__int64 MapBattleHUD_Destructor(_QWORD* a1);
__int64 GameRoutine_18c0480(__int64, int);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_18c70b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* MapBattleHUD_18c47d0(__int64* result);
__int64 game_map_MapBattleHUD_DamagePopupFactory_lambda9_Invoke(__int64 a1,
                                                                __int64* a2);

__int64 MapBattleHUD_Destructor(_QWORD* a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  __int64 v33;

  GameRoutine_155e140(a1 + 3);
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
    v3 = a1[2];
    a1[1] = 0;
    a1[2] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v4 = a1[44];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = a1[45];
    if (v4 == v6) {
      goto LABEL_12;
    }
    do {
      v7 = *(_QWORD*)(v6 - 8);
      if (v7 != 0) {
        std___1___shared_weak_count___release_weak(v7);
      }
      v6 -= 16;
    } while (v6 != v4);
    v8 = a1[44];
    a1[45] = v4;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
    }
  }
  v10 = a1[29];
  if (v10 != 0) {
    v11 = a1[30];
    if (v10 == v11) {
      goto LABEL_22;
    }
    do {
      v12 = *(_QWORD*)(v11 - 8);
      if (v12 != 0) {
        std___1___shared_weak_count___release_weak(v12);
      }
      v11 -= 16;
    } while (v11 != v10);
    v13 = a1[29];
    a1[30] = v10;
    if (v13 != 0) {
    LABEL_22:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14);
    }
  }
  v15 = (_QWORD*)a1[26];
  while (v15 != nullptr) {
    v19 = v15;
    v15 = (_QWORD*)*v15;
    v20 = v19[3];
    if (v20 != 0) {
      v21 = v19[4];
      if (v20 == v21) {
        goto LABEL_28;
      }
      do {
        v22 = *(_QWORD*)(v21 - 8);
        if (v22 != 0) {
          std___1___shared_weak_count___release_weak(v22);
        }
        v21 -= 16;
      } while (v21 != v20);
      v16 = v19[3];
      v19[4] = v20;
      if (v16 != 0) {
      LABEL_28:
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v17);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
      v18 = 128;
    }
    else {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v18);
  }
  v23 = a1[24];
  a1[24] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v24);
  }
  v25 = (_QWORD*)a1[21];
  if (v25 != nullptr) {
    do {
      v27 = (_QWORD*)*v25;
      v28 = v25[4];
      if (v28 != 0) {
        std___1___shared_weak_count___release_weak(v28);
      }
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v26 = 128;
      }
      else {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v26);
      v25 = v27;
    } while (v27 != nullptr);
  }
  v29 = a1[19];
  a1[19] = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v30);
  }
  GameRoutine_155e140(a1 + 3);
  v31 = a1[15];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  GameRoutine_1564060(a1 + 9);
  GameRoutine_1563f90(a1 + 6, a1[7]);
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v33 = a1[2];
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    result = std___1___shared_weak_count___release_weak(v33);
  }
  *a1 = GameData_2107d08;
  if ((_QWORD*)GameData_21ed098 == a1) {
    GameData_21ed098 = 0;
    GameData_226b670 = 0;
  }
  return result;
}

__int64* MapBattleHUD_18c47d0(__int64* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;

  v1 = (_QWORD*)GameData_21ed098;
  if (GameData_21ed098 != 0) {
    v3 = *result;
    v2 = result[1];
    if (v2 != 0) {
      v4 = (_QWORD*)(GameData_21ed098 + 360);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = (_QWORD*)v1[45];
      v6 = v1[46];
      if ((unsigned __int64)v5 < v6) {
        *v5 = v3;
        v5[1] = v2;
        v7 = v5 + 2;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
        goto LABEL_20;
      }
    }
    else {
      v5 = *(_QWORD**)(GameData_21ed098 + 360);
      v6 = *(_QWORD*)(GameData_21ed098 + 368);
      v4 = (_QWORD*)(GameData_21ed098 + 360);
      if ((unsigned __int64)v5 < v6) {
        *v5 = v3;
        v5[1] = 0;
        v7 = v5 + 2;
      LABEL_20:
        *v4 = v7;
        if (v2 != 0) {
          return (__int64*)std___1___shared_weak_count___release_weak(v2);
        }
        return result;
      }
    }
    v8 = v1[44];
    v9 = (__int64)v5 - v8;
    v10 = ((__int64)v5 - v8) >> 4;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
      GameRoutine_18c70b0();
    }
    v12 = v6 - v8;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v11;
    }
    if (v13 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v13, 16, 0);
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 16 * v13;
    *v16 = v3;
    v16[1] = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v8 = v1[44];
      v9 = v1[45] - v8;
      v10 = v9 >> 4;
    }
    v18 = &v16[-2 * v10];
    v7 = v16 + 2;
    result = (__int64*)memcpy(v18, v8, v9);
    v1[44] = v18;
    v1[45] = v7;
    v1[46] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19);
    }
    goto LABEL_20;
  }
  return result;
}

__int64 game_map_MapBattleHUD_DamagePopupFactory_lambda9_Invoke(__int64 a1,
                                                                __int64* a2)
{
  _DWORD* v2;
  __int64 v3;
  int v4;

  v2 = *(_DWORD**)(a1 + 8);
  v3 = *a2;
  if ((*v2 & 0x400) != 0) {
    v4 = 1;
  }
  else {
    v4 = -1;
  }
  return GameRoutine_18c0480(v3, v4);
}

#pragma GCC visibility pop
