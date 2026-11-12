#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* MovieRoutine_54420(__int64*, __int64, int, __int64, int);
__int64* silk_encode_indices(__int64, __int64*, int, int, int);
__int64 MovieRoutine_477a0(int*, _DWORD*, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, unsigned int, __int16);
__int64 MovieRoutine_488e0(_DWORD*, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64, __int64, __int64,
                           unsigned __int64, __int64, unsigned int, __int16);
__int64 MovieRoutine_603e0(int*, _DWORD*, __int64, __int64, unsigned int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_silk_45170(__int64 result, __int64);
__int64 opus_silk_fixed_5f5e0(__int64, __int64, __int64, __int64, unsigned int);
__int64 opus_silk_fixed_5fa60(__int64, __int64, __int64, __int64, unsigned int);
__int64 silk_gains_ID(__int64, int);
__int64 silk_gains_dequant(__int64 result, char*, _BYTE*, int, int);
__int64 silk_gains_quant(__int64 result, __int64, _BYTE*, int, int);
__int64 silk_log2lin(unsigned int);
__int64 silk_process_gains_FIX(__int64, unsigned int*, int);
__int64 silk_encode_frame_FIX(int* a1, int* a2, __int64* a3, unsigned int a4,
                              signed int a5, int a6);

__int64 silk_encode_frame_FIX(int* a1, int* a2, __int64* a3, unsigned int a4,
                              signed int a5, int a6)
{
  _DWORD* v7;
  int v8;
  __int64 v9;
  char* v10;
  int v11;
  int v12;
  int* v13;
  int v14;
  int* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  signed int v41;
  signed int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  _BYTE* v48;
  __int64 v49;
  int v50;
  signed int v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  bool v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int* v63;
  __int64* v64;
  int v65;
  __int64 v66;
  __int64* v67;
  int v68;
  __int64 v69;
  __int64* v70;
  char v71;
  __int64 v72;
  int* v73;
  int v74;
  __int64 v75;
  int v76;
  __int64 v77;
  int* v78;
  __int64* v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  int v102;
  int v103;
  __int64 v104;
  int v105;
  __int64 v106;
  int v107;
  __int64 v108;
  int v109;
  __int64 v110;
  int v111;
  int v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  signed int v121;
  __int64 v122;
  __int64 v123;
  int* v124;
  __int16* v125;
  __int64 v126;
  unsigned int* v127;
  unsigned __int64 v128;
  int v129;
  int v130;
  int v131;
  __int16 v132;
  unsigned __int64 v133;
  int v134;
  int v135;
  int v136;
  int v137;
  __int16 v138;
  unsigned __int64 v139;
  int v140;
  int v141;
  int v142;
  int v143;
  __int16 v144;
  unsigned __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  __int16 v150;
  __int16* v151;
  unsigned int* v152;
  int* v153;
  unsigned __int64 v154;
  int v155;
  int v156;
  int v157;
  int v158;
  __int16 v159;
  bool v160;
  __int64 v161;
  _BYTE* v162;
  _BOOL4 v165;
  __int64 v166;
  __int64 v167;
  __int64* v168;
  _BYTE* v169;
  __int64* v170;
  int v171;
  __int64 v172;
  __int64 v173;
  struct {
    _BYTE v174[12];
    int v175;
    _DWORD* v176;
    int* v177;
    char gap96_[4];
    int v178;
    _BYTE* v179;
    _BYTE* v180;
    _BYTE* v181;
    _BYTE* v182;
    _BYTE* v183;
    int v184;
    int v185;
    __int64* v186;
    char* v187;
    char gap168_[4];
    int v188;
    char* v189;
    char gap184_[4];
    int v190;
    signed int v191;
    _DWORD v192[3];
    __int64* v193;
    char gap216_[4];
    signed int v194;
    unsigned int v195;
    _BOOL4 v196;
    int v197;
    int v198;
    __int64* v199;
    _DWORD* v200;
    __int64 v201;
    signed int v202;
    int v203;
    int* v204;
    _BYTE* v205;
    char gap288_[4];
    int v206;
    _QWORD v207[2];
  } v174_;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  _BYTE v211[4352];
  struct {
    _BYTE v212[4352];
    __int64 v213;
    __int64 v214;
    __int64 v215;
    __int64 v216;
    __int64 v217;
    __int64 v218;
    int v219;
    char gap9092_[4];
    __int64 v220;
    __int64 v221;
    __int64 v222;
    __int64 v223;
    __int64 v224;
    __int64 v225;
    __int64 v226;
  } v212_;
  unsigned int v227[4];
  _BYTE v228[64];
  _DWORD v229[11];
  _BYTE v230[16];
  _BYTE v231[192];
  _BYTE v232[16];
  _BYTE v233[16];
  struct {
    _BYTE v234[16];
    signed int v235;
    char gap9540_[64];
    char v236;
  } v234_;
  _DWORD v237[1088];
  _QWORD v238[3];

  v7 = a1 + 1024;
  v174_.v199 = a3;
  v174_.v188 = a6;
  v174_.v202 = a5;
  v174_.v195 = a4;
  v174_.v177 = a2;
  memset_plt(v227, 0, 452);
  v212_.v226 = 0;
  v212_.v225 = 0;
  v212_.v224 = 0;
  v212_.v223 = 0;
  v212_.v222 = 0;
  v212_.v221 = 0;
  v212_.v220 = 0;
  v212_.v216 = 0;
  v212_.v217 = 0;
  v212_.v218 = 0;
  v212_.v219 = 0;
  v212_.v213 = 0;
  v212_.v214 = 0;
  v212_.v215 = 0;
  memset_plt(v212_.v212, 0, 4352);
  memset_plt(v211, 0, 4352);
  v8 = a1[1155];
  v174_.v205 = v7;
  v209 = 0;
  v210 = 0;
  v174_.v207[1] = 0;
  v208 = 0;
  v174_.v207[0] = 0;
  *((_BYTE*)v7 + 690) = v8 & 3;
  a1[1155] = v8 + 1;
  v9 = a1[1148];
  v174_.v176 = a1 + 1802;
  v10 = (char*)a1 + 2 * v9 + 7208;
  opus_silk_45170((__int64)(a1 + 4), (__int64)a1 + 5114);
  v11 = a1[1144];
  v174_.v189 = v10;
  memcpy_plt(&v10[10 * v11], (char*)a1 + 5114, 2LL * a1[1146]);
  v12 = a1[1170];
  v174_.v204 = a1;
  if (v12 != 0) {
    goto LABEL_2;
  }
  v15 = v174_.v204;
  v16 = v174_.v204[1146];
  v17 = v174_.v204[1148];
  v174_.v200 = v174_.v204 + 1188;
  v18 = 2LL * (v16 + v174_.v204[1149] + (int)v17);
  v19 = &v174_.v174[-((v18 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v19, 0, v18);
  v20 = (__int64)v174_.v189;
  opus_silk_fixed_5f5e0((__int64)v15, (__int64)v227, (__int64)v19,
                        (__int64)&v174_.v189[-2 * v17], v15[1277]);
  MovieRoutine_603e0(v15, v227, (__int64)&v19[2 * v17], v20, v15[1277]);
  v21 = (__int64)&v19[2 * v17];
  LODWORD(v19) = v174_.v195;
  opus_silk_fixed_5fa60((__int64)v15, (__int64)v227, v21, v20, v174_.v195);
  silk_process_gains_FIX((__int64)v15, v227, (int)v19);
  v22 = v15[1528];
  v238[0] = 0;
  v238[1] = 0;
  if (v22 != 0 && v15[1133] >= 78) {
    v23 = v15[1441];
    v24 = (__int64)&v15[9 * (int)v23 + 1530];
    v15[v23 + 1185] = 1;
    memcpy_plt(v237, v15 + 37, 4352);
    v25 = v174_.v200;
    v27 = *((_QWORD*)v174_.v200 + 2);
    v26 = *((_QWORD*)v174_.v200 + 3);
    v28 = *((_QWORD*)v174_.v200 + 1);
    *(_DWORD*)(v24 + 32) = v174_.v200[8];
    *(_QWORD*)(v24 + 16) = v27;
    *(_QWORD*)(v24 + 24) = v26;
    *(_QWORD*)(v24 + 8) = v28;
    v29 = v15[1145];
    *(_QWORD*)v24 = *v25;
    memcpy_plt(v238, v227, 4 * v29);
    v30 = v15[1441];
    if (v30 == 0 || v15[v30 + 1184] == 0) {
      v174_.v205[444] = v174_.v205[3096];
      v31 = (char)(*(_BYTE*)v24 + *((_BYTE*)v15 + 6116));
      if (v31 >= 63) {
        LOBYTE(v31) = 63;
      }
      *(_BYTE*)v24 = v31;
    }
    silk_gains_dequant((__int64)v227, (char*)v24, (_BYTE*)v15 + 4540,
                       v174_.v195 == 2, v29);
    if (v15[1157] <= 1 && v15[1168] < 1) {
      MovieRoutine_477a0(v15, v237, v24, (__int64)v174_.v189,
                         (__int64)&v15[80 * v15[1441] + 1557], (__int64)v228,
                         (__int64)v229, (__int64)v231, (__int64)v234_.v234,
                         (__int64)v233, (__int64)v232, (__int64)v227,
                         (__int64)v230, v234_.v235, v229[10]);
    }
    else {
      MovieRoutine_488e0(v15, (__int64)v237, v24, (__int64)v174_.v189,
                         (__int64)&v15[80 * v15[1441] + 1557], (__int64)v228,
                         (__int64)v229, (__int64)v231, (__int64)v234_.v234,
                         (__int64)v233, (__int64)v232, (unsigned __int64)v227,
                         (__int64)v230, v234_.v235, v229[10]);
    }
    memcpy_plt(v227, v238, 4LL * v15[1145]);
  }
  v32 = silk_gains_ID((__int64)v174_.v200, v15[1145]);
  v33 = v174_.v199[4];
  v174_.v193 = v174_.v199 + 4;
  v34 = v174_.v199[5];
  v35 = v174_.v199[6];
  v212_.v224 = v33;
  v212_.v225 = v34;
  v36 = *v174_.v199;
  v37 = v174_.v199[1];
  v212_.v226 = v35;
  v212_.v220 = v36;
  v212_.v221 = v37;
  v38 = v174_.v199[2];
  v212_.v223 = v174_.v199[3];
  v212_.v222 = v38;
  memcpy_plt(v212_.v212, v15 + 37, 4352);
  v39 = *((unsigned __int16*)v15 + 2894);
  v174_.v175 = (unsigned __int8)v174_.v205[690];
  v174_.v184 = v15[1446];
  v174_.v185 = v39;
  v174_.v179 = &v174_.v174[-1280];
  memset_plt(&v174_.v174[-1280], 0, 1275);
  v40 = v32;
  LOWORD(v41) = 256;
  v174_.v198 = 0;
  v174_.v201 = 0;
  v174_.v192[2] = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = (__int64)(v15 + 1197);
  v174_.v194 = 0;
  v174_.v178 = 0;
  v174_.v182 = v233;
  v174_.v183 = v234_.v234;
  v174_.v180 = v230;
  v174_.v181 = v232;
  *(_QWORD*)v174_.v192 = (unsigned int)(v174_.v202 - 5);
  v174_.v186 = &v210;
  v174_.v187 = (char*)&v208 + 4;
  v174_.v203 = -1;
  v174_.v196 = v174_.v195 == 2;
  v174_.v197 = -1;
  while (1) {
    v174_.v206 = v43;
    if (v40 == v174_.v203) {
      v51 = v42;
      goto LABEL_47;
    }
    if (v40 == v174_.v197) {
      v51 = HIDWORD(v174_.v201);
      goto LABEL_47;
    }
    v174_.v190 = v40;
    v174_.v191 = v42;
    if (v44 != 0) {
      v52 = v212_.v225;
      v53 = v174_.v199;
      v174_.v199[4] = v212_.v224;
      v53[5] = v52;
      v54 = v212_.v221;
      v53[6] = v212_.v226;
      *v53 = v212_.v220;
      v53[1] = v54;
      v55 = v212_.v223;
      v53[2] = v212_.v222;
      v53[3] = v55;
      memcpy_plt(v15 + 37, v212_.v212, 4352);
      v174_.v205[690] = v174_.v175;
      v56 = v174_.v184;
      *((_WORD*)v15 + 2894) = v174_.v185;
      v15[1446] = v56;
    }
    if (v15[1157] <= 1 && v15[1168] < 1) {
      MovieRoutine_477a0(
          v15, v15 + 37, (__int64)v174_.v200, (__int64)v174_.v189, v45,
          (__int64)v228, (__int64)v229, (__int64)v231, (__int64)v174_.v183,
          (__int64)v174_.v182, (__int64)v174_.v181, (__int64)v227,
          (__int64)v174_.v180, v234_.v235, v229[10]);
      v160 = (_DWORD)v174_.v201 == 0 && v44 == 6;
      v58 = v160;
      if (v160) {
      LABEL_33:
        v59 = v174_.v199[1];
        v212_.v216 = *v174_.v199;
        v60 = v174_.v199[2];
        v212_.v217 = v59;
        v212_.v218 = v60;
        LODWORD(v60) = *((_DWORD*)v174_.v199 + 6);
        *(_QWORD*)&v174_.v192[1] = *((unsigned int*)v174_.v199 + 7);
        v212_.v219 = v60;
        v61 = v174_.v193[1];
        v212_.v213 = *v174_.v193;
        v62 = v174_.v193[2];
        v212_.v214 = v61;
        v212_.v215 = v62;
      }
    }
    else {
      MovieRoutine_488e0(
          v15, (__int64)(v15 + 37), (__int64)v174_.v200, (__int64)v174_.v189,
          v45, (__int64)v228, (__int64)v229, (__int64)v231, (__int64)v174_.v183,
          (__int64)v174_.v182, (__int64)v174_.v181, (unsigned __int64)v227,
          (__int64)v174_.v180, v234_.v235, v229[10]);
      v57 = (_DWORD)v174_.v201 == 0 && v44 == 6;
      v58 = v57;
      if (v57) {
        goto LABEL_33;
      }
    }
    v63 = v174_.v204;
    v64 = v174_.v199;
    silk_encode_indices((__int64)v174_.v204, v174_.v199, v174_.v204[1441], 0,
                        v174_.v195);
    MovieRoutine_54420(v64, (unsigned int)(char)v174_.v205[685],
                       (char)v174_.v205[686], v45, v63[1146]);
    v51 = *((_DWORD*)v64 + 6) + __clz(*((_DWORD*)v64 + 8)) - 32;
    if (v51 > v174_.v202) {
      v65 = v58;
    }
    else {
      v65 = 0;
    }
    if (v65 == 1) {
      v66 = v212_.v217;
      v67 = v174_.v199;
      *v174_.v199 = v212_.v216;
      v67[1] = v66;
      LODWORD(v66) = v212_.v219;
      v67[2] = v212_.v218;
      v68 = v174_.v192[1];
      *((_DWORD*)v67 + 6) = v66;
      *((_DWORD*)v67 + 7) = v68;
      v69 = v212_.v214;
      v70 = v174_.v193;
      *v174_.v193 = v212_.v213;
      v70[1] = v69;
      v70[2] = v212_.v215;
      v71 = v234_.v236;
      v72 = (unsigned int)v174_.v204[1145];
      v174_.v205[3096] = v234_.v236;
      if ((int)v72 >= 1) {
        memset_plt(v174_.v200, 4, v72);
      }
      if (v174_.v195 != 2) {
        *(_BYTE*)v174_.v200 = v71;
      }
      v73 = v174_.v204;
      v74 = v174_.v184;
      v75 = (unsigned int)v174_.v204[1146];
      *((_WORD*)v174_.v204 + 2894) = v174_.v185;
      v73[1446] = v74;
      if ((int)v75 >= 1) {
        memset_plt(v45, 0, v75);
      }
      v76 = v73[1441];
      v77 = (__int64)v73;
      v78 = v73;
      v79 = v174_.v199;
      silk_encode_indices(v77, v174_.v199, v76, 0, v174_.v195);
      MovieRoutine_54420(v79, (unsigned int)(char)v174_.v205[685],
                         (char)v174_.v205[686], v45, v78[1146]);
      v51 = *((_DWORD*)v79 + 6) + __clz(*((_DWORD*)v79 + 8)) - 32;
    }
    v40 = v174_.v190;
    v42 = v174_.v191;
    if ((v44 | v174_.v188) == 0 && v51 <= v174_.v202) {
      goto LABEL_2;
    }
  LABEL_47:
    if (v44 == 6) {
      break;
    }
    v80 = v51 - v174_.v202;
    if (v51 <= v174_.v202) {
      if (v51 >= (signed __int32)v174_.v192[0]) {
        goto LABEL_2;
      }
      if (v40 != v174_.v203) {
        v82 = v40;
        v83 = *v174_.v199;
        v212_.v217 = v174_.v199[1];
        v84 = v174_.v199[2];
        v212_.v216 = v83;
        v212_.v218 = v84;
        v85 = *((unsigned int*)v174_.v199 + 7);
        v212_.v219 = *((_DWORD*)v174_.v199 + 6);
        v86 = *v174_.v193;
        v87 = v174_.v193[1];
        *(_QWORD*)&v174_.v192[1] = v85;
        v212_.v213 = v86;
        v88 = v174_.v193[2];
        v212_.v214 = v87;
        v212_.v215 = v88;
        memcpy_plt(v174_.v179, v83, v85);
        memcpy_plt(v211, v174_.v204 + 37, 4352);
        v40 = v82;
        v174_.v178 = (unsigned __int8)v174_.v205[3096];
      }
      v41 = (__int16)v41;
      if (v174_.v198 == 0) {
        v92 = v80 << 7;
        v15 = v174_.v204;
        v93 = v40;
        v94 = silk_log2lin(v92 / v174_.v204[1146] + 2048);
        v174_.v194 = (__int16)v41;
        v174_.v198 = 0;
        v42 = v51;
        v174_.v203 = v93;
        v41 = (unsigned int)(v94 * (__int16)v41) >> 16;
        LODWORD(v174_.v201) = 1;
        goto LABEL_133;
      }
      v15 = v174_.v204;
      v42 = v51;
      v174_.v203 = v40;
      LODWORD(v174_.v201) = 1;
    }
    else {
      if ((_DWORD)v174_.v201 == 0 && v44 >= 2) {
        v15 = v174_.v204;
        v174_.v198 = 0;
        v40 = -1;
        v234_.v235 += v234_.v235 >> 1;
        v81 = v174_.v204[1145];
        if (v81 < 1) {
          goto LABEL_129;
        }
        goto LABEL_67;
      }
      v15 = v174_.v204;
      v174_.v206 = (__int16)v41;
      if ((_DWORD)v174_.v201 == 0) {
        HIDWORD(v174_.v201) = v51;
        v174_.v198 = 1;
        v81 = v174_.v204[1145];
        if (v81 < 1) {
        LABEL_129:
          v51 = HIDWORD(v174_.v201);
        LABEL_130:
          HIDWORD(v174_.v201) = v51;
          v174_.v197 = v40;
          if ((__int16)v41 >= 0x4000) {
            LOWORD(v41) = 0x7FFF;
          }
          else {
            LOWORD(v41) = 2 * v41;
          }
          goto LABEL_133;
        }
      LABEL_67:
        v95 = v15[1147];
        if ((unsigned int)v81 < 4) {
          v96 = 0;
          v97 = 0;
        LABEL_115:
          v115 = v81 & 3;
          if (v115 == 0) {
            goto LABEL_129;
          }
          v116 = 0;
          while (2) {
            while (2) {
              if ((int)v95 < 1) {
                v118 = 0;
                if (v44 == 0) {
                  goto LABEL_128;
                }
              }
              else {
                v117 = v97;
                v118 = 0;
                do {
                  v119 = *(char*)(v45 + v117++);
                  if (v119 < 0) {
                    v119 = -v119;
                  }
                  v118 += v119;
                } while (v117 < (v96 + 1) * v95);
                if (v44 == 0) {
                LABEL_128:
                  *((_DWORD*)v174_.v207 + v96) = v118;
                  *((_WORD*)&v208 + v96) = v41;
                  v97 += v95;
                  ++v116;
                  ++v96;
                  if (v116 == v115) {
                    goto LABEL_129;
                  }
                  continue;
                }
              }
              break;
            }
            if (v118 >= (signed __int32)*((_DWORD*)v174_.v207 + v96) ||
                *((_DWORD*)&v209 + v96) != 0) {
              *((_DWORD*)&v209 + v96) = 1;
              v97 += v95;
              ++v116;
              ++v96;
              if (v116 == v115) {
                goto LABEL_129;
              }
              continue;
            }
            goto LABEL_128;
          }
        }
        v98 = v81 & 0x7FFFFFFC;
        v96 = 0;
        v97 = 0;
        v99 = 4 * v95;
        while (2) {
          while (2) {
            v100 = v96 | 1;
            if ((int)v95 < 1) {
              v102 = 0;
              if (v44 == 0) {
                goto LABEL_88;
              }
            }
            else {
              v101 = v97;
              v102 = 0;
              do {
                v103 = *(char*)(v45 + v101++);
                if (v103 < 0) {
                  v103 = -v103;
                }
                v102 += v103;
              } while (v101 < v100 * v95);
              if (v44 == 0) {
              LABEL_88:
                *((_DWORD*)v174_.v207 + v96) = v102;
                *((_WORD*)&v208 + v96) = v41;
                v104 = v96 | 2;
                if ((int)v95 < 1) {
                  goto LABEL_89;
                }
              LABEL_82:
                v105 = 0;
                v106 = v97 + (int)v95;
                do {
                  v107 = *(char*)(v45 + v106++);
                  if (v107 < 0) {
                    v107 = -v107;
                  }
                  v105 += v107;
                } while (v106 < v104 * v95);
                if (v44 == 0) {
                  goto LABEL_99;
                }
              LABEL_90:
                if (v105 < (signed __int32)*((_DWORD*)v174_.v207 + v100) &&
                    *((_DWORD*)&v209 + v100) == 0) {
                  goto LABEL_99;
                }
                *((_DWORD*)&v209 + v100) = 1;
                v108 = v96 | 3;
                if ((int)v95 >= 1) {
                  goto LABEL_93;
                }
              LABEL_100:
                v109 = 0;
                if (v44 != 0) {
                  goto LABEL_101;
                }
              LABEL_110:
                *((_DWORD*)v174_.v207 + v104) = v109;
                *((_WORD*)&v208 + v104) = v41;
                v96 += 4;
                if ((int)v95 < 1) {
                  goto LABEL_111;
                }
              LABEL_104:
                v112 = 0;
                v113 = v97 + 3 * (int)v95;
                do {
                  v114 = *(char*)(v45 + v113++);
                  if (v114 < 0) {
                    v114 = -v114;
                  }
                  v112 += v114;
                } while (v113 < v96 * v95);
                if (v44 == 0) {
                  goto LABEL_114;
                }
                break;
              }
            }
            if (v102 < (signed __int32)*((_DWORD*)v174_.v207 + v96) &&
                *((_DWORD*)&v209 + v96) == 0) {
              goto LABEL_88;
            }
            *((_DWORD*)&v209 + v96) = 1;
            v104 = v96 | 2;
            if ((int)v95 >= 1) {
              goto LABEL_82;
            }
          LABEL_89:
            v105 = 0;
            if (v44 != 0) {
              goto LABEL_90;
            }
          LABEL_99:
            *((_DWORD*)v174_.v207 + v100) = v105;
            *((_WORD*)&v208 + v100) = v41;
            v108 = v96 | 3;
            if ((int)v95 < 1) {
              goto LABEL_100;
            }
          LABEL_93:
            v109 = 0;
            v110 = v97 + 2 * (int)v95;
            do {
              v111 = *(char*)(v45 + v110++);
              if (v111 < 0) {
                v111 = -v111;
              }
              v109 += v111;
            } while (v110 < v108 * v95);
            if (v44 == 0) {
              goto LABEL_110;
            }
          LABEL_101:
            if (v109 < (signed __int32)*((_DWORD*)v174_.v207 + v104) &&
                *((_DWORD*)&v209 + v104) == 0) {
              goto LABEL_110;
            }
            *((_DWORD*)&v209 + v104) = 1;
            v96 += 4;
            if ((int)v95 >= 1) {
              goto LABEL_104;
            }
          LABEL_111:
            v112 = 0;
            if (v44 == 0) {
            LABEL_114:
              *((_DWORD*)v174_.v207 + v108) = v112;
              *((_WORD*)&v208 + v108) = v41;
              v97 += v99;
              if (v96 == v98) {
                goto LABEL_115;
              }
              continue;
            }
            break;
          }
          if (v112 >= (signed __int32)*((_DWORD*)v174_.v207 + v108) ||
              *((_DWORD*)&v209 + v108) != 0) {
            *((_DWORD*)&v209 + v108) = 1;
            v97 += v99;
            if (v96 == v98) {
              goto LABEL_115;
            }
            continue;
          }
          goto LABEL_114;
        }
      }
      v174_.v198 = 1;
      if ((v174_.v201 & 1) == 0) {
        goto LABEL_130;
      }
      v41 = v174_.v194;
      HIDWORD(v174_.v201) = v51;
      v174_.v197 = v40;
    }
    v174_.v194 = v41;
    v89 = (v174_.v206 - v41) >> 2;
    v90 =
        (v174_.v206 - v41) * (v174_.v202 - v42) / (HIDWORD(v174_.v201) - v42) +
        v41;
    v41 += v89;
    if ((__int16)v90 <= v41) {
      v91 = v174_.v206 - v89;
      if ((__int16)v90 >= v91) {
        LOWORD(v41) = v90;
      }
      else {
        LOWORD(v41) = v91;
      }
    }
  LABEL_133:
    v120 = v15[1145];
    v121 = v42;
    if (v120 < 1) {
      goto LABEL_16;
    }
    if ((unsigned int)v120 < 4) {
      v122 = 0;
      v123 = v120 & 3;
      if ((v120 & 3) == 0) {
        goto LABEL_16;
      }
    LABEL_172:
      v151 = (__int16*)&v208 + v122;
      v152 = &v227[v122];
      v153 = (int*)&v209 + v122;
      do {
        v158 = *v153++;
        v159 = v41;
        if (v158 != 0) {
          v159 = *v151;
        }
        ++v151;
        v154 = (unsigned __int64)((int)v152[108] * (__int64)v159) >> 16;
        if ((int)v154 <= -8388608) {
          v155 = -8388608;
        }
        else {
          v155 = v154;
        }
        v156 = v155 << 8;
        if ((int)v154 < 0x800000) {
          v157 = v156;
        }
        else {
          v157 = 2147483392;
        }
        --v123;
        *v152++ = v157;
      } while (v123 != 0);
      goto LABEL_16;
    }
    v124 = (int*)v174_.v186;
    v125 = (__int16*)v174_.v187;
    v126 = 0;
    v127 = v227;
    do {
      v132 = v41;
      if (*(v124 - 2) != 0) {
        v132 = *(v125 - 2);
      }
      v133 = (unsigned __int64)((int)v127[108] * (__int64)v132) >> 16;
      if ((int)v133 <= -8388608) {
        v134 = -8388608;
      }
      else {
        v134 = v133;
      }
      v135 = v134 << 8;
      if ((int)v133 < 0x800000) {
        v136 = v135;
      }
      else {
        v136 = 2147483392;
      }
      v137 = *(v124 - 1);
      *v127 = v136;
      v138 = v41;
      if (v137 != 0) {
        v138 = *(v125 - 1);
      }
      v139 = (unsigned __int64)((int)v127[109] * (__int64)v138) >> 16;
      if ((int)v139 <= -8388608) {
        v140 = -8388608;
      }
      else {
        v140 = v139;
      }
      v141 = v140 << 8;
      if ((int)v139 < 0x800000) {
        v142 = v141;
      }
      else {
        v142 = 2147483392;
      }
      v143 = *v124;
      v127[1] = v142;
      v144 = v41;
      if (v143 != 0) {
        v144 = *v125;
      }
      v145 = (unsigned __int64)((int)v127[110] * (__int64)v144) >> 16;
      if ((int)v145 <= -8388608) {
        v146 = -8388608;
      }
      else {
        v146 = v145;
      }
      v147 = v146 << 8;
      if ((int)v145 < 0x800000) {
        v148 = v147;
      }
      else {
        v148 = 2147483392;
      }
      v149 = v124[1];
      v127[2] = v148;
      v150 = v41;
      if (v149 != 0) {
        v150 = v125[1];
      }
      v126 -= 4;
      v125 += 4;
      v124 += 4;
      v128 = (unsigned __int64)((int)v127[111] * (__int64)v150) >> 16;
      if ((int)v128 <= -8388608) {
        v129 = -8388608;
      }
      else {
        v129 = v128;
      }
      v130 = v129 << 8;
      if ((int)v128 < 0x800000) {
        v131 = v130;
      }
      else {
        v131 = 2147483392;
      }
      v127[3] = v131;
      v127 += 4;
    } while (-(__int64)(v120 & 0x7FFFFFFC) != v126);
    v122 = -v126;
    v123 = v120 & 3;
    if ((v120 & 3) != 0) {
      goto LABEL_172;
    }
  LABEL_16:
    v46 = (__int64)v174_.v200;
    v47 = v174_.v196;
    v48 = v174_.v205 + 3096;
    v49 = (__int64)v174_.v200;
    v174_.v205[3096] = v234_.v236;
    silk_gains_quant(v49, (__int64)v227, v48, v47, v120);
    v50 = silk_gains_ID(v46, v15[1145]);
    v43 = v174_.v206;
    v40 = v50;
    ++v44;
    v42 = v121;
  }
  v165 = v40 == v174_.v203 || v51 > v174_.v202;
  if ((_DWORD)v174_.v201 != 0 && v165) {
    v166 = v212_.v216;
    v167 = v212_.v217;
    v168 = v174_.v199;
    v169 = v174_.v179;
    *v174_.v199 = v212_.v216;
    v168[1] = v167;
    v171 = v174_.v192[1];
    v170 = v174_.v193;
    v172 = v174_.v192[1];
    v168[2] = v212_.v218;
    *((_DWORD*)v168 + 6) = v212_.v219;
    *((_DWORD*)v168 + 7) = v171;
    v173 = v212_.v214;
    *v170 = v212_.v213;
    v170[1] = v173;
    v170[2] = v212_.v215;
    memcpy_plt(v166, v169, v172);
    memcpy_plt(v174_.v204 + 37, v211, 4352);
    v174_.v205[3096] = v174_.v178;
  }
LABEL_2:
  v13 = v174_.v204;
  memmove_plt(v174_.v176, (char*)v174_.v176 + 2 * v174_.v204[1146],
              2LL * (5 * v174_.v204[1144] + v174_.v204[1148]));
  if (v13[1170] != 0) {
    v14 = 0;
  }
  else {
    v161 = v13[1145];
    v13[1166] = 0;
    v162 = v174_.v205;
    v13[1136] = v229[v161 + 10];
    v162[445] = v162[685];
    v14 = (int)(*((_DWORD*)v174_.v199 + 6) + __clz(*((_DWORD*)v174_.v199 + 8)) -
                25) >>
          3;
  }
  *v174_.v177 = v14;
  return 0;
}

#pragma GCC visibility pop
