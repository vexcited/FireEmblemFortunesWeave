#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_c7e100;
extern _UNKNOWN SdkData_e71f78;
extern char SdkData_ea44f8;
__int64 SdkRoutine_44eee0(_QWORD, _QWORD);
__int64 SdkRoutine_4806d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_480920(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_65dfe0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_664890(_QWORD);
__int64 SdkRoutine_66d050(void);
__int64 SdkRoutine_66d8e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66dbf0(void);
__int64 SdkRoutine_86acf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_86ad00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_876210(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8765c0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_876630(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkHr_44eb20(__int64 a1, int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 result;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = *(_QWORD*)a2;
  if (*(_QWORD*)a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 56);
  if (v4 == 0) {
    return 0;
  }
  v5 = *((_QWORD*)a2 + 5);
  if (v5 == 0 || *(_DWORD*)(v4 + 164) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v2 + 36) & 2) != 0) {
    if (a2[2] >= 1 && a2[4] == 0 && a2[5] > 0) {
      goto LABEL_17;
    }
    return 0;
  }
  if (*(_BYTE*)(v5 + 4) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 77) & 2) != 0) {
    if (*(unsigned __int16*)(a1 + 112) < 0x1Bu) {
      goto LABEL_17;
    }
    return 0;
  }
  if (*(_DWORD*)(a1 + 100) +
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                24LL * *(unsigned __int16*)(a1 + 40)) +
                     44LL) !=
      0) {
    return 0;
  }
LABEL_17:
  result = SdkRoutine_44eee0(a1, v4);
  if (result != 0) {
    *(_WORD*)(result + 36) = 1;
    *(_BYTE*)(result + 34) = 1;
    *(_WORD*)(result + 38) = 1;
  }
  return result;
}

__int64 SdkHr_44ec60(__int64 a1, int* a2, __int64 a3, __int16 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int16 v8;
  __int64 result;
  __int16 v10;
  __int16 v11;
  __int16 v12;

  if ((a4 & 0x202) != 0) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if ((a4 & 0x808) != 0) {
    v11 = 8;
  }
  else {
    v11 = v10;
  }
  if ((a4 & 0x404) != 0) {
    v12 = 4;
  }
  else {
    v12 = v11;
  }
  if (a2 == nullptr) {
    return 0;
  }
  v4 = *(_QWORD*)a2;
  if (*(_QWORD*)a2 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(v4 + 56);
  if (v6 == 0) {
    return 0;
  }
  v7 = *((_QWORD*)a2 + 5);
  if (v7 == 0 || *(_DWORD*)(v6 + 164) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v4 + 36) & 2) != 0) {
    if (a2[2] < 1) {
      return 0;
    }
    if (a2[4] != 0) {
      return 0;
    }
    v8 = v12;
    if (a2[5] <= 0) {
      return 0;
    }
  }
  else {
    if (*(_BYTE*)(v7 + 4) == 0) {
      return 0;
    }
    v8 = v12;
    if ((*(_BYTE*)(a1 + 77) & 2) == 0) {
      if (*(_DWORD*)(a1 + 100) +
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                    24LL * *(unsigned __int16*)(a1 + 40)) +
                         44LL) ==
          0) {
        goto LABEL_26;
      }
      return 0;
    }
    if (*(unsigned __int16*)(a1 + 112) >= 0x1Bu) {
      return 0;
    }
  }
LABEL_26:
  result = SdkRoutine_44eee0(a1, v6);
  if (result != 0) {
    *(_WORD*)(result + 36) = v8;
    *(_BYTE*)(result + 34) = 1;
    if (v8 <= 8u && ((1 << v8) & 0x116) != 0) {
      *(_WORD*)(result + 38) = v8;
    }
  }
  return result;
}

