#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_codec_DecodeNonPCWs_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_getBitCnt_plt(_QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKabs_plt(_QWORD);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
__int64 nn_codec_HcrGetABitFromBitstream_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e87ac0;
extern __int64 SdkData_e87ac8;
extern __int64 SdkData_e87ad0;
extern void (*SdkData_e87ab0[766])();
extern void (*SdkData_e87ab8[765])();
unsigned int* nn_codec_FDKpushBiDirectional(unsigned int* result, unsigned int);
__int64 nn_codec_HcrDecoder(unsigned int* a1, __int64 a2, __int64 a3,
                            unsigned int* a4);

__int64 nn_codec_HcrDecoder(unsigned int* a1, __int64 a2, __int64 a3,
                            unsigned int* a4)
{
  int v7;
  unsigned int v9;
  __int64 v10;
  __int16* v11;
  unsigned __int8* v12;
  _WORD* v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  __int16* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned __int8* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  unsigned int* v34;
  __int64 v35;
  int v36;
  _BYTE* v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  _BYTE* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  bool v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int8* v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned __int8* v71;
  unsigned int v72;
  unsigned int* v73;
  unsigned int* v74;
  __int64 v75;
  unsigned int v76;
  unsigned int* v77;
  unsigned int* v78;
  __int64 v79;
  char v80;
  unsigned int v81;
  __int64 v82;
  int v83;
  unsigned int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  unsigned __int8* v88;
  unsigned __int16* v89;
  __int64 v90;
  int v91;
  char v92;
  __int64 v93;
  int v94;
  int v95;
  unsigned __int8* v96;
  unsigned __int16* v97;
  __int64 v98;
  __int64 v99;
  unsigned int v100;
  int v101;
  int v102;
  __int16 v103;
  int v104;
  int v105;
  unsigned __int16 v106;
  _BYTE* v107;
  unsigned int* v108;
  unsigned __int8* v109;
  _WORD* v110;
  __int64 v111;
  _WORD* v112;
  unsigned int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  __int16 v118;
  unsigned __int8 v119;
  unsigned __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned int* v125;
  unsigned int v126;
  __int64 v127;
  unsigned int v128;
  unsigned int* v129;
  __int64 v130;
  int v131;
  char* v132;
  unsigned int v133;
  unsigned int v134;
  __int64 v135;
  int v136;
  unsigned int* v137;
  char* v138;
  __int64 result;
  __int64 v140;
  unsigned int* v141;
  int v142;
  int v143;
  unsigned int v144;
  __int16 v145;
  __int64 v146;
  int v147;
  int v148;
  __int64 v149;
  int v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  int v155;
  _BYTE* v156;
  unsigned int* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned int v161;
  __int64 v162;
  int v163;
  unsigned int* v164;
  bool v166;
  int v167;
  unsigned int* v168;
  int i;
  unsigned int v170;
  char v171;
  __int16 v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  int* v176;
  int v177;
  int v178;
  int v179;
  char v180;
  int v181;
  __int64 v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  unsigned int* v201;
  int v202;
  unsigned int* v203;
  unsigned int k;
  unsigned int v205;
  char v206;
  __int16 v207;
  __int64 v208;
  int v209;
  __int64 v210;
  char* v211;
  __int64 v212;
  _DWORD* v213;
  _DWORD* v214;
  int v215;
  unsigned int* v216;
  int j;
  unsigned int v218;
  char v219;
  __int16 v220;
  char* v221;
  __int64 v222;
  __int64 v223;
  int* v224;
  int v225;
  int v226;
  char* v227;
  int v228;
  char v229;
  int v230;
  unsigned int v231;
  unsigned __int8* v232;
  unsigned int* v233;
  int v234;
  char v235;
  __int16 v236;
  __int16 v237;
  unsigned __int8* v238;
  unsigned __int16 v239;
  int v240;
  int v241;
  unsigned int* v242;
  unsigned int* v243;
  __int64 v244;
  unsigned __int8* v245;
  __int16 v246;
  unsigned int* v247;
  int v248;
  char v249;
  int v250;
  unsigned int* v251;
  unsigned int v252;
  unsigned int v253;
  unsigned __int8* v254;
  unsigned int v255;
  unsigned int* v256;
  __int64 v257;
  __int64 v258;
  unsigned int* v259;
  unsigned int* v260;
  unsigned int v261;
  __int64 v262;
  unsigned int* v263;
  unsigned int* v264;
  unsigned int* v265;
  unsigned int v266;
  __int64 v267;
  unsigned int* v268;
  unsigned int* v269;
  unsigned int* v270;
  unsigned int v271;
  __int64 v272;
  unsigned int* v273;
  unsigned int* v274;
  unsigned int* v275;
  unsigned int v276;
  __int64 v277;
  unsigned int* v278;
  unsigned int* v279;
  unsigned int* v280;
  unsigned int v281;
  __int64 v282;
  unsigned int* v283;
  unsigned int* v284;
  unsigned int* v285;
  unsigned int v286;
  __int64 v287;
  unsigned int* v288;
  unsigned int* v289;
  unsigned int* v290;
  unsigned int v291;
  __int64 v292;
  unsigned int* v293;
  unsigned int* v294;
  unsigned int* v295;
  unsigned int v296;
  __int64 v297;
  __int64 v298;
  char v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  int v304;
  __int64 v305;
  int v306;
  unsigned int v307;
  __int16* v308;
  unsigned int v309;
  unsigned int v310;
  __int64 v311;
  __int64 v312;
  int v313;
  int v314;
  int v315;
  unsigned int v316;
  int* v317;
  int v318;
  int v319;
  unsigned int v320;
  int v321;
  int v322;
  unsigned int v323;
  unsigned int v324;
  unsigned int v325;
  unsigned int v326;
  __int64 v327;
  unsigned int* v328;
  unsigned int* v329;
  int v330;
  unsigned int v331;
  int v332;
  __int64 v333;
  int v334;
  int v335;
  __int64 v336;
  int v337;
  int v338;
  int v339;
  int v340;
  int v341;
  int v342;
  int v343;
  int v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  int v348;
  __int64 v349;
  unsigned __int8* v350;
  unsigned int* v351;
  __int64 v352;
  unsigned int* v353;
  __int64 v354;
  int v355;
  int v356;
  int v357;
  unsigned int v358;
  __int64 v359;
  int v360;
  __int64 v361;
  __int64 v362;
  unsigned int* v363;
  char* v364;
  __int64 v365;
  int v366;
  unsigned int v367;
  __int64 v368;
  unsigned int* v370;
  bool v371;
  int v372;
  unsigned int* v373;
  __int64 v374;
  unsigned int* v375;
  unsigned int v376;
  unsigned int* v377;
  __int64 v378;
  __int64 v379;
  unsigned int* v380;
  unsigned int* v381;
  __int64 v382;
  unsigned __int16* v383;
  __int64 v384;

  if (a4[12] != 0) {
    nn_codec_FDK_put_plt(a4 + 2, *a4);
  }
  else {
    nn_codec_FDK_pushBack_plt(a4 + 2, a4[1], 0);
  }
  *(_QWORD*)a4 = 0;
  v375 = a4;
  v7 = nn_codec_FDK_getBitCnt_plt(a4 + 2);
  v9 = *((__int16*)a1 + 11);
  v10 = *((_QWORD*)a1 + 11);
  v372 = v7;
  if (*((_WORD*)a1 + 11) != 0) {
    v11 = *((__int16**)a1 + 3);
    v12 = *((unsigned __int8**)a1 + 5);
    v13 = a1 + 1731;
    if (v9 >= 4) {
      v16 = v9 & 0xFFFFFFFC;
      v14 = 0;
      do {
        v17 = *v11 >> *(_BYTE*)(v10 + *v12);
        *v13 = v17;
        v17 = (unsigned __int16)v17;
        if (*v12 == 0) {
          v17 = 0;
        }
        v18 = v17 + v14;
        v19 = v11[1] >> *(_BYTE*)(v10 + v12[1]);
        v13[1] = v19;
        v19 = (unsigned __int16)v19;
        if (v12[1] == 0) {
          v19 = 0;
        }
        v20 = v11[2] >> *(_BYTE*)(v10 + v12[2]);
        v13[2] = v20;
        v20 = (unsigned __int16)v20;
        if (v12[2] == 0) {
          v20 = 0;
        }
        v21 = v20 + v19 + v18;
        v22 = v11 + 4;
        v23 = v11[3] >> *(_BYTE*)(v10 + v12[3]);
        v13[3] = v23;
        v23 = (unsigned __int16)v23;
        v13 += 4;
        v24 = v12[3];
        v12 += 4;
        if (v24 == 0) {
          v23 = 0;
        }
        v16 -= 4;
        v14 = v23 + v21;
        v11 = v22;
      } while (v16 != 0);
      v11 = v22;
      if ((v9 & 3) == 0) {
        goto LABEL_24;
      }
    }
    else {
      v14 = 0;
      if ((v9 & 3) == 0) {
      LABEL_24:
        v15 = *((unsigned __int16*)a1 + 11);
        v10 = *((_QWORD*)a1 + 11);
        goto LABEL_25;
      }
    }
    v25 = v9 & 3;
    do {
      v26 = *v11++;
      v27 = v26 >> *(_BYTE*)(v10 + *v12);
      *v13++ = v27;
      v27 = (unsigned __int16)v27;
      v28 = *v12++;
      if (v28 == 0) {
        v27 = 0;
      }
      --v25;
      v14 += v27;
    } while (v25 != 0);
    goto LABEL_24;
  }
  v15 = 0;
  v14 = 0;
LABEL_25:
  v29 = *((unsigned __int8**)a1 + 5);
  v30 = *((_QWORD*)a1 + 6);
  v31 = *((_QWORD*)a1 + 7);
  v32 = (unsigned int)(__int16)v15;
  v33 = (unsigned __int8*)(a1 + 2259);
  v34 = a1 + 1859;
  a1[1729] = v14;
  v380 = a1 + 2131;
  v383 = (unsigned __int16*)(a1 + 1859);
  if (v15 != 0) {
    v35 = *((_QWORD*)a1 + 13);
    if ((unsigned int)v32 >= 8) {
      v40 = v32 & 0xFFFFFFF8;
      v36 = 0;
      v41 = a1 + 2259;
      do {
        v42 = *(unsigned __int8*)(v35 + *v29);
        *v41 = v42;
        if (v42 == 0) {
          ++v36;
        }
        v43 = *(unsigned __int8*)(v35 + v29[1]);
        v41[1] = v43;
        if (v43 == 0) {
          ++v36;
        }
        v44 = *(unsigned __int8*)(v35 + v29[2]);
        v41[2] = v44;
        if (v44 == 0) {
          ++v36;
        }
        v45 = *(unsigned __int8*)(v35 + v29[3]);
        v41[3] = v45;
        if (v45 == 0) {
          ++v36;
        }
        v46 = *(unsigned __int8*)(v35 + v29[4]);
        v41[4] = v46;
        if (v46 == 0) {
          ++v36;
        }
        v47 = *(unsigned __int8*)(v35 + v29[5]);
        v41[5] = v47;
        if (v47 == 0) {
          ++v36;
        }
        v48 = *(unsigned __int8*)(v35 + v29[6]);
        v41[6] = v48;
        v49 = v48 == 0;
        v50 = v29[7];
        if (v49) {
          ++v36;
        }
        v29 += 8;
        v51 = *(unsigned __int8*)(v35 + v50);
        v37 = v41 + 8;
        v41[7] = v51;
        v41 += 8;
        if (v51 == 0) {
          ++v36;
        }
        v40 -= 8;
      } while (v40 != 0);
    }
    else {
      v36 = 0;
      v37 = a1 + 2259;
    }
    if ((v32 & 7) != 0) {
      v52 = v32 & 7;
      do {
        v53 = *v29++;
        v54 = *(unsigned __int8*)(v35 + v53);
        *v37++ = v54;
        if (v54 == 0) {
          ++v36;
        }
        --v52;
      } while (v52 != 0);
    }
    v29 = *((unsigned __int8**)a1 + 5);
    v38 = v32 - v36;
    v39 = v32 - 1;
    a1[1730] = v38;
    if ((_DWORD)v32 == 1) {
      goto LABEL_84;
    }
  }
  else {
    v38 = 0;
    a1[1730] = v32;
    v39 = -1;
  }
  v55 = 0;
  v56 = v39;
  do {
    v57 = *v33;
    if (v55 - (unsigned __int64)v39 <= 0xFFFFFFFFFFFFFFF8LL) {
      v60 = 0;
      v61 = (unsigned __int8*)(a1 + 2260);
      v62 = -(__int64)(v56 & 0xFFFFFFFFFFFFFFF8LL);
      while (1) {
        v63 = *(v61 - 3);
        if (v63 <= v57) {
          v57 = *(v61 - 3);
          v64 = *(v61 - 2);
          if (v64 > v57) {
            goto LABEL_70;
          }
        LABEL_62:
          v57 = v64;
          v65 = *(v61 - 1);
          if (v65 <= v57) {
            goto LABEL_63;
          }
        LABEL_71:
          *(v61 - 2) = v65;
          *(v61 - 1) = v57;
          v66 = *v61;
          if (v66 > v57) {
            goto LABEL_72;
          }
        LABEL_64:
          v57 = v66;
          v67 = v61[1];
          if (v67 <= v57) {
            goto LABEL_65;
          }
        LABEL_73:
          *v61 = v67;
          v61[1] = v57;
          v68 = v61[2];
          if (v68 > v57) {
            goto LABEL_74;
          }
        LABEL_66:
          v57 = v68;
          v69 = v61[3];
          if (v69 <= v57) {
            goto LABEL_67;
          }
        LABEL_75:
          v61[2] = v69;
          v61[3] = v57;
          v70 = v61[4];
          if (v70 > v57) {
            goto LABEL_59;
          }
        LABEL_76:
          v57 = v70;
          v60 -= 8;
          v61 += 8;
          if (v62 == v60) {
          LABEL_77:
            v58 = -v60;
            v59 = v56 & 7;
            if ((v56 & 7) != 0) {
              goto LABEL_78;
            }
            goto LABEL_54;
          }
        }
        else {
          *(v61 - 4) = v63;
          *(v61 - 3) = v57;
          v64 = *(v61 - 2);
          if (v64 <= v57) {
            goto LABEL_62;
          }
        LABEL_70:
          *(v61 - 3) = v64;
          *(v61 - 2) = v57;
          v65 = *(v61 - 1);
          if (v65 > v57) {
            goto LABEL_71;
          }
        LABEL_63:
          v57 = v65;
          v66 = *v61;
          if (v66 <= v57) {
            goto LABEL_64;
          }
        LABEL_72:
          *(v61 - 1) = v66;
          *v61 = v57;
          v67 = v61[1];
          if (v67 > v57) {
            goto LABEL_73;
          }
        LABEL_65:
          v57 = v67;
          v68 = v61[2];
          if (v68 <= v57) {
            goto LABEL_66;
          }
        LABEL_74:
          v61[1] = v68;
          v61[2] = v57;
          v69 = v61[3];
          if (v69 > v57) {
            goto LABEL_75;
          }
        LABEL_67:
          v57 = v69;
          v70 = v61[4];
          if (v70 <= v57) {
            goto LABEL_76;
          }
        LABEL_59:
          v61[3] = v70;
          v61[4] = v57;
          v60 -= 8;
          v61 += 8;
          if (v62 == v60) {
            goto LABEL_77;
          }
        }
      }
    }
    v58 = 0;
    v59 = v56 & 7;
    if ((v56 & 7) != 0) {
    LABEL_78:
      v71 = (unsigned __int8*)a1 + v58 + 9037;
      do {
        while (1) {
          v72 = *v71;
          if (v72 <= v57) {
            break;
          }
          *(v71 - 1) = v72;
          *v71++ = v57;
          if (--v59 == 0) {
            goto LABEL_54;
          }
        }
        v57 = *v71++;
        --v59;
      } while (v59 != 0);
    }
  LABEL_54:
    --v56;
    ++v55;
  } while ((_DWORD)v56 != 0);
  if ((_DWORD)v32 == 0) {
    goto LABEL_107;
  }
LABEL_84:
  v376 = v38;
  v73 = a1 + 2461;
  memset_plt((void*)(a1 + 2461), nullptr, v32);
  v33 = (unsigned __int8*)(a1 + 2259);
  v74 = a1 + 2131;
  v34 = a1 + 1859;
  v75 = 0;
  v76 = 0;
  v77 = a1 + 2461;
  v78 = a1 + 1731;
  while (2) {
    while (2) {
      if (v76 >= (unsigned int)v32) {
        goto LABEL_85;
      }
      v79 = 0;
      v80 = v76;
      v81 = v76;
      while (1) {
        if (*((_BYTE*)v77 + v76 + v79) == 0) {
          v82 = v33[v75];
          v83 = v29[v76 + v79];
          if (*(unsigned __int8*)(v30 + v82) == v83 ||
              *(unsigned __int8*)(v31 + v82) == v83) {
            break;
          }
        }
        ++v79;
        ++v81;
        ++v80;
        if (v76 - (_DWORD)v32 + (_DWORD)v79 == 0) {
          goto LABEL_85;
        }
      }
      v84 = v76 + v79;
      *((_BYTE*)v77 + v76 + v79) = 1;
      v33[v75] = v29[v76 + v79];
      *((_WORD*)v34 + v75) = *((_WORD*)v78 + v76 + v79);
      if (v76 + v79 != 0) {
        if ((unsigned __int64)v84 - 1 >= 7) {
          v87 = 0;
          v86 = 0;
          v88 = v29 + 3;
          v89 = (unsigned __int16*)a1 + 3469;
          v90 = -(__int64)(v81 & 0xFFFFFFF8);
          do {
            v87 -= 8;
            v91 = (*(v89 - 2) << *(_BYTE*)(v10 + v88[2])) +
                  (*(v89 - 3) << *(_BYTE*)(v10 + v88[1])) +
                  (*(v89 - 4) << *(_BYTE*)(v10 + *v88)) +
                  (*(v89 - 5) << *(_BYTE*)(v10 + *(v88 - 1))) +
                  (*(v89 - 6) << *(_BYTE*)(v10 + *(v88 - 2))) +
                  (*(v89 - 7) << *(_BYTE*)(v10 + *(v88 - 3))) + v86;
            v92 = *(_BYTE*)(v10 + v88[3]);
            v93 = v88[4];
            v88 += 8;
            v94 = *(v89 - 1) << v92;
            v95 = *v89;
            v89 += 8;
            v86 = (v95 << *(_BYTE*)(v10 + v93)) + v94 + v91;
          } while (v90 != v87);
          v74 = a1 + 2131;
          v34 = a1 + 1859;
          v85 = -v87;
          if ((v84 & 7) != 0) {
            goto LABEL_100;
          }
        }
        else {
          v85 = 0;
          v86 = 0;
          if ((v84 & 7) == 0) {
            goto LABEL_102;
          }
        LABEL_100:
          v96 = &v29[v85];
          v97 = (unsigned __int16*)v78 + v85;
          v98 = v80 & 7;
          do {
            v100 = *v96++;
            v99 = v100;
            v101 = *v97++;
            --v98;
            v86 += v101 << *(_BYTE*)(v10 + v99);
          } while (v98 != 0);
        }
      }
      else {
        LOWORD(v86) = 0;
      }
    LABEL_102:
      *((_WORD*)v74 + v75) = v86;
      if ((_DWORD)v79 != 0 || *((_BYTE*)v73 + v76) != 1) {
      LABEL_85:
        if (++v75 == v32) {
          goto LABEL_106;
        }
        continue;
      }
      break;
    }
    do {
      ++v76;
    } while (*((_BYTE*)v73 + v76) == 1);
    if (++v75 != v32) {
      continue;
    }
    break;
  }
LABEL_106:
  v38 = v376;
LABEL_107:
  LOWORD(v102) = v38;
  if ((_WORD)v38 != 0) {
    v103 = *((_WORD*)a1 + 16);
    v104 = *((char*)a1 + 34);
    v105 = *((__int16*)a1 + 10);
    v102 = 0;
    v106 = 0;
    v107 = a1 + 1600;
    v108 = v34;
    v109 = v33;
    v110 = a1 + 1344;
    v111 = *((_QWORD*)a1 + 9);
    v112 = a1 + 1088;
    while (1) {
      v113 = *v109++;
      v114 = *(unsigned __int16*)v108;
      v115 = *(unsigned __int8*)(v111 + v113);
      if (v115 >= v104) {
        LOBYTE(v115) = v104;
      }
      if (*(_WORD*)v108 != 0) {
        break;
      }
    LABEL_109:
      v108 = (unsigned int*)((char*)v108 + 2);
      if ((_WORD)--v38 == 0) {
        goto LABEL_118;
      }
    }
    v116 = v114 + v102;
    while (1) {
      v117 = (unsigned __int8)v115 + v106;
      if (v117 > v105) {
        break;
      }
      LOWORD(v102) = v102 + 1;
      --v114;
      *v112++ = v106 + v103;
      *v110++ = v103 - 1 + (unsigned __int8)v115 + v106;
      *v107++ = v115;
      v106 += (unsigned __int8)v115;
      if ((_WORD)v114 == 0) {
        v34 = a1 + 1859;
        v106 = v117;
        v102 = v116;
        goto LABEL_109;
      }
    }
    v118 = *(v112 - 1);
    v34 = a1 + 1859;
    v119 = v103 - v118 + v105;
    *(v107 - 1) = v119;
    *(v110 - 1) = v118 + v119 - 1;
  }
LABEL_118:
  v120 = a1[1730];
  v121 = *((char*)a1 + 34);
  v122 = *((_QWORD*)a1 + 9);
  v123 = 0;
  v124 = 0;
  v125 = a1 + 2323;
  v126 = *((unsigned __int16*)a1 + 3718);
  v127 = 1987;
  v370 = a1 + 1600;
  a1[28] = (unsigned __int16)v102;
  v128 = (unsigned __int16)v102;
  v129 = a1 + 1987;
  while (2) {
    if (v124 >= v120) {
      goto LABEL_139;
    }
    v133 = v128 - v126;
    if (v128 >= v126) {
      if (v128 == v126) {
        LOWORD(a1[v127]) = v128;
        v133 = (unsigned __int16)v102;
      }
      else {
        LOWORD(a1[v127]) = v126;
      }
      v135 = v33[v124++];
      *((_BYTE*)v125 + v123) = v135;
      v134 = *((unsigned __int16*)v34 + v124);
    }
    else {
      LOWORD(a1[v127]) = v128;
      v134 = v126 - v128;
      v133 = (unsigned __int16)v102;
      v135 = v33[v124];
      *((_BYTE*)v125 + v123) = v135;
    }
    v136 = *(unsigned __int8*)(v122 + v135);
    if (v136 >= v121) {
      LOBYTE(v136) = v121;
    }
    *((_BYTE*)v125 + v123 + 276) = v136;
    if (v124 >= v120) {
      LODWORD(v123) = v123 + 1;
    LABEL_139:
      result = *a1;
      *((_WORD*)v129 + (unsigned int)v123) = 0;
      if ((result & 0x100E01FC) != 0) {
        return result;
      }
      goto LABEL_142;
    }
    v137 = &a1[v127];
    v128 = v133 - v134;
    if (v133 < v134) {
      *((_WORD*)v137 + 1) = v133;
      v126 = v134 - v133;
      v130 = v33[v124];
      *((_BYTE*)v125 + v123 + 1) = v130;
    LABEL_120:
      v128 = (unsigned __int16)v102;
      goto LABEL_121;
    }
    v138 = (char*)v125 + v123;
    if (v133 == v134) {
      *((_WORD*)v137 + 1) = v133;
      v130 = v33[v124++];
      v138[1] = v130;
      v126 = *((unsigned __int16*)v34 + v124);
      goto LABEL_120;
    }
    *((_WORD*)v137 + 1) = v134;
    v130 = v33[v124++];
    v138[1] = v130;
    v126 = *((unsigned __int16*)v34 + v124);
  LABEL_121:
    v131 = *(unsigned __int8*)(v122 + v130);
    v132 = (char*)v125 + v123;
    v123 += 2;
    ++v127;
    if (v131 >= v121) {
      LOBYTE(v131) = v121;
    }
    v132[277] = v131;
    if (v123 != 270) {
      continue;
    }
    break;
  }
  result = *a1 | 0x10000000;
  *a1 = result;
  if ((result & 0x100E01FC) != 0) {
    return result;
  }
LABEL_142:
  v140 = (int)a1[2122];
  v363 = a1 + 2323;
  v141 = a1 + 2123;
  v142 = a1[2130];
  v143 = *((unsigned __int16*)v129 + v140);
  if (*((_WORD*)v129 + v140) != 0) {
    v144 = 0;
    v145 = 0;
    while (v140 <= 268) {
      v144 += v143;
      if (v144 > (unsigned __int16)v102) {
        break;
      }
      if ((unsigned __int16)++v145 > 0x100u) {
        break;
      }
      if (v144 == (unsigned __int16)v102) {
        *((_WORD*)v141 + v142) = v145;
        if (v142 > 12) {
          break;
        }
        ++v142;
        v145 = 0;
        v144 = 0;
      }
      v143 = *((unsigned __int16*)a1 + v140++ + 3975);
      if (v143 == 0) {
        goto LABEL_152;
      }
    }
  }
  else {
    v145 = 0;
  LABEL_152:
    *((_WORD*)v141 + v142) = v145;
  }
  v146 = (int)a1[4];
  v147 = a1[2122];
  v148 = a1[2391];
  v149 = (int)a1[2130];
  v150 = a1[2460];
  v353 = a1 + 1987;
  v350 = v33;
  v361 = *((_QWORD*)a1 + 12);
  v362 = *((_QWORD*)a1 + 10);
  v359 = *((_QWORD*)a1 + 1);
  nn_codec_FDKmemclear_plt(v359 + 4 * v146, 4096);
  v151 = *((unsigned __int16*)v141 + v149);
  v152 = v146;
  v153 = v147;
  LODWORD(v154) = v148;
  v155 = v150;
  v373 = a1;
  v367 = v149;
  v357 = v150;
  v358 = v146;
  v360 = v147;
  v356 = v148;
  if (*((_WORD*)v141 + v149) != 0) {
    v351 = a1 + 2392;
    v154 = v148;
    v152 = v146;
    v368 = v147;
    v374 = v150;
    v156 = a1 + 1600;
    v157 = a1 + 1088;
    v342 = (unsigned __int16)(v151 - 1);
    v343 = v150 + v342 + 1;
    if (v148 <= 269) {
      v158 = 269;
    }
    else {
      v158 = (unsigned int)v148;
    }
    if (v150 <= 269) {
      v159 = 269;
    }
    else {
      v159 = (unsigned int)v150;
    }
    if (v147 <= 269) {
      v160 = 269;
    }
    else {
      v160 = (unsigned int)v147;
    }
    v352 = v159;
    v346 = v158;
    v347 = v160;
    while (1) {
      v348 = v151;
      v349 = v154;
      v161 = *((unsigned __int8*)v363 + v154);
      if (v154 == v158 || v374 == v352) {
        break;
      }
      v162 = *(unsigned __int8*)(v362 + *((unsigned __int8*)v363 + v154));
      v377 = *((unsigned int**)SdkData_e87ab0[0] +
               *((unsigned __int8*)v363 + v154));
      v354 = *((_QWORD*)SdkData_e87ab8[0] + *((unsigned __int8*)v363 + v154));
      v355 = *((unsigned __int8*)v351 + v374);
      v163 = *(unsigned __int8*)(v361 + *((unsigned __int8*)v363 + v154));
      if (*(_BYTE*)(v361 + *((unsigned __int8*)v363 + v154)) != 0) {
        v164 = v375;
        if (v163 != 1 || v161 > 0xA) {
          v166 = v163 == 1 && v161 >= 0xB;
          if (v166) {
            v167 = *((unsigned __int16*)v353 + v368);
            if (*((_WORD*)v353 + v368) != 0) {
              v344 =
                  *(unsigned __int8*)(v362 + *((unsigned __int8*)v363 + v154));
              do {
                v341 = v167;
                v168 = v377;
                for (i = 1;; ++i) {
                  v170 = *v168;
                  v171 =
                      nn_codec_HcrGetABitFromBitstream_plt(v164, v157, v157, 0);
                  --*v156;
                  v172 = v171 != 0 ? v170 : v170 >> 12;
                  if ((v172 & 0x400) != 0) {
                    break;
                  }
                  v168 = &v377[v172 & 0x3FF];
                }
                if ((_DWORD)v162 != 0) {
                  v173 = (char*)(v354 + (v172 & 0x3FF));
                  if (v152 <= 1023) {
                    v174 = 1023;
                  }
                  else {
                    v174 = (unsigned int)v152;
                  }
                  v175 = v174 - v152;
                  v176 = (int*)(v359 + 4LL * v152);
                  do {
                    v178 = *v173++;
                    v177 = v178;
                    if (v178 != 0) {
                      v364 = v173;
                      v179 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                  v157, 0);
                      v173 = v364;
                      v180 = *v156 - 1;
                      *v156 = v180;
                      if (v180 < 0 || i > 510) {
                        goto LABEL_286;
                      }
                      ++i;
                      v181 = v179 != 0 ? -v177 : v177;
                      *v176++ = v181;
                      if (v175 == 0) {
                        goto LABEL_286;
                      }
                    }
                    else {
                      *v176++ = 0;
                      if (v175 == 0) {
                        goto LABEL_286;
                      }
                    }
                    LODWORD(v162) = v162 - 1;
                    ++v152;
                    --v175;
                  } while ((_DWORD)v162 != 0);
                }
                v182 = v359 + 4LL * v152;
                v183 = *(_DWORD*)(v182 - 8);
                v365 = v182;
                if (v183 >= 0) {
                  v184 = *(_DWORD*)(v182 - 8);
                }
                else {
                  v184 = -v183;
                }
                if (v184 == 16) {
                  v185 = i + 3;
                  v186 = 3;
                  v187 = -4;
                  v339 = *(_DWORD*)(v182 - 8);
                  do {
                    v188 = v187;
                    v189 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                v157, 0);
                    ++i;
                    v185 += 2;
                    ++v186;
                    --*v156;
                    v187 = v188 - 1;
                  } while (v189 != 0);
                  v190 = 0;
                  if (v186 != 0) {
                    do {
                      v190 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                  v157, 0) |
                             (2 * v190);
                      v166 = __CFADD__(v188++, 1);
                      --*v156;
                    } while (!v166);
                    i = v185;
                  }
                  v182 = v359 + 4LL * v152;
                  v191 = v190 + (1 << v186);
                  if (v339 < 0) {
                    v191 = -v191;
                  }
                  *(_DWORD*)(v365 - 8) = v191;
                }
                if (v152 > 1024) {
                  goto LABEL_286;
                }
                v192 = *(_DWORD*)(v182 - 4);
                if (v192 >= 0) {
                  v193 = *(_DWORD*)(v182 - 4);
                }
                else {
                  v193 = -v192;
                }
                if (v193 == 16) {
                  v194 = i + 3;
                  v195 = 3;
                  v196 = -4;
                  v340 = *(_DWORD*)(v182 - 4);
                  do {
                    v197 = v196;
                    v198 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                v157, 0);
                    ++i;
                    v194 += 2;
                    ++v195;
                    --*v156;
                    v196 = v197 - 1;
                  } while (v198 != 0);
                  v199 = 0;
                  if (v195 != 0) {
                    do {
                      v199 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                  v157, 0) |
                             (2 * v199);
                      v166 = __CFADD__(v197++, 1);
                      --*v156;
                    } while (!v166);
                    i = v194;
                  }
                  v182 = v359 + 4LL * v152;
                  v200 = v199 + (1 << v195);
                  if (v340 < 0) {
                    v200 = -v200;
                  }
                  *(_DWORD*)(v365 - 4) = v200;
                }
                if (v152 == 1024) {
                  goto LABEL_286;
                }
                if (i > v355) {
                  *v373 |= 0x20000u;
                }
                v164 = v375;
                if ((char)*v156 < 0) {
                  *v373 |= 0x20000000u;
                  *(_QWORD*)(v182 - 8) = 0x200000002000LL;
                  goto LABEL_286;
                }
                LODWORD(v162) = v344;
                v157 = (unsigned int*)((char*)v157 + 2);
                ++v156;
                v167 = v341 - 1;
              } while ((_WORD)v341 != 1);
            }
          }
        }
        else {
          v215 = *((unsigned __int16*)v353 + v368);
          if (*((_WORD*)v353 + v368) != 0) {
            v345 = *(unsigned __int8*)(v362 + *((unsigned __int8*)v363 + v154));
            while (1) {
              v366 = v215;
              v216 = v377;
              for (j = 1;; ++j) {
                v218 = *v216;
                v219 =
                    nn_codec_HcrGetABitFromBitstream_plt(v164, v157, v157, 0);
                --*v156;
                v220 = v219 != 0 ? v218 : v218 >> 12;
                if ((v220 & 0x400) != 0) {
                  break;
                }
                v216 = &v377[v220 & 0x3FF];
              }
              if ((_DWORD)v162 != 0) {
                v221 = (char*)(v354 + (v220 & 0x3FF));
                if (v152 <= 1023) {
                  v222 = 1023;
                }
                else {
                  v222 = (unsigned int)v152;
                }
                v223 = v222 - v152;
                v224 = (int*)(v359 + 4LL * v152);
                do {
                  v226 = *v221++;
                  v225 = v226;
                  if (v226 != 0) {
                    v227 = v221;
                    v228 = nn_codec_HcrGetABitFromBitstream_plt(v375, v157,
                                                                v157, 0);
                    v229 = *v156 - 1;
                    *v156 = v229;
                    if (v229 < 0 || j > 510) {
                      goto LABEL_286;
                    }
                    ++j;
                    v221 = v227;
                    v230 = v228 != 0 ? -v225 : v225;
                    *v224++ = v230;
                    if (v223 == 0) {
                      goto LABEL_286;
                    }
                  }
                  else {
                    *v224++ = 0;
                    if (v223 == 0) {
                      goto LABEL_286;
                    }
                  }
                  LODWORD(v162) = v162 - 1;
                  ++v152;
                  --v223;
                } while ((_DWORD)v162 != 0);
              }
              if (j > v355) {
                *v373 |= 0x40000u;
              }
              v164 = v375;
              LODWORD(v162) = v345;
              if ((char)*v156 < 0) {
                break;
              }
              v157 = (unsigned int*)((char*)v157 + 2);
              ++v156;
              v215 = v366 - 1;
              if ((_WORD)v366 == 1) {
                goto LABEL_281;
              }
            }
            *v373 |= 0x40000000u;
            if ((_DWORD)v345 != 0) {
              v336 = v359 + 4LL * v152 - 4 * v345;
              if ((v345 & 7) != 0) {
                v337 = 0;
                v338 = v345;
                do {
                  ++v337;
                  *(_DWORD*)v336 = 0x2000;
                  v336 += 4;
                  --v338;
                } while ((v345 & 7) != (unsigned __int8)v337);
              }
              else {
                v338 = v345;
              }
              if ((unsigned int)v345 >= 8) {
                do {
                  *(_QWORD*)v336 = 0x200000002000LL;
                  *(_QWORD*)(v336 + 8) = 0x200000002000LL;
                  *(_QWORD*)(v336 + 16) = 0x200000002000LL;
                  *(_QWORD*)(v336 + 24) = 0x200000002000LL;
                  v336 += 32;
                  v338 -= 8;
                } while ((_BYTE)v338 != 0);
              }
            }
            break;
          }
        }
      }
      else {
        v201 = v375;
        v202 = *((unsigned __int16*)v353 + v368);
        if (*((_WORD*)v353 + v368) != 0) {
          while (1) {
            v203 = v377;
            for (k = 0;; ++k) {
              v205 = *v203;
              v206 = nn_codec_HcrGetABitFromBitstream_plt(v201, v157, v157, 0);
              --*v156;
              v207 = v206 != 0 ? v205 : v205 >> 12;
              if ((v207 & 0x400) != 0) {
                break;
              }
              v203 = &v377[v207 & 0x3FF];
            }
            if ((_DWORD)v162 != 0) {
              break;
            }
            v208 = v162;
            v214 = v373;
            if (k >= v355) {
            LABEL_248:
              *v214 |= 0x80000u;
            }
          LABEL_249:
            v201 = v375;
            v162 = v208;
            if ((char)*v156 < 0) {
              *v214 |= 0x80000000;
              if ((_DWORD)v208 != 0) {
                v333 = v359 + 4LL * v152 - 4 * v208;
                if ((v208 & 7) != 0) {
                  v334 = 0;
                  v335 = v208;
                  do {
                    ++v334;
                    *(_DWORD*)v333 = 0x2000;
                    v333 += 4;
                    --v335;
                  } while ((v208 & 7) != (unsigned __int8)v334);
                }
                else {
                  v335 = v208;
                }
                if ((unsigned int)v208 >= 8) {
                  do {
                    *(_QWORD*)v333 = 0x200000002000LL;
                    *(_QWORD*)(v333 + 8) = 0x200000002000LL;
                    *(_QWORD*)(v333 + 16) = 0x200000002000LL;
                    *(_QWORD*)(v333 + 24) = 0x200000002000LL;
                    v333 += 32;
                    v335 -= 8;
                  } while ((_BYTE)v335 != 0);
                }
              }
              goto LABEL_286;
            }
            v157 = (unsigned int*)((char*)v157 + 2);
            ++v156;
            if ((_WORD)--v202 == 0) {
              goto LABEL_281;
            }
          }
          v208 = v162;
          v209 = v162;
          if (v152 <= 1023) {
            v210 = 1023;
          }
          else {
            v210 = (unsigned int)v152;
          }
          v211 = (char*)(v354 + (v207 & 0x3FF));
          v212 = v210 - v152;
          v213 = (_DWORD*)(v359 + 4LL * v152);
          while (1) {
            *v213++ = *v211;
            if (v212 == 0) {
              goto LABEL_286;
            }
            ++v211;
            --v209;
            ++v152;
            --v212;
            if (v209 == 0) {
              v214 = v373;
              if (k < v355) {
                goto LABEL_249;
              }
              goto LABEL_248;
            }
          }
        }
      }
    LABEL_281:
      if (v368 == v347) {
        break;
      }
      v158 = v346;
      v154 = v349 + 1;
      v151 = v348 - 1;
      ++v374;
      ++v368;
      if ((_WORD)v348 == 1) {
        v155 = v343;
        LODWORD(v149) = v367;
        v153 = v360 + v342 + 1;
        goto LABEL_284;
      }
    }
  }
  else {
  LABEL_284:
    if ((int)v149 <= 12) {
      v373[2122] = v153;
      v373[2391] = v154;
      v373[4] = v152;
      v373[2460] = v155;
      v373[2130] = v367 + 1;
    }
  }
