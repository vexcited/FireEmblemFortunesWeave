#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_134b820(PSEUDO_X8, _QWORD);
__int64 GameRoutine_120dd60(_QWORD);
__int64 GameRoutine_134c680(void);
__int64 GameRoutine_14c46a0(_QWORD, _QWORD);
__int64 GameRoutine_14c6620(_QWORD);
__int64 GameRoutine_1531110(__int64, __int64, long double);
__int64 GameRoutine_1531270(__int64 result, long double);
__int64 GameRoutine_153a260(__int64, __int64);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_718130(_QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1ab570b;
extern __int64 GameData_212d748[2];
extern __int64 GameData_212d750;
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1648;
extern __int64 GameData_22506e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212c790;
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d728[2];
__int64 ProcGmapMove_1549420(long double a1);
__int64 ProcGmapMove_1549800(__int64 result);
__int64 ProcGmapMove_1549820(__int64 result);
__int64 ProcGmapMove_1549a40();
__int64 ProcGmapMove_1549ac0(__int64 result);
__int64 ProcGmapMove_1549c60(__int64 result);
__int64 ProcGmapMove_1549e60_alt1() __asm__("ProcGmapMove_1549e60");
__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure_Invoke(__int64 a1,
                                                                long double a2);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 Cursor_734a80(_QWORD, _QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_13407e0(__int64 result, long double, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
extern _UNKNOWN GameData_216de68;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d708;
extern __int64 GameData_21f1628;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void game_gmap_133f280(__int64);
__int64 ProcGmapMove_1549b00(__int64 result);
__int64 ProcGmapMove_1549f60(__int64 a1, __int64 a2);
__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure0_Invoke(__int64 a1);
__int64 ProcGmapMove_154ac20(__int64 a1, __n128 a2, long double a3);
void ProcGmapMove_154b040();
__int64 GameRoutine_17bcf90(_QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 TroopMgr_134d2e0(_QWORD);
extern __int64 GameData_21c9700;
extern __int64 GameData_21f1650;
extern __int64 GameData_21f1658;
__int64 ProcGmapMove_1547480(__int64 a1);
__int64 ProcGmapMove_1549620_alt1() __asm__("ProcGmapMove_1549620");
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__int64 SpotMgr_1333f20_alt1(__int64) __asm__("SpotMgr_1333f20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
bool GameHr_995200(__int64);
bool GameVariable_718130(__int64, __int64);
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
unsigned int* TroopMgr_134c680();
void SpotMgr_1334560_alt1(__int64) __asm__("SpotMgr_1334560");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapMove_1549620();
unsigned int* ProcGmapMove_1549e60();
__int64* GameRoutine_888970(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 GameRoutine_133f460(__int64);
__int64 GameRoutine_13412c0(float32x4_t*, float32x4_t*, float);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_14cced0(__int64);
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 GameRoutine_714b20(_QWORD*);
__int64 GameRoutine_889be0(__int64);
__int64 GmapSound_1531270(__int64 result);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 TroopMgr_134d2e0_alt1(__int64) __asm__("TroopMgr_134d2e0");
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_133f280_alt1(__int64) __asm__("game_gmap_133f280");
__int64 game_gmap_1340560(__int64 result, char);
__int64 game_gmap_1341d60(__int64, char);
__int64 game_telop_175bde0(__int64*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1abd4d1;
extern __int64 (*GameData_204bcf8[])();
extern __int64 (*GameData_204bd78[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d6f8[3];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2131860;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_135bea0();
unsigned __int64 game_19a0e60(__int64);
void GameHr_14c6620(__int64);
void GameRoutine_17bcf90_alt1() __asm__("GameRoutine_17bcf90");
void GameSubquestData_125a1a0(__int64, __int64*, __int64, char);
void snd_Fade_Fade_10c830(__int64, float);
void game_gmap_ProcGmapMove_CheckContinueMove(__int64 a1);

__int64 ProcGmapMove_1547480(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;

  *(_DWORD*)(a1 + 216) = 0;
  v1 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v1 + 169) == 1) {
    v2 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  *(_BYTE*)(v1 + 169) = 0;
  v3 = GameData_212c790;
  v4 = *GameData_212c790;
  *(_BYTE*)(*(_QWORD*)(*GameData_212c790 + 8) + 60LL) = 1;
  v5 = TroopMgr_134d2e0(*(_QWORD*)(v4 + 8));
  v6 = GameData_212d728[0];
  v7 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v7 + 8) + 5837LL) = 1;
  result = GameRoutine_17bcf90(v5);
  v9 = *v6;
  *(_DWORD*)(*(_QWORD*)(*v6 + 8) + 5856LL) |= 0x10u;
  *(_DWORD*)(*(_QWORD*)(v9 + 8) + 5856LL) &= ~0x10u;
  v10 = *(_QWORD*)(*v3 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  v13 = *(__int64**)(v10 + 16);
  if ((v11 & 0x80000000) == 0) {
    while (v12 != v13) {
      v15 = (__int64*)*v12++;
      v14 = v15;
      if (*((_DWORD*)v15 + 21) == v11) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    v14 = nullptr;
    goto LABEL_10;
  }
  if (v12 == v13) {
    goto LABEL_9;
  }
  while (1) {
    v14 = (__int64*)*v12;
    if (*(_QWORD*)(*v12 + 96) == 0 && v14[69] == 0) {
      break;
    }
    if (++v12 == v13) {
      goto LABEL_9;
    }
  }
LABEL_10:
  if ((v14[12] | v14[69]) == 0) {
    v16 = *((_DWORD*)v14 + 135);
    v17 = __OFSUB__(v16, 1);
    v18 = (unsigned int)(v16 - 1);
    if (((v18 & 0x80000000) != 0LL) == v17) {
      v19 = v14[3];
      v20 = v14[4] - v19;
      v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
      if (v18 < v20 >> 3) {
        v14 = v21;
      }
    }
    v22 = *v14;
    result = *(_QWORD*)(*v14 + 280);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
      if ((unsigned __int8)result != 1 ||
          ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v22 + 280) + 112LL))(
                *(_QWORD*)(v22 + 280))) &
           1) == 0) {
        v23 = *(_QWORD*)(v22 + 280);
        if (v23 != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 64LL))(v23);
          if ((unsigned __int8)result == 5) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23);
            if ((result & 1) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 72LL))(v23);
              *(_BYTE*)(*(_QWORD*)(*v6 + 8) + 5835LL) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}

void game_gmap_ProcGmapMove_CheckContinueMove(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  _QWORD* v2;
  __int64 v3;
  int v4;
  float* v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  float v12;
  float v13;
  int v14;
  int v15;
  float32x4_t* v16;
  signed __int32 v17;
  float32x4_t* v18;
  __int64 v19;
  float32x4_t* v20;
  unsigned __int64 v21;
  __int64 v22;
  int v23;
  float32x4_t** v24;
  float32x4_t** v25;
  float32x4_t* v26;
  float32x4_t** v27;
  float32x4_t* v28;
  float32x4_t* v29;
  float32x4_t** v30;
  float32x4_t* v31;
  float v32;
  float v33;
  float32x4_t* v34;
  __int64 v35;
  int v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  float32x4_t** v42;
  float32x4_t* v43;
  float32x4_t* v44;
  float32x4_t** v45;
  float32x4_t* v46;
  float32x4_t* v47;
  _QWORD* i;
  _QWORD* v49;
  float32x4_t** v50;
  __int64* v51;
  __int64* v52;
  float32x4_t* v53;
  __int64 v54;
  float32x4_t* v55;
  float v56;
  float32x4_t* v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t* v60;
  float v61;
  float v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char v73;
  __int64 v74;
  int v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64* v82;
  __int64* v83;
  _QWORD* v84;
  int v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64* v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  float32x4_t** v98;
  float32x4_t* v99;
  float32x4_t* v100;
  __int64 v101;
  int v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64* j;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64* v118;
  __int64* v119;
  int v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  __int64* k;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  int v128;
  bool v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  _QWORD* v140;
  float* v141;
  __int64 v142;
  __int64* v143;
  unsigned __int64 v144;
  int v145;
  _BOOL4 v146;
  bool v147;
  __int64 v148;
  bool v149;
  bool v150;
  bool v151;
  __int64 v152;
  int v153;
  __int64 v155;
  char v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  char v161;
  __int64 v162;
  int v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  int v173;
  __int64* v174;
  __int64* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  int v187;
  __int64* v188;
  __int64* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  int v193;
  __int64* v194;
  __int64* v195;
  __int64 v196;
  __int64 v197;
  __int64* v198;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64* v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  float32x4_t* v211;
  __int64 v212;
  __int64* v213;
  __int64 v214;
  _QWORD* v215;
  __int64 v216;
  __int64* v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  int v221;
  __int64* v222;
  __int64* v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int v227;
  __int64* v228;
  __int64* v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  int v233;
  __int64* v234;
  __int64* v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  int v240;
  __int64* v241;
  __int64* v242;
  __int64* v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  int v248;
  __int64* v249;
  __int64* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  unsigned int v256;
  int v257;
  __int64 v258;
  bool v259;
  unsigned __int8* v260;
  __int64 v261;
  __int64 v262;
  __int64* v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  int v267;
  __int64* v268;
  __int64* v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  int v274;
  __int64* v275;
  __int64 v276;
  __int64* v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  unsigned int v281;
  bool v282;
  int v283;
  float32x4_t* v285;
  __int64 v286;
  int v287;
  float32x4_t** v288;
  float32x4_t* v289;
  float32x4_t** v290;
  float32x4_t* v291;
  float32x4_t** m;
  float32x4_t** v293;
  float32x4_t* v294;
  __int64 v295;
  __int64* v296;
  __int64 v297;
  int v298;
  __int64* v299;
  __int64* v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  int v304;
  __int64* v305;
  __int64* v306;
  __int64 v307;
  __int64 v308;
  int v309;
  unsigned __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  int v318;
  __int64* v319;
  __int64* v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  int v325;
  __int64* v326;
  __int64* v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  unsigned int v333;
  __int64 v334;
  __int64 v335;
  __int64* v336;
  unsigned __int64 v337;
  struct {
    float32x4_t v338;
    __int64 v339;
    char gap56_[8];
    float32x4_t* v340;
  } v338_;
  struct {
    _QWORD v341[4];
    _QWORD* v342;
  } v341_;
  struct {
    __int64 (**v343)();
    __int64 (*v344)();
    char gap304_[16];
    __int64 (***v345)();
  } v343_;
  const char* v346;

  v2 = (_QWORD*)GameData_2131860;
  if (*(_QWORD*)GameData_2131860 == 0) {
    v3 = *(_QWORD*)(a1 + 224);
    if (v3 == 0) {
      v186 = *(_QWORD*)(*GameData_212c790 + 8);
      v187 = *(_DWORD*)(v186 + 56);
      v188 = *(__int64**)(v186 + 8);
      if (v187 < 0) {
        while (1) {
          v3 = *v188;
          if (*(_QWORD*)(*v188 + 96) == 0 && *(_QWORD*)(v3 + 552) == 0) {
            break;
          }
          ++v188;
        }
      }
      else {
        v190 = *v188;
        v189 = v188 + 1;
        v3 = v190;
        if (*(_DWORD*)(v190 + 84) != v187) {
          do {
            v191 = *v189++;
            v3 = v191;
          } while (*(_DWORD*)(v191 + 84) != v187);
        }
      }
    }
    if (*(_BYTE*)(v3 + 512) != 1 &&
        (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 2) != 0) {
      snd_Fade_Fade_10c830((__int64)&v338_.v338, 0x0.0p+0f);
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_GMAP_Cancel_Spot",
                     (__int64)"SE_SYS_GMAP_Cancel_Spot", (__int64)&v338_.v338,
                     0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(&v338_.v338);
      GmapSound_1531270(*(_QWORD*)(*GameData_212d6f8[0] + 8));
      v209 = *(_QWORD*)(a1 + 224);
      if (v209 == 0) {
        v226 = *(_QWORD*)(*GameData_212c790 + 8);
        v227 = *(_DWORD*)(v226 + 56);
        v228 = *(__int64**)(v226 + 8);
        if (v227 < 0) {
          while (1) {
            v209 = *v228;
            if (*(_QWORD*)(*v228 + 96) == 0 && *(_QWORD*)(v209 + 552) == 0) {
              break;
            }
            ++v228;
          }
        }
        else {
          v230 = *v228;
          v229 = v228 + 1;
          v209 = v230;
          if (*(_DWORD*)(v230 + 84) != v227) {
            do {
              v231 = *v229++;
              v209 = v231;
            } while (*(_DWORD*)(v231 + 84) != v227);
          }
        }
      }
      game_gmap_133f280_alt1(v209);
      v210 = *(_QWORD*)(a1 + 224);
      if (v210 == 0) {
        v232 = *(_QWORD*)(*GameData_212c790 + 8);
        v233 = *(_DWORD*)(v232 + 56);
        v234 = *(__int64**)(v232 + 8);
        if (v233 < 0) {
          while (1) {
            v210 = *v234;
            if (*(_QWORD*)(*v234 + 96) == 0 && *(_QWORD*)(v210 + 552) == 0) {
              break;
            }
            ++v234;
          }
        }
        else {
          v236 = *v234;
          v235 = v234 + 1;
          v210 = v236;
          if (*(_DWORD*)(v236 + 84) != v233) {
            do {
              v237 = *v235++;
              v210 = v237;
            } while (*(_DWORD*)(v237 + 84) != v233);
          }
        }
      }
      v211 = *(float32x4_t**)(*(_QWORD*)(v210 + 32) - 8LL);
      if (v211 != nullptr) {
        GameRoutine_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), v211 + 2);
      }
      v212 = *GameData_212c790;
      *(_BYTE*)(*(_QWORD*)(*GameData_212c790 + 8) + 60LL) = 0;
      TroopMgr_134d2e0_alt1(*(_QWORD*)(v212 + 8));
      v213 = GameData_212d728[0];
      v214 = *GameData_212d728[0];
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
      *(_BYTE*)(*(_QWORD*)(v214 + 8) + 5837LL) = 1;
      GameRoutine_17bcf90_alt1();
      *(_DWORD*)(*(_QWORD*)(*v213 + 8) + 5856LL) |= 0x10u;
      *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 3;
      *(_QWORD*)(a1 + 152) = 0;
      v215 = *(_QWORD**)(a1 + 192);
      *(_QWORD*)(a1 + 192) = 0;
      if (v215 == (_QWORD*)(a1 + 160)) {
        v216 = 32;
      }
      else {
        if (v215 == nullptr) {
          goto LABEL_388;
        }
        v216 = 40;
      }
      (*(void (**)(__int64))(*v215 + v216))((__int64)v215);
    LABEL_388:
      v238 = *(_QWORD*)(a1 + 8);
      if (v238 == 0) {
        return;
      }
      while (1) {
        if (*(_BYTE*)v238 == 2) {
          if (*(_DWORD*)(v238 + 32) == 4) {
            *(_QWORD*)(a1 + 16) = v238;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v238 == 0) {
          return;
        }
        v238 += 64;
      }
    }
  }
  v4 = (int)GameRoutine_135bea0();
  if (*v2 != 0) {
    v5 = (float*)(a1 + 212);
    if (v4 < 1) {
      goto LABEL_470;
    }
  }
  else {
    v6 = *(_QWORD*)(a1 + 224);
    if (v6 == 0) {
      v192 = *(_QWORD*)(*GameData_212c790 + 8);
      v193 = *(_DWORD*)(v192 + 56);
      v194 = *(__int64**)(v192 + 8);
      if (v193 < 0) {
        while (1) {
          v6 = *v194;
          if (*(_QWORD*)(*v194 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
            break;
          }
          ++v194;
        }
      }
      else {
        v196 = *v194;
        v195 = v194 + 1;
        v6 = v196;
        if (*(_DWORD*)(v196 + 84) != v193) {
          do {
            v197 = *v195++;
            v6 = v197;
          } while (*(_DWORD*)(v197 + 84) != v193);
        }
      }
    }
    v5 = (float*)(a1 + 212);
    if (*(_BYTE*)(v6 + 512) == 1) {
      v7 = (int)*(float*)(a1 + 212);
    }
    else {
      v7 = 1;
    }
    v4 *= v7;
    if (v4 < 1) {
      goto LABEL_470;
    }
  }
  v8 = 0;
  v9 = game_script_hub_g_frame_counter_ptr[0];
  v10 = GameData_212c790;
  v336 = GameData_212d2b8 + 2;
  while (1) {
    v11 = game_ProcGameSkipView_instance_;
    v12 = (float)*(int*)(a1 + 208);
    v13 = (float)(*(float*)(*(_QWORD*)v9 + 160LL) + *(float*)(a1 + 216)) <= v12
              ? *(float*)(*(_QWORD*)v9 + 160LL) + *(float*)(a1 + 216)
              : (float)*(int*)(a1 + 208);
    if ((*(float*)(a1 + 216) = v13, v11 != 0) && *(_BYTE*)(v11 + 152) == 3 &&
        (((v14 = *(_DWORD*)(v11 + 156)) & 8) != 0 ? (v15 = 2) : (v15 = 3),
         (v15 & v14) == 0)) {
      v13 = v12;
      *(float*)(a1 + 216) = v12;
      v16 = *(float32x4_t**)(a1 + 224);
      if (v16 != nullptr) {
      LABEL_26:
        v17 = LANES128(v16[33]).n128_i32[3];
        v18 = v16;
        if (v17 == 0) {
          v21 = LANES128(*(v16)).n128_u64[0];
          v19 = 0;
        LABEL_39:
          v32 = v13 / v12;
          v33 = 0x1.0000000000000p+0f;
          v34 = v16;
          v29 = *(float32x4_t**)(LANES128(v16[1]).n128_u64[1] + 8 * v19);
          if (*v2 != 0) {
            goto LABEL_81;
          }
          goto LABEL_40;
        }
        goto LABEL_27;
      }
    }
    else {
      v16 = *(float32x4_t**)(a1 + 224);
      if (v16 != nullptr) {
        goto LABEL_26;
      }
    }
    v35 = *(_QWORD*)(*v10 + 8);
    v36 = *(_DWORD*)(v35 + 56);
    v37 = *(_QWORD**)(v35 + 8);
    v38 = v37;
    if (v36 < 0) {
      while (1) {
        v39 = *v38;
        if (*(_QWORD*)(*v38 + 96LL) == 0 && *(_QWORD*)(v39 + 552) == 0) {
          break;
        }
        ++v38;
      }
    }
    else {
      v39 = *v37;
      if (*(_DWORD*)(*v37 + 84LL) != v36) {
        v40 = v37 + 1;
        do {
          v41 = *v40++;
          v39 = v41;
        } while (*(_DWORD*)(v41 + 84) != v36);
      }
    }
    v17 = *(_DWORD*)(v39 + 540);
    if (v17 != 0) {
      if (v36 < 0) {
        while (1) {
          v18 = (float32x4_t*)*v37;
          if (*(_QWORD*)(*v37 + 96LL) == 0 &&
              LANES128(v18[34]).n128_u64[1] == 0) {
            break;
          }
          ++v37;
        }
      }
      else {
        v43 = (float32x4_t*)*v37;
        v42 = (float32x4_t**)(v37 + 1);
        v18 = v43;
        if (LANES128(v43[5]).n128_u32[1] != v36) {
          do {
            v44 = *v42++;
            v18 = v44;
          } while (LANES128(v44[5]).n128_u32[1] != v36);
        }
      }
    LABEL_27:
      v19 = v17;
      v20 = (float32x4_t*)(LANES128(v18[1]).n128_u64[1] + 8LL * v17 - 8);
      goto LABEL_28;
    }
    if (v36 < 0) {
      while (1) {
        v20 = (float32x4_t*)*v37;
        if (*(_QWORD*)(*v37 + 96LL) == 0) {
          v19 = LANES128(v20[34]).n128_i64[1];
          if (v19 == 0) {
            break;
          }
        }
        ++v37;
      }
    }
    else {
      v46 = (float32x4_t*)*v37;
      v45 = (float32x4_t**)(v37 + 1);
      v20 = v46;
      if (LANES128(v46[5]).n128_u32[1] != v36) {
        do {
          v47 = *v45++;
          v20 = v47;
        } while (LANES128(v47[5]).n128_u32[1] != v36);
      }
      v19 = 0;
    }
  LABEL_28:
    v21 = LANES128(*(v20)).n128_u64[0];
    if (v16 != nullptr) {
      goto LABEL_39;
    }
    v22 = *(_QWORD*)(*v10 + 8);
    v23 = *(_DWORD*)(v22 + 56);
    v24 = *(float32x4_t***)(v22 + 8);
    v25 = *(float32x4_t***)(v22 + 16);
    if (v23 < 0) {
      if (v24 != v25) {
        for (i = v24 + 1;; ++i) {
          v49 = (_QWORD*)*(i - 1);
          if (v49[12] == 0 && v49[69] == 0) {
            break;
          }
        }
        v29 = *(float32x4_t**)(v49[3] + 8 * v19);
        v50 = v24;
        while (1) {
          v16 = *v50;
          if (LANES128((*v50)[6]).n128_u64[0] == 0 &&
              LANES128(v16[34]).n128_u64[1] == 0) {
            goto LABEL_80;
          }
          if (++v50 == v25) {
          LABEL_37:
            v16 = nullptr;
            goto LABEL_80;
          }
        }
      }
    }
    else if (v24 != v25) {
      v26 = *v24;
      if (LANES128((*v24)[5]).n128_u32[1] != v23) {
        v27 = v24 + 1;
        do {
          v28 = *v27++;
          v26 = v28;
        } while (LANES128(v28[5]).n128_u32[1] != v23);
      }
      v29 = *(float32x4_t**)(LANES128(v26[1]).n128_u64[1] + 8 * v19);
      v30 = v24;
      while (1) {
        v31 = *v30++;
        v16 = v31;
        if (LANES128(v31[5]).n128_u32[1] == v23) {
          goto LABEL_80;
        }
        if (v30 == v25) {
          goto LABEL_37;
        }
      }
    }
    v16 = nullptr;
    v29 = *(float32x4_t**)(8 * v19);
  LABEL_80:
    v32 = v13 / v12;
    v33 = 0x1.0000000000000p+0f;
    if (*v2 != 0) {
      goto LABEL_81;
    }
    if (v23 < 0) {
      while (1) {
        v34 = *v24;
        if (LANES128((*v24)[6]).n128_u64[0] == 0 &&
            LANES128(v34[34]).n128_u64[1] == 0) {
          break;
        }
        ++v24;
      }
    }
    else {
      v99 = *v24;
      v98 = v24 + 1;
      v34 = v99;
      if (LANES128(v99[5]).n128_u32[1] != v23) {
        do {
          v100 = *v98++;
          v34 = v100;
        } while (LANES128(v100[5]).n128_u32[1] != v23);
      }
    }
  LABEL_40:
    v33 = *v5;
    if (LANES128(v34[32]).n128_u8[0] != 1) {
      v33 = 0x1.0000000000000p+0f;
    }
  LABEL_81:
    v51 = *(__int64**)(v21 + 48);
    v52 = *(__int64**)(v21 + 56);
    if (v51 == v52) {
    LABEL_84:
      game_gmap_133f280_alt1((__int64)v16);
    }
    else {
      while (1) {
        v54 = *v51++;
        v53 = (float32x4_t*)v54;
        v55 = *(float32x4_t**)(v54 + 8);
        if (v55 == v29) {
          break;
        }
        if (v51 == v52) {
          goto LABEL_84;
        }
      }
      v338_.v338 = (__typeof__(v338_.v338)){0};
      if (v32 >= 0x1.0000000000000p-1f) {
        v59 = v53[5];
        v63 = v53[6];
        v58 = v53[4];
        v60 = v55 + 2;
        v56 = (float)(v32 + -0x1.0000000000000p-1f) +
              (float)(v32 + -0x1.0000000000000p-1f);
        v61 = 0x1.0000000000000p+0f - v56;
        v62 = v61 * v61;
      }
      else {
        v56 = v32 + v32;
        v57 = (float32x4_t*)LANES128(*(v53)).n128_u64[0];
        v58 = v53[2];
        v59 = v53[3];
        v60 = v53 + 6;
        v61 = 0x1.0000000000000p+0f - (float)(v32 + v32);
        v62 = v61 * v61;
        v63 = v57[2];
      }
      v64 = vaddq_f32(
          vaddq_f32(
              vaddq_f32(
                  vmulq_n_f32(v63, v61 * v62),
                  vmulq_n_f32(
                      v58,
                      v56 *
                          (float)(v61 * (float)(v61 * 0x1.8000000000000p+1f)))),
              vmulq_n_f32(
                  v59,
                  v56 * (float)(v56 * (float)(v61 * 0x1.8000000000000p+1f)))),
          vmulq_n_f32(*v60, v56 * (float)(v56 * v56)));
      LANES128(v65).n128_u64[0] = LANES128(v64).n128_u64[0];
      LANES128(v65).n128_u64[1] = LANES128(v64).n128_u32[2];
      v338_.v338 = v65;
      GameRoutine_13412c0(v16, &v338_.v338, v33);
    }
    if (*(float*)(a1 + 216) != (float)*(int*)(a1 + 208)) {
      goto LABEL_15;
    }
    v66 = *v2;
    v67 = *(_QWORD*)(a1 + 224);
    *(_DWORD*)(a1 + 216) = 0;
    if (v66 == 0) {
      v68 = v67;
      if (v67 == 0) {
        v101 = *(_QWORD*)(*v10 + 8);
        v102 = *(_DWORD*)(v101 + 56);
        v103 = *(__int64**)(v101 + 8);
        if (v102 < 0) {
          while (1) {
            v68 = *v103;
            if (*(_QWORD*)(*v103 + 96) == 0 && *(_QWORD*)(v68 + 552) == 0) {
              break;
            }
            ++v103;
          }
        }
        else {
          v105 = *v103;
          v104 = v103 + 1;
          v68 = v105;
          if (*(_DWORD*)(v105 + 84) != v102) {
            do {
              v106 = *v104++;
              v68 = v106;
            } while (*(_DWORD*)(v106 + 84) != v102);
          }
        }
      }
      if (*(_BYTE*)(v68 + 512) != 1) {
        break;
      }
    }
    if (v67 == 0) {
      v74 = *(_QWORD*)(*v10 + 8);
      v75 = *(_DWORD*)(v74 + 56);
      v76 = *(__int64**)(v74 + 8);
      if (v75 < 0) {
        while (1) {
          v67 = *v76;
          if (*(_QWORD*)(*v76 + 96) == 0 && *(_QWORD*)(v67 + 552) == 0) {
            break;
          }
          ++v76;
        }
      }
      else {
        v78 = *v76;
        v77 = v76 + 1;
        v67 = v78;
        if (*(_DWORD*)(v78 + 84) != v75) {
          do {
            v79 = *v77++;
            v67 = v79;
          } while (*(_DWORD*)(v79 + 84) != v75);
        }
      }
    }
    ++*(_DWORD*)(v67 + 540);
    v69 = *(_QWORD*)(a1 + 224);
    if (v69 != 0) {
      v70 = *(int*)(v69 + 540);
      v71 = *(_QWORD*)(a1 + 224);
      if (v70 != (__int64)(*(_QWORD*)(v69 + 32) - *(_QWORD*)(v69 + 24)) >> 3) {
        goto LABEL_96;
      }
      v198 = GameData_212d728[0];
    LABEL_342:
      GameRoutine_133f460(v69);
      TroopMgr_134d2e0_alt1(*(_QWORD*)(*v10 + 8));
      game_19a0e60(*(_QWORD*)(*v198 + 8) + 32LL);
      if (*v2 != 0) {
        v201 = *(_QWORD*)(a1 + 224);
        if (v201 == 0) {
          v220 = *(_QWORD*)(*v10 + 8);
          v221 = *(_DWORD*)(v220 + 56);
          v222 = *(__int64**)(v220 + 8);
          if (v221 < 0) {
            while (1) {
              v201 = *v222;
              if (*(_QWORD*)(*v222 + 96) == 0 && *(_QWORD*)(v201 + 552) == 0) {
                break;
              }
              ++v222;
            }
          }
          else {
            v224 = *v222;
            v223 = v222 + 1;
            v201 = v224;
            if (*(_DWORD*)(v224 + 84) != v221) {
              do {
                v225 = *v223++;
                v201 = v225;
              } while (*(_DWORD*)(v225 + 84) != v221);
            }
          }
        }
        game_gmap_1341d60(v201, 0);
      }
      v202 = *(_QWORD*)(a1 + 224);
      v203 = v202;
      if (v202 == 0) {
        v204 = *(_QWORD*)(*v10 + 8);
        v205 = *(_DWORD*)(v204 + 56);
        v206 = *(__int64**)(v204 + 8);
        v207 = *(__int64**)(v204 + 16);
        if (v205 < 0) {
          for (; v206 != v207; ++v206) {
            v203 = *v206;
            if (*(_QWORD*)(*v206 + 96) == 0 && *(_QWORD*)(v203 + 552) == 0) {
              goto LABEL_424;
            }
          }
        }
        else {
          while (v206 != v207) {
            v208 = *v206++;
            v203 = v208;
            if (*(_DWORD*)(v208 + 84) == v205) {
              goto LABEL_424;
            }
          }
        }
        v203 = 0;
      }
    LABEL_424:
      if (*(_QWORD*)(v203 + 96) != 0) {
        goto LABEL_464;
      }
      v258 = *(_QWORD*)(v203 + 552);
      v259 = v258 != 0 && *(_QWORD*)(v203 + 104) == 0;
      if (!v259 ||
          *(__int16*)(v203 + 642) * *(__int16*)(v203 + 640) *
                  *(__int16*)(v203 + 644) !=
              0 ||
          *(_QWORD*)(v258 + 352) != 0) {
        goto LABEL_464;
      }
      if (v202 == 0) {
        v303 = *(_QWORD*)(*v10 + 8);
        v304 = *(_DWORD*)(v303 + 56);
        v305 = *(__int64**)(v303 + 8);
        if (v304 < 0) {
          while (1) {
            v202 = *v305;
            if (*(_QWORD*)(*v305 + 96) == 0 && *(_QWORD*)(v202 + 552) == 0) {
              break;
            }
            ++v305;
          }
        }
        else {
          v307 = *v305;
          v306 = v305 + 1;
          v202 = v307;
          if (*(_DWORD*)(v307 + 84) != v304) {
            do {
              v308 = *v306++;
              v202 = v308;
            } while (*(_DWORD*)(v308 + 84) != v304);
          }
        }
      }
      game_gmap_1340560(v202, 3);
      v260 = *(unsigned __int8**)(a1 + 16);
      if (v260 == nullptr) {
        goto LABEL_470;
      }
      goto LABEL_465;
    }
    v80 = *(_QWORD*)(*v10 + 8);
    v81 = *(_DWORD*)(v80 + 56);
    v82 = *(__int64**)(v80 + 8);
    v83 = *(__int64**)(v80 + 16);
    if (v81 < 0) {
      if (v82 == v83) {
        v70 = 540;
      }
      else {
        for (j = v82 + 1;; ++j) {
          v108 = *(j - 1);
          if (*(_QWORD*)(v108 + 96) == 0 && *(_QWORD*)(v108 + 552) == 0) {
            break;
          }
        }
        v70 = v108 + 540;
      }
      LODWORD(v70) = *(_DWORD*)v70;
      for (k = v82;; ++k) {
        v84 = (_QWORD*)*k;
        if (*(_QWORD*)(*k + 96) == 0 && v84[69] == 0) {
          break;
        }
      }
    }
    else {
      v84 = (_QWORD*)*v82;
      v85 = *(_DWORD*)(*v82 + 84);
      if (v82 == v83) {
        v70 = 540;
      }
      else {
        v86 = *v82;
        if (v85 != v81) {
          v87 = v82 + 1;
          do {
            v88 = *v87++;
            v86 = v88;
          } while (*(_DWORD*)(v88 + 84) != v81);
        }
        v70 = v86 + 540;
      }
      LODWORD(v70) = *(_DWORD*)v70;
      if (v85 != v81) {
        v109 = v82 + 1;
        do {
          v110 = *v109++;
          v84 = (_QWORD*)v110;
        } while (*(_DWORD*)(v110 + 84) != v81);
      }
    }
    v70 = (int)v70;
    if ((int)v70 == (__int64)(v84[4] - v84[3]) >> 3) {
      if (v81 < 0) {
        v198 = GameData_212d728[0];
        while (1) {
          v69 = *v82;
          if (*(_QWORD*)(*v82 + 96) == 0 && *(_QWORD*)(v69 + 552) == 0) {
            break;
          }
          ++v82;
        }
      }
      else {
        v218 = *v82;
        v217 = v82 + 1;
        v69 = v218;
        v198 = GameData_212d728[0];
        if (*(_DWORD*)(v218 + 84) != v81) {
          do {
            v219 = *v217++;
            v69 = v219;
          } while (*(_DWORD*)(v219 + 84) != v81);
        }
      }
      goto LABEL_342;
    }
    if (v81 < 0) {
      while (1) {
        v71 = *v82;
        if (*(_QWORD*)(*v82 + 96) == 0 && *(_QWORD*)(v71 + 552) == 0) {
          break;
        }
        ++v82;
      }
    }
    else {
      v126 = *v82;
      v125 = v82 + 1;
      v71 = v126;
      if (*(_DWORD*)(v126 + 84) != v81) {
        do {
          v127 = *v125++;
          v71 = v127;
        } while (*(_DWORD*)(v127 + 84) != v81);
      }
    }
  LABEL_96:
    if (*(_BYTE*)(v71 + 512) != 1) {
      v72 = *(_QWORD*)(v69 + 24) + 8 * v70;
      if (*(_BYTE*)(*(_QWORD*)(v72 - 8) + 113LL) == 1 &&
          *(_BYTE*)(*(_QWORD*)v72 + 113LL) == 1) {
        if (*(_BYTE*)(v69 + 512) != 0) {
          v73 = 0;
          goto LABEL_150;
        }
      }
      else {
        v89 = *(_QWORD*)(v69 + 96);
        if (v89 != 0) {
          if (*(_BYTE*)(v89 + 130) == 0 && *(_BYTE*)(v69 + 512) != 2) {
          LABEL_149:
            v73 = 2;
          LABEL_150:
            *(_BYTE*)(v69 + 512) = v73;
            if (*(_QWORD*)GameData_212d750 != 0) {
              GameHr_995200(v69 + 112);
            }
          }
        }
        else if (*(_BYTE*)(v69 + 512) != 2) {
          goto LABEL_149;
        }
      }
    }
  LABEL_15:
    if (++v8 == v4) {
      goto LABEL_470;
    }
  }
  v91 = *v10;
  v92 = *(_QWORD*)(*v10 + 8);
  v93 = *(_DWORD*)(v92 + 56);
  v94 = *(__int64**)(v92 + 8);
  v95 = *(__int64**)(v92 + 16);
  if ((v93 & 0x80000000) == 0) {
    while (v94 != v95) {
      v97 = *v94++;
      v96 = v97;
      if (*(_DWORD*)(v97 + 84) == v93) {
        goto LABEL_159;
      }
    }
  LABEL_158:
    v96 = 0;
    goto LABEL_159;
  }
  if (v94 == v95) {
    goto LABEL_158;
  }
  while (1) {
    v96 = *v94;
    if (*(_QWORD*)(*v94 + 96) == 0 && *(_QWORD*)(v96 + 552) == 0) {
      break;
    }
    if (++v94 == v95) {
      goto LABEL_158;
    }
  }
LABEL_159:
  v111 = *(_QWORD*)(v96 + 24);
  if (*(_QWORD*)(v96 + 32) == v111) {
    goto LABEL_464;
  }
  v112 = *(int*)(v96 + 540);
  v113 = *(_QWORD*)(v111 + 8 * v112);
  v337 = v112 + 1;
  *(_DWORD*)(v96 + 540) = v112 + 1;
  v114 = *(__int64**)(*(_QWORD*)GameData_212d748[0] + 8LL);
  if (v114[2] != 0) {
    v115 = *v114;
    if (game_GameModeData_instance_ == 0 ||
        (v116 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
        *(_BYTE*)(v116 + 152) != 6 ||
        *(_QWORD*)(v116 + 168) != *(_QWORD*)(v115 + 120)) {
      v117 = *(_QWORD*)(v91 + 8);
      v118 = *(__int64**)(v117 + 8);
      v119 = *(__int64**)(v117 + 16);
      v120 = *(_DWORD*)(v117 + 56);
      v121 = v118;
      if ((v120 & 0x80000000) == 0) {
        if (v118 != v119) {
          do {
            v123 = *v121++;
            v122 = v123;
            if (*(_DWORD*)(v123 + 84) == v120) {
              goto LABEL_190;
            }
          } while (v121 != v119);
        }
      LABEL_189:
        v122 = 0;
        goto LABEL_190;
      }
      if (v118 == v119) {
        goto LABEL_189;
      }
      while (1) {
        v122 = *v121;
        if (*(_QWORD*)(*v121 + 96) == 0 && *(_QWORD*)(v122 + 552) == 0) {
          break;
        }
        if (++v121 == v119) {
          goto LABEL_189;
        }
      }
    LABEL_190:
      v128 = *(_DWORD*)(v122 + 540);
      v129 = __OFSUB__(v128, 1);
      v130 = (unsigned int)(v128 - 1);
      if (((v130 & 0x80000000) != 0LL) == v129) {
        v131 = *(_QWORD*)(v122 + 24);
        v132 = *(_QWORD*)(v122 + 32) - v131;
        v133 = v131 + 8LL * (unsigned int)v130;
        if (v130 < v132 >> 3) {
          v122 = v133;
        }
      }
      if (*(_QWORD*)v122 == v115) {
        if (*(_QWORD*)GameData_21316c8 != 0) {
          GameHr_14c6620(a1);
          v261 = *(_QWORD*)(*v10 + 8);
          v120 = *(_DWORD*)(v261 + 56);
          v118 = *(__int64**)(v261 + 8);
        }
        if (v120 < 0) {
          while (1) {
            v262 = *v118;
            if (*(_QWORD*)(*v118 + 96) == 0 && *(_QWORD*)(v262 + 552) == 0) {
              break;
            }
            ++v118;
          }
        }
        else {
          v264 = *v118;
          v263 = v118 + 1;
          v262 = v264;
          if (*(_DWORD*)(v264 + 84) != v120) {
            do {
              v265 = *v263++;
              v262 = v265;
            } while (*(_DWORD*)(v265 + 84) != v120);
          }
        }
        GameRoutine_888970((__int64*)(v262 + 24), 0, 0, 0);
        v266 = *(_QWORD*)(*v10 + 8);
        v267 = *(_DWORD*)(v266 + 56);
        v268 = *(__int64**)(v266 + 8);
        if (v267 < 0) {
          while (1) {
            v270 = *v268;
            if (*(_QWORD*)(*v268 + 96) == 0 && *(_QWORD*)(v270 + 552) == 0) {
              break;
            }
            ++v268;
          }
        }
        else {
          v271 = *v268;
          v269 = v268 + 1;
          v270 = v271;
          if (*(_DWORD*)(v271 + 84) != v267) {
            do {
              v272 = *v269++;
              v270 = v272;
            } while (*(_DWORD*)(v272 + 84) != v267);
          }
        }
        UnitActor_81a540(v270 + 112, 0x723D4B8u, (__int64)GameData_212ceb8);
        v273 = *(_QWORD*)(*v10 + 8);
        v274 = *(_DWORD*)(v273 + 56);
        v275 = *(__int64**)(v273 + 8);
        if (v274 < 0) {
          while (1) {
            v276 = *v275;
            if (*(_QWORD*)(*v275 + 96) == 0 && *(_QWORD*)(v276 + 552) == 0) {
              break;
            }
            ++v275;
          }
        }
        else {
          v278 = *v275;
          v277 = v275 + 1;
          v276 = v278;
          if (*(_DWORD*)(v278 + 84) != v274) {
            do {
              v279 = *v277++;
              v276 = v279;
            } while (*(_DWORD*)(v279 + 84) != v274);
          }
        }
        game_gmap_1341d60(v276, 1);
        *(_BYTE*)(*(_QWORD*)(*v10 + 8) + 60LL) = 0;
        v280 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
        *(_BYTE*)(v280 + 24) = 0;
        GameRoutine_14a1520((__int64*)(v280 + 40), 1);
        v257 = 3;
        goto LABEL_463;
      }
    }
  }
  if (v113 != 0) {
    v134 = *(_QWORD*)(v91 + 8);
    v135 = *(_QWORD*)(v134 + 8);
    v136 = *(_QWORD*)(v134 + 16);
    while (v135 != v136) {
      if (**(_QWORD**)v135 == v113) {
        v137 = *(_QWORD*)(*(_QWORD*)v135 + 96LL);
        if (v137 != 0 && *(_BYTE*)(v137 + 32) == 1) {
          if (*(_QWORD*)GameData_21316c8 != 0) {
            GameHr_14c6620(a1);
          }
          if ((ProcGmapMove_1549e60_alt1() & 1) != 0) {
            GameRoutine_14cced0(a1);
            game_gmap_1341d60(v96, 1);
            *(_BYTE*)(*(_QWORD*)(*v10 + 8) + 60LL) = 0;
            *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 16;
            v257 = 4;
            goto LABEL_463;
          }
          break;
        }
      }
      v135 += 8;
    }
  }
  if (game_GameModeData_instance_ == 0 ||
      (v138 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v138 + 152) != 4 ||
      *(_QWORD*)(v138 + 168) != *(_QWORD*)(v113 + 120)) {
    v338_.v339 = 0;
    v139 = v4;
    v140 = v2;
    v141 = v5;
    v142 = v9;
    v143 = v10;
    v338_.v338 = (__typeof__(v338_.v338)){0};
    GameSubquestData_125a1a0(*(_QWORD*)GameData_212c7b0[0],
                             (__int64*)&v338_.v338, v113, 0);
    if (LANES128(v338_.v338).n128_u64[0] == LANES128(v338_.v338).n128_u64[1]) {
      v146 = false;
      if (LANES128(v338_.v338).n128_u64[0] != 0) {
        goto LABEL_216;
      }
    }
    else {
      v144 = LANES128(v338_.v338).n128_u64[0] + 8;
      do {
        v145 = *(unsigned __int8*)(**(_QWORD**)(v144 - 8) + 112LL);
        v146 = v145 == 4;
        v147 = v145 == 4 || v144 == LANES128(v338_.v338).n128_u64[1];
        v144 += 8LL;
      } while (!v147);
      if (LANES128(v338_.v338).n128_u64[0] != 0) {
      LABEL_216:
        LANES128(v338_.v338).n128_u64[1] = LANES128(v338_.v338).n128_u64[0];
        v148 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v148 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v148,
            LANES128(v338_.v338).n128_i64[0]);
      }
    }
    if (!v146) {
      if (v337 < (__int64)(*(_QWORD*)(v96 + 32) - *(_QWORD*)(v96 + 24)) >> 3) {
        if (game_gmap_GmapClock_instance_ != 0) {
          v149 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) == 0 ||
                 *(_WORD*)(game_gmap_GmapClock_instance_ + 20) == 0;
          v150 = v149 || *(_WORD*)(game_gmap_GmapClock_instance_ + 24) == 0;
          v151 = !v150;
        }
        else {
          v151 = false;
        }
        LANES128(v338_.v338).n128_u64[1] = (unsigned __int64)&GameData_1abd4d1;
        LANES128(v338_.v338).n128_u64[0] =
            game_HashString_alt1((__int64)&GameData_1abd4d1);
        if (game_GameModeData_instance_ != 0 &&
            (v152 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 LANES128(v338_.v338).n128_u64)) != 0) {
          v153 = *(_DWORD*)(v152 + 32);
        }
        else {
          v153 = 3;
        }
        if (v153 > (signed __int32)*(_DWORD*)(v96 + 540) || !v151) {
          v10 = v143;
          v9 = v142;
          v5 = v141;
          v2 = v140;
          v4 = v139;
          if (game_GameModeData_instance_ != 0) {
            v334 = *(_QWORD*)(*(_QWORD*)(v96 + 24) + 8 * v337);
            v157 = GameRoutine_714b20((_QWORD*)game_GameModeData_instance_);
            if (v157 != 0) {
              v158 = v157;
              while (*(_BYTE*)(v158 + 33) != 18) {
                if ((GameRoutine_889be0(v158) & 1) != 0 ||
                    *(_BYTE*)(v158 + 32) != 0) {
                  v158 = *(_QWORD*)(*(_QWORD*)(v158 + 24) + 16LL);
                  if (v158 != 0) {
                    continue;
                  }
                }
                goto LABEL_263;
              }
              if (game_GameModeData_instance_ != 0) {
                v159 = *(_QWORD*)(game_GameModeData_instance_ + 24);
                if (v159 != 0 && *(_BYTE*)(v159 + 152) == 4 &&
                    *(_QWORD*)(v159 + 168) == *(_QWORD*)(v334 + 120) &&
                    game_gmap_GmapClock_instance_ != 0 &&
                    *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                            *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                        0) {
                  v172 = *(_QWORD*)(*v10 + 8);
                  v173 = *(_DWORD*)(v172 + 56);
                  v174 = *(__int64**)(v172 + 8);
                  if (v173 < 0) {
                    while (1) {
                      v176 = *v174;
                      if (*(_QWORD*)(*v174 + 96) == 0 &&
                          *(_QWORD*)(v176 + 552) == 0) {
                        break;
                      }
                      ++v174;
                    }
                  }
                  else {
                    v177 = *v174;
                    v175 = v174 + 1;
                    v176 = v177;
                    if (*(_DWORD*)(v177 + 84) != v173) {
                      do {
                        v178 = *v175++;
                        v176 = v178;
                      } while (*(_DWORD*)(v178 + 84) != v173);
                    }
                  }
                  UnitActor_81a540(v176 + 112, 0x723D4B8u,
                                   (__int64)GameData_212ceb8);
                  GmapSound_1531270(*(_QWORD*)(*GameData_212d6f8[0] + 8));
                  v179 = *(_QWORD*)(*v10 + 8);
                  v343_.v343 = GameData_204bd78;
                  v343_.v344 = (__int64 (*)())a1;
                  v341_.v341[0] = GameData_204bd78;
                  v341_.v341[1] = a1;
                  v341_.v342 = v341_.v341;
                  *(_BYTE*)(v179 + 60) = 0;
                  v346 = "MID_NextSelect_Main";
                  LANES128(v338_.v338).n128_u64[0] =
                      (unsigned __int64)GameData_204bcf8;
                  LANES128(v338_.v338).n128_u64[1] = a1;
                  v338_.v340 = &v338_.v338;
                  v343_.v345 = &v343_.v343;
                  v335 = MapSortieMenu_871860(
                      a1, (__int64)&v346, (__int64)&v338_.v338,
                      (__int64)&v343_.v343, (__int64)v341_.v341);
                  if (v341_.v342 == v341_.v341) {
                    v180 = 32;
                  LABEL_303:
                    (*(void (**)(__int64))(*v341_.v342 + v180))(
                        (__int64)v341_.v342);
                  }
                  else if (v341_.v342 != nullptr) {
                    v180 = 40;
                    goto LABEL_303;
                  }
                  if (v343_.v345 == &v343_.v343) {
                    v181 = 4;
                  LABEL_308:
                    ((__int64 (*)(__int64))(*v343_.v345)[v181])(
                        (__int64)v343_.v345);
                  }
                  else if (v343_.v345 != nullptr) {
                    v181 = 5;
                    goto LABEL_308;
                  }
                  if (v338_.v340 == &v338_.v338) {
                    v182 = 32;
                  LABEL_313:
                    (*(void (**)(void))(LANES128(*(v338_.v340)).n128_u64[0] +
                                        v182))();
                  }
                  else if (v338_.v340 != nullptr) {
                    v182 = 40;
                    goto LABEL_313;
                  }
                  v343_.v343 = (__int64 (**)(void))v336;
                  v343_.v345 = &v343_.v343;
                  v338_.v340 = &v338_.v338;
                  v343_.v344 = game_sound_PlayDecideLightSe_ptr[0];
                  LANES128(v338_.v338).n128_u64[0] = (unsigned __int64)v336;
                  LANES128(v338_.v338).n128_u64[1] =
                      (unsigned __int64)game_sound_PlayDecideLightSe_ptr[0];
                  GameRoutine_654050(&v338_.v338, (_QWORD*)(v335 + 1152));
                  if (v338_.v340 == &v338_.v338) {
                    v183 = 32;
                  LABEL_318:
                    (*(void (**)(void))(LANES128(*(v338_.v340)).n128_u64[0] +
                                        v183))();
                  }
                  else if (v338_.v340 != nullptr) {
                    v183 = 40;
                    goto LABEL_318;
                  }
                  if (v343_.v345 == &v343_.v343) {
                    v184 = 4;
                  LABEL_323:
                    ((__int64 (*)(__int64))(*v343_.v345)[v184])(
                        (__int64)v343_.v345);
                  }
                  else if (v343_.v345 != nullptr) {
                    v184 = 5;
                    goto LABEL_323;
                  }
                  v156 = 1;
                  v185 = *(_QWORD*)(*(_QWORD*)(v96 + 24) + 8 * v337);
                  *(_BYTE*)(v185 + 178) |= 1u;
                  goto LABEL_279;
                }
              }
            }
          }
        LABEL_263:
          v160 = *(_QWORD*)(v96 + 24) + 8 * v337;
          if (*(_BYTE*)(*(_QWORD*)(v160 - 8) + 113LL) == 1 &&
              *(_BYTE*)(*(_QWORD*)v160 + 113LL) == 1) {
            if (*(_BYTE*)(v96 + 512) != 0) {
              v161 = 0;
            LABEL_276:
              *(_BYTE*)(v96 + 512) = v161;
              if (*(_QWORD*)GameData_212d750 != 0) {
                GameHr_995200(v96 + 112);
              }
            }
          LABEL_278:
            v156 = 1;
            *(_DWORD*)(a1 + 152) = 1;
            goto LABEL_279;
          }
          v162 = *(_QWORD*)(v96 + 96);
          if (v162 != 0) {
            if (*(_BYTE*)(v162 + 130) != 0 || *(_BYTE*)(v96 + 512) == 2) {
              goto LABEL_278;
            }
          }
          else if (*(_BYTE*)(v96 + 512) == 2) {
            goto LABEL_278;
          }
          v161 = 2;
          goto LABEL_276;
        }
      }
      v10 = v143;
      if (*(_BYTE*)(v113 + 113) == 1 && *(_BYTE*)(v96 + 512) != 0) {
        *(_BYTE*)(v96 + 512) = 0;
        if (*(_QWORD*)GameData_212d750 != 0) {
          GameHr_995200(v96 + 112);
        }
      }
      *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 6;
      GmapSound_1531270(*(_QWORD*)(*GameData_212d6f8[0] + 8));
      v155 = *v143;
      *(_BYTE*)(*(_QWORD*)(*v143 + 8) + 60LL) = 0;
      TroopMgr_134d2e0_alt1(*(_QWORD*)(v155 + 8));
      v9 = v142;
      v5 = v141;
      v2 = v140;
      v4 = v139;
      v156 = 0;
      *(_DWORD*)(a1 + 152) = 4;
    LABEL_279:
      if ((*(_QWORD*)(v96 + 96) | *(_QWORD*)(v96 + 552)) == 0) {
        v164 = *(_DWORD*)(v96 + 540);
        v129 = __OFSUB__(v164, 1);
        v165 = (unsigned int)(v164 - 1);
        if (((v165 & 0x80000000) != 0LL) == v129) {
          v166 = *(_QWORD*)(v96 + 24);
          v167 = *(_QWORD*)(v96 + 32) - v166;
          v168 = v166 + 8LL * (unsigned int)v165;
          if (v165 < v167 >> 3) {
            v96 = v168;
          }
        }
        v169 = *(_QWORD*)v96;
        v170 = *(_QWORD*)(v169 + 280);
        if (v170 != 0 &&
            ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v170 + 24LL))(v170) !=
                 1 ||
             ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v169 + 280) + 112LL))(
                  *(_QWORD*)(v169 + 280)) &
              1) == 0)) {
          v171 = *(_QWORD*)(v169 + 280);
          if (v171 != 0 &&
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v171 + 64LL))(v171) ==
                  5 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v171 + 48LL))(v171) & 1) !=
                  0) {
            (*(void (**)(__int64))(*(_QWORD*)v171 + 72LL))(v171);
            *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
          }
        }
      }
      if ((v156 & 1) == 0) {
        goto LABEL_464;
      }
      goto LABEL_15;
    }
    if (*(_QWORD*)GameData_21316c8 != 0) {
      GameHr_14c6620(a1);
    }
    v239 = *(_QWORD*)(*v143 + 8);
    v240 = *(_DWORD*)(v239 + 56);
    v241 = *(__int64**)(v239 + 8);
    v242 = GameData_212d728[0];
    if (v240 < 0) {
      while (1) {
        v244 = *v241;
        if (*(_QWORD*)(*v241 + 96) == 0 && *(_QWORD*)(v244 + 552) == 0) {
          break;
        }
        ++v241;
      }
    }
    else {
      v245 = *v241;
      v243 = v241 + 1;
      v244 = v245;
      if (*(_DWORD*)(v245 + 84) != v240) {
        do {
          v246 = *v243++;
          v244 = v246;
        } while (*(_DWORD*)(v246 + 84) != v240);
      }
    }
    GameRoutine_888970((__int64*)(v244 + 24), 0, 0, 0);
    v247 = *(_QWORD*)(*v143 + 8);
    v248 = *(_DWORD*)(v247 + 56);
    v249 = *(__int64**)(v247 + 8);
    if (v248 < 0) {
      while (1) {
        v251 = *v249;
        if (*(_QWORD*)(*v249 + 96) == 0 && *(_QWORD*)(v251 + 552) == 0) {
          break;
        }
        ++v249;
      }
    }
    else {
      v252 = *v249;
      v250 = v249 + 1;
      v251 = v252;
      if (*(_DWORD*)(v252 + 84) != v248) {
        do {
          v253 = *v250++;
          v251 = v253;
        } while (*(_DWORD*)(v253 + 84) != v248);
      }
    }
    UnitActor_81a540(v251 + 112, 0x723D4B8u, (__int64)GameData_212ceb8);
    *(_BYTE*)(*(_QWORD*)(*v143 + 8) + 60LL) = 0;
    v254 = *(_QWORD*)(*v242 + 8);
    LayoutAccessor_155e830_alt1(*(_QWORD*)(v254 + 16), 0);
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
      GameRoutine_17b8f40_alt1(
          *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
    }
    v255 = game_gameui_Footer_instance_;
    v256 = *(_DWORD*)(v254 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v254 + 5856) = v256;
    if (v255 != 0) {
      LayoutAccessor_1567000_alt1(v255, 0);
      v256 = *(_DWORD*)(v254 + 5856);
    }
    *(_DWORD*)(v254 + 5856) = v256 & 0xFFFDFFFF;
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
    game_telop_175bde0((__int64*)(*(_QWORD*)(*v242 + 8) + 5800LL));
    v257 = 4;
  LABEL_463:
    *(_DWORD*)(a1 + 152) = v257;
  LABEL_464:
    v260 = *(unsigned __int8**)(a1 + 16);
    if (v260 == nullptr) {
      goto LABEL_470;
    }
  LABEL_465:
    v281 = *v260;
    v282 = v281 > 0x10;
    v283 = (1 << v281) & 0x1CE00;
    if (!v282 && v283 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
    goto LABEL_470;
  }
  v295 = *(_QWORD*)GameData_212d750;
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 16;
  *(_DWORD*)(a1 + 152) = 2;
  v296 = GameData_212d728[0];
  if (*(_BYTE*)(v113 + 113) == 1) {
    v297 = *(_QWORD*)(*v10 + 8);
    v298 = *(_DWORD*)(v297 + 56);
    v299 = *(__int64**)(v297 + 8);
    v300 = *(__int64**)(v297 + 16);
    if ((v298 & 0x80000000) == 0) {
      while (v299 != v300) {
        v302 = *v299++;
        v301 = v302;
        if (*(_DWORD*)(v302 + 84) == v298) {
          goto LABEL_511;
        }
      }
    LABEL_510:
      v301 = 0;
      goto LABEL_511;
    }
    if (v299 == v300) {
      goto LABEL_510;
    }
    while (1) {
      v301 = *v299;
      if (*(_QWORD*)(*v299 + 96) == 0 && *(_QWORD*)(v301 + 552) == 0) {
        break;
      }
      if (++v299 == v300) {
        goto LABEL_510;
      }
    }
  LABEL_511:
    if (*(_BYTE*)(v301 + 512) != 0) {
      *(_BYTE*)(v301 + 512) = 0;
      if (v295 != 0) {
        GameHr_995200(v301 + 112);
      }
    }
  }
  if ((*(_QWORD*)(v96 + 96) | *(_QWORD*)(v96 + 552)) == 0) {
    v309 = *(_DWORD*)(v96 + 540);
    v129 = __OFSUB__(v309, 1);
    v310 = (unsigned int)(v309 - 1);
    if (((v310 & 0x80000000) != 0LL) == v129) {
      v311 = *(_QWORD*)(v96 + 24);
      v312 = *(_QWORD*)(v96 + 32) - v311;
      v313 = v311 + 8LL * (unsigned int)v310;
      if (v310 < v312 >> 3) {
        v96 = v313;
      }
    }
    v314 = *(_QWORD*)v96;
    v315 = *(_QWORD*)(*(_QWORD*)v96 + 280LL);
    if (v315 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v315 + 24LL))(v315) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v314 + 280) + 112LL))(
              *(_QWORD*)(v314 + 280)) &
          1) == 0)) {
      v316 = *(_QWORD*)(v314 + 280);
      if (v316 != 0 &&
          (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v316 + 64LL))(v316) ==
              5 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v316 + 48LL))(v316) & 1) != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v316 + 72LL))(v316);
        *(_BYTE*)(*(_QWORD*)(*v296 + 8) + 5835LL) = 1;
      }
    }
  }
  if (*(_QWORD*)GameData_21316c8 != 0) {
    GameHr_14c6620(a1);
  }
  v317 = *(_QWORD*)(*v10 + 8);
  v318 = *(_DWORD*)(v317 + 56);
  v319 = *(__int64**)(v317 + 8);
  if (v318 < 0) {
    while (1) {
      v321 = *v319;
      if (*(_QWORD*)(*v319 + 96) == 0 && *(_QWORD*)(v321 + 552) == 0) {
        break;
      }
      ++v319;
    }
  }
  else {
    v322 = *v319;
    v320 = v319 + 1;
    v321 = v322;
    if (*(_DWORD*)(v322 + 84) != v318) {
      do {
        v323 = *v320++;
        v321 = v323;
      } while (*(_DWORD*)(v323 + 84) != v318);
    }
  }
  GameRoutine_888970((__int64*)(v321 + 24), 0, 0, 0);
  v324 = *(_QWORD*)(*v10 + 8);
  v325 = *(_DWORD*)(v324 + 56);
  v326 = *(__int64**)(v324 + 8);
  if (v325 < 0) {
    while (1) {
      v328 = *v326;
      if (*(_QWORD*)(*v326 + 96) == 0 && *(_QWORD*)(v328 + 552) == 0) {
        break;
      }
      ++v326;
    }
  }
  else {
    v329 = *v326;
    v327 = v326 + 1;
    v328 = v329;
    if (*(_DWORD*)(v329 + 84) != v325) {
      do {
        v330 = *v327++;
        v328 = v330;
      } while (*(_DWORD*)(v330 + 84) != v325);
    }
  }
  UnitActor_81a540(v328 + 112, 0x723D4B8u, (__int64)GameData_212ceb8);
  *(_BYTE*)(*(_QWORD*)(*v10 + 8) + 60LL) = 0;
  v331 = *(_QWORD*)(*v296 + 8);
  LayoutAccessor_155e830_alt1(*(_QWORD*)(v331 + 16), 0);
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8f40_alt1(
        *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
  }
  v332 = game_gameui_Footer_instance_;
  v333 = *(_DWORD*)(v331 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v331 + 5856) = v333;
  if (v332 != 0) {
    LayoutAccessor_1567000_alt1(v332, 0);
    v333 = *(_DWORD*)(v331 + 5856);
  }
  *(_DWORD*)(v331 + 5856) = v333 & 0xFFFDFFFF;
  game_telop_175bde0((__int64*)(*(_QWORD*)(*v296 + 8) + 5800LL));
  v260 = *(unsigned __int8**)(a1 + 16);
  if (v260 != nullptr) {
    goto LABEL_465;
  }
