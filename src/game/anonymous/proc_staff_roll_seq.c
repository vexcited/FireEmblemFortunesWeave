#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a360a0(_QWORD, _QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_anonymous_ProcStaffRollSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 ProcStaffRollSeq_Destructor(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 (*GameData_2120e78[])();
extern __int64 (*game_anonymous_ProcStaffRollSeq_DrawObj_vtable[])();
extern __int64 (*nn_ui2d_PlacementTextureInfo_vtable[])();
extern __int64 GameData_21c9d70;
unsigned __int64 ProcStaffRollSeq_19c0a60(__int64 a1, __int64 a2, int a3,
                                          unsigned int a4);
__int64 ProcStaffRollSeq_19c0d70(__int64 result);
_QWORD* ProcStaffRollSeq_19c0de0(_QWORD* a1, _QWORD* a2, unsigned __int64 a3);
__int64 ProcStaffRollSeq_19c2710(__int64 result);
__int64 GameRoutine_6380e0(_QWORD, _QWORD);
__int64 GameRoutine_64be60();
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void ProcStaffRollSeq_19c1860(PSEUDO_X8 x8_,
                                                         __int64 a1);

__int64 ProcStaffRollSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;

  *(_QWORD*)a1 = game_anonymous_ProcStaffRollSeq_vtable;
  if (*(_BYTE*)(a1 + 396) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 392));
    if (*(_BYTE*)(a1 + 396) == 1) {
      *(_BYTE*)(a1 + 396) = 0;
    }
  }
  if (*(_QWORD*)(a1 + 264) != 0) {
    GameRoutine_155e140(a1 + 280);
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 2376) = 1;
    }
    v3 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v4 = *(_QWORD**)(a1 + 216);
  for (i = (_QWORD*)(a1 + 208); v4 != i; v4 = (_QWORD*)v4[1]) {
    v7 = v4[2];
    v6 = v4[3];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v8 = *(_QWORD*)(v7 + 16);
    if (v8 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v8 + 8), v8);
      *(_QWORD*)(v7 + 16) = 0;
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  GameManager_a360a0(*game_sound_g_game_sound_ptr[0], "BGM_SYS_ED3");
  nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(0);
  GameRoutine_155e140(a1 + 280);
  v9 = *(_QWORD*)(a1 + 376);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_1564060(a1 + 328);
  GameRoutine_1563f90(a1 + 304, *(_QWORD*)(a1 + 312));
  v10 = *(_QWORD*)(a1 + 288);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 272);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  if (*(_QWORD*)(a1 + 224) != 0) {
    v12 = *(_QWORD**)(a1 + 216);
    v13 = *(_QWORD**)(*(_QWORD*)(a1 + 208) + 8LL);
    *(_QWORD*)(*v12 + 8LL) = v13;
    *v13 = *v12;
    *(_QWORD*)(a1 + 224) = 0;
    if (v12 != i) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = (_QWORD*)v12[1];
        v17 = v12[3];
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v15);
        v12 = v16;
      } while (v16 != i);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v18 = *(_QWORD**)(a1 + 160);
    v19 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v18 + 8LL) = v19;
    *v19 = *v18;
    *(_QWORD*)(a1 + 168) = 0;
    if (v18 != (_QWORD*)(a1 + 152)) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)v18[1];
        v23 = v18[3];
        if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak(v23);
        }
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v21);
        v18 = v22;
      } while (v22 != (_QWORD*)(a1 + 152));
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

