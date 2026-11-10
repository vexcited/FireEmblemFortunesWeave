#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083e90(_QWORD, _QWORD, long double);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 Config_bc7060(_QWORD, _QWORD);
__int64 Config_bc7660(_QWORD);
__int64 GameRoutine_10685c0(__int64 result);
__int64 GameRoutine_10a9ec0(_QWORD, long double);
__int64 GameRoutine_10d43c0(_QWORD, long double);
__int64 GameRoutine_110c220(void);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a4d00(_QWORD);
__int64 GameRoutine_809ba0(float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_10a6700(__int64, char, __int64*, __n128 result);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2006310[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 (*game_combat_CombatUniverse_vtable[])();
extern __int64 GameData_21d1e38;
extern __int64 GameData_22197d8;
extern __int64 GameData_224b668;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64* GameData_212d448[9];
extern int GameData_2235610;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CombatUniverse_106bd20(__int64 a1, unsigned int a2);
void CombatUniverse_Destructor(_QWORD* a1, long double a2);
void game_combat_CombatUniverse_Setup_lambda0_Invoke(__int64 a1, __int64 a2);
__n128 game_combat_CombatUniverse_MakeLastSituationOnSkip_lambda0_Invoke(
    __int64 a1, int* a2, __int64* a3);

__int64 CombatUniverse_106bd20(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  if (a2 > 3) {
    return 0;
  }
  v3 = a1 + 24LL * a2;
  result = *(_QWORD*)(v3 + 32);
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(v3 + 40);
    v5 = *(_QWORD*)(result + 8) == -1 || v4 == 0;
    if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
        (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0)
                                  : (v7 = true),
         v7)) {
      v8 = 0;
    }
    else if (*(_QWORD*)(result + 8) == -1) {
      v8 = 0;
    }
    else {
      v8 = v4;
    }
    std___1___shared_weak_count___release_weak(result);
    return v8;
  }
  return result;
}

void CombatUniverse_Destructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  _QWORD* v19;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  long double v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  _QWORD* v30;
  __int64 v32;
  __int64 v33;
  __int64 v35;
  long double v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __n128 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  char v57;
  unsigned int* v58;
  unsigned int* v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __n128 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 (**v84)();
  int v85;
  __int64 (***v86)();

  v2 = a1[25];
  a1[25] = 0;
  *a1 = game_combat_CombatUniverse_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = a1[15];
  a1[15] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  if (a1[24] != 0) {
    GameRoutine_110c220();
  }
  v7 = a1[13];
  if (v7 != 0) {
    v8 = (_QWORD*)a1[14];
    if (*(_QWORD*)(v7 + 8) != -1 && v8 != nullptr) {
      v10 = v8[10];
      if (v10 == 0 ||
          ((v11 = v8[11], *(_QWORD*)(v10 + 8) != -1) ? (v12 = v11 == 0)
                                                     : (v12 = true),
           v12)) {
      LABEL_32:
        if (*(_QWORD*)(v7 + 8) != -1 && v8 != nullptr) {
          (*(void (**)(_QWORD*))(*v8 + 8LL))(v8);
        }
        goto LABEL_37;
      }
      LODWORD(a2) = *(_DWORD*)(v11 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_30;
      }
      v13 = v8[11];
      *(_DWORD*)(v11 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v13, &v84, a2);
      if (v86 == &v84) {
        v15 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_25:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v11, &v84, v14);
          if (v86 == &v84) {
            v16 = 4;
            goto LABEL_29;
          }
          if (v86 != nullptr) {
            v16 = 5;
          LABEL_29:
            (*v86)[v16]();
          }
        LABEL_30:
          *(_DWORD*)(*(_QWORD*)(v11 + 304) + 12LL) = 1065353216;
          v7 = a1[13];
          if (v7 == 0) {
            goto LABEL_37;
          }
          v8 = (_QWORD*)a1[14];
          goto LABEL_32;
        }
        v15 = 5;
      }
      v14 = ((long double (*)(void))(*v86)[v15])();
      goto LABEL_25;
    }
  }
