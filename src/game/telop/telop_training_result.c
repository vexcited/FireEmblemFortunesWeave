#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1750310(__int64, int);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopTrainingResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopTrainingResult_Destructor(_QWORD* a1);
__int64 TelopTrainingResult_Unknown43(__int64 a1);
__int64 GaugeUtil_1750310(__int64, int);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64* GameRoutine_17618b0(__int64);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1763740(_QWORD*, __int64**, char);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_67ed20(_QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GaugeUtil_1750020(__int64, __int64*, __int64, char, signed int,
                          unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_telop_1763c20(__int64*, __int64**);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1afed0f;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_2130fa0[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_2131cf8[27];
extern __int64 game_GameModeData_instance_;
extern char** msg_MessageManager_empty_text__ptr;
void* game_97b2f0(__int64);
void GameHr_1763e20(__int64*, _QWORD*, __int64, __int64, const char*);
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_177f890();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_688200();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_740050();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopTrainingResult_Unknown57(_QWORD* a1);

__int64 TelopTrainingResult_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  bool v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;

  v1 = (_QWORD*)a1[147];
  *a1 = game_telop_TelopTrainingResult_vtable;
  v3 = (_QWORD*)a1[148];
  if (v1 != v3) {
    v4 = v3 - 20;
    v5 = v3 - 20;
    do {
      v6 = *v5;
      v5 -= 20;
      (*(void (**)(_QWORD*))(v6 + 24))(v4);
      v7 = v4 == v1;
      v4 = v5;
    } while (!v7);
  }
  a1[148] = v1;
  v8 = (_QWORD*)a1[151];
  v9 = (_QWORD*)a1[150];
  v10 = v9;
  if (v9 != v8) {
    v11 = v8 - 20;
    v12 = v8 - 20;
    do {
      v13 = *v12;
      v12 -= 20;
      (*(void (**)(_QWORD*))(v13 + 24))(v11);
      v7 = v11 == v9;
      v11 = v12;
    } while (!v7);
    v10 = (_QWORD*)a1[150];
  }
  a1[151] = v9;
  if (v10 != nullptr) {
    if (v10 == v9) {
      a1[151] = v10;
    }
    else {
      v14 = v9 - 20;
      v15 = v14;
      do {
        v16 = *v15;
        v15 -= 20;
        (*(void (**)(_QWORD*))(v16 + 24))(v14);
        v7 = v14 == v10;
        v14 = v15;
      } while (!v7);
      v17 = (_QWORD*)a1[150];
      a1[151] = v10;
      v10 = v17;
      if (v17 == nullptr) {
        goto LABEL_21;
      }
    }
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v10);
  }

LABEL_21:
  v19 = (_QWORD*)a1[147];
  if (v19 != nullptr) {
    v20 = (_QWORD*)a1[148];
    if (v19 == v20) {
      goto LABEL_27;
    }
    v21 = v20 - 20;
    v22 = v20 - 20;
    do {
      v23 = *v22;
      v22 -= 20;
      (*(void (**)(_QWORD*))(v23 + 24))(v21);
      v7 = v21 == v19;
      v21 = v22;
    } while (!v7);
    v24 = (_QWORD*)a1[147];
    a1[148] = v19;
    v19 = v24;
    if (v24 != nullptr) {
    LABEL_27:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v19);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

void TelopTrainingResult_Unknown57(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  char* v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  const char* v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  char* v107;
  char* v108;
  char* v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64* v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  int v119;
  int v120;
  __int64 v121;
  __int64* v122;
  bool v123;
  __int64* v124;
  const char* v125;
  __int64 v126;
  char* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  char* v133;
  __int64 v134;
  unsigned __int64 v135;
  _QWORD* v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64* v161;
  __int64* v162;
  __int64 v163;
  __int64* v164;
  __int64* v165;
  __int64* v166;
  __int64 v167;
  __int64 v168;
  __int64* v169;
  unsigned __int64 v170;
  __int64 v171;
  __int64* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  __int64* v179;
  char* v180;
  __int64 v181;
  __int64 v182;
  __int64* v183;
  __int64* v184;
  __int64* v185;
  __int64 v186;
  __int64 v187;
  __int64* v188;
  __int64* v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64* v192;
  __int64* v193;
  char* v194;
  __int64* v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64* v198;
  __int64 v199;
  struct {
    __int64* v200;
    char* v201;
    char* v202;
  } v200_;
  struct {
    __int64* v203;
    __int64 v204;
  } v203_;
  __int64* v205;
  __int64* v206;
  __int128 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  __int64 v217;
  unsigned __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;

  v1 = (_QWORD*)a1[148];
  v2 = (_QWORD*)a1[147];
  v3 = a1;
  if (v2 != v1) {
    v4 = v1 - 20;
    v5 = v1 - 20;
    do {
      v6 = *v5;
      v5 -= 20;
      (*(void (**)(_QWORD*))(v6 + 24))(v4);
      v15 = v4 == v2;
      v4 = v5;
    } while (!v15);
  }
  v3[148] = v2;
  v7 = (_QWORD*)v3[151];
  v8 = (_QWORD*)v3[150];
  if (v8 != v7) {
    v9 = v7 - 20;
    v10 = v7 - 20;
    do {
      v11 = *v10;
      v10 -= 20;
      (*(void (**)(_QWORD*))(v11 + 24))(v9);
      v15 = v9 == v8;
      v9 = v10;
    } while (!v15);
  }
  v12 = v3[146];
  v3[151] = v8;
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v186 = (__int64)v3;
  if (*(_QWORD*)(v12 + 24) != *(_QWORD*)(v12 + 16)) {
    v14 = 0;
    v184 = v3 + 150;
    v185 = v3 + 147;
    v183 = GameData_212e348 + 2;
    v192 = (__int64*)(GameData_2131cf8[0] + 16);
    v188 = GameData_2130fa0[0] + 2;
    while (1) {
      v187 = v14;
      v15 = v14 == 0;
      v16 = v185;
      v17 = 0;
      v18 = 0;
      v19 = nullptr;
      v20 = 0;
      if (!v15) {
        v16 = v184;
      }
      v189 = v16;
      v21 = 176;
      if (v15) {
        v21 = 80;
      }
      v22 = (__int64*)(v12 + v21);
      v23 = (char*)v22 + 20;
      v193 = v22;
      v194 = (char*)v22 + 20;
      do {
        if (*(int*)&v23[4 * v17] >= 1) {
          if ((unsigned __int64)v19 < v20) {
            *(_DWORD*)v19 = v17;
            v19 += 4;
          }
          else {
            v24 = &v19[-v18];
            v25 = (__int64)&v19[-v18] >> 2;
            v26 = v25 + 1;
            if ((unsigned __int64)(v25 + 1) >> 62 != 0) {
              GameRoutine_6e5a20();
            }
            if ((__int64)(v20 - v18) >> 1 > v26) {
              v26 = (__int64)(v20 - v18) >> 1;
            }
            if (v20 - v18 >= 0x7FFFFFFFFFFFFFFCLL) {
              v27 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v27 = v26;
            }
            if (v27 != 0) {
              if (v27 >> 62 != 0) {
              LABEL_213:
                GameRoutine_60a210();
              }
              v28 = fw_memory_HeapManager_Allocate(*v13, 4 * v27, 16, 0);
            }
            else {
              v28 = 0;
            }
            v20 = v28 + 4 * v27;
            v29 = (unsigned __int64)&v19[-v18];
            v30 = (__int64)&v24[v28 + -4 * v25];
            *(_DWORD*)&v24[v28] = v17;
            v19 = &v24[v28 + 4];
            memcpy(v30, v18, v29);
            if (v18 != 0) {
              v31 = 128;
              if (*(_QWORD*)(*v13 + 200) == 0) {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v13 + v31, v18);
            }
            v23 = v194;
            v18 = v30;
          }
        }
        ++v17;
      } while (v17 != 13);
      v32 = (unsigned __int64)&v19[-v18];
      if ((int)((unsigned __int64)&v19[-v18] >> 2) >= 1) {
        break;
      }
    LABEL_134:
      if (v18 != 0) {
        v112 = 128;
        if (*(_QWORD*)(*v13 + 200) == 0) {
          v112 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v13 + v112, v18);
      }
      v3 = (_QWORD*)v186;
      v12 = *(_QWORD*)(v186 + 1168);
      v14 = v187 + 1;
      if (v187 + 1 >= (unsigned __int64)((__int64)(*(_QWORD*)(v12 + 24) -
                                                   *(_QWORD*)(v12 + 16)) >>
                                         3)) {
        goto LABEL_138;
      }
    }
    v33 = v189;
    v34 = 0;
    v196 = (v32 >> 2) & 0x7FFFFFFF;
    v198 = GameRoutine_1760e40(v186, 8u);
    while (1) {
      v35 = game_util_Format("L_Mastery%02d", v34);
      LayoutAccessor_1560070((void*)(&v205), v198, v35);
      if (v206 != nullptr) {
        break;
      }
    LABEL_38:
      if (++v34 == v196) {
        v97 = *msg_MessageManager_instance__ptr[0];
        v98 = *v193;
        if (*(_BYTE*)(*v193 + 2136) != 0) {
          v99 = (__int64)game_97b2f0(v98 + 2104);
        }
        else {
          v99 = GameHr_67ed20(*(_QWORD**)(v98 + 392));
        }
        if (v99 != 0) {
          v100 = (const char*)v99;
        }
        else {
          v100 = *msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(v97 + 14704, v100);
        v101 = *msg_MessageManager_instance__ptr[0];
        v209 = -1;
        v210 = -1;
        v211 = -1;
        v212 = -1;
        v213 = -1;
        v214 = -1;
        v215 = -1;
        v216 = -1;
        v217 = -1;
        v218 = -1;
        v219 = -1;
        v220 = -1;
        v205 = v183;
        v206 = (__int64*)0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v207 = 0xFFFF0004FFFF0002LL;
        *((_QWORD*)&v207 + 1) = 0xFFFF0006FFFF0005LL;
        v221 = 8;
        v208 = 0xFFFF0008FFFF0007LL;
        v102 = GameRoutine_a4dbe0(v101, "MID_Sys_Result_Msg_Skill_EXP_Up", 0);
        if (v102 != nullptr) {
          v103 = (__int64)v102;
          v104 = ui_LayoutAccessor_FindTextBox(v198, (__int64)"T_Txt");
          if (v104 != 0) {
            GameRoutine_156c5d0(v104, v103, 0);
          }
        }
        v105 = ui_LayoutAccessor_FindPane(v198, (__int64)"Face");
        if (v105 != 0) {
          v106 =
              __dynamic_cast(v105, GameData_212d670[0], GameData_212d678[0], 0);
          if (v106 != 0) {
            GameHr_1840740(v106, 0, *v193, 6u, 1);
          }
        }
        v107 = game_util_Format("L_Mastery%02d", 0);
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v198, (__int64)v107,
            (int)(-858993459 * ((unsigned __int64)(v33[1] - *v33) >> 5)) > 0);
        v108 = game_util_Format("L_Mastery%02d", 1);
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v198, (__int64)v108,
            (int)(-858993459 * ((unsigned __int64)(v33[1] - *v33) >> 5)) > 1);
        v109 = game_util_Format("L_Mastery%02d", 2);
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v198, (__int64)v109,
            (int)(-858993459 * ((unsigned __int64)(v33[1] - *v33) >> 5)) > 2);
        v110 = game_util_Format("L_Mastery%02d", 3);
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v198, (__int64)v110,
            (int)(-858993459 * ((unsigned __int64)(v33[1] - *v33) >> 5)) > 3);
        v111 = ui_LayoutAccessor_FindAlignment(v198, (__int64)"A_Mastery");
        if (v111 != 0) {
          Alignment_56b600(v111);
        }
        goto LABEL_134;
      }
    }
    v36 = std___1___shared_weak_count_lock((__int64)v206);
    if (v36 != 0) {
      v37 = v205;
    }
    else {
      v37 = nullptr;
    }
    if (v206 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v206);
    }
    if (v37 == nullptr) {
    LABEL_117:
      if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak(v36);
      }
      goto LABEL_38;
    }
    v206 = nullptr;
    *(_QWORD*)&v207 = 0;
    *(_QWORD*)((char*)&v207 + 7) = 0;
    LOWORD(v210) = 0;
    LOWORD(v211) = 0;
    LOWORD(v214) = 0;
    LOWORD(v217) = 0;
    v220 = 0;
    v221 = 0;
    v208 = 0;
    v209 = 1065353216;
    v205 = v192;
    v38 = *(unsigned __int8*)(v18 + 4 * v34);
    v203_.v203 = v37;
    v203_.v204 = v36;
    if (v36 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                memory_order_relaxed);
    }
    GaugeUtil_1750020((__int64)&v205, (__int64*)&v203_.v203, *v193, v38,
                      *(unsigned __int16*)(*v193 + 2 * v38 + 514),
                      *(_DWORD*)&v194[4 * v38]);
    if (v203_.v204 != 0) {
      std___1___shared_weak_count___release_weak(v203_.v204);
    }
    v40 = v33[1];
    v39 = v33[2];
    if (v40 < v39) {
      *(_QWORD*)v40 = v188;
      v41 = v207;
      *(_QWORD*)(v40 + 8) = v206;
      *(_QWORD*)(v40 + 16) = v41;
      v42 = *((_QWORD*)&v207 + 1);
      v43 = v208;
      v44 = v209;
      *(_WORD*)(v40 + 48) = v210;
      *(_QWORD*)(v40 + 32) = v43;
      *(_QWORD*)(v40 + 40) = v44;
      *(_QWORD*)(v40 + 24) = v42;
      if ((v211 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v40 + 56), v213, v212);
        if ((v214 & 1) != 0) {
        LABEL_53:
          fw_text_String_CopyTerminated((__int64*)(v40 + 80), v216, v215);
          if ((v217 & 1) != 0) {
          LABEL_54:
            fw_text_String_CopyTerminated((__int64*)(v40 + 104), v219, v218);
          LABEL_67:
            *(_QWORD*)v40 = GameData_2131cf8[0] + 16;
            *(_QWORD*)(v40 + 128) = v220;
            v56 = v221;
            *(_QWORD*)(v40 + 136) = v221;
            if (v56 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 16), 1u,
                                        memory_order_relaxed);
            }
            v57 = v223;
            *(_QWORD*)(v40 + 144) = v222;
            *(_QWORD*)(v40 + 152) = v57;
            v58 = v40 + 160;
          LABEL_100:
            v33[1] = v58;
            v205 = (__int64*)(GameData_2131cf8[0] + 16);
            if (v221 != 0) {
              std___1___shared_weak_count___release_weak(v221);
            }
            v205 = GameData_2130fa0[0] + 2;
            if ((v217 & 1) != 0 && v219 != 0) {
              v94 = 128;
              if (*(_QWORD*)(*v13 + 200) == 0) {
                v94 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v13 + v94, v219);
            }
            if ((v214 & 1) != 0 && v216 != 0) {
              v95 = 128;
              if (*(_QWORD*)(*v13 + 200) == 0) {
                v95 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v13 + v95, v216);
            }
            if ((v211 & 1) != 0 && v213 != 0) {
              v96 = 128;
              if (*(_QWORD*)(*v13 + 200) == 0) {
                v96 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v13 + v96, v213);
            }
            goto LABEL_117;
          }
        LABEL_66:
          v54 = v217;
          v55 = v219;
          *(_QWORD*)(v40 + 112) = v218;
          *(_QWORD*)(v40 + 120) = v55;
          *(_QWORD*)(v40 + 104) = v54;
          goto LABEL_67;
        }
      }
      else {
        v45 = v211;
        v46 = v213;
        *(_QWORD*)(v40 + 64) = v212;
        *(_QWORD*)(v40 + 72) = v46;
        *(_QWORD*)(v40 + 56) = v45;
        if ((v214 & 1) != 0) {
          goto LABEL_53;
        }
      }
      v52 = v214;
      v53 = v216;
      *(_QWORD*)(v40 + 88) = v215;
      *(_QWORD*)(v40 + 96) = v53;
      *(_QWORD*)(v40 + 80) = v52;
      if ((v217 & 1) != 0) {
        goto LABEL_54;
      }
      goto LABEL_66;
    }
    v47 = v40 - *v33;
    v48 = 0xCCCCCCCCCCCCCCCDLL * (v47 >> 5) + 1;
    if (v48 > 0x199999999999999LL) {
      GameRoutine_177f890();
    }
    v49 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v39 - *v33) >> 5);
    if (2 * v49 > v48) {
      v48 = 2 * v49;
    }
    if (v49 >= 0xCCCCCCCCCCCCCCLL) {
      v50 = 0x199999999999999LL;
    }
    else {
      v50 = v48;
    }
    v191 = v50;
    if (v50 != 0) {
      if (v50 > 0x199999999999999LL) {
        goto LABEL_213;
      }
      v51 = fw_memory_HeapManager_Allocate(*v13, 160 * v50, 16, 0);
    }
    else {
      v51 = 0;
    }
    v190 = v51;
    v59 = v51 + v47;
    v60 = GameData_2130fa0[0];
    v61 = *((_QWORD*)&v207 + 1);
    v62 = v209;
    *(_QWORD*)(v59 + 32) = v208;
    *(_QWORD*)(v59 + 40) = v62;
    *(_WORD*)(v59 + 48) = v210;
    v63 = v206;
    v64 = v207;
    *(_QWORD*)v59 = v60 + 2;
    *(_QWORD*)(v59 + 8) = v63;
    LOBYTE(v60) = v211;
    *(_QWORD*)(v59 + 16) = v64;
    *(_QWORD*)(v59 + 24) = v61;
    if (((unsigned __int8)v60 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v59 + 56), v213, v212);
      if ((v214 & 1) != 0) {
      LABEL_73:
        fw_text_String_CopyTerminated((__int64*)(v59 + 80), v216, v215);
        if ((v217 & 1) != 0) {
        LABEL_74:
          fw_text_String_CopyTerminated((__int64*)(v59 + 104), v219, v218);
        LABEL_78:
          *(_QWORD*)v59 = GameData_2131cf8[0] + 16;
          v68 = v221;
          *(_QWORD*)(v59 + 128) = v220;
          *(_QWORD*)(v59 + 136) = v68;
          if (v68 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                                      memory_order_relaxed);
          }
          v69 = v223;
          v70 = *v33;
          v71 = (__int64*)v33[1];
          *(_QWORD*)(v59 + 144) = v222;
          *(_QWORD*)(v59 + 152) = v69;
          v72 = v59 + v70 - (_QWORD)v71;
          if ((__int64*)v70 == v71) {
            v92 = v189;
          }
          else {
            v73 = 0;
            do {
              v77 = v72 + v73;
              *(_QWORD*)v77 = GameData_2130fa0[0] + 2;
              v78 = *(_QWORD*)(v70 + v73 + 16);
              *(_QWORD*)(v77 + 8) = *(_QWORD*)(v70 + v73 + 8);
              *(_QWORD*)(v77 + 16) = v78;
              v79 = *(_QWORD*)(v70 + v73 + 24);
              v80 = *(_QWORD*)(v70 + v73 + 32);
              v81 = *(_QWORD*)(v70 + v73 + 40);
              *(_WORD*)(v77 + 48) = *(_WORD*)(v70 + v73 + 48);
              *(_QWORD*)(v77 + 32) = v80;
              *(_QWORD*)(v77 + 40) = v81;
              *(_QWORD*)(v77 + 24) = v79;
              if ((*(_BYTE*)(v70 + v73 + 56) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v77 + 56),
                                              *(_QWORD*)(v70 + v73 + 72),
                                              *(_QWORD*)(v70 + v73 + 64));
              }
              else {
                v82 = *(_QWORD*)(v70 + v73 + 56);
                v83 = *(_QWORD*)(v70 + v73 + 72);
                *(_QWORD*)(v77 + 64) = *(_QWORD*)(v70 + v73 + 64);
                *(_QWORD*)(v77 + 72) = v83;
                *(_QWORD*)(v77 + 56) = v82;
              }
              v84 = (__int64*)(v72 + v73);
              if ((*(_BYTE*)(v70 + v73 + 80) & 1) != 0) {
                fw_text_String_CopyTerminated(v84 + 10,
                                              *(_QWORD*)(v70 + v73 + 96),
                                              *(_QWORD*)(v70 + v73 + 88));
              }
              else {
                v85 = *(_QWORD*)(v70 + v73 + 80);
                v86 = *(_QWORD*)(v70 + v73 + 96);
                v84[11] = *(_QWORD*)(v70 + v73 + 88);
                v84[12] = v86;
                v84[10] = v85;
              }
              v87 = (__int64*)(v72 + v73);
              if ((*(_BYTE*)(v70 + v73 + 104) & 1) != 0) {
                fw_text_String_CopyTerminated(v87 + 13,
                                              *(_QWORD*)(v70 + v73 + 120),
                                              *(_QWORD*)(v70 + v73 + 112));
              }
              else {
                v88 = *(_QWORD*)(v70 + v73 + 104);
                v89 = *(_QWORD*)(v70 + v73 + 120);
                v87[14] = *(_QWORD*)(v70 + v73 + 112);
                v87[15] = v89;
                v87[13] = v88;
              }
              *(_QWORD*)v77 = GameData_2131cf8[0] + 16;
              v74 = (_QWORD*)(v70 + v73);
              v73 += 160;
              *(_QWORD*)(v77 + 128) = v74[16];
              *(_QWORD*)(v77 + 136) = v74[17];
              v74[16] = 0;
              v74[17] = 0;
              v76 = v74[18];
              v75 = v74[19];
              *(_QWORD*)(v77 + 144) = v76;
              *(_QWORD*)(v77 + 152) = v75;
            } while ((__int64*)(v70 + v73) != v71);
            v90 = (__int64*)v70;
            do {
              v91 = *v90;
              v90 += 20;
              (*(void (**)(__int64))(v91 + 24))(v70);
              v70 = (__int64)v90;
            } while (v90 != v71);
            v92 = v189;
            v70 = *v189;
          }
          v58 = v59 + 160;
          *v92 = v72;
          v92[1] = v58;
          v33 = v92;
          v92[2] = v190 + 160 * v191;
          v13 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v70 != 0) {
            v93 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v93 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v70);
          }
          goto LABEL_100;
        }
      LABEL_77:
        v67 = v218;
        *(_QWORD*)(v59 + 104) = v217;
        *(_QWORD*)(v59 + 112) = v67;
        *(_QWORD*)(v59 + 120) = v219;
        goto LABEL_78;
      }
    }
    else {
      v65 = v212;
      *(_QWORD*)(v59 + 56) = v211;
      *(_QWORD*)(v59 + 64) = v65;
      *(_QWORD*)(v59 + 72) = v213;
      if ((v214 & 1) != 0) {
        goto LABEL_73;
      }
    }
    v66 = v215;
    *(_QWORD*)(v59 + 80) = v214;
    *(_QWORD*)(v59 + 88) = v66;
    *(_QWORD*)(v59 + 96) = v216;
    if ((v217 & 1) != 0) {
      goto LABEL_74;
    }
    goto LABEL_77;
  }
