#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* silk_noise_shape_quantizer_del_dec(
    __int64, __int64, int, __int64, __int64, __int64, __int64, __int64,
    __int16*, __int16*, __int64, int, int, __int16, int, int, unsigned int, int,
    unsigned int, int, int, int, __int16, unsigned int, int*, unsigned int);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
extern _UNKNOWN* SdkData_e877e8;
__int64 opus_silk_2f0ec0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                         __int64 a13, int a14, __int16 a15);

__int64 opus_silk_2f0ec0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                         __int64 a13, int a14, __int16 a15)
{
  int v15;
  unsigned __int64 v16;
  _DWORD* v19;
  unsigned __int64 v20;
  char* v21;
  int v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  int v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
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
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _DWORD* v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int* v93;
  int v94;
  unsigned int v95;
  __int64 v96;
  int v97;
  unsigned __int64 v98;
  char* v99;
  unsigned __int64 v100;
  char* v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  int v109;
  bool v110;
  int v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int16* v128;
  int v129;
  int v130;
  char v131;
  int v132;
  __int64 v133;
  int v134;
  unsigned int v135;
  char v136;
  int v137;
  char v138;
  char v139;
  int v140;
  int v141;
  unsigned int v142;
  int v143;
  int v144;
  signed int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  __int16* v150;
  __int64 v151;
  char* v152;
  int v153;
  _DWORD* v154;
  int v155;
  __int64 v156;
  __int64 v157;
  __int16* v158;
  __int64 v159;
  int v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  int v163;
  unsigned __int64 v164;
  int v165;
  _DWORD* v166;
  __int16* v167;
  int v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  int v175;
  __int64 v176;
  __int64 v177;
  unsigned int v178;
  __int64 v179;
  __int64 v180;
  char* v181;
  __int16* v182;
  int v183;
  int v184;
  unsigned __int64 v185;
  int v186;
  unsigned __int64 v187;
  int v188;
  int v189;
  unsigned int v190;
  unsigned int v191;
  unsigned int v192;
  int v193;
  unsigned int v194;
  unsigned int v195;
  int v196;
  int v197;
  __int64 v198;
  int v199;
  int v200;
  char v201;
  int v202;
  unsigned int v203;
  int v204;
  int v205;
  __int64 v206;
  int v207;
  __int64 v208;
  int v209;
  char* v210;
  __int64 i;
  char* v212;
  unsigned __int64 v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  unsigned __int64 v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  char* v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  unsigned __int64 v226;
  int v227;
  unsigned __int64 v228;
  unsigned __int64 v229;
  int v230;
  unsigned __int64 v231;
  unsigned __int64 v232;
  unsigned __int64 v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  unsigned __int64 v236;
  __int64 v237;
  int v238;
  int v239;
  _DWORD* v240;
  int v241;
  bool v242;
  int v243;
  bool v244;
  int v245;
  bool v246;
  int v247;
  bool v248;
  int v249;
  bool v250;
  int v251;
  bool v252;
  int v253;
  bool v254;
  int v255;
  __int64 v256;
  __int64 v257;
  char* v258;
  int v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  _DWORD* v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  char* v273;
  __int64 v274;
  unsigned int v275;
  char* v276;
  char* v277;
  char* v278;
  char* v279;
  __int64 v280;
  _WORD* v281;
  __int64 v282;
  unsigned int v283;
  _BYTE* v284;
  int v285;
  int v286;
  unsigned int v287;
  int v288;
  unsigned int v289;
  int v290;
  int v291;
  int v292;
  _WORD* v293;
  _BYTE* v294;
  __int64 v295;
  int v296;
  int v297;
  int v298;
  __int16* v299;
  int v300;
  __int64 v301;
  __int64 v302;
  int v303;
  int v304;
  int v305;
  __int64 v306;
  __int64 v307;
  char* v308;
  unsigned __int64 v309;
  _DWORD* v310;
  int v311;
  bool v312;
  int v313;
  bool v314;
  int v315;
  bool v316;
  int v317;
  bool v318;
  int v319;
  bool v320;
  int v321;
  bool v322;
  int v323;
  bool v324;
  int v325;
  __int64 v326;
  char* v327;
  int v328;
  char* v329;
  char* v330;
  __int64 v331;
  unsigned int v332;
  char* v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  int v337;
  __int64 v338;
  __int64 v339;
  _WORD* v340;
  _BYTE* v341;
  unsigned int v342;
  int v343;
  int v344;
  int v345;
  __int64 v346;
  unsigned int v347;
  int v348;
  char* v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
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
  __int64 v366;
  int v367;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  struct {
    __int64 v387;
    __int64 v388;
    __int64 v389;
    __int64 v390;
    __int64 v391;
    char* v392;
    __int64 v393;
    __int64 v394;
    __int64 v395;
    char* v396;
    char* v397;
    __int64 v398;
    char* v399;
    char* v400;
    char* v401;
    char gap264_[4];
    int v402;
    __int64 v403;
    char gap280_[4];
    int v404;
    __int64 v405;
    char gap296_[4];
    unsigned int v406;
    __int64 v407;
    __int64 v408;
    __int64 v409;
    char* v410;
    __int64* v411;
    char gap344_[4];
    int v412;
    __int64 v413;
    __int64 v414;
    __int64 v415;
    char* v416;
    __int64 v417;
    __int64 v418;
    __int64 v419;
    __int64 v420;
    char gap416_[4];
    int v421;
    __int64 v422;
    char gap432_[4];
    int v423;
  } v387_;

  v15 = *(_DWORD*)(a2 + 4328);
  v16 = (int)a1[1157];
  v387_.v414 = a7;
  v387_.v415 = a8;
  v19 = a1;
  v387_.v413 = a6;
  v387_.v422 = a5;
  v387_.v403 = a4;
  v387_.v421 = v15;
  v20 = 1300LL * (int)v16;
  v21 = (char*)&v387_.v387 - ((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v21, 0, v20);
  v387_.v419 = a3;
  if ((int)v16 >= 1) {
    v22 = *(unsigned __int8*)(a3 + 34);
    v23 = *(_DWORD*)(a2 + 4320);
    v24 = (_QWORD*)(a2 + 3840);
    v25 = a2 + 4LL * (int)v19[1148];
    v26 = *(_DWORD*)(a2 + 4324);
    v387_.v417 = *(unsigned __int8*)(a3 + 34);
    v387_.v418 = v16;
    v27 = *(_DWORD*)(v25 + 1276);
    v28 = (__int64*)(a2 + 4224);
    if ((_DWORD)v16 == 1) {
      v29 = 0;
    }
    else {
      v30 = 0;
      v29 = 0;
      v31 = v22;
      v387_.v420 = 2600 * ((v16 >> 1) & 0x3FFFFFFF);
      do {
        v32 = *(_QWORD*)(a2 + 3872);
        v33 = *(_QWORD*)(a2 + 3880);
        v34 = *(_QWORD*)(a2 + 3864);
        v35 = &v21[v30];
        v29 += 2;
        v30 += 2600;
        *((_DWORD*)v35 + 322) = v31 & 3;
        *((_DWORD*)v35 + 323) = v31 & 3;
        *((_DWORD*)v35 + 324) = 0;
        *((_DWORD*)v35 + 320) = v23;
        *((_DWORD*)v35 + 321) = v26;
        *((_DWORD*)v35 + 256) = v27;
        *((_DWORD*)v35 + 649) = 0;
        *((_DWORD*)v35 + 645) = v23;
        v36 = *(_QWORD*)(a2 + 3880);
        v37 = *(_QWORD*)(a2 + 3888);
        *((_DWORD*)v35 + 646) = v26;
        *((_DWORD*)v35 + 581) = v27;
        *((_QWORD*)v35 + 4) = v32;
        *((_QWORD*)v35 + 5) = v33;
        v38 = *(_QWORD*)(a2 + 3856);
        v39 = *(_QWORD*)(a2 + 3848);
        *(_QWORD*)v35 = *v24;
        *((_QWORD*)v35 + 1) = v39;
        v40 = *(_QWORD*)(a2 + 3856);
        v41 = *(_QWORD*)(a2 + 3864);
        v42 = *(_QWORD*)(a2 + 3888);
        v43 = *(_QWORD*)(a2 + 3896);
        *((_QWORD*)v35 + 6) = v37;
        *((_QWORD*)v35 + 7) = v43;
        v44 = *v24;
        v45 = *(_QWORD*)(a2 + 3848);
        *((_QWORD*)v35 + 2) = v40;
        *((_QWORD*)v35 + 3) = v41;
        v46 = *(_QWORD*)(a2 + 4304);
        *((_QWORD*)v35 + 159) = *(_QWORD*)(a2 + 4312);
        v47 = *(_QWORD*)(a2 + 4296);
        *((_QWORD*)v35 + 158) = *(_QWORD*)(a2 + 4304);
        v48 = *(_QWORD*)(a2 + 4288);
        *((_QWORD*)v35 + 157) = *(_QWORD*)(a2 + 4296);
        v49 = *(_QWORD*)(a2 + 4280);
        *((_QWORD*)v35 + 156) = *(_QWORD*)(a2 + 4288);
        v50 = *(_QWORD*)(a2 + 4272);
        *((_QWORD*)v35 + 155) = *(_QWORD*)(a2 + 4280);
        v51 = *(_QWORD*)(a2 + 4264);
        *((_QWORD*)v35 + 154) = *(_QWORD*)(a2 + 4272);
        v52 = *(_QWORD*)(a2 + 4256);
        *((_QWORD*)v35 + 153) = *(_QWORD*)(a2 + 4264);
        v53 = *(_QWORD*)(a2 + 4248);
        *((_QWORD*)v35 + 152) = *(_QWORD*)(a2 + 4256);
        v54 = *(_QWORD*)(a2 + 4240);
        *((_QWORD*)v35 + 151) = *(_QWORD*)(a2 + 4248);
        v55 = *(_QWORD*)(a2 + 4232);
        *((_QWORD*)v35 + 150) = *(_QWORD*)(a2 + 4240);
        *(_QWORD*)(v35 + 1332) = v32;
        *(_QWORD*)(v35 + 1340) = v36;
        v56 = *(_QWORD*)(a2 + 3896);
        *(_QWORD*)(v35 + 1300) = v44;
        *(_QWORD*)(v35 + 1308) = v45;
        *(_QWORD*)(v35 + 1316) = v38;
        *(_QWORD*)(v35 + 1324) = v34;
        *(_QWORD*)(v35 + 1348) = v42;
        *(_QWORD*)(v35 + 1356) = v56;
        v57 = *v28;
        *((_QWORD*)v35 + 149) = *(_QWORD*)(a2 + 4232);
        *((_QWORD*)v35 + 148) = *v28;
        LOBYTE(v56) = v31 + 1;
        v31 += 2;
        LODWORD(v56) = v56 & 3;
        *((_DWORD*)v35 + 647) = v56;
        *((_DWORD*)v35 + 648) = v56;
        v35 += 2484;
        v58 = *(_QWORD*)(a2 + 4312);
        *((_QWORD*)v35 + 2) = v54;
        *((_QWORD*)v35 + 3) = v53;
        v59 = v387_.v420;
        *((_QWORD*)v35 + 8) = v48;
        *((_QWORD*)v35 + 9) = v47;
        *((_QWORD*)v35 + 6) = v50;
        *((_QWORD*)v35 + 7) = v49;
        *((_QWORD*)v35 + 4) = v52;
        *((_QWORD*)v35 + 5) = v51;
        *(_QWORD*)v35 = v57;
        *((_QWORD*)v35 + 1) = v55;
        *((_QWORD*)v35 + 10) = v46;
        *((_QWORD*)v35 + 11) = v58;
      } while (v59 != v30);
    }
    a3 = v387_.v419;
    if ((v387_.v418 & 1) != 0) {
      v60 = v387_.v417;
      v61 = &v21[1300 * v29];
      *((_DWORD*)v61 + 320) = v23;
      *((_DWORD*)v61 + 321) = v26;
      v62 = *(_QWORD*)(a2 + 3888);
      v63 = *(_QWORD*)(a2 + 3896);
      *((_DWORD*)v61 + 256) = v27;
      *((_DWORD*)v61 + 324) = 0;
      v64 = ((_BYTE)v29 + v60) & 3;
      *((_DWORD*)v61 + 322) = v64;
      *((_DWORD*)v61 + 323) = v64;
      v65 = *(_QWORD*)(a2 + 3872);
      v66 = *(_QWORD*)(a2 + 3880);
      *((_QWORD*)v61 + 6) = v62;
      *((_QWORD*)v61 + 7) = v63;
      v67 = *v24;
      v68 = *(_QWORD*)(a2 + 3848);
      *((_QWORD*)v61 + 4) = v65;
      *((_QWORD*)v61 + 5) = v66;
      *(_QWORD*)v61 = v67;
      *((_QWORD*)v61 + 1) = v68;
      v69 = *(_QWORD*)(a2 + 3864);
      *((_QWORD*)v61 + 2) = *(_QWORD*)(a2 + 3856);
      *((_QWORD*)v61 + 3) = v69;
      v70 = *(_QWORD*)(a2 + 4304);
      *((_QWORD*)v61 + 159) = *(_QWORD*)(a2 + 4312);
      *((_QWORD*)v61 + 158) = v70;
      v71 = *(_QWORD*)(a2 + 4288);
      *((_QWORD*)v61 + 157) = *(_QWORD*)(a2 + 4296);
      *((_QWORD*)v61 + 156) = v71;
      v72 = *(_QWORD*)(a2 + 4272);
      *((_QWORD*)v61 + 155) = *(_QWORD*)(a2 + 4280);
      *((_QWORD*)v61 + 154) = v72;
      v73 = *(_QWORD*)(a2 + 4256);
      *((_QWORD*)v61 + 153) = *(_QWORD*)(a2 + 4264);
      *((_QWORD*)v61 + 152) = v73;
      v74 = *(_QWORD*)(a2 + 4240);
      *((_QWORD*)v61 + 151) = *(_QWORD*)(a2 + 4248);
      v75 = *v28;
      v76 = *(_QWORD*)(a2 + 4232);
      *((_QWORD*)v61 + 150) = v74;
      *((_QWORD*)v61 + 149) = v76;
      *((_QWORD*)v61 + 148) = v75;
    }
  }
  v77 = *(char*)(a3 + 30);
  v387_.v420 = a13;
  v78 = *(unsigned __int8*)(a3 + 29);
  v79 = (int)v19[1147];
  v387_.v423 = 0;
  v387_.v412 = *((__int16*)SdkData_e877e8 + 2 * ((char)v78 >> 1) + v77);
  if ((int)v79 >= 40) {
    v80 = 40;
  }
  else {
    v80 = (unsigned int)v79;
  }
  if (v78 == 2) {
    v81 = v19[1145];
    if (v81 < 1) {
      goto LABEL_45;
    }
    v82 = v81 & 7;
    if ((unsigned int)v81 < 8) {
      v83 = 0;
      if ((v81 & 7) == 0) {
        goto LABEL_45;
      }
      goto LABEL_40;
    }
    v84 = 0;
    v85 = -(__int64)(v81 & 0x7FFFFFF8);
    v86 = (_DWORD*)(v387_.v420 + 16);
    do {
      v84 -= 8;
      v87 = *(v86 - 4) - 3;
      if ((int)v80 < v87) {
        v87 = v80;
      }
      if (v87 >= *(v86 - 3) - 3) {
        v87 = *(v86 - 3) - 3;
      }
      v88 = *(v86 - 1);
      if (v87 >= *(v86 - 2) - 3) {
        v87 = *(v86 - 2) - 3;
      }
      if (v87 >= v88 - 3) {
        v87 = v88 - 3;
      }
      v89 = v86[1];
      if (v87 >= *(int*)v86 - 3) {
        v87 = *(int*)v86 - 3;
      }
      if (v87 >= v89 - 3) {
        v87 = v89 - 3;
      }
      v90 = v86[2];
      v91 = v86[3];
      v86 += 8;
      v92 = v90 - 3;
      if (v87 >= v92) {
        v87 = v92;
      }
      if (v87 >= v91 - 3) {
        v80 = (unsigned int)(v91 - 3);
      }
      else {
        v80 = (unsigned int)v87;
      }
    } while (v85 != v84);
    v83 = -v84;
    if (v82 != 0) {
    LABEL_40:
      v93 = (int*)(v387_.v420 + 4 * v83);
      do {
        v94 = *v93++;
        v95 = v94 - 3;
        if ((int)v80 >= v94 - 3) {
          v80 = v95;
        }
        else {
          v80 = (unsigned int)v80;
        }
        --v82;
      } while (v82 != 0);
    }
  }
  else if (v387_.v421 >= 1) {
    if ((int)v80 >= v387_.v421 - 3) {
      v80 = (unsigned int)(v387_.v421 - 3);
    }
    else {
      v80 = (unsigned int)v80;
    }
  }
LABEL_45:
  v96 = (int)v19[1148];
  v387_.v417 = v80;
  v387_.v418 = a12;
  LODWORD(v387_.v416) = *(unsigned __int8*)(a3 + 31);
  v97 = v19[1146] + v96;
  v98 = 4LL * v97;
  v99 = (char*)&v387_.v387 - ((v98 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v99, 0, v98);
  v100 = 2LL * v97;
  v101 = (char*)&v387_.v387 - ((v100 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v101, 0, v100);
  v102 = (char*)&v387_.v387 - ((4 * v79 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v102, 0, 4 * v79);
  v387_.v411 = &v387_.v387 - 20;
  *(_DWORD*)(a2 + 4336) = v96;
  *(_DWORD*)(a2 + 4332) = v96;
  v103 = a2 + 2 * v96;
  v385 = 0;
  v386 = 0;
  v383 = 0;
  v384 = 0;
  v381 = 0;
  v382 = 0;
  v379 = 0;
  v380 = 0;
  v377 = 0;
  v378 = 0;
  v375 = 0;
  v376 = 0;
  v373 = 0;
  v374 = 0;
  v371 = 0;
  v372 = 0;
  v369 = 0;
  v370 = 0;
  *(&v387_.v387 - 20) = 0;
  *(&v387_.v387 - 19) = 0;
  if ((int)v19[1145] >= 1) {
    v104 = a2 + 1280;
    v105 = 0;
    v106 = 0;
    v107 = (__int64)v102;
    v108 = v387_.v403;
    v387_.v410 = v101;
    v387_.v399 = v99;
    v387_.v408 = a10;
    v387_.v409 = a11;
    v109 = (int)v387_.v416;
    v387_.v406 = a14;
    v387_.v416 = v102;
    v387_.v394 = v387_.v417 & 0x7FFFFFFC;
    v387_.v395 = v387_.v417 & 3;
    v387_.v392 = v21 + 1296;
    v387_.v393 = (unsigned int)-(int)v387_.v417;
    v110 = v109 == 4;
    v387_.v407 = a9;
    if (v109 == 4) {
      v111 = 3;
    }
    else {
      v111 = 1;
    }
    v112 = v110;
    v387_.v404 = v111;
    v387_.v405 = v112;
    v387_.v389 = 4 - 2LL * (int)v387_.v417;
    v387_.v388 = 1LL - (int)v387_.v417;
    v387_.v391 = -2LL * (int)v387_.v417;
    v387_.v390 = -(__int64)(int)v387_.v417;
    v387_.v397 = v99 + 16;
    v387_.v398 = a15;
    v387_.v396 = v101 + 8;
    v387_.v400 = v21 + 1060;
    v387_.v401 = v102 + 16;
    while (1) {
      v127 = v387_.v418;
      v126 = v387_.v419;
      v128 = (__int16*)(v387_.v413 + 32LL * ((unsigned int)v387_.v405 |
                                             ((unsigned int)v105 >> 1)));
      v129 = *(_DWORD*)(v387_.v407 + 4 * v105);
      *(_DWORD*)(a2 + 4348) = 0;
      v130 = *(unsigned __int8*)(v126 + 29);
      if (v130 != 2) {
        goto LABEL_58;
      }
      v387_.v421 = *(_DWORD*)(v387_.v420 + 4 * v105);
      if ((v387_.v404 & (unsigned int)v105) != 0) {
        v130 = 2;
      LABEL_58:
        v131 = 1;
        goto LABEL_59;
      }
      v387_.v402 = v129;
      v387_.v403 = v108;
      if (v105 == 2) {
        break;
      }
    LABEL_223:
      v298 = v19[1160];
      v299 = v128;
      v300 = v19[1148] - (v387_.v421 + v298) - 2;
      silk_LPC_analysis_filter((__int64)&v101[2 * v300],
                               a2 + 2LL * (v300 + v19[1147] * (int)v105), v128,
                               v387_.v421 + v298 + 2, v298);
      v127 = v387_.v418;
      v126 = v387_.v419;
      v128 = v299;
      v131 = 0;
      v108 = v387_.v403;
      v107 = (__int64)v387_.v416;
      v129 = v387_.v402;
      *(_DWORD*)(a2 + 4332) = v19[1148];
      *(_DWORD*)(a2 + 4348) = 1;
      v130 = *(unsigned __int8*)(v126 + 29);
    LABEL_59:
      v132 = *(_DWORD*)(v127 + 4 * v105);
      v133 = (unsigned int)v19[1157];
      v134 = *(_DWORD*)(v387_.v420 + 4 * v105);
      if (v132 <= 1) {
        v135 = 1;
      }
      else {
        v135 = *(_DWORD*)(v127 + 4 * v105);
      }
      v136 = __clz((unsigned int)(v135));
      v137 =
          ((unsigned __int64)((int)((unsigned __int64)-(
                                        __int64)((((__int64)(0x1FFFFFFF /
                                                             ((int)(v135
                                                                    << (v136 -
                                                                        1)) >>
                                                              16))
                                                   << 19) *
                                                  (int)(v135 << (v136 - 1))) &
                                                 0xFFFFFFF800000000LL) >>
                                    32) *
                              (__int64)(0x1FFFFFFF /
                                        ((int)(v135 << (v136 - 1)) >> 16))) >>
           16) +
          ((0x1FFFFFFF / ((int)(v135 << (v136 - 1)) >> 16)) << 16);
      v138 = 15 - v136;
      v139 = v136 - 15;
      v140 = (int)0x80000000 >> v139;
      v141 = v137 >> v138;
      if (v137 > (int)0x80000000 >> v139) {
        v140 = v137;
      }
      if (v137 <= (int)(0x7FFFFFFFu >> v139)) {
        v142 = v140;
      }
      else {
        v142 = 0x7FFFFFFFu >> v139;
      }
      v143 = v142 << v139;
      if (v132 < 0x20000) {
        v144 = v143;
      }
      else {
        v144 = v141;
      }
      v145 = v19[1147];
      if (v145 >= 1) {
        v146 = (__int64)((v144 >> 4) + 1) >> 1;
        if ((unsigned int)v145 < 8) {
          v147 = 0;
          v148 = v145 & 7;
          if ((v145 & 7) == 0) {
            goto LABEL_79;
          }
        LABEL_77:
          v166 = (_DWORD*)(v107 + 4 * v147);
          v167 = (__int16*)(v108 + 2 * v147);
          do {
            v168 = *v167++;
            --v148;
            *(_DWORD*)v166++ =
                (unsigned __int64)(v168 * (__int64)(int)v146) >> 16;
          } while (v148 != 0);
          goto LABEL_79;
        }
        v149 = v387_.v401;
        v150 = (__int16*)(v108 + 8);
        v151 = v127;
        v152 = v21;
        v153 = v106;
        v154 = v19;
        v155 = *(_DWORD*)(v387_.v420 + 4 * v105);
        v156 = v103;
        v157 = v126;
        v158 = v128;
        v159 = 0;
        do {
          v160 = *(v150 - 2);
          v159 -= 8;
          v161 = (unsigned __int64)(*(v150 - 3) * (__int64)(int)v146) >> 16;
          v162 = (unsigned __int64)(*(v150 - 1) * (__int64)(int)v146) >> 16;
          *((_DWORD*)v149 - 4) =
              (unsigned __int64)(*(v150 - 4) * (__int64)(int)v146) >> 16;
          *((_DWORD*)v149 - 3) = v161;
          v163 = *v150;
          *((_DWORD*)v149 - 2) =
              (unsigned __int64)(v160 * (__int64)(int)v146) >> 16;
          *((_DWORD*)v149 - 1) = v162;
          v164 = (unsigned __int64)(v150[1] * (__int64)(int)v146) >> 16;
          *(_DWORD*)v149 = (unsigned __int64)(v163 * (__int64)(int)v146) >> 16;
          *((_DWORD*)v149 + 1) = v164;
          v165 = v150[2];
          LODWORD(v164) = v150[3];
          v150 += 8;
          *((_DWORD*)v149 + 2) =
              (unsigned __int64)(v165 * (__int64)(int)v146) >> 16;
          *((_DWORD*)v149 + 3) =
              (unsigned __int64)((int)v164 * (__int64)(int)v146) >> 16;
          v149 += 32;
        } while (-(__int64)(v145 & 0x7FFFFFF8) != v159);
        v127 = v151;
        v99 = v387_.v399;
        v147 = -v159;
        v128 = v158;
        v126 = v157;
        v103 = v156;
        v134 = v155;
        v19 = v154;
        v106 = v153;
        v21 = v152;
        v148 = v145 & 7;
        if ((v145 & 7) != 0) {
          goto LABEL_77;
        }
      }
    LABEL_79:
      if ((v131 & 1) != 0) {
        goto LABEL_95;
      }
      v169 = *(int*)(a2 + 4332);
      LODWORD(v170) = v169 - v134 - 2;
      if ((int)v170 >= (int)v169) {
        goto LABEL_95;
      }
      v171 = ((unsigned __int64)((int)v387_.v398 * (__int64)v144) >> 14) &
             0xFFFFFFFC;
      if (v105 != 0) {
        LODWORD(v171) = v144;
      }
      v172 = (int)v170;
      v173 = (v134 + 2) & 7LL;
      if (v173 != 0) {
        v170 = (int)v170;
        do {
          --v173;
          *(_DWORD*)&v99[4 * v170] =
              (unsigned __int64)(*(__int16*)&v101[2 * v170] *
                                 (__int64)(int)v171) >>
              16;
          ++v170;
        } while (v173 != 0);
        if ((unsigned __int64)(v172 - v169) > 0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_95;
        }
      LABEL_93:
        v180 = v169 - v170;
        v181 = &v387_.v397[4 * v170];
        v182 = (__int16*)&v387_.v396[2 * v170];
        do {
          v183 = *(v182 - 2);
          v180 -= 8;
          v184 = *(v182 - 1);
          v185 = (unsigned __int64)(*(v182 - 3) * (__int64)(int)v171) >> 16;
          *((_DWORD*)v181 - 4) =
              (unsigned __int64)(*(v182 - 4) * (__int64)(int)v171) >> 16;
          *((_DWORD*)v181 - 3) = v185;
          v186 = *v182;
          *((_DWORD*)v181 - 2) =
              (unsigned __int64)(v183 * (__int64)(int)v171) >> 16;
          *((_DWORD*)v181 - 1) =
              (unsigned __int64)(v184 * (__int64)(int)v171) >> 16;
          v187 = (unsigned __int64)(v182[1] * (__int64)(int)v171) >> 16;
          *(_DWORD*)v181 = (unsigned __int64)(v186 * (__int64)(int)v171) >> 16;
          *((_DWORD*)v181 + 1) = v187;
          v188 = v182[2];
          LODWORD(v187) = v182[3];
          v182 += 8;
          *((_DWORD*)v181 + 2) =
              (unsigned __int64)(v188 * (__int64)(int)v171) >> 16;
          *((_DWORD*)v181 + 3) =
              (unsigned __int64)((int)v187 * (__int64)(int)v171) >> 16;
          v181 += 32;
        } while (v180 != 0);
        goto LABEL_95;
      }
      v170 = (int)v170;
      if ((unsigned __int64)((int)v170 - v169) <= 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_93;
      }
    LABEL_95:
      v189 = *(_DWORD*)(a2 + 4344);
      v190 = (v129 << 15) & 0xFFFF0000 | (v129 >> 2);
      if (v132 == v189) {
        v113 = v387_.v417;
        v114 = v108;
      }
      else {
        v113 = v387_.v417;
        if (v189 >= 0) {
          v191 = *(_DWORD*)(a2 + 4344);
        }
        else {
          v191 = -v189;
        }
        v192 = __clz((unsigned int)(v191));
        v193 = v189 << (v192 - 1);
        if (v132 >= 0) {
          v194 = v132;
        }
        else {
          v194 = -v132;
        }
        v195 = __clz((unsigned int)(v194));
        v196 = v192 - v195;
        v197 = v132 << (v195 - 1);
        v198 = (0x1FFFFFFF / (v197 >> 16) * (__int64)v193) >> 16;
        v199 =
            ((unsigned __int64)(0x1FFFFFFF / (v197 >> 16) *
                                (__int64)(int)(v193 -
                                               (((unsigned __int64)((int)v198 *
                                                                    (__int64)
                                                                        v197) >>
                                                 29) &
                                                0xFFFFFFF8))) >>
             16) +
            v198;
        if ((unsigned int)(v196 + 29) >= 0x30) {
          v200 = 0;
        }
        else {
          v200 = v199 >> (v196 + 13);
        }
        v201 = -13 - v196;
        v202 = (int)0x80000000 >> (-13 - v196);
        if (v202 <= v199) {
          v202 = v199;
        }
        if ((int)(0x7FFFFFFFu >> (-13 - v196)) >= v199) {
          v203 = v202;
        }
        else {
          v203 = 0x7FFFFFFFu >> (-13 - v196);
        }
        v242 = v196 <= -14;
        v204 = v19[1148];
        v205 = v203 << v201;
        if (!v242) {
          v205 = v200;
        }
        if (v204 >= 1) {
          v206 = *(int*)(a2 + 4336) - v204;
          do {
            *(_DWORD*)(v104 + 4 * v206) =
                (unsigned __int64)(*(int*)(v104 + 4 * v206) * (__int64)v205) >>
                16;
            ++v206;
          } while (v206 < *(int*)(a2 + 4336));
        }
        if (v130 == 2 && *(_DWORD*)(a2 + 4348) == 0) {
          v207 = *(_DWORD*)(a2 + 4332);
          LODWORD(v208) = v207 - v134 - 2;
          if ((int)v208 < (int)(v207 - v113)) {
            v208 = (int)v208;
            do {
              *(_DWORD*)&v99[4 * v208] =
                  (unsigned __int64)(*(int*)&v99[4 * v208] * (__int64)v205) >>
                  16;
              ++v208;
            } while (v208 < (int)(v207 - v113));
          }
        }
        if ((int)v133 >= 1) {
          v209 = v205;
          v210 = v387_.v400;
          for (i = 0; i != v133; ++i) {
            v212 = &v21[1300 * i];
            v213 =
                (unsigned __int64)(*((int*)v212 + 321) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 320) =
                (unsigned __int64)(*((int*)v212 + 320) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 321) = v213;
            v214 = (unsigned __int64)(*((int*)v212 + 1) * (__int64)v209) >> 16;
            *(_DWORD*)v212 =
                (unsigned __int64)(*(int*)v212 * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 1) = v214;
            v215 = (unsigned __int64)(*((int*)v212 + 3) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 2) =
                (unsigned __int64)(*((int*)v212 + 2) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 3) = v215;
            v216 = (unsigned __int64)(*((int*)v212 + 5) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 4) =
                (unsigned __int64)(*((int*)v212 + 4) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 5) = v216;
            v217 = (unsigned __int64)(*((int*)v212 + 7) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 6) =
                (unsigned __int64)(*((int*)v212 + 6) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 7) = v217;
            v218 = (unsigned __int64)(*((int*)v212 + 9) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 8) =
                (unsigned __int64)(*((int*)v212 + 8) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 9) = v218;
            v219 = (unsigned __int64)(*((int*)v212 + 11) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 10) =
                (unsigned __int64)(*((int*)v212 + 10) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 11) = v219;
            v220 = (unsigned __int64)(*((int*)v212 + 13) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 12) =
                (unsigned __int64)(*((int*)v212 + 12) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 13) = v220;
            v221 = (unsigned __int64)(*((int*)v212 + 15) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 14) =
                (unsigned __int64)(*((int*)v212 + 14) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 15) = v221;
            *((_DWORD*)v212 + 296) =
                (unsigned __int64)(*((int*)v212 + 296) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 297) =
                (unsigned __int64)(*((int*)v212 + 297) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 298) =
                (unsigned __int64)(*((int*)v212 + 298) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 299) =
                (unsigned __int64)(*((int*)v212 + 299) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 300) =
                (unsigned __int64)(*((int*)v212 + 300) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 301) =
                (unsigned __int64)(*((int*)v212 + 301) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 302) =
                (unsigned __int64)(*((int*)v212 + 302) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 303) =
                (unsigned __int64)(*((int*)v212 + 303) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 304) =
                (unsigned __int64)(*((int*)v212 + 304) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 305) =
                (unsigned __int64)(*((int*)v212 + 305) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 306) =
                (unsigned __int64)(*((int*)v212 + 306) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 307) =
                (unsigned __int64)(*((int*)v212 + 307) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 308) =
                (unsigned __int64)(*((int*)v212 + 308) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 309) =
                (unsigned __int64)(*((int*)v212 + 309) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 310) =
                (unsigned __int64)(*((int*)v212 + 310) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 311) =
                (unsigned __int64)(*((int*)v212 + 311) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 312) =
                (unsigned __int64)(*((int*)v212 + 312) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 313) =
                (unsigned __int64)(*((int*)v212 + 313) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 314) =
                (unsigned __int64)(*((int*)v212 + 314) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 315) =
                (unsigned __int64)(*((int*)v212 + 315) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 316) =
                (unsigned __int64)(*((int*)v212 + 316) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 317) =
                (unsigned __int64)(*((int*)v212 + 317) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 318) =
                (unsigned __int64)(*((int*)v212 + 318) * (__int64)v209) >> 16;
            *((_DWORD*)v212 + 319) =
                (unsigned __int64)(*((int*)v212 + 319) * (__int64)v209) >> 16;
            v222 = 40;
            v223 = v210;
            do {
              v222 -= 10;
              v224 =
                  (unsigned __int64)(*((int*)v223 - 48) * (__int64)v209) >> 16;
              v225 =
                  (unsigned __int64)(*((int*)v223 - 9) * (__int64)v209) >> 16;
              v226 =
                  (unsigned __int64)(*((int*)v223 - 8) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 49) =
                  (unsigned __int64)(*((int*)v223 - 49) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 48) = v224;
              v227 = *((_DWORD*)v223 - 47);
              LODWORD(v224) = *((_DWORD*)v223 - 46);
              *((_DWORD*)v223 - 9) = v225;
              *((_DWORD*)v223 - 8) = v226;
              v228 =
                  (unsigned __int64)(*((int*)v223 - 7) * (__int64)v209) >> 16;
              v229 =
                  (unsigned __int64)(*((int*)v223 - 6) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 47) =
                  (unsigned __int64)(v227 * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 46) =
                  (unsigned __int64)((int)v224 * (__int64)v209) >> 16;
              v230 = *((_DWORD*)v223 - 45);
              LODWORD(v224) = *((_DWORD*)v223 - 44);
              *((_DWORD*)v223 - 7) = v228;
              *((_DWORD*)v223 - 6) = v229;
              LODWORD(v229) = *((_DWORD*)v223 - 4);
              v231 =
                  (unsigned __int64)(*((int*)v223 - 5) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 45) =
                  (unsigned __int64)(v230 * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 44) =
                  (unsigned __int64)((int)v224 * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 5) = v231;
              *((_DWORD*)v223 - 4) =
                  (unsigned __int64)((int)v229 * (__int64)v209) >> 16;
              LODWORD(v229) = *((_DWORD*)v223 - 2);
              v232 =
                  (unsigned __int64)(*((int*)v223 - 42) * (__int64)v209) >> 16;
              v233 =
                  (unsigned __int64)(*((int*)v223 - 3) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 43) =
                  (unsigned __int64)(*((int*)v223 - 43) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 42) = v232;
              *((_DWORD*)v223 - 3) = v233;
              *((_DWORD*)v223 - 2) =
                  (unsigned __int64)((int)v229 * (__int64)v209) >> 16;
              v234 =
                  (unsigned __int64)(*((int*)v223 - 1) * (__int64)v209) >> 16;
              v235 =
                  (unsigned __int64)(*((int*)v223 - 40) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 41) =
                  (unsigned __int64)(*((int*)v223 - 41) * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 40) = v235;
              v236 = (unsigned __int64)(*(int*)v223 * (__int64)v209) >> 16;
              *((_DWORD*)v223 - 1) = v234;
              *(_DWORD*)v223 = v236;
              v223 += 40;
            } while (v222 != 0);
            v210 += 1300;
          }
        }
        v132 = *(_DWORD*)(v127 + 4 * v105);
        v114 = v108;
        *(_DWORD*)(a2 + 4344) = v132;
        LOBYTE(v130) = *(_BYTE*)(v126 + 29);
        v145 = v19[1147];
        LODWORD(v133) = v19[1157];
      }
      v115 = (char)v130;
      v116 = v19[1159];
      v117 = v106 + 1;
      v118 = v19[1160];
      v119 = v19[1168];
      v120 = *(_DWORD*)(v387_.v408 + 4 * v105);
      v121 = *(_DWORD*)(v387_.v409 + 4 * v105);
      LODWORD(v380) = v106;
      v122 = v387_.v422;
      silk_noise_shape_quantizer_del_dec(
          a2, (__int64)v21, v115, v107, v387_.v422, v103, (__int64)v99,
          (__int64)v387_.v411, v128, (__int16*)(v387_.v414 + 10 * v105),
          v387_.v415 + 48 * v105, v387_.v421, v190, v120, v121, v132,
          v387_.v406, v387_.v412, v145, v380, v116, v118, v119, v133,
          &v387_.v423, v113);
      v107 = (__int64)v387_.v416;
      v123 = (int)v19[1147];
      ++v105;
      v108 = v114 + 2 * v123;
      v124 = v122 + v123;
      v103 += 2 * v123;
      v125 = (int)v19[1145];
      v101 = v387_.v410;
      v387_.v422 = v124;
      v106 = v117;
      if (v105 >= v125) {
        goto LABEL_224;
      }
    }
    v174 = (unsigned int)v19[1157];
    if ((int)v174 < 2) {
      v176 = v387_.v394;
      v237 = v387_.v395;
      v238 = v387_.v393;
      if ((_DWORD)v174 != 1) {
        v239 = v387_.v417;
        LODWORD(v260) = 0;
        goto LABEL_194;
      }
      v239 = v387_.v417;
      v178 = 0;
    }
    else {
      v175 = *((_DWORD*)v21 + 324);
      v176 = v387_.v394;
      v177 = v174 - 1;
      v178 = 0;
      if ((unsigned int)(v174 - 2) >= 7) {
        v179 = 1;
        v240 = v21;
        do {
          v241 = v240[649];
          v242 = v241 < v175;
          if (v241 < v175) {
            v175 = v240[649];
          }
          v243 = v240[974];
          if (v242) {
            v178 = v179;
          }
          v244 = v243 < v175;
          if (v243 < v175) {
            v175 = v240[974];
          }
          v245 = v240[1299];
          if (v244) {
            v178 = v179 + 1;
          }
          v246 = v245 < v175;
          if (v245 < v175) {
            v175 = v240[1299];
          }
          v247 = v240[1624];
          if (v246) {
            v178 = v179 + 2;
          }
          v248 = v247 < v175;
          if (v247 < v175) {
            v175 = v240[1624];
          }
          v249 = v240[1949];
          if (v248) {
            v178 = v179 + 3;
          }
          v250 = v249 < v175;
          if (v249 < v175) {
            v175 = v240[1949];
          }
          v251 = v240[2274];
          if (v250) {
            v178 = v179 + 4;
          }
          v252 = v251 < v175;
          if (v251 < v175) {
            v175 = v240[2274];
          }
          v253 = v240[2599];
          if (v252) {
            v178 = v179 + 5;
          }
          v254 = v253 < v175;
          if (v253 < v175) {
            v175 = v240[2599];
          }
          v255 = v240[2924];
          if (v254) {
            v178 = v179 + 6;
          }
          v256 = v179 + 7;
          v179 += 8;
          v240 += 2600;
          if (v255 < v175) {
            v178 = v256;
            v175 = v255;
          }
        } while (v256 != (v177 & 0xFFFFFFFFFFFFFFF8LL));
      }
      else {
        v179 = 1;
      }
      v239 = v387_.v417;
      v237 = v387_.v395;
      v238 = v387_.v393;
      v257 = v177 & 7;
      if (v257 != 0) {
        v258 = &v387_.v392[1300 * v179];
        do {
          v259 = *(_DWORD*)v258;
          v258 += 1300;
          if (v259 < v175) {
            v178 = v179;
            v175 = v259;
          }
          LODWORD(v179) = v179 + 1;
          --v257;
        } while (v257 != 0);
      }
    }
    v260 = v178;
    if ((unsigned int)(v174 - 1) < 7) {
      v261 = 0;
      v262 = v174 & 7;
      if (v262 != 0) {
      LABEL_189:
        v273 = &v387_.v392[1300 * v261];
        v274 = v260 - v261;
        do {
          if (v274 != 0) {
            *(_DWORD*)v273 += 0x7FFFFFF;
          }
          v273 += 1300;
          --v274;
          --v262;
        } while (v262 != 0);
      }
    LABEL_194:
      if (v239 >= 1) {
        v275 = v387_.v423 + v239;
        v276 = &v21[1300 * (unsigned int)v260];
        v277 = v276 + 544;
        v278 = v276 + 704;
        v279 = v276 + 1024;
        if ((unsigned int)v239 >= 4) {
          v280 = 0;
          v281 = (_WORD*)(v103 + v387_.v389);
          v282 = v387_.v422 + v387_.v388;
          do {
            v283 = (int)(v275 - 1) % 40 + ((int)(v275 - 1) % 40 < 0 ? 0x28 : 0);
            v284 = (_BYTE*)(v282 + v280);
            *(_BYTE*)(v282 + v280 - 1) =
                (unsigned int)((*(_DWORD*)&v277[4 * v283] >> 9) + 1) >> 1;
            v285 =
                (((int)((unsigned __int64)(*(int*)(v127 + 4) *
                                           (__int64)*(int*)&v278[4 * v283]) >>
                        16) >>
                  13) +
                 1) >>
                1;
            if (v285 <= -32768) {
              v285 = -32768;
            }
            if (v285 >= 0x7FFF) {
              LOWORD(v285) = 0x7FFF;
            }
            *(v281 - 2) = v285;
            v286 = v238 + v280;
            v280 += 4;
            *(_DWORD*)(v104 + 4LL * (v286 + *(int*)(a2 + 4336))) =
                *(_DWORD*)&v279[4 * v283];
            v287 = (int)(v283 - 1) % 40 + ((int)(v283 - 1) % 40 < 0 ? 0x28 : 0);
            *v284 = (unsigned int)((*(_DWORD*)&v277[4 * v287] >> 9) + 1) >> 1;
            v288 =
                (((int)((unsigned __int64)(*(int*)(v127 + 4) *
                                           (__int64)*(int*)&v278[4 * v287]) >>
                        16) >>
                  13) +
                 1) >>
                1;
            if (v288 <= -32768) {
              v288 = -32768;
            }
            if (v288 >= 0x7FFF) {
              LOWORD(v288) = 0x7FFF;
            }
            *(v281 - 1) = v288;
            *(_DWORD*)(v104 + 4LL * (v286 + *(int*)(a2 + 4336) + 1)) =
                *(_DWORD*)&v279[4 * v287];
            v289 = (int)(v287 - 1) % 40 + ((int)(v287 - 1) % 40 < 0 ? 0x28 : 0);
            v284[1] = (unsigned int)((*(_DWORD*)&v277[4 * v289] >> 9) + 1) >> 1;
            v290 =
                (((int)((unsigned __int64)(*(int*)(v127 + 4) *
                                           (__int64)*(int*)&v278[4 * v289]) >>
                        16) >>
                  13) +
                 1) >>
                1;
            if (v290 <= -32768) {
              v290 = -32768;
            }
            if (v290 >= 0x7FFF) {
              LOWORD(v290) = 0x7FFF;
            }
            *v281 = v290;
            *(_DWORD*)(v104 + 4LL * (v286 + *(int*)(a2 + 4336) + 2)) =
                *(_DWORD*)&v279[4 * v289];
            v275 = (int)(v289 - 1) % 40 + ((int)(v289 - 1) % 40 < 0 ? 0x28 : 0);
            v284[2] = (unsigned int)((*(_DWORD*)&v277[4 * v275] >> 9) + 1) >> 1;
            v291 =
                (((int)((unsigned __int64)(*(int*)(v127 + 4) *
                                           (__int64)*(int*)&v278[4 * v275]) >>
                        16) >>
                  13) +
                 1) >>
                1;
            if (v291 <= -32768) {
              v291 = -32768;
            }
            if (v291 >= 0x7FFF) {
              LOWORD(v291) = 0x7FFF;
            }
            v281[1] = v291;
            v281 += 4;
            *(_DWORD*)(v104 + 4LL * (v286 + *(int*)(a2 + 4336) + 3)) =
                *(_DWORD*)&v279[4 * v275];
          } while (v176 != v280);
        }
        else {
          v280 = 0;
        }
        if (v237 != 0) {
          v292 = v238 + v280;
          v293 = (_WORD*)(v103 + v387_.v391 + 2 * v280);
          v294 = (_BYTE*)(v387_.v422 + v387_.v390 + v280);
          v295 = v237;
          do {
            v275 = (int)(v275 - 1) % 40 + ((int)(v275 - 1) % 40 < 0 ? 0x28 : 0);
            *v294++ = (unsigned int)((*(_DWORD*)&v277[4 * v275] >> 9) + 1) >> 1;
            v296 =
                (((int)((unsigned __int64)(*(int*)(v127 + 4) *
                                           (__int64)*(int*)&v278[4 * v275]) >>
                        16) >>
                  13) +
                 1) >>
                1;
            if (v296 <= -32768) {
              v296 = -32768;
            }
            if (v296 >= 0x7FFF) {
              LOWORD(v296) = 0x7FFF;
            }
            --v295;
            *v293++ = v296;
            v297 = v292 + *(int*)(a2 + 4336);
            ++v292;
            *(_DWORD*)(v104 + 4LL * v297) = *(_DWORD*)&v279[4 * v275];
          } while (v295 != 0);
        }
      }
      v106 = 0;
      goto LABEL_223;
    }
    v263 = 0;
    v264 = v21;
    while (1) {
      v265 = v263;
      if (v260 == v263) {
        v266 = v263 + 1;
        if (v265 + 1 == v260) {
          goto LABEL_173;
        }
      }
      else {
        v264[324] += 0x7FFFFFF;
        v266 = v263 + 1;
        if (v265 + 1 == v260) {
        LABEL_173:
          v267 = v266 + 1;
          if (v267 == v260) {
            goto LABEL_174;
          }
          goto LABEL_182;
        }
      }
      v264[649] += 0x7FFFFFF;
      v267 = v266 + 1;
      if (v267 == v260) {
      LABEL_174:
        v268 = v267 + 1;
        if (v268 == v260) {
          goto LABEL_175;
        }
        goto LABEL_183;
      }
    LABEL_182:
      v264[974] += 0x7FFFFFF;
      v268 = v267 + 1;
      if (v268 == v260) {
      LABEL_175:
        v269 = v268 + 1;
        if (v269 == v260) {
          goto LABEL_176;
        }
        goto LABEL_184;
      }
    LABEL_183:
      v264[1299] += 0x7FFFFFF;
      v269 = v268 + 1;
      if (v269 == v260) {
      LABEL_176:
        v270 = v269 + 1;
        if (v270 == v260) {
          goto LABEL_177;
        }
        goto LABEL_185;
      }
    LABEL_184:
      v264[1624] += 0x7FFFFFF;
      v270 = v269 + 1;
      if (v270 == v260) {
      LABEL_177:
        v271 = v270 + 1;
        if (v271 == v260) {
          goto LABEL_178;
        }
        goto LABEL_186;
      }
    LABEL_185:
      v264[1949] += 0x7FFFFFF;
      v271 = v270 + 1;
      if (v271 == v260) {
      LABEL_178:
        v272 = v271 + 1;
        if (v272 != v260) {
          goto LABEL_187;
        }
        goto LABEL_170;
      }
    LABEL_186:
      v264[2274] += 0x7FFFFFF;
      v272 = v271 + 1;
      if (v272 != v260) {
      LABEL_187:
        v264[2599] += 0x7FFFFFF;
      }
    LABEL_170:
      v264 += 2600;
      v263 = v272 + 1;
      if (v263 == (v174 & 0x7FFFFFF8)) {
        v261 = v265 + 8;
        v262 = v174 & 7;
        if (v262 != 0) {
          goto LABEL_189;
        }
        goto LABEL_194;
      }
    }
  }
LABEL_224:
  v301 = (unsigned int)v19[1157];
  v302 = v387_.v418;
  if ((int)v301 <= 1) {
    v304 = v387_.v417;
    v308 = v21;
    *(_BYTE*)(v387_.v419 + 34) = *((_DWORD*)v21 + 323);
    if (v304 < 1) {
      goto LABEL_286;
    }
  }
  else {
    v303 = *((_DWORD*)v21 + 324);
    v304 = v387_.v417;
    v305 = 0;
    v306 = (v301 - 1) & 7;
    if ((unsigned int)(v301 - 2) >= 7) {
      v309 = (v301 - 1) & 0xFFFFFFFFFFFFFFF8LL;
      v307 = 1;
      v310 = v21;
      do {
        v311 = v310[649];
        v312 = v311 < v303;
        if (v311 < v303) {
          v303 = v310[649];
        }
        v313 = v310[974];
        if (v312) {
          v305 = v307;
        }
        v314 = v313 < v303;
        if (v313 < v303) {
          v303 = v310[974];
        }
        v315 = v310[1299];
        if (v314) {
          v305 = v307 + 1;
        }
        v316 = v315 < v303;
        if (v315 < v303) {
          v303 = v310[1299];
        }
        v317 = v310[1624];
        if (v316) {
          v305 = v307 + 2;
        }
        v318 = v317 < v303;
        if (v317 < v303) {
          v303 = v310[1624];
        }
        v319 = v310[1949];
        if (v318) {
          v305 = v307 + 3;
        }
        v320 = v319 < v303;
        if (v319 < v303) {
          v303 = v310[1949];
        }
        v321 = v310[2274];
        if (v320) {
          v305 = v307 + 4;
        }
        v322 = v321 < v303;
        if (v321 < v303) {
          v303 = v310[2274];
        }
        v323 = v310[2599];
        if (v322) {
          v305 = v307 + 5;
        }
        v324 = v323 < v303;
        if (v323 < v303) {
          v303 = v310[2599];
        }
        v325 = v310[2924];
        if (v324) {
          v305 = v307 + 6;
        }
        v326 = v307 + 7;
        v307 += 8;
        v310 += 2600;
        if (v325 < v303) {
          v305 = v326;
          v303 = v325;
        }
      } while (v326 != v309);
    }
    else {
      v307 = 1;
    }
    if (v306 != 0) {
      v327 = &v21[1300 * v307 + 1296];
      do {
        v328 = *(_DWORD*)v327;
        v327 += 1300;
        if (v328 < v303) {
          v305 = v307;
          v303 = v328;
        }
        LODWORD(v307) = v307 + 1;
        --v306;
      } while (v306 != 0);
    }
    v308 = &v21[1300 * v305];
    *(_BYTE*)(v387_.v419 + 34) = *((_DWORD*)v308 + 323);
    if (v304 < 1) {
      goto LABEL_286;
    }
  }
  v329 = v308 + 544;
  v330 = v308 + 704;
  v331 = (unsigned int)v304;
  v332 = v387_.v423 + v304;
  v333 = v308 + 1024;
  v334 = (__int64)*(int*)(v302 + 4LL * (int)v19[1145] - 4) >> 6;
  v335 = a2 + 1280;
  if (v304 == 1) {
    v336 = 0;
  LABEL_281:
    v346 = v336 - v331;
    v347 = (int)(v332 - 1) % 40 + ((int)(v332 - 1) % 40 < 0 ? 0x28 : 0);
    *(_BYTE*)(v387_.v422 + v346) =
        (unsigned int)((*(_DWORD*)&v329[4 * v347] >> 9) + 1) >> 1;
    v348 = (((int)((unsigned __int64)(*(int*)&v330[4 * v347] *
                                      (__int64)(int)v334) >>
                   16) >>
             7) +
            1) >>
           1;
    if (v348 <= -32768) {
      v348 = -32768;
    }
    if (v348 >= 0x7FFF) {
      LOWORD(v348) = 0x7FFF;
    }
    *(_WORD*)(v103 + 2 * v346) = v348;
    *(_DWORD*)(v335 + 4LL * (*(int*)(a2 + 4336) + (int)v346)) =
        *(_DWORD*)&v333[4 * v347];
    goto LABEL_286;
  }
  v337 = -v304;
  v338 = 0;
  v339 = -(__int64)(v304 & 0x7FFFFFFE);
  v340 = (_WORD*)(v103 - 2 * v331 + 2);
  v341 = (_BYTE*)(v387_.v422 - v331 + 1);
  do {
    v338 -= 2;
    v342 = (int)(v332 - 1) % 40 + ((int)(v332 - 1) % 40 < 0 ? 0x28 : 0);
    *(v341 - 1) = (unsigned int)((*(_DWORD*)&v329[4 * v342] >> 9) + 1) >> 1;
    v343 = (((int)((unsigned __int64)(*(int*)&v330[4 * v342] *
                                      (__int64)(int)v334) >>
                   16) >>
             7) +
            1) >>
           1;
    if (v343 <= -32768) {
      v343 = -32768;
    }
    if (v343 >= 0x7FFF) {
      LOWORD(v343) = 0x7FFF;
    }
    *(v340 - 1) = v343;
    *(_DWORD*)(v335 + 4LL * (v337 + *(int*)(a2 + 4336))) =
        *(_DWORD*)&v333[4 * v342];
    v332 = (int)(v342 - 1) % 40 + ((int)(v342 - 1) % 40 < 0 ? 0x28 : 0);
    *v341 = (unsigned int)((*(_DWORD*)&v329[4 * v332] >> 9) + 1) >> 1;
    v341 += 2;
    v344 = (((int)((unsigned __int64)(*(int*)&v330[4 * v332] *
                                      (__int64)(int)v334) >>
                   16) >>
             7) +
            1) >>
           1;
    if (v344 <= -32768) {
      v344 = -32768;
    }
    if (v344 >= 0x7FFF) {
      LOWORD(v344) = 0x7FFF;
    }
    *v340 = v344;
    v340 += 2;
    v345 = v337 + *(int*)(a2 + 4336);
    v337 += 2;
    *(_DWORD*)(v335 + 4LL * (v345 + 1)) = *(_DWORD*)&v333[4 * v332];
  } while (v339 != v338);
  v336 = -v338;
  if ((v331 & 1) != 0) {
    goto LABEL_281;
  }
LABEL_286:
  v349 = &v308[4 * v19[1147]];
  *(_QWORD*)(a2 + 4248) = *((_QWORD*)v308 + 151);
  v350 = *((_QWORD*)v349 + 4);
  v351 = *((_QWORD*)v349 + 5);
  *(_QWORD*)(a2 + 4280) = *((_QWORD*)v308 + 155);
  v352 = *((_QWORD*)v308 + 159);
  *(_QWORD*)(a2 + 3872) = v350;
  *(_QWORD*)(a2 + 3880) = v351;
  v353 = *((_QWORD*)v349 + 6);
  v354 = *((_QWORD*)v349 + 7);
  *(_QWORD*)(a2 + 4312) = v352;
  *(_QWORD*)(a2 + 3888) = v353;
  *(_QWORD*)(a2 + 3896) = v354;
  v355 = *((_QWORD*)v349 + 1);
  *(_QWORD*)(a2 + 3840) = *(_QWORD*)v349;
  v357 = *((_QWORD*)v349 + 2);
  v356 = *((_QWORD*)v349 + 3);
  *(_QWORD*)(a2 + 3848) = v355;
  v358 = *((_QWORD*)v308 + 150);
  *(_QWORD*)(a2 + 3864) = v356;
  v359 = *((_QWORD*)v308 + 148);
  *(_QWORD*)(a2 + 3856) = v357;
  v360 = *((_QWORD*)v308 + 149);
  *(_QWORD*)(a2 + 4240) = v358;
  v361 = *((_QWORD*)v308 + 154);
  *(_QWORD*)(a2 + 4224) = v359;
  v362 = *((_QWORD*)v308 + 152);
  *(_QWORD*)(a2 + 4232) = v360;
  v363 = *((_QWORD*)v308 + 153);
  *(_QWORD*)(a2 + 4272) = v361;
  v364 = *((_QWORD*)v308 + 158);
  *(_QWORD*)(a2 + 4256) = v362;
  v365 = *((_QWORD*)v308 + 156);
  *(_QWORD*)(a2 + 4264) = v363;
  v366 = *((_QWORD*)v308 + 157);
  *(_QWORD*)(a2 + 4304) = v364;
  *(_QWORD*)(a2 + 4288) = v365;
  LODWORD(v365) = *((_DWORD*)v308 + 320);
  v367 = *((_DWORD*)v308 + 321);
  *(_QWORD*)(a2 + 4296) = v366;
  *(_DWORD*)(a2 + 4320) = v365;
  *(_DWORD*)(a2 + 4324) = v367;
  *(_DWORD*)(a2 + 4328) = *(_DWORD*)(v387_.v420 + 4LL * (int)v19[1145] - 4);
  memmove_plt(a2, a2 + 2LL * (int)v19[1146], 2LL * (int)v19[1148]);
  return memmove_plt(a2 + 1280, a2 + 1280 + 4LL * (int)v19[1146],
                     4LL * (int)v19[1148]);
}

#pragma GCC visibility pop
