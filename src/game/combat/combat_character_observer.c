#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__attribute__((swiftcall)) void
CombatCharacterSound_1091ac0(PSEUDO_X8, __int64 result, __int64, float);
__attribute__((swiftcall)) void GameHr_108d740(PSEUDO_X8, _QWORD*, const char*);
__int64 CharacterBuilder_10821f0(__int64 result);
__int64 CombatUniverse_106bd20(__int64, unsigned int);
__int64 GameRoutine_1068e00(__int64, __int64, long double);
__int64 GameRoutine_108cfd0(int);
__int64 game_character_CharacterSelfie_Start(__int64 result, char, __int64*);
__int64 game_combat_106c820(_QWORD*, __int64);
extern __int64* GameData_212d448[9];
extern __int64 GameData_2235e30;
extern int GameData_21d92e0;
float GameRoutine_10773c0(int);
float game_combat_1068a00(__int64);
void CharacterAnimator_1079fe0(__int64);
void game_combat_1068b40(__int64, char);
__int64
game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda0_Invoke(
    __int64 result, __int64* a2);
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

game_combat_CombatCharacterObserver_CombatCharacterObserver_lambda0_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64* v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  int v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  long double v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  float v58;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  float v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;
  __int64* v75;
  float v76;
  float* v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  __int64 v87;
  long double v88;
  float v89;
  __int64 v90;
  float* v91;
  float v92;
  float v93;
  float* v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  __int64 v100;
  long double v101;
  __int64 v102;
  float* v103;
  float* v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  __int64 v110;
  float v112;
  struct {
    __int64 v113;
    __int64 v114;
  } v113_;
  struct {
    __int64 (**v115)();
    __int64 v116;
    __int64 v117;
    char gap56_[8];
    __int64* v118;
  } v115_;

  v2 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
    return result;
  }
  v3 = *a2;
  v4 = GameData_212d448[0];
  v5 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v6 = *(_QWORD*)(v5 + 8);
    if (v6 != 0 && (*(_BYTE*)(v6 + 113) & 0x80) != 0) {
      return result;
    }
  }
  v7 = *(_QWORD*)(v2 + 8);
  v8 = *(_QWORD*)(v7 + 80);
  if (v8 == 0) {
    return result;
  }
  v9 = *(_QWORD*)(v7 + 88);
  if (*(_QWORD*)(v8 + 8) == -1 || v9 == 0) {
    return result;
  }
  if (v5 != 0) {
    v11 = *(_QWORD*)(v5 + 8);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 32);
      v13 = *(_QWORD*)(v11 + 40);
      if (v12 == v13) {
        v17 = &GameData_2235e30;
      }
      else {
        v14 = *(_DWORD*)(v11 + 56);
        v15 = 954437177 * ((unsigned __int64)(v13 - v12) >> 4) - 1;
        if (v14 < v15) {
          v15 = v14;
        }
        if (v14 >= 0) {
          v16 = v15;
        }
        else {
          v16 = 0;
        }
        if (v12 == 0) {
          goto LABEL_29;
        }
        v17 = (__int64*)(v12 + 144LL * v16);
      }
      if ((*(_BYTE*)v17 & 4) != 0) {
        if (*(_DWORD*)(v7 + 96) == *((_DWORD*)v17 + 2)) {
          GameHr_108d740((void*)(&v113_.v113), *(_QWORD**)(v9 + 80),
                         "Btl_AttackC_Start_FireA");
          v18 = v113_.v114;
          if (v113_.v114 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v113_.v114 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak_alt1(v18);
          }
          CombatCharacterSound_1091ac0(
              (void*)((__int64)&v115_.v115), *(_QWORD*)(v2 + 8) + 872LL,
              (__int64)"Critical", 0x1.0000000000000p+0f);
        }
      }
      else {
        result = GameRoutine_108cfd0(*(_DWORD*)(*(_QWORD*)(v7 + 368) + 120LL));
        if ((result & 1) != 0) {
          return result;
        }
      }
    }
  }
