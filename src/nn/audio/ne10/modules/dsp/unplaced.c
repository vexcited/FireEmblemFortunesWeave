#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

float* nn_audio_ne10_modules_dsp_1fc820(float* result, float* a2, __int64 a3,
                                        int a4, int a5, int a6, int a7, int a8,
                                        int a9);
float* nn_audio_ne10_modules_dsp_1fd500(float* result, float* a2, __int64 a3,
                                        int a4, int a5, int a6, int a7, int a8,
                                        int a9);
float* nn_audio_ne10_modules_dsp_213680(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_2139c0(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_214940(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_214c20(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_216740(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_216ac0(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_217980(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);
float* nn_audio_ne10_modules_dsp_217c80(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6);

float* nn_audio_ne10_modules_dsp_1fc820(float* result, float* a2, __int64 a3,
                                        int a4, int a5, int a6, int a7, int a8,
                                        int a9)
{

#pragma clang fp contract(off)
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  bool v25;
  int v26;
  float* v27;
  float v28;
  float v29;
  float* v30;
  float v31;
  float v32;
  float* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float* v67;
  float* v68;
  int v69;
  float v70;
  float v71;
  float* v72;
  float* v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float* v78;
  float* v79;
  float* v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float* v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float* v104;
  float* v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  float* v132;
  int v133;
  float v134;
  float v135;
  float v136;
  float* v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float* v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float* v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;

  if (a4 >= 1) {
    v9 = 3 * a5;
    v10 = a6 >= 0 ? a6 : a6 + 3;
    v11 = 2;
    v12 = a7 != 0 ? 0LL : 8LL;
    if (a7 != 0) {
      v11 = 8;
      v13 = 0;
    }
    else {
      v13 = -(__int64)a5;
    }
    v14 = a7 != 0 ? 0 : 3 * a5;
    if (a5 >= 1) {
      v15 = v10 >> 2;
      v16 = (__int64)v10 >> 2;
      v17 = 2 * a5;
      v18 = 2 * v15;
      v19 = 3 * v15;
      if (a7 != 0 && a9 != 0) {
        v20 = (float)a6;
        v21 = 2 * v16;
        v22 = 2 * v18;
        v23 = 0x1.0000000000000p+0f / v20;
        v24 = 2 * v19;
        while ((a5 & 1) == 0) {
          v26 = a5;
          if (a5 != 1) {
            goto LABEL_37;
          }
        LABEL_18:
          result += 2 * v14;
          v25 = __OFSUB__(a4--, 1);
          if ((a4 < 0) ^ v25 | (a4 == 0)) {
            return result;
          }
        }
        v27 = &a2[2 * v16];
        v28 = *v27;
        v29 = v27[1];
        v30 = &a2[2 * v18];
        v31 = *v30;
        v32 = v30[1];
        v33 = &a2[2 * v19];
        v34 = *a2;
        v35 = a2[1];
        a2 += 2;
        v36 = *v33;
        v37 = v33[1];
        v38 = v23 * v28;
        v39 = &result[2 * a5];
        v40 = v23 * v34;
        v41 = v23 * v31;
        if (a8 != 0) {
          v29 = -v29;
        }
        v42 = v23 * v36;
        if (a8 != 0) {
          v35 = -v35;
          v32 = -v32;
          v43 = -v37;
        }
        else {
          v43 = v37;
        }
        v44 = v23 * v29;
        v45 = v23 * v35;
        v46 = v23 * v32;
        v47 = v38 - v42;
        v48 = v38 + v42;
        v49 = v23 * v43;
        v50 = v45 + v46;
        v51 = v45 - v46;
        v52 = v44 + v49;
        v53 = v44 - v49;
        v54 = v50 - v52;
        v55 = v50 + v52;
        v56 = v51 - v47;
        v57 = v51 + v47;
        v58 = v40 + v41;
        v59 = v40 - v41;
        v60 = v58 + v48;
        v61 = v58 - v48;
        if (a8 != 0) {
          v55 = -v55;
          v62 = -v54;
        }
        else {
          v62 = v54;
        }
        *result = v60;
        result[1] = v55;
        v63 = v59 + v53;
        v64 = v59 - v53;
        if (a8 != 0) {
          v65 = -v56;
        }
        else {
          v65 = v56;
        }
        *v39 = v63;
        v39[1] = v65;
        if (a8 != 0) {
          v66 = -v57;
        }
        else {
          v66 = v57;
        }
        v67 = &result[2 * v17];
        *v67 = v61;
        v67[1] = v62;
        v68 = &result[2 * v9];
        result = (float*)((char*)result + v11 * 4);
        *v68 = v64;
        v68[1] = v66;
        v26 = a5 - 1;
        if (a5 == 1) {
          goto LABEL_18;
        }
      LABEL_37:
        v69 = v26 + 2;
        do {
          v81 = a2[1];
          v82 = a2[v21 + 1];
          v83 = a2[v22 + 1];
          v84 = a2[v24 + 1];
          if (a8 != 0) {
            v81 = -v81;
            v82 = -v82;
            v83 = -v83;
            v84 = -v84;
          }
          v85 = v23 * v81;
          v86 = v23 * v82;
          v87 = v23 * v83;
          v88 = v23 * v84;
          v89 = v85 + (float)(v23 * v83);
          v90 = v85 - v87;
          v91 = v23 * a2[2 * v16];
          v92 = v23 * a2[2 * v19];
          v93 = v89 - (float)(v86 + v88);
          v94 = v89 + (float)(v86 + v88);
          v95 = v90 - (float)(v91 - v92);
          v96 = v90 + (float)(v91 - v92);
          if (a8 != 0) {
            v94 = -v94;
            v95 = -v95;
            v93 = -v93;
            v96 = -v96;
          }
          v97 = v86 - v88;
          v98 = v91 + v92;
          v99 = &result[2 * a5];
          v100 = v23 * *a2;
          v101 = v23 * a2[2 * v18];
          v102 = v100 + v101;
          v103 = v100 - v101;
          *v99 = v103 + v97;
          v99[1] = v95;
          v104 = &result[2 * v17];
          *result = v102 + v98;
          result[1] = v94;
          *v104 = v102 - v98;
          v104[1] = v93;
          v105 = &result[2 * v9];
          *v105 = v103 - v97;
          v105[1] = v96;
          v106 = a2[3];
          v107 = a2[v21 + 3];
          v108 = a2[v22 + 3];
          v109 = a2[v24 + 3];
          if (a8 != 0) {
            v106 = -v106;
            v107 = -v107;
            v108 = -v108;
            v109 = -v109;
          }
          v110 = v23 * v106;
          v111 = v23 * v107;
          v112 = v23 * v108;
          v113 = v23 * v109;
          v114 = v110 + (float)(v23 * v108);
          v115 = v110 - v112;
          v116 = v111 + (float)(v23 * v109);
          v117 = v23 * a2[v21 + 2];
          v118 = v23 * a2[v24 + 2];
          v119 = v114 - v116;
          v120 = v114 + v116;
          v121 = v115 - (float)(v117 - v118);
          v122 = v115 + (float)(v117 - v118);
          if (a8 != 0) {
            v120 = -v120;
            v121 = -v121;
            v119 = -v119;
            v122 = -v122;
          }
          v70 = v23 * a2[2];
          v71 = v23 * a2[v22 + 2];
          v72 = &result[v11];
          v73 = &result[2 * a5 + v11];
          a2 += 4;
          v69 -= 2;
          v74 = v117 + v118;
          v75 = v111 - v113;
          v76 = v70 + v71;
          v77 = v70 - v71;
          *v72 = v76 + v74;
          v72[1] = v120;
          *v73 = v77 + v75;
          v73[1] = v121;
          v78 = &result[v11];
          v79 = &result[2 * v17 + v11];
          v80 = &result[2 * v9 + v11];
          *v79 = v76 - v74;
          v79[1] = v119;
          *v80 = v77 - v75;
          v80[1] = v122;
          result = &v78[v11];
        } while (v69 > 2);
        goto LABEL_18;
      }
      v123 = 8LL * v14;
      v124 = 2 * v13;
      v125 = a5 + 1;
      v126 = 2LL * v9;
      v127 = 2LL * a5;
      v128 = 2 * v17;
      v129 = 2 * v19;
      v130 = 2 * v18;
      v131 = (8 * v16) | 4;
      do {
        v132 = (float*)(a3 + 4);
        v133 = v125;
        do {
          v153 = a2[1];
          v154 = *(float*)((char*)a2 + v131 - 4);
          v155 = *(float*)((char*)a2 + v131);
          v156 = a2[v130];
          v157 = a2[v129];
          if (a8 != 0) {
            v153 = -v153;
            v155 = -v155;
            v158 = -a2[v130 + 1];
          }
          else {
            v158 = a2[v130 + 1];
          }
          if (a8 != 0) {
            v159 = -a2[v129 + 1];
          }
          else {
            v159 = a2[v129 + 1];
          }
          if (a7 == 0) {
            v160 = *(v132 - 1);
            v161 = v132[v127 - 1];
            v162 = v132[v127];
            v163 = v154 * v160;
            v164 = v155 * *v132;
            v165 = v154 * *v132;
            v166 = v155 * v160;
            v167 = v132[v128 - 1];
            v168 = v132[v128];
            v154 = v163 - v164;
            v155 = v166 + v165;
            v169 = v158 * v162;
            v170 = v156 * v162;
            v156 = (float)(v156 * v161) - v169;
            v158 = (float)(v158 * v161) + v170;
            v171 = v157 * v168;
            v157 = (float)(v157 * v167) - (float)(v159 * v168);
            v159 = (float)(v159 * v167) + v171;
          }
          v134 = *a2;
          a2 += 2;
          v135 = v153 + v158;
          v136 = v153 - v158;
          v137 = &result[v127];
          v132 = (float*)((char*)v132 + v12);
          --v133;
          v138 = v154 - v157;
          v139 = v155 + v159;
          v140 = v154 + v157;
          v141 = v155 - v159;
          v142 = v136 - v138;
          v143 = v134 - v156;
          v144 = v134 + v156;
          if (a8 != 0) {
            v142 = -(float)(v136 - v138);
          }
          *v137 = v143 + v141;
          v137[1] = v142;
          v145 = v135 + v139;
          v146 = v135 - v139;
          v147 = &result[v128];
          v148 = -(float)(v135 + v139);
          if (a8 != 0) {
            v145 = v148;
          }
          v149 = v144 - v140;
          *result = v144 + v140;
          result[1] = v145;
          if (a8 != 0) {
            v150 = -v146;
          }
          else {
            v150 = v146;
          }
          *v147 = v149;
          v147[1] = v150;
          v151 = v136 + v138;
          v152 = &result[v126];
          result = (float*)((char*)result + v11 * 4);
          if (a8 != 0) {
            v151 = -(float)(v136 + v138);
          }
          *v152 = v143 - v141;
          v152[1] = v151;
        } while (v133 > 1);
        result = (float*)((char*)result + v123);
        v25 = __OFSUB__(a4--, 1);
        a3 = (__int64)&v132[v124 - 1];
      } while (!((a4 < 0) ^ v25 | (a4 == 0)));
    }
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_1fd500(float* result, float* a2, __int64 a3,
                                        int a4, int a5, int a6, int a7, int a8,
                                        int a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  int v18;
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
  bool v31;
  float* v32;
  int v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float* v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float* v77;
  float v78;
  float* v79;
  float v80;
  float* v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;

  if (a4 >= 1) {
    v9 = 8;
    v10 = a7 != 0 ? 0LL : 8LL;
    if (a7 != 0) {
      v9 = 40;
      v11 = 0;
    }
    else {
      v11 = -(__int64)a5;
    }
    v12 = a7 != 0 ? 0 : 4 * a5;
    v13 = a9 != 0 && a7 != 0;
    if (a5 >= 1) {
      v14 = v12;
      v15 = 2LL * a5;
      v16 = 0x1.0000000000000p+0f / (float)a6;
      v17 = 8LL * a5;
      v18 = a5 + 1;
      v19 = 8 * v14;
      v20 = 2 * v11;
      v21 = a6 / 5;
      v22 = 2 * (a6 / 5);
      v23 = 2 * a5;
      v24 = 3 * a5;
      v25 = 8LL * (a6 / 5);
      v26 = 6LL * (a6 / 5);
      v27 = (8 * v21) | 4;
      v28 = 2 * v22;
      v29 = 2 * v23;
      v30 = 2LL * v24;
      do {
        v32 = (float*)(a3 + 4);
        v33 = v18;
        do {
          v34 = *a2;
          v35 = a2[1];
          v36 = *(float*)((char*)a2 + v27 - 4);
          v38 = a2[2 * v22];
          v40 = a2[v26];
          v42 = a2[v25];
          if (a8 != 0) {
            v35 = -v35;
            v37 = -*(float*)((char*)a2 + v27);
          }
          else {
            v37 = *(float*)((char*)a2 + v27);
          }
          if (a8 != 0) {
            v39 = -a2[v28 + 1];
          }
          else {
            v39 = a2[v28 + 1];
          }
          if (a8 != 0) {
            v41 = -a2[v26 + 1];
          }
          else {
            v41 = a2[v26 + 1];
          }
          if (a8 != 0) {
            v43 = -a2[v25 + 1];
          }
          else {
            v43 = a2[v25 + 1];
          }
          if (v13) {
            v34 = v16 * v34;
            v35 = v16 * v35;
            v36 = v16 * v36;
            v37 = v16 * v37;
            v38 = v16 * v38;
            v39 = v16 * v39;
            v40 = v16 * v40;
            v41 = v16 * v41;
            v42 = v16 * v42;
            v43 = v16 * v43;
          }
          else if (a7 == 0) {
            v82 = *(v32 - 1);
            v83 = v32[v15 - 1];
            v84 = v32[v15];
            v85 = v32[v29 - 1];
            v86 = v32[v29];
            v87 = v36 * *v32;
            v36 = (float)(PSEUDO_UNFUSED(v36 * v82)) -
                  (float)(PSEUDO_UNFUSED(v37 * *v32));
            v37 = (float)(PSEUDO_UNFUSED(v37 * v82)) + v87;
            v88 = v38 * v83;
            v89 = v39 * v84;
            v90 = v32[v30 - 1];
            v91 = v32[v30];
            v92 = v38 * v84;
            v93 = v39 * v83;
            v94 = v40 * v86;
            v38 = v88 - v89;
            v39 = v93 + v92;
            v40 = (float)(PSEUDO_UNFUSED(v40 * v85)) -
                  (float)(PSEUDO_UNFUSED(v41 * v86));
            v95 = v43 * v91;
            v96 = v42 * v91;
            v41 = (float)(PSEUDO_UNFUSED(v41 * v85)) + v94;
            v42 = (float)(PSEUDO_UNFUSED(v42 * v90)) - v95;
            v43 = (float)(PSEUDO_UNFUSED(v43 * v90)) + v96;
          }
          v44 = v38 - v40;
          v45 = v38 + v40;
          v46 = &result[v15];
          a2 += 2;
          v32 = (float*)((char*)v32 + v10);
          v47 = v39 + v41;
          --v33;
          v48 = v39 - v41;
          v49 = v36 + v42;
          v50 = v37 + v43;
          v51 = v36 - v42;
          v52 = v37 - v43;
          v53 = v45 + v49;
          v54 = v34 + (float)(v49 * 0x1.3c6ef40000000p-2f);
          v55 = v34 + (float)(v49 * -0x1.9e377a0000000p-1f);
          v56 = v47 + v50;
          v57 = v35 + (float)(v50 * 0x1.3c6ef40000000p-2f);
          v58 = v35 + (float)(v50 * -0x1.9e377a0000000p-1f);
          v59 = v34 + v53;
          v60 = v54 + (float)(v45 * -0x1.9e377a0000000p-1f);
          v61 = v35 + v56;
          v62 = v57 + (float)(v47 * -0x1.9e377a0000000p-1f);
          v63 = v58 + (float)(v47 * 0x1.3c6ef40000000p-2f);
          v64 = v55 + (float)(v45 * 0x1.3c6ef40000000p-2f);
          v65 = (float)(PSEUDO_UNFUSED(v48 * -0x1.2cf2300000000p-1f)) +
                (float)(v52 * -0x1.e6f0e20000000p-1f);
          v66 = (float)(PSEUDO_UNFUSED(v48 * -0x1.e6f0e20000000p-1f)) +
                (float)(v52 * 0x1.2cf2300000000p-1f);
          v67 = (float)(PSEUDO_UNFUSED(v44 * 0x1.2cf2300000000p-1f)) +
                (float)(v51 * 0x1.e6f0e20000000p-1f);
          v68 = (float)(PSEUDO_UNFUSED(v44 * 0x1.e6f0e20000000p-1f)) +
                (float)(v51 * -0x1.2cf2300000000p-1f);
          v69 = v60 - v65;
          v70 = v60 + v65;
          v71 = v64 + v66;
          v72 = v64 - v66;
          v73 = v68 + v63;
          v74 = v63 - v68;
          if (a8 != 0) {
            v61 = -v61;
          }
          *result = v59;
          result[1] = v61;
          v75 = -(float)(v62 - v67);
          if (a8 == 0) {
            v75 = v62 - v67;
          }
          *v46 = v69;
          v46[1] = v75;
          v76 = -v73;
          v77 = &result[v29];
          if (a8 == 0) {
            v76 = v73;
          }
          *v77 = v71;
          v77[1] = v76;
          v78 = -v74;
          v79 = &result[v30];
          if (a8 == 0) {
            v78 = v74;
          }
          *v79 = v72;
          v79[1] = v78;
          v80 = v67 + v62;
          v81 = &result[v17];
          result = (float*)((char*)result + v9);
          if (a8 != 0) {
            v80 = -(float)(v67 + v62);
          }
          *v81 = v70;
          v81[1] = v80;
        } while (v33 > 1);
        result = (float*)((char*)result + v19);
        v31 = __OFSUB__(a4--, 1);
        a3 = (__int64)&v32[v20 - 1];
      } while (!((a4 < 0) ^ v31 | (a4 == 0)));
    }
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_213680(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  float32x4_t v6;
  int32x4_t v7;
  float32x4_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  const float* v15;
  float* v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x2_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int v25;
  int32x2_t* v26;
  __int64 v27;
  const float* v28;
  float* v29;
  float* v30;
  float* v31;
  const float* v32;
  const float* v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x2_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  float32x4x2_t v47;
  float32x4x2_t v48;
  float32x4x2_t v49;
  float32x4x2_t v50;
  float32x4x2_t v51;
  float32x4x2_t v52;
  float32x4x2_t v53;
  float32x4x2_t v54;
  float32x4x2_t v55;
  float32x4x2_t v56;
  float32x4x2_t v57;
  float32x4x2_t v58;
  float32x4x2_t v59;
  float32x4x2_t v60;

  if (a4 >= 1 && a5 >= 1) {
    LANES128(v6).n128_u64[0] = 0xAAAAAAAAAAAAAAAALL;
    LANES128(v6).n128_u64[1] = 0xAAAAAAAAAAAAAAAALL;
    v7 = vdupq_n_s32(0x9126145F);
    v8 = vnegq_f32(v6);
    v9 = a6 / 3;
    v10 = v9 << 6;
    v11 = 8 * v9;
    v12 = 8LL * a5;
    do {
      if ((a5 & 1) != 0) {
        v15 = &a2[v11];
        v49 = vld2q_f32(a2);
        a2 += 8;
        v14 = a5 - 1;
        v52 = vld2q_f32(v15);
        v55 = vld2q_f32(&v15[v11]);
        v16 = &result[v12];
        v17 = vqrdmulhq_s32(v55.val[0], v8);
        v55.val[0] = vqrdmulhq_s32(v55.val[1], v8);
        v55.val[1] = vqrdmulhq_s32(v52.val[0], v8);
        v52.val[0] = vqrdmulhq_s32(v52.val[1], v8);
        v52.val[1] = vqrdmulhq_s32(v49.val[0], v8);
        v49.val[0] = vqrdmulhq_s32(v49.val[1], v8);
        PSEUDO_LOW_LANE128(v49.val[1], n128_u64, (unsigned __int64)a3[a5]);
        v18 = vqrdmulhq_lane_s32(
            v17, COERCE_AS(int32x2_t, LANES128(v49.val[1]).n128_u64[0]), 0);
        v19 = vqrdmulhq_lane_s32(
            v17, COERCE_AS(int32x2_t, LANES128(v49.val[1]).n128_u64[0]), 1);
        v20 = vqrdmulhq_lane_s32(
            v55.val[0], COERCE_AS(int32x2_t, LANES128(v49.val[1]).n128_u64[0]),
            0);
        v49.val[1] = vqrdmulhq_lane_s32(
            v55.val[0], COERCE_AS(int32x2_t, LANES128(v49.val[1]).n128_u64[0]),
            1);
        v55.val[0] = vaddq_s32(v20, v19);
        PSEUDO_LOW_LANE64(v21, n64_u64, LANES64(*(a3)).n64_u64[0]);
        ++a3;
        v49.val[1] = vsubq_s32(v18, v49.val[1]);
        v22 = vqrdmulhq_lane_s32(v52.val[0], v21, 0);
        v52.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v55.val[1], v21, 0),
                               vqrdmulhq_lane_s32(v52.val[0], v21, 1));
        v55.val[1] = vaddq_s32(v22, vqrdmulhq_lane_s32(v55.val[1], v21, 1));
        v23 = vaddq_s32(v52.val[0], v49.val[1]);
        v24 = vaddq_s32(v55.val[1], v55.val[0]);
        v49.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v52.val[0], v49.val[1]));
        v52.val[0] = vqrdmulhq_s32(v7, vsubq_s32(v55.val[1], v55.val[0]));
        v59.val[0] = vaddq_s32(v23, v52.val[1]);
        v59.val[1] = vaddq_s32(v24, v49.val[0]);
        v55.val[0] = vsubq_s32(v52.val[1], vshrq_n_s32(v23, 1u));
        v55.val[1] = vsubq_s32(v49.val[0], vshrq_n_s32(v24, 1u));
        vst2q_f32(result, v59);
        result += 8;
        v58.val[0] = vaddq_s32(v52.val[0], v55.val[0]);
        v52.val[0] = vsubq_s32(v55.val[0], v52.val[0]);
        v52.val[1] = vaddq_s32(v49.val[1], v55.val[1]);
        v58.val[1] = vsubq_s32(v55.val[1], v49.val[1]);
        vst2q_f32(v16, v52);
        vst2q_f32(&v16[v12], v58);
        if (a5 != 1) {
        LABEL_9:
          v25 = v14 + 2;
          v26 = &a3[a5 + 1];
          v27 = 0;
          do {
            v28 = &a2[v11 + 8 + v27];
            v29 = &result[v27];
            v30 = &result[v12 + v27];
            v31 = &result[16 * (__int64)a5 + v27];
            v25 -= 2;
            v50 = vld2q_f32(&a2[v27]);
            v32 = &a2[v27 + 8];
            v53 = vld2q_f32(&a2[v11 + v27]);
            v33 = (const float*)((char*)a2 + v10 + v27 * 4);
            v27 += 16;
            v56 = vld2q_f32(v33);
            v34 = vqrdmulhq_s32(v56.val[0], v8);
            v56.val[0] = vqrdmulhq_s32(v56.val[1], v8);
            v56.val[1] = vqrdmulhq_s32(v53.val[0], v8);
            v53.val[0] = vqrdmulhq_s32(v53.val[1], v8);
            PSEUDO_LOW_LANE128(v53.val[1], n128_u64,
                               LANES64(v26[-1]).n64_u64[0]);
            v35 = vqrdmulhq_lane_s32(
                v34, COERCE_AS(int32x2_t, LANES128(v53.val[1]).n128_u64[0]), 0);
            v36 = vqrdmulhq_lane_s32(
                v34, COERCE_AS(int32x2_t, LANES128(v53.val[1]).n128_u64[0]), 1);
            v37 = vqrdmulhq_lane_s32(
                v56.val[0],
                COERCE_AS(int32x2_t, LANES128(v53.val[1]).n128_u64[0]), 0);
            v53.val[1] = vqrdmulhq_lane_s32(
                v56.val[0],
                COERCE_AS(int32x2_t, LANES128(v53.val[1]).n128_u64[0]), 1);
            v56.val[0] = vaddq_s32(v37, v36);
            v53.val[1] = vsubq_s32(v35, v53.val[1]);
            v38 = vqrdmulhq_lane_s32(
                v53.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0);
            v39 = vqrdmulhq_s32(v50.val[0], v8);
            v50.val[0] = vqrdmulhq_s32(v50.val[1], v8);
            v53.val[0] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v56.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    0),
                vqrdmulhq_lane_s32(
                    v53.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    1));
            v56.val[1] = vaddq_s32(
                v38, vqrdmulhq_lane_s32(
                         v56.val[1],
                         COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
            v50.val[1] = vaddq_s32(v53.val[0], v53.val[1]);
            v40 = vaddq_s32(v56.val[1], v56.val[0]);
            v53.val[0] = vqrdmulhq_s32(v7, vsubq_s32(v53.val[0], v53.val[1]));
            v53.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v56.val[1], v56.val[0]));
            v60.val[0] = vaddq_s32(v50.val[1], v39);
            v60.val[1] = vaddq_s32(v40, v50.val[0]);
            v56.val[0] = vsubq_s32(v39, vshrq_n_s32(v50.val[1], 1u));
            v56.val[1] = vsubq_s32(v50.val[0], vshrq_n_s32(v40, 1u));
            vst2q_f32(v29, v60);
            v50.val[0] = vaddq_s32(v53.val[1], v56.val[0]);
            v50.val[1] = vsubq_s32(v56.val[1], v53.val[0]);
            v47.val[0] = vsubq_s32(v56.val[0], v53.val[1]);
            v47.val[1] = vaddq_s32(v53.val[0], v56.val[1]);
            vst2q_f32(v30, v47);
            vst2q_f32(v31, v50);
            v54 = vld2q_f32(v28);
            v57 = vld2q_f32(v33 + 8);
            v51 = vld2q_f32(v32);
            v41 = vqrdmulhq_s32(v57.val[0], v8);
            v57.val[0] = vqrdmulhq_s32(v57.val[1], v8);
            v57.val[1] = vqrdmulhq_s32(v54.val[0], v8);
            v54.val[0] = vqrdmulhq_s32(v54.val[1], v8);
            PSEUDO_LOW_LANE64(v42, n64_u64, LANES64(*(v26)).n64_u64[0]);
            v26 += 2;
            v43 = vqrdmulhq_lane_s32(v41, v42, 0);
            v54.val[1] = vqrdmulhq_lane_s32(v57.val[0], v42, 1);
            v57.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v57.val[0], v42, 0),
                                   vqrdmulhq_lane_s32(v41, v42, 1));
            PSEUDO_LOW_LANE128(v41, n128_u64, LANES64(a3[1]).n64_u64[0]);
            v54.val[1] = vsubq_s32(v43, v54.val[1]);
            a3 += 2;
            v44 = vqrdmulhq_lane_s32(
                v57.val[1], COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 0);
            v57.val[1] = vqrdmulhq_lane_s32(
                v57.val[1], COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 1);
            v60.val[0] = vqrdmulhq_lane_s32(
                v54.val[0], COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 0);
            v54.val[0] = vqrdmulhq_lane_s32(
                v54.val[0], COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 1);
            v45 = vqrdmulhq_s32(v51.val[0], v8);
            v51.val[0] = vqrdmulhq_s32(v51.val[1], v8);
            v54.val[0] = vsubq_s32(v44, v54.val[0]);
            v57.val[1] = vaddq_s32(v60.val[0], v57.val[1]);
            v51.val[1] = vaddq_s32(v54.val[0], v54.val[1]);
            v46 = vaddq_s32(v57.val[1], v57.val[0]);
            v54.val[0] = vqrdmulhq_s32(v7, vsubq_s32(v54.val[0], v54.val[1]));
            v54.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v57.val[1], v57.val[0]));
            v60.val[0] = vaddq_s32(v51.val[1], v45);
            v60.val[1] = vaddq_s32(v46, v51.val[0]);
            v57.val[0] = vsubq_s32(v45, vshrq_n_s32(v51.val[1], 1u));
            v57.val[1] = vsubq_s32(v51.val[0], vshrq_n_s32(v46, 1u));
            vst2q_f32(v29 + 8, v60);
            v51.val[0] = vaddq_s32(v54.val[1], v57.val[0]);
            v51.val[1] = vsubq_s32(v57.val[1], v54.val[0]);
            v48.val[0] = vsubq_s32(v57.val[0], v54.val[1]);
            v48.val[1] = vaddq_s32(v54.val[0], v57.val[1]);
            vst2q_f32(v30 + 8, v48);
            vst2q_f32(v31 + 8, v51);
          } while (v25 > 2);
          result = (float*)((char*)result + v27 * 4);
          a2 = (const float*)((char*)a2 + v27 * 4);
        }
      }
      else {
        v14 = a5;
        if (a5 != 1) {
          goto LABEL_9;
        }
      }
      result += 16 * (__int64)a5;
      a3 -= a5;
      v13 = __OFSUB__(a4--, 1);
    } while (!((a4 < 0) ^ v13 | (a4 == 0)));
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_2139c0(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  int32x4_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  const float* v15;
  const float* v16;
  float* v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x2_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  float* v29;
  int v30;
  char* v31;
  __int64 v32;
  int32x2_t* v33;
  int32x2_t* v34;
  const float* v35;
  char* v36;
  const float* v37;
  const float* v38;
  float* v39;
  float* v40;
  float* v41;
  const float* v42;
  const float* v43;
  float* v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  int32x4_t v52;
  int32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x2_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x2_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  __int64 v65;
  __int64 v66;
  float32x4x2_t v67;
  float32x4x2_t v68;
  float32x4x2_t v69;
  float32x4x2_t v70;
  float32x4x2_t v71;
  float32x4x2_t v72;
  float32x4x2_t v73;
  float32x4x2_t v74;
  float32x4x2_t v75;
  float32x4x2_t v76;
  float32x4x2_t v77;
  float32x4x2_t v78;
  float32x4x2_t v79;
  float32x4x2_t v80;
  float32x4x2_t v81;
  float32x4x2_t v82;
  float32x4x2_t v83;

  if (a4 >= 1) {
    v6 = a6 + 3;
    if (a6 >= 0) {
      v6 = a6;
    }
    if (a5 >= 1) {
      v7 = (__int64)v6 >> 2;
      LANES128(v8).n128_u64[0] = 0x2000000020000000LL;
      LANES128(v8).n128_u64[1] = 0x2000000020000000LL;
      v9 = 2 * a5;
      v10 = 8 * v7;
      v11 = 8LL * a5;
      v12 = 32 * v7 + 32;
      v65 = (v7 << 6) | 0x20;
      v66 = 24 * v7;
      do {
        if ((a5 & 1) != 0) {
          v15 = &a2[v10];
          v70 = vld2q_f32(a2);
          a2 += 8;
          v73 = vld2q_f32(v15);
          v16 = &v15[v10];
          v76 = vld2q_f32(v16);
          v79 = vld2q_f32(&v16[v10]);
          v17 = &result[v11];
          v18 = vqrdmulhq_s32(v79.val[0], v8);
          v79.val[0] = vqrdmulhq_s32(v79.val[1], v8);
          v79.val[1] = vqrdmulhq_s32(v76.val[0], v8);
          v76.val[0] = vqrdmulhq_s32(v76.val[1], v8);
          v76.val[1] = vqrdmulhq_s32(v73.val[0], v8);
          v73.val[0] = vqrdmulhq_s32(v73.val[1], v8);
          v73.val[1] = vqrdmulhq_s32(v70.val[0], v8);
          v70.val[0] = vqrdmulhq_s32(v70.val[1], v8);
          PSEUDO_LOW_LANE128(v70.val[1], n128_u64, (unsigned __int64)a3[v9]);
          v19 = vqrdmulhq_lane_s32(
              v18, COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 0);
          v20 = vqrdmulhq_lane_s32(
              v18, COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 1);
          v21 = vqrdmulhq_lane_s32(
              v79.val[0],
              COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 0);
          v70.val[1] = vqrdmulhq_lane_s32(
              v79.val[0],
              COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 1);
          PSEUDO_LOW_LANE128(v79.val[0], n128_u64, (unsigned __int64)a3[a5]);
          v70.val[1] = vsubq_s32(v19, v70.val[1]);
          v22 = vaddq_s32(v21, v20);
          v23 = vqrdmulhq_lane_s32(
              v79.val[1],
              COERCE_AS(int32x2_t, LANES128(v79.val[0]).n128_u64[0]), 0);
          v24 = vqrdmulhq_lane_s32(
              v76.val[0],
              COERCE_AS(int32x2_t, LANES128(v79.val[0]).n128_u64[0]), 0);
          v76.val[0] = vqrdmulhq_lane_s32(
              v76.val[0],
              COERCE_AS(int32x2_t, LANES128(v79.val[0]).n128_u64[0]), 1);
          v79.val[0] = vaddq_s32(
              v24,
              vqrdmulhq_lane_s32(
                  v79.val[1],
                  COERCE_AS(int32x2_t, LANES128(v79.val[0]).n128_u64[0]), 1));
          PSEUDO_LOW_LANE64(v25, n64_u64, LANES64(*(a3)).n64_u64[0]);
          ++a3;
          v76.val[0] = vsubq_s32(v23, v76.val[0]);
          v26 = vqrdmulhq_lane_s32(v73.val[0], v25, 0);
          v79.val[1] = vaddq_s32(v76.val[0], v73.val[1]);
          v73.val[1] = vsubq_s32(v73.val[1], v76.val[0]);
          v73.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v76.val[1], v25, 0),
                                 vqrdmulhq_lane_s32(v73.val[0], v25, 1));
          v76.val[1] = vaddq_s32(v26, vqrdmulhq_lane_s32(v76.val[1], v25, 1));
          v27 = vaddq_s32(v79.val[0], v70.val[0]);
          v70.val[0] = vsubq_s32(v70.val[0], v79.val[0]);
          v76.val[0] = vaddq_s32(v73.val[0], v70.val[1]);
          v79.val[0] = vaddq_s32(v76.val[1], v22);
          v70.val[1] = vsubq_s32(v73.val[0], v70.val[1]);
          v73.val[0] = vsubq_s32(v76.val[1], v22);
          v76.val[1] = vsubq_s32(v79.val[1], v76.val[0]);
          v28 = vsubq_s32(v27, v79.val[0]);
          v82.val[0] = vaddq_s32(v76.val[0], v79.val[1]);
          v82.val[1] = vaddq_s32(v79.val[0], v27);
          v79.val[0] = vaddq_s32(v73.val[0], v73.val[1]);
          v79.val[1] = vsubq_s32(v70.val[0], v70.val[1]);
          v73.val[0] = vsubq_s32(v73.val[1], v73.val[0]);
          v73.val[1] = vaddq_s32(v70.val[1], v70.val[0]);
          vst2q_f32(result, v82);
          result += 8;
          vst2q_f32(v17, v79);
          v29 = &v17[v11];
          v67.val[0] = v76.val[1];
          v67.val[1] = v28;
          vst2q_f32(v29, v67);
          vst2q_f32(&v29[v11], v73);
          v14 = a5 - 1;
          if (a5 != 1) {
          LABEL_11:
            v30 = v14 + 2;
            v31 = (char*)a2 + v12;
            v32 = 0;
            v33 = &a3[v9 + 1];
            v34 = &a3[a5 + 1];
            v35 = &a2[v66];
            v36 = (char*)a2 + v65;
            do {
              v37 = (const float*)&v31[v32 * 4];
              v38 = (const float*)&v36[v32 * 4];
              v39 = &result[v32];
              v40 = &result[v11 + v32];
              v41 = &result[16 * (__int64)a5 + v32];
              v30 -= 2;
              v71 = vld2q_f32(&a2[v32]);
              v42 = &a2[v32 + 8];
              v74 = vld2q_f32((const float*)&v31[v32 * 4 - 32]);
              v77 = vld2q_f32((const float*)&v36[v32 * 4 - 32]);
              v80 = vld2q_f32(&v35[v32]);
              v43 = &v35[v32 + 8];
              v44 = &result[24 * a5 + v32];
              v32 += 16;
              v45 = vqrdmulhq_s32(v71.val[0], v8);
              v71.val[0] = vqrdmulhq_s32(v71.val[1], v8);
              PSEUDO_LOW_LANE128(v71.val[1], n128_u64,
                                 LANES64(v33[-1]).n64_u64[0]);
              v46 = vqrdmulhq_s32(v80.val[0], v8);
              v80.val[0] = vqrdmulhq_s32(v80.val[1], v8);
              v80.val[1] = vqrdmulhq_s32(v77.val[0], v8);
              v77.val[0] = vqrdmulhq_s32(v77.val[1], v8);
              v77.val[1] = vqrdmulhq_s32(v74.val[0], v8);
              v74.val[0] = vqrdmulhq_s32(v74.val[1], v8);
              v74.val[1] = vqrdmulhq_lane_s32(
                  v46, COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]),
                  0);
              v47 = vqrdmulhq_lane_s32(
                  v46, COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]),
                  1);
              v48 = vqrdmulhq_lane_s32(
                  v80.val[0],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 0);
              v71.val[1] = vsubq_s32(
                  v74.val[1],
                  vqrdmulhq_lane_s32(
                      v80.val[0],
                      COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]),
                      1));
              v74.val[1] = vaddq_s32(v48, v47);
              PSEUDO_LOW_LANE128(v47, n128_u64, LANES64(v34[-1]).n64_u64[0]);
              v49 = vqrdmulhq_lane_s32(
                  v77.val[0], COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]),
                  0);
              v77.val[0] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v80.val[1],
                      COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 0),
                  vqrdmulhq_lane_s32(
                      v77.val[0],
                      COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 1));
              v50 = vaddq_s32(
                  v49, vqrdmulhq_lane_s32(
                           v80.val[1],
                           COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 1));
              v51 = vqrdmulhq_lane_s32(
                  v74.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                  0);
              v80.val[0] = vaddq_s32(v77.val[0], v45);
              v77.val[0] = vsubq_s32(v45, v77.val[0]);
              v74.val[0] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v77.val[1],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                  vqrdmulhq_lane_s32(
                      v74.val[0],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v77.val[1] = vaddq_s32(
                  v51, vqrdmulhq_lane_s32(
                           v77.val[1],
                           COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v80.val[1] = vaddq_s32(v50, v71.val[0]);
              v71.val[0] = vsubq_s32(v71.val[0], v50);
              v52 = vaddq_s32(v74.val[0], v71.val[1]);
              v53 = vaddq_s32(v77.val[1], v74.val[1]);
              v71.val[1] = vsubq_s32(v74.val[0], v71.val[1]);
              v74.val[0] = vsubq_s32(v77.val[1], v74.val[1]);
              v83.val[0] = vsubq_s32(v80.val[0], v52);
              v83.val[1] = vsubq_s32(v80.val[1], v53);
              v77.val[1] = vaddq_s32(v52, v80.val[0]);
              v54 = vaddq_s32(v53, v80.val[1]);
              v80.val[0] = vaddq_s32(v74.val[0], v77.val[0]);
              v80.val[1] = vsubq_s32(v71.val[0], v71.val[1]);
              v74.val[0] = vsubq_s32(v77.val[0], v74.val[0]);
              v74.val[1] = vaddq_s32(v71.val[1], v71.val[0]);
              v68.val[0] = v77.val[1];
              v68.val[1] = v54;
              vst2q_f32(v39, v68);
              vst2q_f32(v40, v80);
              vst2q_f32(v41, v83);
              vst2q_f32(v44, v74);
              v72 = vld2q_f32(v42);
              v75 = vld2q_f32(v37);
              v78 = vld2q_f32(v38);
              v81 = vld2q_f32(v43);
              v55 = vqrdmulhq_s32(v81.val[0], v8);
              v81.val[0] = vqrdmulhq_s32(v81.val[1], v8);
              v81.val[1] = vqrdmulhq_s32(v78.val[0], v8);
              v78.val[0] = vqrdmulhq_s32(v78.val[1], v8);
              v78.val[1] = vqrdmulhq_s32(v75.val[0], v8);
              v75.val[0] = vqrdmulhq_s32(v75.val[1], v8);
              v75.val[1] = vqrdmulhq_s32(v72.val[0], v8);
              v72.val[0] = vqrdmulhq_s32(v72.val[1], v8);
              PSEUDO_LOW_LANE64(v56, n64_u64, LANES64(*(v33)).n64_u64[0]);
              v33 += 2;
              v57 = vqrdmulhq_lane_s32(v55, v56, 0);
              v58 = vqrdmulhq_lane_s32(v55, v56, 1);
              v83.val[0] = vqrdmulhq_lane_s32(v81.val[0], v56, 0);
              v72.val[1] = vqrdmulhq_lane_s32(v81.val[0], v56, 1);
              PSEUDO_LOW_LANE64(v59, n64_u64, LANES64(*(v34)).n64_u64[0]);
              v34 += 2;
              v72.val[1] = vsubq_s32(v57, v72.val[1]);
              v60 = vaddq_s32(v83.val[0], v58);
              v61 = vqrdmulhq_lane_s32(v81.val[1], v59, 0);
              v81.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v78.val[0], v59, 0),
                                     vqrdmulhq_lane_s32(v81.val[1], v59, 1));
              PSEUDO_LOW_LANE128(v81.val[1], n128_u64,
                                 LANES64(a3[1]).n64_u64[0]);
              v78.val[0] =
                  vsubq_s32(v61, vqrdmulhq_lane_s32(v78.val[0], v59, 1));
              a3 += 2;
              v62 = vqrdmulhq_lane_s32(
                  v78.val[1],
                  COERCE_AS(int32x2_t, LANES128(v81.val[1]).n128_u64[0]), 0);
              v78.val[1] = vqrdmulhq_lane_s32(
                  v78.val[1],
                  COERCE_AS(int32x2_t, LANES128(v81.val[1]).n128_u64[0]), 1);
              v83.val[0] = vqrdmulhq_lane_s32(
                  v75.val[0],
                  COERCE_AS(int32x2_t, LANES128(v81.val[1]).n128_u64[0]), 0);
              v75.val[0] = vqrdmulhq_lane_s32(
                  v75.val[0],
                  COERCE_AS(int32x2_t, LANES128(v81.val[1]).n128_u64[0]), 1);
              v81.val[1] = vaddq_s32(v78.val[0], v75.val[1]);
              v75.val[1] = vsubq_s32(v75.val[1], v78.val[0]);
              v75.val[0] = vsubq_s32(v62, v75.val[0]);
              v78.val[1] = vaddq_s32(v83.val[0], v78.val[1]);
              v63 = vaddq_s32(v81.val[0], v72.val[0]);
              v72.val[0] = vsubq_s32(v72.val[0], v81.val[0]);
              v78.val[0] = vaddq_s32(v75.val[0], v72.val[1]);
              v81.val[0] = vaddq_s32(v78.val[1], v60);
              v72.val[1] = vsubq_s32(v75.val[0], v72.val[1]);
              v75.val[0] = vsubq_s32(v78.val[1], v60);
              v78.val[1] = vsubq_s32(v81.val[1], v78.val[0]);
              v64 = vsubq_s32(v63, v81.val[0]);
              v83.val[0] = vaddq_s32(v78.val[0], v81.val[1]);
              v83.val[1] = vaddq_s32(v81.val[0], v63);
              v81.val[0] = vaddq_s32(v75.val[0], v75.val[1]);
              v81.val[1] = vsubq_s32(v72.val[0], v72.val[1]);
              v75.val[0] = vsubq_s32(v75.val[1], v75.val[0]);
              v75.val[1] = vaddq_s32(v72.val[1], v72.val[0]);
              vst2q_f32(v39 + 8, v83);
              vst2q_f32(v40 + 8, v81);
              v69.val[0] = v78.val[1];
              v69.val[1] = v64;
              vst2q_f32(v41 + 8, v69);
              vst2q_f32(v44 + 8, v75);
            } while (v30 > 2);
            result = (float*)((char*)result + v32 * 4);
            a2 = (const float*)((char*)a2 + v32 * 4);
          }
        }
        else {
          v14 = a5;
          if (a5 != 1) {
            goto LABEL_11;
          }
        }
        result += 24 * a5;
        a3 -= a5;
        v13 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v13 | (a4 == 0)));
    }
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_214940(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int32x4_t v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  int v12;
  const float* v13;
  int32x2_t v14;
  float* v15;
  int32x4_t v16;
  int32x2_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int v21;
  int32x2_t* v22;
  __int64 v23;
  const float* v24;
  float* v25;
  float* v26;
  float* v27;
  const float* v28;
  const float* v29;
  int32x2_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x2_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;
  float32x4x2_t v46;
  float32x4x2_t v47;
  float32x4x2_t v48;
  float32x4x2_t v49;
  float32x4x2_t v50;
  float32x4x2_t v51;
  float32x4x2_t v52;
  float32x4x2_t v53;

  if (a4 >= 1 && a5 >= 1) {
    v6 = vdupq_n_s32(0x9126145F);
    v7 = a6 / 3;
    v8 = v7 << 6;
    v9 = 8 * v7;
    v10 = 8LL * a5;
    do {
      if ((a5 & 1) != 0) {
        v13 = &a2[v9];
        v43 = vld2q_f32(a2);
        a2 += 8;
        v12 = a5 - 1;
        v46 = vld2q_f32(v13);
        PSEUDO_LOW_LANE64(v14, n64_u64, (unsigned __int64)a3[a5]);
        v49 = vld2q_f32(&v13[v9]);
        v15 = &result[v10];
        v16 = vqrdmulhq_lane_s32(v49.val[0], v14, 1);
        PSEUDO_LOW_LANE64(v17, n64_u64, LANES64(*(a3)).n64_u64[0]);
        ++a3;
        v49.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v49.val[0], v14, 0),
                               vqrdmulhq_lane_s32(v49.val[1], v14, 1));
        v49.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v49.val[1], v14, 0), v16);
        v18 = vqrdmulhq_lane_s32(v46.val[0], v17, 1);
        v46.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v46.val[0], v17, 0),
                               vqrdmulhq_lane_s32(v46.val[1], v17, 1));
        v46.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v46.val[1], v17, 0), v18);
        v19 = vaddq_s32(v46.val[0], v49.val[0]);
        v20 = vaddq_s32(v46.val[1], v49.val[1]);
        v46.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v46.val[0], v49.val[0]));
        v46.val[1] = vqrdmulhq_s32(v6, vsubq_s32(v46.val[1], v49.val[1]));
        v52.val[0] = vaddq_s32(v19, v43.val[0]);
        v52.val[1] = vaddq_s32(v20, v43.val[1]);
        v49.val[0] = vsubq_s32(v43.val[0], vshrq_n_s32(v19, 1u));
        v49.val[1] = vsubq_s32(v43.val[1], vshrq_n_s32(v20, 1u));
        v43.val[0] = vaddq_s32(v46.val[1], v49.val[0]);
        v43.val[1] = vsubq_s32(v49.val[1], v46.val[0]);
        vst2q_f32(result, v52);
        result += 8;
        v40.val[0] = vsubq_s32(v49.val[0], v46.val[1]);
        v40.val[1] = vaddq_s32(v46.val[0], v49.val[1]);
        vst2q_f32(v15, v40);
        vst2q_f32(&v15[v10], v43);
        if (a5 != 1) {
        LABEL_9:
          v21 = v12 + 2;
          v22 = &a3[a5 + 1];
          v23 = 0;
          do {
            v24 = &a2[v9 + 8 + v23];
            v25 = &result[v23];
            v26 = &result[v10 + v23];
            v27 = &result[16 * (__int64)a5 + v23];
            v21 -= 2;
            v44 = vld2q_f32(&a2[v23]);
            v28 = &a2[v23 + 8];
            v47 = vld2q_f32(&a2[v9 + v23]);
            v29 = (const float*)((char*)a2 + v8 + v23 * 4);
            v23 += 16;
            v50 = vld2q_f32(v29);
            PSEUDO_LOW_LANE64(v30, n64_u64, LANES64(v22[-1]).n64_u64[0]);
            v31 = vqrdmulhq_lane_s32(v50.val[0], v30, 1);
            v50.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v50.val[0], v30, 0),
                                   vqrdmulhq_lane_s32(v50.val[1], v30, 1));
            v50.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v50.val[1], v30, 0), v31);
            v32 = vqrdmulhq_lane_s32(
                v47.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1);
            v47.val[0] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v47.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    0),
                vqrdmulhq_lane_s32(
                    v47.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    1));
            v47.val[1] = vaddq_s32(
                vqrdmulhq_lane_s32(
                    v47.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    0),
                v32);
            v33 = vaddq_s32(v47.val[0], v50.val[0]);
            v34 = vaddq_s32(v47.val[1], v50.val[1]);
            v47.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v47.val[0], v50.val[0]));
            v47.val[1] = vqrdmulhq_s32(v6, vsubq_s32(v47.val[1], v50.val[1]));
            v53.val[0] = vaddq_s32(v33, v44.val[0]);
            v53.val[1] = vaddq_s32(v34, v44.val[1]);
            v50.val[0] = vsubq_s32(v44.val[0], vshrq_n_s32(v33, 1u));
            v50.val[1] = vsubq_s32(v44.val[1], vshrq_n_s32(v34, 1u));
            vst2q_f32(v25, v53);
            v44.val[0] = vaddq_s32(v47.val[1], v50.val[0]);
            v44.val[1] = vsubq_s32(v50.val[1], v47.val[0]);
            v41.val[0] = vsubq_s32(v50.val[0], v47.val[1]);
            v41.val[1] = vaddq_s32(v47.val[0], v50.val[1]);
            vst2q_f32(v26, v41);
            vst2q_f32(v27, v44);
            v48 = vld2q_f32(v29 + 8);
            PSEUDO_LOW_LANE64(v35, n64_u64, LANES64(*(v22)).n64_u64[0]);
            v22 += 2;
            v45 = vld2q_f32(v24);
            v36 = vqrdmulhq_lane_s32(v48.val[0], v35, 1);
            PSEUDO_LOW_LANE128(v50.val[0], n128_u64, LANES64(a3[1]).n64_u64[0]);
            a3 += 2;
            v48.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v48.val[0], v35, 0),
                                   vqrdmulhq_lane_s32(v48.val[1], v35, 1));
            v48.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v48.val[1], v35, 0), v36);
            v37 = vqrdmulhq_lane_s32(
                v45.val[0],
                COERCE_AS(int32x2_t, LANES128(v50.val[0]).n128_u64[0]), 1);
            v45.val[0] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v45.val[0],
                    COERCE_AS(int32x2_t, LANES128(v50.val[0]).n128_u64[0]), 0),
                vqrdmulhq_lane_s32(
                    v45.val[1],
                    COERCE_AS(int32x2_t, LANES128(v50.val[0]).n128_u64[0]), 1));
            v45.val[1] = vaddq_s32(
                vqrdmulhq_lane_s32(
                    v45.val[1],
                    COERCE_AS(int32x2_t, LANES128(v50.val[0]).n128_u64[0]), 0),
                v37);
            v51 = vld2q_f32(v28);
            v38 = vaddq_s32(v45.val[0], v48.val[0]);
            v39 = vaddq_s32(v45.val[1], v48.val[1]);
            v45.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v45.val[0], v48.val[0]));
            v45.val[1] = vqrdmulhq_s32(v6, vsubq_s32(v45.val[1], v48.val[1]));
            v53.val[0] = vaddq_s32(v38, v51.val[0]);
            v53.val[1] = vaddq_s32(v39, v51.val[1]);
            v48.val[0] = vsubq_s32(v51.val[0], vshrq_n_s32(v38, 1u));
            v48.val[1] = vsubq_s32(v51.val[1], vshrq_n_s32(v39, 1u));
            vst2q_f32(v25 + 8, v53);
            v51.val[0] = vaddq_s32(v45.val[1], v48.val[0]);
            v51.val[1] = vsubq_s32(v48.val[1], v45.val[0]);
            v42.val[0] = vsubq_s32(v48.val[0], v45.val[1]);
            v42.val[1] = vaddq_s32(v45.val[0], v48.val[1]);
            vst2q_f32(v26 + 8, v42);
            vst2q_f32(v27 + 8, v51);
          } while (v21 > 2);
          result = (float*)((char*)result + v23 * 4);
          a2 = (const float*)((char*)a2 + v23 * 4);
        }
      }
      else {
        v12 = a5;
        if (a5 != 1) {
          goto LABEL_9;
        }
      }
      result += 16 * (__int64)a5;
      a3 -= a5;
      v11 = __OFSUB__(a4--, 1);
    } while (!((a4 < 0) ^ v11 | (a4 == 0)));
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_214c20(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  int v13;
  const float* v14;
  const float* v15;
  int32x2_t v16;
  float* v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x2_t v21;
  int32x4_t v22;
  int32x2_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  float* v27;
  int v28;
  char* v29;
  __int64 v30;
  int32x2_t* v31;
  int32x2_t* v32;
  const float* v33;
  char* v34;
  const float* v35;
  const float* v36;
  float* v37;
  float* v38;
  float* v39;
  const float* v40;
  const float* v41;
  int32x2_t v42;
  float* v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x2_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  int32x4_t v52;
  int32x2_t v53;
  int32x2_t v54;
  __int64 v55;
  __int64 v56;
  float32x4x2_t v57;
  float32x4x2_t v58;
  float32x4x2_t v59;
  float32x4x2_t v60;
  float32x4x2_t v61;
  float32x4x2_t v62;
  float32x4x2_t v63;
  float32x4x2_t v64;
  float32x4x2_t v65;
  float32x4x2_t v66;
  float32x4x2_t v67;
  float32x4x2_t v68;
  float32x4x2_t v69;
  float32x4x2_t v70;
  float32x4x2_t v71;
  float32x4x2_t v72;
  float32x4x2_t v73;
  float32x4x2_t v74;
  float32x4x2_t v75;
  float32x4x2_t v76;
  float32x4x2_t v77;

  if (a4 >= 1) {
    v6 = a6 + 3;
    if (a6 >= 0) {
      v6 = a6;
    }
    if (a5 >= 1) {
      v7 = (__int64)v6 >> 2;
      v8 = 2 * a5;
      v9 = 8 * v7;
      v10 = 8LL * a5;
      v11 = 32 * v7 + 32;
      v55 = (v7 << 6) | 0x20;
      v56 = 24 * v7;
      do {
        if ((a5 & 1) != 0) {
          v14 = &a2[v9];
          v62 = vld2q_f32(a2);
          a2 += 8;
          v65 = vld2q_f32(v14);
          v15 = &v14[v9];
          v68 = vld2q_f32(v15);
          PSEUDO_LOW_LANE64(v16, n64_u64, (unsigned __int64)a3[v8]);
          v71 = vld2q_f32(&v15[v9]);
          v17 = &result[v10];
          v18 = vqrdmulhq_lane_s32(v71.val[0], v16, 0);
          v19 = vqrdmulhq_lane_s32(v71.val[0], v16, 1);
          v20 = vqrdmulhq_lane_s32(v71.val[1], v16, 0);
          v71.val[0] = vqrdmulhq_lane_s32(v71.val[1], v16, 1);
          PSEUDO_LOW_LANE64(v21, n64_u64, (unsigned __int64)a3[a5]);
          v71.val[0] = vsubq_s32(v18, v71.val[0]);
          v71.val[1] = vaddq_s32(v20, v19);
          v22 = vqrdmulhq_lane_s32(v68.val[0], v21, 1);
          PSEUDO_LOW_LANE64(v23, n64_u64, LANES64(*(a3)).n64_u64[0]);
          ++a3;
          v68.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v68.val[0], v21, 0),
                                 vqrdmulhq_lane_s32(v68.val[1], v21, 1));
          v68.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v68.val[1], v21, 0), v22);
          v24 = vqrdmulhq_lane_s32(v65.val[0], v23, 1);
          v25 = vaddq_s32(v68.val[0], v62.val[0]);
          v68.val[0] = vsubq_s32(v62.val[0], v68.val[0]);
          v62.val[0] = vsubq_s32(v62.val[1], v68.val[1]);
          v65.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v65.val[0], v23, 0),
                                 vqrdmulhq_lane_s32(v65.val[1], v23, 1));
          v65.val[1] = vaddq_s32(vqrdmulhq_lane_s32(v65.val[1], v23, 0), v24);
          v26 = vaddq_s32(v68.val[1], v62.val[1]);
          v62.val[1] = vaddq_s32(v65.val[0], v71.val[0]);
          v68.val[1] = vaddq_s32(v65.val[1], v71.val[1]);
          v65.val[0] = vsubq_s32(v65.val[0], v71.val[0]);
          v65.val[1] = vsubq_s32(v65.val[1], v71.val[1]);
          v71.val[0] = vsubq_s32(v25, v62.val[1]);
          v71.val[1] = vsubq_s32(v26, v68.val[1]);
          v76.val[0] = vaddq_s32(v62.val[1], v25);
          v76.val[1] = vaddq_s32(v68.val[1], v26);
          v74.val[0] = vaddq_s32(v65.val[1], v68.val[0]);
          v74.val[1] = vsubq_s32(v62.val[0], v65.val[0]);
          vst2q_f32(result, v76);
          result += 8;
          vst2q_f32(v17, v74);
          v27 = &v17[v10];
          vst2q_f32(v27, v71);
          v57.val[0] = vsubq_s32(v68.val[0], v65.val[1]);
          v57.val[1] = vaddq_s32(v65.val[0], v62.val[0]);
          vst2q_f32(&v27[v10], v57);
          v13 = a5 - 1;
          if (a5 != 1) {
          LABEL_11:
            v28 = v13 + 2;
            v29 = (char*)a2 + v11;
            v30 = 0;
            v31 = &a3[v8 + 1];
            v32 = &a3[a5 + 1];
            v33 = &a2[v56];
            v34 = (char*)a2 + v55;
            do {
              v35 = (const float*)&v29[v30 * 4];
              v36 = (const float*)&v34[v30 * 4];
              v37 = &result[v30];
              v38 = &result[v10 + v30];
              v39 = &result[16 * (__int64)a5 + v30];
              v28 -= 2;
              v63 = vld2q_f32(&a2[v30]);
              v40 = &a2[v30 + 8];
              v66 = vld2q_f32((const float*)&v29[v30 * 4 - 32]);
              v69 = vld2q_f32((const float*)&v34[v30 * 4 - 32]);
              v72 = vld2q_f32(&v33[v30]);
              v41 = &v33[v30 + 8];
              PSEUDO_LOW_LANE64(v42, n64_u64, LANES64(v31[-1]).n64_u64[0]);
              v43 = &result[24 * a5 + v30];
              v30 += 16;
              v44 = vqrdmulhq_lane_s32(v72.val[0], v42, 0);
              v45 = vqrdmulhq_lane_s32(v72.val[0], v42, 1);
              v46 = vqrdmulhq_lane_s32(v72.val[1], v42, 0);
              v72.val[0] = vqrdmulhq_lane_s32(v72.val[1], v42, 1);
              PSEUDO_LOW_LANE64(v47, n64_u64, LANES64(v32[-1]).n64_u64[0]);
              v72.val[0] = vsubq_s32(v44, v72.val[0]);
              v72.val[1] = vaddq_s32(v46, v45);
              v48 = vqrdmulhq_lane_s32(v69.val[0], v47, 1);
              v69.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v69.val[0], v47, 0),
                                     vqrdmulhq_lane_s32(v69.val[1], v47, 1));
              v49 = vaddq_s32(vqrdmulhq_lane_s32(v69.val[1], v47, 0), v48);
              v50 = vqrdmulhq_lane_s32(
                  v66.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                  1);
              v69.val[1] = vaddq_s32(v69.val[0], v63.val[0]);
              v69.val[0] = vsubq_s32(v63.val[0], v69.val[0]);
              v63.val[0] = vsubq_s32(v63.val[1], v49);
              v66.val[0] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v66.val[0],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                  vqrdmulhq_lane_s32(
                      v66.val[1],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v66.val[1] = vaddq_s32(
                  vqrdmulhq_lane_s32(
                      v66.val[1],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                  v50);
              v51 = vaddq_s32(v49, v63.val[1]);
              v63.val[1] = vaddq_s32(v66.val[0], v72.val[0]);
              v52 = vaddq_s32(v66.val[1], v72.val[1]);
              v66.val[0] = vsubq_s32(v66.val[0], v72.val[0]);
              v66.val[1] = vsubq_s32(v66.val[1], v72.val[1]);
              v72.val[0] = vsubq_s32(v69.val[1], v63.val[1]);
              v72.val[1] = vsubq_s32(v51, v52);
              v77.val[0] = vaddq_s32(v63.val[1], v69.val[1]);
              v77.val[1] = vaddq_s32(v52, v51);
              v75.val[0] = vaddq_s32(v66.val[1], v69.val[0]);
              v75.val[1] = vsubq_s32(v63.val[0], v66.val[0]);
              vst2q_f32(v37, v77);
              vst2q_f32(v38, v75);
              vst2q_f32(v39, v72);
              v58.val[0] = vsubq_s32(v69.val[0], v66.val[1]);
              v58.val[1] = vaddq_s32(v66.val[0], v63.val[0]);
              vst2q_f32(v43, v58);
              v73 = vld2q_f32(v41);
              PSEUDO_LOW_LANE64(v53, n64_u64, LANES64(*(v31)).n64_u64[0]);
              v31 += 2;
              v70 = vld2q_f32(v36);
              v67 = vld2q_f32(v35);
              v64 = vld2q_f32(v40);
              v75.val[1] = vqrdmulhq_lane_s32(v73.val[0], v53, 0);
              v77.val[0] = vqrdmulhq_lane_s32(v73.val[0], v53, 1);
              v77.val[1] = vqrdmulhq_lane_s32(v73.val[1], v53, 0);
              v73.val[0] = vqrdmulhq_lane_s32(v73.val[1], v53, 1);
              PSEUDO_LOW_LANE64(v54, n64_u64, LANES64(*(v32)).n64_u64[0]);
              v32 += 2;
              v73.val[0] = vsubq_s32(v75.val[1], v73.val[0]);
              v77.val[0] = vaddq_s32(v77.val[1], v77.val[0]);
              v75.val[1] = vqrdmulhq_lane_s32(v70.val[0], v54, 1);
              PSEUDO_LOW_LANE128(v73.val[1], n128_u64,
                                 LANES64(a3[1]).n64_u64[0]);
              a3 += 2;
              v70.val[0] = vsubq_s32(vqrdmulhq_lane_s32(v70.val[0], v54, 0),
                                     vqrdmulhq_lane_s32(v70.val[1], v54, 1));
              v70.val[1] =
                  vaddq_s32(vqrdmulhq_lane_s32(v70.val[1], v54, 0), v75.val[1]);
              v75.val[0] = vqrdmulhq_lane_s32(
                  v67.val[0],
                  COERCE_AS(int32x2_t, LANES128(v73.val[1]).n128_u64[0]), 0);
              v75.val[1] = vqrdmulhq_lane_s32(
                  v67.val[0],
                  COERCE_AS(int32x2_t, LANES128(v73.val[1]).n128_u64[0]), 1);
              v77.val[1] = vqrdmulhq_lane_s32(
                  v67.val[1],
                  COERCE_AS(int32x2_t, LANES128(v73.val[1]).n128_u64[0]), 0);
              v67.val[0] = vqrdmulhq_lane_s32(
                  v67.val[1],
                  COERCE_AS(int32x2_t, LANES128(v73.val[1]).n128_u64[0]), 1);
              v73.val[1] = vaddq_s32(v70.val[0], v64.val[0]);
              v70.val[0] = vsubq_s32(v64.val[0], v70.val[0]);
              v64.val[0] = vsubq_s32(v64.val[1], v70.val[1]);
              v67.val[0] = vsubq_s32(v75.val[0], v67.val[0]);
              v67.val[1] = vaddq_s32(v77.val[1], v75.val[1]);
              v75.val[0] = vaddq_s32(v70.val[1], v64.val[1]);
              v64.val[1] = vaddq_s32(v67.val[0], v73.val[0]);
              v70.val[1] = vaddq_s32(v67.val[1], v77.val[0]);
              v67.val[0] = vsubq_s32(v67.val[0], v73.val[0]);
              v67.val[1] = vsubq_s32(v67.val[1], v77.val[0]);
              v75.val[1] = vsubq_s32(v73.val[1], v64.val[1]);
              v73.val[0] = vaddq_s32(v64.val[1], v73.val[1]);
              v73.val[1] = vaddq_s32(v70.val[1], v75.val[0]);
              vst2q_f32(v37 + 8, v73);
              v59.val[0] = vaddq_s32(v67.val[1], v70.val[0]);
              v59.val[1] = vsubq_s32(v64.val[0], v67.val[0]);
              vst2q_f32(v38 + 8, v59);
              v60.val[0] = v75.val[1];
              v60.val[1] = vsubq_s32(v75.val[0], v70.val[1]);
              vst2q_f32(v39 + 8, v60);
              v61.val[0] = vsubq_s32(v70.val[0], v67.val[1]);
              v61.val[1] = vaddq_s32(v67.val[0], v64.val[0]);
              vst2q_f32(v43 + 8, v61);
            } while (v28 > 2);
            result = (float*)((char*)result + v30 * 4);
            a2 = (const float*)((char*)a2 + v30 * 4);
          }
        }
        else {
          v13 = a5;
          if (a5 != 1) {
            goto LABEL_11;
          }
        }
        result += 24 * a5;
        a3 -= a5;
        v12 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v12 | (a4 == 0)));
    }
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_216740(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  float32x4_t v6;
  int32x4_t v7;
  float32x4_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  const float* v15;
  float* v16;
  int32x2_t v17;
  int32x4_t v18;
  int32x2_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int v23;
  int32x2_t* v24;
  __int64 v25;
  const float* v26;
  float* v27;
  float* v28;
  float* v29;
  const float* v30;
  const float* v31;
  int32x4_t v32;
  int32x2_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;
  float32x4x2_t v46;
  float32x4x2_t v47;
  float32x4x2_t v48;
  float32x4x2_t v49;
  float32x4x2_t v50;
  float32x4x2_t v51;
  float32x4x2_t v52;
  float32x4x2_t v53;

  if (a4 >= 1 && a5 >= 1) {
    LANES128(v6).n128_u64[0] = 0xAAAAAAAAAAAAAAAALL;
    LANES128(v6).n128_u64[1] = 0xAAAAAAAAAAAAAAAALL;
    v7 = vdupq_n_s32(0x9126145F);
    v8 = vnegq_f32(v6);
    v9 = a6 / 3;
    v10 = v9 << 6;
    v11 = 8 * v9;
    v12 = 8LL * a5;
    do {
      if ((a5 & 1) != 0) {
        v15 = &a2[v11];
        v41 = vld2q_f32(a2);
        a2 += 8;
        v14 = a5 - 1;
        v44 = vld2q_f32(v15);
        v47 = vld2q_f32(&v15[v11]);
        v41.val[0] = vqrdmulhq_s32(v41.val[0], v8);
        v16 = &result[v12];
        v44.val[0] = vqrdmulhq_s32(v44.val[0], v8);
        v47.val[0] = vqrdmulhq_s32(v47.val[0], v8);
        v41.val[1] = vqrdmulhq_s32(vnegq_s32(v41.val[1]), v8);
        PSEUDO_LOW_LANE64(v17, n64_u64, (unsigned __int64)a3[a5]);
        v44.val[1] = vqrdmulhq_s32(vnegq_s32(v44.val[1]), v8);
        v47.val[1] = vqrdmulhq_s32(vnegq_s32(v47.val[1]), v8);
        v18 = vqrdmulhq_lane_s32(v47.val[1], v17, 0);
        PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(*(a3)).n64_u64[0]);
        ++a3;
        v47.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v47.val[0], v17, 0),
                               vqrdmulhq_lane_s32(v47.val[1], v17, 1));
        v47.val[0] = vaddq_s32(v18, vqrdmulhq_lane_s32(v47.val[0], v17, 1));
        v20 = vqrdmulhq_lane_s32(v44.val[1], v19, 0);
        v44.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v44.val[0], v19, 0),
                               vqrdmulhq_lane_s32(v44.val[1], v19, 1));
        v44.val[0] = vaddq_s32(v20, vqrdmulhq_lane_s32(v44.val[0], v19, 1));
        v21 = vaddq_s32(v44.val[1], v47.val[1]);
        v22 = vaddq_s32(v44.val[0], v47.val[0]);
        v44.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v44.val[1], v47.val[1]));
        v44.val[0] = vqrdmulhq_s32(v7, vsubq_s32(v44.val[0], v47.val[0]));
        v52.val[0] = vaddq_s32(v21, v41.val[0]);
        v47.val[0] = vsubq_s32(v41.val[0], vshrq_n_s32(v21, 1u));
        v47.val[1] = vsubq_s32(v41.val[1], vshrq_n_s32(v22, 1u));
        v52.val[1] = vnegq_s32(vaddq_s32(v41.val[1], v22));
        v41.val[0] = vaddq_s32(v44.val[0], v47.val[0]);
        v50.val[0] = vsubq_s32(v47.val[0], v44.val[0]);
        v41.val[1] = vsubq_s32(v44.val[1], v47.val[1]);
        v50.val[1] = vnegq_s32(vaddq_s32(v44.val[1], v47.val[1]));
        vst2q_f32(result, v52);
        result += 8;
        vst2q_f32(v16, v50);
        vst2q_f32(&v16[v12], v41);
        if (a5 != 1) {
        LABEL_9:
          v23 = v14 + 2;
          v24 = &a3[a5 + 1];
          v25 = 0;
          do {
            v26 = &a2[v11 + 8 + v25];
            v27 = &result[v25];
            v28 = &result[v12 + v25];
            v29 = &result[16 * (__int64)a5 + v25];
            v23 -= 2;
            v42 = vld2q_f32(&a2[v25]);
            v30 = &a2[v25 + 8];
            v45 = vld2q_f32(&a2[v11 + v25]);
            v31 = (const float*)((char*)a2 + v10 + v25 * 4);
            v25 += 16;
            v48 = vld2q_f32(v31);
            v42.val[0] = vqrdmulhq_s32(v42.val[0], v8);
            v45.val[0] = vqrdmulhq_s32(v45.val[0], v8);
            v32 = vnegq_s32(v48.val[1]);
            v48.val[0] = vqrdmulhq_s32(v48.val[0], v8);
            v42.val[1] = vqrdmulhq_s32(vnegq_s32(v42.val[1]), v8);
            PSEUDO_LOW_LANE64(v33, n64_u64, LANES64(v24[-1]).n64_u64[0]);
            v48.val[1] = vqrdmulhq_s32(vnegq_s32(v45.val[1]), v8);
            v45.val[1] = vqrdmulhq_s32(v32, v8);
            v34 = vqrdmulhq_lane_s32(v45.val[1], v33, 0);
            v45.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v48.val[0], v33, 0),
                                   vqrdmulhq_lane_s32(v45.val[1], v33, 1));
            v48.val[0] = vaddq_s32(v34, vqrdmulhq_lane_s32(v48.val[0], v33, 1));
            v35 = vqrdmulhq_lane_s32(
                v48.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0);
            v48.val[1] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v45.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    0),
                vqrdmulhq_lane_s32(
                    v48.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    1));
            v45.val[0] = vaddq_s32(
                v35, vqrdmulhq_lane_s32(
                         v45.val[0],
                         COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
            v36 = vaddq_s32(v48.val[1], v45.val[1]);
            v37 = vaddq_s32(v45.val[0], v48.val[0]);
            v45.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v48.val[1], v45.val[1]));
            v45.val[0] = vqrdmulhq_s32(v7, vsubq_s32(v45.val[0], v48.val[0]));
            v53.val[0] = vaddq_s32(v36, v42.val[0]);
            v48.val[0] = vsubq_s32(v42.val[0], vshrq_n_s32(v36, 1u));
            v48.val[1] = vsubq_s32(v42.val[1], vshrq_n_s32(v37, 1u));
            v53.val[1] = vnegq_s32(vaddq_s32(v42.val[1], v37));
            v42.val[0] = vaddq_s32(v45.val[0], v48.val[0]);
            v51.val[0] = vsubq_s32(v48.val[0], v45.val[0]);
            v42.val[1] = vsubq_s32(v45.val[1], v48.val[1]);
            v51.val[1] = vnegq_s32(vaddq_s32(v45.val[1], v48.val[1]));
            vst2q_f32(v27, v53);
            vst2q_f32(v28, v51);
            vst2q_f32(v29, v42);
            v43 = vld2q_f32(v30);
            v49 = vld2q_f32(v31 + 8);
            v46 = vld2q_f32(v26);
            v43.val[0] = vqrdmulhq_s32(v43.val[0], v8);
            v49.val[0] = vqrdmulhq_s32(v49.val[0], v8);
            v46.val[0] = vqrdmulhq_s32(v46.val[0], v8);
            v43.val[1] = vqrdmulhq_s32(vnegq_s32(v43.val[1]), v8);
            PSEUDO_LOW_LANE64(v38, n64_u64, LANES64(*(v24)).n64_u64[0]);
            v24 += 2;
            v49.val[1] = vqrdmulhq_s32(vnegq_s32(v49.val[1]), v8);
            v46.val[1] = vqrdmulhq_s32(vnegq_s32(v46.val[1]), v8);
            v53.val[0] = vqrdmulhq_lane_s32(v49.val[1], v38, 0);
            PSEUDO_LOW_LANE128(v51.val[0], n128_u64, LANES64(a3[1]).n64_u64[0]);
            a3 += 2;
            v49.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v49.val[0], v38, 0),
                                   vqrdmulhq_lane_s32(v49.val[1], v38, 1));
            v49.val[0] =
                vaddq_s32(v53.val[0], vqrdmulhq_lane_s32(v49.val[0], v38, 1));
            v53.val[0] = vqrdmulhq_lane_s32(
                v46.val[1],
                COERCE_AS(int32x2_t, LANES128(v51.val[0]).n128_u64[0]), 0);
            v46.val[1] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v46.val[0],
                    COERCE_AS(int32x2_t, LANES128(v51.val[0]).n128_u64[0]), 0),
                vqrdmulhq_lane_s32(
                    v46.val[1],
                    COERCE_AS(int32x2_t, LANES128(v51.val[0]).n128_u64[0]), 1));
            v46.val[0] = vaddq_s32(
                v53.val[0],
                vqrdmulhq_lane_s32(
                    v46.val[0],
                    COERCE_AS(int32x2_t, LANES128(v51.val[0]).n128_u64[0]), 1));
            v51.val[0] = vaddq_s32(v46.val[0], v49.val[0]);
            v51.val[1] = vaddq_s32(v46.val[1], v49.val[1]);
            v46.val[0] = vsubq_s32(v46.val[0], v49.val[0]);
            v49.val[0] = vshrq_n_s32(v51.val[1], 1u);
            v46.val[1] = vqrdmulhq_s32(v7, vsubq_s32(v46.val[1], v49.val[1]));
            v46.val[0] = vqrdmulhq_s32(v7, v46.val[0]);
            v51.val[1] = vaddq_s32(v51.val[1], v43.val[0]);
            v49.val[0] = vsubq_s32(v43.val[0], v49.val[0]);
            v49.val[1] = vsubq_s32(v43.val[1], vshrq_n_s32(v51.val[0], 1u));
            v53.val[0] = vnegq_s32(vaddq_s32(v43.val[1], v51.val[0]));
            v43.val[0] = vaddq_s32(v46.val[0], v49.val[0]);
            v43.val[1] = vsubq_s32(v46.val[1], v49.val[1]);
            v39.val[0] = v51.val[1];
            v39.val[1] = v53.val[0];
            vst2q_f32(v27 + 8, v39);
            v40.val[0] = vsubq_s32(v49.val[0], v46.val[0]);
            v40.val[1] = vnegq_s32(vaddq_s32(v46.val[1], v49.val[1]));
            vst2q_f32(v28 + 8, v40);
            vst2q_f32(v29 + 8, v43);
          } while (v23 > 2);
          result = (float*)((char*)result + v25 * 4);
          a2 = (const float*)((char*)a2 + v25 * 4);
        }
      }
      else {
        v14 = a5;
        if (a5 != 1) {
          goto LABEL_9;
        }
      }
      result += 16 * (__int64)a5;
      a3 -= a5;
      v13 = __OFSUB__(a4--, 1);
    } while (!((a4 < 0) ^ v13 | (a4 == 0)));
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_216ac0(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  int32x4_t v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  const float* v15;
  const float* v16;
  float* v17;
  int32x2_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x2_t v24;
  int32x4_t v25;
  int32x4_t v26;
  float* v27;
  int v28;
  char* v29;
  __int64 v30;
  int32x2_t* v31;
  int32x2_t* v32;
  char* v33;
  const float* v34;
  const float* v35;
  float* v36;
  float* v37;
  float* v38;
  const float* v39;
  const float* v40;
  float* v41;
  int32x2_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x2_t v50;
  int32x4_t v51;
  int32x4_t v52;
  int32x2_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  __int64 v57;
  __int64 v58;
  float32x4x2_t v59;
  float32x4x2_t v60;
  float32x4x2_t v61;
  float32x4x2_t v62;
  float32x4x2_t v63;
  float32x4x2_t v64;
  float32x4x2_t v65;
  float32x4x2_t v66;
  float32x4x2_t v67;
  float32x4x2_t v68;
  float32x4x2_t v69;
  float32x4x2_t v70;
  float32x4x2_t v71;
  float32x4x2_t v72;
  float32x4x2_t v73;
  float32x4x2_t v74;
  float32x4x2_t v75;

  if (a4 >= 1) {
    v6 = a6 + 3;
    if (a6 >= 0) {
      v6 = a6;
    }
    if (a5 >= 1) {
      v7 = (__int64)v6 >> 2;
      LANES128(v8).n128_u64[0] = 0x2000000020000000LL;
      LANES128(v8).n128_u64[1] = 0x2000000020000000LL;
      v9 = 2 * a5;
      v10 = 8 * v7;
      v11 = 8LL * a5;
      v12 = 32 * v7 + 32;
      v57 = (v7 << 6) | 0x20;
      v58 = 24 * v7;
      do {
        if ((a5 & 1) != 0) {
          v15 = &a2[v10];
          v60 = vld2q_f32(a2);
          a2 += 8;
          v63 = vld2q_f32(v15);
          v16 = &v15[v10];
          v66 = vld2q_f32(v16);
          v69 = vld2q_f32(&v16[v10]);
          v60.val[0] = vqrdmulhq_s32(v60.val[0], v8);
          v17 = &result[v11];
          v63.val[0] = vqrdmulhq_s32(v63.val[0], v8);
          v66.val[0] = vqrdmulhq_s32(v66.val[0], v8);
          v69.val[0] = vqrdmulhq_s32(v69.val[0], v8);
          v60.val[1] = vqrdmulhq_s32(vnegq_s32(v60.val[1]), v8);
          PSEUDO_LOW_LANE64(v18, n64_u64, (unsigned __int64)a3[v9]);
          v63.val[1] = vqrdmulhq_s32(vnegq_s32(v63.val[1]), v8);
          v66.val[1] = vqrdmulhq_s32(vnegq_s32(v66.val[1]), v8);
          v69.val[1] = vqrdmulhq_s32(vnegq_s32(v69.val[1]), v8);
          v19 = vqrdmulhq_lane_s32(v69.val[0], v18, 0);
          v69.val[0] = vqrdmulhq_lane_s32(v69.val[0], v18, 1);
          v20 = vqrdmulhq_lane_s32(v69.val[1], v18, 0);
          v21 = vqrdmulhq_lane_s32(v69.val[1], v18, 1);
          PSEUDO_LOW_LANE128(v69.val[1], n128_u64, (unsigned __int64)a3[a5]);
          v22 = vsubq_s32(v19, v21);
          v69.val[0] = vaddq_s32(v20, v69.val[0]);
          v23 = vqrdmulhq_lane_s32(
              v66.val[1],
              COERCE_AS(int32x2_t, LANES128(v69.val[1]).n128_u64[0]), 0);
          PSEUDO_LOW_LANE64(v24, n64_u64, LANES64(*(a3)).n64_u64[0]);
          ++a3;
          v66.val[1] = vsubq_s32(
              vqrdmulhq_lane_s32(
                  v66.val[0],
                  COERCE_AS(int32x2_t, LANES128(v69.val[1]).n128_u64[0]), 0),
              vqrdmulhq_lane_s32(
                  v66.val[1],
                  COERCE_AS(int32x2_t, LANES128(v69.val[1]).n128_u64[0]), 1));
          v66.val[0] = vaddq_s32(
              v23,
              vqrdmulhq_lane_s32(
                  v66.val[0],
                  COERCE_AS(int32x2_t, LANES128(v69.val[1]).n128_u64[0]), 1));
          v25 = vqrdmulhq_lane_s32(v63.val[1], v24, 0);
          v69.val[1] = vaddq_s32(v66.val[1], v60.val[0]);
          v60.val[0] = vsubq_s32(v60.val[0], v66.val[1]);
          v63.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v63.val[0], v24, 0),
                                 vqrdmulhq_lane_s32(v63.val[1], v24, 1));
          v63.val[0] = vaddq_s32(v25, vqrdmulhq_lane_s32(v63.val[0], v24, 1));
          v26 = vaddq_s32(v66.val[0], v60.val[1]);
          v60.val[1] = vsubq_s32(v60.val[1], v66.val[0]);
          v66.val[0] = vaddq_s32(v63.val[1], v22);
          v66.val[1] = vaddq_s32(v63.val[0], v69.val[0]);
          v63.val[1] = vsubq_s32(v63.val[1], v22);
          v63.val[0] = vsubq_s32(v63.val[0], v69.val[0]);
          v72.val[0] = vsubq_s32(v69.val[1], v66.val[0]);
          v69.val[0] = vaddq_s32(v66.val[0], v69.val[1]);
          v72.val[1] = vsubq_s32(v66.val[1], v26);
          v74.val[0] = vsubq_s32(v60.val[0], v63.val[0]);
          v69.val[1] = vnegq_s32(vaddq_s32(v26, v66.val[1]));
          v66.val[0] = vaddq_s32(v63.val[0], v60.val[0]);
          v66.val[1] = vsubq_s32(v63.val[1], v60.val[1]);
          v74.val[1] = vnegq_s32(vaddq_s32(v60.val[1], v63.val[1]));
          vst2q_f32(result, v69);
          result += 8;
          vst2q_f32(v17, v66);
          v27 = &v17[v11];
          vst2q_f32(v27, v72);
          vst2q_f32(&v27[v11], v74);
          v14 = a5 - 1;
          if (a5 != 1) {
          LABEL_11:
            v28 = v14 + 2;
            v29 = (char*)a2 + v12;
            v30 = 0;
            v31 = &a3[v9 + 1];
            v32 = &a3[a5 + 1];
            v33 = (char*)a2 + v57;
            do {
              v34 = (const float*)&v29[v30 * 4];
              v35 = (const float*)&v33[v30 * 4];
              v36 = &result[v30];
              v37 = &result[16 * (__int64)a5 + v30];
              v38 = &result[24 * a5 + v30];
              v28 -= 2;
              v61 = vld2q_f32(&a2[v30]);
              v39 = &a2[v30 + 8];
              v64 = vld2q_f32((const float*)&v29[v30 * 4 - 32]);
              v40 = &a2[v58 + v30];
              v67 = vld2q_f32((const float*)&v33[v30 * 4 - 32]);
              v41 = &result[v11 + v30];
              v30 += 16;
              v70 = vld2q_f32(v40);
              v61.val[0] = vqrdmulhq_s32(v61.val[0], v8);
              v67.val[0] = vqrdmulhq_s32(v67.val[0], v8);
              v64.val[0] = vqrdmulhq_s32(v64.val[0], v8);
              v70.val[0] = vqrdmulhq_s32(v70.val[0], v8);
              v61.val[1] = vqrdmulhq_s32(vnegq_s32(v61.val[1]), v8);
              PSEUDO_LOW_LANE64(v42, n64_u64, LANES64(v31[-1]).n64_u64[0]);
              v67.val[1] = vqrdmulhq_s32(vnegq_s32(v67.val[1]), v8);
              v64.val[1] = vqrdmulhq_s32(vnegq_s32(v64.val[1]), v8);
              v70.val[1] = vqrdmulhq_s32(vnegq_s32(v70.val[1]), v8);
              v43 = vqrdmulhq_lane_s32(v70.val[0], v42, 0);
              v70.val[0] = vqrdmulhq_lane_s32(v70.val[0], v42, 1);
              v44 = vqrdmulhq_lane_s32(v70.val[1], v42, 0);
              v45 = vqrdmulhq_lane_s32(v70.val[1], v42, 1);
              PSEUDO_LOW_LANE128(v70.val[1], n128_u64,
                                 LANES64(v32[-1]).n64_u64[0]);
              v46 = vsubq_s32(v43, v45);
              v70.val[0] = vaddq_s32(v44, v70.val[0]);
              v47 = vqrdmulhq_lane_s32(
                  v67.val[1],
                  COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 0);
              v67.val[1] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v67.val[0],
                      COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]),
                      0),
                  vqrdmulhq_lane_s32(
                      v67.val[1],
                      COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]),
                      1));
              v67.val[0] = vaddq_s32(
                  v47,
                  vqrdmulhq_lane_s32(
                      v67.val[0],
                      COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]),
                      1));
              v48 = vqrdmulhq_lane_s32(
                  v64.val[1], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                  0);
              v70.val[1] = vaddq_s32(v67.val[1], v61.val[0]);
              v61.val[0] = vsubq_s32(v61.val[0], v67.val[1]);
              v64.val[1] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v64.val[0],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                  vqrdmulhq_lane_s32(
                      v64.val[1],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v64.val[0] = vaddq_s32(
                  v48, vqrdmulhq_lane_s32(
                           v64.val[0],
                           COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v49 = vaddq_s32(v67.val[0], v61.val[1]);
              v61.val[1] = vsubq_s32(v61.val[1], v67.val[0]);
              v67.val[0] = vaddq_s32(v64.val[1], v46);
              v67.val[1] = vaddq_s32(v64.val[0], v70.val[0]);
              v64.val[1] = vsubq_s32(v64.val[1], v46);
              v64.val[0] = vsubq_s32(v64.val[0], v70.val[0]);
              v73.val[0] = vsubq_s32(v70.val[1], v67.val[0]);
              v70.val[0] = vaddq_s32(v67.val[0], v70.val[1]);
              v73.val[1] = vsubq_s32(v67.val[1], v49);
              v75.val[0] = vsubq_s32(v61.val[0], v64.val[0]);
              v70.val[1] = vnegq_s32(vaddq_s32(v49, v67.val[1]));
              v67.val[0] = vaddq_s32(v64.val[0], v61.val[0]);
              v67.val[1] = vsubq_s32(v64.val[1], v61.val[1]);
              v75.val[1] = vnegq_s32(vaddq_s32(v61.val[1], v64.val[1]));
              vst2q_f32(v36, v70);
              vst2q_f32(v41, v67);
              vst2q_f32(v37, v73);
              vst2q_f32(v38, v75);
              v71 = vld2q_f32(v40 + 8);
              v62 = vld2q_f32(v39);
              v65 = vld2q_f32(v34);
              v68 = vld2q_f32(v35);
              v62.val[0] = vqrdmulhq_s32(v62.val[0], v8);
              PSEUDO_LOW_LANE64(v50, n64_u64, LANES64(*(v31)).n64_u64[0]);
              v31 += 2;
              v71.val[0] = vqrdmulhq_s32(v71.val[0], v8);
              v68.val[0] = vqrdmulhq_s32(v68.val[0], v8);
              v65.val[0] = vqrdmulhq_s32(v65.val[0], v8);
              v71.val[1] = vqrdmulhq_s32(vnegq_s32(v71.val[1]), v8);
              v68.val[1] = vqrdmulhq_s32(vnegq_s32(v68.val[1]), v8);
              v65.val[1] = vqrdmulhq_s32(vnegq_s32(v65.val[1]), v8);
              v51 = vqrdmulhq_s32(vnegq_s32(v62.val[1]), v8);
              v52 = vqrdmulhq_lane_s32(v71.val[0], v50, 0);
              v71.val[0] = vqrdmulhq_lane_s32(v71.val[0], v50, 1);
              v73.val[0] = vqrdmulhq_lane_s32(v71.val[1], v50, 0);
              v62.val[1] = vqrdmulhq_lane_s32(v71.val[1], v50, 1);
              PSEUDO_LOW_LANE64(v53, n64_u64, LANES64(*(v32)).n64_u64[0]);
              v32 += 2;
              v62.val[1] = vsubq_s32(v52, v62.val[1]);
              v71.val[0] = vaddq_s32(v73.val[0], v71.val[0]);
              v73.val[0] = vqrdmulhq_lane_s32(v68.val[1], v53, 0);
              PSEUDO_LOW_LANE128(v71.val[1], n128_u64,
                                 LANES64(a3[1]).n64_u64[0]);
              a3 += 2;
              v68.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v68.val[0], v53, 0),
                                     vqrdmulhq_lane_s32(v68.val[1], v53, 1));
              v68.val[0] =
                  vaddq_s32(v73.val[0], vqrdmulhq_lane_s32(v68.val[0], v53, 1));
              v54 = vqrdmulhq_lane_s32(
                  v65.val[0],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 0);
              v65.val[0] = vqrdmulhq_lane_s32(
                  v65.val[0],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 1);
              v73.val[0] = vqrdmulhq_lane_s32(
                  v65.val[1],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 0);
              v65.val[1] = vqrdmulhq_lane_s32(
                  v65.val[1],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 1);
              v71.val[1] = vaddq_s32(v68.val[1], v62.val[0]);
              v62.val[0] = vsubq_s32(v62.val[0], v68.val[1]);
              v65.val[1] = vsubq_s32(v54, v65.val[1]);
              v65.val[0] = vaddq_s32(v73.val[0], v65.val[0]);
              v55 = vaddq_s32(v68.val[0], v51);
              v68.val[0] = vsubq_s32(v51, v68.val[0]);
              v68.val[1] = vaddq_s32(v65.val[1], v62.val[1]);
              v56 = vaddq_s32(v65.val[0], v71.val[0]);
              v62.val[1] = vsubq_s32(v65.val[1], v62.val[1]);
              v65.val[0] = vsubq_s32(v65.val[0], v71.val[0]);
              v73.val[0] = vsubq_s32(v71.val[1], v68.val[1]);
              v73.val[1] = vsubq_s32(v56, v55);
              v71.val[0] = vaddq_s32(v68.val[1], v71.val[1]);
              v75.val[0] = vsubq_s32(v62.val[0], v65.val[0]);
              v71.val[1] = vnegq_s32(vaddq_s32(v55, v56));
              v75.val[1] = vnegq_s32(vaddq_s32(v68.val[0], v62.val[1]));
              v59.val[0] = vaddq_s32(v65.val[0], v62.val[0]);
              v59.val[1] = vsubq_s32(v62.val[1], v68.val[0]);
              vst2q_f32(v41 + 8, v59);
              vst2q_f32(v37 + 8, v73);
              vst2q_f32(v36 + 8, v71);
              vst2q_f32(v38 + 8, v75);
            } while (v28 > 2);
            result = (float*)((char*)result + v30 * 4);
            a2 = (const float*)((char*)a2 + v30 * 4);
          }
        }
        else {
          v14 = a5;
          if (a5 != 1) {
            goto LABEL_11;
          }
        }
        result += 24 * a5;
        a3 -= a5;
        v13 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v13 | (a4 == 0)));
    }
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_217980(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int32x4_t v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  int v12;
  const float* v13;
  int32x2_t v14;
  int32x4_t v15;
  float* v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x2_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int v22;
  int32x2_t* v23;
  __int64 v24;
  char* v25;
  const float* v26;
  float* v27;
  float* v28;
  const float* v29;
  const float* v30;
  int32x2_t v31;
  float* v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x2_t v37;
  int32x4_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;
  float32x4x2_t v46;
  float32x4x2_t v47;
  float32x4x2_t v48;
  float32x4x2_t v49;
  float32x4x2_t v50;
  float32x4x2_t v51;
  float32x4x2_t v52;

  if (a4 >= 1 && a5 >= 1) {
    v6 = vdupq_n_s32(0x9126145F);
    v7 = a6 / 3;
    v8 = v7 << 6;
    v9 = 8 * v7;
    v10 = 8LL * a5;
    do {
      if ((a5 & 1) != 0) {
        v13 = &a2[v9];
        v41 = vld2q_f32(a2);
        a2 += 8;
        v12 = a5 - 1;
        v44 = vld2q_f32(v13);
        PSEUDO_LOW_LANE64(v14, n64_u64, (unsigned __int64)a3[a5]);
        v15 = vnegq_s32(v44.val[1]);
        v47 = vld2q_f32(&v13[v9]);
        v16 = &result[v10];
        v17 = vnegq_s32(v47.val[1]);
        v18 = vqrdmulhq_lane_s32(v47.val[0], v14, 0);
        v47.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v17, v14, 0),
                               vqrdmulhq_lane_s32(v47.val[0], v14, 1));
        PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(*(a3)).n64_u64[0]);
        ++a3;
        v20 = vsubq_s32(v18, vqrdmulhq_lane_s32(v17, v14, 1));
        v47.val[1] = vsubq_s32(vqrdmulhq_lane_s32(v44.val[0], v19, 0),
                               vqrdmulhq_lane_s32(v15, v19, 1));
        v44.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v15, v19, 0),
                               vqrdmulhq_lane_s32(v44.val[0], v19, 1));
        v44.val[1] = vaddq_s32(v47.val[1], v20);
        v21 = vaddq_s32(v44.val[0], v47.val[0]);
        v47.val[1] = vsubq_s32(v47.val[1], v20);
        v49.val[0] = vaddq_s32(v44.val[1], v41.val[0]);
        v49.val[1] = vsubq_s32(v41.val[1], v21);
        v44.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v44.val[0], v47.val[0]));
        v47.val[0] = vsubq_s32(v41.val[0], vshrq_n_s32(v44.val[1], 1u));
        v41.val[0] = v41.val[1];
        v41.val[1] = vqrdmulhq_s32(v6, v47.val[1]);
        vst2q_f32(result, v49);
        result += 8;
        v41.val[0] = vsraq_n_s32(v41.val[0], v21, 1u);
        v47.val[1] = vaddq_s32(v44.val[0], v47.val[0]);
        v44.val[0] = vsubq_s32(v47.val[0], v44.val[0]);
        v44.val[1] = vsubq_s32(v41.val[0], v41.val[1]);
        vst2q_f32(v16, v44);
        v39.val[0] = v47.val[1];
        v39.val[1] = vaddq_s32(v41.val[0], v41.val[1]);
        vst2q_f32(&v16[v10], v39);
        if (a5 != 1) {
        LABEL_9:
          v22 = v12 + 2;
          v23 = &a3[a5 + 1];
          v24 = 0;
          v25 = (char*)a2 + v8;
          do {
            v26 = &a2[v9 + 8 + v24];
            v27 = &result[v10 + v24];
            v28 = &result[16 * (__int64)a5 + v24];
            v22 -= 2;
            v42 = vld2q_f32(&a2[v24]);
            v29 = &a2[v24 + 8];
            v45 = vld2q_f32(&a2[v9 + v24]);
            v48 = vld2q_f32((const float*)&v25[v24 * 4]);
            v30 = (const float*)&v25[v24 * 4 + 32];
            PSEUDO_LOW_LANE64(v31, n64_u64, LANES64(v23[-1]).n64_u64[0]);
            v32 = &result[v24];
            v24 += 16;
            v33 = vnegq_s32(v48.val[1]);
            v34 = vnegq_s32(v45.val[1]);
            v48.val[1] = vqrdmulhq_lane_s32(v33, v31, 0);
            v35 = vsubq_s32(vqrdmulhq_lane_s32(v48.val[0], v31, 0),
                            vqrdmulhq_lane_s32(v33, v31, 1));
            v48.val[0] =
                vaddq_s32(v48.val[1], vqrdmulhq_lane_s32(v48.val[0], v31, 1));
            v48.val[1] = vsubq_s32(
                vqrdmulhq_lane_s32(
                    v45.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    0),
                vqrdmulhq_lane_s32(
                    v34, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
            v45.val[0] = vaddq_s32(
                vqrdmulhq_lane_s32(
                    v34, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                vqrdmulhq_lane_s32(
                    v45.val[0], COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]),
                    1));
            v45.val[1] = vaddq_s32(v48.val[1], v35);
            v36 = vaddq_s32(v45.val[0], v48.val[0]);
            v48.val[1] = vsubq_s32(v48.val[1], v35);
            v50.val[0] = vaddq_s32(v45.val[1], v42.val[0]);
            v50.val[1] = vsubq_s32(v42.val[1], v36);
            v45.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v45.val[0], v48.val[0]));
            v45.val[1] = vsubq_s32(v42.val[0], vshrq_n_s32(v45.val[1], 1u));
            v42.val[0] = v42.val[1];
            v42.val[1] = vqrdmulhq_s32(v6, v48.val[1]);
            vst2q_f32(v32, v50);
            v42.val[0] = vsraq_n_s32(v42.val[0], v36, 1u);
            v48.val[0] = vaddq_s32(v45.val[0], v45.val[1]);
            v45.val[0] = vsubq_s32(v45.val[1], v45.val[0]);
            v48.val[1] = vaddq_s32(v42.val[0], v42.val[1]);
            v45.val[1] = vsubq_s32(v42.val[0], v42.val[1]);
            vst2q_f32(v27, v45);
            vst2q_f32(v28, v48);
            v46 = vld2q_f32(v30);
            PSEUDO_LOW_LANE64(v37, n64_u64, LANES64(*(v23)).n64_u64[0]);
            v23 += 2;
            v43 = vld2q_f32(v26);
            v48.val[1] = vnegq_s32(v46.val[1]);
            v50.val[0] = vqrdmulhq_lane_s32(v46.val[0], v37, 0);
            v48.val[0] = vnegq_s32(v43.val[1]);
            v46.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v48.val[1], v37, 0),
                                   vqrdmulhq_lane_s32(v46.val[0], v37, 1));
            PSEUDO_LOW_LANE128(v46.val[1], n128_u64, LANES64(a3[1]).n64_u64[0]);
            v48.val[1] =
                vsubq_s32(v50.val[0], vqrdmulhq_lane_s32(v48.val[1], v37, 1));
            v51 = vld2q_f32(v29);
            a3 += 2;
            v38 = vqrdmulhq_lane_s32(
                v43.val[0],
                COERCE_AS(int32x2_t, LANES128(v46.val[1]).n128_u64[0]), 0);
            v43.val[0] = vqrdmulhq_lane_s32(
                v43.val[0],
                COERCE_AS(int32x2_t, LANES128(v46.val[1]).n128_u64[0]), 1);
            v43.val[1] = vqrdmulhq_lane_s32(
                v48.val[0],
                COERCE_AS(int32x2_t, LANES128(v46.val[1]).n128_u64[0]), 0);
            v46.val[1] = vsubq_s32(
                v38,
                vqrdmulhq_lane_s32(
                    v48.val[0],
                    COERCE_AS(int32x2_t, LANES128(v46.val[1]).n128_u64[0]), 1));
            v43.val[0] = vaddq_s32(v43.val[1], v43.val[0]);
            v43.val[1] = vaddq_s32(v46.val[1], v48.val[1]);
            v48.val[0] = vaddq_s32(v43.val[0], v46.val[0]);
            v46.val[1] = vsubq_s32(v46.val[1], v48.val[1]);
            v48.val[1] = vaddq_s32(v43.val[1], v51.val[0]);
            v46.val[1] = vqrdmulhq_s32(v6, v46.val[1]);
            v43.val[0] = vqrdmulhq_s32(v6, vsubq_s32(v43.val[0], v46.val[0]));
            v46.val[0] = vsubq_s32(v51.val[0], vshrq_n_s32(v43.val[1], 1u));
            v43.val[1] = vsraq_n_s32(v51.val[1], v48.val[0], 1u);
            v40.val[0] = v48.val[1];
            v40.val[1] = vsubq_s32(v51.val[1], v48.val[0]);
            vst2q_f32(v32 + 8, v40);
            v51.val[0] = vaddq_s32(v43.val[0], v46.val[0]);
            v52.val[0] = vsubq_s32(v46.val[0], v43.val[0]);
            v52.val[1] = vsubq_s32(v43.val[1], v46.val[1]);
            v51.val[1] = vaddq_s32(v43.val[1], v46.val[1]);
            vst2q_f32(v27 + 8, v52);
            vst2q_f32(v28 + 8, v51);
          } while (v22 > 2);
          result = (float*)((char*)result + v24 * 4);
          a2 = (const float*)((char*)a2 + v24 * 4);
        }
      }
      else {
        v12 = a5;
        if (a5 != 1) {
          goto LABEL_9;
        }
      }
      result += 16 * (__int64)a5;
      a3 -= a5;
      v11 = __OFSUB__(a4--, 1);
    } while (!((a4 < 0) ^ v11 | (a4 == 0)));
  }
  return result;
}

