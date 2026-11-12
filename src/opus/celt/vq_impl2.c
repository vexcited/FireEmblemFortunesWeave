#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_3fca0(__int16*, int*, int, int);
__int64 celt_cos_norm(_QWORD);
__int64 celt_rcp(_QWORD);
__int64 celt_rsqrt_norm(__int16);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_celt_37120(__int64, int, int, __int64*);
__int64 opus_celt_372e0(_DWORD*, int, int, __int64*);
extern _DWORD MovieData_a5d60[3];
extern char MovieData_a5bf4[25];
__int64 op_pvq_search_c(__int64 result, int a2, int a3, __int64 a4, __int64 a5,
                        int a6);
__int64 vq_3e6a0(__int64 result, int a2, int a3, int a4, int a5, int a6);
__int64 alg_quant(__int16* a1, int a2, int a3, int a4, int a5, __int64* a6,
                  __int16 a7, int a8);
__int64 alg_unquant(__int64 a1, int a2, int a3, int a4, int a5, __int64* a6,
                    __int16 a7);

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
          *(_WORD*)(a5 + 2LL * v27) = v35 - (MovieData_a5bf4[v8] << 6);
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
          *(_WORD*)(a5 + 2LL * v37) = v25 - (MovieData_a5bf4[v8 + 1] << 6);
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
        *(_WORD*)(a5 + 2LL * v9) = v18 - (MovieData_a5bf4[v8] << 6);
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

