#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_codec_AudioSpecificConfig_Init_plt(_QWORD);
__int64 nn_codec_CProgramConfig_Read_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKcrcEndReg_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKcrcGetCRC_plt(_QWORD);
__int64 nn_codec_FDKcrcReset_plt(_QWORD);
__int64 nn_codec_FDKcrcStartReg_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKpushBack(unsigned int*, unsigned int);
extern _DWORD SdkData_c33cc8[16];
extern _DWORD SdkData_c33d08[16];
extern void (*SdkData_e87a50[778])();
unsigned int* nn_codec_FDKpushFor(unsigned int* result, unsigned int);
__int64 nn_codec_adtsRead_DecodeHeader(unsigned __int8* a1, __int64 a2,
                                       unsigned int* a3, unsigned __int64 a4);

__int64 nn_codec_adtsRead_DecodeHeader(unsigned __int8* a1, __int64 a2,
                                       unsigned int* a3, unsigned __int64 a4)
{
  int v6;
  int v8;
  void(__attribute__((noreturn)) * v10)();
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  char v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned __int8 v111;
  unsigned int v112;
  unsigned int v113;
  __int64 v114;
  unsigned int v115;
  int v116;
  unsigned int v117;
  unsigned int v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  __int64 v123;
  __int64 v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  void(__attribute__((noreturn)) * v129)();
  __int64 v130;
  unsigned __int8* v131;
  unsigned __int64 v132;
  int v133;
  unsigned int v134;
  unsigned int v135;
  unsigned int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  int v140;
  unsigned int v141;
  unsigned int v142;
  __int64 v143;
  __int16 v144;
  __int64 v145;
  unsigned __int8* v146;
  unsigned __int8* v147;
  __int16 v148;
  __int16 v149;
  unsigned __int8* v150;
  unsigned __int64 v151;
  _WORD* v152;
  _WORD* v153;
  __int16 v154;
  __int16 v155;
  __int16 v156;
  __int16 v157;
  __int16 v158;
  __int16 v159;
  __int16 v160;
  __int16 v161;
  int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  int v168;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  unsigned __int16 v172;
  int v173;
  int v174;
  int v175;
  unsigned int v176;
  unsigned int v177;
  unsigned int v178;
  unsigned int v179;
  __int64 v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  unsigned int v189;
  __int64 v190;
  __int64 v191;
  unsigned int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  unsigned int v198;
  int v199;
  int v200;
  _BYTE v201[465];
  struct {
    __int64 v202;
    __int64 v203;
    __int16 v204;
  } v202_;

  v6 = a4;
  v202_.v204 = 0;
  v202_.v202 = 0;
  v202_.v203 = 0;
  memset_plt((void*)v201, nullptr, 465, a4);
  nn_codec_FDKmemcpy_plt(v201, a2 + 32, 465);
  if (a3[12] != 0) {
    nn_codec_FDK_put_plt(a3 + 2, *a3);
    *(_QWORD*)a3 = 0;
    v8 = nn_codec_FDK_getValidBits_plt(a3 + 2);
    if (v8 < 56) {
      return 257;
    }
  }
  else {
    nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
    *(_QWORD*)a3 = 0;
    v8 = nn_codec_FDK_getValidBits_plt(a3 + 2);
    if (v8 < 56) {
      return 257;
    }
  }
  v194 = v8;
  v10 = SdkData_e87a50[0];
  v11 = a3[1];
  v199 = v6;
  v12 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x4LL));
  if (v11 >= 2) {
    v13 = *a3;
    goto LABEL_11;
  }
  v14 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v14) {
    v15 = v14;
  }
  else {
    v15 = 31 - a3[1];
  }
  v16 = *a3 << v15;
  v17 = nn_codec_FDK_get_plt(a3 + 2, v15);
  v18 = a3[1];
  v13 = v16 | v17;
  *a3 = v16 | v17;
  v11 = v18 + v15;
  if (v11 != 0) {
  LABEL_11:
    v19 = v11 - 1;
    v20 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4);
    a3[1] = v19;
    LOBYTE(v202_.v202) = (v13 >> v19) & v12;
    v196 = (unsigned __int8)v202_.v202;
    if (v19 > 2) {
      goto LABEL_19;
    }
    goto LABEL_14;
  }
  v20 = *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4);
  *a3 = 2 * v13;
  a3[1] = 0;
  LOBYTE(v202_.v202) = v12 & (2 * v13);
  v196 = v202_.v202 & 0xFE;
