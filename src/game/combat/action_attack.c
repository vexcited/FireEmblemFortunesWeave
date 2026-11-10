#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1098db0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_combat_ActionAttack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ActionAttack_DeletingDestructor(_QWORD* a1);
__int64 ActionAttack_Unknown2(_QWORD* a1);
__int64 ActionAttack_Unknown7(__int64 result);
__int64 GameRoutine_1061280(__int64 result, unsigned __int8, int, __int64);
__int64 GameRoutine_1063460(_QWORD, _QWORD);
__int64 GameRoutine_10635c0(_QWORD, _QWORD);
__int64 GameRoutine_1063720(_QWORD, _QWORD);
__int64 GameRoutine_10b64f0(_QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2005ce0[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212d448[9];
struct PseudoSret GameRoutine_10691b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1063f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
char** ActionAttack_1063100(char** result);
float game_combat_ActionAttack_OnEnter_lambda2_Clone(__int64 a1);
float game_combat_ActionAttack_OnEnter_lambda2_CloneInto(__int64 a1,
                                                         __int64 a2);
__int64 game_combat_ActionAttack_OnEnter_lambda3_Invoke(__int64 a1);
__int64 game_combat_ActionAttack_OnEnter_lambda4_Invoke(__int64 a1);
__int64 GameRoutine_106aeb0(_QWORD, _QWORD);
__int64 GameRoutine_d2b5f0(_QWORD);
__int64 __dynamic_cast(void);
__int64 game_combat_ActionAttack_OnEnter_lambda2_Clone_alt1(void) __asm__(
    "game_combat_ActionAttack_OnEnter_lambda2_Clone");
extern __int64 GameData_2235e30;
__int64 game_combat_ActionAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                        __int64* a2);
__attribute__((swiftcall)) void game_combat_10901b0(PSEUDO_X8, _QWORD, double);
__attribute__((swiftcall)) void
game_combat_10901b0_alt1(PSEUDO_X8, float32x4_t*,
                         float) __asm__("game_combat_10901b0");
__int64 ActionAttack_1063100_alt1(_QWORD) __asm__("ActionAttack_1063100");
__int64 CharacterAnimator_1079580(_QWORD, _QWORD, float, float, float);
__int64 CharacterAnimator_107a7e0(_QWORD);
__int64 CharacterAnimator_107a870(_QWORD, float);
__int64 GameRoutine_1067080(_QWORD);
__int64 GameRoutine_10a09d0(_QWORD);
__int64 GameRoutine_10dea20(_QWORD);
__int64 GameRoutine_1104f00(_QWORD, _QWORD);
__int64 Signal_d30a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast_alt1(_QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("__dynamic_cast");
__int64 game_10a2a40(void);
__int64 game_combat_1064730(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int64 (*GameData_2005b70[])();
extern __int64 (*GameData_2005bf0[])();
extern __int64 (*GameData_2005c70[])();
extern __int64 (*GameData_2005d80[])();
extern __int64 (*GameData_2005e00[])();
extern __int64* GameData_212ecc0[6];
extern __int64* GameData_212ecc8[5];
extern __int64* GameData_212ecd8[3];
extern __int64* GameData_212fe50;
extern __int64* GameData_212fe80;
extern __int64* GameData_2130080[9];
extern __int64 GameData_212d4f0[2];
float game_combat_109acb0(_QWORD, _QWORD);
void ActionAttack_1061280_alt1(__int64, unsigned __int8, int, __int64,
                               long double) __asm__("ActionAttack_1061280");
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
__int64 ActionAttack_Unknown5(__int64 a1);
__int64 ActionAttack_1061280(__int64 result, unsigned __int8 a2, int a3,
                             __int64 a4);
void game_combat_ActionAttack_OnEnter_lambda1_Invoke(__int64 a1, int8x16_t** a2,
                                                     long double a3);
__attribute__((swiftcall)) void
game_combat_ActionAttack_OnEnter_lambda2_Invoke_10643b0(PSEUDO_X8 x8_,
                                                        float32x4_t* a1);

__int64 ActionAttack_DeletingDestructor(_QWORD* a1)
{
  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  return GameRoutine_1098db0(a1 + 6);
}

__int64 ActionAttack_Unknown2(_QWORD* a1)
{
  long double v3;
  __int64 v4;

  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  GameRoutine_1098db0(a1 + 6);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
}

__int64 ActionAttack_Unknown5(__int64 a1)
{
  __int64 v1;
  int* v2;
  __int64 v3;
  __int128 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  char v41;
  char v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  bool v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  bool v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64* v71;
  unsigned int v72;
  __int128 v73;
  __int64 v74;
  float* v75;
  float* v76;
  float v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  bool v82;
  __int64 v83;
  bool v84;
  _QWORD* v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  bool v100;
  __int64 v101;
  bool v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  bool v107;
  unsigned int v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  bool v112;
  __int64 v113;
  bool v114;
  _QWORD* v115;
  __int64 v116;
  _QWORD* v117;
  _QWORD* v118;
  __int64 v119;
  __int64* v120;
  unsigned __int64 v121;
  __int64 v122;
  _QWORD* v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  _QWORD* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  char* v134;
  unsigned __int64 v135;
  bool v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  char v148;
  char* v149;
  unsigned __int64 v150;
  bool v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 result;
  __int64 v156;
  int v157;
  int v158;
  _QWORD* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  char v164;
  char* v165;
  unsigned __int64 v166;
  bool v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  bool v175;
  __int64 v176;
  bool v177;
  _QWORD* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  char v182;
  char* v183;
  unsigned __int64 v184;
  bool v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  char v190;
  char* v191;
  unsigned __int64 v192;
  bool v193;
  unsigned __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  __int128 v198;
  _QWORD v199[2];
  char v200;
  _QWORD* v201;
  __int64 v202;

  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(int**)(a1 + 24);
  v2[1] |= 0x40u;
  game_combat_10901b0((void*)(v199), v2, 0.0f);
  v5 = *(_OWORD*)v199;
  v6 = GameData_212d448[0];
  if (*GameData_212d448[0] == 0 ||
      (v7 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
      (~*(_DWORD*)(v7 + 112) & 0x28000) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(v3 + 808) + 88LL);
    v9 = *(_QWORD*)(v8 + 392);
    v10 = *(_QWORD*)(v8 + 400);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v11 = *(_DWORD*)(v9 + 11784);
    v12 = v11 > 0x12;
    v13 = 0x1FF7Fu >> v11;
    v14 = v12;
    v1 = v14 | v13;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v198 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      v5 = v198;
      if ((v1 & 1) == 0) {
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    if ((((unsigned __int8)v14 | (unsigned __int8)v13) & 1) != 0) {
    LABEL_12:
      v15 = *(_QWORD*)(v3 + 808);
      *(_DWORD*)(v3 + 844) = *(_DWORD*)(v15 + 48);
      v16 = *(_DWORD*)(v15 + 52);
      *(_DWORD*)(v3 + 852) = v5;
      *(_DWORD*)(v3 + 856) = DWORD2(v5);
      *(_QWORD*)(v3 + 860) = 0x3E4CCCCD00000000LL;
      *(_DWORD*)(v3 + 848) = v16;
    }
  }
LABEL_13:
  if ((*(_BYTE*)v2 & 0x80) != 0) {
    goto LABEL_65;
  }
  v17 = v2[3];
  if ((v17 & 0xFFFFFFFE) == 2) {
    goto LABEL_65;
  }
  v18 = *v6;
  if (*v6 == 0) {
    v1 = 800;
  LABEL_54:
    v6 = (*(__int64 (*)[2])0x28LL);
    goto LABEL_55;
  }
  if (v17 <= 3 && (v19 = v18 + 24LL * v17, (v20 = *(_QWORD*)(v19 + 32)) != 0)) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v21 = *(_QWORD*)(v19 + 40);
    v22 = *(_QWORD*)(v20 + 8) == -1 || v21 == 0;
    if (v22 || (v23 = *(_QWORD*)(v21 + 80)) == 0 ||
        (*(_QWORD*)(v23 + 8) != -1 ? (v24 = *(_QWORD*)(v21 + 88) == 0)
                                   : (v24 = true),
         v24)) {
      v25 = 0;
    }
    else if (*(_QWORD*)(v20 + 8) == -1) {
      v25 = 0;
    }
    else {
      v25 = v21;
    }
    std___1___shared_weak_count___release_weak(v20);
    v18 = *v6;
    v1 = v25 + 800;
    if (*v6 == 0) {
      goto LABEL_54;
    }
  }
  else {
    v1 = 800;
  }
  v26 = v2[2];
  if (v26 <= 3) {
    v27 = v18 + 24LL * v26;
    v28 = *(_QWORD*)(v27 + 32);
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                memory_order_relaxed);
      v29 = *(_QWORD*)(v27 + 40);
      v30 = *(_QWORD*)(v28 + 8) == -1 || v29 == 0;
      if (v30 || (v31 = *(_QWORD*)(v29 + 80)) == 0 ||
          (*(_QWORD*)(v31 + 8) != -1 ? (v32 = *(_QWORD*)(v29 + 88) == 0)
                                     : (v32 = true),
           v32)) {
        v33 = 0;
      }
      else if (*(_QWORD*)(v28 + 8) == -1) {
        v33 = 0;
      }
      else {
        v33 = v29;
      }
      std___1___shared_weak_count___release_weak(v28);
      v34 = *v6;
      v6 = (__int64*)(v33 + 40);
      if (v34 == 0) {
        goto LABEL_55;
      }
      v35 = *(_QWORD*)(v34 + 8);
      if (v35 == 0) {
        goto LABEL_55;
      }
    LABEL_51:
      if ((~*(_DWORD*)(v35 + 112) & 0x28000) == 0) {
        goto LABEL_65;
      }
      goto LABEL_55;
    }
  }
  v6 = (*(__int64 (*)[2])0x28LL);
  v35 = *(_QWORD*)(v18 + 8);
  if (v35 != 0) {
    goto LABEL_51;
  }
LABEL_55:
  v36 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 88LL);
  v37 = *(_QWORD*)(v36 + 392);
  v38 = *(_QWORD*)(v36 + 400);
  if (v38 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                              memory_order_relaxed);
  }
  v39 = *(_DWORD*)(v37 + 11784);
  v12 = v39 > 0x12;
  v40 = 0x1FF7Fu >> v39;
  v41 = v12;
  v42 = v41 | v40;
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
  }
  if ((v42 & 1) != 0) {
    v43 = *(_QWORD*)(v1 + 8);
    *(_DWORD*)(v1 + 44) = *(_DWORD*)(v43 + 48);
    *(_DWORD*)(v1 + 48) = *(_DWORD*)(v43 + 52);
    *(_DWORD*)(v1 + 52) = *(_DWORD*)v6;
    v44 = *((_DWORD*)v6 + 1);
    *(_QWORD*)(v1 + 60) = 0x3EAAAAAB00000000LL;
    *(_DWORD*)(v1 + 56) = v44;
  }
