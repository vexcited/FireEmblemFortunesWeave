#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);
__int64 GameRoutine_10f2400(_QWORD, _QWORD);
__int64 GameRoutine_1115cc0(_QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ee68[4];
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD, _QWORD);
__int64 CombatCamera_1097e40(__int64 a1);
__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3);
__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3);
__int64 CombatCamera_1098760(__int64 a1, __int64 a2);
void CombatCamera_1098ae0_alt2(__int64* a1,
                               _QWORD* a2) __asm__("CombatCamera_1098ae0");
__int64
game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result);
__int64 CombatCamera_1098ae0_alt1(_QWORD, _QWORD,
                                  long double) __asm__("CombatCamera_1098ae0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1098c40(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 CombatCamera_10988a0_alt1(__int64* a1, int* a2, __int64* a3, __int64 a4,
                                  __n128 a5) __asm__("CombatCamera_10988a0");
__attribute__((swiftcall)) void GameRoutine_109da60(PSEUDO_X8, _QWORD, float);
__int64 CharacterSelfie_10a6b90(void);
__int64 CombatCamera_1097e40_alt1(_QWORD) __asm__("CombatCamera_1097e40");
__int64 GameRoutine_1096780_alt1(void) __asm__("GameRoutine_1096780");
__int64 GameRoutine_10ac700(_QWORD, _QWORD, float);
__int64 GameRoutine_10be5c0(_QWORD);
__int64 GameRoutine_10bfbf0(_QWORD);
__int64 GameRoutine_b3aee0(void);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*game_combat_CombatCamera_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64* GameData_212fff0[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235738;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_10ac520(__int64, _DWORD*, int);
__n128
CombatCamera_Destructor_alt1(_QWORD* a1) __asm__("CombatCamera_Destructor");
__int64 CombatCamera_1097a60(__int64 result, float a2);
void game_combat_CombatCamera_SubscribeSignals_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64* CombatCamera_1098ae0(__int64* result, _QWORD* a2);
__int64 CombatCamera_1098420(_QWORD*, __int64*, __int64, int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*GameData_2007da8[])();
extern __int64 (*GameData_2007e38[])();
extern __int64 (*GameData_2007ec8[])();
extern __int64 fw_memory_g_heap_manager;
extern int GameData_2235744;
void __attribute__((noreturn)) GameRoutine_1098070();
void __attribute__((noreturn)) GameRoutine_10982c0();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 (***game_combat_CombatCamera_SubscribeSignals(__int64 a1,
                                                      __int64 a2))();
void __attribute__((noreturn))
GameRoutine_1098c40_alt1() __asm__("GameRoutine_1098c40");
__int64 CombatCamera_Destructor(_QWORD* a1);
__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4);

__int64 CombatCamera_Destructor(_QWORD* a1)
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
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;

  *a1 = game_combat_CombatCamera_vtable;
  v2 = a1[9];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[9] = 0;
  }
  if (a1[57] != 0) {
    a1[57] = 0;
    v3 = *(_QWORD*)(game_g_frame_clock + 13224);
    v4 = *(_QWORD*)(v3 + 48);
    v5 = *(_QWORD*)(v3 + 56);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 128LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt2(v5);
      }
    }
    else {
      v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 128LL);
    }
    if (*(_BYTE*)(v6 + 256) == 1) {
      *(_BYTE*)(v6 + 256) = 0;
    }
  }
  v7 = a1[55];
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  v8 = a1[34];
  a1[34] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[5];
  if (v9 == 0) {
    goto LABEL_29;
  }
  v10 = a1[6];
  if (v9 == v10) {
  LABEL_26:
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v9);
    goto LABEL_29;
  }
  do {
    v11 = *(_QWORD**)(v10 - 16);
    if ((_QWORD*)(v10 - 48) == v11) {
      v12 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_23;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  LABEL_23:
    v13 = *(_QWORD*)(v10 - 64);
    if (v13 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v13);
    }
    v10 -= 80;
  } while (v10 != v9);
  v14 = a1[5];
  a1[6] = v9;
  v9 = v14;
  if (v14 != 0) {
    goto LABEL_26;
  }
LABEL_29:
  result = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(result);
  }
  v17 = a1[2];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak_alt2(v17);
  }
  return result;
}