LABEL_138:
  v113 = GameRoutine_1760e40((__int64)v3, 0x12u);
  v115 = *(_QWORD*)(v12 + 16);
  v114 = *(_QWORD*)(v12 + 24);
  v116 = v113;
  v206 = (__int64*)&GameData_1afed0f;
  v117 = v114 - v115;
  v118 = (unsigned __int64)(v114 - v115) >> 3;
  v119 = *(_DWORD*)(v12 + 276) - *(_DWORD*)(v12 + 272);
  v205 = (__int64*)game_HashString((__int64)&GameData_1afed0f);
  v120 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v121 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v205);
    v122 = GameData_212e348;
    if (v121 != 0) {
      v120 = *(_DWORD*)(v121 + 32);
    }
    else {
      v120 = 0;
    }
  }
  else {
    v122 = GameData_212e348;
  }
  v123 = v119 < v120;
  v124 = msg_MessageManager_instance__ptr[0];
  if (v123) {
    v125 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
  }
  else {
    v125 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
  }
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v118, 0);
  v126 = *v124;
  v209 = -1;
  v210 = -1;
  v211 = -1;
  v212 = -1;
  v213 = -1;
  v214 = -1;
  v215 = -1;
  v216 = -1;
  v217 = -1;
  v218 = -1;
  v219 = -1;
  v220 = -1;
  v205 = v122 + 2;
  v206 = (__int64*)0xFFFF0001FFFF0000LL;
  *(_QWORD*)&v207 = 0xFFFF0004FFFF0002LL;
  *((_QWORD*)&v207 + 1) = 0xFFFF0006FFFF0005LL;
  v221 = 8;
  v208 = 0xFFFF0008FFFF0007LL;
  v127 = GameRoutine_a4dbe0(v126, v125, 0);
  if (v127 != nullptr) {
    v128 = (__int64)v127;
    v129 = ui_LayoutAccessor_FindTextBox(v116, (__int64)"T_Txt");
    if (v129 != 0) {
      GameRoutine_156c5d0(v129, v128, 0);
    }
  }
  if ((int)v118 <= 0) {
    v206 = nullptr;
    *(_QWORD*)&v207 = 0;
    v205 = nullptr;
    v163 = 0;
    v133 = nullptr;
    v162 = nullptr;
    v161 = (__int64*)fw_memory_g_heap_manager_ptr;
  LABEL_193:
    game_telop_1763c20(v116, &v205);
    goto LABEL_194;
  }
  v195 = v116;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = nullptr;
  v134 = 0;
  v135 = 0;
  v136 = nullptr;
  v199 = (v117 >> 3) & 0x7FFFFFFF;
  do {
    v137 = *(_QWORD*)(v12 + 16);
    if ((unsigned __int64)v136 >= v135) {
      v138 = (unsigned __int64)v136 - v131;
      v139 = ((__int64)v136 - v131) >> 3;
      v140 = v139 + 1;
      if ((unsigned __int64)(v139 + 1) >> 61 != 0) {
        goto LABEL_215;
      }
      v197 = v132;
      if ((__int64)(v135 - v131) >> 2 > v140) {
        v140 = (__int64)(v135 - v131) >> 2;
      }
      if (v135 - v131 >= 0x7FFFFFFFFFFFFFF8LL) {
        v141 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v141 = v140;
      }
      if (v141 != 0) {
        if (v141 >> 61 != 0) {
          goto LABEL_213;
        }
        v142 = v134;
        v143 = v131;
        v144 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v141, 16, 0);
        v131 = v143;
      }
      else {
        v142 = v134;
        v144 = 0;
      }
      v145 = *(_QWORD*)(v137 + 8 * v130);
      v135 = v144 + 8 * v141;
      v146 = v131;
      v147 = v144 + v138 - 8 * v139;
      *(_QWORD*)(v144 + v138) = v145;
      v136 = (_QWORD*)(v144 + v138 + 8);
      memcpy(v147, v131, v138);
      if (v146 != 0) {
        v148 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v148 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v148, v146);
      }
      v134 = v142;
      v132 = v197;
      v131 = v147;
    }
    else {
      *v136++ = *(_QWORD*)(v137 + 8 * v130);
    }
    v149 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 16) + 8 * v130) + 392LL);
    if ((unsigned __int64)v133 < v132) {
      *(_QWORD*)v133 = v149;
      v133 += 8;
    }
    else {
      v150 = (unsigned __int64)&v133[-v134];
      v151 = (__int64)&v133[-v134] >> 3;
      v152 = v151 + 1;
      if ((unsigned __int64)(v151 + 1) >> 61 != 0) {
        GameRoutine_688200();
      }
      if ((__int64)(v132 - v134) >> 2 > v152) {
        v152 = (__int64)(v132 - v134) >> 2;
      }
      if (v132 - v134 >= 0x7FFFFFFFFFFFFFF8LL) {
        v153 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v153 = v152;
      }
      if (v153 != 0) {
        if (v153 >> 61 != 0) {
          goto LABEL_213;
        }
        v154 = v134;
        v155 = v131;
        v156 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v153, 16, 0);
        v134 = v154;
      }
      else {
        v155 = v131;
        v156 = 0;
      }
      v132 = v156 + 8 * v153;
      v157 = v156 + v150 - 8 * v151;
      *(_QWORD*)(v156 + v150) = v149;
      v133 = (char*)(v156 + v150 + 8);
      v158 = v134;
      memcpy(v157, v134, v150);
      if (v158 != 0) {
        v159 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v159 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v159, v158);
      }
      v134 = v157;
      v131 = v155;
    }
    ++v130;
  } while (v199 != v130);
  v160 = (unsigned __int64)v136 - v131;
  v206 = nullptr;
  *(_QWORD*)&v207 = 0;
  v205 = nullptr;
  if (v136 == (_QWORD*)v131) {
    v3 = (_QWORD*)v186;
    v162 = (__int64*)v134;
    v163 = v131;
    v161 = (__int64*)fw_memory_g_heap_manager_ptr;
    v116 = v195;
    goto LABEL_193;
  }
  v3 = (_QWORD*)v186;
  v161 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v160 & 0x8000000000000000LL) != 0) {
  LABEL_215:
    GameRoutine_740050();
  }
  v162 = (__int64*)v134;
  v163 = v131;
  v164 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v160, 16, 0);
  v165 = (__int64*)((char*)v164 + v160);
  v166 = v164;
  v205 = v164;
  v206 = v164;
  *(_QWORD*)&v207 = (char*)v164 + v160;
  memcpy((__int64)v164, v163, v160);
  v206 = v165;
  game_telop_1763c20(v195, &v205);
  v167 = *v161;
  v206 = v166;
  v168 = 128;
  if (*(_QWORD*)(v167 + 200) == 0) {
    v168 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v167 + v168, (__int64)v166);
