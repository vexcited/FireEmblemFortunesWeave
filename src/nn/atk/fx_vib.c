#include "decomp/pseudo_helpers.h"

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
void FxVib_Unknown5(__int64 a1, __int64 a2, unsigned int* a3);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_21347b8[4];
__int64 FxVib_172c30(_QWORD* a1);

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

void FxVib_Unknown5(__int64 a1, __int64 a2, unsigned int* a3)
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _DWORD* v56;
  _DWORD* v57;
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
  __int64 v73;
  int* v74;
  int v75;
  int v76;
  float v77;
  float v78;
  float v79;
  float* v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  __int64 v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  _DWORD* v109;
  _DWORD* v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  __int64 v126;
  int* v127;
  int v128;
  int v129;
  float v130;
  float v131;
  float v132;
  float* v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  __int64 v153;
  float v154;
  float v155;
  float v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  _DWORD* v162;
  _DWORD* v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  __int64 v179;
  int* v180;
  int v181;
  int v182;
  float v183;
  float v184;
  float v185;
  __int64 v186;
  float* v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float* v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  unsigned int v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  __int64 v206;
  float v207;
  float v208;
  float v209;
  __int64 v210;
  float v211;
  __int64 v212;
  __int64 v213;
  _DWORD* v214;
  _DWORD* v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  int v226;
  int v227;
  int v228;
  float v229;
  float v230;
  float v231;
  int v232;
  int v233;
  float v234;
  __int64 v235;
  int* v236;
  int* v237;
  int v238;
  int v239;
  int v240;
  float v241;
  float v242;
  float v243;
  float* v244;
  float v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  unsigned int v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float v262;
  __int64 v263;
  float v264;
  float v265;
  float v266;
  __int64 v267;
  float v268;
  __int64 v269;
  __int64 v270;
  _DWORD* v271;
  _DWORD* v272;
  float v273;
  float v274;
  float v275;
  float v276;
  float v277;
  float v278;
  float v279;
  float v280;
  float v281;
  float v282;
  int v283;
  int v284;
  int v285;
  float v286;
  float v287;
  float v288;
  int v289;
  int v290;
  float v291;
  __int64 v292;
  int* v293;
  int* v294;
  int v295;
  int v296;
  int v297;
  float v298;
  float v299;
  float v300;
  float* v301;
  float v302;
  float v303;
  float v304;
  float v305;
  float v306;
  float* v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  unsigned int v314;
  float v315;
  float v316;
  float v317;
  float v318;
  float v319;
  __int64 v320;
  float v321;
  float v322;
  float v323;
  __int64 v324;
  float v325;
  __int64 v326;
  __int64 v327;
  _DWORD* v328;
  _DWORD* v329;
  float v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  int v340;
  int v341;
  int v342;
  float v343;
  float v344;
  float v345;
  int v346;
  int v347;
  float v348;
  __int64 v349;
  int* v350;
  int* v351;
  int v352;
  int v353;
  int v354;
  float v355;
  float v356;
  float v357;
  __int64 v358;
  int v359;
  __int64 v360;
  int v361;
  float* v362;
  float v363;
  float v364;
  float v365;
  float v366;
  float v367;
  float* v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  unsigned int v375;
  float v376;
  float v377;
  float v378;
  float v379;
  float v380;
  __int64 v381;
  float v382;
  float v383;
  float v384;
  __int64 v385;
  float v386;
  __int64 v387;
  int* v388;
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
  float v401;
  int v402;
  int v403;
  float v404;
  int* v405;
  int v406;
  float v407;
  float v408;
  float* v409;
  float v410;
  float v411;
  float v412;
  float v413;
  float v414;
  float* v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  unsigned int v422;
  float v423;
  float v424;
  float v425;
  float v426;
  float v427;
  __int64 v428;
  float v429;
  float v430;
  float v431;
  __int64 v432;
  float v433;
  __int64 v434;
  int* v435;
  float v436;
  float v437;
  float v438;
  float v439;
  float v440;
  float v441;
  float v442;
  float v443;
  float v444;
  float v445;
  float v446;
  float v447;
  float v448;
  int v449;
  int v450;
  float v451;
  int* v452;
  int v453;
  float v454;
  float v455;
  float* v456;
  float v457;
  float v458;
  float v459;
  float v460;
  float v461;
  float* v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  unsigned int v469;
  float v470;
  float v471;
  float v472;
  float v473;
  float v474;
  __int64 v475;
  float v476;
  float v477;
  float v478;
  __int64 v479;
  float v480;
  __int64 v481;
  int* v482;
  float v483;
  float v484;
  float v485;
  float v486;
  float v487;
  float v488;
  float v489;
  float v490;
  float v491;
  float v492;
  float v493;
  float v494;
  float v495;
  int v496;
  int v497;
  float v498;
  int* v499;
  int v500;
  float v501;
  float v502;
  float* v503;
  float v504;
  float v505;
  float v506;
  float v507;
  float v508;
  float* v509;
  __int64 v510;
  __int64 v511;
  __int64 v512;
  __int64 v513;
  __int64 v514;
  __int64 v515;
  unsigned int v516;
  float v517;
  float v518;
  float v519;
  float v520;
  float v521;
  __int64 v522;
  float v523;
  float v524;
  float v525;
  __int64 v526;
  float v527;
  __int64 v528;
  int* v529;
  float v530;
  float v531;
  float v532;
  float v533;
  float v534;
  float v535;
  float v536;
  float v537;
  float v538;
  float v539;
  float v540;
  float v541;
  float v542;
  int v543;
  int v544;
  float v545;
  int* v546;
  int v547;
  float v548;
  float v549;
  float* v550;
  float v551;
  float v552;
  float v553;
  float v554;
  float v555;
  float* v556;
  __int64 v557;
  __int64 v558;
  __int64 v559;
  __int64 v560;
  __int64 v561;
  __int64 v562;
  unsigned int v563;
  float v564;
  float v565;
  float v566;
  float v567;
  float v568;
  __int64 v569;
  float v570;
  float v571;
  float v572;
  __int64 v573;
  float v574;
  __int64 v575;
  int* v576;
  float v577;
  float v578;
  float v579;
  float v580;
  float v581;
  float v582;
  float v583;
  float v584;
  float v585;
  float v586;
  float v587;
  float v588;
  float v589;
  int v590;
  int v591;
  float v592;
  int* v593;
  int v594;
  float v595;
  float v596;
  float* v597;
  float v598;
  float v599;
  float v600;
  float v601;
  float v602;
  float* v603;
  __int64 v604;
  __int64 v605;
  __int64 v606;
  __int64 v607;
  __int64 v608;
  __int64 v609;
  unsigned int v610;
  float v611;
  float v612;
  float v613;
  float v614;
  float v615;
  __int64 v616;
  float v617;
  float v618;
  float v619;
  __int64 v620;
  float v621;
  __int64 v622;
  int* v623;
  float v624;
  float v625;
  float v626;
  float v627;
  float v628;
  float v629;
  float v630;
  float v631;
  float v632;
  float v633;
  float v634;
  float v635;
  float v636;
  int v637;
  int v638;
  float v639;
  int* v640;
  int v641;
  float v642;
  float v643;
  void (*v644)(_QWORD);
  int v645;
  __int64 v646;
  int v647;
  int v648;
  unsigned int v649;
  int v650;
  __int64 v651;
  int v652;
  __int64 v653;
  __int64 v654;
  __int64 v655;
  int v656;
  __int64 v657;
  __int64 v658;
  __int64 v659;
  int v660;
  __int64 v661;
  __int64 v662;
  __int64 v663;
  __int64 v664;
  int v665;

  if ((int)a3[3] < 2) {
    return;
  }
  v4 = *(float*)(a1 + 112);
  v3 = *(float*)(a1 + 116);
  v6 = a1;
  v7 = (float)(v3 - v4) * 0.5f;
  v8 = v4 + v7;
  v9 = *(_QWORD*)(a1 + 104);
  if (fabsf(v7) >= 0.1f) {
    v3 = v8;
  }
  *(float*)(a1 + 112) = v3;
  v11 = *(float*)(a1 + 120);
  v10 = *(float*)(a1 + 124);
  v12 = (float)(v10 - v11) * 0.5f;
  v13 = v11 + v12;
  if (fabsf(v12) >= 0.1f) {
    v10 = v13;
  }
  *(float*)(a1 + 120) = v10;
  v15 = *(float*)(a1 + 128);
  v14 = *(float*)(a1 + 132);
  v16 = (float)(v14 - v15) * 0.5f;
  v17 = v15 + v16;
  if (fabsf(v16) >= 0.1f) {
    v14 = v17;
  }
  *(float*)(a1 + 128) = v14;
  *(float*)(*(_QWORD*)(v9 + 8) + 204LL) = v14;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL) + 204LL) =
      *(_DWORD*)(a1 + 120);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL) + 204LL) =
      *(_DWORD*)(a1 + 112);
  v18 = a3[3];
  v19 = a3[4];
  v20 = v18 * *a3;
  v21 = v19 / v20;
  if (v19 % v20 != 0) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  LABEL_198:
    nn_diag_detail_AbortImpl_1a0a590(a1);
    __udf(0);
  }
  if (v21 > (int)a3[2]) {
    goto LABEL_198;
  }
  v665 = v19 / v20;
  if ((v18 | 2) == 6) {
    if (v21 >= 1) {
      v23 = 0;
      v664 = a2 + 16;
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
        nn_os_LockMutex(v6 + 136);
        v33 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        nn_os_UnlockMutex(v6 + 136);
        v40 = *a3;
        if ((int)v40 < 1) {
          v48 = v30;
          v49 = v32;
          v50 = 0.0f;
        }
        else {
          v41 = v33[4];
          v42 = v33[5];
          v43 = v33[6];
          v44 = -v33[2];
          v45 = -v33[3];
          if ((unsigned int)v40 >= 8) {
            v46 = 0.0f;
            v51 = 0;
            v47 = 0;
            v52 = 4LL * v25 * (int)v24 * v23;
            v53 = v52 + 4 * v26;
            v54 = a2 + v52;
            v55 = a2 + v53;
            do {
              v56 = (_DWORD*)(v54 + v51);
              v57 = (_DWORD*)(v55 + v51);
              v47 += 8;
              v51 += 32;
              v58 = (float)(*v57 + *v56);
              v59 = (float)((float)((float)((float)(v42 * v29) +
                                            (float)(v41 * v58)) +
                                    (float)(v43 * v30)) +
                            (float)(v44 * v31)) +
                    (float)(v45 * v32);
              v60 = v46 + fabsf(v28 * v59);
              v61 = (float)(v57[1] + v56[1]);
              v62 = (float)(v57[2] + v56[2]);
              v34 = (unsigned int)v57[5];
              v63 = (float)((float)((float)((float)(v42 * v58) +
                                            (float)(v41 * v61)) +
                                    (float)(v43 * v29)) +
                            (float)(v44 * v59)) +
                    (float)(v45 * v31);
              v64 = (float)((float)((float)((float)(v42 * v61) +
                                            (float)(v41 * v62)) +
                                    (float)(v43 * v58)) +
                            (float)(v44 * v63)) +
                    (float)(v45 * v59);
              v65 = (float)(v57[3] + v56[3]);
              v66 = (float)((float)((float)(v60 * 0.5f) + fabsf(v28 * v63)) *
                            0.5f) +
                    fabsf(v28 * v64);
              v67 = (float)(v57[4] + v56[4]);
              v68 = (float)((float)((float)((float)(v42 * v62) +
                                            (float)(v41 * v65)) +
                                    (float)(v43 * v61)) +
                            (float)(v44 * v64)) +
                    (float)(v45 * v63);
              v69 = (float)((float)((float)((float)(v42 * v65) +
                                            (float)(v41 * v67)) +
                                    (float)(v43 * v62)) +
                            (float)(v44 * v68)) +
                    (float)(v45 * v64);
              v70 = (float)((float)((float)(v66 * 0.5f) + fabsf(v28 * v68)) *
                            0.5f) +
                    fabsf(v28 * v69);
              v71 = (float)(v34 + v56[5]);
              v30 = (float)(v57[6] + v56[6]);
              v29 = (float)(v57[7] + v56[7]);
              v72 = (float)((float)((float)((float)(v42 * v67) +
                                            (float)(v41 * v71)) +
                                    (float)(v43 * v65)) +
                            (float)(v44 * v69)) +
                    (float)(v45 * v68);
              v32 = (float)((float)((float)((float)(v42 * v71) +
                                            (float)(v41 * v30)) +
                                    (float)(v43 * v67)) +
                            (float)(v44 * v72)) +
                    (float)(v45 * v69);
              v31 = (float)((float)((float)((float)(v42 * v30) +
                                            (float)(v41 * v29)) +
                                    (float)(v43 * v71)) +
                            (float)(v44 * v32)) +
                    (float)(v45 * v72);
              v46 =
                  (float)((float)((float)((float)((float)((float)(v70 * 0.5f) +
                                                          fabsf(v28 * v72)) *
                                                  0.5f) +
                                          fabsf(v28 * v32)) *
                                  0.5f) +
                          fabsf(v28 * v31)) *
                  0.5f;
            } while (((4 * v40) & 0x1FFFFFFE0LL) != v51);
          }
          else {
            v46 = 0.0f;
            v47 = 0;
          }
          v48 = v30;
          v49 = v32;
          v73 = v40 & 7;
          if (v73 != 0) {
            v74 = (int*)(a2 + 4 * v47 + 4LL * v25 * (int)v24 * v23);
            do {
              v75 = *v74;
              v76 = v74[v26];
              v48 = v29;
              v49 = v31;
              ++v74;
              --v73;
              v77 = v42 * v29;
              v29 = (float)(v76 + v75);
              v78 = (float)(v77 + (float)(v41 * v29)) + (float)(v43 * v30);
              v30 = v48;
              v31 = (float)(v78 + (float)(v44 * v31)) + (float)(v45 * v32);
              v32 = v49;
              v46 = (float)(v46 + fabsf(v28 * v31)) * 0.5f;
            } while (v73 != 0);
          }
          v50 = 0.0f;
          v79 = vcvts_n_f32_s32((int)v46, 0xFu);
          if (v79 != 0.0f) {
            v50 = (float)(int)(float)(log10f(v34, v35, v36, v37, v38, v39,
                                             fabsf(v79)) *
                                      20.0f) +
                  100.0f;
          }
        }
        *(float*)(v6 + 168) =
            (float)(*(float*)(v6 + 168) +
                    (float)((float)(v50 / 100.0f) *
                            (float)((float)(v50 / 100.0f) *
                                    (float)((float)(v50 / 100.0f) *
                                            (float)(v50 / 100.0f))))) *
            0.5f;
        v27[7] = v29;
        v27[8] = v48;
        v27[9] = v31;
        v27[10] = v49;
        v80 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        v81 = v80[51];
        v82 = v80[7];
        v83 = v80[8];
        v84 = v80[9];
        v85 = v80[10];
        nn_os_LockMutex(v6 + 136);
        v86 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        nn_os_UnlockMutex(v6 + 136);
        v93 = *a3;
        if ((int)v93 < 1) {
          v101 = v83;
          v102 = v85;
          v103 = 0.0f;
        }
        else {
          v94 = v86[4];
          v95 = v86[5];
          v96 = v86[6];
          v97 = -v86[2];
          v98 = -v86[3];
          if ((unsigned int)v93 >= 8) {
            v99 = 0.0f;
            v104 = 0;
            v100 = 0;
            v105 = 4LL * v25 * (int)v24 * v23;
            v106 = v105 + 4 * v26;
            v107 = a2 + v105;
            v108 = a2 + v106;
            do {
              v109 = (_DWORD*)(v107 + v104);
              v110 = (_DWORD*)(v108 + v104);
              v100 += 8;
              v104 += 32;
              v111 = (float)(*v110 + *v109);
              v112 = (float)((float)((float)((float)(v95 * v82) +
                                             (float)(v94 * v111)) +
                                     (float)(v96 * v83)) +
                             (float)(v97 * v84)) +
                     (float)(v98 * v85);
              v113 = v99 + fabsf(v81 * v112);
              v114 = (float)(v110[1] + v109[1]);
              v115 = (float)(v110[2] + v109[2]);
              v87 = (unsigned int)v110[5];
              v116 = (float)((float)((float)((float)(v95 * v111) +
                                             (float)(v94 * v114)) +
                                     (float)(v96 * v82)) +
                             (float)(v97 * v112)) +
                     (float)(v98 * v84);
              v117 = (float)((float)((float)((float)(v95 * v114) +
                                             (float)(v94 * v115)) +
                                     (float)(v96 * v111)) +
                             (float)(v97 * v116)) +
                     (float)(v98 * v112);
              v118 = (float)(v110[3] + v109[3]);
              v119 = (float)((float)((float)(v113 * 0.5f) + fabsf(v81 * v116)) *
                             0.5f) +
                     fabsf(v81 * v117);
              v120 = (float)(v110[4] + v109[4]);
              v121 = (float)((float)((float)((float)(v95 * v115) +
                                             (float)(v94 * v118)) +
                                     (float)(v96 * v114)) +
                             (float)(v97 * v117)) +
                     (float)(v98 * v116);
              v122 = (float)((float)((float)((float)(v95 * v118) +
                                             (float)(v94 * v120)) +
                                     (float)(v96 * v115)) +
                             (float)(v97 * v121)) +
                     (float)(v98 * v117);
              v123 = (float)((float)((float)(v119 * 0.5f) + fabsf(v81 * v121)) *
                             0.5f) +
                     fabsf(v81 * v122);
              v124 = (float)(v87 + v109[5]);
              v83 = (float)(v110[6] + v109[6]);
              v82 = (float)(v110[7] + v109[7]);
              v125 = (float)((float)((float)((float)(v95 * v120) +
                                             (float)(v94 * v124)) +
                                     (float)(v96 * v118)) +
                             (float)(v97 * v122)) +
                     (float)(v98 * v121);
              v85 = (float)((float)((float)((float)(v95 * v124) +
                                            (float)(v94 * v83)) +
                                    (float)(v96 * v120)) +
                            (float)(v97 * v125)) +
                    (float)(v98 * v122);
              v84 = (float)((float)((float)((float)(v95 * v83) +
                                            (float)(v94 * v82)) +
                                    (float)(v96 * v124)) +
                            (float)(v97 * v85)) +
                    (float)(v98 * v125);
              v99 =
                  (float)((float)((float)((float)((float)((float)(v123 * 0.5f) +
                                                          fabsf(v81 * v125)) *
                                                  0.5f) +
                                          fabsf(v81 * v85)) *
                                  0.5f) +
                          fabsf(v81 * v84)) *
                  0.5f;
            } while (((4 * v93) & 0x1FFFFFFE0LL) != v104);
          }
          else {
            v99 = 0.0f;
            v100 = 0;
          }
          v101 = v83;
          v102 = v85;
          v126 = v93 & 7;
          if (v126 != 0) {
            v127 = (int*)(a2 + 4 * v100 + 4LL * v25 * (int)v24 * v23);
            do {
              v128 = *v127;
              v129 = v127[v26];
              v101 = v82;
              v102 = v84;
              ++v127;
              --v126;
              v130 = v95 * v82;
              v82 = (float)(v129 + v128);
              v131 = (float)(v130 + (float)(v94 * v82)) + (float)(v96 * v83);
              v83 = v101;
              v84 = (float)(v131 + (float)(v97 * v84)) + (float)(v98 * v85);
              v85 = v102;
              v99 = (float)(v99 + fabsf(v81 * v84)) * 0.5f;
            } while (v126 != 0);
          }
          v103 = 0.0f;
          v132 = vcvts_n_f32_s32((int)v99, 0xFu);
          if (v132 != 0.0f) {
            v103 = (float)(int)(float)(log10f(v87, v88, v89, v90, v91, v92,
                                              fabsf(v132)) *
                                       20.0f) +
                   100.0f;
          }
        }
        *(float*)(v6 + 172) =
            (float)(*(float*)(v6 + 172) +
                    (float)((float)(v103 / 100.0f) *
                            (float)((float)(v103 / 100.0f) *
                                    (float)(v103 / 100.0f)))) *
            0.5f;
        v80[7] = v82;
        v80[8] = v101;
        v80[9] = v84;
        v80[10] = v102;
        v133 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        v134 = v133[51];
        v135 = v133[7];
        v136 = v133[8];
        v137 = v133[9];
        v138 = v133[10];
        nn_os_LockMutex(v6 + 136);
        v139 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        nn_os_UnlockMutex(v6 + 136);
        v146 = *a3;
        if ((int)v146 < 1) {
          v154 = v136;
          v155 = v138;
          v156 = 0.0f;
        }
        else {
          v147 = v139[4];
          v148 = v139[5];
          v149 = v139[6];
          v150 = -v139[2];
          v151 = -v139[3];
          if ((unsigned int)v146 >= 8) {
            v152 = 0.0f;
            v157 = 0;
            v153 = 0;
            v158 = 4LL * v25 * (int)v24 * v23;
            v159 = v158 + 4 * v26;
            v160 = a2 + v158;
            v161 = a2 + v159;
            do {
              v162 = (_DWORD*)(v160 + v157);
              v163 = (_DWORD*)(v161 + v157);
              v153 += 8;
              v157 += 32;
              v164 = (float)(*v163 + *v162);
              v165 = (float)((float)((float)((float)(v148 * v135) +
                                             (float)(v147 * v164)) +
                                     (float)(v149 * v136)) +
                             (float)(v150 * v137)) +
                     (float)(v151 * v138);
              v166 = v152 + fabsf(v134 * v165);
              v167 = (float)(v163[1] + v162[1]);
              v168 = (float)(v163[2] + v162[2]);
              v140 = (unsigned int)v163[5];
              v169 = (float)((float)((float)((float)(v148 * v164) +
                                             (float)(v147 * v167)) +
                                     (float)(v149 * v135)) +
                             (float)(v150 * v165)) +
                     (float)(v151 * v137);
              v170 = (float)((float)((float)((float)(v148 * v167) +
                                             (float)(v147 * v168)) +
                                     (float)(v149 * v164)) +
                             (float)(v150 * v169)) +
                     (float)(v151 * v165);
              v171 = (float)(v163[3] + v162[3]);
              v172 =
                  (float)((float)((float)(v166 * 0.5f) + fabsf(v134 * v169)) *
                          0.5f) +
                  fabsf(v134 * v170);
              v173 = (float)(v163[4] + v162[4]);
              v174 = (float)((float)((float)((float)(v148 * v168) +
                                             (float)(v147 * v171)) +
                                     (float)(v149 * v167)) +
                             (float)(v150 * v170)) +
                     (float)(v151 * v169);
              v175 = (float)((float)((float)((float)(v148 * v171) +
                                             (float)(v147 * v173)) +
                                     (float)(v149 * v168)) +
                             (float)(v150 * v174)) +
                     (float)(v151 * v170);
              v176 =
                  (float)((float)((float)(v172 * 0.5f) + fabsf(v134 * v174)) *
                          0.5f) +
                  fabsf(v134 * v175);
              v177 = (float)(v140 + v162[5]);
              v136 = (float)(v163[6] + v162[6]);
              v135 = (float)(v163[7] + v162[7]);
              v178 = (float)((float)((float)((float)(v148 * v173) +
                                             (float)(v147 * v177)) +
                                     (float)(v149 * v171)) +
                             (float)(v150 * v175)) +
                     (float)(v151 * v174);
              v138 = (float)((float)((float)((float)(v148 * v177) +
                                             (float)(v147 * v136)) +
                                     (float)(v149 * v173)) +
                             (float)(v150 * v178)) +
                     (float)(v151 * v175);
              v137 = (float)((float)((float)((float)(v148 * v136) +
                                             (float)(v147 * v135)) +
                                     (float)(v149 * v177)) +
                             (float)(v150 * v138)) +
                     (float)(v151 * v178);
              v152 =
                  (float)((float)((float)((float)((float)((float)(v176 * 0.5f) +
                                                          fabsf(v134 * v178)) *
                                                  0.5f) +
                                          fabsf(v134 * v138)) *
                                  0.5f) +
                          fabsf(v134 * v137)) *
                  0.5f;
            } while (((4 * v146) & 0x1FFFFFFE0LL) != v157);
          }
          else {
            v152 = 0.0f;
            v153 = 0;
          }
          v154 = v136;
          v155 = v138;
          v179 = v146 & 7;
          if (v179 != 0) {
            v180 = (int*)(a2 + 4 * v153 + 4LL * v25 * (int)v24 * v23);
            do {
              v181 = *v180;
              v182 = v180[v26];
              v154 = v135;
              v155 = v137;
              ++v180;
              --v179;
              v183 = v148 * v135;
              v135 = (float)(v182 + v181);
              v184 =
                  (float)(v183 + (float)(v147 * v135)) + (float)(v149 * v136);
              v136 = v154;
              v137 =
                  (float)(v184 + (float)(v150 * v137)) + (float)(v151 * v138);
              v138 = v155;
              v152 = (float)(v152 + fabsf(v134 * v137)) * 0.5f;
            } while (v179 != 0);
          }
          v156 = 0.0f;
          v185 = vcvts_n_f32_s32((int)v152, 0xFu);
          if (v185 != 0.0f) {
            v156 = (float)(int)(float)(log10f(v140, v141, v142, v143, v144,
                                              v145, fabsf(v185)) *
                                       20.0f) +
                   100.0f;
          }
        }
        v186 = 3 * (int)v24;
        *(float*)(v6 + 176) =
            (float)(*(float*)(v6 + 176) +
                    (float)((float)(v156 / 100.0f) *
                            (float)((float)(v156 / 100.0f) *
                                    (float)(v156 / 100.0f)))) *
            0.5f;
        v133[7] = v135;
        v133[8] = v154;
        v133[9] = v137;
        v133[10] = v155;
        v187 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        v188 = v187[51];
        v189 = v187[11];
        v190 = v187[12];
        v191 = v187[13];
        v192 = v187[14];
        nn_os_LockMutex(v6 + 136);
        v193 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
        nn_os_UnlockMutex(v6 + 136);
        v200 = *a3;
        if ((int)*a3 < 1) {
          v208 = v190;
          v209 = v192;
          v211 = 0.0f;
          goto LABEL_60;
        }
        v201 = v193[4];
        v202 = v193[5];
        v203 = v193[6];
        v204 = -v193[2];
        v205 = -v193[3];
        if (v200 < 8) {
          break;
        }
        v207 = 0.0f;
        v212 = 0;
        v213 = 4LL * v25 * (int)v24 * v23;
        v214 = (_DWORD*)(v664 + v213 + 4 * v186);
        v215 = (_DWORD*)(v664 + v213 + 4 * v24);
        do {
          v212 -= 8;
          v216 = (float)(*(v214 - 4) + *(v215 - 4));
          v217 = (float)((float)((float)((float)(v202 * v189) +
                                         (float)(v201 * v216)) +
                                 (float)(v203 * v190)) +
                         (float)(v204 * v191)) +
                 (float)(v205 * v192);
          v218 = (float)(*(v214 - 3) + *(v215 - 3));
          v219 = (float)((float)((float)((float)(v202 * v216) +
                                         (float)(v201 * v218)) +
                                 (float)(v203 * v189)) +
                         (float)(v204 * v217)) +
                 (float)(v205 * v191);
          v220 = (float)(*(v214 - 2) + *(v215 - 2));
          v221 = (float)((float)((float)((float)(v202 * v218) +
                                         (float)(v201 * v220)) +
                                 (float)(v203 * v216)) +
                         (float)(v204 * v219)) +
                 (float)(v205 * v217);
          v222 = (float)((float)((float)((float)(v207 + fabsf(v188 * v217)) *
                                         0.5f) +
                                 fabsf(v188 * v219)) *
                         0.5f) +
                 fabsf(v188 * v221);
          v223 = (float)(*(v214 - 1) + *(v215 - 1));
          v224 = (float)((float)((float)((float)(v202 * v220) +
                                         (float)(v201 * v223)) +
                                 (float)(v203 * v218)) +
                         (float)(v204 * v221)) +
                 (float)(v205 * v219);
          v225 = (float)(*v214 + *v215);
          v226 = v214[1] + v215[1];
          v227 = v214[2];
          v228 = v214[3];
          v214 += 8;
          v229 = (float)((float)((float)((float)(v202 * v223) +
                                         (float)(v201 * v225)) +
                                 (float)(v203 * v220)) +
                         (float)(v204 * v224)) +
                 (float)(v205 * v221);
          v230 = (float)(v222 * 0.5f) + fabsf(v188 * v224);
          v231 = (float)v226;
          v232 = v215[2];
          v233 = v215[3];
          v215 += 8;
          v190 = (float)(v227 + v232);
          v189 = (float)(v228 + v233);
          v234 = (float)((float)((float)((float)(v202 * v225) +
                                         (float)(v201 * v231)) +
                                 (float)(v203 * v223)) +
                         (float)(v204 * v229)) +
                 (float)(v205 * v224);
          v192 = (float)((float)((float)((float)(v202 * v231) +
                                         (float)(v201 * v190)) +
                                 (float)(v203 * v225)) +
                         (float)(v204 * v234)) +
                 (float)(v205 * v229);
          v191 = (float)((float)((float)((float)(v202 * v190) +
                                         (float)(v201 * v189)) +
                                 (float)(v203 * v231)) +
                         (float)(v204 * v192)) +
                 (float)(v205 * v234);
          v207 =
              (float)((float)((float)((float)((float)((float)((float)((float)(v230 *
                                                                              0.5f) +
                                                                      fabsf(
                                                                          v188 *
                                                                          v229)) *
                                                              0.5f) +
                                                      fabsf(v188 * v234)) *
                                              0.5f) +
                                      fabsf(v188 * v192)) *
                              0.5f) +
                      fabsf(v188 * v191)) *
              0.5f;
        } while (-(__int64)(v200 & 0x7FFFFFF8) != v212);
        v206 = -v212;
        v208 = (float)(v227 + v232);
        v209 = v192;
        v210 = v200 & 7;
        if (v210 != 0) {
          goto LABEL_56;
        }
      LABEL_58:
        v211 = 0.0f;
        v243 = vcvts_n_f32_s32((int)v207, 0xFu);
        if (v243 != 0.0f) {
          v211 = (float)(int)(float)(log10f(v194, v195, v196, v197, v198, v199,
                                            fabsf(v243)) *
                                     20.0f) +
                 100.0f;
        }
      LABEL_60:
        *(float*)(v6 + 180) =
            (float)(*(float*)(v6 + 180) +
                    (float)((float)(v211 / 100.0f) *
                            (float)((float)(v211 / 100.0f) *
                                    (float)((float)(v211 / 100.0f) *
                                            (float)(v211 / 100.0f))))) *
            0.5f;
        v187[11] = v189;
        v187[12] = v208;
        v187[13] = v191;
        v187[14] = v209;
        v244 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        v245 = v244[51];
        v246 = v244[11];
        v247 = v244[12];
        v248 = v244[13];
        v249 = v244[14];
        nn_os_LockMutex(v6 + 136);
        v250 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
        nn_os_UnlockMutex(v6 + 136);
        v257 = *a3;
        if ((int)*a3 < 1) {
          v265 = v247;
          v266 = v249;
          v268 = 0.0f;
          goto LABEL_72;
        }
        v258 = v250[4];
        v259 = v250[5];
        v260 = v250[6];
        v261 = -v250[2];
        v262 = -v250[3];
        if (v257 < 8) {
          v263 = 0;
          v264 = 0.0f;
          v265 = v247;
          v266 = v249;
          v267 = v257 & 7;
          if (v267 == 0) {
            goto LABEL_70;
          }
        LABEL_68:
          v292 = 4 * v263 + 4LL * v25 * (int)v24 * v23;
          v293 = (int*)(a2 + v292 + 4 * v186);
          v294 = (int*)(a2 + v292 + 4 * v24);
          do {
            v296 = *v294++;
            v295 = v296;
            v297 = *v293++;
            v265 = v246;
            v266 = v248;
            --v267;
            v298 = v259 * v246;
            v246 = (float)(v297 + v295);
            v299 = (float)(v298 + (float)(v258 * v246)) + (float)(v260 * v247);
            v247 = v265;
            v248 = (float)(v299 + (float)(v261 * v248)) + (float)(v262 * v249);
            v249 = v266;
            v264 = (float)(v264 + fabsf(v245 * v248)) * 0.5f;
          } while (v267 != 0);
          goto LABEL_70;
        }
        v264 = 0.0f;
        v269 = 0;
        v270 = 4LL * v25 * (int)v24 * v23;
        v271 = (_DWORD*)(v664 + v270 + 4 * v186);
        v272 = (_DWORD*)(v664 + v270 + 4 * v24);
        do {
          v269 -= 8;
          v273 = (float)(*(v271 - 4) + *(v272 - 4));
          v274 = (float)((float)((float)((float)(v259 * v246) +
                                         (float)(v258 * v273)) +
                                 (float)(v260 * v247)) +
                         (float)(v261 * v248)) +
                 (float)(v262 * v249);
          v275 = (float)(*(v271 - 3) + *(v272 - 3));
          v276 = (float)((float)((float)((float)(v259 * v273) +
                                         (float)(v258 * v275)) +
                                 (float)(v260 * v246)) +
                         (float)(v261 * v274)) +
                 (float)(v262 * v248);
          v277 = (float)(*(v271 - 2) + *(v272 - 2));
          v278 = (float)((float)((float)((float)(v259 * v275) +
                                         (float)(v258 * v277)) +
                                 (float)(v260 * v273)) +
                         (float)(v261 * v276)) +
                 (float)(v262 * v274);
          v279 = (float)((float)((float)((float)(v264 + fabsf(v245 * v274)) *
                                         0.5f) +
                                 fabsf(v245 * v276)) *
                         0.5f) +
                 fabsf(v245 * v278);
          v280 = (float)(*(v271 - 1) + *(v272 - 1));
          v281 = (float)((float)((float)((float)(v259 * v277) +
                                         (float)(v258 * v280)) +
                                 (float)(v260 * v275)) +
                         (float)(v261 * v278)) +
                 (float)(v262 * v276);
          v282 = (float)(*v271 + *v272);
          v283 = v271[1] + v272[1];
          v284 = v271[2];
          v285 = v271[3];
          v271 += 8;
          v286 = (float)((float)((float)((float)(v259 * v280) +
                                         (float)(v258 * v282)) +
                                 (float)(v260 * v277)) +
                         (float)(v261 * v281)) +
                 (float)(v262 * v278);
          v287 = (float)(v279 * 0.5f) + fabsf(v245 * v281);
          v288 = (float)v283;
          v289 = v272[2];
          v290 = v272[3];
          v272 += 8;
          v247 = (float)(v284 + v289);
          v246 = (float)(v285 + v290);
          v291 = (float)((float)((float)((float)(v259 * v282) +
                                         (float)(v258 * v288)) +
                                 (float)(v260 * v280)) +
                         (float)(v261 * v286)) +
                 (float)(v262 * v281);
          v249 = (float)((float)((float)((float)(v259 * v288) +
                                         (float)(v258 * v247)) +
                                 (float)(v260 * v282)) +
                         (float)(v261 * v291)) +
                 (float)(v262 * v286);
          v248 = (float)((float)((float)((float)(v259 * v247) +
                                         (float)(v258 * v246)) +
                                 (float)(v260 * v288)) +
                         (float)(v261 * v249)) +
                 (float)(v262 * v291);
          v264 =
              (float)((float)((float)((float)((float)((float)((float)((float)(v287 *
                                                                              0.5f) +
                                                                      fabsf(
                                                                          v245 *
                                                                          v286)) *
                                                              0.5f) +
                                                      fabsf(v245 * v291)) *
                                              0.5f) +
                                      fabsf(v245 * v249)) *
                              0.5f) +
                      fabsf(v245 * v248)) *
              0.5f;
        } while (-(__int64)(v257 & 0x7FFFFFF8) != v269);
        v263 = -v269;
        v265 = (float)(v284 + v289);
        v266 = v249;
        v267 = v257 & 7;
        if (v267 != 0) {
          goto LABEL_68;
        }
      LABEL_70:
        v268 = 0.0f;
        v300 = vcvts_n_f32_s32((int)v264, 0xFu);
        if (v300 != 0.0f) {
          v268 = (float)(int)(float)(log10f(v251, v252, v253, v254, v255, v256,
                                            fabsf(v300)) *
                                     20.0f) +
                 100.0f;
        }
      LABEL_72:
        *(float*)(v6 + 184) =
            (float)(*(float*)(v6 + 184) +
                    (float)((float)(v268 / 100.0f) *
                            (float)((float)(v268 / 100.0f) *
                                    (float)(v268 / 100.0f)))) *
            0.5f;
        v244[11] = v246;
        v244[12] = v265;
        v244[13] = v248;
        v244[14] = v266;
        v301 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        v302 = v301[51];
        v303 = v301[11];
        v304 = v301[12];
        v305 = v301[13];
        v306 = v301[14];
        nn_os_LockMutex(v6 + 136);
        v307 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
        nn_os_UnlockMutex(v6 + 136);
        v314 = *a3;
        if ((int)*a3 >= 1) {
          v315 = v307[4];
          v316 = v307[5];
          v317 = v307[6];
          v318 = -v307[2];
          v319 = -v307[3];
          if (v314 >= 8) {
            v321 = 0.0f;
            v326 = 0;
            v327 = 4LL * v25 * (int)v24 * v23;
            v328 = (_DWORD*)(v664 + v327 + 4 * v186);
            v329 = (_DWORD*)(v664 + v327 + 4 * v24);
            do {
              v326 -= 8;
              v330 = (float)(*(v328 - 4) + *(v329 - 4));
              v331 = (float)((float)((float)((float)(v316 * v303) +
                                             (float)(v315 * v330)) +
                                     (float)(v317 * v304)) +
                             (float)(v318 * v305)) +
                     (float)(v319 * v306);
              v332 = (float)(*(v328 - 3) + *(v329 - 3));
              v333 = (float)((float)((float)((float)(v316 * v330) +
                                             (float)(v315 * v332)) +
                                     (float)(v317 * v303)) +
                             (float)(v318 * v331)) +
                     (float)(v319 * v305);
              v334 = (float)(*(v328 - 2) + *(v329 - 2));
              v335 = (float)((float)((float)((float)(v316 * v332) +
                                             (float)(v315 * v334)) +
                                     (float)(v317 * v330)) +
                             (float)(v318 * v333)) +
                     (float)(v319 * v331);
              v336 =
                  (float)((float)((float)((float)(v321 + fabsf(v302 * v331)) *
                                          0.5f) +
                                  fabsf(v302 * v333)) *
                          0.5f) +
                  fabsf(v302 * v335);
              v337 = (float)(*(v328 - 1) + *(v329 - 1));
              v338 = (float)((float)((float)((float)(v316 * v334) +
                                             (float)(v315 * v337)) +
                                     (float)(v317 * v332)) +
                             (float)(v318 * v335)) +
                     (float)(v319 * v333);
              v339 = (float)(*v328 + *v329);
              v340 = v328[1] + v329[1];
              v341 = v328[2];
              v342 = v328[3];
              v328 += 8;
              v343 = (float)((float)((float)((float)(v316 * v337) +
                                             (float)(v315 * v339)) +
                                     (float)(v317 * v334)) +
                             (float)(v318 * v338)) +
                     (float)(v319 * v335);
              v344 = (float)(v336 * 0.5f) + fabsf(v302 * v338);
              v345 = (float)v340;
              v346 = v329[2];
              v347 = v329[3];
              v329 += 8;
              v304 = (float)(v341 + v346);
              v303 = (float)(v342 + v347);
              v348 = (float)((float)((float)((float)(v316 * v339) +
                                             (float)(v315 * v345)) +
                                     (float)(v317 * v337)) +
                             (float)(v318 * v343)) +
                     (float)(v319 * v338);
              v306 = (float)((float)((float)((float)(v316 * v345) +
                                             (float)(v315 * v304)) +
                                     (float)(v317 * v339)) +
                             (float)(v318 * v348)) +
                     (float)(v319 * v343);
              v305 = (float)((float)((float)((float)(v316 * v304) +
                                             (float)(v315 * v303)) +
                                     (float)(v317 * v345)) +
                             (float)(v318 * v306)) +
                     (float)(v319 * v348);
              v321 =
                  (float)((float)((float)((float)((float)((float)((float)((float)(v344 *
                                                                                  0.5f) +
                                                                          fabsf(
                                                                              v302 *
                                                                              v343)) *
                                                                  0.5f) +
                                                          fabsf(v302 * v348)) *
                                                  0.5f) +
                                          fabsf(v302 * v306)) *
                                  0.5f) +
                          fabsf(v302 * v305)) *
                  0.5f;
            } while (-(__int64)(v314 & 0x7FFFFFF8) != v326);
            v320 = -v326;
            v322 = (float)(v341 + v346);
            v323 = v306;
            v324 = v314 & 7;
            if (v324 == 0) {
              goto LABEL_82;
            }
          }
          else {
            v320 = 0;
            v321 = 0.0f;
            v322 = v304;
            v323 = v306;
            v324 = v314 & 7;
            if (v324 == 0) {
            LABEL_82:
              v325 = 0.0f;
              v357 = vcvts_n_f32_s32((int)v321, 0xFu);
              if (v357 != 0.0f) {
                v325 = (float)(int)(float)(log10f(v308, v309, v310, v311, v312,
                                                  v313, fabsf(v357)) *
                                           20.0f) +
                       100.0f;
              }
              v21 = v665;
              goto LABEL_14;
            }
          }
          v349 = 4 * v320 + 4LL * v25 * (int)v24 * v23;
          v350 = (int*)(a2 + v349 + 4 * v186);
          v351 = (int*)(a2 + v349 + 4 * v24);
          do {
            v353 = *v351++;
            v352 = v353;
            v354 = *v350++;
            v322 = v303;
            v323 = v305;
            --v324;
            v355 = v316 * v303;
            v303 = (float)(v354 + v352);
            v356 = (float)(v355 + (float)(v315 * v303)) + (float)(v317 * v304);
            v304 = v322;
            v305 = (float)(v356 + (float)(v318 * v305)) + (float)(v319 * v306);
            v306 = v323;
            v321 = (float)(v321 + fabsf(v302 * v305)) * 0.5f;
          } while (v324 != 0);
          goto LABEL_82;
        }
        v21 = v665;
        v322 = v304;
        v323 = v306;
        v325 = 0.0f;
      LABEL_14:
        ++v23;
        *(float*)(v6 + 188) =
            (float)(*(float*)(v6 + 188) +
                    (float)((float)(v325 / 100.0f) *
                            (float)((float)(v325 / 100.0f) *
                                    (float)(v325 / 100.0f)))) *
            0.5f;
        v301[11] = v303;
        v301[12] = v322;
        v301[13] = v305;
        v301[14] = v323;
        if (v23 == v21) {
          goto LABEL_160;
        }
      }
      v206 = 0;
      v207 = 0.0f;
      v208 = v190;
      v209 = v192;
      v210 = v200 & 7;
      if (v210 == 0) {
        goto LABEL_58;
      }
    LABEL_56:
      v235 = 4 * v206 + 4LL * v25 * (int)v24 * v23;
      v236 = (int*)(a2 + v235 + 4 * v186);
      v237 = (int*)(a2 + v235 + 4 * v24);
      do {
        v239 = *v237++;
        v238 = v239;
        v240 = *v236++;
        v208 = v189;
        v209 = v191;
        --v210;
        v241 = v202 * v189;
        v189 = (float)(v240 + v238);
        v242 = (float)(v241 + (float)(v201 * v189)) + (float)(v203 * v190);
        v190 = v208;
        v191 = (float)(v242 + (float)(v204 * v191)) + (float)(v205 * v192);
        v192 = v209;
        v207 = (float)(v207 + fabsf(v188 * v191)) * 0.5f;
      } while (v210 != 0);
      goto LABEL_58;
    }
    goto LABEL_160;
  }
  if (v21 >= 1) {
    v358 = a2 + 16;
    v359 = 0;
    while (1) {
      v360 = (int)*a3;
      v361 = a3[3];
      v362 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      v363 = v362[51];
      v364 = v362[7];
      v365 = v362[8];
      v366 = v362[9];
      v367 = v362[10];
      nn_os_LockMutex(v6 + 136);
      v368 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      nn_os_UnlockMutex(v6 + 136);
      v375 = *a3;
      if ((int)*a3 < 1) {
        v383 = v365;
        v384 = v367;
        v386 = 0.0f;
        goto LABEL_100;
      }
      v376 = v368[4];
      v377 = v368[5];
      v378 = v368[6];
      v379 = -v368[2];
      v380 = -v368[3];
      if (v375 < 8) {
        break;
      }
      v382 = 0.0f;
      v387 = 0;
      v388 = (int*)(v358 + 4LL * v361 * (int)v360 * v359);
      do {
        v387 -= 8;
        v389 = (float)*(v388 - 4);
        v390 = (float)*(v388 - 3);
        v391 = (float)((float)((float)((float)(v377 * v364) +
                                       (float)(v376 * v389)) +
                               (float)(v378 * v365)) +
                       (float)(v379 * v366)) +
               (float)(v380 * v367);
        v392 = (float)((float)((float)((float)(v377 * v389) +
                                       (float)(v376 * v390)) +
                               (float)(v378 * v364)) +
                       (float)(v379 * v391)) +
               (float)(v380 * v366);
        v393 = (float)*(v388 - 2);
        v394 = (float)((float)((float)((float)(v377 * v390) +
                                       (float)(v376 * v393)) +
                               (float)(v378 * v389)) +
                       (float)(v379 * v392)) +
               (float)(v380 * v391);
        v395 =
            (float)((float)((float)((float)(v382 + fabsf(v363 * v391)) * 0.5f) +
                            fabsf(v363 * v392)) *
                    0.5f) +
            fabsf(v363 * v394);
        v396 = (float)*(v388 - 1);
        v397 = (float)((float)((float)((float)(v377 * v393) +
                                       (float)(v376 * v396)) +
                               (float)(v378 * v390)) +
                       (float)(v379 * v394)) +
               (float)(v380 * v392);
        v398 = (float)*v388;
        v399 = (float)((float)((float)((float)(v377 * v396) +
                                       (float)(v376 * v398)) +
                               (float)(v378 * v393)) +
                       (float)(v379 * v397)) +
               (float)(v380 * v394);
        v400 =
            (float)((float)((float)(v395 * 0.5f) + fabsf(v363 * v397)) * 0.5f) +
            fabsf(v363 * v399);
        v401 = (float)v388[1];
        v402 = v388[2];
        v403 = v388[3];
        v388 += 8;
        v404 = (float)((float)((float)((float)(v377 * v398) +
                                       (float)(v376 * v401)) +
                               (float)(v378 * v396)) +
                       (float)(v379 * v399)) +
               (float)(v380 * v397);
        v365 = (float)v402;
        v364 = (float)v403;
        v367 = (float)((float)((float)((float)(v377 * v401) +
                                       (float)(v376 * (float)v402)) +
                               (float)(v378 * v398)) +
                       (float)(v379 * v404)) +
               (float)(v380 * v399);
        v366 = (float)((float)((float)((float)(v377 * (float)v402) +
                                       (float)(v376 * (float)v403)) +
                               (float)(v378 * v401)) +
                       (float)(v379 * v367)) +
               (float)(v380 * v404);
        v382 = (float)((float)((float)((float)((float)((float)(v400 * 0.5f) +
                                                       fabsf(v363 * v404)) *
                                               0.5f) +
                                       fabsf(v363 * v367)) *
                               0.5f) +
                       fabsf(v363 * v366)) *
               0.5f;
      } while (-(__int64)(v375 & 0x7FFFFFF8) != v387);
      v381 = -v387;
      v383 = (float)v402;
      v384 = (float)((float)((float)((float)(v377 * v401) +
                                     (float)(v376 * (float)v402)) +
                             (float)(v378 * v398)) +
                     (float)(v379 * v404)) +
             (float)(v380 * v399);
      v385 = v375 & 7;
      if (v385 != 0) {
        goto LABEL_96;
      }
    LABEL_98:
      v386 = 0.0f;
      v408 = vcvts_n_f32_s32((int)v382, 0xFu);
      if (v408 != 0.0f) {
        v386 = (float)(int)(float)(log10f(v369, v370, v371, v372, v373, v374,
                                          fabsf(v408)) *
                                   20.0f) +
               100.0f;
      }
    LABEL_100:
      *(float*)(v6 + 168) =
          (float)(*(float*)(v6 + 168) +
                  (float)((float)(v386 / 100.0f) *
                          (float)((float)(v386 / 100.0f) *
                                  (float)((float)(v386 / 100.0f) *
                                          (float)(v386 / 100.0f))))) *
          0.5f;
      v362[7] = v364;
      v362[8] = v383;
      v362[9] = v366;
      v362[10] = v384;
      v409 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      v410 = v409[51];
      v411 = v409[7];
      v412 = v409[8];
      v413 = v409[9];
      v414 = v409[10];
      nn_os_LockMutex(v6 + 136);
      v415 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      nn_os_UnlockMutex(v6 + 136);
      v422 = *a3;
      if ((int)*a3 < 1) {
        v430 = v412;
        v431 = v414;
        v433 = 0.0f;
        goto LABEL_112;
      }
      v423 = v415[4];
      v424 = v415[5];
      v425 = v415[6];
      v426 = -v415[2];
      v427 = -v415[3];
      if (v422 < 8) {
        v428 = 0;
        v429 = 0.0f;
        v430 = v412;
        v431 = v414;
        v432 = v422 & 7;
        if (v432 == 0) {
          goto LABEL_110;
        }
      LABEL_108:
        v452 = (int*)(a2 + 4 * v428 + 4LL * v361 * (int)v360 * v359);
        do {
          v453 = *v452++;
          v430 = v411;
          v431 = v413;
          --v432;
          v411 = (float)v453;
          v454 = (float)((float)(v424 * v430) + (float)(v423 * (float)v453)) +
                 (float)(v425 * v412);
          v412 = v430;
          v413 = (float)(v454 + (float)(v426 * v413)) + (float)(v427 * v414);
          v414 = v431;
          v429 = (float)(v429 + fabsf(v410 * v413)) * 0.5f;
        } while (v432 != 0);
        goto LABEL_110;
      }
      v429 = 0.0f;
      v434 = 0;
      v435 = (int*)(v358 + 4LL * v361 * (int)v360 * v359);
      do {
        v434 -= 8;
        v436 = (float)*(v435 - 4);
        v437 = (float)*(v435 - 3);
        v438 = (float)((float)((float)((float)(v424 * v411) +
                                       (float)(v423 * v436)) +
                               (float)(v425 * v412)) +
                       (float)(v426 * v413)) +
               (float)(v427 * v414);
        v439 = (float)((float)((float)((float)(v424 * v436) +
                                       (float)(v423 * v437)) +
                               (float)(v425 * v411)) +
                       (float)(v426 * v438)) +
               (float)(v427 * v413);
        v440 = (float)*(v435 - 2);
        v441 = (float)((float)((float)((float)(v424 * v437) +
                                       (float)(v423 * v440)) +
                               (float)(v425 * v436)) +
                       (float)(v426 * v439)) +
               (float)(v427 * v438);
        v442 =
            (float)((float)((float)((float)(v429 + fabsf(v410 * v438)) * 0.5f) +
                            fabsf(v410 * v439)) *
                    0.5f) +
            fabsf(v410 * v441);
        v443 = (float)*(v435 - 1);
        v444 = (float)((float)((float)((float)(v424 * v440) +
                                       (float)(v423 * v443)) +
                               (float)(v425 * v437)) +
                       (float)(v426 * v441)) +
               (float)(v427 * v439);
        v445 = (float)*v435;
        v446 = (float)((float)((float)((float)(v424 * v443) +
                                       (float)(v423 * v445)) +
                               (float)(v425 * v440)) +
                       (float)(v426 * v444)) +
               (float)(v427 * v441);
        v447 =
            (float)((float)((float)(v442 * 0.5f) + fabsf(v410 * v444)) * 0.5f) +
            fabsf(v410 * v446);
        v448 = (float)v435[1];
        v449 = v435[2];
        v450 = v435[3];
        v435 += 8;
        v451 = (float)((float)((float)((float)(v424 * v445) +
                                       (float)(v423 * v448)) +
                               (float)(v425 * v443)) +
                       (float)(v426 * v446)) +
               (float)(v427 * v444);
        v412 = (float)v449;
        v411 = (float)v450;
        v414 = (float)((float)((float)((float)(v424 * v448) +
                                       (float)(v423 * (float)v449)) +
                               (float)(v425 * v445)) +
                       (float)(v426 * v451)) +
               (float)(v427 * v446);
        v413 = (float)((float)((float)((float)(v424 * (float)v449) +
                                       (float)(v423 * (float)v450)) +
                               (float)(v425 * v448)) +
                       (float)(v426 * v414)) +
               (float)(v427 * v451);
        v429 = (float)((float)((float)((float)((float)((float)(v447 * 0.5f) +
                                                       fabsf(v410 * v451)) *
                                               0.5f) +
                                       fabsf(v410 * v414)) *
                               0.5f) +
                       fabsf(v410 * v413)) *
               0.5f;
      } while (-(__int64)(v422 & 0x7FFFFFF8) != v434);
      v428 = -v434;
      v430 = (float)v449;
      v431 = (float)((float)((float)((float)(v424 * v448) +
                                     (float)(v423 * (float)v449)) +
                             (float)(v425 * v445)) +
                     (float)(v426 * v451)) +
             (float)(v427 * v446);
      v432 = v422 & 7;
      if (v432 != 0) {
        goto LABEL_108;
      }
    LABEL_110:
      v433 = 0.0f;
      v455 = vcvts_n_f32_s32((int)v429, 0xFu);
      if (v455 != 0.0f) {
        v433 = (float)(int)(float)(log10f(v416, v417, v418, v419, v420, v421,
                                          fabsf(v455)) *
                                   20.0f) +
               100.0f;
      }
    LABEL_112:
      *(float*)(v6 + 172) = (float)(*(float*)(v6 + 172) +
                                    (float)((float)(v433 / 100.0f) *
                                            (float)((float)(v433 / 100.0f) *
                                                    (float)(v433 / 100.0f)))) *
                            0.5f;
      v409[7] = v411;
      v409[8] = v430;
      v409[9] = v413;
      v409[10] = v431;
      v456 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      v457 = v456[51];
      v458 = v456[7];
      v459 = v456[8];
      v460 = v456[9];
      v461 = v456[10];
      nn_os_LockMutex(v6 + 136);
      v462 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      nn_os_UnlockMutex(v6 + 136);
      v469 = *a3;
      if ((int)*a3 < 1) {
        v477 = v461;
        v478 = v459;
        v480 = 0.0f;
        goto LABEL_124;
      }
      v470 = v462[4];
      v471 = v462[5];
      v472 = v462[6];
      v473 = -v462[2];
      v474 = -v462[3];
      if (v469 < 8) {
        v475 = 0;
        v476 = 0.0f;
        v477 = v461;
        v478 = v459;
        v479 = v469 & 7;
        if (v479 == 0) {
          goto LABEL_122;
        }
      LABEL_120:
        v499 = (int*)(a2 + 4 * v475 + 4LL * v361 * (int)v360 * v359);
        do {
          v500 = *v499++;
          v478 = v458;
          v477 = v460;
          --v479;
          v458 = (float)v500;
          v501 = (float)((float)(v471 * v478) + (float)(v470 * (float)v500)) +
                 (float)(v472 * v459);
          v459 = v478;
          v460 = (float)(v501 + (float)(v473 * v460)) + (float)(v474 * v461);
          v461 = v477;
          v476 = (float)(v476 + fabsf(v457 * v460)) * 0.5f;
        } while (v479 != 0);
        goto LABEL_122;
      }
      v476 = 0.0f;
      v481 = 0;
      v482 = (int*)(v358 + 4LL * v361 * (int)v360 * v359);
      do {
        v481 -= 8;
        v483 = (float)*(v482 - 4);
        v484 = (float)*(v482 - 3);
        v485 = (float)((float)((float)((float)(v471 * v458) +
                                       (float)(v470 * v483)) +
                               (float)(v472 * v459)) +
                       (float)(v473 * v460)) +
               (float)(v474 * v461);
        v486 = (float)((float)((float)((float)(v471 * v483) +
                                       (float)(v470 * v484)) +
                               (float)(v472 * v458)) +
                       (float)(v473 * v485)) +
               (float)(v474 * v460);
        v487 = (float)*(v482 - 2);
        v488 = (float)((float)((float)((float)(v471 * v484) +
                                       (float)(v470 * v487)) +
                               (float)(v472 * v483)) +
                       (float)(v473 * v486)) +
               (float)(v474 * v485);
        v489 =
            (float)((float)((float)((float)(v476 + fabsf(v457 * v485)) * 0.5f) +
                            fabsf(v457 * v486)) *
                    0.5f) +
            fabsf(v457 * v488);
        v490 = (float)*(v482 - 1);
        v491 = (float)((float)((float)((float)(v471 * v487) +
                                       (float)(v470 * v490)) +
                               (float)(v472 * v484)) +
                       (float)(v473 * v488)) +
               (float)(v474 * v486);
        v492 = (float)*v482;
        v493 = (float)((float)((float)((float)(v471 * v490) +
                                       (float)(v470 * v492)) +
                               (float)(v472 * v487)) +
                       (float)(v473 * v491)) +
               (float)(v474 * v488);
        v494 =
            (float)((float)((float)(v489 * 0.5f) + fabsf(v457 * v491)) * 0.5f) +
            fabsf(v457 * v493);
        v495 = (float)v482[1];
        v496 = v482[2];
        v497 = v482[3];
        v482 += 8;
        v498 = (float)((float)((float)((float)(v471 * v492) +
                                       (float)(v470 * v495)) +
                               (float)(v472 * v490)) +
                       (float)(v473 * v493)) +
               (float)(v474 * v491);
        v459 = (float)v496;
        v458 = (float)v497;
        v461 = (float)((float)((float)((float)(v471 * v495) +
                                       (float)(v470 * (float)v496)) +
                               (float)(v472 * v492)) +
                       (float)(v473 * v498)) +
               (float)(v474 * v493);
        v460 = (float)((float)((float)((float)(v471 * (float)v496) +
                                       (float)(v470 * (float)v497)) +
                               (float)(v472 * v495)) +
                       (float)(v473 * v461)) +
               (float)(v474 * v498);
        v476 = (float)((float)((float)((float)((float)((float)(v494 * 0.5f) +
                                                       fabsf(v457 * v498)) *
                                               0.5f) +
                                       fabsf(v457 * v461)) *
                               0.5f) +
                       fabsf(v457 * v460)) *
               0.5f;
      } while (-(__int64)(v469 & 0x7FFFFFF8) != v481);
      v475 = -v481;
      v477 = (float)((float)((float)((float)(v471 * v495) +
                                     (float)(v470 * (float)v496)) +
                             (float)(v472 * v492)) +
                     (float)(v473 * v498)) +
             (float)(v474 * v493);
      v478 = (float)v496;
      v479 = v469 & 7;
      if (v479 != 0) {
        goto LABEL_120;
      }
    LABEL_122:
      v480 = 0.0f;
      v502 = vcvts_n_f32_s32((int)v476, 0xFu);
      if (v502 != 0.0f) {
        v480 = (float)(int)(float)(log10f(v463, v464, v465, v466, v467, v468,
                                          fabsf(v502)) *
                                   20.0f) +
               100.0f;
      }
    LABEL_124:
      *(float*)(v6 + 176) = (float)(*(float*)(v6 + 176) +
                                    (float)((float)(v480 / 100.0f) *
                                            (float)((float)(v480 / 100.0f) *
                                                    (float)(v480 / 100.0f)))) *
                            0.5f;
      v456[7] = v458;
      v456[8] = v478;
      v456[9] = v460;
      v456[10] = v477;
      v503 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      v504 = v503[51];
      v505 = v503[11];
      v506 = v503[12];
      v507 = v503[13];
      v508 = v503[14];
      nn_os_LockMutex(v6 + 136);
      v509 = *(float**)(*(_QWORD*)(v6 + 104) + 8LL);
      nn_os_UnlockMutex(v6 + 136);
      v516 = *a3;
      if ((int)*a3 < 1) {
        v524 = v508;
        v525 = v506;
        v527 = 0.0f;
        goto LABEL_136;
      }
      v517 = v509[4];
      v518 = v509[5];
      v519 = v509[6];
      v520 = -v509[2];
      v521 = -v509[3];
      if (v516 < 8) {
        v522 = 0;
        v523 = 0.0f;
        v524 = v508;
        v525 = v506;
        v526 = v516 & 7;
        if (v526 == 0) {
          goto LABEL_134;
        }
      LABEL_132:
        v546 = (int*)(a2 + 4 * v522 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
        do {
          v547 = *v546++;
          v525 = v505;
          v524 = v507;
          --v526;
          v505 = (float)v547;
          v548 = (float)((float)(v518 * v525) + (float)(v517 * (float)v547)) +
                 (float)(v519 * v506);
          v506 = v525;
          v507 = (float)(v548 + (float)(v520 * v507)) + (float)(v521 * v508);
          v508 = v524;
          v523 = (float)(v523 + fabsf(v504 * v507)) * 0.5f;
        } while (v526 != 0);
        goto LABEL_134;
      }
      v523 = 0.0f;
      v528 = 0;
      v529 = (int*)(v358 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
      do {
        v528 -= 8;
        v530 = (float)*(v529 - 4);
        v531 = (float)*(v529 - 3);
        v532 = (float)((float)((float)((float)(v518 * v505) +
                                       (float)(v517 * v530)) +
                               (float)(v519 * v506)) +
                       (float)(v520 * v507)) +
               (float)(v521 * v508);
        v533 = (float)((float)((float)((float)(v518 * v530) +
                                       (float)(v517 * v531)) +
                               (float)(v519 * v505)) +
                       (float)(v520 * v532)) +
               (float)(v521 * v507);
        v534 = (float)*(v529 - 2);
        v535 = (float)((float)((float)((float)(v518 * v531) +
                                       (float)(v517 * v534)) +
                               (float)(v519 * v530)) +
                       (float)(v520 * v533)) +
               (float)(v521 * v532);
        v536 =
            (float)((float)((float)((float)(v523 + fabsf(v504 * v532)) * 0.5f) +
                            fabsf(v504 * v533)) *
                    0.5f) +
            fabsf(v504 * v535);
        v537 = (float)*(v529 - 1);
        v538 = (float)((float)((float)((float)(v518 * v534) +
                                       (float)(v517 * v537)) +
                               (float)(v519 * v531)) +
                       (float)(v520 * v535)) +
               (float)(v521 * v533);
        v539 = (float)*v529;
        v540 = (float)((float)((float)((float)(v518 * v537) +
                                       (float)(v517 * v539)) +
                               (float)(v519 * v534)) +
                       (float)(v520 * v538)) +
               (float)(v521 * v535);
        v541 =
            (float)((float)((float)(v536 * 0.5f) + fabsf(v504 * v538)) * 0.5f) +
            fabsf(v504 * v540);
        v542 = (float)v529[1];
        v543 = v529[2];
        v544 = v529[3];
        v529 += 8;
        v545 = (float)((float)((float)((float)(v518 * v539) +
                                       (float)(v517 * v542)) +
                               (float)(v519 * v537)) +
                       (float)(v520 * v540)) +
               (float)(v521 * v538);
        v506 = (float)v543;
        v505 = (float)v544;
        v508 = (float)((float)((float)((float)(v518 * v542) +
                                       (float)(v517 * (float)v543)) +
                               (float)(v519 * v539)) +
                       (float)(v520 * v545)) +
               (float)(v521 * v540);
        v507 = (float)((float)((float)((float)(v518 * (float)v543) +
                                       (float)(v517 * (float)v544)) +
                               (float)(v519 * v542)) +
                       (float)(v520 * v508)) +
               (float)(v521 * v545);
        v523 = (float)((float)((float)((float)((float)((float)(v541 * 0.5f) +
                                                       fabsf(v504 * v545)) *
                                               0.5f) +
                                       fabsf(v504 * v508)) *
                               0.5f) +
                       fabsf(v504 * v507)) *
               0.5f;
      } while (-(__int64)(v516 & 0x7FFFFFF8) != v528);
      v522 = -v528;
      v524 = (float)((float)((float)((float)(v518 * v542) +
                                     (float)(v517 * (float)v543)) +
                             (float)(v519 * v539)) +
                     (float)(v520 * v545)) +
             (float)(v521 * v540);
      v525 = (float)v543;
      v526 = v516 & 7;
      if (v526 != 0) {
        goto LABEL_132;
      }
    LABEL_134:
      v527 = 0.0f;
      v549 = vcvts_n_f32_s32((int)v523, 0xFu);
      if (v549 != 0.0f) {
        v527 = (float)(int)(float)(log10f(v510, v511, v512, v513, v514, v515,
                                          fabsf(v549)) *
                                   20.0f) +
               100.0f;
      }
    LABEL_136:
      *(float*)(v6 + 180) =
          (float)(*(float*)(v6 + 180) +
                  (float)((float)(v527 / 100.0f) *
                          (float)((float)(v527 / 100.0f) *
                                  (float)((float)(v527 / 100.0f) *
                                          (float)(v527 / 100.0f))))) *
          0.5f;
      v503[11] = v505;
      v503[12] = v525;
      v503[13] = v507;
      v503[14] = v524;
      v550 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      v551 = v550[51];
      v552 = v550[11];
      v553 = v550[12];
      v554 = v550[13];
      v555 = v550[14];
      nn_os_LockMutex(v6 + 136);
      v556 = *(float**)(*(_QWORD*)(v6 + 104) + 16LL);
      nn_os_UnlockMutex(v6 + 136);
      v563 = *a3;
      if ((int)*a3 < 1) {
        v571 = v555;
        v572 = v553;
        v574 = 0.0f;
        goto LABEL_148;
      }
      v564 = v556[4];
      v565 = v556[5];
      v566 = v556[6];
      v567 = -v556[2];
      v568 = -v556[3];
      if (v563 < 8) {
        v569 = 0;
        v570 = 0.0f;
        v571 = v555;
        v572 = v553;
        v573 = v563 & 7;
        if (v573 == 0) {
          goto LABEL_146;
        }
      LABEL_144:
        v593 = (int*)(a2 + 4 * v569 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
        do {
          v594 = *v593++;
          v572 = v552;
          v571 = v554;
          --v573;
          v552 = (float)v594;
          v595 = (float)((float)(v565 * v572) + (float)(v564 * (float)v594)) +
                 (float)(v566 * v553);
          v553 = v572;
          v554 = (float)(v595 + (float)(v567 * v554)) + (float)(v568 * v555);
          v555 = v571;
          v570 = (float)(v570 + fabsf(v551 * v554)) * 0.5f;
        } while (v573 != 0);
        goto LABEL_146;
      }
      v570 = 0.0f;
      v575 = 0;
      v576 = (int*)(v358 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
      do {
        v575 -= 8;
        v577 = (float)*(v576 - 4);
        v578 = (float)*(v576 - 3);
        v579 = (float)((float)((float)((float)(v565 * v552) +
                                       (float)(v564 * v577)) +
                               (float)(v566 * v553)) +
                       (float)(v567 * v554)) +
               (float)(v568 * v555);
        v580 = (float)((float)((float)((float)(v565 * v577) +
                                       (float)(v564 * v578)) +
                               (float)(v566 * v552)) +
                       (float)(v567 * v579)) +
               (float)(v568 * v554);
        v581 = (float)*(v576 - 2);
        v582 = (float)((float)((float)((float)(v565 * v578) +
                                       (float)(v564 * v581)) +
                               (float)(v566 * v577)) +
                       (float)(v567 * v580)) +
               (float)(v568 * v579);
        v583 =
            (float)((float)((float)((float)(v570 + fabsf(v551 * v579)) * 0.5f) +
                            fabsf(v551 * v580)) *
                    0.5f) +
            fabsf(v551 * v582);
        v584 = (float)*(v576 - 1);
        v585 = (float)((float)((float)((float)(v565 * v581) +
                                       (float)(v564 * v584)) +
                               (float)(v566 * v578)) +
                       (float)(v567 * v582)) +
               (float)(v568 * v580);
        v586 = (float)*v576;
        v587 = (float)((float)((float)((float)(v565 * v584) +
                                       (float)(v564 * v586)) +
                               (float)(v566 * v581)) +
                       (float)(v567 * v585)) +
               (float)(v568 * v582);
        v588 =
            (float)((float)((float)(v583 * 0.5f) + fabsf(v551 * v585)) * 0.5f) +
            fabsf(v551 * v587);
        v589 = (float)v576[1];
        v590 = v576[2];
        v591 = v576[3];
        v576 += 8;
        v592 = (float)((float)((float)((float)(v565 * v586) +
                                       (float)(v564 * v589)) +
                               (float)(v566 * v584)) +
                       (float)(v567 * v587)) +
               (float)(v568 * v585);
        v553 = (float)v590;
        v552 = (float)v591;
        v555 = (float)((float)((float)((float)(v565 * v589) +
                                       (float)(v564 * (float)v590)) +
                               (float)(v566 * v586)) +
                       (float)(v567 * v592)) +
               (float)(v568 * v587);
        v554 = (float)((float)((float)((float)(v565 * (float)v590) +
                                       (float)(v564 * (float)v591)) +
                               (float)(v566 * v589)) +
                       (float)(v567 * v555)) +
               (float)(v568 * v592);
        v570 = (float)((float)((float)((float)((float)((float)(v588 * 0.5f) +
                                                       fabsf(v551 * v592)) *
                                               0.5f) +
                                       fabsf(v551 * v555)) *
                               0.5f) +
                       fabsf(v551 * v554)) *
               0.5f;
      } while (-(__int64)(v563 & 0x7FFFFFF8) != v575);
      v569 = -v575;
      v571 = (float)((float)((float)((float)(v565 * v589) +
                                     (float)(v564 * (float)v590)) +
                             (float)(v566 * v586)) +
                     (float)(v567 * v592)) +
             (float)(v568 * v587);
      v572 = (float)v590;
      v573 = v563 & 7;
      if (v573 != 0) {
        goto LABEL_144;
      }
    LABEL_146:
      v574 = 0.0f;
      v596 = vcvts_n_f32_s32((int)v570, 0xFu);
      if (v596 != 0.0f) {
        v574 = (float)(int)(float)(log10f(v557, v558, v559, v560, v561, v562,
                                          fabsf(v596)) *
                                   20.0f) +
               100.0f;
      }
    LABEL_148:
      *(float*)(v6 + 184) = (float)(*(float*)(v6 + 184) +
                                    (float)((float)(v574 / 100.0f) *
                                            (float)((float)(v574 / 100.0f) *
                                                    (float)(v574 / 100.0f)))) *
                            0.5f;
      v550[11] = v552;
      v550[12] = v572;
      v550[13] = v554;
      v550[14] = v571;
      v597 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      v598 = v597[51];
      v599 = v597[11];
      v600 = v597[12];
      v601 = v597[13];
      v602 = v597[14];
      nn_os_LockMutex(v6 + 136);
      v603 = *(float**)(*(_QWORD*)(v6 + 104) + 24LL);
      nn_os_UnlockMutex(v6 + 136);
      v610 = *a3;
      if ((int)*a3 >= 1) {
        v611 = v603[4];
        v612 = v603[5];
        v613 = v603[6];
        v614 = -v603[2];
        v615 = -v603[3];
        if (v610 >= 8) {
          v617 = 0.0f;
          v622 = 0;
          v623 = (int*)(v358 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
          do {
            v622 -= 8;
            v624 = (float)*(v623 - 4);
            v625 = (float)*(v623 - 3);
            v626 = (float)((float)((float)((float)(v612 * v599) +
                                           (float)(v611 * v624)) +
                                   (float)(v613 * v600)) +
                           (float)(v614 * v601)) +
                   (float)(v615 * v602);
            v627 = (float)((float)((float)((float)(v612 * v624) +
                                           (float)(v611 * v625)) +
                                   (float)(v613 * v599)) +
                           (float)(v614 * v626)) +
                   (float)(v615 * v601);
            v628 = (float)*(v623 - 2);
            v629 = (float)((float)((float)((float)(v612 * v625) +
                                           (float)(v611 * v628)) +
                                   (float)(v613 * v624)) +
                           (float)(v614 * v627)) +
                   (float)(v615 * v626);
            v630 = (float)((float)((float)((float)(v617 + fabsf(v598 * v626)) *
                                           0.5f) +
                                   fabsf(v598 * v627)) *
                           0.5f) +
                   fabsf(v598 * v629);
            v631 = (float)*(v623 - 1);
            v632 = (float)((float)((float)((float)(v612 * v628) +
                                           (float)(v611 * v631)) +
                                   (float)(v613 * v625)) +
                           (float)(v614 * v629)) +
                   (float)(v615 * v627);
            v633 = (float)*v623;
            v634 = (float)((float)((float)((float)(v612 * v631) +
                                           (float)(v611 * v633)) +
                                   (float)(v613 * v628)) +
                           (float)(v614 * v632)) +
                   (float)(v615 * v629);
            v635 = (float)((float)((float)(v630 * 0.5f) + fabsf(v598 * v632)) *
                           0.5f) +
                   fabsf(v598 * v634);
            v636 = (float)v623[1];
            v637 = v623[2];
            v638 = v623[3];
            v623 += 8;
            v639 = (float)((float)((float)((float)(v612 * v633) +
                                           (float)(v611 * v636)) +
                                   (float)(v613 * v631)) +
                           (float)(v614 * v634)) +
                   (float)(v615 * v632);
            v600 = (float)v637;
            v599 = (float)v638;
            v602 = (float)((float)((float)((float)(v612 * v636) +
                                           (float)(v611 * (float)v637)) +
                                   (float)(v613 * v633)) +
                           (float)(v614 * v639)) +
                   (float)(v615 * v634);
            v601 = (float)((float)((float)((float)(v612 * (float)v637) +
                                           (float)(v611 * (float)v638)) +
                                   (float)(v613 * v636)) +
                           (float)(v614 * v602)) +
                   (float)(v615 * v639);
            v617 =
                (float)((float)((float)((float)((float)((float)(v635 * 0.5f) +
                                                        fabsf(v598 * v639)) *
                                                0.5f) +
                                        fabsf(v598 * v602)) *
                                0.5f) +
                        fabsf(v598 * v601)) *
                0.5f;
          } while (-(__int64)(v610 & 0x7FFFFFF8) != v622);
          v616 = -v622;
          v618 = (float)((float)((float)((float)(v612 * v636) +
                                         (float)(v611 * (float)v637)) +
                                 (float)(v613 * v633)) +
                         (float)(v614 * v639)) +
                 (float)(v615 * v634);
          v619 = (float)v637;
          v620 = v610 & 7;
          if (v620 == 0) {
            goto LABEL_158;
          }
        }
        else {
          v616 = 0;
          v617 = 0.0f;
          v618 = v602;
          v619 = v600;
          v620 = v610 & 7;
          if (v620 == 0) {
          LABEL_158:
            v621 = 0.0f;
            v643 = vcvts_n_f32_s32((int)v617, 0xFu);
            if (v643 != 0.0f) {
              v621 = (float)(int)(float)(log10f(v604, v605, v606, v607, v608,
                                                v609, fabsf(v643)) *
                                         20.0f) +
                     100.0f;
            }
            v21 = v665;
            goto LABEL_87;
          }
        }
        v640 = (int*)(a2 + 4 * v616 + 4 * v360 + 4LL * v361 * (int)v360 * v359);
        do {
          v641 = *v640++;
          v619 = v599;
          v618 = v601;
          --v620;
          v599 = (float)v641;
          v642 = (float)((float)(v612 * v619) + (float)(v611 * (float)v641)) +
                 (float)(v613 * v600);
          v600 = v619;
          v601 = (float)(v642 + (float)(v614 * v601)) + (float)(v615 * v602);
          v602 = v618;
          v617 = (float)(v617 + fabsf(v598 * v601)) * 0.5f;
        } while (v620 != 0);
        goto LABEL_158;
      }
      v21 = v665;
      v618 = v602;
      v619 = v600;
      v621 = 0.0f;
    LABEL_87:
      ++v359;
      *(float*)(v6 + 188) = (float)(*(float*)(v6 + 188) +
                                    (float)((float)(v621 / 100.0f) *
                                            (float)((float)(v621 / 100.0f) *
                                                    (float)(v621 / 100.0f)))) *
                            0.5f;
      v597[11] = v599;
      v597[12] = v619;
      v597[13] = v601;
      v597[14] = v618;
      if (v359 == v21) {
        goto LABEL_160;
      }
    }
    v381 = 0;
    v382 = 0.0f;
    v383 = v365;
    v384 = v367;
    v385 = v375 & 7;
    if (v385 == 0) {
      goto LABEL_98;
    }
  LABEL_96:
    v405 = (int*)(a2 + 4 * v381 + 4LL * v361 * (int)v360 * v359);
    do {
      v406 = *v405++;
      v383 = v364;
      v384 = v366;
      --v385;
      v364 = (float)v406;
      v407 = (float)((float)(v377 * v383) + (float)(v376 * (float)v406)) +
             (float)(v378 * v365);
      v365 = v383;
      v366 = (float)(v407 + (float)(v379 * v366)) + (float)(v380 * v367);
      v367 = v384;
      v382 = (float)(v382 + fabsf(v363 * v366)) * 0.5f;
    } while (v385 != 0);
    goto LABEL_98;
  }

LABEL_160:
  nn_os_LockMutex(v6 + 136);
  v644 = *(void (**)(_QWORD))(v6 + 200);
  if (v644 != nullptr) {
    v644(*(_QWORD*)(v6 + 192));
  }
  nn_os_UnlockMutex(v6 + 136);
  if (v21 >= 1) {
    v645 = a3[3];
    if (v645 >= 1) {
      LODWORD(v646) = *a3;
      if (v21 == 1) {
        v647 = 0;
        v648 = *a3;
        v649 = *a3;
      }
      else {
        v650 = 1;
        v647 = 0;
        LODWORD(v651) = *a3;
        v648 = *a3;
        v649 = *a3;
        do {
          if (v645 >= 1) {
            if (v648 < 1) {
              v649 = v648;
            }
            else {
              v652 = 0;
              v653 = a2 + 4LL * (int)(v649 * v645 * v647);
              do {
                if ((int)v651 >= 1) {
                  v654 = 0;
                  v655 = v653 + 4LL * (int)v651 * v652;
                  do {
                    *(_DWORD*)(v655 + 4 * v654++) = 0;
                    v651 = (int)*a3;
                  } while (v654 < v651);
                  v645 = a3[3];
                }
                ++v652;
                v648 = v651;
                v649 = v651;
              } while (v652 < v645);
            }
          }
          if (v645 < 1) {
            LODWORD(v646) = v651;
          }
          else if (v648 < 1) {
            LODWORD(v646) = v651;
            v649 = v648;
          }
          else {
            v656 = 0;
            v657 = a2 + 4LL * (int)(v649 * v645 * v650);
            LODWORD(v646) = v651;
            do {
              if ((int)v646 >= 1) {
                v658 = 0;
                v659 = v657 + 4LL * (int)v646 * v656;
                do {
                  *(_DWORD*)(v659 + 4 * v658++) = 0;
                  v646 = (int)*a3;
                } while (v658 < v646);
                v645 = a3[3];
              }
              ++v656;
              v648 = v646;
              v649 = v646;
            } while (v656 < v645);
          }
          v647 += 2;
          v650 += 2;
          LODWORD(v651) = v646;
        } while (v647 != (v21 & 0x7FFFFFFE));
      }
      if ((v21 & 1) != 0 && v645 >= 1 && v648 >= 1) {
        v660 = 0;
        v661 = a2 + 4LL * (int)(v649 * v647 * v645);
        do {
          if ((int)v646 >= 1) {
            v662 = 0;
            v663 = v661 + 4LL * (int)v646 * v660;
            do {
              *(_DWORD*)(v663 + 4 * v662++) = 0;
              v646 = (int)*a3;
            } while (v662 < v646);
            v645 = a3[3];
          }
          ++v660;
        } while (v660 < v645);
      }
    }
  }
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
