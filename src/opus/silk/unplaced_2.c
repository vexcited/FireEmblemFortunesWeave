#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ec_dec_icdf(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_silk_4e4e0_alt1(_QWORD, _QWORD, _QWORD) __asm__("opus_silk_4e4e0");
__int64 opus_silk_590a0_alt1(_QWORD, _QWORD) __asm__("opus_silk_590a0");
__int64 silk_CNG_Reset(_QWORD);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
__int64 silk_PLC_Reset(_QWORD);
__int64 silk_biquad_alt_stride1(_QWORD, _QWORD, _QWORD);
__int64 silk_decode_signs(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 silk_resampler(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 silk_resampler_init(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 silk_shell_decoder(_QWORD, _QWORD);
__int64 silk_sum_sqr_shift(_QWORD, _QWORD, _QWORD, _QWORD);
extern _DWORD MovieData_a61e0[6];
extern _DWORD MovieData_a6210[6];
extern _QWORD MovieData_a735c[4];
extern _UNKNOWN* MovieData_c09f0;
extern _UNKNOWN* MovieData_c0b68;
extern _UNKNOWN* MovieData_c0b70;
extern _UNKNOWN MovieData_a5d9a;
extern _UNKNOWN MovieData_a5e05;
extern _UNKNOWN MovieData_a5ea0;
extern _UNKNOWN* MovieData_c09e0;
extern _UNKNOWN* MovieData_c0a00;
extern _UNKNOWN* MovieData_c0a08;
extern _UNKNOWN* MovieData_c0a10;
extern _UNKNOWN* MovieData_c0a18;
extern _UNKNOWN* MovieData_c0a20;
extern _UNKNOWN* MovieData_c0a28;
extern _UNKNOWN* MovieData_c0a30;
extern _UNKNOWN* MovieData_c0a38;
extern _UNKNOWN* MovieData_c0a40;
extern _UNKNOWN* MovieData_c0ab8;
extern _UNKNOWN* MovieData_c0ac0;
extern _UNKNOWN* MovieData_c0ac8;
extern _UNKNOWN* MovieData_c0ad0;
extern _UNKNOWN* MovieData_c0ad8;
extern _UNKNOWN* MovieData_c0ae0;
extern _UNKNOWN* MovieData_c0ae8;
extern __int16 MovieData_a61f8[12];
int* silk_resampler_private_up2_HQ(int* result, __int64, __int16*, int);
__int64 opus_silk_445e0(__int64 result, __int64 a2, int a3, int a4,
                        unsigned int a5);
__int64 opus_silk_45170(__int64 result, __int64 a2);
__int64 opus_silk_45cc0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        int a5, int a6);
__int64 opus_silk_47020(__int16* a1, __int16* a2, int a3);
__int64 opus_silk_4cbc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, int* a6, int a7, int a8);
__int64 opus_silk_4cf00(_QWORD* a1);
__int64 opus_silk_4e380(__int64 result, int a2, int a3);
__int64 opus_silk_4e4e0(__int64 result, int a2, int a3);
__int64 opus_silk_4ee30(_DWORD* a1, int a2);
__int64 opus_silk_4eef0(__int64 a1, _DWORD* a2);
__int64 opus_silk_4f690(unsigned int* a1, int a2);
__int64 opus_silk_50640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5);
__int64 opus_silk_51e80(__int64 result, char a2, __int64 a3, int a4,
                        unsigned int a5);
__int64 opus_silk_52100(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                        int a5);
__int64 opus_silk_52610(__int64 a1, int a2, unsigned int a3);
__int64 opus_silk_55ea0(_DWORD* a1);
__int64 opus_silk_55f60(__int64 a1, __int64 a2, char a3, int a4);
__int64 opus_silk_560c0(__int64 result, __int64 a2, __int64 a3, __int16 a4,
                        int a5);
int* opus_silk_570e0(int* result, __int64 a2, __int64 a3, int a4);
int* opus_silk_572a0(int* a1, _WORD* a2, __int64 a3, int a4);
int* opus_silk_574a0(int* result, __int64 a2, __int64 a3, __int16* a4, int a5);
int* opus_silk_575a0(__int64 a1, _WORD* a2, __int16* a3, int a4);
__int64 opus_silk_58660(unsigned int a1);
__int64 opus_silk_586e0(__int64 result, _DWORD* a2, int a3, int a4);
__int16* opus_silk_58bc0(__int16* result, _DWORD* a2, int a3, int a4);
__int16* opus_silk_590a0(__int16* result, int a2);
unsigned __int16* opus_silk_59ee0(unsigned __int16* result, _DWORD* a2,
                                  _DWORD* a3, int* a4, int a5, int a6);
__int64 opus_silk_5ace0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, int a6, int a7, int a8);

__int64 opus_silk_445e0(__int64 result, __int64 a2, int a3, int a4,
                        unsigned int a5)
{
  int v5;
  __int64 v6;
  __int64 v7;
  int v10;
  int v11;
  unsigned int* v12;
  char v13;
  __int64 v14;
  unsigned int v15;
  unsigned int* v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned int v30;
  int v31;
  __int64 i;
  int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int* v40;
  _WORD* v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  int v46;
  _WORD* v47;
  int* v48;
  int v49;
  int* v50;
  _WORD* v51;
  __int64 v52;
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
  _WORD* v64;
  int* v65;
  int v66;
  int v67;
  __int64 v68;
  _WORD* v69;
  _DWORD* v70;
  __int64 v71;
  unsigned int v72;
  _WORD* v73;
  unsigned int* v74;
  unsigned int v75;
  _WORD* v76;
  int* v77;
  __int64 v78;
  int v79;
  _WORD* v80;
  int* v81;
  int v82;
  __int64 v84;

  if ((int)a5 < 1) {
    return result;
  }
  v5 = a4 - a3;
  v6 = a5 & 7;
  v7 = a5 & 0x7FFFFFF8;
  v10 = 0;
  v11 = 0;
  v84 = result;
  v12 = (unsigned int*)(a2 + 16);
  v13 = a4 - a3 - 1;
  do {
    if (a5 >= 8) {
      v14 = 0;
      v15 = 0;
      v16 = v12;
      do {
        v17 = *(v16 - 4);
        v18 = *(v16 - 3);
        if (v17 < 0) {
          v17 = -v17;
        }
        if (v17 <= v15) {
          v19 = v10;
        }
        else {
          v19 = v14;
        }
        if (v17 > v15) {
          v15 = v17;
        }
        if (v18 >= 0) {
          v20 = *(v16 - 3);
        }
        else {
          v20 = -v18;
        }
        if (v20 > v15) {
          v21 = v14 + 1;
        }
        else {
          v21 = v19;
        }
        if (v20 > v15) {
          v15 = v20;
        }
        v22 = *(v16 - 2);
        v23 = *(v16 - 1);
        if (v22 < 0) {
          v22 = -v22;
        }
        if (v22 > v15) {
          v21 = v14 + 2;
          v15 = v22;
        }
        if (v23 >= 0) {
          v24 = *(v16 - 1);
        }
        else {
          v24 = -v23;
        }
        if (v24 > v15) {
          v21 = v14 + 3;
          v15 = v24;
        }
        v25 = *v16;
        v26 = v16[1];
        if ((*v16 & 0x80000000) != 0) {
          v25 = -v25;
        }
        if (v25 > v15) {
          v21 = v14 + 4;
          v15 = v25;
        }
        if (v26 >= 0) {
          v27 = v16[1];
        }
        else {
          v27 = -v26;
        }
        if (v27 > v15) {
          v21 = v14 + 5;
          v15 = v27;
        }
        v28 = v16[2];
        v29 = v16[3];
        v16 += 8;
        if (v28 < 0) {
          v28 = -v28;
        }
        if (v28 > v15) {
          v21 = v14 + 6;
          v15 = v28;
        }
        if (v29 >= 0) {
          v30 = v29;
        }
        else {
          v30 = -v29;
        }
        v31 = v14 + 7;
        v14 += 8;
        if (v30 <= v15) {
          v10 = v21;
        }
        else {
          v10 = v31;
        }
        if (v30 > v15) {
          v15 = v30;
        }
      } while (v14 != v7);
    }
    else {
      v14 = 0;
      v15 = 0;
    }
    if (v6 != 0) {
      for (i = v6; i != 0; --i) {
        v33 = *(_DWORD*)(a2 + 4 * v14);
        if (v33 < 0) {
          v33 = -v33;
        }
        if (v33 > v15) {
          v10 = v14;
          v15 = v33;
        }
        ++v14;
      }
    }
    v34 = (v15 & 1) + (v15 >> 1);
    if (v5 != 1) {
      v34 = ((v15 >> v13) + 1) >> 1;
    }
    if (v34 < 0x8000) {
      v38 = a5 & 7;
      if (v5 == 1) {
        if (a5 >= 8) {
          v69 = (_WORD*)(v84 + 8);
          v70 = (_DWORD*)(a2 + 16);
          v71 = 0;
          do {
            v71 -= 8;
            *(v69 - 4) = (*(v70 - 4) & 1) + (*(v70 - 4) >> 1);
            *(v69 - 3) = (*(v70 - 3) & 1) + (*(v70 - 3) >> 1);
            *(v69 - 2) = (*(v70 - 2) & 1) + (*(v70 - 2) >> 1);
            *(v69 - 1) = (*(v70 - 1) & 1) + (*(v70 - 1) >> 1);
            *v69 = (*v70 & 1) + (*v70 >> 1);
            v69[1] = (v70[1] & 1) + (v70[1] >> 1);
            v69[2] = (v70[2] & 1) + (v70[2] >> 1);
            v72 = v70[3];
            v70 += 8;
            v69[3] = (v72 & 1) + (v72 >> 1);
            v69 += 8;
          } while (-(__int64)(a5 & 0x7FFFFFF8) != v71);
          v39 = -v71;
        }
        else {
          v39 = 0;
        }
        if ((a5 & 7) != 0) {
          v73 = (_WORD*)(v84 + 2 * v39);
          v74 = (unsigned int*)(a2 + 4 * v39);
          do {
            v75 = *v74++;
            --v38;
            *v73++ = (v75 & 1) + (v75 >> 1);
          } while (v38 != 0);
        }
      }
      else {
        if (a5 >= 8) {
          v76 = (_WORD*)(v84 + 8);
          v77 = (int*)(a2 + 16);
          v78 = 0;
          do {
            v78 -= 8;
            *(v76 - 4) = (unsigned int)((*(v77 - 4) >> v13) + 1) >> 1;
            *(v76 - 3) = (unsigned int)((*(v77 - 3) >> v13) + 1) >> 1;
            *(v76 - 2) = (unsigned int)((*(v77 - 2) >> v13) + 1) >> 1;
            *(v76 - 1) = (unsigned int)((*(v77 - 1) >> v13) + 1) >> 1;
            *v76 = (unsigned int)((*v77 >> v13) + 1) >> 1;
            v76[1] = (unsigned int)((v77[1] >> v13) + 1) >> 1;
            v76[2] = (unsigned int)((v77[2] >> v13) + 1) >> 1;
            v79 = v77[3];
            v77 += 8;
            v76[3] = (unsigned int)((v79 >> v13) + 1) >> 1;
            v76 += 8;
          } while (-(__int64)(a5 & 0x7FFFFFF8) != v78);
          v68 = -v78;
        }
        else {
          v68 = 0;
        }
        if ((a5 & 7) != 0) {
          v80 = (_WORD*)(v84 + 2 * v68);
          v81 = (int*)(a2 + 4 * v68);
          do {
            v82 = *v81++;
            --v38;
            *v80++ = (unsigned int)((v82 >> v13) + 1) >> 1;
          } while (v38 != 0);
        }
      }
      return result;
    }
    if (v34 >= 0x27FFE) {
      v34 = 163838;
    }
    result = opus_silk_4e4e0_alt1(
        a2, a5, 65470 - ((v34 << 14) - 536854528) / ((v34 + v34 * v10) >> 2));
    ++v11;
  } while (v11 != 10);
  v35 = a5 & 3;
  if (v5 != 1) {
    result = v84;
    if (a5 >= 4) {
      v50 = (int*)(a2 + 8);
      v51 = (_WORD*)(v84 + 4);
      v52 = 0;
      do {
        v54 = *(v50 - 2) >> v13;
        v55 = (v54 + 1) >> 1;
        if (v54 < -65537) {
          v55 = -32768;
        }
        if (v54 <= 65534) {
          v56 = v55;
        }
        else {
          v56 = 0x7FFF;
        }
        *(v51 - 2) = v56;
        *(v50 - 2) = v56 << v5;
        v57 = *(v50 - 1) >> v13;
        v58 = (v57 + 1) >> 1;
        if (v57 < -65537) {
          v58 = -32768;
        }
        if (v57 <= 65534) {
          v59 = v58;
        }
        else {
          v59 = 0x7FFF;
        }
        *(v51 - 1) = v59;
        *(v50 - 1) = v59 << v5;
        v60 = *v50 >> v13;
        v61 = (v60 + 1) >> 1;
        if (v60 < -65537) {
          v61 = -32768;
        }
        if (v60 <= 65534) {
          v62 = v61;
        }
        else {
          v62 = 0x7FFF;
        }
        *v51 = v62;
        *v50 = v62 << v5;
        v63 = v50[1] >> v13;
        if (v63 > 65534) {
          v53 = 0x7FFF;
        }
        else if (v63 >= -65537) {
          v53 = (v63 + 1) >> 1;
        }
        else {
          v53 = -32768;
        }
        v51[1] = v53;
        v52 -= 4;
        v51 += 4;
        v50[1] = v53 << v5;
        v50 += 4;
      } while (-(__int64)(a5 & 0x7FFFFFFC) != v52);
      v37 = -v52;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    else {
      v37 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    v64 = (_WORD*)(v84 + 2 * v37);
    v65 = (int*)(a2 + 4 * v37);
    do {
      v67 = *v65 >> v13;
      if (v67 > 65534) {
        v66 = 0x7FFF;
      }
      else if (v67 >= -65537) {
        v66 = (v67 + 1) >> 1;
      }
      else {
        v66 = -32768;
      }
      *v64++ = v66;
      --v35;
      *v65++ = v66 << v5;
    } while (v35 != 0);
    return result;
  }
  if (a5 >= 4) {
    v40 = (int*)(a2 + 8);
    v41 = (_WORD*)(v84 + 4);
    v42 = 0;
    do {
      v42 -= 4;
      v43 = (*(v40 - 2) & 1) + (*(v40 - 2) >> 1);
      if (v43 <= -32768) {
        v43 = -32768;
      }
      if (v43 >= 0x7FFF) {
        v43 = 0x7FFF;
      }
      *(v41 - 2) = v43;
      *(v40 - 2) = 2 * v43;
      v44 = (*(v40 - 1) & 1) + (*(v40 - 1) >> 1);
      if (v44 <= -32768) {
        v44 = -32768;
      }
      if (v44 >= 0x7FFF) {
        v44 = 0x7FFF;
      }
      *(v41 - 1) = v44;
      *(v40 - 1) = 2 * v44;
      v45 = (*v40 & 1) + (*v40 >> 1);
      if (v45 <= -32768) {
        v45 = -32768;
      }
      if (v45 >= 0x7FFF) {
        v45 = 0x7FFF;
      }
      *v41 = v45;
      *v40 = 2 * v45;
      v46 = (v40[1] & 1) + (v40[1] >> 1);
      if (v46 <= -32768) {
        v46 = -32768;
      }
      if (v46 >= 0x7FFF) {
        v46 = 0x7FFF;
      }
      v41[1] = v46;
      v41 += 4;
      v40[1] = 2 * v46;
      v40 += 4;
    } while (-(__int64)(a5 & 0x7FFFFFFC) != v42);
    v36 = -v42;
    if ((a5 & 3) != 0) {
      goto LABEL_96;
    }
  }
  else {
    v36 = 0;
    if ((a5 & 3) == 0) {
      return result;
    }
  LABEL_96:
    v47 = (_WORD*)(v84 + 2 * v36);
    v48 = (int*)(a2 + 4 * v36);
    do {
      v49 = (*v48 & 1) + (*v48 >> 1);
      if (v49 <= -32768) {
        v49 = -32768;
      }
      if (v49 >= 0x7FFF) {
        v49 = 0x7FFF;
      }
      --v35;
      *v47++ = v49;
      *v48++ = 2 * v49;
    } while (v35 != 0);
  }
  return result;
}

__int64 opus_silk_45170(__int64 result, __int64 a2)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(_DWORD*)(result + 12);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 8);
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v4 = (0x40000 - (v3 << 10)) >> 16;
  if (v4 > 3) {
    v24 = 0xAA4FADA0552B622LL;
    v25 = 89306658;
    v14 = 0x36BDF0A021DA4EDLL;
  }
  else {
    v5 = (unsigned __int16)(-1024 * v3);
    if (-1024 * (_WORD)v3 != 0) {
      v6 = (int*)((char*)MovieData_c09e0 + 12 * v4);
      v7 = v6[1];
      if ((unsigned int)v5 >= 0x8000) {
        v17 = v6[2];
        v18 = v6[3] +
              ((unsigned __int64)((__int16)v5 * (v6[3] - (__int64)*v6)) >> 16);
        v20 = v6[4];
        v19 = v6[5];
        LODWORD(v24) = v18;
        HIDWORD(v24) =
            v20 + ((unsigned __int64)((__int16)v5 * (v20 - v7)) >> 16);
        v25 = v19 + ((unsigned __int64)((__int16)v5 * (v19 - v17)) >> 16);
        v21 = (int*)&MovieData_a735c[v4];
        v12 =
            v21[2] +
            ((unsigned __int64)((__int16)v5 * (v21[2] - (__int64)*v21)) >> 16);
        v13 = v21[3] +
              ((unsigned __int64)((__int16)v5 * (v21[3] - (__int64)v21[1])) >>
               16);
      }
      else {
        v8 = *v6 + ((unsigned __int64)((v6[3] - (__int64)*v6) * v5) >> 16);
        v9 = v6[4];
        v10 = v6[2] + ((unsigned __int64)((v6[5] - (__int64)v6[2]) * v5) >> 16);
        LODWORD(v24) = v8;
        HIDWORD(v24) = v7 + ((unsigned __int64)((v9 - v7) * v5) >> 16);
        v25 = v10;
        v11 = (int*)&MovieData_a735c[v4];
        v12 = *v11 + ((unsigned __int64)((v11[2] - (__int64)*v11) * v5) >> 16);
        v13 = v11[1] +
              ((unsigned __int64)((v11[3] - (__int64)v11[1]) * v5) >> 16);
      }
      v23 = __PAIR64__(v13, v12);
      goto LABEL_11;
    }
    v15 = (char*)MovieData_c09e0 + 12 * v4;
    v16 = *(_QWORD*)v15;
    LODWORD(v15) = *((_DWORD*)v15 + 2);
    v24 = v16;
    v25 = (int)v15;
    v14 = MovieData_a735c[v4];
  }
  v23 = v14;
LABEL_11:
  v22 = (v3 + v2) & ~((v3 + v2) >> 31);
  if (v22 >= 256) {
    v22 = 256;
  }
  *(_DWORD*)(result + 8) = v22;
  return silk_biquad_alt_stride1(a2, &v24, &v23);
}