__int64 (***game_combat_CombatCamera_SubscribeSignals(__int64 a1, __int64 a2))()
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned __int64 v20;
  __int64 (***v21)();
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (***v37)();
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  int v69;
  unsigned __int64 v70;
  __int64 (***v71)();
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 (***v85)();
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  _QWORD* v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 (***result)();
  __int64 v105;
  struct {
    __int64 (**v106)();
    __int64 v107;
    __int64 v108;
    char gap56_[8];
    __int64 (***v109)();
  } v106_;
  struct {
    __int64 v110;
    __int64 v111;
  } v110_;

  v2 = *(_QWORD**)(a2 + 120);
  v4 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(a1 + 32);
  v5 = a2;
  v6 = a1;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v106_.v108 = a2;
    v106_.v109 = &v106_.v106;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v106_.v108 = a2;
    v106_.v109 = &v106_.v106;
  }
  v8 = v2[7];
  v7 = v2[8];
  v106_.v106 = GameData_2007da8;
  v106_.v107 = a1;
  if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v7 - v8) >> 4) < 0x40) {
  LABEL_34:
    v9 = v7;
    if (v3 != 0) {
      goto LABEL_38;
    }
    goto LABEL_94;
  }
  v9 = v8;
  if (v8 != v7) {
    v9 = v8;
    while (*(_DWORD*)v9 != 0) {
      v10 = *(_QWORD*)(v9 + 16);
      if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
        break;
      }
      v9 += 80LL;
      if (v9 == v7) {
        goto LABEL_34;
      }
    }
  }
  if (v9 == v7 || (v11 = v9 + 80, v9 + 80 == v7)) {
    if (v9 == v7) {
      goto LABEL_34;
    }
    goto LABEL_36;
  }
  do {
    if (*(_DWORD*)v11 == 0) {
      goto LABEL_18;
    }
    v12 = *(_QWORD*)(v11 + 16);
    if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
      goto LABEL_18;
    }
    *(_DWORD*)v9 = *(_DWORD*)v11;
    v13 = *(_QWORD*)(v11 + 8);
    v14 = *(_QWORD*)(v11 + 16);
    *(_QWORD*)(v11 + 8) = 0;
    *(_QWORD*)(v11 + 16) = 0;
    v15 = *(_QWORD*)(v9 + 16);
    *(_QWORD*)(v9 + 8) = v13;
    *(_QWORD*)(v9 + 16) = v14;
    if (v15 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v15);
    }
    v16 = *(_QWORD**)(v9 + 64);
    *(_QWORD*)(v9 + 64) = 0;
    if (v16 == (_QWORD*)(v9 + 32)) {
      v17 = 32;
      goto LABEL_28;
    }
    if (v16 != nullptr) {
      v17 = 40;
    LABEL_28:
      (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
    }
    v18 = *(_QWORD*)(v11 + 64);
    if (v18 != 0) {
      if (v11 + 32 == v18) {
        *(_QWORD*)(v9 + 64) = v9 + 32;
        (*(void (**)(_QWORD, unsigned __int64))(**(_QWORD**)(v11 + 64) + 24LL))(
            *(_QWORD*)(v11 + 64), v9 + 32);
      }
      else {
        *(_QWORD*)(v9 + 64) = v18;
        *(_QWORD*)(v11 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v9 + 64) = 0;
    }
    v9 += 80LL;
  LABEL_18:
    v11 += 80LL;
  } while (v11 != v7);
  v7 = v2[8];
  if (v9 == v7) {
    goto LABEL_34;
  }
LABEL_36:
  if (v9 != v7) {
    while (1) {
      v22 = *(_QWORD**)(v7 - 16);
      if ((_QWORD*)(v7 - 48) == v22) {
        break;
      }
      if (v22 != nullptr) {
        v23 = 40;
      LABEL_48:
        (*(void (**)(__int64))(*v22 + v23))((__int64)v22);
      }
      v24 = *(_QWORD*)(v7 - 64);
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v24);
      }
      v7 -= 80LL;
      if (v7 == v9) {
        goto LABEL_37;
      }
    }
    v23 = 32;
    goto LABEL_48;
  }
