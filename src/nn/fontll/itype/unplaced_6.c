#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nn_fontll_itype_44cf60(_DWORD* result, int, unsigned __int16*, __int64*,
                               unsigned int);
_DWORD* nn_fontll_itype_44d520(_DWORD* result, int, __int64);
_DWORD* nn_fontll_itype_44d600(_DWORD* result, int, __int64);
__int64 SdkRoutine_418440(__int64 result, const char*, const char*,
                          unsigned int);
__int64 fnt_IUP_plt(__int64);
__int64 fs_font_417380(__int64, __int64, __int64, int, unsigned int, int,
                       const char*);
__int64 fs_font_418590(__int64, const char*, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nn_fontll_itype_449700(char, _QWORD*, __int64, unsigned __int64*,
                               unsigned __int64);
__int64 nn_fontll_itype_449b00(unsigned __int8, int, __int64, __int64, int**,
                               int, unsigned __int64*, unsigned __int64);
__int64 nn_fontll_itype_44a800(char, _QWORD*, __int64, unsigned __int64*,
                               unsigned __int64);
__int64 nn_fontll_itype_44ad60(unsigned __int8, int, __int64, __int64, int**,
                               int, unsigned __int64*, unsigned __int64);
__int64 nn_fontll_itype_44b8a0(__int64 result, __int64);
__int64 nn_fontll_itype_44bd80(unsigned __int8, int, int, __int64, __int64,
                               __int64);
__int64 nn_fontll_itype_44d780(__int64 result, int, __int64);
__int64 nn_fontll_itype_44d880(int, __int64*);
__int64 nn_fontll_itype_44e9e0(int, __int64);
__int64 strncpy_plt(__int64, const char*, unsigned __int64);
__int64 vardiv_64_plt(__int64, int, char);
__int64 varmul_64_plt(int, int, char);
unsigned __int64 strlen_plt(const char*);
__int64 nn_fontll_itype_418680(__int64 a1, char* a2, __int64 a3, int a4,
                               unsigned int a5, char* a6, unsigned int a7,
                               int a8);
__int64 nn_fontll_itype_4189e0(__int64 a1, char* a2, __int64 a3, int a4,
                               unsigned int a5, char* a6, unsigned int a7,
                               int a8);
__int64 nn_fontll_itype_4451e0(__int64 result);

__int64 nn_fontll_itype_418680(__int64 a1, char* a2, __int64 a3, int a4,
                               unsigned int a5, char* a6, unsigned int a7,
                               int a8)
{
  char** v11;
  __int64 v12;
  char* v14;
  unsigned __int64 v15;

  if (a3 != 0) {
    v11 = (const char**)fs_font_417380(a1, 0, a3, a4, a7, a8, a2);
    if (v11 != nullptr) {
      goto LABEL_3;
    }
    return *(unsigned int*)(a1 + 72);
  }
  v11 = (const char**)fs_font_417380(a1, (__int64)a2, 0, a4, a7, a8, a2);
  if (v11 == nullptr) {
    return *(unsigned int*)(a1 + 72);
  }
LABEL_3:
  v12 = *(_QWORD*)(a1 + 8);
  if (v12 != 0) {
    while (*(const char***)(v12 + 8) != v11) {
      v12 = *(_QWORD*)(v12 + 24);
      if (v12 == 0) {
        goto LABEL_6;
      }
    }
    v14 = *(const char**)v12;
    if (strlen_plt(*(const char**)v12) >= a5) {
      *(_DWORD*)(a1 + 72) = 310;
      return 310;
    }
    else {
      v15 = a5 - 1;
      strncpy_plt((__int64)a6, v14, v15);
      a6[v15] = 0;
      *(_DWORD*)(a1 + 72) = 0;
      return 0;
    }
  }
  else {
  LABEL_6:
    SdkRoutine_418440(a1, *v11, a6, a5);
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
}

__int64 nn_fontll_itype_4189e0(__int64 a1, char* a2, __int64 a3, int a4,
                               unsigned int a5, char* a6, unsigned int a7,
                               int a8)
{
  char** v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  char* v15;
  unsigned __int64 v16;

  if (a3 != 0) {
    v11 = (const char**)fs_font_417380(a1, 0, a3, a4, a7, a8, a2);
    if (v11 == nullptr) {
      return *(unsigned int*)(a1 + 72);
    }
  }
  else {
    v11 = (const char**)fs_font_417380(a1, (__int64)a2, 0, a4, a7, a8, a2);
    if (v11 == nullptr) {
      return *(unsigned int*)(a1 + 72);
    }
  }
  v12 = *(_QWORD*)(a1 + 8);
  if (v12 == 0) {
  LABEL_8:
    v13 = (__int64)v11;
    SdkRoutine_418440(a1, *v11, a6, a5);
    result = fs_font_418590(a1, a6, v13);
    if ((_DWORD)result == 0) {
      goto LABEL_13;
    }
    return *(unsigned int*)(a1 + 72);
  }
  while (*(const char***)(v12 + 8) != v11) {
    v12 = *(_QWORD*)(v12 + 24);
    if (v12 == 0) {
      goto LABEL_8;
    }
  }
  v15 = *(const char**)v12;
  if (strlen_plt(*(const char**)v12) + 1 > a5) {
    *(_DWORD*)(a1 + 72) = 310;
    return 310;
  }
  v16 = a5 - 1;
  ++*(_DWORD*)(v12 + 16);
  strncpy_plt((__int64)a6, v15, v16);
  result = 0;
  a6[v16] = 0;
LABEL_13:
  *(_DWORD*)(a1 + 72) = 0;
  return result;
}

__int64 nn_fontll_itype_4451e0(__int64 result)
{
  __int64 v1;
  int** v2;
  unsigned int v3;
  _QWORD* v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  bool v12;
  __int64 v13;
  int v14;
  int* v15;
  int v16;
  int v17;
  int* v18;
  int* v19;
  _DWORD** v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int* v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int* v38;
  int* v39;
  int* v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  int v53;
  __int64 v54;
  unsigned int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  unsigned int v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  _DWORD* v98;
  _DWORD* v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  int v107;
  __int64 v108;
  unsigned int v109;
  int v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  int v119;
  int v120;
  int v121;
  int v122;
  unsigned __int16 v123;
  unsigned int v124;
  int v125;
  __int64 v126;
  unsigned int v127;
  __int64 v128;
  int* v129;
  int v130;
  bool v131;
  int v132;
  bool v133;
  int v134;
  bool v135;
  int v136;
  bool v137;
  int v138;
  bool v139;
  int v140;
  bool v141;
  int v142;
  bool v143;
  int v144;
  __int64 v145;
  int* v146;
  int v147;
  int v148;
  bool v149;
  unsigned int v150;
  unsigned int v151;
  signed int v152;
  unsigned int v153;
  __int64 v154;
  int v155;
  int v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned int v160;
  int* v161;
  int v162;
  int v163;
  unsigned __int16 v164;
  __int64 v165;
  int v166;
  __int64 v167;
  __int64 v168;
  int v169;
  unsigned int v170;
  _DWORD* v171;
  __int64 v172;
  int v173;
  __int64 v174;
  unsigned int v175;
  unsigned __int64 v176;
  int* v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int* v186;
  int v187;
  int v188;
  int* v189;
  __int64 v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  unsigned int v202;
  unsigned int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  _DWORD* v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  __int64 v217;
  int v218;
  _DWORD* v219;
  __int64 v220;
  __int64 v221;
  int v222;
  __int64 v223;
  int v224;
  bool v225;
  int v226;
  __int64 v227;
  bool v228;
  int v229;
  int v230;
  __int64 v231;
  bool v232;
  int v233;
  bool v234;
  int v235;
  _DWORD* v236;
  int v237;
  _DWORD* v238;
  __int64 v239;
  int v240;
  int v241;
  signed int v242;
  signed int v243;
  unsigned int v244;
  unsigned int v245;
  int v246;
  __int64 v247;
  int v248;
  int v249;
  __int64 v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  unsigned int v259;
  unsigned int v260;
  __int64 v261;
  int v262;
  int v263;
  signed int v264;
  unsigned int v265;
  unsigned int v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  int v271;
  int* v272;
  int* v273;
  int v274;
  int v275;
  int v276;
  unsigned int v277;
  bool v278;
  int v279;
  bool v280;
  unsigned int v281;
  unsigned int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  int v287;
  int v288;
  int v289;
  int v290;
  unsigned int v291;
  unsigned int v292;
  int v293;
  unsigned int v294;
  unsigned int v295;
  unsigned int v296;
  int v297;
  unsigned __int64 v298;
  int* v299;
  int v300;
  int v301;
  int v302;
  unsigned __int64 v304;
  unsigned __int64 v305;
  __int64 v306;
  int v307;
  int v308;
  __int64 v309;
  unsigned __int64 v310;
  unsigned __int64 v311;
  int v312;
  char v313;
  unsigned int v314;
  _DWORD* v315;
  __int64 v316;
  int v317;
  int v318;
  int v319;
  int v320;
  __int64 v321;
  int v322;
  int v323;
  unsigned int v324;
  unsigned int v325;
  int v326;
  int* v327;
  __int64 v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v334;
  unsigned __int64 v335;
  unsigned __int64 v336;
  __int64 v337;
  int v338;
  __int64 v339;
  unsigned __int64 v340;
  unsigned __int64 v341;
  int v342;
  int* v343;
  __int64 v344;
  __int64 v345;
  int v346;
  int v347;
  int v348;
  int v349;
  unsigned __int64 v351;
  unsigned __int64 v352;
  __int64 v353;
  int v354;
  __int64 v355;
  unsigned __int64 v356;
  unsigned __int64 v357;
  unsigned int v358;
  unsigned int v359;
  unsigned int v360;
  unsigned int v361;
  unsigned __int64 v362;
  unsigned __int64 v363;
  unsigned __int64 v364;
  __int64 v365;
  int v366;
  __int64 v367;
  unsigned __int64 v368;
  _DWORD* v369;
  __int64 i;
  int v371;
  int v372;
  int v373;
  int v374;
  unsigned int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  int v380;
  int v381;
  int v382;
  _QWORD* v383;
  unsigned int v384;
  __int64 v385;
  int* v386;
  int* v387;
  int* v388;
  int* v389;
  int* v390;
  int* v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  int v397;
  unsigned __int16 v398;
  unsigned int j;
  int v400;
  int v401;
  int v402;
  int v403;
  unsigned int v404;
  __int64 v405;
  int v406;
  __int64 v407;
  int v408;
  __int64 v409;
  __int64 v410;
  unsigned __int64 v411;
  int* v412;
  __int64 v413;
  int v414;
  int v415;
  bool v416;
  int v417;
  __int64 v418;
  int v419;
  int v420;
  __int64* v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  int v425;
  int* v426;
  int* v427;
  int v428;
  bool v429;
  int v430;
  __int64 v431;
  __int64 v432;
  int v433;
  bool v434;
  int v435;
  __int64 v436;
  __int64 v437;
  int v438;
  int v439;
  bool v440;
  int v441;
  __int64 v442;
  int v443;
  unsigned int v444;
  int* v445;
  int* v446;
  int* v447;
  __int64 v448;
  __int64 v449;
  unsigned __int16* v450;
  unsigned __int16* v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  int* v455;
  __int64 v456;
  int* v457;
  int v458;
  __int64 v459;
  int* v460;
  int v461;
  __int64 v462;
  int* v463;
  int v464;
  unsigned __int16* v465;
  unsigned __int16* v466;
  __int64 v467;
  unsigned int v468;
  __int64 v469;
  unsigned int v470;
  int* v471;
  __int64 v472;
  int* v473;
  int* v474;
  int* v475;
  int* v476;
  __int64 v477;
  unsigned int v478;
  int* v479;
  int* v480;
  int* v481;
  int v482;
  unsigned int v483;
  unsigned __int16 v484;
  unsigned __int16 v485;
  unsigned __int16 v486;
  unsigned __int16 v487;
  int v488;
  int v489;
  int v490;
  __int64 v491;
  char* v492;
  int v493;
  int v494;
  int v495;
  int v496;
  char v497;
  __int64 v498;
  __int64 v499;
  char* v500;
  int v501;
  char* v502;
  __int64 v503;
  int v504;
  int v505;
  _DWORD* v506;
  int k;
  int v508;
  int v509;
  int v510;
  int v511;
  _DWORD* v512;
  int v513;
  int v514;
  int v515;
  int v516;
  int v517;
  int v518;
  int v519;
  int v520;
  int v521;
  int v522;
  int v523;
  int v524;
  int v525;
  int v526;
  int v527;
  int v528;
  unsigned __int64 v529;
  __int64 v530;
  int* v531;
  int* v532;
  int* v533;
  __int64 v534;
  unsigned int v535;
  unsigned __int16 v536;
  unsigned __int16 v537;
  unsigned __int16 v538;
  char* v539;
  char* v540;
  char* v541;
  unsigned int v542;
  unsigned int v543;
  char* v544;
  unsigned int v545;
  int v546;
  unsigned int v547;
  char* v548;
  unsigned int v549;
  unsigned __int16 v550;
  _DWORD* v551;
  __int64 v552;
  __int64 v553;
  __int64 v554;
  int v555;
  int v556;
  __int64 v557;
  int v558;
  int v559;
  __int64 v560;
  __int64 v561;
  _BYTE* v562;
  int* v563;
  _DWORD* v564;
  int* v565;
  int* v566;
  __int64 v567;
  int v568;
  int v569;
  int v570;
  unsigned __int16 v571;
  __int64 v572;
  char* v573;
  __int64 v574;
  __int64 v575;
  __int64 v576;
  __int64 v577;
  int v578;
  __int64 v579;
  __int64 v580;
  __int64 v581;
  char* v582;
  __int64 v583;
  __int64 v584;
  int v585;
  int v586;
  unsigned int v587;
  char* v588;
  unsigned __int16 v589;
  __int64 v590;
  unsigned __int16* v591;
  __int64 v592;
  int v593;
  int v594;
  unsigned int v595;
  int v596;
  __int64 v598;
  __int64 v599;
  __int64 v600;
  __int64 v601;
  __int64 v602;
  int* v603;
  __int64 v604;
  int v605;
  int v606;
  int v607;
  int v608;
  int v609;
  unsigned __int16 v610;
  __int64 v611;
  char* v612;
  __int64 v613;
  __int16 v614;
  __int64 v615;
  __int64 v616;
  __int64 v617;
  __int64 v618;
  __int64 v619;
  __int16 v620;
  char* v621;
  __int64 v622;
  __int64 v623;
  int v624;
  int v625;
  unsigned int v626;
  char* v627;
  __int64 v628;
  unsigned __int16* v629;
  __int64 v630;
  int v631;
  int v632;
  unsigned int v633;
  int v634;
  __int64 v636;
  __int64 v637;
  __int64 v638;
  __int64 v639;
  __int64 v640;
  int* v641;
  __int64 v642;
  int v643;
  int v644;
  int v645;
  int v646;
  int v647;
  int v648;
  int v649;
  __int64 v650;
  char* v651;
  unsigned __int16* v652;
  unsigned __int16* v653;
  unsigned __int16* v654;
  _BYTE* v655;
  unsigned __int16* v656;
  int v657;
  int v658;
  int v659;
  __int64 v660;
  __int64 v661;
  __int64 v662;
  __int64 v663;
  int v664;
  int* v665;
  __int64 v666;
  _BYTE* v667;
  int v668;
  int v669;
  int v670;
  int v671;
  _BYTE* v672;
  int* v673;
  __int64 v674;
  int v675;
  _DWORD* v676;
  int v677;
  int v678;
  int v679;
  _DWORD* v680;
  int v681;
  int v682;
  int v683;
  int v684;
  _DWORD* v685;
  __int64 v686;
  int v687;
  int v688;
  int v689;
  int v690;
  _DWORD* v691;
  int v692;
  int v693;
  unsigned int v694;
  unsigned __int16 v695;
  int v696;
  _WORD* v697;
  int v698;
  __int64 v699;
  unsigned int v700;
  unsigned __int64 v701;
  _WORD* v702;
  __int64 v703;
  __int64 v704;
  int v705;
  int v706;
  int* v707;
  int* v708;
  __int64 v709;
  char* v710;
  int* v711;
  int* v712;
  unsigned __int8* v713;
  int v714;
  unsigned int v715;
  int v716;
  unsigned int v717;
  __int64 v718;
  int v719;
  int v720;
  unsigned int v721;
  __int64 v722;
  int* v723;
  int v724;
  int v725;
  __int64 v726;
  __int64 v727;
  __int64 v728;
  int v729;
  int v730;
  unsigned int v731;
  unsigned int v732;
  __int64 v733;
  unsigned __int16 v734;
  unsigned __int16* v735;
  int v736;
  int v737;
  unsigned int v738;
  int v739;
  int v740;
  int v741;
  __int16 v742;
  int v743;
  int v744;
  unsigned int v745;
  int v746;
  int v747;
  int v748;
  __int64 v749;
  __int64 v750;
  int v751;
  int v752;
  int* v753;
  int v754;
  int v755;
  int v756;
  int v757;
  int v758;
  unsigned int v759;
  unsigned __int16* v760;
  int v761;
  int* v762;
  _DWORD* v763;
  __int64 v764;
  int v765;
  int v766;
  int v767;
  int v768;
  int v769;
  int v770;
  int v771;
  int v772;
  int* v773;
  int* v774;
  int v775;
  int v776;
  unsigned int v777;
  __int64 v778;
  int v779;
  __int64 v780;
  __int64 v781;
  __int64 v782;
  unsigned __int64 v783;
  __int64 m;
  __int64 v785;
  int* v786;
  int v787;
  int v788;
  int v789;
  int v790;
  __int64 v791;
  int v792;
  __int64 v793;
  unsigned __int64 v794;
  __int64 v795;
  unsigned int v796;
  int* v797;
  unsigned int v798;
  int* v799;
  unsigned int v800;
  unsigned int v801;
  unsigned int v802;
  unsigned int v803;
  int* v804;
  unsigned __int16 v805;
  int v806;
  int v807;
  int v808;
  int v809;
  int v810;
  unsigned int v811;
  int* v812;
  __int64 v813;
  __int64 v814;
  __int64 v815;
  _BOOL4 v816;
  int v817;
  unsigned __int64 v818;
  __int64 v819;
  __int64 v820;
  int v821;
  int* v822;
  __int64 v823;
  unsigned int v824;
  unsigned int v825;
  __int64 v826;
  _DWORD* v827;
  int v828;
  int* v829;
  unsigned int v830;
  int** v831;
  int** v832;
  __int64 v833;
  __int64 v834;
  __int64 v835;
  __int64 v836;
  __int64 v837;
  struct {
    __int64 v838;
    unsigned __int64 v839;
  } v838_;
  struct {
    unsigned __int64 v840;
    __int64 v841;
    _BYTE v842[14];
    char gap214_[2];
    __int64 v843;
    __int64 v844;
    __int64 v845;
    _QWORD v846[2];
    __int64 v847;
    _QWORD v848[2];
    __int64 v849;
    _QWORD v850[5];
  } v840_;

  v297 = COERCE_AS(__typeof__(v297),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v1 = *(_QWORD*)(result + 64);
  v2 = *(int***)result;
  v840_.v840 = 0;
  v838_.v838 = 0;
  v838_.v839 = 0;
  v3 = *(unsigned __int16*)(v1 + 34);
  v5 = *(_DWORD**)(v1 + 320);
  v4 = *(_QWORD**)(v1 + 328);
  v6 = *(_DWORD*)(v1 + 400);
  v834 = *(_QWORD*)(v1 + 336);
  v7 = *((__int16*)v2 + 40);
  if (*((_WORD*)v2 + 40) == 0) {
    return result;
  }
  if ((*(_BYTE*)(v1 + 350) & 0x40) == 0) {
    return result;
  }
  v8 = *(_DWORD*)(v1 + 344);
  if ((v8 & 2) != 0) {
    return result;
  }
  LODWORD(v9) = *((unsigned __int16*)v2 + 40);
  v10 = result;
  v827 = v5;
  v824 = v3;
  v828 = v6;
  v835 = *(_QWORD*)(v5 + 13);
  v836 = *(_QWORD*)(v5 + 15);
  v837 = *(_QWORD*)(v5 + 17);
  v820 = (unsigned int)(v6 - 1);
  if ((unsigned int)v820 > 2) {
    v816 = false;
  }
  else {
    v11 = v5[13];
    v12 = v11 == 0 || v3 > 0x12;
    v816 = v11 != 0;
    if (!v12) {
      v813 = result;
      v13 = *((unsigned __int16*)v2[8] + v7 - 1);
      v14 = vardiv_64_plt((unsigned int)(v5[16] + 8), v5[16], 16),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v15 = v2[1];
      v16 = v5[13];
      v17 = v14;
      v829 = *v2;
      v831 = v2;
      v20 = v2 + 2;
      v19 = v2[2];
      v18 = v20[1];
      if (v16 >= 1) {
        v5[13] = varmul_64_plt(v14, v16, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v21 = v5[14];
      if (v21 >= 1) {
        v5[14] = varmul_64_plt(v17, v21, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v22 = v5[15];
      if (v22 >= 1) {
        v5[15] = varmul_64_plt(v17, v22, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v23 = v5[16];
      if (v23 >= 1) {
        v5[16] = varmul_64_plt(v17, v23, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v24 = v5[17];
      if (v24 >= 1) {
        v5[17] = varmul_64_plt(v17, v24, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v25 = v5[18];
      if (v25 >= 1) {
        v5[18] = varmul_64_plt(v17, v25, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v26 = v5[15];
      v27 = v5[16];
      if (((v26 + 32) ^ (unsigned int)(v27 + 32)) >= 0x40) {
        v5[15] = v27;
        v26 = v27;
      }
      if (v5[13] - v26 <= 127) {
        v5[13] = v26 + 128;
      }
      v28 = v829;
      v29 = v13 + 1;
      v30 = v13;
      v31 = v19;
      do {
        v32 = varmul_64_plt(v17, *v31, 16),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        *v31 = v32;
        *v28 = v32;
        if (*v18 >= 1) {
          v33 = varmul_64_plt(v17, *v18, 16),
          v297 = COERCE_AS(__typeof__(v297),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          *v18 = v33;
          *v15 = v33;
        }
        ++v15;
        ++v18;
        ++v28;
        ++v31;
        --v29;
      } while (v29 != 0);
      v106 = 4 * v30 + 8;
      v107 = varmul_64_plt(v17, *(int*)((char*)v19 + v106), 16),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      *(int*)((char*)v19 + v106) = v107;
      v2 = v831;
      v5 = v827;
      v10 = v813;
      *(int*)((char*)v829 + v106) = (v107 + 32) & 0xFFFFFFC0;
      LODWORD(v9) = *((unsigned __int16*)v831 + 40);
      v34 = (__int64)*v831;
      v35 = (__int64)v831[1];
      v36 = (__int64)v831[2];
      v37 = (__int64)v831[3];
      v830 = v828 & 0xFFFFFFFE;
      v38 = v831[8];
      if (*((_WORD*)v831 + 40) == 0) {
        goto LABEL_181;
      }
      goto LABEL_31;
    }
  }
  v34 = (__int64)*v2;
  v35 = (__int64)v2[1];
  v36 = (__int64)v2[2];
  v37 = (__int64)v2[3];
  v830 = v6 & 0xFFFFFFFE;
  v38 = v2[8];
  if ((_DWORD)v9 != 0) {
  LABEL_31:
    v40 = v2[6];
    v39 = v2[7];
    v41 = 0;
    v9 = (unsigned int)v9;
    while (1) {
      v44 = *((unsigned __int16*)v39 + v41);
      v45 = *((unsigned __int16*)v38 + v41);
      if ((_DWORD)v44 == (_DWORD)v45) {
        goto LABEL_36;
      }
      if ((unsigned int)v44 >= (unsigned int)v45) {
        v51 = *((unsigned __int16*)v39 + v41);
        v50 = v51;
        v49 = v51;
        v48 = v51;
        goto LABEL_54;
      }
      v46 = ((int)v45 - (int)v44) & 3LL;
      if (v46 != 0) {
        v47 = v44 + 1;
        v48 = *((unsigned __int16*)v39 + v41);
        v49 = v48;
        v50 = v48;
        v51 = v48;
        while (1) {
          while (1) {
            v52 = *(_DWORD*)(v34 + 4 * v47);
            if (v52 > (signed __int32)*(_DWORD*)(v34 + 4LL * v51)) {
              break;
            }
            if (v52 < (signed __int32)*(_DWORD*)(v34 + 4LL * v50)) {
              v50 = v47;
            }
            v53 = *(_DWORD*)(v35 + 4 * v47);
            if (v53 > (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
              goto LABEL_50;
            }
          LABEL_41:
            if (v53 < (signed __int32)*(_DWORD*)(v35 + 4LL * v48)) {
              v48 = v47;
            }
            ++v47;
            if (--v46 == 0) {
            LABEL_51:
              v54 = v47 - 1;
              if ((unsigned __int64)(v44 - v45) <= 0xFFFFFFFFFFFFFFFCLL) {
                goto LABEL_146;
              }
              goto LABEL_54;
            }
          }
          v51 = v47;
          v53 = *(_DWORD*)(v35 + 4 * v47);
          if (v53 <= (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
            goto LABEL_41;
          }
        LABEL_50:
          v49 = v47++;
          if (--v46 == 0) {
            goto LABEL_51;
          }
        }
      }
      v54 = *((unsigned __int16*)v39 + v41);
      v48 = *((unsigned __int16*)v39 + v41);
      v49 = v48;
      v50 = v48;
      v51 = v48;
      if ((unsigned __int64)(v44 - v45) <= 0xFFFFFFFFFFFFFFFCLL) {
      LABEL_146:
        v98 = (_DWORD*)(v34 + 8 + 4 * v54);
        v99 = (_DWORD*)(v35 + 8 + 4 * v54);
        do {
          v100 = *(v98 - 1);
          if (v100 <= (signed __int32)*(_DWORD*)(v34 + 4LL * v51)) {
            if (v100 < (signed __int32)*(_DWORD*)(v34 + 4LL * v50)) {
              v50 = v54 + 1;
            }
          }
          else {
            v51 = v54 + 1;
          }
          v101 = *(v99 - 1);
          if (v101 <= (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
            if (v101 < (signed __int32)*(_DWORD*)(v35 + 4LL * v48)) {
              v48 = v54 + 1;
            }
          }
          else {
            v49 = v54 + 1;
          }
          if ((signed __int32)*v98 <=
              (signed __int32)*(_DWORD*)(v34 + 4LL * v51)) {
            if ((signed __int32)*v98 <
                (signed __int32)*(_DWORD*)(v34 + 4LL * v50)) {
              v50 = v54 + 2;
            }
          }
          else {
            v51 = v54 + 2;
          }
          if ((signed __int32)*v99 <=
              (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
            if ((signed __int32)*v99 <
                (signed __int32)*(_DWORD*)(v35 + 4LL * v48)) {
              v48 = v54 + 2;
            }
          }
          else {
            v49 = v54 + 2;
          }
          v102 = v98[1];
          if (v102 <= (signed __int32)*(_DWORD*)(v34 + 4LL * v51)) {
            if (v102 < (signed __int32)*(_DWORD*)(v34 + 4LL * v50)) {
              v50 = v54 + 3;
            }
          }
          else {
            v51 = v54 + 3;
          }
          v103 = v99[1];
          if (v103 <= (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
            if (v103 < (signed __int32)*(_DWORD*)(v35 + 4LL * v48)) {
              v48 = v54 + 3;
            }
          }
          else {
            v49 = v54 + 3;
          }
          v104 = v98[2];
          v54 += 4;
          if (v104 <= (signed __int32)*(_DWORD*)(v34 + 4LL * v51)) {
            if (v104 < (signed __int32)*(_DWORD*)(v34 + 4LL * v50)) {
              v50 = v54;
            }
          }
          else {
            v51 = v54;
          }
          v105 = v99[2];
          if (v105 > (signed __int32)*(_DWORD*)(v35 + 4LL * v49)) {
            v49 = v54;
          }
          else if (v105 < (signed __int32)*(_DWORD*)(v35 + 4LL * v48)) {
            v48 = v54;
          }
          v98 += 4;
          v99 += 4;
        } while (v45 != v54);
      }
    LABEL_54:
      v55 = v51 - 1;
      if (v51 == (_DWORD)v44) {
        v55 = *((unsigned __int16*)v38 + v41);
      }
      if (v51 != (_DWORD)v45) {
        LODWORD(v44) = v51 + 1;
      }
      if (*((_BYTE*)v40 + v51) == 0 ||
          *((_BYTE*)v40 + (int)v55) == 0 &&
              *((_BYTE*)v40 + (unsigned int)v44) == 0) {
        v56 = *(_DWORD*)(v34 + 4LL * (int)v55);
        v57 = *(_DWORD*)(v34 + 4LL * v51);
        v58 = v57 - v56;
        if (v57 != v56) {
          v59 = *(_DWORD*)(v34 + 4LL * (unsigned int)v44);
          if (v57 != v59) {
            if (v58 >= 0) {
              v60 = v58;
            }
            else {
              v60 = -v58;
            }
            v61 = *(_DWORD*)(v35 + 4LL * v51);
            v62 = 22 * v60;
            v63 = v61 - *(int*)(v35 + 4LL * (int)v55);
            if (v63 < 0) {
              v63 = *(int*)(v35 + 4LL * (int)v55) - v61;
            }
            if (v62 < v63) {
              *(_DWORD*)(v34 + 4LL * (int)v55) = v57;
              *(_DWORD*)(v36 + 4LL * (int)v55) = v57;
              v57 = *(_DWORD*)(v34 + 4LL * v51);
              v59 = *(_DWORD*)(v34 + 4LL * (unsigned int)v44);
              v61 = *(_DWORD*)(v35 + 4LL * v51);
            }
            v64 = v57 - v59;
            if (v57 - v59 < 0) {
              v64 = v59 - v57;
            }
            v65 = 22 * v64;
            v66 = v61 - *(int*)(v35 + 4LL * (unsigned int)v44);
            if (v66 < 0) {
              v66 = *(int*)(v35 + 4LL * (unsigned int)v44) - v61;
            }
            if (v65 < v66) {
              *(_DWORD*)(v34 + 4LL * (unsigned int)v44) = v57;
              *(_DWORD*)(v36 + 4LL * (unsigned int)v44) = v57;
            }
          }
        }
      }
      v67 = *((unsigned __int16*)v39 + v41);
      if (v50 == v67) {
        v68 = *((unsigned __int16*)v38 + v41);
        if (v50 != v68) {
          v67 = v50 + 1;
        }
        if (*((_BYTE*)v40 + v50) != 0) {
          goto LABEL_84;
        }
      }
      else {
        v68 = v50 - 1;
        if (v50 != *((unsigned __int16*)v38 + v41)) {
          v67 = v50 + 1;
        }
        if (*((_BYTE*)v40 + v50) != 0) {
        LABEL_84:
          if (*((_BYTE*)v40 + (int)v68) != 0 || *((_BYTE*)v40 + v67) != 0) {
            goto LABEL_101;
          }
        }
      }
      v69 = *(_DWORD*)(v34 + 4LL * (int)v68);
      v70 = *(_DWORD*)(v34 + 4LL * v50);
      v71 = v70 - v69;
      if (v70 != v69) {
        v72 = *(_DWORD*)(v34 + 4LL * v67);
        if (v70 != v72) {
          if (v71 >= 0) {
            v73 = v71;
          }
          else {
            v73 = -v71;
          }
          v74 = *(_DWORD*)(v35 + 4LL * v50);
          v75 = 22 * v73;
          v76 = v74 - *(int*)(v35 + 4LL * (int)v68);
          if (v76 < 0) {
            v76 = *(int*)(v35 + 4LL * (int)v68) - v74;
          }
          if (v75 < v76) {
            *(_DWORD*)(v34 + 4LL * (int)v68) = v70;
            *(_DWORD*)(v36 + 4LL * (int)v68) = v70;
            v70 = *(_DWORD*)(v34 + 4LL * v50);
            v72 = *(_DWORD*)(v34 + 4LL * v67);
            v74 = *(_DWORD*)(v35 + 4LL * v50);
          }
          v77 = v70 - v72;
          if (v70 - v72 < 0) {
            v77 = v72 - v70;
          }
          v78 = 22 * v77;
          v79 = v74 - *(int*)(v35 + 4LL * v67);
          if (v79 < 0) {
            v79 = *(int*)(v35 + 4LL * v67) - v74;
          }
          if (v78 < v79) {
            *(_DWORD*)(v34 + 4LL * v67) = v70;
            *(_DWORD*)(v36 + 4LL * v67) = v70;
          }
        }
      }
    LABEL_101:
      v80 = *((unsigned __int16*)v39 + v41);
      if (v49 == v80) {
        v81 = *((unsigned __int16*)v38 + v41);
        if (v49 != v81) {
          v80 = v49 + 1;
        }
        if (*((_BYTE*)v40 + v49) == 0) {
          goto LABEL_111;
        }
      }
      else {
        v81 = v49 - 1;
        if (v49 != *((unsigned __int16*)v38 + v41)) {
          v80 = v49 + 1;
        }
        if (*((_BYTE*)v40 + v49) == 0) {
        LABEL_111:
          v82 = *(_DWORD*)(v35 + 4LL * (int)v81);
          v83 = *(_DWORD*)(v35 + 4LL * v49);
          v84 = v83 - v82;
          if (v83 != v82) {
            v85 = *(_DWORD*)(v35 + 4LL * v80);
            if (v83 != v85) {
              v86 = *(_DWORD*)(v34 + 4LL * v49);
              v87 = v86 - *(int*)(v34 + 4LL * (int)v81);
              if (v87 < 0) {
                v87 = *(int*)(v34 + 4LL * (int)v81) - v86;
              }
              if (v84 < 0) {
                v84 = -v84;
              }
              if (22 * v84 < (unsigned int)v87) {
                *(_DWORD*)(v35 + 4LL * (int)v81) = v83;
                *(_DWORD*)(v37 + 4LL * (int)v81) = v83;
                v86 = *(_DWORD*)(v34 + 4LL * v49);
                v83 = *(_DWORD*)(v35 + 4LL * v49);
                v85 = *(_DWORD*)(v35 + 4LL * v80);
              }
              v88 = v86 - *(int*)(v34 + 4LL * v80);
              if (v88 < 0) {
                v88 = *(int*)(v34 + 4LL * v80) - v86;
              }
              v89 = v83 - v85;
              if (v83 - v85 < 0) {
                v89 = v85 - v83;
              }
              if (22 * v89 < (unsigned int)v88) {
                *(_DWORD*)(v35 + 4LL * v80) = v83;
                *(_DWORD*)(v37 + 4LL * v80) = v83;
              }
            }
          }
          goto LABEL_125;
        }
      }
      if (*((_BYTE*)v40 + (int)v81) == 0 && *((_BYTE*)v40 + v80) == 0) {
        goto LABEL_111;
      }
    LABEL_125:
      v43 = *((unsigned __int16*)v39 + v41);
      if (v48 == v43) {
        v42 = *((unsigned __int16*)v38 + v41);
        if (v48 != v42) {
          v43 = v48 + 1;
        }
        if (*((_BYTE*)v40 + v48) == 0) {
          goto LABEL_131;
        }
      }
      else {
        v42 = v48 - 1;
        if (v48 != *((unsigned __int16*)v38 + v41)) {
          v43 = v48 + 1;
        }
        if (*((_BYTE*)v40 + v48) == 0) {
        LABEL_131:
          v90 = *(_DWORD*)(v35 + 4LL * (int)v42);
          v91 = *(_DWORD*)(v35 + 4LL * v48);
          v92 = v91 - v90;
          if (v91 != v90) {
            v93 = *(_DWORD*)(v35 + 4LL * v43);
            if (v91 != v93) {
              v94 = *(_DWORD*)(v34 + 4LL * v48);
              v95 = v94 - *(int*)(v34 + 4LL * (int)v42);
              if (v95 < 0) {
                v95 = *(int*)(v34 + 4LL * (int)v42) - v94;
              }
              if (v92 < 0) {
                v92 = -v92;
              }
              if (22 * v92 < (unsigned int)v95) {
                *(_DWORD*)(v35 + 4LL * (int)v42) = v91;
                *(_DWORD*)(v37 + 4LL * (int)v42) = v91;
                v94 = *(_DWORD*)(v34 + 4LL * v48);
                v91 = *(_DWORD*)(v35 + 4LL * v48);
                v93 = *(_DWORD*)(v35 + 4LL * v43);
              }
              v96 = v94 - *(int*)(v34 + 4LL * v43);
              if (v96 < 0) {
                v96 = *(int*)(v34 + 4LL * v43) - v94;
              }
              v97 = v91 - v93;
              if (v91 - v93 < 0) {
                v97 = v93 - v91;
              }
              if (22 * v97 < (unsigned int)v96) {
                *(_DWORD*)(v35 + 4LL * v43) = v91;
                *(_DWORD*)(v37 + 4LL * v43) = v91;
              }
            }
          }
          goto LABEL_36;
        }
      }
      if (*((_BYTE*)v40 + (int)v42) == 0 && *((_BYTE*)v40 + v43) == 0) {
        goto LABEL_131;
      }
    LABEL_36:
      if (++v41 == (unsigned int)v9) {
        goto LABEL_182;
      }
    }
  }
LABEL_181:
  v9 = 0;
LABEL_182:
  v108 = 4LL * *((unsigned __int16*)v38 + v9 - 1);
  memcpy_plt(v34, v36, v108 + 4),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  memcpy_plt(v35, v37, v108 + 4),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v109 = v824;
  if (v830 == 6) {
    v110 = 640;
  }
  else {
    v110 = 1408;
  }
  v111 = (42949673 * (unsigned __int64)((v110 * v824) | 0x30)) >> 32;
  if ((v8 & 0x200) != 0 && v5[20] != 0) {
    v112 = *(_QWORD*)(v10 + 64);
    v113 = v834;
    v114 = *(_QWORD*)(v112 + 360);
    v115 = v828;
    v116 = v820;
    v840_.v840 = *(_QWORD*)(v112 + 352);
    if (v828 == 7) {
      goto LABEL_448;
    }
    goto LABEL_452;
  }
  v117 = *(_QWORD*)(v10 + 64);
  v118 = *(_QWORD*)(v117 + 360);
  v840_.v840 = *(_QWORD*)(v117 + 352);
  if (v828 == 7) {
    v119 = nn_fontll_itype_449700(120, v4, (__int64)v2, &v840_.v840, v118),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v113 = v834;
    result = nn_fontll_itype_449b00(0x78u, v119, (__int64)v4, v834, v2, v111,
                                    &v840_.v840, v118),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v120 = v5[20];
    v121 = result;
    if (v120 == 0) {
      goto LABEL_193;
    }
  }
  else {
    v122 = nn_fontll_itype_44a800(120, v4, (__int64)v2, &v840_.v840, v118),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v113 = v834;
    result = nn_fontll_itype_44ad60(0x78u, v122, (__int64)v4, v834, v2, v111,
                                    &v840_.v840, v118),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v120 = v5[20];
    v121 = result;
    if (v120 == 0) {
    LABEL_193:
      v123 = *((_WORD*)v2[8] + *((unsigned __int16*)v2 + 40) - 1) + 1;
      if (v121 == 1) {
        goto LABEL_199;
      }
      if (v121 == 0) {
        v124 = 0;
        *(_DWORD*)(v113 + 32) = 0;
        *(_DWORD*)(v113 + 24) = 0;
        goto LABEL_242;
      }
      if (v121 < 2) {
      LABEL_199:
        v124 = 0;
      }
      else {
        v125 = *(_DWORD*)(v113 + 32);
        v126 = ((_BYTE)v121 - 1) & 7;
        if ((unsigned int)(v121 - 2) >= 7) {
          v129 = (int*)(v113 + 224);
          v128 = 1;
          v127 = 0;
          do {
            v130 = *(v129 - 36);
            v131 = v125 <= v130;
            if (v125 >= v130) {
              v125 = *(v129 - 36);
            }
            v132 = *(v129 - 24);
            if (!v131) {
              v127 = v128;
            }
            v133 = v125 <= v132;
            if (v125 >= v132) {
              v125 = *(v129 - 24);
            }
            v134 = *(v129 - 12);
            if (!v133) {
              v127 = v128 + 1;
            }
            v135 = v125 <= v134;
            if (v125 >= v134) {
              v125 = *(v129 - 12);
            }
            v136 = *v129;
            if (!v135) {
              v127 = v128 + 2;
            }
            v137 = v125 <= v136;
            if (v125 >= v136) {
              v125 = *v129;
            }
            v138 = v129[12];
            if (!v137) {
              v127 = v128 + 3;
            }
            v139 = v125 <= v138;
            if (v125 >= v138) {
              v125 = v129[12];
            }
            v140 = v129[24];
            if (!v139) {
              v127 = v128 + 4;
            }
            v141 = v125 <= v140;
            if (v125 >= v140) {
              v125 = v129[24];
            }
            v142 = v129[36];
            if (!v141) {
              v127 = v128 + 5;
            }
            v143 = v125 <= v142;
            if (v125 >= v142) {
              v125 = v129[36];
            }
            v144 = v129[48];
            if (!v143) {
              v127 = v128 + 6;
            }
            v145 = v128 + 7;
            v128 += 8;
            v129 += 96;
            if (v125 > v144) {
              v127 = v145;
            }
            if (v125 >= v144) {
              v125 = v144;
            }
          } while (v145 != (((unsigned int)v121 - 1LL) & 0xFFFFFFFFFFFFFFF8LL));
        }
        else {
          v127 = 0;
          v128 = 1;
        }
        if ((((_BYTE)v121 - 1) & 7) != 0) {
          v146 = (int*)(v113 + 48 * v128 + 32);
          do {
            v148 = *v146;
            v146 += 12;
            v147 = v148;
            v149 = v125 < v148;
            if (v125 > v148) {
              v127 = v128;
            }
            if (!v149) {
              v125 = v147;
            }
            LODWORD(v128) = v128 + 1;
            --v126;
          } while (v126 != 0);
        }
        v124 = v127;
      }
    LABEL_242:
      v150 = v123;
      v151 = *(_DWORD*)(v113 + 48LL * v124 + 32);
      v152 = (*v2)[v123 + 1] - (*v2)[v123] -
             ((v151 + (v151 >> 31)) & 0xFFFFFFFE) + 32;
      v153 = (v152 >> 1) & 0xFFFFFFC0;
      v120 = (v152 & 0xFFFFFFC0) - v153;
      if (v120 <= 64) {
        v120 = 64;
      }
      v5[19] = v153;
      v5[20] = v120;
      if (v150 >= 0x33 && v121 >= 3) {
        *(_WORD*)(*(_QWORD*)(v10 + 64) + 416LL) = 0;
        v5[13] = v835;
        *((_WORD*)v5 + 28) = WORD2(v835);
        return result;
      }
    }
  }
  v154 = *(_QWORD*)(v10 + 64);
  if ((*(_BYTE*)(v154 + 351) & 2) != 0) {
    v109 = v824;
    v114 = *(_QWORD*)(v154 + 360);
    v115 = v828;
    v116 = v820;
    v840_.v840 = *(_QWORD*)(v154 + 352);
    if (v828 == 7) {
      goto LABEL_448;
    }
  LABEL_452:
    v251 = nn_fontll_itype_44a800(121, v4, (__int64)v2, &v840_.v840, v114),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v818 = v114;
    v249 = nn_fontll_itype_44ad60(0x79u, v251, (__int64)v4, v113, v2, v111,
                                  &v840_.v840, v114),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v249 == 0) {
      goto LABEL_470;
    }
  LABEL_453:
    v252 = *(_DWORD*)(v113 + 32);
    v253 = *(_DWORD*)(v113 + 24);
    v254 = v253 - (v252 >> 1);
    v255 = (v252 >> 1) + v253;
    v256 = v253 - v252 / 2;
    v257 = ((v254 + 32) & 0xFFFFFFC0) - v254;
    v258 = ((v255 + 32) & 0xFFFFFFC0) - v255;
    if (v257 >= 0) {
      v259 = v257;
    }
    else {
      v259 = -v257;
    }
    if (v258 >= 0) {
      v260 = v258;
    }
    else {
      v260 = -v258;
    }
    if (v259 < v260) {
      v258 = v257;
    }
    *(_DWORD*)(*(_QWORD*)(v10 + 64) + 412LL) = v256 + v258;
    v261 = v113 + 48LL * v249;
    v262 = *(_DWORD*)(v261 - 24);
    v263 = *(_DWORD*)(v261 - 16);
    v264 = (((v263 >> 1) + v262 + 32) & 0xFFFFFFC0) - ((v263 >> 1) + v262);
    if ((int)(((v262 - (v263 >> 1) + 32) & 0xFFFFFFC0) -
              (v262 - (v263 >> 1))) >= 0) {
      v265 = ((v262 - (v263 >> 1) + 32) & 0xFFFFFFC0) - (v262 - (v263 >> 1));
    }
    else {
      v265 = v262 - (v263 >> 1) - ((v262 - (v263 >> 1) + 32) & 0xFFFFFFC0);
    }
    if (v264 >= 0) {
      v266 = (((v263 >> 1) + v262 + 32) & 0xFFFFFFC0) - ((v263 >> 1) + v262);
    }
    else {
      v266 = (v263 >> 1) + v262 - (((v263 >> 1) + v262 + 32) & 0xFFFFFFC0);
    }
    if (v265 < v266) {
      v264 = ((v262 - (v263 >> 1) + 32) & 0xFFFFFFC0) - (v262 - (v263 >> 1));
    }
    *(_DWORD*)(*(_QWORD*)(v10 + 64) + 408LL) = v262 + v263 / 2 + v264;
    goto LABEL_470;
  }
  if (!v816 || v121 == 0) {
    goto LABEL_445;
  }
  v155 = v5[19];
  v156 = *(_DWORD*)(v154 + 404);
  v814 = v10;
  v157 = v113;
  if (v120 + v155 <= 128) {
    v161 = *v2;
    v162 = **v2;
    v163 = *((unsigned __int16*)v2[8] + *((unsigned __int16*)v2 + 40) - 1);
    v164 = v163 + 1;
    v165 = (unsigned __int16)(v163 + 1);
    v166 = (*v2)[v165 + 1];
    if ((unsigned __int16)(v163 + 1) < 2u) {
      v169 = **v2;
    }
    else {
      v167 = (v165 - 1) & 7;
      if ((unsigned int)(v163 - 1) >= 7) {
        v176 = (v165 - 1) & 0xFFFFFFFFFFFFFFF8LL;
        v177 = v161 + 4;
        v168 = 1;
        v169 = **v2;
        do {
          v178 = *(v177 - 3);
          v179 = *(v177 - 2);
          v168 += 8;
          if (v178 > v169) {
            v169 = *(v177 - 3);
          }
          if (v178 < v162) {
            v162 = *(v177 - 3);
          }
          v180 = *(v177 - 1);
          v181 = *v177;
          if (v179 > v169) {
            v169 = *(v177 - 2);
          }
          if (v179 < v162) {
            v162 = *(v177 - 2);
          }
          v182 = v177[1];
          if (v180 > v169) {
            v169 = *(v177 - 1);
          }
          if (v180 < v162) {
            v162 = *(v177 - 1);
          }
          if (v181 > v169) {
            v169 = *v177;
          }
          if (v181 < v162) {
            v162 = *v177;
          }
          if (v182 > v169) {
            v169 = v177[1];
          }
          if (v182 < v162) {
            v162 = v177[1];
          }
          v183 = v177[2];
          v184 = v177[3];
          if (v183 > v169) {
            v169 = v177[2];
          }
          if (v183 < v162) {
            v162 = v177[2];
          }
          v185 = v177[4];
          v177 += 8;
          if (v184 > v169) {
            v169 = v184;
          }
          if (v184 < v162) {
            v162 = v184;
          }
          if (v185 > v169) {
            v169 = v185;
          }
          if (v185 < v162) {
            v162 = v185;
          }
          v176 -= 8LL;
        } while (v176 != 0);
      }
      else {
        v168 = 1;
        v169 = **v2;
      }
      if (v167 != 0) {
        v186 = &v161[v168];
        do {
          v188 = *v186++;
          v187 = v188;
          if (v188 > v169) {
            v169 = v187;
          }
          if (v187 < v162) {
            v162 = v187;
          }
          --v167;
        } while (v167 != 0);
      }
    }
    v189 = v2[2];
    v190 = v834 + 48LL * (unsigned __int16)(v121 - 1);
    v191 = *(_DWORD*)(v834 + 24);
    v192 = *(_DWORD*)(v190 + 24);
    v193 = (signed __int32)*(_DWORD*)(v834 + 32) / 2;
    v194 = v191 - v193;
    v195 = v192 + (signed __int32)*(_DWORD*)(v190 + 32) / 2;
    v196 = v191 - v192;
    if (v196 < 0) {
      v196 = -v196;
    }
    v197 = v166 - v195;
    if ((unsigned int)v196 > 0x1F) {
      v203 = v155 - v194;
      v204 = v194 - v162;
      if (v155 - v194 < 0) {
        v203 = v194 - v155;
      }
      if (v203 >= 0x49) {
        v155 = v194;
      }
      if (v204 <= 63) {
        v205 = v155;
      }
      else {
        v205 = v194;
      }
      v206 = v120 - v197;
      v207 = v169 - v195;
      v208 = v166 - v120;
      v157 = v834;
      if (v206 < 0) {
        v206 = -v206;
      }
      v817 = v205;
      if ((unsigned int)v206 >= 0x49) {
        v208 = v195;
      }
      if (v207 <= 63) {
        v209 = v208;
      }
      else {
        v209 = v195;
      }
      v210 = v205 - v194;
      if (v205 != v194 || v209 != v195) {
        v810 = v156;
        v832 = v2;
        if (v195 == v194) {
          v807 = 0x400000;
        }
        else {
          v805 = v164;
          v751 = v205 - v194;
          v752 = vardiv_64_plt((unsigned int)(v209 - v205), v195 - v194, 16),
          v297 = COERCE_AS(__typeof__(v297),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v164 = v805;
          v807 = v752;
          v156 = v810;
          v210 = v751;
        }
        if (v164 != 0) {
          v753 = v161;
          v806 = v209 - v195;
          do {
            v755 = *v753;
            if (*v753 < v194) {
              v754 = v210 + v755;
            }
            else if (v755 <= v195) {
              v756 = v210;
              v757 = varmul_64_plt(v807, *v753 - v194, 16),
              v297 = COERCE_AS(__typeof__(v297),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v210 = v756;
              v754 = v757 + v817;
              v156 = v810;
            }
            else {
              v754 = v806 + v755;
            }
            *v753++ = v754;
            *v189++ = v754;
            --v165;
          } while (v165 != 0);
        }
        v2 = v832;
        v157 = v834;
        if (v121 >= 1) {
          v758 = 0;
          do {
            v759 = (unsigned __int16)v758++;
            v760 = (unsigned __int16*)(v834 + 48LL * v759);
            v761 = (v161[v760[2]] + v161[*v760]) / 2;
            *((_DWORD*)v760 + 6) = v761;
            *((_DWORD*)v760 + 7) = v761;
          } while (v121 > (unsigned int)(unsigned __int16)v758);
        }
      }
    }
    else {
      v198 = v193 + v191;
      v199 = v194 - v162;
      v200 = v169 - v198;
      if (v199 > v169 - v198) {
        v201 = 0;
      }
      else {
        v201 = v155 - v194;
        if (v201 >= 0) {
          v202 = v201;
        }
        else {
          v202 = -v201;
        }
        if (v202 >= 0x41) {
          v201 = 0;
        }
        if (v199 > 63) {
          v201 = 0;
        }
      }
      if (v200 <= v199 && v200 <= 63) {
        v748 = v120 - v197;
        if (v748 < 0) {
          v748 = -v748;
        }
        if ((unsigned int)v748 <= 0x40) {
          v201 = v166 - v120 - v198;
        }
      }
      v157 = v834;
      if (v201 != 0) {
        if (v164 != 0) {
          v749 = v165 & 7;
          if (v164 >= 8u) {
            v762 = v189 + 4;
            v763 = v161 + 4;
            v764 = 0;
            do {
              v764 -= 8;
              v765 = *(v763 - 4) + v201;
              *(v763 - 4) = v765;
              *(v762 - 4) = v765;
              v766 = *(v763 - 3) + v201;
              *(v763 - 3) = v766;
              *(v762 - 3) = v766;
              v767 = *(v763 - 2) + v201;
              *(v763 - 2) = v767;
              *(v762 - 2) = v767;
              v768 = *(v763 - 1) + v201;
              *(v763 - 1) = v768;
              *(v762 - 1) = v768;
              v769 = *(int*)v763 + v201;
              *(_DWORD*)v763 = v769;
              *v762 = v769;
              v770 = v763[1] + v201;
              v763[1] = v770;
              v762[1] = v770;
              v771 = v763[2] + v201;
              v763[2] = v771;
              v762[2] = v771;
              v772 = v763[3] + v201;
              v763[3] = v772;
              v762[3] = v772;
              v762 += 8;
              v763 += 8;
            } while (-(__int64)((unsigned __int16)v165 & 0xFFF8) != v764);
            v750 = -v764;
          }
          else {
            v750 = 0;
          }
          if ((v165 & 7) != 0) {
            v773 = &v189[v750];
            v774 = &v161[v750];
            do {
              --v749;
              v775 = *v774 + v201;
              *v774++ = v775;
              *v773++ = v775;
            } while (v749 != 0);
          }
        }
        v157 = v834;
        if (v121 >= 1) {
          v776 = 0;
          do {
            v777 = (unsigned __int16)v776++;
            v778 = v834 + 48LL * v777;
            v779 = *(int*)(v778 + 24) + v201;
            *(_DWORD*)(v778 + 24) = v779;
            *(_DWORD*)(v778 + 28) = v779;
          } while (v121 > (unsigned int)(unsigned __int16)v776);
        }
      }
    }
  }
  v5 = v827;
  v10 = v814;
  v113 = v157;
  if ((unsigned int)(v156 - 105) > 1) {
    goto LABEL_445;
  }
  if (v121 < 2) {
    if (v121 != 1) {
      goto LABEL_445;
    }
    v170 = 0;
  }
  else {
    v158 = ((unsigned int)v121 - 1LL) & 7;
    if ((unsigned int)(v121 - 2) >= 7) {
      v171 = (_DWORD*)(v157 + 232);
      v172 = 1;
      v160 = 0;
      do {
        v174 = v172;
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)*(v171 - 36)) {
          v160 = v172;
        }
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)*(v171 - 24)) {
          v160 = v172 + 1;
        }
        v175 = v172 + 2;
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)*(v171 - 12)) {
          v160 = v175;
        }
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)*v171) {
          v160 = v174 + 3;
        }
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)v171[12]) {
          v160 = v174 + 4;
        }
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)v171[24]) {
          v160 = v174 + 5;
        }
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) <
            (signed __int32)v171[36]) {
          v160 = v174 + 6;
        }
        v173 = v171[48];
        v171 += 96;
        v172 = v174 + 8;
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) < v173) {
          v160 = v174 + 7;
        }
      } while (v174 + 7 != (((unsigned int)v121 - 1LL) & 0xFFFFFFFFFFFFFFF8LL));
      v159 = v174 + 8;
    }
    else {
      v159 = 1;
      v160 = 0;
    }
    v170 = v160;
    if (v158 != 0) {
      v212 = (_DWORD*)(48 * v159 + v113 + 40);
      do {
        v170 = v159;
        if ((signed __int32)*(_DWORD*)(v113 + 48LL * v160 + 40) >=
            (signed __int32)*v212) {
          v170 = v160;
        }
        LODWORD(v159) = v159 + 1;
        v212 += 12;
        --v158;
        v160 = v170;
      } while (v158 != 0);
    }
  }
  v213 = v121 & 3;
  v214 = v170;
  v215 = v113 + 48LL * v170;
  v216 = 300000;
  if ((unsigned int)v121 < 4) {
    v217 = 0;
    v218 = -1;
    goto LABEL_426;
  }
  v219 = (_DWORD*)(v113 + 120);
  v218 = -1;
  v220 = 0;
  do {
    v221 = v220;
    if (v214 == v220) {
      v222 = v216;
      v223 = v221 + 1;
      if (v221 + 1 == v214) {
        goto LABEL_397;
      }
      goto LABEL_367;
    }
    v222 = *(int*)(v215 + 24) - *(v219 - 24);
    if (v222 < 0) {
      v222 = *(v219 - 24) - *(int*)(v215 + 24);
    }
    v228 = v222 >= v216 || (unsigned int)v222 >= 0x10;
    v229 = !v228;
    if (v228) {
      v222 = v216;
      if (v229 != 0) {
      LABEL_389:
        v218 = v221;
        v223 = v221 + 1;
        if (v221 + 1 == v214) {
          goto LABEL_397;
        }
        goto LABEL_367;
      }
    }
    else if (v229 != 0) {
      goto LABEL_389;
    }
    v223 = v221 + 1;
    if (v221 + 1 == v214) {
    LABEL_397:
      v224 = v222;
      v227 = v223 + 1;
      if (v227 == v214) {
      LABEL_393:
        v230 = v224;
        v231 = v227 + 1;
        if (v231 == v214) {
          goto LABEL_363;
        }
        goto LABEL_412;
      }
      goto LABEL_398;
    }
  LABEL_367:
    v224 = *(int*)(v215 + 24) - *(v219 - 12);
    if (v224 < 0) {
      v224 = *(v219 - 12) - *(int*)(v215 + 24);
    }
    v225 = v224 >= v222 || (unsigned int)v224 >= 0x10;
    v226 = !v225;
    if (v225) {
      v224 = v222;
      if (v226 != 0) {
      LABEL_377:
        v218 = v221 + 1;
        v227 = v223 + 1;
        if (v227 == v214) {
          goto LABEL_393;
        }
        goto LABEL_398;
      }
    }
    else if (v226 != 0) {
      goto LABEL_377;
    }
    v227 = v223 + 1;
    if (v227 == v214) {
      goto LABEL_393;
    }
  LABEL_398:
    v230 = *(int*)(v215 + 24) - *(int*)v219;
    if (v230 < 0) {
      v230 = *(int*)v219 - *(int*)(v215 + 24);
    }
    v232 = v230 >= v224 || (unsigned int)v230 >= 0x10;
    v233 = !v232;
    if (v232) {
      v230 = v224;
      if (v233 != 0) {
      LABEL_408:
        v218 = v221 + 2;
        v231 = v227 + 1;
        if (v231 == v214) {
          goto LABEL_363;
        }
        goto LABEL_412;
      }
    }
    else if (v233 != 0) {
      goto LABEL_408;
    }
    v231 = v227 + 1;
    if (v231 == v214) {
    LABEL_363:
      v216 = v230;
      goto LABEL_364;
    }
  LABEL_412:
    v216 = *(int*)(v215 + 24) - v219[12];
    if (v216 < 0) {
      v216 = v219[12] - *(int*)(v215 + 24);
    }
    v234 = v216 >= v230 || (unsigned int)v216 >= 0x10;
    v235 = !v234;
    if (v234) {
      v216 = v230;
      if (v235 == 0) {
        goto LABEL_364;
      }
    }
    else if (v235 == 0) {
      goto LABEL_364;
    }
    v218 = v221 + 3;
  LABEL_364:
    v219 += 48;
    v220 = v231 + 1;
  } while (v231 + 1 != (v121 & 0xFFFFFFFC));
  v217 = v221 + 4;
LABEL_426:
  if ((v121 & 3) != 0) {
    v236 = (_DWORD*)(48 * v217 + v113 + 24);
    do {
      if (v214 != v217) {
        v237 = *(int*)(v215 + 24) - *(int*)v236;
        if (v237 < 0) {
          v237 = *(int*)v236 - *(int*)(v215 + 24);
        }
        if (v237 < v216 && (unsigned int)v237 < 0x10) {
          v216 = v237;
          v218 = v217;
        }
      }
      ++v217;
      v236 += 12;
      --v213;
    } while (v213 != 0);
  }
  if (v218 != -1) {
    v238 = (_DWORD*)(v113 + 48LL * v218);
    v239 = v113 + 48LL * (unsigned int)v214;
    v240 = v238[6];
    v241 = (int)v238[8] >> 1;
    v242 = ((v240 - v241 + 32) & 0xFFFFFFC0) - (v240 - v241);
    v243 = ((v241 + v240 + 32) & 0xFFFFFFC0) - (v241 + v240);
    if (v242 >= 0) {
      v244 = v242;
    }
    else {
      v244 = -v242;
    }
    if (v243 >= 0) {
      v245 = v243;
    }
    else {
      v245 = -v243;
    }
    if (v244 < v245) {
      v243 = v242;
    }
    v246 = v243 + v240;
    *(_DWORD*)(v239 + 28) = v246;
    v238[7] = v246;
  }
LABEL_445:
  if (v830 != 6) {
    v115 = v828;
    nn_fontll_itype_44bd80(0x78u, v828, v121, v113, (__int64)v2, v10),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_451;
  }
  nn_fontll_itype_44b8a0((unsigned int)v121, v113),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v115 = v828;
  nn_fontll_itype_44bd80(0x78u, v828, v121, v113, (__int64)v2, v10),
      v297 = COERCE_AS(__typeof__(v297),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v828 != 7) {
  LABEL_451:
    *(_BYTE*)(v10 + 90) = 1;
    fnt_IUP_plt(v10),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v250 = *(_QWORD*)(v10 + 64);
    v109 = v824;
    v116 = v820;
    v114 = *(_QWORD*)(v250 + 360);
    v840_.v840 = *(_QWORD*)(v250 + 352);
    goto LABEL_452;
  }
  v247 = *(_QWORD*)(v10 + 64);
  v109 = v824;
  v116 = v820;
  v114 = *(_QWORD*)(v247 + 360);
  v840_.v840 = *(_QWORD*)(v247 + 352);
LABEL_448:
  v248 = nn_fontll_itype_449700(121, v4, (__int64)v2, &v840_.v840, v114),
  v297 = COERCE_AS(__typeof__(v297),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v818 = v114;
  v249 = nn_fontll_itype_449b00(0x79u, v248, (__int64)v4, v113, v2, v111,
                                &v840_.v840, v114),
  v297 = COERCE_AS(__typeof__(v297),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v249 != 0) {
    goto LABEL_453;
  }
LABEL_470:
  if ((unsigned int)v116 > 0x12) {
    goto LABEL_715;
  }
  v267 = 24;
  v268 = 22;
  v269 = 21;
  v270 = 23;
  switch (v116) {
  case 0LL:
  case 1LL:
  case 2LL:
    v815 = v10;
    v271 = v5[15];
    v808 = v249;
    v273 = v2[2];
    v272 = v2[3];
    v274 = *v273;
    v833 = (__int64)v2;
    v275 = v5[13];
    v276 = v5[14];
    v821 = v5[17];
    v794 = *((unsigned __int16*)v2[8] + *((__int16*)v2 + 40) - 1);
    v277 = (v275 + 32) & 0xFFFFFFC0;
    v278 = v276 - v275 < 44 || v821 - v5[18] < 44;
    v800 = (v5[16] + 32) & 0xFFFFFFC0;
    v803 = (v275 + 32) & 0xFFFFFFC0;
    v279 = v278;
    v280 = v279 == 0;
    if (v279 != 0) {
      v281 = v277;
    }
    else {
      v281 = (v276 + 32) & 0xFFFFFFC0;
    }
    v798 = v281;
    if (v280) {
      v282 = (v271 + 32) & 0xFFFFFFC0;
    }
    else {
      v282 = (v5[16] + 32) & 0xFFFFFFC0;
    }
    v796 = v282;
    if (*((_WORD*)v2[8] + *((__int16*)v2 + 40) - 1) != 0) {
      v283 = 1;
      v284 = *((unsigned __int16*)v2[8] + *((__int16*)v2 + 40) - 1);
      v285 = 0;
      v286 = 0;
      v287 = *v273;
      v825 = -1;
      v811 = -1;
      do {
        v288 = v273[v283];
        v289 = v272[v283];
        if (v288 <= v287) {
          v290 = v287;
        }
        else {
          v290 = v273[v283];
        }
        if (v288 >= v274) {
          v287 = v290;
        }
        else {
          v274 = v273[v283];
        }
        if (v289 > v272[v285]) {
          v285 = (unsigned int)v283;
        }
        if (v289 < v272[v286]) {
          v286 = (unsigned int)v283;
        }
        v291 = v289 - v271;
        if (v289 - v271 < 0) {
          v291 = v271 - v289;
        }
        if (v291 <= 3 &&
            (unsigned int)nn_fontll_itype_44e9e0(v283, v833) == 1) {
          v811 = v283;
        }
        else {
          v292 = v289 - v821;
          if (v289 - v821 < 0) {
            v292 = v821 - v289;
          }
          if (v292 <= 3) {
            v293 = nn_fontll_itype_44e9e0(v283, v833),
            v297 = COERCE_AS(__typeof__(v297),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v294 = v825;
            if (v293 == -1) {
              v294 = v283;
            }
            v825 = v294;
          }
        }
        ++v283;
        --v284;
      } while (v284 != 0);
    }
    else {
      v286 = 0;
      v285 = 0;
      v287 = *v273;
      v811 = -1;
      v825 = -1;
    }
    v10 = v815;
    if (v808 < 1) {
      goto LABEL_518;
    }
    v297 = v272[v285];
    v298 = (unsigned int)v808 + 1LL;
    v299 = (int*)(v834 + 48LL * (unsigned int)v808 - 24);
    break;
  case 3LL:
  case 11LL:
    goto LABEL_715;
  case 4LL:
    LODWORD(v838_.v838) = v5[64];
    nn_fontll_itype_44d780((unsigned int)v838_.v838, v249, v113),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_718;
  case 5LL:
    v267 = 28;
    v268 = 26;
    v269 = 25;
    v270 = 27;
    goto LABEL_552;
  case 6LL:
  LABEL_552:
    v323 = v5[v269];
    v324 = v5[v268];
    v325 = v5[v267];
    LODWORD(v838_.v838) = v5[v270];
    HIDWORD(v838_.v838) = v323;
    v838_.v839 = __PAIR64__(v325, v324);
    nn_fontll_itype_44cf60(&v838_.v838, v249, (unsigned __int16*)v113,
                           (__int64*)v2, v109 << 6),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_716;
  case 7LL:
    if (v249 < 1) {
      goto LABEL_718;
    }
    v312 = v5[29];
    v313 = v249;
    v314 = (v312 + 32) & 0xFFFFFFC0;
    if (v249 == 1) {
      goto LABEL_543;
    }
    v315 = (_DWORD*)(v113 + 80);
    v316 = 0;
    do {
      v317 = (signed __int32)*(v315 - 12) / 2;
      v318 = v317 - v312 + *(v315 - 14);
      if (v318 < 0) {
        v318 = -v318;
      }
      if ((unsigned int)v318 <= 0x3F) {
        *(v315 - 13) = v314 - v317;
      }
      v319 = (signed __int32)*v315 / 2;
      v320 = v319 - v312 + *(v315 - 2);
      if (v320 < 0) {
        v320 = -v320;
      }
      if ((unsigned int)v320 <= 0x3F) {
        *(v315 - 1) = v314 - v319;
      }
      v316 -= 2;
      v315 += 24;
    } while (-(__int64)(v249 & 0x7FFFFFFE) != v316);
    goto LABEL_1001;
  case 8LL:
    if (v249 < 1) {
      goto LABEL_718;
    }
    v312 = v5[31];
    v313 = v249;
    v314 = (v312 + 32) & 0xFFFFFFC0;
    if (v249 == 1) {
    LABEL_543:
      v321 = 0;
      if ((v313 & 1) == 0) {
        goto LABEL_715;
      }
    }
    else {
      v680 = (_DWORD*)(v113 + 80);
      v316 = 0;
      do {
        v681 = (signed __int32)*(v680 - 12) / 2;
        v682 = v681 - v312 + *(v680 - 14);
        if (v682 < 0) {
          v682 = -v682;
        }
        if ((unsigned int)v682 <= 0x3F) {
          *(v680 - 13) = v314 - v681;
        }
        v683 = (signed __int32)*v680 / 2;
        v684 = v683 - v312 + *(v680 - 2);
        if (v684 < 0) {
          v684 = -v684;
        }
        if ((unsigned int)v684 <= 0x3F) {
          *(v680 - 1) = v314 - v683;
        }
        v316 -= 2;
        v680 += 24;
      } while (-(__int64)(v249 & 0x7FFFFFFE) != v316);
    LABEL_1001:
      v321 = -v316;
      if ((v313 & 1) == 0) {
        goto LABEL_715;
      }
    }
  LABEL_1015:
    v691 = (_DWORD*)(v113 + 48 * v321);
    v692 = (signed __int32)v691[8] / 2;
    v693 = v692 - v312 + v691[6];
    if (v693 < 0) {
      v693 = -v693;
    }
    if ((unsigned int)v693 <= 0x3F) {
      v691[7] = v314 - v692;
    }
    goto LABEL_715;
  case 9LL:
    if (v249 < 1) {
      goto LABEL_718;
    }
    v312 = v5[33];
    v314 = (v312 + 32) & 0xFFFFFFC0;
    if (v249 == 1) {
      v321 = 0;
    }
    else {
      v685 = (_DWORD*)(v113 + 80);
      v686 = 0;
      do {
        v687 = (signed __int32)*(v685 - 12) / 2;
        v688 = v687 - v312 + *(v685 - 14);
        if (v688 < 0) {
          v688 = -v688;
        }
        if ((unsigned int)v688 <= 0x3F) {
          *(v685 - 13) = v314 - v687;
        }
        v689 = (signed __int32)*v685 / 2;
        v690 = v689 - v312 + *(v685 - 2);
        if (v690 < 0) {
          v690 = -v690;
        }
        if ((unsigned int)v690 <= 0x3F) {
          *(v685 - 1) = v314 - v689;
        }
        v686 -= 2;
        v685 += 24;
      } while (-(__int64)(v249 & 0x7FFFFFFE) != v686);
      v321 = -v686;
    }
    if ((v249 & 1) != 0) {
      goto LABEL_1015;
    }
    goto LABEL_715;
  case 10LL:
    v322 = v5[36];
    LODWORD(v838_.v838) = v5[35];
    HIDWORD(v838_.v838) = v322;
    nn_fontll_itype_44d600(&v838_.v838, v249, v113),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_718;
  case 12LL:
    v838_.v838 = *(_QWORD*)(v5 + 37);
    v296 = v5[39];
    v295 = v5[40];
    goto LABEL_555;
  case 13LL:
    v838_.v838 = *(_QWORD*)(v5 + 41);
    v296 = v5[43];
    v295 = v5[44];
    goto LABEL_555;
  case 14LL:
    v838_.v838 = *(_QWORD*)(v5 + 45);
    v296 = v5[47];
    v295 = v5[48];
    goto LABEL_555;
  case 15LL:
  case 16LL:
    v838_.v838 = *(_QWORD*)(v5 + 49);
    v296 = v5[51];
    v295 = v5[52];
    goto LABEL_555;
  case 17LL:
    v296 = v5[58];
    LODWORD(v838_.v838) = v5[57];
    HIDWORD(v838_.v838) = v838_.v838;
    v295 = v5[59];
    goto LABEL_555;
  case 18LL:
    v838_.v838 = *((_QWORD*)v5 + 30);
    v296 = v5[62];
    v295 = v5[63];
  LABEL_555:
    v838_.v839 = __PAIR64__(v296, v295);
    nn_fontll_itype_44d520(&v838_.v838, v249, v113),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_718;
  }
  do {
    v300 = v299[2];
    v301 = *v299;
    v299 -= 12;
    v300 /= 2;
    v302 = v301 + v300 + 1;
    if (v301 + ~v300 <= v297 && v297 <= v302) {
      v307 = v808;
      goto LABEL_557;
    }
    --v298;
  } while (v298 > 1);
LABEL_518:
  v304 = 0;
  v305 = 0;
  v306 = v834 + 48LL * v808;
  v307 = v808 + 1;
  *(_WORD*)v306 = v285;
  *(_WORD*)(v306 + 2) = v285;
  *(_WORD*)(v306 + 4) = v285;
  *(_WORD*)(v306 + 6) = v285;
  v308 = v272[v285];
  *(_QWORD*)(v306 + 8) = 0;
  *(_QWORD*)(v306 + 16) = 0;
  v309 = v306 + 8;
  *(_DWORD*)(v309 + 28) = v274;
  *(_DWORD*)(v309 + 32) = v287;
  *(_DWORD*)(v309 + 24) = 0;
  *(_DWORD*)(v309 + 16) = v308;
  *(_DWORD*)(v309 + 20) = v308;
  v310 = v840_.v840;
  if (v285 == 0) {
    goto LABEL_524;
  }
LABEL_521:
  if (v272[v304] == v272[v285]) {
    v311 = v310 + 16;
    *(_WORD*)v310 = v304;
    *(_QWORD*)(v310 + 8) = v305;
    *(_QWORD*)v309 = v310;
    if (v310 + 16 < v818) {
      v305 = v310;
      v310 += 16LL;
      goto LABEL_525;
    }
    v310 += 16LL;
  }
  else {
  LABEL_524:
    while (1) {
      v311 = v310;
    LABEL_525:
      if (v304 >= v794) {
        break;
      }
      ++v304;
      v310 = v311;
      if (v285 != v304) {
        goto LABEL_521;
      }
    }
  }
  v840_.v840 = v310;
LABEL_557:
  if (v307 < 1) {
    LODWORD(v328) = 0;
  }
  else {
    v326 = v272[v286];
    v327 = (int*)(v834 + 32);
    v328 = 0;
    while (1) {
      v329 = *(v327 - 2);
      v330 = *v327;
      v327 += 12;
      v331 = v329 + ~(v330 / 2);
      v332 = v329 + v330 / 2 + 1;
      if (v331 <= v326 && v326 <= v332) {
        break;
      }
      if (v307 == ++v328) {
        goto LABEL_567;
      }
    }
  }
  if ((_DWORD)v328 == v307) {
  LABEL_567:
    v334 = v307 + 1;
    v335 = 0;
    v336 = 0;
    v337 = v834 + 48LL * v307;
    *(_WORD*)v337 = v286;
    *(_WORD*)(v337 + 2) = v286;
    *(_WORD*)(v337 + 4) = v286;
    *(_WORD*)(v337 + 6) = v286;
    v338 = v272[v286];
    *(_QWORD*)(v337 + 8) = 0;
    *(_QWORD*)(v337 + 16) = 0;
    v339 = v337 + 8;
    *(_DWORD*)(v339 + 28) = v274;
    *(_DWORD*)(v339 + 32) = v287;
    *(_DWORD*)(v339 + 24) = 0;
    *(_DWORD*)(v339 + 16) = v338;
    *(_DWORD*)(v339 + 20) = v338;
    v340 = v840_.v840;
    if (v286 == 0) {
      goto LABEL_573;
    }
  LABEL_570:
    if (v272[v335] == v272[v286]) {
      v341 = v340 + 16;
      *(_WORD*)v340 = v335;
      *(_QWORD*)(v340 + 8) = v336;
      *(_QWORD*)v339 = v340;
      if (v340 + 16 < v818) {
        v336 = v340;
        v340 += 16LL;
        goto LABEL_574;
      }
      v340 += 16LL;
    }
    else {
    LABEL_573:
      while (1) {
        v341 = v340;
      LABEL_574:
        if (v335 >= v794) {
          break;
        }
        ++v335;
        v340 = v341;
        if (v286 != v335) {
          goto LABEL_570;
        }
      }
    }
    v840_.v840 = v340;
  }
  else {
    v334 = v307;
  }
  if ((v811 & 0x80000000) == 0) {
    if (v334 < 1) {
      LODWORD(v344) = 0;
    }
    else {
      v342 = v272[v811];
      v343 = (int*)(v834 + 32);
      v344 = 0;
      v345 = v811;
      while (1) {
        v346 = *(v343 - 2);
        v347 = *v343;
        v343 += 12;
        v348 = v346 + ~(v347 / 2);
        v349 = v346 + v347 / 2 + 1;
        if (v348 <= v342 && v342 <= v349) {
          break;
        }
        if (v334 == ++v344) {
          goto LABEL_589;
        }
      }
    }
    if ((_DWORD)v344 == v334) {
      v345 = v811;
    LABEL_589:
      v351 = 0;
      v352 = 0;
      v353 = v834 + 48LL * v334++;
      *(_WORD*)v353 = v811;
      *(_WORD*)(v353 + 2) = v811;
      *(_WORD*)(v353 + 4) = v811;
      *(_WORD*)(v353 + 6) = v811;
      v354 = v272[v345];
      *(_QWORD*)(v353 + 8) = 0;
      *(_QWORD*)(v353 + 16) = 0;
      v355 = v353 + 8;
      *(_DWORD*)(v355 + 28) = v274;
      *(_DWORD*)(v355 + 32) = v287;
      *(_DWORD*)(v355 + 24) = 0;
      *(_DWORD*)(v355 + 16) = v354;
      *(_DWORD*)(v355 + 20) = v354;
      v356 = v840_.v840;
      if (v345 == 0) {
        goto LABEL_595;
      }
    LABEL_592:
      if (v272[v351] == v272[v345]) {
        v357 = v356 + 16;
        *(_WORD*)v356 = v351;
        *(_QWORD*)(v356 + 8) = v352;
        *(_QWORD*)v355 = v356;
        if (v356 + 16 < v818) {
          v352 = v356;
          v356 += 16LL;
          goto LABEL_596;
        }
        v356 += 16LL;
      }
      else {
      LABEL_595:
        while (1) {
          v357 = v356;
        LABEL_596:
          if (v351 >= v794) {
            break;
          }
          ++v351;
          v356 = v357;
          if (v345 != v351) {
            goto LABEL_592;
          }
        }
      }
      v840_.v840 = v356;
    }
  }
  if ((v825 & 0x80000000) != 0 || v272[v825] == v272[v286]) {
    v2 = (int**)v833;
    v359 = v800;
    v358 = v803;
    v360 = v798;
    v361 = v796;
  }
  else {
    v362 = v840_.v840;
    v359 = v800;
    v358 = v803;
    v363 = 0;
    v364 = 0;
    v365 = v834 + 48LL * v334;
    v360 = v798;
    v361 = v796;
    ++v334;
    *(_WORD*)v365 = v825;
    *(_WORD*)(v365 + 2) = v825;
    *(_WORD*)(v365 + 4) = v825;
    *(_WORD*)(v365 + 6) = v825;
    v366 = v272[v825];
    *(_QWORD*)(v365 + 8) = 0;
    v367 = v365 + 8;
    *(_DWORD*)(v367 + 28) = v274;
    *(_DWORD*)(v367 + 32) = v287;
    v2 = (int**)v833;
    *(_QWORD*)(v367 + 8) = 0;
    *(_DWORD*)(v367 + 24) = 0;
    *(_DWORD*)(v367 + 16) = v366;
    *(_DWORD*)(v367 + 20) = v366;
    if (v825 == 0) {
      goto LABEL_607;
    }
  LABEL_604:
    if (v272[v363] == v272[v825]) {
      v368 = v362 + 16;
      *(_WORD*)v362 = v363;
      *(_QWORD*)(v362 + 8) = v364;
      *(_QWORD*)v367 = v362;
      if (v362 + 16 < v818) {
        v364 = v362;
        v362 += 16LL;
        goto LABEL_608;
      }
      v362 += 16LL;
    }
    else {
    LABEL_607:
      while (1) {
        v368 = v362;
      LABEL_608:
        if (v363 >= v794) {
          break;
        }
        ++v363;
        v362 = v368;
        if (v825 != v363) {
          goto LABEL_604;
        }
      }
    }
    v840_.v840 = v362;
  }
  if (v334 >= 1) {
    v369 = (_DWORD*)(v834 + 32);
    for (i = (unsigned int)v334; i != 0; --i) {
      v371 = *(v369 - 2);
      v372 = (signed __int32)*v369 / 2;
      v373 = v372 + v371;
      v374 = v372 + v371 - v827[13];
      if (v374 < 0) {
        v374 = v827[13] - (v372 + v371);
      }
      if ((unsigned int)v374 > 0x1F) {
        v376 = v373 - v827[14];
        if (v376 < 0) {
          v376 = v827[14] - v373;
        }
        if ((unsigned int)v376 > 0x1F) {
          v377 = v373 - v827[15];
          if (v377 < 0) {
            v377 = v827[15] - v373;
          }
          if ((unsigned int)v377 > 0x2F) {
            v378 = v827[16];
            v379 = v373 - v378;
            if (v379 < 0) {
              v379 = -v379;
            }
            if ((unsigned int)v379 > 0x2F) {
              v380 = v371 - v372;
              v381 = v380 - v827[17];
              if (v381 < 0) {
                v381 = v827[17] - v380;
              }
              if ((unsigned int)v381 > 0x2F) {
                v382 = v380 - v378;
                if (v382 < 0) {
                  v382 = -v382;
                }
                if ((unsigned int)v382 > 0x2F) {
                  goto LABEL_637;
                }
                v375 = v372 + v359;
              }
              else {
                v375 = v372 + ((v821 + 32) & 0xFFFFFFC0);
              }
            }
            else {
              v375 = v359 - v372;
            }
          }
          else {
            v375 = v361 - v372;
          }
        }
        else {
          v375 = v360 - v372;
        }
      }
      else {
        v375 = v358 - v372;
      }
      *(v369 - 1) = v375;
    LABEL_637:
      v369 += 12;
    }
  }
  v383 = *(_QWORD**)(v815 + 64);
  v384 = *((unsigned __int16*)v2 + 40);
  v386 = *v2;
  v385 = (__int64)v2[1];
  v387 = v2[2];
  v388 = v2[3];
  v389 = v2[8];
  v390 = v2[7];
  v391 = (int*)v383[46];
  v392 = v383[47];
  v394 = v383[48];
  v393 = v383[49];
  v812 = v2[9];
  v840_.v845 = 0;
  v840_.v846[0] = 0;
  if (v384 >= 0x20) {
    v395 = 32;
  }
  else {
    v395 = v384;
  }
  v840_.v843 = 0;
  v840_.v844 = 0;
  v795 = (__int64)v387;
  v797 = v389;
  v804 = v390;
  v826 = v395;
  v799 = v391;
  if (v384 != 0) {
    v396 = 0;
    do {
      v397 = *((unsigned __int16*)v390 + v396);
      *(_DWORD*)(v394 + 4 * v396) = v397;
      v391[v396] = v397;
      *(_DWORD*)(v393 + 4 * v396) = v397;
      *(_DWORD*)(v392 + 4 * v396) = v397;
      v398 = v397 + 1;
      for (j = *((unsigned __int16*)v389 + v396); j >= v398;
           j = *((unsigned __int16*)v389 + v396)) {
        v400 = v398;
        v401 = *(_DWORD*)(v385 + 4LL * v398);
        if (v401 <=
            (signed __int32)*(_DWORD*)(v385 + 4LL * *(int*)(v393 + 4 * v396))) {
          if (v401 < (signed __int32)*(
                         _DWORD*)(v385 + 4LL * *(int*)(v392 + 4 * v396))) {
            *(_DWORD*)(v392 + 4 * v396) = v398;
          }
        }
        else {
          *(_DWORD*)(v393 + 4 * v396) = v398;
        }
        v402 = v386[v398];
        if (v402 > v386[*(int*)(v394 + 4 * v396)]) {
          *(_DWORD*)(v394 + 4 * v396) = v400;
        }
        else if (v402 < v386[v391[v396]]) {
          v391[v396] = v400;
        }
        v398 = v400 + 1;
      }
      ++v396;
    } while (v396 != v395);
    v822 = v388;
    v801 = v384;
    if (v384 == 1) {
      v403 = 0;
    }
    else {
      v408 = v386[*v391];
      v409 = (v395 - 1) & 7;
      if ((unsigned int)(v395 - 2) >= 7) {
        v411 = (v395 - 1) & 0xFFFFFFFFFFFFFFF8LL;
        v412 = v391 + 4;
        v403 = 0;
        v413 = 0;
        do {
          if (v386[*(v412 - 3)] >= v408) {
            v414 = v403;
          }
          else {
            v408 = v386[*(v412 - 3)];
            v414 = v413 + 1;
          }
          if (v386[*(v412 - 2)] < v408) {
            v408 = v386[*(v412 - 2)];
            v414 = v413 + 2;
          }
          if (v386[*(v412 - 1)] < v408) {
            v408 = v386[*(v412 - 1)];
            v414 = v413 + 3;
          }
          if (v386[*v412] < v408) {
            v408 = v386[*v412];
            v414 = v413 + 4;
          }
          if (v386[v412[1]] < v408) {
            v408 = v386[v412[1]];
            v414 = v413 + 5;
          }
          if (v386[v412[2]] < v408) {
            v408 = v386[v412[2]];
            v414 = v413 + 6;
          }
          v415 = v386[v412[3]];
          v416 = v415 < v408;
          if (v415 < v408) {
            v408 = v386[v412[3]];
          }
          v417 = v413 + 7;
          v413 += 8;
          if (v416) {
            v414 = v417;
          }
          v418 = v412[4];
          v412 += 8;
          v419 = v386[v418];
          if (v419 >= v408) {
            v403 = v414;
          }
          else {
            v408 = v419;
            v403 = v413;
          }
        } while (v413 != v411);
        v410 = v413 + 1;
      }
      else {
        v403 = 0;
        v410 = 1;
      }
      for (; v409 != 0; --v409) {
        if (v386[v391[v410]] < v408) {
          v408 = v386[v391[v410]];
          v403 = v410;
        }
        ++v410;
      }
    }
    v420 = nn_fontll_itype_44d880(v403, (__int64*)v2),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v421 = (__int64*)v2;
    v422 = 0;
    do {
      *((_BYTE*)&v840_.v843 +
        v422) = (unsigned int)nn_fontll_itype_44d880(v422, v421) == v420,
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      ++v422;
    } while (v826 != v422);
    v404 = v801;
    v406 = v334;
    v423 = v826 & 3;
    v424 = 0;
    LODWORD(v407) = 0;
    v425 = 0;
    if (v801 >= 4) {
      v2 = (int**)v833;
      v10 = v815;
      v405 = (__int64)v822;
      v426 = (int*)(v393 + 8);
      v427 = (int*)(v392 + 8);
      do {
        v428 = *(int*)(v385 + 4LL * *(v426 - 2)) -
               *(int*)(v385 + 4LL * *(v427 - 2));
        v429 = v428 <= v425;
        if (v428 > v425) {
          v425 = *(int*)(v385 + 4LL * *(v426 - 2)) -
                 *(int*)(v385 + 4LL * *(v427 - 2));
        }
        v430 = *(_DWORD*)(v385 + 4LL * *(v427 - 1));
        if (!v429) {
          LODWORD(v407) = v424;
        }
        v431 = *v427;
        v432 = v427[1];
        v427 += 4;
        v433 = *(int*)(v385 + 4LL * *(v426 - 1)) - v430;
        v434 = v433 <= v425;
        v435 = *(_DWORD*)(v385 + 4 * v431);
        if (v433 > v425) {
          v425 = *(int*)(v385 + 4LL * *(v426 - 1)) - v430;
        }
        v436 = *v426;
        v437 = v426[1];
        v426 += 4;
        if (!v434) {
          LODWORD(v407) = v424 + 1;
        }
        v438 = *(int*)(v385 + 4 * v436) - v435;
        if (v438 > v425) {
          v425 = v438;
          LODWORD(v407) = v424 + 2;
        }
        v439 = *(int*)(v385 + 4 * v437) - *(int*)(v385 + 4 * v432);
        v440 = v439 <= v425;
        if (v439 > v425) {
          v425 = *(int*)(v385 + 4 * v437) - *(int*)(v385 + 4 * v432);
        }
        v441 = v424 + 3;
        v424 += 4;
        if (!v440) {
          LODWORD(v407) = v441;
        }
      } while (v424 != (v826 & 0x3C));
    }
    else {
      v2 = (int**)v833;
      v10 = v815;
      v405 = (__int64)v822;
    }
    if ((v826 & 3) != 0) {
      do {
        if (*(int*)(v385 + 4LL * *(int*)(v393 + 4 * v424)) -
                *(int*)(v385 + 4LL * *(int*)(v392 + 4 * v424)) >
            v425) {
          v425 = *(_DWORD*)(v385 + 4LL * *(int*)(v393 + 4 * v424)) -
                 *(int*)(v385 + 4LL * *(int*)(v392 + 4 * v424));
          LODWORD(v407) = v424;
        }
        ++v424;
        --v423;
      } while (v423 != 0);
    }
    v407 = (unsigned int)v407;
  }
  else {
    v404 = 0;
    nn_fontll_itype_44d880(0, (__int64*)v2),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v405 = (__int64)v388;
    v406 = v334;
    v407 = 0;
  }
  v442 = *(int*)(v393 + 4 * v407);
  v443 = *(_DWORD*)(v385 + 4 * v442);
  if (v443 < v827[15] - 32 || v404 == 0 ||
      (signed __int32)*(_DWORD*)(v385 + 4LL * *(int*)(v392 + 4 * v407)) >
          v827[17] + 32) {
    goto LABEL_713;
  }
  v529 = v826 - 1;
  v530 = v826 & 7;
  if ((unsigned __int64)(v826 - 1) >= 7) {
    v533 = v797;
    v532 = v799;
    v531 = v804;
    v650 = 0;
    v651 = (char*)&v840_.v843 + 3;
    v652 = (unsigned __int16*)(v797 + 2);
    v653 = (unsigned __int16*)(v804 + 2);
    while (1) {
      if (*(v653 - 4) == *(v652 - 4)) {
        *(v651 - 3) = 0;
        if (*(v653 - 3) != *(v652 - 3)) {
          goto LABEL_933;
        }
      }
      else if (*(v653 - 3) != *(v652 - 3)) {
      LABEL_933:
        if (*(v653 - 2) == *(v652 - 2)) {
          goto LABEL_934;
        }
        goto LABEL_942;
      }
      *(v651 - 2) = 0;
      if (*(v653 - 2) == *(v652 - 2)) {
      LABEL_934:
        *(v651 - 1) = 0;
        if (*(v653 - 1) != *(v652 - 1)) {
          goto LABEL_935;
        }
        goto LABEL_943;
      }
    LABEL_942:
      if (*(v653 - 1) != *(v652 - 1)) {
      LABEL_935:
        if (*v653 == *v652) {
          goto LABEL_936;
        }
        goto LABEL_944;
      }
    LABEL_943:
      *v651 = 0;
      if (*v653 == *v652) {
      LABEL_936:
        v651[1] = 0;
        if (v653[1] != v652[1]) {
          goto LABEL_937;
        }
        goto LABEL_945;
      }
    LABEL_944:
      if (v653[1] != v652[1]) {
      LABEL_937:
        if (v653[2] == v652[2]) {
          goto LABEL_938;
        }
        goto LABEL_946;
      }
    LABEL_945:
      v651[2] = 0;
      if (v653[2] == v652[2]) {
      LABEL_938:
        v651[3] = 0;
        if (v653[3] == v652[3]) {
          goto LABEL_947;
        }
        goto LABEL_930;
      }
    LABEL_946:
      if (v653[3] == v652[3]) {
      LABEL_947:
        v651[4] = 0;
      }
    LABEL_930:
      v650 -= 8;
      v651 += 8;
      v652 += 8;
      v653 += 8;
      if (-(__int64)((unsigned __int16)v826 & 0xFFF8) == v650) {
        v534 = -v650;
        goto LABEL_949;
      }
    }
  }
  v531 = v804;
  v533 = v797;
  v532 = v799;
  v534 = 0;
LABEL_949:
  if ((v826 & 7) != 0) {
    v654 = (unsigned __int16*)v533 + v534;
    v655 = (char*)&v840_.v843 + v534;
    v656 = (unsigned __int16*)v531 + v534;
    do {
      v658 = *v656++;
      v657 = v658;
      v659 = *v654++;
      if (v657 == v659) {
        *v655 = 0;
      }
      ++v655;
      --v530;
    } while (v530 != 0);
  }
  v660 = 0;
  do {
    if (*((_BYTE*)&v840_.v843 + v660) != 0) {
      v661 = 0;
      while (
          v660 == v661 ||
          (signed __int32)*(_DWORD*)(v385 + 4LL * *(int*)(v392 + 4 * v661)) <=
              (signed __int32)*(_DWORD*)(v385 +
                                         4LL * *(int*)(v392 + 4 * v660)) ||
          (signed __int32)*(_DWORD*)(v385 + 4LL * *(int*)(v393 + 4 * v661)) >=
              (signed __int32)*(_DWORD*)(v385 +
                                         4LL * *(int*)(v393 + 4 * v660)) ||
          v386[v532[v661]] <= v386[v532[v660]] ||
          v386[*(int*)(v394 + 4 * v661)] >= v386[*(int*)(v394 + 4 * v660)]) {
        if (v826 == ++v661) {
          goto LABEL_955;
        }
      }
      *((_BYTE*)&v840_.v843 + v660) = 0;
    }
  LABEL_955:
    ++v660;
  } while (v660 != v826);
  v662 = v826 & 3;
  if (v529 < 3) {
    v663 = 0;
    v664 = 0;
    goto LABEL_980;
  }
  v665 = (int*)(v392 + 8);
  v666 = 0;
  v664 = 0;
  v667 = (char*)&v840_.v843 + 1;
  while (2) {
    if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v665 - 2)) >= v443) {
      v669 = (unsigned __int8)*(v667 - 1);
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v665 - 1)) < v443) {
        goto LABEL_976;
      }
    LABEL_972:
      v670 = (unsigned __int8)*v667;
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v665) >= v443) {
        goto LABEL_973;
      }
    LABEL_977:
      v671 = 0;
      v667[1] = 0;
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * v665[1]) < v443) {
        goto LABEL_968;
      }
    LABEL_978:
      v668 = (unsigned __int8)v667[2];
    }
    else {
      v669 = 0;
      *(v667 - 1) = 0;
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v665 - 1)) >= v443) {
        goto LABEL_972;
      }
    LABEL_976:
      v670 = 0;
      *v667 = 0;
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v665) < v443) {
        goto LABEL_977;
      }
    LABEL_973:
      v671 = (unsigned __int8)v667[1];
      if ((signed __int32)*(_DWORD*)(v385 + 4LL * v665[1]) >= v443) {
        goto LABEL_978;
      }
    LABEL_968:
      v668 = 0;
      v667[2] = 0;
    }
    v666 -= 4;
    v665 += 4;
    v667 += 4;
    v664 |= v668 | v671 | v670 | v669;
    if (-(__int64)((unsigned __int16)v826 & 0xFFFC) != v666) {
      continue;
    }
    break;
  }
  v663 = -v666;
