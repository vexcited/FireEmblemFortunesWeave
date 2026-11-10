#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsbrEnc_AddLeft_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsbrEnc_AddRight_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsbrEnc_AddVecLeft_plt(_QWORD, _QWORD);
__int64 nn_codec_calcCtrlSignal(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_specialCase(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD);
extern _UNKNOWN SdkData_c35f10;
extern _UNKNOWN SdkData_c35fb0;
extern _UNKNOWN SdkData_c35fd4;
extern _UNKNOWN SdkData_c3613c;
extern _UNKNOWN SdkData_c3617c;
extern _UNKNOWN* SdkData_e62f98;
extern _UNKNOWN* SdkData_e62ff0;
extern _UNKNOWN* SdkData_e63048;
void __attribute__((noreturn)) SdkRoutine_0(_QWORD, _QWORD, _QWORD);
int* nn_codec_FDKsbrEnc_frameInfoGenerator(int* a1, unsigned __int8* a2,
                                           unsigned __int8* a3, int a4,
                                           _DWORD* a5);

int* nn_codec_FDKsbrEnc_frameInfoGenerator(int* a1, unsigned __int8* a2,
                                           unsigned __int8* a3, int a4,
                                           _DWORD* a5)
{
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int* result;
  _DWORD* v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int* v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  _UNKNOWN** v34;
  int* v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int* v40;
  int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  unsigned __int64 v55;
  int v56;
  unsigned __int64 v57;
  int v58;
  int v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  int* v69;
  int v70;
  int v71;
  __int64 v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  _DWORD* v77;
  int v78;
  char* v79;
  unsigned int v80;
  _DWORD* v81;
  int v82;
  __int64 v83;
  __int64 v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int* v95;
  int* v96;
  int v97;
  int v98;
  int* v99;
  __int64 v100;
  __int64 v101;
  int* v102;
  unsigned int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  _DWORD* v107;
  __int64 v108;
  __int64 v109;
  int v110;
  int* v111;
  __int64 v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  signed int v118;
  int v119;
  int v120;
  unsigned int v121;
  int v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  _DWORD* v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int* v141;
  int v142;
  int v143;
  __int64 v144;
  __int64 v145;
  _DWORD* v146;
  __int64 v147;
  int v148;
  int* v149;
  int* v150;
  int* v151;
  int* v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int* v161;
  int* v162;
  int v163;
  unsigned int v164;
  int v165;
  __int64 v166;
  __int64 v167;
  int* v168;
  int* v169;
  int v170;
  int* v171;
  int* v172;
  int v173;
  int v174;
  bool v175;
  __int64 v176;
  int v177;
  __int64 v178;
  int* v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  char* v186;
  __int64 v187;
  int v188;
  int* v189;
  unsigned int v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  _DWORD* v194;
  _DWORD* v195;
  int v196;
  int* v197;
  unsigned int* v198;
  int v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  _DWORD* v204;
  __int64 v205;
  int* v206;
  int* v207;
  int v208;
  int v209;
  __int64 v210;
  int v211;
  int v212;
  __int64 v213;
  __int64 v214;
  int* v215;
  __int64 v216;
  int* v217;
  _DWORD* v218;
  __int64 v219;
  __int64 v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int* v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  __int64 v243;
  int v244;
  _DWORD* v245;
  __int64 v246;
  int v247;
  int v248;
  int v249;
  int* v250;
  int v251;
  int v252;
  int v253;
  unsigned int v254;
  int v255;
  int v256;
  _DWORD* v257;
  unsigned int v258;
  int v259;
  unsigned int v260;
  unsigned int v261;
  int v262;
  int* v263;
  int* v264;
  int v265;
  _DWORD* v266;
  __int64 v267;
  _DWORD* v268;
  _DWORD* v269;
  __int64 v270;
  int v271;
  int v272;
  int v273;
  signed int v274;
  int v275;
  int v276;
  unsigned int v277;
  int v278;
  _DWORD* v279;
  __int64 v280;
  _DWORD* v281;
  __int64 v282;
  int v283;
  int v284;
  unsigned int v285;
  int v286;
  unsigned int v287;
  int v288;
  int v289;
  signed int v290;
  unsigned int v291;
  unsigned int v292;
  unsigned int v293;
  unsigned int v294;
  __int64 v295;
  int* v296;
  __int64 v297;
  __int64 v298;
  int v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  _DWORD* v304;
  __int64 v305;
  int* v306;
  int* v307;
  int v308;
  int v309;
  __int64 v310;
  int v311;
  int v312;
  int v313;
  int v314;
  unsigned int v315;
  signed int v316;
  int v317;
  int v318;
  int v319;
  int* v320;
  _DWORD* v321;
  int v322;
  int v323;

  v6 = a1[11];
  v5 = a1[12];
  v8 = a1[1];
  v7 = a1[2];
  v11 = a1[10];
  v12 = a1[53];
  v13 = a1[54];
  v14 = *a1;
  v15 = *a2;
  v16 = a2[1];
  v322 = 0;
  *((_QWORD*)a1 + 3) = a5;
  if (a4 != 0 && v16 == 0) {
    v16 = a3[1];
    if (a3[1] != 0) {
      v16 = v13 - *a3 < 4;
      if (v13 - *a3 < 4) {
        v15 = 0;
      }
    }
  }
  if (v8 != 0) {
    a1[13] = 0;
    a1[56] = v7;
  LABEL_8:
    a1[55] = 0;
    goto LABEL_9;
  }
  v35 = a1 + 15;
  v36 = 0;
  v315 = v5;
  v317 = v11;
  v320 = a1 + 53;
  v321 = a1 + 27;
  v37 = a1[13];
  if (v37 <= 1) {
    if (v37 != 0) {
      if (v37 != 1) {
        goto LABEL_45;
      }
      goto LABEL_41;
    }
  LABEL_43:
    if (v16 != 0) {
      v36 = 1;
      goto LABEL_45;
    }
    v36 = 0;
  LABEL_147:
    v56 = 0;
    v53 = 0;
    v68 = 0;
    v316 = 0;
    a1[13] = v36;
    if (v36 > 1) {
      goto LABEL_91;
    }
  LABEL_148:
    if (v36 == 0) {
      if (v15 != 0) {
        v113 = 2;
      }
      else {
        v113 = 1;
      }
      a1[56] = v113;
      goto LABEL_8;
    }
    v114 = v56 - v12;
    v313 = v12;
    v115 = v6;
    if (v56 - v12 > v6) {
      v116 = 0;
      do {
        v117 = v116 + 2;
        ++v116;
        v118 = (v114 / v117) & 0xFFFFFFFE;
        if (v118 >= 8) {
          v119 = 8;
        }
        else {
          v119 = v118;
        }
      } while (v114 - v119 * v116 > v6);
      if (v118 >= 8) {
        v120 = 8;
      }
      else {
        v120 = v118;
      }
      v121 = v56 - v120;
      do {
        nn_codec_FDKsbrEnc_AddLeft_plt(a1 + 15, a1 + 26, v121);
        nn_codec_FDKsbrEnc_AddLeft_plt(v321, a1 + 38, 1);
        v121 -= v120;
        --v116;
      } while (v116 != 0);
    }
    v122 = v313 - v53 + 2 * v13;
    v123 = 1;
    v322 = 1;
    if (v122 < 1) {
      --a1[26];
      --a1[38];
    }
    else if (v122 > v115) {
      do {
        v124 = v123++;
        v125 = v122 / v123;
        v126 = (v122 / v123) & 0x7FFFFFFE;
        if (v68 < v126) {
          v126 = v68;
        }
      } while ((int)(v122 - v126 * v124) > v115);
      v127 = v125 & 0xFFFFFFFE;
      v322 = v123;
      if (v68 >= (v125 & 0xFFFFFFFE)) {
        v128 = v125 & 0xFFFFFFFE;
      }
      else {
        v128 = v68;
      }
      v129 = v53 + v128;
      v130 = v123 - 1;
      do {
        if (v68 >= v127) {
          v131 = v127;
        }
        else {
          v131 = v68;
        }
        nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v129);
        nn_codec_FDKsbrEnc_AddRight_plt(v321, a1 + 38, 1);
        v129 += v131;
        --v130;
      } while (v130 != 0);
    LABEL_234:
      v178 = (unsigned int)a1[26];
      if ((int)v178 < 1) {
        v179 = v320;
        LODWORD(v180) = 0;
        LODWORD(v181) = 0;
      }
      else {
        v179 = v320;
        v180 = 0;
        while (v35[v180] < v13 + v313) {
          if (v178 == ++v180) {
            LODWORD(v180) = 0;
            break;
          }
        }
        v181 = 0;
        while (v35[v181] < v316) {
          if (v178 == ++v181) {
            LODWORD(v181) = -99;
            break;
          }
        }
      }
      v182 = v322;
      a1[44] = 0;
      a1[52] = 0;
      if ((int)v178 > (int)v180) {
        v183 = (int)v180;
        v184 = ((int)v178 - (int)v180) & 3LL;
        if ((unsigned int)(v178 - v180 - 1) >= 3) {
          v203 = 0;
          v204 = a1;
          v205 = 4LL * (int)v180 + 60;
          do {
            v203 -= 4;
            v204[39] = *(_DWORD*)((char*)v204 + v205) - v13;
            v204[47] = *(_DWORD*)((char*)v204 + v205 + 48);
            ++a1[44];
            ++a1[52];
            v204[40] = *(_DWORD*)((char*)v204 + v205 + 4) - v13;
            v204[48] = *(_DWORD*)((char*)v204 + v205 + 52);
            ++a1[44];
            ++a1[52];
            v204[41] = *(_DWORD*)((char*)v204 + v205 + 8) - v13;
            v204[49] = *(_DWORD*)((char*)v204 + v205 + 56);
            ++a1[44];
            ++a1[52];
            v204[42] = *(_DWORD*)((char*)v204 + v205 + 12) - v13;
            v204[50] = *(_DWORD*)((char*)v204 + v205 + 60);
            v204 += 4;
            ++a1[44];
            ++a1[52];
          } while (-(__int64)(((_DWORD)v178 - (_DWORD)v180) & 0xFFFFFFFC) !=
                   v203);
          v183 = (int)v180 - v203;
          v185 = -v203;
        }
        else {
          v185 = 0;
        }
        if (v184 != 0) {
          v206 = &a1[v183 + 15];
          v207 = &a1[v185 + 47];
          do {
            --v184;
            *(v207 - 8) = *v206 - v13;
            v208 = v206[12];
            ++v206;
            *v207++ = v208;
            ++a1[44];
            ++a1[52];
          } while (v184 != 0);
        }
      }
      v209 = v181 - v180;
      v210 = (unsigned int)a1[38];
      v211 = v178 - (v180 + v182);
      if ((_DWORD)v181 == -99) {
        v209 = -99;
      }
      a1[45] = v209;
      a1[46] = v211 + 1;
      nn_codec_calcCtrlSignal(v179, 1, a1 + 15, v178, v321, v210);
    LABEL_9:
      v18 = a1[54];
      v17 = a1[55];
      v19 = a1[53];
      result = a1 + 82;
      v21 = a1 + 63;
      if ((unsigned int)(v17 - 1) < 2) {
        v23 = a1[57];
        v22 = a1[58];
        v24 = v22 + 1;
        if (v22 != 0) {
          v25 = 2;
        }
        else {
          v25 = 1;
        }
        a1[82] = v24;
        a1[95] = v25;
      LABEL_14:
        if (v17 != 2) {
          if (v17 != 1) {
            return result;
          }
          v26 = a1 + 83;
          v27 = v24;
          v28 = v24 - 1;
          a1[83] = v19;
          a1[v24 + 83] = v23;
          if (v24 > 1) {
            v29 = v28 & 7;
            if ((unsigned int)(v24 - 2) >= 7) {
              v30 = 0;
              v151 = a1 + 67;
              v152 = &a1[v24 + 82];
              do {
                v30 += 8;
                v153 = v23 - *(v151 - 7);
                *v152 = v153;
                v154 = v153 - *(v151 - 6);
                *(v152 - 1) = v154;
                v155 = v154 - *(v151 - 5);
                *(v152 - 2) = v155;
                v156 = v155 - *(v151 - 4);
                *(v152 - 3) = v156;
                v157 = v156 - *(v151 - 3);
                *(v152 - 4) = v157;
                v158 = v157 - *(v151 - 2);
                *(v152 - 5) = v158;
                v159 = v158 - *(v151 - 1);
                *(v152 - 6) = v159;
                v160 = *v151;
                v151 += 8;
                v23 = v159 - v160;
                *(v152 - 7) = v23;
                v152 -= 8;
              } while ((v28 & 0x7FFFFFF8) != v30);
              v31 = v24 - v30;
            }
            else {
              v30 = 0;
              v31 = v24;
            }
            if ((v28 & 7) != 0) {
              v161 = &a1[v30 + 60];
              v162 = &a1[v31 + 82];
              do {
                v163 = *v161++;
                --v29;
                v23 -= v163;
                *v162-- = v23;
              } while (v29 != 0);
            }
          }
          v164 = a1[59];
          if (v164 != 0) {
            v165 = v24 - v164 + 1;
          }
          else {
            v165 = 0;
          }
          a1[94] = v165;
          if (v24 >= 1) {
            v166 = v24 & 7;
            if ((unsigned int)v24 < 8) {
              v167 = 0;
              if ((v24 & 7) == 0) {
                goto LABEL_216;
              }
              goto LABEL_214;
            }
            v168 = a1 + 70;
            v167 = 0;
            v169 = &a1[v24 + 88];
            do {
              v167 += 8;
              *v169 = *(v168 - 7);
              *(v169 - 1) = *(v168 - 6);
              *(v169 - 2) = *(v168 - 5);
              *(v169 - 3) = *(v168 - 4);
              *(v169 - 4) = *(v168 - 3);
              *(v169 - 5) = *(v168 - 2);
              *(v169 - 6) = *(v168 - 1);
              v170 = *v168;
              v168 += 8;
              *(v169 - 7) = v170;
              v169 -= 8;
            } while ((v24 & 0x7FFFFFF8) != v167);
            v27 = v24 - v167;
            if ((v24 & 7) != 0) {
            LABEL_214:
              v171 = &a1[v167 + 63];
              v172 = &a1[v27 + 88];
              do {
                v173 = *v171++;
                --v166;
                *v172-- = v173;
              } while (v166 != 0);
            }
          }
        LABEL_216:
          if (v164 <= 1) {
            goto LABEL_217;
          }
          goto LABEL_218;
        }
        v26 = a1 + 83;
        v28 = v24 - 1;
        a1[83] = v23;
        if (v24 > 1) {
          v46 = v28 & 7;
          if ((unsigned int)(v24 - 2) >= 7) {
            v132 = a1 + 91;
            v133 = 0;
            do {
              v133 -= 8;
              v134 = *(v132 - 31) + v23;
              v135 = *(v132 - 30) + v134;
              *(v132 - 7) = v134;
              *(v132 - 6) = v135;
              v136 = *(v132 - 29) + v135;
              v137 = *(v132 - 28) + v136;
              *(v132 - 5) = v136;
              *(v132 - 4) = v137;
              v138 = *(v132 - 27) + v137;
              v139 = *(v132 - 26) + v138;
              *(v132 - 3) = v138;
              *(v132 - 2) = v139;
              v140 = *(v132 - 25) + v139;
              v23 = *(v132 - 24) + v140;
              *(v132 - 1) = v140;
              *v132 = v23;
              v132 += 8;
            } while (-(__int64)(v28 & 0x7FFFFFF8) != v133);
            v47 = -v133;
          }
          else {
            v47 = 0;
          }
          if ((v28 & 7) != 0) {
            v141 = &a1[v47 + 84];
            do {
              --v46;
              v23 += *(v141 - 24);
              *v141++ = v23;
            } while (v46 != 0);
          }
        }
        v26[v24] = v18 + v19;
        v142 = a1[59];
        v143 = v142 - 1;
        if (v142 == 0) {
          v143 = 0;
        }
        a1[94] = v143;
        if (v24 >= 1) {
          v144 = v24 & 7;
          if ((unsigned int)v24 >= 8) {
            v146 = a1 + 96;
            v147 = 0;
            do {
              v148 = *(v146 - 32);
              v147 -= 8;
              *(v146 - 7) = *(v146 - 33);
              *(v146 - 6) = v148;
              *(_QWORD*)(v146 - 5) = *(_QWORD*)(v146 - 31);
              *(v146 - 3) = *(v146 - 29);
              *((_QWORD*)v146 - 1) = *((_QWORD*)v146 - 14);
              *v146 = *(v146 - 26);
              v146 += 8;
            } while (-(__int64)(v24 & 0x7FFFFFF8) != v147);
            v145 = -v147;
            if ((v24 & 7) == 0) {
              goto LABEL_195;
            }
          }
          else {
            v145 = 0;
            if ((v24 & 7) == 0) {
              goto LABEL_195;
            }
          }
          v149 = &a1[v145 + 89];
          do {
            --v144;
            *v149 = *(v149 - 26);
            ++v149;
          } while (v144 != 0);
        }
      LABEL_195:
        if (v142 == 1) {
        LABEL_217:
          v150 = &v26[v28];
          goto LABEL_219;
        }
        if (v142 == 0) {
          v150 = a1 + 84;
        LABEL_219:
          v174 = a1[83];
          v175 = v24 == 1;
          a1[97] = *v150;
          a1[96] = v174;
          v176 = (__int64)&a1[v24 + 83];
          v112 = 16;
          if (v175) {
            v112 = 15;
          }
          if (v175) {
            v99 = a1 + 84;
          }
          else {
            v99 = (int*)v176;
          }
          goto LABEL_225;
        }
      LABEL_218:
        v150 = &v26[a1[94]];
        goto LABEL_219;
      }
      if (v17 == 0) {
        v32 = a1[56];
        switch (v32) {
        case 4:
          v33 = v18 - 8;
          if ((unsigned int)(v18 - 8) <= 0xA && ((0x583u >> v33) & 1) != 0) {
            v34 = &SdkData_e63048;
            goto LABEL_114;
          }
          break;
        case 2:
          v33 = v18 - 8;
          if ((unsigned int)(v18 - 8) <= 0xA && ((0x583u >> v33) & 1) != 0) {
            v34 = &SdkData_e62ff0;
            goto LABEL_114;
          }
          break;
        case 1:
          v33 = v18 - 8;
          if ((unsigned int)(v18 - 8) <= 0xA && ((0x583u >> v33) & 1) != 0) {
            v34 = &SdkData_e62f98;
          LABEL_114:
            nn_codec_FDKmemcpy_plt(result, v34[v33], 68);
            result = a1 + 82;
          }
          break;
        default:
          break;
        }
        if (*result >= 1) {
          v82 = a1[(*result != 1) + 3];
          v83 = 89;
          do {
            v21[26] = v82;
            *v21++ = v82;
            v84 = v83 - 88;
            ++v83;
          } while (v84 < *result);
        }
        return result;
      }
      v23 = 0;
      v24 = 0;
      if (v17 != 3) {
        goto LABEL_14;
      }
      v38 = a1[69];
      v39 = a1[67];
      v40 = a1 + 83;
      v41 = a1[70] + v38;
      a1[83] = v39;
      v42 = v41 + 1;
      a1[82] = v41 + 1;
      if (v38 >= 1) {
        v43 = v38 & 7;
        if ((unsigned int)v38 < 8) {
          v44 = 0;
          v45 = 1;
          if (v43 == 0) {
            goto LABEL_124;
          }
          goto LABEL_122;
        }
        v85 = a1 + 91;
        v86 = 0;
        v87 = -(__int64)(v38 & 0x7FFFFFF8);
        do {
          v86 -= 8;
          v88 = *(v85 - 20) + v39;
          v89 = *(v85 - 19) + v88;
          *(v85 - 7) = v88;
          *(v85 - 6) = v89;
          v90 = *(v85 - 18) + v89;
          v91 = *(v85 - 17) + v90;
          *(v85 - 5) = v90;
          *(v85 - 4) = v91;
          v92 = *(v85 - 16) + v91;
          v93 = *(v85 - 15) + v92;
          *(v85 - 3) = v92;
          *(v85 - 2) = v93;
          v94 = *(v85 - 14) + v93;
          v39 = *(v85 - 13) + v94;
          *(v85 - 1) = v94;
          *v85 = v39;
          v85 += 8;
        } while (v87 != v86);
        v44 = -v86;
        v45 = 1 - v86;
        if (v43 != 0) {
        LABEL_122:
          v95 = &a1[v44 + 71];
          v96 = &a1[v45 + 83];
          do {
            v97 = *v95++;
            --v43;
            v39 += v97;
            *v96++ = v39;
          } while (v43 != 0);
        }
      }
    LABEL_124:
      v98 = a1[68];
      v99 = a1 + 68;
      v40[v42] = v98;
      if (a1[70] >= 1) {
        v100 = v41;
        v101 = 0;
        do {
          v102 = &v40[v101++];
          v98 -= *(v102 - 9);
          v40[v100--] = v98;
        } while (v101 < a1[70]);
      }
      v103 = a1[59];
      v104 = v41 - v103 + 2;
      if (v103 == 0) {
        v104 = 0;
      }
      a1[94] = v104;
      if (v41 < 0) {
        goto LABEL_139;
      }
      v105 = v42 & 7;
      if (v42 >= 8) {
        v107 = a1 + 96;
        v108 = 0;
        v109 = -(__int64)(v42 & 0xFFFFFFF8);
        do {
          v110 = *(v107 - 18);
          v108 -= 8;
          *(v107 - 7) = *(v107 - 19);
          *(v107 - 6) = v110;
          *(_QWORD*)(v107 - 5) = *(_QWORD*)(v107 - 17);
          *(v107 - 3) = *(v107 - 15);
          *((_QWORD*)v107 - 1) = *((_QWORD*)v107 - 7);
          *v107 = *(v107 - 12);
          v107 += 8;
        } while (v109 != v108);
        v106 = -v108;
        if (v105 == 0) {
        LABEL_138:
          if (v41 == 0) {
            a1[95] = 1;
            a1[96] = a1[67];
            v112 = 15;
          LABEL_225:
            result[v112] = *v99;
            return result;
          }
        LABEL_139:
          a1[95] = 2;
          a1[96] = a1[67];
          if (v103 >= 2) {
            v41 = a1[94];
          }
          a1[97] = v40[v41];
          v112 = 16;
          goto LABEL_225;
        }
      }
      else {
        v106 = 0;
        if (v105 == 0) {
          goto LABEL_138;
        }
      }
      v111 = &a1[v106 + 89];
      do {
        --v105;
        *v111 = *(v111 - 12);
        ++v111;
      } while (v105 != 0);
      goto LABEL_138;
    }
    if (v122 < v317) {
      nn_codec_specialCase(a1 + 14, v315, a1 + 15, a1 + 26, v321, a1 + 38,
                           &v322);
    }
    goto LABEL_234;
  }
  if (v37 == 2) {
    goto LABEL_43;
  }
  if (v37 != 3) {
    if (v37 != 4) {
      goto LABEL_45;
    }
    goto LABEL_43;
  }
LABEL_41:
  if (v16 == 0) {
    if (a1[14] != 0) {
      v36 = 3;
    }
    else {
      v36 = 2;
    }
    goto LABEL_147;
  }
  v36 = 3;
  a1[14] = 0;
LABEL_45:
  a1[13] = v36;
  if (a4 != 0 && v16 != 0) {
    v318 = v6;
    a1[13] = 0;
    v36 = 4;
    goto LABEL_50;
  }
  if (v16 == 0) {
    v56 = 0;
    v53 = 0;
    v68 = 0;
    v316 = 0;
    if (v36 > 1) {
      goto LABEL_91;
    }
    goto LABEL_148;
  }
  v318 = v6;
LABEL_50:
  a1[26] = 0;
  a1[38] = 0;
  v48 = v12;
  v49 = v14 + v12 + v15;
  if (*a5 != 0) {
    nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v49 - *a5);
    nn_codec_FDKsbrEnc_AddRight_plt(v321, a1 + 38, (unsigned int)a5[3]);
  }
  nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v49);
  v50 = a5[1];
  v51 = v49;
  if (v50 != 0) {
    v51 = v50 + v49;
    nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v50 + v49);
    nn_codec_FDKsbrEnc_AddRight_plt(v321, a1 + 38, (unsigned int)a5[4]);
  }
  v316 = v49;
  v52 = a5[2];
  if (v52 != 0) {
    nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v52 + v51);
    nn_codec_FDKsbrEnc_AddRight_plt(v321, a1 + 38, (unsigned int)a5[5]);
  }
  nn_codec_FDKsbrEnc_AddRight_plt(v321, a1 + 38, 1);
  v53 = *v35;
  v54 = a1[26];
  if (v54 < 1) {
    v6 = v318;
    v56 = *v35;
    v12 = v48;
  }
  else {
    v55 = 0;
    v56 = *v35;
    LODWORD(v57) = a1[26];
    v58 = *v35;
    v12 = v48;
    do {
      v59 = v35[v55++];
      if (v59 >= v58) {
        v57 = (unsigned int)v57;
      }
      else {
        v56 = v59;
        v57 = (unsigned int)v54;
      }
      if (v59 < v58) {
        v58 = v59;
      }
    } while (v55 < v57);
    v6 = v318;
    v60 = 0;
    LODWORD(v61) = a1[26];
    v62 = *v35;
    do {
      v63 = v35[v60++];
      if (v63 <= v62) {
        v61 = (unsigned int)v61;
      }
      else {
        v53 = v63;
        v61 = (unsigned int)v54;
      }
      if (v63 > v62) {
        v62 = v63;
      }
    } while (v60 < v61);
  }
  if ((v15 & 0xFE) == 4) {
    v64 = 3;
  }
  else {
    v64 = 7;
  }
  if (v15 >= 4) {
    v65 = v64;
  }
  else {
    v65 = 5;
  }
  if ((v15 & 0xFE) == 4) {
    v66 = 4;
  }
  else {
    v66 = 8;
  }
  if (v15 < 4) {
    v66 = 6;
  }
  if (v13 == 16) {
    v67 = v66;
  }
  else {
    v67 = 8;
  }
  if (v13 == 15) {
    v68 = v65;
  }
  else {
    v68 = v67;
  }
  if (v36 <= 1) {
    goto LABEL_148;
  }
