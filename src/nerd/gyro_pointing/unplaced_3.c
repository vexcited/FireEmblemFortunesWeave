#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 math_7342e0(unsigned __int64*, __int64*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
bool math_734400(unsigned __int64*, __int64*);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
__int64 nerd_gyro_pointing_72c0a0(unsigned __int64* a1, __int64* a2);

__int64 nerd_gyro_pointing_72c0a0(unsigned __int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;
  _DWORD* v17;
  int v18;
  _DWORD* v19;
  int* v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64* v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  __int64 v30;
  _DWORD* v31;
  int* v32;
  int v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _DWORD* v45;
  __int64 v46;
  _DWORD* v47;
  int v48;
  _DWORD* v49;
  int* v50;
  int v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64* v56;
  __int64 v57;
  _DWORD* v58;
  _DWORD* v59;
  __int64 v60;
  _DWORD* v61;
  int* v62;
  int v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _DWORD* v75;
  __int64 v76;
  _DWORD* v77;
  int v78;
  _DWORD* v79;
  int* v80;
  int v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64* v86;
  __int64 v87;
  _DWORD* v88;
  _DWORD* v89;
  __int64 v90;
  _DWORD* v91;
  int* v92;
  int v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;
  __int64 v97;
  __int64 result;
  unsigned __int64 v99;
  unsigned __int64 v100;
  bool v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  struct {
    unsigned __int64 v130;
    unsigned __int64 v131;
    _BYTE v132[4368];
  } v130_;

  v2 = (__int64)(a1 + 2);
  v3 = *a1;
  v6 = a1 + 937;
  v7 = a1 + 936;
  v130_.v130 = *a2;
  v8 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v130_.v130);
  v9 = v3 - 1;
  if (v8 != v3 - 1) {
    v10 = a1[1];
    if (v10 == 0) {
      goto LABEL_11;
    }
    v11 = 132 * v8;
    v12 = a1[1] & 7;
    if (v10 >= 8) {
      v14 = 0;
      v15 = (_DWORD*)(v2 + 132 * v9);
      v16 = -(__int64)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      v17 = (_DWORD*)((char*)a1 + v11 + 24);
      do {
        v14 -= 8;
        *(v17 - 2) = *(_DWORD*)v15;
        *(v17 - 1) = v15[1];
        *(_DWORD*)v17 = v15[2];
        v17[1] = v15[3];
        v17[2] = v15[4];
        v17[3] = v15[5];
        v17[4] = v15[6];
        v18 = v15[7];
        v15 += 8;
        v17[5] = v18;
        v17 += 8;
      } while (v16 != v14);
      v13 = -v14;
      if (v12 == 0) {
      LABEL_11:
        v22 = *a1;
        if (*a1 != 0) {
          v23 = *a1 & 7;
          if (v22 >= 8) {
            v25 = 0;
            v26 = a1;
            v27 = -(__int64)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            do {
              v28 = (_DWORD*)v26 + v3;
              v29 = (_DWORD*)v26 + v8;
              v25 -= 8;
              v26 += 132;
              v29[4] = v28[3];
              v29[37] = v28[36];
              v29[70] = v28[69];
              v29[103] = v28[102];
              v29[136] = v28[135];
              v29[169] = v28[168];
              v29[202] = v28[201];
              v29[235] = v28[234];
            } while (v27 != v25);
            v24 = -v25;
            if (v23 == 0) {
              goto LABEL_20;
            }
          }
          else {
            v24 = 0;
            if ((v22 & 7) == 0) {
              goto LABEL_20;
            }
          }
          v30 = 132 * v24;
          v31 = (_DWORD*)a1 + 33 * v24 + v8 + 4;
          v32 = (int*)((char*)a1 + 4 * v3 + v30 + 12);
          do {
            v33 = *v32;
            v32 += 33;
            --v23;
            *(_DWORD*)v31 = v33;
            v31 += 33;
          } while (v23 != 0);
        }
      LABEL_20:
        v34 = v6[v8];
        v6[v8] = v6[v9];
        v6[v9] = v34;
        v35 = (__int64*)math_7342e0(a1 + 548, &v6[v8]);
        v36 = (__int64*)math_7342e0(a1 + 548, &v6[v9]);
        v37 = *v35;
        *v35 = *v36;
        *v36 = v37;
        goto LABEL_21;
      }
    }
    else {
      v13 = 0;
      if ((v10 & 7) == 0) {
        goto LABEL_11;
      }
    }
    v19 = (_DWORD*)((char*)a1 + 4 * v13 + v11 + 16);
    v20 = (int*)a1 + 33 * v3 + v13 - 29;
    do {
      v21 = *v20++;
      --v12;
      *(_DWORD*)v19++ = v21;
    } while (v12 != 0);
    goto LABEL_11;
  }
