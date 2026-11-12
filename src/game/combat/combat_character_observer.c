#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212fe68;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatCharacterObserver_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_10f15b0();
__n128 GameRoutine_106c820(_QWORD*, __int64, __n128 result);
extern __int64 (*GameData_200ece8[])();
extern __int64 GameData_21ec7b0;
void CharacterSelfie_10a6ac0(__int64);
void game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke_alt1(
    __int64 a1, __n128 a2) __asm__("game_combat_CombatCharacterObserver_"
                                   "CombatCharacterObserver_lambda1_Invoke");
__int64
CharacterSelfie_10a6ac0_alt1(__int64 result) __asm__("CharacterSelfie_10a6ac0");
__int64 GameHr_10f15b0();
__int64 GameRoutine_106c820_alt1(_QWORD*,
                                 __int64) __asm__("GameRoutine_106c820");
__int64
game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_200e920[])();
extern __int64 (*GameData_200e9b0[])();
extern __int64 (*game_combat_CombatCharacterObserver_vtable[])();
extern int GameData_2235744;
void __attribute__((noreturn)) GameRoutine_1101ca0();
void __attribute__((noreturn)) GameRoutine_1102670();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD*
game_combat_CombatCharacterObserver_CombatCharacterObserver(_QWORD* result,
                                                            _QWORD* a2);
_QWORD*