unsigned __int64 ProcStaffRollSeq_19c0a60(__int64 a1, __int64 a2, int a3,
                                          unsigned int a4)
{
  int v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  if (a3 > 1) {
    if (a3 == 2) {
      v5 = 3;
      goto LABEL_11;
    }
  }
  else if (a3 != 0) {
    if (a4 > 4) {
      v5 = 3;
    }
    else {
      v5 = 4;
    }
    goto LABEL_11;
  }
  if (a4 <= 3) {
    v5 = 5;
  }
  else {
    v5 = 3;
  }
LABEL_11:
  result = game_HashString(a2);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21c9d70 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c9d70 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = result;
        if (result >= v7) {
          v10 = result % v7;
        }
      }
      else {
        v10 = v9 & result;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d70 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v15 = v12[1];
              if (v15 == result) {
                if (v12[2] == result) {
                  goto LABEL_45;
                }
              }
              else if ((v15 & v9) != v10) {
                goto LABEL_35;
              }
              v12 = (_QWORD*)*v12;
              v14 = 0;
              if (v12 == nullptr) {
                goto LABEL_38;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == result) {
              if (v12[2] == result) {
              LABEL_45:
                v14 = v12[3];
                goto LABEL_38;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                break;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
LABEL_35:
  v14 = 0;
  do {
  LABEL_38:
    if (v14 == 0) {
      break;
    }
    v16 = *(_QWORD*)(GameData_21c9d70 + 64);
    v17 = *(unsigned __int16*)(v14 + 16) + 1LL;
    if ((int)v17 >=
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9d70 + 72) - v16) >>
              3)) {
      break;
    }
    v14 = *(_QWORD*)(v16 + 8 * v17);
    if (v14 == 0 || *(_QWORD*)(v14 + 8) != 0) {
      break;
    }
    v18 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80, 16, 0);
    *(_QWORD*)(v19 + 16) = 0;
    *(_DWORD*)(v19 + 64) = 0;
    *(_DWORD*)(v19 + 72) = 0;
    *(_QWORD*)v19 = GameData_2120e78;
    *(_QWORD*)(v19 + 48) = nn_ui2d_PlacementTextureInfo_vtable;
    *(_QWORD*)(v19 + 56) = -1;
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 24) = v14;
    *(_QWORD*)(v19 + 32) = a1 + 280;
    *(_QWORD*)(v19 + 40) = 0;
    result = fw_memory_HeapManager_Allocate(*v18, 32, 16, 0);
    *(_QWORD*)(result + 16) = v19 + 24;
    *(_QWORD*)(result + 24) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)result = v20;
    *(_QWORD*)(result + 8) = a1 + 208;
    *(_QWORD*)(v20 + 8) = result;
    *(_QWORD*)(a1 + 208) = result;
    ++*(_QWORD*)(a1 + 224);
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      result = std___1___shared_weak_count___release_weak(v19);
    }
    --v5;
  } while (v5 != 0);
  return result;
}

__int64 ProcStaffRollSeq_19c0d70(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 40);
  if (v1 != 0) {
    v2 = result;
    result = GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
    *(_QWORD*)(v2 + 40) = 0;
  }
  return result;
}

_QWORD* ProcStaffRollSeq_19c0de0(_QWORD* a1, _QWORD* a2, unsigned __int64 a3)
{
  _QWORD* v4;
  unsigned __int16** v5;
  __int64 v6;
  unsigned __int16** v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned __int16* v10;
  int v11;
  int v12;
  int v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int16** v23;
  __int64 v24;
  unsigned __int16** v25;
  __int64 v26;
  unsigned __int16* v27;
  unsigned __int16* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int16** v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int16** v40;
  __int64 v41;
  unsigned __int16* v42;
  unsigned __int16* v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* i;
  unsigned __int16** v58;
  __int64 v59;
  unsigned __int16** v60;
  __int64 v61;
  unsigned __int16* v62;
  unsigned __int16* v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned __int16** v70;
  __int64 v71;
  unsigned __int16** v72;
  __int64 v73;
  unsigned __int16* v74;
  unsigned __int16* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  __int64 v84;
  _QWORD* v85;
  _QWORD* v86;
  _QWORD* v87;
  _QWORD* v88;
  _QWORD* v89;
  _QWORD* v90;

  v88 = a1;
  if (a3 < 2) {
    return v88;
  }
  if (a3 == 2) {
    v4 = (_QWORD*)*a2;
    v5 = *(unsigned __int16***)(*a2 + 16LL);
    v6 = *(_QWORD*)(*a2 + 24LL);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = (unsigned __int16**)a1[2];
    v8 = a1[3];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v9 = *v5;
    v10 = *v7;
    v11 = v9[22];
    v12 = v10[22];
    v13 = 10000 * v9[20] + 100 * v9[21];
    v14 = 10000 * v10[20] + 100 * v10[21];
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    if (v13 + v11 < (unsigned int)(v14 + v12)) {
      v15 = (_QWORD*)v4[1];
      *(_QWORD*)(*v4 + 8LL) = v15;
      *v15 = *v4;
      v16 = v88;
      v88 = v4;
      *(_QWORD*)(*v16 + 8LL) = v4;
      *v4 = *v16;
      *v16 = v4;
      v4[1] = v16;
    }
    return v88;
  }
  v17 = a1;
  v18 = a3 >> 1;
  v20 = (a3 >> 1) + 1;
  do {
    v17 = (_QWORD*)v17[1];
    --v20;
  } while (v20 > 1);
  v21 = (_QWORD*)ProcStaffRollSeq_19c0de0(a1, v17, a3 >> 1);
  v22 = ProcStaffRollSeq_19c0de0(v17, a2, a3 - v18);
  v23 = *(unsigned __int16***)(v22 + 16);
  v24 = *(_QWORD*)(v22 + 24);
  v88 = (_QWORD*)v22;
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = (unsigned __int16**)v21[2];
  v26 = v21[3];
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
  }
  v27 = *v23;
  v28 = *v25;
  v29 = v27[22];
  v30 = v28[22];
  v31 = 10000 * v27[20] + 100 * v27[21];
  v32 = 10000 * v28[20] + 100 * v28[21];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v33 = v31 + v29;
  v34 = v32 + v30;
  if (v24 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v33 < v34) {
      goto LABEL_28;
    }
  LABEL_46:
    v55 = (_QWORD*)v21[1];
    v56 = v88;
    v35 = a2;
    v88 = v21;
    if (v55 == v56) {
      return v88;
    }
    goto LABEL_47;
  }
  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
  std___1___shared_weak_count___release_weak(v24);
  if (v33 >= v34) {
    goto LABEL_46;
  }
