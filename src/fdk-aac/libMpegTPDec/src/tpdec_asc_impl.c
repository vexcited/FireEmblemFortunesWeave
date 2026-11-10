#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_3a0840(unsigned int*);
__int64 nn_codec_CProgramConfig_Read_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKcrcEndReg_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKcrcGetCRC_plt(_QWORD);
__int64 nn_codec_FDKcrcInit_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKcrcStartReg_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
extern _DWORD SdkData_c33cc8[16];
extern unsigned int SdkData_c33d88[7];
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CProgramConfig_Read(__int64 a1, int* a2, char a3);
__int64 nn_codec_AudioSpecificConfig_Parse(unsigned __int8* a1,
                                           unsigned int* a2, int a3,
                                           _QWORD* a4);
__int64 nn_codec_getSampleRate(unsigned int* a1, _BYTE* a2);
__int64 nn_codec_DrmRawSdcAudioConfig_Parse(__int64 a1, unsigned int* a2);

__int64 nn_codec_CProgramConfig_Read(__int64 a1, int* a2, char a3)
{
  void(__attribute__((noreturn)) * v5)();
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  unsigned int v117;
  int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  int v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  unsigned int v132;
  int v133;
  unsigned int v134;
  unsigned int v135;
  int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  unsigned int v141;
  int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned __int8* v155;
  unsigned __int64 v156;
  unsigned int v157;
  unsigned int v158;
  unsigned int v159;
  int v160;
  char v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  unsigned int v172;
  unsigned int v173;
  int v174;
  unsigned int v175;
  int v176;
  unsigned __int8* v177;
  unsigned __int64 v178;
  unsigned int v179;
  unsigned int v180;
  unsigned int v181;
  int v182;
  char v183;
  unsigned int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  int v189;
  unsigned int v190;
  unsigned int v191;
  unsigned int v192;
  unsigned int v193;
  unsigned int v194;
  unsigned int v195;
  int v196;
  unsigned int v197;
  int v198;
  unsigned __int8* v199;
  unsigned __int64 v200;
  unsigned int v201;
  unsigned int v202;
  unsigned int v203;
  int v204;
  char v205;
  char v206;
  unsigned __int64 v207;
  unsigned int v208;
  unsigned int v209;
  unsigned int v210;
  unsigned int v211;
  unsigned int v212;
  int v213;
  unsigned int v214;
  unsigned int v215;
  unsigned int v216;
  unsigned int v217;
  unsigned int v218;
  unsigned int v219;
  int v220;
  unsigned int v221;
  int v222;
  unsigned __int64 i;
  unsigned int v224;
  unsigned int v225;
  unsigned int v226;
  unsigned int v227;
  unsigned int v228;
  unsigned int v229;
  unsigned int v230;
  int v231;
  unsigned int v232;
  unsigned __int64 j;
  unsigned int v234;
  unsigned int v235;
  unsigned int v236;
  unsigned int v237;
  unsigned int v238;
  unsigned int v239;
  unsigned int v240;
  int v241;
  unsigned int v242;
  _BYTE* v243;
  unsigned __int64 v244;
  unsigned int v245;
  unsigned int v246;
  unsigned int v247;
  unsigned int v248;
  unsigned int v249;
  unsigned int v250;
  unsigned int v251;
  int v252;
  unsigned int v253;
  unsigned int v254;
  unsigned int v255;
  unsigned int v256;
  unsigned int v257;
  unsigned int v258;
  int v259;
  unsigned int v260;
  unsigned int v261;
  int v262;
  char v263;
  void(__attribute__((noreturn)) * v264)();
  unsigned int v265;
  char v266;
  int v267;
  unsigned int v268;
  unsigned int v269;
  unsigned int v270;
  unsigned int v271;
  unsigned int v272;
  int v273;
  unsigned int v274;
  unsigned int v275;
  unsigned int v276;
  unsigned __int8 v277;
  unsigned int v278;
  int v279;
  unsigned int v280;
  unsigned int v281;
  unsigned int v282;
  unsigned int v283;
  unsigned int v284;
  unsigned int v285;
  int v286;
  unsigned int v287;
  unsigned int v288;
  unsigned int v289;
  unsigned __int64 k;
  unsigned int v291;
  unsigned int v292;
  unsigned int v293;
  unsigned int v294;
  unsigned int v295;
  unsigned int v296;
  unsigned int v297;
  int v298;
  unsigned int v299;
  int v300;
  unsigned int v301;
  unsigned int v302;
  unsigned int v303;
  __int64 v304;
  bool v305;
  unsigned __int64 m;
  unsigned int v307;
  unsigned int v308;
  unsigned int v309;
  unsigned int v310;
  unsigned int v311;
  unsigned int v312;
  unsigned int v313;
  int v314;
  unsigned int v315;
  __int64 v316;
  unsigned __int64 n;
  unsigned int v318;
  unsigned int v319;
  unsigned int v320;
  unsigned int v321;
  unsigned int v322;
  unsigned int v323;
  int v324;
  unsigned int v325;
  unsigned int v326;
  unsigned int v327;
  char v328;
  int v329;
  int v330;
  __int64 v331;
  unsigned int v332;
  unsigned int v333;
  unsigned int v334;
  unsigned int v335;
  unsigned int v336;
  unsigned int v337;
  int v338;
  unsigned int v339;
  unsigned int v340;
  unsigned int v341;
  __int64 result;
  int v343;
  __int64 v344;
  _BYTE* v345;
  unsigned int v346;
  unsigned int v347;
  bool v348;
  unsigned int v349;
  unsigned int v350;
  unsigned int v351;
  unsigned int v352;
  unsigned int v353;
  int v354;
  int v355;
  char v357;
  _QWORD v358[10];

  *(_WORD*)(a1 + 462) = 0;
  v5 = SdkData_e87a50[0];
  v6 = a2[1];
  v7 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0xCLL) + 4);
  if (v6 >= 5) {
    v8 = *a2;
    goto LABEL_55;
  }
  v9 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v9) {
    v10 = v9;
  }
  else {
    v10 = 31 - a2[1];
  }
  v11 = *a2 << v10;
  v12 = nn_codec_FDK_get_plt(a2 + 2, v10);
  v13 = a2[1];
  v8 = v11 | v12;
  *a2 = v11 | v12;
  v6 = v13 + v10;
  if (v6 > 3) {
  LABEL_55:
    v92 = v6 - 4;
    a2[1] = v92;
    v15 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5 + 4);
    *(_BYTE*)a1 = (v8 >> v92) & v7;
    v16 = a2[1];
    if (v16 >= 3) {
      goto LABEL_56;
    }
    goto LABEL_8;
  }
  v14 = v8 << (4 - v6);
  *a2 = v14;
  a2[1] = 0;
  v15 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5 + 4);
  *(_BYTE*)a1 = v14 & v7;
  v16 = a2[1];
  if (v16 >= 3) {
  LABEL_56:
    v22 = *a2;
    goto LABEL_57;
  }
LABEL_8:
  v17 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v17) {
    v18 = v17;
  }
  else {
    v18 = 31 - a2[1];
  }
  v19 = *a2 << v18;
  v20 = nn_codec_FDK_get_plt(a2 + 2, v18);
  v21 = a2[1];
  v22 = v19 | v20;
  *a2 = v19 | v20;
  v16 = v21 + v18;
  if (v16 > 1) {
  LABEL_57:
    v93 = v16 - 2;
    a2[1] = v93;
    *(_BYTE*)(a1 + 1) = (v22 >> v93) & v15;
    v24 = a2[1];
    if (v24 >= 5) {
      goto LABEL_58;
    }
    goto LABEL_13;
  }
  v23 = v22 << (2 - v16);
  *a2 = v23;
  a2[1] = 0;
  *(_BYTE*)(a1 + 1) = v23 & v15;
  v24 = a2[1];
  if (v24 >= 5) {
  LABEL_58:
    v30 = *a2;
    goto LABEL_59;
  }
LABEL_13:
  v25 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v25) {
    v26 = v25;
  }
  else {
    v26 = 31 - a2[1];
  }
  v27 = *a2 << v26;
  v28 = nn_codec_FDK_get_plt(a2 + 2, v26);
  v29 = a2[1];
  v30 = v27 | v28;
  *a2 = v27 | v28;
  v24 = v29 + v26;
  if (v24 > 3) {
  LABEL_59:
    v94 = v24 - 4;
    a2[1] = v94;
    *(_BYTE*)(a1 + 2) = (v30 >> v94) & v7;
    v32 = a2[1];
    if (v32 >= 5) {
      goto LABEL_60;
    }
    goto LABEL_18;
  }
  v31 = v30 << (4 - v24);
  *a2 = v31;
  a2[1] = 0;
  *(_BYTE*)(a1 + 2) = v31 & v7;
  v32 = a2[1];
  if (v32 >= 5) {
  LABEL_60:
    v38 = *a2;
    goto LABEL_61;
  }
LABEL_18:
  v33 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v33) {
    v34 = v33;
  }
  else {
    v34 = 31 - a2[1];
  }
  v35 = *a2 << v34;
  v36 = nn_codec_FDK_get_plt(a2 + 2, v34);
  v37 = a2[1];
  v38 = v35 | v36;
  *a2 = v35 | v36;
  v32 = v37 + v34;
  if (v32 > 3) {
  LABEL_61:
    v95 = v32 - 4;
    a2[1] = v95;
    *(_BYTE*)(a1 + 3) = (v38 >> v95) & v7;
    v40 = a2[1];
    if (v40 >= 5) {
      goto LABEL_62;
    }
    goto LABEL_23;
  }
  v39 = v38 << (4 - v32);
  *a2 = v39;
  a2[1] = 0;
  *(_BYTE*)(a1 + 3) = v39 & v7;
  v40 = a2[1];
  if (v40 >= 5) {
  LABEL_62:
    v46 = *a2;
    goto LABEL_63;
  }
LABEL_23:
  v41 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v41) {
    v42 = v41;
  }
  else {
    v42 = 31 - a2[1];
  }
  v43 = *a2 << v42;
  v44 = nn_codec_FDK_get_plt(a2 + 2, v42);
  v45 = a2[1];
  v46 = v43 | v44;
  *a2 = v43 | v44;
  v40 = v45 + v42;
  if (v40 > 3) {
  LABEL_63:
    v96 = v40 - 4;
    a2[1] = v96;
    *(_BYTE*)(a1 + 4) = (v46 >> v96) & v7;
    v48 = a2[1];
    if (v48 >= 5) {
      goto LABEL_64;
    }
    goto LABEL_28;
  }
  v47 = v46 << (4 - v40);
  *a2 = v47;
  a2[1] = 0;
  *(_BYTE*)(a1 + 4) = v47 & v7;
  v48 = a2[1];
  if (v48 >= 5) {
  LABEL_64:
    v54 = *a2;
    goto LABEL_65;
  }
LABEL_28:
  v49 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v49) {
    v50 = v49;
  }
  else {
    v50 = 31 - a2[1];
  }
  v51 = *a2 << v50;
  v52 = nn_codec_FDK_get_plt(a2 + 2, v50);
  v53 = a2[1];
  v54 = v51 | v52;
  *a2 = v51 | v52;
  v48 = v53 + v50;
  if (v48 > 3) {
  LABEL_65:
    v97 = v48 - 4;
    a2[1] = v97;
    *(_BYTE*)(a1 + 5) = (v54 >> v97) & v7;
    v56 = a2[1];
    if (v56 >= 3) {
      goto LABEL_66;
    }
    goto LABEL_33;
  }
  v55 = v54 << (4 - v48);
  *a2 = v55;
  a2[1] = 0;
  *(_BYTE*)(a1 + 5) = v55 & v7;
  v56 = a2[1];
  if (v56 >= 3) {
  LABEL_66:
    v62 = *a2;
    goto LABEL_67;
  }