LABEL_21:
  math_734400(a1 + 548, &v7[a1[970]--]);
  v130_.v130 = a2[1];
  v38 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v130_.v130);
  v39 = v3 - 2;
  if (v38 == v3 - 2) {
    goto LABEL_41;
  }
  v40 = a1[1];
  if (v40 != 0) {
    v41 = 132 * v38;
    v42 = a1[1] & 7;
    if (v40 < 8) {
      v43 = 0;
      if ((v40 & 7) == 0) {
        goto LABEL_31;
      }
      goto LABEL_29;
    }
    v44 = 0;
    v45 = (_DWORD*)(v2 + 132 * v39);
    v46 = -(__int64)(v40 & 0xFFFFFFFFFFFFFFF8LL);
    v47 = (_DWORD*)((char*)a1 + v41 + 24);
    do {
      v44 -= 8;
      *(v47 - 2) = *(_DWORD*)v45;
      *(v47 - 1) = v45[1];
      *(_DWORD*)v47 = v45[2];
      v47[1] = v45[3];
      v47[2] = v45[4];
      v47[3] = v45[5];
      v47[4] = v45[6];
      v48 = v45[7];
      v45 += 8;
      v47[5] = v48;
      v47 += 8;
    } while (v46 != v44);
    v43 = -v44;
    if (v42 != 0) {
    LABEL_29:
      v49 = (_DWORD*)((char*)a1 + 4 * v43 + v41 + 16);
      v50 = (int*)a1 + 33 * v3 + v43 - 62;
      do {
        v51 = *v50++;
        --v42;
        *(_DWORD*)v49++ = v51;
      } while (v42 != 0);
    }
  }
LABEL_31:
  v52 = *a1;
  if (*a1 != 0) {
    v53 = *a1 & 7;
    if (v52 >= 8) {
      v55 = 0;
      v56 = a1;
      v57 = -(__int64)(v52 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v58 = (_DWORD*)v56 + v3;
        v59 = (_DWORD*)v56 + v38;
        v55 -= 8;
        v56 += 132;
        v59[4] = v58[2];
        v59[37] = v58[35];
        v59[70] = v58[68];
        v59[103] = v58[101];
        v59[136] = v58[134];
        v59[169] = v58[167];
        v59[202] = v58[200];
        v59[235] = v58[233];
      } while (v57 != v55);
      v54 = -v55;
      if (v53 == 0) {
        goto LABEL_40;
      }
    }
    else {
      v54 = 0;
      if ((v52 & 7) == 0) {
        goto LABEL_40;
      }
    }
    v60 = 132 * v54;
    v61 = (_DWORD*)a1 + 33 * v54 + v38 + 4;
    v62 = (int*)((char*)a1 + 4 * v3 + v60 + 8);
    do {
      v63 = *v62;
      v62 += 33;
      --v53;
      *(_DWORD*)v61 = v63;
      v61 += 33;
    } while (v53 != 0);
  }
LABEL_40:
  v64 = v6[v38];
  v6[v38] = v6[v39];
  v6[v39] = v64;
  v65 = (__int64*)math_7342e0(a1 + 548, &v6[v38]);
  v66 = (__int64*)math_7342e0(a1 + 548, &v6[v39]);
  v67 = *v65;
  *v65 = *v66;
  *v66 = v67;