__int64 SdkHr_47f8a0(__int64 result, char* a2, __int64 a3, __int64 a4, char a5)
{
  char* v8;
  char* v9;
  char* v10;
  char* v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
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
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  char* v84;
  char* v85;
  unsigned __int64 v86;
  char* v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  char v98;
  char* v99;
  unsigned __int64 v100;
  char* v101;
  unsigned __int64 v102;
  char* v103;
  char* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  char* v125;
  bool v127;
  __int64 v128;
  char* v129;
  char* v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  char* v134;
  __int64 v135;
  char* v136;
  char* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  char* v151;
  char* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  signed __int64 v180;
  bool v181;
  __int64 v182;
  char* v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  char* v186;
  char* v187;
  __int64 v188;
  __int64 v189;
  char* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  char* v197;
  char* v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  char* v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  bool v207;
  __int64 v208;
  char* v209;
  unsigned __int64 v210;
  char* v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  bool v217;
  __int64 v218;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64 v300;
  unsigned __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 vars38;
  __int64 vars38a;
  __int64 vars40;
  __int64 vars40a;
  __int64 vars48;
  __int64 vars50;
  __int64 _D8;

  v8 = (char*)result;
LABEL_2:
  v9 = a2 - 24;
  v10 = a2 - 48;
  v11 = a2 - 72;
  v12 = v8;
  while (1) {
    v13 = a2 - v12;
    v8 = v12;
    v14 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v12) >> 3);
    if ((__int64)v14 > 2) {
      break;
    }
    if (v14 < 2) {
      return result;
    }
    if (v14 == 2) {
      if (*((_QWORD*)a2 - 1) < *((_QWORD*)v12 + 2)) {
        v281 = *((_QWORD*)v12 + 1);
        v315 = *((_QWORD*)v12 + 2);
        v247 = *(_QWORD*)v12;
        v113 = *((_QWORD*)a2 - 3);
        v114 = *((_QWORD*)a2 - 1);
        *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
        *((_QWORD*)v12 + 2) = v114;
        *(_QWORD*)v12 = v113;
        *((_QWORD*)a2 - 2) = v281;
        *((_QWORD*)a2 - 1) = v315;
        *((_QWORD*)a2 - 3) = v247;
      }
      return result;
    }
  LABEL_10:
    if (v13 <= 575) {
      v125 = v12 + 24;
      v127 = v12 == a2 || v125 == a2;
      if ((a5 & 1) != 0) {
        if (!v127) {
          v128 = 0;
          v129 = v12;
          do {
            v131 = *((_QWORD*)v129 + 5);
            v132 = *((_QWORD*)v129 + 2);
            v129 = v125;
            if (v131 < v132) {
              v250 = *(_QWORD*)v125;
              v284 = *((_QWORD*)v125 + 1);
              v133 = v128;
              do {
                v134 = &v12[v133];
                v135 = *(_QWORD*)&v12[v133 + 8];
                *((_QWORD*)v134 + 3) = *(_QWORD*)&v12[v133];
                *((_QWORD*)v134 + 4) = v135;
                *((_QWORD*)v134 + 5) = *(_QWORD*)&v12[v133 + 16];
                if (v133 == 0) {
                  v130 = v12;
                  goto LABEL_123;
                }
                v133 -= 24;
              } while (v131 < *((_QWORD*)v134 - 1));
              v130 = &v12[v133 + 24];
            LABEL_123:
              *((_QWORD*)v130 + 2) = v131;
              *(_QWORD*)v130 = v250;
              *((_QWORD*)v130 + 1) = v284;
            }
            v125 = v129 + 24;
            v128 += 24;
          } while (v129 + 24 != a2);
        }
      }
      else if (!v127) {
        do {
          v149 = *((_QWORD*)v8 + 5);
          v150 = *((_QWORD*)v8 + 2);
          v8 = v125;
          if (v149 < v150) {
            v253 = *(_QWORD*)v125;
            v287 = *((_QWORD*)v125 + 1);
            v151 = v125;
            do {
              v152 = v151;
              v153 = *((_QWORD*)v151 - 3);
              v151 -= 24;
              v154 = *((_QWORD*)v152 - 2);
              v155 = *((_QWORD*)v152 - 1);
              *(_QWORD*)v152 = v153;
              *((_QWORD*)v152 + 1) = v154;
              *((_QWORD*)v152 + 2) = v155;
            } while (v149 < *((_QWORD*)v152 - 4));
            *((_QWORD*)v151 + 2) = v149;
            *(_QWORD*)v151 = v253;
            *((_QWORD*)v151 + 1) = v287;
          }
          v125 = v8 + 24;
        } while (v8 + 24 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v12 != a2) {
        v136 = a2;
        v137 = a2;
        if (v12 != a2) {
          v178 = a2 - v12;
          v179 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v12) >> 3);
          if (a2 - v12 >= 25 && (unsigned __int64)v178 >= 0x30) {
            v201 = (unsigned __int64)(v179 - 2) >> 1;
            v202 = v201;
            do {
              if (v201 >= v202) {
                v203 = (2 * (v202 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v204 = &v12[24 * v203];
                if ((__int64)(2 * v202 + 2) < v179) {
                  v205 = *((_QWORD*)v204 + 2);
                  v206 = *((_QWORD*)v204 + 5);
                  v207 = v205 >= v206;
                  if (v205 >= v206) {
                    v208 = 0;
                  }
                  else {
                    v208 = 24;
                  }
                  if (!v207) {
                    v203 = 2 * v202 + 2;
                  }
                  v204 += v208;
                }
                v209 = &v12[24 * v202];
                v210 = *((_QWORD*)v209 + 2);
                if (*((_QWORD*)v204 + 2) >= v210) {
                  vars38a = *(_QWORD*)v209;
                  vars40a = *((_QWORD*)v209 + 1);
                  do {
                    v211 = v204;
                    v212 = *(_QWORD*)v204;
                    v213 = *((_QWORD*)v211 + 2);
                    *((_QWORD*)v209 + 1) = *((_QWORD*)v211 + 1);
                    *((_QWORD*)v209 + 2) = v213;
                    *(_QWORD*)v209 = v212;
                    if ((__int64)v201 < v203) {
                      break;
                    }
                    v214 = 2 * v203 + 2;
                    v203 = (2 * v203) | 1;
                    v204 = &v12[24 * v203];
                    if (v214 < v179) {
                      v215 = *((_QWORD*)v204 + 2);
                      v216 = *((_QWORD*)v204 + 5);
                      v217 = v215 >= v216;
                      v218 = v215 >= v216 ? 0LL : 24LL;
                      v204 += v218;
                      if (!v217) {
                        v203 = v214;
                      }
                    }
                    v209 = v211;
                  } while (*((_QWORD*)v204 + 2) >= v210);
                  *((_QWORD*)v211 + 2) = v210;
                  *(_QWORD*)v211 = vars38a;
                  *((_QWORD*)v211 + 1) = vars40a;
                }
              }
              v181 = (__int64)v202-- <= 0;
            } while (!v181);
          }
          if (v178 >= 25) {
            v180 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)v178 >> 3);
            do {
              v182 = 0;
              v183 = v12;
              vars38 = *(_QWORD*)v12;
              vars40 = *((_QWORD*)v12 + 1);
              vars48 = *((_QWORD*)v12 + 2);
              do {
                v190 = &v183[24 * v182];
                v191 = (2 * v182) | 1;
                v182 = 2 * v182 + 2;
                v187 = v190 + 24;
                if (v182 < v180) {
                  v184 = *((_QWORD*)v190 + 5);
                  v185 = *((_QWORD*)v190 + 8);
                  v186 = v190 + 48;
                  if (v184 >= v185) {
                    v182 = v191;
                  }
                  else {
                    v187 = v186;
                  }
                }
                else {
                  v182 = v191;
                }
                v188 = *(_QWORD*)v187;
                v189 = *((_QWORD*)v187 + 2);
                *((_QWORD*)v183 + 1) = *((_QWORD*)v187 + 1);
                *((_QWORD*)v183 + 2) = v189;
                *(_QWORD*)v183 = v188;
                v183 = v187;
              } while (v182 <= (__int64)((unsigned __int64)(v180 - 2) >> 1));
              v136 -= 24;
              if (v187 == v136) {
                *((_QWORD*)v187 + 1) = vars40;
                *((_QWORD*)v187 + 2) = vars48;
                *(_QWORD*)v187 = vars38;
              }
              else {
                v192 = *(_QWORD*)v136;
                v193 = *((_QWORD*)v136 + 2);
                *((_QWORD*)v187 + 1) = *((_QWORD*)v136 + 1);
                *((_QWORD*)v187 + 2) = v193;
                *(_QWORD*)v187 = v192;
                *(_QWORD*)v136 = vars38;
                *((_QWORD*)v136 + 1) = vars40;
                *((_QWORD*)v136 + 2) = vars48;
                v194 = v187 - v12 + 24;
                if (v194 >= 25) {
                  v195 = (-2LL - 0x5555555555555555LL *
                                     ((unsigned __int64)v194 >> 3)) >>
                         1;
                  v196 = *((_QWORD*)v187 + 2);
                  v197 = &v12[24 * v195];
                  if (*((_QWORD*)v197 + 2) < v196) {
                    vars50 = *(_QWORD*)v187;
                    _D8 = *((_QWORD*)v187 + 1);
                    do {
                      v198 = v197;
                      v199 = *(_QWORD*)v197;
                      v200 = *((_QWORD*)v198 + 2);
                      *((_QWORD*)v187 + 1) = *((_QWORD*)v198 + 1);
                      *((_QWORD*)v187 + 2) = v200;
                      *(_QWORD*)v187 = v199;
                      if (v195 == 0) {
                        break;
                      }
                      v195 = (v195 - 1) >> 1;
                      v187 = v198;
                      v197 = &v12[24 * v195];
                    } while (*((_QWORD*)v197 + 2) < v196);
                    *((_QWORD*)v198 + 2) = v196;
                    *(_QWORD*)v198 = vars50;
                    *((_QWORD*)v198 + 1) = _D8;
                  }
                }
              }
              v181 = v180-- <= 2;
            } while (!v181);
          }
          return (__int64)a2;
        }
        return (__int64)v137;
      }
      return result;
    }
    v15 = &v12[24 * (v14 >> 1)];
    v16 = *((_QWORD*)a2 - 1);
    if ((unsigned __int64)v13 < 0xC01) {
      v20 = *((_QWORD*)v12 + 2);
      if (v20 < *((_QWORD*)v15 + 2)) {
        if (v16 < v20) {
          v259 = *((_QWORD*)v15 + 1);
          v293 = *((_QWORD*)v15 + 2);
          v225 = *(_QWORD*)v15;
          v21 = *(_QWORD*)v9;
          v22 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v22;
          *(_QWORD*)v15 = v21;
          goto LABEL_37;
        }
        v267 = *((_QWORD*)v15 + 1);
        v301 = *((_QWORD*)v15 + 2);
        v233 = *(_QWORD*)v15;
        v47 = *(_QWORD*)v12;
        v48 = *((_QWORD*)v12 + 2);
        *((_QWORD*)v15 + 1) = *((_QWORD*)v12 + 1);
        *((_QWORD*)v15 + 2) = v48;
        *(_QWORD*)v15 = v47;
        *((_QWORD*)v12 + 1) = v267;
        *((_QWORD*)v12 + 2) = v301;
        *(_QWORD*)v12 = v233;
        if (*((_QWORD*)a2 - 1) < v301) {
          v259 = *((_QWORD*)v12 + 1);
          v293 = *((_QWORD*)v12 + 2);
          v225 = *(_QWORD*)v12;
          v49 = *(_QWORD*)v9;
          v50 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v12 + 2) = v50;
          *(_QWORD*)v12 = v49;
        LABEL_37:
          *((_QWORD*)a2 - 2) = v259;
          *((_QWORD*)a2 - 1) = v293;
          *(_QWORD*)v9 = v225;
        }
      LABEL_38:
        --a4;
        if ((a5 & 1) == 0) {
          goto LABEL_62;
        }
        goto LABEL_39;
      }
      if (v16 >= v20) {
        goto LABEL_38;
      }
      v262 = *((_QWORD*)v12 + 1);
      v296 = *((_QWORD*)v12 + 2);
      v228 = *(_QWORD*)v12;
      v27 = *(_QWORD*)v9;
      v28 = *((_QWORD*)a2 - 1);
      *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
      *((_QWORD*)v12 + 2) = v28;
      *(_QWORD*)v12 = v27;
      *((_QWORD*)a2 - 2) = v262;
      *((_QWORD*)a2 - 1) = v296;
      *(_QWORD*)v9 = v228;
      if (*((_QWORD*)v12 + 2) >= *((_QWORD*)v15 + 2)) {
        goto LABEL_38;
      }
      v263 = *((_QWORD*)v15 + 1);
      v297 = *((_QWORD*)v15 + 2);
      v229 = *(_QWORD*)v15;
      v29 = *(_QWORD*)v12;
      v30 = *((_QWORD*)v12 + 2);
      *((_QWORD*)v15 + 1) = *((_QWORD*)v12 + 1);
      *((_QWORD*)v15 + 2) = v30;
      *(_QWORD*)v15 = v29;
      *((_QWORD*)v12 + 1) = v263;
      *((_QWORD*)v12 + 2) = v297;
      *(_QWORD*)v12 = v229;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_39;
      }
    LABEL_62:
      v51 = *((_QWORD*)v12 + 2);
      if (*((_QWORD*)v12 - 1) < v51) {
        goto LABEL_63;
      }
      v221 = *(_QWORD*)v12;
      v223 = *((_QWORD*)v12 + 1);
      if (v51 >= *((_QWORD*)a2 - 1)) {
        v101 = v12 + 24;
        do {
          v12 = v101;
          if (v101 >= a2) {
            break;
          }
          v102 = *((_QWORD*)v101 + 2);
          v101 += 24;
        } while (v51 >= v102);
      }
      else {
        v99 = v12;
        do {
          v100 = *((_QWORD*)v99 + 5);
          v12 = v99 + 24;
          v99 += 24;
        } while (v51 >= v100);
      }
      v103 = a2;
      if (v12 < a2) {
        v104 = a2;
        do {
          v105 = *((_QWORD*)v104 - 1);
          v103 = v104 - 24;
          v104 -= 24;
        } while (v51 < v105);
      }
      while (v12 < v103) {
        v280 = *((_QWORD*)v12 + 1);
        v314 = *((_QWORD*)v12 + 2);
        v246 = *(_QWORD*)v12;
        v106 = *(_QWORD*)v103;
        v107 = *((_QWORD*)v103 + 2);
        *((_QWORD*)v12 + 1) = *((_QWORD*)v103 + 1);
        *((_QWORD*)v12 + 2) = v107;
        *(_QWORD*)v12 = v106;
        *((_QWORD*)v103 + 1) = v280;
        *((_QWORD*)v103 + 2) = v314;
        *(_QWORD*)v103 = v246;
        do {
          v108 = *((_QWORD*)v12 + 5);
          v12 += 24;
        } while (v51 >= v108);
        do {
          v109 = *((_QWORD*)v103 - 1);
          v103 -= 24;
        } while (v51 < v109);
      }
      v110 = v12 - 24;
      if (v8 != v12 - 24) {
        v111 = *(_QWORD*)v110;
        v112 = *((_QWORD*)v12 - 1);
        *((_QWORD*)v8 + 1) = *((_QWORD*)v12 - 2);
        *((_QWORD*)v8 + 2) = v112;
        *(_QWORD*)v8 = v111;
      }
      a5 = 0;
      *((_QWORD*)v12 - 1) = v51;
      *(_QWORD*)v110 = v221;
      *((_QWORD*)v12 - 2) = v223;
    }
    else {
      v17 = *((_QWORD*)v15 + 2);
      if (v17 >= *((_QWORD*)v12 + 2)) {
        if (v16 < v17) {
          v260 = *((_QWORD*)v15 + 1);
          v294 = *((_QWORD*)v15 + 2);
          v226 = *(_QWORD*)v15;
          v23 = *(_QWORD*)v9;
          v24 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v24;
          *(_QWORD*)v15 = v23;
          *((_QWORD*)a2 - 2) = v260;
          *((_QWORD*)a2 - 1) = v294;
          *(_QWORD*)v9 = v226;
          if (*((_QWORD*)v15 + 2) < *((_QWORD*)v12 + 2)) {
            v261 = *((_QWORD*)v12 + 1);
            v295 = *((_QWORD*)v12 + 2);
            v227 = *(_QWORD*)v12;
            v25 = *(_QWORD*)v15;
            v26 = *((_QWORD*)v15 + 2);
            *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
            *((_QWORD*)v12 + 2) = v26;
            *(_QWORD*)v12 = v25;
            *((_QWORD*)v15 + 1) = v261;
            *((_QWORD*)v15 + 2) = v295;
            *(_QWORD*)v15 = v227;
          }
        }
      }
      else {
        if (v16 >= v17) {
          v264 = *((_QWORD*)v12 + 1);
          v298 = *((_QWORD*)v12 + 2);
          v230 = *(_QWORD*)v12;
          v31 = *(_QWORD*)v15;
          v32 = *((_QWORD*)v15 + 2);
          *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
          *((_QWORD*)v12 + 2) = v32;
          *(_QWORD*)v12 = v31;
          *((_QWORD*)v15 + 1) = v264;
          *((_QWORD*)v15 + 2) = v298;
          *(_QWORD*)v15 = v230;
          if (*((_QWORD*)a2 - 1) >= v298) {
            goto LABEL_29;
          }
          v258 = *((_QWORD*)v15 + 1);
          v292 = *((_QWORD*)v15 + 2);
          v224 = *(_QWORD*)v15;
          v33 = *(_QWORD*)v9;
          v34 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v34;
          *(_QWORD*)v15 = v33;
        }
        else {
          v258 = *((_QWORD*)v12 + 1);
          v292 = *((_QWORD*)v12 + 2);
          v224 = *(_QWORD*)v12;
          v18 = *(_QWORD*)v9;
          v19 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v12 + 2) = v19;
          *(_QWORD*)v12 = v18;
        }
        *((_QWORD*)a2 - 2) = v258;
        *((_QWORD*)a2 - 1) = v292;
        *(_QWORD*)v9 = v224;
      }
    LABEL_29:
      v35 = *((_QWORD*)v15 - 1);
      v36 = *((_QWORD*)a2 - 4);
      v37 = (__int64*)(v15 - 24);
      if (v35 >= *((_QWORD*)v12 + 5)) {
        if (v36 < v35) {
          v265 = *((_QWORD*)v15 - 2);
          v299 = *((_QWORD*)v15 - 1);
          v231 = *v37;
          v43 = *(_QWORD*)v10;
          v44 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v15 - 2) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v15 - 1) = v44;
          *v37 = v43;
          *((_QWORD*)a2 - 5) = v265;
          *((_QWORD*)a2 - 4) = v299;
          *(_QWORD*)v10 = v231;
          if (*((_QWORD*)v15 - 1) < *((_QWORD*)v12 + 5)) {
            v232 = *((_QWORD*)v12 + 3);
            v266 = *((_QWORD*)v12 + 4);
            v300 = *((_QWORD*)v12 + 5);
            v45 = *v37;
            v46 = *((_QWORD*)v15 - 1);
            *((_QWORD*)v12 + 4) = *((_QWORD*)v15 - 2);
            *((_QWORD*)v12 + 5) = v46;
            *((_QWORD*)v12 + 3) = v45;
            *((_QWORD*)v15 - 2) = v266;
            *((_QWORD*)v15 - 1) = v300;
            *v37 = v232;
          }
        }
      }
      else {
        if (v36 >= v35) {
          v234 = *((_QWORD*)v12 + 3);
          v268 = *((_QWORD*)v12 + 4);
          v302 = *((_QWORD*)v12 + 5);
          v52 = *v37;
          v53 = *((_QWORD*)v15 - 1);
          *((_QWORD*)v12 + 4) = *((_QWORD*)v15 - 2);
          *((_QWORD*)v12 + 5) = v53;
          *((_QWORD*)v12 + 3) = v52;
          *((_QWORD*)v15 - 2) = v268;
          *((_QWORD*)v15 - 1) = v302;
          *v37 = v234;
          if (*((_QWORD*)a2 - 4) >= *((_QWORD*)v15 - 1)) {
            goto LABEL_43;
          }
          v269 = *((_QWORD*)v15 - 2);
          v303 = *((_QWORD*)v15 - 1);
          v235 = *v37;
          v54 = *(_QWORD*)v10;
          v55 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v15 - 2) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v15 - 1) = v55;
          *v37 = v54;
          v38 = v235;
          v39 = v269;
          v40 = v303;
        }
        else {
          v38 = *((_QWORD*)v12 + 3);
          v39 = *((_QWORD*)v12 + 4);
          v40 = *((_QWORD*)v12 + 5);
          v41 = *(_QWORD*)v10;
          v42 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v12 + 5) = v42;
          *((_QWORD*)v12 + 3) = v41;
        }
        *((_QWORD*)a2 - 5) = v39;
        *((_QWORD*)a2 - 4) = v40;
        *(_QWORD*)v10 = v38;
      }
    LABEL_43:
      v56 = *((_QWORD*)v15 + 5);
      v57 = *((_QWORD*)a2 - 7);
      if (v56 >= *((_QWORD*)v12 + 8)) {
        if (v57 < v56) {
          v270 = *((_QWORD*)v15 + 4);
          v304 = *((_QWORD*)v15 + 5);
          v236 = *((_QWORD*)v15 + 3);
          v63 = *(_QWORD*)v11;
          v64 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v15 + 4) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v15 + 5) = v64;
          *((_QWORD*)v15 + 3) = v63;
          *((_QWORD*)a2 - 8) = v270;
          *((_QWORD*)a2 - 7) = v304;
          *(_QWORD*)v11 = v236;
          if (*((_QWORD*)v15 + 5) < *((_QWORD*)v12 + 8)) {
            v237 = *((_QWORD*)v12 + 6);
            v271 = *((_QWORD*)v12 + 7);
            v305 = *((_QWORD*)v12 + 8);
            v65 = *((_QWORD*)v15 + 3);
            v66 = *((_QWORD*)v15 + 5);
            *((_QWORD*)v12 + 7) = *((_QWORD*)v15 + 4);
            *((_QWORD*)v12 + 8) = v66;
            *((_QWORD*)v12 + 6) = v65;
            *((_QWORD*)v15 + 4) = v271;
            *((_QWORD*)v15 + 5) = v305;
            *((_QWORD*)v15 + 3) = v237;
          }
        }
      }
      else {
        if (v57 >= v56) {
          v238 = *((_QWORD*)v12 + 6);
          v272 = *((_QWORD*)v12 + 7);
          v306 = *((_QWORD*)v12 + 8);
          v67 = *((_QWORD*)v15 + 3);
          v68 = *((_QWORD*)v15 + 5);
          *((_QWORD*)v12 + 7) = *((_QWORD*)v15 + 4);
          *((_QWORD*)v12 + 8) = v68;
          *((_QWORD*)v12 + 6) = v67;
          *((_QWORD*)v15 + 4) = v272;
          *((_QWORD*)v15 + 5) = v306;
          *((_QWORD*)v15 + 3) = v238;
          if (*((_QWORD*)a2 - 7) >= *((_QWORD*)v15 + 5)) {
            goto LABEL_52;
          }
          v273 = *((_QWORD*)v15 + 4);
          v307 = *((_QWORD*)v15 + 5);
          v239 = *((_QWORD*)v15 + 3);
          v69 = *(_QWORD*)v11;
          v70 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v15 + 4) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v15 + 5) = v70;
          *((_QWORD*)v15 + 3) = v69;
          v58 = v239;
          v59 = v273;
          v60 = v307;
        }
        else {
          v58 = *((_QWORD*)v12 + 6);
          v59 = *((_QWORD*)v12 + 7);
          v60 = *((_QWORD*)v12 + 8);
          v61 = *(_QWORD*)v11;
          v62 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v12 + 7) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v12 + 8) = v62;
          *((_QWORD*)v12 + 6) = v61;
        }
        *((_QWORD*)a2 - 8) = v59;
        *((_QWORD*)a2 - 7) = v60;
        *(_QWORD*)v11 = v58;
      }
    LABEL_52:
      v71 = *((_QWORD*)v15 + 2);
      v72 = *((_QWORD*)v15 + 5);
      if (v71 >= *((_QWORD*)v15 - 1)) {
        if (v72 < v71) {
          v275 = *((_QWORD*)v15 + 1);
          v309 = *((_QWORD*)v15 + 2);
          v241 = *(_QWORD*)v15;
          v74 = *((_QWORD*)v15 + 5);
          *((_QWORD*)v15 + 1) = *((_QWORD*)v15 + 4);
          *((_QWORD*)v15 + 2) = v74;
          v75 = *((_QWORD*)v15 + 2);
          *(_QWORD*)v15 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 + 4) = v275;
          *((_QWORD*)v15 + 5) = v309;
          v76 = *((_QWORD*)v15 - 1);
          *((_QWORD*)v15 + 3) = v241;
          if (v75 < v76) {
            v276 = *((_QWORD*)v15 - 2);
            v310 = *((_QWORD*)v15 - 1);
            v242 = *v37;
            v77 = *((_QWORD*)v15 + 1);
            *v37 = *(_QWORD*)v15;
            *((_QWORD*)v15 - 2) = v77;
            *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 2);
            *((_QWORD*)v15 + 1) = v276;
            *((_QWORD*)v15 + 2) = v310;
            *(_QWORD*)v15 = v242;
          }
        }
      }
      else {
        if (v72 >= v71) {
          v277 = *((_QWORD*)v15 - 2);
          v311 = *((_QWORD*)v15 - 1);
          v243 = *v37;
          v78 = *((_QWORD*)v15 + 1);
          *v37 = *(_QWORD*)v15;
          *((_QWORD*)v15 - 2) = v78;
          *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 2);
          *((_QWORD*)v15 + 1) = v277;
          *((_QWORD*)v15 + 2) = v311;
          *(_QWORD*)v15 = v243;
          if (*((_QWORD*)v15 + 5) >= *((_QWORD*)v15 + 2)) {
            goto LABEL_61;
          }
          v274 = *((_QWORD*)v15 + 1);
          v308 = *((_QWORD*)v15 + 2);
          v240 = *(_QWORD*)v15;
          v79 = *((_QWORD*)v15 + 4);
          *(_QWORD*)v15 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 + 1) = v79;
          *((_QWORD*)v15 + 2) = *((_QWORD*)v15 + 5);
        }
        else {
          v274 = *((_QWORD*)v15 - 2);
          v308 = *((_QWORD*)v15 - 1);
          v240 = *v37;
          v73 = *((_QWORD*)v15 + 4);
          *v37 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 - 2) = v73;
          *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 5);
        }
        *((_QWORD*)v15 + 4) = v274;
        *((_QWORD*)v15 + 5) = v308;
        *((_QWORD*)v15 + 3) = v240;
      }
    LABEL_61:
      v278 = *((_QWORD*)v12 + 1);
      v312 = *((_QWORD*)v12 + 2);
      v244 = *(_QWORD*)v12;
      v80 = *(_QWORD*)v15;
      v81 = *((_QWORD*)v15 + 2);
      *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
      *((_QWORD*)v12 + 2) = v81;
      *(_QWORD*)v12 = v80;
      *((_QWORD*)v15 + 1) = v278;
      *((_QWORD*)v15 + 2) = v312;
      *(_QWORD*)v15 = v244;
      --a4;
      if ((a5 & 1) == 0) {
        goto LABEL_62;
      }
    LABEL_39:
      v51 = *((_QWORD*)v12 + 2);
    LABEL_63:
      v82 = 0;
      v220 = *(_QWORD*)v12;
      v222 = *((_QWORD*)v12 + 1);
      do {
        v83 = &v12[v82];
        v82 += 24;
      } while (*((_QWORD*)v83 + 5) < v51);
      v84 = &v12[v82];
      v85 = a2;
      if (v82 == 24) {
        v88 = a2;
        while (v84 < v88) {
          v89 = *((_QWORD*)v88 - 1);
          v87 = v88 - 24;
          v88 -= 24;
          if (v89 < v51) {
            goto LABEL_71;
          }
        }
        v87 = v88;
        v12 = v84;
      }
      else {
        do {
          v86 = *((_QWORD*)v85 - 1);
          v87 = v85 - 24;
          v85 -= 24;
        } while (v86 >= v51);
      LABEL_71:
        v12 = v84;
        if (v84 < v87) {
          v90 = v87;
          do {
            v279 = *((_QWORD*)v12 + 1);
            v313 = *((_QWORD*)v12 + 2);
            v245 = *(_QWORD*)v12;
            v91 = *(_QWORD*)v90;
            v92 = *((_QWORD*)v90 + 2);
            *((_QWORD*)v12 + 1) = *((_QWORD*)v90 + 1);
            *((_QWORD*)v12 + 2) = v92;
            *(_QWORD*)v12 = v91;
            *((_QWORD*)v90 + 1) = v279;
            *((_QWORD*)v90 + 2) = v313;
            *(_QWORD*)v90 = v245;
            do {
              v93 = *((_QWORD*)v12 + 5);
              v12 += 24;
            } while (v93 < v51);
            do {
              v94 = *((_QWORD*)v90 - 1);
              v90 -= 24;
            } while (v94 >= v51);
          } while (v12 < v90);
        }
      }
      v95 = v12 - 24;
      if (v8 != v12 - 24) {
        v96 = *(_QWORD*)v95;
        v97 = *((_QWORD*)v12 - 1);
        *((_QWORD*)v8 + 1) = *((_QWORD*)v12 - 2);
        *((_QWORD*)v8 + 2) = v97;
        *(_QWORD*)v8 = v96;
      }
      *((_QWORD*)v12 - 1) = v51;
      *(_QWORD*)v95 = v220;
      *((_QWORD*)v12 - 2) = v222;
      if (v84 < v87) {
        goto LABEL_82;
      }
      v98 = SdkRoutine_480920(v8, v12 - 24, a3);
      result = SdkRoutine_480920(v12, a2, a3);
      if ((result & 1) != 0) {
        a2 = v12 - 24;
        if ((v98 & 1) == 0) {
          goto LABEL_2;
        }
        return result;
      }
      if ((v98 & 1) == 0) {
      LABEL_82:
        result = SdkHr_47f8a0(v8, v12 - 24, a3, a4, a5 & 1);
        a5 = 0;
      }
    }
  }
  if (v14 != 3) {
    if (v14 == 4) {
      v122 = *((_QWORD*)v12 + 5);
      v123 = *((_QWORD*)v12 + 8);
      if (v122 >= *((_QWORD*)v12 + 2)) {
        if (v123 < v122) {
          v140 = *((_QWORD*)v12 + 8);
          v142 = *((_QWORD*)v12 + 4);
          v141 = *((_QWORD*)v12 + 5);
          *((_QWORD*)v12 + 4) = *((_QWORD*)v12 + 7);
          *((_QWORD*)v12 + 5) = v140;
          v144 = *((_QWORD*)v12 + 2);
          v143 = *((_QWORD*)v12 + 3);
          *((_QWORD*)v12 + 8) = v141;
          v146 = *((_QWORD*)v12 + 5);
          v145 = *((_QWORD*)v12 + 6);
          *((_QWORD*)v12 + 6) = v143;
          *((_QWORD*)v12 + 7) = v142;
          *((_QWORD*)v12 + 3) = v145;
          if (v146 < v144) {
            v286 = *((_QWORD*)v12 + 1);
            v319 = *((_QWORD*)v12 + 2);
            v252 = *(_QWORD*)v12;
            v147 = *((_QWORD*)v12 + 4);
            v148 = *((_QWORD*)v12 + 5);
            *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
            *((_QWORD*)v12 + 1) = v147;
            *((_QWORD*)v12 + 2) = v148;
            *((_QWORD*)v12 + 3) = v252;
            *((_QWORD*)v12 + 4) = v286;
            *((_QWORD*)v12 + 5) = v319;
          }
        }
      }
      else if (v123 >= v122) {
        v289 = *((_QWORD*)v12 + 1);
        v321 = *((_QWORD*)v12 + 2);
        v255 = *(_QWORD*)v12;
        v160 = *((_QWORD*)v12 + 4);
        v161 = *((_QWORD*)v12 + 5);
        *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
        *((_QWORD*)v12 + 1) = v160;
        *((_QWORD*)v12 + 2) = v161;
        *((_QWORD*)v12 + 3) = v255;
        *((_QWORD*)v12 + 4) = v289;
        *((_QWORD*)v12 + 5) = v321;
        if (v123 < *((_QWORD*)v12 + 5)) {
          v163 = *((_QWORD*)v12 + 3);
          v162 = *((_QWORD*)v12 + 4);
          v164 = *((_QWORD*)v12 + 5);
          v165 = *((_QWORD*)v12 + 7);
          v166 = *((_QWORD*)v12 + 8);
          *((_QWORD*)v12 + 3) = *((_QWORD*)v12 + 6);
          *((_QWORD*)v12 + 4) = v165;
          *((_QWORD*)v12 + 5) = v166;
          *((_QWORD*)v12 + 6) = v163;
          *((_QWORD*)v12 + 7) = v162;
          *((_QWORD*)v12 + 8) = v164;
        }
      }
      else {
        v283 = *((_QWORD*)v12 + 1);
        v317 = *((_QWORD*)v12 + 2);
        v249 = *(_QWORD*)v12;
        v124 = *((_QWORD*)v12 + 7);
        *(_QWORD*)v12 = *((_QWORD*)v12 + 6);
        *((_QWORD*)v12 + 1) = v124;
        *((_QWORD*)v12 + 2) = *((_QWORD*)v12 + 8);
        *((_QWORD*)v12 + 6) = v249;
        *((_QWORD*)v12 + 7) = v283;
        *((_QWORD*)v12 + 8) = v317;
      }
      if (*((_QWORD*)a2 - 1) >= *((_QWORD*)v12 + 8)) {
        return result;
      }
      v256 = *((_QWORD*)v12 + 6);
      v290 = *((_QWORD*)v12 + 7);
      v322 = *((_QWORD*)v12 + 8);
      v167 = *(_QWORD*)v9;
      v168 = *((_QWORD*)a2 - 1);
      *((_QWORD*)v12 + 7) = *((_QWORD*)a2 - 2);
      *((_QWORD*)v12 + 8) = v168;
      *((_QWORD*)v12 + 6) = v167;
      *((_QWORD*)a2 - 2) = v290;
      *((_QWORD*)a2 - 1) = v322;
      *(_QWORD*)v9 = v256;
      if (*((_QWORD*)v12 + 8) >= *((_QWORD*)v12 + 5)) {
        return result;
      }
      v169 = *((_QWORD*)v12 + 8);
      v171 = *((_QWORD*)v12 + 4);
      v170 = *((_QWORD*)v12 + 5);
      *((_QWORD*)v12 + 4) = *((_QWORD*)v12 + 7);
      *((_QWORD*)v12 + 5) = v169;
      v173 = *((_QWORD*)v12 + 2);
      v172 = *((_QWORD*)v12 + 3);
      *((_QWORD*)v12 + 8) = v170;
      v175 = *((_QWORD*)v12 + 5);
      v174 = *((_QWORD*)v12 + 6);
      *((_QWORD*)v12 + 6) = v172;
      *((_QWORD*)v12 + 7) = v171;
      *((_QWORD*)v12 + 3) = v174;
      if (v175 >= v173) {
        return result;
      }
    LABEL_153:
      v291 = *((_QWORD*)v12 + 1);
      v323 = *((_QWORD*)v12 + 2);
      v257 = *(_QWORD*)v12;
      v176 = *((_QWORD*)v12 + 4);
      v177 = *((_QWORD*)v12 + 5);
      *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
      *((_QWORD*)v12 + 1) = v176;
      *((_QWORD*)v12 + 2) = v177;
      *((_QWORD*)v12 + 3) = v257;
      *((_QWORD*)v12 + 4) = v291;
      *((_QWORD*)v12 + 5) = v323;
      return result;
    }
    if (v14 == 5) {
      return SdkRoutine_4806d0(v12, v12 + 24, v12 + 48, v12 + 72, a2 - 24, a3);
    }
    goto LABEL_10;
  }
  v115 = *((_QWORD*)v12 + 5);
  v116 = *((_QWORD*)a2 - 1);
  if (v115 >= *((_QWORD*)v12 + 2)) {
    if (v116 >= v115) {
      return result;
    }
    v251 = *((_QWORD*)v12 + 3);
    v285 = *((_QWORD*)v12 + 4);
    v318 = *((_QWORD*)v12 + 5);
    v138 = *(_QWORD*)v9;
    v139 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 5) = v139;
    *((_QWORD*)v12 + 3) = v138;
    *((_QWORD*)a2 - 2) = v285;
    *((_QWORD*)a2 - 1) = v318;
    *(_QWORD*)v9 = v251;
    if (*((_QWORD*)v12 + 5) >= *((_QWORD*)v12 + 2)) {
      return result;
    }
    goto LABEL_153;
  }
  if (v116 >= v115) {
    v288 = *((_QWORD*)v12 + 1);
    v320 = *((_QWORD*)v12 + 2);
    v254 = *(_QWORD*)v12;
    v156 = *((_QWORD*)v12 + 4);
    v157 = *((_QWORD*)v12 + 5);
    *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
    *((_QWORD*)v12 + 1) = v156;
    *((_QWORD*)v12 + 2) = v157;
    *((_QWORD*)v12 + 3) = v254;
    *((_QWORD*)v12 + 4) = v288;
    *((_QWORD*)v12 + 5) = v320;
    if (*((_QWORD*)a2 - 1) >= *((_QWORD*)v12 + 5)) {
      return result;
    }
    v119 = *((_QWORD*)v12 + 3);
    v120 = *((_QWORD*)v12 + 4);
    v121 = *((_QWORD*)v12 + 5);
    v158 = *(_QWORD*)v9;
    v159 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 5) = v159;
    *((_QWORD*)v12 + 3) = v158;
  }
  else {
    v282 = *((_QWORD*)v12 + 1);
    v316 = *((_QWORD*)v12 + 2);
    v248 = *(_QWORD*)v12;
    v117 = *(_QWORD*)v9;
    v118 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 2) = v118;
    *(_QWORD*)v12 = v117;
    v119 = v248;
    v120 = v282;
    v121 = v316;
  }
  *((_QWORD*)a2 - 2) = v120;
  *((_QWORD*)a2 - 1) = v121;
  *(_QWORD*)v9 = v119;
  return result;
}