LABEL_33:
  v57 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v57) {
    v58 = v57;
  }
  else {
    v58 = 31 - a2[1];
  }
  v59 = *a2 << v58;
  v60 = nn_codec_FDK_get_plt(a2 + 2, v58);
  v61 = a2[1];
  v62 = v59 | v60;
  *a2 = v59 | v60;
  v56 = v61 + v58;
  if (v56 > 1) {
  LABEL_67:
    v98 = v56 - 2;
    a2[1] = v98;
    v64 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v5);
    *(_BYTE*)(a1 + 6) = (v62 >> v98) & v15;
    v65 = a2[1];
    if (v65 >= 4) {
      goto LABEL_68;
    }
    goto LABEL_38;
  }
  v63 = v62 << (2 - v56);
  *a2 = v63;
  a2[1] = 0;
  v64 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v5);
  *(_BYTE*)(a1 + 6) = v63 & v15;
  v65 = a2[1];
  if (v65 >= 4) {
  LABEL_68:
    v71 = *a2;
    goto LABEL_69;
  }
LABEL_38:
  v66 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v66) {
    v67 = v66;
  }
  else {
    v67 = 31 - a2[1];
  }
  v68 = *a2 << v67;
  v69 = nn_codec_FDK_get_plt(a2 + 2, v67);
  v70 = a2[1];
  v71 = v68 | v69;
  *a2 = v68 | v69;
  v65 = v70 + v67;
  if (v65 > 2) {
  LABEL_69:
    v99 = v65 - 3;
    a2[1] = v99;
    *(_BYTE*)(a1 + 7) = (v71 >> v99) & v64;
    v73 = a2[1];
    if (v73 >= 5) {
      goto LABEL_70;
    }
    goto LABEL_43;
  }
  v72 = v71 << (3 - v65);
  *a2 = v72;
  a2[1] = 0;
  *(_BYTE*)(a1 + 7) = v72 & v64;
  v73 = a2[1];
  if (v73 >= 5) {
  LABEL_70:
    v79 = *a2;
    goto LABEL_71;
  }
LABEL_43:
  v74 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v74) {
    v75 = v74;
  }
  else {
    v75 = 31 - a2[1];
  }
  v76 = *a2 << v75;
  v77 = nn_codec_FDK_get_plt(a2 + 2, v75);
  v78 = a2[1];
  v79 = v76 | v77;
  *a2 = v76 | v77;
  v73 = v78 + v75;
  if (v73 > 3) {
  LABEL_71:
    v100 = v73 - 4;
    a2[1] = v100;
    v81 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5);
    *(_BYTE*)(a1 + 8) = (v79 >> v100) & v7;
    v82 = a2[1];
    if (v82 >= 2) {
      goto LABEL_72;
    }
    goto LABEL_48;
  }
  v80 = v79 << (4 - v73);
  *a2 = v80;
  a2[1] = 0;
  v81 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5);
  *(_BYTE*)(a1 + 8) = v80 & v7;
  v82 = a2[1];
  if (v82 >= 2) {
  LABEL_72:
    v88 = *a2;
    goto LABEL_73;
  }
LABEL_48:
  v83 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v83) {
    v84 = v83;
  }
  else {
    v84 = 31 - a2[1];
  }
  v85 = *a2 << v84;
  v86 = nn_codec_FDK_get_plt(a2 + 2, v84);
  v87 = a2[1];
  v88 = v85 | v86;
  *a2 = v85 | v86;
  v82 = v87 + v84;
  if (v82 == 0) {
    v89 = 2 * v88;
    *a2 = v89;
    a2[1] = 0;
    LOBYTE(v89) = v89 & v81;
    *(_BYTE*)(a1 + 9) = v89;
    if ((_BYTE)v89 != 0) {
      goto LABEL_74;
    }
  LABEL_53:
    v90 = a2[1];
    if (v90 < 2) {
      goto LABEL_83;
    }
    goto LABEL_54;
  }
LABEL_73:
  v101 = v82 - 1;
  a2[1] = v101;
  v102 = (v88 >> v101) & v81;
  *(_BYTE*)(a1 + 9) = v102;
  if ((_BYTE)v102 == 0) {
    goto LABEL_53;
  }
LABEL_74:
  v103 = a2[1];
  if (v103 >= 5) {
    v104 = *a2;
    goto LABEL_82;
  }
  v105 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v105) {
    v106 = v105;
  }
  else {
    v106 = 31 - a2[1];
  }
  v107 = *a2 << v106;
  v108 = nn_codec_FDK_get_plt(a2 + 2, v106);
  v109 = a2[1];
  v104 = v107 | v108;
  *a2 = v107 | v108;
  v103 = v109 + v106;
  if (v103 > 3) {
  LABEL_82:
    v111 = v103 - 4;
    a2[1] = v111;
    *(_BYTE*)(a1 + 10) = (v104 >> v111) & v7;
    v90 = a2[1];
    if (v90 < 2) {
      goto LABEL_83;
    }
  LABEL_54:
    v91 = *a2;
    goto LABEL_87;
  }
  v110 = v104 << (4 - v103);
  *a2 = v110;
  a2[1] = 0;
  *(_BYTE*)(a1 + 10) = v110 & v7;
  v90 = a2[1];
  if (v90 >= 2) {
    goto LABEL_54;
  }
LABEL_83:
  v112 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v112) {
    v113 = v112;
  }
  else {
    v113 = 31 - a2[1];
  }
  v114 = *a2 << v113;
  v115 = nn_codec_FDK_get_plt(a2 + 2, v113);
  v116 = a2[1];
  v91 = v114 | v115;
  *a2 = v114 | v115;
  v90 = v116 + v113;
  if (v90 != 0) {
  LABEL_87:
    v117 = v90 - 1;
    a2[1] = v117;
    v118 = (v91 >> v117) & v81;
    *(_BYTE*)(a1 + 11) = v118;
    if ((_BYTE)v118 == 0) {
      goto LABEL_97;
    }
  LABEL_88:
    v119 = a2[1];
    if (v119 < 5) {
      v121 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v121) {
        v122 = v121;
      }
      else {
        v122 = 31 - a2[1];
      }
      v123 = *a2 << v122;
      v124 = nn_codec_FDK_get_plt(a2 + 2, v122);
      v125 = a2[1];
      v120 = v123 | v124;
      *a2 = v123 | v124;
      v119 = v125 + v122;
      if (v119 <= 3) {
        v126 = v120 << (4 - v119);
        *(_QWORD*)a2 = v126;
      LABEL_96:
        *(_BYTE*)(a1 + 12) = v126 & v7;
        goto LABEL_97;
      }
    }
    else {
      v120 = *a2;
    }
    v127 = v119 - 4;
    a2[1] = v127;
    v126 = v120 >> v127;
    goto LABEL_96;
  }
  v329 = 2 * v91;
  *a2 = v329;
  a2[1] = 0;
  LOBYTE(v329) = v329 & v81;
  *(_BYTE*)(a1 + 11) = v329;
  if ((_BYTE)v329 != 0) {
    goto LABEL_88;
  }
LABEL_97:
  v128 = a2[1];
  if (v128 >= 2) {
    v129 = *a2;
    goto LABEL_103;
  }
  v130 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v130) {
    v131 = v130;
  }
  else {
    v131 = 31 - a2[1];
  }
  v132 = *a2 << v131;
  v133 = nn_codec_FDK_get_plt(a2 + 2, v131);
  v134 = a2[1];
  v129 = v132 | v133;
  *a2 = v132 | v133;
  v128 = v134 + v131;
  if (v128 != 0) {
  LABEL_103:
    v135 = v128 - 1;
    a2[1] = v135;
    v136 = (v129 >> v135) & v81;
    *(_BYTE*)(a1 + 13) = v136;
    if ((_BYTE)v136 == 0) {
      goto LABEL_120;
    }
  LABEL_104:
    v137 = a2[1];
    if (v137 < 3) {
      v139 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v139) {
        v140 = v139;
      }
      else {
        v140 = 31 - a2[1];
      }
      v141 = *a2 << v140;
      v142 = nn_codec_FDK_get_plt(a2 + 2, v140);
      v143 = a2[1];
      v138 = v141 | v142;
      *a2 = v141 | v142;
      v137 = v143 + v140;
      if (v137 <= 1) {
        v144 = v138 << (2 - v137);
        *a2 = v144;
        a2[1] = 0;
        *(_BYTE*)(a1 + 14) = v144 & v15;
        v145 = a2[1];
        if (v145 >= 2) {
        LABEL_117:
          v151 = *a2;
          goto LABEL_118;
        }
      LABEL_111:
        v146 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v146) {
          v147 = v146;
        }
        else {
          v147 = 31 - a2[1];
        }
        v148 = *a2 << v147;
        v149 = nn_codec_FDK_get_plt(a2 + 2, v147);
        v150 = a2[1];
        v151 = v148 | v149;
        *a2 = v148 | v149;
        v145 = v150 + v147;
        if (v145 == 0) {
          v152 = 2 * v151;
          *(_QWORD*)a2 = v152;
        LABEL_119:
          *(_BYTE*)(a1 + 15) = v152 & v81;
          goto LABEL_120;
        }
      LABEL_118:
        v154 = v145 - 1;
        a2[1] = v154;
        v152 = v151 >> v154;
        goto LABEL_119;
      }
    }
    else {
      v138 = *a2;
    }
    v153 = v137 - 2;
    a2[1] = v153;
    *(_BYTE*)(a1 + 14) = (v138 >> v153) & v15;
    v145 = a2[1];
    if (v145 >= 2) {
      goto LABEL_117;
    }
    goto LABEL_111;
  }
  v330 = 2 * v129;
  *a2 = v330;
  a2[1] = 0;
  LOBYTE(v330) = v330 & v81;
  *(_BYTE*)(a1 + 13) = v330;
  if ((_BYTE)v330 != 0) {
    goto LABEL_104;
  }
LABEL_120:
  v357 = v15;
  if (*(_BYTE*)(a1 + 3) != 0) {
    v155 = (unsigned __int8*)(a1 + 16);
    v156 = 0;
    while (1) {
      v162 = a2[1];
      if (v162 >= 2) {
        break;
      }
      v164 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v164) {
        v165 = v164;
      }
      else {
        v165 = 31 - a2[1];
      }
      v166 = *a2 << v165;
      v167 = nn_codec_FDK_get_plt(a2 + 2, v165);
      v168 = a2[1];
      v163 = v166 | v167;
      *a2 = v166 | v167;
      v162 = v168 + v165;
      if (v162 != 0) {
        goto LABEL_134;
      }
      v176 = 2 * v163;
      *a2 = v176;
      a2[1] = 0;
      *v155 = v176 & v81;
      v170 = a2[1];
      if (v170 >= 5) {
      LABEL_122:
        v157 = *a2;
        goto LABEL_123;
      }
    LABEL_135:
      v171 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v171) {
        v172 = v171;
      }
      else {
        v172 = 31 - a2[1];
      }
      v173 = *a2 << v172;
      v174 = nn_codec_FDK_get_plt(a2 + 2, v172);
      v175 = a2[1];
      v157 = v173 | v174;
      *a2 = v173 | v174;
      v170 = v175 + v172;
      if (v170 <= 3) {
        v159 = v157 << (4 - v170);
        *(_QWORD*)a2 = v159;
        goto LABEL_124;
      }
    LABEL_123:
      v158 = v170 - 4;
      a2[1] = v158;
      v159 = v157 >> v158;
    LABEL_124:
      ++v156;
      v155[16] = v159 & v7;
      v160 = *v155++;
      if (v160 != 0) {
        v161 = 2;
      }
      else {
        v161 = 1;
      }
      *(_BYTE*)(a1 + 462) += v161;
      if (v156 >= *(unsigned __int8*)(a1 + 3)) {
        goto LABEL_142;
      }
    }
    v163 = *a2;
  LABEL_134:
    v169 = v162 - 1;
    a2[1] = v169;
    *v155 = (v163 >> v169) & v81;
    v170 = a2[1];
    if (v170 >= 5) {
      goto LABEL_122;
    }
    goto LABEL_135;
  }