LABEL_29:
  if (v3 != 0) {
    v19 = *(float*)(v3 + 32);
    v20 = *v4;
    if (*v4 == 0) {
      goto LABEL_96;
    }
  }
  else {
    v19 = 0x0.0p+0f;
    v20 = *v4;
    if (*v4 == 0) {
      goto LABEL_96;
    }
  }
  v21 = *(_QWORD*)(v20 + 8);
  if (v21 != 0) {
    v22 = *(float*)(v21 + 120) >= *(float*)(v21 + 128);
    if (*(float*)(v21 + 124) >= *(float*)(v21 + 132)) {
      v22 = true;
    }
    v23 = v22 || (*(_BYTE*)(v21 + 112) & 0x40) != 0;
    if (v19 <= 0x0.0p+0f && !v22 && (*(_BYTE*)(v21 + 112) & 0x40) == 0) {
      if ((*(_DWORD*)(v21 + 112) & 0x100000) != 0) {
        v24 = 0x1.1000000000000p+3f;
      }
      else {
        v24 = 0x1.6000000000000p+2f;
      }
      goto LABEL_44;
    }
  }
  else {
    v23 = 0;
    if (v19 <= 0x0.0p+0f) {
      v24 = 0x1.6000000000000p+2f;
      goto LABEL_44;
    }
  }
  v24 = v19;