LABEL_470:
  v285 = *(float32x4_t**)(a1 + 224);
  if (v285 != nullptr) {
    if ((LANES128(v285[6]).n128_u64[0] | LANES128(v285[34]).n128_u64[1]) == 0) {
      goto LABEL_472;
    }
  }
  else {
    v286 = *(_QWORD*)(*GameData_212c790 + 8);
    v287 = *(_DWORD*)(v286 + 56);
    v288 = *(float32x4_t***)(v286 + 8);
    if (v287 < 0) {
      for (m = *(float32x4_t***)(v286 + 8);; ++m) {
        v289 = *m;
        if (LANES128((*m)[6]).n128_u64[0] == 0 &&
            LANES128(v289[34]).n128_u64[1] == 0) {
          break;
        }
      }
    }
    else {
      v289 = *v288;
      if (LANES128((*v288)[5]).n128_u32[1] != v287) {
        v290 = v288 + 1;
        do {
          v291 = *v290++;
          v289 = v291;
        } while (LANES128(v291[5]).n128_u32[1] != v287);
      }
    }
    if ((LANES128(v289[6]).n128_u64[0] | LANES128(v289[34]).n128_u64[1]) == 0) {
      v293 = *(float32x4_t***)(v286 + 16);
      if (v287 < 0) {
        if (v288 == v293) {
          return;
        }
        while (1) {
          v285 = *v288;
          if (LANES128((*v288)[6]).n128_u64[0] == 0 &&
              LANES128(v285[34]).n128_u64[1] == 0) {
            break;
          }
          if (++v288 == v293) {
            return;
          }
        }
      }
      else {
        if (v288 == v293) {
          return;
        }
        while (1) {
          v294 = *v288++;
          v285 = v294;
          if (LANES128(v294[5]).n128_u32[1] == v287) {
            break;
          }
          if (v288 == v293) {
            return;
          }
        }
      }
    LABEL_472:
      GameRoutine_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), v285 + 3);
    }
  }
}