LABEL_142:
  if (*(_BYTE*)(a1 + 4) != 0) {
    v177 = (unsigned __int8*)(a1 + 64);
    v178 = 0;
    while (1) {
      v184 = a2[1];
      if (v184 >= 2) {
        break;
      }
      v186 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v186) {
        v187 = v186;
      }
      else {
        v187 = 31 - a2[1];
      }
      v188 = *a2 << v187;
      v189 = nn_codec_FDK_get_plt(a2 + 2, v187);
      v190 = a2[1];
      v185 = v188 | v189;
      *a2 = v188 | v189;
      v184 = v190 + v187;
      if (v184 != 0) {
        goto LABEL_156;
      }
      v198 = 2 * v185;
      *a2 = v198;
      a2[1] = 0;
      *v177 = v198 & v81;
      v192 = a2[1];
      if (v192 >= 5) {
      LABEL_144:
        v179 = *a2;
        goto LABEL_145;
      }
    LABEL_157:
      v193 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v193) {
        v194 = v193;
      }
      else {
        v194 = 31 - a2[1];
      }
      v195 = *a2 << v194;
      v196 = nn_codec_FDK_get_plt(a2 + 2, v194);
      v197 = a2[1];
      v179 = v195 | v196;
      *a2 = v195 | v196;
      v192 = v197 + v194;
      if (v192 <= 3) {
        v181 = v179 << (4 - v192);
        *(_QWORD*)a2 = v181;
        goto LABEL_146;
      }
    LABEL_145:
      v180 = v192 - 4;
      a2[1] = v180;
      v181 = v179 >> v180;
    LABEL_146:
      ++v178;
      v177[16] = v181 & v7;
      v182 = *v177++;
      if (v182 != 0) {
        v183 = 2;
      }
      else {
        v183 = 1;
      }
      *(_BYTE*)(a1 + 462) += v183;
      if (v178 >= *(unsigned __int8*)(a1 + 4)) {
        goto LABEL_164;
      }
    }
    v185 = *a2;
  LABEL_156:
    v191 = v184 - 1;
    a2[1] = v191;
    *v177 = (v185 >> v191) & v81;
    v192 = a2[1];
    if (v192 >= 5) {
      goto LABEL_144;
    }
    goto LABEL_157;
  }
LABEL_164:
  if (*(_BYTE*)(a1 + 5) != 0) {
    v199 = (unsigned __int8*)(a1 + 112);
    v200 = 0;
    while (1) {
      v208 = a2[1];
      if (v208 >= 2) {
        break;
      }
      v210 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v210) {
        v211 = v210;
      }
      else {
        v211 = 31 - a2[1];
      }
      v212 = *a2 << v211;
      v213 = nn_codec_FDK_get_plt(a2 + 2, v211);
      v214 = a2[1];
      v209 = v212 | v213;
      *a2 = v212 | v213;
      v208 = v214 + v211;
      if (v208 != 0) {
        goto LABEL_178;
      }
      v222 = 2 * v209;
      *a2 = v222;
      a2[1] = 0;
      *v199 = v222 & v81;
      v216 = a2[1];
      if (v216 >= 5) {
      LABEL_166:
        v201 = *a2;
        goto LABEL_167;
      }
    LABEL_179:
      v217 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v217) {
        v218 = v217;
      }
      else {
        v218 = 31 - a2[1];
      }
      v219 = *a2 << v218;
      v220 = nn_codec_FDK_get_plt(a2 + 2, v218);
      v221 = a2[1];
      v201 = v219 | v220;
      *a2 = v219 | v220;
      v216 = v221 + v218;
      if (v216 <= 3) {
        v203 = v201 << (4 - v216);
        *(_QWORD*)a2 = v203;
        goto LABEL_168;
      }
    LABEL_167:
      v202 = v216 - 4;
      a2[1] = v202;
      v203 = v201 >> v202;
    LABEL_168:
      ++v200;
      v199[16] = v203 & v7;
      v204 = *v199++;
      if (v204 != 0) {
        v205 = 2;
      }
      else {
        v205 = 1;
      }
      v206 = v205 + *(_BYTE*)(a1 + 462);
      v207 = *(unsigned __int8*)(a1 + 5);
      *(_BYTE*)(a1 + 462) = v206;
      if (v200 >= v207) {
        goto LABEL_187;
      }
    }
    v209 = *a2;
  LABEL_178:
    v215 = v208 - 1;
    a2[1] = v215;
    *v199 = (v209 >> v215) & v81;
    v216 = a2[1];
    if (v216 >= 5) {
      goto LABEL_166;
    }
    goto LABEL_179;
  }
  v206 = *(_BYTE*)(a1 + 462);
LABEL_187:
  *(_BYTE*)(a1 + 463) = v206;
  if (*(_BYTE*)(a1 + 6) != 0) {
    for (i = 0; i < *(unsigned __int8*)(a1 + 6); ++i) {
      v227 = a2[1];
      if (v227 >= 5) {
        v224 = *a2;
      }
      else {
        v228 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v228) {
          v229 = v228;
        }
        else {
          v229 = 31 - a2[1];
        }
        v230 = *a2 << v229;
        v231 = nn_codec_FDK_get_plt(a2 + 2, v229);
        v232 = a2[1];
        v224 = v230 | v231;
        *a2 = v230 | v231;
        v227 = v232 + v229;
        if (v227 <= 3) {
          v226 = v224 << (4 - v227);
          *(_QWORD*)a2 = v226;
          goto LABEL_191;
        }
      }
      v225 = v227 - 4;
      a2[1] = v225;
      v226 = v224 >> v225;
    LABEL_191:
      *(_BYTE*)(a1 + 160 + i) = v226 & v7;
      ++*(_BYTE*)(a1 + 462);
    }
  }
  if (*(_BYTE*)(a1 + 7) != 0) {
    for (j = 0; j < *(unsigned __int8*)(a1 + 7); ++j) {
      v237 = a2[1];
      if (v237 >= 5) {
        v234 = *a2;
      }
      else {
        v238 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v238) {
          v239 = v238;
        }
        else {
          v239 = 31 - a2[1];
        }
        v240 = *a2 << v239;
        v241 = nn_codec_FDK_get_plt(a2 + 2, v239);
        v242 = a2[1];
        v234 = v240 | v241;
        *a2 = v240 | v241;
        v237 = v242 + v239;
        if (v237 <= 3) {
          v236 = v234 << (4 - v237);
          *(_QWORD*)a2 = v236;
          goto LABEL_202;
        }
      }
      v235 = v237 - 4;
      a2[1] = v235;
      v236 = v234 >> v235;
    LABEL_202:
      *(_BYTE*)(a1 + 164 + j) = v236 & v7;
    }
  }
  if (*(_BYTE*)(a1 + 8) != 0) {
    v243 = (_BYTE*)(a1 + 188);
    v244 = 0;
    while (1) {
      v247 = a2[1];
      if (v247 >= 2) {
        break;
      }
      v249 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v249) {
        v250 = v249;
      }
      else {
        v250 = 31 - a2[1];
      }
      v251 = *a2 << v250;
      v252 = nn_codec_FDK_get_plt(a2 + 2, v250);
      v253 = a2[1];
      v248 = v251 | v252;
      *a2 = v251 | v252;
      v247 = v253 + v250;
      if (v247 != 0) {
      LABEL_219:
        v254 = v247 - 1;
        a2[1] = v254;
        *(v243 - 16) = (v248 >> v254) & v81;
        v255 = a2[1];
        if (v255 < 5) {
          goto LABEL_220;
        }
      LABEL_211:
        v245 = *a2;
      LABEL_212:
        v246 = v255 - 4;
        a2[1] = v246;
        ++v244;
        *v243++ = (v245 >> v246) & v7;
        if (v244 >= *(unsigned __int8*)(a1 + 8)) {
          goto LABEL_228;
        }
      }
      else {
        v262 = 2 * v248;
        *a2 = v262;
        a2[1] = 0;
        *(v243 - 16) = v262 & v81;
        v255 = a2[1];
        if (v255 >= 5) {
          goto LABEL_211;
        }
      LABEL_220:
        v256 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v256) {
          v257 = v256;
        }
        else {
          v257 = 31 - a2[1];
        }
        v258 = *a2 << v257;
        v259 = nn_codec_FDK_get_plt(a2 + 2, v257);
        v260 = a2[1];
        v245 = v258 | v259;
        *a2 = v258 | v259;
        v255 = v260 + v257;
        if (v255 > 3) {
          goto LABEL_212;
        }
        v261 = v245 << (4 - v255);
        *a2 = v261;
        a2[1] = 0;
        ++v244;
        *v243++ = v261 & v7;
        if (v244 >= *(unsigned __int8*)(a1 + 8)) {
          goto LABEL_228;
        }
      }
    }
    v248 = *a2;
    goto LABEL_219;
  }
LABEL_228:
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, (unsigned int)a2[1], 0);
  }
  v263 = v357;
  v264 = SdkData_e87a50[0];
  v265 = a2[12];
  *(_QWORD*)a2 = 0;
  v266 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v265 != 0) {
    nn_codec_FDK_put_plt(a2 + 2, 0);
    v267 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v264];
    v268 = a2[1];
    if (v268 >= 9) {
    LABEL_233:
      v269 = *a2;
      goto LABEL_240;
    }
  }
  else {
    nn_codec_FDK_pushForward_plt(a2 + 2, (v266 - a3) & 7, (unsigned int)a2[12]);
    v267 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v264];
    v268 = a2[1];
    if (v268 >= 9) {
      goto LABEL_233;
    }
  }
  v270 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v270) {
    v271 = v270;
  }
  else {
    v271 = 31 - a2[1];
  }
  v272 = *a2 << v271;
  v273 = nn_codec_FDK_get_plt(a2 + 2, v271);
  v274 = a2[1];
  v269 = v272 | v273;
  *a2 = v272 | v273;
  v268 = v274 + v271;
  if (v268 <= 7) {
    v275 = v269 << (8 - v268);
    *(_QWORD*)a2 = v275;
    goto LABEL_241;
  }
LABEL_240:
  v276 = v268 - 8;
  a2[1] = v276;
  v275 = v269 >> v276;