__int64 opus_silk_45cc0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int16* v19;
  __int16* v20;
  __int64 v21;
  int v22;
  __int16 v23;
  int v24;
  __int16 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int16* v34;
  __int16* v35;
  __int64 v36;
  int v37;
  __int16 v38;
  int v39;
  __int16 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int16* v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  __int16 v54;
  int v55;
  int v56;
  bool v57;

  if (a5 >= 1) {
    if (a6 <= 1) {
      return memset_plt(result, 0, 4LL * (unsigned int)a5);
    }
    else {
      v6 = (unsigned int)a6;
      v7 = 2LL * (unsigned int)a6;
      v8 = a5;
      if (a5 == 1) {
        v9 = 0;
      }
      else {
        v10 = a6;
        v11 = a5 & 0x7FFFFFFE;
        v9 = 0;
        v12 = 2LL * a6;
        v13 = (__int16*)(a4 + v7 - 4);
        v14 = 4 * v10;
        v15 = a3 + v10;
        v16 = v12 + 2 * v6 + a4 - 2;
        do {
          v17 = 0;
          v18 = 0;
          v19 = (__int16*)(a2 + v7 - 4);
          v20 = v13;
          v21 = v6 - 2;
          do {
            v22 = (__int16)(v19[1] - (*(unsigned __int8*)(a3 + v21 + 1) << 7)) *
                  v20[1];
            v23 = *v19;
            v19 -= 2;
            v24 = v22 - (v17 >> 1);
            v25 = v23 - (*(unsigned __int8*)(a3 + v21) << 7);
            if (v24 < 0) {
              v24 = -v24;
            }
            v26 = v24 + v18;
            v27 = *v20;
            v20 -= 2;
            v17 = v25 * v27;
            v28 = v17 - (v22 >> 1);
            if (v28 < 0) {
              v28 = -v28;
            }
            v18 = v26 + v28;
            v29 = v21 + 2;
            v21 -= 2;
          } while (v29 > 3);
          v30 = a3 + v10;
          v31 = a4 + 2 * v10;
          v32 = 0;
          v33 = 0;
          *(_DWORD*)(result + 4 * v9) = v18;
          v34 = (__int16*)v16;
          v35 = (__int16*)(a2 + v7 - 4);
          v36 = v6 - 2;
          do {
            v37 =
                (__int16)(v35[1] - (*(unsigned __int8*)(v15 + v36 + 1) << 7)) *
                *v34;
            v38 = *v35;
            v35 -= 2;
            v39 = v37 - (v32 >> 1);
            v40 = v38 - (*(unsigned __int8*)(v15 + v36) << 7);
            if (v39 < 0) {
              v39 = -v39;
            }
            v41 = v39 + v33;
            v42 = *(v34 - 1);
            v34 -= 2;
            v32 = v40 * v42;
            v43 = v32 - (v37 >> 1);
            if (v43 < 0) {
              v43 = -v43;
            }
            v33 = v41 + v43;
            v44 = v36 + 2;
            v36 -= 2;
          } while (v44 > 3);
          *(_DWORD*)(result + 4 + 4 * v9) = v33;
          a3 = v30 + v10;
          a4 = v31 + 2 * v10;
          v9 += 2;
          v13 = (__int16*)((char*)v13 + v14);
          v15 += v12;
          v16 += v14;
        } while (v9 != v11);
      }
      if ((v8 & 1) != 0) {
        v45 = v7 - 4;
        v46 = a3 - 2;
        v47 = 0;
        v48 = 0;
        v49 = (__int16*)(a2 + v7 - 4);
        v50 = (__int16*)(a4 + v45);
        do {
          v51 = (__int16)(v49[1] - (*(unsigned __int8*)(v46 + v6 + 1) << 7)) *
                v50[1];
          v52 = v51 - (v47 >> 1);
          if (v52 < 0) {
            v52 = -v52;
          }
          v53 = v52 + v48;
          v54 = *v49;
          v49 -= 2;
          v55 = *v50;
          v50 -= 2;
          v47 = (__int16)(v54 - (*(unsigned __int8*)(v46 + v6) << 7)) * v55;
          v56 = v47 - (v51 >> 1);
          if (v56 < 0) {
            v56 = -v56;
          }
          v48 = v53 + v56;
          v57 = v6 <= 3;
          v6 -= 2;
        } while (!v57);
        *(_DWORD*)(result + 4 * v9) = v48;
      }
    }
  }
  return result;
}

__int64 opus_silk_47020(__int16* a1, __int16* a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v10;
  __int16* v11;
  __int16* v12;
  __int16* v13;
  __int16* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 result;
  int v19;
  __int64 v20;
  __int64 v21;
  __int16* v22;
  __int16* v23;
  int v24;
  int v25;
  bool v26;
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
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  __int16* v54;
  int v55;
  int v56;
  __int64 v57;
  unsigned __int64 v58;
  __int16* v59;
  int v60;
  int v61;
  __int64 v62;
  __int16* v63;
  int v64;
  __int16* v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int16 v73;
  int v74;
  unsigned int v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  unsigned __int64 v80;
  __int16* v81;
  __int16* v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  __int16* v90;
  __int16* v91;
  int v92;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int16* v97;
  __int16* v98;
  __int64 v99;
  __int16* v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;

  v4 = a3;
  v5 = (unsigned int)a3 - 1LL;
  v6 = a3;
  v7 = (unsigned int)a3 - 2LL;
  v10 = 0;
  v11 = a2 + 4;
  v12 = a2 + 8;
  v13 = a1 + 8;
  v14 = &a1[v4];
  v15 = ((_BYTE)a3 - 1) & 7;
  v16 = (__int64)&a2[v4 - 3];
  do {
    v17 = *a2;
    LODWORD(result) = *a1 - v17;
    if (a3 < 2) {
      v19 = 0;
      goto LABEL_37;
    }
    if (v7 < 7) {
      v19 = 0;
      v20 = 1;
      if (v15 == 0) {
        goto LABEL_37;
      }
    LABEL_33:
      v43 = v5 & 7;
      do {
        if (a1[v20] - (a1[v20 - 1] + a2[v20]) < (int)result) {
          v19 = v20;
          LODWORD(result) = a1[v20] - (a1[v20 - 1] + a2[v20]);
        }
        ++v20;
        --v43;
      } while (v43 != 0);
      goto LABEL_37;
    }
    v19 = 0;
    v21 = 0;
    v22 = v13;
    v23 = v12;
    do {
      v24 = *(v22 - 7);
      v25 = v24 - (*(v22 - 8) + *(v23 - 7));
      v26 = v25 < (int)result;
      if (v25 < (int)result) {
        LODWORD(result) = v24 - (*(v22 - 8) + *(v23 - 7));
      }
      v27 = *(v22 - 6);
      if (v26) {
        v19 = v21 + 1;
      }
      v28 = v27 - (v24 + *(v23 - 6));
      if (v28 < (int)result) {
        v19 = v21 + 2;
        LODWORD(result) = v28;
      }
      v29 = *(v22 - 5);
      v30 = v29 - (v27 + *(v23 - 5));
      if (v30 < (int)result) {
        v19 = v21 + 3;
        LODWORD(result) = v30;
      }
      v31 = *(v22 - 4);
      v32 = v31 - (v29 + *(v23 - 4));
      if (v32 < (int)result) {
        v19 = v21 + 4;
        LODWORD(result) = v32;
      }
      v33 = *(v22 - 3);
      v34 = v33 - (v31 + *(v23 - 3));
      if (v34 < (int)result) {
        v19 = v21 + 5;
        LODWORD(result) = v34;
      }
      v35 = *(v22 - 2);
      v36 = v35 - (v33 + *(v23 - 2));
      if (v36 < (int)result) {
        v19 = v21 + 6;
        LODWORD(result) = v36;
      }
      v37 = *(v22 - 1);
      v38 = v21 + 7;
      v21 += 8;
      v39 = v37 - (v35 + *(v23 - 1));
      if (v39 < (int)result) {
        v19 = v38;
      }
      v40 = *v23;
      if (v39 < (int)result) {
        LODWORD(result) = v39;
      }
      v41 = *v22;
      v23 += 8;
      v22 += 8;
      v42 = v41 - (v37 + v40);
      if (v42 < (int)result) {
        v19 = v21;
        LODWORD(result) = v42;
      }
    } while (v21 != (v5 & 0xFFFFFFFFFFFFFFF8LL));
    v20 = v21 + 1;
    if (v15 != 0) {
      goto LABEL_33;
    }
  LABEL_37:
    v44 = a2[v6];
    v45 = 0x8000 - (*(v14 - 1) + v44);
    if (v45 >= (int)result) {
      result = (unsigned int)result;
    }
    else {
      v19 = a3;
      result = (unsigned int)v45;
    }
    if ((result & 0x80000000) == 0) {
      return result;
    }
    if (v19 == 0) {
      *a1 = v17;
      goto LABEL_3;
    }
    if (v19 == a3) {
      *(v14 - 1) = 0x8000 - v44;
      goto LABEL_3;
    }
    if (v19 < 1) {
      v47 = 0;
    }
    else {
      if ((unsigned int)v19 >= 8) {
        v49 = 0;
        v47 = 0;
        v50 = v11;
        do {
          v49 -= 8;
          v51 = v50[3];
          v52 = v47 + *(v50 - 4) + *(v50 - 3) + *(v50 - 2) + *(v50 - 1) + *v50 +
                v50[1];
          v53 = v50[2];
          v50 += 8;
          v47 = v52 + v53 + v51;
        } while (-(__int64)(v19 & 0x7FFFFFF8) != v49);
        v46 = -v49;
        v48 = v19 & 7;
        if ((v19 & 7) == 0) {
          goto LABEL_54;
        }
      LABEL_52:
        v54 = &a2[v46];
        do {
          v55 = *v54++;
          --v48;
          v47 += v55;
        } while (v48 != 0);
        goto LABEL_54;
      }
      v46 = 0;
      v47 = 0;
      v48 = v19 & 7;
      if ((v19 & 7) != 0) {
        goto LABEL_52;
      }
    }
  LABEL_54:
    if (a3 <= v19) {
      v56 = 0x8000;
    }
    else {
      if ((unsigned __int64)(v19 - v6) <= 0xFFFFFFFFFFFFFFF8LL) {
        v58 = (v6 - v19) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = 0x8000;
        v59 = (__int16*)v16;
        v57 = v6;
        do {
          v57 -= 8;
          v58 -= 8LL;
          v60 = v59[3] + v59[2] + v59[1] + *v59 + *(v59 - 1) + *(v59 - 2) +
                *(v59 - 3);
          v61 = *(v59 - 4);
          v59 -= 8;
          v56 = v56 - v61 - v60;
        } while (v58 != 0);
      }
      else {
        v56 = 0x8000;
        v57 = v6;
      }
      v62 = ((_BYTE)v6 - (_BYTE)v19) & 7;
      if ((((_BYTE)v6 - (_BYTE)v19) & 7) != 0) {
        v63 = &a2[v57];
        do {
          v64 = *v63--;
          --v62;
          v56 -= v64;
        } while (v62 != 0);
      }
    }
    v65 = &a1[v19];
    v66 = v19;
    v67 = a2[v66] >> 1;
    v68 = *v65 + *(v65 - 1);
    v69 = v47 + v67;
    v70 = v56 - v67;
    v71 = (v68 & 1) + (v68 >> 1);
    if (v69 <= v70) {
      v72 = v70;
    }
    else {
      v72 = v69;
    }
    if (v69 >= v70) {
      v69 = v70;
    }
    if (v71 > v69) {
      LOWORD(v69) = v71;
    }
    if (v71 > v72) {
      LOWORD(v69) = v72;
    }
    v73 = v69 - v67;
    *(v65 - 1) = v73;
    *v65 = v73 + a2[v66];
  LABEL_3:
    ++v10;
  } while (v10 != 20);
  result = opus_silk_590a0_alt1(a1, (unsigned int)a3);
  v74 = *a1;
  if (v74 <= *a2) {
    LOWORD(v74) = *a2;
  }
  *a1 = v74;
  v75 = a3 - 2;
  if (a3 < 2) {
    v79 = *(v14 - 1);
    if (v79 >= 0x8000 - a2[v6]) {
      LOWORD(v79) = 0x8000 - a2[v6];
    }
    *(v14 - 1) = v79;
  }
  else {
    LOWORD(v76) = *a1;
    v77 = v5 & 3;
    if (v7 >= 3) {
      v80 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v81 = a2 + 4;
      v82 = a1 + 4;
      v78 = 1;
      do {
        v78 += 4;
        v83 = *(v81 - 3) + (__int16)v76;
        if (v83 >= 0x7FFF) {
          v83 = 0x7FFF;
        }
        if (v83 <= *(v82 - 3)) {
          v83 = *(v82 - 3);
        }
        v84 = *(v82 - 2);
        if (v83 <= -32768) {
          v83 = -32768;
        }
        *(v82 - 3) = v83;
        v85 = *(v81 - 2) + v83;
        if (v85 >= 0x7FFF) {
          v85 = 0x7FFF;
        }
        if (v85 <= v84) {
          v85 = v84;
        }
        v86 = *(v82 - 1);
        if (v85 <= -32768) {
          v85 = -32768;
        }
        *(v82 - 2) = v85;
        v87 = *(v81 - 1) + v85;
        if (v87 >= 0x7FFF) {
          v87 = 0x7FFF;
        }
        if (v87 <= v86) {
          v87 = v86;
        }
        v88 = *v82;
        if (v87 <= -32768) {
          v87 = -32768;
        }
        *(v82 - 1) = v87;
        v89 = *v81;
        v81 += 4;
        v76 = v89 + v87;
        if (v76 >= 0x7FFF) {
          v76 = 0x7FFF;
        }
        if (v76 <= v88) {
          v76 = v88;
        }
        if (v76 <= -32768) {
          LOWORD(v76) = 0x8000;
        }
        v80 -= 4LL;
        *v82 = v76;
        v82 += 4;
      } while (v80 != 0);
    }
    else {
      v78 = 1;
    }
    if ((v5 & 3) != 0) {
      v90 = &a2[v78];
      v91 = &a1[v78];
      do {
        v92 = *v90++;
        v76 = v92 + (__int16)v76;
        if (v76 >= 0x7FFF) {
          v76 = 0x7FFF;
        }
        if (v76 <= *v91) {
          v76 = *v91;
        }
        if (v76 <= -32768) {
          LOWORD(v76) = 0x8000;
        }
        --v77;
        *v91++ = v76;
      } while (v77 != 0);
    }
    v93 = *(v14 - 1);
    if (v93 >= 0x8000 - a2[v6]) {
      LOWORD(v93) = 0x8000 - a2[v6];
    }
    *(v14 - 1) = v93;
    LOWORD(v93) = a1[v75 + 1];
    if ((~(_BYTE)v75 & 3) != 0) {
      v94 = (unsigned int)(a3 - 2);
      v95 = ((_BYTE)a3 - 1) & 3;
      do {
        v96 = v94--;
        v93 = (__int16)v93 - a2[v96 + 1];
        if (a1[v96] < v93) {
          LOWORD(v93) = a1[v96];
        }
        --v95;
        a1[v96] = v93;
      } while (v95 != 0);
    }
    else {
      v94 = (unsigned int)(a3 - 2);
    }
    if (v75 >= 3) {
      v97 = &a1[v94];
      v98 = &a2[v94];
      v99 = v94 + 1;
      v100 = v97 - 1;
      do {
        v101 = (__int16)v93 - v98[1];
        if (v100[1] < v101) {
          LOWORD(v101) = v100[1];
        }
        v102 = *v100;
        v100[1] = v101;
        v103 = (__int16)v101 - *v98;
        if (v102 < v103) {
          LOWORD(v103) = v102;
        }
        v104 = *(v100 - 1);
        *v100 = v103;
        v105 = (__int16)v103 - *(v98 - 1);
        if (v104 < v105) {
          LOWORD(v105) = v104;
        }
        v106 = *(v100 - 2);
        *(v100 - 1) = v105;
        v107 = *(v98 - 2);
        v98 -= 4;
        v93 = (__int16)v105 - v107;
        if (v106 < v93) {
          LOWORD(v93) = v106;
        }
        v99 -= 4;
        *(v100 - 2) = v93;
        v100 -= 4;
      } while (v99 != 0);
    }
  }
  return result;
}

