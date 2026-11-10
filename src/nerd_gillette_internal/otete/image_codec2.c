#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_751ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87ada0(_QWORD, _QWORD);
__int64 SdkRoutine_87adb0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87add0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87adf0(void);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(_QWORD,
                                                                  _QWORD,
                                                                  _QWORD);
extern _UNKNOWN SdkData_ca7dde;
extern __int16 SdkData_ca7dde_alt1[30] __asm__("SdkData_ca7dde");
extern unsigned __int8 SdkData_ca7e1a[256];
extern unsigned __int8 SdkData_ca7f1a[3074];
extern void (*SdkData_e89220[16])();
__int64
nerd_gillette_internal_otete_ImageCodec2_Quantization(void* this_, int* a2,
                                                      unsigned __int64 a3);
__int64
nerd_gillette_internal_otete_ImageCodec2_Quantization_5ul(_BYTE* a1,
                                                          unsigned __int8 a2);
__int64 nerd_gillette_internal_otete_ImageCodec2_Quantization_0ul(_BYTE* a1,
                                                                  char a2);
__int64 nerd_gillette_internal_otete_ImageCodec2_Dequantization(void* this_,
                                                                int* a2,
                                                                __int64 a3);
__int64
nerd_gillette_internal_otete_ImageCodec2_OldDequantization(void* this_, int* a2,
                                                           unsigned __int64 a3);
double nerd_gillette_internal_otete_ImageCodec2_Encode(unsigned int* a1,
                                                       unsigned int* a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4);
__int64
nerd_gillette_internal_otete_ImageCodec2_DecodeInPlace_74dc00(__int64 a1,
                                                              __int64 a2);
__int64
nerd_gillette_internal_otete_ImageCodec2_DecodeInPlace_74ead0(__int64 a1,
                                                              __int64 a2);
__int64 nerd_gillette_internal_otete_ImageCodec2_EncodeInPlace(__int64* a1,
                                                               __int64* a2,
                                                               __int64 a3);
bool nerd_gillette_internal_otete_ImageCodec2_EncodeInPlaceOnlyQuints(
    __int64* a1);
double nerd_gillette_internal_otete_ImageCodec2_EncodeWithQuints(
    __int64* a1, unsigned __int8** a2, unsigned int* a3);
unsigned int*
nerd_gillette_internal_otete_ImageCodec2_Decode_751560(unsigned int* result);
unsigned int*
nerd_gillette_internal_otete_ImageCodec2_Decode_751800(unsigned int* result);
__int64

nerd_gillette_internal_otete_ImageCodec2_Quantization(void* this_, int* a2,
                                                      unsigned __int64 a3)
{
  __int16* v3;
  int v4;
  unsigned __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
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

  v3 = (__int16*)((char*)&SdkData_ca7dde + 10 * SdkData_ca7e1a[(int)a2]);
  v4 = *(_DWORD*)this_;
  if (a3 != 0) {
    v5 = a3 - 1;
  }
  else {
    v5 = 0;
  }
  v6 = (_DWORD)a2 + *v3;
  if ((unsigned int)v6 >= 0xFF) {
    v7 = 255;
  }
  else {
    v7 = (_DWORD)a2 + *v3;
  }
  if (v6 >= 0) {
    v8 = v7;
  }
  else {
    v8 = 0;
  }
  v9 = (v4 - v8) * (v4 - v8);
  if (v9 >= 65025) {
    LOBYTE(v8) = 0;
  }
  if (a3 < 2) {
    v10 = 0;
  LABEL_14:
    *(_DWORD*)this_ = (unsigned __int8)v8;
    return v10;
  }
  if (v9 >= 65025) {
    v9 = 65025;
  }
  v12 = (_DWORD)a2 + v3[1];
  if ((unsigned int)v12 >= 0xFF) {
    v13 = 255;
  }
  else {
    v13 = (_DWORD)a2 + v3[1];
  }
  if (v12 >= 0) {
    v14 = v13;
  }
  else {
    v14 = 0;
  }
  v15 = (v4 - v14) * (v4 - v14);
  v10 = v15 < v9;
  if (v15 < v9) {
    LOBYTE(v8) = v14;
  }
  if (v5 == 1) {
    goto LABEL_14;
  }
  if (v15 < v9) {
    v9 = (v4 - v14) * (v4 - v14);
  }
  v16 = (_DWORD)a2 + v3[2];
  if ((unsigned int)v16 >= 0xFF) {
    v17 = 255;
  }
  else {
    v17 = (_DWORD)a2 + v3[2];
  }
  if (v16 < 0) {
    v17 = 0;
  }
  v18 = (v4 - v17) * (v4 - v17);
  if (v18 < v9) {
    LOBYTE(v8) = v17;
    v10 = 2;
  }
  if (v5 == 2) {
    goto LABEL_14;
  }
  if (v18 < v9) {
    v9 = (v4 - v17) * (v4 - v17);
  }
  v19 = (_DWORD)a2 + v3[3];
  if ((unsigned int)v19 >= 0xFF) {
    v20 = 255;
  }
  else {
    v20 = (_DWORD)a2 + v3[3];
  }
  if (v19 >= 0) {
    v21 = v20;
  }
  else {
    v21 = 0;
  }
  v22 = (v4 - v21) * (v4 - v21);
  if (v22 < v9) {
    LOBYTE(v8) = v21;
    v10 = 3;
  }
  if (v5 == 3) {
    goto LABEL_14;
  }
  v23 = v3[4];
  if (v22 >= v9) {
    v24 = v9;
  }
  else {
    v24 = (v4 - v21) * (v4 - v21);
  }
  v25 = (_DWORD)a2 + v23;
  if ((unsigned int)v25 >= 0xFF) {
    v26 = 255;
  }
  else {
    v26 = v25;
  }
  if (v25 >= 0) {
    v27 = v26;
  }
  else {
    v27 = 0;
  }
  if ((v4 - v27) * (v4 - v27) < v24) {
    LOBYTE(v8) = v27;
    v10 = 4;
  }
  *(_DWORD*)this_ = (unsigned __int8)v8;
  return v10;
}

__int64

nerd_gillette_internal_otete_ImageCodec2_Quantization_5ul(_BYTE* a1,
                                                          unsigned __int8 a2)
{
  unsigned int v2;
  int v3;
  __int16 v4;
  char v5;

  v2 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] + 256 +
                      (unsigned __int8)*a1 - (unsigned int)a2];
  v3 = SdkData_ca7dde_alt1
           [5 * SdkData_ca7e1a[a2] +
            SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] + 256 +
                           (unsigned __int8)*a1 - (unsigned int)a2]] +
       a2;
  if ((unsigned int)v3 >= 0xFF) {
    LOBYTE(v4) = -1;
  }
  else {
    v4 = SdkData_ca7dde_alt1
             [5 * SdkData_ca7e1a[a2] +
              SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] + 256 +
                             (unsigned __int8)*a1 - (unsigned int)a2]] +
         a2;
  }
  if (v3 >= 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  *a1 = v5;
  return v2;
}

__int64 nerd_gillette_internal_otete_ImageCodec2_Quantization_0ul(_BYTE* a1,
                                                                  char a2)
{
  *a1 = a2;
  return 0;
}

__int64 nerd_gillette_internal_otete_ImageCodec2_Dequantization(void* this_,
                                                                int* a2,
                                                                __int64 a3)
{
  int v3;
  int v4;

  v3 = (_DWORD)a2 + SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[(int)a2] + a3];
  v4 = v3 & ~(v3 >> 31);
  if (v4 >= 255) {
    v4 = 255;
  }
  *(_DWORD*)this_ = v4;
  return (unsigned int)a3;
}

