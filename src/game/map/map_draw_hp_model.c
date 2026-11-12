#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapDrawHpModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* MapDrawHpModel_Destructor_alt1(_QWORD* result) __asm__(
    "MapDrawHpModel_Destructor");
__int64 MapDrawHpModel_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapDrawHpModel_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapDrawHpModel_Destructor(_QWORD* a1);
void MapDrawHpModel_DeletingDestructor(_QWORD* a1);
_QWORD* Material_addbe0(_QWORD* result, __int64, __int64, char);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, float32x2_t*);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64 Components_a870e0(__int64*, char);
__int64 GameHr_1021e80(__int64, unsigned __int8*, _DWORD*);
__int64 GameHr_f7fd20(__int64, __int64, int*);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_GetParam(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
bool MapUtil_7536a0(_BOOL8 result);
extern _DWORD* GameData_212d168;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff7ae0[])();
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212f878;
extern __int64 GameData_212c638;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
float powf(float, float);
int __cxa_guard_acquire(__int64);
long double GameRoutine_f0dfe0(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_740050();
void __attribute__((noreturn)) GameRoutine_f816d0();
void __cxa_guard_release(__int64);
void MapDrawHpModel_Unknown2(_BYTE* a1);

void MapDrawHpModel_Unknown2(_BYTE* a1)
{
  _BYTE* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _BYTE** v31;
  _BYTE** i;
  _BYTE* v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_ullong* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 add;
  _QWORD* v63;
  _QWORD* v64;
  _BYTE* v65;
  __int64 v66;
  int v67;
  _QWORD* v68;
  _BYTE* v69;
  __int64 v70;
  int v71;
  _BYTE* v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64* j;
  __int64 v81;
  __int64* v82;
  float v83;
  float v84;
  __int64 v85;
  float v86;
  __int64 v87;
  float v88;
  float v89;
  float v90;
  float v91;
  __int64* v92;
  __int64 v93;
  float v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  float32x4_t v98;
  float32x4_t v99;
  int v100;
  int8x16_t v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  float32x4_t* v108;
  int8x16_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  int8x16_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float32x4_t v128;
  float v129;
  float32x2_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float v137;
  float32x4_t v138;
  int16x4_t v139;
  unsigned int v140;
  float32x4_t v141;
  float32x4_t* v142;
  float32x4_t v143;
  int8x16_t v144;
  float32x4_t v145;
  float32x4_t v146;
  int8x16_t v147;
  float32x4_t v148;
  __int64 v149;
  int v150;
  __int64 v151;
  float v152;
  __int64 v153;
  bool v154;
  float v155;
  bool v156;
  __int64 v157;
  float v158;
  __int64* v159;
  int32x4_t v160;
  float v161;
  float v162;
  __int64 v163;
  int v164;
  float v165;
  __int64 v166;
  __int64 v167;
  char v168;
  float v169;
  long double v170;
  long double v171;
  __int64 v172;
  _QWORD* v173;
  _QWORD* v174;
  float v175;
  __int64 v176;
  long double v177;
  float v178;
  __int64 v179;
  char v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  __int64* v194;
  float v195;
  float v196;
  float v197;
  float v198;
  int v199;
  __int64* v200;
  __int64 v201;
  long double v202;
  unsigned __int64 v203;
  int32x4_t v204;
  _QWORD* v205;
  float v206;
  long double v207;
  int8x16_t v208;
  char* v209;
  float32x4_t v210;
  float v211;
  long double v212;
  float32x4_t v213;
  float32x4_t v214;
  float32x4_t v215;
  _QWORD v216[4];

  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = a1;
  if (a1[8] != 1) {
    goto LABEL_133;
  }
  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_132;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) < 3u ||
      *(_BYTE*)(*GameData_212cfd0[0] + 8) == 0 ||
      (v2 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) == nullptr ||
      (v3 = v2, v2[49] == 0) || (*((_BYTE*)v2 + 417) & 0x1C) != 0 ||
      (*(float (**)(__int64*))(v2[19] + 16))(v2 + 19) <= 0x0.0p+0f) {
    v3 = nullptr;
  }
  LODWORD(v216[0]) = 15;
  v4 = game_UnitPool_GetFirst((int*)v216),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 == 0) {
    v24 = 0;
    v10 = nullptr;
    v9 = 0;
    v11 = nullptr;
    if (v3 != nullptr) {
      goto LABEL_51;
    }
    goto LABEL_64;
  }
  v6 = *(_QWORD*)(v4 + 432);
  v7 = v4;
  if (v6 == 0) {
    v6 = *(_QWORD*)(v4 + 440);
    if (v6 != 0) {
      v8 = *(unsigned __int8*)(v6 + 16);
      if (v8 <= 8) {
        v184 = 24LL * *(unsigned __int8*)(v6 + 16) + 556024;
        while (1) {
          if (v8 <= 2) {
            v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v184);
            if (v6 != 0) {
              break;
            }
          }
          ++v8;
          v184 += 24;
          if (v8 == 9) {
            goto LABEL_14;
          }
        }
      }
      else {
      LABEL_14:
        v6 = 0;
      }
    }
  }
  v9 = 0;
  v10 = nullptr;
  v11 = nullptr;
  while (1) {
  LABEL_17:
    v12 = v6;
    if (v3 == (__int64*)v7) {
      goto LABEL_20;
    }
    if ((unsigned __int64)v10 < v9) {
      *(_QWORD*)v10 = v7;
      v10 += 8;
    LABEL_20:
      if (v6 == 0) {
        break;
      }
      goto LABEL_37;
    }
    v13 = v10 - v11;
    v14 = (v10 - v11) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      goto LABEL_231;
    }
    if ((__int64)(v9 - (_QWORD)v11) >> 2 > v15) {
      v15 = (__int64)(v9 - (_QWORD)v11) >> 2;
    }
    v16 = v9 - (unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL
              ? 0x1FFFFFFFFFFFFFFFLL
              : v15;
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        goto LABEL_230;
      }
      v17 = fw_memory_HeapManager_Allocate(*v5, 8 * v16, 16, 0),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v17 = 0;
    }
    v9 = v17 + 8 * v16;
    v18 = v17 + v13 - 8 * v14;
    *(_QWORD*)(v17 + v13) = v7;
    v19 = v17 + v13 + 8;
    memcpy(v18, (__int64)v11, v13),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v11 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v20, (__int64)v11),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v11 = (char*)v18;
    v10 = (char*)v19;
    if (v12 == 0) {
      break;
    }
  LABEL_37:
    v6 = *(_QWORD*)(v12 + 432);
    v7 = v12;
    if (v6 == 0) {
      v21 = *(_QWORD*)(v12 + 440);
      v7 = v12;
      if (v21 != 0) {
        v22 = *(unsigned __int8*)(v21 + 16);
        v6 = 0;
        v7 = v12;
        if (v22 <= 8) {
          v23 = 24LL * (unsigned int)v22 + 556024;
          while (1) {
            if (v22 <= 2) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v23);
              if (v6 != 0) {
                break;
              }
            }
            ++v22;
            v23 += 24;
            if (v22 == 9) {
              v6 = 0;
              v7 = v12;
              goto LABEL_17;
            }
          }
          v7 = v12;
        }
      }
    }
  }
  if (v3 == nullptr) {
    goto LABEL_64;
  }
  if ((unsigned __int64)v10 < v9) {
    *(_QWORD*)v10 = v3;
    v10 += 8;
    goto LABEL_64;
  }
  v24 = (__int64)v11;
