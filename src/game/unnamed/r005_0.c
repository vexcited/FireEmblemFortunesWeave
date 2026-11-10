#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a8e3a8;

extern _UNKNOWN GameData_1acbd02;

extern __int64 (*GameData_1fedd08[])();

extern __int64 (*GameData_1fedda8[6])();

extern __int64 (*GameData_1feddc0[3])();

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212c540;

extern __int64 GameData_212d020[5];

extern __int64* GameData_212d458[7];

extern __int64* GameData_212d468[5];

extern __int64 GameData_212dbb8[9];

extern __int64 GameData_212dbe0[4];

extern __int64 GameData_212dbe8[3];

extern __int64 GameData_212dbf0[2];

extern __int64* GameData_212ea58;

extern __int64* GameData_212eec0[4];

extern __int64* GameData_212f2e0;

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21c6978;

extern __int64 GameData_21c9608;

extern __int64 GameData_21c96e8;

extern __int64 GameData_21c96f8;

extern __int64 GameData_21c9718;

extern __int64 GameData_21ca2f8;

extern __int64 GameData_21caab0;

extern __int64 GameData_21ec550;

extern __int64 GameData_21ec7c0;

extern __int64 GameData_21ee240;

extern __int64 GameData_21f3cc0;

extern __int64 GameData_21f3cc8;

extern __int64 GameData_21f3d08;

extern __int64 GameData_21f3d10;

extern __int64 GameData_21f3ff8;

extern __int64 GameData_21f61c0;

extern __int64 GameData_2203490;

extern __int64 GameData_220b6e0;

extern __int64 GameData_220b6f0;

extern __int64 GameData_2212270;

extern __int64 GameData_2219078;

extern __int64 GameData_221bea8;

extern __int64 GameData_22336e0;

extern __int64 GameData_2241720;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_104b900(_QWORD, _QWORD);

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_114d520(void);

__int64 GameRoutine_13305c0(long double);

__int64 GameRoutine_1479fc0(void);

__int64 GameRoutine_17ccc20(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(void);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_809dc0(float);

__int64 GameRoutine_96bc20(_QWORD, _QWORD);

__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);

__int64 GameRoutine_a2d8b0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2e490(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2f5a0(_QWORD);

__int64 GameRoutine_c13be0(void);

__int64 GameRoutine_cb90b0(_QWORD, float);

__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_cee990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           float);

__int64 GameRoutine_cf5c00(_QWORD);

__int64 GameRoutine_d54e40(_QWORD);

__int64 GameRoutine_d6f1a0(_QWORD);

__int64 GameRoutine_d6f8d0(_QWORD);

__int64 GameRoutine_d799f0(_QWORD);

__int64 GameRoutine_d856f0(void);

__int64 GameRoutine_db8640(_QWORD);

__int64 GameRoutine_dffec0(_QWORD);

__int64 GameRoutine_e79f00(_QWORD);

__int64 GameRoutine_e7df20(_QWORD, _QWORD, float);

__int64 GameRoutine_e80e80(_QWORD, _QWORD);

__int64 GameRoutine_e9cb40(_QWORD, _QWORD);

__int64 GameRoutine_eaec10(_QWORD, _QWORD);

__int64 GameRoutine_ebd120(void);

__int64 GameRoutine_ee5850(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ee5e20(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ee6270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ee6820(_QWORD, _QWORD);

__int64 GameRoutine_ee6c60(_QWORD, _QWORD);

__int64 GameRoutine_ee7f60(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ee8120(_QWORD, _QWORD);

__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_f3eb10(_QWORD);

float GameRoutine_f3ec50(_QWORD);

__int64 GameRoutine_f5c3f0(_QWORD);

__int64 GameRoutine_f62340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_f624c0(_QWORD, _QWORD);

__int64 GameRoutine_f889e0(_QWORD);

__int64 GameHr_eaea00(__int64 a1, int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _QWORD v16[2];
  __int64 v17;
  _BYTE v18[24];
  int v19;
  _BYTE* v20;

  *(_WORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD*)a1 = GameData_1fedd08;
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20();
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v18[0] = 0;
    v19 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_1feddc0[v10];
      v20 = v18;
      ((void (*)(_BYTE**, __int64))v11)(&v20, v8);
      v19 = v10;
    }
    GameRoutine_eaec10(a1 + 64, v18);
    if (v19 != -1) {
      ((void (*)(_BYTE**, _BYTE*))GameData_1fedda8[v19])(&v20, v18);
    }
  }
  *(_DWORD*)(a1 + 88) = *((_DWORD*)a3 + 12);
  if ((a3[7] & 1) != 0) {
    GameRoutine_60a270(v16, a3[9], a3[8]);
  }
  else {
    v12 = a3[8];
    v13 = a3[9];
    v16[0] = a3[7];
    v16[1] = v12;
    v17 = v13;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v16);
  if ((v16[0] & 1) != 0 && v17 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15);
  }
  return result;
}

__int64 GameHr_ebcaa0()
{
  __int64 result;

  result = *(_QWORD*)(GameData_2203490 + 584);
  if (*(_QWORD*)(GameData_2203490 + 592) != result && result != 0) {
    return GameRoutine_ebd120();
  }
  return result;
}

