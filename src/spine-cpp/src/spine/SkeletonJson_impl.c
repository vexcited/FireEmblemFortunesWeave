#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* spine_AttachmentTimeline_setFrame(_QWORD* result, int, __int64, float);
_QWORD* spine_DeformTimeline_setFrame(_QWORD* result, int, __int64, float);
_QWORD* spine_DrawOrderTimeline_setFrame(_QWORD* result, unsigned __int64,
                                         __int64, float);
_QWORD* spine_RGBA2Timeline_setFrame(_QWORD* result, int, float, float, float,
                                     float, float, float, float, float);
__int64 GameRoutine_19e10();
__int64 GameRoutine_3a2a0(__int64 result, int, int, int, float, float);
__int64 GameRoutine_4b820(__int64, __int64);
__int64 GameRoutine_4e7c0(__int64);
__int64 GameRoutine_4e800(__int64, __int64, unsigned int);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 spine_AlphaTimeline_AlphaTimeline(__int64, __int64, __int64, int);
__int64 spine_Animation_Animation(__int64, __int64, _QWORD*, float);
__int64 spine_AttachmentTimeline_AttachmentTimeline(__int64, unsigned __int64,
                                                    int);
__int64 spine_CurveTimeline_setStepped(__int64 result, unsigned __int64);
__int64 spine_DeformTimeline_DeformTimeline(__int64, unsigned __int64, __int64,
                                            int, __int64);
__int64 spine_DrawOrderTimeline_DrawOrderTimeline(_QWORD*, unsigned __int64);
__int64 spine_EventTimeline_EventTimeline(_QWORD*, unsigned __int64);
__int64 spine_EventTimeline_setFrame(_QWORD*, unsigned __int64, __int64);
__int64 spine_Event_Event(__int64 result, __int64, float);
__int64 spine_IkConstraintTimeline_IkConstraintTimeline(__int64, __int64,
                                                        __int64, int);
__int64 spine_Json_getInt(__int64, __int64, unsigned int);
__int64 spine_Json_getItem_4bae0(__int64, __int64);
__int64 spine_Json_getItem_4bb60(__int64, int);
__int64 spine_Json_getString(__int64, __int64, __int64);
__int64 spine_PathConstraintMixTimeline_PathConstraintMixTimeline(__int64,
                                                                  __int64,
                                                                  __int64, int);
__int64 spine_PathConstraintMixTimeline_setFrame(__int64 result, int, float,
                                                 float, float, float);
__int64 spine_PathConstraintPositionTimeline_PathConstraintPositionTimeline(
    __int64, __int64, __int64, int);
__int64 spine_PathConstraintSpacingTimeline_PathConstraintSpacingTimeline(
    __int64, __int64, __int64, int);
__int64 spine_RGBA2Timeline_RGBA2Timeline(__int64, __int64, __int64, int);
__int64 spine_RGBATimeline_RGBATimeline(__int64, __int64, __int64, int);
__int64 spine_RGBATimeline_setFrame(__int64 result, int, float, float, float,
                                    float, float);
__int64 spine_RGBTimeline_RGBTimeline(__int64, __int64, __int64, int);
__int64 spine_RGBTimeline_setFrame(__int64 result, int, float, float, float,
                                   float);
__int64 spine_RotateTimeline_RotateTimeline(__int64, __int64, __int64, int);
__int64 spine_ScaleTimeline_ScaleTimeline(__int64, __int64, __int64, int);
__int64 spine_ScaleXTimeline_ScaleXTimeline(__int64, __int64, __int64, int);
__int64 spine_ScaleYTimeline_ScaleYTimeline(__int64, __int64, __int64, int);
__int64 spine_SequenceTimeline_SequenceTimeline(__int64, __int64, int, __int64);
__int64 spine_ShearTimeline_ShearTimeline(__int64, __int64, __int64, int);
__int64 spine_ShearXTimeline_ShearXTimeline(__int64, __int64, __int64, int);
__int64 spine_ShearYTimeline_ShearYTimeline(__int64, __int64, __int64, int);
__int64 spine_SkeletonData_findSkin(__int64, __int64);
__int64 spine_SkeletonJson_findSlotIndex(__int64, __int64, __int64, __int64);
__int64 spine_SkeletonJson_readTimeline_4b020(__int64, __int64, float, float);
__int64 spine_SkeletonJson_readTimeline_4b220(__int64, __int64, __int64,
                                              __int64, float, float);
__int64 spine_SkeletonJson_setError(__int64, __int64, __int64, __int64);
__int64 spine_Skin_getAttachment(_QWORD, _QWORD, _QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD*);
__int64 spine_TransformConstraintTimeline_TransformConstraintTimeline(__int64,
                                                                      __int64,
                                                                      __int64,
                                                                      int);
__int64 spine_TransformConstraintTimeline_setFrame(__int64 result, __int64,
                                                   float, float, float, float,
                                                   float, float, float);
__int64 spine_TranslateTimeline_TranslateTimeline(__int64, __int64, __int64,
                                                  int);
__int64 spine_TranslateXTimeline_TranslateXTimeline(__int64, __int64, __int64,
                                                    int);
__int64 spine_TranslateYTimeline_TranslateYTimeline(__int64, __int64, __int64,
                                                    int);
bool spine_Json_getBoolean(__int64, __int64, char);
extern __int64* GameData_21322b8[2];
extern __int64* GameData_21322d8[4];
extern __int64* GameData_21322e8[2];
extern __int64* GameData_21326a0[9];
extern __int64 GameData_2132660[4];
extern int* GameData_2132918[5];
float spine_IkConstraintTimeline_setFrame(__int64, int, int, char, char, float,
                                          float, float);
float spine_Json_getFloat(__int64, __int64, float);
float spine_Timeline_getDuration(_QWORD*);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
unsigned __int64 strtoul(const char*, __int64, int);
unsigned __int64 toColor(float*, const char*, char);
void GameRoutine_3dea0();
void GameRoutine_3e060();
void GameRoutine_3e140();
void GameRoutine_3e220();
__int64 spine_SkeletonJson_readAnimation(__int64 a1, __int64 a2, _QWORD* a3);

