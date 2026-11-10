#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 libjpegturbonx_4b820();
__int64 libjpegturbonx_4bae0();
__int64 libjpegturbonx_4bde0();
__int64 libjpegturbonx_4bfa0();
__int64 nndetailImageJpeg_jpeg_make_d_derived_tbl_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD);
__int64 start_pass_phuff_decoder(__int64 result);

__int64 start_pass_phuff_decoder(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  bool v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  bool v10;
  int v11;
  char v12;
  char v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int* v21;
  __int64 v22;
  __int64 i;
  int v24;
  __int64 v25;
  int v26;
  int* v27;
  __int64 (*v28)();
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = *(_DWORD*)(result + 540);
  v2 = *(_DWORD*)(result + 544);
  v3 = result;
  if (v1 != 0) {
    v5 = v1 <= v2 && v2 <= 63 && *(_DWORD*)(result + 448) == 1;
  }
  else {
    v5 = v2 == 0;
  }
  v6 = *(_DWORD*)(result + 548);
  v7 = *(_DWORD*)(result + 552);
  v8 = *(_QWORD*)(result + 624);
  v9 = !v5;
  v10 = v6 != 0;
  v11 = v6 - 1;
  v12 = v10;
  if (v7 == v11) {
    v13 = 0;
  }
  else {
    v13 = v12;
  }
  if (v7 > 13 || (v13 & 1) != 0 || v9 != 0) {
    *(_DWORD*)(*(_QWORD*)result + 40LL) = 17;
    *(_DWORD*)(*(_QWORD*)result + 44LL) = *(_DWORD*)(result + 540);
    *(_DWORD*)(*(_QWORD*)result + 48LL) = *(_DWORD*)(result + 544);
    *(_DWORD*)(*(_QWORD*)result + 52LL) = *(_DWORD*)(result + 548);
    *(_DWORD*)(*(_QWORD*)result + 56LL) = *(_DWORD*)(result + 552);
    result = (**(__int64 (***)(__int64))result)(result);
    v14 = *(_DWORD*)(v3 + 448);
    if (v14 < 1) {
      goto LABEL_47;
    }
  }
  else {
    v14 = *(_DWORD*)(result + 448);
    if (v14 < 1) {
      goto LABEL_47;
    }
  }
  v15 = v3 + 456;
  if (v1 != 0) {
    v16 = 0;
    while (1) {
      v17 = *(_QWORD*)(v3 + 200);
      v18 = *(_DWORD*)(*(_QWORD*)(v15 + 8 * v16) + 4LL);
      if ((*(_DWORD*)(v17 + ((__int64)v18 << 8)) & 0x80000000) != 0) {
        *(_DWORD*)(*(_QWORD*)v3 + 40LL) = 118;
        *(_DWORD*)(*(_QWORD*)v3 + 44LL) = v18;
        *(_DWORD*)(*(_QWORD*)v3 + 48LL) = 0;
        result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 8LL))(
            v3, 0xFFFFFFFFLL);
        v19 = *(_DWORD*)(v3 + 540);
        if (v19 <= (signed __int32)*(_DWORD*)(v3 + 544)) {
        LABEL_31:
          v20 = v19 - 1LL;
          v21 = (int*)(v17 + ((__int64)v18 << 8) + 4LL * v19);
          do {
            if (*(_DWORD*)(v3 + 548) != (*v21 & ~(*v21 >> 31))) {
              *(_DWORD*)(*(_QWORD*)v3 + 40LL) = 118;
              *(_DWORD*)(*(_QWORD*)v3 + 44LL) = v18;
              *(_DWORD*)(*(_QWORD*)v3 + 48LL) = v19;
              result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 8LL))(
                  v3, 0xFFFFFFFFLL);
            }
            ++v20;
            ++v19;
            *v21++ = *(_DWORD*)(v3 + 552);
          } while (v20 < *(int*)(v3 + 544));
        }
      }
      else {
        v19 = *(_DWORD*)(v3 + 540);
        if (v19 <= (signed __int32)*(_DWORD*)(v3 + 544)) {
          goto LABEL_31;
        }
      }
      if (++v16 >= *(int*)(v3 + 448)) {
        goto LABEL_47;
      }
    }
  }
  LODWORD(v22) = *(_DWORD*)(v3 + 544);
  if ((signed __int32)*(_DWORD*)(v3 + 540) > (int)v22) {
    if (*(_DWORD*)(v3 + 548) == 0) {
      *(_QWORD*)(v8 + 8) = libjpegturbonx_4b820;
      if (*(int*)(v3 + 448) < 1) {
        goto LABEL_59;
      }
      goto LABEL_56;
    }
    goto LABEL_55;
  }
  for (i = 0; i < v14; ++i) {
    v24 = *(_DWORD*)(v3 + 540);
    if (v24 <= (int)v22) {
      v25 = v24 - 1LL;
      v26 = *(_DWORD*)(*(_QWORD*)(v15 + 8 * i) + 4LL);
      v27 = (int*)(*(_QWORD*)(v3 + 200) + ((__int64)v26 << 8) + 4LL * v24);
      do {
        if (*(_DWORD*)(v3 + 548) != (*v27 & ~(*v27 >> 31))) {
          *(_DWORD*)(*(_QWORD*)v3 + 40LL) = 118;
          *(_DWORD*)(*(_QWORD*)v3 + 44LL) = v26;
          *(_DWORD*)(*(_QWORD*)v3 + 48LL) = v24;
          result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 8LL))(
              v3, 0xFFFFFFFFLL);
        }
        ++v25;
        ++v24;
        *v27++ = *(_DWORD*)(v3 + 552);
        v22 = *(int*)(v3 + 544);
      } while (v25 < v22);
      v14 = *(_DWORD*)(v3 + 448);
    }
  }