LABEL_286:
  if ((*v373 & 0x100E01FC) == 0) {
    nn_codec_DecodeNonPCWs_plt(v375, v373);
  }
  v231 = v373[28];
  v232 = (unsigned __int8*)v370;
  v233 = v380;
  if ((_WORD)v231 != 0) {
    v234 = v231 & 7;
    if ((unsigned __int16)v231 >= 8u) {
      v236 = v231 & 0xFFF8;
      v235 = 0;
      v237 = 0;
      do {
        v238 = v232 + 8;
        v237 += 8;
        v49 = (unsigned __int8)(v232[7] | v232[6] | v232[5] | v232[4] |
                                v232[3] | v232[2] | v232[1] | *v232) == 0;
        v232 += 8;
        if (!v49) {
          v235 = 1;
        }
      } while (v237 != v236);
      v232 = v238;
      if (v234 != 0) {
        goto LABEL_297;
      }
    }
    else {
      v235 = 0;
      if ((v231 & 7) == 0) {
        goto LABEL_301;
      }
    LABEL_297:
      v239 = 0;
      do {
        v240 = *v232++;
        ++v239;
        if (v240 != 0) {
          v235 = 1;
        }
      } while (v234 != v239);
    }
  LABEL_301:
    if (v235 != 0) {
      *v373 |= 1u;
    }
  }
  v241 = *((__int16*)v373 + 11);
  v242 = *((unsigned int**)v373 + 1);
  v243 = v373 + 64;
  v244 = *((_QWORD*)v373 + 8);
  v373[4] = v358;
  v373[2122] = v360;
  v373[2391] = v356;
  v373[2130] = v367;
  v373[2460] = v357;
  v378 = *((_QWORD*)v373 + 11);
  nn_codec_FDKmemclear_plt(v373 + 64, 4096);
  if (v241 == 0) {
    v371 = true;
    v256 = v375;
    if (*(_BYTE*)(a2 + 35) == 2) {
      goto LABEL_314;
    }
    goto LABEL_368;
  }
  v245 = v350;
  v246 = 0;
  v247 = v242;
  do {
    v248 = *v383;
    v381 = v233;
    ++v383;
    v249 = *(_BYTE*)(v378 + *v245);
    v250 = (unsigned __int16)(v248 << v249);
    if ((unsigned __int16)(v248 << v249) != 0) {
      v251 = &v373[*(unsigned __int16*)v233 + 64];
      do {
        while (1) {
          v253 = *v247++;
          v252 = v253;
          v254 = v245;
          v255 = nn_codec_FDKabs_plt(v253);
          v245 = v254;
          if (v255 > *(unsigned __int16*)(v244 + 2LL * *v254) &&
              v255 != 0x2000) {
            break;
          }
          *v251++ = v252;
          if (--v250 == 0) {
            goto LABEL_305;
          }
        }
        ++v246;
        *v251++ = 0x2000;
        --v250;
      } while (v250 != 0);
    }
  LABEL_305:
    ++v245;
    --v241;
    v233 = (unsigned int*)((char*)v381 + 2);
  } while (v241 != 0);
  v243 = v373 + 64;
  v256 = v375;
  v371 = v246 == 0;
  if (*(_BYTE*)(a2 + 35) != 2) {
  LABEL_368:
    v327 = 0;
    do {
      v328 = &v243[v327];
      v329 = &v242[v327];
      v327 += 16;
      *v329 = *v328;
      v329[1] = v328[1];
      v329[2] = v328[2];
      v329[3] = v328[3];
      v329[4] = v328[4];
      v329[5] = v328[5];
      v329[6] = v328[6];
      v329[7] = v328[7];
      v329[8] = v328[8];
      v329[9] = v328[9];
      v329[10] = v328[10];
      v329[11] = v328[11];
      v329[12] = v328[12];
      v329[13] = v328[13];
      v329[14] = v328[14];
      v329[15] = v328[15];
    } while ((_DWORD)(v327 * 4) != 4096);
    goto LABEL_370;
  }