__int64

nerd_gillette_internal_otete_ImageCodec2_OldDequantization(void* this_, int* a2,
                                                           unsigned __int64 a3)
{
  int v3;
  bool v4;
  bool v5;
  int v6;
  int v7;
  char v8;
  unsigned __int64 v9;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  int v23;

  if ((unsigned int)a2 >= 0xFF) {
    v3 = 255;
  }
  else {
    v3 = (int)a2;
  }
  if ((int)a2 < 0) {
    v3 = 0;
  }
  v4 = v3 == 0;
  if (v3 == 255) {
    v4 = false;
  }
  v5 = v3 == 255;
  if (a3 == 0) {
    LODWORD(v9) = 0;
    goto LABEL_20;
  }
  if ((unsigned int)((_DWORD)a2 + 16) >= 0xFF) {
    v6 = 255;
  }
  else {
    v6 = (_DWORD)a2 + 16;
  }
  if ((int)a2 >= -16) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 != 0) {
    if (v7 == 255) {
      v8 = 1;
      if (v5) {
        v9 = 1;
        goto LABEL_28;
      }
      goto LABEL_25;
    }
  }
  else {
    v9 = 1;
    if (v4) {
      v4 = true;
      v8 = v5;
      goto LABEL_28;
    }
    v4 = true;
  }
  v8 = v5;
LABEL_25:
  if (a3 == 1) {
    *(_DWORD*)this_ = (unsigned __int8)v7;
    return 1;
  }
  v9 = 2;
LABEL_28:
  v3 = (_DWORD)a2 - 16;
  if ((unsigned int)((_DWORD)a2 - 16) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < 16) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v11 = 1;
      v12 = v4;
      if ((v8 & 1) != 0) {
        v12 = v4;
        goto LABEL_41;
      }
    }
    else {
      v12 = v4;
      v11 = v8;
    }
  }
  else {
    v12 = 1;
    v11 = v8;
    if (v4) {
      v11 = v8;
      goto LABEL_41;
    }
  }
  if (v9 >= a3) {
    goto LABEL_20;
  }
  ++v9;
LABEL_41:
  v3 = (_DWORD)a2 + 64;
  if ((unsigned int)((_DWORD)a2 + 64) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < -64) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v13 = 1;
      v14 = v12;
      if ((v11 & 1) != 0) {
        v14 = v12;
        goto LABEL_54;
      }
    }
    else {
      v14 = v12;
      v13 = v11;
    }
  }
  else {
    v14 = 1;
    v13 = v11;
    if ((v12 & 1) != 0) {
      v13 = v11;
      goto LABEL_54;
    }
  }
  if (v9 >= a3) {
    goto LABEL_20;
  }
  ++v9;
LABEL_54:
  v3 = (_DWORD)a2 - 64;
  if ((unsigned int)((_DWORD)a2 - 64) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < 64) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v15 = 1;
      v16 = v14;
      if ((v13 & 1) != 0) {
        v16 = v14;
        goto LABEL_67;
      }
    }
    else {
      v16 = v14;
      v15 = v13;
    }
  }
  else {
    v16 = 1;
    v15 = v13;
    if ((v14 & 1) != 0) {
      v15 = v13;
      goto LABEL_67;
    }
  }
  if (v9 >= a3) {
    goto LABEL_20;
  }
  ++v9;
LABEL_67:
  v3 = (_DWORD)a2 + 8;
  if ((unsigned int)((_DWORD)a2 + 8) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < -8) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v17 = 1;
      v18 = v16;
      if ((v15 & 1) != 0) {
        v18 = v16;
        goto LABEL_80;
      }
    }
    else {
      v18 = v16;
      v17 = v15;
    }
  }
  else {
    v18 = 1;
    v17 = v15;
    if ((v16 & 1) != 0) {
      v17 = v15;
      goto LABEL_80;
    }
  }
  if (v9 >= a3) {
    goto LABEL_20;
  }
  ++v9;
LABEL_80:
  v3 = (_DWORD)a2 - 8;
  if ((unsigned int)((_DWORD)a2 - 8) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < 8) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v19 = 1;
      v20 = v18;
      if ((v17 & 1) != 0) {
        v20 = v18;
        goto LABEL_93;
      }
    }
    else {
      v20 = v18;
      v19 = v17;
    }
  }
  else {
    v20 = 1;
    v19 = v17;
    if ((v18 & 1) != 0) {
      v19 = v17;
      goto LABEL_93;
    }
  }
  if (v9 >= a3) {
    goto LABEL_20;
  }
  ++v9;
LABEL_93:
  v3 = (_DWORD)a2 + 128;
  if ((unsigned int)((_DWORD)a2 + 128) >= 0xFF) {
    v3 = 255;
  }
  if ((int)a2 < -128) {
    v3 = 0;
  }
  if (v3 != 0) {
    if (v3 == 255) {
      v21 = 1;
      v22 = v20;
      if ((v19 & 1) != 0) {
        v22 = v20;
        goto LABEL_106;
      }
    }
    else {
      v22 = v20;
      v21 = v19;
    }
  }
  else {
    v22 = 1;
    v21 = v19;
    if ((v20 & 1) != 0) {
      v21 = v19;
      goto LABEL_106;
    }
  }
  if (v9 >= a3) {
  LABEL_20:
    *(_DWORD*)this_ = (unsigned __int8)v3;
    return (unsigned int)v9;
  }
  ++v9;
LABEL_106:
  v23 = (_DWORD)a2 - 128;
  if ((unsigned int)((_DWORD)a2 - 128) >= 0xFF) {
    v23 = 255;
  }
  if ((int)a2 < 128) {
    v23 = 0;
  }
  if (v23 != 0) {
    if (v23 == 255 && (v21 & 1) != 0) {
      *(_DWORD*)this_ = 255;
      return (unsigned int)v9;
    }
  }
  else if ((v22 & 1) != 0) {
    *(_DWORD*)this_ = 0;
    return (unsigned int)v9;
  }
  if (v9 < a3) {
    LODWORD(v9) = v9 + 1;
  }
  *(_DWORD*)this_ = (unsigned __int8)v23;
  return (unsigned int)v9;
}

