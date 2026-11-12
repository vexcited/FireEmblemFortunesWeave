#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 LegionStateBattleFighter_Unknown2(__int64 result);
__attribute__((swiftcall)) void CombatLegionManager_e2d920(PSEUDO_X8);
__attribute__((swiftcall)) void LegionStateBattleFighter_e3b770_alt1(
    PSEUDO_X8, _QWORD, _QWORD) __asm__("LegionStateBattleFighter_e3b770");
__attribute__((swiftcall)) void game_combat_e32e50(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 CombatLegionGroup_e58ae0(__int64, __int64, __int64);
__int64 GameRoutine_e3b8e0(__int64 result, char*, char*, unsigned __int64);
__int64 GameRoutine_e412a0(_QWORD, _QWORD, _QWORD);
__int64 JostleManager_ea0220(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 StateMachines_e32f40(__int64, float*, __int64);
__int64 StateMachines_e32f40_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("StateMachines_e32f40");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212f2e0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_e9f200_alt1(_QWORD) __asm__("GameRoutine_e9f200");
float game_combat_e401e0(float*, float*);
float game_combat_e401e0_alt1(_QWORD, _QWORD) __asm__("game_combat_e401e0");
void CombatLegionManager_e2ddb0(__int64, __int64, __int64);
void GameRoutine_e3b650(__int64*, _QWORD*);
void GameRoutine_e9f200(__int64);
__int64 LegionStateBattleFighter_e3a100(__int64 a1);
unsigned __int64 LegionStateBattleFighter_e3ae20(__int64 a1, unsigned int** a2,
                                                 float* a3);
__int64 LegionStateBattleFighter_e3b0b0(__int64 a1, unsigned int a2);
__attribute__((swiftcall)) void
LegionStateBattleFighter_e3b770(PSEUDO_X8 x8_, __int64 a1, int a2);
__n128 LegionStateBattleFighter_Unknown3_alt1(__int64 a1) __asm__(
    "LegionStateBattleFighter_Unknown3");
__attribute__((swiftcall)) void LegionStateBattleFighter_Unknown6(PSEUDO_X8 x8_,
                                                                  __int64 a1);
__attribute__((swiftcall)) void
game_combat_e32e50_alt1(PSEUDO_X8, __int64,
                        signed int) __asm__("game_combat_e32e50");
__int64 CombatLegionGroup_e58ae0_alt1(
    __int64, __int64, unsigned __int64) __asm__("CombatLegionGroup_e58ae0");
__int64 GameRoutine_e9f200_alt2(__int64 result) __asm__("GameRoutine_e9f200");
__int64 LegionStateBattleFighter_e3b0b0_alt1(__int64, int) __asm__(
    "LegionStateBattleFighter_e3b0b0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LegionStateBattleFighter_Unknown3(__int64 a1);

__int64 LegionStateBattleFighter_e3a100(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  char* v4;
  char* v5;
  char* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  unsigned int* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  unsigned __int8 v42;
  __int64 v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  float v78;
  float v79;
  unsigned __int8 v80;
  float v81;
  float v82;
  float v83;
  __int64 v84;
  float v85;
  __int64 v86;
  __int64 v88;
  float v89;
  float v90;
  unsigned __int8** v91;
  unsigned __int8** v92;
  unsigned __int8* v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  int* v97;
  int v98;
  _BOOL4 v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  atomic_ullong* v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int v108;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int8** v113;
  unsigned __int8** v114;
  unsigned __int8* v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  int* v119;
  int v120;
  _BOOL4 v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  atomic_ullong* v125;
  __int64 v126;
  int v127;
  int v129;
  __int64 v131;
  float v132;
  float v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int8** v137;
  unsigned __int8** v138;
  unsigned __int8* v139;
  __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  int* v143;
  int v144;
  _BOOL4 v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  atomic_ullong* v149;
  __int64 v150;
  int v151;
  int v153;
  __int64 v155;
  float v156;
  float v157;
  __int64 v158;
  __int64 v159;
  int v160;
  int v161;
  _BOOL4 v163;
  __int64 v165;
  unsigned __int64 v166;
  _QWORD* v167;
  unsigned __int64 v168;
  _QWORD* v169;
  _QWORD* v170;
  _BYTE* v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  struct {
    __int64 v176;
    int v177;
  } v176_;
  __int64 v178;
  char v179;
  struct {
    unsigned int* v180;
    unsigned int* v181;
  } v180_;
  __int64 v182;

  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
  v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 20) != 1) {
    return 0;
  }
  v2 = *(_QWORD**)(a1 + 8);
  v3 = a1;
  v4 = (char*)v2[17];
  v5 = (char*)v2[18];
  if (v4 != v5) {
    v6 = (char*)v2[17];
    do {
      v7 = *(_QWORD*)v6;
      v6 += 16;
      if (*(_DWORD*)(v7 + 48) != 0) {
        return 0;
      }
    } while (v6 != v5);
  }
  if (*(float*)(a1 + 40) > 0x0.0p+0f) {
    return 0;
  }
  v10 = (v5 - v4) >> 4;
  if (v10 != 0 && (v10 != 1 || (*(_BYTE*)(*(_QWORD*)v4 + 9LL) & 1) == 0)) {
    v11 = *(_DWORD*)(a1 + 16);
    v8 = 0;
    if (v11 > 0xD || ((1 << v11) & 0x3FBB) == 0) {
      return v8;
    }
  }
  v12 = v2[22];
  v176_.v176 = 0;
  v182 = 0;
  v13 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL);
  CombatLegionManager_e2ddb0(v13, (__int64)&v176_.v176, (__int64)&v182),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  CombatLegionManager_e2d920((void*)((__int64*)&v180_.v180)),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = v180_.v180;
  v15 = v180_.v181;
  if (v180_.v180 == v180_.v181) {
    v34 = v180_.v180;
    goto LABEL_37;
  }
  do {
    v16 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 176LL);
    v17 = *(_QWORD*)(v16 + 120);
    v1 = *(_QWORD*)(v16 + 136);
    v18 = *(float*)(v17 + 16);
    v19 = *(float*)(v17 + 20);
    GameRoutine_e9f200_alt2(v1),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v20 = 0x1.3333340000000p-1f;
    v22 = fmaxf(v21, 0x1.3333340000000p-1f);
    v23 = *(_QWORD*)v14;
    v24 = *(__int64**)(v13 + 56);
    v25 = *(__int64**)(v13 + 64);
    if ((*(_BYTE*)(v1 + 92) & (*(float*)(v1 + 88) < v22)) != 0) {
      v26 = *(float*)(v1 + 88);
    }
    else {
      v26 = v22;
    }
    if (v24 == v25) {
      goto LABEL_32;
    }
    v27 = *(_QWORD*)(v23 + 80);
    while (1) {
      v1 = *v24;
      v28 = *(_QWORD*)(*v24 + 8);
      if (v28 == 0 || *(_QWORD*)(v28 + 8) == -1) {
        break;
      }
      v29 = *(_QWORD*)(v1 + 16);
      if (v27 != 0) {
        goto LABEL_27;
      }
    LABEL_20:
      if (v29 == 0) {
        goto LABEL_29;
      }
    LABEL_21:
      v24 += 2;
      if (v24 == v25) {
        v20 = 0x1.3333340000000p-1f;
        goto LABEL_32;
      }
    }
    v29 = 0;
    if (v27 == 0) {
      goto LABEL_20;
    }
  LABEL_27:
    if (*(_QWORD*)(v27 + 8) == -1) {
      goto LABEL_20;
    }
    if (v29 != *(_QWORD*)(v23 + 88)) {
      goto LABEL_21;
    }
  LABEL_29:
    GameRoutine_e9f200_alt2(*v24),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v31 = fmaxf(v30, 0x1.3333340000000p-1f);
    v20 = *(float*)(v1 + 88);
    v23 = *(_QWORD*)v14;
    if ((*(_BYTE*)(v1 + 92) & (v20 < v31)) == 0) {
      v20 = v31;
    }
  LABEL_32:
    v32 = *(float*)(v23 + 44);
    v33 = (float)((float)(v26 + v20) * 0x1.3333340000000p+0f) *
          (float)((float)(v26 + v20) * 0x1.3333340000000p+0f);
    if ((float)((float)(PSEUDO_UNFUSED((float)(v32 - v19) *
                                       (float)(v32 - v19))) +
                (float)((float)(*(float*)(v23 + 40) - v18) *
                        (float)(*(float*)(v23 + 40) - v18))) < v33) {
      LODWORD(v178) = *(_DWORD*)(v23 + 40);
    LABEL_57:
      *((float*)&v178 + 1) = v32;
      v8 = 1;
      goto LABEL_213;
    }
    v32 = COERCE_FLOAT(*(_QWORD*)(v23 + 440));
    if ((float)((float)(PSEUDO_UNFUSED((float)(v32 - v19) *
                                       (float)(v32 - v19))) +
                (float)((float)(COERCE_FLOAT(*(_OWORD*)(v23 + 432)) - v18) *
                        (float)(COERCE_FLOAT(*(_OWORD*)(v23 + 432)) - v18))) <
        v33) {
      LODWORD(v178) = *(_OWORD*)(v23 + 432);
      goto LABEL_57;
    }
    v14 += 2;
  } while (v14 != v15);
  v14 = v180_.v180;
  v34 = v180_.v181;
