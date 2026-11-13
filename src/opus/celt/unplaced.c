#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ec_enc_uint(_QWORD, _QWORD, _QWORD);
__int64 frac_div32(int, unsigned int);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
extern _UNKNOWN* SdkData_e615a0;
unsigned __int64 opus_fft_impl(unsigned __int64 result, _DWORD*);
__int64 opus_celt_2de540(__int64 a1, signed int* a2, int a3,
                         unsigned __int64 a4);
__int64 opus_celt_2dfd80(__int64 a1, int a2, int a3, __int64 a4);
unsigned __int64 opus_celt_2e2a60(__int64 a1, __int64 a2, _DWORD* a3,
                                  unsigned __int64 a4, __int64 a5, int a6,
                                  int a7);

__int64 opus_celt_2de540(__int64 a1, signed int* a2, int a3,
                         unsigned __int64 a4)
{
  signed int v4;
  __int64 result;
  int* v6;
  int* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int* v16;
  __int64 v17;
  int* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  int* v31;
  int* v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  int* v40;
  int* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  int v47;
  int v48;
  unsigned __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  unsigned __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int* v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _DWORD* v64;
  _WORD* v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  int v70;
  _WORD* v71;
  int* v72;
  int v73;
  int* v76;
  __int64 v77;
  __int64 v78;
  _QWORD v79[10];

  v4 = *a2;
  v76 = a2;
  v77 = 0;
  memset(v79, 0, sizeof(v79));
  v78 = 0;
  result = memset_plt((void*)&v77, nullptr, 4 * a3, a4);
  if (v4 != 0) {
    v6 = v76;
    v7 = (int*)&v76 + 1;
    v8 = 1;
    v9 = 0;
    v10 = v76 - 1;
    while (1) {
      if (v8 >> 1 <= 1) {
        v11 = 1;
      }
      else {
        v11 = v8 >> 1;
      }
      if ((v9 + 1) >> 1 <= 1) {
        LOBYTE(v12) = 1;
      }
      else {
        v12 = (v9 + 1) >> 1;
      }
      if (v9 == (a3 & ~(a3 >> 31))) {
        goto LABEL_31;
      }
      if (v9 != 0) {
        break;
      }
      v15 = 0;
    LABEL_22:
      result = frac_div32((v76[v9 + 1] + v15) & 0xFFFFFFF8, v4);
      *((_DWORD*)&v77 + v9) = -(int)result >> 3;
      v36 = -(int)result >> 16;
      v37 = (unsigned __int16)-(__int16)result;
      v38 = 2 * v36;
      if (v9 != 0) {
        if (v9 >= 7) {
          v40 = (int*)&v78;
          v39 = 0;
          v41 = v7;
          do {
            v42 = *v41;
            v43 = *(v40 - 2);
            *(v40 - 2) = v43 + v38 * (*v41 >> 16) +
                         (((unsigned __int16)*v41 * v36) >> 15) +
                         (((*v41 >> 16) * v37) >> 15);
            v44 = v43 >> 16;
            v45 =
                v42 + v38 * (v43 >> 16) + (((unsigned __int16)v43 * v36) >> 15);
            v46 = v9 + (v39 ^ 0x3FFFFFFFFFFFFFFELL);
            *v41 = v45 + ((v44 * v37) >> 15);
            v41 -= 4;
            v47 = *((_DWORD*)&v77 + v46);
            v48 = *(v40 - 1);
            *(v40 - 1) = v48 + v38 * (v47 >> 16) +
                         (((unsigned __int16)v47 * v36) >> 15) +
                         (((v47 >> 16) * v37) >> 15);
            *((_DWORD*)&v77 + v46) = v47 + v38 * (v48 >> 16) +
                                     (((unsigned __int16)v48 * v36) >> 15) +
                                     (((v48 >> 16) * v37) >> 15);
            v49 = v9 + (v39 ^ 0xFFFFFFFFFFFFFFFDLL);
            v50 = *v40;
            v51 = *((_DWORD*)&v77 + v49);
            *v40 += v38 * (v51 >> 16) + (((unsigned __int16)v51 * v36) >> 15) +
                    (((v51 >> 16) * v37) >> 15);
            *((_DWORD*)&v77 + v49) = v51 + v38 * (v50 >> 16) +
                                     (((unsigned __int16)v50 * v36) >> 15) +
                                     (((v50 >> 16) * v37) >> 15);
            v52 = v39 ^ 0x3FFFFFFFFFFFFFFCLL;
            v39 += 4;
            v53 = v9 + v52;
            v54 = v40[1];
            v55 = *((_DWORD*)&v77 + v53);
            v40[1] = v54 + v38 * (v55 >> 16) +
                     (((unsigned __int16)v55 * v36) >> 15) +
                     (((v55 >> 16) * v37) >> 15);
            v40 += 4;
            result = (unsigned int)((v54 >> 16) * v37);
            *((_DWORD*)&v77 + v53) = v55 + v38 * (v54 >> 16) +
                                     (((unsigned __int16)v54 * v36) >> 15) +
                                     ((int)result >> 15);
          } while ((v11 & 0x7FFFFFFFFFFFFFFCLL) != v39);
        }
        else {
          v39 = 0;
        }
        if ((v12 & 3) != 0) {
          v56 = v11 & 3;
          v57 = -1 * v39;
          v58 = (int*)&v77 + v39;
          do {
            v59 = v7[v57];
            v60 = *v58;
            --v56;
            *v58++ += v38 * (v59 >> 16) +
                      (((unsigned __int16)v59 * v36) >> 15) +
                      (((v59 >> 16) * v37) >> 15);
            v7[v57--] = v59 + v38 * (v60 >> 16) +
                        (((unsigned __int16)v60 * v36) >> 15) +
                        (((v60 >> 16) * v37) >> 15);
          } while (v56 != 0);
        }
      }
      ++v10;
      ++v6;
      ++v8;
      ++v9;
      ++v7;
      v4 = v4 - 2 * (v4 >> 16) * ((v38 * v36 + 2 * ((v36 * v37) >> 15)) >> 16) -
           (((((v38 * v36 + 2 * ((v36 * v37) >> 15)) >> 16) *
              (unsigned __int16)v4) >>
             15) +
            ((((v38 * v36 + 2 * ((v36 * v37) >> 15)) & 0xFFFE) * (v4 >> 16)) >>
             15));
      if (v4 < *v76 >> 10) {
        goto LABEL_31;
      }
    }
    if (v9 >= 4) {
      v16 = (int*)&v78;
      v17 = 0;
      v14 = 0;
      v18 = v10;
      do {
        v17 -= 4;
        v19 = *(v16 - 2) >> 16;
        v20 = v18[1] >> 16;
        v21 = (unsigned __int16)v18[1] * v19;
        v22 = v14 + 2 * v19 * v20;
        v23 = *v18 >> 16;
        v24 = v22 + (v21 >> 15) + ((v20 * (unsigned __int16)*(v16 - 2)) >> 15) +
              2 * (*(v16 - 1) >> 16) * v23 +
              (((unsigned __int16)*v18 * (*(v16 - 1) >> 16)) >> 15);
        v26 = *(v18 - 2);
        v25 = *(v18 - 1);
        v18 -= 4;
        v27 = v24 + ((v23 * (unsigned __int16)*(v16 - 1)) >> 15);
        v28 = *v16;
        v29 = v16[1];
        v16 += 4;
        v14 = v27 + 2 * (v28 >> 16) * (v25 >> 16) +
              (((unsigned __int16)v25 * (v28 >> 16)) >> 15) +
              (((v25 >> 16) * (unsigned __int16)v28) >> 15) +
              2 * (v29 >> 16) * (v26 >> 16) +
              (((unsigned __int16)v26 * (v29 >> 16)) >> 15) +
              (((v26 >> 16) * (unsigned __int16)v29) >> 15);
      } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFFCLL) != v17);
      v13 = -v17;
      if ((v9 & 3) == 0) {
        goto LABEL_21;
      }
    }
    else {
      v13 = 0;
      v14 = 0;
      if ((v9 & 3) == 0) {
      LABEL_21:
        v15 = 8 * v14;
        goto LABEL_22;
      }
    }
    v30 = v9 & 3;
    v31 = &v6[-v13];
    v32 = (int*)&v77 + v13;
    do {
      v34 = *v32++;
      v33 = v34;
      v35 = *v31--;
      --v30;
      v14 += 2 * (v33 >> 16) * (v35 >> 16) +
             (((unsigned __int16)v35 * (v33 >> 16)) >> 15) +
             (((v35 >> 16) * (unsigned __int16)v33) >> 15);
    } while (v30 != 0);
    goto LABEL_21;
  }
