#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

void __attribute__((noreturn)) SdkRoutine_32f020(_QWORD, _QWORD);
__int64 SdkRoutine_715fa0(_QWORD, _QWORD);
struct PseudoSret SdkRoutine_717720(_QWORD, _QWORD);
float SdkRoutine_864b50(float);
float SdkRoutine_864b60(float);
__int64 SdkRoutine_87ad10(_QWORD, _QWORD);

__int64 SdkHr_61e910(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v9;
  __int64 i;
  __int64 v11;
  bool v12;
  bool v13;
  float v15;
  float v16;
  _DWORD* v18;

  v1 = *(__int64**)(a1 + 8);
  v2 = 128;
  if (*(_QWORD*)(a1 + 128) == 0) {
    v2 = 352;
  }
  v3 = 72;
  if (*(_QWORD*)(a1 + 72) == 0) {
    v3 = v2;
  }
  v4 = v1[1];
  v5 = *(_DWORD*)(*(_QWORD*)(a1 + v3) + 12LL) & 0x3F;
  if ((BYTE4(v4) & 0x3F) != v5) {
    v6 = *v1;
    if (v4 != 0x201A22120LL || v6 != 0) {
      return 1;
    }
  }
  v9 = *(unsigned int*)(a1 + 480);
  if ((_DWORD)v9 != 0) {
    for (i = a1 + 612;; i += 136) {
      v11 = *(_QWORD*)(i - 116);
      if ((*(_DWORD*)(*(_QWORD*)v11 + 12LL) & 0x3F) != v5) {
        break;
      }
      v12 = *(_DWORD*)(v11 + 76) == 2 && *(_DWORD*)(v11 + 80) == 1;
      v13 = v12 && *(_DWORD*)(v11 + 84) == 2;
      if (!v13 || *(_DWORD*)(v11 + 88) != 1) {
        break;
      }
      v15 = 65535.0f;
      v16 = (float)(*(float*)(v11 + 68) * 65535.0f) + 0.5f;
      if (v16 < 65535.0f) {
        v15 = (float)(*(float*)(v11 + 68) * 65535.0f) + 0.5f;
      }
      if (v16 <= 0.0f || (int)v15 != 0xFFFF) {
        break;
      }
      if (*(_QWORD*)(v11 + 120) != 0) {
        break;
      }
      if (*(_QWORD*)(i - 4) != 0) {
        v18 = *(_DWORD**)(v11 + 144);
        if (v18 == nullptr || *v18 == 0 ||
            (unsigned int)(v5 - 17) >= 6 && v5 != 15) {
          break;
        }
      }
      if (fabsf(*(float*)(v11 + 156) + -1.0f) >= 0.00000011921f) {
        break;
      }
      if (--v9 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

float SdkHr_724690(float* a1)
{
  float v1;
  float v3;

  v1 = *a1;
  if ((float)(v1 * v1) <= 0.04f) {
    return (float)((float)(v1 * v1) *
                   (float)((float)((float)(v1 * v1) *
                                   (float)((float)((float)(v1 * v1) *
                                                   (float)((float)((float)(v1 *
                                                                           v1) *
                                                                   (float)(0.0000027557f -
                                                                           (float)((float)(v1 *
                                                                                           v1) *
                                                                                   0.000000025052f))) +
                                                           -0.00019841f)) +
                                           0.0083333f)) +
                           -0.16667f)) +
           1.0f;
  }
  v3 = SdkRoutine_864b50(v1);
  SdkRoutine_864b60(*a1);
  return v3 / *a1;
}

void SdkHr_72b170(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
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
  __int64 v79;
  __int64 v80;
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
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float v106;
  float v107;
  __int64 v108;
  __int64 v109;
  float v110;
  float v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  float v117;
  __int64 v118;
  __int64 v119;
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
  __int64 v138;
  __int64 v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
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
  _QWORD v167[9];
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;

  v2 = *(_QWORD*)(a1 + 8048);
  v3 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8040);
  v169 = v2;
  v170 = *(_QWORD*)(a1 + 8056);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v3, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v3, &v169);
  v6 = (__int64*)SdkRoutine_715fa0(v3, &v170);
  v7 = v169;
  v8 = *v6;
  v9 = a2 + 152;
  v10 = *(float*)(a2 + 4 * v168);
  v11 = *(float*)(a2 + 4 * v169);
  v12 = *(float*)(a2 + 4 * *v6);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v7) = 1;
  *(_BYTE*)(v9 + v8) = 1;
  v13 = sqrtf((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) +
                      (float)(v12 * v12)) +
              1.1755e-38f) *
        0.5f;
  if ((float)(v13 * v13) <= 0.04f) {
    v14 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v13 *
                                                                                        v13) *
                                                                                -0.000000025052f) +
                                                                        0.0000027557f) *
                                                                (float)(v13 *
                                                                        v13)) +
                                                        -0.00019841f) *
                                                (float)(v13 * v13)) +
                                        0.0083333f) *
                                (float)(v13 * v13)) +
                        -0.16667f) *
                (float)(v13 * v13)) +
        1.0f;
  }
  else {
    v14 = SdkRoutine_864b50(v13) / v13;
  }
  v15 = v14 * 0.5f;
  v16 = SdkRoutine_864b60(v13);
  v17 = *(float*)(a1 + 8024);
  v18 = *(float*)(a1 + 8028);
  v19 = *(float*)(a1 + 8032);
  v20 = *(float*)(a1 + 8036);
  v21 = -(
      float)((float)((float)((float)((float)((float)(v10 * v15) * v17) + 0.0f) +
                             (float)((float)(v11 * v15) * v18)) +
                     (float)((float)(v12 * v15) * v19)) -
             (float)(v16 * v20));
  *(float*)(a1 + 8036) = v21;
  v22 = (float)((float)((float)(v10 * v15) * v20) + (float)(v16 * v17)) +
        (float)((float)((float)(v11 * v15) * v19) -
                (float)(v18 * (float)(v12 * v15)));
  v23 = (float)((float)((float)(v11 * v15) * v20) + (float)(v16 * v18)) +
        (float)((float)((float)(v12 * v15) * v17) -
                (float)(v19 * (float)(v10 * v15)));
  v24 = (float)((float)((float)(v10 * v15) * v18) -
                (float)(v17 * (float)(v11 * v15))) +
        (float)((float)(v20 * (float)(v12 * v15)) + (float)(v16 * v19));
  *(float*)(a1 + 8024) = v22;
  *(float*)(a1 + 8028) = v23;
  *(float*)(a1 + 8032) = v24;
  v25 = (float)(v21 * v21) +
        (float)((float)(v24 * v24) +
                (float)((float)(v22 * v22) + (float)(v23 * v23)));
  if (v25 != 0.0f) {
    v26 = 1.0f / sqrtf(v25);
    *(float*)(a1 + 8032) = v24 * v26;
    *(float*)(a1 + 8024) = v22 * v26;
    *(float*)(a1 + 8028) = v23 * v26;
    *(float*)(a1 + 8036) = v21 * v26;
  }
  v27 = *(_QWORD*)(a1 + 8008);
  v28 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8000);
  v169 = v27;
  v170 = *(_QWORD*)(a1 + 8016);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v28, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v28, &v169);
  v29 = (__int64*)SdkRoutine_715fa0(v28, &v170);
  v30 = *v29;
  v31 = v169;
  v32 = *(float*)(a2 + 4 * v168);
  v33 = *(float*)(a2 + 4 * v169);
  v34 = *(float*)(a2 + 4 * *v29);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v31) = 1;
  *(_BYTE*)(v9 + v30) = 1;
  v35 = *(float*)(a1 + 7984);
  v36 = *(_QWORD*)(a1 + 8088);
  v168 = *(_QWORD*)(a1 + 8080);
  v169 = v36;
  v37 = *(_QWORD*)(a1 + 8096);
  v38 = v32 + v35;
  v39 = *(float*)(a1 + 7988);
  *(float*)(a1 + 7984) = v38;
  v170 = v37;
  v40 = v33 + v39;
  v41 = *(float*)(a1 + 7992);
  *(float*)(a1 + 7988) = v40;
  *(float*)(a1 + 7992) = v34 + v41;
  v42 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v42, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v42, &v169);
  v43 = *(_QWORD*)SdkRoutine_715fa0(v42, &v170);
  v44 = v169;
  v175 = 0;
  v176 = 0;
  v173 = 0;
  v174 = 0;
  v171 = 0;
  v172 = 0;
  v169 = 0;
  v170 = 0;
  v45 = *(float*)(a2 + 4 * v168);
  v46 = *(float*)(a2 + 4 * v44);
  v47 = *(float*)(a2 + 4 * v43);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v44) = 1;
  *(_BYTE*)(v9 + v43) = 1;
  v48 = *(_QWORD*)(a1 + 8200);
  v49 = *(_QWORD*)(a1 + 8168);
  v50 = *(_QWORD*)(a1 + 8184);
  v51 = v45 + *(float*)(a1 + 8064);
  v167[6] = *(_QWORD*)(a1 + 0x2000);
  v167[7] = v48;
  v52 = *(_QWORD*)(a1 + 8160);
  v53 = *(float*)(a1 + 8068);
  v54 = *(_QWORD*)(a1 + 8208);
  *(float*)(a1 + 8064) = v51;
  v55 = *(float*)(a1 + 8072);
  v167[2] = v52;
  v167[3] = v49;
  v56 = *(_QWORD*)(a1 + 8176);
  v167[8] = v54;
  v168 = 0;
  v57 = *(_QWORD*)(a1 + 8152);
  *(float*)(a1 + 8068) = v46 + v53;
  v167[4] = v56;
  v167[5] = v50;
  v58 = *(_QWORD*)(a1 + 8144);
  *(float*)(a1 + 8072) = v47 + v55;
  v59 = *(_QWORD*)(a2 + 144);
  v167[0] = v58;
  v167[1] = v57;
  *(struct PseudoSret*)(&v168) = SdkRoutine_717720(v59, v167);
  v60 = v169;
  v61 = v170;
  v62 = v171;
  v63 = v176;
  v64 = *(float*)(a2 + 4 * v168);
  v65 = v172;
  v66 = v173;
  v67 = v174;
  v68 = v175;
  v69 = *(float*)(a2 + 4 * v169);
  v70 = *(float*)(a2 + 4 * v170);
  v71 = *(float*)(a2 + 4 * v171);
  v72 = *(float*)(a2 + 4 * v172);
  v73 = *(float*)(a2 + 4 * v173);
  v74 = *(float*)(a2 + 4 * v174);
  v75 = *(float*)(a2 + 4 * v175);
  v76 = *(float*)(a2 + 4 * v176);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v60) = 1;
  *(_BYTE*)(v9 + v61) = 1;
  *(_BYTE*)(v9 + v62) = 1;
  *(_BYTE*)(v9 + v65) = 1;
  *(_BYTE*)(v9 + v66) = 1;
  *(_BYTE*)(v9 + v67) = 1;
  *(_BYTE*)(v9 + v68) = 1;
  *(_BYTE*)(v9 + v63) = 1;
  v77 = v64 + *(float*)(a1 + 8104);
  v78 = *(float*)(a1 + 8108);
  v79 = *(_QWORD*)(a1 + 8240);
  v168 = *(_QWORD*)(a1 + 8232);
  v169 = v79;
  v80 = *(_QWORD*)(a1 + 8248);
  v81 = v69 + v78;
  v82 = *(float*)(a1 + 8112);
  *(float*)(a1 + 8104) = v77;
  v170 = v80;
  *(float*)(a1 + 8108) = v81;
  v83 = v70 + v82;
  v84 = *(float*)(a1 + 8116);
  *(float*)(a1 + 8112) = v83;
  v85 = v71 + v84;
  v86 = *(float*)(a1 + 8120);
  *(float*)(a1 + 8116) = v85;
  v87 = v72 + v86;
  v88 = *(float*)(a1 + 8124);
  *(float*)(a1 + 8120) = v87;
  v89 = v73 + v88;
  v90 = *(float*)(a1 + 8128);
  *(float*)(a1 + 8124) = v89;
  v91 = v74 + v90;
  v92 = *(float*)(a1 + 8132);
  *(float*)(a1 + 8128) = v91;
  v93 = v75 + v92;
  v94 = *(float*)(a1 + 8136);
  *(float*)(a1 + 8132) = v93;
  *(float*)(a1 + 8136) = v76 + v94;
  v95 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v95, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v95, &v169);
  v96 = (__int64*)SdkRoutine_715fa0(v95, &v170);
  v97 = *v96;
  v98 = v169;
  v99 = *(float*)(a2 + 4 * v168);
  v100 = *(float*)(a2 + 4 * v169);
  v101 = *(float*)(a2 + 4 * *v96);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v98) = 1;
  *(_BYTE*)(v9 + v97) = 1;
  v102 = *(float*)(a1 + 8216);
  v103 = *(_QWORD*)(a1 + 8320);
  v170 = *(_QWORD*)(a1 + 8312);
  v171 = v103;
  v104 = *(_QWORD*)(a1 + 8328);
  v105 = *(_QWORD*)(a1 + 8336);
  v106 = v99 + v102;
  v107 = *(float*)(a1 + 8220);
  *(float*)(a1 + 8216) = v106;
  v172 = v104;
  v173 = v105;
  v108 = *(_QWORD*)(a1 + 8296);
  v109 = *(_QWORD*)(a1 + 8304);
  v110 = v100 + v107;
  v111 = *(float*)(a1 + 8224);
  *(float*)(a1 + 8220) = v110;
  v168 = v108;
  v169 = v109;
  *(float*)(a1 + 8224) = v101 + v111;
  v112 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v112, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v112, &v169);
  v170 = *(_QWORD*)SdkRoutine_715fa0(v112, &v170);
  v171 = *(_QWORD*)SdkRoutine_715fa0(v112, &v171);
  v172 = *(_QWORD*)SdkRoutine_715fa0(v112, &v172);
  v113 = (__int64*)SdkRoutine_715fa0(v112, &v173);
  v114 = *v113;
  v115 = v169;
  v116 = v172;
  v117 = *(float*)(a2 + 4 * v168);
  v118 = v170;
  v119 = v171;
  v120 = *(float*)(a2 + 4 * v169);
  v121 = *(float*)(a2 + 4 * v170);
  v122 = *(float*)(a2 + 4 * v171);
  v123 = *(float*)(a2 + 4 * v172);
  v124 = *(float*)(a2 + 4 * *v113);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v115) = 1;
  *(_BYTE*)(v9 + v118) = 1;
  *(_BYTE*)(v9 + v119) = 1;
  *(_BYTE*)(v9 + v116) = 1;
  *(_BYTE*)(v9 + v114) = 1;
  v125 = *(float*)(a1 + 8260);
  v126 = *(float*)(a1 + 8268);
  v127 = v121 + *(float*)(a1 + 8264);
  v128 = v121 + *(float*)(a1 + 8280);
  v129 = *(float*)(a1 + 8284);
  LODWORD(v114) = *(unsigned __int8*)(a1 + 8384);
  *(float*)(a1 + 8256) = v117 + *(float*)(a1 + 8256);
  *(float*)(a1 + 8264) = v127;
  *(float*)(a1 + 8280) = v128;
  v130 = v120 + v125;
  v131 = v120 + v126;
  v132 = *(float*)(a1 + 8272);
  *(float*)(a1 + 8260) = v130;
  *(float*)(a1 + 8268) = v131;
  v133 = v122 + v132;
  v134 = *(float*)(a1 + 8276);
  *(float*)(a1 + 8272) = v133;
  v135 = v123 + v134;
  v136 = v123 + v129;
  v137 = *(float*)(a1 + 8288);
  *(float*)(a1 + 8276) = v135;
  *(float*)(a1 + 8284) = v136;
  *(float*)(a1 + 8288) = v124 + v137;
  if ((_DWORD)v114 == 1) {
    v138 = *(_QWORD*)(a1 + 8368);
    v139 = *(_QWORD*)(a2 + 144);
    v168 = *(_QWORD*)(a1 + 8360);
    v169 = v138;
    v170 = *(_QWORD*)(a1 + 8376);
    v168 = *(_QWORD*)SdkRoutine_715fa0(v139, &v168);
    v169 = *(_QWORD*)SdkRoutine_715fa0(v139, &v169);
    v140 = (__int64*)SdkRoutine_715fa0(v139, &v170);
    v142 = *v140;
    v143 = v169;
    v144 = *(float*)(a2 + 4 * v168);
    v145 = *(float*)(a2 + 4 * v169);
    v146 = *(float*)(a2 + 4 * *v140);
    *(_BYTE*)(v9 + v168) = 1;
    *(_BYTE*)(v9 + v143) = 1;
    *(_BYTE*)(v9 + v142) = 1;
    if ((*(_BYTE*)(a1 + 8384) & 1) == 0) {
      goto LABEL_16;
    }
    v147 = v146 + *(float*)(a1 + 8352);
    v148 = *(float*)(a1 + 8348);
    *(float*)(a1 + 8344) = v144 + *(float*)(a1 + 8344);
    *(float*)(a1 + 8352) = v147;
    *(float*)(a1 + 8348) = v145 + v148;
  }
  if (*(_BYTE*)(a1 + 8432) != 1) {
    return;
  }
  v149 = *(_QWORD*)(a1 + 8416);
  v150 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8408);
  v169 = v149;
  v170 = *(_QWORD*)(a1 + 8424);
  v168 = *(_QWORD*)SdkRoutine_715fa0(v150, &v168);
  v169 = *(_QWORD*)SdkRoutine_715fa0(v150, &v169);
  v151 = (__int64*)SdkRoutine_715fa0(v150, &v170);
  v152 = v169;
  v153 = *v151;
  v154 = *(float*)(a2 + 4 * v168);
  v155 = *(float*)(a2 + 4 * v169);
  v156 = *(float*)(a2 + 4 * *v151);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v152) = 1;
  *(_BYTE*)(v9 + v153) = 1;
  v157 = sqrtf((float)((float)((float)(v154 * v154) + (float)(v155 * v155)) +
                       (float)(v156 * v156)) +
               1.1755e-38f) *
         0.5f;
  if ((float)(v157 * v157) <= 0.04f) {
    v158 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v157 *
                                                                                        v157) *
                                                                                -0.000000025052f) +
                                                                        0.0000027557f) *
                                                                (float)(v157 *
                                                                        v157)) +
                                                        -0.00019841f) *
                                                (float)(v157 * v157)) +
                                        0.0083333f) *
                                (float)(v157 * v157)) +
                        -0.16667f) *
                (float)(v157 * v157)) +
        1.0f;
  }
  else {
    v158 = SdkRoutine_864b50(v157) / v157;
  }
  v159 = SdkRoutine_864b60(v157);
  if ((*(_BYTE*)(a1 + 8432) & 1) == 0) {
  LABEL_16:
    SdkRoutine_32f020(v140, v141);
  }
  v160 = *(float*)(a1 + 8404);
  v161 = *(float*)(a1 + 8400);
  v162 = *(float*)(a1 + 8392);
  v163 = *(float*)(a1 + 8396);
  v164 = v156 * (float)(v158 * 0.5f);
  v165 = v155 * (float)(v158 * 0.5f);
  v166 = v154 * (float)(v158 * 0.5f);
  *(float*)(a1 + 8404) =
      -(float)((float)((float)((float)((float)(v166 * v162) + 0.0f) +
                               (float)(v165 * v163)) +
                       (float)(v164 * v161)) -
               (float)(v159 * v160));
  *(float*)(a1 + 8396) = (float)((float)(v165 * v160) + (float)(v159 * v163)) +
                         (float)((float)(v164 * v162) - (float)(v161 * v166));
  *(float*)(a1 + 8392) = (float)((float)(v165 * v161) - (float)(v163 * v164)) +
                         (float)((float)(v166 * v160) + (float)(v159 * v162));
  *(float*)(a1 + 8400) = (float)((float)(v164 * v160) + (float)(v159 * v161)) +
                         (float)((float)(v166 * v163) - (float)(v162 * v165));
}

