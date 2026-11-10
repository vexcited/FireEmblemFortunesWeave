#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nerd_gillette_internal_otete_Downscale2x2_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_Serialize_748900(__int64 a1, __int64** a2);
__int64 nerd_gillette_internal_otete_Serialize_749220(__int64 a1, __int64** a2);
__int64 nerd_gillette_internal_otete_Downscale2x2_74b970(_QWORD* a1,
                                                         __int64 a2);
_DWORD* nerd_gillette_internal_otete_Downscale2x2_74b9a0(
    _DWORD* this_, const unsigned __int8* a2, unsigned int a3, unsigned int a4,
    unsigned int* a5, unsigned __int8* a6);

__int64 nerd_gillette_internal_otete_Serialize_748900(__int64 a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  char v11;
  unsigned int v12;
  char v13;
  unsigned int v14;
  char v15;
  unsigned int v16;
  char v17;
  unsigned int v18;
  char v19;
  int v20;
  unsigned __int64 v21;
  char v22;
  unsigned __int64 v23;
  char v24;
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  char v30;
  unsigned __int64 v31;
  char v32;
  unsigned int v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  __int64* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  char v53;
  unsigned int v54;
  char v55;
  unsigned int v56;
  char v57;
  unsigned int v58;
  char v59;
  unsigned int v60;
  char v61;
  int v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned __int64 v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned int v75;
  __int64* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  char v85;
  unsigned int v86;
  char v87;
  unsigned int v88;
  char v89;
  int v90;
  unsigned __int64 v91;
  char v92;
  unsigned __int64 v93;
  char v94;
  unsigned __int64 v95;
  char v96;
  unsigned __int64 v97;
  char v98;
  unsigned int v99;
  __int64* v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  char v116;
  __int64* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned int v123;
  unsigned __int64 v125;
  char v126;
  unsigned int v127;
  unsigned __int64 v128;
  char v129;
  unsigned int v130;
  int v131;
  unsigned __int64 v132;
  char v133;
  unsigned int v134;
  int v135;
  unsigned __int64 v136;
  char v137;
  unsigned int v138;
  int v139;
  unsigned __int64 v140;
  char v141;
  unsigned int v142;
  int v143;
  unsigned __int64 v144;
  char v145;
  unsigned int v146;
  int v147;
  unsigned __int64 v148;
  char v149;
  unsigned int v150;
  int v151;
  unsigned __int64 v152;
  char v153;
  unsigned int v154;
  int v155;
  unsigned __int64 v156;
  char v157;
  unsigned int v158;
  int v159;
  unsigned __int64 v160;
  char v161;
  unsigned int v162;
  int v163;
  unsigned __int64 v164;
  char v165;
  unsigned int v166;
  int v167;
  unsigned int v168;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 8) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    LOBYTE(v8) = 0;
  LABEL_4:
    LOBYTE(v9) = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  v6 = v3 >> 3;
  v7 = v3++ & 7;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * ((unsigned int)v6 >> v7);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v21 = v3 >> 3;
  v22 = v3++ & 7;
  LODWORD(v21) = *(unsigned __int8*)(v5 + v21);
  v2[1] = v3;
  v9 = ((unsigned int)v21 >> v22) & 1;
  if (v3 >= v4) {
  LABEL_5:
    LOBYTE(v10) = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_14;
  }
LABEL_13:
  v23 = v3 >> 3;
  v24 = v3++ & 7;
  LODWORD(v23) = *(unsigned __int8*)(v5 + v23);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v23 >> v24) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    LOBYTE(v12) = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_15;
  }
LABEL_14:
  v25 = v3 >> 3;
  v26 = v3++ & 7;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  v2[1] = v3;
  v12 = ((unsigned int)v25 >> v26) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    LOBYTE(v14) = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_16;
  }
LABEL_15:
  v27 = v3 >> 3;
  v28 = v3++ & 7;
  LODWORD(v27) = *(unsigned __int8*)(v5 + v27);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v27 >> v28) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    LOBYTE(v16) = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
  LABEL_17:
    v31 = v3 >> 3;
    v32 = v3++ & 7;
    LODWORD(v31) = *(unsigned __int8*)(v5 + v31);
    v2[1] = v3;
    v18 = 2 * (((unsigned int)v31 >> v32) & 1);
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_18;
  }
LABEL_16:
  v29 = v3 >> 3;
  v30 = v3++ & 7;
  LODWORD(v29) = *(unsigned __int8*)(v5 + v29);
  v2[1] = v3;
  v16 = ((unsigned int)v29 >> v30) & 1;
  v17 = v14 | (4 * v15);
  if (v3 < v4) {
    goto LABEL_17;
  }
LABEL_9:
  LOBYTE(v18) = 0;
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    LOBYTE(v20) = 0;
    goto LABEL_19;
  }
LABEL_18:
  v33 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v20 = (v33 >> (v3 & 7)) & 1;
LABEL_19:
  *(_BYTE*)a1 = v20 | v18 | (4 * v19);
  v34 = *a2;
  v35 = (*a2)[1];
  v36 = (*a2)[2];
  if (v36 - v35 < 2) {
    return 0;
  }
  v37 = *v34;
  if (v36 <= v35) {
    LOBYTE(v41) = 0;
    goto LABEL_22;
  }
  v38 = v35 >> 3;
  v39 = v35 & 7;
  v40 = v35 + 1;
  LODWORD(v38) = *(unsigned __int8*)(v37 + v38);
  v34[1] = v40;
  v41 = 2 * (((unsigned int)v38 >> v39) & 1);
  if (v40 >= v36) {
  LABEL_22:
    LOBYTE(v42) = 0;
    goto LABEL_25;
  }
  v43 = *(unsigned __int8*)(v37 + (v40 >> 3));
  v34[1] = v40 + 1;
  v42 = (v43 >> (v40 & 7)) & 1;