LABEL_37:
  v2[8] = v9;
  if (v3 != 0) {
  LABEL_38:
    if (*(_QWORD*)(v3 + 8) != -1) {
      v19 = GameData_2235744 + 1;
      v20 = v2[9];
      ++GameData_2235744;
      if (v9 < v20) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        *(_DWORD*)v9 = v19;
        *(_QWORD*)(v9 + 8) = v4;
        *(_QWORD*)(v9 + 16) = v3;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        v21 = v106_.v109;
        if (v106_.v109 != nullptr) {
          if (v106_.v109 == &v106_.v106) {
            *(_QWORD*)(v9 + 64) = v9 + 32;
            ((void (*)(__int64 (***)(void)))(*v21)[3])(v21);
          }
          else {
            *(_QWORD*)(v9 + 64) =
                ((__int64 (*)(__int64))(*v106_.v109)[2])((__int64)v106_.v109);
          }
        }
        else {
          *(_QWORD*)(v9 + 64) = 0;
        }
        std___1___shared_weak_count___release_weak_alt2(v3);
        v40 = v9 + 80;
        goto LABEL_92;
      }
      v25 = v2[7];
      v26 = v9 - v25;
      v27 = 1 - 0x3333333333333333LL * ((__int64)(v9 - v25) >> 4);
      if (v27 > 0x333333333333333LL) {
        GameRoutine_1098070();
      }
      v28 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v25) >> 4);
      v29 = 2 * v28;
      if (2 * v28 <= v27) {
        v29 = v27;
      }
      if (v28 >= 0x199999999999999LL) {
        v30 = 0x333333333333333LL;
      }
      else {
        v30 = v29;
      }
      if (v30 != 0) {
        if (v30 <= 0x333333333333333LL) {
          v31 = v4;
          v32 = v5;
          v33 = v6;
          v34 = 5 * v30;
          v35 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    80 * v30, 16, 0);
          v26 += v35;
          v36 = v35 + 16 * v34;
          v6 = v33;
          v5 = v32;
          v4 = v31;
          goto LABEL_62;
        }
      LABEL_214:
        GameRoutine_60a210_alt1();
      }
      v36 = 0;
    LABEL_62:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      *(_DWORD*)v26 = v19;
      *(_QWORD*)(v26 + 8) = v4;
      *(_QWORD*)(v26 + 16) = v3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v37 = v106_.v109;
      if (v106_.v109 != nullptr) {
        v38 = v5;
        v39 = v6;
        if (v106_.v109 == &v106_.v106) {
          *(_QWORD*)(v26 + 64) = v26 + 32;
          ((void (*)(__int64 (***)(void)))(*v37)[3])(v37);
        }
        else {
          *(_QWORD*)(v26 + 64) =
              ((__int64 (*)(__int64))(*v106_.v109)[2])((__int64)v106_.v109);
        }
      }
      else {
        v38 = v5;
        v39 = v6;
        *(_QWORD*)(v26 + 64) = 0;
      }
      std___1___shared_weak_count___release_weak_alt2(v3);
      v41 = v2[7];
      v42 = (_QWORD*)v2[8];
      v40 = v26 + 80;
      v43 = v26 + v41 - (_QWORD)v42;
      if (v42 != (_QWORD*)v41) {
        v44 = 0;
        do {
          v45 = v41 + v44;
          v46 = v43 + v44;
          *(_DWORD*)v46 = *(_DWORD*)(v41 + v44);
          *(_QWORD*)(v46 + 8) = *(_QWORD*)(v41 + v44 + 8);
          *(_QWORD*)(v46 + 16) = *(_QWORD*)(v41 + v44 + 16);
          *(_QWORD*)(v45 + 8) = 0;
          *(_QWORD*)(v45 + 16) = 0;
          v47 = *(_QWORD*)(v41 + v44 + 64);
          if (v47 != 0) {
            if (v45 + 32 == v47) {
              *(_QWORD*)(v46 + 64) = v46 + 32;
              (*(void (**)(_QWORD))(**(_QWORD**)(v45 + 64) + 24LL))(
                  *(_QWORD*)(v45 + 64));
            }
            else {
              *(_QWORD*)(v46 + 64) = v47;
              *(_QWORD*)(v45 + 64) = 0;
            }
          }
          else {
            *(_QWORD*)(v46 + 64) = 0;
          }
          v44 += 80;
        } while ((_QWORD*)(v41 + v44) != v42);
        v48 = (_QWORD*)(v41 + 32);
        while (1) {
          v50 = (_QWORD*)v48[4];
          if (v48 == v50) {
            break;
          }
          if (v50 != nullptr) {
            v51 = 40;
          LABEL_83:
            (*(void (**)(__int64))(*v50 + v51))((__int64)v50);
          }
          v52 = *(v48 - 2);
          if (v52 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v52);
          }
          v49 = v48 + 6;
          v48 += 10;
          if (v49 == v42) {
            v41 = v2[7];
            goto LABEL_87;
          }
        }
        v51 = 32;
        goto LABEL_83;
      }
    LABEL_87:
      v2[7] = v43;
      v2[8] = v40;
      v2[9] = v36;
      v6 = v39;
      if (v41 != 0) {
        v53 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v41);
      }
      v5 = v38;
    LABEL_92:
      v2[8] = v40;
    }
    std___1___shared_weak_count___release_weak_alt2(v3);
  }
