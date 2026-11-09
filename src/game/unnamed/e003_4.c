#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _UNKNOWN GameData_1ac690d;
extern __int64 (*GameData_1fc8480[])();
extern __int64 (*GameData_1fc8510[])();
extern __int64 (*GameData_1fc85a0[])();
extern __int64 (*GameData_1fd29f0[])();
extern __int64 (*GameData_1fd2a68[])();
extern char* GameData_211d798[4];
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64* GameData_212ce30;
extern _UNKNOWN* GameData_212ce38;
extern __int64 GameData_21a6070;
extern __int64 GameData_2265ee0;
__n128 GameRoutine_10c830(_QWORD, long double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
struct PseudoSret GameRoutine_1a0a790(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1fa0(void);
__int64 GameRoutine_1fd0(_QWORD, _QWORD);
__int64 GameRoutine_2020(_QWORD, _QWORD);
__int64 GameRoutine_21c0(_QWORD, _QWORD);
__int64 GameRoutine_2360(_QWORD, _QWORD);
__int64 GameRoutine_2500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_25eed0(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(long double, long double,
                                                  long double, long double);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b50a0(_QWORD);
__int64 GameRoutine_6b71e0(_QWORD);
__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a71f30(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
__int64 GameRoutine_c05690(_QWORD, _QWORD);
__int64 GameRoutine_c05cc0(_QWORD, _QWORD);
__int64 GameRoutine_c05fb0(_QWORD, _QWORD);
__int64 GameRoutine_c3d510(_QWORD, _QWORD);
__int64 GameRoutine_c3d730(_QWORD, _QWORD);
__int64 GameRoutine_c43a90(_QWORD);
__int64 GameRoutine_c46bf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c46d70(_QWORD, _QWORD);
__int64 GameRoutine_c47290(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47570(_QWORD);
__int64 GameRoutine_c475a0(_QWORD, _QWORD);
__int64 GameRoutine_c477c0(_QWORD);
__int64 GameRoutine_c47a00(_QWORD, _QWORD);
__int64 GameRoutine_c47c80(_QWORD, _QWORD);
__int64 GameRoutine_c47f40(_QWORD, _QWORD);
__int64 GameRoutine_c48320(_QWORD, _QWORD);
__int64 GameRoutine_c48550(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c601e0(_QWORD);
__int64 GameRoutine_c606c0(_QWORD, _QWORD);
__int64 GameRoutine_caed40(_QWORD*, __int64);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);

__int64 GameHr_b881a0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  int v4;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;

  v34 = a3;
  v4 = *((_DWORD*)a2 + 24);
  v6 = a4;
  v7 = GameData_211d798[a4];
  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
  v10 = GameRoutine_1a09c70(v7);
  v35[2] = v7;
  v37[0] = GameData_1fc8480;
  v37[1] = &v34;
  v38 = v37;
  v35[0] = GameData_1fc8510;
  v35[1] = v6;
  v36 = v35;
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v10);
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = GameRoutine_651b90(*v8, v13, 16, 0);
    *(_QWORD*)(v9 + 16) = v11;
    *(_QWORD*)(v9 + 24) = v12;
    *(_QWORD*)(v9 + 8) = v13 | 1;
    goto LABEL_9;
  }
  v12 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * v10;
  if (v10 != 0) {
  LABEL_9:
    GameRoutine_1a0b940(v12, v7, v11);
  }
  v14 = v38;
  *(_BYTE*)(v12 + v11) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_DWORD*)(v9 + 80) = v4;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fc85a0;
  if (v14 == nullptr) {
    *(_QWORD*)(v9 + 160) = 0;
    v15 = v36;
    if (v36 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if (v14 == v37) {
    *(_QWORD*)(v9 + 160) = v9 + 128;
    (*(void (**)(_QWORD*))(*v14 + 24LL))(v14);
    v15 = v36;
    if (v36 != nullptr) {
      goto LABEL_15;
    }
  LABEL_18:
    *(_QWORD*)(v9 + 208) = 0;
    goto LABEL_25;
  }
  *(_QWORD*)(v9 + 160) = (*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
  v15 = v36;
  if (v36 == nullptr) {
    goto LABEL_18;
  }
LABEL_15:
  if (v15 == v35) {
    *(_QWORD*)(v9 + 208) = v9 + 176;
    (*(void (**)(_QWORD*))(*v15 + 24LL))(v15);
  }
  else {
    *(_QWORD*)(v9 + 208) = (*(__int64 (**)(_QWORD*))(*v15 + 16LL))(v15);
  }
  if (v36 == v35) {
    v16 = 32;
  }
  else {
    if (v36 == nullptr) {
      goto LABEL_25;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v36 + v16))((__int64)v36);
LABEL_25:
  v17 = (__int64)v38;
  if (v38 == v37) {
    v18 = 32;
  }
  else {
    if (v38 == nullptr) {
      goto LABEL_30;
    }
    v18 = 40;
  }
  v17 = (*(__int64 (**)(__int64))(*v38 + v18))((__int64)v38);
LABEL_30:
  v20 = (__int64*)a2[1];
  v19 = a2[2];
  if ((unsigned __int64)v20 >= v19) {
    v22 = *a2;
    v23 = (__int64)v20 - *a2;
    v24 = (v23 >> 3) + 1;
    if (v24 >> 61 != 0) {
      GameRoutine_b32f30(v17);
    }
    v25 = v19 - v22;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        GameRoutine_60a210(v17);
      }
      v27 = GameRoutine_651b90(*v8, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = v27 + v23 - 8 * (v23 >> 3);
    *(_QWORD*)(v27 + v23) = v9;
    v21 = v27 + v23 + 8;
    GameRoutine_1a0b950(v29, v22, v23);
    *a2 = v29;
    a2[1] = v21;
    a2[2] = v28;
    if (v22 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v31, v30);
    }
  }
  else {
    *v20 = v9;
    v21 = (__int64)(v20 + 1);
  }
  a2[1] = v21;
  v32 = *(_QWORD*)(v21 - 8);
  v37[0] = a2;
  v37[1] = v32;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v32 + 16LL))(v32, v37);
}

__int64 GameHr_c42140(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  _QWORD* v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  unsigned int* v19;
  char v20;
  _QWORD* v21;
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
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 i;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  long double v69;
  __int64 v70;
  long double v71;
  __int64 v72;
  long double v73;
  __int64 v74;
  long double v75;
  __int64 v76;
  long double v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int* v82;
  __int64 v83;
  long double v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  char v93;
  unsigned __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  unsigned int* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  long double v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  long double v122;
  __int64 v123;
  long double v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  long double v141;
  __int64 v142;
  long double v143;
  __int64 v144;
  char v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  long double v151;
  __int64 v152;
  long double v153;
  __int64 v154;
  long double v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _QWORD* v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  _QWORD* v164;
  unsigned __int64 v165;
  __int64 v166;
  _QWORD* v167;
  unsigned __int64 v168;
  unsigned int v169;
  unsigned __int64 v170;
  char* v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  unsigned int v175;
  bool v176;
  __int64 v177;
  unsigned __int64 v178;
  long double v179;
  __int64 v180;
  char* v181;
  unsigned __int64 v182;
  char* v183;
  _QWORD* v184;
  __int64 v185;
  bool v186;
  unsigned __int64 v187;
  char* v188;
  unsigned __int64 v189;
  _QWORD* v190;
  char* v191;
  __int64 v192;
  char** v193;
  __int64 v194;
  char* v195;
  char* v196;
  unsigned __int64 v197;
  _QWORD* v198;
  __int64 v199;
  __int64 v200;
  char* v201;
  unsigned __int64 v202;
  long double v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  unsigned __int64 v209;
  char* v210;
  long double v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  unsigned int v215;
  bool v216;
  __int64 v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  char* v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  unsigned int v225;
  bool v226;
  __int64 v227;
  unsigned __int64 v228;
  unsigned __int64 v229;
  char* v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  long double v234;
  __int64 v235;
  __int64 v236;
  char v237;
  unsigned int* v238;
  __int64 v239;
  _QWORD* v240;
  unsigned int* v241;
  char* v242;
  _QWORD* v243;
  __int64 v244;
  _QWORD v245[7];
  _BYTE v246[16];
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  _QWORD v252[7];
  __int16 v253;
  int v254;
  __int64 v255;
  __int64 v256;
  _QWORD v257[3];
  __int64 v258;
  _QWORD* v259;
  __int64 v260;
  unsigned int* v261;
  __int64 v262;
  unsigned int* v263;
  __int64 v264;
  unsigned int* v265;
  _QWORD v266[3];
  __int64 v267;
  unsigned __int64 v268;
  char* v269;
  _QWORD v270[2];
  char* v271;
  _QWORD v272[2];
  char* v273;
  char* v274;
  __int64 v275;
  char* v276;

  if (a2 != 0) {
    v5 = *(_QWORD*)(a2 + 592);
    if (v5 != 0) {
      v253 = 257;
      v6 = *(_QWORD*)(a2 + 576);
      v252[5] = 0;
      v252[6] = 0;
      v254 = 0;
      v255 = v5;
      v256 = v6;
      v252[4] = -1;
      memset(&v245[4], 0, 24);
      v252[0] = GameData_212ce30 + 2;
      memset(&v252[1], 0, 24);
      v245[0] = 0x2000;
      v245[1] = 256;
      v245[2] = 2048;
      v245[3] = 16;
      GameRoutine_6b4ef0(v246, v252, v245);
      if (*(_BYTE*)(a1 + 192) == 1) {
        v7 = *(unsigned __int8*)(a1 + 168);
        v8 = (v7 & 1) == 0;
        v9 = v7 >> 1;
        if (v8) {
          v10 = (const char*)(a1 + 169);
        }
        else {
          v10 = *(const char**)(a1 + 184);
        }
        if (v8) {
          v11 = v9;
        }
        else {
          v11 = *(_QWORD*)(a1 + 176);
        }
      }
      else {
        v10 = "Default";
        v11 = 7;
      }
      v13 = (_QWORD*)GameData_212bf68;
      v14 = (unsigned int*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 144,
                                              16, 0);
      *((_BYTE*)v14 + 100) = 0;
      v19 = v14 + 25;
      *(_QWORD*)v14 = 0;
      *((_QWORD*)v14 + 1) = 0;
      *((_QWORD*)v14 + 2) = 0;
      *((_QWORD*)v14 + 3) = 0;
      *((_QWORD*)v14 + 4) = 0;
      *((_QWORD*)v14 + 5) = 0;
      *((_QWORD*)v14 + 6) = 0;
      *((_QWORD*)v14 + 7) = 0;
      *((_QWORD*)v14 + 8) = 0;
      *((_QWORD*)v14 + 9) = 0;
      *((_QWORD*)v14 + 10) = 0;
      *((_QWORD*)v14 + 11) = 0;
      *((_BYTE*)v14 + 104) = 0;
      *((_BYTE*)v14 + 96) = 1;
      if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_363:
        GameRoutine_60a1d0(v14);
      }
      v20 = a3 & 1;
      v21 = v14;
      v241 = v14 + 24;
      v243 = v14;
      v236 = a1;
      v237 = a3;
      if (v11 >= 0x17) {
        if ((v11 | 7) == 0x17) {
          v23 = 26;
        }
        else {
          v23 = (v11 | 7) + 1;
        }
        v22 = GameRoutine_651b90(*v13, v23, 16, 0);
        v243[16] = v22;
        v24 = v23 | 1;
        v21 = v243;
        v243[14] = v24;
        v243[15] = v11;
      }
      else {
        v22 = (__int64)v14 + 113;
        *((_BYTE*)v14 + 112) = 2 * v11;
        if (v11 == 0) {
        LABEL_22:
          v26 = v250;
          v25 = v251;
          v27 = v248;
          *(_BYTE*)(v22 + v11) = 0;
          *((_BYTE*)v21 + 136) = v20;
          v28 = 0x34F72C234F72C235LL;
          v29 = *(_QWORD*)(*(_QWORD*)(v27 +
                                      8 * ((unsigned __int64)(v25 + v26 - 1) >>
                                           9)) +
                           8 * ((v25 + v26 - 1) & 0x1FF));
          if (v29 == 0) {
            goto LABEL_218;
          }
          v239 = (__int64)v19;
          v257[0] = 0x6553796B535F6D1ALL;
          v257[1] = 0x736E6F697463LL;
          if ((*(_BYTE*)v29 & 0x7F) == 8 &&
              (v30 = GameRoutine_1a09c70((char*)v257 + 1),
               v31 = *(_QWORD*)(v29 + 1), v274 = (char*)v257 + 1, v275 = v30,
               v14 = (unsigned int*)GameRoutine_6b7f00(
                   v31, 0, v31, *(unsigned int*)(v31 + 4), &v274),
               v32 != *(_DWORD*)(v31 + 4))) {
            v34 = *v14;
            if (v32 >= v34) {
              v36 = v32 - v34;
              v37 = __clz(v36 + 16);
              v35 = *(_QWORD*)(*((_QWORD*)v14 + 2) + 8 * (27 - v37) + 8) +
                    32LL * (unsigned int)(v36 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v37));
            }
            else {
              v35 = *((_QWORD*)v14 + 1) + 32 * v32;
            }
            v33 = v35 + 16;
            if ((v257[0] & 1) == 0) {
            LABEL_35:
              if (v33 != 0 && (*(_BYTE*)v33 & 0x7F) == 7) {
                v39 = *(unsigned int**)(v33 + 1);
                v40 = *v243;
                v41 = v243[1];
                v42 = v39[1];
                v43 = v41 - *v243;
                v44 = 0x34F72C234F72C235LL * (v43 >> 3);
                v45 = v42 - v44;
                if (v42 <= v44) {
                  if (v42 < v44) {
                    v57 = v40 + 232LL * (unsigned int)v42;
                    while (v41 != v57) {
                      v41 -= 232;
                      GameRoutine_c47290(v41);
                    }
                    v243[1] = v57;
                  }
                }
                else {
                  v46 = v243[2];
                  if (0x34F72C234F72C235LL * ((v46 - v41) >> 3) >= v45) {
                    GameRoutine_1a0ba50(
                        v243[1], 0,
                        232 * ((232 * (unsigned __int64)(unsigned int)v45 -
                                232) /
                               0xE8) +
                            232,
                        v15, v16, v17);
                    v243[1] =
                        v41 +
                        232 *
                            ((232 * (unsigned __int64)(unsigned int)v45 - 232) /
                             0xE8) +
                        232;
                  }
                  else {
                    v259 = v243 + 2;
                    v47 = 0x34F72C234F72C235LL * ((v46 - v40) >> 3);
                    if (2 * v47 > v42) {
                      v42 = 2 * v47;
                    }
                    if (v47 >= 0x8D3DCB08D3DCB0LL) {
                      v42 = 0x11A7B9611A7B961LL;
                    }
                    if (v42 > 0x11A7B9611A7B961LL) {
                      GameRoutine_60a210(v14);
                    }
                    v48 = 232 * v42;
                    v49 = GameRoutine_651b90(*v13, 232 * v42, 16, 0);
                    v50 = v49 + v43;
                    v258 = v49 + v48;
                    v257[0] = v49;
                    v257[1] = v49 + v43;
                    GameRoutine_1a0ba50(
                        v49 + v43, 0,
                        232 * ((232 * (unsigned __int64)(unsigned int)v45 -
                                232) /
                               0xE8) +
                            232,
                        v51, v52, v53);
                    v257[2] =
                        v50 +
                        232 *
                            ((232 * (unsigned __int64)(unsigned int)v45 - 232) /
                             0xE8) +
                        232;
                    GameRoutine_c475a0(v243, v257);
                    v54 = v257[1];
                    for (i = v257[2]; i != v54; GameRoutine_c47290(i)) {
                      i -= 232;
                    }
                    if (v257[0] != 0) {
                      v56 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v56 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v56, v18);
                    }
                  }
                }
                v244 = v39[1];
                if ((_DWORD)v244 != 0) {
                  v58 = 0;
                  v238 = v39;
                  do {
                    v59 = *v39;
                    if (v58 >= v59) {
                      v61 = v58 - v59;
                      v62 = __clz(v61 + 16);
                      v60 =
                          *(_QWORD*)(*((_QWORD*)v39 + 2) + 8 * (27 - v62) + 8) +
                          16LL *
                              (unsigned int)(v61 - *((_DWORD*)GameData_212ce38 +
                                                     28 - v62));
                    }
                    else {
                      v60 = *((_QWORD*)v39 + 1) + 16 * v58;
                    }
                    v63 = v248;
                    v64 = ((v249 - v248) << 6) - 1;
                    if (v249 == v248) {
                      v64 = 0;
                    }
                    v65 = v251 + v250;
                    if (v64 == v251 + v250) {
                      GameRoutine_6b71e0(&v247);
                      v63 = v248;
                      v65 = v251 + v250;
                    }
                    *(_QWORD*)(*(_QWORD*)(v63 + 8 * (v65 >> 9)) +
                               8 * (v65 & 0x1FF)) = v60;
                    v66 = v251++;
                    if (*(_QWORD*)(*(_QWORD*)(v248 +
                                              8 * ((unsigned __int64)(v250 +
                                                                      v66) >>
                                                   9)) +
                                   8 * ((v250 + v66) & 0x1FF)) == 0) {
                      goto LABEL_198;
                    }
                    LOBYTE(v257[0]) = 18;
                    v67 = *v243;
                    strcpy((char*)v257 + 1, "beginTime");
                    v68 = (_QWORD*)(v67 + 232 * v58);
                    v258 = (__int64)v68;
                    GameRoutine_c47a00(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v70 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v70 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v70, v69);
                    }
                    v258 = (__int64)v68 + 4;
                    v257[0] = 0x656D6954646E650ELL;
                    v257[1] = 0;
                    GameRoutine_c47a00(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v72 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v72 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v72, v71);
                    }
                    LOBYTE(v257[0]) = 16;
                    v258 = (__int64)(v68 + 1);
                    strcpy((char*)v257 + 1, "customEv");
                    GameRoutine_c48550(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v74 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v74 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v74, v73);
                    }
                    strcpy((char*)v257, "\"unitLuminanceCoef");
                    BYTE3(v257[2]) = 0;
                    HIDWORD(v257[2]) = 0;
                    v258 = (__int64)(v68 + 2);
                    GameRoutine_c48550(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v76 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v76 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v76, v75);
                    }
                    v258 = (__int64)(v68 + 3);
                    v257[0] = 0x6557646E656C621CLL;
                    strcpy((char*)&v257[1], "ightPow");
                    GameRoutine_c48550(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v78 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v78 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v78, v77);
                    }
                    v79 = *(
                        _QWORD*)(*(_QWORD*)(v248 +
                                            8 * ((unsigned __int64)(v251 +
                                                                    v250 - 1) >>
                                                 9)) +
                                 8 * ((v251 + v250 - 1) & 0x1FF));
                    if (v79 == 0 ||
                        (v257[0] = 0x654B646E656C6212LL, v257[1] = 29561,
                         (*(_BYTE*)v79 & 0x7F) != 8)) {
                    LABEL_105:
                      v92 = 0;
                      v93 = 1;
                      v68[5] = v68[4];
                      goto LABEL_181;
                    }
                    v80 = GameRoutine_1a09c70((char*)v257 + 1);
                    v81 = *(_QWORD*)(v79 + 1);
                    v274 = (char*)v257 + 1;
                    v275 = v80;
                    v82 = (unsigned int*)GameRoutine_6b7f00(
                        v81, 0, v81, *(unsigned int*)(v81 + 4), &v274);
                    v85 = *(unsigned int*)(v81 + 4);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v86 = v83;
                      v87 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v87 = 56;
                      }
                      v82 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v87, v84);
                      if (v86 == v85) {
                        goto LABEL_105;
                      }
                    }
                    else if (v83 == v85) {
                      goto LABEL_105;
                    }
                    v88 = *(
                        _QWORD*)(*(_QWORD*)(v248 +
                                            8 * ((unsigned __int64)(v251 +
                                                                    v250 - 1) >>
                                                 9)) +
                                 8 * ((v251 + v250 - 1) & 0x1FF));
                    if (v88 == 0) {
                      goto LABEL_154;
                    }
                    v257[0] = 0x654B646E656C6212LL;
                    v257[1] = 29561;
                    if ((*(_BYTE*)v88 & 0x7F) == 8 &&
                        (v89 = GameRoutine_1a09c70((char*)v257 + 1),
                         v90 = *(_QWORD*)(v88 + 1), v274 = (char*)v257 + 1,
                         v275 = v89,
                         v82 = (unsigned int*)GameRoutine_6b7f00(
                             v90, 0, v90, *(unsigned int*)(v90 + 4), &v274),
                         v91 != *(_DWORD*)(v90 + 4))) {
                      v94 = *v82;
                      if (v91 >= v94) {
                        v96 = v91 - v94;
                        v97 = __clz(v96 + 16);
                        v95 =
                            *(_QWORD*)(*((_QWORD*)v82 + 2) + 8 * (27 - v97) +
                                       8) +
                            32LL * (unsigned int)(v96 -
                                                  *((_DWORD*)GameData_212ce38 +
                                                    28 - v97));
                      }
                      else {
                        v95 = *((_QWORD*)v82 + 1) + 32 * v91;
                      }
                      v88 = v95 + 16;
                      if ((v257[0] & 1) == 0) {
                        goto LABEL_114;
                      }
                    }
                    else {
                      v88 = 0;
                      if ((v257[0] & 1) == 0) {
                        goto LABEL_114;
                      }
                    }
                    if (v257[2] != 0) {
                      v98 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v98 = 56;
                      }
                      v82 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v98, v84);
                    }
                  LABEL_114:
                    if (v88 == 0) {
                      goto LABEL_154;
                    }
                    if ((*(_BYTE*)v88 & 0x7F) != 7 ||
                        (v99 = *(unsigned int**)(v88 + 1),
                         (_DWORD)(v100 = v99[1]) == 0)) {
                      v88 = 0;
                    LABEL_154:
                      v92 = 0;
                      goto LABEL_155;
                    }
                    v101 = 16 * v100;
                    v102 = GameRoutine_651b90(*v13, 16 * v100, 16, 0);
                    GameRoutine_1a0ba50(v102, 0, v101, v103, v104, v105);
                    v107 = v99[1];
                    if ((_DWORD)v107 != 0) {
                      v108 = 16 * v107;
                      v109 = 0;
                      v110 = 0;
                      do {
                        v111 = *v99;
                        if (v110 >= v111) {
                          v113 = v110 - v111;
                          v114 = __clz(v113 + 16);
                          v112 =
                              *(_QWORD*)(*((_QWORD*)v99 + 2) + 8 * (27 - v114) +
                                         8) +
                              16LL *
                                  (unsigned int)(v113 -
                                                 *((_DWORD*)GameData_212ce38 +
                                                   28 - v114));
                        }
                        else {
                          v112 = *((_QWORD*)v99 + 1) + v109;
                        }
                        v115 = v248;
                        v116 = ((v249 - v248) << 6) - 1;
                        if (v249 == v248) {
                          v116 = 0;
                        }
                        v117 = v251 + v250;
                        if (v116 == v251 + v250) {
                          GameRoutine_6b71e0(&v247);
                          v115 = v248;
                          v117 = v251 + v250;
                        }
                        *(_QWORD*)(*(_QWORD*)(v115 + 8 * (v117 >> 9)) +
                                   8 * (v117 & 0x1FF)) = v112;
                        v118 = v250;
                        v119 = v248;
                        v120 = v251 + 1;
                        v121 = v250 + v251++;
                        if (*(_QWORD*)(*(_QWORD*)(v248 + 8 * (v121 >> 9)) +
                                       8 * (v121 & 0x1FF)) != 0) {
                          strcpy((char*)v257, "\nalpha");
                          v258 = v102 + v109;
                          GameRoutine_c47a00(v246, v257);
                          if ((v257[0] & 1) != 0 && v257[2] != 0) {
                            v123 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v123 = 56;
                            }
                            GameRoutine_1a0a4e0(
                                *(_QWORD*)GameData_212bf68 + v123, v122);
                          }
                          v258 = v102 + v109 + 4;
                          v257[0] = 0x7468676965770CLL;
                          GameRoutine_c47a00(v246, v257);
                          if ((v257[0] & 1) != 0 && v257[2] != 0) {
                            v125 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v125 = 56;
                            }
                            GameRoutine_1a0a4e0(
                                *(_QWORD*)GameData_212bf68 + v125, v124);
                          }
                          v258 = v102 + v109 + 8;
                          v257[0] = 2003791878;
                          GameRoutine_c48550(v246, v257);
                          if ((v257[0] & 1) != 0 && v257[2] != 0) {
                            v126 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v126 = 56;
                            }
                            GameRoutine_1a0a4e0(
                                *(_QWORD*)GameData_212bf68 + v126, v106);
                          }
                          v118 = v250;
                          v120 = v251;
                          v119 = v248;
                        }
                        v127 = v249;
                        if (v249 == v119) {
                          v128 = 0;
                        }
                        else {
                          v128 = ((v249 - v119) << 6) - 1;
                        }
                        v251 = v120 - 1;
                        if ((unsigned __int64)(v128 - (v118 + v120) + 1) >=
                            0x400) {
                          if (*(_QWORD*)(v249 - 8) != 0) {
                            v129 = 128;
                            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 +
                                           200LL) == 0) {
                              v129 = 56;
                            }
                            GameRoutine_1a0a4e0(
                                *(_QWORD*)GameData_212bf68 + v129, v106);
                            v127 = v249;
                          }
                          v249 = v127 - 8;
                        }
                        ++v110;
                        v109 += 16;
                      } while (v108 != v109);
                    }
                    v13 = (_QWORD*)GameData_212bf68;
                    v92 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v101,
                                             16, 0);
                    v88 = v92 + v101;
                    GameRoutine_1a0b950(v92, v102, v101);
                    v152 = 128;
                    if (*(_QWORD*)(*v13 + 200LL) == 0) {
                      v152 = 56;
                    }
                    v82 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v152, v151);
                  LABEL_155:
                    v130 = v68[4];
                    v131 = v88 - v92;
                    v132 = v68[6];
                    if (v88 - v92 <= (unsigned __int64)(v132 - v130)) {
                      v138 = v68[5];
                      v139 = v138 - v130;
                      if (v131 > (unsigned __int64)(v138 - v130)) {
                        if (v138 != v130) {
                          GameRoutine_1a0b940(v68[4], v92, v138 - v130);
                          v138 = v68[5];
                        }
                        v39 = v238;
                        v140 = v88 - (v92 + v139);
                        if (v88 != v92 + v139) {
                          GameRoutine_1a0b940(v138, v92 + v139,
                                              v88 - (v92 + v139));
                        }
                        v93 = 0;
                        v68[5] = v138 + v140;
                        v13 = (_QWORD*)GameData_212bf68;
                        goto LABEL_180;
                      }
                      if (v88 != v92) {
                        GameRoutine_1a0b940(v68[4], v92, v88 - v92);
                      }
                      v93 = 0;
                      v68[5] = v130 + v131;
                      v13 = (_QWORD*)GameData_212bf68;
                    }
                    else {
                      if (v130 != 0) {
                        v68[5] = v130;
                        v133 = 128;
                        if (*(_QWORD*)(*v13 + 200LL) == 0) {
                          v133 = 56;
                        }
                        v82 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v133,
                                                                 v84);
                        v132 = 0;
                        v68[5] = 0;
                        v68[6] = 0;
                        v68[4] = 0;
                      }
                      v134 = v131 >> 4;
                      if ((unsigned __int64)(v131 >> 4) >> 60 != 0) {
                        goto LABEL_364;
                      }
                      if (v132 >> 3 > v134) {
                        v134 = v132 >> 3;
                      }
                      v135 = (unsigned __int64)v132 >= 0x7FFFFFFFFFFFFFF0LL
                                 ? 0xFFFFFFFFFFFFFFFLL
                                 : v134;
                      if (v135 >> 60 != 0) {
                      LABEL_364:
                        GameRoutine_c47570(v82);
                      }
                      v136 = GameRoutine_651b90(*v13, 16 * v135, 16, 0);
                      v137 = v136;
                      v68[4] = v136;
                      v68[5] = v136;
                      v68[6] = v136 + 16 * v135;
                      if (v88 != v92) {
                        GameRoutine_1a0b950(v136, v92, v88 - v92);
                      }
                      v93 = 0;
                      v68[5] = v137 + v131;
                    }
                    v39 = v238;
                  LABEL_180:
                    v28 = 0x34F72C234F72C235LL;
                  LABEL_181:
                    v258 = (__int64)(v68 + 7);
                    v257[0] = 0x54706D6152736912LL;
                    v257[1] = 30821;
                    GameRoutine_c47c80(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v142 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v142 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v142, v141);
                    }
                    strcpy((char*)v257, "\"enableConvertUnit");
                    BYTE3(v257[2]) = 0;
                    HIDWORD(v257[2]) = 0;
                    v258 = (__int64)v68 + 58;
                    GameRoutine_c47c80(v246, v257);
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v144 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v144 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v144, v143);
                    }
                    v258 = (__int64)(v68 + 8);
                    v257[0] = 0x656D614E7865740ELL;
                    v257[1] = 0;
                    GameRoutine_c47f40(v246, v257);
                    v258 = (__int64)(v68 + 12);
                    v257[0] = 0x4E78655465696D14LL;
                    v257[1] = 6647137;
                    GameRoutine_c47f40(v246, v257);
                    v258 = (__int64)(v68 + 16);
                    v257[0] = 0x4E786554676F6614LL;
                    v257[1] = 6647137;
                    GameRoutine_c47f40(v246, v257);
                    if (v92 != 0) {
                      v145 = v93;
                    }
                    else {
                      v145 = 1;
                    }
                    if ((v145 & 1) == 0) {
                      v146 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v146 = 56;
                      }
                      GameRoutine_1a0a4e0(*v13 + v146, v18);
                    }
                  LABEL_198:
                    v147 = v249;
                    v148 = v251;
                    v149 = ((v249 - v248) << 6) - 1;
                    if (v249 == v248) {
                      v149 = 0;
                    }
                    --v251;
                    if ((unsigned __int64)(v149 - (v148 + v250) + 1) >= 0x400) {
                      if (*(_QWORD*)(v249 - 8) != 0) {
                        v150 = 128;
                        if (*(_QWORD*)(*v13 + 200LL) == 0) {
                          v150 = 56;
                        }
                        GameRoutine_1a0a4e0(*v13 + v150, v18);
                        v147 = v249;
                      }
                      v249 = v147 - 8;
                    }
                    ++v58;
                  } while (v58 != v244);
                }
              }
              v257[0] = 0x65646E65525F6D1ELL;
              strcpy((char*)&v257[1], "rSunMoon");
              BYTE1(v257[2]) = 0;
              WORD1(v257[2]) = 0;
              HIDWORD(v257[2]) = 0;
              v258 = (__int64)v241;
              GameRoutine_c48320(v246, v257);
              if ((v257[0] & 1) != 0 && v257[2] != 0) {
                v154 = 128;
                if (*(_QWORD*)(*v13 + 200LL) == 0) {
                  v154 = 56;
                }
                GameRoutine_1a0a4e0(*v13 + v154, v153);
              }
              v257[0] = 0x656E6563535F6D1ELL;
              strcpy((char*)&v257[1], "ManualEv");
              BYTE1(v257[2]) = 0;
              WORD1(v257[2]) = 0;
              HIDWORD(v257[2]) = 0;
              v258 = v239;
              v14 = (unsigned int*)GameRoutine_c48550(v246, v257);
              v21 = v243;
              if ((v257[0] & 1) != 0 && v257[2] != 0) {
                v156 = 128;
                if (*(_QWORD*)(*v13 + 200LL) == 0) {
                  v156 = 56;
                }
                v14 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v156, v155);
              }
            LABEL_218:
              v157 = *v21;
              v158 = v21[1];
              v160 = v21 + 3;
              v159 = v21[3];
              v161 = (v21[4] - v159) >> 3;
              v162 = 0x34F72C234F72C235LL * ((v158 - *v21) >> 3);
              if (v162 <= v161) {
                if (v162 < v161) {
                  v21[4] = v159 - 0x58469EE58469EE58LL * ((v158 - *v21) >> 3);
                }
              }
              else {
                v14 = (unsigned int*)GameRoutine_c46d70(v21 + 3, v162 - v161);
                v157 = *v21;
                v158 = v21[1];
                v162 = 0x34F72C234F72C235LL * ((v158 - *v21) >> 3);
              }
              v163 = v21[6];
              v164 = v21 + 6;
              v165 = (v21[7] - v163) >> 3;
              if (v162 <= v165) {
                if (v162 < v165) {
                  v21[7] = v163 + 8 * v162;
                }
              }
              else {
                v14 = (unsigned int*)GameRoutine_c46d70(v21 + 6, v162 - v165);
                v157 = *v21;
                v158 = v21[1];
                v162 = 0x34F72C234F72C235LL * ((v158 - *v21) >> 3);
              }
              v166 = v21[9];
              v167 = v21 + 9;
              v168 = (v21[10] - v166) >> 3;
              if (v162 <= v168) {
                if (v162 < v168) {
                  v21[10] = v166 + 8 * v162;
                }
              }
              else {
                v14 = (unsigned int*)GameRoutine_c46d70(v21 + 9, v162 - v168);
                v157 = *v21;
                v158 = v21[1];
              }
              if (v158 != v157) {
                v169 = 1;
                v170 = 0;
                v240 = v21 + 3;
                v242 = (char*)v21 + 113;
                v171 = (char*)&v267 + 1;
                while (1) {
                  v172 = v157 + 232 * v170;
                  v268 = 0;
                  v269 = nullptr;
                  v267 = 0;
                  if (*(_BYTE*)(v172 + 88) != 1) {
                    break;
                  }
                  v175 = *(unsigned __int8*)(v172 + 64);
                  v173 = v172 + 64;
                  v174 = v175;
                  v176 = (v175 & 1) == 0;
                  if ((v175 & 1) != 0) {
                    v177 = *(_QWORD*)(v173 + 16);
                  }
                  else {
                    v177 = v173 + 1;
                  }
                  if (v176) {
                    v178 = v174 >> 1;
                  }
                  else {
                    v178 = *(_QWORD*)(v173 + 8);
                  }
                  GameRoutine_c46bf0(v257, v177, v178);
                  if ((v267 & 1) != 0 && v269 != nullptr) {
                    v180 = 128;
                    if (*(_QWORD*)(*v13 + 200LL) == 0) {
                      v180 = 56;
                    }
                    GameRoutine_1a0a4e0(*v13 + v180, v179);
                  }
                  v267 = v257[0];
                  v268 = v257[1];
                  v181 = (char*)v257[2];
                LABEL_299:
                  v269 = v181;
                  v264 = 0;
                  v265 = nullptr;
                  if ((v267 & 1) != 0) {
                    v209 = v268;
                  }
                  else {
                    v209 = (unsigned __int64)(unsigned __int8)v267 >> 1;
                  }
                  if ((v267 & 1) != 0) {
                    v210 = v181;
                  }
                  else {
                    v210 = v171;
                  }
                  *(_QWORD*)(*v160 + 8 * v170) = (*(
                      __int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
                      **(_QWORD**)(*GameData_212c010[0] + 13432) + 40LL))(
                      *(_QWORD*)(*GameData_212c010[0] + 13432), v210, v209,
                      &v264);
                  v14 = v265;
                  if (v265 != nullptr) {
                    v14 = (unsigned int*)GameRoutine_1a09c50(v265);
                  }
                  v212 = *v21 + 232 * v170;
                  if (*(_BYTE*)(v212 + 120) == 1) {
                    v215 = *(unsigned __int8*)(v212 + 96);
                    v213 = v212 + 96;
                    v214 = v215;
                    v216 = (v215 & 1) == 0;
                    if ((v215 & 1) != 0) {
                      v217 = *(_QWORD*)(v213 + 16);
                    }
                    else {
                      v217 = v213 + 1;
                    }
                    if (v216) {
                      v218 = v214 >> 1;
                    }
                    else {
                      v218 = *(_QWORD*)(v213 + 8);
                    }
                    GameRoutine_c46bf0(v257, v217, v218);
                    v262 = 0;
                    v263 = nullptr;
                    if ((v257[0] & 1) != 0) {
                      v219 = v257[1];
                    }
                    else {
                      v219 = (unsigned __int64)LOBYTE(v257[0]) >> 1;
                    }
                    if ((v257[0] & 1) != 0) {
                      v220 = (char*)v257[2];
                    }
                    else {
                      v220 = (char*)v257 + 1;
                    }
                    *(_QWORD*)(*v164 + 8 * v170) = (*(__int64 (**)(
                        _QWORD, char*, unsigned __int64, __int64*))(
                        **(_QWORD**)(*GameData_212c010[0] + 13432) + 40LL))(
                        *(_QWORD*)(*GameData_212c010[0] + 13432), v220, v219,
                        &v262);
                    v14 = v263;
                    if (v263 != nullptr) {
                      v14 = (unsigned int*)GameRoutine_1a09c50(v263);
                    }
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v221 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v221 = 56;
                      }
                      v14 =
                          (unsigned int*)GameRoutine_1a0a4e0(*v13 + v221, v211);
                    }
                  }
                  else {
                    *(_QWORD*)(*v164 + 8 * v170) = 0;
                  }
                  v222 = *v21 + 232 * v170;
                  if (*(_BYTE*)(v222 + 152) == 1) {
                    v225 = *(unsigned __int8*)(v222 + 128);
                    v223 = v222 + 128;
                    v224 = v225;
                    v226 = (v225 & 1) == 0;
                    if ((v225 & 1) != 0) {
                      v227 = *(_QWORD*)(v223 + 16);
                    }
                    else {
                      v227 = v223 + 1;
                    }
                    if (v226) {
                      v228 = v224 >> 1;
                    }
                    else {
                      v228 = *(_QWORD*)(v223 + 8);
                    }
                    GameRoutine_c46bf0(v257, v227, v228);
                    v260 = 0;
                    v261 = nullptr;
                    if ((v257[0] & 1) != 0) {
                      v229 = v257[1];
                    }
                    else {
                      v229 = (unsigned __int64)LOBYTE(v257[0]) >> 1;
                    }
                    if ((v257[0] & 1) != 0) {
                      v230 = (char*)v257[2];
                    }
                    else {
                      v230 = (char*)v257 + 1;
                    }
                    *(_QWORD*)(*v167 + 8 * v170) = (*(__int64 (**)(
                        _QWORD, char*, unsigned __int64, __int64*))(
                        **(_QWORD**)(*GameData_212c010[0] + 13432) + 40LL))(
                        *(_QWORD*)(*GameData_212c010[0] + 13432), v230, v229,
                        &v260);
                    v14 = v261;
                    if (v261 != nullptr) {
                      v14 = (unsigned int*)GameRoutine_1a09c50(v261);
                    }
                    if ((v257[0] & 1) != 0 && v257[2] != 0) {
                      v231 = 128;
                      if (*(_QWORD*)(*v13 + 200LL) == 0) {
                        v231 = 56;
                      }
                      v14 =
                          (unsigned int*)GameRoutine_1a0a4e0(*v13 + v231, v211);
                    }
                  }
                  else {
                    *(_QWORD*)(*v167 + 8 * v170) = 0;
                  }
                  if ((v267 & 1) != 0 && v269 != nullptr) {
                    v232 = 128;
                    if (*(_QWORD*)(*v13 + 200LL) == 0) {
                      v232 = 56;
                    }
                    v14 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v232, v211);
                  }
                  v157 = *v21;
                  v170 = v169++;
                  if (((__int64)(v21[1] - *v21) >> 3) * v28 <= v170) {
                    goto LABEL_354;
                  }
                }
                v182 = *((unsigned __int8*)v21 + 112);
                v183 = v171;
                v184 = v167;
                v185 = v28;
                v186 = (v182 & 1) == 0;
                v187 = v182 >> 1;
                if (v186) {
                  v188 = v242;
                }
                else {
                  v188 = (char*)v21[16];
                }
                if (v186) {
                  v189 = v187;
                }
                else {
                  v189 = v21[15];
                }
                if (v189 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_363;
                }
                v190 = v164;
                if (v189 >= 0x17) {
                  if ((v189 | 7) == 0x17) {
                    v192 = 26;
                  }
                  else {
                    v192 = (v189 | 7) + 1;
                  }
                  v191 =
                      (char*)GameRoutine_651b90(GameData_2265ee0, v192, 16, 0);
                  v272[1] = v189;
                  v273 = v191;
                  v272[0] = v192 | 1;
                }
                else {
                  v191 = (char*)v272 + 1;
                  LOBYTE(v272[0]) = 2 * v189;
                  if (v189 == 0) {
                    goto LABEL_261;
                  }
                }
                GameRoutine_1a0b940(v191, v188, v189);
              LABEL_261:
                v191[v189] = 0;
                v193 = (char**)GameRoutine_1a09ce0(v272, &GameData_1ac690d, 1);
                v194 = (__int64)v193[1];
                v195 = *v193;
                v276 = v193[2];
                v274 = v195;
                v275 = v194;
                v193[1] = nullptr;
                v193[2] = nullptr;
                *v193 = nullptr;
                *(struct PseudoSret*)(v270) = GameRoutine_1a0a790(v169 - 1);
                if ((v270[0] & 1) != 0) {
                  v196 = v271;
                }
                else {
                  v196 = (char*)v270 + 1;
                }
                if ((v270[0] & 1) != 0) {
                  v197 = v270[1];
                }
                else {
                  v197 = (unsigned __int64)LOBYTE(v270[0]) >> 1;
                }
                v198 = (_QWORD*)GameRoutine_1a09ce0(&v274, v196, v197);
                v200 = v198[1];
                v199 = v198[2];
                v257[0] = *v198;
                v257[1] = v200;
                v257[2] = v199;
                v198[1] = 0;
                v198[2] = 0;
                *v198 = 0;
                if ((v257[0] & 1) != 0) {
                  v201 = (char*)v257[2];
                }
                else {
                  v201 = (char*)v257 + 1;
                }
                if ((v257[0] & 1) != 0) {
                  v202 = v257[1];
                }
                else {
                  v202 = (unsigned __int64)LOBYTE(v257[0]) >> 1;
                }
                GameRoutine_c46bf0(v266, v201, v202);
                v13 = (_QWORD*)GameData_212bf68;
                if ((v257[0] & 1) != 0 && v257[2] != 0) {
                  v204 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v204 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v204, v203);
                }
                v160 = v240;
                v28 = v185;
                v164 = v190;
                if ((v270[0] & 1) != 0 && v271 != nullptr) {
                  v205 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v205 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v205, v203);
                }
                v21 = v243;
                v167 = v184;
                if (((unsigned __int8)v274 & 1) != 0 && v276 != nullptr) {
                  v206 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v206 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v206, v203);
                }
                v171 = v183;
                if ((v272[0] & 1) != 0 && v273 != nullptr) {
                  v207 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v207 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v207, v203);
                }
                if ((v267 & 1) != 0 && v269 != nullptr) {
                  v208 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v208 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v208, v203);
                }
                v267 = v266[0];
                v268 = v266[1];
                v181 = (char*)v266[2];
                goto LABEL_299;
              }
            LABEL_354:
              if ((v237 & 1) != 0) {
                v233 = *(_QWORD*)(v236 + 968);
                *(_QWORD*)(v236 + 968) = v21;
                if (v233 == 0) {
                  goto LABEL_361;
                }
              }
              else {
                v233 = *(_QWORD*)(v236 + 976);
                *(_QWORD*)(v236 + 976) = v21;
                if (v233 == 0) {
                LABEL_361:
                  GameRoutine_6b50a0(v246);
                  (*(void (**)(_QWORD*))(v252[0] + 24LL))(v252);
                  return 4;
                }
              }
              GameRoutine_c477c0(v233);
              v235 = 128;
              if (*(_QWORD*)(*v13 + 200LL) == 0) {
                v235 = 56;
              }
              GameRoutine_1a0a4e0(*v13 + v235, v234);
              goto LABEL_361;
            }
          }
          else {
            v33 = 0;
            if ((v257[0] & 1) == 0) {
              goto LABEL_35;
            }
          }
          if (v257[2] != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v13 + 200LL) == 0) {
              v38 = 56;
            }
            v14 = (unsigned int*)GameRoutine_1a0a4e0(*v13 + v38, v18);
          }
          goto LABEL_35;
        }
      }
      v14 = (unsigned int*)GameRoutine_1a0b940(v22, v10, v11);
      goto LABEL_22;
    }
  }
  if ((a3 & 1) != 0) {
    GameRoutine_c43a90(a1);
    return 5;
  }
  return 4;
}

