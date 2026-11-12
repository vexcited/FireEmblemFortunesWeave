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
  char v25;
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
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  *(_QWORD*)a1 = game_hub_Destination_vtable;
  if (*(_BYTE*)(a1 + 176) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    if (v2 != 0) {
      *(_QWORD*)(a1 + 160) = v2;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v3);
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
        std___1___shared_weak_count___release_weak(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v4;
    if (v7 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v8);
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
        std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v9);
    v12 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v9;
    if (v12 != 0) {
    LABEL_23:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v13);
    }
  }
  GameRoutine_f7e700(*(_QWORD*)(a1 + 88));
  GameRoutine_f7e580(*(_QWORD*)(a1 + 64));
  v14 = *(_QWORD*)(a1 + 32);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a1 + 40);
    if (v14 == v15) {
      goto LABEL_67;
    }
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v15 - 16) == 1 && (*(_BYTE*)(v15 - 40) & 1) != 0 &&
          *(_QWORD*)(v15 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19);
      }
      if (*(_BYTE*)(v15 - 48) == 1 && (*(_BYTE*)(v15 - 72) & 1) != 0 &&
          *(_QWORD*)(v15 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20);
      }
      if (*(_BYTE*)(v15 - 96) == 1) {
        if ((*(_BYTE*)(v15 - 120) & 1) != 0 && *(_QWORD*)(v15 - 104) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v21);
        }
        v22 = *(_QWORD*)(v15 - 144);
        if (v22 != 0) {
          v23 = *(_QWORD*)(v15 - 136);
          if (v22 == v23) {
            goto LABEL_30;
          }
          v24 = *(_QWORD*)(v15 - 136);
          do {
            v25 = *(_BYTE*)(v24 - 24);
            v24 -= 24;
            if ((v25 & 1) != 0 && *(_QWORD*)(v23 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
                v26 = 128;
              }
              else {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v26);
            }
            v23 = v24;
          } while (v24 != v22);
          v17 = *(_QWORD*)(v15 - 144);
          *(_QWORD*)(v15 - 136) = v22;
          if (v17 != 0) {
          LABEL_30:
            if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18);
          }
        }
      }
      v15 -= 160;
    } while (v14 != v15);
    v27 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v14;
    if (v27 != 0) {
    LABEL_67:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 8);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 16);
    if (v29 == v30) {
      goto LABEL_111;
    }
    v31 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_BYTE*)(v30 - 16) == 1 && (*(_BYTE*)(v30 - 40) & 1) != 0 &&
          *(_QWORD*)(v30 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v34);
      }
      if (*(_BYTE*)(v30 - 48) == 1 && (*(_BYTE*)(v30 - 72) & 1) != 0 &&
          *(_QWORD*)(v30 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v35);
      }
      if (*(_BYTE*)(v30 - 96) == 1) {
        if ((*(_BYTE*)(v30 - 120) & 1) != 0 && *(_QWORD*)(v30 - 104) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
            v36 = 128;
          }
          else {
            v36 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v36);
        }
        v37 = *(_QWORD*)(v30 - 144);
        if (v37 != 0) {
          v38 = *(_QWORD*)(v30 - 136);
          if (v37 == v38) {
            goto LABEL_74;
          }
          v39 = *(_QWORD*)(v30 - 136);
          do {
            v40 = *(_BYTE*)(v39 - 24);
            v39 -= 24;
            if ((v40 & 1) != 0 && *(_QWORD*)(v38 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                v41 = 128;
              }
              else {
                v41 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v41);
            }
            v38 = v39;
          } while (v39 != v37);
          v32 = *(_QWORD*)(v30 - 144);
          *(_QWORD*)(v30 - 136) = v37;
          if (v32 != 0) {
          LABEL_74:
            if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
              v33 = 128;
            }
            else {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v33);
          }
        }
      }
      v30 -= 160;
    } while (v29 != v30);
    v42 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 16) = v29;
    if (v42 != 0) {
    LABEL_111:
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v43);
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
