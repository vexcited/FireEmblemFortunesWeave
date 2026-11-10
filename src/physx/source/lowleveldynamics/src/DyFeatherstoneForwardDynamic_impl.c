#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 physx_Dy_FeatherstoneArticulation_translateInertia(_QWORD, _QWORD);
__int64 sinf(float);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
float atan2f(float, float);
float fabsf(float);
float sqrtf(_QWORD);
long double cosf(float);
struct PseudoSret
    physx_Dy_FeatherstoneArticulation_computePropagateSpatialInertia_ZA_ZIc_NonSeparated(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
int8x16_t
physx_Dy_FeatherstoneArticulation_computeArticulatedSpatialInertiaAndZ_NonSeparated(
    __int64 a1, int32x2_t* a2, _QWORD* a3);
void physx_Dy_FeatherstoneArticulation_propagateLinksDown(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6,
    double a7, double a8, float a9);
int8x16_t

physx_Dy_FeatherstoneArticulation_computeArticulatedSpatialInertiaAndZ_NonSeparated(
    __int64 a1, int32x2_t* a2, _QWORD* a3)
{
  unsigned __int32 v3;
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  float* v11;
  float* v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float* v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  float v52;
  __int64 v53;
  unsigned __int64 v54;
  float* v55;
  float v56;
  float v57;
  float v58;
  __int64 v59;
  float v60;
  float* v61;
  float v62;
  float* v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float* v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  unsigned __int64 v115;
  unsigned int* v116;
  __int64 v117;
  __int64 v118;
  unsigned int v119;
  float* v120;
  float* v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float* v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  int8x16_t v151;
  int32x4_t v152;
  int8x16_t v153;
  int8x16_t v154;
  int32x4_t v155;
  float32x4_t v156;
  int8x16_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  int8x16_t v161;
  unsigned __int64 v162;
  int32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  int8x16_t v171;
  int8x16_t v172;
  int8x16_t v173;
  float32x4_t v174;
  int8x8_t v175;
  int8x8_t v176;
  float32x4_t v177;
  float32x4_t v178;
  int8x8_t v179;
  int8x8_t v180;
  float32x4_t v181;
  float32x2_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  int8x16_t v186;
  float32x4_t v187;
  float32x4_t v188;
  int8x8_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x2_t v195;
  int32x4_t v196;
  float32x4_t v197;
  int8x8_t v198;
  float32x2_t v199;
  unsigned __int64 v200;
  int8x8_t v201;
  float32x2_t v202;
  int8x8_t v203;
  float32x4_t v204;
  float32x2_t v205;
  float32x4_t v206;
  float32x2_t v207;
  float32x2_t v208;
  float32x2_t v209;
  float v210;
  float32x4_t v211;
  float32x4_t v212;
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
  float32x4_t v239;
  float32x4_t v240;
  float32x4_t v241;
  float32x2_t v242;
  float32x2_t v243;
  float32x2_t v244;
  float32x2_t v245;
  int8x8_t v246;
  float32x4_t v247;
  float32x4_t v248;
  float32x2_t v249;
  float32x2_t v250;
  unsigned __int64 v251;
  int8x8_t v252;
  float32x2_t v253;
  int8x8_t v254;
  float32x2_t v255;
  float32x4_t v256;
  float32x2_t v257;
  float32x2_t v258;
  float32x2_t v259;
  float v260;
  float32x4_t v261;
  float32x4_t v262;
  float32x4_t v263;
  int32x4_t v264;
  float32x4_t v265;
  int32x4_t v266;
  int32x4_t v267;
  int8x16_t v268;
  int32x4_t v269;
  int8x16_t v270;
  int8x16_t result;
  __int64 v272;
  unsigned __int64 v273;
  unsigned __int64 v274;
  __int64 v276;
  float v277;
  __int64 v278;
  float v279;
  __int64 v280;
  __int64 v281;
  float v282;
  float v283;
  float v284;
  float v285;
  float v286;
  float v287;
  __int64 v288;
  float v289;
  __int64 v290;
  __int64 v291;
  float v292;
  float v293;
  float v294;
  float v295;
  int v296;
  float v297;
  float v298;
  float v299;
  int v300;
  float v301;
  float v302;
  float v303;
  int v304;
  __int64 v305;
  float v306;
  __int64 v307;
  float v308;
  __int64 v309;
  __int64 v310;
  float v311;
  float v312;
  float v313;
  float v314;
  float v315;
  float v316;
  __int64 v317;
  float v318;
  __int64 v319;
  __int64 v320;
  float v321;
  float v322;
  float v323;
  float v324;
  int v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;

  v3 = LANES64(a2[101]).n64_u32[0];
  v4 = LANES64(a2[66]).n64_u64[0];
  v6 = v3 - 1;
  if (v3 != 1) {
    v7 = LANES64(a2[84]).n64_u64[0];
    v8 = LANES64(a2[74]).n64_u64[0];
    v273 = LANES64(a2[105]).n64_u64[0];
    v274 = LANES64(a2[100]).n64_u64[0];
    v9 = a3[3];
    v272 = a3[2];
    do {
      v115 = v274 + 40 * v6;
      v116 = (unsigned int*)(v273 + 8 * v6);
      v117 = *((unsigned __int8*)v116 + 4);
      v118 = *(_QWORD*)(v115 + 24);
      if (*((_BYTE*)v116 + 4) != 0) {
        v119 = *v116;
        v120 = (float*)(v4 + 112 * v6);
        do {
          v121 = (float*)(v7 + 24LL * v119);
          v122 = v120[1];
          v123 = v120[2];
          v124 = v120[3];
          v125 = v120[4];
          v126 = v120[5];
          --v117;
          v128 = *v121;
          v127 = v121[1];
          v129 = v120[6];
          v130 = v120[7];
          v132 = v121[2];
          v131 = v121[3];
          v133 = v120[8];
          v134 = (float)((float)(*v121 * *v120) + (float)(v127 * v124)) +
                 (float)(v132 * v129);
          v135 = (float)((float)(*v121 * v122) + (float)(v127 * v125)) +
                 (float)(v132 * v130);
          v136 = (float)((float)(*v121 * v123) + (float)(v127 * v126)) +
                 (float)(v132 * v133);
          v138 = v121[4];
          v137 = v121[5];
          v139 = (float*)(v8 + 32LL * v119++);
          v140 = (float)((float)(v122 * v138) + (float)(*v120 * v131)) +
                 (float)(v123 * v137);
          v141 = v134 + (float)((float)((float)(v131 * v120[9]) +
                                        (float)(v138 * v120[12])) +
                                (float)(v137 * v120[15]));
          v142 = (float)((float)(v125 * v138) + (float)(v124 * v131)) +
                 (float)(v126 * v137);
          v143 = v135 + (float)((float)((float)(v131 * v120[10]) +
                                        (float)(v138 * v120[13])) +
                                (float)(v137 * v120[16]));
          v144 = v136 + (float)((float)((float)(v131 * v120[11]) +
                                        (float)(v138 * v120[14])) +
                                (float)(v137 * v120[17]));
          v145 = (float)(v128 * v120[18]) + (float)(v127 * v120[21]);
          v146 = v120[26];
          v147 = (float)(v128 * v120[19]) + (float)(v127 * v120[22]);
          v148 = (float)(v128 * v120[20]) + (float)(v127 * v120[23]);
          v149 = v120[24];
          v150 = v120[25];
          *v139 = v141;
          v139[1] = v143;
          v139[2] = v144;
          v139[4] = v140 + (float)(v145 + (float)(v132 * v149));
          v139[5] = v142 + (float)(v147 + (float)(v132 * v150));
          v139[6] =
              (float)((float)((float)(v130 * v138) + (float)(v129 * v131)) +
                      (float)(v133 * v137)) +
              (float)(v148 + (float)(v132 * v146));
        } while (v117 != 0);
      }
      v10 = *((unsigned __int8*)v116 + 4);
      v300 = 0;
      v11 = (float*)(v4 + 112 * v6);
      v304 = 0;
      v12 = (float*)(v272 + 32 * v6);
      v13 = v11[1];
      v15 = v11[2];
      v14 = v11[3];
      v17 = v11[4];
      v16 = v11[5];
      v18 = v11[8];
      v19 = (float*)(v9 + 32 * v6);
      v20 = a3[8];
      v22 = *v12;
      v21 = v12[1];
      v23 = v12[4];
      v24 = v12[5];
      v25 = v12[2];
      v26 = (float)(*v12 * v13) + (float)(v21 * v17);
      v27 = v11[6];
      v28 = v11[7];
      v29 = (float)(*v12 * v15) + (float)(v21 * v16);
      v30 = v12[6];
      v31 = (float)((float)(v13 * v24) + (float)(*v11 * v23)) +
            (float)(v15 * v30);
      v32 =
          (float)((float)(v17 * v24) + (float)(v14 * v23)) + (float)(v16 * v30);
      v33 = v19[2];
      v34 = (float)((float)((float)((float)(*v12 * *v11) + (float)(v21 * v14)) +
                            (float)(v25 * v27)) +
                    (float)((float)((float)(v23 * v11[9]) +
                                    (float)(v24 * v11[12])) +
                            (float)(v30 * v11[15]))) +
            *v19;
      v35 = v19[6];
      v36 = (float)(v29 + (float)(v25 * v18)) +
            (float)((float)((float)(v23 * v11[11]) + (float)(v24 * v11[14])) +
                    (float)(v30 * v11[17]));
      v37 = v11[20];
      v38 = v11[21];
      v39 = (float)((float)(v26 + (float)(v25 * v28)) +
                    (float)((float)((float)(v23 * v11[10]) +
                                    (float)(v24 * v11[13])) +
                            (float)(v30 * v11[16]))) +
            v19[1];
      v40 = *v12 * v11[18];
      v41 = *v12 * v11[19];
      v297 = v34;
      v298 = v39;
      v42 = v22 * v37;
      v43 = v21 * v38;
      v44 = v11[22];
      v45 = v11[23];
      v299 = v36 + v33;
      v46 = v41 + (float)(v21 * v44);
      v47 = (float)(v42 + (float)(v21 * v45)) + (float)(v25 * v11[26]);
      v48 = v19[4];
      v49 = v19[5];
      v50 = *(unsigned __int8*)(*(_QWORD*)(v115 + 24) + 351LL);
      v51 = *v116;
      v52 = (float)(v32 + (float)(v46 + (float)(v25 * v11[25]))) + v49;
      v301 =
          (float)(v31 + (float)((float)(v40 + v43) + (float)(v25 * v11[24]))) +
          v48;
      v302 = v52;
      v303 = (float)((float)((float)((float)(v28 * v24) + (float)(v27 * v23)) +
                             (float)(v18 * v30)) +
                     v47) +
             v35;
      *(struct PseudoSret*)(&v276) =
          physx_Dy_FeatherstoneArticulation_computePropagateSpatialInertia_ZA_ZIc_NonSeparated(
              v50, v10, v7 + 24LL * (unsigned int)v51, v8 + 32 * v51,
              v118 + 248, v118 + 332, v20 + 4 * v51);
      v53 = 3 * v6;
      v305 = v276;
      v306 = v277;
      v308 = v279;
      v307 = v278;
      v311 = v282;
      v312 = v283;
      v309 = v280;
      v310 = v281;
      v313 = v284;
      v314 = v285;
      v317 = v288;
      v319 = v290;
      v315 = v286;
      v316 = v287;
      v320 = v291;
      v318 = v289;
      v321 = v292;
      v322 = v293;
      v325 = v296;
      v54 = LANES64(a2[88]).n64_u64[0];
      v323 = v294;
      v324 = v295;
      v55 = (float*)(v54 + 12 * v6);
      v56 = *v55;
      v57 = v55[1];
      v58 = v55[2];
      LODWORD(v276) = 0;
      LODWORD(v281) = 0;
      v279 = v56;
      *(float*)&v280 = v57;
      *((float*)&v276 + 1) = v58;
      v277 = -v57;
      *((float*)&v280 + 1) = -v56;
      v278 = COERCE_UNSIGNED_INT(-v58);
      physx_Dy_FeatherstoneArticulation_translateInertia(&v276, &v305);
      v59 = *(unsigned int*)(v115 + 32);
      v60 = v328;
      --v6;
      v61 = (float*)(v4 + 112LL * (unsigned int)v59);
      v62 = v329;
      v63 = (float*)(v9 + 32 * v59);
      v64 = v61[1];
      *v61 = *(float*)&v305 + *v61;
      v65 = *((float*)&v305 + 1) + v64;
      v66 = v61[2];
      v67 = v61[3];
      v61[1] = v65;
      v61[2] = v306 + v66;
      v68 = *(float*)&v307 + v67;
      v69 = v61[4];
      v70 = v61[5];
      v61[3] = v68;
      v61[4] = *((float*)&v307 + 1) + v69;
      v71 = v308 + v70;
      v72 = v61[6];
      v73 = v61[7];
      v61[5] = v71;
      v61[6] = *(float*)&v309 + v72;
      v74 = *((float*)&v309 + 1) + v73;
      v75 = v61[8];
      v76 = v61[9];
      v61[7] = v74;
      v61[8] = *(float*)&v310 + v75;
      v77 = *((float*)&v310 + 1) + v76;
      v78 = v61[10];
      v79 = v61[11];
      v61[9] = v77;
      v61[10] = v311 + v78;
      v80 = v312 + v79;
      v81 = v61[12];
      v82 = v61[13];
      v61[11] = v80;
      v61[12] = v313 + v81;
      v83 = v314 + v82;
      v84 = v61[14];
      v85 = v61[15];
      v61[13] = v83;
      v61[14] = v315 + v84;
      v86 = v316 + v85;
      v87 = v61[16];
      v88 = v61[17];
      v61[15] = v86;
      v61[16] = *(float*)&v317 + v87;
      v89 = *((float*)&v317 + 1) + v88;
      v90 = v61[18];
      v91 = v61[19];
      v61[17] = v89;
      v61[18] = v318 + v90;
      v92 = *(float*)&v319 + v91;
      v93 = v61[20];
      v94 = v61[21];
      v61[19] = v92;
      v61[20] = *((float*)&v319 + 1) + v93;
      v95 = *(float*)&v320 + v94;
      v96 = v61[22];
      v97 = v61[23];
      v61[21] = v95;
      v61[22] = *((float*)&v320 + 1) + v96;
      v98 = v321 + v97;
      v99 = v61[24];
      v100 = v61[25];
      v61[23] = v98;
      v101 = v322 + v99;
      v102 = v61[26];
      v61[24] = v101;
      v61[25] = v323 + v100;
      v103 = v324 + v102;
      v105 = v326;
      v104 = v327;
      v61[26] = v103;
      v106 = (float*)(LANES64(a2[88]).n64_u64[0] + 4 * v53);
      v108 = v106[1];
      v107 = v106[2];
      v109 = (float)(v107 * v105) - (float)(*v106 * v60);
      v110 = (float)((float)(v108 * v60) - (float)(v107 * v104)) + v62;
      v111 = v330 + v109;
      v112 = (float)((float)(*v106 * v104) - (float)(v108 * v105)) + v331;
      v113 = v63[1];
      *v63 = v105 + *v63;
      v63[1] = v104 + v113;
      v63[2] = v60 + v63[2];
      v114 = v111 + v63[5];
      v63[4] = v110 + v63[4];
      v63[5] = v114;
      v63[6] = v112 + v63[6];
    } while ((_DWORD)v6 != 0);
  }
  v151 = *(int8x16_t*)(v4 + 84);
  v152 = *(int32x4_t*)(v4 + 72);
  v153 = *(int8x16_t*)(v4 + 48);
  LANES128(v154).n128_u32[3] = 0;
  LANES128(v166).n128_u32[3] = 0;
  v155 = *(int32x4_t*)(v4 + 36);
  v156 = *(float32x4_t*)v4;
  LANES128(v157).n128_u32[0] = LANES128(v151).n128_u32[3];
  LANES128(v154).n128_u32[0] = LANES128(v153).n128_u32[3];
  v159 = *(float32x4_t*)v4;
  LANES128(v158).n128_u64[0] =
      LANES64_OF(
          vext_s8(vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v152).n128_u64[0]), 0),
                  COERCE_AS(int8x8_t, LANES128(v151).n128_u64[0]), 4u))
          .n64_u64[0];
  LANES128(v159).n128_u32[3] = 0;
  LANES128(v157).n128_u32[1] = *(_DWORD*)(v4 + 100);
  *(int32x2_t*)&LANES128(v158).n128_i8[8] = vdup_laneq_s32(v151, 3);
  *(unsigned __int64*)((char*)LANES128(v154).n128_u64 + 4) =
      *(unsigned int*)(v4 + 64);
  LANES128(v160).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v152).n128_u64[0]),
                  vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v151).n128_u64[0]), 1),
                  4u))
          .n64_u64[0];
  LANES128(v157).n128_u64[1] = *(unsigned int*)(v4 + 104);
  v161 = v154;
  v162 = LANES64_OF(
             vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v154).n128_u64[0]), 1))
             .n64_u64[0];
  v163 = *(int32x4_t*)(v4 + 12);
  *(int32x2_t*)&LANES128(v160).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v157).n128_u64[0]), 1);
  LANES128(v164).n128_u64[0] =
      LANES64_OF(
          vext_s8(vdup_laneq_s32(v152, 2),
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v151, v151, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  LANES128(v161).n128_u32[2] = *(_DWORD*)(v4 + 68);
  LANES128(v166).n128_u32[0] = LANES128(v163).n128_u32[3];
  v165 = v163;
  LANES128(v165).n128_u32[3] = 0;
  LANES128(v164).n128_u64[1] =
      LANES128_OF(vextq_s8(v157, v157, 8u)).n128_u64[0];
  *(unsigned __int64*)((char*)LANES128(v166).n128_u64 + 4) =
      *(unsigned int*)(v4 + 28);
  v167 = vaddq_f32(v157, v164);
  LANES128(v164).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v164).n128_u64[1] = 0x3F0000003F000000LL;
  v168 = vmulq_f32(v167, v164);
  v169 = vmulq_f32(vaddq_f32(v151, v160), v164);
  v170 = vmulq_f32(vaddq_f32(v152, v158), v164);
  LANES128(v167).n128_u64[0] =
      LANES64_OF(
          vext_s8(vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v155).n128_u64[0]), 0),
                  COERCE_AS(int8x8_t, LANES128(v153).n128_u64[0]), 4u))
          .n64_u64[0];
  v171 = v168;
  v172 = v169;
  v173 = v170;
  *(int32x2_t*)&LANES128(v167).n128_i8[8] = vdup_laneq_s32(v153, 3);
  LANES128(v171).n128_u32[3] = 0;
  LANES128(v172).n128_u32[3] = 0;
  LANES128(v173).n128_u32[3] = 0;
  LANES128(v174).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v155).n128_u64[0]),
                  vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v153).n128_u64[0]), 1),
                  4u))
          .n64_u64[0];
  LANES64(v175).n64_u64[0] = LANES128_OF(vextq_s8(v171, v171, 8u)).n128_u64[0];
  LANES128(v174).n128_u64[1] = v162;
  LANES64(v176).n64_u64[0] = LANES64_OF(vdup_laneq_s32(v155, 2)).n64_u64[0];
  LANES128(v172).n128_u64[0] =
      LANES128_OF(vextq_s8(v172, v172, 8u)).n128_u64[0];
  v177 = vaddq_f32(v155, v167);
  LANES128(v178).n128_u64[0] =
      LANES64_OF(
          vext_s8(v176,
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v153, v153, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  LANES64(v179).n64_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v168).n128_u64[0]), v175, 4u))
          .n64_u64[0];
  LANES64(v180).n64_u64[0] =
      LANES64_OF(vext_s8(COERCE_AS(int8x8_t, LANES128(v169).n128_u64[0]),
                         COERCE_AS(int8x8_t, LANES128(v172).n128_u64[0]), 4u))
          .n64_u64[0];
  v181 = vaddq_f32(v153, v174);
  v183 = v166;
  LANES128(v178).n128_u64[1] =
      LANES128_OF(vextq_s8(v161, v161, 8u)).n128_u64[0];
  LANES64(v182).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])),
                   COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]), v175))
          .n64_u64[0];
  LANES128(v183).n128_u32[2] = *(_DWORD*)(v4 + 32);
  LANES64(v189).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]),
                            v179),
                   v180, COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
          .n64_u64[0];
  v184 = vaddq_f32(v161, v178);
  v187 = vmulq_f32(v177, v164);
  v185 = COERCE_AS(float32x4_t, GameData_1a83090);
  v188 = vmulq_f32(v181, v164);
  v186 = COERCE_AS(int8x16_t, GameData_1a83610);
  LANES128(v187).n128_u32[3] = 0;
  LANES128(v188).n128_u32[3] = 0;
  LANES128(v193).n128_u64[0] = LANES64_OF(vext_s8(v189, v182, 4u)).n64_u64[0];
  LANES64(v189).n64_u32[1] = 0;
  v192 = vmulq_f32(v184, v164);
  v190 = COERCE_AS(float32x4_t, GameData_1a83090);
  v191 = COERCE_AS(float32x4_t, GameData_1a83610);
  LANES128(v192).n128_u32[3] = 0;
  LANES128(v193).n128_u64[1] = LANES64(v189).n64_u32[0];
  v194 = vmulq_f32(v173, v193);
  LANES128(v194).n128_u64[0] = LANES128_OF(vpaddq_f32(v194, v194)).n128_u64[0];
  LANES64(v195).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v194).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v194).n128_u64[0])))
          .n64_u64[0];
  v196 = COERCE_AS(int32x4_t, GameData_1a82dd0);
  v197 = COERCE_AS(float32x4_t, GameData_1a82dd0);
  if (LANES64(v195).n64_f32[0] != 0.0f) {
    LANES64(v198).n64_u64[0] =
        LANES128_OF(vextq_s8(v173, v173, 8u)).n128_u64[0];
    LANES64(v199).n64_u64[0] =
        LANES64_OF(
            vext_s8(COERCE_AS(int8x8_t, LANES128(v170).n128_u64[0]), v198, 4u))
            .n64_u64[0];
    v200 = LANES64_OF(
               vmls_f32(
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]),
                            v180),
                   v199, COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
               .n64_u64[0];
    LANES64(v201).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]),
                         v175),
                COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]), v198))
            .n64_u64[0];
    LANES64(v202).n64_u64[0] = LANES64_OF(vrecpe_f32(v195)).n64_u64[0];
    LANES64(v203).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]),
                         v199),
                v179, COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
            .n64_u64[0];
    LANES128(v204).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v182, 0), v201, 4u)).n64_u64[0];
    LANES64(v205).n64_u64[0] =
        LANES64_OF(vmul_f32(v202, vrecps_f32(v195, v202))).n64_u64[0];
    LANES128(v206).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v189, 0), v203, 4u)).n64_u64[0];
    *(int8x8_t*)&LANES128(v204).n128_i8[8] = v203;
    LANES128(v206).n128_u64[1] = v200;
    LANES64(v207).n64_u64[0] =
        LANES64_OF(vmul_f32(v205, vrecps_f32(v195, v205))).n64_u64[0];
    LANES64(v208).n64_u64[0] =
        LANES64_OF(vmul_f32(v207, vrecps_f32(v195, v207))).n64_u64[0];
    LANES64(v209).n64_u64[0] =
        LANES64_OF(vmul_f32(v208, vrecps_f32(v195, v208))).n64_u64[0];
    LODWORD(v210) =
        LANES64_OF(vmul_f32(v209, vrecps_f32(v195, v209))).n64_u32[0];
    v197 = vmulq_n_f32(v193, v210);
    v191 = vmulq_n_f32(v204, v210);
    v190 = vmulq_n_f32(v206, v210);
    LANES128(v197).n128_u32[3] = 0;
    LANES128(v191).n128_u32[3] = 0;
    LANES128(v190).n128_u32[3] = 0;
  }
  v211 = vnegq_f32(v159);
  v212 = vnegq_f32(v165);
  v213 = vnegq_f32(v183);
  LANES128(v211).n128_u32[3] = 0;
  LANES128(v212).n128_u32[3] = 0;
  LANES128(v213).n128_u32[3] = 0;
  v214 = vmulq_n_f32(v211, LANES128(v197).n128_f32[0]);
  v215 = vmulq_lane_f32(v212,
                        COERCE_AS(float32x2_t, LANES128(v197).n128_u64[0]), 1);
  v216 = vmulq_laneq_f32(v213, v197, 2);
  v217 = vmulq_laneq_f32(v213, v191, 2);
  v218 = vmulq_laneq_f32(v213, v190, 2);
  LANES128(v214).n128_u32[3] = 0;
  LANES128(v215).n128_u32[3] = 0;
  LANES128(v216).n128_u32[3] = 0;
  LANES128(v217).n128_u32[3] = 0;
  LANES128(v218).n128_u32[3] = 0;
  v219 = vaddq_f32(v214, v215);
  v220 = vmulq_n_f32(v211, LANES128(v191).n128_f32[0]);
  v221 = vmulq_n_f32(v211, LANES128(v190).n128_f32[0]);
  LANES128(v220).n128_u32[3] = 0;
  LANES128(v221).n128_u32[3] = 0;
  v222 = vaddq_f32(v216, v219);
  v223 = vmulq_lane_f32(v212,
                        COERCE_AS(float32x2_t, LANES128(v191).n128_u64[0]), 1);
  v224 = vmulq_lane_f32(v212,
                        COERCE_AS(float32x2_t, LANES128(v190).n128_u64[0]), 1);
  LANES128(v223).n128_u32[3] = 0;
  LANES128(v224).n128_u32[3] = 0;
  v225 = vaddq_f32(v217, vaddq_f32(v220, v223));
  v226 = vaddq_f32(v218, vaddq_f32(v221, v224));
  v227 = vmulq_n_f32(v222, LANES128(v156).n128_f32[0]);
  LANES128(v227).n128_u32[3] = 0;
  v228 = vmulq_n_f32(v225, LANES128(v163).n128_f32[0]);
  v229 = vmulq_n_f32(v226, LANES64_OF(vdup_laneq_s32(v163, 3)).n64_f32[0]);
  v230 = vmulq_n_f32(
      v226, LANES64_OF(vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v166).n128_u64[0]), 1))
                .n64_f32[0]);
  v231 = vmulq_laneq_f32(v226, v183, 2);
  LANES128(v228).n128_u32[3] = 0;
  LANES128(v229).n128_u32[3] = 0;
  LANES128(v230).n128_u32[3] = 0;
  LANES128(v231).n128_u32[3] = 0;
  v232 = vaddq_f32(v227, v228);
  v233 = vmulq_lane_f32(v225,
                        COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0]), 1);
  v234 = vmulq_laneq_f32(v225, v163, 2);
  LANES128(v233).n128_u32[3] = 0;
  LANES128(v234).n128_u32[3] = 0;
  v235 = vaddq_f32(v232, v229);
  v236 = vmulq_lane_f32(v222,
                        COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]), 1);
  v237 = vmulq_laneq_f32(v222, v156, 2);
  LANES128(v236).n128_u32[3] = 0;
  LANES128(v237).n128_u32[3] = 0;
  v238 = vaddq_f32(vaddq_f32(v237, v234), v231);
  v239 = vaddq_f32(v187, v235);
  v240 = vaddq_f32(v188, vaddq_f32(vaddq_f32(v236, v233), v230));
  v241 = vaddq_f32(v192, v238);
  LANES64(v242).n64_u64[0] = LANES128_OF(vextq_s8(v241, v241, 4u)).n128_u64[0];
  LANES64(v243).n64_u64[0] = LANES128_OF(vextq_s8(v241, v241, 8u)).n128_u64[0];
  LANES64(v244).n64_u64[0] = LANES128_OF(vextq_s8(v240, v240, 4u)).n128_u64[0];
  LANES64(v245).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v240, v240, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v241).n128_u64[0])),
              COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0]), v243))
          .n64_u64[0];
  LANES64(v246).n64_u64[0] =
      LANES64_OF(
          vmls_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0]),
                            v242),
                   v244, COERCE_AS(float32x2_t, LANES128(v241).n128_u64[0])))
          .n64_u64[0];
  LANES128(v247).n128_u64[0] = LANES64_OF(vext_s8(v246, v245, 4u)).n64_u64[0];
  LANES64(v246).n64_u32[1] = 0;
  LANES128(v247).n128_u64[1] = LANES64(v246).n64_u32[0];
  v248 = vmulq_f32(v239, v247);
  LANES128(v248).n128_u64[0] = LANES128_OF(vpaddq_f32(v248, v248)).n128_u64[0];
  LANES64(v249).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v248).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v248).n128_u64[0])))
          .n64_u64[0];
  if (LANES64(v249).n64_f32[0] != 0.0f) {
    LANES64(v250).n64_u64[0] =
        LANES128_OF(vextq_s8(v239, v239, 4u)).n128_u64[0];
    v251 = LANES64_OF(
               vmls_f32(
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v239).n128_u64[0]),
                            v244),
                   v250, COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0])))
               .n64_u64[0];
    LANES64(v252).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v243,
                         COERCE_AS(float32x2_t, LANES128(v239).n128_u64[0])),
                COERCE_AS(float32x2_t, LANES128(v241).n128_u64[0]),
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v239, v239, 8u)).n128_u64[0])))
            .n64_u64[0];
    LANES64(v253).n64_u64[0] = LANES64_OF(vrecpe_f32(v249)).n64_u64[0];
    LANES64(v254).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v241).n128_u64[0]),
                         v250),
                v242, COERCE_AS(float32x2_t, LANES128(v239).n128_u64[0])))
            .n64_u64[0];
    LANES64(v255).n64_u64[0] =
        LANES64_OF(vmul_f32(v253, vrecps_f32(v249, v253))).n64_u64[0];
    LANES128(v256).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v246, 0), v254, 4u)).n64_u64[0];
    LANES128(v256).n128_u64[1] = v251;
    LANES64(v257).n64_u64[0] =
        LANES64_OF(vmul_f32(v255, vrecps_f32(v249, v255))).n64_u64[0];
    LANES64(v258).n64_u64[0] =
        LANES64_OF(vmul_f32(v257, vrecps_f32(v249, v257))).n64_u64[0];
    LANES64(v259).n64_u64[0] =
        LANES64_OF(vmul_f32(v258, vrecps_f32(v249, v258))).n64_u64[0];
    LODWORD(v260) =
        LANES64_OF(vmul_f32(v259, vrecps_f32(v249, v259))).n64_u32[0];
    LANES128(v261).n128_u64[0] =
        LANES64_OF(vext_s8(vdup_lane_s32(v245, 0), v252, 4u)).n64_u64[0];
    v196 = vmulq_n_f32(v247, v260);
    v185 = vmulq_n_f32(v256, v260);
    *(int8x8_t*)&LANES128(v261).n128_i8[8] = v254;
    LANES128(v196).n128_u32[3] = 0;
    LANES128(v185).n128_u32[3] = 0;
    v186 = vmulq_n_f32(v261, v260);
    LANES128(v186).n128_u32[3] = 0;
  }
  LANES64(a2[130]).n64_u64[0] = LANES128(v196).n128_u64[0];
  LANES64(a2[133]).n64_u64[0] = LANES128(v185).n128_u64[0];
  LANES128(v262).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(
                  int8x8_t,
                  LANES128_OF(
                      vdupq_lane_s32(
                          COERCE_AS(int32x2_t, LANES128(v222).n128_u64[0]), 0))
                      .n128_u64[0]),
              COERCE_AS(int8x8_t, LANES128(v225).n128_u64[0]), 4u))
          .n64_u64[0];
  LANES128(v263).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              COERCE_AS(int8x8_t, LANES128(v222).n128_u64[0]),
              COERCE_AS(
                  int8x8_t,
                  LANES128_OF(
                      vdupq_lane_s32(
                          COERCE_AS(int32x2_t, LANES128(v225).n128_u64[0]), 1))
                      .n128_u64[0]),
              4u))
          .n64_u64[0];
  LANES128(v262).n128_u64[1] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v226).n128_u64[0]), 0))
          .n64_u32[0];
  LANES128(v263).n128_u64[1] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v226).n128_u64[0]), 1))
          .n64_u32[0];
  v264 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v196, LANES128(v225).n128_f32[0]),
          vmulq_lane_f32(
              v186, COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0]), 1)),
      vmulq_laneq_f32(v185, v225, 2));
  LANES128(v265).n128_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t,
                            LANES128_OF(vdupq_laneq_s32(v222, 2)).n128_u64[0]),
                  COERCE_AS(int8x8_t,
                            LANES128_OF(vextq_s8(v225, v225, 8u)).n128_u64[0]),
                  4u))
          .n64_u64[0];
  v266 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v196, LANES128(v222).n128_f32[0]),
          vmulq_lane_f32(
              v186, COERCE_AS(float32x2_t, LANES128(v222).n128_u64[0]), 1)),
      vmulq_laneq_f32(v185, v222, 2));
  v267 = vaddq_f32(
      vaddq_f32(
          vmulq_n_f32(v196, LANES128(v226).n128_f32[0]),
          vmulq_lane_f32(
              v186, COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0]), 1)),
      vmulq_laneq_f32(v185, v226, 2));
  LANES128(v265).n128_u64[1] = LANES64_OF(vdup_laneq_s32(v226, 2)).n64_u32[0];
  LANES64(a2[134]).n64_u32[0] = LANES128(v185).n128_u32[2];
  v268 = vaddq_f32(
      v197,
      vaddq_f32(vmulq_laneq_f32(v265, v266, 2),
                vaddq_f32(vmulq_n_f32(v262, LANES128(v266).n128_f32[0]),
                          vmulq_lane_f32(v263,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v266).n128_u64[0]),
                                         1))));
  v269 = vaddq_f32(
      v191,
      vaddq_f32(vmulq_laneq_f32(v265, v264, 2),
                vaddq_f32(vmulq_n_f32(v262, LANES128(v264).n128_f32[0]),
                          vmulq_lane_f32(v263,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v264).n128_u64[0]),
                                         1))));
  v270 = vaddq_f32(
      v190,
      vaddq_f32(vmulq_laneq_f32(v265, v267, 2),
                vaddq_f32(vmulq_n_f32(v262, LANES128(v267).n128_f32[0]),
                          vmulq_lane_f32(v263,
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v267).n128_u64[0]),
                                         1))));
  LANES64(a2[124]).n64_u64[0] = LANES128_OF(vzip2q_s32(v266, v264)).n128_u64[0];
  LANES64(a2[121]).n64_u64[0] =
      LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v266).n128_u64[0]),
                           COERCE_AS(int32x2_t, LANES128(v264).n128_u64[0])))
          .n64_u64[0];
  LANES64(a2[123]).n64_u64[0] =
      LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v264).n128_u64[0]),
                           COERCE_AS(int32x2_t, LANES128(v267).n128_u64[0])))
          .n64_u64[0];
  LANES64(a2[127]).n64_u64[0] = LANES128(v269).n128_u64[0];
  LANES64(a2[126]).n64_u64[0] =
      LANES128_OF(vextq_s8(v268, v268, 4u)).n128_u64[0];
  LANES128(v262).n128_u64[0] =
      LANES128_OF(vzip2q_s32(v267, vuzp1q_s32(v267, v268))).n128_u64[0];
  LANES128(v267).n128_u32[1] = LANES128(v266).n128_u32[1];
  LANES64(a2[128]).n64_u64[0] =
      LANES128_OF(vzip2q_s32(v269, vuzp1q_s32(v269, v270))).n128_u64[0];
  LANES64(a2[125]).n64_u64[0] = LANES128(v262).n128_u64[0];
  LANES64(a2[122]).n64_u64[0] = LANES128(v267).n128_u64[0];
  LANES64(a2[129]).n64_u64[0] =
      LANES128_OF(vextq_s8(v270, v270, 4u)).n128_u64[0];
  LANES64(a2[131]).n64_u64[0] =
      LANES128_OF(vzip2q_s32(v196, vuzp1q_s32(v196, v186))).n128_u64[0];
  result = vextq_s8(v186, v186, 4u);
  LANES64(a2[132]).n64_u64[0] = LANES128(result).n128_u64[0];
  return result;
}

