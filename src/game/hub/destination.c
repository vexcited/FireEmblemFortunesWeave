#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f7dc20(__int64*, __int64);
__int64 GameRoutine_f7de90(__int64, __int64*);
__int64 GameRoutine_f7e580(_QWORD);
__int64 GameRoutine_f7e700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff7958[])();
extern __int64 (*game_hub_Destination_vtable[])();
extern __int64 GameData_2210d70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22265dc;
void Destination_Destructor(__int64 a1);
__int64 game_hub_Destination_GetFindInfoPopupFlag_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2);
__int64 GameHr_f7dc20(__int64*, __int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameHr_f7e580(__int64);
void GameHr_f7e700(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void Destination_Destructor(__int64 a1)
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
  char v28;
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
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  *(_QWORD*)a1 = game_hub_Destination_vtable;
  if (*(_BYTE*)(a1 + 176) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    if (v2 != 0) {
      *(_QWORD*)(a1 + 160) = v2;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 128);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 136);
    if (v4 == v5) {
      goto LABEL_13;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v4;
    v4 = v7;
    if (v7 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  v9 = *(_QWORD*)(a1 + 104);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 112);
    if (v9 == v10) {
      goto LABEL_23;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v10 -= 16;
    } while (v10 != v9);
    v12 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v9;
    v9 = v12;
    if (v12 != 0) {
    LABEL_23:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v9);
    }
  }
  GameHr_f7e700(*(_QWORD*)(a1 + 88));
  GameHr_f7e580(*(_QWORD*)(a1 + 64));
  v14 = *(_QWORD*)(a1 + 32);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a1 + 40);
    if (v14 == v15) {
      goto LABEL_67;
    }
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v15 - 16) == 1 && (*(_BYTE*)(v15 - 40) & 1) != 0) {
        v20 = *(_QWORD*)(v15 - 24);
        if (v20 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v21, v20);
        }
      }
      if (*(_BYTE*)(v15 - 48) == 1 && (*(_BYTE*)(v15 - 72) & 1) != 0) {
        v22 = *(_QWORD*)(v15 - 56);
        if (v22 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v23, v22);
        }
      }
      if (*(_BYTE*)(v15 - 96) == 1) {
        if ((*(_BYTE*)(v15 - 120) & 1) != 0) {
          v24 = *(_QWORD*)(v15 - 104);
          if (v24 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v25 = 128;
            }
            else {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v25, v24);
          }
        }
        v18 = *(_QWORD*)(v15 - 144);
        if (v18 != 0) {
          v26 = *(_QWORD*)(v15 - 136);
          if (v18 == v26) {
            goto LABEL_30;
          }
          v27 = *(_QWORD*)(v15 - 136);
          do {
            v28 = *(_BYTE*)(v27 - 24);
            v27 -= 24;
            if ((v28 & 1) != 0) {
              v29 = *(_QWORD*)(v26 - 8);
              if (v29 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
                  v30 = 128;
                }
                else {
                  v30 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v30, v29);
              }
            }
            v26 = v27;
          } while (v27 != v18);
          v17 = *(_QWORD*)(v15 - 144);
          *(_QWORD*)(v15 - 136) = v18;
          v18 = v17;
          if (v17 != 0) {
          LABEL_30:
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v19, v18);
          }
        }
      }
      v15 -= 160;
    } while (v14 != v15);
    v31 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v14;
    v14 = v31;
    if (v31 != 0) {
    LABEL_67:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v14);
    }
  }
  v33 = *(_QWORD*)(a1 + 8);
  if (v33 != 0) {
    v34 = *(_QWORD*)(a1 + 16);
    if (v33 == v34) {
      goto LABEL_111;
    }
    v35 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v34 - 16) == 1 && (*(_BYTE*)(v34 - 40) & 1) != 0) {
        v39 = *(_QWORD*)(v34 - 24);
        if (v39 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
            v40 = 128;
          }
          else {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v35 + v40, v39);
        }
      }
      if (*(_BYTE*)(v34 - 48) == 1 && (*(_BYTE*)(v34 - 72) & 1) != 0) {
        v41 = *(_QWORD*)(v34 - 56);
        if (v41 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v35 + v42, v41);
        }
      }
      if (*(_BYTE*)(v34 - 96) == 1) {
        if ((*(_BYTE*)(v34 - 120) & 1) != 0) {
          v43 = *(_QWORD*)(v34 - 104);
          if (v43 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
              v44 = 128;
            }
            else {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v35 + v44, v43);
          }
        }
        v37 = *(_QWORD*)(v34 - 144);
        if (v37 != 0) {
          v45 = *(_QWORD*)(v34 - 136);
          if (v37 == v45) {
            goto LABEL_74;
          }
          v46 = *(_QWORD*)(v34 - 136);
          do {
            v47 = *(_BYTE*)(v46 - 24);
            v46 -= 24;
            if ((v47 & 1) != 0) {
              v48 = *(_QWORD*)(v45 - 8);
              if (v48 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
                  v49 = 128;
                }
                else {
                  v49 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v35 + v49, v48);
              }
            }
            v45 = v46;
          } while (v46 != v37);
          v36 = *(_QWORD*)(v34 - 144);
          *(_QWORD*)(v34 - 136) = v37;
          v37 = v36;
          if (v36 != 0) {
          LABEL_74:
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
              v38 = 128;
            }
            else {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v35 + v38, v37);
          }
        }
      }
      v34 -= 160;
    } while (v33 != v34);
    v50 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 16) = v33;
    v33 = v50;
    if (v50 != 0) {
    LABEL_111:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v33);
    }
  }
  *(_QWORD*)a1 = GameData_1ff7958;
  if (GameData_2210d70 == a1) {
    GameData_2210d70 = 0;
    GameData_22265dc = 0;
  }
}

__int64 game_hub_Destination_GetFindInfoPopupFlag_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  struct {
    __int64 v9;
    char v10;
    char gap9_[7];
    char v11;
    char gap17_[47];
    char v12;
    char gap65_[7];
    int v13;
    char gap76_[4];
    char v14;
    char gap81_[31];
    char v15;
    char gap113_[7];
    char v16;
    char gap121_[23];
    char v17;
    char gap145_[7];
    __int64 v18;
  } v9_;

  v2 = (_QWORD*)*a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = v2[105];
  v5 = v2[106];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != 0 && *(_BYTE*)(v4 + 100) == 1) {
    v6 = v2[22];
    v7 = *(__int64**)(result + 8);
    v9_.v10 = 0;
    v9_.v11 = 0;
    v9_.v12 = 0;
    v9_.v14 = 0;
    v9_.v15 = 0;
    v9_.v16 = 0;
    v9_.v17 = 0;
    v9_.v18 = 0;
    v9_.v9 = v6;
    v9_.v13 = *(_DWORD*)(v4 + 96);
    v8 = v7[1];
    if (v8 >= v7[2]) {
      result = GameHr_f7dc20(v7, &v9_.v9);
    }
    else {
      result = GameRoutine_f7de90(v8, &v9_.v9) + 160;
    }
    v7[1] = result;
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak_alt1(v5);
    if (v3 == 0) {
      return result;
    }
  }
  else if (v3 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak_alt1(v3);
  }
  return result;
}

#pragma GCC visibility pop