LABEL_37:
  v18 = a1[10];
  if (v18 == 0) {
    goto LABEL_65;
  }
  v19 = (_QWORD*)a1[11];
  if (*(_QWORD*)(v18 + 8) == -1 || v19 == nullptr) {
    goto LABEL_65;
  }
  v21 = v19[10];
  if (v21 != 0) {
    v22 = v19[11];
    if (*(_QWORD*)(v21 + 8) != -1 && v22 != 0) {
      LODWORD(a2) = *(_DWORD*)(v22 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_58;
      }
      v24 = v19[11];
      *(_DWORD*)(v22 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v24, &v84, a2);
      if (v86 == &v84) {
        v26 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_53:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v22, &v84, v25);
          if (v86 == &v84) {
            v27 = 4;
            goto LABEL_57;
          }
          if (v86 != nullptr) {
            v27 = 5;
          LABEL_57:
            (*v86)[v27]();
          }
        LABEL_58:
          *(_DWORD*)(*(_QWORD*)(v22 + 304) + 12LL) = 1065353216;
          v18 = a1[10];
          if (v18 == 0) {
            goto LABEL_65;
          }
          v19 = (_QWORD*)a1[11];
          goto LABEL_60;
        }
        v26 = 5;
      }
      v25 = ((long double (*)(void))(*v86)[v26])();
      goto LABEL_53;
    }
  }
LABEL_60:
  if (*(_QWORD*)(v18 + 8) != -1 && v19 != nullptr) {
    (*(void (**)(_QWORD*))(*v19 + 8LL))(v19);
  }
LABEL_65:
  v29 = a1[7];
  if (v29 == 0) {
    goto LABEL_91;
  }
  v30 = (_QWORD*)a1[8];
  if (*(_QWORD*)(v29 + 8) == -1 || v30 == nullptr) {
    goto LABEL_91;
  }
  v32 = v30[10];
  if (v32 != 0) {
    v33 = v30[11];
    if (*(_QWORD*)(v32 + 8) != -1 && v33 != 0) {
      LODWORD(a2) = *(_DWORD*)(v33 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_86;
      }
      v35 = v30[11];
      *(_DWORD*)(v33 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v35, &v84, a2);
      if (v86 == &v84) {
        v37 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_81:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v33, &v84, v36);
          if (v86 == &v84) {
            v38 = 4;
            goto LABEL_85;
          }
          if (v86 != nullptr) {
            v38 = 5;
          LABEL_85:
            (*v86)[v38]();
          }
        LABEL_86:
          *(_DWORD*)(*(_QWORD*)(v33 + 304) + 12LL) = 1065353216;
          v29 = a1[7];
          if (v29 == 0) {
            goto LABEL_91;
          }
          v30 = (_QWORD*)a1[8];
          goto LABEL_88;
        }
        v37 = 5;
      }
      v36 = ((long double (*)(void))(*v86)[v37])();
      goto LABEL_81;
    }
  }
LABEL_88:
  if (*(_QWORD*)(v29 + 8) != -1 && v30 != nullptr) {
    (*(void (**)(_QWORD*))(*v30 + 8LL))(v30);
  }
LABEL_91:
  v39 = a1[4];
  if (v39 == 0) {
    goto LABEL_117;
  }
  v40 = (_QWORD*)a1[5];
  if (*(_QWORD*)(v39 + 8) == -1 || v40 == nullptr) {
    goto LABEL_117;
  }
  v42 = v40[10];
  if (v42 == 0 || ((v43 = v40[11], *(_QWORD*)(v42 + 8) != -1) ? (v44 = v43 == 0)
                                                              : (v44 = true),
                   v44)) {
  LABEL_114:
    if (*(_QWORD*)(v39 + 8) != -1 && v40 != nullptr) {
      (*(void (**)(_QWORD*))(*v40 + 8LL))(v40);
    }
    goto LABEL_117;
  }
  LODWORD(a2) = *(_DWORD*)(v43 + 348);
  if (*(float*)&a2 == 1.0) {
    goto LABEL_112;
  }
  v45 = v40[11];
  *(_DWORD*)(v43 + 348) = 1065353216;
  v84 = GameData_20076d8;
  v85 = 1065353216;
  v86 = &v84;
  CharacterBuilder_1083e90(v45, &v84, a2);
  if (v86 == &v84) {
    v47 = 4;
    goto LABEL_106;
  }
  if (v86 != nullptr) {
    v47 = 5;
  LABEL_106:
    v46 = ((long double (*)(void))(*v86)[v47])();
  }
  v84 = GameData_2007758;
  v86 = &v84;
  v85 = 1065353216;
  CharacterBuilder_1083e90(v43, &v84, v46);
  if (v86 == &v84) {
    v48 = 4;
  }
  else {
    if (v86 == nullptr) {
      goto LABEL_112;
    }
    v48 = 5;
  }
  (*v86)[v48]();
