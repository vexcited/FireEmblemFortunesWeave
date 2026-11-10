#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MatroskaExtractor_4e6990();
__int64 MatroskaExtractor_4e69c0();
__int64 MovieMalloc_plt(_QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4e69b0();
__int64 SdkRoutine_4e6d10();
__int64 SdkRoutine_4e6d20();
__int64 SdkRoutine_4e6d30();
__int64 SdkRoutine_4e6d40();
__int64 SdkRoutine_4e6d50();
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86eff0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MPEG4Extractor_MPEG4Extractor_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_renameRefId_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_extractors_mp4_4f4940_alt1(_QWORD, _QWORD) __asm__(
    "nandroid_extractors_mp4_4f4940");
__int64 nandroid_extractors_mp4_4f4ab0_alt1(_QWORD, _QWORD) __asm__(
    "nandroid_extractors_mp4_4f4ab0");
__int64 nandroid_extractors_mp4_4f4ea0_alt1(_QWORD, _QWORD) __asm__(
    "nandroid_extractors_mp4_4f4ea0");
__int64 nn_movie_detail_FreeMemory(_QWORD, _QWORD);
__int64
nn_movie_detail_FreeMemory_alt1(__int64 result,
                                _QWORD*) __asm__("nn_movie_detail_FreeMemory");
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 (*nn_os_detail_RemoveNativeWaitHolder_ptr[])();
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88720;
extern __int64 SdkData_e88758;
extern __int64 SdkData_e88778;
extern __int64 SdkData_e888c0;
extern __int64 SdkData_e88900;
extern __int64 SdkData_e88908;
extern void (*SdkData_e88338[493])();
void __attribute__((noreturn)) nn_fs_10de70(_QWORD);
void __attribute__((noreturn)) nn_fs_dc4d0(void);
void __attribute__((noreturn)) nn_nlibsdk_173a00(_QWORD);
__int64 nandroid_extractors_mp4_4f4780(__int64* a1, __int64* a2);
__int64* nandroid_extractors_mp4_4f4940(__int64* result, _QWORD* a2);
__int64 nandroid_extractors_mp4_4f4ab0(__int64 result, __int64 a2);
__int64 nandroid_extractors_mp4_4f4b50(_QWORD* a1);
__int64 nandroid_extractors_mp4_4f4bb0(_QWORD* a1);
__int64* nandroid_extractors_mp4_4f4d50(__int64 a1);
__int64 nandroid_extractors_mp4_4f4ea0(__int64 result, __int64 a2);
__int64 nandroid_extractors_mp4_4f4f40(_QWORD* a1);
__int64 nandroid_extractors_mp4_4f5cb0(_QWORD* a1);
_QWORD* nandroid_extractors_mp4_4f5e50();
void nandroid_extractors_mp4_4f5e80(__int64 a1, _QWORD* a2);
__int64 nandroid_extractors_mp4_4f61b0(unsigned __int64* a1, __int64 a2,
                                       unsigned __int64 a3);
__int64 nandroid_extractors_mp4_4f6440(__int64 result);
__int64 nandroid_extractors_mp4_4f6590(_QWORD* a1);
__int64 nandroid_extractors_mp4_5675f0(__int64 a1, __int64 a2);
__int64 nandroid_extractors_mp4_567620(__int64 result, _QWORD* a2);

__int64 nandroid_extractors_mp4_4f4780(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
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
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x3333333333333333LL * (v3 >> 4);
  if (v4 > 0x333333333333333LL) {
    nn_fs_10de70(a1);
  }
  v5 = a1[2];
  v28 = a1 + 2;
  v8 = 0xCCCCCCCCCCCCCCCDLL * ((v5 - v2) >> 4);
  if (2 * v8 > v4) {
    v4 = 2 * v8;
  }
  if (v8 >= 0x199999999999999LL) {
    v9 = 0x333333333333333LL;
  }
  else {
    v9 = v4;
  }
  if (v9 != 0) {
    if (v9 > 0x333333333333333LL) {
      nn_nlibsdk_173a00(a1);
    }
    v10 = SdkRoutine_85e050(80 * v9);
  }
  else {
    v10 = 0;
  }
  v11 = v10 + v3;
  v12 = a2[4];
  v13 = a2[5];
  v24 = v10;
  v25 = v10 + v3;
  v26 = 0;
  v27 = v10 + 80 * v9;
  v14 = *a2;
  *(_QWORD*)(v11 + 32) = v12;
  *(_QWORD*)(v11 + 40) = v13;
  *(_QWORD*)v11 = v14;
  *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 + 2);
  *(_QWORD*)(v11 + 16) = a2[2];
  v15 = a2[3];
  *(_QWORD*)(v11 + 24) = v15;
  v16 = v10 + v3 + 24;
  if (v13 != 0) {
    *(_QWORD*)(v15 + 16) = v16;
    a2[2] = (__int64)(a2 + 3);
    a2[3] = 0;
    a2[5] = 0;
  }
  else {
    *(_QWORD*)(v11 + 16) = v16;
  }
  v17 = a2[6];
  v18 = a2[7];
  a2[6] = 0;
  a2[7] = 0;
  *(_QWORD*)(v11 + 48) = v17;
  *(_QWORD*)(v11 + 56) = v18;
  v19 = a2[8];
  a2[8] = 0;
  *(_QWORD*)(v11 + 64) = v19;
  *(_DWORD*)(v11 + 72) = *((_DWORD*)a2 + 18);
  *(_DWORD*)(v11 + 75) = *(_DWORD*)((char*)a2 + 75);
  v26 = v11 + 80;
  nandroid_extractors_mp4_4f4940_alt1(a1, &v24);
  v20 = a1[1];
  v21 = v25;
  while (1) {
    v22 = v26;
    if (v21 == v26) {
      break;
    }
    v26 -= 80;
    if ((*(_BYTE*)(v22 - 32) & 1) != 0) {
      SdkRoutine_857220(*(_QWORD*)(v22 - 16),
                        *(_QWORD*)(v22 - 32) & 0xFFFFFFFFFFFFFFFELL);
    }
    nandroid_extractors_mp4_4f4ab0_alt1(v22 - 64, *(_QWORD*)(v22 - 56));
  }
  if (v24 != 0) {
    SdkRoutine_857220(v24, v27 - v24);
  }
  return v20;
}