__int64 spine_SkeletonJson_readAnimation(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float v6;
  int v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 i;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
  float v26;
  const char* v27;
  const char* v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  int v40;
  __int16 v41;
  int v42;
  float v43;
  float v44;
  __int16 v45;
  int v46;
  __int64 v47;
  int v48;
  float v49;
  __int16 v50;
  int v51;
  __int16 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  float v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  int v65;
  float v66;
  const char* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  const char* v82;
  __int64 v83;
  unsigned __int64 v84;
  int v85;
  __int64 v86;
  float v87;
  __int64 v88;
  const char* v89;
  __int64 v90;
  float v91;
  int v92;
  __int64 v93;
  __int64 v94;
  float v95;
  int v96;
  float v97;
  int v98;
  __int64 v99;
  __int64 v100;
  float v101;
  int v102;
  __int64 v103;
  float v104;
  __int64 v105;
  float v106;
  float v107;
  int v108;
  __int16 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  float v121;
  const char* v122;
  const char* v123;
  unsigned __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  float v130;
  __int64 v131;
  float v132;
  const char* v133;
  __int64 v134;
  unsigned __int64 v135;
  float v136;
  __int16 v137;
  int v138;
  unsigned __int64 v139;
  float v140;
  __int16 v141;
  int v142;
  __int64 v143;
  float v144;
  __int64 v145;
  float v146;
  int v147;
  __int64 v148;
  float v149;
  float v150;
  int v151;
  float v152;
  __int64 v153;
  float v154;
  __int64 v155;
  int v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  int v162;
  __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  float v166;
  __int16 v167;
  int v168;
  __int64 v169;
  unsigned __int64 v170;
  int v171;
  __int64 v172;
  float v173;
  __int64 v174;
  __int64 v175;
  __int16 v176;
  int v177;
  float v178;
  float v179;
  float v180;
  __int16 v181;
  int v182;
  __int64 v183;
  float v184;
  int v185;
  __int64 v186;
  __int64 v187;
  float v188;
  int v189;
  float v190;
  int v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  int v195;
  __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  const char* v200;
  unsigned __int64 v201;
  __int64 v202;
  int v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  const char* v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  float v213;
  float v214;
  __int64 v215;
  unsigned int v216;
  int v217;
  __int64 v218;
  __int64 v219;
  unsigned __int64 v220;
  __int64 v221;
  int v222;
  __int64 v223;
  const char* v224;
  unsigned __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  float v233;
  float v234;
  unsigned __int64 v235;
  int v236;
  float v237;
  __int64 v238;
  int v239;
  bool v240;
  bool v241;
  __int64 v242;
  float v243;
  float v244;
  float v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  float v249;
  unsigned __int64 v250;
  __int64 v251;
  int v252;
  __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  __int64 v256;
  int v257;
  __int64 v258;
  const char* v259;
  unsigned __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  float v268;
  float v269;
  float v270;
  float v271;
  float v272;
  float v273;
  float v274;
  __int64 v275;
  unsigned __int64 v276;
  int v277;
  __int64 v278;
  float v279;
  float v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  float v285;
  float v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  unsigned __int64 v291;
  __int64 v292;
  int v293;
  __int64 v294;
  __int64 v295;
  unsigned __int64 v296;
  __int64 v297;
  float v298;
  float v299;
  const char* v300;
  unsigned __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  int v310;
  __int64 v311;
  __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  const char* v315;
  __int64 v316;
  __int64 v317;
  float v318;
  float v319;
  float v320;
  float v321;
  __int64 v322;
  unsigned __int64 v323;
  int v324;
  __int64 v325;
  float v326;
  __int64 v327;
  float v328;
  float v329;
  float v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  float v335;
  unsigned __int64 v336;
  __int64 v337;
  unsigned __int64 v338;
  __int64 v339;
  int v340;
  __int64 v341;
  __int64 v342;
  unsigned __int64 v343;
  unsigned __int64 v344;
  unsigned __int64 v345;
  unsigned __int64 v346;
  __int64 v347;
  unsigned __int64 v348;
  _QWORD* v349;
  __int64 v350;
  bool v351;
  __int64* v352;
  __int64 v353;
  const char* v354;
  unsigned __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64* v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64* v363;
  __int64* v364;
  __int64 v365;
  unsigned __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  const char* v372;
  __int64 v373;
  unsigned __int64 v374;
  __int64 v375;
  unsigned __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  unsigned __int64 j;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  _QWORD* v385;
  const char* v386;
  unsigned __int64 v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  unsigned __int64 v395;
  const char* v396;
  unsigned __int64 v397;
  __int64 v398;
  _BOOL4 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  int v403;
  _QWORD* v404;
  const char* v405;
  float v406;
  unsigned __int64 v407;
  __int64 v408;
  int v409;
  const char* v410;
  __int64 v411;
  bool v412;
  char v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  unsigned __int64 k;
  int v418;
  __int64 v419;
  unsigned __int64 v420;
  __int64 v421;
  unsigned __int64 m;
  unsigned __int64 v423;
  unsigned __int64 v424;
  __int64 v425;
  float v426;
  __int64 v427;
  __int64 v428;
  int v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  unsigned __int64 v437;
  __int64 v438;
  const char* v439;
  int v440;
  __int64 v441;
  int v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  const char* v446;
  _BOOL4 v447;
  __int64 v448;
  __int64 v449;
  unsigned __int64 v450;
  __int64 v451;
  int v452;
  __int64 v453;
  __int64 v454;
  unsigned __int64 v455;
  __int64 v456;
  float v457;
  int v458;
  float v459;
  const char* v460;
  __int64 v461;
  unsigned __int64 v462;
  __int64 v463;
  int v464;
  int v465;
  __int64 v466;
  const char* v467;
  __int64 v468;
  __int64 v469;
  const char* v470;
  __int64 v471;
  __int64 v472;
  const char* v473;
  __int64 v474;
  __int64 v475;
  const char* v476;
  __int64 v477;
  __int64 v478;
  const char* v479;
  __int64 v480;
  __int64 v481;
  const char* v482;
  __int64 v483;
  __int64 v484;
  __int64 v485;
  unsigned __int64 v486;
  __int64 v487;
  int v488;
  __int64 v489;
  __int64 v490;
  unsigned __int64 v491;
  __int64 v492;
  __int64 v493;
  unsigned __int64 v494;
  unsigned __int64 v495;
  __int64 v496;
  unsigned __int64 v497;
  _QWORD* v498;
  __int64 v499;
  __int64 v500;
  const char* v501;
  unsigned __int64 v502;
  __int64 v503;
  const char* v504;
  __int64 v505;
  __int64 v506;
  __int64 v507;
  const char* v508;
  const char* v509;
  __int64 v510;
  char* v511;
  __int64 v512;
  const char* v513;
  __int64 v514;
  __int64 v515;
  __int64 v516;
  __int64 v517;
  __int64 v518;
  const char* v519;
  __int64 v520;
  __int64 v521;
  __int64 v522;
  __int64 v523;
  unsigned __int64 v524;
  __int64* v525;
  __int64* v526;
  __int64 v527;
  __int64 v528;
  _QWORD* v529;
  __int64 v530;
  __int64 v531;
  __int64 v532;
  unsigned __int64 v533;
  unsigned __int64 v534;
  __int64 v535;
  __int64 v536;
  __int64 v537;
  unsigned int v538;
  int v539;
  __int64 v540;
  __int64 v541;
  unsigned __int64 v542;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  unsigned __int64 v546;
  unsigned __int64 v547;
  unsigned __int64 v548;
  __int64 v549;
  unsigned __int64 v550;
  __int64 v551;
  const char* v552;
  __int64 v553;
  unsigned __int64 v554;
  __int64 v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  unsigned __int64 n;
  int v560;
  __int64 v561;
  __int64 v562;
  const char* v563;
  __int64 v564;
  unsigned __int64 v565;
  unsigned __int64 v566;
  _QWORD* v567;
  __int64 v568;
  unsigned __int64 v569;
  unsigned __int64 v570;
  __int64 v571;
  int v572;
  __int64 v573;
  __int64 v574;
  int v575;
  __int64 v576;
  __int64 v577;
  float v578;
  __int64 v579;
  __int64 v580;
  unsigned __int64 v581;
  unsigned __int64 v582;
  __int64 v583;
  unsigned __int64 v584;
  _QWORD* v585;
  __int64 v586;
  __int64* v587;
  __int64 v588;
  const char* v589;
  unsigned __int64 v590;
  __int64 v591;
  const char* v592;
  unsigned __int64 v593;
  __int64 v594;
  int v595;
  __int64 v596;
  __int64 v597;
  unsigned __int64 v598;
  __int64 v599;
  __int64 v600;
  float v601;
  unsigned __int64 ii;
  float v603;
  unsigned __int64 v604;
  unsigned __int64 v605;
  unsigned __int64 v606;
  __int64 v607;
  unsigned __int64 v608;
  _QWORD* v609;
  __int64 v610;
  __int64* v611;
  __int64 v612;
  __int64 v613;
  unsigned __int64 v614;
  __int64 v615;
  __int64 v616;
  _QWORD* v617;
  __int64 v618;
  unsigned __int64 v619;
  __int64* v620;
  const char* v621;
  __int64 v622;
  unsigned __int64 v623;
  __int64 v624;
  __int64 v625;
  __int64 v626;
  __int64 v627;
  __int64 v628;
  float v629;
  __int64 v630;
  __int64 v631;
  const char* v632;
  __int64 v633;
  unsigned __int64 v634;
  __int64 v635;
  __int64 v636;
  __int64 v637;
  unsigned __int64 v638;
  __int64 v639;
  int v640;
  __int64 v641;
  __int64 v642;
  unsigned __int64 v643;
  __int64 v644;
  const char* v645;
  __int64 v646;
  __int64* v647;
  unsigned __int64 v648;
  __int64 v649;
  __int64 v650;
  __int64 v651;
  unsigned __int64 v652;
  unsigned __int64 v653;
  __int64 v654;
  unsigned __int64 v655;
  _QWORD* v656;
  __int64 v657;
  __int64 v658;
  const char* v659;
  __int64 v660;
  unsigned __int64 v661;
  __int64 v662;
  const char* v663;
  __int64 v664;
  __int64 v665;
  unsigned __int64 v666;
  unsigned __int64 v667;
  __int64 v668;
  unsigned __int64 v669;
  _QWORD* v670;
  __int64 v671;
  __int64 v672;
  __int64 v673;
  __int64 v674;
  double v676;
  __int64* v677;
  __int64 v678;
  __int64 v679;
  __int64 v680;
  __int64 v681;
  __int64 v682;
  __int64 v683;
  __int64 v684;
  __int64 v685;
  _QWORD* v686;
  __int64 v687;
  __int64 v688;
  __int64 v689;
  __int64 v690;
  __int64* v691;
  _QWORD* v692;
  __int64 v693;
  int v694;
  int v696;
  __int64* v697;
  __int64 v698;
  float v699;
  float v700;
  int v701;
  float v702;
  __int64 v703;
  float v704;
  float v705;
  float v706;
  __int64 v707;
  float v708;
  float v709;
  float v710;
  const char* v711;
  float v712;
  __int64* v713;
  float v714;
  __int64* v715;
  char v716;
  __int64 v717;
  __int64* v718;
  float v719;
  float v720;
  __int64* v721;
  __int64 v722;
  float v723;
  __int64 v724;
  __int64* v725;
  _QWORD* v726;
  struct {
    __int64 v728;
    unsigned __int64 v729;
    __int64 v730;
    __int64 v731;
  } v728_;
  struct {
    __int64* v732;
    __int64 v733;
    const char* v734;
    char v735;
  } v732_;
  struct {
    __int64 v736;
    unsigned __int64 v737;
    __int64 v738;
    __int64 v739;
  } v736_;
  struct {
    __int64* v740;
    const char* v741;
    __int64 v742;
    __int64 v743;
  } v740_;
  struct {
    __int64 v744;
    unsigned __int64 v745;
    __int64 v746;
    __int64 v747;
  } v744_;
  struct {
    __int64* v748;
    __int64 v749;
    __int64 v750;
  } v748_;
  struct {
    __int64* v751;
    __int64 v752;
    __int64 v753;
  } v751_;
  struct {
    __int64* v754;
    __int64 v755;
    __int64 v756;
  } v754_;
  struct {
    __int64* v757;
    __int64 v758;
    __int64 v759;
  } v757_;
  struct {
    __int64 v760;
    unsigned __int64 v761;
    __int64 v762;
    __int64 v763;
  } v760_;
  struct {
    __int64* v764;
    unsigned __int64 v765;
    __int64 v766;
    __int64 v767;
  } v764_;

  v760_.v762 = 0;
  v760_.v763 = 0;
  v760_.v760 = GameData_2132660[0] + 16;
  v760_.v761 = 0;
  v688 = spine_Json_getItem_4bae0(a2, (__int64)"bones");
  v4 = spine_Json_getItem_4bae0(a2, (__int64)"slots");
  v683 = spine_Json_getItem_4bae0(a2, (__int64)"ik");
  v685 = spine_Json_getItem_4bae0(a2, (__int64)"transform");
  v687 = spine_Json_getItem_4bae0(a2, (__int64)"path");
  v681 = spine_Json_getItem_4bae0(a2, (__int64)"attachments");
  v680 = spine_Json_getItem_4bae0(a2, (__int64)"drawOrder");
  v678 = a2;
  v679 = spine_Json_getItem_4bae0(a2, (__int64)"events");
  v757_.v759 = 0;
  v754_.v756 = 0;
  v751_.v753 = 0;
  v748_.v750 = 0;
  v757_.v757 = GameData_21322d8[0] + 2;
  v757_.v758 = 0;
  v754_.v754 = GameData_21322d8[0] + 2;
  v754_.v755 = 0;
  v751_.v751 = GameData_21322d8[0] + 2;
  v751_.v752 = 0;
  v748_.v748 = GameData_21322d8[0] + 2;
  v748_.v749 = 0;
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 16);
    if (v5 != 0) {
      v6 = 0x1.c000000000000p+0f;
      v7 = *GameData_2132918[0];
      v691 = GameData_21322b8[0] + 2;
      v690 = GameData_2132660[0] + 16;
      do {
        v8 = *(const char**)(v5 + 48);
        LOBYTE(v764_.v767) = 1;
        v764_.v764 = v691;
        if (v8 != nullptr) {
          v9 = strlen(v8);
          v764_.v765 = v9;
          v10 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v10 + 24LL))(
              v10, v9 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, (__int64)v8, v764_.v765 + 1);
          v11 = a1;
          v12 = v760_.v762;
          v744_.v744 = v690;
          v744_.v745 = v760_.v761;
          v744_.v746 = v760_.v762;
          v744_.v747 = 0;
          if (v760_.v762 == 0) {
            goto LABEL_13;
          }
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
          v11 = a1;
          v12 = v760_.v762;
          v744_.v744 = v690;
          v744_.v745 = v760_.v761;
          v744_.v746 = v760_.v762;
          v744_.v747 = 0;
          if (v760_.v762 == 0) {
            goto LABEL_13;
          }
        }
        v13 = GameRoutine_19e10();
        v14 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
            *(_QWORD*)v13 + 24LL))(
            v13, 8 * v12, "/Program/Externals/Spine/include\\spine/Vector.h",
            197);
        if (v14 == 0) {
          goto LABEL_867;
        }
        v744_.v747 = v14;
        if (v744_.v745 != 0) {
          for (i = 0; i < v744_.v745; ++i) {
            *(_QWORD*)(v744_.v747 + 8 * i) = *(_QWORD*)(v760_.v763 + 8 * i);
          }
        }
      LABEL_13:
        v696 = spine_SkeletonJson_findSlotIndex(
            v11, (__int64)a3, (__int64)&v764_.v764, (__int64)&v744_.v744);
        v16 = v744_.v747;
        v744_.v744 = GameData_2132660[0] + 16;
        v744_.v745 = 0;
        if (v744_.v747 != 0) {
          v17 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v17 +
                                                                40LL))(
              v17, v16, "/Program/Externals/Spine/include\\spine/Vector.h",
              206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v744_.v744);
        v18 = GameData_21322b8[0];
        v19 = v764_.v766;
        v764_.v764 = GameData_21322b8[0] + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v20 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v20 +
                                                                40LL))(
              v20, v19, "/Program/Externals/Spine/include\\spine/SpineString.h",
              206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        if (v696 == -1) {
          goto LABEL_859;
        }
        v21 = *(_QWORD*)(v5 + 16);
        v693 = v5;
        if (v21 != 0) {
          while (1) {
            v22 = *(const char**)(v21 + 48);
            v23 = *(int*)(v21 + 28);
            if (strcmp(v22, "attachment") == 0) {
              break;
            }
            if (strcmp(v22, "rgba") == 0) {
              v79 = GameRoutine_4e800(120,
                                      (__int64)"/Program/Externals/Spine/src/"
                                               "spine/SkeletonJson.cpp",
                                      0x38Au);
              spine_RGBATimeline_RGBATimeline(v79, v23, 4 * (int)v23, v696);
              v80 = *(_QWORD*)(v21 + 16);
              v81 = spine_Json_getFloat(v80, (__int64)"time", 0x0.0p+0f);
              v82 = (const char*)spine_Json_getString(v80, (__int64)"color", 0);
              toColor((float*)&v757_.v757, v82, 1);
              spine_RGBATimeline_setFrame(
                  v79, 0, v81, *(float*)&v757_.v758, *((float*)&v757_.v758 + 1),
                  *(float*)&v757_.v759, *((float*)&v757_.v759 + 1));
              v83 = *(_QWORD*)(v80 + 8);
              if (v83 == 0) {
                goto LABEL_201;
              }
              v84 = 0;
              v85 = 0;
              while (2) {
                v87 = v81;
                v88 = v80;
                v80 = v83;
                v81 = spine_Json_getFloat(v83, (__int64)"time", 0x0.0p+0f);
                v89 =
                    (const char*)spine_Json_getString(v80, (__int64)"color", 0);
                toColor((float*)&v751_.v751, v89, 1);
                v90 = spine_Json_getItem_4bae0(v88, (__int64)"curve");
                if (v90 != 0) {
                  v91 = *(float*)&v757_.v758;
                  v92 = v751_.v752;
                  v93 = v90;
                  if (*(_DWORD*)(v90 + 24) == v7 &&
                      strcmp(*(const char**)(v90 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped(v79, v84);
                    v95 = *((float*)&v757_.v758 + 1);
                    v96 = HIDWORD(v751_.v752);
                    if (*(_DWORD*)(v93 + 24) != v7) {
                      goto LABEL_106;
                    }
                  LABEL_102:
                    if (strcmp(*(const char**)(v93 + 32), "stepped") != 0) {
                      goto LABEL_106;
                    }
                    spine_CurveTimeline_setStepped(v79, v84);
                    v97 = *(float*)&v757_.v759;
                    v98 = v751_.v753;
                    if (*(_DWORD*)(v93 + 24) != v7) {
                      goto LABEL_108;
                    }
                  LABEL_107:
                    if (strcmp(*(const char**)(v93 + 32), "stepped") != 0) {
                      goto LABEL_108;
                    }
                    spine_CurveTimeline_setStepped(v79, v84);
                    v101 = *((float*)&v757_.v759 + 1);
                    v102 = HIDWORD(v751_.v753);
                    if (*(_DWORD*)(v93 + 24) != v7) {
                      goto LABEL_96;
                    }
                  LABEL_109:
                    if (strcmp(*(const char**)(v93 + 32), "stepped") != 0) {
                      goto LABEL_96;
                    }
                    spine_CurveTimeline_setStepped(v79, v84);
                  }
                  else {
                    v94 = spine_Json_getItem_4bb60(v93, 0);
                    LODWORD(v676) = v92;
                    (*(void (**)(__int64, _QWORD, unsigned __int64, double,
                                 float, float, float, float, float, float,
                                 float, double))(*(_QWORD*)v79 + 40LL))(
                        v79, v85++, v84, 0x0.0p+0, v87, v91,
                        *(float*)(v94 + 44),
                        *(float*)(*(_QWORD*)(v94 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v94 + 8) + 8LL) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v94 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v81, v676);
                    v95 = *((float*)&v757_.v758 + 1);
                    v96 = HIDWORD(v751_.v752);
                    if (*(_DWORD*)(v93 + 24) == v7) {
                      goto LABEL_102;
                    }
                  LABEL_106:
                    v99 = spine_Json_getItem_4bb60(v93, 4);
                    LODWORD(v676) = v96;
                    (*(void (**)(__int64, _QWORD, unsigned __int64, float,
                                 float, float, float, float, float, float,
                                 float, double))(*(_QWORD*)v79 + 40LL))(
                        v79, v85++, v84, 0x1.0000000000000p+0f, v87, v95,
                        *(float*)(v99 + 44),
                        *(float*)(*(_QWORD*)(v99 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v99 + 8) + 8LL) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v99 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v81, v676);
                    v97 = *(float*)&v757_.v759;
                    v98 = v751_.v753;
                    if (*(_DWORD*)(v93 + 24) == v7) {
                      goto LABEL_107;
                    }
                  LABEL_108:
                    v100 = spine_Json_getItem_4bb60(v93, 8);
                    LODWORD(v676) = v98;
                    (*(void (**)(__int64, _QWORD, unsigned __int64, float,
                                 float, float, float, float, float, float,
                                 float, double))(*(_QWORD*)v79 + 40LL))(
                        v79, v85++, v84, 0x1.0000000000000p+1f, v87, v97,
                        *(float*)(v100 + 44),
                        *(float*)(*(_QWORD*)(v100 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v100 + 8) + 8LL) +
                                  44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v100 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v81, v676);
                    v101 = *((float*)&v757_.v759 + 1);
                    v102 = HIDWORD(v751_.v753);
                    if (*(_DWORD*)(v93 + 24) == v7) {
                      goto LABEL_109;
                    }
                  LABEL_96:
                    v86 = spine_Json_getItem_4bb60(v93, 12);
                    LODWORD(v676) = v102;
                    (*(void (**)(__int64, _QWORD, unsigned __int64, float,
                                 float, float, float, float, float, float,
                                 float, double))(*(_QWORD*)v79 + 40LL))(
                        v79, v85++, v84, 0x1.8000000000000p+1f, v87, v101,
                        *(float*)(v86 + 44),
                        *(float*)(*(_QWORD*)(v86 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v86 + 8) + 8LL) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v86 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v81, v676);
                  }
                }
                ++v84;
                v757_.v758 = v751_.v752;
                v757_.v759 = v751_.v753;
                spine_RGBATimeline_setFrame(v79, v84, v81, *(float*)&v751_.v752,
                                            *((float*)&v751_.v752 + 1),
                                            *(float*)&v751_.v753,
                                            *((float*)&v751_.v753 + 1));
                v83 = *(_QWORD*)(v80 + 8);
                if (v83 == 0) {
                  goto LABEL_201;
                }
                continue;
              }
            }
            if (strcmp(v22, "rgb") == 0) {
              v79 = GameRoutine_4e800(120,
                                      (__int64)"/Program/Externals/Spine/src/"
                                               "spine/SkeletonJson.cpp",
                                      0x3A5u);
              spine_RGBTimeline_RGBTimeline(v79, v23, 3 * v23, v696);
              v103 = *(_QWORD*)(v21 + 16);
              v104 = spine_Json_getFloat(v103, (__int64)"time", 0x0.0p+0f);
              v105 = spine_Json_getString(v103, (__int64)"color", 0);
              v106 = -0x1.0000000000000p+0f;
              v107 = -0x1.0000000000000p+0f;
              if (strlen((const char*)v105) < 2 ||
                  (LOBYTE(v740_.v740) = *(_BYTE*)v105,
                   *(_WORD*)((char*)&v740_.v740 + 1) =
                       *(unsigned __int8*)(v105 + 1),
                   v108 = strtoul((const char*)&v740_.v740,
                                  (__int64)&v764_.v764, 16),
                   *(_BYTE*)v764_.v764 != 0)) {
                LODWORD(v757_.v758) =
                    COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                if (strlen((const char*)v105) >= 4) {
                LABEL_116:
                  v109 = *(_WORD*)(v105 + 2);
                  BYTE2(v740_.v740) = 0;
                  LOWORD(v740_.v740) = v109;
                  v110 = strtoul((const char*)&v740_.v740, (__int64)&v764_.v764,
                                 16);
                  if (*(_BYTE*)v764_.v764 == 0) {
                    v106 = (float)v110 / 0x1.fe00000000000p+7f;
                  }
                }
              }
              else {
                v107 = (float)v108 / 0x1.fe00000000000p+7f;
                *(float*)&v757_.v758 = v107;
                if (strlen((const char*)v105) >= 4) {
                  goto LABEL_116;
                }
              }
              *((float*)&v757_.v758 + 1) = v106;
              v166 = -0x1.0000000000000p+0f;
              if (strlen((const char*)v105) >= 6) {
                v167 = *(_WORD*)(v105 + 4);
                BYTE2(v740_.v740) = 0;
                LOWORD(v740_.v740) = v167;
                v168 =
                    strtoul((const char*)&v740_.v740, (__int64)&v764_.v764, 16);
                if (*(_BYTE*)v764_.v764 == 0) {
                  v166 = (float)v168 / 0x1.fe00000000000p+7f;
                }
              }
              *(float*)&v757_.v759 = v166;
              spine_RGBTimeline_setFrame(v79, 0, v104, v107, v106, v166);
              v169 = *(_QWORD*)(v103 + 8);
              if (v169 != 0) {
                v170 = 0;
                v171 = 0;
                do {
                  v173 = v104;
                  v174 = v103;
                  v103 = v169;
                  v104 = spine_Json_getFloat(v169, (__int64)"time", 0x0.0p+0f);
                  v175 = spine_Json_getString(v103, (__int64)"color", 0);
                  if (strlen((const char*)v175) >= 2) {
                    LOBYTE(v740_.v740) = *(_BYTE*)v175;
                    *(_WORD*)((char*)&v740_.v740 + 1) =
                        *(unsigned __int8*)(v175 + 1);
                    v180 = (float)(int)strtoul((const char*)&v740_.v740,
                                               (__int64)&v764_.v764, 16) /
                           0x1.fe00000000000p+7f;
                    if (*(_BYTE*)v764_.v764 != 0) {
                      v180 = -0x1.0000000000000p+0f;
                    }
                    *(float*)&v751_.v752 = v180;
                    if (strlen((const char*)v175) >= 4) {
                    LABEL_178:
                      v176 = *(_WORD*)(v175 + 2);
                      BYTE2(v740_.v740) = 0;
                      LOWORD(v740_.v740) = v176;
                      v177 = strtoul((const char*)&v740_.v740,
                                     (__int64)&v764_.v764, 16);
                      if (*(_BYTE*)v764_.v764 != 0) {
                        v178 = -0x1.0000000000000p+0f;
                      }
                      else {
                        v178 = (float)v177 / 0x1.fe00000000000p+7f;
                      }
                      *((float*)&v751_.v752 + 1) = v178;
                      v179 = -0x1.0000000000000p+0f;
                      if (strlen((const char*)v175) < 6) {
                        goto LABEL_188;
                      }
                      goto LABEL_187;
                    }
                  }
                  else {
                    LODWORD(v751_.v752) =
                        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                    if (strlen((const char*)v175) >= 4) {
                      goto LABEL_178;
                    }
                  }
                  HIDWORD(v751_.v752) =
                      COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                  v179 = -0x1.0000000000000p+0f;
                  if (strlen((const char*)v175) >= 6) {
                  LABEL_187:
                    v181 = *(_WORD*)(v175 + 4);
                    BYTE2(v740_.v740) = 0;
                    LOWORD(v740_.v740) = v181;
                    v182 = strtoul((const char*)&v740_.v740,
                                   (__int64)&v764_.v764, 16);
                    if (*(_BYTE*)v764_.v764 == 0) {
                      *(float*)&v751_.v753 =
                          (float)v182 / 0x1.fe00000000000p+7f;
                      v183 = spine_Json_getItem_4bae0(v174, (__int64)"curve");
                      if (v183 == 0) {
                        goto LABEL_175;
                      }
                      goto LABEL_189;
                    }
                  }
                LABEL_188:
                  *(float*)&v751_.v753 = v179;
                  v183 = spine_Json_getItem_4bae0(v174, (__int64)"curve");
                  if (v183 == 0) {
                    goto LABEL_175;
                  }
                LABEL_189:
                  v184 = *(float*)&v757_.v758;
                  v185 = v751_.v752;
                  v186 = v183;
                  if (*(_DWORD*)(v183 + 24) == v7 &&
                      strcmp(*(const char**)(v183 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped(v79, v170);
                    v188 = *((float*)&v757_.v758 + 1);
                    v189 = HIDWORD(v751_.v752);
                    if (*(_DWORD*)(v186 + 24) != v7) {
                      goto LABEL_198;
                    }
                  }
                  else {
                    v187 = spine_Json_getItem_4bb60(v186, 0);
                    LODWORD(v676) = v185;
                    (*(void (**)(__int64, _QWORD, unsigned __int64, double,
                                 float, float, float, float, float, float,
                                 float, double))(*(_QWORD*)v79 + 40LL))(
                        v79, v171++, v170, 0x0.0p+0, v173, v184,
                        *(float*)(v187 + 44),
                        *(float*)(*(_QWORD*)(v187 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v187 + 8) + 8LL) +
                                  44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v187 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v104, v676);
                    v188 = *((float*)&v757_.v758 + 1);
                    v189 = HIDWORD(v751_.v752);
                    if (*(_DWORD*)(v186 + 24) != v7) {
                      goto LABEL_198;
                    }
                  }
                  if (strcmp(*(const char**)(v186 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped(v79, v170);
                    v190 = *(float*)&v757_.v759;
                    v191 = v751_.v753;
                    if (*(_DWORD*)(v186 + 24) == v7) {
                      goto LABEL_199;
                    }
                    goto LABEL_174;
                  }
                LABEL_198:
                  v192 = spine_Json_getItem_4bb60(v186, 4);
                  LODWORD(v676) = v189;
                  (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*(_QWORD*)v79 + 40LL))(
                      v79, v171++, v170, 0x1.0000000000000p+0f, v173, v188,
                      *(float*)(v192 + 44),
                      *(float*)(*(_QWORD*)(v192 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v192 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v192 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v104, v676);
                  v190 = *(float*)&v757_.v759;
                  v191 = v751_.v753;
                  if (*(_DWORD*)(v186 + 24) == v7) {
                  LABEL_199:
                    if (strcmp(*(const char**)(v186 + 32), "stepped") == 0) {
                      spine_CurveTimeline_setStepped(v79, v170);
                      goto LABEL_175;
                    }
                  }
                LABEL_174:
                  v172 = spine_Json_getItem_4bb60(v186, 8);
                  LODWORD(v676) = v191;
                  (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*(_QWORD*)v79 + 40LL))(
                      v79, v171++, v170, 0x1.0000000000000p+1f, v173, v190,
                      *(float*)(v172 + 44),
                      *(float*)(*(_QWORD*)(v172 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v172 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v172 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v104, v676);
                LABEL_175:
                  ++v170;
                  v757_.v758 = v751_.v752;
                  v757_.v759 = v751_.v753;
                  spine_RGBTimeline_setFrame(
                      v79, v170, v104, *(float*)&v751_.v752,
                      *((float*)&v751_.v752 + 1), *(float*)&v751_.v753);
                  v169 = *(_QWORD*)(v103 + 8);
                } while (v169 != 0);
              }
            LABEL_201:
              v193 = v760_.v761;
              if (v760_.v761 == v760_.v762) {
                v194 = v760_.v763;
                if ((unsigned int)(int)(float)((float)v760_.v761 * v6) <= 8) {
                  v195 = 8;
                }
                else {
                  v195 = (int)(float)((float)v760_.v761 * v6);
                }
                v760_.v762 = v195;
                v196 = GameRoutine_19e10();
                v197 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                       __int64))(*(_QWORD*)v196 + 32LL))(
                    v196, v194, 8LL * v195,
                    "/Program/Externals/Spine/include\\spine/Vector.h", 106);
                v198 = v760_.v761;
                v760_.v763 = v197;
                ++v760_.v761;
                *(_QWORD*)(v197 + 8 * v198) = v79;
              }
              else {
                ++v760_.v761;
                *(_QWORD*)(v760_.v763 + 8 * v193) = v79;
              }
            LABEL_207:
              v18 = GameData_21322b8[0];
              goto LABEL_22;
            }
            if (strcmp(v22, "alpha") != 0) {
              if (strcmp(v22, "rgba2") != 0) {
                if (strcmp(v22, "rgb2") != 0) {
                  v581 = v760_.v761;
                  if ((int)v760_.v761 >= 1) {
                    v199 = v760_.v761 & 0x7FFFFFFF;
                    do {
                      v582 = v199 - 1;
                      if (v581 <= v199 - 1) {
                        goto LABEL_863;
                      }
                      v583 = *(_QWORD*)(v760_.v763 + 8 * v582);
                      if (v583 != 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v583 + 8LL))(v583);
                        v581 = v760_.v761;
                      }
                      if (v581 <= v582) {
                        goto LABEL_866;
                      }
                      v760_.v761 = --v581;
                      if (v581 > v582) {
                        v584 = v199;
                        do {
                          v585 = (_QWORD*)(v760_.v763 + 8 * v584);
                          v586 = *(v585 - 1);
                          *(v585 - 1) = *v585;
                          *(_QWORD*)(v760_.v763 + 8 * v584) = v586;
                          v581 = v760_.v761;
                          v351 = v584++ >= v760_.v761;
                        } while (!v351);
                      }
                      v412 = v199-- > 1;
                    } while (v412);
                  }
                  LOBYTE(v764_.v767) = 1;
                  v587 = GameData_21322b8[0] + 2;
                  v764_.v764 = GameData_21322b8[0] + 2;
                  v764_.v765 = 34;
                  v588 = GameRoutine_19e10();
                  v764_.v766 = (*(__int64 (**)(__int64, __int64, const char*,
                                               __int64))(*(_QWORD*)v588 +
                                                         24LL))(
                      v588, 35,
                      "/Program/Externals/Spine/include\\spine/SpineString.h",
                      53);
                  strcpy((char*)v764_.v766,
                         "Invalid timeline type for a slot: ");
                  v589 = *(const char**)(v21 + 48);
                  v740_.v740 = v587;
                  LOBYTE(v740_.v743) = 1;
                  if (v589 == nullptr) {
                    goto LABEL_855;
                  }
                  goto LABEL_756;
                }
                v24 = (_QWORD*)GameRoutine_4e800(
                    120,
                    (__int64)"/Program/Externals/Spine/src/spine/"
                             "SkeletonJson.cpp",
                    0x3E4u);
                spine_RGBA2Timeline_RGBA2Timeline((__int64)v24, v23,
                                                  6 * (int)v23, v696);
                v25 = *(_QWORD*)(v21 + 16);
                v26 = spine_Json_getFloat(v25, (__int64)"time", 0x0.0p+0f);
                v27 =
                    (const char*)spine_Json_getString(v25, (__int64)"light", 0);
                toColor((float*)&v757_.v757, v27, 0);
                v28 =
                    (const char*)spine_Json_getString(v25, (__int64)"dark", 0);
                toColor((float*)&v754_.v754, v28, 0);
                v29 = 0;
                v30 = 0;
                while (1) {
                  v32 = v757_.v758;
                  v33 = *(float*)&v757_.v759;
                  v34 = v754_.v755;
                  v35 = *(float*)&v754_.v756;
                  spine_RGBA2Timeline_setFrame(
                      v24, v29, v26, *(float*)&v757_.v758,
                      *((float*)&v757_.v758 + 1), *(float*)&v757_.v759,
                      *((float*)&v757_.v759 + 1), *(float*)&v754_.v755,
                      *((float*)&v754_.v755 + 1), *(float*)&v754_.v756);
                  v36 = *(_QWORD*)(v25 + 8);
                  if (v36 == 0) {
                    goto LABEL_161;
                  }
                  v704 = v35;
                  v708 = v26;
                  v712 = spine_Json_getFloat(v36, (__int64)"time", 0x0.0p+0f);
                  v37 = spine_Json_getString(v36, (__int64)"light", 0);
                  v38 = -0x1.0000000000000p+0f;
                  v39 = -0x1.0000000000000p+0f;
                  if (strlen((const char*)v37) >= 2) {
                    LOBYTE(v740_.v740) = *(_BYTE*)v37;
                    *(_WORD*)((char*)&v740_.v740 + 1) =
                        *(unsigned __int8*)(v37 + 1);
                    v40 = strtoul((const char*)&v740_.v740,
                                  (__int64)&v764_.v764, 16);
                    if (*(_BYTE*)v764_.v764 != 0) {
                      v39 = -0x1.0000000000000p+0f;
                    }
                    else {
                      v39 = (float)v40 / 0x1.fe00000000000p+7f;
                    }
                  }
                  *(float*)&v751_.v752 = v39;
                  if (strlen((const char*)v37) >= 4) {
                    v41 = *(_WORD*)(v37 + 2);
                    BYTE2(v740_.v740) = 0;
                    LOWORD(v740_.v740) = v41;
                    v42 = strtoul((const char*)&v740_.v740,
                                  (__int64)&v764_.v764, 16);
                    if (*(_BYTE*)v764_.v764 != 0) {
                      v38 = -0x1.0000000000000p+0f;
                    }
                    else {
                      v38 = (float)v42 / 0x1.fe00000000000p+7f;
                    }
                  }
                  *((float*)&v751_.v752 + 1) = v38;
                  v43 = -0x1.0000000000000p+0f;
                  v44 = -0x1.0000000000000p+0f;
                  if (strlen((const char*)v37) >= 6) {
                    v45 = *(_WORD*)(v37 + 4);
                    BYTE2(v740_.v740) = 0;
                    LOWORD(v740_.v740) = v45;
                    v46 = strtoul((const char*)&v740_.v740,
                                  (__int64)&v764_.v764, 16);
                    if (*(_BYTE*)v764_.v764 != 0) {
                      v44 = -0x1.0000000000000p+0f;
                    }
                    else {
                      v44 = (float)v46 / 0x1.fe00000000000p+7f;
                    }
                  }
                  *(float*)&v751_.v753 = v44;
                  v47 = spine_Json_getString(v36, (__int64)"dark", 0);
                  if (strlen((const char*)v47) >= 2) {
                    LOBYTE(v740_.v740) = *(_BYTE*)v47;
                    *(_WORD*)((char*)&v740_.v740 + 1) =
                        *(unsigned __int8*)(v47 + 1);
                    v48 = strtoul((const char*)&v740_.v740,
                                  (__int64)&v764_.v764, 16);
                    if (*(_BYTE*)v764_.v764 != 0) {
                      v43 = -0x1.0000000000000p+0f;
                    }
                    else {
                      v43 = (float)v48 / 0x1.fe00000000000p+7f;
                    }
                  }
                  v699 = v43;
                  *(float*)&v748_.v749 = v43;
                  v49 = -0x1.0000000000000p+0f;
                  v719 = -0x1.0000000000000p+0f;
                  if (strlen((const char*)v47) < 4 ||
                      (v50 = *(_WORD*)(v47 + 2), BYTE2(v740_.v740) = 0,
                       LOWORD(v740_.v740) = v50,
                       v51 = strtoul((const char*)&v740_.v740,
                                     (__int64)&v764_.v764, 16),
                       *(_BYTE*)v764_.v764 != 0)) {
                    HIDWORD(v748_.v749) =
                        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                    if (strlen((const char*)v47) < 6) {
                      goto LABEL_55;
                    }
                  }
                  else {
                    v49 = (float)v51 / 0x1.fe00000000000p+7f;
                    *((float*)&v748_.v749 + 1) = v49;
                    if (strlen((const char*)v47) < 6) {
                      goto LABEL_55;
                    }
                  }
                  v52 = *(_WORD*)(v47 + 4);
                  BYTE2(v740_.v740) = 0;
                  LOWORD(v740_.v740) = v52;
                  v53 = strtoul((const char*)&v740_.v740, (__int64)&v764_.v764,
                                16);
                  if (*(_BYTE*)v764_.v764 == 0) {
                    v719 = (float)v53 / 0x1.fe00000000000p+7f;
                  }
                LABEL_55:
                  *(float*)&v748_.v750 = v719;
                  v54 = spine_Json_getItem_4bae0(v25, (__int64)"curve");
                  if (v54 == 0) {
                    v57 = v712;
                    goto LABEL_31;
                  }
                  v55 = v54;
                  if (*(_DWORD*)(v54 + 24) == v7 &&
                      strcmp(*(const char**)(v54 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped((__int64)v24, v29);
                    v58 = v708;
                    v57 = v712;
                    if (*(_DWORD*)(v55 + 24) != v7) {
                      goto LABEL_64;
                    }
                  }
                  else {
                    v56 = spine_Json_getItem_4bb60(v55, 0);
                    v57 = v712;
                    *(float*)&v676 = v39;
                    v58 = v708;
                    (*(void (**)(_QWORD*, _QWORD, unsigned __int64, double,
                                 float, float, float, float, float, float,
                                 float, double))(*v24 + 40LL))(
                        v24, v30++, v29, 0x0.0p+0, v708, *(float*)&v32,
                        *(float*)(v56 + 44),
                        *(float*)(*(_QWORD*)(v56 + 8) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v56 + 8) + 8LL) + 44LL),
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v56 + 8) +
                                                        8LL) +
                                             8LL) +
                                  44LL),
                        v712, v676);
                    if (*(_DWORD*)(v55 + 24) != v7) {
                      goto LABEL_64;
                    }
                  }
                  if (strcmp(*(const char**)(v55 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped((__int64)v24, v29);
                    if (*(_DWORD*)(v55 + 24) != v7) {
                      goto LABEL_66;
                    }
                    goto LABEL_65;
                  }
                LABEL_64:
                  v59 = spine_Json_getItem_4bb60(v55, 4);
                  *(float*)&v676 = v38;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v30++, v29, 0x1.0000000000000p+0f, v58,
                      *((float*)&v32 + 1), *(float*)(v59 + 44),
                      *(float*)(*(_QWORD*)(v59 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v59 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v59 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      *(float*)&v32, v676);
                  if (*(_DWORD*)(v55 + 24) == v7) {
                  LABEL_65:
                    if (strcmp(*(const char**)(v55 + 32), "stepped") == 0) {
                      spine_CurveTimeline_setStepped((__int64)v24, v29);
                      if (*(_DWORD*)(v55 + 24) != v7) {
                        goto LABEL_71;
                      }
                      goto LABEL_67;
                    }
                  }
                LABEL_66:
                  v60 = spine_Json_getItem_4bb60(v55, 8);
                  *(float*)&v676 = v44;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v30++, v29, 0x1.0000000000000p+1f, v58, v33,
                      *(float*)(v60 + 44),
                      *(float*)(*(_QWORD*)(v60 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v60 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v60 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v57, v676);
                  if (*(_DWORD*)(v55 + 24) == v7) {
                  LABEL_67:
                    if (strcmp(*(const char**)(v55 + 32), "stepped") == 0) {
                      spine_CurveTimeline_setStepped((__int64)v24, v29);
                      if (*(_DWORD*)(v55 + 24) != v7) {
                        goto LABEL_73;
                      }
                      goto LABEL_72;
                    }
                  }
                LABEL_71:
                  v61 = spine_Json_getItem_4bb60(v55, 12);
                  *(float*)&v676 = v699;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v30++, v29, 0x1.8000000000000p+1f, v58,
                      *(float*)&v34, *(float*)(v61 + 44),
                      *(float*)(*(_QWORD*)(v61 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v61 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v61 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v57, v676);
                  if (*(_DWORD*)(v55 + 24) == v7) {
                  LABEL_72:
                    if (strcmp(*(const char**)(v55 + 32), "stepped") == 0) {
                      spine_CurveTimeline_setStepped((__int64)v24, v29);
                      if (*(_DWORD*)(v55 + 24) != v7) {
                      LABEL_30:
                        v31 = spine_Json_getItem_4bb60(v55, 20);
                        *(float*)&v676 = v719;
                        (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float,
                                     float, float, float, float, float, float,
                                     float, double))(*v24 + 40LL))(
                            v24, v30++, v29, 0x1.4000000000000p+2f, v58, v704,
                            *(float*)(v31 + 44),
                            *(float*)(*(_QWORD*)(v31 + 8) + 44LL),
                            *(float*)(*(_QWORD*)(*(_QWORD*)(v31 + 8) + 8LL) +
                                      44LL),
                            *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 +
                                                                       8) +
                                                            8LL) +
                                                 8LL) +
                                      44LL),
                            v57, v676);
                        goto LABEL_31;
                      }
                      goto LABEL_74;
                    }
                  }
                LABEL_73:
                  v62 = spine_Json_getItem_4bb60(v55, 16);
                  *(float*)&v676 = v49;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v30++, v29, 0x1.0000000000000p+2f, v58,
                      *((float*)&v34 + 1), *(float*)(v62 + 44),
                      *(float*)(*(_QWORD*)(v62 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v62 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v62 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v57, v676);
                  if (*(_DWORD*)(v55 + 24) != v7) {
                    goto LABEL_30;
                  }
                LABEL_74:
                  if (strcmp(*(const char**)(v55 + 32), "stepped") != 0) {
                    goto LABEL_30;
                  }
                  spine_CurveTimeline_setStepped((__int64)v24, v29);
                LABEL_31:
                  ++v29;
                  v26 = v57;
                  v25 = v36;
                  v757_.v758 = v751_.v752;
                  v757_.v759 = v751_.v753;
                  v754_.v755 = v748_.v749;
                  v754_.v756 = v748_.v750;
                }
              }
              v24 = (_QWORD*)GameRoutine_4e800(
                  120,
                  (__int64)"/Program/Externals/Spine/src/spine/"
                           "SkeletonJson.cpp",
                  0x3C3u);
              spine_RGBA2Timeline_RGBA2Timeline((__int64)v24, v23, 7 * (int)v23,
                                                v696);
              v120 = *(_QWORD*)(v21 + 16);
              v121 = spine_Json_getFloat(v120, (__int64)"time", 0x0.0p+0f);
              v122 =
                  (const char*)spine_Json_getString(v120, (__int64)"light", 0);
              toColor((float*)&v757_.v757, v122, 1);
              v123 =
                  (const char*)spine_Json_getString(v120, (__int64)"dark", 0);
              toColor((float*)&v754_.v754, v123, 0);
              v124 = 0;
              v125 = 0;
              while (1) {
                v127 = v757_.v758;
                v128 = v757_.v759;
                v129 = v754_.v755;
                v130 = *(float*)&v754_.v756;
                spine_RGBA2Timeline_setFrame(
                    v24, v124, v121, *(float*)&v757_.v758,
                    *((float*)&v757_.v758 + 1), *(float*)&v757_.v759,
                    *((float*)&v757_.v759 + 1), *(float*)&v754_.v755,
                    *((float*)&v754_.v755 + 1), *(float*)&v754_.v756);
                v131 = *(_QWORD*)(v120 + 8);
                if (v131 == 0) {
                LABEL_161:
                  v160 = v760_.v761;
                  if (v760_.v761 == v760_.v762) {
                    v6 = 0x1.c000000000000p+0f;
                    v161 = v760_.v763;
                    if ((unsigned int)(int)(float)((float)v760_.v761 *
                                                   0x1.c000000000000p+0f) <=
                        8) {
                      v162 = 8;
                    }
                    else {
                      v162 = (int)(float)((float)v760_.v761 *
                                          0x1.c000000000000p+0f);
                    }
                    v760_.v762 = v162;
                    v163 = GameRoutine_19e10();
                    v164 =
                        (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                        __int64))(*(_QWORD*)v163 + 32LL))(
                            v163, v161, 8LL * v162,
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            106);
                    v165 = v760_.v761;
                    v760_.v763 = v164;
                    ++v760_.v761;
                    *(_QWORD*)(v164 + 8 * v165) = v24;
                  }
                  else {
                    v6 = 0x1.c000000000000p+0f;
                    ++v760_.v761;
                    *(_QWORD*)(v760_.v763 + 8 * v160) = v24;
                  }
                  goto LABEL_207;
                }
                v132 = spine_Json_getFloat(v131, (__int64)"time", 0x0.0p+0f);
                v133 = (const char*)spine_Json_getString(v131, (__int64)"light",
                                                         0);
                toColor((float*)&v751_.v751, v133, 1);
                v134 = spine_Json_getString(v131, (__int64)"dark", 0);
                v135 = strlen((const char*)v134);
                v136 = -0x1.0000000000000p+0f;
                v720 = -0x1.0000000000000p+0f;
                if (v135 >= 2) {
                  LOBYTE(v740_.v740) = *(_BYTE*)v134;
                  *(_WORD*)((char*)&v740_.v740 + 1) =
                      *(unsigned __int8*)(v134 + 1);
                  v136 = (float)(int)strtoul((const char*)&v740_.v740,
                                             (__int64)&v764_.v764, 16) /
                         0x1.fe00000000000p+7f;
                  if (*(_BYTE*)v764_.v764 != 0) {
                    v136 = -0x1.0000000000000p+0f;
                  }
                }
                v705 = v136;
                *(float*)&v748_.v749 = v136;
                if (strlen((const char*)v134) >= 4) {
                  v137 = *(_WORD*)(v134 + 2);
                  BYTE2(v740_.v740) = 0;
                  LOWORD(v740_.v740) = v137;
                  v138 = strtoul((const char*)&v740_.v740, (__int64)&v764_.v764,
                                 16);
                  if (*(_BYTE*)v764_.v764 == 0) {
                    v720 = (float)v138 / 0x1.fe00000000000p+7f;
                  }
                }
                *((float*)&v748_.v749 + 1) = v720;
                v139 = strlen((const char*)v134);
                v140 = -0x1.0000000000000p+0f;
                if (v139 >= 6) {
                  v141 = *(_WORD*)(v134 + 4);
                  BYTE2(v740_.v740) = 0;
                  LOWORD(v740_.v740) = v141;
                  v142 = strtoul((const char*)&v740_.v740, (__int64)&v764_.v764,
                                 16);
                  v140 = -0x1.0000000000000p+0f;
                  if (*(_BYTE*)v764_.v764 == 0) {
                    v140 = (float)v142 / 0x1.fe00000000000p+7f;
                  }
                }
                v709 = v140;
                *(float*)&v748_.v750 = v140;
                v143 = spine_Json_getItem_4bae0(v120, (__int64)"curve");
                if (v143 == 0) {
                  goto LABEL_125;
                }
                v144 = v121;
                v145 = v143;
                v146 = v130;
                v147 = v751_.v752;
                if (*(_DWORD*)(v143 + 24) == v7 &&
                    strcmp(*(const char**)(v143 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped((__int64)v24, v124);
                  v149 = v146;
                  if (*(_DWORD*)(v145 + 24) != v7) {
                    goto LABEL_144;
                  }
                }
                else {
                  v148 = spine_Json_getItem_4bb60(v145, 0);
                  LODWORD(v676) = v147;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, double, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v125++, v124, 0x0.0p+0, v144, *(float*)&v127,
                      *(float*)(v148 + 44),
                      *(float*)(*(_QWORD*)(v148 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v148 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v148 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      *(float*)&v129, v676);
                  v149 = v146;
                  if (*(_DWORD*)(v145 + 24) != v7) {
                    goto LABEL_144;
                  }
                }
                if (strcmp(*(const char**)(v145 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped((__int64)v24, v124);
                  v150 = v144;
                  v132 = *(float*)&v129;
                  v151 = v751_.v753;
                  v152 = *((float*)&v129 + 1);
                  if (*(_DWORD*)(v145 + 24) != v7) {
                    goto LABEL_146;
                  }
                  goto LABEL_145;
                }
              LABEL_144:
                v153 = spine_Json_getItem_4bb60(v145, 4);
                v154 = v144;
                v150 = v144;
                v132 = *(float*)&v129;
                LODWORD(v676) = v127;
                (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                             float, float, float, float, float, float,
                             double))(*v24 + 40LL))(
                    v24, v125++, v124, 0x1.0000000000000p+0f, v154,
                    *((float*)&v127 + 1), *(float*)(v153 + 44),
                    *(float*)(*(_QWORD*)(v153 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v153 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v153 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    *(float*)&v129, v676);
                v151 = v751_.v753;
                v152 = *((float*)&v129 + 1);
                if (*(_DWORD*)(v145 + 24) == v7) {
                LABEL_145:
                  if (strcmp(*(const char**)(v145 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped((__int64)v24, v124);
                    v156 = HIDWORD(v751_.v753);
                    if (*(_DWORD*)(v145 + 24) != v7) {
                      goto LABEL_151;
                    }
                    goto LABEL_147;
                  }
                }
              LABEL_146:
                v155 = spine_Json_getItem_4bb60(v145, 8);
                LODWORD(v676) = v151;
                (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                             float, float, float, float, float, float,
                             double))(*v24 + 40LL))(
                    v24, v125++, v124, 0x1.0000000000000p+1f, v150,
                    *(float*)&v128, *(float*)(v155 + 44),
                    *(float*)(*(_QWORD*)(v155 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v155 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v155 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    v132, v676);
                v156 = HIDWORD(v751_.v753);
                if (*(_DWORD*)(v145 + 24) == v7) {
                LABEL_147:
                  if (strcmp(*(const char**)(v145 + 32), "stepped") == 0) {
                    spine_CurveTimeline_setStepped((__int64)v24, v124);
                    if (*(_DWORD*)(v145 + 24) != v7) {
                      goto LABEL_153;
                    }
                    goto LABEL_152;
                  }
                }
              LABEL_151:
                v157 = spine_Json_getItem_4bb60(v145, 12);
                LODWORD(v676) = v156;
                (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                             float, float, float, float, float, float,
                             double))(*v24 + 40LL))(
                    v24, v125++, v124, 0x1.8000000000000p+1f, v150,
                    *((float*)&v128 + 1), *(float*)(v157 + 44),
                    *(float*)(*(_QWORD*)(v157 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v157 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v157 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    v132, v676);
                if (*(_DWORD*)(v145 + 24) != v7) {
                  goto LABEL_153;
                }
              LABEL_152:
                if (strcmp(*(const char**)(v145 + 32), "stepped") != 0) {
                LABEL_153:
                  v158 = spine_Json_getItem_4bb60(v145, 16);
                  *(float*)&v676 = v705;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v125++, v124, 0x1.0000000000000p+2f, v150,
                      *(float*)&v129, *(float*)(v158 + 44),
                      *(float*)(*(_QWORD*)(v158 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v158 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v158 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v132, v676);
                  if (*(_DWORD*)(v145 + 24) != v7) {
                    goto LABEL_158;
                  }
                  goto LABEL_154;
                }
                spine_CurveTimeline_setStepped((__int64)v24, v124);
                if (*(_DWORD*)(v145 + 24) != v7) {
                LABEL_158:
                  v159 = spine_Json_getItem_4bb60(v145, 20);
                  *(float*)&v676 = v720;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v125++, v124, 0x1.4000000000000p+2f, v150, v152,
                      *(float*)(v159 + 44),
                      *(float*)(*(_QWORD*)(v159 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v159 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v159 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v132, v676);
                  if (*(_DWORD*)(v145 + 24) != v7) {
                    goto LABEL_124;
                  }
                  goto LABEL_159;
                }
              LABEL_154:
                if (strcmp(*(const char**)(v145 + 32), "stepped") != 0) {
                  goto LABEL_158;
                }
                spine_CurveTimeline_setStepped((__int64)v24, v124);
                if (*(_DWORD*)(v145 + 24) != v7) {
                  goto LABEL_124;
                }
              LABEL_159:
                if (strcmp(*(const char**)(v145 + 32), "stepped") != 0) {
                LABEL_124:
                  v126 = spine_Json_getItem_4bb60(v145, 24);
                  *(float*)&v676 = v709;
                  (*(void (**)(_QWORD*, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*v24 + 40LL))(
                      v24, v125++, v124, 0x1.8000000000000p+2f, v150, v149,
                      *(float*)(v126 + 44),
                      *(float*)(*(_QWORD*)(v126 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v126 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v126 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v132, v676);
                  goto LABEL_125;
                }
                spine_CurveTimeline_setStepped((__int64)v24, v124);
              LABEL_125:
                ++v124;
                v121 = v132;
                v120 = v131;
                v757_.v758 = v751_.v752;
                v757_.v759 = v751_.v753;
                v754_.v755 = v748_.v749;
                v754_.v756 = v748_.v750;
              }
            }
            v111 = *(_QWORD*)(v21 + 16);
            v112 = GameRoutine_4e800(
                120,
                (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
                0x3C0u);
            spine_AlphaTimeline_AlphaTimeline(v112, v23, v23, v696);
            spine_SkeletonJson_readTimeline_4b020(v111, v112, 0x0.0p+0f,
                                                  0x1.0000000000000p+0f);
            v113 = v760_.v761;
            if (v760_.v761 == v760_.v762) {
              v114 = v760_.v763;
              if ((unsigned int)(int)(float)((float)v760_.v761 * v6) <= 8) {
                v115 = 8;
              }
              else {
                v115 = (int)(float)((float)v760_.v761 * v6);
              }
              v760_.v762 = v115;
              v116 = GameRoutine_19e10();
              v117 = 8LL * v115;
              v18 = GameData_21322b8[0];
              v118 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                     __int64))(*(_QWORD*)v116 + 32LL))(
                  v116, v114, v117,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v119 = v760_.v761;
              v760_.v763 = v118;
              ++v760_.v761;
              *(_QWORD*)(v118 + 8 * v119) = v112;
            }
            else {
              ++v760_.v761;
              *(_QWORD*)(v760_.v763 + 8 * v113) = v112;
            }
          LABEL_22:
            v21 = *(_QWORD*)(v21 + 8);
            if (v21 == 0) {
              goto LABEL_4;
            }
          }
          v63 = (_QWORD*)GameRoutine_4e800(
              120,
              (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
              0x382u);
          spine_AttachmentTimeline_AttachmentTimeline((__int64)v63, v23, v696);
          v64 = *(_QWORD*)(v21 + 16);
          if (v64 == 0) {
          LABEL_89:
            v72 = v760_.v761;
            if (v760_.v761 == v760_.v762) {
              v73 = v760_.v763;
              if ((unsigned int)(int)(float)((float)v760_.v761 * v6) <= 8) {
                v74 = 8;
              }
              else {
                v74 = (int)(float)((float)v760_.v761 * v6);
              }
              v760_.v762 = v74;
              v75 = GameRoutine_19e10();
              v76 = 8LL * v74;
              v18 = GameData_21322b8[0];
              v77 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                    __int64))(*(_QWORD*)v75 + 32LL))(
                  v75, v73, v76,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v78 = v760_.v761;
              v760_.v763 = v77;
              ++v760_.v761;
              *(_QWORD*)(v77 + 8 * v78) = v63;
            }
            else {
              ++v760_.v761;
              *(_QWORD*)(v760_.v763 + 8 * v72) = v63;
            }
            goto LABEL_22;
          }
          v65 = 0;
          while (2) {
            v66 = spine_Json_getFloat(v64, (__int64)"time", 0x0.0p+0f);
            if (spine_Json_getItem_4bae0(v64, (__int64)"name") != 0) {
              v67 = *(
                  const char**)(spine_Json_getItem_4bae0(v64, (__int64)"name") +
                                32);
              LOBYTE(v764_.v767) = 1;
              v764_.v764 = v18 + 2;
              if (v67 != nullptr) {
                v68 = strlen(v67);
                v764_.v765 = v68;
                v69 = GameRoutine_19e10();
                v764_.v766 =
                    (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                    __int64))(*(_QWORD*)v69 + 24LL))(
                        v69, v68 + 1,
                        "/Program/Externals/Spine/include\\spine/SpineString.h",
                        53);
                memcpy(v764_.v766, (__int64)v67, v764_.v765 + 1);
              LABEL_86:
                spine_AttachmentTimeline_setFrame(v63, v65,
                                                  (__int64)&v764_.v764, v66);
                v70 = v764_.v766;
                v764_.v764 = v18 + 2;
                if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
                  v71 = GameRoutine_19e10();
                  (*(void (**)(__int64, __int64, const char*, __int64))(
                      *(_QWORD*)v71 + 40LL))(
                      v71, v70,
                      "/Program/Externals/Spine/include\\spine/SpineString.h",
                      206);
                }
                spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
                v64 = *(_QWORD*)(v64 + 8);
                ++v65;
                if (v64 == 0) {
                  goto LABEL_89;
                }
                continue;
              }
            }
            else {
              LOBYTE(v764_.v767) = 1;
              v764_.v764 = v18 + 2;
            }
            break;
          }
          v764_.v765 = 0;
          v764_.v766 = 0;
          goto LABEL_86;
        }
      LABEL_4:
        v5 = *(_QWORD*)(v693 + 8);
      } while (v5 != 0);
    }
  }
  if (v688 != 0) {
    v199 = *(_QWORD*)(v688 + 16);
    if (v199 != 0) {
      v721 = GameData_21322b8[0] + 2;
      while (1) {
        v200 = *(const char**)(v199 + 48);
        v764_.v764 = v721;
        LOBYTE(v764_.v767) = 1;
        if (v200 != nullptr) {
          v201 = strlen(v200);
          v764_.v765 = v201;
          v202 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v202 + 24LL))(
              v202, v201 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, (__int64)v200, v764_.v765 + 1);
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
        }
        v203 = GameRoutine_4b820((__int64)(a3 + 5), (__int64)&v764_.v764);
        v204 = v764_.v766;
        v764_.v764 = GameData_21322b8[0] + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v205 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v205 +
                                                                40LL))(
              v205, v204,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        if (v203 == -1) {
          v604 = v760_.v761;
          if ((int)v760_.v761 >= 1) {
            v605 = v760_.v761 & 0x7FFFFFFF;
            do {
              v606 = v605 - 1;
              if (v604 <= v605 - 1) {
                goto LABEL_863;
              }
              v607 = *(_QWORD*)(v760_.v763 + 8 * v606);
              if (v607 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v607 + 8LL))(v607);
                v604 = v760_.v761;
              }
              if (v604 <= v606) {
                goto LABEL_866;
              }
              v760_.v761 = --v604;
              if (v604 > v606) {
                v608 = v605;
                do {
                  v609 = (_QWORD*)(v760_.v763 + 8 * v608);
                  v610 = *(v609 - 1);
                  *(v609 - 1) = *v609;
                  *(_QWORD*)(v760_.v763 + 8 * v608) = v610;
                  v604 = v760_.v761;
                  v351 = v608++ >= v760_.v761;
                } while (!v351);
              }
              v412 = v605-- > 1;
            } while (v412);
          }
          LOBYTE(v764_.v767) = 1;
          v611 = GameData_21322b8[0] + 2;
          v764_.v764 = GameData_21322b8[0] + 2;
          v764_.v765 = 16;
          v612 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
              *(_QWORD*)v612 + 24LL))(
              v612, 17, "/Program/Externals/Spine/include\\spine/SpineString.h",
              53);
          strcpy((char*)v764_.v766, "Bone not found: ");
          v740_.v740 = v611;
          LOBYTE(v740_.v743) = 1;
          v613 = *(_QWORD*)(v199 + 48);
          if (v613 != 0) {
            v614 = strlen(*(const char**)(v199 + 48));
            v740_.v741 = (const char*)v614;
            v615 = GameRoutine_19e10();
            v592 = (const char*)(*(
                __int64 (**)(__int64, unsigned __int64, const char*, __int64))(
                *(_QWORD*)v615 + 24LL))(
                v615, v614 + 1,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
            v740_.v742 = (__int64)v592;
            memcpy((__int64)v592, v613, v614 + 1);
            spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                        (__int64)&v740_.v740);
            v740_.v740 = v611;
            if (v592 != nullptr) {
              goto LABEL_785;
            }
          }
          else {
            v740_.v741 = nullptr;
            v740_.v742 = 0;
            spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                        (__int64)&v740_.v740);
            v740_.v740 = v611;
          }
        LABEL_856:
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
          v764_.v764 = GameData_21322b8[0] + 2;
          v665 = *(_QWORD*)GameRoutine_19e10();
          goto LABEL_857;
        }
        v206 = *(_QWORD*)(v199 + 16);
        if (v206 != 0) {
          break;
        }
      LABEL_211:
        v199 = *(_QWORD*)(v199 + 8);
        if (v199 == 0) {
          goto LABEL_257;
        }
      }
      while (1) {
        v207 = *(int*)(v206 + 28);
        if ((_DWORD)v207 == 0) {
          goto LABEL_222;
        }
        v208 = *(const char**)(v206 + 48);
        if (strcmp(v208, "rotate") != 0) {
          if (strcmp(v208, "translate") == 0) {
            v209 = GameRoutine_4e7c0(120);
            spine_TranslateTimeline_TranslateTimeline(v209, v207, 2 * (int)v207,
                                                      v203);
            v212 = *(_QWORD*)(v206 + 16);
            v213 = 0x0.0p+0f;
            v214 = *(float*)(a1 + 48);
          LABEL_244:
            spine_SkeletonJson_readTimeline_4b220(v212, v209, (__int64)"x",
                                                  (__int64)"y", v213, v214);
            v211 = v760_.v761;
            if (v760_.v761 == v760_.v762) {
              goto LABEL_245;
            }
            goto LABEL_221;
          }
          if (strcmp(v208, "translatex") != 0) {
            if (strcmp(v208, "translatey") != 0) {
              if (strcmp(v208, "scale") != 0) {
                if (strcmp(v208, "scalex") == 0) {
                  v209 =
                      GameRoutine_4e800(120,
                                        (__int64)"/Program/Externals/Spine/src/"
                                                 "spine/SkeletonJson.cpp",
                                        0x42Du);
                  spine_ScaleXTimeline_ScaleXTimeline(v209, v207, v207, v203);
                  goto LABEL_251;
                }
                if (strcmp(v208, "scaley") == 0) {
                  v209 =
                      GameRoutine_4e800(120,
                                        (__int64)"/Program/Externals/Spine/src/"
                                                 "spine/SkeletonJson.cpp",
                                        0x431u);
                  spine_ScaleYTimeline_ScaleYTimeline(v209, v207, v207, v203);
                LABEL_251:
                  spine_SkeletonJson_readTimeline_4b020(
                      *(_QWORD*)(v206 + 16), v209, 0x1.0000000000000p+0f,
                      0x1.0000000000000p+0f);
                  v211 = v760_.v761;
                  if (v760_.v761 == v760_.v762) {
                    goto LABEL_245;
                  }
                  goto LABEL_221;
                }
                if (strcmp(v208, "shear") != 0) {
                  if (strcmp(v208, "shearx") != 0) {
                    if (strcmp(v208, "sheary") != 0) {
                      v666 = v760_.v761;
                      if ((int)v760_.v761 >= 1) {
                        v199 = v760_.v761 & 0x7FFFFFFF;
                        do {
                          v667 = v199 - 1;
                          if (v666 <= v199 - 1) {
                            goto LABEL_863;
                          }
                          v668 = *(_QWORD*)(v760_.v763 + 8 * v667);
                          if (v668 != 0) {
                            (*(void (**)(__int64))(*(_QWORD*)v668 + 8LL))(v668);
                            v666 = v760_.v761;
                          }
                          if (v666 <= v667) {
                            goto LABEL_866;
                          }
                          v760_.v761 = --v666;
                          if (v666 > v667) {
                            v669 = v199;
                            do {
                              v670 = (_QWORD*)(v760_.v763 + 8 * v669);
                              v671 = *(v670 - 1);
                              *(v670 - 1) = *v670;
                              *(_QWORD*)(v760_.v763 + 8 * v669) = v671;
                              v666 = v760_.v761;
                              v351 = v669++ >= v760_.v761;
                            } while (!v351);
                          }
                          v412 = v199-- > 1;
                        } while (v412);
                      }
                      LOBYTE(v764_.v767) = 1;
                      v587 = GameData_21322b8[0] + 2;
                      v764_.v764 = GameData_21322b8[0] + 2;
                      v764_.v765 = 34;
                      v672 = GameRoutine_19e10();
                      v764_.v766 =
                          (*(__int64 (**)(__int64, __int64, const char*,
                                          __int64))(*(_QWORD*)v672 + 24LL))(
                              v672, 35,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              53);
                      strcpy((char*)v764_.v766,
                             "Invalid timeline type for a bone: ");
                      v589 = *(const char**)(v206 + 48);
                      v740_.v740 = v587;
                      LOBYTE(v740_.v743) = 1;
                      if (v589 == nullptr) {
                      LABEL_855:
                        v740_.v741 = nullptr;
                        v740_.v742 = 0;
                        spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                                    (__int64)&v740_.v740);
                        v740_.v740 = v587;
                        goto LABEL_856;
                      }
                    LABEL_756:
                      v590 = strlen(v589);
                      v740_.v741 = (const char*)v590;
                      v591 = GameRoutine_19e10();
                      v592 = (const char*)(*(
                          __int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v591 + 24LL))(
                          v591, v590 + 1,
                          "/Program/Externals/Spine/include\\spine/"
                          "SpineString.h",
                          53);
                      v740_.v742 = (__int64)v592;
                      memcpy((__int64)v592, (__int64)v589, v590 + 1);
                      spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                                  (__int64)&v740_.v740);
                      v740_.v740 = v587;
                      if (v592 == nullptr) {
                        goto LABEL_856;
                      }
                    LABEL_785:
                      v616 = GameRoutine_19e10();
                      (*(void (**)(__int64, const char*, const char*, __int64))(
                          *(_QWORD*)v616 + 40LL))(
                          v616, v592,
                          "/Program/Externals/Spine/include\\spine/"
                          "SpineString.h",
                          206);
                      goto LABEL_856;
                    }
                    v209 =
                        GameRoutine_4e800(120,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "src/spine/SkeletonJson.cpp",
                                          0x43Du);
                    spine_ShearYTimeline_ShearYTimeline(v209, v207, v207, v203);
                  }
                  else {
                    v209 =
                        GameRoutine_4e800(120,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "src/spine/SkeletonJson.cpp",
                                          0x439u);
                    spine_ShearXTimeline_ShearXTimeline(v209, v207, v207, v203);
                  }
                  spine_SkeletonJson_readTimeline_4b020(*(_QWORD*)(v206 + 16),
                                                        v209, 0x0.0p+0f,
                                                        0x1.0000000000000p+0f);
                  v211 = v760_.v761;
                  if (v760_.v761 == v760_.v762) {
                  LABEL_245:
                    v215 = v760_.v763;
                    v216 = (int)(float)((float)v211 * 0x1.c000000000000p+0f);
                    if (v216 <= 8) {
                      v217 = 8;
                    }
                    else {
                      v217 = v216;
                    }
                    v760_.v762 = v217;
                    v218 = GameRoutine_19e10();
                    v219 =
                        (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                        __int64))(*(_QWORD*)v218 + 32LL))(
                            v218, v215, 8LL * v217,
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            106);
                    v220 = v760_.v761;
                    v760_.v763 = v219;
                    ++v760_.v761;
                    *(_QWORD*)(v219 + 8 * v220) = v209;
                    goto LABEL_222;
                  }
                  goto LABEL_221;
                }
                v209 = GameRoutine_4e800(120,
                                         (__int64)"/Program/Externals/Spine/"
                                                  "src/spine/SkeletonJson.cpp",
                                         0x435u);
                spine_ShearTimeline_ShearTimeline(v209, v207, 2 * (int)v207,
                                                  v203);
                v212 = *(_QWORD*)(v206 + 16);
                v213 = 0x0.0p+0f;
              }
              else {
                v209 = GameRoutine_4e800(120,
                                         (__int64)"/Program/Externals/Spine/"
                                                  "src/spine/SkeletonJson.cpp",
                                         0x429u);
                spine_ScaleTimeline_ScaleTimeline(v209, v207, 2 * (int)v207,
                                                  v203);
                v212 = *(_QWORD*)(v206 + 16);
                v213 = 0x1.0000000000000p+0f;
              }
              v214 = 0x1.0000000000000p+0f;
              goto LABEL_244;
            }
            v209 = GameRoutine_4e7c0(120);
            spine_TranslateYTimeline_TranslateYTimeline(v209, v207, v207, v203);
          }
          else {
            v209 = GameRoutine_4e7c0(120);
            spine_TranslateXTimeline_TranslateXTimeline(v209, v207, v207, v203);
          }
          spine_SkeletonJson_readTimeline_4b020(*(_QWORD*)(v206 + 16), v209,
                                                0x0.0p+0f, *(float*)(a1 + 48));
          v211 = v760_.v761;
          if (v760_.v761 == v760_.v762) {
            goto LABEL_245;
          }
        }
        else {
          v210 = *(_QWORD*)(v206 + 16);
          v209 = GameRoutine_4e7c0(120);
          spine_RotateTimeline_RotateTimeline(v209, v207, v207, v203);
          spine_SkeletonJson_readTimeline_4b020(v210, v209, 0x0.0p+0f,
                                                0x1.0000000000000p+0f);
          v211 = v760_.v761;
          if (v760_.v761 == v760_.v762) {
            goto LABEL_245;
          }
        }
      LABEL_221:
        v760_.v761 = v211 + 1;
        *(_QWORD*)(v760_.v763 + 8 * v211) = v209;
      LABEL_222:
        v206 = *(_QWORD*)(v206 + 8);
        if (v206 == 0) {
          goto LABEL_211;
        }
      }
    }
  }