LABEL_241:
  v277 = v275 & v267;
  memset(v358, 0, sizeof(v358));
  *(_BYTE*)(a1 + 204) = v275 & v267;
  nn_codec_FDKcrcInit_plt(v358, 7, 255, 8);
  v278 = nn_codec_FDKcrcStartReg_plt(v358, a2, 0);
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, (unsigned int)a2[1], 0);
  }
  v279 = v277;
  *(_QWORD*)a2 = 0;
  v280 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (v280 < 0x18 || v277 < 3u) {
    goto LABEL_253;
  }
  v281 = a2[1];
  if (v281 < 9) {
    v283 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v283) {
      v284 = v283;
    }
    else {
      v284 = 31 - a2[1];
    }
    v285 = *a2 << v284;
    v286 = nn_codec_FDK_get_plt(a2 + 2, v284);
    v287 = a2[1];
    v282 = v285 | v286;
    *a2 = v285 | v286;
    v281 = v287 + v284;
    if (v281 <= 7) {
      v288 = v282 << (8 - v281);
      *a2 = v288;
      a2[1] = 0;
      if ((v288 & v267) == 0xAC) {
        goto LABEL_256;
      }
      goto LABEL_253;
    }
  }
  else {
    v282 = *a2;
  }
  v289 = v281 - 8;
  a2[1] = v289;
  if (((v282 >> v289) & v267) == 0xAC) {
  LABEL_256:
    v355 = v279;
    if (*(_BYTE*)(a1 + 3) != 0) {
      for (k = 0; k < *(unsigned __int8*)(a1 + 3); ++k) {
        v294 = a2[1];
        if (v294 >= 3) {
          v291 = *a2;
        }
        else {
          v295 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v295) {
            v296 = v295;
          }
          else {
            v296 = 31 - a2[1];
          }
          v297 = *a2 << v296;
          v298 = nn_codec_FDK_get_plt(a2 + 2, v296);
          v299 = a2[1];
          v291 = v297 | v298;
          *a2 = v297 | v298;
          v294 = v299 + v296;
          if (v294 <= 1) {
            v263 = v357;
            v293 = v291 << (2 - v294);
            *(_QWORD*)a2 = v293;
            goto LABEL_260;
          }
          v263 = v357;
        }
        v292 = v294 - 2;
        v293 = v291 >> v292;
        a2[1] = v292;
      LABEL_260:
        *(_BYTE*)(a1 + 48 + k) = v293 & v263;
      }
    }
    if (*(_BYTE*)(a1 + 4) != 0) {
      for (m = 0; m < *(unsigned __int8*)(a1 + 4); ++m) {
        v310 = a2[1];
        if (v310 >= 3) {
          v307 = *a2;
        }
        else {
          v311 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v311) {
            v312 = v311;
          }
          else {
            v312 = 31 - a2[1];
          }
          v313 = *a2 << v312;
          v314 = nn_codec_FDK_get_plt(a2 + 2, v312);
          v315 = a2[1];
          v307 = v313 | v314;
          *a2 = v313 | v314;
          v310 = v315 + v312;
          if (v310 <= 1) {
            v263 = v357;
            v309 = v307 << (2 - v310);
            *(_QWORD*)a2 = v309;
            goto LABEL_279;
          }
          v263 = v357;
        }
        v308 = v310 - 2;
        v309 = v307 >> v308;
        a2[1] = v308;
      LABEL_279:
        *(_BYTE*)(a1 + 96 + m) = v309 & v263;
      }
    }
    if (*(_BYTE*)(a1 + 5) != 0) {
      v316 = a1 + 144;
      for (n = 0; n < *(unsigned __int8*)(a1 + 5); ++n) {
        while (1) {
          v320 = a2[1];
          if (v320 < 3) {
            break;
          }
          v318 = *a2;
        LABEL_290:
          v319 = v320 - 2;
          a2[1] = v319;
          *(_BYTE*)(v316 + n++) = (v318 >> v319) & v263;
          if (n >= *(unsigned __int8*)(a1 + 5)) {
            goto LABEL_299;
          }
        }
        v321 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v321) {
          v322 = v321;
        }
        else {
          v322 = 31 - a2[1];
        }
        v323 = *a2 << v322;
        v324 = nn_codec_FDK_get_plt(a2 + 2, v322);
        v325 = a2[1];
        v318 = v323 | v324;
        *a2 = v323 | v324;
        v320 = v325 + v322;
        if (v320 > 1) {
          v263 = v357;
          goto LABEL_290;
        }
        v263 = v357;
        v326 = v318 << (2 - v320);
        *a2 = v326;
        a2[1] = 0;
        *(_BYTE*)(v316 + n) = v326 & v357;
      }
    }
  LABEL_299:
    if (a2[12] != 0) {
      nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
      v279 = v355;
      v327 = a2[12];
      *(_QWORD*)a2 = 0;
      v328 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (v327 != 0) {
      LABEL_301:
        nn_codec_FDK_put_plt(a2 + 2, 0);
        goto LABEL_311;
      }
    }
    else {
      nn_codec_FDK_pushBack_plt(a2 + 2, (unsigned int)a2[1], 0);
      v279 = v355;
      v332 = a2[12];
      *(_QWORD*)a2 = 0;
      v328 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (v332 != 0) {
        goto LABEL_301;
      }
    }
    nn_codec_FDK_pushForward_plt(a2 + 2, (v328 - a3) & 7, (unsigned int)a2[12]);
  LABEL_311:
    nn_codec_FDKcrcEndReg_plt(v358, a2, v278);
    v333 = a2[1];
    if (v333 < 9) {
      v335 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v335) {
        v336 = v335;
      }
      else {
        v336 = 31 - a2[1];
      }
      v337 = *a2 << v336;
      v338 = nn_codec_FDK_get_plt(a2 + 2, v336);
      v339 = a2[1];
      v334 = v337 | v338;
      *a2 = v337 | v338;
      v333 = v339 + v336;
      if (v333 <= 7) {
        v340 = v334 << (8 - v333);
        *(_QWORD*)a2 = v340;
        goto LABEL_319;
      }
    }
    else {
      v334 = *a2;
    }
    v341 = v333 - 8;
    a2[1] = v341;
    v340 = v334 >> v341;
  LABEL_319:
    v305 = (unsigned __int16)nn_codec_FDKcrcGetCRC_plt(v358) ==
           (v340 & (unsigned __int16)v267);
    if (a2[12] == 0) {
      goto LABEL_320;
    }
  LABEL_308:
    nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
    goto LABEL_321;
  }
LABEL_253:
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, (unsigned int)a2[1], 0);
  }
  *(_QWORD*)a2 = 0;
  v300 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  v301 = a2[1];
  v302 = a2[12];
  v303 = v280 - v300;
  v304 = v301 + v280 - v300;
  if ((unsigned int)v304 <= 0x1F) {
    if (v302 == 0) {
      a2[1] = v304;
      nn_codec_FDK_pushBack_plt(a2 + 2, v304, 0);
      *(_QWORD*)a2 = 0;
      v305 = true;
      if (a2[12] == 0) {
        goto LABEL_320;
      }
      goto LABEL_308;
    }
  }
  else if (v302 == 0) {
    nn_codec_FDK_pushBack_plt(a2 + 2, v301, 0);
  LABEL_307:
    v331 = (unsigned int)a2[12];
    *(_QWORD*)a2 = 0;
    nn_codec_FDK_pushBack_plt(a2 + 2, v303, v331);
    v305 = true;
    if (a2[12] != 0) {
      goto LABEL_308;
    }
  LABEL_320:
    nn_codec_FDK_pushBack_plt(a2 + 2, (unsigned int)a2[1], 0);
  LABEL_321:
    *(_QWORD*)a2 = 0;
    result = nn_codec_FDK_getValidBits_plt(a2 + 2);
    v343 = v279 - ((v280 - (unsigned int)result) >> 3);
    if (v343 >= 1) {
      v344 = -(__int64)(unsigned int)v343;
      v345 = (_BYTE*)(a1 + 205);
      do {
        while (1) {
          v349 = a2[1];
          if (v349 < 9) {
            break;
          }
          v346 = *a2;
        LABEL_324:
          v347 = v349 - 8;
          a2[1] = v347;
          v348 = __CFADD__(v344++, 1);
          *v345++ = (v346 >> v347) & v267;
          if (v348) {
            goto LABEL_332;
          }
        }
        v350 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v350) {
          v351 = v350;
        }
        else {
          v351 = 31 - a2[1];
        }
        v352 = *a2 << v351;
        result = nn_codec_FDK_get_plt(a2 + 2, v351);
        v353 = a2[1];
        v346 = v352 | result;
        *a2 = v352 | result;
        v349 = v353 + v351;
        if (v349 > 7) {
          goto LABEL_324;
        }
        v354 = v346 << (8 - v349);
        *a2 = v354;
        a2[1] = 0;
        v348 = __CFADD__(v344++, 1);
        *v345++ = v354 & v267;
      } while (!v348);
    }
  LABEL_332:
    *(_BYTE*)(a1 + 461) = v305;
    return result;
  }
  nn_codec_FDK_put_plt(a2 + 2, (unsigned int)*a2);
  goto LABEL_307;
}

__int64 nn_codec_AudioSpecificConfig_Parse(unsigned __int8* a1,
                                           unsigned int* a2, int a3, _QWORD* a4)
{
  unsigned int v8;
  int v9;
  void(__attribute__((noreturn)) * v10)();
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  __int64 result;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  void (*v37)(_QWORD, unsigned int*, __int64, _QWORD, __int64, _QWORD);
  int v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  unsigned int v89;
  int v90;
  int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned __int8 v120;
  int v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  int v154;
  unsigned int v155;
  unsigned int v156;
  unsigned int v157;
  int v158;
  int v159;
  int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  int v171;
  unsigned int v172;
  unsigned int v173;
  unsigned int v174;
  int v175;
  unsigned int v176;
  unsigned int v177;
  unsigned int v178;
  unsigned int v179;
  int v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  int v189;
  unsigned int v190;
  unsigned int v191;
  unsigned int v192;
  int v193;
  unsigned int v194;
  unsigned int v195;
  unsigned __int8 v196;
  unsigned int v197;
  unsigned int v198;
  unsigned int v199;
  unsigned int v200;
  unsigned int v201;
  int v202;
  unsigned int v203;
  unsigned int v204;
  unsigned int v205;
  unsigned int v206;
  int v207;
  int v208;
  unsigned int v209;
  unsigned int v210;
  unsigned int v211;
  int v212;
  unsigned int v213;
  unsigned int v214;
  unsigned int v215;
  int v216;
  __int64 (*v217)(__int64, unsigned int*);
  unsigned int v218;
  __int64 v219;
  int v220;
  int v221;
  __int64 v222;
  int v223;
  int v224;
  int v225;
  unsigned int v226;
  int v227;
  int v228;
  unsigned int v229;
  unsigned int v230;
  unsigned int v231;
  unsigned int v232;
  unsigned int v233;
  int v234;
  unsigned int v235;
  unsigned int v236;
  unsigned int v237;
  unsigned int v238;
  unsigned int v239;
  unsigned int v240;
  int v241;
  unsigned int v242;
  unsigned int v243;
  int v244;
  unsigned int v245;
  unsigned int v246;
  unsigned int v247;
  int v248;
  unsigned int v249;
  unsigned int v250;
  int v251;
  unsigned int v252;
  unsigned int v253;
  unsigned int v254;
  int v255;
  unsigned int v256;
  unsigned int v257;
  unsigned int v258;
  unsigned int v259;
  unsigned int v260;
  int v261;
  unsigned int v262;
  char v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  unsigned int v269;
  unsigned int v270;
  unsigned int v271;
  unsigned int v272;
  int v273;
  unsigned int v274;
  unsigned int v275;
  unsigned int v276;
  unsigned int v277;
  unsigned int v278;
  int v279;
  unsigned int v280;
  unsigned int v281;
  int v282;
  unsigned int v283;
  unsigned int v284;
  unsigned int v285;
  int v286;
  unsigned int v287;
  unsigned int v288;
  unsigned int v289;
  int v290;
  unsigned int v291;
  unsigned int v292;
  unsigned int v293;
  unsigned int v294;
  unsigned int v295;
  int v296;
  unsigned int v297;
  unsigned int v298;
  unsigned int v299;
  int v300;
  unsigned int v301;
  unsigned int v302;
  unsigned int v303;
  unsigned int v304;
  int v305;
  unsigned int v306;
  int v307;
  int v308;
  int v309;

  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
  }
  *(_QWORD*)a2 = 0;
  v8 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  nn_codec_FDKmemclear_plt(a1, 536);
  *((_DWORD*)a1 + 129) = 0;
  *((_DWORD*)a1 + 125) = -1;
  a1[531] = 15;
  a1[525] = -1;
  nn_codec_FDKmemclear_plt(a1 + 32, 465);
  a1[34] = 15;
  *((_DWORD*)a1 + 125) = SdkRoutine_3a0840(a2);
  v9 = nn_codec_getSampleRate(a2, a1 + 531);
  *((_DWORD*)a1 + 126) = v9;
  if (v9 == 0) {
    return 1025;
  }
  v10 = SdkData_e87a50[0];
  v11 = a2[1];
  v12 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0xCLL) + 4);
  if (v11 >= 5) {
    v13 = *a2;
  LABEL_12:
    v20 = v11 - 4;
    a2[1] = v20;
    v19 = v13 >> v20;
    goto LABEL_13;
  }
  v14 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v14) {
    v15 = v14;
  }
  else {
    v15 = 31 - a2[1];
  }
  v16 = *a2 << v15;
  v17 = nn_codec_FDK_get_plt(a2 + 2, v15);
  v18 = a2[1];
  v13 = v16 | v17;
  *a2 = v16 | v17;
  v11 = v18 + v15;
  if (v11 > 3) {
    goto LABEL_12;
  }
  v19 = v13 << (4 - v11);
  *(_QWORD*)a2 = v19;