__int64 opus_silk_4cbc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, int* a6, int a7, int a8)
{
  __int64 v16;
  char* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char* v32;
  int* v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int* v41;
  char* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char* v50;
  int* v51;
  int v52;
  int v53;
  __int64 vars0;

  v16 = 4LL * a7;
  v17 = (char*)__builtin_alloca((v16 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v17, 0, v16);
  if (a7 < 1) {
    goto LABEL_58;
  }
  v18 = *a6;
  v19 = (a8 - 2) * a7;
  v20 = a7 & 3;
  if ((unsigned int)a7 < 4) {
    v21 = 0;
    if ((a7 & 3) == 0) {
      goto LABEL_30;
    }
    goto LABEL_24;
  }
  v22 = v17 + 4;
  v23 = 0;
  v24 = (int*)(a5 + 4 * v19 + 8);
  do {
    v25 = *(v24 - 1);
    v23 -= 4;
    v26 = (int)((unsigned __int64)(v18 * (__int64)*(v24 - 2)) >> 16) >> 8;
    if (v26 <= -32768) {
      v26 = -32768;
    }
    if (v26 >= 0x7FFF) {
      LOWORD(v26) = 0x7FFF;
    }
    *(v22 - 2) = v26;
    v27 = (int)((unsigned __int64)(v18 * (__int64)v25) >> 16) >> 8;
    if (v27 <= -32768) {
      v27 = -32768;
    }
    if (v27 >= 0x7FFF) {
      LOWORD(v27) = 0x7FFF;
    }
    *(v22 - 1) = v27;
    v29 = *v24;
    v28 = v24[1];
    v24 += 4;
    v30 = (int)((unsigned __int64)(v18 * (__int64)v29) >> 16) >> 8;
    if (v30 <= -32768) {
      v30 = -32768;
    }
    if (v30 >= 0x7FFF) {
      LOWORD(v30) = 0x7FFF;
    }
    *v22 = v30;
    v31 = (int)((unsigned __int64)(v18 * (__int64)v28) >> 16) >> 8;
    if (v31 <= -32768) {
      v31 = -32768;
    }
    if (v31 >= 0x7FFF) {
      LOWORD(v31) = 0x7FFF;
    }
    v22[1] = v31;
    v22 += 4;
  } while (-(__int64)(a7 & 0x7FFFFFFC) != v23);
  v21 = -v23;
  if ((a7 & 3) != 0) {
  LABEL_24:
    v32 = &v17[2 * v21];
    v33 = (int*)(a5 + 4 * v21 + 4 * v19);
    do {
      v34 = *v33++;
      v35 = (int)((unsigned __int64)(v18 * (__int64)v34) >> 16) >> 8;
      if (v35 <= -32768) {
        v35 = -32768;
      }
      if (v35 >= 0x7FFF) {
        LOWORD(v35) = 0x7FFF;
      }
      --v20;
      *(_WORD*)v32 = v35;
      v32 += 2;
    } while (v20 != 0);
  }
LABEL_30:
  v36 = a6[1];
  v37 = (a8 - 1) * a7;
  v38 = a7 & 3;
  if ((unsigned int)a7 < 4) {
    v39 = 0;
    if ((a7 & 3) == 0) {
      goto LABEL_58;
    }
    goto LABEL_52;
  }
  v40 = 0;
  v41 = (int*)(a5 + 4 * v37 + 8);
  v42 = &v17[2 * a7 + 4];
  do {
    v43 = *(v41 - 1);
    v40 -= 4;
    v44 = (int)((unsigned __int64)(v36 * (__int64)*(v41 - 2)) >> 16) >> 8;
    if (v44 <= -32768) {
      v44 = -32768;
    }
    if (v44 >= 0x7FFF) {
      LOWORD(v44) = 0x7FFF;
    }
    *((_WORD*)v42 - 2) = v44;
    v45 = (int)((unsigned __int64)(v36 * (__int64)v43) >> 16) >> 8;
    if (v45 <= -32768) {
      v45 = -32768;
    }
    if (v45 >= 0x7FFF) {
      LOWORD(v45) = 0x7FFF;
    }
    *((_WORD*)v42 - 1) = v45;
    v46 = *v41;
    v47 = v41[1];
    v41 += 4;
    v48 = (int)((unsigned __int64)(v36 * (__int64)v46) >> 16) >> 8;
    if (v48 <= -32768) {
      v48 = -32768;
    }
    if (v48 >= 0x7FFF) {
      LOWORD(v48) = 0x7FFF;
    }
    *(_WORD*)v42 = v48;
    v49 = (int)((unsigned __int64)(v36 * (__int64)v47) >> 16) >> 8;
    if (v49 <= -32768) {
      v49 = -32768;
    }
    if (v49 >= 0x7FFF) {
      LOWORD(v49) = 0x7FFF;
    }
    *((_WORD*)v42 + 1) = v49;
    v42 += 8;
  } while (-(__int64)(a7 & 0x7FFFFFFC) != v40);
  v39 = -v40;
  if ((a7 & 3) != 0) {
  LABEL_52:
    v50 = &v17[2 * v39 + 2 * a7];
    v51 = (int*)(a5 + 4 * v39 + 4 * v37);
    do {
      v52 = *v51++;
      v53 = (int)((unsigned __int64)(v36 * (__int64)v52) >> 16) >> 8;
      if (v53 <= -32768) {
        v53 = -32768;
      }
      if (v53 >= 0x7FFF) {
        LOWORD(v53) = 0x7FFF;
      }
      --v38;
      *(_WORD*)v50 = v53;
      v50 += 2;
    } while (v38 != 0);
  }
LABEL_58:
  silk_sum_sqr_shift(a1, a2, v17, (unsigned int)a7);
  return silk_sum_sqr_shift(a3, a4, &v17[2 * a7], (unsigned int)a7);
}

__int64 opus_silk_4cf00(_QWORD* a1)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[12] = 0x1000000019LL;
  a1[13] = 0xF0000000CLL;
  a1[8] = 0x640000009C4LL;
  a1[9] = 0x68DB8000004B0LL;
  a1[10] = 0x147AE1000D1B71LL;
  a1[11] = 0x32001B4E81LL;
  a1[4] = 0;
  a1[5] = 0x640000006400LL;
  a1[6] = 0x640000006400LL;
  a1[7] = 0x138800000000LL;
  return 0;
}

