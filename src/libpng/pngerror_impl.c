#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fprintf_plt(_QWORD, const char*, ...);
__int64 fputc_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_longjmp_plt(_QWORD, _QWORD);
__int64 png_set_longjmp_fn(_QWORD);
extern void (*SdkData_e86b68[37])();
unsigned __int64 png_format_buffer(unsigned __int64 result, _BYTE*, __int64);
void __attribute__((noreturn)) png_default_error(__int64 a1, const char* a2);
void __attribute__((noreturn)) nndetailImagePng_png_chunk_error(__int64 a1,
                                                                __int64 a2);
__int64 nndetailImagePng_png_fixed_error(__int64 a1, __int64 a2);

void __attribute__((noreturn)) png_default_error(__int64 a1, const char* a2)
{
  __int64 v3;
  const char* v4;

  v3 = *(_QWORD*)SdkData_e86b68[0];
  if (a2 != nullptr) {
    v4 = a2;
  }
  else {
    v4 = "undefined";
  }
  fprintf_plt(*(_QWORD*)SdkData_e86b68[0], "libpng error: %s", v4);
  fputc_plt(10, v3);
  nndetailImagePng_png_longjmp_plt(a1, 1);
  __udf(0);
}

void __attribute__((noreturn)) nndetailImagePng_png_chunk_error(__int64 a1,
                                                                __int64 a2)
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

__int64 nndetailImagePng_png_fixed_error(__int64 a1, __int64 a2)
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

#pragma GCC visibility pop