LABEL_37:
  if ((unsigned __int64)((char*)v34 - (char*)v14) >= 9) {
    v35 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 176LL);
    v36 = *(_QWORD*)(v35 + 120);
    v37 = *(_QWORD*)(v35 + 136);
    v38 = *(float*)(v36 + 16);
    v39 = *(float*)(v36 + 20);
    GameRoutine_e9f200_alt2(v37),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v40 = *(float*)(v37 + 88);
    v41 = 0x1.3333340000000p-1f;
    v42 = *(_BYTE*)(v37 + 92);
    v1 = *(_QWORD*)(v13 + 56);
    v43 = *(_QWORD*)(v13 + 64);
    v45 = fmaxf(v44, 0x1.3333340000000p-1f);
    if ((v42 & (v40 < v45)) != 0) {
      v46 = v40;
    }
    else {
      v46 = v45;
    }
    if (v1 != v43) {
      v41 = 0x1.3333340000000p-1f;
      do {
        v48 = *(_QWORD*)v1;
        v1 += 16;
        v47 = v48;
        GameRoutine_e9f200_alt2(v48),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        v50 = fmaxf(v49, 0x1.3333340000000p-1f);
        if ((*(_BYTE*)(v48 + 92) & (*(float*)(v48 + 88) < v50)) != 0) {
          v50 = *(float*)(v47 + 88);
        }
        if (v41 >= v50) {
          v41 = v50;
        }
      } while (v1 != v43);
    }
    v51 = 0x1.0000000000000p+0f;
    v52 = 0x0.0p+0f;
    v53 = *((_QWORD*)v180_.v180 + 1);
    v54 = 0x1.0000000000000p+0f;
    v55 = *(float*)(v53 + 40);
    v56 = *(float*)(v53 + 44);
    v57 = *(float*)(*(_QWORD*)v180_.v180 + 40LL);
    v58 = *(float*)(*(_QWORD*)v180_.v180 + 44LL);
    v59 = v56 - v58;
    v60 = v55 - v57;
    v61 = (float)(PSEUDO_UNFUSED(v59 * v59)) + (float)(v60 * v60);
    v62 = 0x0.0p+0f;
    if (v61 >= 0x1.0000000000000p-23f) {
      v63 = 0x1.0000000000000p+0f / sqrtf(v61);
      v62 = v60 * v63;
      v54 = v59 * v63;
    }
    v64 = v58 - v39;
    v65 = v57 - v38;
    v66 = (float)(PSEUDO_UNFUSED(v64 * v64)) + (float)(v65 * v65);
    if (v66 >= 0x1.0000000000000p-23f) {
      v67 = 0x1.0000000000000p+0f / sqrtf(v66);
      v52 = v65 * v67;
      v51 = v64 * v67;
    }
    if ((float)((float)(PSEUDO_UNFUSED(v54 * v51)) + (float)(v62 * v52)) <=
        0x0.0p+0f) {
      v68 = v56 - v39;
      v69 = v55 - v38;
      v66 = (float)(PSEUDO_UNFUSED(v68 * v68)) + (float)(v69 * v69);
      if (v66 >= 0x1.0000000000000p-23f) {
        v72 = 0x1.0000000000000p+0f / sqrtf(v66);
        v71 = v69 * v72;
        v70 = v68 * v72;
      }
      else {
        v70 = 0x1.0000000000000p+0f;
        v71 = 0x0.0p+0f;
      }
      if ((float)((float)(PSEUDO_UNFUSED(v54 * v70)) + (float)(v62 * v71)) >=
          0x0.0p+0f) {
        v73 = (float)(PSEUDO_UNFUSED((float)(v39 - v58) * v54)) +
              (float)(v62 * (float)(v38 - v57));
        v66 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(v58 + (float)(PSEUDO_UNFUSED(v54 * v73))) -
                        v39) *
                (float)((float)(v58 + (float)(PSEUDO_UNFUSED(v54 * v73))) -
                        v39))) +
            (float)((float)((float)(v57 + (float)(PSEUDO_UNFUSED(v62 * v73))) -
                            v38) *
                    (float)((float)(v57 + (float)(PSEUDO_UNFUSED(v62 * v73))) -
                            v38));
      }
    }
    if (v66 < (float)((float)(v46 + v41) * (float)(v46 + v41))) {
      v8 = 1;
      v178 = v176_.v176;
      goto LABEL_213;
    }
  }
  v175 = v3;
  if (*(_BYTE*)(v3 + 36) != 1) {
    goto LABEL_211;
  }
  v74 = *(_QWORD**)(*(_QWORD*)(v3 + 8) + 176LL);
  v75 = v74[17];
  v76 = *(_QWORD*)(v74[8] + 8LL);
  v77 = v74[15];
  v78 = *(float*)(v77 + 16);
  v79 = *(float*)(v77 + 20);
  GameRoutine_e9f200_alt2(v75),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  v174 = v76;
  v80 = *(_BYTE*)(v75 + 92);
  v82 = fmaxf(v81, 0x1.3333340000000p-1f);
  v83 = *(float*)(v75 + 88);
  v84 = *(_QWORD*)(v76 + 16);
  if ((v80 & (v83 < v82)) != 0) {
    v85 = v83;
  }
  else {
    v85 = v82;
  }
  if (v84 == 0 || (int)CombatLegionGroup_e58ae0_alt1(*(_QWORD*)(v76 + 16),
                                                     (__int64)"Main", 4u) < 1) {
    goto LABEL_117;
  }
  v86 = 0;
  while (2) {
    v92 = *(unsigned __int8***)(v84 + 16);
    v91 = *(unsigned __int8***)(v84 + 24);
    if (v92 == v91) {
      goto LABEL_78;
    }
    while (2) {
      v93 = *v92;
      v94 = (__int64)v92[1];
      if (v94 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v94 + 8), 1u,
                                  memory_order_relaxed);
      }
      v95 = *v93;
      v96 = *((_QWORD*)v93 + 1);
      if ((v95 & 1) == 0) {
        v96 = v95 >> 1;
      }
      if (v96 != 4) {
        v99 = false;
        if (v94 == 0) {
          goto LABEL_95;
        }
        goto LABEL_93;
      }
      if ((v95 & 1) != 0) {
        v97 = *((int**)v93 + 2);
      }
      else {
        v97 = (int*)(v93 + 1);
      }
      v98 = *v97;
      v99 = v98 == 1852399949;
      if (v98 == 1852399949) {
        v1 = (__int64)v93;
      }
      if (v94 != 0) {
      LABEL_93:
        if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v94),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    LABEL_95:
      if (!v99) {
        v92 += 2;
        if (v92 == v91) {
          goto LABEL_78;
        }
        continue;
      }
      break;
    }
    if (v1 == 0) {
      goto LABEL_78;
    }
    v100 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 16 * v86);
    if (v100 == nullptr || v100 == *(_QWORD**)(*(_QWORD*)(v175 + 8) + 176LL)) {
      goto LABEL_78;
    }
    v101 = v100[17];
    v102 = v100[18];
    if (v102 != 0) {
      v103 = (atomic_ullong*)(v102 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v102 + 8), 1u,
                                memory_order_relaxed);
      v104 = *(_QWORD*)(v101 + 40);
      if (*(_DWORD*)(v104 + 20) != 0) {
        if (atomic_fetch_add(v103, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v102),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        goto LABEL_78;
      }
      v108 = *(_DWORD*)(v104 + 24);
      if (atomic_fetch_add(v103, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v108 != 3 && v108 != 0) {
          goto LABEL_78;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v102),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v108 != 0 && v108 != 3) {
          goto LABEL_78;
        }
      }
    }
    else {
      v105 = *(_QWORD*)(v101 + 40);
      if (*(_DWORD*)(v105 + 20) != 0) {
        goto LABEL_78;
      }
      v106 = *(_DWORD*)(v105 + 24);
      if (v106 != 0 && v106 != 3) {
        goto LABEL_78;
      }
    }
    v88 = v100[17];
    GameRoutine_e9f200_alt2(v88),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v90 = fmaxf(v89, 0x1.3333340000000p-1f);
    if ((*(_BYTE*)(v88 + 92) & (*(float*)(v88 + 88) < v90)) != 0) {
      v90 = *(float*)(v88 + 88);
    }
    if ((float)((float)(PSEUDO_UNFUSED(
                    (float)(*(float*)(v100[15] + 20LL) - v79) *
                    (float)(*(float*)(v100[15] + 20LL) - v79))) +
                (float)((float)(*(float*)(v100[15] + 16LL) - v78) *
                        (float)(*(float*)(v100[15] + 16LL) - v78))) <
        (float)((float)(v85 + v90) * (float)(v85 + v90))) {
    LABEL_210:
      v8 = 1;
      v178 = v176_.v176;
      goto LABEL_212;
    }
  LABEL_78:
    if (++v86 < (int)CombatLegionGroup_e58ae0_alt1(v84, (__int64)"Main", 4u)) {
      continue;
    }
    break;
  }