__int64 opus_silk_4e380(__int64 result, int a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int16* v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int16* v13;

  v3 = a2 - 1;
  if (a2 >= 2) {
    v4 = a3 - 0x10000;
    v5 = v3 & 3;
    if ((unsigned int)(a2 - 2) < 3) {
      v6 = 0;
      if ((v3 & 3) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v7 = (__int16*)(result + 4);
    v8 = 0;
    do {
      v9 = *(v7 - 1);
      v8 -= 4;
      *(v7 - 2) = (((unsigned int)(a3 * *(v7 - 2)) >> 15) + 1) >> 1;
      v10 = a3 + ((((a3 * v4) >> 15) + 1) >> 1);
      *(v7 - 1) = (((unsigned int)(v10 * v9) >> 15) + 1) >> 1;
      v11 = v10 + ((((v10 * v4) >> 15) + 1) >> 1);
      *v7 = (((unsigned int)(v11 * *v7) >> 15) + 1) >> 1;
      v12 = v11 + ((((v11 * v4) >> 15) + 1) >> 1);
      v7[1] = (((unsigned int)(v12 * v7[1]) >> 15) + 1) >> 1;
      v7 += 4;
      a3 = v12 + ((((v12 * v4) >> 15) + 1) >> 1);
    } while (-(__int64)(v3 & 0x7FFFFFFC) != v8);
    v6 = -v8;
    if ((v3 & 3) != 0) {
    LABEL_8:
      v13 = (__int16*)(result + 2 * v6);
      do {
        --v5;
        *v13 = (((unsigned int)(a3 * *v13) >> 15) + 1) >> 1;
        ++v13;
        a3 += (((a3 * v4) >> 15) + 1) >> 1;
      } while (v5 != 0);
    }
  }
LABEL_10:
  *(_WORD*)(result + 2LL * v3) =
      (((unsigned int)(a3 * *(__int16*)(result + 2LL * v3)) >> 15) + 1) >> 1;
  return result;
}

__int64 opus_silk_4e4e0(__int64 result, int a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  int* v15;

  v3 = a2 - 1;
  if (a2 >= 2) {
    v4 = a3 - 0x10000;
    v5 = v3 & 3;
    if ((unsigned int)(a2 - 2) < 3) {
      v6 = 0;
      if ((v3 & 3) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v7 = (int*)(result + 8);
    v8 = 0;
    do {
      v8 -= 4;
      v9 = a3 + ((((a3 * v4) >> 15) + 1) >> 1);
      v10 = (unsigned __int64)(*(v7 - 1) * (__int64)v9) >> 16;
      *(v7 - 2) = (unsigned __int64)(*(v7 - 2) * (__int64)a3) >> 16;
      *(v7 - 1) = v10;
      v11 = v9 + ((((v9 * v4) >> 15) + 1) >> 1);
      v12 = *v7 * (__int64)v11;
      v13 = v11 + ((((v11 * v4) >> 15) + 1) >> 1);
      v14 = (unsigned __int64)(v7[1] * (__int64)v13) >> 16;
      *v7 = v12 >> 16;
      v7[1] = v14;
      v7 += 4;
      a3 = v13 + ((((v13 * v4) >> 15) + 1) >> 1);
    } while (-(__int64)(v3 & 0x7FFFFFFC) != v8);
    v6 = -v8;
    if ((v3 & 3) != 0) {
    LABEL_8:
      v15 = (int*)(result + 4 * v6);
      do {
        --v5;
        *v15 = (unsigned __int64)(*v15 * (__int64)a3) >> 16;
        ++v15;
        a3 += (((a3 * v4) >> 15) + 1) >> 1;
      } while (v5 != 0);
    }
  }
LABEL_10:
  *(_DWORD*)(result + 4LL * v3) =
      (unsigned __int64)(*(int*)(result + 4LL * v3) * (__int64)a3) >> 16;
  return result;
}

__int64 opus_silk_4ee30(_DWORD* a1, int a2)
{
  int v2;
  int v3;
  unsigned __int8* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  bool v8;
  unsigned int v9;
  unsigned int v11;

  v2 = a1[1144];
  v3 = a1[1145];
  v4 = (unsigned __int8*)&MovieData_a5ea0;
  a1[1152] = a2;
  if (v3 == 2) {
    v5 = a2 - v2 / 16 - 2000;
  }
  else {
    v5 = a2;
  }
  v6 = (unsigned __int8*)&MovieData_a5d9a;
  if (v2 == 12) {
    v7 = 154;
  }
  else {
    v7 = 190;
  }
  if (v2 == 12) {
    v4 = (unsigned __int8*)&MovieData_a5e05;
  }
  v8 = v2 == 8;
  if (v2 == 8) {
    v9 = 106;
  }
  else {
    v9 = v7;
  }
  if (!v8) {
    v6 = v4;
  }
  if (v5 >= 4200) {
    v11 = (v5 + 200) / 0x190u - 10;
    if (v11 >= v9) {
      v11 = v9;
    }
    a1[1183] = 21 * v6[v11];
    return 0;
  }
  else {
    a1[1183] = 0;
    return 0;
  }
}

__int64 opus_silk_4eef0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int v4;
  int v5;
  int v6;
  bool v7;
  bool v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  result = *(unsigned int*)(a1 + 4576);
  if ((_DWORD)result != 0) {
    if ((_DWORD)result << 16 != 0) {
      goto LABEL_3;
    }
  LABEL_16:
    v12 = *(_DWORD*)(a1 + 4572);
    v13 = *(_DWORD*)(a1 + 4556);
    if (v12 < v13) {
      v13 = v12;
    }
    return (unsigned int)(v13 / 1000);
  }
  result = *(unsigned int*)(a1 + 32);
  if ((_DWORD)result << 16 == 0) {
    goto LABEL_16;
  }
LABEL_3:
  v4 = *(_DWORD*)(a1 + 4564);
  v5 = 1000 * (__int16)result;
  v6 = *(_DWORD*)(a1 + 4556);
  if (v5 <= v6) {
    v9 = __OFSUB__(v5, v4);
    v7 = v5 == v4;
    v8 = v5 - v4 < 0;
  }
  else {
    v9 = false;
    v7 = false;
    v8 = false;
  }
  if (!(v8 ^ v9 | v7) || v5 < (signed __int32)*(_DWORD*)(a1 + 4568)) {
    v10 = *(_DWORD*)(a1 + 4568);
    if (v6 >= v4) {
      v11 = v4;
    }
    else {
      v11 = v6;
    }
    if (v11 > v10) {
      v10 = v11;
    }
    return (unsigned int)(v10 / 1000);
  }
  v14 = *(_DWORD*)(a1 + 24);
  if (v14 >= 256) {
    *(_DWORD*)(a1 + 28) = 0;
  }
  if (*(_DWORD*)(a1 + 4536) != 0 || a2[16] != 0) {
    v15 = *(_DWORD*)(a1 + 4572);
    if (v5 > v15) {
      if (*(_DWORD*)(a1 + 28) != 0) {
        if (a2[16] == 0) {
          if (v14 <= 0) {
            goto LABEL_43;
          }
        LABEL_40:
          *(_DWORD*)(a1 + 28) = -2;
          return result;
        }
      }
      else {
        *(_QWORD*)(a1 + 16) = 0;
        *(_DWORD*)(a1 + 24) = 256;
        if (a2[16] == 0) {
          goto LABEL_40;
        }
      }
      *(_DWORD*)(a1 + 28) = 0;
      if ((_DWORD)result == 16) {
        return 12;
      }
      else {
        return 8;
      }
    }
    if (v5 >= v15) {
      if ((*(_DWORD*)(a1 + 28) & 0x80000000) == 0) {
        return result;
      }
    }
    else {
      if (a2[16] != 0) {
        if ((_DWORD)result == 8) {
          result = 12;
        }
        else {
          result = 16;
        }
        *(_QWORD*)(a1 + 16) = 0;
        *(_QWORD*)(a1 + 24) = 0x100000000LL;
        return result;
      }
      if (*(_DWORD*)(a1 + 28) == 0) {
      LABEL_43:
        v16 = a2[6];
        a2[22] = 1;
        a2[14] -= 5 * a2[14] / (v16 + 5);
        return result;
      }
    }
    *(_DWORD*)(a1 + 28) = 1;
  }
  return result;
}

__int64 opus_silk_4f690(unsigned int* a1, int a2)
{
  unsigned int v2;
  __int16 v3;
  __int64 result;
  int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _BYTE* v12;
  int v13;
  int v14;
  _BYTE v15[304];

  v2 = a1[1144];
  v3 = a2;
  if (v2 == a2 && a1[1140] == a1[1139]) {
    result = 0;
  }
  else if (v2 != 0) {
    v6 = 10 * a1[1145] + 5;
    v7 = v6 * v2;
    memset_plt(v15, 0, 304);
    v8 = silk_resampler_init(v15, (unsigned int)(1000 * (__int16)v2), a1[1139],
                             0);
    v9 = (274877907LL * (int)a1[1139]) >> 38;
    v10 = (v9 + ((unsigned int)v9 >> 31)) * v6;
    v11 = 2LL * (int)v10;
    v12 = &v15[-((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
    memset_plt(v12, 0, v11);
    v13 = silk_resampler(v15, v12, a1 + 1802, v7);
    v14 =
        v13 + v8 +
        silk_resampler_init(a1 + 1448, a1[1139], (unsigned int)(1000 * v3), 1);
    result = v14 + (unsigned int)silk_resampler(a1 + 1448, a1 + 1802, v12, v10);
  }
  else {
    result =
        silk_resampler_init(a1 + 1448, a1[1139], (unsigned int)(1000 * a2), 1);
  }
  a1[1140] = a1[1139];
  return result;
}

__int64 opus_silk_50640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5;
  char* v8;
  int v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  int* v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  bool v21;
  int v22;
  int v23;
  int v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char* v35;
  int* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  signed int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  int v63;
  __int64 v64;
  unsigned __int64 v65;
  signed int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned __int64 v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  unsigned __int64 v80;
  __int64 v81;
  __int16* v82;
  int v83;
  int v84;
  __int64 v85;
  bool v86;
  _BOOL4 v87;
  int v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  int v93;
  unsigned __int64 v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  int v99;
  int v100;
  int v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  int v104;
  int v105;
  __int64 v106;
  int v107;
  int v108;
  int v109;
  int v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  __int64 v118;
  int v119;
  __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  char* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  char* v132;
  char* v133;
  char* v134;
  int v135;
  int v136;
  char* v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  char* v140;
  int v141;
  int v142;
  int v143;
  __int64 v144;
  char* v145;
  char* v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int* v168;
  __int64 v169;
  int v170;
  int v171;
  int v172;
  bool v173;
  int v174;
  signed int v175;
  int v176;
  int v177;
  int v178;
  int* v179;
  __int64 v180;
  int* v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  __int64 v189;
  _QWORD* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  struct {
    _QWORD* v194;
    char* v195;
    __int64 v196;
    char gap24_[4];
    int v197;
    __int64 v198;
    __int16* v199;
    char gap48_[4];
    int v200;
    __int64 v201;
    char gap64_[4];
    int v202;
    int* v203;
    char* v204;
    char* v205;
    __int64 v206;
    char gap104_[4];
    int v207;
    char* v208;
    __int64 v209;
    __int64 v210;
    __int64 v211;
    __int16* v212;
    unsigned __int64 v213;
    char* v214;
  } v194_;
  struct {
    __int64 v215;
    __int64 v216;
    __int64 v217;
    __int64 v218;
  } v215_;

  v5 = *(int*)(a1 + 2336);
  v194_.v196 = a3;
  v194_.v197 = a5;
  v194_.v206 = a2;
  v215_.v217 = 0;
  v215_.v218 = 0;
  v215_.v215 = 0;
  v215_.v216 = 0;
  v8 = (char*)&v194_.v194 - ((2 * v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v8, 0, 2 * v5);
  v9 = *(_DWORD*)(a1 + 2328);
  v10 = 4LL * (v9 + (int)v5);
  v11 = (char*)&v194_.v194 - ((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v11, 0, v10);
  v12 = 4LL * *(int*)(a1 + 2332);
  v13 = (char*)&v194_.v194 - ((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v13, 0, v12);
  v14 = (int*)((char*)&v194_.v194 - ((v12 + 79) & 0xFFFFFFFFFFFFFFF0LL));
  v194_.v202 = *(char*)(a1 + 2791);
  if (v9 >= 1) {
    v15 = *(char*)(a1 + 2794);
    v16 = 0;
    v17 = 16 * *((__int16*)MovieData_c09f0 + 2 * (*(char*)(a1 + 2789) >> 1) +
                 *(char*)(a1 + 2790));
    do {
      v18 = 2 * v16;
      v19 = 196314165 * v15 + 907633515;
      v20 = *(__int16*)(a4 + 2 * v16);
      v21 = v20 <= 0;
      v22 = (v20 << 14) - 1280;
      if (v20 >= 0) {
        v23 = v20 << 14;
      }
      else {
        v23 = (v20 << 14) | 0x500;
      }
      if (!v21) {
        v23 = v22;
      }
      v24 = v23 + v17;
      if (v19 < 0) {
        v24 = -v24;
      }
      *(_DWORD*)(a1 + 4 + 4 * v16++) = v24;
      v15 = v19 + *(__int16*)(a4 + v18);
    } while (v16 < *(int*)(a1 + 2328));
  }
  result = memset_plt((char*)&v194_.v194 - ((v12 + 79) & 0xFFFFFFFFFFFFFFF0LL),
                      0, v12 + 64);
  v26 = *(_QWORD*)(a1 + 1316);
  v27 = *(_QWORD*)(a1 + 1324);
  v194_.v194 = (_QWORD*)(a1 + 1284);
  *((_QWORD*)v14 + 4) = v26;
  *((_QWORD*)v14 + 5) = v27;
  v28 = *(_QWORD*)(a1 + 1340);
  *((_QWORD*)v14 + 6) = *(_QWORD*)(a1 + 1332);
  *((_QWORD*)v14 + 7) = v28;
  v29 = *(_QWORD*)(a1 + 1292);
  *(_QWORD*)v14 = *(_QWORD*)(a1 + 1284);
  *((_QWORD*)v14 + 1) = v29;
  v30 = *(_QWORD*)(a1 + 1308);
  *((_QWORD*)v14 + 2) = *(_QWORD*)(a1 + 1300);
  *((_QWORD*)v14 + 3) = v30;
  if (*(int*)(a1 + 2324) >= 1) {
    v31 = *(_DWORD*)(a1 + 2336);
    v32 = v194_.v196;
    v33 = (char*)(a1 + 4);
    v34 = 0;
    v194_.v205 = v8;
    v194_.v195 = v11 + 8;
    v194_.v208 = (char*)&v194_.v194 - ((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v194_.v209 = v194_.v206 + 16;
    v194_.v210 = v194_.v206 + 96;
    v194_.v211 = v194_.v206 + 32;
    v194_.v201 = a1 + 1348;
    v194_.v203 = v14 + 8;
    v194_.v204 = (char*)&v194_.v194 - ((v12 + 79) & 0xFFFFFFFFFFFFFFF0LL);
    while (1) {
      v194_.v214 = v33;
      v45 = *(int*)(a1 + 2340);
      v194_.v212 = (__int16*)(v194_.v211 + 32LL * ((unsigned int)v34 >> 1));
      result = memcpy_plt(&v215_.v215, v194_.v212, 2 * v45);
      v46 = *(_DWORD*)(v194_.v209 + 4 * v34);
      if (v46 >= 0) {
        v47 = *(_DWORD*)(v194_.v209 + 4 * v34);
      }
      else {
        v47 = -v46;
      }
      v48 = __clz(v47);
      v49 = v47 >> 17;
      v50 = (int)0x80000000 >> (v48 - 15);
      v51 = v46 << (v48 - 1);
      v52 = 0x1FFFFFFF / (v51 >> 16);
      v53 = ((unsigned __int64)((int)((unsigned __int64)-(
                                          __int64)((((__int64)(__int16)v52
                                                     << 19) *
                                                    v51) &
                                                   0xFFFFFFF800000000LL) >>
                                      32) *
                                (__int64)v52) >>
             16) +
            (v52 << 16);
      v54 = v53 >> (15 - v48);
      if (v53 > v50) {
        v50 = ((unsigned __int64)((int)((unsigned __int64)-(
                                            __int64)((((__int64)(__int16)v52
                                                       << 19) *
                                                      v51) &
                                                     0xFFFFFFF800000000LL) >>
                                        32) *
                                  (__int64)v52) >>
               16) +
              (v52 << 16);
      }
      v55 = v53 <= (int)(0x7FFFFFFFu >> (v48 - 15)) ? v50
                                                    : 0x7FFFFFFFu >> (v48 - 15);
      v86 = v49 == 0;
      v56 = *(_DWORD*)a1;
      v57 = v55 << (v48 - 15);
      v58 = v86 ? (unsigned int)v57 : (unsigned int)v54;
      if (v46 == v56) {
        v59 = 0x10000;
      }
      else {
        if (v56 >= 0) {
          v60 = *(_DWORD*)a1;
        }
        else {
          v60 = -v56;
        }
        v61 = __clz(v60);
        v62 = v61 - v48;
        v63 = v56 << (v61 - 1);
        v64 = ((__int16)v52 * (__int64)v63) >> 16;
        v65 = (__int16)v52 *
              (__int64)(int)(v63 -
                             (((unsigned __int64)((int)v64 * (__int64)v51) >>
                               29) &
                              0xFFFFFFF8));
        v66 = (int)0x80000000 >> (-13 - v62);
        v67 = (v65 >> 16) + v64;
        v68 = v67 >> (v62 + 13);
        if ((unsigned int)(v62 + 29) >= 0x30) {
          v68 = 0;
        }
        if (v66 <= v67) {
          v66 = v67;
        }
        if ((int)(0x7FFFFFFFu >> (-13 - v62)) < v67) {
          v66 = 0x7FFFFFFFu >> (-13 - v62);
        }
        v21 = v62 <= -14;
        v59 = v66 << (-13 - v62);
        if (!v21) {
          v59 = v68;
        }
        v69 = v14[2];
        v70 = v14[3];
        v71 = v14[1] * (__int64)v59;
        v72 = v14[4];
        v73 = v14[5];
        *v14 = (unsigned __int64)(*v14 * (__int64)v59) >> 16;
        v14[1] = v71 >> 16;
        v74 = v14[6];
        LODWORD(v71) = v14[7];
        v14[2] = (unsigned __int64)(v69 * (__int64)v59) >> 16;
        v14[3] = (unsigned __int64)(v70 * (__int64)v59) >> 16;
        v75 = v14[8];
        v76 = v14[9];
        v14[4] = (unsigned __int64)(v72 * (__int64)v59) >> 16;
        v14[5] = (unsigned __int64)(v73 * (__int64)v59) >> 16;
        v77 = v14[10];
        v78 = v14[11];
        v14[6] = (unsigned __int64)(v74 * (__int64)v59) >> 16;
        v14[7] = (unsigned __int64)((int)v71 * (__int64)v59) >> 16;
        v79 = v14[12];
        LODWORD(v71) = v14[13];
        v14[8] = (unsigned __int64)(v75 * (__int64)v59) >> 16;
        v14[9] = (unsigned __int64)(v76 * (__int64)v59) >> 16;
        v14[10] = (unsigned __int64)(v77 * (__int64)v59) >> 16;
        v14[11] = (unsigned __int64)(v78 * (__int64)v59) >> 16;
        v14[12] = (unsigned __int64)(v79 * (__int64)v59) >> 16;
        v14[13] = (unsigned __int64)((int)v71 * (__int64)v59) >> 16;
        v80 = (unsigned __int64)(v14[15] * (__int64)v59) >> 16;
        v14[14] = (unsigned __int64)(v14[14] * (__int64)v59) >> 16;
        v14[15] = v80;
      }
      v81 = v194_.v210;
      v35 = v194_.v214;
      *(_DWORD*)a1 = v46;
      v82 = (__int16*)(v81 + 10 * v34);
      v83 = *(unsigned __int8*)(a1 + 2789);
      v84 = *(_DWORD*)(a1 + 4184);
      v194_.v213 = v34;
      if (v84 != 0 && *(_DWORD*)(a1 + 4188) == 2 && v83 != 2 && v34 <= 1) {
        break;
      }
      if (v83 == 2) {
        result = *(unsigned int*)(v194_.v206 + 4 * v34);
        v85 = v194_.v201;
        v87 = v194_.v202 < 4 && v34 == 2;
        if (v34 != 0) {
        LABEL_60:
          if (!v87) {
            if (v59 != 0x10000 && (int)result >= -1) {
              v89 = result + 2;
              if ((unsigned int)(result + 1) >= 7) {
                v116 = v31 - 1;
                v90 = 0;
                do {
                  *(_DWORD*)&v11[4 * v116] =
                      (unsigned __int64)(*(int*)&v11[4 * v116] *
                                         (__int64)v59) >>
                      16;
                  v116 -= 8;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFFE))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFFE))] *
                                         (__int64)v59) >>
                      16;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFFD))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFFD))] *
                                         (__int64)v59) >>
                      16;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFFC))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFFC))] *
                                         (__int64)v59) >>
                      16;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFFB))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFFB))] *
                                         (__int64)v59) >>
                      16;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFFA))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFFA))] *
                                         (__int64)v59) >>
                      16;
                  *(_DWORD*)&v11[4 * (int)(v31 + (v90 ^ 0xFFFFFFF9))] =
                      (unsigned __int64)(*(int*)&v11[4 * (int)(v31 +
                                                               (v90 ^
                                                                0xFFFFFFF9))] *
                                         (__int64)v59) >>
                      16;
                  v117 = v90 ^ 0xFFFFFFF8;
                  v90 += 8;
                  *(_DWORD*)&v11[4 * v31 + 4 * v117] =
                      (unsigned __int64)(*(int*)&v11[4 * v31 + 4 * v117] *
                                         (__int64)v59) >>
                      16;
                } while ((v89 & 0xFFFFFFF8) != v90);
              }
              else {
                LODWORD(v90) = 0;
              }
              v118 = v89 & 7;
              if (v118 != 0) {
                v119 = ~(_DWORD)v90 + v31;
                do {
                  --v118;
                  *(_DWORD*)&v11[4 * v119] =
                      (unsigned __int64)(*(int*)&v11[4 * v119] *
                                         (__int64)v59) >>
                      16;
                  --v119;
                } while (v118 != 0);
              }
            }
            goto LABEL_87;
          }
        }
      LABEL_67:
        v93 = *(_DWORD*)(a1 + 2336);
        v94 = v34;
        v95 = *(_DWORD*)(a1 + 2340);
        v96 = *(_DWORD*)(a1 + 2332);
        v194_.v198 = v58;
        v194_.v199 = v82;
        v194_.v200 = v46;
        if (v94 == 2) {
          v97 = result;
          v98 = v85;
          memcpy_plt(v85 + 2LL * v93, v194_.v196, 4LL * v96);
          v96 = *(_DWORD*)(a1 + 2332);
          v99 = *(_DWORD*)(a1 + 2336);
          v100 = *(_DWORD*)(a1 + 2340);
          LODWORD(result) = v97;
        }
        else {
          v100 = v95;
          v99 = v93;
          v98 = v85;
        }
        v101 = result + v95;
        v102 = v194_.v213;
        v194_.v207 = result;
        silk_LPC_analysis_filter(
            (__int64)&v8[2 * (v93 - v101) - 4],
            v98 + 2LL * (v93 - v101 - 2 + v96 * (int)v194_.v213), v194_.v212,
            v99 - (v93 - v101 - 2), v100);
        if (v102 != 0) {
          v13 = v194_.v208;
          v35 = v194_.v214;
          v46 = v194_.v200;
          LODWORD(v103) = v194_.v198;
          v82 = v194_.v199;
          result = (unsigned int)v194_.v207;
          if (v194_.v207 < -1) {
            goto LABEL_87;
          }
        }
        else {
          v82 = v194_.v199;
          v13 = v194_.v208;
          v35 = v194_.v214;
          v46 = v194_.v200;
          v103 = ((unsigned __int64)(*(__int16*)(v194_.v206 + 136) *
                                     (__int64)(int)v194_.v198) >>
                  14) &
                 0xFFFFFFFC;
          result = (unsigned int)v194_.v207;
          if (v194_.v207 < -1) {
            goto LABEL_87;
          }
        }
        v104 = *(_DWORD*)(a1 + 2336);
        v105 = result + 2;
        if ((unsigned int)(result + 1) >= 7) {
          v107 = v31 - 1;
          v108 = v104 - 1;
          v106 = 0;
          do {
            v109 = *(__int16*)&v8[2 * v108];
            v108 -= 8;
            *(_DWORD*)&v11[4 * v107] =
                (unsigned __int64)(v109 * (__int64)(int)v103) >> 16;
            v107 -= 8;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFFE))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFFE))] *
                                   (__int64)(int)v103) >>
                16;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFFD))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFFD))] *
                                   (__int64)(int)v103) >>
                16;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFFC))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFFC))] *
                                   (__int64)(int)v103) >>
                16;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFFB))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFFB))] *
                                   (__int64)(int)v103) >>
                16;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFFA))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFFA))] *
                                   (__int64)(int)v103) >>
                16;
            *(_DWORD*)&v11[4 * (int)(v31 + (v106 ^ 0xFFFFFFF9))] =
                (unsigned __int64)(*(__int16*)&v8
                                       [2 * (int)(v104 + (v106 ^ 0xFFFFFFF9))] *
                                   (__int64)(int)v103) >>
                16;
            v110 = v106 ^ 0xFFFFFFF8;
            v106 += 8;
            *(_DWORD*)&v11[4 * v31 + 4 * v110] =
                (unsigned __int64)(*(__int16*)&v8[2 * v104 + 2 * v110] *
                                   (__int64)(int)v103) >>
                16;
          } while ((v105 & 0xFFFFFFF8) != v106);
        }
        else {
          LODWORD(v106) = 0;
        }
        v111 = v105 & 7;
        if (v111 != 0) {
          v112 = ~(_DWORD)v106;
          v113 = ~(_DWORD)v106 + v31;
          v114 = v112 + v104;
          do {
            v115 = *(__int16*)&v8[2 * v114--];
            --v111;
            *(_DWORD*)&v11[4 * v113--] =
                (unsigned __int64)(v115 * (__int64)(int)v103) >> 16;
          } while (v111 != 0);
        }
      LABEL_87:
        v91 = *(unsigned int*)(a1 + 2332);
        if ((int)v91 >= 1) {
          v120 = v31;
          v121 = *v82 << 16;
          v122 = v82[4];
          v123 = v82[1] << 16;
          v124 = v82[2] << 16;
          v125 = v82[3] << 16;
          if ((unsigned int)v91 >= 4) {
            v194_.v207 = result;
            v130 = 0;
            v131 = 0;
            v132 = &v11[4LL * v31 - 4LL * (int)result];
            do {
              v133 = &v132[v131];
              v130 -= 4;
              v134 = &v35[v131];
              v135 = *(_DWORD*)&v35[v131 + 4];
              v136 =
                  *(_DWORD*)&v35[v131] +
                  2 * (((((v123 * (__int64)*(int*)&v132[v131 + 4]) &
                          0xFFFFFFFF00000000LL) +
                         v121 * (__int64)*(int*)&v132[v131 + 8] +
                         ((v124 * (__int64)*(int*)&v132[v131]) &
                          0xFFFFFFFF00000000LL) +
                         ((v125 * (__int64)*(int*)&v132[v131 - 4]) &
                          0x7FFFFFFF00000000LL) +
                         0x200000000LL) >>
                        32) +
                       ((unsigned __int64)(v122 *
                                           (__int64)*(int*)&v132[v131 - 8]) >>
                        16));
              v137 = &v11[4 * v120 + v131];
              *(_DWORD*)v137 = 2 * v136;
              v138 = ((v123 * (__int64)*(int*)&v132[v131 + 8]) &
                      0xFFFFFFFF00000000LL) +
                     v121 * (__int64)*(int*)&v132[v131 + 12];
              v139 =
                  ((v124 * (__int64)*(int*)&v132[v131 + 4]) &
                   0xFFFFFFFF00000000LL) +
                  ((v125 * (__int64)*(int*)&v132[v131]) & 0x7FFFFFFF00000000LL);
              v140 = &v13[v131];
              v131 += 16;
              v141 =
                  v135 +
                  2 * (((v138 + v139 + 0x200000000LL) >> 32) +
                       ((unsigned __int64)(v122 * (__int64)*((int*)v133 - 1)) >>
                        16));
              *(_DWORD*)v140 = v136;
              *((_DWORD*)v140 + 1) = v141;
              *((_DWORD*)v137 + 1) = 2 * v141;
              v142 = *((_DWORD*)v134 + 2);
              LODWORD(v134) = *((_DWORD*)v134 + 3);
              v143 =
                  v142 +
                  2 * (((((v123 * (__int64)*((int*)v133 + 3)) &
                          0xFFFFFFFF00000000LL) +
                         v121 * (__int64)*((int*)v133 + 4) +
                         ((v124 * (__int64)*((int*)v133 + 2)) &
                          0xFFFFFFFF00000000LL) +
                         ((v125 * (__int64)*((int*)v133 + 1)) &
                          0x7FFFFFFF00000000LL) +
                         0x200000000LL) >>
                        32) +
                       ((unsigned __int64)(v122 * (__int64)*(int*)v133) >> 16));
              *((_DWORD*)v137 + 2) = 2 * v143;
              LODWORD(v133) =
                  (_DWORD)v134 +
                  2 * (((((v123 * (__int64)*((int*)v133 + 4)) &
                          0xFFFFFFFF00000000LL) +
                         v121 * (__int64)*((int*)v133 + 5) +
                         ((v124 * (__int64)*((int*)v133 + 3)) &
                          0xFFFFFFFF00000000LL) +
                         ((v125 * (__int64)*((int*)v133 + 2)) &
                          0x7FFFFFFF00000000LL) +
                         0x200000000LL) >>
                        32) +
                       ((unsigned __int64)(v122 * (__int64)*((int*)v133 + 1)) >>
                        16));
              *((_DWORD*)v140 + 2) = v143;
              *((_DWORD*)v140 + 3) = (_DWORD)v133;
              *((_DWORD*)v137 + 3) = 2 * (_DWORD)v133;
            } while (((4 * v91) & 0x1FFFFFFF0LL) != v131);
            v126 = -v130;
            v144 = (__int64)&v11[4 * v120 + -4 * v194_.v207];
            v120 -= v130;
            v127 = (char*)(v144 + v131 + 8);
            v128 = v91 & 3;
            if (v128 != 0) {
              goto LABEL_95;
            }
          }
          else {
            v126 = 0;
            v127 = &v194_.v195[4 * (v31 - (int)result)];
            v128 = v91 & 3;
            if (v128 == 0) {
              goto LABEL_97;
            }
          LABEL_95:
            v145 = &v13[4 * v126];
            v146 = &v35[4 * v126];
            do {
              --v128;
              v147 = (v125 * (__int64)*((int*)v127 - 3)) & 0x7FFFFFFF00000000LL;
              v148 =
                  ((v123 * (__int64)*((int*)v127 - 1)) & 0xFFFFFFFF00000000LL) +
                  v121 * (__int64)*(int*)v127;
              v149 = v124 * (__int64)*((int*)v127 - 2);
              v150 = *((_DWORD*)v127 - 4);
              v127 += 4;
              v151 = *(_DWORD*)v146;
              v146 += 4;
              LODWORD(v148) =
                  v151 + 2 * (((v148 + (v149 & 0xFFFFFFFF00000000LL) + v147 +
                                0x200000000LL) >>
                               32) +
                              ((unsigned __int64)(v122 * (__int64)v150) >> 16));
              *(_DWORD*)v145 = v148;
              v145 += 4;
              *(_DWORD*)&v11[4 * v120++] = 2 * v148;
            } while (v128 != 0);
          }
        LABEL_97:
          v92 = v13;
          v31 = v120;
        LABEL_98:
          v152 = (__int16)v215_.v215;
          v153 = SWORD1(v215_.v215);
          v154 = SWORD2(v215_.v215);
          v155 = v46 >> 6;
          v156 = SHIWORD(v215_.v215);
          v157 = (__int16)v215_.v216;
          v158 = SWORD1(v215_.v216);
          v159 = SWORD2(v215_.v216);
          v160 = SHIWORD(v215_.v216);
          v161 = (__int16)v215_.v217;
          v162 = SWORD1(v215_.v217);
          result = SWORD2(v215_.v217);
          v163 = SHIWORD(v215_.v217);
          v164 = (__int16)v215_.v218;
          v165 = SWORD1(v215_.v218);
          v166 = SWORD2(v215_.v218);
          v167 = SHIWORD(v215_.v218);
          if (v32 == -1) {
            v178 = v14[15];
            v179 = v194_.v203;
            v180 = 0;
            v181 = v194_.v203;
            do {
              v186 = *(_DWORD*)(a1 + 2340);
              v187 = v181[1];
              ++v181;
              v188 = ((unsigned __int64)(v152 * (__int64)v178) >> 16) +
                     (v186 >> 1) +
                     ((unsigned __int64)(v153 * (__int64)v179[6]) >> 16) +
                     ((unsigned __int64)(v154 * (__int64)v179[5]) >> 16) +
                     ((unsigned __int64)(v156 * (__int64)v179[4]) >> 16) +
                     ((unsigned __int64)(v157 * (__int64)v179[3]) >> 16) +
                     ((unsigned __int64)(v158 * (__int64)v179[2]) >> 16) +
                     ((unsigned __int64)(v159 * (__int64)v187) >> 16) +
                     ((unsigned __int64)(v160 * (__int64)*v179) >> 16) +
                     ((unsigned __int64)(v161 * (__int64)*(v179 - 1)) >> 16) +
                     ((unsigned __int64)(v162 * (__int64)*(v179 - 2)) >> 16);
              if (v186 == 16) {
                v188 +=
                    ((unsigned __int64)((int)result * (__int64)*(v179 - 3)) >>
                     16) +
                    ((unsigned __int64)(v163 * (__int64)*(v179 - 4)) >> 16) +
                    ((unsigned __int64)(v164 * (__int64)*(v179 - 5)) >> 16) +
                    ((unsigned __int64)(v165 * (__int64)*(v179 - 6)) >> 16) +
                    ((unsigned __int64)(v166 * (__int64)*(v179 - 7)) >> 16) +
                    ((unsigned __int64)(v167 * (__int64)*(v179 - 8)) >> 16);
              }
              v182 = *(_DWORD*)&v92[4 * v180];
              if (v188 <= -134217728) {
                v183 = -134217728;
              }
              else {
                v183 = v188;
              }
              if (v183 >= 0x7FFFFFF) {
                v183 = 0x7FFFFFF;
              }
              v184 = 16 * v183;
              v178 = v182 + 16 * v183;
              if (v178 < 0) {
                if ((v184 | v182) > -1) {
                  v178 = 0x7FFFFFFF;
                }
              }
              else if ((v184 & v182) < 0 != __OFADD__(v182, 16 * v183)) {
                v178 = 0x80000000;
              }
              v179[8] = v178;
              v179 = v181;
              v185 = (((int)((unsigned __int64)(v155 * (__int64)v178) >> 16) >>
                       7) +
                      1) >>
                     1;
              if (v185 <= -32768) {
                v185 = -32768;
              }
              if (v185 >= 0x7FFF) {
                LOWORD(v185) = 0x7FFF;
              }
              *(_WORD*)(2 * v180++ - 1) = v185;
              v129 = *(int*)(a1 + 2332);
            } while (v180 < v129);
          }
          else {
            v168 = v194_.v203;
            v169 = 0;
            do {
              v177 = *(_DWORD*)(a1 + 2340);
              v171 = ((unsigned __int64)(v152 * (__int64)v168[7]) >> 16) +
                     (v177 >> 1) +
                     ((unsigned __int64)(v153 * (__int64)v168[6]) >> 16) +
                     ((unsigned __int64)(v154 * (__int64)v168[5]) >> 16) +
                     ((unsigned __int64)(v156 * (__int64)v168[4]) >> 16) +
                     ((unsigned __int64)(v157 * (__int64)v168[3]) >> 16) +
                     ((unsigned __int64)(v158 * (__int64)v168[2]) >> 16) +
                     ((unsigned __int64)(v159 * (__int64)v168[1]) >> 16) +
                     ((unsigned __int64)(v160 * (__int64)*v168) >> 16) +
                     ((unsigned __int64)(v161 * (__int64)*(v168 - 1)) >> 16) +
                     ((unsigned __int64)(v162 * (__int64)*(v168 - 2)) >> 16);
              if (v177 == 16) {
                v171 +=
                    ((unsigned __int64)((int)result * (__int64)*(v168 - 3)) >>
                     16) +
                    ((unsigned __int64)(v163 * (__int64)*(v168 - 4)) >> 16) +
                    ((unsigned __int64)(v164 * (__int64)*(v168 - 5)) >> 16) +
                    ((unsigned __int64)(v165 * (__int64)*(v168 - 6)) >> 16) +
                    ((unsigned __int64)(v166 * (__int64)*(v168 - 7)) >> 16) +
                    ((unsigned __int64)(v167 * (__int64)*(v168 - 8)) >> 16);
              }
              v170 = *(_DWORD*)&v92[4 * v169];
              if (v171 <= -134217728) {
                v171 = -134217728;
              }
              if (v171 >= 0x7FFFFFF) {
                v171 = 0x7FFFFFF;
              }
              v172 = 16 * v171;
              v173 = __OFADD__(v170, 16 * v171);
              v174 = v170 + 16 * v171;
              if (v174 < 0) {
                if ((v172 | v170) <= -1) {
                  v175 = v174;
                }
                else {
                  v175 = 0x7FFFFFFF;
                }
              }
              else if ((v172 & v170) < 0 != v173) {
                v175 = 0x80000000;
              }
              else {
                v175 = v174;
              }
              v168[8] = v175;
              ++v168;
              v176 = (((int)((unsigned __int64)(v155 * (__int64)v175) >> 16) >>
                       7) +
                      1) >>
                     1;
              if (v176 <= -32768) {
                v176 = -32768;
              }
              if (v176 >= 0x7FFF) {
                LOWORD(v176) = 0x7FFF;
              }
              *(_WORD*)(v32 + 2 * v169++) = v176;
              v129 = *(int*)(a1 + 2332);
            } while (v169 < v129);
          }
          v14 = (int*)v194_.v204;
          v8 = v194_.v205;
          v13 = v194_.v208;
          v35 = v194_.v214;
          goto LABEL_14;
        }
        goto LABEL_91;
      }
      LODWORD(v91) = *(_DWORD*)(a1 + 2332);
      if ((int)v91 > 0) {
        v92 = v35;
        goto LABEL_98;
      }
    LABEL_91:
      v129 = (int)v91;
    LABEL_14:
      v36 = &v14[v129];
      v33 = &v35[4 * v129];
      v32 += 2 * v129;
      v37 = *(_QWORD*)v36;
      v38 = *((_QWORD*)v36 + 1);
      v39 = *((_QWORD*)v36 + 3);
      v34 = v194_.v213 + 1;
      *((_QWORD*)v14 + 2) = *((_QWORD*)v36 + 2);
      *((_QWORD*)v14 + 3) = v39;
      *(_QWORD*)v14 = v37;
      *((_QWORD*)v14 + 1) = v38;
      v40 = *((_QWORD*)v36 + 4);
      v41 = *((_QWORD*)v36 + 5);
      v43 = *((_QWORD*)v36 + 6);
      v42 = *((_QWORD*)v36 + 7);
      *((_QWORD*)v14 + 6) = v43;
      *((_QWORD*)v14 + 7) = v42;
      v44 = *(int*)(a1 + 2324);
      *((_QWORD*)v14 + 4) = v40;
      *((_QWORD*)v14 + 5) = v41;
      if ((__int64)v34 >= v44) {
        goto LABEL_138;
      }
    }
    *(_QWORD*)v82 = 0;
    v82[4] = 0;
    v82[2] = 4096;
    result = *(unsigned int*)(a1 + 2308);
    *(_DWORD*)(v194_.v206 + 4 * v34) = result;
    v85 = v194_.v201;
    v86 = v194_.v202 < 4 && v34 == 2;
    v87 = v86;
    if (v34 != 0) {
      goto LABEL_60;
    }
    goto LABEL_67;
  }