LABEL_65:
  CharacterAnimator_1079580(*(_QWORD*)(v3 + 368), (unsigned int)v2[16], -1.0f,
                            -1.0f, 1.0f);
  if ((*(_BYTE*)(CharacterAnimator_107a7e0(*(_QWORD*)(v3 + 368)) + 96) & 1) ==
      0) {
    goto LABEL_95;
  }
  v45 = *(_QWORD*)(*(_QWORD*)(v3 + 368) + 96LL);
  if (v45 == 0) {
    goto LABEL_95;
  }
  v46 = GameRoutine_d2b5f0(*(_QWORD*)(v45 + 32) + 72LL);
  if ((v46 & 0x100000000LL) == 0) {
    goto LABEL_95;
  }
  v47 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v45 + 24) + 72LL) + 104LL * (int)v46 +
                   16);
  if (v47 == 0) {
    goto LABEL_95;
  }
  v48 = *(__int64**)(v47 + 80);
  v49 = *(__int64**)(v47 + 88);
  if (v48 == v49) {
    goto LABEL_95;
  }
  while (1) {
    v50 = *v48;
    v1 = v48[1];
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(v50 + 8) < 0.0f) {
      v51 = true;
      if (v1 == 0) {
        goto LABEL_80;
      }
    LABEL_78:
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        std___1___shared_weak_count___release_weak(v1);
      }
      goto LABEL_80;
    }
    v52 = __dynamic_cast_alt1(v50, GameData_212d4f0[0], GameData_212ecc0[0], 0);
    v51 = v52 == 0;
    if (v52 != 0) {
      v6 = (__int64*)v52;
    }
    if (v1 != 0) {
      goto LABEL_78;
    }
  LABEL_80:
    if (!v51) {
      break;
    }
    v48 += 2;
    if (v48 == v49) {
      goto LABEL_95;
    }
  }
  if (v6 != nullptr) {
    v53 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 120LL);
    v54 = *(_QWORD*)(v53 + 216);
    v1 = *(_QWORD*)(v53 + 224);
    *(_BYTE*)(v53 + 240) = 1;
    while (v54 != v1) {
      if (*(_DWORD*)v54 != 0) {
        v55 = *(_QWORD*)(v54 + 16);
        if (v55 == 0 || *(_QWORD*)(v55 + 8) == -1) {
          goto LABEL_85;
        }
        v199[0] = v6;
        v56 = *(_QWORD*)(v54 + 64);
        if (v56 == 0) {
          GameRoutine_60a310();
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v56 + 48LL))(v56, v199);
        if ((*(_DWORD*)v54 & 0x80000000) != 0) {
        LABEL_85:
          *(_DWORD*)v54 = 0;
        }
      }
      v54 += 80;
    }
    *(_BYTE*)(v53 + 240) = 0;
  }
LABEL_95:
  if (*((_QWORD*)v2 + 9) == *((_QWORD*)v2 + 10)) {
    goto LABEL_117;
  }
  v57 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL) + 72LL) +
                   96LL);
  if (v57 == 0) {
    goto LABEL_116;
  }
  v58 = GameRoutine_d2b5f0(*(_QWORD*)(v57 + 32) + 72LL);
  if ((v58 & 0x100000000LL) == 0) {
    goto LABEL_116;
  }
  v59 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v57 + 24) + 72LL) + 104LL * (int)v58 +
                   16);
  if (v59 == 0) {
    goto LABEL_116;
  }
  v60 = *(__int64**)(v59 + 80);
  v61 = *(__int64**)(v59 + 88);
  if (v60 == v61) {
    goto LABEL_116;
  }
  while (2) {
    v62 = *v60;
    v63 = v60[1];
    if (v63 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(v62 + 8) >= 0.0f) {
      v65 =
          __dynamic_cast_alt1(v62, GameData_212d4f0[0], GameData_212ecd8[0], 0);
      v64 = v65 == 0;
      if (v65 != 0) {
        v1 = v65;
      }
      if (v63 != 0) {
        goto LABEL_108;
      }
    }
    else {
      v64 = true;
      if (v63 == 0) {
        goto LABEL_110;
      }
    LABEL_108:
      if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
        std___1___shared_weak_count___release_weak(v63);
      }
    }
  LABEL_110:
    if (v64) {
      v60 += 2;
      if (v60 == v61) {
        goto LABEL_116;
      }
      continue;
    }
    break;
  }
  if (v1 == 0) {
  LABEL_116:
    GameRoutine_10dea20(v2 + 18);
    goto LABEL_117;
  }
  v66 = *(_QWORD**)(a1 + 8);
  v67 = v66[9];
  v68 = v66[10];
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
    v199[0] = GameData_2005b70;
    v199[1] = a1;
    v69 = v66[11];
    v201 = v199;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v69 = v66[11];
    v199[0] = GameData_2005b70;
    v199[1] = a1;
    v201 = v199;
  }
  v189 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 272) = v67;
  *(_QWORD*)(a1 + 280) = v68;
  if (v189 != 0) {
    std___1___shared_weak_count___release_weak(v189);
  }
  v190 = *(_BYTE*)(a1 + 304);
  *(_QWORD*)(a1 + 288) = v69;
  if ((v190 & 1) != 0) {
    *(_QWORD*)(a1 + 312) = 18;
    v191 = *(char**)(a1 + 320);
  }
  else {
    *(_BYTE*)(a1 + 304) = 36;
    v191 = (char*)(a1 + 305);
  }
  strcpy(v191, "Signal_SkillTiming");
  v192 = *(unsigned __int8*)(a1 + 304);
  v193 = (v192 & 1) == 0;
  v194 = v192 >> 1;
  if (v193) {
    v195 = a1 + 305;
  }
  else {
    v195 = *(_QWORD*)(a1 + 320);
  }
  if (v193) {
    v196 = v194;
  }
  else {
    v196 = *(_QWORD*)(a1 + 312);
  }
  *(_DWORD*)(a1 + 296) =
      Signal_d30a60(*(_QWORD*)(*(_QWORD*)(a1 + 288) + 320LL), v195, v196, v199);
  if (v201 == v199) {
    v197 = 32;
  LABEL_317:
    (*(void (**)(__int64))(*v201 + v197))((__int64)v201);
  }
  else if (v201 != nullptr) {
    v197 = 40;
    goto LABEL_317;
  }
  if (v68 != 0) {
    std___1___shared_weak_count___release_weak(v68);
  }
