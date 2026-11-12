#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN MovieData_a2308;
__int64 comb_filter(__int64 result, __int64 a2, int a3, int a4, int a5,
                    unsigned __int16 a6, unsigned __int16 a7, int a8, int a9,
                    __int16* a10, unsigned int a11);

__int64 comb_filter(__int64 result, __int64 a2, int a3, int a4, int a5,
                    unsigned __int16 a6, unsigned __int16 a7, int a8, int a9,
                    __int16* a10, unsigned int a11)
{
  unsigned int v11;
  __int16* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  __int64 v28;
  __int16* v29;
  int v30;
  int v32;
  int* v33;
  __int64 v34;
  int* v35;
  int* v36;
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
  __int64 v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _DWORD* v67;
  int* v68;
  int* v69;
  int v70;
  int v71;
  int v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  int v78;
  int v79;
  unsigned int v80;

  if ((a7 | a6) == 0) {
    if (a2 == result) {
      return result;
    }
    v64 = 4LL * a5;
    return memmove_plt(result, a2, v64);
  }
  if (a3 <= 15) {
    v11 = 15;
  }
  else {
    v11 = a3;
  }
  v12 = (__int16*)((char*)&MovieData_a2308 + 6 * a9);
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  if (a4 <= 15) {
    v16 = 15;
  }
  else {
    v16 = (unsigned int)a4;
  }
  v17 = ~(_DWORD)v16;
  v18 = v13 * (__int16)a7 + 0x4000;
  v19 = v14 * (__int16)a7 + 0x4000;
  v20 = -v16;
  v21 = v18 >> 15;
  v22 = (unsigned int)(v15 * (__int16)a7 + 0x4000) >> 15;
  v23 = v19 >> 15;
  v24 = 1 - v16;
  v25 = -2 - v16;
  if (a8 == a9 && a6 == a7 && v11 == (_DWORD)v16) {
    v28 = 0;
  }
  else {
    v28 = a11;
  }
  v79 = v28;
  if ((int)v28 < 1) {
    v54 = 0;
    if (a7 != 0) {
      goto LABEL_25;
    }
    goto LABEL_31;
  }
  v29 = (__int16*)((char*)&MovieData_a2308 + 6 * a8);
  v30 = (__int16)a6;
  v32 = *(_DWORD*)(a2 - 4 * v16);
  v33 = (int*)(a2 - 4LL * v11);
  v34 = a2 + 8;
  v80 = v19 >> 15;
  v35 = (int*)result;
  v36 = v33;
  v37 = v30 * v29[2];
  v38 = v30 * v29[1];
  v39 = 2 * v30 * *v29;
  v40 = *(_DWORD*)(a2 + 4LL * v25);
  v41 = *(_DWORD*)(a2 + 4LL * v17);
  v42 = *(_DWORD*)(a2 + 4 * v24);
  v43 = (v39 + 0x8000) >> 16;
  v44 = (2 * v38 + 0x8000) >> 16;
  v45 = (2 * v37 + 0x8000) >> 16;
  do {
    v46 = *a10++;
    v47 = *(_DWORD*)(v34 - 4LL * (unsigned int)v16);
    v48 = *(_DWORD*)(v34 - 8);
    v34 += 4;
    v49 = (__int16)((v46 * v46) >> 15);
    v50 = (int)((2 * v46 * v46) & 0xFFFF0000 ^ 0x7FFF0000) >> 16;
    v51 = v36[1];
    ++v36;
    v52 = v48 +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v21) >>
                                        15) *
                              (__int64)v32) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v23) >>
                                        15) *
                              (__int64)(v41 + v42)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v22) >>
                                        15) *
                              (__int64)(v47 + v40)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v43) >> 15) *
                              (__int64)*v33) >>
           15);
    v40 = v41;
    v41 = v32;
    v32 = v42;
    v42 = v47;
    v53 = v52 +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v44) >> 15) *
                              (*(v33 - 1) + v51)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v45) >> 15) *
                              (*(v33 - 2) + (__int64)v33[2])) >>
           15);
    v33 = v36;
    if (v53 <= -300000000) {
      v53 = -300000000;
    }
    if (v53 >= 300000000) {
      v53 = 300000000;
    }
    --v28;
    *v35++ = v53;
  } while (v28 != 0);
  v54 = a11;
  v24 = 1 - v16;
  LOWORD(v23) = v80;
  v20 = -v16;
  v17 = ~(_DWORD)v16;
  v25 = -2 - v16;
  if (a7 == 0) {
  LABEL_31:
    if (a2 == result) {
      return result;
    }
    v65 = 4LL * v79;
    v64 = 4LL * (a5 - v79);
    result += v65;
    a2 += v65;
    return memmove_plt(result, a2, v64);
  }