LABEL_25:
  *(_BYTE*)(a1 + 1) = v42 | v41;
  v44 = *a2;
  v45 = (*a2)[1];
  v46 = (*a2)[2];
  if (v46 - v45 < 8) {
    return 0;
  }
  v47 = *v44;
  if (v46 <= v45) {
    LOBYTE(v50) = 0;
  LABEL_28:
    LOBYTE(v51) = 0;
    if (v45 >= v46) {
      goto LABEL_29;
    }
    goto LABEL_37;
  }
  v48 = v45 >> 3;
  v49 = v45++ & 7;
  LODWORD(v48) = *(unsigned __int8*)(v47 + v48);
  v44[1] = v45;
  v50 = 2 * ((unsigned int)v48 >> v49);
  if (v45 >= v46) {
    goto LABEL_28;
  }
  v63 = v45 >> 3;
  v64 = v45++ & 7;
  LODWORD(v63) = *(unsigned __int8*)(v47 + v63);
  v44[1] = v45;
  v51 = ((unsigned int)v63 >> v64) & 1;
  if (v45 >= v46) {
  LABEL_29:
    LOBYTE(v52) = 0;
    v53 = v51 | v50;
    if (v45 >= v46) {
      goto LABEL_30;
    }
    goto LABEL_38;
  }
LABEL_37:
  v65 = v45 >> 3;
  v66 = v45++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v47 + v65);
  v44[1] = v45;
  v52 = 2 * (((unsigned int)v65 >> v66) & 1);
  v53 = v51 | v50;
  if (v45 >= v46) {
  LABEL_30:
    LOBYTE(v54) = 0;
    v55 = v52 | (4 * v53);
    if (v45 >= v46) {
      goto LABEL_31;
    }
    goto LABEL_39;
  }
LABEL_38:
  v67 = v45 >> 3;
  v68 = v45++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v47 + v67);
  v44[1] = v45;
  v54 = ((unsigned int)v67 >> v68) & 1;
  v55 = v52 | (4 * v53);
  if (v45 >= v46) {
  LABEL_31:
    LOBYTE(v56) = 0;
    v57 = v54 | v55;
    if (v45 >= v46) {
      goto LABEL_32;
    }
    goto LABEL_40;
  }
LABEL_39:
  v69 = v45 >> 3;
  v70 = v45++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v47 + v69);
  v44[1] = v45;
  v56 = 2 * (((unsigned int)v69 >> v70) & 1);
  v57 = v54 | v55;
  if (v45 >= v46) {
  LABEL_32:
    LOBYTE(v58) = 0;
    v59 = v56 | (4 * v57);
    if (v45 >= v46) {
      goto LABEL_33;
    }
  LABEL_41:
    v73 = v45 >> 3;
    v74 = v45++ & 7;
    LODWORD(v73) = *(unsigned __int8*)(v47 + v73);
    v44[1] = v45;
    v60 = 2 * (((unsigned int)v73 >> v74) & 1);
    v61 = v58 | v59;
    if (v45 >= v46) {
      goto LABEL_34;
    }
    goto LABEL_42;
  }
LABEL_40:
  v71 = v45 >> 3;
  v72 = v45++ & 7;
  LODWORD(v71) = *(unsigned __int8*)(v47 + v71);
  v44[1] = v45;
  v58 = ((unsigned int)v71 >> v72) & 1;
  v59 = v56 | (4 * v57);
  if (v45 < v46) {
    goto LABEL_41;
  }
LABEL_33:
  LOBYTE(v60) = 0;
  v61 = v58 | v59;
  if (v45 >= v46) {
  LABEL_34:
    LOBYTE(v62) = 0;
    goto LABEL_43;
  }
LABEL_42:
  v75 = *(unsigned __int8*)(v47 + (v45 >> 3));
  v44[1] = v45 + 1;
  v62 = (v75 >> (v45 & 7)) & 1;
LABEL_43:
  *(_BYTE*)(a1 + 2) = v62 | v60 | (4 * v61);
  v76 = *a2;
  v77 = (*a2)[1];
  v78 = (*a2)[2];
  if (v78 - v77 < 6) {
    return 0;
  }
  v79 = *v76;
  if (v78 <= v77) {
    LOBYTE(v82) = 0;
  LABEL_46:
    LOBYTE(v83) = 0;
    if (v77 >= v78) {
      goto LABEL_47;
    }
    goto LABEL_53;
  }
  v80 = v77 >> 3;
  v81 = v77++ & 7;
  LODWORD(v80) = *(unsigned __int8*)(v79 + v80);
  v76[1] = v77;
  v82 = 2 * (((unsigned int)v80 >> v81) & 1);
  if (v77 >= v78) {
    goto LABEL_46;
  }
  v91 = v77 >> 3;
  v92 = v77++ & 7;
  LODWORD(v91) = *(unsigned __int8*)(v79 + v91);
  v76[1] = v77;
  v83 = ((unsigned int)v91 >> v92) & 1;
  if (v77 >= v78) {
  LABEL_47:
    LOBYTE(v84) = 0;
    v85 = v83 | v82;
    if (v77 >= v78) {
      goto LABEL_48;
    }
    goto LABEL_54;
  }
LABEL_53:
  v93 = v77 >> 3;
  v94 = v77++ & 7;
  LODWORD(v93) = *(unsigned __int8*)(v79 + v93);
  v76[1] = v77;
  v84 = 2 * (((unsigned int)v93 >> v94) & 1);
  v85 = v83 | v82;
  if (v77 >= v78) {
  LABEL_48:
    LOBYTE(v86) = 0;
    v87 = v84 | (4 * v85);
    if (v77 >= v78) {
      goto LABEL_49;
    }
  LABEL_55:
    v97 = v77 >> 3;
    v98 = v77++ & 7;
    LODWORD(v97) = *(unsigned __int8*)(v79 + v97);
    v76[1] = v77;
    v88 = 2 * (((unsigned int)v97 >> v98) & 1);
    v89 = v86 | v87;
    if (v77 >= v78) {
      goto LABEL_50;
    }
    goto LABEL_56;
  }