LABEL_194:
  v169 = GameRoutine_17618b0((__int64)v3);
  v170 = v133 - (char*)v162;
  v171 = (__int64)v162;
  if (v170 < 9) {
    if (v162 == nullptr) {
      goto LABEL_201;
    }
  }
  else {
    v172 = v169;
    GameHr_1763e20(v169, v3, *v162, v162[1], "L_RelianceAB");
    v171 = (__int64)v162;
    if (v170 == 24) {
      GameHr_1763e20(v172, v3, *v162, v162[2], "L_RelianceAC");
      GameHr_1763e20(v172, v3, v162[1], v162[2], "L_RelianceBC");
      v171 = (__int64)v162;
    }
  }
  v173 = 128;
  if (*(_QWORD*)(*v161 + 200) == 0) {
    v173 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v161 + v173, v171);
LABEL_201:
  if (v163 != 0) {
    v174 = 128;
    if (*(_QWORD*)(*v161 + 200) == 0) {
      v174 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v161 + v174, v163);
  }
  v175 = v3[146];
  v200_.v200 = nullptr;
  v200_.v201 = nullptr;
  v200_.v202 = nullptr;
  v177 = *(_QWORD*)(v175 + 16);
  v176 = *(_QWORD*)(v175 + 24);
  v178 = v176 - v177;
  if (v176 == v177) {
    GameHr_1763740(v3, &v200_.v200, 1);
  }
  else {
    if ((v178 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60();
    }
    v179 = (__int64*)fw_memory_HeapManager_Allocate(*v161, v176 - v177, 16, 0);
    v180 = (char*)v179 + v178;
    v181 = (__int64)v179;
    v200_.v200 = v179;
    v200_.v202 = (char*)v179 + v178;
    memcpy((__int64)v179, v177, v178);
    v200_.v201 = v180;
    GameHr_1763740(v3, &v200_.v200, 1);
    v182 = 128;
    if (*(_QWORD*)(*v161 + 200) == 0) {
      v182 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v161 + v182, v181);
  }
}

