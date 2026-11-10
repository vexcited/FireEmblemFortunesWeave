#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 jpeg_entropy_add_table(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImageJpeg_jpeg_alloc_quant_table_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_default_colorspace_plt(_QWORD);
__int64 nndetailImageJpeg_jpeg_set_linear_quality_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_bcac50;
extern _UNKNOWN SdkData_bcac54;
extern _UNKNOWN SdkData_bcad50;
extern _UNKNOWN SdkData_bcad54;
extern _UNKNOWN SdkData_bcae4c;
extern _UNKNOWN SdkData_bcae5d;
extern _UNKNOWN SdkData_bcae69;
extern _UNKNOWN SdkData_bcae7a;
extern _UNKNOWN SdkData_bcae86;
extern _UNKNOWN SdkData_bcae97;
extern _UNKNOWN SdkData_bcaf39;
extern _UNKNOWN SdkData_bcaf4a;
__int64 nndetailImageJpeg_jpeg_default_qtables(__int64 result, int a2);
_DWORD* nndetailImageJpeg_jpeg_set_linear_quality(_DWORD* result, int a2,
                                                  int a3);
__int64 nndetailImageJpeg_jpeg_set_defaults(__int64 a1);

__int64 nndetailImageJpeg_jpeg_default_qtables(__int64 result, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  __int16 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int* v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  unsigned int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v2 = *(int*)(result + 152);
  v4 = result;
  if (*(_DWORD*)(result + 36) == 100) {
    if (*(_QWORD*)(result + 120) != 0) {
      goto LABEL_3;
    }
  }
  else {
    *(_DWORD*)(*(_QWORD*)result + 40LL) = 21;
    *(_DWORD*)(*(_QWORD*)result + 44LL) = *(_DWORD*)(result + 36);
    result = (**(__int64 (***)(__int64))result)(result);
    if (*(_QWORD*)(v4 + 120) != 0) {
    LABEL_3:
      v5 = 0;
      if (a2 != 0) {
        goto LABEL_4;
      }
      goto LABEL_23;
    }
  }
  result = nndetailImageJpeg_jpeg_alloc_quant_table_plt(v4);
  *(_QWORD*)(v4 + 120) = result;
  v5 = 0;
  if (a2 != 0) {
  LABEL_4:
    v6 = (unsigned int*)&SdkData_bcac50;
    do {
      v7 = *(v6 - 1) * v2;
      v8 = (v7 + 50) / 100;
      if (v8 <= 1) {
        v8 = 1;
      }
      if (v8 >= 0x7FFF) {
        LOWORD(v8) = 0x7FFF;
      }
      if (v7 <= 25549) {
        v9 = v8;
      }
      else {
        v9 = 255;
      }
      *(_WORD*)(*(_QWORD*)(v4 + 120) + v5) = v9;
      v10 = *v6;
      v6 += 2;
      v11 = v10 * v2;
      v12 = (v11 + 50) / 100;
      if (v12 <= 1) {
        v12 = 1;
      }
      if (v12 >= 0x7FFF) {
        LOWORD(v12) = 0x7FFF;
      }
      if (v11 <= 25549) {
        v13 = v12;
      }
      else {
        v13 = 255;
      }
      v14 = *(_QWORD*)(v4 + 120) + v5;
      v5 += 4;
      *(_WORD*)(v14 + 2) = v13;
    } while (v5 != 128);
    goto LABEL_41;
  }
LABEL_23:
  v15 = (unsigned int*)&SdkData_bcac54;
  do {
    v16 = (*(v15 - 2) * v2 + 50) / 100;
    if (v16 <= 1) {
      v16 = 1;
    }
    if (v16 >= 0x7FFF) {
      LOWORD(v16) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 120) + v5) = v16;
    v17 = (*(v15 - 1) * v2 + 50) / 100;
    if (v17 <= 1) {
      v17 = 1;
    }
    if (v17 >= 0x7FFF) {
      LOWORD(v17) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 120) + v5 + 2) = v17;
    v18 = (*v15 * v2 + 50) / 100;
    if (v18 <= 1) {
      v18 = 1;
    }
    if (v18 >= 0x7FFF) {
      LOWORD(v18) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 120) + v5 + 4) = v18;
    v19 = v15[1];
    v15 += 4;
    v20 = (v19 * v2 + 50) / 100;
    if (v20 <= 1) {
      v20 = 1;
    }
    v21 = *(_QWORD*)(v4 + 120) + v5;
    v5 += 8;
    if (v20 >= 0x7FFF) {
      LOWORD(v20) = 0x7FFF;
    }
    *(_WORD*)(v21 + 6) = v20;
  } while (v5 != 128);