game_combat_CombatCharacterObserver_CombatCharacterObserver(_QWORD* result,
                                                            _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  int v72;
  unsigned __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  unsigned __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  struct {
    _QWORD v104[4];
    _QWORD* v105;
  } v104_;

  v2 = (__int64)result;
  *result = GameData_212fe68 + 16;
  result[1] = a2;
  result[2] = a2[21];
  v3 = a2;
  v4 = a2[22];
  result[3] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v3 = (_QWORD*)result[1];
  }
  v5 = a2[23];
  *((_BYTE*)result + 40) = 0;
  result[4] = v5;
  *result = game_combat_CombatCharacterObserver_vtable;
  v6 = v3[10];
  if (v6 == 0) {
    return result;
  }
  v7 = v3[11];
  if (*(_QWORD*)(v6 + 8) == -1 || v7 == 0) {
    return result;
  }
  v9 = *(_QWORD**)(v7 + 120);
  v11 = v3[3];
  v10 = v3[4];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v104_.v105 = v104_.v104;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v104_.v104[0] = GameData_200e920;
    v104_.v104[1] = result;
    if (v104_.v105 == nullptr) {
      goto LABEL_101;
    }
  }
  else {
    v104_.v105 = v104_.v104;
    v104_.v104[0] = GameData_200e920;
    v104_.v104[1] = result;
  }
  v13 = v9[27];
  v12 = v9[28];
  if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v12 - v13) >> 4) < 0x40) {
    goto LABEL_43;
  }
  v14 = v9[27];
  if (v13 != v12) {
    v14 = v9[27];
    while (*(_DWORD*)v14 != 0) {
      v15 = *(_QWORD*)(v14 + 16);
      if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
        break;
      }
      v14 += 80LL;
      if (v14 == v12) {
        goto LABEL_43;
      }
    }
  }
  if (v14 != v12) {
    v16 = v9;
    v17 = v14 + 80;
    if (v14 + 80 == v12) {
    LABEL_41:
      v9 = v16;
      goto LABEL_42;
    }
    while (1) {
      if (*(_DWORD*)v17 != 0) {
        v18 = *(_QWORD*)(v17 + 16);
        if (v18 != 0 && *(_QWORD*)(v18 + 8) != -1) {
          break;
        }
      }
    LABEL_25:
      v17 += 80LL;
      if (v17 == v12) {
        v12 = v16[28];
        goto LABEL_41;
      }
    }
    *(_DWORD*)v14 = *(_DWORD*)v17;
    v19 = *(_QWORD*)(v17 + 8);
    v20 = *(_QWORD*)(v17 + 16);
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    v21 = *(_QWORD*)(v14 + 16);
    *(_QWORD*)(v14 + 8) = v19;
    *(_QWORD*)(v14 + 16) = v20;
    if (v21 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    v22 = *(_QWORD**)(v14 + 64);
    *(_QWORD*)(v14 + 64) = 0;
    if (v22 == (_QWORD*)(v14 + 32)) {
      v23 = 32;
    }
    else {
      if (v22 == nullptr) {
      LABEL_36:
        v24 = *(_QWORD*)(v17 + 64);
        if (v24 != 0) {
          if (v17 + 32 == v24) {
            *(_QWORD*)(v14 + 64) = v14 + 32;
            (*(void (**)(_QWORD, unsigned __int64))(
                **(_QWORD**)(v17 + 64) + 24LL))(*(_QWORD*)(v17 + 64), v14 + 32);
          }
          else {
            *(_QWORD*)(v14 + 64) = v24;
            *(_QWORD*)(v17 + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v14 + 64) = 0;
        }
        v14 += 80LL;
        goto LABEL_25;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*v22 + v23))((__int64)v22);
    goto LABEL_36;
  }
LABEL_42:
  if (v14 != v12) {
    while (1) {
      v28 = *(_QWORD**)(v12 - 16);
      if ((_QWORD*)(v12 - 48) == v28) {
        break;
      }
      if (v28 != nullptr) {
        v29 = 40;
      LABEL_57:
        (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
      }
      v30 = *(_QWORD*)(v12 - 64);
      if (v30 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v30);
      }
      v12 -= 80LL;
      if (v12 == v14) {
        v9[28] = v14;
        if (v10 == 0) {
          goto LABEL_102;
        }
        goto LABEL_47;
      }
    }
    v29 = 32;
    goto LABEL_57;
  }
LABEL_43:
  v14 = v12;
  if (v10 == 0) {
    goto LABEL_102;
  }
LABEL_47:
  if (*(_QWORD*)(v10 + 8) == -1) {
    goto LABEL_101;
  }
  v25 = GameData_2235744 + 1;
  v26 = v9[29];
  ++GameData_2235744;
  if (v14 < v26) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v14 = v25;
    *(_QWORD*)(v14 + 8) = v11;
    *(_QWORD*)(v14 + 16) = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v27 = v104_.v105;
    if (v104_.v105 != nullptr) {
      if (v104_.v105 == v104_.v104) {
        *(_QWORD*)(v14 + 64) = v14 + 32;
        (*(void (**)(_QWORD*))(*v27 + 24LL))(v27);
      }
      else {
        *(_QWORD*)(v14 + 64) =
            (*(__int64 (**)(__int64))(*v104_.v105 + 16LL))((__int64)v104_.v105);
      }
    }
    else {
      *(_QWORD*)(v14 + 64) = 0;
    }
    std___1___shared_weak_count___release_weak_alt1(v10);
    v41 = v14 + 80;
    goto LABEL_100;
  }
  v31 = v9[27];
  v32 = v14 - v31;
  v33 = 1 - 0x3333333333333333LL * (v32 >> 4);
  if (v33 > 0x333333333333333LL) {
    GameRoutine_1101ca0();
  }
  v34 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v26 - v31) >> 4);
  v35 = 2 * v34;
  if (2 * v34 <= v33) {
    v35 = 1 - 0x3333333333333333LL * (v32 >> 4);
  }
  if (v34 >= 0x199999999999999LL) {
    v36 = 0x333333333333333LL;
  }
  else {
    v36 = v35;
  }
  if (v36 != 0) {
    if (v36 > 0x333333333333333LL) {
      goto LABEL_210;
    }
    v37 = 5 * v36;
    v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v36, 16, 0);
    v32 += v38;
    v39 = v38 + 16 * v37;
  }
  else {
    v39 = 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  *(_DWORD*)v32 = v25;
  *(_QWORD*)(v32 + 8) = v11;
  *(_QWORD*)(v32 + 16) = v10;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v40 = v104_.v105;
  if (v104_.v105 != nullptr) {
    if (v104_.v105 == v104_.v104) {
      *(_QWORD*)(v32 + 64) = v32 + 32;
      (*(void (**)(_QWORD*))(*v40 + 24LL))(v40);
    }
    else {
      *(_QWORD*)(v32 + 64) =
          (*(__int64 (**)(__int64))(*v104_.v105 + 16LL))((__int64)v104_.v105);
    }
  }
  else {
    *(_QWORD*)(v32 + 64) = 0;
  }
  std___1___shared_weak_count___release_weak_alt1(v10);
  v42 = v9[27];
  v43 = (_QWORD*)v9[28];
  v41 = v32 + 80;
  v44 = v32 + v42 - (_QWORD)v43;
  if (v43 == (_QWORD*)v42) {
    goto LABEL_96;
  }
  v45 = 0;
  do {
    v46 = v42 + v45;
    v47 = v44 + v45;
    *(_DWORD*)v47 = *(_DWORD*)(v42 + v45);
    *(_QWORD*)(v47 + 8) = *(_QWORD*)(v42 + v45 + 8);
    *(_QWORD*)(v47 + 16) = *(_QWORD*)(v42 + v45 + 16);
    *(_QWORD*)(v46 + 8) = 0;
    *(_QWORD*)(v46 + 16) = 0;
    v48 = *(_QWORD*)(v42 + v45 + 64);
    if (v48 != 0) {
      if (v46 + 32 == v48) {
        *(_QWORD*)(v47 + 64) = v47 + 32;
        (*(void (**)(_QWORD))(**(_QWORD**)(v46 + 64) + 24LL))(
            *(_QWORD*)(v46 + 64));
      }
      else {
        *(_QWORD*)(v47 + 64) = v48;
        *(_QWORD*)(v46 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v47 + 64) = 0;
    }
    v45 += 80;
  } while ((_QWORD*)(v42 + v45) != v43);
  v49 = (_QWORD*)(v42 + 32);
  do {
    v51 = (_QWORD*)v49[4];
    if (v49 == v51) {
      v52 = 32;
    }
    else {
      if (v51 == nullptr) {
        goto LABEL_93;
      }
      v52 = 40;
    }
    (*(void (**)(__int64))(*v51 + v52))((__int64)v51);
  LABEL_93:
    v53 = *(v49 - 2);
    if (v53 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v53);
    }
    v50 = v49 + 6;
    v49 += 10;
  } while (v50 != v43);
  v42 = v9[27];
LABEL_96:
  v9[27] = v44;
  v9[28] = v41;
  v9[29] = v39;
  if (v42 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v42);
  }
