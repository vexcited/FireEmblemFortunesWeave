#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

int32x4_t physx_Dy_solve1DStep4(unsigned int* a1, __int64 a2, __int64 a3,
                                __int64 a4, int32x4_t result, float a6);

int32x4_t physx_Dy_solve1DStep4(unsigned int* a1, __int64 a2, __int64 a3,
                                __int64 a4, int32x4_t result, float a6)
{
  unsigned __int64 v6;
  int32x4_t** v7;
  float32x4_t* v10;
  int32x4_t* v11;
  int32x4_t* v12;
  int32x4_t* v13;
  int32x4_t* v14;
  unsigned __int32 v15;
  int32x4_t* v16;
  int32x4_t* v17;
  int32x4_t* v18;
  int32x4_t* v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  int32x4_t v52;
  int32x4_t v53;
  __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  int32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  int32x4_t v80;
  int32x4_t v81;
  int32x4_t v82;
  int32x4_t v83;
  int32x4_t v84;
  int32x4_t v85;
  int32x4_t v86;
  int32x4_t v87;
  int32x4_t v88;
  int32x4_t v89;
  int32x4_t v90;
  int32x4_t v91;
  int32x4_t v92;
  int32x4_t v93;
  int32x4_t v94;
  int32x4_t v95;
  int32x4_t v96;
  int32x4_t v97;
  int32x4_t v98;
  int32x4_t v99;
  int32x4_t v100;
  int32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  int32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  int32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  int32x4_t v131;
  float32x4_t v132;
  int32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  int32x4_t v139;
  float32x4_t v140;
  int32x4_t v141;
  int32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  int32x4_t v145;
  int32x4_t v146;
  int32x4_t v147;
  int32x4_t v148;
  int32x4_t v149;
  int32x4_t v150;
  int32x4_t v151;
  int32x4_t v152;
  unsigned __int32* v153;
  unsigned __int32* v154;
  unsigned __int32* v155;
  int32x4_t v156;
  int32x4_t v157;
  int32x4_t v158;
  int32x4_t v159;
  int32x4_t v160;
  int32x4_t v161;
  int32x4_t v162;
  int32x4_t v163;
  int32x4_t v164;
  int32x4_t v165;
  unsigned __int32* v166;
  int32x4_t v167;
  int32x4_t v168;
  int32x4_t v169;
  unsigned __int32* v170;
  unsigned __int32* v171;
  int32x4_t v172;
  int32x4_t v173;
  int32x4_t v174;
  int32x4_t v175;
  int32x4_t v176;
  int32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t* v183;
  float32x4_t v184;
  float32x4_t v185;
  __int64 v186;
  float32x4_t v187;
  float32x4_t v188;
  float32x4_t v189;
  float32x4_t v190;
  int8x16_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  float32x4_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float32x4_t v203;
  float32x4_t v204;
  int8x16_t v205;
  float32x4_t v206;
  float32x4_t v207;
  float32x4_t v208;
  float32x4_t v209;
  float32x4_t v210;
  int8x16_t v211;
  int8x16_t v212;
  float32x4_t v213;
  float32x4_t v214;
  float32x4_t v215;
  float32x4_t v216;
  float32x4_t v217;
  float32x4_t v218;
  float32x4_t v219;
  float32x4_t v220;
  float32x4_t v221;
  float32x4_t v222;
  float32x4_t v223;
  float32x4_t v224;
  float32x4_t v225;
  float32x4_t v226;
  float32x4_t v227;
  float32x4_t v228;
  float32x4_t v229;
  float32x4_t v230;
  float32x4_t v231;
  float32x4_t v232;
  float32x4_t v233;
  float32x4_t v234;
  float32x4_t v235;
  float32x4_t v236;
  float32x4_t v237;
  float32x4_t v238;
  int8x16_t v239;
  float32x4_t v240;
  float32x4_t v241;
  float32x4_t v242;
  float32x4_t v243;
  int8x16_t v244;
  float32x4_t v245;
  int8x16_t v246;
  int8x16_t v247;
  float32x4_t v248;
  float32x4_t v249;
  int8x16_t v250;
  float32x4_t v251;
  float32x4_t v252;
  float32x4_t v253;
  float32x4_t v254;
  __int64 v255;
  int32x4_t v256;
  int32x4_t v257;
  int32x4_t v258;
  int32x4_t v259;
  int32x4_t v260;
  int32x4_t v261;
  int32x4_t v262;
  int32x4_t v263;
  int32x4_t v264;
  int32x4_t v265;
  int32x4_t v266;
  int32x4_t v267;
  int32x4_t v268;
  int32x4_t v269;
  int32x4_t v270;
  int32x4_t v271;
  int32x4_t v272;
  int32x4_t v273;
  int32x4_t v274;
  int32x4_t v275;
  int32x4_t v276;
  float32x4_t v277;
  float32x4_t v278;
  float32x4_t v279;
  float32x4_t v280;
  float32x4_t v281;
  float32x4_t v282;
  float32x4_t v283;
  float32x4_t v284;
  float32x4_t v285;
  int32x4_t v286;
  float32x4_t v287;
  float32x4_t v288;
  float32x4_t v289;
  float32x4_t v290;
  float32x4_t v291;
  float32x4_t v292;
  float32x4_t v293;
  float32x4_t v294;
  float32x4_t v295;
  float32x4_t v296;
  float32x4_t v297;
  float32x4_t v298;
  float32x4_t v299;
  float32x4_t v300;
  float32x4_t v301;
  float32x4_t v302;
  float32x4_t v303;
  int32x4_t v304;
  int32x4_t v305;
  int32x4_t v306;
  float32x4_t v307;
  float32x4_t v308;
  float32x4_t v309;
  int32x4_t v310;
  int32x4_t v311;
  float32x4_t v312;
  int32x4_t v313;
  int32x4_t v314;
  int32x4_t v315;
  int32x4_t v316;
  int32x4_t v317;
  int32x4_t v318;
  int32x4_t v319;
  float32x4_t v320;
  float32x4_t v321;
  int32x4_t v322;
  float32x4_t v323;
  float32x4_t v324;
  float32x4_t v325;
  float32x4_t v326;
  int32x4_t v327;
  float32x4_t v328;
  int32x4_t v329;
  int32x4_t v330;
  int32x4_t v331;
  int32x4_t v332;
  float32x4_t v333;
  int32x4_t v334;
  float32x4_t v335;
  float32x4_t v336;
  float32x4_t v337;
  float32x4_t v338;
  float32x4_t v339;
  float32x4_t v340;
  float32x4_t v341;
  float32x4_t v342;
  int32x2_t v343;
  float32x4_t v344;
  int32x4_t v345;
  float32x4_t v346;
  int32x4_t v347;
  float32x4_t v348;
  int32x4_t v349;
  float32x4_t v350;
  int32x4_t v351;
  float32x4_t v352;
  int32x4_t v353;
  int32x4_t v354;
  int32x4_t v355;
  int32x4_t v356;
  int32x4_t v357;

  PSEUDO_LOW_LANE128(result, n128_f32, a6);
  v7 = (int32x4_t**)(a2 + ((unsigned __int64)*a1 << 6));
  v10 = v7[4];
  if (v10 != nullptr) {
    v12 = *v7;
    v11 = v7[1];
    v14 = v7[16];
    v13 = v7[17];
    *(float*)&v6 = a6;
    v15 = LANES128(*(v10)).n128_u32[1];
    v17 = v7[8];
    v16 = v7[9];
    v19 = v7[24];
    v18 = v7[25];
    v20 = **v7;
    v21 = (*v7)[1];
    v22 = v14[1];
    v23 = v19[1];
    v24 = vzip1q_s32(v20, *v14);
    v25 = vzip2q_s32(v20, *v14);
    v26 = v17[1];
    v27 = v13[1];
    v28 = vzip1q_s32(*v17, *v19);
    v29 = vzip2q_s32(*v17, *v19);
    v30 = v16[1];
    v357 = vzip2q_s32(v24, v28);
    v31 = v11[1];
    v355 = vzip1q_s32(v24, v28);
    v274 = vzip2q_s32(v25, v29);
    v353 = vzip1q_s32(v25, v29);
    v32 = vzip1q_s32(*v11, *v13);
    v33 = vzip2q_s32(*v11, *v13);
    v34 = v18[1];
    v35 = vzip1q_s32(*v16, *v18);
    v36 = vzip2q_s32(*v16, *v18);
    v37 = vzip1q_s32(v32, v35);
    v38 = vzip1q_s32(v33, v36);
    v356 = vzip2q_s32(v32, v35);
    v39 = vzip2q_s32(v33, v36);
    v40 = vzip1q_s32(v26, v23);
    v41 = vzip2q_s32(v31, v27);
    v273 = v39;
    v42 = vzip1q_s32(v21, v22);
    v43 = vzip2q_s32(v21, v22);
    v44 = vzip2q_s32(v26, v23);
    v45 = vzip1q_s32(v42, v40);
    v46 = vzip2q_s32(v42, v40);
    v47 = vzip1q_s32(v43, v44);
    v48 = vzip2q_s32(v43, v44);
    v49 = vzip1q_s32(v31, v27);
    v50 = vzip1q_s32(v30, v34);
    v51 = vzip2q_s32(v30, v34);
    v52 = vzip1q_s32(v49, v50);
    v53 = vzip1q_s32(v41, v51);
    v354 = vzip2q_s32(v49, v50);
    v275 = v48;
    v276 = vzip2q_s32(v41, v51);
    if (v15 != 0) {
      v54 = *((unsigned int*)v7 + 37);
      LANES128(v55).n128_u64[0] = 0xBF000000BF000000LL;
      LANES128(v55).n128_u64[1] = 0xBF000000BF000000LL;
      LANES128(v56).n128_u64[0] = 0xBF000000BF000000LL;
      LANES128(v56).n128_u64[1] = 0xBF000000BF000000LL;
      v57 = a3 + ((unsigned __int64)*((unsigned int*)v7 + 4) << 6);
      v58 = a3 + ((unsigned __int64)*((unsigned int*)v7 + 36) << 6);
      v59 = *((unsigned int*)v7 + 21);
      v60 = *((unsigned int*)v7 + 53);
      v61 = a3 + ((unsigned __int64)*((unsigned int*)v7 + 20) << 6);
      v62 = a3 + ((unsigned __int64)*((unsigned int*)v7 + 52) << 6);
      v63 = a3 + ((unsigned __int64)*((unsigned int*)v7 + 5) << 6);
      v64 = a3 + (v54 << 6);
      v65 = a3 + (v59 << 6);
      v66 = a3 + (v60 << 6);
      v68 = v14[2];
      v67 = v14[3];
      LANES64(v343).n64_u64[0] = v6;
      v70 = v19[2];
      v69 = v19[3];
      v351 = v52;
      v345 = v38;
      v349 = v53;
      v72 = v10[12];
      v71 = v10[13];
      v347 = v47;
      v73 = vzip1q_s32(*(int32x4_t*)v57, *(int32x4_t*)v58);
      v74 = vzip1q_s32(*(int32x4_t*)v61, *(int32x4_t*)v62);
      v332 = vzip2q_s32(*(int32x4_t*)v61, *(int32x4_t*)v62);
      v334 = vzip2q_s32(*(int32x4_t*)v57, *(int32x4_t*)v58);
      v330 = vzip1q_s32(*(int32x4_t*)v63, *(int32x4_t*)v64);
      v331 = vzip2q_s32(*(int32x4_t*)v63, *(int32x4_t*)v64);
      v327 = vzip1q_s32(*(int32x4_t*)v65, *(int32x4_t*)v66);
      v329 = vzip2q_s32(*(int32x4_t*)v65, *(int32x4_t*)v66);
      v76 = v12[2];
      v75 = v12[3];
      v77 = vzip1q_s32(v75, v67);
      v78 = vzip2q_s32(v75, v67);
      v79 = v17[2];
      v80 = v17[3];
      v82 = v13[2];
      v81 = v13[3];
      v83 = vzip1q_s32(v76, v68);
      v84 = vzip2q_s32(v76, v68);
      v85 = vzip1q_s32(v80, v69);
      v86 = vzip2q_s32(v80, v69);
      v88 = v11[2];
      v87 = v11[3];
      v89 = vzip1q_s32(v87, v81);
      v90 = vzip2q_s32(v87, v81);
      v92 = v16[2];
      v91 = v16[3];
      v94 = v18[2];
      v93 = v18[3];
      v95 = vzip1q_s32(v91, v93);
      v96 = vzip2q_s32(v91, v93);
      v97 = vzip1q_s32(v79, v70);
      v98 = vzip1q_s32(v88, v82);
      v99 = vzip2q_s32(v88, v82);
      v100 = vzip1q_s32(v92, v94);
      v101 = vzip2q_s32(v92, v94);
      v102 = vzip1q_s32(v77, v85);
      v336 = vzip2q_s32(v77, v85);
      v337 = vzip1q_s32(v78, v86);
      v103 = vzip1q_s32(v83, v97);
      v104 = vzip2q_s32(v83, v97);
      v105 = vzip1q_s32(v73, v74);
      v106 = vzip2q_s32(v98, v100);
      v107 = vzip1q_s32(v90, v96);
      v339 = vzip1q_s32(v89, v95);
      v322 = vzip1q_s32(v84, vzip2q_s32(v79, v70));
      v323 = v104;
      v341 = vzip2q_s32(v89, v95);
      v108 = vzip1q_s32(v98, v100);
      v110 = v10[10];
      v109 = v10[11];
      v111 = vzip2q_s32(v334, v332);
      v324 = v103;
      v325 = v108;
      v112 = vzip1q_s32(v99, v101);
      v113 = vzip2q_s32(v73, v74);
      v114 = vzip1q_s32(v334, v332);
      v115 = *(int32x4_t*)(v57 + 28);
      v116 = vmlaq_f32(v55, v111, v111);
      v117 = vzip1q_s32(v330, v327);
      v118 = vzip2q_s32(v331, v329);
      v119 = vzip1q_s32(v331, v329);
      v320 = v112;
      v321 = v106;
      v120 = vmlaq_f32(v56, v118, v118);
      v121 = vmlaq_f32(vmulq_f32(v110, v116), v111,
                       vmlsq_f32(vmulq_f32(v113, v72), v109, v114));
      v122 = vmlaq_f32(vmulq_f32(v109, v116), v111,
                       vmlsq_f32(vmulq_f32(v114, v110), v72, v105));
      v123 = vmlaq_f32(vmulq_f32(v116, v72), v111,
                       vmlsq_f32(vmulq_f32(v105, v109), v110, v113));
      v124 = vzip2q_s32(v330, v327);
      v125 = v10[14];
      v126 = v10[15];
      v127 = vmlaq_f32(vmlaq_f32(vmulq_f32(v105, v110), v109, v113), v72, v114);
      v128 = vmlaq_f32(v122, v127, v113);
      v129 = vmlaq_f32(v121, v127, v105);
      v130 = vmlaq_f32(v123, v127, v114);
      v131 = *(int32x4_t*)(v57 + 40);
      v132 = vmlaq_f32(vmulq_f32(v120, v126), v118,
                       vmlsq_f32(vmulq_f32(v117, v125), v71, v124));
      v133 = *(int32x4_t*)(v61 + 28);
      v134 = vaddq_f32(v129, v129);
      v135 = vaddq_f32(v128, v128);
      v299 = vaddq_f32(v130, v130);
      v303 = v134;
      v301 = v135;
      v136 = vmlaq_f32(vmlaq_f32(vmulq_f32(v117, v71), v125, v124), v126, v119);
      v137 = vmlaq_f32(vmlaq_f32(vmulq_f32(v120, v71), v118,
                                 vmlsq_f32(vmulq_f32(v124, v126), v125, v119)),
                       v136, v117);
      v138 = vmlaq_f32(vmlaq_f32(vmulq_f32(v120, v125), v118,
                                 vmlsq_f32(vmulq_f32(v119, v71), v126, v117)),
                       v136, v124);
      v139 = *(int32x4_t*)(v58 + 28);
      v140 = vmlaq_f32(v132, v136, v119);
      v141 = *(int32x4_t*)(v62 + 28);
      v142 = *(int32x4_t*)(v61 + 40);
      v143 = vaddq_f32(v138, v138);
      v144 = vaddq_f32(v140, v140);
      v145 = vzip1q_s32(v115, v139);
      v146 = vzip2q_s32(v115, v139);
      v147 = vzip1q_s32(v133, v141);
      v293 = v144;
      v295 = v143;
      v319 = vzip1q_s32(v145, v147);
      v317 = vzip1q_s32(v146, vzip2q_s32(v133, v141));
      v318 = vzip2q_s32(v145, v147);
      v148 = *(int32x4_t*)(v62 + 40);
      v149 = *(int32x4_t*)(v58 + 40);
      v150 = vzip1q_s32(v142, v148);
      v151 = vzip1q_s32(v131, v149);
      v315 = vzip2q_s32(v151, v150);
      v316 = vzip1q_s32(v151, v150);
      v152 = vzip2q_s32(v131, v149);
      LANES128(v131).n128_u32[0] =
          LANES128_OF(vdupq_laneq_s32(v131, 3)).n128_u32[0];
      LANES128(v131).n128_u32[1] = LANES128(v149).n128_u32[3];
      LANES128(v149).n128_u32[0] =
          LANES128_OF(vdupq_laneq_s32(v142, 3)).n128_u32[0];
      LANES128(v149).n128_u32[1] = LANES128(v148).n128_u32[3];
      LANES128(v131).n128_u32[2] = *(_DWORD*)(v57 + 56);
      LANES128(v149).n128_u32[2] = *(_DWORD*)(v61 + 56);
      v153 = (unsigned __int32*)(v65 + 56);
      LANES128(v131).n128_u32[3] = *(_DWORD*)(v58 + 56);
      v154 = (unsigned __int32*)(v64 + 56);
      LANES128(v149).n128_u32[3] = *(_DWORD*)(v62 + 56);
      v155 = (unsigned __int32*)(v66 + 56);
      v313 = vzip1q_s32(v131, v149);
      v314 = vzip1q_s32(v152, vzip2q_s32(v142, v148));
      v156 = vzip2q_s32(v131, v149);
      v157 = *(int32x4_t*)(v64 + 28);
      v158 = *(int32x4_t*)(v66 + 28);
      v312 = v156;
      v159 = *(int32x4_t*)(v63 + 28);
      v160 = vzip1q_s32(v159, v157);
      v161 = vzip2q_s32(v159, v157);
      v162 = *(int32x4_t*)(v65 + 28);
      v163 = vzip1q_s32(v162, v158);
      v164 = vzip1q_s32(v161, vzip2q_s32(v162, v158));
      v165 = *(int32x4_t*)(v65 + 40);
      v166 = (unsigned __int32*)(v65 + 60);
      v310 = vzip2q_s32(v160, v163);
      v311 = vzip1q_s32(v160, v163);
      v309 = v164;
      v167 = *(int32x4_t*)(v63 + 40);
      v168 = *(int32x4_t*)(v64 + 40);
      v169 = *(int32x4_t*)(v66 + 40);
      v170 = (unsigned __int32*)(v64 + 60);
      v171 = (unsigned __int32*)(v66 + 60);
      v172 = vzip1q_s32(v167, v168);
      v173 = vzip1q_s32(v165, v169);
      v174 = vzip1q_s32(v172, v173);
      v175 = vzip2q_s32(v172, v173);
      v176 = vzip2q_s32(v165, v169);
      LANES128(v165).n128_u32[0] =
          LANES128_OF(vdupq_laneq_s32(v165, 3)).n128_u32[0];
      LANES128(v165).n128_u32[1] = LANES128(v169).n128_u32[3];
      v307 = v175;
      v308 = v174;
      v177 = vzip2q_s32(v167, v168);
      LANES128(v167).n128_u32[0] =
          LANES128_OF(vdupq_laneq_s32(v167, 3)).n128_u32[0];
      v178 = vaddq_f32(v137, v137);
      LANES128(v167).n128_u32[1] = LANES128(v168).n128_u32[3];
      LANES128(v165).n128_u32[2] = *v153;
      v297 = v178;
      LANES128(v167).n128_u32[2] = *(_DWORD*)(v63 + 56);
      LANES128(v165).n128_u32[3] = *v155;
      LANES128(v167).n128_u32[3] = *v154;
      v304 = vzip2q_s32(v167, v165);
      v305 = vzip1q_s32(v167, v165);
      v306 = vzip1q_s32(v177, v176);
      v179 = vsubq_f32(vaddq_f32(v102, v134), v110);
      v38 = v345;
      v302 = v179;
      v180 = vsubq_f32(vaddq_f32(v336, v135), v109);
      v52 = v351;
      v300 = v180;
      v298 = vsubq_f32(vaddq_f32(v337, v299), v72);
      v181 = vsubq_f32(vaddq_f32(v339, v178), v71);
      v53 = v349;
      v296 = v181;
      v294 = vsubq_f32(vaddq_f32(v341, v143), v125);
      v182 = vaddq_f32(v107, v144);
      v47 = v347;
      v292 = vsubq_f32(v182, v126);
      v291 = vaddq_f32(
          v10[37],
          vsubq_f32(
              vmlaq_f32(vmlaq_f32(vmulq_f32(v322, v10[22]), v104, v10[19]),
                        v103, v10[16]),
              vmlaq_f32(vmlaq_f32(vmulq_f32(v112, v10[31]), v106, v10[28]),
                        v325, v10[25])));
      v290 = vaddq_f32(
          v10[38],
          vsubq_f32(
              vmlaq_f32(vmlaq_f32(vmulq_f32(v322, v10[23]), v104, v10[20]),
                        v103, v10[17]),
              vmlaq_f32(vmlaq_f32(vmulq_f32(v112, v10[32]), v106, v10[29]),
                        v325, v10[26])));
      v284 = v10[6];
      v285 = v10[5];
      PSEUDO_LOW_LANE128(v182, n128_u32, *(_DWORD*)(v57 + 60));
      LANES128(v184).n128_u32[1] = *(_DWORD*)(v61 + 60);
      LANES128(v184).n128_u32[2] = *(_DWORD*)(v58 + 60);
      v183 = v10 + 40;
      LANES128(v184).n128_u32[3] = *(_DWORD*)(v62 + 60);
      v288 = v184;
      v289 = vaddq_f32(
          v10[39],
          vsubq_f32(
              vmlaq_f32(vmlaq_f32(vmulq_f32(v322, v10[24]), v104, v10[21]),
                        v103, v10[18]),
              vmlaq_f32(vmlaq_f32(vmulq_f32(v112, v10[33]), v106, v10[30]),
                        v325, v10[27])));
      LANES128(v184).n128_u32[0] = *(_DWORD*)(v63 + 60);
      v185 = vnegq_f32(v299);
      v186 = 384;
      if (*(_QWORD*)(a4 + 64) == 0) {
        v186 = 352;
      }
      LANES128(v184).n128_u32[1] = *v166;
      LANES128(v184).n128_u32[2] = *v170;
      LANES128(v184).n128_u32[3] = *v171;
      v287 = v184;
      v286 = vdupq_lane_s32(v343, 0);
      v344 = v10[4];
      v283 = v10[3];
      v281 = vnegq_f32(v134);
      v282 = v185;
      v279 = vnegq_f32(v144);
      v280 = vnegq_f32(v135);
      v277 = vnegq_f32(v143);
      v278 = vnegq_f32(v178);
      do {
        v346 = v38;
        v348 = v47;
        v338 = v45;
        v340 = v37;
        LANES128(v191).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v191).n128_u64[1] = 0x3F8000003F800000LL;
        v342 = v46;
        v350 = v53;
        v352 = v52;
        v192 = v10[22];
        v193 = v10[23];
        v195 = v10[18];
        v194 = v10[19];
        v196 = v10[16];
        v197 = v10[17];
        v333 = v183[1];
        v335 = v183[2];
        v199 = v10[24];
        v198 = v10[25];
        v200 = vaddq_f32(v183[8], vmlaq_f32(vmulq_f32(v301, v335), v333, v282));
        v201 =
            vaddq_f32(v183[9], vmlaq_f32(vmulq_f32(v299, *v183), v335, v281));
        v202 = v10[20];
        v203 = v10[21];
        v328 = v183[5];
        v204 =
            vaddq_f32(v183[10], vmlaq_f32(vmulq_f32(v303, v333), *v183, v280));
        v205 = v183[6];
        v326 = v183[4];
        v206 =
            vaddq_f32(v183[12], vmlaq_f32(vmulq_f32(v295, v205), v328, v279));
        v207 =
            vaddq_f32(v183[13], vmlaq_f32(vmulq_f32(v293, v326), v205, v278));
        v208 = v10[28];
        v209 = v10[29];
        v210 =
            vaddq_f32(v183[14], vmlaq_f32(vmulq_f32(v297, v328), v326, v277));
        v211 = v183[21];
        LANES128(v212).n128_u64[0] = 0x1000000010LL;
        LANES128(v212).n128_u64[1] = 0x1000000010LL;
        v213 = vbicq_s8(v191, vceqzq_s32(vandq_s8(v211, v212)));
        v214 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v319, v200), v201, v318), v204, v317);
        v215 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v316, v200), v201, v315), v204, v314);
        v216 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v313, v200), v201, v312), v204, v288);
        v217 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v311, v206), v207, v310), v210, v309);
        v218 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v308, v206), v207, v307), v210, v306);
        v219 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v305, v206), v207, v304), v210, v287);
        v220 = v10[30];
        v221 = v10[31];
        v223 = v10[26];
        v222 = v10[27];
        v224 = vmulq_f32(
            v10[34],
            vmlaq_f32(
                vmlaq_f32(vmlaq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v219, v221),
                                                        v218, v208),
                                              v217, v198),
                                    v216, v192),
                          v215, v194),
                v214, v196));
        v225 = v10[32];
        v226 = v10[33];
        v227 = vmulq_f32(
            v10[35],
            vmlaq_f32(
                vmlaq_f32(vmlaq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v219, v225),
                                                        v218, v209),
                                              v217, v223),
                                    v216, v193),
                          v215, v202),
                v214, v197));
        v228 = vmulq_f32(
            v10[36],
            vmlaq_f32(
                vmlaq_f32(vmlaq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v219, v226),
                                                        v218, v220),
                                              v217, v222),
                                    v216, v199),
                          v215, v203),
                v214, v195));
        v229 = vmlaq_f32(vmulq_f32(v222, v228), v227, v223);
        v230 = *v183;
        v231 = vmlsq_f32(v217, v213, vmlaq_f32(v229, v224, v198));
        v232 = vmlsq_f32(v218, v213,
                         vmlaq_f32(vmlaq_f32(vmulq_f32(v220, v228), v227, v209),
                                   v224, v208));
        v233 = vmlsq_f32(v216, v213,
                         vmlaq_f32(vmlaq_f32(vmulq_f32(v199, v228), v227, v193),
                                   v224, v192));
        v234 = vmlsq_f32(v215, v213,
                         vmlaq_f32(vmlaq_f32(vmulq_f32(v203, v228), v227, v202),
                                   v224, v194));
        v235 = vmlsq_f32(v214, v213,
                         vmlaq_f32(vmlaq_f32(vmulq_f32(v195, v228), v227, v197),
                                   v224, v196));
        v236 = vmlsq_f32(v219, v213,
                         vmlaq_f32(vmlaq_f32(vmulq_f32(v226, v228), v227, v225),
                                   v224, v221));
        v237 = vmlaq_f32(vmulq_f32(v289, v228), v227, v290);
        v238 =
            vmlaq_f32(vmlaq_f32(vmulq_f32(v292, v205), v294, v328), v296, v326);
        LANES128(v205).n128_u64[0] = 0x2000000020LL;
        LANES128(v205).n128_u64[1] = 0x2000000020LL;
        v239 = vaddq_f32(
            vsubq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v298, v335), v300, v333),
                                v302, *v183),
                      v238),
            vmulq_f32(
                v183[20],
                vsubq_f32(
                    vmlaq_f32(vmlaq_f32(vmulq_f32(v322, v233), v323, v234),
                              v324, v235),
                    vmlaq_f32(vmlaq_f32(vmulq_f32(v320, v236), v321, v232),
                              v325, v231))));
        v240 = vaddq_f32(
            vmlaq_f32(vmulq_f32(v285, vmlaq_f32(vmlaq_f32(vmulq_f32(v233, v233),
                                                          v234, v234),
                                                v235, v235)),
                      vmlaq_f32(vmlaq_f32(vmulq_f32(v335, v335), v333, v333),
                                v230, v230),
                      v283),
            vmlaq_f32(
                vmulq_f32(v284, vmlaq_f32(vmlaq_f32(vmulq_f32(v236, v236), v232,
                                                    v232),
                                          v231, v231)),
                vmlaq_f32(vmlaq_f32(vmulq_f32(v183[6], v183[6]), v328, v328),
                          v326, v326),
                v344));
        v241 = vrecpeq_f32(v240);
        v242 = vmulq_f32(v241, vrecpsq_f32(v241, v240));
        v243 = vmulq_f32(v242, vrecpsq_f32(v242, v240));
        v244 = vmulq_f32(v243, vrecpsq_f32(v243, v240));
        v245 = vandq_s8(vmulq_f32(v244, vrecpsq_f32(v244, v240)),
                        vcgtzq_f32(v240));
        v246 = vceqzq_s32(vandq_s8(v211, v205));
        v247 = vbslq_s8(v246, vmulq_f32(v245, v183[11]), v183[11]);
        LANES128(v244).n128_u64[0] = 0x4000000040LL;
        LANES128(v244).n128_u64[1] = 0x4000000040LL;
        v248 = v183[18];
        LANES128(v205).n128_u64[0] = 0x80000000800000LL;
        LANES128(v205).n128_u64[1] = 0x80000000800000LL;
        v249 = v183[6];
        v250 = vaddq_f32(
            v183[15],
            vmaxq_f32(
                vminq_f32(
                    vmlaq_f32(
                        vsubq_f32(
                            v183[3],
                            vmulq_f32(
                                vmulq_f32(v183[7], vmlaq_f32(v237, v224, v291)),
                                v213)),
                        v183[7],
                        vbslq_s8(v246, vmlsq_f32(v239, v286, v183[15]), v239)),
                    v183[19]),
                vbslq_s8(vceqzq_s32(vandq_s8(v211, v244)), vnegq_f32(v183[19]),
                         v205)));
        v251 = vmaxq_f32(
            vminq_f32(
                vaddq_f32(
                    v248,
                    vmlaq_f32(
                        vbslq_s8(v246, vmulq_f32(v245, v250), v250),
                        vaddq_f32(
                            vsubq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v353, v335),
                                                          v357, v333),
                                                v355, *v183),
                                      vmlaq_f32(vmlaq_f32(vmulq_f32(v346, v249),
                                                          v356, v328),
                                                v340, v326)),
                            vsubq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v348, v233),
                                                          v342, v234),
                                                v338, v235),
                                      vmlaq_f32(vmlaq_f32(vmulq_f32(v350, v236),
                                                          v354, v232),
                                                v352, v231))),
                        v247)),
                v183[17]),
            v183[16]);
        v183[18] = v251;
        v252 = vsubq_f32(v251, v248);
        if (*(_QWORD*)(a4 + 64) != 0) {
          v253 = vrecpeq_f32(v247);
          v254 = vrecpsq_f32(v253, v247);
          if (*(_BYTE*)(a4 + 2) != 0) {
            v255 = 23;
          }
          else {
            v255 = 22;
          }
          v183[v255] = vbicq_s8(vmulq_f32(v252, vmulq_f32(v253, v254)),
                                vceqzq_f32(v247));
        }
        v187 = vmulq_f32(v283, v252);
        v188 = vmulq_f32(v285, v252);
        --v15;
        v183 = (float32x4_t*)((char*)v183 + v186);
        v45 = vmlaq_f32(v338, v188, v235);
        v46 = vmlaq_f32(v342, v188, v234);
        v47 = vmlaq_f32(v348, v188, v233);
        v189 = vmulq_f32(v344, v252);
        v190 = vmulq_f32(v284, v252);
        v37 = vmlsq_f32(v340, v189, v326);
        v52 = vmlsq_f32(v352, v190, v231);
        v38 = vmlsq_f32(v346, v189, v249);
        v53 = vmlsq_f32(v350, v190, v236);
        v355 = vmlaq_f32(v355, v187, v230);
        v357 = vmlaq_f32(v357, v187, v333);
        v356 = vmlsq_f32(v356, v189, v328);
        v354 = vmlsq_f32(v354, v190, v232);
        v353 = vmlaq_f32(v353, v187, v335);
      } while (v15 != 0);
    }
    v256 = vzip2q_s32(v37, v38);
    v257 = vzip2q_s32(v45, v47);
    v258 = vzip1q_s32(v355, v353);
    v259 = vzip2q_s32(v355, v353);
    v260 = vzip1q_s32(v357, v274);
    v261 = vzip2q_s32(v357, v274);
    v262 = vzip1q_s32(v356, v273);
    v263 = vzip2q_s32(v356, v273);
    v264 = vzip1q_s32(v37, v38);
    v265 = vzip1q_s32(v45, v47);
    v266 = vzip1q_s32(v46, v275);
    *v12 = vzip1q_s32(v258, v260);
    v12[1] = vzip1q_s32(v265, v266);
    *v17 = vzip2q_s32(v258, v260);
    v17[1] = vzip2q_s32(v265, v266);
    v267 = vzip2q_s32(v46, v275);
    *v14 = vzip1q_s32(v259, v261);
    v14[1] = vzip1q_s32(v257, v267);
    v268 = vzip1q_s32(v52, v53);
    *v19 = vzip2q_s32(v259, v261);
    v19[1] = vzip2q_s32(v257, v267);
    v269 = vzip1q_s32(v354, v276);
    v270 = vzip2q_s32(v354, v276);
    *v11 = vzip1q_s32(v264, v262);
    v11[1] = vzip1q_s32(v268, v269);
    *v16 = vzip2q_s32(v264, v262);
    v16[1] = vzip2q_s32(v268, v269);
    v271 = vzip2q_s32(v52, v53);
    v272 = vzip1q_s32(v271, v270);
    result = vzip2q_s32(v271, v270);
    *v13 = vzip1q_s32(v256, v263);
    v13[1] = v272;
    *v18 = vzip2q_s32(v256, v263);
    v18[1] = result;
  }
  return result;
}

#pragma GCC visibility pop
