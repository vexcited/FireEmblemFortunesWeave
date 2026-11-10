#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CalcLdData_plt(_QWORD);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
__int64 nn_codec_f2Pow_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_fDivNorm_plt_866980(_QWORD);
__int64 nn_codec_fPow_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_fixp_atan_plt(_QWORD);
extern _UNKNOWN SdkData_e62c38;
extern _UNKNOWN SdkData_e62d58;
extern _UNKNOWN SdkData_e62e78;
__int64 nn_codec_FDKaacEnc_InitPsyConfiguration(int a1, int a2, int a3,
                                                unsigned int a4, int a5, int a6,
                                                unsigned int* a7,
                                                unsigned int a8);

__int64 nn_codec_FDKaacEnc_InitPsyConfiguration(int a1, int a2, int a3,
                                                unsigned int a4, int a5, int a6,
                                                unsigned int* a7,
                                                unsigned int a8)
{
  unsigned int* v10;
  int v16;
  __int64 result;
  unsigned int v18;
  _DWORD* v19;
  int v20;
  unsigned int* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _DWORD* v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  unsigned int* v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  int v71;
  unsigned int* v72;
  int v73;
  __int64 v74;
  int* v75;
  int* v76;
  int v77;
  __int64 v78;
  int v79;
  unsigned __int64 v80;
  int v81;
  int v82;
  int v83;
  int v84;
  bool v85;
  int v86;
  int v87;
  int v88;
  unsigned __int64 v89;
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
  signed int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  unsigned __int64 v111;
  __int64 v112;
  int v113;
  __int64 v114;
  unsigned __int64 v115;
  int v116;
  int v117;
  __int64 v118;
  int v119;
  int v120;
  unsigned __int64 v121;
  int v122;
  int v123;
  int v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  int v129;
  int v130;
  __int64 v131;
  int v132;
  int v133;
  unsigned int v134;
  __int64 v135;
  int v136;
  int v137;
  char v138;
  int v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  int v143;
  int v144;
  __int64 v145;
  int v146;
  int v147;
  unsigned int v148;
  int v149;
  unsigned int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  _QWORD v155[25];
  int v156;
  int v157;
  __int64 v158;
  _QWORD v159[2];

  v10 = a7;
  v156 = 0;
  memset(&v155[19], 0, 48);
  if (a5 >= 0) {
    v16 = a5;
  }
  else {
    v16 = a5 + 7;
  }
  memset(v155, 0, 152);
  nn_codec_FDKmemclear_plt(a7, 1864);
  v10[464] = a5;
  v10[55] = a8;
  if (a6 != 0) {
    result = 8320;
    v10[465] = a1 / a3 < 5;
    if (a5 <= 959) {
      goto LABEL_6;
    }
  }
  else {
    result = 8320;
    v10[465] = 0;
    if (a5 <= 959) {
    LABEL_6:
      if (a5 == 480) {
        v18 = 288;
        v19 = &SdkData_e62e78;
      }
      else {
        if (a5 != 512) {
          return result;
        }
        v18 = 288;
        v19 = &SdkData_e62d58;
      }
      goto LABEL_14;
    }
  }
  v18 = 12;
  v19 = &SdkData_e62c38;
  if (a5 != 960 && a5 != 1024) {
    return result;
  }
LABEL_14:
  v20 = v16 >> 3;
  v21 = v10 + 3;
  v22 = v18;
  while (*v19 != a2) {
    --v22;
    v19 += 6;
    if (v22 == 0) {
      return 12544;
    }
  }
  v23 = 2;
  v24 = a5;
  if (a4 < 2 || a4 == 3) {
  LABEL_22:
    v25 = *(unsigned __int8**)&v19[v23];
    v27 = *v25;
    v26 = v25 + 1;
    *v10 = v27;
    if ((_DWORD)v22 != 0) {
      goto LABEL_23;
    }
    return 12544;
  }
  if (a4 == 2) {
    v23 = 4;
    v24 = v16 >> 3;
    goto LABEL_22;
  }
  v26 = nullptr;
  v24 = a5;
  if ((_DWORD)v22 == 0) {
    return 12544;
  }
LABEL_23:
  v28 = *v10;
  v150 = a1;
  v146 = a5;
  if ((int)v28 < 1) {
    v31 = 0;
    v30 = 0;
  }
  else {
    v29 = 0;
    v30 = 0;
    while (1) {
      v21[v29] = v30;
      v30 += v26[v29];
      if (v30 >= v24) {
        break;
      }
      if (v28 == ++v29) {
        v31 = v28;
        goto LABEL_32;
      }
    }
    v31 = v29 + 1;
  }
LABEL_32:
  if (v31 < (int)v28) {
    LODWORD(v28) = v31;
  }
  if (v30 < v24) {
    v24 = v30;
  }
  *v10 = v28;
  v21[(int)v28] = v24;
  v32 = (int)*v10;
  if ((int)v32 >= 1) {
    v147 = v16 >> 3;
    v148 = a4;
    v33 = v21[v32];
    v34 = 4 * v32;
    v149 = a3;
    v35 = 0;
    do {
      LODWORD(v41) = 0;
      v42 = (int)v10[v35 / 4 + 3] * (__int64)a2;
      if (v33 > 511) {
        if (v33 == 512) {
          LODWORD(v41) = 8 * v42;
        }
        else if (v33 == 1024) {
          LODWORD(v41) = 4 * v42;
        }
      }
      else if (v33 == 128) {
        LODWORD(v41) = 32 * v42;
      }
      else if (v33 == 480) {
        v41 = ((unsigned __int64)(1145324612 * v42) >> 27) & 0xFFFFFFE0;
      }
      v43 = (unsigned __int64)(1671257674LL * (int)v41) >> 29;
      v44 = nn_codec_fixp_atan_plt(
          ((unsigned __int64)(1172812403LL * (int)v41) >> 31) & 0xFFFFFFFE);
      v45 = nn_codec_fixp_atan_plt((unsigned int)v43 & 0xFFFFFFF8);
      LODWORD(v36) = 0;
      v46 = (int)v10[v35 / 4 + 4] * (__int64)a2;
      if (v33 > 511) {
        if (v33 == 512) {
          LODWORD(v36) = 8 * v46;
        }
        else if (v33 == 1024) {
          LODWORD(v36) = 4 * v46;
        }
      }
      else if (v33 == 128) {
        LODWORD(v36) = 32 * v46;
      }
      else if (v33 == 480) {
        v36 = ((unsigned __int64)(1145324612 * v46) >> 27) & 0xFFFFFFE0;
      }
      v37 = (((unsigned __int64)(892547891LL * v45) >> 31) & 0xFFFFFFFE) +
            ((469762048 *
              ((int)((v44 * (__int64)v44) >> 31) & 0x3FFFFFFFFEuLL)) >>
             31);
      v38 = (unsigned __int64)(1671257674LL * (int)v36) >> 29;
      v39 = nn_codec_fixp_atan_plt(
          ((unsigned __int64)(1172812403LL * (int)v36) >> 31) & 0xFFFFFFFE);
      v40 = ((int)((((unsigned __int64)(892547891LL *
                                        (int)nn_codec_fixp_atan_plt(
                                            (unsigned int)v38 & 0xFFFFFFF8)) >>
                     31) &
                    0xFFFFFFFE) +
                   ((469762048 *
                     ((int)((v39 * (__int64)v39) >> 31) & 0x3FFFFFFFFEuLL)) >>
                    31)) >>
             1) +
            (v37 >> 1);
      if (v40 >= 805306368) {
        v40 = 805306368;
      }
      *(_DWORD*)((char*)v155 + v35) = v40;
      v35 += 4LL;
    } while (v34 != v35);
    v47 = *v10;
    v21 = v10 + 3;
    a4 = v148;
    a3 = v149;
    v20 = v147;
    if ((int)v47 >= 1) {
      v48 = v10[3];
      v49 = v47 & 7;
      if ((unsigned int)v47 >= 8) {
        v50 = a1;
        v58 = v10 + 63;
        v59 = 0;
        do {
          v60 = *(v58 - 59);
          v61 = *(v58 - 58);
          v59 -= 8;
          *(v58 - 7) = 5533794 * (v60 - v48);
          *(v58 - 6) = 5533794 * (v61 - v60);
          v62 = *(v58 - 57);
          v63 = *(v58 - 56);
          *(v58 - 5) = 5533794 * (v62 - v61);
          *(v58 - 4) = 5533794 * (v63 - v62);
          v64 = *(v58 - 55);
          v65 = *(v58 - 54);
          *(v58 - 3) = 5533794 * (v64 - v63);
          *(v58 - 2) = 5533794 * (v65 - v64);
          v66 = *(v58 - 53);
          v48 = *(v58 - 52);
          *(v58 - 1) = 5533794 * (v66 - v65);
          *v58 = 5533794 * (v48 - v66);
          v58 += 8;
        } while (-(v47 & 0x7FFFFFF8) != v59);
        v51 = -v59;
      }
      else {
        v50 = a1;
        v51 = 0;
      }
      if ((v47 & 7) != 0) {
        v67 = &v10[v51 + 56];
        do {
          v68 = *(v67 - 52);
          --v49;
          *v67++ = 5533794 * (v68 - v48);
          v48 = v68;
        } while (v49 != 0);
      }
      v10[163] = 0;
      if (v50 <= 20000) {
        v69 = 805306368;
      }
      else {
        v69 = 0x40000000;
      }
      if (v148 == 2) {
        v70 = 805306368;
      }
      else {
        v70 = v69;
      }
      if (v148 == 2) {
        v71 = 0x40000000;
      }
      else {
        v71 = 1610612736;
      }
      v72 = &v10[(unsigned int)(v47 - 1)];
      v72[112] = 0;
      v10[265] = 0;
      v72[214] = 0;
      if ((_DWORD)v47 != 1) {
        v73 = v155[0];
        v74 = v47 - 1;
        v75 = (int*)(v10 + 164);
        v151 = v71;
        v76 = (int*)v155 + 1;
        do {
          v77 = *v76++;
          v78 = v70;
          HIDWORD(v159[0]) = 0;
          v153 = v77;
          v79 = v77 - v73;
          v80 = 3LL * (v77 - v73);
          v81 = nn_codec_fPow_plt(1342177280, 4,
                                  (unsigned int)-((v80 >> 3) & 0xFFFFFFFE), 8,
                                  (char*)v159 + 4);
          v82 = HIDWORD(v159[0]);
          HIDWORD(v159[0]) = 0;
          if (v82 <= -31) {
            v83 = -31;
          }
          else {
            v83 = v82;
          }
          if (v83 >= 31) {
            LOBYTE(v83) = 31;
          }
          v84 = v81 << v83;
          v85 = v81 <= (int)(0x7FFFFFFFu >> v83);
          v86 = v81 >> -(char)v83;
          if (v85) {
            v87 = v84;
          }
          else {
            v87 = 0x7FFFFFFF;
          }
          if (v82 <= 0) {
            v88 = v86;
          }
          else {
            v88 = v87;
          }
          *v75 = v88;
          v89 = v80 >> 2;
          v70 = v78;
          v90 = nn_codec_fPow_plt(1342177280, 4,
                                  (unsigned int)-(v89 & 0xFFFFFFFE), 8,
                                  (char*)v159 + 4);
          v91 = HIDWORD(v159[0]);
          HIDWORD(v159[0]) = 0;
          if (v91 <= -31) {
            v92 = -31;
          }
          else {
            v92 = v91;
          }
          if (v92 >= 31) {
            LOBYTE(v92) = 31;
          }
          v93 = v90 << v92;
          v85 = v90 <= (int)(0x7FFFFFFFu >> v92);
          v94 = v90 >> -(char)v92;
          if (v85) {
            v95 = v93;
          }
          else {
            v95 = 0x7FFFFFFF;
          }
          if (v91 <= 0) {
            v96 = v94;
          }
          else {
            v96 = v95;
          }
          *(v75 - 52) = v96;
          v97 = nn_codec_fPow_plt(
              1342177280, 4,
              (unsigned int)-(
                  ((unsigned __int64)((int)v78 * (__int64)v79) >> 31) &
                  0xFFFFFFFE),
              8, (char*)v159 + 4);
          v98 = HIDWORD(v159[0]);
          HIDWORD(v159[0]) = 0;
          if (v98 <= -31) {
            v99 = -31;
          }
          else {
            v99 = v98;
          }
          if (v99 >= 31) {
            LOBYTE(v99) = 31;
          }
          v100 = v97 << v99;
          v85 = v97 <= (int)(0x7FFFFFFFu >> v99);
          v101 = v97 >> -(char)v99;
          if (v85) {
            v102 = v100;
          }
          else {
            v102 = 0x7FFFFFFF;
          }
          if (v98 <= 0) {
            v103 = v101;
          }
          else {
            v103 = v102;
          }
          v75[102] = v103;
          v104 = nn_codec_fPow_plt(
              1342177280, 4,
              (unsigned int)-(((unsigned __int64)(v151 * (__int64)v79) >> 31) &
                              0xFFFFFFFE),
              8, (char*)v159 + 4);
          if (SHIDWORD(v159[0]) <= -31) {
            v105 = -31;
          }
          else {
            v105 = HIDWORD(v159[0]);
          }
          if (v105 >= 31) {
            LOBYTE(v105) = 31;
          }
          v106 = 0x7FFFFFFFu >> v105;
          v107 = v104 << v105;
          v108 = v104 >> -(char)v105;
          if (v104 <= v106) {
            v109 = v107;
          }
          else {
            v109 = 0x7FFFFFFF;
          }
          if (SHIDWORD(v159[0]) <= 0) {
            v110 = v108;
          }
          else {
            v110 = v109;
          }
          v73 = v153;
          --v74;
          v75[50] = v110;
          ++v75;
        } while (v74 != 0);
      }
      v21 = v10 + 3;
      v20 = v147;
      v10[107] = 2;
      *((_WORD*)v10 + 216) = 328;
      v10[111] = 1999999999;
      a3 = v149;
      if (v148 == 2) {
        goto LABEL_63;
      }
    LABEL_128:
      v53 = 12;
      v52 = 0;
      v10[110] = 12;
      v54 = 2 * a3 * v146 / a2;
      v10[109] = v54;
      v55 = *v10;
      if ((int)v55 < 1) {
        goto LABEL_64;
      }
    LABEL_129:
      v57 = 0;
      while ((int)v21[v57] < v54) {
        if (v55 == ++v57) {
          LODWORD(v57) = v55;
          break;
        }
      }
      v56 = 0;
      if ((unsigned int)v57 <= 1) {
        LODWORD(v57) = 1;
      }
      while ((int)v21[v56] < v53) {
        if (v55 == ++v56) {
          LODWORD(v56) = v55;
          break;
        }
      }
    LABEL_138:
      LODWORD(v111) = 0;
      if ((unsigned int)v57 <= (unsigned int)v56) {
        v112 = (unsigned int)v56;
      }
      else {
        v112 = (unsigned int)v57;
      }
      v10[1] = v112;
      v10[2] = v56;
      v113 = v21[(int)v55];
      v114 = (int)v21[(unsigned int)v112] * (__int64)a2;
      if (v113 > 511) {
        if (v113 == 512) {
          LODWORD(v111) = 8 * v114;
        }
        else if (v113 == 1024) {
          LODWORD(v111) = 4 * v114;
        }
      }
      else if (v113 == 128) {
        LODWORD(v111) = 32 * v114;
      }
      else if (v113 == 480) {
        v111 = ((unsigned __int64)(1145324612 * v114) >> 27) & 0xFFFFFFE0;
      }
      v158 = 0;
      v159[0] = 0;
      v157 = 0;
      v115 = (unsigned __int64)(1671257674LL * (int)v111) >> 29;
      v116 = nn_codec_fixp_atan_plt(
          ((unsigned __int64)(1172812403LL * (int)v111) >> 31) & 0xFFFFFFFE);
      v117 = (((469762048 *
                ((int)((v116 * (__int64)v116) >> 31) & 0x3FFFFFFFFEuLL)) >>
               31) &
              0xFFFFFFFE) +
             (((unsigned __int64)(892547891LL *
                                  (int)nn_codec_fixp_atan_plt(
                                      (unsigned int)v115 & 0xFFFFFFF8)) >>
               31) &
              0xFFFFFFFE);
      if (v117 >= 805306368) {
        v118 = 805306368;
      }
      else {
        v118 = (unsigned int)v117;
      }
      nn_codec_fDivNorm_plt_866980(v118);
      HIDWORD(v159[0]) = 31 - HIDWORD(v159[0]);
      v119 = nn_codec_fDivNorm_plt_866980(v150);
      v120 = v159[0];
      v121 = ((1649267442 *
               (((2534030704LL * v119) >> 32) & 0x7FFFFFFFFFFFFFFEuLL)) >>
              31) &
             0xFFFFFFFE;
      v122 = 35 - LODWORD(v159[0]);
      LODWORD(v159[0]) = 35 - LODWORD(v159[0]);
      if (v113 <= 511) {
        if (v113 != 128) {
          if (v113 == 480) {
            v122 = 26 - v120;
            LODWORD(v159[0]) = 26 - v120;
            v121 = ((unsigned __int64)(2013265920LL * (int)v121) >> 31) &
                   0xFFFFFFFE;
          }
          goto LABEL_163;
        }
        v123 = 28;
        goto LABEL_162;
      }
      if (v113 == 512) {
        v123 = 26;
        goto LABEL_162;
      }
      if (v113 == 1024) {
        v123 = 25;
      LABEL_162:
        v122 = v123 - v120;
        LODWORD(v159[0]) = v122;
      }
    LABEL_163:
      if (v52 != 0) {
        LODWORD(v159[0]) = v122 - 1;
        v121 =
            ((unsigned __int64)(1610612736LL * (int)v121) >> 31) & 0xFFFFFFFE;
      }
      v124 = a2;
      v154 = nn_codec_fDivNorm_plt_866980(v121);
      v152 = HIDWORD(v159[0]) + HIDWORD(v158) - LODWORD(v159[0]) - 25;
      do {
        LODWORD(v140) = 0;
        v141 = (int)v10[4] * (__int64)a2;
        if (v113 > 511) {
          if (v113 == 512) {
            LODWORD(v140) = 8 * v141;
          }
          else if (v113 == 1024) {
            LODWORD(v140) = 4 * v141;
          }
        }
        else if (v113 == 128) {
          LODWORD(v140) = 32 * v141;
        }
        else if (v113 == 480) {
          v140 = ((unsigned __int64)(1145324612 * v141) >> 27) & 0xFFFFFFE0;
        }
        v142 = (unsigned __int64)(1671257674LL * (int)v140) >> 29;
        v143 = nn_codec_fixp_atan_plt(
            ((unsigned __int64)(1172812403LL * (int)v140) >> 31) & 0xFFFFFFFE);
        v144 = nn_codec_fixp_atan_plt((unsigned int)v142 & 0xFFFFFFF8);
        LODWORD(v125) = 0;
        v145 = (int)v10[3] * (__int64)a2;
        if (v113 > 511) {
          if (v113 == 512) {
            LODWORD(v125) = 8 * v145;
          }
          else if (v113 == 1024) {
            LODWORD(v125) = 4 * v145;
          }
        }
        else if (v113 == 128) {
          LODWORD(v125) = 32 * v145;
        }
        else if (v113 == 480) {
          v125 = ((unsigned __int64)(1145324612 * v145) >> 27) & 0xFFFFFFE0;
        }
        v126 = ((unsigned __int64)(892547891LL * v144) >> 31) & 0xFFFFFFFE;
        v127 = ((469762048 *
                 ((int)((v143 * (__int64)v143) >> 31) & 0x3FFFFFFFFEuLL)) >>
                31) &
               0xFFFFFFFE;
        v128 = (unsigned __int64)(1671257674LL * (int)v125) >> 29;
        v129 = nn_codec_fixp_atan_plt(
            ((unsigned __int64)(1172812403LL * (int)v125) >> 31) & 0xFFFFFFFE);
        v130 = nn_codec_fixp_atan_plt((unsigned int)v128 & 0xFFFFFFF8);
        v131 = nn_codec_fDivNorm_plt_866980(
            ((unsigned __int64)(v154 *
                                (__int64)(int)(v127 + v126 -
                                               ((((unsigned __int64)(892547891LL *
                                                                     v130) >>
                                                  31) &
                                                 0xFFFFFFFE) +
                                                (((469762048 *
                                                   ((int)((v129 *
                                                           (__int64)v129) >>
                                                          31) &
                                                    0x3FFFFFFFFEuLL)) >>
                                                  31) &
                                                 0xFFFFFFFE)))) >>
             31) &
            0xFFFFFFFE);
        nn_codec_f2Pow_plt(v131, (unsigned int)(v152 + HIDWORD(v158)), &v158);
        v132 = v158;
        v133 = 31 - v158;
        if (31 - (int)v158 >= 30) {
          v133 = 30;
        }
        LODWORD(v158) = 31 - v158;
        v157 = v133 - 1;
        v134 = 1 << (v133 - 1);
        if (v132 >= 30) {
          v135 = 0;
        }
        else {
          v135 = v134;
        }
        v136 = nn_codec_fDivNorm_plt_866980(v135);
        v137 = v157;
        v157 = 31 - v157;
        if (v137 <= 0) {
          v138 = 1 - v137;
        }
        else {
          v138 = 0;
        }
        v139 = v136 >> v138;
        if (v139 <= 3221225) {
          v139 = 3221225;
        }
        if (v139 >= 858993459) {
          v139 = 858993459;
        }
        v10[316] = nn_codec_CalcLdData_plt((unsigned int)(2 * v139));
        ++v10;
        --v112;
        a2 = v124;
      } while (v112 != 0);
      return 0;
    }
  }
  v10[107] = 2;
  *((_WORD*)v10 + 216) = 328;
  v10[111] = 1999999999;
  if (a4 != 2) {
    goto LABEL_128;
  }
LABEL_63:
  v52 = 1;
  v53 = 0;
  v54 = 2 * a3 * v20 / a2;
  *((_QWORD*)v10 + 55) = 0x1DCD64F00000000LL;
  v10[109] = v54;
  v55 = *v10;
  if ((int)v55 >= 1) {
    goto LABEL_129;
  }
LABEL_64:
  LODWORD(v56) = 0;
  LODWORD(v57) = 1;
  goto LABEL_138;
}

#pragma GCC visibility pop