LABEL_314:
  v257 = a2 + 24;
  v258 = 0;
  v382 = *(_QWORD*)(a3 + 8);
  v384 = *(_QWORD*)(a2 + 216);
  v259 = v373 + 96;
  do {
    v260 = &v242[v258];
    v258 += 16;
    *v260 = *(v259 - 32);
    v260[1] = *(v259 - 31);
    v260[2] = *(v259 - 30);
    v260[3] = *(v259 - 29);
    v260[4] = *v259;
    v260[5] = v259[1];
    v260[6] = v259[2];
    v260[7] = v259[3];
    v260[8] = v259[32];
    v260[9] = v259[33];
    v260[10] = v259[34];
    v260[11] = v259[35];
    v260[12] = v259[64];
    v260[13] = v259[65];
    v260[14] = v259[66];
    v261 = v259[67];
    v259 += 128;
    v260[15] = v261;
  } while (v258 != 128);
  v262 = 0;
  v263 = &v242[*(int*)(a2 + 40)];
  v264 = v373 + 100;
  do {
    v265 = &v263[v262];
    v262 += 16;
    *v265 = *(v264 - 32);
    v265[1] = *(v264 - 31);
    v265[2] = *(v264 - 30);
    v265[3] = *(v264 - 29);
    v265[4] = *v264;
    v265[5] = v264[1];
    v265[6] = v264[2];
    v265[7] = v264[3];
    v265[8] = v264[32];
    v265[9] = v264[33];
    v265[10] = v264[34];
    v265[11] = v264[35];
    v265[12] = v264[64];
    v265[13] = v264[65];
    v265[14] = v264[66];
    v266 = v264[67];
    v264 += 128;
    v265[15] = v266;
  } while (v262 != 128);
  v267 = 0;
  v268 = &v242[2 * *(int*)(a2 + 40)];
  v269 = v373 + 104;
  do {
    v270 = &v268[v267];
    v267 += 16;
    *v270 = *(v269 - 32);
    v270[1] = *(v269 - 31);
    v270[2] = *(v269 - 30);
    v270[3] = *(v269 - 29);
    v270[4] = *v269;
    v270[5] = v269[1];
    v270[6] = v269[2];
    v270[7] = v269[3];
    v270[8] = v269[32];
    v270[9] = v269[33];
    v270[10] = v269[34];
    v270[11] = v269[35];
    v270[12] = v269[64];
    v270[13] = v269[65];
    v270[14] = v269[66];
    v271 = v269[67];
    v269 += 128;
    v270[15] = v271;
  } while (v267 != 128);
  v272 = 0;
  v273 = &v242[3 * *(int*)(a2 + 40)];
  v274 = v373 + 108;
  do {
    v275 = &v273[v272];
    v272 += 16;
    *v275 = *(v274 - 32);
    v275[1] = *(v274 - 31);
    v275[2] = *(v274 - 30);
    v275[3] = *(v274 - 29);
    v275[4] = *v274;
    v275[5] = v274[1];
    v275[6] = v274[2];
    v275[7] = v274[3];
    v275[8] = v274[32];
    v275[9] = v274[33];
    v275[10] = v274[34];
    v275[11] = v274[35];
    v275[12] = v274[64];
    v275[13] = v274[65];
    v275[14] = v274[66];
    v276 = v274[67];
    v274 += 128;
    v275[15] = v276;
  } while (v272 != 128);
  v277 = 0;
  v278 = &v242[4 * *(int*)(a2 + 40)];
  v279 = v373 + 112;
  do {
    v280 = &v278[v277];
    v277 += 16;
    *v280 = *(v279 - 32);
    v280[1] = *(v279 - 31);
    v280[2] = *(v279 - 30);
    v280[3] = *(v279 - 29);
    v280[4] = *v279;
    v280[5] = v279[1];
    v280[6] = v279[2];
    v280[7] = v279[3];
    v280[8] = v279[32];
    v280[9] = v279[33];
    v280[10] = v279[34];
    v280[11] = v279[35];
    v280[12] = v279[64];
    v280[13] = v279[65];
    v280[14] = v279[66];
    v281 = v279[67];
    v279 += 128;
    v280[15] = v281;
  } while (v277 != 128);
  v282 = 0;
  v283 = &v242[5 * *(int*)(a2 + 40)];
  v284 = v373 + 116;
  do {
    v285 = &v283[v282];
    v282 += 16;
    *v285 = *(v284 - 32);
    v285[1] = *(v284 - 31);
    v285[2] = *(v284 - 30);
    v285[3] = *(v284 - 29);
    v285[4] = *v284;
    v285[5] = v284[1];
    v285[6] = v284[2];
    v285[7] = v284[3];
    v285[8] = v284[32];
    v285[9] = v284[33];
    v285[10] = v284[34];
    v285[11] = v284[35];
    v285[12] = v284[64];
    v285[13] = v284[65];
    v285[14] = v284[66];
    v286 = v284[67];
    v284 += 128;
    v285[15] = v286;
  } while (v282 != 128);
  v287 = 0;
  v288 = &v242[6 * *(int*)(a2 + 40)];
  v289 = v373 + 120;
  do {
    v290 = &v288[v287];
    v287 += 16;
    *v290 = *(v289 - 32);
    v290[1] = *(v289 - 31);
    v290[2] = *(v289 - 30);
    v290[3] = *(v289 - 29);
    v290[4] = *v289;
    v290[5] = v289[1];
    v290[6] = v289[2];
    v290[7] = v289[3];
    v290[8] = v289[32];
    v290[9] = v289[33];
    v290[10] = v289[34];
    v290[11] = v289[35];
    v290[12] = v289[64];
    v290[13] = v289[65];
    v290[14] = v289[66];
    v291 = v289[67];
    v289 += 128;
    v290[15] = v291;
  } while (v287 != 128);
  v292 = 0;
  v293 = &v242[7 * *(int*)(a2 + 40)];
  v294 = v373 + 124;
  do {
    v295 = &v293[v292];
    v292 += 16;
    *v295 = *(v294 - 32);
    v295[1] = *(v294 - 31);
    v295[2] = *(v294 - 30);
    v295[3] = *(v294 - 29);
    v295[4] = *v294;
    v295[5] = v294[1];
    v295[6] = v294[2];
    v295[7] = v294[3];
    v295[8] = v294[32];
    v295[9] = v294[33];
    v295[10] = v294[34];
    v295[11] = v294[35];
    v295[12] = v294[64];
    v295[13] = v294[65];
    v295[14] = v294[66];
    v296 = v294[67];
    v294 += 128;
    v295[15] = v296;
  } while (v292 != 128);
  v379 = *(char*)(a2 + 32);
  if (v379 >= 1 && *(char*)(a2 + 36) >= 1) {
    v297 = *(char*)(a2 + 36);
    v298 = 0;
    v299 = 0;
    v300 = SdkData_e87ac0;
    v301 = SdkData_e87ac8;
    v302 = SdkData_e87ad0;
    v303 = v384 + 256;
    do {
      v304 = *(char*)(v257 + v298);
      if (v304 >= 1) {
        v305 = 0;
        do {
          v306 = 0;
          v307 = *(__int16*)(v384 + (((v298 << 52) + (v305 << 48)) >> 47));
          v308 = (__int16*)(v382 + 2 * v305);
          v309 = v307 >> 2;
          v310 = v307 & 3;
          v311 = v301 + 56LL * v310;
          v312 = v302 + 14LL * v310;
          do {
            while (1) {
              v313 = *v308;
              v314 = v308[1];
              v315 = (char)(v299 + v306);
              if (v313 < v314) {
                v316 = 0;
                do {
                  v317 =
                      (int*)&v242[*(_DWORD*)(a2 + 40) * v315 + (__int16)v313];
                  v318 = *v317;
                  v319 = v317[1];
                  if (*v317 < 0) {
                    v318 = -v318;
                  }
                  if (v318 > (int)v316) {
                    v316 = v318;
                  }
                  if (v319 >= 0) {
                    v320 = v317[1];
                  }
                  else {
                    v320 = -v319;
                  }
                  if (v320 > v316) {
                    v316 = v320;
                  }
                  v321 = v317[2];
                  v322 = v317[3];
                  if (v321 < 0) {
                    v321 = -v321;
                  }
                  if (v321 > v316) {
                    v316 = v321;
                  }
                  if (v322 >= 0) {
                    v323 = v317[3];
                  }
                  else {
                    v323 = -v322;
                  }
                  if (v323 > v316) {
                    v316 = v323;
                  }
                  v313 = (__int16)(v313 + 4);
                } while (v313 < v314);
                if (v316 != 0) {
                  break;
                }
              }
              ++v306;
              *(_WORD*)(v303 + 2LL * ((int)v305 + 16 * v315)) = v309;
              if (v306 == v304) {
                goto LABEL_337;
              }
            }
            if (v316 >= 0x1FFF) {
              v324 = 0x1FFF;
            }
            else {
              v324 = v316;
            }
            v325 = __clz(v324);
            v326 = (int)(v324 << v325) >> 19;
            ++v306;
            *(_WORD*)(v303 + 2LL * ((int)v305 + 16 * v315)) =
                v309 -
                (__clz(
                     (unsigned __int64)(*(int*)(v311 + 4LL * (32 - v325)) *
                                        (__int64)(int)((v326 & 0xF) *
                                                           *(_DWORD*)(v300 +
                                                                      4LL *
                                                                          ((unsigned int)(unsigned __int8)(v326 >>
                                                                                                           4) +
                                                                           1)) +
                                                       (16 - (v326 & 0xF)) *
                                                           *(_DWORD*)(v300 +
                                                                      4LL *
                                                                          (unsigned __int8)(v326 >>
                                                                                            4)))) >>
                     32) +
                 (char)~*(_BYTE*)(v312 + 32 - v325) - 2);
          } while (v306 != v304);
        LABEL_337:
          ++v305;
        } while (v305 != v297);
        v257 = a2 + 24;
        v256 = v375;
        LOBYTE(v304) = *(_BYTE*)(a2 + 24 + v298);
      }
      v299 += v304;
      ++v298;
    } while (v298 != v379);
  }
LABEL_370:
  if (!v371) {
    *v373 |= 2u;
  }
  if (v256[12] != 0) {
    nn_codec_FDK_put_plt(v256 + 2, *v256);
    *(_QWORD*)v256 = 0;
    v330 = nn_codec_FDK_getBitCnt_plt(v256 + 2);
    v331 = v372 - v330;
    if (v372 != v330) {
      goto LABEL_374;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(v256 + 2, v256[1], 0);
    *(_QWORD*)v256 = 0;
    v332 = nn_codec_FDK_getBitCnt_plt(v256 + 2);
    v331 = v372 - v332;
    if (v372 != v332) {
    LABEL_374:
      nn_codec_FDKpushBiDirectional(v256, v331);
    }
  }
  return *v373;
}

#pragma GCC visibility pop