LABEL_980:
  if ((v826 & 3) != 0) {
    v672 = (char*)&v840_.v843 + v663;
    v673 = (int*)(v392 + 4 * v663);
    do {
      while (1) {
        v674 = *v673++;
        if ((signed __int32)*(_DWORD*)(v385 + 4 * v674) >= v443) {
          break;
        }
        *v672++ = 0;
        if (--v662 == 0) {
          goto LABEL_985;
        }
      }
      v675 = (unsigned __int8)*v672++;
      --v662;
      v664 |= v675;
    } while (v662 != 0);
  }
LABEL_985:
  if (v664 == 0) {
  LABEL_713:
    v115 = v828;
    v249 = v406;
    goto LABEL_714;
  }
  if (v406 < 1) {
    v679 = 0;
  LABEL_1022:
    v694 = v443;
    goto LABEL_1030;
  }
  v676 = (_DWORD*)v834;
  v677 = (signed __int32)*(_DWORD*)(v834 + 32) / 2;
  v678 = *(int*)(v834 + 24) - v443 + v677;
  if (v678 < 0) {
    v678 = -v678;
  }
  if ((unsigned int)v678 >= 0x10) {
    v695 = 0;
    while (1) {
      v679 = ++v695;
      if (v406 <= (unsigned int)v695) {
        goto LABEL_1022;
      }
      v676 = (_DWORD*)(v834 + 48LL * v695);
      v677 = (signed __int32)v676[8] / 2;
      v696 = v676[6] - v443 + v677;
      if (v696 < 0) {
        v696 = -v696;
      }
      if ((unsigned int)v696 <= 0xF) {
        goto LABEL_1029;
      }
    }
  }
  v679 = 0;
