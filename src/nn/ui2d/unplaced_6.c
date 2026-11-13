#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_2135448;
float nn_ui2d_58b2b0(__int64, __int64, __int64, unsigned int, _DWORD*, _DWORD*);
float nn_ui2d_589760(__int64 a1, __int64 a2, float a3, float a4, float a5,
                     float a6, float a7, float a8, float a9, __int64 a10,
                     unsigned int a11, _DWORD* a12, _DWORD* a13);
__int64 nn_ui2d_58b5a0(__int64 result, float* a2, float a3, float a4, float a5,
                       double a6, float a7, float a8);
__int64 nn_ui2d_5ae910(__int64 result, unsigned __int16* a2, float a3);

float nn_ui2d_589760(__int64 a1, __int64 a2, float a3, float a4, float a5,
                     float a6, float a7, float a8, float a9, __int64 a10,
                     unsigned int a11, _DWORD* a12, _DWORD* a13)
{
  unsigned int v13;
  int v14;
  float result;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float* v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float* v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  float v34;
  float* v35;
  int v36;
  unsigned int v37;
  _BYTE* v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned __int64 v43;
  float* v44;
  float v45;
  __int64 v46;
  float v47;
  float* v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  _DWORD* v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float* v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float* v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;

  v14 = *(_DWORD*)(a1 + 20);
  if ((v14 & 0x30000) != 0) {
    if ((v14 & 0x10000) == 0) {
      return nn_ui2d_58b2b0(a1, a2, a10, a11, a12, a13);
    }
    v56 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + *(unsigned int*)(a1 + 52);
    v57 = ((unsigned __int64)*(unsigned int*)(a1 + 20) >> 6) & 7;
    *(_DWORD*)v56 = v57;
    if ((_DWORD)v57 != 0) {
      v58 = 16 * v57;
      v59 = 0;
      do {
        v60 = *(_DWORD*)(a1 + 16);
        v61 = (_DWORD*)(v56 + 128 + v59);
        *(_DWORD*)v61 =
            *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                       20 * (((v60 >> 13) & 3) + ((v60 >> 2) & 3)) +
                       ((16 * (v60 & 3) + (v60 & 0x30)) | (v60 >> 6) & 8) +
                       ((v60 >> 8) & 0xC) + ((v60 >> 4) & 0x1C) +
                       ((v60 >> 12) & 8) + (((int)(v60 << 19) >> 31) & 0xC) +
                       (((int)(v60 << 15) >> 31) & 0x1C) + v59);
        v62 = *(_DWORD*)(a1 + 16);
        v61[1] =
            *(_DWORD*)(*(_QWORD*)(a1 + 24) + v59 +
                       ((16 * (v62 & 3) + (v62 & 0x30)) | (v62 >> 6) & 8) +
                       ((v62 >> 8) & 0xC) + ((v62 >> 4) & 0x1C) +
                       ((v62 >> 12) & 8) + (((int)(v62 << 19) >> 31) & 0xC) +
                       (((int)(v62 << 15) >> 31) & 0x1C) +
                       20 * (((v62 >> 13) & 3) + ((v62 >> 2) & 3)) + 4);
        v63 = *(_DWORD*)(a1 + 16);
        v61[2] =
            *(_DWORD*)(*(_QWORD*)(a1 + 24) + v59 +
                       ((16 * (v63 & 3) + (v63 & 0x30)) | (v63 >> 6) & 8) +
                       ((v63 >> 8) & 0xC) + ((v63 >> 4) & 0x1C) +
                       ((v63 >> 12) & 8) + (((int)(v63 << 19) >> 31) & 0xC) +
                       (((int)(v63 << 15) >> 31) & 0x1C) +
                       20 * (((v63 >> 13) & 3) + ((v63 >> 2) & 3)) + 8);
        v64 = *(_DWORD*)(a1 + 16);
        v65 = *(_QWORD*)(a1 + 24) + v59;
        v59 += 16;
        v61[3] = *(
            _DWORD*)(v65 + ((16 * (v64 & 3) + (v64 & 0x30)) | (v64 >> 6) & 8) +
                     ((v64 >> 8) & 0xC) + ((v64 >> 4) & 0x1C) +
                     ((v64 >> 12) & 8) + (((int)(v64 << 19) >> 31) & 0xC) +
                     (((int)(v64 << 15) >> 31) & 0x1C) +
                     20 * (((v64 >> 13) & 3) + ((v64 >> 2) & 3)) + 12);
      } while (v58 != v59);
    }
    *(_DWORD*)(v56 + 4) = 0;
    if ((*(_BYTE*)(a1 + 73) & 8) != 0) {
      v75 = *(float**)(a1 + 8);
      v66 = *v75;
      v67 = v75[1];
      v68 = v75[2];
      v69 = v75[3];
      if ((*(_BYTE*)(a1 + 73) & 0x10) != 0) {
        goto LABEL_47;
      }
    }
    else {
      {
        __typeof__(a3) z_ = (__typeof__(a3)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 8);
        a3 = z_;
      }
      {
        __typeof__(a4) z_ = (__typeof__(a4)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 9);
        a4 = z_;
      }
      {
        __typeof__(a5) z_ = (__typeof__(a5)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 10);
        a5 = z_;
      }
      {
        __typeof__(a7) z_ = (__typeof__(a7)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 11);
        a7 = z_;
      }
      a7 = (float)LODWORD(a7);
      v66 = (float)LODWORD(a3) * 0x1.0101020000000p-8f;
      v67 = (float)LODWORD(a4) * 0x1.0101020000000p-8f;
      v68 = (float)LODWORD(a5) * 0x1.0101020000000p-8f;
      v69 = a7 * 0x1.0101020000000p-8f;
      if ((*(_BYTE*)(a1 + 73) & 0x10) != 0) {
      LABEL_47:
        v70 = *(float**)(a1 + 8);
        v71 = v70[4];
        v72 = v70[5];
        v73 = v70[6];
        v74 = v70[7];
      LABEL_50:
        *(float*)(v56 + 16) = v66;
        *(float*)(v56 + 20) = v67;
        *(float*)(v56 + 24) = v68;
        *(float*)(v56 + 28) = v69;
        *(float*)(v56 + 32) = v71;
        *(float*)(v56 + 36) = v72;
        *(float*)(v56 + 40) = v73;
        *(float*)(v56 + 44) = v74;
        v76 = *(_DWORD*)(a1 + 16);
        v77 = *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                         ((16 * (v76 & 3) + (v76 & 0x30)) | (v76 >> 6) & 8) +
                         ((v76 >> 8) & 0xC) + ((v76 >> 4) & 0x1C) +
                         ((v76 >> 12) & 8) + (((int)(v76 << 19) >> 31) & 0xC) +
                         20 * (((v76 >> 13) & 3) + ((v76 >> 2) & 3)) + 4LL);
        *(float*)(v56 + 48) =
            (float)(unsigned __int8)v77 / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 52) = (float)BYTE1(v77) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 56) = (float)BYTE2(v77) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 60) = (float)HIBYTE(v77) / 0x1.fe00000000000p+7f;
        v78 = *(_DWORD*)(a1 + 16);
        v79 = *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                         ((16 * (v78 & 3) + (v78 & 0x30)) | (v78 >> 6) & 8) +
                         ((v78 >> 8) & 0xC) + ((v78 >> 4) & 0x1C) +
                         ((v78 >> 12) & 8) + (((int)(v78 << 19) >> 31) & 0xC) +
                         20 * (((v78 >> 13) & 3) + ((v78 >> 2) & 3)) + 8LL);
        *(float*)(v56 + 64) =
            (float)(unsigned __int8)v79 / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 68) = (float)BYTE1(v79) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 72) = (float)BYTE2(v79) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 76) = (float)HIBYTE(v79) / 0x1.fe00000000000p+7f;
        v80 = *(_DWORD*)(a1 + 16);
        v81 = *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                         ((16 * (v80 & 3) + (v80 & 0x30)) | (v80 >> 6) & 8) +
                         ((v80 >> 8) & 0xC) + ((v80 >> 4) & 0x1C) +
                         ((v80 >> 12) & 8) + (((int)(v80 << 19) >> 31) & 0xC) +
                         20 * (((v80 >> 13) & 3) + ((v80 >> 2) & 3)) + 12LL);
        *(float*)(v56 + 80) =
            (float)(unsigned __int8)v81 / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 84) = (float)BYTE1(v81) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 88) = (float)BYTE2(v81) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 92) = (float)HIBYTE(v81) / 0x1.fe00000000000p+7f;
        v82 = *(_DWORD*)(a1 + 16);
        v83 = *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                         ((16 * (v82 & 3) + (v82 & 0x30)) | (v82 >> 6) & 8) +
                         ((v82 >> 8) & 0xC) + ((v82 >> 4) & 0x1C) +
                         ((v82 >> 12) & 8) + (((int)(v82 << 19) >> 31) & 0xC) +
                         20 * (((v82 >> 13) & 3) + ((v82 >> 2) & 3)) + 16LL);
        *(float*)(v56 + 96) =
            (float)(unsigned __int8)v83 / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 100) = (float)BYTE1(v83) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 104) = (float)BYTE2(v83) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 108) = (float)HIBYTE(v83) / 0x1.fe00000000000p+7f;
        v84 = *(_DWORD*)(a1 + 16);
        v85 = *(_DWORD*)(*(_QWORD*)(a1 + 24) +
                         ((16 * (v84 & 3) + (v84 & 0x30)) | (v84 >> 6) & 8) +
                         ((v84 >> 8) & 0xC) + ((v84 >> 4) & 0x1C) +
                         ((v84 >> 12) & 8) + (((int)(v84 << 19) >> 31) & 0xC) +
                         20 * (((v84 >> 13) & 3) + ((v84 >> 2) & 3)) + 20LL);
        *(float*)(v56 + 112) =
            (float)(unsigned __int8)v85 / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 116) = (float)BYTE1(v85) / 0x1.fe00000000000p+7f;
        result = (float)HIBYTE(v85) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 120) = (float)BYTE2(v85) / 0x1.fe00000000000p+7f;
        *(float*)(v56 + 124) = result;
        return result;
      }
    }
    {
      __typeof__(a7) z_ = (__typeof__(a7)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 12);
      a7 = z_;
    }
    {
      __typeof__(a8) z_ = (__typeof__(a8)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 13);
      a8 = z_;
    }
    {
      __typeof__(a9) z_ = (__typeof__(a9)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 14);
      a9 = z_;
    }
    {
      __typeof__(v13) z_ = (__typeof__(v13)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 15);
      v13 = z_;
    }
    v71 = (float)LODWORD(a7) * 0x1.0101020000000p-8f;
    v72 = (float)LODWORD(a8) * 0x1.0101020000000p-8f;
    v73 = (float)LODWORD(a9) * 0x1.0101020000000p-8f;
    v74 = (float)v13 * 0x1.0101020000000p-8f;
    goto LABEL_50;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + *(unsigned int*)(a1 + 52);
  if ((v14 & 3) == 0) {
    if ((*(_BYTE*)(a1 + 73) & 0x10) != 0) {
      v35 = *(float**)(a1 + 8);
      result = v35[4];
      v26 = v35[5];
      v27 = v35[6];
      v28 = v35[7];
    }
    else {
      {
        __typeof__(a3) z_ = (__typeof__(a3)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 12);
        a3 = z_;
      }
      {
        __typeof__(a4) z_ = (__typeof__(a4)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 13);
        a4 = z_;
      }
      {
        __typeof__(a5) z_ = (__typeof__(a5)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 14);
        a5 = z_;
      }
      {
        __typeof__(a7) z_ = (__typeof__(a7)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 15);
        a7 = z_;
      }
      result = (float)LODWORD(a3) * 0x1.0101020000000p-8f;
      v26 = (float)LODWORD(a4) * 0x1.0101020000000p-8f;
      v27 = (float)LODWORD(a5) * 0x1.0101020000000p-8f;
      v28 = (float)LODWORD(a7) * 0x1.0101020000000p-8f;
    }
    *(float*)v16 = result;
    *(float*)(v16 + 4) = v26;
    *(float*)(v16 + 8) = v27;
    *(float*)(v16 + 12) = v28;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 24) = 0;
    v33 = *(_DWORD*)(a1 + 20);
    if ((v33 & 0x1C0) == 0) {
      return result;
    }
    goto LABEL_20;
  }
  if ((*(_BYTE*)(a1 + 73) & 0x10) != 0) {
    v29 = *(float**)(a1 + 8);
    v17 = v29[4];
    v18 = v29[5];
    v19 = v29[6];
    v20 = v29[7];
    if ((*(_BYTE*)(a1 + 73) & 8) != 0) {
      goto LABEL_7;
    }
  }
  else {
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 12);
      a3 = z_;
    }
    {
      __typeof__(a4) z_ = (__typeof__(a4)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 13);
      a4 = z_;
    }
    {
      __typeof__(a6) z_ = (__typeof__(a6)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 14);
      a6 = z_;
    }
    {
      __typeof__(a7) z_ = (__typeof__(a7)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 15);
      a7 = z_;
    }
    a7 = (float)LODWORD(a7);
    v17 = (float)LODWORD(a3) * 0x1.0101020000000p-8f;
    v18 = (float)LODWORD(a4) * 0x1.0101020000000p-8f;
    v19 = (float)LODWORD(a6) * 0x1.0101020000000p-8f;
    v20 = a7 * 0x1.0101020000000p-8f;
    if ((*(_BYTE*)(a1 + 73) & 8) != 0) {
    LABEL_7:
      v21 = *(float**)(a1 + 8);
      v22 = *v21;
      v23 = v21[1];
      v25 = v21[2];
      v24 = v21[3];
      goto LABEL_13;
    }
  }
  {
    __typeof__(a7) z_ = (__typeof__(a7)){0};
    LOBYTE(z_) = *(_BYTE*)(a1 + 8);
    a7 = z_;
  }
  *(float*)&v30 = (float)LODWORD(a7);
  v22 = *(float*)&v30 * 0x1.0101020000000p-8f;
  {
    __typeof__(v30) z_ = (__typeof__(v30)){0};
    LOBYTE(z_) = *(_BYTE*)(a1 + 9);
    v30 = z_;
  }
  *(float*)&v31 = (float)v30;
  v23 = *(float*)&v31 * 0x1.0101020000000p-8f;
  {
    __typeof__(v31) z_ = (__typeof__(v31)){0};
    LOBYTE(z_) = *(_BYTE*)(a1 + 10);
    v31 = z_;
  }
  *(float*)&v32 = (float)v31;
  v25 = *(float*)&v32 * 0x1.0101020000000p-8f;
  {
    __typeof__(v32) z_ = (__typeof__(v32)){0};
    LOBYTE(z_) = *(_BYTE*)(a1 + 11);
    v32 = z_;
  }
  v24 = (float)v32 * 0x1.0101020000000p-8f;