LABEL_117:
  v110 = *(_QWORD*)(v174 + 24);
  if (v110 == 0 || (int)CombatLegionGroup_e58ae0_alt1(
                       *(_QWORD*)(v174 + 24), (__int64)"Main", 4u) < 1) {
    goto LABEL_164;
  }
  v111 = 0;
  while (2) {
    v114 = *(unsigned __int8***)(v110 + 16);
    v113 = *(unsigned __int8***)(v110 + 24);
    if (v114 == v113) {
      goto LABEL_121;
    }
    while (2) {
      v115 = *v114;
      v116 = (__int64)v114[1];
      if (v116 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v116 + 8), 1u,
                                  memory_order_relaxed);
      }
      v117 = *v115;
      v118 = *((_QWORD*)v115 + 1);
      if ((v117 & 1) == 0) {
        v118 = v117 >> 1;
      }
      if (v118 != 4) {
        v121 = false;
        if (v116 == 0) {
          goto LABEL_138;
        }
        goto LABEL_136;
      }
      if ((v117 & 1) != 0) {
        v119 = *((int**)v115 + 2);
      }
      else {
        v119 = (int*)(v115 + 1);
      }
      v120 = *v119;
      v121 = v120 == 1852399949;
      if (v120 == 1852399949) {
        v1 = (__int64)v115;
      }
      if (v116 != 0) {
      LABEL_136:
        if (atomic_fetch_add((atomic_ullong* volatile)(v116 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v116),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    LABEL_138:
      if (!v121) {
        v114 += 2;
        if (v114 == v113) {
          goto LABEL_121;
        }
        continue;
      }
      break;
    }
    if (v1 == 0) {
      goto LABEL_121;
    }
    v122 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 16 * v111);
    if (v122 == nullptr || v122 == *(_QWORD**)(*(_QWORD*)(v175 + 8) + 176LL)) {
      goto LABEL_121;
    }
    v123 = v122[17];
    v124 = v122[18];
    if (v124 == 0) {
      v112 = *(_QWORD*)(v123 + 40);
      if (*(_DWORD*)(v112 + 20) != 0) {
        goto LABEL_121;
      }
      v129 = *(_DWORD*)(v112 + 24);
      if (v129 != 3 && v129 != 0) {
        goto LABEL_121;
      }
      goto LABEL_160;
    }
    v125 = (atomic_ullong*)(v124 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v124 + 8), 1u,
                              memory_order_relaxed);
    v126 = *(_QWORD*)(v123 + 40);
    if (*(_DWORD*)(v126 + 20) != 0) {
      if (atomic_fetch_add(v125, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v124),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_121;
    }
    v127 = *(_DWORD*)(v126 + 24);
    if (atomic_fetch_add(v125, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v124),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (v127 == 0 || v127 == 3) {
    LABEL_160:
      v131 = v122[17];
      GameRoutine_e9f200_alt2(v131),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      v133 = fmaxf(v132, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v131 + 92) & (*(float*)(v131 + 88) < v133)) != 0) {
        v133 = *(float*)(v131 + 88);
      }
      if ((float)((float)(PSEUDO_UNFUSED(
                      (float)(*(float*)(v122[15] + 20LL) - v79) *
                      (float)(*(float*)(v122[15] + 20LL) - v79))) +
                  (float)((float)(*(float*)(v122[15] + 16LL) - v78) *
                          (float)(*(float*)(v122[15] + 16LL) - v78))) >=
          (float)((float)(v85 + v133) * (float)(v85 + v133))) {
        goto LABEL_121;
      }
      goto LABEL_210;
    }
  LABEL_121:
    if (++v111 <
        (int)CombatLegionGroup_e58ae0_alt1(v110, (__int64)"Main", 4u)) {
      continue;
    }
    break;
  }