__int64* nandroid_extractors_mp4_4f4940(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = (_QWORD*)*result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v12 = &v3[v7];
      v13 = v6 + v7 * 8;
      v14 = v3[v7];
      *(_DWORD*)(v13 + 8) = v3[v7 + 1];
      *(_QWORD*)v13 = v14;
      *(_QWORD*)(v13 + 16) = v3[v7 + 2];
      v15 = &v3[v7 + 3];
      v16 = *v15;
      *(_QWORD*)(v6 + v7 * 8 + 24) = *v15;
      v17 = v6 + v7 * 8 + 24;
      *(_QWORD*)(v13 + 32) = v3[v7 + 4];
      v18 = v3[v7 + 5];
      *(_QWORD*)(v13 + 40) = v18;
      if (v18 != 0) {
        *(_QWORD*)(v16 + 16) = v17;
        v12[2] = v15;
        *v15 = 0;
        v12[5] = 0;
      }
      else {
        *(_QWORD*)(v13 + 16) = v17;
      }
      v8 = &v3[v7];
      v9 = v6 + v7 * 8;
      v7 += 10;
      v10 = v8[6];
      v11 = v8[8];
      *(_QWORD*)(v9 + 56) = v8[7];
      *(_QWORD*)(v9 + 64) = v11;
      *(_QWORD*)(v9 + 48) = v10;
      v8[7] = 0;
      v8[8] = 0;
      v8[6] = 0;
      LODWORD(v10) = *((_DWORD*)v8 + 18);
      *(_DWORD*)(v9 + 75) = *(_DWORD*)((char*)v8 + 75);
      *(_DWORD*)(v9 + 72) = v10;
    } while (&v3[v7] != v2);
    do {
      if ((v3[6] & 1) != 0) {
        SdkRoutine_857220(v3[8], v3[6] & 0xFFFFFFFFFFFFFFFELL);
      }
      result = (__int64*)nandroid_extractors_mp4_4f4ab0_alt1(v3 + 2, v3[3]);
      v3 += 10;
    } while (v3 != v2);
  }
  a2[1] = v6;
  v19 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v19;
  v20 = v5[1];
  v5[1] = a2[2];
  a2[2] = v20;
  v21 = v5[2];
  v5[2] = a2[3];
  a2[3] = v21;
  *a2 = a2[1];
  return result;
}