LABEL_100:
  v9[28] = v41;
LABEL_101:
  std___1___shared_weak_count___release_weak_alt1(v10);
LABEL_102:
  if (v104_.v105 == v104_.v104) {
    v55 = 32;
  LABEL_106:
    (*(void (**)(__int64))(*v104_.v105 + v55))((__int64)v104_.v105);
  }
  else if (v104_.v105 != nullptr) {
    v55 = 40;
    goto LABEL_106;
  }
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  v56 = *(_QWORD*)(v2 + 8);
  v57 = *(_QWORD**)(v7 + 120);
  v59 = *(_QWORD*)(v56 + 24);
  v58 = *(_QWORD*)(v56 + 32);
  if (v58 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                              memory_order_relaxed);
    v104_.v105 = v104_.v104;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                              memory_order_relaxed);
    v104_.v104[0] = GameData_200e9b0;
    v104_.v104[1] = v2;
    if (v104_.v105 == nullptr) {
      goto LABEL_201;
    }
  }
  else {
    v104_.v105 = v104_.v104;
    v104_.v104[0] = GameData_200e9b0;
    v104_.v104[1] = v2;
  }
  v61 = v57[31];
  v60 = v57[32];
  if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v60 - v61) >> 4) >= 0x40) {
    v62 = v57[31];
    if (v61 != v60) {
      v62 = v57[31];
      while (*(_DWORD*)v62 != 0) {
        v63 = *(_QWORD*)(v62 + 16);
        if (v63 == 0 || *(_QWORD*)(v63 + 8) == -1) {
          break;
        }
        v62 += 80LL;
        if (v62 == v60) {
          goto LABEL_143;
        }
      }
    }
    if (v62 == v60 || (v64 = v62 + 80, v62 + 80 == v60)) {
    LABEL_142:
      if (v62 == v60) {
        goto LABEL_143;
      }
      while (2) {
        v75 = *(_QWORD**)(v60 - 16);
        if ((_QWORD*)(v60 - 48) == v75) {
          v76 = 32;
        LABEL_157:
          (*(void (**)(__int64))(*v75 + v76))((__int64)v75);
        }
        else if (v75 != nullptr) {
          v76 = 40;
          goto LABEL_157;
        }
        v77 = *(_QWORD*)(v60 - 64);
        if (v77 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v77);
        }
        v60 -= 80LL;
        if (v60 == v62) {
          v57[32] = v62;
          if (v58 == 0) {
            goto LABEL_202;
          }
          goto LABEL_147;
        }
        continue;
      }
    }
    while (2) {
      if (*(_DWORD*)v64 != 0) {
        v65 = *(_QWORD*)(v64 + 16);
        if (v65 != 0 && *(_QWORD*)(v65 + 8) != -1) {
          *(_DWORD*)v62 = *(_DWORD*)v64;
          v66 = *(_QWORD*)(v64 + 8);
          v67 = *(_QWORD*)(v64 + 16);
          *(_QWORD*)(v64 + 8) = 0;
          *(_QWORD*)(v64 + 16) = 0;
          v68 = *(_QWORD*)(v62 + 16);
          *(_QWORD*)(v62 + 8) = v66;
          *(_QWORD*)(v62 + 16) = v67;
          if (v68 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v68);
          }
          v69 = *(_QWORD**)(v62 + 64);
          *(_QWORD*)(v62 + 64) = 0;
          if (v69 == (_QWORD*)(v62 + 32)) {
            v70 = 32;
          LABEL_136:
            (*(void (**)(__int64))(*v69 + v70))((__int64)v69);
          }
          else if (v69 != nullptr) {
            v70 = 40;
            goto LABEL_136;
          }
          v71 = *(_QWORD*)(v64 + 64);
          if (v71 != 0) {
            if (v64 + 32 == v71) {
              *(_QWORD*)(v62 + 64) = v62 + 32;
              (*(void (**)(_QWORD, unsigned __int64))(
                  **(_QWORD**)(v64 + 64) + 24LL))(*(_QWORD*)(v64 + 64),
                                                  v62 + 32);
            }
            else {
              *(_QWORD*)(v62 + 64) = v71;
              *(_QWORD*)(v64 + 64) = 0;
            }
          }
          else {
            *(_QWORD*)(v62 + 64) = 0;
          }
          v62 += 80LL;
        }
      }
      v64 += 80LL;
      if (v64 == v60) {
        v60 = v57[32];
        goto LABEL_142;
      }
      continue;
    }
  }