LABEL_91:
  if (v36 == 2) {
    v71 = a1[52];
    v72 = (unsigned int)a1[44];
    v73 = a1[45];
    v74 = 0;
    v75 = a1[39];
    v323 = 0;
    if ((int)v72 >= 2) {
      v76 = v72 - 1;
      v77 = a1 + 40;
      do {
        nn_codec_FDKsbrEnc_AddRight_plt(a1 + 60, &v323,
                                        (unsigned int)(*v77 - *(v77 - 1)));
        --v76;
        ++v77;
      } while (v76 != 0);
      v74 = v323;
    }
    nn_codec_FDKmemcpy_plt(a1 + 63, a1 + 47, (unsigned int)(4 * v71));
    a1[57] = v75;
    a1[58] = v74;
    if (v73 <= -1) {
      v78 = -1;
    }
    else {
      v78 = v73;
    }
    a1[55] = 2;
    a1[59] = v78 + 1;
    goto LABEL_9;
  }
  if (v36 == 3) {
    v69 = a1 + 39;
    if (a1[14] != 0) {
      nn_codec_calcCtrlSignal(v320, 3, v69, (unsigned int)a1[44], a1 + 47,
                              (unsigned int)a1[52]);
      v70 = a1[68];
      a1[14] = 0;
      a1[39] = v70 - v13;
      a1[47] = 1;
      a1[44] = 1;
      a1[52] = 1;
      *(_QWORD*)(a1 + 45) = 0xFFFFED99FFFFED99LL;
      goto LABEL_9;
    }
    v177 = a1[46];
    v319 = v6;
    if (v13 == 9) {
      if (v177 <= 0) {
        v177 = a1[44];
      }
      else {
        a1[44] = v177;
        a1[52] = v177;
      }
      v241 = v69[v177 - 1];
      v242 = v56 - v241;
      if (v177 != 1 && v242 < 0) {
        v243 = v177;
        do {
          v241 = a1[v243 + 37];
          v177 = v243 - 1;
          v242 = v56 - v241;
          if (v56 - v241 >= 0) {
            break;
          }
          v175 = v243-- == 2;
        } while (!v175);
      }
      if (v242 < 0) {
        v244 = a1[26];
        if (v244 < 1) {
          LODWORD(v246) = 0;
        }
        else {
          v245 = v321;
          v246 = 0;
          v247 = 0;
          do {
            v248 = *(v245 - 12);
            if (v248 > v241) {
              v35[v247] = v248;
              v321[v247++] = *v245;
              v244 = a1[26];
            }
            ++v246;
            ++v245;
          } while (v246 < v244);
        }
        a1[26] = v246;
        a1[38] = v246;
        v56 = *v35;
      }
      v271 = v56 - v241;
      a1[44] = v177;
      a1[52] = v177;
      if (v271 > v317) {
        if (v271 > v6) {
          v314 = v12;
          v312 = 9;
          v272 = 0;
          do {
            v273 = v272 + 2;
            ++v272;
            v274 = (v271 / v273) & 0xFFFFFFFE;
            if (v274 >= 8) {
              v275 = 8;
            }
            else {
              v275 = v274;
            }
          } while (v271 - v275 * v272 > v6);
          v257 = v321;
          if (v274 >= 8) {
            v276 = 8;
          }
          else {
            v276 = v274;
          }
          v277 = v56 - v276;
          do {
            nn_codec_FDKsbrEnc_AddLeft_plt(a1 + 15, a1 + 26, v277);
            nn_codec_FDKsbrEnc_AddLeft_plt(v321, a1 + 38, 1);
            v277 -= v276;
            --v272;
          } while (v272 != 0);
          v263 = a1 + 26;
          v264 = a1 + 15;
        LABEL_349:
          nn_codec_FDKsbrEnc_AddVecLeft_plt(v264, v263);
          nn_codec_FDKsbrEnc_AddVecLeft_plt(v257, a1 + 38);
          v268 = v257;
          v13 = v312;
          v12 = v314;
          goto LABEL_363;
        }
      LABEL_352:
        nn_codec_FDKsbrEnc_AddVecLeft_plt(a1 + 15, a1 + 26);
        v268 = v321;
      LABEL_362:
        nn_codec_FDKsbrEnc_AddVecLeft_plt(v268, a1 + 38);
      LABEL_363:
        v284 = v12 - v53 + 2 * v13;
        v285 = 1;
        v322 = 1;
        if (v284 < 1) {
          --a1[26];
          --a1[38];
        }
        else if (v284 > v319) {
          v286 = v12;
          do {
            v287 = v285++;
            v288 = v284 / v285;
            v289 = (v284 / v285) & 0x7FFFFFFE;
            if ((int)v68 < v289) {
              v289 = v68;
            }
          } while ((int)(v284 - v289 * v287) > v319);
          v290 = v288 & 0xFFFFFFFE;
          v322 = v285;
          if ((int)v68 >= (int)(v288 & 0xFFFFFFFE)) {
            v291 = v288 & 0xFFFFFFFE;
          }
          else {
            v291 = v68;
          }
          v292 = v53 + v291;
          v293 = v285 - 1;
          do {
            if ((int)v68 >= v290) {
              v294 = v290;
            }
            else {
              v294 = v68;
            }
            nn_codec_FDKsbrEnc_AddRight_plt(a1 + 15, a1 + 26, v292);
            nn_codec_FDKsbrEnc_AddRight_plt(v268, a1 + 38, 1);
            v292 += v294;
            --v293;
          } while (v293 != 0);
        LABEL_381:
          v295 = (unsigned int)a1[26];
          if ((int)v295 < 1) {
            v296 = v320;
            LODWORD(v297) = 0;
            LODWORD(v298) = 0;
          }
          else {
            v296 = v320;
            v297 = 0;
            while (v35[v297] < v13 + v286) {
              if (v295 == ++v297) {
                LODWORD(v297) = 0;
                break;
              }
            }
            v298 = 0;
            while (v35[v298] < v316) {
              if (v295 == ++v298) {
                LODWORD(v298) = -99;
                break;
              }
            }
          }
          v299 = v322;
          a1[44] = 0;
          a1[52] = 0;
          if ((int)v295 > (int)v297) {
            v300 = (int)v297;
            v301 = ((int)v295 - (int)v297) & 3LL;
            if ((unsigned int)(v295 - v297 - 1) >= 3) {
              v303 = 0;
              v304 = a1;
              v305 = 4LL * (int)v297 + 60;
              do {
                v303 -= 4;
                v304[39] = *(_DWORD*)((char*)v304 + v305) - v13;
                v304[47] = *(_DWORD*)((char*)v304 + v305 + 48);
                ++a1[44];
                ++a1[52];
                v304[40] = *(_DWORD*)((char*)v304 + v305 + 4) - v13;
                v304[48] = *(_DWORD*)((char*)v304 + v305 + 52);
                ++a1[44];
                ++a1[52];
                v304[41] = *(_DWORD*)((char*)v304 + v305 + 8) - v13;
                v304[49] = *(_DWORD*)((char*)v304 + v305 + 56);
                ++a1[44];
                ++a1[52];
                v304[42] = *(_DWORD*)((char*)v304 + v305 + 12) - v13;
                v304[50] = *(_DWORD*)((char*)v304 + v305 + 60);
                v304 += 4;
                ++a1[44];
                ++a1[52];
              } while (-(__int64)(((_DWORD)v295 - (_DWORD)v297) & 0xFFFFFFFC) !=
                       v303);
              v300 = (int)v297 - v303;
              v302 = -v303;
            }
            else {
              v302 = 0;
            }
            if (v301 != 0) {
              v306 = &a1[v300 + 15];
              v307 = &a1[v302 + 47];
              do {
                --v301;
                *(v307 - 8) = *v306 - v13;
                v308 = v306[12];
                ++v306;
                *v307++ = v308;
                ++a1[44];
                ++a1[52];
              } while (v301 != 0);
            }
          }
          v309 = v298 - v297;
          v310 = (unsigned int)a1[38];
          v311 = v295 - (v297 + v299);
          if ((_DWORD)v298 == -99) {
            v309 = -99;
          }
          a1[45] = v309;
          a1[46] = v311 + 1;
          nn_codec_calcCtrlSignal(v296, 3, a1 + 15, v295, v268, v310);
          goto LABEL_9;
        }
        v286 = v12;
        if (v284 < v317) {
          nn_codec_specialCase(a1 + 14, v315, a1 + 15, a1 + 26, v268, a1 + 38,
                               &v322);
        }
        goto LABEL_381;
      }
      v265 = a1[26];
      if (*a5 != 0) {
      LABEL_351:
        v278 = v265 - 1;
        a1[26] = v265 - 1;
        nn_codec_FDKsbrEnc_AddVecLeft_plt(a1 + 15, a1 + 26);
        a1[38] = v278;
        nn_codec_FDKsbrEnc_AddVecLeft_plt(a1 + 28, a1 + 38);
        v268 = v321;
        goto LABEL_363;
      }
      if (v177 > 1) {
      LABEL_354:
        nn_codec_FDKsbrEnc_AddVecLeft_plt(a1 + 15, a1 + 26);
        v268 = v321;
        nn_codec_FDKsbrEnc_AddVecLeft_plt(v321, a1 + 38);
        goto LABEL_363;
      }
      if (v265 >= 2) {
        v279 = a1 + 16;
        v280 = 0;
        do {
          ++v280;
          *(v279 - 1) = *v279;
          ++v279;
        } while (v280 < a1[26] - 1LL);
      }
      v268 = v321;
      if (a1[38] >= 2) {
        v281 = a1 + 28;
        v282 = 0;
        do {
          ++v282;
          *(v281 - 1) = *v281;
          ++v281;
        } while (v282 < a1[38] - 1LL);
      }
    }
    else {
      if (v177 <= 0) {
        v177 = a1[44];
      }
      else {
        a1[44] = v177;
        a1[52] = v177;
      }
      v249 = v56 - v69[v177 - 1];
      if (v249 < 0) {
        v250 = &a1[v177 + 37];
        do {
          v251 = *v250--;
          --v177;
          v249 = v56 - v251;
        } while (v56 - v251 < 0);
      }
      a1[44] = v177;
      a1[52] = v177;
      if (v249 > v6) {
        v252 = 1;
        v314 = v12;
        v312 = v13;
        do {
          v253 = v252 + 1;
          v254 = v249 / (unsigned int)(v252 + 1);
          v255 = v254 & 0x7FFFFFFE;
          if ((v254 & 0x7FFFFFF8) != 0) {
            v255 = 8;
          }
          v256 = v249 - v255 * v252++;
        } while (v256 > v6);
        v257 = v321;
        v258 = v254 & 0xFFFFFFFE;
        v259 = v253 - 1;
        if ((v254 & 0xFFFFFFF8) != 0) {
          v260 = 8;
        }
        else {
          v260 = v254 & 0xFFFFFFFE;
        }
        v261 = v56 - v260;
        do {
          if (v258 >= 8) {
            v262 = 8;
          }
          else {
            v262 = v258;
          }
          nn_codec_FDKsbrEnc_AddLeft_plt(a1 + 15, a1 + 26, v261);
          nn_codec_FDKsbrEnc_AddLeft_plt(v321, a1 + 38, 1);
          v261 -= v262;
          --v259;
        } while (v259 != 0);
        v263 = a1 + 26;
        v264 = a1 + 15;
        goto LABEL_349;
      }
      if (v249 >= v317) {
        goto LABEL_352;
      }
      v265 = a1[26];
      if (*a5 != 0) {
        goto LABEL_351;
      }
      if (v177 > 1) {
        goto LABEL_354;
      }
      if (v265 >= 2) {
        v266 = a1 + 16;
        v267 = 0;
        do {
          ++v267;
          *(v266 - 1) = *v266;
          ++v266;
        } while (v267 < a1[26] - 1LL);
      }
      v268 = v321;
      if (a1[38] >= 2) {
        v269 = a1 + 28;
        v270 = 0;
        do {
          ++v270;
          *(v269 - 1) = *v269;
          ++v269;
        } while (v270 < a1[38] - 1LL);
      }
    }
    v283 = v265 - 1;
    a1[26] = v283;
    a1[38] = v283;
    nn_codec_FDKsbrEnc_AddVecLeft_plt(a1 + 15, a1 + 26);
    goto LABEL_362;
  }
  switch (v13) {
  case 16:
    v79 = (char*)&SdkData_c3617c;
    goto LABEL_249;
  case 15:
    v79 = (char*)&SdkData_c35fd4;
  LABEL_249:
    v80 = 24;
    v81 = &SdkData_c3613c;
  LABEL_250:
    v186 = &v79[v15 * (unsigned __int64)v80];
    v187 = *(unsigned int*)v186;
    v188 = *((unsigned __int8*)a1 + 20);
    result = a1 + 82;
    v189 = a1 + 83;
    v190 = v187 - 2;
    if ((int)v187 >= 2) {
      goto LABEL_251;
    }
    goto LABEL_271;
  case 8:
    v79 = (char*)&SdkData_c35f10;
    v80 = 20;
    v81 = &SdkData_c35fb0;
    goto LABEL_250;
  default:
    break;
  }
  v186 = nullptr;
  v81 = nullptr;
  v187 = *(unsigned int*)SdkRoutine_0;
  v188 = *((unsigned __int8*)a1 + 20);
  result = a1 + 82;
  v189 = a1 + 83;
  v190 = *(_DWORD*)SdkRoutine_0 - 2;
  if (*(int*)SdkRoutine_0 >= 2) {
  LABEL_251:
    v191 = (v187 - 1) & 7;
    if (v190 >= 7) {
      v193 = (v187 - 1) & 0xFFFFFFFFFFFFFFF8LL;
      v194 = a1 + 91;
      v195 = v186 + 20;
      v192 = v193 | 1;
      do {
        v193 -= 8LL;
        *(v194 - 7) = *(v195 - 2);
        *(v194 - 6) = *(v195 - 1);
        *(v194 - 5) = *v195;
        *(v194 - 4) = v195[1];
        *(v194 - 3) = v195[2];
        *(v194 - 2) = v195[3];
        *(v194 - 1) = v195[4];
        v196 = v195[5];
        v195 += 8;
        *v194 = v196;
        v194 += 8;
      } while (v193 != 0);
    }
    else {
      v192 = 1;
    }
    if (v191 != 0) {
      v197 = &a1[v192 + 83];
      v198 = (unsigned int*)&v186[4 * v192 + 8];
      do {
        v199 = *v198++;
        --v191;
        *v197++ = v199;
      } while (v191 != 0);
    }
    *v189 = 0;
    v189[v187] = v13;
    v200 = v187;
    if (v188 != 0) {
      goto LABEL_259;
    }
    goto LABEL_273;
  }