LABEL_13:
  *(float*)(v16 + 16) = v22;
  *(float*)(v16 + 20) = v23;
  *(float*)(v16 + 24) = v25;
  *(float*)v16 = v17 - v22;
  *(float*)(v16 + 4) = v18 - v23;
  *(float*)(v16 + 8) = v19 - v25;
  result = v20 - v24;
  if ((*(_BYTE*)(a1 + 73) & 4) != 0) {
    v34 = 0x1.0000000000000p+0f / (float)(result + 0x1.a36e2e0000000p-14f);
    *(float*)(v16 + 12) = v34;
    result = -(float)(v24 * v34);
    *(float*)(v16 + 28) = result;
    v33 = *(_DWORD*)(a1 + 20);
    if ((v33 & 0x1C0) == 0) {
      return result;
    }
  }
  else {
    *(float*)(v16 + 12) = result;
    *(float*)(v16 + 28) = v24;
    v33 = *(_DWORD*)(a1 + 20);
    if ((v33 & 0x1C0) == 0) {
      return result;
    }
  }
LABEL_20:
  if ((v33 & 3) < 2) {
    *(_DWORD*)(v16 + 128) = v33 & 3;
  }
  else {
    v36 = (v33 >> 6) & 7;
    if (v36 != 0) {
      v37 = *(_DWORD*)(a1 + 16);
      v38 = (_BYTE*)(*(_QWORD*)(a1 + 24) +
                     ((16 * (v37 & 3) + (v37 & 0x30)) | (v37 >> 6) & 8) +
                     ((v37 >> 8) & 0xC) + 20 * ((v37 >> 2) & 3) +
                     (((int)(v37 << 19) >> 31) & 0xC));
      if (v38[1] == 1) {
        v39 = 128;
      }
      else {
        v39 = 0;
      }
      if (v36 != 1) {
        v40 = v38[5] == 1 ? 0x8000 : 0;
        v39 |= v40;
        if (v36 != 2) {
          v41 = v38[9] == 1 ? 0x800000 : 0;
          v39 |= v41;
          if (v36 != 3) {
            if (v38[13] == 1) {
              v42 = 0x80000000;
            }
            else {
              v42 = 0;
            }
            v39 |= v42;
          }
        }
      }
    }
    else {
      v39 = 0;
    }
    *(_DWORD*)(v16 + 128) = v39;
    v43 = *(unsigned int*)(a1 + 16);
    if ((v43 & 0x1000) != 0) {
      v44 = (float*)(*(_QWORD*)(a1 + 24) +
                     ((16 * (v43 & 3) + (v43 & 0x30)) |
                      ((unsigned int)v43 >> 6) & 8) +
                     (((unsigned int)v43 >> 8) & 0xC) + 20 * ((v43 >> 2) & 3));
      v45 = v44[1];
      v46 = (__int64)(float)(*v44 * 0x1.6c16c20000000p+23f);
      v47 = vcvts_n_f32_u32(v46 & 0xFFFFFF, 0x18u);
      v48 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v46));
      v49 = v48[1] + (float)(v48[3] * v47);
      v50 = v44[2];
      v51 = *v48 + (float)(v48[2] * v47);
      *(_DWORD*)(v16 + 40) = 0;
      *(_DWORD*)(v16 + 56) = 0;
      v52 = (float)(PSEUDO_UNFUSED(v45 * v51)) +
            (float)(PSEUDO_UNFUSED(v45 * v51));
      v53 = (float)-(float)(PSEUDO_UNFUSED(v49 * v50)) -
            (float)(PSEUDO_UNFUSED(v49 * v50));
      v54 = (float)(PSEUDO_UNFUSED(v50 * v51)) +
            (float)(PSEUDO_UNFUSED(v50 * v51));
      v55 = (float)(PSEUDO_UNFUSED(v45 * v49)) +
            (float)(PSEUDO_UNFUSED(v45 * v49));
      *(float*)(v16 + 52) = v54;
      *(float*)(v16 + 32) = v52;
      *(float*)(v16 + 36) = v53;
      result = (float)(PSEUDO_UNFUSED(v54 * -0x1.0000000000000p-1f)) +
               (float)(v55 * -0x1.0000000000000p-1f);
      *(float*)(v16 + 44) =
          (float)(PSEUDO_UNFUSED(v53 * -0x1.0000000000000p-1f)) +
          (float)(v52 * -0x1.0000000000000p-1f);
      *(float*)(v16 + 48) = v55;
      *(float*)(v16 + 60) = result;
    }
  }
  return result;
}