__int64 vq_3e6a0(__int64 result, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int16 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  char v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  _WORD* v41;
  unsigned int v42;
  _WORD* v43;
  unsigned int v44;
  _WORD* v45;
  int v46;
  int v47;
  int v48;
  int v49;
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
  __int16* v61;
  int v62;
  int v63;
  int v64;
  __int16* v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  __int16* v71;
  int v72;
  int v73;
  int v74;
  int v75;
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
  unsigned int v102;
  __int16* v103;
  int v104;
  __int16* v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  _WORD* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int16* v126;
  int v127;
  int v128;
  int v129;
  int v130;
  unsigned int v131;
  unsigned int v132;
  __int16* v133;
  int v134;
  __int16* v135;
  __int16* v136;
  int v137;
  int v138;
  int v139;
  int v140;
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
  unsigned int v153;
  int v154;
  unsigned int v155;
  __int64 v156;
  __int64 v157;
  __int16* v158;
  int v159;
  __int16* v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
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
  _WORD* v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  __int16* v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  __int64 v191;
  int v192;
  __int16* v193;
  __int16* v194;
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
  int v210;
  _WORD* v211;
  unsigned int v212;
  _WORD* v213;
  unsigned int v214;
  _WORD* v215;
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
  int v230;
  __int16* v231;
  int v232;
  int v233;
  int v234;
  __int16* v235;
  unsigned int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  __int16* v243;
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
  int v272;
  int v273;
  unsigned int v274;
  int v275;
  unsigned int v276;
  __int64 v277;
  _WORD* v278;
  unsigned int v279;
  _WORD* v280;
  unsigned int v281;
  _WORD* v282;
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
  int v295;
  int v296;
  int v297;
  __int16* v298;
  int v299;
  int v300;
  int v301;
  __int16* v302;
  unsigned int v303;
  int v304;
  int v305;
  int v306;
  unsigned int v307;
  __int16* v308;
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
  int v336;
  int v337;
  int v338;
  unsigned int v339;

  if (a2 > 2 * a5 && a6 != 0) {
    v9 = result;
    v10 = (a2 << 16 >> 1) - (__int16)a2;
    v11 = a2 + MovieData_a5d60[a6 - 1] * a5;
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
    if (a4 >= 1) {
      v21 = a2 / (unsigned int)a4;
      v22 = v16;
      v23 = (__int16)result;
      v24 = v17;
      v25 = 2 * v17;
      v26 = (unsigned int)a4;
      v27 = (__int16)-v16;
      v28 = (__int16)-(__int16)result;
      v29 = (unsigned int)(v21 - 3);
      v30 = v21 - 2;
      v31 = v21 - v17;
      v32 = (unsigned int)(v21 + ~(2 * v17));
      v33 = v21;
      v34 = 2LL * v21;
      v35 = v21 - 1;
      v36 = 2 * v29;
      if ((a3 & 0x80000000) == 0) {
        if (v17 != 0) {
          v37 = v9 + v36;
          result = 0;
          v38 = v17 - v21;
          v39 = v24;
          v40 = v37 + 2;
          while (1) {
            v41 = (_WORD*)(v9 + 2 * result * v21);
            if (v21 >= 2) {
              LOWORD(v42) = *v41;
              if (v30 >= 7) {
                v44 = v35 & 0xFFFFFFF8;
                v45 = (_WORD*)(v9 + 2 * result * v21);
                v43 = v45;
                do {
                  v46 = (__int16)v45[1];
                  v44 -= 8;
                  v47 = (__int16)((v46 * v22 + (__int16)v42 * v28 + 0x4000) >>
                                  15);
                  *v45 =
                      (unsigned int)(v46 * v23 + (__int16)v42 * v22 + 0x4000) >>
                      15;
                  v48 = (__int16)v45[2];
                  v49 = (__int16)((v48 * v22 + v47 * v28 + 0x4000) >> 15);
                  v45[1] = (unsigned int)(v48 * v23 + v47 * v22 + 0x4000) >> 15;
                  v50 = (__int16)v45[3];
                  v51 = (__int16)((v50 * v22 + v49 * v28 + 0x4000) >> 15);
                  v45[2] = (unsigned int)(v50 * v23 + v49 * v22 + 0x4000) >> 15;
                  v52 = (__int16)v45[4];
                  v53 = (__int16)((v52 * v22 + v51 * v28 + 0x4000) >> 15);
                  v45[3] = (unsigned int)(v52 * v23 + v51 * v22 + 0x4000) >> 15;
                  v54 = (__int16)v45[5];
                  v55 = (__int16)((v54 * v22 + v53 * v28 + 0x4000) >> 15);
                  v45[4] = (unsigned int)(v54 * v23 + v53 * v22 + 0x4000) >> 15;
                  v56 = (__int16)v45[6];
                  v57 = (__int16)((v56 * v22 + v55 * v28 + 0x4000) >> 15);
                  v45[5] = (unsigned int)(v56 * v23 + v55 * v22 + 0x4000) >> 15;
                  v58 = (__int16)v45[7];
                  v59 = (__int16)v43[8];
                  v43 += 8;
                  v60 = (__int16)((v58 * v22 + v57 * v28 + 0x4000) >> 15);
                  v45[6] = (unsigned int)(v58 * v23 + v57 * v22 + 0x4000) >> 15;
                  v42 = (unsigned int)(v59 * v22 + v60 * v28 + 0x4000) >> 15;
                  *v43 = v42;
                  v45[7] = (unsigned int)(v59 * v23 + v60 * v22 + 0x4000) >> 15;
                  v45 = v43;
                } while (v44 != 0);
              }
              else {
                v43 = (_WORD*)(v9 + 2 * result * v21);
              }
              if ((v35 & 7) != 0) {
                v61 = v43 + 1;
                v62 = v35 & 7;
                do {
                  v63 = *v61;
                  v64 = (__int16)v42;
                  --v62;
                  v42 =
                      (unsigned int)(v63 * v22 + (__int16)v42 * v28 + 0x4000) >>
                      15;
                  *v61 = v42;
                  *(v61++ - 1) =
                      (unsigned int)(v63 * v23 + v64 * v22 + 0x4000) >> 15;
                } while (v62 != 0);
              }
            }
            if ((v29 & 0x80000000) == 0) {
              v65 = &v41[v29];
              LOWORD(v66) = *(_WORD*)(v40 + v34 * result);
              if ((v30 & 7) == 0) {
                v68 = v21 - 3;
                v71 = &v41[v29];
                if ((unsigned int)v29 < 7) {
                  goto LABEL_29;
                }
              LABEL_27:
                v72 = v68 + 1;
                do {
                  v73 = *v71;
                  v72 -= 8;
                  v74 = (__int16)v66 * v22 + v73 * v28;
                  v75 = (__int16)v66 * v23 + v73 * v22;
                  v76 = *(v71 - 1);
                  v77 = (__int16)((v75 + 0x4000) >> 15);
                  v71[1] = (unsigned int)(v74 + 0x4000) >> 15;
                  v78 = v77 * v22 + v76 * v28;
                  v79 = v77 * v23 + v76 * v22;
                  v80 = *(v71 - 2);
                  v81 = (__int16)((v79 + 0x4000) >> 15);
                  *v71 = (unsigned int)(v78 + 0x4000) >> 15;
                  v82 = v81 * v22 + v80 * v28;
                  v83 = v81 * v23 + v80 * v22;
                  v84 = *(v71 - 3);
                  v85 = (__int16)((v83 + 0x4000) >> 15);
                  *(v71 - 1) = (unsigned int)(v82 + 0x4000) >> 15;
                  v86 = v85 * v22 + v84 * v28;
                  v87 = v85 * v23 + v84 * v22;
                  v88 = *(v71 - 4);
                  v89 = (__int16)((v87 + 0x4000) >> 15);
                  *(v71 - 2) = (unsigned int)(v86 + 0x4000) >> 15;
                  v90 = v89 * v22 + v88 * v28;
                  v91 = v89 * v23 + v88 * v22;
                  v92 = *(v71 - 5);
                  v93 = (__int16)((v91 + 0x4000) >> 15);
                  *(v71 - 3) = (unsigned int)(v90 + 0x4000) >> 15;
                  v94 = v93 * v22 + v92 * v28;
                  v95 = v93 * v23 + v92 * v22;
                  v96 = *(v71 - 6);
                  v97 = (__int16)((v95 + 0x4000) >> 15);
                  *(v71 - 4) = (unsigned int)(v94 + 0x4000) >> 15;
                  v98 = v97 * v22 + v96 * v28;
                  v99 = v97 * v23 + v96 * v22;
                  v100 = *(v71 - 7);
                  v101 = (__int16)((v99 + 0x4000) >> 15);
                  *(v71 - 5) = (unsigned int)(v98 + 0x4000) >> 15;
                  v102 = (unsigned int)(v101 * v22 + v100 * v28 + 0x4000) >> 15;
                  v66 = (unsigned int)(v101 * v23 + v100 * v22 + 0x4000) >> 15;
                  *(v71 - 6) = v102;
                  *(v71 - 7) = v66;
                  v71 -= 8;
                } while (v72 != 0);
                goto LABEL_29;
              }
              v67 = v30 & 7;
              v68 = v29;
              do {
                v69 = *v65;
                --v68;
                --v67;
                v70 = (unsigned int)((__int16)v66 * v22 + v69 * v28 + 0x4000) >>
                      15;
                v66 = (unsigned int)((__int16)v66 * v23 + v69 * v22 + 0x4000) >>
                      15;
                v71 = v65 - 1;
                v65[1] = v70;
                *v65-- = v66;
              } while (v67 != 0);
              if ((unsigned int)v29 >= 7) {
                goto LABEL_27;
              }
            }
          LABEL_29:
            if (v31 >= 1) {
              if (v38 <= 0xFFFFFFF8) {
                v104 = v31 & 0x7FFFFFF8;
                v105 = (__int16*)(v9 + 2 * result * v21);
                do {
                  v106 = v105[v39];
                  v107 = *v105;
                  v104 -= 8;
                  v105[v39] =
                      (unsigned int)(v106 * v23 + v107 * v27 + 0x4000) >> 15;
                  *v105 =
                      (unsigned int)(v106 * v22 + v107 * v23 + 0x4000) >> 15;
                  v108 = v105[1];
                  v109 = v105[v39 + 1];
                  v105[v39 + 1] =
                      (unsigned int)(v109 * v23 + v108 * v27 + 0x4000) >> 15;
                  v105[1] =
                      (unsigned int)(v109 * v22 + v108 * v23 + 0x4000) >> 15;
                  v110 = v105[2];
                  v111 = v105[v39 + 2];
                  v105[v39 + 2] =
                      (unsigned int)(v111 * v23 + v110 * v27 + 0x4000) >> 15;
                  v105[2] =
                      (unsigned int)(v111 * v22 + v110 * v23 + 0x4000) >> 15;
                  v112 = v105[3];
                  v113 = v105[v39 + 3];
                  v105[v39 + 3] =
                      (unsigned int)(v113 * v23 + v112 * v27 + 0x4000) >> 15;
                  v105[3] =
                      (unsigned int)(v113 * v22 + v112 * v23 + 0x4000) >> 15;
                  v114 = v105[4];
                  v115 = v105[v39 + 4];
                  v105[v39 + 4] =
                      (unsigned int)(v115 * v23 + v114 * v27 + 0x4000) >> 15;
                  v105[4] =
                      (unsigned int)(v115 * v22 + v114 * v23 + 0x4000) >> 15;
                  v116 = v105[5];
                  v117 = v105[v39 + 5];
                  v105[v39 + 5] =
                      (unsigned int)(v117 * v23 + v116 * v27 + 0x4000) >> 15;
                  v105[5] =
                      (unsigned int)(v117 * v22 + v116 * v23 + 0x4000) >> 15;
                  v118 = v105[6];
                  v119 = v105[v39 + 6];
                  v105[v39 + 6] =
                      (unsigned int)(v119 * v23 + v118 * v27 + 0x4000) >> 15;
                  v105[6] =
                      (unsigned int)(v119 * v22 + v118 * v23 + 0x4000) >> 15;
                  v121 = v105[7];
                  v120 = v105 + 7;
                  v122 = (__int16)v120[v39];
                  v103 = v120 + 1;
                  v120[v39] =
                      (unsigned int)(v122 * v23 + v121 * v27 + 0x4000) >> 15;
                  *v120 =
                      (unsigned int)(v122 * v22 + v121 * v23 + 0x4000) >> 15;
                  v105 = v120 + 1;
                } while (v104 != 0);
              }
              else {
                v103 = (__int16*)(v9 + 2 * result * v21);
              }
              if ((v31 & 7) != 0) {
                v123 = v31 & 7;
                do {
                  v124 = v103[v39];
                  v125 = *v103;
                  --v123;
                  v103[v39] =
                      (unsigned int)(v124 * v23 + v125 * v27 + 0x4000) >> 15;
                  *v103++ =
                      (unsigned int)(v124 * v22 + v125 * v23 + 0x4000) >> 15;
                } while (v123 != 0);
              }
            }
            if ((v32 & 0x80000000) != 0) {
              goto LABEL_11;
            }
            v126 = &v41[v32];
            if ((((_BYTE)v21 - v25) & 7) != 0) {
              v127 = ((_BYTE)v21 - v25) & 7;
              v128 = v32;
              do {
                v129 = v126[v39];
                v130 = *v126;
                --v128;
                --v127;
                v131 = (unsigned int)(v129 * v23 + v130 * v27 + 0x4000) >> 15;
                v132 = (unsigned int)(v129 * v22 + v130 * v23 + 0x4000) >> 15;
                v133 = v126 - 1;
                v126[v39] = v131;
                *v126-- = v132;
              } while (v127 != 0);
              if ((unsigned int)v32 < 7) {
                goto LABEL_11;
              }
            LABEL_44:
              v134 = v128 + 1;
              v135 = v133 - 3;
              do {
                v136 = &v135[v39];
                v137 = v135[3];
                v134 -= 8;
                v138 = v135[v39 + 3];
                v135[3] =
                    (unsigned int)(v138 * v22 + v137 * v23 + 0x4000) >> 15;
                v136[3] =
                    (unsigned int)(v138 * v23 + v137 * v27 + 0x4000) >> 15;
                v139 = v135[v39 + 2];
                v140 = v135[2];
                v135[2] =
                    (unsigned int)(v139 * v22 + v140 * v23 + 0x4000) >> 15;
                v136[2] =
                    (unsigned int)(v139 * v23 + v140 * v27 + 0x4000) >> 15;
                v141 = v135[v39 + 1];
                v142 = v135[1];
                v135[1] =
                    (unsigned int)(v141 * v22 + v142 * v23 + 0x4000) >> 15;
                v136[1] =
                    (unsigned int)(v141 * v23 + v142 * v27 + 0x4000) >> 15;
                v143 = v135[v39];
                v144 = *v135;
                *v135 = (unsigned int)(v143 * v22 + v144 * v23 + 0x4000) >> 15;
                *v136 = (unsigned int)(v143 * v23 + v144 * v27 + 0x4000) >> 15;
                v145 = v135[v39 - 1];
                v146 = *(v135 - 1);
                *(v135 - 1) =
                    (unsigned int)(v145 * v22 + v146 * v23 + 0x4000) >> 15;
                *(v136 - 1) =
                    (unsigned int)(v145 * v23 + v146 * v27 + 0x4000) >> 15;
                v147 = v135[v39 - 2];
                v148 = *(v135 - 2);
                *(v135 - 2) =
                    (unsigned int)(v147 * v22 + v148 * v23 + 0x4000) >> 15;
                *(v136 - 2) =
                    (unsigned int)(v147 * v23 + v148 * v27 + 0x4000) >> 15;
                v149 = v135[v39 - 3];
                v150 = *(v135 - 3);
                *(v135 - 3) =
                    (unsigned int)(v149 * v22 + v150 * v23 + 0x4000) >> 15;
                *(v136 - 3) =
                    (unsigned int)(v149 * v23 + v150 * v27 + 0x4000) >> 15;
                v151 = v135[v39 - 4];
                v152 = *(v135 - 4);
                *(v136 - 4) =
                    (unsigned int)(v151 * v23 + v152 * v27 + 0x4000) >> 15;
                *(v135 - 4) =
                    (unsigned int)(v151 * v22 + v152 * v23 + 0x4000) >> 15;
                v135 -= 8;
              } while (v134 != 0);
              goto LABEL_11;
            }
            v128 = v32;
            v133 = v126;
            if ((unsigned int)v32 >= 7) {
              goto LABEL_44;
            }
          LABEL_11:
            if (++result == v26) {
              return result;
            }
          }
        }
        v275 = v35 & 7;
        v276 = v35 & 0xFFFFFFF8;
        v277 = 0;
        result = v9 + v36 + 2;
        while (1) {
          v278 = (_WORD*)(v9 + 2 * v277 * v33);
          if ((int)v33 >= 2) {
            LOWORD(v279) = *v278;
            if (v30 >= 7) {
              v281 = v276;
              v282 = (_WORD*)(v9 + 2 * v277 * v33);
              v280 = v282;
              do {
                v283 = (__int16)v282[1];
                v281 -= 8;
                v284 = (__int16)((v283 * v16 + (__int16)v279 * v28 + 0x4000) >>
                                 15);
                *v282 =
                    (unsigned int)(v283 * v23 + (__int16)v279 * v16 + 0x4000) >>
                    15;
                v285 = (__int16)v282[2];
                v286 = (__int16)((v285 * v16 + v284 * v28 + 0x4000) >> 15);
                v282[1] =
                    (unsigned int)(v285 * v23 + v284 * v16 + 0x4000) >> 15;
                v287 = (__int16)v282[3];
                v288 = (__int16)((v287 * v16 + v286 * v28 + 0x4000) >> 15);
                v282[2] =
                    (unsigned int)(v287 * v23 + v286 * v16 + 0x4000) >> 15;
                v289 = (__int16)v282[4];
                v290 = (__int16)((v289 * v16 + v288 * v28 + 0x4000) >> 15);
                v282[3] =
                    (unsigned int)(v289 * v23 + v288 * v16 + 0x4000) >> 15;
                v291 = (__int16)v282[5];
                v292 = (__int16)((v291 * v16 + v290 * v28 + 0x4000) >> 15);
                v282[4] =
                    (unsigned int)(v291 * v23 + v290 * v16 + 0x4000) >> 15;
                v293 = (__int16)v282[6];
                v294 = (__int16)((v293 * v16 + v292 * v28 + 0x4000) >> 15);
                v282[5] =
                    (unsigned int)(v293 * v23 + v292 * v16 + 0x4000) >> 15;
                v295 = (__int16)v282[7];
                v296 = (__int16)v280[8];
                v280 += 8;
                v297 = (__int16)((v295 * v16 + v294 * v28 + 0x4000) >> 15);
                v282[6] =
                    (unsigned int)(v295 * v23 + v294 * v16 + 0x4000) >> 15;
                v279 = (unsigned int)(v296 * v16 + v297 * v28 + 0x4000) >> 15;
                *v280 = v279;
                v282[7] =
                    (unsigned int)(v296 * v23 + v297 * v16 + 0x4000) >> 15;
                v282 = v280;
              } while (v281 != 0);
            }
            else {
              v280 = (_WORD*)(v9 + 2 * v277 * v33);
            }
            if (v275 != 0) {
              v298 = v280 + 1;
              v299 = v275;
              do {
                v300 = *v298;
                v301 = (__int16)v279;
                --v299;
                v279 =
                    (unsigned int)(v300 * v16 + (__int16)v279 * v28 + 0x4000) >>
                    15;
                *v298 = v279;
                *(v298++ - 1) =
                    (unsigned int)(v300 * v23 + v301 * v16 + 0x4000) >> 15;
              } while (v299 != 0);
            }
          }
          if ((v29 & 0x80000000) == 0) {
            v302 = &v278[v29];
            LOWORD(v303) = *(_WORD*)(result + v34 * v277);
            if ((v30 & 7) != 0) {
              break;
            }
            v305 = v29;
            v308 = &v278[v29];
            if ((unsigned int)v29 >= 7) {
              goto LABEL_102;
            }
          }
        LABEL_86:
          if (++v277 == v26) {
            return result;
          }
        }
        v304 = v30 & 7;
        v305 = v29;
        do {
          v306 = *v302;
          --v305;
          --v304;
          v307 =
              (unsigned int)((__int16)v303 * v16 + v306 * v28 + 0x4000) >> 15;
          v303 =
              (unsigned int)((__int16)v303 * v23 + v306 * v16 + 0x4000) >> 15;
          v308 = v302 - 1;
          v302[1] = v307;
          *v302-- = v303;
        } while (v304 != 0);
        if ((unsigned int)v29 < 7) {
          goto LABEL_86;
        }
      LABEL_102:
        v309 = v305 + 1;
        do {
          v310 = *v308;
          v309 -= 8;
          v311 = (__int16)v303 * v16 + v310 * v28;
          v312 = (__int16)v303 * v23 + v310 * v16;
          v313 = *(v308 - 1);
          v314 = (__int16)((v312 + 0x4000) >> 15);
          v308[1] = (unsigned int)(v311 + 0x4000) >> 15;
          v315 = v314 * v16 + v313 * v28;
          v316 = v314 * v23 + v313 * v16;
          v317 = *(v308 - 2);
          v318 = (__int16)((v316 + 0x4000) >> 15);
          *v308 = (unsigned int)(v315 + 0x4000) >> 15;
          v319 = v318 * v16 + v317 * v28;
          v320 = v318 * v23 + v317 * v16;
          v321 = *(v308 - 3);
          v322 = (__int16)((v320 + 0x4000) >> 15);
          *(v308 - 1) = (unsigned int)(v319 + 0x4000) >> 15;
          v323 = v322 * v16 + v321 * v28;
          v324 = v322 * v23 + v321 * v16;
          v325 = *(v308 - 4);
          v326 = (__int16)((v324 + 0x4000) >> 15);
          *(v308 - 2) = (unsigned int)(v323 + 0x4000) >> 15;
          v327 = v326 * v16 + v325 * v28;
          v328 = v326 * v23 + v325 * v16;
          v329 = *(v308 - 5);
          v330 = (__int16)((v328 + 0x4000) >> 15);
          *(v308 - 3) = (unsigned int)(v327 + 0x4000) >> 15;
          v331 = v330 * v16 + v329 * v28;
          v332 = v330 * v23 + v329 * v16;
          v333 = *(v308 - 6);
          v334 = (__int16)((v332 + 0x4000) >> 15);
          *(v308 - 4) = (unsigned int)(v331 + 0x4000) >> 15;
          v335 = v334 * v16 + v333 * v28;
          v336 = v334 * v23 + v333 * v16;
          v337 = *(v308 - 7);
          v338 = (__int16)((v336 + 0x4000) >> 15);
          *(v308 - 5) = (unsigned int)(v335 + 0x4000) >> 15;
          v339 = (unsigned int)(v338 * v16 + v337 * v28 + 0x4000) >> 15;
          v303 = (unsigned int)(v338 * v23 + v337 * v16 + 0x4000) >> 15;
          *(v308 - 6) = v339;
          *(v308 - 7) = v303;
          v308 -= 8;
        } while (v309 != 0);
        goto LABEL_86;
      }
      v153 = v35 - v17;
      result = 0;
      v154 = v35 & 7;
      v155 = v35 & 0xFFFFFFF8;
      v156 = v17;
      do {
        v157 = result * v33;
        if (v17 != 0) {
          if (v31 >= 1) {
            if (v153 >= 7) {
              v159 = v31 & 0x7FFFFFF8;
              v160 = (__int16*)(v9 + 2 * v157);
              do {
                v161 = v160[v17];
                v162 = *v160;
                v159 -= 8;
                v160[v17] =
                    (unsigned int)(v161 * v23 + v162 * v22 + 0x4000) >> 15;
                *v160 = (unsigned int)(v161 * v27 + v162 * v23 + 0x4000) >> 15;
                v163 = v160[1];
                v164 = v160[v17 + 1];
                v160[v17 + 1] =
                    (unsigned int)(v164 * v23 + v163 * v22 + 0x4000) >> 15;
                v165 = v164 * v27 + v163 * v23;
                v166 = v160[2];
                v160[1] = (unsigned int)(v165 + 0x4000) >> 15;
                v167 = v160[v17 + 2];
                v160[v17 + 2] =
                    (unsigned int)(v167 * v23 + v166 * v22 + 0x4000) >> 15;
                v160[2] =
                    (unsigned int)(v167 * v27 + v166 * v23 + 0x4000) >> 15;
                v168 = v160[3];
                v169 = v160[v17 + 3];
                v160[v17 + 3] =
                    (unsigned int)(v169 * v23 + v168 * v22 + 0x4000) >> 15;
                v160[3] =
                    (unsigned int)(v169 * v27 + v168 * v23 + 0x4000) >> 15;
                v170 = v160[4];
                v171 = v160[v17 + 4];
                v160[v17 + 4] =
                    (unsigned int)(v171 * v23 + v170 * v22 + 0x4000) >> 15;
                v160[4] =
                    (unsigned int)(v171 * v27 + v170 * v23 + 0x4000) >> 15;
                v172 = v160[5];
                v173 = v160[v17 + 5];
                v160[v17 + 5] =
                    (unsigned int)(v173 * v23 + v172 * v22 + 0x4000) >> 15;
                v160[5] =
                    (unsigned int)(v173 * v27 + v172 * v23 + 0x4000) >> 15;
                v174 = v160[6];
                v175 = v160[v17 + 6];
                v160[v17 + 6] =
                    (unsigned int)(v175 * v23 + v174 * v22 + 0x4000) >> 15;
                v160[6] =
                    (unsigned int)(v175 * v27 + v174 * v23 + 0x4000) >> 15;
                v177 = v160[7];
                v176 = v160 + 7;
                v178 = (__int16)v176[v17];
                v179 = v178 * v23;
                v180 = v178 * v27 + v177 * v23;
                v158 = v176 + 1;
                v176[v17] = (unsigned int)(v179 + v177 * v22 + 0x4000) >> 15;
                *v176 = (unsigned int)(v180 + 0x4000) >> 15;
                v160 = v176 + 1;
              } while (v159 != 0);
            }
            else {
              v158 = (__int16*)(v9 + 2 * v157);
            }
            if ((v31 & 7) != 0) {
              v181 = v31 & 7;
              do {
                v182 = v158[v17];
                v183 = *v158;
                --v181;
                v158[v17] =
                    (unsigned int)(v182 * v23 + v183 * v22 + 0x4000) >> 15;
                *v158++ =
                    (unsigned int)(v182 * v27 + v183 * v23 + 0x4000) >> 15;
              } while (v181 != 0);
            }
          }
          if ((v32 & 0x80000000) == 0) {
            v184 = (__int16*)(v9 + 2 * v157 + 2 * v32);
            if ((((_BYTE)v33 - v25) & 7) != 0) {
              v185 = ((_BYTE)v33 - v25) & 7;
              v186 = v32;
              do {
                v187 = v184[v17];
                v188 = *v184;
                --v186;
                --v185;
                v189 = v187 * v23 + v188 * v22;
                v190 = v187 * v27 + v188 * v23;
                v191 = (__int64)(v184 - 1);
                v184[v17] = (unsigned int)(v189 + 0x4000) >> 15;
                *v184-- = (unsigned int)(v190 + 0x4000) >> 15;
              } while (v185 != 0);
              if ((unsigned int)v32 < 7) {
                goto LABEL_67;
              }
            LABEL_65:
              v192 = v186 + 1;
              v193 = (__int16*)(v191 - 6);
              do {
                v194 = &v193[v156];
                v195 = v193[3];
                v192 -= 8;
                v196 = v193[v156 + 3];
                v193[3] =
                    (unsigned int)(v196 * v27 + v195 * v23 + 0x4000) >> 15;
                v194[3] =
                    (unsigned int)(v196 * v23 + v195 * v22 + 0x4000) >> 15;
                v197 = v193[v156 + 2];
                v198 = v193[2];
                v193[2] =
                    (unsigned int)(v197 * v27 + v198 * v23 + 0x4000) >> 15;
                v194[2] =
                    (unsigned int)(v197 * v23 + v198 * v22 + 0x4000) >> 15;
                v199 = v193[v156 + 1];
                v200 = v193[1];
                v193[1] =
                    (unsigned int)(v199 * v27 + v200 * v23 + 0x4000) >> 15;
                v194[1] =
                    (unsigned int)(v199 * v23 + v200 * v22 + 0x4000) >> 15;
                v201 = v193[v17];
                v202 = *v193;
                *v193 = (unsigned int)(v201 * v27 + v202 * v23 + 0x4000) >> 15;
                *v194 = (unsigned int)(v201 * v23 + v202 * v22 + 0x4000) >> 15;
                v203 = v193[v156 - 1];
                v204 = *(v193 - 1);
                *(v193 - 1) =
                    (unsigned int)(v203 * v27 + v204 * v23 + 0x4000) >> 15;
                *(v194 - 1) =
                    (unsigned int)(v203 * v23 + v204 * v22 + 0x4000) >> 15;
                v205 = v193[v156 - 2];
                v206 = *(v193 - 2);
                *(v193 - 2) =
                    (unsigned int)(v205 * v27 + v206 * v23 + 0x4000) >> 15;
                *(v194 - 2) =
                    (unsigned int)(v205 * v23 + v206 * v22 + 0x4000) >> 15;
                v207 = v193[v156 - 3];
                v208 = *(v193 - 3);
                *(v193 - 3) =
                    (unsigned int)(v207 * v27 + v208 * v23 + 0x4000) >> 15;
                *(v194 - 3) =
                    (unsigned int)(v207 * v23 + v208 * v22 + 0x4000) >> 15;
                v209 = v193[v156 - 4];
                v210 = *(v193 - 4);
                *(v194 - 4) =
                    (unsigned int)(v209 * v23 + v210 * v22 + 0x4000) >> 15;
                *(v193 - 4) =
                    (unsigned int)(v209 * v27 + v210 * v23 + 0x4000) >> 15;
                v193 -= 8;
              } while (v192 != 0);
              goto LABEL_67;
            }
            v186 = v32;
            v191 = v9 + 2 * v157 + 2 * v32;
            if ((unsigned int)v32 >= 7) {
              goto LABEL_65;
            }
          }
        }
      LABEL_67:
        v211 = (_WORD*)(v9 + 2 * v157);
        if ((int)v33 >= 2) {
          LOWORD(v212) = *v211;
          if (v30 >= 7) {
            v214 = v155;
            v215 = v211;
            v213 = v211;
            do {
              v216 = (__int16)v215[1];
              v214 -= 8;
              v217 =
                  (__int16)((v216 * v22 + (__int16)v212 * v23 + 0x4000) >> 15);
              *v215 =
                  (unsigned int)(v216 * v28 + (__int16)v212 * v22 + 0x4000) >>
                  15;
              v218 = (__int16)v215[2];
              v219 = (__int16)((v218 * v22 + v217 * v23 + 0x4000) >> 15);
              v215[1] = (unsigned int)(v218 * v28 + v217 * v22 + 0x4000) >> 15;
              v220 = (__int16)v215[3];
              v221 = (__int16)((v220 * v22 + v219 * v23 + 0x4000) >> 15);
              v215[2] = (unsigned int)(v220 * v28 + v219 * v22 + 0x4000) >> 15;
              v222 = (__int16)v215[4];
              v223 = (__int16)((v222 * v22 + v221 * v23 + 0x4000) >> 15);
              v215[3] = (unsigned int)(v222 * v28 + v221 * v22 + 0x4000) >> 15;
              v224 = (__int16)v215[5];
              v225 = (__int16)((v224 * v22 + v223 * v23 + 0x4000) >> 15);
              v215[4] = (unsigned int)(v224 * v28 + v223 * v22 + 0x4000) >> 15;
              v226 = (__int16)v215[6];
              v227 = (__int16)((v226 * v22 + v225 * v23 + 0x4000) >> 15);
              v215[5] = (unsigned int)(v226 * v28 + v225 * v22 + 0x4000) >> 15;
              v228 = (__int16)v215[7];
              v229 = (__int16)((v228 * v22 + v227 * v23 + 0x4000) >> 15);
              v215[6] = (unsigned int)(v228 * v28 + v227 * v22 + 0x4000) >> 15;
              v230 = (__int16)v213[8];
              v213 += 8;
              v212 = (unsigned int)(v230 * v22 + v229 * v23 + 0x4000) >> 15;
              *v213 = v212;
              v215[7] = (unsigned int)(v230 * v28 + v229 * v22 + 0x4000) >> 15;
              v215 = v213;
            } while (v214 != 0);
          }
          else {
            v213 = v211;
          }
          if (v154 != 0) {
            v231 = v213 + 1;
            v232 = v154;
            do {
              v233 = *v231;
              v234 = (__int16)v212;
              --v232;
              v212 =
                  (unsigned int)(v233 * v22 + (__int16)v212 * v23 + 0x4000) >>
                  15;
              *v231 = v212;
              *(v231++ - 1) =
                  (unsigned int)(v233 * v28 + v234 * v22 + 0x4000) >> 15;
            } while (v232 != 0);
          }
        }
        if ((v29 & 0x80000000) != 0) {
          goto LABEL_48;
        }
        v235 = &v211[v29];
        LOWORD(v236) = *(_WORD*)(v9 + v36 + 2 + v34 * result);
        if ((v30 & 7) != 0) {
          v237 = v30 & 7;
          v238 = v29;
          do {
            v239 = *v235;
            v240 = (__int16)v236;
            --v238;
            --v237;
            v241 = (__int16)v236 * v22 + v239 * v23;
            v242 = v240 * v28 + v239 * v22;
            v243 = v235 - 1;
            v235[1] = (unsigned int)(v241 + 0x4000) >> 15;
            v236 = (unsigned int)(v242 + 0x4000) >> 15;
            *v235-- = v236;
          } while (v237 != 0);
          if ((unsigned int)v29 < 7) {
            goto LABEL_48;
          }
        LABEL_82:
          v244 = v238 + 1;
          do {
            v245 = *v243;
            v244 -= 8;
            v246 = (__int16)v236 * v22 + v245 * v23;
            v247 = (__int16)v236 * v28 + v245 * v22;
            v248 = *(v243 - 1);
            v249 = (__int16)((v247 + 0x4000) >> 15);
            v243[1] = (unsigned int)(v246 + 0x4000) >> 15;
            v250 = v249 * v22 + v248 * v23;
            v251 = v249 * v28 + v248 * v22;
            v252 = *(v243 - 2);
            v253 = (__int16)((v251 + 0x4000) >> 15);
            *v243 = (unsigned int)(v250 + 0x4000) >> 15;
            v254 = v253 * v22 + v252 * v23;
            v255 = v253 * v28 + v252 * v22;
            v256 = *(v243 - 3);
            v257 = (__int16)((v255 + 0x4000) >> 15);
            *(v243 - 1) = (unsigned int)(v254 + 0x4000) >> 15;
            v258 = v257 * v22 + v256 * v23;
            v259 = v257 * v28 + v256 * v22;
            v260 = *(v243 - 4);
            v261 = (__int16)((v259 + 0x4000) >> 15);
            *(v243 - 2) = (unsigned int)(v258 + 0x4000) >> 15;
            v262 = v261 * v22 + v260 * v23;
            v263 = v261 * v28 + v260 * v22;
            v264 = *(v243 - 5);
            v265 = (__int16)((v263 + 0x4000) >> 15);
            *(v243 - 3) = (unsigned int)(v262 + 0x4000) >> 15;
            v266 = v265 * v22 + v264 * v23;
            v267 = v265 * v28 + v264 * v22;
            v268 = *(v243 - 6);
            v269 = (__int16)((v267 + 0x4000) >> 15);
            *(v243 - 4) = (unsigned int)(v266 + 0x4000) >> 15;
            v270 = v269 * v22 + v268 * v23;
            v271 = v269 * v28 + v268 * v22;
            v272 = *(v243 - 7);
            v273 = (__int16)((v271 + 0x4000) >> 15);
            *(v243 - 5) = (unsigned int)(v270 + 0x4000) >> 15;
            v274 = (unsigned int)(v273 * v22 + v272 * v23 + 0x4000) >> 15;
            v236 = (unsigned int)(v273 * v28 + v272 * v22 + 0x4000) >> 15;
            *(v243 - 6) = v274;
            *(v243 - 7) = v236;
            v243 -= 8;
          } while (v244 != 0);
          goto LABEL_48;
        }
        v238 = v29;
        v243 = &v211[v29];
        if ((unsigned int)v29 >= 7) {
          goto LABEL_82;
        }
      LABEL_48:
        ++result;
      } while (result != v26);
    }
  }
  return result;
}