__int64 GameHr_c5dca0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  _QWORD* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  char v32;
  char* v33;
  char* v34;
  unsigned __int64 v35;
  _BOOL4 v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64* v53;
  __int64* v54;
  unsigned __int64 v55;
  char* v56;
  __int64* v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  long double v76;
  __int64 v77;
  long double v78;
  _DWORD* v79;
  __int64 v80;
  long double v81;
  _DWORD* v82;
  __int64 v83;
  long double v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  unsigned __int64 v104;
  int v105;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64** v112;
  __int64* v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64** v116;
  __int64* v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  float v122;
  __int64 v123;
  float v124;
  _BOOL8 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 primeEm;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64* v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  float v143;
  float v144;
  float v145;
  _BOOL8 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  __int64 result;
  long double v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  __int64* v167;
  _QWORD* v168;
  _QWORD v169[7];
  __int16 v170;
  int v171;
  __int64 v172;
  __int64 v173;
  _QWORD v174[2];
  char* v175;
  _QWORD v176[3];
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64 v180;
  _DWORD v181[3];

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = a1;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fd29f0;
  *(_QWORD*)(a1 + 8) = a2;
  v7 = (_QWORD*)GameData_212bf68;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v8 = (_QWORD*)GameRoutine_651b90(*v7, 96, 16, 0);
  v8[3] = 0;
  v9 = v8 + 3;
  v8[7] = 0;
  v8[8] = 0;
  v8[4] = 0;
  v10 = v8 + 4;
  v8[1] = 0;
  v8[2] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[10] = 0;
  v8[11] = 0;
  *v8 = GameData_1fd2a68;
  *((_DWORD*)v8 + 6) = 1;
  *((_DWORD*)v8 + 16) = 1065353216;
  v8[9] = 0;
  v167 = v8 + 9;
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8);
  }
  v11 = v8;
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a4 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(*v7, v13, 16, 0);
    v174[1] = a4;
    v175 = v12;
    v174[0] = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v174[0]) = 2 * a4;
  v12 = (char*)v174 + 1;
  if (a4 != 0) {
  LABEL_9:
    GameRoutine_1a0b940(v12, a3, a4);
  }
  v12[a4] = 0;
  v14 = *(_QWORD*)(*GameData_212c010[0] + 13432);
  if ((v174[0] & 1) != 0) {
    v15 = v175;
  }
  else {
    v15 = (char*)v174 + 1;
  }
  v16 = GameRoutine_1a09c70(v15);
  v17 = (*(__int64 (**)(__int64, char*, __int64, __int64))(
      *(_QWORD*)v14 + 56LL))(v14, v15, v16, 255);
  v18 = *(_QWORD*)(v17 + 592);
  v19 = v17;
  if (v18 == 0) {
    goto LABEL_303;
  }
  v164 = v17;
  v20 = *(_QWORD*)(v17 + 576);
  v169[6] = 0;
  v171 = 0;
  v169[4] = -1;
  v169[5] = 0;
  v170 = 257;
  v21 = *v7;
  v172 = v18;
  v173 = v20;
  v169[0] = GameData_212ce30 + 2;
  memset(&v169[1], 0, 24);
  v22 = GameRoutine_651b90(v21, 544, 16, 0);
  *(_QWORD*)v22 = 0;
  *(_BYTE*)(v22 + 12) = 0;
  v168 = (_QWORD*)v22;
  *(_DWORD*)(v22 + 8) = -1;
  *(_QWORD*)(v22 + 16) = v22 + 32;
  *(_QWORD*)(v22 + 24) = v22 + 32;
  GameRoutine_1fa0();
  GameRoutine_1fd0(v22, v169);
  LOBYTE(v178) = 0;
  v180 = (__int64)v9;
  LOBYTE(v177) = 14;
  *(_DWORD*)((char*)&v177 + 1) = 1936876886;
  HIDWORD(v177) = 1852795251;
  if ((GameRoutine_c05690(&v168, &v177) & 1) != 0) {
    GameRoutine_21c0(v168, v180);
  }
  if ((v177 & 1) != 0 && v179 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v24 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v24, v23);
  }
  v178 = 0;
  v179 = nullptr;
  v177 = 0;
  LOWORD(v176[0]) = 0;
  GameRoutine_2020(v168, v176);
  v25 = SLOWORD(v176[0]);
  v26 = GameRoutine_651b90(*v7, SLOWORD(v176[0]), 16, 0);
  GameRoutine_1a0ba50(v26, 0, v25, v27, v28, v29);
  GameRoutine_2500(v168, v26, v25);
  GameRoutine_60a060(&v177, v26, SLOWORD(v176[0]));
  v31 = 128;
  if (*(_QWORD*)(*v7 + 200LL) == 0) {
    v31 = 56;
  }
  GameRoutine_1a0a4e0(*v7 + v31, v30);
  v32 = v177;
  v176[0] = 0x736D696E415F6D0ELL;
  v176[1] = 0;
  v33 = v179;
  if ((v177 & 1) != 0) {
    v34 = v179;
  }
  else {
    v34 = (char*)&v177 + 1;
  }
  if ((v177 & 1) != 0) {
    v35 = v178;
  }
  else {
    v35 = (unsigned __int64)(unsigned __int8)v177 >> 1;
  }
  v36 = GameRoutine_1a09cf0((char*)v176 + 1, v34) == 0;
  v38 = v35 == 7 && v36;
  if ((v32 & 1) != 0 && v33 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v39 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v39, v37);
  }
  v165 = v9;
  v166 = v4;
  if ((_DWORD)v38 != 0) {
    v176[0] = 0;
    v40 = GameRoutine_2360(v168, v176);
    v41 = v11[9];
    v42 = (_QWORD*)v11[10];
    v43 = v176[0];
    v44 = (char*)v42 - v41;
    v45 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v42 - v41) >> 3);
    v46 = v176[0] - v45;
    if (v176[0] <= v45) {
      if (v176[0] >= v45) {
        v38 = v11[10];
      LABEL_89:
        if (v38 != *v167) {
          v72 = (v38 - *v167) >> 3;
          v73 = 40;
          v38 = 0x6D696E6108LL;
          v74 = 0x2E8BA2E8BA2E8BA3LL * v72;
          do {
            BYTE5(v177) = 0;
            v75 = *v167;
            *(_DWORD*)((char*)&v177 + 1) = 1701667182;
            LOBYTE(v177) = 8;
            v180 = v75 + v73 - 40;
            GameRoutine_c05cc0(&v168, &v177);
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v77 = 128;
              }
              else {
                v77 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v77, v76);
            }
            v180 = v75 + v73 - 16;
            v177 = 0x5274657366666F18LL;
            v178 = 0x6D6F646E61LL;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v79 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v78) = v181[0];
                *v79 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v80 = 128;
              }
              else {
                v80 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v80, v78);
            }
            v180 = v75 + v73 - 12;
            v177 = 0x61767265746E691CLL;
            v178 = 0x6D6F646E61526CLL;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v82 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v81) = v181[0];
                *v82 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v83 = 128;
              }
              else {
                v83 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v83, v81);
            }
            v180 = v75 + v73 - 8;
            v177 = 0x6152646565707316LL;
            v178 = 1836016750;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v85 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v84) = v181[0];
                *v85 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v86 = 128;
              }
              else {
                v86 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v86, v84);
            }
            v177 = 0x6D696E6108LL;
            v180 = v75 + v73;
            if ((GameRoutine_c3d510(&v168, &v177) & 1) != 0) {
              GameRoutine_c3d730(v180, &v168);
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v87 = 128;
              }
              else {
                v87 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v87, v37);
            }
            --v74;
            v73 += 88;
          } while (v74 != 0);
        }
        goto LABEL_133;
      }
      v38 = v41 + 88LL * v176[0];
      if ((_QWORD*)v38 != v42) {
        do {
          v67 = *(v42 - 3);
          v68 = v42;
          if (v67 != 0) {
            *(v42 - 2) = v67;
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            GameRoutine_1a0a4e0(*v7 + v69, v37);
          }
          v42 -= 11;
          if ((*(_BYTE*)(v68 - 11) & 1) != 0 && *(v68 - 9) != 0) {
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v70 = 128;
            }
            else {
              v70 = 56;
            }
            GameRoutine_1a0a4e0(*v7 + v70, v37);
          }
        } while (v42 != (_QWORD*)v38);
      }
    }
    else {
      v47 = v11[11];
      if (0x2E8BA2E8BA2E8BA3LL * ((v47 - (__int64)v42) >> 3) < v46) {
        if (v176[0] > 0x2E8BA2E8BA2E8BAuLL) {
          GameRoutine_c601e0(v40);
        }
        v48 = 0x2E8BA2E8BA2E8BA3LL * ((v47 - v41) >> 3);
        if (2 * v48 > v176[0]) {
          v43 = 2 * v48;
        }
        if (v48 >= 0x1745D1745D1745DLL) {
          v49 = 0x2E8BA2E8BA2E8BALL;
        }
        else {
          v49 = v43;
        }
        if (v49 > 0x2E8BA2E8BA2E8BALL) {
          GameRoutine_60a210(v40);
        }
        v50 = GameRoutine_651b90(*v7, 88 * v49, 16, 0);
        v51 = &v44[v50];
        v38 = (__int64)&v44[88 * v46 + v50];
        v52 = &v44[v50];
        do {
          *((_QWORD*)v52 + 6) = 0;
          *((_QWORD*)v52 + 7) = 0;
          *((_QWORD*)v52 + 4) = 0;
          *((_QWORD*)v52 + 5) = 0;
          *((_QWORD*)v52 + 2) = 0;
          *((_QWORD*)v52 + 3) = 0;
          *(_QWORD*)v52 = 0;
          *((_QWORD*)v52 + 1) = 0;
          *((_DWORD*)v52 + 6) = 1065353216;
          v52[48] = 1;
          *((_QWORD*)v52 + 8) = 0;
          *((_QWORD*)v52 + 9) = 0;
          *((_QWORD*)v52 + 10) = 0;
          v52 += 88;
        } while (v52 != (char*)v38);
        v53 = (__int64*)v11[9];
        v54 = (__int64*)v11[10];
        v55 = v50 + 88 * v49;
        v56 = &v51[(char*)v53 - (char*)v54];
        if (v54 != v53) {
          v57 = (__int64*)v11[9];
          v58 = v56;
          do {
            v59 = *v57;
            v60 = v57[2];
            *((_QWORD*)v58 + 1) = v57[1];
            *((_QWORD*)v58 + 2) = v60;
            *(_QWORD*)v58 = v59;
            v57[1] = 0;
            v57[2] = 0;
            *v57 = 0;
            v61 = v57[3];
            *((_DWORD*)v58 + 8) = *((_DWORD*)v57 + 8);
            *((_QWORD*)v58 + 3) = v61;
            v62 = v57[5];
            v63 = v57[6];
            v58[56] = *((_BYTE*)v57 + 56);
            *((_QWORD*)v58 + 5) = v62;
            *((_QWORD*)v58 + 6) = v63;
            *((_QWORD*)v58 + 8) = v57[8];
            *((_QWORD*)v58 + 9) = v57[9];
            *((_QWORD*)v58 + 10) = v57[10];
            v57[9] = 0;
            v57[10] = 0;
            v57[8] = 0;
            v57 += 11;
            v58 += 88;
          } while (v57 != v54);
          do {
            v64 = v53[8];
            if (v64 != 0) {
              v53[9] = v64;
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v65 = 128;
              }
              else {
                v65 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v65, v37);
            }
            if ((*(_BYTE*)v53 & 1) != 0 && v53[2] != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v66 = 128;
              }
              else {
                v66 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v66, v37);
            }
            v53 += 11;
          } while (v53 != v54);
          v53 = (__int64*)*v167;
        }
        v11[9] = v56;
        v11[10] = v38;
        v11[11] = v55;
        if (v53 != nullptr) {
          v71 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v71 = 56;
          }
          GameRoutine_1a0a4e0(*v7 + v71, v37);
          v38 = v11[10];
        }
        goto LABEL_89;
      }
      v38 = (__int64)&v42[11 * v46];
      do {
        v42[6] = 0;
        v42[7] = 0;
        v42[4] = 0;
        v42[5] = 0;
        v42[2] = 0;
        v42[3] = 0;
        *v42 = 0;
        v42[1] = 0;
        *((_DWORD*)v42 + 6) = 1065353216;
        *((_BYTE*)v42 + 48) = 1;
        v42[8] = 0;
        v42[9] = 0;
        v42[10] = 0;
        v42 += 11;
      } while (v42 != (_QWORD*)v38);
    }
    v11[10] = v38;
    goto LABEL_89;
  }
