#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_Sc_Scene_removeShape_(__int64, unsigned __int64, unsigned int);
float cosf(float);
float sinf(float);
float sqrtf(float);
void physx_source_simulationcontroller_src_310590(__int64** a1, double a2,
                                                  double a3, double a4,
                                                  double a5, float a6, float a7,
                                                  double a8, float a9);
float physx_source_simulationcontroller_src_312a20(__int64 a1);
__int64* physx_source_simulationcontroller_src_386600(__int64* result,
                                                      __int64 a2, char a3);
__int64 physx_source_simulationcontroller_src_3893d0();

void physx_source_simulationcontroller_src_310590(__int64** a1, double a2,
                                                  double a3, double a4,
                                                  double a5, float a6, float a7,
                                                  double a8, float a9)
{
  float v9;
  float v10;
  float v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  float** v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float* v27;
  float v28;
  float v29;
  float v30;
  bool v31;
  float v32;
  float v33;
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
  float** v58;
  float* v59;
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
  float* v76;
  float* v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  int v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float* v89;
  float v90;
  float v91;
  float v92;
  __int64 v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float* v106;
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
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
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
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;

  v12 = *a1;
  if (v12 != nullptr) {
    v13 = *v12;
    v14 = *(unsigned int*)(v13 + 936);
    if ((unsigned int)v14 >= 2) {
      v15 = *(_QWORD*)(v13 + 928);
      v16 = *(_QWORD*)(v13 + 256);
      v17 = -0x1.0000000000000p-1f;
      v18 = 16 * v14;
      v19 = 16;
      v20 = 8;
      v21 = (_QWORD*)v13;
      v22 = (float**)(v15 + 56);
      v23 = (float*)(*(_QWORD*)(v13 + 352) + 40LL);
      while (1) {
        v76 = v22[1];
        v77 = (float*)(v21[114] + v19);
        v79 = v76[11];
        v78 = v76[12];
        v80 = v76[13];
        v82 = v76[4];
        v81 = v76[5];
        v83 = v76[6];
        v84 = *((unsigned __int8*)v76 + 351);
        v86 = *v77;
        v85 = v77[1];
        v87 = v77[2];
        v88 = v77[3];
        v89 = *(float**)(v15 + 40LL * *((unsigned int*)v22 + 4) + 16);
        v90 = v89[4];
        v91 = v89[5];
        v92 = v89[6];
        v46 = *v89;
        v43 = v89[1];
        v44 = v89[2];
        v42 = v89[3];
        v93 = *(unsigned int*)(v21[121] + v20);
        v185 = v90;
        v183 = v92;
        v184 = v91;
        if (v84 <= 1) {
          break;
        }
        if ((unsigned int)(v84 - 2) < 2) {
          v163 = v44;
          v165 = v43;
          v24 = v46;
          v25 = v42;
          v174 = v80;
          v177 = v78;
          v180 = v79;
          v26 = v77[3];
          v169 = v81;
          v172 = v83;
          v167 = v82;
          v27 = (float*)(v21[98] + 24LL * (unsigned int)v93);
          v28 = *(float*)(v16 + 4 * v93) * -0x1.0000000000000p-1f;
          v29 = sinf(v28);
          v30 = cosf(v28);
          v31 = v30 < 0x0.0p+0f;
          if (v30 < 0x0.0p+0f) {
            v30 = -v30;
          }
          v32 = v29 * *v27;
          v33 = v29 * v27[1];
          v34 = v29 * v27[2];
          if (v31) {
            v32 = -v32;
          }
          if (v31) {
            v33 = -v33;
          }
          if (v31) {
            v34 = -v34;
          }
          v35 = v87;
          v36 = (float)((float)((float)(PSEUDO_UNFUSED(v26 * v32)) +
                                (float)(v30 * v86)) +
                        (float)(v33 * v87)) -
                (float)(v85 * v34);
          v37 = (float)((float)((float)(PSEUDO_UNFUSED(v26 * v33)) +
                                (float)(v30 * v85)) +
                        (float)(v34 * v86)) -
                (float)(v87 * v32);
          v38 = (float)((float)((float)(PSEUDO_UNFUSED(v26 * v34)) +
                                (float)(v30 * v87)) +
                        (float)(v32 * v85)) -
                (float)(v86 * v33);
          v39 = (float)((float)((float)(v30 * v26) -
                                (float)(PSEUDO_UNFUSED(v32 * v86))) -
                        (float)(v33 * v85)) -
                (float)(v34 * v35);
          v40 = sqrtf((float)((float)((float)(PSEUDO_UNFUSED(v37 * v37)) +
                                      (float)(v36 * v36)) +
                              (float)(v38 * v38)) +
                      (float)(v39 * v39));
          v41 = 0x1.0000000000000p+0f;
          v42 = v25;
          v44 = v163;
          v43 = v165;
          v45 = 0x1.0000000000000p+0f / v40;
          v46 = v24;
          v47 = (float)(0x1.0000000000000p+0f / v40) * v38;
          v48 = (float)(0x1.0000000000000p+0f / v40) * v37;
          v49 = (float)(0x1.0000000000000p+0f / v40) * v36;
          v10 = (float)(0x1.0000000000000p+0f / v40) * v39;
          v50 = (float)(v10 * v10) + -0x1.0000000000000p-1f;
          v51 = (float)((float)(PSEUDO_UNFUSED((float)(v169 + v169) * v48)) +
                        (float)(v49 * (float)(v167 + v167))) +
                (float)(v47 * (float)(v172 + v172));
          v52 = -v47;
          v53 = (float)((float)(v45 * v36) * (float)(v169 + v169)) -
                (float)(PSEUDO_UNFUSED((float)(v45 * v37) *
                                       (float)(v167 + v167)));
          v54 = (float)(PSEUDO_UNFUSED(
                    (float)(v45 * v39) *
                    (float)((float)((float)(v45 * v38) * (float)(v167 + v167)) -
                            (float)(PSEUDO_UNFUSED((float)(v45 * v36) *
                                                   (float)(v172 + v172)))))) +
                (float)((float)(v169 + v169) * v50);
          v55 = (float)((float)(PSEUDO_UNFUSED(
                            (float)(v45 * v39) *
                            (float)((float)((float)(v45 * v37) *
                                            (float)(v172 + v172)) -
                                    (float)(PSEUDO_UNFUSED(
                                        (float)(v45 * v38) *
                                        (float)(v169 + v169)))))) +
                        (float)((float)(v167 + v167) * v50)) +
                (float)((float)(v45 * v36) * v51);
          v56 = -(float)(v45 * v36);
          v57 = -(float)(v45 * v37);
          v178 = (float)(v54 + (float)(v48 * v51)) - v177;
          v181 = v55 - v180;
          v175 = (float)((float)((float)(PSEUDO_UNFUSED(v10 * v53)) +
                                 (float)((float)(v172 + v172) * v50)) +
                         (float)(v47 * v51)) -
                 v174;
          goto LABEL_16;
        }
        if (v84 == 4) {
          v94 = *(v23 - 2);
          v95 = *(v23 - 1);
          v96 = *v23;
          v168 = v82;
          v170 = v81;
          v173 = v83;
          v176 = v80;
          v98 = **v22;
          v97 = (*v22)[1];
          v99 = (*v22)[2];
          v100 = (*v22)[3];
          v179 = v78;
          v182 = v79;
          if ((float)((float)((float)(PSEUDO_UNFUSED(v95 * v95)) +
                              (float)(v94 * v94)) +
                      (float)(v96 * v96)) >= 0x1.357c2a0000000p-80f) {
            v164 = v44;
            v166 = v43;
            v161 = v42;
            v162 = v46;
            v159 = (*v22)[1];
            v160 = v77[3];
            v157 = **v22;
            v158 = (*v22)[2];
            v156 = (*v22)[3];
            v155 = sqrtf((float)((float)(PSEUDO_UNFUSED(v95 * v95)) +
                                 (float)(v94 * v94)) +
                         (float)(v96 * v96));
            v123 = v87;
            v124 = 0x1.0000000000000p+0f /
                   sqrtf((float)((float)(PSEUDO_UNFUSED(v95 * v95)) +
                                 (float)(v94 * v94)) +
                         (float)(v96 * v96));
            v125 = v94 * v124;
            v126 = v95 * v124;
            v127 = v96 * v124;
            v128 = sinf(v155 * 0x1.0000000000000p-1f);
            v101 = cosf(v155 * 0x1.0000000000000p-1f);
            v100 = v156;
            v98 = v157;
            v99 = v158;
            v97 = v159;
            v88 = v160;
            v42 = v161;
            v102 = v128 * v125;
            v103 = v128 * v126;
            v104 = v128 * v127;
            v46 = v162;
            v44 = v164;
            v43 = v166;
            v87 = v123;
          }
          else {
            v101 = 0x1.0000000000000p+0f;
            v102 = 0x0.0p+0f;
            v103 = 0x0.0p+0f;
            v104 = 0x0.0p+0f;
          }
          v129 = v43;
          v130 = v46;
          v131 = v42;
          v132 = (float)((float)((float)(PSEUDO_UNFUSED(v100 * v103)) +
                                 (float)(v101 * v97)) +
                         (float)(v104 * v98)) -
                 (float)(v99 * v102);
          v133 = (float)((float)((float)(PSEUDO_UNFUSED(v100 * v104)) +
                                 (float)(v101 * v99)) +
                         (float)(v102 * v97)) -
                 (float)(v98 * v103);
          v134 = (float)((float)((float)(PSEUDO_UNFUSED(v100 * v102)) +
                                 (float)(v101 * v98)) +
                         (float)(v103 * v99)) -
                 (float)(v97 * v104);
          v135 = (float)((float)((float)(v101 * v100) -
                                 (float)(PSEUDO_UNFUSED(v102 * v98))) -
                         (float)(v103 * v97)) -
                 (float)(v104 * v99);
          v136 = (float)((float)(v135 * v87) -
                         (float)(PSEUDO_UNFUSED(v133 * v88))) -
                 (float)(v134 * v85);
          v137 = (float)((float)(v135 * v86) -
                         (float)(PSEUDO_UNFUSED(v134 * v88))) -
                 (float)(v132 * v87);
          v138 = (float)((float)((float)(v135 * v85) -
                                 (float)(PSEUDO_UNFUSED(v132 * v88))) -
                         (float)(v133 * v86)) +
                 (float)(v87 * v134);
          v139 = v86 * v134;
          v140 = v137 + (float)(v85 * v133);
          v141 = v136 + (float)(v86 * v132);
          v142 = v44;
          v143 = (float)((float)(v139 + (float)(v135 * v88)) +
                         (float)(v132 * v85)) +
                 (float)(v133 * v87);
          v144 = (float)((float)((float)(PSEUDO_UNFUSED(v42 * v140)) +
                                 (float)(v143 * v46)) +
                         (float)(v138 * v44)) -
                 (float)(v43 * v141);
          v145 = (float)((float)((float)(PSEUDO_UNFUSED(v42 * v138)) +
                                 (float)(v143 * v43)) +
                         (float)(v141 * v46)) -
                 (float)(v44 * v140);
          v146 = (float)((float)((float)(PSEUDO_UNFUSED(v42 * v141)) +
                                 (float)(v143 * v44)) +
                         (float)(v140 * v43)) -
                 (float)(v46 * v138);
          v147 = (float)((float)((float)(v143 * v42) -
                                 (float)(PSEUDO_UNFUSED(v140 * v46))) -
                         (float)(v138 * v43)) -
                 (float)(v141 * v44);
          v148 = sqrtf((float)((float)((float)(PSEUDO_UNFUSED(v145 * v145)) +
                                       (float)(v144 * v144)) +
                               (float)(v146 * v146)) +
                       (float)(v147 * v147));
          v46 = v130;
          v149 = 0x1.0000000000000p+0f / v148;
          v42 = v131;
          v44 = v142;
          v43 = v129;
          v47 = (float)(0x1.0000000000000p+0f / v148) * v146;
          v48 = (float)(0x1.0000000000000p+0f / v148) * v145;
          v49 = (float)(0x1.0000000000000p+0f / v148) * v144;
          v10 = (float)(0x1.0000000000000p+0f / v148) * v147;
          v150 = (float)(v10 * v10) + -0x1.0000000000000p-1f;
          v151 = (float)((float)(PSEUDO_UNFUSED((float)(v170 + v170) * v48)) +
                         (float)(v49 * (float)(v168 + v168))) +
                 (float)(v47 * (float)(v173 + v173));
          v52 = -v47;
          v152 = (float)((float)(v149 * v144) * (float)(v170 + v170)) -
                 (float)(PSEUDO_UNFUSED((float)(v149 * v145) *
                                        (float)(v168 + v168)));
          v153 =
              (float)(PSEUDO_UNFUSED(
                  (float)(v149 * v147) *
                  (float)((float)((float)(v149 * v146) * (float)(v168 + v168)) -
                          (float)(PSEUDO_UNFUSED((float)(v149 * v144) *
                                                 (float)(v173 + v173)))))) +
              (float)((float)(v170 + v170) * v150);
          v154 = (float)((float)(PSEUDO_UNFUSED(
                             (float)(v149 * v147) *
                             (float)((float)((float)(v149 * v145) *
                                             (float)(v173 + v173)) -
                                     (float)(PSEUDO_UNFUSED(
                                         (float)(v149 * v146) *
                                         (float)(v170 + v170)))))) +
                         (float)((float)(v168 + v168) * v150)) +
                 (float)((float)(v149 * v144) * v151);
          v56 = -(float)(v149 * v144);
          v57 = -(float)(v149 * v145);
          v178 = (float)(v153 + (float)(v48 * v151)) - v179;
          v181 = v154 - v182;
          v175 = (float)((float)((float)(PSEUDO_UNFUSED(v10 * v152)) +
                                 (float)((float)(v173 + v173) * v150)) +
                         (float)(v47 * v151)) -
                 v176;
        LABEL_29:
          v41 = 0x1.0000000000000p+0f;
          goto LABEL_16;
        }
        v47 = v171;
        v49 = v9;
        v56 = -v9;
        v178 = a7;
        v181 = a6;
        v175 = a9;
        v48 = v11;
        v57 = -v11;
        v41 = 0x1.0000000000000p+0f;
        v52 = -v171;
      LABEL_16:
        v58 = v22 + 5;
        v59 = *v22;
        v9 = v49;
        v171 = v47;
        v11 = v48;
        v60 = (float)((float)((float)(PSEUDO_UNFUSED(v46 * v10)) +
                              (float)(v42 * v56)) +
                      (float)(v43 * v52)) +
              (float)(v48 * v44);
        v61 = (float)((float)((float)(PSEUDO_UNFUSED(v43 * v10)) +
                              (float)(v42 * v57)) +
                      (float)(v44 * v56)) +
              (float)(v47 * v46);
        v62 = (float)((float)((float)(PSEUDO_UNFUSED(v44 * v10)) +
                              (float)(v42 * v52)) +
                      (float)(v46 * v57)) +
              (float)(v49 * v43);
        v63 = (float)((float)((float)(PSEUDO_UNFUSED(v46 * v49)) +
                              (float)(v42 * v10)) +
                      (float)(v43 * v48)) +
              (float)(v44 * v47);
        v64 = v41 / sqrtf((float)((float)((float)(PSEUDO_UNFUSED(v61 * v61)) +
                                          (float)(v60 * v60)) +
                                  (float)(v62 * v62)) +
                          (float)(v63 * v63));
        v66 = v178;
        v65 = v181;
        v19 += 16;
        v23 += 8;
        v20 += 8;
        v67 = v64 * v60;
        v68 = v64 * v61;
        v69 = v64 * v62;
        v70 = v63 * v64;
        v71 = (float)(v70 * v70) + -0x1.0000000000000p-1f;
        *v59 = v67;
        v59[1] = v68;
        v59[2] = v69;
        v59[3] = v70;
        v72 = (float)((float)(PSEUDO_UNFUSED((float)(v66 + v66) * v68)) +
                      (float)(v67 * (float)(v65 + v65))) +
              (float)(v69 * (float)(v175 + v175));
        v73 = (float)((float)(PSEUDO_UNFUSED(
                          v70 * (float)((float)(v69 * (float)(v65 + v65)) -
                                        (float)(PSEUDO_UNFUSED(
                                            v67 * (float)(v175 + v175)))))) +
                      (float)((float)(v66 + v66) * v71)) +
              (float)(v68 * v72);
        v74 = (float)((float)(PSEUDO_UNFUSED(
                          v70 * (float)((float)(v68 * (float)(v175 + v175)) -
                                        (float)(PSEUDO_UNFUSED(
                                            v69 * (float)(v66 + v66)))))) +
                      (float)((float)(v65 + v65) * v71)) +
              (float)(v67 * v72);
        a6 = v181;
        a7 = v178;
        v75 = (float)(PSEUDO_UNFUSED(
                  v70 *
                  (float)((float)(v67 * (float)(v66 + v66)) -
                          (float)(PSEUDO_UNFUSED(v68 * (float)(v65 + v65)))))) +
              (float)((float)(v175 + v175) * v71);
        a9 = v175;
        v59[6] = v183 + (float)(v75 + (float)(v69 * v72));
        v17 = -0x1.0000000000000p-1f;
        v59[4] = v185 + v74;
        v59[5] = v184 + v73;
        v22 = v58;
        if (v18 == v19) {
          return;
        }
      }
      v105 = v83 + v83;
      if (v84 != 0) {
        v106 = (float*)(v21[98] + 24LL * (unsigned int)v93);
        v107 = (float)(v85 * (float)(v83 + v83)) -
               (float)(PSEUDO_UNFUSED(v87 * (float)(v81 + v81)));
        v108 = v17 + (float)(v88 * v88);
        v109 = (float)((float)(PSEUDO_UNFUSED((float)(v81 + v81) * v85)) +
                       (float)(v86 * (float)(v82 + v82))) +
               (float)(v87 * v105);
        v52 = -v87;
        v110 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(v87 * (float)(v82 + v82)) -
                           (float)(PSEUDO_UNFUSED(v86 * v105))) *
                   v88)) +
               (float)((float)(v81 + v81) * v108);
        v111 = (float)(v86 * (float)(v81 + v81)) -
               (float)(PSEUDO_UNFUSED(v85 * (float)(v82 + v82)));
        v112 = (float)((float)(PSEUDO_UNFUSED(v88 * v107)) +
                       (float)((float)(v82 + v82) * v108)) +
               (float)(v86 * v109);
        v113 = v110 + (float)(v85 * v109);
        v56 = -v86;
        v57 = -v85;
        v114 = (float)(PSEUDO_UNFUSED(v111 * v88)) + (float)(v105 * v108);
        v115 = *(float*)(v16 + 4 * v93);
        v116 = (float)((float)(v114 + (float)(v87 * v109)) - v80) +
               (float)(PSEUDO_UNFUSED(v115 * v106[5]));
        v181 = (float)(v112 - v79) + (float)(PSEUDO_UNFUSED(v115 * v106[3]));
        v178 = (float)(v113 - v78) + (float)(PSEUDO_UNFUSED(v115 * v106[4]));
      }
      else {
        v117 = v17 + (float)(v88 * v88);
        v118 = (float)((float)(PSEUDO_UNFUSED((float)(v81 + v81) * v85)) +
                       (float)(v86 * (float)(v82 + v82))) +
               (float)(v87 * v105);
        v52 = -v87;
        v119 = (float)(PSEUDO_UNFUSED(
                   (float)((float)(v87 * (float)(v82 + v82)) -
                           (float)(PSEUDO_UNFUSED(v86 * v105))) *
                   v88)) +
               (float)((float)(v81 + v81) * v117);
        v120 = (float)(v86 * (float)(v81 + v81)) -
               (float)(PSEUDO_UNFUSED(v85 * (float)(v82 + v82)));
        v121 = (float)((float)(PSEUDO_UNFUSED(
                           v88 * (float)((float)(v85 * v105) -
                                         (float)(PSEUDO_UNFUSED(
                                             v87 * (float)(v81 + v81)))))) +
                       (float)((float)(v82 + v82) * v117)) +
               (float)(v86 * v118);
        v122 = v119 + (float)(v85 * v118);
        v56 = -v86;
        v57 = -v85;
        v178 = v122 - v78;
        v181 = v121 - v79;
        v116 = (float)((float)((float)(PSEUDO_UNFUSED(v120 * v88)) +
                               (float)(v105 * v117)) +
                       (float)(v87 * v118)) -
               v80;
      }
      v49 = *v77;
      v48 = v77[1];
      v175 = v116;
      v47 = v77[2];
      v10 = v77[3];
      goto LABEL_29;
    }
  }
}