__int64 alg_quant(__int16* a1, int a2, int a3, int a4, int a5, __int64* a6,
                  __int16 a7, int a8)
{
  __int64 v9;
  int* v17;
  __int16 v18;
  int v19;
  signed int v20;
  int v21;
  int v22;
  int v23;
  __int16 v24;
  int v25;
  char v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int16* v32;
  _WORD* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int16* v37;
  int* v38;
  int v39;
  __int64 result;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int* v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 i;
  int v54;
  __int64 vars0;

  v9 = 4LL * a2;
  v17 = (int*)((char*)&vars0 - ((v9 + 27) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v17, 0, v9 + 12);
  vq_3e6a0((__int64)a1, a2, 1, a5, a3, a4);
  v18 = MovieRoutine_3fca0(a1, v17, a3, a2);
  opus_celt_37120((__int64)v17, a2, a3, a6);
  if (a8 != 0) {
    v19 = v18;
    v20 = 31 - __clz(v18);
    v21 = v20 >> 1;
    LOBYTE(v20) = v20 & 0xFE;
    v22 = v19 >> (v20 - 14);
    v23 = v19 << (14 - v20);
    if (v21 <= 7) {
      v24 = v23;
    }
    else {
      v24 = v22;
    }
    v25 = a7 * (__int16)celt_rsqrt_norm(v24);
    v26 = v21 + 1;
    if (a2 <= 1) {
      v27 = 1;
    }
    else {
      v27 = a2;
    }
    v28 = v27 & 3;
    v29 = (unsigned int)(1 << v26) >> 1;
    v30 = (2 * v25 + 0x8000) >> 16;
    if (a2 >= 4) {
      v32 = (__int16*)(v17 + 2);
      v33 = a1 + 2;
      v34 = 0;
      v35 = -(__int64)(v27 & 0xFFFFFFFC);
      do {
        v34 -= 4;
        *(v33 - 2) = (int)(v29 + *(v32 - 4) * v30) >> v26;
        *(v33 - 1) = (int)(v29 + *(v32 - 2) * v30) >> v26;
        *v33 = (int)(v29 + *v32 * v30) >> v26;
        v36 = v32[2];
        v32 += 8;
        v33[1] = (int)(v29 + v36 * v30) >> v26;
        v33 += 4;
      } while (v35 != v34);
      v31 = -v34;
      if (v28 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v31 = 0;
      if (v28 == 0) {
      LABEL_16:
        vq_3e6a0((__int64)a1, a2, -1, a5, a3, a4);
        goto LABEL_17;
      }
    }
    v37 = &a1[v31];
    v38 = &v17[v31];
    do {
      v39 = *(__int16*)v38++;
      --v28;
      *v37++ = (int)(v29 + v39 * v30) >> v26;
    } while (v28 != 0);
    goto LABEL_16;
  }
LABEL_17:
  if (a5 < 2) {
    return 1;
  }
  v41 = a2 / (unsigned int)a5;
  v42 = 0;
  LODWORD(result) = 0;
  if (v41 <= 1) {
    v43 = 1;
  }
  else {
    v43 = a2 / (unsigned int)a5;
  }
  v44 = v43 & 7;
  v45 = v43 & 0x7FFFFFF8;
  do {
    v47 = &v17[v42 * v41];
    if ((unsigned int)v41 >= 8) {
      v48 = 0;
      v49 = 0;
      do {
        v50 = v47[v48 + 5] | v47[v48 + 4] | v47[v48 + 3] | v47[v48 + 2] |
              v47[v48 + 1] | v47[v48] | v49;
        v51 = v47[v48 + 6];
        v52 = v47[v48 + 7];
        v48 += 8;
        v49 = v52 | v51 | v50;
      } while (v45 != v48);
    }
    else {
      v48 = 0;
      v49 = 0;
    }
    if (v44 != 0) {
      for (i = v44; i != 0; --i) {
        v54 = v47[v48++];
        v49 |= v54;
      }
    }
    v46 = (v49 != 0) << v42++;
    result = v46 | (unsigned int)result;
  } while (v42 != a5);
  return result;
}

__int64 alg_unquant(__int64 a1, int a2, int a3, int a4, int a5, __int64* a6,
                    __int16 a7)
{
  __int64 v9;
  _DWORD* v15;
  signed int v16;
  signed int v17;
  int v18;
  int v19;
  signed int v20;
  __int16 v21;
  int v22;
  char v23;
  int v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int16* v29;
  _WORD* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  _WORD* v34;
  __int16* v35;
  int v36;
  __int64 result;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  _DWORD* v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 i;
  int v51;
  __int64 vars0;

  v9 = 4LL * a2;
  v15 = (_DWORD*)((char*)&vars0 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v15, 0, v9);
  v16 = opus_celt_372e0(v15, a2, a3, a6);
  v17 = 31 - __clz(v16);
  v18 = v17 >> 1;
  LOBYTE(v17) = v17 & 0xFE;
  v19 = v16 >> (v17 - 14);
  v20 = v16 << (14 - v17);
  if (v18 <= 7) {
    v21 = v20;
  }
  else {
    v21 = v19;
  }
  v22 = a7 * (__int16)celt_rsqrt_norm(v21);
  v23 = v18 + 1;
  if (a2 <= 1) {
    v24 = 1;
  }
  else {
    v24 = a2;
  }
  v25 = v24 & 3;
  v26 = (unsigned int)(1 << v23) >> 1;
  v27 = (2 * v22 + 0x8000) >> 16;
  if (a2 < 4) {
    v28 = 0;
    if (v25 == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v29 = (__int16*)(v15 + 2);
  v30 = (_WORD*)(a1 + 4);
  v31 = 0;
  v32 = -(__int64)(v24 & 0xFFFFFFFC);
  do {
    v31 -= 4;
    *(v30 - 2) = (int)(v26 + *(v29 - 4) * v27) >> v23;
    *(v30 - 1) = (int)(v26 + *(v29 - 2) * v27) >> v23;
    *v30 = (int)(v26 + *v29 * v27) >> v23;
    v33 = v29[2];
    v29 += 8;
    v30[1] = (int)(v26 + v33 * v27) >> v23;
    v30 += 4;
  } while (v32 != v31);
  v28 = -v31;
  if (v25 != 0) {
  LABEL_13:
    v34 = (_WORD*)(a1 + 2 * v28);
    v35 = (__int16*)&v15[v28];
    do {
      v36 = *v35;
      v35 += 2;
      --v25;
      *v34++ = (int)(v26 + v36 * v27) >> v23;
    } while (v25 != 0);
  }
LABEL_15:
  vq_3e6a0(a1, a2, -1, a5, a3, a4);
  if (a5 < 2) {
    return 1;
  }
  v38 = a2 / (unsigned int)a5;
  v39 = 0;
  LODWORD(result) = 0;
  if (v38 <= 1) {
    v40 = 1;
  }
  else {
    v40 = a2 / (unsigned int)a5;
  }
  v41 = v40 & 7;
  v42 = v40 & 0x7FFFFFF8;
  do {
    v44 = &v15[v39 * v38];
    if ((unsigned int)v38 >= 8) {
      v45 = 0;
      v46 = 0;
      do {
        v47 = v44[v45 + 5] | v44[v45 + 4] | v44[v45 + 3] | v44[v45 + 2] |
              v44[v45 + 1] | v44[v45] | v46;
        v48 = v44[v45 + 6];
        v49 = v44[v45 + 7];
        v45 += 8;
        v46 = v49 | v48 | v47;
      } while (v42 != v45);
    }
    else {
      v45 = 0;
      v46 = 0;
    }
    if (v41 != 0) {
      for (i = v41; i != 0; --i) {
        v51 = v44[v45++];
        v46 |= v51;
      }
    }
    v43 = (v46 != 0) << v39++;
    result = v43 | (unsigned int)result;
  } while (v39 != a5);
  return result;
}

#pragma GCC visibility pop
