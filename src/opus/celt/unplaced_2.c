#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ec_dec_uint(_QWORD, _QWORD);
__int64 ec_enc_uint(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* MovieData_c0358;
__int64 opus_celt_29540(__int64 result, __int16* a2, unsigned int a3,
                        unsigned int a4, int a5, __int16* a6, _DWORD* a7,
                        int a8);
__int64 opus_celt_37120(__int64 a1, int a2, int a3, __int64 a4);
__int64 opus_celt_372e0(_DWORD* a1, int a2, int a3, __int64 a4);
__int64* opus_celt_39680(__int64* result, int* a2, int a3, int a4);

__int64 opus_celt_29540(__int64 result, __int16* a2, unsigned int a3,
                        unsigned int a4, int a5, __int16* a6, _DWORD* a7,
                        int a8)
{
  unsigned __int64 v11;
  __int16* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
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
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  int* v42;
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
  int* v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _DWORD* v60;
  __int16* v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int* v86;
  __int64 v87;
  __int16* v88;
  __int64 v89;
  unsigned __int64 v90;
  int v91;
  unsigned __int64 v92;
  int v93;
  __int64 v94;
  unsigned __int64 v95;
  int v96;
  unsigned __int64 v97;
  int v98;
  __int64 v99;
  unsigned __int64 v100;
  int v101;
  unsigned __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int v107;
  __int64 v108;
  int* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  int v114;
  int v115;
  int* v116;
  __int64 v117;
  __int16* v118;
  __int16* v119;
  __int64 v120;
  unsigned __int64 v121;
  int v122;
  unsigned __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  int v126;
  unsigned __int64 v127;
  __int16* v128;
  __int64 v129;
  unsigned __int64 v130;
  int v131;
  unsigned __int64 v132;
  __int16* v133;
  __int64 v134;
  unsigned __int64 v135;
  int v136;
  unsigned __int64 v137;
  __int16* v138;
  __int64 v139;
  unsigned __int64 v140;
  int v141;
  unsigned __int64 v142;
  __int16* v143;
  __int64 v144;
  unsigned __int64 v145;
  int v146;
  unsigned __int64 v147;
  __int16* v148;
  __int64 v149;
  unsigned __int64 v150;
  int v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  int v156;
  __int64 v157;
  int* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  int v163;
  int* v164;
  int* v165;
  __int16* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  int v171;
  unsigned __int64 v172;
  int v173;
  unsigned __int64 v174;
  int v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  int v182;
  int v183;
  __int64 v184;
  __int16* v185;
  __int64 v186;
  __int64 v187;
  int v188;
  int v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char* v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  int* v202;
  __int64 v203;
  char* v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  __int64 v214;
  int* v215;
  char* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  _DWORD* v221;
  __int16* v222;
  __int16* v223;
  int v224;
  int* v225;
  int v226;
  int* v227;
  int v228;
  int* v229;
  int v230;
  int v231;
  int v232;
  __int16* v233;
  int* v234;
  int v235;
  int v236;
  __int16* v237;
  int v238;
  int v239;
  __int16* v240;
  int* v241;
  int v242;
  int v243;
  __int16* v244;
  int* v245;
  int v246;
  __int16* v247;
  int v248;
  int v249;
  __int64 v250;
  __int64 v251;
  char* v252;
  int v253;
  int v254;
  __int64 v255;
  __int64 v256;
  char* v257;
  unsigned __int64 v258;
  __int64 v259;
  __int64 v260;
  unsigned __int64 v261;
  int* v262;
  __int64 v263;
  char* v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  int* v274;
  char* v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  struct {
    char* v279;
    char* v280;
  } v279_;

  LODWORD(v11) = a5;
  v14 = a2;
  v15 = result;
  if (a4 == 2 && a5 == 1 && a8 == 0) {
    LODWORD(v17) = *a7;
    LODWORD(v16) = a7[1];
    if ((int)a3 >= 1) {
      v19 = *(_QWORD*)result;
      v18 = *(_QWORD*)(result + 8);
      v20 = *a6;
      if (a3 == 1) {
        v21 = 0;
      }
      else {
        v164 = (int*)(v19 + 4);
        v165 = (int*)(v18 + 4);
        v166 = a2 + 2;
        v167 = 0;
        result = 4294934528LL;
        do {
          v167 -= 2;
          v168 = *(v164 - 1) + (__int64)(int)v17;
          v169 = *(v165 - 1) + (__int64)(int)v16;
          v170 = v168 * v20;
          v171 = ((int)v168 + 2048) >> 12;
          v172 = v169 * v20;
          v173 = v169 + 2048;
          v174 = v170 >> 15;
          if (v171 <= -32768) {
            v171 = -32768;
          }
          v175 = v173 >> 12;
          v176 = v172 >> 15;
          if (v171 >= 0x7FFF) {
            LOWORD(v171) = 0x7FFF;
          }
          if (v175 <= -32768) {
            v175 = -32768;
          }
          *(v166 - 2) = v171;
          if (v175 >= 0x7FFF) {
            LOWORD(v175) = 0x7FFF;
          }
          *(v166 - 1) = v175;
          v177 = *v164;
          v164 += 2;
          v178 = v177 + (int)v174;
          v179 = *v165;
          v165 += 2;
          v180 = v179 + (int)v176;
          v181 = v178 * v20;
          v182 = ((int)v178 + 2048) >> 12;
          v17 = v181 >> 15;
          if (v182 <= -32768) {
            v182 = -32768;
          }
          v16 = (unsigned __int64)(v180 * v20) >> 15;
          if (v182 >= 0x7FFF) {
            LOWORD(v182) = 0x7FFF;
          }
          *v166 = v182;
          v183 = ((int)v180 + 2048) >> 12;
          if (v183 <= -32768) {
            v183 = -32768;
          }
          if (v183 >= 0x7FFF) {
            LOWORD(v183) = 0x7FFF;
          }
          v166[1] = v183;
          v166 += 4;
        } while (-(__int64)(a3 & 0x7FFFFFFE) != v167);
        v21 = -v167;
        if ((a3 & 1) == 0) {
          goto LABEL_203;
        }
      }
      v184 = 4 * v21;
      v185 = &a2[2 * v21];
      v186 = *(int*)(v19 + v184) + (__int64)(int)v17;
      v187 = *(int*)(v18 + v184) + (__int64)(int)v16;
      v16 = (unsigned __int64)(v187 * v20) >> 15;
      v17 = (unsigned __int64)(v186 * v20) >> 15;
      v188 = ((int)v186 + 2048) >> 12;
      if (v188 <= -32768) {
        v188 = -32768;
      }
      if (v188 >= 0x7FFF) {
        LOWORD(v188) = 0x7FFF;
      }
      *v185 = v188;
      v189 = ((int)v187 + 2048) >> 12;
      if (v189 <= -32768) {
        v189 = -32768;
      }
      if (v189 >= 0x7FFF) {
        LOWORD(v189) = 0x7FFF;
      }
      v185[1] = v189;
    }
  LABEL_203:
    *a7 = v17;
    a7[1] = v16;
    return result;
  }
  v22 = 4LL * (int)a3;
  v279_.v280 = (char*)&v279_.v279 - ((v22 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  result = memset_plt(v279_.v280, 0, v22);
  v23 = *a6;
  if ((int)v11 <= 1) {
    v79 = 2LL * (int)a4;
    v80 = 0;
    result = 8LL * (int)a4;
    if ((int)a4 <= 1) {
      v81 = 1;
    }
    else {
      v81 = a4;
    }
    while (1) {
      LODWORD(v82) = a7[v80];
      v83 = *(_QWORD*)(v15 + 8 * v80);
      if (a8 != 0) {
        if ((int)a3 < 1) {
          goto LABEL_76;
        }
        if (a3 >= 4) {
          v86 = (int*)(v83 + 8);
          v87 = 0;
          v88 = v14;
          LODWORD(v11) = a7[v80];
          do {
            v87 -= 4;
            v89 = *(v86 - 2) + (__int64)(int)v11;
            v90 = v89 * v23;
            v91 = ((int)v89 + 2048) >> 12;
            v92 = v90 >> 15;
            if (v91 <= -32768) {
              v91 = -32768;
            }
            if (v91 >= 0x7FFF) {
              v91 = 0x7FFF;
            }
            v93 = v91 + *v88;
            if (v93 >= 0x7FFF) {
              v93 = 0x7FFF;
            }
            if (v93 <= -32768) {
              LOWORD(v93) = 0x8000;
            }
            *v88 = v93;
            v94 = *(v86 - 1) + (__int64)(int)v92;
            v95 = v94 * v23;
            v96 = ((int)v94 + 2048) >> 12;
            v97 = v95 >> 15;
            if (v96 <= -32768) {
              v96 = -32768;
            }
            if (v96 >= 0x7FFF) {
              v96 = 0x7FFF;
            }
            v98 = v96 + v88[a4];
            if (v98 >= 0x7FFF) {
              v98 = 0x7FFF;
            }
            if (v98 <= -32768) {
              LOWORD(v98) = 0x8000;
            }
            v88[a4] = v98;
            v99 = *v86 + (__int64)(int)v97;
            v100 = v99 * v23;
            v101 = ((int)v99 + 2048) >> 12;
            v102 = v100 >> 15;
            if (v101 <= -32768) {
              v101 = -32768;
            }
            if (v101 >= 0x7FFF) {
              v101 = 0x7FFF;
            }
            v103 = v101 + v88[2 * a4];
            if (v103 >= 0x7FFF) {
              v103 = 0x7FFF;
            }
            if (v103 <= -32768) {
              LOWORD(v103) = 0x8000;
            }
            v88[2 * a4] = v103;
            v104 = v86[1];
            v86 += 4;
            v105 = v104 + (int)v102;
            v82 = v105 * v23;
            v106 = ((int)v105 + 2048) >> 12;
            v11 = v82 >> 15;
            if (v106 <= -32768) {
              v106 = -32768;
            }
            if (v106 >= 0x7FFF) {
              v106 = 0x7FFF;
            }
            v107 = v106 + v88[3 * a4];
            if (v107 >= 0x7FFF) {
              v107 = 0x7FFF;
            }
            if (v107 <= -32768) {
              LOWORD(v107) = 0x8000;
            }
            v88[3 * a4] = v107;
            v88 = (__int16*)((char*)v88 + result);
          } while (-(__int64)(a3 & 0x7FFFFFFC) != v87);
          v84 = -v87;
          LODWORD(v82) = v82 >> 15;
          if ((a3 & 3) == 0) {
            goto LABEL_77;
          }
        LABEL_122:
          v108 = v79 * v84;
          v109 = (int*)(v83 + 4 * v84);
          v110 = a3 & 3;
          LODWORD(v11) = v82;
          do {
            v111 = *v109++;
            v112 = v111 + (int)v11;
            v113 = v112 * v23;
            v114 = ((int)v112 + 2048) >> 12;
            v11 = v113 >> 15;
            if (v114 <= -32768) {
              v114 = -32768;
            }
            if (v114 >= 0x7FFF) {
              v114 = 0x7FFF;
            }
            v115 = v114 + *(__int16*)((char*)v14 + v108);
            if (v115 >= 0x7FFF) {
              v115 = 0x7FFF;
            }
            if (v115 <= -32768) {
              LOWORD(v115) = 0x8000;
            }
            --v110;
            *(__int16*)((char*)v14 + v108) = v115;
            v108 += v79;
          } while (v110 != 0);
          goto LABEL_77;
        }
        v84 = 0;
        if ((a3 & 3) != 0) {
          goto LABEL_122;
        }
      }
      else {
        if ((int)a3 < 1) {
        LABEL_76:
          LODWORD(v11) = a7[v80];
          // The original stores the state back even with no samples.
          __asm__ volatile("" : "+r"(v11));
          goto LABEL_77;
        }
        if (a3 >= 8) {
          v116 = (int*)(v83 + 16);
          v117 = 0;
          v118 = v14;
          do {
            v119 = &v118[a4];
            v117 -= 8;
            v120 = *(v116 - 4) + (__int64)(int)v82;
            v121 = v120 * v23;
            v122 = ((int)v120 + 2048) >> 12;
            v123 = v121 >> 15;
            if (v122 <= -32768) {
              v122 = -32768;
            }
            if (v122 >= 0x7FFF) {
              LOWORD(v122) = 0x7FFF;
            }
            *v118 = v122;
            v118 += 8 * (int)a4;
            v124 = *(v116 - 3) + (__int64)(int)v123;
            v125 = v124 * v23;
            v126 = ((int)v124 + 2048) >> 12;
            v127 = v125 >> 15;
            if (v126 <= -32768) {
              v126 = -32768;
            }
            if (v126 >= 0x7FFF) {
              LOWORD(v126) = 0x7FFF;
            }
            *v119 = v126;
            v128 = &v119[(unsigned __int64)v79 / 2];
            v129 = *(v116 - 2) + (__int64)(int)v127;
            v130 = v129 * v23;
            v131 = ((int)v129 + 2048) >> 12;
            v132 = v130 >> 15;
            if (v131 <= -32768) {
              v131 = -32768;
            }
            if (v131 >= 0x7FFF) {
              LOWORD(v131) = 0x7FFF;
            }
            *v128 = v131;
            v133 = &v128[(unsigned __int64)v79 / 2];
            v134 = *(v116 - 1) + (__int64)(int)v132;
            v135 = v134 * v23;
            v136 = ((int)v134 + 2048) >> 12;
            v137 = v135 >> 15;
            if (v136 <= -32768) {
              v136 = -32768;
            }
            if (v136 >= 0x7FFF) {
              LOWORD(v136) = 0x7FFF;
            }
            *v133 = v136;
            v138 = &v133[(unsigned __int64)v79 / 2];
            v139 = *v116 + (__int64)(int)v137;
            v140 = v139 * v23;
            v141 = ((int)v139 + 2048) >> 12;
            v142 = v140 >> 15;
            if (v141 <= -32768) {
              v141 = -32768;
            }
            if (v141 >= 0x7FFF) {
              LOWORD(v141) = 0x7FFF;
            }
            *v138 = v141;
            v143 = &v138[(unsigned __int64)v79 / 2];
            v144 = v116[1] + (__int64)(int)v142;
            v145 = v144 * v23;
            v146 = ((int)v144 + 2048) >> 12;
            v147 = v145 >> 15;
            if (v146 <= -32768) {
              v146 = -32768;
            }
            if (v146 >= 0x7FFF) {
              LOWORD(v146) = 0x7FFF;
            }
            *v143 = v146;
            v148 = &v143[(unsigned __int64)v79 / 2];
            v149 = v116[2] + (__int64)(int)v147;
            v150 = v149 * v23;
            v151 = ((int)v149 + 2048) >> 12;
            v152 = v150 >> 15;
            if (v151 <= -32768) {
              v151 = -32768;
            }
            if (v151 >= 0x7FFF) {
              LOWORD(v151) = 0x7FFF;
            }
            *v148 = v151;
            v153 = v116[3];
            v116 += 8;
            v154 = v153 + (int)v152;
            v155 = v154 * v23;
            v156 = ((int)v154 + 2048) >> 12;
            v82 = v155 >> 15;
            if (v156 <= -32768) {
              v156 = -32768;
            }
            if (v156 >= 0x7FFF) {
              LOWORD(v156) = 0x7FFF;
            }
            v148[a4] = v156;
          } while (-(__int64)(a3 & 0x7FFFFFF8) != v117);
          v85 = -v117;
          LODWORD(v11) = v82;
          if ((a3 & 7) == 0) {
            goto LABEL_77;
          }
        LABEL_168:
          v157 = v79 * v85;
          v158 = (int*)(v83 + 4 * v85);
          v159 = a3 & 7;
          do {
            v160 = *v158++;
            v161 = v160 + (int)v82;
            v162 = v161 * v23;
            v163 = ((int)v161 + 2048) >> 12;
            v82 = v162 >> 15;
            if (v163 <= -32768) {
              v163 = -32768;
            }
            LODWORD(v11) = v162 >> 15;
            if (v163 >= 0x7FFF) {
              LOWORD(v163) = 0x7FFF;
            }
            --v159;
            *(__int16*)((char*)v14 + v157) = v163;
            v157 += v79;
          } while (v159 != 0);
          goto LABEL_77;
        }
        v85 = 0;
        LODWORD(v11) = a7[v80];
        if ((a3 & 7) != 0) {
          goto LABEL_168;
        }
      }
    LABEL_77:
      a7[v80++] = v11;
      ++v14;
      if (v80 == v81) {
        return result;
      }
    }
  }
  v24 = (int)a3 / (int)v11;
  if (a8 != 0) {
    v25 = (unsigned int)v11;
    v26 = 3LL * (unsigned int)v11;
    v27 = 0;
    v28 = v15;
    if ((int)a4 <= 1) {
      v29 = 1;
    }
    else {
      v29 = a4;
    }
    v30 = 8LL * (int)a4;
    v31 = 16LL * (unsigned int)v11;
    v32 = 2LL * (int)a4;
    v33 = 2LL * (unsigned int)v11;
    v34 = 4LL * (unsigned int)v11;
    v35 = 2LL * (int)a4;
    v36 = v26;
    v279_.v279 = v279_.v280 + 16;
    result = 6LL * (int)a4;
    while (1) {
      LODWORD(v37) = a7[v27];
      if ((int)a3 < 1) {
        LODWORD(v40) = a7[v27];
      }
      else {
        v38 = *(_QWORD*)(v15 + 8 * v27);
        if (a3 >= 8) {
          v41 = v279_.v279;
          v42 = (int*)(v38 + 16);
          v43 = 0;
          do {
            v43 -= 8;
            v44 = *(v42 - 4) + (__int64)(int)v37;
            *((_DWORD*)v41 - 4) = v44;
            v45 = *(v42 - 3) +
                  (__int64)(int)((unsigned __int64)(v44 * v23) >> 15);
            *((_DWORD*)v41 - 3) = v45;
            v46 = *(v42 - 2) +
                  (__int64)(int)((unsigned __int64)(v45 * v23) >> 15);
            *((_DWORD*)v41 - 2) = v46;
            v47 = *(v42 - 1) +
                  (__int64)(int)((unsigned __int64)(v46 * v23) >> 15);
            *((_DWORD*)v41 - 1) = v47;
            v48 = *v42 + (__int64)(int)((unsigned __int64)(v47 * v23) >> 15);
            *(_DWORD*)v41 = v48;
            v49 = v42[1] + (__int64)(int)((unsigned __int64)(v48 * v23) >> 15);
            *((_DWORD*)v41 + 1) = v49;
            v50 = v42[2] + (__int64)(int)((unsigned __int64)(v49 * v23) >> 15);
            *((_DWORD*)v41 + 2) = v50;
            v51 = v50 * v23;
            v52 = v42[3];
            v42 += 8;
            v53 = v52 + (int)(v51 >> 15);
            *((_DWORD*)v41 + 3) = v53;
            v41 += 32;
            v37 = (unsigned __int64)(v53 * v23) >> 15;
          } while (-(__int64)(a3 & 0x7FFFFFF8) != v43);
          v39 = -v43;
          LODWORD(v40) = (unsigned __int64)(v53 * v23) >> 15;
          if ((a3 & 7) == 0) {
            goto LABEL_24;
          }
        LABEL_22:
          v54 = (int*)(v38 + 4 * v39);
          LODWORD(v40) = v37;
          v55 = &v279_.v280[4 * v39];
          v56 = a3 & 7;
          do {
            v57 = *v54++;
            --v56;
            v58 = v57 + (int)v40;
            *(_DWORD*)v55 = v58;
            v55 += 4;
            v40 = (unsigned __int64)(v58 * v23) >> 15;
          } while (v56 != 0);
          goto LABEL_24;
        }
        v39 = 0;
        LODWORD(v40) = a7[v27];
        if ((a3 & 7) != 0) {
          goto LABEL_22;
        }
      }
    LABEL_24:
      a7[v27] = v40;
      if (v24 >= 1) {
        if ((unsigned int)v24 >= 4) {
          v60 = v279_.v280;
          v59 = 0;
          v61 = v14;
          do {
            v59 += 4;
            v62 = (*v60 + 2048) >> 12;
            if (v62 <= -32768) {
              v62 = -32768;
            }
            if (v62 >= 0x7FFF) {
              v62 = 0x7FFF;
            }
            v63 = v62 + *v61;
            v64 = v60[v25];
            if (v63 >= 0x7FFF) {
              v63 = 0x7FFF;
            }
            if (v63 <= -32768) {
              LOWORD(v63) = 0x8000;
            }
            *v61 = v63;
            v65 = (v64 + 2048) >> 12;
            if (v65 <= -32768) {
              v65 = -32768;
            }
            if (v65 >= 0x7FFF) {
              v65 = 0x7FFF;
            }
            v66 = v65 + v61[(unsigned __int64)v35 / 2];
            v67 = v60[v33];
            if (v66 >= 0x7FFF) {
              v66 = 0x7FFF;
            }
            if (v66 <= -32768) {
              LOWORD(v66) = 0x8000;
            }
            v61[(unsigned __int64)v35 / 2] = v66;
            v68 = (v67 + 2048) >> 12;
            if (v68 <= -32768) {
              v68 = -32768;
            }
            if (v68 >= 0x7FFF) {
              v68 = 0x7FFF;
            }
            v69 = v68 + v61[v32];
            v70 = v60[v36];
            v60 = (_DWORD*)((char*)v60 + v31);
            if (v69 >= 0x7FFF) {
              v69 = 0x7FFF;
            }
            if (v69 <= -32768) {
              LOWORD(v69) = 0x8000;
            }
            v61[v32] = v69;
            v71 = (v70 + 2048) >> 12;
            if (v71 <= -32768) {
              v71 = -32768;
            }
            if (v71 >= 0x7FFF) {
              v71 = 0x7FFF;
            }
            v72 = v71 + *(__int16*)((char*)v61 + result);
            if (v72 >= 0x7FFF) {
              v72 = 0x7FFF;
            }
            if (v72 <= -32768) {
              LOWORD(v72) = 0x8000;
            }
            *(__int16*)((char*)v61 + result) = v72;
            v61 = (__int16*)((char*)v61 + v30);
          } while ((v24 & 0x7FFFFFFC) != v59);
        }
        else {
          v59 = 0;
        }
        if ((v24 & 3) != 0) {
          v73 = v24 & 3;
          v74 = &v279_.v280[v34 * v59];
          v75 = v35 * v59;
          do {
            v76 = *(_DWORD*)v74;
            v74 += v34;
            v77 = (v76 + 2048) >> 12;
            if (v77 <= -32768) {
              v77 = -32768;
            }
            if (v77 >= 0x7FFF) {
              v77 = 0x7FFF;
            }
            v78 = v77 + *(__int16*)((char*)v14 + v75);
            if (v78 >= 0x7FFF) {
              v78 = 0x7FFF;
            }
            if (v78 <= -32768) {
              LOWORD(v78) = 0x8000;
            }
            --v73;
            *(__int16*)((char*)v14 + v75) = v78;
            v75 += v35;
          } while (v73 != 0);
        }
      }
      ++v27;
      ++v14;
      v15 = v28;
      if (v27 == v29) {
        return result;
      }
    }
  }
  if (v24 >= 1) {
    v190 = (unsigned int)v11;
    v191 = (int)a4;
    v192 = 0;
    result = 16LL * (int)a4;
    if ((int)a4 <= 1) {
      v193 = 1;
    }
    else {
      v193 = a4;
    }
    v194 = 32LL * (unsigned int)v11;
    v195 = 4LL * (unsigned int)v11;
    v196 = 2LL * (int)a4;
    v197 = v279_.v280 + 16;
    while (1) {
      LODWORD(v198) = a7[v192];
      if ((int)a3 < 1) {
        LODWORD(v201) = a7[v192];
      }
      else {
        v199 = *(_QWORD*)(v15 + 8 * v192);
        if (a3 >= 8) {
          v202 = (int*)(v199 + 16);
          v203 = 0;
          v204 = v197;
          do {
            v203 -= 8;
            v205 = *(v202 - 4) + (__int64)(int)v198;
            *((_DWORD*)v204 - 4) = v205;
            v206 = *(v202 - 3) +
                   (__int64)(int)((unsigned __int64)(v205 * v23) >> 15);
            *((_DWORD*)v204 - 3) = v206;
            v207 = *(v202 - 2) +
                   (__int64)(int)((unsigned __int64)(v206 * v23) >> 15);
            *((_DWORD*)v204 - 2) = v207;
            v208 = *(v202 - 1) +
                   (__int64)(int)((unsigned __int64)(v207 * v23) >> 15);
            *((_DWORD*)v204 - 1) = v208;
            v209 = *v202 + (__int64)(int)((unsigned __int64)(v208 * v23) >> 15);
            *(_DWORD*)v204 = v209;
            v210 =
                v202[1] + (__int64)(int)((unsigned __int64)(v209 * v23) >> 15);
            *((_DWORD*)v204 + 1) = v210;
            v211 =
                v202[2] + (__int64)(int)((unsigned __int64)(v210 * v23) >> 15);
            *((_DWORD*)v204 + 2) = v211;
            v212 = v211 * v23;
            v213 = v202[3];
            v202 += 8;
            v214 = v213 + (int)(v212 >> 15);
            *((_DWORD*)v204 + 3) = v214;
            v204 += 32;
            v198 = (unsigned __int64)(v214 * v23) >> 15;
          } while (-(__int64)(a3 & 0x7FFFFFF8) != v203);
          v200 = -v203;
          LODWORD(v201) = (unsigned __int64)(v214 * v23) >> 15;
          if ((a3 & 7) == 0) {
            goto LABEL_221;
          }
        LABEL_219:
          v215 = (int*)(v199 + 4 * v200);
          LODWORD(v201) = v198;
          v216 = &v279_.v280[4 * v200];
          v217 = a3 & 7;
          do {
            v218 = *v215++;
            --v217;
            v219 = v218 + (int)v201;
            *(_DWORD*)v216 = v219;
            v216 += 4;
            v201 = (unsigned __int64)(v219 * v23) >> 15;
          } while (v217 != 0);
          goto LABEL_221;
        }
        v200 = 0;
        LODWORD(v201) = a7[v192];
        if ((a3 & 7) != 0) {
          goto LABEL_219;
        }
      }
    LABEL_221:
      a7[v192] = v201;
      if ((unsigned int)v24 >= 8) {
        v221 = v279_.v280;
        v220 = 0;
        v222 = v14;
        do {
          v223 = &v222[v191];
          v220 += 8;
          v224 = (*v221 + 2048) >> 12;
          if (v224 <= -32768) {
            v224 = -32768;
          }
          if (v224 >= 0x7FFF) {
            LOWORD(v224) = 0x7FFF;
          }
          *v222 = v224;
          v225 = &v221[v190];
          v222 = (__int16*)((char*)v222 + result);
          v221 = (_DWORD*)((char*)v221 + v194);
          v226 = *v225;
          v227 = &v225[(unsigned __int64)v195 / 4];
          v228 = *v227;
          v229 = &v227[(unsigned __int64)v195 / 4];
          v230 = (v226 + 2048) >> 12;
          if (v230 <= -32768) {
            v230 = -32768;
          }
          if (v230 >= 0x7FFF) {
            LOWORD(v230) = 0x7FFF;
          }
          *v223 = v230;
          v231 = v228 + 2048;
          v232 = *v229;
          v233 = &v223[(unsigned __int64)v196 / 2];
          v234 = &v229[(unsigned __int64)v195 / 4];
          v235 = v231 >> 12;
          if (v235 <= -32768) {
            v235 = -32768;
          }
          v236 = (v232 + 2048) >> 12;
          if (v235 >= 0x7FFF) {
            LOWORD(v235) = 0x7FFF;
          }
          *v233 = v235;
          v237 = &v233[(unsigned __int64)v196 / 2];
          if (v236 <= -32768) {
            v238 = -32768;
          }
          else {
            v238 = v236;
          }
          if (v238 >= 0x7FFF) {
            LOWORD(v238) = 0x7FFF;
          }
          *v237 = v238;
          v239 = *v234;
          v240 = &v237[(unsigned __int64)v196 / 2];
          v241 = &v234[(unsigned __int64)v195 / 4];
          v242 = (v239 + 2048) >> 12;
          if (v242 <= -32768) {
            v242 = -32768;
          }
          if (v242 >= 0x7FFF) {
            LOWORD(v242) = 0x7FFF;
          }
          *v240 = v242;
          v243 = *v241;
          v244 = &v240[(unsigned __int64)v196 / 2];
          v245 = &v241[(unsigned __int64)v195 / 4];
          v246 = (v243 + 2048) >> 12;
          if (v246 <= -32768) {
            v246 = -32768;
          }
          if (v246 >= 0x7FFF) {
            LOWORD(v246) = 0x7FFF;
          }
          *v244 = v246;
          v247 = &v244[(unsigned __int64)v196 / 2];
          v248 = (*v245 + 2048) >> 12;
          v249 = (v245[(unsigned __int64)v195 / 4] + 2048) >> 12;
          if (v248 <= -32768) {
            v248 = -32768;
          }
          if (v248 >= 0x7FFF) {
            LOWORD(v248) = 0x7FFF;
          }
          if (v249 <= -32768) {
            v249 = -32768;
          }
          *v247 = v248;
          if (v249 >= 0x7FFF) {
            LOWORD(v249) = 0x7FFF;
          }
          v247[(unsigned __int64)v196 / 2] = v249;
        } while ((v24 & 0x7FFFFFF8) != v220);
      }
      else {
        v220 = 0;
      }
      if ((v24 & 7) != 0) {
        v250 = v196 * v220;
        v251 = v24 & 7;
        v252 = &v279_.v280[v195 * v220];
        do {
          v253 = *(_DWORD*)v252;
          v252 += v195;
          v254 = (v253 + 2048) >> 12;
          if (v254 <= -32768) {
            v254 = -32768;
          }
          if (v254 >= 0x7FFF) {
            LOWORD(v254) = 0x7FFF;
          }
          --v251;
          *(__int16*)((char*)v14 + v250) = v254;
          v250 += v196;
        } while (v251 != 0);
      }
      ++v192;
      ++v14;
      if (v192 == v193) {
        return result;
      }
    }
  }
  if ((int)a3 >= 1) {
    v255 = 0;
    if ((int)a4 <= 1) {
      v256 = 1;
    }
    else {
      v256 = a4;
    }
    v257 = v279_.v280 + 16;
    while (1) {
      LODWORD(v258) = a7[v255];
      v259 = *(_QWORD*)(v15 + 8 * v255);
      if (a3 >= 8) {
        break;
      }
      v260 = 0;
      LODWORD(v261) = a7[v255];
      if ((a3 & 7) != 0) {
        goto LABEL_278;
      }
    LABEL_271:
      a7[v255++] = v261;
      if (v255 == v256) {
        return result;
      }
    }
    v262 = (int*)(v259 + 16);
    v263 = 0;
    v264 = v257;
    do {
      v263 -= 8;
      v265 = *(v262 - 4) + (__int64)(int)v258;
      *((_DWORD*)v264 - 4) = v265;
      v266 = *(v262 - 3) + (__int64)(int)((unsigned __int64)(v265 * v23) >> 15);
      *((_DWORD*)v264 - 3) = v266;
      v267 = *(v262 - 2) + (__int64)(int)((unsigned __int64)(v266 * v23) >> 15);
      *((_DWORD*)v264 - 2) = v267;
      v268 = *(v262 - 1) + (__int64)(int)((unsigned __int64)(v267 * v23) >> 15);
      *((_DWORD*)v264 - 1) = v268;
      v269 = *v262 + (__int64)(int)((unsigned __int64)(v268 * v23) >> 15);
      *(_DWORD*)v264 = v269;
      v270 = v262[1] + (__int64)(int)((unsigned __int64)(v269 * v23) >> 15);
      *((_DWORD*)v264 + 1) = v270;
      v271 = v262[2] + (__int64)(int)((unsigned __int64)(v270 * v23) >> 15);
      *((_DWORD*)v264 + 2) = v271;
      v272 = v271 * v23;
      v273 = v262[3];
      v262 += 8;
      result = v273 + (int)(v272 >> 15);
      *((_DWORD*)v264 + 3) = result;
      v264 += 32;
      v258 = (unsigned __int64)(result * v23) >> 15;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v263);
    v260 = -v263;
    LODWORD(v261) = (unsigned __int64)(result * v23) >> 15;
    if ((a3 & 7) == 0) {
      goto LABEL_271;
    }
  LABEL_278:
    v274 = (int*)(v259 + 4 * v260);
    LODWORD(v261) = v258;
    v275 = &v279_.v280[4 * v260];
    v276 = a3 & 7;
    do {
      v277 = *v274++;
      --v276;
      v278 = v277 + (int)v261;
      *(_DWORD*)v275 = v278;
      v275 += 4;
      v261 = (unsigned __int64)(v278 * v23) >> 15;
    } while (v276 != 0);
    goto LABEL_271;
  }
  return result;
}

__int64 opus_celt_37120(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  int* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned int v45;

  v4 = a2 - 1LL;
  v5 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  v6 = (unsigned int)v5 >> 31;
  if (v5 >= 0) {
    v7 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  }
  else {
    v7 = -v5;
  }
  if (v4 >= 1) {
    v8 = 1;
  }
  else {
    v8 = a2 - 1;
  }
  if ((((_BYTE)a2 - v8) & 1) != 0 &&
      ((v4 = a2 - 2LL, v7 >= 2) ? (v9 = 2) : (v9 = v7),
       v7 <= 2 ? (v10 = 2) : (v10 = v7),
       (v6 += *((_DWORD*)*(&MovieData_c0358 + v9) + v10),
        (v11 = *(_DWORD*)(a1 + 4 * v4)) >= 0)
           ? (v12 = *(_DWORD*)(a1 + 4 * v4))
           : (v12 = -v11),
       v7 += v12, v11 < 0)) {
    if ((unsigned int)v7 < 2) {
      v20 = v7 + 1;
    }
    else {
      v20 = 2;
    }
    v21 = (__int64)*(&MovieData_c0358 + v20);
    if (v7 + 1 > 2) {
      v22 = v7 + 1;
    }
    else {
      v22 = 2;
    }
    v6 += *(_DWORD*)(v21 + 4LL * v22);
    if (a2 < 3) {
      goto LABEL_19;
    }
  }
  else if (a2 < 3) {
    goto LABEL_19;
  }
  v23 = v4 + 2;
  v24 = a2 - v4 + 1;
  v25 = a2 - v4 + 2;
  v26 = a1 + 4 * v4 - 4;
  v27 = (int*)v26;
  do {
    if (v24 >= v7) {
      v28 = v7;
    }
    else {
      v28 = v24;
    }
    if (v24 <= v7) {
      v29 = v7;
    }
    else {
      v29 = v24;
    }
    v30 = *((_DWORD*)*(&MovieData_c0358 + v28) + v29) + v6;
    v32 = *v27;
    v27 -= 2;
    v31 = v32;
    if (v32 >= 0) {
      v33 = v31;
    }
    else {
      v33 = -v31;
    }
    v34 = v33 + v7;
    if (v31 < 0) {
      if (v25 - 1 > (unsigned int)v34) {
        v35 = v34 + 1;
      }
      else {
        v35 = v24;
      }
      v36 = (__int64)*(&MovieData_c0358 + v35);
      if (v24 <= v34 + 1) {
        v37 = v34 + 1;
      }
      else {
        v37 = v24;
      }
      v30 += *(_DWORD*)(v36 + 4LL * v37);
    }
    v38 = v24 + 1;
    v39 = *(_DWORD*)(v26 - 4);
    if (v24 + 1 < v34) {
      v40 = v24 + 1;
    }
    else {
      v40 = v34;
    }
    if (v38 > v34) {
      v41 = v24 + 1;
    }
    else {
      v41 = v34;
    }
    v6 = *((_DWORD*)*(&MovieData_c0358 + v40) + v41) + v30;
    if (v39 >= 0) {
      v42 = v39;
    }
    else {
      v42 = -v39;
    }
    v7 = v42 + v34;
    if (v39 < 0) {
      if (v25 > (unsigned int)v7) {
        v43 = v7 + 1;
      }
      else {
        v43 = v24 + 1;
      }
      v44 = (__int64)*(&MovieData_c0358 + v43);
      if (v38 <= v7 + 1) {
        v45 = v7 + 1;
      }
      else {
        v45 = v24 + 1;
      }
      v6 += *(_DWORD*)(v44 + 4LL * v45);
    }
    v23 -= 2;
    v24 += 2;
    v25 += 2LL;
    v26 = (__int64)v27;
  } while (v23 > 2);
LABEL_19:
  if (a2 >= a3) {
    v13 = a3;
  }
  else {
    v13 = a2;
  }
  if (a2 <= a3) {
    v14 = a3;
  }
  else {
    v14 = a2;
  }
  v15 = *((_DWORD*)*(&MovieData_c0358 + v13) + v14);
  if (a2 >= a3 + 1) {
    v16 = a3 + 1;
  }
  else {
    v16 = a2;
  }
  v17 = (__int64)*(&MovieData_c0358 + v16);
  if (a2 <= a3 + 1) {
    v18 = a3 + 1;
  }
  else {
    v18 = a2;
  }
  return ec_enc_uint(a4, v6, (unsigned int)(*(_DWORD*)(v17 + 4LL * v18) + v15));
}

__int64 opus_celt_372e0(_DWORD* a1, int a2, int a3, __int64 a4)
{
  unsigned int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64* v17;
  __int64 v18;
  _DWORD* v19;
  __int64* v20;
  unsigned int v21;
  unsigned int v22;
  bool v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  _UNKNOWN** v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  __int16 v42;
  __int16 v43;
  int v44;

  v5 = a3;
  if (a2 >= a3) {
    v7 = a3;
  }
  else {
    v7 = a2;
  }
  if (a2 <= a3) {
    v8 = a3;
  }
  else {
    v8 = a2;
  }
  v9 = *((_DWORD*)*(&MovieData_c0358 + v7) + v8);
  if (a2 >= a3 + 1) {
    v10 = a3 + 1;
  }
  else {
    v10 = a2;
  }
  if (a2 <= a3 + 1) {
    v11 = a3 + 1;
  }
  else {
    v11 = a2;
  }
  v12 = ec_dec_uint(
      a4, (unsigned int)(*((_DWORD*)*(&MovieData_c0358 + v10) + v11) + v9));
  if (a2 < 3) {
    v13 = 0;
  }
  else {
    v13 = 0;
    v14 = (unsigned int)a2;
    do {
      if (v14 <= (int)v5) {
        v31 = (__int64)*(&MovieData_c0358 + v14);
        v32 = *(_DWORD*)(v31 + 4LL * v5 + 4);
        if (v12 >= v32) {
          v33 = *(_DWORD*)(v31 + 4LL * v5 + 4);
        }
        else {
          v33 = 0;
        }
        v34 = v12 - v33;
        if (*(_DWORD*)(v31 + 4 * v14) <= v34) {
          v35 = (int)v5 + 1LL;
          v38 = v5;
          do {
            v37 = *(_DWORD*)(v31 + 4 * v38);
            v38 = v35 - 2;
            --v35;
          } while (v37 > v34);
        }
        else {
          v35 = v14;
          do {
            v36 = &MovieData_c0358 + v35--;
            v37 = *((_DWORD*)*(v36 - 1) + v14);
          } while (v37 > v34);
        }
        v23 = v12 >= v32;
        v15 = v5 - v35;
        v12 = v34 - v37;
        v5 = v35;
        if (v23) {
          v15 = -v15;
        }
        v15 = (__int16)v15;
        *a1 = (__int16)v15;
        v13 += v15 * v15;
      }
      else {
        v17 = (__int64*)(&MovieData_c0358 + (int)v5);
        v18 = *v17;
        v19 = (_DWORD*)v17[1];
        v20 = v17 - 1;
        v21 = *(_DWORD*)(v18 + 4 * v14);
        v22 = v19[v14];
        v23 = v12 < v21 || v12 >= v22;
        if (v23) {
          v24 = 0;
          if (v12 >= v22) {
            v25 = v22;
          }
          else {
            v25 = 0;
          }
          v26 = v12 - v25;
          do {
            v27 = *v20--;
            ++v24;
            v28 = *(_DWORD*)(v27 + 4 * v14);
            v23 = v26 >= v28;
            v29 = v26 - v28;
          } while (!v23);
          v23 = v12 >= v22;
          v5 -= v24;
          v12 = v29;
          if (v23) {
            v30 = -v24;
          }
          else {
            LOWORD(v30) = v24;
          }
          v30 = (__int16)v30;
          v13 += v30 * v30;
          *a1 = (__int16)v30;
        }
        else {
          *a1 = 0;
          v12 -= v21;
        }
      }
      ++a1;
    } while (v14-- > 3);
  }
  if (v12 > 2 * v5) {
    v39 = ~(2 * v5);
  }
  else {
    v39 = 0;
  }
  v40 = v39 + v12;
  v41 = (v40 + 1) >> 1;
  v42 = v5 - v41;
  if (v12 > 2 * v5) {
    v42 = v41 - v5;
  }
  if (v40 + 1 >= 2) {
    v43 = ((v40 + 1) & 0xFFFE) - 1;
  }
  else {
    v43 = 0;
  }
  v44 = (__int16)((v41 - (v40 - v43)) ^ (v43 - v40));
  *a1 = v42;
  a1[1] = v44;
  return (unsigned int)(v13 + v42 * v42 + v44 * v44);
}

__int64* opus_celt_39680(__int64* result, int* a2, int a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int i;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;

  v17 = *a2;
  if (*a2 != 0) {
    if (v17 >= 0) {
      v18 = *a2;
    }
    else {
      v18 = -v17;
    }
    v19 = (0x4000 - a4) * (32736 - a3);
    v20 = 1;
    v21 = v19 >> 15;
    if (v19 >= 0x8000 && v18 >= 2) {
      do {
        ++v20;
        v19 = 2 * v21 * a4;
        a3 += 2 * v21 + 2;
        v21 = v19 >> 15;
      } while (v19 >= 0x8000 && v20 < v18);
    }
    if (v19 >> 15 != 0) {
      if (v17 >= 0) {
        v30 = v21 + 1;
      }
      else {
        v30 = 0;
      }
      v29 = v30 + a3;
      a3 += v30 + v21 + 1;
    }
    else {
      v24 = (unsigned int)v17 >> 31;
      v25 = v18 - v20;
      v26 = v17 >> 31;
      v27 = v20 + v26;
      v28 = ((int)((v24 | 0x8000) - a3) >> 1) - 1;
      if (v25 >= v28) {
        v25 = v28;
      }
      *a2 = (v27 + v25) ^ v26;
      v29 = v26 + a3 + 2 * v25 + 1;
      a3 = v29 + (v29 != 0x8000);
    }
  }
  else {
    v29 = 0;
  }
  v4 = *((_DWORD*)result + 8);
  v5 = v4 >> 15;
  if (v29 != 0) {
    *((_DWORD*)result + 9) += v4 + v5 * (v29 - 0x8000);
    v6 = v5 * (a3 - v29);
    *((_DWORD*)result + 8) = v6;
    if (v6 > 0x800000) {
      return result;
    }
  }
  else {
    v6 = v4 + v5 * (a3 - 0x8000);
    *((_DWORD*)result + 8) = v6;
    if (v6 > 0x800000) {
      return result;
    }
  }
  v7 = *((_DWORD*)result + 9);
  do {
    if ((unsigned int)v7 >> 23 == 255) {
      ++*((_DWORD*)result + 10);
    }
    else {
      v9 = *((_DWORD*)result + 11);
      if ((v9 & 0x80000000) == 0) {
        v10 = *((unsigned int*)result + 7);
        if ((unsigned int)(*((_DWORD*)result + 3) + v10) >=
            *((_DWORD*)result + 2)) {
          v12 = -1;
        }
        else {
          v11 = *result;
          v12 = 0;
          *((_DWORD*)result + 7) = v10 + 1;
          *(_BYTE*)(v11 + v10) = v9 + (v7 < 0);
        }
        *((_DWORD*)result + 12) |= v12;
      }
      for (i = *((_DWORD*)result + 10); i != 0; *((_DWORD*)result + 12) = -1) {
        while (1) {
          v16 = *((unsigned int*)result + 7);
          if ((unsigned int)(*((_DWORD*)result + 3) + v16) >=
              *((_DWORD*)result + 2)) {
            break;
          }
          v14 = *result;
          *((_DWORD*)result + 7) = v16 + 1;
          *(_BYTE*)(v14 + v16) = (v7 < 0) - 1;
          v15 = *((_DWORD*)result + 12);
          i = *((_DWORD*)result + 10) - 1;
          *((_DWORD*)result + 10) = i;
          *((_DWORD*)result + 12) = v15;
          if (i == 0) {
            goto LABEL_40;
          }
        }
        *((_DWORD*)result + 10) = --i;
      }
    LABEL_40:
      *((_DWORD*)result + 11) = (unsigned __int8)((unsigned int)v7 >> 23);
      v6 = *((_DWORD*)result + 8);
      v7 = *((_DWORD*)result + 9);
    }
    v8 = *((_DWORD*)result + 6);
    v7 = (v7 & 0x7FFFFF) << 8;
    v6 <<= 8;
    *((_DWORD*)result + 8) = v6;
    *((_DWORD*)result + 9) = v7;
    *((_DWORD*)result + 6) = v8 + 8;
  } while (v6 < 0x800001);
  return result;
}

#pragma GCC visibility pop