LABEL_112:
  *(_DWORD*)(*(_QWORD*)(v43 + 304) + 12LL) = 1065353216;
  v39 = a1[4];
  if (v39 != 0) {
    v40 = (_QWORD*)a1[5];
    goto LABEL_114;
  }
LABEL_117:
  GameRoutine_14a1520(a1 + 27, 1);
  v49 = *(_QWORD*)(eft_g_effectSystem + 296);
  v50 = *(__int64**)(v49 - 24);
  v51 = *(__int64**)(v49 - 16);
  while (v50 != v51) {
    v52 = *v50;
    if (*v50 != 0 && *(_DWORD*)(v52 + 4) == 7) {
      while (*(_QWORD*)(v52 + 56) != v52 + 48) {
        Config_bc7660(eft_g_effectSystem);
      }
    }
    ++v50;
  }
  GameRoutine_14a4d00(&GameData_224b668);
  v54 = a1[1];
  v55 = GameData_212d448[0];
  if (v54 == 0 || (*(_BYTE*)(v54 + 112) & 0x40) == 0) {
    if ((*GameData_212d448[0] == 0 ||
         (v56 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
         (*(_WORD*)(v56 + 112) & 0x1020) == 0) &&
        game_ProcFadeView_instance_ != 0) {
      GameRoutine_809ba0(0.13333);
      v54 = a1[1];
    }
    if ((v54 == 0 || (*(_BYTE*)(v54 + 112) & 0x40) == 0) &&
        game_ProcFadeView_instance_ != 0) {
      v57 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
      *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
      if (game_ProcFadeView_instance_ != 0) {
        GameRoutine_809ba0(0.13333);
        if (game_ProcFadeView_instance_ != 0) {
          *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v57;
        }
      }
    }
  }
  v58 = (unsigned int*)a1[29];
  v59 = (unsigned int*)a1[30];
  if (v58 != v59) {
    do {
      v60 = *v58++;
      Config_bc7060(eft_g_effectSystem, v60);
    } while (v58 != v59);
    v58 = (unsigned int*)a1[29];
  }
  a1[30] = v58;
  if (v58 != nullptr) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v61);
  }
  v62 = a1[28];
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    v53 = std___1___shared_weak_count___release_weak(v62);
  }
  v63 = a1[26];
  a1[26] = 0;
  if (v63 == 0) {
    goto LABEL_166;
  }
  v64 = *(_QWORD*)(v63 + 24);
  if (v64 == 0) {
    goto LABEL_163;
  }
  v65 = *(_QWORD*)(v63 + 32);
  if (v64 == v65) {
  LABEL_160:
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v70);
    goto LABEL_163;
  }
  do {
    v66 = *(_QWORD**)(v65 - 16);
    if ((_QWORD*)(v65 - 48) == v66) {
      v67 = 32;
    }
    else {
      if (v66 == nullptr) {
        goto LABEL_157;
      }
      v67 = 40;
    }
    (*(void (**)(long double))(*v66 + v67))(*(long double*)&v53);
  LABEL_157:
    v68 = *(_QWORD*)(v65 - 64);
    if (v68 != 0) {
      v53 = std___1___shared_weak_count___release_weak(v68);
    }
    v65 -= 80;
  } while (v65 != v64);
  v69 = *(_QWORD*)(v63 + 24);
  *(_QWORD*)(v63 + 32) = v64;
  if (v69 != 0) {
    goto LABEL_160;
  }
LABEL_163:
  GameRoutine_10a9ec0(v63, *(long double*)&v53);
  v71 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v71 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v71);
LABEL_166:
  v72 = a1[25];
  a1[25] = 0;
  if (v72 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v73);
  }
  v74 = a1[24];
  a1[24] = 0;
  if (v74 != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v75);
  }
  GameRoutine_10d43c0(a1 + 17, *(long double*)&v53);
  v77 = a1[16];
  a1[16] = 0;
  if (v77 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 8LL))(v77);
  }
  v78 = a1[15];
  a1[15] = 0;
  if (v78 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v78 + 8LL))(v78);
  }
  v79 = a1[13];
  if (v79 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v79);
  }
  v80 = a1[10];
  if (v80 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v80);
  }
  v81 = a1[7];
  if (v81 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v81);
  }
  v82 = a1[4];
  if (v82 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v82);
  }
  v83 = a1[2];
  if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v83 + 16LL))(
        v83, *(long double*)&v76);
    std___1___shared_weak_count___release_weak(v83);
  }
  *a1 = GameData_2006310;
  if ((_QWORD*)*v55 == a1) {
    *v55 = 0;
    GameData_2235610 = 0;
  }
}

