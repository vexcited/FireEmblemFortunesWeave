#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 MainRenderTask_bb8650(__int64 result, __int64* a2);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53c70(PSEUDO_X8, __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_19a3d20(_QWORD, _QWORD);
__int64 GameRoutine_5deb0(_QWORD, _QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_a72ad0(_QWORD, _QWORD);
__int64 GameRoutine_a9c750(__int64*, __int64);
__int64 GameRoutine_b87ec0(_QWORD);
__int64 GameRoutine_bbccb0(_QWORD, _QWORD);
__int64 LocalLightBuffers_c5ade0(_QWORD, _QWORD);
__int64 MainRenderTask_bb8af0_alt1(_QWORD,
                                   _QWORD) __asm__("MainRenderTask_bb8af0");
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 ResourceBuilder_b49a80(_QWORD);
__int64 ResourceBuilder_b49bb0(unsigned int*, _QWORD*, _QWORD*, __int64*,
                               __int64);
__int64 ResourceBuilder_b4a630(__int64, __int64);
__int64 TaskPassNodes_b896c0(_QWORD);
__int64 TaskPassNodes_b8f5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD);
__int64 TaskPassNodes_b8f8a0(_QWORD);
__int64 TaskPassNodes_b94930(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD);
__int64 TaskPassNodes_b94cd0(_QWORD);
__int64 TaskPassNodes_b9c8f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD);
__int64 TaskPassNodes_b9d3a0(_QWORD);
__int64 TaskPassNodes_bae7f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD);
__int64 TaskPassNodes_baecd0(_QWORD);
__int64 TaskPassNodes_bbf6f0(_QWORD, _QWORD);
__int64 TaskPassNodes_bbf8a0(_QWORD);
__int64 TaskSharpness_19a3ed0(__int64, _QWORD*, _QWORD*, __int64*, int*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gfxa_Task2DFinal_Impl_Impl(__int64, __int64);
__int64 gfxa_Task3DFinal_Impl_Impl(__int64, __int64);
__int64 gfxa_b89070(__int64, __int64, _QWORD*, _QWORD*);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1fcece8;
extern _UNKNOWN GameData_1fced38;
extern __int64 (*GameData_1fcec48[])();
extern __int64 (*GameData_1fcec98[])();
extern __int64 (*GameData_1fced88[])();
extern __int64 (*GameData_1fcee08[])();
extern __int64 (*GameData_1fcee88[])();
extern __int64 (*gfxa_MainRenderTask_vtable[])();
extern __int64* GameData_212e790;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22030f8;
extern int GameData_22030fc;
__int64 gfxa_MainRenderTask_initialize1(__int64 a1, __int64 a2, __int64 a3,
                                        __int64* a4);
__int64 MainRenderTask_bb8af0(__int64 a1, int* a2);
__int64 gfxa_MainRenderTask_setup3DFinalPasses_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3);
__int64 gfxa_MainRenderTask_setup3DFinalPasses_lambda3_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3);