LABEL_94:
  if (v106_.v109 == &v106_.v106) {
    v54 = 4;
  LABEL_98:
    ((__int64 (*)(__int64))(*v106_.v109)[v54])((__int64)v106_.v109);
  }
  else if (v106_.v109 != nullptr) {
    v54 = 5;
    goto LABEL_98;
  }
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v3);
  }
  v56 = *(_QWORD*)(v6 + 24);
  v55 = *(_QWORD*)(v6 + 32);
  if (v55 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                              memory_order_relaxed);
    v106_.v107 = v6;
    v106_.v108 = v5;
    v106_.v109 = &v106_.v106;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                              memory_order_relaxed);
    v106_.v106 = GameData_2007e38;
    if (v106_.v109 == nullptr) {
      goto LABEL_193;
    }
  }
  else {
    v106_.v107 = v6;
    v106_.v108 = v5;
    v106_.v109 = &v106_.v106;
    v106_.v106 = GameData_2007e38;
  }
  v58 = v2[35];
  v57 = v2[36];
  if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v57 - v58) >> 4) < 0x40) {
    goto LABEL_135;
  }
  v59 = v2[35];
  if (v58 != v57) {
    v59 = v2[35];
    while (*(_DWORD*)v59 != 0) {
      v60 = *(_QWORD*)(v59 + 16);
      if (v60 == 0 || *(_QWORD*)(v60 + 8) == -1) {
        break;
      }
      v59 += 80LL;
      if (v59 == v57) {
        goto LABEL_135;
      }
    }
  }
  if (v59 != v57) {
    v61 = v59 + 80;
    if (v59 + 80 != v57) {
      while (1) {
        if (*(_DWORD*)v61 != 0) {
          v62 = *(_QWORD*)(v61 + 16);
          if (v62 != 0 && *(_QWORD*)(v62 + 8) != -1) {
            break;
          }
        }
      LABEL_119:
        v61 += 80LL;
        if (v61 == v57) {
          v57 = v2[36];
          if (v59 == v57) {
            goto LABEL_135;
          }
        LABEL_137:
          if (v59 == v57) {
          LABEL_138:
            v2[36] = v59;
            if (v55 == 0) {
              goto LABEL_194;
            }
            goto LABEL_139;
          }
          while (2) {
            v72 = *(_QWORD**)(v57 - 16);
            if ((_QWORD*)(v57 - 48) == v72) {
              v73 = 32;
            LABEL_149:
              (*(void (**)(__int64))(*v72 + v73))((__int64)v72);
            }
            else if (v72 != nullptr) {
              v73 = 40;
              goto LABEL_149;
            }
            v74 = *(_QWORD*)(v57 - 64);
            if (v74 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v74);
            }
            v57 -= 80LL;
            if (v57 == v59) {
              goto LABEL_138;
            }
            continue;
          }
        }
      }
      *(_DWORD*)v59 = *(_DWORD*)v61;
      v63 = *(_QWORD*)(v61 + 8);
      v64 = *(_QWORD*)(v61 + 16);
      *(_QWORD*)(v61 + 8) = 0;
      *(_QWORD*)(v61 + 16) = 0;
      v65 = *(_QWORD*)(v59 + 16);
      *(_QWORD*)(v59 + 8) = v63;
      *(_QWORD*)(v59 + 16) = v64;
      if (v65 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v65);
      }
      v66 = *(_QWORD**)(v59 + 64);
      *(_QWORD*)(v59 + 64) = 0;
      if (v66 == (_QWORD*)(v59 + 32)) {
        v67 = 32;
      }
      else {
        if (v66 == nullptr) {
        LABEL_130:
          v68 = *(_QWORD*)(v61 + 64);
          if (v68 != 0) {
            if (v61 + 32 == v68) {
              *(_QWORD*)(v59 + 64) = v59 + 32;
              (*(void (**)(_QWORD, unsigned __int64))(
                  **(_QWORD**)(v61 + 64) + 24LL))(*(_QWORD*)(v61 + 64),
                                                  v59 + 32);
            }
            else {
              *(_QWORD*)(v59 + 64) = v68;
              *(_QWORD*)(v61 + 64) = 0;
            }
          }
          else {
            *(_QWORD*)(v59 + 64) = 0;
          }
          v59 += 80LL;
          goto LABEL_119;
        }
        v67 = 40;
      }
      (*(void (**)(__int64))(*v66 + v67))((__int64)v66);
      goto LABEL_130;
    }
  }
  if (v59 != v57) {
    goto LABEL_137;
  }
LABEL_135:
  v59 = v57;
  if (v55 == 0) {
    goto LABEL_194;
  }
LABEL_139:
  if (*(_QWORD*)(v55 + 8) == -1) {
    goto LABEL_193;
  }
  v69 = GameData_2235744 + 1;
  v70 = v2[37];
  ++GameData_2235744;
  if (v59 < v70) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v59 = v69;
    *(_QWORD*)(v59 + 8) = v56;
    *(_QWORD*)(v59 + 16) = v55;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                              memory_order_relaxed);
    v71 = v106_.v109;
    if (v106_.v109 != nullptr) {
      if (v106_.v109 == &v106_.v106) {
        *(_QWORD*)(v59 + 64) = v59 + 32;
        ((void (*)(__int64 (***)(void)))(*v71)[3])(v71);
      }
      else {
        *(_QWORD*)(v59 + 64) =
            ((__int64 (*)(__int64))(*v106_.v109)[2])((__int64)v106_.v109);
      }
    }
    else {
      *(_QWORD*)(v59 + 64) = 0;
    }
    std___1___shared_weak_count___release_weak_alt2(v55);
    v86 = v59 + 80;
    goto LABEL_192;
  }
  v75 = v2[35];
  v76 = v59 - v75;
  v77 = 1 - 0x3333333333333333LL * (v76 >> 4);
  if (v77 > 0x333333333333333LL) {
    GameRoutine_10982c0();
  }
  v78 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v70 - v75) >> 4);
  v79 = 2 * v78;
  if (2 * v78 <= v77) {
    v79 = 1 - 0x3333333333333333LL * (v76 >> 4);
  }
  if (v78 >= 0x199999999999999LL) {
    v80 = 0x333333333333333LL;
  }
  else {
    v80 = v79;
  }
  if (v80 != 0) {
    if (v80 > 0x333333333333333LL) {
      goto LABEL_214;
    }
    v81 = v6;
    v82 = 5 * v80;
    v83 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v80, 16, 0);
    v76 += v83;
    v84 = v83 + 16 * v82;
    v6 = v81;
  }
  else {
    v84 = 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                            memory_order_relaxed);
  *(_DWORD*)v76 = v69;
  *(_QWORD*)(v76 + 8) = v56;
  *(_QWORD*)(v76 + 16) = v55;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 16), 1u,
                            memory_order_relaxed);
  v85 = v106_.v109;
  if (v106_.v109 != nullptr) {
    if (v106_.v109 == &v106_.v106) {
      *(_QWORD*)(v76 + 64) = v76 + 32;
      ((void (*)(__int64 (***)(void)))(*v85)[3])(v85);
    }
    else {
      *(_QWORD*)(v76 + 64) =
          ((__int64 (*)(__int64))(*v106_.v109)[2])((__int64)v106_.v109);
    }
  }
  else {
    *(_QWORD*)(v76 + 64) = 0;
  }
  std___1___shared_weak_count___release_weak_alt2(v55);
  v87 = v2[35];
  v88 = (_QWORD*)v2[36];
  v86 = v76 + 80;
  v89 = v76 + v87 - (_QWORD)v88;
  if (v88 == (_QWORD*)v87) {
    goto LABEL_188;
  }
  v90 = v6;
  v91 = 0;
  do {
    v92 = v87 + v91;
    v93 = v89 + v91;
    *(_DWORD*)v93 = *(_DWORD*)(v87 + v91);
    *(_QWORD*)(v93 + 8) = *(_QWORD*)(v87 + v91 + 8);
    *(_QWORD*)(v93 + 16) = *(_QWORD*)(v87 + v91 + 16);
    *(_QWORD*)(v92 + 8) = 0;
    *(_QWORD*)(v92 + 16) = 0;
    v94 = *(_QWORD*)(v87 + v91 + 64);
    if (v94 != 0) {
      if (v92 + 32 == v94) {
        *(_QWORD*)(v93 + 64) = v93 + 32;
        (*(void (**)(_QWORD))(**(_QWORD**)(v92 + 64) + 24LL))(
            *(_QWORD*)(v92 + 64));
      }
      else {
        *(_QWORD*)(v93 + 64) = v94;
        *(_QWORD*)(v92 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v93 + 64) = 0;
    }
    v91 += 80;
  } while ((_QWORD*)(v87 + v91) != v88);
  v95 = (_QWORD*)(v87 + 32);
  while (2) {
    v97 = (_QWORD*)v95[4];
    if (v95 == v97) {
      v98 = 32;
    LABEL_184:
      (*(void (**)(__int64))(*v97 + v98))((__int64)v97);
    }
    else if (v97 != nullptr) {
      v98 = 40;
      goto LABEL_184;
    }
    v99 = *(v95 - 2);
    if (v99 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v99);
    }
    v96 = v95 + 6;
    v95 += 10;
    if (v96 != v88) {
      continue;
    }
    break;
  }
  v87 = v2[35];
  v6 = v90;