LABEL_138:
  v189 = *((_QWORD*)v14 + 5);
  v190 = v194_.v194;
  v194_.v194[4] = *((_QWORD*)v14 + 4);
  v190[5] = v189;
  v191 = *((_QWORD*)v14 + 7);
  v190[6] = *((_QWORD*)v14 + 6);
  v190[7] = v191;
  v192 = *((_QWORD*)v14 + 1);
  *v190 = *(_QWORD*)v14;
  v190[1] = v192;
  v193 = *((_QWORD*)v14 + 3);
  v190[2] = *((_QWORD*)v14 + 2);
  v190[3] = v193;
  return result;
}

__int64 opus_silk_51e80(__int64 result, char a2, __int64 a3, int a4,
                        unsigned int a5)
{
  char* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int* v19;
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
  int v30;
  int v31;
  int v32;
  int* v33;
  char* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  int* v40;
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
  int* v54;
  char* v55;
  int v56;
  int v57;
  int v58;
  int v59;

  if ((int)a5 < 1) {
    return result;
  }
  v5 = (char*)MovieData_c0ab8;
  v6 = 11;
  v7 = 34;
  v8 = 2 * (__int16)a4;
  v9 = v8 + (__int16)result;
  result = a5;
  v10 = 18 * (__int16)a4;
  if (a5 == 4) {
    v5 = (char*)MovieData_c0ac0;
  }
  v11 = (char*)MovieData_c0ad0;
  if (a5 == 4) {
    v11 = (char*)MovieData_c0ac8;
  }
  else {
    v6 = 3;
    v7 = 12;
  }
  if (a4 == 8) {
    v12 = v5;
  }
  else {
    v12 = v11;
  }
  if (a4 == 8) {
    v13 = v6;
  }
  else {
    v13 = v7;
  }
  v14 = a5 & 3;
  v15 = &v12[a2];
  if (v8 <= v10) {
    if (a5 >= 4) {
      v39 = 0;
      v40 = (int*)(a3 + 8);
      result = -(__int64)(a5 & 0x7FFFFFFC);
      do {
        v39 -= 4;
        v41 = v9 + *v15;
        if (v41 <= v8) {
          v42 = v8;
        }
        else {
          v42 = v9 + *v15;
        }
        if (v41 <= v10) {
          v43 = v42;
        }
        else {
          v43 = v10;
        }
        *(v40 - 2) = v43;
        v44 = v9 + v15[v13];
        if (v44 <= v8) {
          v45 = v8;
        }
        else {
          v45 = v9 + v15[v13];
        }
        if (v44 <= v10) {
          v46 = v45;
        }
        else {
          v46 = v10;
        }
        *(v40 - 1) = v46;
        v47 = v9 + v15[2 * v13];
        if (v47 <= v8) {
          v48 = v8;
        }
        else {
          v48 = v9 + v15[2 * v13];
        }
        if (v47 <= v10) {
          v49 = v48;
        }
        else {
          v49 = v10;
        }
        *v40 = v49;
        v50 = v15[3 * v13];
        v15 += 4 * v13;
        v51 = v9 + v50;
        if (v51 <= v8) {
          v52 = v8;
        }
        else {
          v52 = v51;
        }
        if (v51 <= v10) {
          v53 = v52;
        }
        else {
          v53 = v10;
        }
        v40[1] = v53;
        v40 += 4;
      } while (result != v39);
      v17 = -v39;
      if (v14 == 0) {
        return result;
      }
    }
    else {
      v17 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    v54 = (int*)(a3 + 4 * v17);
    v55 = &v12[a2 + v13 * v17];
    do {
      v56 = *v55;
      v55 += v13;
      v57 = v9 + v56;
      if (v57 <= v8) {
        v58 = v8;
      }
      else {
        v58 = v57;
      }
      if (v57 <= v10) {
        v59 = v58;
      }
      else {
        v59 = v10;
      }
      --v14;
      *v54++ = v59;
    } while (v14 != 0);
    return result;
  }
  if (a5 < 4) {
    v16 = 0;
    if ((a5 & 3) == 0) {
      return result;
    }
    goto LABEL_47;
  }
  v18 = 0;
  v19 = (int*)(a3 + 8);
  result = -(__int64)(a5 & 0x7FFFFFFC);
  do {
    v18 -= 4;
    v20 = v9 + *v15;
    if (v20 <= v10) {
      v21 = v10;
    }
    else {
      v21 = v9 + *v15;
    }
    if (v20 <= v8) {
      v22 = v21;
    }
    else {
      v22 = v8;
    }
    *(v19 - 2) = v22;
    v23 = v9 + v15[v13];
    if (v23 <= v10) {
      v24 = v10;
    }
    else {
      v24 = v9 + v15[v13];
    }
    if (v23 <= v8) {
      v25 = v24;
    }
    else {
      v25 = v8;
    }
    *(v19 - 1) = v25;
    v26 = v9 + v15[2 * v13];
    if (v26 <= v10) {
      v27 = v10;
    }
    else {
      v27 = v9 + v15[2 * v13];
    }
    if (v26 <= v8) {
      v28 = v27;
    }
    else {
      v28 = v8;
    }
    *v19 = v28;
    v29 = v15[3 * v13];
    v15 += 4 * v13;
    v30 = v9 + v29;
    if (v30 <= v10) {
      v31 = v10;
    }
    else {
      v31 = v30;
    }
    if (v30 <= v8) {
      v32 = v31;
    }
    else {
      v32 = v8;
    }
    v19[1] = v32;
    v19 += 4;
  } while (result != v18);
  v16 = -v18;
  if (v14 != 0) {
  LABEL_47:
    v33 = (int*)(a3 + 4 * v16);
    v34 = &v12[a2 + v13 * v16];
    do {
      v35 = *v34;
      v34 += v13;
      v36 = v9 + v35;
      if (v36 <= v10) {
        v37 = v10;
      }
      else {
        v37 = v36;
      }
      if (v36 <= v8) {
        v38 = v37;
      }
      else {
        v38 = v8;
      }
      --v14;
      *v33++ = v38;
    } while (v14 != 0);
  }
  return result;
}

__int64 opus_silk_52100(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                        int a5)
{
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  int v14;
  int v15;
  char* v17;
  int* v18;
  int v19;
  __int64 i;
  int v21;
  _QWORD* v22;
  __int64 v23;
  void* v24;
  int v25;
  int v26;
  unsigned __int16* v27;
  int v28;
  int v29;
  int j;
  int v31;
  int k;
  int v33;
  int m;
  int v35;
  int n;
  int v37;
  int ii;
  int v39;
  int jj;
  int v41;
  int kk;
  int v43;
  int mm;
  int v45;
  int nn;
  int v47;
  int i1;
  int v49;
  int i2;
  int v51;
  int i3;
  int v53;
  int i4;
  int v55;
  int i5;
  int v57;
  int i6;
  int v59;
  unsigned int v62;
  _QWORD v64[10];
  _QWORD v65[11];

  memset(v65, 0, 80);
  v8 = ec_dec_icdf(
      a1, (char*)MovieData_c0ad8 + 8 * ((int)a3 >> 1) + ((__int64)(int)a3 >> 1),
      8);
  v9 = a5 >> 4;
  v62 = a5;
  if ((a5 & 0xF) != 0) {
    v10 = v9 + 1;
  }
  else {
    v10 = v9;
  }
  if ((int)v10 >= 1) {
    v11 = 0;
    v12 = (char*)MovieData_c0ae0;
    v13 = (char*)MovieData_c0ae0 + 18 * v8;
    memset(v64, 0, sizeof(v64));
    do {
      *((_DWORD*)v64 + v11) = 0;
      v14 = ec_dec_icdf(a1, v13, 8);
      if (v14 == 17) {
        v15 = 0;
        do {
          if (v15++ == 9) {
            v17 = v12 + 1;
          }
          else {
            v17 = v12;
          }
          v14 = ec_dec_icdf(a1, v17 + 162, 8);
        } while (v14 == 17);
        *((_DWORD*)v64 + v11) = v15;
      }
      *((_DWORD*)v65 + v11++) = v14;
    } while (v11 != v10);
    v18 = (int*)v65;
    v19 = 0;
    for (i = v10; i != 0; --i) {
      while (1) {
        v21 = *v18++;
        v22 = (_QWORD*)(a2 + 2LL * (v19 >> 12));
        if (v21 < 1) {
          break;
        }
        silk_shell_decoder(v22, a1);
        v19 += 0x10000;
        if (--i == 0) {
          goto LABEL_18;
        }
      }
      v22[2] = 0;
      v22[3] = 0;
      *v22 = 0;
      v22[1] = 0;
      v19 += 0x10000;
    }
  LABEL_18:
    v23 = 0;
    v24 = MovieData_c0ae8;
    do {
      v25 = *((_DWORD*)v64 + v23);
      if (v25 >= 1) {
        v26 = *((_DWORD*)v64 + v23);
        v27 = (unsigned __int16*)(a2 + 32LL * (__int16)v23);
        v28 = *v27;
        do {
          v28 = ec_dec_icdf(a1, v24, 8) + 2 * v28;
          --v26;
        } while (v26 != 0);
        *v27 = v28;
        v29 = v27[1];
        for (j = v25; j != 0; --j) {
          v29 = ec_dec_icdf(a1, v24, 8) + 2 * v29;
        }
        v27[1] = v29;
        v31 = v27[2];
        for (k = v25; k != 0; --k) {
          v31 = ec_dec_icdf(a1, v24, 8) + 2 * v31;
        }
        v27[2] = v31;
        v33 = v27[3];
        for (m = v25; m != 0; --m) {
          v33 = ec_dec_icdf(a1, v24, 8) + 2 * v33;
        }
        v27[3] = v33;
        v35 = v27[4];
        for (n = v25; n != 0; --n) {
          v35 = ec_dec_icdf(a1, v24, 8) + 2 * v35;
        }
        v27[4] = v35;
        v37 = v27[5];
        for (ii = v25; ii != 0; --ii) {
          v37 = ec_dec_icdf(a1, v24, 8) + 2 * v37;
        }
        v27[5] = v37;
        v39 = v27[6];
        for (jj = v25; jj != 0; --jj) {
          v39 = ec_dec_icdf(a1, v24, 8) + 2 * v39;
        }
        v27[6] = v39;
        v41 = v27[7];
        for (kk = v25; kk != 0; --kk) {
          v41 = ec_dec_icdf(a1, v24, 8) + 2 * v41;
        }
        v27[7] = v41;
        v43 = v27[8];
        for (mm = v25; mm != 0; --mm) {
          v43 = ec_dec_icdf(a1, v24, 8) + 2 * v43;
        }
        v27[8] = v43;
        v45 = v27[9];
        for (nn = v25; nn != 0; --nn) {
          v45 = ec_dec_icdf(a1, v24, 8) + 2 * v45;
        }
        v27[9] = v45;
        v47 = v27[10];
        for (i1 = v25; i1 != 0; --i1) {
          v47 = ec_dec_icdf(a1, v24, 8) + 2 * v47;
        }
        v27[10] = v47;
        v49 = v27[11];
        for (i2 = v25; i2 != 0; --i2) {
          v49 = ec_dec_icdf(a1, v24, 8) + 2 * v49;
        }
        v27[11] = v49;
        v51 = v27[12];
        for (i3 = v25; i3 != 0; --i3) {
          v51 = ec_dec_icdf(a1, v24, 8) + 2 * v51;
        }
        v27[12] = v51;
        v53 = v27[13];
        for (i4 = v25; i4 != 0; --i4) {
          v53 = ec_dec_icdf(a1, v24, 8) + 2 * v53;
        }
        v27[13] = v53;
        v55 = v27[14];
        for (i5 = v25; i5 != 0; --i5) {
          v55 = ec_dec_icdf(a1, v24, 8) + 2 * v55;
        }
        v27[14] = v55;
        v57 = v27[15];
        for (i6 = v25; i6 != 0; --i6) {
          v57 = ec_dec_icdf(a1, v24, 8) + 2 * v57;
        }
        v59 = *((_DWORD*)v65 + v23);
        v27[15] = v57;
        *((_DWORD*)v65 + v23) = v59 | (32 * v25);
      }
      ++v23;
    } while (v23 != v10);
  }
  return silk_decode_signs(a1, a2, v62, a3, a4, v65);
}

__int64 opus_silk_52610(__int64 a1, int a2, unsigned int a3)
{
  int v3;
  int v7;
  __int64 result;
  int v9;
  char v10;
  int v11;
  bool v12;
  void* v13;
  void* v14;
  void* v15;
  void* v16;
  int v17;
  void* v18;
  unsigned int v19;

  v3 = (__int16)a2;
  *(_DWORD*)(a1 + 2332) = 5 * (__int16)a2;
  v7 = *(__int16*)(a1 + 2324) * (__int16)(5 * a2);
  if (*(_DWORD*)(a1 + 2316) == a2 && *(_DWORD*)(a1 + 2320) == a3) {
    result = 0;
  }
  else {
    result = silk_resampler_init(a1 + 2448, (unsigned int)(1000 * (__int16)a2),
                                 a3, 0);
    v9 = *(_DWORD*)(a1 + 2316);
    v10 = 0;
    *(_DWORD*)(a1 + 2320) = a3;
    if (v9 != a2) {
      goto LABEL_7;
    }
  }
  if (v7 == *(_DWORD*)(a1 + 2328)) {
    return result;
  }
  v10 = 1;
LABEL_7:
  v11 = *(_DWORD*)(a1 + 2324);
  v12 = v11 == 4;
  if (v11 == 4) {
    v13 = MovieData_c0a10;
  }
  else {
    v13 = MovieData_c0a00;
  }
  v14 = MovieData_c0a08;
  if (v12) {
    v14 = MovieData_c0a18;
  }
  if (a2 != 8) {
    v13 = v14;
  }
  *(_QWORD*)(a1 + 2392) = v13;
  if ((v10 & 1) != 0) {
    goto LABEL_28;
  }
  v15 = MovieData_c0a20;
  *(_DWORD*)(a1 + 2336) = 20 * v3;
  v16 = MovieData_c0a28;
  if ((a2 | 4) == 0xC) {
    v17 = 10;
  }
  else {
    v17 = 16;
  }
  *(_DWORD*)(a1 + 2340) = v17;
  if ((a2 | 4) != 0xC) {
    v15 = v16;
  }
  *(_QWORD*)(a1 + 2752) = v15;
  switch (a2) {
  case 16:
    v18 = MovieData_c0a40;
    goto LABEL_26;
  case 12:
    v18 = MovieData_c0a30;
  LABEL_26:
    *(_QWORD*)(a1 + 2384) = v18;
    break;
  case 8:
    v18 = MovieData_c0a38;
    goto LABEL_26;
  default:
    break;
  }
  v19 = result;
  *(_DWORD*)(a1 + 4188) = 0;
  *(_DWORD*)(a1 + 2376) = 1;
  *(_DWORD*)(a1 + 2308) = 100;
  *(_BYTE*)(a1 + 2312) = 10;
  memset_plt(a1 + 1284, 0, 1024);
  result = v19;
LABEL_28:
  *(_DWORD*)(a1 + 2316) = a2;
  *(_DWORD*)(a1 + 2328) = v7;
  return result;
}

__int64 opus_silk_55ea0(_DWORD* a1)
{
  memset_plt(a1, 0, 4288);
  a1[594] = 1;
  *a1 = 0x10000;
  silk_CNG_Reset(a1);
  silk_PLC_Reset(a1);
  return 0;
}

__int64 opus_silk_55f60(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int16* v8;
  __int16* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int16* v18;
  __int16* v19;
  int v20;
  int v21;
  int v22;

  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 >= 8) {
      v8 = (__int16*)(a2 + 8);
      v9 = (__int16*)(a1 + 8);
      v10 = 0;
      v6 = 0;
      do {
        v10 -= 8;
        v11 = ((*(v8 - 2) * *(v9 - 2)) >> a3) +
              ((*(v8 - 3) * *(v9 - 3)) >> a3) +
              ((*(v8 - 4) * *(v9 - 4)) >> a3) + v6;
        v12 = v8[3];
        v13 = ((v8[1] * v9[1]) >> a3) + ((*v8 * *v9) >> a3) +
              ((*(v8 - 1) * *(v9 - 1)) >> a3);
        v14 = v8[2];
        v8 += 8;
        v15 = v13 + v11;
        v16 = v14 * v9[2];
        v17 = v9[3];
        v9 += 8;
        v6 = ((v12 * v17) >> a3) + (v16 >> a3) + v15;
      } while (-(__int64)(a4 & 0x7FFFFFF8) != v10);
      v5 = -v10;
      if ((a4 & 7) == 0) {
        return v6;
      }
    }
    else {
      v5 = 0;
      v6 = 0;
      if ((a4 & 7) == 0) {
        return v6;
      }
    }
    v18 = (__int16*)(a2 + 2 * v5);
    v19 = (__int16*)(a1 + 2 * v5);
    do {
      v21 = *v19++;
      v20 = v21;
      v22 = *v18++;
      --v4;
      v6 += (v22 * v20) >> a3;
    } while (v4 != 0);
    return v6;
  }
  return 0;
}