LABEL_143:
  v62 = v60;
  if (v58 == 0) {
    goto LABEL_202;
  }
LABEL_147:
  if (*(_QWORD*)(v58 + 8) == -1) {
    goto LABEL_201;
  }
  v72 = GameData_2235744 + 1;
  v73 = v57[33];
  ++GameData_2235744;
  if (v62 < v73) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v62 = v72;
    *(_QWORD*)(v62 + 8) = v59;
    *(_QWORD*)(v62 + 16) = v58;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                              memory_order_relaxed);
    v74 = v104_.v105;
    if (v104_.v105 != nullptr) {
      if (v104_.v105 == v104_.v104) {
        *(_QWORD*)(v62 + 64) = v62 + 32;
        (*(void (**)(_QWORD*))(*v74 + 24LL))(v74);
      }
      else {
        *(_QWORD*)(v62 + 64) =
            (*(__int64 (**)(__int64))(*v104_.v105 + 16LL))((__int64)v104_.v105);
      }
    }
    else {
      *(_QWORD*)(v62 + 64) = 0;
    }
    std___1___shared_weak_count___release_weak_alt1(v58);
    v89 = v62 + 80;
    goto LABEL_200;
  }
  v78 = v57[31];
  v79 = v62 - v78;
  v80 = 1 - 0x3333333333333333LL * ((__int64)(v62 - v78) >> 4);
  if (v80 > 0x333333333333333LL) {
    GameRoutine_1102670();
  }
  v81 = fw_memory_g_heap_manager_ptr;
  v82 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v73 - v78) >> 4);
  v83 = 2 * v82;
  if (2 * v82 <= v80) {
    v83 = v80;
  }
  if (v82 >= 0x199999999999999LL) {
    v84 = 0x333333333333333LL;
  }
  else {
    v84 = v83;
  }
  if (v84 != 0) {
    if (v84 <= 0x333333333333333LL) {
      v85 = 5 * v84;
      v86 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v84, 16, 0);
      v79 += v86;
      v87 = v86 + 16 * v85;
      goto LABEL_171;
    }
  LABEL_210:
    GameRoutine_60a210();
  }
  v87 = 0;
