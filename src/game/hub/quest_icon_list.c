#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1038880(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18f4a00(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 (*game_hub_QuestIconList_vtable[])();
extern __int64 GameData_21c9f40;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 QuestIconList_Unknown2(__int64 a1, __int64* a2);
__int64 QuestIconList_1037620(unsigned __int8* a1, __int64 a2);
__int64 QuestIconList_Destructor(_QWORD* a1);

__int64 QuestIconList_Unknown2(__int64 a1, __int64* a2)
{
  __int64 i;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
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
  _BYTE v36[264];

  v3 = *(_QWORD*)(a1 + 24);
  v4 = *(_QWORD*)(a1 + 32);
  for (i = a1 + 24; v4 != v3; v4 -= 64) {
    v18 = *(_QWORD*)(v4 - 40);
    if (v18 != 0) {
      std___1___shared_weak_count___release_weak(v18);
    }
  }
  *(_QWORD*)(a1 + 32) = v3;
  v8 = *a2;
  v7 = a2[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v8;
  *(_QWORD*)(a1 + 16) = v7;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v11 = *a2;
      v12 = result;
      if (v11 == 0 || *(int*)(a1 + 76) < 1) {
      LABEL_44:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          return std___1___shared_weak_count___release_weak(v12);
        }
        return result;
      }
      sprintf(v36, "L_Quest%d", 0);
      GameRoutine_1560070(&v29, v11, v36);
      result = v30;
      if (v30 != 0) {
        v13 = std___1___shared_weak_count_lock(v30);
        v14 = v29;
        result = v30;
        if (v30 != 0) {
          result = std___1___shared_weak_count___release_weak(v30);
        }
        if (v13 != 0 && v14 != 0) {
          v15 = ui_LayoutAccessor_FindPane(v11, v36);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v29 = v15;
          v30 = 0;
          v31 = v14;
          v32 = v13;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v16 = *(__int64**)(a1 + 32);
          if ((unsigned __int64)v16 >= *(_QWORD*)(a1 + 40)) {
            v19 = GameRoutine_1038880(i, &v29);
            v20 = v32;
            *(_QWORD*)(a1 + 32) = v19;
            if (v20 != 0) {
              std___1___shared_weak_count___release_weak(v20);
            }
          }
          else {
            v17 = v29;
            v16[3] = v13;
            v16[4] = 0;
            *v16 = v17;
            v16[1] = v30;
            v16[2] = v14;
            v31 = 0;
            v32 = 0;
            v16[6] = v34;
            v16[7] = v35;
            *(_QWORD*)(a1 + 32) = v16 + 8;
          }
          result = std___1___shared_weak_count___release_weak(v13);
        }
        else if (v13 == 0) {
          goto LABEL_27;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          result = std___1___shared_weak_count___release_weak(v13);
        }
      }
    LABEL_27:
      if (*(int*)(a1 + 76) >= 2) {
        v21 = 1;
        while (1) {
          sprintf(v36, "L_Quest%d", v21);
          GameRoutine_1560520(v11, "L_Quest0", "N_Quest", v36);
          GameRoutine_1560070(&v29, v11, v36);
          result = v30;
          if (v30 != 0) {
            v22 = std___1___shared_weak_count_lock(v30);
            v23 = v29;
            result = v30;
            if (v30 != 0) {
              result = std___1___shared_weak_count___release_weak(v30);
            }
            if (v22 != 0 && v23 != 0) {
              v24 = ui_LayoutAccessor_FindPane(v11, v36);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                        memory_order_relaxed);
              v29 = v24;
              v30 = 0;
              v31 = v23;
              v32 = v22;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                        memory_order_relaxed);
              v33 = 0;
              v34 = 0;
              v35 = 0;
              v25 = *(__int64**)(a1 + 32);
              if ((unsigned __int64)v25 >= *(_QWORD*)(a1 + 40)) {
                v27 = GameRoutine_1038880(i, &v29);
                v28 = v32;
                *(_QWORD*)(a1 + 32) = v27;
                if (v28 != 0) {
                  std___1___shared_weak_count___release_weak(v28);
                }
              }
              else {
                v26 = v29;
                v25[3] = v22;
                v25[4] = 0;
                *v25 = v26;
                v25[1] = v30;
                v25[2] = v23;
                v31 = 0;
                v32 = 0;
                v25[6] = v34;
                v25[7] = v35;
                *(_QWORD*)(a1 + 32) = v25 + 8;
              }
              result = std___1___shared_weak_count___release_weak(v22);
            LABEL_42:
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                result = std___1___shared_weak_count___release_weak(v22);
              }
              goto LABEL_29;
            }
            if (v22 != 0) {
              goto LABEL_42;
            }
          }
        LABEL_29:
          if (++v21 >= *(_DWORD*)(a1 + 76)) {
            goto LABEL_44;
          }
        }
      }
      goto LABEL_44;
    }
  }
  return result;
}