LABEL_188:
  v2[35] = v89;
  v2[36] = v86;
  v2[37] = v84;
  if (v87 != 0) {
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v87);
  }
LABEL_192:
  v2[36] = v86;
LABEL_193:
  std___1___shared_weak_count___release_weak_alt2(v55);
LABEL_194:
  if (v106_.v109 == &v106_.v106) {
    v101 = 4;
  LABEL_198:
    ((__int64 (*)(__int64))(*v106_.v109)[v101])((__int64)v106_.v109);
  }
  else if (v106_.v109 != nullptr) {
    v101 = 5;
    goto LABEL_198;
  }
  if (v55 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v55);
  }
  v102 = *(_QWORD*)(v6 + 24);
  v103 = *(_QWORD*)(v6 + 32);
  if (v103 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 16), 1u,
                              memory_order_relaxed);
    v110_.v110 = v102;
    v110_.v111 = v103;
    v106_.v106 = GameData_2007ec8;
    v106_.v107 = v6;
    v106_.v109 = &v106_.v106;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v110_.v110 = *(_QWORD*)(v6 + 24);
    v110_.v111 = 0;
    v106_.v106 = GameData_2007ec8;
    v106_.v107 = v6;
    v106_.v109 = &v106_.v106;
  }
  CombatCamera_1098420(v2 + 11, &v110_.v110, (__int64)&v106_.v106, 1);
  if (v110_.v111 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v110_.v111);
  }
  result = v106_.v109;
  if (v106_.v109 == &v106_.v106) {
    v105 = 4;
  LABEL_210:
    result = (__int64 (***)(void))((__int64 (*)(__int64))(*v106_.v109)[v105])(
        (__int64)v106_.v109);
  }
  else if (v106_.v109 != nullptr) {
    v105 = 5;
    goto LABEL_210;
  }
  if (v103 != 0) {
    return (__int64 (***)(void))std___1___shared_weak_count___release_weak_alt2(
        v103);
  }
  return result;
}

