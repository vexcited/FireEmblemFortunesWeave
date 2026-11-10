#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nndetailImagePng_png_calculate_crc_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_chunk_benign_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_chunk_error_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_chunk_warning_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_crc_finish_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_free_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_malloc_base_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_malloc_warn_plt(_QWORD, _QWORD);
__int64 nndetailImagePng_png_read_data_plt(_QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_pCAL_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD);
__int64 nndetailImagePng_png_set_sPLT_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_set_text_2_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nndetailImagePng_png_warning_plt(_QWORD, _QWORD);
__int64 png_handle_tRNS(_QWORD);
__int64 strlen_plt(_QWORD);
__int64 nndetailImagePng_png_check_chunk_name(__int64 result, unsigned int a2);
__int64 nndetailImagePng_png_handle_sPLT(__int64 a1, __int64 a2,
                                         unsigned int a3);
__int64 nndetailImagePng_png_handle_pCAL(__int64 a1, __int64 a2,
                                         unsigned int a3);
__int64 nndetailImagePng_png_handle_tEXt(__int64 a1, __int64 a2,
                                         unsigned int a3);
__int64 pngrutil_835c0(__int64 result, char* a2);
__int64 png_read_filter_row_avg(__int64 result, _BYTE* a2, char* a3);
__int64 pngrutil_837a0(__int64 result, _BYTE* a2, unsigned __int8* a3);

__int64 nndetailImagePng_png_check_chunk_name(__int64 result, unsigned int a2)
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

