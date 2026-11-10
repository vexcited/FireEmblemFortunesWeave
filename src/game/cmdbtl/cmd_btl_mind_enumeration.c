#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_edb440(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlMindEnumeration_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*GameData_1fed660[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable[])();
__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1);
__int64 GameRoutine_e766a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76940(_QWORD, _QWORD);
__int64 GameRoutine_e76a50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e76c00(_QWORD, _QWORD);
__int64 GameRoutine_e76d20(_QWORD, _QWORD);
__int64 GameRoutine_e779a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ea60e0(_QWORD, _QWORD);
__int64 MindBtlInfo_Destructor(_QWORD);
__int64 MindBtlInfo_edb660(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fed478[])();
extern __int64 (*GameData_1fed4f8[])();
extern __int64 GameData_212f730[2];
extern __int64 GameData_212f738;
extern __int64 GameData_2203490;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f7d0[4];
extern __int64* GameData_212f968;
void __attribute__((noreturn)) GameRoutine_ea6540(_QWORD);
__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(__int64 a1,
                                                                  _QWORD* a2);
__int64 CmdBtlMindEnumeration_ea5760(__int64 a1, char a2, __int64* a3, int a4);
__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(__int64 a1,
                                                             unsigned int a2,
                                                             __int64 (**a3)());

_QWORD* CmdBtlMindEnumeration_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[6];
  v2 = result;
  *result = game_cmdbtl_CmdBtlMindEnumeration_vtable;
  if (v1 != 0) {
    v3 = result[7];
    if (v1 == v3) {
      goto LABEL_5;
    }
    do {
      v4 = v3 - 144;
      result = (_QWORD*)GameRoutine_edb440(v3 - 136);
      v3 = v4;
    } while (v4 != v1);
    v5 = v2[6];
    v2[7] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_5:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = v2[2];
  if (v7 != 0) {
    v8 = v2[3];
    if (v7 == v8) {
      goto LABEL_15;
    }
    do {
      result = *(_QWORD**)(v8 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v8 -= 16;
    } while (v8 != v7);
    v9 = v2[2];
    v2[3] = v7;
    v7 = v9;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v7);
    }
  }
  return result;
}

