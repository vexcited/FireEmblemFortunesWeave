#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_cos_norm(_QWORD);
__int64 celt_inner_prod_neon(_QWORD, _QWORD, _QWORD);
__int64 celt_rcp(_QWORD);
__int64 celt_sqrt(_QWORD);
extern _DWORD SdkData_c1d910[3];
extern char SdkData_c1d7a4[25];
extern int* SdkData_e877c0;
__int64 op_pvq_search_c(__int64 result, int a2, int a3, __int64 a4, __int64 a5,
                        int a6);
__int64 vq_2e6d80(__int64 result, int a2, int a3, int a4, int a5, int a6);
__int64 stereo_itheta(__int64 a1, __int64 a2, int a3, unsigned int a4);

__int64 op_pvq_search_c(__int64 result, int a2, int a3, __int64 a4, __int64 a5,
                        int a6)
{
  int v6;
  int v7;
  __int64 v8;
  int v9;
  signed int v10;
  unsigned int v11;
  char v12;
  bool v13;
  char v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  char v20;
  char v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  signed int v28;
  unsigned int v29;
  char v30;
  char v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  signed int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;

  if (a2 < 1) {
    if (a2 < a3) {
      v46 = 0;
      if (a6 <= 1) {
        v47 = 1;
      }
      else {
        v47 = a6;
      }
      do {
        LODWORD(v48) = a2;
        if ((((_BYTE)a3 - (_BYTE)a2) & 7) != 0) {
          v49 = ((_BYTE)a3 - (_BYTE)a2) & 7;
          v48 = a2;
          do {
            --v49;
            v50 = v48 + *(int*)(result + 8) * (__int64)v46;
            ++v48;
            *(_WORD*)(a5 + 2 * v50) = -14336;
          } while (v49 != 0);
        }
        if ((unsigned int)(a2 - a3) <= 0xFFFFFFF8) {
          v51 = 0;
          do {
            *(_WORD*)(a5 + 2 * ((int)v48 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 1 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 2 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 3 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            v52 = (int)v48 + 4 + v51 + *(int*)(result + 8) * (__int64)v46;
            v53 = v48 + v51;
            v51 += 8;
            *(_WORD*)(a5 + 2 * v52) = -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 5)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 6)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 7)) =
                -14336;
          } while (a3 - (_DWORD)v48 != (_DWORD)v51);
        }
        ++v46;
      } while (v46 != v47);
    }
  }
  else {
    v6 = 0;
    if (a6 <= 1) {
      v7 = 1;
    }
    else {
      v7 = a6;
    }
    do {
      if (a2 == 1) {
        v8 = 0;
      }
      else {
        v8 = 0;
        do {
          v27 = v8 + v6 * *(_DWORD*)(result + 8);
          v28 = *(_DWORD*)(a4 + 4LL * v27);
          if (v28 != 0) {
            v29 = __clz(v28) ^ 0x1F;
            v30 = v29 - 15;
            v13 = v29 <= 0xF;
            v31 = 15 - v29;
            v32 = v29 << 10;
            v33 = v28 >> v30;
            v34 = v28 << v31;
            if (!v13) {
              v34 = v33;
            }
            v35 =
                v32 +
                (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                          (((v34
                                                                                             << 16) +
                                                                                            0x40000000) >>
                                                                                           16)) >>
                                                                           16) +
                                                                          2545) *
                                                           (((v34 << 16) +
                                                             0x40000000) >>
                                                            15) -
                                                       341901312) >>
                                                      16) *
                                                     (((v34 << 16) +
                                                       0x40000000) >>
                                                      16)) >>
                                      15) +
                                     15746) *
                      (((v34 << 16) + 0x40000000) >> 15) -
                  445186048) >>
                 20) -
                13312;
          }
          else {
            LOWORD(v35) = -32767;
          }
          *(_WORD*)(a5 + 2LL * v27) = v35 - (SdkData_c1d7a4[v8] << 6);
          v36 = 2LL * ((int)v8 + v6 * *(_DWORD*)(result + 8));
          *(_WORD*)(a5 + v36) += 2048;
          v37 = v8 + v6 * *(_DWORD*)(result + 8) + 1;
          v38 = *(_DWORD*)(a4 + 4LL * v37);
          if (v38 != 0) {
            v19 = __clz(v38) ^ 0x1F;
            v20 = v19 - 15;
            v13 = v19 <= 0xF;
            v21 = 15 - v19;
            v22 = v19 << 10;
            v23 = v38 >> v20;
            v24 = v38 << v21;
            if (!v13) {
              v24 = v23;
            }
            v25 =
                v22 +
                (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                          (((v24
                                                                                             << 16) +
                                                                                            0x40000000) >>
                                                                                           16)) >>
                                                                           16) +
                                                                          2545) *
                                                           (((v24 << 16) +
                                                             0x40000000) >>
                                                            15) -
                                                       341901312) >>
                                                      16) *
                                                     (((v24 << 16) +
                                                       0x40000000) >>
                                                      16)) >>
                                      15) +
                                     15746) *
                      (((v24 << 16) + 0x40000000) >> 15) -
                  445186048) >>
                 20) -
                13312;
          }
          else {
            LOWORD(v25) = -32767;
          }
          *(_WORD*)(a5 + 2LL * v37) = v25 - (SdkData_c1d7a4[v8 + 1] << 6);
          v26 = v8 + v6 * *(_DWORD*)(result + 8);
          v8 += 2;
          *(_WORD*)(a5 + 2LL * (v26 + 1)) += 2048;
        } while ((a2 & 0x7FFFFFFE) != v8);
      }
      if ((a2 & 1) != 0) {
        v9 = v8 + *(_DWORD*)(result + 8) * v6;
        v10 = *(_DWORD*)(a4 + 4LL * v9);
        if (v10 != 0) {
          v11 = __clz(v10) ^ 0x1F;
          v12 = v11 - 15;
          v13 = v11 <= 0xF;
          v14 = 15 - v11;
          v15 = v11 << 10;
          v16 = v10 >> v12;
          v17 = v10 << v14;
          if (!v13) {
            v17 = v16;
          }
          v18 =
              v15 +
              (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                        (((v17
                                                                                           << 16) +
                                                                                          0x40000000) >>
                                                                                         16)) >>
                                                                         16) +
                                                                        2545) *
                                                         (((v17 << 16) +
                                                           0x40000000) >>
                                                          15) -
                                                     341901312) >>
                                                    16) *
                                                   (((v17 << 16) +
                                                     0x40000000) >>
                                                    16)) >>
                                    15) +
                                   15746) *
                    (((v17 << 16) + 0x40000000) >> 15) -
                445186048) >>
               20) -
              13312;
        }
        else {
          LOWORD(v18) = -32767;
        }
        *(_WORD*)(a5 + 2LL * v9) = v18 - (SdkData_c1d7a4[v8] << 6);
        v39 = 2LL * ((int)v8 + *(_DWORD*)(result + 8) * v6);
        *(_WORD*)(a5 + v39) += 2048;
      }
      if (a2 < a3) {
        LODWORD(v40) = a2;
        if ((((_BYTE)a3 - (_BYTE)a2) & 7) != 0) {
          v40 = a2;
          v41 = ((_BYTE)a3 - (_BYTE)a2) & 7;
          do {
            --v41;
            v42 = v40 + *(int*)(result + 8) * (__int64)v6;
            ++v40;
            *(_WORD*)(a5 + 2 * v42) = -14336;
          } while (v41 != 0);
        }
        if ((unsigned int)(a2 - a3) <= 0xFFFFFFF8) {
          v43 = 0;
          do {
            *(_WORD*)(a5 + 2 * ((int)v40 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 1 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 2 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 3 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            v44 = (int)v40 + 4 + v43 + *(int*)(result + 8) * (__int64)v6;
            v45 = v40 + v43;
            v43 += 8;
            *(_WORD*)(a5 + 2 * v44) = -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 5)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 6)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 7)) =
                -14336;
          } while (a3 - (_DWORD)v40 != (_DWORD)v43);
        }
      }
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 vq_2e6d80(__int64 result, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int16 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  char v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  char v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  char v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  _WORD* v45;
  unsigned int v46;
  _WORD* v47;
  unsigned int v48;
  _WORD* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int16* v65;
  int v66;
  int v67;
  int v68;
  __int16* v69;
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  __int16* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  __int16* v107;
  int v108;
  __int16* v109;
  __int16* v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  __int16* v130;
  int v131;
  int v132;
  int v133;
  int v134;
  unsigned int v135;
  unsigned int v136;
  __int16* v137;
  int v138;
  __int16* v139;
  __int16* v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  unsigned int v157;
  __int64 v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int16* v162;
  int v163;
  __int16* v164;
  __int16* v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  __int16* v185;
  int v186;
  int v187;
  int v188;
  int v189;
  __int64 v190;
  int v191;
  __int16* v192;
  __int16* v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  _WORD* v210;
  unsigned int v211;
  _WORD* v212;
  unsigned int v213;
  _WORD* v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  __int16* v230;
  int v231;
  int v232;
  int v233;
  __int16* v234;
  unsigned int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  __int16* v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  unsigned int v272;
  __int64 v273;
  __int64 v274;
  _WORD* v275;
  unsigned int v276;
  _WORD* v277;
  unsigned int v278;
  _WORD* v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int v294;
  __int16* v295;
  int v296;
  int v297;
  int v298;
  __int16* v299;
  unsigned int v300;
  int v301;
  int v302;
  int v303;
  unsigned int v304;
  __int16* v305;
  int v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  unsigned int v336;
  unsigned int v337;

  if (a2 > 2 * a5 && a6 != 0) {
    v9 = result;
    v10 = (a2 << 16 >> 1) - (__int16)a2;
    v11 = a2 + SdkData_c1d910[a6 - 1] * a5;
    v12 = (v10 >> 16) * ((unsigned int)celt_rcp(v11) >> 16);
    v13 =
        (((unsigned int)(unsigned __int16)celt_rcp(v11) * (v10 >> 16)) >> 15) +
        2 * v12;
    v14 = (__int16)(v13 + ((((int)celt_rcp(v11) >> 16) *
                            (unsigned int)(unsigned __int16)v10) >>
                           15));
    v15 = (unsigned int)(v14 * v14) >> 16;
    v16 = celt_cos_norm(v15);
    result = celt_cos_norm(v15 ^ 0x7FFF);
    if (a2 >= 8 * a4) {
      v17 = 0;
      v18 = a4;
      do {
        v19 = v17 + 2;
        ++v17;
        v20 = (a4 >> 2) + v18 * v19;
        v18 += a4;
      } while (v20 < a2);
    }
    else {
      v17 = 0;
    }
    if ((unsigned int)a4 >= 0x101) {
      LODWORD(v21) = a2 / (unsigned int)a4;
      if (a4 < 1) {
        return result;
      }
      goto LABEL_13;
    }
    v22 = __clz(a4 & -a4);
    v21 = ((unsigned int)SdkData_e877c0[(unsigned int)a4 >> (-v22 & 31)] *
           (unsigned __int64)((unsigned int)a2 >> ~v22)) >>
          32;
    if (a2 - a4 * (int)v21 >= (unsigned int)a4) {
      LODWORD(v21) = v21 + 1;
    }
    if (a4 >= 1) {
    LABEL_13:
      v23 = -v16;
      v24 = (unsigned int)(v21 - 3);
      v25 = (__int16)v16;
      v26 = (unsigned int)a4;
      v27 = (__int16)result;
      v28 = v21 - 2;
      v29 = v21 - v17;
      v30 = v17;
      v31 = 2 * v17;
      v32 = 2LL * (int)v21;
      v33 = v21 - 1;
      v34 = (__int16)-(__int16)result;
      v35 = 2 * v24;
      result = (unsigned int)(v21 + ~(2 * v17));
      if ((a3 & 0x80000000) == 0) {
        if (v17 != 0) {
          v36 = v21 - v31;
          v37 = v9 + v35;
          v38 = v33 - v17;
          v39 = v33 & 7;
          v40 = 0;
          v41 = v33 & 0xFFFFFFF8;
          v42 = v37 + 2;
          v43 = v36 & 7;
          v44 = v30;
          while (1) {
            v45 = (_WORD*)(v9 + 2 * v40 * (int)v21);
            if ((int)v21 >= 2) {
              LOWORD(v46) = *v45;
              if (v28 >= 7) {
                v48 = v41;
                v49 = (_WORD*)(v9 + 2 * v40 * (int)v21);
                v47 = v49;
                do {
                  v50 = (__int16)v49[1];
                  v48 -= 8;
                  v51 = (__int16)((v50 * v25 + (__int16)v46 * v34 + 0x4000) >>
                                  15);
                  *v49 =
                      (unsigned int)(v50 * v27 + (__int16)v46 * v25 + 0x4000) >>
                      15;
                  v52 = (__int16)v49[2];
                  v53 = (__int16)((v52 * v25 + v51 * v34 + 0x4000) >> 15);
                  v49[1] = (unsigned int)(v52 * v27 + v51 * v25 + 0x4000) >> 15;
                  v54 = (__int16)v49[3];
                  v55 = (__int16)((v54 * v25 + v53 * v34 + 0x4000) >> 15);
                  v49[2] = (unsigned int)(v54 * v27 + v53 * v25 + 0x4000) >> 15;
                  v56 = (__int16)v49[4];
                  v57 = (__int16)((v56 * v25 + v55 * v34 + 0x4000) >> 15);
                  v49[3] = (unsigned int)(v56 * v27 + v55 * v25 + 0x4000) >> 15;
                  v58 = (__int16)v49[5];
                  v59 = (__int16)((v58 * v25 + v57 * v34 + 0x4000) >> 15);
                  v49[4] = (unsigned int)(v58 * v27 + v57 * v25 + 0x4000) >> 15;
                  v60 = (__int16)v49[6];
                  v61 = (__int16)((v60 * v25 + v59 * v34 + 0x4000) >> 15);
                  v49[5] = (unsigned int)(v60 * v27 + v59 * v25 + 0x4000) >> 15;
                  v62 = (__int16)v49[7];
                  v63 = (__int16)v47[8];
                  v47 += 8;
                  v64 = (__int16)((v62 * v25 + v61 * v34 + 0x4000) >> 15);
                  v49[6] = (unsigned int)(v62 * v27 + v61 * v25 + 0x4000) >> 15;
                  v46 = (unsigned int)(v63 * v25 + v64 * v34 + 0x4000) >> 15;
                  *v47 = v46;
                  v49[7] = (unsigned int)(v63 * v27 + v64 * v25 + 0x4000) >> 15;
                  v49 = v47;
                } while (v48 != 0);
              }
              else {
                v47 = (_WORD*)(v9 + 2 * v40 * (int)v21);
              }
              if (v39 != 0) {
                v65 = v47 + 1;
                v66 = v39;
                do {
                  v67 = *v65;
                  v68 = (__int16)v46;
                  --v66;
                  v46 =
                      (unsigned int)(v67 * v25 + (__int16)v46 * v34 + 0x4000) >>
                      15;
                  *v65 = v46;
                  *(v65++ - 1) =
                      (unsigned int)(v67 * v27 + v68 * v25 + 0x4000) >> 15;
                } while (v66 != 0);
              }
            }
            if ((v24 & 0x80000000) == 0) {
              v69 = &v45[v24];
              LOWORD(v70) = *(_WORD*)(v42 + v32 * v40);
              if ((v28 & 7) == 0) {
                v72 = v21 - 3;
                v75 = &v45[v24];
                if ((unsigned int)v24 < 7) {
                  goto LABEL_34;
                }
              LABEL_32:
                v76 = v72 + 1;
                do {
                  v77 = *v75;
                  v76 -= 8;
                  v78 = (__int16)v70 * v25 + v77 * v34;
                  v79 = (__int16)v70 * v27 + v77 * v25;
                  v80 = *(v75 - 1);
                  v81 = (__int16)((v79 + 0x4000) >> 15);
                  v75[1] = (unsigned int)(v78 + 0x4000) >> 15;
                  v82 = v81 * v25 + v80 * v34;
                  v83 = v81 * v27 + v80 * v25;
                  v84 = *(v75 - 2);
                  v85 = (__int16)((v83 + 0x4000) >> 15);
                  *v75 = (unsigned int)(v82 + 0x4000) >> 15;
                  v86 = v85 * v25 + v84 * v34;
                  v87 = v85 * v27 + v84 * v25;
                  v88 = *(v75 - 3);
                  v89 = (__int16)((v87 + 0x4000) >> 15);
                  *(v75 - 1) = (unsigned int)(v86 + 0x4000) >> 15;
                  v90 = v89 * v25 + v88 * v34;
                  v91 = v89 * v27 + v88 * v25;
                  v92 = *(v75 - 4);
                  v93 = (__int16)((v91 + 0x4000) >> 15);
                  *(v75 - 2) = (unsigned int)(v90 + 0x4000) >> 15;
                  v94 = v93 * v25 + v92 * v34;
                  v95 = v93 * v27 + v92 * v25;
                  v96 = *(v75 - 5);
                  v97 = (__int16)((v95 + 0x4000) >> 15);
                  *(v75 - 3) = (unsigned int)(v94 + 0x4000) >> 15;
                  v98 = v97 * v25 + v96 * v34;
                  v99 = v97 * v27 + v96 * v25;
                  v100 = *(v75 - 6);
                  v101 = (__int16)((v99 + 0x4000) >> 15);
                  *(v75 - 4) = (unsigned int)(v98 + 0x4000) >> 15;
                  v102 = v101 * v25 + v100 * v34;
                  v103 = v101 * v27 + v100 * v25;
                  v104 = *(v75 - 7);
                  v105 = (__int16)((v103 + 0x4000) >> 15);
                  *(v75 - 5) = (unsigned int)(v102 + 0x4000) >> 15;
                  v106 = (unsigned int)(v105 * v25 + v104 * v34 + 0x4000) >> 15;
                  v70 = (unsigned int)(v105 * v27 + v104 * v25 + 0x4000) >> 15;
                  *(v75 - 6) = v106;
                  *(v75 - 7) = v70;
                  v75 -= 8;
                } while (v76 != 0);
                goto LABEL_34;
              }
              v71 = v28 & 7;
              v72 = v24;
              do {
                v73 = *v69;
                --v72;
                --v71;
                v74 = (unsigned int)((__int16)v70 * v25 + v73 * v34 + 0x4000) >>
                      15;
                v70 = (unsigned int)((__int16)v70 * v27 + v73 * v25 + 0x4000) >>
                      15;
                v75 = v69 - 1;
                v69[1] = v74;
                *v69-- = v70;
              } while (v71 != 0);
              if ((unsigned int)v24 >= 7) {
                goto LABEL_32;
              }
            }
          LABEL_34:
            if (v29 >= 1) {
              if (v38 >= 7) {
                v108 = v29 & 0x7FFFFFF8;
                v109 = (__int16*)(v9 + 2 * v40 * (int)v21);
                do {
                  v110 = &v109[v44];
                  v111 = *v109;
                  v108 -= 8;
                  v112 = v109[v44];
                  *v109 =
                      (unsigned int)(v112 * v25 + v111 * v27 + 0x4000) >> 15;
                  *v110 = (unsigned int)(v112 * v27 + v111 * (__int16)v23 +
                                         0x4000) >>
                          15;
                  v113 = v109[v44 + 1];
                  v114 = v109[1];
                  v109[1] =
                      (unsigned int)(v113 * v25 + v114 * v27 + 0x4000) >> 15;
                  v110[1] = (unsigned int)(v113 * v27 + v114 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v115 = v109[v44 + 2];
                  v116 = v109[2];
                  v109[2] =
                      (unsigned int)(v115 * v25 + v116 * v27 + 0x4000) >> 15;
                  v110[2] = (unsigned int)(v115 * v27 + v116 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v117 = v109[v44 + 3];
                  v118 = v109[3];
                  v109[3] =
                      (unsigned int)(v117 * v25 + v118 * v27 + 0x4000) >> 15;
                  v110[3] = (unsigned int)(v117 * v27 + v118 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v119 = v109[v44 + 4];
                  v120 = v109[4];
                  v109[4] =
                      (unsigned int)(v119 * v25 + v120 * v27 + 0x4000) >> 15;
                  v110[4] = (unsigned int)(v119 * v27 + v120 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v121 = v109[v44 + 5];
                  v122 = v109[5];
                  v109[5] =
                      (unsigned int)(v121 * v25 + v122 * v27 + 0x4000) >> 15;
                  v110[5] = (unsigned int)(v121 * v27 + v122 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v123 = v109[v44 + 6];
                  v124 = v109[6];
                  v109[6] =
                      (unsigned int)(v123 * v25 + v124 * v27 + 0x4000) >> 15;
                  v110[6] = (unsigned int)(v123 * v27 + v124 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v125 = v109[v44 + 7];
                  v126 = v109[7];
                  v110[7] = (unsigned int)(v125 * v27 + v126 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v107 = v109 + 8;
                  v109[7] =
                      (unsigned int)(v125 * v25 + v126 * v27 + 0x4000) >> 15;
                  v109 += 8;
                } while (v108 != 0);
              }
              else {
                v107 = (__int16*)(v9 + 2 * v40 * (int)v21);
              }
              if ((v29 & 7) != 0) {
                v127 = v29 & 7;
                do {
                  v128 = v107[v44];
                  v129 = *v107;
                  --v127;
                  v107[v44] = (unsigned int)(v128 * v27 + v129 * (__int16)v23 +
                                             0x4000) >>
                              15;
                  *v107++ =
                      (unsigned int)(v128 * v25 + v129 * v27 + 0x4000) >> 15;
                } while (v127 != 0);
              }
            }
            if ((result & 0x80000000) != 0) {
              goto LABEL_16;
            }
            v130 = &v45[result];
            if (v43 != 0) {
              v131 = v43;
              v132 = result;
              do {
                v133 = v130[v44];
                v134 = *v130;
                --v132;
                --v131;
                v135 =
                    (unsigned int)(v133 * v27 + v134 * (__int16)v23 + 0x4000) >>
                    15;
                v136 = (unsigned int)(v133 * v25 + v134 * v27 + 0x4000) >> 15;
                v137 = v130 - 1;
                v130[v44] = v135;
                *v130-- = v136;
              } while (v131 != 0);
              if ((unsigned int)result < 7) {
                goto LABEL_16;
              }
            LABEL_49:
              v138 = v132 + 1;
              v139 = v137 - 3;
              do {
                v140 = &v139[v44];
                v141 = v139[3];
                v138 -= 8;
                v142 = v139[v44 + 3];
                v139[3] =
                    (unsigned int)(v142 * v25 + v141 * v27 + 0x4000) >> 15;
                v140[3] =
                    (unsigned int)(v142 * v27 + v141 * (__int16)v23 + 0x4000) >>
                    15;
                v143 = v139[v44 + 2];
                v144 = v139[2];
                v139[2] =
                    (unsigned int)(v143 * v25 + v144 * v27 + 0x4000) >> 15;
                v140[2] =
                    (unsigned int)(v143 * v27 + v144 * (__int16)v23 + 0x4000) >>
                    15;
                v145 = v139[v44 + 1];
                v146 = v139[1];
                v139[1] =
                    (unsigned int)(v145 * v25 + v146 * v27 + 0x4000) >> 15;
                v140[1] =
                    (unsigned int)(v145 * v27 + v146 * (__int16)v23 + 0x4000) >>
                    15;
                v147 = v139[v44];
                v148 = *v139;
                *v139 = (unsigned int)(v147 * v25 + v148 * v27 + 0x4000) >> 15;
                *v140 =
                    (unsigned int)(v147 * v27 + v148 * (__int16)v23 + 0x4000) >>
                    15;
                v149 = v139[v44 - 1];
                v150 = *(v139 - 1);
                *(v139 - 1) =
                    (unsigned int)(v149 * v25 + v150 * v27 + 0x4000) >> 15;
                *(v140 - 1) =
                    (unsigned int)(v149 * v27 + v150 * (__int16)v23 + 0x4000) >>
                    15;
                v151 = v139[v44 - 2];
                v152 = *(v139 - 2);
                *(v139 - 2) =
                    (unsigned int)(v151 * v25 + v152 * v27 + 0x4000) >> 15;
                *(v140 - 2) =
                    (unsigned int)(v151 * v27 + v152 * (__int16)v23 + 0x4000) >>
                    15;
                v153 = v139[v44 - 3];
                v154 = *(v139 - 3);
                *(v139 - 3) =
                    (unsigned int)(v153 * v25 + v154 * v27 + 0x4000) >> 15;
                *(v140 - 3) =
                    (unsigned int)(v153 * v27 + v154 * (__int16)v23 + 0x4000) >>
                    15;
                v155 = v139[v44 - 4];
                v156 = *(v139 - 4);
                *(v140 - 4) =
                    (unsigned int)(v155 * v27 + v156 * (__int16)v23 + 0x4000) >>
                    15;
                *(v139 - 4) =
                    (unsigned int)(v155 * v25 + v156 * v27 + 0x4000) >> 15;
                v139 -= 8;
              } while (v138 != 0);
              goto LABEL_16;
            }
            v132 = result;
            v137 = v130;
            if ((unsigned int)result >= 7) {
              goto LABEL_49;
            }
          LABEL_16:
            if (++v40 == v26) {
              return result;
            }
          }
        }
        result = v33 & 7;
        v272 = v33 & 0xFFFFFFF8;
        v273 = 0;
        v274 = v9 + v35 + 2;
        while (1) {
          v275 = (_WORD*)(v9 + 2 * v273 * (int)v21);
          if ((int)v21 >= 2) {
            LOWORD(v276) = *v275;
            if (v28 >= 7) {
              v278 = v272;
              v279 = (_WORD*)(v9 + 2 * v273 * (int)v21);
              v277 = v279;
              do {
                v280 = (__int16)v279[1];
                v278 -= 8;
                v281 = (__int16)((v280 * v25 + (__int16)v276 * v34 + 0x4000) >>
                                 15);
                *v279 =
                    (unsigned int)(v280 * v27 + (__int16)v276 * v25 + 0x4000) >>
                    15;
                v282 = (__int16)v279[2];
                v283 = (__int16)((v282 * v25 + v281 * v34 + 0x4000) >> 15);
                v279[1] =
                    (unsigned int)(v282 * v27 + v281 * v25 + 0x4000) >> 15;
                v284 = (__int16)v279[3];
                v285 = (__int16)((v284 * v25 + v283 * v34 + 0x4000) >> 15);
                v279[2] =
                    (unsigned int)(v284 * v27 + v283 * v25 + 0x4000) >> 15;
                v286 = (__int16)v279[4];
                v287 = (__int16)((v286 * v25 + v285 * v34 + 0x4000) >> 15);
                v279[3] =
                    (unsigned int)(v286 * v27 + v285 * v25 + 0x4000) >> 15;
                v288 = (__int16)v279[5];
                v289 = (__int16)((v288 * v25 + v287 * v34 + 0x4000) >> 15);
                v279[4] =
                    (unsigned int)(v288 * v27 + v287 * v25 + 0x4000) >> 15;
                v290 = (__int16)v279[6];
                v291 = (__int16)((v290 * v25 + v289 * v34 + 0x4000) >> 15);
                v279[5] =
                    (unsigned int)(v290 * v27 + v289 * v25 + 0x4000) >> 15;
                v292 = (__int16)v279[7];
                v293 = (__int16)v277[8];
                v277 += 8;
                v294 = (__int16)((v292 * v25 + v291 * v34 + 0x4000) >> 15);
                v279[6] =
                    (unsigned int)(v292 * v27 + v291 * v25 + 0x4000) >> 15;
                v276 = (unsigned int)(v293 * v25 + v294 * v34 + 0x4000) >> 15;
                *v277 = v276;
                v279[7] =
                    (unsigned int)(v293 * v27 + v294 * v25 + 0x4000) >> 15;
                v279 = v277;
              } while (v278 != 0);
            }
            else {
              v277 = (_WORD*)(v9 + 2 * v273 * (int)v21);
            }
            if ((_DWORD)result != 0) {
              v295 = v277 + 1;
              v296 = result;
              do {
                v297 = *v295;
                v298 = (__int16)v276;
                --v296;
                v276 =
                    (unsigned int)(v297 * v25 + (__int16)v276 * v34 + 0x4000) >>
                    15;
                *v295 = v276;
                *(v295++ - 1) =
                    (unsigned int)(v297 * v27 + v298 * v25 + 0x4000) >> 15;
              } while (v296 != 0);
            }
          }
          if ((v24 & 0x80000000) == 0) {
            v299 = &v275[v24];
            LOWORD(v300) = *(_WORD*)(v274 + v32 * v273);
            if ((v28 & 7) != 0) {
              break;
            }
            v302 = v21 - 3;
            v305 = &v275[v24];
            if ((unsigned int)v24 >= 7) {
              goto LABEL_107;
            }
          }
        LABEL_91:
          if (++v273 == v26) {
            return result;
          }
        }
        v301 = v28 & 7;
        v302 = v24;
        do {
          v303 = *v299;
          --v302;
          --v301;
          v304 =
              (unsigned int)((__int16)v300 * v25 + v303 * v34 + 0x4000) >> 15;
          v300 =
              (unsigned int)((__int16)v300 * v27 + v303 * v25 + 0x4000) >> 15;
          v305 = v299 - 1;
          v299[1] = v304;
          *v299-- = v300;
        } while (v301 != 0);
        if ((unsigned int)v24 < 7) {
          goto LABEL_91;
        }
      LABEL_107:
        v306 = v302 + 1;
        do {
          v307 = *v305;
          v306 -= 8;
          v308 = (__int16)v300 * v25 + v307 * v34;
          v309 = (__int16)v300 * v27 + v307 * v25;
          v310 = *(v305 - 1);
          v311 = (__int16)((v309 + 0x4000) >> 15);
          v305[1] = (unsigned int)(v308 + 0x4000) >> 15;
          v312 = v311 * v25 + v310 * v34;
          v313 = v311 * v27 + v310 * v25;
          v314 = *(v305 - 2);
          v315 = (__int16)((v313 + 0x4000) >> 15);
          *v305 = (unsigned int)(v312 + 0x4000) >> 15;
          v316 = v315 * v25 + v314 * v34;
          v317 = v315 * v27 + v314 * v25;
          v318 = *(v305 - 3);
          v319 = (__int16)((v317 + 0x4000) >> 15);
          *(v305 - 1) = (unsigned int)(v316 + 0x4000) >> 15;
          v320 = v319 * v25 + v318 * v34;
          v321 = v319 * v27 + v318 * v25;
          v322 = *(v305 - 4);
          v323 = (__int16)((v321 + 0x4000) >> 15);
          *(v305 - 2) = (unsigned int)(v320 + 0x4000) >> 15;
          v324 = v323 * v25 + v322 * v34;
          v325 = v323 * v27 + v322 * v25;
          v326 = *(v305 - 5);
          v327 = (__int16)((v325 + 0x4000) >> 15);
          *(v305 - 3) = (unsigned int)(v324 + 0x4000) >> 15;
          v328 = v327 * v25 + v326 * v34;
          v329 = v327 * v27 + v326 * v25;
          v330 = *(v305 - 6);
          v331 = (__int16)((v329 + 0x4000) >> 15);
          *(v305 - 4) = (unsigned int)(v328 + 0x4000) >> 15;
          v332 = v331 * v25 + v330 * v34;
          v333 = v331 * v27 + v330 * v25;
          v334 = *(v305 - 7);
          v335 = (__int16)((v333 + 0x4000) >> 15);
          *(v305 - 5) = (unsigned int)(v332 + 0x4000) >> 15;
          v336 = (unsigned int)(v335 * v25 + v334 * v34 + 0x4000) >> 15;
          v300 = (unsigned int)(v335 * v27 + v334 * v25 + 0x4000) >> 15;
          *(v305 - 6) = v336;
          *(v305 - 7) = v300;
          v305 -= 8;
        } while (v306 != 0);
        goto LABEL_91;
      }
      v157 = v33 - v17;
      v158 = 0;
      v159 = v33 & 7;
      v337 = v33 & 0xFFFFFFF8;
      v160 = v17;
      do {
        v161 = v158 * (int)v21;
        if (v17 != 0) {
          if (v29 >= 1) {
            if (v157 >= 7) {
              v163 = v29 & 0x7FFFFFF8;
              v164 = (__int16*)(v9 + 2 * v161);
              do {
                v165 = &v164[v160];
                v166 = *v164;
                v163 -= 8;
                v167 = v164[v17];
                *v164 =
                    (unsigned int)(v167 * (__int16)v23 + v166 * v27 + 0x4000) >>
                    15;
                *v165 = (unsigned int)(v167 * v27 + v166 * v25 + 0x4000) >> 15;
                v168 = v164[v160 + 1];
                v169 = v164[1];
                v164[1] =
                    (unsigned int)(v168 * (__int16)v23 + v169 * v27 + 0x4000) >>
                    15;
                v165[1] =
                    (unsigned int)(v168 * v27 + v169 * v25 + 0x4000) >> 15;
                v170 = v164[v160 + 2];
                v171 = v164[2];
                v164[2] =
                    (unsigned int)(v170 * (__int16)v23 + v171 * v27 + 0x4000) >>
                    15;
                v165[2] =
                    (unsigned int)(v170 * v27 + v171 * v25 + 0x4000) >> 15;
                v172 = v164[v160 + 3];
                v173 = v164[3];
                v164[3] =
                    (unsigned int)(v172 * (__int16)v23 + v173 * v27 + 0x4000) >>
                    15;
                v165[3] =
                    (unsigned int)(v172 * v27 + v173 * v25 + 0x4000) >> 15;
                v174 = v164[v160 + 4];
                v175 = v164[4];
                v164[4] =
                    (unsigned int)(v174 * (__int16)v23 + v175 * v27 + 0x4000) >>
                    15;
                v165[4] =
                    (unsigned int)(v174 * v27 + v175 * v25 + 0x4000) >> 15;
                v176 = v164[v160 + 5];
                v177 = v164[5];
                v164[5] =
                    (unsigned int)(v176 * (__int16)v23 + v177 * v27 + 0x4000) >>
                    15;
                v165[5] =
                    (unsigned int)(v176 * v27 + v177 * v25 + 0x4000) >> 15;
                v178 = v164[v160 + 6];
                v179 = v164[6];
                v164[6] =
                    (unsigned int)(v178 * (__int16)v23 + v179 * v27 + 0x4000) >>
                    15;
                v165[6] =
                    (unsigned int)(v178 * v27 + v179 * v25 + 0x4000) >> 15;
                v180 = v164[v160 + 7];
                v181 = v164[7];
                v165[7] =
                    (unsigned int)(v180 * v27 + v181 * v25 + 0x4000) >> 15;
                v162 = v164 + 8;
                v164[7] =
                    (unsigned int)(v180 * (__int16)v23 + v181 * v27 + 0x4000) >>
                    15;
                v164 += 8;
              } while (v163 != 0);
            }
            else {
              v162 = (__int16*)(v9 + 2 * v161);
            }
            if ((v29 & 7) != 0) {
              v182 = v29 & 7;
              do {
                v183 = v162[v17];
                v184 = *v162;
                --v182;
                v162[v17] =
                    (unsigned int)(v183 * v27 + v184 * v25 + 0x4000) >> 15;
                *v162++ =
                    (unsigned int)(v183 * (__int16)v23 + v184 * v27 + 0x4000) >>
                    15;
              } while (v182 != 0);
            }
          }
          if ((result & 0x80000000) == 0) {
            v185 = (__int16*)(v9 + 2 * v161 + 2 * result);
            if ((((_BYTE)v21 - v31) & 7) != 0) {
              v186 = ((_BYTE)v21 - v31) & 7;
              v187 = v21 + ~(2 * v17);
              do {
                v188 = v185[v17];
                v189 = *v185;
                --v187;
                --v186;
                v185[v17] =
                    (unsigned int)(v188 * v27 + v189 * v25 + 0x4000) >> 15;
                v190 = (__int64)(v185 - 1);
                *v185-- =
                    (unsigned int)(v188 * (__int16)v23 + v189 * v27 + 0x4000) >>
                    15;
              } while (v186 != 0);
              if ((unsigned int)result < 7) {
                goto LABEL_72;
              }
            LABEL_70:
              v191 = v187 + 1;
              v192 = (__int16*)(v190 - 6);
              do {
                v193 = &v192[v160];
                v194 = v192[3];
                v191 -= 8;
                v195 = v192[v160 + 3];
                v192[3] =
                    (unsigned int)(v195 * (__int16)v23 + v194 * v27 + 0x4000) >>
                    15;
                v193[3] =
                    (unsigned int)(v195 * v27 + v194 * v25 + 0x4000) >> 15;
                v196 = v192[v160 + 2];
                v197 = v192[2];
                v192[2] =
                    (unsigned int)(v196 * (__int16)v23 + v197 * v27 + 0x4000) >>
                    15;
                v193[2] =
                    (unsigned int)(v196 * v27 + v197 * v25 + 0x4000) >> 15;
                v198 = v192[v160 + 1];
                v199 = v192[1];
                v192[1] =
                    (unsigned int)(v198 * (__int16)v23 + v199 * v27 + 0x4000) >>
                    15;
                v193[1] =
                    (unsigned int)(v198 * v27 + v199 * v25 + 0x4000) >> 15;
                v200 = v192[v17];
                v201 = *v192;
                *v192 =
                    (unsigned int)(v200 * (__int16)v23 + v201 * v27 + 0x4000) >>
                    15;
                *v193 = (unsigned int)(v200 * v27 + v201 * v25 + 0x4000) >> 15;
                v202 = v192[v160 - 1];
                v203 = *(v192 - 1);
                *(v192 - 1) =
                    (unsigned int)(v202 * (__int16)v23 + v203 * v27 + 0x4000) >>
                    15;
                *(v193 - 1) =
                    (unsigned int)(v202 * v27 + v203 * v25 + 0x4000) >> 15;
                v204 = v192[v160 - 2];
                v205 = *(v192 - 2);
                *(v192 - 2) =
                    (unsigned int)(v204 * (__int16)v23 + v205 * v27 + 0x4000) >>
                    15;
                *(v193 - 2) =
                    (unsigned int)(v204 * v27 + v205 * v25 + 0x4000) >> 15;
                v206 = v192[v160 - 3];
                v207 = *(v192 - 3);
                *(v192 - 3) =
                    (unsigned int)(v206 * (__int16)v23 + v207 * v27 + 0x4000) >>
                    15;
                *(v193 - 3) =
                    (unsigned int)(v206 * v27 + v207 * v25 + 0x4000) >> 15;
                v208 = v192[v160 - 4];
                v209 = *(v192 - 4);
                *(v192 - 4) =
                    (unsigned int)(v208 * (__int16)v23 + v209 * v27 + 0x4000) >>
                    15;
                v192 -= 8;
                *(v193 - 4) =
                    (unsigned int)(v208 * v27 + v209 * v25 + 0x4000) >> 15;
              } while (v191 != 0);
              goto LABEL_72;
            }
            v187 = v21 + ~(2 * v17);
            v190 = v9 + 2 * v161 + 2 * result;
            if ((unsigned int)result >= 7) {
              goto LABEL_70;
            }
          }
        }
      LABEL_72:
        v210 = (_WORD*)(v9 + 2 * v161);
        if ((int)v21 >= 2) {
          LOWORD(v211) = *v210;
          if (v28 >= 7) {
            v213 = v337;
            v214 = v210;
            v212 = v210;
            do {
              v215 = (__int16)v214[1];
              v213 -= 8;
              v216 =
                  (__int16)((v215 * v25 + (__int16)v211 * v27 + 0x4000) >> 15);
              *v214 =
                  (unsigned int)(v215 * v34 + (__int16)v211 * v25 + 0x4000) >>
                  15;
              v217 = (__int16)v214[2];
              v218 = (__int16)((v217 * v25 + v216 * v27 + 0x4000) >> 15);
              v214[1] = (unsigned int)(v217 * v34 + v216 * v25 + 0x4000) >> 15;
              v219 = (__int16)v214[3];
              v220 = (__int16)((v219 * v25 + v218 * v27 + 0x4000) >> 15);
              v214[2] = (unsigned int)(v219 * v34 + v218 * v25 + 0x4000) >> 15;
              v221 = (__int16)v214[4];
              v222 = (__int16)((v221 * v25 + v220 * v27 + 0x4000) >> 15);
              v214[3] = (unsigned int)(v221 * v34 + v220 * v25 + 0x4000) >> 15;
              v223 = (__int16)v214[5];
              v224 = (__int16)((v223 * v25 + v222 * v27 + 0x4000) >> 15);
              v214[4] = (unsigned int)(v223 * v34 + v222 * v25 + 0x4000) >> 15;
              v225 = (__int16)v214[6];
              v226 = (__int16)((v225 * v25 + v224 * v27 + 0x4000) >> 15);
              v214[5] = (unsigned int)(v225 * v34 + v224 * v25 + 0x4000) >> 15;
              v227 = (__int16)v214[7];
              v228 = (__int16)((v227 * v25 + v226 * v27 + 0x4000) >> 15);
              v214[6] = (unsigned int)(v227 * v34 + v226 * v25 + 0x4000) >> 15;
              v229 = (__int16)v212[8];
              v212 += 8;
              v211 = (unsigned int)(v229 * v25 + v228 * v27 + 0x4000) >> 15;
              *v212 = v211;
              v214[7] = (unsigned int)(v229 * v34 + v228 * v25 + 0x4000) >> 15;
              v214 = v212;
            } while (v213 != 0);
          }
          else {
            v212 = v210;
          }
          if (v159 != 0) {
            v230 = v212 + 1;
            v231 = v159;
            do {
              v232 = *v230;
              v233 = (__int16)v211;
              --v231;
              v211 =
                  (unsigned int)(v232 * v25 + (__int16)v211 * v27 + 0x4000) >>
                  15;
              *v230 = v211;
              *(v230++ - 1) =
                  (unsigned int)(v232 * v34 + v233 * v25 + 0x4000) >> 15;
            } while (v231 != 0);
          }
        }
        if ((v24 & 0x80000000) != 0) {
          goto LABEL_53;
        }
        v234 = &v210[v24];
        LOWORD(v235) = *(_WORD*)(v9 + v35 + 2 + v32 * v158);
        if ((v28 & 7) != 0) {
          v236 = v28 & 7;
          v237 = v24;
          do {
            v238 = *v234;
            --v237;
            --v236;
            v239 = (__int16)v235 * v25 + v238 * v27;
            v235 =
                (unsigned int)((__int16)v235 * v34 + v238 * v25 + 0x4000) >> 15;
            v234[1] = (unsigned int)(v239 + 0x4000) >> 15;
            v240 = v234 - 1;
            *v234-- = v235;
          } while (v236 != 0);
          if ((unsigned int)v24 < 7) {
            goto LABEL_53;
          }
        LABEL_87:
          v241 = v237 + 1;
          do {
            v242 = *v240;
            v243 = (__int16)v235;
            v241 -= 8;
            v244 = (__int16)v235 * v25 + v242 * v27;
            v245 = v243 * v34 + v242 * v25;
            v246 = *(v240 - 1);
            v247 = (__int16)((v245 + 0x4000) >> 15);
            v240[1] = (unsigned int)(v244 + 0x4000) >> 15;
            v248 = v247 * v25 + v246 * v27;
            v249 = v247 * v34 + v246 * v25;
            v250 = *(v240 - 2);
            v251 = (__int16)((v249 + 0x4000) >> 15);
            *v240 = (unsigned int)(v248 + 0x4000) >> 15;
            v252 = v251 * v25 + v250 * v27;
            v253 = v251 * v34 + v250 * v25;
            v254 = *(v240 - 3);
            v255 = (__int16)((v253 + 0x4000) >> 15);
            *(v240 - 1) = (unsigned int)(v252 + 0x4000) >> 15;
            v256 = v255 * v25 + v254 * v27;
            v257 = v255 * v34 + v254 * v25;
            v258 = *(v240 - 4);
            v259 = (__int16)((v257 + 0x4000) >> 15);
            *(v240 - 2) = (unsigned int)(v256 + 0x4000) >> 15;
            v260 = v259 * v25 + v258 * v27;
            v261 = v259 * v34 + v258 * v25;
            v262 = *(v240 - 5);
            v263 = (__int16)((v261 + 0x4000) >> 15);
            *(v240 - 3) = (unsigned int)(v260 + 0x4000) >> 15;
            v264 = v263 * v25 + v262 * v27;
            v265 = v263 * v34 + v262 * v25;
            v266 = *(v240 - 6);
            v267 = (__int16)((v265 + 0x4000) >> 15);
            *(v240 - 4) = (unsigned int)(v264 + 0x4000) >> 15;
            v268 = v267 * v25 + v266 * v27;
            v269 = v267 * v34 + v266 * v25;
            v270 = *(v240 - 7);
            v271 = (__int16)((v269 + 0x4000) >> 15);
            *(v240 - 5) = (unsigned int)(v268 + 0x4000) >> 15;
            *(v240 - 6) =
                (unsigned int)(v271 * v25 + v270 * v27 + 0x4000) >> 15;
            v235 = (unsigned int)(v271 * v34 + v270 * v25 + 0x4000) >> 15;
            *(v240 - 7) = v235;
            v240 -= 8;
          } while (v241 != 0);
          goto LABEL_53;
        }
        v237 = v21 - 3;
        v240 = &v210[v24];
        if ((unsigned int)v24 >= 7) {
          goto LABEL_87;
        }
      LABEL_53:
        ++v158;
      } while (v158 != v26);
    }
  }
  return result;
}

__int64 stereo_itheta(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int16* v10;
  __int16* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int16* v29;
  __int16* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int16 v35;
  __int16 v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  char v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;

  if (a3 == 0) {
    v7 = celt_inner_prod_neon(a1, a1, a4) + 1;
    v6 = celt_inner_prod_neon(a2, a2, a4) + 1;
    goto LABEL_13;
  }
  if ((int)a4 < 1) {
    v7 = 1;
    v6 = 1;
    goto LABEL_13;
  }
  v4 = a4 & 3;
  if (a4 < 4) {
    v5 = 0;
    v6 = 1;
    v7 = 1;
    if ((a4 & 3) == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v10 = (__int16*)(a1 + 4);
  v11 = (__int16*)(a2 + 4);
  v6 = 1;
  v12 = 0;
  v7 = 1;
  do {
    v12 -= 4;
    v13 = *(v10 - 2) >> 1;
    v14 = *(v11 - 2) >> 1;
    v15 = *(v11 - 1) >> 1;
    v16 = v14 + v13;
    v17 = v13 - v14;
    v18 = v7 + v16 * v16;
    v19 = *(v10 - 1) >> 1;
    v20 = v6 + v17 * v17 + (v19 - v15) * (v19 - v15);
    v21 = v18 + (v15 + v19) * (v15 + v19);
    v22 = *v11 >> 1;
    v23 = *v10 >> 1;
    v24 = v22 + v23;
    v25 = v23 - v22;
    v26 = v11[1];
    v11 += 4;
    v27 = v20 + v25 * v25;
    v28 = v10[1];
    v10 += 4;
    v26 >>= 1;
    v28 >>= 1;
    v7 = v21 + v24 * v24 + (v26 + v28) * (v26 + v28);
    v6 = v27 + (v28 - v26) * (v28 - v26);
  } while (-(__int64)(a4 & 0x7FFFFFFC) != v12);
  v5 = -v12;
  if ((a4 & 3) != 0) {
  LABEL_11:
    v29 = (__int16*)(a2 + 2 * v5);
    v30 = (__int16*)(a1 + 2 * v5);
    do {
      v32 = *v30++;
      v31 = v32;
      v33 = *v29++;
      --v4;
      v31 >>= 1;
      v34 = v33 >> 1;
      v7 += (v34 + v31) * (v34 + v31);
      v6 += (v31 - v34) * (v31 - v34);
    } while (v4 != 0);
  }
LABEL_13:
  v35 = celt_sqrt(v7);
  v36 = celt_sqrt(v6);
  v37 = v36;
  if (v36 >= v35) {
    v45 = v35 >> 1;
    v46 = v45 * ((int)celt_rcp((unsigned int)v36) >> 16);
    v47 = (((unsigned __int16)celt_rcp(v37) * v45) >> 15) + 2 * v46;
    v48 = v47 + ((((int)celt_rcp(v37) >> 16) * ((v35 & 1) << 15)) >> 15);
    if (v48 >= 0x7FFF) {
      LOWORD(v48) = 0x7FFF;
    }
    v44 = 25736 - ((__int16)((((((((9872 * (__int16)v48 - 782663680) >> 16) *
                                      2 * (__int16)v48 -
                                  1343488) >>
                                 16) *
                                    2 * (__int16)v48 +
                                2147450880) >>
                               16) *
                                  (__int16)v48 +
                              0x4000) >>
                             15) >>
                   1);
  }
  else {
    v38 = v35;
    v39 = v36 >> 1;
    v40 = v36;
    v41 = v39 * ((int)celt_rcp(v38) >> 16);
    v42 = (((unsigned __int16)celt_rcp(v38) * v39) >> 15) + 2 * v41;
    v43 = v42 + ((((int)celt_rcp(v38) >> 16) * ((v40 & 1) << 15)) >> 15);
    if (v43 >= 0x7FFF) {
      LOWORD(v43) = 0x7FFF;
    }
    v44 =
        (__int16)((unsigned int)(((((((9872 * (__int16)v43 - 782663680) >> 16) *
                                         2 * (__int16)v43 -
                                     1343488) >>
                                    16) *
                                       2 * (__int16)v43 +
                                   2147450880) >>
                                  16) *
                                     (__int16)v43 +
                                 0x4000) >>
                  15) >>
        1;
  }
  return (unsigned int)((20861 * (__int16)v44) >> 15);
}

#pragma GCC visibility pop