float physx_source_simulationcontroller_src_312a20(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float result;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(_DWORD*)(a1 + 48);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 40);
    if (v1 == 1) {
      v3 = 0;
    }
    else {
      v8 = (__int64*)(v2 + 8);
      v3 = 0;
      do {
        v12 = *(v8 - 1);
        v3 += 2;
        v13 = *(_QWORD*)(v12 + 152);
        v14 = *(_DWORD*)(v13 + 24);
        *(_DWORD*)(v12 + 132) = *(_DWORD*)(v13 + 20);
        *(_DWORD*)(v12 + 136) = v14;
        *(_DWORD*)(v12 + 112) = *(_DWORD*)v13;
        *(_QWORD*)(v12 + 116) = *(_QWORD*)(v13 + 4);
        *(_QWORD*)(v12 + 124) = *(_QWORD*)(v13 + 12);
        v9 = *v8;
        v8 += 2;
        v10 = *(_QWORD*)(v9 + 152);
        v11 = *(_DWORD*)(v10 + 24);
        *(_DWORD*)(v9 + 132) = *(_DWORD*)(v10 + 20);
        *(_DWORD*)(v9 + 136) = v11;
        result = *(float*)v10;
        *(_DWORD*)(v9 + 112) = *(_DWORD*)v10;
        *(_QWORD*)(v9 + 116) = *(_QWORD*)(v10 + 4);
        *(_QWORD*)(v9 + 124) = *(_QWORD*)(v10 + 12);
      } while ((v1 & 0xFFFFFFFE) != v3);
    }
    if ((v1 & 1) != 0) {
      v4 = *(_QWORD*)(v2 + 8 * v3);
      v5 = *(_QWORD*)(v4 + 152);
      v6 = *(_DWORD*)(v5 + 24);
      *(_DWORD*)(v4 + 132) = *(_DWORD*)(v5 + 20);
      *(_DWORD*)(v4 + 136) = v6;
      result = *(float*)v5;
      *(_DWORD*)(v4 + 112) = *(_DWORD*)v5;
      *(_QWORD*)(v4 + 116) = *(_QWORD*)(v5 + 4);
      *(_QWORD*)(v4 + 124) = *(_QWORD*)(v5 + 12);
    }
  }
  return result;
}