__int64 GameHr_ee3be0(__int64 result, char* a2, __int64 a3, char a4)
{
  char* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  __int128 v23;
  unsigned int v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  char* v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int128 v59;
  unsigned int v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int128 v67;
  __int128 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int128 v97;
  unsigned int v98;
  __int128 v99;
  __int64 v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  __int64 v104;
  __int128 v105;
  __int128 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int128 v119;
  unsigned int v120;
  __int128 v121;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  char* v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  char* v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  __int128 v144;
  int v145;
  char* v146;
  char* v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  _QWORD* v152;
  char v153;
  __int64 v154;
  char* v155;
  int v156;
  int v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int128 v161;
  __int64 v162;
  char* v163;
  __int64 v164;
  __int64 v165;
  char* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int128 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  signed __int64 v179;
  signed __int64 v180;
  __int64 v181;
  __int64 v182;
  char* v183;
  __int64 v184;
  char* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  char* v194;
  __int128 v195;
  __int128 v196;
  __int64 v197;
  __int64 v198;
  bool v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  char* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  char* v216;
  char* v217;
  char* v218;
  __int64 v219;
  __int64 v220;
  unsigned int v221;
  unsigned int v222;
  __int128 v223;
  int v224;
  char v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int128 v231;
  __int64 v232;
  __int64 v233;
  char* v234;
  __int128 v235;
  __int128 v236;
  __int64 v237;
  unsigned __int64 v238;
  unsigned __int64 v239;
  char* v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  char* v252;
  __int128 v253;
  int v254;
  char v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int128 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  unsigned int v270;
  __int128 v271;
  __int64 v272;
  __int64 v273;
  __int128 v274;
  __int64 v275;
  __int64 v276;
  _QWORD* v277;
  __int64* v278;
  _QWORD* v279;
  __int64 v280;
  __int64 v281;
  int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64* v291;
  int v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  int v300;
  int v301;
  int v302;
  __int128 v303;
  int v304;
  char v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  int v310;
  int v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int128 v315;
  __int64 v316;
  __int64 v317;
  __int128 v318;
  __int64 v319;
  __int64 v320;
  char* v321;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  unsigned int v329;
  unsigned int v330;
  unsigned int v331;
  int v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  char v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  int v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  char v354;

  v6 = (char*)result;
LABEL_2:
  v7 = v6;
  v321 = a2 - 128;
  while (1) {
    v6 = v7;
    v8 = (a2 - v7) >> 7;
    v9 = v8 - 2;
    if (v8 > 2) {
      switch (v8) {
      case 3LL:
        return GameRoutine_ee5850(v7, v7 + 128, v321);
      case 4LL:
        return GameRoutine_ee5e20(v7, v7 + 128, v7 + 256, v321);
      case 5LL:
        return GameRoutine_ee6270(v7, v7 + 128, v7 + 256, v7 + 384, v321);
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v8 < 2) {
        return result;
      }
      if (v8 == 2) {
        v109 = *(_QWORD*)v7;
        if (*(unsigned __int16*)(*((_QWORD*)a2 - 16) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)v7 + 16LL)) {
          v111 = *((_QWORD*)v7 + 2);
          v110 = *((_QWORD*)v7 + 3);
          v354 = 0;
          v342 = v109;
          LOBYTE(v345) = 0;
          v343 = v111;
          v344 = v110;
          if (v7[112] == 1) {
            v112 = *((_QWORD*)v7 + 7);
            v113 = *((_QWORD*)v7 + 8);
            v345 = *((_DWORD*)v7 + 8);
            v115 = *((_QWORD*)v7 + 5);
            v114 = *((_QWORD*)v7 + 6);
            v348 = v112;
            v346 = v115;
            v347 = v114;
            v116 = *((_QWORD*)v7 + 9);
            v117 = *((_QWORD*)v7 + 10);
            *((_QWORD*)v7 + 6) = 0;
            *((_QWORD*)v7 + 7) = 0;
            *((_QWORD*)v7 + 5) = 0;
            v349 = v113;
            v350 = v116;
            v351 = v117;
            v118 = *((_QWORD*)v7 + 13);
            *((_QWORD*)v7 + 9) = 0;
            *((_QWORD*)v7 + 10) = 0;
            *((_QWORD*)v7 + 8) = 0;
            v353 = v118;
            v352 = *((_QWORD*)v7 + 12);
            v354 = 1;
          }
          *(_QWORD*)v7 = *((_QWORD*)a2 - 16);
          *((_DWORD*)v7 + 4) = *((_DWORD*)a2 - 28);
          *((_DWORD*)v7 + 5) = *((_DWORD*)a2 - 27);
          v119 = *((_OWORD*)v7 + 1);
          *((_QWORD*)&v119 + 1) = *((unsigned int*)a2 - 26);
          *((_OWORD*)v7 + 1) = v119;
          GameRoutine_ee6c60(v7 + 32, a2 - 96);
          *((_QWORD*)a2 - 16) = v109;
          v120 = v344;
          *((_QWORD*)a2 - 14) = v343;
          v121 = *((_OWORD*)a2 - 7);
          *((_QWORD*)&v121 + 1) = v120;
          *((_OWORD*)a2 - 7) = v121;
          result = GameRoutine_ee6c60(a2 - 96, &v345);
          if (v354 == 1) {
            if ((v349 & 1) != 0 && v351 != 0) {
              v122 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v122 = 56;
              }
              result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v122);
            }
            if ((v346 & 1) != 0 && v348 != 0) {
              v123 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v123 = 56;
              }
              return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v123);
            }
          }
        }
        return result;
      }
    }
    if (v8 <= 23) {
      break;
    }
    if (a3 == 0) {
      if (v7 == a2) {
        return result;
      }
      v178 = v9 >> 1;
      v179 = v9 >> 1;
      do {
        v180 = v179;
        if (v178 >= v179) {
          v181 = (2 * (v179 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v182 = 2 * v179 + 2;
          v183 = &v6[128 * v181];
          if (v182 >= v8) {
            v184 = *(_QWORD*)v183;
          }
          else {
            v184 = *(_QWORD*)v183;
            if (*(unsigned __int16*)(*(_QWORD*)v183 + 16LL) <
                (unsigned int)*(unsigned __int16*)(*((_QWORD*)v183 + 16) +
                                                   16LL)) {
              v184 = *((_QWORD*)v183 + 16);
              v183 += 128;
              v181 = 2 * v180 + 2;
            }
          }
          v185 = &v6[128 * v180];
          if (*(unsigned __int16*)(v184 + 16) >=
              (unsigned int)*(unsigned __int16*)(*(_QWORD*)v185 + 16LL)) {
            v342 = *(_QWORD*)v185;
            v344 = *((_QWORD*)v185 + 3);
            v186 = *((_QWORD*)v185 + 2);
            LOBYTE(v345) = 0;
            v354 = 0;
            v343 = v186;
            if (v185[112] == 1) {
              v345 = *((_DWORD*)v185 + 8);
              v187 = *((_QWORD*)v185 + 5);
              v188 = *((_QWORD*)v185 + 7);
              v347 = *((_QWORD*)v185 + 6);
              v348 = v188;
              v346 = v187;
              *((_QWORD*)v185 + 6) = 0;
              *((_QWORD*)v185 + 7) = 0;
              *((_QWORD*)v185 + 5) = 0;
              v189 = *((_QWORD*)v185 + 8);
              v190 = *((_QWORD*)v185 + 10);
              v350 = *((_QWORD*)v185 + 9);
              v351 = v190;
              v349 = v189;
              *((_QWORD*)v185 + 9) = 0;
              *((_QWORD*)v185 + 10) = 0;
              *((_QWORD*)v185 + 8) = 0;
              v192 = *((_QWORD*)v185 + 12);
              v191 = *((_QWORD*)v185 + 13);
              v354 = 1;
              v352 = v192;
              v353 = v191;
              v184 = *(_QWORD*)v183;
            }
            while (1) {
              *(_QWORD*)v185 = v184;
              v194 = v183;
              *((_DWORD*)v185 + 4) = *((_DWORD*)v183 + 4);
              *((_DWORD*)v185 + 5) = *((_DWORD*)v183 + 5);
              v195 = *((_OWORD*)v185 + 1);
              *((_QWORD*)&v195 + 1) = *((unsigned int*)v183 + 6);
              *((_OWORD*)v185 + 1) = v195;
              GameRoutine_ee6c60(v185 + 32, v183 + 32);
              if (v178 < v181) {
                break;
              }
              v183 = &v6[128 * ((2 * v181) | 1)];
              if (2 * v181 + 2 < v8) {
                v184 = *(_QWORD*)v183;
                if (*(unsigned __int16*)(*(_QWORD*)v183 + 16LL) >=
                    (unsigned int)*(unsigned __int16*)(*((_QWORD*)v183 + 16) +
                                                       16LL)) {
                  v181 = (2 * v181) | 1;
                }
                else {
                  v184 = *((_QWORD*)v183 + 16);
                  v183 += 128;
                  v181 = 2 * v181 + 2;
                }
              }
              else {
                v184 = *(_QWORD*)v183;
                v181 = (2 * v181) | 1;
              }
              v193 = v342;
              v185 = v194;
              if (*(unsigned __int16*)(v184 + 16) <
                  (unsigned int)*(unsigned __int16*)(v342 + 16)) {
                goto LABEL_216;
              }
            }
            v193 = v342;
          LABEL_216:
            *(_QWORD*)v194 = v193;
            *((_QWORD*)v194 + 2) = v343;
            v196 = *((_OWORD*)v194 + 1);
            *((_QWORD*)&v196 + 1) = (unsigned int)v344;
            *((_OWORD*)v194 + 1) = v196;
            GameRoutine_ee6c60(v194 + 32, &v345);
            if (v354 == 1) {
              if ((v349 & 1) != 0 && v351 != 0) {
                v197 = 128;
                if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                  v197 = 56;
                }
                GameRoutine_1a0a4e0(GameData_2265ee0 + v197);
              }
              if ((v346 & 1) != 0 && v348 != 0) {
                v198 = 128;
                if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
                  v198 = 56;
                }
                GameRoutine_1a0a4e0(GameData_2265ee0 + v198);
              }
            }
          }
        }
        v179 = v180 - 1;
      } while (v180 != 0);
      while (1) {
        v325 = *(_QWORD*)v6;
        v201 = *((_QWORD*)v6 + 2);
        v200 = *((_QWORD*)v6 + 3);
        v341 = 0;
        LOBYTE(v332) = 0;
        v328 = v201;
        v331 = v200;
        if (v6[112] == 1) {
          v202 = *((_QWORD*)v6 + 7);
          v203 = *((_QWORD*)v6 + 8);
          v332 = *((_DWORD*)v6 + 8);
          v205 = *((_QWORD*)v6 + 5);
          v204 = *((_QWORD*)v6 + 6);
          v335 = v202;
          v333 = v205;
          v334 = v204;
          v206 = *((_QWORD*)v6 + 9);
          v207 = *((_QWORD*)v6 + 10);
          *((_QWORD*)v6 + 6) = 0;
          *((_QWORD*)v6 + 7) = 0;
          *((_QWORD*)v6 + 5) = 0;
          v336 = v203;
          v337 = v206;
          v338 = v207;
          v208 = *((_QWORD*)v6 + 13);
          *((_QWORD*)v6 + 9) = 0;
          *((_QWORD*)v6 + 10) = 0;
          *((_QWORD*)v6 + 8) = 0;
          v340 = v208;
          v339 = *((_QWORD*)v6 + 12);
          v341 = 1;
        }
        v209 = 0;
        v210 = v6;
        do {
          v216 = &v210[128 * v209];
          v217 = v210;
          v210 = v216 + 128;
          if (2 * v209 + 2 >= v8) {
            v220 = *(_QWORD*)v210;
            v209 = (2 * v209) | 1;
          }
          else {
            v218 = v216 + 256;
            v219 = *((_QWORD*)v216 + 16);
            v220 = *((_QWORD*)v216 + 32);
            v221 = *(unsigned __int16*)(v219 + 16);
            v222 = *(unsigned __int16*)(v220 + 16);
            if (v221 < v222) {
              v210 = v218;
            }
            else {
              v220 = v219;
            }
            if (v221 >= v222) {
              v209 = (2 * v209) | 1;
            }
            else {
              v209 = 2 * v209 + 2;
            }
          }
          *(_QWORD*)v217 = v220;
          *((_DWORD*)v217 + 4) = *((_DWORD*)v210 + 4);
          *((_DWORD*)v217 + 5) = *((_DWORD*)v210 + 5);
          v223 = *((_OWORD*)v217 + 1);
          v224 = (unsigned __int8)v217[112];
          *((_QWORD*)&v223 + 1) = *((unsigned int*)v210 + 6);
          *((_OWORD*)v217 + 1) = v223;
          if (v224 == (unsigned __int8)v210[112]) {
            if (v224 != 0) {
              v225 = v217[40];
              *((_DWORD*)v217 + 8) = *((_DWORD*)v210 + 8);
              if ((v225 & 1) != 0 && *((_QWORD*)v217 + 7) != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v226 = 128;
                }
                else {
                  v226 = 56;
                }
                GameRoutine_1a0a4e0(GameData_2265ee0 + v226);
              }
              v227 = *((_QWORD*)v210 + 5);
              v228 = *((_QWORD*)v210 + 7);
              *((_QWORD*)v217 + 6) = *((_QWORD*)v210 + 6);
              *((_QWORD*)v217 + 7) = v228;
              *((_QWORD*)v217 + 5) = v227;
              *((_WORD*)v210 + 20) = 0;
              if ((v217[64] & 1) != 0 && *((_QWORD*)v217 + 10) != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v229 = 128;
                }
                else {
                  v229 = 56;
                }
                GameRoutine_1a0a4e0(GameData_2265ee0 + v229);
              }
              *((_QWORD*)v217 + 9) = *((_QWORD*)v210 + 9);
              v230 = *((_QWORD*)v210 + 8);
              *((_QWORD*)v217 + 10) = *((_QWORD*)v210 + 10);
              *((_QWORD*)v217 + 8) = v230;
              *((_WORD*)v210 + 32) = 0;
              *((_DWORD*)v217 + 24) = *((_DWORD*)v210 + 24);
              *((_DWORD*)v217 + 25) = *((_DWORD*)v210 + 25);
              v231 = *((_OWORD*)v217 + 6);
              *((_QWORD*)&v231 + 1) = *((unsigned int*)v210 + 26);
              *((_OWORD*)v217 + 6) = v231;
            }
          }
          else if (v224 != 0) {
            if ((v217[64] & 1) != 0 && *((_QWORD*)v217 + 10) != 0) {
              if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                v232 = 128;
              }
              else {
                v232 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v232);
            }
            if ((v217[40] & 1) != 0 && *((_QWORD*)v217 + 7) != 0) {
              if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                v233 = 128;
              }
              else {
                v233 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v233);
            }
            v217[112] = 0;
          }
          else {
            *((_DWORD*)v217 + 8) = *((_DWORD*)v210 + 8);
            v211 = *((_QWORD*)v210 + 5);
            v212 = *((_QWORD*)v210 + 7);
            *((_QWORD*)v217 + 6) = *((_QWORD*)v210 + 6);
            *((_QWORD*)v217 + 7) = v212;
            *((_QWORD*)v217 + 5) = v211;
            *((_QWORD*)v210 + 6) = 0;
            *((_QWORD*)v210 + 7) = 0;
            *((_QWORD*)v210 + 5) = 0;
            v213 = *((_QWORD*)v210 + 8);
            v214 = *((_QWORD*)v210 + 10);
            *((_QWORD*)v217 + 9) = *((_QWORD*)v210 + 9);
            *((_QWORD*)v217 + 10) = v214;
            *((_QWORD*)v217 + 8) = v213;
            *((_QWORD*)v210 + 9) = 0;
            *((_QWORD*)v210 + 10) = 0;
            *((_QWORD*)v210 + 8) = 0;
            v215 = *((_QWORD*)v210 + 13);
            *((_QWORD*)v217 + 12) = *((_QWORD*)v210 + 12);
            *((_QWORD*)v217 + 13) = v215;
            v217[112] = 1;
          }
        } while (v209 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
        v234 = a2 - 128;
        if (v210 == a2 - 128) {
          *(_QWORD*)v210 = v325;
          *((_QWORD*)v210 + 2) = v328;
          v274 = *((_OWORD*)v210 + 1);
          *((_QWORD*)&v274 + 1) = v331;
          *((_OWORD*)v210 + 1) = v274;
          result = GameRoutine_ee6c60(v210 + 32, &v332);
          goto LABEL_324;
        }
        *(_QWORD*)v210 = *((_QWORD*)a2 - 16);
        *((_DWORD*)v210 + 4) = *((_DWORD*)a2 - 28);
        *((_DWORD*)v210 + 5) = *((_DWORD*)a2 - 27);
        v235 = *((_OWORD*)v210 + 1);
        *((_QWORD*)&v235 + 1) = *((unsigned int*)a2 - 26);
        *((_OWORD*)v210 + 1) = v235;
        GameRoutine_ee6c60(v210 + 32, a2 - 96);
        *((_QWORD*)a2 - 16) = v325;
        *((_QWORD*)a2 - 14) = v328;
        v236 = *((_OWORD*)a2 - 7);
        *((_QWORD*)&v236 + 1) = v331;
        *((_OWORD*)a2 - 7) = v236;
        result = GameRoutine_ee6c60(a2 - 96, &v332);
        v237 = (v210 - v6 + 128) >> 7;
        v199 = v237 < 2;
        v238 = v237 - 2;
        if (!v199) {
          v239 = v238 >> 1;
          v240 = &v6[128 * (v238 >> 1)];
          v241 = *(_QWORD*)v240;
          if (*(unsigned __int16*)(*(_QWORD*)v240 + 16LL) <
              (unsigned int)*(unsigned __int16*)(*(_QWORD*)v210 + 16LL)) {
            break;
          }
        }
      LABEL_324:
        if (v341 == 1) {
          if ((v336 & 1) != 0 && v338 != 0) {
            if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
              v275 = 128;
            }
            else {
              v275 = 56;
            }
            result = GameRoutine_1a0a4e0(GameData_2265ee0 + v275);
          }
          if ((v333 & 1) != 0 && v335 != 0) {
            if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
              v276 = 128;
            }
            else {
              v276 = 56;
            }
            result = GameRoutine_1a0a4e0(GameData_2265ee0 + v276);
          }
        }
        a2 = v234;
        v199 = v8-- <= 2;
        if (v199) {
          return result;
        }
      }
      v342 = *(_QWORD*)v210;
      v243 = *((_QWORD*)v210 + 2);
      v242 = *((_QWORD*)v210 + 3);
      v354 = 0;
      LOBYTE(v345) = 0;
      v343 = v243;
      v344 = v242;
      if (v210[112] == 1) {
        v244 = *((_QWORD*)v210 + 7);
        v245 = *((_QWORD*)v210 + 8);
        v345 = *((_DWORD*)v210 + 8);
        v247 = *((_QWORD*)v210 + 5);
        v246 = *((_QWORD*)v210 + 6);
        v348 = v244;
        v346 = v247;
        v347 = v246;
        v248 = *((_QWORD*)v210 + 9);
        v249 = *((_QWORD*)v210 + 10);
        *((_QWORD*)v210 + 6) = 0;
        *((_QWORD*)v210 + 7) = 0;
        *((_QWORD*)v210 + 5) = 0;
        v349 = v245;
        v350 = v248;
        v351 = v249;
        v251 = *((_QWORD*)v210 + 12);
        v250 = *((_QWORD*)v210 + 13);
        *((_QWORD*)v210 + 9) = 0;
        *((_QWORD*)v210 + 10) = 0;
        *((_QWORD*)v210 + 8) = 0;
        v352 = v251;
        v353 = v250;
        v354 = 1;
        v241 = *(_QWORD*)v240;
      }
      while (1) {
        *(_QWORD*)v210 = v241;
        v252 = v240;
        *((_DWORD*)v210 + 4) = *((_DWORD*)v240 + 4);
        *((_DWORD*)v210 + 5) = *((_DWORD*)v240 + 5);
        v253 = *((_OWORD*)v210 + 1);
        DWORD2(v253) = *((_DWORD*)v240 + 6);
        v254 = (unsigned __int8)v210[112];
        *((_QWORD*)&v253 + 1) = DWORD2(v253);
        *((_OWORD*)v210 + 1) = v253;
        if (v254 == (unsigned __int8)v252[112]) {
          if (v254 == 0) {
            goto LABEL_306;
          }
          v255 = v210[40];
          *((_DWORD*)v210 + 8) = *((_DWORD*)v252 + 8);
          if ((v255 & 1) != 0 && *((_QWORD*)v210 + 7) != 0) {
            if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
              v256 = 128;
            }
            else {
              v256 = 56;
            }
            GameRoutine_1a0a4e0(GameData_2265ee0 + v256);
          }
          v257 = *((_QWORD*)v252 + 5);
          v258 = *((_QWORD*)v252 + 7);
          *((_QWORD*)v210 + 6) = *((_QWORD*)v252 + 6);
          *((_QWORD*)v210 + 7) = v258;
          *((_QWORD*)v210 + 5) = v257;
          *((_WORD*)v252 + 20) = 0;
          if ((v210[64] & 1) != 0 && *((_QWORD*)v210 + 10) != 0) {
            if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
              v259 = 128;
            }
            else {
              v259 = 56;
            }
            GameRoutine_1a0a4e0(GameData_2265ee0 + v259);
          }
          *((_QWORD*)v210 + 9) = *((_QWORD*)v252 + 9);
          v260 = *((_QWORD*)v252 + 8);
          *((_QWORD*)v210 + 10) = *((_QWORD*)v252 + 10);
          *((_QWORD*)v210 + 8) = v260;
          *((_WORD*)v252 + 32) = 0;
          *((_DWORD*)v210 + 24) = *((_DWORD*)v252 + 24);
          *((_DWORD*)v210 + 25) = *((_DWORD*)v252 + 25);
          v261 = *((_OWORD*)v210 + 6);
          *((_QWORD*)&v261 + 1) = *((unsigned int*)v252 + 26);
          *((_OWORD*)v210 + 6) = v261;
          v262 = v342;
          if (v239 == 0) {
          LABEL_310:
            *(_QWORD*)v252 = v262;
            v270 = v344;
            *((_QWORD*)v252 + 2) = v343;
            v271 = *((_OWORD*)v252 + 1);
            *((_QWORD*)&v271 + 1) = v270;
            *((_OWORD*)v252 + 1) = v271;
            result = GameRoutine_ee6c60(v252 + 32, &v345);
            if (v354 == 1) {
              if ((v349 & 1) != 0 && v351 != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v272 = 128;
                }
                else {
                  v272 = 56;
                }
                result = GameRoutine_1a0a4e0(GameData_2265ee0 + v272);
              }
              if ((v346 & 1) != 0 && v348 != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v273 = 128;
                }
                else {
                  v273 = 56;
                }
                result = GameRoutine_1a0a4e0(GameData_2265ee0 + v273);
              }
            }
            goto LABEL_324;
          }
        }
        else {
          if (v254 != 0) {
            if ((v210[64] & 1) != 0 && *((_QWORD*)v210 + 10) != 0) {
              if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                v263 = 128;
              }
              else {
                v263 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v263);
            }
            if ((v210[40] & 1) != 0 && *((_QWORD*)v210 + 7) != 0) {
              if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                v264 = 128;
              }
              else {
                v264 = 56;
              }
              GameRoutine_1a0a4e0(GameData_2265ee0 + v264);
            }
            v210[112] = 0;
          LABEL_306:
            v262 = v342;
            if (v239 == 0) {
              goto LABEL_310;
            }
            goto LABEL_307;
          }
          *((_DWORD*)v210 + 8) = *((_DWORD*)v252 + 8);
          v265 = *((_QWORD*)v252 + 5);
          v266 = *((_QWORD*)v252 + 7);
          *((_QWORD*)v210 + 6) = *((_QWORD*)v252 + 6);
          *((_QWORD*)v210 + 7) = v266;
          *((_QWORD*)v210 + 5) = v265;
          *((_QWORD*)v252 + 6) = 0;
          *((_QWORD*)v252 + 7) = 0;
          *((_QWORD*)v252 + 5) = 0;
          v267 = *((_QWORD*)v252 + 8);
          v268 = *((_QWORD*)v252 + 10);
          *((_QWORD*)v210 + 9) = *((_QWORD*)v252 + 9);
          *((_QWORD*)v210 + 10) = v268;
          *((_QWORD*)v210 + 8) = v267;
          *((_QWORD*)v252 + 9) = 0;
          *((_QWORD*)v252 + 10) = 0;
          *((_QWORD*)v252 + 8) = 0;
          v269 = *((_QWORD*)v252 + 13);
          *((_QWORD*)v210 + 12) = *((_QWORD*)v252 + 12);
          *((_QWORD*)v210 + 13) = v269;
          v210[112] = 1;
          v262 = v342;
          if (v239 == 0) {
            goto LABEL_310;
          }
        }
      LABEL_307:
        v210 = v252;
        v239 = (v239 - 1) >> 1;
        v240 = &v6[128 * v239];
        v241 = *(_QWORD*)v240;
        if (*(unsigned __int16*)(*(_QWORD*)v240 + 16LL) >=
            (unsigned int)*(unsigned __int16*)(v262 + 16)) {
          goto LABEL_310;
        }
      }
    }
    v10 = &v7[128 * ((unsigned __int64)v8 >> 1)];
    if ((unsigned __int64)v8 < 0x81) {
      GameRoutine_ee5850(&v6[128 * ((unsigned __int64)v8 >> 1)], v6, v321);
    }
    else {
      GameRoutine_ee5850(v6, &v6[128 * ((unsigned __int64)v8 >> 1)], v321);
      GameRoutine_ee5850(v6 + 128, v10 - 128, a2 - 256);
      GameRoutine_ee5850(v6 + 256, v10 + 128, a2 - 384);
      GameRoutine_ee5850(v10 - 128, &v6[128 * ((unsigned __int64)v8 >> 1)],
                         v10 + 128);
      v12 = *((_QWORD*)v6 + 2);
      v11 = *((_QWORD*)v6 + 3);
      v13 = *(_QWORD*)v6;
      v354 = 0;
      LOBYTE(v345) = 0;
      v343 = v12;
      v344 = v11;
      LODWORD(v11) = (unsigned __int8)v6[112];
      v342 = v13;
      if ((_DWORD)v11 == 1) {
        v14 = *((_QWORD*)v6 + 7);
        v15 = *((_QWORD*)v6 + 8);
        v345 = *((_DWORD*)v6 + 8);
        v17 = *((_QWORD*)v6 + 5);
        v16 = *((_QWORD*)v6 + 6);
        v348 = v14;
        v346 = v17;
        v347 = v16;
        v18 = *((_QWORD*)v6 + 9);
        v19 = *((_QWORD*)v6 + 10);
        *((_QWORD*)v6 + 6) = 0;
        *((_QWORD*)v6 + 7) = 0;
        *((_QWORD*)v6 + 5) = 0;
        v349 = v15;
        v350 = v18;
        v351 = v19;
        v20 = *((_QWORD*)v6 + 13);
        *((_QWORD*)v6 + 9) = 0;
        *((_QWORD*)v6 + 10) = 0;
        *((_QWORD*)v6 + 8) = 0;
        v353 = v20;
        v21 = *((_QWORD*)v6 + 12);
        v354 = 1;
        v352 = v21;
      }
      v22 = *((_OWORD*)v10 + 1);
      *(_QWORD*)v6 = *(_QWORD*)v10;
      *((_QWORD*)v6 + 2) = v22;
      v23 = *((_OWORD*)v6 + 1);
      *((_QWORD*)&v23 + 1) = DWORD2(v22);
      *((_OWORD*)v6 + 1) = v23;
      GameRoutine_ee6c60(v6 + 32, v10 + 32);
      *(_QWORD*)v10 = v13;
      v24 = v344;
      *((_QWORD*)v10 + 2) = v343;
      v25 = *((_OWORD*)v10 + 1);
      *((_QWORD*)&v25 + 1) = v24;
      *((_OWORD*)v10 + 1) = v25;
      GameRoutine_ee6c60(v10 + 32, &v345);
      if (v354 == 1) {
        if ((v349 & 1) != 0 && v351 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v26 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26);
        }
        if ((v346 & 1) != 0 && v348 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v27 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27);
        }
      }
    }
    v28 = *(_QWORD*)v6;
    --a3;
    if ((a4 & 1) != 0 ||
        (v29 = *(unsigned __int16*)(v28 + 16),
         *(unsigned __int16*)(*((_QWORD*)v6 - 16) + 16LL) < v29)) {
      v31 = *((_QWORD*)v6 + 2);
      v30 = *((_QWORD*)v6 + 3);
      v341 = 0;
      v323 = v28;
      LOBYTE(v332) = 0;
      v326 = v31;
      v329 = v30;
      if (v6[112] == 1) {
        v32 = *((_QWORD*)v6 + 7);
        v33 = *((_QWORD*)v6 + 8);
        v332 = *((_DWORD*)v6 + 8);
        v35 = *((_QWORD*)v6 + 5);
        v34 = *((_QWORD*)v6 + 6);
        v335 = v32;
        v333 = v35;
        v334 = v34;
        v36 = *((_QWORD*)v6 + 9);
        v37 = *((_QWORD*)v6 + 10);
        *((_QWORD*)v6 + 6) = 0;
        *((_QWORD*)v6 + 7) = 0;
        *((_QWORD*)v6 + 5) = 0;
        v336 = v33;
        v337 = v36;
        v338 = v37;
        v38 = *((_QWORD*)v6 + 13);
        *((_QWORD*)v6 + 9) = 0;
        *((_QWORD*)v6 + 10) = 0;
        *((_QWORD*)v6 + 8) = 0;
        v340 = v38;
        v39 = *((_QWORD*)v6 + 12);
        v341 = 1;
        v339 = v39;
      }
      v40 = *(unsigned __int16*)(v28 + 16);
      v41 = 0;
      do {
        v42 = &v6[v41];
        v41 += 128;
        v43 = *((_QWORD*)v42 + 16);
      } while (*(unsigned __int16*)(v43 + 16) < v40);
      v44 = &v6[v41];
      v45 = a2;
      if (v41 == 128) {
        v45 = a2;
        do {
          if (v44 >= v45) {
            break;
          }
          v47 = *((_QWORD*)v45 - 16);
          v45 -= 128;
        } while (*(unsigned __int16*)(v47 + 16) >= v40);
      }
      else {
        do {
          v46 = *((_QWORD*)v45 - 16);
          v45 -= 128;
        } while (*(unsigned __int16*)(v46 + 16) >= v40);
      }
      v7 = &v6[v41];
      if (v44 < v45) {
        v48 = (unsigned __int64)v45;
        do {
          v50 = *((_QWORD*)v7 + 2);
          v49 = *((_QWORD*)v7 + 3);
          v354 = 0;
          v342 = v43;
          LOBYTE(v345) = 0;
          v343 = v50;
          v344 = v49;
          if (v7[112] == 1) {
            v51 = *((_QWORD*)v7 + 7);
            v52 = *((_QWORD*)v7 + 8);
            v345 = *((_DWORD*)v7 + 8);
            v54 = *((_QWORD*)v7 + 5);
            v53 = *((_QWORD*)v7 + 6);
            v348 = v51;
            v346 = v54;
            v347 = v53;
            v55 = *((_QWORD*)v7 + 9);
            v56 = *((_QWORD*)v7 + 10);
            *((_QWORD*)v7 + 6) = 0;
            *((_QWORD*)v7 + 7) = 0;
            *((_QWORD*)v7 + 5) = 0;
            v349 = v52;
            v350 = v55;
            v351 = v56;
            v57 = *((_QWORD*)v7 + 13);
            *((_QWORD*)v7 + 9) = 0;
            *((_QWORD*)v7 + 10) = 0;
            *((_QWORD*)v7 + 8) = 0;
            v353 = v57;
            v58 = *((_QWORD*)v7 + 12);
            v354 = 1;
            v352 = v58;
          }
          *(_QWORD*)v7 = *(_QWORD*)v48;
          *((_DWORD*)v7 + 4) = *(_DWORD*)(v48 + 16);
          *((_DWORD*)v7 + 5) = *(_DWORD*)(v48 + 20);
          v59 = *((_OWORD*)v7 + 1);
          *((_QWORD*)&v59 + 1) = *(unsigned int*)(v48 + 24);
          *((_OWORD*)v7 + 1) = v59;
          GameRoutine_ee6c60(v7 + 32, v48 + 32);
          *(_QWORD*)v48 = v43;
          v60 = v344;
          *(_QWORD*)(v48 + 16) = v343;
          v61 = *(_OWORD*)(v48 + 16);
          *((_QWORD*)&v61 + 1) = v60;
          *(_OWORD*)(v48 + 16) = v61;
          GameRoutine_ee6c60(v48 + 32, &v345);
          if (v354 == 1) {
            if ((v349 & 1) != 0 && v351 != 0) {
              v62 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v62 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v62);
            }
            if ((v346 & 1) != 0 && v348 != 0) {
              v63 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v63 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v63);
            }
          }
          v28 = v323;
          v64 = *(unsigned __int16*)(v323 + 16);
          do {
            v65 = *((_QWORD*)v7 + 16);
            v7 += 128;
            v43 = v65;
          } while (*(unsigned __int16*)(v65 + 16) < v64);
          do {
            v66 = *(_QWORD*)(v48 - 128);
            v48 -= 128LL;
          } while (*(unsigned __int16*)(v66 + 16) >= v64);
        } while ((unsigned __int64)v7 < v48);
      }
      if (v6 != v7 - 128) {
        *(_QWORD*)v6 = *((_QWORD*)v7 - 16);
        *((_DWORD*)v6 + 4) = *((_DWORD*)v7 - 28);
        *((_DWORD*)v6 + 5) = *((_DWORD*)v7 - 27);
        v67 = *((_OWORD*)v6 + 1);
        *((_QWORD*)&v67 + 1) = *((unsigned int*)v7 - 26);
        *((_OWORD*)v6 + 1) = v67;
        GameRoutine_ee6c60(v6 + 32, v7 - 96);
        v28 = v323;
      }
      *((_QWORD*)v7 - 16) = v28;
      *((_QWORD*)v7 - 14) = v326;
      v68 = *((_OWORD*)v7 - 7);
      *((_QWORD*)&v68 + 1) = v329;
      *((_OWORD*)v7 - 7) = v68;
      GameRoutine_ee6c60(v7 - 96, &v332);
      if (v341 == 1) {
        if ((v336 & 1) != 0 && v338 != 0) {
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v69 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v69);
        }
        if ((v333 & 1) != 0 && v335 != 0) {
          v70 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v70 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v70);
        }
      }
      if (v44 < v45) {
      LABEL_74:
        result = GameHr_ee3be0(v6, v7 - 128, a3, a4 & 1);
        a4 = 0;
      }
      else {
        v71 = GameRoutine_ee6820(v6, v7 - 128);
        result = GameRoutine_ee6820(v7, a2);
        if ((result & 1) != 0) {
          a2 = v7 - 128;
          if ((v71 & 1) != 0) {
            return result;
          }
          goto LABEL_2;
        }
        if ((v71 & 1) == 0) {
          goto LABEL_74;
        }
      }
    }
    else {
      v73 = *((_QWORD*)v6 + 2);
      v72 = *((_QWORD*)v6 + 3);
      v341 = 0;
      v324 = v28;
      LOBYTE(v332) = 0;
      v327 = v73;
      v330 = v72;
      if (v6[112] == 1) {
        v74 = *((_QWORD*)v6 + 7);
        v75 = *((_QWORD*)v6 + 8);
        v332 = *((_DWORD*)v6 + 8);
        v77 = *((_QWORD*)v6 + 5);
        v76 = *((_QWORD*)v6 + 6);
        v335 = v74;
        v333 = v77;
        v334 = v76;
        v78 = *((_QWORD*)v6 + 9);
        v79 = *((_QWORD*)v6 + 10);
        *((_QWORD*)v6 + 6) = 0;
        *((_QWORD*)v6 + 7) = 0;
        *((_QWORD*)v6 + 5) = 0;
        v336 = v75;
        v337 = v78;
        v338 = v79;
        v80 = *((_QWORD*)v6 + 13);
        *((_QWORD*)v6 + 9) = 0;
        *((_QWORD*)v6 + 10) = 0;
        *((_QWORD*)v6 + 8) = 0;
        v340 = v80;
        v81 = *((_QWORD*)v6 + 12);
        v341 = 1;
        v339 = v81;
        v29 = *(unsigned __int16*)(v28 + 16);
      }
      if (v29 >= *(unsigned __int16*)(*(_QWORD*)v321 + 16LL)) {
        v83 = v6 + 128;
        do {
          v7 = v83;
          if (v83 >= a2) {
            break;
          }
          v83 += 128;
        } while (v29 >= *(unsigned __int16*)(*(_QWORD*)v7 + 16LL));
      }
      else {
        v7 = v6;
        do {
          v82 = *((_QWORD*)v7 + 16);
          v7 += 128;
        } while (v29 >= *(unsigned __int16*)(v82 + 16));
      }
      v84 = a2;
      if (v7 < a2) {
        v84 = a2;
        do {
          v85 = *((_QWORD*)v84 - 16);
          v84 -= 128;
        } while (v29 < *(unsigned __int16*)(v85 + 16));
      }
      if (v7 < v84) {
        v86 = *(_QWORD*)v7;
        do {
          v88 = *((_QWORD*)v7 + 2);
          v87 = *((_QWORD*)v7 + 3);
          v354 = 0;
          v342 = v86;
          LOBYTE(v345) = 0;
          v343 = v88;
          v344 = v87;
          if (v7[112] == 1) {
            v89 = *((_QWORD*)v7 + 7);
            v90 = *((_QWORD*)v7 + 8);
            v345 = *((_DWORD*)v7 + 8);
            v92 = *((_QWORD*)v7 + 5);
            v91 = *((_QWORD*)v7 + 6);
            v348 = v89;
            v346 = v92;
            v347 = v91;
            v93 = *((_QWORD*)v7 + 9);
            v94 = *((_QWORD*)v7 + 10);
            *((_QWORD*)v7 + 6) = 0;
            *((_QWORD*)v7 + 7) = 0;
            *((_QWORD*)v7 + 5) = 0;
            v349 = v90;
            v350 = v93;
            v351 = v94;
            v95 = *((_QWORD*)v7 + 13);
            *((_QWORD*)v7 + 9) = 0;
            *((_QWORD*)v7 + 10) = 0;
            *((_QWORD*)v7 + 8) = 0;
            v353 = v95;
            v96 = *((_QWORD*)v7 + 12);
            v354 = 1;
            v352 = v96;
          }
          *(_QWORD*)v7 = *(_QWORD*)v84;
          *((_DWORD*)v7 + 4) = *((_DWORD*)v84 + 4);
          *((_DWORD*)v7 + 5) = *((_DWORD*)v84 + 5);
          v97 = *((_OWORD*)v7 + 1);
          *((_QWORD*)&v97 + 1) = *((unsigned int*)v84 + 6);
          *((_OWORD*)v7 + 1) = v97;
          GameRoutine_ee6c60(v7 + 32, v84 + 32);
          *(_QWORD*)v84 = v86;
          v98 = v344;
          *((_QWORD*)v84 + 2) = v343;
          v99 = *((_OWORD*)v84 + 1);
          *((_QWORD*)&v99 + 1) = v98;
          *((_OWORD*)v84 + 1) = v99;
          GameRoutine_ee6c60(v84 + 32, &v345);
          if (v354 == 1) {
            if ((v349 & 1) != 0 && v351 != 0) {
              v100 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v100 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v100);
            }
            if ((v346 & 1) != 0 && v348 != 0) {
              v101 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v101 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v101);
            }
          }
          v28 = v324;
          v102 = *(unsigned __int16*)(v324 + 16);
          do {
            v103 = *((_QWORD*)v7 + 16);
            v7 += 128;
            v86 = v103;
          } while (v102 >= *(unsigned __int16*)(v103 + 16));
          do {
            v104 = *((_QWORD*)v84 - 16);
            v84 -= 128;
          } while (v102 < *(unsigned __int16*)(v104 + 16));
        } while (v7 < v84);
      }
      if (v6 != v7 - 128) {
        *(_QWORD*)v6 = *((_QWORD*)v7 - 16);
        *((_DWORD*)v6 + 4) = *((_DWORD*)v7 - 28);
        *((_DWORD*)v6 + 5) = *((_DWORD*)v7 - 27);
        v105 = *((_OWORD*)v6 + 1);
        *((_QWORD*)&v105 + 1) = *((unsigned int*)v7 - 26);
        *((_OWORD*)v6 + 1) = v105;
        GameRoutine_ee6c60(v6 + 32, v7 - 96);
        v28 = v324;
      }
      *((_QWORD*)v7 - 16) = v28;
      *((_QWORD*)v7 - 14) = v327;
      v106 = *((_OWORD*)v7 - 7);
      *((_QWORD*)&v106 + 1) = v330;
      *((_OWORD*)v7 - 7) = v106;
      result = GameRoutine_ee6c60(v7 - 96, &v332);
      if (v341 == 1) {
        if ((v336 & 1) != 0 && v338 != 0) {
          v107 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v107 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v107);
        }
        if ((v333 & 1) != 0 && v335 != 0) {
          v108 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v108 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v108);
        }
      }
      a4 = 0;
    }
  }
  if ((a4 & 1) == 0) {
    if (v7 != a2) {
      v277 = v7 + 128;
      if (v7 + 128 != a2) {
        v278 = (__int64*)(v7 + 64);
        do {
          v279 = v277;
          if (*(unsigned __int16*)(*((_QWORD*)v6 + 16) + 16LL) <
              (unsigned int)*(unsigned __int16*)(*(_QWORD*)v6 + 16LL)) {
            v342 = *((_QWORD*)v6 + 16);
            v280 = *((_QWORD*)v6 + 18);
            v281 = *((_QWORD*)v6 + 19);
            LOBYTE(v345) = 0;
            v354 = 0;
            v343 = v280;
            v344 = v281;
            if (v6[240] == 1) {
              v282 = *((_DWORD*)v6 + 40);
              v354 = 1;
              v345 = v282;
              v283 = *((_QWORD*)v6 + 21);
              v284 = *((_QWORD*)v6 + 22);
              *((_QWORD*)v6 + 21) = 0;
              *((_QWORD*)v6 + 22) = 0;
              v346 = v283;
              v347 = v284;
              v285 = *((_QWORD*)v6 + 23);
              v286 = *((_QWORD*)v6 + 24);
              *((_QWORD*)v6 + 23) = 0;
              *((_QWORD*)v6 + 24) = 0;
              v348 = v285;
              v349 = v286;
              v287 = *((_QWORD*)v6 + 25);
              v288 = *((_QWORD*)v6 + 26);
              *((_QWORD*)v6 + 25) = 0;
              *((_QWORD*)v6 + 26) = 0;
              v350 = v287;
              v351 = v288;
              v289 = *((_QWORD*)v6 + 29);
              v352 = *((_QWORD*)v6 + 28);
              v353 = v289;
            }
            v290 = *(_QWORD*)v6;
            v291 = v278;
            do {
              v300 = *((_DWORD*)v291 - 12);
              v301 = *((_DWORD*)v291 - 11);
              v291[8] = v290;
              v302 = *((unsigned __int8*)v291 + 48);
              *((_DWORD*)v291 + 20) = v300;
              *((_DWORD*)v291 + 21) = v301;
              v303 = *((_OWORD*)v291 + 5);
              v304 = *((unsigned __int8*)v291 + 176);
              *((_QWORD*)&v303 + 1) = *((unsigned int*)v291 - 10);
              *((_OWORD*)v291 + 5) = v303;
              if (v304 == v302) {
                if (v304 != 0) {
                  v305 = *((_BYTE*)v291 + 104);
                  *((_DWORD*)v291 + 24) = *((_DWORD*)v291 - 8);
                  if ((v305 & 1) != 0 && v291[15] != 0) {
                    if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                      v306 = 128;
                    }
                    else {
                      v306 = 56;
                    }
                    GameRoutine_1a0a4e0(GameData_2265ee0 + v306);
                  }
                  v307 = *(v291 - 2);
                  v308 = *(v291 - 1);
                  v291[13] = *(v291 - 3);
                  v291[14] = v307;
                  v291[15] = v308;
                  LOBYTE(v308) = *((_BYTE*)v291 + 128);
                  *((_WORD*)v291 - 12) = 0;
                  if ((v308 & 1) != 0 && v291[18] != 0) {
                    if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                      v309 = 128;
                    }
                    else {
                      v309 = 56;
                    }
                    GameRoutine_1a0a4e0(GameData_2265ee0 + v309);
                  }
                  v310 = *((_DWORD*)v291 + 8);
                  v311 = *((_DWORD*)v291 + 9);
                  v312 = *v291;
                  v313 = v291[1];
                  *(_WORD*)v291 = 0;
                  v291[16] = v312;
                  v291[17] = v313;
                  v314 = v291[2];
                  *((_DWORD*)v291 + 40) = v310;
                  *((_DWORD*)v291 + 41) = v311;
                  v315 = *((_OWORD*)v291 + 10);
                  v291[18] = v314;
                  *((_QWORD*)&v315 + 1) = *((unsigned int*)v291 + 10);
                  *((_OWORD*)v291 + 10) = v315;
                }
              }
              else if (v304 != 0) {
                if ((v291[16] & 1) != 0 && v291[18] != 0) {
                  if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                    v316 = 128;
                  }
                  else {
                    v316 = 56;
                  }
                  GameRoutine_1a0a4e0(GameData_2265ee0 + v316);
                }
                if ((v291[13] & 1) != 0 && v291[15] != 0) {
                  if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                    v317 = 128;
                  }
                  else {
                    v317 = 56;
                  }
                  GameRoutine_1a0a4e0(GameData_2265ee0 + v317);
                }
                *((_BYTE*)v291 + 176) = 0;
              }
              else {
                v292 = *((_DWORD*)v291 - 8);
                *((_BYTE*)v291 + 176) = 1;
                *((_DWORD*)v291 + 24) = v292;
                v293 = *(v291 - 3);
                v294 = *(v291 - 2);
                *(v291 - 3) = 0;
                *(v291 - 2) = 0;
                v291[13] = v293;
                v291[14] = v294;
                v295 = *(v291 - 1);
                v296 = *v291;
                *(v291 - 1) = 0;
                *v291 = 0;
                v291[15] = v295;
                v291[16] = v296;
                v297 = v291[1];
                v298 = v291[2];
                v291[1] = 0;
                v291[2] = 0;
                v291[17] = v297;
                v291[18] = v298;
                v299 = v291[5];
                v291[20] = v291[4];
                v291[21] = v299;
              }
              v290 = *(v291 - 24);
              v291 -= 16;
            } while (*(unsigned __int16*)(v342 + 16) <
                     (unsigned int)*(unsigned __int16*)(v290 + 16));
            v291[8] = v342;
            v291[10] = v343;
            v318 = *((_OWORD*)v291 + 5);
            *((_QWORD*)&v318 + 1) = (unsigned int)v344;
            *((_OWORD*)v291 + 5) = v318;
            result = GameRoutine_ee6c60(v291 + 12, &v345);
            if (v354 == 1) {
              if ((v349 & 1) != 0 && v351 != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v319 = 128;
                }
                else {
                  v319 = 56;
                }
                result = GameRoutine_1a0a4e0(GameData_2265ee0 + v319);
              }
              if ((v346 & 1) != 0 && v348 != 0) {
                if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                  v320 = 128;
                }
                else {
                  v320 = 56;
                }
                result = GameRoutine_1a0a4e0(GameData_2265ee0 + v320);
              }
            }
          }
          v277 = v279 + 16;
          v278 += 16;
          v6 = (char*)v279;
        } while (v279 + 16 != (_QWORD*)a2);
      }
    }
    return result;
  }
  if (v7 == a2) {
    return result;
  }
  v124 = (__int64*)(v7 + 128);
  if (v7 + 128 == a2) {
    return result;
  }
  v125 = 0;
  v126 = v7;
