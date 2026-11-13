#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);
__int64
nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(__int64, __int64,
                                                          unsigned __int64);
extern _UNKNOWN SdkData_ca7dde;
extern unsigned __int8 SdkData_ca7e1a[256];
extern void (*SdkData_e89220[16])();
__int64 nerd_gillette_internal_otete_74cb80(__int64* a1, _DWORD* a2);

__int64 nerd_gillette_internal_otete_74cb80(__int64* a1, _DWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  unsigned __int8* v15;
  __int64 v16;
  char v17;
  unsigned int v18;
  unsigned int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  _BYTE* v50;
  __int64 v51;
  char* v52;
  unsigned int v53;
  __int64 v54;
  char* v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  char v60;
  char v61;
  int v62;
  bool v63;
  int v64;
  bool v65;
  unsigned int v66;
  bool v67;
  char v68;
  char v69;
  __int64 v70;
  int v71;
  char* v72;
  unsigned int v73;
  int v74;
  int v75;
  char v76;
  int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v81;
  bool v82;
  int v83;
  int v84;
  unsigned int v85;
  char v86;
  __int64 v87;
  int v88;
  char* v89;
  unsigned int v90;
  int v91;
  int v92;
  char v93;
  int v94;
  int v95;
  int v96;
  int v97;
  unsigned int v98;
  bool v99;
  int v100;
  int v101;
  char v102;
  unsigned __int64 v103;
  __int64 v104;
  int v105;
  unsigned int v106;
  __int64 v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 i;
  int v115;
  unsigned int v116;
  __int64 v117;
  unsigned __int64 v118;
  char v119;
  unsigned __int64 v120;
  unsigned __int8* v121;
  unsigned __int64 v122;
  char* v123;
  char v124;
  unsigned __int64 v125;
  int v126;
  int v127;
  unsigned int v128;
  int v129;
  __int16* v130;
  unsigned int v131;
  int v132;
  unsigned __int8 v133;
  int v134;
  int v135;
  unsigned int v136;
  unsigned int v137;
  bool v138;
  int v139;
  int v140;
  int v141;
  int v142;
  char v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  __int64 v151;
  __int64 v152;
  _BOOL4 v154;
  char v155;
  __int64 v156;
  int v157;
  int v158;
  __int64 v159;
  unsigned __int8* v160;
  char v161;
  int v162;
  bool v163;
  _BOOL4 v164;
  int v165;
  bool v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  bool v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 result;
  __int64 v185;
  __int64 v186;
  _BOOL4 v187;
  char v188;
  __int64 v189;
  int v190;
  int v191;
  __int64 v192;
  unsigned __int8* v193;
  char v194;
  int v195;
  bool v196;
  _BOOL4 v197;
  int v198;
  bool v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;

  {
    v2 = (unsigned int)a2[3];
    __asm__ volatile("" ::"r"(v2));
  }
  if ((_DWORD)v2 == 0 || (v5 = a2[2]) == 0) {
    v19 = 1;
    {
      v20 = a1[1];
      __asm__ volatile("" ::"r"(v20));
    }
    if (v20 > 0x958) {
      goto LABEL_46;
    }
    goto LABEL_33;
  }
  {
    v6 = *(_BYTE**)a2;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = (unsigned int)a2[4];
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = 0;
  LOBYTE(v9) = 1;
  {
    v10 = *(_QWORD*)a2 + 3LL;
    __asm__ volatile("" ::"r"(v10));
  }
  do {
    if (v5 < 8) {
      v11 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_4;
      }
    LABEL_27:
      {
        v15 = &v6[v11];
        __asm__ volatile("" ::"r"(v15));
      }
      v16 = v5 & 7;
      do {
        {
          v18 = *v15++;
          __asm__ volatile("" ::"r"(v18));
        }
        v17 = v18;
        if ((unsigned __int8)v9 <= v18) {
          LOBYTE(v9) = v17;
        }
        --v16;
      } while (v16 != 0);
      goto LABEL_4;
    }
    v12 = 0;
    v13 = (unsigned __int8*)v10;
    do {
      v9 = (unsigned __int8)v9;
      v12 -= 8;
      if ((unsigned __int8)v9 <= (unsigned int)*(v13 - 3)) {
        v9 = *(v13 - 3);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= *(v13 - 2)) {
        v9 = *(v13 - 2);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= *(v13 - 1)) {
        v9 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= *v13) {
        v9 = *v13;
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= v13[1]) {
        v9 = v13[1];
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= v13[2]) {
        v9 = v13[2];
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 <= v13[3]) {
        v9 = v13[3];
        __asm__ volatile("" ::"r"(v9));
      }
      {
        v14 = v13[4];
        __asm__ volatile("" ::"r"(v14));
      }
      v13 += 8;
      if (v9 <= v14) {
        LOBYTE(v9) = v14;
      }
    } while (-(__int64)(v5 & 0xFFFFFFF8) != v12);
    v11 = -v12;
    if ((v5 & 7) != 0) {
      goto LABEL_27;
    }
  LABEL_4:
    ++v8;
    v10 += v7;
    v6 += v7;
  } while (v8 != v2);
  v28 = 0;
  v29 = 0x1.fe00000000000p+7f;
  v30 = 0x1.fe00000000000p+7f / (float)(unsigned __int8)v9;
  do {
    {
      v31 = *(_QWORD*)a2;
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v32 = (unsigned int)a2[4];
      __asm__ volatile("" ::"r"(v32));
    }
    if (v5 < 8) {
      v33 = 0;
      if ((v5 & 7) == 0) {
        goto LABEL_35;
      }
    LABEL_42:
      v50 = (_BYTE*)(v31 + v33 + v28 * v32);
      v51 = v5 & 7;
      do {
        {
          __typeof__(v29) z_ = (__typeof__(v29)){0};
          LOBYTE(z_) = *v50;
          v29 = z_;
        }
        --v51;
        v29 = v30 * (float)LODWORD(v29);
        *v50++ = (int)v29;
      } while (v51 != 0);
      goto LABEL_35;
    }
    v34 = 0;
    v35 = (_BYTE*)(v31 + v28 * v32 + 3);
    do {
      {
        __typeof__(v29) z_ = (__typeof__(v29)){0};
        LOBYTE(z_) = *(v35 - 3);
        v29 = z_;
      }
      v34 -= 8;
      *(float*)&v36 = v30 * (float)LODWORD(v29);
      {
        v37 = (int)*(float*)&v36;
        __asm__ volatile("" ::"r"(v37));
      }
      {
        __typeof__(v36) z_ = (__typeof__(v36)){0};
        LOBYTE(z_) = *(v35 - 2);
        v36 = z_;
      }
      *(v35 - 3) = v37;
      *(float*)&v38 = v30 * (float)v36;
      {
        v39 = (int)*(float*)&v38;
        __asm__ volatile("" ::"r"(v39));
      }
      {
        __typeof__(v38) z_ = (__typeof__(v38)){0};
        LOBYTE(z_) = *(v35 - 1);
        v38 = z_;
      }
      *(v35 - 2) = v39;
      *(float*)&v40 = v30 * (float)v38;
      {
        v41 = (int)*(float*)&v40;
        __asm__ volatile("" ::"r"(v41));
      }
      {
        __typeof__(v40) z_ = (__typeof__(v40)){0};
        LOBYTE(z_) = *v35;
        v40 = z_;
      }
      *(v35 - 1) = v41;
      *(float*)&v42 = v30 * (float)v40;
      {
        v43 = (int)*(float*)&v42;
        __asm__ volatile("" ::"r"(v43));
      }
      {
        __typeof__(v42) z_ = (__typeof__(v42)){0};
        LOBYTE(z_) = v35[1];
        v42 = z_;
      }
      *v35 = v43;
      *(float*)&v44 = v30 * (float)v42;
      {
        v45 = (int)*(float*)&v44;
        __asm__ volatile("" ::"r"(v45));
      }
      {
        __typeof__(v44) z_ = (__typeof__(v44)){0};
        LOBYTE(z_) = v35[2];
        v44 = z_;
      }
      v35[1] = v45;
      *(float*)&v46 = v30 * (float)v44;
      {
        v47 = (int)*(float*)&v46;
        __asm__ volatile("" ::"r"(v47));
      }
      {
        __typeof__(v46) z_ = (__typeof__(v46)){0};
        LOBYTE(z_) = v35[3];
        v46 = z_;
      }
      v35[2] = v47;
      *(float*)&v48 = v30 * (float)v46;
      {
        v49 = (int)*(float*)&v48;
        __asm__ volatile("" ::"r"(v49));
      }
      {
        __typeof__(v48) z_ = (__typeof__(v48)){0};
        LOBYTE(z_) = v35[4];
        v48 = z_;
      }
      v35[3] = v49;
      v29 = v30 * (float)v48;
      v35[4] = (int)v29;
      v35 += 8;
    } while (-(__int64)(v5 & 0xFFFFFFF8) != v34);
    v33 = -v34;
    if ((v5 & 7) != 0) {
      goto LABEL_42;
    }
  LABEL_35:
    ++v28;
  } while (v28 != v2);
  v19 = (unsigned __int8)v9;
  {
    v20 = a1[1];
    __asm__ volatile("" ::"r"(v20));
  }
  if (v20 <= 0x958) {
  LABEL_33:
    *(_BYTE*)(*a1 + (v20 >> 3)) |= v19 >> 7 << (v20 & 7);
    {
      v21 = *a1;
      __asm__ volatile("" ::"r"(v21));
    }
    a1[1] = v20 + 1;
    *(_BYTE*)(v21 + ((v20 + 1) >> 3)) |= ((v19 & 0x40) != 0) << ((v20 + 1) & 7);
    {
      v22 = *a1;
      __asm__ volatile("" ::"r"(v22));
    }
    a1[1] = v20 + 2;
    *(_BYTE*)(v22 + ((v20 + 2) >> 3)) |= ((v19 & 0x20) != 0) << ((v20 + 2) & 7);
    {
      v23 = *a1;
      __asm__ volatile("" ::"r"(v23));
    }
    a1[1] = v20 + 3;
    *(_BYTE*)(v23 + ((v20 + 3) >> 3)) |= ((v19 & 0x10) != 0) << ((v20 + 3) & 7);
    {
      v24 = *a1;
      __asm__ volatile("" ::"r"(v24));
    }
    a1[1] = v20 + 4;
    *(_BYTE*)(v24 + ((v20 + 4) >> 3)) |= ((v19 & 8) != 0) << ((v20 + 4) & 7);
    {
      v25 = *a1;
      __asm__ volatile("" ::"r"(v25));
    }
    a1[1] = v20 + 5;
    *(_BYTE*)(v25 + ((v20 + 5) >> 3)) |= ((v19 & 4) != 0) << ((v20 + 5) & 7);
    {
      v26 = *a1;
      __asm__ volatile("" ::"r"(v26));
    }
    a1[1] = v20 + 6;
    *(_BYTE*)(v26 + ((v20 + 6) >> 3)) |= ((v19 & 2) != 0) << ((v20 + 6) & 7);
    {
      v27 = *a1;
      __asm__ volatile("" ::"r"(v27));
    }
    a1[1] = v20 + 7;
    *(_BYTE*)(v27 + ((v20 + 7) >> 3)) |= (v19 & 1) << ((v20 + 7) & 7);
    a1[1] = v20 + 8;
    goto LABEL_47;
  }
LABEL_46:
  if (v20 + 8 > 0x960) {
    return 0;
  }
LABEL_47:
  {
    v52 = *(char**)(*(_QWORD*)SdkData_e89220[0] + 8LL);
    __asm__ volatile("" ::"r"(v52));
  }
  *(_QWORD*)(*(_QWORD*)SdkData_e89220[0] + 8LL) = &v52[a2[3] * a2[2]];
  {
    v54 = (unsigned int)a2[2];
    __asm__ volatile("" ::"r"(v54));
  }
  {
    v53 = a2[3];
    __asm__ volatile("" ::"r"(v53));
  }
  if (v53 != 0) {
    memset_plt((__int64)v52, 0, v53 * (unsigned __int64)(unsigned int)v54);
  }
  v55 = v52;
  {
    v56 = **(unsigned __int8**)a2;
    __asm__ volatile("" ::"r"(v56));
  }
  v57 = v56 * v56;
  v59 = (v56 - 16) * (v56 - 16);
  if ((int)v59 < v56 * v56) {
    v57 = (v56 - 16) * (v56 - 16);
  }
  v60 = v59 < v56 * v56;
  if (v59 >= v56 * v56) {
    v61 = 0;
  }
  else {
    v61 = 16;
  }
  v62 = (v56 - 64) * (v56 - 64);
  v63 = v62 >= v57;
  if (v62 < (int)v57) {
    v57 = (v56 - 64) * (v56 - 64);
  }
  v58 = v56 - 8;
  v64 = v58 * v58;
  if (!v63) {
    v61 = 64;
    v60 = 2;
  }
  v65 = v64 >= v57;
  if (v64 < (int)v57) {
    v57 = v58 * v58;
  }
  v66 = (v56 - 128) * (v56 - 128);
  if (!v65) {
    v61 = 8;
    v60 = 3;
  }
  v67 = v66 >= v57;
  if (v66 >= v57) {
    v68 = v61;
  }
  else {
    v68 = 0x80;
  }
  *v52 = v68;
  if (v67) {
    v69 = v60;
  }
  else {
    v69 = 4;
  }
  **(_BYTE**)a2 = v69;
  v70 = (unsigned __int8)*v52;
  {
    v71 = *(unsigned __int8*)(*(_QWORD*)a2 + 1LL);
    __asm__ volatile("" ::"r"(v71));
  }
  {
    v72 = (char*)&SdkData_ca7dde + 10 * SdkData_ca7e1a[v70];
    __asm__ volatile("" ::"r"(v72));
  }
  v73 = (v71 - v70) * (v71 - v70);
  {
    v74 = *((__int16*)v72 + 1);
    __asm__ volatile("" ::"r"(v74));
  }
  {
    v75 = *((__int16*)v72 + 2);
    __asm__ volatile("" ::"r"(v75));
  }
  if (v73 >= 0xFE01) {
    v76 = 0;
  }
  else {
    v76 = *v52;
    __asm__ volatile("" ::"r"(v76));
  }
  v77 = v74 + v70;
  v78 = v75 + v70;
  if ((unsigned int)v77 >= 0xFF) {
    v79 = 255;
  }
  else {
    v79 = v77;
  }
  if (v77 >= 0) {
    v80 = v79;
  }
  else {
    v80 = 0;
  }
  v81 = (v71 - v80) * (v71 - v80);
  v82 = v81 < v73;
  if (v81 < v73) {
    v76 = v80;
  }
  if ((int)v81 < (int)v73) {
    v73 = (v71 - v80) * (v71 - v80);
  }
  if ((unsigned int)v78 >= 0xFF) {
    v83 = 255;
  }
  else {
    v83 = v78;
  }
  if (v78 >= 0) {
    v84 = v83;
  }
  else {
    v84 = 0;
  }
  v85 = (v71 - v84) * (v71 - v84);
  if (v85 >= v73) {
    LOBYTE(v84) = v76;
  }
  v52[1] = v84;
  if (v85 >= v73) {
    v86 = v82;
  }
  else {
    v86 = 2;
  }
  *(_BYTE*)(*(_QWORD*)a2 + 1LL) = v86;
  v87 = (unsigned __int8)*v52;
  {
    v88 = *(unsigned __int8*)(*(_QWORD*)a2 + (unsigned int)a2[4]);
    __asm__ volatile("" ::"r"(v88));
  }
  {
    v89 = (char*)&SdkData_ca7dde + 10 * SdkData_ca7e1a[v87];
    __asm__ volatile("" ::"r"(v89));
  }
  v90 = (v88 - v87) * (v88 - v87);
  {
    v91 = *((__int16*)v89 + 1);
    __asm__ volatile("" ::"r"(v91));
  }
  {
    v92 = *((__int16*)v89 + 2);
    __asm__ volatile("" ::"r"(v92));
  }
  if (v90 >= 0xFE01) {
    v93 = 0;
  }
  else {
    v93 = *v52;
    __asm__ volatile("" ::"r"(v93));
  }
  v94 = v91 + v87;
  v95 = v92 + v87;
  if ((unsigned int)v94 >= 0xFF) {
    v96 = 255;
  }
  else {
    v96 = v94;
  }
  if (v94 >= 0) {
    v97 = v96;
  }
  else {
    v97 = 0;
  }
  v98 = (v88 - v97) * (v88 - v97);
  v99 = v98 < v90;
  if (v98 < v90) {
    v93 = v97;
  }
  if ((int)v98 < (int)v90) {
    v90 = (v88 - v97) * (v88 - v97);
  }
  if ((unsigned int)v95 >= 0xFF) {
    v100 = 255;
  }
  else {
    v100 = v95;
  }
  if (v95 >= 0) {
    v101 = v100;
  }
  else {
    v101 = 0;
  }
  if ((v88 - v101) * (v88 - v101) < v90) {
    v102 = 2;
  }
  else {
    LOBYTE(v101) = v93;
    v102 = v99;
  }
  v52[v54] = v101;
  *(_BYTE*)(*(_QWORD*)a2 + (unsigned int)a2[4]) = v102;
  LODWORD(v103) = a2[2];
  if ((unsigned int)v103 < 3) {
    {
      v111 = (unsigned int)a2[3];
      __asm__ volatile("" ::"r"(v111));
    }
    if ((unsigned int)v111 < 3) {
      goto LABEL_126;
    }
  LABEL_129:
    v112 = 2 * v54;
    v113 = v54;
    for (i = 2; i < v111; ++i) {
      {
        v115 = 3 * (unsigned __int8)v52[v113] - (unsigned __int8)*v52;
        __asm__ volatile("" ::"r"(v115));
      }
      v116 = (v115 + 1 + (((v115 + 1) & 0x8000) != 0)) >> 1;
      if (v116 >= 0xFF) {
        v116 = 255;
      }
      if (v115 >= -2) {
        v117 = v116;
      }
      else {
        v117 = 0;
      }
      if ((i & 1) != 0) {
        v118 = 3;
      }
      else {
        v118 = 5;
      }
      LODWORD(v218) =
          *(unsigned __int8*)(*(_QWORD*)a2 + i * (unsigned int)a2[4]);
      v119 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
          (__int64)&v218, v117, v118);
      v52[v112] = v218;
      v52 += v113;
      {
        v120 = i * (unsigned int)a2[4];
        __asm__ volatile("" ::"r"(v120));
      }
      *(_BYTE*)(*(_QWORD*)a2 + v120) = v119;
      {
        v111 = (unsigned int)a2[3];
        __asm__ volatile("" ::"r"(v111));
      }
    }
    LODWORD(v103) = a2[2];
    v52 = v55;
    v54 = v113;
    if (v111 >= 2) {
      goto LABEL_140;
    }
    goto LABEL_198;
  }
  v104 = 0;
  do {
    {
      v105 = 3 * (unsigned __int8)v52[v104 + 1] - (unsigned __int8)v52[v104];
      __asm__ volatile("" ::"r"(v105));
    }
    v106 = (v105 + 1 + (((v105 + 1) & 0x8000) != 0)) >> 1;
    if (v106 >= 0xFF) {
      v106 = 255;
    }
    if (v105 >= -2) {
      v107 = v106;
    }
    else {
      v107 = 0;
    }
    if ((((_BYTE)v104 + 2) & 1) != 0) {
      v108 = 3;
    }
    else {
      v108 = 5;
    }
    LODWORD(v218) = *(unsigned __int8*)(*(_QWORD*)a2 + v104 + 2);
    v109 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
        (__int64)&v218, v107, v108);
    v52[v104 + 2] = v218;
    *(_BYTE*)(*(_QWORD*)a2 + v104 + 2) = v109;
    v110 = v104 + 3;
    ++v104;
    {
      v103 = (unsigned int)a2[2];
      __asm__ volatile("" ::"r"(v103));
    }
  } while (v110 < v103);
  {
    v111 = (unsigned int)a2[3];
    __asm__ volatile("" ::"r"(v111));
  }
  if ((unsigned int)v111 >= 3) {
    goto LABEL_129;
  }
