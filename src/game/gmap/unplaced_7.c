#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, char**, char,
                                                char**);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__int16* Dir_70dd80(__int16* result, __int16*);
__int64* GameRoutine_888970(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 GameHr_1340b20(__int64*);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 GameRoutine_1530790();
__int64 GameRoutine_1530850();
__int64 GameRoutine_15308b0();
__int64 GameRoutine_1530910();
__int64 GameRoutine_19023d0(__int64, __int64);
__int64 GameRoutine_ae0560();
__int64 Impl_13261c0(__int64);
__int64 ProcGmapMove_1549f60(__int64, __int64);
__int64 Spot_132ac40(__int64, char);
__int64 TroopMgr_1345b40();
__int64 TroopMgr_13463f0(__int64 result);
__int64 TroopMgr_134d2e0(__int64);
__int64 Troop_1343230(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_GmapShopGuideTopMenu_HasShopGuide(__int64);
__int64 game_gmap_TroopMgr_GetAroundTroop(char);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, float, float, __int64, unsigned int,
                       unsigned int, int);
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1ab570b;
extern _UNKNOWN GameData_1abd4d1;
extern _UNKNOWN GameData_1ac8821;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1b45704;
extern __int64 (*GameData_204bf80[])();
extern __int64 (*GameData_204c000[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e70;
extern __int64 GameData_212d750;
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned int* TroopMgr_1346380();
unsigned int* TroopMgr_134c680(_QWORD*);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8875e0();
void game_gmap_1319f40(__int64);
void game_gmap_1539fc0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_gmap_888560(__int64 a1);
void game_gmap_154b9a0(char* a1);
void game_gmap_154f6c0(__int64 a1);

__int64 game_gmap_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

void game_gmap_154b9a0(char* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  __int64* v7;
  unsigned int* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64** v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64** i;
  __int64 v17;
  __int64** v18;
  __int64** v19;
  unsigned int** v20;
  unsigned int** v21;
  unsigned int* v22;
  __int64 v23;
  bool v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  char v28;
  __int64 v29;
  char v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  char* v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  char* v63;
  char* v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  char* v70;
  __int64 v71;
  unsigned __int64 v72;
  char* v73;
  char* v74;
  char* v75;
  char* j;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  char* v80;
  char* v81;
  char* v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64* v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  char* v117;
  __int64 v118;
  int v119;
  unsigned int*** v120;
  unsigned int*** v121;
  unsigned int** v122;
  unsigned int** v123;
  unsigned int* v124;
  __int64 v125;
  __int64* v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  int v132;
  __int64 v133;
  int v134;
  __int64* v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  char* v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int16 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  int v150;
  __int64 v151;
  __int64* v152;
  __int64* v153;
  __int64* v154;
  __int64 v155;
  int v156;
  __int16* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  _BYTE* v163;
  int v164;
  int v165;
  int v166;
  __int64 v167;
  int v168;
  __int64 v169;
  __int64 v170;
  float32x4_t* v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  int v178;
  _QWORD* v179;
  _QWORD* v180;
  _QWORD* v181;
  __int64* v182;
  __int64 v183;
  __int64* v184;
  __int64 v185;
  int v186;
  __int64* v187;
  __int64* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  int v194;
  float32x4_t** v195;
  float32x4_t** v196;
  float32x4_t* v197;
  float32x4_t* v198;
  _QWORD* k;
  __int64* v200;
  _QWORD* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  int v211;
  __int64* v212;
  __int64* v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  int v218;
  __int64* v219;
  __int64* v220;
  __int64 v221;
  __int64 v222;
  char* v223;
  __int64 v224;
  unsigned __int8* v225;
  unsigned int v226;
  int v227;
  _QWORD* m;
  __int64 v230;
  __int64* v231;
  __int64 v232;
  int v233;
  __int64* v234;
  __int64* v235;
  _QWORD* v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int64* v240;
  __int64* v241;
  _QWORD* v242;
  __int64 v243;
  __int64 v244;
  int v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  _QWORD* v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64* v255;
  __int64* v256;
  int v257;
  __int64* v258;
  __int64* v259;
  __int64 v260;
  __int64 v261;
  unsigned __int8* v262;
  unsigned int v263;
  int v264;
  bool v265;
  unsigned __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64* v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64* v275;
  __int64* v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  char v283;
  struct {
    __int64 (**v285)();
    char* v286;
    __int64 v287;
    char gap56_[8];
    char** v288;
  } v285_;
  struct {
    char* v289;
    char* v290;
    char* v291;
    char gap104_[8];
    char** v292;
  } v289_;
  struct {
    char* v293;
    char* v294;
    __int64 v295;
  } v293_;
  struct {
    char* v296;
    char* v297;
    char* v298;
    char gap184_[8];
    char** v299;
  } v296_;

  if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) != 0 ||
      (v1 = GameData_21316c8,
       *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) != 0)) {
    v2 = *((unsigned __int8**)a1 + 2);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *((_WORD*)a1 + 68) |= 0x80u;
      }
    }
    return;
  }
  v7 = GameData_212d708;
  game_gmap_1319f40(*(_QWORD*)(*GameData_212d708 + 16));
  v8 = *(unsigned int**)(*(_QWORD*)(*v7 + 16) + 96LL);
  if (v8 != nullptr) {
    v9 = GameData_212c790;
    v10 = *(_QWORD*)(*GameData_212c790 + 8);
    v11 = *(_DWORD*)(v10 + 56);
    v12 = *(__int64***)(v10 + 8);
    if (v11 < 0) {
      for (i = v12 + 1;; ++i) {
        v13 = *(i - 1);
        if (v13[12] == 0 && v13[69] == 0) {
          break;
        }
      }
    }
    else {
      v13 = *v12;
      if (*((_DWORD*)*v12 + 21) != v11) {
        v14 = (__int64*)(v12 + 1);
        do {
          v15 = *v14++;
          v13 = (__int64*)v15;
        } while (*(_DWORD*)(v15 + 84) != v11);
      }
    }
    v17 = v13[4];
    if (v17 == v13[3] || *(unsigned int**)(v17 - 8) != v8) {
      v18 = *(__int64***)(v10 + 16);
      v19 = v12;
      if (v11 < 0) {
        while (1) {
          v20 = (unsigned int**)*v19;
          if ((*v19)[12] == 0 && v20[69] == nullptr) {
            break;
          }
          if (++v19 == v18) {
          LABEL_25:
            v22 = game_gmap_SpotMgr_GetCurrentSpot();
            v23 = *(_QWORD*)(*v9 + 8);
            v11 = *(_DWORD*)(v23 + 56);
            v12 = *(__int64***)(v23 + 8);
            v18 = *(__int64***)(v23 + 16);
            v24 = v12 == v18;
            if (v11 < 0) {
              goto LABEL_34;
            }
            goto LABEL_26;
          }
        }
      }
      else {
        while (1) {
          v21 = (unsigned int**)*v19++;
          v20 = v21;
          if (*((_DWORD*)v21 + 21) == v11) {
            break;
          }
          if (v19 == v18) {
            goto LABEL_25;
          }
        }
      }
      v22 = *v20;
      v24 = v12 == v18;
      if (v11 < 0) {
      LABEL_34:
        if (!v24) {
          while (1) {
            v25 = *v12;
            if ((*v12)[12] == 0 && v25[69] == 0) {
              break;
            }
            if (++v12 == v18) {
              goto LABEL_36;
            }
          }
        LABEL_37:
          if (v8 == v22) {
            GameRoutine_888970(v25 + 3, 0, 0, 0);
            goto LABEL_243;
          }
          if (game_GameModeData_instance_ != 0 &&
                  *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 ||
              (v296_.v297 = (char*)&GameData_1ab570b,
               v296_.v296 = (char*)game_HashString((__int64)&GameData_1ab570b),
               game_GameModeData_instance_ != 0) &&
                  (v27 = game_GameVariableTable_Find(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)&v296_.v296)) != 0 &&
                  *(_DWORD*)(v27 + 32) != 0) {
            v28 = 1;
          }
          else {
            v28 = 17;
            if ((unsigned __int8)Impl_13261c0(*v25) == 4) {
              v29 = *v25;
              v30 = Impl_13261c0(*v25);
              v31 = (*(_BYTE*)(v29 + 178) & 2) != 0;
              if (v30 != 4) {
                v31 = true;
              }
              if (v31) {
                v28 = 17;
              }
              else {
                v28 = 81;
              }
            }
          }
          v32 = v25[3];
          v296_.v297 = nullptr;
          v296_.v298 = nullptr;
          v296_.v296 = nullptr;
          v33 = v25[4];
          if (v33 == v32) {
            v34 = v25;
          }
          else {
            v34 = (__int64*)(v33 - 8);
          }
          v35 = *v34;
          v36 = (__int64*)fw_memory_g_heap_manager_ptr;
          v37 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
          *(_QWORD*)v37 = v35;
          *(_QWORD*)(v37 + 8) = v8;
          v296_.v296 = (char*)v37;
          v285_.v286 = nullptr;
          v285_.v287 = 0;
          v285_.v285 = nullptr;
          v296_.v297 = (char*)(v37 + 16);
          v296_.v298 = (char*)(v37 + 16);
          SpotMgr_13306e0((void*)(&v289_.v289), &v296_.v296, v28,
                          (char**)&v285_.v285);
          if (v296_.v296 != nullptr) {
            v38 = *v36;
            v296_.v297 = v296_.v296;
            v39 = 128;
            if (*(_QWORD*)(v38 + 200) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free(v38 + v39, (__int64)v296_.v296);
          }
          v40 = v289_.v289;
          v283 = v28;
          v289_.v289 = nullptr;
          v296_.v296 = v40;
          v296_.v297 = v289_.v290;
          v41 = v289_.v291;
          v289_.v290 = nullptr;
          v289_.v291 = nullptr;
          v296_.v298 = v41;
          if (v285_.v285 != nullptr) {
            v42 = *v36;
            v285_.v286 = (char*)v285_.v285;
            v43 = 128;
            if (*(_QWORD*)(v42 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(v42 + v43, (__int64)v285_.v285);
          }
          v45 = v25[3];
          v44 = v25[4];
          if (v44 != v45) {
            v46 = v296_.v296;
            v47 = v296_.v297;
            if (v296_.v297 != v296_.v296) {
              v48 = v44 - v45;
              if (v44 - v45 < 0) {
                goto LABEL_513;
              }
              v49 = fw_memory_HeapManager_Allocate(*v36, v44 - v45, 16, 0);
              v50 = v49 + v48;
              memcpy(v49, v45, v48);
              v51 = (__int64)v47;
              v52 = v47;
              while (1) {
                v54 = *((_QWORD*)v52 - 1);
                v52 -= 8;
                v53 = v54;
                if (v54 == *v25) {
                  break;
                }
                v55 = v48;
                v56 = v49 + 8;
                v57 = v49 + 8;
                while (*(_QWORD*)(v57 - 8) != v53) {
                  v57 += 8;
                  v56 += 8;
                  v55 -= 8LL;
                  if (v55 == 0) {
                    goto LABEL_71;
                  }
                }
                if (v55 != 0) {
                  v60 = &v47[-v51];
                  if (v47 != (char*)v51) {
                    memmove((__int64)v46, v51, (unsigned __int64)&v47[-v51]);
                  }
                  v59 = &v60[(_QWORD)v46];
                  if (v50 != v56) {
                    v50 = v57;
                  }
                  goto LABEL_84;
                }
              LABEL_71:
                v51 = (__int64)v52;
                if (v52 == v46) {
                  goto LABEL_85;
                }
              }
              v58 = &v47[-v51];
              if (v47 != (char*)v51) {
                memmove((__int64)v46, v51, (unsigned __int64)&v47[-v51]);
              }
              v59 = &v58[(_QWORD)v46];
              v50 = v49;
            LABEL_84:
              v296_.v297 = v59;
            LABEL_85:
              v61 = v50 - v49;
              v62 = (v50 - v49) >> 3;
              if (v62 >= 1) {
                v63 = v296_.v297;
                v64 = v296_.v296;
                v65 = v296_.v297 - v296_.v296;
                v66 = (v296_.v297 - v296_.v296) >> 3;
                if ((__int64)v61 <= v296_.v298 - v296_.v297) {
                  if (v62 <= v66) {
                    v80 = &v296_.v296[v61];
                    v81 = &v296_.v297[-v61];
                    v82 = v296_.v297;
                    if ((unsigned __int64)v296_.v297 >= v61) {
                      do {
                        v83 = *(_QWORD*)v81;
                        v81 += 8;
                        *(_QWORD*)v82 = v83;
                        v82 += 8;
                      } while (v81 < v63);
                    }
                    v296_.v297 = v82;
                    if (v63 != v80) {
                      memmove((__int64)&v64[v61], (__int64)v64, v63 - v80);
                    }
                    v84 = (__int64*)v49;
                    do {
                      v85 = *v84++;
                      v61 -= 8LL;
                      *(_QWORD*)v64 = v85;
                      v64 += 8;
                    } while (v61 != 0);
                  }
                  else {
                    v71 = v49 + v65;
                    v72 = v50 - (v49 + v65);
                    if (v72 != 0) {
                      memmove((__int64)v296_.v297, v71, v72);
                    }
                    v73 = &v63[v72];
                    v296_.v297 = &v63[v72];
                    if (v66 >= 1) {
                      v74 = &v64[v61];
                      v75 = &v73[-v61];
                      for (j = &v63[v72]; v75 < v63; j += 8) {
                        v77 = *(_QWORD*)v75;
                        v75 += 8;
                        *(_QWORD*)j = v77;
                      }
                      v296_.v297 = j;
                      if (v73 != v74) {
                        memmove((__int64)&v64[v61], (__int64)v64, v73 - v74);
                      }
                      v78 = (__int64*)v49;
                      do {
                        v79 = *v78++;
                        *(_QWORD*)v64 = v79;
                        v64 += 8;
                      } while (v64 != v63);
                    }
                  }
                }
                else {
                  v67 = v66 + v62;
                  if (v67 >> 61 != 0) {
                    goto LABEL_513;
                  }
                  v68 = v296_.v298 - v296_.v296;
                  if ((v296_.v298 - v296_.v296) >> 2 > v67) {
                    v67 = v68 >> 2;
                  }
                  if ((unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v69 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v69 = v67;
                  }
                  if (v69 != 0) {
                    if (v69 >> 61 != 0) {
                      GameRoutine_60a210();
                    }
                    v70 = (char*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v69, 16, 0);
                  }
                  else {
                    v70 = nullptr;
                  }
                  memcpy((__int64)v70, v49, v61);
                  v86 = (__int64)&v70[v61];
                  memcpy(v86, (__int64)v64, v65);
                  v296_.v298 = &v70[8 * v69];
                  v296_.v296 = v70;
                  v296_.v297 = (char*)(v86 + v65);
                  if (v64 != nullptr) {
                    v87 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v87 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                        (__int64)v64);
                  }
                }
              }
              v88 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v88 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v49);
            }
          }
          v89 = GameData_212c790;
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0 ||
              ((v289_.v290 = (char*)&GameData_1abd4d1,
                v90 = (v296_.v297 - v296_.v296) >> 3,
                v289_.v289 = (char*)game_HashString((__int64)&GameData_1abd4d1),
                game_GameModeData_instance_ == 0) ||
                       (v91 = game_GameVariableTable_Find(
                            *(_QWORD**)(game_GameModeData_instance_ + 48),
                            (unsigned __int64*)&v289_.v289)) == 0
                   ? (v92 = 3)
                   : (v92 = *(int*)(v91 + 32)),
               v90 <= v92)) {
            v93 = (__int64*)v296_.v296;
            v94 = v296_.v297;
            if (v296_.v296 == v296_.v297) {
              goto LABEL_178;
            }
            while (1) {
              v95 = *v93;
              if (*v93 != *((_QWORD*)v296_.v297 - 1) &&
                  (game_GameModeData_instance_ == 0 ||
                   *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
                v289_.v290 = (char*)&GameData_1ab570b;
                v289_.v289 = (char*)game_HashString((__int64)&GameData_1ab570b);
                if ((game_GameModeData_instance_ == 0 ||
                     (v96 = game_GameVariableTable_Find(
                          *(_QWORD**)(game_GameModeData_instance_ + 48),
                          (unsigned __int64*)&v289_.v289)) == 0 ||
                     *(_DWORD*)(v96 + 32) == 0) &&
                    (unsigned __int8)Impl_13261c0(v95) == 4 &&
                    (unsigned __int8)Impl_13261c0(v95) == 4 &&
                    (*(_BYTE*)(v95 + 178) & 2) == 0) {
                  break;
                }
              }
              if (++v93 == (__int64*)v94) {
                goto LABEL_178;
              }
            }
          }
          if (v25[4] == v25[3]) {
          LABEL_178:
            v116 = v296_.v296;
            v117 = v296_.v297;
            if (v296_.v297 == v296_.v296) {
              goto LABEL_239;
            }
            if (game_gmap_GmapClock_instance_ == 0 ||
                *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                        *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                        *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                    0) {
              goto LABEL_203;
            }
            v118 = *(_QWORD*)(*v89 + 8);
            v119 = *(_DWORD*)(v118 + 56);
            v120 = *(unsigned int****)(v118 + 8);
            v121 = *(unsigned int****)(v118 + 16);
            if (v119 < 0) {
              for (; v120 != v121; ++v120) {
                v122 = *v120;
                if ((*v120)[12] == nullptr && v122[69] == nullptr) {
                  goto LABEL_191;
                }
              }
            }
            else if (v120 != v121) {
              while (1) {
                v123 = *v120++;
                v122 = v123;
                if (*((_DWORD*)v123 + 21) == v119) {
                  break;
                }
                if (v120 == v121) {
                  goto LABEL_187;
                }
              }
            LABEL_191:
              v124 = *v122;
              goto LABEL_192;
            }
          LABEL_187:
            v124 = game_gmap_SpotMgr_GetCurrentSpot();
            v116 = v296_.v296;
            v117 = v296_.v297;
          LABEL_192:
            v125 = v117 - v116;
            if (v117 != v116) {
              v126 = *((__int64**)v124 + 6);
              v127 = *((__int64**)v124 + 7);
              if (v126 != v127) {
                v128 = *(_QWORD*)v116;
                while (1) {
                  v129 = *v126++;
                  if (*(_QWORD*)(v129 + 8) == v128) {
                    break;
                  }
                  if (v126 == v127) {
                    goto LABEL_197;
                  }
                }
                v273 = (v125 >> 3) - 1;
                if (v125 >> 3 == 1) {
                  LODWORD(v130) = 1;
                  goto LABEL_198;
                }
                v130 = (unsigned __int64)v125 >> 3;
                v274 = 0;
                while (1) {
                  v275 = *(__int64**)(v128 + 48);
                  v276 = *(__int64**)(v128 + 56);
                  if (v275 == v276) {
                    break;
                  }
                  ++v274;
                  v128 = *(_QWORD*)&v116[8 * v274];
                  while (1) {
                    v277 = *v275++;
                    if (*(_QWORD*)(v277 + 8) == v128) {
                      break;
                    }
                    if (v275 == v276) {
                      goto LABEL_197;
                    }
                  }
                  if (v274 == v273) {
                    goto LABEL_198;
                  }
                }
              }
            }
          LABEL_197:
            LODWORD(v130) = -1;
          LABEL_198:
            v289_.v290 = (char*)&GameData_1abd4d1;
            v289_.v289 = (char*)game_HashString((__int64)&GameData_1abd4d1);
            if (game_GameModeData_instance_ != 0 &&
                (v131 = game_GameVariableTable_Find(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)&v289_.v289)) != 0) {
              v132 = *(_DWORD*)(v131 + 32);
            }
            else {
              v132 = 3;
            }
            if ((int)v130 > v132) {
            LABEL_238:
              v116 = v296_.v296;
            LABEL_239:
              v1 = GameData_21316c8;
              v7 = GameData_212d708;
              if (v116 != nullptr) {
                v296_.v297 = v116;
                v158 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v158 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v158,
                    (__int64)v116);
              }
              goto LABEL_243;
            }
          LABEL_203:
            v133 = *(_QWORD*)(*v89 + 8);
            v134 = *(_DWORD*)(v133 + 56);
            v135 = *(__int64**)(v133 + 8);
            v136 = *(__int64**)(v133 + 16);
            if (v134 < 0) {
              for (; v135 != v136; ++v135) {
                v137 = *v135;
                if (*(_QWORD*)(*v135 + 96) == 0 &&
                    *(_QWORD*)(v137 + 552) == 0) {
                  goto LABEL_210;
                }
              }
            }
            else {
              while (v135 != v136) {
                v138 = *v135++;
                v137 = v138;
                if (*(_DWORD*)(v138 + 84) == v134) {
                  goto LABEL_210;
                }
              }
            }
            v137 = 0;
          LABEL_210:
            v139 = v296_.v296;
            v140 = v296_.v297 - v296_.v296;
            if (v296_.v297 == v296_.v296) {
              v142 = 0;
              v141 = 0;
              goto LABEL_218;
            }
            if ((v140 & 0x8000000000000000LL) == 0) {
              v141 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                  v296_.v297 - v296_.v296, 16, 0);
              v142 = v141 + v140;
              memcpy(v141, (__int64)v139, v140);
            LABEL_218:
              GameRoutine_888970((__int64*)(v137 + 24), v141, v142,
                                 (v142 - v141) >> 3);
              if (v141 != 0) {
                v143 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v143 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v143, v141);
              }
              v144 = game_gmap_GmapClock_kDefaultTime_ptr;
              if (game_gmap_GmapClock_instance_ != 0) {
                v145 = game_gmap_GmapClock_instance_ + 8;
              }
              else {
                v145 = game_gmap_GmapClock_kDefaultTime_ptr;
              }
              v146 = *(_WORD*)(v145 + 6);
              LOWORD(v289_.v289) = *(_WORD*)v145;
              v147 = *(_DWORD*)(v145 + 2);
              HIWORD(v289_.v289) = v146;
              *(_DWORD*)((char*)&v289_.v289 + 2) = v147;
              LOWORD(v147) = *(_WORD*)(v145 + 8);
              WORD1(v289_.v290) = *(_WORD*)(v145 + 10);
              v148 = *v89;
              LOWORD(v289_.v290) = v147;
              v149 = *(_QWORD*)(v148 + 8);
              v150 = *(_DWORD*)(v149 + 56);
              v151 = *(_QWORD*)(v149 + 8);
              if (v150 < 0) {
                while (1) {
                  v152 = *(__int64**)v151;
                  if (*(_QWORD*)(*(_QWORD*)v151 + 96LL) == 0 && v152[69] == 0) {
                    break;
                  }
                  v151 += 8;
                }
              }
              else {
                v154 = *(__int64**)v151;
                v153 = (__int64*)(v151 + 8);
                v152 = v154;
                if (*((_DWORD*)v154 + 21) != v150) {
                  do {
                    v155 = *v153++;
                    v152 = (__int64*)v155;
                  } while (*(_DWORD*)(v155 + 84) != v150);
                }
              }
              v156 = GameHr_1340b20(v152);
              if (v156 != 0) {
                WORD1(v289_.v290) = 0;
                HIWORD(v289_.v289) = v146 + v156;
                Dir_70d7a0((unsigned __int16*)&v289_.v289);
              }
              if (game_gmap_GmapClock_instance_ != 0) {
                v157 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
              }
              else {
                v157 = (__int16*)v144;
              }
              Dir_70dd80((__int16*)&v289_.v289, v157);
              goto LABEL_238;
            }
          LABEL_513:
            GameRoutine_8875e0();
          }
          v97 = *v25;
          v98 = (__int64*)fw_memory_g_heap_manager_ptr;
          v99 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
          *(_QWORD*)v99 = v97;
          *(_QWORD*)(v99 + 8) = v8;
          v285_.v285 = (__int64 (**)(void))v99;
          v293_.v294 = nullptr;
          v293_.v295 = 0;
          v293_.v293 = nullptr;
          v285_.v286 = (char*)(v99 + 16);
          v285_.v287 = v99 + 16;
          SpotMgr_13306e0((void*)(&v289_.v289), (char**)&v285_.v285, v283,
                          &v293_.v293);
          if (v293_.v293 != nullptr) {
            v100 = *v98;
            v293_.v294 = v293_.v293;
            v101 = 128;
            if (*(_QWORD*)(v100 + 200) == 0) {
              v101 = 56;
            }
            nn_mem_StandardAllocator_Free(v100 + v101, (__int64)v293_.v293);
          }
          if (v285_.v285 != nullptr) {
            v102 = *v98;
            v285_.v286 = (char*)v285_.v285;
            v103 = 128;
            if (*(_QWORD*)(v102 + 200) == 0) {
              v103 = 56;
            }
            nn_mem_StandardAllocator_Free(v102 + v103, (__int64)v285_.v285);
          }
          if (game_gmap_GmapClock_instance_ == 0 ||
              *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                      *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                  0 ||
              ((v285_.v286 = (char*)&GameData_1abd4d1,
                v104 = (v289_.v290 - v289_.v289) >> 3,
                v285_.v285 = (__int64 (**)(void))game_HashString(
                    (__int64)&GameData_1abd4d1),
                game_GameModeData_instance_ == 0) ||
                       (v105 = game_GameVariableTable_Find(
                            *(_QWORD**)(game_GameModeData_instance_ + 48),
                            (unsigned __int64*)&v285_.v285)) == 0
                   ? (v106 = 3)
                   : (v106 = *(int*)(v105 + 32)),
               v104 <= v106)) {
            v107 = (__int64*)v289_.v289;
            v108 = (__int64*)v289_.v290;
            if (v289_.v289 == v289_.v290) {
            LABEL_172:
              v113 = (char*)v108 - (char*)v107;
              v111 = (__int64)v107;
              v112 = (__int64)v108;
              goto LABEL_173;
            }
            while (1) {
              v109 = *v107;
              if (*v107 != *((_QWORD*)v289_.v290 - 1) &&
                  (game_GameModeData_instance_ == 0 ||
                   *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
                v285_.v286 = (char*)&GameData_1ab570b;
                v285_.v285 = (__int64 (**)(void))game_HashString(
                    (__int64)&GameData_1ab570b);
                if ((game_GameModeData_instance_ == 0 ||
                     (v110 = game_GameVariableTable_Find(
                          *(_QWORD**)(game_GameModeData_instance_ + 48),
                          (unsigned __int64*)&v285_.v285)) == 0 ||
                     *(_DWORD*)(v110 + 32) == 0) &&
                    (unsigned __int8)Impl_13261c0(v109) == 4 &&
                    (unsigned __int8)Impl_13261c0(v109) == 4 &&
                    (*(_BYTE*)(v109 + 178) & 2) == 0) {
                  break;
                }
              }
              if (++v107 == v108) {
                v107 = (__int64*)v289_.v289;
                v108 = (__int64*)v289_.v290;
                goto LABEL_172;
              }
            }
          }
          if (&v296_.v296 != (char**)(v25 + 3)) {
            v111 = v25[3];
            v112 = v25[4];
            v113 = v112 - v111;
          LABEL_173:
            GameRoutine_888970((__int64*)&v296_.v296, v111, v112, v113 >> 3);
          }
          if (v289_.v289 != nullptr) {
            v114 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
            v289_.v290 = v289_.v289;
            v115 = 128;
            if (*(_QWORD*)(v114 + 200) == 0) {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free(v114 + v115, (__int64)v289_.v289);
          }
          goto LABEL_178;
        }
      }
      else {
      LABEL_26:
        if (!v24) {
          do {
            v26 = *v12++;
            v25 = v26;
            if (*((_DWORD*)v26 + 21) == v11) {
              goto LABEL_37;
            }
          } while (v12 != v18);
        }
      }
    LABEL_36:
      v25 = nullptr;
      goto LABEL_37;
    }
  }