LABEL_44:
  v25 = v20 + 24LL * (((*(_DWORD*)(*(_QWORD*)(v2 + 8) + 96LL) - 1) &
                       0xFFFFFFFD) != 0);
  v26 = *(_QWORD*)(v25 + 32);
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                              memory_order_relaxed);
    v27 = *(_QWORD*)(v25 + 40);
    v28 = *(_QWORD*)(v26 + 8) == -1 || v27 == 0;
    if (v28 || (v29 = *(_QWORD*)(v27 + 80)) == 0 ||
        (*(_QWORD*)(v29 + 8) != -1 ? (v30 = *(_QWORD*)(v27 + 88) == 0)
                                   : (v30 = true),
         v30)) {
      std___1___shared_weak_count___release_weak_alt1(v26);
      goto LABEL_89;
    }
    v56 = *(_QWORD*)(v26 + 8) == -1 ? 0LL : v27;
    std___1___shared_weak_count___release_weak_alt1(v26);
    if (v56 != 0 && v24 > 0x0.0p+0f) {
      v31 = *(_QWORD*)(v2 + 8);
      v32 = *(_QWORD*)(v31 + 80);
      if (v32 == 0 || ((v33 = *(_QWORD*)(v31 + 88), *(_QWORD*)(v32 + 8) != -1)
                           ? (v34 = v33 == 0)
                           : (v34 = true),
                       v34)) {
        v35 = 0;
      }
      else {
        v35 = *(_QWORD*)(v33 + 392);
        v57 = *(_QWORD*)(v33 + 400);
        if (v57 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
            std___1___shared_weak_count___release_weak_alt1(v57);
          }
        }
      }
      v36 = *(_QWORD*)(v56 + 88);
      v38 = *(_QWORD*)(v36 + 392);
      v37 = *(_QWORD*)(v36 + 400);
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak_alt1(v37);
        }
      }
      v39 =
          v24 +
          (float)(PSEUDO_UNFUSED(GameRoutine_10773c0(*(_DWORD*)(v35 + 11784)) *
                                 *(float*)(v35 + 32)));
      v41 =
          v39 +
          (float)(PSEUDO_UNFUSED(GameRoutine_10773c0(*(_DWORD*)(v38 + 11784)) *
                                 *(float*)(v38 + 32)));
      if (v23 != 0) {
        v42 = *(_QWORD*)(v2 + 8);
        LODWORD(v40) = *(_DWORD*)(v42 + 40);
        v43 = *(float*)(v42 + 44);
        v44 = *(float*)(v56 + 44) - v43;
        v45 = *(float*)(v56 + 40) - *(float*)&v40;
        v46 = (float)(PSEUDO_UNFUSED(v44 * v44)) + (float)(v45 * v45);
        if (v46 >= 0x1.0000000000000p-23f) {
          v58 = 0x1.0000000000000p+0f / sqrtf(v46);
          v48 = v45 * v58;
          v47 = v44 * v58;
        }
        else {
          v47 = 0x1.0000000000000p+0f;
          v48 = 0x0.0p+0f;
        }
        *(float*)&v40 = *(float*)&v40 + (float)(PSEUDO_UNFUSED(v41 * v48));
        LODWORD(v115_.v115) = LODWORD(v40);
        *((float*)&v115_.v115 + 1) = v43 + (float)(PSEUDO_UNFUSED(v41 * v47));
        GameRoutine_1068e00(v56, (__int64)&v115_.v115, v40);
        *(float*)(v56 + 48) = -v48;
        *(float*)(v56 + 52) = -v47;
        game_combat_1068b40(v56, 1);
        game_combat_1068a00(v56);
        goto LABEL_89;
      }
      v49 = *v4;
      if (*v4 == 0) {
        goto LABEL_89;
      }
      v50 = *(_QWORD*)(v49 + 8);
      if (v50 == 0) {
        goto LABEL_89;
      }
      v51 = *(_QWORD*)(v50 + 32);
      v52 = *(_QWORD*)(v50 + 40);
      if (v51 == v52) {
        v55 = &GameData_2235e30;
      }
      else {
        v53 = 954437177 * ((unsigned __int64)(v52 - v51) >> 4) - 1;
        v54 = *(_DWORD*)(v50 + 56);
        if (v54 < v53) {
          v53 = *(_DWORD*)(v50 + 56);
        }
        if (v54 < 0) {
          v53 = 0;
        }
        if (v51 == 0) {
          v70 = 0x1.3333340000000p-2f;
          goto LABEL_118;
        }
        v55 = (__int64*)(v51 + 144LL * v53);
      }
      v70 = 0x1.99999a0000000p-3f;
      if ((*(_DWORD*)v55 & 0x40) == 0) {
        v70 = 0x1.3333340000000p-2f;
      }
    LABEL_118:
      v71 = *(_QWORD*)(v50 + 32);
      v72 = *(_QWORD*)(v50 + 40);
      if (v71 == v72) {
        v75 = &GameData_2235e30;
      }
      else {
        v73 = 954437177 * ((unsigned __int64)(v72 - v71) >> 4) - 1;
        v74 = *(_DWORD*)(v50 + 56);
        if (v74 < v73) {
          v73 = *(_DWORD*)(v50 + 56);
        }
        if (v74 < 0) {
          v73 = 0;
        }
        if (v71 == 0) {
          v76 = (float)((float)(0x1.0000000000000p+0f - v70) + v70) *
                0x1.0000000000000p-1f;
          goto LABEL_130;
        }
        v75 = (__int64*)(v71 + 144LL * v73);
      }
      if (*((_DWORD*)v75 + 2) != 0) {
        v76 = 0x1.0000000000000p+0f - v70;
      }
      else {
        v76 = v70;
      }
    LABEL_130:
      if ((*(_BYTE*)(v50 + 196) & 1) == 0 && (*(_BYTE*)(v50 + 197) & 1) == 0) {
        v78 = *(float*)(v50 + 152);
        v77 = (float*)(v50 + 152);
        v79 = v77[2] - v78;
        v80 = v77[3] - v77[1];
        v81 = (float)(PSEUDO_UNFUSED(v80 * v80)) + (float)(v79 * v79);
        if (v81 >= 0x1.0000000000000p-23f) {
          v84 = 0x1.0000000000000p+0f / sqrtf(v81);
          v83 = v79 * v84;
          v82 = v80 * v84;
        }
        else {
          v82 = 0x1.0000000000000p+0f;
          v83 = 0x0.0p+0f;
        }
        v85 = (float)(*(v77 - 8) + *(v77 - 6)) * 0x1.0000000000000p-1f;
        v86 = (float)(*(v77 - 7) + *(v77 - 5)) * 0x1.0000000000000p-1f;
        v87 = CombatUniverse_106bd20(*v4, 0);
        if (v87 != 0) {
          v89 = 0x1.0000000000000p+0f;
          v90 = *(int*)(v87 + 96);
          v112 = v82;
          v91 = &v77[2 * v90];
          v92 = (float)(0x1.0000000000000p+0f - v76) * (float)(v41 * v82);
          v93 = 0x0.0p+0f;
          v94 = &v77[2 * (1 - v90)];
          *(float*)&v115_.v115 =
              v85 -
              (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f - v76) *
                                     (float)(v41 * v83)));
          *((float*)&v115_.v115 + 1) = v86 - v92;
          v95 = v94[1] - v91[1];
          *(float*)&v88 = *v94 - *v91;
          v96 = (float)(PSEUDO_UNFUSED(v95 * v95)) +
                (float)(*(float*)&v88 * *(float*)&v88);
          if (v96 >= 0x1.0000000000000p-23f) {
            v97 = 0x1.0000000000000p+0f / sqrtf(v96);
            v93 = *(float*)&v88 * v97;
            v89 = v95 * v97;
          }
          *(_DWORD*)(v87 + 648) = 0;
          *(_DWORD*)(v87 + 672) = 0;
          v98 = v87;
          *(_DWORD*)(v87 + 840) = 0;
          *(_QWORD*)(v87 + 860) = 0;
          GameRoutine_1068e00(v87, (__int64)&v115_.v115, v88);
          *(float*)(v98 + 48) = v93;
          *(float*)(v98 + 52) = v89;
          game_combat_1068b40(v98, 1);
          game_combat_1068a00(v98);
          CharacterBuilder_10821f0(*(_QWORD*)(v98 + 88));
          v82 = v112;
        }
        v100 = CombatUniverse_106bd20(v49, 1u);
        if (v100 != 0) {
          v102 = *(int*)(v100 + 96);
          v103 = &v77[2 * v102];
          v104 = &v77[2 * (1 - v102)];
          *(float*)&v115_.v115 =
              v85 + (float)(PSEUDO_UNFUSED(v76 * (float)(v41 * v83)));
          *((float*)&v115_.v115 + 1) =
              v86 + (float)(PSEUDO_UNFUSED(v76 * (float)(v41 * v82)));
          v105 = v104[1] - v103[1];
          *(float*)&v101 = *v104 - *v103;
          v106 = (float)(PSEUDO_UNFUSED(v105 * v105)) +
                 (float)(*(float*)&v101 * *(float*)&v101);
          if (v106 >= 0x1.0000000000000p-23f) {
            v109 = 0x1.0000000000000p+0f / sqrtf(v106);
            v108 = *(float*)&v101 * v109;
            v107 = v105 * v109;
          }
          else {
            v107 = 0x1.0000000000000p+0f;
            v108 = 0x0.0p+0f;
          }
          *(_DWORD*)(v100 + 648) = 0;
          *(_DWORD*)(v100 + 672) = 0;
          v110 = v100;
          *(_DWORD*)(v100 + 840) = 0;
          *(_QWORD*)(v100 + 860) = 0;
          GameRoutine_1068e00(v100, (__int64)&v115_.v115, v101);
          *(float*)(v110 + 48) = v108;
          *(float*)(v110 + 52) = v107;
          game_combat_1068b40(v110, 1);
          game_combat_1068a00(v110);
          CharacterBuilder_10821f0(*(_QWORD*)(v110 + 88));
        }
      }
    }
  }
