#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64 PxGetBroadcastAllocator_alt1(_BYTE*) __asm__("PxGetBroadcastAllocator");
__int64 PxGetFoundation_alt1() __asm__("PxGetFoundation");
float sqrtf_alt1(float) __asm__("sqrtf");

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
  int v17;
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
  bool v85;
  bool v86;
  bool v87;
  bool v88;
  bool v89;
  float* v90;
  float v91;
  float* v92;
  float* v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float* v101;
  float* v102;
  float* v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float* v123;
  float v124;
  float v125;
  float* v126;
  float* v127;
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
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float* v144;
  float* v145;
  float* v146;
  float v147;
  float v148;
  float v149;
  float* v150;
  float v151;
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
  float* v180;
  float v181;
  float v182;
  float* v183;
  float* v184;
  float v185;
  float v186;
  float v187;
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
  float* v198;
  float* v199;
  float v200;
  float* v201;
  float v202;
  float v203;
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
  float v214;
  float v215;
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
  __int64 v226;
  __int64 v227;
  unsigned int v228;
  float* v229;
  float v230;
  float v231;
  float* v232;
  float* v233;
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
  float v277;
  unsigned __int64 v278;
  unsigned int* v279;
  int v280;
  int v281;
  unsigned int v282;
  unsigned int v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  _BYTE* v287;
  _WORD* v288;
  __int64 v289;
  __int64 v290;
  _WORD* v291;
  unsigned __int8* v292;
  int v293;
  __int64 v294;
  const char* v295;
  unsigned int v296;
  __int64 v297;
  __int64 v300;
  unsigned int* v301;
  float* v302;
  float* v303;
  float* v304;
  int v305;
  bool* v307;
  bool* v308;
  int v309;
  int v310;
  __int64 v311;
  __int64 v312;
  float v313;
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
  int v332;
  float v333;
  float v334;
  float v335;
  __int64 v336;
  __int64 v337;
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
    v295 = v16;
    v296 = v17;
    v297 = PxGetFoundation_alt1();
    return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
        *(_QWORD*)v297 + 88LL))(
        v297, 8,
        "/Inside/Lib/PhysX/O/physx/source/geomutils/src/common/GuEdgeList.cpp",
        v296, v295);
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
  v337 = *((_QWORD*)a1 + 5);
  if (v337 == 0) {
    v16 = "ActiveEdges::ComputeConvexEdges: no faces-by-edges in edge list!";
    v17 = 315;
    goto LABEL_9;
  }
  v11 = *((_QWORD*)a1 + 4);
  v12 = PxGetBroadcastAllocator_alt1(nullptr);
  v13 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v12 + 16LL))(
      v12, v8, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/geomutils/src/common/GuEdgeList.cpp",
      318);
  v14 = v11;
  v300 = v13;
  v15 = (bool*)v13;
  v311 = v6;
  do {
    v19 = *(unsigned __int16*)(v14 + 2);
    if (v19 == 1) {
      goto LABEL_13;
    }
    v336 = v14;
    if (v19 != 2) {
      v33 = (unsigned int)(3 *
                           *(_DWORD*)(v337 + 4LL * *(unsigned int*)(v14 + 4)));
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
          v308 = v15;
          v310 = v8;
          v301 = v9;
          v332 = 0;
          v37 = 1;
          v38 = 1;
          v305 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v312 = v34;
          v303 = (float*)(a6 + 12LL * (unsigned int)v35);
          v304 = (float*)(a6 + 12LL * (unsigned int)v34);
          v302 = (float*)(a6 + 12LL * (unsigned int)v36);
          while (1) {
            v42 =
                (unsigned int)(3 *
                               *(_DWORD*)(v337 +
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
              v43 = *(unsigned __int16*)(v311 + 2 * v42);
              v44 = *(unsigned __int16*)(v311 + 2LL * (unsigned int)(v42 + 1));
              v45 = *(unsigned __int16*)(v311 + 2LL * (unsigned int)(v42 + 2));
              if (v43 != v34 && v43 != v35 && v43 != v36) {
              LABEL_72:
                if (v38 == 2) {
                  v85 = v43 == v41 || v43 == v40 || v43 == v39;
                  if (!v85 ||
                      (v44 != v41 ? (v86 = v44 == v40) : (v86 = true),
                       !v86 ? (v87 = v44 == v39) : (v87 = true),
                       !v87 ||
                           (v45 != v41 ? (v88 = v45 == v40) : (v88 = true),
                            !v88 ? (v89 = v45 == v39) : (v89 = true), !v89))) {
                    LODWORD(v8) = v310;
                    v6 = v311;
                    v9 = v301;
                    v18 = true;
                    v15 = v308;
                    goto LABEL_14;
                  }
                  v90 = (float*)(a6 + 12 * v41);
                  v91 = v90[1];
                  v92 = (float*)(a6 + 12 * v40);
                  v93 = (float*)(a6 + 12 * v39);
                  v94 = v90[2];
                  v95 = v92[1] - v91;
                  v96 = v92[2] - v94;
                  v97 = v93[1] - v91;
                  v98 = *v92 - *v90;
                  v99 = v93[2] - v94;
                  v100 = *v93 - *v90;
                  v101 = (float*)(a6 + 12LL * (unsigned int)v44);
                  v102 = (float*)(a6 + 12LL * (unsigned int)v45);
                  v103 = (float*)(a6 + 12LL * (unsigned int)v43);
                  v104 = *v103;
                  v105 = v103[1];
                  v106 = v103[2];
                  v107 = *v101;
                  v108 = v101[1];
                  v323 = *v102;
                  v328 = v101[2];
                  v315 = v102[2];
                  v318 = v102[1];
                  v109 =
                      (float)(v95 * v99) - (float)(PSEUDO_UNFUSED(v96 * v97));
                  v110 =
                      (float)(v96 * v100) - (float)(PSEUDO_UNFUSED(v98 * v99));
                  v111 =
                      (float)(v98 * v97) - (float)(PSEUDO_UNFUSED(v95 * v100));
                  v112 =
                      sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v110 * v110)) +
                                         (float)(v109 * v109)) +
                                 (float)(v111 * v111));
                  if (v112 > 0x0.0p+0f) {
                    v113 = 0x1.0000000000000p+0f / v112;
                    v109 = v109 * v113;
                    v110 = v110 * v113;
                    v111 = v111 * v113;
                  }
                  v114 = v107 - v104;
                  v115 = v318 - v105;
                  v116 = v323 - v104;
                  v117 = (float)((float)(v108 - v105) * (float)(v315 - v106)) -
                         (float)(PSEUDO_UNFUSED((float)(v328 - v106) *
                                                (float)(v318 - v105)));
                  v118 = -(float)((float)(v108 - v105) * v116);
                  v119 = (float)((float)(v328 - v106) * v116) -
                         (float)(PSEUDO_UNFUSED(v114 * (float)(v315 - v106)));
                  v120 = v118 + (float)(v114 * v115);
                  v121 =
                      sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v119 * v119)) +
                                         (float)(v117 * v117)) +
                                 (float)(v120 * v120));
                  if (v121 > 0x0.0p+0f) {
                    v122 = 0x1.0000000000000p+0f / v121;
                    v117 = v117 * v122;
                    v119 = v119 * v122;
                    v120 = v120 * v122;
                  }
                  v14 = v336;
                  v34 = v312;
                  v38 = 2;
                  v332 |=
                      (float)((float)((float)(PSEUDO_UNFUSED(v110 * v119)) +
                                      (float)(v109 * v117)) +
                              (float)(v111 * v120)) < -0x1.ff7cee0000000p-1f;
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
            v60 = v304[2];
            v61 = v304[1];
            v62 = *v54;
            v63 = v54[1];
            v322 = *v55;
            v327 = v54[2];
            v314 = v55[2];
            v317 = v55[1];
            v64 = v303[1] - v61;
            v65 = v303[2] - v60;
            v66 = *v303 - *v304;
            v67 = v302[1] - v61;
            v68 = v302[2] - v60;
            v69 = *v302 - *v304;
            v70 = (float)(v64 * v68) - (float)(PSEUDO_UNFUSED(v65 * v67));
            v71 = (float)(v65 * v69) - (float)(PSEUDO_UNFUSED(v66 * v68));
            v72 = (float)(v66 * v67) - (float)(PSEUDO_UNFUSED(v64 * v69));
            v73 = sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v71 * v71)) +
                                     (float)(v70 * v70)) +
                             (float)(v72 * v72));
            if (v73 > 0x0.0p+0f) {
              v74 = 0x1.0000000000000p+0f / v73;
              v70 = v70 * v74;
              v71 = v71 * v74;
              v72 = v72 * v74;
            }
            v75 = v62 - v57;
            v76 = v317 - v58;
            v77 = v322 - v57;
            v78 = (float)((float)(v63 - v58) * (float)(v314 - v59)) -
                  (float)(PSEUDO_UNFUSED((float)(v327 - v59) *
                                         (float)(v317 - v58)));
            v79 = -(float)((float)(v63 - v58) * v77);
            v80 = (float)((float)(v327 - v59) * v77) -
                  (float)(PSEUDO_UNFUSED(v75 * (float)(v314 - v59)));
            v81 = v79 + (float)(v75 * v76);
            v82 = sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v80 * v80)) +
                                     (float)(v78 * v78)) +
                             (float)(v81 * v81));
            if (v82 > 0x0.0p+0f) {
              v83 = 0x1.0000000000000p+0f / v82;
              v78 = v78 * v83;
              v80 = v80 * v83;
              v81 = v81 * v83;
            }
            v14 = v336;
            v34 = v312;
            v305 |= (float)((float)((float)(PSEUDO_UNFUSED(v71 * v80)) +
                                    (float)(v70 * v78)) +
                            (float)(v72 * v81)) < -0x1.ff7cee0000000p-1f;
          LABEL_33:
            if (v19 == ++v37) {
              v9 = v301;
              if (v38 != 2) {
                LODWORD(v8) = v310;
                v6 = v311;
                v15 = v308;
                break;
              }
              if (((v305 | v332) & 1) != 0) {
                v180 = (float*)(a6 + 12 * v41);
                v181 = *v180;
                v182 = v180[1];
                v183 = (float*)(a6 + 12 * v40);
                v184 = (float*)(a6 + 12 * v39);
                v185 = v183[2];
                v186 = v180[2];
                v187 = *v184;
                v188 = v184[1];
                v190 = *v183;
                v189 = v183[1];
                v191 = v184[2];
                v192 = *v183 - *v180;
                v193 = *v184 - *v180;
                v194 = (float)((float)(v189 - v182) * (float)(v191 - v186)) -
                       (float)(PSEUDO_UNFUSED((float)(v185 - v186) *
                                              (float)(v188 - v182)));
                v195 = (float)((float)(v185 - v186) * v193) -
                       (float)(PSEUDO_UNFUSED(v192 * (float)(v191 - v186)));
                v196 = (float)(v192 * (float)(v188 - v182)) -
                       (float)(PSEUDO_UNFUSED((float)(v189 - v182) * v193));
                v197 = (float)((float)(PSEUDO_UNFUSED(v195 * v195)) +
                               (float)(v194 * v194)) +
                       (float)(v196 * v196);
                if (v197 > 0x0.0p+0f) {
                  sqrtf_alt1(v197);
                  v181 = *v180;
                  v182 = v180[1];
                  v186 = v180[2];
                  v190 = *v183;
                  v189 = v183[1];
                  v185 = v183[2];
                  v187 = *v184;
                  v188 = v184[1];
                  v191 = v184[2];
                  LODWORD(v34) = v312;
                }
                v198 = (float*)(a6 + 12LL * (unsigned int)v34);
                v320 = v188;
                v334 = v189;
                v325 = v187;
                v330 = v185;
                v199 = (float*)(a6 + 12LL * (unsigned int)v35);
                v200 = v198[1];
                v201 = (float*)(a6 + 12LL * (unsigned int)v36);
                v202 = v198[2];
                v203 = v199[1] - v200;
                v204 = v199[2] - v202;
                v205 = v201[1] - v200;
                v206 = *v199 - *v198;
                v207 = v201[2] - v202;
                v208 = *v201 - *v198;
                v209 =
                    (float)(v203 * v207) - (float)(PSEUDO_UNFUSED(v204 * v205));
                v210 =
                    (float)(v204 * v208) - (float)(PSEUDO_UNFUSED(v206 * v207));
                v211 =
                    (float)(v206 * v205) - (float)(PSEUDO_UNFUSED(v203 * v208));
                v212 = sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v210 * v210)) +
                                          (float)(v209 * v209)) +
                                  (float)(v211 * v211));
                v6 = v311;
                v15 = v308;
                if (v212 > 0x0.0p+0f) {
                  v213 = 0x1.0000000000000p+0f / v212;
                  v209 = v209 * v213;
                  v210 = v210 * v213;
                  v211 = v211 * v213;
                }
                v214 = v190 - v181;
                v215 = v320 - v182;
                LODWORD(v8) = v310;
                v216 = (float)((float)(v334 - v182) * (float)(v191 - v186)) -
                       (float)(PSEUDO_UNFUSED((float)(v330 - v186) *
                                              (float)(v320 - v182)));
                v217 = -(float)((float)(v334 - v182) * (float)(v325 - v181));
                v218 = (float)((float)(v330 - v186) * (float)(v325 - v181)) -
                       (float)(PSEUDO_UNFUSED(v214 * (float)(v191 - v186)));
                v219 = v217 + (float)(v214 * v215);
                v220 = sqrtf_alt1((float)((float)(PSEUDO_UNFUSED(v218 * v218)) +
                                          (float)(v216 * v216)) +
                                  (float)(v219 * v219));
                if (v220 > 0x0.0p+0f) {
                  v221 = 0x1.0000000000000p+0f / v220;
                  v216 = v216 * v221;
                  v218 = v218 * v221;
                  v219 = v219 * v221;
                }
                v222 =
                    (float)(v211 * v216) - (float)(PSEUDO_UNFUSED(v209 * v219));
                v223 =
                    (float)(v209 * v218) - (float)(PSEUDO_UNFUSED(v210 * v216));
                v224 = (float)((float)(PSEUDO_UNFUSED(v210 * v218)) +
                               (float)(v209 * v216)) +
                       (float)(v211 * v219);
                v225 =
                    (float)(v210 * v219) - (float)(PSEUDO_UNFUSED(v211 * v218));
                goto LABEL_150;
              }
              v227 = *v301;
              v226 = v301[1];
              if (v227 == v34) {
                v228 = v36;
                if (v226 != v35) {
                  v228 = v35;
                  goto LABEL_136;
                }
                goto LABEL_142;
              }
              if (v227 == v35) {
                v228 = v36;
                if (v226 == v34) {
                  goto LABEL_142;
                }
                v228 = v34;
              LABEL_136:
                if (v226 == v36) {
                LABEL_142:
                  v229 = (float*)(a6 + 12 * v41);
                  v230 = *v229;
                  v231 = v229[1];
                  v232 = (float*)(a6 + 12 * v40);
                  v233 = (float*)(a6 + 12 * v39);
                  v234 = v229[2];
                  v235 = v232[2] - v234;
                  v236 = v233[1] - v231;
                  v237 = *v232 - *v229;
                  v238 = v232[1] - v231;
                  v239 = v233[2] - v234;
                  v240 = *v233 - *v229;
                  v241 = (float)(v238 * v239) -
                         (float)(PSEUDO_UNFUSED(v235 * v236));
                  v242 = (float)(v235 * v240) -
                         (float)(PSEUDO_UNFUSED(v237 * v239));
                  v243 = (float)(v237 * v236) -
                         (float)(PSEUDO_UNFUSED(v238 * v240));
                  v244 = 0x0.0p+0f;
                  v245 = 0x0.0p+0f;
                  v246 = 0x0.0p+0f;
                  v247 = (float)((float)(PSEUDO_UNFUSED(v242 * v242)) +
                                 (float)(v241 * v241)) +
                         (float)(v243 * v243);
                  if (v247 > 0x0.0p+0f) {
                    v248 = sqrtf_alt1(v247);
                    v230 = *v229;
                    v231 = v229[1];
                    v234 = v229[2];
                    LODWORD(v34) = v312;
                    v249 = 0x1.0000000000000p+0f / v248;
                    v14 = v336;
                    v244 = v241 * v249;
                    v245 = v242 * v249;
                    v246 = v243 * v249;
                  }
                  v15 = v308;
                  if ((float)((float)((float)(PSEUDO_UNFUSED(
                                          v245 *
                                          *(float*)(a6 + 12LL * v228 + 4))) +
                                      (float)(*(float*)(a6 + 12LL * v228) *
                                              v244)) +
                              (float)(*(float*)(a6 + 12LL * v228 + 8) *
                                      v246)) >=
                      (float)((float)((float)(PSEUDO_UNFUSED(v245 * v231)) +
                                      (float)(v230 * v244)) +
                              (float)(v234 * v246))) {
                    LODWORD(v8) = v310;
                    v6 = v311;
                    v18 = false;
                  }
                  else {
                    v250 = (float*)(a6 + 12LL * (unsigned int)v34);
                    v251 = *v232;
                    v252 = v232[1];
                    v253 = v250[1];
                    v254 = (float*)(a6 + 12LL * (unsigned int)v35);
                    v255 = (float*)(a6 + 12LL * (unsigned int)v36);
                    v256 = v250[2];
                    v326 = v233[1];
                    v331 = *v233;
                    v335 = v232[2];
                    v257 = v254[1] - v253;
                    v258 = v254[2] - v256;
                    v259 = v255[1] - v253;
                    v260 = *v254 - *v250;
                    v261 = v255[2] - v256;
                    v262 = *v255 - *v250;
                    v263 = (float)(v257 * v261) -
                           (float)(PSEUDO_UNFUSED(v258 * v259));
                    v321 = v233[2];
                    v264 = (float)(v258 * v262) -
                           (float)(PSEUDO_UNFUSED(v260 * v261));
                    v265 = (float)(v260 * v259) -
                           (float)(PSEUDO_UNFUSED(v257 * v262));
                    v266 = sqrtf_alt1(
                        (float)((float)(PSEUDO_UNFUSED(v264 * v264)) +
                                (float)(v263 * v263)) +
                        (float)(v265 * v265));
                    v6 = v311;
                    if (v266 > 0x0.0p+0f) {
                      v267 = 0x1.0000000000000p+0f / v266;
                      v263 = v263 * v267;
                      v264 = v264 * v267;
                      v265 = v265 * v267;
                    }
                    v268 = v251 - v230;
                    v269 = v326 - v231;
                    v270 =
                        (float)((float)(v252 - v231) * (float)(v321 - v234)) -
                        (float)(PSEUDO_UNFUSED((float)(v335 - v234) *
                                               (float)(v326 - v231)));
                    v271 =
                        -(float)((float)(v252 - v231) * (float)(v331 - v230));
                    v272 =
                        (float)((float)(v335 - v234) * (float)(v331 - v230)) -
                        (float)(PSEUDO_UNFUSED(v268 * (float)(v321 - v234)));
                    v273 = v271 + (float)(v268 * v269);
                    v274 = sqrtf_alt1(
                        (float)((float)(PSEUDO_UNFUSED(v272 * v272)) +
                                (float)(v270 * v270)) +
                        (float)(v273 * v273));
                    LODWORD(v8) = v310;
                    if (v274 > 0x0.0p+0f) {
                      v275 = 0x1.0000000000000p+0f / v274;
                      v270 = v270 * v275;
                      v272 = v272 * v275;
                      v273 = v273 * v275;
                    }
                    v222 = (float)(v265 * v270) -
                           (float)(PSEUDO_UNFUSED(v263 * v273));
                    v223 = (float)(v263 * v272) -
                           (float)(PSEUDO_UNFUSED(v264 * v270));
                    v224 = (float)((float)(PSEUDO_UNFUSED(v264 * v272)) +
                                   (float)(v263 * v270)) +
                           (float)(v265 * v273);
                    v225 = (float)(v264 * v273) -
                           (float)(PSEUDO_UNFUSED(v265 * v272));
                  LABEL_150:
                    v276 = sqrtf_alt1(
                        (float)((float)(PSEUDO_UNFUSED(v222 * v222)) +
                                (float)(v225 * v225)) +
                        (float)(v223 * v223));
                    v277 = atan2f(v276, v224);
                    v18 = fabsf(v277) > a2;
                  LABEL_115:
                    v14 = v336;
                  }
                  goto LABEL_14;
                }
              }
              else if (v227 == v36) {
                v228 = v34;
                if (v226 == v35) {
                  goto LABEL_142;
                }
                v228 = v35;
                if (v226 == v34) {
                  goto LABEL_142;
                }
              }
              v228 = -1;
              goto LABEL_142;
            }
          }
        }
      }
    LABEL_13:
      v18 = true;
      goto LABEL_14;
    }
    v309 = v8;
    v20 = *(unsigned int*)(v14 + 4);
    v21 = (unsigned int)(3 * *(_DWORD*)(v337 + 4 * v20));
    v22 = 3 * *(_DWORD*)(v337 + 4LL * (unsigned int)(v20 + 1));
    if (a4 != 0) {
      v23 = *(unsigned int*)(a4 + 4 * v21);
      v24 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v21 + 1));
      v25 = *(unsigned int*)(a4 + 4LL * (unsigned int)(v21 + 2));
      v26 = *(_DWORD*)(a4 + 4LL * v22);
      v27 = *(_DWORD*)(a4 + 4LL * (v22 + 1));
      v28 = *(_DWORD*)(a4 + 4LL * (v22 + 2));
      v30 = *v9;
      v29 = v9[1];
      v307 = v15;
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
      v307 = v15;
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
    v123 = (float*)(a6 + 12LL * v26);
    v125 = *v123;
    v124 = v123[1];
    v126 = (float*)(a6 + 12LL * v27);
    v127 = (float*)(a6 + 12LL * v28);
    v128 = v123[2];
    v129 = v126[2] - v128;
    v130 = v127[1] - v124;
    v131 = *v126 - *v123;
    v132 = v126[1] - v124;
    v133 = v127[2] - v128;
    v134 = *v127 - *v123;
    v135 = (float)(v132 * v133) - (float)(PSEUDO_UNFUSED(v129 * v130));
    v136 = (float)(v129 * v134) - (float)(PSEUDO_UNFUSED(v131 * v133));
    v137 = (float)(v131 * v130) - (float)(PSEUDO_UNFUSED(v132 * v134));
    v138 = 0x0.0p+0f;
    v139 = 0x0.0p+0f;
    v140 = 0x0.0p+0f;
    v141 =
        (float)((float)(PSEUDO_UNFUSED(v136 * v136)) + (float)(v135 * v135)) +
        (float)(v137 * v137);
    if (v141 > 0x0.0p+0f) {
      v142 = sqrtf_alt1(v141);
      v125 = *v123;
      v124 = v123[1];
      v128 = v123[2];
      v143 = 0x1.0000000000000p+0f / v142;
      v138 = v135 * v143;
      v139 = v136 * v143;
      v140 = v137 * v143;
    }
    v144 = (float*)(a6 + 12LL * v32);
    v145 = (float*)(a6 + 12LL * (unsigned int)v24);
    v146 = (float*)(a6 + 12LL * (unsigned int)v25);
    v147 =
        (float)((float)(PSEUDO_UNFUSED(v139 * v124)) + (float)(v125 * v138)) +
        (float)(v128 * v140);
    v313 = *v126;
    v316 = v126[1];
    v319 = v126[2];
    v324 = *v127;
    v329 = v127[1];
    v148 = (float)(PSEUDO_UNFUSED(v139 * v144[1])) + (float)(*v144 * v138);
    v149 = v144[2];
    v150 = (float*)(a6 + 12LL * (unsigned int)v23);
    v333 = v127[2];
    v151 = v148 + (float)(v149 * v140);
    v152 = v150[1];
    v153 = v150[2];
    v154 = v145[1] - v152;
    v155 = v145[2] - v153;
    v156 = v146[1] - v152;
    v157 = *v145 - *v150;
    v158 = v146[2] - v153;
    v159 = *v146 - *v150;
    v160 = (float)(v154 * v158) - (float)(PSEUDO_UNFUSED(v155 * v156));
    v161 = (float)(v155 * v159) - (float)(PSEUDO_UNFUSED(v157 * v158));
    v162 = (float)(v157 * v156) - (float)(PSEUDO_UNFUSED(v154 * v159));
    v163 = sqrtf_alt1(
        (float)((float)(PSEUDO_UNFUSED(v161 * v161)) + (float)(v160 * v160)) +
        (float)(v162 * v162));
    if (v151 < v147) {
      LODWORD(v8) = v309;
      v6 = v311;
      v9 = v31;
      if (v163 > 0x0.0p+0f) {
        v164 = 0x1.0000000000000p+0f / v163;
        v160 = v160 * v164;
        v161 = v161 * v164;
        v162 = v162 * v164;
      }
      v15 = v307;
      v165 =
          (float)((float)(v316 - v124) * (float)(v333 - v128)) -
          (float)(PSEUDO_UNFUSED((float)(v319 - v128) * (float)(v329 - v124)));
      v166 =
          (float)((float)(v319 - v128) * (float)(v324 - v125)) -
          (float)(PSEUDO_UNFUSED((float)(v313 - v125) * (float)(v333 - v128)));
      v167 =
          (float)((float)(v313 - v125) * (float)(v329 - v124)) -
          (float)(PSEUDO_UNFUSED((float)(v316 - v124) * (float)(v324 - v125)));
      v168 = sqrtf_alt1(
          (float)((float)(PSEUDO_UNFUSED(v166 * v166)) + (float)(v165 * v165)) +
          (float)(v167 * v167));
      if (v168 > 0x0.0p+0f) {
        v169 = 0x1.0000000000000p+0f / v168;
        v165 = v165 * v169;
        v166 = v166 * v169;
        v167 = v167 * v169;
      }
      v170 = sqrtf_alt1(
          (float)((float)(PSEUDO_UNFUSED(
                      (float)((float)(v162 * v165) -
                              (float)(PSEUDO_UNFUSED(v160 * v167))) *
                      (float)((float)(v162 * v165) -
                              (float)(PSEUDO_UNFUSED(v160 * v167))))) +
                  (float)((float)((float)(v161 * v167) -
                                  (float)(PSEUDO_UNFUSED(v162 * v166))) *
                          (float)((float)(v161 * v167) -
                                  (float)(PSEUDO_UNFUSED(v162 * v166))))) +
          (float)((float)((float)(v160 * v166) -
                          (float)(PSEUDO_UNFUSED(v161 * v165))) *
                  (float)((float)(v160 * v166) -
                          (float)(PSEUDO_UNFUSED(v161 * v165)))));
      v171 = atan2f(v170, (float)((float)(PSEUDO_UNFUSED(v161 * v166)) +
                                  (float)(v160 * v165)) +
                              (float)(v162 * v167));
      v18 = fabsf(v171) > a2;
      goto LABEL_115;
    }
    LODWORD(v8) = v309;
    v6 = v311;
    v9 = v31;
    if (v163 > 0x0.0p+0f) {
      v172 = 0x1.0000000000000p+0f / v163;
      v160 = v160 * v172;
      v161 = v161 * v172;
      v162 = v162 * v172;
    }
    v173 = v329 - v124;
    v15 = v307;
    v174 = (float)((float)(v316 - v124) * (float)(v333 - v128)) -
           (float)(PSEUDO_UNFUSED((float)(v319 - v128) * (float)(v329 - v124)));
    v175 = -(float)((float)(v316 - v124) * (float)(v324 - v125));
    v176 = (float)((float)(v319 - v128) * (float)(v324 - v125)) -
           (float)(PSEUDO_UNFUSED((float)(v313 - v125) * (float)(v333 - v128)));
    v177 = v175 + (float)((float)(v313 - v125) * v173);
    v178 = sqrtf_alt1(
        (float)((float)(PSEUDO_UNFUSED(v176 * v176)) + (float)(v174 * v174)) +
        (float)(v177 * v177));
    if (v178 > 0x0.0p+0f) {
      v179 = 0x1.0000000000000p+0f / v178;
      v174 = v174 * v179;
      v176 = v176 * v179;
      v177 = v177 * v179;
    }
    v14 = v336;
    v18 = (float)((float)((float)(PSEUDO_UNFUSED(v161 * v176)) +
                          (float)(v160 * v174)) +
                  (float)(v162 * v177)) < -0x1.ff7cee0000000p-1f;
  LABEL_14:
    LODWORD(v8) = v8 - 1;
    *v15++ = v18;
    v14 += 8;
    v9 += 2;
  } while ((_DWORD)v8 != 0);
  if (a1[4] != 0) {
    v278 = 0;
    v279 = (unsigned int*)(*((_QWORD*)a1 + 3) + 8LL);
    do {
      v280 = *(v279 - 2);
      if ((v280 & 0x80000000) == 0 &&
          *(_BYTE*)(v300 + (v280 & 0xFFFFFFF)) == 1) {
        *(v279 - 2) = v280 | 0x80000000;
      }
      v281 = *(v279 - 1);
      if ((v281 & 0x80000000) == 0 &&
          *(_BYTE*)(v300 + (v281 & 0xFFFFFFF)) == 1) {
        *(v279 - 1) = v281 | 0x80000000;
      }
      v282 = *v279;
      if ((*v279 & 0x80000000) == 0 &&
          *(_BYTE*)(v300 + (v282 & 0xFFFFFFF)) == 1) {
        *v279 = v282 | 0x80000000;
      }
      ++v278;
      v279 += 3;
    } while (v278 < a1[4]);
  }
  v283 = *a1;
  if (*a1 == 0) {
    if (v300 != 0) {
      goto LABEL_196;
    }
    return 1;
  }
  v284 = *((_QWORD*)a1 + 4);
  v285 = v283 & 7;
  if (v283 >= 8) {
    v287 = (_BYTE*)(v300 + 3);
    v288 = (_WORD*)(v284 + 32);
    v289 = 0;
    v290 = -(__int64)(v283 & 0xFFFFFFF8);
    while (1) {
      if (*(v287 - 3) == 1) {
        *(v288 - 16) |= 1u;
        if (*(v287 - 2) != 1) {
          goto LABEL_175;
        }
      }
      else if (*(v287 - 2) != 1) {
      LABEL_175:
        if (*(v287 - 1) == 1) {
          goto LABEL_176;
        }
        goto LABEL_184;
      }
      *(v288 - 12) |= 1u;
      if (*(v287 - 1) == 1) {
      LABEL_176:
        *(v288 - 8) |= 1u;
        if (*v287 != 1) {
          goto LABEL_177;
        }
        goto LABEL_185;
      }
    LABEL_184:
      if (*v287 != 1) {
      LABEL_177:
        if (v287[1] == 1) {
          goto LABEL_178;
        }
        goto LABEL_186;
      }
    LABEL_185:
      *(v288 - 4) |= 1u;
      if (v287[1] == 1) {
      LABEL_178:
        *v288 |= 1u;
        if (v287[2] != 1) {
          goto LABEL_179;
        }
        goto LABEL_187;
      }
    LABEL_186:
      if (v287[2] != 1) {
      LABEL_179:
        if (v287[3] == 1) {
          goto LABEL_180;
        }
        goto LABEL_188;
      }
    LABEL_187:
      v288[4] |= 1u;
      if (v287[3] == 1) {
      LABEL_180:
        v288[8] |= 1u;
        if (v287[4] == 1) {
          goto LABEL_189;
        }
        goto LABEL_172;
      }
    LABEL_188:
      if (v287[4] == 1) {
      LABEL_189:
        v288[12] |= 1u;
      }
    LABEL_172:
      v289 -= 8;
      v287 += 8;
      v288 += 32;
      if (v290 == v289) {
        v286 = -v289;
        goto LABEL_191;
      }
    }
  }
  v286 = 0;
LABEL_191:
  if (v285 != 0) {
    v291 = (_WORD*)(v284 + 8 * v286);
    v292 = (unsigned __int8*)(v300 + v286);
    do {
      v293 = *v292++;
      if (v293 == 1) {
        *v291 |= 1u;
      }
      v291 += 4;
      --v285;
    } while (v285 != 0);
  }
LABEL_196:
  v294 = PxGetBroadcastAllocator_alt1(nullptr);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v294 + 24LL))(v294, v300);
  return 1;
}

#pragma GCC visibility pop