LABEL_14:
  v21 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v21) {
    v22 = v21;
  }
  else {
    v22 = 31 - a3[1];
  }
  v23 = *a3 << v22;
  v24 = nn_codec_FDK_get_plt(a3 + 2, v22);
  v25 = a3[1];
  v13 = v23 | v24;
  *a3 = v23 | v24;
  v19 = v25 + v22;
  if (v19 <= 1) {
    v26 = v13 << (2 - v19);
    *a3 = v26;
    a3[1] = 0;
    BYTE1(v202_.v202) = v26 & v20;
    goto LABEL_20;
  }
LABEL_19:
  v27 = v19 - 2;
  a3[1] = v27;
  BYTE1(v202_.v202) = (v13 >> v27) & v20;
  if (v27 > 1) {
    goto LABEL_24;
  }
LABEL_20:
  v28 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v28) {
    v29 = v28;
  }
  else {
    v29 = 31 - a3[1];
  }
  v30 = *a3 << v29;
  v31 = nn_codec_FDK_get_plt(a3 + 2, v29);
  v32 = a3[1];
  v13 = v30 | v31;
  *a3 = v30 | v31;
  v27 = v32 + v29;
  if (v27 != 0) {
  LABEL_24:
    v33 = v27 - 1;
    a3[1] = v33;
    v34 = (v13 >> v33) & (unsigned __int8)v12;
    BYTE2(v202_.v202) = (v13 >> v33) & v12;
    if (v33 > 2) {
      goto LABEL_32;
    }
    goto LABEL_27;
  }
  v35 = 2 * v13;
  v36 = v12 & (2 * v13);
  *(_QWORD*)a3 = v35;
  v34 = v36 & 0xFE;
  BYTE2(v202_.v202) = v36;
LABEL_27:
  v37 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v37) {
    v38 = v37;
  }
  else {
    v38 = 31 - a3[1];
  }
  v39 = *a3 << v38;
  v40 = nn_codec_FDK_get_plt(a3 + 2, v38);
  v41 = a3[1];
  v13 = v39 | v40;
  *a3 = v39 | v40;
  v33 = v41 + v38;
  if (v33 <= 1) {
    v42 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v10 + 4);
    v43 = v13 << (2 - v33);
    *a3 = v43;
    a3[1] = 0;
    BYTE3(v202_.v202) = v43 & v20;
    goto LABEL_33;
  }
LABEL_32:
  v44 = v33 - 2;
  v42 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v10 + 4);
  a3[1] = v44;
  BYTE3(v202_.v202) = (v13 >> v44) & v20;
  if (v44 > 4) {
    goto LABEL_39;
  }
LABEL_33:
  v45 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v45) {
    v46 = v45;
  }
  else {
    v46 = 31 - a3[1];
  }
  v47 = *a3 << v46;
  v48 = nn_codec_FDK_get_plt(a3 + 2, v46);
  v49 = a3[1];
  v13 = v47 | v48;
  *a3 = v47 | v48;
  v44 = v49 + v46;
  if (v44 > 3) {
    v10 = SdkData_e87a50[0];
  LABEL_39:
    v51 = v44 - 4;
    a3[1] = v51;
    v195 = (v13 >> v51) & v42;
    BYTE4(v202_.v202) = (v13 >> v51) & v42;
    v198 = BYTE4(v202_.v202);
    if (v51 > 1) {
      goto LABEL_44;
    }
    goto LABEL_40;
  }
  v50 = v13 << (4 - v44);
  *a3 = v50;
  a3[1] = 0;
  LOBYTE(v195) = v50 & v42;
  BYTE4(v202_.v202) = v50 & v42;
  v198 = v50 & (unsigned __int8)v42;
  v10 = SdkData_e87a50[0];