__int64 ProcGmapMove_1549420(long double a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  if (v2 < 0) {
    while (1) {
      v5 = *v3;
      if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v3;
    }
  }
  else {
    v6 = *v3;
    v4 = v3 + 1;
    v5 = v6;
    if (*(_DWORD*)(v6 + 84) != v2) {
      do {
        v7 = *v4++;
        v5 = v7;
      } while (*(_DWORD*)(v7 + 84) != v2);
    }
  }
  v8 = *(_QWORD*)(v5 + 376);
  if (v8 != 0) {
    *(_DWORD*)(*(_QWORD*)(v8 + 304) + 12LL) = 1065353216;
  }
  return GameRoutine_1531270(*(_QWORD*)(GameData_21f1648 + 8), a1);
}

void ProcGmapMove_1549620()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  _QWORD* i;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* j;
  __int64* v24;
  __int64* v25;
  __int64 v26;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    if (v2 != v3) {
      v4 = v2;
      do {
        v6 = *v4++;
        v5 = v6;
        if (*(_DWORD*)(v6 + 84) == v1) {
          goto LABEL_14;
        }
      } while (v4 != v3);
    }
  LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  if (v2 == v3) {
    goto LABEL_13;
  }
  v7 = v2;
  while (1) {
    v5 = *v7;
    if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v7 == v3) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v8 = *(_DWORD*)(v5 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v5 + 24);
    v12 = *(_QWORD*)(v5 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v5 = v13;
    }
  }
  if (game_GameModeData_instance_ == 0 ||
      (v14 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v14 + 152) != 4 ||
      *(_QWORD*)(v14 + 168) != *(_QWORD*)(*(_QWORD*)v5 + 120LL)) {
    if (v1 < 0) {
      if (v2 != v3) {
        for (i = v2 + 1;; ++i) {
          v15 = (_QWORD*)*(i - 1);
          if (v15[12] == 0 && v15[69] == 0) {
            break;
          }
        }
      LABEL_32:
        if (v15[4] == v15[3]) {
          if (v1 < 0) {
            for (j = v2 + 1;; ++j) {
              v20 = (_QWORD*)*(j - 1);
              if (v20[12] == 0 && v20[69] == 0) {
                break;
              }
            }
          }
          else {
            v21 = *v2;
            v19 = v2 + 1;
            v20 = (_QWORD*)v21;
            if (*(_DWORD*)(v21 + 84) != v1) {
              do {
                v22 = *v19++;
                v20 = (_QWORD*)v22;
              } while (*(_DWORD*)(v22 + 84) != v1);
            }
          }
          v24 = (__int64*)v20[3];
          v25 = (__int64*)v20[4];
          while (v24 != v25) {
            v26 = *v24++;
            SpotMgr_1333f20_alt1(v26);
          }
        }
      }
    }
    else if (v2 != v3) {
      v15 = (_QWORD*)*v2;
      if (*(_DWORD*)(*v2 + 84) != v1) {
        v16 = v2 + 1;
        do {
          v17 = *v16++;
          v15 = (_QWORD*)v17;
        } while (*(_DWORD*)(v17 + 84) != v1);
      }
      goto LABEL_32;
    }
    SpotMgr_1334560_alt1(*(_QWORD*)(GameData_21c9700 + 8));
  }
}