__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_SkillMind(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)();
  __int64 (***v34)();
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD v68[2];
  _QWORD v69[2];
  __int64 v70;
  __int64 v71;
  _QWORD v72[2];
  _QWORD v73[2];
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;

  v4 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 8) << 7);
  v5 = a2[1];
  v74 = *a2;
  v75 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  result = GameRoutine_e76940(v4 + 672, &v74);
  v7 = v75;
  if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    result = v14;
    if ((v14 & 1) != 0) {
      goto LABEL_6;
    }
  }
  else if ((result & 1) != 0) {
  LABEL_6:
    v8 = 828;
    v9 = 0;
    do {
      v10 = a2[1];
      v11 = *(_QWORD*)(*a2 + 16LL);
      v73[0] = *a2;
      v73[1] = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        result = GameRoutine_e76770(v4 + 672, v73, v11 + v8);
        v12 = result;
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((result & 1) != 0) {
            goto LABEL_16;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak(v10);
          if ((v12 & 1) != 0) {
          LABEL_16:
            v13 = a2[1];
            v72[0] = *a2;
            v72[1] = v13;
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                        memory_order_relaxed);
              result = CmdBtlMindEnumeration_ea5760(a1, 1, v72, v9);
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                result = std___1___shared_weak_count___release_weak(v13);
              }
            }
            else {
              result = CmdBtlMindEnumeration_ea5760(a1, 1, v72, v9);
            }
          }
        }
      }
      else {
        result = GameRoutine_e76770(v4 + 672, v73, v11 + v8);
        if ((result & 1) != 0) {
          goto LABEL_16;
        }
      }
      v8 += 8;
      ++v9;
    } while (v8 != 1068);
  }
  if ((*(_BYTE*)(a1 + 40) & 2) != 0) {
    v15 = a2[1];
    v70 = *a2;
    v71 = v15;
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    result = GameRoutine_e76c00(v4 + 672, &v70);
    v16 = v71;
    if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = result;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      result = v17;
    }
    if ((result & 1) != 0) {
      v18 = 828;
      v19 = 0;
      do {
        v20 = a2[1];
        v21 = *(_QWORD*)(*a2 + 16LL);
        v69[0] = *a2;
        v69[1] = v20;
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
          result = GameRoutine_e76a50(v4 + 672, v69, v21 + v18);
          v22 = result;
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if ((result & 1) != 0) {
              goto LABEL_37;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
            result = std___1___shared_weak_count___release_weak(v20);
            if ((v22 & 1) != 0) {
            LABEL_37:
              v23 = a2[1];
              v68[0] = *a2;
              v68[1] = v23;
              if (v23 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8),
                                          1u, memory_order_relaxed);
                result = CmdBtlMindEnumeration_ea5760(a1, 2, v68, v19);
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                  result = std___1___shared_weak_count___release_weak(v23);
                }
              }
              else {
                result = CmdBtlMindEnumeration_ea5760(a1, 2, v68, v19);
              }
            }
          }
        }
        else {
          result = GameRoutine_e76a50(v4 + 672, v69, v21 + v18);
          if ((result & 1) != 0) {
            goto LABEL_37;
          }
        }
        v18 += 8;
        ++v19;
      } while (v18 != 1068);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 4) == 0) {
    return result;
  }
  v24 = a2[1];
  v66 = *a2;
  v67 = v24;
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = GameRoutine_e76d20(v4 + 672, &v66);
  v26 = v67;
  if (v67 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v27 = v25;
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
    v25 = v27;
  }
  if ((v25 & 1) != 0) {
    v28 = *a2;
    v29 = a2[1];
    v64 = *a2;
    v65 = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v30 = *(_QWORD*)(v28 + 16);
    v31 = *GameData_212ea58 + ((__int64)*(int*)(a1 + 8) << 7) + 672;
    v32 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         40, 16, 0);
    v33 = GameData_1fed478;
    v34 = (__int64 (***)())v32;
    *(_QWORD*)(v32 + 16) = v31;
    *(_QWORD*)(v32 + 24) = &v64;
    *(_QWORD*)v32 = GameData_1fed478;
    *(_QWORD*)(v32 + 8) = a1;
    *(_BYTE*)(v32 + 32) = 3;
    if ((*(_BYTE*)(v30 + 1536) & 4) != 0) {
      v35 = *(_QWORD*)(v30 + 1496);
      v36 = *(_QWORD*)(v30 + 1488);
      if ((int)((unsigned __int64)(v35 - v36) >> 2) < 1) {
        v33 = GameData_1fed478;
      }
      else {
        v37 = 0;
        v38 = 0;
        v39 = GameData_212c880[0];
        v40 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v40 + 64) +
                                   8LL * (*(_DWORD*)(v36 + v37) & 0xFFF)) +
                        104LL) == 2) {
            ((void (*)(__int64 (***)(), __int64))(*v34)[6])(v34, v36 + v37);
            v40 = *v39;
            v35 = *(_QWORD*)(v30 + 1496);
            v36 = *(_QWORD*)(v30 + 1488);
          }
          ++v38;
          v37 += 4;
        } while (v38 < (int)((unsigned __int64)(v35 - v36) >> 2));
        v33 = *v34;
      }
    }
    ((void (*)(__int64 (***)()))v33[5])(v34);
    v41 = v65;
    if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak(v41);
      v42 = *a2;
      v43 = a2[1];
      if (v43 != 0) {
        goto LABEL_60;
      }
    LABEL_62:
      v77 = 0;
      goto LABEL_63;
    }
  }
  v42 = *a2;
  v43 = a2[1];
  if (v43 == 0) {
    goto LABEL_62;
  }
LABEL_60:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                            memory_order_relaxed);
  v77 = v43;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                            memory_order_relaxed);
LABEL_63:
  v76 = v42;
  v44 = GameRoutine_e779a0(v4 + 672, &v76, 0);
  v45 = v77;
  v46 = v44;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak(v45);
  }
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak(v43);
    if (v46 != 0) {
      goto LABEL_69;
    }
  }
  else if (v46 != 0) {
    goto LABEL_69;
  }
  v56 = a2[1];
  v62 = *a2;
  v63 = v56;
  if (v56 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
  game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 0, &v62);
  v57 = v63;
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak(v57);
  }
