#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f85d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickTarget_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickTarget_Destructor(_QWORD* a1);
__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_74e220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f85860(_QWORD, _QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapPanelRage_f1a700(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_map_f54910(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff7f18[])();
extern __int64 (*GameData_1ff7f98[])();
extern __int64 (*GameData_1ff8018[])();
extern __int64 (*GameData_1ff8098[])();
extern __int64 (*game_map_TrickTargetMeshData_vtable[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_2226688;
extern __int64 GameData_2226690;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern unsigned __int8 GameData_1b41abf[17];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_map_MapPanelTrickTarget_UpdateTarget(__int64 a1);

void game_map_MapPanelTrickTarget_UpdateTarget(__int64 a1)
{
  __int64 v1;
  __int64* v2;
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
  int v13;
  __int64* v14;
  __int64* v15;
  bool v16;
  unsigned __int8** v17;
  bool v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64* v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64* v38;
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
  __int64 v49;
  char v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  char v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  bool v71;
  unsigned __int64 v72;
  _BYTE* v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  int v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  _BYTE* v95;
  _BYTE* v96;
  char v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int8** v103;
  unsigned __int8** v104;
  unsigned __int8* v105;
  char* v106;
  unsigned __int8* v107;
  unsigned __int8* v108;
  unsigned __int8* v109;
  signed __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int8* v116;
  __int64 v117;
  unsigned __int8* v118;
  _BYTE* v119;
  unsigned __int8 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned int v125;
  __int64 v126;
  float32x4_t v127;
  float32x4_t* v128;
  float32x4_t* v129;
  float32x4_t* v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  float32x4_t v135;
  unsigned __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64* v139;
  __int64 v140;
  _QWORD* v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int128 v148;
  __int128 v149;
  __int128 v150;
  __int64 v151;
  __int128 v152;
  float32x4_t v153;
  __int64 v154;
  __int64* v155;
  __int128 v156;
  __int128 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  long double v169;
  __int64 v170;
  __int64 v171;
  float32x4_t* v172;
  float32x4_t* v173;
  float32x4_t* v174;
  void (**v175)(float32x4_t*, long double);
  __int64 v176;
  __int64 v177;
  unsigned __int8** v178;
  unsigned __int8** v179;
  __int64 v180;
  unsigned __int8* v181;
  unsigned __int8* v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  float32x4_t* v186;
  float32x4_t* v187;
  __int64 v188;
  __int64 v189;
  __int64* v190;
  __int64 v191;
  __int64 v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  unsigned __int64 v198;
  float32x4_t* v199;
  float32x4_t* v200;
  float32x4_t* v201;
  __int64 v202;
  long double v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64* v210;
  __int64 v211;
  void (***v212)(_QWORD, long double);
  void (***v213)(_QWORD, long double);
  void (**v214)(_QWORD, long double);
  unsigned __int64 v215;
  __int64 v216;
  unsigned __int8* v217;
  unsigned __int8* v218;
  unsigned __int8* v219;
  __int64* v221;
  __int64 v222;
  int v224;
  __int64* v225;
  char* v226;
  int v227;
  unsigned __int8** v228;
  _QWORD v229[4];
  _QWORD* v230;
  __int64 (**v231)();
  __int64 (***v232)();
  __int128 v233;
  __int128 v234;
  __int128 v235;
  __int128 v236;
  __int64 v237;
  __int64 v238;
  float32x4_t* v239;
  float32x4_t* v240;
  __int64 v241;
  __int64 v242;
  __int128 v243;
  __int64 v244;
  __int64 v245;
  float32x4_t v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  int v253;
  char** v254;
  char* v255;
  unsigned __int8* v256;
  unsigned __int64 v257;
  __int64 (**v258)();
  __int64 (**v259)();
  __int64 v260;
  __int64 (***v261)();
  unsigned __int8** v262;
  unsigned __int8** v263;
  __int64 v264;
  unsigned __int8* v265;
  unsigned __int8* v266;
  __int64 v267;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_303;
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = (__int64*)(a1 + 24);
  if (v2 != (__int64*)(a1 + 24)) {
    do {
      v12 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v12 + 48))(&v2[6]) & 1) != 0) {
        v13 = 1036831949;
      }
      else {
        v13 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v14 = (__int64*)v2[1];
      *((_DWORD*)v2 + 70) = v13;
      if (v14 != nullptr) {
        do {
          v15 = v14;
          v14 = (__int64*)*v14;
        } while (v14 != nullptr);
      }
      else {
        do {
          v15 = (__int64*)v2[2];
          v16 = v2 == (__int64*)*v15;
          v2 = v15;
        } while (!v16);
      }
      v2 = v15;
    } while (v15 != v3);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
    goto LABEL_302;
  }
  v266 = nullptr;
  v267 = 0;
  v265 = nullptr;
  v4 = GameData_212d020[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  v7 = GameData_212d038[0];
  if (v6 != 0 && (v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL),
                  v9 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16),
                                            1u, memory_order_relaxed),
                  v10 = std___1___shared_weak_count_lock(v9),
                  std___1___shared_weak_count___release_weak(v6), v10 != 0)) {
    if (v8 != 0) {
      v11 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)v7 + 156LL) != 0) {
      v11 = 8;
    }
    else {
      v11 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)v7 + 156LL) != 0) {
    v11 = 8;
  }
  else {
    v11 = 127472;
  }
  v16 = (*(_QWORD*)(v5 + v11 + 127168) | *(_QWORD*)(v5 + v11 + 127192)) == 0 ||
        v5 == 0;
  v17 = (unsigned __int8**)(v5 + v11 + 127408);
  v18 = v16 || &v265 == v17;
  if (v18 || (GameRoutine_74e220(
                  &v265, *v17, *(_QWORD*)(v5 + v11 + 127416),
                  (__int64)(*(_QWORD*)(v5 + v11 + 127416) - (_QWORD)*v17) >> 2),
              v266 == v265)) {
    if (*(_DWORD*)(*(_QWORD*)v4 + 4368LL) < 3u ||
        (v19 = GameData_212cfd0[0], *(_BYTE*)(*GameData_212cfd0[0] + 8) == 0) ||
        (v20 = game_UnitPool_Get(*GameData_212cfd0[0] + 8)) == 0 ||
        *(_QWORD*)(v20 + 392) == 0 || (*(_BYTE*)(v20 + 417) & 0x1C) != 0 ||
        (v21 = v20, (*(float (**)(__int64))(*(_QWORD*)(v20 + 152) + 16LL))(
                        v20 + 152) <= 0.0) ||
        *(_DWORD*)(*(_QWORD*)v4 + 4368LL) != 6 ||
        (*(_BYTE*)(*v19 + 8) == 0
             ? (v23 = v21, v22 = 0)
             : (v22 = game_UnitPool_Get(*v19 + 8), v23 = v21),
         v22 != v23)) {
      v218 = *(unsigned __int8**)(*(_QWORD*)v7 + 88LL);
      v217 = *(unsigned __int8**)(*(_QWORD*)v7 + 96LL);
      while (v218 != v217) {
        v219 = v265;
        if (v265 != v266) {
          while (*v219 != *v218 || v219[1] != v218[1]) {
            v219 += 4;
            if (v219 == v266) {
              goto LABEL_357;
            }
          }
        }
        if (v219 == v266) {
        LABEL_357:
          MapPanelRage_f1a700(&v265, v218);
        }
        v218 += 4;
      }
    }
  }
  v24 = (char*)v265;
  v221 = v3;
  v263 = nullptr;
  v264 = 0;
  v262 = nullptr;
  v226 = (char*)v266;
  if (v265 != v266 && GameData_2226688 != GameData_2226690) {
    v25 = GameData_212cfb8[0];
    do {
      v27 = (unsigned __int8*)GameData_2226688;
      v26 = GameData_2226690;
      while (v27 != (unsigned __int8*)v26) {
        v28 = *v27;
        v29 = *v24 + 32 * v24[1];
        v30 = *(_QWORD*)(*v25 + 16);
        if (v29 >= 0x400) {
          v29 = 0;
        }
        v31 =
            *(__int16*)(v30 + ((unsigned __int64)GameData_1b41abf[v28] << 11) +
                        2LL * v29 + 104);
        if ((v31 & 0x8000000000000000LL) == 0) {
          v32 = *(_QWORD*)(v30 + 8);
          if (v32 != 0) {
            v33 = v32 + 144LL * (int)v31;
            if ((_DWORD)v28 == (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v33 +
                                                                 40LL))(v33) &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33) & 1) !=
                    0) {
              v259 = nullptr;
              v260 = 0;
              v258 = nullptr;
              *(_QWORD*)&v234 = &v231;
              v231 = GameData_1ff7f18;
              v232 = &v258;
              (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v33 + 752LL))(
                  v33, &v231);
              if ((__int64 (***)())v234 == &v231) {
                v34 = 32;
              LABEL_61:
                (*(void (**)(__int64))(*(_QWORD*)v234 + v34))((__int64)v234);
              }
              else if ((_QWORD)v234 != 0) {
                v34 = 40;
                goto LABEL_61;
              }
              GameRoutine_f85860(&v262, &v258);
              if (v258 != nullptr) {
                v259 = v258;
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
              }
            }
          }
        }
        ++v27;
      }
      v24 += 4;
    } while (v24 != v226);
  }
  v36 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
  v37 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
  if (v36 != v37) {
    v38 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v36 + 16LL))(*v36) & 1) == 0) {
    LABEL_68:
      if (++v36 == v37) {
        goto LABEL_80;
      }
    }
    v259 = nullptr;
    v260 = 0;
    v258 = nullptr;
    v39 = *v36;
    v231 = GameData_1ff7f98;
    v232 = &v258;
    *(_QWORD*)&v234 = &v231;
    (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v39 + 752LL))(v39, &v231);
    if ((__int64 (***)())v234 == &v231) {
      v40 = 32;
    }
    else {
      if ((_QWORD)v234 == 0) {
        goto LABEL_75;
      }
      v40 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v234 + v40))((__int64)v234);
  LABEL_75:
    GameRoutine_f85860(&v262, &v258);
    if (v258 != nullptr) {
      v41 = *v38;
      v259 = v258;
      if (*(_QWORD*)(v41 + 200) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v41 + v42);
    }
    goto LABEL_68;
  }