LABEL_13:
  a1[524] = v19 & v12;
  *(_WORD*)(a1 + 529) = 0;
  v21 = *((_DWORD*)a1 + 125);
  if (v21 == 29 || v21 == 5) {
    *((_DWORD*)a1 + 129) = 5;
    a1[529] = 1;
    if (v21 == 29) {
      a1[530] = 1;
    }
    *((_DWORD*)a1 + 130) = nn_codec_getSampleRate(a2, a1 + 532);
    v21 = SdkRoutine_3a0840(a2);
    *((_DWORD*)a1 + 125) = v21;
    result = 1026;
    if (v21 > 0x27) {
      return result;
    }
  }
  else {
    *((_DWORD*)a1 + 129) = 0;
    result = 1026;
    if (v21 > 0x27) {
      return result;
    }
  }
  if (((1LL << v21) & 0xD20004) != 0) {
    v23 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10);
    v24 = a2[1];
    if (v24 < 2) {
      v29 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v29) {
        v30 = v29;
      }
      else {
        v30 = 31 - a2[1];
      }
      v31 = *a2 << v30;
      v32 = nn_codec_FDK_get_plt(a2 + 2, v30);
      v33 = a2[1];
      v25 = v31 | v32;
      *a2 = v31 | v32;
      v24 = v33 + v30;
      if (v24 == 0) {
        v40 = 2 * v25;
        *a2 = v40;
        a2[1] = 0;
        *(_DWORD*)a1 = v40 & v23;
        v35 = a2[1];
        if (v35 >= 2) {
          goto LABEL_32;
        }
        goto LABEL_37;
      }
    }
    else {
      v25 = *a2;
    }
    v34 = v24 - 1;
    a2[1] = v34;
    *(_DWORD*)a1 = (v25 >> v34) & v23;
    v35 = a2[1];
    if (v35 >= 2) {
    LABEL_32:
      v36 = *a2;
      goto LABEL_41;
    }
  LABEL_37:
    v41 = nn_codec_FDK_getValidBits_plt(a2 + 2);
    if (31 - a2[1] >= v41) {
      v42 = v41;
    }
    else {
      v42 = 31 - a2[1];
    }
    v43 = *a2 << v42;
    v44 = nn_codec_FDK_get_plt(a2 + 2, v42);
    v45 = a2[1];
    v36 = v43 | v44;
    *a2 = v43 | v44;
    v35 = v45 + v42;
    if (v35 == 0) {
      v67 = 2 * v36;
      *a2 = v67;
      a2[1] = 0;
      v68 = v67 & v23;
      *((_DWORD*)a1 + 1) = v68;
      if (v68 == 0) {
      LABEL_51:
        v58 = a2[1];
        if (v58 < 2) {
          v60 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v60) {
            v61 = v60;
          }
          else {
            v61 = 31 - a2[1];
          }
          v62 = *a2 << v61;
          v63 = nn_codec_FDK_get_plt(a2 + 2, v61);
          v64 = a2[1];
          v59 = v62 | v63;
          *a2 = v62 | v63;
          v58 = v64 + v61;
          if (v58 == 0) {
            v69 = 2 * v59;
            *a2 = v69;
            a2[1] = 0;
            *((_DWORD*)a1 + 3) = v69 & v23;
            if (a1[524] != 0) {
            LABEL_58:
              v66 = *((_DWORD*)a1 + 125);
              if (v66 == 20) {
                goto LABEL_65;
              }
              goto LABEL_64;
            }
          LABEL_63:
            nn_codec_CProgramConfig_Read_plt(a1 + 32, a2, v8);
            v66 = *((_DWORD*)a1 + 125);
            if (v66 != 20) {
            LABEL_64:
              if (v66 != 6) {
                goto LABEL_74;
              }
            }
          LABEL_65:
            v70 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v10);
            v71 = a2[1];
            if (v71 < 4) {
              v73 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (31 - a2[1] >= v73) {
                v74 = v73;
              }
              else {
                v74 = 31 - a2[1];
              }
              v75 = *a2 << v74;
              v76 = nn_codec_FDK_get_plt(a2 + 2, v74);
              v77 = a2[1];
              v72 = v75 | v76;
              *a2 = v75 | v76;
              v71 = v77 + v74;
              if (v71 <= 2) {
                v78 = v72 << (3 - v71);
                *(_QWORD*)a2 = v78;
              LABEL_73:
                *((_DWORD*)a1 + 5) = v78 & v70;
              LABEL_74:
                if (*((_DWORD*)a1 + 3) == 0) {
                  goto LABEL_140;
                }
                v80 = *((_DWORD*)a1 + 125);
                if (v80 != 22) {
                LABEL_92:
                  if (v80 > 0x17 || ((1 << v80) & 0x9A0000) == 0) {
                  LABEL_132:
                    v149 = a2[1];
                    if (v149 < 2) {
                      v151 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                      if (31 - a2[1] >= v151) {
                        v152 = v151;
                      }
                      else {
                        v152 = 31 - a2[1];
                      }
                      v153 = *a2 << v152;
                      v154 = nn_codec_FDK_get_plt(a2 + 2, v152);
                      v155 = a2[1];
                      v150 = v153 | v154;
                      *a2 = v153 | v154;
                      v149 = v155 + v152;
                      if (v149 == 0) {
                        v157 = 2 * v150;
                        *(_QWORD*)a2 = v157;
                        goto LABEL_139;
                      }
                    }
                    else {
                      v150 = *a2;
                    }
                    v156 = v149 - 1;
                    a2[1] = v156;
                    v157 = v150 >> v156;
                  LABEL_139:
                    *((_DWORD*)a1 + 4) = v157 & v23;
                  LABEL_140:
                    v38 = *(_DWORD*)a1;
                    v39 = *((unsigned int*)a1 + 125);
                    if ((unsigned int)v39 > 0x27) {
                      goto LABEL_266;
                    }
                    goto LABEL_141;
                  }
                  v103 = a2[1];
                  if (v103 < 2) {
                    v105 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                    if (31 - a2[1] >= v105) {
                      v106 = v105;
                    }
                    else {
                      v106 = 31 - a2[1];
                    }
                    v107 = *a2 << v106;
                    v108 = nn_codec_FDK_get_plt(a2 + 2, v106);
                    v109 = a2[1];
                    v104 = v107 | v108;
                    *a2 = v107 | v108;
                    v103 = v109 + v106;
                    if (v103 == 0) {
                      v132 = 2 * v104;
                      *a2 = v132;
                      a2[1] = 0;
                      a1[526] = v132 & v23;
                      v111 = a2[1];
                      if (v111 >= 2) {
                        goto LABEL_101;
                      }
                      goto LABEL_119;
                    }
                  }
                  else {
                    v104 = *a2;
                  }
                  v110 = v103 - 1;
                  a2[1] = v110;
                  a1[526] = (v104 >> v110) & v23;
                  v111 = a2[1];
                  if (v111 >= 2) {
                  LABEL_101:
                    v112 = *a2;
                    goto LABEL_123;
                  }
                LABEL_119:
                  v133 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  if (31 - a2[1] >= v133) {
                    v134 = v133;
                  }
                  else {
                    v134 = 31 - a2[1];
                  }
                  v135 = *a2 << v134;
                  v136 = nn_codec_FDK_get_plt(a2 + 2, v134);
                  v137 = a2[1];
                  v112 = v135 | v136;
                  *a2 = v135 | v136;
                  v111 = v137 + v134;
                  if (v111 == 0) {
                    v141 = 2 * v112;
                    *a2 = v141;
                    a2[1] = 0;
                    a1[527] = v141 & v23;
                    v139 = a2[1];
                    if (v139 >= 2) {
                      goto LABEL_124;
                    }
                    goto LABEL_126;
                  }
                LABEL_123:
                  v138 = v111 - 1;
                  a2[1] = v138;
                  a1[527] = (v112 >> v138) & v23;
                  v139 = a2[1];
                  if (v139 >= 2) {
                  LABEL_124:
                    v140 = *a2;
                    goto LABEL_130;
                  }
                LABEL_126:
                  v142 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  if (31 - a2[1] >= v142) {
                    v143 = v142;
                  }
                  else {
                    v143 = 31 - a2[1];
                  }
                  v144 = *a2 << v143;
                  v145 = nn_codec_FDK_get_plt(a2 + 2, v143);
                  v146 = a2[1];
                  v140 = v144 | v145;
                  *a2 = v144 | v145;
                  v139 = v146 + v143;
                  if (v139 == 0) {
                    v148 = 2 * v140;
                    *(_QWORD*)a2 = v148;
                    goto LABEL_131;
                  }
                LABEL_130:
                  v147 = v139 - 1;
                  a2[1] = v147;
                  v148 = v140 >> v147;
                LABEL_131:
                  a1[528] = v148 & v23;
                  goto LABEL_132;
                }
                v81 = *(int*)((char*)((int*)0x14LL) + (_QWORD)v10);
                v82 = a2[1];
                if (v82 < 6) {
                  v84 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  if (31 - a2[1] >= v84) {
                    v85 = v84;
                  }
                  else {
                    v85 = 31 - a2[1];
                  }
                  v86 = *a2 << v85;
                  v87 = nn_codec_FDK_get_plt(a2 + 2, v85);
                  v88 = a2[1];
                  v83 = v86 | v87;
                  *a2 = v86 | v87;
                  v82 = v88 + v85;
                  if (v82 <= 4) {
                    v89 = v83 << (5 - v82);
                    *a2 = v89;
                    a2[1] = 0;
                    v90 = v89 & v81;
                    v91 =
                        *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v10 + 4);
                    *((_DWORD*)a1 + 6) = v90;
                    v92 = a2[1];
                    if (v92 >= 0xC) {
                    LABEL_89:
                      v98 = *a2;
                      goto LABEL_90;
                    }
                  LABEL_83:
                    v93 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                    if (31 - a2[1] >= v93) {
                      v94 = v93;
                    }
                    else {
                      v94 = 31 - a2[1];
                    }
                    v95 = *a2 << v94;
                    v96 = nn_codec_FDK_get_plt(a2 + 2, v94);
                    v97 = a2[1];
                    v98 = v95 | v96;
                    *a2 = v95 | v96;
                    v92 = v97 + v94;
                    if (v92 <= 0xA) {
                      v99 = v98 << (11 - v92);
                      *(_QWORD*)a2 = v99;
                    LABEL_91:
                      *((_DWORD*)a1 + 7) = v99 & v91;
                      v80 = *((_DWORD*)a1 + 125);
                      goto LABEL_92;
                    }
                  LABEL_90:
                    v102 = v92 - 11;
                    a2[1] = v102;
                    v99 = v98 >> v102;
                    goto LABEL_91;
                  }
                }
                else {
                  v83 = *a2;
                }
                v100 = v82 - 5;
                a2[1] = v100;
                v101 = (v83 >> v100) & v81;
                v91 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v10 + 4);
                *((_DWORD*)a1 + 6) = v101;
                v92 = a2[1];
                if (v92 >= 0xC) {
                  goto LABEL_89;
                }
                goto LABEL_83;
              }
            }
            else {
              v72 = *a2;
            }
            v79 = v71 - 3;
            a2[1] = v79;
            v78 = v72 >> v79;
            goto LABEL_73;
          }
        }
        else {
          v59 = *a2;
        }
        v65 = v58 - 1;
        a2[1] = v65;
        *((_DWORD*)a1 + 3) = (v59 >> v65) & v23;
        if (a1[524] != 0) {
          goto LABEL_58;
        }
        goto LABEL_63;
      }
    LABEL_42:
      v48 = *(_DWORD*)((char*)((__int64*)0x38LL) + (_QWORD)v10);
      v49 = a2[1];
      if (v49 < 0xF) {
        v51 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v51) {
          v52 = v51;
        }
        else {
          v52 = 31 - a2[1];
        }
        v53 = *a2 << v52;
        v54 = nn_codec_FDK_get_plt(a2 + 2, v52);
        v55 = a2[1];
        v50 = v53 | v54;
        *a2 = v53 | v54;
        v49 = v55 + v52;
        if (v49 <= 0xD) {
          v56 = v50 << (14 - v49);
          *(_QWORD*)a2 = v56;
        LABEL_50:
          *((_DWORD*)a1 + 2) = v56 & v48;
          goto LABEL_51;
        }
      }
      else {
        v50 = *a2;
      }
      v57 = v49 - 14;
      a2[1] = v57;
      v56 = v50 >> v57;
      goto LABEL_50;
    }
  LABEL_41:
    v46 = v35 - 1;
    a2[1] = v46;
    v47 = (v36 >> v46) & v23;
    *((_DWORD*)a1 + 1) = v47;
    if (v47 == 0) {
      goto LABEL_51;
    }
    goto LABEL_42;
  }
  if (v21 != 30) {
    if (v21 != 39) {
      return result;
    }
    nn_codec_FDKmemclear_plt(a1, 5);
    v26 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10);
    v27 = a2[1];
    if (v27 < 2) {
      v113 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v113) {
        v114 = v113;
      }
      else {
        v114 = 31 - a2[1];
      }
      v115 = *a2 << v114;
      v116 = nn_codec_FDK_get_plt(a2 + 2, v114);
      v117 = a2[1];
      v28 = v115 | v116;
      *a2 = v115 | v116;
      v27 = v117 + v114;
      if (v27 == 0) {
        v119 = 2 * v28;
        *(_QWORD*)a2 = v119;
      LABEL_107:
        v120 = v119 & v26;
        *a1 = v120;
        if (v120 != 0) {
          v121 = 480;
        }
        else {
          v121 = 512;
        }
        *((_DWORD*)a1 + 127) = v121;
        v122 = a2[1];
        if (v122 < 2) {
          v124 = nn_codec_FDK_getValidBits_plt(a2 + 2);
          if (31 - a2[1] >= v124) {
            v125 = v124;
          }
          else {
            v125 = 31 - a2[1];
          }
          v126 = *a2 << v125;
          v127 = nn_codec_FDK_get_plt(a2 + 2, v125);
          v128 = a2[1];
          v123 = v126 | v127;
          *a2 = v126 | v127;
          v122 = v128 + v125;
          if (v122 == 0) {
            v171 = 2 * v123;
            *a2 = v171;
            a2[1] = 0;
            a1[526] = v171 & v26;
            v130 = a2[1];
            if (v130 >= 2) {
              goto LABEL_117;
            }
            goto LABEL_167;
          }
        }
        else {
          v123 = *a2;
        }
        v129 = v122 - 1;
        a2[1] = v129;
        a1[526] = (v123 >> v129) & v26;
        v130 = a2[1];
        if (v130 >= 2) {
        LABEL_117:
          v131 = *a2;
          goto LABEL_171;
        }
      LABEL_167:
        v172 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v172) {
          v173 = v172;
        }
        else {
          v173 = 31 - a2[1];
        }
        v174 = *a2 << v173;
        v175 = nn_codec_FDK_get_plt(a2 + 2, v173);
        v176 = a2[1];
        v131 = v174 | v175;
        *a2 = v174 | v175;
        v130 = v176 + v173;
        if (v130 == 0) {
          v180 = 2 * v131;
          *a2 = v180;
          a2[1] = 0;
          a1[527] = v180 & v26;
          v178 = a2[1];
          if (v178 >= 2) {
            goto LABEL_172;
          }
          goto LABEL_174;
        }
      LABEL_171:
        v177 = v130 - 1;
        a2[1] = v177;
        a1[527] = (v131 >> v177) & v26;
        v178 = a2[1];
        if (v178 >= 2) {
        LABEL_172:
          v179 = *a2;
          goto LABEL_178;
        }
      LABEL_174:
        v181 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v181) {
          v182 = v181;
        }
        else {
          v182 = 31 - a2[1];
        }
        v183 = *a2 << v182;
        v184 = nn_codec_FDK_get_plt(a2 + 2, v182);
        v185 = a2[1];
        v179 = v183 | v184;
        *a2 = v183 | v184;
        v178 = v185 + v182;
        if (v178 == 0) {
          v189 = 2 * v179;
          *a2 = v189;
          a2[1] = 0;
          a1[528] = v189 & v26;
          v187 = a2[1];
          if (v187 >= 2) {
            goto LABEL_179;
          }
          goto LABEL_181;
        }
      LABEL_178:
        v186 = v178 - 1;
        a2[1] = v186;
        a1[528] = (v179 >> v186) & v26;
        v187 = a2[1];
        if (v187 >= 2) {
        LABEL_179:
          v188 = *a2;
          goto LABEL_185;
        }
      LABEL_181:
        v190 = nn_codec_FDK_getValidBits_plt(a2 + 2);
        if (31 - a2[1] >= v190) {
          v191 = v190;
        }
        else {
          v191 = 31 - a2[1];
        }
        v192 = *a2 << v191;
        v193 = nn_codec_FDK_get_plt(a2 + 2, v191);
        v194 = a2[1];
        v188 = v192 | v193;
        *a2 = v192 | v193;
        v187 = v194 + v191;
        if (v187 == 0) {
          v207 = 2 * v188;
          *a2 = v207;
          a2[1] = 0;
          LOBYTE(v207) = v207 & v26;
          a1[1] = v207;
          if ((unsigned __int8)v207 == 1) {
          LABEL_186:
            v197 = a2[1];
            if (v197 < 2) {
              v199 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (31 - a2[1] >= v199) {
                v200 = v199;
              }
              else {
                v200 = 31 - a2[1];
              }
              v201 = *a2 << v200;
              v202 = nn_codec_FDK_get_plt(a2 + 2, v200);
              v203 = a2[1];
              v198 = v201 | v202;
              *a2 = v201 | v202;
              v197 = v203 + v200;
              if (v197 == 0) {
                v208 = 2 * v198;
                *a2 = v208;
                a2[1] = 0;
                a1[3] = v208 & v26;
                v205 = a2[1];
                if (v205 >= 2) {
                  goto LABEL_193;
                }
                goto LABEL_197;
              }
            }
            else {
              v198 = *a2;
            }
            v204 = v197 - 1;
            a2[1] = v204;
            a1[3] = (v198 >> v204) & v26;
            v205 = a2[1];
            if (v205 >= 2) {
            LABEL_193:
              v206 = *a2;
              goto LABEL_201;
            }
          LABEL_197:
            v209 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v209) {
              v210 = v209;
            }
            else {
              v210 = 31 - a2[1];
            }
            v211 = *a2 << v210;
            v212 = nn_codec_FDK_get_plt(a2 + 2, v210);
            v213 = a2[1];
            v206 = v211 | v212;
            *a2 = v211 | v212;
            v205 = v213 + v210;
            if (v205 == 0) {
              v215 = 2 * v206;
              *(_QWORD*)a2 = v215;
            LABEL_202:
              v216 = *((_DWORD*)a1 + 126);
              a1[4] = v215 & v26;
              *((_DWORD*)a1 + 130) = v216 << a1[3];
              v217 = (__int64 (*)(__int64, unsigned int*))a4[4];
              if (v217 == nullptr) {
                return 1026;
              }
              v218 = a1[524];
              v219 = a4[5];
              if (v218 == 2) {
                v220 = v217(v219, a2);
                goto LABEL_217;
              }
              v221 = v217(v219, a2);
              v222 = 1;
              v220 = v221;
              if (v218 <= 0xE) {
                if (((1 << v218) & 0x5080) != 0) {
                  v225 =
                      ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                    _QWORD, __int64, __int64, __int64))a4[4])(
                          a4[5], a2, *((unsigned int*)a1 + 126),
                          *((unsigned int*)a1 + 130),
                          *((unsigned int*)a1 + 127), 39, 1, 1);
                  LODWORD(v222) = 2;
                  v220 |= v225;
                }
                else if (((1 << v218) & 0x60) == 0) {
                  if (v218 == 11) {
                    v220 =
                        ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                      _QWORD, __int64, __int64, __int64))a4[4])(
                            a4[5], a2, *((unsigned int*)a1 + 126),
                            *((unsigned int*)a1 + 130),
                            *((unsigned int*)a1 + 127), 39, 1, 1) |
                        v221;
                    LODWORD(v222) = 2;
                  LABEL_213:
                    v223 = v222;
                    v224 = ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                         _QWORD, __int64, __int64))a4[4])(
                        a4[5], a2, *((unsigned int*)a1 + 126),
                        *((unsigned int*)a1 + 130), *((unsigned int*)a1 + 127),
                        39, 1);
                    v220 |=
                        v224 |
                        ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                      _QWORD, __int64, _QWORD, _QWORD))a4[4])(
                            a4[5], a2, *((unsigned int*)a1 + 126),
                            *((unsigned int*)a1 + 130),
                            *((unsigned int*)a1 + 127), 39, 0,
                            (unsigned int)(v223 + 1));
                    goto LABEL_217;
                  }
                  goto LABEL_211;
                }
                v226 = v222 + 1;
                v220 |= ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                      _QWORD, __int64, __int64))a4[4])(
                    a4[5], a2, *((unsigned int*)a1 + 126),
                    *((unsigned int*)a1 + 130), *((unsigned int*)a1 + 127), 39,
                    1);
                v222 = v226;
                goto LABEL_216;
              }
            LABEL_211:
              if (v218 != 3) {
                if (v218 != 4) {
                  goto LABEL_217;
                }
                goto LABEL_213;
              }
            LABEL_216:
              v220 |= ((__int64 (*)(_QWORD, unsigned int*, _QWORD, _QWORD,
                                    _QWORD, __int64, __int64, __int64))a4[4])(
                  a4[5], a2, *((unsigned int*)a1 + 126),
                  *((unsigned int*)a1 + 130), *((unsigned int*)a1 + 127), 39, 1,
                  v222);
            LABEL_217:
              if (v220 != 0) {
                return 1025;
              }
              goto LABEL_219;
            }
          LABEL_201:
            v214 = v205 - 1;
            a2[1] = v214;
            v215 = v206 >> v214;
            goto LABEL_202;
          }
        LABEL_219:
          v227 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)v10);
          a1[2] = 0;
          v228 = *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v10];
          v308 = a3;
          v309 = v227;
          v229 = a2[1];
        LABEL_220:
          while (v229 < 5) {
            v231 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v231) {
              v232 = v231;
            }
            else {
              v232 = 31 - a2[1];
            }
            v233 = *a2 << v232;
            v234 = nn_codec_FDK_get_plt(a2 + 2, v232);
            v235 = a2[1];
            v230 = v233 | v234;
            *a2 = v233 | v234;
            v229 = v235 + v232;
            if (v229 >= 4) {
              goto LABEL_228;
            }
            v236 = v230 << (4 - v229);
            *(_QWORD*)a2 = v236;
            if ((v236 & v12) == 0) {
              goto LABEL_265;
            }
          LABEL_230:
            v238 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v238) {
              v239 = v238;
            }
            else {
              v239 = 31 - a2[1];
            }
            v240 = *a2 << v239;
            v241 = nn_codec_FDK_get_plt(a2 + 2, v239);
            v242 = a2[1];
            v230 = v240 | v241;
            *a2 = v240 | v241;
            v237 = v242 + v239;
            if (v242 + v239 >= 4) {
            LABEL_236:
              v229 = v237 - 4;
              a2[1] = v237 - 4;
              v244 = (v230 >> (v237 - 4)) & v12;
              if (v244 == 15) {
                if (v229 > 8) {
                  goto LABEL_244;
                }
                v245 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                v246 = 31 - a2[1] >= v245 ? v245 : 31 - a2[1];
                v247 = *a2 << v246;
                v248 = nn_codec_FDK_get_plt(a2 + 2, v246);
                v249 = a2[1];
                v230 = v247 | v248;
                *a2 = v247 | v248;
                v229 = v249 + v246;
                if (v229 >= 8) {
                LABEL_244:
                  v229 -= 8;
                  a2[1] = v229;
                  v251 = (v230 >> v229) & v228;
                  if (v251 != 255) {
                    v244 = v251 + 15;
                    goto LABEL_253;
                  }
                  if (v229 > 0x10) {
                    goto LABEL_255;
                  }
                  v252 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  v253 = 31 - a2[1] >= v252 ? v252 : 31 - a2[1];
                  v254 = *a2 << v253;
                  v255 = nn_codec_FDK_get_plt(a2 + 2, v253);
                  v256 = a2[1];
                  v230 = v254 | v255;
                  *a2 = v254 | v255;
                  v229 = v256 + v253;
                  if (v229 > 0xF) {
                  LABEL_255:
                    v229 -= 16;
                    a2[1] = v229;
                    v244 = ((v230 >> v229) & v309) + 270;
                    if (v244 >= 1) {
                      goto LABEL_258;
                    }
                  }
                  else {
                    v257 = v230 << (16 - v229);
                    v229 = 0;
                    *a2 = v257;
                    a2[1] = 0;
                    v244 = (v257 & v309) + 270;
                    if (v244 >= 1) {
                      goto LABEL_258;
                    }
                  }
                }
                else {
                  v250 = v230 << (8 - v229);
                  *a2 = v250;
                  a2[1] = 0;
                  v244 = (v250 & v228) + 15;
                  v229 = 0;
                  if (v244 >= 1) {
                    goto LABEL_258;
                  }
                }
              }
              else {
              LABEL_253:
                if (v244 >= 1) {
                  goto LABEL_258;
                }
              }
            }
            else {
              v229 = 0;
              v243 = v230 << (4 - v237);
              *(_QWORD*)a2 = v243;
              v244 = v243 & v12;
              if ((int)(v243 & v12) >= 1) {
                do {
                LABEL_258:
                  while (1) {
                    if (v229 <= 8) {
                      v258 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                      v259 = 31 - a2[1] >= v258 ? v258 : 31 - a2[1];
                      v260 = *a2 << v259;
                      v261 = nn_codec_FDK_get_plt(a2 + 2, v259);
                      v262 = a2[1];
                      *a2 = v260 | v261;
                      v229 = v262 + v259;
                      if (v229 <= 7) {
                        break;
                      }
                    }
                    v229 -= 8;
                    --v244;
                    a2[1] = v229;
                    if (v244 == 0) {
                      goto LABEL_220;
                    }
                  }
                  v263 = 8 - v229;
                  v229 = 0;
                  *(_QWORD*)a2 = (v260 | v261) << v263;
                  --v244;
                } while (v244 != 0);
              }
            }
          }
          v230 = *a2;
        LABEL_228:
          v237 = v229 - 4;
          a2[1] = v229 - 4;
          if (((v230 >> (v229 - 4)) & v12) == 0) {
          LABEL_265:
            v264 = *((_DWORD*)a1 + 126);
            v38 = *a1;
            a3 = v308;
            a1[529] = a1[1];
            *((_DWORD*)a1 + 130) = v264 + v264 * a1[3];
            v10 = SdkData_e87a50[0];
            v39 = *((unsigned int*)a1 + 125);
            if ((unsigned int)v39 > 0x27) {
              goto LABEL_266;
            }
          LABEL_141:
            if (((1LL << v39) & 0x520004) != 0) {
              if (v38 != 0) {
                v159 = 960;
              }
              else {
                v159 = 1024;
              }
              *((_DWORD*)a1 + 127) = v159;
              if ((unsigned int)v39 <= 0x16 && ((1 << v39) & 0x520000) != 0) {
                goto LABEL_153;
              }
              goto LABEL_266;
            }
            if (((1LL << v39) & 0x8003000000LL) == 0) {
              if (v39 != 23) {
                goto LABEL_266;
              }
              if (v38 != 0) {
                v158 = 480;
              }
              else {
                v158 = 512;
              }
              *((_DWORD*)a1 + 127) = v158;
            }
          LABEL_153:
            v160 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4);
            v161 = a2[1];
            if (v161 >= 3) {
              v162 = *a2;
            LABEL_161:
              v169 = v161 - 2;
              a2[1] = v169;
              v170 = (v162 >> v169) & v160;
              a1[525] = v170;
              if ((char)v170 <= 1) {
                goto LABEL_266;
              }
              return 1026;
            }
            v163 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v163) {
              v164 = v163;
            }
            else {
              v164 = 31 - a2[1];
            }
            v165 = *a2 << v164;
            v166 = nn_codec_FDK_get_plt(a2 + 2, v164);
            v167 = a2[1];
            v162 = v165 | v166;
            *a2 = v165 | v166;
            v161 = v167 + v164;
            if (v161 > 1) {
              goto LABEL_161;
            }
            v168 = v162 << (2 - v161);
            *a2 = v168;
            a2[1] = 0;
            LOBYTE(v168) = v168 & v160;
            a1[525] = v168;
            if ((char)v168 > 1) {
              return 1026;
            }
          LABEL_266:
            if (a3 == 0) {
              return 0;
            }
            if (a2[12] != 0) {
              nn_codec_FDK_put_plt(a2 + 2, *a2);
              *(_QWORD*)a2 = 0;
              v265 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (v265 < 11) {
                return 0;
              }
            }
            else {
              nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
              *(_QWORD*)a2 = 0;
              v265 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (v265 < 11) {
                return 0;
              }
            }
            v266 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10);
            v267 = *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v10 + 4);
            v268 = -1;
            v269 = v265;
            while (2) {
              v274 = a2[1];
              if (v274 >= 0xC) {
                v275 = *a2;
                break;
              }
              v276 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              if (31 - a2[1] >= v276) {
                v277 = v276;
              }
              else {
                v277 = 31 - a2[1];
              }
              v278 = *a2 << v277;
              v279 = nn_codec_FDK_get_plt(a2 + 2, v277);
              v280 = a2[1];
              v275 = v278 | v279;
              *a2 = v278 | v279;
              v274 = v280 + v277;
              if (v280 + v277 <= 0xA) {
                v281 = 0;
                v275 <<= 11 - v274;
                *(_QWORD*)a2 = v275;
                v282 = v275 & v267;
                v273 = v269 - 11;
                if ((v275 & v267) == 0x548) {
                  goto LABEL_286;
                }
              LABEL_297:
                if (v282 != 695) {
                  return 0;
                }
                if (v269 < 0x10 || *((_DWORD*)a1 + 129) == 5) {
                  goto LABEL_278;
                }
                v290 = SdkRoutine_3a0840(a2);
                *((_DWORD*)a1 + 129) = v290;
                if (v290 != 22 && v290 != 5) {
                  goto LABEL_275;
                }
                v291 = a2[1];
                if (v291 >= 2) {
                  v292 = *a2;
                  goto LABEL_309;
                }
                v293 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                v294 = 31 - a2[1] >= v293 ? v293 : 31 - a2[1];
                v295 = *a2 << v294;
                v296 = nn_codec_FDK_get_plt(a2 + 2, v294);
                v297 = a2[1];
                v292 = v295 | v296;
                *a2 = v295 | v296;
                v291 = v297 + v294;
                if (v291 != 0) {
                LABEL_309:
                  v298 = v291 - 1;
                  a2[1] = v298;
                  v299 = v292 >> v298;
                  a1[529] = v299 & v266;
                  if ((unsigned __int8)(v266 & v299) == 1) {
                  LABEL_310:
                    v300 = nn_codec_getSampleRate(a2, a1 + 532);
                    *((_DWORD*)a1 + 130) = v300;
                    if (v300 < 1) {
                      return 1025;
                    }
                  }
                }
                else {
                  v307 = 2 * v292;
                  *a2 = v307;
                  a2[1] = 0;
                  a1[529] = v307 & v266;
                  if ((unsigned __int8)(v266 & v307) == 1) {
                    goto LABEL_310;
                  }
                }
                if (*((_DWORD*)a1 + 129) != 22) {
                  goto LABEL_275;
                }
                v301 = a2[1];
                if (v301 >= 5) {
                  v270 = *a2;
                }
                else {
                  v302 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  if (31 - a2[1] >= v302) {
                    v303 = v302;
                  }
                  else {
                    v303 = 31 - a2[1];
                  }
                  v304 = *a2 << v303;
                  v305 = nn_codec_FDK_get_plt(a2 + 2, v303);
                  v306 = a2[1];
                  v270 = v304 | v305;
                  *a2 = v304 | v305;
                  v301 = v306 + v303;
                  if (v301 <= 3) {
                    v272 = v270 << (4 - v301);
                    *(_QWORD*)a2 = v272;
                  LABEL_274:
                    a1[533] = v272 & v12;
                  LABEL_275:
                    if (a2[12] != 0) {
                      nn_codec_FDK_put_plt(a2 + 2, *a2);
                    }
                    else {
                      nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
                    }
                    *(_QWORD*)a2 = 0;
                    v273 = nn_codec_FDK_getValidBits_plt(a2 + 2);
                  LABEL_278:
                    v269 = v273;
                    v268 = v282;
                    if (v273 <= 10) {
                      return 0;
                    }
                    continue;
                  }
                }
                v271 = v301 - 4;
                a2[1] = v271;
                v272 = v270 >> v271;
                goto LABEL_274;
              }
              break;
            }
            v281 = v274 - 11;
            a2[1] = v274 - 11;
            v282 = (v275 >> (v274 - 11)) & v267;
            v273 = v269 - 11;
            if (v282 != 1352) {
              goto LABEL_297;
            }
          LABEL_286:
            if (v268 == 695 && v269 != 11 && *((_DWORD*)a1 + 129) == 5) {
              if (v281 > 1) {
                goto LABEL_294;
              }
              v283 = nn_codec_FDK_getValidBits_plt(a2 + 2);
              v284 = 31 - a2[1] >= v283 ? v283 : 31 - a2[1];
              v285 = *a2 << v284;
              v286 = nn_codec_FDK_get_plt(a2 + 2, v284);
              v287 = a2[1];
              v275 = v285 | v286;
              *a2 = v285 | v286;
              v281 = v287 + v284;
              if (v281 != 0) {
              LABEL_294:
                v288 = v281 - 1;
                v289 = v275 >> v288;
                a2[1] = v288;
              }
              else {
                v289 = 2 * v275;
                *(_QWORD*)a2 = v289;
              }
              v273 = v269 - 12;
              a1[530] = v289 & v266;
            }
            goto LABEL_278;
          }
          if (v237 > 4) {
            goto LABEL_236;
          }
          goto LABEL_230;
        }
      LABEL_185:
        v195 = v187 - 1;
        a2[1] = v195;
        v196 = (v188 >> v195) & v26;
        a1[1] = v196;
        if (v196 == 1) {
          goto LABEL_186;
        }
        goto LABEL_219;
      }
    }
    else {
      v28 = *a2;
    }
    v118 = v27 - 1;
    a2[1] = v118;
    v119 = v28 >> v118;
    goto LABEL_107;
  }
  v37 =
      (void (*)(_QWORD, unsigned int*, __int64, _QWORD, __int64, _QWORD))a4[2];
  if (v37 != nullptr) {
    v37(a4[3], a2, 30, *((unsigned int*)a1 + 126), 1, 0);
    v38 = -1;
    v39 = *((unsigned int*)a1 + 125);
    if ((unsigned int)v39 <= 0x27) {
      goto LABEL_141;
    }
    goto LABEL_266;
  }
  return result;
}