double nerd_gillette_internal_otete_ImageCodec2_Encode(unsigned int* a1,
                                                       unsigned int* a2,
                                                       __int64 a3,
                                                       unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int8* v6;
  unsigned int v7;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  char v22;
  unsigned __int8* v23;
  __int64 i;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  unsigned __int8* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  unsigned __int8* v41;
  unsigned __int8* v42;
  unsigned __int8 v43;
  char v44;
  int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int16* v54;
  int v55;
  int v56;
  int v57;
  unsigned int v58;
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
  __int64 v69;
  unsigned __int8* v70;
  unsigned __int8* v71;
  unsigned __int8* v72;
  char v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned __int64 v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  unsigned __int8 v83;
  __int16* v84;
  int v85;
  int v86;
  int v87;
  unsigned int v88;
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
  unsigned __int8* v100;
  unsigned __int8* v101;
  __int64 v102;
  int v103;

  v6 = *(unsigned __int8**)(*(_QWORD*)SdkData_e89220[0] + 8LL);
  *(_QWORD*)(*(_QWORD*)SdkData_e89220[0] + 8LL) = &v6[a1[3] * a1[2]];
  v8 = a1[2];
  v7 = a1[3];
  if (v7 != 0) {
    memset_plt((void*)v6, nullptr, v8 * v7, a4);
  }
  v103 = **(unsigned __int8**)a1;
  v9 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
      &v103, 0, **(unsigned __int8**)a2);
  *v6 = v103;
  **(_BYTE**)a1 = v9;
  v10 = *v6;
  v103 = *(unsigned __int8*)(*(_QWORD*)a1 + 1LL);
  v11 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
      &v103, v10, *(unsigned __int8*)(*(_QWORD*)a2 + 1LL));
  v6[1] = v103;
  *(_BYTE*)(*(_QWORD*)a1 + 1LL) = v11;
  v12 = *v6;
  v13 = a2[4];
  v103 = *(unsigned __int8*)(*(_QWORD*)a1 + a1[4]);
  v14 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
      &v103, v12, *(unsigned __int8*)(*(_QWORD*)a2 + v13));
  v100 = v6;
  v6[v8] = v103;
  *(_BYTE*)(*(_QWORD*)a1 + a1[4]) = v14;
  v16 = a1[2];
  v15 = a1[3];
  if ((unsigned int)v16 >= 3) {
    v17 = 2;
    v18 = v6 + 1;
    do {
      v19 = 3 * *v18 - *(v18 - 1);
      v20 = (v19 + 1 + (((v19 + 1) & 0x8000) != 0)) >> 1;
      if (v20 >= 0xFF) {
        v20 = 255;
      }
      if (v19 >= -2) {
        v21 = v20;
      }
      else {
        v21 = 0;
      }
      v103 = *(unsigned __int8*)(*(_QWORD*)a1 + v17);
      v22 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
          &v103, v21, *(unsigned __int8*)(*(_QWORD*)a2 + v17));
      *++v18 = v103;
      *(_BYTE*)(*(_QWORD*)a1 + v17++) = v22;
    } while (v16 != v17);
  }
  if ((unsigned int)v15 < 3) {
    if ((_DWORD)v15 != 2 || (unsigned int)v16 <= 1) {
      goto LABEL_139;
    }
    goto LABEL_23;
  }
  v23 = v100;
  for (i = 2; i != v15; ++i) {
    v25 = 3 * v23[v8] - *v23;
    v26 = (v25 + 1 + (((v25 + 1) & 0x8000) != 0)) >> 1;
    if (v26 >= 0xFF) {
      v26 = 255;
    }
    if (v25 >= -2) {
      v27 = v26;
    }
    else {
      v27 = 0;
    }
    v28 = a2[4];
    v103 = *(unsigned __int8*)(*(_QWORD*)a1 + i * a1[4]);
    v29 = nerd_gillette_internal_otete_ImageCodec2_Quantization_plt(
        &v103, v27, *(unsigned __int8*)(*(_QWORD*)a2 + i * v28));
    v23[2 * v8] = v103;
    v23 += v8;
    v30 = i * a1[4];
    *(_BYTE*)(*(_QWORD*)a1 + v30) = v29;
  }
  if ((unsigned int)v16 >= 2) {
  LABEL_23:
    v31 = 1;
    v32 = 0;
    v102 = v16 - 1;
    v33 = v100 + 1;
    v34 = &v100[v8 + 1];
    v101 = &v100[v8 + v16];
    do {
      v35 = v16;
      v36 = *(_QWORD*)a1 + v31 * a1[4];
      v37 = (char*)(v36 + 1);
      v38 = (unsigned __int64)&v100[v8 + v32 * v8] >= v36 + v16 ||
            v37 >= (char*)&v101[v32 * v8];
      v39 = *(_QWORD*)a2 + v31 * a2[4];
      if (v38) {
        v40 = v102;
        v41 = (unsigned __int8*)(v39 + 1);
        v42 = v33;
        v43 = v100[v8 + v8 * v32];
        do {
          v45 = (unsigned __int8)*v37;
          v46 = 2 * (*v42 + v43) - *(v42 - 1);
          v47 = (unsigned __int16)(((unsigned int)(21846 * v46 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v46 + 21846) >> 31));
          if (v47 >= 0xFF) {
            v47 = 255;
          }
          if (v46 >= -3) {
            v48 = v47;
          }
          else {
            v48 = 0;
          }
          v50 = *v41++;
          v49 = v50;
          v51 = v50 - 1LL;
          if (v50 != 0) {
            v52 = v51;
          }
          else {
            v52 = 0;
          }
          v53 = (v45 - v48) * (v45 - v48);
          if (v53 >= 0xFE01) {
            v43 = 0;
          }
          else {
            v43 = v48;
          }
          if (v49 < 2) {
            v44 = 0;
          }
          else {
            v54 = &SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v48]];
            v55 = v54[1] + v48;
            if ((unsigned int)v55 >= 0xFF) {
              v56 = 255;
            }
            else {
              v56 = v54[1] + v48;
            }
            if (v55 >= 0) {
              v57 = v56;
            }
            else {
              v57 = 0;
            }
            v58 = (v45 - v57) * (v45 - v57);
            v44 = v58 < v53;
            if (v58 < v53) {
              v43 = v57;
            }
            if (v52 != 1) {
              if ((int)v58 < (int)v53) {
                v53 = (v45 - v57) * (v45 - v57);
              }
              v59 = v54[2] + v48;
              if ((unsigned int)v59 >= 0xFF) {
                v60 = 255;
              }
              else {
                v60 = v54[2] + v48;
              }
              if (v59 < 0) {
                v60 = 0;
              }
              v61 = (v45 - v60) * (v45 - v60);
              if (v61 < v53) {
                v43 = v60;
                v44 = 2;
              }
              if (v52 != 2) {
                if (v61 < (int)v53) {
                  v53 = (v45 - v60) * (v45 - v60);
                }
                v62 = v54[3] + v48;
                if ((unsigned int)v62 >= 0xFF) {
                  v63 = 255;
                }
                else {
                  v63 = v54[3] + v48;
                }
                if (v62 < 0) {
                  v63 = 0;
                }
                v64 = (v45 - v63) * (v45 - v63);
                if (v64 < v53) {
                  v43 = v63;
                  v44 = 3;
                }
                if (v52 != 3) {
                  v65 = v54[4];
                  if (v64 < (int)v53) {
                    v53 = (v45 - v63) * (v45 - v63);
                  }
                  v66 = v65 + v48;
                  if ((unsigned int)v66 >= 0xFF) {
                    v67 = 255;
                  }
                  else {
                    v67 = v66;
                  }
                  if (v66 >= 0) {
                    v68 = v67;
                  }
                  else {
                    v68 = 0;
                  }
                  if ((v45 - v68) * (v45 - v68) < v53) {
                    v43 = v68;
                    v44 = 4;
                  }
                }
              }
            }
          }
          v42[v8] = v43;
          ++v42;
          *v37++ = v44;
          --v40;
        } while (v40 != 0);
      }
      else {
        v69 = v102;
        v70 = (unsigned __int8*)(v39 + 1);
        v71 = v33;
        v72 = v34;
        do {
          v74 = (unsigned __int8)*v37;
          v75 = 2 * (*v71 + *(v72 - 1)) - *(v71 - 1);
          v76 = (unsigned __int16)(((unsigned int)(21846 * v75 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v75 + 21846) >> 31));
          if (v76 >= 0xFF) {
            v76 = 255;
          }
          if (v75 >= -3) {
            v77 = v76;
          }
          else {
            v77 = 0;
          }
          v79 = *v70++;
          v78 = v79;
          v80 = v79 - 1LL;
          if (v79 != 0) {
            v81 = v80;
          }
          else {
            v81 = 0;
          }
          v82 = (v74 - v77) * (v74 - v77);
          if (v82 >= 0xFE01) {
            v83 = 0;
          }
          else {
            v83 = v77;
          }
          if (v78 < 2) {
            v73 = 0;
          }
          else {
            v84 = &SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v77]];
            v85 = v84[1] + v77;
            if ((unsigned int)v85 >= 0xFF) {
              v86 = 255;
            }
            else {
              v86 = v84[1] + v77;
            }
            if (v85 >= 0) {
              v87 = v86;
            }
            else {
              v87 = 0;
            }
            v88 = (v74 - v87) * (v74 - v87);
            v73 = v88 < v82;
            if (v88 < v82) {
              v83 = v87;
            }
            if (v81 != 1) {
              if ((int)v88 < (int)v82) {
                v82 = (v74 - v87) * (v74 - v87);
              }
              v89 = v84[2] + v77;
              if ((unsigned int)v89 >= 0xFF) {
                v90 = 255;
              }
              else {
                v90 = v84[2] + v77;
              }
              if (v89 < 0) {
                v90 = 0;
              }
              v91 = (v74 - v90) * (v74 - v90);
              if (v91 < v82) {
                v83 = v90;
                v73 = 2;
              }
              if (v81 != 2) {
                if (v91 < (int)v82) {
                  v82 = (v74 - v90) * (v74 - v90);
                }
                v92 = v84[3] + v77;
                if ((unsigned int)v92 >= 0xFF) {
                  v93 = 255;
                }
                else {
                  v93 = v84[3] + v77;
                }
                if (v92 < 0) {
                  v93 = 0;
                }
                v94 = (v74 - v93) * (v74 - v93);
                if (v94 < v82) {
                  v83 = v93;
                  v73 = 3;
                }
                if (v81 != 3) {
                  v95 = v84[4];
                  if (v94 < (int)v82) {
                    v82 = (v74 - v93) * (v74 - v93);
                  }
                  v96 = v95 + v77;
                  if ((unsigned int)v96 >= 0xFF) {
                    v97 = 255;
                  }
                  else {
                    v97 = v96;
                  }
                  if (v96 >= 0) {
                    v98 = v97;
                  }
                  else {
                    v98 = 0;
                  }
                  if ((v74 - v98) * (v74 - v98) < v82) {
                    v83 = v98;
                    v73 = 4;
                  }
                }
              }
            }
          }
          *v72++ = v83;
          ++v71;
          *v37++ = v73;
          --v69;
        } while (v69 != 0);
      }
      ++v31;
      ++v32;
      v33 += v8;
      v34 += v8;
      v16 = v35;
    } while (v31 != v15);
  }