LABEL_117:
  v70 = *v2;
  v71 = GameData_212d448[0];
  if ((*v2 & 1) != 0) {
    game_combat_10901b0((void*)(v199), v2, 0.0f);
    v72 = v199[1];
    v70 = *v2;
    *((_QWORD*)v2 + 4) = v199[0];
    v73 = *((_OWORD*)v2 + 2);
    *((_QWORD*)&v73 + 1) = v72;
    *((_OWORD*)v2 + 2) = v73;
  }
  if ((v70 & 2) != 0) {
    v74 = CharacterAnimator_107a7e0(*(_QWORD*)(v3 + 368));
    v75 = *(float**)(v74 + 40);
    v76 = *(float**)(v74 + 48);
    while (v75 != v76) {
      v77 = *v75++;
      CharacterAnimator_107a870(*(_QWORD*)(v3 + 368), v77);
    }
  }
  if (*v71 != 0) {
    v78 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL);
    if (v78 <= 3) {
      v79 = *v71 + 24LL * v78;
      v80 = *(_QWORD*)(v79 + 32);
      if (v80 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                  memory_order_relaxed);
        v81 = *(_QWORD*)(v79 + 40);
        v82 = *(_QWORD*)(v80 + 8) == -1 || v81 == 0;
        if (v82 || (v83 = *(_QWORD*)(v81 + 80)) == 0 ||
            (*(_QWORD*)(v83 + 8) != -1 ? (v84 = *(_QWORD*)(v81 + 88) == 0)
                                       : (v84 = true),
             v84 || *(_QWORD*)(v80 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v80);
        }
        else {
          std___1___shared_weak_count___release_weak(v80);
          if ((unsigned int)(*(_DWORD*)(v81 + 56) - 2) <= 2 &&
              *(_QWORD*)(v81 + 64) != 0) {
            GameRoutine_1104f00(v199, *(_QWORD*)(a1 + 24));
            v85 = *(_QWORD**)(a1 + 8);
            v86 = (_QWORD*)GameRoutine_10a09d0(v199);
            v87 = v86[120];
            v88 = v86[121];
            if (v88 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v88 + 16), 1u,
                                        memory_order_relaxed);
            }
            v89 = v86[122];
            v90 = v85[17];
            v85[16] = v87;
            v85[17] = v88;
            if (v90 != 0) {
              std___1___shared_weak_count___release_weak(v90);
            }
            v91 = v200;
            v85[18] = v89;
            if ((v91 & 1) != 0 && v202 != 0) {
              v92 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v92 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
            }
          }
        }
      }
    }
  }
  v93 = *(_QWORD*)(a1 + 8);
  v94 = *(_QWORD*)(v93 + 136);
  if (v94 == 0 || *(_QWORD*)(v94 + 8) == -1) {
    v95 = 0;
  }
  else {
    v95 = *(_QWORD*)(v93 + 144);
  }
  *((float*)v2 + 5) = game_combat_109acb0(v93 + 560, v95);
  *((_BYTE*)v2 + 24) = 1;
  if (*v71 == 0 || (v96 = v2[3]) > 3 ||
      (v97 = *v71 + 24LL * v96, (v98 = *(_QWORD*)(v97 + 32)) == 0)) {
    v103 = 0;
    v104 = (*(_QWORD*)0x50LL);
    if ((*(_QWORD*)0x50LL) != 0) {
      goto LABEL_168;
    }
    goto LABEL_173;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v98 + 16), 1u,
                            memory_order_relaxed);
  v99 = *(_QWORD*)(v97 + 40);
  v100 = *(_QWORD*)(v98 + 8) == -1 || v99 == 0;
  if (v100 || (v101 = *(_QWORD*)(v99 + 80)) == 0 ||
      (*(_QWORD*)(v101 + 8) != -1 ? (v102 = *(_QWORD*)(v99 + 88) == 0)
                                  : (v102 = true),
       v102)) {
    v103 = 0;
  }
  else if (*(_QWORD*)(v98 + 8) == -1) {
    v103 = 0;
  }
  else {
    v103 = v99;
  }
  std___1___shared_weak_count___release_weak(v98);
  v104 = *(_QWORD*)(v103 + 80);
  if (v104 == 0) {
    goto LABEL_173;
  }