__int64 nn_codec_getSampleRate(unsigned int* a1, _BYTE* a2)
{
  void(__attribute__((noreturn)) * v4)();
  unsigned int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 result;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;

  v4 = SdkData_e87a50[0];
  v5 = a1[1];
  v6 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0xCLL) + 4);
  if (v5 < 5) {
    v8 = nn_codec_FDK_getValidBits_plt(a1 + 2);
    if (31 - a1[1] >= v8) {
      v9 = v8;
    }
    else {
      v9 = 31 - a1[1];
    }
    v10 = *a1 << v9;
    v11 = nn_codec_FDK_get_plt(a1 + 2, v9);
    v12 = a1[1];
    v7 = v10 | v11;
    *a1 = v7;
    v5 = v12 + v9;
    if (v5 <= 3) {
      v13 = 0;
      v7 = (unsigned int)((_DWORD)v7 << (4 - v5));
      *(_QWORD*)a1 = (unsigned int)v7;
      v14 = v7 & v6;
      if (v14 == 15) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
  }
  else {
    v7 = *a1;
  }
  v13 = v5 - 4;
  a1[1] = v5 - 4;
  v14 = ((unsigned int)v7 >> (v5 - 4)) & v6;
  if (v14 == 15) {
  LABEL_10:
    if (a1[12] != 0) {
      nn_codec_FDK_put_plt(a1 + 2, v7);
      *(_QWORD*)a1 = 0;
      if ((unsigned int)nn_codec_FDK_getValidBits_plt(a1 + 2) < 0x18) {
        return 0;
      }
    }
    else {
      nn_codec_FDK_pushBack_plt(a1 + 2, v13, 0);
      *(_QWORD*)a1 = 0;
      if ((unsigned int)nn_codec_FDK_getValidBits_plt(a1 + 2) < 0x18) {
        return 0;
      }
    }
    v16 = *(_DWORD*)((char*)((char*)0x60LL) + (_QWORD)v4);
    v17 = a1[1];
    if (v17 < 0x19) {
      v19 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      if (31 - a1[1] >= v19) {
        v20 = v19;
      }
      else {
        v20 = 31 - a1[1];
      }
      v21 = *a1 << v20;
      v22 = nn_codec_FDK_get_plt(a1 + 2, v20);
      v23 = a1[1];
      v18 = v21 | v22;
      *a1 = v21 | v22;
      v17 = v23 + v20;
      if (v17 <= 0x17) {
        v24 = v18 << (24 - v17);
        *(_QWORD*)a1 = v24;
      LABEL_22:
        result = v24 & v16;
        goto LABEL_23;
      }
    }
    else {
      v18 = *a1;
    }
    v25 = v17 - 24;
    v24 = v18 >> v25;
    a1[1] = v25;
    goto LABEL_22;
  }
LABEL_8:
  result = (unsigned int)SdkData_c33cc8[v14];
LABEL_23:
  *a2 = v14;
  return result;
}