LABEL_243:
  v159 = *(_QWORD*)(*v7 + 16);
  if ((*(_BYTE*)(v159 + 169) & 1) == 0) {
    v160 = **(_QWORD**)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v160 + 40LL))(v160);
  }
  *(_BYTE*)(v159 + 169) = 1;
  v161 = GameData_2258178;
  v162 = game_g_game_setting_ptr;
  v163 = *(_BYTE**)game_g_game_setting_ptr;
  if (GameData_2258178 != 0) {
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
        ((v163[804] & 1) != 0 ||
         v163[940] == 1 && v163[805] == 1 && (v163[806] & 1) != 0)) {
      v164 = *(_BYTE*)(GameData_2258178 + 452) & 1;
    }
    else if (v163[903] == 1 &&
             ((v163[900] & 1) != 0 ||
              v163[940] == 1 && v163[901] == 1 && (v163[902] & 1) != 0)) {
      v164 = *(_BYTE*)(GameData_2258178 + 512) & 1;
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) == 0) {
        v165 = 0;
        goto LABEL_266;
      }
    }
    else {
      v164 = 0;
      v165 = 0;
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
        goto LABEL_266;
      }
    }
  }
  else {
    v164 = 0;
    v165 = 0;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) == 0) {
      goto LABEL_266;
    }
  }
  if ((v163[804] & 1) != 0) {
    goto LABEL_282;
  }
  v165 = 1;
  if (v163[940] == 1 && (v163[805] & 1) != 0 && (v163[806] & 1) != 0) {
    goto LABEL_274;
  }
