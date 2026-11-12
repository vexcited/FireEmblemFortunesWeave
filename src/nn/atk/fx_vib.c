#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_21347b0[5];
extern __int64* snd_g_memory_ptr[2];
float log10f(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 FxVib_Destructor(_QWORD* a1);
void FxVib_Unknown5_alt1(__int64 a1, __int64 a2,
                         unsigned int* a3) __asm__("FxVib_Unknown5");
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_21347b8[4];
__int64 FxVib_172c30(_QWORD* a1);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
float log10f_alt1(float) __asm__("log10f");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
__int64 FxVib_Unknown5(__int64 result, __int64 a2, unsigned int* a3);

__int64 FxVib_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_21347b0[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 17);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxVib_Unknown5(__int64 result, __int64 a2, unsigned int* a3)
{
  float v3;
  float v4;
  __int64 v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  float* v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float* v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _DWORD* v50;
  _DWORD* v51;
  float v52;
  float v53;
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
  __int64 v67;
  int* v68;
  int v69;
  int v70;
  float v71;
  float v72;
  float v73;
  float* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float* v80;
  __int64 v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  __int64 v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _DWORD* v97;
  _DWORD* v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  __int64 v114;
  int* v115;
  int v116;
  int v117;
  float v118;
  float v119;
  float v120;
  float* v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float* v127;
  __int64 v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  __int64 v135;
  float v136;
  float v137;
  float v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  _DWORD* v144;
  _DWORD* v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  __int64 v161;
  int* v162;
  int v163;
  int v164;
  float v165;
  float v166;
  float v167;
  __int64 v168;
  float* v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float* v175;
  unsigned int v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  __int64 v182;
  float v183;
  float v184;
  float v185;
  __int64 v186;
  float v187;
  __int64 v188;
  __int64 v189;
  _DWORD* v190;
  _DWORD* v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  int v202;
  int v203;
  int v204;
  float v205;
  float v206;
  float v207;
  int v208;
  int v209;
  float v210;
  __int64 v211;
  int* v212;
  int* v213;
  int v214;
  int v215;
  int v216;
  float v217;
  float v218;
  float v219;
  float* v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float* v226;
  unsigned int v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  __int64 v233;
  float v234;
  float v235;
  float v236;
  __int64 v237;
  float v238;
  __int64 v239;
  __int64 v240;
  _DWORD* v241;
  _DWORD* v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float v252;
  int v253;
  int v254;
  int v255;
  float v256;
  float v257;
  float v258;
  int v259;
  int v260;
  float v261;
  __int64 v262;
  int* v263;
  int* v264;
  int v265;
  int v266;
  int v267;
  float v268;
  float v269;
  float v270;
  float* v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  float* v277;
  unsigned int v278;
  float v279;
  float v280;
  float v281;
  float v282;
  float v283;
  __int64 v284;
  float v285;
  float v286;
  float v287;
  __int64 v288;
  float v289;
  __int64 v290;
  __int64 v291;
  _DWORD* v292;
  _DWORD* v293;
  float v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float v299;
  float v300;
  float v301;
  float v302;
  float v303;
  int v304;
  int v305;
  int v306;
  float v307;
  float v308;
  float v309;
  int v310;
  int v311;
  float v312;
  __int64 v313;
  int* v314;
  int* v315;
  int v316;
  int v317;
  int v318;
  float v319;
  float v320;
  float v321;
  __int64 v322;
  int v323;
  __int64 v324;
  int v325;
  float* v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float* v332;
  unsigned int v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float v338;
  __int64 v339;
  float v340;
  float v341;
  float v342;
  __int64 v343;
  float v344;
  __int64 v345;
  int* v346;
  float v347;
  float v348;
  float v349;
  float v350;
  float v351;
  float v352;
  float v353;
  float v354;
  float v355;
  float v356;
  float v357;
  float v358;
  float v359;
  int v360;
  int v361;
  float v362;
  int* v363;
  int v364;
  float v365;
  float v366;
  float* v367;
  float v368;
  float v369;
  float v370;
  float v371;
  float v372;
  float* v373;
  unsigned int v374;
  float v375;
  float v376;
  float v377;
  float v378;
  float v379;
  __int64 v380;
  float v381;
  float v382;
  float v383;
  __int64 v384;
  float v385;
  __int64 v386;
  int* v387;
  float v388;
  float v389;
  float v390;
  float v391;
  float v392;
  float v393;
  float v394;
  float v395;
  float v396;
  float v397;
  float v398;
  float v399;
  float v400;
  int v401;
  int v402;
  float v403;
  int* v404;
  int v405;
  float v406;
  float v407;
  float* v408;
  float v409;
  float v410;
  float v411;
  float v412;
  float v413;
  float* v414;
  unsigned int v415;
  float v416;
  float v417;
  float v418;
  float v419;
  float v420;
  __int64 v421;
  float v422;
  float v423;
  float v424;
  __int64 v425;
  float v426;
  __int64 v427;
  int* v428;
  float v429;
  float v430;
  float v431;
  float v432;
  float v433;
  float v434;
  float v435;
  float v436;
  float v437;
  float v438;
  float v439;
  float v440;
  float v441;
  int v442;
  int v443;
  float v444;
  int* v445;
  int v446;
  float v447;
  float v448;
  float* v449;
  float v450;
  float v451;
  float v452;
  float v453;
  float v454;
  float* v455;
  unsigned int v456;
  float v457;
  float v458;
  float v459;
  float v460;
  float v461;
  __int64 v462;
  float v463;
  float v464;
  float v465;
  __int64 v466;
  float v467;
  __int64 v468;
  int* v469;
  float v470;
  float v471;
  float v472;
  float v473;
  float v474;
  float v475;
  float v476;
  float v477;
  float v478;
  float v479;
  float v480;
  float v481;
  float v482;
  int v483;
  int v484;
  float v485;
  int* v486;
  int v487;
  float v488;
  float v489;
  float* v490;
  float v491;
  float v492;
  float v493;
  float v494;
  float v495;
  float* v496;
  unsigned int v497;
  float v498;
  float v499;
  float v500;
  float v501;
  float v502;
  __int64 v503;
  float v504;
  float v505;
  float v506;
  __int64 v507;
  float v508;
  __int64 v509;
  int* v510;
  float v511;
  float v512;
  float v513;
  float v514;
  float v515;
  float v516;
  float v517;
  float v518;
  float v519;
  float v520;
  float v521;
  float v522;
  float v523;
  int v524;
  int v525;
  float v526;
  int* v527;
  int v528;
  float v529;
  float v530;
  float* v531;
  float v532;
  float v533;
  float v534;
  float v535;
  float v536;
  float* v537;
  unsigned int v538;
  float v539;
  float v540;
  float v541;
  float v542;
  float v543;
  __int64 v544;
  float v545;
  float v546;
  float v547;
  __int64 v548;
  float v549;
  __int64 v550;
  int* v551;
  float v552;
  float v553;
  float v554;
  float v555;
  float v556;
  float v557;
  float v558;
  float v559;
  float v560;
  float v561;
  float v562;
  float v563;
  float v564;
  int v565;
  int v566;
  float v567;
  int* v568;
  int v569;
  float v570;
  float v571;
  void (*v572)(_QWORD);
  int v573;
  __int64 v574;
  int v575;
  int v576;
  unsigned int v577;
  int v578;
  __int64 v579;
  int v580;
  __int64 v581;
  __int64 v582;
  __int64 v583;
  int v584;
  __int64 v585;
  __int64 v586;
  __int64 v587;
  int v588;
  __int64 v589;
  __int64 v590;
  __int64 v591;
  __int64 v592;
  int v593;

  if ((int)a3[3] < 2) {
    return result;
  }
  v4 = *(float*)(result + 112);
  v3 = *(float*)(result + 116);
  v6 = result;
  v7 = (float)(v3 - v4) * 0x1.0000000000000p-1f;
  v8 = v4 + v7;
  v9 = *(_QWORD*)(result + 104);
  if (fabsf(v7) >= 0x1.99999a0000000p-4f) {
    v3 = v8;
  }
  *(float*)(result + 112) = v3;
  v11 = *(float*)(result + 120);
  v10 = *(float*)(result + 124);
  v12 = (float)(v10 - v11) * 0x1.0000000000000p-1f;
  v13 = v11 + v12;
  if (fabsf(v12) >= 0x1.99999a0000000p-4f) {
    v10 = v13;
  }
  *(float*)(result + 120) = v10;
  v15 = *(float*)(result + 128);
  v14 = *(float*)(result + 132);
  v16 = (float)(v14 - v15) * 0x1.0000000000000p-1f;
  v17 = v15 + v16;
  if (fabsf(v16) >= 0x1.99999a0000000p-4f) {
    v14 = v17;
  }
  *(float*)(result + 128) = v14;
  *(float*)(*(_QWORD*)(v9 + 8) + 204LL) = v14;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 104) + 16LL) + 204LL) =
      *(_DWORD*)(result + 120);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 104) + 24LL) + 204LL) =
      *(_DWORD*)(result + 112);
  v18 = a3[3];
  v19 = a3[4];
  v20 = v18 * *a3;
  v21 = v19 / v20;
  if (v19 % v20 != 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (v21 > (int)a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v593 = v19 / v20;
  if ((v18 | 2) == 6) {
    if (v21 >= 1) {
      v23 = 0;
      v592 = a2 + 16;
      while (1) {
        v24 = (int)*a3;
        v25 = a3[3];
        v26 = 2 * (int)v24;
        v27 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        v28 = v27[51];
        v29 = v27[7];
        v30 = v27[8];
        v31 = v27[9];
        v32 = v27[10];
        nn_os_LockMutex_alt1(v6 + 136);
        v33 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v34 = *a3;
        if ((int)v34 < 1) {
          v42 = v30;
          v43 = v32;
          v44 = 0x0.0p+0f;
        }
        else {
          v35 = v33[4];
          v36 = v33[5];
          v37 = v33[6];
          v38 = -v33[2];
          v39 = -v33[3];
          if ((unsigned int)v34 >= 8) {
            v40 = 0x0.0p+0f;
            v45 = 0;
            v41 = 0;
            v46 = 4LL * v25 * (int)v24 * v23;
            v47 = v46 + 4 * v26;
            v48 = a2 + v46;
            v49 = a2 + v47;
            do {
              v50 = (_DWORD*)(v48 + v45);
              v51 = (_DWORD*)(v49 + v45);
              v41 += 8;
              v45 += 32;
              v52 = (float)(*v51 + *v50);
              v53 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v29)) +
                                            (float)(v35 * v52)) +
                                    (float)(v37 * v30)) +
                            (float)(v38 * v31)) +
                    (float)(v39 * v32);
              v54 = v40 + fabsf(v28 * v53);
              v55 = (float)(v51[1] + v50[1]);
              v56 = (float)(v51[2] + v50[2]);
              v57 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v52)) +
                                            (float)(v35 * v55)) +
                                    (float)(v37 * v29)) +
                            (float)(v38 * v53)) +
                    (float)(v39 * v31);
              v58 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v55)) +
                                            (float)(v35 * v56)) +
                                    (float)(v37 * v52)) +
                            (float)(v38 * v57)) +
                    (float)(v39 * v53);
              v59 = (float)(v51[3] + v50[3]);
              v60 = (float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(v54 *
                                                       0x1.0000000000000p-1f)) +
                                fabsf(v28 * v57)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v28 * v58);
              v61 = (float)(v51[4] + v50[4]);
              v62 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v56)) +
                                            (float)(v35 * v59)) +
                                    (float)(v37 * v55)) +
                            (float)(v38 * v58)) +
                    (float)(v39 * v57);
              v63 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v59)) +
                                            (float)(v35 * v61)) +
                                    (float)(v37 * v56)) +
                            (float)(v38 * v62)) +
                    (float)(v39 * v58);
              v64 = (float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(v60 *
                                                       0x1.0000000000000p-1f)) +
                                fabsf(v28 * v62)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v28 * v63);
              v65 = (float)(v51[5] + v50[5]);
              v30 = (float)(v51[6] + v50[6]);
              v29 = (float)(v51[7] + v50[7]);
              v66 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v61)) +
                                            (float)(v35 * v65)) +
                                    (float)(v37 * v59)) +
                            (float)(v38 * v63)) +
                    (float)(v39 * v62);
              v32 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v65)) +
                                            (float)(v35 * v30)) +
                                    (float)(v37 * v61)) +
                            (float)(v38 * v66)) +
                    (float)(v39 * v63);
              v31 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v36 * v30)) +
                                            (float)(v35 * v29)) +
                                    (float)(v37 * v65)) +
                            (float)(v38 * v32)) +
                    (float)(v39 * v66);
              v40 =
                  (float)((float)(PSEUDO_UNFUSED(
                              (float)((float)(PSEUDO_UNFUSED(
                                          (float)((float)(PSEUDO_UNFUSED(
                                                      v64 *
                                                      0x1.0000000000000p-1f)) +
                                                  fabsf(v28 * v66)) *
                                          0x1.0000000000000p-1f)) +
                                      fabsf(v28 * v32)) *
                              0x1.0000000000000p-1f)) +
                          fabsf(v28 * v31)) *
                  0x1.0000000000000p-1f;
            } while (((4 * v34) & 0x1FFFFFFE0LL) != v45);
          }
          else {
            v40 = 0x0.0p+0f;
            v41 = 0;
          }
          v42 = v30;
          v43 = v32;
          v67 = v34 & 7;
          if (v67 != 0) {
            v68 = (int*)(a2 + 4 * v41 + 4LL * v25 * (int)v24 * v23);
            do {
              v69 = *v68;
              v70 = v68[v26];
              v42 = v29;
              v43 = v31;
              ++v68;
              --v67;
              v71 = v36 * v29;
              v29 = (float)(v70 + v69);
              v72 = (float)(v71 + (float)(v35 * v29)) + (float)(v37 * v30);
              v30 = v42;
              v31 = (float)(v72 + (float)(v38 * v31)) + (float)(v39 * v32);
              v32 = v43;
              v40 = (float)(v40 + fabsf(v28 * v31)) * 0x1.0000000000000p-1f;
            } while (v67 != 0);
          }
          v44 = 0x0.0p+0f;
          v73 = vcvts_n_f32_s32((int)v40, 0xFu);
          if (v73 != 0x0.0p+0f) {
            v44 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v73)) *
                                                     0x1.4000000000000p+4f)) +
                  0x1.9000000000000p+6f;
          }
        }
        *(float*)(v6 + 168) =
            (float)(*(float*)(v6 + 168) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v44 / 0x1.9000000000000p+6f) *
                        (float)((float)(v44 / 0x1.9000000000000p+6f) *
                                (float)((float)(v44 / 0x1.9000000000000p+6f) *
                                        (float)(v44 /
                                                0x1.9000000000000p+6f)))))) *
            0x1.0000000000000p-1f;
        v27[7] = v29;
        v27[8] = v42;
        v27[9] = v31;
        v27[10] = v43;
        v74 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        v75 = v74[51];
        v76 = v74[7];
        v77 = v74[8];
        v78 = v74[9];
        v79 = v74[10];
        nn_os_LockMutex_alt1(v6 + 136);
        v80 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v81 = *a3;
        if ((int)v81 < 1) {
          v89 = v77;
          v90 = v79;
          v91 = 0x0.0p+0f;
        }
        else {
          v82 = v80[4];
          v83 = v80[5];
          v84 = v80[6];
          v85 = -v80[2];
          v86 = -v80[3];
          if ((unsigned int)v81 >= 8) {
            v87 = 0x0.0p+0f;
            v92 = 0;
            v88 = 0;
            v93 = 4LL * v25 * (int)v24 * v23;
            v94 = v93 + 4 * v26;
            v95 = a2 + v93;
            v96 = a2 + v94;
            do {
              v97 = (_DWORD*)(v95 + v92);
              v98 = (_DWORD*)(v96 + v92);
              v88 += 8;
              v92 += 32;
              v99 = (float)(*v98 + *v97);
              v100 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v76)) +
                                          (float)(v82 * v99)) +
                                  (float)(v84 * v77)) +
                          (float)(v85 * v78)) +
                  (float)(v86 * v79);
              v101 = v87 + fabsf(v75 * v100);
              v102 = (float)(v98[1] + v97[1]);
              v103 = (float)(v98[2] + v97[2]);
              v104 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v99)) +
                                          (float)(v82 * v102)) +
                                  (float)(v84 * v76)) +
                          (float)(v85 * v100)) +
                  (float)(v86 * v78);
              v105 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v102)) +
                                          (float)(v82 * v103)) +
                                  (float)(v84 * v99)) +
                          (float)(v85 * v104)) +
                  (float)(v86 * v100);
              v106 = (float)(v98[3] + v97[3]);
              v107 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(PSEUDO_UNFUSED(
                                     v101 * 0x1.0000000000000p-1f)) +
                                 fabsf(v75 * v104)) *
                         0x1.0000000000000p-1f)) +
                     fabsf(v75 * v105);
              v108 = (float)(v98[4] + v97[4]);
              v109 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v103)) +
                                          (float)(v82 * v106)) +
                                  (float)(v84 * v102)) +
                          (float)(v85 * v105)) +
                  (float)(v86 * v104);
              v110 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v106)) +
                                          (float)(v82 * v108)) +
                                  (float)(v84 * v103)) +
                          (float)(v85 * v109)) +
                  (float)(v86 * v105);
              v111 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(PSEUDO_UNFUSED(
                                     v107 * 0x1.0000000000000p-1f)) +
                                 fabsf(v75 * v109)) *
                         0x1.0000000000000p-1f)) +
                     fabsf(v75 * v110);
              v112 = (float)(v98[5] + v97[5]);
              v77 = (float)(v98[6] + v97[6]);
              v76 = (float)(v98[7] + v97[7]);
              v113 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v108)) +
                                          (float)(v82 * v112)) +
                                  (float)(v84 * v106)) +
                          (float)(v85 * v110)) +
                  (float)(v86 * v109);
              v79 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v112)) +
                                          (float)(v82 * v77)) +
                                  (float)(v84 * v108)) +
                          (float)(v85 * v113)) +
                  (float)(v86 * v110);
              v78 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v83 * v77)) +
                                            (float)(v82 * v76)) +
                                    (float)(v84 * v112)) +
                            (float)(v85 * v79)) +
                    (float)(v86 * v113);
              v87 =
                  (float)((float)(PSEUDO_UNFUSED(
                              (float)((float)(PSEUDO_UNFUSED(
                                          (float)((float)(PSEUDO_UNFUSED(
                                                      v111 *
                                                      0x1.0000000000000p-1f)) +
                                                  fabsf(v75 * v113)) *
                                          0x1.0000000000000p-1f)) +
                                      fabsf(v75 * v79)) *
                              0x1.0000000000000p-1f)) +
                          fabsf(v75 * v78)) *
                  0x1.0000000000000p-1f;
            } while (((4 * v81) & 0x1FFFFFFE0LL) != v92);
          }
          else {
            v87 = 0x0.0p+0f;
            v88 = 0;
          }
          v89 = v77;
          v90 = v79;
          v114 = v81 & 7;
          if (v114 != 0) {
            v115 = (int*)(a2 + 4 * v88 + 4LL * v25 * (int)v24 * v23);
            do {
              v116 = *v115;
              v117 = v115[v26];
              v89 = v76;
              v90 = v78;
              ++v115;
              --v114;
              v118 = v83 * v76;
              v76 = (float)(v117 + v116);
              v119 = (float)(v118 + (float)(v82 * v76)) + (float)(v84 * v77);
              v77 = v89;
              v78 = (float)(v119 + (float)(v85 * v78)) + (float)(v86 * v79);
              v79 = v90;
              v87 = (float)(v87 + fabsf(v75 * v78)) * 0x1.0000000000000p-1f;
            } while (v114 != 0);
          }
          v91 = 0x0.0p+0f;
          v120 = vcvts_n_f32_s32((int)v87, 0xFu);
          if (v120 != 0x0.0p+0f) {
            v91 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v120)) *
                                                     0x1.4000000000000p+4f)) +
                  0x1.9000000000000p+6f;
          }
        }
        *(float*)(v6 + 172) =
            (float)(*(float*)(v6 + 172) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v91 / 0x1.9000000000000p+6f) *
                        (float)((float)(v91 / 0x1.9000000000000p+6f) *
                                (float)(v91 / 0x1.9000000000000p+6f))))) *
            0x1.0000000000000p-1f;
        v74[7] = v76;
        v74[8] = v89;
        v74[9] = v78;
        v74[10] = v90;
        v121 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        v122 = v121[51];
        v123 = v121[7];
        v124 = v121[8];
        v125 = v121[9];
        v126 = v121[10];
        nn_os_LockMutex_alt1(v6 + 136);
        v127 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v128 = *a3;
        if ((int)v128 < 1) {
          v136 = v124;
          v137 = v126;
          v138 = 0x0.0p+0f;
        }
        else {
          v129 = v127[4];
          v130 = v127[5];
          v131 = v127[6];
          v132 = -v127[2];
          v133 = -v127[3];
          if ((unsigned int)v128 >= 8) {
            v134 = 0x0.0p+0f;
            v139 = 0;
            v135 = 0;
            v140 = 4LL * v25 * (int)v24 * v23;
            v141 = v140 + 4 * v26;
            v142 = a2 + v140;
            v143 = a2 + v141;
            do {
              v144 = (_DWORD*)(v142 + v139);
              v145 = (_DWORD*)(v143 + v139);
              v135 += 8;
              v139 += 32;
              v146 = (float)(*v145 + *v144);
              v147 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v123)) +
                                          (float)(v129 * v146)) +
                                  (float)(v131 * v124)) +
                          (float)(v132 * v125)) +
                  (float)(v133 * v126);
              v148 = v134 + fabsf(v122 * v147);
              v149 = (float)(v145[1] + v144[1]);
              v150 = (float)(v145[2] + v144[2]);
              v151 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v146)) +
                                          (float)(v129 * v149)) +
                                  (float)(v131 * v123)) +
                          (float)(v132 * v147)) +
                  (float)(v133 * v125);
              v152 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v149)) +
                                          (float)(v129 * v150)) +
                                  (float)(v131 * v146)) +
                          (float)(v132 * v151)) +
                  (float)(v133 * v147);
              v153 = (float)(v145[3] + v144[3]);
              v154 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(PSEUDO_UNFUSED(
                                     v148 * 0x1.0000000000000p-1f)) +
                                 fabsf(v122 * v151)) *
                         0x1.0000000000000p-1f)) +
                     fabsf(v122 * v152);
              v155 = (float)(v145[4] + v144[4]);
              v156 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v150)) +
                                          (float)(v129 * v153)) +
                                  (float)(v131 * v149)) +
                          (float)(v132 * v152)) +
                  (float)(v133 * v151);
              v157 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v153)) +
                                          (float)(v129 * v155)) +
                                  (float)(v131 * v150)) +
                          (float)(v132 * v156)) +
                  (float)(v133 * v152);
              v158 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(PSEUDO_UNFUSED(
                                     v154 * 0x1.0000000000000p-1f)) +
                                 fabsf(v122 * v156)) *
                         0x1.0000000000000p-1f)) +
                     fabsf(v122 * v157);
              v159 = (float)(v145[5] + v144[5]);
              v124 = (float)(v145[6] + v144[6]);
              v123 = (float)(v145[7] + v144[7]);
              v160 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v155)) +
                                          (float)(v129 * v159)) +
                                  (float)(v131 * v153)) +
                          (float)(v132 * v157)) +
                  (float)(v133 * v156);
              v126 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v159)) +
                                          (float)(v129 * v124)) +
                                  (float)(v131 * v155)) +
                          (float)(v132 * v160)) +
                  (float)(v133 * v157);
              v125 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v130 * v124)) +
                                          (float)(v129 * v123)) +
                                  (float)(v131 * v159)) +
                          (float)(v132 * v126)) +
                  (float)(v133 * v160);
              v134 =
                  (float)((float)(PSEUDO_UNFUSED(
                              (float)((float)(PSEUDO_UNFUSED(
                                          (float)((float)(PSEUDO_UNFUSED(
                                                      v158 *
                                                      0x1.0000000000000p-1f)) +
                                                  fabsf(v122 * v160)) *
                                          0x1.0000000000000p-1f)) +
                                      fabsf(v122 * v126)) *
                              0x1.0000000000000p-1f)) +
                          fabsf(v122 * v125)) *
                  0x1.0000000000000p-1f;
            } while (((4 * v128) & 0x1FFFFFFE0LL) != v139);
          }
          else {
            v134 = 0x0.0p+0f;
            v135 = 0;
          }
          v136 = v124;
          v137 = v126;
          v161 = v128 & 7;
          if (v161 != 0) {
            v162 = (int*)(a2 + 4 * v135 + 4LL * v25 * (int)v24 * v23);
            do {
              v163 = *v162;
              v164 = v162[v26];
              v136 = v123;
              v137 = v125;
              ++v162;
              --v161;
              v165 = v130 * v123;
              v123 = (float)(v164 + v163);
              v166 =
                  (float)(v165 + (float)(v129 * v123)) + (float)(v131 * v124);
              v124 = v136;
              v125 =
                  (float)(v166 + (float)(v132 * v125)) + (float)(v133 * v126);
              v126 = v137;
              v134 = (float)(v134 + fabsf(v122 * v125)) * 0x1.0000000000000p-1f;
            } while (v161 != 0);
          }
          v138 = 0x0.0p+0f;
          v167 = vcvts_n_f32_s32((int)v134, 0xFu);
          if (v167 != 0x0.0p+0f) {
            v138 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v167)) *
                                                      0x1.4000000000000p+4f)) +
                   0x1.9000000000000p+6f;
          }
        }
        v168 = 3 * (int)v24;
        *(float*)(v6 + 176) =
            (float)(*(float*)(v6 + 176) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v138 / 0x1.9000000000000p+6f) *
                        (float)((float)(v138 / 0x1.9000000000000p+6f) *
                                (float)(v138 / 0x1.9000000000000p+6f))))) *
            0x1.0000000000000p-1f;
        v121[7] = v123;
        v121[8] = v136;
        v121[9] = v125;
        v121[10] = v137;
        v169 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        v170 = v169[51];
        v171 = v169[11];
        v172 = v169[12];
        v173 = v169[13];
        v174 = v169[14];
        nn_os_LockMutex_alt1(v6 + 136);
        v175 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v176 = *a3;
        if ((int)*a3 < 1) {
          v184 = v172;
          v185 = v174;
          v187 = 0x0.0p+0f;
          goto LABEL_60;
        }
        v177 = v175[4];
        v178 = v175[5];
        v179 = v175[6];
        v180 = -v175[2];
        v181 = -v175[3];
        if (v176 < 8) {
          break;
        }
        v183 = 0x0.0p+0f;
        v188 = 0;
        v189 = 4LL * v25 * (int)v24 * v23;
        v190 = (_DWORD*)(v592 + v189 + 4 * v168);
        v191 = (_DWORD*)(v592 + v189 + 4 * v24);
        do {
          v188 -= 8;
          v192 = (float)(*(v190 - 4) + *(v191 - 4));
          v193 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v171)) +
                                         (float)(v177 * v192)) +
                                 (float)(v179 * v172)) +
                         (float)(v180 * v173)) +
                 (float)(v181 * v174);
          v194 = (float)(*(v190 - 3) + *(v191 - 3));
          v195 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v192)) +
                                         (float)(v177 * v194)) +
                                 (float)(v179 * v171)) +
                         (float)(v180 * v193)) +
                 (float)(v181 * v173);
          v196 = (float)(*(v190 - 2) + *(v191 - 2));
          v197 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v194)) +
                                         (float)(v177 * v196)) +
                                 (float)(v179 * v192)) +
                         (float)(v180 * v195)) +
                 (float)(v181 * v193);
          v198 = (float)(PSEUDO_UNFUSED(
                     (float)((float)(PSEUDO_UNFUSED(
                                 (float)(v183 + fabsf(v170 * v193)) *
                                 0x1.0000000000000p-1f)) +
                             fabsf(v170 * v195)) *
                     0x1.0000000000000p-1f)) +
                 fabsf(v170 * v197);
          v199 = (float)(*(v190 - 1) + *(v191 - 1));
          v200 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v196)) +
                                         (float)(v177 * v199)) +
                                 (float)(v179 * v194)) +
                         (float)(v180 * v197)) +
                 (float)(v181 * v195);
          v201 = (float)(*v190 + *v191);
          v202 = v190[1] + v191[1];
          v203 = v190[2];
          v204 = v190[3];
          v190 += 8;
          v205 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v199)) +
                                         (float)(v177 * v201)) +
                                 (float)(v179 * v196)) +
                         (float)(v180 * v200)) +
                 (float)(v181 * v197);
          v206 = (float)(PSEUDO_UNFUSED(v198 * 0x1.0000000000000p-1f)) +
                 fabsf(v170 * v200);
          v207 = (float)v202;
          v208 = v191[2];
          v209 = v191[3];
          v191 += 8;
          v172 = (float)(v203 + v208);
          v171 = (float)(v204 + v209);
          v210 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v201)) +
                                         (float)(v177 * v207)) +
                                 (float)(v179 * v199)) +
                         (float)(v180 * v205)) +
                 (float)(v181 * v200);
          v174 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v207)) +
                                         (float)(v177 * v172)) +
                                 (float)(v179 * v201)) +
                         (float)(v180 * v210)) +
                 (float)(v181 * v205);
          v173 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v178 * v172)) +
                                         (float)(v177 * v171)) +
                                 (float)(v179 * v207)) +
                         (float)(v180 * v174)) +
                 (float)(v181 * v210);
          v183 =
              (float)((float)(PSEUDO_UNFUSED(
                          (float)((float)(PSEUDO_UNFUSED(
                                      (float)((float)(PSEUDO_UNFUSED(
                                                  (float)((float)(PSEUDO_UNFUSED(
                                                              v206 *
                                                              0x1.0000000000000p-1f)) +
                                                          fabsf(v170 * v205)) *
                                                  0x1.0000000000000p-1f)) +
                                              fabsf(v170 * v210)) *
                                      0x1.0000000000000p-1f)) +
                                  fabsf(v170 * v174)) *
                          0x1.0000000000000p-1f)) +
                      fabsf(v170 * v173)) *
              0x1.0000000000000p-1f;
        } while (-(__int64)(v176 & 0x7FFFFFF8) != v188);
        v182 = -v188;
        v184 = (float)(v203 + v208);
        v185 = v174;
        v186 = v176 & 7;
        if (v186 != 0) {
          goto LABEL_56;
        }
      LABEL_58:
        v187 = 0x0.0p+0f;
        v219 = vcvts_n_f32_s32((int)v183, 0xFu);
        if (v219 != 0x0.0p+0f) {
          v187 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v219)) *
                                                    0x1.4000000000000p+4f)) +
                 0x1.9000000000000p+6f;
        }
      LABEL_60:
        *(float*)(v6 + 180) =
            (float)(*(float*)(v6 + 180) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v187 / 0x1.9000000000000p+6f) *
                        (float)((float)(v187 / 0x1.9000000000000p+6f) *
                                (float)((float)(v187 / 0x1.9000000000000p+6f) *
                                        (float)(v187 /
                                                0x1.9000000000000p+6f)))))) *
            0x1.0000000000000p-1f;
        v169[11] = v171;
        v169[12] = v184;
        v169[13] = v173;
        v169[14] = v185;
        v220 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        v221 = v220[51];
        v222 = v220[11];
        v223 = v220[12];
        v224 = v220[13];
        v225 = v220[14];
        nn_os_LockMutex_alt1(v6 + 136);
        v226 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v227 = *a3;
        if ((int)*a3 < 1) {
          v235 = v223;
          v236 = v225;
          v238 = 0x0.0p+0f;
          goto LABEL_72;
        }
        v228 = v226[4];
        v229 = v226[5];
        v230 = v226[6];
        v231 = -v226[2];
        v232 = -v226[3];
        if (v227 < 8) {
          v233 = 0;
          v234 = 0x0.0p+0f;
          v235 = v223;
          v236 = v225;
          v237 = v227 & 7;
          if (v237 == 0) {
            goto LABEL_70;
          }
        LABEL_68:
          v262 = 4 * v233 + 4LL * v25 * (int)v24 * v23;
          v263 = (int*)(a2 + v262 + 4 * v168);
          v264 = (int*)(a2 + v262 + 4 * v24);
          do {
            v266 = *v264++;
            v265 = v266;
            v267 = *v263++;
            v235 = v222;
            v236 = v224;
            --v237;
            v268 = v229 * v222;
            v222 = (float)(v267 + v265);
            v269 = (float)(v268 + (float)(v228 * v222)) + (float)(v230 * v223);
            v223 = v235;
            v224 = (float)(v269 + (float)(v231 * v224)) + (float)(v232 * v225);
            v225 = v236;
            v234 = (float)(v234 + fabsf(v221 * v224)) * 0x1.0000000000000p-1f;
          } while (v237 != 0);
          goto LABEL_70;
        }
        v234 = 0x0.0p+0f;
        v239 = 0;
        v240 = 4LL * v25 * (int)v24 * v23;
        v241 = (_DWORD*)(v592 + v240 + 4 * v168);
        v242 = (_DWORD*)(v592 + v240 + 4 * v24);
        do {
          v239 -= 8;
          v243 = (float)(*(v241 - 4) + *(v242 - 4));
          v244 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v222)) +
                                         (float)(v228 * v243)) +
                                 (float)(v230 * v223)) +
                         (float)(v231 * v224)) +
                 (float)(v232 * v225);
          v245 = (float)(*(v241 - 3) + *(v242 - 3));
          v246 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v243)) +
                                         (float)(v228 * v245)) +
                                 (float)(v230 * v222)) +
                         (float)(v231 * v244)) +
                 (float)(v232 * v224);
          v247 = (float)(*(v241 - 2) + *(v242 - 2));
          v248 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v245)) +
                                         (float)(v228 * v247)) +
                                 (float)(v230 * v243)) +
                         (float)(v231 * v246)) +
                 (float)(v232 * v244);
          v249 = (float)(PSEUDO_UNFUSED(
                     (float)((float)(PSEUDO_UNFUSED(
                                 (float)(v234 + fabsf(v221 * v244)) *
                                 0x1.0000000000000p-1f)) +
                             fabsf(v221 * v246)) *
                     0x1.0000000000000p-1f)) +
                 fabsf(v221 * v248);
          v250 = (float)(*(v241 - 1) + *(v242 - 1));
          v251 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v247)) +
                                         (float)(v228 * v250)) +
                                 (float)(v230 * v245)) +
                         (float)(v231 * v248)) +
                 (float)(v232 * v246);
          v252 = (float)(*v241 + *v242);
          v253 = v241[1] + v242[1];
          v254 = v241[2];
          v255 = v241[3];
          v241 += 8;
          v256 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v250)) +
                                         (float)(v228 * v252)) +
                                 (float)(v230 * v247)) +
                         (float)(v231 * v251)) +
                 (float)(v232 * v248);
          v257 = (float)(PSEUDO_UNFUSED(v249 * 0x1.0000000000000p-1f)) +
                 fabsf(v221 * v251);
          v258 = (float)v253;
          v259 = v242[2];
          v260 = v242[3];
          v242 += 8;
          v223 = (float)(v254 + v259);
          v222 = (float)(v255 + v260);
          v261 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v252)) +
                                         (float)(v228 * v258)) +
                                 (float)(v230 * v250)) +
                         (float)(v231 * v256)) +
                 (float)(v232 * v251);
          v225 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v258)) +
                                         (float)(v228 * v223)) +
                                 (float)(v230 * v252)) +
                         (float)(v231 * v261)) +
                 (float)(v232 * v256);
          v224 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v229 * v223)) +
                                         (float)(v228 * v222)) +
                                 (float)(v230 * v258)) +
                         (float)(v231 * v225)) +
                 (float)(v232 * v261);
          v234 =
              (float)((float)(PSEUDO_UNFUSED(
                          (float)((float)(PSEUDO_UNFUSED(
                                      (float)((float)(PSEUDO_UNFUSED(
                                                  (float)((float)(PSEUDO_UNFUSED(
                                                              v257 *
                                                              0x1.0000000000000p-1f)) +
                                                          fabsf(v221 * v256)) *
                                                  0x1.0000000000000p-1f)) +
                                              fabsf(v221 * v261)) *
                                      0x1.0000000000000p-1f)) +
                                  fabsf(v221 * v225)) *
                          0x1.0000000000000p-1f)) +
                      fabsf(v221 * v224)) *
              0x1.0000000000000p-1f;
        } while (-(__int64)(v227 & 0x7FFFFFF8) != v239);
        v233 = -v239;
        v235 = (float)(v254 + v259);
        v236 = v225;
        v237 = v227 & 7;
        if (v237 != 0) {
          goto LABEL_68;
        }
      LABEL_70:
        v238 = 0x0.0p+0f;
        v270 = vcvts_n_f32_s32((int)v234, 0xFu);
        if (v270 != 0x0.0p+0f) {
          v238 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v270)) *
                                                    0x1.4000000000000p+4f)) +
                 0x1.9000000000000p+6f;
        }
      LABEL_72:
        *(float*)(v6 + 184) =
            (float)(*(float*)(v6 + 184) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v238 / 0x1.9000000000000p+6f) *
                        (float)((float)(v238 / 0x1.9000000000000p+6f) *
                                (float)(v238 / 0x1.9000000000000p+6f))))) *
            0x1.0000000000000p-1f;
        v220[11] = v222;
        v220[12] = v235;
        v220[13] = v224;
        v220[14] = v236;
        v271 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        v272 = v271[51];
        v273 = v271[11];
        v274 = v271[12];
        v275 = v271[13];
        v276 = v271[14];
        nn_os_LockMutex_alt1(v6 + 136);
        v277 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        nn_os_UnlockMutex_alt1(v6 + 136);
        v278 = *a3;
        if ((int)*a3 >= 1) {
          v279 = v277[4];
          v280 = v277[5];
          v281 = v277[6];
          v282 = -v277[2];
          v283 = -v277[3];
          if (v278 >= 8) {
            v285 = 0x0.0p+0f;
            v290 = 0;
            v291 = 4LL * v25 * (int)v24 * v23;
            v292 = (_DWORD*)(v592 + v291 + 4 * v168);
            v293 = (_DWORD*)(v592 + v291 + 4 * v24);
            do {
              v290 -= 8;
              v294 = (float)(*(v292 - 4) + *(v293 - 4));
              v295 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v273)) +
                                          (float)(v279 * v294)) +
                                  (float)(v281 * v274)) +
                          (float)(v282 * v275)) +
                  (float)(v283 * v276);
              v296 = (float)(*(v292 - 3) + *(v293 - 3));
              v297 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v294)) +
                                          (float)(v279 * v296)) +
                                  (float)(v281 * v273)) +
                          (float)(v282 * v295)) +
                  (float)(v283 * v275);
              v298 = (float)(*(v292 - 2) + *(v293 - 2));
              v299 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v296)) +
                                          (float)(v279 * v298)) +
                                  (float)(v281 * v294)) +
                          (float)(v282 * v297)) +
                  (float)(v283 * v295);
              v300 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(PSEUDO_UNFUSED(
                                     (float)(v285 + fabsf(v272 * v295)) *
                                     0x1.0000000000000p-1f)) +
                                 fabsf(v272 * v297)) *
                         0x1.0000000000000p-1f)) +
                     fabsf(v272 * v299);
              v301 = (float)(*(v292 - 1) + *(v293 - 1));
              v302 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v298)) +
                                          (float)(v279 * v301)) +
                                  (float)(v281 * v296)) +
                          (float)(v282 * v299)) +
                  (float)(v283 * v297);
              v303 = (float)(*v292 + *v293);
              v304 = v292[1] + v293[1];
              v305 = v292[2];
              v306 = v292[3];
              v292 += 8;
              v307 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v301)) +
                                          (float)(v279 * v303)) +
                                  (float)(v281 * v298)) +
                          (float)(v282 * v302)) +
                  (float)(v283 * v299);
              v308 = (float)(PSEUDO_UNFUSED(v300 * 0x1.0000000000000p-1f)) +
                     fabsf(v272 * v302);
              v309 = (float)v304;
              v310 = v293[2];
              v311 = v293[3];
              v293 += 8;
              v274 = (float)(v305 + v310);
              v273 = (float)(v306 + v311);
              v312 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v303)) +
                                          (float)(v279 * v309)) +
                                  (float)(v281 * v301)) +
                          (float)(v282 * v307)) +
                  (float)(v283 * v302);
              v276 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v309)) +
                                          (float)(v279 * v274)) +
                                  (float)(v281 * v303)) +
                          (float)(v282 * v312)) +
                  (float)(v283 * v307);
              v275 =
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(v280 * v274)) +
                                          (float)(v279 * v273)) +
                                  (float)(v281 * v309)) +
                          (float)(v282 * v276)) +
                  (float)(v283 * v312);
              v285 =
                  (float)((float)(PSEUDO_UNFUSED(
                              (float)((float)(PSEUDO_UNFUSED(
                                          (float)((float)(PSEUDO_UNFUSED(
                                                      (float)((float)(PSEUDO_UNFUSED(
                                                                  v308 *
                                                                  0x1.0000000000000p-1f)) +
                                                              fabsf(v272 *
                                                                    v307)) *
                                                      0x1.0000000000000p-1f)) +
                                                  fabsf(v272 * v312)) *
                                          0x1.0000000000000p-1f)) +
                                      fabsf(v272 * v276)) *
                              0x1.0000000000000p-1f)) +
                          fabsf(v272 * v275)) *
                  0x1.0000000000000p-1f;
            } while (-(__int64)(v278 & 0x7FFFFFF8) != v290);
            v284 = -v290;
            v286 = (float)(v305 + v310);
            v287 = v276;
            v288 = v278 & 7;
            if (v288 == 0) {
              goto LABEL_82;
            }
          }
          else {
            v284 = 0;
            v285 = 0x0.0p+0f;
            v286 = v274;
            v287 = v276;
            v288 = v278 & 7;
            if (v288 == 0) {
            LABEL_82:
              v289 = 0x0.0p+0f;
              v321 = vcvts_n_f32_s32((int)v285, 0xFu);
              if (v321 != 0x0.0p+0f) {
                v289 = (float)(int)(float)(PSEUDO_UNFUSED(
                           log10f_alt1(fabsf(v321)) * 0x1.4000000000000p+4f)) +
                       0x1.9000000000000p+6f;
              }
              v21 = v593;
              goto LABEL_14;
            }
          }
          v313 = 4 * v284 + 4LL * v25 * (int)v24 * v23;
          v314 = (int*)(a2 + v313 + 4 * v168);
          v315 = (int*)(a2 + v313 + 4 * v24);
          do {
            v317 = *v315++;
            v316 = v317;
            v318 = *v314++;
            v286 = v273;
            v287 = v275;
            --v288;
            v319 = v280 * v273;
            v273 = (float)(v318 + v316);
            v320 = (float)(v319 + (float)(v279 * v273)) + (float)(v281 * v274);
            v274 = v286;
            v275 = (float)(v320 + (float)(v282 * v275)) + (float)(v283 * v276);
            v276 = v287;
            v285 = (float)(v285 + fabsf(v272 * v275)) * 0x1.0000000000000p-1f;
          } while (v288 != 0);
          goto LABEL_82;
        }
        v21 = v593;
        v286 = v274;
        v287 = v276;
        v289 = 0x0.0p+0f;
      LABEL_14:
        ++v23;
        *(float*)(v6 + 188) =
            (float)(*(float*)(v6 + 188) +
                    (float)(PSEUDO_UNFUSED(
                        (float)(v289 / 0x1.9000000000000p+6f) *
                        (float)((float)(v289 / 0x1.9000000000000p+6f) *
                                (float)(v289 / 0x1.9000000000000p+6f))))) *
            0x1.0000000000000p-1f;
        v271[11] = v273;
        v271[12] = v286;
        v271[13] = v275;
        v271[14] = v287;
        if (v23 == v21) {
          goto LABEL_160;
        }
      }
      v182 = 0;
      v183 = 0x0.0p+0f;
      v184 = v172;
      v185 = v174;
      v186 = v176 & 7;
      if (v186 == 0) {
        goto LABEL_58;
      }
    LABEL_56:
      v211 = 4 * v182 + 4LL * v25 * (int)v24 * v23;
      v212 = (int*)(a2 + v211 + 4 * v168);
      v213 = (int*)(a2 + v211 + 4 * v24);
      do {
        v215 = *v213++;
        v214 = v215;
        v216 = *v212++;
        v184 = v171;
        v185 = v173;
        --v186;
        v217 = v178 * v171;
        v171 = (float)(v216 + v214);
        v218 = (float)(v217 + (float)(v177 * v171)) + (float)(v179 * v172);
        v172 = v184;
        v173 = (float)(v218 + (float)(v180 * v173)) + (float)(v181 * v174);
        v174 = v185;
        v183 = (float)(v183 + fabsf(v170 * v173)) * 0x1.0000000000000p-1f;
      } while (v186 != 0);
      goto LABEL_58;
    }
    goto LABEL_160;
  }
  if (v21 >= 1) {
    v322 = a2 + 16;
    v323 = 0;
    while (1) {
      v324 = (int)*a3;
      v325 = a3[3];
      v326 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      v327 = v326[51];
      v328 = v326[7];
      v329 = v326[8];
      v330 = v326[9];
      v331 = v326[10];
      nn_os_LockMutex_alt1(v6 + 136);
      v332 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v333 = *a3;
      if ((int)*a3 < 1) {
        v341 = v329;
        v342 = v331;
        v344 = 0x0.0p+0f;
        goto LABEL_100;
      }
      v334 = v332[4];
      v335 = v332[5];
      v336 = v332[6];
      v337 = -v332[2];
      v338 = -v332[3];
      if (v333 < 8) {
        break;
      }
      v340 = 0x0.0p+0f;
      v345 = 0;
      v346 = (int*)(v322 + 4LL * v325 * (int)v324 * v323);
      do {
        v345 -= 8;
        v347 = (float)*(v346 - 4);
        v348 = (float)*(v346 - 3);
        v349 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v328)) +
                                       (float)(v334 * v347)) +
                               (float)(v336 * v329)) +
                       (float)(v337 * v330)) +
               (float)(v338 * v331);
        v350 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v347)) +
                                       (float)(v334 * v348)) +
                               (float)(v336 * v328)) +
                       (float)(v337 * v349)) +
               (float)(v338 * v330);
        v351 = (float)*(v346 - 2);
        v352 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v348)) +
                                       (float)(v334 * v351)) +
                               (float)(v336 * v347)) +
                       (float)(v337 * v350)) +
               (float)(v338 * v349);
        v353 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(PSEUDO_UNFUSED(
                               (float)(v340 + fabsf(v327 * v349)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v327 * v350)) *
                   0x1.0000000000000p-1f)) +
               fabsf(v327 * v352);
        v354 = (float)*(v346 - 1);
        v355 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v351)) +
                                       (float)(v334 * v354)) +
                               (float)(v336 * v348)) +
                       (float)(v337 * v352)) +
               (float)(v338 * v350);
        v356 = (float)*v346;
        v357 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v354)) +
                                       (float)(v334 * v356)) +
                               (float)(v336 * v351)) +
                       (float)(v337 * v355)) +
               (float)(v338 * v352);
        v358 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(PSEUDO_UNFUSED(v353 * 0x1.0000000000000p-1f)) +
                        fabsf(v327 * v355)) *
                0x1.0000000000000p-1f)) +
            fabsf(v327 * v357);
        v359 = (float)v346[1];
        v360 = v346[2];
        v361 = v346[3];
        v346 += 8;
        v362 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v356)) +
                                       (float)(v334 * v359)) +
                               (float)(v336 * v354)) +
                       (float)(v337 * v357)) +
               (float)(v338 * v355);
        v329 = (float)v360;
        v328 = (float)v361;
        v331 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v359)) +
                                       (float)(v334 * (float)v360)) +
                               (float)(v336 * v356)) +
                       (float)(v337 * v362)) +
               (float)(v338 * v357);
        v330 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 *
                                                              (float)v360)) +
                                       (float)(v334 * (float)v361)) +
                               (float)(v336 * v359)) +
                       (float)(v337 * v331)) +
               (float)(v338 * v362);
        v340 =
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED(
                                                v358 * 0x1.0000000000000p-1f)) +
                                            fabsf(v327 * v362)) *
                                    0x1.0000000000000p-1f)) +
                                fabsf(v327 * v331)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v327 * v330)) *
            0x1.0000000000000p-1f;
      } while (-(__int64)(v333 & 0x7FFFFFF8) != v345);
      v339 = -v345;
      v341 = (float)v360;
      v342 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v335 * v359)) +
                                     (float)(v334 * (float)v360)) +
                             (float)(v336 * v356)) +
                     (float)(v337 * v362)) +
             (float)(v338 * v357);
      v343 = v333 & 7;
      if (v343 != 0) {
        goto LABEL_96;
      }
    LABEL_98:
      v344 = 0x0.0p+0f;
      v366 = vcvts_n_f32_s32((int)v340, 0xFu);
      if (v366 != 0x0.0p+0f) {
        v344 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v366)) *
                                                  0x1.4000000000000p+4f)) +
               0x1.9000000000000p+6f;
      }
    LABEL_100:
      *(float*)(v6 + 168) =
          (float)(*(float*)(v6 + 168) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v344 / 0x1.9000000000000p+6f) *
                      (float)((float)(v344 / 0x1.9000000000000p+6f) *
                              (float)((float)(v344 / 0x1.9000000000000p+6f) *
                                      (float)(v344 /
                                              0x1.9000000000000p+6f)))))) *
          0x1.0000000000000p-1f;
      v326[7] = v328;
      v326[8] = v341;
      v326[9] = v330;
      v326[10] = v342;
      v367 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      v368 = v367[51];
      v369 = v367[7];
      v370 = v367[8];
      v371 = v367[9];
      v372 = v367[10];
      nn_os_LockMutex_alt1(v6 + 136);
      v373 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v374 = *a3;
      if ((int)*a3 < 1) {
        v382 = v370;
        v383 = v372;
        v385 = 0x0.0p+0f;
        goto LABEL_112;
      }
      v375 = v373[4];
      v376 = v373[5];
      v377 = v373[6];
      v378 = -v373[2];
      v379 = -v373[3];
      if (v374 < 8) {
        v380 = 0;
        v381 = 0x0.0p+0f;
        v382 = v370;
        v383 = v372;
        v384 = v374 & 7;
        if (v384 == 0) {
          goto LABEL_110;
        }
      LABEL_108:
        v404 = (int*)(a2 + 4 * v380 + 4LL * v325 * (int)v324 * v323);
        do {
          v405 = *v404++;
          v382 = v369;
          v383 = v371;
          --v384;
          v369 = (float)v405;
          v406 = (float)((float)(PSEUDO_UNFUSED(v376 * v382)) +
                         (float)(v375 * (float)v405)) +
                 (float)(v377 * v370);
          v370 = v382;
          v371 = (float)(v406 + (float)(v378 * v371)) + (float)(v379 * v372);
          v372 = v383;
          v381 = (float)(v381 + fabsf(v368 * v371)) * 0x1.0000000000000p-1f;
        } while (v384 != 0);
        goto LABEL_110;
      }
      v381 = 0x0.0p+0f;
      v386 = 0;
      v387 = (int*)(v322 + 4LL * v325 * (int)v324 * v323);
      do {
        v386 -= 8;
        v388 = (float)*(v387 - 4);
        v389 = (float)*(v387 - 3);
        v390 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v369)) +
                                       (float)(v375 * v388)) +
                               (float)(v377 * v370)) +
                       (float)(v378 * v371)) +
               (float)(v379 * v372);
        v391 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v388)) +
                                       (float)(v375 * v389)) +
                               (float)(v377 * v369)) +
                       (float)(v378 * v390)) +
               (float)(v379 * v371);
        v392 = (float)*(v387 - 2);
        v393 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v389)) +
                                       (float)(v375 * v392)) +
                               (float)(v377 * v388)) +
                       (float)(v378 * v391)) +
               (float)(v379 * v390);
        v394 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(PSEUDO_UNFUSED(
                               (float)(v381 + fabsf(v368 * v390)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v368 * v391)) *
                   0x1.0000000000000p-1f)) +
               fabsf(v368 * v393);
        v395 = (float)*(v387 - 1);
        v396 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v392)) +
                                       (float)(v375 * v395)) +
                               (float)(v377 * v389)) +
                       (float)(v378 * v393)) +
               (float)(v379 * v391);
        v397 = (float)*v387;
        v398 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v395)) +
                                       (float)(v375 * v397)) +
                               (float)(v377 * v392)) +
                       (float)(v378 * v396)) +
               (float)(v379 * v393);
        v399 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(PSEUDO_UNFUSED(v394 * 0x1.0000000000000p-1f)) +
                        fabsf(v368 * v396)) *
                0x1.0000000000000p-1f)) +
            fabsf(v368 * v398);
        v400 = (float)v387[1];
        v401 = v387[2];
        v402 = v387[3];
        v387 += 8;
        v403 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v397)) +
                                       (float)(v375 * v400)) +
                               (float)(v377 * v395)) +
                       (float)(v378 * v398)) +
               (float)(v379 * v396);
        v370 = (float)v401;
        v369 = (float)v402;
        v372 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v400)) +
                                       (float)(v375 * (float)v401)) +
                               (float)(v377 * v397)) +
                       (float)(v378 * v403)) +
               (float)(v379 * v398);
        v371 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 *
                                                              (float)v401)) +
                                       (float)(v375 * (float)v402)) +
                               (float)(v377 * v400)) +
                       (float)(v378 * v372)) +
               (float)(v379 * v403);
        v381 =
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED(
                                                v399 * 0x1.0000000000000p-1f)) +
                                            fabsf(v368 * v403)) *
                                    0x1.0000000000000p-1f)) +
                                fabsf(v368 * v372)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v368 * v371)) *
            0x1.0000000000000p-1f;
      } while (-(__int64)(v374 & 0x7FFFFFF8) != v386);
      v380 = -v386;
      v382 = (float)v401;
      v383 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v376 * v400)) +
                                     (float)(v375 * (float)v401)) +
                             (float)(v377 * v397)) +
                     (float)(v378 * v403)) +
             (float)(v379 * v398);
      v384 = v374 & 7;
      if (v384 != 0) {
        goto LABEL_108;
      }
    LABEL_110:
      v385 = 0x0.0p+0f;
      v407 = vcvts_n_f32_s32((int)v381, 0xFu);
      if (v407 != 0x0.0p+0f) {
        v385 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v407)) *
                                                  0x1.4000000000000p+4f)) +
               0x1.9000000000000p+6f;
      }
    LABEL_112:
      *(float*)(v6 + 172) =
          (float)(*(float*)(v6 + 172) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v385 / 0x1.9000000000000p+6f) *
                      (float)((float)(v385 / 0x1.9000000000000p+6f) *
                              (float)(v385 / 0x1.9000000000000p+6f))))) *
          0x1.0000000000000p-1f;
      v367[7] = v369;
      v367[8] = v382;
      v367[9] = v371;
      v367[10] = v383;
      v408 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      v409 = v408[51];
      v410 = v408[7];
      v411 = v408[8];
      v412 = v408[9];
      v413 = v408[10];
      nn_os_LockMutex_alt1(v6 + 136);
      v414 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v415 = *a3;
      if ((int)*a3 < 1) {
        v423 = v413;
        v424 = v411;
        v426 = 0x0.0p+0f;
        goto LABEL_124;
      }
      v416 = v414[4];
      v417 = v414[5];
      v418 = v414[6];
      v419 = -v414[2];
      v420 = -v414[3];
      if (v415 < 8) {
        v421 = 0;
        v422 = 0x0.0p+0f;
        v423 = v413;
        v424 = v411;
        v425 = v415 & 7;
        if (v425 == 0) {
          goto LABEL_122;
        }
      LABEL_120:
        v445 = (int*)(a2 + 4 * v421 + 4LL * v325 * (int)v324 * v323);
        do {
          v446 = *v445++;
          v424 = v410;
          v423 = v412;
          --v425;
          v410 = (float)v446;
          v447 = (float)((float)(PSEUDO_UNFUSED(v417 * v424)) +
                         (float)(v416 * (float)v446)) +
                 (float)(v418 * v411);
          v411 = v424;
          v412 = (float)(v447 + (float)(v419 * v412)) + (float)(v420 * v413);
          v413 = v423;
          v422 = (float)(v422 + fabsf(v409 * v412)) * 0x1.0000000000000p-1f;
        } while (v425 != 0);
        goto LABEL_122;
      }
      v422 = 0x0.0p+0f;
      v427 = 0;
      v428 = (int*)(v322 + 4LL * v325 * (int)v324 * v323);
      do {
        v427 -= 8;
        v429 = (float)*(v428 - 4);
        v430 = (float)*(v428 - 3);
        v431 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v410)) +
                                       (float)(v416 * v429)) +
                               (float)(v418 * v411)) +
                       (float)(v419 * v412)) +
               (float)(v420 * v413);
        v432 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v429)) +
                                       (float)(v416 * v430)) +
                               (float)(v418 * v410)) +
                       (float)(v419 * v431)) +
               (float)(v420 * v412);
        v433 = (float)*(v428 - 2);
        v434 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v430)) +
                                       (float)(v416 * v433)) +
                               (float)(v418 * v429)) +
                       (float)(v419 * v432)) +
               (float)(v420 * v431);
        v435 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(PSEUDO_UNFUSED(
                               (float)(v422 + fabsf(v409 * v431)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v409 * v432)) *
                   0x1.0000000000000p-1f)) +
               fabsf(v409 * v434);
        v436 = (float)*(v428 - 1);
        v437 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v433)) +
                                       (float)(v416 * v436)) +
                               (float)(v418 * v430)) +
                       (float)(v419 * v434)) +
               (float)(v420 * v432);
        v438 = (float)*v428;
        v439 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v436)) +
                                       (float)(v416 * v438)) +
                               (float)(v418 * v433)) +
                       (float)(v419 * v437)) +
               (float)(v420 * v434);
        v440 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(PSEUDO_UNFUSED(v435 * 0x1.0000000000000p-1f)) +
                        fabsf(v409 * v437)) *
                0x1.0000000000000p-1f)) +
            fabsf(v409 * v439);
        v441 = (float)v428[1];
        v442 = v428[2];
        v443 = v428[3];
        v428 += 8;
        v444 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v438)) +
                                       (float)(v416 * v441)) +
                               (float)(v418 * v436)) +
                       (float)(v419 * v439)) +
               (float)(v420 * v437);
        v411 = (float)v442;
        v410 = (float)v443;
        v413 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v441)) +
                                       (float)(v416 * (float)v442)) +
                               (float)(v418 * v438)) +
                       (float)(v419 * v444)) +
               (float)(v420 * v439);
        v412 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 *
                                                              (float)v442)) +
                                       (float)(v416 * (float)v443)) +
                               (float)(v418 * v441)) +
                       (float)(v419 * v413)) +
               (float)(v420 * v444);
        v422 =
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED(
                                                v440 * 0x1.0000000000000p-1f)) +
                                            fabsf(v409 * v444)) *
                                    0x1.0000000000000p-1f)) +
                                fabsf(v409 * v413)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v409 * v412)) *
            0x1.0000000000000p-1f;
      } while (-(__int64)(v415 & 0x7FFFFFF8) != v427);
      v421 = -v427;
      v423 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v417 * v441)) +
                                     (float)(v416 * (float)v442)) +
                             (float)(v418 * v438)) +
                     (float)(v419 * v444)) +
             (float)(v420 * v439);
      v424 = (float)v442;
      v425 = v415 & 7;
      if (v425 != 0) {
        goto LABEL_120;
      }
    LABEL_122:
      v426 = 0x0.0p+0f;
      v448 = vcvts_n_f32_s32((int)v422, 0xFu);
      if (v448 != 0x0.0p+0f) {
        v426 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v448)) *
                                                  0x1.4000000000000p+4f)) +
               0x1.9000000000000p+6f;
      }
    LABEL_124:
      *(float*)(v6 + 176) =
          (float)(*(float*)(v6 + 176) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v426 / 0x1.9000000000000p+6f) *
                      (float)((float)(v426 / 0x1.9000000000000p+6f) *
                              (float)(v426 / 0x1.9000000000000p+6f))))) *
          0x1.0000000000000p-1f;
      v408[7] = v410;
      v408[8] = v424;
      v408[9] = v412;
      v408[10] = v423;
      v449 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      v450 = v449[51];
      v451 = v449[11];
      v452 = v449[12];
      v453 = v449[13];
      v454 = v449[14];
      nn_os_LockMutex_alt1(v6 + 136);
      v455 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v456 = *a3;
      if ((int)*a3 < 1) {
        v464 = v454;
        v465 = v452;
        v467 = 0x0.0p+0f;
        goto LABEL_136;
      }
      v457 = v455[4];
      v458 = v455[5];
      v459 = v455[6];
      v460 = -v455[2];
      v461 = -v455[3];
      if (v456 < 8) {
        v462 = 0;
        v463 = 0x0.0p+0f;
        v464 = v454;
        v465 = v452;
        v466 = v456 & 7;
        if (v466 == 0) {
          goto LABEL_134;
        }
      LABEL_132:
        v486 = (int*)(a2 + 4 * v462 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
        do {
          v487 = *v486++;
          v465 = v451;
          v464 = v453;
          --v466;
          v451 = (float)v487;
          v488 = (float)((float)(PSEUDO_UNFUSED(v458 * v465)) +
                         (float)(v457 * (float)v487)) +
                 (float)(v459 * v452);
          v452 = v465;
          v453 = (float)(v488 + (float)(v460 * v453)) + (float)(v461 * v454);
          v454 = v464;
          v463 = (float)(v463 + fabsf(v450 * v453)) * 0x1.0000000000000p-1f;
        } while (v466 != 0);
        goto LABEL_134;
      }
      v463 = 0x0.0p+0f;
      v468 = 0;
      v469 = (int*)(v322 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
      do {
        v468 -= 8;
        v470 = (float)*(v469 - 4);
        v471 = (float)*(v469 - 3);
        v472 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v451)) +
                                       (float)(v457 * v470)) +
                               (float)(v459 * v452)) +
                       (float)(v460 * v453)) +
               (float)(v461 * v454);
        v473 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v470)) +
                                       (float)(v457 * v471)) +
                               (float)(v459 * v451)) +
                       (float)(v460 * v472)) +
               (float)(v461 * v453);
        v474 = (float)*(v469 - 2);
        v475 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v471)) +
                                       (float)(v457 * v474)) +
                               (float)(v459 * v470)) +
                       (float)(v460 * v473)) +
               (float)(v461 * v472);
        v476 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(PSEUDO_UNFUSED(
                               (float)(v463 + fabsf(v450 * v472)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v450 * v473)) *
                   0x1.0000000000000p-1f)) +
               fabsf(v450 * v475);
        v477 = (float)*(v469 - 1);
        v478 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v474)) +
                                       (float)(v457 * v477)) +
                               (float)(v459 * v471)) +
                       (float)(v460 * v475)) +
               (float)(v461 * v473);
        v479 = (float)*v469;
        v480 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v477)) +
                                       (float)(v457 * v479)) +
                               (float)(v459 * v474)) +
                       (float)(v460 * v478)) +
               (float)(v461 * v475);
        v481 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(PSEUDO_UNFUSED(v476 * 0x1.0000000000000p-1f)) +
                        fabsf(v450 * v478)) *
                0x1.0000000000000p-1f)) +
            fabsf(v450 * v480);
        v482 = (float)v469[1];
        v483 = v469[2];
        v484 = v469[3];
        v469 += 8;
        v485 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v479)) +
                                       (float)(v457 * v482)) +
                               (float)(v459 * v477)) +
                       (float)(v460 * v480)) +
               (float)(v461 * v478);
        v452 = (float)v483;
        v451 = (float)v484;
        v454 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v482)) +
                                       (float)(v457 * (float)v483)) +
                               (float)(v459 * v479)) +
                       (float)(v460 * v485)) +
               (float)(v461 * v480);
        v453 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 *
                                                              (float)v483)) +
                                       (float)(v457 * (float)v484)) +
                               (float)(v459 * v482)) +
                       (float)(v460 * v454)) +
               (float)(v461 * v485);
        v463 =
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED(
                                                v481 * 0x1.0000000000000p-1f)) +
                                            fabsf(v450 * v485)) *
                                    0x1.0000000000000p-1f)) +
                                fabsf(v450 * v454)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v450 * v453)) *
            0x1.0000000000000p-1f;
      } while (-(__int64)(v456 & 0x7FFFFFF8) != v468);
      v462 = -v468;
      v464 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v458 * v482)) +
                                     (float)(v457 * (float)v483)) +
                             (float)(v459 * v479)) +
                     (float)(v460 * v485)) +
             (float)(v461 * v480);
      v465 = (float)v483;
      v466 = v456 & 7;
      if (v466 != 0) {
        goto LABEL_132;
      }
    LABEL_134:
      v467 = 0x0.0p+0f;
      v489 = vcvts_n_f32_s32((int)v463, 0xFu);
      if (v489 != 0x0.0p+0f) {
        v467 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v489)) *
                                                  0x1.4000000000000p+4f)) +
               0x1.9000000000000p+6f;
      }
    LABEL_136:
      *(float*)(v6 + 180) =
          (float)(*(float*)(v6 + 180) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v467 / 0x1.9000000000000p+6f) *
                      (float)((float)(v467 / 0x1.9000000000000p+6f) *
                              (float)((float)(v467 / 0x1.9000000000000p+6f) *
                                      (float)(v467 /
                                              0x1.9000000000000p+6f)))))) *
          0x1.0000000000000p-1f;
      v449[11] = v451;
      v449[12] = v465;
      v449[13] = v453;
      v449[14] = v464;
      v490 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      v491 = v490[51];
      v492 = v490[11];
      v493 = v490[12];
      v494 = v490[13];
      v495 = v490[14];
      nn_os_LockMutex_alt1(v6 + 136);
      v496 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v497 = *a3;
      if ((int)*a3 < 1) {
        v505 = v495;
        v506 = v493;
        v508 = 0x0.0p+0f;
        goto LABEL_148;
      }
      v498 = v496[4];
      v499 = v496[5];
      v500 = v496[6];
      v501 = -v496[2];
      v502 = -v496[3];
      if (v497 < 8) {
        v503 = 0;
        v504 = 0x0.0p+0f;
        v505 = v495;
        v506 = v493;
        v507 = v497 & 7;
        if (v507 == 0) {
          goto LABEL_146;
        }
      LABEL_144:
        v527 = (int*)(a2 + 4 * v503 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
        do {
          v528 = *v527++;
          v506 = v492;
          v505 = v494;
          --v507;
          v492 = (float)v528;
          v529 = (float)((float)(PSEUDO_UNFUSED(v499 * v506)) +
                         (float)(v498 * (float)v528)) +
                 (float)(v500 * v493);
          v493 = v506;
          v494 = (float)(v529 + (float)(v501 * v494)) + (float)(v502 * v495);
          v495 = v505;
          v504 = (float)(v504 + fabsf(v491 * v494)) * 0x1.0000000000000p-1f;
        } while (v507 != 0);
        goto LABEL_146;
      }
      v504 = 0x0.0p+0f;
      v509 = 0;
      v510 = (int*)(v322 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
      do {
        v509 -= 8;
        v511 = (float)*(v510 - 4);
        v512 = (float)*(v510 - 3);
        v513 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v492)) +
                                       (float)(v498 * v511)) +
                               (float)(v500 * v493)) +
                       (float)(v501 * v494)) +
               (float)(v502 * v495);
        v514 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v511)) +
                                       (float)(v498 * v512)) +
                               (float)(v500 * v492)) +
                       (float)(v501 * v513)) +
               (float)(v502 * v494);
        v515 = (float)*(v510 - 2);
        v516 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v512)) +
                                       (float)(v498 * v515)) +
                               (float)(v500 * v511)) +
                       (float)(v501 * v514)) +
               (float)(v502 * v513);
        v517 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(PSEUDO_UNFUSED(
                               (float)(v504 + fabsf(v491 * v513)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v491 * v514)) *
                   0x1.0000000000000p-1f)) +
               fabsf(v491 * v516);
        v518 = (float)*(v510 - 1);
        v519 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v515)) +
                                       (float)(v498 * v518)) +
                               (float)(v500 * v512)) +
                       (float)(v501 * v516)) +
               (float)(v502 * v514);
        v520 = (float)*v510;
        v521 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v518)) +
                                       (float)(v498 * v520)) +
                               (float)(v500 * v515)) +
                       (float)(v501 * v519)) +
               (float)(v502 * v516);
        v522 =
            (float)(PSEUDO_UNFUSED(
                (float)((float)(PSEUDO_UNFUSED(v517 * 0x1.0000000000000p-1f)) +
                        fabsf(v491 * v519)) *
                0x1.0000000000000p-1f)) +
            fabsf(v491 * v521);
        v523 = (float)v510[1];
        v524 = v510[2];
        v525 = v510[3];
        v510 += 8;
        v526 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v520)) +
                                       (float)(v498 * v523)) +
                               (float)(v500 * v518)) +
                       (float)(v501 * v521)) +
               (float)(v502 * v519);
        v493 = (float)v524;
        v492 = (float)v525;
        v495 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v523)) +
                                       (float)(v498 * (float)v524)) +
                               (float)(v500 * v520)) +
                       (float)(v501 * v526)) +
               (float)(v502 * v521);
        v494 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 *
                                                              (float)v524)) +
                                       (float)(v498 * (float)v525)) +
                               (float)(v500 * v523)) +
                       (float)(v501 * v495)) +
               (float)(v502 * v526);
        v504 =
            (float)((float)(PSEUDO_UNFUSED(
                        (float)((float)(PSEUDO_UNFUSED(
                                    (float)((float)(PSEUDO_UNFUSED(
                                                v522 * 0x1.0000000000000p-1f)) +
                                            fabsf(v491 * v526)) *
                                    0x1.0000000000000p-1f)) +
                                fabsf(v491 * v495)) *
                        0x1.0000000000000p-1f)) +
                    fabsf(v491 * v494)) *
            0x1.0000000000000p-1f;
      } while (-(__int64)(v497 & 0x7FFFFFF8) != v509);
      v503 = -v509;
      v505 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v499 * v523)) +
                                     (float)(v498 * (float)v524)) +
                             (float)(v500 * v520)) +
                     (float)(v501 * v526)) +
             (float)(v502 * v521);
      v506 = (float)v524;
      v507 = v497 & 7;
      if (v507 != 0) {
        goto LABEL_144;
      }
    LABEL_146:
      v508 = 0x0.0p+0f;
      v530 = vcvts_n_f32_s32((int)v504, 0xFu);
      if (v530 != 0x0.0p+0f) {
        v508 = (float)(int)(float)(PSEUDO_UNFUSED(log10f_alt1(fabsf(v530)) *
                                                  0x1.4000000000000p+4f)) +
               0x1.9000000000000p+6f;
      }
    LABEL_148:
      *(float*)(v6 + 184) =
          (float)(*(float*)(v6 + 184) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v508 / 0x1.9000000000000p+6f) *
                      (float)((float)(v508 / 0x1.9000000000000p+6f) *
                              (float)(v508 / 0x1.9000000000000p+6f))))) *
          0x1.0000000000000p-1f;
      v490[11] = v492;
      v490[12] = v506;
      v490[13] = v494;
      v490[14] = v505;
      v531 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      v532 = v531[51];
      v533 = v531[11];
      v534 = v531[12];
      v535 = v531[13];
      v536 = v531[14];
      nn_os_LockMutex_alt1(v6 + 136);
      v537 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      nn_os_UnlockMutex_alt1(v6 + 136);
      v538 = *a3;
      if ((int)*a3 >= 1) {
        v539 = v537[4];
        v540 = v537[5];
        v541 = v537[6];
        v542 = -v537[2];
        v543 = -v537[3];
        if (v538 >= 8) {
          v545 = 0x0.0p+0f;
          v550 = 0;
          v551 = (int*)(v322 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
          do {
            v550 -= 8;
            v552 = (float)*(v551 - 4);
            v553 = (float)*(v551 - 3);
            v554 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v533)) +
                                        (float)(v539 * v552)) +
                                (float)(v541 * v534)) +
                        (float)(v542 * v535)) +
                (float)(v543 * v536);
            v555 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v552)) +
                                        (float)(v539 * v553)) +
                                (float)(v541 * v533)) +
                        (float)(v542 * v554)) +
                (float)(v543 * v535);
            v556 = (float)*(v551 - 2);
            v557 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v553)) +
                                        (float)(v539 * v556)) +
                                (float)(v541 * v552)) +
                        (float)(v542 * v555)) +
                (float)(v543 * v554);
            v558 = (float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(
                                   (float)(v545 + fabsf(v532 * v554)) *
                                   0x1.0000000000000p-1f)) +
                               fabsf(v532 * v555)) *
                       0x1.0000000000000p-1f)) +
                   fabsf(v532 * v557);
            v559 = (float)*(v551 - 1);
            v560 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v556)) +
                                        (float)(v539 * v559)) +
                                (float)(v541 * v553)) +
                        (float)(v542 * v557)) +
                (float)(v543 * v555);
            v561 = (float)*v551;
            v562 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v559)) +
                                        (float)(v539 * v561)) +
                                (float)(v541 * v556)) +
                        (float)(v542 * v560)) +
                (float)(v543 * v557);
            v563 = (float)(PSEUDO_UNFUSED(
                       (float)((float)(PSEUDO_UNFUSED(v558 *
                                                      0x1.0000000000000p-1f)) +
                               fabsf(v532 * v560)) *
                       0x1.0000000000000p-1f)) +
                   fabsf(v532 * v562);
            v564 = (float)v551[1];
            v565 = v551[2];
            v566 = v551[3];
            v551 += 8;
            v567 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v561)) +
                                        (float)(v539 * v564)) +
                                (float)(v541 * v559)) +
                        (float)(v542 * v562)) +
                (float)(v543 * v560);
            v534 = (float)v565;
            v533 = (float)v566;
            v536 =
                (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v564)) +
                                        (float)(v539 * (float)v565)) +
                                (float)(v541 * v561)) +
                        (float)(v542 * v567)) +
                (float)(v543 * v562);
            v535 = (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                               v540 * (float)v565)) +
                                           (float)(v539 * (float)v566)) +
                                   (float)(v541 * v564)) +
                           (float)(v542 * v536)) +
                   (float)(v543 * v567);
            v545 = (float)((float)(PSEUDO_UNFUSED(
                               (float)((float)(PSEUDO_UNFUSED(
                                           (float)((float)(PSEUDO_UNFUSED(
                                                       v563 *
                                                       0x1.0000000000000p-1f)) +
                                                   fabsf(v532 * v567)) *
                                           0x1.0000000000000p-1f)) +
                                       fabsf(v532 * v536)) *
                               0x1.0000000000000p-1f)) +
                           fabsf(v532 * v535)) *
                   0x1.0000000000000p-1f;
          } while (-(__int64)(v538 & 0x7FFFFFF8) != v550);
          v544 = -v550;
          v546 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v540 * v564)) +
                                         (float)(v539 * (float)v565)) +
                                 (float)(v541 * v561)) +
                         (float)(v542 * v567)) +
                 (float)(v543 * v562);
          v547 = (float)v565;
          v548 = v538 & 7;
          if (v548 == 0) {
            goto LABEL_158;
          }
        }
        else {
          v544 = 0;
          v545 = 0x0.0p+0f;
          v546 = v536;
          v547 = v534;
          v548 = v538 & 7;
          if (v548 == 0) {
          LABEL_158:
            v549 = 0x0.0p+0f;
            v571 = vcvts_n_f32_s32((int)v545, 0xFu);
            if (v571 != 0x0.0p+0f) {
              v549 = (float)(int)(float)(PSEUDO_UNFUSED(
                         log10f_alt1(fabsf(v571)) * 0x1.4000000000000p+4f)) +
                     0x1.9000000000000p+6f;
            }
            v21 = v593;
            goto LABEL_87;
          }
        }
        v568 = (int*)(a2 + 4 * v544 + 4 * v324 + 4LL * v325 * (int)v324 * v323);
        do {
          v569 = *v568++;
          v547 = v533;
          v546 = v535;
          --v548;
          v533 = (float)v569;
          v570 = (float)((float)(PSEUDO_UNFUSED(v540 * v547)) +
                         (float)(v539 * (float)v569)) +
                 (float)(v541 * v534);
          v534 = v547;
          v535 = (float)(v570 + (float)(v542 * v535)) + (float)(v543 * v536);
          v536 = v546;
          v545 = (float)(v545 + fabsf(v532 * v535)) * 0x1.0000000000000p-1f;
        } while (v548 != 0);
        goto LABEL_158;
      }
      v21 = v593;
      v546 = v536;
      v547 = v534;
      v549 = 0x0.0p+0f;
    LABEL_87:
      ++v323;
      *(float*)(v6 + 188) =
          (float)(*(float*)(v6 + 188) +
                  (float)(PSEUDO_UNFUSED(
                      (float)(v549 / 0x1.9000000000000p+6f) *
                      (float)((float)(v549 / 0x1.9000000000000p+6f) *
                              (float)(v549 / 0x1.9000000000000p+6f))))) *
          0x1.0000000000000p-1f;
      v531[11] = v533;
      v531[12] = v547;
      v531[13] = v535;
      v531[14] = v546;
      if (v323 == v21) {
        goto LABEL_160;
      }
    }
    v339 = 0;
    v340 = 0x0.0p+0f;
    v341 = v329;
    v342 = v331;
    v343 = v333 & 7;
    if (v343 == 0) {
      goto LABEL_98;
    }
  LABEL_96:
    v363 = (int*)(a2 + 4 * v339 + 4LL * v325 * (int)v324 * v323);
    do {
      v364 = *v363++;
      v341 = v328;
      v342 = v330;
      --v343;
      v328 = (float)v364;
      v365 = (float)((float)(PSEUDO_UNFUSED(v335 * v341)) +
                     (float)(v334 * (float)v364)) +
             (float)(v336 * v329);
      v329 = v341;
      v330 = (float)(v365 + (float)(v337 * v330)) + (float)(v338 * v331);
      v331 = v342;
      v340 = (float)(v340 + fabsf(v327 * v330)) * 0x1.0000000000000p-1f;
    } while (v343 != 0);
    goto LABEL_98;
  }