__int64 nandroid_extractors_mp4_4f4ab0(__int64 result, __int64 a2)
{
  __int64 v3;

  if (a2 != 0) {
    v3 = result;
    nandroid_extractors_mp4_4f4ab0(result, *(_QWORD*)a2);
    nandroid_extractors_mp4_4f4ab0(v3, *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)(a2 + 56) & 1) != 0) {
      SdkRoutine_857220(*(_QWORD*)(a2 + 72),
                        *(_QWORD*)(a2 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
        return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
      }
    }
    else if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
      return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
    }
    SdkRoutine_857220(*(_QWORD*)(a2 + 48),
                      *(_QWORD*)(a2 + 32) & 0xFFFFFFFFFFFFFFFELL);
    return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
  }
  return result;
}

__int64 nandroid_extractors_mp4_4f4b50(_QWORD* a1)
{
  __int64 v1;

  v1 = a1[2];
  *a1 = SdkData_e888c0 + 16;
  return nandroid_extractors_mp4_4f4ea0_alt1(a1 + 1, v1);
}

__int64 nandroid_extractors_mp4_4f4bb0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88908 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory_alt1((__int64)a1, v4);
}

__int64* nandroid_extractors_mp4_4f4d50(__int64 a1)
{
  atomic_uchar* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  __int64 v6;
  _QWORD** v7;
  _QWORD* v8;
  __int64* result;

  v2 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v6 = SdkRoutine_4c3860(16, 304, v5);
  if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v8 = (_QWORD*)SdkRoutine_4c3860(16, 16, v7);
  *v8 = SdkData_e88720 + 16;
  v8[1] = a1;
  nandroid_MPEG4Extractor_MPEG4Extractor_plt(v6, v8, 0);
  result = (__int64*)MovieMalloc_plt(72);
  *result = v6;
  result[1] = (__int64)MatroskaExtractor_4e6990;
  result[2] = (__int64)SdkRoutine_4e69b0;
  result[3] = (__int64)MatroskaExtractor_4e69c0;
  result[4] = (__int64)SdkRoutine_4e6d10;
  result[5] = (__int64)SdkRoutine_4e6d20;
  result[6] = (__int64)SdkRoutine_4e6d30;
  result[7] = (__int64)SdkRoutine_4e6d40;
  result[8] = (__int64)SdkRoutine_4e6d50;
  return result;
}

__int64 nandroid_extractors_mp4_4f4ea0(__int64 result, __int64 a2)
{
  __int64 v3;

  if (a2 != 0) {
    v3 = result;
    nandroid_extractors_mp4_4f4ea0(result, *(_QWORD*)a2);
    nandroid_extractors_mp4_4f4ea0(v3, *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
      SdkRoutine_857220(*(_QWORD*)(a2 + 104),
                        *(_QWORD*)(a2 + 88) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
        return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
      }
    }
    else if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
      return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
    }
    SdkRoutine_857220(*(_QWORD*)(a2 + 80),
                      *(_QWORD*)(a2 + 64) & 0xFFFFFFFFFFFFFFFELL);
    return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v3 + 16));
  }
  return result;
}

__int64 nandroid_extractors_mp4_4f4f40(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88758 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory_alt1((__int64)a1, v4);
}

__int64 nandroid_extractors_mp4_4f5cb0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88778 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory_alt1((__int64)a1, v4);
}

_QWORD* nandroid_extractors_mp4_4f5e50()
{
  _QWORD* result;

  result = (_QWORD*)SdkRoutine_85e050(0x10u);
  *result = nn_os_detail_RemoveNativeWaitHolder_ptr;
  return result;
}

void nandroid_extractors_mp4_4f5e80(__int64 a1, _QWORD* a2)
{
  *a2 = nn_os_detail_RemoveNativeWaitHolder_ptr;
}