LABEL_139:
  *(_QWORD*)(*(_QWORD*)SdkData_e89220[0] + 8LL) = v100;
  return 0x0.0p+0;
}

__int64

nerd_gillette_internal_otete_ImageCodec2_DecodeInPlace_74dc00(__int64 a1,
                                                              __int64 a2)
{
  _BYTE v3[4];

  v3[0] = 0;
  return SdkRoutine_87adb0(a1, a2, v3) & 1;
}

__int64

nerd_gillette_internal_otete_ImageCodec2_DecodeInPlace_74ead0(__int64 a1,
                                                              __int64 a2)
{
  _BYTE v3[4];

  v3[0] = 0;
  return SdkRoutine_87add0(a1, a2, v3) & 1;
}

__int64 nerd_gillette_internal_otete_ImageCodec2_EncodeInPlace(__int64* a1,
                                                               __int64* a2,
                                                               __int64 a3)
{
  __int64 v3;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  _BYTE* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _BOOL4 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  bool v63;
  _BOOL4 v64;
  int v65;
  bool v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  bool v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 result;
  __int64 v86;
  __int64 v87;
  _BOOL4 v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  bool v95;
  _BOOL4 v96;
  int v97;
  bool v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;

  v3 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v3 == 0 || (v7 = *((_DWORD*)a2 + 2)) == 0) {
    v21 = 1;
    v22 = a1[1];
    if (v22 > 0x958) {
      goto LABEL_46;
    }
    goto LABEL_33;
  }
  v8 = *a2;
  v9 = *((unsigned int*)a2 + 4);
  v10 = 0;
  LOBYTE(v11) = 1;
  v12 = *a2 + 3;
  do {
    if (v7 < 8) {
      v13 = 0;
      if ((v7 & 7) == 0) {
        goto LABEL_4;
      }
    LABEL_27:
      v17 = (unsigned __int8*)(v8 + v13);
      v18 = v7 & 7;
      do {
        v20 = *v17++;
        v19 = v20;
        if ((unsigned __int8)v11 <= v20) {
          LOBYTE(v11) = v19;
        }
        --v18;
      } while (v18 != 0);
      goto LABEL_4;
    }
    v14 = 0;
    v15 = (unsigned __int8*)v12;
    do {
      v11 = (unsigned __int8)v11;
      v14 -= 8;
      if ((unsigned __int8)v11 <= (unsigned int)*(v15 - 3)) {
        v11 = *(v15 - 3);
      }
      if (v11 <= *(v15 - 2)) {
        v11 = *(v15 - 2);
      }
      if (v11 <= *(v15 - 1)) {
        v11 = *(v15 - 1);
      }
      if (v11 <= *v15) {
        v11 = *v15;
      }
      if (v11 <= v15[1]) {
        v11 = v15[1];
      }
      if (v11 <= v15[2]) {
        v11 = v15[2];
      }
      if (v11 <= v15[3]) {
        v11 = v15[3];
      }
      v16 = v15[4];
      v15 += 8;
      if (v11 <= v16) {
        LOBYTE(v11) = v16;
      }
    } while (-(__int64)(v7 & 0xFFFFFFF8) != v14);
    v13 = -v14;
    if ((v7 & 7) != 0) {
      goto LABEL_27;
    }
  LABEL_4:
    ++v10;
    v12 += v9;
    v8 += v9;
  } while (v10 != v3);
  v30 = 0;
  v31 = 255.0;
  v32 = 255.0 / (float)(unsigned __int8)v11;
  do {
    v33 = *a2;
    v34 = *((unsigned int*)a2 + 4);
    if (v7 < 8) {
      v35 = 0;
      if ((v7 & 7) == 0) {
        goto LABEL_35;
      }
    LABEL_42:
      v52 = (_BYTE*)(v33 + v35 + v30 * v34);
      v53 = v7 & 7;
      do {
        LOBYTE(v31) = *v52;
        --v53;
        v31 = v32 * (float)LODWORD(v31);
        *v52++ = (int)v31;
      } while (v53 != 0);
      goto LABEL_35;
    }
    v36 = 0;
    v37 = (_BYTE*)(v33 + v30 * v34 + 3);
    do {
      LOBYTE(v31) = *(v37 - 3);
      v36 -= 8;
      *(float*)&v38 = v32 * (float)LODWORD(v31);
      v39 = (int)*(float*)&v38;
      LOBYTE(v38) = *(v37 - 2);
      *(v37 - 3) = v39;
      *(float*)&v40 = v32 * (float)v38;
      v41 = (int)*(float*)&v40;
      LOBYTE(v40) = *(v37 - 1);
      *(v37 - 2) = v41;
      *(float*)&v42 = v32 * (float)v40;
      v43 = (int)*(float*)&v42;
      LOBYTE(v42) = *v37;
      *(v37 - 1) = v43;
      *(float*)&v44 = v32 * (float)v42;
      v45 = (int)*(float*)&v44;
      LOBYTE(v44) = v37[1];
      *v37 = v45;
      *(float*)&v46 = v32 * (float)v44;
      v47 = (int)*(float*)&v46;
      LOBYTE(v46) = v37[2];
      v37[1] = v47;
      *(float*)&v48 = v32 * (float)v46;
      v49 = (int)*(float*)&v48;
      LOBYTE(v48) = v37[3];
      v37[2] = v49;
      *(float*)&v50 = v32 * (float)v48;
      v51 = (int)*(float*)&v50;
      LOBYTE(v50) = v37[4];
      v37[3] = v51;
      v31 = v32 * (float)v50;
      v37[4] = (int)v31;
      v37 += 8;
    } while (-(__int64)(v7 & 0xFFFFFFF8) != v36);
    v35 = -v36;
    if ((v7 & 7) != 0) {
      goto LABEL_42;
    }
  LABEL_35:
    ++v30;
  } while (v30 != v3);
  v21 = (unsigned __int8)v11;
  v22 = a1[1];
  if (v22 > 0x958) {
  LABEL_46:
    if (v22 + 8 <= 0x960) {
      goto LABEL_47;
    }
    return 0;
  }