void physx_Dy_FeatherstoneArticulation_propagateLinksDown(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6,
    double a7, double a8, float a9)
{
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  long double v30;
  bool v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
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
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  unsigned int* v74;
  __int64 v75;
  __int64 v76;
  float* v77;
  float v78;
  float v79;
  float v80;
  __int64 v81;
  float* v82;
  float* v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  unsigned int v92;
  float* v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float* v98;
  float v99;
  float v100;
  float v101;
  long double v102;
  float v103;
  float v104;
  float v105;
  float v106;
  __int64 v107;
  float v108;
  __int64 v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float* v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  __int64 v134;
  float v135;
  float* v136;
  float v137;
  float v138;
  __int64 v139;
  long double v140;
  bool v141;
  float v142;
  float v143;
  float v144;
  float v145;
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
  __int64 v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
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
  float v179;
  float v180;
  float v181;
  float v182;
  unsigned int v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  int v189;
  float v190;
  float v191;
  __int64 v192;
  float v193;
  __int64 v194;
  float* v195;
  unsigned int v196;
  __int64 v197;
  unsigned int v198;
  float* v199;
  float* v200;
  float v201;
  float v202;
  __int64 v203;
  float v204;
  float v205;
  float v206;
  float v209;
  float v210;
  float v211;
  float v212;
  float v214;
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
  float v226;
  float v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  float v240;
  float v241;
  float v242;
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

  v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v157 = COERCE_AS(__typeof__(v157),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v14 = *(unsigned int*)(a1 + 936);
  if ((unsigned int)v14 >= 2) {
    v15 = -0x1.0000000000000p-1f;
    v16 = 1;
    v18 = *(_QWORD*)(a1 + 928);
    v19 = *(_QWORD*)(a1 + 968);
    v20 = *(_QWORD*)(a1 + 912);
    v203 = a4 + 16;
    v214 = *(float*)(a2 + 892);
    while (1) {
      v74 = (unsigned int*)(v19 + 8 * v16);
      v75 = v18 + 40 * v16;
      v76 = *v74;
      v77 = *(float**)(v18 + 40LL * *(unsigned int*)(v75 + 32) + 16);
      v78 = v77[4];
      v79 = v77[5];
      v80 = v77[6];
      v41 = *v77;
      v42 = v77[1];
      v40 = v77[2];
      v43 = v77[3];
      v82 = *(float**)(v75 + 16);
      v81 = *(_QWORD*)(v75 + 24);
      v83 = (float*)(v20 + 16 * v16);
      v85 = *v83;
      v84 = v83[1];
      v45 = v83[2];
      v48 = v83[3];
      v87 = *(float*)(v81 + 44);
      v86 = *(float*)(v81 + 48);
      v88 = *(float*)(v81 + 52);
      v90 = *(float*)(v81 + 16);
      v89 = *(float*)(v81 + 20);
      v91 = *(float*)(v81 + 24);
      v92 = *(unsigned __int8*)(v81 + 351);
      v251 = v79;
      v252 = v78;
      v250 = v80;
      if (v92 > 1) {
        break;
      }
      if (*(_BYTE*)(v81 + 351) != 0) {
        if (v92 != 1) {
          goto LABEL_36;
        }
        v107 = *(unsigned __int8*)(v81 + 332);
        v108 = *(float*)(a4 + 4 * v76) +
               (float)(PSEUDO_UNFUSED(v214 * *(float*)(a3 + 4 * v76)));
        if (*(_BYTE*)(v81 + v107 + 338) == 1) {
          v109 = v81 + 8 * v107;
          v110 = *(float*)(v109 + 56);
          if (v108 >= v110) {
            v110 = *(float*)(a4 + 4 * v76) +
                   (float)(PSEUDO_UNFUSED(v214 * *(float*)(a3 + 4 * v76)));
          }
          if (v110 > *(float*)(v109 + 60)) {
            v108 = *(float*)(v109 + 60);
          }
          else {
            v108 = v110;
          }
        }
        v111 = v89 + v89;
        v112 = v91 + v91;
        *(float*)(a4 + 4 * v76) = v108;
        v113 = (float)(v84 * (float)(v91 + v91)) -
               (float)(PSEUDO_UNFUSED(v45 * (float)(v89 + v89)));
        v114 = v15 + (float)(v48 * v48);
        v115 = (float)((float)(PSEUDO_UNFUSED((float)(v89 + v89) * v84)) +
                       (float)(v85 * (float)(v90 + v90))) +
               (float)(v45 * v112);
        v51 = -v45;
        v116 = (float*)(*(_QWORD*)(a2 + 656) + 24LL * (unsigned int)v76);
        v117 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(v45 * (float)(v90 + v90)) -
                           (float)(PSEUDO_UNFUSED(v85 * v112))) *
                   v48)) +
               (float)(v111 * v114);
        v118 = (float)(v85 * v111) -
               (float)(PSEUDO_UNFUSED(v84 * (float)(v90 + v90)));
        v119 = (float)((float)(PSEUDO_UNFUSED(v48 * v113)) +
                       (float)((float)(v90 + v90) * v114)) +
               (float)(v85 * v115);
        v120 = v117 + (float)(v84 * v115);
        v55 = -v85;
        v56 = -v84;
        v11 = (float)((float)((float)((float)(PSEUDO_UNFUSED(v118 * v48)) +
                                      (float)(v112 * v114)) +
                              (float)(v45 * v115)) -
                      v88) +
              (float)(PSEUDO_UNFUSED(v108 * v116[5]));
        v247 = (float)(v119 - v87) + (float)(PSEUDO_UNFUSED(v108 * v116[3]));
        v243 = (float)(v120 - v86) + (float)(PSEUDO_UNFUSED(v108 * v116[4]));
      }
      else {
        v125 = v91 + v91;
        v126 = v15 + (float)(v48 * v48);
        v127 = v48 * (float)((float)(v84 * (float)(v91 + v91)) -
                             (float)(PSEUDO_UNFUSED(v45 * (float)(v89 + v89))));
        v128 = (float)((float)(v45 * (float)(v90 + v90)) -
                       (float)(PSEUDO_UNFUSED(v85 * (float)(v91 + v91)))) *
               v48;
        v129 = (float)((float)(PSEUDO_UNFUSED((float)(v89 + v89) * v84)) +
                       (float)(v85 * (float)(v90 + v90))) +
               (float)(v45 * (float)(v91 + v91));
        v51 = -v45;
        v130 = v128 + (float)((float)(v89 + v89) * v126);
        v131 = (float)(v85 * (float)(v89 + v89)) -
               (float)(PSEUDO_UNFUSED(v84 * (float)(v90 + v90)));
        v132 = (float)(v127 + (float)((float)(v90 + v90) * v126)) +
               (float)(v85 * v129);
        v133 = v130 + (float)(v84 * v129);
        v55 = -v85;
        v56 = -v84;
        v243 = v133 - v86;
        v247 = v132 - v87;
        v11 = (float)((float)((float)(PSEUDO_UNFUSED(v131 * v48)) +
                              (float)(v125 * v126)) +
                      (float)(v45 * v129)) -
              v88;
      }
      v47 = v85;
      v46 = v84;
    LABEL_16:
      v9 = v47;
      v239 = v48;
      v12 = v46;
      v10 = v45;
      v59 = (float)((float)((float)(PSEUDO_UNFUSED(v41 * v48)) +
                            (float)(v43 * v55)) +
                    (float)(v42 * v51)) +
            (float)(v46 * v40);
      v60 = (float)((float)((float)(PSEUDO_UNFUSED(v42 * v48)) +
                            (float)(v43 * v56)) +
                    (float)(v40 * v55)) +
            (float)(v45 * v41);
      v61 = (float)((float)((float)(PSEUDO_UNFUSED(v40 * v48)) +
                            (float)(v43 * v51)) +
                    (float)(v41 * v56)) +
            (float)(v47 * v42);
      v62 = (float)((float)((float)(PSEUDO_UNFUSED(v41 * v47)) +
                            (float)(v43 * v48)) +
                    (float)(v42 * v46)) +
            (float)(v40 * v45);
      ++v16;
      v63 = 0x1.0000000000000p+0f / sqrtf(a1),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v157 = COERCE_AS(__typeof__(v157),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v64 = v63 * v59;
      v65 = v63 * v60;
      v66 = v63 * v61;
      v67 = v63 * v62;
      v68 = (float)(v67 * v67) + -0x1.0000000000000p-1f;
      *v82 = v64;
      v82[1] = v65;
      v82[2] = v66;
      v82[3] = v67;
      v69 = (float)((float)(PSEUDO_UNFUSED((float)(v243 + v243) * v65)) +
                    (float)(v64 * (float)(v247 + v247))) +
            (float)(v66 * (float)(v11 + v11));
      v70 = (float)((float)(PSEUDO_UNFUSED(
                        v67 * (float)((float)(v66 * (float)(v247 + v247)) -
                                      (float)(PSEUDO_UNFUSED(
                                          v64 * (float)(v11 + v11)))))) +
                    (float)((float)(v243 + v243) * v68)) +
            (float)(v65 * v69);
      v71 = (float)((float)(PSEUDO_UNFUSED(
                        v67 * (float)((float)(v65 * (float)(v11 + v11)) -
                                      (float)(PSEUDO_UNFUSED(
                                          v66 * (float)(v243 + v243)))))) +
                    (float)((float)(v247 + v247) * v68)) +
            (float)(v64 * v69);
      v72 = (float)((float)(PSEUDO_UNFUSED(
                        v67 * (float)((float)(v64 * (float)(v243 + v243)) -
                                      (float)(PSEUDO_UNFUSED(
                                          v65 * (float)(v247 + v247)))))) +
                    (float)((float)(v11 + v11) * v68)) +
            (float)(v66 * v69);
      v73 = v251 + v70;
      v13 = v243;
      v82[4] = v252 + v71;
      v82[5] = v73;
      v15 = -0x1.0000000000000p-1f;
      a9 = v247;
      v82[6] = v250 + v72;
      if (v16 == v14) {
        return;
      }
    }
    if (v92 != 2) {
      if (v92 != 3) {
        if (v92 == 4) {
          v244 = *(float*)(v81 + 48);
          v248 = *(float*)(v81 + 44);
          v228 = *(float*)(v81 + 52);
          v237 = v42;
          v231 = v41;
          v234 = v40;
          v216 = v43;
          v219 = *(float*)(v81 + 16);
          v222 = *(float*)(v81 + 20);
          v225 = *(float*)(v81 + 24);
          v209 = v48;
          v211 = v45;
          v93 = (float*)(*(_QWORD*)(a2 + 936) + 28 * v16);
          v95 = *v93;
          v94 = v93[1];
          v96 = v93[2];
          v97 = v93[3];
          v98 = (float*)(a5 + 32 * v16);
          v99 = v214 * v98[1];
          v100 = v214 * *v98;
          v101 = v214 * v98[2];
          if ((float)((float)((float)(PSEUDO_UNFUSED(v99 * v99)) +
                              (float)(v100 * v100)) +
                      (float)(v101 * v101)) >= 0x1.357c2a0000000p-80f) {
            v240 = v94;
            v206 = v95;
            v156 = v97;
            v204 = sqrtf(a1),
            v137 =
                COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v161 =
                COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v158 = 0x1.0000000000000p+0f / sqrtf(v157),
            v137 =
                COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v161 =
                COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v159 = v99 * v158;
            v160 = v101 * v158;
            v205 = v100 * v158;
            sinf(v204 * 0x1.0000000000000p-1f),
                v137 = COERCE_AS(__typeof__(v137),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v139 =
                    COERCE_AS(__typeof__(v139),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v157 =
                    COERCE_AS(__typeof__(v157),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v161 = COERCE_AS(__typeof__(v161),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v162 = v161;
            v102 = cosf(v204 * 0x1.0000000000000p-1f),
            v137 =
                COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v161 =
                COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v95 = v206;
            v42 = v237;
            v94 = v240;
            v43 = v216;
            v104 = v162 * v159;
            v105 = v162 * v160;
            v97 = v156;
            v41 = v231;
            v40 = v234;
            v106 = 0x1.0000000000000p+0f;
            v103 = v162 * v205;
          }
          else {
            LODWORD(v102) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
            v103 = 0x0.0p+0f;
            v104 = 0x0.0p+0f;
            v105 = 0x0.0p+0f;
            v106 = 0x1.0000000000000p+0f;
          }
          v163 = (float)((float)((float)(PSEUDO_UNFUSED(v97 * v104)) +
                                 (float)(*(float*)&v102 * v94)) +
                         (float)(v105 * v95)) -
                 (float)(v96 * v103);
          v164 = (float)((float)((float)(PSEUDO_UNFUSED(v97 * v103)) +
                                 (float)(*(float*)&v102 * v95)) +
                         (float)(v104 * v96)) -
                 (float)(v94 * v105);
          v165 = (float)((float)((float)(PSEUDO_UNFUSED(v97 * v105)) +
                                 (float)(*(float*)&v102 * v96)) +
                         (float)(v103 * v94)) -
                 (float)(v95 * v104);
          v166 = (float)((float)((float)(*(float*)&v102 * v97) -
                                 (float)(PSEUDO_UNFUSED(v103 * v95))) -
                         (float)(v104 * v94)) -
                 (float)(v105 * v96);
          v167 = (float)((float)((float)(v166 * v41) -
                                 (float)(PSEUDO_UNFUSED(v164 * v43))) -
                         (float)(v163 * v40)) +
                 (float)(v42 * v165);
          v168 = (float)((float)((float)(v166 * v42) -
                                 (float)(PSEUDO_UNFUSED(v163 * v43))) -
                         (float)(v165 * v41)) +
                 (float)(v40 * v164);
          v169 = (float)((float)((float)(v166 * v40) -
                                 (float)(PSEUDO_UNFUSED(v165 * v43))) -
                         (float)(v164 * v42)) +
                 (float)(v41 * v163);
          v170 = (float)((float)((float)(PSEUDO_UNFUSED(v41 * v164)) +
                                 (float)(v166 * v43)) +
                         (float)(v163 * v42)) +
                 (float)(v165 * v40);
          v171 = v106 / sqrtf(a1),
          v137 =
              COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v157 = COERCE_AS(__typeof__(v157),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v161 =
              COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v48 = v171 * v170;
          v47 = v171 * v167;
          v46 = v171 * v168;
          v45 = v171 * v169;
          if ((float)(v171 * v170) < 0x0.0p+0f) {
            v47 = -v47;
            v46 = -v46;
            v45 = -v45;
            v48 = -v48;
          }
          v42 = v237;
          v41 = v231;
          v40 = v234;
          v172 = -0x1.0000000000000p-1f;
          v43 = v216;
          v173 = (float)((float)((float)(PSEUDO_UNFUSED(v209 * v47)) -
                                 (float)(v48 * v85)) -
                         (float)(v46 * v211)) +
                 (float)(v84 * v45);
          v174 = (float)((float)((float)(PSEUDO_UNFUSED(v209 * v46)) -
                                 (float)(v48 * v84)) -
                         (float)(v45 * v85)) +
                 (float)(v211 * v47);
          v175 = (float)((float)((float)(PSEUDO_UNFUSED(v209 * v45)) -
                                 (float)(v48 * v211)) -
                         (float)(v47 * v84)) +
                 (float)(v85 * v46);
          v176 = (float)((float)((float)(PSEUDO_UNFUSED(v85 * v47)) +
                                 (float)(v48 * v209)) +
                         (float)(v46 * v84)) +
                 (float)(v45 * v211);
          if (v176 < 0x0.0p+0f) {
            v173 = -v173;
            v174 = -v174;
            v175 = -v175;
            v176 = -v176;
          }
          v177 = 0x1.0000000000000p+0f;
          v178 = (float)((float)(PSEUDO_UNFUSED(v174 * v174)) +
                         (float)(v173 * v173)) +
                 (float)(v175 * v175);
          if (v178 >= 0x1.cd2b2a0000000p-54f) {
            v241 = v48;
            v210 = v45;
            v212 = v46;
            v184 = v47;
            v185 = v173;
            v186 = v174;
            v187 = 0x1.0000000000000p+0f / sqrtf(a1),
            v137 =
                COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v161 =
                COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v177 = v185 * v187;
            v181 = v186 * v187;
            v182 = v175 * v187;
            if (fabsf(v176) >= 0x1.5798ee0000000p-27f) {
              v188 = atan2f(v178 * v187, v176),
              v137 = COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v139 = COERCE_AS(__typeof__(v139),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v157 = COERCE_AS(__typeof__(v157),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v161 = COERCE_AS(__typeof__(v161),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v29 = COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v180 = v188 + v188;
            }
            else {
              v180 = 0x1.921fb60000000p+1f;
            }
            v42 = v237;
            v48 = v241;
            v41 = v231;
            v40 = v234;
            v43 = v216;
            v47 = v184;
            v172 = -0x1.0000000000000p-1f;
            v179 = v228;
            v45 = v210;
            v46 = v212;
            v183 = *((unsigned __int8*)v74 + 4);
            if (*((_BYTE*)v74 + 4) == 0) {
              goto LABEL_75;
            }
          }
          else {
            v179 = v228;
            v180 = 0x0.0p+0f;
            v181 = 0x0.0p+0f;
            v182 = 0x0.0p+0f;
            v183 = *((unsigned __int8*)v74 + 4);
            if (*((_BYTE*)v74 + 4) == 0) {
            LABEL_75:
              v51 = -v45;
              v55 = -v47;
              v201 = v172 + (float)(v48 * v48);
              v56 = -v46;
              v202 =
                  (float)((float)(PSEUDO_UNFUSED((float)(v222 + v222) * v46)) +
                          (float)(v47 * (float)(v219 + v219))) +
                  (float)(v45 * (float)(v225 + v225));
              v11 = (float)((float)((float)(PSEUDO_UNFUSED(
                                        (float)((float)(PSEUDO_UNFUSED(
                                                    (float)(v219 + v219) *
                                                    (float)-v46)) +
                                                (float)(v47 *
                                                        (float)(v222 + v222))) *
                                        v48)) +
                                    (float)((float)(v225 + v225) * v201)) +
                            (float)(v45 * v202)) -
                    v179;
              v243 = (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)((float)(PSEUDO_UNFUSED(
                                                     (float)(v225 + v225) *
                                                     (float)-v47)) +
                                                 (float)(v45 * (float)(v219 +
                                                                       v219))) *
                                         v48)) +
                                     (float)((float)(v222 + v222) * v201)) +
                             (float)(v46 * v202)) -
                     v244;
              v247 =
                  (float)((float)((float)(PSEUDO_UNFUSED(
                                      v48 *
                                      (float)((float)(PSEUDO_UNFUSED(
                                                  (float)(v222 + v222) *
                                                  (float)-v45)) +
                                              (float)(v46 *
                                                      (float)(v225 + v225))))) +
                                  (float)((float)(v219 + v219) * v201)) +
                          (float)(v47 * v202)) -
                  v248;
              goto LABEL_16;
            }
          }
          v189 = *v74;
          v190 = v180 * v177;
          v191 = v180 * v181;
          v192 = *(_QWORD*)(a1 + 784);
          v193 = v180 * v182;
          if (v183 >= 8) {
            v194 = 0;
            v195 = (float*)(v203 + 4 * v76);
            do {
              v196 = v189 + v194;
              v194 += 8;
              *(v195 - 4) =
                  -(float)((float)((float)(PSEUDO_UNFUSED(
                                       v191 *
                                       *(float*)(v192 + 24LL * v196 + 4))) +
                                   (float)(*(float*)(v192 + 24LL * v196) *
                                           v190)) +
                           (float)(*(float*)(v192 + 24LL * v196 + 8) * v193));
              *(v195 - 3) = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 1) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 1)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 1) + 8) *
                                 v193));
              *(v195 - 2) = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 2) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 2)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 2) + 8) *
                                 v193));
              *(v195 - 1) = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 3) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 3)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 3) + 8) *
                                 v193));
              *v195 = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 4) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 4)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 4) + 8) *
                                 v193));
              v195[1] = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 5) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 5)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 5) + 8) *
                                 v193));
              v195[2] = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 6) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 6)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 6) + 8) *
                                 v193));
              v195[3] = -(
                  float)((float)((float)(PSEUDO_UNFUSED(
                                     v191 *
                                     *(float*)(v192 + 24LL * (v196 + 7) + 4))) +
                                 (float)(*(float*)(v192 + 24LL * (v196 + 7)) *
                                         v190)) +
                         (float)(*(float*)(v192 + 24LL * (v196 + 7) + 8) *
                                 v193));
              v195 += 8;
            } while ((v183 & 0xF8) != v194);
          }
          else {
            v194 = 0;
          }
          v197 = v183 & 7;
          if (v197 != 0) {
            v198 = v189 + v194;
            v199 = (float*)(a4 + 4 * v194 + 4 * v76);
            do {
              v200 = (float*)(v192 + 24LL * v198++);
              --v197;
              *v199++ =
                  -(float)((float)((float)(PSEUDO_UNFUSED(v191 * v200[1])) +
                                   (float)(*v200 * v190)) +
                           (float)(v200[2] * v193));
            } while (v197 != 0);
          }
          goto LABEL_75;
        }
      LABEL_36:
        v48 = v239;
        v47 = v9;
        v55 = -v9;
        v243 = v13;
        v247 = a9;
        v46 = v12;
        v56 = -v12;
        v45 = v10;
        v51 = -v10;
        goto LABEL_16;
      }
      v242 = *(float*)(v81 + 48);
      v246 = *(float*)(v81 + 44);
      v21 = v43;
      v22 = v45;
      v23 = v48;
      v236 = v42;
      v230 = v41;
      v233 = v40;
      v221 = *(float*)(v81 + 20);
      v224 = *(float*)(v81 + 24);
      v218 = *(float*)(v81 + 16);
      v24 = (float*)(*(_QWORD*)(a2 + 656) + 24LL * (unsigned int)v76);
      v25 = *(float*)(a4 + 4 * v76) +
            (float)(PSEUDO_UNFUSED(v214 * *(float*)(a3 + 4 * v76)));
      v26 = v25 * -0x1.0000000000000p-1f;
      *(float*)(a4 + 4 * v76) = v25;
      sinf(v25 * -0x1.0000000000000p-1f),
          v137 =
              COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v157 = COERCE_AS(__typeof__(v157),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v161 =
              COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v28 = v27;
      v30 = cosf(v26),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v157 = COERCE_AS(__typeof__(v157),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v31 = *(float*)&v30 < 0x0.0p+0f;
      v227 = v88;
      if (*(float*)&v30 < 0x0.0p+0f) {
        *(float*)&v30 = -*(float*)&v30;
      }
      v32 = v28 * *v24;
      v33 = v28 * v24[1];
      v34 = v28 * v24[2];
      if (v31) {
        v32 = -v32;
      }
      if (v31) {
        v33 = -v33;
      }
      if (v31) {
        v34 = -v34;
      }
      v35 = (float)((float)((float)(PSEUDO_UNFUSED(v23 * v32)) +
                            (float)(*(float*)&v30 * v85)) +
                    (float)(v33 * v22)) -
            (float)(v84 * v34);
      v36 = (float)((float)((float)(PSEUDO_UNFUSED(v23 * v33)) +
                            (float)(*(float*)&v30 * v84)) +
                    (float)(v34 * v85)) -
            (float)(v22 * v32);
      v37 = (float)((float)((float)(PSEUDO_UNFUSED(v23 * v34)) +
                            (float)(*(float*)&v30 * v22)) +
                    (float)(v32 * v84)) -
            (float)(v85 * v33);
      v38 = (float)((float)((float)(*(float*)&v30 * v23) -
                            (float)(PSEUDO_UNFUSED(v32 * v85))) -
                    (float)(v33 * v84)) -
            (float)(v34 * v22);
      v39 = sqrtf(v29),
      v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v157 = COERCE_AS(__typeof__(v157),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v41 = v230;
      v40 = v233;
      v42 = v236;
      v43 = v21;
      v44 = 0x1.0000000000000p+0f / v39;
      v45 = (float)(0x1.0000000000000p+0f / v39) * v37;
      v46 = (float)(0x1.0000000000000p+0f / v39) * v36;
      v47 = (float)(0x1.0000000000000p+0f / v39) * v35;
      v48 = (float)(0x1.0000000000000p+0f / v39) * v38;
      v49 = (float)(v48 * v48) + -0x1.0000000000000p-1f;
      v50 = (float)((float)(PSEUDO_UNFUSED((float)(v221 + v221) * v46)) +
                    (float)(v47 * (float)(v218 + v218))) +
            (float)(v45 * (float)(v224 + v224));
      v51 = -v45;
      v52 = (float)((float)(v44 * v35) * (float)(v221 + v221)) -
            (float)(PSEUDO_UNFUSED((float)(v44 * v36) * (float)(v218 + v218)));
      v53 = (float)(PSEUDO_UNFUSED(
                (float)(v44 * v38) *
                (float)((float)((float)(v44 * v37) * (float)(v218 + v218)) -
                        (float)(PSEUDO_UNFUSED((float)(v44 * v35) *
                                               (float)(v224 + v224)))))) +
            (float)((float)(v221 + v221) * v49);
      v54 =
          (float)((float)(PSEUDO_UNFUSED(
                      (float)(v44 * v38) *
                      (float)((float)((float)(v44 * v36) *
                                      (float)(v224 + v224)) -
                              (float)(PSEUDO_UNFUSED((float)(v44 * v37) *
                                                     (float)(v221 + v221)))))) +
                  (float)((float)(v218 + v218) * v49)) +
          (float)((float)(v44 * v35) * v50);
      v55 = -(float)(v44 * v35);
      v56 = -(float)(v44 * v36);
      v57 = (float)((float)(PSEUDO_UNFUSED(v48 * v52)) +
                    (float)((float)(v224 + v224) * v49)) +
            (float)(v45 * v50);
      v243 = (float)(v53 + (float)(v46 * v50)) - v242;
      v247 = v54 - v246;
      v58 = v227;
      goto LABEL_15;
    }
    v238 = v42;
    v232 = v41;
    v235 = v40;
    v217 = v43;
    v229 = *(float*)(v81 + 52);
    v245 = *(float*)(v81 + 48);
    v249 = *(float*)(v81 + 44);
    v223 = *(float*)(v81 + 20);
    v226 = *(float*)(v81 + 24);
    v220 = *(float*)(v81 + 16);
    v121 = *(float*)(a4 + 4 * v76) +
           (float)(PSEUDO_UNFUSED(v214 * *(float*)(a3 + 4 * v76)));
    if (v121 <= 0x1.921fb60000000p+2f) {
      v122 = v48;
      v123 = v45;
      if (v121 >= -0x1.921fb60000000p+2f) {
      LABEL_40:
        if (v121 < -0x1.921fb60000000p+3f) {
          v121 = -0x1.921fb60000000p+3f;
        }
        v134 = *(_QWORD*)(a2 + 656);
        if (v121 > 0x1.921fb60000000p+3f) {
          v121 = 0x1.921fb60000000p+3f;
        }
        v135 = v121 * -0x1.0000000000000p-1f;
        *(float*)(a4 + 4 * v76) = v121;
        v136 = (float*)(v134 + 24LL * (unsigned int)v76);
        sinf(v121 * -0x1.0000000000000p-1f),
            v137 =
                COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v161 =
                COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v138 = v137;
        v140 = cosf(v135),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v157 = COERCE_AS(__typeof__(v157),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v141 = *(float*)&v140 < 0x0.0p+0f;
        if (*(float*)&v140 < 0x0.0p+0f) {
          *(float*)&v140 = -*(float*)&v140;
        }
        v142 = v138 * *v136;
        v143 = v138 * v136[1];
        v144 = v138 * v136[2];
        if (v141) {
          v142 = -v142;
        }
        if (v141) {
          v143 = -v143;
        }
        if (v141) {
          v144 = -v144;
        }
        v145 = (float)((float)((float)(PSEUDO_UNFUSED(v122 * v142)) +
                               (float)(*(float*)&v140 * v85)) +
                       (float)(v143 * v123)) -
               (float)(v84 * v144);
        v146 = (float)((float)((float)(PSEUDO_UNFUSED(v122 * v143)) +
                               (float)(*(float*)&v140 * v84)) +
                       (float)(v144 * v85)) -
               (float)(v123 * v142);
        v147 = (float)((float)((float)(PSEUDO_UNFUSED(v122 * v144)) +
                               (float)(*(float*)&v140 * v123)) +
                       (float)(v142 * v84)) -
               (float)(v85 * v143);
        v148 = (float)((float)((float)(*(float*)&v140 * v122) -
                               (float)(PSEUDO_UNFUSED(v142 * v85))) -
                       (float)(v143 * v84)) -
               (float)(v144 * v123);
        v149 = sqrtf(v139),
        v137 = COERCE_AS(__typeof__(v137), PSEUDO_REGISTER(float, "s0", "=w")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v157 = COERCE_AS(__typeof__(v157),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v42 = v238;
        v40 = v235;
        v43 = v217;
        v150 = 0x1.0000000000000p+0f / v149;
        v45 = (float)(0x1.0000000000000p+0f / v149) * v147;
        v46 = (float)(0x1.0000000000000p+0f / v149) * v146;
        v47 = (float)(0x1.0000000000000p+0f / v149) * v145;
        v48 = (float)(0x1.0000000000000p+0f / v149) * v148;
        v151 = (float)(v48 * v48) + -0x1.0000000000000p-1f;
        v152 = (float)((float)(PSEUDO_UNFUSED((float)(v223 + v223) * v46)) +
                       (float)(v47 * (float)(v220 + v220))) +
               (float)(v45 * (float)(v226 + v226));
        v51 = -v45;
        v153 = (float)((float)(v150 * v145) * (float)(v223 + v223)) -
               (float)(PSEUDO_UNFUSED((float)(v150 * v146) *
                                      (float)(v220 + v220)));
        v154 =
            (float)(PSEUDO_UNFUSED(
                (float)(v150 * v148) *
                (float)((float)((float)(v150 * v147) * (float)(v220 + v220)) -
                        (float)(PSEUDO_UNFUSED((float)(v150 * v145) *
                                               (float)(v226 + v226)))))) +
            (float)((float)(v223 + v223) * v151);
        v155 = (float)((float)(PSEUDO_UNFUSED(
                           (float)(v150 * v148) *
                           (float)((float)((float)(v150 * v146) *
                                           (float)(v226 + v226)) -
                                   (float)(PSEUDO_UNFUSED(
                                       v45 * (float)(v223 + v223)))))) +
                       (float)((float)(v220 + v220) * v151)) +
               (float)((float)(v150 * v145) * v152);
        v55 = -(float)(v150 * v145);
        v56 = -(float)(v150 * v146);
        v57 = (float)((float)(PSEUDO_UNFUSED(v48 * v153)) +
                      (float)((float)(v226 + v226) * v151)) +
              (float)(v45 * v152);
        v243 = (float)(v154 + (float)(v46 * v152)) - v245;
        v247 = v155 - v249;
        v58 = v229;
        v41 = v232;
      LABEL_15:
        v11 = v57 - v58;
        goto LABEL_16;
      }
      v124 = 0x1.921fb60000000p+3f;
    }
    else {
      v122 = v48;
      v123 = v45;
      v124 = -0x1.921fb60000000p+3f;
    }
    v121 = v121 + v124;
    goto LABEL_40;
  }
}

#pragma GCC visibility pop