LABEL_168:
  v105 = *(_QWORD*)(v104 + 8);
  v106 = *(_QWORD*)(v103 + 88);
  v107 = v105 == -1 || v106 == 0;
  if (v107 || (*(_BYTE*)(v106 + 341) & 2) == 0) {
  LABEL_173:
    if ((*(_BYTE*)v2 & 0x80) == 0 && (v2[1] & 6) == 0) {
      if (*v71 != 0 && (v108 = v2[3]) <= 3 &&
          (v109 = *v71 + 24LL * v108, (v110 = *(_QWORD*)(v109 + 32)) != 0)) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v110 + 16), 1u,
                                  memory_order_relaxed);
        v111 = *(_QWORD**)(v109 + 40);
        v112 = *(_QWORD*)(v110 + 8) == -1 || v111 == nullptr;
        if (v112 || (v113 = v111[10]) == 0 ||
            (*(_QWORD*)(v113 + 8) != -1 ? (v114 = v111[11] == 0)
                                        : (v114 = true),
             v114)) {
          v115 = nullptr;
        }
        else if (*(_QWORD*)(v110 + 8) == -1) {
          v115 = nullptr;
        }
        else {
          v115 = v111;
        }
        std___1___shared_weak_count___release_weak(v110);
      }
      else {
        v115 = nullptr;
      }
      GameRoutine_1067080(v115 + 24);
      v116 = v115[25];
      v117 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v118 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v118[1] = v116;
      v118[2] = 0;
      v118[3] = v2;
      v119 = fw_memory_HeapManager_Allocate(*v117, 32, 16, 0);
      *(_QWORD*)v119 = GameData_212fe80 + 2;
      *(_QWORD*)(v119 + 8) = 0;
      *(_DWORD*)(v119 + 24) = 0;
      v118[5] = v119 + 24;
      v118[6] = v119;
      v118[7] = v119 + 24;
      v118[8] = v119;
      *(_QWORD*)(v119 + 16) = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v119 + 16), 1u,
                                memory_order_relaxed);
      v120 = GameData_2130080[0];
      v118[9] = 0;
      v118[10] = 0;
      v118[11] = 0;
      *v118 = v120 + 2;
      v118[4] = v120 + 12;
      v121 = v115[33];
      if (v121 == 0) {
        ActionAttack_1063100_alt1(v115 + 29);
        v121 = v115[33];
      }
      v122 = v115[30];
      v123 = (_QWORD*)(v122 + 8 * (v121 >> 9));
      v124 = *v123 + 8 * (v121 & 0x1FF);
      if (v115[31] == v122) {
        v125 = 0;
      }
      else {
        v125 = v124;
      }
      if (v125 == *v123) {
        v124 = *(v123 - 1) + 4096LL;
      }
      *(_QWORD*)(v124 - 8) = v118;
      v126 = v115[33] - 1LL;
      v127 = v115[34] + 1LL;
      v115[33] = v126;
      v115[34] = v127;
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v115[30] + 8 * (v126 >> 9)) +
                            8 * (v126 & 0x1FF)) +
                 20LL) = 0;
    }
  }
  v128 = *(_QWORD**)(a1 + 8);
  v129 = v128[9];
  v130 = v128[10];
  if (v130 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v130 + 16), 1u,
                              memory_order_relaxed);
    v199[0] = GameData_2005bf0;
    v199[1] = a1;
    v131 = v128[11];
    v201 = v199;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v130 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v131 = v128[11];
    v199[0] = GameData_2005bf0;
    v199[1] = a1;
    v201 = v199;
  }
  v132 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v129;
  *(_QWORD*)(a1 + 56) = v130;
  if (v132 != 0) {
    std___1___shared_weak_count___release_weak(v132);
  }
  v133 = *(_BYTE*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = v131;
  if ((v133 & 1) != 0) {
    *(_QWORD*)(a1 + 88) = 10;
    v134 = *(char**)(a1 + 96);
  }
  else {
    *(_BYTE*)(a1 + 80) = 20;
    v134 = (char*)(a1 + 81);
  }
  strcpy(v134, "Signal_Hit");
  v135 = *(unsigned __int8*)(a1 + 80);
  v136 = (v135 & 1) == 0;
  v137 = v135 >> 1;
  if (v136) {
    v138 = a1 + 81;
  }
  else {
    v138 = *(_QWORD*)(a1 + 96);
  }
  if (v136) {
    v139 = v137;
  }
  else {
    v139 = *(_QWORD*)(a1 + 88);
  }
  *(_DWORD*)(a1 + 72) =
      Signal_d30a60(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 320LL), v138, v139, v199);
  if (v201 == v199) {
    v140 = 32;
  LABEL_217:
    (*(void (**)(__int64))(*v201 + v140))((__int64)v201);
  }
  else if (v201 != nullptr) {
    v140 = 40;
    goto LABEL_217;
  }
  if (v130 != 0) {
    std___1___shared_weak_count___release_weak(v130);
  }
  v141 = *v71;
  if (*v71 != 0) {
    v142 = *(_QWORD*)(v141 + 8);
    if (v142 != 0 && (*(_BYTE*)(v142 + 113) & 0x80) != 0) {
      v172 = v141 + 24LL * (unsigned int)v2[2];
      v173 = *(_QWORD*)(v172 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 16), 1u,
                                memory_order_relaxed);
      v174 = *(_QWORD*)(v172 + 40);
      v175 = *(_QWORD*)(v173 + 8) == -1 || v174 == 0;
      if (v175 || (v176 = *(_QWORD*)(v174 + 80)) == 0 ||
          (*(_QWORD*)(v176 + 8) != -1 ? (v177 = *(_QWORD*)(v174 + 88) == 0)
                                      : (v177 = true),
           v177)) {
        v174 = 0;
      }
      result = std___1___shared_weak_count___release_weak(v173);
      if (*(_DWORD*)(v174 + 56) != 5) {
        return result;
      }
      v178 = *(_QWORD**)(a1 + 8);
      v179 = v178[9];
      v161 = v178[10];
      if (v161 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v161 + 16), 1u,
                                  memory_order_relaxed);
        v180 = v178[11];
        v199[0] = GameData_2005e00;
        v199[1] = a1;
        v201 = v199;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v161 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        v180 = v178[11];
        v199[0] = GameData_2005e00;
        v199[1] = a1;
        v201 = v199;
      }
      v181 = *(_QWORD*)(a1 + 224);
      *(_QWORD*)(a1 + 216) = v179;
      *(_QWORD*)(a1 + 224) = v161;
      if (v181 != 0) {
        std___1___shared_weak_count___release_weak(v181);
      }
      v182 = *(_BYTE*)(a1 + 248);
      *(_QWORD*)(a1 + 232) = v180;
      if ((v182 & 1) != 0) {
        *(_QWORD*)(a1 + 256) = 12;
        v183 = *(char**)(a1 + 264);
      }
      else {
        *(_BYTE*)(a1 + 248) = 24;
        v183 = (char*)(a1 + 249);
      }
      strcpy(v183, "Signal_Shoot");
      v184 = *(unsigned __int8*)(a1 + 248);
      v185 = (v184 & 1) == 0;
      v186 = v184 >> 1;
      if (v185) {
        v187 = a1 + 249;
      }
      else {
        v187 = *(_QWORD*)(a1 + 264);
      }
      if (v185) {
        v188 = v186;
      }
      else {
        v188 = *(_QWORD*)(a1 + 256);
      }
      *(_DWORD*)(a1 + 240) = Signal_d30a60(
          *(_QWORD*)(*(_QWORD*)(a1 + 232) + 320LL), v187, v188, v199);
    LABEL_263:
      result = (__int64)v201;
      if (v201 == v199) {
        v171 = 32;
      }
      else {
        if (v201 == nullptr) {
          goto LABEL_268;
        }
        v171 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v201 + v171))((__int64)v201);
    LABEL_268:
      if (v161 != 0) {
        return std___1___shared_weak_count___release_weak(v161);
      }
      return result;
    }
  }
  v143 = *(_QWORD**)(a1 + 8);
  v144 = v143[9];
  v145 = v143[10];
  if (v145 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v145 + 16), 1u,
                              memory_order_relaxed);
    v146 = v143[11];
    v199[0] = GameData_2005c70;
    v199[1] = a1;
    v201 = v199;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v145 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v146 = v143[11];
    v199[0] = GameData_2005c70;
    v199[1] = a1;
    v201 = v199;
  }
  v147 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 104) = v144;
  *(_QWORD*)(a1 + 112) = v145;
  if (v147 != 0) {
    std___1___shared_weak_count___release_weak(v147);
  }
  v148 = *(_BYTE*)(a1 + 136);
  *(_QWORD*)(a1 + 120) = v146;
  if ((v148 & 1) != 0) {
    *(_QWORD*)(a1 + 144) = 11;
    v149 = *(char**)(a1 + 152);
  }
  else {
    *(_BYTE*)(a1 + 136) = 22;
    v149 = (char*)(a1 + 137);
  }
  strcpy(v149, "Signal_Jump");
  v150 = *(unsigned __int8*)(a1 + 136);
  v151 = (v150 & 1) == 0;
  v152 = v150 >> 1;
  if (v151) {
    v153 = a1 + 137;
  }
  else {
    v153 = *(_QWORD*)(a1 + 152);
  }
  if (v151) {
    v154 = v152;
  }
  else {
    v154 = *(_QWORD*)(a1 + 144);
  }
  *(_DWORD*)(a1 + 128) =
      Signal_d30a60(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 320LL), v153, v154, v199);
  result = (__int64)v201;
  if (v201 == v199) {
    v156 = 32;
  LABEL_241:
    result = (*(__int64 (**)(__int64))(*v201 + v156))((__int64)v201);
  }
  else if (v201 != nullptr) {
    v156 = 40;
    goto LABEL_241;
  }
  if (v145 != 0) {
    result = std___1___shared_weak_count___release_weak(v145);
  }
  v157 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 64LL);
  if ((unsigned int)(v157 - 989295305) <= 0x21 &&
          ((1LL << ((unsigned __int8)v157 + 55)) & 0x200040007LL) != 0 ||
      (unsigned int)(v158 = v157 + 2068235592) <= 0x12 &&
          ((1 << v158) & 0x40003) != 0) {
    v159 = *(_QWORD**)(a1 + 8);
    v160 = v159[9];
    v161 = v159[10];
    if (v161 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v161 + 16), 1u,
                                memory_order_relaxed);
      v162 = v159[11];
      v199[0] = GameData_2005d80;
      v199[1] = a1;
      v201 = v199;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v161 + 16), 1u,
                                memory_order_relaxed);
    }
    else {
      v162 = v159[11];
      v199[0] = GameData_2005d80;
      v199[1] = a1;
      v201 = v199;
    }
    v163 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(a1 + 160) = v160;
    *(_QWORD*)(a1 + 168) = v161;
    if (v163 != 0) {
      std___1___shared_weak_count___release_weak(v163);
    }
    v164 = *(_BYTE*)(a1 + 192);
    *(_QWORD*)(a1 + 176) = v162;
    if ((v164 & 1) != 0) {
      *(_QWORD*)(a1 + 200) = 12;
      v165 = *(char**)(a1 + 208);
    }
    else {
      *(_BYTE*)(a1 + 192) = 24;
      v165 = (char*)(a1 + 193);
    }
    strcpy(v165, "Signal_Chant");
    v166 = *(unsigned __int8*)(a1 + 192);
    v167 = (v166 & 1) == 0;
    v168 = v166 >> 1;
    if (v167) {
      v169 = a1 + 193;
    }
    else {
      v169 = *(_QWORD*)(a1 + 208);
    }
    if (v167) {
      v170 = v168;
    }
    else {
      v170 = *(_QWORD*)(a1 + 200);
    }
    *(_DWORD*)(a1 + 184) = Signal_d30a60(
        *(_QWORD*)(*(_QWORD*)(a1 + 176) + 320LL), v169, v170, v199);
    goto LABEL_263;
  }
  return result;
}