__int64 TelopTrainingResult_Unknown43(__int64 a1)
{
  __int64 v1;
  char v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;

  v1 = *(_QWORD*)(a1 + 1168);
  if (*(_QWORD*)(v1 + 24) == *(_QWORD*)(v1 + 16)) {
    v2 = 1;
  }
  else {
    v2 = 1;
    v4 = 0;
    do {
      if (v4 != 0) {
        v5 = 1200;
      }
      else {
        v5 = 1176;
      }
      v6 = (__int64*)(a1 + v5);
      v7 = *(_QWORD*)(a1 + v5);
      if ((int)(-858993459 * ((unsigned __int64)(v6[1] - v7) >> 5)) >= 1) {
        v8 = 0;
        v9 = 0;
        do {
          v10 = GaugeUtil_1750310(v7 + v8, 1);
          ++v9;
          v8 += 160;
          v2 &= v10 ^ 1;
          v7 = *v6;
        } while (v9 <
                 (int)(-858993459 * ((unsigned __int64)(v6[1] - *v6) >> 5)));
        v1 = *(_QWORD*)(a1 + 1168);
      }
      ++v4;
    } while (v4 < (__int64)(*(_QWORD*)(v1 + 24) - *(_QWORD*)(v1 + 16)) >> 3);
  }
  return v2 & 1;
}

#pragma GCC visibility pop
