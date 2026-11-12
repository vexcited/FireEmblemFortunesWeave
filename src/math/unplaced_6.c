#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a0a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a0b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a2f0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_716760(PSEUDO_X8, float*);
__attribute__((swiftcall)) void math_71ec60(PSEUDO_X8, __int64, _QWORD*,
                                            __int64, unsigned __int64);
__int64 SdkRoutine_87a2d0(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
__attribute__((swiftcall)) void math_702080(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4);
__attribute__((swiftcall)) void math_70b0c0(PSEUDO_X8 x8_, float* a1, float a3,
                                            float a4, float a5);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2);

__attribute__((swiftcall)) void math_702080(PSEUDO_X8 x8_, __int64 a1,
                                            __int64* a2, __int64* a3,
                                            unsigned __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
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
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  _DWORD* v62;
  __int64 v65;
  struct {
    char gap16_[4];
    _BYTE v66[2924];
    char gap2944_[8];
    __int64 v67;
  } v66_;

  memset_plt((void*)v66_.v66, nullptr, 2916, a4);
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = 0;
  v66_.v67 = *a3;
  v12 = a3[4];
  v13 = a3[5];
  v14 = a3[6];
  v15 = a3[7];
  v16 = a3[8];
  v17 = a3[9];
  v18 = a3[10];
  v19 = a3[11];
  v20 = a3[12];
  v21 = a3[13];
  v65 = v8;
  v22 = a3[14];
  v23 = a3[15];
  v24 = a3[16];
  v25 = a3[17];
  v26 = a3[18];
  v27 = a3[19];
  v28 = a3[20];
  v29 = a3[21];
  v30 = a3[22];
  v31 = a3[23];
  v32 = a3[24];
  v33 = a3[25];
  v34 = a3[26];
  do {
    v35 = *a2++;
    v36 = *(_DWORD*)(a1 + 4 * (27 * v35 + v65));
    v37 = *(_DWORD*)(a1 + 4 * (27 * v35 + v9));
    v38 = *(_DWORD*)(a1 + 4 * (27 * v35 + v10));
    v39 = *(_DWORD*)(a1 + 4 * (27 * v35 + v12));
    v40 = *(_DWORD*)(a1 + 4 * (27 * v35 + v13));
    v41 = *(_DWORD*)(a1 + 4 * (27 * v35 + v14));
    v42 = *(_DWORD*)(a1 + 4 * (27 * v35 + v15));
    v43 = *(_DWORD*)(a1 + 4 * (27 * v35 + v16));
    v44 = *(_DWORD*)(a1 + 4 * (27 * v35 + v17));
    v45 = *(_DWORD*)(a1 + 4 * (27 * v35 + v18));
    v46 = *(_DWORD*)(a1 + 4 * (27 * v35 + v19));
    v47 = *(_DWORD*)(a1 + 4 * (27 * v35 + v20));
    v48 = *(_DWORD*)(a1 + 4 * (27 * v35 + v21));
    v49 = *(_DWORD*)(a1 + 4 * (27 * v35 + v22));
    v50 = *(_DWORD*)(a1 + 4 * (27 * v35 + v23));
    v51 = *(_DWORD*)(a1 + 4 * (27 * v35 + v24));
    v52 = *(_DWORD*)(a1 + 4 * (27 * v35 + v25));
    v53 = *(_DWORD*)(a1 + 4 * (27 * v35 + v26));
    v54 = *(_DWORD*)(a1 + 4 * (27 * v35 + v27));
    v55 = *(_DWORD*)(a1 + 4 * (27 * v35 + v28));
    v56 = *(_DWORD*)(a1 + 4 * (27 * v35 + v29));
    v57 = *(_DWORD*)(a1 + 4 * (27 * v35 + v30));
    v58 = *(_DWORD*)(a1 + 4 * (27 * v35 + v31));
    v59 = *(_DWORD*)(a1 + 4 * (27 * v35 + v32));
    v60 = *(_DWORD*)(a1 + 4 * (27 * v35 + v33));
    v61 = *(_DWORD*)(a1 + 4 * (27 * v35 + v34));
    v62 = &v66_.v66[v11];
    v11 += 108;
    *v62 = *(_DWORD*)(a1 + 4 * (27 * v35 + v66_.v67));
    v62[1] = v36;
    v62[2] = v37;
    v62[3] = v38;
    v62[4] = v39;
    v62[5] = v40;
    v62[6] = v41;
    v62[7] = v42;
    v62[8] = v43;
    v62[9] = v44;
    v62[10] = v45;
    v62[11] = v46;
    v62[12] = v47;
    v62[13] = v48;
    v62[14] = v49;
    v62[15] = v50;
    v62[16] = v51;
    v62[17] = v52;
    v62[18] = v53;
    v62[19] = v54;
    v62[20] = v55;
    v62[21] = v56;
    v62[22] = v57;
    v62[23] = v58;
    v62[24] = v59;
    v62[25] = v60;
    v62[26] = v61;
  } while (v11 != 2916);
  {
    memcpy_plt(a5, v66_.v66, 2916);
    return;
  }
}