LABEL_33:
  *(_BYTE*)(*a1 + (v22 >> 3)) |= v21 >> 7 << (v22 & 7);
  v23 = *a1;
  a1[1] = v22 + 1;
  *(_BYTE*)(v23 + ((v22 + 1) >> 3)) |= ((v21 & 0x40) != 0) << ((v22 + 1) & 7);
  v24 = *a1;
  a1[1] = v22 + 2;
  *(_BYTE*)(v24 + ((v22 + 2) >> 3)) |= ((v21 & 0x20) != 0) << ((v22 + 2) & 7);
  v25 = *a1;
  a1[1] = v22 + 3;
  *(_BYTE*)(v25 + ((v22 + 3) >> 3)) |= ((v21 & 0x10) != 0) << ((v22 + 3) & 7);
  v26 = *a1;
  a1[1] = v22 + 4;
  *(_BYTE*)(v26 + ((v22 + 4) >> 3)) |= ((v21 & 8) != 0) << ((v22 + 4) & 7);
  v27 = *a1;
  a1[1] = v22 + 5;
  *(_BYTE*)(v27 + ((v22 + 5) >> 3)) |= ((v21 & 4) != 0) << ((v22 + 5) & 7);
  v28 = *a1;
  a1[1] = v22 + 6;
  *(_BYTE*)(v28 + ((v22 + 6) >> 3)) |= ((v21 & 2) != 0) << ((v22 + 6) & 7);
  v29 = *a1;
  a1[1] = v22 + 7;
  *(_BYTE*)(v29 + ((v22 + 7) >> 3)) |= (v21 & 1) << ((v22 + 7) & 7);
  a1[1] = v22 + 8;