LABEL_266:
  if ((v163[903] != 1 ||
       (v163[900] & 1) == 0 &&
           (v163[940] != 1 || (v163[901] & 1) == 0 || (v163[902] & 1) == 0)) &&
      (v163[952] & 1) != 0) {
  LABEL_310:
    if (v164 != 0) {
      v177 = *(_QWORD*)(*GameData_212c790 + 8);
      v178 = *(_DWORD*)(v177 + 56);
      v179 = *(_QWORD**)(v177 + 8);
      v180 = *(_QWORD**)(v177 + 16);
      if (v178 < 0) {
        if (v179 == v180) {
          goto LABEL_339;
        }
        for (k = v179 + 1;; ++k) {
          v181 = (_QWORD*)*(k - 1);
          if (v181[12] == 0 && v181[69] == 0) {
            break;
          }
        }
      }
      else {
        if (v179 == v180) {
          goto LABEL_339;
        }
        v181 = (_QWORD*)*v179;
        if (*(_DWORD*)(*v179 + 84LL) != v178) {
          v182 = v179 + 1;
          do {
            v183 = *v182++;
            v181 = (_QWORD*)v183;
          } while (*(_DWORD*)(v183 + 84) != v178);
        }
      }
      if (v181[4] != v181[3]) {
        if (v178 < 0) {
          for (m = v179 + 1;; ++m) {
            v201 = (_QWORD*)*(m - 1);
            if (v201[12] == 0 && v201[69] == 0) {
              break;
            }
          }
        }
        else {
          v202 = *v179;
          v200 = v179 + 1;
          v201 = (_QWORD*)v202;
          if (*(_DWORD*)(v202 + 84) != v178) {
            do {
              v203 = *v200++;
              v201 = (_QWORD*)v203;
            } while (*(_DWORD*)(v203 + 84) != v178);
          }
        }
        v230 = v201[4];
        if (v230 == v201[3]) {
          v204 = 0;
        }
        else {
          v204 = *(_QWORD*)(v230 - 8);
        }
      LABEL_340:
        if (v165 == 0 ||
            (v163[804] & 1) == 0 && (v163[940] != 1 || (v163[805] & 1) == 0 ||
                                     (v163[806] & 1) == 0)) {
          if (v163[903] != 1 ||
              (v163[900] & 1) == 0 &&
                  (v163[940] != 1 || (v163[901] & 1) == 0 || v163[902] != 1)) {
            goto LABEL_421;
          }
          if (v165 == 0) {
            goto LABEL_403;
          }
        }
        if ((v163[804] & 1) != 0 ||
            v163[940] == 1 && v163[805] == 1 && (v163[806] & 1) != 0) {
          v205 = 764;
        }
        else {
        LABEL_403:
          if (v163[903] != 1 ||
              (v163[900] & 1) == 0 &&
                  (v163[940] != 1 || v163[901] != 1 || v163[902] != 1)) {
            goto LABEL_421;
          }
          v205 = 860;
        }
        if (GameData_2258178 != 0 && (*(_DWORD*)&v163[v205] & 1) != 0) {
          if (v165 != 0 &&
              ((v163[804] & 1) != 0 ||
               v163[940] == 1 && v163[805] == 1 && v163[806] == 1)) {
            *(_DWORD*)(GameData_2258178 + 456) |= 1u;
          }
          if (v163[903] == 1 &&
              ((v163[900] & 1) != 0 ||
               v163[940] == 1 && v163[901] == 1 && v163[902] == 1)) {
            *(_DWORD*)(v161 + 516) |= 1u;
          }
        }
      LABEL_421:
        if (v204 == 0) {
          goto LABEL_458;
        }
        v231 = GameData_212c790;
        v232 = *(_QWORD*)(*GameData_212c790 + 8);
        v233 = *(_DWORD*)(v232 + 56);
        v234 = *(__int64**)(v232 + 8);
        v235 = *(__int64**)(v232 + 16);
        if (v233 < 0) {
          if (v234 != v235) {
            while (1) {
              v236 = (_QWORD*)*v234;
              if (*(_QWORD*)(*v234 + 96) == 0 && v236[69] == 0) {
                break;
              }
              if (++v234 == v235) {
                goto LABEL_428;
              }
            }
          LABEL_450:
            if (v204 == *v236) {
            LABEL_451:
              snd_Fade_Fade_10c830((__int64)&v296_.v296, 0x0.0p+0f);
              snd_play_ff2d0((__int64)"SE_SYS_GMAP_Decide_Spot",
                             (__int64)"SE_SYS_GMAP_Decide_Spot", 0x0.0p+0f,
                             0x1.0000000000000p+0f, (__int64)&v296_.v296, 0,
                             0x10001u, 0);
              snd_Fade_Destroy_Fade(&v296_.v296);
              *(_DWORD*)(*(_QWORD*)v1 + 152LL) = 6;
              v251 = *(_QWORD*)(*v7 + 16);
              if (*(_BYTE*)(v251 + 169) == 1) {
                v252 = **(_QWORD**)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL);
                (*(void (**)(__int64))(*(_QWORD*)v252 + 48LL))(v252);
              }
              v253 = *v231;
              *(_BYTE*)(v251 + 169) = 0;
              v254 = *(_QWORD*)(v253 + 8);
              v255 = *(__int64**)(v254 + 8);
              v256 = *(__int64**)(v254 + 16);
              v257 = *(_DWORD*)(v254 + 56);
              if (v257 < 0) {
                for (; v255 != v256; ++v255) {
                  v258 = (__int64*)*v255;
                  if (*(_QWORD*)(*v255 + 96) == 0 && v258[69] == 0) {
                    goto LABEL_468;
                  }
                }
              }
              else {
                while (v255 != v256) {
                  v259 = (__int64*)*v255++;
                  v258 = v259;
                  if (*((_DWORD*)v259 + 21) == v257) {
                    goto LABEL_468;
                  }
                }
              }
              v258 = nullptr;
            LABEL_468:
              if ((v258[12] | v258[69]) == 0) {
                v264 = *((_DWORD*)v258 + 135);
                v265 = __OFSUB__(v264, 1);
                v266 = (unsigned int)(v264 - 1);
                if (((v266 & 0x80000000) != 0LL) == v265) {
                  v267 = v258[3];
                  v268 = v258[4] - v267;
                  v269 = (__int64*)(v267 + 8LL * (unsigned int)v266);
                  if (v266 < v268 >> 3) {
                    v258 = v269;
                  }
                }
                v270 = *v258;
                v271 = *(_QWORD*)(*v258 + 280);
                if (v271 != 0 &&
                    ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v271 + 24LL))(
                         v271) != 1 ||
                     ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v270 + 280) +
                                               112LL))(*(_QWORD*)(v270 + 280)) &
                      1) == 0)) {
                  v272 = *(_QWORD*)(v270 + 280);
                  if (v272 != 0 &&
                      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v272 + 64LL))(
                          v272) == 5 &&
                      ((*(__int64 (**)(__int64))(*(_QWORD*)v272 + 48LL))(v272) &
                       1) != 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v272 + 72LL))(v272);
                    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) =
                        1;
                  }
                }
              }
              return;
            }
          LABEL_429:
            v238 = *(_QWORD*)(*v231 + 8);
            v239 = *(_DWORD*)(v238 + 56);
            v240 = *(__int64**)(v238 + 8);
            if (v239 < 0) {
              while (1) {
                v242 = (_QWORD*)*v240;
                if (*(_QWORD*)(*v240 + 96) == 0 && v242[69] == 0) {
                  break;
                }
                ++v240;
              }
            }
            else {
              v243 = *v240;
              v241 = v240 + 1;
              v242 = (_QWORD*)v243;
              if (*(_DWORD*)(v243 + 84) != v239) {
                do {
                  v244 = *v241++;
                  v242 = (_QWORD*)v244;
                } while (*(_DWORD*)(v244 + 84) != v239);
              }
            }
            if (v242[4] != v242[3]) {
              v245 = *(unsigned __int8*)(v204 + 176);
              if (v245 != 2 &&
                  (v245 != 3 || (*(_BYTE*)(v204 + 112) & 1) == 0)) {
                v246 = TroopMgr_1345b40();
                if (*(_QWORD*)(v246 + 32) != *(_QWORD*)(v246 + 24)) {
                  v247 = TroopMgr_1345b40();
                  v248 = Troop_1343230(v247);
                  if ((Spot_132ac40(v248, 1) & 1) != 0 &&
                      game_gmap_GmapClock_instance_ != 0 &&
                      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                          0) {
                    v293_.v293 = "MID_NextSelect_Main";
                    v289_.v292 = &v289_.v289;
                    v285_.v288 = (char**)&v285_.v285;
                    v296_.v296 = (char*)GameData_204bf80;
                    v296_.v297 = a1;
                    v296_.v299 = &v296_.v296;
                    v289_.v289 = (char*)GameData_204c000;
                    v285_.v285 = GameData_204c000;
                    v249 = MapSortieMenu_871860(
                        (__int64)a1, (__int64)&v293_.v293, (__int64)&v296_.v296,
                        (__int64)&v289_.v289, (__int64)&v285_.v285);
                    if (v285_.v288 == (char**)&v285_.v285) {
                      v250 = 32;
                    }
                    else {
                      if (v285_.v288 == nullptr) {
                        goto LABEL_497;
                      }
                      v250 = 40;
                    }
                    (*(void (**)(void)) & (*v285_.v288)[v250])();
                  LABEL_497:
                    if (v289_.v292 == &v289_.v289) {
                      v278 = 32;
                    }
                    else {
                      if (v289_.v292 == nullptr) {
                        goto LABEL_502;
                      }
                      v278 = 40;
                    }
                    (*(void (**)(void)) & (*v289_.v292)[v278])();
                  LABEL_502:
                    if (v296_.v299 == &v296_.v296) {
                      v279 = 32;
                    }
                    else {
                      if (v296_.v299 == nullptr) {
                        goto LABEL_507;
                      }
                      v279 = 40;
                    }
                    (*(void (**)(void)) & (*v296_.v299)[v279])();
                  LABEL_507:
                    v296_.v299 = &v296_.v296;
                    v296_.v296 = (char*)(GameData_212d2b8 + 2);
                    v296_.v297 = (char*)game_sound_PlayDecideLightSe_ptr[0];
                    ProcGmapMove_1549f60((__int64)v249, (__int64)&v296_.v296);
                    if (v296_.v299 == &v296_.v296) {
                      v280 = 32;
                    }
                    else {
                      if (v296_.v299 == nullptr) {
                      LABEL_512:
                        v281 = TroopMgr_1345b40();
                        v282 = Troop_1343230(v281);
                        *(_BYTE*)(v282 + 178) |= 1u;
                        return;
                      }
                      v280 = 40;
                    }
                    (*(void (**)(void)) & (*v296_.v299)[v280])();
                    goto LABEL_512;
                  }
                }
                v260 = TroopMgr_1345b40();
                if (*(_QWORD*)(v260 + 32) == *(_QWORD*)(v260 + 24) ||
                    *(_QWORD*)(*(_QWORD*)(TroopMgr_1345b40() + 32) - 8LL) ==
                        v204) {
                  v261 = TroopMgr_1345b40();
                  if (*(_QWORD*)(v261 + 32) != *(_QWORD*)(v261 + 24) ||
                      TroopMgr_1346380() == (unsigned int*)v204) {
                    GameRoutine_1530850();
                    *(_DWORD*)(*(_QWORD*)v1 + 152LL) = 4;
                    v223 = a1;
                    v262 = *((unsigned __int8**)a1 + 2);
                    if (v262 == nullptr) {
                      return;
                    }
                    v263 = *v262;
                    if (v263 > 0x10 || ((1 << v263) & 0x1CE00) == 0) {
                      return;
                    }
                  LABEL_400:
                    *((_WORD*)v223 + 68) |= 0x80u;
                    return;
                  }
                }
              }
              GameRoutine_15308b0();
              return;
            }
          LABEL_458:
            snd_Fade_Fade_10c830((__int64)&v296_.v296, 0x0.0p+0f);
            snd_play_ff2d0((__int64)"SE_SYS_GMAP_Decide_NG",
                           (__int64)"SE_SYS_GMAP_Decide_NG", 0x0.0p+0f,
                           0x1.0000000000000p+0f, (__int64)&v296_.v296, 0,
                           0x10001u, 0);
            snd_Fade_Destroy_Fade(&v296_.v296);
            return;
          }
        }
        else {
          while (v234 != v235) {
            v237 = *v234++;
            v236 = (_QWORD*)v237;
            if (*(_DWORD*)(v237 + 84) == v233) {
              goto LABEL_450;
            }
          }
        }
      LABEL_428:
        if ((unsigned int*)v204 == game_gmap_SpotMgr_GetCurrentSpot()) {
          goto LABEL_451;
        }
        goto LABEL_429;
      }
    }
  LABEL_339:
    v204 = *(_QWORD*)(*(_QWORD*)(*v7 + 16) + 96LL);
    goto LABEL_340;
  }
  if (v165 == 0) {
    v166 = 0;
    if (v163[903] == 0) {
      goto LABEL_301;
    }
    goto LABEL_280;
  }
  if ((v163[804] & 1) != 0) {
  LABEL_282:
    if ((v163[804] & 1) != 0) {
      v165 = 1;
      v167 = 764;
    LABEL_292:
      v166 = v163[v167] & 1;
      goto LABEL_301;
    }
    if (v163[940] == 1 && (v165 = (unsigned __int8)v163[805]) == 1) {
      if ((v163[806] & 1) != 0) {
        v167 = 764;
        goto LABEL_292;
      }
    }
    else {
      v165 = 1;
    }
  LABEL_289:
    if (v163[903] != 1 ||
        (v163[900] & 1) == 0 &&
            (v163[940] != 1 || v163[901] != 1 || v163[902] != 1)) {
      goto LABEL_300;
    }
    v167 = 860;
    goto LABEL_292;
  }