__int64 ProcGmapMove_1549800(__int64 result)
{
  if (GameData_22506e0 != 0) {
    return GameRoutine_14c6620(result);
  }
  return result;
}

__int64 ProcGmapMove_1549820(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* i;
  void* v17;
  __int64* v18;
  __int64 v19;
  _QWORD v20[2];

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v20[1] = &GameData_1ab570b;
    result = game_HashString(&GameData_1ab570b);
    v20[0] = result;
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v20)) == 0 ||
        *(_DWORD*)(result + 32) == 0) {
      v2 = *(_QWORD*)(GameData_21c96e8 + 8);
      v3 = *(_DWORD*)(v2 + 56);
      v4 = *(__int64***)(v2 + 8);
      v5 = *(__int64***)(v2 + 16);
      if (v3 < 0) {
        for (; v4 != v5; ++v4) {
          v6 = *v4;
          if ((*v4)[12] == 0 && v6[69] == 0) {
            goto LABEL_16;
          }
        }
      }
      else if (v4 != v5) {
        while (1) {
          v7 = *v4++;
          v6 = v7;
          if (*((_DWORD*)v7 + 21) == v3) {
            break;
          }
          if (v4 == v5) {
            goto LABEL_12;
          }
        }
      LABEL_16:
        v8 = *v6;
      LABEL_17:
        result = Impl_13261c0(v8);
        if ((unsigned __int8)result != 4) {
          return result;
        }
        v9 = *(_QWORD*)(GameData_21c96e8 + 8);
        v10 = *(_DWORD*)(v9 + 56);
        v11 = *(__int64**)(v9 + 8);
        v12 = *(__int64**)(v9 + 16);
        if (v10 < 0) {
          if (v11 != v12) {
            for (i = v11 + 1;; ++i) {
              v13 = (__int64*)*(i - 1);
              if (v13[12] == 0 && v13[69] == 0) {
                break;
              }
            }
          LABEL_29:
            v17 = (void*)v13[1];
            if (v17 == nullptr) {
              return result;
            }
            if (v10 < 0) {
              if (v11 != v12) {
                while (1) {
                  v18 = (__int64*)*v11;
                  if (*(_QWORD*)(*v11 + 96) == 0 && v18[69] == 0) {
                    break;
                  }
                  if (++v11 == v12) {
                    goto LABEL_36;
                  }
                }
              LABEL_43:
                result = *v18;
                if (v17 == (void*)*v18) {
                  return result;
                }
                return GameRoutine_14c46a0(v1, 0);
              }
            }
            else {
              while (v11 != v12) {
                v19 = *v11++;
                v18 = (__int64*)v19;
                if (*(_DWORD*)(v19 + 84) == v10) {
                  goto LABEL_43;
                }
              }
            }
          LABEL_36:
            result = game_gmap_SpotMgr_GetCurrentSpot(result);
            if (v17 == (void*)result) {
              return result;
            }
            return GameRoutine_14c46a0(v1, 0);
          }
        }
        else if (v11 != v12) {
          v13 = (__int64*)*v11;
          if (*(_DWORD*)(*v11 + 84) != v10) {
            v14 = v11 + 1;
            do {
              v15 = *v14++;
              v13 = (__int64*)v15;
            } while (*(_DWORD*)(v15 + 84) != v10);
          }
          goto LABEL_29;
        }
        v17 = &GameData_1a0d058;
        if (&GameData_1a0d058 == nullptr) {
          return result;
        }
        goto LABEL_36;
      }
    LABEL_12:
      v8 = game_gmap_SpotMgr_GetCurrentSpot(result);
      goto LABEL_17;
    }
  }
  return result;
}