LABEL_31:
  if (a3 >= 1) {
    v61 = a3 & 7;
    if ((unsigned int)a3 < 8) {
      v62 = 0;
      if ((a3 & 7) == 0) {
        return result;
      }
      goto LABEL_38;
    }
    v63 = 0;
    v64 = v79;
    v65 = (_WORD*)(a1 + 8);
    do {
      v63 -= 8;
      v66 = (unsigned int)(*(v64 - 3) + 0x8000) >> 16;
      *(v65 - 4) = (unsigned int)(*(v64 - 4) + 0x8000) >> 16;
      *(v65 - 3) = v66;
      v67 = (unsigned int)(*(v64 - 1) + 0x8000) >> 16;
      *(v65 - 2) = (unsigned int)(*(v64 - 2) + 0x8000) >> 16;
      *(v65 - 1) = v67;
      v68 = (unsigned int)(v64[1] + 0x8000) >> 16;
      *v65 = (unsigned int)(*v64 + 0x8000) >> 16;
      v65[1] = v68;
      v69 = v64[2];
      v70 = v64[3];
      v64 += 8;
      v65[2] = (unsigned int)(v69 + 0x8000) >> 16;
      v65[3] = (unsigned int)(v70 + 0x8000) >> 16;
      v65 += 8;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v63);
    v62 = -v63;
    if ((a3 & 7) != 0) {
    LABEL_38:
      v71 = (_WORD*)(a1 + 2 * v62);
      v72 = (int*)&v77 + v62;
      do {
        v73 = *v72++;
        --v61;
        *v71++ = (unsigned int)(v73 + 0x8000) >> 16;
      } while (v61 != 0);
    }
  }
  return result;
}