__int64 nn_ui2d_58b5a0(__int64 result, float* a2, float a3, float a4, float a5,
                       double a6, float a7, float a8)
{

#pragma clang fp contract(off)
  unsigned int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  unsigned int v19;
  float* v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;

  if ((*(_BYTE*)(result + 73) & 8) != 0) {
    v18 = *(float**)(result + 8);
    v9 = *v18;
    v10 = v18[1];
    v11 = v18[2];
    v12 = v18[3];
    if ((*(_BYTE*)(result + 73) & 0x10) != 0) {
      goto LABEL_3;
    }
  LABEL_5:
    {
      __typeof__(a8) z_ = (__typeof__(a8)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 13);
      a8 = z_;
    }
    {
      __typeof__(a7) z_ = (__typeof__(a7)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 12);
      a7 = z_;
    }
    {
      __typeof__(v8) z_ = (__typeof__(v8)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 15);
      v8 = z_;
    }
    *(float*)&v19 = (float)LODWORD(a8);
    v15 = *(float*)&v19 * 0x1.0101020000000p-8f;
    {
      __typeof__(v19) z_ = (__typeof__(v19)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 14);
      v19 = z_;
    }
    v14 = (float)LODWORD(a7) * 0x1.0101020000000p-8f;
    v16 = (float)v19 * 0x1.0101020000000p-8f;
    v17 = (float)v8 * 0x1.0101020000000p-8f;
    goto LABEL_6;
  }
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 8);
    a3 = z_;
  }
  {
    __typeof__(a4) z_ = (__typeof__(a4)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 9);
    a4 = z_;
  }
  {
    __typeof__(a5) z_ = (__typeof__(a5)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 10);
    a5 = z_;
  }
  {
    __typeof__(a7) z_ = (__typeof__(a7)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 11);
    a7 = z_;
  }
  a7 = (float)LODWORD(a7);
  v9 = (float)LODWORD(a3) * 0x1.0101020000000p-8f;
  v10 = (float)LODWORD(a4) * 0x1.0101020000000p-8f;
  v11 = (float)LODWORD(a5) * 0x1.0101020000000p-8f;
  v12 = a7 * 0x1.0101020000000p-8f;
  if ((*(_BYTE*)(result + 73) & 0x10) == 0) {
    goto LABEL_5;
  }