__int64 ActionAttack_1061280(__int64 result, unsigned __int8 a2, int a3,
                             __int64 a4)
{
  __int64 v4;
  int* v5;
  char v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  bool v11;
  unsigned int v12;
  bool v13;
  int v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  __int64 v55;
  bool v56;
  __int64 v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  __int64 v64;
  float v65;
  float v66;
  float v67;
  bool v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  char v80;
  char v81;
  float v82;
  float v83;
  __int64 v84;
  int v85;
  unsigned int v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v90;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  _QWORD* v102;
  _QWORD v103[4];
  __int64 v104;

  v5 = *(int**)(result + 24);
  v7 = a3;
  v8 = result;
  v9 = a2 & ((*(_BYTE*)v5 & 8) == 0);
  if ((a2 & ((*(_BYTE*)v5 & 8) == 0)) == 0) {
    *(_BYTE*)(result + 32) = 1;
    v5[1] |= 0x80u;
  }
  v10 = v5[16];
  v11 = (unsigned int)(v10 - 989295305) > 0x21 ||
        ((1LL << ((unsigned __int8)v10 + 55)) & 0x200040007LL) == 0;
  if (!v11 || ((v12 = v10 + 2068235592, v13 = v12 > 0x12,
                v14 = (1 << v12) & 0x40003, !v13)
                   ? (v15 = v14 == 0)
                   : (v15 = true),
               !v15)) {
    v16 = *v5;
    if (((a3 | v9) & 1) == 0 && (v16 & 2) != 0) {
      v17 = *(_QWORD*)(result + 8);
      v18 = *(_QWORD*)(v17 + 136);
      if (v18 != 0) {
        result = *(_QWORD*)(v17 + 144);
        if (*(_QWORD*)(v18 + 8) != -1 && result != 0) {
          result = game_10a2a40();
          v16 = *v5;
        }
      }
    }
    if ((v16 & 8) != 0) {
      v20 = *(_QWORD*)(v8 + 8);
      v21 = 0.0f;
      v104 = a4;
      v22 = *(_QWORD*)(*(_QWORD*)(v20 + 368) + 96LL);
      if (v22 != 0) {
        v23 = GameRoutine_d2b5f0(*(_QWORD*)(v22 + 32) + 72LL);
        if ((v23 & 0x100000000LL) != 0) {
          v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v22 + 24) + 72LL) +
                           104LL * (int)v23);
          if (v24 != 0) {
            v25 = *(float**)(v24 + 16);
            if (v25 != nullptr) {
              v21 =
                  (float)(*v25 * 0x1.1111120000000p-6f) * 0x1.e000000000000p+5f;
            }
          }
        }
      }
      v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 368LL) + 96LL);
      if (v26 != 0) {
        v27 = GameRoutine_d2b5f0(*(_QWORD*)(v26 + 32) + 72LL);
        if ((v27 & 0x100000000LL) != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 24) + 72LL) +
                           104LL * (int)v27 + 16);
          if (v28 != 0) {
            v30 = *(__int64**)(v28 + 80);
            v29 = *(__int64**)(v28 + 88);
            if (v30 != v29) {
              while (1) {
                v31 = *v30;
                v32 = v30[1];
                if (v32 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8),
                                            1u, memory_order_relaxed);
                }
                if (*(float*)(v31 + 8) < v21) {
                  break;
                }
                v34 = __dynamic_cast_alt1(v31, GameData_212d4f0[0],
                                          GameData_212ecc8[0], 0);
                v33 = v34 == 0;
                if (v34 != 0) {
                  v4 = v34;
                }
                if (v32 != 0) {
                  goto LABEL_38;
                }
              LABEL_40:
                if (!v33) {
                  if (v4 != 0) {
                    v35 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 88LL) +
                                     120LL);
                    v36 = *(_QWORD*)(v35 + 248);
                    v37 = *(_QWORD*)(v35 + 256);
                    *(_BYTE*)(v35 + 272) = 1;
                    while (v36 != v37) {
                      if (*(_DWORD*)v36 != 0) {
                        v38 = *(_QWORD*)(v36 + 16);
                        if (v38 == 0 || *(_QWORD*)(v38 + 8) == -1) {
                          goto LABEL_45;
                        }
                        v103[0] = v4;
                        v39 = *(_QWORD*)(v36 + 64);
                        if (v39 == 0) {
                          GameRoutine_60a310_alt1(0);
                        }
                        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v39 + 48LL))(
                            v39, v103);
                        if ((*(_DWORD*)v36 & 0x80000000) != 0) {
                        LABEL_45:
                          *(_DWORD*)v36 = 0;
                        }
                      }
                      v36 += 80;
                    }
                    *(_BYTE*)(v35 + 272) = 0;
                  }
                  goto LABEL_55;
                }
                v30 += 2;
                if (v30 == v29) {
                  goto LABEL_55;
                }
              }
              v33 = true;
              if (v32 == 0) {
                goto LABEL_40;
              }
            LABEL_38:
              if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                std___1___shared_weak_count___release_weak(v32);
              }
              goto LABEL_40;
            }
          }
        }
      }
    LABEL_55:
      result = CharacterAnimator_1079580(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 368LL),
                                         3923150247LL, -1.0f, -1.0f, 1.0f);
      v40 = *(_QWORD*)(v8 + 8);
      *(_DWORD*)(v40 + 648) = 0;
      *(_DWORD*)(v40 + 672) = 0;
      a4 = v104;
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 88LL) + 8LL) +
                289LL) = 1;
      v41 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 96LL);
      if ((v41 & 0xFFFFFFFE) == 2) {
        v42 = GameData_212d448[0];
        v43 = *GameData_212d448[0];
        v44 = *GameData_212d448[0] + 24LL * (v41 == 3);
        v45 = *(_QWORD*)(v44 + 32);
        if (v45 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                    memory_order_relaxed);
          v46 = *(_QWORD*)(v44 + 40);
          v47 = *(_QWORD*)(v45 + 8) == -1 || v46 == 0;
          if (v47 || (v48 = *(_QWORD*)(v46 + 80)) == 0 ||
              (*(_QWORD*)(v48 + 8) != -1 ? (v49 = *(_QWORD*)(v46 + 88) == 0)
                                         : (v49 = true),
               v49)) {
            v50 = 0;
          }
          else {
            v50 = *(_QWORD*)(v45 + 8) == -1 ? 0LL : v46;
          }
          std___1___shared_weak_count___release_weak(v45);
          v43 = *v42;
        }
        else {
          v50 = 0;
        }
        v51 = v43 + 24LL * (unsigned int)v5[3];
        v52 = *(_QWORD*)(v51 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                  memory_order_relaxed);
        v53 = *(_QWORD*)(v51 + 40);
        v54 = *(_QWORD*)(v52 + 8) == -1 || v53 == 0;
        if (v54 || (v55 = *(_QWORD*)(v53 + 80)) == 0 ||
            (*(_QWORD*)(v55 + 8) != -1 ? (v56 = *(_QWORD*)(v53 + 88) == 0)
                                       : (v56 = true),
             v56)) {
          v57 = 0;
        }
        else {
          v57 = *(_QWORD*)(v52 + 8) == -1 ? 0LL : v53;
        }
        result = std___1___shared_weak_count___release_weak(v52);
        v58 = *(float*)(v50 + 40);
        v59 = *(float*)(v50 + 44);
        v60 = *(_QWORD*)(v8 + 8);
        v61 = *v42;
        v62 = *(float*)(v57 + 44) - v59;
        v63 = *(float*)(v57 + 40) - v58;
        v64 = *(_QWORD*)(v60 + 808);
        v65 = *(float*)(v64 + 40);
        v66 = *(float*)(v64 + 44);
        v67 = (float)(v62 * v62) + (float)(v63 * v63);
        v68 = v67 < 0x1.0000000000000p-23f;
        v69 = 1.0f / sqrtf(v67);
        v70 = v63 * v69;
        v71 = v62 * v69;
        v72 = v68 ? 0.0f : v70;
        v73 = v68 ? 1.0f : v71;
        if (v61 == 0 || (v74 = *(_QWORD*)(v61 + 8)) == 0 ||
            (~*(_DWORD*)(v74 + 112) & 0x28000) != 0) {
          v75 = *(_QWORD*)(v64 + 88);
          v76 = *(_QWORD*)(v75 + 392);
          v77 = *(_QWORD*)(v75 + 400);
          if (v77 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 8), 1u,
                                      memory_order_relaxed);
          }
          v78 = *(_DWORD*)(v76 + 11784);
          v13 = v78 > 0x12;
          v79 = 0x1FF7Fu >> v78;
          v80 = v13;
          v81 = v80 | v79;
          if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
            result = std___1___shared_weak_count___release_weak(v77);
          }
          if ((v81 & 1) != 0) {
            v82 =
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c190) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c190 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c190) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c190 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c190 *
                                                                                                      0x1.7e1cb20000000p+0f)) *
                                                                                      0x1.7e1cb20000000p+0f)) *
                                                                   0x1.7e1cb20000000p+0f)) *
                                                   0x1.7e1cb20000000p+0f)) *
                                0x1.7e1cb20000000p+0f) +
                        1.0f) *
                -0x1.38c3540000000p+0f;
            v83 =
                (float)((float)-(
                            float)(*(float*)((char*)((__int128*)0x10LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                                 GameData_212c188 +
                                                             4) +
                                                   (float)((float)-(
                                                               float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c188) -
                                                                      (float)((float)(*((float*)
                                                                                            GameData_212c188 +
                                                                                        1) -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c188 *
                                                                                              0x1.7e1cb20000000p+0f)) *
                                                                              0x1.7e1cb20000000p+0f)) *
                                                           0x1.7e1cb20000000p+0f)) *
                                           0x1.7e1cb20000000p+0f)) *
                        0x1.7e1cb20000000p+0f) +
                1.0f;
            v84 = *(_QWORD*)(v60 + 808);
            *(_DWORD*)(v60 + 844) = *(_DWORD*)(v84 + 48);
            v85 = *(_DWORD*)(v84 + 52);
            *(float*)(v60 + 852) =
                v65 + (float)((float)((float)(v73 * v82) + (float)(v72 * v83)) *
                              0x1.3880000000000p+13f);
            *(float*)(v60 + 856) =
                v66 + (float)((float)((float)(v73 * v83) - (float)(v72 * v82)) *
                              0x1.3880000000000p+13f);
            *(_QWORD*)(v60 + 860) = 0x3C23D70A00000000LL;
            *(_DWORD*)(v60 + 848) = v85;
          }
        }
      }
    }
  }
  if (v9 == 0 || (*(_BYTE*)v5 & 2) != 0) {
    result = game_combat_1064730(v103, v5, v9, v7 & 1, a4);
    if (*GameData_212d448[0] != 0) {
      v86 = v5[3];
      if (v86 <= 3) {
        v87 = *GameData_212d448[0] + 24LL * v86;
        result = *(_QWORD*)(v87 + 32);
        if (result != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                    memory_order_relaxed);
          v88 = *(_QWORD**)(v87 + 40);
          if (*(_QWORD*)(result + 8) == -1 || v88 == nullptr) {
            return std___1___shared_weak_count___release_weak(result);
          }
          v90 = v88[10];
          if (v90 == 0) {
            return std___1___shared_weak_count___release_weak(result);
          }
          if (*(_QWORD*)(v90 + 8) == -1 || v88[11] == 0) {
            return std___1___shared_weak_count___release_weak(result);
          }
          else {
            if (*(_QWORD*)(result + 8) == -1) {
              v102 = nullptr;
            }
            else {
              v102 = v88;
            }
            result = std___1___shared_weak_count___release_weak(result);
            if (v102 != nullptr && v102 != *(_QWORD**)(v8 + 8)) {
              GameRoutine_1067080(v102 + 24);
              v92 = v102[25];
              result = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
              *(_QWORD*)(result + 16) = 0;
              *(_QWORD*)(result + 24) = v5;
              v93 = result;
              v94 = GameData_212fe50;
              *(_DWORD*)(result + 32) = 0;
              *(_QWORD*)result = v94 + 2;
              *(_QWORD*)(result + 8) = v92;
              v95 = v102[33];
              if (v95 == 0) {
                result = ActionAttack_1063100_alt1(v102 + 29);
                v95 = v102[33];
              }
              v96 = v102[30];
              v97 = (_QWORD*)(v96 + 8 * (v95 >> 9));
              v98 = *v97 + 8 * (v95 & 0x1FF);
              if (v102[31] == v96) {
                v99 = 0;
              }
              else {
                v99 = v98;
              }
              if (v99 == *v97) {
                v98 = *(v97 - 1) + 4096LL;
              }
              *(_QWORD*)(v98 - 8) = v93;
              v100 = v102[33] - 1LL;
              v101 = v102[34] + 1LL;
              v102[33] = v100;
              v102[34] = v101;
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v102[30] + 8 * (v100 >> 9)) +
                                    8 * (v100 & 0x1FF)) +
                         20LL) = 0;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 ActionAttack_Unknown7(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v1 + 536) == 2) {
    *(_DWORD*)(v1 + 536) = 1;
  }
  return result;
}

