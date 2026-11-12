#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float math_733a20(_QWORD* a1, float a2);

float math_733a20(_QWORD* a1, float a2)
{
  float* v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
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
  float v58;
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
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
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
  float v93;
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

  v2 = (float*)a1[1];
  v3 = *(float*)(*a1 + 4LL);
  v4 = v2[12];
  v5 = v2[13];
  v7 = v2[14];
  v6 = v2[15];
  v120 = *(float*)(*a1 + 20LL);
  v118 = *(float*)(*a1 + 28LL);
  v119 = *(float*)(*a1 + 24LL);
  v8 = v2[1];
  v116 = *(float*)(*a1 + 32LL);
  v96 = *(float*)(*a1 + 36LL);
  v9 = 1.0 - a2;
  v10 = (float)((float)(a2 * a2) * v3) - (float)((float)(v9 * v9) * v8);
  v12 = *(float*)(*a1 + 40LL);
  v11 = *(float*)(*a1 + 44LL);
  v102 = v2[5];
  v14 = *(float*)(*a1 + 56LL);
  v13 = *(float*)(*a1 + 60LL);
  v100 = v2[7];
  v107 = (float)((float)(a2 * a2) * v120) - (float)((float)(v9 * v9) * v102);
  v95 = (float)((float)((float)(a2 * a2) * *(float*)*a1) -
                (float)((float)(v9 * v9) * *v2)) /
        (float)((float)((float)(a2 * *(float*)*a1) +
                        (float)((float)(1.0 - a2) * *v2)) *
                (float)((float)(a2 * *(float*)*a1) +
                        (float)((float)(1.0 - a2) * *v2)));
  v15 = v2[16];
  v16 = v2[17];
  v17 = (float)((float)(a2 * a2) * v13) - (float)((float)(v9 * v9) * v6);
  v18 = (float)(a2 * v13) + (float)((float)(1.0 - a2) * v6);
  v106 = (float)((float)(a2 * a2) * v119) - (float)((float)(v9 * v9) * v2[6]);
  v98 = v2[8];
  v97 = v2[9];
  v104 = (float)((float)(a2 * a2) * v116) - (float)((float)(v9 * v9) * v98);
  v105 = (float)((float)(a2 * a2) * v118) - (float)((float)(v9 * v9) * v100);
  v20 = *(float*)(*a1 + 48LL);
  v19 = *(float*)(*a1 + 52LL);
  v103 = (float)((float)(a2 * a2) * v96) - (float)((float)(v9 * v9) * v97);
  v21 = (float)(a2 * a2) * v12;
  v22 = a2 * v12;
  v101 = v2[10];
  v99 = v2[11];
  v23 = v21 - (float)((float)(v9 * v9) * v101);
  v24 = (float)(a2 * a2) * v11;
  v25 = a2 * v11;
  v26 = (float)(v9 * v9) * v4;
  v27 = (float)(1.0 - a2) * v4;
  v112 = v23;
  v113 = v24 - (float)((float)(v9 * v9) * v99);
  v28 = (float)(a2 * a2) * v20;
  v29 = a2 * v20;
  v30 = v28 - v26;
  v31 = (float)(a2 * a2) * v19;
  v32 = (float)(v9 * v9) * v5;
  v33 = a2 * v19;
  v34 = (float)(1.0 - a2) * v5;
  v110 = v31 - v32;
  v111 = v30;
  v36 = *(float*)(*a1 + 64LL);
  v35 = *(float*)(*a1 + 68LL);
  v37 = (float)((float)(a2 * a2) * v14) - (float)((float)(v9 * v9) * v7);
  v38 = (float)(a2 * v14) + (float)((float)(1.0 - a2) * v7);
  v109 = v37;
  v39 = (float)((float)(a2 * a2) * v36) - (float)((float)(v9 * v9) * v15);
  v40 = a2 * v3;
  v42 = v2[18];
  v41 = v2[19];
  v43 = (float)(a2 * v36) + (float)((float)(1.0 - a2) * v15);
  v44 = (float)(v9 * v9) * v42;
  v45 = (float)(1.0 - a2) * v42;
  v46 = v10 / (float)((float)(v40 + (float)((float)(1.0 - a2) * v8)) *
                      (float)(v40 + (float)((float)(1.0 - a2) * v8)));
  v47 = (float)((float)(a2 * a2) * v35) - (float)((float)(v9 * v9) * v16);
  v48 = (float)(a2 * v35) + (float)((float)(1.0 - a2) * v16);
  v93 = v46;
  v114 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 8LL)) -
                 (float)((float)(v9 * v9) * v2[2])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 8LL)) +
                         (float)((float)(1.0 - a2) * v2[2])) *
                 (float)((float)(a2 * *(float*)(*a1 + 8LL)) +
                         (float)((float)(1.0 - a2) * v2[2])));
  v50 = *(float*)(*a1 + 72LL);
  v49 = *(float*)(*a1 + 76LL);
  v51 = (float)((float)(a2 * a2) * v50) - v44;
  v52 = (float)(v9 * v9) * v41;
  v53 = (float)(1.0 - a2) * v41;
  v54 = (float)(a2 * a2) * v49;
  v55 = a2 * v49;
  v108 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 12LL)) -
                 (float)((float)(v9 * v9) * v2[3])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 12LL)) +
                         (float)((float)(1.0 - a2) * v2[3])) *
                 (float)((float)(a2 * *(float*)(*a1 + 12LL)) +
                         (float)((float)(1.0 - a2) * v2[3])));
  v56 = v54 - v52;
  v57 = *(float*)(*a1 + 80LL);
  v58 = v2[20];
  v59 = (float*)a1[2];
  v94 = v56;
  v60 = (float)(v9 * v9) * v58;
  v61 = (float)(1.0 - a2) * v58;
  v115 = (float)((float)(a2 * a2) * v57) - v60;
  v62 = a2 * v118;
  v63 = a2 * v96;
  v64 = a2 * v50;
  v117 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 16LL)) -
                 (float)((float)(v9 * v9) * v2[4])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 16LL)) +
                         (float)((float)(1.0 - a2) * v2[4])) *
                 (float)((float)(a2 * *(float*)(*a1 + 16LL)) +
                         (float)((float)(1.0 - a2) * v2[4])));
  v65 = a2 * v119;
  v66 = (float)(a2 * v120) + (float)((float)(1.0 - a2) * v102);
  v67 = a2 * v116;
  v68 = a2 * v57;
  v69 = v63 + (float)(v9 * v97);
  v70 = v66 * v66;
  v71 = v106 / (float)((float)(v65 + (float)(v9 * v2[6])) *
                       (float)(v65 + (float)(v9 * v2[6])));
  v72 = v105 / (float)((float)(v62 + (float)(v9 * v100)) *
                       (float)(v62 + (float)(v9 * v100)));
  v73 = (float)(v67 + (float)(v9 * v98)) * (float)(v67 + (float)(v9 * v98));
  v74 = v9 * v99;
  v75 = v22 + (float)(v9 * v101);
  v76 = v25 + v74;
  v77 = v29 + v27;
  v78 = v55 + v53;
  v79 = v68 + v61;
  v80 = v76 * v76;
  v81 = v111 / (float)(v77 * v77);
  v82 = v109 / (float)(v38 * v38);
  v83 = v17 / (float)(v18 * v18);
  v84 = v39 / (float)(v43 * v43);
  v85 = v51 / (float)((float)(v64 + v45) * (float)(v64 + v45));
  v86 = v47 / (float)(v48 * v48);
  v87 = v93 * (float)(v59[1] * v59[1]);
  v88 = v114 * (float)(v59[2] * v59[2]);
  v89 = v108 * (float)(v59[3] * v59[3]);
  v90 = v71 * (float)(v59[6] * v59[6]);
  v91 = (float)(v110 / (float)((float)(v33 + v34) * (float)(v33 + v34))) *
        (float)(v59[13] * v59[13]);
  return -(float)((
                      float)((
                                 float)((
                                            float)((
                                                       float)((float)((float)((float)((
                                                                                          float)((
                                                                                                     float)((
                                                                                                                float)((
                                                                                                                           float)((
                                                                                                                                      float)((
                                                                                                                                                 float)((
                                                                                                                                                            float)((float)((float)((float)((float)((float)((float)((float)(v95 * (float)(*v59 * *v59)) + 0.0) + v87) + v88) + v89) + (float)(v117 *
                                                                                                                                                                                                                                                                                             (float)(v59[4] * v59[4]))) +
                                                                                                                                                                           (float)((float)(v107 / v70) *
                                                                                                                                                                                   (float)(v59[5] * v59[5]))) +
                                                                                                                                                                   v90) +
                                                                                                                                                        (float)(v72 *
                                                                                                                                                                (float)(v59[7] *
                                                                                                                                                                        v59[7]))) +
                                                                                                                                             (float)((float)(v104 / v73) * (float)(v59[8] *
                                                                                                                                                                                   v59[8]))) +
                                                                                                                                  (float)((
                                                                                                                                              float)(v103 /
                                                                                                                                                     (float)(v69 *
                                                                                                                                                             v69)) *
                                                                                                                                          (float)(v59[9] *
                                                                                                                                                  v59[9]))) +
                                                                                                                       (float)((
                                                                                                                                   float)(v112 /
                                                                                                                                          (float)(v75 *
                                                                                                                                                  v75)) *
                                                                                                                               (float)(v59[10] *
                                                                                                                                       v59[10]))) +
                                                                                                            (float)((float)(v113 /
                                                                                                                            v80) *
                                                                                                                    (float)(v59[11] *
                                                                                                                            v59[11]))) +
                                                                                                 (float)(v81 *
                                                                                                         (float)(v59[12] *
                                                                                                                 v59[12]))) +
                                                                                      v91) +
                                                                              (float)(v82 *
                                                                                      (float)(v59[14] *
                                                                                              v59[14]))) +
                                                                      (float)(v83 *
                                                                              (float)(v59[15] *
                                                                                      v59[15]))) +
                                                              (float)(v84 *
                                                                      (float)(v59[16] *
                                                                              v59[16]))) +
                                                   (float)(v86 *
                                                           (float)(v59[17] *
                                                                   v59[17]))) +
                                        (float)(v85 *
                                                (float)(v59[18] * v59[18]))) +
                             (float)((float)(v94 / (float)(v78 * v78)) *
                                     (float)(v59[19] * v59[19]))) +
                  (float)((float)(v115 / (float)(v79 * v79)) *
                          (float)(v59[20] * v59[20])));
}

#pragma GCC visibility pop