LABEL_41:
  *(_DWORD*)(*(_QWORD*)(v4 + 120) + 128LL) = 0;
  v22 = *(int*)(v4 + 156);
  if (*(_DWORD*)(v4 + 36) == 100) {
    if (*(_QWORD*)(v4 + 128) != 0) {
      goto LABEL_43;
    }
  }
  else {
    *(_DWORD*)(*(_QWORD*)v4 + 40LL) = 21;
    *(_DWORD*)(*(_QWORD*)v4 + 44LL) = *(_DWORD*)(v4 + 36);
    result = (**(__int64 (***)(__int64))v4)(v4);
    if (*(_QWORD*)(v4 + 128) != 0) {
    LABEL_43:
      v23 = 0;
      if (a2 != 0) {
        goto LABEL_44;
      }
      goto LABEL_63;
    }
  }
  result = nndetailImageJpeg_jpeg_alloc_quant_table_plt(v4);
  *(_QWORD*)(v4 + 128) = result;
  v23 = 0;
  if (a2 != 0) {
  LABEL_44:
    v24 = (unsigned int*)&SdkData_bcad50;
    do {
      v25 = *(v24 - 1) * v22;
      v26 = (v25 + 50) / 100;
      if (v26 <= 1) {
        v26 = 1;
      }
      if (v26 >= 0x7FFF) {
        LOWORD(v26) = 0x7FFF;
      }
      if (v25 <= 25549) {
        v27 = v26;
      }
      else {
        v27 = 255;
      }
      *(_WORD*)(*(_QWORD*)(v4 + 128) + v23) = v27;
      v28 = *v24;
      v24 += 2;
      v29 = v28 * v22;
      v30 = (v29 + 50) / 100;
      if (v30 <= 1) {
        v30 = 1;
      }
      if (v30 >= 0x7FFF) {
        LOWORD(v30) = 0x7FFF;
      }
      if (v29 <= 25549) {
        v31 = v30;
      }
      else {
        v31 = 255;
      }
      v32 = *(_QWORD*)(v4 + 128) + v23;
      v23 += 4;
      *(_WORD*)(v32 + 2) = v31;
    } while (v23 != 128);
    goto LABEL_81;
  }
LABEL_63:
  v33 = (unsigned int*)&SdkData_bcad54;
  do {
    v34 = (*(v33 - 2) * v22 + 50) / 100;
    if (v34 <= 1) {
      v34 = 1;
    }
    if (v34 >= 0x7FFF) {
      LOWORD(v34) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 128) + v23) = v34;
    v35 = (*(v33 - 1) * v22 + 50) / 100;
    if (v35 <= 1) {
      v35 = 1;
    }
    if (v35 >= 0x7FFF) {
      LOWORD(v35) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 128) + v23 + 2) = v35;
    v36 = (*v33 * v22 + 50) / 100;
    if (v36 <= 1) {
      v36 = 1;
    }
    if (v36 >= 0x7FFF) {
      LOWORD(v36) = 0x7FFF;
    }
    *(_WORD*)(*(_QWORD*)(v4 + 128) + v23 + 4) = v36;
    v37 = v33[1];
    v33 += 4;
    v38 = (v37 * v22 + 50) / 100;
    if (v38 <= 1) {
      v38 = 1;
    }
    v39 = *(_QWORD*)(v4 + 128) + v23;
    v23 += 8;
    if (v38 >= 0x7FFF) {
      LOWORD(v38) = 0x7FFF;
    }
    *(_WORD*)(v39 + 6) = v38;
  } while (v23 != 128);
LABEL_81:
  *(_DWORD*)(*(_QWORD*)(v4 + 128) + 128LL) = 0;
  return result;
}