LABEL_89:
  if (v19 <= 0x0.0p+0f) {
    v60 = (_QWORD*)*v4;
    if (*v4 != 0) {
      v115_.v117 = 0;
      v115_.v115 = GameData_200ece8;
      v115_.v116 = v9;
      v115_.v118 = (__int64*)&v115_.v115;
      game_combat_106c820(v60, (__int64)&v115_.v115);
      if (v115_.v118 == (__int64*)&v115_.v115) {
        v61 = 32;
      }
      else {
        if (v115_.v118 == nullptr) {
          goto LABEL_96;
        }
        v61 = 40;
      }
      (*(void (**)(__int64))(*v115_.v118 + v61))((__int64)v115_.v118);
    }
  }
LABEL_96:
  v62 = *(_QWORD*)(v2 + 8);
  *(_DWORD*)(v62 + 648) = 0;
  *(_DWORD*)(v62 + 672) = 0;
  v63 = *(_QWORD*)(v2 + 8);
  *(_DWORD*)(v63 + 840) = 0;
  *(_QWORD*)(v63 + 860) = 0;
  if (*(_DWORD*)(v9 + 384) == 0) {
    if (GameData_21d92e0 == 2) {
      v64 = *(_QWORD*)(v9 + 392);
      v65 = *(_QWORD*)(v9 + 400);
      if (v65 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                  memory_order_relaxed);
        v66 = *(_DWORD*)(v64 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          std___1___shared_weak_count___release_weak_alt1(v65);
        }
      }
      else {
        v66 = *(_DWORD*)(v64 + 11784);
      }
      if (v66 <= 0x1A) {
        if (((1 << v66) & 0x410C) != 0) {
          *(_DWORD*)(*(_QWORD*)(v9 + 104) + 212LL) = 0;
          goto LABEL_108;
        }
        if (((1 << v66) & 0x5000080) != 0) {
          *(_DWORD*)(*(_QWORD*)(v9 + 104) + 212LL) = 0;
          goto LABEL_108;
        }
      }
    }
    *(_DWORD*)(v9 + 384) = 1;
  }
LABEL_108:
  CharacterAnimator_1079fe0(*(_QWORD*)(v9 + 72));
  v67 = *(_QWORD*)(v2 + 8);
  v68 = *(_QWORD*)(v9 + 128);
  v115_.v115 = nullptr;
  v115_.v116 = 0;
  result = game_character_CharacterSelfie_Start(
      v68, (*(_DWORD*)(v67 + 96) & 0xFFFFFFFD) != 0, (__int64*)&v115_.v115);
  v69 = v115_.v116;
  if (v115_.v116 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v115_.v116 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
    result = std___1___shared_weak_count___release_weak_alt1(v69);
  }
  *(_BYTE*)(v2 + 40) = 1;
  return result;
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