__int64 gfxa_MainRenderTask_initialize1(__int64 a1, __int64 a2, __int64 a3,
                                        __int64* a4)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64** v29;
  _QWORD* v30;
  __int64** v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  unsigned __int64 v56;
  __int64 i;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  _QWORD* v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  _QWORD* v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  _QWORD* v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  _QWORD* v102;
  _QWORD* v103;
  _QWORD* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  unsigned __int64 v110;
  __int64 j;
  __int64 v112;
  __int64 v113;
  _QWORD* v114;
  _QWORD* v115;
  _QWORD* v116;
  _QWORD* v117;
  __int64 v118;
  __int64 v119;
  _QWORD* v120;
  _QWORD* v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  _QWORD* v127;
  _QWORD* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  _QWORD* v132;
  _QWORD* v133;
  _QWORD* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  _QWORD* v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  _QWORD* v144;
  _QWORD* v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64** v150;
  __int64* v151;
  _QWORD* v152;
  __int64** v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64** v157;
  _QWORD* v158;
  __int64** v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  int32x4_t* v163;
  float32x4_t* v164;
  float32x4_t* v165;
  __int64 v166;
  int32x4_t* v167;
  int32x4_t v168;
  int32x4_t v169;
  int32x4_t v170;
  int32x4_t v171;
  int32x4_t v172;
  int32x4_t v173;
  __int64 v174;
  int32x4_t* v175;
  int32x4_t v176;
  int32x4_t v177;
  int32x4_t v178;
  int32x4_t v179;
  int32x4_t v180;
  int32x4_t v181;
  __int64 v182;
  _QWORD* v183;
  _QWORD* v184;
  _QWORD* v185;
  __int64 v186;
  __int64 v187;
  _QWORD* v188;
  _QWORD* v189;
  _QWORD* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  int v195;
  int v196;
  int v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  int v210;
  int v211;
  int v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  unsigned int v216;
  unsigned int v217;
  unsigned int v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  unsigned int v230;
  unsigned int v231;
  unsigned int v232;
  int v233;
  __int64 v234;
  long double v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  long double v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  _QWORD* v245;
  __int64* v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  long double v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  _QWORD* v254;
  __int64 v255;
  __int64 v256;
  long double v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  _QWORD* v261;
  __int64 v262;
  _QWORD* v263;
  _QWORD* v264;
  __int64 v265;
  __int64 v266;
  int v267;
  __int64 (***v268)();
  __int64 (***v269)();
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  long double v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  long double v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  long double v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  long double v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  long double v297;
  __int64 v298;
  __int64 v299;
  __int64* v300;
  __int64 v301;
  __int64 v302;
  __int64* v303;
  __int64 v304;
  __int64 v305;
  long double v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 result;
  __int64 v311;
  long double v312;
  __int64 v313;
  __int64 (**v314)();
  __int64 v315;
  __int64 v316;
  __int64 (***v317)();
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 vars0;
  __int64 vars8;
  __int64 vars10;
  __int64 vars18;
  float32x4x4_t v328;
  float32x4x4_t v329;
  float32x4x4_t v330;
  float32x4x4_t v331;

  *(_QWORD*)(a1 + 16) = a3;
  *(_QWORD*)a1 = gfxa_MainRenderTask_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v5 = *a4;
  *(_QWORD*)(a1 + 24) = *a4;
  v6 = a4[1];
  *(_QWORD*)(a1 + 32) = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(a1 + 24);
  }
  v7 = *((_DWORD*)a4 + 4);
  *(_DWORD*)(a1 + 40) = v7;
  v8 = *(__int64*)((char*)a4 + 20);
  v9 = *(__int64*)((char*)a4 + 28);
  *(_DWORD*)(a1 + 60) = *((_DWORD*)a4 + 9);
  *(_QWORD*)(a1 + 52) = v9;
  *(_QWORD*)(a1 + 44) = v8;
  if ((v7 & 0x80000000) != 0 || (signed int)v7 >= *(_DWORD*)v5) {
    *(_QWORD*)(a1 + 64) = 0;
    *(_QWORD*)(a1 + 72) = 0;
  }
  else {
    v10 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * v7);
    v12 = *v10;
    v11 = v10[1];
    *(_QWORD*)(a1 + 64) = v12;
    *(_QWORD*)(a1 + 72) = v11;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_DWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_DWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 448) = 0;
  *(_DWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_DWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_DWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_DWORD*)(a1 + 856) = 0;
  *(_DWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  GameRoutine_604020(a1 + 912);
  *(_QWORD*)(a1 + 1032) = -1;
  GameRoutine_604020(a1 + 1040);
  *(_QWORD*)(a1 + 1160) = -1;
  GameRoutine_604020(a1 + 1168);
  *(_QWORD*)(a1 + 1288) = -1;
  memset(a1 + 1296, 0, 344, v13, v14, v15);
  *(_QWORD*)(a1 + 1648) = 0;
  *(_QWORD*)(a1 + 1656) = 0;
  v16 = a1;
  *(_DWORD*)(a1 + 1664) = 0;
  *(_DWORD*)(a1 + 1676) = 0;
  *(_BYTE*)(a1 + 1682) = 0;
  *(_DWORD*)(a1 + 1669) = 0;
  *(_BYTE*)(a1 + 1668) = 1;
  *(_BYTE*)(a1 + 1692) = 1;
  *(_WORD*)(a1 + 1680) = 257;
  v17 = (_QWORD*)(a1 + 1684);
  v19 = vars10;
  v18 = vars18;
  *v17 = 0;
  v322 = vars0;
  v323 = vars8;
  vars10 = v19;
  vars18 = v18;
  v20 = v16;
  LODWORD(v314) = 4096;
  BYTE4(v314) = 1;
  v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v22[2] = 0;
  v23 = v22 + 3;
  v24 = v22;
  v25 = GameData_212e790;
  v26 = GameData_212e790 + 2;
  *v22 = GameData_212e790 + 2;
  v22[1] = 0;
  GameRoutine_a72ad0(v22 + 3, &v314);
  *(_QWORD*)(v20 + 96) = v23;
  v27 = *(_QWORD*)(v20 + 104);
  *(_QWORD*)(v20 + 104) = v24;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = *v21;
  BYTE4(v314) = 1;
  LODWORD(v314) = 2048;
  v29 = (__int64**)fw_memory_HeapManager_Allocate(v28, 192, 16, 0);
  v30 = v29 + 3;
  v31 = v29;
  v29[1] = nullptr;
  v29[2] = nullptr;
  *v29 = v26;
  GameRoutine_a72ad0(v29 + 3, &v314);
  *(_QWORD*)(v20 + 120) = v30;
  v32 = *(_QWORD*)(v20 + 128);
  *(_QWORD*)(v20 + 128) = v31;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *v21;
  LODWORD(v314) = 2048;
  BYTE4(v314) = 1;
  v34 = (_QWORD*)fw_memory_HeapManager_Allocate(v33, 192, 16, 0);
  v35 = v34 + 3;
  v36 = v34;
  v34[1] = 0;
  v34[2] = 0;
  *v34 = v25 + 2;
  GameRoutine_a72ad0(v34 + 3, &v314);
  v37 = *(_QWORD*)(v20 + 144);
  *(_QWORD*)(v20 + 136) = v35;
  *(_QWORD*)(v20 + 144) = v36;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  v38 = *v21;
  LODWORD(v314) = 2048;
  BYTE4(v314) = 1;
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate(v38, 192, 16, 0);
  v40 = v39 + 3;
  v41 = v39;
  v39[1] = 0;
  v39[2] = 0;
  *v39 = v25 + 2;
  GameRoutine_a72ad0(v39 + 3, &v314);
  v42 = *(_QWORD*)(v20 + 160);
  *(_QWORD*)(v20 + 152) = v40;
  *(_QWORD*)(v20 + 160) = v41;
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v42);
  }
  v43 = *v21;
  LODWORD(v314) = 2048;
  BYTE4(v314) = 1;
  v44 = (_QWORD*)fw_memory_HeapManager_Allocate(v43, 192, 16, 0);
  v45 = v44 + 3;
  v46 = v44;
  v44[1] = 0;
  v44[2] = 0;
  *v44 = v25 + 2;
  GameRoutine_a72ad0(v44 + 3, &v314);
  v47 = *(_QWORD*)(v20 + 176);
  *(_QWORD*)(v20 + 168) = v45;
  *(_QWORD*)(v20 + 176) = v46;
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v47);
  }
  v48 = *v21;
  BYTE4(v314) = 1;
  LODWORD(v314) = 2048;
  v49 = (_QWORD*)fw_memory_HeapManager_Allocate(v48, 192, 16, 0);
  v50 = v49 + 3;
  v51 = v49;
  v49[1] = 0;
  v49[2] = 0;
  *v49 = v25 + 2;
  GameRoutine_a72ad0(v49 + 3, &v314);
  v52 = *(_QWORD*)(v20 + 192);
  *(_QWORD*)(v20 + 184) = v50;
  *(_QWORD*)(v20 + 192) = v51;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  v53 = *(_QWORD*)(v20 + 608);
  v54 = *(_QWORD*)(v20 + 600);
  v55 = (__int64*)(v20 + 600);
  v56 = (v53 - v54) >> 4;
  if (v56 >= 8) {
    if (v53 - v54 != 128) {
      for (i = v54 + 128; v53 != i; v53 -= 16) {
        v58 = *(_QWORD*)(v53 - 8);
        if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          std___1___shared_weak_count___release_weak(v58);
        }
      }
      *(_QWORD*)(v20 + 608) = i;
    }
  }
  else {
    GameRoutine_bbccb0(v20 + 600, 8 - v56);
  }
  v59 = *v21;
  BYTE4(v314) = 0;
  LODWORD(v314) = 1024;
  v60 = (_QWORD*)fw_memory_HeapManager_Allocate(v59, 192, 16, 0);
  v61 = v60 + 3;
  v62 = v60;
  v60[1] = 0;
  v60[2] = 0;
  *v60 = v25 + 2;
  GameRoutine_a72ad0(v60 + 3, &v314);
  v63 = (_QWORD*)*v55;
  v64 = *(_QWORD*)(*v55 + 8);
  *v63 = v61;
  v63[1] = v62;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    std___1___shared_weak_count___release_weak(v64);
  }
  v65 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v66 = (_QWORD*)fw_memory_HeapManager_Allocate(v65, 192, 16, 0);
  v67 = v66 + 3;
  v68 = v66;
  v66[1] = 0;
  v66[2] = 0;
  *v66 = v25 + 2;
  GameRoutine_a72ad0(v66 + 3, &v314);
  v69 = *v55;
  v70 = *(_QWORD*)(*v55 + 24);
  *(_QWORD*)(v69 + 16) = v67;
  *(_QWORD*)(v69 + 24) = v68;
  if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    std___1___shared_weak_count___release_weak(v70);
  }
  v71 = *v21;
  BYTE4(v314) = 0;
  LODWORD(v314) = 1024;
  v72 = (_QWORD*)fw_memory_HeapManager_Allocate(v71, 192, 16, 0);
  v73 = v72 + 3;
  v74 = v72;
  v72[1] = 0;
  v72[2] = 0;
  *v72 = v25 + 2;
  GameRoutine_a72ad0(v72 + 3, &v314);
  v75 = *v55;
  v76 = *(_QWORD*)(*v55 + 40);
  *(_QWORD*)(v75 + 32) = v73;
  *(_QWORD*)(v75 + 40) = v74;
  if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    std___1___shared_weak_count___release_weak(v76);
  }
  v77 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v78 = (_QWORD*)fw_memory_HeapManager_Allocate(v77, 192, 16, 0);
  v79 = v78 + 3;
  v80 = v78;
  v78[1] = 0;
  v78[2] = 0;
  *v78 = v25 + 2;
  GameRoutine_a72ad0(v78 + 3, &v314);
  v81 = *v55;
  v82 = *(_QWORD*)(*v55 + 56);
  *(_QWORD*)(v81 + 48) = v79;
  *(_QWORD*)(v81 + 56) = v80;
  if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
    std___1___shared_weak_count___release_weak(v82);
  }
  v83 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v84 = (_QWORD*)fw_memory_HeapManager_Allocate(v83, 192, 16, 0);
  v85 = v84 + 3;
  v86 = v84;
  v84[1] = 0;
  v84[2] = 0;
  *v84 = v25 + 2;
  GameRoutine_a72ad0(v84 + 3, &v314);
  v87 = *v55;
  v88 = *(_QWORD*)(*v55 + 72);
  *(_QWORD*)(v87 + 64) = v85;
  *(_QWORD*)(v87 + 72) = v86;
  if (v88 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
    std___1___shared_weak_count___release_weak(v88);
  }
  v89 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v90 = (_QWORD*)fw_memory_HeapManager_Allocate(v89, 192, 16, 0);
  v91 = v90 + 3;
  v92 = v90;
  v90[1] = 0;
  v90[2] = 0;
  *v90 = v25 + 2;
  GameRoutine_a72ad0(v90 + 3, &v314);
  v93 = *v55;
  v94 = *(_QWORD*)(*v55 + 88);
  *(_QWORD*)(v93 + 80) = v91;
  *(_QWORD*)(v93 + 88) = v92;
  if (v94 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
    std___1___shared_weak_count___release_weak(v94);
  }
  v95 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v96 = (_QWORD*)fw_memory_HeapManager_Allocate(v95, 192, 16, 0);
  v97 = v96 + 3;
  v98 = v96;
  v96[1] = 0;
  v96[2] = 0;
  *v96 = v25 + 2;
  GameRoutine_a72ad0(v96 + 3, &v314);
  v99 = *v55;
  v100 = *(_QWORD*)(*v55 + 104);
  *(_QWORD*)(v99 + 96) = v97;
  *(_QWORD*)(v99 + 104) = v98;
  if (v100 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
    std___1___shared_weak_count___release_weak(v100);
  }
  v101 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v102 = (_QWORD*)fw_memory_HeapManager_Allocate(v101, 192, 16, 0);
  v103 = v102 + 3;
  v104 = v102;
  v102[1] = 0;
  v102[2] = 0;
  *v102 = v25 + 2;
  GameRoutine_a72ad0(v102 + 3, &v314);
  v105 = *v55;
  v106 = *(_QWORD*)(*v55 + 120);
  *(_QWORD*)(v105 + 112) = v103;
  *(_QWORD*)(v105 + 120) = v104;
  if (v106 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
    std___1___shared_weak_count___release_weak(v106);
  }
  v107 = *(_QWORD*)(v20 + 632);
  v108 = *(_QWORD*)(v20 + 624);
  v109 = (__int64*)(v20 + 624);
  v110 = (v107 - v108) >> 4;
  if (v110 >= 8) {
    if (v107 - v108 != 128) {
      for (j = v108 + 128; v107 != j; v107 -= 16) {
        v112 = *(_QWORD*)(v107 - 8);
        if (v112 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
          std___1___shared_weak_count___release_weak(v112);
        }
      }
      *(_QWORD*)(v20 + 632) = j;
    }
  }
  else {
    GameRoutine_bbccb0(v20 + 624, 8 - v110);
  }
  v113 = *v21;
  BYTE4(v314) = 0;
  LODWORD(v314) = 1024;
  v114 = (_QWORD*)fw_memory_HeapManager_Allocate(v113, 192, 16, 0);
  v115 = v114 + 3;
  v116 = v114;
  v114[1] = 0;
  v114[2] = 0;
  *v114 = v25 + 2;
  GameRoutine_a72ad0(v114 + 3, &v314);
  v117 = (_QWORD*)*v109;
  v118 = *(_QWORD*)(*v109 + 8);
  *v117 = v115;
  v117[1] = v116;
  if (v118 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118);
    std___1___shared_weak_count___release_weak(v118);
  }
  v119 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v120 = (_QWORD*)fw_memory_HeapManager_Allocate(v119, 192, 16, 0);
  v121 = v120 + 3;
  v122 = v120;
  v120[1] = 0;
  v120[2] = 0;
  *v120 = v25 + 2;
  GameRoutine_a72ad0(v120 + 3, &v314);
  v123 = *v109;
  v124 = *(_QWORD*)(*v109 + 24);
  *(_QWORD*)(v123 + 16) = v121;
  *(_QWORD*)(v123 + 24) = v122;
  if (v124 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
    std___1___shared_weak_count___release_weak(v124);
  }
  v125 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v126 = (_QWORD*)fw_memory_HeapManager_Allocate(v125, 192, 16, 0);
  v127 = v126 + 3;
  v128 = v126;
  v126[1] = 0;
  v126[2] = 0;
  *v126 = v25 + 2;
  GameRoutine_a72ad0(v126 + 3, &v314);
  v129 = *v109;
  v130 = *(_QWORD*)(*v109 + 40);
  *(_QWORD*)(v129 + 32) = v127;
  *(_QWORD*)(v129 + 40) = v128;
  if (v130 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
    std___1___shared_weak_count___release_weak(v130);
  }
  v131 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v132 = (_QWORD*)fw_memory_HeapManager_Allocate(v131, 192, 16, 0);
  v133 = v132 + 3;
  v134 = v132;
  v132[1] = 0;
  v132[2] = 0;
  *v132 = v25 + 2;
  GameRoutine_a72ad0(v132 + 3, &v314);
  v135 = *v109;
  v136 = *(_QWORD*)(*v109 + 56);
  *(_QWORD*)(v135 + 48) = v133;
  *(_QWORD*)(v135 + 56) = v134;
  if (v136 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v136 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v136 + 16LL))(v136);
    std___1___shared_weak_count___release_weak(v136);
  }
  v137 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v138 = (_QWORD*)fw_memory_HeapManager_Allocate(v137, 192, 16, 0);
  v139 = v138 + 3;
  v140 = v138;
  v138[1] = 0;
  v138[2] = 0;
  *v138 = v25 + 2;
  GameRoutine_a72ad0(v138 + 3, &v314);
  v141 = *v109;
  v142 = *(_QWORD*)(*v109 + 72);
  *(_QWORD*)(v141 + 64) = v139;
  *(_QWORD*)(v141 + 72) = v140;
  if (v142 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v142 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v142 + 16LL))(v142);
    std___1___shared_weak_count___release_weak(v142);
  }
  v143 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v144 = (_QWORD*)fw_memory_HeapManager_Allocate(v143, 192, 16, 0);
  v145 = v144 + 3;
  v146 = v144;
  v144[1] = 0;
  v144[2] = 0;
  *v144 = v25 + 2;
  GameRoutine_a72ad0(v144 + 3, &v314);
  v147 = *v109;
  v148 = *(_QWORD*)(*v109 + 88);
  *(_QWORD*)(v147 + 80) = v145;
  *(_QWORD*)(v147 + 88) = v146;
  if (v148 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
    std___1___shared_weak_count___release_weak(v148);
  }
  v149 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v150 = (__int64**)fw_memory_HeapManager_Allocate(v149, 192, 16, 0);
  v151 = v25 + 2;
  v152 = v150 + 3;
  v153 = v150;
  v150[1] = nullptr;
  v150[2] = nullptr;
  *v150 = v151;
  GameRoutine_a72ad0(v150 + 3, &v314);
  v154 = *v109;
  v155 = *(_QWORD*)(*v109 + 104);
  *(_QWORD*)(v154 + 96) = v152;
  *(_QWORD*)(v154 + 104) = v153;
  if (v155 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v155 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v155 + 16LL))(v155);
    std___1___shared_weak_count___release_weak(v155);
  }
  v156 = *v21;
  LODWORD(v314) = 1024;
  BYTE4(v314) = 0;
  v157 = (__int64**)fw_memory_HeapManager_Allocate(v156, 192, 16, 0);
  v158 = v157 + 3;
  v159 = v157;
  v157[1] = nullptr;
  v157[2] = nullptr;
  *v157 = v151;
  GameRoutine_a72ad0(v157 + 3, &v314);
  v160 = *v109;
  v161 = *(_QWORD*)(*v109 + 120);
  *(_QWORD*)(v160 + 112) = v158;
  *(_QWORD*)(v160 + 120) = v159;
  if (v161 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161);
    std___1___shared_weak_count___release_weak(v161);
  }
  v162 = 0;
  v163 = (int32x4_t*)GameData_212c2a0;
  v164 = (float32x4_t*)GameData_212c2b0;
  v165 = (float32x4_t*)GameData_212c540;
  do {
    DecalObject_a91100(
        (__int64*)(v20 + v162 + 320), *(_QWORD*)(*(_QWORD*)(v20 + 8) + 312LL),
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 552LL) + 16LL), 252);
    v166 = *(_QWORD*)(v20 + v162 + 320);
    v167 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v166 + 56LL))(v166);
    v168 = v163[1];
    v169 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v163);
    v170 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v163 + 16);
    v171 = vzip1q_s32(*v163, v169);
    v172 = vzip2q_s32(*v163, v169);
    v173 = vzip1q_s32(v168, v170);
    *v167 = vzip1q_s32(v171, v173);
    v167[1] = vzip2q_s32(v171, v173);
    v167[2] = vzip1q_s32(v172, vzip2q_s32(v168, v170));
    v328.val[0] = *v164;
    v328.val[1] = v164[1];
    v328.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164);
    v328.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164 + 16);
    v330.val[0] = *v164;
    v330.val[1] = v328.val[1];
    vst4q_f32((float*)&v167[3], v328);
    v328.val[0] = *v164;
    v328.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v164);
    v330.val[2] =
        *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v164 + 16);
    v328.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164);
    v328.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164 + 16);
    v330.val[3] =
        *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v164);
    vst4q_f32((float*)&v167[7], v328);
    v328.val[0] = *v165;
    vst4q_f32((float*)&v167[11], v330);
    LANES128(v167[15]).n128_u64[0] = LANES128(v328.val[0]).n128_u64[0];
    LANES128(v167[15]).n128_u32[2] = LANES128(v328.val[0]).n128_u32[2];
    (*(void (**)(__int64))(*(_QWORD*)v166 + 64LL))(v166);
    v174 = *(_QWORD*)(v20 + v162 + 328);
    v175 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v174 + 56LL))(v174);
    v176 = v163[1];
    v177 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v163);
    v178 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v163 + 16);
    v179 = vzip1q_s32(*v163, v177);
    v180 = vzip2q_s32(*v163, v177);
    v181 = vzip1q_s32(v176, v178);
    *v175 = vzip1q_s32(v179, v181);
    v175[1] = vzip2q_s32(v179, v181);
    v175[2] = vzip1q_s32(v180, vzip2q_s32(v176, v178));
    v329.val[0] = *v164;
    v329.val[1] = v164[1];
    v329.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164);
    v329.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164 + 16);
    v331.val[0] = *v164;
    v331.val[1] = v329.val[1];
    vst4q_f32((float*)&v175[3], v329);
    v329.val[0] = *v164;
    v329.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v164);
    v331.val[2] =
        *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v164 + 16);
    v329.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164);
    v329.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v164 + 16);
    v331.val[3] =
        *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v164);
    vst4q_f32((float*)&v175[7], v329);
    v329.val[0] = *v165;
    vst4q_f32((float*)&v175[11], v331);
    LANES128(v175[15]).n128_u64[0] = LANES128(v329.val[0]).n128_u64[0];
    LANES128(v175[15]).n128_u32[2] = LANES128(v329.val[0]).n128_u32[2];
    (*(void (**)(__int64))(*(_QWORD*)v174 + 64LL))(v174);
    v162 += 56;
  } while (v162 != 280);
  v182 = *(_QWORD*)(v20 + 8);
  v183 = (_QWORD*)fw_memory_HeapManager_Allocate(*v21, 1296, 16, 0);
  v184 = v183 + 4;
  v185 = v183;
  v183[1] = 0;
  v183[2] = 0;
  *v183 = GameData_1fcec48;
  GameRoutine_a9c750(v183 + 4, v182);
  v186 = *(_QWORD*)(v20 + 656);
  *(_QWORD*)(v20 + 648) = v184;
  *(_QWORD*)(v20 + 656) = v185;
  if (v186 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v186 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v186 + 16LL))(v186);
    std___1___shared_weak_count___release_weak(v186);
  }
  v187 = *(_QWORD*)(v20 + 8);
  v188 = (_QWORD*)fw_memory_HeapManager_Allocate(*v21, 568, 16, 0);
  v189 = v188 + 3;
  v190 = v188;
  v188[1] = 0;
  v188[2] = 0;
  *v188 = GameData_1fcec98;
  LocalLightBuffers_c5ade0(v188 + 3, v187);
  v191 = *(_QWORD*)(v20 + 672);
  *(_QWORD*)(v20 + 664) = v189;
  *(_QWORD*)(v20 + 672) = v190;
  if (v191 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v191 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v191 + 16LL))(v191);
    std___1___shared_weak_count___release_weak(v191);
  }
  DecalObject_a91100(
      (__int64*)(v20 + 680), *(_QWORD*)(*(_QWORD*)(v20 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 552LL) + 16LL), 896);
  DecalObject_a91100(
      (__int64*)(v20 + 736), *(_QWORD*)(*(_QWORD*)(v20 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 552LL) + 16LL), 896);
  Model_a636e0((__int64*)(v20 + 792), *(_QWORD*)(*(_QWORD*)(v20 + 8) + 312LL),
               *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 8) + 552LL) + 16LL),
               4096);
  v192 = *(_QWORD*)(v20 + 8);
  v193 = *(_QWORD*)(v192 + 312);
  v194 = *(_QWORD*)(*(_QWORD*)(v192 + 552) + 16LL);
  v195 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v195 = GameData_22030f8 + 31;
  }
  v196 = v195 >> 5;
  v197 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v197 = GameData_22030fc + 31;
  }
  LODWORD(v314) = 4;
  v315 = 64LL * v196 * (v197 >> 5);
  v316 = v193;
  GameRoutine_53bd0((void*)(&v318), &v314);
  v198 = v318;
  v199 = *(_QWORD*)(v20 + 848);
  v318 = 0;
  *(_QWORD*)(v20 + 848) = v198;
  if (v199 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v199 + 8LL))(v199);
    v200 = v318;
    v318 = 0;
    if (v200 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v200 + 8LL))(v200);
    }
  }
  v201 = (*(__int64 (**)(__int64))(*(_QWORD*)v194 + 96LL))(v194);
  *(_QWORD*)(v20 + 872) = v202;
  v203 = *(_QWORD*)(v20 + 848);
  *(_QWORD*)(v20 + 864) = v201;
  GameRoutine_5deb0(v20 + 864, v203);
  v204 = *(_QWORD*)(v20 + 848);
  v205 = (*(__int64 (**)(__int64))(*(_QWORD*)v204 + 56LL))(v204);
  v209 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v209 = GameData_22030f8 + 31;
  }
  v210 = v209 >> 5;
  v211 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v211 = GameData_22030fc + 31;
  }
  v212 = 16 * v210 * (v211 >> 5);
  if (v212 >= 1) {
    memset(v205, 0, 4LL * (unsigned int)v212, v206, v207, v208);
  }
  (*(void (**)(__int64))(*(_QWORD*)v204 + 64LL))(v204);
  v213 = *(_QWORD*)(v20 + 8);
  v214 = *(_QWORD*)(v213 + 312);
  v215 = *(_QWORD*)(*(_QWORD*)(v213 + 552) + 16LL);
  v216 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v216 = GameData_22030f8 + 31;
  }
  v217 = v216 >> 5;
  v218 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v218 = GameData_22030fc + 31;
  }
  LODWORD(v314) = 4;
  v315 = 4LL * (int)((v217 * (v218 >> 5)) << 7);
  v316 = v214;
  GameRoutine_53bd0((void*)(&v318), &v314);
  v219 = v318;
  v220 = *(_QWORD*)(v20 + 880);
  v318 = 0;
  *(_QWORD*)(v20 + 880) = v219;
  if (v220 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v220 + 8LL))(v220);
    v221 = v318;
    v318 = 0;
    if (v221 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v221 + 8LL))(v221);
    }
  }
  v222 = (*(__int64 (**)(__int64))(*(_QWORD*)v215 + 96LL))(v215);
  *(_QWORD*)(v20 + 904) = v223;
  v224 = *(_QWORD*)(v20 + 880);
  *(_QWORD*)(v20 + 896) = v222;
  GameRoutine_5deb0(v20 + 896, v224);
  v225 = *(_QWORD*)(v20 + 880 + 8LL * *(int*)(v20 + 888));
  v226 = (*(__int64 (**)(__int64))(*(_QWORD*)v225 + 56LL))(v225);
  v230 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v230 = GameData_22030f8 + 31;
  }
  v231 = v230 >> 5;
  v232 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v232 = GameData_22030fc + 31;
  }
  v233 = (v231 * (v232 >> 5)) << 7;
  if (v233 >= 1) {
    memset(v226, 0, 4LL * (unsigned int)v233, v227, v228, v229);
  }
  (*(void (**)(__int64))(*(_QWORD*)v225 + 64LL))(v225);
  v234 = fw_memory_HeapManager_Allocate(*v21, 160, 16, 0);
  v236 = *(_QWORD*)(v20 + 1488);
  *(_QWORD*)v234 = 0;
  *(_QWORD*)(v234 + 8) = 0;
  *(_QWORD*)(v234 + 16) = 0;
  *(_QWORD*)(v234 + 24) = 0;
  *(_QWORD*)(v234 + 32) = 0;
  *(_QWORD*)(v234 + 40) = 0;
  *(_QWORD*)(v234 + 80) = 0;
  *(_QWORD*)(v234 + 88) = 0;
  *(_QWORD*)(v234 + 4) = 0x3F8000003F800000LL;
  *(_QWORD*)(v234 + 12) = 0x3F8000003F800000LL;
  *(_QWORD*)(v234 + 80) = 0x3F8000003F800000LL;
  *(_QWORD*)(v234 + 96) = 0;
  *(_QWORD*)(v234 + 104) = 0;
  *(_QWORD*)(v234 + 112) = 0;
  *(_QWORD*)(v234 + 120) = 0;
  *(_QWORD*)(v234 + 48) = 0;
  *(_QWORD*)(v234 + 56) = 0;
  *(_QWORD*)(v234 + 64) = 0;
  *(_QWORD*)(v234 + 72) = 0;
  *(_QWORD*)(v234 + 128) = 0;
  *(_QWORD*)(v234 + 136) = 0;
  *(_QWORD*)(v234 + 144) = 0;
  *(_QWORD*)(v234 + 152) = 0;
  *(_QWORD*)(v234 + 64) = 0;
  *(_QWORD*)(v234 + 72) = 0;
  *(_QWORD*)(v20 + 1488) = v234;
  *(_QWORD*)(v234 + 32) = 0xC0800000C0800000LL;
  *(_QWORD*)(v234 + 40) = 0x41A00000C0800000LL;
  *(_DWORD*)(v234 + 96) = 1065353216;
  *(_DWORD*)(v234 + 108) = 1065353216;
  *(_DWORD*)(v234 + 124) = 1065353216;
  *(_DWORD*)(v234 + 136) = -1;
  *(_DWORD*)(v234 + 152) = -1;
  *(_QWORD*)(v234 + 48) = 0x41A0000041A00000LL;
  *(_QWORD*)(v234 + 56) = 0;
  if (v236 != 0) {
    v237 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v237 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v237, v235);
  }
  v238 = *(_QWORD*)(v20 + 8);
  v239 = fw_memory_HeapManager_Allocate(*v21, 256, 16, 0);
  gfxa_Task3DFinal_Impl_Impl(v239, v238);
  v240 = *(_QWORD*)(v20 + 1496);
  *(_QWORD*)(v20 + 1496) = v239;
  if (v240 != 0) {
    ResourceBuilder_b49a80(v240);
    v242 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v242 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v242, v241);
  }
  v243 = *(_QWORD*)(v20 + 8);
  v244 = fw_memory_HeapManager_Allocate(*v21, 208, 16, 0);
  gfxa_Task2DFinal_Impl_Impl(v244, v243);
  v245 = *(_QWORD**)(v20 + 1512);
  *(_QWORD*)(v20 + 1512) = v244;
  v246 = game_g_frame_clock_ptr[0];
  if (v245 != nullptr) {
    GameRoutine_6040f0(v245 + 1, *game_g_frame_clock_ptr[0] + 568);
    v247 = v245[20];
    v245[20] = 0;
    if (v247 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v247 + 8LL))(v247);
    }
    v248 = v245[19];
    v245[19] = 0;
    if (v248 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v248 + 8LL))(v248);
    }
    v249 = v245[18];
    if (v249 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v249 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v249 + 16LL))(v249);
      std___1___shared_weak_count___release_weak(v249);
    }
    GameRoutine_604050(v245 + 1);
    v251 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v251 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v251, v250);
  }
  v252 = *(_QWORD*)(v20 + 8);
  v253 = fw_memory_HeapManager_Allocate(*v21, 208, 16, 0);
  GameRoutine_19a3d20(v253, v252);
  v254 = *(_QWORD**)(v20 + 1504);
  *(_QWORD*)(v20 + 1504) = v253;
  if (v254 != nullptr) {
    GameRoutine_6040f0(v254 + 3, *v246 + 568);
    v255 = v254[20];
    v254[20] = 0;
    if (v255 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v255 + 8LL))(v255);
    }
    v256 = v254[19];
    v254[19] = 0;
    if (v256 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v256 + 8LL))(v256);
    }
    GameRoutine_604050(v254 + 3);
    v258 = v254[2];
    if (v258 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v258 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v258 + 16LL))(v258);
      std___1___shared_weak_count___release_weak(v258);
    }
    v259 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v259 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v259, v257);
  }
  v260 = fw_memory_HeapManager_Allocate(*v21, 12, 16, 0);
  *(_QWORD*)v260 = 0;
  *(_DWORD*)(v260 + 8) = 0;
  v261 = (_QWORD*)fw_memory_HeapManager_Allocate(*v21, 32, 16, 0);
  v261[2] = 0;
  v261[3] = v260;
  *(_QWORD*)(v20 + 1648) = v260;
  v262 = *(_QWORD*)(v20 + 1656);
  *(_QWORD*)(v20 + 1656) = v261;
  *v261 = &GameData_1fcece8;
  v261[1] = 0;
  if (v262 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v262 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v262 + 16LL))(v262);
    std___1___shared_weak_count___release_weak(v262);
  }
  v263 = (_QWORD*)fw_memory_HeapManager_Allocate(*v21, 24, 16, 0);
  *v263 = 0;
  v263[1] = 0;
  v263[2] = 0;
  v264 = (_QWORD*)fw_memory_HeapManager_Allocate(*v21, 32, 16, 0);
  v264[2] = 0;
  v264[3] = v263;
  *(_QWORD*)(v20 + 1624) = v263;
  v265 = *(_QWORD*)(v20 + 1632);
  *(_QWORD*)(v20 + 1632) = v264;
  *v264 = &GameData_1fced38;
  v264[1] = 0;
  if (v265 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v265 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v265 + 16LL))(v265);
    std___1___shared_weak_count___release_weak(v265);
  }
  v266 = *(_QWORD*)(v20 + 8);
  v267 = *(unsigned __int8*)(v266 + 16700);
  v268 = (__int64 (***)())(v266 + 13304);
  v269 = (__int64 (***)())(*(_QWORD*)(v266 + 16672) + 24LL);
  if (v267 == 0) {
    v269 = v268;
  }
  v314 = *v269;
  MainRenderTask_bb8af0_alt1(v20, &v314);
  v317 = &v314;
  v320 = 0;
  v321 = 0;
  v318 = 0;
  v319 = 0;
  v314 = GameData_1fced88;
  GameRoutine_5fc230(&v318);
  if (v317 != nullptr) {
    ((void (*)(__int64 (***)(), __int64*))(*v317)[6])(v317, &v318);
  }
  GameRoutine_604060(v20 + 912, *v246 + 568, &v318);
  *(_QWORD*)(v20 + 1032) =
      GameRoutine_615760(*(_QWORD*)(*v246 + 552), v20 + 912);
  if (v317 == &v314) {
    v270 = 4;
  }
  else {
    if (v317 == nullptr) {
      goto LABEL_173;
    }
    v270 = 5;
  }
  (*v317)[v270]();