__int64 nndetailImagePng_png_handle_sPLT(__int64 a1, __int64 a2,
                                         unsigned int a3)
{
  int v3;
  int v6;
  __int64 result;
  int v8;
  void* v9;
  unsigned __int64 v10;
  __int64 v12;
  void* v13;
  const char* v15;
  __int64 v16;
  unsigned __int16* v17;
  _BYTE* v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  const char* v23;
  __int64 v24;
  _WORD* v25;
  unsigned __int64 v26;
  unsigned int v27;
  __int16 v28;
  __int64 v29;
  struct {
    void* v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v30_;

  v3 = *(_DWORD*)(a1 + 1180);
  if (v3 != 0) {
    v6 = v3 - 1;
    if (v6 == 0) {
      return nndetailImagePng_png_crc_finish_plt(a1, a3);
    }
    *(_DWORD*)(a1 + 1180) = v6;
    if (v6 == 1) {
      nndetailImagePng_png_warning_plt(a1, "No space in chunk cache for sPLT");
      return nndetailImagePng_png_crc_finish_plt(a1, a3);
    }
  }
  v8 = *(_DWORD*)(a1 + 412);
  if ((v8 & 1) == 0) {
    v29 = nndetailImagePng_png_chunk_error_plt(a1, "missing IHDR");
    return png_handle_tRNS(v29);
  }
  if ((v8 & 4) != 0) {
    nndetailImagePng_png_crc_finish_plt(a1, a3);
    v15 = "out of place";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
  }
  v9 = *(void**)(a1 + 1232);
  v10 = a3 + 1;
  if (v9 != nullptr) {
    if (*(_QWORD*)(a1 + 1240) >= v10) {
      goto LABEL_13;
    }
    v12 = *(_QWORD*)(a1 + 1232);
    *(_QWORD*)(a1 + 1232) = 0;
    *(_QWORD*)(a1 + 1240) = 0;
    nndetailImagePng_png_free_plt(a1, v12);
  }
  v13 = (void*)nndetailImagePng_png_malloc_base_plt(a1, a3 + 1);
  if (v13 == nullptr) {
    nndetailImagePng_png_crc_finish_plt(a1, a3);
    v15 = "out of memory";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
  }
  v9 = v13;
  memset_plt(v13, nullptr, a3 + 1);
  *(_QWORD*)(a1 + 1232) = v9;
  *(_QWORD*)(a1 + 1240) = v10;
LABEL_13:
  nndetailImagePng_png_read_data_plt(a1, v9, a3);
  nndetailImagePng_png_calculate_crc_plt(a1, v9, a3);
  result = nndetailImagePng_png_crc_finish_plt(a1, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  v30_.v32 = 0;
  v30_.v33 = 0;
  v30_.v30 = nullptr;
  v30_.v31 = 0;
  *((_BYTE*)v9 + a3) = 0;
  v16 = strlen_plt(v9);
  if (a3 < 2 || (v17 = (unsigned __int16*)((char*)v9 + v16),
                 (v18 = (char*)v9 + v16 + 1) > (_BYTE*)v9 + a3 - 2)) {
    v23 = "malformed sPLT chunk";
    return nndetailImagePng_png_warning_plt(a1, v23);
  }
  LOBYTE(v30_.v31) = *v18;
  v19 = (unsigned __int8)v30_.v31;
  if ((unsigned __int8)v30_.v31 == 8) {
    v20 = 6;
  }
  else {
    v20 = 10;
  }
  v21 = a3 - v16 - 2;
  v22 = v21 / v20;
  if (v21 % v20 != 0) {
    v23 = "sPLT chunk has bad length";
    return nndetailImagePng_png_warning_plt(a1, v23);
  }
  LODWORD(v30_.v33) = v21 / v20;
  v24 = nndetailImagePng_png_malloc_warn_plt(a1, 10LL * (unsigned int)v22);
  v30_.v32 = v24;
  if (v24 == 0) {
    v23 = "sPLT chunk requires too much memory";
    return nndetailImagePng_png_warning_plt(a1, v23);
  }
  if (v20 <= v21) {
    v25 = (_WORD*)(v24 + 4);
    v26 = 0;
    do {
      if (v19 == 8) {
        *(v25 - 2) = *((unsigned __int8*)v17 + 2);
        *(v25 - 1) = *((unsigned __int8*)v17 + 3);
        *v25 = *((unsigned __int8*)v17 + 4);
        v28 = *((unsigned __int8*)v17 + 5);
        v17 += 3;
      }
      else {
        *(v25 - 2) = bswap32(v17[1]) >> 16;
        *(v25 - 1) = bswap32(v17[2]) >> 16;
        *v25 = bswap32(v17[3]) >> 16;
        v27 = v17[4];
        v17 += 5;
        v28 = __rev16(v27);
      }
      v25[1] = v28;
      ++v26;
      v25[2] = bswap32(*v17) >> 16;
      v25 += 5;
    } while (v26 < v22);
  }
  v30_.v30 = v9;
  nndetailImagePng_png_set_sPLT_plt(a1, a2, &v30_.v30, 1);
  return nndetailImagePng_png_free_plt(a1, v30_.v32);
}

__int64 nndetailImagePng_png_handle_pCAL(__int64 a1, __int64 a2,
                                         unsigned int a3)
{
  int v3;
  void* v5;
  unsigned __int64 v6;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  void* v11;
  __int64 v13;
  __int64 result;
  const char* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;

  v3 = *(_DWORD*)(a1 + 412);
  if ((v3 & 1) == 0) {
    nndetailImagePng_png_chunk_error_plt(a1, "missing IHDR");
    __udf(0);
  }
  if ((v3 & 4) != 0) {
    nndetailImagePng_png_crc_finish_plt(a1, a3);
    v15 = "out of place";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
  }
  if (a2 != 0 && (*(_BYTE*)(a2 + 9) & 4) != 0) {
    nndetailImagePng_png_crc_finish_plt(a1, a3);
    v15 = "duplicate";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
  }
  v5 = *(void**)(a1 + 1232);
  v6 = a3 + 1;
  if (v5 != nullptr) {
    if (*(_QWORD*)(a1 + 1240) >= v6) {
      goto LABEL_10;
    }
    v8 = *(_QWORD*)(a1 + 1232);
    v9 = a3;
    *(_QWORD*)(a1 + 1232) = 0;
    *(_QWORD*)(a1 + 1240) = 0;
    nndetailImagePng_png_free_plt(a1, v8);
    a3 = v9;
  }
  v10 = a3;
  v11 = (void*)nndetailImagePng_png_malloc_base_plt(a1, v6);
  if (v11 == nullptr) {
    nndetailImagePng_png_crc_finish_plt(a1, v10);
    goto LABEL_17;
  }
  v5 = v11;
  memset_plt(v11, nullptr, v6);
  *(_QWORD*)(a1 + 1232) = v5;
  *(_QWORD*)(a1 + 1240) = v6;
  a3 = v10;
LABEL_10:
  v13 = a3;
  nndetailImagePng_png_read_data_plt(a1, v5, a3);
  nndetailImagePng_png_calculate_crc_plt(a1, v5, v13);
  result = nndetailImagePng_png_crc_finish_plt(a1, 0);
  if ((_DWORD)result == 0) {
    v16 = (unsigned __int64)v5 + v13;
    *((_BYTE*)v5 + v13) = 0;
    v17 = strlen_plt(v5);
    if (v13 - v17 <= 12) {
      v15 = "invalid";
      return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
    }
    v18 = (unsigned __int8*)v5 + v17;
    v19 = *((unsigned __int8*)v5 + v17 + 1);
    if (*((char*)v5 + v17 + 1) < 0) {
      v20 = -((2147418112 * v18[2] - ((v19 << 24) | (v18[3] << 8) | v18[4])) &
              0x7FFFFFFF);
      v21 = v18[5];
      if (((char)v18[5] & 0x80000000) == 0) {
      LABEL_20:
        v22 = (v21 << 24) | (v18[6] << 16) | (v18[7] << 8) | v18[8];
        v23 = v18[9];
        v24 = v18[10];
        if (v18[9] != 0) {
          goto LABEL_25;
        }
        goto LABEL_24;
      }
    }
    else {
      v20 = (v19 << 24) | (v18[2] << 16) | (v18[3] << 8) | v18[4];
      v21 = v18[5];
      if (((char)v18[5] & 0x80000000) == 0) {
        goto LABEL_20;
      }
    }
    v22 = -((2147418112 * v18[6] - ((v21 << 24) | (v18[7] << 8) | v18[8])) &
            0x7FFFFFFF);
    v23 = v18[9];
    v24 = v18[10];
    if (v18[9] == 0) {
    LABEL_24:
      if ((_DWORD)v24 != 2) {
      LABEL_29:
        v15 = "invalid parameter count";
        return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
      }
    }
  LABEL_25:
    if (v23 - 1 <= 1 && (_DWORD)v24 != 3 || v23 == 3 && (_DWORD)v24 != 4) {
      goto LABEL_29;
    }
    v30 = v17;
    if (v23 >= 4) {
      nndetailImagePng_png_chunk_benign_error_plt(a1,
                                                  "unrecognized equation type");
    }
    v29 = strlen_plt(v18 + 11);
    v25 = nndetailImagePng_png_malloc_warn_plt(a1, 8 * v24);
    if (v25 != 0) {
      v26 = v25;
      if ((_DWORD)v24 == 0) {
      LABEL_41:
        nndetailImagePng_png_set_pCAL_plt(a1, a2, v5, v20, v22, v23,
                                          (unsigned int)v24, v18 + 11, v25);
        return nndetailImagePng_png_free_plt(a1, v26);
      }
      v27 = 0;
      v28 = (char*)v5 + v30 + v29 + 11;
      while (1) {
        *(_QWORD*)(v25 + 8 * v27) = ++v28;
        if ((unsigned __int64)v28 > v16) {
          break;
        }
        while (*v28 != 0) {
          if ((unsigned __int64)++v28 > v16) {
            goto LABEL_42;
          }
        }
        if (++v27 == v24) {
          goto LABEL_41;
        }
      }
    LABEL_42:
      nndetailImagePng_png_free_plt(a1, v25);
      v15 = "invalid data";
      return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
    }
  LABEL_17:
    v15 = "out of memory";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v15);
  }
  return result;
}

__int64 nndetailImagePng_png_handle_tEXt(__int64 a1, __int64 a2,
                                         unsigned int a3)
{
  int v3;
  int v6;
  __int64 result;
  const char* v8;
  int v9;
  void* v10;
  unsigned __int64 v11;
  __int64 v13;
  void* v14;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    void* v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v18_;

  v3 = *(_DWORD*)(a1 + 1180);
  if (v3 != 0) {
    v6 = v3 - 1;
    if (v6 == 0) {
      return nndetailImagePng_png_crc_finish_plt(a1, a3);
    }
    *(_DWORD*)(a1 + 1180) = v6;
    if (v6 == 1) {
      nndetailImagePng_png_crc_finish_plt(a1, a3);
      v8 = "no space in chunk cache";
      return nndetailImagePng_png_chunk_benign_error_plt(a1, v8);
    }
  }
  v9 = *(_DWORD*)(a1 + 412);
  if ((v9 & 1) == 0) {
    nndetailImagePng_png_chunk_error_plt(a1, "missing IHDR");
    __udf(0);
  }
  if ((v9 & 4) != 0) {
    *(_DWORD*)(a1 + 412) = v9 | 8;
  }
  v10 = *(void**)(a1 + 1232);
  v11 = a3 + 1;
  if (v10 != nullptr) {
    if (*(_QWORD*)(a1 + 1240) >= v11) {
      goto LABEL_14;
    }
    v13 = *(_QWORD*)(a1 + 1232);
    *(_QWORD*)(a1 + 1232) = 0;
    *(_QWORD*)(a1 + 1240) = 0;
    nndetailImagePng_png_free_plt(a1, v13);
  }
  v14 = (void*)nndetailImagePng_png_malloc_base_plt(a1, a3 + 1);
  if (v14 == nullptr) {
    nndetailImagePng_png_chunk_warning_plt(a1,
                                           "insufficient memory to read chunk");
    v8 = "out of memory";
    return nndetailImagePng_png_chunk_benign_error_plt(a1, v8);
  }
  v10 = v14;
  memset_plt(v14, nullptr, a3 + 1);
  *(_QWORD*)(a1 + 1232) = v10;
  *(_QWORD*)(a1 + 1240) = v11;
LABEL_14:
  nndetailImagePng_png_read_data_plt(a1, v10, a3);
  nndetailImagePng_png_calculate_crc_plt(a1, v10, a3);
  result = nndetailImagePng_png_crc_finish_plt(a1, 0);
  if ((_DWORD)result == 0) {
    v18_.v20 = 0;
    v18_.v21 = 0;
    v18_.v18 = 0;
    v18_.v19 = nullptr;
    *((_BYTE*)v10 + a3) = 0;
    v16 = strlen_plt(v10);
    v18_.v22 = 0;
    v18_.v23 = 0;
    v18_.v24 = 0;
    if (v16 == a3) {
      v17 = (__int64)v10 + v16;
    }
    else {
      v17 = (__int64)v10 + v16 + 1;
    }
    LODWORD(v18_.v18) = -1;
    v18_.v19 = v10;
    v18_.v20 = v17;
    v18_.v21 = strlen_plt(v17);
    result = nndetailImagePng_png_set_text_2_plt(a1, a2, &v18_.v18, 1);
    if ((_DWORD)result != 0) {
      return nndetailImagePng_png_warning_plt(
          a1, "Insufficient memory to process text chunk");
    }
  }
  return result;
}

__int64 pngrutil_835c0(__int64 result, char* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  unsigned __int64 v7;
  char v8;
  __int64 v9;
  _BYTE* v10;
  char* v11;
  char v12;

  v2 = *(_QWORD*)(result + 8);
  v3 = ((unsigned __int64)*(unsigned __int8*)(result + 19) + 7) >> 3;
  v4 = v3 - v2;
  if (v3 < v2) {
    v5 = &a2[v3];
    v6 = ((int)v2 - (int)v3) & 7LL;
    if (v6 != 0) {
      v7 = v3 + v6;
      do {
        v8 = *a2++;
        --v6;
        *v5++ += v8;
      } while (v6 != 0);
      if (v4 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    else {
      v7 = ((unsigned __int64)*(unsigned __int8*)(result + 19) + 7) >> 3;
      if (v4 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    v9 = v2 - v7;
    v10 = v5 + 7;
    v11 = &v5[-v3 + 3];
    do {
      v9 -= 8;
      *(v10 - 7) += *(v11 - 3);
      *(v10 - 6) += *(v11 - 2);
      *(v10 - 5) += *(v11 - 1);
      *(v10 - 4) += *v11;
      *(v10 - 3) += v11[1];
      *(v10 - 2) += v11[2];
      *(v10 - 1) += v11[3];
      v12 = v11[4];
      v11 += 8;
      *v10 += v12;
      v10 += 8;
    } while (v9 != 0);
  }
  return result;
}

__int64 png_read_filter_row_avg(__int64 result, _BYTE* a2, char* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  char v6;
  char* v7;
  char v8;
  char v9;

  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0) {
    v4 = *(_QWORD*)(result + 8) & 7LL;
    if (v3 >= 8) {
      v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      do {
        v5 -= 8LL;
        *a2 += *a3;
        a2[1] += a3[1];
        a2[2] += a3[2];
        a2[3] += a3[3];
        a2[4] += a3[4];
        a2[5] += a3[5];
        v6 = a2[7];
        a2[6] += a3[6];
        v7 = a3 + 8;
        v8 = a3[7];
        a3 += 8;
        a2[7] = v8 + v6;
        a2 += 8;
      } while (v5 != 0);
      a3 = v7;
    }
    for (; v4 != 0; ++a2) {
      v9 = *a3++;
      --v4;
      *a2 += v9;
    }
  }
  return result;
}

__int64 pngrutil_837a0(__int64 result, _BYTE* a2, unsigned __int8* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;

  v3 = *(_QWORD*)(result + 8);
  v4 = *(unsigned __int8*)(result + 19) + 7LL;
  v5 = v4 >> 3;
  if (*(_BYTE*)(result + 19) == 0) {
    v4 = (unsigned __int64)a3;
    goto LABEL_11;
  }
  v6 = (v4 >> 3) & 7;
  if (v5 - 1 < 7) {
    if (v6 == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v7 = (v4 >> 3) & 0x38;
  do {
    v7 -= 8;
    *a2 += *a3 >> 1;
    a2[1] += a3[1] >> 1;
    a2[2] += a3[2] >> 1;
    a2[3] += a3[3] >> 1;
    a2[4] += a3[4] >> 1;
    a2[5] += a3[5] >> 1;
    v8 = a2[7];
    a2[6] += a3[6] >> 1;
    v4 = (unsigned __int64)(a3 + 8);
    v9 = a3[7];
    a3 += 8;
    a2[7] = v8 + (v9 >> 1);
    a2 += 8;
  } while (v7 != 0);
  a3 = (unsigned __int8*)v4;
  if (v6 != 0) {
  LABEL_9:
    v4 = (unsigned __int64)a3;
    do {
      v10 = *(unsigned __int8*)v4++;
      --v6;
      *a2++ += v10 >> 1;
    } while (v6 != 0);
  }
LABEL_11:
  if (v3 != v5) {
    v11 = (v3 - v5) & 3;
    if (v5 - v3 <= 0xFFFFFFFFFFFFFFFCLL) {
      v12 = (v3 - v5) & 0xFFFFFFFFFFFFFFFCLL;
      v13 = 1 - v5;
      do {
        v12 -= 4LL;
        *a2 +=
            ((unsigned __int8)a2[-v5] + (unsigned int)*(unsigned __int8*)v4) >>
            1;
        a2[1] += ((unsigned __int8)a2[v13] +
                  (unsigned int)*(unsigned __int8*)(v4 + 1)) >>
                 1;
        v14 = a2[3];
        a2[2] += ((unsigned __int8)a2[v13 + 1] +
                  (unsigned int)*(unsigned __int8*)(v4 + 2)) >>
                 1;
        v15 = (unsigned __int8*)(v4 + 4);
        a2[3] = v14 + (((unsigned __int8)a2[v13 + 2] +
                        (unsigned int)*(unsigned __int8*)(v4 + 3)) >>
                       1);
        a2 += 4;
        v4 += 4LL;
      } while (v12 != 0);
      v4 = (unsigned __int64)v15;
    }
    if (v11 != 0) {
      v16 = -(__int64)v5;
      do {
        v17 = *(unsigned __int8*)v4++;
        --v11;
        *a2 += ((unsigned int)(unsigned __int8)a2[v16] + v17) >> 1;
        ++a2;
      } while (v11 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