LABEL_171:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                            memory_order_relaxed);
  *(_DWORD*)v79 = v72;
  *(_QWORD*)(v79 + 8) = v59;
  *(_QWORD*)(v79 + 16) = v58;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                            memory_order_relaxed);
  v88 = v104_.v105;
  if (v104_.v105 != nullptr) {
    if (v104_.v105 == v104_.v104) {
      *(_QWORD*)(v79 + 64) = v79 + 32;
      (*(void (**)(_QWORD*))(*v88 + 24LL))(v88);
    }
    else {
      *(_QWORD*)(v79 + 64) =
          (*(__int64 (**)(__int64))(*v104_.v105 + 16LL))((__int64)v104_.v105);
    }
  }
  else {
    *(_QWORD*)(v79 + 64) = 0;
  }
  std___1___shared_weak_count___release_weak_alt1(v58);
  v90 = v57[31];
  v91 = (_QWORD*)v57[32];
  v89 = v79 + 80;
  v92 = v79 + v90 - (_QWORD)v91;
  if (v91 == (_QWORD*)v90) {
    goto LABEL_196;
  }
  v93 = 0;
  do {
    v94 = v90 + v93;
    v95 = v92 + v93;
    *(_DWORD*)v95 = *(_DWORD*)(v90 + v93);
    *(_QWORD*)(v95 + 8) = *(_QWORD*)(v90 + v93 + 8);
    *(_QWORD*)(v95 + 16) = *(_QWORD*)(v90 + v93 + 16);
    *(_QWORD*)(v94 + 8) = 0;
    *(_QWORD*)(v94 + 16) = 0;
    v96 = *(_QWORD*)(v90 + v93 + 64);
    if (v96 != 0) {
      if (v94 + 32 == v96) {
        *(_QWORD*)(v95 + 64) = v95 + 32;
        (*(void (**)(_QWORD))(**(_QWORD**)(v94 + 64) + 24LL))(
            *(_QWORD*)(v94 + 64));
      }
      else {
        *(_QWORD*)(v95 + 64) = v96;
        *(_QWORD*)(v94 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v95 + 64) = 0;
    }
    v93 += 80;
  } while ((_QWORD*)(v90 + v93) != v91);
  v97 = (_QWORD*)(v90 + 32);
  while (2) {
    v99 = (_QWORD*)v97[4];
    if (v97 == v99) {
      v100 = 32;
    LABEL_192:
      (*(void (**)(__int64))(*v99 + v100))((__int64)v99);
    }
    else if (v99 != nullptr) {
      v100 = 40;
      goto LABEL_192;
    }
    v101 = *(v97 - 2);
    if (v101 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v101);
    }
    v98 = v97 + 6;
    v97 += 10;
    if (v98 != v91) {
      continue;
    }
    break;
  }
  v90 = v57[31];
LABEL_196:
  v57[31] = v92;
  v57[32] = v89;
  v57[33] = v87;
  if (v90 != 0) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)v81 + 200LL) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v81 + v102, v90);
  }
LABEL_200:
  v57[32] = v89;
LABEL_201:
  std___1___shared_weak_count___release_weak_alt1(v58);
LABEL_202:
  result = v104_.v105;
  if (v104_.v105 == v104_.v104) {
    v103 = 32;
  LABEL_206:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*v104_.v105 + v103))(
        (__int64)v104_.v105);
  }
  else if (v104_.v105 != nullptr) {
    v103 = 40;
    goto LABEL_206;
  }
  if (v58 != 0) {
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v58);
  }
  return result;
}

__int64 CombatCharacterObserver_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_212fe68 + 16;
  v2 = a1[3];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64

game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda1_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 40) != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    v3 = *(_QWORD*)(v2 + 80);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v2 + 88);
      if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
        if (GameData_21ec7b0 != 0) {
          v7_.v7[0] = GameData_200ece8;
          v7_.v7[1] = v4;
          v7_.v8 = v7_.v7;
          v7_.v7[2] = 1;
          GameRoutine_106c820_alt1((_QWORD*)GameData_21ec7b0, (__int64)v7_.v7);
          if (v7_.v8 == v7_.v7) {
            v6 = 32;
            goto LABEL_12;
          }
          if (v7_.v8 != nullptr) {
            v6 = 40;
          LABEL_12:
            (*(void (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
          }
        }
        GameHr_10f15b0();
        result = CharacterSelfie_10a6ac0_alt1(*(_QWORD*)(v4 + 128));
        *(_BYTE*)(v1 + 40) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