LABEL_40:
  v52 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v52) {
    v53 = v52;
  }
  else {
    v53 = 31 - a3[1];
  }
  v54 = *a3 << v53;
  v55 = nn_codec_FDK_get_plt(a3 + 2, v53);
  v56 = a3[1];
  v13 = v54 | v55;
  *a3 = v54 | v55;
  v51 = v56 + v53;
  if (v51 == 0) {
    *(_QWORD*)a3 = 2 * v13;
    BYTE5(v202_.v202) = v12 & (2 * v13);
    v200 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v10);
    goto LABEL_47;
  }
LABEL_44:
  v57 = v51 - 1;
  a3[1] = v57;
  BYTE5(v202_.v202) = (v13 >> v57) & v12;
  v200 = *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v10);
  if (v57 > 3) {
    goto LABEL_52;
  }
LABEL_47:
  v58 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v58) {
    v59 = v58;
  }
  else {
    v59 = 31 - a3[1];
  }
  v60 = *a3 << v59;
  v61 = nn_codec_FDK_get_plt(a3 + 2, v59);
  v62 = a3[1];
  v13 = v60 | v61;
  *a3 = v60 | v61;
  v57 = v62 + v59;
  if (v57 > 2) {
  LABEL_52:
    v64 = v57 - 3;
    a3[1] = v64;
    BYTE6(v202_.v202) = (v13 >> v64) & v200;
    if (v64 > 1) {
      goto LABEL_57;
    }
    goto LABEL_53;
  }
  v63 = v13 << (3 - v57);
  *a3 = v63;
  a3[1] = 0;
  BYTE6(v202_.v202) = v63 & v200;
LABEL_53:
  v65 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v65) {
    v66 = v65;
  }
  else {
    v66 = 31 - a3[1];
  }
  v67 = *a3 << v66;
  v68 = nn_codec_FDK_get_plt(a3 + 2, v66);
  v69 = a3[1];
  v13 = v67 | v68;
  *a3 = v67 | v68;
  v64 = v69 + v66;
  if (v64 == 0) {
    *(_QWORD*)a3 = 2 * v13;
    HIBYTE(v202_.v202) = v12 & (2 * v13);
    goto LABEL_60;
  }
LABEL_57:
  v70 = v64 - 1;
  a3[1] = v70;
  HIBYTE(v202_.v202) = (v13 >> v70) & v12;
  if (v70 > 1) {
    goto LABEL_64;
  }
LABEL_60:
  v71 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v71) {
    v72 = v71;
  }
  else {
    v72 = 31 - a3[1];
  }
  v73 = *a3 << v72;
  v74 = nn_codec_FDK_get_plt(a3 + 2, v72);
  v75 = a3[1];
  v13 = v73 | v74;
  *a3 = v73 | v74;
  v70 = v75 + v72;
  if (v70 != 0) {
  LABEL_64:
    v76 = v70 - 1;
    a3[1] = v76;
    LOBYTE(v202_.v203) = (v13 >> v76) & v12;
    if (v76 > 1) {
      goto LABEL_71;
    }
    goto LABEL_67;
  }
  *(_QWORD*)a3 = 2 * v13;
  LOBYTE(v202_.v203) = v12 & (2 * v13);
LABEL_67:
  v77 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v77) {
    v78 = v77;
  }
  else {
    v78 = 31 - a3[1];
  }
  v79 = *a3 << v78;
  v80 = nn_codec_FDK_get_plt(a3 + 2, v78);
  v81 = a3[1];
  v13 = v79 | v80;
  *a3 = v79 | v80;
  v76 = v81 + v78;
  if (v76 == 0) {
    *(_QWORD*)a3 = 2 * v13;
    BYTE1(v202_.v203) = v12 & (2 * v13);
    goto LABEL_74;
  }