LABEL_274:
  if (v163[940] == 1 && (v163[805] & 1) != 0 && (v163[806] & 1) != 0) {
    goto LABEL_282;
  }
  v165 = 1;
  if ((v163[903] & 1) == 0) {
    goto LABEL_300;
  }
LABEL_280:
  if ((v163[900] & 1) != 0) {
    goto LABEL_281;
  }
  v166 = 0;
  if (v163[940] == 1 && (v163[901] & 1) != 0) {
    if (v163[902] != 1) {
    LABEL_300:
      v166 = 0;
      goto LABEL_301;
    }
  LABEL_281:
    if (v165 == 0) {
      goto LABEL_289;
    }
    goto LABEL_282;
  }
LABEL_301:
  if ((v164 & 1) != 0 || v166 != 0) {
    goto LABEL_310;
  }
  v168 = *((_DWORD*)v163 + 238);
  if ((v168 & 2) == 0) {
    if ((v168 & 0x3000) != 0) {
      v296_.v297 = (char*)&GameData_1ade186;
      v296_.v296 = (char*)game_HashString((__int64)&GameData_1ade186);
      if (game_GameModeData_instance_ != 0) {
        v169 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v296_.v296);
        if (v169 != 0 && *(int*)(v169 + 32) >= 1) {
          v170 = game_gmap_TroopMgr_GetAroundTroop(
              (*(_DWORD*)(*(_QWORD*)v162 + 952LL) & 0x1000) == 0);
          if (v170 != 0) {
            v171 = (float32x4_t*)v170;
            v172 = TroopMgr_1345b40();
            GameRoutine_888970((__int64*)(v172 + 24), 0, 0, 0);
            *(_QWORD*)(TroopMgr_1345b40() + 16) = 0;
            TroopMgr_13463f0(LANES128(v171[5]).n128_u32[1]);
            TroopMgr_134d2e0(*(_QWORD*)(*GameData_212c790 + 8));
            v173 = *v7;
            *(_BYTE*)(*(_QWORD*)(*v7 + 16) + 176LL) = 1;
            GameRoutine_1317f10(*(float32x4_t**)(v173 + 16), v171 + 3);
            GameRoutine_1530910();
            UnitActor_81a540((__int64)&v171[7], 0x783C0ED4u,
                             (__int64)GameData_212ceb8);
            v174 = *GameData_212d700[0];
            v175 = *(_QWORD*)(*GameData_212d700[0] + 8);
            v176 = *(_QWORD*)(v175 + 72);
            *(_BYTE*)(v175 + 58) = 0;
            *(_QWORD*)(v175 + 80) = v176;
            game_gmap_1539fc0(*(_QWORD*)(v174 + 8));
          }
        }
      }
    }
    else if ((v168 & 0x400) != 0 && game_gmap_GmapClock_instance_ != 0 &&
             *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                     *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                     *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                 0 &&
             *(_BYTE*)(*GameData_2130e70 + 59) == 1) {
      v206 = *(_QWORD*)(*v7 + 16);
      v207 = *(_QWORD*)(v206 + 96);
      if (v207 != 0 &&
          (game_gmap_GmapShopGuideTopMenu_HasShopGuide(*(_QWORD*)(v206 + 96)) &
           1) != 0) {
        v208 = *(_QWORD*)(*v7 + 16);
        if (*(_BYTE*)(v208 + 169) == 1) {
          v209 = **(_QWORD**)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL);
          (*(void (**)(__int64))(*(_QWORD*)v209 + 48LL))(v209);
        }
        *(_BYTE*)(v208 + 169) = 0;
        GameRoutine_1530790();
        GameRoutine_19023d0((__int64)a1, v207);
      }
    }
    return;
  }
  game_HashString((__int64)&GameData_1ac8821);
  v184 = GameData_212c790;
  v185 = *(_QWORD*)(*GameData_212c790 + 8);
  v186 = *(_DWORD*)(v185 + 56);
  v187 = *(__int64**)(v185 + 8);
  if (v186 < 0) {
    while (1) {
      v189 = *v187;
      if (*(_QWORD*)(*v187 + 96) == 0 && *(_QWORD*)(v189 + 552) == 0) {
        break;
      }
      ++v187;
    }
  }
  else {
    v190 = *v187;
    v188 = v187 + 1;
    v189 = v190;
    if (*(_DWORD*)(v190 + 84) != v186) {
      do {
        v191 = *v188++;
        v189 = v191;
      } while (*(_DWORD*)(v191 + 84) != v186);
    }
  }
  GameRoutine_888970((__int64*)(v189 + 24), 0, 0, 0);
  v192 = *v184;
  v193 = *(_QWORD*)(*v184 + 8);
  v194 = *(_DWORD*)(v193 + 56);
  v195 = *(float32x4_t***)(v193 + 8);
  v196 = *(float32x4_t***)(v193 + 16);
  if ((v194 & 0x80000000) == 0) {
    if (v195 == v196) {
      goto LABEL_380;
    }
    while (1) {
      v198 = *v195++;
      v197 = v198;
      if (LANES128(v198[5]).n128_u32[1] == v194) {
        goto LABEL_379;
      }
      if (v195 == v196) {
        goto LABEL_380;
      }
    }
  }
  if (v195 != v196) {
    while (1) {
      v197 = *v195;
      if (LANES128((*v195)[6]).n128_u64[0] == 0 &&
          LANES128(v197[34]).n128_u64[1] == 0) {
        break;
      }
      if (++v195 == v196) {
        goto LABEL_380;
      }
    }
  LABEL_379:
    GameRoutine_1317f10(*(float32x4_t**)(*v7 + 16), v197 + 3);
    v192 = *v184;
  }
