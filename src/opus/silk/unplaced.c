#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* silk_VQ_WMat_EC_c(_BYTE* result, unsigned int*, int*, _DWORD*, _DWORD*,
                         int*, __int64, __int64, __int64, __int16, int, int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 opus_silk_3014c0_alt1(_QWORD, _QWORD) __asm__("opus_silk_3014c0");
__int64 silk_biquad_alt_stride1(_QWORD, _QWORD, _QWORD);
__int64 silk_bwexpander_32(_QWORD, _QWORD, _QWORD);
__int64 silk_lin2log(unsigned int);
__int64 silk_log2lin(unsigned int);
extern _QWORD SdkData_c1ef14[4];
extern _UNKNOWN** SdkData_e878a0;
extern _UNKNOWN** SdkData_e87918[2];
extern _UNKNOWN** SdkData_e87920;
extern _UNKNOWN* SdkData_e877d8;
extern _UNKNOWN* SdkData_e878b0;
extern _UNKNOWN* SdkData_e878b8;
extern _UNKNOWN* SdkData_e878c0;
extern _UNKNOWN* SdkData_e878c8;
extern char* SdkData_e87928;
__int64 opus_silk_2ecc40(__int64 result, __int64 a2, int a3, int a4,
                         unsigned int a5);
__int64 opus_silk_2ed790(__int64 result, __int64 a2);
void* opus_silk_2ee2e0(void* result, __int64 a2, __int64 a3,
                       unsigned __int64 a4, int a5, int a6);
__int64 opus_silk_2ef640(__int16* a1, __int16* a2, int a3);
__int64 opus_silk_2f67c0(__int64 result, int a2, int a3);
__int64 opus_silk_2fa2a0(__int64 result, char a2, __int64 a3, int a4,
                         unsigned int a5);
__int64 opus_silk_2fe380(__int64 a1, __int64 a2, char a3, int a4);
__int64 opus_silk_2fe4e0(__int64 result, __int64 a2, __int64 a3, __int16 a4,
                         int a5);
__int64 opus_silk_2fe960(__int64 a1, __int64 a2, _BYTE* a3, int* a4, _DWORD* a5,
                         _DWORD* a6, int* a7, __int16 a8, int a9);
int* opus_silk_2ff500(int* result, __int64 a2, __int64 a3, int a4);
int* opus_silk_2ff8c0(int* result, __int64 a2, __int64 a3, __int16* a4, int a5);
__int64 opus_silk_300b00(__int64 result, _DWORD* a2, int a3, int a4);
__int16* opus_silk_300fe0(__int16* result, _DWORD* a2, int a3, int a4);
__int16* opus_silk_3014c0(__int16* result, int a2);
unsigned __int16* opus_silk_302300(unsigned __int16* result, _DWORD* a2,
                                   _DWORD* a3, int* a4, int a5, int a6);
__int64 opus_silk_303100(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, int a6, int a7, int a8);

__int64 opus_silk_2ecc40(__int64 result, __int64 a2, int a3, int a4,
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
    result = silk_bwexpander_32(
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

__int64 opus_silk_2ed790(__int64 result, __int64 a2)
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
      v6 = (int*)((char*)SdkData_e877d8 + 12 * v4);
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
        v21 = (int*)&SdkData_c1ef14[v4];
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
        v11 = (int*)&SdkData_c1ef14[v4];
        v12 = *v11 + ((unsigned __int64)((v11[2] - (__int64)*v11) * v5) >> 16);
        v13 = v11[1] +
              ((unsigned __int64)((v11[3] - (__int64)v11[1]) * v5) >> 16);
      }
      v23 = __PAIR64__(v13, v12);
      goto LABEL_11;
    }
    v15 = (char*)SdkData_e877d8 + 12 * v4;
    v16 = *(_QWORD*)v15;
    LODWORD(v15) = *((_DWORD*)v15 + 2);
    v24 = v16;
    v25 = (int)v15;
    v14 = SdkData_c1ef14[v4];
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

void* opus_silk_2ee2e0(void* result, __int64 a2, __int64 a3,
                       unsigned __int64 a4, int a5, int a6)
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
  unsigned __int64 v31;
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
      return (void*)memset_plt(result, nullptr, 4 * a5, a4);
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
          *((_DWORD*)result + v9) = v18;
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
          *((_DWORD*)result + v9 + 1) = v33;
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
        *((_DWORD*)result + v9) = v48;
      }
    }
  }
  return result;
}

__int64 opus_silk_2ef640(__int16* a1, __int16* a2, int a3)
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
  result = opus_silk_3014c0_alt1(a1, (unsigned int)a3);
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

__int64 opus_silk_2f67c0(__int64 result, int a2, int a3)
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