__int64 QuestIconList_1037620(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  _QWORD v50[2];
  char* v51;

  v2 = a1[24];
  if ((v2 & 1) != 0) {
    v3 = *((_QWORD*)a1 + 4);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(a2 + 8);
    v5 = *(_QWORD*)(a2 + 16);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != v3 ||
        ((v4 & 1) != 0 ? (v8 = *(_QWORD*)(a2 + 24)) : (v8 = a2 + 9),
         (v2 & 1) != 0 ? (v9 = *((unsigned __int8**)a1 + 5)) : (v9 = a1 + 25),
         (unsigned int)memcmp(v8, v9) != 0)) {
      v10 = *(unsigned __int8*)(GameData_21f3d10 + 40);
      v11 = (v10 & 1) == 0;
      v12 = v10 >> 1;
      if (v11) {
        v13 = v12;
      }
      else {
        v13 = *(_QWORD*)(GameData_21f3d10 + 48);
      }
      if (v11) {
        v14 = GameData_21f3d10 + 41;
      }
      else {
        v14 = *(_QWORD*)(GameData_21f3d10 + 56);
      }
      v15 = v13 + 1;
      if (v13 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0();
      }
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v18 = 26;
        }
        else {
          v18 = (v15 | 7) + 1;
        }
        v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v18, 16, 0);
        v48 = v13 + 1;
        v49 = v16;
        v47 = v18 | 1;
      }
      else {
        v48 = 0;
        v49 = nullptr;
        v47 = (unsigned __int8)(2 * v15);
        v16 = (char*)&v47 + 1;
        if (v13 == 0) {
          goto LABEL_31;
        }
      }
      memmove(v16, v14, v13);
    LABEL_31:
      *(_WORD*)&v16[v13] = 95;
      v19 = *a1;
      v20 = (v19 & 1) == 0;
      v21 = v19 >> 1;
      if (v20) {
        v22 = a1 + 1;
      }
      else {
        v22 = *((unsigned __int8**)a1 + 2);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *((_QWORD*)a1 + 1);
      }
      v24 = (_QWORD*)GameRoutine_1a09ce0(&v47, v22, v23);
      v26 = v24[1];
      v25 = (char*)v24[2];
      v50[0] = *v24;
      v50[1] = v26;
      v51 = v25;
      v24[1] = 0;
      v24[2] = 0;
      *v24 = 0;
      if ((v47 & 1) != 0 && v49 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v27);
      }
      if ((v50[0] & 1) != 0) {
        v28 = v51;
      }
      else {
        v28 = (char*)v50 + 1;
      }
      v29 = game_HashString(v28);
      if (v29 == 0) {
        goto LABEL_87;
      }
      v30 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v30 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
        goto LABEL_87;
      }
      v32 = v30 - 1;
      if ((v30 & (v30 - 1)) != 0) {
        v33 = v29;
        if (v29 >= v30) {
          v33 = v29 % v30;
        }
      }
      else {
        v33 = v32 & v29;
      }
      v34 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v33);
      if (v34 == nullptr) {
        goto LABEL_87;
      }
      v35 = (_QWORD*)*v34;
      if (v35 == nullptr) {
        goto LABEL_87;
      }
      if ((v30 & v32) == 0) {
        while (1) {
          v37 = v35[1];
          if (v37 == v29) {
            if (v35[2] == v29) {
              goto LABEL_70;
            }
          }
          else if ((v37 & v32) != v33) {
            goto LABEL_87;
          }
          v35 = (_QWORD*)*v35;
          LODWORD(v17) = 0;
          if (v35 == nullptr) {
            goto LABEL_88;
          }
        }
      }
      while (1) {
        v36 = v35[1];
        if (v36 == v29) {
          break;
        }
        if (v36 >= v30) {
          v36 %= v30;
        }
        if (v36 != v33) {
          goto LABEL_87;
        }
      LABEL_59:
        v35 = (_QWORD*)*v35;
        if (v35 == nullptr) {
          goto LABEL_87;
        }
      }
      if (v35[2] != v29) {
        goto LABEL_59;
      }
    LABEL_70:
      v17 = v35[3];
      if (v17 != 0) {
        v38 = *(unsigned __int8*)(a2 + 8);
        if ((v38 & 1) != 0) {
          v39 = *(_QWORD*)(a2 + 16);
        }
        else {
          v39 = v38 >> 1;
        }
        v40 = a1[24];
        v41 = *((_QWORD*)a1 + 4);
        if ((v40 & 1) == 0) {
          v41 = v40 >> 1;
        }
        if (v39 != v41 ||
            ((v38 & 1) != 0 ? (v42 = *(_QWORD*)(a2 + 24)) : (v42 = a2 + 9),
             (v40 & 1) != 0 ? (v43 = *((unsigned __int8**)a1 + 5))
                            : (v43 = a1 + 25),
             (unsigned int)memcmp(v42, v43) != 0)) {
          v44 = (_BYTE*)GameRoutine_18f4a00(v17);
          if (v44 != nullptr) {
            LODWORD(v17) = *v44 == 0;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          else {
            LODWORD(v17) = 1;
            if ((v50[0] & 1) != 0) {
              goto LABEL_89;
            }
          }
          return (unsigned int)v17;
        }
      LABEL_87:
        LODWORD(v17) = 0;
      }
    LABEL_88:
      if ((v50[0] & 1) != 0) {
      LABEL_89:
        if (v51 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v45);
        }
      }
      return (unsigned int)v17;
    }
  }
  LODWORD(v17) = 1;
  return (unsigned int)v17;
}

__int64 QuestIconList_Destructor(_QWORD* a1)
{
  __int64 v1;
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
  __int64 result;

  v1 = a1[6];
  *a1 = game_hub_QuestIconList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[7];
    if (v1 == v4) {
      goto LABEL_20;
    }
    do {
      if (*(_BYTE*)(v4 - 8) == 1 && (*(_BYTE*)(v4 - 32) & 1) != 0 &&
          *(_QWORD*)(v4 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      }
      if (*(_BYTE*)(v4 - 40) == 1 && (*(_BYTE*)(v4 - 64) & 1) != 0 &&
          *(_QWORD*)(v4 - 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      v4 -= 88;
    } while (v4 != v1);
    v7 = a1[6];
    a1[7] = v1;
    if (v7 != 0) {
    LABEL_20:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    }
  }
  v9 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  if (v9 != 0) {
    v10 = a1[4];
    if (v9 == v10) {
      goto LABEL_30;
    }
    do {
      v11 = *(_QWORD*)(v10 - 40);
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 64;
    } while (v10 != v9);
    v12 = a1[3];
    a1[4] = v9;
    if (v12 != 0) {
    LABEL_30:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