LABEL_1029:
  v694 = v676[7] + v677;
LABEL_1030:
  if (v406 == v679) {
    v697 = nullptr;
    v698 = 0;
    v699 = v834 + 48LL * (unsigned int)v406;
    v700 = *((unsigned __int16*)v533 + v826 - 1);
    *(_WORD*)v699 = v442;
    *(_WORD*)(v699 + 6) = v442;
    *(_WORD*)(v699 + 4) = v442;
    *(_WORD*)(v699 + 2) = v442;
    *(_DWORD*)(v699 + 32) = 0;
    *(_DWORD*)(v699 + 24) = v443;
    *(_QWORD*)(v699 + 8) = 0;
    *(_QWORD*)(v699 + 16) = 0;
    *(_DWORD*)(v699 + 40) = v386[*(int*)(v394 + 4 * v407)];
    v809 = v406 + 1;
    v701 = v840_.v840;
    *(_DWORD*)(v699 + 36) = v386[v532[v407]];
    do {
      v702 = (_WORD*)v701;
      while ((unsigned __int16)v698 == (unsigned __int16)v442 ||
             v443 != *(_DWORD*)(v385 + 4LL * (unsigned __int16)v698)) {
        if (v700 < (unsigned __int16)++v698) {
          goto LABEL_1040;
        }
      }
      *(_QWORD*)(v701 + 8) = v697;
      v701 += 16LL;
      *v702 = v698;
      *(_QWORD*)(v699 + 8) = v702;
      if ((unsigned __int64)(v702 + 8) >= v818) {
        break;
      }
      ++v698;
      v697 = v702;
    } while (v700 >= (unsigned __int16)v698);
  LABEL_1040:
    v840_.v840 = v701;
    v694 = (v443 + 32) & 0xFFFFFFC0;
    *(_DWORD*)(v699 + 28) = v694;
  }
  else {
    v809 = v406;
  }
  v703 = v826 & 3;
  if (v529 >= 3) {
    v707 = (int*)(v393 + 8);
    v708 = (int*)(v392 + 8);
    v705 = 0x7FFFFFFF;
    v709 = 0;
    v710 = (char*)&v840_.v843 + 1;
    v706 = -2147483647;
    do {
      if (*(v710 - 1) != 0) {
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v708 - 2)) < v705) {
          v705 = *(_DWORD*)(v385 + 4LL * *(v708 - 2));
        }
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v707 - 2)) > v706) {
          v706 = *(_DWORD*)(v385 + 4LL * *(v707 - 2));
        }
      }
      if (*v710 != 0) {
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v708 - 1)) < v705) {
          v705 = *(_DWORD*)(v385 + 4LL * *(v708 - 1));
        }
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *(v707 - 1)) > v706) {
          v706 = *(_DWORD*)(v385 + 4LL * *(v707 - 1));
        }
      }
      if (v710[1] != 0) {
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v708) < v705) {
          v705 = *(_DWORD*)(v385 + 4LL * *v708);
        }
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v707) > v706) {
          v706 = *(_DWORD*)(v385 + 4LL * *v707);
        }
      }
      if (v710[2] != 0) {
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * v708[1]) < v705) {
          v705 = *(_DWORD*)(v385 + 4LL * v708[1]);
        }
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * v707[1]) > v706) {
          v706 = *(_DWORD*)(v385 + 4LL * v707[1]);
        }
      }
      v709 -= 4;
      v710 += 4;
      v707 += 4;
      v708 += 4;
    } while (-(__int64)((unsigned __int16)v826 & 0xFFFC) != v709);
    v704 = -v709;
  }
  else {
    v704 = 0;
    v705 = 0x7FFFFFFF;
    v706 = -2147483647;
  }
  v793 = (__int64)v386;
  v819 = v394;
  v823 = v405;
  v802 = v404;
  if ((v826 & 3) != 0) {
    v711 = (int*)(v393 + 4 * v704);
    v712 = (int*)(v392 + 4 * v704);
    v713 = (unsigned __int8*)&v840_.v843 + v704;
    do {
      v714 = *v713++;
      if (v714 != 0) {
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v712) < v705) {
          v705 = *(_DWORD*)(v385 + 4LL * *v712);
        }
        if ((signed __int32)*(_DWORD*)(v385 + 4LL * *v711) > v706) {
          v706 = *(_DWORD*)(v385 + 4LL * *v711);
        }
      }
      ++v711;
      ++v712;
      --v703;
    } while (v703 != 0);
  }
  v715 = (v705 - v443 + 32) & 0xFFFFFFC0;
  if (v715 == 0) {
    v715 = 64;
  }
  v716 = v706 - v705;
  if (v716 != 0) {
    v717 = v715 + v694;
    v792 = v443;
    v718 = 0;
    if ((unsigned int)(v716 - 65) >= 0x40) {
      v719 = v716 << 16;
    }
    else {
      v719 = 0x800000;
    }
    v720 = v719 / v716;
    do {
      if (*((_BYTE*)&v840_.v843 + v718) != 0) {
        v721 = *((unsigned __int16*)v804 + v718);
        if (v721 <= *((unsigned __int16*)v533 + v718)) {
          do {
            v722 = (unsigned __int16)v721;
            v723 = v533;
            v724 = v705;
            v725 = varmul_64_plt(
                v720, *(int*)(v823 + 4LL * (unsigned __int16)v721++) - v705,
                16),
            v297 = COERCE_AS(__typeof__(v297),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v705 = v724;
            v533 = v723;
            *(_DWORD*)(v385 + 4 * v722) = v717 + v725;
            *((_BYTE*)v812 + v722) |= 2u;
          } while (*((unsigned __int16*)v723 + v718) >=
                   (unsigned int)(unsigned __int16)v721);
        }
      }
      ++v718;
    } while (v718 != v826);
    v115 = v828;
    v249 = v809;
    v2 = (int**)v833;
    v10 = v815;
    if (v802 >= 3) {
      v726 = 0;
      do {
        if (*((_BYTE*)&v840_.v843 + v726) != 0) {
          v727 = *(int*)(v819 + 4 * v726);
          v728 = v799[v726];
          if (((*((_BYTE*)v812 + v728) | *((_BYTE*)v812 + v727)) & 1) == 0) {
            v729 = *(_DWORD*)(v793 + 4 * v727);
            v730 = *(_DWORD*)(v793 + 4 * v728);
            if (v729 - v730 <= 127) {
              v731 = *((unsigned __int16*)v804 + v726);
              if (v731 <= *((unsigned __int16*)v533 + v726)) {
                v732 =
                    ((v730 + v729 + ((unsigned int)(v730 + v729) >> 31)) >> 1) &
                    0x3F;
                do {
                  v733 = (unsigned __int16)v731++;
                  *(_DWORD*)(v793 + 4 * v733) =
                      *(int*)(v793 + 4 * v733) - v732 + 32;
                } while (*((unsigned __int16*)v533 + v726) >=
                         (unsigned int)(unsigned __int16)v731);
              }
            }
          }
        }
        ++v726;
      } while (v726 != v826);
    }
    if (v809 >= 1) {
      v734 = 0;
      do {
        v735 = (unsigned __int16*)(v834 + 48LL * v734);
        if ((signed __int32)*((_DWORD*)v735 + 6) > v792) {
          v736 = *(_DWORD*)(v385 + 4LL * v735[2]);
          v737 = *(_DWORD*)(v385 + 4LL * *v735);
          v738 = v737 + v736;
          v739 = v736 - v737;
          v740 = v738 + (v738 >> 31);
          if (v739 < 0) {
            v739 = -v739;
          }
          *((_DWORD*)v735 + 8) = v739;
          v741 = v740 >> 1;
          *((_DWORD*)v735 + 6) = v741;
          *((_DWORD*)v735 + 7) = v741;
        }
        ++v734;
      } while (v809 > (unsigned int)v734);
    }
    v742 = 4 * *((_WORD*)v533 + v826 - 1) + 4;
    memcpy_plt(v795, v793, v742 & 0xFFFC),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    memcpy_plt(v823, v385, v742 & 0xFFFC),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    v115 = v828;
    v249 = v809;
  }
LABEL_714:
  v5 = v827;
  v113 = v834;
LABEL_715:
  if (v830 == 6) {
  LABEL_716:
    nn_fontll_itype_44b8a0((unsigned int)v249, v113),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    result = nn_fontll_itype_44bd80(0x79u, v115, v249, v113, (__int64)v2, v10),
    v297 = COERCE_AS(__typeof__(v297),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v115 == 7) {
      goto LABEL_1166;
    }
  }
  else {
  LABEL_718:
    nn_fontll_itype_44bd80(0x79u, v115, v249, v113, (__int64)v2, v10),
        v297 = COERCE_AS(__typeof__(v297),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  *(_BYTE*)(v10 + 90) = 0;
  result = fnt_IUP_plt(v10),
  v297 = COERCE_AS(__typeof__(v297),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(_WORD*)(*(_QWORD*)(v10 + 64) + 418LL) == 7) {
    v444 = *((unsigned __int16*)v2 + 40);
    if (*((_WORD*)v2 + 40) != 0) {
      v446 = v2[7];
      v445 = v2[8];
      v447 = v2[1];
      v448 = v444 & 3;
      if (v444 < 4) {
        v449 = 0;
      LABEL_735:
        if (v448 != 0) {
          v465 = (unsigned __int16*)v446 + v449;
          v466 = (unsigned __int16*)v445 + v449;
          do {
            while (1) {
              v468 = *v466++;
              v467 = v468;
              v470 = *v465++;
              v469 = v470;
              v471 = &v447[v467];
              if (*v471 != *(v471 - 1)) {
                break;
              }
              v447[v469] = *v471;
              if (--v448 == 0) {
                goto LABEL_740;
              }
            }
            *v471 = v447[v469];
            --v448;
          } while (v448 != 0);
        }
        goto LABEL_740;
      }
      v450 = (unsigned __int16*)(v445 + 1);
      v451 = (unsigned __int16*)(v446 + 1);
      v452 = 0;
      v453 = -(__int64)((unsigned __int16)v444 & 0xFFFC);
      while (2) {
        while (2) {
          v454 = *(v451 - 2);
          v455 = &v447[*(v450 - 2)];
          if (*v455 == *(v455 - 1)) {
            v447[v454] = *v455;
            v456 = *(v451 - 1);
            v457 = &v447[*(v450 - 1)];
            v458 = *v457;
            if (*v457 != *(v457 - 1)) {
              goto LABEL_727;
            }
          LABEL_731:
            v447[v456] = v458;
            v459 = *v451;
            v460 = &v447[*v450];
            v461 = *v460;
            if (*v460 == *(v460 - 1)) {
              goto LABEL_732;
            }
          LABEL_728:
            *v460 = v447[v459];
            v462 = v451[1];
            v463 = &v447[v450[1]];
            result = (unsigned int)*(v463 - 1);
            v464 = *v463;
            if (*v463 == (_DWORD)result) {
              goto LABEL_724;
            }
          }
          else {
            *v455 = v447[v454];
            v456 = *(v451 - 1);
            v457 = &v447[*(v450 - 1)];
            v458 = *v457;
            if (*v457 == *(v457 - 1)) {
              goto LABEL_731;
            }
          LABEL_727:
            *v457 = v447[v456];
            v459 = *v451;
            v460 = &v447[*v450];
            v461 = *v460;
            if (*v460 != *(v460 - 1)) {
              goto LABEL_728;
            }
          LABEL_732:
            v447[v459] = v461;
            v462 = v451[1];
            v463 = &v447[v450[1]];
            result = (unsigned int)*(v463 - 1);
            v464 = *v463;
            if (*v463 == (_DWORD)result) {
            LABEL_724:
              v447[v462] = v464;
              v452 -= 4;
              v450 += 4;
              v451 += 4;
              if (v453 == v452) {
                goto LABEL_734;
              }
              continue;
            }
          }
          break;
        }
        *v463 = v447[v462];
        v452 -= 4;
        v450 += 4;
        v451 += 4;
        if (v453 == v452) {
        LABEL_734:
          v449 = -v452;
          goto LABEL_735;
        }
        continue;
      }
    }
  }
LABEL_740:
  if (v830 != 4) {
    goto LABEL_1166;
  }
  v472 = *((unsigned __int16*)v2 + 40);
  if (*((_WORD*)v2 + 40) == 0) {
    goto LABEL_1166;
  }
  v474 = v2[2];
  v473 = v2[3];
  v475 = *v2;
  v476 = v2[1];
  result = (__int64)&v840_.v843;
  v477 = 0;
  v478 = 0;
  v479 = v2[7];
  v840_.v848[0] = 0;
  v840_.v848[1] = 0;
  v840_.v846[1] = 0;
  v840_.v847 = 0;
  v840_.v845 = 0;
  v840_.v846[0] = 0;
  v840_.v843 = 0;
  v840_.v844 = 0;
  v480 = v2[8];
  v481 = v2[9];
  v840_.v849 = 0;
  memset(v840_.v850, 0, sizeof(v840_.v850));
  while (2) {
    v482 = *((unsigned __int16*)v479 + v477);
    v483 = *((unsigned __int16*)v480 + v477);
    if (v482 != v483) {
      v484 = v482 + 1;
      if (v483 >= (unsigned __int16)(v482 + 1)) {
        v488 = 0;
        v485 = *((_WORD*)v479 + v477);
        v486 = v485;
        v487 = v485;
        do {
          v489 = v474[v484];
          if (v489 > v474[v486]) {
            v486 = v484;
          }
          v12 = v489 < v474[(unsigned __int16)v482];
          v490 = v473[v484];
          if (v12) {
            LOWORD(v482) = v484;
          }
          v488 |= *((unsigned __int8*)v481 + v484);
          if (v490 > v473[v485]) {
            v485 = v484;
          }
          if (v490 < v473[v487]) {
            v487 = v484;
          }
          ++v484;
        } while (v483 >= v484);
        if (v488 == 0) {
          goto LABEL_758;
        }
      }
      else {
        v485 = *((_WORD*)v479 + v477);
        v486 = v485;
        v487 = v485;
      LABEL_758:
        v491 = (unsigned __int16)v482;
        if (v474[v486] - v474[(unsigned __int16)v482] <= 191 &&
            v473[v485] - v473[v487] <= 191) {
          v492 = (char*)&v840_.v843 + 28 * (int)v478++;
          *(_WORD*)v492 = v477;
          *((_WORD*)v492 + 2) = v486;
          *((_WORD*)v492 + 1) = v482;
          v493 = v474[v486];
          v494 = v474[v491];
          *((_WORD*)v492 + 4) = v485;
          *((_WORD*)v492 + 3) = v487;
          v495 = (v494 + v493) / 2;
          *((_DWORD*)v492 + 3) = v495;
          *((_DWORD*)v492 + 5) = v495;
          v496 = (v473[v487] + v473[v485]) / 2;
          *((_DWORD*)v492 + 4) = v496;
          *((_DWORD*)v492 + 6) = v496;
          if (v478 == 4) {
            goto LABEL_1166;
          }
        }
      }
    }
    if (++v477 != v472) {
      continue;
    }
    break;
  }
  if (v478 - 1 > 2) {
    goto LABEL_1166;
  }
  v497 = v478 + 3;
  v498 = 1;
  v499 = 0;
  v500 = (char*)v840_.v848 + 4;
  while (2) {
    v501 = v497 & 3;
    if ((int)v499 + 1 < v478) {
      v502 = (char*)&v840_.v843 + 28 * v499;
      v503 = v498;
      v504 = *((_DWORD*)v502 + 5);
      v505 = *((_DWORD*)v502 + 6);
      if ((((_BYTE)v478 - 1 - (_BYTE)v499) & 3) != 0) {
        v506 = v500;
        v503 = v499 + (unsigned int)(v501 - 1) + 2;
        for (k = v501; k != 0; --k) {
          v508 = v504 - *(v506 - 1);
          if (v508 < 0) {
            v508 = *(v506 - 1) - v504;
          }
          if ((unsigned int)v508 > 0x1F) {
            v510 = v505 - *(int*)v506;
            if (v510 < 0) {
              v510 = *(int*)v506 - v505;
            }
            if ((unsigned int)v510 > 0x1F) {
              goto LABEL_768;
            }
          }
          else {
            *(v506 - 1) = v504;
            v509 = v505 - *(int*)v506;
            if (v509 < 0) {
              v509 = *(int*)v506 - v505;
            }
            if ((unsigned int)v509 > 0x1F) {
              goto LABEL_768;
            }
          }
          *(_DWORD*)v506 = v505;
        LABEL_768:
          v506 += 7;
        }
      }
      if (v478 - 2 - (unsigned int)v499 >= 3) {
        v511 = v478 - v503;
        v512 = (_DWORD*)v840_.v850 + 7 * v503 + 1;
        do {
          v513 = v504 - *(v512 - 14);
          if (v513 < 0) {
            v513 = *(v512 - 14) - v504;
          }
          if ((unsigned int)v513 > 0x1F) {
            v521 = v505 - *(v512 - 13);
            if (v521 < 0) {
              v521 = *(v512 - 13) - v505;
            }
            if ((unsigned int)v521 > 0x1F) {
            LABEL_789:
              v515 = v504 - *(v512 - 7);
              if (v515 < 0) {
                v515 = *(v512 - 7) - v504;
              }
              if ((unsigned int)v515 <= 0x1F) {
                goto LABEL_792;
              }
              goto LABEL_814;
            }
          }
          else {
            *(v512 - 14) = v504;
            v514 = v505 - *(v512 - 13);
            if (v514 < 0) {
              v514 = *(v512 - 13) - v505;
            }
            if ((unsigned int)v514 > 0x1F) {
              goto LABEL_789;
            }
          }
          *(v512 - 13) = v505;
          v522 = v504 - *(v512 - 7);
          if (v522 < 0) {
            v522 = *(v512 - 7) - v504;
          }
          if ((unsigned int)v522 <= 0x1F) {
          LABEL_792:
            *(v512 - 7) = v504;
            v516 = v505 - *(v512 - 6);
            if (v516 < 0) {
              v516 = *(v512 - 6) - v505;
            }
            if ((unsigned int)v516 > 0x1F) {
              goto LABEL_795;
            }
            goto LABEL_817;
          }
        LABEL_814:
          v523 = v505 - *(v512 - 6);
          if (v523 < 0) {
            v523 = *(v512 - 6) - v505;
          }
          if ((unsigned int)v523 > 0x1F) {
          LABEL_795:
            v517 = v504 - *(int*)v512;
            if (v517 < 0) {
              v517 = *(int*)v512 - v504;
            }
            if ((unsigned int)v517 <= 0x1F) {
              goto LABEL_798;
            }
            goto LABEL_820;
          }
        LABEL_817:
          *(v512 - 6) = v505;
          v524 = v504 - *(int*)v512;
          if (v524 < 0) {
            v524 = *(int*)v512 - v504;
          }
          if ((unsigned int)v524 <= 0x1F) {
          LABEL_798:
            *(_DWORD*)v512 = v504;
            v518 = v505 - v512[1];
            if (v518 < 0) {
              v518 = v512[1] - v505;
            }
            if ((unsigned int)v518 > 0x1F) {
              goto LABEL_801;
            }
            goto LABEL_823;
          }
        LABEL_820:
          v525 = v505 - v512[1];
          if (v525 < 0) {
            v525 = v512[1] - v505;
          }
          if ((unsigned int)v525 > 0x1F) {
          LABEL_801:
            v519 = v504 - v512[7];
            if (v519 < 0) {
              v519 = v512[7] - v504;
            }
            if ((unsigned int)v519 <= 0x1F) {
              goto LABEL_804;
            }
            goto LABEL_826;
          }
        LABEL_823:
          v512[1] = v505;
          v526 = v504 - v512[7];
          if (v526 < 0) {
            v526 = v512[7] - v504;
          }
          if ((unsigned int)v526 <= 0x1F) {
          LABEL_804:
            v512[7] = v504;
            v520 = v505 - v512[8];
            if (v520 < 0) {
              v520 = v512[8] - v505;
            }
            if ((unsigned int)v520 > 0x1F) {
              goto LABEL_782;
            }
            goto LABEL_829;
          }
        LABEL_826:
          v527 = v505 - v512[8];
          if (v527 < 0) {
            v527 = v512[8] - v505;
          }
          if ((unsigned int)v527 <= 0x1F) {
          LABEL_829:
            v512[8] = v505;
          }
        LABEL_782:
          v511 -= 4;
          v512 += 28;
        } while (v511 != 0);
      }
    }
    ++v498;
    ++v499;
    v500 += 28;
    v497 = v501 + 3;
    if (v499 != v478) {
      continue;
    }
    break;
  }
  if ((unsigned __int16)(v478 - 1) >= 3u) {
    v528 = 0;
    do {
      v535 = (unsigned __int16)v528;
      v536 = v528 | 1;
      v537 = v528 | 2;
      v538 = v528 | 3;
      v528 += 4;
      v539 = (char*)&v840_.v843 + 28 * v535;
      v540 = (char*)&v840_.v843 + 28 * v536;
      v541 = (char*)&v840_.v843 + 28 * v537;
      v542 = *((_DWORD*)v539 + 6) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v539 + 5) = *((_DWORD*)v539 + 5) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v539 + 6) = v542;
      v543 = *((_DWORD*)v540 + 6) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v540 + 5) = *((_DWORD*)v540 + 5) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v540 + 6) = v543;
      LODWORD(v539) = *((_DWORD*)v541 + 6) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v541 + 5) = *((_DWORD*)v541 + 5) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v541 + 6) = (_DWORD)v539;
      v544 = (char*)&v840_.v843 + 28 * v538;
      v545 = *((_DWORD*)v544 + 6) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v544 + 5) = *((_DWORD*)v544 + 5) & 0xFFFFFFC0 | 0x20;
      *((_DWORD*)v544 + 6) = v545;
    } while ((_WORD)v528 != 0);
  }
  else {
    v528 = 0;
  }
  v546 = 0;
  do {
    v547 = (unsigned __int16)v528;
    ++v546;
    ++v528;
    v548 = (char*)&v840_.v843 + 28 * v547;
    v549 = *((_DWORD*)v548 + 6) & 0xFFFFFFC0 | 0x20;
    *((_DWORD*)v548 + 5) = *((_DWORD*)v548 + 5) & 0xFFFFFFC0 | 0x20;
    *((_DWORD*)v548 + 6) = v549;
  } while ((unsigned __int16)v546 != (unsigned __int16)v478);
  result = (__int64)(v473 + 4);
  v550 = 0;
  do {
    v551 = (_DWORD*)&v840_.v843 + 7 * v550;
    v552 = 2LL * *(unsigned __int16*)v551;
    v553 = *(unsigned __int16*)((char*)v479 + v552);
    v554 = *(unsigned __int16*)((char*)v480 + v552);
    if ((unsigned int)v553 <= (unsigned int)v554) {
      v555 = v551[6];
      v556 = v551[4];
      v557 = *((unsigned __int16*)v479 + *(unsigned __int16*)v551);
      v558 = v551[5] - v551[3];
      v559 = v555 - v556;
      if ((((_BYTE)v554 - (_BYTE)v553 + 1) & 7) != 0) {
        v560 = 0;
        do {
          v475[v553 + v560] = v558 + v474[v553 + v560];
          v476[v553 + v560] = v559 + v473[v553 + v560];
          *((_BYTE*)v481 + v553 + v560++) |= 3u;
        } while ((((_BYTE)v554 - (_BYTE)v553 + 1) & 7) != v560);
        v5 = v827;
        v557 = v553 + v560;
      }
      if ((unsigned __int64)(v554 - v553) >= 7) {
        v561 = v554 - v557;
        v562 = (char*)v481 + v557 + 3;
        v563 = &v476[v557 + 4];
        v564 = (_DWORD*)(result + 4 * v557);
        v565 = &v475[v557 + 4];
        v566 = &v474[v557 + 4];
        v567 = v561 + 1;
        do {
          v567 -= 8;
          *(v565 - 4) = v558 + *(v566 - 4);
          *(v563 - 4) = v559 + *(v564 - 4);
          *(v562 - 3) |= 3u;
          *(v565 - 3) = v558 + *(v566 - 3);
          *(v563 - 3) = v559 + *(v564 - 3);
          *(v562 - 2) |= 3u;
          *(v565 - 2) = v558 + *(v566 - 2);
          *(v563 - 2) = v559 + *(v564 - 2);
          *(v562 - 1) |= 3u;
          *(v565 - 1) = v558 + *(v566 - 1);
          *(v563 - 1) = v559 + *(v564 - 1);
          *v562 |= 3u;
          *v565 = v558 + *v566;
          *v563 = v559 + *(int*)v564;
          v562[1] |= 3u;
          v565[1] = v558 + v566[1];
          v563[1] = v559 + v564[1];
          v562[2] |= 3u;
          v565[2] = v558 + v566[2];
          v563[2] = v559 + v564[2];
          v562[3] |= 3u;
          v568 = v566[3];
          v566 += 8;
          v565[3] = v558 + v568;
          v565 += 8;
          v569 = v564[3];
          v564 += 8;
          v563[3] = v559 + v569;
          v563 += 8;
          v562[4] |= 3u;
          v562 += 8;
        } while (v567 != 0);
      }
    }
    ++v550;
  } while (v550 < (unsigned int)(unsigned __int16)v478);
  if (v478 == 1) {
    goto LABEL_1166;
  }
  v570 = 1;
  v571 = 1;
  do {
    v576 = v571;
    v577 = 28LL * v571;
    v578 = *(_DWORD*)((char*)&v840_.v843 + v577);
    v579 = *(unsigned __int16*)((char*)&v840_.v843 + v577 + 4);
    v580 = *(__int64*)((char*)&v840_.v844 + v577 + 6);
    v581 = *(__int64*)((char*)&v840_.v845 + v577 + 4);
    v840_.v841 = *(__int64*)((char*)&v840_.v843 + v577 + 6);
    *(_QWORD*)v840_.v842 = v580;
    *(_QWORD*)&v840_.v842[6] = v581;
    if (v570 != 0) {
      v582 = (char*)&v840_.v840 + v577 + 4;
      v572 = v576;
      while (v475[*((unsigned __int16*)v582 + 2)] > v475[v579]) {
        v583 = *((_QWORD*)v582 + 1);
        --v572;
        *(_QWORD*)(v582 + 28) = *(_QWORD*)v582;
        v584 = *((_QWORD*)v582 + 2);
        *(_QWORD*)(v582 + 36) = v583;
        *(_QWORD*)(v582 + 44) = v584;
        *((_DWORD*)v582 + 13) = *((_DWORD*)v582 + 6);
        v582 -= 28;
        if ((unsigned __int64)(v572 + 1) <= 1) {
          goto LABEL_853;
        }
      }
    }
    else {
    LABEL_853:
      v572 = 0;
    }
    v573 = (char*)&v840_.v843 + 28 * v572;
    *(_DWORD*)v573 = v578;
    *((_WORD*)v573 + 2) = v579;
    v574 = *(_QWORD*)v840_.v842;
    *(_QWORD*)(v573 + 6) = v840_.v841;
    v575 = *(_QWORD*)&v840_.v842[6];
    *(_QWORD*)(v573 + 14) = v574;
    *(_QWORD*)(v573 + 20) = v575;
    v571 = v576 + 1;
    v570 = (unsigned __int16)(v576 + 1);
  } while ((int)v478 > v570);
  LOWORD(v585) = 0;
  v586 = 1;
  while (2) {
    v587 = (unsigned __int16)v585;
    v585 = v586;
    v588 = (char*)&v840_.v843 + 28 * v587;
    v589 = v585;
    while (2) {
      v590 = *((unsigned __int16*)v588 + 2);
      v591 = (unsigned __int16*)&v840_.v843 + 14 * v589;
      v592 = v591[1];
      if (v474[v590] < v474[v592]) {
        v593 = v475[v590];
        v594 = v475[v592];
        if (v593 >= v594) {
          goto LABEL_872;
        }
        v595 = (v594 + 63) & 0xFFFFFFC0;
        if ((v593 & 0xFFFFFFC0) == (v594 & 0xFFFFFFC0)) {
          v596 = v595 - v594;
          if ((v593 & 0x30) != 0 || v596 >= 16) {
          LABEL_872:
            v598 = 2LL * *v591;
            v599 = *(unsigned __int16*)((char*)v479 + v598);
            v600 = *(unsigned __int16*)((char*)v480 + v598);
            if ((unsigned int)v599 <= (unsigned int)v600) {
              v601 = ((_BYTE)v600 - (_BYTE)v599 + 1) & 7;
              v602 = v599;
              if ((((_BYTE)v600 - (_BYTE)v599 + 1) & 7) != 0) {
                v602 = v599;
                do {
                  --v601;
                  v475[v602++] += 64;
                } while (v601 != 0);
              }
              if ((unsigned __int64)(v600 - v599) >= 7) {
                v603 = &v475[v602 + 4];
                v604 = v600 - v602 + 1;
                do {
                  v604 -= 8;
                  v605 = *(v603 - 3) + 64;
                  *(v603 - 4) += 64;
                  *(v603 - 3) = v605;
                  v606 = *(v603 - 1) + 64;
                  *(v603 - 2) += 64;
                  *(v603 - 1) = v606;
                  v607 = v603[1] + 64;
                  *v603 += 64;
                  v603[1] = v607;
                  v608 = v603[3] + 64;
                  v603[2] += 64;
                  v603[3] = v608;
                  v603 += 8;
                } while (v604 != 0);
              }
            }
            *((_DWORD*)v591 + 5) += 64;
          }
        }
        else if ((v593 & 0xFFFFFFC0) + 64 == (v594 & 0xFFFFFFC0) &&
                 ((v593 & 0x20) != 0 || (int)(v595 - v594) >= 32)) {
          goto LABEL_872;
        }
      }
      if (v478 > ++v589) {
        continue;
      }
      break;
    }
    v586 = v585 + 1;
    if (v478 > (unsigned __int16)(v585 + 1)) {
      continue;
    }
    break;
  }
  v609 = 1;
  v610 = 1;
  while (2) {
    v615 = v610;
    v616 = 28LL * v610;
    v617 = *(__int64*)((char*)&v840_.v843 + v616);
    v618 = *(unsigned __int16*)((char*)&v840_.v843 + v616 + 8);
    v619 = *(__int64*)((char*)&v840_.v845 + v616 + 2);
    v620 = *(_WORD*)((char*)v840_.v846 + v616 + 2);
    v840_.v841 = *(__int64*)((char*)&v840_.v844 + v616 + 2);
    *(_QWORD*)v840_.v842 = v619;
    *(_WORD*)&v840_.v842[8] = v620;
    if (v609 != 0) {
      v621 = (char*)&v840_.v840 + v616 + 4;
      v611 = v615;
      while (v476[*((unsigned __int16*)v621 + 4)] > v476[v618]) {
        v622 = *((_QWORD*)v621 + 1);
        --v611;
        *(_QWORD*)(v621 + 28) = *(_QWORD*)v621;
        v623 = *((_QWORD*)v621 + 2);
        *(_QWORD*)(v621 + 36) = v622;
        *(_QWORD*)(v621 + 44) = v623;
        *((_DWORD*)v621 + 13) = *((_DWORD*)v621 + 6);
        v621 -= 28;
        if ((unsigned __int64)(v611 + 1) < 2) {
          goto LABEL_885;
        }
      }
      if (v611 > 3) {
        goto LABEL_887;
      }
    }
    else {
    LABEL_885:
      LODWORD(v611) = 0;
    }
    v612 = (char*)&v840_.v843 + 28 * (int)v611;
    *(_QWORD*)v612 = v617;
    *((_WORD*)v612 + 4) = v618;
    v613 = *(_QWORD*)v840_.v842;
    *(_QWORD*)(v612 + 10) = v840_.v841;
    v614 = *(_WORD*)&v840_.v842[8];
    *(_QWORD*)(v612 + 18) = v613;
    *((_WORD*)v612 + 13) = v614;
  LABEL_887:
    v610 = v615 + 1;
    v609 = (unsigned __int16)(v615 + 1);
    if ((int)v478 > v609) {
      continue;
    }
    break;
  }
  LOWORD(v624) = 0;
  v625 = 1;
  while (2) {
    v626 = (unsigned __int16)v624;
    v624 = v625;
    v627 = (char*)&v840_.v843 + 28 * v626;
    LODWORD(result) = v624;
    while (2) {
      v628 = *((unsigned __int16*)v627 + 4);
      v629 = (unsigned __int16*)&v840_.v843 + 14 * (unsigned __int16)result;
      v630 = v629[3];
      if (v473[v628] < v473[v630]) {
        v631 = v476[v628];
        v632 = v476[v630];
        if (v631 >= v632) {
          goto LABEL_907;
        }
        v633 = (v632 + 63) & 0xFFFFFFC0;
        if ((v631 & 0xFFFFFFC0) == (v632 & 0xFFFFFFC0)) {
          v634 = v633 - v632;
          if ((v631 & 0x30) != 0 || v634 >= 16) {
          LABEL_907:
            v636 = 2LL * *v629;
            v637 = *(unsigned __int16*)((char*)v479 + v636);
            v638 = *(unsigned __int16*)((char*)v480 + v636);
            if ((unsigned int)v637 <= (unsigned int)v638) {
              v639 = ((_BYTE)v638 - (_BYTE)v637 + 1) & 7;
              v640 = v637;
              if ((((_BYTE)v638 - (_BYTE)v637 + 1) & 7) != 0) {
                v640 = v637;
                do {
                  --v639;
                  v476[v640++] += 64;
                } while (v639 != 0);
              }
              if ((unsigned __int64)(v638 - v637) >= 7) {
                v641 = &v476[v640 + 4];
                v642 = v638 - v640 + 1;
                do {
                  v642 -= 8;
                  v643 = *(v641 - 3) + 64;
                  *(v641 - 4) += 64;
                  *(v641 - 3) = v643;
                  v644 = *(v641 - 1) + 64;
                  *(v641 - 2) += 64;
                  *(v641 - 1) = v644;
                  v645 = v641[1] + 64;
                  *v641 += 64;
                  v641[1] = v645;
                  v646 = v641[3] + 64;
                  v641[2] += 64;
                  v641[3] = v646;
                  v641 += 8;
                } while (v642 != 0);
              }
            }
            *((_DWORD*)v629 + 6) += 64;
          }
        }
        else if ((v631 & 0xFFFFFFC0) + 64 == (v632 & 0xFFFFFFC0) &&
                 ((v631 & 0x20) != 0 || (int)(v633 - v632) >= 32)) {
          goto LABEL_907;
        }
      }
      result = (unsigned int)(result + 1);
      if (v478 > (unsigned __int16)result) {
        continue;
      }
      break;
    }
    v625 = v624 + 1;
    if (v478 > (unsigned __int16)(v624 + 1)) {
      continue;
    }
    break;
  }
  if (v478 != 3) {
    goto LABEL_1166;
  }
  v647 = HIDWORD(v840_.v844) - (HIDWORD(v840_.v849) + (int)v840_.v847) / 2;
  if (v647 < 0) {
    v647 = (HIDWORD(v840_.v849) + (int)v840_.v847) / 2 - HIDWORD(v840_.v844);
  }
  if ((unsigned int)v647 > 0x1F) {
    v649 = 0;
  }
  else {
    v648 = (HIDWORD(v840_.v850[0]) + LODWORD(v840_.v848[0])) / 2;
    if (v648 - HIDWORD(v840_.v845) <= 32) {
      v649 = 0;
    }
    else {
      v649 = 64;
    }
    if (HIDWORD(v840_.v845) - v648 > 32) {
      v649 = -64;
    }
  }
  v743 = v840_.v847 - (HIDWORD(v840_.v849) + HIDWORD(v840_.v844)) / 2;
  if (v743 < 0) {
    v743 = (HIDWORD(v840_.v849) + HIDWORD(v840_.v844)) / 2 - v840_.v847;
  }
  if ((unsigned int)v743 > 0x1F) {
    v745 = 0;
  }
  else {
    result = 1;
    v744 = (HIDWORD(v840_.v850[0]) + HIDWORD(v840_.v845)) / 2 -
           LODWORD(v840_.v848[0]);
    v12 = v744 <= 32;
    v745 = v744 > 32;
    if (!v12) {
      v649 = 64;
    }
    if (LODWORD(v840_.v848[0]) -
            (HIDWORD(v840_.v850[0]) + HIDWORD(v840_.v845)) / 2 >
        32) {
      v745 = 1;
      v649 = -64;
    }
  }
  v746 = HIDWORD(v840_.v849) - ((int)v840_.v847 + HIDWORD(v840_.v844)) / 2;
  if (v746 < 0) {
    v746 = ((int)v840_.v847 + HIDWORD(v840_.v844)) / 2 - HIDWORD(v840_.v849);
  }
  if ((unsigned int)v746 > 0x1F) {
  LABEL_1159:
    if (v649 != 0) {
      goto LABEL_1160;
    }
    goto LABEL_1166;
  }
  v747 = (LODWORD(v840_.v848[0]) + HIDWORD(v840_.v845)) / 2;
  if (HIDWORD(v840_.v850[0]) - v747 <= 32) {
    if (v747 - HIDWORD(v840_.v850[0]) > 32) {
      v649 = 64;
      v745 = 2;
      goto LABEL_1160;
    }
    goto LABEL_1159;
  }
  v649 = -64;
  v745 = 2;