LABEL_47:
  SdkRoutine_87ada0(a2, a3);
  v118 = 0x500000001LL;
  LODWORD(v119) = 25;
  v54 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v54 != 0) {
    v55 = *((unsigned int*)a2 + 2);
    if ((_DWORD)v55 != 0) {
      v56 = true;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      do {
        v60 = 0;
        v61 = *a2 + v57 * *((unsigned int*)a2 + 4);
        do {
          if (*(_BYTE*)(*(_QWORD*)a3 + v57 * *(unsigned int*)(a3 + 16) + v60) ==
              5) {
            v62 =
                v58 + *((_DWORD*)&v118 + v59) * *(unsigned __int8*)(v61 + v60);
            v63 = v59 == 2;
            v64 = v59 != 2;
            if (v59 == 2) {
              v59 = 0;
            }
            else {
              ++v59;
            }
            v65 = v64 && v56;
            if (v63) {
              v58 = 0;
            }
            else {
              v58 = v62;
            }
            if (v63) {
              v66 = !v56;
              v56 = v65;
              if (!v66) {
                v67 = a1[1];
                v56 = v67 + 7 < 0x961;
                v59 = 0;
                v58 = 0;
                if (v67 <= 0x959) {
                  *(_BYTE*)(*a1 + (v67 >> 3)) |= ((v62 & 0x40) != 0)
                                                 << (v67 & 7);
                  v68 = *a1;
                  a1[1] = v67 + 1;
                  *(_BYTE*)(v68 + ((v67 + 1) >> 3)) |= ((v62 & 0x20) != 0)
                                                       << ((v67 + 1) & 7);
                  v69 = *a1;
                  a1[1] = v67 + 2;
                  *(_BYTE*)(v69 + ((v67 + 2) >> 3)) |= ((v62 & 0x10) != 0)
                                                       << ((v67 + 2) & 7);
                  v70 = *a1;
                  a1[1] = v67 + 3;
                  *(_BYTE*)(v70 + ((v67 + 3) >> 3)) |= ((v62 & 8) != 0)
                                                       << ((v67 + 3) & 7);
                  v71 = *a1;
                  a1[1] = v67 + 4;
                  *(_BYTE*)(v71 + ((v67 + 4) >> 3)) |= ((v62 & 4) != 0)
                                                       << ((v67 + 4) & 7);
                  v72 = *a1;
                  a1[1] = v67 + 5;
                  *(_BYTE*)(v72 + ((v67 + 5) >> 3)) |= ((v62 & 2) != 0)
                                                       << ((v67 + 5) & 7);
                  v73 = *a1;
                  a1[1] = v67 + 6;
                  *(_BYTE*)(v73 + ((v67 + 6) >> 3)) |= (v62 & 1)
                                                       << ((v67 + 6) & 7);
                  v56 = true;
                  a1[1] = v67 + 7;
                }
              }
            }
            else {
              v56 = v65;
            }
          }
          ++v60;
        } while (v55 != v60);
        ++v57;
      } while (v57 != v54);
      v74 = v59 < 1 && v56;
      if (v59 < 1 || !v56 ||
          (v75 = a1[1], v76 = v75 + 7, v74 = v75 + 7 < 0x961, v75 > 0x959)) {
        if (!v74) {
          return 0;
        }
      }
      else {
        v77 = v58;
        *(_BYTE*)(*a1 + (v75 >> 3)) |= ((v58 & 0x40) != 0) << (v75 & 7);
        v78 = *a1;
        a1[1] = v75 + 1;
        *(_BYTE*)(v78 + ((v75 + 1) >> 3)) |= ((v58 & 0x20) != 0)
                                             << ((v75 + 1) & 7);
        v79 = *a1;
        a1[1] = v75 + 2;
        *(_BYTE*)(v79 + ((v75 + 2) >> 3)) |= ((v58 & 0x10) != 0)
                                             << ((v75 + 2) & 7);
        v80 = *a1;
        a1[1] = v75 + 3;
        *(_BYTE*)(v80 + ((v75 + 3) >> 3)) |= ((v58 & 8) != 0)
                                             << ((v75 + 3) & 7);
        v81 = *a1;
        a1[1] = v75 + 4;
        *(_BYTE*)(v81 + ((v75 + 4) >> 3)) |= ((v58 & 4) != 0)
                                             << ((v75 + 4) & 7);
        v82 = v75 + 5;
        v83 = v75 + 6;
        v84 = *a1;
        a1[1] = v82;
        *(_BYTE*)(v84 + (v82 >> 3)) |= ((v77 & 2) != 0) << (v82 & 7);
        a1[1] = v83;
        *(_BYTE*)(*a1 + (v83 >> 3)) |= (v77 & 1) << (v83 & 7);
        a1[1] = v76;
      }
    }
  }
  v118 = 0x300000001LL;
  v119 = 0x1B00000009LL;
  v120 = 81;
  v86 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v86 == 0) {
    return 1;
  }
  v87 = *((unsigned int*)a2 + 2);
  if ((_DWORD)v87 == 0) {
    return 1;
  }
  v88 = true;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  do {
    v92 = 0;
    v93 = *a2 + v89 * *((unsigned int*)a2 + 4);
    do {
      if (*(_BYTE*)(*(_QWORD*)a3 + v89 * *(unsigned int*)(a3 + 16) + v92) ==
          3) {
        v94 = v90 + *((_DWORD*)&v118 + v91) * *(unsigned __int8*)(v93 + v92);
        v95 = v91 == 4;
        v96 = v91 != 4;
        if (v91 == 4) {
          v91 = 0;
        }
        else {
          ++v91;
        }
        v97 = v96 && v88;
        if (v95) {
          v90 = 0;
        }
        else {
          v90 = v94;
        }
        if (v95) {
          v98 = !v88;
          v88 = v97;
          if (!v98) {
            v99 = a1[1];
            v88 = v99 + 8 < 0x961;
            v91 = 0;
            v90 = 0;
            if (v99 <= 0x958) {
              *(_BYTE*)(*a1 + (v99 >> 3)) |= ((v94 & 0x80) != 0) << (v99 & 7);
              v100 = *a1;
              a1[1] = v99 + 1;
              *(_BYTE*)(v100 + ((v99 + 1) >> 3)) |= ((v94 & 0x40) != 0)
                                                    << ((v99 + 1) & 7);
              v101 = *a1;
              a1[1] = v99 + 2;
              *(_BYTE*)(v101 + ((v99 + 2) >> 3)) |= ((v94 & 0x20) != 0)
                                                    << ((v99 + 2) & 7);
              v102 = *a1;
              a1[1] = v99 + 3;
              *(_BYTE*)(v102 + ((v99 + 3) >> 3)) |= ((v94 & 0x10) != 0)
                                                    << ((v99 + 3) & 7);
              v103 = *a1;
              a1[1] = v99 + 4;
              *(_BYTE*)(v103 + ((v99 + 4) >> 3)) |= ((v94 & 8) != 0)
                                                    << ((v99 + 4) & 7);
              v104 = *a1;
              a1[1] = v99 + 5;
              *(_BYTE*)(v104 + ((v99 + 5) >> 3)) |= ((v94 & 4) != 0)
                                                    << ((v99 + 5) & 7);
              v105 = *a1;
              a1[1] = v99 + 6;
              *(_BYTE*)(v105 + ((v99 + 6) >> 3)) |= ((v94 & 2) != 0)
                                                    << ((v99 + 6) & 7);
              v106 = *a1;
              a1[1] = v99 + 7;
              *(_BYTE*)(v106 + ((v99 + 7) >> 3)) |= (v94 & 1)
                                                    << ((v99 + 7) & 7);
              v88 = true;
              a1[1] = v99 + 8;
            }
          }
        }
        else {
          v88 = v97;
        }
      }
      ++v92;
    } while (v87 != v92);
    ++v89;
  } while (v89 != v86);
  result = (v91 < 1) & (unsigned __int8)v88;
  if (v91 >= 1 && v88) {
    v107 = a1[1];
    v108 = v107 + 8;
    result = v107 + 8 < 0x961;
    if (v107 <= 0x958) {
      v109 = v90;
      *(_BYTE*)(*a1 + (v107 >> 3)) |= ((v90 & 0x80) != 0) << (v107 & 7);
      v110 = *a1;
      a1[1] = v107 + 1;
      *(_BYTE*)(v110 + ((v107 + 1) >> 3)) |= ((v90 & 0x40) != 0)
                                             << ((v107 + 1) & 7);
      v111 = *a1;
      a1[1] = v107 + 2;
      *(_BYTE*)(v111 + ((v107 + 2) >> 3)) |= ((v90 & 0x20) != 0)
                                             << ((v107 + 2) & 7);
      v112 = *a1;
      a1[1] = v107 + 3;
      *(_BYTE*)(v112 + ((v107 + 3) >> 3)) |= ((v90 & 0x10) != 0)
                                             << ((v107 + 3) & 7);
      v113 = *a1;
      a1[1] = v107 + 4;
      *(_BYTE*)(v113 + ((v107 + 4) >> 3)) |= ((v90 & 8) != 0)
                                             << ((v107 + 4) & 7);
      v114 = *a1;
      a1[1] = v107 + 5;
      *(_BYTE*)(v114 + ((v107 + 5) >> 3)) |= ((v90 & 4) != 0)
                                             << ((v107 + 5) & 7);
      v115 = v107 + 6;
      v116 = v107 + 7;
      v117 = *a1;
      a1[1] = v115;
      *(_BYTE*)(v117 + (v115 >> 3)) |= ((v109 & 2) != 0) << (v115 & 7);
      a1[1] = v116;
      *(_BYTE*)(*a1 + (v116 >> 3)) |= (v109 & 1) << (v116 & 7);
      a1[1] = v108;
    }
  }
  return result;
}

bool nerd_gillette_internal_otete_ImageCodec2_EncodeInPlaceOnlyQuints(
    __int64* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = a1[1];
  v2 = v1 + 8;
  if (v1 <= 0x1B58) {
    *(_BYTE*)(*a1 + (v1 >> 3)) |= 1 << (v1 & 7);
    v3 = *a1;
    a1[1] = v1 + 1;
    *(_BYTE*)(v3 + ((v1 + 1) >> 3)) |= 1 << ((v1 + 1) & 7);
    v4 = *a1;
    a1[1] = v1 + 2;
    *(_BYTE*)(v4 + ((v1 + 2) >> 3)) |= 1 << ((v1 + 2) & 7);
    v5 = *a1;
    a1[1] = v1 + 3;
    *(_BYTE*)(v5 + ((v1 + 3) >> 3)) |= 1 << ((v1 + 3) & 7);
    v6 = *a1;
    a1[1] = v1 + 4;
    *(_BYTE*)(v6 + ((v1 + 4) >> 3)) |= 1 << ((v1 + 4) & 7);
    v7 = *a1;
    a1[1] = v1 + 5;
    *(_BYTE*)(v7 + ((v1 + 5) >> 3)) |= 1 << ((v1 + 5) & 7);
    v8 = v1 + 6;
    v9 = v1 + 7;
    v10 = *a1;
    a1[1] = v8;
    *(_BYTE*)(v10 + (v8 >> 3)) |= 1 << (v8 & 7);
    a1[1] = v9;
    *(_BYTE*)(*a1 + (v9 >> 3)) |= 1 << (v9 & 7);
    a1[1] = v2;
  LABEL_4:
    SdkRoutine_87adf0();
    return v2 < 0x1B61;
  }
  if (v2 <= 0x1B60) {
    goto LABEL_4;
  }
  return v2 < 0x1B61;
}