LABEL_173:
  v320 = 0;
  v321 = 0;
  v318 = 0;
  v319 = 0;
  v314 = GameData_1fcee08;
  v317 = &v314;
  GameRoutine_5fc230(&v318);
  if (v317 != nullptr) {
    ((void (*)(__int64 (***)(), __int64*))(*v317)[6])(v317, &v318);
  }
  GameRoutine_604060(v20 + 1040, *v246 + 568, &v318);
  *(_QWORD*)(v20 + 1160) =
      GameRoutine_615760(*(_QWORD*)(*v246 + 552), v20 + 1040);
  if (v317 == &v314) {
    v271 = 4;
  }
  else {
    if (v317 == nullptr) {
      goto LABEL_180;
    }
    v271 = 5;
  }
  (*v317)[v271]();
LABEL_180:
  v320 = 0;
  v321 = 0;
  v318 = 0;
  v319 = 0;
  v314 = GameData_1fcee88;
  v317 = &v314;
  GameRoutine_5fc230(&v318);
  if (v317 != nullptr) {
    ((void (*)(__int64 (***)(), __int64*))(*v317)[6])(v317, &v318);
  }
  GameRoutine_604060(v20 + 1168, *v246 + 568, &v318);
  *(_QWORD*)(v20 + 1288) =
      GameRoutine_615760(*(_QWORD*)(*v246 + 552), v20 + 1168);
  if (v317 == &v314) {
    v272 = 4;
  }
  else {
    if (v317 == nullptr) {
      goto LABEL_187;
    }
    v272 = 5;
  }
  (*v317)[v272]();