LABEL_25:
  v55 = a5 - v54;
  if ((int)(a5 - v54) < 1) {
    return result;
  }
  v56 = 4LL * v54;
  v57 = (__int16)v21;
  v58 = a2 + v56;
  v59 = *(_DWORD*)(a2 + v56 + 4 * v24);
  v60 = *(_DWORD*)(a2 + v56 + 4 * v20);
  v61 = *(_DWORD*)(a2 + v56 + 4LL * v17);
  v62 = *(_DWORD*)(a2 + v56 + 4LL * v25);
  if (v55 == 1) {
    v63 = 0;
  LABEL_45:
    v77 = result + v56;
    result = v58 + 8;
    v78 =
        *(_DWORD*)(v58 + 4 * v63) +
        ((unsigned __int64)(v57 * (__int64)v60) >> 15) +
        ((unsigned __int64)((__int16)v23 * (__int64)(v59 + v61)) >> 15) +
        ((unsigned __int64)((__int16)v22 * (*(int*)(v58 + 8 + 4 * (v63 - v16)) +
                                            (__int64)v62)) >>
         15);
    if (v78 <= -300000000) {
      v78 = -300000000;
    }
    if (v78 >= 300000000) {
      v78 = 300000000;
    }
    *(_DWORD*)(v77 + 4 * v63) = v78;
    return result;
  }
  v66 = 0;
  v67 = (_DWORD*)(a2 + v56);
  v68 = (int*)(4LL * v54 - 4 * v16 + a2 + 12);
  v69 = (int*)(result + 4LL * v54 + 4);
  do {
    v70 = v60;
    v60 = *(v68 - 1);
    v71 = v59;
    v66 -= 2;
    v72 = *v67 + ((unsigned __int64)(v57 * (__int64)v70) >> 15) +
          ((unsigned __int64)((__int16)v23 * (__int64)(v59 + v61)) >> 15) +
          ((unsigned __int64)((__int16)v22 * (__int64)(v60 + v62)) >> 15);
    v73 = (unsigned __int64)(v57 * (__int64)v59) >> 15;
    if (v72 <= -300000000) {
      v72 = -300000000;
    }
    if (v72 >= 300000000) {
      v72 = 300000000;
    }
    *(v69 - 1) = v72;
    v74 = *v68;
    v68 += 2;
    v59 = v74;
    v75 = v67[1];
    v67 += 2;
    v76 = v75 + v73 +
          ((unsigned __int64)((__int16)v23 * (__int64)(v60 + v70)) >> 15) +
          ((unsigned __int64)((__int16)v22 * (__int64)(v74 + v61)) >> 15);
    v61 = v71;
    if (v76 <= -300000000) {
      v76 = -300000000;
    }
    if (v76 >= 300000000) {
      v76 = 300000000;
    }
    *v69 = v76;
    v69 += 2;
    v62 = v70;
  } while (-(__int64)(v55 & 0x7FFFFFFE) != v66);
  v63 = -v66;
  v62 = v70;
  v61 = v71;
  if ((v55 & 1) != 0) {
    goto LABEL_45;
  }
  return result;
}

#pragma GCC visibility pop