LABEL_257:
  if (v683 == 0) {
    goto LABEL_295;
  }
  v221 = *(_QWORD*)(v683 + 16);
  if (v221 == 0) {
    goto LABEL_295;
  }
  v222 = *GameData_2132918[0];
  v713 = GameData_21322b8[0] + 2;
  while (2) {
    v223 = *(_QWORD*)(v221 + 16);
    if (v223 == 0) {
      goto LABEL_262;
    }
    v224 = *(const char**)(v221 + 48);
    LOBYTE(v764_.v767) = 1;
    v764_.v764 = v713;
    if (v224 != nullptr) {
      v225 = strlen(v224);
      v764_.v765 = v225;
      v226 = GameRoutine_19e10();
      v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                   __int64))(*(_QWORD*)v226 + 24LL))(
          v226, v225 + 1,
          "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
      memcpy(v764_.v766, (__int64)v224, v764_.v765 + 1);
    }
    else {
      v764_.v765 = 0;
      v764_.v766 = 0;
    }
    v227 =
        ((__int64 (*)(_QWORD*, __int64**))GameRoutine_3e060)(a3, &v764_.v764);
    v228 = v764_.v766;
    v764_.v764 = GameData_21322b8[0] + 2;
    if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
      v229 = GameRoutine_19e10();
      (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v229 +
                                                            40LL))(
          v229, v228, "/Program/Externals/Spine/include\\spine/SpineString.h",
          206);
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
    v230 = a3[27];
    if (v230 != 0) {
      v231 = 0;
      while (*(_QWORD*)(a3[29] + 8 * v231) != v227) {
        if (v230 == ++v231) {
          goto LABEL_274;
        }
      }
    }
    else {
    LABEL_274:
      LODWORD(v231) = -1;
    }
    v232 = GameRoutine_4e800(
        120, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
        0x44Fu);
    v722 = v221;
    spine_IkConstraintTimeline_IkConstraintTimeline(
        v232, *(int*)(v221 + 28), 2 * *(_DWORD*)(v221 + 28), v231);
    v233 = spine_Json_getFloat(v223, (__int64)"time", 0x0.0p+0f);
    v234 = spine_Json_getFloat(v223, (__int64)"mix", 0x1.0000000000000p+0f);
    v235 = 0;
    v236 = 0;
    v237 = spine_Json_getFloat(v223, (__int64)"softness", 0x0.0p+0f) *
           *(float*)(a1 + 48);
    while (1) {
      v239 = spine_Json_getBoolean(v223, (__int64)"bendPositive", 1) ? 1 : -1;
      v240 = spine_Json_getBoolean(v223, (__int64)"compress", 0);
      v241 = spine_Json_getBoolean(v223, (__int64)"stretch", 0);
      spine_IkConstraintTimeline_setFrame(v232, v235, v239, v240, v241, v233,
                                          v234, v237);
      v242 = *(_QWORD*)(v223 + 8);
      if (v242 == 0) {
        break;
      }
      v243 =
          spine_Json_getFloat(*(_QWORD*)(v223 + 8), (__int64)"time", 0x0.0p+0f);
      v244 = spine_Json_getFloat(v242, (__int64)"mix", 0x1.0000000000000p+0f);
      v245 = spine_Json_getFloat(v242, (__int64)"softness", 0x0.0p+0f) *
             *(float*)(a1 + 48);
      v246 = spine_Json_getItem_4bae0(v223, (__int64)"curve");
      if (v246 != 0) {
        v247 = v246;
        if (*(_DWORD*)(v246 + 24) == v222 &&
            strcmp(*(const char**)(v246 + 32), "stepped") == 0) {
          spine_CurveTimeline_setStepped(v232, v235);
          v249 = *(float*)(a1 + 48);
          if (*(_DWORD*)(v247 + 24) != v222) {
          LABEL_276:
            v238 = spine_Json_getItem_4bb60(v247, 4);
            *(float*)&v676 = v245;
            (*(void (**)(__int64, _QWORD, unsigned __int64, float, float, float,
                         float, float, float, float, float,
                         double))(*(_QWORD*)v232 + 40LL))(
                v232, v236++, v235, 0x1.0000000000000p+0f, v233, v237,
                *(float*)(v238 + 44),
                v249**(float*)(*(_QWORD*)(v238 + 8) + 44LL),
                *(float*)(*(_QWORD*)(*(_QWORD*)(v238 + 8) + 8LL) + 44LL),
                v249**(
                    float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v238 + 8) + 8LL) +
                                       8LL) +
                            44LL),
                v243, v676);
            goto LABEL_277;
          }
        }
        else {
          v248 = spine_Json_getItem_4bb60(v247, 0);
          *(float*)&v676 = v244;
          (*(void (**)(__int64, _QWORD, unsigned __int64, double, float, float,
                       float, float, float, float, float,
                       double))(*(_QWORD*)v232 + 40LL))(
              v232, v236++, v235, 0x0.0p+0, v233, v234, *(float*)(v248 + 44),
              *(float*)(*(_QWORD*)(v248 + 8) + 44LL),
              *(float*)(*(_QWORD*)(*(_QWORD*)(v248 + 8) + 8LL) + 44LL),
              *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v248 + 8) + 8LL) +
                                   8LL) +
                        44LL),
              v243, v676);
          v249 = *(float*)(a1 + 48);
          if (*(_DWORD*)(v247 + 24) != v222) {
            goto LABEL_276;
          }
        }
        if (strcmp(*(const char**)(v247 + 32), "stepped") != 0) {
          goto LABEL_276;
        }
        spine_CurveTimeline_setStepped(v232, v235);
      }
    LABEL_277:
      ++v235;
      v237 = v245;
      v234 = v244;
      v223 = v242;
      v233 = v243;
    }
    v250 = v760_.v761;
    if (v760_.v761 == v760_.v762) {
      v251 = v760_.v763;
      if ((unsigned int)(int)(float)((float)v760_.v761 *
                                     0x1.c000000000000p+0f) <= 8) {
        v252 = 8;
      }
      else {
        v252 = (int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f);
      }
      v760_.v762 = v252;
      v253 = GameRoutine_19e10();
      v254 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
          *(_QWORD*)v253 + 32LL))(
          v253, v251, 8LL * v252,
          "/Program/Externals/Spine/include\\spine/Vector.h", 106);
      v255 = v760_.v761;
      v760_.v763 = v254;
      ++v760_.v761;
      *(_QWORD*)(v254 + 8 * v255) = v232;
    }
    else {
      ++v760_.v761;
      *(_QWORD*)(v760_.v763 + 8 * v250) = v232;
    }
    v221 = v722;
  LABEL_262:
    v221 = *(_QWORD*)(v221 + 8);
    if (v221 != 0) {
      continue;
    }
    break;
  }