LABEL_144:
  v127 = v124;
  if (*(unsigned __int16*)(*((_QWORD*)v126 + 16) + 16LL) >=
      (unsigned int)*(unsigned __int16*)(*(_QWORD*)v126 + 16LL)) {
    goto LABEL_143;
  }
  v342 = *((_QWORD*)v126 + 16);
  v128 = *((_QWORD*)v126 + 18);
  v129 = *((_QWORD*)v126 + 19);
  LOBYTE(v345) = 0;
  v354 = 0;
  v343 = v128;
  v344 = v129;
  if (v126[240] == 1) {
    v345 = *((_DWORD*)v126 + 40);
    v130 = *((_QWORD*)v126 + 21);
    v131 = *((_QWORD*)v126 + 22);
    *((_QWORD*)v126 + 21) = 0;
    *((_QWORD*)v126 + 22) = 0;
    v346 = v130;
    v347 = v131;
    v132 = *((_QWORD*)v126 + 23);
    v133 = *((_QWORD*)v126 + 24);
    *((_QWORD*)v126 + 23) = 0;
    *((_QWORD*)v126 + 24) = 0;
    v348 = v132;
    v349 = v133;
    v134 = *((_QWORD*)v126 + 25);
    v135 = *((_QWORD*)v126 + 26);
    *((_QWORD*)v126 + 25) = 0;
    *((_QWORD*)v126 + 26) = 0;
    v350 = v134;
    v351 = v135;
    v136 = *((_QWORD*)v126 + 29);
    v352 = *((_QWORD*)v126 + 28);
    v353 = v136;
    v354 = 1;
  }
  v137 = *(_QWORD*)v126;
  v138 = v125;
  while (2) {
    v139 = &v6[v138];
    v140 = v138;
    v141 = *(_DWORD*)&v6[v138 + 16];
    v142 = *(_DWORD*)&v6[v138 + 20];
    *((_QWORD*)v139 + 16) = v137;
    v143 = (unsigned __int8)v6[v138 + 112];
    *((_DWORD*)v139 + 36) = v141;
    *((_DWORD*)v139 + 37) = v142;
    v144 = *(_OWORD*)&v6[v138 + 144];
    v145 = (unsigned __int8)v6[v138 + 240];
    *((_QWORD*)&v144 + 1) = *(unsigned int*)&v6[v138 + 24];
    *((_OWORD*)v139 + 9) = v144;
    if (v145 != v143) {
      if (v145 == 0) {
        v166 = &v6[v138];
        *((_DWORD*)v139 + 40) = *((_DWORD*)v139 + 8);
        v167 = *(_QWORD*)&v6[v138 + 40];
        v168 = *(_QWORD*)&v6[v138 + 48];
        *((_QWORD*)v166 + 5) = 0;
        *((_QWORD*)v166 + 6) = 0;
        *((_QWORD*)v166 + 21) = v167;
        *((_QWORD*)v166 + 22) = v168;
        v169 = *(_QWORD*)&v6[v140 + 56];
        v170 = *(_QWORD*)&v6[v140 + 64];
        *((_QWORD*)v166 + 7) = 0;
        *((_QWORD*)v166 + 8) = 0;
        *((_QWORD*)v166 + 23) = v169;
        *((_QWORD*)v166 + 24) = v170;
        v171 = *(_QWORD*)&v6[v140 + 72];
        v172 = *(_QWORD*)&v6[v140 + 80];
        *((_QWORD*)v166 + 9) = 0;
        *((_QWORD*)v166 + 10) = 0;
        *((_QWORD*)v166 + 25) = v171;
        *((_QWORD*)v166 + 26) = v172;
        v173 = *(_QWORD*)&v6[v140 + 104];
        *((_QWORD*)v166 + 28) = *(_QWORD*)&v6[v140 + 96];
        *((_QWORD*)v166 + 29) = v173;
        v139[240] = 1;
        v162 = v342;
        if (v140 == 0) {
          goto LABEL_182;
        }
        goto LABEL_179;
      }
      v163 = &v6[v138];
      if ((v6[v138 + 192] & 1) != 0 && *((_QWORD*)v163 + 26) != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v164 = 128;
        }
        else {
          v164 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v164);
      }
      if ((v163[168] & 1) != 0 && *(_QWORD*)&v6[v140 + 184] != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v165 = 128;
        }
        else {
          v165 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v165);
      }
      v139[240] = 0;
    }
    else if (v145 != 0) {
      v146 = &v6[v138];
      *((_DWORD*)v139 + 40) = *((_DWORD*)v139 + 8);
      v147 = &v6[v138 + 168];
      if ((*v147 & 1) != 0 && *((_QWORD*)v146 + 23) != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v148 = 128;
        }
        else {
          v148 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v148);
      }
      v149 = *(_QWORD*)&v6[v140 + 40];
      v150 = *(_QWORD*)&v6[v140 + 48];
      v6[v140 + 40] = 0;
      *(_QWORD*)v147 = v149;
      *(_QWORD*)&v6[v140 + 176] = v150;
      v151 = *(_QWORD*)&v6[v140 + 56];
      v153 = v146[192];
      v152 = v146 + 192;
      *((_BYTE*)v152 - 151) = 0;
      *(_QWORD*)&v6[v140 + 184] = v151;
      if ((v153 & 1) != 0 && *(_QWORD*)&v6[v140 + 208] != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v154 = 128;
        }
        else {
          v154 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v154);
      }
      v155 = &v6[v140];
      v156 = *(_DWORD*)&v6[v140 + 96];
      v157 = *(_DWORD*)&v6[v140 + 100];
      v158 = *(_QWORD*)&v6[v140 + 64];
      v159 = *(_QWORD*)&v6[v140 + 72];
      *((_WORD*)v155 + 32) = 0;
      *v152 = v158;
      v152[1] = v159;
      v160 = *(_QWORD*)&v6[v140 + 80];
      *((_DWORD*)v155 + 56) = v156;
      *((_DWORD*)v155 + 57) = v157;
      v161 = *(_OWORD*)&v6[v140 + 224];
      v152[2] = v160;
      *((_QWORD*)&v161 + 1) = *(unsigned int*)&v6[v140 + 104];
      *((_OWORD*)v155 + 14) = v161;
      v162 = v342;
      if (v140 != 0) {
      LABEL_179:
        v138 = v140 - 128;
        v137 = *(_QWORD*)&v6[v140 - 128];
        if (*(unsigned __int16*)(v162 + 16) >=
            (unsigned int)*(unsigned __int16*)(v137 + 16)) {
          v174 = &v6[v140];
          goto LABEL_183;
        }
        continue;
      }
    LABEL_182:
      v174 = v6;
    LABEL_183:
      *(_QWORD*)v174 = v162;
      *((_QWORD*)v174 + 2) = v343;
      v175 = *((_OWORD*)v174 + 1);
      *((_QWORD*)&v175 + 1) = (unsigned int)v344;
      *((_OWORD*)v174 + 1) = v175;
      result = GameRoutine_ee6c60(&v6[v140 + 32], &v345);
      if (v354 == 1) {
        if ((v349 & 1) != 0 && v351 != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v176 = 128;
          }
          else {
            v176 = 56;
          }
          result = GameRoutine_1a0a4e0(GameData_2265ee0 + v176);
        }
        if ((v346 & 1) != 0 && v348 != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v177 = 128;
          }
          else {
            v177 = 56;
          }
          result = GameRoutine_1a0a4e0(GameData_2265ee0 + v177);
        }
      }
    LABEL_143:
      v124 = v127 + 16;
      v125 += 128;
      v126 = (char*)v127;
      if (v127 + 16 != (__int64*)a2) {
        goto LABEL_144;
      }
      return result;
    }
    break;
  }
  v162 = v342;
  if (v140 == 0) {
    goto LABEL_182;
  }
  goto LABEL_179;
}