LABEL_380:
  *(_BYTE*)(*(_QWORD*)(*v7 + 16) + 170LL) = 0;
  v210 = *(_QWORD*)(v192 + 8);
  v211 = *(_DWORD*)(v210 + 56);
  v212 = *(__int64**)(v210 + 8);
  if (v211 < 0) {
    while (1) {
      v214 = *v212;
      if (*(_QWORD*)(*v212 + 96) == 0 && *(_QWORD*)(v214 + 552) == 0) {
        break;
      }
      ++v212;
    }
  }
  else {
    v215 = *v212;
    v213 = v212 + 1;
    v214 = v215;
    if (*(_DWORD*)(v215 + 84) != v211) {
      do {
        v216 = *v213++;
        v214 = v216;
      } while (*(_DWORD*)(v216 + 84) != v211);
    }
  }
  UnitActor_81a540(v214 + 112, 0x723D4B8u, (__int64)GameData_212ceb8);
  snd_Fade_Fade_10c830((__int64)&v296_.v296, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_GMAP_Cancel_Unit",
                 (__int64)"SE_SYS_GMAP_Cancel_Unit", 0x0.0p+0f,
                 0x1.0000000000000p+0f, (__int64)&v296_.v296, 0, 0x10001u, 0);
  snd_Fade_Destroy_Fade(&v296_.v296);
  *(_DWORD*)(*(_QWORD*)v1 + 152LL) = 2;
  v217 = *(_QWORD*)(*v184 + 8);
  v218 = *(_DWORD*)(v217 + 56);
  v219 = *(__int64**)(v217 + 8);
  if (v218 < 0) {
    v223 = a1;
    while (1) {
      v221 = *v219;
      if (*(_QWORD*)(*v219 + 96) == 0 && *(_QWORD*)(v221 + 552) == 0) {
        break;
      }
      ++v219;
    }
  }
  else {
    v222 = *v219;
    v220 = v219 + 1;
    v221 = v222;
    v223 = a1;
    if (*(_DWORD*)(v222 + 84) != v218) {
      do {
        v224 = *v220++;
        v221 = v224;
      } while (*(_DWORD*)(v224 + 84) != v218);
    }
  }
  *(_QWORD*)(v221 + 16) = 0;
  v225 = *((unsigned __int8**)v223 + 2);
  if (v225 != nullptr) {
    v226 = *v225;
    v4 = v226 > 0x10;
    v227 = (1 << v226) & 0x1CE00;
    if (!v4 && v227 != 0) {
      goto LABEL_400;
    }
  }
}