LABEL_28:
  v35 = a2;
  v36 = (_QWORD*)v88[1];
  if (v36 == a2) {
    goto LABEL_43;
  }
  while (1) {
    v37 = (unsigned __int16**)v36[2];
    v38 = v36[3];
    v39 = v36;
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
    }
    v40 = (unsigned __int16**)v21[2];
    v41 = v21[3];
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                memory_order_relaxed);
    }
    v42 = *v37;
    v43 = *v40;
    v44 = v42[20];
    v45 = v42[21];
    v46 = v42[22];
    v47 = v43[20];
    v48 = v43[21];
    v49 = v43[22];
    if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
      std___1___shared_weak_count___release_weak(v41);
      v35 = a2;
    }
    v50 = 10000 * v44 + 100 * v45 + v46;
    v51 = 10000 * v47 + 100 * v48 + v49;
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      break;
    }
    if (v50 >= v51) {
      goto LABEL_42;
    }
  LABEL_31:
    v36 = (_QWORD*)v39[1];
    if (v36 == v35) {
      goto LABEL_43;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
  std___1___shared_weak_count___release_weak(v38);
  v35 = a2;
  if (v50 < v51) {
    goto LABEL_31;
  }
LABEL_42:
  v36 = v39;
LABEL_43:
  v52 = *v36;
  v53 = v36;
  v54 = *(_QWORD**)(*v36 + 8LL);
  *(_QWORD*)(*v88 + 8LL) = v54;
  *v54 = *v88;
  v55 = (_QWORD*)v21[1];
  *(_QWORD*)(*v21 + 8LL) = v88;
  *v88 = *v21;
  v56 = v53;
  *v21 = v52;
  *(_QWORD*)(v52 + 8) = v21;
  if (v55 != v53) {
  LABEL_47:
    if (v56 == v35) {
      return v88;
    }
    i = v56;
    do {
      v58 = (unsigned __int16**)i[2];
      v59 = i[3];
      v89 = v56;
      if (v59 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                                  memory_order_relaxed);
      }
      v60 = (unsigned __int16**)v55[2];
      v61 = v55[3];
      v90 = i;
      if (v61 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                  memory_order_relaxed);
      }
      v62 = *v58;
      v63 = *v60;
      v64 = v62[20];
      v65 = v62[21];
      v66 = v62[22];
      v67 = v63[20];
      v68 = v63[21];
      v69 = v63[22];
      if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
        std___1___shared_weak_count___release_weak(v61);
        v35 = a2;
        if (v59 == 0) {
          goto LABEL_61;
        }
      }
      else if (v59 == 0) {
        goto LABEL_61;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
        std___1___shared_weak_count___release_weak(v59);
        v35 = a2;
      }
    LABEL_61:
      if (10000 * v64 + 100 * v65 + v66 >=
          (unsigned int)(10000 * v67 + 100 * v68 + v69)) {
        v55 = (_QWORD*)v55[1];
        v56 = v89;
        i = v90;
        if (v55 == v89) {
          return v88;
        }
      }
      else {
        for (i = (_QWORD*)v90[1]; i != v35; i = (_QWORD*)i[1]) {
          v70 = (unsigned __int16**)i[2];
          v71 = i[3];
          if (v71 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                      memory_order_relaxed);
          }
          v72 = (unsigned __int16**)v55[2];
          v73 = v55[3];
          if (v73 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 8), 1u,
                                      memory_order_relaxed);
          }
          v74 = *v70;
          v75 = *v72;
          v76 = v74[20];
          v77 = v74[21];
          v78 = v74[22];
          v79 = v75[20];
          v80 = v75[21];
          v81 = v75[22];
          if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak(v73);
            v35 = a2;
          }
          v82 = 10000 * v76 + 100 * v77 + v78;
          v83 = 10000 * v79 + 100 * v80 + v81;
          if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
            std___1___shared_weak_count___release_weak(v71);
            v35 = a2;
          }
          if (v82 >= v83) {
            break;
          }
        }
        v84 = *i;
        v85 = *(_QWORD**)(*i + 8LL);
        *(_QWORD*)(*v90 + 8LL) = v85;
        *v85 = *v90;
        v86 = (_QWORD*)v55[1];
        *(_QWORD*)(*v55 + 8LL) = v90;
        *v90 = *v55;
        v87 = v89;
        *v55 = v84;
        *(_QWORD*)(v84 + 8) = v55;
        v55 = v86;
        if (v89 == v90) {
          v87 = i;
        }
        v56 = v87;
        if (v55 == v87) {
          return v88;
        }
      }
    } while (i != v35);
  }
  return v88;
}