_DWORD* nndetailImageJpeg_jpeg_set_linear_quality(_DWORD* result, int a2,
                                                  int a3)
{
  _DWORD* v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int* v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  unsigned int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v5 = result;
  if (result[9] != 100) {
    *(_DWORD*)(*(_QWORD*)result + 40LL) = 21;
    *(_DWORD*)(*(_QWORD*)result + 44LL) = result[9];
    result = (_DWORD*)(**(__int64 (***)(_DWORD*))result)(result);
  }
  if (*((_QWORD*)v5 + 15) == 0) {
    result = (_DWORD*)nndetailImageJpeg_jpeg_alloc_quant_table_plt(v5);
    *((_QWORD*)v5 + 15) = result;
  }
  v6 = 0;
  if (a3 != 0) {
    v7 = (unsigned int*)&SdkData_bcac50;
    do {
      v8 = *(v7 - 1) * (__int64)a2;
      v9 = (v8 + 50) / 100;
      if (v9 <= 1) {
        v9 = 1;
      }
      if (v9 >= 0x7FFF) {
        LOWORD(v9) = 0x7FFF;
      }
      if (v8 <= 25549) {
        v10 = v9;
      }
      else {
        v10 = 255;
      }
      *(_WORD*)(*((_QWORD*)v5 + 15) + v6) = v10;
      v11 = *v7;
      v7 += 2;
      v12 = v11 * (__int64)a2;
      v13 = (v12 + 50) / 100;
      if (v13 <= 1) {
        v13 = 1;
      }
      if (v13 >= 0x7FFF) {
        LOWORD(v13) = 0x7FFF;
      }
      if (v12 <= 25549) {
        v14 = v13;
      }
      else {
        v14 = 255;
      }
      v15 = *((_QWORD*)v5 + 15) + v6;
      v6 += 4;
      *(_WORD*)(v15 + 2) = v14;
    } while (v6 != 128);
  }
  else {
    v16 = (unsigned int*)&SdkData_bcac54;
    do {
      v17 = (*(v16 - 2) * (__int64)a2 + 50) / 100;
      if (v17 <= 1) {
        v17 = 1;
      }
      if (v17 >= 0x7FFF) {
        LOWORD(v17) = 0x7FFF;
      }
      *(_WORD*)(*((_QWORD*)v5 + 15) + v6) = v17;
      v18 = (*(v16 - 1) * (__int64)a2 + 50) / 100;
      if (v18 <= 1) {
        v18 = 1;
      }
      if (v18 >= 0x7FFF) {
        LOWORD(v18) = 0x7FFF;
      }
      *(_WORD*)(*((_QWORD*)v5 + 15) + v6 + 2) = v18;
      v19 = (*v16 * (__int64)a2 + 50) / 100;
      if (v19 <= 1) {
        v19 = 1;
      }
      if (v19 >= 0x7FFF) {
        LOWORD(v19) = 0x7FFF;
      }
      *(_WORD*)(*((_QWORD*)v5 + 15) + v6 + 4) = v19;
      v20 = v16[1];
      v16 += 4;
      v21 = (v20 * a2 + 50) / 100;
      if (v21 <= 1) {
        v21 = 1;
      }
      v22 = *((_QWORD*)v5 + 15) + v6;
      v6 += 8;
      if (v21 >= 0x7FFF) {
        LOWORD(v21) = 0x7FFF;
      }
      *(_WORD*)(v22 + 6) = v21;
    } while (v6 != 128);
  }
  *(_DWORD*)(*((_QWORD*)v5 + 15) + 128LL) = 0;
  if (v5[9] == 100) {
    if (*((_QWORD*)v5 + 16) != 0) {
      goto LABEL_43;
    }
  }
  else {
    *(_DWORD*)(*(_QWORD*)v5 + 40LL) = 21;
    *(_DWORD*)(*(_QWORD*)v5 + 44LL) = v5[9];
    result = (_DWORD*)(**(__int64 (***)(_DWORD*))v5)(v5);
    if (*((_QWORD*)v5 + 16) != 0) {
    LABEL_43:
      v23 = 0;
      if (a3 != 0) {
        goto LABEL_44;
      }
      goto LABEL_63;
    }
  }
  result = (_DWORD*)nndetailImageJpeg_jpeg_alloc_quant_table_plt(v5);
  *((_QWORD*)v5 + 16) = result;
  v23 = 0;
  if (a3 != 0) {
  LABEL_44:
    v24 = (unsigned int*)&SdkData_bcad50;
    do {
      v25 = *(v24 - 1) * (__int64)a2;
      v26 = (v25 + 50) / 100;
      if (v26 <= 1) {
        v26 = 1;
      }
      if (v26 >= 0x7FFF) {
        LOWORD(v26) = 0x7FFF;
      }
      if (v25 <= 25549) {
        v27 = v26;
      }
      else {
        v27 = 255;
      }
      *(_WORD*)(*((_QWORD*)v5 + 16) + v23) = v27;
      v28 = *v24;
      v24 += 2;
      v29 = v28 * (__int64)a2;
      v30 = (v29 + 50) / 100;
      if (v30 <= 1) {
        v30 = 1;
      }
      if (v30 >= 0x7FFF) {
        LOWORD(v30) = 0x7FFF;
      }
      if (v29 <= 25549) {
        v31 = v30;
      }
      else {
        v31 = 255;
      }
      v32 = *((_QWORD*)v5 + 16) + v23;
      v23 += 4;
      *(_WORD*)(v32 + 2) = v31;
    } while (v23 != 128);
    goto LABEL_81;
  }
LABEL_63:
  v33 = (unsigned int*)&SdkData_bcad54;
  do {
    v34 = (*(v33 - 2) * (__int64)a2 + 50) / 100;
    if (v34 <= 1) {
      v34 = 1;
    }
    if (v34 >= 0x7FFF) {
      LOWORD(v34) = 0x7FFF;
    }
    *(_WORD*)(*((_QWORD*)v5 + 16) + v23) = v34;
    v35 = (*(v33 - 1) * (__int64)a2 + 50) / 100;
    if (v35 <= 1) {
      v35 = 1;
    }
    if (v35 >= 0x7FFF) {
      LOWORD(v35) = 0x7FFF;
    }
    *(_WORD*)(*((_QWORD*)v5 + 16) + v23 + 2) = v35;
    v36 = (*v33 * (__int64)a2 + 50) / 100;
    if (v36 <= 1) {
      v36 = 1;
    }
    if (v36 >= 0x7FFF) {
      LOWORD(v36) = 0x7FFF;
    }
    *(_WORD*)(*((_QWORD*)v5 + 16) + v23 + 4) = v36;
    v37 = v33[1];
    v33 += 4;
    v38 = (v37 * a2 + 50) / 100;
    if (v38 <= 1) {
      v38 = 1;
    }
    v39 = *((_QWORD*)v5 + 16) + v23;
    v23 += 8;
    if (v38 >= 0x7FFF) {
      LOWORD(v38) = 0x7FFF;
    }
    *(_WORD*)(v39 + 6) = v38;
  } while (v23 != 128);
LABEL_81:
  *(_DWORD*)(*((_QWORD*)v5 + 16) + 128LL) = 0;
  return result;
}