__int64* SdkHr_72cca0(_QWORD* a1, float a2)
{
  __int64 v3;
  float v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  __int64* result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v3 = a1[1011];
  v5 = a2 * 0.01f;
  v49 = a1[1010];
  v50 = v3;
  v51 = a1[1012];
  v49 = *(_QWORD*)SdkRoutine_715fa0(a1 + 548, &v49);
  v50 = *(_QWORD*)SdkRoutine_715fa0(a1 + 548, &v50);
  v6 = (__int64*)SdkRoutine_715fa0(a1 + 548, &v51);
  v7 = v49;
  v8 = v50;
  v9 = a1 + 2;
  v10 = *v6;
  v11 = (__int64)a1 + 132 * v49 + 16;
  *(float*)(v11 + 4 * v49) = v5 + *(float*)(v11 + 4 * v49);
  *(float*)(v11 + 4 * v8) = *(float*)(v11 + 4 * v8) + 0.0f;
  *(float*)(v11 + 4 * v10) = *(float*)(v11 + 4 * v10) + 0.0f;
  v12 = (__int64)a1 + 132 * v8 + 16;
  v13 = (__int64)a1 + 132 * v10 + 16;
  *(float*)(v12 + 4 * v7) = *(float*)(v12 + 4 * v7) + 0.0f;
  *(float*)(v12 + 4 * v8) = v5 + *(float*)(v12 + 4 * v8);
  *(float*)(v12 + 4 * v10) = *(float*)(v12 + 4 * v10) + 0.0f;
  *(float*)(v13 + 4 * v7) = *(float*)(v13 + 4 * v7) + 0.0f;
  *(float*)(v13 + 4 * v8) = *(float*)(v13 + 4 * v8) + 0.0f;
  *(float*)(v13 + 4 * v10) = v5 + *(float*)(v13 + 4 * v10);
  v14 = a1[1520];
  if (v14 != 0) {
    v15 = a1[1522];
    v16 = a1[1521];
    v17 = v15 >= v14;
    v18 = v15 - v14;
    if (v17) {
      v19 = 0;
    }
    else {
      v19 = a1[1521];
    }
    v20 = v18 + v19;
    v21 = (__int64)a1 + 1860 * v20 + 9320;
    do {
      v17 = v20++ >= v16;
      if (v17) {
        v22 = v16;
      }
      else {
        v22 = 0;
      }
      --v14;
      v23 = (float*)(v21 - 1860 * v22);
      v21 += 1860;
      v24 = *(v23 - 21) + 0.0f;
      *(v23 - 22) = v5 + *(v23 - 22);
      *(v23 - 21) = v24;
      *(v23 - 20) = *(v23 - 20) + 0.0f;
      v25 = v5 + *v23;
      *(v23 - 1) = *(v23 - 1) + 0.0f;
      *v23 = v25;
      v23[1] = v23[1] + 0.0f;
      v26 = v23[21] + 0.0f;
      v23[20] = v23[20] + 0.0f;
      v23[21] = v26;
      v23[22] = v5 + v23[22];
    } while (v14 != 0);
  }
  v27 = a1[1030];
  v28 = a2 * 4.0e-10f;
  v49 = a1[1029];
  v50 = v27;
  v51 = a1[1031];
  v49 = *(_QWORD*)SdkRoutine_715fa0(a1 + 548, &v49);
  v50 = *(_QWORD*)SdkRoutine_715fa0(a1 + 548, &v50);
  result = (__int64*)SdkRoutine_715fa0(a1 + 548, &v51);
  v30 = v49;
  v31 = v50;
  v32 = *result;
  v33 = (char*)v9 + 132 * v49;
  *(float*)&v33[4 * v49] = v28 + *(float*)&v33[4 * v49];
  *(float*)&v33[4 * v31] = *(float*)&v33[4 * v31] + 0.0f;
  *(float*)&v33[4 * v32] = *(float*)&v33[4 * v32] + 0.0f;
  v34 = (char*)v9 + 132 * v31;
  v35 = (char*)v9 + 132 * v32;
  *(float*)&v34[4 * v30] = *(float*)&v34[4 * v30] + 0.0f;
  *(float*)&v34[4 * v31] = v28 + *(float*)&v34[4 * v31];
  *(float*)&v34[4 * v32] = *(float*)&v34[4 * v32] + 0.0f;
  *(float*)&v35[4 * v30] = *(float*)&v35[4 * v30] + 0.0f;
  *(float*)&v35[4 * v31] = *(float*)&v35[4 * v31] + 0.0f;
  *(float*)&v35[4 * v32] = v28 + *(float*)&v35[4 * v32];
  v36 = a1[1520];
  if (v36 != 0) {
    v37 = a1[1522];
    v38 = v37;
    do {
      v39 = a1[1520];
      v40 = a1[1521];
      if (v39 <= v37) {
        v41 = 0;
      }
      else {
        v41 = a1[1521];
      }
      if (v38 + v41 - v39 < v40) {
        v40 = 0;
      }
      --v36;
      v42 = v38 + v41 - v40 - v39;
      ++v38;
      v43 = (float*)a1 + 465 * v42 + 2110;
      v44 = v43[1] + 0.0f;
      v45 = v43[23] + 0.0f;
      *v43 = v28 + *v43;
      v43[1] = v44;
      v46 = v43[2];
      v43[23] = v45;
      v43[2] = v46 + 0.0f;
      v47 = v28 + v43[22];
      v43[21] = v43[21] + 0.0f;
      v43[22] = v47;
      v48 = v43[43] + 0.0f;
      v43[42] = v43[42] + 0.0f;
      v43[43] = v48;
      v43[44] = v28 + v43[44];
    } while (v36 != 0);
  }
  return result;
}