__int64 opus_silk_560c0(__int64 result, __int64 a2, __int64 a3, __int16 a4,
                        int a5)
{
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  _WORD* v8;
  _WORD* v9;
  __int64 v10;
  __int16 v11;
  __int16 v12;
  _WORD* v13;
  __int16* v14;
  __int16* v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;

  if (a5 >= 1) {
    v5 = a5 & 3;
    if ((unsigned int)a5 < 4) {
      v6 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v7 = (_WORD*)(result + 4);
    v8 = (_WORD*)(a2 + 4);
    v9 = (_WORD*)(a3 + 4);
    v10 = 0;
    do {
      v10 -= 4;
      *(v7 - 2) = *(v8 - 2) +
                  ((unsigned int)(a4 * (__int16)(*(v9 - 2) - *(v8 - 2))) >> 2);
      *(v7 - 1) = *(v8 - 1) +
                  ((unsigned int)(a4 * (__int16)(*(v9 - 1) - *(v8 - 1))) >> 2);
      *v7 = *v8 + ((unsigned int)(a4 * (__int16)(*v9 - *v8)) >> 2);
      v11 = v8[1];
      v12 = v9[1];
      v8 += 4;
      v9 += 4;
      v7[1] = v11 + ((unsigned int)(a4 * (__int16)(v12 - v11)) >> 2);
      v7 += 4;
    } while (-(__int64)(a5 & 0x7FFFFFFC) != v10);
    v6 = -v10;
    if ((a5 & 3) != 0) {
    LABEL_8:
      v13 = (_WORD*)(result + 2 * v6);
      v14 = (__int16*)(a3 + 2 * v6);
      v15 = (__int16*)(a2 + 2 * v6);
      do {
        v17 = *v15++;
        v16 = v17;
        v18 = *v14++;
        --v5;
        *v13++ = v16 + ((unsigned int)(a4 * (__int16)(v18 - v16)) >> 2);
      } while (v5 != 0);
    }
  }
  return result;
}

int* opus_silk_570e0(int* result, __int64 a2, __int64 a3, int a4)
{
  int v4;
  __int64 v5;
  __int16* v6;
  _WORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int16* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;

  v4 = a4 >> 1;
  if (a4 >> 1 < 1) {
    return result;
  }
  if (v4 == 1) {
    v5 = 0;
  LABEL_15:
    v21 = (__int16*)(a3 + 4 * v5);
    v22 = result[1];
    v23 = (__int64)*v21 << 10;
    v24 = v23 - *result;
    v25 = v23 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v24) >> 16);
    *result = v25 + v24;
    v26 = (__int64)v21[1] << 10;
    v27 = (unsigned __int64)(9872 * (v26 - v22)) >> 16;
    result[1] = v26 + v27;
    v28 = (((v25 + (int)v22 + (int)v27) >> 10) + 1) >> 1;
    if (v28 <= -32768) {
      v28 = -32768;
    }
    if (v28 >= 0x7FFF) {
      LOWORD(v28) = 0x7FFF;
    }
    *(_WORD*)(a2 + 2 * v5) = v28;
    return result;
  }
  v6 = (__int16*)(a3 + 4);
  v7 = (_WORD*)(a2 + 2);
  v8 = 0;
  do {
    v9 = result[1];
    v8 -= 2;
    v10 = (__int64)*(v6 - 2) << 10;
    v11 = v10 - *result;
    LODWORD(v10) = v10 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v11) >> 16);
    *result = v10 + v11;
    v12 = (__int64)*(v6 - 1) << 10;
    v13 = (unsigned __int64)(9872 * (v12 - v9)) >> 16;
    result[1] = v12 + v13;
    v14 = ((((int)v10 + (int)v9 + (int)v13) >> 10) + 1) >> 1;
    if (v14 <= -32768) {
      v14 = -32768;
    }
    if (v14 >= 0x7FFF) {
      LOWORD(v14) = 0x7FFF;
    }
    *(v7 - 1) = v14;
    v15 = result[1];
    v16 = (__int64)*v6 << 10;
    v17 = v16 - *result;
    LODWORD(v16) = v16 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v17) >> 16);
    *result = v16 + v17;
    v18 = v6[1];
    v6 += 4;
    v18 <<= 10;
    v19 = (unsigned __int64)(9872 * (v18 - v15)) >> 16;
    result[1] = v18 + v19;
    v20 = ((((int)v16 + (int)v15 + (int)v19) >> 10) + 1) >> 1;
    if (v20 <= -32768) {
      v20 = -32768;
    }
    if (v20 >= 0x7FFF) {
      LOWORD(v20) = 0x7FFF;
    }
    *v7 = v20;
    v7 += 2;
  } while (-(__int64)(v4 & 0x7FFFFFFE) != v8);
  v5 = -v8;
  if ((v4 & 1) != 0) {
    goto LABEL_15;
  }
  return result;
}

int* opus_silk_572a0(int* a1, _WORD* a2, __int64 a3, int a4)
{
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int* result;
  int v15;
  int* v16;
  int* v17;
  int v18;
  int v19;
  _WORD* v20;
  int v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    __int64 v29;
    _BYTE v30[1936];
  } v28_;

  memset_plt(v28_.v30, 0, 1920);
  v8 = *((_QWORD*)a1 + 1);
  v28_.v28 = *(_QWORD*)a1;
  v28_.v29 = v8;
  v9 = *(__int16*)&(*(char (*)[4])0x4LL)[(_QWORD)MovieData_c0b68];
  v10 = *(__int16*)((char*)((_UNKNOWN*)0x6LL) + (_QWORD)MovieData_c0b68);
  v11 = *(__int16*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)MovieData_c0b68 + 2);
  v12 = *(__int16*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)MovieData_c0b68);
  while (1) {
    if (a4 >= 480) {
      v13 = 480;
    }
    else {
      v13 = a4;
    }
    result = opus_silk_574a0(a1 + 4, (__int64)v28_.v30, a3,
                             (__int16*)MovieData_c0b68, v13);
    if (a4 >= 3) {
      v15 = v13 + 3;
      v16 = (int*)&v28_.v28;
      v17 = (int*)&v28_.v28;
      do {
        v18 = v17[3];
        v17 += 3;
        v15 -= 3;
        v19 = (((int)(((unsigned __int64)(v10 * (__int64)v16[1]) >> 16) +
                      ((unsigned __int64)(v9 * (__int64)*v16) >> 16) +
                      ((unsigned __int64)(v11 * (__int64)v16[2]) >> 16) +
                      ((unsigned __int64)(v12 * (__int64)v18) >> 16)) >>
                5) +
               1) >>
              1;
        if (v19 <= -32768) {
          v19 = -32768;
        }
        if (v19 >= 0x7FFF) {
          LOWORD(v19) = 0x7FFF;
        }
        *a2 = v19;
        v20 = a2 + 2;
        v21 = (((int)(((unsigned __int64)(v16[2] * (__int64)v11) >> 16) +
                      ((unsigned __int64)(v16[1] * (__int64)v12) >> 16) +
                      ((unsigned __int64)(*v17 * (__int64)v10) >> 16) +
                      ((unsigned __int64)(v16[4] * (__int64)v9) >> 16)) >>
                5) +
               1) >>
              1;
        if (v21 <= -32768) {
          v21 = -32768;
        }
        if (v21 >= 0x7FFF) {
          LOWORD(v21) = 0x7FFF;
        }
        a2[1] = v21;
        v16 = v17;
        a2 += 2;
      } while (v15 > 5);
      a2 = v20;
    }
    a4 -= v13;
    if (a4 < 1) {
      break;
    }
    a3 += 2LL * v13;
    v22 = (__int64*)((char*)&v28_.v28 + 4 * v13);
    v24 = *v22;
    v23 = v22[1];
    v28_.v28 = v24;
    v28_.v29 = v23;
  }
  v25 = (__int64*)((char*)&v28_.v28 + 4 * v13);
  v27 = *v25;
  v26 = v25[1];
  *(_QWORD*)a1 = v27;
  *((_QWORD*)a1 + 1) = v26;
  return result;
}