char** ActionAttack_1063100(char** result)
{
  char* v1;
  char* v2;
  char** v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  char* v12;
  long double v13;
  char** v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  bool v31;
  signed __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 == v2) {
    v4 = 0;
  }
  else {
    v4 = ((v1 - v2) << 6) - 1;
  }
  v5 = result[4];
  if (v4 - (unsigned __int64)&v5[(_QWORD)result[5]] < 0x200) {
    v7 = result[3];
    v8 = *result;
    v9 = v7 - *result;
    if (v1 - v2 >= (unsigned __int64)v9) {
      if (v7 == v8) {
        v10 = 1;
      }
      else {
        v10 = v9 >> 2;
      }
      if (v10 >> 61 != 0) {
      LABEL_49:
        GameRoutine_60a210(result);
      }
      v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v12 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      result = (char**)fw_memory_HeapManager_Allocate(*v11, 4096, 16, 0);
      v14 = result;
      if (v10 != 0) {
        v15 = &v12[8 * v10];
      }
      else {
        v19 = fw_memory_HeapManager_Allocate(*v11, 8, 16, 0);
        v15 = (char*)(v19 + 8);
        v21 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v21 = 56;
        }
        result = (char**)nn_mem_StandardAllocator_Free(*v11 + v21, v20);
        v2 = v3[1];
        v1 = v3[2];
        v12 = (char*)v19;
      }
      *(_QWORD*)v12 = v14;
      v22 = v12 + 8;
      if (v2 != v1) {
        v23 = v12;
        while (1) {
          if (v22 == v15) {
            if (v12 <= v23) {
              if (v22 == v23) {
                v27 = 1;
              }
              else {
                v27 = (v22 - v23) >> 2;
              }
              if (v27 >> 61 != 0) {
                goto LABEL_49;
              }
              v28 = fw_memory_HeapManager_Allocate(*v11, 8 * v27, 16, 0);
              v30 = v28;
              v24 = (char*)(v28 + 8 * (v27 >> 2));
              v32 = v22 - v12;
              v31 = v22 == v12;
              v22 = v24;
              if (!v31) {
                v22 = &v24[v32];
                v33 = (_QWORD*)(v28 + 8 * (v27 >> 2));
                do {
                  v34 = *(_QWORD*)v12;
                  v12 += 8;
                  v32 -= 8LL;
                  *v33++ = v34;
                } while (v32 != 0);
              }
              v15 = (char*)(v28 + 8 * v27);
              v35 = 128;
              if (*(_QWORD*)(*v11 + 200LL) == 0) {
                v35 = 56;
              }
              result = (char**)nn_mem_StandardAllocator_Free(*v11 + v35, v29);
              v23 = (char*)v30;
            }
            else {
              v26 = (((v12 - v23) >> 3) + 1 +
                     ((unsigned __int64)(((v12 - v23) >> 3) + 1) >> 63)) >>
                    1;
              v24 = &v12[-8 * v26];
              if (v22 != v12) {
                result = (char**)memmove(&v12[-8 * v26], v12, v22 - v12);
              }
              v22 = &v24[v22 - v12];
            }
          }
          else {
            v24 = v12;
          }
          v25 = *(_QWORD*)v2;
          v2 += 8;
          v12 = v24;
          *(_QWORD*)v22 = v25;
          v22 += 8;
          if (v2 == v3[2]) {
            goto LABEL_42;
          }
        }
      }
      v23 = v12;
      v24 = v12;
    LABEL_42:
      v36 = v3[4];
      v37 = *v3;
      *v3 = v23;
      v3[1] = v24;
      v38 = 256;
      v3[2] = v22;
      v3[3] = v15;
      v39 = (__int64)(v36 + 512);
      if (v22 - v24 != 8) {
        v38 = v39;
      }
      v3[4] = (char*)v38;
      if (v37 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v40 = 56;
        }
        return (char**)nn_mem_StandardAllocator_Free(*v11 + v40, v13);
      }
    }
    else {
      if (v2 == v8) {
        v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096, 16,
                                             0);
        GameRoutine_1063720(v3, &v41);
        v16 = v3[2];
        v17 = *((_QWORD*)v16 - 1);
        v3[2] = v16 - 8;
        v41 = v17;
        result = (char**)GameRoutine_1063460(v3, &v41);
      }
      else {
        v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096, 16,
                                             0);
        result = (char**)GameRoutine_10635c0(v3, &v41);
      }
      v18 = 256;
      if (v3[2] - v3[1] != 8) {
        v18 = (__int64)(v3[4] + 512);
      }
      v3[4] = (char*)v18;
    }
  }
  else {
    result[4] = v5 + 512;
    v6 = *((_QWORD*)v1 - 1);
    result[2] = v1 - 8;
    v41 = v6;
    return (char**)GameRoutine_1063460(result, &v41);
  }
  return result;
}

