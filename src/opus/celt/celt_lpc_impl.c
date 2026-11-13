#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_pitch_xcorr_c(__int16*, __int64, __int64, int, unsigned int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 xcorr_kernel_c(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 celt_fir_c(__int64 a1, __int64 a2, __int64 a3, int a4, int a5);
__int64 _celt_autocorr(__int16* a1, signed int* a2, __int64 a3, unsigned int a4,
                       int a5, int a6);

__int64 celt_fir_c(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7;
  __int64 v8;
  char* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _WORD* v17;
  __int16* v18;
  __int16 v19;
  __int64 v20;
  char* v21;
  __int16* v22;
  __int16 v23;
  __int64 v24;
  __int16* v25;
  _WORD* v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int16* v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char* v42;
  __int64 v43;
  int v44;
  int v45;
  int i;
  __int64 v47;
  __int64 v48;
  _WORD* v49;
  _WORD* v50;
  __int16 v51;
  int v52;
  int v53;
  int v54;
  int v55;

  v7 = 2LL * a5;
  v8 = a5;
  v12 = (char*)&v52 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  result = memset_plt(v12, 0, v7);
  if (a5 >= 1) {
    v14 = a5 & 7;
    if ((unsigned int)a5 >= 8) {
      v16 = a2 + 2 * v8;
      v17 = v12 + 8;
      v15 = 0;
      v18 = (__int16*)(v16 - 2);
      do {
        v19 = *v18;
        v18 -= 8;
        *(v17 - 4) = v19;
        *(v17 - 3) = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFELL));
        *(v17 - 2) = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFFDLL));
        *(v17 - 1) = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFCLL));
        *v17 = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFFBLL));
        v17[1] = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFALL));
        v17[2] = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFF9LL));
        v20 = v15 ^ 0x7FFFFFFFFFFFFFF8LL;
        v15 += 8;
        v17[3] = *(_WORD*)(v16 + 2 * v20);
        v17 += 8;
      } while ((a5 & 0x7FFFFFF8) != v15);
    }
    else {
      v15 = 0;
    }
    if ((a5 & 7) != 0) {
      v21 = &v12[2 * v15];
      v22 = (__int16*)(a2 - 2 * v15 + 2 * v8 - 2);
      do {
        v23 = *v22--;
        --v14;
        *(_WORD*)v21 = v23;
        v21 += 2;
      } while (v14 != 0);
    }
  }
  if (a4 < 4) {
    v27 = 0;
    v32 = -a4;
    if (a4 <= 0) {
      return result;
    }
  }
  else {
    v24 = a1 - 2 * v8;
    v25 = (__int16*)(a1 + 4);
    v26 = (_WORD*)(a3 + 4);
    v27 = 0;
    do {
      v28 = *(v25 - 1) << 12;
      v52 = *(v25 - 2) << 12;
      v53 = v28;
      v29 = v25[1] << 12;
      v54 = *v25 << 12;
      v55 = v29;
      result = xcorr_kernel_c(v12, v24, &v52, (unsigned int)a5);
      v24 += 8;
      v27 += 4;
      v25 += 4;
      v30 = (unsigned int)(v53 + 2048) >> 12;
      *(v26 - 2) = (unsigned int)(v52 + 2048) >> 12;
      *(v26 - 1) = v30;
      v31 = v55;
      *v26 = (unsigned int)(v54 + 2048) >> 12;
      v26[1] = (unsigned int)(v31 + 2048) >> 12;
      v26 += 4;
    } while (a4 - 3 > v27);
    v32 = v27 - a4;
    if (v27 >= a4) {
      return result;
    }
  }
  v33 = (unsigned int)v27;
  if (a5 <= 0) {
    for (i = ((_BYTE)a4 - (_BYTE)v27) & 7; i != 0;
         *(_WORD*)(a3 + v47) = *(_WORD*)(a1 + v47)) {
      v47 = 2 * v33++;
      --i;
    }
    if (v32 <= 0xFFFFFFF8) {
      v48 = 2 * v33 + 8;
      v49 = (_WORD*)(a3 + v48);
      v50 = (_WORD*)(a1 + v48);
      do {
        LODWORD(v33) = v33 + 8;
        *(v49 - 4) = *(v50 - 4);
        *(v49 - 3) = *(v50 - 3);
        *(v49 - 2) = *(v50 - 2);
        *(v49 - 1) = *(v50 - 1);
        *v49 = *v50;
        v49[1] = v50[1];
        v49[2] = v50[2];
        v51 = v50[3];
        v50 += 8;
        v49[3] = v51;
        v49 += 8;
      } while (a4 > (int)v33);
    }
  }
  else {
    v34 = v27 - a5;
    do {
      v35 = *(__int16*)(a1 + 2 * v33) << 12;
      if ((unsigned int)a5 >= 8) {
        v36 = 0;
        v37 = (__int16*)(v12 + 8);
        do {
          v38 = v34 + v36;
          v36 += 8;
          v39 = v35 + *(__int16*)(a1 + 2LL * v38) * *(v37 - 4) +
                *(__int16*)(a1 + 2LL * (v38 + 1)) * *(v37 - 3) +
                *(__int16*)(a1 + 2LL * (v38 + 2)) * *(v37 - 2) +
                *(__int16*)(a1 + 2LL * (v38 + 3)) * *(v37 - 1) +
                *(__int16*)(a1 + 2LL * (v38 + 4)) * *v37 +
                *(__int16*)(a1 + 2LL * (v38 + 5)) * v37[1] +
                *(__int16*)(a1 + 2LL * (v38 + 6)) * v37[2];
          v40 = v37[3];
          v37 += 8;
          v35 = v39 + *(__int16*)(a1 + 2LL * (v38 + 7)) * v40;
        } while ((a5 & 0x7FFFFFF8) != v36);
      }
      else {
        v36 = 0;
      }
      if ((a5 & 7) != 0) {
        v41 = v34 + v36;
        v42 = &v12[2 * v36];
        v43 = a5 & 7;
        do {
          v44 = *(__int16*)(a1 + 2LL * v41);
          v45 = *(__int16*)v42;
          v42 += 2;
          ++v41;
          --v43;
          v35 += v44 * v45;
        } while (v43 != 0);
      }
      ++v34;
      *(_WORD*)(a3 + 2 * v33++) = (unsigned int)(v35 + 2048) >> 12;
    } while (a4 > (int)v33);
  }
  return result;
}

