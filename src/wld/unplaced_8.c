#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Material_addbe0(_QWORD* result, __int64, __int64, char);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_a81a70(__int64, unsigned __int64);
__int64 GameRoutine_c74bc0(__int64, _QWORD*, _QWORD*, int);
__int64 GrassObject_c75f90(_QWORD*, long double*, __int64, __int64);
__int64 Model_a61a80(__int64, _QWORD*);
__int64 Model_a64140(__int64 result);
__int64 ResFile_5e5f00(__int64);
__int64 Scene_a70a20(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_c03400(_QWORD*);
bool GameRoutine_ad7390(_QWORD*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea68;
extern __int64 (*GameData_1fd14b8[])();
extern __int64 (*GrassModule_Destructor_ptr[])();
extern __int64 GameData_212c638;
extern __int64 GameData_21323b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1aa4dd7[13];
extern int* GameData_212ea60;
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) GameRoutine_a7f560();
void __attribute__((noreturn)) GameRoutine_c05650();
void __attribute__((noreturn)) GameRoutine_c06410();
void __attribute__((noreturn)) GameRoutine_c06430();
void __attribute__((noreturn)) GameRoutine_c06450();
void __attribute__((noreturn)) GameRoutine_c06470();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* wld_c00fc0(__int64 a1, __int64 a2, __int64** a3, int* a4);

_QWORD* wld_c00fc0(__int64 a1, __int64 a2, __int64** a3, int* a4)
{
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64** v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  char* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  char* v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  bool v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  __int64* v123;
  char* v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int8* v131;
  unsigned __int8* v132;
  unsigned __int64 v133;
  unsigned __int8* v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  int v142;
  __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  float v149;
  float v150;
  int v151;
  float v152;
  float v153;
  float v154;
  float v155;
  __int128 v156;
  float v157;
  int v158;
  unsigned __int64 v159;
  unsigned int v160;
  unsigned int v161;
  __int128 v162;
  __int128 v163;
  __int64 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  int v175;
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
  int v186;
  __int64 v187;
  _QWORD* v188;
  __int64 v189;
  __int64 v190;
  unsigned int v191;
  int* v192;
  int v193;
  bool v194;
  int v195;
  int v196;
  int v197;
  unsigned int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  unsigned int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int* v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  __int64 v219;
  __int64 v220;
  int* v221;
  __int64 v222;
  _QWORD* v223;
  int* v224;
  __int64* v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  int v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  int v240;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  unsigned __int64 v246;
  __int64 v247;
  bool v248;
  __int64 v249;
  __int64 v250;
  __int64* v251;
  _QWORD* v252;
  __int64 v253;
  __int64 v254;
  int v256;
  _QWORD* v257;
  __int64 v258;
  __int64 v259;
  _QWORD** v261;
  _QWORD** v262;
  _QWORD* v263;
  int v264;
  int v265;
  int v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64* v270;
  unsigned __int64 v271;
  __int64* v272;
  __int64 v273;
  unsigned __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  unsigned __int64 v278;
  __int64 v279;
  __int64* v280;
  __int64 v281;
  __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  __int64 v285;
  unsigned __int64 v286;
  __int64 v287;
  unsigned __int64 v288;
  __int64 v289;
  unsigned __int64 v290;
  __int64 v291;
  __int64* v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  _QWORD* v298;
  __int64 v299;
  unsigned __int64 v300;
  unsigned __int64 v301;
  char* v302;
  __int64 v303;
  __int64 v304;
  unsigned int v305;
  __int64 v306;
  unsigned __int64 v307;
  unsigned __int64* v308;
  __int64 v309;
  __int64 v310;
  char* v311;
  __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  unsigned __int64 v315;
  __int64 v316;
  __int64 v317;
  unsigned __int64 v318;
  unsigned __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  int v323;
  int* v324;
  __int64 v325;
  int v326;
  char* v327;
  __int64 v328;
  unsigned __int64 v329;
  unsigned __int64 v330;
  char* v331;
  __int64 v332;
  unsigned __int8* v333;
  unsigned __int8* v334;
  unsigned __int64 v335;
  unsigned __int8* v336;
  unsigned __int64 v337;
  unsigned __int64 v338;
  __int64 v339;
  __int64 v340;
  unsigned __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  int v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  unsigned __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  _QWORD* v376;
  __int64 v377;
  __int64* v378;
  __int64* i;
  __int64 v380;
  __int64 v381;
  unsigned __int64 v382;
  __int64* v383;
  __int64 v384;
  unsigned __int64 v385;
  __int64 v386;
  unsigned __int64 v387;
  __int64 v388;
  unsigned __int64 v389;
  __int64 v390;
  __int64 v391;
  unsigned __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  unsigned __int8 explicit;
  int* v397;
  int v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  int v402;
  __int64 v403;
  __int64 v404;
  _BYTE* v405;
  _BYTE* v406;
  bool v407;
  _QWORD* v408;
  unsigned __int64 v409;
  __int64 v410;
  __int64 v411;
  unsigned __int64 v412;
  __int64 v413;
  unsigned __int64 v414;
  __int64 v415;
  unsigned __int64 v416;
  __int64 v417;
  unsigned __int64 v418;
  __int64 v419;
  __int64 v420;
  _QWORD* v421;
  unsigned __int64 v422;
  __int64 v423;
  __int64 v424;
  unsigned __int64 v425;
  __int64 v426;
  unsigned __int64 v427;
  __int64 v428;
  unsigned __int64 v429;
  __int64 v430;
  unsigned __int64 v431;
  __int64 v432;
  __int64 v433;
  int v435;
  __int64 v436;
  unsigned __int64 v437;
  unsigned __int64 v438;
  int v439;
  atomic_ullong* v440;
  atomic_ullong* v441;
  __int64 v442;
  _QWORD* v443;
  __int64 v445;
  __int64 v446;
  __int128 v447;
  int v448;
  __int64 v449;
  __int128 v450;
  __int128 v451;
  __int64 v452;
  __int64* v453;
  _QWORD* v454;
  __int64 v455;
  struct {
    __int64 v456;
    __int64 v457;
  } v456_;
  struct {
    __int64 v458;
    __int64 v459;
  } v458_;
  struct {
    __int64 v460;
    __int64 v461;
  } v460_;
  struct {
    __int128 v462;
    char* v463;
  } v462_;

  nn_os_LockMutex((__int64)GameData_212df28);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      320, 16, 0);
  *(_BYTE*)(v8 + 16) = 0;
  v9 = (_QWORD*)v8;
  v10 = (__int64*)GameData_212c2a0;
  *(_DWORD*)(v8 + 17) = 33686018;
  v11 = *a4;
  *(_QWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v10);
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v10);
  v435 = v11;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  *(_QWORD*)(v8 + 88) = 0;
  *(_QWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 112) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)(v8 + 136) = 0;
  *(_QWORD*)(v8 + 144) = 0;
  *(_QWORD*)(v8 + 232) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_WORD*)(v8 + 312) = 1;
  *(_QWORD*)(v8 + 24) = 0;
  v14 = (_QWORD*)(v8 + 24);
  *(_QWORD*)(v8 + 96) = 0;
  v15 = (__int64**)(v8 + 96);
  v455 = a2;
  *(_QWORD*)v8 = GrassModule_Destructor_ptr;
  *(_QWORD*)(v8 + 8) = a1;
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
  v17 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10 + 8);
  *(_QWORD*)(v8 + 216) = v13;
  *(_QWORD*)(v8 + 200) = v17;
  *(_QWORD*)(v8 + 208) = v12;
  v18 = *v10;
  v19 = v10[1];
  *(_QWORD*)(v8 + 152) = 0;
  *(_QWORD*)(v8 + 160) = v18;
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10);
  *(_QWORD*)(v8 + 184) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 8);
  *(_QWORD*)(v8 + 192) = v16;
  LODWORD(v16) = *(_DWORD*)(a2 + 20);
  *(_QWORD*)(v8 + 224) = 0;
  *(_QWORD*)(v8 + 168) = v19;
  *(_QWORD*)(v8 + 176) = v20;
  v453 = (__int64*)(v8 + 224);
  *(_DWORD*)(v8 + 248) = -1;
  *(_DWORD*)(v8 + 252) = v16;
  *(_QWORD*)(v8 + 288) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(v8 + 296) = 0;
  *(_QWORD*)(v8 + 304) = 0x3F8000003EB33333LL;
  wld_c03400(&v456_.v456);
  v21 = fw_memory_HeapManager_Allocate(*v7, 272, 16, 0);
  *(_BYTE*)(v21 + 8) = 1;
  v22 = GameData_21323b8;
  v23 = v9[37];
  *(_BYTE*)(v21 + 256) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)(v21 + 24) = 0;
  *(_QWORD*)(v21 + 32) = 0;
  *(_QWORD*)(v21 + 40) = 0;
  *(_QWORD*)(v21 + 48) = 0;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 80) = 0;
  *(_QWORD*)(v21 + 88) = 0;
  *(_QWORD*)(v21 + 96) = 0;
  *(_QWORD*)(v21 + 104) = 0;
  *(_QWORD*)(v21 + 112) = 0;
  *(_QWORD*)(v21 + 120) = 0;
  *(_QWORD*)(v21 + 128) = 0;
  *(_QWORD*)(v21 + 136) = 0;
  *(_QWORD*)(v21 + 144) = 0;
  *(_QWORD*)(v21 + 152) = 0;
  *(_QWORD*)(v21 + 160) = 0;
  *(_QWORD*)(v21 + 168) = 0;
  *(_QWORD*)(v21 + 176) = 0;
  *(_QWORD*)(v21 + 184) = 0;
  *(_QWORD*)(v21 + 192) = 0;
  *(_QWORD*)(v21 + 200) = 0;
  *(_QWORD*)(v21 + 208) = 0;
  *(_QWORD*)(v21 + 216) = 0;
  *(_QWORD*)(v21 + 224) = 0;
  *(_QWORD*)(v21 + 232) = 0;
  *(_QWORD*)(v21 + 240) = 0;
  v454 = v9;
  v9[37] = v21;
  *(_QWORD*)v21 = v22 + 16;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*v7 + v24, v23);
  }
  v436 = a1;
  v26 = v9;
  v25 = a2;
  if (v15 != a3) {
    v27 = (char*)v9[12];
    v29 = *a3;
    v28 = a3[1];
    v30 = v454[14];
    v31 = (char*)v28 - (char*)*a3;
    if (v31 <= (unsigned __int64)(v30 - (_QWORD)v27)) {
      v35 = (char*)v454[13];
      if (v31 <= (unsigned __int64)(v35 - v27)) {
        if (v29 != v28) {
          do {
            v41 = *v29;
            v40 = v29[1];
            if (v40 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                        memory_order_relaxed);
            }
            v42 = *((_QWORD*)v27 + 1);
            *(_QWORD*)v27 = v41;
            *((_QWORD*)v27 + 1) = v40;
            if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
              std___1___shared_weak_count___release_weak(v42);
            }
            v29 += 2;
            v27 += 16;
          } while (v29 != v28);
          v35 = (char*)v454[13];
        }
        for (; v35 != v27; v35 -= 16) {
          v52 = *((_QWORD*)v35 - 1);
          if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
            std___1___shared_weak_count___release_weak(v52);
          }
        }
        v26 = v454;
        v25 = v455;
        v454[13] = v27;
      }
      else {
        v36 = (__int64*)((char*)v29 + ((char*)v35 - (char*)v27));
        if (v35 != v27) {
          do {
            v38 = *v29;
            v37 = v29[1];
            if (v37 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                        memory_order_relaxed);
            }
            v39 = *((_QWORD*)v27 + 1);
            *(_QWORD*)v27 = v38;
            *((_QWORD*)v27 + 1) = v37;
            if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
              std___1___shared_weak_count___release_weak(v39);
            }
            v29 += 2;
            v27 += 16;
          } while (v29 != v36);
          v25 = v455;
          v35 = (char*)v454[13];
        }
        v49 = v35;
        if (v36 != v28) {
          v49 = v35;
          v50 = v35;
          do {
            *(_QWORD*)v50 = *v36;
            v51 = v36[1];
            *((_QWORD*)v50 + 1) = v51;
            if (v51 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                        memory_order_relaxed);
            }
            v36 += 2;
            v50 += 16;
            v49 += 16;
          } while (v36 != v28);
        }
        v26 = v454;
        v454[13] = v49;
      }
    }
    else {
      v32 = v31 >> 4;
      if (v27 != nullptr) {
        v33 = (char*)v454[13];
        if (v27 == v33) {
          goto LABEL_32;
        }
        do {
          v34 = *((_QWORD*)v33 - 1);
          if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak(v34);
          }
          v33 -= 16;
        } while (v33 != v27);
        v43 = (char*)v454[12];
        v454[13] = v27;
        v27 = v43;
        if (v43 != nullptr) {
        LABEL_32:
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v27);
        }
        v30 = 0;
        v15[1] = nullptr;
        v15[2] = nullptr;
        *v15 = nullptr;
      }
      v26 = v454;
      if (v32 >> 60 != 0) {
        goto LABEL_531;
      }
      v45 = v30 >> 3;
      if (v30 >> 3 <= v32) {
        v45 = v32;
      }
      v46 = (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                          : v45;
      if (v46 >> 60 != 0) {
      LABEL_531:
        GameRoutine_c05650();
      }
      v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v46, 16, 0);
      v454[12] = v47;
      v454[13] = v47;
      v454[14] = &v47[2 * v46];
      if (v29 == v28) {
        v25 = v455;
      }
      else {
        v25 = v455;
        do {
          *v47 = *v29;
          v48 = v29[1];
          v47[1] = v48;
          if (v48 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                      memory_order_relaxed);
          }
          v29 += 2;
          v47 += 2;
        } while (v29 != v28);
      }
      v454[13] = v47;
    }
  }
  v53 = v26[3];
  v54 = (_QWORD*)v26[4];
  v55 = *(int*)(v25 + 8);
  v56 = (unsigned __int64)v54 - v53;
  v57 = ((__int64)v54 - v53) >> 3;
  v58 = v55 >= v57;
  v59 = v55 - v57;
  if (v55 <= v57) {
    v68 = v26;
    if (!v58) {
      v70 = (_QWORD*)(v53 + 8 * v55);
      while (v54 != v70) {
        v72 = *--v54;
        v71 = v72;
        *v54 = 0;
        if (v72 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v71 + 8LL))(v71);
        }
      }
      v26[4] = v70;
    }
  }
  else {
    v60 = v26[5];
    if (v59 <= (v60 - (__int64)v54) >> 3) {
      memset(v26[4], 0, 8 * v59);
      v68 = v26;
      v26[4] = &v54[v59];
    }
    else {
      if ((v55 & 0x80000000) != 0) {
        GameRoutine_c06410();
      }
      v61 = v60 - v53;
      if (v61 >> 2 > v55) {
        v55 = v61 >> 2;
      }
      if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF8LL) {
        v62 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v62 = v55;
      }
      if (v62 >> 61 != 0) {
        goto LABEL_522;
      }
      v63 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v62, 16, 0);
      v64 = v63 + v56;
      v65 = v63 + 8 * v62;
      memset(v63 + v56, 0, 8 * v59);
      v66 = v64 + 8 * v59;
      v67 = v64 - 8 * v57;
      memcpy(v67, v53, v56);
      v68 = v454;
      v454[3] = v67;
      v454[4] = v66;
      v454[5] = v65;
      if (v53 != 0) {
        v69 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v69 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v53);
      }
    }
  }
  v73 = v68[15];
  v74 = v68[16];
  v75 = v68;
  v76 = v74 - v73;
  v77 = *(int*)(v455 + 8);
  v78 = (v74 - v73) >> 3;
  v79 = v77 >= v78;
  v80 = v77 - v78;
  if (v77 <= v78) {
    v90 = v75;
    v91 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (!v79) {
      v90[16] = v73 + 8 * v77;
    }
  }
  else {
    v81 = v75[17];
    if (v80 <= (v81 - v74) >> 3) {
      memset(v74, 0, 8 * v80);
      v90 = v75;
      v75[16] = v74 + 8 * v80;
      v91 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    else {
      if ((v77 & 0x80000000) != 0) {
      LABEL_524:
        GameRoutine_c06430();
      }
      v82 = v81 - v73;
      if (v82 >> 2 > v77) {
        v77 = v82 >> 2;
      }
      if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF8LL) {
        v83 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v83 = v77;
      }
      if (v83 >> 61 != 0) {
        goto LABEL_522;
      }
      v84 = fw_memory_g_heap_manager_ptr;
      v85 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v83, 16, 0);
      v86 = v85 + v76;
      v87 = v85 + 8 * v83;
      memset(v85 + v76, 0, 8 * v80);
      v88 = v86 + 8 * v80;
      v89 = v86 - 8 * v78;
      memcpy(v89, v73, v76);
      v90 = v454;
      v454[15] = v89;
      v454[16] = v88;
      v454[17] = v87;
      v91 = (__int64*)v84;
      if (v73 != 0) {
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)v84 + 200LL) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v84 + v92, v73);
      }
    }
  }
  v93 = v90[28];
  v94 = *(int*)(v455 + 12);
  if (0x6DB6DB6DB6DB6DB7LL * ((v90[30] - v93) >> 4) < v94) {
    if ((v94 & 0x80000000) != 0) {
    LABEL_523:
      GameRoutine_c06450();
    }
    v95 = v90[29];
    v96 = 112 * v94;
    v97 = fw_memory_HeapManager_Allocate(*v91, 112 * v94, 16, 0);
    v98 = v97 + v96;
    v99 = v97;
    v100 = v97 + v95 - v93;
    if (v95 != v93) {
      v101 = v93;
      v102 = v97;
      do {
        v103 = *(_QWORD*)(v101 + 40);
        v104 = *(_DWORD*)(v101 + 48);
        *(_QWORD*)(v102 + 24) = *(_QWORD*)(v101 + 24);
        *(_QWORD*)(v102 + 40) = v103;
        *(_QWORD*)(v102 + 8) = *(_QWORD*)(v101 + 8);
        v105 = *(_QWORD*)v101;
        *(_QWORD*)(v102 + 16) = *(_QWORD*)(v101 + 16);
        *(_QWORD*)v102 = v105;
        v106 = *(_QWORD*)(v101 + 32);
        *(_DWORD*)(v102 + 48) = v104;
        *(_QWORD*)(v102 + 32) = v106;
        *(_QWORD*)(v102 + 56) = *(_QWORD*)(v101 + 56);
        *(_QWORD*)(v102 + 64) = *(_QWORD*)(v101 + 64);
        *(_QWORD*)(v102 + 72) = *(_QWORD*)(v101 + 72);
        *(_QWORD*)(v101 + 64) = 0;
        *(_QWORD*)(v101 + 72) = 0;
        *(_QWORD*)(v101 + 56) = 0;
        v108 = *(_QWORD*)(v101 + 80);
        v107 = *(_QWORD*)(v101 + 88);
        v109 = *(_QWORD*)(v101 + 96);
        v101 += 112;
        *(_QWORD*)(v102 + 88) = v107;
        *(_QWORD*)(v102 + 96) = v109;
        *(_QWORD*)(v102 + 80) = v108;
        v102 += 112;
      } while (v101 != v95);
      do {
        v110 = *(_QWORD*)(v93 + 56);
        if (v110 != 0) {
          *(_QWORD*)(v93 + 64) = v110;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v111 = 128;
          }
          else {
            v111 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v110);
        }
        v93 += 112;
      } while (v93 != v95);
      v93 = *v453;
      v91 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    v454[28] = v99;
    v454[29] = v100;
    v90 = v454;
    v454[30] = v98;
    if (v93 != 0) {
      v112 = 128;
      if (*(_QWORD*)(*v91 + 200) == 0) {
        v112 = 56;
      }
      nn_mem_StandardAllocator_Free(*v91 + v112, v93);
    }
  }
  v113 = v90[9];
  v114 = *(int*)(v455 + 8);
  v115 = 2 * v114;
  if (2 * v114 > (unsigned __int64)((v90[11] - v113) >> 4)) {
    if ((v114 & 0x80000000) != 0) {
    LABEL_526:
      GameRoutine_c06470();
    }
    v116 = v90[10] - v113;
    v117 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v114, 16, 0);
    memcpy(v117, v113, v116);
    v90[9] = v117;
    v90[10] = v117 + v116;
    v90[11] = v117 + 16 * v115;
    if (v113 != 0) {
      v118 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v118 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v118, v113);
    }
  }
  v443 = v14;
  v119 = *(_QWORD*)(v455 + 56);
  if (v119 == 0) {
    v125 = *(_DWORD*)(v455 + 88);
    v126 = *(_QWORD*)(v455 + 80);
    v127 = v455;
    *((_DWORD*)v90 + 62) = -1;
    v128 = *(_QWORD*)(v455 + 64);
    v129 = *(_QWORD*)(v455 + 72);
    v90[34] = v126;
    v90[32] = v128;
    v90[33] = v129;
    *((_DWORD*)v90 + 70) = v125;
    v123 = (__int64*)fw_memory_g_heap_manager_ptr;
    goto LABEL_170;
  }
  v120 = v456_.v456;
  v121 = strlen(*(const char**)(v455 + 56));
  if (v121 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_525:
    String_60a1d0();
  }
  v122 = v121;
  v123 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v121 >= 0x17) {
    if ((v121 | 7) == 0x17) {
      v130 = 26;
    }
    else {
      v130 = (v121 | 7) + 1;
    }
    v124 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v130, 16, 0);
    *((_QWORD*)&v462_.v462 + 1) = v122;
    v462_.v463 = v124;
    *(_QWORD*)&v462_.v462 = v130 | 1;
    goto LABEL_134;
  }
  LOBYTE(v462_.v462) = 2 * v121;
  v124 = (char*)&v462_.v462 + 1;
  if (v121 != 0) {
  LABEL_134:
    memmove((__int64)v124, v119, v122);
  }
  v124[v122] = 0;
  v131 = *(unsigned __int8**)(v120 + 32);
  v132 = *(unsigned __int8**)(v120 + 40);
  if (v131 == v132) {
    v134 = *(unsigned __int8**)(v120 + 32);
  LABEL_160:
    if (v134 == v132) {
    LABEL_162:
      v142 = 0;
    }
    else {
      v142 = -1227133513 * ((unsigned __int64)(v134 - v131) >> 3);
    }
    goto LABEL_164;
  }
  if ((v462_.v462 & 1) != 0) {
    v133 = *((_QWORD*)&v462_.v462 + 1);
  }
  else {
    v133 = (unsigned __int8)v462_.v462 >> 1;
  }
  if ((v462_.v462 & 1) != 0) {
    v138 = (__int64)v462_.v463;
    v134 = *(unsigned __int8**)(v120 + 32);
    while (1) {
      v139 = *v134;
      v140 = *((_QWORD*)v134 + 1);
      if ((v139 & 1) == 0) {
        v140 = v139 >> 1;
      }
      if (v140 == v133) {
        v141 = (v139 & 1) != 0 ? *((_QWORD*)v134 + 2) : (__int64)(v134 + 1);
        if (memcmp(v141, v138, v133) == 0) {
          goto LABEL_160;
        }
      }
      v134 += 56;
      if (v134 == v132) {
        goto LABEL_162;
      }
    }
  }
  v134 = *(unsigned __int8**)(v120 + 32);
  do {
    v135 = *v134;
    v136 = *((_QWORD*)v134 + 1);
    if ((v135 & 1) == 0) {
      v136 = v135 >> 1;
    }
    if (v136 == v133) {
      v137 = (v135 & 1) != 0 ? *((_QWORD*)v134 + 2) : (__int64)(v134 + 1);
      if (memcmp(v137, (__int64)&v462_.v462 + 1, v133) == 0) {
        v123 = (__int64*)fw_memory_g_heap_manager_ptr;
        goto LABEL_160;
      }
    }
    v134 += 56;
  } while (v134 != v132);
  v142 = 0;
  v123 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_164:
  v90 = v454;
  if ((v462_.v462 & 1) != 0 && v462_.v463 != nullptr) {
    v143 = 128;
    if (*(_QWORD*)(*v123 + 200) == 0) {
      v143 = 56;
    }
    nn_mem_StandardAllocator_Free(*v123 + v143, (__int64)v462_.v463);
  }
  *((_DWORD*)v454 + 62) = v142;
  v127 = v455;