LABEL_54:
  v95 = v77 >> 3;
  v96 = v77++ & 7;
  LODWORD(v95) = *(unsigned __int8*)(v79 + v95);
  v76[1] = v77;
  v86 = ((unsigned int)v95 >> v96) & 1;
  v87 = v84 | (4 * v85);
  if (v77 < v78) {
    goto LABEL_55;
  }
LABEL_49:
  LOBYTE(v88) = 0;
  v89 = v86 | v87;
  if (v77 >= v78) {
  LABEL_50:
    LOBYTE(v90) = 0;
    goto LABEL_57;
  }
LABEL_56:
  v99 = *(unsigned __int8*)(v79 + (v77 >> 3));
  v76[1] = v77 + 1;
  v90 = (v99 >> (v77 & 7)) & 1;
LABEL_57:
  *(_BYTE*)(a1 + 3) = v90 | v88 | (4 * v89);
  v100 = *a2;
  v102 = (*a2)[1];
  v101 = (*a2)[2];
  if (v101 - v102 < 0x20) {
    return 0;
  }
  v103 = *v100;
  v104 = -32;
  v105 = 0;
  do {
    while (v102 >= v101) {
      v110 = 0;
    LABEL_62:
      v111 = 0;
      if (v102 >= v101) {
        goto LABEL_63;
      }
    LABEL_67:
      v115 = v102 >> 3;
      v116 = v102++ & 7;
      LODWORD(v115) = *(unsigned __int8*)(v103 + v115);
      v100[1] = v102;
      v112 = 2 * (((unsigned int)v115 >> v116) & 1);
      if (v102 >= v101) {
        goto LABEL_68;
      }
    LABEL_59:
      v106 = v102 >> 3;
      v107 = v102++ & 7;
      LODWORD(v106) = *(unsigned __int8*)(v103 + v106);
      v100[1] = v102;
      v104 += 4;
      v105 = ((unsigned int)v106 >> v107) & 1 | v112 |
             (4 * (v111 | v110 | (4 * v105)));
      if (v104 == 0) {
        goto LABEL_69;
      }
    }
    v108 = v102 >> 3;
    v109 = v102++ & 7;
    LODWORD(v108) = *(unsigned __int8*)(v103 + v108);
    v100[1] = v102;
    v110 = 2 * (((unsigned int)v108 >> v109) & 1);
    if (v102 >= v101) {
      goto LABEL_62;
    }
    v113 = v102 >> 3;
    v114 = v102++ & 7;
    LODWORD(v113) = *(unsigned __int8*)(v103 + v113);
    v100[1] = v102;
    v111 = ((unsigned int)v113 >> v114) & 1;
    if (v102 < v101) {
      goto LABEL_67;
    }
  LABEL_63:
    v112 = 0;
    if (v102 < v101) {
      goto LABEL_59;
    }
  LABEL_68:
    v104 += 4;
    v105 = v112 | (4 * (v111 | v110 | (4 * v105)));
  } while (v104 != 0);
LABEL_69:
  *(_DWORD*)(a1 + 8) = v105;
  v117 = *a2;
  v118 = (*a2)[1];
  v119 = (*a2)[2];
  if (v119 - v118 < 0xD) {
    return 0;
  }
  v120 = *v117;
  if (v119 <= v118) {
    v123 = 0;
  }
  else {
    v121 = v118 >> 3;
    v122 = (*a2)[1] & 7;
    ++v118;
    LODWORD(v121) = *(unsigned __int8*)(v120 + v121);
    v117[1] = v118;
    v123 = 2 * (((unsigned int)v121 >> v122) & 1);
  }
  if (v118 >= v119) {
    v127 = 0;
  }
  else {
    v125 = v118 >> 3;
    v126 = v118++ & 7;
    LODWORD(v125) = *(unsigned __int8*)(v120 + v125);
    v117[1] = v118;
    v127 = ((unsigned int)v125 >> v126) & 1;
  }
  if (v118 >= v119) {
    v130 = 0;
  }
  else {
    v128 = v118 >> 3;
    v129 = v118++ & 7;
    LODWORD(v128) = *(unsigned __int8*)(v120 + v128);
    v117[1] = v118;
    v130 = 2 * (((unsigned int)v128 >> v129) & 1);
  }
  v131 = v127 | v123;
  if (v118 >= v119) {
    v134 = 0;
  }
  else {
    v132 = v118 >> 3;
    v133 = v118++ & 7;
    LODWORD(v132) = *(unsigned __int8*)(v120 + v132);
    v117[1] = v118;
    v134 = ((unsigned int)v132 >> v133) & 1;
  }
  v135 = v130 | (4 * v131);
  if (v118 >= v119) {
    v138 = 0;
  }
  else {
    v136 = v118 >> 3;
    v137 = v118++ & 7;
    LODWORD(v136) = *(unsigned __int8*)(v120 + v136);
    v117[1] = v118;
    v138 = 2 * (((unsigned int)v136 >> v137) & 1);
  }
  v139 = v134 | v135;
  if (v118 >= v119) {
    v142 = 0;
  }
  else {
    v140 = v118 >> 3;
    v141 = v118++ & 7;
    LODWORD(v140) = *(unsigned __int8*)(v120 + v140);
    v117[1] = v118;
    v142 = ((unsigned int)v140 >> v141) & 1;
  }
  v143 = v138 | (4 * v139);
  if (v118 >= v119) {
    v146 = 0;
  }
  else {
    v144 = v118 >> 3;
    v145 = v118++ & 7;
    LODWORD(v144) = *(unsigned __int8*)(v120 + v144);
    v117[1] = v118;
    v146 = 2 * (((unsigned int)v144 >> v145) & 1);
  }
  v147 = v142 | v143;
  if (v118 >= v119) {
    v150 = 0;
  }
  else {
    v148 = v118 >> 3;
    v149 = v118++ & 7;
    LODWORD(v148) = *(unsigned __int8*)(v120 + v148);
    v117[1] = v118;
    v150 = ((unsigned int)v148 >> v149) & 1;
  }
  v151 = v146 | (4 * v147);
  if (v118 >= v119) {
    v154 = 0;
  }
  else {
    v152 = v118 >> 3;
    v153 = v118++ & 7;
    LODWORD(v152) = *(unsigned __int8*)(v120 + v152);
    v117[1] = v118;
    v154 = 2 * (((unsigned int)v152 >> v153) & 1);
  }
  v155 = v150 | v151;
  if (v118 >= v119) {
    v158 = 0;
  }
  else {
    v156 = v118 >> 3;
    v157 = v118++ & 7;
    LODWORD(v156) = *(unsigned __int8*)(v120 + v156);
    v117[1] = v118;
    v158 = ((unsigned int)v156 >> v157) & 1;
  }
  v159 = v154 | (4 * v155);
  if (v118 >= v119) {
    v162 = 0;
  }
  else {
    v160 = v118 >> 3;
    v161 = v118++ & 7;
    LODWORD(v160) = *(unsigned __int8*)(v120 + v160);
    v117[1] = v118;
    v162 = 2 * (((unsigned int)v160 >> v161) & 1);
  }
  v163 = v158 | v159;
  if (v118 >= v119) {
    v166 = 0;
  }
  else {
    v164 = v118 >> 3;
    v165 = v118++ & 7;
    LODWORD(v164) = *(unsigned __int8*)(v120 + v164);
    v117[1] = v118;
    v166 = ((unsigned int)v164 >> v165) & 1;
  }
  v167 = v166 | v162 | (4 * v163);
  if (v118 >= v119) {
    *(_DWORD*)(a1 + 4) = 2 * v167;
  }
  else {
    v168 = *(unsigned __int8*)(v120 + (v118 >> 3));
    v117[1] = v118 + 1;
    *(_DWORD*)(a1 + 4) = (v168 >> (v118 & 7)) & 1 | (2 * v167);
  }
  return 1;
}