__int64 _celt_autocorr(__int16* a1, signed int* a2, __int64 a3, unsigned int a4,
                       int a5, int a6)
{
  __int64 v8;
  __int16* v13;
  __int16* v14;
  __int64 v15;
  __int64 v16;
  __int16* v17;
  __int16* v18;
  __int64 v19;
  _WORD* v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int16* v40;
  unsigned int v41;
  int v42;
  char v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  unsigned int v48;
  _WORD* v49;
  __int16* v50;
  __int64 v51;
  int v52;
  __int16* v53;
  __int16* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int16* v63;
  unsigned int v64;
  __int16* v65;
  int v66;
  int v67;
  int v68;
  __int64 v69;
  int v70;
  __int16* v71;
  __int16* v72;
  int v73;
  int v74;
  int v75;
  signed int v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  signed int* v83;
  __int64 v84;
  signed int v85;
  signed int v86;
  signed int v87;
  signed int v88;
  signed int* v89;
  signed int* v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int* v96;

  v8 = 2LL * a6;
  v13 = (__int16*)__builtin_alloca((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v13, 0, v8);
  if (a4 == 0) {
    v14 = a1;
    goto LABEL_15;
  }
  if (a6 >= 1) {
    memcpy_plt(v13, a1, (unsigned int)(2 * a6));
  }
  v14 = v13;
  if ((int)a4 >= 1) {
    v15 = a4 & 3;
    if (a4 < 4) {
      v16 = 0;
      v14 = v13;
      if ((a4 & 3) == 0) {
        goto LABEL_15;
      }
      goto LABEL_12;
    }
    v17 = a1 + 2;
    v18 = (__int16*)(a3 + 4);
    v19 = 0;
    v20 = v13 + 2;
    do {
      v21 = *(v18 - 2);
      v22 = 2LL * (a6 - 1 + (int)v19);
      v23 = v21 * *(v17 - 2);
      v24 = *(__int16*)((char*)a1 + v22) * v21;
      v25 = *(v17 - 1);
      *(v20 - 2) = v23 >> 15;
      v26 = *(v18 - 1);
      *(__int16*)((char*)v13 + v22) = v24 >> 15;
      v27 = 2LL * (a6 - 2 + (int)v19);
      LODWORD(v22) = *(__int16*)((char*)a1 + v27);
      *(v20 - 1) = (unsigned int)(v26 * v25) >> 15;
      v28 = *v18;
      v29 = v22 * v26;
      LODWORD(v22) = *v17;
      *(__int16*)((char*)v13 + v27) = v29 >> 15;
      v30 = 2LL * (a6 - 3 + (int)v19);
      LODWORD(v27) = *(__int16*)((char*)a1 + v30);
      *v20 = (unsigned int)(v28 * v22) >> 15;
      LODWORD(v22) = v17[1];
      v17 += 4;
      *(__int16*)((char*)v13 + v30) = (unsigned int)(v27 * v28) >> 15;
      LODWORD(v30) = v18[1];
      v18 += 4;
      v20[1] = (unsigned int)(v30 * v22) >> 15;
      LODWORD(v27) = a6 - 4 + v19;
      v19 -= 4;
      v20 += 4;
      v13[(int)v27] = (unsigned int)(a1[(int)v27] * (_DWORD)v30) >> 15;
    } while (-(__int64)(a4 & 0x7FFFFFFC) != v19);
    v16 = -v19;
    v14 = v13;
    if ((a4 & 3) != 0) {
    LABEL_12:
      v31 = ~(_DWORD)v16;
      v32 = v16;
      v33 = v31 + a6;
      do {
        v34 = *(__int16*)(a3 + v32 * 2);
        --v15;
        v13[v32] = (unsigned int)(v34 * a1[v32]) >> 15;
        v35 = v33--;
        ++v32;
        v13[v35] = (unsigned int)(a1[v35] * v34) >> 15;
      } while (v15 != 0);
      v14 = v13;
    }
  }
LABEL_15:
  v36 = (a6 << 7) | 1;
  if ((a6 & 1) != 0) {
    v36 += (unsigned int)(*v14 * *v14) >> 9;
  }
  v37 = a6 - a5;
  v38 = a6;
  if (a6 >= 2) {
    v39 = a6 & 1;
    v40 = &v14[v39 + 1];
    do {
      v39 += 2;
      v41 = v36 + ((unsigned int)(*(v40 - 1) * *(v40 - 1)) >> 9);
      v42 = *v40;
      v40 += 2;
      v36 = v41 + ((unsigned int)(v42 * v42) >> 9);
    } while (v39 < a6);
  }
  if (v36 < 0x400000) {
    v48 = 0;
    v13 = v14;
    goto LABEL_32;
  }
  v43 = 11 - __clz(v36);
  v44 = (char)(v43 + (v43 < 0)) >> 1;
  if (a6 >= 1) {
    v45 = a6 & 7;
    v46 = (unsigned int)(1 << v44) >> 1;
    if ((unsigned int)a6 >= 8) {
      v49 = v13 + 4;
      v50 = v14 + 4;
      v51 = 0;
      do {
        v51 -= 8;
        *(v49 - 4) = (int)(v46 + *(v50 - 4)) >> v44;
        *(v49 - 3) = (int)(v46 + *(v50 - 3)) >> v44;
        *(v49 - 2) = (int)(v46 + *(v50 - 2)) >> v44;
        *(v49 - 1) = (int)(v46 + *(v50 - 1)) >> v44;
        *v49 = (int)(v46 + *v50) >> v44;
        v49[1] = (int)(v46 + v50[1]) >> v44;
        v49[2] = (int)(v46 + v50[2]) >> v44;
        v52 = v50[3];
        v50 += 8;
        v49[3] = (int)(v46 + v52) >> v44;
        v49 += 8;
      } while (-(__int64)(a6 & 0x7FFFFFF8) != v51);
      v47 = -v51;
      if ((a6 & 7) == 0) {
        goto LABEL_31;
      }
    }
    else {
      v47 = 0;
      if ((a6 & 7) == 0) {
        goto LABEL_31;
      }
    }
    v53 = &v13[v47];
    v54 = &v14[v47];
    do {
      v55 = *v54++;
      --v45;
      *v53++ = (int)(v46 + v55) >> v44;
    } while (v45 != 0);
  }
LABEL_31:
  v48 = 2 * v44;
LABEL_32:
  v56 = (unsigned int)(a5 + 1);
  celt_pitch_xcorr_c(v13, (__int64)v13, (__int64)a2, v37, a5 + 1);
  if ((a5 & 0x80000000) == 0) {
    v57 = v38 - v37;
    v58 = 0;
    v59 = 0;
    v60 = a5;
    do {
      if (v59 >= v57) {
        v61 = 0;
      }
      else {
        v62 = v37;
        if ((unsigned int)(v59 - a5) <= 0xFFFFFFF8) {
          v63 = &v13[v37 + 4];
          v64 = v60 & 0xFFFFFFF8;
          v61 = 0;
          v65 = &v13[v58 + v37];
          do {
            v62 += 8;
            v64 -= 8;
            v66 = v61 + *v65 * *(v63 - 4) + v65[1] * *(v63 - 3) +
                  v65[2] * *(v63 - 2) + v65[3] * *(v63 - 1) + v65[4] * *v63 +
                  v65[5] * v63[1] + v65[6] * v63[2];
            v67 = v63[3];
            v68 = v65[7];
            v65 += 8;
            v63 += 8;
            v61 = v66 + v68 * v67;
          } while (v64 != 0);
        }
        else {
          v61 = 0;
        }
        if ((((_BYTE)a5 - (_BYTE)v59) & 7) != 0) {
          v69 = v62 + v58;
          v70 = v60 & 7;
          v71 = &v13[v62];
          v72 = &v13[v69];
          do {
            v74 = *v71++;
            v73 = v74;
            v75 = *v72++;
            --v70;
            v61 += v75 * v73;
          } while (v70 != 0);
        }
      }
      ++v37;
      --v60;
      --v58;
      a2[v59++] += v61;
    } while (v59 != v56);
  }
  v76 = *a2;
  if (v48 != 0) {
    if (v76 <= 0xFFFFFFF) {
      goto LABEL_47;
    }
  }
  else {
    *a2 = ++v76;
    if (v76 <= 0xFFFFFFF) {
    LABEL_47:
      v77 = __clz(v76) - 3;
      if ((a5 & 0x80000000) == 0) {
        v78 = ((_BYTE)a5 + 1) & 7;
        if ((unsigned int)v56 >= 8) {
          v83 = a2 + 4;
          v84 = 0;
          do {
            v84 -= 8;
            v85 = *(v83 - 3) << v77;
            *(v83 - 4) <<= v77;
            *(v83 - 3) = v85;
            v86 = *(v83 - 1) << v77;
            *(v83 - 2) <<= v77;
            *(v83 - 1) = v86;
            v87 = v83[1] << v77;
            *v83 <<= v77;
            v83[1] = v87;
            v88 = v83[3] << v77;
            v83[2] <<= v77;
            v83[3] = v88;
            v83 += 8;
          } while (-(__int64)((unsigned int)v56 & 0xFFFFFFF8) != v84);
          v79 = -v84;
          if ((((_BYTE)a5 + 1) & 7) == 0) {
            goto LABEL_65;
          }
        }
        else {
          v79 = 0;
          if ((((_BYTE)a5 + 1) & 7) == 0) {
            goto LABEL_65;
          }
        }
        v89 = &a2[v79];
        do {
          --v78;
          *v89++ <<= v77;
        } while (v78 != 0);
      }
    LABEL_65:
      v48 -= v77;
      return v48;
    }
  }
  if ((unsigned int)v76 >> 29 != 0) {
    if ((unsigned int)v76 >> 30 != 0) {
      v80 = 2;
    }
    else {
      v80 = 1;
    }
    if (a5 < 0) {
      goto LABEL_71;
    }
    v81 = ((_BYTE)a5 + 1) & 7;
    if ((unsigned int)v56 >= 8) {
      v90 = a2 + 4;
      v91 = 0;
      do {
        v91 -= 8;
        v92 = *(v90 - 3) >> v80;
        *(v90 - 4) >>= v80;
        *(v90 - 3) = v92;
        v93 = *(v90 - 1) >> v80;
        *(v90 - 2) >>= v80;
        *(v90 - 1) = v93;
        v94 = v90[1] >> v80;
        *v90 >>= v80;
        v90[1] = v94;
        v95 = v90[3] >> v80;
        v90[2] >>= v80;
        v90[3] = v95;
        v90 += 8;
      } while (-(__int64)((unsigned int)v56 & 0xFFFFFFF8) != v91);
      v82 = -v91;
      if ((((_BYTE)a5 + 1) & 7) == 0) {
        goto LABEL_71;
      }
    }
    else {
      v82 = 0;
      if ((((_BYTE)a5 + 1) & 7) == 0) {
      LABEL_71:
        v48 += v80;
        return v48;
      }
    }
    v96 = &a2[v82];
    do {
      --v81;
      *v96++ >>= v80;
    } while (v81 != 0);
    goto LABEL_71;
  }
  return v48;
}

#pragma GCC visibility pop