int* opus_silk_574a0(int* result, __int64 a2, __int64 a3, __int16* a4, int a5)
{
  int v5;
  __int64 v6;
  __int16* v7;
  _DWORD* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  if (a5 >= 1) {
    v5 = *result;
    if (a5 == 1) {
      v6 = 0;
    }
    else {
      v7 = (__int16*)(a3 + 2);
      v8 = (_DWORD*)(a2 + 4);
      v6 = 0;
      do {
        v6 += 2;
        v9 = v5 + (*(v7 - 1) << 8);
        *(v8 - 1) = v9;
        v9 *= 4;
        v10 = result[1] + ((unsigned __int64)(*a4 * (__int64)v9) >> 16);
        *result = v10;
        result[1] = (unsigned __int64)(a4[1] * (__int64)v9) >> 16;
        v11 = *v7;
        v7 += 2;
        v12 = v10 + (v11 << 8);
        *v8 = v12;
        v8 += 2;
        v13 = 4 * v12;
        v5 = result[1] + ((unsigned __int64)(*a4 * (__int64)(4 * v12)) >> 16);
        *result = v5;
        result[1] = (unsigned __int64)(a4[1] * (__int64)v13) >> 16;
      } while ((a5 & 0x7FFFFFFE) != v6);
    }
    if ((a5 & 1) != 0) {
      v14 = v5 + (*(__int16*)(a3 + 2 * v6) << 8);
      *(_DWORD*)(a2 + 4 * v6) = v14;
      v14 *= 4;
      *result = result[1] + ((unsigned __int64)(*a4 * (__int64)v14) >> 16);
      result[1] = (unsigned __int64)(a4[1] * (__int64)v14) >> 16;
    }
  }
  return result;
}