__int64 CombatCamera_1097a60(__int64 result, float a2)
{
  float v2;
  float32x4_t* v3;
  float v4;
  __int64 v5;
  float v6;
  float* v7;
  unsigned __int64 v8;
  float v9;
  float32x4_t v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int16x4_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float v19;
  unsigned __int64 v20;
  float32x4_t v21;
  int8x16_t v22;
  unsigned __int64 v23;
  unsigned __int32 v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float v27;
  float v28;
  float v29;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int v49;
  __int64 (*v50)(unsigned __int64);
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  float32x4_t v58;
  __int64 v59;
  __int64 vars0;
  __int64 vars8;

  v2 = *(float*)(result + 464);
  v3 = (float32x4_t*)result;
  if (v2 > 0.0f) {
    v4 = v2 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 48) *
                              -0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    *(float*)(result + 464) = v4;
    if (v4 <= 0.0f) {
      v5 = *(_QWORD*)(result + 472);
      *(_DWORD*)(result + 464) = 0;
      if (v5 != 0) {
        if (GameData_21ec7b0 != 0) {
          result = *(_QWORD*)(GameData_21ec7b0 + 128);
          if (result != 0) {
            v6 = a2;
            result = GameRoutine_1096780_alt1();
            a2 = v6;
          }
        }
        LANES128(v3[29]).n128_u64[1] = 0;
        LANES128(v3[29]).n128_u32[0] = 0;
      }
    }
  }
  if (a2 > 0.0f && LANES128(v3[11]).n128_u64[0] != 0) {
    if ((CharacterSelfie_10a6b90() & 1) != 0) {
      v7 = (float*)GameData_2235738;
      if (GameData_2235738 == 0) {
        goto LABEL_44;
      }
    LABEL_33:
      v29 = v7[247];
      if (v29 < 0.0f || v29 == v7[248]) {
      LABEL_44:
        GameRoutine_10ac700(
            &v3[22], LANES128(v3[4]).n128_u64[1],
            (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              48LL) *
                    0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
        v36 = LANES128(v3[4]).n128_u64[1];
        result = (__int64)&v3[27];
        if (LANES128(v3[28]).n128_u64[1] != 0) {
          v59 = vars0;
          vars0 = vars8;
          v37 = LANES128(v3[27]).n128_u64[1];
          if (v37 == 0 || (*(_QWORD*)(v37 + 8) != -1
                               ? (v38 = LANES128(v3[28]).n128_u64[0] == 0)
                               : (v38 = true),
                           v38)) {
            LANES128(v3[28]).n128_u64[1] = 0;
            v39 = *(_QWORD*)(game_g_frame_clock + 13224);
            v40 = *(_QWORD*)(v39 + 48);
            v41 = *(_QWORD*)(v39 + 56);
            if (v41 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                        memory_order_relaxed);
              v42 = *(_QWORD*)(*(_QWORD*)(v40 + 8) + 128LL);
              if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v41 + 16LL))(
                    v41, v36);
                result = std___1___shared_weak_count___release_weak_alt1(v41);
              }
            }
            else {
              v42 = *(_QWORD*)(*(_QWORD*)(v40 + 8) + 128LL);
            }
            if (*(_BYTE*)(v42 + 256) == 1) {
              *(_BYTE*)(v42 + 256) = 0;
            }
          }
          else {
            v43 = *(_QWORD*)(game_g_frame_clock + 13224);
            v44 = *(_QWORD*)(v43 + 48);
            v45 = *(_QWORD*)(v43 + 56);
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                        memory_order_relaxed);
              v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 128LL);
              if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v47 = result;
                v48 = v36;
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak_alt1(v45);
                result = v47;
                v36 = v48;
              }
            }
            else {
              v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 128LL);
            }
            v49 = *(_DWORD*)(v46 + 288);
            *(_BYTE*)(v46 + 256) = 1;
            *(_DWORD*)(v46 + 252) = v49;
            v50 = *(__int64 (**)(unsigned __int64))(*(_QWORD*)v36 + 16LL);
            v58 = *(float32x4_t*)(*(_QWORD*)(result + 24) + 48LL);
            result = v50(v36);
            if (*(_BYTE*)(v46 + 256) == 1) {
              v55 = v58;
              *(_BYTE*)(v46 + 256) = 1;
              v56 = vaddq_f32(
                  v54,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v51, LANES128(v55).n128_f32[0]), v52,
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1),
                      v53, v55, 2));
              LANES128(v56).n128_f32[0] = 5.0f;
              if (LANES128(v56).n128_f32[2] <= -5.0f) {
                LANES128(v56).n128_f32[0] = -LANES128(v56).n128_f32[2];
              }
              *(_DWORD*)(v46 + 252) = LANES128(v56).n128_u32[0];
            }
          }
        }
        return result;
      }
      v31 = v29 * *(float*)(GameData_21d8778 + 440);
      v32 = *(_QWORD*)(game_g_frame_clock + 13224);
      v33 = *(_QWORD*)(v32 + 48);
      v34 = *(_QWORD*)(v32 + 56);
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
        v35 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 168LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v31 > 0.0f) {
          LABEL_40:
            *(float*)(v35 + 92) = v31;
            *(_BYTE*)(v35 + 96) = 1;
            goto LABEL_44;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          std___1___shared_weak_count___release_weak_alt1(v34);
          if (v31 > 0.0f) {
            goto LABEL_40;
          }
        }
      }
      else {
        v35 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 168LL);
        if (v31 > 0.0f) {
          goto LABEL_40;
        }
      }
      if (*(_BYTE*)(v35 + 96) == 1) {
        *(_BYTE*)(v35 + 96) = 0;
      }
      goto LABEL_44;
    }
    GameRoutine_10be5c0(&v3[5]);
    if (LANES128(v3[12]).n128_u8[0] == 1) {
      LANES128(v3[12]).n128_u8[0] = 0;
    }
    else {
      v8 = LANES128(v3[11]).n128_u64[0];
      if (v8 != 0) {
        v9 = *(float*)(v8 + 88);
      LABEL_19:
        v10 = v3[9];
        v11 = 1.0f - v9;
        v12 =
            vaddq_f32(v3[18], vmulq_n_f32(vsubq_f32(v3[7], v3[18]), 1.0f - v9));
        v13 = vaddq_f32(v3[19], vmulq_n_f32(vsubq_f32(v3[8], v3[19]), v11));
        LANES128(v3[18]).n128_u64[0] = LANES128(v12).n128_u64[0];
        LANES128(v3[19]).n128_u64[0] = LANES128(v13).n128_u64[0];
        v14 = v3[18];
        v15 = v3[19];
        LANES128(v14).n128_u64[1] = LANES128(v12).n128_u32[2];
        LANES128(v15).n128_u64[1] = LANES128(v13).n128_u32[2];
        LANES128(v12).n128_u32[0] = LANES128(v3[21]).n128_u32[0];
        LANES128(v13).n128_f32[0] =
            LANES128(v3[10]).n128_f32[0] - LANES128(v12).n128_f32[0];
        v3[18] = v14;
        v3[19] = v15;
        LANES128(v3[21]).n128_f32[0] = LANES128(v12).n128_f32[0] +
                                       (float)(LANES128(v13).n128_f32[0] * v11);
        LANES64(v16).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v3[20], v10)))).n64_u64[0];
        if ((LANES64(v16).n64_u8[0] & 1) != 0 ||
            (LANES64(v16).n64_u8[2] & 1) != 0 ||
            (LANES64(v16).n64_u8[4] & 1) != 0) {
          v57 = v11;
          GameRoutine_109da60((void*)(&v58), &v3[20], v11);
          v11 = v57;
          v17 = LANES128(v58).n128_u32[2];
          LANES128(v3[20]).n128_u64[0] = LANES128(v58).n128_u64[0];
          v18 = v3[20];
          LANES128(v18).n128_u64[1] = v17;
          v3[20] = v18;
        }
        v19 = LANES128(v3[10]).n128_f32[2];
        v20 = LANES128(v3[11]).n128_u64[0];
        LANES128(v3[21]).n128_f32[1] =
            LANES128(v3[21]).n128_f32[1] +
            (float)((float)(LANES128(v3[10]).n128_f32[1] -
                            LANES128(v3[21]).n128_f32[1]) *
                    v11);
        LANES128(v3[21]).n128_f32[2] =
            LANES128(v3[21]).n128_f32[2] +
            (float)((float)(v19 - LANES128(v3[21]).n128_f32[2]) * v11);
        if (v20 != 0 && *(_BYTE*)(v20 + 97) == 1 &&
            (GameRoutine_10bfbf0(&v3[5]) & 1) == 0) {
          CombatCamera_1097e40_alt1(v3);
        }
        v21 = vsubq_f32(v3[19], v3[18]);
        v22 = vmulq_f32(v21, v21);
        LANES128(v22).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                .n64_f32[0] >= 0x1.47ae140000000p-7f) {
          v23 = LANES128(v3[4]).n128_u64[1];
          v24 = LANES128(v3[21]).n128_u32[0];
          *(_DWORD*)(v23 + 8) = 0;
          *(_DWORD*)(v23 + 92) = 0;
          *(float32x4_t*)(v23 + 16) = v3[18];
          *(float32x4_t*)(v23 + 32) = v3[19];
          v25 = v3[20];
          *(_DWORD*)(v23 + 96) = v24;
          *(_DWORD*)(v23 + 92) = 0;
          *(float32x4_t*)(v23 + 48) = v25;
          GameRoutine_b3aee0();
        }
        v26 = LANES128(v3[4]).n128_u64[1];
        v7 = (float*)*GameData_212fff0[0];
        if (*GameData_212fff0[0] != 0) {
          v27 = v7[246];
        }
        else {
          v27 = 0.0f;
        }
        v28 = *(float*)(v26 + 96) + v27;
        *(_DWORD*)(v26 + 92) = 0;
        *(float*)(v26 + 96) = v28;
        if (v7 == nullptr) {
          goto LABEL_44;
        }
        goto LABEL_33;
      }
    }
    v9 = 0.0f;
    goto LABEL_19;
  }
  return result;
}

