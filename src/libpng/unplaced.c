#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
extern __int64 SdkData_e86b80;
_QWORD* nndetailImagePng_png_set_read_fn(_QWORD* result, __int64 a2,
                                         __int64 a3);
__int64 libpng_83a20(__int64 result, _BYTE* a2, char* a3);

_QWORD* nndetailImagePng_png_set_read_fn(_QWORD* result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;

  if (result != nullptr) {
    v3 = result;
    v4 = SdkData_e86b80;
    if (a3 != 0) {
      v4 = a3;
    }
    result[46] = v4;
    result[47] = a2;
    if (result[45] != 0) {
      result[45] = 0;
      result = (_QWORD*)nndetailImagePng_png_warning_plt(
          result, "Can't set both read_data_fn and write_data_fn in the same "
                  "structure");
    }
    v3[96] = 0;
  }
  return result;
}

__int64 libpng_83a20(__int64 result, _BYTE* a2, char* a3)
{
  unsigned __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  char v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  int v13;
  int v14;
  char v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  char v22;
  _BYTE* v23;
  unsigned __int8* v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  char v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;

  v3 = ((unsigned __int64)*(unsigned __int8*)(result + 19) + 7) >> 3;
  if (*(_BYTE*)(result + 19) != 0) {
    v4 = a2;
    if (&a2[v3] <= a2 + 1) {
      v5 = a2 + 1;
    }
    else {
      v5 = &a2[v3];
    }
    do {
      v6 = *a3++;
      *v4++ += v6;
    } while (v4 < &a2[v3]);
    v7 = *(_QWORD*)(result + 8);
    if (v4 >= &a2[v7]) {
      return result;
    }
  }
  else {
    v5 = a2;
    v4 = a2;
    v7 = *(_QWORD*)(result + 8);
    if (a2 >= &a2[v7]) {
      return result;
    }
  }
  v8 = &a2[v7];
  v9 = -(__int64)v3;
  v10 = v5 + 1;
  v11 = (_BYTE*)(&a2[v7] - v5);
  if (((unsigned __int8)v11 & 1) == 0) {
    v12 = v4;
    if (v8 == v10) {
      return result;
    }
    goto LABEL_26;
  }
  v13 = (unsigned __int8)a3[v9];
  v14 = (unsigned __int8)v4[v9];
  v16 = (unsigned __int8)*a3++;
  v15 = v16;
  v17 = v16 - v13;
  v18 = v14 - v13;
  if (v16 - v13 >= 0) {
    v19 = v17;
  }
  else {
    v19 = -v17;
  }
  if (v18 >= 0) {
    result = (unsigned int)v18;
  }
  else {
    result = (unsigned int)(v13 - v14);
  }
  v20 = v17 + v18;
  if (v20 < 0) {
    v20 = -v20;
  }
  if ((unsigned int)result >= v19) {
    v21 = v19;
  }
  else {
    LOBYTE(v14) = v15;
    v21 = result;
  }
  if (v20 >= v21) {
    LOBYTE(v13) = v14;
  }
  v22 = v13 + *v4;
  v12 = v4 + 1;
  *v4 = v22;
  if (v8 != v10) {
  LABEL_26:
    v23 = &v11[(_QWORD)v4];
    v24 = (unsigned __int8*)(a3 + 1);
    do {
      v25 = *(v24 - 1);
      v26 = v24[v9 - 1];
      v27 = (unsigned __int8)v12[v9];
      v28 = v25 - v26;
      v29 = v27 - v26;
      if (v25 - v26 >= 0) {
        result = v28;
      }
      else {
        result = (unsigned int)(v26 - v25);
      }
      if (v29 >= 0) {
        v30 = v27 - v26;
      }
      else {
        v30 = v26 - v27;
      }
      v31 = v28 + v29;
      if (v31 < 0) {
        v31 = -v31;
      }
      if (v30 >= (unsigned int)result) {
        v32 = result;
      }
      else {
        LOBYTE(v27) = *(v24 - 1);
        v32 = v30;
      }
      if (v31 >= v32) {
        LOBYTE(v26) = v27;
      }
      *v12 += v26;
      v33 = v24[v9];
      v34 = (unsigned __int8)v12[v9 + 1];
      v36 = *v24;
      v24 += 2;
      v35 = v36;
      v37 = v36 - v33;
      v38 = v34 - v33;
      if (v36 - v33 >= 0) {
        v39 = v37;
      }
      else {
        v39 = -v37;
      }
      if (v38 >= 0) {
        v40 = v34 - v33;
      }
      else {
        v40 = v33 - v34;
      }
      v41 = v37 + v38;
      if (v41 < 0) {
        v41 = -v41;
      }
      if (v40 >= v39) {
        v42 = v39;
      }
      else {
        LOBYTE(v34) = v35;
        v42 = v40;
      }
      if (v41 >= v42) {
        LOBYTE(v33) = v34;
      }
      v12[1] += v33;
      v12 += 2;
    } while (v12 != v23);
  }
  return result;
}

#pragma GCC visibility pop