LABEL_164:
  v134 = *(_QWORD*)(v174 + 32);
  if (v134 == 0 || (int)CombatLegionGroup_e58ae0_alt1(
                       *(_QWORD*)(v174 + 32), (__int64)"Main", 4u) < 1) {
    goto LABEL_211;
  }
  v135 = 0;
  while (2) {
    v138 = *(unsigned __int8***)(v134 + 16);
    v137 = *(unsigned __int8***)(v134 + 24);
    if (v138 == v137) {
      goto LABEL_168;
    }
    while (2) {
      v139 = *v138;
      v140 = (__int64)v138[1];
      if (v140 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8), 1u,
                                  memory_order_relaxed);
      }
      v141 = *v139;
      v142 = *((_QWORD*)v139 + 1);
      if ((v141 & 1) == 0) {
        v142 = v141 >> 1;
      }
      if (v142 != 4) {
        v145 = false;
        if (v140 == 0) {
          goto LABEL_185;
        }
        goto LABEL_183;
      }
      if ((v141 & 1) != 0) {
        v143 = *((int**)v139 + 2);
      }
      else {
        v143 = (int*)(v139 + 1);
      }
      v144 = *v143;
      v145 = v144 == 1852399949;
      if (v144 == 1852399949) {
        v1 = (__int64)v139;
      }
      if (v140 != 0) {
      LABEL_183:
        if (atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v140),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    LABEL_185:
      if (!v145) {
        v138 += 2;
        if (v138 == v137) {
          goto LABEL_168;
        }
        continue;
      }
      break;
    }
    if (v1 == 0) {
      goto LABEL_168;
    }
    v146 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 16 * v135);
    if (v146 == nullptr || v146 == *(_QWORD**)(*(_QWORD*)(v175 + 8) + 176LL)) {
      goto LABEL_168;
    }
    v147 = v146[17];
    v148 = v146[18];
    if (v148 == 0) {
      v136 = *(_QWORD*)(v147 + 40);
      if (*(_DWORD*)(v136 + 20) != 0) {
        goto LABEL_168;
      }
      v153 = *(_DWORD*)(v136 + 24);
      if (v153 != 3 && v153 != 0) {
        goto LABEL_168;
      }
      goto LABEL_207;
    }
    v149 = (atomic_ullong*)(v148 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v148 + 8), 1u,
                              memory_order_relaxed);
    v150 = *(_QWORD*)(v147 + 40);
    if (*(_DWORD*)(v150 + 20) != 0) {
      if (atomic_fetch_add(v149, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v148),
            v132 =
                COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
            v156 =
                COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_168;
    }
    v151 = *(_DWORD*)(v150 + 24);
    if (atomic_fetch_add(v149, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v148),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (v151 == 0 || v151 == 3) {
    LABEL_207:
      v155 = v146[17];
      GameRoutine_e9f200_alt2(v155),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
      v157 = fmaxf(v156, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v155 + 92) & (*(float*)(v155 + 88) < v157)) != 0) {
        v157 = *(float*)(v155 + 88);
      }
      if ((float)((float)(PSEUDO_UNFUSED(
                      (float)(*(float*)(v146[15] + 20LL) - v79) *
                      (float)(*(float*)(v146[15] + 20LL) - v79))) +
                  (float)((float)(*(float*)(v146[15] + 16LL) - v78) *
                          (float)(*(float*)(v146[15] + 16LL) - v78))) >=
          (float)((float)(v85 + v157) * (float)(v85 + v157))) {
        goto LABEL_168;
      }
      goto LABEL_210;
    }
  LABEL_168:
    if (++v135 <
        (int)CombatLegionGroup_e58ae0_alt1(v134, (__int64)"Main", 4u)) {
      continue;
    }
    break;
  }
LABEL_211:
  v8 = 0;
  LOBYTE(v178) = 0;
LABEL_212:
  v3 = v175;