LABEL_51:
  v25 = &v10[-v24];
  v26 = (__int64)&v10[-v24] >> 3;
  v27 = v26 + 1;
  if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
  LABEL_231:
    GameRoutine_740050(),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((__int64)(v9 - v24) >> 2 > v27) {
    v27 = (__int64)(v9 - v24) >> 2;
  }
  if (v9 - v24 >= 0x7FFFFFFFFFFFFFF8LL) {
    v27 = 0x1FFFFFFFFFFFFFFFLL;
  }
  if (v27 != 0) {
    if (v27 >> 61 != 0) {
    LABEL_230:
      GameRoutine_60a210(),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v28 = fw_memory_HeapManager_Allocate(*v5, 8 * v27, 16, 0),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v28 = 0;
  }
  v29 = (unsigned __int64)&v10[-v24];
  v11 = &v25[v28 + -8 * v26];
  *(_QWORD*)&v25[v28] = v3;
  v10 = &v25[v28 + 8];
  memcpy((__int64)v11, v24, v29),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v24 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v30, v24),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_64:
  v31 = *((_BYTE***)v1 + 2);
  for (i = *((_BYTE***)v1 + 3); v31 != i; *v33 = 0) {
    v33 = *v31;
    v31 += 2;
  }
  v201 = (__int64)v11;
  if (v11 != v10) {
    v205 = v1;
    v209 = v10;
    do {
      v34 = *((_QWORD**)v1 + 2);
      v35 = *((_QWORD**)v1 + 3);
      if (v34 != v35) {
        v36 = *(_QWORD*)v11;
        do {
          v37 = (_BYTE*)*v34;
          v38 = v34[1];
          if (v38 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                      memory_order_relaxed);
            v39 = *((_QWORD*)v37 + 1);
            if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v38),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            if (v39 == v36) {
              goto LABEL_80;
            }
          }
          else if (*((_QWORD*)v37 + 1) == v36) {
            goto LABEL_80;
          }
          v34 += 2;
        } while (v34 != v35);
        v34 = v35;
      LABEL_80:
        v35 = *((_QWORD**)v1 + 3);
        v10 = v209;
      }
      if (v34 == v35) {
        v40 = fw_memory_HeapManager_Allocate(*v5, 64, 16, 0),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v40 + 8) = 0;
        v41 = (atomic_ullong*)(v40 + 8);
        *(_QWORD*)(v40 + 16) = 0;
        v42 = v40;
        *(_BYTE*)(v40 + 24) = 1;
        v43 = v40 + 24;
        *(_QWORD*)(v40 + 32) = 0;
        *(_QWORD*)(v40 + 40) = 0;
        *(_QWORD*)v40 = GameData_1ff7ae0;
        *(_QWORD*)(v40 + 48) = 0;
        *(_QWORD*)(v40 + 56) = 0;
        *(_QWORD*)(v40 + 32) = *(_QWORD*)v11;
        v44 = Components_a870e0(
            *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                               32LL) -
                                    8LL) +
                         48LL),
            0),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v42 + 40) = v44;
        strcpy((char*)(v44 + 16), "HpModel");
        *(_QWORD*)(v44 + 272) = 7;
        v45 = (__int64*)GameData_212d020[0];
        GameRoutine_a8c380(*(_QWORD*)(v42 + 40),
                           *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 224LL)),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        v46 = *v45;
        v47 = *(_QWORD*)(v42 + 40);
        LODWORD(v216[0]) = 0;
        v48 = GameHr_f7fd20(v47, *(_QWORD*)(v46 + 200) + 24LL, (int*)v216),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        v49 = *((__int64**)v1 + 3);
        v50 = *((_QWORD*)v1 + 4);
        *(_QWORD*)(v42 + 48) = v48;
        if ((unsigned __int64)v49 >= v50) {
          v52 = *((_QWORD*)v1 + 2);
          v53 = (unsigned __int64)v49 - v52;
          v54 = ((__int64)v49 - v52) >> 4;
          v55 = v54 + 1;
          if ((unsigned __int64)(v54 + 1) >> 60 != 0) {
            GameRoutine_f816d0(),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v56 = v50 - v52;
          if (v56 >> 3 > v55) {
            v55 = v56 >> 3;
          }
          if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF0LL) {
            v57 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v57 = v55;
          }
          if (v57 >> 60 != 0) {
            goto LABEL_230;
          }
          v58 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v57, 16, 0),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
          v59 = (__int64*)(v58 + v53);
          v203 = v58 + 16 * v57;
          *v59 = v43;
          v59[1] = v42;
          v60 = v58 + v53 - 16 * v54;
          v51 = v58 + v53 + 16;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
          memcpy(v60, v52, v53),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v205[2] = v60;
          v205[3] = v51;
          v205[4] = v203;
          if (v52 != 0) {
            v61 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v52),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        else {
          *v49 = v43;
          v49[1] = v42;
          v51 = (__int64)(v49 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
        }
        v10 = v209;
        v205[3] = v51;
        v1 = v205;
        add = atomic_fetch_add(v41, 0xFFFFFFFFFFFFFFFFLL);
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (add == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v42),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
      else {
        *(_BYTE*)*v34 = 1;
      }
      v11 += 8;
    } while (v11 != v10);
  }
  v64 = *((_QWORD**)v1 + 2);
  v63 = *((_QWORD**)v1 + 3);
  if (v64 == v63) {
  LABEL_105:
    if (v64 == v63) {
      goto LABEL_121;
    }
    v68 = v64 + 2;
    if (v64 + 2 == v63) {
      goto LABEL_121;
    }
    while (1) {
      v69 = (_BYTE*)*v68;
      v70 = v68[1];
      if (v70 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                  memory_order_relaxed);
        v71 = (unsigned __int8)*v69;
        if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v71 != 0) {
            goto LABEL_117;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v70),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (v71 != 0) {
          LABEL_117:
            v72 = (_BYTE*)*v68;
            v73 = v68[1];
            *v68 = 0;
            v68[1] = 0;
            v74 = v64[1];
            *v64 = v72;
            v64[1] = v73;
            if (v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v74),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v64 += 2;
          }
        }
      }
      else if (*v69 != 0) {
        goto LABEL_117;
      }
      v68 += 2;
      if (v68 == v63) {
        goto LABEL_121;
      }
    }
  }
  do {
    v65 = (_BYTE*)*v64;
    v66 = v64[1];
    if (v66 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 8), 1u,
                                memory_order_relaxed);
      v67 = (unsigned __int8)*v65;
      if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v66),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if (v67 == 0) {
        goto LABEL_105;
      }
    }
    else if (*v65 == 0) {
      goto LABEL_105;
    }
    v64 += 2;
  } while (v64 != v63);
  v64 = v63;