__int64 nerd_gillette_internal_otete_Serialize_749220(__int64 a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
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
  unsigned __int64 v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  unsigned __int64 v41;
  char v42;
  unsigned __int64 v43;
  char v44;
  unsigned __int64 v45;
  char v46;
  unsigned __int64 v47;
  char v48;
  unsigned __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  char v54;
  unsigned __int64 v55;
  char v56;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned int v65;
  __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  char v102;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  char v116;
  unsigned __int64 v117;
  char v118;
  unsigned __int64 v119;
  char v120;
  unsigned __int64 v121;
  char v122;
  unsigned __int64 v123;
  char v124;
  unsigned __int64 v125;
  char v126;
  unsigned __int64 v127;
  char v128;
  unsigned int v129;
  __int64* v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  char v166;
  unsigned __int64 v167;
  char v168;
  unsigned __int64 v169;
  char v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned __int64 v189;
  char v190;
  unsigned __int64 v191;
  char v192;
  unsigned int v193;
  __int64* v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  unsigned int v198;
  __int64 v199;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 0x10) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    v8 = 0;
  LABEL_4:
    v9 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_21;
  }
  v6 = v3 >> 3;
  v7 = (*a2)[1] & 7;
  ++v3;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * (((unsigned int)v6 >> v7) & 1);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v37 = v3 >> 3;
  v38 = v3++ & 7;
  LODWORD(v37) = *(unsigned __int8*)(v5 + v37);
  v2[1] = v3;
  v9 = ((unsigned int)v37 >> v38) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_22;
  }
LABEL_21:
  v39 = v3 >> 3;
  v40 = v3++ & 7;
  LODWORD(v39) = *(unsigned __int8*)(v5 + v39);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v39 >> v40) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_23;
  }
LABEL_22:
  v41 = v3 >> 3;
  v42 = v3++ & 7;
  LODWORD(v41) = *(unsigned __int8*)(v5 + v41);
  v2[1] = v3;
  v12 = ((unsigned int)v41 >> v42) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_24;
  }
LABEL_23:
  v43 = v3 >> 3;
  v44 = v3++ & 7;
  LODWORD(v43) = *(unsigned __int8*)(v5 + v43);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v43 >> v44) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_25;
  }
LABEL_24:
  v45 = v3 >> 3;
  v46 = v3++ & 7;
  LODWORD(v45) = *(unsigned __int8*)(v5 + v45);
  v2[1] = v3;
  v16 = ((unsigned int)v45 >> v46) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_26;
  }
LABEL_25:
  v47 = v3 >> 3;
  v48 = v3++ & 7;
  LODWORD(v47) = *(unsigned __int8*)(v5 + v47);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v47 >> v48) & 1);
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    v20 = 0;
    v21 = v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
    goto LABEL_27;
  }
LABEL_26:
  v49 = v3 >> 3;
  v50 = v3++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v5 + v49);
  v2[1] = v3;
  v20 = ((unsigned int)v49 >> v50) & 1;
  v21 = v18 | (4 * v19);
  if (v3 >= v4) {
  LABEL_11:
    v22 = 0;
    v23 = v20 | v21;
    if (v3 >= v4) {
      goto LABEL_12;
    }
    goto LABEL_28;
  }
LABEL_27:
  v51 = v3 >> 3;
  v52 = v3++ & 7;
  LODWORD(v51) = *(unsigned __int8*)(v5 + v51);
  v2[1] = v3;
  v22 = 2 * (((unsigned int)v51 >> v52) & 1);
  v23 = v20 | v21;
  if (v3 >= v4) {
  LABEL_12:
    v24 = 0;
    v25 = v22 | (4 * v23);
    if (v3 >= v4) {
      goto LABEL_13;
    }
    goto LABEL_29;
  }
LABEL_28:
  v53 = v3 >> 3;
  v54 = v3++ & 7;
  LODWORD(v53) = *(unsigned __int8*)(v5 + v53);
  v2[1] = v3;
  v24 = ((unsigned int)v53 >> v54) & 1;
  v25 = v22 | (4 * v23);
  if (v3 >= v4) {
  LABEL_13:
    v26 = 0;
    v27 = v24 | v25;
    if (v3 >= v4) {
      goto LABEL_14;
    }
    goto LABEL_30;
  }