__int64 CombatCamera_1097e40(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_BYTE*)(a1 + 488) = 1;
  v2 = *(_QWORD*)(a1 + 176);
  v3 = GameData_212ee68[0];
  if (v2 != 0) {
    v4 = v2 + 1;
    if (((*(_BYTE*)v2 & 1) == 0 || (v4 = *(_QWORD*)(v2 + 16)) != 0) &&
        (unsigned int)strcmp(v4, "WallShot") == 0) {
      v5 = *(_QWORD*)(*v3 + 8);
      v6 = *(_QWORD*)(*v3 + 16);
      if (v6 == v5) {
      LABEL_9:
        v5 = 0;
      }
      else {
        v7 = 0x4EC4EC4EC4EC4EC5LL * ((v6 - v5) >> 3);
        while (*(_DWORD*)(v5 + 24) != -842878802) {
          --v7;
          v5 += 104;
          if (v7 == 0) {
            goto LABEL_9;
          }
        }
      }
      if ((GameRoutine_1096780(a1, (unsigned __int8*)v5, 0) & 1) != 0) {
        return 1;
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 272);
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *v3;
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 194) = 0;
  v10 = *(_QWORD*)(v9 + 8);
  v11 = *(_QWORD*)(v9 + 16);
  if (v11 == v10) {
  LABEL_17:
    v10 = 0;
  }
  else {
    v12 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - v10) >> 3);
    while (*(_DWORD*)(v10 + 24) != 2052559) {
      --v12;
      v10 += 104;
      if (v12 == 0) {
        goto LABEL_17;
      }
    }
  }
  if ((GameRoutine_1096780(a1, (unsigned __int8*)v10, 0) & 1) != 0) {
    return 1;
  }
  v14 = *(_QWORD*)(*v3 + 8);
  v15 = *(_QWORD*)(*v3 + 16);
  if (v15 == v14) {
  LABEL_24:
    v14 = 0;
  }
  else {
    v16 = 0x4EC4EC4EC4EC4EC5LL * ((v15 - v14) >> 3);
    while (*(_DWORD*)(v14 + 24) != 1890962995) {
      --v16;
      v14 += 104;
      if (v16 == 0) {
        goto LABEL_24;
      }
    }
  }
  return GameRoutine_1096780(a1, (unsigned __int8*)v14, 0);
}

