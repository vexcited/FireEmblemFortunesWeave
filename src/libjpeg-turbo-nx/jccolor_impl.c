#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 jccolor_1c380(__int64 result, unsigned __int8** a2, _QWORD* a3,
                      unsigned int a4, int a5);

__int64 jccolor_1c380(__int64 result, unsigned __int8** a2, _QWORD* a3,
                      unsigned int a4, int a5)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  unsigned __int8* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int8* v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _BYTE* v52;
  unsigned __int8* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int8* v61;
  __int64 v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _BYTE* v69;
  unsigned __int8* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int8* v78;
  __int64 v79;
  __int64 v80;
  _BYTE* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _BYTE* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int8* v94;
  __int64 v95;
  __int64 v96;
  _BYTE* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  _BYTE* v102;
  unsigned __int8* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int8* v111;
  __int64 v112;
  __int64 v113;
  _BYTE* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  _BYTE* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;

  switch (*(_DWORD*)(result + 68)) {
  case 6:
    if (a5 < 1) {
      return result;
    }
    v74 = *(_DWORD*)(result + 56);
    if (v74 == 0) {
      return result;
    }
    v75 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v76 = v75 + 2048;
    v77 = v75 + 4096;
    while (1) {
      v78 = *a2;
      v79 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v74 >= 8) {
        break;
      }
      v80 = 0;
      if ((v74 & 7) != 0) {
        goto LABEL_69;
      }
    LABEL_61:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v81 = (_BYTE*)(v79 + 3);
    v82 = 0;
    do {
      v82 -= 8;
      *(v81 - 3) = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[1]) +
                    (unsigned int)*(_QWORD*)(v75 + 8LL * *v78) +
                    (unsigned int)*(_QWORD*)(v77 + 8LL * v78[2])) >>
                   16;
      *(v81 - 2) = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[4]) +
                    (unsigned int)*(_QWORD*)(v75 + 8LL * v78[3]) +
                    (unsigned int)*(_QWORD*)(v77 + 8LL * v78[5])) >>
                   16;
      *(v81 - 1) = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[7]) +
                    (unsigned int)*(_QWORD*)(v75 + 8LL * v78[6]) +
                    (unsigned int)*(_QWORD*)(v77 + 8LL * v78[8])) >>
                   16;
      *v81 = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[10]) +
              (unsigned int)*(_QWORD*)(v75 + 8LL * v78[9]) +
              (unsigned int)*(_QWORD*)(v77 + 8LL * v78[11])) >>
             16;
      v81[1] = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[13]) +
                (unsigned int)*(_QWORD*)(v75 + 8LL * v78[12]) +
                (unsigned int)*(_QWORD*)(v77 + 8LL * v78[14])) >>
               16;
      v81[2] = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[16]) +
                (unsigned int)*(_QWORD*)(v75 + 8LL * v78[15]) +
                (unsigned int)*(_QWORD*)(v77 + 8LL * v78[17])) >>
               16;
      v81[3] = ((unsigned int)*(_QWORD*)(v76 + 8LL * v78[19]) +
                (unsigned int)*(_QWORD*)(v75 + 8LL * v78[18]) +
                (unsigned int)*(_QWORD*)(v77 + 8LL * v78[20])) >>
               16;
      v83 = v78[21];
      v84 = v78[22];
      v85 = v78[23];
      v78 += 24;
      LODWORD(v83) = *(_QWORD*)(v76 + 8 * v84) + *(_QWORD*)(v75 + 8 * v83);
      result = *(_QWORD*)(v77 + 8 * v85);
      v81[4] = (unsigned int)(v83 + result) >> 16;
      v81 += 8;
    } while (-(__int64)(v74 & 0xFFFFFFF8) != v82);
    v80 = -v82;
    if ((v74 & 7) == 0) {
      goto LABEL_61;
    }
  LABEL_69:
    v86 = (_BYTE*)(v79 + v80);
    v87 = v74 & 7;
    do {
      v88 = *v78;
      v89 = v78[1];
      result = v78[2];
      --v87;
      v78 += 3;
      *v86++ = ((unsigned int)*(_QWORD*)(v76 + 8 * v89) +
                (unsigned int)*(_QWORD*)(v75 + 8 * v88) +
                (unsigned int)*(_QWORD*)(v77 + 8 * result)) >>
               16;
    } while (v87 != 0);
    goto LABEL_61;
  case 7:
  case 0xC:
    if (a5 < 1) {
      return result;
    }
    v5 = *(_DWORD*)(result + 56);
    if (v5 == 0) {
      return result;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v7 = v6 + 2048;
    v8 = v6 + 4096;
    while (1) {
      v10 = *a2;
      v11 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v5 >= 8) {
        break;
      }
      v12 = 0;
      if ((v5 & 7) != 0) {
        goto LABEL_13;
      }
    LABEL_5:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v13 = (_BYTE*)(v11 + 3);
    v14 = 0;
    do {
      v14 -= 8;
      *(v13 - 3) = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[1]) +
                    (unsigned int)*(_QWORD*)(v6 + 8LL * *v10) +
                    (unsigned int)*(_QWORD*)(v8 + 8LL * v10[2])) >>
                   16;
      *(v13 - 2) = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[5]) +
                    (unsigned int)*(_QWORD*)(v6 + 8LL * v10[4]) +
                    (unsigned int)*(_QWORD*)(v8 + 8LL * v10[6])) >>
                   16;
      *(v13 - 1) = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[9]) +
                    (unsigned int)*(_QWORD*)(v6 + 8LL * v10[8]) +
                    (unsigned int)*(_QWORD*)(v8 + 8LL * v10[10])) >>
                   16;
      *v13 = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[13]) +
              (unsigned int)*(_QWORD*)(v6 + 8LL * v10[12]) +
              (unsigned int)*(_QWORD*)(v8 + 8LL * v10[14])) >>
             16;
      v13[1] = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[17]) +
                (unsigned int)*(_QWORD*)(v6 + 8LL * v10[16]) +
                (unsigned int)*(_QWORD*)(v8 + 8LL * v10[18])) >>
               16;
      v13[2] = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[21]) +
                (unsigned int)*(_QWORD*)(v6 + 8LL * v10[20]) +
                (unsigned int)*(_QWORD*)(v8 + 8LL * v10[22])) >>
               16;
      v13[3] = ((unsigned int)*(_QWORD*)(v7 + 8LL * v10[25]) +
                (unsigned int)*(_QWORD*)(v6 + 8LL * v10[24]) +
                (unsigned int)*(_QWORD*)(v8 + 8LL * v10[26])) >>
               16;
      v15 = v10[28];
      v16 = v10[29];
      v17 = v10[30];
      v10 += 32;
      LODWORD(v15) = *(_QWORD*)(v7 + 8 * v16) + *(_QWORD*)(v6 + 8 * v15);
      result = *(_QWORD*)(v8 + 8 * v17);
      v13[4] = (unsigned int)(v15 + result) >> 16;
      v13 += 8;
    } while (-(__int64)(v5 & 0xFFFFFFF8) != v14);
    v12 = -v14;
    if ((v5 & 7) == 0) {
      goto LABEL_5;
    }
  LABEL_13:
    v18 = (_BYTE*)(v11 + v12);
    v19 = v5 & 7;
    do {
      v20 = *v10;
      v21 = v10[1];
      result = v10[2];
      --v19;
      v10 += 4;
      *v18++ = ((unsigned int)*(_QWORD*)(v7 + 8 * v21) +
                (unsigned int)*(_QWORD*)(v6 + 8 * v20) +
                (unsigned int)*(_QWORD*)(v8 + 8 * result)) >>
               16;
    } while (v19 != 0);
    goto LABEL_5;
  case 8:
    if (a5 < 1) {
      return result;
    }
    v90 = *(_DWORD*)(result + 56);
    if (v90 == 0) {
      return result;
    }
    v91 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v92 = v91 + 2048;
    v93 = v91 + 4096;
    while (1) {
      v94 = *a2;
      v95 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v90 >= 8) {
        break;
      }
      v96 = 0;
      if ((v90 & 7) != 0) {
        goto LABEL_83;
      }
    LABEL_75:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v97 = (_BYTE*)(v95 + 3);
    v98 = 0;
    do {
      v98 -= 8;
      *(v97 - 3) = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[1]) +
                    (unsigned int)*(_QWORD*)(v91 + 8LL * v94[2]) +
                    (unsigned int)*(_QWORD*)(v93 + 8LL * *v94)) >>
                   16;
      *(v97 - 2) = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[4]) +
                    (unsigned int)*(_QWORD*)(v91 + 8LL * v94[5]) +
                    (unsigned int)*(_QWORD*)(v93 + 8LL * v94[3])) >>
                   16;
      *(v97 - 1) = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[7]) +
                    (unsigned int)*(_QWORD*)(v91 + 8LL * v94[8]) +
                    (unsigned int)*(_QWORD*)(v93 + 8LL * v94[6])) >>
                   16;
      *v97 = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[10]) +
              (unsigned int)*(_QWORD*)(v91 + 8LL * v94[11]) +
              (unsigned int)*(_QWORD*)(v93 + 8LL * v94[9])) >>
             16;
      v97[1] = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[13]) +
                (unsigned int)*(_QWORD*)(v91 + 8LL * v94[14]) +
                (unsigned int)*(_QWORD*)(v93 + 8LL * v94[12])) >>
               16;
      v97[2] = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[16]) +
                (unsigned int)*(_QWORD*)(v91 + 8LL * v94[17]) +
                (unsigned int)*(_QWORD*)(v93 + 8LL * v94[15])) >>
               16;
      v97[3] = ((unsigned int)*(_QWORD*)(v92 + 8LL * v94[19]) +
                (unsigned int)*(_QWORD*)(v91 + 8LL * v94[20]) +
                (unsigned int)*(_QWORD*)(v93 + 8LL * v94[18])) >>
               16;
      v99 = v94[23];
      v100 = v94[22];
      v101 = v94[21];
      v94 += 24;
      LODWORD(v99) = *(_QWORD*)(v92 + 8 * v100) + *(_QWORD*)(v91 + 8 * v99);
      result = *(_QWORD*)(v93 + 8 * v101);
      v97[4] = (unsigned int)(v99 + result) >> 16;
      v97 += 8;
    } while (-(__int64)(v90 & 0xFFFFFFF8) != v98);
    v96 = -v98;
    if ((v90 & 7) == 0) {
      goto LABEL_75;
    }
  LABEL_83:
    v102 = (_BYTE*)(v95 + v96);
    v103 = v94 + 2;
    v104 = v90 & 7;
    do {
      v105 = *v103;
      v106 = *(v103 - 1);
      result = *(v103 - 2);
      v103 += 3;
      --v104;
      *v102++ = ((unsigned int)*(_QWORD*)(v92 + 8 * v106) +
                 (unsigned int)*(_QWORD*)(v91 + 8 * v105) +
                 (unsigned int)*(_QWORD*)(v93 + 8 * result)) >>
                16;
    } while (v104 != 0);
    goto LABEL_75;
  case 9:
  case 0xD:
    if (a5 < 1) {
      return result;
    }
    v40 = *(_DWORD*)(result + 56);
    if (v40 == 0) {
      return result;
    }
    v41 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v42 = v41 + 2048;
    v43 = v41 + 4096;
    while (1) {
      v44 = *a2;
      v45 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v40 >= 8) {
        break;
      }
      v46 = 0;
      if ((v40 & 7) != 0) {
        goto LABEL_41;
      }
    LABEL_33:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v47 = (_BYTE*)(v45 + 3);
    v48 = 0;
    do {
      v48 -= 8;
      *(v47 - 3) = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[1]) +
                    (unsigned int)*(_QWORD*)(v41 + 8LL * v44[2]) +
                    (unsigned int)*(_QWORD*)(v43 + 8LL * *v44)) >>
                   16;
      *(v47 - 2) = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[5]) +
                    (unsigned int)*(_QWORD*)(v41 + 8LL * v44[6]) +
                    (unsigned int)*(_QWORD*)(v43 + 8LL * v44[4])) >>
                   16;
      *(v47 - 1) = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[9]) +
                    (unsigned int)*(_QWORD*)(v41 + 8LL * v44[10]) +
                    (unsigned int)*(_QWORD*)(v43 + 8LL * v44[8])) >>
                   16;
      *v47 = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[13]) +
              (unsigned int)*(_QWORD*)(v41 + 8LL * v44[14]) +
              (unsigned int)*(_QWORD*)(v43 + 8LL * v44[12])) >>
             16;
      v47[1] = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[17]) +
                (unsigned int)*(_QWORD*)(v41 + 8LL * v44[18]) +
                (unsigned int)*(_QWORD*)(v43 + 8LL * v44[16])) >>
               16;
      v47[2] = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[21]) +
                (unsigned int)*(_QWORD*)(v41 + 8LL * v44[22]) +
                (unsigned int)*(_QWORD*)(v43 + 8LL * v44[20])) >>
               16;
      v47[3] = ((unsigned int)*(_QWORD*)(v42 + 8LL * v44[25]) +
                (unsigned int)*(_QWORD*)(v41 + 8LL * v44[26]) +
                (unsigned int)*(_QWORD*)(v43 + 8LL * v44[24])) >>
               16;
      v49 = v44[30];
      v50 = v44[29];
      v51 = v44[28];
      v44 += 32;
      LODWORD(v49) = *(_QWORD*)(v42 + 8 * v50) + *(_QWORD*)(v41 + 8 * v49);
      result = *(_QWORD*)(v43 + 8 * v51);
      v47[4] = (unsigned int)(v49 + result) >> 16;
      v47 += 8;
    } while (-(__int64)(v40 & 0xFFFFFFF8) != v48);
    v46 = -v48;
    if ((v40 & 7) == 0) {
      goto LABEL_33;
    }
  LABEL_41:
    v52 = (_BYTE*)(v45 + v46);
    v53 = v44 + 2;
    v54 = v40 & 7;
    do {
      v55 = *v53;
      v56 = *(v53 - 1);
      result = *(v53 - 2);
      v53 += 4;
      --v54;
      *v52++ = ((unsigned int)*(_QWORD*)(v42 + 8 * v56) +
                (unsigned int)*(_QWORD*)(v41 + 8 * v55) +
                (unsigned int)*(_QWORD*)(v43 + 8 * result)) >>
               16;
    } while (v54 != 0);
    goto LABEL_33;
  case 0xA:
  case 0xE:
    if (a5 < 1) {
      return result;
    }
    v57 = *(_DWORD*)(result + 56);
    if (v57 == 0) {
      return result;
    }
    v58 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v59 = v58 + 2048;
    v60 = v58 + 4096;
    while (1) {
      v61 = *a2;
      v62 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v57 >= 8) {
        break;
      }
      v63 = 0;
      if ((v57 & 7) != 0) {
        goto LABEL_55;
      }
    LABEL_47:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v64 = (_BYTE*)(v62 + 3);
    v65 = 0;
    do {
      v65 -= 8;
      *(v64 - 3) = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[2]) +
                    (unsigned int)*(_QWORD*)(v58 + 8LL * v61[3]) +
                    (unsigned int)*(_QWORD*)(v60 + 8LL * v61[1])) >>
                   16;
      *(v64 - 2) = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[6]) +
                    (unsigned int)*(_QWORD*)(v58 + 8LL * v61[7]) +
                    (unsigned int)*(_QWORD*)(v60 + 8LL * v61[5])) >>
                   16;
      *(v64 - 1) = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[10]) +
                    (unsigned int)*(_QWORD*)(v58 + 8LL * v61[11]) +
                    (unsigned int)*(_QWORD*)(v60 + 8LL * v61[9])) >>
                   16;
      *v64 = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[14]) +
              (unsigned int)*(_QWORD*)(v58 + 8LL * v61[15]) +
              (unsigned int)*(_QWORD*)(v60 + 8LL * v61[13])) >>
             16;
      v64[1] = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[18]) +
                (unsigned int)*(_QWORD*)(v58 + 8LL * v61[19]) +
                (unsigned int)*(_QWORD*)(v60 + 8LL * v61[17])) >>
               16;
      v64[2] = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[22]) +
                (unsigned int)*(_QWORD*)(v58 + 8LL * v61[23]) +
                (unsigned int)*(_QWORD*)(v60 + 8LL * v61[21])) >>
               16;
      v64[3] = ((unsigned int)*(_QWORD*)(v59 + 8LL * v61[26]) +
                (unsigned int)*(_QWORD*)(v58 + 8LL * v61[27]) +
                (unsigned int)*(_QWORD*)(v60 + 8LL * v61[25])) >>
               16;
      v66 = v61[31];
      v67 = v61[30];
      v68 = v61[29];
      v61 += 32;
      LODWORD(v66) = *(_QWORD*)(v59 + 8 * v67) + *(_QWORD*)(v58 + 8 * v66);
      result = *(_QWORD*)(v60 + 8 * v68);
      v64[4] = (unsigned int)(v66 + result) >> 16;
      v64 += 8;
    } while (-(__int64)(v57 & 0xFFFFFFF8) != v65);
    v63 = -v65;
    if ((v57 & 7) == 0) {
      goto LABEL_47;
    }
  LABEL_55:
    v69 = (_BYTE*)(v62 + v63);
    v70 = v61 + 3;
    v71 = v57 & 7;
    do {
      v72 = *v70;
      v73 = *(v70 - 1);
      result = *(v70 - 2);
      v70 += 4;
      --v71;
      *v69++ = ((unsigned int)*(_QWORD*)(v59 + 8 * v73) +
                (unsigned int)*(_QWORD*)(v58 + 8 * v72) +
                (unsigned int)*(_QWORD*)(v60 + 8 * result)) >>
               16;
    } while (v71 != 0);
    goto LABEL_47;
  case 0xB:
  case 0xF:
    if (a5 < 1) {
      return result;
    }
    v22 = *(_DWORD*)(result + 56);
    if (v22 == 0) {
      return result;
    }
    v23 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v24 = v23 + 2048;
    v25 = v23 + 4096;
    while (1) {
      v26 = *a2;
      v27 = *(_QWORD*)(*a3 + 8LL * a4);
      if (v22 >= 8) {
        break;
      }
      v28 = 0;
      if ((v22 & 7) != 0) {
        goto LABEL_27;
      }
    LABEL_19:
      ++a2;
      ++a4;
      v9 = (unsigned int)a5-- > 1;
      if (!v9) {
        return result;
      }
    }
    v29 = (_BYTE*)(v27 + 3);
    v30 = 0;
    do {
      v30 -= 8;
      *(v29 - 3) = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[2]) +
                    (unsigned int)*(_QWORD*)(v23 + 8LL * v26[1]) +
                    (unsigned int)*(_QWORD*)(v25 + 8LL * v26[3])) >>
                   16;
      *(v29 - 2) = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[6]) +
                    (unsigned int)*(_QWORD*)(v23 + 8LL * v26[5]) +
                    (unsigned int)*(_QWORD*)(v25 + 8LL * v26[7])) >>
                   16;
      *(v29 - 1) = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[10]) +
                    (unsigned int)*(_QWORD*)(v23 + 8LL * v26[9]) +
                    (unsigned int)*(_QWORD*)(v25 + 8LL * v26[11])) >>
                   16;
      *v29 = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[14]) +
              (unsigned int)*(_QWORD*)(v23 + 8LL * v26[13]) +
              (unsigned int)*(_QWORD*)(v25 + 8LL * v26[15])) >>
             16;
      v29[1] = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[18]) +
                (unsigned int)*(_QWORD*)(v23 + 8LL * v26[17]) +
                (unsigned int)*(_QWORD*)(v25 + 8LL * v26[19])) >>
               16;
      v29[2] = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[22]) +
                (unsigned int)*(_QWORD*)(v23 + 8LL * v26[21]) +
                (unsigned int)*(_QWORD*)(v25 + 8LL * v26[23])) >>
               16;
      v29[3] = ((unsigned int)*(_QWORD*)(v24 + 8LL * v26[26]) +
                (unsigned int)*(_QWORD*)(v23 + 8LL * v26[25]) +
                (unsigned int)*(_QWORD*)(v25 + 8LL * v26[27])) >>
               16;
      v31 = v26[29];
      v32 = v26[30];
      v33 = v26[31];
      v26 += 32;
      LODWORD(v31) = *(_QWORD*)(v24 + 8 * v32) + *(_QWORD*)(v23 + 8 * v31);
      result = *(_QWORD*)(v25 + 8 * v33);
      v29[4] = (unsigned int)(v31 + result) >> 16;
      v29 += 8;
    } while (-(__int64)(v22 & 0xFFFFFFF8) != v30);
    v28 = -v30;
    if ((v22 & 7) == 0) {
      goto LABEL_19;
    }
  LABEL_27:
    v34 = (_BYTE*)(v27 + v28);
    v35 = v26 + 3;
    v36 = v22 & 7;
    do {
      v37 = *(v35 - 2);
      v38 = *(v35 - 1);
      v39 = *v35;
      v35 += 4;
      result = v39;
      --v36;
      *v34++ = ((unsigned int)*(_QWORD*)(v24 + 8 * v38) +
                (unsigned int)*(_QWORD*)(v23 + 8 * v37) +
                (unsigned int)*(_QWORD*)(v25 + 8LL * v39)) >>
               16;
    } while (v36 != 0);
    goto LABEL_19;
  default:
    if (a5 < 1) {
      return result;
    }
    v107 = *(_DWORD*)(result + 56);
    if (v107 == 0) {
      return result;
    }
    v108 = *(_QWORD*)(*(_QWORD*)(result + 544) + 16LL);
    v109 = v108 + 2048;
    v110 = v108 + 4096;
    break;
  }
  do {
    v111 = *a2;
    v112 = *(_QWORD*)(*a3 + 8LL * a4);
    if (v107 < 8) {
      v113 = 0;
      if ((v107 & 7) == 0) {
        goto LABEL_89;
      }
    LABEL_97:
      v119 = (_BYTE*)(v112 + v113);
      v120 = v107 & 7;
      do {
        v121 = *v111;
        v122 = v111[1];
        result = v111[2];
        --v120;
        v111 += 3;
        *v119++ = ((unsigned int)*(_QWORD*)(v109 + 8 * v122) +
                   (unsigned int)*(_QWORD*)(v108 + 8 * v121) +
                   (unsigned int)*(_QWORD*)(v110 + 8 * result)) >>
                  16;
      } while (v120 != 0);
      goto LABEL_89;
    }
    v114 = (_BYTE*)(v112 + 3);
    v115 = 0;
    do {
      v115 -= 8;
      *(v114 - 3) = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[1]) +
                     (unsigned int)*(_QWORD*)(v108 + 8LL * *v111) +
                     (unsigned int)*(_QWORD*)(v110 + 8LL * v111[2])) >>
                    16;
      *(v114 - 2) = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[4]) +
                     (unsigned int)*(_QWORD*)(v108 + 8LL * v111[3]) +
                     (unsigned int)*(_QWORD*)(v110 + 8LL * v111[5])) >>
                    16;
      *(v114 - 1) = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[7]) +
                     (unsigned int)*(_QWORD*)(v108 + 8LL * v111[6]) +
                     (unsigned int)*(_QWORD*)(v110 + 8LL * v111[8])) >>
                    16;
      *v114 = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[10]) +
               (unsigned int)*(_QWORD*)(v108 + 8LL * v111[9]) +
               (unsigned int)*(_QWORD*)(v110 + 8LL * v111[11])) >>
              16;
      v114[1] = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[13]) +
                 (unsigned int)*(_QWORD*)(v108 + 8LL * v111[12]) +
                 (unsigned int)*(_QWORD*)(v110 + 8LL * v111[14])) >>
                16;
      v114[2] = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[16]) +
                 (unsigned int)*(_QWORD*)(v108 + 8LL * v111[15]) +
                 (unsigned int)*(_QWORD*)(v110 + 8LL * v111[17])) >>
                16;
      v114[3] = ((unsigned int)*(_QWORD*)(v109 + 8LL * v111[19]) +
                 (unsigned int)*(_QWORD*)(v108 + 8LL * v111[18]) +
                 (unsigned int)*(_QWORD*)(v110 + 8LL * v111[20])) >>
                16;
      v116 = v111[21];
      v117 = v111[22];
      v118 = v111[23];
      v111 += 24;
      LODWORD(v116) = *(_QWORD*)(v109 + 8 * v117) + *(_QWORD*)(v108 + 8 * v116);
      result = *(_QWORD*)(v110 + 8 * v118);
      v114[4] = (unsigned int)(v116 + result) >> 16;
      v114 += 8;
    } while (-(__int64)(v107 & 0xFFFFFFF8) != v115);
    v113 = -v115;
    if ((v107 & 7) != 0) {
      goto LABEL_97;
    }
  LABEL_89:
    ++a2;
    ++a4;
    v9 = (unsigned int)a5-- > 1;
  } while (v9);
  return result;
}

#pragma GCC visibility pop