LABEL_41:
  math_734400(a1 + 548, &v7[a1[970]--]);
  v130_.v130 = a2[2];
  v68 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v130_.v130);
  v69 = v3 - 3;
  if (v68 == v3 - 3) {
    goto LABEL_61;
  }
  v70 = a1[1];
  if (v70 != 0) {
    v71 = 132 * v68;
    v72 = a1[1] & 7;
    if (v70 < 8) {
      v73 = 0;
      if ((v70 & 7) == 0) {
        goto LABEL_51;
      }
      goto LABEL_49;
    }
    v74 = 0;
    v75 = (_DWORD*)(v2 + 132 * v69);
    v76 = -(__int64)(v70 & 0xFFFFFFFFFFFFFFF8LL);
    v77 = (_DWORD*)((char*)a1 + v71 + 24);
    do {
      v74 -= 8;
      *(v77 - 2) = *(_DWORD*)v75;
      *(v77 - 1) = v75[1];
      *(_DWORD*)v77 = v75[2];
      v77[1] = v75[3];
      v77[2] = v75[4];
      v77[3] = v75[5];
      v77[4] = v75[6];
      v78 = v75[7];
      v75 += 8;
      v77[5] = v78;
      v77 += 8;
    } while (v76 != v74);
    v73 = -v74;
    if (v72 != 0) {
    LABEL_49:
      v79 = (_DWORD*)((char*)a1 + 4 * v73 + v71 + 16);
      v80 = (int*)a1 + 33 * v3 + v73 - 95;
      do {
        v81 = *v80++;
        --v72;
        *(_DWORD*)v79++ = v81;
      } while (v72 != 0);
    }
  }
LABEL_51:
  v82 = *a1;
  if (*a1 != 0) {
    v83 = *a1 & 7;
    if (v82 >= 8) {
      v85 = 0;
      v86 = a1;
      v87 = -(__int64)(v82 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v88 = (_DWORD*)v86 + v3;
        v89 = (_DWORD*)v86 + v68;
        v85 -= 8;
        v86 += 132;
        v89[4] = v88[1];
        v89[37] = v88[34];
        v89[70] = v88[67];
        v89[103] = v88[100];
        v89[136] = v88[133];
        v89[169] = v88[166];
        v89[202] = v88[199];
        v89[235] = v88[232];
      } while (v87 != v85);
      v84 = -v85;
      if (v83 == 0) {
        goto LABEL_60;
      }
    }
    else {
      v84 = 0;
      if ((v82 & 7) == 0) {
        goto LABEL_60;
      }
    }
    v90 = 132 * v84;
    v91 = (_DWORD*)a1 + 33 * v84 + v68 + 4;
    v92 = (int*)((char*)a1 + 4 * v3 + v90 + 4);
    do {
      v93 = *v92;
      v92 += 33;
      --v83;
      *(_DWORD*)v91 = v93;
      v91 += 33;
    } while (v83 != 0);
  }
LABEL_60:
  v94 = v6[v68];
  v6[v68] = v6[v69];
  v6[v69] = v94;
  v95 = (__int64*)math_7342e0(a1 + 548, &v6[v68]);
  v96 = (__int64*)math_7342e0(a1 + 548, &v6[v69]);
  v97 = *v95;
  *v95 = *v96;
  *v96 = v97;