__int64 opus_silk_2fa2a0(__int64 result, char a2, __int64 a3, int a4,
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
  v5 = (char*)SdkData_e878b0;
  v6 = 11;
  v7 = 34;
  v8 = 2 * (__int16)a4;
  v9 = v8 + (__int16)result;
  result = a5;
  v10 = 18 * (__int16)a4;
  if (a5 == 4) {
    v5 = (char*)SdkData_e878b8;
  }
  v11 = (char*)SdkData_e878c8;
  if (a5 == 4) {
    v11 = (char*)SdkData_e878c0;
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

__int64 opus_silk_2fe380(__int64 a1, __int64 a2, char a3, int a4)
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

__int64 opus_silk_2fe4e0(__int64 result, __int64 a2, __int64 a3, __int16 a4,
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

__int64 opus_silk_2fe960(__int64 a1, __int64 a2, _BYTE* a3, int* a4, _DWORD* a5,
                         _DWORD* a6, int* a7, __int16 a8, int a9)
{
  int v9;
  _DWORD* v10;
  int* v11;
  _BYTE* v13;
  int* v14;
  _DWORD* v15;
  int* v16;
  _DWORD* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  _BYTE* v25;
  int v26;
  int* v27;
  _DWORD* v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  _BYTE* v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  char* v42;
  char* v43;
  char* v44;
  char* v45;
  char* v46;
  __int64 v47;
  int v49;
  int v50;
  char* v51;
  _WORD* v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 result;
  int v59;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int v71;
  __int64 v73;
  __int64 v74;

  v9 = a9;
  v10 = a5;
  v11 = a4;
  v73 = 0;
  v74 = 0;
  if (a9 <= 0) {
    *a3 = 1;
    memcpy_plt(a2, (char*)&v74 + 4, a9);
    v49 = *v11;
    *a3 = 2;
    memcpy_plt(a2, (char*)&v74 + 4, a9);
    v50 = 0;
    goto LABEL_37;
  }
  v13 = (char*)&v74 + 4;
  v14 = a7;
  v15 = a6;
  v16 = a7;
  v17 = a6;
  v70 = 0;
  v67 = (__int64)*SdkData_e87918[0];
  v18 = (__int64)*SdkData_e87920;
  v64 = (__int64)*SdkData_e878a0;
  v19 = *a4;
  v20 = (unsigned int)a9;
  v21 = *SdkData_e87928;
  do {
    while (1) {
      v22 = silk_log2lin(6229 - v19);
      silk_VQ_WMat_EC_c(v13, (unsigned int*)&v74, (int*)&v73 + 1, &v73, v17,
                        v16, v64, v18, v67, a8, v22 - 51, v21);
      v23 = HIDWORD(v73) + v70;
      v24 = HIDWORD(v73) + v70 <= -1 ? 0x7FFFFFFF : HIDWORD(v73) + v70;
      v70 = v24;
      if ((int)(silk_lin2log((int)v73 + 51) + v19) < 896) {
        break;
      }
      v19 = v19 + silk_lin2log((int)v73 + 51) - 896;
      v17 += 25;
      v16 += 5;
      ++v13;
      if (--v20 == 0) {
        goto LABEL_9;
      }
    }
    v19 = 0;
    v17 += 25;
    v16 += 5;
    ++v13;
    --v20;
  } while (v20 != 0);
LABEL_9:
  v25 = (char*)&v74 + 4;
  v59 = v19;
  *a3 = 0;
  memcpy_plt(a2, (char*)&v74 + 4, a9);
  v26 = 0;
  v27 = v14;
  v28 = v15;
  v68 = *(__int64*)((char*)SdkData_e87918[0] +
                    (unsigned __int64)((__int64*)0x4LL) + 4);
  v65 = *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)SdkData_e878a0 + 4);
  v63 = *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)SdkData_e87920 + 4);
  v29 = *((char*)((char*)0x0LL) + (_QWORD)SdkData_e87928);
  v30 = (unsigned int)a9;
  v31 = *a4;
  do {
    while (1) {
      v32 = silk_log2lin(6229 - v31);
      silk_VQ_WMat_EC_c(v25, (unsigned int*)&v74, (int*)&v73 + 1, &v73, v28,
                        v27, v65, v63, v68, a8, v32 - 51, v29);
      if (HIDWORD(v73) + v26 <= -1) {
        v26 = 0x7FFFFFFF;
      }
      else {
        v26 += HIDWORD(v73);
      }
      if ((int)(silk_lin2log((int)v73 + 51) + v31) < 896) {
        break;
      }
      v31 = v31 + silk_lin2log((int)v73 + 51) - 896;
      v28 += 25;
      v27 += 5;
      --v30;
      ++v25;
      if (v30 == 0) {
        goto LABEL_16;
      }
    }
    v31 = 0;
    v28 += 25;
    v27 += 5;
    --v30;
    ++v25;
  } while (v30 != 0);