LABEL_187:
  v273 = *(_QWORD*)(v20 + 8);
  v274 = fw_memory_HeapManager_Allocate(*v21, 192, 16, 0);
  TaskPassNodes_b94930(v274, v273, v20 + 24, v20 + 64, v20 + 96, v20 + 648,
                       v20 + 664);
  v275 = *(_QWORD*)(v20 + 1520);
  *(_QWORD*)(v20 + 1520) = v274;
  if (v275 != 0) {
    TaskPassNodes_b94cd0(v275);
    v277 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v277 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v277, v276);
  }
  v278 = *(_QWORD*)(v20 + 8);
  v279 = fw_memory_HeapManager_Allocate(*v21, 208, 16, 0);
  TaskPassNodes_bae7f0(
      v279, v278, v20 + 24, v20 + 64, v20 + 96, v20 + 120, 5, v280,
      *(_QWORD*)(v20 + 600),
      (__int64)(*(_QWORD*)(v20 + 608) - *(_QWORD*)(v20 + 600)) >> 4,
      *(_QWORD*)(v20 + 624),
      (__int64)(*(_QWORD*)(v20 + 632) - *(_QWORD*)(v20 + 624)) >> 4, v20 + 664,
      v20 + 1624);
  v281 = *(_QWORD*)(v20 + 1528);
  *(_QWORD*)(v20 + 1528) = v279;
  if (v281 != 0) {
    TaskPassNodes_baecd0(v281);
    v283 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v283 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v283, v282);
  }
  v284 = *(_QWORD*)(v20 + 8);
  v285 = fw_memory_HeapManager_Allocate(*v21, 184, 16, 0);
  gfxa_b89070(v285, v284, (_QWORD*)(v20 + 24), (_QWORD*)(v20 + 96));
  v286 = *(_QWORD*)(v20 + 1536);
  *(_QWORD*)(v20 + 1536) = v285;
  if (v286 != 0) {
    TaskPassNodes_b896c0(v286);
    v288 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v288 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v288, v287);
  }
  v289 = *(_QWORD*)(v20 + 8);
  v290 = fw_memory_HeapManager_Allocate(*v21, 128, 16, 0);
  TaskPassNodes_b8f5a0(v290, v289, v20 + 24, v20 + 64, v20 + 96, v20 + 648,
                       v20 + 1648, *(unsigned int*)(v20 + 40));
  v291 = *(_QWORD*)(v20 + 1544);
  *(_QWORD*)(v20 + 1544) = v290;
  if (v291 != 0) {
    TaskPassNodes_b8f8a0(v291);
    v293 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v293 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v293, v292);
  }
  v294 = *(_QWORD*)(v20 + 8);
  v295 = fw_memory_HeapManager_Allocate(*v21, 256, 16, 0);
  TaskPassNodes_b9c8f0(v295, v294, v20 + 24, v20 + 64, v20 + 96, v20 + 648,
                       v20 + 1648);
  v296 = *(_QWORD*)(v20 + 1552);
  *(_QWORD*)(v20 + 1552) = v295;
  if (v296 != 0) {
    TaskPassNodes_b9d3a0(v296);
    v298 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v298 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v298, v297);
  }
  v299 = *(_QWORD*)(v20 + 8);
  v300 = (__int64*)fw_memory_HeapManager_Allocate(*v21, 32, 16, 0);
  v302 = *(_QWORD*)(v20 + 96);
  v301 = *(_QWORD*)(v20 + 104);
  v303 = v300;
  *v300 = v299;
  v300[1] = v302;
  v300[2] = v301;
  if (v301 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v301 + 8), 1u,
                              memory_order_relaxed);
  }
  v304 = fw_memory_HeapManager_Allocate(*v21, 208, 16, 0);
  ResourceBuilder_b4a630(v304, v299);
  v305 = *(_QWORD*)(v20 + 1560);
  v303[3] = v304;
  *(_QWORD*)(v20 + 1560) = v303;
  if (v305 != 0) {
    GameRoutine_b87ec0(v305);
    v307 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v307 = 56;
    }
    nn_mem_StandardAllocator_Free(*v21 + v307, v306);
  }
  v308 = *(_QWORD*)(v20 + 8);
  v309 = fw_memory_HeapManager_Allocate(*v21, 64, 16, 0);
  result = TaskPassNodes_bbf6f0(v309, v308);
  v311 = *(_QWORD*)(v20 + 1568);
  *(_QWORD*)(v20 + 1568) = v309;
  if (v311 != 0) {
    TaskPassNodes_bbf8a0(v311);
    v313 = 128;
    if (*(_QWORD*)(*v21 + 200LL) == 0) {
      v313 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v21 + v313, v312);
  }
  return result;
}

