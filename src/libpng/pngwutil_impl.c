#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImagePng_png_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
void SdkRoutine_8ae80();
__int64 nndetailImagePng_png_write_IHDR(__int64 a1, unsigned int a2, int a3,
                                        unsigned int a4, int a5, int a6, int a7,
                                        unsigned int a8);

__int64 nndetailImagePng_png_write_IHDR(__int64 a1, unsigned int a2, int a3,
                                        unsigned int a4, int a5, int a6, int a7,
                                        unsigned int a8)
{
  char v15;
  bool v17;
  char v18;
  unsigned __int64 v19;
  __int64 result;
  char v21;
  _BYTE v22[16];

  if (a5 > 2) {
    if (a5 == 3) {
    LABEL_13:
      if (a4 - 1 <= 7 && ((0x8Bu >> (a4 - 1)) & 1) != 0) {
        v15 = 1;
        goto LABEL_21;
      }
      goto LABEL_49;
    }
    if (a5 == 4) {
      v15 = 2;
      if (a4 == 8 || a4 == 16) {
        goto LABEL_21;
      }
      nndetailImagePng_png_error_plt(
          a1, "Invalid bit depth for grayscale+alpha image");
      goto LABEL_19;
    }
    if (a5 != 6) {
    LABEL_48:
      nndetailImagePng_png_error_plt(a1, "Invalid image color type specified");
    LABEL_49:
      nndetailImagePng_png_error_plt(a1,
                                     "Invalid bit depth for paletted image");
      goto LABEL_50;
    }
    v15 = 4;
    if (a4 == 8 || a4 == 16) {
      goto LABEL_21;
    }
    nndetailImagePng_png_error_plt(a1, "Invalid bit depth for RGBA image");
  }
  if (a5 == 0) {
  LABEL_19:
    if (a4 > 0x10 || (v15 = 1, ((1 << a4) & 0x10116) == 0)) {
    LABEL_50:
      nndetailImagePng_png_error_plt(a1,
                                     "Invalid bit depth for grayscale image");
      __udf(0);
    }
    goto LABEL_21;
  }
  if (a5 != 2) {
    goto LABEL_48;
  }
  v15 = 3;
  if (a4 != 8 && a4 != 16) {
    nndetailImagePng_png_error_plt(a1, "Invalid bit depth for RGB image");
    goto LABEL_13;
  }
LABEL_21:
  *(_BYTE*)(a1 + 731) = v15;
  if (a6 != 0) {
    nndetailImagePng_png_warning_plt(a1, "Invalid compression type specified");
  }
  if ((*(_BYTE*)(a1 + 1104) & 4) == 0 || (*(_BYTE*)(a1 + 413) & 0x10) != 0) {
    if (a7 == 0) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v17 = (a5 & 0xFFFFFFFB) != 2 || a7 != 64;
  if (a7 != 0 && v17) {
  LABEL_35:
    nndetailImagePng_png_warning_plt(a1, "Invalid filter type specified");
    LOBYTE(a7) = 0;
  }
LABEL_36:
  if (a8 >= 2) {
    nndetailImagePng_png_warning_plt(a1, "Invalid interlace type specified");
    LOBYTE(a8) = 1;
  }
  v18 = *(_BYTE*)(a1 + 731);
  *(_BYTE*)(a1 + 728) = a4;
  *(_BYTE*)(a1 + 727) = a5;
  *(_BYTE*)(a1 + 724) = a8;
  *(_BYTE*)(a1 + 1108) = a7;
  *(_BYTE*)(a1 + 1168) = 0;
  *(_DWORD*)(a1 + 616) = a2;
  *(_DWORD*)(a1 + 620) = a3;
  *(_BYTE*)(a1 + 730) = v18 * a4;
  if ((unsigned __int8)(v18 * a4) < 8u) {
    v19 = ((unsigned __int8)(v18 * a4) * (unsigned __int64)a2 + 7) >> 3;
  }
  else {
    v19 = a2 * (unsigned __int64)((unsigned __int8)(v18 * a4) >> 3);
  }
  *(_BYTE*)(a1 + 732) = v18;
  v22[0] = HIBYTE(a2);
  *(_QWORD*)(a1 + 632) = v19;
  *(_DWORD*)(a1 + 628) = a2;
  *(_BYTE*)(a1 + 729) = a4;
  v22[3] = a2;
  v22[7] = a3;
  v22[8] = a4;
  v22[9] = a5;
  v22[10] = 0;
  v22[11] = a7;
  v22[12] = a8;
  v22[1] = BYTE2(a2);
  v22[2] = BYTE1(a2);
  v22[4] = HIBYTE(a3);
  v22[5] = BYTE2(a3);
  v22[6] = BYTE1(a3);
  result = ((__int64 (*)(__int64, __int64, _BYTE*, __int64))SdkRoutine_8ae80)(
      a1, 1229472850, v22, 13);
  if (*(_BYTE*)(a1 + 726) == 0) {
    v21 = 8;
    if (*(_BYTE*)(a1 + 727) != 3) {
      if (*(unsigned __int8*)(a1 + 728) < 8u) {
        v21 = 8;
      }
      else {
        v21 = -8;
      }
    }
    *(_BYTE*)(a1 + 726) = v21;
  }
  *(_DWORD*)(a1 + 412) = 1;
  return result;
}

#pragma GCC visibility pop