LABEL_29:
  v55 = v3 >> 3;
  v56 = v3++ & 7;
  LODWORD(v55) = *(unsigned __int8*)(v5 + v55);
  v2[1] = v3;
  v26 = 2 * (((unsigned int)v55 >> v56) & 1);
  v27 = v24 | v25;
  if (v3 >= v4) {
  LABEL_14:
    v28 = 0;
    v29 = v26 | (4 * v27);
    if (v3 >= v4) {
      goto LABEL_15;
    }
    goto LABEL_31;
  }
LABEL_30:
  v57 = v3 >> 3;
  v58 = v3++ & 7;
  LODWORD(v57) = *(unsigned __int8*)(v5 + v57);
  v2[1] = v3;
  v28 = ((unsigned int)v57 >> v58) & 1;
  v29 = v26 | (4 * v27);
  if (v3 >= v4) {
  LABEL_15:
    v30 = 0;
    v31 = v28 | v29;
    if (v3 >= v4) {
      goto LABEL_16;
    }
    goto LABEL_32;
  }
LABEL_31:
  v59 = v3 >> 3;
  v60 = v3++ & 7;
  LODWORD(v59) = *(unsigned __int8*)(v5 + v59);
  v2[1] = v3;
  v30 = 2 * (((unsigned int)v59 >> v60) & 1);
  v31 = v28 | v29;
  if (v3 >= v4) {
  LABEL_16:
    v32 = 0;
    v33 = v30 | (4 * v31);
    if (v3 >= v4) {
      goto LABEL_17;
    }
  LABEL_33:
    v63 = v3 >> 3;
    v64 = v3++ & 7;
    LODWORD(v63) = *(unsigned __int8*)(v5 + v63);
    v2[1] = v3;
    v34 = 2 * (((unsigned int)v63 >> v64) & 1);
    v35 = v32 | v33;
    if (v3 >= v4) {
      goto LABEL_18;
    }
    goto LABEL_34;
  }
LABEL_32:
  v61 = v3 >> 3;
  v62 = v3++ & 7;
  LODWORD(v61) = *(unsigned __int8*)(v5 + v61);
  v2[1] = v3;
  v32 = ((unsigned int)v61 >> v62) & 1;
  v33 = v30 | (4 * v31);
  if (v3 < v4) {
    goto LABEL_33;
  }
LABEL_17:
  v34 = 0;
  v35 = v32 | v33;
  if (v3 >= v4) {
  LABEL_18:
    v36 = 0;
    goto LABEL_35;
  }
LABEL_34:
  v65 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v36 = (v65 >> (v3 & 7)) & 1;
LABEL_35:
  *(float*)a1 =
      (float)((float)((float)(v36 | v34 | (unsigned __int64)(4 * v35)) *
                      0x1.0001000000000p-16f) *
              0x1.4000000000000p+8f) +
      0x0.0p+0f;
  v66 = *a2;
  v67 = (*a2)[1];
  v68 = (*a2)[2];
  if (v68 - v67 < 0x10) {
    return 0;
  }
  v69 = *v66;
  if (v68 <= v67) {
    v72 = 0;
  LABEL_38:
    v73 = 0;
    if (v67 >= v68) {
      goto LABEL_39;
    }
    goto LABEL_55;
  }
  v70 = v67 >> 3;
  v71 = (*a2)[1] & 7;
  ++v67;
  LODWORD(v70) = *(unsigned __int8*)(v69 + v70);
  v66[1] = v67;
  v72 = 2 * (((unsigned int)v70 >> v71) & 1);
  if (v67 >= v68) {
    goto LABEL_38;
  }
  v101 = v67 >> 3;
  v102 = v67++ & 7;
  LODWORD(v101) = *(unsigned __int8*)(v69 + v101);
  v66[1] = v67;
  v73 = ((unsigned int)v101 >> v102) & 1;
  if (v67 >= v68) {
  LABEL_39:
    v74 = 0;
    v75 = v73 | v72;
    if (v67 >= v68) {
      goto LABEL_40;
    }
    goto LABEL_56;
  }
LABEL_55:
  v103 = v67 >> 3;
  v104 = v67++ & 7;
  LODWORD(v103) = *(unsigned __int8*)(v69 + v103);
  v66[1] = v67;
  v74 = 2 * (((unsigned int)v103 >> v104) & 1);
  v75 = v73 | v72;
  if (v67 >= v68) {
  LABEL_40:
    v76 = 0;
    v77 = v74 | (4 * v75);
    if (v67 >= v68) {
      goto LABEL_41;
    }
    goto LABEL_57;
  }
LABEL_56:
  v105 = v67 >> 3;
  v106 = v67++ & 7;
  LODWORD(v105) = *(unsigned __int8*)(v69 + v105);
  v66[1] = v67;
  v76 = ((unsigned int)v105 >> v106) & 1;
  v77 = v74 | (4 * v75);
  if (v67 >= v68) {
  LABEL_41:
    v78 = 0;
    v79 = v76 | v77;
    if (v67 >= v68) {
      goto LABEL_42;
    }
    goto LABEL_58;
  }
LABEL_57:
  v107 = v67 >> 3;
  v108 = v67++ & 7;
  LODWORD(v107) = *(unsigned __int8*)(v69 + v107);
  v66[1] = v67;
  v78 = 2 * (((unsigned int)v107 >> v108) & 1);
  v79 = v76 | v77;
  if (v67 >= v68) {
  LABEL_42:
    v80 = 0;
    v81 = v78 | (4 * v79);
    if (v67 >= v68) {
      goto LABEL_43;
    }
    goto LABEL_59;
  }
LABEL_58:
  v109 = v67 >> 3;
  v110 = v67++ & 7;
  LODWORD(v109) = *(unsigned __int8*)(v69 + v109);
  v66[1] = v67;
  v80 = ((unsigned int)v109 >> v110) & 1;
  v81 = v78 | (4 * v79);
  if (v67 >= v68) {
  LABEL_43:
    v82 = 0;
    v83 = v80 | v81;
    if (v67 >= v68) {
      goto LABEL_44;
    }
    goto LABEL_60;
  }