LABEL_170:
  if (*(int*)(v127 + 12) >= 1) {
    v144 = v90[29];
    v145 = 0;
    v146 = 0x249249249249249LL;
    do {
      v148 = *(_QWORD*)(v127 + 32) + 32 * v145;
      v149 = *(float*)(v148 + 12);
      v150 = *(float*)(v148 + 16);
      v151 = *(_DWORD*)(v148 + 28);
      v152 = *(float*)(v148 + 8);
      *(_QWORD*)&v156 = *(_QWORD*)v148;
      v153 =
          COERCE_FLOAT(*(_QWORD*)v148) - (float)(v149 * 0x1.0000000000000p-1f);
      {
        __typeof__(v154) z_ = (__typeof__(v154)){0};
        LODWORD(z_) = HIDWORD(*(_QWORD*)v148);
        v154 = z_;
      }
      v155 =
          COERCE_FLOAT(*(_QWORD*)v148) + (float)(v149 * 0x1.0000000000000p-1f);
      *((_QWORD*)&v156 + 1) = LODWORD(v152);
      v157 = *(float*)(v148 + 20);
      v158 = *(_DWORD*)(v148 + 24);
      *(float*)&v162 = v153;
      v159 = v90[30];
      *(float*)&v160 = v152 - (float)(v157 * 0x1.0000000000000p-1f);
      *(float*)&v161 = v152 + (float)(v157 * 0x1.0000000000000p-1f);
      *((float*)&v162 + 1) = v154 - (float)(v150 * 0x1.0000000000000p-1f);
      *(float*)&v163 = v155;
      *((_QWORD*)&v162 + 1) = v160;
      *((float*)&v163 + 1) = v154 + (float)(v150 * 0x1.0000000000000p-1f);
      *((_QWORD*)&v163 + 1) = v161;
      if (v144 < v159) {
        *(_OWORD*)v144 = v156;
        *(_OWORD*)(v144 + 16) = v162;
        *(_OWORD*)(v144 + 32) = v163;
        *(_DWORD*)(v144 + 48) = v158;
        *(_QWORD*)(v144 + 56) = 0;
        *(_QWORD*)(v144 + 64) = 0;
        *(_QWORD*)(v144 + 72) = 0;
        *(_QWORD*)(v144 + 80) = 0;
        *(_DWORD*)(v144 + 88) = v151;
        *(_QWORD*)(v144 + 92) = 0;
        *(_DWORD*)(v144 + 100) = 1065353216;
        v144 += 112LL;
      }
      else {
        v164 = *v453;
        v165 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v144 - *v453) >> 4) + 1;
        if (v165 > v146) {
          goto LABEL_523;
        }
        v447 = v163;
        v450 = v162;
        v166 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v159 - v164) >> 4);
        v451 = v156;
        if (2 * v166 > v165) {
          v165 = 2 * v166;
        }
        if (v166 >= 0x124924924924924LL) {
          v167 = v146;
        }
        else {
          v167 = v165;
        }
        if (v167 > v146) {
          goto LABEL_522;
        }
        v168 = v146;
        v445 = 112 * v167;
        v169 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 112 * v167, 16, 0);
        v170 = v169 + v144 - v164;
        v171 = v169;
        *(_DWORD*)(v170 + 48) = v158;
        *(_QWORD*)(v170 + 56) = 0;
        *(_QWORD*)(v170 + 64) = 0;
        *(_QWORD*)(v170 + 72) = 0;
        *(_QWORD*)(v170 + 80) = 0;
        *(_DWORD*)(v170 + 88) = v151;
        *(_OWORD*)v170 = v451;
        *(_OWORD*)(v170 + 16) = v450;
        *(_QWORD*)(v170 + 92) = 0;
        *(_DWORD*)(v170 + 100) = 1065353216;
        *(_OWORD*)(v170 + 32) = v447;
        if (v164 == v144) {
          v123 = (__int64*)fw_memory_g_heap_manager_ptr;
          v181 = v445;
        }
        else {
          v172 = v164;
          v173 = v169;
          do {
            v174 = *(_QWORD*)(v172 + 40);
            v175 = *(_DWORD*)(v172 + 48);
            *(_QWORD*)(v173 + 24) = *(_QWORD*)(v172 + 24);
            *(_QWORD*)(v173 + 40) = v174;
            *(_QWORD*)(v173 + 8) = *(_QWORD*)(v172 + 8);
            v176 = *(_QWORD*)v172;
            *(_QWORD*)(v173 + 16) = *(_QWORD*)(v172 + 16);
            *(_QWORD*)v173 = v176;
            v177 = *(_QWORD*)(v172 + 32);
            *(_DWORD*)(v173 + 48) = v175;
            *(_QWORD*)(v173 + 32) = v177;
            *(_QWORD*)(v173 + 56) = *(_QWORD*)(v172 + 56);
            *(_QWORD*)(v173 + 64) = *(_QWORD*)(v172 + 64);
            *(_QWORD*)(v173 + 72) = *(_QWORD*)(v172 + 72);
            *(_QWORD*)(v172 + 64) = 0;
            *(_QWORD*)(v172 + 72) = 0;
            *(_QWORD*)(v172 + 56) = 0;
            v179 = *(_QWORD*)(v172 + 80);
            v178 = *(_QWORD*)(v172 + 88);
            v180 = *(_QWORD*)(v172 + 96);
            v172 += 112;
            *(_QWORD*)(v173 + 88) = v178;
            *(_QWORD*)(v173 + 96) = v180;
            *(_QWORD*)(v173 + 80) = v179;
            v173 += 112;
          } while (v172 != v144);
          v123 = (__int64*)fw_memory_g_heap_manager_ptr;
          v181 = v445;
          do {
            v182 = *(_QWORD*)(v164 + 56);
            if (v182 != 0) {
              *(_QWORD*)(v164 + 64) = v182;
              if (*(_QWORD*)(*v123 + 200) != 0) {
                v183 = 128;
              }
              else {
                v183 = 56;
              }
              nn_mem_StandardAllocator_Free(*v123 + v183, v182);
            }
            v164 += 112;
          } while (v164 != v144);
          v164 = *v453;
        }
        v184 = v171 + v181;
        v144 = v170 + 112;
        v454[28] = v171;
        v454[29] = v170 + 112;
        v90 = v454;
        v454[30] = v184;
        if (v164 != 0) {
          if (*(_QWORD*)(*v123 + 200) != 0) {
            v185 = 128;
          }
          else {
            v185 = 56;
          }
          nn_mem_StandardAllocator_Free(*v123 + v185, v164);
        }
        v127 = v455;
        v146 = v168;
      }
      v147 = *(int*)(v127 + 12);
      ++v145;
      v90[29] = v144;
    } while (v145 < v147);
  }
  v186 = *(_DWORD*)(v127 + 8);
  if (v186 < 1) {
    v188 = v14;
    v217 = 32;
  }
  else {
    v187 = *(_QWORD*)(v127 + 24);
    v188 = v14;
    v189 = v186 & 3;
    v190 = 0;
    v191 = 0;
    if ((unsigned int)v186 >= 4) {
      v192 = (int*)(v187 + 116);
      do {
        v193 = *(v192 - 24);
        v190 += 4;
        v195 = v193 + 1023;
        v194 = v193 < -1023;
        v196 = v193 + 2046;
        if (!v194) {
          v196 = v195;
        }
        v197 = (v196 >> 10) & ~(v196 >> 31);
        if (v197 >= 32) {
          v197 = 32;
        }
        v198 = v197 + v191;
        v199 = *(v192 - 12);
        v200 = v199 + 1023;
        v194 = v199 < -1023;
        v201 = v199 + 2046;
        if (!v194) {
          v201 = v200;
        }
        v202 = (v201 >> 10) & ~(v201 >> 31);
        v203 = *v192;
        if (v202 >= 32) {
          v202 = 32;
        }
        v204 = v203 + 1023;
        v194 = v203 < -1023;
        v205 = v203 + 2046;
        if (!v194) {
          v205 = v204;
        }
        v206 = (v205 >> 10) & ~(v205 >> 31);
        if (v206 >= 32) {
          v206 = 32;
        }
        v207 = v206 + v202 + v198;
        v208 = v192[12];
        v192 += 48;
        v209 = v208 + 1023;
        v194 = v208 < -1023;
        v210 = v208 + 2046;
        if (!v194) {
          v210 = v209;
        }
        v211 = (v210 >> 10) & ~(v210 >> 31);
        if (v211 >= 32) {
          v211 = 32;
        }
        v191 = v211 + v207;
      } while ((v186 & 0x7FFFFFFC) != v190);
    }
    if ((v186 & 3) != 0) {
      v212 = (int*)(v187 + 48 * v190 + 20);
      do {
        v213 = *v212;
        v212 += 12;
        v214 = v213 + 1023;
        v215 = v213 + 2046;
        if (v213 >= -1023) {
          v215 = v214;
        }
        v216 = (v215 >> 10) & ~(v215 >> 31);
        if (v216 >= 32) {
          v216 = 32;
        }
        --v189;
        v191 += v216;
      } while (v189 != 0);
    }
    if (v191 <= 0x60) {
      if (v191 <= 0x40) {
        if (v191 <= 0x20) {
          v217 = 32;
        }
        else {
          v217 = 24;
        }
      }
      else {
        v217 = 16;
      }
    }
    else {
      v217 = 12;
    }
  }
  v439 = v217;
  v218 = *(_DWORD*)(v127 + 16);
  if (v218 >= 1) {
    v219 = 0;
    while (1) {
      v221 = (int*)(*(_QWORD*)(v127 + 40) + 32 * v219);
      v222 = *v221;
      v223 = *(_QWORD**)(*v188 + 8 * v222);
      if (v223 != nullptr) {
        goto LABEL_341;
      }
      v224 = (int*)(*(_QWORD*)(v127 + 24) + 48LL * (int)v222);
      v225 = &(*a3)[2 * *v224];
      v226 = *v225;
      if (*v225 != 0) {
        break;
      }
    LABEL_239:
      if (++v219 >= v218) {
        v186 = *(_DWORD*)(v127 + 8);
        goto LABEL_359;
      }
    }
    v446 = *v224;
    v227 = v225[1];
    if (v227 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v227 + 8), 1u,
                                memory_order_relaxed);
    }
    v442 = v227;
    v448 = v224[5];
    GameRoutine_ad7390((_QWORD*)v226);
    v228 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v226 + 8) + 592LL));
    v229 = *(unsigned __int16*)(v228 + 220);
    if (*(_WORD*)(v228 + 220) != 0) {
      v230 = 0;
      while (1) {
        GameRoutine_ad7390((_QWORD*)v226);
        v231 = *(_QWORD*)(ResFile_5e5f00(
                              *(_QWORD*)(*(_QWORD*)(v226 + 8) + 592LL)) +
                          40) +
               120 * v230;
        v232 = *(_QWORD*)(v231 + 88);
        if (v232 != 0) {
          v233 = v232 + 8;
          v234 = *(unsigned __int16*)(v232 + 12);
          v235 = v232 + 8 + 16 * v234;
          v236 = *(_DWORD*)v235;
          if ((signed __int32)*(_DWORD*)(v232 + 8) <
              (signed __int32)*(_DWORD*)v235) {
            do {
              if ((unsigned int)(v236 >> 3) <= 0xB) {
                v237 = ((unsigned __int8)GameData_1aa4dd7[~(v236 >> 3) + 12] >>
                        (v236 & 7)) &
                       1;
              }
              else {
                v237 = 0;
              }
              v234 = *(unsigned __int16*)(v232 + 12 + 16 * v234 + 2 * v237);
              v194 = v236 < (signed __int32)*(_DWORD*)(v233 + 16 * v234);
              v236 = *(_DWORD*)(v233 + 16 * v234);
            } while (v194);
            v235 = v233 + 16 * v234;
          }
          v238 = *(_QWORD*)(v235 + 8);
          if (*(_WORD*)v238 == 12) {
            v239 = *(_QWORD*)(v238 + 2);
            v240 = *(_DWORD*)(v238 + 10);
            if (v239 == 0x4C79616C70736944LL && v240 == 1919252833) {
              v242 = v235 - v232 - 24;
              if ((~v242 & 0xFFFFFFFF0LL) != 0) {
                v243 = *(_QWORD*)(v231 + 80);
                if (v243 != 0) {
                  v244 = v243 + ((__int64)(int)(v242 >> 4) << 6);
                  if (*(_BYTE*)(v244 + 20) == 2 && *(int*)(v244 + 16) >= 1) {
                    v245 = **(_QWORD**)(v244 + 8);
                    v246 = strlen((const char*)(v245 + 2));
                    if ((unsigned int)GameRoutine_a81a70(v245 + 2, v246) ==
                        v435) {
                      break;
                    }
                  }
                }
              }
            }
          }
        }
        if (++v230 == v229) {
          goto LABEL_267;
        }
      }
    }
    else {
    LABEL_267:
      LODWORD(v230) = -1;
    }
    GameRoutine_ad7390((_QWORD*)v226);
    v247 = *(_QWORD*)(ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v226 + 8) + 592LL)) +
                      40);
    if (*(_BYTE*)(v226 + 165) == 1) {
      v248 = GameRoutine_ad7390((_QWORD*)v226);
      v249 = v226 + 32;
      if (!v248) {
        v249 = 0;
      }
    }
    else {
      v249 = 0;
    }
    v250 = *(_QWORD*)(*(_QWORD*)(v226 + 8) + 800LL);
    *(_QWORD*)&v462_.v462 =
        v247 + 120LL * ((unsigned int)v230 & ~((int)v230 >> 31));
    *((_QWORD*)&v462_.v462 + 1) = v249;
    v462_.v463 = (char*)v250;
    v251 = (__int64*)fw_memory_g_heap_manager_ptr;
    v252 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 848, 16, 0);
    v252[1] = 0;
    v253 = (__int64)(v252 + 4);
    v254 = (__int64)v252;
    v252[2] = 0;
    v441 = (atomic_ullong*)(v252 + 1);
    *v252 = GameData_1fd14b8;
    Model_a61a80((__int64)(v252 + 4), &v462_.v462);
    Model_a64140(v253);
    v256 = (*(__int64 (**)(__int64))(*(_QWORD*)(v254 + 32) + 56LL))(v253);
    v257 = (_QWORD*)fw_memory_HeapManager_Allocate(*v251, 848, 16, 0);
    v257[1] = 0;
    v258 = (__int64)(v257 + 4);
    v259 = (__int64)v257;
    v257[2] = 0;
    *v257 = GameData_1fd14b8;
    v440 = (atomic_ullong*)(v257 + 1);
    Model_a61a80((__int64)(v257 + 4), &v462_.v462);
    v452 = v258;
    Model_a64140(v258);
    v261 = *(_QWORD***)(v259 + 344);
    v262 = *(_QWORD***)(v259 + 352);
    while (v261 != v262) {
      v263 = *v261;
      v261 += 2;
      Material_addbe0(v263, (__int64)"co_custom_dither_alpha", 22, 1);
    }
    v264 = v448 + 1023;
    if (v448 < -1023) {
      v264 = v448 + 2046;
    }
    v265 = (v264 >> 10) & ~(v264 >> 31);
    if (v265 >= v439) {
      v265 = v439;
    }
    if (v265 >= 32) {
      v265 = 32;
    }
    if (2 * v256 <= v265) {
      v266 = v265;
    }
    else {
      v266 = 2 * v256;
    }
    v267 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
    v460_.v460 = v253;
    v460_.v461 = v254;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v254 + 8), 1u,
                              memory_order_relaxed);
    v458_.v458 = v452;
    v458_.v459 = v259;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v259 + 8), 1u,
                              memory_order_relaxed);
    v449 = v267;
    GameRoutine_c74bc0(v267, &v460_.v460, &v458_.v458, v266);
    v268 = v458_.v459;
    if (v458_.v459 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v458_.v459 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v268 + 16LL))(v268);
      std___1___shared_weak_count___release_weak(v268);
    }
    v269 = v460_.v461;
    v90 = v454;
    if (v460_.v461 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v460_.v461 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v269 + 16LL))(v269);
      std___1___shared_weak_count___release_weak(v269);
    }
    v270 = (__int64*)v454[10];
    v271 = v454[11];
    if ((unsigned __int64)v270 >= v271) {
      v273 = v454[9];
      v274 = (unsigned __int64)v270 - v273;
      v275 = ((__int64)v270 - v273) >> 4;
      v276 = v275 + 1;
      if ((unsigned __int64)(v275 + 1) >> 60 != 0) {
        goto LABEL_526;
      }
      v277 = v271 - v273;
      if (v277 >> 3 > v276) {
        v276 = v277 >> 3;
      }
      if ((unsigned __int64)v277 >= 0x7FFFFFFFFFFFFFF0LL) {
        v278 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v278 = v276;
      }
      if (v278 >> 60 != 0) {
        goto LABEL_522;
      }
      v279 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v278, 16, 0);
      v280 = (__int64*)(v279 + v274);
      v437 = v279 + 16 * v278;
      *v280 = v253;
      v280[1] = v254;
      v281 = v279 + v274 - 16 * v275;
      v272 = (__int64*)(v279 + v274 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v254 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v281, v273, v274);
      v90 = v454;
      v454[9] = v281;
      v454[10] = v272;
      v454[11] = v437;
      if (v273 != 0) {
        v282 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v282 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v282, v273);
      }
    }
    else {
      *v270 = v253;
      v270[1] = v254;
      v272 = v270 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v254 + 8), 1u,
                                memory_order_relaxed);
    }
    v283 = v90[11];
    v90[10] = v272;
    if ((unsigned __int64)v272 >= v283) {
      v285 = v90[9];
      v286 = (unsigned __int64)v272 - v285;
      v287 = ((__int64)v272 - v285) >> 4;
      v288 = v287 + 1;
      if ((unsigned __int64)(v287 + 1) >> 60 != 0) {
        goto LABEL_526;
      }
      v289 = v283 - v285;
      if (v289 >> 3 > v288) {
        v288 = v289 >> 3;
      }
      if ((unsigned __int64)v289 >= 0x7FFFFFFFFFFFFFF0LL) {
        v290 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v290 = v288;
      }
      if (v290 >> 60 != 0) {
        goto LABEL_522;
      }
      v291 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v290, 16, 0);
      v292 = (__int64*)(v291 + v286);
      v438 = v291 + 16 * v290;
      v293 = v291 + v286 - 16 * v287;
      v284 = v291 + v286 + 16;
      *v292 = v452;
      v292[1] = v259;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v259 + 8), 1u,
                                memory_order_relaxed);
      memcpy(v293, v285, v286);
      v454[9] = v293;
      v454[10] = v284;
      v90 = v454;
      v454[11] = v438;
      if (v285 != 0) {
        v294 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v294 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v294, v285);
      }
    }
    else {
      v284 = (__int64)(v272 + 2);
      *v272 = v452;
      v272[1] = v259;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v259 + 8), 1u,
                                memory_order_relaxed);
    }
    v90[10] = v284;
    if (atomic_fetch_add(v440, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v259 + 16LL))(v259);
      std___1___shared_weak_count___release_weak(v259);
    }
    v188 = v443;
    if (atomic_fetch_add(v441, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v254 + 16LL))(v254);
      std___1___shared_weak_count___release_weak(v254);
    }
    v295 = *v221;
    v296 = *(_QWORD*)(*v443 + 8 * v295);
    *(_QWORD*)(*v443 + 8 * v295) = v449;
    if (v296 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v296 + 8LL))(v296);
    }
    if (v442 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v442 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v442 + 16LL))(v442);
      std___1___shared_weak_count___release_weak(v442);
    }
    LOBYTE(v462_.v462) = 14;
    *(_DWORD*)((char*)&v462_.v462 + 1) = 1935766087;
    strcpy((char*)&v462_.v462 + 4, "ss: ");
    v297 = (*a3)[2 * v446];
    if (*(_BYTE*)(v297 + 165) == 1 &&
        GameRoutine_ad7390((_QWORD*)(*a3)[2 * v446]) &&
        ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v297 + 8) + 592LL)) != 0) {
      v298 = (_QWORD*)(*a3)[2 * v446];
      GameRoutine_ad7390(v298);
      v299 = *(_QWORD*)(ResFile_5e5f00(*(_QWORD*)(v298[1] + 592LL)) + 32);
      v300 = strlen((const char*)(v299 + 2));
      GameRoutine_1a09ce0((__int64)&v462_.v462, (const char*)(v299 + 2), v300);
    }
    if ((v462_.v462 & 1) != 0) {
      v301 = *((_QWORD*)&v462_.v462 + 1);
    }
    else {
      v301 = (unsigned __int64)(unsigned __int8)v462_.v462 >> 1;
    }
    if ((v462_.v462 & 1) != 0) {
      v302 = v462_.v463;
    }
    else {
      v302 = (char*)&v462_.v462 + 1;
    }
    GameRoutine_60a060((char*)(*(_QWORD*)(*v443 + 8LL * *v221) + 8LL),
                       (__int64)v302, v301);
    v123 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((v462_.v462 & 1) != 0 && v462_.v463 != nullptr) {
      v303 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v303 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v303, (__int64)v462_.v463);
    }
    v127 = v455;
    v223 = *(_QWORD**)(*v443 + 8LL * *v221);
  LABEL_341:
    v304 = *v453 + 112LL * v221[1];
    v305 = GrassObject_c75f90(v223, (long double*)(v304 + 16),
                              *((_QWORD*)v221 + 3), v221[5]);
    v306 = (unsigned int)*v221;
    v308 = *(unsigned __int64**)(v304 + 64);
    v307 = *(_QWORD*)(v304 + 72);
    v309 = v305;
    if ((unsigned __int64)v308 < v307) {
      *v308 = v306 | ((unsigned __int64)v305 << 32);
      v220 = (__int64)(v308 + 1);
    }
    else {
      v310 = *(_QWORD*)(v304 + 56);
      v311 = (char*)v308 - v310;
      v312 = ((__int64)v308 - v310) >> 3;
      v313 = v312 + 1;
      if ((unsigned __int64)(v312 + 1) >> 61 != 0) {
        goto LABEL_524;
      }
      v314 = v307 - v310;
      if (v314 >> 2 > v313) {
        v313 = v314 >> 2;
      }
      if ((unsigned __int64)v314 >= 0x7FFFFFFFFFFFFFF8LL) {
        v315 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v315 = v313;
      }
      if (v315 != 0) {
        if (v315 >> 61 != 0) {
          goto LABEL_522;
        }
        v316 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v315, 16, 0);
      }
      else {
        v316 = 0;
      }
      v317 = v306 | (v309 << 32);
      v318 = v316 + 8 * v315;
      v319 = (unsigned __int64)v308 - v310;
      v320 = (__int64)&v311[v316 + -8 * v312];
      *(_QWORD*)&v311[v316] = v317;
      v220 = (__int64)&v311[v316 + 8];
      memcpy(v320, v310, v319);
      *(_QWORD*)(v304 + 56) = v320;
      *(_QWORD*)(v304 + 64) = v220;
      *(_QWORD*)(v304 + 72) = v318;
      if (v310 != 0) {
        v123 = (__int64*)fw_memory_g_heap_manager_ptr;
        v321 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v321 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v321, v310);
        v90 = v454;
      }
      else {
        v90 = v454;
        v123 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      v127 = v455;
      v188 = v443;
    }
    *(_QWORD*)(v304 + 64) = v220;
    v218 = *(_DWORD*)(v127 + 16);
    goto LABEL_239;
  }