LABEL_3:
  v13 = *(float**)(result + 8);
  v14 = v13[4];
  v15 = v13[5];
  v16 = v13[6];
  v17 = v13[7];
LABEL_6:
  a2[4] = v9;
  a2[5] = v10;
  v20 = a2 + 15;
  v21 = 96;
  a2[6] = v11;
  a2[7] = v12;
  a2[8] = v14;
  a2[9] = v15;
  a2[10] = v16;
  a2[11] = v17;
  do {
    v22 = *(_DWORD*)(result + 16);
    v23 = *(_DWORD*)(*(_QWORD*)(result + 24) +
                     20 * (((v22 >> 13) & 3) + ((v22 >> 2) & 3)) +
                     ((16 * (v22 & 3) + (v22 & 0x30)) | (v22 >> 6) & 8) +
                     ((v22 >> 8) & 0xC) + ((v22 >> 4) & 0x1C) +
                     ((v22 >> 12) & 8) + (((int)(v22 << 19) >> 31) & 0xC) +
                     (((int)(v22 << 15) >> 31) & 0x1C) +
                     ((v22 >> 12) & 0x10) * ((v22 >> 6) & 7) + v21);
    v21 += 4;
    *(v20 - 3) = (float)(unsigned __int8)v23 / 0x1.fe00000000000p+7f;
    *(v20 - 2) = (float)BYTE1(v23) / 0x1.fe00000000000p+7f;
    *(v20 - 1) = (float)BYTE2(v23) / 0x1.fe00000000000p+7f;
    *v20 = (float)HIBYTE(v23) / 0x1.fe00000000000p+7f;
    v20 += 4;
  } while (v21 != 116);
  return result;
}