LABEL_213:
  v179 = v8;
  if (v180_.v180 != nullptr) {
    v180_.v181 = v180_.v180;
    v158 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v158 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v158, (__int64)v180_.v180),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v8 != 0) {
    v159 = *(_QWORD*)(v3 + 8);
    v160 = *(unsigned __int8*)(v159 + 28);
    v161 = *(_DWORD*)(v159 + 24);
    v163 = v161 == 3 || v161 == 8;
    if (v160 != 1 || !v163) {
      v165 = 3;
      v176_.v176 = 0xC0000000BLL;
      v176_.v177 = 8;
    }
    else {
      v165 = 1;
      LODWORD(v176_.v176) = 8;
    }
    v180_.v180 = (unsigned int*)&v176_.v176;
    v180_.v181 = (unsigned int*)v165;
    v166 = LegionStateBattleFighter_e3ae20(v3, &v180_.v180, (float*)&v178),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(float, "s0", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(float, "s0", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
    v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
    v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w"));
    v167 = *(_QWORD**)(v3 + 8);
    v168 = v166;
    if ((*(_BYTE*)(v167[22] + 228LL) & 1) == 0) {
      v169 = (_QWORD*)v167[17];
      v170 = (_QWORD*)v167[18];
      if (v169 != v170) {
        do {
          v171 = (_BYTE*)*v169;
          if (*(_BYTE*)(*v169 + 8LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)v171 + 32LL))(*v169),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v156 = COERCE_AS(__typeof__(v156),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v30 = COERCE_AS(__typeof__(v30),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v81 = COERCE_AS(__typeof__(v81),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v171[8] = 0;
          }
          v169 += 2;
        } while (v169 != v170);
        v169 = (_QWORD*)v167[17];
        v170 = (_QWORD*)v167[18];
      }
      for (; v170 != v169; v170 -= 2) {
        v172 = *(v170 - 1);
        if (v172 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v172 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v172 + 16LL))(v172),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v172),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
      v167[18] = v169;
    }
    v173 = (unsigned int)v168;
    if (HIDWORD(v168) == 0) {
      v173 = 3;
    }
    if (*(_BYTE*)(v3 + 32) == 1) {
      *(_WORD*)(v3 + 28) = 0;
      *(_DWORD*)(v3 + 24) = v173;
    }
    else {
      *(_QWORD*)(v3 + 24) = v173;
      *(_BYTE*)(v3 + 32) = 1;
    }
  }
  return v8;
}

unsigned __int64 LegionStateBattleFighter_e3ae20(__int64 a1, unsigned int** a2,
                                                 float* a3)
{
  unsigned int v3;
  unsigned int* v4;
  __int64 v5;
  int* v6;
  int v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  unsigned __int8 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  struct {
    float v40;
    float v41;
  } v40_;
  float v42[2];
  __int64 v43;

  v4 = a2[1];
  if (v4 != nullptr) {
    v30 = 0;
    v5 = 4LL * (_QWORD)v4;
    v6 = (int*)*a2;
    LOBYTE(v9) = 0;
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 120LL);
    v31 = *(float*)(v10 + 20);
    v32 = *(float*)(v10 + 16);
    v38 = -*(float*)GameData_212c190;
    v39 = *((float*)GameData_212c190 + 1);
    v36 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v37 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v35 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v11 = -*(float*)GameData_212c188;
    v12 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v13 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v14 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v33 = 0x0.0p+0f;
    v34 = *((float*)GameData_212c188 + 1);
    while (1) {
      LegionStateBattleFighter_e3b770((void*)((__int64)&v40_.v40), a1, *v6);
      v15 = *(_QWORD*)(a1 + 8);
      v43 = 0x3F80000000000000LL;
      v16 = *(_QWORD*)(*(_QWORD*)(v15 + 176) + 128LL);
      v17 = *(float*)(v16 + 20);
      v42[0] = *(float*)(v16 + 16);
      v42[1] = v17;
      v18 = game_combat_e401e0((float*)&v43, v42);
      v19 = v18 + (float)(roundf(v18 * 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
      if (v19 > 0x1.921fb60000000p+0f) {
        break;
      }
      v21 = 0x1.0000000000000p+0f;
      if (v19 < -0x1.921fb60000000p+0f) {
        v20 = -0x1.921fb60000000p+1f;
        goto LABEL_8;
      }
    LABEL_9:
      v22 = v19 * v19;
      v23 = *(_QWORD*)(a1 + 8);
      LOWORD(v43) = 256;
      v24 =
          v19 *
          (float)((float)((float)(v35 +
                                  (float)((float)(v37 +
                                                  (float)((float)(v36 +
                                                                  (float)((float)(v39 +
                                                                                  (float)(v38 *
                                                                                          (float)(v19 *
                                                                                                  v19))) *
                                                                          (float)(v19 *
                                                                                  v19))) *
                                                          (float)(v19 * v19))) *
                                          (float)(v19 * v19))) *
                          (float)(v19 * v19)) +
                  0x1.0000000000000p+0f);
      v25 =
          v21 *
          (float)((float)((float)(v14 +
                                  (float)((float)(v12 +
                                                  (float)((float)(v13 +
                                                                  (float)((float)(v34 +
                                                                                  (float)(v11 *
                                                                                          v22)) *
                                                                          v22)) *
                                                          v22)) *
                                          v22)) *
                          v22) +
                  0x1.0000000000000p+0f);
      v26 = (float)(PSEUDO_UNFUSED(v40_.v41 * v24)) + (float)(v40_.v40 * v25);
      v27 = (float)(PSEUDO_UNFUSED(v40_.v41 * v25)) - (float)(v40_.v40 * v24);
      v40_.v40 = v26;
      v40_.v41 = v27;
      if ((StateMachines_e32f40(v23, &v40_.v40, (__int64)&v43) & 1) == 0) {
        v28 = sqrtf(
            (float)(PSEUDO_UNFUSED((float)((float)(v31 + v40_.v41) - a3[1]) *
                                   (float)((float)(v31 + v40_.v41) - a3[1]))) +
            (float)((float)((float)(v32 + v40_.v40) - *a3) *
                    (float)((float)(v32 + v40_.v40) - *a3)));
        if (v33 <= v28) {
          v9 = *v6;
          v33 = v28;
          v30 = 1;
          v3 = (unsigned int)*v6 >> 8;
        }
      }
      ++v6;
      v5 -= 4;
      if (v5 == 0) {
        return (v3 << 8) | (unsigned __int64)(unsigned __int8)v9 |
               ((unsigned __int64)v30 << 32);
      }
    }
    v20 = 0x1.921fb60000000p+1f;
  LABEL_8:
    v19 = v20 - v19;
    v21 = -0x1.0000000000000p+0f;
    goto LABEL_9;
  }
  return 0;
}

__int64 LegionStateBattleFighter_e3b0b0(__int64 a1, unsigned int a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  char v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  int v41;
  __n128 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __n128 v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  _DWORD v66[2];
  __int64 v67;

  v4 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 176LL);
  v5 = v4[7];
  v6 = *(_QWORD*)(v5 + 392);
  v7 = *(_QWORD*)(v5 + 400);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = *(_DWORD*)(v6 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v8 = *(_DWORD*)(v6 + 11784);
  }
  if (a2 - 9 < 2) {
    if (v8 >= 2) {
      return 0;
    }
    v14 = a2 == 9 ? 3416160455LL : 3421701581LL;
    if ((GameRoutine_e412a0(
             *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 104LL), v14,
             0) &
         1) == 0) {
      return 0;
    }
    goto LABEL_28;
  }
  if (a2 != 2) {
    if (a2 == 4) {
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 72LL);
      if (v9 != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 112) + 176LL) + 24LL);
        if (v10 == 0) {
          return 0;
        }
        v11 = *(unsigned __int8*)(v10 + 72);
        v12 = (1LL << *(_BYTE*)(v10 + 73)) & 0x7DC;
        if (v11 <= 7 && v12 != 0) {
          return 0;
        }
      }
    }
  LABEL_28:
    LegionStateBattleFighter_e3b770_alt1((void*)(&v65), a1, a2);
    v22 = v65;
    if ((float)((float)(*((float*)&v65 + 1) * *((float*)&v65 + 1)) +
                (float)(*(float*)&v65 * *(float*)&v65)) <= 0.0) {
      return 1;
    }
    v23 = *(_QWORD*)(a1 + 8);
    v67 = 0x3F80000000000000LL;
    v24 = *(_QWORD*)(*(_QWORD*)(v23 + 176) + 128LL);
    v25 = *(_DWORD*)(v24 + 20);
    v66[0] = *(_DWORD*)(v24 + 16);
    v66[1] = v25;
    v26 = game_combat_e401e0_alt1(&v67, v66);
    v27 = v26 +
          (float)(roundf(v26 * 0x1.45f3060000000p-3) * -0x1.921fb60000000p+2);
    if (v27 <= 0x1.921fb60000000p+0) {
      v29 = 1.0;
      if (v27 >= -0x1.921fb60000000p+0) {
        goto LABEL_34;
      }
      v28 = -0x1.921fb60000000p+1;
    }
    else {
      v28 = 0x1.921fb60000000p+1;
    }
    v27 = v28 - v27;
    v29 = -1.0;
  LABEL_34:
    v30 = v27 * v27;
    v31 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v32 = -(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                             (_QWORD)GameData_212c190) -
                   (float)((float)(*((float*)GameData_212c190 + 1) -
                                   (float)(*(float*)GameData_212c190 *
                                           (float)(v27 * v27))) *
                           (float)(v27 * v27)));
    v33 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v34 = v4[14];
    LOWORD(v67) = 0;
    v35 =
        v27 *
        (float)((float)((float)-(float)(v33 -
                                        (float)((float)(v31 +
                                                        (float)(v32 *
                                                                (float)(v27 *
                                                                        v27))) *
                                                (float)(v27 * v27))) *
                        (float)(v27 * v27)) +
                1.0);
    v36 =
        v29 *
        (float)((float)((float)-(
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
                                                                                              v30)) *
                                                                              v30)) *
                                                           v30)) *
                                           v30)) *
                        v30) +
                1.0);
    *(float*)&v65 =
        (float)(*((float*)&v22 + 1) * v35) + (float)(*(float*)&v22 * v36);
    *((float*)&v65 + 1) =
        (float)(*((float*)&v22 + 1) * v36) - (float)(*(float*)&v22 * v35);
    v37 = StateMachines_e32f40_alt1(v34, &v65, &v67);
    result = 0;
    if ((v37 & 1) != 0) {
      return result;
    }
    return 1;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(v4[14] + 176LL) + 24LL);
  if (v15 == 0) {
    return 0;
  }
  v16 = *(unsigned __int8*)(v15 + 72);
  v17 = (1LL << *(_BYTE*)(v15 + 73)) & 0x7DC;
  if (v16 <= 7 && v17 != 0) {
    return 0;
  }
  v19 = v4[9];
  if (v19 != 0) {
    v20 = *(_QWORD*)(v19 + 120);
    v21 = fmaxf(
        sqrtf((float)((float)(*(float*)(v20 + 20) - *(float*)(v4[15] + 20LL)) *
                      (float)(*(float*)(v20 + 20) - *(float*)(v4[15] + 20LL))) +
              (float)((float)(*(float*)(v20 + 16) - *(float*)(v4[15] + 16LL)) *
                      (float)(*(float*)(v20 + 16) - *(float*)(v4[15] + 16LL)))),
        2.0);
  }
  else {
    v21 = 2.0;
  }
  v39 = *(_QWORD*)(a1 + 8);
  v67 = 0x3F80000000000000LL;
  v40 = *(_QWORD*)(*(_QWORD*)(v39 + 176) + 128LL);
  v41 = *(_DWORD*)(v40 + 20);
  v66[0] = *(_DWORD*)(v40 + 16);
  v66[1] = v41;
  LANES128(v42).n128_f32[0] = game_combat_e401e0_alt1(&v67, v66);
  LANES128(v42).n128_f32[0] =
      LANES128(v42).n128_f32[0] +
      (float)(roundf(LANES128(v42).n128_f32[0] * 0x1.45f3060000000p-3) *
              -0x1.921fb60000000p+2);
  if (LANES128(v42).n128_f32[0] <= 0x1.921fb60000000p+0) {
    v44 = 1.0;
    if (LANES128(v42).n128_f32[0] >= -0x1.921fb60000000p+0) {
      goto LABEL_42;
    }
    v43 = -0x1.921fb60000000p+1;
  }
  else {
    v43 = 0x1.921fb60000000p+1;
  }
  LANES128(v42).n128_f32[0] = v43 - LANES128(v42).n128_f32[0];
  v44 = -1.0;