__int64 GameHr_ee6e80(__int64 result, char* a2, __int64 a3, char a4)
{
  char* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  char* v84;
  __int64 v85;
  char* v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  __int64 v92;
  unsigned int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  char* v104;
  char* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  unsigned int v132;
  __int64 v133;
  unsigned int v134;
  __int64 v135;
  char* v136;
  bool v138;
  __int64 v139;
  char* v140;
  char* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  char* v150;
  __int64 v151;
  __int64 v152;
  signed __int64 v153;
  signed __int64 v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  __int64 v158;
  char* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  char* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  bool v167;
  __int64 v168;
  __int64 v169;
  char* v170;
  __int64 v171;
  char* v172;
  char* v173;
  char* v174;
  __int64 v175;
  char* v176;
  __int64 v177;
  unsigned int v178;
  unsigned int v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  char* v190;
  __int64 v191;
  __int64 v192;
  char* v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64* v202;
  char* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  char* v214;

  v6 = (char*)result;
LABEL_2:
  v7 = v6;
  while (1) {
    v6 = v7;
    v8 = (a2 - v7) >> 4;
    v9 = v8 - 2;
    if (v8 > 2) {
      break;
    }
    if ((unsigned __int64)v8 < 2) {
      return result;
    }
    if (v8 == 2) {
      v128 = *((_QWORD*)a2 - 2);
      v129 = *(_QWORD*)v6;
      if (*(unsigned __int16*)(*(_QWORD*)(v128 + 32) + 16LL) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) +
                                             16LL)) {
        *(_QWORD*)v6 = v128;
        *((_QWORD*)a2 - 2) = v129;
        goto LABEL_123;
      }
      return result;
    }
  LABEL_10:
    if (v8 <= 23) {
      v136 = v6 + 16;
      v138 = v6 == a2 || v136 == a2;
      if ((a4 & 1) != 0) {
        if (!v138) {
          v139 = 0;
          v140 = v6;
          do {
            v141 = v140;
            v140 = v136;
            v142 = *((_QWORD*)v141 + 2);
            v143 = *(_QWORD*)v141;
            if (*(unsigned __int16*)(*(_QWORD*)(v142 + 32) + 16LL) <
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v141 + 32LL) +
                                       16LL)) {
              v144 = *((_QWORD*)v141 + 3);
              *(_QWORD*)v140 = 0;
              *((_QWORD*)v140 + 1) = 0;
              v145 = v139;
              while (1) {
                v146 = &v6[v145];
                v147 = *(_QWORD*)&v6[v145 + 8];
                v148 = *(_QWORD*)&v6[v145 + 24];
                *(_QWORD*)v146 = 0;
                *((_QWORD*)v146 + 1) = 0;
                *((_QWORD*)v146 + 2) = v143;
                *((_QWORD*)v146 + 3) = v147;
                if (v148 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
                  result = GameRoutine_1a09c50(v148);
                }
                if (v145 == 0) {
                  break;
                }
                v149 = &v6[v145];
                v145 -= 16;
                v143 = *((_QWORD*)v149 - 2);
                if (*(unsigned __int16*)(*(_QWORD*)(v142 + 32) + 16LL) >=
                    (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v143 + 32) +
                                                       16LL)) {
                  v150 = &v6[v145 + 16];
                  goto LABEL_145;
                }
              }
              v150 = v6;
            LABEL_145:
              v151 = *((_QWORD*)v150 + 1);
              *(_QWORD*)v150 = v142;
              *((_QWORD*)v150 + 1) = v144;
              if (v151 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v151 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v151 + 16LL))(v151);
                result = GameRoutine_1a09c50(v151);
              }
            }
            v136 = v140 + 16;
            v139 += 16;
          } while (v140 + 16 != a2);
        }
      }
      else if (!v138) {
        v202 = (__int64*)(v6 + 24);
        do {
          v203 = v6;
          v6 = v136;
          v204 = *((_QWORD*)v203 + 2);
          v205 = *(_QWORD*)v203;
          if (*(unsigned __int16*)(*(_QWORD*)(v204 + 32) + 16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v203 + 32LL) +
                                     16LL)) {
            v206 = *((_QWORD*)v203 + 3);
            *(_QWORD*)v6 = 0;
            *((_QWORD*)v6 + 1) = 0;
            v207 = v202;
            do {
              v208 = *(v207 - 2);
              v209 = *v207;
              *(v207 - 3) = 0;
              *(v207 - 2) = 0;
              *(v207 - 1) = v205;
              *v207 = v208;
              if (v209 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v209 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v209 + 16LL))(v209);
                result = GameRoutine_1a09c50(v209);
              }
              v205 = *(v207 - 5);
              v207 -= 2;
            } while (*(unsigned __int16*)(*(_QWORD*)(v204 + 32) + 16LL) <
                     (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v205 + 32) +
                                                        16LL));
            v210 = *v207;
            *(v207 - 1) = v204;
            *v207 = v206;
            if (v210 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v210 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v210 + 16LL))(v210);
              result = GameRoutine_1a09c50(v210);
            }
          }
          v136 = v6 + 16;
          v202 += 2;
        } while (v6 + 16 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if (v6 == a2) {
        return result;
      }
      v152 = v9 >> 1;
      v214 = a2;
      v153 = v9 >> 1;
      do {
        v154 = v153;
        if (v152 >= v153) {
          v155 = (2 * (v153 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v156 = 2 * v153 + 2;
          v157 = &v6[16 * v155];
          if (v156 >= v8) {
            v158 = *(_QWORD*)v157;
          }
          else {
            v158 = *(_QWORD*)v157;
            if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v157 + 32LL) + 16LL) <
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(*((_QWORD*)v157 + 2) + 32LL) +
                                       16LL)) {
              v158 = *((_QWORD*)v157 + 2);
              v157 += 16;
              v155 = 2 * v154 + 2;
            }
          }
          v159 = &v6[16 * v154];
          v160 = *(_QWORD*)v159;
          if (*(unsigned __int16*)(*(_QWORD*)(v158 + 32) + 16LL) >=
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v159 + 32LL) +
                                     16LL)) {
            v161 = *((_QWORD*)v159 + 1);
            *(_QWORD*)v159 = 0;
            *((_QWORD*)v159 + 1) = 0;
            v162 = *(_QWORD*)v157;
            do {
              v163 = v157;
              v164 = *((_QWORD*)v157 + 1);
              *(_QWORD*)v163 = 0;
              *((_QWORD*)v163 + 1) = 0;
              v165 = *((_QWORD*)v159 + 1);
              *(_QWORD*)v159 = v162;
              *((_QWORD*)v159 + 1) = v164;
              if (v165 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v165 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v165 + 16LL))(v165);
                result = GameRoutine_1a09c50(v165);
              }
              if (v152 < v155) {
                break;
              }
              v157 = &v6[16 * ((2 * v155) | 1)];
              if (2 * v155 + 2 < v8) {
                v162 = *(_QWORD*)v157;
                if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v157 + 32LL) +
                                         16LL) >=
                    (unsigned int)*(
                        unsigned __int16*)(*(_QWORD*)(*((_QWORD*)v157 + 2) +
                                                      32LL) +
                                           16LL)) {
                  v155 = (2 * v155) | 1;
                }
                else {
                  v162 = *((_QWORD*)v157 + 2);
                  v157 += 16;
                  v155 = 2 * v155 + 2;
                }
              }
              else {
                v162 = *(_QWORD*)v157;
                v155 = (2 * v155) | 1;
              }
              v159 = v163;
            } while (*(unsigned __int16*)(*(_QWORD*)(v162 + 32) + 16LL) >=
                     (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v160 + 32) +
                                                        16LL));
            v166 = *((_QWORD*)v163 + 1);
            *(_QWORD*)v163 = v160;
            *((_QWORD*)v163 + 1) = v161;
            a2 = v214;
            if (v166 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166);
              result = GameRoutine_1a09c50(v166);
            }
          }
        }
        v153 = v154 - 1;
      } while (v154 != 0);
      while (2) {
        v169 = *(_QWORD*)v6;
        v168 = *((_QWORD*)v6 + 1);
        v170 = a2;
        v171 = 0;
        *(_QWORD*)v6 = 0;
        *((_QWORD*)v6 + 1) = 0;
        v172 = v6;
        do {
          v173 = &v172[16 * v171];
          v174 = v172;
          v172 = v173 + 16;
          if (2 * v171 + 2 >= v8) {
            v175 = *(_QWORD*)v172;
            v171 = (2 * v171) | 1;
          }
          else {
            v177 = *((_QWORD*)v173 + 4);
            v176 = v173 + 32;
            v175 = v177;
            v178 = *(unsigned __int16*)(*(_QWORD*)(v177 + 32) + 16LL);
            v179 =
                *(unsigned __int16*)(*(_QWORD*)(*((_QWORD*)v176 - 2) + 32LL) +
                                     16LL);
            if (v179 < v178) {
              v172 = v176;
            }
            else {
              v175 = *((_QWORD*)v176 - 2);
            }
            if (v179 >= v178) {
              v171 = (2 * v171) | 1;
            }
            else {
              v171 = 2 * v171 + 2;
            }
          }
          v180 = *((_QWORD*)v172 + 1);
          *(_QWORD*)v172 = 0;
          *((_QWORD*)v172 + 1) = 0;
          v181 = *((_QWORD*)v174 + 1);
          *(_QWORD*)v174 = v175;
          *((_QWORD*)v174 + 1) = v180;
          if (v181 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v181 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v181 + 16LL))(v181);
            result = GameRoutine_1a09c50(v181);
          }
        } while (v171 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
        a2 = v170 - 16;
        if (v172 == v170 - 16) {
          v196 = *((_QWORD*)v172 + 1);
          *(_QWORD*)v172 = v169;
          *((_QWORD*)v172 + 1) = v168;
          if (v196 == 0) {
            goto LABEL_173;
          }
        }
        else {
          v182 = *((_QWORD*)v170 - 2);
          v183 = *((_QWORD*)v170 - 1);
          *(_QWORD*)a2 = 0;
          *((_QWORD*)v170 - 1) = 0;
          v184 = *((_QWORD*)v172 + 1);
          *(_QWORD*)v172 = v182;
          *((_QWORD*)v172 + 1) = v183;
          if (v184 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v184 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v184 + 16LL))(v184);
            result = GameRoutine_1a09c50(v184);
          }
          v185 = *((_QWORD*)v170 - 1);
          *((_QWORD*)v170 - 2) = v169;
          *((_QWORD*)v170 - 1) = v168;
          if (v185 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v185 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v185 + 16LL))(v185);
            result = GameRoutine_1a09c50(v185);
          }
          v186 = (v172 + 16 - v6) >> 4;
          v167 = v186 < 2;
          v187 = v186 - 2;
          if (v167) {
            goto LABEL_173;
          }
          v188 = v187 >> 1;
          v189 = *(_QWORD*)v172;
          v190 = &v6[16 * (v187 >> 1)];
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v190 + 32LL) + 16LL) >=
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v172 + 32LL) +
                                     16LL)) {
            goto LABEL_173;
          }
          v191 = *((_QWORD*)v172 + 1);
          *(_QWORD*)v172 = 0;
          *((_QWORD*)v172 + 1) = 0;
          v192 = *(_QWORD*)v190;
          do {
            v193 = v190;
            v194 = *((_QWORD*)v190 + 1);
            *(_QWORD*)v193 = 0;
            *((_QWORD*)v193 + 1) = 0;
            v195 = *((_QWORD*)v172 + 1);
            *(_QWORD*)v172 = v192;
            *((_QWORD*)v172 + 1) = v194;
            if (v195 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v195 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v195 + 16LL))(v195);
              result = GameRoutine_1a09c50(v195);
            }
            if (v188 == 0) {
              break;
            }
            v172 = v193;
            v188 = (v188 - 1) >> 1;
            v190 = &v6[16 * v188];
            v192 = *(_QWORD*)v190;
          } while (
              *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v190 + 32LL) + 16LL) <
              (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v189 + 32) + 16LL));
          v196 = *((_QWORD*)v193 + 1);
          *(_QWORD*)v193 = v189;
          *((_QWORD*)v193 + 1) = v191;
          if (v196 == 0) {
          LABEL_173:
            v167 = v8-- <= 2;
            if (v167) {
              return result;
            }
            continue;
          }
        }
        break;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v196 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196);
        result = GameRoutine_1a09c50(v196);
      }
      goto LABEL_173;
    }
    v10 = *((_QWORD*)a2 - 2);
    v11 = &v6[16 * ((unsigned __int64)v8 >> 1)];
    v12 = *(unsigned __int16*)(*(_QWORD*)(v10 + 32) + 16LL);
    if ((unsigned __int64)v8 < 0x81) {
      v17 = *(_QWORD*)v6;
      v18 = *(_QWORD*)v11;
      v19 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) + 16LL);
      if (v19 >=
          *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v11 + 32LL) + 16LL)) {
        if (v12 < v19) {
          *(_QWORD*)v6 = v10;
          *((_QWORD*)a2 - 2) = v17;
          v25 = *((_QWORD*)v6 + 1);
          *((_QWORD*)v6 + 1) = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v25;
          v26 = *(_QWORD*)v11;
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) + 16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v11 + 32LL) + 16LL)) {
            v27 = *((_QWORD*)v11 + 1);
            v28 = *((_QWORD*)v6 + 1);
            *(_QWORD*)v11 = *(_QWORD*)v6;
            *((_QWORD*)v11 + 1) = v28;
            *(_QWORD*)v6 = v26;
            *((_QWORD*)v6 + 1) = v27;
          }
        }
      }
      else if (v12 >= v19) {
        v43 = *((_QWORD*)v11 + 1);
        v44 = *((_QWORD*)v6 + 1);
        *(_QWORD*)v11 = v17;
        *((_QWORD*)v11 + 1) = v44;
        *(_QWORD*)v6 = v18;
        *((_QWORD*)v6 + 1) = v43;
        v45 = *((_QWORD*)a2 - 2);
        if (*(unsigned __int16*)(*(_QWORD*)(v45 + 32) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v18 + 32) + 16LL)) {
          *(_QWORD*)v6 = v45;
          *((_QWORD*)a2 - 2) = v18;
          v46 = *((_QWORD*)v6 + 1);
          *((_QWORD*)v6 + 1) = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v46;
        }
      }
      else {
        *(_QWORD*)v11 = v10;
        *((_QWORD*)a2 - 2) = v18;
        v20 = *((_QWORD*)v11 + 1);
        *((_QWORD*)v11 + 1) = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 1) = v20;
      }
      goto LABEL_59;
    }
    v13 = *(_QWORD*)v11;
    v14 = *(_QWORD*)v6;
    v15 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v11 + 32LL) + 16LL);
    if (v15 >= *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) + 16LL)) {
      if (v12 < v15) {
        *(_QWORD*)v11 = v10;
        *((_QWORD*)a2 - 2) = v13;
        v21 = *((_QWORD*)v11 + 1);
        *((_QWORD*)v11 + 1) = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 1) = v21;
        v22 = *(_QWORD*)v6;
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v11 + 32LL) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) +
                                               16LL)) {
          v23 = *((_QWORD*)v6 + 1);
          v24 = *((_QWORD*)v11 + 1);
          *(_QWORD*)v6 = *(_QWORD*)v11;
          *((_QWORD*)v6 + 1) = v24;
          *(_QWORD*)v11 = v22;
          *((_QWORD*)v11 + 1) = v23;
        }
      }
    }
    else {
      if (v12 >= v15) {
        v29 = *((_QWORD*)v6 + 1);
        v30 = *((_QWORD*)v11 + 1);
        *(_QWORD*)v6 = v13;
        *((_QWORD*)v6 + 1) = v30;
        *(_QWORD*)v11 = v14;
        *((_QWORD*)v11 + 1) = v29;
        v31 = *((_QWORD*)a2 - 2);
        if (*(unsigned __int16*)(*(_QWORD*)(v31 + 32) + 16LL) >=
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v14 + 32) + 16LL)) {
          goto LABEL_28;
        }
        *(_QWORD*)v11 = v31;
        *((_QWORD*)a2 - 2) = v14;
        v16 = *((_QWORD*)v11 + 1);
        *((_QWORD*)v11 + 1) = *((_QWORD*)a2 - 1);
      }
      else {
        *(_QWORD*)v6 = v10;
        *((_QWORD*)a2 - 2) = v14;
        v16 = *((_QWORD*)v6 + 1);
        *((_QWORD*)v6 + 1) = *((_QWORD*)a2 - 1);
      }
      *((_QWORD*)a2 - 1) = v16;
    }
  LABEL_28:
    v32 = *((_QWORD*)v11 - 2);
    v33 = *((_QWORD*)v6 + 2);
    v34 = *(unsigned __int16*)(*(_QWORD*)(v32 + 32) + 16LL);
    v35 = *((_QWORD*)a2 - 4);
    v36 = *(unsigned __int16*)(*(_QWORD*)(v35 + 32) + 16LL);
    if (v34 >= *(unsigned __int16*)(*(_QWORD*)(v33 + 32) + 16LL)) {
      if (v36 < v34) {
        *((_QWORD*)v11 - 2) = v35;
        *((_QWORD*)a2 - 4) = v32;
        v38 = *((_QWORD*)v11 - 1);
        *((_QWORD*)v11 - 1) = *((_QWORD*)a2 - 3);
        *((_QWORD*)a2 - 3) = v38;
        v39 = *((_QWORD*)v11 - 2);
        v40 = *((_QWORD*)v6 + 2);
        if (*(unsigned __int16*)(*(_QWORD*)(v39 + 32) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v40 + 32) + 16LL)) {
          v41 = *((_QWORD*)v6 + 3);
          v42 = *((_QWORD*)v11 - 1);
          *((_QWORD*)v6 + 2) = v39;
          *((_QWORD*)v6 + 3) = v42;
          *((_QWORD*)v11 - 2) = v40;
          *((_QWORD*)v11 - 1) = v41;
        }
      }
    }
    else {
      if (v36 >= v34) {
        v47 = *((_QWORD*)v6 + 3);
        v48 = *((_QWORD*)v11 - 1);
        *((_QWORD*)v6 + 2) = v32;
        *((_QWORD*)v6 + 3) = v48;
        *((_QWORD*)v11 - 2) = v33;
        *((_QWORD*)v11 - 1) = v47;
        v49 = *((_QWORD*)a2 - 4);
        if (*(unsigned __int16*)(*(_QWORD*)(v49 + 32) + 16LL) >=
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v33 + 32) + 16LL)) {
          goto LABEL_39;
        }
        *((_QWORD*)v11 - 2) = v49;
        *((_QWORD*)a2 - 4) = v33;
        v37 = *((_QWORD*)v11 - 1);
        *((_QWORD*)v11 - 1) = *((_QWORD*)a2 - 3);
      }
      else {
        *((_QWORD*)v6 + 2) = v35;
        *((_QWORD*)a2 - 4) = v33;
        v37 = *((_QWORD*)v6 + 3);
        *((_QWORD*)v6 + 3) = *((_QWORD*)a2 - 3);
      }
      *((_QWORD*)a2 - 3) = v37;
    }
  LABEL_39:
    v50 = *((_QWORD*)v11 + 2);
    v51 = *((_QWORD*)v6 + 4);
    v52 = *(unsigned __int16*)(*(_QWORD*)(v50 + 32) + 16LL);
    v53 = *((_QWORD*)a2 - 6);
    v54 = *(unsigned __int16*)(*(_QWORD*)(v53 + 32) + 16LL);
    if (v52 >= *(unsigned __int16*)(*(_QWORD*)(v51 + 32) + 16LL)) {
      if (v54 < v52) {
        *((_QWORD*)v11 + 2) = v53;
        *((_QWORD*)a2 - 6) = v50;
        v56 = *((_QWORD*)v11 + 3);
        *((_QWORD*)v11 + 3) = *((_QWORD*)a2 - 5);
        *((_QWORD*)a2 - 5) = v56;
        v57 = *((_QWORD*)v11 + 2);
        v58 = *((_QWORD*)v6 + 4);
        if (*(unsigned __int16*)(*(_QWORD*)(v57 + 32) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v58 + 32) + 16LL)) {
          v59 = *((_QWORD*)v6 + 5);
          v60 = *((_QWORD*)v11 + 3);
          *((_QWORD*)v6 + 4) = v57;
          *((_QWORD*)v6 + 5) = v60;
          *((_QWORD*)v11 + 2) = v58;
          *((_QWORD*)v11 + 3) = v59;
        }
      }
    }
    else {
      if (v54 >= v52) {
        v61 = *((_QWORD*)v6 + 5);
        v62 = *((_QWORD*)v11 + 3);
        *((_QWORD*)v6 + 4) = v50;
        *((_QWORD*)v6 + 5) = v62;
        *((_QWORD*)v11 + 2) = v51;
        *((_QWORD*)v11 + 3) = v61;
        v63 = *((_QWORD*)a2 - 6);
        if (*(unsigned __int16*)(*(_QWORD*)(v63 + 32) + 16LL) >=
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v51 + 32) + 16LL)) {
          goto LABEL_48;
        }
        *((_QWORD*)v11 + 2) = v63;
        *((_QWORD*)a2 - 6) = v51;
        v55 = *((_QWORD*)v11 + 3);
        *((_QWORD*)v11 + 3) = *((_QWORD*)a2 - 5);
      }
      else {
        *((_QWORD*)v6 + 4) = v53;
        *((_QWORD*)a2 - 6) = v51;
        v55 = *((_QWORD*)v6 + 5);
        *((_QWORD*)v6 + 5) = *((_QWORD*)a2 - 5);
      }
      *((_QWORD*)a2 - 5) = v55;
    }
  LABEL_48:
    v64 = *(_QWORD*)v11;
    v65 = *((_QWORD*)v11 - 2);
    v66 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v11 + 32LL) + 16LL);
    v67 = *((_QWORD*)v11 + 2);
    v68 = *(unsigned __int16*)(*(_QWORD*)(v67 + 32) + 16LL);
    if (v66 >= *(unsigned __int16*)(*(_QWORD*)(v65 + 32) + 16LL)) {
      if (v68 >= v66) {
        goto LABEL_54;
      }
      v71 = *((_QWORD*)v11 + 1);
      v72 = *((_QWORD*)v11 + 3);
      *(_QWORD*)v11 = v67;
      *((_QWORD*)v11 + 1) = v72;
      *((_QWORD*)v11 + 2) = v64;
      *((_QWORD*)v11 + 3) = v71;
      if (*(unsigned __int16*)(*(_QWORD*)(v67 + 32) + 16LL) >=
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v65 + 32) + 16LL)) {
        goto LABEL_57;
      }
      v73 = *((_QWORD*)v11 - 1);
      *((_QWORD*)v11 - 2) = v67;
      *((_QWORD*)v11 - 1) = v72;
      *(_QWORD*)v11 = v65;
      *((_QWORD*)v11 + 1) = v73;
    }
    else {
      if (v68 < v66) {
        v69 = *((_QWORD*)v11 - 1);
        v70 = *((_QWORD*)v11 + 3);
        *((_QWORD*)v11 - 2) = v67;
        *((_QWORD*)v11 - 1) = v70;
        *((_QWORD*)v11 + 2) = v65;
        *((_QWORD*)v11 + 3) = v69;
      LABEL_54:
        v65 = v64;
        goto LABEL_58;
      }
      v74 = *((_QWORD*)v11 - 1);
      v75 = *((_QWORD*)v11 + 1);
      *((_QWORD*)v11 - 2) = v64;
      *((_QWORD*)v11 - 1) = v75;
      *(_QWORD*)v11 = v65;
      *((_QWORD*)v11 + 1) = v74;
      if (*(unsigned __int16*)(*(_QWORD*)(v67 + 32) + 16LL) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v65 + 32) + 16LL)) {
        v76 = *((_QWORD*)v11 + 3);
        *((_QWORD*)v11 + 2) = v65;
        *((_QWORD*)v11 + 3) = v74;
        *(_QWORD*)v11 = v67;
        *((_QWORD*)v11 + 1) = v76;
      LABEL_57:
        v65 = v67;
      }
    }
  LABEL_58:
    v77 = *(_QWORD*)v6;
    v78 = *((_QWORD*)v6 + 1);
    v79 = *((_QWORD*)v11 + 1);
    *(_QWORD*)v6 = v65;
    *((_QWORD*)v6 + 1) = v79;
    *(_QWORD*)v11 = v77;
    *((_QWORD*)v11 + 1) = v78;
  LABEL_59:
    v80 = *(_QWORD*)v6;
    --a3;
    if ((a4 & 1) != 0 ||
        *(unsigned __int16*)(*(_QWORD*)(*((_QWORD*)v6 - 2) + 32LL) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v80 + 32) + 16LL)) {
      v81 = *((_QWORD*)v6 + 1);
      *(_QWORD*)v6 = 0;
      *((_QWORD*)v6 + 1) = 0;
      v82 = 0;
      v83 = *(unsigned __int16*)(*(_QWORD*)(v80 + 32) + 16LL);
      do {
        v84 = &v6[v82];
        v82 += 16;
        v85 = *((_QWORD*)v84 + 2);
      } while (*(unsigned __int16*)(*(_QWORD*)(v85 + 32) + 16LL) < v83);
      v86 = &v6[v82];
      v87 = a2;
      if (v82 == 16) {
        v87 = a2;
        do {
          if (v86 >= v87) {
            break;
          }
          v89 = *((_QWORD*)v87 - 2);
          v87 -= 16;
        } while (*(unsigned __int16*)(*(_QWORD*)(v89 + 32) + 16LL) >= v83);
      }
      else {
        do {
          v88 = *((_QWORD*)v87 - 2);
          v87 -= 16;
        } while (*(unsigned __int16*)(*(_QWORD*)(v88 + 32) + 16LL) >= v83);
      }
      if (v86 >= v87) {
        v7 = &v6[v82];
      }
      else {
        v90 = *(_QWORD*)v87;
        v7 = v86;
        v91 = v87;
        do {
          *(_QWORD*)v7 = v90;
          *(_QWORD*)v91 = v85;
          v92 = *((_QWORD*)v7 + 1);
          *((_QWORD*)v7 + 1) = *((_QWORD*)v91 + 1);
          *((_QWORD*)v91 + 1) = v92;
          v93 = *(unsigned __int16*)(*(_QWORD*)(v80 + 32) + 16LL);
          do {
            v94 = *((_QWORD*)v7 + 2);
            v7 += 16;
            v85 = v94;
          } while (*(unsigned __int16*)(*(_QWORD*)(v94 + 32) + 16LL) < v93);
          do {
            v95 = *((_QWORD*)v91 - 2);
            v91 -= 16;
            v90 = v95;
          } while (*(unsigned __int16*)(*(_QWORD*)(v95 + 32) + 16LL) >= v93);
        } while (v7 < v91);
      }
      if (v6 != v7 - 16) {
        v96 = *((_QWORD*)v7 - 2);
        v97 = *((_QWORD*)v7 - 1);
        *((_QWORD*)v7 - 2) = 0;
        *((_QWORD*)v7 - 1) = 0;
        v98 = *((_QWORD*)v6 + 1);
        *(_QWORD*)v6 = v96;
        *((_QWORD*)v6 + 1) = v97;
        if (v98 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
          GameRoutine_1a09c50(v98);
        }
      }
      v99 = *((_QWORD*)v7 - 1);
      *((_QWORD*)v7 - 2) = v80;
      *((_QWORD*)v7 - 1) = v81;
      if (v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
        GameRoutine_1a09c50(v99);
      }
      if (v86 < v87) {
        goto LABEL_87;
      }
      v100 = GameRoutine_ee8120(v6, v7 - 16);
      result = GameRoutine_ee8120(v7, a2);
      if ((result & 1) != 0) {
        a2 = v7 - 16;
        if ((v100 & 1) != 0) {
          return result;
        }
        goto LABEL_2;
      }
      if ((v100 & 1) == 0) {
      LABEL_87:
        result = GameHr_ee6e80(v6, v7 - 16, a3, a4 & 1);
        a4 = 0;
      }
    }
    else {
      v101 = *((_QWORD*)v6 + 1);
      *(_QWORD*)v6 = 0;
      *((_QWORD*)v6 + 1) = 0;
      v102 = *(unsigned __int16*)(*(_QWORD*)(v80 + 32) + 16LL);
      if (v102 >=
          *(unsigned __int16*)(*(_QWORD*)(*((_QWORD*)a2 - 2) + 32LL) + 16LL)) {
        v104 = v6 + 16;
        do {
          v7 = v104;
          if (v104 >= a2) {
            break;
          }
          v104 += 16;
        } while (v102 >=
                 *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v7 + 32LL) + 16LL));
      }
      else {
        v7 = v6;
        do {
          v103 = *((_QWORD*)v7 + 2);
          v7 += 16;
        } while (v102 >= *(unsigned __int16*)(*(_QWORD*)(v103 + 32) + 16LL));
      }
      v105 = a2;
      if (v7 < a2) {
        v105 = a2;
        do {
          v106 = *((_QWORD*)v105 - 2);
          v105 -= 16;
        } while (v102 < *(unsigned __int16*)(*(_QWORD*)(v106 + 32) + 16LL));
      }
      if (v7 < v105) {
        v107 = *(_QWORD*)v7;
        v108 = *(_QWORD*)v105;
        do {
          *(_QWORD*)v7 = v108;
          *(_QWORD*)v105 = v107;
          v109 = *((_QWORD*)v7 + 1);
          *((_QWORD*)v7 + 1) = *((_QWORD*)v105 + 1);
          *((_QWORD*)v105 + 1) = v109;
          v110 = *(unsigned __int16*)(*(_QWORD*)(v80 + 32) + 16LL);
          do {
            v111 = *((_QWORD*)v7 + 2);
            v7 += 16;
            v107 = v111;
          } while (v110 >= *(unsigned __int16*)(*(_QWORD*)(v111 + 32) + 16LL));
          do {
            v112 = *((_QWORD*)v105 - 2);
            v105 -= 16;
            v108 = v112;
          } while (v110 < *(unsigned __int16*)(*(_QWORD*)(v112 + 32) + 16LL));
        } while (v7 < v105);
      }
      if (v6 != v7 - 16) {
        v113 = *((_QWORD*)v7 - 2);
        v114 = *((_QWORD*)v7 - 1);
        *((_QWORD*)v7 - 2) = 0;
        *((_QWORD*)v7 - 1) = 0;
        v115 = *((_QWORD*)v6 + 1);
        *(_QWORD*)v6 = v113;
        *((_QWORD*)v6 + 1) = v114;
        if (v115 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
          result = GameRoutine_1a09c50(v115);
        }
      }
      v116 = *((_QWORD*)v7 - 1);
      a4 = 0;
      *((_QWORD*)v7 - 2) = v80;
      *((_QWORD*)v7 - 1) = v101;
      if (v116 != 0) {
        a4 = 0;
        if (atomic_fetch_add((atomic_ullong* volatile)(v116 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116);
          result = GameRoutine_1a09c50(v116);
          a4 = 0;
        }
      }
    }
  }
  if (v8 != 3) {
    if (v8 == 4) {
      return GameRoutine_ee7f60(v6, v6 + 16, v6 + 32, a2 - 16);
    }
    if (v8 == 5) {
      result = GameRoutine_ee7f60(v6, v6 + 16, v6 + 32, v6 + 48);
      v117 = *((_QWORD*)a2 - 2);
      v118 = *((_QWORD*)v6 + 6);
      if (*(unsigned __int16*)(*(_QWORD*)(v117 + 32) + 16LL) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v118 + 32) + 16LL)) {
        *((_QWORD*)v6 + 6) = v117;
        *((_QWORD*)a2 - 2) = v118;
        v119 = *((_QWORD*)v6 + 7);
        *((_QWORD*)v6 + 7) = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 1) = v119;
        v120 = *((_QWORD*)v6 + 6);
        v121 = *((_QWORD*)v6 + 4);
        if (*(unsigned __int16*)(*(_QWORD*)(v120 + 32) + 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v121 + 32) + 16LL)) {
          v122 = *((_QWORD*)v6 + 5);
          v123 = *((_QWORD*)v6 + 7);
          *((_QWORD*)v6 + 6) = v121;
          *((_QWORD*)v6 + 7) = v122;
          v124 = *((_QWORD*)v6 + 2);
          *((_QWORD*)v6 + 4) = v120;
          *((_QWORD*)v6 + 5) = v123;
          if (*(unsigned __int16*)(*(_QWORD*)(v120 + 32) + 16LL) <
              (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v124 + 32) +
                                                 16LL)) {
            v125 = *((_QWORD*)v6 + 3);
            *((_QWORD*)v6 + 2) = v120;
            *((_QWORD*)v6 + 3) = v123;
            *((_QWORD*)v6 + 4) = v124;
            *((_QWORD*)v6 + 5) = v125;
            v126 = *(_QWORD*)v6;
            if (*(unsigned __int16*)(*(_QWORD*)(v120 + 32) + 16LL) <
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) +
                                       16LL)) {
              v127 = *((_QWORD*)v6 + 1);
              *(_QWORD*)v6 = v120;
              *((_QWORD*)v6 + 1) = v123;
              *((_QWORD*)v6 + 2) = v126;
              *((_QWORD*)v6 + 3) = v127;
            }
          }
        }
      }
      return result;
    }
    goto LABEL_10;
  }
  v130 = *((_QWORD*)v6 + 2);
  v131 = *(_QWORD*)v6;
  v132 = *(unsigned __int16*)(*(_QWORD*)(v130 + 32) + 16LL);
  v133 = *((_QWORD*)a2 - 2);
  v134 = *(unsigned __int16*)(*(_QWORD*)(v133 + 32) + 16LL);
  if (v132 < *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) + 16LL)) {
    if (v134 >= v132) {
      v211 = *((_QWORD*)v6 + 1);
      v212 = *((_QWORD*)v6 + 3);
      *(_QWORD*)v6 = v130;
      *((_QWORD*)v6 + 1) = v212;
      *((_QWORD*)v6 + 2) = v131;
      *((_QWORD*)v6 + 3) = v211;
      v213 = *((_QWORD*)a2 - 2);
      if (*(unsigned __int16*)(*(_QWORD*)(v213 + 32) + 16LL) >=
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(v131 + 32) + 16LL)) {
        return result;
      }
      *((_QWORD*)v6 + 2) = v213;
      *((_QWORD*)a2 - 2) = v131;
      v135 = *((_QWORD*)v6 + 3);
      *((_QWORD*)v6 + 3) = *((_QWORD*)a2 - 1);
    }
    else {
      *(_QWORD*)v6 = v133;
      *((_QWORD*)a2 - 2) = v131;
    LABEL_123:
      v135 = *((_QWORD*)v6 + 1);
      *((_QWORD*)v6 + 1) = *((_QWORD*)a2 - 1);
    }
    *((_QWORD*)a2 - 1) = v135;
    return result;
  }
  if (v134 < v132) {
    *((_QWORD*)v6 + 2) = v133;
    *((_QWORD*)a2 - 2) = v130;
    v197 = *((_QWORD*)v6 + 3);
    *((_QWORD*)v6 + 3) = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v197;
    v198 = *((_QWORD*)v6 + 2);
    v199 = *(_QWORD*)v6;
    if (*(unsigned __int16*)(*(_QWORD*)(v198 + 32) + 16LL) <
        (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)v6 + 32LL) +
                                           16LL)) {
      v200 = *((_QWORD*)v6 + 1);
      v201 = *((_QWORD*)v6 + 3);
      *(_QWORD*)v6 = v198;
      *((_QWORD*)v6 + 1) = v201;
      *((_QWORD*)v6 + 2) = v199;
      *((_QWORD*)v6 + 3) = v200;
    }
  }
  return result;
}

