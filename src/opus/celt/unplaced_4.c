#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_sqrt(__int64 result);
__int64 memset_plt(__int64, int, unsigned __int64);
extern unsigned __int8 MovieData_a2529[131];
bool opus_celt_2ffe0(__int64 a1, unsigned int a2, int a3, _WORD* a4, _DWORD* a5,
                     int a6, _DWORD* a7);

bool opus_celt_2ffe0(__int64 a1, unsigned int a2, int a3, _WORD* a4, _DWORD* a5,
                     int a6, _DWORD* a7)
{
  __int64 v8;
  unsigned __int64 v9;
  _WORD* v10;
  _QWORD* v11;
  char v12;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  int* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  _WORD* v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  _WORD* v55;
  int* v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  __int16* v64;
  __int64 v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  __int16* v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  __int64 v79;
  int v80;
  int v81;
  unsigned int v82;
  __int16* v83;
  __int64 v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  __int16* v93;
  __int64 i;
  int v95;
  int v96;
  unsigned int v97;
  char v98;
  __int64 v99;
  __int16* v100;
  __int64 v101;
  _WORD* v102;
  __int64 j;
  __int64 v104;
  int v105;
  __int16* v106;
  _WORD* v107;
  __int64 v108;
  __int64 v109;
  unsigned int v110;
  int v111;
  __int16 v112;
  unsigned int v113;
  __int16 v114;
  unsigned int v115;
  int v116;
  __int16 v117;
  int v118;
  int v119;
  unsigned int v120;
  _WORD* v121;
  char* v122;
  __int64 v123;
  int v124;
  int v125;
  unsigned int v126;
  __int16* v127;
  __int64 v128;
  int v129;
  int v130;
  __int16 v131;
  __int16 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  __int16 v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  int* v142;
  int v143;
  _BOOL4 v144;
  int v145;
  int v146;
  int v147;
  struct {
    _DWORD* v149;
    char gap8_[4];
    int v150;
    _WORD* v151;
    __int64 v152;
    char* v153;
    __int64 v154;
    __int64 v155;
    char gap56_[4];
    unsigned int v156;
    _WORD* v157;
    char gap72_[4];
    int v158;
    __int64 v159;
    _DWORD* v160;
    __int64 v161;
    __int16* v162;
    __int64 v163;
    int v164;
    int v165;
    __int64 v166;
    __int64 v167;
    __int64 v168;
    int* v169;
    __int64 v170;
    char gap168_[4];
    int v171;
    __int64 v172;
  } v149_;

  v8 = a2;
  v9 = 2LL * (int)a2;
  v149_.v160 = a5;
  v10 = a4;
  v11 = (_DWORD**)((char*)&v149_.v149 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  *(_DWORD*)a7 = 0;
  if (a6 != 0) {
    v12 = 5;
  }
  else {
    v12 = 4;
  }
  if (a3 < 1) {
    v16 = 0;
    v144 = false;
  LABEL_175:
    v145 = 3 * v16;
    if ((int)celt_sqrt((unsigned int)(27 * v16)) >= 42) {
      goto LABEL_178;
    }
    goto LABEL_176;
  }
  v149_.v150 = a6;
  v149_.v149 = a7;
  v149_.v151 = a4;
  memset_plt((__int64)&v149_.v149 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0, v9);
  v14 = a1;
  v149_.v166 = (unsigned int)a3;
  v149_.v167 = v8;
  v15 = 0;
  v16 = 0;
  v149_.v168 = v8 & 3;
  v17 = (unsigned int)((int)v8 / 2);
  v18 = (unsigned int)(1 << v12) >> 1;
  v19 = (int*)(a1 + 8);
  v149_.v164 = 6 * v17 - 102;
  v149_.v165 = (__int16)((int)v17 >> 1);
  v149_.v158 = (_DWORD)v17 << 20;
  v20 = (int)v17 - 5;
  v149_.v161 = v8 & 7;
  v149_.v162 = (__int16*)(v11 + 1);
  v149_.v159 = v17 & 3;
  v149_.v156 = v17 - 1;
  v21 = -(v8 & 0x7FFFFFF8);
  v22 = -(v8 & 0x7FFFFFFC);
  v149_.v163 = 4LL * (unsigned int)v8;
  v149_.v152 = -(v17 & 0x3FFFFFFC);
  v149_.v157 = (_WORD*)v11 + 2;
  v149_.v155 = v17 + 1;
  v149_.v153 = (char*)v11 + 2;
  v149_.v154 = (__int64)v11 + 2 * (unsigned int)v17 - 2;
  do {
    v149_.v172 = v14;
    v149_.v171 = v16;
    v149_.v169 = v19;
    v149_.v170 = v15;
    if ((int)v8 < 1) {
      v26 = 0;
      v27 = 0;
      v11[1] = 0;
      v11[2] = 0;
      *v11 = 0;
      goto LABEL_158;
    }
    if ((unsigned int)v8 < 4) {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if (v149_.v168 == 0) {
        goto LABEL_37;
      }
    LABEL_31:
      v54 = v149_.v168;
      v55 = (_WORD*)v11 + v23;
      v56 = (int*)(v14 + 4 * v23);
      do {
        {
          v57 = *v56++;
          __asm__ volatile("" ::"r"(v57));
        }
        v58 = (v57 >> 12) + v25;
        v25 = v58 + v24 - 2 * (v57 >> 12);
        v24 = (v57 >> 12) - (v58 >> 1);
        v59 = (v58 + 2) >> 2;
        if (v59 <= -32767) {
          v59 = -32767;
        }
        if (v59 >= 0x7FFF) {
          LOWORD(v59) = 0x7FFF;
        }
        --v54;
        *v55++ = v59;
      } while (v54 != 0);
      goto LABEL_37;
    }
    v28 = v149_.v157;
    v29 = 0;
    v24 = 0;
    v25 = 0;
    do {
      {
        v30 = *(v19 - 1);
        __asm__ volatile("" ::"r"(v30));
      }
      v29 -= 4;
      {
        v31 = *(v19 - 2) >> 12;
        __asm__ volatile("" ::"r"(v31));
      }
      v32 = v31 + v25;
      v33 = v32 + v24;
      v34 = v32 >> 1;
      v35 = (v32 + 2) >> 2;
      v36 = v33 - 2 * v31;
      if (v35 <= -32767) {
        v35 = -32767;
      }
      if (v35 >= 0x7FFF) {
        LOWORD(v35) = 0x7FFF;
      }
      *(v28 - 2) = v35;
      v37 = v30 >> 12;
      v38 = (v30 >> 12) + v36;
      v39 = v31 + v38 - (v34 + 2 * (v30 >> 12));
      v40 = v38 >> 1;
      v41 = (v38 + 2) >> 2;
      if (v41 <= -32767) {
        v41 = -32767;
      }
      if (v41 >= 0x7FFF) {
        LOWORD(v41) = 0x7FFF;
      }
      *(v28 - 1) = v41;
      {
        v42 = *v19;
        __asm__ volatile("" ::"r"(v42));
      }
      {
        v43 = v19[1];
        __asm__ volatile("" ::"r"(v43));
      }
      v19 += 4;
      v44 = v42 >> 12;
      v45 = v44 + v39;
      v46 = v37 + v45 - (v40 + 2 * v44);
      v47 = v45 + 2;
      v48 = v45 >> 1;
      v49 = v47 >> 2;
      if (v49 <= -32767) {
        v49 = -32767;
      }
      if (v49 >= 0x7FFF) {
        LOWORD(v49) = 0x7FFF;
      }
      *v28 = v49;
      v50 = v43 >> 12;
      v51 = (v43 >> 12) + v46;
      v52 = v48 + 2 * v50;
      v53 = (v51 + 2) >> 2;
      v25 = v44 + v51 - v52;
      v24 = v50 - (v51 >> 1);
      if (v53 <= -32767) {
        v53 = -32767;
      }
      if (v53 >= 0x7FFF) {
        LOWORD(v53) = 0x7FFF;
      }
      v28[1] = v53;
      v28 += 4;
    } while (v22 != v29);
    v23 = -v29;
    if (v149_.v168 != 0) {
      goto LABEL_31;
    }
  LABEL_37:
    v11[1] = 0;
    v11[2] = 0;
    *v11 = 0;
    if ((unsigned int)v8 < 8) {
      v60 = v149_.v161;
      v61 = 0;
      LOWORD(v62) = 0;
      LOWORD(v63) = 0;
      if (v149_.v161 == 0) {
        goto LABEL_81;
      }
    LABEL_75:
      v74 = (__int16*)v11 + v61;
      v75 = v60;
      do {
        {
          v77 = *v74++;
          __asm__ volatile("" ::"r"(v77));
        }
        v76 = v77;
        if ((__int16)v63 <= v77) {
          LOWORD(v63) = v76;
        }
        if ((__int16)v62 >= v76) {
          LOWORD(v62) = v76;
        }
        --v75;
      } while (v75 != 0);
      goto LABEL_81;
    }
    v60 = v149_.v161;
    v64 = v149_.v162;
    v65 = 0;
    LOWORD(v62) = 0;
    LOWORD(v63) = 0;
    do {
      {
        v66 = *(v64 - 4);
        __asm__ volatile("" ::"r"(v66));
      }
      v63 = (__int16)v63;
      v62 = (__int16)v62;
      v65 -= 8;
      if ((__int16)v63 <= v66) {
        v63 = *(v64 - 4);
        __asm__ volatile("" ::"r"(v63));
      }
      if ((__int16)v62 >= v66) {
        v62 = *(v64 - 4);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v67 = *(v64 - 3);
        __asm__ volatile("" ::"r"(v67));
      }
      if (v63 <= v67) {
        v63 = *(v64 - 3);
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v67) {
        v62 = *(v64 - 3);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v68 = *(v64 - 2);
        __asm__ volatile("" ::"r"(v68));
      }
      if (v63 <= v68) {
        v63 = *(v64 - 2);
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v68) {
        v62 = *(v64 - 2);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v69 = *(v64 - 1);
        __asm__ volatile("" ::"r"(v69));
      }
      if (v63 <= v69) {
        v63 = *(v64 - 1);
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v69) {
        v62 = *(v64 - 1);
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v70 = *v64;
        __asm__ volatile("" ::"r"(v70));
      }
      if (v63 <= v70) {
        v63 = *v64;
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v70) {
        v62 = *v64;
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v71 = v64[1];
        __asm__ volatile("" ::"r"(v71));
      }
      if (v63 <= v71) {
        v63 = v64[1];
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v71) {
        v62 = v64[1];
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v72 = v64[2];
        __asm__ volatile("" ::"r"(v72));
      }
      if (v63 <= v72) {
        v63 = v64[2];
        __asm__ volatile("" ::"r"(v63));
      }
      if (v62 >= v72) {
        v62 = v64[2];
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v73 = v64[3];
        __asm__ volatile("" ::"r"(v73));
      }
      v64 += 8;
      if (v63 <= v73) {
        LOWORD(v63) = v73;
      }
      if (v62 >= v73) {
        LOWORD(v62) = v73;
      }
    } while (v21 != v65);
    v61 = -v65;
    if (v149_.v161 != 0) {
      goto LABEL_75;
    }
  LABEL_81:
    v63 = (unsigned __int16)v63;
    v62 = (__int16)v62;
    if ((v63 + v62 < 0) ^ __OFADD__(v63, v62) | (v63 + v62 == 0)) {
      v78 = -(__int16)v62;
    }
    else {
      v78 = (unsigned __int16)v63;
    }
    if (v78 != 0) {
      if ((unsigned int)v8 >= 8) {
        v83 = v149_.v162;
        v84 = 0;
        LOWORD(v80) = 0;
        LOWORD(v81) = 0;
        do {
          {
            v85 = *(v83 - 4);
            __asm__ volatile("" ::"r"(v85));
          }
          v81 = (__int16)v81;
          v80 = (__int16)v80;
          v84 -= 8;
          if ((__int16)v81 <= v85) {
            v81 = *(v83 - 4);
            __asm__ volatile("" ::"r"(v81));
          }
          if ((__int16)v80 >= v85) {
            v80 = *(v83 - 4);
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v86 = *(v83 - 3);
            __asm__ volatile("" ::"r"(v86));
          }
          if (v81 <= v86) {
            v81 = *(v83 - 3);
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v86) {
            v80 = *(v83 - 3);
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v87 = *(v83 - 2);
            __asm__ volatile("" ::"r"(v87));
          }
          if (v81 <= v87) {
            v81 = *(v83 - 2);
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v87) {
            v80 = *(v83 - 2);
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v88 = *(v83 - 1);
            __asm__ volatile("" ::"r"(v88));
          }
          if (v81 <= v88) {
            v81 = *(v83 - 1);
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v88) {
            v80 = *(v83 - 1);
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v89 = *v83;
            __asm__ volatile("" ::"r"(v89));
          }
          if (v81 <= v89) {
            v81 = *v83;
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v89) {
            v80 = *v83;
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v90 = v83[1];
            __asm__ volatile("" ::"r"(v90));
          }
          if (v81 <= v90) {
            v81 = v83[1];
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v90) {
            v80 = v83[1];
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v91 = v83[2];
            __asm__ volatile("" ::"r"(v91));
          }
          if (v81 <= v91) {
            v81 = v83[2];
            __asm__ volatile("" ::"r"(v81));
          }
          if (v80 >= v91) {
            v80 = v83[2];
            __asm__ volatile("" ::"r"(v80));
          }
          {
            v92 = v83[3];
            __asm__ volatile("" ::"r"(v92));
          }
          v83 += 8;
          if (v81 <= v92) {
            LOWORD(v81) = v92;
          }
          if (v80 >= v92) {
            LOWORD(v80) = v92;
          }
        } while (v21 != v84);
        v79 = -v84;
        if (v60 == 0) {
        LABEL_131:
          v81 = (unsigned __int16)v81;
          v80 = (__int16)v80;
          if ((v81 + v80 < 0) ^ __OFADD__(v81, v80) | (v81 + v80 == 0)) {
            v97 = -(__int16)v80;
          }
          else {
            v97 = (unsigned __int16)v81;
          }
          v82 = __clz((unsigned int)(v97));
          if (v82 == 17) {
            goto LABEL_143;
          }
          goto LABEL_135;
        }
      }
      else {
        v79 = 0;
        LOWORD(v80) = 0;
        LOWORD(v81) = 0;
        if (v60 == 0) {
          goto LABEL_131;
        }
      }
      v93 = (__int16*)v11 + v79;
      for (i = v60; i != 0; --i) {
        {
          v96 = *v93++;
          __asm__ volatile("" ::"r"(v96));
        }
        v95 = v96;
        if ((__int16)v81 <= v96) {
          LOWORD(v81) = v95;
        }
        if ((__int16)v80 >= v95) {
          LOWORD(v80) = v95;
        }
      }
      goto LABEL_131;
    }
    v82 = __clz((unsigned int)(1u));
    if (v82 == 17) {
      goto LABEL_143;
    }
  LABEL_135:
    v98 = v82 - 17;
    if ((unsigned int)v8 < 8) {
      v99 = 0;
      if (v60 == 0) {
        goto LABEL_143;
      }
    LABEL_141:
      v102 = (_WORD*)v11 + v99;
      for (j = v60; j != 0; --j) {
        *v102 = (unsigned __int16)*v102 << v98;
        ++v102;
      }
      goto LABEL_143;
    }
    v100 = v149_.v162;
    v101 = 0;
    do {
      v101 -= 8;
      *(v100 - 4) = (unsigned __int16)*(v100 - 4) << v98;
      *(v100 - 3) = (unsigned __int16)*(v100 - 3) << v98;
      *(v100 - 2) = (unsigned __int16)*(v100 - 2) << v98;
      *(v100 - 1) = (unsigned __int16)*(v100 - 1) << v98;
      *v100 = (unsigned __int16)*v100 << v98;
      v100[1] = (unsigned __int16)v100[1] << v98;
      v100[2] = (unsigned __int16)v100[2] << v98;
      v100[3] = (unsigned __int16)v100[3] << v98;
      v100 += 8;
    } while (v21 != v101);
    v99 = -v101;
    if (v60 != 0) {
      goto LABEL_141;
    }
  LABEL_143:
    if ((int)v8 <= 1) {
      v26 = 0;
      v27 = 0;
      goto LABEL_158;
    }
    if (v149_.v156 < 3) {
      v104 = 0;
      v26 = 0;
      v105 = 0;
      if (v149_.v159 == 0) {
        goto LABEL_153;
      }
    LABEL_151:
      v121 = (_WORD*)v11 + v104;
      {
        v122 = &v149_.v153[4 * v104];
        __asm__ volatile("" ::"r"(v122));
      }
      v123 = v149_.v159;
      do {
        {
          v124 = *(__int16*)v122;
          __asm__ volatile("" ::"r"(v124));
        }
        {
          v125 = *((__int16*)v122 - 1);
          __asm__ volatile("" ::"r"(v125));
        }
        v122 += 4;
        --v123;
        v126 = (unsigned int)(v124 * v124 + v125 * v125 + 0x8000) >> 16;
        v26 = v126 + (unsigned int)v26;
        LOWORD(v105) = ((int)(v18 - v105 + v126) >> v12) + v105;
        *v121++ = v105;
        v105 = (__int16)v105;
      } while (v123 != 0);
      goto LABEL_153;
    }
    v106 = v149_.v162;
    v107 = v149_.v157;
    v108 = v149_.v152;
    v109 = 0;
    LODWORD(v26) = 0;
    v105 = 0;
    do {
      v109 -= 4;
      {
        v110 = (unsigned int)(*(v106 - 3) * *(v106 - 3) +
                              *(v106 - 4) * *(v106 - 4) + 0x8000) >>
               16;
        __asm__ volatile("" ::"r"(v110));
      }
      v111 = v110 + v26;
      v112 = ((int)(v18 - v105 + v110) >> v12) + v105;
      *(v107 - 2) = v112;
      {
        v113 = (unsigned int)(*(v106 - 1) * *(v106 - 1) +
                              *(v106 - 2) * *(v106 - 2) + 0x8000) >>
               16;
        __asm__ volatile("" ::"r"(v113));
      }
      v114 = ((int)(v18 - v112 + v113) >> v12) + v112;
      *(v107 - 1) = v114;
      {
        v115 = (unsigned int)(v106[1] * v106[1] + *v106 * *v106 + 0x8000) >> 16;
        __asm__ volatile("" ::"r"(v115));
      }
      v116 = v115 + v113 + v111;
      v117 = ((int)(v18 - v114 + v115) >> v12) + v114;
      *v107 = v117;
      {
        v118 = v106[3];
        __asm__ volatile("" ::"r"(v118));
      }
      {
        v119 = v106[2];
        __asm__ volatile("" ::"r"(v119));
      }
      v106 += 8;
      v120 = (unsigned int)(v118 * v118 + v119 * v119 + 0x8000) >> 16;
      v26 = v120 + v116;
      LOWORD(v105) = ((int)(v18 - v117 + v120) >> v12) + v117;
      v107[1] = v105;
      v105 = (__int16)v105;
      v107 += 4;
    } while (v108 != v109);
    v104 = -v109;
    if (v149_.v159 != 0) {
      goto LABEL_151;
    }
  LABEL_153:
    v127 = (__int16*)v149_.v154;
    v128 = v149_.v155;
    v129 = 0;
    v130 = 0;
    do {
      --v128;
      LOWORD(v130) = v130 + ((unsigned int)(*v127 - v130 + 4) >> 3);
      *v127-- = v130;
      v130 = (__int16)v130;
      if ((__int16)v130 > v129) {
        v129 = (__int16)v130;
      }
    } while (v128 > 1);
    v27 = (unsigned __int16)v129;
  LABEL_158:
    v131 = celt_sqrt(v26);
    v132 = celt_sqrt((unsigned int)(v27 * v149_.v165));
    LODWORD(v8) = v149_.v167;
    if ((int)v149_.v167 < 36) {
      v141 = v149_.v172;
      v142 = v149_.v169;
      v133 = v149_.v170;
      v16 = v149_.v171;
      v143 = 0 / v149_.v164;
      if (0 / v149_.v164 <= v149_.v171) {
        goto LABEL_6;
      }
    LABEL_169:
      v16 = v143;
      *v149_.v160 = v133;
      goto LABEL_6;
    }
    v133 = v149_.v170;
    v134 = 0;
    v135 = 12;
    do {
      {
        v136 = v11[(unsigned __int64)v135 / 4];
        __asm__ volatile("" ::"r"(v136));
      }
      v135 += 4;
      v137 = (__int16)(v136 + 1) *
             (__int64)(v149_.v158 / (((v132 * v131) >> 1) + 1));
      v138 = (unsigned __int64)v137 >> 15;
      v139 = (int)(v137 >> 15);
      if ((v138 & 0x80000000) == 0LL) {
        v140 = 127;
      }
      else {
        v140 = 0;
      }
      if ((unsigned int)v138 > 0x7F) {
        v139 = v140;
      }
      v134 += MovieData_a2529[v139];
    } while (v135 < v20);
    v141 = v149_.v172;
    v16 = v149_.v171;
    v142 = v149_.v169;
    v143 = (v134 << 8) / v149_.v164;
    if (v143 > v149_.v171) {
      goto LABEL_169;
    }
  LABEL_6:
    v15 = v133 + 1;
    {
      v19 = &v142[(unsigned __int64)v149_.v163 / 4];
      __asm__ volatile("" ::"r"(v19));
    }
    v14 = v141 + v149_.v163;
  } while (v15 != v149_.v166);
  v144 = v16 > 200;
  if (v149_.v150 == 0) {
    v10 = v149_.v151;
    v145 = 3 * v16;
    if ((int)celt_sqrt((unsigned int)(27 * v16)) >= 42) {
      goto LABEL_178;
    }
    goto LABEL_176;
  }
  v10 = v149_.v151;
  if ((unsigned int)(v16 - 201) > 0x18E) {
    goto LABEL_175;
  }
  v144 = false;
  *v149_.v149 = 1;
  v145 = 3 * v16;
  if ((int)celt_sqrt((unsigned int)(27 * v16)) < 42) {
  LABEL_176:
    v146 = 0;
    goto LABEL_179;
  }
LABEL_178:
  v146 = (__int16)(celt_sqrt((unsigned int)(9 * v145)) - 42);
LABEL_179:
  if (v146 >= 163) {
    v146 = 163;
  }
  v147 = 1851392 * v146;
  if (v147 <= 37312528) {
    v147 = 37312528;
  }
  *v10 = celt_sqrt((unsigned int)(v147 - 37312528));
  return v144;
}

#pragma GCC visibility pop