LABEL_42:
  v45 = LANES128(v42).n128_f32[0] * LANES128(v42).n128_f32[0];
  v46 =
      LANES128(v42).n128_f32[0] *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                            (float)(LANES128(
                                                                                                        v42)
                                                                                                        .n128_f32
                                                                                                            [0] *
                                                                                                    LANES128(
                                                                                                        v42)
                                                                                                        .n128_f32
                                                                                                            [0]))) *
                                                                            (float)(LANES128(
                                                                                        v42)
                                                                                        .n128_f32
                                                                                            [0] *
                                                                                    LANES128(
                                                                                        v42)
                                                                                        .n128_f32
                                                                                            [0]))) *
                                                         (float)(LANES128(v42)
                                                                     .n128_f32
                                                                         [0] *
                                                                 LANES128(v42)
                                                                     .n128_f32
                                                                         [0]))) *
                                         (float)(LANES128(v42).n128_f32[0] *
                                                 LANES128(v42).n128_f32[0]))) *
                      (float)(LANES128(v42).n128_f32[0] *
                              LANES128(v42).n128_f32[0])) +
              1.0);
  v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v48 = -(
      float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) -
             (float)((float)(*((float*)GameData_212c188 + 1) -
                             (float)(*(float*)GameData_212c188 * v45)) *
                     v45));
  v49 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  LOWORD(v67) = 1;
  v50 = v44 *
        (float)((float)((float)-(
                            float)(v49 -
                                   (float)((float)(v47 + (float)(v48 * v45)) *
                                           v45)) *
                        v45) +
                1.0);
  *(float*)&v65 = (float)(v21 * v46) + (float)(v50 * 0.0);
  *((float*)&v65 + 1) = (float)(v21 * v50) + (float)(v46 * -0.0);
  LANES128(v42).n128_f32[0] =
      (float)(*((float*)&v65 + 1) * *((float*)&v65 + 1)) +
      (float)(*(float*)&v65 * *(float*)&v65);
  if (LANES128(v42).n128_f32[0] <= 0.0) {
    goto LABEL_49;
  }
  v51 = *(_QWORD*)(v4[14] + 176LL);
  v52 = *(_QWORD*)(v51 + 136);
  v53 = *(_QWORD*)(v51 + 144);
  v54 = *(_QWORD*)(*GameData_212f2e0 + 32);
  if (v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
    v55 = JostleManager_ea0220(v54, v52, &v65, &v67, 0x1.47ae140000000p-7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
      v42 = std___1___shared_weak_count___release_weak(v53);
    }
    if ((v55 & 1) != 0) {
      return 0;
    }
  LABEL_49:
    v56 = v4[7];
    v57 = *(_QWORD*)(v56 + 392);
    v58 = *(_QWORD*)(v56 + 400);
    if (v58 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                memory_order_relaxed);
      v59 = *(_DWORD*)(v57 + 11624);
      if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v58 + 16LL))(
            v58, *(long double*)&v42);
        v42 = std___1___shared_weak_count___release_weak(v58);
      }
    }
    else {
      v59 = *(_DWORD*)(v57 + 11624);
    }
    if (v59 >= 2) {
      v60 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 128) + 72LL);
      if (v60 != 0) {
        v61 = ((__n128 (*)(__int64, long double)) *
               (_QWORD*)(*(_QWORD*)v60 + 40LL))(v60, *(long double*)&v42);
        v62 = v4[17];
        v63 = (float)((float)(LANES128(v61).n128_f32[2] -
                              *(float*)(v4[15] + 20LL)) *
                      (float)(LANES128(v61).n128_f32[2] -
                              *(float*)(v4[15] + 20LL))) +
              (float)((float)(LANES128(v61).n128_f32[0] -
                              *(float*)(v4[15] + 16LL)) *
                      (float)(LANES128(v61).n128_f32[0] -
                              *(float*)(v4[15] + 16LL)));
        v64 = fmaxf(GameRoutine_e9f200_alt1(v62), 0x1.3333340000000p-1);
        if ((*(_BYTE*)(v62 + 92) & (*(float*)(v62 + 88) < v64)) != 0) {
          v64 = *(float*)(v62 + 88);
        }
        if (v63 < (float)((float)(v64 + 3.0) * (float)(v64 + 3.0))) {
          return 0;
        }
      }
    }
    goto LABEL_28;
  }
  if ((JostleManager_ea0220(v54, v52, &v65, &v67, 0x1.47ae140000000p-7) & 1) ==
      0) {
    goto LABEL_49;
  }
  return 0;
}