__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  char v4;
  unsigned __int8* v5;

  if ((a2 & 0x80000000) != 0) {
    v4 = a3 & 1;
    v5 = nullptr;
  }
  else {
    v3 = *(_QWORD*)(*GameData_212ee68[0] + 8);
    if (0x4EC4EC4EC4EC4EC5LL *
            ((*(_QWORD*)(*GameData_212ee68[0] + 16) - v3) >> 3) <=
        (unsigned __int64)(unsigned int)a2) {
      GameRoutine_d38e30(a1, a2);
    }
    v4 = a3 & 1;
    v5 = (unsigned __int8*)(v3 + 104LL * (unsigned int)a2);
  }
  return GameRoutine_1096780(a1, v5, v4);
}

void game_combat_CombatCamera_SubscribeSignals_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(*a2 + 32);
  if (v4 != 1) {
    if (v4 == 0) {
      GameRoutine_10ac520(
          v3 + 352, (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) + 304LL),
          *(_DWORD*)(v2 + 36));
    }
    return;
  }
  v5 = *(float*)(v3 + 384);
  v6 = *(int*)(v2 + 36);
  if (v5 < 0x0.0p+0f ||
      v5 >= (float)(*(float*)(v3 + 376) +
                    (float)(*(float*)(v3 + 368) +
                            fmaxf(*(float*)(v3 + 372), 0x0.0p+0f)))) {
    v7 = *(_QWORD*)GameData_212d270;
    v8 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 120LL) *
         0x1.1111120000000p-6f;
    if ((float)(v8 * 0x1.99999a0000000p-4f) < 0x0.0p+0f ||
        (float)(v8 * 0x1.99999a0000000p-3f) < 0x0.0p+0f) {
      if (*(float*)(v3 + 352) != *(float*)(v3 + 356)) {
      LABEL_11:
        v12 = *(float*)(v3 + 372);
        *(_DWORD*)(v3 + 384) = 0;
        *(_BYTE*)(v3 + 380) = v12 < 0x0.0p+0f;
      }
    }
    else {
      v9 = *(float*)(v7 + 124);
      v10 = *(float*)(v7 + 4 * v6 + 128);
      *(float*)(v3 + 372) = v8;
      *(_DWORD*)(v3 + 352) = 0;
      *(float*)(v3 + 368) = v8 * 0x1.99999a0000000p-4f;
      *(float*)(v3 + 376) = v8 * 0x1.99999a0000000p-3f;
      *(_QWORD*)(v3 + 360) = 0xB0000000BLL;
      *(_DWORD*)(v3 + 384) = -1082130432;
      v11 = v10 * v9;
      *(float*)(v3 + 356) = v11;
      if (v11 != 0x0.0p+0f) {
        goto LABEL_11;
      }
    }
    *(_DWORD*)(v3 + 388) = -1082130432;
  }
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v2 + 32) == 1) {
    v5 = *(_BYTE*)(v2 + 40);
    v6 = *(_QWORD*)(v2 + 56);
    v7 = v2 + 41;
    v8 = v4 + 432;
    if ((v5 & 1) != 0) {
      v9 = v6;
    }
    else {
      v9 = v7;
    }
  }
  else {
    v8 = v4 + 432;
    v9 = 0;
  }
  return GameRoutine_1115cc0(v8, v3, v9);
}

__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
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
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CombatCamera_1098760(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    __int64* v33;
  } v29_;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_1098c40_alt1();
  }
  v7 = a1[2];
  v29_.v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210_alt1();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29_.v29 = v15;
  v29_.v30 = v17;
  v29_.v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak_alt2(v19);
  }
LABEL_19:
  v29_.v31 = v17 + 80;
  CombatCamera_1098ae0(a1, &v29_.v29);
  v21 = a1[1];
  v22 = v29_.v30;
  while (1) {
    v23 = v29_.v31;
    if (v22 == v29_.v31) {
      break;
    }
    v29_.v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v26);
    }
  }
  if (v29_.v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v27, v29_.v29);
  }
  return v21;
}

__int64* CombatCamera_1098ae0(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak_alt2(
            (__int64)result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;

  v1 = *(unsigned __int8**)(*(_QWORD*)(result + 8) + 176LL);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = *((_QWORD*)v1 + 1);
    if ((v2 & 1) == 0) {
      v3 = v2 >> 1;
    }
    if (v3 >= 8) {
      if ((v2 & 1) != 0) {
        v4 = *((_QWORD**)v1 + 2);
      }
      else {
        v4 = v1 + 1;
      }
      if (*v4 == 0x746F68536C6C6157LL) {
        return GameRoutine_10f2400(0, 1);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
