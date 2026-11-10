#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImagePng_png_benign_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_chunk_report_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
__int64 png_colorspace_endpoints_match(_QWORD, _QWORD, _QWORD);
__int64 png_icc_profile_error(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _DWORD SdkData_bb03f0[8];
extern _QWORD SdkData_bcc790[8];
extern _UNKNOWN SdkData_bcbe90;
__int64 nndetailImagePng_png_build_grayscale_palette(__int64 result,
                                                     __int64 a2);
__int64 nndetailImagePng_png_colorspace_set_sRGB(__int64 a1, __int64 a2,
                                                 unsigned int a3);
__int64 nndetailImagePng_png_check_IHDR(__int64 result, unsigned int a2,
                                        unsigned int a3, int a4,
                                        unsigned int a5, int a6, int a7,
                                        int a8);

__int64 nndetailImagePng_png_build_grayscale_palette(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  char v7;
  _BYTE* v8;
  __int64 v9;
  char v10;
  char v11;
  char v12;
  char v13;
  char v14;
  __int64 v15;
  _BYTE* v16;

  if (a2 != 0) {
    v2 = result - 1;
    if ((unsigned int)(result - 1) <= 7 && ((0x8Bu >> v2) & 1) != 0) {
      v3 = SdkData_bcc790[v2];
      v4 = SdkData_bb03f0[v2];
      if ((unsigned __int64)(v3 - 1) < 7) {
        v5 = 0;
        v6 = 0;
        if ((~v2 & 3) == 0) {
          return result;
        }
        goto LABEL_10;
      }
      v7 = 2 * v4;
      v8 = (_BYTE*)(a2 + 11);
      v9 = 0;
      v6 = 0;
      v10 = 3 * v4;
      v11 = 4 * v4;
      v12 = 5 * v4;
      v13 = 6 * v4;
      result = (unsigned int)(8 * v4);
      do {
        *(v8 - 11) = v6;
        *(v8 - 10) = v6;
        v9 -= 8;
        *(v8 - 9) = v6;
        *(v8 - 8) = v4 + v6;
        *(v8 - 7) = v4 + v6;
        *(v8 - 6) = v4 + v6;
        *(v8 - 5) = v7 + v6;
        *(v8 - 4) = v7 + v6;
        *(v8 - 3) = v7 + v6;
        *(v8 - 2) = v10 + v6;
        *(v8 - 1) = v10 + v6;
        *v8 = v10 + v6;
        v8[1] = v11 + v6;
        v8[2] = v11 + v6;
        v8[3] = v11 + v6;
        v8[4] = v12 + v6;
        v8[5] = v12 + v6;
        v8[6] = v12 + v6;
        v8[7] = v13 + v6;
        v8[8] = v13 + v6;
        v8[9] = v13 + v6;
        v14 = 7 * v4 + v6;
        v6 += result;
        v8[10] = v14;
        v8[11] = v14;
        v8[12] = v14;
        v8 += 24;
      } while (-(__int64)(v3 & 0xFFFFFFFFFFFFFFF8LL) != v9);
      v5 = -v9;
      if ((~v2 & 3) != 0) {
      LABEL_10:
        v15 = v3 & 7;
        v16 = (_BYTE*)(3 * v5 + a2 + 2);
        do {
          *(v16 - 2) = v6;
          *(v16 - 1) = v6;
          --v15;
          *v16 = v6;
          v16 += 3;
          v6 += v4;
        } while (v15 != 0);
      }
    }
  }
  return result;
}

__int64 nndetailImagePng_png_colorspace_set_sRGB(__int64 a1, __int64 a2,
                                                 unsigned int a3)
{
  int v3;
  __int16 v4;
  __int64 v5;
  const char* v6;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  double v13;
  bool v14;
  bool v15;
  __int64 v16;

  v3 = *(__int16*)(a2 + 74);
  if (v3 < 0) {
    return 0;
  }
  v4 = a3;
  if (a3 >= 4) {
    v5 = (int)a3;
    v6 = "invalid sRGB rendering intent";
  LABEL_4:
    png_icc_profile_error(a1, a2, "sRGB", v5, v6);
    return 0;
  }
  v8 = *(_WORD*)(a2 + 74);
  if ((v3 & 4) != 0 && a3 != *(unsigned __int16*)(a2 + 72)) {
    v5 = a3;
    v6 = "inconsistent rendering intents";
    goto LABEL_4;
  }
  if ((v3 & 0x20) != 0) {
    nndetailImagePng_png_benign_error_plt(a1,
                                          "duplicate sRGB information ignored");
    return 0;
  }
  else {
    if ((v3 & 2) != 0) {
      v9 = a2;
      v10 = a1;
      v11 = png_colorspace_endpoints_match(&SdkData_bcbe90, a2 + 4, 100);
      a2 = v9;
      v12 = v11;
      a1 = v10;
      if (v12 == 0) {
        nndetailImagePng_png_chunk_report_plt(
            v10, "cHRM chunk does not match sRGB", 2);
        a1 = v10;
        a2 = v9;
      }
    }
    if ((v8 & 1) != 0) {
      if (*(_DWORD*)a2 == 0 ||
          ((v13 = floor((double)*(int*)a2 * 100000.0 / 45455.0 + 0.5)) <=
                   2147483650.0
               ? (v14 = v13 < -2147483650.0)
               : (v14 = true),
           !v14 ? (v15 = (unsigned int)((int)v13 - 95000) >= 0x2711)
                : (v15 = true),
           v15)) {
        v16 = a2;
        nndetailImagePng_png_chunk_report_plt(
            a1, "gamma value does not match sRGB", 2);
        a2 = v16;
      }
    }
    *(_WORD*)(a2 + 72) = v4;
    *(_QWORD*)(a2 + 4) = 0x80E80000FA00LL;
    *(_QWORD*)(a2 + 12) = 257698037790000LL;
    *(_QWORD*)(a2 + 20) = 0x177000003A98LL;
    *(_QWORD*)(a2 + 28) = 0x808400007A26LL;
    *(_QWORD*)(a2 + 36) = 0x53100000A117LL;
    *(_QWORD*)(a2 + 44) = 0x8BAE0000078DLL;
    *(_QWORD*)(a2 + 52) = 0x2E8F0001175DLL;
    *(_QWORD*)(a2 + 60) = 0x1C3300004680LL;
    *(_DWORD*)(a2 + 68) = 95053;
    *(_DWORD*)a2 = 45455;
    *(_WORD*)(a2 + 74) = v8 | 0xE7;
    return 1;
  }
}

__int64 nndetailImagePng_png_check_IHDR(__int64 result, unsigned int a2,
                                        unsigned int a3, int a4,
                                        unsigned int a5, int a6, int a7, int a8)
{
  __int64 v15;
  int v16;
  const char* v17;
  const char* v18;
  unsigned int v19;
  bool v20;
  int v21;

  v15 = result;
  if (a2 == 0) {
    v17 = "Image width is zero in IHDR";
    goto LABEL_7;
  }
  if ((a2 & 0x80000000) != 0) {
    v17 = "Invalid image width in IHDR";
  LABEL_7:
    result = nndetailImagePng_png_warning_plt(result, v17);
    v16 = 1;
    if (a2 <= *(_DWORD*)(v15 + 1172)) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v16 = 0;
  if (a2 > *(_DWORD*)(result + 1172)) {
  LABEL_8:
    result = nndetailImagePng_png_warning_plt(
        v15, "Image width exceeds user limit in IHDR");
    v16 = 1;
  }
LABEL_9:
  if (a3 != 0) {
    if ((a3 & 0x80000000) == 0) {
      if (a3 <= *(_DWORD*)(v15 + 1176)) {
        goto LABEL_12;
      }
    LABEL_17:
      result = nndetailImagePng_png_warning_plt(
          v15, "Image height exceeds user limit in IHDR");
      v16 = 1;
      if ((unsigned int)a4 > 0x10) {
        goto LABEL_47;
      }
      goto LABEL_18;
    }
    v18 = "Invalid image height in IHDR";
  }
  else {
    v18 = "Image height is zero in IHDR";
  }
  result = nndetailImagePng_png_warning_plt(v15, v18);
  v16 = 1;
  if (a3 > *(_DWORD*)(v15 + 1176)) {
    goto LABEL_17;
  }
LABEL_12:
  if ((unsigned int)a4 > 0x10) {
  LABEL_47:
    result = nndetailImagePng_png_warning_plt(v15, "Invalid bit depth in IHDR");
    v16 = 1;
    v19 = a5 & 0xFFFFFFFB;
    if (a5 > 6) {
      goto LABEL_21;
    }
  LABEL_20:
    if (v19 != 1) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
LABEL_18:
  if (((1 << a4) & 0x10116) == 0) {
    goto LABEL_47;
  }
  v19 = a5 & 0xFFFFFFFB;
  if (a5 <= 6) {
    goto LABEL_20;
  }
LABEL_21:
  result = nndetailImagePng_png_warning_plt(v15, "Invalid color type in IHDR");
  v16 = 1;
LABEL_22:
  if (a4 > 8 && a5 == 3 || (a5 != 4 ? (v20 = v19 == 2) : (v20 = true),
                            !v20 ? (v21 = 0) : (v21 = 1), a4 < 8 && v21 != 0)) {
    result = nndetailImagePng_png_warning_plt(
        v15, "Invalid color type/bit depth combination in IHDR");
    v16 = 1;
  }
  if (a6 >= 2) {
    result = nndetailImagePng_png_warning_plt(
        v15, "Unknown interlace method in IHDR");
    v16 = 1;
  }
  if (a7 != 0) {
    result = nndetailImagePng_png_warning_plt(
        v15, "Unknown compression method in IHDR");
    v16 = 1;
  }
  if ((*(_BYTE*)(v15 + 413) & 0x10) != 0 && *(_DWORD*)(v15 + 1104) != 0) {
    result = nndetailImagePng_png_warning_plt(
        v15, "MNG features are not allowed in a PNG datastream");
  }
  if (a8 != 0 && (a8 != 64 || (*(_DWORD*)(v15 + 1104) & 4) == 0 || v19 != 2 ||
                  (*(_DWORD*)(v15 + 412) & 0x1000) != 0)) {
    nndetailImagePng_png_warning_plt(v15, "Unknown filter method in IHDR");
    if ((*(_BYTE*)(v15 + 413) & 0x10) != 0) {
      nndetailImagePng_png_warning_plt(v15, "Invalid filter method in IHDR");
    }
  LABEL_51:
    nndetailImagePng_png_error_plt(v15, "Invalid IHDR data");
    __udf(0);
  }
  if (v16 != 0) {
    goto LABEL_51;
  }
  return result;
}

#pragma GCC visibility pop