LABEL_47:
  if (*(_DWORD*)(v3 + 548) != 0) {
    if (v1 != 0) {
      *(_QWORD*)(v8 + 8) = libjpegturbonx_4bfa0;
      if (*(int*)(v3 + 448) < 1) {
        goto LABEL_59;
      }
      goto LABEL_56;
    }
  LABEL_55:
    *(_QWORD*)(v8 + 8) = libjpegturbonx_4bde0;
    if (*(int*)(v3 + 448) < 1) {
      goto LABEL_59;
    }
    goto LABEL_56;
  }
  v28 = libjpegturbonx_4bae0;
  if (v1 == 0) {
    v28 = libjpegturbonx_4b820;
  }
  *(_QWORD*)(v8 + 8) = v28;
  if (*(int*)(v3 + 448) >= 1) {
  LABEL_56:
    v29 = v8 + 64;
    v30 = v8 + 44;
    if (v1 != 0) {
      v31 = 0;
      do {
        v32 = *(int*)(*(_QWORD*)(v3 + 8 * v31 + 456) + 24LL);
        result = nndetailImageJpeg_jpeg_make_d_derived_tbl_plt(
            v3, 0, (unsigned int)v32, v29 + 8 * v32);
        *(_QWORD*)(v8 + 96) = *(_QWORD*)(v29 + 8 * v32);
        *(_DWORD*)(v30 + 4 * v31++) = 0;
      } while (v31 < *(int*)(v3 + 448));
    }
    else {
      v33 = 0;
      do {
        if (*(_DWORD*)(v3 + 548) == 0) {
          v34 = *(int*)(*(_QWORD*)(v3 + 8 * v33 + 456) + 20LL);
          result = nndetailImageJpeg_jpeg_make_d_derived_tbl_plt(v3, 1, v34,
                                                                 v29 + 8 * v34);
        }
        *(_DWORD*)(v30 + 4 * v33++) = 0;
      } while (v33 < *(int*)(v3 + 448));
    }
  }
LABEL_59:
  *(_DWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 24) = 0;
  *(_DWORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_DWORD*)(v8 + 60) = *(_DWORD*)(v3 + 380);
  return result;
}

#pragma GCC visibility pop