bool SdkHr_744460(float* a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  char v47;
  unsigned __int64 v48;
  char v49;
  unsigned __int64 v50;
  char v51;
  unsigned __int64 v52;
  char v53;
  unsigned __int64 v54;
  char v55;
  unsigned __int64 v56;
  char v57;
  unsigned __int64 v58;
  char v59;
  unsigned __int64 v60;
  char v61;
  unsigned __int64 v62;
  char v63;
  unsigned __int64 v64;
  char v65;
  unsigned __int64 v66;
  char v67;
  unsigned __int64 v68;
  char v69;
  unsigned __int64 v70;
  char v71;
  unsigned __int64 v72;
  char v73;
  unsigned int v74;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  v5 = v4 - v3;
  if (v4 - v3 >= 0x12) {
    v6 = *v2;
    if (v4 <= v3) {
      v9 = 0;
    }
    else {
      v7 = v3 >> 3;
      v8 = (*a2)[1] & 7;
      ++v3;
      LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
      v2[1] = v3;
      v9 = 2 * (((unsigned int)v7 >> v8) & 1);
      if (v3 < v4) {
        v42 = v3 >> 3;
        v43 = v3++ & 7;
        LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
        v2[1] = v3;
        v10 = ((unsigned int)v42 >> v43) & 1;
        if (v3 >= v4) {
        LABEL_5:
          v11 = 0;
          v12 = v10 | v9;
          if (v3 >= v4) {
            goto LABEL_6;
          }
          goto LABEL_24;
        }
      LABEL_23:
        v44 = v3 >> 3;
        v45 = v3++ & 7;
        LODWORD(v44) = *(unsigned __int8*)(v6 + v44);
        v2[1] = v3;
        v11 = 2 * (((unsigned int)v44 >> v45) & 1);
        v12 = v10 | v9;
        if (v3 >= v4) {
        LABEL_6:
          v13 = 0;
          v14 = v11 | (4 * v12);
          if (v3 >= v4) {
            goto LABEL_7;
          }
          goto LABEL_25;
        }
      LABEL_24:
        v46 = v3 >> 3;
        v47 = v3++ & 7;
        LODWORD(v46) = *(unsigned __int8*)(v6 + v46);
        v2[1] = v3;
        v13 = ((unsigned int)v46 >> v47) & 1;
        v14 = v11 | (4 * v12);
        if (v3 >= v4) {
        LABEL_7:
          v15 = 0;
          v16 = v13 | v14;
          if (v3 >= v4) {
            goto LABEL_8;
          }
          goto LABEL_26;
        }
      LABEL_25:
        v48 = v3 >> 3;
        v49 = v3++ & 7;
        LODWORD(v48) = *(unsigned __int8*)(v6 + v48);
        v2[1] = v3;
        v15 = 2 * (((unsigned int)v48 >> v49) & 1);
        v16 = v13 | v14;
        if (v3 >= v4) {
        LABEL_8:
          v17 = 0;
          v18 = v15 | (4 * v16);
          if (v3 >= v4) {
            goto LABEL_9;
          }
          goto LABEL_27;
        }
      LABEL_26:
        v50 = v3 >> 3;
        v51 = v3++ & 7;
        LODWORD(v50) = *(unsigned __int8*)(v6 + v50);
        v2[1] = v3;
        v17 = ((unsigned int)v50 >> v51) & 1;
        v18 = v15 | (4 * v16);
        if (v3 >= v4) {
        LABEL_9:
          v19 = 0;
          v20 = v17 | v18;
          if (v3 >= v4) {
            goto LABEL_10;
          }
          goto LABEL_28;
        }
      LABEL_27:
        v52 = v3 >> 3;
        v53 = v3++ & 7;
        LODWORD(v52) = *(unsigned __int8*)(v6 + v52);
        v2[1] = v3;
        v19 = 2 * (((unsigned int)v52 >> v53) & 1);
        v20 = v17 | v18;
        if (v3 >= v4) {
        LABEL_10:
          v21 = 0;
          v22 = v19 | (4 * v20);
          if (v3 >= v4) {
            goto LABEL_11;
          }
          goto LABEL_29;
        }
      LABEL_28:
        v54 = v3 >> 3;
        v55 = v3++ & 7;
        LODWORD(v54) = *(unsigned __int8*)(v6 + v54);
        v2[1] = v3;
        v21 = ((unsigned int)v54 >> v55) & 1;
        v22 = v19 | (4 * v20);
        if (v3 >= v4) {
        LABEL_11:
          v23 = 0;
          v24 = v21 | v22;
          if (v3 >= v4) {
            goto LABEL_12;
          }
          goto LABEL_30;
        }
      LABEL_29:
        v56 = v3 >> 3;
        v57 = v3++ & 7;
        LODWORD(v56) = *(unsigned __int8*)(v6 + v56);
        v2[1] = v3;
        v23 = 2 * (((unsigned int)v56 >> v57) & 1);
        v24 = v21 | v22;
        if (v3 >= v4) {
        LABEL_12:
          v25 = 0;
          v26 = v23 | (4 * v24);
          if (v3 >= v4) {
            goto LABEL_13;
          }
          goto LABEL_31;
        }
      LABEL_30:
        v58 = v3 >> 3;
        v59 = v3++ & 7;
        LODWORD(v58) = *(unsigned __int8*)(v6 + v58);
        v2[1] = v3;
        v25 = ((unsigned int)v58 >> v59) & 1;
        v26 = v23 | (4 * v24);
        if (v3 >= v4) {
        LABEL_13:
          v27 = 0;
          v28 = v25 | v26;
          if (v3 >= v4) {
            goto LABEL_14;
          }
          goto LABEL_32;
        }
      LABEL_31:
        v60 = v3 >> 3;
        v61 = v3++ & 7;
        LODWORD(v60) = *(unsigned __int8*)(v6 + v60);
        v2[1] = v3;
        v27 = 2 * (((unsigned int)v60 >> v61) & 1);
        v28 = v25 | v26;
        if (v3 >= v4) {
        LABEL_14:
          v29 = 0;
          v30 = v27 | (4 * v28);
          if (v3 >= v4) {
            goto LABEL_15;
          }
          goto LABEL_33;
        }
      LABEL_32:
        v62 = v3 >> 3;
        v63 = v3++ & 7;
        LODWORD(v62) = *(unsigned __int8*)(v6 + v62);
        v2[1] = v3;
        v29 = ((unsigned int)v62 >> v63) & 1;
        v30 = v27 | (4 * v28);
        if (v3 >= v4) {
        LABEL_15:
          v31 = 0;
          v32 = v29 | v30;
          if (v3 >= v4) {
            goto LABEL_16;
          }
          goto LABEL_34;
        }
      LABEL_33:
        v64 = v3 >> 3;
        v65 = v3++ & 7;
        LODWORD(v64) = *(unsigned __int8*)(v6 + v64);
        v2[1] = v3;
        v31 = 2 * (((unsigned int)v64 >> v65) & 1);
        v32 = v29 | v30;
        if (v3 >= v4) {
        LABEL_16:
          v33 = 0;
          v34 = v31 | (4 * v32);
          if (v3 >= v4) {
            goto LABEL_17;
          }
          goto LABEL_35;
        }
      LABEL_34:
        v66 = v3 >> 3;
        v67 = v3++ & 7;
        LODWORD(v66) = *(unsigned __int8*)(v6 + v66);
        v2[1] = v3;
        v33 = ((unsigned int)v66 >> v67) & 1;
        v34 = v31 | (4 * v32);
        if (v3 >= v4) {
        LABEL_17:
          v35 = 0;
          v36 = v33 | v34;
          if (v3 >= v4) {
            goto LABEL_18;
          }
          goto LABEL_36;
        }
      LABEL_35:
        v68 = v3 >> 3;
        v69 = v3++ & 7;
        LODWORD(v68) = *(unsigned __int8*)(v6 + v68);
        v2[1] = v3;
        v35 = 2 * (((unsigned int)v68 >> v69) & 1);
        v36 = v33 | v34;
        if (v3 >= v4) {
        LABEL_18:
          v37 = 0;
          v38 = v35 | (4 * v36);
          if (v3 >= v4) {
            goto LABEL_19;
          }
          goto LABEL_37;
        }
      LABEL_36:
        v70 = v3 >> 3;
        v71 = v3++ & 7;
        LODWORD(v70) = *(unsigned __int8*)(v6 + v70);
        v2[1] = v3;
        v37 = ((unsigned int)v70 >> v71) & 1;
        v38 = v35 | (4 * v36);
        if (v3 >= v4) {
        LABEL_19:
          v39 = 0;
          v40 = v37 | v38;
          if (v3 >= v4) {
          LABEL_20:
            v41 = 0;
          LABEL_39:
            *a1 = (float)((float)((float)(v41 | v39 |
                                          (unsigned __int64)(4 * v40)) *
                                  0.0000038147f) *
                          143900.0f) +
                  100.0f;
            return v5 > 0x11;
          }
        LABEL_38:
          v74 = *(unsigned __int8*)(v6 + (v3 >> 3));
          v2[1] = v3 + 1;
          v41 = (v74 >> (v3 & 7)) & 1;
          goto LABEL_39;
        }
      LABEL_37:
        v72 = v3 >> 3;
        v73 = v3++ & 7;
        LODWORD(v72) = *(unsigned __int8*)(v6 + v72);
        v2[1] = v3;
        v39 = 2 * (((unsigned int)v72 >> v73) & 1);
        v40 = v37 | v38;
        if (v3 >= v4) {
          goto LABEL_20;
        }
        goto LABEL_38;
      }
    }
    v10 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_23;
  }
  return v5 > 0x11;
}

