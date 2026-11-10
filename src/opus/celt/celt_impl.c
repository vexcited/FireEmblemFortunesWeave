#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_c19d4c;
__int64 comb_filter(__int64 result, __int64 a2, int a3, int a4, int a5,
                    unsigned __int16 a6, unsigned __int16 a7, int a8, int a9,
                    __int16* a10, unsigned int a11);

__int64 comb_filter(__int64 result, __int64 a2, int a3, int a4, int a5,
                    unsigned __int16 a6, unsigned __int16 a7, int a8, int a9,
                    __int16* a10, unsigned int a11)
{
  unsigned int v11;
  __int64 v12;
  __int16* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v23;
  __int16* v24;
  int v25;
  int v27;
  int* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int* v32;
  int* v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  unsigned __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned int v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  _DWORD* v69;
  _DWORD* v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int* v77;
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
  __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;

  if ((a7 | a6) == 0) {
    if (a2 == result) {
      return result;
    }
    v97 = 4LL * a5;
    return memmove_plt(result, a2, v97);
  }
  if (a3 <= 15) {
    v11 = 15;
  }
  else {
    v11 = a3;
  }
  if (a4 <= 15) {
    v12 = 15;
  }
  else {
    v12 = (unsigned int)a4;
  }
  v13 = (__int16*)((char*)&SdkData_c19d4c + 6 * a9);
  v14 = ~(_DWORD)v12;
  v15 = (unsigned int)(*v13 * (__int16)a7 + 0x4000) >> 15;
  v16 = (unsigned int)(v13[1] * (__int16)a7 + 0x4000) >> 15;
  v17 = (unsigned int)(v13[2] * (__int16)a7 + 0x4000) >> 15;
  v18 = -v12;
  v19 = 1 - v12;
  v20 = -2 - v12;
  if (a8 == a9 && a6 == a7 && v11 == (_DWORD)v12) {
    v23 = 0;
  }
  else {
    v23 = a11;
  }
  v99 = v23;
  if ((int)v23 >= 1) {
    v24 = (__int16*)((char*)&SdkData_c19d4c + 6 * a8);
    v25 = (__int16)a6;
    v103 = -2 - v12;
    v100 = 1 - v12;
    v101 = -v12;
    v27 = *(_DWORD*)(a2 - 4 * v12);
    v28 = (int*)(a2 - 4LL * v11);
    v29 = a2 + 8;
    v30 = *(_DWORD*)(a2 + 4 * v19);
    v104 = v12;
    v31 = -4LL * (unsigned int)v12;
    v102 = v14;
    v32 = (int*)result;
    v33 = v28;
    v34 = v25 * v24[2];
    v35 = v25 * v24[1];
    v36 = 2 * v25 * *v24;
    v37 = *(_DWORD*)(a2 + 4LL * v20);
    v38 = *(_DWORD*)(a2 + 4LL * v14);
    v39 = (v36 + 0x8000) >> 16;
    v40 = (2 * v35 + 0x8000) >> 16;
    v41 = (2 * v34 + 0x8000) >> 16;
    do {
      v42 = *a10++;
      v43 = *(v28 - 1);
      v44 = *(_DWORD*)(v29 + v31);
      v45 = *(v28 - 2) + (__int64)v28[2];
      v46 = *(_DWORD*)(v29 - 8);
      v29 += 4;
      v47 = (__int16)((v42 * v42) >> 15);
      v48 = (int)((2 * v42 * v42) & 0xFFFF0000 ^ 0x7FFF0000) >> 16;
      v49 = (__int16)((unsigned int)(v48 * v39) >> 15) * (__int64)*v28;
      v50 = v33[1];
      ++v33;
      v51 = v46 +
            ((unsigned __int64)((__int16)((unsigned int)(v47 * (__int16)v15) >>
                                          15) *
                                (__int64)v27) >>
             15) +
            ((unsigned __int64)((__int16)((unsigned int)(v47 * (__int16)v16) >>
                                          15) *
                                (__int64)(v38 + v30)) >>
             15) +
            ((unsigned __int64)((__int16)((unsigned int)(v47 * (__int16)v17) >>
                                          15) *
                                (__int64)(v44 + v37)) >>
             15);
      v37 = v38;
      v38 = v27;
      v27 = v30;
      v30 = v44;
      v52 = v51 + (v49 >> 15) +
            ((unsigned __int64)((__int16)((unsigned int)(v48 * v40) >> 15) *
                                (v43 + v50)) >>
             15) +
            ((unsigned __int64)((__int16)((unsigned int)(v48 * v41) >> 15) *
                                v45) >>
             15);
      v28 = v33;
      if (v52 <= -300000000) {
        v52 = -300000000;
      }
      if (v52 >= 300000000) {
        v52 = 300000000;
      }
      --v23;
      *v32++ = v52;
    } while (v23 != 0);
    LODWORD(v12) = v104;
    v53 = a11;
    v14 = v102;
    v20 = v103;
    v19 = v100;
    v18 = v101;
    if (a7 != 0) {
      goto LABEL_25;
    }
    goto LABEL_52;
  }
  v53 = 0;
  if (a7 == 0) {
  LABEL_52:
    if (a2 == result) {
      return result;
    }
    v98 = 4LL * v99;
    v97 = 4LL * (a5 - v99);
    result += v98;
    a2 += v98;
    return memmove_plt(result, a2, v97);
  }
LABEL_25:
  if ((int)(a5 - v53) >= 5) {
    v54 = a2 + 4LL * v53;
    v55 = a5 - v53 - 4;
    v56 = v53;
    v57 = 0;
    v58 = *(_DWORD*)(v54 + 4 * v18);
    v59 = (__int16)v17;
    v60 = 4 * v56;
    v61 = 2 * *(_DWORD*)(v54 + 4 * v19);
    v62 = *(_DWORD*)(v54 + 4LL * v14);
    v63 = 2 * v58;
    v64 = (__int16)v16;
    v65 = 2 * *(_DWORD*)(v54 + 4LL * v20);
    v66 = a2 - 4LL * (unsigned int)v12;
    v67 = 2 * v62;
    v68 = (__int16)v15;
    do {
      v69 = (_DWORD*)(a2 + v60);
      v70 = (_DWORD*)(v66 + v60);
      v71 = *(_DWORD*)(a2 + v60);
      v72 = *(_DWORD*)(v66 + v60 + 8);
      v57 += 5LL;
      v66 += 20;
      a2 += 20;
      v73 = v63 + 2 * v72;
      v74 = v73 >> 16;
      v75 = (v73 & 0xFFFE) * v64;
      v76 = (v63 >> 16) * v68 + (((v63 & 0xFFFE) * v68) >> 16) + v71 +
            ((v61 + v67) >> 16) * v64 + ((((v61 + v67) & 0xFFFE) * v64) >> 16) +
            ((v65 + 2 * v72) >> 16) * v59 +
            ((((v65 + 2 * v72) & 0xFFFE) * v59) >> 16);
      v77 = (int*)(result + v60);
      result += 20;
      if (v76 <= -300000000) {
        v76 = -300000000;
      }
      if (v76 >= 300000000) {
        v76 = 300000000;
      }
      *v77 = v76;
      v78 = v70[3];
      v79 = (v61 >> 16) * v68 + (((v61 & 0xFFFE) * v68) >> 16) + v69[1] +
            v74 * v64;
      v80 = v61 + 2 * v78;
      v81 = v80 >> 16;
      v82 = (v80 & 0xFFFE) * v64;
      v83 = v79 + (v75 >> 16) + ((v67 + 2 * v78) >> 16) * v59 +
            ((((v67 + 2 * v78) & 0xFFFE) * v59) >> 16);
      v65 = 2 * v78;
      if (v83 <= -300000000) {
        v83 = -300000000;
      }
      if (v83 >= 300000000) {
        v83 = 300000000;
      }
      v77[1] = v83;
      v84 = v70[4];
      v85 = (__int16)(v72 >> 15) * v68 + ((2 * (v72 & 0x7FFF) * v68) >> 16) +
            v69[2] + v81 * v64 + (v82 >> 16) + ((v63 + 2 * v84) >> 16) * v59 +
            ((((v63 + 2 * v84) & 0xFFFE) * v59) >> 16);
      v67 = 2 * v84;
      v86 = 2 * v84 + 2 * v72;
      v87 = v86 >> 16;
      v88 = v86 & 0xFFFE;
      if (v85 <= -300000000) {
        v85 = -300000000;
      }
      v89 = v88 * v64;
      if (v85 >= 300000000) {
        v85 = 300000000;
      }
      v77[2] = v85;
      v90 = v70[5];
      v91 = (__int16)(v78 >> 15) * v68 + ((((2 * v78) & 0xFFFE) * v68) >> 16) +
            v69[3] + v87 * v64 + (v89 >> 16) + ((v61 + 2 * v90) >> 16) * v59 +
            ((((v61 + 2 * v90) & 0xFFFE) * v59) >> 16);
      v63 = 2 * v90;
      v92 = 2 * v90 + 2 * v78;
      v93 = v92 >> 16;
      v94 = v92 & 0xFFFE;
      if (v91 <= -300000000) {
        v91 = -300000000;
      }
      v95 = v94 * v64;
      if (v91 >= 300000000) {
        v91 = 300000000;
      }
      v77[3] = v91;
      v61 = 2 * v70[6];
      v96 = (__int16)(v84 >> 15) * v68 +
            (((unsigned __int16)(2 * v84) * v68) >> 16) + v69[4] + v93 * v64 +
            (v95 >> 16) + ((v61 + 2 * v72) >> 16) * v59 +
            ((((v61 + 2 * v72) & 0xFFFE) * v59) >> 16);
      if (v96 <= -300000000) {
        v96 = -300000000;
      }
      if (v96 >= 300000000) {
        v96 = 300000000;
      }
      v77[4] = v96;
    } while (v57 < v55);
  }
  return result;
}

#pragma GCC visibility pop
