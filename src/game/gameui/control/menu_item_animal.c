#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_1888840(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20ff810[])();
extern __int64 (*GameData_2101d50[])();
extern __int64 (*game_gameui_control_MenuItemAnimal_vtable[])();
extern __int64 (*ui_control_MenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64* MenuItemAnimal_18952e0(__int64* result);
__int64 MenuItemAnimal_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(_QWORD, _QWORD);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 GameRoutine_18ae4d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItem_188b880(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_21f1e08;
__int64 MenuItemAnimal_1895490(_QWORD* a1, char a2);
__int64 MenuItemAnimal_18955b0(_QWORD* a1, char a2);
__int64 MenuItemAnimal_18956d0(_QWORD* a1, char a2, int a3);
__int64 MenuItemAnimal_18957f0(_QWORD* a1, char a2, int a3);
__int64 MenuItemAnimal_1895910(__int64 result, __int64* a2);

__int64* MenuItemAnimal_18952e0(__int64* result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = (_QWORD*)result[1];
  v1 = result[2];
  v3 = result;
  if ((unsigned __int64)v2 >= v1) {
    v5 = *result;
    v6 = (__int64)v2 - *result;
    v7 = (v6 >> 3) + 1;
    if (v7 >> 61 != 0) {
      GameRoutine_6e5c60(result);
    }
    v8 = v1 - v5;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v8 >> 2 > v7) {
      v7 = v8 >> 2;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    }
    else {
      v11 = 0;
    }
    v12 = v11 + 8 * v10;
    v13 = v11 + v6 - 8 * (v6 >> 3);
    *(_QWORD*)(v11 + v6) = 0;
    v4 = v11 + v6 + 8;
    result = (__int64*)memcpy(v13, v5, v6);
    *v3 = v13;
    v3[1] = v4;
    v3[2] = v12;
    if (v5 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v14 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
    }
  }
  else {
    *v2 = 0;
    v4 = (__int64)(v2 + 1);
  }
  v3[1] = v4;
  return result;
}

__int64 MenuItemAnimal_1895490(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 2, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 32;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemAnimal_18955b0(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 3, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 31;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemAnimal_18956d0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 0, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 30;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 MenuItemAnimal_18957f0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 1, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 29;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 MenuItemAnimal_1895910(__int64 result, __int64* a2)
{
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
  __int64 v45;
  __int64 v46;
  _QWORD v47[2];
  __int64 v48;
  __int64 v49;

  if (*a2 == 0) {
    return result;
  }
  v3 = result;
  v47[0] = "L_MenuItem_Name";
  v47[1] = 15;
  GameRoutine_15d4100((void*)(&v48), result + 88, v47);
  if (v49 != 0) {
    v4 = std___1___shared_weak_count_lock(v49);
    v5 = v48;
    if (v4 != 0) {
      v6 = v48;
    }
    else {
      v6 = 0;
    }
    if (v49 != 0) {
      std___1___shared_weak_count___release_weak(v49);
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v5 + 320);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v5 + 312);
        v9 = *(_QWORD*)(v5 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v10 = std___1___shared_weak_count_lock(v9);
        std___1___shared_weak_count___release_weak(v7);
        if (v10 != 0) {
          if (v8 != 0) {
            v48 = v6;
            v49 = v4;
            if (v4 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0(v8, &v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                std___1___shared_weak_count___release_weak(v4);
              }
            }
            else {
              Element_1885bc0(v8, &v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak(v10);
          }
        }
      }
      v11 = *a2;
      v48 = v6;
      v49 = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0(v11, &v48);
      v12 = v49;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  v47[0] = "L_MenuItem_Skill";
  v47[1] = 16;
  GameRoutine_15d4100((void*)(&v48), v3 + 88, v47);
  if (v49 != 0) {
    v13 = std___1___shared_weak_count_lock(v49);
    if (v13 != 0) {
      v14 = v48;
    }
    else {
      v14 = 0;
    }
    if (v49 != 0) {
      std___1___shared_weak_count___release_weak(v49);
    }
    v15 = *(_QWORD*)(v14 + 320);
    if (v15 == 0) {
      goto LABEL_43;
    }
    goto LABEL_35;
  }
  v14 = 0;
  v13 = 0;
  v15 = *(_QWORD*)((char*)((_QWORD*)0x13CLL) + 4);
  if (*(_QWORD*)((char*)((_QWORD*)0x13CLL) + 4) != 0) {
  LABEL_35:
    v16 = *(_QWORD*)(v14 + 312);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock(v15);
    std___1___shared_weak_count___release_weak(v15);
    if (v17 != 0) {
      if (v16 != 0) {
        v48 = v14;
        v49 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
          Element_1885bc0(v16, &v48);
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak(v13);
          }
        }
        else {
          Element_1885bc0(v16, &v48);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
LABEL_43:
  v18 = *a2;
  v48 = v14;
  v49 = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_18855c0(v18, &v48);
  v19 = v49;
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v47[0] = "L_MenuItem_Attack00";
  v47[1] = 19;
  GameRoutine_15d4100((void*)(&v48), v3 + 88, v47);
  if (v49 != 0) {
    v20 = std___1___shared_weak_count_lock(v49);
    v21 = v48;
    if (v20 != 0) {
      v22 = v48;
    }
    else {
      v22 = 0;
    }
    if (v49 != 0) {
      std___1___shared_weak_count___release_weak(v49);
    }
    if (v22 != 0) {
      v23 = *(_QWORD*)(v21 + 320);
      if (v23 != 0) {
        v24 = *(_QWORD*)(v21 + 312);
        v25 = *(_QWORD*)(v21 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                  memory_order_relaxed);
        v26 = std___1___shared_weak_count_lock(v25);
        std___1___shared_weak_count___release_weak(v23);
        if (v26 != 0) {
          if (v24 != 0) {
            v48 = v22;
            v49 = v20;
            if (v20 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0(v24, &v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak(v20);
              }
            }
            else {
              Element_1885bc0(v24, &v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            std___1___shared_weak_count___release_weak(v26);
          }
        }
      }
      v27 = *a2;
      v48 = v22;
      v49 = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0(v27, &v48);
      v28 = v49;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak(v28);
      }
    }
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  v47[0] = "L_MenuItem_Attack01";
  v47[1] = 19;
  GameRoutine_15d4100((void*)(&v48), v3 + 88, v47);
  if (v49 != 0) {
    v29 = std___1___shared_weak_count_lock(v49);
    v30 = v48;
    if (v29 != 0) {
      v31 = v48;
    }
    else {
      v31 = 0;
    }
    if (v49 != 0) {
      std___1___shared_weak_count___release_weak(v49);
    }
    if (v31 != 0) {
      v32 = *(_QWORD*)(v30 + 320);
      if (v32 != 0) {
        v33 = *(_QWORD*)(v30 + 312);
        v34 = *(_QWORD*)(v30 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                  memory_order_relaxed);
        v35 = std___1___shared_weak_count_lock(v34);
        std___1___shared_weak_count___release_weak(v32);
        if (v35 != 0) {
          if (v33 != 0) {
            v48 = v31;
            v49 = v29;
            if (v29 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0(v33, &v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                std___1___shared_weak_count___release_weak(v29);
              }
            }
            else {
              Element_1885bc0(v33, &v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak(v35);
          }
        }
      }
      v36 = *a2;
      v48 = v31;
      v49 = v29;
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_18855c0(v36, &v48);
      v37 = v49;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
    }
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
  }
  v47[0] = "L_MenuItem_Morph";
  v47[1] = 16;
  GameRoutine_15d4100((void*)(&v48), v3 + 88, v47);
  result = v49;
  if (v49 != 0) {
    v38 = std___1___shared_weak_count_lock(v49);
    v39 = v48;
    result = v49;
    if (v38 != 0) {
      v40 = v48;
    }
    else {
      v40 = 0;
    }
    if (v49 != 0) {
      result = std___1___shared_weak_count___release_weak(v49);
    }
    if (v40 != 0) {
      v41 = *(_QWORD*)(v39 + 320);
      if (v41 != 0) {
        v42 = *(_QWORD*)(v39 + 312);
        v43 = *(_QWORD*)(v39 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                  memory_order_relaxed);
        v44 = std___1___shared_weak_count_lock(v43);
        std___1___shared_weak_count___release_weak(v41);
        if (v44 != 0) {
          if (v42 != 0) {
            v48 = v40;
            v49 = v38;
            if (v38 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                        memory_order_relaxed);
              Element_1885bc0(v42, &v48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
                std___1___shared_weak_count___release_weak(v38);
              }
            }
            else {
              Element_1885bc0(v42, &v48);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
            std___1___shared_weak_count___release_weak(v44);
          }
        }
      }
      v45 = *a2;
      v48 = v40;
      v49 = v38;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                  memory_order_relaxed);
      }
      result = GameRoutine_18855c0(v45, &v48);
      v46 = v49;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        result = std___1___shared_weak_count___release_weak(v46);
      }
    }
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      return std___1___shared_weak_count___release_weak(v38);
    }
  }
  return result;
}

__int64 MenuItemAnimal_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  *(a1 - 9) = game_gameui_control_MenuItemAnimal_vtable;
  v2 = (__int64)(a1 - 9);
  *a1 = GameData_2101d50;
  v3 = a1[130];
  a1[130] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[129];
  a1[129] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[128];
  a1[128] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[127];
  a1[127] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[126];
  a1[126] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  *a1 = GameData_20ff810;
  v8 = a1[123];
  *(a1 - 9) = ui_control_MenuItem_vtable;
  if (v8 != 0) {
    v9 = (_QWORD*)a1[122];
    v10 = a1 + 121;
    v11 = *(_QWORD**)(a1[121] + 8LL);
    *(_QWORD*)(*v9 + 8LL) = v11;
    *v11 = *v9;
    a1[123] = 0;
    if (v9 != a1 + 121) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)v9[1];
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        v9 = v13;
      } while (v13 != v10);
    }
  }
  return Element_1888840(v2);
}

#pragma GCC visibility pop