LABEL_69:
  v47 = *a2;
  v48 = a2[1];
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
    v77 = v48;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v77 = 0;
  }
  v76 = v47;
  v49 = GameRoutine_e779a0(v4 + 672, &v76, 1);
  v50 = v77;
  v51 = v49;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak(v48);
    if (v51 != 0) {
      goto LABEL_78;
    }
  LABEL_95:
    v58 = a2[1];
    v62 = *a2;
    v63 = v58;
    if (v58 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                memory_order_relaxed);
    }
    game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 1, &v62);
    v59 = v63;
    if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak(v59);
    }
    goto LABEL_78;
  }
  if (v51 == 0) {
    goto LABEL_95;
  }
LABEL_78:
  v52 = *a2;
  v53 = a2[1];
  if (v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
    v77 = v53;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v77 = 0;
  }
  v76 = v52;
  result = GameRoutine_e779a0(v4 + 672, &v76, 2);
  v54 = v77;
  v55 = result;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    result = std___1___shared_weak_count___release_weak(v54);
  }
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
    if (v55 != 0) {
      return result;
    }
  }
  else if (v55 != 0) {
    return result;
  }
  v60 = a2[1];
  v62 = *a2;
  v63 = v60;
  if (v60 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                              memory_order_relaxed);
  }
  result = game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(a1, 2, &v62);
  v61 = v63;
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    return std___1___shared_weak_count___release_weak(v61);
  }
  return result;
}

__int64 CmdBtlMindEnumeration_ea5760(__int64 a1, char a2, __int64* a3, int a4)
{
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  _QWORD v42[3];
  int v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;

  v33 = 0;
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  v8 = GameData_212f730[0];
  v34 = GameData_212f730[0] + 16;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  v10[2] = 0;
  v11 = GameData_212f7d0[0];
  v10[6] = 0;
  v10[7] = 0;
  v12 = GameData_212f968;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[4] = &v34;
  v10[5] = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  LOBYTE(v35) = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  *v10 = v11 + 2;
  v10[1] = 0;
  v10[3] = v12 + 2;
  LODWORD(v12) = *(_DWORD*)(a1 + 8);
  v44 = v10 + 3;
  v45 = v10;
  v40 = -1;
  HIDWORD(v35) = (_DWORD)v12;
  LODWORD(v36) = -1;
  MindBtlInfo_edb660(&v34);
  v13 = *a3;
  v14 = a3[1];
  LOBYTE(v35) = a2;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v39;
  v38 = v13;
  v39 = v14;
  if (v15 != 0) {
    v15 = std___1___shared_weak_count___release_weak(v15);
  }
  if (v14 != 0) {
    v15 = std___1___shared_weak_count___release_weak(v14);
  }
  v17 = *(_QWORD*)(a1 + 56);
  v16 = *(_QWORD*)(a1 + 64);
  LODWORD(v36) = a4;
  if (v17 >= v16) {
    v27 = GameRoutine_ea60e0(a1 + 48, &v33);
  }
  else {
    *(_DWORD*)v17 = v33;
    *(_QWORD*)(v17 + 8) = GameData_212f738 + 16;
    v18 = v35;
    v19 = v37;
    *(_QWORD*)(v17 + 24) = v36;
    *(_QWORD*)(v17 + 32) = v19;
    *(_QWORD*)(v17 + 16) = v18;
    *(_QWORD*)(v17 + 40) = v38;
    v20 = v39;
    *(_QWORD*)(v17 + 48) = v39;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
    }
    v21 = v40;
    *(_QWORD*)(v17 + 72) = 0;
    *(_QWORD*)(v17 + 80) = 0;
    *(_QWORD*)(v17 + 88) = 0;
    *(_DWORD*)(v17 + 56) = v21;
    *(_QWORD*)(v17 + 60) = v41;
    *(_DWORD*)(v17 + 68) = v42[0];
    v22 = *(_QWORD**)((char*)v42 + 4);
    v23 = *(_QWORD**)((char*)&v42[1] + 4);
    v24 = *(_QWORD*)((char*)&v42[1] + 4) - *(_QWORD*)((char*)v42 + 4);
    if (*(_QWORD*)((char*)&v42[1] + 4) != *(_QWORD*)((char*)v42 + 4)) {
      if (0xAAAAAAAAAAAAAAABLL * (v24 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_ea6540(v15);
      }
      v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *v9, *(_QWORD*)((char*)&v42[1] + 4) - *(_QWORD*)((char*)v42 + 4), 16,
          0);
      *(_QWORD*)(v17 + 72) = v25;
      *(_QWORD*)(v17 + 80) = v25;
      *(_QWORD*)(v17 + 88) = (char*)v25 + v24;
      do {
        *v25 = *v22;
        v25[1] = v22[1];
        v26 = v22[2];
        v25[2] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                    memory_order_relaxed);
        }
        v22 += 3;
        v25 += 3;
      } while (v22 != v23);
      *(_QWORD*)(v17 + 80) = v25;
    }
    *(_QWORD*)(v17 + 8) = v8 + 16;
    *(_QWORD*)(v17 + 96) = v44;
    v28 = v45;
    *(_QWORD*)(v17 + 104) = v45;
    if (v28 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 1), 1u,
                                memory_order_relaxed);
    }
    v29 = v46;
    v30 = v47;
    v31 = v48;
    v27 = v17 + 144;
    *(_DWORD*)(v17 + 136) = v49;
    *(_QWORD*)(v17 + 120) = v30;
    *(_QWORD*)(v17 + 128) = v31;
    *(_QWORD*)(v17 + 112) = v29;
  }
  *(_QWORD*)(a1 + 56) = v27;
  return MindBtlInfo_Destructor(&v34);
}

