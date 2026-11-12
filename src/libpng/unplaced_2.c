#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImagePng_png_chunk_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
__int64 png_set_longjmp_fn(_QWORD);
unsigned __int64 png_format_buffer(unsigned __int64 result, _BYTE*, __int64);
__int64 libpng_69160(__int64 result, unsigned int a2, unsigned int a3, int a4,
                     unsigned int a5, int a6, int a7, int a8);
void __attribute__((noreturn)) libpng_6c5b0(__int64 a1, __int64 a2);
__int64 libpng_6cb40(__int64 a1, __int64 a2);
__int64 libpng_7d7d0(__int64 result, unsigned int a2);

__int64 libpng_69160(__int64 result, unsigned int a2, unsigned int a3, int a4,
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

void __attribute__((noreturn)) libpng_6c5b0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BYTE v31[13];

  v2 = a2;
  if (a1 == 0) {
    a1 = nndetailImagePng_png_error_plt(0, a2);
  }
  v21 = 0;
  v20 = 0;
  v3 = a1;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  memset(v31, 0, sizeof(v31));
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v4 = *(unsigned int*)(a1 + 648);
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  png_format_buffer(v4, &v5, v2);
  nndetailImagePng_png_error_plt(v3, &v5);
  __udf(0);
}

__int64 libpng_6cb40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  int v5;
  int v6;
  __int64 v7;
  struct {
    _QWORD v9[27];
    int v10;
  } v9_;

  v9_.v10 = 0;
  BYTE1(v9_.v9[3]) = 0;
  memset((char*)&v9_.v9[3] + 2, 0, 190);
  strcpy((char*)v9_.v9, "fixed point overflow in ");
  if (a2 == 0) {
    LOBYTE(v9_.v9[3]) = 0;
    a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
  }
  v2 = a2 + 2;
  v3 = 28;
  v4 = (char*)&v9_.v9[3] + 4;
  while (*(_BYTE*)(v2 + v3 - 30) != 0) {
    v5 = *(unsigned __int8*)(v2 + v3 - 29);
    *(v4 - 4) = *(_BYTE*)(v2 + v3 - 30);
    if (v5 == 0) {
      goto LABEL_12;
    }
    *(v4 - 3) = v5;
    if (*(_BYTE*)(v2 + v3 - 28) == 0) {
      goto LABEL_13;
    }
    v6 = *(unsigned __int8*)(v2 + v3 - 27);
    *(v4 - 2) = *(_BYTE*)(v2 + v3 - 28);
    if (v6 == 0) {
      goto LABEL_14;
    }
    *(v4 - 1) = v6;
    if (*(_BYTE*)(v2 + v3 - 26) == 0) {
      goto LABEL_15;
    }
    *v4 = *(_BYTE*)(v2 + v3 - 26);
    v4 += 5;
    v3 += 5;
    if (v3 == 223) {
      HIBYTE(v9_.v10) = 0;
      a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
      break;
    }
  }
  *((_BYTE*)&v9_.v9[3] + (unsigned int)(v3 - 28)) = 0;
  a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
LABEL_12:
  *((_BYTE*)&v9_.v9[3] + (unsigned int)(v3 - 27)) = 0;
  a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
LABEL_13:
  *((_BYTE*)&v9_.v9[3] + (unsigned int)(v3 - 26)) = 0;
  a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
LABEL_14:
  *((_BYTE*)&v9_.v9[3] + (unsigned int)(v3 - 25)) = 0;
  a1 = nndetailImagePng_png_error_plt(a1, v9_.v9);
LABEL_15:
  *((_BYTE*)&v9_.v9[3] + (unsigned int)(v3 - 24)) = 0;
  v7 = nndetailImagePng_png_error_plt(a1, v9_.v9);
  return png_set_longjmp_fn(v7);
}

__int64 libpng_7d7d0(__int64 result, unsigned int a2)
{
  bool v2;
  bool v3;

  v2 = (unsigned int)(unsigned __int8)a2 - 123 >= 0xFFFFFFC6 &&
       (unsigned int)(unsigned __int8)a2 - 91 > 5;
  if (!v2 || ((unsigned int)BYTE1(a2) - 123 >= 0xFFFFFFC6
                  ? (v3 = (unsigned int)BYTE1(a2) - 91 >= 6)
                  : (v3 = false),
              !v3 || (unsigned int)BYTE2(a2) - 123 < 0xFFFFFFC6 ||
                  (unsigned int)BYTE2(a2) - 91 < 6 ||
                  HIBYTE(a2) - 123 < 0xFFFFFFC6 || HIBYTE(a2) - 91 < 6u)) {
    nndetailImagePng_png_chunk_error_plt(result, "invalid chunk type");
    __udf(0);
  }
  return result;
}

#pragma GCC visibility pop