float* nn_audio_ne10_modules_dsp_217c80(float* result, const float* a2,
                                        int32x2_t* a3, int a4, int a5, int a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  int v13;
  const float* v14;
  const float* v15;
  int32x4_t v16;
  int32x2_t v17;
  float* v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x2_t v24;
  int32x4_t v25;
  float* v26;
  int v27;
  char* v28;
  __int64 v29;
  int32x2_t* v30;
  int32x2_t* v31;
  char* v32;
  const float* v33;
  float* v34;
  float* v35;
  float* v36;
  float* v37;
  const float* v38;
  const float* v39;
  const float* v40;
  int32x2_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x2_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x2_t v50;
  int32x4_t v51;
  int32x2_t v52;
  int32x4_t v53;
  __int64 v54;
  __int64 v55;
  float32x4x2_t v56;
  float32x4x2_t v57;
  float32x4x2_t v58;
  float32x4x2_t v59;
  float32x4x2_t v60;
  float32x4x2_t v61;
  float32x4x2_t v62;
  float32x4x2_t v63;
  float32x4x2_t v64;
  float32x4x2_t v65;
  float32x4x2_t v66;
  float32x4x2_t v67;
  float32x4x2_t v68;
  float32x4x2_t v69;
  float32x4x2_t v70;
  float32x4x2_t v71;
  float32x4x2_t v72;
  float32x4x2_t v73;
  float32x4x2_t v74;
  float32x4x2_t v75;
  float32x4x2_t v76;
  float32x4x2_t v77;

  if (a4 >= 1) {
    v6 = a6 + 3;
    if (a6 >= 0) {
      v6 = a6;
    }
    if (a5 >= 1) {
      v7 = (__int64)v6 >> 2;
      v8 = 2 * a5;
      v9 = 8 * v7;
      v10 = 8LL * a5;
      v11 = 32 * v7 + 32;
      v54 = (v7 << 6) | 0x20;
      v55 = 24 * v7;
      do {
        if ((a5 & 1) != 0) {
          v14 = &a2[v9];
          v62 = vld2q_f32(a2);
          a2 += 8;
          v65 = vld2q_f32(v14);
          v15 = &v14[v9];
          v16 = vnegq_s32(v65.val[1]);
          v68 = vld2q_f32(v15);
          v71 = vld2q_f32(&v15[v9]);
          PSEUDO_LOW_LANE64(v17, n64_u64, (unsigned __int64)a3[v8]);
          v18 = &result[v10];
          v19 = vnegq_s32(v68.val[1]);
          v20 = vnegq_s32(v71.val[1]);
          v21 = vqrdmulhq_lane_s32(v71.val[0], v17, 0);
          v71.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v20, v17, 0),
                                 vqrdmulhq_lane_s32(v71.val[0], v17, 1));
          PSEUDO_LOW_LANE128(v71.val[1], n128_u64, (unsigned __int64)a3[a5]);
          v22 = vsubq_s32(v21, vqrdmulhq_lane_s32(v20, v17, 1));
          v23 = vqrdmulhq_lane_s32(
              v68.val[0],
              COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 0);
          v68.val[0] = vaddq_s32(
              vqrdmulhq_lane_s32(
                  v19, COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]),
                  0),
              vqrdmulhq_lane_s32(
                  v68.val[0],
                  COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]), 1));
          PSEUDO_LOW_LANE64(v24, n64_u64, LANES64(*(a3)).n64_u64[0]);
          ++a3;
          v71.val[1] = vsubq_s32(
              v23,
              vqrdmulhq_lane_s32(
                  v19, COERCE_AS(int32x2_t, LANES128(v71.val[1]).n128_u64[0]),
                  1));
          v65.val[1] = vqrdmulhq_lane_s32(v16, v24, 0);
          v68.val[1] = vqrdmulhq_lane_s32(v16, v24, 1);
          v25 = vsubq_s32(v68.val[0], v62.val[1]);
          v68.val[1] =
              vsubq_s32(vqrdmulhq_lane_s32(v65.val[0], v24, 0), v68.val[1]);
          v65.val[0] =
              vaddq_s32(v65.val[1], vqrdmulhq_lane_s32(v65.val[0], v24, 1));
          v65.val[1] = vaddq_s32(v71.val[1], v62.val[0]);
          v71.val[1] = vsubq_s32(v62.val[0], v71.val[1]);
          v62.val[0] = vaddq_s32(v68.val[0], v62.val[1]);
          v62.val[1] = vaddq_s32(v68.val[1], v22);
          v68.val[0] = vaddq_s32(v65.val[0], v71.val[0]);
          v68.val[1] = vsubq_s32(v68.val[1], v22);
          v65.val[0] = vsubq_s32(v65.val[0], v71.val[0]);
          v74.val[0] = vsubq_s32(v65.val[1], v62.val[1]);
          v76.val[0] = vaddq_s32(v62.val[1], v65.val[1]);
          v74.val[1] = vsubq_s32(v68.val[0], v25);
          v76.val[1] = vnegq_s32(vaddq_s32(v25, v68.val[0]));
          vst2q_f32(result, v76);
          result += 8;
          v56.val[0] = vaddq_s32(v65.val[0], v71.val[1]);
          v56.val[1] = vaddq_s32(v68.val[1], v62.val[0]);
          vst2q_f32(v18, v56);
          v26 = &v18[v10];
          vst2q_f32(v26, v74);
          v57.val[0] = vsubq_s32(v71.val[1], v65.val[0]);
          v57.val[1] = vsubq_s32(v62.val[0], v68.val[1]);
          vst2q_f32(&v26[v10], v57);
          v13 = a5 - 1;
          if (a5 != 1) {
          LABEL_11:
            v27 = v13 + 2;
            v28 = (char*)a2 + v11;
            v29 = 0;
            v30 = &a3[v8 + 1];
            v31 = &a3[a5 + 1];
            v32 = (char*)a2 + v54;
            do {
              v33 = (const float*)&v28[v29 * 4];
              v34 = &result[v29];
              v35 = &result[v10 + v29];
              v36 = &result[16 * (__int64)a5 + v29];
              v37 = &result[24 * a5 + v29];
              v27 -= 2;
              v63 = vld2q_f32(&a2[v29]);
              v38 = &a2[v29 + 8];
              v66 = vld2q_f32((const float*)&v28[v29 * 4 - 32]);
              v39 = (const float*)&v32[v29 * 4];
              v69 = vld2q_f32((const float*)&v32[v29 * 4 - 32]);
              v40 = &a2[v55 + v29];
              v29 += 16;
              v72 = vld2q_f32(v40);
              PSEUDO_LOW_LANE64(v41, n64_u64, LANES64(v30[-1]).n64_u64[0]);
              v42 = vnegq_s32(v66.val[1]);
              v43 = vnegq_s32(v69.val[1]);
              v44 = vnegq_s32(v72.val[1]);
              v45 = vqrdmulhq_lane_s32(v72.val[0], v41, 0);
              v72.val[0] = vqrdmulhq_lane_s32(v72.val[0], v41, 1);
              v72.val[1] = vqrdmulhq_lane_s32(v44, v41, 0);
              v46 = vqrdmulhq_lane_s32(v44, v41, 1);
              PSEUDO_LOW_LANE64(v47, n64_u64, LANES64(v31[-1]).n64_u64[0]);
              v72.val[0] = vaddq_s32(v72.val[1], v72.val[0]);
              v48 = vsubq_s32(v45, v46);
              v72.val[1] = vqrdmulhq_lane_s32(v69.val[0], v47, 0);
              v69.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v43, v47, 0),
                                     vqrdmulhq_lane_s32(v69.val[0], v47, 1));
              v72.val[1] =
                  vsubq_s32(v72.val[1], vqrdmulhq_lane_s32(v43, v47, 1));
              v66.val[1] = vqrdmulhq_lane_s32(
                  v42, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0);
              v69.val[1] = vqrdmulhq_lane_s32(
                  v42, COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1);
              v49 = vsubq_s32(v69.val[0], v63.val[1]);
              v69.val[1] = vsubq_s32(
                  vqrdmulhq_lane_s32(
                      v66.val[0],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 0),
                  v69.val[1]);
              v66.val[0] = vaddq_s32(
                  v66.val[1],
                  vqrdmulhq_lane_s32(
                      v66.val[0],
                      COERCE_AS(int32x2_t, LANES64(*(a3)).n64_u64[0]), 1));
              v66.val[1] = vaddq_s32(v72.val[1], v63.val[0]);
              v72.val[1] = vsubq_s32(v63.val[0], v72.val[1]);
              v63.val[0] = vaddq_s32(v69.val[0], v63.val[1]);
              v63.val[1] = vaddq_s32(v69.val[1], v48);
              v69.val[0] = vaddq_s32(v66.val[0], v72.val[0]);
              v69.val[1] = vsubq_s32(v69.val[1], v48);
              v66.val[0] = vsubq_s32(v66.val[0], v72.val[0]);
              v75.val[0] = vsubq_s32(v66.val[1], v63.val[1]);
              v77.val[0] = vaddq_s32(v63.val[1], v66.val[1]);
              v75.val[1] = vsubq_s32(v69.val[0], v49);
              v77.val[1] = vnegq_s32(vaddq_s32(v49, v69.val[0]));
              vst2q_f32(v34, v77);
              v58.val[0] = vaddq_s32(v66.val[0], v72.val[1]);
              v58.val[1] = vaddq_s32(v69.val[1], v63.val[0]);
              vst2q_f32(v35, v58);
              vst2q_f32(v36, v75);
              v59.val[0] = vsubq_s32(v72.val[1], v66.val[0]);
              v59.val[1] = vsubq_s32(v63.val[0], v69.val[1]);
              vst2q_f32(v37, v59);
              v73 = vld2q_f32(v40 + 8);
              v70 = vld2q_f32(v39);
              PSEUDO_LOW_LANE64(v50, n64_u64, LANES64(*(v30)).n64_u64[0]);
              v30 += 2;
              v67 = vld2q_f32(v33);
              v64 = vld2q_f32(v38);
              v75.val[1] = vnegq_s32(v73.val[1]);
              v77.val[1] = vqrdmulhq_lane_s32(v73.val[0], v50, 0);
              v73.val[0] = vqrdmulhq_lane_s32(v73.val[0], v50, 1);
              v75.val[0] = vnegq_s32(v70.val[1]);
              v51 = vnegq_s32(v67.val[1]);
              v73.val[1] = vqrdmulhq_lane_s32(v75.val[1], v50, 0);
              v75.val[1] = vqrdmulhq_lane_s32(v75.val[1], v50, 1);
              PSEUDO_LOW_LANE64(v52, n64_u64, LANES64(*(v31)).n64_u64[0]);
              v31 += 2;
              v75.val[1] = vsubq_s32(v77.val[1], v75.val[1]);
              v73.val[0] = vaddq_s32(v73.val[1], v73.val[0]);
              v77.val[1] = vqrdmulhq_lane_s32(v70.val[0], v52, 0);
              v70.val[0] = vaddq_s32(vqrdmulhq_lane_s32(v75.val[0], v52, 0),
                                     vqrdmulhq_lane_s32(v70.val[0], v52, 1));
              PSEUDO_LOW_LANE128(v70.val[1], n128_u64,
                                 LANES64(a3[1]).n64_u64[0]);
              v73.val[1] =
                  vsubq_s32(v77.val[1], vqrdmulhq_lane_s32(v75.val[0], v52, 1));
              a3 += 2;
              v75.val[0] = vqrdmulhq_lane_s32(
                  v67.val[0],
                  COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 0);
              v67.val[0] = vqrdmulhq_lane_s32(
                  v67.val[0],
                  COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]), 1);
              v67.val[1] = vqrdmulhq_lane_s32(
                  v51, COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]),
                  0);
              v70.val[1] = vqrdmulhq_lane_s32(
                  v51, COERCE_AS(int32x2_t, LANES128(v70.val[1]).n128_u64[0]),
                  1);
              v53 = vsubq_s32(v70.val[0], v64.val[1]);
              v70.val[1] = vsubq_s32(v75.val[0], v70.val[1]);
              v67.val[0] = vaddq_s32(v67.val[1], v67.val[0]);
              v67.val[1] = vaddq_s32(v73.val[1], v64.val[0]);
              v73.val[1] = vsubq_s32(v64.val[0], v73.val[1]);
              v64.val[0] = vaddq_s32(v70.val[0], v64.val[1]);
              v64.val[1] = vaddq_s32(v70.val[1], v75.val[1]);
              v70.val[0] = vaddq_s32(v67.val[0], v73.val[0]);
              v70.val[1] = vsubq_s32(v70.val[1], v75.val[1]);
              v67.val[0] = vsubq_s32(v67.val[0], v73.val[0]);
              v75.val[0] = vsubq_s32(v67.val[1], v64.val[1]);
              v77.val[0] = vaddq_s32(v64.val[1], v67.val[1]);
              v75.val[1] = vsubq_s32(v70.val[0], v53);
              v77.val[1] = vnegq_s32(vaddq_s32(v53, v70.val[0]));
              v60.val[0] = vaddq_s32(v67.val[0], v73.val[1]);
              v60.val[1] = vaddq_s32(v70.val[1], v64.val[0]);
              vst2q_f32(v35 + 8, v60);
              vst2q_f32(v36 + 8, v75);
              vst2q_f32(v34 + 8, v77);
              v61.val[0] = vsubq_s32(v73.val[1], v67.val[0]);
              v61.val[1] = vsubq_s32(v64.val[0], v70.val[1]);
              vst2q_f32(v37 + 8, v61);
            } while (v27 > 2);
            result = (float*)((char*)result + v29 * 4);
            a2 = (const float*)((char*)a2 + v29 * 4);
          }
        }
        else {
          v13 = a5;
          if (a5 != 1) {
            goto LABEL_11;
          }
        }
        result += 24 * a5;
        a3 -= a5;
        v12 = __OFSUB__(a4--, 1);
      } while (!((a4 < 0) ^ v12 | (a4 == 0)));
    }
  }
  return result;
}

#pragma GCC visibility pop