void game_combat_ActionAttack_OnEnter_lambda1_Invoke(__int64 a1, int8x16_t** a2,
                                                     long double a3)
{
  int8x16_t* v3;
  __int64 v4;
  unsigned __int32 v5;
  int8x16_t v6;
  __int64 v7;
  float v8;
  __int128 v9;
  float32x4_t* v10;
  __int128 v11;
  __int128 v12;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v12 = (__typeof__(v12)){0};
  v5 = LANES128(v3[2]).n128_u32[0];
  if (v5 == 2) {
    v10 = *(float32x4_t**)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 88LL) + 432LL);
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 88LL) + 440LL) != 0) {
      v10 = *(float32x4_t**)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 88LL) + 440LL);
    }
    if (v10 != nullptr) {
      a3 = COERCE_LONG_DOUBLE(vsubq_f32(COERCE_AS(float32x4_t, 0), v10[29]));
      goto LABEL_8;
    }
  }
  else if (v5 == 1) {
    v6 = v3[3];
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 88LL);
    LODWORD(v8) = LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u32[0];
    *(_QWORD*)&v9 = LANES128(v3[3]).n128_u64[0];
    *((_QWORD*)&v9 + 1) = LODWORD(v8);
    v12 = v9;
    a3 = COERCE_LONG_DOUBLE(vmlaq_n_f32(
        vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)(*(_QWORD*)(v7 + 8) + 432LL),
                                   LANES128(v6).n128_f32[0]),
                       *(float32x4_t*)(*(_QWORD*)(v7 + 8) + 448LL),
                       COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]), 1),
        *(float32x4_t*)(*(_QWORD*)(v7 + 8) + 464LL), v8));
  LABEL_8:
    *(_QWORD*)&v11 = *(_QWORD*)&a3;
    *((_QWORD*)&v11 + 1) = DWORD2(a3);
    v12 = v11;
  }
  ActionAttack_1061280_alt1(v4, LANES128(v3[2]).n128_u8[4],
                            LANES128(v3[4]).n128_u8[0], (__int64)&v12, a3);
}

__int64 game_combat_ActionAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                        __int64* a2)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64* v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
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
  __int64 v47;
  int v48;
  __int64 v49;
  __int128 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  _BYTE v58[32];
  _BYTE* v59;

  v4 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(v4 + 8);
  if (*(_DWORD*)(v5 + 648) == 2) {
    return result;
  }
  if (*GameData_212d448[0] == 0) {
    return result;
  }
  v6 = *(_QWORD*)(*GameData_212d448[0] + 8);
  if (v6 == 0) {
    return result;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v5 + 368) + 96LL);
  if (v7 == 0) {
    return result;
  }
  v8 = *a2;
  v9 = *(float*)(*a2 + 8);
  result = GameRoutine_d2b5f0(*(_QWORD*)(v7 + 32) + 72LL);
  if ((result & 0x100000000LL) == 0) {
    return result;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 72LL) +
                   104LL * (int)result + 16);
  if (v10 == 0) {
    return result;
  }
  v11 = *(__int64**)(v10 + 80);
  v12 = *(__int64**)(v10 + 88);
  if (v11 == v12) {
    return result;
  }
  while (1) {
    result = *v11;
    v13 = v11[1];
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(result + 8) < v9) {
      v14 = true;
      if (v13 == 0) {
        goto LABEL_18;
      }
    LABEL_16:
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak(v13);
      }
      goto LABEL_18;
    }
    result = __dynamic_cast();
    v14 = result == 0;
    if (result != 0) {
      v2 = result;
    }
    if (v13 != 0) {
      goto LABEL_16;
    }
  LABEL_18:
    if (!v14) {
      break;
    }
    v11 += 2;
    if (v11 == v12) {
      return result;
    }
  }
  if (v2 != 0) {
    v15 = *(_QWORD*)(v6 + 32);
    v16 = *(_QWORD*)(v6 + 40);
    if (v15 == v16) {
      v19 = &GameData_2235e30;
    }
    else {
      v17 = 954437177 * ((unsigned __int64)(v16 - v15) >> 4) - 1;
      v18 = *(_DWORD*)(v6 + 56);
      if (v18 < v17) {
        v17 = *(_DWORD*)(v6 + 56);
      }
      if (v18 < 0) {
        v17 = 0;
      }
      v19 = (__int64*)(v15 + 144LL * v17);
    }
    v20 = *(_QWORD*)(v4 + 8);
    v21 = *(float*)(v8 + 32);
    v22 = *(_QWORD*)(v20 + 80);
    if (v22 == 0) {
      goto LABEL_42;
    }
    v23 = *(_QWORD*)(v20 + 88);
    if (*(_QWORD*)(v22 + 8) == -1 || v23 == 0) {
      goto LABEL_42;
    }
    v26 = *(_QWORD*)(v23 + 392);
    v25 = *(_QWORD*)(v23 + 400);
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v26 != 0) {
      v3 = fmaxf(*(float*)(v26 + 32), 1.0);
    }
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      result = std___1___shared_weak_count___release_weak(v25);
    }
    if (v26 == 0) {
    LABEL_42:
      v3 = 1.0;
    }
    v27 = *(float*)(v2 + 8);
    v28 = *(float*)(v8 + 8);
    v29 = v19[10];
    v30 = *(_QWORD*)(v4 + 8);
    v54 = *v19;
    v55 = v19[1];
    v50 = *((_OWORD*)v19 + 2);
    v56 = v19[2];
    v57 = *((_BYTE*)v19 + 24);
    v51 = v19[6];
    v52 = v19[7];
    v31 = v19[9];
    v53 = v19[8];
    v32 = v29 - v31;
    v33 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v29 == v31) {
      v39 = 0;
      v38 = 0;
      v35 = 0;
    }
    else {
      if (0xAAAAAAAAAAAAAAABLL * (v32 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_1063f60(result);
      }
      v34 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v29 - v31, 16, 0);
      v35 = v34;
      v36 = 0;
      do {
        v37 = v34 + v36;
        *(_DWORD*)v37 = -1;
        *(_QWORD*)(v37 + 8) = 0;
        *(_BYTE*)(v37 + 16) = 0;
        if (v34 != v31) {
          *(_DWORD*)v37 = *(_DWORD*)(v31 + v36);
          *(_QWORD*)(v37 + 8) = *(_QWORD*)(v31 + v36 + 8);
          *(_BYTE*)(v37 + 16) = *(_BYTE*)(v31 + v36 + 16);
        }
        v36 += 24;
      } while (v31 + v36 != v29);
      v38 = v34 + v32;
      v39 = v34 + v36;
    }
    v40 = fw_memory_HeapManager_Allocate(*v33, 176, 16, 0);
    *(_QWORD*)(v40 + 96) = v39;
    *(_QWORD*)(v40 + 104) = v38;
    v41 = v40;
    *(_QWORD*)v40 = GameData_2005ce0;
    *(_BYTE*)(v40 + 40) = v57;
    *(_OWORD*)(v40 + 48) = v50;
    *(_QWORD*)(v40 + 24) = v55;
    *(_QWORD*)(v40 + 32) = v56;
    *(_QWORD*)(v40 + 16) = v54;
    *(_QWORD*)(v40 + 64) = v51;
    *(_QWORD*)(v40 + 72) = v52;
    *(_QWORD*)(v40 + 80) = v53;
    *(_QWORD*)(v40 + 88) = v35;
    v42 = v19[13];
    *(_QWORD*)(v40 + 112) = v19[12];
    *(_QWORD*)(v40 + 120) = v42;
    v43 = v19[14];
    v44 = v19[15];
    v45 = v19[16];
    v46 = v19[17];
    *(float*)(v40 + 160) = fabsf(v21) * v3;
    *(_QWORD*)(v40 + 144) = v45;
    *(_QWORD*)(v40 + 152) = v46;
    *(_QWORD*)(v40 + 128) = v43;
    *(_QWORD*)(v40 + 136) = v44;
    *(_DWORD*)(v30 + 672) = 0;
    *(_DWORD*)(v30 + 648) = 2;
    v47 = *(_QWORD*)(v30 + 616);
    *(_DWORD*)(v30 + 676) = *(_DWORD*)(v47 + 40);
    v48 = *(_DWORD*)(v47 + 44);
    *(float*)(v30 + 684) = (float)(v27 / 60.0) - (float)(v28 / 60.0);
    *(_DWORD*)(v30 + 680) = v48;
    v59 = (_BYTE*)game_combat_ActionAttack_OnEnter_lambda2_Clone_alt1();
    GameRoutine_106aeb0(v58, v30 + 688);
    if (v59 == v58) {
      v49 = 32;
    LABEL_55:
      (*(void (**)(void))(*(_QWORD*)v59 + v49))();
    }
    else if (v59 != nullptr) {
      v49 = 40;
      goto LABEL_55;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
  }
  return result;
}