LABEL_359:
  if (v186 >= 1) {
    v322 = 0;
    while (1) {
      v325 = *(_QWORD*)(v127 + 24) + 48 * v322;
      v326 = *(_DWORD*)(v325 + 24);
      if (v326 == -1) {
        break;
      }
      v323 = -1;
    LABEL_362:
      v324 = (int*)(v90[15] + 8 * v322++);
      *v324 = v323;
      v324[1] = v326;
      v127 = v455;
      if (v322 >= *(int*)(v455 + 8)) {
        goto LABEL_408;
      }
    }
    v327 = *(const char**)(v325 + 8);
    v328 = v456_.v456;
    v329 = strlen(v327);
    if (v329 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_525;
    }
    v330 = v329;
    if (v329 >= 0x17) {
      if ((v329 | 7) == 0x17) {
        v332 = 26;
      }
      else {
        v332 = (v329 | 7) + 1;
      }
      v331 = (char*)fw_memory_HeapManager_Allocate(*v123, v332, 16, 0);
      *((_QWORD*)&v462_.v462 + 1) = v330;
      v462_.v463 = v331;
      *(_QWORD*)&v462_.v462 = v332 | 1;
    }
    else {
      v331 = (char*)&v462_.v462 + 1;
      LOBYTE(v462_.v462) = 2 * v329;
      if (v329 == 0) {
        goto LABEL_373;
      }
    }
    memmove((__int64)v331, (__int64)v327, v330);
  LABEL_373:
    v331[v330] = 0;
    v334 = *(unsigned __int8**)(v328 + 8);
    v333 = *(unsigned __int8**)(v328 + 16);
    if (v334 == v333) {
      v336 = *(unsigned __int8**)(v328 + 8);
    }
    else {
      if ((v462_.v462 & 1) != 0) {
        v335 = *((_QWORD*)&v462_.v462 + 1);
      }
      else {
        v335 = (unsigned __int8)v462_.v462 >> 1;
      }
      if ((v462_.v462 & 1) != 0) {
        v340 = (__int64)v462_.v463;
        v336 = *(unsigned __int8**)(v328 + 8);
        while (1) {
          v341 = *v336;
          v342 = *((_QWORD*)v336 + 1);
          if ((v341 & 1) == 0) {
            v342 = v341 >> 1;
          }
          if (v342 == v335) {
            v343 = (v341 & 1) != 0 ? *((_QWORD*)v336 + 2) : (__int64)(v336 + 1);
            if (memcmp(v343, v340, v335) == 0) {
              break;
            }
          }
          v336 += 144;
          if (v336 == v333) {
          LABEL_401:
            v323 = 0;
            goto LABEL_402;
          }
        }
      }
      else {
        v336 = *(unsigned __int8**)(v328 + 8);
        while (1) {
          v337 = *v336;
          v338 = *((_QWORD*)v336 + 1);
          if ((v337 & 1) == 0) {
            v338 = v337 >> 1;
          }
          if (v338 == v335) {
            v339 = (v337 & 1) != 0 ? *((_QWORD*)v336 + 2) : (__int64)(v336 + 1);
            if (memcmp(v339, (__int64)&v462_.v462 + 1, v335) == 0) {
              break;
            }
          }
          v336 += 144;
          if (v336 == v333) {
            goto LABEL_401;
          }
        }
      }
    }
    if (v336 == v333) {
      v323 = 0;
    }
    else {
      v323 = 954437177 * ((unsigned __int64)(v336 - v334) >> 4);
    }
  LABEL_402:
    v90 = v454;
    if ((v462_.v462 & 1) != 0 && v462_.v463 != nullptr) {
      v344 = 128;
      if (*(_QWORD*)(*v123 + 200) == 0) {
        v344 = 56;
      }
      nn_mem_StandardAllocator_Free(*v123 + v344, (__int64)v462_.v463);
    }
    v326 = -1;
    goto LABEL_362;
  }