LABEL_59:
  v111 = v67 >> 3;
  v112 = v67++ & 7;
  LODWORD(v111) = *(unsigned __int8*)(v69 + v111);
  v66[1] = v67;
  v82 = 2 * (((unsigned int)v111 >> v112) & 1);
  v83 = v80 | v81;
  if (v67 >= v68) {
  LABEL_44:
    v84 = 0;
    v85 = v82 | (4 * v83);
    if (v67 >= v68) {
      goto LABEL_45;
    }
    goto LABEL_61;
  }
LABEL_60:
  v113 = v67 >> 3;
  v114 = v67++ & 7;
  LODWORD(v113) = *(unsigned __int8*)(v69 + v113);
  v66[1] = v67;
  v84 = ((unsigned int)v113 >> v114) & 1;
  v85 = v82 | (4 * v83);
  if (v67 >= v68) {
  LABEL_45:
    v86 = 0;
    v87 = v84 | v85;
    if (v67 >= v68) {
      goto LABEL_46;
    }
    goto LABEL_62;
  }
LABEL_61:
  v115 = v67 >> 3;
  v116 = v67++ & 7;
  LODWORD(v115) = *(unsigned __int8*)(v69 + v115);
  v66[1] = v67;
  v86 = 2 * (((unsigned int)v115 >> v116) & 1);
  v87 = v84 | v85;
  if (v67 >= v68) {
  LABEL_46:
    v88 = 0;
    v89 = v86 | (4 * v87);
    if (v67 >= v68) {
      goto LABEL_47;
    }
    goto LABEL_63;
  }
LABEL_62:
  v117 = v67 >> 3;
  v118 = v67++ & 7;
  LODWORD(v117) = *(unsigned __int8*)(v69 + v117);
  v66[1] = v67;
  v88 = ((unsigned int)v117 >> v118) & 1;
  v89 = v86 | (4 * v87);
  if (v67 >= v68) {
  LABEL_47:
    v90 = 0;
    v91 = v88 | v89;
    if (v67 >= v68) {
      goto LABEL_48;
    }
    goto LABEL_64;
  }
LABEL_63:
  v119 = v67 >> 3;
  v120 = v67++ & 7;
  LODWORD(v119) = *(unsigned __int8*)(v69 + v119);
  v66[1] = v67;
  v90 = 2 * (((unsigned int)v119 >> v120) & 1);
  v91 = v88 | v89;
  if (v67 >= v68) {
  LABEL_48:
    v92 = 0;
    v93 = v90 | (4 * v91);
    if (v67 >= v68) {
      goto LABEL_49;
    }
    goto LABEL_65;
  }
LABEL_64:
  v121 = v67 >> 3;
  v122 = v67++ & 7;
  LODWORD(v121) = *(unsigned __int8*)(v69 + v121);
  v66[1] = v67;
  v92 = ((unsigned int)v121 >> v122) & 1;
  v93 = v90 | (4 * v91);
  if (v67 >= v68) {
  LABEL_49:
    v94 = 0;
    v95 = v92 | v93;
    if (v67 >= v68) {
      goto LABEL_50;
    }
    goto LABEL_66;
  }
LABEL_65:
  v123 = v67 >> 3;
  v124 = v67++ & 7;
  LODWORD(v123) = *(unsigned __int8*)(v69 + v123);
  v66[1] = v67;
  v94 = 2 * (((unsigned int)v123 >> v124) & 1);
  v95 = v92 | v93;
  if (v67 >= v68) {
  LABEL_50:
    v96 = 0;
    v97 = v94 | (4 * v95);
    if (v67 >= v68) {
      goto LABEL_51;
    }
  LABEL_67:
    v127 = v67 >> 3;
    v128 = v67++ & 7;
    LODWORD(v127) = *(unsigned __int8*)(v69 + v127);
    v66[1] = v67;
    v98 = 2 * (((unsigned int)v127 >> v128) & 1);
    v99 = v96 | v97;
    if (v67 >= v68) {
      goto LABEL_52;
    }
    goto LABEL_68;
  }
LABEL_66:
  v125 = v67 >> 3;
  v126 = v67++ & 7;
  LODWORD(v125) = *(unsigned __int8*)(v69 + v125);
  v66[1] = v67;
  v96 = ((unsigned int)v125 >> v126) & 1;
  v97 = v94 | (4 * v95);
  if (v67 < v68) {
    goto LABEL_67;
  }
LABEL_51:
  v98 = 0;
  v99 = v96 | v97;
  if (v67 >= v68) {
  LABEL_52:
    v100 = 0;
    goto LABEL_69;
  }
LABEL_68:
  v129 = *(unsigned __int8*)(v69 + (v67 >> 3));
  v66[1] = v67 + 1;
  v100 = (v129 >> (v67 & 7)) & 1;
LABEL_69:
  *(float*)(a1 + 4) =
      (float)((float)((float)(v100 | v98 | (unsigned __int64)(4 * v99)) *
                      0x1.0001000000000p-16f) *
              0x1.e000000000000p+7f) +
      0x0.0p+0f;
  v130 = *a2;
  v131 = (*a2)[1];
  v132 = (*a2)[2];
  if (v132 - v131 < 0x10) {
    return 0;
  }
  v133 = *v130;
  if (v132 <= v131) {
    v136 = 0;
  LABEL_72:
    v137 = 0;
    if (v131 >= v132) {
      goto LABEL_73;
    }
    goto LABEL_89;
  }
  v134 = v131 >> 3;
  v135 = (*a2)[1] & 7;
  ++v131;
  LODWORD(v134) = *(unsigned __int8*)(v133 + v134);
  v130[1] = v131;
  v136 = 2 * (((unsigned int)v134 >> v135) & 1);
  if (v131 >= v132) {
    goto LABEL_72;
  }
  v165 = v131 >> 3;
  v166 = v131++ & 7;
  LODWORD(v165) = *(unsigned __int8*)(v133 + v165);
  v130[1] = v131;
  v137 = ((unsigned int)v165 >> v166) & 1;
  if (v131 >= v132) {
  LABEL_73:
    v138 = 0;
    v139 = v137 | v136;
    if (v131 >= v132) {
      goto LABEL_74;
    }
    goto LABEL_90;
  }