__int64 nn_codec_DrmRawSdcAudioConfig_Parse(__int64 a1, unsigned int* a2)
{
  unsigned int v4;
  void(__attribute__((noreturn)) * v5)();
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  __int64 result;
  __int64 v65;
  int v66;
  int v67;
  char v68;
  char v69;
  int v70;

  nn_codec_FDKmemclear_plt(a1, 536);
  *(_DWORD*)(a1 + 516) = 0;
  *(_DWORD*)(a1 + 500) = -1;
  *(_BYTE*)(a1 + 531) = 15;
  *(_BYTE*)(a1 + 525) = -1;
  nn_codec_FDKmemclear_plt(a1 + 32, 465);
  *(_BYTE*)(a1 + 34) = 15;
  if (a2[12] != 0) {
    nn_codec_FDK_put_plt(a2 + 2, *a2);
    *(_QWORD*)a2 = 0;
    if ((int)nn_codec_FDK_getValidBits_plt(a2 + 2) < 20) {
      return 1025;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a2 + 2, a2[1], 0);
    *(_QWORD*)a2 = 0;
    if ((int)nn_codec_FDK_getValidBits_plt(a2 + 2) < 20) {
      return 1025;
    }
  }
  v4 = a2[1];
  v5 = SdkData_e87a50[0];
  if (v4 > 4 || ((v6 = nn_codec_FDK_getValidBits_plt(a2 + 2), 31 - a2[1] >= v6)
                     ? (v7 = v6)
                     : (v7 = 31 - a2[1]),
                 v8 = *a2 << v7, v9 = nn_codec_FDK_get_plt(a2 + 2, v7),
                 v10 = a2[1], *a2 = v8 | v9, (v4 = v10 + v7) > 3)) {
    v11 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5 + 4);
    v12 = v4 - 4;
    a2[1] = v4 - 4;
    if (v4 - 4 >= 3) {
      v13 = *a2;
      goto LABEL_18;
    }
  }
  else {
    v11 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5 + 4);
    *(_QWORD*)a2 = (v8 | v9) << (4 - v4);
  }
  v14 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v14) {
    v15 = v14;
  }
  else {
    v15 = 31 - a2[1];
  }
  v16 = *a2 << v15;
  v17 = nn_codec_FDK_get_plt(a2 + 2, v15);
  v18 = a2[1];
  v13 = v16 | v17;
  *a2 = v16 | v17;
  v12 = v18 + v15;
  if (v12 <= 1) {
    v19 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5);
    v20 = v13 << (2 - v12);
    *(_QWORD*)a2 = v20;
    v21 = v20 & v11;
    goto LABEL_19;
  }