__int64 ProcGmapMove_1549a40()
{
  __int64 v0;
  __int64 result;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  return result;
}

__int64 ProcGmapMove_1549ac0(__int64 result)
{
  __int64 v1;
  _BYTE* v2;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v1 != 0) {
    v2 = *(_BYTE**)(v1 + 72);
    if (v2 != nullptr && *v2 != 0) {
      return GameRoutine_153a260(*GameData_212d700[0], result);
    }
  }
  return result;
}

__int64 ProcGmapMove_1549b00(__int64 result)
{
  __int64 v1;
  const char* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v1 != 0) {
    v2 = *(const char**)(v1 + 72);
    if (v2 != nullptr && *v2 != 0 && *GameData_212d460[0] == 0) {
      v4 = result;
      v5 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770_alt1(v5, v2, nullptr);
      v6 = *(_QWORD*)(v4 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(v4 + 40);
      }
      *(_QWORD*)(v4 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = v4;
      *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
      if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
  }
  return result;
}

__int64 ProcGmapMove_1549c60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;

  v1 = result;
  v2 = GameData_212d748[0];
  if (game_GameModeData_instance_ == 0 ||
      (v3 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v3 + 152) != 4 ||
      (v4 = *(_QWORD*)GameData_212d748[0],
       v5 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL),
       *(_QWORD*)(v3 + 168) != *(_QWORD*)(*(_QWORD*)v5 + 120LL))) {
    result = ProcGmapMove_1549e60_alt1();
    if ((result & 1) != 0) {
      v6 = 16;
    }
    else {
      v7 = *(_QWORD*)(*GameData_212d728[0] + 8);
      LayoutAccessor_155e830(*(_QWORD*)(v7 + 16), 1);
      result = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
      if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
        result = GameRoutine_17b8e80(result, 1);
      }
      *(_DWORD*)(v7 + 5856) |= 0x10000u;
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
      if (*(_QWORD*)(v8 + 16) != 0) {
        v9 = *(_DWORD*)(v8 + 32);
        *(_QWORD*)v8 = 0;
        *(_QWORD*)(v8 + 8) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_BYTE*)(v8 + 24) = 0;
        *(_DWORD*)(v8 + 32) = v9 + 1;
      }
      v6 = 7;
    }
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = v6;
    *(_DWORD*)(v1 + 152) = 4;
    return result;
  }
  v10 = *(_QWORD*)GameData_212d750;
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 16;
  *(_DWORD*)(result + 152) = 2;
  if (*(_BYTE*)(*(_QWORD*)v5 + 113LL) == 1) {
    v11 = *(_QWORD*)(*GameData_212c790 + 8);
    v12 = *(_DWORD*)(v11 + 56);
    v13 = *(__int64**)(v11 + 8);
    v14 = *(__int64**)(v11 + 16);
    if (v12 < 0) {
      for (; v13 != v14; ++v13) {
        v15 = *v13;
        if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
          goto LABEL_22;
        }
      }
    }
    else {
      while (v13 != v14) {
        v16 = *v13++;
        v15 = v16;
        if (*(_DWORD*)(v16 + 84) == v12) {
          goto LABEL_22;
        }
      }
    }
    v15 = 0;
  LABEL_22:
    if (*(_BYTE*)(v15 + 512) != 0) {
      *(_BYTE*)(v15 + 512) = 0;
      if (v10 != 0) {
        result = GameRoutine_995200(v15 + 112);
        v4 = *(_QWORD*)v2;
      }
    }
  }
  v17 = *(_QWORD*)(v4 + 8);
  if (*(_QWORD*)(v17 + 16) != 0) {
    v18 = *(_DWORD*)(v17 + 32);
    *(_QWORD*)v17 = 0;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    *(_BYTE*)(v17 + 24) = 0;
    *(_DWORD*)(v17 + 32) = v18 + 1;
  }
  return result;
}