LABEL_271:
  *v189 = 0;
  v189[(int)v187] = v13;
  if ((_DWORD)v187 == 1) {
    v200 = 1;
    if (v188 != 0) {
    LABEL_259:
      v201 = v200 & 7;
      if ((unsigned __int64)(v200 - 1) >= 7) {
        v215 = a1 + 96;
        v216 = 0;
        do {
          *(_QWORD*)(v215 - 7) = 0;
          *(_QWORD*)(v215 - 33) = 0;
          v216 -= 8;
          *(_QWORD*)(v215 - 5) = 0;
          *(_QWORD*)(v215 - 31) = 0;
          *(_QWORD*)(v215 - 3) = 0;
          *(_QWORD*)(v215 - 29) = 0;
          *(_QWORD*)(v215 - 1) = 0;
          *(_QWORD*)(v215 - 27) = 0;
          v215 += 8;
        } while (-(__int64)((unsigned int)v200 & 0xFFFFFFF8) != v216);
        v202 = -v216;
      }
      else {
        v202 = 0;
      }
      if ((v200 & 7) != 0) {
        v217 = &a1[v202 + 63];
        do {
          v217[26] = 0;
          *v217++ = 0;
          --v201;
        } while (v201 != 0);
      }
      goto LABEL_290;
    }
  LABEL_273:
    v212 = *v189;
    v213 = v200 & 7;
    if ((unsigned __int64)(v200 - 1) >= 7) {
      v218 = a1 + 96;
      v219 = 0;
      v220 = -(__int64)((unsigned int)v200 & 0xFFFFFFF8);
      do {
        v221 = *(v218 - 12);
        v222 = *(v218 - 11);
        v219 -= 8;
        v223 = v81[v221 - v212];
        *(v218 - 7) = v223;
        *(v218 - 33) = v223;
        v224 = v81[v222 - v221];
        *(v218 - 6) = v224;
        *(v218 - 32) = v224;
        v225 = *(v218 - 10);
        v226 = *(v218 - 9);
        v227 = v81[v225 - v222];
        *(v218 - 5) = v227;
        *(v218 - 31) = v227;
        v228 = v81[v226 - v225];
        *(v218 - 4) = v228;
        *(v218 - 30) = v228;
        v229 = *(v218 - 8);
        v230 = *(v218 - 7);
        v231 = v81[v229 - v226];
        *(v218 - 3) = v231;
        *(v218 - 29) = v231;
        v232 = v81[v230 - v229];
        *(v218 - 2) = v232;
        *(v218 - 28) = v232;
        v233 = *(v218 - 6);
        v212 = *(v218 - 5);
        v234 = v81[v233 - v230];
        *(v218 - 1) = v234;
        *(v218 - 27) = v234;
        v235 = v81[v212 - v233];
        *v218 = v235;
        *(v218 - 26) = v235;
        v218 += 8;
      } while (v220 != v219);
      v214 = -v219;
    }
    else {
      v214 = 0;
    }
    if (v213 != 0) {
      v236 = &a1[v214 + 89];
      do {
        v237 = *(v236 - 5);
        --v213;
        v238 = v81[v237 - v212];
        *v236 = v238;
        *(v236 - 26) = v238;
        ++v236;
        v212 = v237;
      } while (v213 != 0);
    }
  }
LABEL_290:
  a1[82] = v187;
  a1[94] = *((_DWORD*)v186 + 2);
  v239 = *((_DWORD*)v186 + 1);
  a1[96] = 0;
  if ((unsigned int)v239 <= 1) {
    v239 = 1;
  }
  v240 = v189[v239];
  a1[98] = v13;
  a1[56] = v187;
  a1[57] = v15;
  a1[97] = v240;
  a1[95] = 2;
  a1[55] = 4;
  return result;
}

#pragma GCC visibility pop