LABEL_18:
  v22 = v12 - 2;
  v19 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v5);
  a2[1] = v22;
  v21 = (v13 >> v22) & v11;
  if (v22 > 1) {
    goto LABEL_23;
  }
LABEL_19:
  v23 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v23) {
    v24 = v23;
  }
  else {
    v24 = 31 - a2[1];
  }
  v25 = *a2 << v24;
  v26 = nn_codec_FDK_get_plt(a2 + 2, v24);
  v27 = a2[1];
  v13 = v25 | v26;
  *a2 = v25 | v26;
  v22 = v27 + v24;
  if (v22 != 0) {
  LABEL_23:
    v28 = v22 - 1;
    a2[1] = v28;
    v29 = (v13 >> v28) & v19;
    if (v28 > 2) {
      goto LABEL_31;
    }
    goto LABEL_26;
  }
  v29 = v19 & (2 * v13);
  *(_QWORD*)a2 = 2 * v13;
LABEL_26:
  v30 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v30) {
    v31 = v30;
  }
  else {
    v31 = 31 - a2[1];
  }
  v32 = *a2 << v31;
  v33 = nn_codec_FDK_get_plt(a2 + 2, v31);
  v34 = a2[1];
  v13 = v32 | v33;
  *a2 = v32 | v33;
  v28 = v34 + v31;
  if (v28 <= 1) {
    v35 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v5);
    v36 = v13 << (2 - v28);
    *(_QWORD*)a2 = v36;
    v37 = v36 & v11;
    goto LABEL_32;
  }
LABEL_31:
  v38 = v28 - 2;
  v35 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v5);
  a2[1] = v38;
  v37 = (v13 >> v38) & v11;
  if (v38 > 3) {
    goto LABEL_37;
  }
LABEL_32:
  v39 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v39) {
    v40 = v39;
  }
  else {
    v40 = 31 - a2[1];
  }
  v41 = *a2 << v40;
  v42 = nn_codec_FDK_get_plt(a2 + 2, v40);
  v43 = a2[1];
  v13 = v41 | v42;
  *a2 = v41 | v42;
  v38 = v43 + v40;
  if (v38 > 2) {
  LABEL_37:
    v46 = v38 - 3;
    a2[1] = v46;
    v45 = (v13 >> v46) & v35;
    if (v46 > 2) {
      goto LABEL_43;
    }
    goto LABEL_38;
  }
  v44 = v13 << (3 - v38);
  *(_QWORD*)a2 = v44;
  v45 = v44 & v35;
LABEL_38:
  v47 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v47) {
    v48 = v47;
  }
  else {
    v48 = 31 - a2[1];
  }
  v49 = *a2 << v48;
  v50 = nn_codec_FDK_get_plt(a2 + 2, v48);
  v51 = a2[1];
  *a2 = v49 | v50;
  v46 = v51 + v48;
  if (v46 <= 1) {
    *(_QWORD*)a2 = (v49 | v50) << (2 - v46);
    goto LABEL_44;
  }
LABEL_43:
  v52 = v46 - 2;
  a2[1] = v46 - 2;
  if (v46 - 2 > 5) {
    goto LABEL_49;
  }
LABEL_44:
  v53 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v53) {
    v54 = v53;
  }
  else {
    v54 = 31 - a2[1];
  }
  v55 = *a2 << v54;
  v56 = nn_codec_FDK_get_plt(a2 + 2, v54);
  v57 = a2[1];
  *a2 = v55 | v56;
  v52 = v57 + v54;
  if (v52 > 4) {
  LABEL_49:
    v58 = v52 - 5;
    a2[1] = v58;
    if (v58 > 1) {
      goto LABEL_54;
    }
    goto LABEL_50;
  }
  *(_QWORD*)a2 = (v55 | v56) << (5 - v52);
LABEL_50:
  v59 = nn_codec_FDK_getValidBits_plt(a2 + 2);
  if (31 - a2[1] >= v59) {
    v60 = v59;
  }
  else {
    v60 = 31 - a2[1];
  }
  v61 = *a2 << v60;
  v62 = nn_codec_FDK_get_plt(a2 + 2, v60);
  v63 = a2[1];
  *a2 = v61 | v62;
  v58 = v63 + v60;
  if (v58 == 0) {
    *a2 = 2 * (v61 | v62);
    a2[1] = 0;
    result = 1025;
    if (v45 > 5) {
      return result;
    }
    goto LABEL_57;
  }
LABEL_54:
  result = 1025;
  a2[1] = v58 - 1;
  if (v45 > 5) {
    return result;
  }
LABEL_57:
  if (((0x2Fu >> v45) & 1) == 0) {
    return result;
  }
  v65 = SdkData_c33d88[v45];
  *(_BYTE*)(a1 + 531) = v65;
  v66 = SdkData_c33cc8[v65];
  *(_DWORD*)(a1 + 504) = v66;
  if (v29 != 0) {
    v67 = 2 * v66;
    *(_BYTE*)(a1 + 529) = 1;
    *(_DWORD*)(a1 + 520) = v67;
    *(_DWORD*)(a1 + 516) = 5;
    if (v67 <= 23999) {
      if (v67 > 11999) {
        switch (v67) {
        case 12000:
          v68 = 9;
          goto LABEL_90;
        case 16000:
          v68 = 8;
          goto LABEL_90;
        case 22050:
          v68 = 7;
          goto LABEL_90;
        default:
          break;
        }
      }
      else {
        switch (v67) {
        case 0:
          v68 = 13;
          goto LABEL_90;
        case 7350:
          v68 = 12;
          goto LABEL_90;
        case 8000:
          v68 = 11;
          goto LABEL_90;
        default:
          break;
        }
      }
    }
    else if (v67 <= 47999) {
      switch (v67) {
      case 24000:
        v68 = 6;
        goto LABEL_90;
      case 32000:
        v68 = 5;
        goto LABEL_90;
      case 44100:
        v68 = 4;
        goto LABEL_90;
      default:
        break;
      }
    }
    else if (v67 > 88199) {
      if (v67 == 88200) {
        v68 = 1;
        goto LABEL_90;
      }
      if (v67 == 96000) {
        v68 = 0;
        goto LABEL_90;
      }
    }
    else {
      if (v67 == 48000) {
        v68 = 3;
        goto LABEL_90;
      }
      if (v67 == 64000) {
        v68 = 2;
      LABEL_90:
        *(_BYTE*)(a1 + 532) = v68;
        goto LABEL_91;
      }
    }
    v68 = -1;
    goto LABEL_90;
  }
LABEL_91:
  if (v21 == 2) {
    result = 0;
    v70 = 25;
  LABEL_100:
    *(_DWORD*)(a1 + 500) = v70;
    *(_BYTE*)(a1 + 524) = 1;
    if (*(_BYTE*)(a1 + 530) != 0) {
      goto LABEL_107;
    }
    return result;
  }
  if (v21 == 1) {
    v70 = 24;
    result = 0;
    goto LABEL_100;
  }
  if (v21 != 0) {
    *(_DWORD*)(a1 + 500) = -1;
    if (*(_BYTE*)(a1 + 530) != 0) {
      goto LABEL_107;
    }
  }
  else {
    *(_DWORD*)(a1 + 500) = 143;
    if (v37 != 0) {
      if (v37 == 2) {
        v69 = 2;
      }
      else {
        if (v37 != 1) {
          return result;
        }
        v69 = 1;
        *(_BYTE*)(a1 + 530) = 1;
      }
    }
    else {
      v69 = 1;
    }
    *(_BYTE*)(a1 + 528) = 1;
    *(_BYTE*)(a1 + 524) = v69;
    result = 0;
    *(_DWORD*)(a1 + 508) = 960;
    *(_WORD*)(a1 + 525) = 257;
    if (*(_BYTE*)(a1 + 530) != 0) {
    LABEL_107:
      if (*(_BYTE*)(a1 + 529) != 0) {
        return result;
      }
      return 1025;
    }
  }
  return result;
}

#pragma GCC visibility pop