__int64* physx_source_simulationcontroller_src_386600(__int64* result,
                                                      __int64 a2, char a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  __int64 v9;

  v3 = *result;
  if (*result != 0) {
    v4 = *(_QWORD*)(a2 + 128);
    if (v4 != 0) {
      return (__int64*)physx_Sc_Scene_removeShape_(*(_QWORD*)(v3 + 72), v4,
                                                   a3 & 1);
    }
    else {
      v5 = v3 + 8;
      v6 = *(unsigned __int16*)(v3 + 16);
      if (v6 != 1) {
        v5 = *(_QWORD*)(v3 + 8);
      }
      v7 = (unsigned __int64*)(v5 + 8LL * (unsigned int)(v6 - 1));
      while (v6 != 0) {
        v8 = *v7--;
        v4 = v8;
        --v6;
        if (*(_QWORD*)(v8 + 16) - 16LL == a2) {
          return (__int64*)physx_Sc_Scene_removeShape_(*(_QWORD*)(v3 + 72), v4,
                                                       a3 & 1);
        }
      }
      v9 = PxGetFoundation();
      return (__int64*)(*(__int64 (**)(__int64, __int64, const char*, __int64,
                                       const char*))(*(_QWORD*)v9 + 88LL))(
          v9, 32,
          "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/"
          "ScRigidCore.cpp",
          63, "ScRigidCore::getSimForShape: ShapeSim not found!");
    }
  }
  return result;
}

__int64 physx_source_simulationcontroller_src_3893d0()
{
  __int64 v0;

  v0 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v0 + 88LL))(
      v0, 2,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      1160,
      "Proper solver residual values can only be provided if the scene flag "
      "PxSceneFlag::eENABLE_SOLVER_RESIDUAL_REPORTING is set");
}

#pragma GCC visibility pop