__int64 MainRenderTask_bb8650(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(result + 32);
  *(_QWORD*)(result + 24) = v3;
  *(_QWORD*)(result + 32) = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = result;
    v6 = a2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    a2 = v6;
    result = v5;
  }
  v7 = *((_DWORD*)a2 + 4);
  v8 = 1;
  v9 = 0;
  *(_DWORD*)(result + 40) = v7;
  v10 = *(__int64*)((char*)a2 + 20);
  v11 = *(__int64*)((char*)a2 + 28);
  *(_DWORD*)(result + 60) = *((_DWORD*)a2 + 9);
  *(_QWORD*)(result + 52) = v11;
  *(_QWORD*)(result + 44) = v10;
  if ((v7 & 0x80000000) != 0) {
    v13 = 0;
  }
  else {
    v12 = *(_QWORD*)(result + 24);
    v13 = 0;
    if ((signed int)v7 < *(_DWORD*)v12) {
      v14 = (__int64*)(*(_QWORD*)(v12 + 112) + 48LL * v7);
      v13 = *v14;
      v9 = v14[1];
      if (v9 != 0) {
        v8 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
  }
  v15 = *(_QWORD*)(result + 72);
  *(_QWORD*)(result + 64) = v13;
  *(_QWORD*)(result + 72) = v9;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    result = v17;
    if ((v8 & 1) != 0) {
      goto LABEL_17;
    }
  }
  else if ((v8 & 1) != 0) {
    goto LABEL_17;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = result;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    result = v16;
  }

LABEL_17:
  v18 = *(_QWORD**)(result + 1520);
  v20 = *(_QWORD*)(result + 24);
  v19 = *(_QWORD*)(result + 32);
  v21 = result;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = v18[2];
  v18[1] = v20;
  v18[2] = v19;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v24 = *(_QWORD*)(v21 + 64);
  v23 = *(_QWORD*)(v21 + 72);
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = v18[4];
  v18[3] = v24;
  v18[4] = v23;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = *(_QWORD**)(v21 + 1528);
  v28 = *(_QWORD*)(v21 + 24);
  v27 = *(_QWORD*)(v21 + 32);
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
  }
  v29 = v26[2];
  v26[1] = v28;
  v26[2] = v27;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = std___1___shared_weak_count___release_weak(v29);
  }
  v31 = *(_QWORD*)(v21 + 64);
  v30 = *(_QWORD*)(v21 + 72);
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
  }
  v32 = v26[4];
  v26[3] = v31;
  v26[4] = v30;
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    result = std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *(_QWORD*)(v21 + 1536);
  v35 = *(_QWORD*)(v21 + 24);
  v34 = *(_QWORD*)(v21 + 32);
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = *(_QWORD*)(v33 + 16);
  *(_QWORD*)(v33 + 8) = v35;
  *(_QWORD*)(v33 + 16) = v34;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    result = std___1___shared_weak_count___release_weak(v36);
  }
  v37 = *(_QWORD*)(v21 + 1544);
  v38 = *(_DWORD*)(v21 + 40);
  v40 = *(_QWORD*)(v21 + 24);
  v39 = *(_QWORD*)(v21 + 32);
  if (v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8), 1u,
                              memory_order_relaxed);
  }
  v41 = *(_QWORD*)(v37 + 16);
  *(_QWORD*)(v37 + 8) = v40;
  *(_QWORD*)(v37 + 16) = v39;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = std___1___shared_weak_count___release_weak(v41);
  }
  v43 = *(_QWORD*)(v21 + 64);
  v42 = *(_QWORD*)(v21 + 72);
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                              memory_order_relaxed);
  }
  v44 = *(_QWORD*)(v37 + 32);
  *(_QWORD*)(v37 + 24) = v43;
  *(_QWORD*)(v37 + 32) = v42;
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    result = std___1___shared_weak_count___release_weak(v44);
  }
  *(_DWORD*)(v37 + 88) = v38;
  v45 = *(_QWORD**)(v21 + 1552);
  v47 = *(_QWORD*)(v21 + 24);
  v46 = *(_QWORD*)(v21 + 32);
  if (v46 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                              memory_order_relaxed);
  }
  v48 = v45[2];
  v45[1] = v47;
  v45[2] = v46;
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    result = std___1___shared_weak_count___release_weak(v48);
  }
  v50 = *(_QWORD*)(v21 + 64);
  v49 = *(_QWORD*)(v21 + 72);
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  v51 = v45[4];
  v45[3] = v50;
  v45[4] = v49;
  if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    result = std___1___shared_weak_count___release_weak(v51);
  }
  v52 = *(_QWORD*)(v21 + 1616);
  *(_BYTE*)(v21 + 1667) = 0;
  *(_QWORD*)(v21 + 1608) = 0;
  *(_QWORD*)(v21 + 1616) = 0;
  *(_BYTE*)(v21 + 1664) = 1;
  *(_DWORD*)(v21 + 1676) = 3;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    return std___1___shared_weak_count___release_weak(v52);
  }
  return result;
}