__attribute__((swiftcall)) void

LegionStateBattleFighter_e3b770(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  signed int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int32x2_t v10;

  *(_QWORD*)a3 = 0;
  if (a2 > 9) {
    if (a2 <= 11) {
      if (a2 == 10) {
        *(_DWORD*)a3 = 1065353216;
        return;
      }
      v4 = *(_QWORD*)(a1 + 8);
      v5 = 232551559;
      goto LABEL_15;
    }
    if (a2 != 12) {
      if (a2 == 13) {
        *(_DWORD*)(a3 + 4) = 1065353216;
      }
      return;
    }
    v4 = *(_QWORD*)(a1 + 8);
    v5 = 232551565;
  LABEL_15:
    game_combat_e32e50_alt1((void*)(&v10), v4, v5);
    *(int32x2_t*)a3 = v10;
    return;
  }
  switch (a2) {
  case 1:
    v4 = *(_QWORD*)(a1 + 8);
    v5 = -2109400973;
    goto LABEL_15;
  case 2:
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 56LL);
    v7 = *(_QWORD*)(v6 + 392);
    v8 = *(_QWORD*)(v6 + 400);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      v9 = *(_DWORD*)(v7 + 11624);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
    else {
      v9 = *(_DWORD*)(v7 + 11624);
    }
    if (v9 <= 1) {
      *(_QWORD*)a3 = 0x3F80000000000000LL;
    }
    break;
  case 9:
    *(_DWORD*)a3 = -1082130432;
    break;
  default:
    break;
  }
}

void LegionStateBattleFighter_Unknown3(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v12;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64* v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  int v27;
  unsigned int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  _QWORD v39[2];
  struct {
    _QWORD* v40;
    __int64 v41;
    __int64 v42;
  } v40_;
  _QWORD v43[2];
  char v44[16];

  v40_.v41 = 0;
  v40_.v42 = 0;
  v40_.v40 = nullptr;
  *(_BYTE*)(a1 + 36) = 1;
  v2 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 176LL);
  v4 = v2[8];
  v3 = v2[9];
  v5 = v2[3];
  v6 = *(_DWORD*)(v4 + 120);
  if (v5 == 0 || ((v7 = *(unsigned __int8*)(v5 + 72),
                   v8 = (1LL << *(_BYTE*)(v5 + 73)) & 0x7DC, v7 <= 7)
                      ? (v9 = v8 == 0)
                      : (v9 = true),
                  !v9)) {
    v37_.v38 = 0xA00000000LL;
    v36 = 0x1400000003LL;
    v37_.v37 = 0x1E00000004LL;
    GameRoutine_e3b8e0((__int64)&v40_.v40, (char*)&v36, (char*)v39, 3u);
    v14 = v40_.v40;
    v15 = (_QWORD*)v40_.v41;
    v37_.v37 = 0;
    v37_.v38 = 0;
    v36 = 0;
    if (v40_.v40 == (_QWORD*)v40_.v41) {
      goto LABEL_22;
    }
    do {
      if ((LegionStateBattleFighter_e3b0b0_alt1(a1, *(_DWORD*)v14) & 1) != 0) {
        GameRoutine_e3b650(&v36, v14);
      }
      ++v14;
    } while (v14 != v15);
    if (v37_.v37 == v36) {
    LABEL_22:
      v43[0] = 0x3200000003LL;
      v43[1] = 0xA00000000LL;
      GameRoutine_e3b8e0((__int64)&v36, (char*)v43, v44, 2u);
    }
    if (v40_.v40 != nullptr) {
      v40_.v41 = (__int64)v40_.v40;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v40_.v40);
    }
    v12 = 0;
    goto LABEL_28;
  }
  if ((v6 & 1) == 0) {
    if (v3 != 0 && (v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 112) + 176LL) +
                                     24LL)) != 0) {
      if (((1LL << *(_BYTE*)(v10 + 73)) & 0x7DC) == 0 ||
          *(unsigned __int8*)(v10 + 72) >= 8u) {
        v12 = 0x100000000LL;
      }
      else {
        v12 = 0;
      }
    }
    else {
      v12 = 0;
    }
    v36 = 0x1400000003LL;
    v37_.v37 = 0x1E00000004LL;
    v37_.v38 = 0x500000000LL;
    v39[0] = 0xA00000009LL;
    v39[1] = 0xA0000000ALL;
    GameRoutine_e3b8e0((__int64)&v40_.v40, (char*)&v36, (char*)&v40_.v40, 5u);
    v33 = v40_.v40;
    v34 = (_QWORD*)v40_.v41;
    v37_.v37 = 0;
    v37_.v38 = 0;
    v36 = 0;
    if (v40_.v40 == (_QWORD*)v40_.v41) {
      goto LABEL_56;
    }
    do {
      if ((LegionStateBattleFighter_e3b0b0_alt1(a1, *(_DWORD*)v33) & 1) != 0) {
        GameRoutine_e3b650(&v36, v33);
      }
      ++v33;
    } while (v33 != v34);
    if (v37_.v37 == v36) {
    LABEL_56:
      v43[0] = 0x3200000003LL;
      v43[1] = 0xA00000000LL;
      GameRoutine_e3b8e0((__int64)&v36, (char*)v43, v44, 2u);
    }
    if (v40_.v40 != nullptr) {
      v40_.v41 = (__int64)v40_.v40;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v40_.v40);
    }
  LABEL_28:
    v17 = v36;
    v18 = v37_.v37;
    v40_.v40 = (_QWORD*)v36;
    v40_.v41 = v37_.v37;
    v40_.v42 = v37_.v38;
    if (v36 != v37_.v37) {
      goto LABEL_29;
    }
  LABEL_33:
    v19 = 0;
    goto LABEL_34;
  }
  v36 = 0x3200000002LL;
  GameRoutine_e3b8e0((__int64)&v40_.v40, (char*)&v36, (char*)&v37_.v37, 1u);
  v17 = (__int64)v40_.v40;
  v18 = v40_.v41;
  v12 = 0x10000000000LL;
  if (v40_.v40 == (_QWORD*)v40_.v41) {
    goto LABEL_33;
  }