LABEL_295:
  if (v685 != 0) {
    v256 = *(_QWORD*)(v685 + 16);
    if (v256 != 0) {
      v257 = *GameData_2132918[0];
      v697 = GameData_21322b8[0] + 2;
      do {
        v258 = *(_QWORD*)(v256 + 16);
        if (v258 != 0) {
          v259 = *(const char**)(v256 + 48);
          v764_.v764 = v697;
          LOBYTE(v764_.v767) = 1;
          if (v259 != nullptr) {
            v260 = strlen(v259);
            v764_.v765 = v260;
            v261 = GameRoutine_19e10();
            v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                         __int64))(*(_QWORD*)v261 + 24LL))(
                v261, v260 + 1,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
            memcpy(v764_.v766, (__int64)v259, v764_.v765 + 1);
          }
          else {
            v764_.v765 = 0;
            v764_.v766 = 0;
          }
          v262 = ((__int64 (*)(_QWORD*, __int64**))GameRoutine_3e140)(
              a3, &v764_.v764);
          v263 = v764_.v766;
          v764_.v764 = GameData_21322b8[0] + 2;
          if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
            v264 = GameRoutine_19e10();
            (*(void (**)(__int64, __int64, const char*, __int64))(
                *(_QWORD*)v264 + 40LL))(
                v264, v263,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
          v265 = a3[31];
          if (v265 != 0) {
            v266 = 0;
            while (*(_QWORD*)(a3[33] + 8 * v266) != v262) {
              if (v265 == ++v266) {
                goto LABEL_311;
              }
            }
          }
          else {
          LABEL_311:
            LODWORD(v266) = -1;
          }
          v267 = GameRoutine_4e800(
              120,
              (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
              0x47Au);
          spine_TransformConstraintTimeline_TransformConstraintTimeline(
              v267, *(int*)(v256 + 28), 6LL * *(int*)(v256 + 28), v266);
          v268 = spine_Json_getFloat(v258, (__int64)"time", 0x0.0p+0f);
          v269 = spine_Json_getFloat(v258, (__int64)"mixRotate",
                                     0x1.0000000000000p+0f);
          v270 = spine_Json_getFloat(v258, (__int64)"mixShearY",
                                     0x1.0000000000000p+0f);
          v271 =
              spine_Json_getFloat(v258, (__int64)"mixX", 0x1.0000000000000p+0f);
          v272 = spine_Json_getFloat(v258, (__int64)"mixY", v271);
          v273 = spine_Json_getFloat(v258, (__int64)"mixScaleX",
                                     0x1.0000000000000p+0f);
          v274 = spine_Json_getFloat(v258, (__int64)"mixScaleY", v273);
          spine_TransformConstraintTimeline_setFrame(v267, 0, v268, v269, v271,
                                                     v272, v273, v274, v270);
          v275 = *(_QWORD*)(v258 + 8);
          if (v275 != 0) {
            v276 = 0;
            v277 = 0;
            v700 = v270;
            do {
              v714 = v274;
              v710 = v273;
              v279 = v269;
              v280 = v268;
              v706 = v272;
              v702 = v271;
              v281 = v258;
              v258 = v275;
              v268 = spine_Json_getFloat(v275, (__int64)"time", 0x0.0p+0f);
              v269 = spine_Json_getFloat(v258, (__int64)"mixRotate",
                                         0x1.0000000000000p+0f);
              v723 = spine_Json_getFloat(v258, (__int64)"mixShearY",
                                         0x1.0000000000000p+0f);
              v271 = spine_Json_getFloat(v258, (__int64)"mixX",
                                         0x1.0000000000000p+0f);
              v272 = spine_Json_getFloat(v258, (__int64)"mixY", v271);
              v273 = spine_Json_getFloat(v258, (__int64)"mixScaleX",
                                         0x1.0000000000000p+0f);
              v274 = spine_Json_getFloat(v258, (__int64)"mixScaleY", v273);
              v282 = spine_Json_getItem_4bae0(v281, (__int64)"curve");
              if (v282 == 0) {
                v286 = v700;
                goto LABEL_315;
              }
              v283 = v282;
              if (*(_DWORD*)(v282 + 24) == v257 &&
                  strcmp(*(const char**)(v282 + 32), "stepped") == 0) {
                spine_CurveTimeline_setStepped(v267, v276);
                if (*(_DWORD*)(v283 + 24) != v257) {
                  goto LABEL_325;
                }
              }
              else {
                v284 = spine_Json_getItem_4bb60(v283, 0);
                *(float*)&v676 = v269;
                (*(void (**)(__int64, _QWORD, unsigned __int64, double, float,
                             float, float, float, float, float, float,
                             double))(*(_QWORD*)v267 + 40LL))(
                    v267, v277++, v276, 0x0.0p+0, v280, v279,
                    *(float*)(v284 + 44),
                    *(float*)(*(_QWORD*)(v284 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v284 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v284 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    v268, v676);
                if (*(_DWORD*)(v283 + 24) != v257) {
                  goto LABEL_325;
                }
              }
              if (strcmp(*(const char**)(v283 + 32), "stepped") == 0) {
                spine_CurveTimeline_setStepped(v267, v276);
                v285 = v280;
                v286 = v700;
                if (*(_DWORD*)(v283 + 24) != v257) {
                  goto LABEL_327;
                }
                goto LABEL_326;
              }
            LABEL_325:
              v287 = spine_Json_getItem_4bb60(v283, 4);
              v285 = v280;
              *(float*)&v676 = v271;
              (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                           float, float, float, float, float, float,
                           double))(*(_QWORD*)v267 + 40LL))(
                  v267, v277, v276, 0x1.0000000000000p+0f, v280, v702,
                  *(float*)(v287 + 44), *(float*)(*(_QWORD*)(v287 + 8) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(v287 + 8) + 8LL) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v287 + 8) + 8LL) +
                                       8LL) +
                            44LL),
                  v268, v676);
              v286 = v700;
              ++v277;
              if (*(_DWORD*)(v283 + 24) == v257) {
              LABEL_326:
                if (strcmp(*(const char**)(v283 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped(v267, v276);
                  if (*(_DWORD*)(v283 + 24) != v257) {
                    goto LABEL_332;
                  }
                  goto LABEL_328;
                }
              }
            LABEL_327:
              v288 = spine_Json_getItem_4bb60(v283, 8);
              *(float*)&v676 = v272;
              (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                           float, float, float, float, float, float,
                           double))(*(_QWORD*)v267 + 40LL))(
                  v267, v277++, v276, 0x1.0000000000000p+1f, v285, v706,
                  *(float*)(v288 + 44), *(float*)(*(_QWORD*)(v288 + 8) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(v288 + 8) + 8LL) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v288 + 8) + 8LL) +
                                       8LL) +
                            44LL),
                  v268, v676);
              if (*(_DWORD*)(v283 + 24) == v257) {
              LABEL_328:
                if (strcmp(*(const char**)(v283 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped(v267, v276);
                  if (*(_DWORD*)(v283 + 24) != v257) {
                    goto LABEL_334;
                  }
                  goto LABEL_333;
                }
              }
            LABEL_332:
              v289 = spine_Json_getItem_4bb60(v283, 12);
              *(float*)&v676 = v273;
              (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                           float, float, float, float, float, float,
                           double))(*(_QWORD*)v267 + 40LL))(
                  v267, v277++, v276, 0x1.8000000000000p+1f, v285, v710,
                  *(float*)(v289 + 44), *(float*)(*(_QWORD*)(v289 + 8) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(v289 + 8) + 8LL) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v289 + 8) + 8LL) +
                                       8LL) +
                            44LL),
                  v268, v676);
              if (*(_DWORD*)(v283 + 24) != v257) {
                goto LABEL_334;
              }
            LABEL_333:
              if (strcmp(*(const char**)(v283 + 32), "stepped") != 0) {
              LABEL_334:
                v290 = spine_Json_getItem_4bb60(v283, 16);
                *(float*)&v676 = v274;
                (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                             float, float, float, float, float, float,
                             double))(*(_QWORD*)v267 + 40LL))(
                    v267, v277++, v276, 0x1.0000000000000p+2f, v285, v714,
                    *(float*)(v290 + 44),
                    *(float*)(*(_QWORD*)(v290 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v290 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v290 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    v268, v676);
                if (*(_DWORD*)(v283 + 24) == v257) {
                  goto LABEL_335;
                }
                goto LABEL_314;
              }
              spine_CurveTimeline_setStepped(v267, v276);
              if (*(_DWORD*)(v283 + 24) == v257) {
              LABEL_335:
                if (strcmp(*(const char**)(v283 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped(v267, v276);
                  goto LABEL_315;
                }
              }
            LABEL_314:
              v278 = spine_Json_getItem_4bb60(v283, 20);
              *(float*)&v676 = v723;
              (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                           float, float, float, float, float, float,
                           double))(*(_QWORD*)v267 + 40LL))(
                  v267, v277++, v276, 0x1.4000000000000p+2f, v285, v286,
                  *(float*)(v278 + 44), *(float*)(*(_QWORD*)(v278 + 8) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(v278 + 8) + 8LL) + 44LL),
                  *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v278 + 8) + 8LL) +
                                       8LL) +
                            44LL),
                  v268, v676);
            LABEL_315:
              spine_TransformConstraintTimeline_setFrame(
                  v267, ++v276, v268, v269, v271, v272, v273, v274, v286);
              v275 = *(_QWORD*)(v258 + 8);
            } while (v275 != 0);
          }
          v291 = v760_.v761;
          if (v760_.v761 == v760_.v762) {
            v292 = v760_.v763;
            if ((unsigned int)(int)(float)((float)v760_.v761 *
                                           0x1.c000000000000p+0f) <= 8) {
              v293 = 8;
            }
            else {
              v293 = (int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f);
            }
            v760_.v762 = v293;
            v294 = GameRoutine_19e10();
            v295 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v294 + 32LL))(
                v294, v292, 8LL * v293,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v296 = v760_.v761;
            v760_.v763 = v295;
            ++v760_.v761;
            *(_QWORD*)(v295 + 8 * v296) = v267;
          }
          else {
            ++v760_.v761;
            *(_QWORD*)(v760_.v763 + 8 * v291) = v267;
          }
        }
        v256 = *(_QWORD*)(v256 + 8);
      } while (v256 != 0);
    }
  }
  if (v687 != 0) {
    v297 = *(_QWORD*)(v687 + 16);
    if (v297 != 0) {
      v298 = 0x1.0000000000000p+0f;
      v299 = 0x1.c000000000000p+0f;
      v199 = (unsigned int)*GameData_2132918[0];
      v715 = GameData_21322b8[0] + 2;
      while (1) {
        v300 = *(const char**)(v297 + 48);
        v764_.v764 = v715;
        LOBYTE(v764_.v767) = 1;
        if (v300 != nullptr) {
          v301 = strlen(v300);
          v764_.v765 = v301;
          v302 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v302 + 24LL))(
              v302, v301 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, (__int64)v300, v764_.v765 + 1);
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
        }
        v303 = ((__int64 (*)(_QWORD*, __int64**))GameRoutine_3e220)(
            a3, &v764_.v764);
        v304 = v764_.v766;
        v764_.v764 = GameData_21322b8[0] + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v305 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v305 +
                                                                40LL))(
              v305, v304,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        v724 = v297;
        if (v303 != 0) {
          break;
        }
        v344 = v760_.v761;
        if ((int)v760_.v761 >= 1) {
          v345 = v760_.v761 & 0x7FFFFFFF;
          do {
            v346 = v345 - 1;
            if (v344 <= v345 - 1) {
              goto LABEL_863;
            }
            v347 = *(_QWORD*)(v760_.v763 + 8 * v346);
            if (v347 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v347 + 8LL))(v347);
              v344 = v760_.v761;
            }
            if (v344 <= v346) {
              goto LABEL_866;
            }
            v760_.v761 = --v344;
            if (v344 > v346) {
              v348 = v345;
              do {
                v349 = (_QWORD*)(v760_.v763 + 8 * v348);
                v350 = *(v349 - 1);
                *(v349 - 1) = *v349;
                *(_QWORD*)(v760_.v763 + 8 * v348) = v350;
                v344 = v760_.v761;
                v351 = v348++ >= v760_.v761;
              } while (!v351);
            }
            v412 = v345-- > 1;
          } while (v412);
        }
        LOBYTE(v764_.v767) = 1;
        v352 = GameData_21322b8[0] + 2;
        v764_.v764 = GameData_21322b8[0] + 2;
        v764_.v765 = 27;
        v353 = GameRoutine_19e10();
        v764_.v766 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
            *(_QWORD*)v353 + 24LL))(
            v353, 28, "/Program/Externals/Spine/include\\spine/SpineString.h",
            53);
        memcpy(v764_.v766,
               (__int64)"Path constraint not found: ", v764_.v765 + 1);
        v354 = *(const char**)(v297 + 48);
        v740_.v740 = v352;
        LOBYTE(v740_.v743) = 1;
        if (v354 != nullptr) {
          v355 = strlen(v354);
          v740_.v741 = (const char*)v355;
          v356 = GameRoutine_19e10();
          v740_.v742 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v356 + 24LL))(
              v356, v355 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v740_.v742, (__int64)v354, (unsigned __int64)(v740_.v741 + 1));
        }
        else {
          v740_.v741 = nullptr;
          v740_.v742 = 0;
        }
        spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                    (__int64)&v740_.v740);
        v357 = v740_.v742;
        v358 = GameData_21322b8[0] + 2;
        v740_.v740 = GameData_21322b8[0] + 2;
        if (v740_.v742 != 0 && (v740_.v743 & 1) != 0) {
          v359 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v359 +
                                                                40LL))(
              v359, v357,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
        v360 = v764_.v766;
        v764_.v764 = v358;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v361 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v361 +
                                                                40LL))(
              v361, v360,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
      LABEL_423:
        if (v303 == 0) {
          goto LABEL_859;
        }
        v297 = *(_QWORD*)(v724 + 8);
        if (v297 == 0) {
          goto LABEL_425;
        }
      }
      v306 = a3[35];
      if (v306 != 0) {
        v307 = 0;
        while (*(_QWORD*)(a3[37] + 8 * v307) != v303) {
          if (v306 == ++v307) {
            goto LABEL_358;
          }
        }
      }
      else {
      LABEL_358:
        LODWORD(v307) = -1;
      }
      v308 = *(_QWORD*)(v297 + 16);
      if (v308 == 0) {
        goto LABEL_423;
      }
      while (1) {
        v314 = *(_QWORD*)(v308 + 16);
        if (v314 != 0) {
          v315 = *(const char**)(v308 + 48);
          v316 = *(int*)(v308 + 28);
          if (strcmp(v315, "position") == 0) {
            v317 = GameRoutine_4e800(
                120,
                (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
                0x4BAu);
            spine_PathConstraintPositionTimeline_PathConstraintPositionTimeline(
                v317, v316, v316, v307);
            if (*(_DWORD*)(v303 + 96) != 0) {
              v335 = v298;
            }
            else {
              v335 = *(float*)(a1 + 48);
            }
            goto LABEL_391;
          }
          if (strcmp(v315, "spacing") == 0) {
            v317 = GameRoutine_4e7c0(120);
            spine_PathConstraintSpacingTimeline_PathConstraintSpacingTimeline(
                v317, v316, v316, v307);
            if (*(_DWORD*)(v303 + 100) >= 2u) {
              v335 = v298;
            }
            else {
              v335 = *(float*)(a1 + 48);
            }
          LABEL_391:
            spine_SkeletonJson_readTimeline_4b020(v314, v317, 0x0.0p+0f, v335);
            v336 = v760_.v761;
            if (v760_.v761 == v760_.v762) {
              v309 = v760_.v763;
              if ((unsigned int)(int)(float)((float)v760_.v761 * v299) <= 8) {
                v310 = 8;
              }
              else {
                v310 = (int)(float)((float)v760_.v761 * v299);
              }
              v760_.v762 = v310;
              v311 = GameRoutine_19e10();
              v312 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                     __int64))(*(_QWORD*)v311 + 32LL))(
                  v311, v309, 8LL * v310,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v313 = v760_.v761;
              v760_.v763 = v312;
              ++v760_.v761;
              *(_QWORD*)(v312 + 8 * v313) = v317;
              goto LABEL_365;
            }
            v337 = v760_.v763;
            v338 = v760_.v761 + 1;
          LABEL_393:
            v760_.v761 = v338;
            *(_QWORD*)(v337 + 8 * v336) = v317;
            goto LABEL_365;
          }
          if (strcmp(v315, "mix") == 0) {
            v317 = GameRoutine_4e7c0(120);
            spine_PathConstraintMixTimeline_PathConstraintMixTimeline(
                v317, v316, 3 * (int)v316, v307);
            v318 = spine_Json_getFloat(v314, (__int64)"time", 0x0.0p+0f);
            v319 = spine_Json_getFloat(v314, (__int64)"mixRotate",
                                       0x1.0000000000000p+0f);
            v320 = spine_Json_getFloat(v314, (__int64)"mixX",
                                       0x1.0000000000000p+0f);
            v321 = spine_Json_getFloat(v314, (__int64)"mixY", v320);
            spine_PathConstraintMixTimeline_setFrame(v317, 0, v318, v319, v320,
                                                     v321);
            v322 = *(_QWORD*)(v314 + 8);
            if (v322 != 0) {
              v323 = 0;
              v324 = 0;
              while (2) {
                v326 = v318;
                v327 = v314;
                v314 = v322;
                v328 = v319;
                v329 = v320;
                v330 = v321;
                v318 = spine_Json_getFloat(v322, (__int64)"time", 0x0.0p+0f);
                v319 = spine_Json_getFloat(v314, (__int64)"mixRotate",
                                           0x1.0000000000000p+0f);
                v320 = spine_Json_getFloat(v314, (__int64)"mixX",
                                           0x1.0000000000000p+0f);
                v321 = spine_Json_getFloat(v314, (__int64)"mixY", v320);
                v331 = spine_Json_getItem_4bae0(v327, (__int64)"curve");
                if (v331 == 0) {
                  goto LABEL_373;
                }
                v332 = v331;
                if (*(_DWORD*)(v331 + 24) == (_DWORD)v199 &&
                    strcmp(*(const char**)(v331 + 32), "stepped") == 0) {
                  spine_CurveTimeline_setStepped(v317, v323);
                  if (*(_DWORD*)(v332 + 24) != (_DWORD)v199) {
                    goto LABEL_382;
                  }
                LABEL_378:
                  if (strcmp(*(const char**)(v332 + 32), "stepped") != 0) {
                    goto LABEL_382;
                  }
                  spine_CurveTimeline_setStepped(v317, v323);
                  if (*(_DWORD*)(v332 + 24) == (_DWORD)v199) {
                  LABEL_383:
                    if (strcmp(*(const char**)(v332 + 32), "stepped") == 0) {
                      spine_CurveTimeline_setStepped(v317, v323);
                      goto LABEL_373;
                    }
                  }
                }
                else {
                  v333 = spine_Json_getItem_4bb60(v332, 0);
                  *(float*)&v676 = v319;
                  (*(void (**)(__int64, _QWORD, unsigned __int64, double, float,
                               float, float, float, float, float, float,
                               double))(*(_QWORD*)v317 + 40LL))(
                      v317, v324++, v323, 0x0.0p+0, v326, v328,
                      *(float*)(v333 + 44),
                      *(float*)(*(_QWORD*)(v333 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v333 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v333 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v318, v676);
                  if (*(_DWORD*)(v332 + 24) == (_DWORD)v199) {
                    goto LABEL_378;
                  }
                LABEL_382:
                  v334 = spine_Json_getItem_4bb60(v332, 4);
                  *(float*)&v676 = v320;
                  (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                               float, float, float, float, float, float,
                               double))(*(_QWORD*)v317 + 40LL))(
                      v317, v324++, v323, 0x1.0000000000000p+0f, v326, v329,
                      *(float*)(v334 + 44),
                      *(float*)(*(_QWORD*)(v334 + 8) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(v334 + 8) + 8LL) + 44LL),
                      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v334 + 8) +
                                                      8LL) +
                                           8LL) +
                                44LL),
                      v318, v676);
                  if (*(_DWORD*)(v332 + 24) == (_DWORD)v199) {
                    goto LABEL_383;
                  }
                }
                v325 = spine_Json_getItem_4bb60(v332, 8);
                *(float*)&v676 = v321;
                (*(void (**)(__int64, _QWORD, unsigned __int64, float, float,
                             float, float, float, float, float, float,
                             double))(*(_QWORD*)v317 + 40LL))(
                    v317, v324++, v323, 0x1.0000000000000p+1f, v326, v330,
                    *(float*)(v325 + 44),
                    *(float*)(*(_QWORD*)(v325 + 8) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v325 + 8) + 8LL) + 44LL),
                    *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v325 + 8) +
                                                    8LL) +
                                         8LL) +
                              44LL),
                    v318, v676);
              LABEL_373:
                spine_PathConstraintMixTimeline_setFrame(v317, ++v323, v318,
                                                         v319, v320, v321);
                v322 = *(_QWORD*)(v314 + 8);
                if (v322 == 0) {
                  break;
                }
                continue;
              }
            }
            v336 = v760_.v761;
            if (v760_.v761 == v760_.v762) {
              v299 = 0x1.c000000000000p+0f;
              v339 = v760_.v763;
              if ((unsigned int)(int)(float)((float)v760_.v761 *
                                             0x1.c000000000000p+0f) <= 8) {
                v340 = 8;
              }
              else {
                v340 = (int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f);
              }
              v760_.v762 = v340;
              v341 = GameRoutine_19e10();
              v342 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                     __int64))(*(_QWORD*)v341 + 32LL))(
                  v341, v339, 8LL * v340,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v343 = v760_.v761;
              v760_.v763 = v342;
              v298 = 0x1.0000000000000p+0f;
              ++v760_.v761;
              *(_QWORD*)(v342 + 8 * v343) = v317;
              goto LABEL_365;
            }
            v337 = v760_.v763;
            v298 = 0x1.0000000000000p+0f;
            v299 = 0x1.c000000000000p+0f;
            v338 = v760_.v761 + 1;
            goto LABEL_393;
          }
        }
      LABEL_365:
        v308 = *(_QWORD*)(v308 + 8);
        if (v308 == 0) {
          goto LABEL_423;
        }
      }
    }
  }