__int64 SdkHr_6020e0(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;

  v2 = a1 + 71136LL * *(unsigned int*)(a1 + 142288);
  v3 = *(_DWORD*)(v2 + 304);
  if (v3 >> 15 != 0) {
    return 17;
  }
  *(_DWORD*)(*(_QWORD*)(v2 + 32) + (v3 & 0xFFFFFFFC)) = a2;
  *(_DWORD*)(v2 + 304) += 4;
  return 0;
}

void* SdkHr_616e00(int a1)
{
  if (a1 == 5) {
    return &SdkData_e71f78;
  }
  else {
    return nullptr;
  }
}

char* SdkHr_6297f0() { return &SdkData_ea44f8; }

__int64 SdkHr_65d550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v16;
  bool v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  char v21;
  int v22;
  int v24;
  char v25;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v37;
  __int64 v38;
  int v40;
  int v41;
  __int64 v42;
  __int128 v43;
  _QWORD* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  bool v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  char v77;
  __int64 v78;
  __int16 v79;
  __int64 v80;
  __int16 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _BYTE v86[20];
  __int128 v87;
  _BYTE v88[44];
  _DWORD v89[7];
  __int64 v90;
  __int64 v91;

  if (*(_DWORD*)a1 == 1) {
    return SdkRoutine_66dbf0();
  }
  if ((*(_BYTE*)(a2 + 7) & 0x20) == 0) {
    v90 = v8;
    v91 = v9;
    v12 = *(_QWORD*)(a1 + 8);
    v13 = *(_QWORD*)(a2 + 16);
    if (*(_QWORD*)(*(_QWORD*)(v12 + 7568) + 16LL) != 0) {
      v14 = a2 + 40;
    }
    else {
      v14 = 0;
    }
    if (*(_DWORD*)(a2 + 32) != 0 && v13 == 0) {
      if (*(_QWORD*)(a2 + 24) == 0) {
        *(_QWORD*)(a1 + 56) = 0;
        v28 = *(_DWORD*)(a2 + 32);
        v87 = 0u;
        memset(v88, 0, 24);
        *(_OWORD*)&v86[4] = 0u;
        v29 = SdkRoutine_876210(v28, 0, &v86[4], 56);
        v30 = a1;
        if (v29 == 0) {
          *(_QWORD*)(a1 + 56) = *(_QWORD*)&v86[12];
        }
        v31 = *(unsigned int*)(a2 + 32);
        v32 = 0;
        goto LABEL_37;
      }
      v16 = (_QWORD*)(a2 + 16);
      if ((*(_BYTE*)(a1 + 17) & 8) == 0) {
        goto LABEL_35;
      }
    }
    else {
      v16 = (_QWORD*)(a2 + 16);
      v17 = v13 != 0 && (*(_QWORD*)(a2 + 16) & 0xFFFLL) == 0;
      if (!v17 && (*(_BYTE*)(a1 + 17) & 8) == 0) {
        goto LABEL_35;
      }
    }
    v20 = *(_QWORD*)(a1 + 56);
    v21 = 0;
    if (v20 == 0 || (v20 & 0xFFF) != 0) {
      return v21 & 1;
    }
    v22 = *(_DWORD*)(a1 + 16);
    if ((v22 & 0x100) != 0 && v20 % *(unsigned int*)(v12 + 216) != 0) {
      goto LABEL_35;
    }
    *(_OWORD*)&v86[4] = 0u;
    *(_QWORD*)((char*)&v87 + 4) = 0;
    if ((v22 & 2) != 0) {
      v24 = 2;
    }
    else {
      v24 = 1;
    }
    HIDWORD(v87) = 0;
    v88[0] = 0;
    *(_QWORD*)&v88[16] = 0;
    *(_WORD*)&v88[24] = 0;
    *(_QWORD*)&v88[4] = 0;
    *(_WORD*)&v88[12] = 0;
    LODWORD(v87) = 2;
    *(_QWORD*)&v88[28] = SdkRoutine_86acf0(a1, a2, a3, a4, a5, a6, a7, a8);
    *(_QWORD*)&v88[36] = 0;
    v25 = *(_BYTE*)(a1 + 17);
    *(_OWORD*)v89 = 0u;
    *(_QWORD*)&v89[4] = 0xFFFFFFFF00000003LL;
    if ((v25 & 8) == 0) {
      *(_QWORD*)&v88[36] = *v16;
    LABEL_34:
      *(_DWORD*)&v86[16] = 0x20000;
      LODWORD(v87) = v24;
      *(_QWORD*)((char*)&v87 + 4) = *(_QWORD*)(a1 + 56);
      HIDWORD(v87) = 6656;
      if ((unsigned int)SdkRoutine_86ad00(
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 2544LL), &v86[4], a1 + 88) != 0) {
        goto LABEL_35;
      }
      v31 = *(unsigned int*)(a1 + 88);
      v32 = 1;
      v30 = a1;
      *(_QWORD*)(a1 + 48) = *v16;
    LABEL_37:
      v21 = SdkRoutine_66d8e0(v30, v31, v32, v14);
      return v21 & 1;
    }
    if (*v16 == 0) {
      *(_QWORD*)&v86[4] = &SdkData_c7e100;
      *(_DWORD*)&v86[12] = 1;
      goto LABEL_34;
    }
  LABEL_35:
    v21 = 0;
    return v21 & 1;
  }
  v18 = *(_DWORD*)(a2 + 40);
  v19 = *(_QWORD*)(a2 + 48);
  v33 = *(_DWORD*)(a1 + 16);
  if ((v33 & 0xB00) != 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 16) == 0 || (*(_QWORD*)(a2 + 16) & 0xFFFLL) != 0) {
    return 0;
  }
  *(_QWORD*)&v89[1] = v10;
  *(_QWORD*)&v89[3] = v8;
  *(_QWORD*)&v89[5] = v9;
  if (*(_QWORD*)(a1 + 56) == 0 || (*(_QWORD*)(a1 + 56) & 0xFFFLL) != 0) {
    return 0;
  }
  v37 = v18;
  v38 = v19;
  v72 = 0;
  v71 = 0;
  if ((v33 & 2) != 0) {
    v40 = 2;
  }
  else {
    v40 = 1;
  }
  v77 = 0;
  v80 = 0;
  v81 = 0;
  v78 = 0;
  v79 = 0;
  v82 = ((__int64 (*)(void))SdkRoutine_86acf0)();
  v85 = 0;
  v84 = 0;
  v73 = 0x20000;
  v74 = v40;
  v75 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)v86 = 0xFFFFFFFF00000003LL;
  v76 = 6656;
  v83 = *(_QWORD*)(a2 + 16);
  v41 =
      SdkRoutine_86ad00(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 2544LL), &v71, a1 + 88);
  result = 0;
  if (v41 == 0) {
    *(_BYTE*)(a1 + 120) = 1;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 16);
    if (v37 >= 1) {
      v42 = (unsigned int)v37;
      v43 = 0u;
      v44 = (_QWORD*)(v38 + 8);
      do {
        v45 = *((_DWORD*)v44 - 2);
        switch (v45) {
        case 5:
          v62 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v63 = *(_QWORD*)(v62 + 2528);
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v63, v88, &v70) != 0) {
            return 0;
          }
          v64 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v65 = *(_DWORD*)(v64 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v66 = *(_QWORD*)(v64 + 7568);
          v67 = *v44;
          v68 = v44[1];
          v69 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v65;
          v88[26] = 1;
          v88[20] = v69;
          result = SdkRoutine_65dfe0(v66, v67, v68);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 104,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 32) = *v44;
          break;
        case 2:
          v54 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v55 = *(_QWORD*)(v54 + 2528);
          v88[4] = 1;
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v55, v88, &v70) != 0) {
            return 0;
          }
          v56 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v57 = *(_DWORD*)(v56 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v58 = *(_QWORD*)(v56 + 7568);
          v59 = *v44;
          v60 = v44[1];
          v61 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v57;
          v88[20] = v61;
          v88[26] = *(_BYTE*)(v56 + 10) & 1;
          result = SdkRoutine_65dfe0(v58, v59, v60);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 112,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 40) = *v44;
          break;
        case 1:
          v46 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v47 = *(_QWORD*)(v46 + 2528);
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v47, v88, &v70) != 0) {
            return 0;
          }
          v48 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v49 = *(_DWORD*)(v48 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v50 = *(_QWORD*)(v48 + 7568);
          v51 = *v44;
          v52 = v44[1];
          v53 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v49;
          v88[20] = v53;
          result = SdkRoutine_65dfe0(v50, v51, v52);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 96,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 24) = *v44;
          break;
        default:
          return 0;
        }
        v43 = 0u;
        v44 += 3;
        --v42;
      } while (v42 != 0);
    }
    *(_DWORD*)(a1 + 16) |= 0x20000000u;
    return 1;
  }
  return result;
}