__int64 GameHr_ef88c0()
{
  __int64 result;

  if (GameData_2212270 != 0 && *(_BYTE*)(GameData_2212270 + 240) == 1) {
    return GameRoutine_d856f0();
  }
  return result;
}

__int64 GameHr_efd3f0()
{
  _QWORD v1[2];

  v1[0] = 0;
  v1[1] = 0;
  return GameRoutine_efbb60(*(_QWORD*)GameData_212dbf0[0], v1, 1);
}

__int64 GameHr_efd450()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v3;
  int v4;

  v0 = GameData_21f3d08;
  v1 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v1;
  if (v1 != 0) {
    if (v1 > 0) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v0 + 8) + 8LL))(v0 + 8);
    if (*(int*)(v0 + 16) > 0) {
      return result;
    }
  }
  if (*(_BYTE*)(v0 + 65) != 0) {
    *(_BYTE*)(v0 + 65) = 0;
    v3 = GameData_220b6e0;
    v4 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 168) + 8LL))(v3 + 168);
    }
    return GameRoutine_d799f0(v3);
  }
  return result;
}

__int64 GameHr_f2bee0()
{
  unsigned int v0;
  bool v1;
  int v2;
  __int64 result;

  v0 = *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL);
  v1 = v0 > 0xF;
  v2 = (1 << v0) & 0xC3A8;
  if (v1 || v2 == 0) {
    return GameRoutine_db8640(GameData_21c9608);
  }
  return result;
}

