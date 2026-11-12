#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 celt_pitch_xcorr_c(__int16* a1, __int64 a2, __int64 a3, int a4,
                           unsigned int a5);

__int64 celt_pitch_xcorr_c(__int16* a1, __int64 a2, __int64 a3, int a4,
                           unsigned int a5)
{
  unsigned int v6;
  __int64 result;
  unsigned __int64 v8;
  int* v9;
  int v10;
  int v11;
  __int16* v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int16* v21;
  __int16* v22;
  __int16 v23;
  int v24;
  unsigned int v25;
  __int16* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
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
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
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
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
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
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int16* v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int16* v110;
  __int16* v111;
  int v112;
  int v113;
  int v114;
  __int16* v115;
  __int16* v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  __int64 v123;
  __int64 v124;
  __int64 v125;

  if ((int)a5 >= 4) {
    v6 = a4 - 4;
    LODWORD(result) = 1;
    v8 = 0;
    while (1) {
      v12 = (__int16*)(a2 + 2 * v8);
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12 + 3;
      if (a4 < 4) {
        v20 = 0;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v23 = 0;
        v24 = 0;
        v21 = a1;
        goto LABEL_23;
      }
      if (v6 < 4) {
        break;
      }
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v25 = (((unsigned int)(a4 - 4) >> 2) + 1) & 0x7FFFFFFE;
      v26 = a1;
      do {
        v27 = *v26;
        v28 = *v16;
        v29 = v16[3];
        v25 -= 2;
        v30 = v20 + v27 * v13;
        v31 = v14;
        v32 = v15;
        v33 = v17 + v28 * v27;
        v34 = v16[1];
        v35 = v16[4];
        v36 = v16[5];
        v37 = v16[6];
        v38 = v26[7];
        v39 = v16[7];
        v40 = v19 + v27 * v31;
        v41 = v18 + v27 * v32;
        v42 = v26[1];
        v43 = v30 + v42 * v31;
        v44 = v40 + v42 * v32;
        v45 = v41 + v42 * v28;
        v46 = v33 + v34 * v42;
        v47 = v26[2];
        v48 = v16[2];
        v49 = v43 + v47 * v32;
        v50 = v44 + v47 * v28;
        v51 = v45 + v47 * v34;
        v52 = v46 + v48 * v47;
        v53 = v26[3];
        v54 = v49 + v53 * v28;
        v55 = v50 + v53 * v34;
        v56 = v51 + v53 * v48;
        v57 = v52 + v29 * v53;
        v58 = v26[4];
        v22 = v16 + 8;
        v16 += 8;
        v59 = v54 + v58 * v34;
        v60 = v55 + v58 * v48;
        v61 = v56 + v58 * v29;
        v62 = v57 + v35 * v58;
        v63 = v26[5];
        v13 = v36;
        v15 = v39;
        v64 = v59 + v63 * v48;
        v65 = v60 + v63 * v29;
        v66 = v61 + v63 * v35;
        v67 = v62 + v36 * v63;
        v68 = v26[6];
        v14 = v37;
        v69 = v64 + v68 * v29;
        v70 = v65 + v68 * v35;
        v71 = v66 + v68 * v36;
        v72 = v67 + v37 * v68;
        v21 = v26 + 8;
        v20 = v69 + v38 * v35;
        v19 = v70 + v38 * v36;
        v18 = v71 + v38 * v37;
        v26 += 8;
        v17 = v72 + v39 * v38;
      } while (v25 != 0);
      v23 = v35;
      v16 = v22;
      v24 = a4 & 0x7FFFFFFC;
      if ((v6 & 4) == 0) {
        goto LABEL_22;
      }
    LABEL_23:
      v93 = v14;
      v94 = v15;
      if (v24 < a4) {
        v97 = *v21++;
        v96 = v97;
        v98 = *v16++;
        v20 += v96 * v13;
        v19 += v96 * v93;
        v18 += v96 * v94;
        v17 += v98 * v96;
        v95 = (__int16)v98;
        if ((v24 | 1) >= a4) {
        LABEL_25:
          if ((v24 | 2) < a4) {
            goto LABEL_29;
          }
          goto LABEL_3;
        }
      }
      else {
        v95 = v23;
        if ((v24 | 1) >= a4) {
          goto LABEL_25;
        }
      }
      v100 = *v21++;
      v99 = v100;
      v101 = *v16++;
      v20 += v99 * v93;
      v19 += v99 * v94;
      v18 += v99 * v95;
      v17 += v101 * v99;
      v13 = v101;
      if ((v24 | 2) < a4) {
      LABEL_29:
        v102 = *v21;
        v20 += v102 * v94;
        v19 += v102 * v95;
        v18 += v102 * v13;
        v17 += *v16 * v102;
      }
    LABEL_3:
      v9 = (int*)(a3 + 4 * v8);
      v8 += 4LL;
      *v9 = v20;
      v9[1] = v19;
      v9[2] = v18;
      v9[3] = v17;
      if (v20 <= v19) {
        v10 = v19;
      }
      else {
        v10 = v20;
      }
      if (v18 <= v17) {
        v11 = v17;
      }
      else {
        v11 = v18;
      }
      if (v10 <= v11) {
        v10 = v11;
      }
      if ((int)result <= v10) {
        result = (unsigned int)v10;
      }
      else {
        result = (unsigned int)result;
      }
      if (v8 >= a5 - 3) {
        goto LABEL_31;
      }
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = a1;
    v22 = v16;
  LABEL_22:
    v73 = *v21;
    v74 = *v22;
    v75 = v22[1];
    v76 = v20 + v73 * v13;
    v77 = v19 + v73 * v14;
    v78 = v18 + v73 * v15;
    v79 = v17 + v74 * v73;
    v80 = v21[1];
    v81 = v22[2];
    v82 = v21[3];
    v23 = *v22;
    v13 = v22[1];
    v83 = v76 + v80 * v14;
    v84 = v77 + v80 * v15;
    v85 = v78 + v80 * v74;
    v86 = v79 + v75 * v80;
    v87 = v21[2];
    v14 = v22[2];
    v21 += 4;
    v88 = v83 + v87 * v15;
    v89 = v84 + v87 * v74;
    v90 = v85 + v87 * v75;
    v91 = v86 + v81 * v87;
    v16 = v22 + 4;
    v92 = v22[3];
    v20 = v88 + v82 * v74;
    v19 = v89 + v82 * v75;
    v24 = a4 & 0x7FFFFFFC;
    v15 = v92;
    v18 = v90 + v82 * v81;
    v17 = v91 + v92 * v82;
    goto LABEL_23;
  }
  result = 1;
  LODWORD(v8) = 0;
LABEL_31:
  if ((int)v8 < (int)a5) {
    v103 = (unsigned int)v8;
    if (a4 > 0) {
      v104 = a2 + 2LL * (unsigned int)v8;
      v105 = a5;
      v106 = (__int16*)(v104 + 8);
      while ((unsigned int)a4 >= 8) {
        v109 = 0;
        v108 = 0;
        v110 = a1 + 4;
        v111 = v106;
        do {
          v109 -= 8;
          v112 = v108 + *(v111 - 4) * *(v110 - 4) + *(v111 - 3) * *(v110 - 3) +
                 *(v111 - 2) * *(v110 - 2) + *(v111 - 1) * *(v110 - 1) +
                 *v111 * *v110 + v111[1] * v110[1] + v111[2] * v110[2];
          v113 = v110[3];
          v114 = v111[3];
          v111 += 8;
          v110 += 8;
          v108 = v112 + v114 * v113;
        } while (-(__int64)(a4 & 0x7FFFFFF8) != v109);
        v107 = -v109;
        if ((a4 & 7) != 0) {
          goto LABEL_44;
        }
      LABEL_34:
        *(_DWORD*)(a3 + 4 * v103++) = v108;
        ++v106;
        v104 += 2;
        if ((int)result <= v108) {
          result = (unsigned int)v108;
        }
        else {
          result = (unsigned int)result;
        }
        if (v103 == v105) {
          return result;
        }
      }
      v107 = 0;
      v108 = 0;
      if ((a4 & 7) == 0) {
        goto LABEL_34;
      }
    LABEL_44:
      v115 = (__int16*)(v104 + 2 * v107);
      v116 = &a1[v107];
      v117 = a4 & 7;
      do {
        v119 = *v116++;
        v118 = v119;
        v120 = *v115++;
        --v117;
        v108 += v120 * v118;
      } while (v117 != 0);
      goto LABEL_34;
    }
    v121 = result;
    memset_plt(a3 + 4LL * (unsigned int)v8, 0, 4LL * (a5 + ~(_DWORD)v8) + 4);
    v123 = (a5 - (unsigned int)v103) & 7LL;
    if (v123 != 0) {
      v124 = v103;
      LODWORD(result) = v121;
      do {
        result = (unsigned int)result & ~((int)result >> 31);
        ++v124;
        --v123;
      } while (v123 != 0);
      if (v103 - (unsigned __int64)a5 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    else {
      v124 = v103;
      result = v121;
      if (v103 - (unsigned __int64)a5 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    v125 = a5 - v124;
    do {
      result = (unsigned int)result & ~((int)result >> 31);
      v125 -= 8;
    } while (v125 != 0);
  }
  return result;
}

#pragma GCC visibility pop