LABEL_425:
  v362 = a1;
  if (v681 != 0) {
    v686 = *(_QWORD**)(v681 + 16);
    if (v686 != nullptr) {
      v363 = GameData_21322b8[0];
      v682 = GameData_2132660[0] + 16;
      v364 = GameData_21322b8[0] + 2;
      v701 = *GameData_2132918[0];
      v677 = GameData_21322b8[0] + 2;
      v725 = GameData_21322e8[0] + 2;
      while (1) {
        v764_.v764 = v364;
        LOBYTE(v764_.v767) = 1;
        v365 = v686[6];
        if (v365 != 0) {
          v366 = strlen((const char*)v686[6]);
          v764_.v765 = v366;
          v367 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v367 + 24LL))(
              v367, v366 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, v365, v764_.v765 + 1);
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
        }
        v368 = spine_SkeletonData_findSkin((__int64)a3, (__int64)&v764_.v764);
        v369 = v764_.v766;
        v689 = v368;
        v764_.v764 = v363 + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v370 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v370 +
                                                                40LL))(
              v370, v369,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        v371 = v686[2];
        if (v371 != 0) {
          break;
        }
      LABEL_435:
        v364 = v677;
        v686 = (_QWORD*)v686[1];
        if (v686 == nullptr) {
          goto LABEL_672;
        }
      }
      while (1) {
        v372 = *(const char**)(v371 + 48);
        LOBYTE(v764_.v767) = 1;
        v764_.v764 = v363 + 2;
        if (v372 != nullptr) {
          v373 = v371;
          v374 = strlen(v372);
          v764_.v765 = v374;
          v375 = GameRoutine_19e10();
          v376 = v374 + 1;
          v371 = v373;
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v375 + 24LL))(
              v375, v376,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, (__int64)v372, v764_.v765 + 1);
          v377 = v760_.v762;
          v736_.v736 = v682;
          v736_.v737 = v760_.v761;
          v736_.v738 = v760_.v762;
          v736_.v739 = 0;
          if (v760_.v762 == 0) {
            goto LABEL_446;
          }
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
          v377 = v760_.v762;
          v736_.v736 = v682;
          v736_.v737 = v760_.v761;
          v736_.v738 = v760_.v762;
          v736_.v739 = 0;
          if (v760_.v762 == 0) {
            goto LABEL_446;
          }
        }
        v378 = GameRoutine_19e10();
        v379 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
            *(_QWORD*)v378 + 24LL))(
            v378, 8 * v377, "/Program/Externals/Spine/include\\spine/Vector.h",
            197);
        if (v379 == 0) {
          goto LABEL_867;
        }
        v736_.v739 = v379;
        if (v736_.v737 != 0) {
          for (j = 0; j < v736_.v737; ++j) {
            *(_QWORD*)(v736_.v739 + 8 * j) = *(_QWORD*)(v760_.v763 + 8 * j);
          }
        }
      LABEL_446:
        v694 = spine_SkeletonJson_findSlotIndex(
            v362, (__int64)a3, (__int64)&v764_.v764, (__int64)&v736_.v736);
        v381 = v736_.v739;
        v736_.v736 = GameData_2132660[0] + 16;
        v736_.v737 = 0;
        if (v736_.v739 != 0) {
          v382 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v382 +
                                                                40LL))(
              v382, v381, "/Program/Externals/Spine/include\\spine/Vector.h",
              206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v736_.v736);
        v383 = v764_.v766;
        v764_.v764 = v363 + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v384 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v384 +
                                                                40LL))(
              v384, v383,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        if (v694 == -1) {
          goto LABEL_859;
        }
        v385 = *(_QWORD**)(v371 + 16);
        v684 = v371;
        if (v385 != nullptr) {
          while (1) {
            v386 = (const char*)v385[6];
            LOBYTE(v764_.v767) = 1;
            v764_.v764 = v363 + 2;
            if (v386 != nullptr) {
              v387 = strlen(v386);
              v764_.v765 = v387;
              v388 = GameRoutine_19e10();
              v764_.v766 =
                  (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                  __int64))(*(_QWORD*)v388 + 24LL))(
                      v388, v387 + 1,
                      "/Program/Externals/Spine/include\\spine/SpineString.h",
                      53);
              memcpy(v764_.v766, (__int64)v386, v764_.v765 + 1);
            }
            else {
              v764_.v765 = 0;
              v764_.v766 = 0;
            }
            v389 = spine_Skin_getAttachment(v689, v694, &v764_.v764);
            v390 = v764_.v766;
            v391 = v389;
            v764_.v764 = v363 + 2;
            if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
              v392 = GameRoutine_19e10();
              (*(void (**)(__int64, __int64, const char*, __int64))(
                  *(_QWORD*)v392 + 40LL))(
                  v392, v390,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
            }
            spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
            if (v391 == 0) {
              break;
            }
            v393 = v385[2];
            if (v393 != 0) {
              v692 = v385;
              do {
                v394 = *(_QWORD*)(v393 + 16);
                if (v394 != 0) {
                  v395 = *(int*)(v393 + 28);
                  v396 = *(const char**)(v393 + 48);
                  v698 = v393;
                  LOBYTE(v764_.v767) = 1;
                  v764_.v764 = v363 + 2;
                  if (v396 != nullptr) {
                    v397 = strlen(v396);
                    v764_.v765 = v397;
                    v398 = GameRoutine_19e10();
                    v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64,
                                                 const char*, __int64))(
                        *(_QWORD*)v398 + 24LL))(
                        v398, v397 + 1,
                        "/Program/Externals/Spine/include\\spine/SpineString.h",
                        53);
                    memcpy(v764_.v766, (__int64)v396, v764_.v765 + 1);
                  }
                  else {
                    v764_.v765 = 0;
                    v764_.v766 = 0;
                  }
                  v399 = true;
                  LOBYTE(v740_.v743) = 1;
                  v740_.v740 = v363 + 2;
                  v740_.v741 = (_BYTE*)((_UNKNOWN*)0x6LL);
                  v400 = GameRoutine_19e10();
                  v740_.v742 = (*(__int64 (**)(__int64, __int64, const char*,
                                               __int64))(*(_QWORD*)v400 +
                                                         24LL))(
                      v400, 7,
                      "/Program/Externals/Spine/include\\spine/SpineString.h",
                      53);
                  memcpy(v740_.v742, (__int64)"deform",
                         (unsigned __int64)(v740_.v741 + 1));
                  v401 = v740_.v742;
                  if (v764_.v766 != v740_.v742) {
                    if ((const char*)v764_.v765 == v740_.v741) {
                      v399 = false;
                      if (v764_.v766 != 0 && v740_.v742 != 0) {
                        v399 = strcmp((const char*)v764_.v766,
                                      (const char*)v740_.v742) == 0;
                      }
                    }
                    else {
                      v399 = false;
                    }
                  }
                  v740_.v740 = v363 + 2;
                  if (v401 != 0 && (v740_.v743 & 1) != 0) {
                    v402 = GameRoutine_19e10();
                    (*(void (**)(__int64, __int64, const char*, __int64))(
                        *(_QWORD*)v402 + 40LL))(
                        v402, v401,
                        "/Program/Externals/Spine/include\\spine/SpineString.h",
                        206);
                  }
                  spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
                  if (v399) {
                    v403 = *(_DWORD*)(v391 + 88);
                    v362 = a1;
                    v703 = *(_QWORD*)(v391 + 56);
                    if (v703 != 0) {
                      v403 = 2 * (v403 / 3);
                    }
                    v404 = (_QWORD*)GameRoutine_4e800(
                        160,
                        (__int64)"/Program/Externals/Spine/src/spine/"
                                 "SkeletonJson.cpp",
                        0x503u);
                    spine_DeformTimeline_DeformTimeline((__int64)v404, v395,
                                                        v395, v694, v391);
                    v405 = (const char*)v403;
                    v406 =
                        spine_Json_getFloat(v394, (__int64)"time", 0x0.0p+0f);
                    v407 = 0;
                    v199 = 0;
                    v408 = (unsigned int)v403;
                    v409 = (int)(float)((float)(unsigned __int64)v403 *
                                        0x1.c000000000000p+0f);
                    if ((unsigned int)v409 <= 8) {
                      v409 = 8;
                    }
                    v410 = (const char*)v409;
                    v411 = 4LL * v409;
                    v412 = v703 != 0 || v403 < 1;
                    v707 = v411;
                    v711 = v410;
                    v413 = v412;
                    v716 = v413;
                    do {
                      v414 =
                          spine_Json_getItem_4bae0(v394, (__int64)"vertices");
                      v740_.v740 = v725;
                      v740_.v741 = nullptr;
                      v740_.v742 = 0;
                      v740_.v743 = 0;
                      if (v414 != 0) {
                        v415 = v414;
                        v740_.v741 = v405;
                        if ((_DWORD)v408 != 0) {
                          v740_.v742 = (__int64)v711;
                          v416 = GameRoutine_19e10();
                          v740_.v743 = (*(__int64 (**)(__int64, _QWORD, __int64,
                                                       const char*, __int64))(
                              *(_QWORD*)v416 + 32LL))(
                              v416, 0, v707,
                              "/Program/Externals/Spine/include\\spine/"
                              "Vector.h",
                              82);
                          if (v740_.v741 != nullptr) {
                            for (k = 0; k < (unsigned __int64)v740_.v741; ++k) {
                              *(_DWORD*)(v740_.v743 + 4 * k) = 0;
                            }
                          }
                        }
                        v418 = spine_Json_getInt(v394, (__int64)"offset", 0);
                        v419 = *(_QWORD*)(v415 + 16);
                        if (*(float*)(v362 + 48) == 0x1.0000000000000p+0f) {
                          if (v419 != 0) {
                            v420 = v418;
                            do {
                              if ((unsigned __int64)v740_.v741 <= v420) {
                                goto LABEL_863;
                              }
                              *(_DWORD*)(v740_.v743 + 4 * v420++) =
                                  *(_DWORD*)(v419 + 44);
                              v419 = *(_QWORD*)(v419 + 8);
                            } while (v419 != 0);
                          }
                        }
                        else if (v419 != 0) {
                          v423 = v418;
                          do {
                            if ((unsigned __int64)v740_.v741 <= v423) {
                              goto LABEL_863;
                            }
                            *(float*)(v740_.v743 + 4 * v423++) =
                                *(float*)(v419 + 44) * *(float*)(v362 + 48);
                            v419 = *(_QWORD*)(v419 + 8);
                          } while (v419 != 0);
                        }
                        if ((v716 & 1) == 0) {
                          v424 = 0;
                          do {
                            if (*(_QWORD*)(v391 + 88) <= v424 ||
                                (unsigned __int64)v740_.v741 <= v424) {
                              goto LABEL_863;
                            }
                            *(float*)(v740_.v743 + 4 * v424) =
                                *(float*)(*(_QWORD*)(v391 + 104) + 4 * v424) +
                                *(float*)(v740_.v743 + 4 * v424);
                            ++v424;
                          } while (v408 != v424);
                        }
                      }
                      else if (v703 != 0) {
                        v740_.v741 = v405;
                        if ((_DWORD)v405 != 0) {
                          v740_.v742 = (__int64)v711;
                          v421 = GameRoutine_19e10();
                          v740_.v743 = (*(__int64 (**)(__int64, _QWORD, __int64,
                                                       const char*, __int64))(
                              *(_QWORD*)v421 + 32LL))(
                              v421, 0, v707,
                              "/Program/Externals/Spine/include\\spine/"
                              "Vector.h",
                              82);
                          if (v740_.v741 != nullptr) {
                            for (m = 0; m < (unsigned __int64)v740_.v741; ++m) {
                              *(_DWORD*)(v740_.v743 + 4 * m) = 0;
                            }
                          }
                        }
                      }
                      else {
                        v433 = *(_QWORD*)(v391 + 88);
                        if (v433 != 0) {
                          v740_.v742 = *(_QWORD*)(v391 + 88);
                          v434 = GameRoutine_19e10();
                          v435 = (*(__int64 (**)(__int64, _QWORD, __int64,
                                                 const char*, __int64))(
                              *(_QWORD*)v434 + 32LL))(
                              v434, 0, 4 * v433,
                              "/Program/Externals/Spine/include\\spine/"
                              "Vector.h",
                              94);
                          v436 = *(_QWORD*)(v391 + 88);
                          v740_.v743 = v435;
                          if (v436 != 0) {
                            v437 = 0;
                            do {
                              while (1) {
                                v438 = *(_QWORD*)(v391 + 104);
                                v439 = v740_.v741;
                                if (v740_.v741 == (const char*)v740_.v742) {
                                  break;
                                }
                                ++v740_.v741;
                                *(_DWORD*)(v740_.v743 + 4LL * (_QWORD)v439) =
                                    *(_DWORD*)(v438 + 4 * v437++);
                                if (v437 >= *(_QWORD*)(v391 + 88)) {
                                  goto LABEL_520;
                                }
                              }
                              v440 = *(_DWORD*)(v438 + 4 * v437);
                              v441 = v740_.v743;
                              if ((unsigned int)(int)(float)((float)(unsigned __int64)
                                                                 v740_.v741 *
                                                             0x1.c000000000000p+0f) <=
                                  8) {
                                v442 = 8;
                              }
                              else {
                                v442 = (int)(float)((float)(unsigned __int64)
                                                        v740_.v741 *
                                                    0x1.c000000000000p+0f);
                              }
                              v740_.v742 = v442;
                              v443 = GameRoutine_19e10();
                              v444 = 4LL * v442;
                              v362 = a1;
                              v445 = (*(__int64 (**)(__int64, __int64, __int64,
                                                     const char*, __int64))(
                                  *(_QWORD*)v443 + 32LL))(
                                  v443, v441, v444,
                                  "/Program/Externals/Spine/include\\spine/"
                                  "Vector.h",
                                  106);
                              v446 = v740_.v741;
                              v740_.v743 = v445;
                              ++v740_.v741;
                              *(_DWORD*)(v445 + 4LL * (_QWORD)v446) = v440;
                              ++v437;
                            } while (v437 < *(_QWORD*)(v391 + 88));
                          }
                        }
                      }
                    LABEL_520:
                      spine_DeformTimeline_setFrame(v404, v407,
                                                    (__int64)&v740_.v740, v406);
                      v425 = *(_QWORD*)(v394 + 8);
                      if (v425 != 0) {
                        v426 = spine_Json_getFloat(*(_QWORD*)(v394 + 8),
                                                   (__int64)"time", 0x0.0p+0f);
                        v427 = spine_Json_getItem_4bae0(v394, (__int64)"curve");
                        if (v427 != 0) {
                          if (*(_DWORD*)(v427 + 24) == v701 &&
                              (v428 = v427,
                               v429 = strcmp(*(const char**)(v427 + 32),
                                             "stepped"),
                               v427 = v428, v429 == 0)) {
                            spine_CurveTimeline_setStepped((__int64)v404, v407);
                          }
                          else {
                            v430 = spine_Json_getItem_4bb60(v427, 0);
                            LODWORD(v676) = 1065353216;
                            (*(void (**)(_QWORD*, _QWORD, unsigned __int64,
                                         double, float, double, float, float,
                                         float, float, float,
                                         double))(*v404 + 40LL))(
                                v404, (int)v199, v407, 0x0.0p+0, v406, 0x0.0p+0,
                                *(float*)(v430 + 44),
                                *(float*)(*(_QWORD*)(v430 + 8) + 44LL),
                                *(float*)(*(_QWORD*)(*(_QWORD*)(v430 + 8) +
                                                     8LL) +
                                          44LL),
                                *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v430 +
                                                                           8) +
                                                                8LL) +
                                                     8LL) +
                                          44LL),
                                v426, v676);
                            v199 = (unsigned int)(v199 + 1);
                          }
                        }
                        v406 = v426;
                        v394 = v425;
                      }
                      v431 = v740_.v743;
                      v740_.v740 = GameData_21322e8[0] + 2;
                      v740_.v741 = nullptr;
                      if (v740_.v743 != 0) {
                        v432 = GameRoutine_19e10();
                        (*(void (**)(__int64, __int64, const char*, __int64))(
                            *(_QWORD*)v432 + 40LL))(
                            v432, v431,
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            206);
                      }
                      spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
                      ++v407;
                    } while (v425 != 0);
                    v450 = v760_.v761;
                    if (v760_.v761 == v760_.v762) {
                      v451 = v760_.v763;
                      if ((unsigned int)(int)(float)((float)v760_.v761 *
                                                     0x1.c000000000000p+0f) <=
                          8) {
                        v452 = 8;
                      }
                      else {
                        v452 = (int)(float)((float)v760_.v761 *
                                            0x1.c000000000000p+0f);
                      }
                      v760_.v762 = v452;
                      v453 = GameRoutine_19e10();
                      v454 = (*(__int64 (**)(__int64, __int64, __int64,
                                             const char*,
                                             __int64))(*(_QWORD*)v453 + 32LL))(
                          v453, v451, 8LL * v452,
                          "/Program/Externals/Spine/include\\spine/Vector.h",
                          106);
                      v455 = v760_.v761;
                      v760_.v763 = v454;
                      ++v760_.v761;
                      *(_QWORD*)(v454 + 8 * v455) = v404;
                      v363 = GameData_21322b8[0];
                    }
                    else {
                      ++v760_.v761;
                      *(_QWORD*)(v760_.v763 + 8 * v450) = v404;
                      v363 = GameData_21322b8[0];
                    }
                  }
                  else {
                    v447 = true;
                    LOBYTE(v740_.v743) = 1;
                    v740_.v740 = v363 + 2;
                    v740_.v741 = (const char*)((_UNKNOWN**)0x8LL);
                    v448 = GameRoutine_19e10();
                    v740_.v742 = (*(__int64 (**)(__int64, __int64, const char*,
                                                 __int64))(*(_QWORD*)v448 +
                                                           24LL))(
                        v448, 9,
                        "/Program/Externals/Spine/include\\spine/SpineString.h",
                        53);
                    memcpy(v740_.v742, (__int64)"sequence",
                           (unsigned __int64)(v740_.v741 + 1));
                    v449 = v740_.v742;
                    if (v764_.v766 != v740_.v742) {
                      if ((const char*)v764_.v765 == v740_.v741) {
                        v447 = false;
                        if (v764_.v766 != 0 && v740_.v742 != 0) {
                          v447 = strcmp((const char*)v764_.v766,
                                        (const char*)v740_.v742) == 0;
                        }
                      }
                      else {
                        v447 = false;
                      }
                    }
                    v740_.v740 = v363 + 2;
                    if (v449 != 0 && (v740_.v743 & 1) != 0) {
                      v456 = GameRoutine_19e10();
                      (*(void (**)(__int64, __int64, const char*, __int64))(
                          *(_QWORD*)v456 + 40LL))(
                          v456, v449,
                          "/Program/Externals/Spine/include\\spine/"
                          "SpineString.h",
                          206);
                    }
                    spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
                    v362 = a1;
                    if (v447) {
                      v717 = GameRoutine_4e7c0(96);
                      spine_SequenceTimeline_SequenceTimeline(v717, v395, v694,
                                                              v391);
                      v457 = 0x0.0p+0f;
                      v458 = 0;
                      do {
                        v457 =
                            spine_Json_getFloat(v394, (__int64)"delay", v457);
                        v459 = spine_Json_getFloat(v394, (__int64)"time",
                                                   0x0.0p+0f);
                        v460 = (const char*)spine_Json_getString(
                            v394, (__int64)"mode", (__int64)"hold");
                        LOBYTE(v740_.v743) = 1;
                        v740_.v740 = v363 + 2;
                        if (v460 != nullptr) {
                          v461 = (__int64)v460;
                          v462 = strlen(v460);
                          v740_.v741 = (const char*)v462;
                          v463 = GameRoutine_19e10();
                          v740_.v742 = (*(__int64 (**)(
                              __int64, unsigned __int64, const char*, __int64))(
                              *(_QWORD*)v463 + 24LL))(
                              v463, v462 + 1,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              53);
                          memcpy(v740_.v742, v461,
                                 (unsigned __int64)(v740_.v741 + 1));
                        }
                        else {
                          v740_.v741 = nullptr;
                          v740_.v742 = 0;
                        }
                        v464 = 1;
                        v465 = spine_Json_getInt(v394, (__int64)"index", 0);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 4;
                        v466 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v466 + 24LL))(
                            v466, 5,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"once",
                               v732_.v733 + 1);
                        v467 = v732_.v734;
                        if ((const char*)v740_.v742 != v732_.v734) {
                          if (v740_.v741 == (const char*)v732_.v733) {
                            v464 = 0;
                            if (v740_.v742 != 0 && v732_.v734 != nullptr) {
                              v464 = strcmp((const char*)v740_.v742,
                                            v732_.v734) == 0;
                            }
                          }
                          else {
                            v464 = 0;
                          }
                        }
                        v732_.v732 = v363 + 2;
                        if (v467 != nullptr && (v732_.v735 & 1) != 0) {
                          v468 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v468 + 40LL))(
                              v468, v467,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 4;
                        v469 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v469 + 24LL))(
                            v469, 5,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"loop",
                               v732_.v733 + 1);
                        v470 = v732_.v734;
                        if ((const char*)v740_.v742 == v732_.v734) {
                          v464 = 2;
                        }
                        else if (v740_.v741 == (const char*)v732_.v733 &&
                                 v740_.v742 != 0 && v732_.v734 != nullptr &&
                                 strcmp((const char*)v740_.v742, v732_.v734) ==
                                     0) {
                          v464 = 2;
                        }
                        v732_.v732 = v363 + 2;
                        if (v470 != nullptr && (v732_.v735 & 1) != 0) {
                          v471 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v471 + 40LL))(
                              v471, v470,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 8;
                        v472 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v472 + 24LL))(
                            v472, 9,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"pingpong",
                               v732_.v733 + 1);
                        v473 = v732_.v734;
                        if ((const char*)v740_.v742 == v732_.v734) {
                          v464 = 3;
                        }
                        else if (v740_.v741 == (const char*)v732_.v733 &&
                                 v740_.v742 != 0 && v732_.v734 != nullptr &&
                                 strcmp((const char*)v740_.v742, v732_.v734) ==
                                     0) {
                          v464 = 3;
                        }
                        v732_.v732 = v363 + 2;
                        if (v473 != nullptr && (v732_.v735 & 1) != 0) {
                          v474 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v474 + 40LL))(
                              v474, v473,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 11;
                        v475 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v475 + 24LL))(
                            v475, 12,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"onceReverse",
                               v732_.v733 + 1);
                        v476 = v732_.v734;
                        if ((const char*)v740_.v742 == v732_.v734) {
                          v464 = 4;
                        }
                        else if (v740_.v741 == (const char*)v732_.v733 &&
                                 v740_.v742 != 0 && v732_.v734 != nullptr &&
                                 strcmp((const char*)v740_.v742, v732_.v734) ==
                                     0) {
                          v464 = 4;
                        }
                        v732_.v732 = v363 + 2;
                        if (v476 != nullptr && (v732_.v735 & 1) != 0) {
                          v477 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v477 + 40LL))(
                              v477, v476,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 11;
                        v478 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v478 + 24LL))(
                            v478, 12,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"loopReverse",
                               v732_.v733 + 1);
                        v479 = v732_.v734;
                        if ((const char*)v740_.v742 == v732_.v734) {
                          v464 = 5;
                        }
                        else if (v740_.v741 == (const char*)v732_.v733 &&
                                 v740_.v742 != 0 && v732_.v734 != nullptr &&
                                 strcmp((const char*)v740_.v742, v732_.v734) ==
                                     0) {
                          v464 = 5;
                        }
                        v732_.v732 = v363 + 2;
                        if (v479 != nullptr && (v732_.v735 & 1) != 0) {
                          v480 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v480 + 40LL))(
                              v480, v479,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        v732_.v735 = 1;
                        v732_.v732 = v363 + 2;
                        v732_.v733 = 15;
                        v481 = GameRoutine_19e10();
                        v732_.v734 = (const char*)(*(
                            __int64 (**)(__int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v481 + 24LL))(
                            v481, 16,
                            "/Program/Externals/Spine/include\\spine/"
                            "SpineString.h",
                            53);
                        memcpy((__int64)v732_.v734, (__int64)"pingpongReverse",
                               v732_.v733 + 1);
                        v482 = v732_.v734;
                        if ((const char*)v740_.v742 == v732_.v734) {
                          v464 = 6;
                        }
                        else if (v740_.v741 == (const char*)v732_.v733 &&
                                 v740_.v742 != 0 && v732_.v734 != nullptr &&
                                 strcmp((const char*)v740_.v742, v732_.v734) ==
                                     0) {
                          v464 = 6;
                        }
                        v732_.v732 = v363 + 2;
                        if (v482 != nullptr && (v732_.v735 & 1) != 0) {
                          v483 = GameRoutine_19e10();
                          (*(void (**)(__int64, const char*, const char*,
                                       __int64))(*(_QWORD*)v483 + 40LL))(
                              v483, v482,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v732_.v732);
                        GameRoutine_3a2a0(v717, v458, v464, v465, v459, v457);
                        v484 = v740_.v742;
                        v740_.v740 = v363 + 2;
                        if (v740_.v742 != 0 && (v740_.v743 & 1) != 0) {
                          v485 = GameRoutine_19e10();
                          (*(void (**)(__int64, __int64, const char*, __int64))(
                              *(_QWORD*)v485 + 40LL))(
                              v485, v484,
                              "/Program/Externals/Spine/include\\spine/"
                              "SpineString.h",
                              206);
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                            &v740_.v740);
                        v394 = *(_QWORD*)(v394 + 8);
                        ++v458;
                      } while (v394 != 0);
                      v486 = v760_.v761;
                      if (v760_.v761 == v760_.v762) {
                        v487 = v760_.v763;
                        if ((unsigned int)(int)(float)((float)v760_.v761 *
                                                       0x1.c000000000000p+0f) <=
                            8) {
                          v488 = 8;
                        }
                        else {
                          v488 = (int)(float)((float)v760_.v761 *
                                              0x1.c000000000000p+0f);
                        }
                        v760_.v762 = v488;
                        v489 = GameRoutine_19e10();
                        v490 = (*(__int64 (**)(__int64, __int64, __int64,
                                               const char*, __int64))(
                            *(_QWORD*)v489 + 32LL))(
                            v489, v487, 8LL * v488,
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            106);
                        v491 = v760_.v761;
                        v760_.v763 = v490;
                        ++v760_.v761;
                        *(_QWORD*)(v490 + 8 * v491) = v717;
                      }
                      else {
                        ++v760_.v761;
                        *(_QWORD*)(v760_.v763 + 8 * v486) = v717;
                      }
                    }
                  }
                  v492 = v764_.v766;
                  v764_.v764 = v363 + 2;
                  if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
                    v493 = GameRoutine_19e10();
                    (*(void (**)(__int64, __int64, const char*, __int64))(
                        *(_QWORD*)v493 + 40LL))(
                        v493, v492,
                        "/Program/Externals/Spine/include\\spine/SpineString.h",
                        206);
                  }
                  spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
                  v393 = v698;
                }
                v393 = *(_QWORD*)(v393 + 8);
              } while (v393 != 0);
              goto LABEL_455;
            }
          LABEL_456:
            v385 = (_QWORD*)v385[1];
            if (v385 == nullptr) {
              goto LABEL_437;
            }
          }
          v494 = v760_.v761;
          if ((int)v760_.v761 >= 1) {
            v199 = v760_.v761 & 0x7FFFFFFF;
            while (1) {
              v495 = v199 - 1;
              if (v494 <= v199 - 1) {
                goto LABEL_863;
              }
              v496 = *(_QWORD*)(v760_.v763 + 8 * v495);
              if (v496 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v496 + 8LL))(v496);
                v494 = v760_.v761;
              }
              if (v494 <= v495) {
                break;
              }
              v760_.v761 = --v494;
              if (v494 > v495) {
                v497 = v199;
                do {
                  v498 = (_QWORD*)(v760_.v763 + 8 * v497);
                  v499 = *(v498 - 1);
                  *(v498 - 1) = *v498;
                  *(_QWORD*)(v760_.v763 + 8 * v497) = v499;
                  v494 = v760_.v761;
                  v351 = v497++ >= v760_.v761;
                } while (!v351);
              }
              v412 = v199-- > 1;
              if (!v412) {
                goto LABEL_649;
              }
            }
          LABEL_866:
            __assert_fail("inIndex < _size",
                          "/Program/Externals/Spine/include\\spine/Vector.h",
                          126, "removeAt");
          LABEL_867:
            __assert_fail("ptr",
                          "/Program/Externals/Spine/include\\spine/Vector.h",
                          199, "allocate");
            __udf(0);
          }
        LABEL_649:
          LOBYTE(v740_.v743) = 1;
          v740_.v740 = v363 + 2;
          v740_.v741 = (_BYTE*)(((__int128*)0x10LL) + 6);
          v500 = GameRoutine_19e10();
          v740_.v742 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
              *(_QWORD*)v500 + 24LL))(
              v500, 23, "/Program/Externals/Spine/include\\spine/SpineString.h",
              53);
          memcpy(v740_.v742, (__int64)"Attachment not found: ",
                 (unsigned __int64)(v740_.v741 + 1));
          v501 = (const char*)v385[6];
          v732_.v732 = v363 + 2;
          v732_.v735 = 1;
          if (v501 != nullptr) {
            v502 = strlen(v501);
            v732_.v733 = v502;
            v503 = GameRoutine_19e10();
            v732_.v734 = (const char*)(*(
                __int64 (**)(__int64, unsigned __int64, const char*, __int64))(
                *(_QWORD*)v503 + 24LL))(
                v503, v502 + 1,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
            memcpy((__int64)v732_.v734, (__int64)v501, v732_.v733 + 1);
            LOBYTE(v764_.v767) = 1;
            if (v740_.v742 != 0) {
              goto LABEL_651;
            }
          LABEL_653:
            v506 = 0;
            v504 = nullptr;
          }
          else {
            v732_.v733 = 0;
            v732_.v734 = nullptr;
            LOBYTE(v764_.v767) = 1;
            if (v740_.v742 == 0) {
              goto LABEL_653;
            }
          LABEL_651:
            v504 = v740_.v741;
            v505 = GameRoutine_19e10();
            v506 = (*(__int64 (**)(__int64, const char*, const char*, __int64))(
                *(_QWORD*)v505 + 24LL))(
                v505, v504 + 1,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 68);
            memcpy(v506, v740_.v742, (unsigned __int64)(v740_.v741 + 1));
          }
          v507 = v732_.v733;
          v508 = v732_.v734;
          v509 = &v504[v732_.v733];
          v764_.v765 = (unsigned __int64)&v504[v732_.v733];
          v510 = GameRoutine_19e10();
          v511 =
              (char*)(*(__int64 (**)(__int64, __int64, const char*, const char*,
                                     __int64))(*(_QWORD*)v510 + 32LL))(
                  v510, v506, v509 + 1,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 163);
          v512 = (__int64)v511;
          v764_.v766 = (__int64)v511;
          if (v508 == (const char*)v506) {
            v513 = v511;
          }
          else {
            v513 = v732_.v734;
          }
          memcpy((__int64)&v504[(_QWORD)v511], (__int64)v513, v507 + 1);
          if ((__int64**)(a1 + 56) == &v764_.v764) {
            v362 = a1;
            v764_.v764 = v363 + 2;
            if (v512 != 0) {
            LABEL_664:
              v518 = GameRoutine_19e10();
              (*(void (**)(__int64, __int64, const char*, __int64))(
                  *(_QWORD*)v518 + 40LL))(
                  v518, v512,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
            }
          }
          else {
            v362 = a1;
            v514 = *(_QWORD*)(a1 + 72);
            if (v514 != 0 && (*(_BYTE*)(a1 + 80) & 1) != 0) {
              v515 = GameRoutine_19e10();
              (*(void (**)(__int64, __int64, const char*, __int64))(
                  *(_QWORD*)v515 + 40LL))(
                  v515, v514,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 119);
            }
            if (v512 != 0) {
              *(_QWORD*)(a1 + 64) = v509;
              v516 = GameRoutine_19e10();
              v517 = (*(__int64 (**)(__int64, const char*, const char*,
                                     __int64))(*(_QWORD*)v516 + 24LL))(
                  v516, v509 + 1,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 126);
              *(_QWORD*)(a1 + 72) = v517;
              memcpy(v517, v512, (unsigned __int64)(v509 + 1));
              v764_.v764 = v363 + 2;
              goto LABEL_664;
            }
            *(_QWORD*)(a1 + 64) = 0;
            *(_QWORD*)(a1 + 72) = 0;
            v764_.v764 = v363 + 2;
          }
          v692 = v385;
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
          v519 = v732_.v734;
          v732_.v732 = v363 + 2;
          if (v732_.v734 != nullptr && (v732_.v735 & 1) != 0) {
            v520 = GameRoutine_19e10();
            (*(void (**)(__int64, const char*, const char*, __int64))(
                *(_QWORD*)v520 + 40LL))(
                v520, v519,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v732_.v732);
          v521 = v740_.v742;
          v740_.v740 = v363 + 2;
          if (v740_.v742 != 0 && (v740_.v743 & 1) != 0) {
            v522 = GameRoutine_19e10();
            (*(void (**)(__int64, __int64, const char*, __int64))(
                *(_QWORD*)v522 + 40LL))(
                v522, v521,
                "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
        LABEL_455:
          v385 = v692;
          if (v391 == 0) {
            goto LABEL_859;
          }
          goto LABEL_456;
        }
      LABEL_437:
        v371 = *(_QWORD*)(v684 + 8);
        if (v371 == 0) {
          goto LABEL_435;
        }
      }
    }
  }
LABEL_672:
  if (v680 != 0) {
    v726 = (_QWORD*)GameRoutine_4e800(
        112, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
        0x54Du);
    spine_DrawOrderTimeline_DrawOrderTimeline(v726, *(int*)(v680 + 28));
    v523 = *(_QWORD*)(v680 + 16);
    if (v523 != 0) {
      v199 = 0xFFFFFFFFLL;
      v524 = 0;
      v525 = GameData_21326a0[0];
      v718 = GameData_21326a0[0] + 2;
      v526 = GameData_21322b8[0] + 2;
      v527 = GameData_2132660[0] + 16;
      do {
        v764_.v764 = v718;
        v764_.v765 = 0;
        v764_.v766 = 0;
        v764_.v767 = 0;
        v528 = spine_Json_getItem_4bae0(v523, (__int64)"offsets");
        if (v528 == 0) {
          goto LABEL_736;
        }
        v529 = a3;
        v530 = v528;
        v740_.v740 = v525 + 2;
        v740_.v742 = 0;
        v740_.v743 = 0;
        v740_.v741 = nullptr;
        v531 = *(int*)(v528 + 28);
        v532 = a3[10];
        v533 = v532 - v531;
        if (v532 == v531) {
          v534 = 0;
          v740_.v741 = nullptr;
          goto LABEL_686;
        }
        v740_.v742 = v532 - v531;
        v535 = GameRoutine_19e10();
        v536 = (*(__int64 (**)(__int64, _QWORD, unsigned __int64, const char*,
                               __int64))(*(_QWORD*)v535 + 32LL))(
            v535, 0, 4 * v533,
            "/Program/Externals/Spine/include\\spine/Vector.h", 94);
        v529 = a3;
        v740_.v743 = v536;
        v533 = (unsigned __int64)v740_.v741;
        v537 = v536;
        v534 = a3[10] - *(int*)(v530 + 28);
        v740_.v741 = (const char*)v534;
        if (v740_.v742 < v534) {
          v538 = (int)(float)((float)v534 * 0x1.c000000000000p+0f);
          if (v538 <= 8) {
            v539 = 8;
          }
          else {
            v539 = v538;
          }
          v740_.v742 = v539;
          v540 = GameRoutine_19e10();
          v541 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                 __int64))(*(_QWORD*)v540 + 32LL))(
              v540, v537, 4LL * v539,
              "/Program/Externals/Spine/include\\spine/Vector.h", 82);
          v529 = a3;
          v740_.v743 = v541;
          goto LABEL_685;
        }
      LABEL_686:
        while (v533 < v534) {
          *(_DWORD*)(v740_.v743 + 4 * v533++) = 0;
        LABEL_685:
          v534 = (unsigned __int64)v740_.v741;
        }
        v542 = v529[10];
        if (v764_.v766 >= v542) {
          v546 = v764_.v765;
          v764_.v765 = v529[10];
        }
        else {
          v543 = v764_.v767;
          v764_.v766 = v529[10];
          v544 = GameRoutine_19e10();
          v545 = (*(__int64 (**)(__int64, __int64, unsigned __int64,
                                 const char*, __int64))(*(_QWORD*)v544 + 32LL))(
              v544, v543, 4 * v542,
              "/Program/Externals/Spine/include\\spine/Vector.h", 94);
          v529 = a3;
          v546 = v764_.v765;
          v764_.v767 = v545;
          v542 = a3[10];
          v764_.v765 = v542;
          if (v764_.v766 < v542) {
            v571 = v764_.v767;
            if ((unsigned int)(int)(float)((float)v542 *
                                           0x1.c000000000000p+0f) <= 8) {
              v572 = 8;
            }
            else {
              v572 = (int)(float)((float)v542 * 0x1.c000000000000p+0f);
            }
            v764_.v766 = v572;
            v573 = GameRoutine_19e10();
            v574 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v573 + 32LL))(
                v573, v571, 4LL * v572,
                "/Program/Externals/Spine/include\\spine/Vector.h", 82);
            v529 = a3;
            v764_.v767 = v574;
            if (v546 >= v764_.v765) {
              goto LABEL_691;
            }
            do {
            LABEL_690:
              *(_DWORD*)(v764_.v767 + 4 * v546++) = 0;
            } while (v546 < v764_.v765);
            goto LABEL_691;
          }
        }
        if (v546 < v542) {
          goto LABEL_690;
        }
      LABEL_691:
        if ((int)v529[10] >= 1) {
          v547 = (v529[10] & 0x7FFFFFFFLL) - 1;
          do {
            if (v764_.v765 <= v547) {
              goto LABEL_863;
            }
            *(_DWORD*)(v764_.v767 + 4 * v547) = -1;
            v548 = v547-- + 1;
          } while (v548 > 1);
        }
        v549 = *(_QWORD*)(v530 + 16);
        if (v549 != 0) {
          v550 = 0;
          v551 = 0;
          while (1) {
            v552 = (const char*)spine_Json_getString(v549, (__int64)"slot", 0);
            v732_.v732 = v526;
            v732_.v735 = 1;
            if (v552 != nullptr) {
              v553 = (__int64)v552;
              v554 = strlen(v552);
              v732_.v733 = v554;
              v555 = GameRoutine_19e10();
              v732_.v734 = (const char*)(*(
                  __int64 (**)(__int64, unsigned __int64, const char*,
                               __int64))(*(_QWORD*)v555 + 24LL))(
                  v555, v554 + 1,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
              memcpy((__int64)v732_.v734, v553, v732_.v733 + 1);
              v556 = v760_.v762;
              v728_.v728 = v527;
              v728_.v729 = v760_.v761;
              v728_.v730 = v760_.v762;
              v728_.v731 = 0;
              if (v760_.v762 == 0) {
                goto LABEL_705;
              }
            }
            else {
              v732_.v733 = 0;
              v732_.v734 = nullptr;
              v556 = v760_.v762;
              v728_.v728 = v527;
              v728_.v729 = v760_.v761;
              v728_.v730 = v760_.v762;
              v728_.v731 = 0;
              if (v760_.v762 == 0) {
                goto LABEL_705;
              }
            }
            v557 = GameRoutine_19e10();
            v558 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
                *(_QWORD*)v557 + 24LL))(
                v557, 8 * v556,
                "/Program/Externals/Spine/include\\spine/Vector.h", 197);
            if (v558 == 0) {
              goto LABEL_867;
            }
            v728_.v731 = v558;
            if (v728_.v729 != 0) {
              for (n = 0; n < v728_.v729; ++n) {
                *(_QWORD*)(v728_.v731 + 8 * n) = *(_QWORD*)(v760_.v763 + 8 * n);
              }
            }
          LABEL_705:
            v560 = spine_SkeletonJson_findSlotIndex(
                a1, (__int64)a3, (__int64)&v732_.v732, (__int64)&v728_.v728);
            v561 = v728_.v731;
            v728_.v728 = GameData_2132660[0] + 16;
            v728_.v729 = 0;
            if (v728_.v731 != 0) {
              v562 = GameRoutine_19e10();
              (*(void (**)(__int64, __int64, const char*, __int64))(
                  *(_QWORD*)v562 + 40LL))(
                  v562, v561,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 206);
            }
            spine_SpineObject_Destroy_SpineObject_4e8a0(&v728_.v728);
            v563 = v732_.v734;
            v732_.v732 = GameData_21322b8[0] + 2;
            if (v732_.v734 != nullptr && (v732_.v735 & 1) != 0) {
              v564 = GameRoutine_19e10();
              (*(void (**)(__int64, const char*, const char*, __int64))(
                  *(_QWORD*)v564 + 40LL))(
                  v564, v563,
                  "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
            }
            spine_SpineObject_Destroy_SpineObject_4e8a0(&v732_.v732);
            if (v560 == -1) {
              v575 = 0;
              v525 = GameData_21326a0[0];
              v576 = v740_.v743;
              v740_.v740 = GameData_21326a0[0] + 2;
              v740_.v741 = nullptr;
              if (v740_.v743 != 0) {
                goto LABEL_734;
              }
              goto LABEL_735;
            }
            if (v551 != v560) {
              do {
                if (v550 >= (unsigned __int64)v740_.v741) {
                  goto LABEL_863;
                }
                v565 = v550 + 1;
                *(_DWORD*)(v740_.v743 + 4 * v550++) = v551++;
              } while (v560 != v551);
              v551 = v560;
              v550 = v565;
            }
            v566 = v551 + (int)spine_Json_getInt(v549, (__int64)"offset", 0);
            if (v566 >= v764_.v765) {
            LABEL_863:
              __assert_fail("inIndex < _size",
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            162, "operator[]");
            LABEL_864:
              v740_.v741 = nullptr;
              v740_.v742 = 0;
              spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                                          (__int64)&v740_.v740);
              v740_.v740 = (__int64*)v199;
              goto LABEL_865;
            }
            *(_DWORD*)(v764_.v767 + 4 * v566) = v551++;
            v549 = *(_QWORD*)(v549 + 8);
            if (v549 == 0) {
              v567 = a3;
              v568 = *((unsigned int*)a3 + 20);
              if ((int)v551 >= (int)v568) {
                goto LABEL_720;
              }
              goto LABEL_718;
            }
          }
        }
        LODWORD(v551) = 0;
        v550 = 0;
        v567 = a3;
        v568 = *((unsigned int*)a3 + 20);
        if ((int)v568 > 0) {
          do {
          LABEL_718:
            if (v550 >= (unsigned __int64)v740_.v741) {
              goto LABEL_863;
            }
            *(_DWORD*)(v740_.v743 + 4 * v550++) = v551;
            LODWORD(v551) = v551 + 1;
            v568 = *((unsigned int*)v567 + 20);
          } while ((int)v551 < (int)v568);
        }
      LABEL_720:
        if ((int)v568 >= 1) {
          v569 = v568 - 1;
          do {
            if (v764_.v765 <= v569) {
              goto LABEL_863;
            }
            if (*(_DWORD*)(v764_.v767 + 4 * v569) == -1) {
              if (--v550 >= (unsigned __int64)v740_.v741) {
                goto LABEL_863;
              }
              *(_DWORD*)(v764_.v767 + 4 * v569) =
                  *(_DWORD*)(v740_.v743 + 4 * v550);
            }
            v570 = v569-- + 1;
          } while (v570 > 1);
        }
        v575 = 1;
        v525 = GameData_21326a0[0];
        v576 = v740_.v743;
        v740_.v740 = GameData_21326a0[0] + 2;
        v740_.v741 = nullptr;
        if (v740_.v743 != 0) {
        LABEL_734:
          v577 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v577 +
                                                                40LL))(
              v577, v576, "/Program/Externals/Spine/include\\spine/Vector.h",
              206);
        }
      LABEL_735:
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
        if (v575 == 0) {
          v764_.v764 = v525 + 2;
          v764_.v765 = 0;
          if (v764_.v767 != 0) {
            v665 = *(_QWORD*)GameRoutine_19e10();
            goto LABEL_857;
          }
          goto LABEL_858;
        }
      LABEL_736:
        v578 = spine_Json_getFloat(v523, (__int64)"time", 0x0.0p+0f);
        spine_DrawOrderTimeline_setFrame(v726, v524, (__int64)&v764_.v764,
                                         v578);
        v579 = v764_.v767;
        v764_.v764 = v525 + 2;
        v764_.v765 = 0;
        if (v764_.v767 != 0) {
          v580 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v580 +
                                                                40LL))(
              v580, v579, "/Program/Externals/Spine/include\\spine/Vector.h",
              206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        v523 = *(_QWORD*)(v523 + 8);
        ++v524;
      } while (v523 != 0);
    }
    v593 = v760_.v761;
    if (v760_.v761 != v760_.v762) {
      ++v760_.v761;
      *(_QWORD*)(v760_.v763 + 8 * v593) = v726;
      v599 = v679;
      if (v679 == 0) {
      LABEL_764:
        if (v760_.v761 != 0) {
          goto LABEL_765;
        }
      LABEL_814:
        v600 = v678;
        v601 = 0x0.0p+0f;
      LABEL_815:
        v644 = GameRoutine_4e800(
            104, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
            0x593u);
        v645 = *(const char**)(v600 + 48);
        v646 = v644;
        v647 = GameData_21322b8[0];
        v764_.v764 = GameData_21322b8[0] + 2;
        LOBYTE(v764_.v767) = 1;
        if (v645 != nullptr) {
          v648 = strlen(v645);
          v764_.v765 = v648;
          v649 = GameRoutine_19e10();
          v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                       __int64))(*(_QWORD*)v649 + 24LL))(
              v649, v648 + 1,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
          memcpy(v764_.v766, (__int64)v645, v648 + 1);
        }
        else {
          v764_.v765 = 0;
          v764_.v766 = 0;
        }
        spine_Animation_Animation(v646, (__int64)&v764_.v764, &v760_.v760,
                                  v601);
        v650 = v764_.v766;
        v764_.v764 = v647 + 2;
        if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
          v651 = GameRoutine_19e10();
          (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v651 +
                                                                40LL))(
              v651, v650,
              "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
        goto LABEL_860;
      }
      goto LABEL_787;
    }
    v594 = v760_.v763;
    if ((unsigned int)(int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f) <=
        8) {
      v595 = 8;
    }
    else {
      v595 = (int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f);
    }
    v760_.v762 = v595;
    v596 = GameRoutine_19e10();
    v597 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
        *(_QWORD*)v596 + 32LL))(
        v596, v594, 8LL * v595,
        "/Program/Externals/Spine/include\\spine/Vector.h", 106);
    v598 = v760_.v761;
    v760_.v763 = v597;
    ++v760_.v761;
    *(_QWORD*)(v597 + 8 * v598) = v726;
  }
  v599 = v679;
  if (v679 == 0) {
    goto LABEL_764;
  }
