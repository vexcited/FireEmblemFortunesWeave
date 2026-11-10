#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDKgetWindowSlope_plt(_QWORD, _QWORD);
__int64 nn_codec_dct_IV_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e87c08;
extern __int64 SdkData_e87c10;
__int64 nn_codec_FDKaacEnc_Transform_Real(void* this_, const __int16* a2,
                                          int* a3, unsigned int a4,
                                          unsigned int* a5, int* a6, _DWORD* a7,
                                          int* a8, __int64 a9, int* a10);

__int64 nn_codec_FDKaacEnc_Transform_Real(void* this_, const __int16* a2,
                                          int* a3, unsigned int a4,
                                          unsigned int* a5, int* a6, _DWORD* a7,
                                          int* a8, __int64 a9, int* a10)
{
  __int64 result;
  int v12;
  int v14;
  unsigned __int64 v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  const __int16* v57;
  int v58;
  __int64 v59;
  char* v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  signed int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int16* v73;
  int v74;
  __int16* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int16* v83;
  int v84;
  __int16* v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  __int16* v94;
  __int16* v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  const __int16* v105;
  __int16* v106;
  __int16* v107;
  __int64 v108;
  int v109;
  __int16* v110;
  __int16* v111;
  int v112;
  int v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int16* v119;
  __int16* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  __int16* v129;
  __int16* v130;
  int v131;
  int v132;
  int v133;
  int v134;

  result = 0xFFFFFFFFLL;
  v12 = (int)a8;
  v14 = (int)a6;
  *a7 = 2;
  if ((int)a3 > 1) {
    if ((_DWORD)a3 == 2) {
      v17 = (unsigned int)((int)a6 >> 3);
      v18 = v17;
      v19 = (int)a6 >> 3;
      this_ = (void*)((char*)this_ + 6 * (int)v17 +
                      2 * ((int)(v17 + ((unsigned int)a6 >> 31)) >> 1));
    }
    else {
      if ((_DWORD)a3 != 3) {
        return result;
      }
      v18 = (int)a6 >> 3;
      v17 = (unsigned int)a6;
      v19 = (int)a6;
    }
  }
  else if ((_DWORD)a3 != 0) {
    if ((_DWORD)a3 != 1) {
      return result;
    }
    v17 = (unsigned int)((int)a6 >> 3);
    v18 = (unsigned int)a6;
    v19 = (int)a6;
  }
  else {
    v19 = (int)a6;
    v20 = (3 * (int)a6) >> 2;
    if (a4 != 2) {
      v20 = 0;
    }
    v17 = (unsigned int)((_DWORD)a6 - v20);
    v18 = (_DWORD)a6 - v20;
  }
  v21 = nn_codec_FDKgetWindowSlope_plt(v18, *a5);
  v22 = nn_codec_FDKgetWindowSlope_plt((unsigned int)v17, a4);
  if (v12 == 2) {
    v23 = 2 * v14;
    v24 = SdkData_e87c10;
    if (v14 == 512) {
      v24 = SdkData_e87c08;
    }
    v25 = (unsigned int)(v14 / 4);
    if (v14 >= 4) {
      v26 = 0;
      v27 = -1;
      v28 = ((unsigned int)v14 >> 1) + v14;
      v29 = a9 + 4LL * ((unsigned int)v14 >> 1);
      v30 = v24 + 2LL * v28;
      v31 = a9 + 4LL * v28;
      v32 = (char*)this_ + 2 * v14 + 2 * ((unsigned int)(3 * v14) >> 2);
      do {
        v33 = *(__int16*)&v32[2 * v27];
        v34 = *(__int16*)&v32[2 * v26];
        v35 =
            2 *
            (*(__int16*)(v24 + 2LL * ((unsigned int)v14 >> 1) + 2 * v27) * v33 +
             *(__int16*)(v24 + 2LL * ((unsigned int)v14 >> 1) + 2 * v26) * v34);
        v36 = *(__int16*)(v30 + 2 * v27) * v33 +
              *(__int16*)(v30 + 2 * v26) * v34 +
              ((int)((unsigned __int64)(*(__int16*)(v24 +
                                                    2LL * (unsigned int)v23 +
                                                    2 * v26) *
                                        (__int64)*(int*)(v29 + 4 * v26)) >>
                     16) >>
               1);
        *(_DWORD*)(v29 + 4 * v26) = *(_DWORD*)(a9 + 4 * v26);
        *(_DWORD*)(a9 + 4 * v26) = v35;
        *(_DWORD*)&a2[2 * v26] =
            *(_DWORD*)(v29 + 4 * v26) +
            ((int)((unsigned __int64)(*(__int16*)(v24 +
                                                  2LL * (((unsigned int)v14 >>
                                                          1) +
                                                         2 * v14) +
                                                  2 * v26) *
                                      (__int64)*(int*)(v31 + 4 * v27)) >>
                   16) >>
             1);
        *(_DWORD*)&a2[2 * (unsigned int)v14 + 2 * v27] = v36;
        *(_DWORD*)(v31 + 4 * v27) = v36;
        ++v26;
        --v27;
      } while (v25 != v26);
    }
    v37 = v14 / 2;
    if ((int)v25 < v14 / 2) {
      v38 = 2LL * (int)v25;
      v39 = 0;
      v40 = 2LL * (int)v25;
      v41 = v38 + 2LL * v23;
      v42 = (int)v25 + (__int64)v37;
      v43 = v37 - (__int64)(int)v25;
      v44 = v14 - 1;
      if (3 * v14 >= 0) {
        v45 = 3 * v14;
      }
      else {
        v45 = 3 * v14 + 3;
      }
      v46 = v14 - v25;
      v47 = v37 + 2 * v14;
      v48 = v37 - 1;
      v49 = a9 + 4 * v42;
      v50 = v24 + 2 * v42;
      v51 = v14 / -4;
      v52 = v38 + 2LL * v47;
      v53 = v38 + 2LL * v46;
      v54 = v44 + (v45 >> 2);
      v55 = v24 + v41;
      v56 = a9 + v40 * 2;
      v57 = &a2[v40];
      v58 = v48 + v14;
      v59 = v24 + v52;
      v60 = (char*)this_ + v53;
      do {
        v61 = v51 + v58;
        v62 = *((__int16*)this_ + v51 + v54);
        v63 = *(__int16*)(v24 + 2LL * (v51 + v48));
        --v54;
        --v58;
        --v48;
        v64 = v62 * v63;
        v65 = *(__int16*)(v24 + 2LL * v61) * v62 +
              ((int)((unsigned __int64)(*(__int16*)(v55 + 2 * v39) *
                                        (__int64)*(int*)(v49 + 4 * v39)) >>
                     16) >>
               1);
        *(_DWORD*)(v49 + 4 * v39) =
            *(_DWORD*)(v56 + 4 * v39) +
            2 * *(__int16*)&v60[2 * v39] * *(__int16*)(v50 + 2 * v39);
        *(_DWORD*)(v56 + 4 * v39) = 2 * v64;
        *(_DWORD*)&v57[2 * v39] =
            *(_DWORD*)(v49 + 4 * v39) +
            ((int)((unsigned __int64)(*(__int16*)(v59 + 2 * v39) *
                                      (__int64)*(int*)(a9 + 4LL * v61)) >>
                   16) >>
             1);
        v66 = v51 + v44;
        ++v39;
        --v44;
        *(_DWORD*)&a2[2 * v66] = v65;
        *(_DWORD*)(a9 + 4LL * v61) = v65;
      } while (v43 != v39);
    }
    goto LABEL_59;
  }
  v67 = (int)(v19 - v18) >> 1;
  v68 = v19 + ((unsigned int)v19 >> 31);
  if (v67 >= 1) {
    v69 = (__int64)v68 >> 1;
    v70 = v67 & 7;
    if ((unsigned int)v67 >= 8) {
      v72 = 0;
      v73 = (__int16*)&a2[2 * v69 + 8];
      do {
        *((_DWORD*)v73 - 4) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 1);
        *((_DWORD*)v73 - 3) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 2);
        *((_DWORD*)v73 - 2) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 3);
        *((_DWORD*)v73 - 1) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 4);
        *(_DWORD*)v73 = -32768 * *((__int16*)this_ + v19 + (int)v72 - 5);
        *((_DWORD*)v73 + 1) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 6);
        *((_DWORD*)v73 + 2) = -32768 * *((__int16*)this_ + v19 + (int)v72 - 7);
        v74 = v19 - 8 + v72;
        v72 -= 8;
        *((_DWORD*)v73 + 3) = -32768 * *((__int16*)this_ + v74);
        v73 += 16;
      } while (-(__int64)(v67 & 0x7FFFFFF8) != v72);
      v71 = -v72;
      if ((v67 & 7) == 0) {
        goto LABEL_34;
      }
    }
    else {
      v71 = 0;
      if ((v67 & 7) == 0) {
        goto LABEL_34;
      }
    }
    v75 = (__int16*)&a2[2 * v71 + 2 * v69];
    v76 = ~(_DWORD)v71 + v19;
    do {
      v77 = *((__int16*)this_ + v76--);
      --v70;
      *(_DWORD*)v75 = -32768 * v77;
      v75 += 2;
    } while (v70 != 0);
  }