LABEL_89:
  v167 = v131 >> 3;
  v168 = v131++ & 7;
  LODWORD(v167) = *(unsigned __int8*)(v133 + v167);
  v130[1] = v131;
  v138 = 2 * (((unsigned int)v167 >> v168) & 1);
  v139 = v137 | v136;
  if (v131 >= v132) {
  LABEL_74:
    v140 = 0;
    v141 = v138 | (4 * v139);
    if (v131 >= v132) {
      goto LABEL_75;
    }
    goto LABEL_91;
  }
LABEL_90:
  v169 = v131 >> 3;
  v170 = v131++ & 7;
  LODWORD(v169) = *(unsigned __int8*)(v133 + v169);
  v130[1] = v131;
  v140 = ((unsigned int)v169 >> v170) & 1;
  v141 = v138 | (4 * v139);
  if (v131 >= v132) {
  LABEL_75:
    v142 = 0;
    v143 = v140 | v141;
    if (v131 >= v132) {
      goto LABEL_76;
    }
    goto LABEL_92;
  }
LABEL_91:
  v171 = v131 >> 3;
  v172 = v131++ & 7;
  LODWORD(v171) = *(unsigned __int8*)(v133 + v171);
  v130[1] = v131;
  v142 = 2 * (((unsigned int)v171 >> v172) & 1);
  v143 = v140 | v141;
  if (v131 >= v132) {
  LABEL_76:
    v144 = 0;
    v145 = v142 | (4 * v143);
    if (v131 >= v132) {
      goto LABEL_77;
    }
    goto LABEL_93;
  }
LABEL_92:
  v173 = v131 >> 3;
  v174 = v131++ & 7;
  LODWORD(v173) = *(unsigned __int8*)(v133 + v173);
  v130[1] = v131;
  v144 = ((unsigned int)v173 >> v174) & 1;
  v145 = v142 | (4 * v143);
  if (v131 >= v132) {
  LABEL_77:
    v146 = 0;
    v147 = v144 | v145;
    if (v131 >= v132) {
      goto LABEL_78;
    }
    goto LABEL_94;
  }
LABEL_93:
  v175 = v131 >> 3;
  v176 = v131++ & 7;
  LODWORD(v175) = *(unsigned __int8*)(v133 + v175);
  v130[1] = v131;
  v146 = 2 * (((unsigned int)v175 >> v176) & 1);
  v147 = v144 | v145;
  if (v131 >= v132) {
  LABEL_78:
    v148 = 0;
    v149 = v146 | (4 * v147);
    if (v131 >= v132) {
      goto LABEL_79;
    }
    goto LABEL_95;
  }
LABEL_94:
  v177 = v131 >> 3;
  v178 = v131++ & 7;
  LODWORD(v177) = *(unsigned __int8*)(v133 + v177);
  v130[1] = v131;
  v148 = ((unsigned int)v177 >> v178) & 1;
  v149 = v146 | (4 * v147);
  if (v131 >= v132) {
  LABEL_79:
    v150 = 0;
    v151 = v148 | v149;
    if (v131 >= v132) {
      goto LABEL_80;
    }
    goto LABEL_96;
  }
LABEL_95:
  v179 = v131 >> 3;
  v180 = v131++ & 7;
  LODWORD(v179) = *(unsigned __int8*)(v133 + v179);
  v130[1] = v131;
  v150 = 2 * (((unsigned int)v179 >> v180) & 1);
  v151 = v148 | v149;
  if (v131 >= v132) {
  LABEL_80:
    v152 = 0;
    v153 = v150 | (4 * v151);
    if (v131 >= v132) {
      goto LABEL_81;
    }
    goto LABEL_97;
  }
LABEL_96:
  v181 = v131 >> 3;
  v182 = v131++ & 7;
  LODWORD(v181) = *(unsigned __int8*)(v133 + v181);
  v130[1] = v131;
  v152 = ((unsigned int)v181 >> v182) & 1;
  v153 = v150 | (4 * v151);
  if (v131 >= v132) {
  LABEL_81:
    v154 = 0;
    v155 = v152 | v153;
    if (v131 >= v132) {
      goto LABEL_82;
    }
    goto LABEL_98;
  }
LABEL_97:
  v183 = v131 >> 3;
  v184 = v131++ & 7;
  LODWORD(v183) = *(unsigned __int8*)(v133 + v183);
  v130[1] = v131;
  v154 = 2 * (((unsigned int)v183 >> v184) & 1);
  v155 = v152 | v153;
  if (v131 >= v132) {
  LABEL_82:
    v156 = 0;
    v157 = v154 | (4 * v155);
    if (v131 >= v132) {
      goto LABEL_83;
    }
    goto LABEL_99;
  }
LABEL_98:
  v185 = v131 >> 3;
  v186 = v131++ & 7;
  LODWORD(v185) = *(unsigned __int8*)(v133 + v185);
  v130[1] = v131;
  v156 = ((unsigned int)v185 >> v186) & 1;
  v157 = v154 | (4 * v155);
  if (v131 >= v132) {
  LABEL_83:
    v158 = 0;
    v159 = v156 | v157;
    if (v131 >= v132) {
      goto LABEL_84;
    }
    goto LABEL_100;
  }