LABEL_126:
  if (v111 < 2) {
    goto LABEL_198;
  }
LABEL_140:
  if ((unsigned int)v103 >= 2) {
    {
      v121 = (unsigned __int8*)&v52[v54];
      __asm__ volatile("" ::"r"(v121));
    }
    v122 = 1;
    v123 = v52;
    v124 = 2;
    do {
      if ((unsigned int)v103 >= 2) {
        v125 = 1;
        do {
          {
            v126 = 2 * ((unsigned __int8)v123[v125] + v121[v125 - 1]) -
                   (unsigned __int8)v123[v125 - 1];
            __asm__ volatile("" ::"r"(v126));
          }
          if ((unsigned __int16)(((unsigned int)(21846 * v126 + 21846) >> 16) +
                                 ((unsigned int)(21846 * v126 + 21846) >>
                                  31)) >= 0xFFu) {
            v127 = 255;
          }
          else {
            v127 = (unsigned __int16)(((unsigned int)(21846 * v126 + 21846) >>
                                       16) +
                                      ((unsigned int)(21846 * v126 + 21846) >>
                                       31));
          }
          if (v126 >= -3) {
            v128 = v127;
          }
          else {
            v128 = 0;
          }
          {
            v129 = *(unsigned __int8*)(*(_QWORD*)a2 +
                                       v122 * (unsigned int)a2[4] + v125);
            __asm__ volatile("" ::"r"(v129));
          }
          {
            v130 =
                (__int16*)((char*)&SdkData_ca7dde + 10 * SdkData_ca7e1a[v128]);
            __asm__ volatile("" ::"r"(v130));
          }
          v131 = (v129 - v128) * (v129 - v128);
          {
            v132 = v128 + v130[1];
            __asm__ volatile("" ::"r"(v132));
          }
          if (v131 >= 0xFE01) {
            v133 = 0;
          }
          else {
            v133 = v128;
          }
          if ((unsigned int)v132 >= 0xFF) {
            v134 = 255;
          }
          else {
            v134 = v128 + v130[1];
            __asm__ volatile("" ::"r"(v134));
          }
          if (v132 >= 0) {
            v135 = v134;
          }
          else {
            v135 = 0;
          }
          v136 = (v129 - v135) * (v129 - v135);
          if (v136 < v131) {
            v133 = v135;
          }
          if ((int)v136 >= (int)v131) {
            v137 = (v129 - v128) * (v129 - v128);
          }
          else {
            v137 = (v129 - v135) * (v129 - v135);
          }
          v138 = v136 < v131;
          {
            v139 = v128 + v130[2];
            __asm__ volatile("" ::"r"(v139));
          }
          if ((unsigned int)v139 >= 0xFF) {
            v140 = 255;
          }
          else {
            v140 = v128 + v130[2];
            __asm__ volatile("" ::"r"(v140));
          }
          if (v139 >= 0) {
            v141 = v140;
          }
          else {
            v141 = 0;
          }
          v142 = (v129 - v141) * (v129 - v141);
          if (v142 >= v137) {
            v143 = v138;
          }
          else {
            v133 = v141;
            v143 = 2;
          }
          if (((v124 + (_BYTE)v125 - 1) & 1) == 0) {
            if (v142 < (int)v137) {
              v137 = v142;
            }
            {
              v144 = v130[3] + v128;
              __asm__ volatile("" ::"r"(v144));
            }
            {
              v145 = v130[4] + v128;
              __asm__ volatile("" ::"r"(v145));
            }
            if ((unsigned int)v144 >= 0xFF) {
              v146 = 255;
            }
            else {
              v146 = v144;
            }
            if (v144 >= 0) {
              v147 = v146;
            }
            else {
              v147 = 0;
            }
            v148 = (v129 - v147) * (v129 - v147);
            if (v148 < v137) {
              v133 = v147;
              v143 = 3;
            }
            if (v148 < (int)v137) {
              v137 = (v129 - v147) * (v129 - v147);
            }
            if ((unsigned int)v145 >= 0xFF) {
              v149 = 255;
            }
            else {
              v149 = v145;
            }
            if (v145 >= 0) {
              v150 = v149;
            }
            else {
              v150 = 0;
            }
            if ((v129 - v150) * (v129 - v150) < v137) {
              v133 = v150;
              v143 = 4;
            }
          }
          v121[v125] = v133;
          *(_BYTE*)(*(_QWORD*)a2 + v122 * (unsigned int)a2[4] + v125++) = v143;
          {
            v103 = (unsigned int)a2[2];
            __asm__ volatile("" ::"r"(v103));
          }
        } while (v125 < v103);
        {
          v111 = (unsigned int)a2[3];
          __asm__ volatile("" ::"r"(v111));
        }
      }
      ++v122;
      v121 += v54;
      ++v124;
      v123 += v54;
    } while (v122 < v111);
  }