__int64 MainRenderTask_bb8af0(__int64 a1, int* a2)
{
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    int v19;
    int v20;
    __int64 v21;
    int v22;
    _DWORD v23[3];
    __int64 v24;
    __int64 v25;
  } v19_;

  v19_.v21 = 0x100000001LL;
  v19_.v22 = 0;
  *(_DWORD*)((char*)v19_.v23 + 3) = 0;
  v19_.v23[0] = 13;
  v4 = a2[1];
  v19_.v19 = *a2;
  v19_.v20 = v4;
  v5 = game_g_frame_clock_ptr[0];
  v6 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 552);
  v19_.v24 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 360);
  v7 = *(_QWORD*)(v6 + 16);
  LOBYTE(v19_.v23[1]) = 1;
  v19_.v25 = v7;
  GameRoutine_53c20((void*)(&v18), (__int64)&v19_.v19);
  v8 = v18;
  v9 = *(_QWORD*)(a1 + 1472);
  v18 = 0;
  *(_QWORD*)(a1 + 1472) = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    v10 = v18;
    v18 = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
  }
  LOWORD(v19_.v23[0]) = 0;
  v19_.v22 = 21;
  v11 = a2[1];
  v19_.v19 = *a2;
  v12 = *v5;
  v19_.v20 = v11;
  v19_.v21 = 1;
  v13 = *(_QWORD*)(v12 + 360);
  v14 = *(_QWORD*)(v12 + 552);
  *(_QWORD*)&v19_.v23[1] = v13;
  v15 = *(_QWORD*)(v14 + 16);
  LOBYTE(v19_.v23[0]) = 1;
  v19_.v24 = v15;
  GameRoutine_53c70((void*)(&v18), (__int64)&v19_.v19);
  v16 = v18;
  result = *(_QWORD*)(a1 + 1480);
  v18 = 0;
  *(_QWORD*)(a1 + 1480) = v16;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v18;
    v18 = 0;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  return result;
}