unsigned int* ProcGmapMove_1549e60()
{
  unsigned int* result;
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  result = TroopMgr_134c680();
  if (result != nullptr) {
    if (GameVariable_718130((__int64)result, 0)) {
      v1 = TroopMgr_134c680();
      if (*((_BYTE*)v1 + 113) == 1) {
        TroopMgr_134b820((void*)(&v7_.v7), (__int64)v1);
        v2 = v7_.v7;
        v3 = v7_.v8;
        if (v7_.v7 != v7_.v8) {
          do {
            v4 = *(_QWORD*)v2;
            if (*(_BYTE*)(*(_QWORD*)v2 + 512LL) != 0) {
              v5 = GameData_21f1618;
              *(_BYTE*)(v4 + 512) = 0;
              if (v5 != 0) {
                GameHr_995200(v4 + 112);
              }
            }
            v2 += 8;
          } while (v2 != v3);
          v2 = v7_.v7;
        }
        if (v2 != 0) {
          v7_.v8 = v2;
          v6 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v2);
        }
      }
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 5;
      return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 ProcGmapMove_1549f60(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v6_.v7 = v6_.v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 24LL))(v3, v6_.v6);
    }
    else {
      v6_.v7 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    }
  }
  else {
    v6_.v7 = nullptr;
  }
  GameRoutine_654050(v6_.v6, (_QWORD*)(a1 + 1152));
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure_Invoke(__int64 a1,
                                                                long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = GameData_212c790;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if ((v5 & 0x80000000) == 0) {
    while (v6 != v7) {
      v9 = *v6++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  if (v6 == v7) {
    goto LABEL_7;
  }
  while (1) {
    v8 = *v6;
    if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
      break;
    }
    if (++v6 == v7) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v10 = GameRoutine_1531110(*(_QWORD*)(GameData_21f1648 + 8), v8, a2);
  *(_BYTE*)(*(_QWORD*)(*v3 + 8) + 60LL) = 1;
  GameRoutine_120dd60(v10);
  *(_DWORD*)(v2 + 152) = 1;
  return 2;
}

__int64 game_gmap_ProcGmapMove_CheckContinueMove_closure0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float32x4_t* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 3;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v6 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v7 = v5 + 1;
    v6 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v7++;
        v6 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  game_gmap_133f280(v6);
  v10 = *(_QWORD*)(*v2 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  if (v11 < 0) {
    while (1) {
      v14 = *v12;
      if (*(_QWORD*)(*v12 + 96) == 0 && *(_QWORD*)(v14 + 552) == 0) {
        break;
      }
      ++v12;
    }
  }
  else {
    v15 = *v12;
    v13 = v12 + 1;
    v14 = v15;
    if (*(_DWORD*)(v15 + 84) != v11) {
      do {
        v16 = *v13++;
        v14 = v16;
      } while (*(_DWORD*)(v16 + 84) != v11);
    }
  }
  v17 = *(float32x4_t**)(*(_QWORD*)(v14 + 32) - 8LL);
  if (v17 != nullptr) {
    GameRoutine_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), v17 + 2);
  }
  *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) |= 0x10u;
  *(_QWORD*)(v1 + 152) = 0;
  v18 = *(_QWORD**)(v1 + 192);
  *(_QWORD*)(v1 + 192) = 0;
  if (v18 == (_QWORD*)(v1 + 160)) {
    v19 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_22;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
LABEL_22:
  v20 = *(_QWORD*)(v1 + 8);
  if (v20 == 0) {
    return 3;
  }
  while (*(_BYTE*)v20 != 2) {
    if (*(_BYTE*)v20 == 0) {
      return 3;
    }
  LABEL_25:
    v20 += 64;
  }
  if (*(_DWORD*)(v20 + 32) != 4) {
    goto LABEL_25;
  }
  *(_QWORD*)(v1 + 16) = v20;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 3;
}