LABEL_133:
  if (v11[7] != 0) {
    v88 = (_QWORD*)v11[6];
    if (v88 != nullptr) {
      v38 = 128;
      do {
        v90 = (_QWORD*)*v88;
        v91 = v88[3];
        v92 = *v7;
        if (v91 != 0) {
          v88[4] = v91;
          if (*(_QWORD*)(v92 + 200) != 0) {
            v93 = 128;
          }
          else {
            v93 = 56;
          }
          GameRoutine_1a0a4e0(v92 + v93, v37);
          v92 = *v7;
        }
        if (*(_QWORD*)(v92 + 200) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        GameRoutine_1a0a4e0(v92 + v89, v37);
        v88 = v90;
      } while (v90 != nullptr);
    }
    v94 = v11[5];
    v11[6] = 0;
    if (v94 != 0) {
      v95 = v94 & 7;
      if (v94 >= 8) {
        v97 = v94 & 0xFFFFFFFFFFFFFFF8LL;
        v96 = 0;
        do {
          *(_QWORD*)(*v10 + 8 * v96) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 8) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 16) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 24) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 32) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 40) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 48) = 0;
          v98 = *v10 + 8 * v96;
          v96 += 8;
          *(_QWORD*)(v98 + 56) = 0;
        } while (v97 != v96);
      }
      else {
        v96 = 0;
      }
      if (v95 != 0) {
        v99 = 8 * v96;
        do {
          --v95;
          *(_QWORD*)(*v10 + v99) = 0;
          v99 += 8;
        } while (v95 != 0);
      }
    }
    v11[7] = 0;
  }
  v100 = v11[9];
  v101 = v11[10];
  LODWORD(v177) = 0;
  if (v101 != v100) {
    v102 = v11 + 6;
    v103 = 0;
    do {
      v104 = v11[5];
      v105 = *(_DWORD*)(v100 + 88 * v103 + 44);
      if (v104 == 0 || v11[7] == 0) {
      LABEL_161:
        if (v104 == 0) {
          goto LABEL_202;
        }
        v107 = ((v104 - ((v104 >> 1) & 0x5555555555555555LL)) &
                0x3333333333333333LL) +
               (((v104 - ((v104 >> 1) & 0x5555555555555555LL)) >> 2) &
                0x3333333333333333LL);
        v108 = (0x101010101010101LL *
                ((v107 + (v107 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
               56;
      }
      else {
        v109 = v104 - 1;
        if ((v104 & (v104 - 1)) != 0) {
          v110 = v105;
          if (v104 <= v105) {
            v110 = v105 % v104;
          }
        }
        else {
          v110 = v109 & v105;
        }
        v111 = ((v104 - ((v104 >> 1) & 0x5555555555555555LL)) &
                0x3333333333333333LL) +
               (((v104 - ((v104 >> 1) & 0x5555555555555555LL)) >> 2) &
                0x3333333333333333LL);
        v108 = (0x101010101010101LL *
                ((v111 + (v111 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
               56;
        v112 = *(__int64***)(*v10 + 8 * v110);
        if (v112 != nullptr) {
          v113 = *v112;
          if (v113 != nullptr) {
            if ((v104 & v109) == 0) {
              while (1) {
                v115 = v113[1];
                if (v115 == v105) {
                  if (*((_DWORD*)v113 + 4) == v105) {
                    goto LABEL_240;
                  }
                }
                else if ((v115 & v109) != v110) {
                  goto LABEL_161;
                }
                v113 = (__int64*)*v113;
                if (v113 == nullptr) {
                  goto LABEL_161;
                }
              }
            }
            while (1) {
              v114 = v113[1];
              if (v114 == v105) {
                if (*((_DWORD*)v113 + 4) == v105) {
                  goto LABEL_240;
                }
              }
              else {
                if (v114 >= v104) {
                  v114 %= v104;
                }
                if (v114 != v110) {
                  goto LABEL_161;
                }
              }
              v113 = (__int64*)*v113;
              if (v113 == nullptr) {
                goto LABEL_161;
              }
            }
          }
        }
      }
      if (v108 > 1) {
        v38 = v105;
        if (v104 <= v105) {
          v38 = v105 % v104;
        }
      }
      else {
        v38 = (v104 - 1) & v105;
      }
      v116 = *(__int64***)(*v10 + 8 * v38);
      if (v116 != nullptr) {
        v117 = *v116;
        if (v117 != nullptr) {
          if (v108 < 2) {
            while (1) {
              v119 = v117[1];
              if (v119 == v105) {
                if (*((_DWORD*)v117 + 4) == v105) {
                  goto LABEL_240;
                }
              }
              else if ((v119 & (v104 - 1)) != v38) {
                goto LABEL_202;
              }
              v117 = (__int64*)*v117;
              if (v117 == nullptr) {
                goto LABEL_202;
              }
            }
          }
          do {
            v118 = v117[1];
            if (v118 == v105) {
              if (*((_DWORD*)v117 + 4) == v105) {
                goto LABEL_240;
              }
            }
            else {
              if (v118 >= v104) {
                v118 %= v104;
              }
              if (v118 != v38) {
                break;
              }
            }
            v117 = (__int64*)*v117;
          } while (v117 != nullptr);
        }
      }
    LABEL_202:
      v120 = GameRoutine_651b90(*v7, 48, 16, 0);
      v121 = v11[7];
      v122 = *((float*)v11 + 16);
      v123 = v120;
      *(_QWORD*)v120 = 0;
      *(_QWORD*)(v120 + 8) = v105;
      *(_DWORD*)(v120 + 16) = v105;
      *(_QWORD*)(v120 + 24) = 0;
      *(_QWORD*)(v120 + 32) = 0;
      *(_QWORD*)(v120 + 40) = 0;
      v124 = (float)(unsigned __int64)(v121 + 1);
      if (v104 == 0 || (float)(v122 * (float)v104) < v124) {
        v125 = v104 < 3 || (v104 & (v104 - 1)) != 0;
        v126 = v125 | (2 * v104);
        v127 = vcvtps_u32_f32(v124 / v122);
        if (v126 <= v127) {
          primeEm = v127;
        }
        else {
          primeEm = v126;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = GameRoutine_1a09d00(primeEm);
        }
        v129 = v11[5];
        if (primeEm > v129) {
          goto LABEL_215;
        }
        if (primeEm < v129) {
          v130 = vcvtps_u32_f32((float)(unsigned __int64)v11[7] /
                                *((float*)v11 + 16));
          if (v129 < 3 || (v129 & (v129 - 1)) != 0) {
            v130 = GameRoutine_1a09d00(v130);
          }
          else {
            v131 = 1LL << -(char)__clz(v130 - 1);
            if (v130 >= 2) {
              v130 = v131;
            }
          }
          if (primeEm <= v130) {
            primeEm = v130;
          }
          if (primeEm < v129) {
          LABEL_215:
            GameRoutine_c606c0(v10, primeEm);
          }
        }
        v104 = v11[5];
        if ((v104 & (v104 - 1)) != 0) {
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
          else {
            v38 = v105;
          }
        }
        else {
          v38 = (v104 - 1) & v105;
        }
      }
      v132 = *v10;
      v133 = *(__int64**)(*v10 + 8 * v38);
      if (v133 != nullptr) {
        *(_QWORD*)v123 = *v133;
        *v133 = v123;
      }
      else {
        v134 = *v102;
        *v102 = v123;
        *(_QWORD*)v123 = v134;
        *(_QWORD*)(v132 + 8 * v38) = v102;
        if (*(_QWORD*)v123 != 0) {
          v135 = *(_QWORD*)(*(_QWORD*)v123 + 8LL);
          if ((v104 & (v104 - 1)) != 0) {
            if (v135 >= v104) {
              v135 %= v104;
            }
          }
          else {
            v135 &= v104 - 1;
          }
          *(_QWORD*)(*v10 + 8 * v135) = v123;
        }
      }
      v104 = v11[5];
      ++v11[7];
    LABEL_240:
      if (v104 != 0) {
        v136 = v104 - 1;
        if ((v104 & (v104 - 1)) != 0) {
          v38 = v105;
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
        }
        else {
          v38 = v136 & v105;
        }
        v137 = *(__int64**)(*v10 + 8 * v38);
        if (v137 != nullptr) {
          v138 = *v137;
          if (*v137 != 0) {
            if ((v104 & v136) == 0) {
              while (1) {
                v140 = *(_QWORD*)(v138 + 8);
                if (v140 == v105) {
                  if (*(_DWORD*)(v138 + 16) == v105) {
                    goto LABEL_297;
                  }
                }
                else if ((v140 & v136) != v38) {
                  goto LABEL_260;
                }
                v138 = *(_QWORD*)v138;
                if (v138 == 0) {
                  goto LABEL_260;
                }
              }
            }
            do {
              v139 = *(_QWORD*)(v138 + 8);
              if (v139 == v105) {
                if (*(_DWORD*)(v138 + 16) == v105) {
                  goto LABEL_297;
                }
              }
              else {
                if (v139 >= v104) {
                  v139 %= v104;
                }
                if (v139 != v38) {
                  break;
                }
              }
              v138 = *(_QWORD*)v138;
            } while (v138 != 0);
          }
        }
      }
    LABEL_260:
      v141 = GameRoutine_651b90(*v7, 48, 16, 0);
      v142 = v11[7];
      v143 = *((float*)v11 + 16);
      v138 = v141;
      *(_QWORD*)v141 = 0;
      *(_QWORD*)(v141 + 8) = v105;
      *(_DWORD*)(v141 + 16) = v105;
      *(_QWORD*)(v141 + 24) = 0;
      *(_QWORD*)(v141 + 32) = 0;
      *(_QWORD*)(v141 + 40) = 0;
      v144 = (float)(unsigned __int64)(v142 + 1);
      if (v104 == 0 || (float)(v143 * (float)v104) < v144) {
        v145 = v144 / v143;
        v146 = (v104 & (v104 - 1)) != 0;
        if (v104 < 3) {
          v146 = true;
        }
        v147 = v146 | (2 * v104);
        v148 = vcvtps_u32_f32(v145);
        if (v147 <= v148) {
          v149 = v148;
        }
        else {
          v149 = v147;
        }
        if (v149 == 1) {
          v149 = 2;
        }
        else if ((v149 & (v149 - 1)) != 0) {
          v150 = GameRoutine_1a09d00(v149);
          v104 = v11[5];
          v149 = v150;
        }
        if (v149 > v104) {
          goto LABEL_272;
        }
        if (v149 < v104) {
          v151 = vcvtps_u32_f32((float)(unsigned __int64)v11[7] /
                                *((float*)v11 + 16));
          if (v104 < 3 || (v104 & (v104 - 1)) != 0) {
            v151 = GameRoutine_1a09d00(v151);
          }
          else {
            v152 = 1LL << -(char)__clz(v151 - 1);
            if (v151 >= 2) {
              v151 = v152;
            }
          }
          if (v149 <= v151) {
            v149 = v151;
          }
          if (v149 < v104) {
          LABEL_272:
            GameRoutine_c606c0(v10, v149);
          }
        }
        v104 = v11[5];
        if ((v104 & (v104 - 1)) != 0) {
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
          else {
            v38 = v105;
          }
        }
        else {
          v38 = (v104 - 1) & v105;
        }
      }
      v153 = *v10;
      v154 = *(__int64**)(*v10 + 8 * v38);
      if (v154 != nullptr) {
        *(_QWORD*)v138 = *v154;
        *v154 = v138;
      }
      else {
        v155 = *v102;
        *v102 = v138;
        *(_QWORD*)v138 = v155;
        *(_QWORD*)(v153 + 8 * v38) = v102;
        if (*(_QWORD*)v138 != 0) {
          v156 = *(_QWORD*)(*(_QWORD*)v138 + 8LL);
          if ((v104 & (v104 - 1)) != 0) {
            if (v156 >= v104) {
              v156 %= v104;
            }
          }
          else {
            v156 &= v104 - 1;
          }
          *(_QWORD*)(*v10 + 8 * v156) = v138;
        }
      }
      ++v11[7];
    LABEL_297:
      GameRoutine_a71f30(v138 + 24, &v177);
      v100 = v11[9];
      v157 = v11[10];
      LODWORD(v177) = v177 + 1;
      v103 = (unsigned int)v177;
    } while (0x2E8BA2E8BA2E8BA3LL * ((v157 - v100) >> 3) >
             (unsigned __int64)(unsigned int)v177);
  }
  *v168 = 0;
  v158 = v168;
  v168 = nullptr;
  if (v158 != nullptr) {
    v159 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v159 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v159, v37);
  }
  (*(void (**)(_QWORD*))(v169[0] + 24LL))(v169);
  v9 = v165;
  v4 = v166;
  v19 = v164;
LABEL_303:
  result = GameRoutine_634d80(*(_QWORD*)(v19 + 8), v19);
  if ((v174[0] & 1) != 0 && v175 != nullptr) {
    v162 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v162 = 56;
    }
    result = GameRoutine_1a0a4e0(*v7 + v162, v161);
  }
  v163 = *(_QWORD*)(v4 + 32);
  *(_QWORD*)(v4 + 24) = v9;
  *(_QWORD*)(v4 + 32) = v11;
  if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
    return GameRoutine_1a09c50(v163);
  }
  return result;
}

void GameHr_cc8560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  long double v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  char* v18;
  _BYTE v19[200];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameRoutine_25eed0(a1);
  v8 = GameRoutine_1a09c70(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8);
  }
  v10 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v8 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v17[1] = v10;
    v18 = v11;
    v17[0] = v12 | 1;
    goto LABEL_17;
  }
  LOBYTE(v17[0]) = 2 * v8;
  v11 = (char*)v17 + 1;
  if (v8 != 0) {
  LABEL_17:
    GameRoutine_1a0b940(v11, v7, v10);
  }
  v11[v10] = 0;
  v13 = v17[0] & 1;
  if ((v17[0] & 1) != 0) {
    v14 = v18;
  }
  else {
    v14 = (char*)v17 + 1;
  }
  if (v14 != nullptr) {
    *(_QWORD*)&v9 = 0;
    GameRoutine_10c830(v19, v9);
    *(struct PseudoSret*)(&v16) =
        GameRoutine_ff2d0(v14, v14, v19, 0, 65537, 0, 0.0, 1.0);
    *(__n128*)&v9 = GameRoutine_10cff0(v19);
    v13 = v17[0] & 1;
  }
  if (v13 != 0 && v18 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v9);
  }
}

