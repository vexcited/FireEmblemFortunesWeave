#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 HUF_readStats_wksp(unsigned __int8*, unsigned __int64, __int64, _DWORD*,
                           _DWORD*, char*, unsigned __int64, __int64,
                           unsigned __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
unsigned __int64 HUF_readDTableX2_wksp(int* a1, char* a2, unsigned __int64 a3,
                                       __int64 a4, unsigned __int64 a5);

unsigned __int64 HUF_readDTableX2_wksp(int* a1, char* a2, unsigned __int64 a3,
                                       __int64 a4, unsigned __int64 a5)
{

#pragma clang fp contract(off)
  unsigned __int64 result;
  int8x16_t* v7;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  int8x16_t v18;
  int8x16_t* v19;
  __int64 v20;
  int8x16_t v21;
  __int64 v22;
  int8x8_t v23;
  __int64 v24;
  int8x8_t* v25;
  __int64 v26;
  _BYTE* v27;
  char v28;
  unsigned __int64 v29;
  _DWORD* v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  _DWORD* v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  int8x16_t v82;
  __int64 v83;
  __int64 v84;
  int* v85;
  int v86;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _BYTE* v95;
  char v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  bool v110;
  __int64 v111;
  unsigned __int64 v112;
  bool v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _BYTE* v118;
  char v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int8x16_t* v129;
  int8x16_t* v130;
  __int64 v131;
  __int64 v132;
  int8x16_t* v133;
  int8x16_t* v134;
  __int64 v135;
  int8x16_t* v136;
  __int64 v137;
  int8x16_t* v138;
  __int64 v139;
  char* v140;
  _BYTE* v141;
  char v142;
  char v143;
  char v144;
  char v145;
  char v146;
  char v147;
  char v148;
  char v149;
  __int64 v150;
  unsigned __int8* v151;
  unsigned __int64* v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  unsigned int v160;
  unsigned __int64 v161;
  __int64 v162;
  char* v163;
  _BYTE* v164;
  char v165;
  char v166;
  char v167;
  char v168;
  char v169;
  char v170;
  char v171;
  char v172;
  __int64 v173;
  unsigned __int8* v174;
  _QWORD* v175;
  unsigned int v176;
  __int64 v177;
  int8x16_t* v178;
  int8x16_t* v179;
  __int64 v180;
  char* v181;
  int8x16_t* v182;
  char* v183;
  __int64 v184;
  __int64 v185;
  char* v186;
  unsigned __int64* v187;
  unsigned __int64 v188;
  uint8x16_t* v189;
  __int64 v190;
  double* v191;
  uint8x16_t v192;
  uint16x8_t v193;
  uint16x8_t v194;
  uint32x4_t v195;
  uint32x4_t v196;
  int8x16_t v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  int8x16_t v201;
  int8x16_t v202;
  unsigned __int64 v203;
  unsigned __int64 v204;
  uint32x4_t v205;
  unsigned __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  int8x16_t v212;
  int8x16_t v213;
  double* v214;
  double* v215;
  __int64 v216;
  __int64 v217;
  double* v218;
  __int64 v219;
  unsigned __int32* v220;
  unsigned __int32 v221;
  uint32x4_t v222;
  __int64 v223;
  __int64 v224;
  char* v225;
  __int64 v226;
  __int64 v227;
  char* v228;
  unsigned __int64* v229;
  unsigned __int64 v230;
  uint8x16_t* v231;
  __int64 v232;
  __int64 v233;
  uint8x16_t v234;
  uint16x8_t v235;
  uint32x4_t v236;
  uint32x4_t v237;
  int8x16_t v238;
  unsigned __int64 v239;
  unsigned __int64 v240;
  uint16x8_t v241;
  uint32x4_t v242;
  uint32x4_t v243;
  int8x16_t v244;
  unsigned __int64 v245;
  unsigned __int64 v246;
  int8x16_t v247;
  __int128 v248;
  unsigned __int64 v249;
  unsigned __int64 v250;
  int8x16_t v251;
  int8x16_t v252;
  unsigned __int64 v253;
  unsigned __int64 v254;
  int8x16_t v255;
  int8x16_t v256;
  __int128 v257;
  int8x16_t v258;
  unsigned __int64 v259;
  unsigned __int64 v260;
  int8x16_t v261;
  __int128 v262;
  __int64 v263;
  __int64 v264;
  int8x16_t* v265;
  unsigned __int32* v266;
  unsigned __int32 v267;
  uint32x4_t v268;
  int8x16_t v269;
  int8x16_t v270;
  int8x16_t v271;
  int8x16_t v272;
  int* v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  int* v278;
  int* v279;
  int* v280;
  __int64 v281;
  __int64 v282;
  int8x8x2_t v283;
  int8x8x4_t v284;
  float64x2x2_t v285;
  float64x2x2_t v286;
  int8x16x2_t v287;
  float64x2x2_t v288;
  float64x2x2_t v289;
  float64x2x2_t v290;
  float64x2x2_t v291;
  float64x2x2_t v292;
  float64x2x2_t v293;
  int8x16x4_t v294;
  int8x16x4_t v295;

  v282 = 0;
  if (a5 < 0x5D4) {
    return -44;
  }
  v7 = (int8x16_t*)(a4 + 1236);
  result = HUF_readStats_wksp((unsigned __int8*)(a4 + 1236), 0x100u, a4, &v282,
                              (_DWORD*)&v282 + 1, a2, a3, a4 + 104, 0x36Cu);
  if (result <= 0xFFFFFFFFFFFFFF88LL) {
    v10 = *a1;
    v11 = (unsigned __int8)*a1;
    v12 = v11 + 1;
    if ((unsigned int)(v11 + 1) < 0xB) {
      v13 = v11 + 1;
    }
    else {
      v13 = 11;
    }
    v15 = (unsigned int)v282;
    v14 = HIDWORD(v282);
    v16 = v13 - HIDWORD(v282);
    if (v13 < HIDWORD(v282)) {
      v13 = HIDWORD(v282);
      if (HIDWORD(v282) > v12) {
        return -44;
      }
    LABEL_32:
      *(_BYTE*)a1 = v10;
      *((_BYTE*)a1 + 1) = 0;
      *((_BYTE*)a1 + 2) = v13;
      *((_BYTE*)a1 + 3) = HIBYTE(v10);
      v32 = (v13 + 1) & 7LL;
      if (v13 >= 7) {
        v35 = (_DWORD*)(a4 + 52);
        v36 = 0;
        v34 = 0;
        do {
          v36 -= 8;
          v37 = *(v35 - 13) + v34;
          v38 = *(v35 - 12) + v37;
          *v35 = v34;
          v35[1] = v37;
          v39 = *(v35 - 11) + v38;
          v40 = *(v35 - 10) + v39;
          v35[2] = v38;
          v35[3] = v39;
          v41 = *(v35 - 9) + v40;
          v42 = *(v35 - 8) + v41;
          v35[4] = v40;
          v35[5] = v41;
          v43 = *(v35 - 7) + v42;
          v34 = *(v35 - 6) + v43;
          v35[6] = v42;
          v35[7] = v43;
          v35 += 8;
        } while (-(__int64)((v13 + 1) & 0x7FFFFFF8) != v36);
        v33 = -v36;
        if (v32 == 0) {
        LABEL_40:
          if ((int)v15 < 4) {
            LODWORD(v48) = 0;
            if ((int)v15 <= 0) {
            LABEL_51:
              v81 = *(_DWORD*)a4;
              LANES128(v82).n128_u64[0] = 255;
              LANES128(v82).n128_u64[1] = 255;
              v83 = v13 + 1;
              v84 = a4 + 980;
              v85 = a1 + 1;
              v86 = 0;
              v273 = a1 + 1;
              v87 = 1;
              v278 = a1 + 3;
              v281 = a4 + 987;
              v280 = a1 + 17;
              v279 = a1 + 9;
              v277 = (__int64)a1 + 7;
              v275 = (__int64)a1 + 17;
              v276 = (__int64)a1 + 5;
              v274 = (__int64)a1 + 9;
              while (1) {
                v88 = *(unsigned int*)(a4 + 4 * v87);
                v89 = v83 - v87;
                v90 = 1 << v87 >> 1;
                if (v90 > 3) {
                  if (v90 != 4) {
                    if (v90 == 8) {
                      if ((int)v88 < 1) {
                        goto LABEL_52;
                      }
                      v97 = (unsigned __int8)(v83 - v87);
                      if ((unsigned int)v88 <= 3 ||
                          (unsigned __int64)v85 + 2 * v86 < v84 + v81 + v88 &&
                              v84 + v81 <
                                  (unsigned __int64)&v85[4 * v88] + 2 * v86) {
                        v98 = 0;
                        v99 = v86;
                      LABEL_73:
                        v100 = ((_BYTE)v88 - (_BYTE)v98) & 7;
                        if ((((_BYTE)v88 - (_BYTE)v98) & 7) != 0) {
                          v101 = v98;
                          v102 = (__int64*)((char*)v278 + 2 * v99);
                          v99 += 8 * v100;
                          do {
                            v103 = *(unsigned __int8*)(v84 + v81 + v101++);
                            --v100;
                            v104 = 0x1000100010001LL * (v97 | (v103 << 8));
                            *(v102 - 1) = v104;
                            *v102 = v104;
                            v102 += 2;
                          } while (v100 != 0);
                          if ((unsigned __int64)(v98 - v88) >
                              0xFFFFFFFFFFFFFFF8LL) {
                            goto LABEL_52;
                          }
                        LABEL_139:
                          v150 = v88 - v101;
                          v151 = (unsigned __int8*)(v281 + v101 + v81);
                          v152 = (unsigned __int64*)((char*)v280 + 2 * v99);
                          do {
                            v150 -= 8;
                            v153 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 7) << 8));
                            *(v152 - 8) = v153;
                            *(v152 - 7) = v153;
                            v154 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 6) << 8));
                            *(v152 - 6) = v154;
                            *(v152 - 5) = v154;
                            v155 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 5) << 8));
                            *(v152 - 4) = v155;
                            *(v152 - 3) = v155;
                            v156 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 4) << 8));
                            *(v152 - 2) = v156;
                            *(v152 - 1) = v156;
                            v157 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 3) << 8));
                            *v152 = v157;
                            v152[1] = v157;
                            v158 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 2) << 8));
                            v152[2] = v158;
                            v152[3] = v158;
                            v159 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)*(v151 - 1) << 8));
                            v152[4] = v159;
                            v152[5] = v159;
                            v160 = *v151;
                            v151 += 8;
                            v161 = 0x1000100010001LL *
                                   (v97 | ((unsigned __int64)v160 << 8));
                            v152[6] = v161;
                            v152[7] = v161;
                            v152 += 16;
                          } while (v150 != 0);
                          goto LABEL_52;
                        }
                        v101 = v98;
                        if ((unsigned __int64)(v98 - v88) <=
                            0xFFFFFFFFFFFFFFF8LL) {
                          goto LABEL_139;
                        }
                        goto LABEL_52;
                      }
                      v294.val[0] = vdupq_n_s64(v97);
                      if ((unsigned int)v88 >= 0x10) {
                        v98 = v88 & 0x7FFFFFF0;
                        v189 = (uint8x16_t*)(v84 + v81);
                        v190 = v98;
                        v191 = (double*)((char*)v273 + 2 * v86);
                        do {
                          v192 = *v189++;
                          v190 -= 16;
                          v193 = vmovl_high_u8(v192);
                          v194 = vmovl_u8(
                              COERCE_AS(uint8x8_t, LANES128(v192).n128_u64[0]));
                          v195 = vmovl_high_u16(v193);
                          v196 = vmovl_u16(COERCE_AS(
                              uint16x4_t, LANES128(v193).n128_u64[0]));
                          v197 =
                              vorrq_s8(vshll_high_n_u32(v195, 8u), v294.val[0]);
                          v285.val[1] = vorrq_s8(
                              vshll_n_u32(COERCE_AS(uint32x2_t,
                                                    LANES128(v195).n128_u64[0]),
                                          8u),
                              v294.val[0]);
                          v198 = LANES128(v197).n128_u64[1];
                          v199 = LANES128(v197).n128_u64[0];
                          v200 = LANES128(v285.val[1]).n128_u64[1];
                          v201 = vorrq_s8(
                              vshll_n_u32(COERCE_AS(uint32x2_t,
                                                    LANES128(v196).n128_u64[0]),
                                          8u),
                              v294.val[0]);
                          v202 =
                              vorrq_s8(vshll_high_n_u32(v196, 8u), v294.val[0]);
                          v203 = LANES128(v201).n128_u64[1];
                          v204 = LANES128(v201).n128_u64[0];
                          v288.val[0] = vmovl_high_u16(v194);
                          v205 = vmovl_u16(COERCE_AS(
                              uint16x4_t, LANES128(v194).n128_u64[0]));
                          v288.val[1] = vorrq_s8(
                              vshll_high_n_u32(v288.val[0], 8u), v294.val[0]);
                          v290.val[0] = vorrq_s8(
                              vshll_n_u32(
                                  COERCE_AS(uint32x2_t,
                                            LANES128(v288.val[0]).n128_u64[0]),
                                  8u),
                              v294.val[0]);
                          LANES128(v285.val[0]).n128_u64[0] =
                              0x1000100010001LL * v204;
                          LANES128(v285.val[0]).n128_u64[1] =
                              0x1000100010001LL * v203;
                          v206 = LANES128(v288.val[1]).n128_u64[0];
                          LANES128(v288.val[0]).n128_u64[0] =
                              0x1000100010001LL * v199;
                          v207 = LANES128(v290.val[0]).n128_u64[0];
                          v208 = 0x1000100010001LL *
                                 LANES128(v288.val[1]).n128_u64[0];
                          LANES128(v288.val[0]).n128_u64[1] =
                              0x1000100010001LL * v198;
                          LANES128(v288.val[1]).n128_u64[0] =
                              0x1000100010001LL * v199;
                          v209 = 0x1000100010001LL *
                                 LANES128(v285.val[1]).n128_u64[0];
                          LANES128(v291.val[0]).n128_u64[0] = v208;
                          v210 = 0x1000100010001LL * v204;
                          v211 = 0x1000100010001LL *
                                 LANES128(v288.val[1]).n128_u64[1];
                          LANES128(v285.val[1]).n128_u64[0] = v210;
                          LANES128(v288.val[1]).n128_u64[1] =
                              0x1000100010001LL * v198;
                          LANES128(v291.val[0]).n128_u64[1] = v211;
                          LANES128(v291.val[1]).n128_u64[0] =
                              0x1000100010001LL * v206;
                          v212 = vorrq_s8(
                              vshll_n_u32(COERCE_AS(uint32x2_t,
                                                    LANES128(v205).n128_u64[0]),
                                          8u),
                              v294.val[0]);
                          LANES128(v290.val[0]).n128_u64[0] = v209;
                          v213 =
                              vorrq_s8(vshll_high_n_u32(v205, 8u), v294.val[0]);
                          LANES128(v285.val[1]).n128_u64[1] =
                              0x1000100010001LL * v203;
                          LANES128(v291.val[1]).n128_u64[1] = v211;
                          LANES128(v292.val[0]).n128_u64[0] =
                              0x1000100010001LL * v207;
                          LANES128(v292.val[0]).n128_u64[1] =
                              0x1000100010001LL *
                              LANES128(v290.val[0]).n128_u64[1];
                          LANES128(v293.val[0]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v212).n128_u64[0];
                          LANES128(v293.val[0]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v212).n128_u64[1];
                          LANES128(v293.val[1]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v212).n128_u64[0];
                          LANES128(v293.val[1]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v212).n128_u64[1];
                          LANES128(v292.val[1]).n128_u64[0] =
                              0x1000100010001LL * v207;
                          LANES128(v290.val[0]).n128_u64[1] =
                              0x1000100010001LL * v200;
                          LANES128(v290.val[1]).n128_u64[0] = v209;
                          LANES128(v292.val[1]).n128_u64[1] =
                              LANES128(v292.val[0]).n128_u64[1];
                          vst2q_f64(v191, v293);
                          v214 = v191 + 4;
                          vst2q_f64(v191 + 12, v291);
                          LANES128(v290.val[1]).n128_u64[1] =
                              0x1000100010001LL * v200;
                          LANES128(v291.val[0]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v202).n128_u64[0];
                          vst2q_f64(v191 + 16, v285);
                          vst2q_f64(v191 + 8, v292);
                          LANES128(v291.val[0]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v202).n128_u64[1];
                          LANES128(v291.val[1]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v202).n128_u64[0];
                          LANES128(v291.val[1]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v202).n128_u64[1];
                          LANES128(v294.val[1]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v213).n128_u64[0];
                          LANES128(v294.val[1]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v213).n128_u64[1];
                          LANES128(v294.val[2]).n128_u64[0] =
                              0x1000100010001LL * LANES128(v213).n128_u64[0];
                          vst2q_f64(v191 + 20, v291);
                          vst2q_f64(v191 + 24, v290);
                          v215 = v191 + 28;
                          v191 += 32;
                          vst2q_f64(v215, v288);
                          LANES128(v294.val[2]).n128_u64[1] =
                              0x1000100010001LL * LANES128(v213).n128_u64[1];
                          vst2q_f64(
                              v214,
                              *(float64x2x2_t*)LANES128(v294.val[1]).n128_u64);
                        } while (v190 != 0);
                        if (v98 == v88) {
                          goto LABEL_52;
                        }
                        if ((v88 & 0xC) == 0) {
                          v99 = v86 + 8 * v98;
                          goto LABEL_73;
                        }
                      }
                      else {
                        v98 = 0;
                      }
                      v216 = v98;
                      v217 = 16 * v98;
                      v98 = v88 & 0x7FFFFFFC;
                      v99 = v86 + 8 * v98;
                      v218 = (double*)((char*)v85 + 2 * v86 + v217);
                      v219 = v216 - v98;
                      v220 = (unsigned __int32*)(v84 + v216 + v81);
                      do {
                        v221 = *v220++;
                        LANES128(v294.val[1]).n128_u32[0] = v221;
                        v219 += 4;
                        v222 = vmovl_u16(COERCE_AS(
                            uint16x4_t,
                            LANES128_OF(vmovl_u8(COERCE_AS(
                                            uint8x8_t,
                                            LANES128(v294.val[1]).n128_u64[0])))
                                .n128_u64[0]));
                        v286.val[0] =
                            vorrq_s8(vshll_high_n_u32(v222, 8u), v294.val[0]);
                        v294.val[1] = vorrq_s8(
                            vshll_n_u32(COERCE_AS(uint32x2_t,
                                                  LANES128(v222).n128_u64[0]),
                                        8u),
                            v294.val[0]);
                        LANES128(v289.val[1]).n128_u64[0] =
                            0x1000100010001LL *
                            LANES128(v294.val[1]).n128_u64[0];
                        LANES128(v286.val[0]).n128_u64[0] *= 0x1000100010001LL;
                        LANES128(v289.val[1]).n128_u64[1] =
                            0x1000100010001LL *
                            LANES128(v294.val[1]).n128_u64[1];
                        LANES128(v289.val[0]).n128_u64[0] =
                            0x1000100010001LL *
                            LANES128(v294.val[1]).n128_u64[0];
                        LANES128(v286.val[0]).n128_u64[1] *= 0x1000100010001LL;
                        v286.val[1] = v286.val[0];
                        LANES128(v289.val[0]).n128_u64[1] =
                            0x1000100010001LL *
                            LANES128(v294.val[1]).n128_u64[1];
                        vst2q_f64(v218, v289);
                        vst2q_f64(v218 + 4, v286);
                        v218 += 8;
                      } while (v219 != 0);
                      if (v98 == v88) {
                        goto LABEL_52;
                      }
                      goto LABEL_73;
                    }
                  LABEL_78:
                    if ((int)v88 < 1) {
                      goto LABEL_52;
                    }
                    v105 = (unsigned __int8)(v83 - v87);
                    v106 = v86;
                    v107 = ((unsigned __int64)(v90 - 1LL) >> 4) + 1;
                    if ((_DWORD)v88 == 1) {
                      v108 = 0;
                    LABEL_81:
                      if ((v88 & 1) == 0 || v90 < 1) {
                        goto LABEL_52;
                      }
                      v294.val[0] = vdupq_n_s64(
                          0x1000100010001LL *
                          (v105 | ((unsigned __int64)*(
                                       unsigned __int8*)(v84 + v108 + v81)
                                   << 8)));
                      if ((unsigned int)v90 >= 0x31) {
                        v177 = v107 & 0x1FFFFFFFFFFFFFFCLL;
                        v109 = 16 * (v107 & 0x1FFFFFFFFFFFFFFCLL);
                        v178 = (int8x16_t*)((char*)v273 + 2 * v106 + 64);
                        do {
                          v178[-4] = v294.val[0];
                          v178[-3] = v294.val[0];
                          v177 -= 4;
                          v178[-2] = v294.val[0];
                          v178[-1] = v294.val[0];
                          *v178 = v294.val[0];
                          v178[1] = v294.val[0];
                          v178[2] = v294.val[0];
                          v178[3] = v294.val[0];
                          v178 += 8;
                        } while (v177 != 0);
                        if (v107 == (v107 & 0x1FFFFFFFFFFFFFFCLL)) {
                          goto LABEL_52;
                        }
                      }
                      else {
                        v109 = 0;
                      }
                      v179 = (int8x16_t*)((char*)v85 + 2 * v106 + 2 * v109);
                      do {
                        *v179 = v294.val[0];
                        v179[1] = v294.val[0];
                        v179 += 2;
                        v109 += 16;
                      } while (v109 < v90);
                      goto LABEL_52;
                    }
                    v125 = v107 & 0x1FFFFFFFFFFFFFFCLL;
                    v108 = 0;
                    v126 = 4LL * v90;
                    v127 = (__int64)v85 + 2 * v86;
                    v128 = (__int64)v85 + 2 * v86 + 2 * (__int64)v90;
                    v129 = (int8x16_t*)((char*)v280 + 2 * v86);
                    v130 =
                        (int8x16_t*)((char*)v280 + 2 * v86 + 2 * (__int64)v90);
                    while (2) {
                      if (v90 >= 1) {
                        v294.val[0] = vdupq_n_s64(
                            0x1000100010001LL *
                            (v105 | ((unsigned __int64)*(
                                         unsigned __int8*)(v84 + v108 + v81)
                                     << 8)));
                        if ((unsigned int)v90 < 0x31) {
                          v131 = 0;
                          goto LABEL_123;
                        }
                        v132 = v107 & 0x1FFFFFFFFFFFFFFCLL;
                        v133 = v129;
                        do {
                          v133[-4] = v294.val[0];
                          v133[-3] = v294.val[0];
                          v132 -= 4;
                          v133[-2] = v294.val[0];
                          v133[-1] = v294.val[0];
                          *v133 = v294.val[0];
                          v133[1] = v294.val[0];
                          v133[2] = v294.val[0];
                          v133[3] = v294.val[0];
                          v133 += 8;
                        } while (v132 != 0);
                        v131 = 16 * (v107 & 0x1FFFFFFFFFFFFFFCLL);
                        if (v107 != v125) {
                        LABEL_123:
                          v134 = (int8x16_t*)(v127 + 2 * v131);
                          do {
                            *v134 = v294.val[0];
                            v134[1] = v294.val[0];
                            v134 += 2;
                            v131 += 16;
                          } while (v131 < v90);
                        }
                      }
                      if (v90 >= 1) {
                        v294.val[0] = vdupq_n_s64(
                            0x1000100010001LL *
                            (v105 | ((unsigned __int64)*(
                                         unsigned __int8*)(v81 + v108 + v84 + 1)
                                     << 8)));
                        if ((unsigned int)v90 < 0x31) {
                          v135 = 0;
                          goto LABEL_131;
                        }
                        v136 = v130;
                        v137 = v107 & 0x1FFFFFFFFFFFFFFCLL;
                        do {
                          v136[-4] = v294.val[0];
                          v136[-3] = v294.val[0];
                          v137 -= 4;
                          v136[-2] = v294.val[0];
                          v136[-1] = v294.val[0];
                          *v136 = v294.val[0];
                          v136[1] = v294.val[0];
                          v136[2] = v294.val[0];
                          v136[3] = v294.val[0];
                          v136 += 8;
                        } while (v137 != 0);
                        v135 = 16 * (v107 & 0x1FFFFFFFFFFFFFFCLL);
                        if (v107 != v125) {
                        LABEL_131:
                          v138 = (int8x16_t*)(v128 + 2 * v135);
                          do {
                            *v138 = v294.val[0];
                            v138[1] = v294.val[0];
                            v138 += 2;
                            v135 += 16;
                          } while (v135 < v90);
                        }
                      }
                      v106 += 2LL * v90;
                      v108 += 2;
                      v129 = (int8x16_t*)((char*)v129 + v126);
                      v127 += v126;
                      v130 = (int8x16_t*)((char*)v130 + v126);
                      v128 += v126;
                      if (v108 == (v88 & 0x7FFFFFFE)) {
                        goto LABEL_81;
                      }
                      continue;
                    }
                  }
                  if ((int)v88 < 1) {
                    goto LABEL_52;
                  }
                  v112 = (unsigned __int8)(v83 - v87);
                  if ((unsigned int)v88 <= 3 ||
                      ((unsigned __int64)v85 + 2 * v86 < v84 + v81 + v88
                           ? (v113 = v84 + v81 >=
                                     (unsigned __int64)&v85[2 * v88] + 2 * v86)
                           : (v113 = true),
                       !v113)) {
                    v114 = 0;
                    v120 = v86;
                  LABEL_110:
                    v121 = ((_BYTE)v88 - (_BYTE)v114) & 7;
                    if ((((_BYTE)v88 - (_BYTE)v114) & 7) != 0) {
                      v122 = (_QWORD*)((char*)v85 + 2 * v120);
                      v120 += 4 * v121;
                      v123 = v114;
                      do {
                        v124 = *(unsigned __int8*)(v84 + v81 + v123++);
                        --v121;
                        *v122++ = 0x1000100010001LL * (v112 | (v124 << 8));
                      } while (v121 != 0);
                      if ((unsigned __int64)(v114 - v88) >
                          0xFFFFFFFFFFFFFFF8LL) {
                        goto LABEL_52;
                      }
                    LABEL_147:
                      v173 = v88 - v123;
                      v174 = (unsigned __int8*)(v281 + v123 + v81);
                      v175 = (_QWORD*)((char*)v279 + 2 * v120);
                      do {
                        v173 -= 8;
                        *(v175 - 4) =
                            0x1000100010001LL *
                            (v112 | ((unsigned __int64)*(v174 - 7) << 8));
                        *(v175 - 3) =
                            0x1000100010001LL *
                            (v112 | ((unsigned __int64)*(v174 - 6) << 8));
                        *(v175 - 2) =
                            0x1000100010001LL *
                            (v112 | ((unsigned __int64)*(v174 - 5) << 8));
                        *(v175 - 1) =
                            0x1000100010001LL *
                            (v112 | ((unsigned __int64)*(v174 - 4) << 8));
                        *v175 = 0x1000100010001LL *
                                (v112 | ((unsigned __int64)*(v174 - 3) << 8));
                        v175[1] = 0x1000100010001LL *
                                  (v112 | ((unsigned __int64)*(v174 - 2) << 8));
                        v175[2] = 0x1000100010001LL *
                                  (v112 | ((unsigned __int64)*(v174 - 1) << 8));
                        v176 = *v174;
                        v174 += 8;
                        v175[3] = 0x1000100010001LL *
                                  (v112 | ((unsigned __int64)v176 << 8));
                        v175 += 8;
                      } while (v173 != 0);
                      goto LABEL_52;
                    }
                    v123 = v114;
                    if ((unsigned __int64)(v114 - v88) <=
                        0xFFFFFFFFFFFFFFF8LL) {
                      goto LABEL_147;
                    }
                    goto LABEL_52;
                  }
                  v294.val[0] = vdupq_n_s64(v112);
                  if ((unsigned int)v88 >= 0x10) {
                    v114 = v88 & 0x7FFFFFF0;
                    v231 = (uint8x16_t*)(v84 + v81);
                    v232 = v114;
                    v233 = (__int64)v273 + 2 * v86;
                    do {
                      v234 = *v231++;
                      v232 -= 16;
                      v235 = vmovl_u8(
                          COERCE_AS(uint8x8_t, LANES128(v234).n128_u64[0]));
                      v236 = vmovl_u16(
                          COERCE_AS(uint16x4_t, LANES128(v235).n128_u64[0]));
                      v237 = vmovl_high_u16(v235);
                      v238 = vorrq_s8(
                          vshll_n_u32(
                              COERCE_AS(uint32x2_t, LANES128(v236).n128_u64[0]),
                              8u),
                          v294.val[0]);
                      v239 = LANES128(v238).n128_u64[1];
                      v240 = LANES128(v238).n128_u64[0];
                      v241 = vmovl_high_u8(v234);
                      v242 = vmovl_high_u16(v241);
                      v243 = vmovl_u16(
                          COERCE_AS(uint16x4_t, LANES128(v241).n128_u64[0]));
                      v244 = vorrq_s8(vshll_high_n_u32(v242, 8u), v294.val[0]);
                      v245 = LANES128(v244).n128_u64[1];
                      v246 = LANES128(v244).n128_u64[0];
                      v247 = vorrq_s8(vshll_high_n_u32(v236, 8u), v294.val[0]);
                      LANES128(v294.val[1]).n128_u64[0] =
                          0x1000100010001LL * v240;
                      *(_QWORD*)&v248 = 0x1000100010001LL * v246;
                      LANES128(v294.val[1]).n128_u64[1] =
                          0x1000100010001LL * v239;
                      v249 = LANES128(v247).n128_u64[1];
                      v250 = LANES128(v247).n128_u64[0];
                      *((_QWORD*)&v248 + 1) = 0x1000100010001LL * v245;
                      v251 = vorrq_s8(
                          vshll_n_u32(
                              COERCE_AS(uint32x2_t, LANES128(v237).n128_u64[0]),
                              8u),
                          v294.val[0]);
                      v252 = vorrq_s8(vshll_high_n_u32(v237, 8u), v294.val[0]);
                      v253 = LANES128(v251).n128_u64[1];
                      v254 = LANES128(v251).n128_u64[0];
                      v255 = vshll_high_n_u32(v243, 8u);
                      v256 = vorrq_s8(
                          vshll_n_u32(
                              COERCE_AS(uint32x2_t, LANES128(v243).n128_u64[0]),
                              8u),
                          v294.val[0]);
                      *(_QWORD*)&v257 = 0x1000100010001LL * v250;
                      v258 = vorrq_s8(v255, v294.val[0]);
                      *((_QWORD*)&v257 + 1) = 0x1000100010001LL * v249;
                      v259 = LANES128(v256).n128_u64[1];
                      v260 = LANES128(v256).n128_u64[0];
                      v261 = vorrq_s8(
                          vshll_n_u32(
                              COERCE_AS(uint32x2_t, LANES128(v242).n128_u64[0]),
                              8u),
                          v294.val[0]);
                      *(_QWORD*)&v262 = 0x1000100010001LL * v254;
                      *((_QWORD*)&v262 + 1) = 0x1000100010001LL * v253;
                      LANES128(v242).n128_u64[0] = 0x1000100010001LL * v260;
                      LANES128(v242).n128_u64[1] = 0x1000100010001LL * v259;
                      LANES128(v261).n128_u64[0] *= 0x1000100010001LL;
                      LANES128(v261).n128_u64[1] *= 0x1000100010001LL;
                      LANES128(v252).n128_u64[0] *= 0x1000100010001LL;
                      LANES128(v258).n128_u64[0] *= 0x1000100010001LL;
                      LANES128(v252).n128_u64[1] *= 0x1000100010001LL;
                      LANES128(v258).n128_u64[1] *= 0x1000100010001LL;
                      *(_OWORD*)(v233 + 32) = v262;
                      *(int8x16_t*)(v233 + 48) = v252;
                      *(uint32x4_t*)(v233 + 64) = v242;
                      *(int8x16_t*)(v233 + 80) = v258;
                      *(int8x16_t*)(v233 + 96) = v261;
                      *(_OWORD*)(v233 + 112) = v248;
                      *(int8x16_t*)v233 = v294.val[1];
                      *(_OWORD*)(v233 + 16) = v257;
                      v233 += 128;
                    } while (v232 != 0);
                    if (v114 == v88) {
                      goto LABEL_52;
                    }
                    if ((v88 & 0xC) == 0) {
                      v120 = v86 + 4 * v114;
                      goto LABEL_110;
                    }
                  }
                  else {
                    v114 = 0;
                  }
                  v263 = v114;
                  v114 = v88 & 0x7FFFFFFC;
                  v264 = v263 - v114;
                  v120 = v86 + 4 * v114;
                  v265 = (int8x16_t*)((char*)&v85[2 * v263] + 2 * v86);
                  v266 = (unsigned __int32*)(v84 + v263 + v81);
                  do {
                    v267 = *v266++;
                    LANES128(v294.val[1]).n128_u32[0] = v267;
                    v264 += 4;
                    v268 = vmovl_u16(COERCE_AS(
                        uint16x4_t,
                        LANES128_OF(
                            vmovl_u8(COERCE_AS(
                                uint8x8_t, LANES128(v294.val[1]).n128_u64[0])))
                            .n128_u64[0]));
                    LANES128(v269).n128_u64[0] = LANES128(v268).n128_u32[2];
                    LANES128(v269).n128_u64[1] = LANES128(v268).n128_u32[3];
                    v270 = v269;
                    LANES128(v269).n128_u64[0] = LANES128(v268).n128_u32[0];
                    LANES128(v269).n128_u64[1] = LANES128(v268).n128_u32[1];
                    v271 = vorrq_s8(vshlq_n_s64(vandq_s8(v269, v82), 8u),
                                    v294.val[0]);
                    v272 = vorrq_s8(vshlq_n_s64(vandq_s8(v270, v82), 8u),
                                    v294.val[0]);
                    LANES128(v294.val[1]).n128_u64[0] =
                        0x1000100010001LL * LANES128(v271).n128_u64[0];
                    LANES128(v294.val[1]).n128_u64[1] =
                        0x1000100010001LL * LANES128(v271).n128_u64[1];
                    LANES128(v272).n128_u64[0] *= 0x1000100010001LL;
                    LANES128(v272).n128_u64[1] *= 0x1000100010001LL;
                    *v265 = v294.val[1];
                    v265[1] = v272;
                    v265 += 2;
                  } while (v264 != 0);
                  if (v114 == v88) {
                    goto LABEL_52;
                  }
                  goto LABEL_110;
                }
                if (v90 == 1) {
                  if ((int)v88 < 1) {
                    goto LABEL_52;
                  }
                  if ((unsigned int)v88 <= 7 ||
                      ((unsigned __int64)v85 + 2 * v86 < v84 + v81 + v88
                           ? (v110 = v84 + v81 >=
                                     (unsigned __int64)v85 + 2 * v86 + 2 * v88)
                           : (v110 = true),
                       !v110)) {
                    v111 = 0;
                    v115 = v86;
                  LABEL_104:
                    v116 = v88 & 7;
                    if ((v88 & 7) != 0) {
                      v117 = v111;
                      v118 = (_BYTE*)(v276 + 2 * v115);
                      v115 += v116;
                      do {
                        v119 = *(_BYTE*)(v84 + v81 + v117);
                        *(v118 - 1) = v89;
                        ++v117;
                        --v116;
                        *v118 = v119;
                        v118 += 2;
                      } while (v116 != 0);
                      if ((unsigned __int64)(v111 - v88) >
                          0xFFFFFFFFFFFFFFF8LL) {
                        goto LABEL_52;
                      }
                    LABEL_143:
                      v162 = v88 - v117;
                      v163 = (char*)(v281 + v117 + v81);
                      v164 = (_BYTE*)(v274 + 2 * v115);
                      do {
                        v165 = *(v163 - 7);
                        *(v164 - 5) = v89;
                        v162 -= 8;
                        *(v164 - 4) = v165;
                        v166 = *(v163 - 6);
                        *(v164 - 3) = v89;
                        *(v164 - 2) = v166;
                        v167 = *(v163 - 5);
                        *(v164 - 1) = v89;
                        *v164 = v167;
                        v168 = *(v163 - 4);
                        v164[1] = v89;
                        v164[2] = v168;
                        v169 = *(v163 - 3);
                        v164[3] = v89;
                        v164[4] = v169;
                        v170 = *(v163 - 2);
                        v164[5] = v89;
                        v164[6] = v170;
                        v171 = *(v163 - 1);
                        v164[7] = v89;
                        v164[8] = v171;
                        v172 = *v163;
                        v163 += 8;
                        v164[9] = v89;
                        v164[10] = v172;
                        v164 += 16;
                      } while (v162 != 0);
                      goto LABEL_52;
                    }
                    v117 = v111;
                    if ((unsigned __int64)(v111 - v88) <=
                        0xFFFFFFFFFFFFFFF8LL) {
                      goto LABEL_143;
                    }
                    goto LABEL_52;
                  }
                  if ((unsigned int)v88 >= 0x20) {
                    v294.val[0] = vdupq_n_s8(v89);
                    v111 = v88 & 0x7FFFFFE0;
                    v223 = v84 + v81;
                    v224 = v111;
                    v225 = (char*)v279 + 2 * v86;
                    do {
                      v287.val[1] = *(int8x16_t*)v223;
                      v294.val[1] = *(int8x16_t*)(v223 + 16);
                      v223 += 32;
                      v287.val[0] = v294.val[0];
                      v224 -= 32;
                      vst2q_s8(v225 - 32, v287);
                      vst2q_s8(v225,
                               *(int8x16x2_t*)LANES128(v294.val[0]).n128_u64);
                      v225 += 64;
                    } while (v224 != 0);
                    if (v111 == v88) {
                      goto LABEL_52;
                    }
                    if ((v88 & 0x18) == 0) {
                      v115 = v111 + v86;
                      goto LABEL_104;
                    }
                  }
                  else {
                    v111 = 0;
                  }
                  v226 = v111;
                  v111 = v88 & 0x7FFFFFF8;
                  LANES128(v294.val[0]).n128_u64[0] =
                      LANES64_OF(vdup_n_s8(v89)).n64_u64[0];
                  v227 = v226 - v111;
                  v115 = v111 + v86;
                  v228 = (char*)v85 + 2 * v226 + 2 * v86;
                  v229 = (unsigned __int64*)(v84 + v226 + v81);
                  do {
                    v230 = *v229++;
                    LANES128(v294.val[1]).n128_u32[1] = HIDWORD(v230);
                    v227 += 8;
                    LANES64(v283.val[0]).n64_u64[0] =
                        LANES128(v294.val[0]).n128_u64[0];
                    LANES64(v283.val[1]).n64_u64[0] = v230;
                    vst2_s8(v228, v283);
                    v228 += 16;
                  } while (v227 != 0);
                  if (v111 == v88) {
                    goto LABEL_52;
                  }
                  goto LABEL_104;
                }
                if (v90 != 2) {
                  goto LABEL_78;
                }
                if ((int)v88 < 1) {
                  goto LABEL_52;
                }
                if ((unsigned int)v88 > 7 &&
                    ((unsigned __int64)v85 + 2 * v86 >= v84 + v81 + v88 ||
                     v84 + v81 >= (unsigned __int64)&v85[v88] + 2 * v86)) {
                  if ((unsigned int)v88 < 0x20) {
                    v91 = 0;
                  LABEL_164:
                    PSEUDO_LOW_LANE128(v294.val[0], n128_u32, v83 - v87);
                    v184 = v91;
                    v91 = v88 & 0x7FFFFFF8;
                    v185 = v184 - v91;
                    v92 = v86 + 2 * v91;
                    v186 = (char*)&v85[v184] + 2 * v86;
                    v187 = (unsigned __int64*)(v84 + v184 + v81);
                    LANES128(v294.val[0]).n128_u64[0] =
                        LANES64_OF(
                            vdup_lane_s8(
                                COERCE_AS(int8x8_t,
                                          LANES128(v294.val[0]).n128_u64[0]),
                                0))
                            .n64_u64[0];
                    do {
                      v188 = *v187++;
                      LANES128(v294.val[1]).n128_u32[1] = HIDWORD(v188);
                      v185 += 8;
                      LANES64(v284.val[0]).n64_u64[0] =
                          LANES128(v294.val[0]).n128_u64[0];
                      LANES64(v284.val[1]).n64_u64[0] = v188;
                      LANES64(v284.val[2]).n64_u64[0] =
                          LANES128(v294.val[0]).n128_u64[0];
                      LANES64(v284.val[3]).n64_u64[0] = v188;
                      vst4_s8(v186, v284);
                      v186 += 32;
                    } while (v185 != 0);
                    if (v91 == v88) {
                      goto LABEL_52;
                    }
                    goto LABEL_61;
                  }
                  v294.val[0] = vdupq_n_s8(v89);
                  v91 = v88 & 0x7FFFFFE0;
                  v180 = v91;
                  v181 = (char*)v280 + 2 * v86;
                  v182 = (int8x16_t*)(a4 + 996 + v81);
                  do {
                    v295.val[1] = v182[-1];
                    v294.val[1] = *v182;
                    v294.val[2] = v294.val[0];
                    v294.val[3] = *v182;
                    v183 = v181 - 64;
                    v182 += 2;
                    v180 -= 32;
                    v295.val[0] = v294.val[0];
                    v295.val[2] = v294.val[0];
                    v295.val[3] = v295.val[1];
                    vst4q_s8(v181, v294);
                    v181 += 128;
                    vst4q_s8(v183, v295);
                  } while (v180 != 0);
                  if (v91 == v88) {
                    goto LABEL_52;
                  }
                  if ((v88 & 0x18) != 0) {
                    goto LABEL_164;
                  }
                  v92 = v86 + 2 * v91;
                }
                else {
                  v91 = 0;
                  v92 = v86;
                }
              LABEL_61:
                v93 = v88 & 7;
                if ((v88 & 7) != 0) {
                  v94 = v91;
                  v95 = (_BYTE*)(v277 + 2 * v92);
                  v92 += 2 * v93;
                  do {
                    v96 = *(_BYTE*)(v84 + v81 + v94);
                    *(v95 - 3) = v89;
                    *(v95 - 1) = v89;
                    ++v94;
                    --v93;
                    *(v95 - 2) = v96;
                    *v95 = v96;
                    v95 += 4;
                  } while (v93 != 0);
                  if ((unsigned __int64)(v91 - v88) > 0xFFFFFFFFFFFFFFF8LL) {
                    goto LABEL_52;
                  }
                LABEL_135:
                  v139 = v88 - v94;
                  v140 = (char*)(v281 + v94 + v81);
                  v141 = (_BYTE*)(v275 + 2 * v92);
                  do {
                    v142 = *(v140 - 7);
                    *(v141 - 13) = v89;
                    *(v141 - 11) = v89;
                    v139 -= 8;
                    *(v141 - 12) = v142;
                    *(v141 - 10) = v142;
                    v143 = *(v140 - 6);
                    *(v141 - 9) = v89;
                    *(v141 - 7) = v89;
                    *(v141 - 8) = v143;
                    *(v141 - 6) = v143;
                    v144 = *(v140 - 5);
                    *(v141 - 5) = v89;
                    *(v141 - 3) = v89;
                    *(v141 - 4) = v144;
                    *(v141 - 2) = v144;
                    v145 = *(v140 - 4);
                    *(v141 - 1) = v89;
                    v141[1] = v89;
                    *v141 = v145;
                    v141[2] = v145;
                    v146 = *(v140 - 3);
                    v141[3] = v89;
                    v141[5] = v89;
                    v141[4] = v146;
                    v141[6] = v146;
                    v147 = *(v140 - 2);
                    v141[7] = v89;
                    v141[9] = v89;
                    v141[8] = v147;
                    v141[10] = v147;
                    v148 = *(v140 - 1);
                    v141[11] = v89;
                    v141[13] = v89;
                    v141[12] = v148;
                    v141[14] = v148;
                    v149 = *v140;
                    v140 += 8;
                    v141[15] = v89;
                    v141[17] = v89;
                    v141[16] = v149;
                    v141[18] = v149;
                    v141 += 32;
                  } while (v139 != 0);
                  goto LABEL_52;
                }
                v94 = v91;
                if ((unsigned __int64)(v91 - v88) <= 0xFFFFFFFFFFFFFFF8LL) {
                  goto LABEL_135;
                }
              LABEL_52:
                v86 += v88 * v90;
                v81 += v88;
                if (++v87 == v83) {
                  return result;
                }
              }
            }
          }
          else {
            v46 = a4 + 980;
            v47 = a4 + 52;
            v48 = 0;
            do {
              v49 = a4 + v48;
              v50 = *(unsigned __int8*)(a4 + v48 + 1236);
              v51 = *(unsigned int*)(v47 + 4 * v50);
              *(_DWORD*)(v47 + 4 * v50) = v51 + 1;
              *(_BYTE*)(v46 + v51) = v48;
              v52 = *(unsigned __int8*)(a4 + v48 + 1237);
              v53 = *(unsigned int*)(v47 + 4 * v52);
              *(_DWORD*)(v47 + 4 * v52) = v53 + 1;
              *(_BYTE*)(v46 + v53) = v48 + 1;
              v54 = *(unsigned __int8*)(a4 + v48 + 1238);
              v55 = *(unsigned int*)(v47 + 4 * v54);
              *(_DWORD*)(v47 + 4 * v54) = v55 + 1;
              *(_BYTE*)(v46 + v55) = v48 + 2;
              LOBYTE(v50) = v48 + 3;
              v48 += 4LL;
              v56 = *(unsigned __int8*)(v49 + 1239);
              v57 = *(unsigned int*)(v47 + 4 * v56);
              *(_DWORD*)(v47 + 4 * v56) = v57 + 1;
              *(_BYTE*)(v46 + v57) = v50;
            } while (v48 < (unsigned int)(v15 - 3));
            if ((int)v48 >= (int)v15) {
              goto LABEL_51;
            }
          }
          v58 = (unsigned int)v48;
          v59 = a4 + 980;
          v60 = a4 + 52;
          v61 = ((_BYTE)v15 - (_BYTE)v48) & 7;
          v48 = (unsigned int)v48;
          if ((((_BYTE)v15 - (_BYTE)v48) & 7) != 0) {
            v48 = (unsigned int)v48;
            do {
              v62 = LANES128(*(v7)).n128_u8[v48];
              --v61;
              v63 = *(unsigned int*)(v60 + 4 * v62);
              *(_DWORD*)(v60 + 4 * v62) = v63 + 1;
              *(_BYTE*)(v59 + v63) = v48++;
            } while (v61 != 0);
          }
          if ((unsigned __int64)(v58 - v15) <= 0xFFFFFFFFFFFFFFF8LL) {
            do {
              v64 = a4 + v48;
              v65 = *(unsigned __int8*)(a4 + v48 + 1236);
              v66 = *(unsigned int*)(v60 + 4 * v65);
              *(_DWORD*)(v60 + 4 * v65) = v66 + 1;
              *(_BYTE*)(v59 + v66) = v48;
              v67 = *(unsigned __int8*)(a4 + v48 + 1237);
              v68 = *(unsigned int*)(v60 + 4 * v67);
              *(_DWORD*)(v60 + 4 * v67) = v68 + 1;
              *(_BYTE*)(v59 + v68) = v48 + 1;
              v69 = *(unsigned __int8*)(a4 + v48 + 1238);
              v70 = *(unsigned int*)(v60 + 4 * v69);
              *(_DWORD*)(v60 + 4 * v69) = v70 + 1;
              *(_BYTE*)(v59 + v70) = v48 + 2;
              v71 = *(unsigned __int8*)(a4 + v48 + 1239);
              v72 = *(unsigned int*)(v60 + 4 * v71);
              *(_DWORD*)(v60 + 4 * v71) = v72 + 1;
              *(_BYTE*)(v59 + v72) = v48 + 3;
              v73 = *(unsigned __int8*)(a4 + v48 + 1240);
              v74 = *(unsigned int*)(v60 + 4 * v73);
              *(_DWORD*)(v60 + 4 * v73) = v74 + 1;
              *(_BYTE*)(v59 + v74) = v48 + 4;
              v75 = *(unsigned __int8*)(a4 + v48 + 1241);
              v76 = *(unsigned int*)(v60 + 4 * v75);
              *(_DWORD*)(v60 + 4 * v75) = v76 + 1;
              *(_BYTE*)(v59 + v76) = v48 + 5;
              v77 = *(unsigned __int8*)(a4 + v48 + 1242);
              v78 = *(unsigned int*)(v60 + 4 * v77);
              *(_DWORD*)(v60 + 4 * v77) = v78 + 1;
              *(_BYTE*)(v59 + v78) = v48 + 6;
              LOBYTE(v77) = v48 + 7;
              v48 += 8LL;
              v79 = *(unsigned __int8*)(v64 + 1243);
              v80 = *(unsigned int*)(v60 + 4 * v79);
              *(_DWORD*)(v60 + 4 * v79) = v80 + 1;
              *(_BYTE*)(v59 + v80) = v77;
            } while (v15 != v48);
          }
          goto LABEL_51;
        }
      }
      else {
        v33 = 0;
        v34 = 0;
        if (v32 == 0) {
          goto LABEL_40;
        }
      }
      v44 = (int*)(a4 + 4 * v33);
      do {
        v45 = *v44;
        v44[13] = v34;
        ++v44;
        --v32;
        v34 += v45;
      } while (v32 != 0);
      goto LABEL_40;
    }
    if (v13 <= HIDWORD(v282)) {
      goto LABEL_32;
    }
    if ((_DWORD)v282 != 0) {
      if ((unsigned int)v282 <= 7) {
        v17 = 0;
        goto LABEL_23;
      }
      if ((unsigned int)v282 >= 0x20) {
        v18 = vdupq_n_s8(v16);
        v17 = (unsigned int)v282 & 0xFFFFFFE0;
        v19 = v7;
        v20 = v17;
        do {
          v20 -= 32;
          v21 = vaddq_s8(vbicq_s8(v18, vceqzq_s8(v19[1])), v19[1]);
          *v19 = vaddq_s8(vbicq_s8(v18, vceqzq_s8(*v19)), *v19);
          v19[1] = v21;
          v19 += 2;
        } while (v20 != 0);
        if (v17 == v15) {
          goto LABEL_28;
        }
        if ((v15 & 0x18) == 0) {
          goto LABEL_23;
        }
      }
      else {
        v17 = 0;
      }
      v22 = v17;
      v17 = (unsigned int)v15 & 0xFFFFFFF8;
      LANES64(v23).n64_u64[0] = LANES64_OF(vdup_n_s8(v16)).n64_u64[0];
      v24 = v22 - v17;
      v25 = (int8x8_t*)(v22 + a4 + 1236);
      do {
        v24 += 8;
        LANES64(*(v25)).n64_u64[0] =
            LANES64_OF(vadd_s8(vbic_s8(v23, vceqz_s8(COERCE_AS(
                                                int8x8_t,
                                                LANES64(*(v25)).n64_u64[0]))),
                               COERCE_AS(int8x8_t, LANES64(*(v25)).n64_u64[0])))
                .n64_u64[0];
        ++v25;
      } while (v24 != 0);
      if (v17 != v15) {
      LABEL_23:
        v26 = v15 - v17;
        v27 = (_BYTE*)(v17 + a4 + 1236);
        do {
          if (*v27 != 0) {
            v28 = v16;
          }
          else {
            v28 = 0;
          }
          --v26;
          *v27++ += v28;
        } while (v26 != 0);
      }
    }
  LABEL_28:
    v29 = result;
    if (v14 != 0) {
      v30 = (_DWORD*)(a4 + 4LL * v13);
      v31 = v13;
      do {
        --v31;
        *v30 = v30[-v16];
        --v30;
      } while (v16 < v31);
    }
    memset_plt(a4 - 4LL * (v13 + ~v14) + 4 * v16, 0, 4LL * (v13 + ~v14) + 4);
    result = v29;
    goto LABEL_32;
  }
  return result;
}

#pragma GCC visibility pop
