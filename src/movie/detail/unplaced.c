#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_82870(_QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_GetH264DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetVp8DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_ReleaseH264DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseVp8DecoderOutputBuffer_plt(void);
__int64 std___1___libcpp_verbose_abort_plt(const char*, ...);
extern __int64 MovieData_c08e0;
extern __int64 MovieData_c0960;
extern __int64 MovieData_c0970;
void __attribute__((noreturn)) MovieRoutine_14f0(const char*);
void __attribute__((noreturn))
movie_detail_9f60_alt1(_QWORD) __asm__("movie_detail_9f60");
void __attribute__((noreturn)) movie_detail_9f40();
void __attribute__((noreturn)) movie_detail_9f60(const char* a1);
void __attribute__((noreturn)) movie_detail_f500();
void __attribute__((noreturn)) movie_detail_f520();
__int64* movie_detail_f540(__int64* a1, __int64 a2, unsigned __int64 a3);
__int64 movie_detail_fef0();
__int64 movie_detail_fef4();
__int64 movie_detail_ff40();
__int64 movie_detail_ff44();
__int64 movie_detail_12280(_QWORD* a1);
__int64 movie_detail_122d0(_QWORD* a1);
__int64 movie_detail_1ad50(_QWORD* a1);
__int64 movie_detail_1b850(_QWORD* a1);
__int64 movie_detail_1b8b0(_QWORD* a1);

void __attribute__((noreturn)) movie_detail_9f40()
{
  movie_detail_9f60_alt1("vector");
}

void __attribute__((noreturn)) movie_detail_9f60(const char* a1)
{
  std___1___libcpp_verbose_abort_plt(
      "out_of_range was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

void __attribute__((noreturn)) movie_detail_f500()
{
  movie_detail_9f60("basic_string");
}

void __attribute__((noreturn)) movie_detail_f520()
{
  MovieRoutine_14f0("basic_string");
}

__int64* movie_detail_f540(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  char v4;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;

  v3 = *a1;
  v4 = *(_BYTE*)a1;
  v7 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if ((*(_BYTE*)a1 & 1) == 0) {
    v7 = 22;
  }
  if ((v3 & 1) != 0) {
    v8 = a1[1];
  }
  else {
    v8 = (unsigned __int8)v3 >> 1;
  }
  if (v7 - v8 >= a3) {
    if (a3 != 0) {
      if ((v3 & 1) != 0) {
        v20 = (char*)a1[2];
      }
      else {
        v20 = (char*)a1 + 1;
      }
      memmove_plt(&v20[v8], a2, a3);
      v21 = v8 + a3;
      if ((*(_BYTE*)a1 & 1) != 0) {
        a1[1] = v21;
      }
      else {
        *(_BYTE*)a1 = 2 * v21;
      }
      v20[v21] = 0;
    }
  }
  else {
    v9 = v8 + a3;
    if (v8 + a3 - v7 > -10LL - v7) {
      movie_detail_f520();
    }
    v10 = a1[3];
    v11 = 2 * v7;
    if ((v3 & 1) != 0) {
      v13 = (char*)a1[2];
    }
    else {
      v13 = (char*)a1 + 1;
    }
    if (v9 > 2 * v7) {
      v11 = v8 + a3;
    }
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v15 = v11 >= 0x17;
    v16 = 23;
    if (v15) {
      v16 = v14;
    }
    if (v7 <= 0x7FFFFFFFFFFFFFF2LL) {
      v17 = v16;
    }
    else {
      v17 = -9;
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 40LL))(v10, v17);
    v19 = v18;
    if (v8 != 0) {
      memmove_plt(v18, v13, v8);
    }
    memmove_plt(v19 + v8, a2, a3);
    if ((v4 & 1) != 0) {
      (*(void (**)(__int64, char*))(*(_QWORD*)a1[3] + 56LL))(a1[3], v13);
    }
    a1[1] = v9;
    a1[2] = v19;
    *a1 = v17 | 1;
    *(_BYTE*)(v19 + v9) = 0;
  }
  return a1;
}

__int64 movie_detail_fef0()
{
  return nn_codec_ReleaseH264DecoderOutputBuffer_plt();
}

__int64 movie_detail_fef4()
{
  return nn_codec_ReleaseVp8DecoderOutputBuffer_plt();
}

__int64 movie_detail_ff40()
{
  return nn_codec_GetH264DecoderOutputBufferProperties_plt();
}

__int64 movie_detail_ff44()
{
  return nn_codec_GetVp8DecoderOutputBufferProperties_plt();
}

__int64 movie_detail_12280(_QWORD* a1)
{
  __int64 result;

  *a1 = MovieData_c08e0 + 16;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 movie_detail_122d0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 24);
}

__int64 movie_detail_1ad50(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 448);
}

__int64 movie_detail_1b850(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c0960 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 24);
}

__int64 movie_detail_1b8b0(_QWORD* a1)
{
  __int64 result;

  *a1 = MovieData_c0970 + 16;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

#pragma GCC visibility pop