__int64 ProcGmapMove_154ac20(__int64 a1, __n128 a2, long double a3)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 result;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  bool v23;
  int v24;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      result = *(_QWORD*)(a1 + 224);
      if (result != 0) {
        goto LABEL_36;
      }
      goto LABEL_29;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f) {
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160,
                                                    *((float*)&v7 + 3));
      LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
      result = *(_QWORD*)(a1 + 224);
      if (LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f) {
        if (result != 0) {
          goto LABEL_25;
        }
        goto LABEL_16;
      }
      if (result != 0) {
        goto LABEL_36;
      }
    LABEL_29:
      v16 = *(_QWORD*)(GameData_21c96e8 + 8);
      v17 = *(_DWORD*)(v16 + 56);
      v18 = *(__int64**)(v16 + 8);
      if (v17 < 0) {
        while (1) {
          result = *v18;
          if (*(_QWORD*)(*v18 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
            break;
          }
          ++v18;
        }
      }
      else {
        v20 = *v18;
        v19 = v18 + 1;
        result = v20;
        if (*(_DWORD*)(v20 + 84) != v17) {
          do {
            v21 = *v19++;
            result = v21;
          } while (*(_DWORD*)(v21 + 84) != v17);
        }
      }
    LABEL_36:
      result = GameRoutine_13407e0(result, *(long double*)&a2, a3);
      v15 = *(unsigned __int8**)(a1 + 16);
      if (v15 != nullptr) {
      LABEL_37:
        v22 = *v15;
        v23 = v22 > 0x10;
        v24 = (1 << v22) & 0x1CE00;
        if (!v23 && v24 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
    LABEL_42:
      *(_WORD*)(a1 + 136) |= 8u;
      return result;
    }
  }
  result = *(_QWORD*)(a1 + 224);
  if (result != 0) {
    goto LABEL_25;
  }
LABEL_16:
  v9 = *(_QWORD*)(GameData_21c96e8 + 8);
  v10 = *(_DWORD*)(v9 + 56);
  v11 = *(__int64**)(v9 + 8);
  if (v10 < 0) {
    while (1) {
      result = *v11;
      if (*(_QWORD*)(*v11 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
        break;
      }
      ++v11;
    }
  }
  else {
    v13 = *v11;
    v12 = v11 + 1;
    result = v13;
    if (*(_DWORD*)(v13 + 84) != v10) {
      do {
        v14 = *v12++;
        result = v14;
      } while (*(_DWORD*)(v14 + 84) != v10);
    }
  }
LABEL_25:
  if (*(float*)(result + 276) != *(float*)(result + 272)) {
    return result;
  }
  v15 = *(unsigned __int8**)(a1 + 16);
  if (v15 != nullptr) {
    goto LABEL_37;
  }
  goto LABEL_42;
}

void ProcGmapMove_154b040()
{
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;
  __int64 v4;
  __int128 v5;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v1 = (v0 & 8) != 0 ? 2 : 3;
    if ((v1 & v0) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] == 1.0f) {
    LABEL_13:
      v4 = *(_QWORD*)(GameData_21f1628 + 16);
      if ((*(_BYTE*)(v4 + 966) & 1) == 0) {
        v5 = *(_OWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
        Cursor_734a80(v4 + 784, &v5);
      }
    }
  }
}

#pragma GCC visibility pop