LABEL_408:
  v345 = v90[29];
  v346 = v90[28];
  v347 = v436;
  v348 = v345 - v346;
  if (v90[30] - v346 > (unsigned __int64)(v345 - v346)) {
    if (v345 == v346) {
      v350 = v345 - v346;
    }
    else {
      if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v348 >> 4)) >
          0x249249249249249LL) {
        goto LABEL_522;
      }
      v349 = fw_memory_HeapManager_Allocate(*v123, v345 - v346, 16, 0);
      v350 = v349 + v348;
      v348 = v349;
      v351 = v346;
      v352 = v349;
      do {
        v353 = *(_QWORD*)(v351 + 40);
        v354 = *(_DWORD*)(v351 + 48);
        *(_QWORD*)(v352 + 24) = *(_QWORD*)(v351 + 24);
        *(_QWORD*)(v352 + 40) = v353;
        *(_QWORD*)(v352 + 8) = *(_QWORD*)(v351 + 8);
        v355 = *(_QWORD*)v351;
        *(_QWORD*)(v352 + 16) = *(_QWORD*)(v351 + 16);
        *(_QWORD*)v352 = v355;
        v356 = *(_QWORD*)(v351 + 32);
        *(_DWORD*)(v352 + 48) = v354;
        *(_QWORD*)(v352 + 32) = v356;
        *(_QWORD*)(v352 + 56) = *(_QWORD*)(v351 + 56);
        *(_QWORD*)(v352 + 64) = *(_QWORD*)(v351 + 64);
        *(_QWORD*)(v352 + 72) = *(_QWORD*)(v351 + 72);
        *(_QWORD*)(v351 + 64) = 0;
        *(_QWORD*)(v351 + 72) = 0;
        *(_QWORD*)(v351 + 56) = 0;
        v358 = *(_QWORD*)(v351 + 80);
        v357 = *(_QWORD*)(v351 + 88);
        v359 = *(_QWORD*)(v351 + 96);
        v351 += 112;
        *(_QWORD*)(v352 + 88) = v357;
        *(_QWORD*)(v352 + 96) = v359;
        *(_QWORD*)(v352 + 80) = v358;
        v352 += 112;
      } while (v351 != v345);
      do {
        v360 = *(_QWORD*)(v346 + 56);
        if (v360 != 0) {
          *(_QWORD*)(v346 + 64) = v360;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v361 = 128;
          }
          else {
            v361 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v361, v360);
        }
        v346 += 112;
      } while (v346 != v345);
      v90 = v454;
      v346 = *v453;
      v123 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    v90[28] = v348;
    v90[29] = v350;
    v90[30] = v350;
    if (v346 != 0) {
      v362 = 128;
      if (*(_QWORD*)(*v123 + 200) == 0) {
        v362 = 56;
      }
      nn_mem_StandardAllocator_Free(*v123 + v362, v346);
    }
  }
  v363 = v90[4];
  v364 = v90[3];
  v365 = v363 - v364;
  if (v90[5] - v364 > (unsigned __int64)(v363 - v364)) {
    v366 = v365 >> 3;
    if (v363 == v364) {
      v367 = 0;
    }
    else {
      if (v366 >> 61 != 0) {
        goto LABEL_522;
      }
      v367 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v365, 16, 0);
    }
    v368 = v367 + v365;
    v369 = v367 + v365 - 8 * v366;
    memcpy(v369, v364, v365);
    v90[3] = v369;
    v90[4] = v368;
    v90[5] = v368;
    if (v364 != 0) {
      v370 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v370 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v370, v364);
    }
  }
  v371 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  v373 = *(_QWORD*)(v371 + 16);
  v372 = *(_QWORD*)(v371 + 24);
  if (v372 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v372 + 16), 1u,
                              memory_order_relaxed);
  }
  v374 = v90[19];
  v90[18] = v373;
  v90[19] = v372;
  if (v374 != 0) {
    std___1___shared_weak_count___release_weak(v374);
    v372 = v90[19];
  }
  if (v372 != 0) {
    v375 = std___1___shared_weak_count_lock(v372);
    if (v375 != 0) {
      v376 = (_QWORD*)v90[18];
      v377 = v375;
      if (v376 != nullptr) {
        v378 = (__int64*)v90[3];
        for (i = (__int64*)v90[4]; v378 != i; ++v378) {
          if (*v378 != 0) {
            v381 = Scene_a70a20(v376, *v378);
            v383 = (__int64*)v90[7];
            v382 = v90[8];
            if ((unsigned __int64)v383 < v382) {
              *v383 = v381;
              v380 = (__int64)(v383 + 1);
            }
            else {
              v384 = v90[6];
              v385 = (unsigned __int64)v383 - v384;
              v386 = ((__int64)v383 - v384) >> 3;
              v387 = v386 + 1;
              if ((unsigned __int64)(v386 + 1) >> 61 != 0) {
                GameRoutine_a7f560();
              }
              v388 = v382 - v384;
              if (v388 >> 2 > v387) {
                v387 = v388 >> 2;
              }
              if ((unsigned __int64)v388 >= 0x7FFFFFFFFFFFFFF8LL) {
                v389 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v389 = v387;
              }
              if (v389 != 0) {
                if (v389 >> 61 != 0) {
                  goto LABEL_522;
                }
                v390 = v381;
                v391 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v389, 16, 0);
                v381 = v390;
              }
              else {
                v391 = 0;
              }
              v392 = v391 + 8 * v389;
              v393 = v391 + v385 - 8 * v386;
              *(_QWORD*)(v391 + v385) = v381;
              v380 = v391 + v385 + 8;
              memcpy(v393, v384, v385);
              v454[6] = v393;
              v454[7] = v380;
              v90 = v454;
              v454[8] = v392;
              if (v384 != 0) {
                v394 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v394 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v394, v384);
              }
            }
            v90[7] = v380;
          }
        }
      }
      v347 = v436;
      if (atomic_fetch_add((atomic_ullong* volatile)(v377 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v377 + 16LL))(v377);
        std___1___shared_weak_count___release_weak(v377);
      }
    }
  }
  v395 = v456_.v457;
  if (v456_.v457 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v456_.v457 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v395 + 16LL))(v395);
    std___1___shared_weak_count___release_weak(v395);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea68,
                                  memory_order_acquire);
  v397 = GameData_212ea60;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212ea68) != 0) {
    *v397 = wld_Crc32(0, "GrassModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212ea68);
  }
  v398 = *v397;
  v399 = *(_QWORD*)(v347 + 504);
  v400 = *(_QWORD*)(v347 + 512);
  v401 = v400;
  LODWORD(v462_.v462) = v398;
  *((_QWORD*)&v462_.v462 + 1) = v90;
  while (v401 != v399) {
    v402 = *(_DWORD*)(v401 - 16);
    v401 -= 16;
    if (v402 == v398) {
      if ((v90[2] & 1) != 0) {
        goto LABEL_487;
      }
      goto LABEL_481;
    }
  }
  if (v399 == v400 &&
      (unsigned __int64)(*(_QWORD*)(v347 + 520) - v399) <= 0x6F) {
    v403 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v347 + 504) = v403;
    *(_QWORD*)(v347 + 512) = v403;
    *(_QWORD*)(v347 + 520) = v403 + 112;
    if (v400 != 0) {
      v404 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v404 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v404, v399);
    }
  }
  GameRoutine_98f140((__int64*)(v347 + 504), &v462_.v462);
  if ((v90[2] & 1) == 0) {
  LABEL_481:
    *((_BYTE*)v90 + 16) = 1;
    *((_BYTE*)v90 + 17) &= ~2u;
    *((_BYTE*)v90 + 18) &= ~2u;
    *((_BYTE*)v90 + 19) &= ~2u;
    *((_BYTE*)v90 + 20) &= ~2u;
    v405 = (_BYTE*)v90[1];
    v405[632] = 0;
    v405[664] = 0;
    v405[696] = 0;
    v405[728] = 0;
    (*(void (**)(_QWORD*))(*v90 + 64LL))(v90);
    v406 = (_BYTE*)v90[1];
    v407 = v406[300] == 3 && v406[301] == 3;
    if (v407 || v406[302] == 1) {
      (*(void (**)(_QWORD*))(*v90 + 72LL))(v90);
    }
  }
