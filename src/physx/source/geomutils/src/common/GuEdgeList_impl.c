#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetBroadcastAllocator(_QWORD);
__int64 PxGetFoundation(_QWORD);
extern char GameData_1a9f09e;
float atan2f(float, float);
float fabsf(float);
float sqrtf(_QWORD);
__int64 physx_Gu_EdgeList_computeActiveEdges(unsigned int* a1, float a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6);

__int64 physx_Gu_EdgeList_computeActiveEdges(unsigned int* a1, float a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6)
{
  __int64 v6;
  __int64 v8;
  unsigned int* v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool* v15;
  const char* v16;
  __int64 v17;
  bool v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned int* v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v52;
  float* v54;
  float* v55;
  float* v56;
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
  __int64 v73;
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
  bool v86;
  bool v87;
  bool v88;
  bool v89;
  bool v90;
  float* v91;
  float v92;
  float* v93;
  float* v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float* v102;
  float* v103;
  float* v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  __int64 v113;
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
  float* v125;
  float v126;
  float v127;
  float* v128;
  float* v129;
  float v130;
  float v131;
  float v132;
  float v133;
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
  float* v145;
  float* v146;
  float* v147;
  float v148;
  float v149;
  float v150;
  float* v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  __int64 v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  __int64 v170;
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
  float* v183;
  float v184;
  float v185;
  float* v186;
  float* v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float* v200;
  float* v201;
  float v202;
  float* v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  __int64 v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  __int64 v223;
  float v224;
  float v225;
  float v226;
  __int64 v227;
  __int64 v228;
  unsigned int v229;
  float* v230;
  float v231;
  float v232;
  float* v233;
  float* v234;
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
  float* v250;
  float v251;
  float v252;
  float v253;
  float* v254;
  float* v255;
  float v256;
  float v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  __int64 v266;
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
  float v277;
  float v278;
  unsigned __int64 v279;
  unsigned int* v280;
  int v281;
  int v282;
  unsigned int v283;
  unsigned int v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  _BYTE* v288;
  _WORD* v289;
  __int64 v290;
  __int64 v291;
  _WORD* v292;
  unsigned __int8* v293;
  int v294;
  __int64 v295;
  const char* v296;
  unsigned int v297;
  __int64 v298;
  __int64 v301;
  unsigned int* v302;
  float* v303;
  float* v304;
  float* v305;
  int v306;
  bool* v308;
  bool* v309;
  int v310;
  int v311;
  __int64 v312;
  __int64 v313;
  float v314;
  float v315;
  float v316;
  float v317;
  float v318;
  float v319;
  float v320;
  float v321;
  float v322;
  float v323;
  float v324;
  float v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float v332;
  int v333;
  float v334;
  float v335;
  float v336;
  __int64 v337;
  __int64 v338;
  __int64 vars0;
  __int64 _D8;
  __int64 vars40;
  __int64 _118;

  if (a6 == 0 || (v6 = a5, (a4 | a5) == 0)) {
    v16 = "EdgeList::ComputeActiveEdges: NULL parameter!";
    v17 = 299;
  LABEL_9:
    vars40 = vars0;
    _118 = _D8;
    v296 = v16;
    v297 = v17;
    v298 = PxGetFoundation(v17);
    return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
        *(_QWORD*)v298 + 88LL))(
        v298, 8,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/common/GuEdgeList.cpp",
        v297, v296);
  }
  v8 = *a1;
  if ((_DWORD)v8 == 0) {
    v16 = "ActiveEdges::ComputeConvexEdges: no edges in edge list!";
    v17 = 303;
    goto LABEL_9;
  }
  v9 = *((unsigned int**)a1 + 1);
  if (v9 == nullptr) {
    v16 = "ActiveEdges::ComputeConvexEdges: no edge data in edge list!";
    v17 = 307;
    goto LABEL_9;
  }
  if (*((_QWORD*)a1 + 4) == 0) {
    v16 = "ActiveEdges::ComputeConvexEdges: no edge-to-triangle in edge list!";
    v17 = 311;
    goto LABEL_9;
  }
  v338 = *((_QWORD*)a1 + 5);
  if (v338 == 0) {
    v16 = "ActiveEdges::ComputeConvexEdges: no faces-by-edges in edge list!";
    v17 = 315;
    goto LABEL_9;
  }
  v11 = *((_QWORD*)a1 + 4);
  v12 = PxGetBroadcastAllocator(0);
  v13 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v12 + 16LL))(
      v12, v8, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/geomutils/src/common/GuEdgeList.cpp",
      318);
  v14 = v11;
  v301 = v13;
  v15 = (bool*)v13;
  v312 = v6;
  do {
    v19 = *(unsigned __int16*)(v14 + 2);
    if (v19 == 1) {
      goto LABEL_13;
    }
    v337 = v14;
    if (v19 != 2) {
      v33 = (unsigned int)(3 *
                           *(_DWORD*)(v338 + 4LL * *(unsigned int*)(v14 + 4)));
      if (a4 != 0) {
        v34 = *(unsigned int*)(a4 + 4 * v33);
        v35 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v33 + 1));
        v36 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v33 + 2));
        if (v19 >= 2) {
          goto LABEL_31;
        }
      }
      else {
        v34 = *(unsigned __int16*)(v6 + 2 * v33);
        v35 = *(unsigned __int16*)(v6 + 2LL * (unsigned int)(v33 + 1));
        v36 = *(unsigned __int16*)(v6 + 2LL * (unsigned int)(v33 + 2));
        if (v19 >= 2) {
        LABEL_31:
          v309 = v15;
          v311 = v8;
          v302 = v9;
          v333 = 0;
          v37 = 1;
          v38 = 1;
          v306 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v313 = v34;
          v304 = (float*)(a6 + 12LL * (unsigned int)v35);
          v305 = (float*)(a6 + 12LL * (unsigned int)v34);
          v303 = (float*)(a6 + 12LL * (unsigned int)v36);
          while (1) {
            v42 =
                (unsigned int)(3 *
                               *(_DWORD*)(v338 +
                                          4LL * (unsigned int)(v37 +
                                                               *(_DWORD*)(v14 +
                                                                          4))));
            if (a4 != 0) {
              v43 = *(unsigned int*)(a4 + 4 * v42);
              v44 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v42 + 1));
              v45 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v42 + 2));
              if (v43 != v34 && v43 != v35 && v43 != v36) {
                goto LABEL_72;
              }
            }
            else {
              v43 = *(unsigned __int16*)(v312 + 2 * v42);
              v44 = *(unsigned __int16*)(v312 + 2LL * (unsigned int)(v42 + 1));
              v45 = *(unsigned __int16*)(v312 + 2LL * (unsigned int)(v42 + 2));
              if (v43 != v34 && v43 != v35 && v43 != v36) {
              LABEL_72:
                if (v38 == 2) {
                  v86 = v43 == v41 || v43 == v40 || v43 == v39;
                  if (!v86 ||
                      (v44 != v41 ? (v87 = v44 == v40) : (v87 = true),
                       !v87 ? (v88 = v44 == v39) : (v88 = true),
                       !v88 ||
                           (v45 != v41 ? (v89 = v45 == v40) : (v89 = true),
                            !v89 ? (v90 = v45 == v39) : (v90 = true), !v90))) {
                    LODWORD(v8) = v311;
                    v6 = v312;
                    v9 = v302;
                    v18 = true;
                    v15 = v309;
                    goto LABEL_14;
                  }
                  v91 = (float*)(a6 + 12 * v41);
                  v92 = v91[1];
                  v93 = (float*)(a6 + 12 * v40);
                  v94 = (float*)(a6 + 12 * v39);
                  v95 = v91[2];
                  v96 = v93[1] - v92;
                  v97 = v93[2] - v95;
                  v98 = v94[1] - v92;
                  v99 = *v93 - *v91;
                  v100 = v94[2] - v95;
                  v101 = *v94 - *v91;
                  v102 = (float*)(a6 + 12LL * (unsigned int)v44);
                  v103 = (float*)(a6 + 12LL * (unsigned int)v45);
                  v104 = (float*)(a6 + 12LL * (unsigned int)v43);
                  v105 = *v104;
                  v106 = v104[1];
                  v107 = v104[2];
                  v108 = *v102;
                  v109 = v102[1];
                  v324 = *v103;
                  v329 = v102[2];
                  v316 = v103[2];
                  v319 = v103[1];
                  v110 = (float)(v96 * v100) - (float)(v97 * v98);
                  v111 = (float)(v97 * v101) - (float)(v99 * v100);
                  v112 = (float)(v99 * v98) - (float)(v96 * v101);
                  v114 = sqrtf(v13);
                  if (v114 > 0.0f) {
                    v115 = 1.0f / v114;
                    v110 = v110 * v115;
                    v111 = v111 * v115;
                    v112 = v112 * v115;
                  }
                  v116 = v108 - v105;
                  v117 = v319 - v106;
                  v118 = v324 - v105;
                  v119 = (float)((float)(v109 - v106) * (float)(v316 - v107)) -
                         (float)((float)(v329 - v107) * (float)(v319 - v106));
                  v120 = -(float)((float)(v109 - v106) * v118);
                  v121 = (float)((float)(v329 - v107) * v118) -
                         (float)(v116 * (float)(v316 - v107));
                  v122 = v120 + (float)(v116 * v117);
                  v123 = sqrtf(v113);
                  if (v123 > 0.0f) {
                    v124 = 1.0f / v123;
                    v119 = v119 * v124;
                    v121 = v121 * v124;
                    v122 = v122 * v124;
                  }
                  v14 = v337;
                  v34 = v313;
                  v38 = 2;
                  v333 |=
                      (float)((float)((float)(v111 * v121) +
                                      (float)(v110 * v119)) +
                              (float)(v112 * v122)) < -0x1.ff7cee0000000p-1f;
                }
                else {
                  ++v38;
                  v41 = v43;
                  v40 = v44;
                  v39 = v45;
                }
                goto LABEL_33;
              }
            }
            if (v44 != v34 && v44 != v35 && v44 != v36) {
              goto LABEL_72;
            }
            v52 = v45 == v34 || v45 == v35;
            if (!v52 && v45 != v36) {
              goto LABEL_72;
            }
            v54 = (float*)(a6 + 12LL * (unsigned int)v44);
            v55 = (float*)(a6 + 12LL * (unsigned int)v45);
            v56 = (float*)(a6 + 12LL * (unsigned int)v43);
            v57 = *v56;
            v58 = v56[1];
            v59 = v56[2];
            v60 = v305[2];
            v61 = v305[1];
            v62 = *v54;
            v63 = v54[1];
            v323 = *v55;
            v328 = v54[2];
            v315 = v55[2];
            v318 = v55[1];
            v64 = v304[1] - v61;
            v65 = v304[2] - v60;
            v66 = *v304 - *v305;
            v67 = v303[1] - v61;
            v68 = v303[2] - v60;
            v69 = *v303 - *v305;
            v70 = (float)(v64 * v68) - (float)(v65 * v67);
            v71 = (float)(v65 * v69) - (float)(v66 * v68);
            v72 = (float)(v66 * v67) - (float)(v64 * v69);
            v74 = sqrtf(v13);
            if (v74 > 0.0f) {
              v75 = 1.0f / v74;
              v70 = v70 * v75;
              v71 = v71 * v75;
              v72 = v72 * v75;
            }
            v76 = v62 - v57;
            v77 = v318 - v58;
            v78 = v323 - v57;
            v79 = (float)((float)(v63 - v58) * (float)(v315 - v59)) -
                  (float)((float)(v328 - v59) * (float)(v318 - v58));
            v80 = -(float)((float)(v63 - v58) * v78);
            v81 = (float)((float)(v328 - v59) * v78) -
                  (float)(v76 * (float)(v315 - v59));
            v82 = v80 + (float)(v76 * v77);
            v83 = sqrtf(v73);
            if (v83 > 0.0f) {
              v84 = 1.0f / v83;
              v79 = v79 * v84;
              v81 = v81 * v84;
              v82 = v82 * v84;
            }
            v14 = v337;
            v34 = v313;
            v306 |= (float)((float)((float)(v71 * v81) + (float)(v70 * v79)) +
                            (float)(v72 * v82)) < -0x1.ff7cee0000000p-1f;
          LABEL_33:
            if (v19 == ++v37) {
              v9 = v302;
              if (v38 != 2) {
                LODWORD(v8) = v311;
                v6 = v312;
                v15 = v309;
                break;
              }
              if (((v306 | v333) & 1) != 0) {
                v183 = (float*)(a6 + 12 * v41);
                v184 = *v183;
                v185 = v183[1];
                v186 = (float*)(a6 + 12 * v40);
                v187 = (float*)(a6 + 12 * v39);
                v188 = v186[2];
                v189 = v183[2];
                v190 = *v187;
                v191 = v187[1];
                v193 = *v186;
                v192 = v186[1];
                v194 = v187[2];
                v195 = *v186 - *v183;
                v196 = *v187 - *v183;
                v197 = (float)((float)(v192 - v185) * (float)(v194 - v189)) -
                       (float)((float)(v188 - v189) * (float)(v191 - v185));
                v198 = (float)((float)(v188 - v189) * v196) -
                       (float)(v195 * (float)(v194 - v189));
                v199 = (float)(v195 * (float)(v191 - v185)) -
                       (float)((float)(v192 - v185) * v196);
                if ((float)((float)((float)(v198 * v198) +
                                    (float)(v197 * v197)) +
                            (float)(v199 * v199)) > 0.0f) {
                  sqrtf(v13);
                  v184 = *v183;
                  v185 = v183[1];
                  v189 = v183[2];
                  v193 = *v186;
                  v192 = v186[1];
                  v188 = v186[2];
                  v190 = *v187;
                  v191 = v187[1];
                  v194 = v187[2];
                  LODWORD(v34) = v313;
                }
                v200 = (float*)(a6 + 12LL * (unsigned int)v34);
                v321 = v191;
                v335 = v192;
                v326 = v190;
                v331 = v188;
                v201 = (float*)(a6 + 12LL * (unsigned int)v35);
                v202 = v200[1];
                v203 = (float*)(a6 + 12LL * (unsigned int)v36);
                v204 = v200[2];
                v205 = v201[1] - v202;
                v206 = v201[2] - v204;
                v207 = v203[1] - v202;
                v208 = *v201 - *v200;
                v209 = v203[2] - v204;
                v210 = *v203 - *v200;
                v211 = (float)(v205 * v209) - (float)(v206 * v207);
                v212 = (float)(v206 * v210) - (float)(v208 * v209);
                v213 = (float)(v208 * v207) - (float)(v205 * v210);
                v215 = sqrtf(v13);
                v6 = v312;
                v15 = v309;
                if (v215 > 0.0f) {
                  v216 = 1.0f / v215;
                  v211 = v211 * v216;
                  v212 = v212 * v216;
                  v213 = v213 * v216;
                }
                v217 = v193 - v184;
                v218 = v321 - v185;
                LODWORD(v8) = v311;
                v219 = (float)((float)(v335 - v185) * (float)(v194 - v189)) -
                       (float)((float)(v331 - v189) * (float)(v321 - v185));
                v220 = -(float)((float)(v335 - v185) * (float)(v326 - v184));
                v221 = (float)((float)(v331 - v189) * (float)(v326 - v184)) -
                       (float)(v217 * (float)(v194 - v189));
                v222 = v220 + (float)(v217 * v218);
                v224 = sqrtf(v214);
                if (v224 > 0.0f) {
                  v225 = 1.0f / v224;
                  v219 = v219 * v225;
                  v221 = v221 * v225;
                  v222 = v222 * v225;
                }
                v226 = (float)((float)(v212 * v221) + (float)(v211 * v219)) +
                       (float)(v213 * v222);
                goto LABEL_150;
              }
              v228 = *v302;
              v227 = v302[1];
              if (v228 == v34) {
                v229 = v36;
                if (v227 != v35) {
                  v229 = v35;
                  goto LABEL_136;
                }
                goto LABEL_142;
              }
              if (v228 == v35) {
                v229 = v36;
                if (v227 == v34) {
                  goto LABEL_142;
                }
                v229 = v34;
              LABEL_136:
                if (v227 == v36) {
                LABEL_142:
                  v230 = (float*)(a6 + 12 * v41);
                  v231 = *v230;
                  v232 = v230[1];
                  v233 = (float*)(a6 + 12 * v40);
                  v234 = (float*)(a6 + 12 * v39);
                  v235 = v230[2];
                  v236 = v233[2] - v235;
                  v237 = v234[1] - v232;
                  v238 = *v233 - *v230;
                  v239 = v233[1] - v232;
                  v240 = v234[2] - v235;
                  v241 = *v234 - *v230;
                  v242 = (float)(v239 * v240) - (float)(v236 * v237);
                  v243 = (float)(v236 * v241) - (float)(v238 * v240);
                  v244 = (float)(v238 * v237) - (float)(v239 * v241);
                  v245 = 0.0f;
                  v246 = 0.0f;
                  v247 = 0.0f;
                  if ((float)((float)((float)(v243 * v243) +
                                      (float)(v242 * v242)) +
                              (float)(v244 * v244)) > 0.0f) {
                    v248 = sqrtf(v13);
                    v231 = *v230;
                    v232 = v230[1];
                    v235 = v230[2];
                    LODWORD(v34) = v313;
                    v249 = 1.0f / v248;
                    v14 = v337;
                    v245 = v242 * v249;
                    v246 = v243 * v249;
                    v247 = v244 * v249;
                  }
                  v15 = v309;
                  if ((float)((float)((float)(v246 *
                                              *(float*)(a6 + 12LL * v229 + 4)) +
                                      (float)(*(float*)(a6 + 12LL * v229) *
                                              v245)) +
                              (float)(*(float*)(a6 + 12LL * v229 + 8) *
                                      v247)) >=
                      (float)((float)((float)(v246 * v232) +
                                      (float)(v231 * v245)) +
                              (float)(v235 * v247))) {
                    LODWORD(v8) = v311;
                    v6 = v312;
                    v18 = false;
                  }
                  else {
                    v250 = (float*)(a6 + 12LL * (unsigned int)v34);
                    v251 = *v233;
                    v252 = v233[1];
                    v253 = v250[1];
                    v254 = (float*)(a6 + 12LL * (unsigned int)v35);
                    v255 = (float*)(a6 + 12LL * (unsigned int)v36);
                    v256 = v250[2];
                    v327 = v234[1];
                    v332 = *v234;
                    v336 = v233[2];
                    v257 = v254[1] - v253;
                    v258 = v254[2] - v256;
                    v259 = v255[1] - v253;
                    v260 = *v254 - *v250;
                    v261 = v255[2] - v256;
                    v262 = *v255 - *v250;
                    v263 = (float)(v257 * v261) - (float)(v258 * v259);
                    v322 = v234[2];
                    v264 = (float)(v258 * v262) - (float)(v260 * v261);
                    v265 = (float)(v260 * v259) - (float)(v257 * v262);
                    v267 = sqrtf(v13);
                    v6 = v312;
                    if (v267 > 0.0f) {
                      v268 = 1.0f / v267;
                      v263 = v263 * v268;
                      v264 = v264 * v268;
                      v265 = v265 * v268;
                    }
                    v269 = v251 - v231;
                    v270 = v327 - v232;
                    v271 =
                        (float)((float)(v252 - v232) * (float)(v322 - v235)) -
                        (float)((float)(v336 - v235) * (float)(v327 - v232));
                    v272 =
                        -(float)((float)(v252 - v232) * (float)(v332 - v231));
                    v273 =
                        (float)((float)(v336 - v235) * (float)(v332 - v231)) -
                        (float)(v269 * (float)(v322 - v235));
                    v274 = v272 + (float)(v269 * v270);
                    v275 = sqrtf(v266);
                    LODWORD(v8) = v311;
                    if (v275 > 0.0f) {
                      v276 = 1.0f / v275;
                      v271 = v271 * v276;
                      v273 = v273 * v276;
                      v274 = v274 * v276;
                    }
                    v226 =
                        (float)((float)(v264 * v273) + (float)(v263 * v271)) +
                        (float)(v265 * v274);
                  LABEL_150:
                    v277 = sqrtf(v223);
                    v278 = atan2f(v277, v226);
                    v18 = fabsf(v278) > a2;
                  LABEL_115:
                    v14 = v337;
                  }
                  goto LABEL_14;
                }
              }
              else if (v228 == v36) {
                v229 = v34;
                if (v227 == v35) {
                  goto LABEL_142;
                }
                v229 = v35;
                if (v227 == v34) {
                  goto LABEL_142;
                }
              }
              v229 = -1;
              goto LABEL_142;
            }
          }
        }
      }
    LABEL_13:
      v18 = true;
      goto LABEL_14;
    }
    v310 = v8;
    v20 = *(unsigned int*)(v14 + 4);
    v21 = (unsigned int)(3 * *(_DWORD*)(v338 + 4 * v20));
    v22 = 3 * *(_DWORD*)(v338 + 4LL * (unsigned int)(v20 + 1));
    if (a4 != 0) {
      v23 = *(unsigned int*)(a4 + 4 * v21);
      v24 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v21 + 1));
      v25 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v21 + 2));
      v26 = *(_DWORD*)(a4 + 4LL * v22);
      v27 = *(_DWORD*)(a4 + 4LL * (v22 + 1));
      v28 = *(_DWORD*)(a4 + 4LL * (v22 + 2));
      v30 = *v9;
      v29 = v9[1];
      v308 = v15;
      v31 = v9;
      if (v30 == v23) {
        goto LABEL_19;
      }
    }
    else {
      v23 = *(unsigned __int16*)(v6 + 2 * v21);
      v24 = *(unsigned __int16*)(v6 + 2LL * (unsigned int)(v21 + 1));
      v25 = *(unsigned __int16*)(v6 + 2LL * (unsigned int)(v21 + 2));
      v26 = *(unsigned __int16*)(v6 + 2LL * v22);
      v27 = *(unsigned __int16*)(v6 + 2LL * (v22 + 1));
      v28 = *(unsigned __int16*)(v6 + 2LL * (v22 + 2));
      v30 = *v9;
      v29 = v9[1];
      v308 = v15;
      v31 = v9;
      if (v30 == v23) {
      LABEL_19:
        v32 = v25;
        if (v29 == v24) {
          goto LABEL_107;
        }
        v32 = v24;
        if (v29 == v25) {
          goto LABEL_107;
        }
        goto LABEL_106;
      }
    }
    if (v30 == v24) {
      v32 = v25;
      if (v29 == v23) {
        goto LABEL_107;
      }
      v32 = v23;
      if (v29 == v25) {
        goto LABEL_107;
      }
    }
    else if (v30 == v25) {
      v32 = v23;
      if (v29 == v24) {
        goto LABEL_107;
      }
      v32 = v24;
      if (v29 == v23) {
        goto LABEL_107;
      }
    }
  LABEL_106:
    v32 = -1;
  LABEL_107:
    v125 = (float*)(a6 + 12LL * v26);
    v127 = *v125;
    v126 = v125[1];
    v128 = (float*)(a6 + 12LL * v27);
    v129 = (float*)(a6 + 12LL * v28);
    v130 = v125[2];
    v131 = v128[2] - v130;
    v132 = v129[1] - v126;
    v133 = *v128 - *v125;
    v134 = v128[1] - v126;
    v135 = v129[2] - v130;
    v136 = *v129 - *v125;
    v137 = (float)(v134 * v135) - (float)(v131 * v132);
    v138 = (float)(v131 * v136) - (float)(v133 * v135);
    v139 = (float)(v133 * v132) - (float)(v134 * v136);
    v140 = 0.0f;
    v141 = 0.0f;
    v142 = 0.0f;
    if ((float)((float)((float)(v138 * v138) + (float)(v137 * v137)) +
                (float)(v139 * v139)) > 0.0f) {
      v143 = sqrtf(v13);
      v127 = *v125;
      v126 = v125[1];
      v130 = v125[2];
      v144 = 1.0f / v143;
      v140 = v137 * v144;
      v141 = v138 * v144;
      v142 = v139 * v144;
    }
    v145 = (float*)(a6 + 12LL * v32);
    v146 = (float*)(a6 + 12LL * (unsigned int)v24);
    v147 = (float*)(a6 + 12LL * (unsigned int)v25);
    v148 = (float)((float)(v141 * v126) + (float)(v127 * v140)) +
           (float)(v130 * v142);
    v314 = *v128;
    v317 = v128[1];
    v320 = v128[2];
    v325 = *v129;
    v330 = v129[1];
    v149 = (float)(v141 * v145[1]) + (float)(*v145 * v140);
    v150 = v145[2];
    v151 = (float*)(a6 + 12LL * (unsigned int)v23);
    v334 = v129[2];
    v152 = v149 + (float)(v150 * v142);
    v153 = v151[1];
    v154 = v151[2];
    v155 = v146[1] - v153;
    v156 = v146[2] - v154;
    v157 = v147[1] - v153;
    v158 = *v146 - *v151;
    v159 = v147[2] - v154;
    v160 = *v147 - *v151;
    v161 = (float)(v155 * v159) - (float)(v156 * v157);
    v162 = (float)(v156 * v160) - (float)(v158 * v159);
    v163 = (float)(v158 * v157) - (float)(v155 * v160);
    v165 = sqrtf(v13);
    if (v152 < v148) {
      LODWORD(v8) = v310;
      v6 = v312;
      v9 = v31;
      if (v165 > 0.0f) {
        v166 = 1.0f / v165;
        v161 = v161 * v166;
        v162 = v162 * v166;
        v163 = v163 * v166;
      }
      v15 = v308;
      v167 = (float)((float)(v317 - v126) * (float)(v334 - v130)) -
             (float)((float)(v320 - v130) * (float)(v330 - v126));
      v168 = (float)((float)(v320 - v130) * (float)(v325 - v127)) -
             (float)((float)(v314 - v127) * (float)(v334 - v130));
      v169 = (float)((float)(v314 - v127) * (float)(v330 - v126)) -
             (float)((float)(v317 - v126) * (float)(v325 - v127));
      v171 = sqrtf(v164);
      if (v171 > 0.0f) {
        v172 = 1.0f / v171;
        v167 = v167 * v172;
        v168 = v168 * v172;
        v169 = v169 * v172;
      }
      v173 = sqrtf(v170);
      v174 = atan2f(v173, (float)((float)(v162 * v168) + (float)(v161 * v167)) +
                              (float)(v163 * v169));
      v18 = fabsf(v174) > a2;
      goto LABEL_115;
    }
    LODWORD(v8) = v310;
    v6 = v312;
    v9 = v31;
    if (v165 > 0.0f) {
      v175 = 1.0f / v165;
      v161 = v161 * v175;
      v162 = v162 * v175;
      v163 = v163 * v175;
    }
    v176 = v330 - v126;
    v15 = v308;
    v177 = (float)((float)(v317 - v126) * (float)(v334 - v130)) -
           (float)((float)(v320 - v130) * (float)(v330 - v126));
    v178 = -(float)((float)(v317 - v126) * (float)(v325 - v127));
    v179 = (float)((float)(v320 - v130) * (float)(v325 - v127)) -
           (float)((float)(v314 - v127) * (float)(v334 - v130));
    v180 = v178 + (float)((float)(v314 - v127) * v176);
    v181 = sqrtf(v164);
    if (v181 > 0.0f) {
      v182 = 1.0f / v181;
      v177 = v177 * v182;
      v179 = v179 * v182;
      v180 = v180 * v182;
    }
    v14 = v337;
    v18 = (float)((float)((float)(v162 * v179) + (float)(v161 * v177)) +
                  (float)(v163 * v180)) < -0x1.ff7cee0000000p-1f;
  LABEL_14:
    LODWORD(v8) = v8 - 1;
    *v15++ = v18;
    v14 += 8;
    v9 += 2;
  } while ((_DWORD)v8 != 0);
  if (a1[4] != 0) {
    v279 = 0;
    v280 = (unsigned int*)(*((_QWORD*)a1 + 3) + 8LL);
    do {
      v281 = *(v280 - 2);
      if ((v281 & 0x80000000) == 0 &&
          *(_BYTE*)(v301 + (v281 & 0xFFFFFFF)) == 1) {
        *(v280 - 2) = v281 | 0x80000000;
      }
      v282 = *(v280 - 1);
      if ((v282 & 0x80000000) == 0 &&
          *(_BYTE*)(v301 + (v282 & 0xFFFFFFF)) == 1) {
        *(v280 - 1) = v282 | 0x80000000;
      }
      v283 = *v280;
      if ((*v280 & 0x80000000) == 0 &&
          *(_BYTE*)(v301 + (v283 & 0xFFFFFFF)) == 1) {
        *v280 = v283 | 0x80000000;
      }
      ++v279;
      v280 += 3;
    } while (v279 < a1[4]);
  }
  v284 = *a1;
  if (*a1 == 0) {
    if (v301 != 0) {
      goto LABEL_196;
    }
    return 1;
  }
  v285 = *((_QWORD*)a1 + 4);
  v286 = v284 & 7;
  if (v284 >= 8) {
    v288 = (_BYTE*)(v301 + 3);
    v289 = (_WORD*)(v285 + 32);
    v290 = 0;
    v291 = -(__int64)(v284 & 0xFFFFFFF8);
    while (1) {
      if (*(v288 - 3) == 1) {
        *(v289 - 16) |= 1u;
        if (*(v288 - 2) != 1) {
          goto LABEL_175;
        }
      }
      else if (*(v288 - 2) != 1) {
      LABEL_175:
        if (*(v288 - 1) == 1) {
          goto LABEL_176;
        }
        goto LABEL_184;
      }
      *(v289 - 12) |= 1u;
      if (*(v288 - 1) == 1) {
      LABEL_176:
        *(v289 - 8) |= 1u;
        if (*v288 != 1) {
          goto LABEL_177;
        }
        goto LABEL_185;
      }
    LABEL_184:
      if (*v288 != 1) {
      LABEL_177:
        if (v288[1] == 1) {
          goto LABEL_178;
        }
        goto LABEL_186;
      }
    LABEL_185:
      *(v289 - 4) |= 1u;
      if (v288[1] == 1) {
      LABEL_178:
        *v289 |= 1u;
        if (v288[2] != 1) {
          goto LABEL_179;
        }
        goto LABEL_187;
      }
    LABEL_186:
      if (v288[2] != 1) {
      LABEL_179:
        if (v288[3] == 1) {
          goto LABEL_180;
        }
        goto LABEL_188;
      }
    LABEL_187:
      v289[4] |= 1u;
      if (v288[3] == 1) {
      LABEL_180:
        v289[8] |= 1u;
        if (v288[4] == 1) {
          goto LABEL_189;
        }
        goto LABEL_172;
      }
    LABEL_188:
      if (v288[4] == 1) {
      LABEL_189:
        v289[12] |= 1u;
      }
    LABEL_172:
      v290 -= 8;
      v288 += 8;
      v289 += 32;
      if (v291 == v290) {
        v287 = -v290;
        goto LABEL_191;
      }
    }
  }
  v287 = 0;
LABEL_191:
  if (v286 != 0) {
    v292 = (_WORD*)(v285 + 8 * v287);
    v293 = (unsigned __int8*)(v301 + v287);
    do {
      v294 = *v293++;
      if (v294 == 1) {
        *v292 |= 1u;
      }
      v292 += 4;
      --v286;
    } while (v286 != 0);
  }
LABEL_196:
  v295 = PxGetBroadcastAllocator(0);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v295 + 24LL))(v295, v301);
  return 1;
}

#pragma GCC visibility pop