LABEL_29:
  v19 = 0;
  do {
    v20 = *(_DWORD*)(v17 + 4);
    v17 += 8;
    v19 += v20;
  } while (v17 != v18);
LABEL_34:
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v21 = game_map_MapRandom_instance__ptr[0];
  v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL));
  v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v24 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v21 + 1) = v22;
  v25 = (v24 >> 8) ^ (v23 >> 19) ^ v24 ^ v23;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21) = v23;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21 + 4) = v25;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v26 = (__int64)v40_.v40;
  if (v40_.v40 == (_QWORD*)v40_.v41) {
    v29 = 3;
  }
  else {
    v27 = 0;
    v28 = (unsigned int*)v40_.v40;
    while (1) {
      v27 += v28[1];
      if ((v25 & 0x7FFFFFFF) % v19 < v27) {
        break;
      }
      v28 += 2;
      if (v28 == (unsigned int*)v40_.v41) {
        v28 = (unsigned int*)v40_.v40;
        break;
      }
    }
    v29 = *v28;
  }
  v30 = v29 | v12;
  if (*(_BYTE*)(a1 + 32) == 1) {
    *(_DWORD*)(a1 + 24) = v30;
    *(_WORD*)(a1 + 28) = WORD2(v30);
    if (v26 == 0) {
      return;
    }
  }
  else {
    *(_QWORD*)(a1 + 24) = v30;
    *(_BYTE*)(a1 + 32) = 1;
    if (v26 == 0) {
      return;
    }
  }
  v40_.v41 = v26;
  v31 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v31 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v26);
}

__attribute__((swiftcall)) void LegionStateBattleFighter_Unknown6(PSEUDO_X8 x8_,
                                                                  __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  unsigned __int8 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  struct {
    _QWORD v28[2];
    __int64 v29;
    __int64 v30;
  } v28_;
  _QWORD v31[2];
  __int64 v32;

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 176LL);
  v4 = v3[7];
  v5 = *(_QWORD*)(v4 + 392);
  v6 = *(_QWORD*)(v4 + 400);
  if (v6 == 0) {
    v7 = *(_DWORD*)(v5 + 11624);
    v8 = v3[9];
    if (v8 != 0) {
      goto LABEL_5;
    }
  LABEL_15:
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
  LABEL_16:
    v25 = (__int64)a2;
    v24 = 6;
    v26 = (char*)&v32;
    v28_.v28[0] = 0x300000001LL;
    v28_.v28[1] = 0x500000003LL;
    v28_.v29 = 0xA00000004LL;
    v28_.v30 = 0xF00000009LL;
    v31[0] = 0xF0000000ALL;
    v31[1] = 0x3200000002LL;
    {
      GameRoutine_e3b8e0(v25, (char*)v28_.v28, v26, v24),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v7 = *(_DWORD*)(v5 + 11624);
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v6),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v8 = v3[9];
  if (v8 == 0) {
    goto LABEL_15;
  }
LABEL_5:
  v9 = *(_QWORD*)(v8 + 120);
  v10 = *(_QWORD*)(v8 + 136);
  v11 = v3[15];
  if (v7 >= 2) {
    v12 = 0x1.8000000000000p+1f;
  }
  else {
    v12 = 0x1.0000000000000p+0f;
  }
  v13 = *(float*)(v9 + 16);
  v14 = *(float*)(v9 + 20);
  GameRoutine_e9f200(*(_QWORD*)(v8 + 136)),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v16 = fmaxf(v15, 0x1.3333340000000p-1f);
  if ((*(_BYTE*)(v10 + 92) & (*(float*)(v10 + 88) < v16)) != 0) {
    v16 = *(float*)(v10 + 88);
  }
  v17 = v12 + v16;
  v18 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 136LL);
  v19 = (float)(PSEUDO_UNFUSED((float)(*(float*)(v11 + 20) - v14) *
                               (float)(*(float*)(v11 + 20) - v14))) +
        (float)((float)(*(float*)(v11 + 16) - v13) *
                (float)(*(float*)(v11 + 16) - v13));
  GameRoutine_e9f200(v18),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v20 = *(float*)(v18 + 88);
  v22 = fmaxf(v21, 0x1.3333340000000p-1f);
  v23 = *(_BYTE*)(v18 + 92);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if ((v23 & (v20 < v22)) != 0) {
    v22 = v20;
  }
  if (v19 >= (float)((float)(v17 + v22) * (float)(v17 + v22))) {
    goto LABEL_16;
  }
  v24 = 4;
  v25 = (__int64)a2;
  v28_.v28[0] = 0x1E00000001LL;
  v28_.v28[1] = 0x500000003LL;
  v28_.v29 = 0x500000004LL;
  v28_.v30 = 0x2800000002LL;
  v26 = (char*)v31;
  {
    GameRoutine_e3b8e0(v25, (char*)v28_.v28, v26, v24),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    return;
  }
}

__int64 LegionStateBattleFighter_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  if (*(_BYTE*)(result + 32) == 1) {
    *(_BYTE*)(result + 32) = 0;
  }
  *(_BYTE*)(result + 36) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

#pragma GCC visibility pop