__int64 SdkHr_74b2e0(__int64 a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char v14;
  unsigned int v15;
  unsigned __int64 v16;
  char v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 == v3) {
    return 0;
  }
  if (v3 >= v4) {
    *(_BYTE*)a1 = 0;
    return 1;
  }
  v6 = *(unsigned __int8*)(*v2 + (v3 >> 3));
  v2[1] = v3 + 1;
  *(_BYTE*)a1 = ((1 << (v3 & 7)) & v6) != 0;
  if (((1 << (v3 & 7)) & v6) == 0) {
    return 1;
  }
  if ((SdkRoutine_87ad10(a1 + 4, a2) & 1) == 0) {
    return 0;
  }
  if ((SdkRoutine_87ad10(a1 + 12, a2) & 1) == 0) {
    return 0;
  }
  v9 = *a2;
  v10 = (*a2)[1];
  v11 = (*a2)[2];
  if (v11 - v10 < 3) {
    return 0;
  }
  v12 = *v9;
  if (v11 <= v10) {
    v15 = 0;
  }
  else {
    v13 = v10 >> 3;
    v14 = v10++ & 7;
    LODWORD(v13) = *(unsigned __int8*)(v12 + v13);
    v9[1] = v10;
    v15 = 2 * (((unsigned int)v13 >> v14) & 1);
  }
  if (v10 >= v11) {
    v18 = 0;
  }
  else {
    v16 = v10 >> 3;
    v17 = v10++ & 7;
    LODWORD(v16) = *(unsigned __int8*)(v12 + v16);
    v9[1] = v10;
    v18 = ((unsigned int)v16 >> v17) & 1;
  }
  v19 = v18 | v15;
  if (v10 >= v11) {
    v21 = 0;
  }
  else {
    v20 = *(unsigned __int8*)(v12 + (v10 >> 3));
    v9[1] = v10 + 1;
    v21 = (v20 >> (v10 & 7)) & 1;
  }
  *(_DWORD*)(a1 + 20) = (v21 | (2 * v19)) - 1;
  v22 = *a2;
  v23 = (*a2)[1];
  v24 = (*a2)[2];
  if (v24 - v23 < 8) {
    return 0;
  }
  v25 = *v22;
  if (v24 <= v23) {
    v28 = 0;
  }
  else {
    v26 = v23 >> 3;
    v27 = (*a2)[1] & 7;
    ++v23;
    LODWORD(v26) = *(unsigned __int8*)(v25 + v26);
    v22[1] = v23;
    v28 = 2 * (((unsigned int)v26 >> v27) & 1);
  }
  if (v23 >= v24) {
    v31 = 0;
  }
  else {
    v29 = v23 >> 3;
    v30 = v23++ & 7;
    LODWORD(v29) = *(unsigned __int8*)(v25 + v29);
    v22[1] = v23;
    v31 = ((unsigned int)v29 >> v30) & 1;
  }
  if (v23 >= v24) {
    v34 = 0;
  }
  else {
    v32 = v23 >> 3;
    v33 = v23++ & 7;
    LODWORD(v32) = *(unsigned __int8*)(v25 + v32);
    v22[1] = v23;
    v34 = 2 * (((unsigned int)v32 >> v33) & 1);
  }
  v35 = v31 | v28;
  if (v23 >= v24) {
    v38 = 0;
  }
  else {
    v36 = v23 >> 3;
    v37 = v23++ & 7;
    LODWORD(v36) = *(unsigned __int8*)(v25 + v36);
    v22[1] = v23;
    v38 = ((unsigned int)v36 >> v37) & 1;
  }
  v39 = v34 | (4 * v35);
  if (v23 >= v24) {
    v42 = 0;
  }
  else {
    v40 = v23 >> 3;
    v41 = v23++ & 7;
    LODWORD(v40) = *(unsigned __int8*)(v25 + v40);
    v22[1] = v23;
    v42 = 2 * (((unsigned int)v40 >> v41) & 1);
  }
  v43 = v38 | v39;
  if (v23 >= v24) {
    v46 = 0;
  }
  else {
    v44 = v23 >> 3;
    v45 = v23++ & 7;
    LODWORD(v44) = *(unsigned __int8*)(v25 + v44);
    v22[1] = v23;
    v46 = ((unsigned int)v44 >> v45) & 1;
  }
  v47 = v42 | (4 * v43);
  if (v23 >= v24) {
    v50 = 0;
  }
  else {
    v48 = v23 >> 3;
    v49 = v23++ & 7;
    LODWORD(v48) = *(unsigned __int8*)(v25 + v48);
    v22[1] = v23;
    v50 = 2 * (((unsigned int)v48 >> v49) & 1);
  }
  v51 = v46 | v47;
  if (v23 >= v24) {
    v53 = 0;
  }
  else {
    v52 = *(unsigned __int8*)(v25 + (v23 >> 3));
    v22[1] = v23 + 1;
    v53 = (v52 >> (v23 & 7)) & 1;
  }
  *(float*)(a1 + 24) =
      (float)((float)(v53 | v50 | (unsigned __int64)(4 * v51)) * 0.0039216f) +
      0.0f;
  return 1;
}

#pragma GCC visibility pop