__int64 GameHr_f2c070()
{
  __int64 result;

  if (*(_BYTE*)(GameData_21f3cc8 + 25) == 1) {
    return GameRoutine_cb90b0(*GameData_212d458[0], 1.0);
  }
  return result;
}

__int64 GameHr_f37d00()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  v0 = *(__int64**)(GameData_2203490 + 840);
  for (i = *(__int64**)(GameData_2203490 + 848); v0 != i;
       result = GameRoutine_e79f00(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

__int64 GameHr_f38140()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  v0 = *(__int64**)(GameData_2203490 + 840);
  for (i = *(__int64**)(GameData_2203490 + 848); v0 != i;
       result = GameRoutine_e7df20(v2, 0, 0.85)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

__int64 GameHr_f3db90()
{
  __int64 result;
  __int16 v1;
  __int64 v2;
  __int64 v3;

  v1 = 0;
  v2 = 0;
  v3 = 0;
  GameRoutine_e9cb40(*GameData_212ea58, &v1);
  result = v3;
  if (v3 != 0) {
    result = GameRoutine_1a09c50(v3);
  }
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  return result;
}

__int64 GameHr_f3dbf0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  float v5;
  __int64 v6;
  __int64 result;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  float v17;
  __int128 v18;
  char v19;
  int v20;
  char v21;

  v0 = GameData_212ea58;
  v1 = *(_QWORD*)(*GameData_212ea58 + 880);
  v2 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = 0;
  v14 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v1;
    v8 = GameRoutine_1a09fd0(&GameData_21a6130);
    v1 = v10;
    if (v8 != 0) {
      v9 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v9;
      GameRoutine_1a09fe0(&GameData_21a6130);
      v1 = v10;
    }
  }
  v19 = 0;
  v18 = GameData_21a6120;
  v20 = 1109393408;
  v21 = 1;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = v1;
  v13 = v2;
  v16 = 1092616192;
  v3 = GameRoutine_f3eb10(v11);
  *(_QWORD*)&v4 = v11[0];
  *((_QWORD*)&v4 + 1) = LODWORD(v11[1]);
  v18 = v4;
  v5 = GameRoutine_f3ec50(v3);
  v6 = *v0;
  v17 = v5;
  GameRoutine_e80e80(v6 + 16, &v12);
  result = v13;
  if (v13 != 0) {
    result = GameRoutine_1a09c50(v13);
  }
  if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

__int64 GameHr_f3dea0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  float v5;
  __int64 v6;
  __int64 result;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  float v17;
  __int128 v18;
  char v19;
  int v20;
  char v21;

  v0 = GameData_212ea58;
  v1 = *(_QWORD*)(*GameData_212ea58 + 880);
  v2 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = 0;
  v14 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v1;
    v8 = GameRoutine_1a09fd0(&GameData_21a6130);
    v1 = v10;
    if (v8 != 0) {
      v9 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v9;
      GameRoutine_1a09fe0(&GameData_21a6130);
      v1 = v10;
    }
  }
  v19 = 0;
  v18 = GameData_21a6120;
  v20 = 1109393408;
  v21 = 1;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = v1;
  v13 = v2;
  v16 = 0x3E99999A41200000LL;
  v3 = GameRoutine_f3eb10(v11);
  *(_QWORD*)&v4 = v11[0];
  *((_QWORD*)&v4 + 1) = LODWORD(v11[1]);
  v18 = v4;
  v5 = GameRoutine_f3ec50(v3);
  v6 = *v0 + 16;
  v17 = v5 + 0.5;
  GameRoutine_e80e80(v6, &v12);
  result = v13;
  if (v13 != 0) {
    result = GameRoutine_1a09c50(v13);
  }
  if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

__int64 GameHr_f3e000()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  int v11;
  __int64 v12;
  __int128 v13;
  char v14;
  int v15;
  char v16;
  __int64 v17;

  v0 = GameData_212ea58;
  v1 = *(_QWORD*)(*GameData_212ea58 + 752);
  v2 = *(_QWORD*)(*GameData_212ea58 + 760);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = 0;
  v9 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v17 = v1;
    v5 = GameRoutine_1a09fd0(&GameData_21a6130);
    v1 = v17;
    v0 = GameData_212ea58;
    if (v5 != 0) {
      v6 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v6;
      GameRoutine_1a09fe0(&GameData_21a6130);
      v1 = v17;
      v0 = GameData_212ea58;
    }
  }
  v14 = 0;
  v13 = GameData_21a6120;
  v15 = 1109393408;
  v16 = 1;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v7 = v1;
  v8 = v2;
  v3 = *v0;
  v11 = 1129447424;
  v12 = 0x3F0000003F000000LL;
  v13 = 0x3E99999A3F800000uLL;
  GameRoutine_e80e80(v3 + 16, &v7);
  result = v8;
  if (v8 != 0) {
    result = GameRoutine_1a09c50(v8);
  }
  if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