float game_combat_ActionAttack_OnEnter_lambda2_Clone(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float result;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v4 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)v3 = GameData_2005ce0;
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(v3 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(v3 + 24) = v5;
  *(_QWORD*)(v3 + 32) = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(v3 + 40) = *(_BYTE*)(a1 + 40);
  v6 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(v3 + 48) = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v3 + 56) = v6;
  v7 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(v3 + 64) = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(v3 + 72) = v7;
  v8 = *(_QWORD*)(a1 + 88);
  v9 = v4 - v8;
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(v3 + 88) = 0;
  if (v4 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_1063f60(v3);
    }
    v10 = (_QWORD*)v3;
    v11 = fw_memory_HeapManager_Allocate(*v2, v4 - v8, 16, 0);
    v12 = 0;
    v3 = (__int64)v10;
    v10[11] = v11;
    v10[13] = v11 + v9;
    do {
      v13 = v11 + v12;
      *(_DWORD*)v13 = -1;
      *(_QWORD*)(v13 + 8) = 0;
      *(_BYTE*)(v13 + 16) = 0;
      if (v11 != v8) {
        *(_DWORD*)v13 = *(_DWORD*)(v8 + v12);
        *(_QWORD*)(v13 + 8) = *(_QWORD*)(v8 + v12 + 8);
        *(_BYTE*)(v13 + 16) = *(_BYTE*)(v8 + v12 + 16);
      }
      v12 += 24;
    } while (v8 + v12 != v4);
    v10[12] = v11 + v12;
  }
  v14 = *(_QWORD*)(a1 + 136);
  result = *(float*)(a1 + 160);
  *(_QWORD*)(v3 + 128) = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(v3 + 136) = v14;
  v16 = *(_QWORD*)(a1 + 144);
  v17 = *(_QWORD*)(a1 + 152);
  *(float*)(v3 + 160) = result;
  *(_QWORD*)(v3 + 144) = v16;
  *(_QWORD*)(v3 + 152) = v17;
  v18 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(v3 + 112) = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(v3 + 120) = v18;
  return result;
}

float game_combat_ActionAttack_OnEnter_lambda2_CloneInto(__int64 a1, __int64 a2)
{
  char v4;
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
  float result;

  *(_QWORD*)a2 = GameData_2005ce0;
  v4 = *(_BYTE*)(a1 + 40);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(a2 + 40) = v4;
  *(_QWORD*)(a2 + 32) = v6;
  *(_QWORD*)(a2 + 16) = v5;
  *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a2 + 48) = *(_QWORD*)(a1 + 48);
  v8 = *(_QWORD*)(a1 + 64);
  v7 = *(_QWORD*)(a1 + 72);
  v9 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 64) = v8;
  *(_QWORD*)(a2 + 72) = v7;
  *(_QWORD*)(a2 + 80) = v9;
  *(_QWORD*)(a2 + 88) = 0;
  v10 = *(_QWORD*)(a1 + 88);
  v11 = *(_QWORD*)(a1 + 96);
  v12 = v11 - v10;
  if (v11 != v10) {
    if (0xAAAAAAAAAAAAAAABLL * (v12 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_1063f60(a1);
    }
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11 - v10, 16, 0);
    v14 = 0;
    *(_QWORD*)(a2 + 88) = v13;
    *(_QWORD*)(a2 + 96) = v13;
    *(_QWORD*)(a2 + 104) = v13 + v12;
    do {
      v15 = v13 + v14;
      *(_DWORD*)v15 = -1;
      *(_QWORD*)(v15 + 8) = 0;
      *(_BYTE*)(v15 + 16) = 0;
      if (v13 != v10) {
        *(_DWORD*)v15 = *(_DWORD*)(v10 + v14);
        *(_QWORD*)(v15 + 8) = *(_QWORD*)(v10 + v14 + 8);
        *(_BYTE*)(v15 + 16) = *(_BYTE*)(v10 + v14 + 16);
      }
      v14 += 24;
    } while (v10 + v14 != v11);
    *(_QWORD*)(a2 + 96) = v13 + v14;
  }
  v16 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a2 + 136) = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a2 + 152) = v16;
  *(_QWORD*)(a2 + 120) = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a2 + 112) = *(_QWORD*)(a1 + 112);
  v17 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a2 + 144) = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a2 + 128) = v17;
  result = *(float*)(a1 + 160);
  *(float*)(a2 + 160) = result;
  return result;
}

__attribute__((swiftcall)) void

game_combat_ActionAttack_OnEnter_lambda2_Invoke_10643b0(PSEUDO_X8 x8_,
                                                        float32x4_t* a1)
{

#pragma clang fp contract(off)
  int32x2_t* a2 = (int32x2_t*)PSEUDO_X8_VALUE(x8_);
  int32x2_t result;
  float32x4_t v4;

  game_combat_10901b0_alt1((void*)(&v4), a1 + 1, LANES128(a1[10]).n128_f32[0]);
  LANES64(result).n64_u64[0] =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v4).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0])))
          .n64_u64[0];
  LANES64(*(a2)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__int64 game_combat_ActionAttack_OnEnter_lambda3_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *GameData_212d448[0] +
       24LL * (((*(_DWORD*)(*(_QWORD*)(v1 + 8) + 96LL) - 1) & 0xFFFFFFFD) != 0);
  v3 = *(_QWORD*)(v2 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
  if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
      (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0) : (v7 = true),
       v7)) {
    v4 = 0;
  }
  std___1___shared_weak_count___release_weak(v3);
  *(struct PseudoSret*)(v9) = GameRoutine_10691b0(v4);
  return GameRoutine_10b64f0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 88LL) + 64LL), v9, -1234.5f);
}

__int64 game_combat_ActionAttack_OnEnter_lambda4_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 8);
  v3[0] = 0;
  v3[1] = 0;
  return GameRoutine_1061280(v1, 0, 0, (__int64)v3);
}

#pragma GCC visibility pop