LABEL_61:
  result = ((__int64 (*)(unsigned __int64*, __int64*))math_734400)(
      a1 + 548, &v7[a1[970]]);
  v99 = *a1;
  v100 = a1[1];
  v101 = v69 == *a1 && v69 == v100;
  --a1[970];
  if (v101) {
    return result;
  }
  if (v69 >= 0x22) {
    *(_QWORD*)&v130_.v132[4352] = 0;
    v130_.v130 = v3 - 3;
    v130_.v131 = v3 - 3;
    memset_plt((__int64)v130_.v132, 0, 0x1104u);
    if (v69 >= v99) {
      v102 = v99;
    }
    else {
      v102 = v3 - 3;
    }
    if (v99 == 0 || v100 == 0) {
      goto LABEL_87;
    }
    if (v69 >= v100) {
      v103 = v100;
    }
    else {
      v103 = v3 - 3;
    }
    v104 = v102 & 7;
    v105 = 4 * v103;
    if (v102 - 1 >= 7) {
      v111 = 0;
      v112 = 0;
      v113 = -(__int64)(v102 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        memcpy_plt((__int64)&v130_.v132[v112 * 8], (__int64)&a1[v112 + 2],
                   v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 132],
                   (__int64)&a1[v112 + 18] + 4, v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 264],
                   (__int64)&a1[v112 + 35], v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 396],
                   (__int64)&a1[v112 + 51] + 4, v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 528],
                   (__int64)&a1[v112 + 68], v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 660],
                   (__int64)&a1[v112 + 84] + 4, v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 792],
                   (__int64)&a1[v112 + 101], v105);
        memcpy_plt((__int64)&v130_.v132[v112 * 8 + 924],
                   (__int64)&a1[v112 + 117] + 4, v105);
        v112 += 132;
        v111 -= 8;
      } while (v113 != v111);
      v106 = -v111;
      if (v104 == 0) {
        goto LABEL_87;
      }
    }
    else {
      v106 = 0;
      if (v104 == 0) {
      LABEL_87:
        v117 = v130_.v131;
        *a1 = v130_.v130;
        a1[1] = v117;
        return memcpy_plt(v2, (__int64)v130_.v132, 0x1104u);
      }
    }
    v114 = 132 * v106 + 16;
    v115 = (__int64)a1 + v114;
    v116 = (char*)&v130_.v130 + v114;
    do {
      memcpy_plt((__int64)v116, v115, v105);
      v115 += 132;
      v116 += 132;
      --v104;
    } while (v104 != 0);
    goto LABEL_87;
  }
  v107 = v69 - v99;
  *a1 = v69;
  if (v69 > v99 && v100 != 0) {
    v108 = 33 * v99;
    v109 = v107 & 7;
    if (v3 - v99 - 4 >= 7) {
      v118 = 0;
      v119 = -(__int64)(v107 & 0x38);
      v120 = (__int64)a1 + 132 * v99 + 940;
      do {
        memset_plt(v120 - 924, 0, 4 * v100);
        memset_plt(v120 - 792, 0, 4 * v100);
        memset_plt(v120 - 660, 0, 4 * v100);
        memset_plt(v120 - 528, 0, 4 * v100);
        memset_plt(v120 - 396, 0, 4 * v100);
        memset_plt(v120 - 264, 0, 4 * v100);
        memset_plt(v120 - 132, 0, 4 * v100);
        result = memset_plt(v120, 0, 4 * v100);
        v120 += 1056;
        v118 -= 8;
      } while (v119 != v118);
      v110 = -v118;
      if (v109 == 0) {
        goto LABEL_93;
      }
    }
    else {
      v110 = 0;
      if (v109 == 0) {
        goto LABEL_93;
      }
    }
    v121 = (__int64)a1 + 132 * v110 + 4 * v108 + 16;
    do {
      result = memset_plt(v121, 0, 4 * v100);
      v121 += 132;
      --v109;
    } while (v109 != 0);
  }
LABEL_93:
  a1[1] = v69;
  if (v69 <= v100) {
    return result;
  }
  v122 = 4 * (v69 - v100);
  v123 = v3 - 4;
  v124 = v69 & 7;
  if (v123 < 7) {
    v125 = 0;
    if ((v69 & 7) == 0) {
      return result;
    }
    goto LABEL_100;
  }
  v126 = 0;
  v127 = (__int64)a1 + 4 * v100 + 940;
  v128 = -(__int64)(v69 & 0x38);
  do {
    memset_plt(v127 - 924, 0, v122);
    memset_plt(v127 - 792, 0, v122);
    memset_plt(v127 - 660, 0, v122);
    memset_plt(v127 - 528, 0, v122);
    memset_plt(v127 - 396, 0, v122);
    memset_plt(v127 - 264, 0, v122);
    memset_plt(v127 - 132, 0, v122);
    result = memset_plt(v127, 0, v122);
    v127 += 1056;
    v126 -= 8;
  } while (v128 != v126);
  v125 = -v126;
  if (v124 != 0) {
  LABEL_100:
    v129 = (__int64)a1 + 132 * v125 + 4 * v100 + 16;
    do {
      result = memset_plt(v129, 0, v122);
      v129 += 132;
      --v124;
    } while (v124 != 0);
  }
  return result;
}

#pragma GCC visibility pop