__int64 GameHr_f3e620()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  int v11;
  __int64 v12;
  __int128 v13;
  char v14;
  int v15;
  char v16;
  __int64 v17;

  v0 = GameData_212ea58;
  v1 = *(_QWORD*)(*GameData_212ea58 + 752);
  v2 = *(_QWORD*)(*GameData_212ea58 + 760);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = 0;
  v9 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v17 = v1;
    v5 = GameRoutine_1a09fd0(&GameData_21a6130);
    v1 = v17;
    v0 = GameData_212ea58;
    if (v5 != 0) {
      v6 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v6;
      GameRoutine_1a09fe0(&GameData_21a6130);
      v1 = v17;
      v0 = GameData_212ea58;
    }
  }
  v14 = 0;
  v13 = GameData_21a6120;
  v15 = 1109393408;
  v16 = 1;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  v7 = v1;
  v8 = v2;
  v3 = *v0;
  v11 = 1129512960;
  v12 = 0x3F00000040400000LL;
  v13 = 0x3E99999A3F800000uLL;
  GameRoutine_e80e80(v3 + 16, &v7);
  result = v8;
  if (v8 != 0) {
    result = GameRoutine_1a09c50(v8);
  }
  if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

__int64 GameHr_f5ac70()
{
  __int64 result;
  __int16 v1;
  __int64 v2;
  __int64 v3;

  GameRoutine_f5c3f0(1);
  v2 = 0;
  v3 = 0;
  v1 = 1;
  GameRoutine_e9cb40(*GameData_212ea58, &v1);
  result = v3;
  if (v3 != 0) {
    return GameRoutine_1a09c50(v3);
  }
  return result;
}

__int64 GameHr_f5b5d0()
{
  int v0;
  int v1;
  __int64 result;

  if (GameData_21ee240 == 0 ||
      (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 > 2 ||
      (((v0 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v1 = 2)
                                                            : (v1 = 3),
       (v1 & v0) != 0)) {
    result = GameData_21ec550;
    if (GameData_21ec550 == 0) {
      return result;
    }
    return GameRoutine_809dc0(0.25);
  }
  result = GameData_21ec550;
  if (GameData_21ec550 != 0) {
    return GameRoutine_809dc0(0.25);
  }
  return result;
}

__int64 GameHr_f5ce20()
{
  __int64 v0;
  _BYTE v2[200];

  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) &= ~0x20u;
  }
  v0 = *(_QWORD*)GameData_212dbe8[0];
  GameRoutine_10cb00(v2, "FadeTime_BGM_Act_Out");
  if ((unsigned int)(*(_DWORD*)(v0 + 8) - 3) <= 1) {
    GameRoutine_a2c9c0(*GameData_212d468[0], v2);
    *(_BYTE*)(v0 + 64) = 0;
    *(_DWORD*)(v0 + 8) = 1;
  }
  return GameRoutine_10cff0(v2);
}

__int64 GameHr_f5cec0()
{
  __int64 v0;
  int v1;

  v0 = GameData_220b6e0;
  v1 = *(_DWORD*)(GameData_220b6e0 + 192);
  *(_DWORD*)(GameData_220b6e0 + 192) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(v0 + 184))(v0 + 184);
  }
  return GameRoutine_d799f0(v0);
}

__int64 GameHr_f5d380()
{
  __int64 v0;
  int v1;

  v0 = GameData_220b6e0;
  v1 = *(_DWORD*)(GameData_220b6e0 + 192) - 1;
  *(_DWORD*)(GameData_220b6e0 + 192) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 184) + 8LL))(v0 + 184);
  }
  return GameRoutine_d799f0(v0);
}

unsigned __int64 GameHr_f61900(unsigned __int64 result, __int64* a2, __int64 a3,
                               char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(_QWORD*)(v76 + 64);
            v79 = *(_QWORD*)(v77 + 64);
            if (v78 < *(_QWORD*)(*v8 + 64)) {
              if (v79 >= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(_QWORD*)(v127 + 64) < *(_QWORD*)(v75 + 64)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(_QWORD*)(v124 + 64) < *(_QWORD*)(*v8 + 64)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GameRoutine_f62340(v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(_QWORD*)(v80 + 64);
          v84 = *(_QWORD*)(v82 + 64);
          if (v83 >= *(_QWORD*)(*v8 + 64)) {
            if (v84 < v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*(_QWORD*)(v82 + 64) < *(_QWORD*)(v81 + 64)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 < v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(_QWORD*)(v82 + 64) < *(_QWORD*)(v81 + 64)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(_QWORD*)(v128 + 64) >= *(_QWORD*)(v80 + 64)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(_QWORD*)(v124 + 64) >= *(_QWORD*)(v129 + 64)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(_QWORD*)(v73 + 64) < *(_QWORD*)(*v8 + 64)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(_QWORD*)(v91 + 64) < *(_QWORD*)(v92 + 64)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while (*(_QWORD*)(v91 + 64) < *(_QWORD*)(v92 + 64));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(_QWORD*)(v125 + 64) < *(_QWORD*)(v126 + 64)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(_QWORD*)(v125 + 64) < *(_QWORD*)(v126 + 64));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    *(_QWORD*)(v101 + 64) < *(_QWORD*)(v100[1] + 64)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if (*(_QWORD*)(v101 + 64) >= *(_QWORD*)(*v102 + 64)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        *(_QWORD*)(v101 + 64) < *(_QWORD*)(v100[1] + 64)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(_QWORD*)(v103 + 64);
                    v102 = v104;
                    v99 = v105;
                  } while (*(_QWORD*)(v101 + 64) >= result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(_QWORD*)(v112 + 64);
                  if (*(_QWORD*)(v113 + 64) >= result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(_QWORD*)(*v121 + 64) < *(_QWORD*)(*v114 + 64)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while (*(_QWORD*)(*v121 + 64) < *(_QWORD*)(v120 + 64));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(_QWORD*)(v10 + 64);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(_QWORD*)(*v11 + 64);
          if (v15 >= *(_QWORD*)(*v8 + 64)) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(_QWORD*)(*v11 + 64) < *(_QWORD*)(*v8 + 64)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(_QWORD*)(v21 + 64) >= *(_QWORD*)(v14 + 64)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(_QWORD*)(v22 + 64);
          v26 = *(_QWORD*)(v24 + 64);
          if (v25 >= *(_QWORD*)(v23 + 64)) {
            if (v26 < v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(_QWORD*)(v27 + 64) < *(_QWORD*)(v28 + 64)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(_QWORD*)(v30 + 64) >= *(_QWORD*)(v23 + 64)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(_QWORD*)(v31 + 64);
          v35 = *(_QWORD*)(v33 + 64);
          if (v34 >= *(_QWORD*)(v32 + 64)) {
            if (v35 < v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(_QWORD*)(v36 + 64) < *(_QWORD*)(v37 + 64)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(_QWORD*)(v38 + 64) >= *(_QWORD*)(v32 + 64)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(_QWORD*)(*v11 + 64);
          v43 = *(_QWORD*)(v41 + 64);
          if (v42 >= *(_QWORD*)(v39 + 64)) {
            if (v43 >= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*(_QWORD*)(v41 + 64) < *(_QWORD*)(v39 + 64)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(_QWORD*)(v41 + 64) >= *(_QWORD*)(v39 + 64)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(_QWORD*)(*v8 + 64);
        if (v18 >= *(_QWORD*)(*v11 + 64)) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(_QWORD*)(*v8 + 64) < *(_QWORD*)(*v11 + 64)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 >= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(_QWORD*)(v29 + 64) >= *(_QWORD*)(v17 + 64)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(_QWORD*)(v45 + 64);
        if (*(_QWORD*)(*(v8 - 1) + 64) < v46) {
          goto LABEL_63;
        }
        if (v46 >= *(_QWORD*)(*(a2 - 1) + 64)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 >= *(_QWORD*)(*v8 + 64));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >= *(_QWORD*)(v63 + 64));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 < *(_QWORD*)(v66 + 64));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(_QWORD*)(v45 + 64);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >= *(_QWORD*)(v70 + 64));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 < *(_QWORD*)(v71 + 64));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(_QWORD*)(v45 + 64);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(_QWORD*)(v49 + 64) < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(_QWORD*)(v53 + 64) >= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(_QWORD*)(v52 + 64) >= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(_QWORD*)(v45 + 64);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(_QWORD*)(v58 + 64) < v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(_QWORD*)(v59 + 64) >= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_f624c0(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_f624c0(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GameHr_f61900(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool GameHr_f624c0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(_QWORD*)(v6 + 64);
      v9 = *(_QWORD*)(v7 + 64);
      if (v8 < *(_QWORD*)(*a1 + 64)) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*(_QWORD*)(v22 + 64) < *(_QWORD*)(v5 + 64)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*(_QWORD*)(v21 + 64) < *(_QWORD*)(*a1 + 64)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_f62340(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(_QWORD*)(v16 + 64);
    v20 = *(_QWORD*)(v18 + 64);
    if (v19 >= *(_QWORD*)(*a1 + 64)) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*(_QWORD*)(v18 + 64) < *(_QWORD*)(v17 + 64)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*(_QWORD*)(v18 + 64) < *(_QWORD*)(v17 + 64)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*(_QWORD*)(v32 + 64) >= *(_QWORD*)(v16 + 64)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*(_QWORD*)(v21 + 64) >= *(_QWORD*)(v33 + 64)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(_QWORD*)(v3 + 64) < *(_QWORD*)(*a1 + 64)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(_QWORD*)(v13 + 64);
  v15 = *(_QWORD*)(v10 + 64);
  if (v14 >= *(_QWORD*)(*a1 + 64)) {
    if (v15 < v14) {
      a1[1] = v10;
      a1[2] = v13;
      if (*(_QWORD*)(v10 + 64) < *(_QWORD*)(v12 + 64)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v13;
      a1[1] = v12;
      if (*(_QWORD*)(v10 + 64) >= *(_QWORD*)(v12 + 64)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if (*(_QWORD*)(*v23 + 64) < *(_QWORD*)(v28 + 64)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while (*(_QWORD*)(v27 + 64) < *(_QWORD*)(v28 + 64));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 GameHr_f691a0()
{
  __int64 result;
  int v1;

  result = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 184);
  *(_DWORD*)(GameData_21f3d10 + 184) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(result + 176))(result + 176);
  }
  return result;
}

__int64 GameHr_f69e10()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;

  v0 = GameData_21f3cc0;
  v1 = *(unsigned __int8*)(GameData_21f3cc0 + 112);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21f3cc0 + 120);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                       8LL) +
                            64LL) +
                 96LL) == 0 ||
      (GameRoutine_c13be0() & 1) != 0) {
    GameRoutine_d6f8d0(v0);
    return 0;
  }
  return 1;
}

__int64 GameHr_f6ad20()
{
  __int64 result;
  int v1;

  result = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 184) - 1;
  *(_DWORD*)(GameData_21f3d10 + 184) = v1;
  if (v1 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 176) + 8LL))(result +
                                                                      176);
  }
  return result;
}

__int64 GameHr_f888c0(__int64 result)
{
  bool v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;

  if (GameData_2212270 != 0) {
    v1 = GameData_21f3d10 == 0 || *(_BYTE*)(GameData_2212270 + 218) == 0;
    if (!v1 && *(_DWORD*)(GameData_2212270 + 232) <= 0 &&
        (*(_BYTE*)(GameData_2212270 + 240) & 1) == 0 &&
        *(_BYTE*)(GameData_2212270 + 139) == 0 &&
        *(int*)(GameData_21f3d10 + 152) <= 0) {
      v3 = result;
      result = GameRoutine_dffec0(*GameData_212eec0[0]);
      if ((result & 1) == 0) {
        result = GameRoutine_d6f1a0(GameData_21f3cc0);
        if ((result & 1) == 0) {
          v4 = v3;
          if (*(_BYTE*)(v3 + 8) == 1) {
            result = GameRoutine_f889e0(v3);
            v4 = v3;
            *(_BYTE*)(v3 + 8) = 0;
          }
          v5 = *(_QWORD**)(v4 + 16);
          v6 = (_QWORD*)(v4 + 24);
          if (v5 != (_QWORD*)(v4 + 24)) {
            do {
              result = GameRoutine_104b900(v5[7], 0);
              v7 = (_QWORD*)v5[1];
              if (v7 != nullptr) {
                do {
                  v8 = v7;
                  v7 = (_QWORD*)*v7;
                } while (v7 != nullptr);
              }
              else {
                do {
                  v8 = (_QWORD*)v5[2];
                  v1 = v5 == (_QWORD*)*v8;
                  v5 = v8;
                } while (!v1);
              }
              v5 = v8;
            } while (v8 != v6);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_f8b8b0()
{
  __int64 v0;
  _BYTE v2[200];

  v0 = *(_QWORD*)GameData_212dbe8[0];
  GameRoutine_10cb00(v2, "FadeTime_BGM_Hub100_Out");
  if ((unsigned int)(*(_DWORD*)(v0 + 8) - 3) <= 1) {
    GameRoutine_a2d8b0(*GameData_212d468[0], v2, 1, 0);
    *(_BYTE*)(v0 + 64) = 0;
    *(_DWORD*)(v0 + 8) = 0;
  }
  return GameRoutine_10cff0(v2);
}

__int64 GameHr_f92f60()
{
  __int64 v0;
  __int64 i;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  bool v9;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 24);
  for (i = *(_QWORD*)(GameData_21ec7c0 + 32); v0 != i; v0 += 16) {
    v2 = *(_QWORD**)v0;
    if ((*(_BYTE*)(*(_QWORD*)v0 + 296LL) & 1) != 0 && v2[38] == 25) {
      v3 = (__int64*)v2[39];
      v4 = v3[2];
      v5 = *v3;
      v6 = v3[1];
      v7 = *((unsigned __int8*)v3 + 24);
      v8 = v5 == 0xE3A482E35F444950LL && v6 == 0x9E83E3A583E3B782LL;
      v9 = v8 && v4 == 0xB3E9AB83E3BC83E3LL;
      if (v9 && v7 == 165) {
        continue;
      }
    }
    v11 = *(_QWORD*)(*(_QWORD*)(v2[3] + 8LL) + 328LL);
    v12 = *(_QWORD*)(v11 + 360);
    *(_QWORD*)(v11 + 336) = 0;
    *(_DWORD*)(v11 + 352) = 0;
    *(_BYTE*)(v11 + 356) = 1;
    *(_BYTE*)(v11 + 369) = 1;
    result = GameRoutine_cf5c00(v12);
  }
  return result;
}

__int64 GameHr_f931c0(long double a1)
{
  __int64 result;
  _QWORD v2[2];

  result = GameData_2241720;
  if (GameData_2241720 != 0) {
    result = GameRoutine_17ccc20(GameData_2241720, 0, 0, a1);
  }
  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 4;
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v2[0] = 0;
    v2[1] = 0;
    result = GameRoutine_efbb60(GameData_21f3d08, v2, 0);
    if (GameData_221bea8 != 0) {
      *(_DWORD*)(GameData_221bea8 + 152) = 12;
    }
  }
  if (GameData_2212270 != 0) {
    *(_DWORD*)(GameData_2212270 + 152) = 13;
  }
  return result;
}

__int64 GameHr_f9b7d0()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _BYTE v3[200];

  v0 = *(_QWORD*)GameData_212dbe8[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbe8[0] + 8LL) == 3) {
    v1 = *GameData_212d468[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 140LL) == 1) {
      result = GameRoutine_a2f5a0(*GameData_212d468[0]);
    }
    else {
      GameRoutine_10cb00(v3, "FadeTime_BGM_Hub_Out");
      GameRoutine_a2e490(v1, v3, 0);
      result = GameRoutine_10cff0(v3);
      *(_BYTE*)(v1 + 3016) = 0;
    }
    *(_DWORD*)(v0 + 8) = 4;
  }
  return result;
}

__int64 GameHr_fb0a70()
{
  __int64 result;

  result = *(_QWORD*)(GameData_220b6f0 + 56);
  if (result != 0) {
    return GameRoutine_cee990(result, 2017201876, 1, 0, 0, 0, 1.0);
  }
  return result;
}

__int64 GameHr_fb0cd0()
{
  __int64 result;
  __int64 v1;

  result = *(_QWORD*)(GameData_220b6f0 + 56);
  if (result != 0) {
    result = GameRoutine_ceca80(result, 0x4000000000000LL, 0);
  }
  v1 = *(_QWORD*)GameData_212d020[0];
  *(_DWORD*)(v1 + 192) = 0;
  *(_BYTE*)(v1 + 196) = 1;
  return result;
}

__int64 GameHr_fb5ed0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  _QWORD v5[2];

  v0 = GameData_21f3d08;
  v1 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v1;
  if (v1 != 0) {
    if (v1 > 0) {
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 8) + 8LL))(v0 + 8);
    if (*(int*)(v0 + 16) > 0) {
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v0 + 65) != 0) {
    *(_BYTE*)(v0 + 65) = 0;
    v2 = GameData_220b6e0;
    v3 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 168) + 8LL))(v2 + 168);
    }
    GameRoutine_d799f0(v2);
  }
