#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* physx_PxTempAllocator_allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
void physx_PxTempAllocator_deallocate(__int64, __int64);
void physx_source_lowleveldynamics_src_327da0(__int64 a1, __int64 a2,
                                              unsigned int a3, float* a4,
                                              float32x4_t* a5, unsigned int a6,
                                              float* a7, float* a8);

void physx_source_lowleveldynamics_src_327da0(__int64 a1, __int64 a2,
                                              unsigned int a3, float* a4,
                                              float32x4_t* a5, unsigned int a6,
                                              float* a7, float* a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  unsigned int* v20;
  __int128 v21;
  __int128 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float* v27;
  __int64 v28;
  float* v29;
  float v30;
  float v31;
  float v32;
  float* v33;
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
  float32x4_t* v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float v79;
  float v80;
  float v81;
  float32x4_t v82;
  __int128 v83;
  __int64 v84;
  __int64 v85;
  float* v86;
  __int64 v87;
  float* v88;
  float* v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float* v96;
  float32x4_t v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  float* v101;
  float* v102;
  float32x4_t v103;
  float v104;
  float v105;
  __int128 v106;
  __int64 v107;
  float v108;
  __int64 v109;
  float* v110;
  float* v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float* v117;
  float* v118;
  __int64 v119;
  float v120;
  float v121;
  float v122;
  int v123;
  unsigned __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  _DWORD* v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  unsigned __int64 v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float* v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  unsigned int v162;
  float32x4_t* v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  float* v195;
  unsigned int* v196;
  __int64 v197;
  float v198;
  float v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  float* v203;
  float* v204;
  __int64 v205;
  float* v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float* v218;
  float* v219;
  float* v220;
  float v221;
  float v222;
  float v223;
  float v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  float* v229;
  __int64 v230;
  float v231;
  __int64 v232;
  float* v233;
  float* v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  float* v240;
  float* v241;
  __int64 v242;
  float v243;
  float v244;
  float v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  float* v254;
  unsigned int* v255;
  __int64 v256;
  float v257;
  float v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  float* v262;
  float* v263;
  __int64 v264;
  float* v265;
  float v266;
  float v267;
  float v268;
  float v269;
  float v270;
  float v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  float* v277;
  float* v278;
  float* v279;
  float v280;
  float v281;
  float v282;
  float v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  float* v288;
  __int64 v289;
  float v290;
  __int64 v291;
  float* v292;
  float* v293;
  float v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float* v299;
  float* v300;
  __int64 v301;
  float v302;
  float v303;
  float v304;
  float* v305;
  float* v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  int v310;
  __int64 v311;
  float v312;
  float v313;
  float v314;
  float v315;
  float v316;
  unsigned int* v317;
  float v318;
  float v319;
  int v320;
  float v321;
  float v322;
  float v323;
  float v324;
  __int64 v325;
  __int64 v326;
  float* v327;
  float* v328;
  float* v329;
  __int64 v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  float v340;
  float v341;
  float v342;
  float v343;
  float v344;
  float* v345;
  float* v346;
  float v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  int v351;
  __int64 v352;
  float* v353;
  float v354;
  float v355;
  float v356;
  float v357;
  float v358;
  unsigned int* v359;
  float v360;
  float v361;
  int v362;
  float v363;
  float v364;
  float v365;
  float v366;
  __int64 v367;
  __int64 v368;
  float* v369;
  float* v370;
  float* v371;
  __int64 v372;
  float v373;
  float v374;
  float v375;
  float v376;
  float v377;
  float v378;
  float v379;
  float v380;
  float v381;
  float v382;
  float v383;
  float v384;
  float v385;
  float v386;
  float* v387;
  float* v388;
  float v389;
  struct {
    float v390;
    float v391;
    float v392;
    float v393;
    __int64 v394;
    float32x4_t* v395;
    float* v396;
  } v390_;
  _BYTE v397[768];
  _QWORD v398[3];
  int v399;
  _BYTE v400[84];
  struct {
    __int64 v401;
    int v402;
  } v401_;
  _BYTE v403[4];
  __int64 v404;
  _QWORD v405[4];

  if (*(_DWORD*)(a1 + 40LL * a6 + 32) != a3) {
    *(_QWORD*)&v400[4] = v17;
    *(_QWORD*)&v400[12] = v16;
    *(_QWORD*)&v400[20] = v15;
    *(_QWORD*)&v400[28] = v14;
    *(_QWORD*)&v400[36] = v13;
    *(_QWORD*)&v400[44] = v12;
    *(_QWORD*)&v400[52] = v11;
    *(_QWORD*)&v400[60] = v10;
    *(_QWORD*)&v400[68] = v8;
    *(_QWORD*)&v400[76] = v9;
    v123 = *(_DWORD*)(a2 + 808);
    v390_.v395 = a5;
    v390_.v396 = a8;
    v128 = a6;
    v129 = a3;
    v130 = (unsigned int)(4 * v123);
    v390_.v394 = v130;
    LOBYTE(v398[1]) = (unsigned int)v130 > 0x1000;
    if ((unsigned int)v130 <= 0x1000) {
      v131 = (_DWORD*)((char*)&v390_.v390 - ((v130 + 15) & 0x1FFFFFFF0LL));
      v398[0] = v131;
      v132 = a3;
      if (a3 == (unsigned __int64)a6) {
      LABEL_36:
        v135 = *a4;
        v134 = a4[1];
        v136 = a4[2];
        v137 = a4[4];
        v138 = a4[5];
        v139 = a4[6];
        v140 = *a7;
        v141 = a7[1];
        v142 = a7[2];
        v144 = a7[4];
        v143 = a7[5];
        v145 = a7[6];
        v146 = (unsigned int)(4 * *(_DWORD*)(a2 + 896));
        if ((_DWORD)v146 != 0) {
          v390_.v391 = a7[2];
          v390_.v392 = v143;
          v390_.v393 = v145;
          v147 = v144;
          v148 = v137;
          v390_.v390 = v138;
          memset((__int64)v397, 0, v146);
          v138 = v390_.v390;
          v142 = v390_.v391;
          v137 = v148;
          v144 = v147;
          v143 = v390_.v392;
          v145 = v390_.v393;
        }
        v149 = -v135;
        v150 = -v134;
        v151 = -v136;
        v152 = -v137;
        v153 = -v138;
        v154 = -v139;
        if (v132 == v129) {
          LODWORD(v155) = 0;
        LABEL_40:
          v156 = -v140;
          v157 = -v141;
          v158 = -v142;
          v159 = -v144;
          v160 = -v143;
          v161 = -v145;
          if (v132 == v128) {
            v162 = (unsigned int)v155;
          LABEL_42:
            v163 = (float32x4_t*)(*(_QWORD*)(a2 + 512) + 192 * v132);
            v164 = -(float)(v149 + v156);
            v165 = -(float)(v150 + v157);
            v166 = -(float)(v151 + v158);
            v167 = -(float)(v152 + v159);
            v168 = -(float)(v153 + v160);
            v169 = -(float)(v154 + v161);
            v170 = vmulq_n_f32(*v163, v164);
            v171 = vmulq_n_f32(v163[2], v165);
            v172 = vaddq_f32(vmulq_n_f32(v163[1], v164),
                             vmulq_n_f32(v163[3], v165));
            v173 = vmulq_n_f32(v163[4], v166);
            v174 = vaddq_f32(v172, vmulq_n_f32(v163[5], v166));
            v175 = vaddq_f32(vaddq_f32(vaddq_f32(vaddq_f32(v170, v171), v173),
                                       vmulq_n_f32(v163[6], v167)),
                             vmulq_n_f32(v163[8], v168));
            v176 = vaddq_f32(vaddq_f32(v174, vmulq_n_f32(v163[7], v167)),
                             vmulq_n_f32(v163[9], v168));
            v177 = vaddq_f32(v175, vmulq_n_f32(v163[10], v169));
            v178 = vaddq_f32(v176, vmulq_n_f32(v163[11], v169));
            v179 = LANES128(v177).n128_f32[1];
            v180 = LANES128(v178).n128_f32[1];
            v181 = LANES128(v178).n128_f32[2];
            v182 = LANES128(v177).n128_f32[2];
            v183 = LANES128(v178).n128_f32[0];
            v184 = LANES128(v178).n128_f32[2];
            v185 = LANES128(v178).n128_f32[1];
            v186 = LANES128(v177).n128_f32[2];
            v187 = LANES128(v177).n128_u64[0];
            if (v162 > (unsigned int)v155) {
              v188 = *(_QWORD*)(a2 + 576);
              v189 = *(_QWORD*)(a2 + 592);
              v190 = *(_QWORD*)(a2 + 840);
              v187 = LANES128(v177).n128_u64[0];
              v186 = LANES128(v177).n128_f32[2];
              v191 = *(_QWORD*)(a2 + 704);
              v192 = *(_QWORD*)(a2 + 672);
              v183 = LANES128(v178).n128_f32[0];
              v193 = v162;
              v185 = LANES128(v178).n128_f32[1];
              v184 = LANES128(v178).n128_f32[2];
              while (1) {
                v194 = (unsigned int)v131[--v193];
                v195 = (float*)(v191 + 12LL * (unsigned int)v194);
                v196 = (unsigned int*)(v190 + 8 * v194);
                v197 = *((unsigned __int8*)v196 + 4);
                v198 = v195[2];
                v199 = v195[1];
                v183 = v183 + (float)((float)(PSEUDO_UNFUSED(
                                          *((float*)&v187 + 1) * v198)) -
                                      (float)(v199 * v186));
                v185 = v185 + (float)((float)(PSEUDO_UNFUSED(v186 * *v195)) -
                                      (float)(v198 * *(float*)&v187));
                v184 = v184 +
                       (float)((float)(PSEUDO_UNFUSED(*(float*)&v187 * v199)) -
                               (float)(*v195 * *((float*)&v187 + 1)));
                if (*((_BYTE*)v196 + 4) == 0) {
                  goto LABEL_44;
                }
                v200 = *v196;
                if ((unsigned int)v197 < 4) {
                  break;
                }
                v203 = (float*)(v189 + 64 + 32 * v200);
                v204 = (float*)&v397[4 * v200 + 8];
                v205 = 0;
                v206 = (float*)&v399;
                do {
                  v205 -= 4;
                  v207 =
                      (float)(PSEUDO_UNFUSED(*((float*)&v187 + 1) * v203[5])) +
                      (float)(v203[4] * *(float*)&v187);
                  v208 = v203[6];
                  v209 = *(v204 - 1) -
                         (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                     *((float*)&v187 + 1) *
                                                     *(v203 - 3))) +
                                                 (float)(*(v203 - 4) *
                                                         *(float*)&v187)) +
                                         (float)(*(v203 - 2) * v186)) +
                                 (float)((float)((float)(PSEUDO_UNFUSED(
                                                     v185 * *(v203 - 7))) +
                                                 (float)(*(v203 - 8) * v183)) +
                                         (float)(*(v203 - 6) * v184)));
                  *(v206 - 2) =
                      *(v204 - 2) -
                      (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                  *((float*)&v187 + 1) *
                                                  *(v203 - 11))) +
                                              (float)(*(v203 - 12) *
                                                      *(float*)&v187)) +
                                      (float)(*(v203 - 10) * v186)) +
                              (float)((float)((float)(PSEUDO_UNFUSED(
                                                  v185 * *(v203 - 15))) +
                                              (float)(*(v203 - 16) * v183)) +
                                      (float)(*(v203 - 14) * v184)));
                  *(v206 - 1) = v209;
                  v210 = v203[10];
                  v211 =
                      (float)(v207 + (float)(v208 * v186)) +
                      (float)((float)((float)(PSEUDO_UNFUSED(v185 * v203[1])) +
                                      (float)(*v203 * v183)) +
                              (float)(v203[2] * v184));
                  v212 = *v204;
                  v213 = v204[1];
                  v204 += 4;
                  v214 = v212 - v211;
                  v215 = (float)((float)(PSEUDO_UNFUSED(*((float*)&v187 + 1) *
                                                        v203[13])) +
                                 (float)(v203[12] * *(float*)&v187)) +
                         (float)(v203[14] * v186);
                  v216 = v203[8];
                  v217 = v203[9];
                  v203 += 32;
                  *v206 = v214;
                  v206[1] =
                      v213 -
                      (float)(v215 + (float)((float)((float)(PSEUDO_UNFUSED(
                                                         v185 * v217)) +
                                                     (float)(v216 * v183)) +
                                             (float)(v210 * v184)));
                  v206 += 4;
                } while (-(__int64)((unsigned __int8)v197 & 0xFC) != v205);
                v201 = -v205;
                v202 = v197 & 3;
                if ((v197 & 3) != 0) {
                  goto LABEL_52;
                }
              LABEL_54:
                if ((_DWORD)v197 != 0) {
                  v225 = v188 + 36LL * (unsigned int)v194;
                  v226 = 0;
                  v227 = v192 + 24LL * (unsigned int)v200;
                  v228 = v188 + 48 + 36LL * (unsigned int)v194;
                  while ((unsigned int)v197 < 8) {
                    v230 = 0;
                    v231 = 0x0.0p+0f;
                    if ((v197 & 7) != 0) {
                      goto LABEL_63;
                    }
                  LABEL_56:
                    v229 = (float*)(v227 + 24 * v226++);
                    v228 += 4;
                    v225 += 4;
                    v186 = v186 + (float)(PSEUDO_UNFUSED(v231 * v229[2]));
                    v183 = v183 + (float)(PSEUDO_UNFUSED(v231 * v229[3]));
                    v185 = v185 + (float)(PSEUDO_UNFUSED(v231 * v229[4]));
                    v184 = v184 + (float)(PSEUDO_UNFUSED(v231 * v229[5]));
                    v187 = __PAIR64__(
                        *((float*)&v187 + 1) +
                            (float)(PSEUDO_UNFUSED(v231 * v229[1])),
                        *(float*)&v187 + (float)(PSEUDO_UNFUSED(v231 * *v229)));
                    if (v226 == v197) {
                      goto LABEL_44;
                    }
                  }
                  v231 = 0x0.0p+0f;
                  v232 = 0;
                  v233 = (float*)v228;
                  v234 = (float*)v400;
                  do {
                    v232 -= 8;
                    v235 =
                        (float)((float)((float)((float)((float)(v231 +
                                                                (float)(*(v233 -
                                                                          12) *
                                                                        *(v234 -
                                                                          4))) +
                                                        (float)(*(v233 - 9) *
                                                                *(v234 - 3))) +
                                                (float)(*(v233 - 6) *
                                                        *(v234 - 2))) +
                                        (float)(*(v233 - 3) * *(v234 - 1))) +
                                (float)(*v233 * *v234)) +
                        (float)(v233[3] * v234[1]);
                    v236 = v234[2];
                    v237 = v234[3];
                    v234 += 8;
                    v238 = v235 + (float)(v233[6] * v236);
                    v239 = v233[9];
                    v233 += 24;
                    v231 = v238 + (float)(v239 * v237);
                  } while (-(__int64)((unsigned __int8)v197 & 0xF8) != v232);
                  v230 = -v232;
                  if ((v197 & 7) == 0) {
                    goto LABEL_56;
                  }
                LABEL_63:
                  v240 = (float*)&v398[2] + v230 + 1;
                  v241 = (float*)(v225 + 12 * v230);
                  v242 = v197 & 7;
                  do {
                    v243 = *v241;
                    v241 += 3;
                    v244 = v243;
                    v245 = *v240++;
                    --v242;
                    v231 = v231 + (float)(v244 * v245);
                  } while (v242 != 0);
                  goto LABEL_56;
                }
              LABEL_44:
                if (v193 <= (unsigned int)v155) {
                  goto LABEL_66;
                }
              }
              v201 = 0;
              v202 = v197 & 3;
              if ((v197 & 3) == 0) {
                goto LABEL_54;
              }
            LABEL_52:
              v218 = (float*)&v398[2] + v201 + 1;
              v219 = (float*)&v397[4 * v201 + 4 * v200];
              v220 = (float*)(v189 + 16 + 32 * v201 + 32 * v200);
              do {
                --v202;
                v221 = (float)((float)(PSEUDO_UNFUSED(*((float*)&v187 + 1) *
                                                      v220[1])) +
                               (float)(*v220 * *(float*)&v187)) +
                       (float)(v220[2] * v186);
                v222 = (float)(PSEUDO_UNFUSED(v185 * *(v220 - 3))) +
                       (float)(*(v220 - 4) * v183);
                v223 = *(v220 - 2);
                v220 += 8;
                v224 = *v219++;
                *v218++ =
                    v224 - (float)(v221 + (float)(v222 + (float)(v223 * v184)));
              } while (v202 != 0);
              goto LABEL_54;
            }
          LABEL_66:
            if ((_DWORD)v155 == 0) {
            LABEL_90:
              v306 = (float*)v390_.v395;
              v305 = v390_.v396;
              LANES128(*(v390_.v395)).n128_u32[0] = LANES128(v178).n128_u32[0];
              v306[1] = v180;
              v306[2] = v181;
              v306[4] = LANES128(v177).n128_f32[0];
              v306[5] = v179;
              v306[6] = v182;
              *v305 = v183;
              v305[1] = v185;
              v305[2] = v184;
              *((_QWORD*)v305 + 2) = v187;
              v305[6] = v186;
              if ((unsigned int)v390_.v394 > 0x1000) {
                physx_PxTempAllocator_deallocate((__int64)v398, (__int64)v131);
              }
              return;
            }
            v246 = *(_QWORD*)(a2 + 576);
            v247 = *(_QWORD*)(a2 + 592);
            v248 = *(_QWORD*)(a2 + 840);
            v249 = *(_QWORD*)(a2 + 704);
            v155 = (float*)(unsigned int)v155;
            v250 = *(_QWORD*)(a2 + 672);
            v251 = v247 + 64;
            v252 = v247 + 16;
            while (1) {
              v155 = (float*)((char*)v155 - 1);
              v253 = (unsigned int)v131[(_QWORD)v155];
              v254 = (float*)(v249 + 12LL * (unsigned int)v253);
              v255 = (unsigned int*)(v248 + 8 * v253);
              v256 = *((unsigned __int8*)v255 + 4);
              v257 = v254[2];
              v258 = v254[1];
              LANES128(v178).n128_f32[0] =
                  LANES128(v178).n128_f32[0] +
                  (float)((float)(PSEUDO_UNFUSED(v179 * v257)) -
                          (float)(v258 * v182));
              v180 = v180 + (float)((float)(PSEUDO_UNFUSED(v182 * *v254)) -
                                    (float)(v257 * LANES128(v177).n128_f32[0]));
              v181 = v181 + (float)((float)(PSEUDO_UNFUSED(
                                        LANES128(v177).n128_f32[0] * v258)) -
                                    (float)(*v254 * v179));
              if (*((_BYTE*)v255 + 4) == 0) {
                goto LABEL_68;
              }
              v259 = *v255;
              if ((unsigned int)v256 < 4) {
                break;
              }
              v262 = (float*)(v251 + 32 * v259);
              v263 = (float*)&v397[4 * v259 + 8];
              v264 = 0;
              v265 = (float*)&v399;
              do {
                v264 -= 4;
                v266 = (float)(PSEUDO_UNFUSED(v179 * v262[5])) +
                       (float)(v262[4] * LANES128(v177).n128_f32[0]);
                v267 = v262[6];
                v268 = *(v263 - 1) -
                       (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                   v179 * *(v262 - 3))) +
                                               (float)(*(v262 - 4) *
                                                       LANES128(v177)
                                                           .n128_f32[0])) +
                                       (float)(*(v262 - 2) * v182)) +
                               (float)((float)((float)(PSEUDO_UNFUSED(
                                                   v180 * *(v262 - 7))) +
                                               (float)(*(v262 - 8) *
                                                       LANES128(v178)
                                                           .n128_f32[0])) +
                                       (float)(*(v262 - 6) * v181)));
                *(v265 - 2) =
                    *(v263 - 2) -
                    (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                v179 * *(v262 - 11))) +
                                            (float)(*(v262 - 12) *
                                                    LANES128(v177)
                                                        .n128_f32[0])) +
                                    (float)(*(v262 - 10) * v182)) +
                            (float)((float)((float)(PSEUDO_UNFUSED(
                                                v180 * *(v262 - 15))) +
                                            (float)(*(v262 - 16) *
                                                    LANES128(v178)
                                                        .n128_f32[0])) +
                                    (float)(*(v262 - 14) * v181)));
                *(v265 - 1) = v268;
                v269 = v262[10];
                v270 = (float)(v266 + (float)(v267 * v182)) +
                       (float)((float)((float)(PSEUDO_UNFUSED(v180 * v262[1])) +
                                       (float)(*v262 *
                                               LANES128(v178).n128_f32[0])) +
                               (float)(v262[2] * v181));
                v271 = *v263;
                v272 = v263[1];
                v263 += 4;
                v273 = v271 - v270;
                v274 = (float)((float)(PSEUDO_UNFUSED(v179 * v262[13])) +
                               (float)(v262[12] * LANES128(v177).n128_f32[0])) +
                       (float)(v262[14] * v182);
                v275 = v262[8];
                v276 = v262[9];
                v262 += 32;
                *v265 = v273;
                v265[1] =
                    v272 -
                    (float)(v274 +
                            (float)((float)((float)(PSEUDO_UNFUSED(v180 *
                                                                   v276)) +
                                            (float)(v275 * LANES128(v178)
                                                               .n128_f32[0])) +
                                    (float)(v269 * v181)));
                v265 += 4;
              } while (-(__int64)((unsigned __int8)v256 & 0xFC) != v264);
              v260 = -v264;
              v261 = v256 & 3;
              if ((v256 & 3) != 0) {
                goto LABEL_76;
              }
            LABEL_78:
              if ((_DWORD)v256 != 0) {
                v284 = v246 + 36LL * (unsigned int)v253;
                v285 = 0;
                v286 = v250 + 24LL * (unsigned int)v259;
                v287 = v246 + 48 + 36LL * (unsigned int)v253;
                while ((unsigned int)v256 < 8) {
                  v289 = 0;
                  v290 = 0x0.0p+0f;
                  if ((v256 & 7) != 0) {
                    goto LABEL_87;
                  }
                LABEL_80:
                  v288 = (float*)(v286 + 24 * v285++);
                  v287 += 4;
                  v284 += 4;
                  LANES128(v177).n128_f32[0] =
                      LANES128(v177).n128_f32[0] +
                      (float)(PSEUDO_UNFUSED(v290 * *v288));
                  v179 = v179 + (float)(PSEUDO_UNFUSED(v290 * v288[1]));
                  v182 = v182 + (float)(PSEUDO_UNFUSED(v290 * v288[2]));
                  LANES128(v178).n128_f32[0] =
                      LANES128(v178).n128_f32[0] +
                      (float)(PSEUDO_UNFUSED(v290 * v288[3]));
                  v180 = v180 + (float)(PSEUDO_UNFUSED(v290 * v288[4]));
                  v181 = v181 + (float)(PSEUDO_UNFUSED(v290 * v288[5]));
                  if (v285 == v256) {
                    goto LABEL_68;
                  }
                }
                v290 = 0x0.0p+0f;
                v291 = 0;
                v292 = (float*)v287;
                v293 = (float*)v400;
                do {
                  v291 -= 8;
                  v294 =
                      (float)((float)((float)((float)((float)(v290 +
                                                              (float)(*(v292 -
                                                                        12) *
                                                                      *(v293 -
                                                                        4))) +
                                                      (float)(*(v292 - 9) *
                                                              *(v293 - 3))) +
                                              (float)(*(v292 - 6) *
                                                      *(v293 - 2))) +
                                      (float)(*(v292 - 3) * *(v293 - 1))) +
                              (float)(*v292 * *v293)) +
                      (float)(v292[3] * v293[1]);
                  v295 = v293[2];
                  v296 = v293[3];
                  v293 += 8;
                  v297 = v294 + (float)(v292[6] * v295);
                  v298 = v292[9];
                  v292 += 24;
                  v290 = v297 + (float)(v298 * v296);
                } while (-(__int64)((unsigned __int8)v256 & 0xF8) != v291);
                v289 = -v291;
                if ((v256 & 7) == 0) {
                  goto LABEL_80;
                }
              LABEL_87:
                v299 = (float*)&v398[2] + v289 + 1;
                v300 = (float*)(v284 + 12 * v289);
                v301 = v256 & 7;
                do {
                  v302 = *v300;
                  v300 += 3;
                  v303 = v302;
                  v304 = *v299++;
                  --v301;
                  v290 = v290 + (float)(v303 * v304);
                } while (v301 != 0);
                goto LABEL_80;
              }
            LABEL_68:
              if (v155 == nullptr) {
                goto LABEL_90;
              }
            }
            v260 = 0;
            v261 = v256 & 3;
            if ((v256 & 3) == 0) {
              goto LABEL_78;
            }
          LABEL_76:
            v277 = (float*)&v398[2] + v260 + 1;
            v278 = (float*)&v397[4 * v260 + 4 * v259];
            v279 = (float*)(v252 + 32 * v260 + 32 * v259);
            do {
              --v261;
              v280 = (float)((float)(PSEUDO_UNFUSED(v179 * v279[1])) +
                             (float)(*v279 * LANES128(v177).n128_f32[0])) +
                     (float)(v279[2] * v182);
              v281 = (float)(PSEUDO_UNFUSED(v180 * *(v279 - 3))) +
                     (float)(*(v279 - 4) * LANES128(v178).n128_f32[0]);
              v282 = *(v279 - 2);
              v279 += 8;
              v283 = *v278++;
              *v277++ =
                  v283 - (float)(v280 + (float)(v281 + (float)(v282 * v181)));
            } while (v261 != 0);
            goto LABEL_78;
          }
          v348 = *(_QWORD*)(a2 + 688);
          v349 = *(_QWORD*)(a2 + 672);
          v350 = *(_QWORD*)(a2 + 840);
          v351 = (int)v155;
          v352 = *(_QWORD*)(a2 + 704);
          while (1) {
            v359 = (unsigned int*)(v350 + 8 * v128);
            v360 = 0x0.0p+0f;
            v361 = 0x0.0p+0f;
            v362 = *((unsigned __int8*)v359 + 4);
            v363 = 0x0.0p+0f;
            v364 = 0x0.0p+0f;
            v365 = 0x0.0p+0f;
            v366 = 0x0.0p+0f;
            if (*((_BYTE*)v359 + 4) != 0) {
              v367 = *v359;
              if (v362 == 1) {
                v368 = 0;
              }
              else {
                v369 = (float*)(v349 + 24 + 24LL * (unsigned int)v367);
                v370 = (float*)(v348 + 32 + 32 * v367);
                v371 = (float*)&v397[4 * v367 + 4];
                v372 = 0;
                do {
                  v372 -= 2;
                  v373 = 0x0.0p+0f -
                         (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                     v157 * *(v369 - 2))) +
                                                 (float)(*(v369 - 3) * v156)) +
                                         (float)(*(v369 - 1) * v158)) +
                                 (float)((float)((float)(PSEUDO_UNFUSED(
                                                     v160 * *(v369 - 5))) +
                                                 (float)(*(v369 - 6) * v159)) +
                                         (float)(*(v369 - 4) * v161)));
                  v374 = v363 + (float)(PSEUDO_UNFUSED(*(v370 - 6) * v373));
                  v375 = v364 + (float)(PSEUDO_UNFUSED(*(v370 - 4) * v373));
                  v376 = v365 + (float)(PSEUDO_UNFUSED(v373 * *(v370 - 3)));
                  v377 = v366 + (float)(PSEUDO_UNFUSED(v373 * *(v370 - 2)));
                  v378 = v360 + (float)(PSEUDO_UNFUSED(*(v370 - 8) * v373));
                  v379 = v361 + (float)(PSEUDO_UNFUSED(*(v370 - 7) * v373));
                  v380 = *v371;
                  *(v371 - 1) = v373 + *(v371 - 1);
                  v381 = v369[2];
                  v382 = (float)((float)(PSEUDO_UNFUSED(v157 * v369[4])) +
                                 (float)(v369[3] * v156)) +
                         (float)(v369[5] * v158);
                  v383 = *v369;
                  v384 = v369[1];
                  v369 += 12;
                  v385 = 0x0.0p+0f -
                         (float)(v382 + (float)((float)((float)(PSEUDO_UNFUSED(
                                                            v160 * v384)) +
                                                        (float)(v383 * v159)) +
                                                (float)(v381 * v161)));
                  v363 = v374 + (float)(PSEUDO_UNFUSED(v370[2] * v385));
                  v364 = v375 + (float)(PSEUDO_UNFUSED(v370[4] * v385));
                  v365 = v376 + (float)(PSEUDO_UNFUSED(v385 * v370[5]));
                  v360 = v378 + (float)(PSEUDO_UNFUSED(*v370 * v385));
                  v386 = v370[6];
                  v361 = v379 + (float)(PSEUDO_UNFUSED(v370[1] * v385));
                  v370 += 16;
                  *v371 = v385 + v380;
                  v371 += 2;
                  v366 = v377 + (float)(PSEUDO_UNFUSED(v385 * v386));
                } while (-(__int64)((unsigned __int8)v362 & 0xFE) != v372);
                v368 = -v372;
                if ((v362 & 1) == 0) {
                  goto LABEL_103;
                }
              }
              v387 = (float*)(v348 + 32 * v367 + 32 * v368);
              v388 = (float*)(v349 + 24LL * (unsigned int)v367 + 24 * v368);
              v389 =
                  0x0.0p+0f - (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                          v157 * v388[4])) +
                                                      (float)(v388[3] * v156)) +
                                              (float)(v388[5] * v158)) +
                                      (float)((float)((float)(PSEUDO_UNFUSED(
                                                          v160 * v388[1])) +
                                                      (float)(*v388 * v159)) +
                                              (float)(v388[2] * v161)));
              v363 = v363 + (float)(PSEUDO_UNFUSED(v387[2] * v389));
              v364 = v364 + (float)(PSEUDO_UNFUSED(v387[4] * v389));
              v365 = v365 + (float)(PSEUDO_UNFUSED(v389 * v387[5]));
              v366 = v366 + (float)(PSEUDO_UNFUSED(v389 * v387[6]));
              v360 = v360 + (float)(PSEUDO_UNFUSED(*v387 * v389));
              v361 = v361 + (float)(PSEUDO_UNFUSED(v387[1] * v389));
              *(float*)&v397[4 * v367 + 4 * v368] =
                  v389 + *(float*)&v397[4 * v367 + 4 * v368];
            }
          LABEL_103:
            v353 = (float*)(v352 + 12 * v128);
            v354 = v159 + v364;
            v355 = v161 + v366;
            v158 = v158 + v363;
            v357 = v353[1];
            v356 = v353[2];
            v358 = *v353;
            v157 = v157 + v361;
            v156 = v156 + v360;
            v162 = v351 + 1;
            v131[v351] = v128;
            v128 = *(unsigned int*)(a1 + 40 * v128 + 32);
            ++v351;
            v159 = v354 + (float)((float)(v357 * v158) -
                                  (float)(PSEUDO_UNFUSED(v356 * v157)));
            v160 = (float)(v160 + v365) +
                   (float)((float)(v356 * v156) -
                           (float)(PSEUDO_UNFUSED(v358 * v158)));
            v161 = v355 + (float)((float)(v358 * v157) -
                                  (float)(PSEUDO_UNFUSED(v357 * v156)));
            if (v128 == v132) {
              goto LABEL_42;
            }
          }
        }
        v307 = *(_QWORD*)(a2 + 688);
        v308 = *(_QWORD*)(a2 + 672);
        v309 = *(_QWORD*)(a2 + 840);
        v310 = 0;
        v311 = *(_QWORD*)(a2 + 704);
        while (1) {
          v317 = (unsigned int*)(v309 + 8 * v129);
          v318 = 0x0.0p+0f;
          v319 = 0x0.0p+0f;
          v320 = *((unsigned __int8*)v317 + 4);
          v321 = 0x0.0p+0f;
          v322 = 0x0.0p+0f;
          v323 = 0x0.0p+0f;
          v324 = 0x0.0p+0f;
          if (*((_BYTE*)v317 + 4) != 0) {
            v325 = *v317;
            if (v320 == 1) {
              v326 = 0;
            }
            else {
              v327 = (float*)(v308 + 24 + 24LL * (unsigned int)v325);
              v328 = (float*)(v307 + 32 + 32 * v325);
              v329 = (float*)&v397[4 * v325 + 4];
              v330 = 0;
              do {
                v330 -= 2;
                v331 = 0x0.0p+0f -
                       (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                   v150 * *(v327 - 2))) +
                                               (float)(*(v327 - 3) * v149)) +
                                       (float)(*(v327 - 1) * v151)) +
                               (float)((float)((float)(PSEUDO_UNFUSED(
                                                   v153 * *(v327 - 5))) +
                                               (float)(*(v327 - 6) * v152)) +
                                       (float)(*(v327 - 4) * v154)));
                v332 = v321 + (float)(PSEUDO_UNFUSED(*(v328 - 6) * v331));
                v333 = v322 + (float)(PSEUDO_UNFUSED(*(v328 - 4) * v331));
                v334 = v323 + (float)(PSEUDO_UNFUSED(v331 * *(v328 - 3)));
                v335 = v324 + (float)(PSEUDO_UNFUSED(v331 * *(v328 - 2)));
                v336 = v318 + (float)(PSEUDO_UNFUSED(*(v328 - 8) * v331));
                v337 = v319 + (float)(PSEUDO_UNFUSED(*(v328 - 7) * v331));
                v338 = *v329;
                *(v329 - 1) = v331 + *(v329 - 1);
                v339 = v327[2];
                v340 = (float)((float)(PSEUDO_UNFUSED(v150 * v327[4])) +
                               (float)(v327[3] * v149)) +
                       (float)(v327[5] * v151);
                v341 = *v327;
                v342 = v327[1];
                v327 += 12;
                v343 = 0x0.0p+0f -
                       (float)(v340 + (float)((float)((float)(PSEUDO_UNFUSED(
                                                          v153 * v342)) +
                                                      (float)(v341 * v152)) +
                                              (float)(v339 * v154)));
                v321 = v332 + (float)(PSEUDO_UNFUSED(v328[2] * v343));
                v322 = v333 + (float)(PSEUDO_UNFUSED(v328[4] * v343));
                v323 = v334 + (float)(PSEUDO_UNFUSED(v343 * v328[5]));
                v318 = v336 + (float)(PSEUDO_UNFUSED(*v328 * v343));
                v344 = v328[6];
                v319 = v337 + (float)(PSEUDO_UNFUSED(v328[1] * v343));
                v328 += 16;
                *v329 = v343 + v338;
                v329 += 2;
                v324 = v335 + (float)(PSEUDO_UNFUSED(v343 * v344));
              } while (-(__int64)((unsigned __int8)v320 & 0xFE) != v330);
              v326 = -v330;
              if ((v320 & 1) == 0) {
                goto LABEL_94;
              }
            }
            v345 = (float*)(v307 + 32 * v325 + 32 * v326);
            v346 = (float*)(v308 + 24LL * (unsigned int)v325 + 24 * v326);
            v347 =
                0x0.0p+0f - (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                        v150 * v346[4])) +
                                                    (float)(v346[3] * v149)) +
                                            (float)(v346[5] * v151)) +
                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                        v153 * v346[1])) +
                                                    (float)(*v346 * v152)) +
                                            (float)(v346[2] * v154)));
            v321 = v321 + (float)(PSEUDO_UNFUSED(v345[2] * v347));
            v322 = v322 + (float)(PSEUDO_UNFUSED(v345[4] * v347));
            v323 = v323 + (float)(PSEUDO_UNFUSED(v347 * v345[5]));
            v324 = v324 + (float)(PSEUDO_UNFUSED(v347 * v345[6]));
            v318 = v318 + (float)(PSEUDO_UNFUSED(*v345 * v347));
            v319 = v319 + (float)(PSEUDO_UNFUSED(v345[1] * v347));
            *(float*)&v397[4 * v325 + 4 * v326] =
                v347 + *(float*)&v397[4 * v325 + 4 * v326];
          }
        LABEL_94:
          v155 = (float*)(v311 + 12 * v129);
          v312 = v152 + v322;
          v313 = v154 + v324;
          v151 = v151 + v321;
          v315 = v155[1];
          v314 = v155[2];
          v316 = *v155;
          v150 = v150 + v319;
          v149 = v149 + v318;
          LODWORD(v155) = v310 + 1;
          v131[v310] = v129;
          v129 = *(unsigned int*)(a1 + 40 * v129 + 32);
          ++v310;
          v152 = v312 + (float)((float)(v315 * v151) -
                                (float)(PSEUDO_UNFUSED(v314 * v150)));
          v153 = (float)(v153 + v323) +
                 (float)((float)(v314 * v149) -
                         (float)(PSEUDO_UNFUSED(v316 * v151)));
          v154 = v313 + (float)((float)(v316 * v150) -
                                (float)(PSEUDO_UNFUSED(v315 * v149)));
          if (v129 == v132) {
            goto LABEL_40;
          }
        }
      }
    }
    else {
      v131 = physx_PxTempAllocator_allocate(
          (__int64)v397, v130,
          (__int64)"/Inside/Lib/PhysX/O/physx/source/lowleveldynamics/src/"
                   "DyFeatherstoneArticulation.cpp",
          0x787u);
      v398[0] = v131;
      v132 = v129;
      if (v129 == v128) {
        goto LABEL_36;
      }
    }
    v133 = v129;
    v132 = v128;
    do {
      while (v133 >= v132) {
        v133 = *(unsigned int*)(a1 + 40 * v133 + 32);
        if (v133 == v132) {
          goto LABEL_36;
        }
      }
      v132 = *(unsigned int*)(a1 + 40 * v132 + 32);
    } while (v133 != v132);
    goto LABEL_36;
  }
  v405[0] = v13;
  v405[1] = v12;
  v405[2] = v11;
  v405[3] = v10;
  v19 = *(_OWORD*)a7;
  v18 = *((_OWORD*)a7 + 1);
  v20 = (unsigned int*)(*(_QWORD*)(a2 + 840) + 8LL * a6);
  v22 = *(_OWORD*)a4;
  v21 = *((_OWORD*)a4 + 1);
  v23 = *(_QWORD*)(a2 + 704) + 12LL * a6;
  v24 = *(_QWORD*)(a2 + 672);
  v401_.v402 = 0;
  v401_.v401 = 0;
  v25 = *v20;
  v26 = *((unsigned __int8*)v20 + 4);
  if ((_DWORD)v26 != 0) {
    v27 = (float*)&v401_.v401;
    v28 = v26;
    v29 = (float*)(v24 + 24LL * (unsigned int)v25 + 12);
    v30 = 0x0.0p+0f;
    v31 = 0x0.0p+0f;
    v32 = 0x0.0p+0f;
    v33 = (float*)(*(_QWORD*)(a2 + 688) + 32 * v25 + 16);
    v34 = 0x0.0p+0f;
    v35 = 0x0.0p+0f;
    v36 = 0x0.0p+0f;
    do {
      v37 = *(v29 - 1);
      v38 = *v33;
      v39 = v33[1];
      --v28;
      v40 = v33[2];
      v41 = (float)((float)(PSEUDO_UNFUSED(v29[1] *
                                           (float)-*((float*)&v19 + 1))) +
                    (float)(*v29 * (float)-*(float*)&v19)) +
            (float)(v29[2] * (float)-*((float*)&v19 + 2));
      v42 = *(v29 - 3);
      v43 = *(v29 - 2);
      v29 += 6;
      v44 = (float)((float)(PSEUDO_UNFUSED(v43 * (float)-*((float*)&v18 + 1))) +
                    (float)(v42 * (float)-*(float*)&v18)) +
            (float)(v37 * (float)-*((float*)&v18 + 2));
      v45 = *(v33 - 2);
      v46 = v41 + v44;
      v47 = *(v33 - 4);
      v48 = *(v33 - 3);
      v33 += 8;
      v49 = 0x0.0p+0f - v46;
      v34 = v34 + (float)(PSEUDO_UNFUSED(v45 * v49));
      v32 = v32 + (float)(PSEUDO_UNFUSED(v38 * v49));
      v31 = v31 + (float)(PSEUDO_UNFUSED(v49 * v39));
      v30 = v30 + (float)(PSEUDO_UNFUSED(v49 * v40));
      v36 = v36 + (float)(PSEUDO_UNFUSED(v47 * v49));
      v35 = v35 + (float)(PSEUDO_UNFUSED(v48 * v49));
      *v27 = v49 + *v27;
      ++v27;
    } while (v28 != 0);
  }
  else {
    v36 = 0x0.0p+0f;
    v35 = 0x0.0p+0f;
    v34 = 0x0.0p+0f;
    v32 = 0x0.0p+0f;
    v31 = 0x0.0p+0f;
    v30 = 0x0.0p+0f;
  }
  v50 = v32 - *(float*)&v18;
  LODWORD(v18) = *(_DWORD*)(v23 + 4);
  v51 = *(float*)(v23 + 8);
  v52 = *(float*)v23;
  v53 = (float32x4_t*)(*(_QWORD*)(a2 + 512) + 192LL * a3);
  *(float*)&v19 = v36 - *(float*)&v19;
  v54 = -(float)(*(float*)&v18 * *(float*)&v19);
  v55 = (float)(v51 * *(float*)&v19) -
        (float)(PSEUDO_UNFUSED(v52 * (float)(v34 - *((float*)&v19 + 2))));
  *(float*)&v19 = *(float*)&v22 - *(float*)&v19;
  *(float*)&v22 = *((float*)&v22 + 2) - (float)(v34 - *((float*)&v19 + 2));
  v56 = *(float*)&v21 -
        (float)(v50 + (float)((float)(*(float*)&v18 *
                                      (float)(v34 - *((float*)&v19 + 2))) -
                              (float)(PSEUDO_UNFUSED(
                                  v51 * (float)(v35 - *((float*)&v19 + 1))))));
  v57 = *((float*)&v22 + 1) - (float)(v35 - *((float*)&v19 + 1));
  v58 = *((float*)&v21 + 1) - (float)((float)(v31 - *((float*)&v18 + 1)) + v55);
  v59 =
      *((float*)&v21 + 2) -
      (float)((float)(v30 - *((float*)&v18 + 2)) +
              (float)(v54 + (float)(v52 * (float)(v35 - *((float*)&v19 + 1)))));
  v60 = vmulq_n_f32(*v53, *(float*)&v19);
  v61 = vmulq_n_f32(v53[1], *(float*)&v19);
  v62 = vmulq_n_f32(v53[2], v57);
  v63 = vmulq_n_f32(v53[3], v57);
  LANES128(v61).n128_u32[3] = 0;
  LANES128(v63).n128_u32[3] = 0;
  LANES128(v60).n128_u32[3] = 0;
  LANES128(v62).n128_u32[3] = 0;
  v64 = vaddq_f32(v61, v63);
  v65 = vmulq_n_f32(v53[4], *(float*)&v22);
  v66 = vmulq_n_f32(v53[5], *(float*)&v22);
  LANES128(v66).n128_u32[3] = 0;
  LANES128(v65).n128_u32[3] = 0;
  v67 = vaddq_f32(v64, v66);
  v68 = vmulq_n_f32(v53[6], v56);
  v69 = vaddq_f32(vaddq_f32(v60, v62), v65);
  v70 = vmulq_n_f32(v53[7], v56);
  LANES128(v68).n128_u32[3] = 0;
  LANES128(v70).n128_u32[3] = 0;
  v71 = vaddq_f32(v69, v68);
  v72 = vmulq_n_f32(v53[8], v58);
  v73 = vmulq_n_f32(v53[9], v58);
  LANES128(v73).n128_u32[3] = 0;
  LANES128(v72).n128_u32[3] = 0;
  v74 = vaddq_f32(vaddq_f32(v67, v70), v73);
  v75 = vmulq_n_f32(v53[10], v59);
  v76 = vmulq_n_f32(v53[11], v59);
  LANES128(v75).n128_u32[3] = 0;
  LANES128(v76).n128_u32[3] = 0;
  v77 = vaddq_f32(vaddq_f32(v71, v72), v75);
  v78 = vaddq_f32(v74, v76);
  LANES128(v75).n128_f32[0] =
      vmuls_lane_f32(v52, v77, 2) - (float)(LANES128(v77).n128_f32[0] * v51);
  v79 = LANES128(v78).n128_f32[0] +
        (float)(vmuls_lane_f32(
                    v51, COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]), 1) -
                (float)(*(float*)&v18 * LANES128(v77).n128_f32[2]));
  v80 = LANES128(v78).n128_f32[1] + LANES128(v75).n128_f32[0];
  v81 = LANES128(v78).n128_f32[2] +
        (float)((float)(PSEUDO_UNFUSED(*(float*)&v18 *
                                       LANES128(v77).n128_f32[0])) -
                (float)(v52 * LANES128(v77).n128_f32[1]));
  v82 = v77;
  *(_QWORD*)&v83 = __PAIR64__(LODWORD(v80), LODWORD(v79));
  LANES128(v82).n128_u32[3] = 0;
  *((_QWORD*)&v83 + 1) = LODWORD(v81);
  if ((_DWORD)v26 != 0) {
    v84 = *(_QWORD*)(a2 + 592) + 32 * v25;
    if ((_DWORD)v26 == 1) {
      v85 = 0;
    }
    else {
      v86 = (float*)(v84 + 32);
      v87 = 0;
      v88 = (float*)&v404;
      v89 = (float*)&v401_.v401 + 1;
      do {
        v90 = *(v89 - 1);
        v91 = *v89;
        v87 -= 2;
        v89 += 2;
        v92 =
            v90 -
            (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                        LANES128(v77).n128_f32[1] *
                                        *(v86 - 3))) +
                                    (float)(*(v86 - 4) *
                                            LANES128(v77).n128_f32[0])) +
                            (float)(*(v86 - 2) * LANES128(v77).n128_f32[2])) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v80 * *(v86 - 7))) +
                                    (float)(*(v86 - 8) * v79)) +
                            (float)(*(v86 - 6) * v81)));
        v93 = (float)((float)(PSEUDO_UNFUSED(LANES128(v77).n128_f32[1] *
                                             v86[5])) +
                      (float)(v86[4] * LANES128(v77).n128_f32[0])) +
              (float)(v86[6] * LANES128(v77).n128_f32[2]);
        v94 = (float)(PSEUDO_UNFUSED(v80 * v86[1])) + (float)(*v86 * v79);
        v95 = v86[2];
        v86 += 16;
        *(v88 - 1) = v92;
        *v88 = v91 - (float)(v93 + (float)(v94 + (float)(v95 * v81)));
        v88 += 2;
      } while (-(__int64)((unsigned __int8)v26 & 0xFE) != v87);
      v85 = -v87;
      if ((v26 & 1) == 0) {
        goto LABEL_15;
      }
    }
    v96 = (float*)(v84 + 32 * v85);
    *(float*)&v403[4 * v85] =
        *((float*)&v401_.v401 + v85) -
        (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                    LANES128(v77).n128_f32[1] * v96[5])) +
                                (float)(v96[4] * LANES128(v77).n128_f32[0])) +
                        (float)(v96[6] * LANES128(v77).n128_f32[2])) +
                (float)((float)((float)(PSEUDO_UNFUSED(v80 * v96[1])) +
                                (float)(*v96 * v79)) +
                        (float)(v96[2] * v81)));
  LABEL_15:
    v97 = v82;
    v98 = 0;
    v99 = v24 + 24LL * (unsigned int)v25;
    v100 = *(_QWORD*)(a2 + 576) + 36LL * a6;
    v101 = (float*)(v100 + 48);
    while ((unsigned int)v26 < 8) {
      v107 = 0;
      v108 = 0x0.0p+0f;
      if ((v26 & 7) != 0) {
        goto LABEL_23;
      }
    LABEL_16:
      v102 = (float*)(v99 + 24 * v98++);
      ++v101;
      v100 += 4;
      LANES128(v103).n128_u32[3] = LANES128(v97).n128_u32[3];
      LANES128(v103).n128_f32[0] =
          LANES128(v97).n128_f32[0] + (float)(PSEUDO_UNFUSED(v108 * *v102));
      LANES128(v103).n128_f32[1] =
          LANES128(v97).n128_f32[1] + (float)(PSEUDO_UNFUSED(v108 * v102[1]));
      LANES128(v103).n128_f32[2] =
          LANES128(v97).n128_f32[2] + (float)(PSEUDO_UNFUSED(v108 * v102[2]));
      v104 = v108 * v102[4];
      v105 = v108 * v102[5];
      HIDWORD(v106) = HIDWORD(v83);
      *(float*)&v106 = *(float*)&v83 + (float)(PSEUDO_UNFUSED(v108 * v102[3]));
      *((float*)&v106 + 1) = *((float*)&v83 + 1) + v104;
      v97 = v103;
      *((float*)&v106 + 2) = *((float*)&v83 + 2) + v105;
      v83 = v106;
      if (v98 == v26) {
        goto LABEL_27;
      }
    }
    v108 = 0x0.0p+0f;
    v109 = 0;
    v110 = v101;
    v111 = (float*)v405 + 1;
    do {
      v109 -= 8;
      v112 =
          (float)((float)((float)((float)((float)(v108 + (float)(*(v110 - 12) *
                                                                 *(v111 - 4))) +
                                          (float)(*(v110 - 9) * *(v111 - 3))) +
                                  (float)(*(v110 - 6) * *(v111 - 2))) +
                          (float)(*(v110 - 3) * *(v111 - 1))) +
                  (float)(*v110 * *v111)) +
          (float)(v110[3] * v111[1]);
      v113 = v111[2];
      v114 = v111[3];
      v111 += 8;
      v115 = v112 + (float)(v110[6] * v113);
      v116 = v110[9];
      v110 += 24;
      v108 = v115 + (float)(v116 * v114);
    } while (-(__int64)((unsigned __int8)v26 & 0xF8) != v109);
    v107 = -v109;
    if ((v26 & 7) == 0) {
      goto LABEL_16;
    }
  LABEL_23:
    v117 = (float*)&v403[4 * v107];
    v118 = (float*)(v100 + 12 * v107);
    v119 = v26 & 7;
    do {
      v120 = *v118;
      v118 += 3;
      v121 = v120;
      v122 = *v117++;
      --v119;
      v108 = v108 + (float)(v121 * v122);
    } while (v119 != 0);
    goto LABEL_16;
  }
  v106 = v83;
  v103 = v82;
LABEL_27:
  LANES128(v78).n128_u32[3] = 0;
  *a5 = v78;
  a5[1] = v82;
  HIDWORD(v106) = 0;
  LANES128(v103).n128_u32[3] = 0;
  *(_OWORD*)a8 = v106;
  *((float32x4_t*)a8 + 1) = v103;
}

#pragma GCC visibility pop