LABEL_99:
  v187 = v131 >> 3;
  v188 = v131++ & 7;
  LODWORD(v187) = *(unsigned __int8*)(v133 + v187);
  v130[1] = v131;
  v158 = 2 * (((unsigned int)v187 >> v188) & 1);
  v159 = v156 | v157;
  if (v131 >= v132) {
  LABEL_84:
    v160 = 0;
    v161 = v158 | (4 * v159);
    if (v131 >= v132) {
      goto LABEL_85;
    }
  LABEL_101:
    v191 = v131 >> 3;
    v192 = v131++ & 7;
    LODWORD(v191) = *(unsigned __int8*)(v133 + v191);
    v130[1] = v131;
    v162 = 2 * (((unsigned int)v191 >> v192) & 1);
    v163 = v160 | v161;
    if (v131 >= v132) {
      goto LABEL_86;
    }
    goto LABEL_102;
  }
LABEL_100:
  v189 = v131 >> 3;
  v190 = v131++ & 7;
  LODWORD(v189) = *(unsigned __int8*)(v133 + v189);
  v130[1] = v131;
  v160 = ((unsigned int)v189 >> v190) & 1;
  v161 = v158 | (4 * v159);
  if (v131 < v132) {
    goto LABEL_101;
  }
LABEL_85:
  v162 = 0;
  v163 = v160 | v161;
  if (v131 >= v132) {
  LABEL_86:
    v164 = 0;
    goto LABEL_103;
  }
LABEL_102:
  v193 = *(unsigned __int8*)(v133 + (v131 >> 3));
  v130[1] = v131 + 1;
  v164 = (v193 >> (v131 & 7)) & 1;
LABEL_103:
  *(float*)(a1 + 8) =
      (float)((float)((float)(v164 | v162 | (unsigned __int64)(4 * v163)) *
                      0x1.0001000000000p-16f) *
              0x1.9000000000000p+6f) +
      0x0.0p+0f;
  v194 = *a2;
  v195 = (*a2)[1];
  v196 = (*a2)[2];
  if (v196 == v195) {
    return 0;
  }
  if (v195 >= v196) {
    *(_BYTE*)(a1 + 12) = 0;
  }
  else {
    v198 = *(unsigned __int8*)(*v194 + (v195 >> 3));
    v199 = (*a2)[1] & 7;
    v194[1] = v195 + 1;
    *(_BYTE*)(a1 + 12) = (v198 >> v199) & 1;
  }
  return 1;
}

__int64 nerd_gillette_internal_otete_Downscale2x2_74b970(_QWORD* a1, __int64 a2)
{
  return nerd_gillette_internal_otete_Downscale2x2_plt(
      *(_QWORD*)a2, *(unsigned int*)(a2 + 8), *(unsigned int*)(a2 + 12),
      *(unsigned int*)(a2 + 16), *a1);
}

_DWORD* nerd_gillette_internal_otete_Downscale2x2_74b9a0(
    _DWORD* this_, const unsigned __int8* a2, unsigned int a3, unsigned int a4,
    unsigned int* a5, unsigned __int8* a6)
{
  _DWORD* v6;
  _DWORD* v7;
  _DWORD* v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;

  if (a3 >= 2 && (unsigned int)a2 >= 8) {
    v8 = (_DWORD*)((char*)this_ + a4);
    v9 = 0;
    v10 = a3 >> 1;
    v11 = (2 * a4 - (unsigned int)a2) >> 2;
    while ((unsigned int)a2 >> 3 == 1) {
      if (((unsigned __int8)a2 & 8) != 0) {
        goto LABEL_12;
      }
    LABEL_5:
      this_ = &v6[v11];
      v8 = &v7[v11];
      if (++v9 == v10) {
        return this_;
      }
    }
    v12 = ((unsigned int)a2 >> 3) & 0x1FFFFFFE;
    do {
      v12 -= 2;
      v13 = ((((*v8 >> 1) & 0x7F7F7F7F) + ((*this_ >> 1) & 0x7F7F7F7Fu)) >> 1) &
            0x7F7F7F7F;
      v14 = ((((v8[1] >> 1) & 0x7F7F7F7F) +
              ((*(this_ + 1) >> 1) & 0x7F7F7F7Fu)) >>
             1) &
            0x7F7F7F7F;
      *a5 = (unsigned __int8)(v13 + BYTE1(v13)) |
            ((unsigned __int8)((v13 + (v13 >> 8)) >> 16) << 8) |
            (65792 * v14) & 0xFF0000 | (257 * v14) & 0xFF000000;
      v15 = ((v8[2] >> 1) & 0x7F7F7F7F) + ((*(this_ + 2) >> 1) & 0x7F7F7F7F);
      v7 = v8 + 4;
      v16 = ((v15 >> 1) & 0x7F7F7F7F) + (((v15 >> 1) & 0x7F7F7F7F) >> 8);
      v6 = this_ + 4;
      v17 = ((((v8[3] >> 1) & 0x7F7F7F7F) +
              ((*(this_ + 3) >> 1) & 0x7F7F7F7Fu)) >>
             1) &
            0x7F7F7F7F;
      v18 = a5 + 2;
      a5[1] = (unsigned __int8)v16 | (BYTE2(v16) << 8) |
              (65792 * v17) & 0xFF0000 | (257 * v17) & 0xFF000000;
      this_ += 4;
      v8 = v7;
      a5 += 2;
    } while (v12 != 0);
    a5 = v18;
    this_ = v6;
    v8 = v7;
    if (((unsigned __int8)a2 & 8) == 0) {
      goto LABEL_5;
    }
  LABEL_12:
    v7 = v8 + 2;
    v19 = ((*v8 >> 1) & 0x7F7F7F7F) + ((*this_ >> 1) & 0x7F7F7F7F);
    v6 = this_ + 2;
    v20 =
        ((((v8[1] >> 1) & 0x7F7F7F7F) + ((*(this_ + 1) >> 1) & 0x7F7F7F7Fu)) >>
         1) &
        0x7F7F7F7F;
    v21 = ((v19 >> 1) & 0x7F7F7F7F) + (((v19 >> 1) & 0x7F7F7F7F) >> 8);
    *a5++ = (unsigned __int8)v21 | (BYTE2(v21) << 8) |
            (65792 * v20) & 0xFF0000 | (257 * v20) & 0xFF000000;
    goto LABEL_5;
  }
  return this_;
}

#pragma GCC visibility pop