LABEL_198:
  *(_QWORD*)(*(_QWORD*)SdkData_e89220[0] + 8LL) = v52;
  v218 = 0x500000001LL;
  LODWORD(v219) = 25;
  {
    v151 = (unsigned int)a2[2];
    __asm__ volatile("" ::"r"(v151));
  }
  {
    v152 = (unsigned int)a2[3];
    __asm__ volatile("" ::"r"(v152));
  }
  if ((_DWORD)v152 != 0 && (_DWORD)v151 != 0) {
    v154 = true;
    v155 = 0;
    v156 = 0;
    v157 = 0;
    v158 = 0;
    do {
      v159 = v151;
      {
        v160 = (unsigned __int8*)(*(_QWORD*)a2 + v156 * (unsigned int)a2[4]);
        __asm__ volatile("" ::"r"(v160));
      }
      v161 = v155;
      do {
        if ((v161 & 1) == 0) {
          {
            v162 = v157 + *((_DWORD*)&v218 + v158) * *v160;
            __asm__ volatile("" ::"r"(v162));
          }
          v163 = v158 == 2;
          v164 = v158 != 2;
          if (v158 == 2) {
            v158 = 0;
          }
          else {
            ++v158;
          }
          v165 = v164 && v154;
          if (v163) {
            v157 = 0;
          }
          else {
            v157 = v162;
          }
          if (v163) {
            v166 = !v154;
            v154 = v165;
            if (!v166) {
              {
                v167 = a1[1];
                __asm__ volatile("" ::"r"(v167));
              }
              v154 = v167 + 7 < 0x961;
              v158 = 0;
              v157 = 0;
              if (v167 <= 0x959) {
                *(_BYTE*)(*a1 + (v167 >> 3)) |= ((v162 & 0x40) != 0)
                                                << (v167 & 7);
                {
                  v168 = *a1;
                  __asm__ volatile("" ::"r"(v168));
                }
                a1[1] = v167 + 1;
                *(_BYTE*)(v168 + ((v167 + 1) >> 3)) |= ((v162 & 0x20) != 0)
                                                       << ((v167 + 1) & 7);
                {
                  v169 = *a1;
                  __asm__ volatile("" ::"r"(v169));
                }
                a1[1] = v167 + 2;
                *(_BYTE*)(v169 + ((v167 + 2) >> 3)) |= ((v162 & 0x10) != 0)
                                                       << ((v167 + 2) & 7);
                {
                  v170 = *a1;
                  __asm__ volatile("" ::"r"(v170));
                }
                a1[1] = v167 + 3;
                *(_BYTE*)(v170 + ((v167 + 3) >> 3)) |= ((v162 & 8) != 0)
                                                       << ((v167 + 3) & 7);
                {
                  v171 = *a1;
                  __asm__ volatile("" ::"r"(v171));
                }
                a1[1] = v167 + 4;
                *(_BYTE*)(v171 + ((v167 + 4) >> 3)) |= ((v162 & 4) != 0)
                                                       << ((v167 + 4) & 7);
                {
                  v172 = *a1;
                  __asm__ volatile("" ::"r"(v172));
                }
                a1[1] = v167 + 5;
                *(_BYTE*)(v172 + ((v167 + 5) >> 3)) |= ((v162 & 2) != 0)
                                                       << ((v167 + 5) & 7);
                {
                  v173 = *a1;
                  __asm__ volatile("" ::"r"(v173));
                }
                a1[1] = v167 + 6;
                *(_BYTE*)(v173 + ((v167 + 6) >> 3)) |= (v162 & 1)
                                                       << ((v167 + 6) & 7);
                v154 = true;
                a1[1] = v167 + 7;
              }
            }
          }
          else {
            v154 = v165;
          }
        }
        ++v160;
        --v159;
        ++v161;
      } while (v159 != 0);
      ++v156;
      ++v155;
    } while (v156 != v152);
    v174 = v158 < 1 && v154;
    if (v158 >= 1 && v154) {
      {
        v175 = a1[1];
        __asm__ volatile("" ::"r"(v175));
      }
      v176 = v175 + 7;
      v174 = v175 + 7 < 0x961;
      if (v175 <= 0x959) {
        *(_BYTE*)(*a1 + (v175 >> 3)) |= ((v157 & 0x40) != 0) << (v175 & 7);
        {
          v177 = *a1;
          __asm__ volatile("" ::"r"(v177));
        }
        a1[1] = v175 + 1;
        *(_BYTE*)(v177 + ((v175 + 1) >> 3)) |= ((v157 & 0x20) != 0)
                                               << ((v175 + 1) & 7);
        {
          v178 = *a1;
          __asm__ volatile("" ::"r"(v178));
        }
        a1[1] = v175 + 2;
        *(_BYTE*)(v178 + ((v175 + 2) >> 3)) |= ((v157 & 0x10) != 0)
                                               << ((v175 + 2) & 7);
        {
          v179 = *a1;
          __asm__ volatile("" ::"r"(v179));
        }
        a1[1] = v175 + 3;
        *(_BYTE*)(v179 + ((v175 + 3) >> 3)) |= ((v157 & 8) != 0)
                                               << ((v175 + 3) & 7);
        {
          v180 = *a1;
          __asm__ volatile("" ::"r"(v180));
        }
        a1[1] = v175 + 4;
        *(_BYTE*)(v180 + ((v175 + 4) >> 3)) |= ((v157 & 4) != 0)
                                               << ((v175 + 4) & 7);
        v181 = v175 + 5;
        v182 = v175 + 6;
        {
          v183 = *a1;
          __asm__ volatile("" ::"r"(v183));
        }
        a1[1] = v181;
        *(_BYTE*)(v183 + (v181 >> 3)) |= ((v157 & 2) != 0) << (v181 & 7);
        a1[1] = v182;
        *(_BYTE*)(*a1 + (v182 >> 3)) |= (v157 & 1) << (v182 & 7);
        a1[1] = v176;
        goto LABEL_224;
      }
    }
    if (!v174) {
      return 0;
    }
  }
