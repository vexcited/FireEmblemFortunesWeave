#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_694e0(int*, __int64, int, _BYTE*, int, int, __int64,
                           unsigned int, unsigned int, unsigned int,
                           unsigned int, __int64, int);
__int64 downmix_float();
__int64 lrint_plt(_QWORD, double);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_encoder_68dc0(__int64 result, __int64 a2, unsigned int a3, int a4,
                           int a5, unsigned int a6, int a7);
__int64 opus_encoder_6c8a0(__int64 result, __int64 a2, __int64 a3,
                           unsigned int a4, int a5, int a6);
__int64 opus_encoder_6cc20(__int64 result, __int64 a2, __int16 a3, __int16 a4,
                           int a5, int a6, int a7, __int16* a8, int a9);
__int16* opus_encoder_6d020(__int16* result, __int16* a2, __int16 a3,
                            __int16 a4, int a5, unsigned int a6, int a7,
                            __int16* a8, int a9);
__int64 opus_encode_float(int* a1, __int64 a2, signed int a3, _BYTE* a4,
                          int a5);
__int64 opus_encode(int* a1, __int64 a2, int a3, _BYTE* a4, int a5);

__int64 opus_encoder_68dc0(__int64 result, __int64 a2, unsigned int a3, int a4,
                           int a5, unsigned int a6, int a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int16* v13;
  __int16* v14;
  int v15;
  __int16* v16;
  int v17;
  __int16* v18;
  int v19;
  __int16* v20;
  int v21;
  __int16* v22;
  int v23;
  __int16* v24;
  _DWORD* v25;
  __int16* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  int* v40;
  __int16* v41;
  int v42;
  __int16* v43;
  int v44;
  __int16* v45;
  int v46;
  int v47;
  __int16* v48;
  int v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int16* v55;
  int v56;
  __int16* v57;
  int v58;
  int v59;
  int v60;
  _DWORD* v61;
  __int64 v62;
  int v63;
  int* v64;
  __int64 v65;
  __int64 v66;
  __int16* v67;
  int v68;
  __int16* v69;
  int v70;
  __int16* v71;
  int v72;
  int v73;
  __int16* v74;
  int v75;
  __int16* v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int16* v81;
  int v82;
  __int16* v83;
  int v84;
  int v85;
  int v86;
  _DWORD* v87;
  __int16* v88;
  int v89;

  if ((int)a3 < 1) {
    return result;
  }
  v7 = a5;
  v8 = a3 & 7;
  v9 = a7;
  if (a3 < 8) {
    v10 = 0;
    if ((a3 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v11 = (_DWORD*)(a2 + 16);
  v12 = 0;
  v13 = (__int16*)(result + 2 * a7 * (__int64)a4 + 2LL * a5);
  do {
    v12 -= 8;
    *(v11 - 4) = *v13;
    v14 = &v13[a7];
    v13 += 8 * a7;
    v15 = *v14;
    v16 = &v14[v9];
    *(v11 - 3) = v15;
    v17 = *v16;
    v18 = &v16[v9];
    *(v11 - 2) = v17;
    v19 = *v18;
    v20 = &v18[v9];
    *(v11 - 1) = v19;
    v21 = *v20;
    v22 = &v20[v9];
    *v11 = v21;
    v23 = *v22;
    v24 = &v22[v9];
    v11[1] = v23;
    v11[2] = *v24;
    v11[3] = v24[a7];
    v11 += 8;
  } while (-(__int64)(a3 & 0x7FFFFFF8) != v12);
  v10 = -v12;
  if ((a3 & 7) != 0) {
  LABEL_8:
    v25 = (_DWORD*)(a2 + 4 * v10);
    v26 = (__int16*)(result + 2 * (v10 + a4) * a7 + 2 * v7);
    do {
      v27 = *v26;
      v26 = (__int16*)((char*)v26 + v9 * 2);
      --v8;
      *v25++ = v27;
    } while (v8 != 0);
  }
LABEL_10:
  if ((a6 & 0x80000000) != 0) {
    if (a6 != -2 || a7 < 2) {
      return result;
    }
    v32 = a4;
    v33 = (unsigned int)a7;
    v34 = (__int16*)(result + 2);
    v35 = 16LL * (unsigned int)a7;
    v36 = 2LL * (unsigned int)a7;
    v37 = 1;
    v38 = result + 2 + 2 * a4 * (unsigned __int64)(unsigned int)a7;
    while (a3 < 8) {
      result = 0;
      if ((a3 & 7) != 0) {
        goto LABEL_24;
      }
    LABEL_17:
      ++v37;
      v38 += 2LL;
      ++v34;
      if (v37 == v33) {
        return result;
      }
    }
    v39 = 0;
    v40 = (int*)(a2 + 16);
    v41 = (__int16*)v38;
    do {
      v42 = *(v40 - 3);
      v39 -= 8;
      *(v40 - 4) += *v41;
      v43 = &v41[v33];
      v41 = (__int16*)((char*)v41 + v35);
      v44 = *v43;
      v45 = &v43[(unsigned __int64)v36 / 2];
      *(v40 - 3) = v42 + v44;
      v46 = *(v40 - 1);
      v47 = *v45;
      v48 = &v45[(unsigned __int64)v36 / 2];
      *(v40 - 2) += v47;
      v49 = *v48;
      v50 = &v48[(unsigned __int64)v36 / 2];
      v51 = v46 + v49;
      v52 = *v40;
      v53 = v40[1];
      *(v40 - 1) = v51;
      v54 = *v50;
      v55 = &v50[(unsigned __int64)v36 / 2];
      *v40 = v52 + v54;
      v56 = *v55;
      v57 = &v55[(unsigned __int64)v36 / 2];
      v58 = v53 + v56;
      v59 = v40[2];
      v60 = v40[3];
      v40[1] = v58;
      v40[2] = v59 + *v57;
      v40[3] = v60 + v57[(unsigned __int64)v36 / 2];
      v40 += 8;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v39);
    result = -v39;
    if ((a3 & 7) == 0) {
      goto LABEL_17;
    }
  LABEL_24:
    v61 = (_DWORD*)(a2 + 4 * result);
    v62 = a3 & 7;
    result = (__int64)v34 + v36 * (v32 + result);
    do {
      v63 = *(__int16*)result;
      result += v36;
      --v62;
      *v61++ += v63;
    } while (v62 != 0);
    goto LABEL_17;
  }
  v28 = a4;
  v29 = a3 & 7;
  v30 = a7;
  if (a3 < 8) {
    v31 = 0;
    if ((a3 & 7) == 0) {
      return result;
    }
    goto LABEL_30;
  }
  v64 = (int*)(a2 + 16);
  v65 = 0;
  v66 = -(__int64)(a3 & 0x7FFFFFF8);
  v67 = (__int16*)(result + 2 * a7 * (__int64)a4 + 2LL * a6);
  do {
    v68 = *(v64 - 3);
    v65 -= 8;
    *(v64 - 4) += *v67;
    v69 = &v67[a7];
    v67 += 8 * a7;
    v70 = *v69;
    v71 = &v69[v30];
    *(v64 - 3) = v68 + v70;
    v72 = *(v64 - 1);
    v73 = *v71;
    v74 = &v71[v30];
    *(v64 - 2) += v73;
    v75 = *v74;
    v76 = &v74[v30];
    v77 = v72 + v75;
    v78 = *v64;
    v79 = v64[1];
    *(v64 - 1) = v77;
    v80 = *v76;
    v81 = &v76[v30];
    *v64 = v78 + v80;
    v82 = *v81;
    v83 = &v81[v30];
    v84 = v79 + v82;
    v85 = v64[2];
    v86 = v64[3];
    v64[1] = v84;
    v64[2] = v85 + *v83;
    v64[3] = v86 + v83[a7];
    v64 += 8;
  } while (v66 != v65);
  v31 = -v65;
  if (v29 != 0) {
  LABEL_30:
    v87 = (_DWORD*)(a2 + 4 * v31);
    v88 = (__int16*)(result + 2 * (v31 + v28) * a7 + 2LL * a6);
    do {
      v89 = *v88;
      v88 = (__int16*)((char*)v88 + v30 * 2);
      --v29;
      *v87++ += v89;
    } while (v29 != 0);
  }
  return result;
}

__int64 opus_encoder_6c8a0(__int64 result, __int64 a2, __int64 a3,
                           unsigned int a4, int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  signed int v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
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
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;

  if (a5 >= 1) {
    v6 = 0;
    v7 = 0;
    v8 = result;
    v9 = a2;
    v10 = 8LL * (unsigned int)a5;
    v11 = 715827883LL * a6;
    v12 = 4LL * (unsigned int)a5;
    v13 = (v11 >> 33) + ((unsigned int)(v11 >> 33) >> 31);
    v14 = 2LL * (unsigned int)a5;
    v15 = __clz(v13);
    v16 = (unsigned int)a5;
    v17 = 3LL * (unsigned int)a5;
    v18 = a2 + v12;
    v19 = result + v12;
    v20 = 0x80000000 >> v15;
    v21 = 31 - v15;
    v22 = a2 + 2 * v17;
    v23 = result + 2 * v17;
    v24 = v20 >> 1;
    do {
      if (a4 >= 4) {
        v25 = 0;
        v26 = v6;
        do {
          v27 = *(_DWORD*)(a3 + 8 * v7);
          v25 += 4;
          v28 = (*(__int16*)(result + v26) << 14) - v27;
          v29 = v28 + v24;
          v30 = (v28 + 0x2000) >> 14;
          v31 = (v29 >> v21) + v27;
          if (v30 <= -32767) {
            v30 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v31;
          if (v30 >= 0x7FFF) {
            LOWORD(v30) = 0x7FFF;
          }
          *(_WORD*)(a2 + v26) = v30;
          v32 = *(_DWORD*)(a3 + 8 * v7);
          v33 = (*(__int16*)(result + v14 + v26) << 14) - v32;
          v34 = v33 + v24;
          v35 = (v33 + 0x2000) >> 14;
          v36 = (v34 >> v21) + v32;
          if (v35 <= -32767) {
            v35 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v36;
          if (v35 >= 0x7FFF) {
            LOWORD(v35) = 0x7FFF;
          }
          *(_WORD*)(a2 + v14 + v26) = v35;
          v37 = *(_DWORD*)(a3 + 8 * v7);
          v38 = (*(__int16*)(v19 + v26) << 14) - v37;
          v39 = v38 + v24;
          v40 = (v38 + 0x2000) >> 14;
          v41 = (v39 >> v21) + v37;
          if (v40 <= -32767) {
            v40 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v41;
          if (v40 >= 0x7FFF) {
            LOWORD(v40) = 0x7FFF;
          }
          *(_WORD*)(v18 + v26) = v40;
          v42 = *(_DWORD*)(a3 + 8 * v7);
          v43 = (*(__int16*)(v23 + v26) << 14) - v42;
          v44 = v43 + v24;
          v45 = (v43 + 0x2000) >> 14;
          v46 = (v44 >> v21) + v42;
          if (v45 <= -32767) {
            v45 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v46;
          if (v45 >= 0x7FFF) {
            LOWORD(v45) = 0x7FFF;
          }
          *(_WORD*)(v22 + v26) = v45;
          v26 += v10;
        } while ((a4 & 0x3FFFFFC) != v25);
      }
      else {
        v25 = 0;
      }
      if ((a4 & 3) != 0) {
        v47 = v14 * v25;
        v48 = a4 & 3;
        do {
          v49 = *(_DWORD*)(a3 + 8 * v7);
          v50 = (*(__int16*)(v8 + v47) << 14) - v49;
          v51 = v50 + v24;
          v52 = (v50 + 0x2000) >> 14;
          v53 = (v51 >> v21) + v49;
          if (v52 <= -32767) {
            v52 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v53;
          if (v52 >= 0x7FFF) {
            LOWORD(v52) = 0x7FFF;
          }
          --v48;
          *(_WORD*)(v9 + v47) = v52;
          v47 += v14;
        } while (v48 != 0);
      }
      ++v7;
      v6 += 2;
      v9 += 2;
      v8 += 2;
    } while (v7 != v16);
  }
  return result;
}

__int64 opus_encoder_6cc20(__int64 result, __int64 a2, __int16 a3, __int16 a4,
                           int a5, int a6, int a7, __int16* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int16* v16;
  _WORD* v17;
  __int64 v18;
  __int16* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  _WORD* v25;
  __int16* v26;
  __int64 v27;
  __int16* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 i;
  __int64 v49;
  __int64 v50;
  __int16* v51;
  _WORD* v52;
  int v53;
  __int16* v54;
  _WORD* v55;
  int v56;
  __int16* v57;
  _WORD* v58;
  int v59;
  __int16* v60;
  _WORD* v61;
  int v62;
  __int16* v63;
  _WORD* v64;
  int v65;
  __int16* v66;
  _WORD* v67;
  int v68;
  __int16* v69;
  _WORD* v70;

  v9 = 48000 / a9;
  v10 = a4;
  v11 = a5 / (48000 / a9);
  if (a7 != 1) {
    if (v11 < 1) {
      goto LABEL_17;
    }
    v14 = a3;
    if (v11 == 1) {
      v15 = 0;
    }
    else {
      v25 = (_WORD*)(a2 + 4);
      v26 = (__int16*)(result + 4);
      v27 = 0;
      v28 = a8;
      do {
        v27 -= 2;
        v29 = *v28 * *v28;
        v30 = (__int16)(((__int16)(v29 >> 15) * a4 +
                         ((int)((2 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                             v14) >>
                        15);
        *(v25 - 2) = (unsigned int)(v30 * *(v26 - 2)) >> 15;
        *(v25 - 1) = (unsigned int)(v30 * *(v26 - 1)) >> 15;
        v31 = v28[v9];
        v28 += 2 * v9;
        v32 = (__int16)(((__int16)((v31 * v31) >> 15) * a4 +
                         ((int)((2 * v31 * v31) & 0xFFFF0000 ^ 0x7FFF0000) >>
                          16) *
                             v14) >>
                        15);
        *v25 = (unsigned int)(v32 * *v26) >> 15;
        v33 = v26[1];
        v26 += 4;
        v25[1] = (unsigned int)(v32 * v33) >> 15;
        v25 += 4;
      } while (-(__int64)(v11 & 0x7FFFFFFE) != v27);
      v15 = -v27;
      if ((v11 & 1) == 0) {
        goto LABEL_17;
      }
    }
    v34 = a8[v15 * v9];
    v24 = (__int16)(((__int16)((v34 * v34) >> 15) * a4 +
                     ((int)((2 * v34 * v34) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v14) >>
                    15);
    *(_WORD*)(a2 + 4 * v15) =
        (unsigned int)(v24 * *(__int16*)(result + 4 * v15)) >> 15;
    v13 = (2 * v15) | 1;
    goto LABEL_16;
  }
  if (v11 < 1) {
    goto LABEL_17;
  }
  v12 = a3;
  if (v11 == 1) {
    v13 = 0;
  LABEL_11:
    v23 = a8[v13 * v9];
    v24 = (__int16)(((__int16)((v23 * v23) >> 15) * a4 +
                     ((int)((2 * v23 * v23) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v12) >>
                    15);
  LABEL_16:
    *(_WORD*)(a2 + 2 * v13) =
        (unsigned int)(v24 * *(__int16*)(result + 2 * v13)) >> 15;
    goto LABEL_17;
  }
  v16 = (__int16*)(result + 2);
  v17 = (_WORD*)(a2 + 2);
  v18 = 0;
  v19 = a8;
  do {
    v18 -= 2;
    v20 = *v19 * *v19;
    *(v17 - 1) =
        (unsigned int)((__int16)(((__int16)(v20 >> 15) * a4 +
                                  ((int)((2 * v20) & 0xFFFF0000 ^ 0x7FFF0000) >>
                                   16) *
                                      v12) >>
                                 15) *
                       *(v16 - 1)) >>
        15;
    v21 = v19[v9];
    v19 += 2 * v9;
    v22 = *v16;
    v16 += 2;
    *v17 = (unsigned int)((__int16)(((__int16)((v21 * v21) >> 15) * a4 +
                                     ((int)((2 * v21 * v21) & 0xFFFF0000 ^
                                            0x7FFF0000) >>
                                      16) *
                                         v12) >>
                                    15) *
                          v22) >>
           15;
    v17 += 2;
  } while (-(__int64)(v11 & 0x7FFFFFFE) != v18);
  v13 = -v18;
  if ((v11 & 1) != 0) {
    goto LABEL_11;
  }
LABEL_17:
  if (v11 < a6) {
    v35 = v11;
    v36 = v11 * (__int64)a7;
    v37 = 0;
    v38 = ((_BYTE)a6 - (_BYTE)v11) & 7;
    if (a7 <= 1) {
      v39 = 1;
    }
    else {
      v39 = (unsigned int)a7;
    }
    v40 = v11 - (__int64)a6;
    v41 = a2 + 2 * v36;
    v42 = (v35 + v38) * a7;
    v43 = a6 - (v35 + v38);
    v44 = a7;
    v45 = result + 2 * v36;
    v46 = result + 2 * v42;
    result = a2 + 2 * v42;
    do {
      if (v38 != 0) {
        v47 = 0;
        for (i = v38; i != 0; --i) {
          *(_WORD*)(v41 + v47) =
              (unsigned int)(*(__int16*)(v45 + v47) * v10) >> 15;
          v47 += v44 * 2;
        }
      }
      if (v40 <= 0xFFFFFFFFFFFFFFF8LL) {
        v49 = 0;
        v50 = v43;
        do {
          v51 = (__int16*)(v46 + v49);
          v52 = (_WORD*)(result + v49);
          v50 -= 8;
          v49 += 16LL * a7;
          v53 = *v51;
          v54 = &v51[v44];
          *v52 = (unsigned int)(v53 * v10) >> 15;
          v55 = &v52[v44];
          v56 = *v54;
          v57 = &v54[v44];
          *v55 = (unsigned int)(v56 * v10) >> 15;
          v58 = &v55[v44];
          v59 = *v57;
          v60 = &v57[v44];
          *v58 = (unsigned int)(v59 * v10) >> 15;
          v61 = &v58[v44];
          v62 = *v60;
          v63 = &v60[v44];
          *v61 = (unsigned int)(v62 * v10) >> 15;
          v64 = &v61[v44];
          v65 = *v63;
          v66 = &v63[v44];
          *v64 = (unsigned int)(v65 * v10) >> 15;
          v67 = &v64[v44];
          v68 = *v66;
          v69 = &v66[v44];
          *v67 = (unsigned int)(v68 * v10) >> 15;
          v70 = &v67[v44];
          *v70 = (unsigned int)(*v69 * v10) >> 15;
          v70[a7] = (unsigned int)(v69[a7] * v10) >> 15;
        } while (v50 != 0);
      }
      ++v37;
      v41 += 2;
      v45 += 2;
      v46 += 2;
      result += 2;
    } while (v37 != v39);
  }
  return result;
}

__int16* opus_encoder_6d020(__int16* result, __int16* a2, __int16 a3,
                            __int16 a4, int a5, unsigned int a6, int a7,
                            __int16* a8, int a9)
{
  int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int16* v20;
  __int16* v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  int v25;
  __int16* v26;
  unsigned int v27;
  _WORD* v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  _WORD* v35;
  __int64 v36;
  __int16* v37;
  __int16* v38;
  int v39;
  unsigned int v40;
  __int16 v41;
  int v42;
  __int16* v43;
  unsigned int v44;
  _WORD* v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int16 v50;
  __int64 v51;
  __int64 v52;
  _WORD* v53;
  __int16* v54;
  __int64 v55;
  int v56;
  int v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _WORD* v63;
  __int16* v64;
  int v65;
  int v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int16* v70;
  unsigned int v71;
  __int16* v72;
  unsigned int v73;
  __int16* v74;
  int v75;
  int v76;
  __int16* v77;
  unsigned int v78;
  __int16* v79;
  unsigned int v80;
  __int16* v81;
  __int64 v82;
  __int64 v83;
  __int16* v84;
  unsigned int v85;
  __int16* v86;
  unsigned int v87;
  __int16 v88;
  int v89;
  int v90;
  unsigned int v91;
  __int16 v92;
  unsigned int v93;
  __int16 v94;

  v9 = 48000 / a9;
  v10 = a4 ^ 0x7FFF;
  v11 = a5 / (48000 / a9);
  if ((int)v11 < 1) {
    v11 = 0;
    goto LABEL_19;
  }
  v12 = v9;
  v13 = a3 ^ 0x7FFF;
  if (a7 != 1 || v9 != 1) {
    if (v11 == 1) {
      v16 = 0;
    }
    else {
      v17 = a7;
      v18 = a2 + 1;
      v19 = 0;
      v20 = result;
      v21 = a8;
      v22 = 4LL * a7;
      do {
        v19 -= 2;
        v23 = *v21 * *v21;
        v24 = ((__int16)(((__int16)(v23 >> 15) * v10 +
                          ((int)((2 * v23) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                              v13) >>
                         15) *
               ((unsigned int)(*v20 - v20[1]) >> 1)) >>
              15;
        *(v18 - 1) -= v24;
        *v18 += v24;
        v25 = v21[v12];
        v21 += 2 * v12;
        v26 = &v20[v17];
        v20 = (__int16*)((char*)v20 + v22);
        v27 = (__int16)(((__int16)((v25 * v25) >> 15) * v10 +
                         ((int)((2 * v25 * v25) & 0xFFFF0000 ^ 0x7FFF0000) >>
                          16) *
                             v13) >>
                        15) *
              ((unsigned int)(*v26 - v26[1]) >> 1);
        v28 = &v18[v17];
        v18 = (_WORD*)((char*)v18 + v22);
        v27 >>= 15;
        *(v28 - 1) -= v27;
        *v28 += v27;
      } while (-(__int64)(v11 & 0x7FFFFFFE) != v19);
      v16 = -v19;
      if ((v11 & 1) == 0) {
        goto LABEL_18;
      }
    }
    v29 = a8[v16 * v12];
    v30 = (__int16)((v29 * v29) >> 15) * v10 +
          ((int)((2 * v29 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13;
    v31 = v16 * a7;
    v32 = v31;
    v33 = v31 + 1;
    v34 = ((__int16)(v30 >> 15) *
           ((unsigned int)(result[v32] - result[v33]) >> 1)) >>
          15;
    a2[v32] -= v34;
  LABEL_17:
    a2[v33] += v34;
    goto LABEL_18;
  }
  v14 = *a2;
  if (v11 == 1) {
    v15 = 0;
  LABEL_16:
    v46 = a8[v15 * v12];
    v47 = (__int16)((v46 * v46) >> 15) * v10 +
          ((int)((2 * v46 * v46) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13;
    v48 = v15;
    v49 = v15;
    v33 = v48 + 1;
    v34 = ((__int16)(v47 >> 15) *
           ((unsigned int)(result[v49] - result[v33]) >> 1)) >>
          15;
    a2[v49] = v14 - v34;
    goto LABEL_17;
  }
  v35 = a2 + 1;
  v36 = 0;
  v37 = result;
  v38 = a8;
  do {
    v36 -= 2;
    v39 = *v38 * *v38;
    v40 =
        ((__int16)(((__int16)(v39 >> 15) * v10 +
                    ((int)((2 * v39) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13) >>
                   15) *
         ((unsigned int)(*v37 - v37[1]) >> 1)) >>
        15;
    *(v35 - 1) = v14 - v40;
    v41 = *v35 + v40;
    *v35 = v41;
    v42 = v38[v12];
    v38 += 2 * v12;
    v43 = v37 + 1;
    v37 += 2;
    v44 = (__int16)(((__int16)((v42 * v42) >> 15) * v10 +
                     ((int)((2 * v42 * v42) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v13) >>
                    15) *
          ((unsigned int)(*v43 - v43[1]) >> 1);
    v45 = v35 + 1;
    v35 += 2;
    v44 >>= 15;
    *(v45 - 1) = v41 - v44;
    v14 = *v45 + v44;
    *v45 = v14;
  } while (-(__int64)(v11 & 0x7FFFFFFE) != v36);
  v15 = -v36;
  if ((v11 & 1) != 0) {
    goto LABEL_16;
  }
LABEL_18:
  if (v11 >= a6) {
    return result;
  }
LABEL_19:
  if (a7 == 1) {
    v50 = a2[v11];
    v51 = ((_BYTE)a6 - (_BYTE)v11) & 3;
    if ((((_BYTE)a6 - (_BYTE)v11) & 3) != 0) {
      v52 = 2LL * v11 + 2;
      v53 = (__int16*)((char*)a2 + v52);
      v54 = (__int16*)((char*)result + v52);
      v55 = v11;
      do {
        v56 = *(v54 - 1);
        v57 = *v54;
        ++v55;
        --v51;
        ++v54;
        v58 = (((unsigned int)(v56 - v57) >> 1) * v10) >> 15;
        *(v53 - 1) = v50 - v58;
        v50 = *v53 + v58;
        *v53++ = v50;
      } while (v51 != 0);
      if (v11 - (unsigned __int64)a6 > 0xFFFFFFFFFFFFFFFCLL) {
        return result;
      }
    }
    else {
      v55 = v11;
      if (v11 - (unsigned __int64)a6 > 0xFFFFFFFFFFFFFFFCLL) {
        return result;
      }
    }
    v82 = a6 - v55;
    v83 = v55;
    do {
      v82 -= 4;
      v84 = &result[v83 + 1];
      v85 = result[v83] - *v84;
      v86 = &a2[v83];
      v83 += 4;
      v87 = ((v85 >> 1) * v10) >> 15;
      *v86 = v50 - v87;
      v88 = v86[1] + v87;
      v86[1] = v88;
      ++v86;
      v89 = *v84;
      v90 = v84[1];
      ++v84;
      v91 = (((unsigned int)(v89 - v90) >> 1) * v10) >> 15;
      *v86 = v88 - v91;
      v92 = v86[1] + v91;
      v86[1] = v92;
      ++v86;
      v93 = (((unsigned int)(*v84 - v84[1]) >> 1) * v10) >> 15;
      *v86 = v92 - v93;
      v94 = v86[1] + v93;
      v86[1] = v94;
      LODWORD(v84) = (((unsigned int)(v84[1] - v84[2]) >> 1) * v10) >> 15;
      v86[1] = v94 - (_WORD)v84;
      v50 = v86[2] + (_WORD)v84;
      v86[2] = v50;
    } while (v82 != 0);
    return result;
  }
  v59 = v11;
  v60 = ((_BYTE)a6 - (_BYTE)v11) & 3;
  v61 = a7;
  if ((((_BYTE)a6 - (_BYTE)v11) & 3) != 0) {
    v62 = 2 * a7 * (unsigned __int64)v11 + 2;
    v63 = (__int16*)((char*)a2 + v62);
    v64 = (__int16*)((char*)result + v62);
    v59 = v11 + v60;
    do {
      v65 = *(v64 - 1);
      v66 = *v64;
      --v60;
      v64 = (__int16*)((char*)v64 + v61 * 2);
      v67 = (((unsigned int)(v65 - v66) >> 1) * v10) >> 15;
      *(v63 - 1) -= v67;
      *v63 += v67;
      v63 = (_WORD*)((char*)v63 + v61 * 2);
    } while (v60 != 0);
  }
  if (v11 - (unsigned __int64)a6 <= 0xFFFFFFFFFFFFFFFCLL) {
    v68 = a6 - v59;
    v69 = v59 * a7;
    do {
      v68 -= 4;
      v70 = &result[v69 + v61];
      v71 = result[v69] - result[v69 + 1];
      v72 = &a2[v69];
      v69 += 4LL * a7;
      v73 = ((v71 >> 1) * v10) >> 15;
      *v72 -= v73;
      v72[1] += v73;
      v74 = &v72[v61];
      v75 = *v70;
      v76 = v70[1];
      v77 = &v70[v61];
      v78 = (((unsigned int)(v75 - v76) >> 1) * v10) >> 15;
      *v74 -= v78;
      v74[1] += v78;
      v79 = &v74[v61];
      v80 = (((unsigned int)(*v77 - v77[1]) >> 1) * v10) >> 15;
      *v79 -= v80;
      v79[1] += v80;
      v81 = &v79[v61];
      LODWORD(v77) = (((unsigned int)(v77[a7] - v77[a7 + 1]) >> 1) * v10) >> 15;
      *v81 = v79[a7] - (_WORD)v77;
      v81[1] = v79[v61 + 1] + (_WORD)v77;
    } while (v68 != 0);
  }
  return result;
}

__int64 opus_encode_float(int* a1, __int64 a2, signed int a3, _BYTE* a4, int a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 result;
  unsigned int v12;
  int v15;
  char v18;
  bool v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  int v26;
  char v31;
  unsigned int v32;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  _QWORD v40[5];

  v10 = a1[36];
  if (a3 < v10 / 400) {
    return 0xFFFFFFFFLL;
  }
  v40[0] = v9;
  v40[1] = v8;
  v40[2] = v7;
  v40[3] = v5;
  v40[4] = v6;
  v12 = a1[39];
  v15 = a3;
  if (v12 != 5000) {
    v18 = v12 + 119;
    if (v12 - 5001 > 8) {
      return 0xFFFFFFFFLL;
    }
    v19 = v12 >> 1 > 0x9C6;
    v20 = (1374389535LL * (int)((v12 - 5003) * v10)) >> 36;
    v21 = v20 + ((unsigned int)v20 >> 31);
    v15 = v19 ? v21 : (v10 / 400) << v18;
    if (v15 > a3) {
      return 0xFFFFFFFFLL;
    }
  }
  if (400 * v15 == v10 || 200 * v15 == v10 || 100 * v15 == v10) {
    if (v15 < 1) {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    v22 = 4 * v10;
    result = 0xFFFFFFFFLL;
    v23 = 50 * v15;
    v24 = 50 * v15 == v10 || 25 * v15 == v10;
    v25 = 3 * v10;
    v26 = 5 * v10;
    v31 = !v24 && v23 != v25 && v23 != v22 && v23 != v26 && v23 != 2 * v25;
    if (v15 < 1 || (v31 & 1) != 0) {
      return result;
    }
  }
  v32 = a1[28];
  v36 = 2LL * (int)(v32 * v15);
  v37 = (char*)v40 - ((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v38 = memset_plt(v37, 0, v36);
  if ((int)(v32 * v15) >= 1) {
    v39 = 0;
    do {
      v38 = lrint_plt(
          v38,
          fminf(fmaxf(*(float*)(a2 + 4 * v39) * 32768.0, -32768.0), 32767.0));
      v32 = a1[28];
      *(_WORD*)&v37[2 * v39++] = v38;
    } while (v39 < (int)(v32 * v15));
  }
  return MovieRoutine_694e0(a1, (__int64)v37, v15, a4, a5, 16, a2, a3, 0,
                            0xFFFFFFFE, v32, (__int64)downmix_float, 1);
}

__int64 opus_encode(int* a1, __int64 a2, int a3, _BYTE* a4, int a5)
{
  int v5;
  signed int v6;
  unsigned int v7;
  bool v8;
  int v9;
  bool v10;
  bool v11;
  bool v12;
  bool v13;
  bool v14;
  bool v15;
  int v18;
  bool v19;
  __int64 v20;
  int v21;

  v5 = a1[36];
  v6 = a3;
  if (a3 < v5 / 400) {
    goto LABEL_2;
  }
  v7 = a1[39];
  if (v7 != 5000) {
    if (v7 - 5001 > 8) {
      goto LABEL_2;
    }
    v18 = (v5 / 400) << (v7 + 119);
    v19 = v7 >> 1 > 0x9C6;
    v20 = (1374389535LL * (int)((v7 - 5003) * v5)) >> 36;
    v21 = v20 + ((unsigned int)v20 >> 31);
    a3 = v19 ? v21 : v18;
    if (a3 > v6) {
      goto LABEL_2;
    }
  }
  v8 = 400 * a3 == v5 || 200 * a3 == v5;
  v9 = 50 * a3;
  v10 = v8 || 100 * a3 == v5;
  v11 = v10 || v9 == v5;
  v12 = v11 || 25 * a3 == v5;
  v13 = v12 || v9 == 3 * v5;
  v14 = v13 || v9 == 4 * v5;
  v15 = v14 || v9 == 5 * v5;
  if (!v15 && v9 != 6 * v5) {
  LABEL_2:
    a3 = -1;
  }
  return MovieRoutine_694e0(a1, a2, a3, a4, a5, 16, a2, v6, 0, 0xFFFFFFFE,
                            a1[28], (__int64)opus_encoder_68dc0, 0);
}

#pragma GCC visibility pop