__int64 game_cmdbtl_CmdBtlMindEnumeration_CalcWholeMind_Link(__int64 a1,
                                                             unsigned int a2,
                                                             __int64 (**a3)())
{
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 result;
  int v10;
  __int64 (*v11)();
  __int64 (*v12)();
  char v13;
  __int64 (***v14)();
  __int64 (***v15)();
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[2];
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;

  v5 = 0;
  v23 = 0x80907u >> (8 * a2);
  v6 = *(int*)(a1 + 8);
  v22 = 0;
  v7 = GameData_2203490 + (v6 << 7) + 672;
  do {
    v11 = *a3;
    v12 = a3[1];
    v21[0] = *a3;
    v21[1] = v12;
    if (v12 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)((char*)v12 + 8), 1u,
                                memory_order_relaxed);
      result =
          GameRoutine_e766a0(v7, v21, *((_QWORD*)*a3 + 2) + 8LL * v5 + 828, a2);
      v13 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)((char*)v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((result & 1) == 0) {
          goto LABEL_4;
        }
      }
      else {
        (*(void (**)(__int64 (*)()))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
        if ((v13 & 1) == 0) {
          goto LABEL_4;
        }
      }
    }
    else {
      result =
          GameRoutine_e766a0(v7, v21, *((_QWORD*)v11 + 2) + 8LL * v5 + 828, a2);
      if ((result & 1) == 0) {
        goto LABEL_4;
      }
    }
    v14 = (__int64 (***)())fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *v14 = GameData_1fed4f8;
    v14[1] = (__int64 (**)())v7;
    v15 = v14;
    v14[2] = a3;
    v14[3] = (__int64 (**)())&v23;
    v14[4] = (__int64 (**)())&v22;
    v14[5] = (__int64 (**)())a1;
    v17 = *(__int64**)(v7 + 40);
    v16 = *(__int64**)(v7 + 48);
    if (v17 == v16) {
      v8 = GameData_1fed4f8;
    }
    else {
      do {
        v24 = *v17;
        v18 = v17[1];
        v25 = v18;
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        ((void (*)(__int64 (***)(), __int64*))(*v15)[6])(v15, &v24);
        v19 = v25;
        if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
        v17 += 2;
      } while (v17 != v16);
      v8 = *v15;
    }
    result = ((__int64 (*)(__int64 (***)()))v8[5])(v15);
  LABEL_4:
    v10 = v22;
    v5 = ++v22;
  } while (v10 < 29);
  return result;
}

__int64 CmdBtlMindEnumeration_eab1e0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqAI_vtable;
  CmdBtlMindEnumeration_Destructor(a1 + 208);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fed660;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);

LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