LABEL_80:
  LODWORD(v255) = *(_DWORD*)(*(_QWORD*)GameData_212d038[0] + 82LL);
  LODWORD(v231) = 15;
  v43 = game_UnitPool_GetFirst(&v231);
  if (v43 == 0) {
    goto LABEL_181;
  }
  v46 = *(_QWORD*)(v43 + 432);
  v47 = v43;
  if (v46 == 0) {
    v46 = *(_QWORD*)(v43 + 440);
    if (v46 != 0) {
      v48 = *(unsigned __int8*)(v46 + 16);
      if (v48 <= 8) {
        v216 = 24LL * *(unsigned __int8*)(v46 + 16) + 556024;
        while (1) {
          if (v48 <= 2) {
            v46 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v216);
            if (v46 != 0) {
              break;
            }
          }
          ++v48;
          v216 += 24;
          if (v48 == 9) {
            goto LABEL_84;
          }
        }
      }
      else {
      LABEL_84:
        v46 = 0;
      }
    }
  }
LABEL_87:
  while (2) {
    v49 = v46;
    v50 = *(_BYTE*)(v47 + 584);
    v51 = *(unsigned __int8*)(v47 + 585);
    v52 = *(_DWORD*)(v47 + 592);
    v261 = &v258;
    v258 = GameData_1ff8018;
    v259 = (__int64 (**)())&v255;
    if (v52 < 1) {
      goto LABEL_101;
    }
    v53 = v51 << 24;
    v54 = v49;
    v55 = 0;
  LABEL_89:
    v56 = v53;
    v57 = v52;
    while (1) {
      LODWORD(v231) = (char)(v55 + v50);
      LODWORD(v229[0]) = v56 >> 24;
      if (v261 == nullptr) {
        GameRoutine_60a310(0, v44, v45);
      }
      v43 = ((__int64 (*)(__int64 (***)(), __int64 (***)(), _QWORD*))(
          *v261)[6])(v261, &v231, v229);
      if ((v43 & 1) != 0) {
        break;
      }
      --v57;
      v56 += 0x1000000;
      if (v57 == 0) {
        if (++v55 != v52) {
          goto LABEL_89;
        }
        break;
      }
    }
    if (v261 == &v258) {
      v59 = v43;
      v58 = 4;
      v49 = v54;
    LABEL_98:
      v43 = ((__int64 (*)(__int64 (***)()))(*v261)[v58])(v261);
      if ((v59 & 1) != 0) {
        goto LABEL_106;
      }
    LABEL_101:
      if (*(_QWORD*)(v47 + 392) == 0 || (*(_BYTE*)(v47 + 417) & 0x1C) != 0 ||
          (*(float (**)(__int64))(*(_QWORD*)(v47 + 152) + 16LL))(v47 + 152) <=
              0.0 ||
          (*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) == 0 &&
              (*(_BYTE*)(v47 + 417) & 0x20) == 0) {
        goto LABEL_172;
      }
      goto LABEL_106;
    }
    v49 = v54;
    if (v261 != nullptr) {
      v58 = 5;
      v59 = v43;
      goto LABEL_98;
    }
    if ((v43 & 1) == 0) {
      goto LABEL_101;
    }
  LABEL_106:
    v231 = (__int64 (**)())0x80000000000LL;
    v43 = game_UnitSkillList_GetMaxValue(v47 + 1744, &v231);
    if ((_DWORD)v43 == 0) {
      goto LABEL_172;
    }
    v232 = nullptr;
    *(_QWORD*)&v233 = 0;
    v231 = nullptr;
    v60 = v43;
    v61 = *(char*)(v47 + 584);
    v62 = *GameData_212ce98[0];
    if (v61 - (int)v43 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v63 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v63 = v61 - v43;
    }
    v64 = *(char*)(v47 + 585);
    v227 = v63;
    if (v64 - (int)v43 <= *(unsigned __int8*)(*GameData_212ce98[0] + 29)) {
      v65 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
    }
    else {
      v65 = v64 - v43;
    }
    v66 = *(unsigned __int8*)(v62 + 30);
    v67 = *(unsigned __int8*)(v62 + 31);
    v68 = *(_DWORD*)(v47 + 592) + v43;
    v69 = v68 + v61;
    if (v69 >= v66) {
      v70 = v66;
    }
    else {
      v70 = v69;
    }
    if (v68 + v64 < v67) {
      v67 = v68 + v64;
    }
    v224 = v67;
    v71 = v65 <= v67 && v63 <= v70;
    if (!v71) {
      v43 = GameRoutine_f85860(&v262, &v231);
      goto LABEL_172;
    }
    v222 = v49;
    v72 = 0;
    v73 = nullptr;
    do {
      v74 = v227;
      do {
        v75 = *(_DWORD*)(v47 + 592);
        v76 = *(char*)(v47 + 584);
        v77 = *(char*)(v47 + 585);
        if ((unsigned int)(v75 * v75) < 2) {
          v86 = v74 - v76;
          if (v86 < 0) {
            v86 = -v86;
          }
          v87 = v65 - v77;
          if (v87 < 0) {
            v87 = -v87;
          }
          v80 = v87 + v86;
        }
        else {
          if (v75 < 1) {
            if (v60 < 10000) {
              goto LABEL_129;
            }
            goto LABEL_150;
          }
          v78 = v75 + v77;
          v79 = v75 + v76;
          v80 = 10000;
          do {
            v81 = v65 - v77;
            v82 = v74 - v76;
            v83 = *(char*)(v47 + 584);
            if (v65 - v77 < 0) {
              v81 = v77 - v65;
            }
            do {
              ++v83;
              if (v82 >= 0) {
                v84 = v82;
              }
              else {
                v84 = -v82;
              }
              --v82;
              v85 = v84 + v81;
              if (v85 < v80) {
                v80 = v85;
              }
            } while (v83 < v79);
            ++v77;
          } while (v77 < v78);
        }
        if (v80 > v60) {
          goto LABEL_129;
        }
      LABEL_150:
        if (v72 < (unsigned __int64)v233) {
          *(_BYTE*)v72 = v74;
          *(_BYTE*)(v72 + 1) = v65;
          *(_WORD*)(v72 + 2) = 0;
          v72 += 4LL;
        }
        else {
          v88 = v72 - (_QWORD)v73;
          v89 = (__int64)(v72 - (_QWORD)v73) >> 2;
          v90 = v89 + 1;
          if ((unsigned __int64)(v89 + 1) >> 62 != 0) {
          LABEL_370:
            GameRoutine_74e1f0(v43);
          }
          v91 = v233 - (_QWORD)v73;
          if ((__int64)(v233 - (_QWORD)v73) >> 1 > v90) {
            v90 = v91 >> 1;
          }
          if ((unsigned __int64)v91 >= 0x7FFFFFFFFFFFFFFCLL) {
            v92 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v92 = v90;
          }
          if (v92 >> 62 != 0) {
          LABEL_369:
            GameRoutine_60a210(v43);
          }
          v43 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v92, 16, 0);
          v93 = v43 + v88;
          v94 = v43 + v88 - 4 * v89;
          *(_BYTE*)v93 = v74;
          *(_BYTE*)(v93 + 1) = v65;
          *(_WORD*)(v93 + 2) = 0;
          if (v73 != (_BYTE*)v72) {
            v95 = v73;
            v96 = (_BYTE*)v94;
            do {
              *v96 = *v95;
              v96[1] = v95[1];
              v96[2] = v95[2];
              v97 = v95[3];
              v95 += 4;
              v96[3] = v97;
              v96 += 4;
            } while (v95 != (_BYTE*)v72);
          }
          v72 = v93 + 4;
          v232 = (__int64 (***)())(v93 + 4);
          *(_QWORD*)&v233 = v43 + 4 * v92;
          if (v73 != nullptr) {
            v98 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v98 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v98);
          }
          v73 = (_BYTE*)v94;
        }
        v232 = (__int64 (***)())v72;
      LABEL_129:
        v71 = v74++ < v70;
      } while (v71);
      v231 = (__int64 (**)())v73;
      v71 = v65++ < v224;
    } while (v71);
    v43 = GameRoutine_f85860(&v262, &v231);
    v49 = v222;
    if (v73 != nullptr) {
      v232 = (__int64 (***)())v73;
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99);
    }
  LABEL_172:
    if (v49 != 0) {
      v46 = *(_QWORD*)(v49 + 432);
      v47 = v49;
      if (v46 == 0) {
        v100 = *(_QWORD*)(v49 + 440);
        v47 = v49;
        if (v100 != 0) {
          v101 = *(unsigned __int8*)(v100 + 16);
          v46 = 0;
          v47 = v49;
          if (v101 <= 8) {
            v102 = 24LL * (unsigned int)v101 + 556024;
            while (1) {
              if (v101 <= 2) {
                v46 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v102);
                if (v46 != 0) {
                  break;
                }
              }
              ++v101;
              v102 += 24;
              if (v101 == 9) {
                v46 = 0;
                v47 = v49;
                goto LABEL_87;
              }
            }
            v47 = v49;
          }
        }
      }
      continue;
    }
    break;
  }