LABEL_34:
  v78 = (v19 - (int)v17) >> 1;
  if ((int)v18 > 1) {
    v79 = v19 / 2;
    v80 = v67;
    v81 = (v18 >> 1) & 3LL;
    if ((v18 >> 1) - 1 >= 3) {
      v82 = 0;
      v83 = (__int16*)(v21 + 8);
      v84 = v19 - v67 - 4;
      v85 = (__int16*)((char*)this_ + 2 * v67 + 4);
      do {
        v86 = v67 + v79 + v82;
        v82 += 4;
        *(_DWORD*)&a2[2 * v86] =
            *(v83 - 3) * *(v85 - 2) - *(v83 - 4) * *((__int16*)this_ + v84 + 3);
        *(_DWORD*)&a2[2 * v86 + 2] =
            *(v83 - 1) * *(v85 - 1) - *(v83 - 2) * *((__int16*)this_ + v84 + 2);
        *(_DWORD*)&a2[2 * v86 + 4] =
            v83[1] * *v85 - *v83 * *((__int16*)this_ + v84 + 1);
        v87 = v85[1];
        v88 = v83[3];
        v89 = v83[2];
        v85 += 4;
        v83 += 8;
        v90 = v88 * v87;
        v91 = *((__int16*)this_ + v84);
        v84 -= 4;
        *(_DWORD*)&a2[2 * v86 + 6] = v90 - v89 * v91;
      } while (((v18 >> 1) & 0x3FFFFFFC) != v82);
    }
    else {
      v82 = 0;
    }
    if (v81 != 0) {
      v92 = v67 + v82;
      v93 = v67 + v82 + v79;
      v94 = (__int16*)((char*)this_ + 2 * v82 + 2 * v80);
      v95 = (__int16*)(v21 + 4 * v82 + 2);
      v96 = ~v92 + v19;
      do {
        v97 = *v94++;
        v98 = *v95;
        v99 = *(v95 - 1);
        v95 += 2;
        --v81;
        v100 = v98 * v97;
        v101 = *((__int16*)this_ + v96--);
        *(_DWORD*)&a2[2 * v93++] = v100 - v99 * v101;
      } while (v81 != 0);
    }
  }
  if (v78 >= 1) {
    v102 = (__int64)v68 >> 1;
    v103 = v78 & 7;
    if ((unsigned int)v78 >= 8) {
      v104 = 0;
      v105 = &a2[2 * (v19 / 2)];
      v106 = (__int16*)&a2[2 * v102 - 2];
      v107 = (__int16*)((char*)this_ + 2 * v19 + 8);
      do {
        *(_DWORD*)v106 = -32768 * *(v107 - 4);
        v106 -= 16;
        *(_DWORD*)&v105[2 * (v104 ^ 0x3FFFFFFFFFFFFFFELL)] =
            -32768 * *(v107 - 3);
        *(_DWORD*)&v105[2 * (v104 ^ 0xFFFFFFFFFFFFFFFDLL)] =
            -32768 * *(v107 - 2);
        *(_DWORD*)&v105[2 * (v104 ^ 0x3FFFFFFFFFFFFFFCLL)] =
            -32768 * *(v107 - 1);
        *(_DWORD*)&v105[2 * (v104 ^ 0xFFFFFFFFFFFFFFFBLL)] = -32768 * *v107;
        *(_DWORD*)&v105[2 * (v104 ^ 0x3FFFFFFFFFFFFFFALL)] = -32768 * v107[1];
        *(_DWORD*)&v105[2 * (v104 ^ 0xFFFFFFFFFFFFFFF9LL)] = -32768 * v107[2];
        v108 = v104 ^ 0x3FFFFFFFFFFFFFF8LL;
        v104 += 8;
        v109 = v107[3];
        v107 += 8;
        *(_DWORD*)&v105[2 * v108] = -32768 * v109;
      } while ((v78 & 0x7FFFFFF8) != v104);
    }
    else {
      v104 = 0;
    }
    if ((v78 & 7) != 0) {
      v110 = (__int16*)&a2[2 * v102 - 2 + -2 * v104];
      v111 = (__int16*)((char*)this_ + 2 * v104 + 2 * v19);
      do {
        v112 = *v111++;
        --v103;
        *(_DWORD*)v110 = -32768 * v112;
        v110 -= 2;
      } while (v103 != 0);
    }
  }
  if ((int)v17 <= 1) {
    goto LABEL_59;
  }
  v113 = 2 * v19;
  v114 = v19 / 2;
  v115 = (v17 >> 1) & 3;
  v116 = v78 + v19;
  if (((unsigned int)v17 >> 1) - 1 >= 3) {
    v118 = 0;
    v119 = (__int16*)(v22 + 8);
    v120 = (__int16*)((char*)this_ + 2 * v116 + 4);
    do {
      *(_DWORD*)&a2[2 * (v114 - v78) - 2 + 2 * (int)v118] =
          -(*(v119 - 3) * *((__int16*)this_ + v113 - v78 + (int)v118 - 1) +
            *(v119 - 4) * *(v120 - 2));
      *(_DWORD*)&a2[2 * (v114 - v78) - 4 + 2 * (int)v118] =
          -(*(v119 - 1) * *((__int16*)this_ + v113 - v78 + (int)v118 - 2) +
            *(v119 - 2) * *(v120 - 1));
      *(_DWORD*)&a2[2 * (v114 - v78) - 6 + 2 * (int)v118] =
          -(v119[1] * *((__int16*)this_ + v113 - v78 + (int)v118 - 3) +
            *v119 * *v120);
      v121 = v119[3];
      v122 = v120[1];
      v123 = v119[2];
      v120 += 4;
      v119 += 8;
      v124 =
          v121 * *((__int16*)this_ + v113 - v78 + (int)v118 - 4) + v123 * v122;
      v125 = v114 - v78 - 4 + v118;
      v118 -= 4;
      *(_DWORD*)&a2[2 * v125] = -v124;
    } while (-4LL * ((v17 >> 3) & 0xFFFFFFF) != v118);
    v117 = -v118;
    if (v115 == 0) {
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  v117 = 0;
  if (v115 != 0) {
  LABEL_57:
    v126 = ~(v78 + v117);
    v127 = v126 + v114;
    v128 = v126 + v113;
    v129 = (__int16*)(v22 + 4 * v117 + 2);
    v130 = (__int16*)((char*)this_ + 2 * v117 + 2 * v116);
    do {
      v131 = *((__int16*)this_ + v128);
      v132 = *v130++;
      --v128;
      --v115;
      v133 = *v129 * v131;
      v134 = *(v129 - 1);
      v129 += 2;
      *(_DWORD*)&a2[2 * v127--] = -(v133 + v134 * v132);
    } while (v115 != 0);
  }
LABEL_59:
  nn_codec_dct_IV_plt(a2, (unsigned int)v19, a7);
  *a5 = a4;
  return 0;
}

#pragma GCC visibility pop
