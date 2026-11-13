#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

int32x4_t physx_Dy_solve1DStep4(unsigned int* a1, __int64 a2, __int64 a3,
                                __int64 a4, int32x4_t result, float a6);
extern __int128 GameData_1a830a0;
int32x4_t** physx_Dy_solveContact4_Block_3c4a10(unsigned int* a1, __int64 a2,
                                                int32x2_t a3, float a4,
                                                __int64 a5, __int64 a6);

int32x4_t** physx_Dy_solveContact4_Block_3c4a10(unsigned int* a1, __int64 a2,
                                                int32x2_t a3, float a4,
                                                __int64 a5, __int64 a6)
{
  int32x4_t** result;
  int32x4_t* v8;
  int32x4_t* v9;
  int32x4_t* v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int32x4_t* v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
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
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  int32x4_t v70;
  int32x4_t v71;
  unsigned __int64 v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  float32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  float32x4_t v80;
  int32x4_t v81;
  int32x4_t v82;
  int32x4_t v83;
  int32x4_t v84;
  int32x4_t v85;
  int32x4_t v86;
  int32x4_t v87;
  int32x4_t v88;
  __int64 v89;
  char v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  __int64 v94;
  __int64 v95;
  float32x4_t* v96;
  float32x4_t v97;
  float32x4_t v98;
  __int64 v99;
  float32x4_t* v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  __int64 v111;
  __int64 v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  int8x16_t v120;
  int8x16_t v121;
  float32x4_t v122;
  float32x4_t v123;
  int8x16_t v124;
  float v125;
  int32x4_t v126;
  unsigned __int8 v127;
  float v128;
  float32x4_t v129;
  float32x4_t v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  float32x4_t* v134;
  __int64 v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  float32x4_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  int8x16_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  int8x16_t v199;
  float32x4_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float32x4_t v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  float32x4_t v207;
  float32x4_t v208;
  float32x4_t v209;
  int8x16_t v210;
  int8x16_t v211;
  float32x4_t v212;
  float32x4_t v213;
  float v214;
  int32x4_t v215;
  int8x16_t v216;
  float v217;
  unsigned __int8 v218;
  float32x4_t v219;
  char v220;
  _BOOL4 v221;
  unsigned int v222;
  int v223;
  int8x16_t v224;
  unsigned int v225;
  int8x16_t v226;
  float32x4_t v227;
  float32x4_t v228;
  int8x16_t v229;
  int32x4_t v230;
  unsigned __int8 v231;
  float v232;
  int32x4_t v233;
  int32x4_t v234;
  int v235;
  int32x4_t v236;
  int32x4_t v237;
  int32x4_t v238;
  int32x4_t v239;
  int32x4_t v240;
  int32x4_t v241;
  int32x4_t v242;
  int32x4_t v243;
  int32x4_t v244;
  int32x4_t v245;
  int32x4_t v246;
  int32x4_t v247;
  int32x4_t v248;
  int32x4_t v249;
  int32x4_t v250;
  int32x4_t v251;
  int32x4_t v252;
  int32x4_t v253;
  int32x4_t v254;
  int32x4_t v255;
  int32x4_t v256;
  __int64 v257;
  float v258;
  int32x4_t* v259;
  int32x4_t* v260;
  int32x4_t* v261;
  int32x4_t v262;
  int32x4_t v263;
  int32x4_t v264;
  int32x4_t v265;
  float32x4_t v266;
  int32x4_t v267;
  float32x4_t v268;
  float32x4_t v269;
  float32x4_t v270;
  float32x4_t v271;
  float32x4_t v272;
  float32x4_t v273;
  float32x4_t v274;
  float32x4_t v275;
  float32x4_t v276;
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
  int32x4_t v287;
  int32x4_t v288;
  float32x4_t v289;
  int32x4_t v290;
  int32x4_t v291;
  float32x4_t v293;
  float32x4_t v294;
  int8x16_t v295;
  float32x4_t v296;
  float32x4_t v297;
  float v298;
  float v299;
  float32x4_t v300;

  result = (int32x4_t**)(a2 + ((unsigned __int64)*a1 << 6));
  {
    v9 = *result;
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v8 = result[1];
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v10 = result[16];
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = 0;
  {
    v12 = (unsigned __int64)result[4];
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *((unsigned __int16*)result + 30);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(_QWORD*)(a6 + 64);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = result[8];
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v260 = result[9];
    __asm__ volatile("" ::"r"(v260));
  }
  {
    v261 = result[17];
    __asm__ volatile("" ::"r"(v261));
  }
  {
    v16 = (*result)[1];
    __asm__ volatile("" ::"w"(v16));
  }
  {
    v17 = v10[1];
    __asm__ volatile("" ::"w"(v17));
  }
  v18 = vzip1q_s32(**result, *v10);
  {
    v19 = result[24];
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = vzip2q_s32(**result, *v10);
  {
    v21 = v15[1];
    __asm__ volatile("" ::"w"(v21));
  }
  {
    v259 = result[25];
    __asm__ volatile("" ::"r"(v259));
  }
  {
    v22 = v19[1];
    __asm__ volatile("" ::"w"(v22));
  }
  {
    v23 = v261[1];
    __asm__ volatile("" ::"w"(v23));
  }
  v24 = vzip1q_s32(*v15, *v19);
  v25 = vzip2q_s32(*v15, *v19);
  v26 = vzip1q_s32(v20, v25);
  v27 = vzip1q_s32(v18, v24);
  v28 = vzip2q_s32(v18, v24);
  {
    v29 = v260[1];
    __asm__ volatile("" ::"w"(v29));
  }
  v264 = vzip2q_s32(v20, v25);
  {
    v30 = v8[1];
    __asm__ volatile("" ::"w"(v30));
  }
  v31 = vzip1q_s32(*v8, *v261);
  v32 = vzip2q_s32(*v8, *v261);
  {
    v33 = v259[1];
    __asm__ volatile("" ::"w"(v33));
  }
  v34 = vzip2q_s32(v30, v23);
  v35 = vzip1q_s32(*v260, *v259);
  v36 = vzip2q_s32(*v260, *v259);
  v37 = vzip2q_s32(v29, v33);
  v38 = vzip1q_s32(v32, v36);
  v39 = vzip2q_s32(v32, v36);
  LANES128(v36).n128_u64[0] = 0x80000000800000LL;
  LANES128(v36).n128_u64[1] = 0x80000000800000LL;
  v40 = vzip1q_s32(v31, v35);
  v41 = vzip2q_s32(v31, v35);
  v42 = vzip2q_s32(v34, v37);
  v265 = v39;
  v43 = vzip1q_s32(v16, v17);
  v44 = vzip2q_s32(v16, v17);
  v45 = vzip1q_s32(v21, v22);
  v46 = vzip2q_s32(v21, v22);
  v47 = vzip1q_s32(v30, v23);
  v48 = vzip1q_s32(v29, v33);
  {
    v49 = (*result)[2];
    __asm__ volatile("" ::"w"(v49));
  }
  {
    v50 = (*result)[3];
    __asm__ volatile("" ::"w"(v50));
  }
  {
    v51 = v10[2];
    __asm__ volatile("" ::"w"(v51));
  }
  {
    v52 = v10[3];
    __asm__ volatile("" ::"w"(v52));
  }
  v53 = vzip1q_s32(v43, v45);
  v54 = vzip2q_s32(v43, v45);
  v55 = vzip2q_s32(v44, v46);
  v56 = vzip1q_s32(v44, v46);
  {
    v57 = v15[2];
    __asm__ volatile("" ::"w"(v57));
  }
  {
    v58 = v15[3];
    __asm__ volatile("" ::"w"(v58));
  }
  {
    v59 = v260[2];
    __asm__ volatile("" ::"w"(v59));
  }
  {
    v60 = v260[3];
    __asm__ volatile("" ::"w"(v60));
  }
  {
    v61 = v261[2];
    __asm__ volatile("" ::"w"(v61));
  }
  {
    v62 = v261[3];
    __asm__ volatile("" ::"w"(v62));
  }
  v300 = vnegq_f32(v36);
  v63 = vzip1q_s32(v47, v48);
  v64 = vzip2q_s32(v47, v48);
  v65 = vzip1q_s32(v34, v37);
  {
    v66 = v19[2];
    __asm__ volatile("" ::"w"(v66));
  }
  {
    v67 = v19[3];
    __asm__ volatile("" ::"w"(v67));
  }
  {
    v69 = v259[2];
    __asm__ volatile("" ::"w"(v69));
  }
  {
    v68 = v259[3];
    __asm__ volatile("" ::"w"(v68));
  }
  v262 = v55;
  v263 = v42;
  {
    v70 = v8[2];
    __asm__ volatile("" ::"w"(v70));
  }
  {
    v71 = v8[3];
    __asm__ volatile("" ::"w"(v71));
  }
  if (v13 != 0) {
    v72 = v12 + 16 * v13;
    v267 = vdupq_lane_s32(a3, 0);
    v73 = vzip1q_s32(v50, v52);
    v74 = vzip2q_s32(v50, v52);
    v75 = vzip1q_s32(v58, v67);
    v76 = vzip1q_s32(v74, vzip2q_s32(v58, v67));
    v77 = vzip1q_s32(v71, v62);
    v78 = vzip2q_s32(v71, v62);
    v79 = vzip1q_s32(v60, v68);
    v80 = vzip1q_s32(v78, vzip2q_s32(v60, v68));
    v81 = vzip1q_s32(v49, v51);
    v82 = vzip2q_s32(v49, v51);
    v83 = vzip1q_s32(v57, v66);
    v84 = vzip1q_s32(v82, vzip2q_s32(v57, v66));
    v85 = vzip1q_s32(v59, v69);
    v291 = vzip1q_s32(v81, v83);
    v289 = v84;
    v290 = vzip2q_s32(v81, v83);
    v86 = vzip1q_s32(v70, v61);
    v286 = vzip1q_s32(vzip2q_s32(v70, v61), vzip2q_s32(v59, v69));
    {
      v273 = *(float32x4_t*)(v12 + 64);
      __asm__ volatile("" ::"w"(v273));
    }
    {
      v274 = *(float32x4_t*)(v12 + 48);
      __asm__ volatile("" ::"w"(v274));
    }
    v287 = vzip2q_s32(v86, v85);
    v288 = vzip1q_s32(v86, v85);
    v87 = v28;
    v266 = vaddq_f32(v274, v273);
    v88 = v27;
    v271 = vsubq_f32(vzip2q_s32(v73, v75), vzip2q_s32(v77, v79));
    v272 = vsubq_f32(vzip1q_s32(v73, v75), vzip1q_s32(v77, v79));
    v270 = vsubq_f32(v76, v80);
    v298 = 0x0.0p+0f;
    v299 = 0x0.0p+0f;
    do {
      {
        v89 = *(unsigned __int8*)(v12 + 1);
        __asm__ volatile("" ::"r"(v89));
      }
      {
        v90 = *(_BYTE*)(v12 + 3);
        __asm__ volatile("" ::"r"(v90));
      }
      {
        v293 = *(float32x4_t*)(v12 + 96);
        __asm__ volatile("" ::"w"(v293));
      }
      {
        v294 = *(float32x4_t*)(v12 + 80);
        __asm__ volatile("" ::"w"(v294));
      }
      {
        v92 = *(float32x4_t*)(v12 + 112);
        __asm__ volatile("" ::"w"(v92));
      }
      {
        v91 = *(float32x4_t*)(v12 + 128);
        __asm__ volatile("" ::"w"(v91));
      }
      {
        v93 = *(float32x4_t*)(v12 + 144);
        __asm__ volatile("" ::"w"(v93));
      }
      if ((v90 & 1) != 0) {
        v94 = 16 * v89;
      }
      else {
        v94 = 0;
      }
      v296 = v87;
      {
        v95 = v12 + 16LL * *(unsigned __int8*)(v12 + 1) +
              176LL * *(unsigned __int8*)(v12 + 1) + 256;
        __asm__ volatile("" ::"r"(v95));
      }
      if ((*(_BYTE*)(v12 + 3) & 1) != 0) {
        v96 = (float32x4_t*)(v12 + 16LL * *(unsigned __int8*)(v12 + 1) +
                             176LL * *(unsigned __int8*)(v12 + 1) + 256);
        __asm__ volatile("" ::"r"(v96));
      }
      else {
        v96 = &v300;
      }
      if (*(_BYTE*)(v12 + 1) != 0) {
        v97 = v88;
        v98 = (__typeof__(v98)){0};
        v99 = 0;
        v100 = (float32x4_t*)(v12 + 416 + 16 * v89);
        v101 = (__typeof__(v101)){0};
        v102 = vmlaq_f32(vmlaq_f32(vmulq_f32(v272, v92), v91, v271), v93, v270);
        v103 = vsubq_f32(
            vmlaq_f32(vmlaq_f32(vmulq_f32(v88, v92), v91, v87), v93, v26),
            vmlaq_f32(vmlaq_f32(vmulq_f32(v40, v92), v91, v41), v93, v38));
        v104 = vnegq_f32(*(float32x4_t*)(v12 + 160));
        do {
          {
            v107 = v100[-10];
            __asm__ volatile("" ::"w"(v107));
          }
          {
            v108 = v100[-9];
            __asm__ volatile("" ::"w"(v108));
          }
          {
            v110 = v100[-8];
            __asm__ volatile("" ::"w"(v110));
          }
          {
            v109 = v100[-7];
            __asm__ volatile("" ::"w"(v109));
          }
          v111 = v12 + 416 + 16 * v99;
          if ((v90 & 1) != 0) {
            v112 = v99;
          }
          else {
            v112 = 0;
          }
          {
            v114 = v100[-6];
            __asm__ volatile("" ::"w"(v114));
          }
          {
            v113 = v100[-5];
            __asm__ volatile("" ::"w"(v113));
          }
          {
            v115 = *(float32x4_t*)(v111 - 160);
            __asm__ volatile("" ::"w"(v115));
          }
          {
            v116 = v100[-3];
            __asm__ volatile("" ::"w"(v116));
          }
          v117 = vminq_f32(
              vaddq_f32(
                  v115,
                  vmaxq_f32(
                      vsubq_f32(
                          vmulq_f32(
                              vminq_f32(
                                  v104,
                                  vmulq_f32(
                                      v100[-1],
                                      vmaxq_f32(
                                          v267,
                                          vaddq_f32(
                                              v100[-4],
                                              vsubq_f32(
                                                  vaddq_f32(
                                                      v102,
                                                      vsubq_f32(
                                                          vmlaq_f32(
                                                              vmlaq_f32(
                                                                  vmulq_f32(
                                                                      v291,
                                                                      v107),
                                                                  v108, v290),
                                                              v110, v289),
                                                          vmlaq_f32(
                                                              vmlaq_f32(
                                                                  vmulq_f32(
                                                                      v288,
                                                                      v109),
                                                                  v114, v287),
                                                              v113, v286))),
                                                  vmulq_n_f32(v100[-2],
                                                              a4)))))),
                              *v100),
                          vmulq_f32(
                              vsubq_f32(
                                  vaddq_f32(
                                      v103,
                                      vsubq_f32(
                                          vmlaq_f32(
                                              vmlaq_f32(vmulq_f32(v53, v107),
                                                        v54, v108),
                                              v56, v110),
                                          vmlaq_f32(
                                              vmlaq_f32(vmulq_f32(v63, v109),
                                                        v64, v114),
                                              v65, v113))),
                                  v100[-2]),
                              v116)),
                      vnegq_f32(v115))),
              v96[v112]);
          v118 = vsubq_f32(v117, v115);
          if (v14 != 0) {
            v119 = vrecpeq_f32(v116);
            v120 = vceqzq_f32(v116);
            v121 = vmulq_f32(v118, vmulq_f32(v119, vrecpsq_f32(v119, v116)));
            v122 = vbicq_s8(v121, v120);
            v123 = vmulq_f32(v122, v122);
            v124 = vbicq_s8(vabsq_f32(v121), v120);
            LANES128(v123).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v123, v123)).n128_u64[0];
            v298 = v298 +
                   LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0])))
                       .n64_f32[0];
            v125 = v299;
            v126 = vandq_s8(v120, COERCE_AS(int8x16_t, GameData_1a830a0));
            LANES128(v126).n128_u64[0] =
                LANES128_OF(vpaddq_s32(v126, v126)).n128_u64[0];
            LANES128(v124).n128_u64[0] =
                LANES64_OF(
                    vpmax_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v124, v124, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0])))
                    .n64_u64[0];
            v127 =
                LANES64_OF(
                    vpadd_s32(COERCE_AS(int32x2_t, LANES128(v126).n128_u64[0]),
                              COERCE_AS(int32x2_t, LANES128(v126).n128_u64[0])))
                    .n64_u8[0];
            v128 = LANES64_OF(
                       vpmax_f32(
                           COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0])))
                       .n64_f32[0];
            if (v299 <= v128) {
              v125 = v128;
            }
            v299 = v125;
            v11 += ((v127 & 1) == 0) + ((~v127 & 2) != 0) + ((~v127 & 4) != 0) +
                   ((~v127 & 8) != 0);
          }
          v101 = vaddq_f32(v101, v118);
          v98 = vaddq_f32(v98, v117);
          ++v99;
          v100 += 11;
          *(float32x4_t*)(v111 - 160) = v117;
          v105 = vmulq_f32(v294, v118);
          v53 = vmlaq_f32(v53, v105, v107);
          v54 = vmlaq_f32(v54, v105, v108);
          v56 = vmlaq_f32(v56, v105, v110);
          v106 = vmulq_f32(v293, v118);
          v63 = vmlsq_f32(v63, v106, v109);
          v64 = vmlsq_f32(v64, v106, v114);
          v65 = vmlsq_f32(v65, v106, v113);
          v103 = vmlaq_f32(v103, v118, v266);
        } while (v89 != v99);
      }
      else {
        v97 = v88;
        v101 = (__typeof__(v101)){0};
        v98 = (__typeof__(v98)){0};
      }
      v129 = vmulq_f32(v274, v101);
      v130 = vmulq_f32(v273, v101);
      {
        v131 = *(unsigned __int8*)(v12 + 2);
        __asm__ volatile("" ::"r"(v131));
      }
      v88 = vmlaq_f32(v97, v129, v92);
      v40 = vmlsq_f32(v40, v130, v92);
      v87 = vmlaq_f32(v296, v129, v91);
      v41 = vmlsq_f32(v41, v130, v91);
      v26 = vmlaq_f32(v26, v129, v93);
      v38 = vmlsq_f32(v38, v130, v93);
      if (*(_BYTE*)(v12 + 2) != 0) {
        v132 = 0;
        v133 = v94 + 192LL * (unsigned int)v89;
        v134 = (float32x4_t*)(v12 + v133 + 272);
        v135 = v12 + 16 * v131 + v133 + 336;
        v268 = vmulq_f32(v98, *(float32x4_t*)(v12 + 32));
        v269 = vaddq_f32(vmulq_f32(v98, *(float32x4_t*)(v12 + 16)),
                         vdupq_n_s32(0x3727C5ACu));
        v295 = (__typeof__(v295)){0};
        do {
          {
            v151 = *(float32x4_t*)(v135 - 80);
            __asm__ volatile("" ::"w"(v151));
          }
          {
            v152 = *(float32x4_t*)(v135 - 64);
            __asm__ volatile("" ::"w"(v152));
          }
          {
            v153 = *(float32x4_t*)(v135 - 48);
            __asm__ volatile("" ::"w"(v153));
          }
          {
            v154 = *(float32x4_t*)(v135 - 32);
            __asm__ volatile("" ::"w"(v154));
          }
          v155 = v53;
          v156 = v63;
          {
            v157 = *(float32x4_t*)(v135 + 128);
            __asm__ volatile("" ::"w"(v157));
          }
          v158 = vmulq_f32(v88, v151);
          v159 = vmulq_f32(v53, v154);
          {
            v160 = *(float32x4_t*)(v135 + 176);
            __asm__ volatile("" ::"w"(v160));
          }
          {
            v161 = *(float32x4_t*)(v135 + 192);
            __asm__ volatile("" ::"w"(v161));
          }
          {
            v162 = *(float32x4_t*)(v135 + 16);
            __asm__ volatile("" ::"w"(v162));
          }
          {
            v164 = *(float32x4_t*)(v135 + 144);
            __asm__ volatile("" ::"w"(v164));
          }
          {
            v163 = *(float32x4_t*)(v135 + 160);
            __asm__ volatile("" ::"w"(v163));
          }
          v282 = v88;
          v283 = v38;
          v165 = vmulq_f32(v88, v157);
          v275 = v155;
          v276 = v54;
          v166 = vmulq_f32(v155, v160);
          {
            v280 = *(float32x4_t*)(v135 + 32);
            __asm__ volatile("" ::"w"(v280));
          }
          v167 = v87;
          v277 = v65;
          v168 = vmulq_f32(v63, v162);
          {
            v169 = *(float32x4_t*)(v135 + 208);
            __asm__ volatile("" ::"w"(v169));
          }
          {
            v170 = *(float32x4_t*)(v135 + 224);
            __asm__ volatile("" ::"w"(v170));
          }
          v171 = vmlaq_f32(v168, v64, v280);
          v278 = v156;
          v279 = v64;
          v172 =
              vmlaq_f32(vmlaq_f32(vmulq_f32(v40, v157), v164, v41), v163, v38);
          v173 =
              vmlaq_f32(vmlaq_f32(vmulq_f32(v40, v151), v152, v41), v153, v38);
          v174 = vaddq_f32(vmlaq_f32(vmlaq_f32(v165, v164, v167), v163, v26),
                           vmlaq_f32(vmlaq_f32(v166, v54, v161), v56, v169));
          v281 = v154;
          v284 = v41;
          v285 = v40;
          v175 = vmulq_f32(v156, v170);
          {
            v177 = *(float32x4_t*)(v135 - 16);
            __asm__ volatile("" ::"w"(v177));
          }
          {
            v176 = *(float32x4_t*)v135;
            __asm__ volatile("" ::"w"(v176));
          }
          v178 = vmlaq_f32(v159, v54, v177);
          {
            v179 = *(float32x4_t*)(v135 + 48);
            __asm__ volatile("" ::"w"(v179));
          }
          v180 = vsubq_f32(
              vaddq_f32(vmlaq_f32(vmlaq_f32(v158, v152, v167), v153, v26),
                        vmlaq_f32(v178, v56, *(float32x4_t*)v135)),
              vaddq_f32(v173, vmlaq_f32(v171, v65, v179)));
          v297 = v167;
          {
            v182 = *(float32x4_t*)(v135 + 240);
            __asm__ volatile("" ::"w"(v182));
          }
          {
            v181 = *(float32x4_t*)(v135 + 256);
            __asm__ volatile("" ::"w"(v181));
          }
          v183 = vsubq_f32(
              v174, vaddq_f32(v172, vmlaq_f32(vmlaq_f32(v175, v279, v182), v277,
                                              v181)));
          v184 = vmulq_f32(v291, v154);
          v185 = v179;
          v186 = v181;
          v187 = vaddq_f32(
              vmlaq_f32(vmlaq_f32(vmulq_f32(v272, v151), v152, v271), v153,
                        v270),
              vsubq_f32(vmlaq_f32(vmlaq_f32(v184, v177, v290),
                                  *(float32x4_t*)v135, v289),
                        vmlaq_f32(vmlaq_f32(vmulq_f32(v288, v162), v280, v287),
                                  v179, v286)));
          {
            v188 = *(float32x4_t*)(v135 + 80);
            __asm__ volatile("" ::"w"(v188));
          }
          {
            v189 = *(float32x4_t*)(v135 + 96);
            __asm__ volatile("" ::"w"(v189));
          }
          v190 = vaddq_f32(*(float32x4_t*)(v135 + 64),
                           vsubq_f32(v187, vmulq_n_f32(v189, a4)));
          {
            v191 = *(float32x4_t*)(v135 + 288);
            __asm__ volatile("" ::"w"(v191));
          }
          v192 = vmlsq_f32(
              vmlsq_f32(v134[-1], v188,
                        vsubq_f32(vmulq_f32(v190, *(float32x4_t*)(v135 + 112)),
                                  v189)),
              v188, v180);
          v193 = vmlsq_f32(
              vmlsq_f32(
                  *v134, v191,
                  vsubq_f32(
                      vmulq_f32(
                          vaddq_f32(
                              *(float32x4_t*)(v135 + 272),
                              vsubq_f32(
                                  vaddq_f32(
                                      vmlaq_f32(vmlaq_f32(vmulq_f32(v272, v157),
                                                          v164, v271),
                                                v163, v270),
                                      vsubq_f32(
                                          vmlaq_f32(
                                              vmlaq_f32(vmulq_f32(v291, v160),
                                                        v161, v290),
                                              v169, v289),
                                          vmlaq_f32(
                                              vmlaq_f32(vmulq_f32(v288, v170),
                                                        v182, v287),
                                              v181, v286))),
                                  vmulq_n_f32(*(float32x4_t*)(v135 + 304),
                                              a4))),
                          *(float32x4_t*)(v135 + 320)),
                      *(float32x4_t*)(v135 + 304))),
              v191, v183);
          v194 = vmlaq_f32(vmulq_f32(v193, v193), v192, v192);
          v195 = vrsqrteq_f32(v194);
          v196 = vmulq_f32(v195, vrsqrtsq_f32(vmulq_f32(v195, v195), v194));
          v197 = vmulq_f32(v196, vrsqrtsq_f32(vmulq_f32(v196, v196), v194));
          v198 = vmulq_f32(v197, vrsqrtsq_f32(vmulq_f32(v197, v197), v194));
          v199 = vbslq_s8(
              vceqzq_f32(v194), v194,
              vmulq_f32(
                  v194,
                  vmulq_f32(v198, vrsqrtsq_f32(vmulq_f32(v198, v198), v194))));
          v200 = vrecpeq_f32(v199);
          v295 = vorrq_s8(v295, vcgtq_f32(v199, v269));
          v201 = vmulq_f32(v200, vrecpsq_f32(v200, v199));
          v202 = vmulq_f32(v201, vrecpsq_f32(v201, v199));
          v203 = vmulq_f32(v202, vrecpsq_f32(v202, v199));
          v204 =
              vandq_s8(vmulq_f32(vmulq_f32(v203, vrecpsq_f32(v203, v199)),
                                 vbslq_s8(v295, vminq_f32(v199, v268), v199)),
                       vcgtzq_f32(v199));
          v205 = vmulq_f32(v192, v204);
          v206 = vmulq_f32(v193, v204);
          v207 = vsubq_f32(v205, v134[-1]);
          v208 = vsubq_f32(v206, *v134);
          if (v14 != 0) {
            v209 = vrecpeq_f32(v208);
            v210 = vceqzq_f32(v208);
            v211 = vmulq_f32(v207, vmulq_f32(v209, vrecpsq_f32(v209, v208)));
            v212 = vbicq_s8(v211, v210);
            v213 = vmulq_f32(v212, v212);
            LANES128(v213).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v213, v213)).n128_u64[0];
            v214 = v298 +
                   LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v213).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v213).n128_u64[0])))
                       .n64_f32[0];
            v215 = vandq_s8(v210, COERCE_AS(int8x16_t, GameData_1a830a0));
            v216 = vbicq_s8(vabsq_f32(v211), v210);
            LANES128(v215).n128_u64[0] =
                LANES128_OF(vpaddq_s32(v215, v215)).n128_u64[0];
            LANES128(v216).n128_u64[0] =
                LANES64_OF(
                    vpmax_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v216, v216, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0])))
                    .n64_u64[0];
            v217 = LANES64_OF(
                       vpmax_f32(
                           COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0])))
                       .n64_f32[0];
            v218 =
                LANES64_OF(
                    vpadd_s32(COERCE_AS(int32x2_t, LANES128(v215).n128_u64[0]),
                              COERCE_AS(int32x2_t, LANES128(v215).n128_u64[0])))
                    .n64_u8[0];
            v219 = vrecpeq_f32(v191);
            v220 = ~v218;
            v221 = (~v218 & 4) != 0;
            {
              v222 = v11 - (*(_DWORD*)&v218 | 0xFFFFFFFE) + ((~v218 & 2) != 0);
              __asm__ volatile("" ::"r"(v222));
            }
            v223 = v221 + ((v220 & 8) != 0);
            if (v299 > v217) {
              v217 = v299;
            }
            v224 = vceqzq_f32(v191);
            v225 = v222 + v223;
            v226 = vmulq_f32(v188, vmulq_f32(v219, vrecpsq_f32(v219, v191)));
            v227 = vbicq_s8(v226, v224);
            v228 = vmulq_f32(v227, v227);
            v229 = vbicq_s8(vabsq_f32(v226), v224);
            LANES128(v228).n128_u64[0] =
                LANES128_OF(vpaddq_f32(v228, v228)).n128_u64[0];
            v298 = v214 +
                   LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v228).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v228).n128_u64[0])))
                       .n64_f32[0];
            v230 = vandq_s8(v224, COERCE_AS(int8x16_t, GameData_1a830a0));
            LANES128(v230).n128_u64[0] =
                LANES128_OF(vpaddq_s32(v230, v230)).n128_u64[0];
            LANES128(v229).n128_u64[0] =
                LANES64_OF(
                    vpmax_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v229, v229, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v229).n128_u64[0])))
                    .n64_u64[0];
            v231 =
                LANES64_OF(
                    vpadd_s32(COERCE_AS(int32x2_t, LANES128(v230).n128_u64[0]),
                              COERCE_AS(int32x2_t, LANES128(v230).n128_u64[0])))
                    .n64_u8[0];
            v232 = LANES64_OF(
                       vpmax_f32(
                           COERCE_AS(float32x2_t, LANES128(v229).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v229).n128_u64[0])))
                       .n64_f32[0];
            if (v217 > v232) {
              v232 = v217;
            }
            v299 = v232;
            v11 = v225 - (*(_DWORD*)&v231 | 0xFFFFFFFE) + ((~v231 & 2) != 0) +
                  ((~v231 & 4) != 0) + ((~v231 & 8) != 0) - 2;
          }
          v132 += 2LL;
          v135 += 416;
          v136 = vmulq_f32(v274, v208);
          v137 = vmulq_f32(v273, v208);
          v134[-1] = v205;
          *v134 = v206;
          v134 += 2;
          v138 = vmlaq_f32(v282, v136, v157);
          v139 = vmlaq_f32(v297, v136, v164);
          v140 = vmlaq_f32(v26, v136, v163);
          v141 = vmulq_f32(v274, v207);
          v142 = vmlsq_f32(v284, v137, v164);
          v143 = vmlsq_f32(v285, v137, v157);
          v144 = vmlsq_f32(v283, v137, v163);
          v145 = vmulq_f32(v273, v207);
          v26 = vmlaq_f32(v140, v141, v153);
          v38 = vmlsq_f32(v144, v145, v153);
          v87 = vmlaq_f32(v139, v141, v152);
          v41 = vmlsq_f32(v142, v145, v152);
          v88 = vmlaq_f32(v138, v141, v151);
          v40 = vmlsq_f32(v143, v145, v151);
          v146 = vmulq_f32(v294, v208);
          v147 = vmulq_f32(v294, v207);
          v54 = vmlaq_f32(vmlaq_f32(v276, v146, v161), v147, v177);
          v56 = vmlaq_f32(vmlaq_f32(v56, v146, v169), v147, v176);
          v53 = vmlaq_f32(vmlaq_f32(v275, v146, v160), v147, v281);
          v148 = vmulq_f32(v293, v208);
          v149 = vmulq_f32(v293, v207);
          v150 = vmlsq_f32(v279, v148, v182);
          v65 = vmlsq_f32(vmlsq_f32(v277, v148, v186), v149, v185);
          v63 = vmlsq_f32(vmlsq_f32(v278, v148, v170), v149, v162);
          v64 = vmlsq_f32(v150, v149, v280);
        } while (v132 < v131);
        *(int8x16_t*)(v12 + 208) = v295;
      }
      v12 = v95 + v94 + 16 * v131 + 208LL * (unsigned int)v131;
    } while (v12 < v72);
  }
  else {
    v87 = v28;
    v299 = 0x0.0p+0f;
    v298 = 0x0.0p+0f;
    v88 = v27;
  }
  v233 = vzip1q_s32(v88, v26);
  v234 = v38;
  {
    v235 = *((_DWORD*)result + 5);
    __asm__ volatile("" ::"r"(v235));
  }
  v236 = v40;
  v237 = vzip2q_s32(v88, v26);
  v238 = v41;
  v239 = vzip1q_s32(v87, v264);
  v240 = vzip2q_s32(v87, v264);
  v241 = vzip1q_s32(v233, v239);
  v242 = vzip2q_s32(v233, v239);
  v243 = vzip1q_s32(v40, v38);
  v244 = vzip1q_s32(v53, v56);
  v245 = vzip1q_s32(v237, v240);
  v246 = vzip2q_s32(v237, v240);
  v247 = vzip1q_s32(v41, v265);
  v248 = vzip2q_s32(v53, v56);
  v249 = vzip1q_s32(v54, v262);
  v250 = vzip2q_s32(v54, v262);
  *v9 = v241;
  v9[1] = vzip1q_s32(v244, v249);
  *v15 = v242;
  v15[1] = vzip2q_s32(v244, v249);
  *v10 = v245;
  v10[1] = vzip1q_s32(v248, v250);
  v251 = vzip1q_s32(v63, v65);
  *v19 = v246;
  v19[1] = vzip2q_s32(v248, v250);
  v252 = vzip1q_s32(v64, v263);
  if (v235 != 0) {
    *v8 = vzip1q_s32(v243, v247);
    v8[1] = vzip1q_s32(v251, v252);
  }
  if (*((_DWORD*)result + 21) != 0) {
    *v260 = vzip2q_s32(v243, v247);
    v260[1] = vzip2q_s32(v251, v252);
  }
  v253 = vzip2q_s32(v236, v234);
  v254 = vzip2q_s32(v238, v265);
  v255 = vzip2q_s32(v63, v65);
  v256 = vzip2q_s32(v64, v263);
  if (*((_DWORD*)result + 37) != 0) {
    *v261 = vzip1q_s32(v253, v254);
    v261[1] = vzip1q_s32(v255, v256);
  }
  if (*((_DWORD*)result + 53) != 0) {
    *v259 = vzip2q_s32(v253, v254);
    v259[1] = vzip2q_s32(v255, v256);
  }
  if (v14 != 0) {
    {
      v257 = *(_QWORD*)(a6 + 64);
      __asm__ volatile("" ::"r"(v257));
    }
    {
      v258 = v298 + *(float*)v257;
      __asm__ volatile("" ::"w"(v258));
    }
    *(_DWORD*)(v257 + 4) += v11;
    *(float*)v257 = v258;
    if (v299 > *(float*)(v257 + 8)) {
      *(float*)(v257 + 8) = v299;
    }
  }
  return result;
}

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