LABEL_181:
  v103 = v262;
  v104 = v263;
  v256 = nullptr;
  v257 = 0;
  v255 = nullptr;
  if (v262 != v263) {
    v105 = nullptr;
    v106 = nullptr;
    v228 = v263;
    do {
      v107 = *v103;
      v108 = v103[1];
      while (v107 != v108) {
        if (v106 == (char*)v105) {
        LABEL_196:
          if ((unsigned __int64)v105 < v257) {
            *v105 = *v107;
            v105[1] = v107[1];
            v105[2] = v107[2];
            v105[3] = v107[3];
            v105 += 4;
          }
          else {
            v111 = v105 - (unsigned __int8*)v106;
            v112 = (v105 - (unsigned __int8*)v106) >> 2;
            v113 = v112 + 1;
            if ((unsigned __int64)(v112 + 1) >> 62 != 0) {
              goto LABEL_370;
            }
            v114 = v257 - (_QWORD)v106;
            if ((__int64)(v257 - (_QWORD)v106) >> 1 > v113) {
              v113 = v114 >> 1;
            }
            if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFFCLL) {
              v115 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v115 = v113;
            }
            if (v115 >> 62 != 0) {
              goto LABEL_369;
            }
            v43 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v115, 16, 0);
            v116 = (unsigned __int8*)(v43 + v111);
            v117 = v43 + v111 - 4 * v112;
            *v116 = *v107;
            v116[1] = v107[1];
            v116[2] = v107[2];
            v116[3] = v107[3];
            if (v106 != (char*)v105) {
              v118 = (unsigned __int8*)v106;
              v119 = (_BYTE*)v117;
              do {
                *v119 = *v118;
                v119[1] = v118[1];
                v119[2] = v118[2];
                v120 = v118[3];
                v118 += 4;
                v119[3] = v120;
                v119 += 4;
              } while (v118 != v105);
            }
            v105 = v116 + 4;
            v255 = (char*)v117;
            v256 = v116 + 4;
            v257 = v43 + 4 * v115;
            if (v106 != nullptr) {
              v121 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v121 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v121);
            }
            v106 = (char*)v117;
          }
          v256 = v105;
        }
        else {
          v109 = (unsigned __int8*)v106;
          while (*v109 != *v107 || v109[1] != v107[1]) {
            v109 += 4;
            if (v109 == v105) {
              goto LABEL_196;
            }
          }
        }
        v107 += 4;
      }
      v104 = v228;
      v103 += 3;
    } while (v103 != v228);
    if (v105 != (unsigned __int8*)v106) {
      v254 = &v255;
      v225 = GameData_212f8b0[0] + 2;
      while (1) {
        game_map_f54910((__int64)&v231);
        v231 = game_map_TrickTargetMeshData_vtable;
        v123 = (unsigned int)*v106;
        v124 = (unsigned int)v106[1];
        v229[0] = GameData_1ff8098;
        v229[1] = &v254;
        v230 = v229;
        v125 = MapDrawConst_fcbcc0(a1, 1, v123, v124, v229, 1);
        if (v230 == v229) {
          v126 = 32;
        }
        else {
          if (v230 == nullptr) {
            goto LABEL_223;
          }
          v126 = 40;
        }
        (*(void (**)(__int64))(*v230 + v126))((__int64)v230);
      LABEL_223:
        GameRoutine_fcacb0(a1, &v231, 1, (unsigned int)*v106,
                           (unsigned int)v106[1], v125, GameData_212c958);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v176 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v176;
          __cxa_guard_release(&GameData_21a6130);
        }
        v127 = COERCE_AS(float32x4_t, GameData_21a6120);
        v129 = v239;
        v128 = v240;
        if (v240 != v239) {
          v130 = v239;
          do {
            v131 = v130[1];
            v130 += 4;
            v127 = vaddq_f32(v127, v131);
          } while (v130 != v240);
          v127 = vmulq_n_f32(
              v127,
              0x1.0000000000000p+0 /
                  (float)(unsigned __int64)(((char*)v240 - (char*)v239) >> 6));
          LANES128(v127).n128_u32[3] = 0;
        }
        v132 = vsubq_f32(v127, v246);
        v133 = vmulq_f32(v132, v132);
        LANES128(v133).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v133, v133, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
                    .n64_f32[0] > 0.0 &&
            v240 != v239) {
          do {
            v129[1] = vsubq_f32(v129[1], v132);
            v129 += 4;
          } while (v129 != v128);
        }
        LANES128(v135).n128_u64[0] = LANES128(v127).n128_u64[0];
        LANES128(v135).n128_u64[1] = LANES128(v127).n128_u32[2];
        v246 = v135;
        v136 = ((__int64 (*)(__int64 (***)()))v231[4])(&v231);
        v137 = *v221;
        v138 = v136;
        v139 = v221;
        v140 = (__int64)v221;
        if (*v221 != 0) {
          v141 = (_QWORD*)*v221;
          while (1) {
            v142 = v141[4];
            if (v136 >= v142) {
              if (v142 >= v136) {
                while (1) {
                  while (1) {
                    v143 = *(_QWORD*)(v137 + 32);
                    if (v136 >= v143) {
                      break;
                    }
                    v137 = *(_QWORD*)v137;
                    if (v137 == 0) {
                      goto LABEL_372;
                    }
                  }
                  if (v143 >= v136) {
                    goto LABEL_264;
                  }
                  v137 = *(_QWORD*)(v137 + 8);
                  if (v137 == 0) {
                  LABEL_372:
                    String_60a250("map::at:  key not found");
                  }
                }
              }
              ++v141;
            }
            v141 = (_QWORD*)*v141;
            if (v141 == nullptr) {
              while (1) {
                while (1) {
                  v144 = *(_QWORD*)(v137 + 32);
                  v140 = v137;
                  if (v136 >= v144) {
                    break;
                  }
                  v137 = *(_QWORD*)v137;
                  v139 = (__int64*)v140;
                  if (*(_QWORD*)v140 == 0) {
                    goto LABEL_249;
                  }
                }
                if (v144 >= v136) {
                  goto LABEL_252;
                }
                v137 = *(_QWORD*)(v137 + 8);
                if (v137 == 0) {
                  v139 = (__int64*)(v140 + 8);
                  goto LABEL_249;
                }
              }
            }
          }
        }
      LABEL_249:
        v145 = v140;
        v140 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
        *(_QWORD*)(v140 + 32) = v138;
        game_map_f54910(v140 + 48);
        *(_QWORD*)(v140 + 16) = v145;
        *(_QWORD*)(v140 + 48) = game_map_TrickTargetMeshData_vtable;
        v146 = v140;
        *(_QWORD*)v140 = 0;
        *(_QWORD*)(v140 + 8) = 0;
        *v139 = v140;
        v147 = **(_QWORD**)(a1 + 16);
        if (v147 != 0) {
          *(_QWORD*)(a1 + 16) = v147;
          v146 = *v139;
        }
        fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v146);
        ++*(_QWORD*)(a1 + 32);
      LABEL_252:
        *(_QWORD*)(v140 + 56) = v232;
        v148 = v234;
        *(_OWORD*)(v140 + 64) = v233;
        *(_OWORD*)(v140 + 80) = v148;
        v149 = v235;
        v150 = v236;
        v151 = v238;
        *(_QWORD*)(v140 + 128) = v237;
        *(_QWORD*)(v140 + 136) = v151;
        *(_OWORD*)(v140 + 96) = v149;
        *(_OWORD*)(v140 + 112) = v150;
        if ((__int64 (***)())(v140 + 48) != &v231) {
          GameRoutine_f155c0(v140 + 144);
          CharacterController_d42d20(v140 + 168, v241, v242,
                                     (v242 - v241) >> 4);
        }
        v152 = v243;
        v153 = v246;
        v154 = v245;
        v155 = v221;
        v137 = (__int64)v221;
        *(_QWORD*)(v140 + 208) = v244;
        *(_QWORD*)(v140 + 216) = v154;
        *(_QWORD*)(v140 + 192) = v152;
        *(_QWORD*)(v140 + 224) = LANES128(v153).n128_u64[0];
        v156 = *(_OWORD*)(v140 + 192);
        *((_QWORD*)&v156 + 1) = DWORD2(v152);
        v157 = *(_OWORD*)(v140 + 224);
        *((_QWORD*)&v157 + 1) = LANES128(v153).n128_u32[2];
        *(_OWORD*)(v140 + 192) = v156;
        v158 = v247;
        v159 = v248;
        *(_OWORD*)(v140 + 224) = v157;
        *(_QWORD*)(v140 + 240) = v158;
        *(_QWORD*)(v140 + 248) = v159;
        v160 = v250;
        v161 = v253;
        *(_QWORD*)(v140 + 256) = v249;
        *(_QWORD*)(v140 + 264) = v160;
        *(_DWORD*)(v140 + 288) = v161;
        v162 = v252;
        *(_QWORD*)(v140 + 272) = v251;
        *(_QWORD*)(v140 + 280) = v162;
        v163 = *v221;
        if (*v221 != 0) {
          while (1) {
            while (1) {
              v137 = v163;
              v164 = *(_QWORD*)(v163 + 32);
              if (v138 >= v164) {
                break;
              }
              v163 = *(_QWORD*)v137;
              v155 = (__int64*)v137;
              if (*(_QWORD*)v137 == 0) {
                goto LABEL_261;
              }
            }
            if (v164 >= v138) {
              break;
            }
            v163 = *(_QWORD*)(v137 + 8);
            if (v163 == 0) {
              v155 = (__int64*)(v137 + 8);
              goto LABEL_261;
            }
          }
        }
        else {
        LABEL_261:
          v165 = v137;
          v137 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
          *(_QWORD*)(v137 + 32) = v138;
          game_map_f54910(v137 + 48);
          *(_QWORD*)(v137 + 48) = game_map_TrickTargetMeshData_vtable;
          *(_QWORD*)v137 = 0;
          *(_QWORD*)(v137 + 8) = 0;
          v166 = v137;
          *(_QWORD*)(v137 + 16) = v165;
          *v155 = v137;
          v167 = **(_QWORD**)(a1 + 16);
          if (v167 != 0) {
            *(_QWORD*)(a1 + 16) = v167;
            v166 = *v155;
          }
          fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v166);
          ++*(_QWORD*)(a1 + 32);
        }
      LABEL_264:
        v168 = *(_QWORD*)(v137 + 48);
        *(_BYTE*)(v137 + 272) = 1;
        if (((*(__int64 (**)(void*))(v168 + 48))((void*)(v137 + 48)) & 1) !=
            0) {
          LODWORD(v169) = 1036831949;
        }
        else {
          *(_QWORD*)&v169 = 0;
          *(_DWORD*)(v137 + 276) = 1065353216;
        }
        v170 = v241;
        *(_DWORD*)(v137 + 280) = LODWORD(v169);
        v231 = (__int64 (**)())v225;
        if (v170 != 0) {
          v242 = v170;
          v171 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v171 = 56;
          }
          *(__n128*)&v169 = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v171);
        }
        v172 = v239;
        if (v239 != nullptr) {
          if (v239 == v240) {
            goto LABEL_214;
          }
          v173 = v240 - 4;
          v174 = v240 - 4;
          do {
            v175 = (void (**)(float32x4_t*, long double))LANES128(*(v174))
                       .n128_u64[0];
            v174 -= 4;
            (*v175)(v173, v169);
            v16 = v173 == v172;
            v173 = v174;
          } while (!v16);
          v240 = v172;
          if (v239 != nullptr) {
          LABEL_214:
            v122 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v122 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v122);
          }
        }
        v106 += 4;
        if (v106 == (char*)v105) {
          v106 = v255;
          break;
        }
      }
    }
    if (v106 != nullptr) {
      v256 = (unsigned __int8*)v106;
      v177 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v177 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v177);
    }
  }
  v178 = v262;
  if (v262 != nullptr) {
    if (v262 != v104) {
      v179 = v104;
      v180 = fw_memory_g_heap_manager_ptr;
      do {
        v182 = *(v179 - 3);
        v179 -= 3;
        v181 = v182;
        if (v182 != nullptr) {
          *(v104 - 2) = v181;
          if (*(_QWORD*)(*(_QWORD*)v180 + 200LL) != 0) {
            v183 = 128;
          }
          else {
            v183 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v180 + v183);
        }
        v104 = v179;
      } while (v179 != v178);
    }
    v184 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v184 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v184);
  }
  if (v265 != nullptr) {
    v266 = v265;
    v185 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v185 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v185);
  }
  v1 = a1;