__int64 nn_ui2d_5ae910(__int64 result, unsigned __int16* a2, float a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  bool v5;
  int v6;
  bool v7;
  int v8;
  bool v9;
  int v10;
  int v11;

  v3 = a2[42];
  *(_WORD*)(result + 210) = v3;
  v4 = a2[43];
  *(_WORD*)(result + 212) = v4;
  v5 = v3 == 0 && v4 == 0;
  v6 = a2[44];
  *(_WORD*)(result + 214) = v6;
  v7 = v5 && v6 == 0;
  v8 = a2[45];
  v9 = v7 && v8 == 0;
  *(_WORD*)(result + 216) = v8;
  if (!v9) {
    *(_BYTE*)(result + 266) |= 8u;
  }
  v10 = *(unsigned __int8*)(result + 264);
  if (v10 == 2) {
    a3 = *(float*)(result + 80);
    v11 = (int)a3 - a2[47];
    goto LABEL_16;
  }
  if (v10 == 1) {
    LOWORD(v11) = a2[46];
  LABEL_16:
    *(_WORD*)(result + 218) = v11;
    *(_WORD*)(result + 220) = a2[47];
    *(_WORD*)(result + 222) = a2[48];
    *(_WORD*)(result + 224) = a2[49];
    {
      __typeof__(a3) z_ = (__typeof__(a3)){0};
      LOWORD(z_) = a2[48];
      a3 = z_;
    }
    *(_BYTE*)(result + 88) |= 0x10u;
    *(float*)(result + 84) = (float)LODWORD(a3);
    return result;
  }
  *(_WORD*)(result + 218) = a2[46];
  *(_WORD*)(result + 220) = a2[47];
  *(_WORD*)(result + 222) = a2[48];
  *(_WORD*)(result + 224) = a2[49];
  return result;
}

#pragma GCC visibility pop