LABEL_224:
  result = 1;
  v218 = 0x300000001LL;
  v219 = 0x1B00000009LL;
  v220 = 81;
  {
    v185 = (unsigned int)a2[3];
    __asm__ volatile("" ::"r"(v185));
  }
  if ((_DWORD)v185 != 0) {
    {
      v186 = (unsigned int)a2[2];
      __asm__ volatile("" ::"r"(v186));
    }
    if ((_DWORD)v186 != 0) {
      v187 = true;
      v188 = 0;
      v189 = 0;
      v190 = 0;
      v191 = 0;
      do {
        v192 = v186;
        {
          v193 = (unsigned __int8*)(*(_QWORD*)a2 + v189 * (unsigned int)a2[4]);
          __asm__ volatile("" ::"r"(v193));
        }
        v194 = v188;
        do {
          if ((v194 & 1) != 0) {
            {
              v195 = v190 + *((_DWORD*)&v218 + v191) * *v193;
              __asm__ volatile("" ::"r"(v195));
            }
            v196 = v191 == 4;
            v197 = v191 != 4;
            if (v191 == 4) {
              v191 = 0;
            }
            else {
              ++v191;
            }
            v198 = v197 && v187;
            if (v196) {
              v190 = 0;
            }
            else {
              v190 = v195;
            }
            if (v196) {
              v199 = !v187;
              v187 = v198;
              if (!v199) {
                {
                  v200 = a1[1];
                  __asm__ volatile("" ::"r"(v200));
                }
                v187 = v200 + 8 < 0x961;
                v191 = 0;
                v190 = 0;
                if (v200 <= 0x958) {
                  *(_BYTE*)(*a1 + (v200 >> 3)) |= ((v195 & 0x80) != 0)
                                                  << (v200 & 7);
                  {
                    v201 = *a1;
                    __asm__ volatile("" ::"r"(v201));
                  }
                  a1[1] = v200 + 1;
                  *(_BYTE*)(v201 + ((v200 + 1) >> 3)) |= ((v195 & 0x40) != 0)
                                                         << ((v200 + 1) & 7);
                  {
                    v202 = *a1;
                    __asm__ volatile("" ::"r"(v202));
                  }
                  a1[1] = v200 + 2;
                  *(_BYTE*)(v202 + ((v200 + 2) >> 3)) |= ((v195 & 0x20) != 0)
                                                         << ((v200 + 2) & 7);
                  {
                    v203 = *a1;
                    __asm__ volatile("" ::"r"(v203));
                  }
                  a1[1] = v200 + 3;
                  *(_BYTE*)(v203 + ((v200 + 3) >> 3)) |= ((v195 & 0x10) != 0)
                                                         << ((v200 + 3) & 7);
                  {
                    v204 = *a1;
                    __asm__ volatile("" ::"r"(v204));
                  }
                  a1[1] = v200 + 4;
                  *(_BYTE*)(v204 + ((v200 + 4) >> 3)) |= ((v195 & 8) != 0)
                                                         << ((v200 + 4) & 7);
                  {
                    v205 = *a1;
                    __asm__ volatile("" ::"r"(v205));
                  }
                  a1[1] = v200 + 5;
                  *(_BYTE*)(v205 + ((v200 + 5) >> 3)) |= ((v195 & 4) != 0)
                                                         << ((v200 + 5) & 7);
                  {
                    v206 = *a1;
                    __asm__ volatile("" ::"r"(v206));
                  }
                  a1[1] = v200 + 6;
                  *(_BYTE*)(v206 + ((v200 + 6) >> 3)) |= ((v195 & 2) != 0)
                                                         << ((v200 + 6) & 7);
                  {
                    v207 = *a1;
                    __asm__ volatile("" ::"r"(v207));
                  }
                  a1[1] = v200 + 7;
                  *(_BYTE*)(v207 + ((v200 + 7) >> 3)) |= (v195 & 1)
                                                         << ((v200 + 7) & 7);
                  v187 = true;
                  a1[1] = v200 + 8;
                }
              }
            }
            else {
              v187 = v198;
            }
          }
          --v192;
          ++v193;
          ++v194;
        } while (v192 != 0);
        ++v189;
        ++v188;
      } while (v189 != v185);
      result = (v191 < 1) & (unsigned __int8)v187;
      if (v191 >= 1 && v187) {
        {
          v208 = a1[1];
          __asm__ volatile("" ::"r"(v208));
        }
        v209 = v208 + 8;
        result = v208 + 8 < 0x961;
        if (v208 <= 0x958) {
          *(_BYTE*)(*a1 + (v208 >> 3)) |= ((v190 & 0x80) != 0) << (v208 & 7);
          {
            v210 = *a1;
            __asm__ volatile("" ::"r"(v210));
          }
          a1[1] = v208 + 1;
          *(_BYTE*)(v210 + ((v208 + 1) >> 3)) |= ((v190 & 0x40) != 0)
                                                 << ((v208 + 1) & 7);
          {
            v211 = *a1;
            __asm__ volatile("" ::"r"(v211));
          }
          a1[1] = v208 + 2;
          *(_BYTE*)(v211 + ((v208 + 2) >> 3)) |= ((v190 & 0x20) != 0)
                                                 << ((v208 + 2) & 7);
          {
            v212 = *a1;
            __asm__ volatile("" ::"r"(v212));
          }
          a1[1] = v208 + 3;
          *(_BYTE*)(v212 + ((v208 + 3) >> 3)) |= ((v190 & 0x10) != 0)
                                                 << ((v208 + 3) & 7);
          {
            v213 = *a1;
            __asm__ volatile("" ::"r"(v213));
          }
          a1[1] = v208 + 4;
          *(_BYTE*)(v213 + ((v208 + 4) >> 3)) |= ((v190 & 8) != 0)
                                                 << ((v208 + 4) & 7);
          {
            v214 = *a1;
            __asm__ volatile("" ::"r"(v214));
          }
          a1[1] = v208 + 5;
          *(_BYTE*)(v214 + ((v208 + 5) >> 3)) |= ((v190 & 4) != 0)
                                                 << ((v208 + 5) & 7);
          v215 = v208 + 6;
          v216 = v208 + 7;
          {
            v217 = *a1;
            __asm__ volatile("" ::"r"(v217));
          }
          a1[1] = v215;
          *(_BYTE*)(v217 + (v215 >> 3)) |= ((v190 & 2) != 0) << (v215 & 7);
          a1[1] = v216;
          *(_BYTE*)(*a1 + (v216 >> 3)) |= (v190 & 1) << (v216 & 7);
          a1[1] = v209;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
