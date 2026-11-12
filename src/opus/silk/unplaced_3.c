#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* silk_stereo_quant_pred(_DWORD* result, char*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_4e380(__int64 result, int, int);
__int64 opus_silk_51e80(__int64 result, char, __int64, int, unsigned int);
__int64 silk_NLSF_decode(__int16*, char*, __int64);
__int64 silk_gains_dequant(__int64 result, char*, _BYTE*, int, int);
__int64 silk_stereo_find_predictor(int*, __int64, __int64, int*, unsigned int,
                                   int);
extern _UNKNOWN* MovieData_c0ab0;
extern _UNKNOWN** MovieData_c0aa8;
unsigned __int64 MovieRoutine_45380(__int64, __int64, int);
__int64 opus_silk_51b60(__int64 a1, __int64 a2, int a3);
__int64 opus_silk_592e0(unsigned __int16* a1, __int16* a2, __int64 a3, char* a4,
                        _BYTE* a5, unsigned int* a6, int a7, int a8, int a9,
                        int a10, unsigned int a11);

__int64 opus_silk_51b60(__int64 a1, __int64 a2, int a3)
{
  int v3;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  _WORD* v12;
  __int16* v13;
  __int16 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _WORD* v19;
  __int16* v20;
  __int16* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 result;
  _WORD* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  int v31;
  _QWORD v32[4];
  _QWORD v33[4];

  v3 = *(_DWORD*)(a1 + 2324);
  memset(v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  silk_gains_dequant(a2 + 16, (char*)(a1 + 2760), (_BYTE*)(a1 + 2312), a3 == 2,
                     v3);
  silk_NLSF_decode((__int16*)v33, (char*)(a1 + 2768), *(_QWORD*)(a1 + 2752));
  MovieRoutine_45380(a2 + 64, (__int64)v33, *(_DWORD*)(a1 + 2340));
  if (*(_DWORD*)(a1 + 2376) == 1) {
    *(_BYTE*)(a1 + 2791) = 4;
  LABEL_8:
    memcpy_plt(a2 + 32, a2 + 64, 2LL * *(int*)(a1 + 2340));
    goto LABEL_15;
  }
  v6 = *(char*)(a1 + 2791);
  if (v6 > 3) {
    goto LABEL_8;
  }
  v7 = *(_DWORD*)(a1 + 2340);
  if (v7 >= 1) {
    v8 = v7 & 3;
    if ((unsigned int)v7 >= 4) {
      v10 = (__int16*)(a1 + 2350);
      v11 = 0;
      v12 = (_WORD*)v32 + 2;
      v13 = (__int16*)v33 + 2;
      do {
        v11 -= 4;
        v14 =
            *(v10 - 2) + ((unsigned int)((*(v13 - 1) - *(v10 - 2)) * v6) >> 2);
        v15 = *(v10 - 1);
        v16 = *v13;
        *(v12 - 2) =
            *(v10 - 3) + ((unsigned int)((*(v13 - 2) - *(v10 - 3)) * v6) >> 2);
        *(v12 - 1) = v14;
        v17 = *v10;
        v18 = v13[1];
        v10 += 4;
        v13 += 4;
        *v12 = v15 + ((unsigned int)((v16 - v15) * v6) >> 2);
        v12[1] = v17 + ((unsigned int)((v18 - v17) * v6) >> 2);
        v12 += 4;
      } while (-(__int64)(v7 & 0x7FFFFFFC) != v11);
      v9 = -v11;
      if ((v7 & 3) == 0) {
        goto LABEL_14;
      }
    }
    else {
      v9 = 0;
      if ((v7 & 3) == 0) {
        goto LABEL_14;
      }
    }
    v19 = (_WORD*)v32 + v9;
    v20 = (__int16*)v33 + v9;
    v21 = (__int16*)(a1 + 2 * v9 + 2344);
    do {
      v23 = *v21++;
      v22 = v23;
      v24 = *v20++;
      --v8;
      *v19++ = v22 + ((unsigned int)((v24 - v22) * v6) >> 2);
    } while (v8 != 0);
  }
LABEL_14:
  MovieRoutine_45380(a2 + 32, (__int64)v32, v7);
LABEL_15:
  v25 = *(int*)(a1 + 2340);
  memcpy_plt(a1 + 2344, (__int64)v33, 2 * v25);
  if (*(_DWORD*)(a1 + 4184) != 0) {
    opus_silk_4e380(a2 + 32, v25, 63570);
    opus_silk_4e380(a2 + 64, *(_DWORD*)(a1 + 2340), 63570);
  }
  if (*(_BYTE*)(a1 + 2789) == 2) {
    result =
        opus_silk_51e80(*(unsigned __int16*)(a1 + 2786), *(_BYTE*)(a1 + 2788),
                        a2, *(_DWORD*)(a1 + 2316), *(_DWORD*)(a1 + 2324));
    if (*(int*)(a1 + 2324) >= 1) {
      v27 = (_WORD*)(a2 + 104);
      v28 = 0;
      v29 = (char*)MovieData_c0aa8[*(char*)(a1 + 2792)];
      do {
        v30 = *(char*)(a1 + 2764 + v28++);
        v30 *= 5;
        *(v27 - 4) = v29[v30] << 7;
        *(v27 - 3) = v29[v30 + 1] << 7;
        *(v27 - 2) = v29[v30 + 2] << 7;
        *(v27 - 1) = v29[v30 + 3] << 7;
        *v27 = v29[v30 + 4] << 7;
        v27 += 5;
      } while (v28 < *(int*)(a1 + 2324));
    }
    v31 = *((__int16*)MovieData_c0ab0 + *(char*)(a1 + 2793));
  }
  else {
    memset_plt(a2, 0, 4LL * *(int*)(a1 + 2324));
    result = memset_plt(a2 + 96, 0, 10LL * *(int*)(a1 + 2324));
    v31 = 0;
    *(_BYTE*)(a1 + 2792) = 0;
  }
  *(_DWORD*)(a2 + 136) = v31;
  return result;
}

__int64 opus_silk_592e0(unsigned __int16* a1, __int16* a2, __int64 a3, char* a4,
                        _BYTE* a5, unsigned int* a6, int a7, int a8, int a9,
                        int a10, unsigned int a11)
{
  __int16* v12;
  unsigned __int64 v16;
  _DWORD* v17;
  int v18;
  __int64 v19;
  _WORD* v20;
  __int16* v21;
  __int16* v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  __int16* v36;
  int v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  char* v41;
  char* v42;
  __int16 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int16* v48;
  _WORD* v49;
  _WORD* v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  char* v60;
  char* v61;
  __int16* v62;
  int v63;
  __int16 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  _WORD* v68;
  _WORD* v69;
  __int64 v70;
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
  __int16* v81;
  __int64 v82;
  int v83;
  int v84;
  unsigned int v85;
  unsigned __int64 v86;
  int v87;
  int v88;
  __int16 v89;
  int v90;
  int v91;
  int v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  unsigned int v96;
  unsigned int v97;
  signed int v98;
  char v99;
  int v100;
  int v101;
  __int64 v102;
  int v103;
  char v104;
  int v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  signed int v109;
  _DWORD* v110;
  int v111;
  unsigned __int64 v112;
  unsigned int v113;
  unsigned __int64 v114;
  unsigned int v115;
  int v116;
  unsigned int v117;
  unsigned int v118;
  int v119;
  __int64 v120;
  unsigned __int64 v121;
  int v122;
  unsigned int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  unsigned int v128;
  int v129;
  int v130;
  int v131;
  __int16* v132;
  _DWORD* v133;
  __int64 v134;
  _BYTE* v135;
  __int64 result;
  int v137;
  _DWORD* v138;
  int v139;
  int v140;
  bool v141;
  int v142;
  unsigned __int16 v143;
  unsigned __int16 v144;
  int v145;
  int v146;
  int v147;
  __int16* v148;
  _WORD* v149;
  __int16 v150;
  __int16 v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  __int64 v162;
  __int64 v163;
  int v164;
  int v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  int v169;
  int v170;
  unsigned __int64 v171;
  int v172;
  unsigned __int64 v173;
  int v174;
  int v175;
  __int64 v176;
  int v177;
  _WORD* v178;
  __int16* v179;
  __int64 v180;
  __int16* v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  struct {
    __int16* v187;
    int v188;
    int v189;
    char* v190;
    _BYTE* v191;
    __int64 v192;
    __int16* v193;
    _DWORD* v194;
    unsigned int* v195;
  } v187_;
  __int64 v196;
  __int64 v197;

  v12 = a2 - 2;
  v187_.v188 = a8;
  v187_.v189 = a7;
  v187_.v195 = a6;
  v187_.v190 = a4;
  v16 = 2LL * (int)(a11 + 2);
  v17 = (_DWORD*)((char*)&v187_.v187 - ((v16 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt((__int64)v17, 0, v16);
  if ((int)a11 < -1) {
    goto LABEL_18;
  }
  if ((int)(a11 + 2) <= 1) {
    v18 = 1;
  }
  else {
    v18 = a11 + 2;
  }
  if (a11 > 0x7FFFFFFD) {
    v19 = 0;
    if ((v18 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  v20 = (_WORD*)v17 + 1;
  v21 = (__int16*)(a3 - 4);
  v22 = a2 - 1;
  v23 = 0;
  do {
    v24 = *(v22 - 1);
    v25 = *v21;
    v23 -= 2;
    *(v22 - 1) = ((v25 + v24) & 1) + ((unsigned int)(v25 + v24) >> 1);
    v26 = ((v24 - v25) & 1) + ((v24 - v25) >> 1);
    v27 = v21[1];
    v21 += 2;
    if (v26 >= 0x7FFF) {
      LOWORD(v26) = 0x7FFF;
    }
    *(v20 - 1) = v26;
    v28 = *v22;
    *v22 = ((v27 + v28) & 1) + ((unsigned int)(v27 + v28) >> 1);
    v22 += 2;
    v29 = ((v28 - v27) & 1) + ((v28 - v27) >> 1);
    if (v29 >= 0x7FFF) {
      LOWORD(v29) = 0x7FFF;
    }
    *v20 = v29;
    v20 += 2;
  } while (-(__int64)(v18 & 0xFFFFFFFE) != v23);
  v19 = -v23;
  if ((v18 & 1) != 0) {
  LABEL_15:
    v30 = v19;
    v31 = 2 * v19 - 4;
    v32 = *(__int16*)((char*)a2 + v31);
    LODWORD(v31) = *(__int16*)(a3 + v31);
    v12[v30] = ((v31 + v32) & 1) + ((unsigned int)(v31 + v32) >> 1);
    v33 = ((v32 - v31) & 1) + ((v32 - (int)v31) >> 1);
    if (v33 >= 0x7FFF) {
      LOWORD(v33) = 0x7FFF;
    }
    *(_WORD*)((char*)v17 + v30 * 2) = v33;
  }
LABEL_18:
  v34 = *((_DWORD*)a1 + 1);
  v187_.v191 = a5;
  v187_.v192 = a3;
  v35 = 2LL * (int)a11;
  v36 = v12;
  v187_.v194 = v17;
  *(_DWORD*)v12 = v34;
  v37 = *((_DWORD*)a1 + 2);
  v38 = *(_DWORD*)&v12[v35 / 2];
  *v17 = v37;
  v39 = *(_DWORD*)((char*)v17 + v35);
  *((_DWORD*)a1 + 1) = v38;
  *((_DWORD*)a1 + 2) = v39;
  v40 = (v35 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v41 = (char*)&v187_.v187 - v40;
  memset_plt((__int64)&v187_.v187 - v40, 0, v35);
  v42 = (char*)&v187_.v187 - v40;
  memset_plt((__int64)&v187_.v187 - v40, 0, v35);
  v187_.v193 = a2;
  v187_.v187 = v36;
  if ((int)a11 < 1) {
    v46 = (char*)&v187_.v187 - v40;
    memset_plt((__int64)&v187_.v187 - v40, 0, 2LL * (int)a11);
    v47 = (char*)&v187_.v187 - v40;
    memset_plt((__int64)v47, 0, 2LL * (int)a11);
    goto LABEL_36;
  }
  v43 = *v36;
  v44 = a11 & 3;
  if (a11 < 4) {
    v45 = 0;
    if ((a11 & 3) == 0) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v48 = a2 + 1;
  v49 = v42 + 4;
  v50 = v41 + 4;
  v51 = 0;
  do {
    v52 = *(v48 - 1);
    v53 = *(v48 - 2);
    v54 = *v48;
    v51 -= 4;
    v55 = (v53 + ((v52 + v43) >> 1) + 1) >> 1;
    *(v50 - 2) = v55;
    *(v49 - 2) = v53 - v55;
    v56 = (v52 + ((v54 + v53) >> 1) + 1) >> 1;
    *(v50 - 1) = v56;
    *(v49 - 1) = v52 - v56;
    v43 = v48[1];
    v57 = (v54 + ((v43 + v52) >> 1) + 1) >> 1;
    *v50 = v57;
    *v49 = v54 - v57;
    v58 = v48[2];
    v48 += 4;
    v59 = (v43 + ((v58 + v54) >> 1) + 1) >> 1;
    v50[1] = v59;
    v50 += 4;
    v49[1] = v43 - v59;
    v49 += 4;
  } while (-(__int64)(a11 & 0x7FFFFFFC) != v51);
  v45 = -v51;
  if ((a11 & 3) != 0) {
  LABEL_26:
    v60 = &v42[2 * v45];
    v61 = &v41[2 * v45];
    v62 = &a2[v45];
    do {
      --v44;
      v63 = *v62 + v43;
      v64 = *(v62++ - 1);
      v65 = ((v63 >> 1) + v64 + 1) >> 1;
      *(_WORD*)v61 = v65;
      v61 += 2;
      *(_WORD*)v60 = v64 - v65;
      v60 += 2;
      v43 = v64;
    } while (v44 != 0);
  }
LABEL_28:
  v46 = (char*)&v187_.v187 - ((v35 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v46, 0, 2LL * (int)a11);
  v47 = v46;
  memset_plt((__int64)v46, 0, 2LL * (int)a11);
  v66 = a11 & 3;
  if (a11 < 4) {
    v67 = 0;
    if ((a11 & 3) == 0) {
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  v68 = v46 + 4;
  v69 = v46 + 4;
  v70 = 0;
  v71 = (__int16*)v187_.v194 + 3;
  do {
    v72 = *(v71 - 1);
    v73 = *(v71 - 2);
    v74 = *v71;
    v70 -= 4;
    v75 = v72 + (__int16)v37;
    LOWORD(v37) = v71[1];
    v76 = (v73 + (v75 >> 1) + 1) >> 1;
    *(v69 - 2) = v76;
    *(v68 - 2) = v73 - v76;
    v77 = (v72 + ((v74 + v73) >> 1) + 1) >> 1;
    *(v69 - 1) = v77;
    *(v68 - 1) = v72 - v77;
    v78 = (v74 + (((__int16)v37 + v72) >> 1) + 1) >> 1;
    *v69 = v78;
    *v68 = v74 - v78;
    v79 = v71[2];
    v71 += 4;
    v80 = ((__int16)v37 + ((v79 + v74) >> 1) + 1) >> 1;
    v69[1] = v80;
    v69 += 4;
    v68[1] = v37 - v80;
    v68 += 4;
  } while (-(__int64)(a11 & 0x7FFFFFFC) != v70);
  v67 = -v70;
  if ((a11 & 3) != 0) {
  LABEL_34:
    v81 = (__int16*)v187_.v194 + v67 + 2;
    do {
      v82 = 2 * v67++;
      --v66;
      v83 = *v81 + (__int16)v37;
      LOWORD(v37) = *(v81++ - 1);
      v84 = ((v83 >> 1) + (__int16)v37 + 1) >> 1;
      *(_WORD*)&v46[v82] = v84;
      *(_WORD*)&v46[v82] = v37 - v84;
    } while (v66 != 0);
  }
LABEL_36:
  v196 = 0;
  v197 = 0;
  v85 = 655;
  if (a11 == 10 * a10) {
    v85 = 328;
  }
  v86 = (v85 * (unsigned __int64)(unsigned int)((__int16)v187_.v188 *
                                                (__int16)v187_.v188)) >>
        16;
  if (a11 == 10 * a10) {
    v87 = -1200;
  }
  else {
    v87 = -600;
  }
  v88 = silk_stereo_find_predictor((int*)&v196 + 1, (__int64)v41, (__int64)v46,
                                   (int*)a1 + 3, a11, v86);
  v89 = v88;
  LODWORD(v197) = v88;
  v90 = silk_stereo_find_predictor((int*)&v196, (__int64)v42, (__int64)v47,
                                   (int*)a1 + 5, a11, v86);
  HIDWORD(v197) = v90;
  v91 = 3 * SWORD2(v196) + v196;
  if (v91 >= 0x10000) {
    v91 = 0x10000;
  }
  v92 = 3 * v91;
  v93 = -851968 - 3 * v91;
  if (v87 + v187_.v189 <= 1) {
    v94 = 1;
  }
  else {
    v94 = v87 + v187_.v189;
  }
  v95 = 600 * (__int16)a10 + 2000;
  v96 = __clz(v94);
  if (v92 + 851968 >= 0) {
    v93 = v92 + 851968;
  }
  v97 = __clz(v93);
  v98 = v94 << (v96 - 1);
  v99 = v97 - 1;
  v100 = v96 - v97;
  v101 = (v92 + 851968) << v99;
  v102 = (0x1FFFFFFF / (v101 >> 16) * (__int64)v98) >> 16;
  v103 =
      ((unsigned __int64)(0x1FFFFFFF / (v101 >> 16) *
                          (__int64)(int)(v98 -
                                         (((unsigned __int64)((int)v102 *
                                                              (__int64)v101) >>
                                           29) &
                                          0xFFFFFFF8))) >>
       16) +
      v102;
  v104 = -10 - v100;
  if ((unsigned int)(v100 + 10) >= 0x20) {
    v105 = 0;
  }
  else {
    v105 = v103 >> (v100 + 10);
  }
  v106 = (int)0x80000000 >> v104;
  if ((int)0x80000000 >> v104 <= v103) {
    v106 = v103;
  }
  if ((int)(0x7FFFFFFFu >> v104) >= v103) {
    v107 = v106;
  }
  else {
    v107 = 0x7FFFFFFFu >> v104;
  }
  v108 = v107 << v104;
  if (v100 <= -11) {
    v109 = v108;
  }
  else {
    v109 = v105;
  }
  v110 = v187_.v195;
  *v187_.v195 = v109;
  if (v109 >= v95) {
    v110[1] = v94 - v109;
    v130 = 0x4000;
  }
  else {
    *v110 = v95;
    v110[1] = v94 - v95;
    v111 = 2 * (v94 - v95) - v95;
    v112 = (__int16)v95 * (__int64)(v92 + 0x10000);
    if (v111 >= 0) {
      v113 = 2 * (v94 - v95) - v95;
    }
    else {
      v113 = v95 - 2 * (v94 - v95);
    }
    v114 = v112 >> 16;
    v115 = __clz(v113);
    v116 = v111 << (v115 - 1);
    if ((v114 & 0x80000000) == 0LL) {
      v117 = v114;
    }
    else {
      v117 = -(int)v114;
    }
    v118 = __clz(v117);
    v119 = (_DWORD)v114 << (v118 - 1);
    v120 = (0x1FFFFFFF / (v119 >> 16) * (__int64)v116) >> 16;
    v121 =
        0x1FFFFFFF / (v119 >> 16) *
        (__int64)(int)(v116 -
                       (((unsigned __int64)((int)v120 * (__int64)v119) >> 29) &
                        0xFFFFFFF8));
    v122 = v115 - v118;
    v123 = v115 - v118 + 13;
    v124 = (v121 >> 16) + v120;
    v125 = v124 >> (v115 - v118 + 13);
    if (v123 >= 0x20) {
      v126 = 0;
    }
    else {
      v126 = v125;
    }
    v127 = (int)0x80000000 >> (-13 - v122);
    if (v127 <= v124) {
      v127 = v124;
    }
    if ((int)(0x7FFFFFFFu >> (-13 - v122)) >= v124) {
      v128 = v127;
    }
    else {
      v128 = 0x7FFFFFFFu >> (-13 - v122);
    }
    v129 = v128 << (-13 - v122);
    if (v122 > -14) {
      v129 = v126;
    }
    v130 = v129 & ~(v129 >> 31);
    if (v130 >= 0x4000) {
      v130 = 0x4000;
    }
  }
  v131 = (__int16)v86;
  v132 = v187_.v193;
  v133 = v187_.v194;
  v135 = v187_.v191;
  v134 = v187_.v192;
  a1[14] += (unsigned int)(v131 * (v130 - (__int16)a1[14])) >> 16;
  *v135 = 0;
  if (a9 != 0) {
    v197 = 0;
    result = (__int64)silk_stereo_quant_pred(&v197, v187_.v190);
    v137 = 0;
    v138 = v187_.v195;
    if (*v135 == 1) {
      goto LABEL_96;
    }
  LABEL_92:
    a1[16] = 0;
    if (*v135 != 0) {
      goto LABEL_102;
    }
    goto LABEL_93;
  }
  v139 = (__int16)a1[14];
  v140 = 8 * v94;
  if (a1[15] != 0) {
    if (v140 < 11 * v95 ||
        (int)((unsigned __int64)((__int16)a1[14] * (__int64)v91) >> 16) <=
            327) {
      LODWORD(v197) = (v89 * v139) >> 14;
      HIDWORD(v197) = ((__int16)v90 * v139) >> 14;
      result = (__int64)silk_stereo_quant_pred(&v197, v187_.v190);
      v137 = 0;
      v197 = 0;
      v138 = v187_.v195;
      if (*v135 == 1) {
        goto LABEL_96;
      }
      goto LABEL_92;
    }
  }
  else if (v140 < 13 * v95 ||
           (int)((unsigned __int64)((__int16)a1[14] * (__int64)v91) >> 16) <=
               818) {
    LODWORD(v197) = (v89 * v139) >> 14;
    HIDWORD(v197) = ((__int16)v90 * v139) >> 14;
    result = (__int64)silk_stereo_quant_pred(&v197, v187_.v190);
    v138 = v187_.v195;
    v137 = 0;
    v197 = 0;
    *v187_.v195 = v94;
    v138[1] = 0;
    *v135 = 1;
    goto LABEL_96;
  }
  if (v139 < 15566) {
    LODWORD(v197) = (v89 * v139) >> 14;
    HIDWORD(v197) = ((__int16)v90 * v139) >> 14;
    result = (__int64)silk_stereo_quant_pred(&v197, v187_.v190);
    v137 = (__int16)a1[14];
    v138 = v187_.v195;
    if (*v135 != 1) {
      goto LABEL_92;
    }
  }
  else {
    result = (__int64)silk_stereo_quant_pred(&v197, v187_.v190);
    v137 = 0x4000;
    v138 = v187_.v195;
    if (*v135 != 1) {
      goto LABEL_92;
    }
  }
LABEL_96:
  v141 = 5 * a10 <= (__int16)(a1[16] + a11 - 8 * a10);
  a1[16] += a11 - 8 * a10;
  if (!v141) {
    *v135 = 0;
    if ((int)v138[1] > 0) {
      goto LABEL_102;
    }
    goto LABEL_98;
  }
  a1[16] = 10000;
  if (*v135 == 0) {
  LABEL_93:
    if ((int)v138[1] > 0) {
      goto LABEL_102;
    }
  LABEL_98:
    v142 = v94 - 1;
    if (v94 - 1 <= 1) {
      v142 = 1;
    }
    *v138 = v142;
    v138[1] = 1;
  }
LABEL_102:
  v143 = v197;
  v144 = WORD2(v197);
  v145 = 8 * a10;
  if (a10 >= 1) {
    v146 = *a1;
    v147 = a1[1];
    v148 = v132;
    v149 = (_WORD*)(v134 - 2);
    v150 = v197 - v146;
    v151 = WORD2(v197) - v147;
    v152 = -v146;
    v153 = -v147;
    v154 = (__int16)(0x10000 / v145);
    v155 = v154 * v150;
    v156 = v154 * v151;
    v157 = (__int16)a1[15];
    v158 = v137 - v157;
    v159 = v157 << 10;
    v160 = ((v155 >> 15) + 1) >> 1;
    v161 = ((v156 >> 15) + 1) >> 1;
    if (v145 <= 1) {
      v162 = 1;
    }
    else {
      v162 = (unsigned int)v145;
    }
    v163 = (__int16)(0x10000 / v145) * (__int64)v158;
    v164 = v152 - v160;
    v165 = v153 - v161;
    result = (__int64)v133 + 2;
    v166 = (v163 >> 6) & 0xFFFFFFFFFFFFFC00LL;
    v167 = v166 + v159;
    do {
      v168 = *(__int16*)result;
      result += 2;
      v169 = *v148 + *(v148 - 2);
      v170 = *(v148++ - 1);
      v171 = v167 * v168;
      v172 = (__int16)v164;
      v164 -= v160;
      v167 += v166;
      v173 = v172 * (__int64)((v170 << 10) + (v169 << 9));
      v174 = (__int16)v165;
      v165 -= v161;
      v175 = (((int)(((unsigned __int64)(v170 * (__int64)v174) >> 5) +
                     (v171 >> 16) + (v173 >> 16)) >>
               7) +
              1) >>
             1;
      if (v175 <= -32768) {
        v175 = -32768;
      }
      if (v175 >= 0x7FFF) {
        LOWORD(v175) = 0x7FFF;
      }
      --v162;
      *v149++ = v175;
    } while (v162 != 0);
  }
  if (v145 < (int)a11) {
    v176 = v145;
    v177 = v137 << 10;
    if ((a11 & 1) != 0) {
      v176 = v145 | 1LL;
      LODWORD(result) =
          (((int)(((unsigned __int64)(v187_.v187[v176] *
                                      (__int64)(__int16)-v144) >>
                   5) +
                  ((unsigned __int64)(*((__int16*)v133 + v176) *
                                      (__int64)v177) >>
                   16) +
                  ((unsigned __int64)((__int16)-v143 *
                                      (__int64)((v187_.v187[v176] << 10) +
                                                ((v187_.v187[v145 + 2] +
                                                  v187_.v187[v145])
                                                 << 9))) >>
                   16)) >>
            7) +
           1) >>
          1;
      if ((int)result <= -32768) {
        LODWORD(result) = -32768;
      }
      if ((int)result >= 0x7FFF) {
        result = 0x7FFF;
      }
      else {
        result = (unsigned int)result;
      }
      *(_WORD*)(v134 - 2 + 2LL * v145) = result;
    }
    if ((int)a11 - 1LL != v145) {
      v178 = (_WORD*)(v134 + 2 * v176);
      v179 = &v132[v176];
      v180 = (int)a11 - v176;
      result = 0x7FFF;
      v181 = (__int16*)v133 + v176 + 2;
      do {
        v182 = (((int)(((unsigned __int64)(*(v179 - 1) *
                                           (__int64)(__int16)-v144) >>
                        5) +
                       ((unsigned __int64)(*(v181 - 1) * (__int64)v177) >> 16) +
                       ((unsigned __int64)((__int16)-v143 *
                                           (__int64)((*(v179 - 1) << 10) +
                                                     ((*v179 + *(v179 - 2))
                                                      << 9))) >>
                        16)) >>
                 7) +
                1) >>
               1;
        if (v182 <= -32768) {
          v182 = -32768;
        }
        if (v182 >= 0x7FFF) {
          LOWORD(v182) = 0x7FFF;
        }
        *(v178 - 1) = v182;
        v183 = v179[1] + *(v179 - 1);
        v184 = *v179;
        v179 += 2;
        v185 = *v181;
        v181 += 2;
        v186 =
            (((int)(((unsigned __int64)(v184 * (__int64)(__int16)-v144) >> 5) +
                    ((unsigned __int64)(v185 * (__int64)v177) >> 16) +
                    ((unsigned __int64)((__int16)-v143 *
                                        (__int64)((v184 << 10) +
                                                  (v183 << 9))) >>
                     16)) >>
              7) +
             1) >>
            1;
        if (v186 <= -32768) {
          v186 = -32768;
        }
        if (v186 >= 0x7FFF) {
          LOWORD(v186) = 0x7FFF;
        }
        v180 -= 2;
        *v178 = v186;
        v178 += 2;
      } while (v180 != 0);
    }
  }
  *a1 = v143;
  a1[1] = v144;
  a1[15] = v137;
  return result;
}

#pragma GCC visibility pop