void game_combat_CombatUniverse_Setup_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 8);
  v4 = *(_QWORD*)(v2 + 16);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_DWORD*)(v3 + 112);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      a2 = v6;
    }
  }
  else {
    v5 = *(_DWORD*)(v3 + 112);
  }
  v7 = *(_QWORD*)(v2 + 8);
  v8 = -1;
  v14 = -1;
  v9 = *(_QWORD*)(v7 + 32);
  v10 = *(_QWORD*)(v7 + 40);
  if (v9 != v10) {
    do {
      if (*(_DWORD*)(v9 + 16) == 0) {
        v11 = (_DWORD*)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFFBLL |
                        (4LL * (*(_DWORD*)(v9 + 8) & 1)));
        ++*v11;
      }
      if (v9 == a2) {
        break;
      }
      v9 += 144;
    } while (v9 != v10);
    v8 = v14;
  }
  if ((*(_DWORD*)(a2 + 8) & 0xFFFFFFFD) != 0) {
    v8 >>= 32;
    if ((v5 & 0x40) != 0) {
      v12 = GameData_22197d8;
      if (GameData_22197d8 == 0) {
        return;
      }
    }
    else {
      v12 = GameData_21d1e38;
      if (GameData_21d1e38 == 0) {
        return;
      }
    }
    v13 = 256;
  LABEL_22:
    *(_WORD*)(v12 + 214) = v13;
    *(_DWORD*)(v12 + 220) = v8;
    return;
  }
  if ((v5 & 0x40) != 0) {
    v12 = GameData_22197d8;
    if (GameData_22197d8 == 0) {
      return;
    }
    goto LABEL_21;
  }
  v12 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
  LABEL_21:
    v13 = 257;
    goto LABEL_22;
  }
}

__n128 game_combat_CombatUniverse_MakeLastSituationOnSkip_lambda0_Invoke(
    __int64 a1, int* a2, __int64* a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __n128 result;
  _QWORD* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = *a3;
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*a3 + 88) + 120LL);
  v6 = *(_QWORD*)(v5 + 248);
  v7 = *(_QWORD*)(v5 + 256);
  *(_BYTE*)(v5 + 272) = 1;
  while (v6 != v7) {
    if (*(_DWORD*)v6 != 0) {
      v8 = *(_QWORD*)(v6 + 16);
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_2;
      }
      v21 = 0;
      v9 = *(_QWORD*)(v6 + 64);
      if (v9 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v21);
      if ((*(_DWORD*)v6 & 0x80000000) != 0) {
      LABEL_2:
        *(_DWORD*)v6 = 0;
      }
    }
    v6 += 80;
  }
  *(_BYTE*)(v5 + 272) = 0;
  GameRoutine_10685c0(v3);
  v11 = *(_QWORD**)(v3 + 88);
  v12 = *(_DWORD*)(v11[9] + 120LL);
  if (v12 > -972548317) {
    if (v12 == -972548316) {
      v13 = 4217340898LL;
    }
    else {
      if (v12 != -93581017) {
        return result;
      }
      v13 = 1400556095;
    }
  }
  else if (v12 == -1072101930) {
    v13 = 1131178864;
  }
  else {
    if (v12 != -1070254888) {
      return result;
    }
    v13 = 1188437166;
  }
  v14 = v11[49];
  v15 = v11[50];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    v16 = *(_QWORD*)(v14 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v16;
      v18 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      v16 = v17;
      v13 = v18;
    }
  }
  else {
    v16 = *(_QWORD*)(v14 + 11608);
  }
  if ((*(_BYTE*)(CharacterModel_1070c00(v16, v13) + 96) & 1) != 0) {
    v19 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 128LL);
    v21 = 0;
    v22 = 0;
    result = GameRoutine_10a6700(v19, v4 == 1, &v21, result);
    v20 = v22;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(
          v20, *(long double*)&result);
      return std___1___shared_weak_count___release_weak(v20);
    }
  }
  return result;
}

#pragma GCC visibility pop