LABEL_16:
  if (v26 <= v70) {
    *a3 = 1;
    memcpy_plt(a2, (char*)&v74 + 4, a9);
    v23 = v26;
    v59 = v31;
  }
  v71 = 0;
  v33 = (char*)&v74 + 4;
  v34 = 0;
  v69 = *(__int64*)((char*)SdkData_e87918[0] +
                    (unsigned __int64)((__int64*)0xCLL) + 4);
  v66 = *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)SdkData_e878a0 + 4);
  v35 = *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)SdkData_e87920 + 4);
  v36 = *((char*)((char*)0x0LL) + (_QWORD)SdkData_e87928 + 2);
  v37 = (unsigned int)a9;
  v38 = *a4;
  do {
    while (1) {
      v39 = silk_log2lin(6229 - v38);
      silk_VQ_WMat_EC_c(v33, (unsigned int*)&v74, (int*)&v73 + 1, &v73, v15,
                        v14, v66, v35, v69, a8, v39 - 51, v36);
      v40 = v74 + v71;
      if ((int)v74 + v71 <= -1) {
        v40 = 0x7FFFFFFF;
      }
      v71 = v40;
      if (HIDWORD(v73) + v34 <= -1) {
        v34 = 0x7FFFFFFF;
      }
      else {
        v34 += HIDWORD(v73);
      }
      if ((int)(silk_lin2log((int)v73 + 51) + v38) < 896) {
        break;
      }
      v38 = v38 + silk_lin2log((int)v73 + 51) - 896;
      v15 += 25;
      v14 += 5;
      --v37;
      ++v33;
      if (v37 == 0) {
        goto LABEL_27;
      }
    }
    v38 = 0;
    v15 += 25;
    v14 += 5;
    --v37;
    ++v33;
  } while (v37 != 0);
LABEL_27:
  if (v34 <= v23) {
    *a3 = 2;
    memcpy_plt(a2, (char*)&v74 + 4, a9);
    v59 = v38;
  }
  v41 = 0;
  v9 = a9;
  v11 = a4;
  v10 = a5;
  v42 = (char*)SdkData_e878a0[(char)*a3];
  v43 = v42 + 1;
  v44 = v42 + 2;
  v45 = v42 + 3;
  v46 = v42 + 4;
  if (a9 == 1) {
    v47 = a1;
  }
  else {
    v47 = a1;
    v51 = (char*)(a2 + 1);
    v52 = (_WORD*)(a1 + 10);
    do {
      v41 -= 2;
      *(v52 - 5) = v42[5 * *(v51 - 1)] << 7;
      *(v52 - 4) = v43[5 * *(v51 - 1)] << 7;
      *(v52 - 3) = v44[5 * *(v51 - 1)] << 7;
      *(v52 - 2) = v45[5 * *(v51 - 1)] << 7;
      *(v52 - 1) = v46[5 * *(v51 - 1)] << 7;
      *v52 = v42[5 * *v51] << 7;
      v52[1] = v43[5 * *v51] << 7;
      v52[2] = v44[5 * *v51] << 7;
      v52[3] = v45[5 * *v51] << 7;
      v53 = *v51;
      v51 += 2;
      v52[4] = v46[5 * v53] << 7;
      v52 += 10;
    } while (-(__int64)(a9 & 0x7FFFFFFE) != v41);
    v41 = -v41;
    if ((a9 & 1) == 0) {
      goto LABEL_36;
    }
  }
  v54 = 10 * v41;
  *(_WORD*)(v47 + v54) = v42[5 * *(char*)(a2 + v41)] << 7;
  *(_WORD*)(v47 + 2 + v54) = v43[5 * *(char*)(a2 + v41)] << 7;
  *(_WORD*)(v47 + 4 + v54) = v44[5 * *(char*)(a2 + v41)] << 7;
  *(_WORD*)(v47 + 6 + v54) = v45[5 * *(char*)(a2 + v41)] << 7;
  *(_WORD*)(v47 + 8 + v54) = v46[5 * *(char*)(a2 + v41)] << 7;
LABEL_36:
  v49 = v59;
  v50 = v71;
LABEL_37:
  *v11 = v49;
  if (v9 == 2) {
    v55 = 1;
  }
  else {
    v55 = 2;
  }
  result = silk_lin2log(v50 >> v55);
  *v10 = -3 * (__int16)(result - 1920);
  return result;
}

int* opus_silk_2ff500(int* result, __int64 a2, __int64 a3, int a4)
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

int* opus_silk_2ff8c0(int* result, __int64 a2, __int64 a3, __int16* a4, int a5)
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

__int64 opus_silk_300b00(__int64 result, _DWORD* a2, int a3, int a4)
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

__int16* opus_silk_300fe0(__int16* result, _DWORD* a2, int a3, int a4)
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

__int16* opus_silk_3014c0(__int16* result, int a2)
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

unsigned __int16* opus_silk_302300(unsigned __int16* result, _DWORD* a2,
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

__int64 opus_silk_303100(__int64 result, __int64 a2, __int64 a3, __int64 a4,
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