LABEL_121:
  v75 = *((_QWORD**)v1 + 3);
  v76 = fw_memory_g_heap_manager_ptr;
  if (v64 != v75) {
    do {
      v77 = *(v75 - 1);
      if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v77),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v75 -= 2;
    } while (v75 != v64);
    *((_QWORD*)v1 + 3) = v64;
  }
  if (v201 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)v76 + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v76 + v78, v201),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_132:
  v1[8] = 0;
LABEL_133:
  if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v1 + 48LL))(v1) & 1) != 0) {
    v79 = *((__int64**)v1 + 3);
  }
  else {
    v79 = *((__int64**)v1 + 2);
    for (j = *((__int64**)v1 + 3); j != v79; j -= 2) {
      v81 = *(j - 1);
      if (v81 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v81),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    *((_QWORD*)v1 + 3) = v79;
  }
  v82 = *((__int64**)v1 + 2);
  if (v82 != v79) {
    v194 = v79;
    v83 = *(float*)GameData_212ea30;
    v192 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v193 = *((float*)GameData_212c190 + 1);
    v84 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 8);
    v190 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v191 = *((float*)GameData_212c188 + 1);
    v188 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v189 = -*(float*)GameData_212c190;
    v186 = -*(float*)GameData_212c188;
    v187 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v185 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    while (1) {
      v85 = *v82;
      v200 = v82;
      (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(*v82 + 8) + 152LL) + 16LL))(
          *(_QWORD*)(*v82 + 8) + 152LL),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v87 = *(_QWORD*)(v85 + 8);
      v88 = 0x0.0p+0f;
      if (v87 != 0 && *(_QWORD*)(v87 + 392) != 0 &&
          (*(_BYTE*)(v87 + 417) & 0x1C) == 0) {
        v89 = v86;
        v90 = (*(float (**)(__int64))(*(_QWORD*)(v87 + 152) + 16LL))(v87 + 152),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        v91 = v89;
        v88 = 0x0.0p+0f;
        if (v90 > 0x0.0p+0f) {
          v88 = v91;
        }
      }
      v92 = game_8224a0(0xCu),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      if (game_GameModeData_instance_ == 0 ||
          (v93 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v92)) == 0 ||
          *(_DWORD*)(v93 + 32) == 0) {
        v88 = 0x0.0p+0f;
      }
      if (!MapUtil_7536a0(*(_QWORD*)(v85 + 8))) {
        v88 = 0x0.0p+0f;
      }
      v94 = *(float*)(*GameData_212f878 + 1424);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
        v181 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v181;
        __cxa_guard_release((__int64)&GameData_21a6130),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v95 = *(_QWORD*)(v85 + 8);
      v96 = *(_QWORD*)(v95 + 264);
      if (v96 != 0) {
        LODWORD(v97) = 0;
        *((float*)&v97 + 1) = v94 + 0x1.99999a0000000p-5f;
        v98 = *(float32x4_t*)(*(_QWORD*)(v96 + 8) + 304LL);
        LANES128(v98).n128_u32[3] = 0;
        v99 = vaddq_f32(COERCE_AS(float32x4_t, v97), v98);
      }
      else {
        v99 = COERCE_AS(float32x4_t, GameData_21a6120);
      }
      v100 = *(_DWORD*)(v95 + 592);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                memory_order_acquire) &
           1) == 0) {
        v214 = v99;
        v182 = __cxa_guard_acquire((__int64)&GameData_21a5680),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
        v99 = v214;
        if (v182 != 0) {
          v183 = *((_QWORD*)GameData_212c2f8 + 1);
          *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
          *((_QWORD*)&GameData_21a5670 + 1) = v183;
          __cxa_guard_release((__int64)&GameData_21a5680),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v99 = v214;
        }
      }
      v101 = COERCE_AS(int8x16_t, GameData_21a5670);
      if (*GameData_212d168 == 1 && *GameData_212cfc8[0] != 0) {
        break;
      }
      v103 = *(_QWORD*)GameData_212c638;
      if (*(_QWORD*)GameData_212c638 != 0) {
        v105 = *(_QWORD*)(v103 + 24);
        v104 = *(_QWORD*)(v103 + 32);
        if (v105 != v104) {
          v106 = *(_QWORD*)(v104 - 8);
          if (v106 != 0) {
            v102 = *(_QWORD*)(v106 + 24);
            v107 = *(_QWORD*)(v106 + 32);
            if (v107 != 0 &&
                (atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 8),
                                           1u, memory_order_relaxed),
                 atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0)) {
              v208 = v101;
              v213 = v99;
              (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v107),
                  v86 = COERCE_AS(__typeof__(v86),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v101 = v208;
              v99 = v213;
              if (v102 != 0) {
                goto LABEL_170;
              }
            }
            else if (v102 != 0) {
              goto LABEL_170;
            }
          }
        }
      }
    LABEL_186:
      v142 = *(float32x4_t**)(v85 + 16);
      v143 = vsubq_f32(v142[19], v99);
      v144 = vmulq_f32(v143, v143);
      LANES128(v144).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u64[0];
      LANES128(v144).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v144).n128_f32[0] != 0x0.0p+0f) {
        LANES128(v142[19]).n128_u64[0] = LANES128(v99).n128_u64[0];
        v144 = v142[19];
        LANES128(v142[18]).n128_u32[2] |= 1u;
        LANES128(v144).n128_u64[1] = LANES128(v99).n128_u32[2];
        v142[19] = v144;
        v142 = *(float32x4_t**)(v85 + 16);
      }
      LANES128(v144).n128_f32[0] = (float)v100;
      v145 =
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v144).n128_u64[0]), 0);
      LANES128(v145).n128_u32[3] = 0;
      v146 = vsubq_f32(v142[22], v145);
      v147 = vmulq_f32(v146, v146);
      LANES128(v147).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v147, v147, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v142[22]).n128_u32[0] = LANES128(v144).n128_u32[0];
        LANES128(v142[22]).n128_u32[1] = LANES128(v144).n128_u32[0];
        v148 = v142[22];
        LANES128(v142[18]).n128_u32[2] |= 1u;
        LANES128(v148).n128_u64[1] = LANES128(v144).n128_u32[0];
        v142[22] = v148;
        v142 = *(float32x4_t**)(v85 + 16);
      }
      LANES128(v142[18]).n128_u8[1] = v88 > 0x0.0p+0f;
      v149 = *(_QWORD*)(v85 + 8);
      v150 = *(__int16*)(v149 + 492);
      v151 = *(_QWORD*)GameData_212d020[0];
      v216[0] = v149;
      v152 = (float)v150;
      v153 = *(_QWORD*)(v151 + 128);
      LANES128(v215).n128_u32[0] = 0;
      LODWORD(v216[1]) = *(_DWORD*)(*(_QWORD*)GameData_212d038[0] + 82LL);
      BYTE4(v216[1]) = 1;
      if (*(_QWORD*)(v153 + 24) == *(_QWORD*)(v153 + 16)) {
        v155 = (float)v150;
      }
      else {
        v154 = *(_BYTE*)(v153 + 56) == 1 && *(_QWORD*)(v153 + 40) == v149;
        if (v154) {
          v155 = (float)*(int*)(v153 + 48);
        }
        else {
          v154 = (GameHr_1021e80(v153, (unsigned __int8*)v216, &v215) & 1) == 0,
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
          v149 = *(_QWORD*)(v85 + 8);
          v155 = (float)LANES128(v215).n128_i32[0];
          if (v154) {
            v155 = v152;
          }
        }
      }
      v156 = v155 <= v152;
      v157 = 512;
      if (v155 <= v152) {
        v158 = v155;
      }
      else {
        v158 = v152;
      }
      if (v155 <= v152) {
        v155 = v152;
      }
      if (!v156) {
        v157 = 544;
      }
      *(float*)(v85 + 32) = v158;
      *(float*)(v85 + 36) = v155;
      v159 = GameData_212f878;
      v160 = *(int32x4_t*)(*GameData_212f878 + v157 + 16);
      LOBYTE(v216[0]) = 0;
      v204 = v160;
      v199 = game_Unit_GetParam(v149),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v202 = GameRoutine_f0dfe0(*v159, *(_QWORD*)(v85 + 8)),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v211 = powf(*(float*)&v202, v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v197 = powf(*((float*)&v202 + 1), v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v161 = powf(*((float*)&v202 + 2), v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v162 = *(float*)(v85 + 36);
      v163 = *(_QWORD*)(v85 + 8);
      v198 = v161;
      LOBYTE(v216[0]) = 0;
      v164 = game_Unit_GetParam(v163),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v206 = powf(LANES128(v204).n128_f32[0], v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v196 = powf(LANES128(v204).n128_f32[1], v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v165 = powf(LANES128(v204).n128_f32[2], v83),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v166 = *(_QWORD*)(v85 + 8);
      *(float*)&v167 = v165;
      if ((*(_BYTE*)(v166 + 416) & 1) != 0) {
        goto LABEL_209;
      }
      v195 = v165;
      LODWORD(v216[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
      v168 = game_HasSkill((_QWORD*)(v166 + 1744), (unsigned int*)v216),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      *(float*)&v167 = v195;
      if ((v168 & 1) != 0 ||
          (v169 = 0x1.0000000000000p+0f, *(_WORD*)(v166 + 492) == 0) &&
              *(_BYTE*)(v166 + 496) == 0 &&
              (LODWORD(v216[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                             game_g_shared_system_skills_ptr) &
                                  0xFFF,
               v180 =
                   game_HasSkill((_QWORD*)(v166 + 1744), (unsigned int*)v216),
               *(float*)& v167 = v195, (v180 & 1) != 0)) {
      LABEL_209:
        v169 = *(float*)(*GameData_212f878 + 1444);
      }
      *(float*)&v171 = v206;
      *(float*)&v170 = v211;
      v172 = *(_QWORD*)(*(_QWORD*)(v85 + 24) + 24LL);
      v173 = *(_QWORD**)(v172 + 312);
      v174 = *(_QWORD**)(v172 + 320);
      if (v173 != v174) {
        v175 =
            fminf(fmaxf(v158 / (float)v199, 0x0.0p+0f), 0x1.0000000000000p+0f);
        *(float*)&v176 = v198;
        *((float*)&v170 + 1) = v197;
        *((_QWORD*)&v177 + 1) = *((_QWORD*)&v202 + 1);
        *(int32x2_t*)&v177 = vdup_laneq_s32(*(int32x4_t*)&v202, 3);
        HIDWORD(v176) = LODWORD(v177);
        *((_QWORD*)&v170 + 1) = v176;
        v212 = v170;
        *((float*)&v171 + 1) = v196;
        v178 =
            fminf(fmaxf(v162 / (float)v164, 0x0.0p+0f), 0x1.0000000000000p+0f) -
            v175;
        HIDWORD(v167) = LANES64_OF(vdup_laneq_s32(v204, 3)).n64_u32[0];
        *((_QWORD*)&v171 + 1) = v167;
        v207 = v171;
        do {
          *(float*)&v177 = v175;
          (*(void (**)(_QWORD, const char*, __int64, long double))(
              *(_QWORD*)*v173 + 16LL))(*v173, "HPRatioRemain", 13, v177),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          (*(void (**)(_QWORD, const char*, __int64, long double))(
              *(_QWORD*)*v173 + 64LL))(*v173, "HPColorRemain", 13, v212),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          (*(void (**)(_QWORD, const char*, __int64, float))(
              *(_QWORD*)*v173 + 16LL))(*v173, "HPRatioChange", 13, v178),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          (*(void (**)(_QWORD, const char*, __int64, long double))(
              *(_QWORD*)*v173 + 64LL))(*v173, "HPColorChange", 13, v207),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          (*(void (**)(_QWORD, const char*, __int64, float))(
              *(_QWORD*)*v173 + 16LL))(*v173, "GaugeBrightness", 15, v169),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          Material_addbe0((_QWORD*)*v173, (__int64)"co_dither_alpha", 15,
                          v88 < 0x1.0000000000000p+0f),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v179 = *v173;
          v173 += 2;
          (*(void (**)(__int64, const char*, __int64, float))(
              *(_QWORD*)v179 + 16LL))(v179, "DitherAlpha", 11, v88),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        } while (v173 != v174);
      }
      v82 = v200 + 2;
      if (v200 + 2 == v194) {
        return;
      }
    }
    v102 = *GameData_212cfc8[0] + 16;
  LABEL_170:
    v108 = *(float32x4_t**)(v85 + 16);
    v109 = vmulq_f32(v101, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v110).n128_u64[0] = 0x3F80000000000000LL;
    LANES128(v111).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v112).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v113).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v114).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v111).n128_u64[1] = LANES128(v111).n128_u64[0];
    LANES128(v113).n128_u64[1] = LANES128(v112).n128_u64[0];
    LANES128(v114).n128_u64[1] = 0x3F80000000000000LL;
    *(int8x8_t*)&LANES128(v110).n128_i8[8] =
        vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v115).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v112).n128_u64[1] = LANES128(v115).n128_u64[0];
    *(int32x2_t*)&LANES128(v115).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v109).n128_u64[0]), 1);
    v116 = vmlaq_f32(vmlaq_f32(vmulq_f32(v109, v111),
                               COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v110, v113)),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v115, v114));
    LANES128(v115).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v115).n128_i8[8] =
        vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v109).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v101, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v109).n128_u64[1] = LANES128(v109).n128_u64[0];
    v117 = vmlsq_f32(v116, v115, v112);
    LANES128(v115).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v101, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v118).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v119).n128_u64[0] = LANES128(v101).n128_u64[0];
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v119).n128_u64[1] = LANES128(v115).n128_u64[0];
    *(int8x8_t*)&LANES128(v118).n128_i8[8] =
        vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v120).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v117).n128_u64[0]), 1);
    v121 = vmlaq_f32(vmulq_f32(v109, v117),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v119, v118));
    LANES128(v118).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v101, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v115).n128_u64[1] = LANES128(v118).n128_u64[0];
    LANES128(v118).n128_u64[1] = LANES128(v101).n128_u64[0];
    v122 = vmlaq_f32(v121, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v118, v120));
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v120).n128_i8[8] =
        vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v123 = vmlsq_f32(v122, v120, v115);
    LANES128(v123).n128_u32[3] = 0;
    v124 = (float)(PSEUDO_UNFUSED(
               (float)(*(float*)(v102 + 84) * 0x1.1df46a0000000p-6f) *
               0x1.0000000000000p-1f)) +
           (float)(roundf((float)((float)(*(float*)(v102 + 84) *
                                          0x1.1df46a0000000p-6f) *
                                  0x1.0000000000000p-1f) *
                          0x1.45f3060000000p-3f) *
                   -0x1.921fb60000000p+2f);
    if (v124 < -0x1.921fb60000000p+0f) {
      v125 = -0x1.0000000000000p+0f;
    }
    else {
      v125 = 0x1.0000000000000p+0f;
    }
    v126 = -0x1.921fb60000000p+1f - v124;
    if (v124 >= -0x1.921fb60000000p+0f) {
      v126 = v124;
    }
    if (v124 > 0x1.921fb60000000p+0f) {
      v127 = 0x1.921fb60000000p+1f - v124;
    }
    else {
      v127 = v126;
    }
    v128 = vmulq_f32(v123, v123);
    if (v124 > 0x1.921fb60000000p+0f) {
      v129 = -0x1.0000000000000p+0f;
    }
    else {
      v129 = v125;
    }
    LANES64(v130).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v128, v128, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0])))
            .n64_u64[0];
    LANES128(v131).n128_u64[0] = LANES64_OF(vpadd_f32(v130, v130)).n64_u64[0];
    LANES128(v131).n128_u64[1] = LANES128(v131).n128_u64[0];
    v132 = vrsqrteq_f32(v131);
    v133 = vmulq_f32(v132, vrsqrtsq_f32(v132, vmulq_f32(v131, v132)));
    v134 = vbicq_s8(
        vmulq_f32(vmulq_f32(v133, vrsqrtsq_f32(v133, vmulq_f32(v131, v133))),
                  v123),
        vceqzq_f32(v131));
    LANES128(v131).n128_f32[0] = v127 * v127;
    v135 = vmulq_n_f32(
        v134,
        v127 *
            (float)((float)((float)(v187 +
                                    (float)((float)(v192 +
                                                    (float)((float)(v188 +
                                                                    (float)((float)(v193 +
                                                                                    (float)(v189 *
                                                                                            (float)(v127 *
                                                                                                    v127))) *
                                                                            (float)(v127 *
                                                                                    v127))) *
                                                            (float)(v127 *
                                                                    v127))) *
                                            (float)(v127 * v127))) *
                            (float)(v127 * v127)) +
                    0x1.0000000000000p+0f));
    PSEUDO_LOW_LANE128(v133, n128_f32,
                       v191 + (float)(v186 * (float)(v127 * v127)));
    v136 = v135;
    v137 =
        v129 *
        (float)((float)((float)(v84 +
                                (float)((float)(v190 +
                                                (float)((float)(v185 +
                                                                (float)(LANES128(
                                                                            v133)
                                                                            .n128_f32
                                                                                [0] *
                                                                        LANES128(
                                                                            v131)
                                                                            .n128_f32
                                                                                [0])) *
                                                        LANES128(v131)
                                                            .n128_f32[0])) *
                                        LANES128(v131).n128_f32[0])) *
                        LANES128(v131).n128_f32[0]) +
                0x1.0000000000000p+0f);
    LANES128(v136).n128_f32[3] = v137;
    v215 = v136;
    v138 = v108[21];
    LANES64(v139).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v138, v135)))).n64_u64[0];
    if ((LANES64(v139).n64_u8[0] & 1) != 0 ||
        (LANES64(v139).n64_u8[2] & 1) != 0 ||
        (LANES64(v139).n64_u8[4] & 1) != 0 ||
        LANES128(v138).n128_f32[3] != v137) {
      LANES128(v108[21]).n128_u64[0] = LANES128(v135).n128_u64[0];
      LANES128(v108[21]).n128_f32[3] = v137;
      LANES128(v108[21]).n128_u32[2] = LANES128(v135).n128_u32[2];
      v210 = v99;
      LANES128(v108[18]).n128_u32[2] |= 1u;
      GameRoutine_622ac0((void*)(v216), (float32x2_t*)&v215),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(float, "s0", "=w"));
      v140 = v216[1];
      v99 = v210;
      LANES128(v108[20]).n128_u64[0] = v216[0];
      v141 = v108[20];
      LANES128(v141).n128_u64[1] = v140;
      v108[20] = v141;
    }
    goto LABEL_186;
  }
}

void MapDrawHpModel_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[2];
  *a1 = game_map_MapDrawHpModel_vtable;
  if (v1 != 0) {
    v2 = a1[3];
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = a1[2];
    a1[3] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
}

void MapDrawHpModel_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[2];
  *a1 = game_map_MapDrawHpModel_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[3];
    if (v1 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[2];
    a1[3] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, (__int64)a1);
}

#pragma GCC visibility pop