LABEL_71:
  v82 = v76 - 1;
  a3[1] = v82;
  BYTE1(v202_.v203) = (v13 >> v82) & v12;
  if (v82 > 1) {
    goto LABEL_78;
  }
LABEL_74:
  v83 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v83) {
    v84 = v83;
  }
  else {
    v84 = 31 - a3[1];
  }
  v85 = *a3 << v84;
  v86 = nn_codec_FDK_get_plt(a3 + 2, v84);
  v87 = a3[1];
  v13 = v85 | v86;
  *a3 = v85 | v86;
  v82 = v87 + v84;
  if (v82 != 0) {
  LABEL_78:
    v88 = v82 - 1;
    v89 = *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v10 + 4);
    a3[1] = v88;
    BYTE2(v202_.v203) = (v13 >> v88) & v12;
    if (v88 > 0xD) {
      goto LABEL_86;
    }
    goto LABEL_81;
  }
  v89 = *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v10 + 4);
  *(_QWORD*)a3 = 2 * v13;
  BYTE2(v202_.v203) = v12 & (2 * v13);
LABEL_81:
  v90 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v90) {
    v91 = v90;
  }
  else {
    v91 = 31 - a3[1];
  }
  v92 = *a3 << v91;
  v93 = nn_codec_FDK_get_plt(a3 + 2, v91);
  v94 = a3[1];
  v13 = v92 | v93;
  *a3 = v92 | v93;
  v88 = v94 + v91;
  if (v88 <= 0xC) {
    v95 = v13 << (13 - v88);
    *a3 = v95;
    a3[1] = 0;
    LOWORD(v197) = v95 & v89;
    WORD2(v202_.v203) = v95 & v89;
    v96 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                     (unsigned __int64)((__int64*)0x28LL) + 4);
    goto LABEL_87;
  }
LABEL_86:
  v97 = v88 - 13;
  a3[1] = v97;
  v197 = (v13 >> v97) & v89;
  WORD2(v202_.v203) = (v13 >> v97) & v89;
  v96 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0x28LL) + 4);
  if (v97 > 0xB) {
    goto LABEL_92;
  }
LABEL_87:
  v98 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v98) {
    v99 = v98;
  }
  else {
    v99 = 31 - a3[1];
  }
  v100 = *a3 << v99;
  v101 = nn_codec_FDK_get_plt(a3 + 2, v99);
  v102 = a3[1];
  v13 = v100 | v101;
  *a3 = v100 | v101;
  v97 = v102 + v99;
  if (v97 > 0xA) {
  LABEL_92:
    v104 = v97 - 11;
    a3[1] = v104;
    HIWORD(v202_.v203) = (v13 >> v104) & v96;
    if (v104 > 2) {
      goto LABEL_101;
    }
    goto LABEL_93;
  }
  v103 = v13 << (11 - v97);
  *a3 = v103;
  a3[1] = 0;
  HIWORD(v202_.v203) = v103 & v96;
LABEL_93:
  v105 = nn_codec_FDK_getValidBits_plt(a3 + 2);
  if (31 - a3[1] >= v105) {
    v106 = v105;
  }
  else {
    v106 = 31 - a3[1];
  }
  v107 = *a3 << v106;
  v108 = nn_codec_FDK_get_plt(a3 + 2, v106);
  v109 = a3[1];
  v13 = v107 | v108;
  *a3 = v107 | v108;
  v104 = v109 + v106;
  if (v104 <= 1) {
    v110 = v13 << (2 - v104);
    *(_QWORD*)a3 = v110;
    v111 = v110 & v20;
    v202_.v204 = v110 & (unsigned __int8)v20;
    if (v34 == 0) {
      goto LABEL_98;
    }
  LABEL_102:
    v117 = v198;
    v116 = v199;
    v118 = 56;
    goto LABEL_103;
  }
LABEL_101:
  v115 = v104 - 2;
  a3[1] = v115;
  v111 = (v13 >> v115) & v20;
  v202_.v204 = v111;
  if (v34 != 0) {
    goto LABEL_102;
  }