LABEL_9:
  v5[1] = &GameData_1acbd02;
  v5[0] = GameRoutine_7a86e0(&GameData_1acbd02);
  return GameRoutine_716d80(v5, 1);
}

__int64 GameHr_fc3110()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24);
  *(_DWORD*)(GameData_21f3d10 + 24) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(v0 + 16))(v0 + 16);
  }
  return GameRoutine_d54e40(v0);
}

__int64 GameHr_fc3370()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24) - 1;
  *(_DWORD*)(GameData_21f3d10 + 24) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 16) + 8LL))(v0 + 16);
  }
  return GameRoutine_d54e40(v0);
}

__int64 GameHr_fc44e0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v3;
  int v4;

  v0 = GameData_21f3d08;
  v1 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v1;
  if (v1 != 0) {
    if (v1 > 0) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v0 + 8) + 8LL))(v0 + 8);
    if (*(int*)(v0 + 16) > 0) {
      return result;
    }
  }
  if (*(_BYTE*)(v0 + 65) != 0) {
    *(_BYTE*)(v0 + 65) = 0;
    v3 = GameData_220b6e0;
    v4 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 168) + 8LL))(v3 + 168);
    }
    return GameRoutine_d799f0(v3);
  }
  return result;
}

__int64 GameHr_fc9c80()
{
  unsigned int v0;
  __int64 v1;
  __int64** v2;
  __int64** v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  bool v8;
  int v9;

  if (GameData_21c9718 == 0) {
    goto LABEL_15;
  }
  v0 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v0 = *(unsigned __int8*)(GameData_21caab0 + 15);
  }
  v1 = GameData_21c9718 + 136LL * v0;
  v2 = *(__int64***)(v1 + 72);
  v3 = *(__int64***)(v1 + 80);
  if (v2 == v3) {
  LABEL_15:
    v9 = 1;
  }
  else {
    v4 = 0;
    do {
      v5 = **v2;
      v6 = *(unsigned __int8*)(v5 + 112);
      v7 = *(unsigned __int8*)(v5 + 113);
      v8 = v6 == 7 && v7 == 3;
      if (v8 && *((_BYTE*)*v2 + 9) == 4) {
        ++v4;
      }
      ++v2;
    } while (v2 != v3);
    v9 = v4 + 1;
  }
  if (GameData_21f3ff8 != 0) {
    if (v9 <= 1) {
      v9 = 1;
    }
    if (v9 >= 5) {
      v9 = 5;
    }
    *(_DWORD*)(GameData_21f3ff8 + 12) = v9;
  }
  return GameRoutine_1479fc0();
}

__int64 GameHr_1000940()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _BYTE v3[200];

  v0 = *(_QWORD*)GameData_212dbe8[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbe8[0] + 8LL) == 3) {
    v1 = *GameData_212d468[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 140LL) == 1) {
      result = GameRoutine_a2f5a0(*GameData_212d468[0]);
    }
    else {
      GameRoutine_10cb00(v3, "FadeTime_BGM_Hub_Out");
      GameRoutine_a2e490(v1, v3, 0);
      result = GameRoutine_10cff0(v3);
      *(_BYTE*)(v1 + 3016) = 0;
    }
    *(_DWORD*)(v0 + 8) = 4;
  }
  return result;
}

__int64 GameHr_1000c20(long double a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  v1 = *(_QWORD*)(GameData_21c96f8 + 16);
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if ((*v4)[12] == 0 && v6[69] == 0) {
        goto LABEL_11;
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
        goto LABEL_7;
      }
    }
  LABEL_11:
    v8 = *v6;
    return GameRoutine_96bc20(v1 + 16, v8);
  }
LABEL_7:
  v8 = GameRoutine_13305c0(a1);
  return GameRoutine_96bc20(v1 + 16, v8);
}

__int64 GameHr_10017b0()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24);
  *(_DWORD*)(GameData_21f3d10 + 24) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(v0 + 16))(v0 + 16);
  }
  return GameRoutine_d54e40(v0);
}

__int64 GameHr_1002210()
{
  __int64 v0;
  int v1;

  v0 = GameData_21f3d10;
  v1 = *(_DWORD*)(GameData_21f3d10 + 24) - 1;
  *(_DWORD*)(GameData_21f3d10 + 24) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 16) + 8LL))(v0 + 16);
  }
  return GameRoutine_d54e40(v0);
}

__int64 GameHr_1002440()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  _QWORD v5[2];

  v0 = GameData_21f3d08;
  v1 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v1;
  if (v1 != 0) {
    if (v1 > 0) {
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 8) + 8LL))(v0 + 8);
    if (*(int*)(v0 + 16) > 0) {
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v0 + 65) != 0) {
    *(_BYTE*)(v0 + 65) = 0;
    v2 = GameData_220b6e0;
    v3 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 168) + 8LL))(v2 + 168);
    }
    GameRoutine_d799f0(v2);
  }
LABEL_9:
  v5[1] = &GameData_1acbd02;
  v5[0] = GameRoutine_7a86e0(&GameData_1acbd02);
  return GameRoutine_716d80(v5, 1);
}

__int64 GameHr_1007b70()
{
  _QWORD v1[2];

  v1[1] = &GameData_1a8e3a8;
  v1[0] = GameRoutine_7a86e0(&GameData_1a8e3a8);
  return GameRoutine_9b11a0(&GameData_21f61c0, v1, 1);
}

__int64 GameHr_100b020()
{
  __int64 result;

  if (GameData_21ca2f8 != 0) {
    return (*(_BYTE*)(GameData_21ca2f8 + 21) & 8) != 0;
  }
  if (GameData_2219078 != 0) {
    return (*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 4) != 0;
  }
  result = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    return GameRoutine_114d520();
  }
  return result;
}

float GameHr_10197c0(float* a1, float* a2, float* a3, float* a4)
{
  float v4;
  float result;
  __int128 v6;
  int v7;
  __int128 v8;
  __int128 v9;
  int v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  float v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;

  v4 = a2[4];
  result = a3[4];
  if (v4 >= a1[4]) {
    if (result < v4) {
      v11 = *(_OWORD*)a2;
      *a2 = *a3;
      a2[1] = a3[1];
      v12 = *(_OWORD*)a2;
      *((_QWORD*)&v12 + 1) = *((unsigned int*)a3 + 2);
      *(_OWORD*)a2 = v12;
      *(_QWORD*)a3 = v11;
      v13 = *(_OWORD*)a3;
      *((_QWORD*)&v13 + 1) = DWORD2(v11);
      *(_OWORD*)a3 = v13;
      result = a2[4];
      a2[4] = a3[4];
      a3[4] = result;
      if (a2[4] < a1[4]) {
        v14 = *(_OWORD*)a1;
        *a1 = *a2;
        a1[1] = a2[1];
        v15 = *(_OWORD*)a1;
        *((_QWORD*)&v15 + 1) = *((unsigned int*)a2 + 2);
        *(_OWORD*)a1 = v15;
        *(_QWORD*)a2 = v14;
        v16 = *(_OWORD*)a2;
        *((_QWORD*)&v16 + 1) = DWORD2(v14);
        *(_OWORD*)a2 = v16;
        *(float*)&v14 = a1[4];
        a1[4] = a2[4];
        *((_DWORD*)a2 + 4) = v14;
        result = a3[4];
      }
    }
  }
  else {
    v6 = *(_OWORD*)a1;
    v7 = HIDWORD(*(_QWORD*)a1);
    if (result < v4) {
      *a1 = *a3;
      a1[1] = a3[1];
      v8 = *(_OWORD*)a1;
      *((_QWORD*)&v8 + 1) = *((unsigned int*)a3 + 2);
      *(_OWORD*)a1 = v8;
      *(_DWORD*)a3 = v6;
      *((_DWORD*)a3 + 1) = v7;
      v9 = *(_OWORD*)a3;
      *((_QWORD*)&v9 + 1) = DWORD2(v6);
      v10 = *((_DWORD*)a3 + 4);
      *(_OWORD*)a3 = v9;
      result = a1[4];
      *((_DWORD*)a1 + 4) = v10;
    LABEL_9:
      a3[4] = result;
      goto LABEL_10;
    }
    *a1 = *a2;
    a1[1] = a2[1];
    v17 = *(_OWORD*)a1;
    *((_QWORD*)&v17 + 1) = *((unsigned int*)a2 + 2);
    *(_OWORD*)a1 = v17;
    *(_DWORD*)a2 = v6;
    *((_DWORD*)a2 + 1) = v7;
    v18 = *(_OWORD*)a2;
    *((_QWORD*)&v18 + 1) = DWORD2(v6);
    *(_OWORD*)a2 = v18;
    v19 = a1[4];
    a1[4] = a2[4];
    a2[4] = v19;
    result = a3[4];
    if (result < v19) {
      v20 = *(_OWORD*)a2;
      *a2 = *a3;
      a2[1] = a3[1];
      v21 = *(_OWORD*)a2;
      *((_QWORD*)&v21 + 1) = *((unsigned int*)a3 + 2);
      *(_OWORD*)a2 = v21;
      *(_QWORD*)a3 = v20;
      v22 = *(_OWORD*)a3;
      *((_QWORD*)&v22 + 1) = DWORD2(v20);
      *(_OWORD*)a3 = v22;
      result = a2[4];
      a2[4] = a3[4];
      goto LABEL_9;
    }
  }
LABEL_10:
  if (a4[4] < result) {
    v23 = *(_OWORD*)a3;
    *a3 = *a4;
    a3[1] = a4[1];
    v24 = *(_OWORD*)a3;
    *((_QWORD*)&v24 + 1) = *((unsigned int*)a4 + 2);
    *(_OWORD*)a3 = v24;
    *(_QWORD*)a4 = v23;
    v25 = *(_OWORD*)a4;
    *((_QWORD*)&v25 + 1) = DWORD2(v23);
    *(_OWORD*)a4 = v25;
    *(float*)&v23 = a3[4];
    a3[4] = a4[4];
    *((_DWORD*)a4 + 4) = v23;
    result = a3[4];
    if (result < a2[4]) {
      v26 = *(_OWORD*)a2;
      *a2 = *a3;
      a2[1] = a3[1];
      v27 = *(_OWORD*)a2;
      *((_QWORD*)&v27 + 1) = *((unsigned int*)a3 + 2);
      *(_OWORD*)a2 = v27;
      *(_QWORD*)a3 = v26;
      v28 = *(_OWORD*)a3;
      *((_QWORD*)&v28 + 1) = DWORD2(v26);
      *(_OWORD*)a3 = v28;
      *(float*)&v26 = a2[4];
      a2[4] = a3[4];
      *((_DWORD*)a3 + 4) = v26;
      result = a2[4];
      if (result < a1[4]) {
        v29 = *(_OWORD*)a1;
        *a1 = *a2;
        a1[1] = a2[1];
        v30 = *(_OWORD*)a1;
        *((_QWORD*)&v30 + 1) = *((unsigned int*)a2 + 2);
        *(_OWORD*)a1 = v30;
        *(_QWORD*)a2 = v29;
        v31 = *(_OWORD*)a2;
        *((_QWORD*)&v31 + 1) = DWORD2(v29);
        *(_OWORD*)a2 = v31;
        result = a1[4];
        a1[4] = a2[4];
        a2[4] = result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