__int64 SdkHr_65d580(__int64 a1, __int64 a2)
{
  if (*(_DWORD*)a1 == 1) {
    return *(_QWORD*)(a1 + 24) + ((__int64)(*(_QWORD*)(a2 + 24) << 16) >> 16);
  }
  else {
    return SdkRoutine_66d050();
  }
}

__int64 SdkHr_66ea90(__int64 result, int a2, __int64 a3)
{
  _BYTE* v3;
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 v13;

  if (a2 != 0) {
    v3 = (_BYTE*)(a3 + 20);
    v4 = *(_QWORD*)(result + 40);
    v5 = a2;
    v6 = result;
    v7 = (unsigned int*)(*(_QWORD*)(result + 192) +
                         8LL * *(unsigned int*)(result + 184));
    if (v4 >= *(_QWORD*)(result + 224) - 2LL) {
      v4 = *(_QWORD*)(result + 224) - 2LL;
    }
    if (*(_BYTE*)(result + 129) != 0) {
      v8 = (unsigned int)v4 >> 3;
    }
    else {
      v8 = v4;
    }
    v9 = v8 - 6;
    do {
      v10 =
          (unsigned __int8)*(v3 - 16) | ((*((_DWORD*)v3 - 1) & 0x1FFFFF) << 10);
      if ((*v3 & 4) != 0) {
        v11 = -2147483136;
      }
      else {
        v11 = 512;
      }
      *v7 = *((_DWORD*)v3 - 5) & 0xFFFFFFFC;
      v7[1] = v10 | v11;
      v7 += 2;
      v12 = *(_DWORD*)(v6 + 184) + 1;
      *(_DWORD*)(v6 + 184) = v12;
      if ((*v3 & 2) != 0 && v12 >= v9) {
        v13 = *(_QWORD*)(v6 + 208);
        if (*(_DWORD*)(v13 + 11348) != 0) {
          *(_BYTE*)(v13 + 11448) = 1;
          result = SdkRoutine_664890(*(_QWORD*)(v6 + 208));
        }
        else {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
        }
        v7 = (unsigned int*)(*(_QWORD*)(v6 + 192) +
                             8LL * *(unsigned int*)(v6 + 184));
      }
      v3 += 24;
      --v5;
    } while (v5 != 0);
  }
  return result;
}

#pragma GCC visibility pop