LABEL_98:
  nn_codec_FDKcrcReset_plt(a1 + 24);
  v112 = a3[1];
  v113 = a3[12];
  v114 = v112 + 56;
  if ((unsigned int)v114 > 0x1F) {
    if (v113 == 0) {
      nn_codec_FDK_pushBack_plt(a3 + 2, v112, 0);
      goto LABEL_125;
    }
  }
  else if (v113 == 0) {
    a3[1] = v114;
    nn_codec_FDK_pushBack_plt(a3 + 2, v114, 0);
    *(_QWORD*)a3 = 0;
    goto LABEL_126;
  }
  nn_codec_FDK_put_plt(a3 + 2, *a3);
LABEL_125:
  v124 = a3[12];
  *(_QWORD*)a3 = 0;
  nn_codec_FDK_pushBack_plt(a3 + 2, 56, v124);
LABEL_126:
  v125 = nn_codec_FDKcrcStartReg_plt(a1 + 24, a3, 0);
  v126 = a3[1];
  v127 = a3[12];
  v128 = v125;
  if (v126 >= 0x39) {
    if (v127 == 0) {
      a3[1] = v126 - 56;
      v193 = v111;
      if (v111 == 0) {
      LABEL_129:
        v118 = 72;
        v129 = SdkData_e87a50[0];
        goto LABEL_151;
      }
      goto LABEL_134;
    }
  }
  else if (v127 == 0) {
    nn_codec_FDK_pushBack_plt(a3 + 2, v126, 0);
  LABEL_133:
    v130 = a3[12];
    *(_QWORD*)a3 = 0;
    nn_codec_FDK_pushForward_plt(a3 + 2, 56, v130);
    v193 = v111;
    if (v111 == 0) {
      goto LABEL_129;
    }
  LABEL_134:
    v192 = v128;
    v131 = a1 + 106;
    v132 = 0;
    v133 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                      (unsigned __int64)((char*)0x40LL));
    do {
      while (1) {
        v135 = a3[1];
        if (v135 >= 0x11) {
          v136 = *a3;
          break;
        }
        v137 = nn_codec_FDK_getValidBits_plt(a3 + 2);
        v138 = 31 - a3[1] >= v137 ? v137 : 31 - a3[1];
        v139 = *a3 << v138;
        v140 = nn_codec_FDK_get_plt(a3 + 2, v138);
        v141 = a3[1];
        v136 = v139 | v140;
        *a3 = v139 | v140;
        v135 = v141 + v138;
        if (v135 > 0xF) {
          break;
        }
        v134 = v136 << (16 - v135);
        *a3 = v134;
        a3[1] = 0;
        *(_WORD*)&v131[2 * v132++] = v134 & v133;
        if (v132 >= v111) {
          goto LABEL_143;
        }
      }
      v142 = v135 - 16;
      a3[1] = v142;
      *(_WORD*)&v131[2 * v132++] = (v136 >> v142) & v133;
    } while (v132 < v111);
  LABEL_143:
    v143 = v111 & 7;
    v144 = v197 - 2 * v111 - 9;
    *(_WORD*)&a1[2 * v111 + 106] = v144;
    if (v143 != 0) {
      v128 = v192;
      v145 = v111;
      v146 = &a1[2 * v111 + 106];
      v147 = v146;
      do {
        v149 = *((_WORD*)v147 - 1);
        v147 -= 2;
        v148 = v149;
        --v145;
        --v143;
        *(_WORD*)v146 = v144 - v149;
        v146 = v147;
        v144 = v149;
      } while (v143 != 0);
      if ((unsigned int)v111 - 1 < 7) {
      LABEL_147:
        v129 = SdkData_e87a50[0];
        v118 = 16 * v111 + 72;
        goto LABEL_151;
      }
    }
    else {
      v128 = v192;
      v148 = v197 - 2 * v111 - 9;
      v145 = v111;
      if ((unsigned int)v111 - 1 < 7) {
        goto LABEL_147;
      }
    }
    v150 = &a1[2 * v145];
    v151 = v145 + 1;
    v129 = SdkData_e87a50[0];
    v118 = 16 * v111 + 72;
    v152 = v150 + 106;
    v153 = v150 + 106;
    do {
      v154 = *(v152 - 1);
      v151 -= 8LL;
      *v152 = v148 - v154;
      v155 = *(v152 - 2);
      *(v152 - 1) = v154 - v155;
      v156 = *(v152 - 3);
      *(v152 - 2) = v155 - v156;
      v157 = *(v152 - 4);
      *(v152 - 3) = v156 - v157;
      v158 = *(v152 - 5);
      *(v152 - 4) = v157 - v158;
      v159 = *(v152 - 6);
      *(v152 - 5) = v158 - v159;
      v160 = *(v152 - 7);
      *(v152 - 6) = v159 - v160;
      v161 = *(v153 - 8);
      v153 -= 8;
      v148 = v161;
      *(v152 - 7) = v160 - v161;
      v152 = v153;
    } while (v151 > 1);
  LABEL_151:
    nn_codec_FDKcrcEndReg_plt(a1 + 24, a3, v128);
    v162 = *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)v129);
    v163 = a3[1];
    if (v163 >= 0x11) {
      v164 = *a3;
      goto LABEL_158;
    }
    v165 = nn_codec_FDK_getValidBits_plt(a3 + 2);
    if (31 - a3[1] >= v165) {
      v166 = v165;
    }
    else {
      v166 = 31 - a3[1];
    }
    v167 = *a3 << v166;
    v168 = nn_codec_FDK_get_plt(a3 + 2, v166);
    v169 = a3[1];
    v164 = v167 | v168;
    *a3 = v167 | v168;
    v163 = v169 + v166;
    if (v163 > 0xF) {
    LABEL_158:
      v117 = v198;
      v116 = v199;
      v171 = v163 - 16;
      v170 = v164 >> v171;
      a3[1] = v171;
    }
    else {
      v117 = v198;
      v116 = v199;
      v170 = v164 << (16 - v163);
      *(_QWORD*)a3 = v170;
    }
    v172 = v170 & v162;
    *((_WORD*)a1 + 52) = v172;
    if (v193 == 0) {
    LABEL_103:
      if (BYTE1(v202_.v202) == 0 && v117 < 0xD && (v196 != 0 || a1[18] != 0)) {
        if (v116 == 0 && HIWORD(v202_.v203) != 2047 && a1[19] != 0) {
          v119 = 8 * (unsigned __int16)v197 +
                 32 * HIWORD(v202_.v203) * SdkData_c33d08[BYTE6(v202_.v202)];
          if (v194 < v119) {
            nn_codec_FDKpushBack(a3, v118);
            if ((int)(v119 + v118) <= 65529) {
              return 257;
            }
            else {
              return 258;
            }
          }
          a1[19] = 0;
        }
        nn_codec_AudioSpecificConfig_Init_plt(a2);
        v173 = BYTE3(v202_.v202);
        *(_BYTE*)(a2 + 531) = v117;
        *(_DWORD*)(a2 + 500) = v173 + 1;
        v174 = SdkData_c33cc8[v195 & 0xF];
        *(_DWORD*)(a2 + 508) = 1024;
        *(_DWORD*)(a2 + 504) = v174;
        v175 = BYTE6(v202_.v202);
        *(_BYTE*)(a2 + 524) = BYTE6(v202_.v202);
        if (v175 != 0) {
        LABEL_199:
          nn_codec_FDKmemcpy_plt(a1, &v202_.v202, 18);
          return 0;
        }
        v176 = v118;
        if (a3[12] != 0) {
          nn_codec_FDK_put_plt(a3 + 2, *a3);
        }
        else {
          nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
        }
        *(_QWORD*)a3 = 0;
        v177 = nn_codec_FDK_getValidBits_plt(a3 + 2);
        v178 = a3[1];
        v179 = v177;
        if (v178 < 4) {
          v181 = nn_codec_FDK_getValidBits_plt(a3 + 2);
          if (31 - a3[1] >= v181) {
            v182 = v181;
          }
          else {
            v182 = 31 - a3[1];
          }
          v183 = *a3 << v182;
          v184 = nn_codec_FDK_get_plt(a3 + 2, v182);
          v185 = a3[1];
          v180 = v183 | v184;
          *a3 = v180;
          v178 = v185 + v182;
          if (v178 <= 2) {
            v186 = 0;
            v180 = (unsigned int)((_DWORD)v180 << (3 - v178));
            *(_QWORD*)a3 = (unsigned int)v180;
            v187 = v180;
            goto LABEL_176;
          }
        }
        else {
          v180 = *a3;
        }
        v186 = v178 - 3;
        a3[1] = v178 - 3;
        v187 = (unsigned int)v180 >> (v178 - 3);
      LABEL_176:
        if ((v187 & v200) == 5) {
          if (a1[2] != 0) {
            v188 = 0;
          }
          else {
            v188 = nn_codec_FDKcrcStartReg_plt(a1 + 24, a3, 0);
          }
          nn_codec_CProgramConfig_Read_plt(a2 + 32, a3, v179);
          if (a1[2] == 0) {
            nn_codec_FDKcrcEndReg_plt(a1 + 24, a3, v188);
          }
          if (a3[12] != 0) {
            nn_codec_FDK_put_plt(a3 + 2, *a3);
          }
          else {
            nn_codec_FDK_pushBack_plt(a3 + 2, a3[1], 0);
          }
          *(_QWORD*)a3 = 0;
          HIBYTE(v202_.v204) = v179 - nn_codec_FDK_getValidBits_plt(a3 + 2);
          goto LABEL_199;
        }
        v189 = a3[12];
        if (v186 > 0x1C) {
          if (v189 == 0) {
            nn_codec_FDK_pushBack_plt(a3 + 2, v186, 0);
            goto LABEL_192;
          }
        }
        else if (v189 == 0) {
          v190 = v186 + 3;
          a3[1] = v190;
          nn_codec_FDK_pushBack_plt(a3 + 2, v190, 0);
          *(_QWORD*)a3 = 0;
          goto LABEL_193;
        }
        nn_codec_FDK_put_plt(a3 + 2, v180);
      LABEL_192:
        v191 = a3[12];
        *(_QWORD*)a3 = 0;
        nn_codec_FDK_pushBack_plt(a3 + 2, 3, v191);
      LABEL_193:
        if (v201[461] != 0 && a1[4] == v117 && BYTE6(v202_.v202) == a1[6] &&
            v196 == *a1) {
          nn_codec_FDKmemcpy_plt(a2 + 32, v201, 465);
          goto LABEL_199;
        }
        if (v196 != 0) {
          goto LABEL_199;
        }
        nn_codec_FDKpushFor(a3, 8 * (unsigned __int16)v197 - v176 - 3);
        return 1026;
      }
      v120 = a3[1];
      v121 = a3[12];
      v122 = 8 * (unsigned __int16)v197;
      if (v120 <= v122) {
        if (v121 == 0) {
          nn_codec_FDK_pushBack_plt(a3 + 2, v120, 0);
          goto LABEL_122;
        }
      }
      else if (v121 == 0) {
        a3[1] = v120 - v122;
        return 1026;
      }
      nn_codec_FDK_put_plt(a3 + 2, *a3);
    LABEL_122:
      v123 = a3[12];
      *(_QWORD*)a3 = 0;
      nn_codec_FDK_pushForward_plt(a3 + 2, v122, v123);
      return 1026;
    }
    if ((unsigned __int16)nn_codec_FDKcrcGetCRC_plt(a1 + 24) == v172) {
      nn_codec_FDKcrcReset_plt(a1 + 24);
      goto LABEL_103;
    }
    return 1027;
  }
  nn_codec_FDK_put_plt(a3 + 2, *a3);
  goto LABEL_133;
}

#pragma GCC visibility pop