__int64 opus_celt_2dfd80(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  int* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned int v45;

  v4 = a2 - 1LL;
  v5 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  v6 = (unsigned int)v5 >> 31;
  if (v5 >= 0) {
    v7 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  }
  else {
    v7 = -v5;
  }
  if (v4 >= 1) {
    v8 = 1;
  }
  else {
    v8 = a2 - 1;
  }
  if ((((_BYTE)a2 - v8) & 1) != 0 &&
      ((v4 = a2 - 2LL, v7 >= 2) ? (v9 = 2) : (v9 = v7),
       v7 <= 2 ? (v10 = 2) : (v10 = v7),
       (v6 += *((_DWORD*)*(&SdkData_e615a0 + v9) + v10),
        (v11 = *(_DWORD*)(a1 + 4 * v4)) >= 0)
           ? (v12 = *(_DWORD*)(a1 + 4 * v4))
           : (v12 = -v11),
       v7 += v12, v11 < 0)) {
    if ((unsigned int)v7 < 2) {
      v20 = v7 + 1;
    }
    else {
      v20 = 2;
    }
    v21 = (__int64)*(&SdkData_e615a0 + v20);
    if (v7 + 1 > 2) {
      v22 = v7 + 1;
    }
    else {
      v22 = 2;
    }
    v6 += *(_DWORD*)(v21 + 4LL * v22);
    if (a2 < 3) {
      goto LABEL_19;
    }
  }
  else if (a2 < 3) {
    goto LABEL_19;
  }
  v23 = v4 + 2;
  v24 = a2 - v4 + 1;
  v25 = a2 - v4 + 2;
  v26 = a1 + 4 * v4 - 4;
  v27 = (int*)v26;
  do {
    if (v24 >= v7) {
      v28 = v7;
    }
    else {
      v28 = v24;
    }
    if (v24 <= v7) {
      v29 = v7;
    }
    else {
      v29 = v24;
    }
    v30 = *((_DWORD*)*(&SdkData_e615a0 + v28) + v29) + v6;
    v32 = *v27;
    v27 -= 2;
    v31 = v32;
    if (v32 >= 0) {
      v33 = v31;
    }
    else {
      v33 = -v31;
    }
    v34 = v33 + v7;
    if (v31 < 0) {
      if (v25 - 1 > (unsigned int)v34) {
        v35 = v34 + 1;
      }
      else {
        v35 = v24;
      }
      v36 = (__int64)*(&SdkData_e615a0 + v35);
      if (v24 <= v34 + 1) {
        v37 = v34 + 1;
      }
      else {
        v37 = v24;
      }
      v30 += *(_DWORD*)(v36 + 4LL * v37);
    }
    v38 = v24 + 1;
    v39 = *(_DWORD*)(v26 - 4);
    if (v24 + 1 < v34) {
      v40 = v24 + 1;
    }
    else {
      v40 = v34;
    }
    if (v38 > v34) {
      v41 = v24 + 1;
    }
    else {
      v41 = v34;
    }
    v6 = *((_DWORD*)*(&SdkData_e615a0 + v40) + v41) + v30;
    if (v39 >= 0) {
      v42 = v39;
    }
    else {
      v42 = -v39;
    }
    v7 = v42 + v34;
    if (v39 < 0) {
      if (v25 > (unsigned int)v7) {
        v43 = v7 + 1;
      }
      else {
        v43 = v24 + 1;
      }
      v44 = (__int64)*(&SdkData_e615a0 + v43);
      if (v38 <= v7 + 1) {
        v45 = v7 + 1;
      }
      else {
        v45 = v24 + 1;
      }
      v6 += *(_DWORD*)(v44 + 4LL * v45);
    }
    v23 -= 2;
    v24 += 2;
    v25 += 2LL;
    v26 = (__int64)v27;
  } while (v23 > 2);
LABEL_19:
  if (a2 >= a3) {
    v13 = a3;
  }
  else {
    v13 = a2;
  }
  if (a2 <= a3) {
    v14 = a3;
  }
  else {
    v14 = a2;
  }
  v15 = *((_DWORD*)*(&SdkData_e615a0 + v13) + v14);
  if (a2 >= a3 + 1) {
    v16 = a3 + 1;
  }
  else {
    v16 = a2;
  }
  v17 = (__int64)*(&SdkData_e615a0 + v16);
  if (a2 <= a3 + 1) {
    v18 = a3 + 1;
  }
  else {
    v18 = a2;
  }
  return ec_enc_uint(a4, v6, (unsigned int)(*(_DWORD*)(v17 + 4LL * v18) + v15));
}