__attribute__((swiftcall)) void math_70b0c0(PSEUDO_X8 x8_, float* a1, float a3,
                                            float a4, float a5)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  float v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  _QWORD* v14;
  __int64 v15;
  float v16;
  float v17;
  _QWORD* v18;
  char v19;
  char v20;
  float v21;
  float v22;
  _QWORD* v23;
  __int64 v24;
  float v25;
  _QWORD* v26;
  float v27;
  _QWORD* v28;
  char v29;
  char v30;
  float v31;
  float v32;
  _QWORD* v33;
  __int64 v34;
  float v35;
  _QWORD* v36;
  float v37;
  _QWORD* v38;
  char v39;
  char v40;
  float v41;
  float v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  float v46;
  _QWORD* v47;
  float v48;
  __int64 v49;
  float v50;
  float v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  float v55;
  float v56;
  _QWORD* v57;
  _QWORD* v58;
  __int64 v59;
  float v60;
  float v61;
  float v62;
  _QWORD* v63;
  __int64 v64;
  float v65;
  char v66;
  float v67;
  _QWORD* v68;
  __int64 v69;
  float v70;
  char v71;
  float v72;
  _QWORD* v73;
  __int64 v74;
  float v75;
  _QWORD* v76;
  char v77;
  float v78;
  float v79;
  char v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  float v84;
  _QWORD* v85;
  char v86;
  float v87;
  bool v88;
  float v89;
  char v90;
  _QWORD* v91;
  __int64 v92;
  _QWORD* v93;
  float v94;
  _QWORD* v95;
  char v96;
  float v97;
  bool v98;
  float v99;
  char v100;
  _QWORD* v101;
  __int64 v102;
  float v103;
  bool v104;
  char v105;
  float v106;
  _QWORD* v107;
  __int64 v108;
  float v109;
  float v110;
  char v111;
  float v112;
  _QWORD* v113;
  __int64 v114;
  float v115;
  float v116;
  float v117;
  float v118;
  char v119;
  float v120;
  _QWORD* v121;
  __int64 v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  _QWORD* v128;
  __int64 v129;
  float v130;
  _QWORD* v131;
  __int64 v132;
  float v133;
  float v134;
  float* v135;
  __int64 v136;
  _QWORD* v137;
  __int64 v138;
  float v139;
  float v140;
  float v141;
  char v142;
  _QWORD* v143;
  __int64 v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  char v150;
  _QWORD* v151;
  __int64 v152;
  float v153;
  float v154;
  float v155;
  char v156;
  _QWORD* v157;
  __int64 v158;
  float v159;
  _QWORD* v160;
  __int64 v161;
  float v162;
  _QWORD* v163;
  __int64 v164;
  float v165;
  _QWORD* v166;
  __int64 v167;
  float result;
  float v169;
  float v170;
  struct {
    _QWORD* v171;
    __int64 v172;
    float v173;
    char gap36_[4];
    _QWORD* v174;
    __int64 v175;
    float v176;
    char gap60_[4];
    _QWORD* v177;
    __int64 v178;
    float v179;
  } v171_;
  struct {
    _QWORD* v180;
    __int64 v181;
    float v182;
  } v180_;
  struct {
    _QWORD* v183;
    __int64 v184;
    __int64 v185;
  } v183_;
  struct {
    _QWORD* v186;
    __int64 v187;
    float v188;
    _BYTE v189[24];
    _BYTE v190[24];
    int v191;
  } v186_;
  struct {
    float v192;
    float v193;
    float v194;
  } v192_;

  v6 = *(_QWORD**)a1;
  v7 = *((_QWORD*)a1 + 1);
  v8 = a1[4];
  v192_.v192 = a3;
  v192_.v193 = a4;
  v192_.v194 = a5;
  v183_.v184 = 0;
  v183_.v185 = 0;
  v183_.v183 = nullptr;
  *(_QWORD*)&v186_.v189[8] = 0;
  *(_QWORD*)v186_.v189 = 0;
  *(_QWORD*)&v186_.v189[16] = 0;
  *(_QWORD*)&v186_.v190[16] = 0;
  *(_QWORD*)&v186_.v190[8] = 0;
  *(_QWORD*)v186_.v190 = 0;
  v186_.v186 = v6;
  v186_.v187 = v7;
  v10 = *((_QWORD*)a1 + 3);
  v11 = *((_QWORD*)a1 + 4);
  v186_.v188 = v8;
  *(_QWORD*)&v186_.v189[4] = v10;
  *(_QWORD*)&v186_.v189[12] = v11;
  *(float*)&v186_.v189[20] = a1[10];
  *(float*)&v186_.v190[20] = a1[16];
  v186_.v191 = 0;
  v12 = *((_QWORD*)a1 + 7);
  *(_QWORD*)&v186_.v190[4] = *((_QWORD*)a1 + 6);
  *(_QWORD*)&v186_.v190[12] = v12;
  math_716760((void*)((__int64)&v183_.v183), (float*)&v186_.v186);
  v13 = a1[22];
  v14 = *((_QWORD**)a1 + 9);
  v15 = *((_QWORD*)a1 + 10);
  v171_.v171 = &v186_.v186;
  SdkRoutine_87a0a0((void*)(&v180_.v180), &v171_.v171, &v192_.v192);
  v16 = v186_.v188;
  v17 = v180_.v182;
  v18 = v180_.v180;
  if (v186_.v186 != nullptr) {
    v19 = v186_.v187;
    if (v180_.v180 != nullptr) {
      v20 = v180_.v181;
      v21 = v180_.v182;
      v22 = v186_.v188;
      v18 = v186_.v186;
    }
    else {
      v20 = 0;
      v22 = 0x0.0p+0f;
      v18 = v186_.v186;
      v21 = v180_.v182;
    }
  LABEL_7:
    v23 = &v18[2 * v18[512]];
    *((_BYTE*)v23 + 4) = v19;
    *((_BYTE*)v23 + 5) = v20;
    *((float*)v23 + 2) = v21;
    *((float*)v23 + 3) = v22;
    v24 = v18[512];
    v25 = v180_.v182;
    v18[512] = v24 + 1;
    v26 = v180_.v180;
    v27 = *(float*)&v186_.v189[20];
    v28 = *(_QWORD**)&v186_.v189[4];
    if (*(_QWORD*)&v186_.v189[4] != 0) {
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  if (v180_.v180 != nullptr) {
    v19 = v180_.v181;
    v20 = 0;
    v22 = 0x0.0p+0f;
    v21 = v186_.v188;
    goto LABEL_7;
  }
  v26 = nullptr;
  LOBYTE(v24) = -1;
  v25 = v180_.v182;
  v27 = *(float*)&v186_.v189[20];
  v28 = *(_QWORD**)&v186_.v189[4];
  if (*(_QWORD*)&v186_.v189[4] != 0) {
  LABEL_8:
    v29 = v186_.v189[12];
    if (v26 != nullptr) {
      v30 = v180_.v181;
      v31 = v25;
      v32 = v27;
    }
    else {
      v30 = 0;
      v32 = 0x0.0p+0f;
      v31 = v25;
    }
  LABEL_14:
    v33 = &v28[2 * v28[512]];
    *((_BYTE*)v33 + 4) = v29;
    *((_BYTE*)v33 + 5) = v30;
    *((float*)v33 + 2) = v31;
    *((float*)v33 + 3) = v32;
    v34 = v28[512];
    v35 = v180_.v182;
    v28[512] = v34 + 1;
    v36 = v180_.v180;
    v37 = *(float*)&v186_.v190[20];
    v38 = *(_QWORD**)&v186_.v190[4];
    if (*(_QWORD*)&v186_.v190[4] != 0) {
      goto LABEL_15;
    }
    goto LABEL_19;
  }
LABEL_12:
  if (v26 != nullptr) {
    v29 = v180_.v181;
    v32 = 0x0.0p+0f;
    v31 = v27;
    v30 = 0;
    v28 = v26;
    goto LABEL_14;
  }
  v36 = nullptr;
  v28 = nullptr;
  LOBYTE(v34) = -1;
  v35 = v25;
  v37 = *(float*)&v186_.v190[20];
  v38 = *(_QWORD**)&v186_.v190[4];
  if (*(_QWORD*)&v186_.v190[4] != 0) {
  LABEL_15:
    v39 = v186_.v190[12];
    if (v36 != nullptr) {
      v40 = v180_.v181;
      v41 = v35;
      v42 = v37;
    }
    else {
      v40 = 0;
      v42 = 0x0.0p+0f;
      v41 = v35;
    }
    goto LABEL_21;
  }
LABEL_19:
  if (v36 == nullptr) {
    v38 = nullptr;
    LOBYTE(v44) = -1;
    v45 = v183_.v183;
    if (v183_.v183 != nullptr) {
      goto LABEL_22;
    }
  LABEL_31:
    LOBYTE(v59) = -1;
    v57 = nullptr;
    v60 = *(float*)&v183_.v185 * v192_.v192;
    v169 = *(float*)&v183_.v185 * v192_.v193;
    v170 = *(float*)&v183_.v185 * v192_.v194;
    if (v18 == nullptr) {
      LOBYTE(v54) = -1;
      v52 = nullptr;
      v18 = nullptr;
      LOBYTE(v64) = -1;
      if (v28 != nullptr) {
        goto LABEL_34;
      }
      goto LABEL_41;
    }
    LOBYTE(v49) = 0;
    v61 = 0x0.0p+0f;
    v62 = 0x1.0000000000000p+0f;
    LOBYTE(v54) = -1;
    v52 = nullptr;
    goto LABEL_33;
  }
  v39 = v180_.v181;
  v42 = 0x0.0p+0f;
  v41 = v37;
  v40 = 0;
  v38 = v36;
LABEL_21:
  v43 = &v38[2 * v38[512]];
  *((_BYTE*)v43 + 4) = v39;
  *((_BYTE*)v43 + 5) = v40;
  *((float*)v43 + 2) = v41;
  *((float*)v43 + 3) = v42;
  v44 = v38[512];
  v38[512] = v44 + 1;
  v45 = v183_.v183;
  if (v183_.v183 == nullptr) {
    goto LABEL_31;
  }
LABEL_22:
  v46 = v192_.v192;
  v47 = &v45[2 * v45[512]];
  v48 = *(float*)&v183_.v185;
  *((_BYTE*)v47 + 4) = v183_.v184;
  *((_BYTE*)v47 + 5) = 0;
  *((float*)v47 + 2) = v46;
  *((_DWORD*)v47 + 3) = 0;
  v49 = v45[512];
  v50 = *(float*)&v183_.v185;
  v51 = v192_.v193;
  v52 = v183_.v183;
  v45[512] = v49 + 1;
  if (v52 != nullptr) {
    v53 = &v52[2 * v52[512]];
    *((_BYTE*)v53 + 4) = v183_.v184;
    *((_BYTE*)v53 + 5) = 0;
    *((float*)v53 + 2) = v51;
    *((_DWORD*)v53 + 3) = 0;
    v54 = v52[512];
    v55 = *(float*)&v183_.v185;
    v56 = v192_.v194;
    v52[512] = v54 + 1;
    v57 = v183_.v183;
    if (v183_.v183 != nullptr) {
      v58 = &v183_.v183[2 * v183_.v183[512]];
      *((_BYTE*)v58 + 4) = v183_.v184;
      *((_BYTE*)v58 + 5) = 0;
      *((float*)v58 + 2) = v56;
      *((_DWORD*)v58 + 3) = 0;
      v59 = v57[512];
      v57[512] = v59 + 1;
      v60 = v46 * v48;
      v169 = v50 * v51;
      v170 = v56 * v55;
      if (v18 != nullptr) {
      LABEL_25:
        v61 = -0x1.0000000000000p+0f;
        v62 = 0x1.0000000000000p+0f;
        goto LABEL_33;
      }
    }
    else {
      LOBYTE(v59) = -1;
      v60 = v46 * v48;
      v169 = v50 * v51;
      v170 = v56 * v55;
      if (v18 != nullptr) {
        goto LABEL_25;
      }
    }
  }
  else {
    v57 = nullptr;
    LOBYTE(v54) = -1;
    LOBYTE(v59) = -1;
    v60 = v46 * v48;
    v169 = v50 * v51;
    v170 = v192_.v194 * v50;
    if (v18 != nullptr) {
      goto LABEL_25;
    }
  }
  v61 = 0x0.0p+0f;
  v62 = -0x1.0000000000000p+0f;
  v18 = v45;
  LOBYTE(v24) = v49;
  LOBYTE(v49) = 0;
LABEL_33:
  v63 = &v18[2 * v18[512]];
  *((_BYTE*)v63 + 4) = v24;
  *((_BYTE*)v63 + 5) = v49;
  *((float*)v63 + 2) = v62;
  *((float*)v63 + 3) = v61;
  v64 = v18[512];
  v18[512] = v64 + 1;
  if (v28 != nullptr) {
  LABEL_34:
    v65 = -0x1.0000000000000p+0f;
    if (v52 != nullptr) {
      v66 = v54;
    }
    else {
      v66 = 0;
    }
    if (v52 == nullptr) {
      v65 = 0x0.0p+0f;
    }
    v67 = 0x1.0000000000000p+0f;
    goto LABEL_43;
  }
LABEL_41:
  if (v52 == nullptr) {
    v28 = nullptr;
    LOBYTE(v69) = -1;
    if (v38 != nullptr) {
      goto LABEL_44;
    }
    goto LABEL_51;
  }
  v65 = 0x0.0p+0f;
  v67 = -0x1.0000000000000p+0f;
  v66 = 0;
  v28 = v52;
  LOBYTE(v34) = v54;
LABEL_43:
  v68 = &v28[2 * v28[512]];
  *((_BYTE*)v68 + 4) = v34;
  *((_BYTE*)v68 + 5) = v66;
  *((float*)v68 + 2) = v67;
  *((float*)v68 + 3) = v65;
  v69 = v28[512];
  v28[512] = v69 + 1;
  if (v38 != nullptr) {
  LABEL_44:
    v70 = -0x1.0000000000000p+0f;
    if (v57 != nullptr) {
      v71 = v59;
    }
    else {
      v71 = 0;
    }
    if (v57 == nullptr) {
      v70 = 0x0.0p+0f;
    }
    v72 = 0x1.0000000000000p+0f;
    goto LABEL_53;
  }
LABEL_51:
  if (v57 != nullptr) {
    v70 = 0x0.0p+0f;
    v72 = -0x1.0000000000000p+0f;
    v71 = 0;
    v38 = v57;
    LOBYTE(v44) = v59;
  LABEL_53:
    v73 = &v38[2 * v38[512]];
    *((_BYTE*)v73 + 4) = v44;
    *((_BYTE*)v73 + 5) = v71;
    *((float*)v73 + 2) = v72;
    *((float*)v73 + 3) = v70;
    v74 = v38[512];
    v38[512] = v74 + 1;
    goto LABEL_54;
  }
  v38 = nullptr;
  LOBYTE(v74) = -1;
LABEL_54:
  SdkRoutine_87a0b0((void*)(&v171_.v171), &v186_.v186, &v192_.v192);
  v75 = v171_.v173;
  v76 = v171_.v171;
  if (v171_.v171 != nullptr) {
    v77 = v171_.v172;
    v78 = 0x0.0p+0f;
    v79 = v13;
    if (v14 != nullptr) {
      v80 = v15;
    }
    else {
      v80 = 0;
    }
    if (v14 != nullptr) {
      v78 = v171_.v173;
    }
  LABEL_63:
    v81 = &v76[2 * v76[512]];
    *((_BYTE*)v81 + 4) = v77;
    *((_BYTE*)v81 + 5) = v80;
    *((float*)v81 + 2) = v79;
    *((float*)v81 + 3) = v78;
    v82 = v76[512];
    v76[512] = v82 + 1;
    v83 = v14;
    v84 = v171_.v176;
    v85 = v171_.v174;
    if (v171_.v174 != nullptr) {
      goto LABEL_64;
    }
    goto LABEL_72;
  }
  if (v14 != nullptr) {
    v80 = 0;
    v78 = 0x0.0p+0f;
    v76 = v14;
    v77 = v15;
    v79 = v171_.v173;
    goto LABEL_63;
  }
  v83 = nullptr;
  v76 = nullptr;
  LOBYTE(v82) = -1;
  v84 = v171_.v176;
  v85 = v171_.v174;
  if (v171_.v174 != nullptr) {
  LABEL_64:
    v86 = v171_.v175;
    v87 = 0x0.0p+0f;
    v88 = v83 == nullptr;
    v83 = v85;
    v89 = v13;
    if (v88) {
      v90 = 0;
    }
    else {
      v90 = v15;
    }
    if (!v88) {
      v87 = v84;
    }
  LABEL_74:
    v91 = &v83[2 * v83[512]];
    *((_BYTE*)v91 + 4) = v86;
    *((_BYTE*)v91 + 5) = v90;
    *((float*)v91 + 2) = v89;
    *((float*)v91 + 3) = v87;
    v92 = v83[512];
    v83[512] = v92 + 1;
    v93 = v14;
    v94 = v171_.v179;
    v95 = v171_.v177;
    if (v171_.v177 != nullptr) {
      goto LABEL_75;
    }
    goto LABEL_82;
  }
LABEL_72:
  if (v83 != nullptr) {
    v87 = 0x0.0p+0f;
    v89 = v84;
    v90 = 0;
    v86 = v15;
    goto LABEL_74;
  }
  v93 = nullptr;
  LOBYTE(v92) = -1;
  v94 = v171_.v179;
  v95 = v171_.v177;
  if (v171_.v177 != nullptr) {
  LABEL_75:
    v96 = v171_.v178;
    v97 = 0x0.0p+0f;
    v98 = v93 == nullptr;
    v93 = v95;
    v99 = v13;
    if (v98) {
      v100 = 0;
    }
    else {
      v100 = v15;
    }
    if (!v98) {
      v97 = v94;
    }
    goto LABEL_84;
  }
LABEL_82:
  if (v93 == nullptr) {
    LOBYTE(v102) = -1;
    if (v18 != nullptr) {
      goto LABEL_85;
    }
    goto LABEL_92;
  }
  v97 = 0x0.0p+0f;
  v99 = v94;
  v100 = 0;
  v96 = v15;
LABEL_84:
  v101 = &v93[2 * v93[512]];
  *((_BYTE*)v101 + 4) = v96;
  *((_BYTE*)v101 + 5) = v100;
  *((float*)v101 + 2) = v99;
  *((float*)v101 + 3) = v97;
  v102 = v93[512];
  v93[512] = v102 + 1;
  if (v18 != nullptr) {
  LABEL_85:
    v103 = -0x1.0000000000000p+0f;
    v104 = v76 == nullptr;
    v76 = v18;
    if (v104) {
      v105 = 0;
    }
    else {
      v105 = v82;
    }
    LOBYTE(v82) = v64;
    if (v104) {
      v103 = 0x0.0p+0f;
    }
    v106 = 0x1.0000000000000p+0f;
    goto LABEL_94;
  }
LABEL_92:
  if (v76 == nullptr) {
    LOBYTE(v108) = -1;
    v109 = v16 * v17;
    if (v28 != nullptr) {
      goto LABEL_95;
    }
    goto LABEL_102;
  }
  v105 = 0;
  v103 = 0x0.0p+0f;
  v106 = -0x1.0000000000000p+0f;
LABEL_94:
  v107 = &v76[2 * v76[512]];
  *((_BYTE*)v107 + 4) = v82;
  *((_BYTE*)v107 + 5) = v105;
  *((float*)v107 + 2) = v106;
  *((float*)v107 + 3) = v103;
  v108 = v76[512];
  v76[512] = v108 + 1;
  v109 = v16 * v17;
  if (v28 != nullptr) {
  LABEL_95:
    v110 = -0x1.0000000000000p+0f;
    if (v83 != nullptr) {
      v111 = v92;
    }
    else {
      v111 = 0;
    }
    if (v83 == nullptr) {
      v110 = 0x0.0p+0f;
    }
    v112 = 0x1.0000000000000p+0f;
    goto LABEL_104;
  }
LABEL_102:
  if (v83 == nullptr) {
    v28 = nullptr;
    LOBYTE(v114) = -1;
    v115 = v25 * v27;
    v116 = v13 * v75;
    v117 = v109 - v60;
    if (v38 != nullptr) {
      goto LABEL_105;
    }
    goto LABEL_112;
  }
  v110 = 0x0.0p+0f;
  v112 = -0x1.0000000000000p+0f;
  v111 = 0;
  v28 = v83;
  LOBYTE(v69) = v92;
LABEL_104:
  v113 = &v28[2 * v28[512]];
  *((_BYTE*)v113 + 4) = v69;
  *((_BYTE*)v113 + 5) = v111;
  *((float*)v113 + 2) = v112;
  *((float*)v113 + 3) = v110;
  v114 = v28[512];
  v28[512] = v114 + 1;
  v115 = v25 * v27;
  v116 = v13 * v75;
  v117 = v109 - v60;
  if (v38 != nullptr) {
  LABEL_105:
    v118 = -0x1.0000000000000p+0f;
    if (v93 != nullptr) {
      v119 = v102;
    }
    else {
      v119 = 0;
    }
    if (v93 == nullptr) {
      v118 = 0x0.0p+0f;
    }
    v120 = 0x1.0000000000000p+0f;
  LABEL_114:
    v121 = &v38[2 * v38[512]];
    *((_BYTE*)v121 + 4) = v74;
    *((_BYTE*)v121 + 5) = v119;
    *((float*)v121 + 2) = v120;
    *((float*)v121 + 3) = v118;
    v122 = v38[512];
    v38[512] = v122 + 1;
    v123 = v35 * v37;
    v124 = v117 - v116;
    v125 = v115 - v169;
    v126 = v13 * v84;
    if (v14 != nullptr) {
      goto LABEL_115;
    }
    goto LABEL_118;
  }
LABEL_112:
  if (v93 != nullptr) {
    v118 = 0x0.0p+0f;
    v120 = -0x1.0000000000000p+0f;
    v119 = 0;
    v38 = v93;
    LOBYTE(v74) = v102;
    goto LABEL_114;
  }
  v38 = nullptr;
  LOBYTE(v122) = -1;
  v123 = v35 * v37;
  v124 = v117 - v116;
  v125 = v115 - v169;
  v126 = v13 * v84;
  if (v14 != nullptr) {
  LABEL_115:
    v127 = v13 * v13;
    v128 = &v14[2 * v14[512]];
    *((_BYTE*)v128 + 4) = v15;
    *((_BYTE*)v128 + 5) = v15;
    *((float*)v128 + 2) = v13;
    *((float*)v128 + 3) = v13;
    v129 = v14[512];
    v130 = *(float*)&v183_.v185;
    v131 = v183_.v183;
    v132 = v129 + 1;
    v14[512] = v129 + 1;
    if (v131 != nullptr) {
      LOBYTE(v131) = v183_.v184;
      v133 = 0x1.0000000000000p+0f;
      goto LABEL_121;
    }
  LABEL_120:
    v133 = 0x0.0p+0f;
  LABEL_121:
    v134 = v130 + v127;
    v135 = (float*)&v14[2 * v132];
    v135[3] = v133;
    *((_BYTE*)v135 + 4) = v129;
    *((_BYTE*)v135 + 5) = (_BYTE)v131;
    v135[2] = 0x1.0000000000000p+0f;
    v136 = v14[512];
    v14[512] = v136 + 1;
    v137 = &v14[2 * v136 + 2];
    *((_WORD*)v137 + 2) = (unsigned __int8)v136;
    *((_DWORD*)v137 + 3) = 0;
    v138 = v14[512];
    *((float*)v137 + 2) = -0x1.0000000000000p+1f / (float)(v134 * v134);
    v14[512] = v138 + 1;
    v139 = 0x1.0000000000000p+1f / v134;
    if (v76 != nullptr) {
      v140 = v139;
      v141 = v124;
      v142 = v138;
    }
    else {
      v142 = 0;
      v141 = 0x0.0p+0f;
      v76 = v14;
      LOBYTE(v108) = v138;
      v140 = v124;
    }
  LABEL_126:
    v143 = &v76[2 * v76[512]];
    *((_BYTE*)v143 + 4) = v108;
    *((_BYTE*)v143 + 5) = v142;
    *((float*)v143 + 2) = v140;
    *((float*)v143 + 3) = v141;
    v144 = v76[512];
    v76[512] = v144 + 1;
    v145 = v123 - v170;
    v146 = v13 * v94;
    v147 = v125 - v126;
    if (v28 != nullptr) {
      goto LABEL_127;
    }
    goto LABEL_134;
  }
LABEL_118:
  v130 = *(float*)&v183_.v185;
  v14 = v183_.v183;
  v127 = v13 * v13;
  if (v183_.v183 != nullptr) {
    LOBYTE(v129) = v183_.v184;
    v132 = v183_.v183[512];
    LOBYTE(v131) = 0;
    goto LABEL_120;
  }
  LOBYTE(v138) = -1;
  v139 = 0x1.0000000000000p+1f / (float)(v127 + *(float*)&v183_.v185);
  if (v76 != nullptr) {
    v142 = 0;
    v141 = 0x0.0p+0f;
    v140 = v139;
    goto LABEL_126;
  }
  LOBYTE(v144) = -1;
  v76 = v183_.v183;
  v145 = v123 - v170;
  v146 = v13 * v94;
  v147 = v125 - v126;
  if (v28 != nullptr) {
  LABEL_127:
    v148 = 0x0.0p+0f;
    v149 = v139;
    if (v14 != nullptr) {
      v150 = v138;
    }
    else {
      v150 = 0;
    }
    if (v14 != nullptr) {
      v148 = v147;
    }
    goto LABEL_136;
  }
LABEL_134:
  if (v14 == nullptr) {
    v28 = nullptr;
    LOBYTE(v152) = -1;
    v153 = v145 - v146;
    if (v38 != nullptr) {
      goto LABEL_137;
    }
    goto LABEL_144;
  }
  v148 = 0x0.0p+0f;
  v149 = v147;
  v150 = 0;
  v28 = v14;
  LOBYTE(v114) = v138;
LABEL_136:
  v151 = &v28[2 * v28[512]];
  *((_BYTE*)v151 + 4) = v114;
  *((_BYTE*)v151 + 5) = v150;
  *((float*)v151 + 2) = v149;
  *((float*)v151 + 3) = v148;
  v152 = v28[512];
  v28[512] = v152 + 1;
  v153 = v145 - v146;
  if (v38 != nullptr) {
  LABEL_137:
    v154 = 0x0.0p+0f;
    v155 = v139;
    if (v14 != nullptr) {
      v156 = v138;
    }
    else {
      v156 = 0;
    }
    if (v14 != nullptr) {
      v154 = v153;
    }
  LABEL_146:
    v157 = &v38[2 * v38[512]];
    *((_BYTE*)v157 + 4) = v122;
    *((_BYTE*)v157 + 5) = v156;
    *((float*)v157 + 2) = v155;
    *((float*)v157 + 3) = v154;
    v158 = v38[512];
    v38[512] = v158 + 1;
    v159 = v192_.v192;
    if (v76 != nullptr) {
      goto LABEL_147;
    }
    goto LABEL_151;
  }
LABEL_144:
  if (v14 != nullptr) {
    v154 = 0x0.0p+0f;
    v155 = v153;
    v156 = 0;
    v38 = v14;
    LOBYTE(v122) = v138;
    goto LABEL_146;
  }
  v38 = nullptr;
  LOBYTE(v158) = -1;
  v159 = v192_.v192;
  if (v76 != nullptr) {
  LABEL_147:
    v160 = &v76[2 * v76[512]];
    *((_BYTE*)v160 + 4) = v144;
    *((_BYTE*)v160 + 5) = 0;
    v160[1] = 1065353216;
    v161 = v76[512];
    v76[512] = v161 + 1;
    v162 = v192_.v193;
    if (v28 != nullptr) {
      goto LABEL_148;
    }
  LABEL_152:
    v164 = -1;
    v165 = v192_.v194;
    if (v38 != nullptr) {
      goto LABEL_149;
    }
  LABEL_153:
    v167 = -1;
    goto LABEL_154;
  }
LABEL_151:
  v161 = -1;
  v162 = v192_.v193;
  if (v28 == nullptr) {
    goto LABEL_152;
  }
LABEL_148:
  v163 = &v28[2 * v28[512]];
  *((_BYTE*)v163 + 4) = v152;
  *((_BYTE*)v163 + 5) = 0;
  v163[1] = 1065353216;
  v164 = v28[512];
  v28[512] = v164 + 1;
  v165 = v192_.v194;
  if (v38 == nullptr) {
    goto LABEL_153;
  }
LABEL_149:
  v166 = &v38[2 * v38[512]];
  *((_BYTE*)v166 + 4) = v158;
  *((_BYTE*)v166 + 5) = 0;
  v166[1] = 1065353216;
  v167 = v38[512];
  v38[512] = v167 + 1;
LABEL_154:
  *(_QWORD*)a2 = v76;
  *(_QWORD*)(a2 + 8) = v161;
  *(_DWORD*)(a2 + 20) = 0;
  result = (float)(v147 * v139) + v162;
  *(_QWORD*)(a2 + 24) = v28;
  *(_QWORD*)(a2 + 32) = v164;
  *(_DWORD*)(a2 + 44) = 0;
  *(_QWORD*)(a2 + 48) = v38;
  *(_QWORD*)(a2 + 56) = v167;
  *(_DWORD*)(a2 + 68) = 0;
  *(float*)(a2 + 16) = (float)(v124 * v139) + v159;
  *(float*)(a2 + 40) = result;
  *(float*)(a2 + 64) = (float)(v153 * v139) + v165;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_71d560(PSEUDO_X8 x8_, _QWORD* a1,
                                            unsigned __int64* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  char* v23;
  _QWORD* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _DWORD* v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  _DWORD* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  float* v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  _DWORD* v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  _QWORD* result;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  _BYTE v92[656];
  _BYTE v93[2936];
  _QWORD v94[82];
  _QWORD v95[82];
  __int64 v96;
  _QWORD v97[3];
  struct {
    _QWORD v98[23];
    unsigned __int64 v99;
  } v98_;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  struct {
    unsigned __int64 v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
    unsigned __int64 v109;
    unsigned __int64 v110;
    unsigned __int64 v111;
  } v106_;
  struct {
    unsigned __int64 v112;
    unsigned __int64 v113;
    __int64 v114;
    _QWORD v115[364];
    unsigned __int64 v116;
    _QWORD v117[2];
    char gap8200_[4];
    float v118[157];
  } v112_;

  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2[3];
  v102 = a2[2];
  v103 = v4;
  v6 = a2[5];
  v104 = a2[4];
  v105 = v6;
  v7 = a2[1];
  v100 = *a2;
  v101 = v7;
  v100 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v100),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v101 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v101),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v102 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v102),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v103 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v103),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v104 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v104),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v105),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = *a1;
  v112_.v115[0] = 0;
  v112_.v114 = 0;
  v112_.v113 = 0;
  v112_.v112 = 0;
  v112_.v115[1] = 0;
  v106_.v107 = v101;
  v106_.v106 = v100;
  v105 = v9;
  v106_.v111 = v9;
  v112_.v115[2] = v10;
  v106_.v110 = v104;
  v106_.v108 = v102;
  v106_.v109 = v103;
  if (v10 != 0) {
    memset_plt((void*)&v112_.v112, nullptr, v10, v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v11 = v106_.v106;
  v12 = v106_.v107;
  v13 = v106_.v108;
  v14 = v106_.v109;
  v15 = v106_.v110;
  v16 = v106_.v111;
  v96 = 0;
  memset(v97, 0, sizeof(v97));
  memset(v98_.v98, 0, sizeof(v98_.v98));
  *((_BYTE*)&v112_.v112 + v106_.v106) = 1;
  *((_BYTE*)&v112_.v112 + v12) = 1;
  *((_BYTE*)&v112_.v112 + v13) = 1;
  *((_BYTE*)&v112_.v112 + v14) = 1;
  *((_BYTE*)&v112_.v112 + v15) = 1;
  *((_BYTE*)&v112_.v112 + v16) = 1;
  v98_.v99 = v10 - 6;
  if (v10 != 6) {
    memset_plt((void*)&v96, nullptr, 8 * (v10 - 6), v8),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v10 == 0) {
      goto LABEL_32;
    }
  }
  v17 = v10 & 7;
  if ((unsigned __int64)(v10 - 1) >= 7) {
    v20 = 3;
    v19 = 0;
    while (1) {
      v21 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v106_.v111 + v20 + 5) & 1) != 0) {
        if ((*(v21 - 2) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        v97[v19++ - 1] = v20 - 3;
        if ((*(v21 - 2) & 1) != 0) {
        LABEL_12:
          if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
            goto LABEL_13;
          }
          goto LABEL_21;
        }
      }
      v97[v19++ - 1] = v20 - 2;
      if ((*((_BYTE*)&v112_.v112 + v20 - 1) & 1) != 0) {
      LABEL_13:
        if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v97[v19++ - 1] = v20 - 1;
      if ((*((_BYTE*)&v112_.v112 + v20) & 1) != 0) {
      LABEL_14:
        v22 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v97[v19++ - 1] = v20;
      v22 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 1) & 1) != 0) {
      LABEL_15:
        if ((v22[2] & 1) != 0) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v97[v19++ - 1] = v20 + 1;
      if ((v22[2] & 1) != 0) {
      LABEL_16:
        v23 = (char*)&v112_.v112 + v20;
        if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v97[v19++ - 1] = v20 + 2;
      v23 = (char*)&v112_.v112 + v20;
      if ((*((_BYTE*)&v112_.v112 + v20 + 3) & 1) != 0) {
      LABEL_17:
        if ((v23[4] & 1) == 0) {
          goto LABEL_26;
        }
        goto LABEL_9;
      }
    LABEL_25:
      v97[v19++ - 1] = v20 + 3;
      if ((v23[4] & 1) == 0) {
      LABEL_26:
        v97[v19++ - 1] = v20 + 4;
      }
    LABEL_9:
      v20 += 8;
      if (v20 - (v10 & 0xFFFFFFFFFFFFFFF8LL) == 3) {
        v18 = v20 - 3;
        if ((v10 & 7) != 0) {
          goto LABEL_30;
        }
        goto LABEL_32;
      }
    }
  }
  v18 = 0;
  v19 = 0;
  if ((v10 & 7) != 0) {
    do {
    LABEL_30:
      if ((*((_BYTE*)&v112_.v112 + v18) & 1) == 0) {
        v97[v19++ - 1] = v18;
      }
      ++v18;
      --v17;
    } while (v17 != 0);
  }
