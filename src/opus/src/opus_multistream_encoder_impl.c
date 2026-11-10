#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 free_plt(_QWORD);
__int64 lrint_plt(double);
__int64 malloc_plt(_QWORD);
__int64 nncodecLibopus_opus_encoder_get_size_plt(_QWORD);
__int64 opus_multistream_encoder_init_impl(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nncodecLibopus_opus_multistream_encoder_create(
    unsigned int a1, unsigned int a2, int a3, unsigned int a4, __int64 a5,
    unsigned int a6, int* a7);
__int64 opus_multistream_encoder_321880(__int64 a1);
__int64 opus_copy_channel_in_float(__int64 result, int a2, __int64 a3, int a4,
                                   int a5, int a6);

__int64 nncodecLibopus_opus_multistream_encoder_create(unsigned int a1,
                                                       unsigned int a2, int a3,
                                                       unsigned int a4,
                                                       __int64 a5,
                                                       unsigned int a6, int* a7)
{
  __int64 result;
  int v8;
  unsigned int v10;
  int* v16;
  int v17;
  int v18;
  __int64 v19;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v10 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    result = 0;
    if (a7 == nullptr) {
      return result;
    }
    v8 = -1;
    goto LABEL_4;
  }
  v16 = a7;
  v17 = nncodecLibopus_opus_encoder_get_size_plt(2);
  v18 = nncodecLibopus_opus_encoder_get_size_plt(1);
  result = malloc_plt((int)(((v18 + 7) & 0xFFFFFFF8) * v10 +
                            ((v17 + 7) & 0xFFFFFFF8) * a4 + 296));
  if (result == 0) {
    if (v16 == nullptr) {
      return result;
    }
    a7 = v16;
    v8 = -7;
    goto LABEL_4;
  }
  v19 = result;
  v8 = opus_multistream_encoder_init_impl(result, a1, a2, (unsigned int)a3, a4,
                                          a5, a6, 0);
  if (v8 == 0) {
    result = v19;
    a7 = v16;
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_4;
  }
  free_plt(v19);
  result = 0;
  a7 = v16;
  if (v16 != nullptr) {
  LABEL_4:
    *a7 = v8;
  }
  return result;
}

__int64 opus_multistream_encoder_321880(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v27;

  v2 = nncodecLibopus_opus_encoder_get_size_plt(2);
  v3 = nncodecLibopus_opus_encoder_get_size_plt(1);
  v4 = *(_DWORD*)(a1 + 4);
  v5 = a1 + 296;
  if (v4 >= 1) {
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(_DWORD*)(a1 + 4) & 7;
    if ((unsigned int)v4 >= 8) {
      v9 = v4 & 0x7FFFFFF8;
      v8 = 0;
      do {
        if (v8 >= v6) {
          v10 = v3;
        }
        else {
          v10 = v2;
        }
        v11 = v5 + (int)((v10 + 7) & 0xFFFFFFF8);
        if (v8 + 1 >= v6) {
          v12 = v3;
        }
        else {
          v12 = v2;
        }
        v13 = v11 + (int)((v12 + 7) & 0xFFFFFFF8);
        if (v8 + 2 >= v6) {
          v14 = v3;
        }
        else {
          v14 = v2;
        }
        v15 = v13 + (int)((v14 + 7) & 0xFFFFFFF8);
        if (v8 + 3 >= v6) {
          v16 = v3;
        }
        else {
          v16 = v2;
        }
        v17 = v15 + (int)((v16 + 7) & 0xFFFFFFF8);
        if (v8 + 4 >= v6) {
          v18 = v3;
        }
        else {
          v18 = v2;
        }
        v19 = v17 + (int)((v18 + 7) & 0xFFFFFFF8);
        if (v8 + 5 >= v6) {
          v20 = v3;
        }
        else {
          v20 = v2;
        }
        v21 = v19 + (int)((v20 + 7) & 0xFFFFFFF8);
        if (v8 + 6 >= v6) {
          v22 = v3;
        }
        else {
          v22 = v2;
        }
        v23 = v21 + (int)((v22 + 7) & 0xFFFFFFF8);
        v24 = v8 + 7;
        v8 += 8;
        if (v24 >= v6) {
          v25 = v3;
        }
        else {
          v25 = v2;
        }
        v5 = v23 + (int)((v25 + 7) & 0xFFFFFFF8);
      } while (v8 != v9);
    }
    else {
      v8 = 0;
    }
    for (; v7 != 0; v5 += (int)((v27 + 7) & 0xFFFFFFF8)) {
      if (v8++ < v6) {
        v27 = v2;
      }
      else {
        v27 = v3;
      }
      --v7;
    }
  }
  return v5;
}

__int64 opus_copy_channel_in_float(__int64 result, int a2, __int64 a3, int a4,
                                   int a5, int a6)
{
  float* v6;
  __int64 v7;
  __int64 v8;
  _WORD* v9;
  __int64 i;

  if (a6 >= 1) {
    v6 = (float*)(a3 + 4LL * a5);
    v7 = 2LL * a2;
    v8 = 4LL * a4;
    v9 = (_WORD*)result;
    for (i = (unsigned int)a6; i != 0; --i) {
      result = lrint_plt(fminf(fmaxf(*v6 * 32768.0, -32768.0), 32767.0));
      *v9 = result;
      v9 = (_WORD*)((char*)v9 + v7);
      v6 = (float*)((char*)v6 + v8);
    }
  }
  return result;
}

#pragma GCC visibility pop