double nerd_gillette_internal_otete_ImageCodec2_EncodeWithQuints(
    __int64* a1, unsigned __int8** a2, unsigned int* a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 j;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  char* v24;
  __int64 v25;
  unsigned __int8* v26;
  int v27;
  unsigned int v28;
  unsigned __int8 v29;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  int* v35;
  __int64* v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int* v47;
  int* v48;
  __int64* v49;
  int v50;
  int v51;

  v49 = a1;
  v4 = (__int64)*a2;
  v50 = 0;
  v51 = 1;
  v47 = &v50;
  v48 = &v51;
  SdkRoutine_751ac0(&v47, v4, 0, **(unsigned __int8**)a3);
  SdkRoutine_751ac0(&v47, *a2 + 1, **a2,
                    *(unsigned __int8*)(*(_QWORD*)a3 + 1LL));
  SdkRoutine_751ac0(&v47, &(*a2)[*((unsigned int*)a2 + 4)], **a2,
                    *(unsigned __int8*)(*(_QWORD*)a3 + a3[4]));
  v7 = *((unsigned int*)a2 + 2);
  v6 = *((unsigned int*)a2 + 3);
  if ((unsigned int)v7 >= 3) {
    v8 = 0;
    do {
      v9 = &(*a2)[v8];
      v10 = 3 * v9[1] - *v9;
      v11 = (v10 + 1 + (((v10 + 1) & 0x8000) != 0)) >> 1;
      if (v11 >= 0xFF) {
        v11 = 255;
      }
      if (v10 >= -2) {
        v12 = v11;
      }
      else {
        v12 = 0;
      }
      SdkRoutine_751ac0(&v47, v9 + 2, v12,
                        *(unsigned __int8*)(*(_QWORD*)a3 + v8++ + 2));
    } while (v7 - 2 != v8);
  }
  if ((unsigned int)v6 < 3) {
    if ((_DWORD)v6 != 2 || (unsigned int)v7 <= 1) {
      return 0.0;
    }
    goto LABEL_21;
  }
  for (i = 2; i != v6; ++i) {
    v14 = *((unsigned int*)a2 + 4);
    v15 = 3 * (*a2)[(i - 1) * v14] - (*a2)[(i - 2) * v14];
    v16 = (v15 + 1 + (((v15 + 1) & 0x8000) != 0)) >> 1;
    if (v16 >= 0xFF) {
      v16 = 255;
    }
    if (v15 >= -2) {
      v17 = v16;
    }
    else {
      v17 = 0;
    }
    SdkRoutine_751ac0(&v47, &(*a2)[i * v14], v17,
                      *(unsigned __int8*)(*(_QWORD*)a3 + i * a3[4]));
  }
  if ((unsigned int)v7 >= 2) {
  LABEL_21:
    v18 = v7 - 1;
    v19 = 0;
    for (j = 1; j != v6; ++j) {
      v21 = *((unsigned int*)a2 + 4);
      v22 = (__int64)(*a2 + 1);
      v23 = (unsigned __int8*)(v22 + v19 * v21);
      v24 = (char*)(v22 + j * v21);
      v25 = v18;
      v26 = (unsigned __int8*)(*(_QWORD*)a3 + j * a3[4] + 1);
      do {
        v27 = 2 * (*v23 + (unsigned __int8)*(v24 - 1)) - *(v23 - 1);
        v28 = (unsigned __int16)(((unsigned int)(21846 * v27 + 21846) >> 16) +
                                 ((unsigned int)(21846 * v27 + 21846) >> 31));
        if (v28 >= 0xFF) {
          LOBYTE(v28) = -1;
        }
        if (v27 >= -3) {
          v29 = v28;
        }
        else {
          v29 = 0;
        }
        v30 = *v26++;
        if (v30 != 0) {
          v31 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[v29] +
                               256 + (unsigned __int8)*v24 - (unsigned int)v29];
          v32 =
              SdkData_ca7dde_alt1
                  [5 * SdkData_ca7e1a[v29] +
                   SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[v29] +
                                  256 + (unsigned __int8)*v24 -
                                  (unsigned int)v29]] +
              v29;
          if ((unsigned int)v32 >= 0xFF) {
            v33 = -1;
          }
          else {
            v33 = v32;
          }
          if (v32 >= 0) {
            v34 = v33;
          }
          else {
            v34 = 0;
          }
          *v24 = v34;
          *v47 += *v48 * v31;
          *v48 *= 5;
          v35 = v48;
          if (*v48 == 125) {
            v36 = v49;
            v37 = v49[1];
            if (v37 >> 1 <= 0xDAC) {
              v38 = *v47;
              v39 = (*v47 & 0x20) != 0;
              *(_BYTE*)(*v49 + (v37 >> 3)) |= ((*v47 & 0x40) != 0) << (v37 & 7);
              v40 = *v36;
              v36[1] = v37 + 1;
              *(_BYTE*)(v40 + ((v37 + 1) >> 3)) |= v39 << ((v37 + 1) & 7);
              v41 = *v36;
              v36[1] = v37 + 2;
              *(_BYTE*)(v41 + ((v37 + 2) >> 3)) |= ((v38 & 0x10) != 0)
                                                   << ((v37 + 2) & 7);
              v42 = *v36;
              v36[1] = v37 + 3;
              *(_BYTE*)(v42 + ((v37 + 3) >> 3)) |= ((v38 & 8) != 0)
                                                   << ((v37 + 3) & 7);
              v43 = *v36;
              v36[1] = v37 + 4;
              *(_BYTE*)(v43 + ((v37 + 4) >> 3)) |= ((v38 & 4) != 0)
                                                   << ((v37 + 4) & 7);
              v44 = *v36;
              v36[1] = v37 + 5;
              *(_BYTE*)(v44 + ((v37 + 5) >> 3)) |= ((v38 & 2) != 0)
                                                   << ((v37 + 5) & 7);
              v45 = *v36;
              v36[1] = v37 + 6;
              *(_BYTE*)(v45 + ((v37 + 6) >> 3)) |= (v38 & 1) << ((v37 + 6) & 7);
              v36[1] = v37 + 7;
              v35 = v48;
            }
            *v35 = 1;
            *v47 = 0;
          }
        }
        else {
          *v24 = v29;
        }
        ++v23;
        --v25;
        ++v24;
      } while (v25 != 0);
      ++v19;
    }
  }
  return 0.0;
}

unsigned int*