void game_gmap_154f6c0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  __int64 (*v10)();
  __int64 (*v11)();
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  unsigned int* v17;
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)();
  __int64 v25;
  struct {
    __int64 (*v26)();
    __int64 (*v27)();
  } v26_;

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    return;
  }
  if (*(_BYTE*)(game_GameModeData_instance_ + 57) == 4) {
    *(_BYTE*)(game_GameModeData_instance_ + 57) = 0;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        goto LABEL_15;
      }
    }
  LABEL_11:
    v8 = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_16;
  }
  if (v4 == v5) {
    goto LABEL_11;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      break;
    }
    if (v4 == v5) {
      goto LABEL_11;
    }
  }
LABEL_15:
  v8 = *(unsigned int**)v6;
LABEL_16:
  if ((unsigned __int8)Impl_13261c0((__int64)v8) != 4 ||
      (*((_BYTE*)v8 + 178) & 2) != 0) {
    goto LABEL_26;
  }
  TroopMgr_134b820((void*)(&v26_.v26), *(_QWORD*)(a1 + 152));
  v10 = v26_.v26;
  v11 = v26_.v27;
  if (v26_.v26 == v26_.v27) {
    if (v26_.v26 == nullptr) {
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  do {
    v15 = (__int64*)(*(_QWORD*)v10 + 24LL);
    v16 = *(_QWORD*)(*(_QWORD*)v10 + 32LL);
    if (v16 != *v15) {
      *(_QWORD*)(*(_QWORD*)v10 + 8LL) = *(_QWORD*)(v16 - 8);
      GameRoutine_888970(v15, 0, 0, 0);
    }
    v10 = (__int64 (*)())((char*)v10 + 8);
  } while (v10 != v11);
  v10 = v26_.v26;
  if (v26_.v26 != nullptr) {
  LABEL_23:
    v26_.v27 = v10;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v10);
  }
LABEL_26:
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0xC) == 0) {
    v13 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 120LL);
    v14 = (_QWORD*)GameRoutine_ae0560();
    if (v13 == v14) {
      if (game_GameModeData_instance_ == 0 ||
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
        return;
      }
    }
    else if (game_GameModeData_instance_ == 0) {
      return;
    }
    if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
      if (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 129LL) == 1) {
        v17 = TroopMgr_134c680(v14);
        GameRoutine_134b980((void*)(&v26_.v26), (__int64 (*)())v17);
        v18 = v26_.v26;
        v19 = v26_.v27;
        if (v26_.v26 != v26_.v27) {
          v20 = v26_.v26;
          do {
            v21 = *(_WORD*)(*(_QWORD*)v20 + 544LL);
            if ((v21 & 0x40) == 0) {
              *(_WORD*)(*(_QWORD*)v20 + 544LL) = v21 | 0x40;
            }
            v20 = (__int64 (*)())((char*)v20 + 8);
          } while (v20 != v19);
        }
        if (v18 != nullptr) {
          v26_.v27 = v18;
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v18);
        }
      }
      v26_.v27 = (__int64 (*)())&GameData_1ade186;
      v26_.v26 = (__int64 (*)())game_HashString((__int64)&GameData_1ade186);
      if (game_GameModeData_instance_ != 0) {
        v23 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v26_.v26);
        if (v23 != 0 && *(int*)(v23 + 32) >= 1) {
          TroopMgr_134b820((void*)(&v26_.v26), *(_QWORD*)(a1 + 152));
          v24 = v26_.v26;
          if (v26_.v27 != v26_.v26) {
            TroopMgr_13463f0(*(unsigned int*)(*(_QWORD*)v26_.v26 + 84LL));
            v24 = v26_.v26;
          }
          if (v24 != nullptr) {
            v26_.v27 = v24;
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v24);
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