__int64 gfxa_MainRenderTask_setup3DFinalPasses_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3)
{
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  _QWORD* v13;
  _QWORD* v14;
  struct {
    _QWORD v16[2];
    int v17;
    int v18;
    __int64 v19;
  } v16_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a1 + 8);
  v16_.v16[0] = 0;
  v16_.v16[1] = 0;
  v6 = v3[1];
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    if ((*(_BYTE*)(v6 + 16700) & 1) != 0) {
      v7 = *(_QWORD*)(v6 + 16672);
      v8 = *(_DWORD*)(v7 + 24);
      v9 = *(_DWORD*)(v7 + 28);
    }
    else {
      v8 = *(_DWORD*)(v6 + 13304);
      v9 = *(_DWORD*)(v6 + 13308);
    }
  }
  else {
    v16_.v16[0] = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 456) + 32LL))(
        *(_QWORD*)(v6 + 456)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16_.v16[1] = v10;
    v11 = v3[1];
    v8 = *(_DWORD*)(v11 + 13312);
    v9 = *(_DWORD*)(v11 + 13316);
  }
  v16_.v17 = v8;
  v16_.v18 = v9;
  v12 = (unsigned int*)v3[187];
  v13 = *(_QWORD**)a2;
  v14 = *(_QWORD**)(a2 + 8);
  v16_.v19 = *(_QWORD*)(*(_QWORD*)(v3[10] + 8LL) + 256LL);
  return ResourceBuilder_b49bb0(v12, v13, v14, a3, (__int64)v16_.v16);
}

__int64 gfxa_MainRenderTask_setup3DFinalPasses_lambda3_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              __int64* a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  _QWORD* v11;
  struct {
    _QWORD v13[2];
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
  } v13_;

  v3 = *(_QWORD**)(a1 + 8);
  v13_.v13[0] = 0;
  v13_.v13[1] = 0;
  v5 = v3[188];
  v6 = *(_QWORD*)(*(_QWORD*)(v3[10] + 8LL) + 160LL);
  v7 = 368;
  if (*(_BYTE*)(v6 + 336) != 0) {
    v7 = 332;
  }
  v13_.v18 = *(_DWORD*)(v6 + v7);
  v8 = v3[1];
  v9 = *(_QWORD**)(a2 + 8);
  v10 = *(_DWORD*)(v8 + 13312);
  LODWORD(v8) = *(_DWORD*)(v8 + 13316);
  v11 = *(_QWORD**)a2;
  v13_.v14 = v10;
  v13_.v15 = v8;
  v13_.v16 = v10;
  v13_.v17 = v8;
  return TaskSharpness_19a3ed0(v5, v11, v9, a3, (int*)v13_.v13);
}

#pragma GCC visibility pop