nerd_gillette_internal_otete_ImageCodec2_Decode_751560(unsigned int* result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned __int8* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  unsigned __int64 v40;
  int v41;

  v1 = SdkData_ca7dde_alt1[**(unsigned __int8**)result];
  v2 = v1 & ~(v1 >> 31);
  if (v2 >= 255) {
    LOBYTE(v2) = -1;
  }
  **(_BYTE**)result = v2;
  v3 = **(unsigned __int8**)result;
  v4 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v3] +
                           *(unsigned __int8*)(*(_QWORD*)result + 1LL)];
  v5 = (v4 + v3) & ~((v4 + (int)v3) >> 31);
  if (v5 >= 255) {
    LOBYTE(v5) = -1;
  }
  *(_BYTE*)(*(_QWORD*)result + 1LL) = v5;
  v6 = result[4];
  v7 = **(unsigned __int8**)result;
  v8 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v7] +
                           *(unsigned __int8*)(*(_QWORD*)result + v6)];
  v9 = (v8 + v7) & ~((v8 + (int)v7) >> 31);
  if (v9 >= 255) {
    LOBYTE(v9) = -1;
  }
  *(_BYTE*)(*(_QWORD*)result + v6) = v9;
  if (result[2] >= 3) {
    v10 = 0;
    do {
      v11 = (unsigned __int8*)(*(_QWORD*)result + v10);
      v12 = 3 * v11[1] - *v11;
      v13 = (v12 + 1 + (((v12 + 1) & 0x8000) != 0)) >> 1;
      if (v13 >= 0xFF) {
        v13 = 255;
      }
      if (v12 >= -2) {
        v14 = v13;
      }
      else {
        v14 = 0;
      }
      v15 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v14] + v11[2]];
      v16 = (v14 + v15) & ~((int)(v14 + v15) >> 31);
      if (v16 >= 255) {
        LOBYTE(v16) = -1;
      }
      v11[2] = v16;
      v17 = v10 + 3;
      ++v10;
    } while (v17 < result[2]);
  }
  v18 = result[3];
  if ((unsigned int)v18 >= 3) {
    v19 = 2;
    do {
      v20 = result[4];
      v21 = *(_QWORD*)result;
      v22 = (v19 - 1) * v20;
      v23 = (v19 - 2) * v20;
      v24 = v19 * v20;
      ++v19;
      v25 = 3 * *(unsigned __int8*)(*(_QWORD*)result + v22) -
            *(unsigned __int8*)(*(_QWORD*)result + v23);
      v26 = (v25 + 1 + (((v25 + 1) & 0x8000) != 0)) >> 1;
      if (v26 >= 0xFF) {
        v26 = 255;
      }
      if (v25 >= -2) {
        v27 = v26;
      }
      else {
        v27 = 0;
      }
      v28 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v27] +
                                *(unsigned __int8*)(v21 + v24)];
      v29 = (v27 + v28) & ~((int)(v27 + v28) >> 31);
      if (v29 >= 255) {
        LOBYTE(v29) = -1;
      }
      *(_BYTE*)(v21 + v24) = v29;
      v18 = result[3];
    } while (v19 < v18);
  }
  if (v18 >= 2) {
    LODWORD(v30) = result[2];
    v31 = 1;
    v32 = 0;
    do {
      if ((unsigned int)v30 >= 2) {
        v33 = 0;
        do {
          v34 = result[4];
          v35 = (unsigned __int8*)(*(_QWORD*)result + v31 * v34 + v33);
          v36 =
              2 * (*(unsigned __int8*)(*(_QWORD*)result + v32 * v34 + v33 + 1) +
                   *v35) -
              *(unsigned __int8*)(*(_QWORD*)result + v32 * v34 + v33);
          v37 = (unsigned __int16)(((unsigned int)(21846 * v36 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v36 + 21846) >> 31));
          if (v37 >= 0xFF) {
            v37 = 255;
          }
          if (v36 >= -3) {
            v38 = v37;
          }
          else {
            v38 = 0;
          }
          v39 = v38 + SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v38] + v35[1]];
          v40 = v33 + 2;
          ++v33;
          v41 = v39 & ~(v39 >> 31);
          if (v41 >= 255) {
            LOBYTE(v41) = -1;
          }
          v35[1] = v41;
          v30 = result[2];
        } while (v40 < v30);
        v18 = result[3];
      }
      ++v31;
      ++v32;
    } while (v31 < v18);
  }
  return result;
}

unsigned int*

nerd_gillette_internal_otete_ImageCodec2_Decode_751800(unsigned int* result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int8* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int8* v36;
  unsigned __int8* v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned __int64 v42;
  int v43;

  v1 = SdkData_ca7dde_alt1[**(unsigned __int16**)result];
  v2 = v1 & ~(v1 >> 31);
  if (v2 >= 255) {
    LOWORD(v2) = 255;
  }
  **(_WORD**)result = v2;
  v3 = **(unsigned __int16**)result;
  v4 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v3] +
                           *(unsigned __int16*)(*(_QWORD*)result + 2LL)];
  v5 = (v4 + v3) & ~((v4 + (int)v3) >> 31);
  if (v5 >= 255) {
    LOWORD(v5) = 255;
  }
  *(_WORD*)(*(_QWORD*)result + 2LL) = v5;
  v6 = **(unsigned __int16**)result;
  v7 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v6] +
                           *(unsigned __int16*)(*(_QWORD*)result +
                                                2LL * result[4])];
  v8 = (v7 + v6) & ~((v7 + (int)v6) >> 31);
  if (v8 >= 255) {
    LOWORD(v8) = 255;
  }
  *(_WORD*)(*(_QWORD*)result + 2LL * result[4]) = v8;
  if (result[2] >= 3) {
    v9 = 0;
    do {
      v10 = (unsigned __int8*)(*(_QWORD*)result + 2 * v9);
      v11 = 3 * v10[2] - *v10;
      v12 = (v11 + 1 + (((v11 + 1) & 0x8000) != 0)) >> 1;
      if (v12 >= 0xFF) {
        v12 = 255;
      }
      if (v11 >= -2) {
        v13 = v12;
      }
      else {
        v13 = 0;
      }
      v14 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v13] + v10[4]];
      v15 = (v13 + v14) & ~((int)(v13 + v14) >> 31);
      if (v15 >= 255) {
        LOWORD(v15) = 255;
      }
      *((_WORD*)v10 + 2) = v15;
      v16 = v9 + 3;
      ++v9;
    } while (v16 < result[2]);
  }
  v17 = result[3];
  if ((unsigned int)v17 >= 3) {
    v18 = 2;
    do {
      v19 = result[4];
      v20 = *(_QWORD*)result;
      v21 = (v18 - 1) * v19;
      v22 = (v18 - 2) * v19;
      v23 = v18 * v19;
      ++v18;
      v24 = 2 * v23;
      v25 = 3 * *(unsigned __int8*)(*(_QWORD*)result + 2 * v21) -
            *(unsigned __int8*)(*(_QWORD*)result + 2 * v22);
      v26 = (v25 + 1 + (((v25 + 1) & 0x8000) != 0)) >> 1;
      if (v26 >= 0xFF) {
        v26 = 255;
      }
      if (v25 >= -2) {
        v27 = v26;
      }
      else {
        v27 = 0;
      }
      v28 = SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v27] +
                                *(unsigned __int8*)(v20 + v24)];
      v29 = (v27 + v28) & ~((int)(v27 + v28) >> 31);
      if (v29 >= 255) {
        LOWORD(v29) = 255;
      }
      *(_WORD*)(v20 + v24) = v29;
      v17 = result[3];
    } while (v18 < v17);
  }
  if (v17 >= 2) {
    LODWORD(v30) = result[2];
    v31 = 1;
    v32 = 2;
    v33 = 0;
    do {
      if ((unsigned int)v30 >= 2) {
        v34 = 0;
        do {
          v35 = result[4];
          v36 = (unsigned __int8*)(*(_QWORD*)result + v32 * v35 + 2 * v34);
          v37 = (unsigned __int8*)(*(_QWORD*)result + v33 * v35 + 2 * v34);
          v38 = 2 * (v37[2] + *v36) - *v37;
          v39 = (unsigned __int16)(((unsigned int)(21846 * v38 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v38 + 21846) >> 31));
          if (v39 >= 0xFF) {
            v39 = 255;
          }
          if (v38 >= -3) {
            v40 = v39;
          }
          else {
            v40 = 0;
          }
          v41 = v40 + SdkData_ca7dde_alt1[5 * SdkData_ca7e1a[v40] +
                                          *((unsigned __int16*)v36 + 1)];
          v42 = v34 + 2;
          ++v34;
          v43 = v41 & ~(v41 >> 31);
          if (v43 >= 255) {
            LOWORD(v43) = 255;
          }
          *((_WORD*)v36 + 1) = v43;
          v30 = result[2];
        } while (v42 < v30);
        v17 = result[3];
      }
      ++v31;
      v33 += 2;
      v32 += 2;
    } while (v31 < v17);
  }
  return result;
}

#pragma GCC visibility pop