_QWORD* GameHr_cd55a0(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                      __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  __int64 v26;
  unsigned __int64 v27;
  long double v28;
  long double v29;
  long double v30;
  long double v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  long double v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  long double v52;
  __int64* v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  char* v64;
  _QWORD v65[2];
  __int64 v66;
  int v67;
  _QWORD v68[2];
  __int64 v69;
  __int64 v70;
  __int64* v71;
  unsigned __int64 v72;

  v8 = *GameData_212c370;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  result = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (result == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v12 = 40;
  LABEL_8:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v12))((__int64)result);
  }
  v13 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v13 == 0x4000) {
    return result;
  }
  v14 = GameData_212c330[0];
  v15 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v13);
  if (v15[1] == 0 || *v15 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v16 = *a2;
  v67 = 0;
  v65[1] = 0;
  v66 = 0;
  v17 = v16 >> 1;
  v18 = (v16 & 1) == 0;
  v19 = *((_QWORD*)a2 + 1);
  v20 = *((unsigned __int8**)a2 + 2);
  v65[0] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v69 = 0;
  v70 = 0;
  v71 = nullptr;
  v72 = 0;
  if (v18) {
    v21 = v17;
  }
  else {
    v21 = v19;
  }
  if (v18) {
    v22 = a2 + 1;
  }
  else {
    v22 = v20;
  }
  GameRoutine_60a060(v65, v22, v21);
  v67 = 1;
  v23 = *a3;
  if ((v23 & 1) != 0) {
    v24 = *((_QWORD*)a3 + 1);
  }
  else {
    v24 = v23 >> 1;
  }
  if ((v23 & 1) != 0) {
    v25 = *((unsigned __int8**)a3 + 2);
  }
  else {
    v25 = a3 + 1;
  }
  GameRoutine_60a060(v68, v25, v24);
  if ((*(_BYTE*)a4 & 1) != 0) {
    v26 = *(_QWORD*)(a4 + 16);
  }
  else {
    v26 = a4 + 1;
  }
  v27 = GameRoutine_1a09c70(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v27);
  }
  v32 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v27 | 7) + 1;
    }
    v33 = (char*)GameRoutine_651b90(GameData_2265ee0, v34, 16, 0);
    v63 = v32;
    v64 = v33;
    v62 = v34 | 1;
  }
  else {
    LOBYTE(v62) = 2 * v27;
    v33 = (char*)&v62 + 1;
    if (v27 == 0) {
      goto LABEL_36;
    }
  }
  v27 = GameRoutine_1a0b940(v33, v26, v32);