LABEL_787:
  v617 = (_QWORD*)GameRoutine_4e800(
      112, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
      0x578u);
  spine_EventTimeline_EventTimeline(v617, *(int*)(v599 + 28));
  v618 = *(_QWORD*)(v599 + 16);
  if (v618 == 0) {
  LABEL_807:
    v638 = v760_.v761;
    if (v760_.v761 == v760_.v762) {
      v639 = v760_.v763;
      if ((unsigned int)(int)(float)((float)v760_.v761 *
                                     0x1.c000000000000p+0f) <= 8) {
        v640 = 8;
      }
      else {
        v640 = (int)(float)((float)v760_.v761 * 0x1.c000000000000p+0f);
      }
      v760_.v762 = v640;
      v641 = GameRoutine_19e10();
      v642 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
          *(_QWORD*)v641 + 32LL))(
          v641, v639, 8LL * v640,
          "/Program/Externals/Spine/include\\spine/Vector.h", 106);
      v643 = v760_.v761;
      v760_.v763 = v642;
      ++v760_.v761;
      *(_QWORD*)(v642 + 8 * v643) = v617;
      if (v760_.v761 == 0) {
        goto LABEL_814;
      }
    }
    else {
      ++v760_.v761;
      *(_QWORD*)(v760_.v763 + 8 * v638) = v617;
      if (v760_.v761 == 0) {
        goto LABEL_814;
      }
    }
  LABEL_765:
    v600 = v678;
    v601 = 0x0.0p+0f;
    for (ii = 0; ii < v760_.v761; ++ii) {
      v603 = spine_Timeline_getDuration(*(_QWORD**)(v760_.v763 + 8 * ii));
      if (v601 <= v603) {
        v601 = v603;
      }
    }
    goto LABEL_815;
  }
  v619 = 0;
  v620 = GameData_21322b8[0] + 2;
  while (1) {
    v621 = (const char*)spine_Json_getString(v618, (__int64)"name", 0);
    v764_.v764 = v620;
    LOBYTE(v764_.v767) = 1;
    if (v621 != nullptr) {
      v622 = (__int64)v621;
      v623 = strlen(v621);
      v764_.v765 = v623;
      v624 = GameRoutine_19e10();
      v764_.v766 = (*(__int64 (**)(__int64, unsigned __int64, const char*,
                                   __int64))(*(_QWORD*)v624 + 24LL))(
          v624, v623 + 1,
          "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
      memcpy(v764_.v766, v622, v764_.v765 + 1);
    }
    else {
      v764_.v765 = 0;
      v764_.v766 = 0;
    }
    v625 =
        ((__int64 (*)(_QWORD*, __int64**))GameRoutine_3dea0)(a3, &v764_.v764);
    v626 = v764_.v766;
    v764_.v764 = GameData_21322b8[0] + 2;
    if (v764_.v766 != 0 && (v764_.v767 & 1) != 0) {
      v627 = GameRoutine_19e10();
      (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v627 +
                                                            40LL))(
          v627, v626, "/Program/Externals/Spine/include\\spine/SpineString.h",
          206);
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
    if (v625 == 0) {
      break;
    }
    v628 = GameRoutine_4e800(
        72, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
        0x583u);
    v629 = spine_Json_getFloat(v618, (__int64)"time", 0x0.0p+0f);
    spine_Event_Event(v628, v625, v629);
    *(_DWORD*)(v628 + 20) =
        spine_Json_getInt(v618, (__int64)"int", *(_DWORD*)(v625 + 40));
    *(float*)(v628 + 24) =
        spine_Json_getFloat(v618, (__int64)"float", *(float*)(v625 + 44));
    v630 = spine_Json_getString(v618, (__int64)"string", *(_QWORD*)(v625 + 64));
    v631 = *(_QWORD*)(v628 + 48);
    if (v631 != v630) {
      v632 = (const char*)v630;
      if (v631 != 0 && (*(_BYTE*)(v628 + 56) & 1) != 0) {
        v633 = GameRoutine_19e10();
        (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v633 +
                                                              40LL))(
            v633, v631, "/Program/Externals/Spine/include\\spine/SpineString.h",
            135);
      }
      if (v632 == nullptr) {
        *(_QWORD*)(v628 + 40) = 0;
        *(_QWORD*)(v628 + 48) = 0;
        if (*(_QWORD*)(v625 + 88) == 0) {
          goto LABEL_789;
        }
      LABEL_804:
        *(float*)(v628 + 64) =
            spine_Json_getFloat(v618, (__int64)"volume", 0x1.0000000000000p+0f);
        *(float*)(v628 + 68) =
            spine_Json_getFloat(v618, (__int64)"balance", 0x0.0p+0f);
        goto LABEL_789;
      }
      v634 = strlen(v632);
      *(_QWORD*)(v628 + 40) = v634;
      v635 = GameRoutine_19e10();
      v636 = (*(__int64 (**)(__int64, unsigned __int64, const char*, __int64))(
          *(_QWORD*)v635 + 24LL))(
          v635, v634 + 1,
          "/Program/Externals/Spine/include\\spine/SpineString.h", 142);
      v637 = *(_QWORD*)(v628 + 40);
      *(_QWORD*)(v628 + 48) = v636;
      memcpy(v636, (__int64)v632, v637 + 1);
    }
    if (*(_QWORD*)(v625 + 88) != 0) {
      goto LABEL_804;
    }
  LABEL_789:
    spine_EventTimeline_setFrame(v617, v619, v628);
    v618 = *(_QWORD*)(v618 + 8);
    ++v619;
    if (v618 == 0) {
      goto LABEL_807;
    }
  }
  v652 = v760_.v761;
  if ((int)v760_.v761 >= 1) {
    v199 = v760_.v761 & 0x7FFFFFFF;
    do {
      v653 = v199 - 1;
      if (v652 <= v199 - 1) {
        goto LABEL_863;
      }
      v654 = *(_QWORD*)(v760_.v763 + 8 * v653);
      if (v654 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v654 + 8LL))(v654);
        v652 = v760_.v761;
      }
      if (v652 <= v653) {
        goto LABEL_866;
      }
      v760_.v761 = --v652;
      if (v652 > v653) {
        v655 = v199;
        do {
          v656 = (_QWORD*)(v760_.v763 + 8 * v655);
          v657 = *(v656 - 1);
          *(v656 - 1) = *v656;
          *(_QWORD*)(v760_.v763 + 8 * v655) = v657;
          v652 = v760_.v761;
          v351 = v655++ >= v760_.v761;
        } while (!v351);
      }
      v412 = v199-- > 1;
    } while (v412);
  }
  LOBYTE(v764_.v767) = 1;
  v199 = (unsigned __int64)(GameData_21322b8[0] + 2);
  v764_.v764 = GameData_21322b8[0] + 2;
  v764_.v765 = 17;
  v658 = GameRoutine_19e10();
  v764_.v766 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
      *(_QWORD*)v658 + 24LL))(
      v658, 18, "/Program/Externals/Spine/include\\spine/SpineString.h", 53);
  strcpy((char*)v764_.v766, "Event not found: ");
  v659 = (const char*)spine_Json_getString(v618, (__int64)"name", 0);
  v740_.v740 = (__int64*)v199;
  LOBYTE(v740_.v743) = 1;
  if (v659 == nullptr) {
    goto LABEL_864;
  }
  v660 = (__int64)v659;
  v661 = strlen(v659);
  v740_.v741 = (const char*)v661;
  v662 = GameRoutine_19e10();
  v663 = (const char*)(*(__int64 (**)(__int64, unsigned __int64, const char*,
                                      __int64))(*(_QWORD*)v662 + 24LL))(
      v662, v661 + 1, "/Program/Externals/Spine/include\\spine/SpineString.h",
      53);
  v740_.v742 = (__int64)v663;
  memcpy((__int64)v663, v660, v661 + 1);
  spine_SkeletonJson_setError(a1, 0, (__int64)&v764_.v764,
                              (__int64)&v740_.v740);
  v740_.v740 = (__int64*)v199;
  if (v663 != nullptr) {
    v664 = GameRoutine_19e10();
    (*(void (**)(__int64, const char*, const char*, __int64))(*(_QWORD*)v664 +
                                                              40LL))(
        v664, v663, "/Program/Externals/Spine/include\\spine/SpineString.h",
        206);
  }
LABEL_865:
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v740_.v740);
  v764_.v764 = GameData_21322b8[0] + 2;
  v665 = *(_QWORD*)GameRoutine_19e10();
LABEL_857:
  (*(void (**)(void))(v665 + 40))();
LABEL_858:
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v764_.v764);
LABEL_859:
  v646 = 0;
LABEL_860:
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v748_.v748);
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v751_.v751);
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v754_.v754);
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v757_.v757);
  v673 = v760_.v763;
  v760_.v760 = GameData_2132660[0] + 16;
  v760_.v761 = 0;
  if (v760_.v763 != 0) {
    v674 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v674 +
                                                          40LL))(
        v674, v673, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(&v760_.v760);
  return v646;
}

#pragma GCC visibility pop