LABEL_302:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_303:
  v186 = *(float32x4_t**)(v1 + 16);
  v187 = (float32x4_t*)(v1 + 24);
  if (v186 != (float32x4_t*)(v1 + 24)) {
    v188 = game_script_hub_g_frame_counter_ptr[0];
    v189 = fw_memory_g_heap_manager_ptr;
    v190 = GameData_212f8b0[0] + 2;
    do {
      v193 = LANES128(v186[17]).n128_f32[2];
      v194 = (float)(*(float*)(*(_QWORD*)v188 + 160LL) * 0x1.0aef000000000p+4) /
             0x1.f400000000000p+9;
      if (v193 <= 0.0) {
        if (LANES128(v186[17]).n128_u8[0] != 0) {
          v197 = 0x1.0000000000000p+0;
        }
        else {
          v197 = 0.0;
        }
      }
      else {
        v195 = v194 / v193;
        v196 = LANES128(v186[17]).n128_f32[1];
        if (LANES128(v186[17]).n128_u8[0] != 0) {
          v197 = fminf(fmaxf(v195 + v196, 0x1.51eb860000000p-2),
                       0x1.0000000000000p+0);
        }
        else {
          v197 = fminf(fmaxf(v196 - v195, 0.0), 0x1.570a3c0000000p-1);
        }
      }
      LANES128(v186[17]).n128_f32[1] = v197;
      v198 = LANES128(v186[3]).n128_u64[0];
      LANES128(v186[15]).n128_f32[0] = v194 + LANES128(v186[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v198 + 40))(v186 + 3);
      GameRoutine_f54fe0(v186 + 3);
      v199 = (float32x4_t*)LANES128(*(v186)).n128_u64[1];
      if ((LANES128(v186[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v186[17]).n128_f32[1] > 0.0) {
        if (v199 != nullptr) {
          do {
            v201 = v199;
            v199 = (float32x4_t*)LANES128(*(v199)).n128_u64[0];
          } while (v199 != nullptr);
        }
        else {
          do {
            v201 = (float32x4_t*)LANES128(v186[1]).n128_u64[0];
            v16 = v186 == (float32x4_t*)LANES128(*(v201)).n128_u64[0];
            v186 = v201;
          } while (!v16);
        }
      }
      else {
        v200 = v186;
        if (v199 != nullptr) {
          do {
            v201 = v199;
            v199 = (float32x4_t*)LANES128(*(v199)).n128_u64[0];
          } while (v199 != nullptr);
        }
        else {
          do {
            v201 = (float32x4_t*)LANES128(v200[1]).n128_u64[0];
            v16 = v200 == (float32x4_t*)LANES128(*(v201)).n128_u64[0];
            v200 = v201;
          } while (!v16);
        }
        if (*(float32x4_t**)(v1 + 16) == v186) {
          *(_QWORD*)(v1 + 16) = v201;
        }
        v202 = *(_QWORD*)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v202, v186);
        v204 = LANES128(v186[10]).n128_u64[1];
        LANES128(v186[3]).n128_u64[0] = (unsigned __int64)v190;
        if (v204 != 0) {
          v205 = *(_QWORD*)v189;
          LANES128(v186[11]).n128_u64[0] = v204;
          if (*(_QWORD*)(v205 + 200) != 0) {
            v206 = 128;
          }
          else {
            v206 = 56;
          }
          *(__n128*)&v203 = nn_mem_StandardAllocator_Free_alt1(v205 + v206);
        }
        v207 = LANES128(v186[9]).n128_u64[0];
        if (v207 != 0) {
          v208 = LANES128(v186[9]).n128_u64[1];
          if (v207 == v208) {
            goto LABEL_305;
          }
          v209 = v189;
          v210 = v190;
          v211 = v188;
          v212 = (void (***)(_QWORD, long double))(v208 - 64);
          v213 = (void (***)(_QWORD, long double))(v208 - 64);
          do {
            v214 = *v213;
            v213 -= 8;
            (*v214)(v212, v203);
            v16 = v212 == (void (***)(_QWORD, long double))v207;
            v212 = v213;
          } while (!v16);
          v215 = LANES128(v186[9]).n128_u64[0];
          v1 = a1;
          v188 = v211;
          v190 = v210;
          v189 = v209;
          LANES128(v186[9]).n128_u64[1] = v207;
          if (v215 != 0) {
          LABEL_305:
            if (*(_QWORD*)(*(_QWORD*)v189 + 200LL) != 0) {
              v191 = 128;
            }
            else {
              v191 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v189 + v191);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v189 + 200LL) != 0) {
          v192 = 128;
        }
        else {
          v192 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v189 + v192);
      }
      v186 = v201;
    } while (v201 != v187);
  }
}

__int64 MapPanelTrickTarget_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickTarget_vtable;
  return GameRoutine_f85d20(a1[3]);
}

__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTrickTarget_vtable;
  GameRoutine_f85d20(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4, v6);
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4, v6);
}

bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3)
{
  char* v3;

  v3 = *(char**)(a1 + 8);
  return *a2 == *v3 && *a3 == v3[1];
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