__int64 nandroid_extractors_mp4_4f61b0(unsigned __int64* a1, __int64 a2,
                                       unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v8;

  if (a3 > 0x16) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      nn_fs_dc4d0();
    }
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v4 = SdkRoutine_85e050(v8);
    a1[1] = a3;
    a1[2] = v4;
    a2 = v7;
    *a1 = v8 | 1;
    v5 = a3 + 1;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v4 = (__int64)a1 + 1;
    v5 = a3 + 1;
  }
  return memmove_plt(v4, a2, v5);
}

__int64 nandroid_extractors_mp4_4f6440(__int64 result)
{
  unsigned __int8 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;

  v1 = *(_BYTE*)(result + 64);
  v3 = *(_QWORD*)(result + 72);
  v2 = *(_QWORD*)(result + 80);
  *(_QWORD*)(result + 88) = 0;
  if ((v1 & 1) != 0) {
    v4 = v3;
  }
  else {
    v4 = v1 >> 1;
  }
  v5 = *(_DWORD*)(result + 96);
  if ((v1 & 1) != 0) {
    v6 = v2;
  }
  else {
    v6 = result + 65;
  }
  if ((v5 & 8) != 0) {
    *(_QWORD*)(result + 16) = v6;
    *(_QWORD*)(result + 24) = v6;
    *(_QWORD*)(result + 88) = v6 + v4;
    *(_QWORD*)(result + 32) = v6 + v4;
  }
  if ((v5 & 0x10) != 0) {
    *(_QWORD*)(result + 88) = v6 + v4;
    v7 = *(_QWORD*)(result + 64);
    v8 = (v1 & 1) == 0;
    v9 = 22;
    if (!v8) {
      v9 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    if ((v7 & 1) == 0) {
      v3 = (unsigned __int8)v7 >> 1;
    }
    if (v9 <= v3) {
      if ((v7 & 1) != 0) {
        *(_QWORD*)(result + 72) = v9;
      }
      else {
        v2 = result + 65;
        *(_BYTE*)(result + 64) = 2 * v9;
      }
      *(_BYTE*)(v2 + v9) = 0;
    }
    else {
      v10 = result;
      SdkRoutine_86eff0(result + 64, v9 - v3, 0);
      result = v10;
    }
    v11 = *(unsigned __int8*)(result + 64);
    v12 = *(_QWORD*)(result + 72);
    *(_QWORD*)(result + 40) = v6;
    *(_QWORD*)(result + 48) = v6;
    if ((v11 & 1) != 0) {
      v13 = v12;
    }
    else {
      v13 = v11 >> 1;
    }
    *(_QWORD*)(result + 56) = v6 + v13;
    if ((*(_BYTE*)(result + 96) & 3) != 0) {
      if (v4 >> 31 != 0) {
        v14 = ((v4 - 0x80000000) * (unsigned __int128)0x200000005uLL) >> 64;
        v15 = 0x7FFFFFFF * ((v14 + ((v4 - 0x80000000 - v14) >> 1)) >> 30);
        v6 += 0x7FFFFFFF + v15;
        v4 = v4 - v15 - 0x7FFFFFFF;
        *(_QWORD*)(result + 48) = v6;
      }
      if (v4 != 0) {
        *(_QWORD*)(result + 48) = v6 + v4;
      }
    }
  }
  return result;
}

__int64 nandroid_extractors_mp4_4f6590(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88900 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory_alt1((__int64)a1, v4);
}

__int64 nandroid_extractors_mp4_5675f0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 8 * a2);
  v5 = *(_QWORD*)(a1 + 16) + 8 * a2;
  if (v4 != 0) {
    v6 = v4 + 24;
  }
  else {
    v6 = 0;
  }
  return nandroid_RefBase_renameRefId_plt(v6, v5, v2 + 8 * a2);
}

__int64 nandroid_extractors_mp4_567620(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2 != nullptr) {
    v2 = result;
    nandroid_extractors_mp4_567620(result, *a2);
    nandroid_extractors_mp4_567620(v2, a2[1]);
    return SdkRoutine_857220(a2, 32);
  }
  return result;
}

#pragma GCC visibility pop