__attribute__((swiftcall)) void ProcStaffRollSeq_19c1860(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned int i;
  __int64 v6;
  unsigned __int64 v7;
  _BYTE* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  char* v17;
  __int64 result;
  __int64 v19;
  _QWORD v20[6];
  _QWORD v21[2];
  unsigned __int64 v22;
  __int64 (*v23)();
  __int64 v24;
  _BYTE v25[256];
  _BYTE* v26;
  _QWORD v27[4];
  _BYTE v28[8];
  char v29;
  _QWORD v30[2];
  int v31;
  __int64 v32;
  __int64 v33;

  v3 = a1;
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  for (i = 0; i != 128; ++i) {
    v20[2] = i;
    v20[0] = v4;
    v24 = 0;
    v26 = v25;
    v31 = 0;
    v21[0] = v25;
    v21[1] = 256;
    v20[3] = 0;
    v20[4] = 108;
    v28[0] = 0;
    v29 = 0;
    v22 = 0;
    v23 = GameRoutine_64be60;
    v30[0] = "{}_{}";
    v30[1] = "";
    v32 = 0;
    v33 = 2;
    v27[2] = v20;
    v27[3] = 108;
    v27[0] = v21;
    v27[1] = 2;
    v6 = GameRoutine_6380e0(v30, v27);
    if (v29 == 1) {
      v6 = std___1_locale_Destroy_locale(v28);
    }
    v7 = v22;
    if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(v6);
    }
    v8 = v26;
    if (v22 >= 0x17) {
      v10 = v3;
      v11 = v4;
      if ((v22 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v22 | 7) + 1;
      }
      v13 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
      v14 = v12 | 1;
      v9 = (char*)v13;
      a2[1] = v7;
      a2[2] = v13;
      v4 = v11;
      v3 = v10;
      *a2 = v14;
    }
    else {
      v9 = (char*)a2 + 1;
      *(_BYTE*)a2 = 2 * v22;
      if (v7 == 0) {
        goto LABEL_14;
      }
    }
    memmove(v9, v8, v7);
  LABEL_14:
    v15 = v26;
    v9[v7] = 0;
    if (v15 != v25 && v15 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v17 = (char*)a2[2];
    }
    else {
      v17 = (char*)a2 + 1;
    }
    result = ui_LayoutAccessor_FindPane(*(_QWORD*)(v3 + 112), v17);
    if (result == 0) {
      result;
      return;
    }
    if ((*(_BYTE*)a2 & 1) != 0 && a2[2] != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
  }
  *(_WORD*)a2 = 0;
  {
    result;
    return;
  }
}

__int64 ProcStaffRollSeq_19c2710(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  *(_QWORD*)result = game_anonymous_ProcStaffRollSeq_DrawObj_vtable;
  if ((*(_BYTE*)(result + 120) & 1) != 0 && *(_QWORD*)(result + 136) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(v1 + 40) & 1) != 0 && *(_QWORD*)(v1 + 56) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(v1 + 16) & 1) != 0 && *(_QWORD*)(v1 + 32) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return result;
}

#pragma GCC visibility pop