LABEL_32:
  v24 = a1 + 2;
  v25 = *(float*)&a1[17 * v11 + 2];
  v26 = *(float*)&a1[17 * v12 + 2];
  v27 = *(float*)&a1[17 * v13 + 2];
  v28 = *(float*)&a1[17 * v14 + 2];
  v29 = *(float*)&a1[17 * v15 + 2];
  v30 = *(float*)&a1[17 * v16 + 2];
  math_71ec60((void*)((__int64)v94), (__int64)a1, &v106_.v106, (__int64)&v96,
              v8),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31 = v98_.v99;
  v112_.v115[363] = 0;
  v112_.v112 = v98_.v99;
  v112_.v113 = v98_.v99;
  memset_plt((void*)&v112_.v114, nullptr, 2916, v32),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v31 != 0) {
    v33 = v112_.v115;
    v34 = 0;
    v35 = 0;
    while (1) {
      v36 = 33 * v97[v35 - 1];
      if (v31 >= 8) {
        break;
      }
      v37 = 0;
      if ((v31 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_34:
      ++v35;
      v33 = (_QWORD*)((char*)v33 + 108);
      v34 += 27;
      if (v35 == v31) {
        goto LABEL_44;
      }
    }
    v38 = 0;
    v39 = v98_.v98;
    v40 = v33;
    do {
      v38 -= 8;
      v41 = *((_DWORD*)v24 + *(v39 - 3) + v36);
      v42 = *((_DWORD*)v24 + *(v39 - 2) + v36);
      v43 = *((_DWORD*)v24 + *(v39 - 1) + v36);
      v45 = *v39;
      v44 = v39[1];
      *(v40 - 2) = *((_DWORD*)v24 + *(v39 - 4) + v36);
      *(v40 - 1) = v41;
      v46 = *((_DWORD*)v24 + v45 + v36);
      v47 = *((_DWORD*)v24 + v44 + v36);
      v49 = v39[2];
      v48 = v39[3];
      *v40 = v42;
      v40[1] = v43;
      v39 += 8;
      v50 = *((_DWORD*)v24 + v49 + v36);
      v40[2] = v46;
      v40[3] = v47;
      v51 = *((_DWORD*)v24 + v48 + v36);
      v40[4] = v50;
      v40[5] = v51;
      v40 += 8;
    } while (-(__int64)(v31 & 0xFFFFFFFFFFFFFFF8LL) != v38);
    v37 = -v38;
    if ((v31 & 7) == 0) {
      goto LABEL_34;
    }
  LABEL_41:
    v52 = v37 + v34;
    v53 = &v97[v37 - 1];
    v54 = v31 & 7;
    v55 = (_DWORD*)&v112_.v115[-1] + v52;
    do {
      v56 = *v53++;
      --v54;
      *v55++ = *((_DWORD*)v24 + v56 + v36);
    } while (v54 != 0);
    goto LABEL_34;
  }
LABEL_44:
  memcpy_plt(v93, &v112_.v112, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2d0(v93),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memcpy_plt(&v112_.v112, v93, 2936),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_87a2e0((void*)(v95), v94, &v112_.v112),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v57 = v98_.v99;
  v112_.v116 = v98_.v99;
  memset_plt((void*)v112_.v117, nullptr, 648, v58),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v57 != 0) {
    v59 = v106_.v106;
    v60 = v106_.v107;
    v61 = v106_.v108;
    v62 = v106_.v109;
    v63 = v106_.v110;
    v64 = v106_.v111;
    if (v57 == 1) {
      v65 = 0;
    LABEL_50:
      v81 = &v112_.v117[3 * v65];
      v82 = 33 * v97[v65 - 1];
      v83 = *((_DWORD*)v24 + v82 + v60);
      *v81 = *((_DWORD*)v24 + v82 + v59);
      v81[1] = v83;
      v84 = *((_DWORD*)v24 + v82 + v62);
      v81[2] = *((_DWORD*)v24 + v82 + v61);
      v81[3] = v84;
      v85 = *((_DWORD*)v24 + v82 + v64);
      v81[4] = *((_DWORD*)v24 + v82 + v63);
      v81[5] = v85;
      goto LABEL_51;
    }
    v66 = 0;
    v67 = v97;
    v68 = v112_.v118;
    do {
      v70 = *(v67 - 1);
      v69 = *v67;
      v66 -= 2;
      v67 += 2;
      v70 *= 33;
      v71 = *((_DWORD*)v24 + v70 + v61);
      v72 = *((_DWORD*)v24 + v70 + v60);
      v73 = *((_DWORD*)v24 + v70 + v62);
      v74 = *((_DWORD*)v24 + v70 + v63);
      *(v68 - 5) = *((float*)v24 + v70 + v59);
      *((_DWORD*)v68 - 4) = v72;
      v75 = *((_DWORD*)v24 + v70 + v64);
      *((_DWORD*)v68 - 3) = v71;
      *((_DWORD*)v68 - 2) = v73;
      *((_DWORD*)v68 - 1) = v74;
      *(_DWORD*)v68 = v75;
      v76 = *((_DWORD*)v24 + 33 * v69 + v60);
      v77 = *((_DWORD*)v24 + 33 * v69 + v61);
      v78 = *((_DWORD*)v24 + 33 * v69 + v62);
      v68[1] = *((float*)v24 + 33 * v69 + v59);
      *((_DWORD*)v68 + 2) = v76;
      v79 = *((_DWORD*)v24 + 33 * v69 + v63);
      v80 = *((_DWORD*)v24 + 33 * v69 + v64);
      *((_DWORD*)v68 + 3) = v77;
      *((_DWORD*)v68 + 4) = v78;
      *((_DWORD*)v68 + 5) = v79;
      *((_DWORD*)v68 + 6) = v80;
      v68 += 12;
    } while (-(__int64)(v57 & 0xFFFFFFFFFFFFFFFELL) != v66);
    v65 = -v66;
    if ((v57 & 1) != 0) {
      goto LABEL_50;
    }
  }
LABEL_51:
  memcpy_plt(v92, &v112_.v116, 656),
      v32 = COERCE_AS(__typeof__(v32),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  result = X8CALL_X0(void*, SdkRoutine_87a2f0((void*)(&v112_.v116), v95, v92)),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v87 = sqrtf(v26 - v112_.v118[0]);
  v88 = sqrtf(v27 - v112_.v118[7]);
  v89 = sqrtf(v28 - v112_.v118[14]);
  v90 = sqrtf(v29 - v112_.v118[21]);
  v91 = sqrtf(v30 - v112_.v118[28]);
  *a3 = sqrtf(v25 - *(float*)&v112_.v116);
  a3[1] = v87;
  a3[2] = v88;
  a3[3] = v89;
  a3[4] = v90;
  a3[5] = v91;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