int* opus_silk_575a0(__int64 a1, _WORD* a2, __int16* a3, int a4)
{
  int v4;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  __int16* v15;
  int v16;
  char* v17;
  __int16* v18;
  int* result;
  int v20;
  unsigned int v21;
  __int16* v22;
  int v23;
  __int16* v24;
  __int16* v25;
  int v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  struct {
    _QWORD* v34;
    int* v35;
  } v34_;

  v4 = *(_DWORD*)(a1 + 268);
  v9 = 4LL * v4;
  v10 = (_QWORD**)__builtin_alloca((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL);
  if (v9 < 0xFFFFFFFFFFFFFFF0LL) {
    v11 = 4LL * v4;
  }
  else {
    v11 = 0;
  }
  memset_plt(v10 + 2, 0, v11);
  v12 = *(_QWORD*)(a1 + 24);
  v13 = *(_QWORD*)(a1 + 32);
  v14 = (int*)a1;
  v15 = a3;
  v34_.v34 = (_QWORD*)(a1 + 24);
  v16 = *(_DWORD*)(a1 + 272);
  *v10 = v12;
  v10[1] = v13;
  v17 = (char*)MovieData_c0b70;
  v34_.v35 = (int*)a1;
  while (1) {
    v18 = v15;
    if (a4 < v4) {
      v4 = a4;
    }
    result = silk_resampler_private_up2_HQ(v14, (__int64)(v10 + 2), v15, v4);
    if (v4 << 17 >= 1) {
      v20 = 0;
      do {
        v21 = 3 * (unsigned __int16)v20;
        v22 = (__int16*)v10 + (v20 >> 16);
        v20 += v16;
        v23 = (unsigned __int16)(v21 >> 14);
        v24 = (__int16*)&v17[8 * v23];
        v25 = (__int16*)&v17[8 * (11 - v23)];
        v26 = (((*v24 * *v22 + v24[1] * v22[1] + v24[2] * v22[2] +
                 v24[3] * v22[3] + v25[3] * v22[4] + v25[2] * v22[5] +
                 v25[1] * v22[6] + *v25 * v22[7]) >>
                14) +
               1) >>
              1;
        if (v26 <= -32768) {
          v26 = -32768;
        }
        if (v26 >= 0x7FFF) {
          LOWORD(v26) = 0x7FFF;
        }
        *a2++ = v26;
      } while (v20 < v4 << 17);
    }
    a4 -= v4;
    if (a4 < 1) {
      break;
    }
    v14 = v34_.v35;
    v15 = &v18[v4];
    v27 = (_QWORD*)((char*)v10 + 4 * v4);
    v29 = *v27;
    v28 = v27[1];
    v4 = v34_.v35[67];
    *v10 = v29;
    v10[1] = v28;
  }
  v30 = v34_.v34;
  v31 = (_QWORD*)((char*)v10 + 4 * v4);
  v33 = *v31;
  v32 = v31[1];
  *v34_.v34 = v33;
  v30[1] = v32;
  return result;
}

__int64 opus_silk_58660(unsigned int a1)
{
  if ((a1 & 0x80000000) != 0) {
    if (a1 >= 0xFFFFFF41) {
      return MovieData_a61e0[-a1 >> 5] -
             MovieData_a61f8[2 * (-a1 >> 5)] * (-a1 & 0x1F);
    }
    else {
      return 0;
    }
  }
  else if (a1 <= 0xBF) {
    return MovieData_a6210[a1 >> 5] +
           MovieData_a61f8[2 * (a1 >> 5)] * (a1 & 0x1F);
  }
  else {
    return 0x7FFF;
  }
}

__int64 opus_silk_586e0(__int64 result, _DWORD* a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  int* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  _DWORD* v29;
  __int64 v30;
  _DWORD* v31;
  __int64 v32;
  int v33;
  int v34;
  _DWORD* v35;
  _DWORD* v36;
  __int64 v37;
  int v38;
  int v39;
  _DWORD* v40;
  _DWORD* v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  _DWORD* v50;
  _DWORD* v51;
  int v52;
  int v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  _DWORD* v57;
  _DWORD* v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  _DWORD* v63;
  _DWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  _DWORD* v68;
  _DWORD* v69;
  int v70;
  int v71;

  if (a4 < 1) {
    if (a4 >= a3) {
      return result;
    }
    v4 = a4;
    v7 = (int*)(result + 4LL * a4 - 4);
    goto LABEL_21;
  }
  v4 = (unsigned int)a4;
  v5 = a4 & 7;
  if ((unsigned int)a4 >= 8) {
    v8 = a2 + 4;
    v6 = 0;
    do {
      *(v8 - 4) = v6;
      *(v8 - 3) = v6 + 1;
      *(v8 - 2) = v6 + 2;
      *(v8 - 1) = v6 + 3;
      *v8 = v6 + 4;
      v8[1] = v6 + 5;
      v9 = v6 + 6;
      v10 = v6 + 7;
      v6 += 8;
      v8[2] = v9;
      v8[3] = v10;
      v8 += 8;
    } while (v6 != (a4 & 0x7FFFFFF8));
  }
  else {
    v6 = 0;
  }
  if ((a4 & 7) != 0) {
    do {
      a2[v6] = v6;
      ++v6;
      --v5;
    } while (v5 != 0);
  }
  if (a4 != 1) {
    if (a4 == 2) {
      v11 = 1;
    }
    else {
      v27 = a2 + 1;
      v28 = (_DWORD*)(result + 4);
      v29 = a2 + 2;
      v30 = 0;
      v31 = (_DWORD*)(result + 8);
      v11 = 1;
      v32 = 3;
      do {
        v34 = *(_DWORD*)(result + 4 * v11);
        v35 = v28;
        v36 = v27;
        v37 = v11;
        while (1) {
          v38 = *(v35 - 1);
          if (v34 >= v38) {
            break;
          }
          *v35-- = v38;
          --v37;
          *v36 = *(v36 - 1);
          --v36;
          if (v37 + 1 <= 1) {
            LODWORD(v37) = 0;
            break;
          }
        }
        *(_DWORD*)(result + 4LL * (int)v37) = v34;
        a2[(int)v37] = v11;
        v39 = v11 + 1;
        v40 = v31;
        v41 = v29;
        v42 = v32;
        v43 = *(_DWORD*)(result + 4 * (v11 + 1));
        do {
          v44 = *(v40 - 1);
          if (v43 >= v44) {
            v33 = v42 - 1;
            goto LABEL_40;
          }
          *v40-- = v44;
          --v42;
          *v41 = *(v41 - 1);
          --v41;
        } while (v42 > 1);
        v33 = 0;
      LABEL_40:
        v11 += 2;
        v30 += 2;
        v27 += 2;
        v28 += 2;
        *(_DWORD*)(result + 4LL * v33) = v43;
        a2[v33] = v39;
        v32 += 2;
        v29 += 2;
        v31 += 2;
      } while (v30 != (((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((((_BYTE)a4 - 1) & 1) != 0) {
      v12 = (int*)(result + 4 * v11);
      v13 = &a2[v11];
      v14 = v11;
      v15 = *v12;
      while (1) {
        v16 = *(v12 - 1);
        if (v15 >= v16) {
          break;
        }
        *v12-- = v16;
        --v14;
        *v13 = *(v13 - 1);
        --v13;
        if (v14 + 1 <= 1) {
          LODWORD(v14) = 0;
          break;
        }
      }
      *(_DWORD*)(result + 4LL * (int)v14) = v15;
      a2[(int)v14] = v11;
    }
  }
  if (a4 >= a3) {
    return result;
  }
  v17 = a4 - 1;
  v7 = (int*)(result + 4LL * (unsigned int)a4 - 4);
  if (a4 != 1) {
    v45 = a4 - 2;
    v46 = a3;
    if (((a3 - a4) & 1) != 0) {
      v48 = *(_DWORD*)(result + 4LL * (unsigned int)a4);
      if (v48 < *v7) {
        v49 = (unsigned int)(a4 - 1);
        v50 = &a2[v49];
        v51 = (_DWORD*)(result + v49 * 4);
        v52 = a4 - 2;
        while (1) {
          v53 = *(_DWORD*)(result + 4LL * (unsigned int)v52);
          if (v48 >= v53) {
            break;
          }
          *v51-- = v53;
          *v50-- = a2[v52];
          v54 = v52-- <= 0;
          if (v54) {
            v52 = -1;
            break;
          }
        }
        v55 = 4LL * v52 + 4;
        *(_DWORD*)(result + v55) = v48;
        *(_DWORD*)((char*)a2 + v55) = a4;
      }
      v47 = (unsigned int)a4 + 1LL;
      if (a3 - 1LL == a4) {
        return result;
      }
    }
    else {
      v47 = (unsigned int)a4;
      if (a3 - 1LL == a4) {
        return result;
      }
    }
    v56 = (unsigned int)(a4 - 1);
    v57 = &a2[v56];
    v58 = (_DWORD*)(result + v56 * 4);
    while (1) {
      v60 = *(_DWORD*)(result + 4 * v47);
      if (v60 < *v7) {
        break;
      }
      v61 = v47 + 1;
      v62 = *(_DWORD*)(result + 4 * (v47 + 1));
      if (v62 < *v7) {
        goto LABEL_72;
      }
    LABEL_63:
      v47 += 2;
      if (v47 == v46) {
        return result;
      }
    }
    v63 = v58;
    v64 = v57;
    v65 = v17;
    while (1) {
      v66 = *(_DWORD*)(result + 4LL * (unsigned int)--v65);
      if (v60 >= v66) {
        break;
      }
      *v63-- = v66;
      *v64-- = a2[v65];
      if (v65 <= 0) {
        v65 = -1;
        break;
      }
    }
    v67 = 4LL * v65 + 4;
    *(_DWORD*)(result + v67) = v60;
    *(_DWORD*)((char*)a2 + v67) = v47;
    v61 = v47 + 1;
    v62 = *(_DWORD*)(result + 4 * (v47 + 1));
    if (v62 >= *v7) {
      goto LABEL_63;
    }
  LABEL_72:
    v68 = v58;
    v69 = v57;
    v70 = v45;
    while (1) {
      v71 = *(_DWORD*)(result + 4LL * (unsigned int)v70);
      if (v62 >= v71) {
        break;
      }
      *v68-- = v71;
      *v69-- = a2[v70];
      v54 = v70-- <= 0;
      if (v54) {
        v70 = -1;
        break;
      }
    }
    v59 = 4LL * v70 + 4;
    *(_DWORD*)(result + v59) = v62;
    *(_DWORD*)((char*)a2 + v59) = v61;
    goto LABEL_63;
  }
LABEL_21:
  v18 = a4 - 1LL;
  v19 = ((_BYTE)a3 - (_BYTE)v4) & 3;
  v20 = v4;
  if ((((_BYTE)a3 - (_BYTE)v4) & 3) != 0) {
    v20 = v4;
    do {
      v21 = *(_DWORD*)(result + 4 * v20);
      if (v21 < *v7) {
        *(_DWORD*)(result + 4 * v18) = v21;
        a2[v18] = v20;
      }
      ++v20;
      --v19;
    } while (v19 != 0);
  }
  if ((unsigned __int64)(v4 - a3) <= 0xFFFFFFFFFFFFFFFCLL) {
    v22 = (int*)(result + 4 * v20 + 8);
    do {
      v23 = *(v22 - 2);
      if (v23 < *v7) {
        *(_DWORD*)(result + 4 * v18) = v23;
        a2[v18] = v20;
        v24 = *(v22 - 1);
        if (v24 >= *v7) {
        LABEL_31:
          v25 = *v22;
          if (*v22 >= *v7) {
            goto LABEL_32;
          }
          goto LABEL_36;
        }
      }
      else {
        v24 = *(v22 - 1);
        if (v24 >= *v7) {
          goto LABEL_31;
        }
      }
      *(_DWORD*)(result + 4 * v18) = v24;
      a2[v18] = v20 + 1;
      v25 = *v22;
      if (*v22 >= *v7) {
      LABEL_32:
        v26 = v22[1];
        if (v26 < *v7) {
          goto LABEL_37;
        }
        goto LABEL_28;
      }
    LABEL_36:
      *(_DWORD*)(result + 4 * v18) = v25;
      a2[v18] = v20 + 2;
      v26 = v22[1];
      if (v26 < *v7) {
      LABEL_37:
        *(_DWORD*)(result + 4 * v18) = v26;
        a2[v18] = v20 + 3;
      }
    LABEL_28:
      v22 += 4;
      v20 += 4;
    } while (a3 != v20);
  }
  return result;
}

__int16* opus_silk_58bc0(__int16* result, _DWORD* a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int16* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int16* i;
  int v23;
  int v24;
  int v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  _WORD* v29;
  __int64 v30;
  __int16* v31;
  __int64 v32;
  int v33;
  int v34;
  _DWORD* v35;
  __int16* v36;
  __int64 v37;
  __int16* v38;
  __int16 v39;
  int v40;
  int v41;
  _WORD* v42;
  _DWORD* v43;
  __int64 v44;
  int v45;
  int v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  _DWORD* v51;
  __int16* v52;
  unsigned int v53;
  int v54;
  bool v55;
  signed int v56;
  signed int v57;
  int v58;
  int v59;
  int v60;
  __int16* v61;
  _DWORD* v62;
  int v63;
  int v64;
  int v65;
  __int16* v66;
  _DWORD* v67;
  unsigned int v68;
  int v69;

  if (a4 < 1) {
    if (a4 >= a3) {
      return result;
    }
    v4 = a4;
    v7 = &result[a4 - 1];
  LABEL_21:
    v18 = a4 - 1LL;
    v19 = ((_BYTE)a3 - (_BYTE)v4) & 3;
    v20 = v4;
    if ((((_BYTE)a3 - (_BYTE)v4) & 3) != 0) {
      v20 = v4;
      do {
        v21 = result[v20];
        if (v21 > *v7) {
          result[v18] = v21;
          a2[v18] = v20;
        }
        ++v20;
        --v19;
      } while (v19 != 0);
    }
    if ((unsigned __int64)(v4 - a3) <= 0xFFFFFFFFFFFFFFFCLL) {
      for (i = &result[v20 + 2];; i += 4) {
        v23 = *(i - 2);
        if (v23 > *v7) {
          result[v18] = v23;
          a2[v18] = v20;
          v24 = *(i - 1);
          if (v24 <= *v7) {
          LABEL_31:
            v25 = *i;
            if (v25 <= *v7) {
              goto LABEL_32;
            }
            goto LABEL_36;
          }
        }
        else {
          v24 = *(i - 1);
          if (v24 <= *v7) {
            goto LABEL_31;
          }
        }
        result[v18] = v24;
        a2[v18] = v20 + 1;
        v25 = *i;
        if (v25 <= *v7) {
        LABEL_32:
          v26 = i[1];
          if (v26 > *v7) {
            goto LABEL_37;
          }
          goto LABEL_28;
        }
      LABEL_36:
        result[v18] = v25;
        a2[v18] = v20 + 2;
        v26 = i[1];
        if (v26 > *v7) {
        LABEL_37:
          result[v18] = v26;
          a2[v18] = v20 + 3;
        }
      LABEL_28:
        v20 += 4;
        if (a3 == v20) {
          return result;
        }
      }
    }
    return result;
  }
  v4 = (unsigned int)a4;
  v5 = a4 & 7;
  if ((unsigned int)a4 >= 8) {
    v8 = a2 + 4;
    v6 = 0;
    do {
      *(v8 - 4) = v6;
      *(v8 - 3) = v6 + 1;
      *(v8 - 2) = v6 + 2;
      *(v8 - 1) = v6 + 3;
      *v8 = v6 + 4;
      v8[1] = v6 + 5;
      v9 = v6 + 6;
      v10 = v6 + 7;
      v6 += 8;
      v8[2] = v9;
      v8[3] = v10;
      v8 += 8;
    } while (v6 != (a4 & 0x7FFFFFF8));
  }
  else {
    v6 = 0;
  }
  if ((a4 & 7) != 0) {
    do {
      a2[v6] = v6;
      ++v6;
      --v5;
    } while (v5 != 0);
  }
  if (a4 != 1) {
    if (a4 == 2) {
      v11 = 1;
    }
    else {
      v27 = a2 + 1;
      v28 = a2 + 2;
      v29 = result + 2;
      v30 = 0;
      v31 = result;
      v11 = 1;
      v32 = 3;
      do {
        v34 = result[v11];
        v35 = v27;
        v36 = v31;
        v37 = v11;
        v38 = v31;
        while (1) {
          v40 = *v38--;
          v39 = v40;
          if (v34 <= v40) {
            break;
          }
          v36[1] = v39;
          --v37;
          *v35 = *(v35 - 1);
          --v35;
          v36 = v38;
          if (v37 + 1 <= 1) {
            LODWORD(v37) = 0;
            break;
          }
        }
        result[(int)v37] = v34;
        a2[(int)v37] = v11;
        v41 = v11 + 1;
        v42 = v29;
        v43 = v28;
        v44 = v32;
        v45 = result[v11 + 1];
        do {
          v46 = (__int16)*(v42 - 1);
          if (v45 <= v46) {
            v33 = v44 - 1;
            goto LABEL_40;
          }
          *v42-- = v46;
          --v44;
          *v43 = *(v43 - 1);
          --v43;
        } while (v44 > 1);
        v33 = 0;
      LABEL_40:
        v11 += 2;
        v30 += 2;
        v31 += 2;
        v27 += 2;
        v32 += 2;
        v28 += 2;
        v29 += 2;
        result[v33] = v45;
        a2[v33] = v41;
      } while (v30 != (((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((((_BYTE)a4 - 1) & 1) != 0) {
      v12 = &result[v11];
      v13 = &a2[v11];
      v14 = v11;
      v15 = *v12;
      while (1) {
        v16 = *(v12 - 1);
        if (v15 <= v16) {
          break;
        }
        *v12-- = v16;
        --v14;
        *v13 = *(v13 - 1);
        --v13;
        if (v14 + 1 <= 1) {
          LODWORD(v14) = 0;
          break;
        }
      }
      result[(int)v14] = v15;
      a2[(int)v14] = v11;
    }
  }
  if (a4 >= a3) {
    return result;
  }
  v17 = a4 - 1;
  v7 = &result[a4 - 1];
  if (a4 == 1) {
    goto LABEL_21;
  }
  v47 = a4 - 2;
  v48 = a3;
  if (((a3 - a4) & 1) == 0) {
    v49 = (unsigned int)a4;
    if (a3 - 1LL != a4) {
      goto LABEL_64;
    }
    return result;
  }
  v50 = result[a4];
  if (v50 > *v7) {
    v51 = &a2[v17];
    v52 = &result[v17];
    v53 = a4 - 2;
    while (1) {
      v54 = result[v53];
      if (v50 <= v54) {
        break;
      }
      *v52-- = v54;
      *v51-- = a2[v53];
      v55 = (int)v53-- <= 0;
      if (v55) {
        v53 = -1;
        break;
      }
    }
    v56 = v53 + 1;
    result[v56] = v50;
    a2[v56] = a4;
  }
  v49 = (unsigned int)a4 + 1LL;
  if (a3 - 1LL != a4) {
  LABEL_64:
    while (1) {
      v58 = result[v49];
      if (v58 > *v7) {
        break;
      }
      v59 = v49 + 1;
      v60 = result[v49 + 1];
      if (v60 > *v7) {
        goto LABEL_72;
      }
    LABEL_63:
      v49 += 2;
      if (v49 == v48) {
        return result;
      }
    }
    v61 = &result[v17];
    v62 = &a2[v17];
    v63 = v17;
    while (1) {
      v64 = result[--v63];
      if (v58 <= v64) {
        break;
      }
      *v61-- = v64;
      *v62-- = a2[v63];
      if (v63 <= 0) {
        v63 = -1;
        break;
      }
    }
    v65 = v63 + 1;
    result[v65] = v58;
    a2[v65] = v49;
    v59 = v49 + 1;
    v60 = result[v49 + 1];
    if (v60 <= *v7) {
      goto LABEL_63;
    }
  LABEL_72:
    v66 = &result[v17];
    v67 = &a2[v17];
    v68 = v47;
    while (1) {
      v69 = result[v68];
      if (v60 <= v69) {
        break;
      }
      *v66-- = v69;
      *v67-- = a2[v68];
      v55 = (int)v68-- <= 0;
      if (v55) {
        v68 = -1;
        break;
      }
    }
    v57 = v68 + 1;
    result[v57] = v60;
    a2[v57] = v59;
    goto LABEL_63;
  }
  return result;
}

__int16* opus_silk_590a0(__int16* result, int a2)
{
  __int64 v2;
  __int16* v3;
  __int64 v4;
  int v5;
  __int16* v6;
  __int64 v7;
  __int16* v8;
  __int16 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  int v14;
  int v15;
  __int16* v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int16* v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  __int16* v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int16* v32;
  int v33;

  if (a2 >= 2) {
    if ((unsigned int)(a2 - 2) >= 3) {
      v2 = 1;
      v11 = 2;
      v12 = 0;
      v13 = result;
      do {
        v15 = result[v2];
        v16 = v13;
        v17 = v11;
        while (1) {
          v18 = *v16;
          if (v15 >= v18) {
            break;
          }
          v16[1] = v18;
          --v17;
          --v16;
          if (v17 <= 1) {
            v19 = 0;
            goto LABEL_20;
          }
        }
        v19 = v17 - 1;
      LABEL_20:
        v20 = 0;
        result[v19] = v15;
        v21 = result[v2 + 1];
        while (1) {
          v22 = &v13[v20];
          v23 = v22[1];
          if (v21 >= v23) {
            break;
          }
          --v20;
          v22[2] = v23;
          if (v11 + v20 + 1 <= 1) {
            v24 = 0;
            goto LABEL_25;
          }
        }
        v24 = v11 + v20;
      LABEL_25:
        v25 = 0;
        result[v24] = v21;
        v26 = result[v2 + 2];
        while (1) {
          v27 = &v13[v25];
          v28 = v27[2];
          if (v26 >= v28) {
            break;
          }
          --v25;
          v27[3] = v28;
          if (v12 + v25 + 4 <= 1) {
            v29 = 0;
            goto LABEL_30;
          }
        }
        v29 = v12 + v25 + 3;
      LABEL_30:
        v30 = 0;
        result[v29] = v26;
        v31 = result[v2 + 3];
        do {
          v32 = &v13[v30];
          v33 = v32[3];
          if (v31 >= v33) {
            v14 = v12 + v30 + 4;
            goto LABEL_14;
          }
          --v30;
          v32[4] = v33;
        } while (v12 + v30 + 5 > 1);
        v14 = 0;
      LABEL_14:
        v2 += 4;
        v12 += 4;
        v11 += 4;
        v13 += 4;
        result[v14] = v31;
      } while (v12 != (((unsigned int)a2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
    }
    else {
      v2 = 1;
    }
    if ((((_BYTE)a2 - 1) & 3) != 0) {
      v3 = &result[v2];
      v4 = 0;
      do {
        v5 = result[v2];
        v6 = v3;
        v7 = v2;
        v8 = v3;
        while (1) {
          v10 = *--v8;
          v9 = v10;
          if (v5 >= v10) {
            break;
          }
          --v7;
          *v6 = v9;
          v6 = v8;
          if (v7 + 1 <= 1) {
            LODWORD(v7) = 0;
            break;
          }
        }
        ++v2;
        ++v4;
        ++v3;
        result[(int)v7] = v5;
      } while (v4 != (((_BYTE)a2 - 1) & 3));
    }
  }
  return result;
}

unsigned __int16* opus_silk_59ee0(unsigned __int16* result, _DWORD* a2,
                                  _DWORD* a3, int* a4, int a5, int a6)
{
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int16* v11;
  __int16* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16* v33;
  __int16* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  __int16* v40;
  __int16* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;

  v6 = 8 * a5;
  *a2 = *((_DWORD*)result + 1);
  *a3 = *((_DWORD*)result + 2);
  v7 = 2LL * a6;
  *((_DWORD*)result + 1) = *(_DWORD*)((char*)a2 + v7);
  *((_DWORD*)result + 2) = *(_DWORD*)((char*)a3 + v7);
  v8 = *a4;
  if (a5 >= 1) {
    v9 = *result;
    v10 = result[1];
    v11 = (__int16*)(a2 + 1);
    v12 = (__int16*)a3 + 1;
    v13 = (__int16)(0x10000 / v6);
    v14 = v13 * (__int16)(v8 - v9);
    v15 = v13 * (__int16)(*((_WORD*)a4 + 2) - v10);
    if (v6 <= 1) {
      v16 = 1;
    }
    else {
      v16 = (unsigned int)v6;
    }
    v17 = ((v14 >> 15) + 1) >> 1;
    v18 = ((v15 >> 15) + 1) >> 1;
    v19 = v18 + v10;
    v20 = v17 + v9;
    do {
      v21 = v20 << 16;
      v20 += v17;
      v22 = *v11 + *(v11 - 2);
      v23 = *(v11++ - 1);
      v24 = (__int16)v19;
      v19 += v18;
      v25 = (((int)(((unsigned __int64)(v21 * (__int64)((v23 << 10) +
                                                        (v22 << 9)) +
                                        ((__int64)*v12 << 40)) >>
                     32) +
                    ((unsigned __int64)(v23 * (__int64)v24) >> 5)) >>
              7) +
             1) >>
            1;
      if (v25 <= -32768) {
        v25 = -32768;
      }
      if (v25 >= 0x7FFF) {
        LOWORD(v25) = 0x7FFF;
      }
      --v16;
      *v12++ = v25;
    } while (v16 != 0);
    v8 = *a4;
  }
  if (v6 < a6) {
    v26 = *((__int16*)a4 + 2);
    v27 = v8 << 16;
    v28 = v6;
    if ((a6 & 1) != 0) {
      v28 = v6 | 1LL;
      v29 = 2 * v28;
      v30 =
          (((int)(((unsigned __int64)(v27 *
                                          (__int64)((*(__int16*)((char*)a2 +
                                                                 v29)
                                                     << 10) +
                                                    ((SLOWORD(a2[v6 / 2u + 1]) +
                                                      SLOWORD(a2[v6 / 2u]))
                                                     << 9)) +
                                      ((__int64)*(__int16*)((char*)a3 + v29)
                                       << 40)) >>
                   32) +
                  ((unsigned __int64)(*(__int16*)((char*)a2 + v29) *
                                      (__int64)*((__int16*)a4 + 2)) >>
                   5)) >>
            7) +
           1) >>
          1;
      if (v30 <= -32768) {
        v30 = -32768;
      }
      if (v30 >= 0x7FFF) {
        LOWORD(v30) = 0x7FFF;
      }
      *((_WORD*)a3 + v28) = v30;
    }
    if (a6 - 1LL != v6) {
      v31 = a6 - v28;
      v32 = 2 * v28 + 4;
      v33 = (__int16*)((char*)a3 + v32);
      v34 = (__int16*)((char*)a2 + v32);
      do {
        v35 = (((int)(((unsigned __int64)(v27 * (__int64)((*(v34 - 1) << 10) +
                                                          ((*v34 + *(v34 - 2))
                                                           << 9)) +
                                          ((__int64)*(v33 - 1) << 40)) >>
                       32) +
                      ((unsigned __int64)(*(v34 - 1) * (__int64)v26) >> 5)) >>
                7) +
               1) >>
              1;
        if (v35 <= -32768) {
          v35 = -32768;
        }
        if (v35 >= 0x7FFF) {
          LOWORD(v35) = 0x7FFF;
        }
        *(v33 - 1) = v35;
        v36 = v34[1] + *(v34 - 1);
        v37 = *v34;
        v34 += 2;
        v38 = (((int)(((unsigned __int64)(v27 * (__int64)((v37 << 10) +
                                                          (v36 << 9)) +
                                          ((__int64)*v33 << 40)) >>
                       32) +
                      ((unsigned __int64)(v37 * (__int64)v26) >> 5)) >>
                7) +
               1) >>
              1;
        if (v38 <= -32768) {
          v38 = -32768;
        }
        if (v38 >= 0x7FFF) {
          LOWORD(v38) = 0x7FFF;
        }
        v31 -= 2;
        *v33 = v38;
        v33 += 2;
      } while (v31 != 0);
    }
    v8 = *a4;
  }
  *result = v8;
  result[1] = a4[1];
  if (a6 >= 1) {
    if (a6 == 1) {
      v39 = 1;
    }
    else {
      v40 = (__int16*)(a2 + 1);
      v41 = (__int16*)(a3 + 1);
      v39 = 1;
      do {
        v42 = *(v40 - 1);
        v43 = *(v41 - 1);
        v39 += 2;
        v44 = v42 + v43;
        v45 = v42 - v43;
        if (v44 >= 0x7FFF) {
          v44 = 0x7FFF;
        }
        if (v44 <= -32768) {
          LOWORD(v44) = 0x8000;
        }
        if (v45 >= 0x7FFF) {
          v45 = 0x7FFF;
        }
        *(v40 - 1) = v44;
        v46 = *v41;
        if (v45 <= -32768) {
          LOWORD(v45) = 0x8000;
        }
        *(v41 - 1) = v45;
        v47 = *v40;
        v48 = v47 + v46;
        v49 = v47 - v46;
        if (v48 >= 0x7FFF) {
          v48 = 0x7FFF;
        }
        if (v48 <= -32768) {
          LOWORD(v48) = 0x8000;
        }
        if (v49 >= 0x7FFF) {
          v49 = 0x7FFF;
        }
        *v40 = v48;
        v40 += 2;
        if (v49 <= -32768) {
          LOWORD(v49) = 0x8000;
        }
        *v41 = v49;
        v41 += 2;
      } while (v39 - (a6 & 0x7FFFFFFE) != 1);
    }
    if ((a6 & 1) != 0) {
      v50 = 2 * v39;
      v51 = *((__int16*)a2 + v39);
      v52 = *(__int16*)((char*)a3 + v50);
      v53 = v51 + v52;
      v54 = v51 - v52;
      if (v53 >= 0x7FFF) {
        v53 = 0x7FFF;
      }
      if (v53 <= -32768) {
        LOWORD(v53) = 0x8000;
      }
      if (v54 >= 0x7FFF) {
        v54 = 0x7FFF;
      }
      *(_WORD*)((char*)a2 + v50) = v53;
      if (v54 <= -32768) {
        LOWORD(v54) = 0x8000;
      }
      *(_WORD*)((char*)a3 + v50) = v54;
    }
  }
  return result;
}

__int64 opus_silk_5ace0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, int a6, int a7, int a8)
{
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  int v14;
  int v15;
  int v16;
  __int16* v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int16* v22;
  _WORD* v23;
  __int16* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int16* v35;
  int v36;
  int v37;
  int v38;

  if (a7 >= 1) {
    v8 = a8 + a6;
    if (a8 + a6 >= 1) {
      v9 = 0;
      v10 = (unsigned int)a7;
      v11 = 2LL * (int)v8;
      v12 = 2LL * a6;
      while (1) {
        v13 = (__int16*)(a3 + 10 * v9);
        v14 = v13[1];
        v15 = v13[2];
        v16 = v13[3];
        v17 = (__int16*)(a2 - 2LL * *(int*)(a4 + 4 * v9));
        v18 = *v13;
        v19 = v13[4];
        if (v8 >= 4) {
          break;
        }
        v20 = 0;
        if ((v8 & 3) != 0) {
          goto LABEL_27;
        }
      LABEL_4:
        a2 += v12;
        ++v9;
        result += v11;
        if (v9 == v10) {
          return result;
        }
      }
      v21 = 0;
      v20 = 0;
      do {
        v22 = (__int16*)(a2 + v21);
        v23 = (_WORD*)(result + v21);
        v24 = &v17[v21 / 2];
        v20 += 4;
        v25 = *(__int16*)(a2 + v21);
        v21 += 8LL;
        *v23 = v25;
        v26 = v25 - ((((v24[2] * v18 + v24[1] * v14 + *v24 * v15 +
                        *(v24 - 1) * v16 + *(v24 - 2) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v26 <= -32768) {
          v26 = -32768;
        }
        if (v26 >= 0x7FFF) {
          v26 = 0x7FFF;
        }
        *v23 = v26;
        *v23 = (unsigned int)(v26 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v27 = v22[1];
        v23[1] = v27;
        v28 = v27 - ((((v24[3] * v18 + v24[2] * v14 + v24[1] * v15 +
                        *v24 * v16 + *(v24 - 1) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v28 <= -32768) {
          v28 = -32768;
        }
        if (v28 >= 0x7FFF) {
          v28 = 0x7FFF;
        }
        v23[1] = v28;
        v23[1] = (unsigned int)(v28 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v29 = v22[2];
        v23[2] = v29;
        v30 = v29 - ((((v24[4] * v18 + v24[3] * v14 + v24[2] * v15 +
                        v24[1] * v16 + *v24 * v19) >>
                       13) +
                      1) >>
                     1);
        if (v30 <= -32768) {
          v30 = -32768;
        }
        if (v30 >= 0x7FFF) {
          v30 = 0x7FFF;
        }
        v23[2] = v30;
        v23[2] = (unsigned int)(v30 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v31 = v22[3];
        v23[3] = v31;
        v32 = v31 - ((((v24[5] * v18 + v24[4] * v14 + v24[3] * v15 +
                        v24[2] * v16 + v24[1] * v19) >>
                       13) +
                      1) >>
                     1);
        if (v32 <= -32768) {
          v32 = -32768;
        }
        if (v32 >= 0x7FFF) {
          v32 = 0x7FFF;
        }
        v23[3] = v32;
        v23[3] = (unsigned int)(v32 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
      } while ((v11 & 0xFFFFFFF8) != v21);
      v17 = (__int16*)((char*)v17 + v21);
      if ((v8 & 3) == 0) {
        goto LABEL_4;
      }
    LABEL_27:
      v33 = 2 * v20;
      v34 = v8 & 3;
      v35 = v17;
      do {
        v36 = *(__int16*)(a2 + v33);
        *(_WORD*)(result + v33) = *(_WORD*)(a2 + v33);
        v37 = v35[1];
        ++v35;
        v38 = v36 - ((((v17[2] * v18 + v37 * v14 + *v17 * v15 +
                        *(v17 - 1) * v16 + *(v17 - 2) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v38 <= -32768) {
          v38 = -32768;
        }
        if (v38 >= 0x7FFF) {
          v38 = 0x7FFF;
        }
        --v34;
        *(_WORD*)(result + v33) = v38;
        *(_WORD*)(result + v33) =
            (unsigned int)(v38 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v33 += 2;
        v17 = v35;
      } while (v34 != 0);
      goto LABEL_4;
    }
  }
  return result;
}

#pragma GCC visibility pop