__int64 nndetailImageJpeg_jpeg_set_defaults(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;

  if (*(_DWORD*)(a1 + 36) != 100) {
    *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 21;
    *(_DWORD*)(*(_QWORD*)a1 + 44LL) = *(_DWORD*)(a1 + 36);
    (**(void (***)(__int64))a1)(a1);
  }
  if (*(_QWORD*)(a1 + 112) == 0) {
    *(_QWORD*)(a1 + 112) =
        (**(__int64 (***)(__int64, _QWORD, __int64))(a1 + 8))(a1, 0, 960);
  }
  *(_QWORD*)(a1 + 80) = 0x100000001LL;
  *(_DWORD*)(a1 + 96) = 8;
  nndetailImageJpeg_jpeg_set_linear_quality_plt(a1, 50, 1);
  v2 = 240;
  if (*(_DWORD*)(a1 + 32) == 0) {
    v2 = 168;
  }
  v3 = a1 + v2;
  v4 = 272;
  if (*(_DWORD*)(a1 + 32) == 0) {
    v4 = 200;
  }
  v5 = a1 + v4;
  jpeg_entropy_add_table(a1, v3, &SdkData_bcae4c, &SdkData_bcae5d);
  jpeg_entropy_add_table(a1, v5, &SdkData_bcae86, &SdkData_bcae97);
  jpeg_entropy_add_table(a1, v3 + 8, &SdkData_bcae69, &SdkData_bcae7a);
  jpeg_entropy_add_table(a1, v5 + 8, &SdkData_bcaf39, &SdkData_bcaf4a);
  v6 = *(_DWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 264) = 0x505050505050505LL;
  *(_QWORD*)(a1 + 272) = 0x505050505050505LL;
  *(_QWORD*)(a1 + 248) = 0x101010101010101LL;
  *(_QWORD*)(a1 + 256) = 0x101010101010101LL;
  *(_DWORD*)(a1 + 304) = v6 > 8;
  *(_QWORD*)(a1 + 308) = 0x100000000LL;
  *(_QWORD*)(a1 + 316) = 0;
  *(_QWORD*)(a1 + 324) = 0;
  *(_WORD*)(a1 + 336) = 257;
  *(_DWORD*)(a1 + 340) = 65537;
  return nndetailImageJpeg_jpeg_default_colorspace_plt(a1);
}

#pragma GCC visibility pop