LABEL_36:
  v35 = v71;
  v36 = v72;
  v33[v32] = 0;
  if ((unsigned __int64)v35 >= v36) {
    v39 = v70;
    v40 = (char*)v35 - v70;
    v41 = 1 - 0x5555555555555555LL * (((__int64)v35 - v70) >> 3);
    if (v41 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00(v28, v29, v30, v31);
    }
    v42 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v36 - v70) >> 3);
    if (2 * v42 > v41) {
      v41 = 2 * v42;
    }
    if (v42 >= 0x555555555555555LL) {
      v43 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v43 = v41;
    }
    if (v43 != 0) {
      if (v43 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(v27);
      }
      v44 = GameRoutine_651b90(GameData_2265ee0, 24 * v43, 16, 0);
    }
    else {
      v44 = 0;
    }
    v45 = (__int64*)&v40[v44];
    v46 = v44 + 24 * v43;
    v47 = v63;
    v38 = (__int64)&v40[v44 + 24];
    *v45 = v62;
    v45[1] = v47;
    v45[2] = (__int64)v64;
    GameRoutine_1a0b950(v44, v39, v40);
    v70 = v44;
    v71 = (__int64*)v38;
    v72 = v46;
    if (v39 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v49 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v49, v48);
    }
  }
  else {
    v37 = v63;
    v38 = (__int64)(v35 + 3);
    *v35 = v62;
    v35[1] = v37;
    v35[2] = (__int64)v64;
  }
  v50 = *(unsigned int*)(a1 + 16);
  v51 = *(unsigned int*)(a1 + 20);
  v71 = (__int64*)v38;
  result = (_QWORD*)GameRoutine_caed40(*(_QWORD**)(v14[v51] + 16 * v50 + 8),
                                       (__int64)v65);
  v53 = (__int64*)v70;
  if (v70 != 0) {
    v54 = v71;
    if ((__int64*)v70 == v71) {
      goto LABEL_63;
    }
    v55 = v71;
    v56 = GameData_212bf68;
    do {
      v57 = *((_BYTE*)v55 - 24);
      v55 -= 3;
      if ((v57 & 1) != 0 && *(v54 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) != 0) {
          v58 = 128;
        }
        else {
          v58 = 56;
        }
        result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v56 + v58, v52);
      }
      v54 = v55;
    } while (v55 != v53);
    v71 = v53;
    if (v70 != 0) {
    LABEL_63:
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v59 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v59, v52);
    }
  }
  if ((v68[0] & 1) != 0 && v69 != 0) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v60 = 56;
    }
    result =
        (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v60, v52);
  }
  if ((v65[0] & 1) != 0 && v66 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v61 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v61, v52);
  }
  return result;
}

#pragma GCC visibility pop