LABEL_160:
  nn_os_LockMutex_alt1(v6 + 136);
  v572 = *(void (**)(_QWORD))(v6 + 200);
  if (v572 != nullptr) {
    v572(*(_QWORD*)(v6 + 192));
  }
  result = nn_os_UnlockMutex_alt1(v6 + 136);
  if (v21 >= 1) {
    v573 = a3[3];
    if (v573 >= 1) {
      LODWORD(v574) = *a3;
      if (v21 == 1) {
        v575 = 0;
        v576 = *a3;
        v577 = *a3;
      }
      else {
        v578 = 1;
        v575 = 0;
        LODWORD(v579) = *a3;
        v576 = *a3;
        v577 = *a3;
        do {
          if (v573 >= 1) {
            if (v576 < 1) {
              v577 = v576;
            }
            else {
              v580 = 0;
              v581 = a2 + 4LL * (int)(v577 * v573 * v575);
              do {
                if ((int)v579 >= 1) {
                  v582 = 0;
                  v583 = v581 + 4LL * (int)v579 * v580;
                  do {
                    *(_DWORD*)(v583 + 4 * v582++) = 0;
                    v579 = (int)*a3;
                  } while (v582 < v579);
                  v573 = a3[3];
                }
                ++v580;
                v576 = v579;
                v577 = v579;
              } while (v580 < v573);
            }
          }
          if (v573 < 1) {
            LODWORD(v574) = v579;
          }
          else if (v576 < 1) {
            LODWORD(v574) = v579;
            v577 = v576;
          }
          else {
            v584 = 0;
            v585 = a2 + 4LL * (int)(v577 * v573 * v578);
            LODWORD(v574) = v579;
            do {
              if ((int)v574 >= 1) {
                v586 = 0;
                v587 = v585 + 4LL * (int)v574 * v584;
                do {
                  *(_DWORD*)(v587 + 4 * v586++) = 0;
                  v574 = (int)*a3;
                } while (v586 < v574);
                v573 = a3[3];
              }
              ++v584;
              v576 = v574;
              v577 = v574;
            } while (v584 < v573);
          }
          v575 += 2;
          v578 += 2;
          LODWORD(v579) = v574;
        } while (v575 != (v21 & 0x7FFFFFFE));
      }
      if ((v21 & 1) != 0 && v573 >= 1 && v576 >= 1) {
        v588 = 0;
        v589 = a2 + 4LL * (int)(v577 * v575 * v573);
        do {
          if ((int)v574 >= 1) {
            v590 = 0;
            v591 = v589 + 4LL * (int)v574 * v588;
            do {
              *(_DWORD*)(v591 + 4 * v590++) = 0;
              v574 = (int)*a3;
            } while (v590 < v574);
            v573 = a3[3];
          }
          ++v588;
        } while (v588 < v573);
      }
    }
  }
  return result;
}

__int64 FxVib_172c30(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  void (***v9)(_QWORD);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 vars10;
  __int64 _18;

  v2 = GameData_21347b8[0];
  a1[2] = 0;
  a1[3] = 0;
  *a1 = v2 + 16;
  a1[1] = 0;
  v3 = snd_g_memory_ptr[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v9 = (void (***)(_QWORD))a1[3];
  a1[3] = v8;
  if (v9 != nullptr) {
    (**v9)(v9);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  vars10 = _18;
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v10 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  *(_DWORD*)(a1[1] + 204LL) = 1065353216;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v11 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  *(_DWORD*)(a1[2] + 204LL) = 1065353216;
  *(_WORD*)(*(_QWORD*)(a1[3] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 192LL) + 8LL) = -17536;
  v12 = *(_QWORD*)(a1[3] + 8LL * *(unsigned int*)(a1[3] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  *(_DWORD*)(a1[3] + 204LL) = 1065353216;
  return result;
}

#pragma GCC visibility pop