LABEL_1160:
  v780 = 2LL * *((unsigned __int16*)&v840_.v843 + 14 * v745);
  v781 = *(unsigned __int16*)((char*)v479 + v780);
  v782 = *(unsigned __int16*)((char*)v480 + v780);
  if ((unsigned int)v781 <= (unsigned int)v782) {
    v783 = v782 - v781;
    for (m = ((_BYTE)v782 - (_BYTE)v781 + 1) & 7; m != 0;
         v475[v781++] += v649) {
      --m;
    }
    if (v783 >= 7) {
      v785 = v782 - v781 + 1;
      v786 = &v475[v781 + 4];
      do {
        v785 -= 8;
        v787 = *(v786 - 3) + v649;
        *(v786 - 4) += v649;
        *(v786 - 3) = v787;
        v788 = *(v786 - 1) + v649;
        *(v786 - 2) += v649;
        *(v786 - 1) = v788;
        v789 = v786[1] + v649;
        *v786 += v649;
        v786[1] = v789;
        v790 = v786[3] + v649;
        v786[2] += v649;
        v786[3] = v790;
        v786 += 8;
      } while (v785 != 0);
    }
  }
LABEL_1166:
  *(_QWORD*)(v5 + 13) = v835;
  v791 = v837;
  *(_QWORD*)(v5 + 15) = v836;
  *(_QWORD*)(v5 + 17) = v791;
  return result;
}

#pragma GCC visibility pop