LABEL_487:
  v408 = *(_QWORD**)(v347 + 536);
  v409 = *(_QWORD*)(v347 + 544);
  if ((unsigned __int64)v408 >= v409) {
    v411 = *(_QWORD*)(v347 + 528);
    v412 = (unsigned __int64)v408 - v411;
    v413 = ((__int64)v408 - v411) >> 3;
    v414 = v413 + 1;
    if ((unsigned __int64)(v413 + 1) >> 61 != 0) {
      goto LABEL_530;
    }
    v415 = v409 - v411;
    if (v415 >> 2 > v414) {
      v414 = v415 >> 2;
    }
    if ((unsigned __int64)v415 >= 0x7FFFFFFFFFFFFFF8LL) {
      v416 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v416 = v414;
    }
    if (v416 != 0) {
      if (v416 >> 61 != 0) {
        goto LABEL_522;
      }
      v417 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v416, 16, 0);
    }
    else {
      v417 = 0;
    }
    v418 = v417 + 8 * v416;
    v419 = v417 + v412 - 8 * v413;
    *(_QWORD*)(v417 + v412) = v454;
    v410 = v417 + v412 + 8;
    memcpy(v419, v411, v412);
    *(_QWORD*)(v347 + 528) = v419;
    *(_QWORD*)(v347 + 536) = v410;
    *(_QWORD*)(v347 + 544) = v418;
    if (v411 != 0) {
      v420 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v420 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v420, v411);
    }
    v90 = v454;
  }
  else {
    *v408 = v90;
    v410 = (__int64)(v408 + 1);
  }
  *(_QWORD*)(v347 + 536) = v410;
  v421 = *(_QWORD**)(v347 + 560);
  v422 = *(_QWORD*)(v347 + 568);
  if ((unsigned __int64)v421 < v422) {
    *v421 = v90;
    v423 = (__int64)(v421 + 1);
    goto LABEL_521;
  }
  v424 = *(_QWORD*)(v347 + 552);
  v425 = (unsigned __int64)v421 - v424;
  v426 = ((__int64)v421 - v424) >> 3;
  v427 = v426 + 1;
  if ((unsigned __int64)(v426 + 1) >> 61 != 0) {
  LABEL_530:
    GameRoutine_98f290();
  }
  v428 = v422 - v424;
  if (v428 >> 2 > v427) {
    v427 = v428 >> 2;
  }
  if ((unsigned __int64)v428 >= 0x7FFFFFFFFFFFFFF8LL) {
    v429 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v429 = v427;
  }
  if (v429 == 0) {
    v430 = 0;
    goto LABEL_516;
  }
  if (v429 >> 61 != 0) {
  LABEL_522:
    GameRoutine_60a210();
  }
  v430 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v429, 16, 0);
LABEL_516:
  v431 = v430 + 8 * v429;
  v432 = v430 + v425 - 8 * v426;
  *(_QWORD*)(v430 + v425) = v454;
  v423 = v430 + v425 + 8;
  memcpy(v432, v424, v425);
  *(_QWORD*)(v347 + 552) = v432;
  *(_QWORD*)(v347 + 560) = v423;
  *(_QWORD*)(v347 + 568) = v431;
  if (v424 != 0) {
    v433 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v433 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v433,
                                  v424);
  }
  v90 = v454;
LABEL_521:
  *(_QWORD*)(v347 + 560) = v423;
  GameRoutine_a8c0c0(v347);
  *(_BYTE*)(v347 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v90;
}

#pragma GCC visibility pop