unsigned __int64 opus_celt_2e2a60(__int64 a1, __int64 a2, _DWORD* a3,
                                  unsigned __int64 a4, __int64 a5, int a6,
                                  int a7)
{
  __int64 v7;
  __int16* v8;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  void* v22;
  __int64 v23;
  void* v24;
  unsigned __int64 v25;
  int v26;
  __int64 v27;
  char v28;
  __int64 v29;
  int v30;
  _DWORD* v31;
  int* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int16* v35;
  _DWORD* v36;
  __int16* v37;
  int v38;
  int v39;
  char v40;
  __int16* v41;
  int v42;
  __int16* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int16* v47;
  _DWORD* v48;
  __int64 v49;
  __int16* v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int* v58;
  int* v59;
  int v60;
  int v61;
  unsigned __int64 v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  unsigned __int64 v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  _DWORD* v77;
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
  unsigned __int64 result;
  int v91;
  int v92;
  int v93;
  int v94;
  unsigned __int64 v95;
  int v96;
  int v97;
  int* v98;
  int v99;
  int v100;
  unsigned __int64 v101;
  int* v102;
  unsigned __int64 v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  char v109;
  int v110;
  __int16* v111;
  __int16* v112;
  __int16* v113;
  int v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  int* v117;
  int v118;
  int v119;
  int* v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  int* v125;
  __int64 v126;
  int v127;
  int v128;
  int v129;
  int* v130;
  int v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int16* v140;
  int v141;
  __int16* v142;
  int v143;
  int v144;
  int v145;
  _DWORD* v146;
  __int64 v147;
  int v148;
  int v149;
  int v150;
  struct {
    __int64 v151;
    __int64 v152;
    __int64 v153;
    int v154;
    int v155;
    unsigned __int64 v156;
    __int64 v157;
  } v151_;

  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v7 = *(_QWORD*)(a1 + 40);
  v151_.v157 = a5;
  v8 = (__int16*)a4;
  v151_.v155 = a7;
  v11 = *(_QWORD*)(a1 + 8LL * a6 + 8);
  v12 = *(_DWORD*)a1;
  if (a6 >= 1) {
    v13 = a6 & 7;
    if ((unsigned int)a6 >= 8) {
      v14 = a6 & 0x7FFFFFF8;
      do {
        v14 -= 8;
        v15 = v7 + 2LL * (v12 >> 1) + 2LL * (v12 >> 2) + 2LL * (v12 >> 3) +
              2LL * (v12 >> 4) + 2LL * (v12 >> 5) + 2LL * (v12 >> 6);
        v16 = v12 >> 7;
        v12 >>= 8;
        v7 = v15 + 2LL * v16 + 2LL * v12;
      } while (v14 != 0);
    }
    if ((a6 & 7) != 0) {
      do {
        v12 >>= 1;
        --v13;
        v7 += 2LL * v12;
      } while (v13 != 0);
    }
  }
  v17 = *(_DWORD*)(v11 + 8);
  v18 = *(__int16*)(v11 + 4);
  v19 = (unsigned int)(v12 >> 2);
  v20 = (__int64)v12 >> 1;
  v151_.v156 = *(_QWORD*)(a1 + 8LL * a6 + 8);
  v151_.v154 = v17;
  v21 = 4LL * (v12 >> 1);
  v22 = __builtin_alloca((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v22, nullptr, 4 * (v12 >> 1), a4),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v23 = 8LL * (int)v19;
  v24 = __builtin_alloca((v23 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v24, nullptr, v23, v25),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v26 = v151_.v157;
  v27 = a2 + v21;
  v28 = v151_.v157 + 3;
  v29 = 4LL * ((int)v151_.v157 >> 1);
  v30 = ((int)v151_.v157 + 3) >> 2;
  v31 = (_DWORD*)(a2 + v29);
  v32 = (int*)(a2 + v21 + v29 - 4);
  if (v30 < 1) {
    v34 = v151_.v156;
    v38 = 0;
    v36 = (_DWORD*)v22;
    v39 = v19 - v30;
    if ((int)v19 - v30 > 0) {
      goto LABEL_21;
    }
  LABEL_12:
    v40 = v19 - v38;
    if ((int)v19 <= v38) {
      goto LABEL_27;
    }
    goto LABEL_13;
  }
  v33 = (__int64)(int)v151_.v157 >> 1;
  if (v30 == 1) {
    v34 = v151_.v156;
    v35 = &v8[v33];
    v36 = (_DWORD*)v22;
    v37 = v35 - 1;
    if ((((_BYTE)v151_.v157 + 3) & 4) == 0) {
      goto LABEL_20;
    }
  LABEL_19:
    v67 = *v37;
    v68 = *v35;
    v69 = *v32 * (__int64)v68;
    v70 = v32[-v20];
    v32 -= 2;
    v71 =
        (v69 >> 15) + ((unsigned __int64)((int)v31[v20] * (__int64)*v37) >> 15);
    LODWORD(v69) = *v31;
    v31 += 2;
    *v36 = v71;
    v36[1] = ((unsigned __int64)((int)v69 * (__int64)v68) >> 15) -
             ((unsigned __int64)(v70 * (__int64)v67) >> 15);
    v36 += 2;
    goto LABEL_20;
  }
  v44 = v30 & 0x7FFFFFFE;
  v45 = 4 * v33;
  v46 = v33;
  v151_.v152 = v20;
  v151_.v153 = v19;
  v47 = v8;
  v48 = (_DWORD*)v22;
  v49 = a2 - 12;
  v50 = v8 - 1;
  v51 = a2 + 4 * v20 + 8;
  do {
    v52 = v47[v33];
    v53 = *(_DWORD*)(v27 + v45 - 4);
    v54 = *(_DWORD*)(a2 + 4 * v33);
    v55 = v47[v46 + 2];
    v56 = *(_DWORD*)(v27 + v45 - 12);
    v57 = *(_DWORD*)(a2 + v45 + 8);
    v58 = (int*)(v51 + v45);
    v59 = (int*)(v49 + v45);
    a2 += 16;
    v44 -= 2;
    v51 += 16;
    v60 = v50[v33];
    v27 -= 16;
    v47 += 4;
    v61 = v50[v46 - 2];
    v49 -= 16;
    v50 -= 4;
    v62 = (unsigned __int64)(*(v58 - 2) * (__int64)v60) >> 15;
    v63 = ((unsigned __int64)(v56 * (__int64)v55) >> 15) +
          ((unsigned __int64)(*v58 * (__int64)v61) >> 15);
    v64 = ((unsigned __int64)(v54 * (__int64)v52) >> 15) -
          ((unsigned __int64)(v59[2] * (__int64)v60) >> 15);
    v65 = ((unsigned __int64)(v57 * (__int64)v55) >> 15) -
          ((unsigned __int64)(*v59 * (__int64)v61) >> 15);
    v36 = v48 + 4;
    *v48 = ((unsigned __int64)(v53 * (__int64)v52) >> 15) + v62;
    v48[1] = v64;
    v48[2] = v63;
    v48[3] = v65;
    v48 += 4;
  } while (v44 != 0);
  v20 = v151_.v152;
  v19 = v151_.v153;
  v34 = v151_.v156;
  v26 = v151_.v157;
  v66 = v27 + 4 * v33;
  v31 = (_DWORD*)(a2 + 4 * v33);
  v37 = &v50[v33];
  v35 = &v47[v33];
  v32 = (int*)(v66 - 4);
  if ((v28 & 4) != 0) {
    goto LABEL_19;
  }
LABEL_20:
  v38 = v30;
  v39 = v19 - v30;
  if (v30 >= (int)v19 - v30) {
    goto LABEL_12;
  }
LABEL_21:
  v72 = ((_BYTE)v19 - ((_BYTE)v30 + (_BYTE)v38)) & 7;
  if ((((_BYTE)v19 - ((_BYTE)v30 + (_BYTE)v38)) & 7) == 0) {
    v73 = v38;
    if ((unsigned int)(v30 - v19 + v38) > 0xFFFFFFF8) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v73 = v38 + v72;
  do {
    v75 = *v32;
    v32 -= 2;
    v74 = v75;
    v76 = *v31;
    v31 += 2;
    v77 = v36 + 2;
    --v72;
    *v36 = v74;
    v36[1] = v76;
    v36 += 2;
  } while (v72 != 0);
  v36 = v77;
  if ((unsigned int)(v30 - v19 + v38) <= 0xFFFFFFF8) {
    do {
    LABEL_25:
      v78 = *v31;
      v79 = *(v32 - 4);
      v73 += 8;
      v80 = *(v32 - 2);
      v81 = v31[2];
      *v36 = *v32;
      v36[1] = v78;
      v82 = v31[4];
      v83 = *(v32 - 6);
      v36[2] = v80;
      v36[3] = v81;
      v36[4] = v79;
      v36[5] = v82;
      v84 = v31[6];
      v36[6] = v83;
      v36[7] = v84;
      v85 = v31[8];
      v36[8] = *(v32 - 8);
      v36[9] = v85;
      v86 = v31[10];
      v36[10] = *(v32 - 10);
      v36[11] = v86;
      v87 = v31[12];
      v36[12] = *(v32 - 12);
      v36[13] = v87;
      v88 = *(v32 - 14);
      v89 = v31[14];
      v31 += 16;
      v32 -= 16;
      v36[14] = v88;
      v36[15] = v89;
      v36 += 16;
    } while (v73 < v39);
  }
LABEL_26:
  v38 = v39;
  v40 = v19 - v39;
  if ((int)v19 <= v39) {
  LABEL_27:
    if ((int)v19 <= 0) {
      return opus_fft_impl(v34, v24);
    }
    goto LABEL_32;
  }
LABEL_13:
  v41 = &v8[v26];
  v42 = v38 + 1;
  if ((v40 & 1) != 0) {
    v91 = *v8;
    v8 += 2;
    v92 = *(v41 - 1);
    v43 = v41 - 3;
    v93 = ((unsigned __int64)(*v32 * (__int64)v92) >> 15) -
          ((unsigned __int64)((int)v31[-v20] * (__int64)v91) >> 15);
    v94 = *v31;
    v31 += 2;
    v95 = v94 * (__int64)v92;
    v96 = v32[v20];
    v32 -= 2;
    *v36 = v93;
    v36[1] = ((unsigned __int64)(v96 * (__int64)v91) >> 15) + (v95 >> 15);
    v36 += 2;
    ++v38;
    if ((_DWORD)v19 == v42) {
      goto LABEL_32;
    }
  }
  else {
    v43 = v41 - 1;
    if ((_DWORD)v19 == v42) {
      goto LABEL_32;
    }
  }
  v97 = v19 - v38;
  v98 = v31 + 2;
  do {
    v99 = *v8;
    v100 = *v43;
    v97 -= 2;
    *v36 = ((unsigned __int64)(*v32 * (__int64)*v43) >> 15) -
           ((unsigned __int64)(v98[-v20 - 2] * (__int64)*v8) >> 15);
    v101 = *(v98 - 2) * (__int64)v100;
    v102 = &v32[v20 - 2];
    v103 = v32[v20] * (__int64)v99;
    v104 = *(v32 - 2);
    v32 -= 4;
    v36[1] = (v103 >> 15) + (v101 >> 15);
    LODWORD(v103) = v8[2];
    LODWORD(v101) = *(v43 - 2);
    v8 += 4;
    v43 -= 4;
    v36[2] = ((unsigned __int64)(v104 * (__int64)(int)v101) >> 15) -
             ((unsigned __int64)(v98[-v20] * (__int64)(int)v103) >> 15);
    v105 = *v98;
    v98 += 4;
    v36[3] = ((unsigned __int64)(*v102 * (__int64)(int)v103) >> 15) +
             ((unsigned __int64)(v105 * (__int64)(int)v101) >> 15);
    v36 += 4;
  } while (v97 != 0);
LABEL_32:
  v106 = *(_QWORD*)(v34 + 48);
  v107 = v7 + 2LL * (unsigned int)v19;
  v108 = 0;
  v109 = v151_.v154 - 1;
  v110 = 1 << (v151_.v154 - 1) >> 1;
  if (v19 != 1) {
    v111 = (__int16*)(v106 + 2);
    v112 = (__int16*)(v7 + 2);
    v113 = (__int16*)(v7 + 2LL * (unsigned int)v19);
    do {
      v114 = *((_DWORD*)v22 + 1);
      v108 -= 2;
      v115 = v18 *
             (__int64)(int)(((unsigned __int64)(*(int*)v22 *
                                                (__int64)*(v112 - 1)) >>
                             15) -
                            ((unsigned __int64)(v114 * (__int64)*v113) >> 15));
      v116 = v18 *
             (__int64)(int)(((unsigned __int64)(v114 * (__int64)*(v112 - 1)) >>
                             15) +
                            ((unsigned __int64)(*(int*)v22 * (__int64)*v113) >>
                             15));
      v117 = (int*)((char*)v24 + 8 * *(v111 - 1));
      v118 = *((_DWORD*)v22 + 2);
      v119 = *((_DWORD*)v22 + 3);
      *v117 = (int)(v110 + (v115 >> 16)) >> v109;
      v117[1] = (int)(v110 + (v116 >> 16)) >> v109;
      v120 = (int*)((char*)v22 + 16);
      LODWORD(v115) = *v112;
      LODWORD(v117) = v113[1];
      v113 += 2;
      v112 += 2;
      v22 = (void*)((char*)v22 + 16);
      v121 = v118 * (__int64)(int)v115;
      v122 = v119 * (__int64)(int)v117;
      v123 = v118 * (__int64)(int)v117;
      v124 = *v111;
      v111 += 2;
      v125 = (int*)((char*)v24 + 8 * v124);
      *v125 = (int)(v110 +
                    ((unsigned __int64)(v18 * (__int64)(int)((v121 >> 15) -
                                                             (v122 >> 15))) >>
                     16)) >>
              v109;
      v125[1] =
          (int)(v110 +
                ((unsigned __int64)(v18 *
                                    (__int64)(int)(((unsigned __int64)(v119 *
                                                                       (__int64)(int)
                                                                           v115) >>
                                                    15) +
                                                   (v123 >> 15))) >>
                 16)) >>
          v109;
    } while (-(v19 & 0x7FFFFFFE) != v108);
    v108 = -v108;
    v22 = (void*)v120;
  }
  if ((v19 & 1) != 0) {
    v126 = 2 * v108;
    v127 = *((_DWORD*)v22 + 1);
    v128 =
        (int)(v110 +
              ((unsigned __int64)(v18 *
                                  (__int64)(int)(((unsigned __int64)(*(int*)
                                                                         v22 *
                                                                     (__int64)*(
                                                                         __int16*)(v7 +
                                                                                   v126)) >>
                                                  15) -
                                                 ((unsigned __int64)(v127 *
                                                                     (__int64)*(
                                                                         __int16*)(v107 +
                                                                                   v126)) >>
                                                  15))) >>
               16)) >>
        v109;
    v129 =
        (int)(v110 +
              ((unsigned __int64)(v18 *
                                  (__int64)(int)(((unsigned __int64)(v127 *
                                                                     (__int64)*(
                                                                         __int16*)(v7 +
                                                                                   v126)) >>
                                                  15) +
                                                 ((unsigned __int64)(*(int*)
                                                                         v22 *
                                                                     (__int64)*(
                                                                         __int16*)(v107 +
                                                                                   v126)) >>
                                                  15))) >>
               16)) >>
        v109;
    v130 = (int*)((char*)v24 + 8 * *(__int16*)(v106 + v126));
    *v130 = v128;
    v130[1] = v129;
  }
  result = opus_fft_impl(v34, v24),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v131 = (v20 - 1) * v151_.v155;
  if (v19 == 1) {
    v134 = 0;
    v146 = &a3[v131];
  LABEL_42:
    v147 = 2 * v134;
    v149 = *(_DWORD*)v24;
    v148 = *((_DWORD*)v24 + 1);
    v150 = *(__int16*)(v107 + v147);
    LODWORD(v147) = *(__int16*)(v7 + v147);
    *a3 = ((unsigned __int64)(v148 * (__int64)v150) >> 15) -
          ((unsigned __int64)(*(int*)v24 * (__int64)(int)v147) >> 15);
    *v146 = ((unsigned __int64)(v149 * (__int64)v150) >> 15) +
            ((unsigned __int64)((int)v147 * (__int64)v148) >> 15);
    return result;
  }
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 2 * v151_.v155;
  v136 = 4LL * v131;
  v137 = 8 * v135;
  v138 = 4 * v135;
  v139 = v136 - 4 * v135;
  do {
    v140 = (__int16*)(v107 + v133);
    v141 = *((_DWORD*)v24 + 1);
    v142 = (__int16*)(v7 + v133);
    v134 += 2;
    v133 += 4;
    v143 = ((unsigned __int64)(*(int*)v24 * (__int64)*v140) >> 15) +
           ((unsigned __int64)(*v142 * (__int64)v141) >> 15);
    *(_DWORD*)((char*)a3 + v132) =
        ((unsigned __int64)(v141 * (__int64)*v140) >> 15) -
        ((unsigned __int64)(*(int*)v24 * (__int64)*v142) >> 15);
    *(_DWORD*)((char*)a3 + v136) = v143;
    v145 = *((_DWORD*)v24 + 2);
    v144 = *((_DWORD*)v24 + 3);
    v24 = (void*)((char*)v24 + 16);
    v136 -= v137;
    v132 += v137;
    LODWORD(v140) = v140[1];
    result = (unsigned __int64)(v144 * (__int64)(int)v140) >> 15;
    LODWORD(v140) = ((unsigned __int64)(v145 * (__int64)(int)v140) >> 15) +
                    ((unsigned __int64)(v142[1] * (__int64)v144) >> 15);
    *(_DWORD*)((char*)a3 + v138) =
        result - ((unsigned __int64)(v145 * (__int64)v142[1]) >> 15);
    *(_DWORD*)((char*)a3 + v139) = (_DWORD)v140;
    v139 -= v137;
    v138 += v137;
  } while (((2 * (_DWORD)v19) & 0xFFFFFFFC) != v133);
  v146 = (_DWORD*)((char*)a3 + v136);
  a3 = (_DWORD*)((char*)a3 + v132);
  if ((v19 & 1) != 0) {
    goto LABEL_42;
  }
  return result;
}

#pragma GCC visibility pop
