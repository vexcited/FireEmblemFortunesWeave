#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABitReader_ABitReader_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABitReader_Destroy_ABitReader_plt(_QWORD);
__int64 nandroid_ABitReader_getBits_plt(_QWORD, _QWORD);
__int64 nandroid_ABitReader_numBitsLeft_plt(_QWORD);
__int64 nandroid_ABitReader_skipBits_plt(_QWORD, _QWORD);
__int64 nandroid_ABuffer_ABuffer_plt_86e010(_QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setCString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern _DWORD SdkData_bb0030[8];
extern _DWORD SdkData_c57240[3];
extern _DWORD SdkData_c584dc[3];
extern __int64 (*SdkData_e6adf8[])();
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88ba8;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88828[335])();
extern void (*SdkData_e88838[333])();
void __attribute__((noreturn)) nn_fs_10de70(_QWORD);
__int64 ESQueue_53ebc0(__int64 a1, __int64 a2, _QWORD* a3);
__attribute__((swiftcall)) void
ESQueue_53fa70(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1);
__int64 ESQueue_5429a0(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4);
__int64 ESQueue_542d40(_QWORD* a1);
__int64 ESQueue_542dc0(__int64 a1, __int64* a2);
__int64 ESQueue_542fc0(__int64* a1, __int64 a2, __int64 a3,
                       unsigned __int64 a4);
__attribute__((swiftcall)) void
ESQueue_5430f0(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1, __int64* a2);
__int64 ESQueue_5431e0(_QWORD* a1);
void ESQueue_543280(__int64 a1, _QWORD* a2, __int64* a3, unsigned __int64 a4);
void ESQueue_543380(__int64 a1, _QWORD* a2, __int64* a3, unsigned __int64 a4);
void ESQueue_543460(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 ESQueue_543560(_QWORD* a1);

__int64 ESQueue_53ebc0(__int64 a1, __int64 a2, _QWORD* a3)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v16;
  _QWORD v17[6];

  memset(v17, 0, sizeof(v17));
  nandroid_ABitReader_ABitReader_plt(v17, a1, a2);
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(v17) < 0x10) {
    goto LABEL_12;
  }
  if ((unsigned int)nandroid_ABitReader_getBits_plt(v17, 16) != 2935) {
    goto LABEL_12;
  }
  if ((unsigned __int64)nandroid_ABitReader_numBitsLeft_plt(v17) < 0x1D) {
    goto LABEL_12;
  }
  v4 = nandroid_ABitReader_getBits_plt(v17, 2);
  if (v4 == 3) {
    goto LABEL_12;
  }
  v5 = v4;
  v6 = nandroid_ABitReader_getBits_plt(v17, 3);
  v7 = v5 & 0xFFFFFFFD;
  if ((v5 & 0xFFFFFFFD) == 0 && v6 != 0) {
    goto LABEL_12;
  }
  v8 = nandroid_ABitReader_getBits_plt(v17, 11);
  v9 = nandroid_ABitReader_getBits_plt(v17, 2);
  if (v9 == 3) {
    v10 = nandroid_ABitReader_getBits_plt(v17, 2);
    if (v10 == 3) {
    LABEL_12:
      v14 = 0;
      goto LABEL_13;
    }
    v11 = SdkData_c584dc[v10];
  }
  else {
    v11 = SdkData_c57240[v9];
    nandroid_ABitReader_getBits_plt(v17, 2);
  }
  v12 = nandroid_ABitReader_getBits_plt(v17, 3);
  v13 = nandroid_ABitReader_getBits_plt(v17, 1);
  if ((unsigned int)nandroid_ABitReader_getBits_plt(v17, 5) - 17 < 0xFFFFFFFA) {
    goto LABEL_12;
  }
  if (a3 != nullptr && v7 == 0) {
    v16 = SdkData_bb0030[v12];
    nandroid_MetaDataBase_setCString_plt(*a3, 1835625829,
                                         *(_QWORD*)SdkData_e88838[0]);
    nandroid_MetaDataBase_setInt32_plt(*a3, 593717358,
                                       (unsigned int)(v16 + v13));
    nandroid_MetaDataBase_setInt32_plt(*a3, 1936880741, v11);
    nandroid_MetaDataBase_setInt32_plt(*a3, 1937337955, 1);
  }
  v14 = 2 * v8 + 2;
LABEL_13:
  nandroid_ABitReader_Destroy_ABitReader_plt(v17);
  return v14;
}

__attribute__((swiftcall)) void ESQueue_53fa70(PSEUDO_X8 x8_,
                                               __int64 unused_int0, __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v9)();
  _QWORD* v10;
  int v11;

  v3 = *(_QWORD*)(*a1 + 40);
  v4 = *(_QWORD*)(*a1 + 48);
  *(_QWORD*)(v3 + 48) = v4;
  *(_QWORD*)(v4 + 40) = v3;
  v5 = *a1;
  if (*a1 != 0) {
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 != 0) {
      nandroid_RefBase_decStrong_plt(v6, v5 + 32);
    }
    v7 = *(_QWORD*)(v5 + 24);
    if (v7 != 0) {
      nandroid_RefBase_decStrong_plt(v7, v5 + 24);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v9 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v11 = __cxa_guard_acquire_plt(SdkData_e88330);
      v9 = SdkData_e88338[0];
      if (v11 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v9) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v9 = SdkData_e88338[0];
      }
    }
    v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v9);
    nn_movie_detail_FreeMemory(v5, v10);
  }
  *a2 = v4;
}

__int64 ESQueue_5429a0(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  _QWORD v14[6];

  memset(v14, 0, sizeof(v14));
  nandroid_ABitReader_ABitReader_plt(v14, a1, a2);
  v6 = nandroid_ABitReader_getBits_plt(v14, 16);
  if ((unsigned int)(v6 - 44098) < 0xFFFFFFFE) {
    goto LABEL_2;
  }
  v7 = v6;
  v8 = nandroid_ABitReader_getBits_plt(v14, 16);
  *a3 = v8;
  if (v8 == 0xFFFF) {
    v8 = nandroid_ABitReader_getBits_plt(v14, 24);
    v9 = 7;
    *a3 = v8;
    if (v8 == 0) {
      goto LABEL_2;
    }
  }
  else {
    v9 = 4;
    if (v8 == 0) {
    LABEL_2:
      LODWORD(a4) = -1007;
      goto LABEL_19;
    }
  }
  v10 = v9 + v8;
  if (v7 == 44097) {
    v10 += 2;
  }
  *a3 = v10;
  if ((unsigned int)nandroid_ABitReader_getBits_plt(v14, 2) == 3) {
    do {
      nandroid_ABitReader_getBits_plt(v14, 2);
    } while ((unsigned int)nandroid_ABitReader_getBits_plt(v14, 1) != 0);
  }
  nandroid_ABitReader_skipBits_plt(v14, 10);
  if ((unsigned int)nandroid_ABitReader_getBits_plt(v14, 1) != 0 &&
      (unsigned int)nandroid_ABitReader_getBits_plt(v14, 3) != 0) {
    nandroid_ABitReader_skipBits_plt(v14, 2);
  }
  v11 = nandroid_ABitReader_getBits_plt(v14, 1);
  if (a4 != nullptr) {
    if (v11 != 0) {
      v12 = 48000;
    }
    else {
      v12 = 44100;
    }
    nandroid_MetaDataBase_setCString_plt(*a4, 1835625829,
                                         *(_QWORD*)SdkData_e88828[0]);
    nandroid_MetaDataBase_setInt32_plt(*a4, 1937337955, 1);
    nandroid_MetaDataBase_setInt32_plt(*a4, 593717358, 2);
    nandroid_MetaDataBase_setInt32_plt(*a4, 1936880741, v12);
    LODWORD(a4) = 0;
  }
LABEL_19:
  nandroid_ABitReader_Destroy_ABitReader_plt(v14);
  return (unsigned int)a4;
}

__int64 ESQueue_542d40(_QWORD* a1)
{
  *a1 = SdkData_e6adf8;
  nandroid_VectorImpl_finish_vector_plt(a1);
  return nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
}

__int64 ESQueue_542dc0(__int64 a1, __int64* a2)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD** v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  unsigned __int64 v10;
  _BYTE* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _BYTE* v15;

  *(_QWORD*)a1 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v6 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  v7 = SdkRoutine_4c3860(16, 64, v6);
  nandroid_ABuffer_ABuffer_plt_86e010(v7, *(_QWORD*)(*a2 + 48) + 25LL);
  *(_QWORD*)a1 = v7;
  nandroid_RefBase_incStrong_plt(v7, a1);
  v8 = (_BYTE*)(*(_QWORD*)(*(_QWORD*)a1 + 24LL) +
                *(_QWORD*)(*(_QWORD*)a1 + 40LL));
  *v8 = 3;
  v9 = v8 + 1;
  v10 = *(_QWORD*)(*a2 + 48) + 22LL;
  if (v10 >> 14 == 0) {
    v8[2] = v10 & 0x7F;
    v8[1] = ((unsigned int)v10 >> 7) | 0x80;
    v9 = v8 + 3;
  }
  *(_DWORD*)v9 = 0x4000000;
  v11 = v9 + 4;
  v12 = *(_QWORD*)(*a2 + 48) + 16LL;
  if (v12 >> 14 == 0) {
    v9[5] = v12 & 0x7F;
    v9[4] = ((unsigned int)v12 >> 7) | 0x80;
    v11 = v9 + 6;
  }
  *(_QWORD*)(v11 + 1) = 0;
  *(_DWORD*)(v11 + 9) = 0;
  *v11 = 64;
  v11[13] = 5;
  v13 = *a2;
  v14 = *(_QWORD*)(*a2 + 48);
  if (v14 >> 14 != 0) {
    v15 = v11 + 14;
  }
  else {
    v15 = v11 + 16;
    v11[14] = ((unsigned int)v14 >> 7) | 0x80;
    v11[15] = v14 & 0x7F;
    v13 = *a2;
    v14 = *(_QWORD*)(*a2 + 48);
  }
  return memcpy_plt(v15, *(_QWORD*)(v13 + 24) + *(_QWORD*)(v13 + 40), v14);
}

__int64 ESQueue_542fc0(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5;
  __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v5 = a1[2];
  result = *a1;
  if (a4 > v5 - result) {
    if (result != 0) {
      a1[1] = result;
      v9 = a4;
      result = SdkRoutine_857220(result, v5 - result);
      a4 = v9;
      v5 = 0;
      a1[1] = 0;
      a1[2] = 0;
      *a1 = 0;
    }
    if ((a4 & 0x8000000000000000LL) != 0) {
      nn_fs_10de70(result);
    }
    v10 = 2 * v5;
    if (2 * v5 <= a4) {
      v10 = a4;
    }
    if (v5 >= 0x3FFFFFFFFFFFFFFFLL) {
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    result = SdkRoutine_85e050(v11);
    v12 = a3 - a2;
    v13 = result;
    *a1 = result;
    a1[1] = result;
    a1[2] = result + v11;
    if (v12 != 0) {
      result = memcpy_plt(result, a2, v12);
    }
  LABEL_17:
    v16 = v13 + v12;
    goto LABEL_21;
  }
  v13 = a1[1];
  v14 = v13 - result;
  if (a4 > v13 - result) {
    v15 = a2 + v14;
    if (v13 != result) {
      result = memmove_plt(result, a2, v14);
      v13 = a1[1];
    }
    v12 = a3 - v15;
    if (v12 != 0) {
      result = memmove_plt(v13, v15, v12);
    }
    goto LABEL_17;
  }
  v17 = a3 - a2;
  if (v17 != 0) {
    v18 = result;
    memmove_plt(result, a2, v17);
    result = v18;
  }
  v16 = result + v17;
LABEL_21:
  a1[1] = v16;
  return result;
}

__attribute__((swiftcall)) void

ESQueue_5430f0(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1, __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD** v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 result;
  __int64 v17;

  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v7 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v7 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
  v9 = (_QWORD*)SdkRoutine_4c3860(16, 56, v8);
  v10 = a2[2];
  v11 = *a2;
  v12 = v9;
  v13 = v9;
  v9[1] = a2[1];
  v9[2] = v10;
  *v9 = v11;
  v14 = a2[3];
  v13[3] = v14;
  v15 = v13 + 3;
  if (v14 != 0) {
    nandroid_RefBase_incStrong_plt(v14, v15);
  }
  result = a2[4];
  v12[4] = result;
  if (result != 0) {
    result = nandroid_RefBase_incStrong_plt(result, v12 + 4);
  }
  v17 = *a1;
  *a3 = v12;
  v12[6] = v17;
  v12[5] = *(_QWORD*)(v17 + 40);
  *(_QWORD*)(*(_QWORD*)(*a1 + 40) + 48LL) = v12;
  *(_QWORD*)(*a1 + 40) = v12;
  {
    result;
    return;
  }
}

__int64 ESQueue_5431e0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e6adf8;
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
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

void ESQueue_543280(__int64 a1, _QWORD* a2, __int64* a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
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

  if (a4 != 0) {
    v4 = a4 & 7;
    if ((a4 & 7) == 0) {
      v5 = a4;
      if (a4 < 8) {
        return;
      }
      goto LABEL_6;
    }
    v5 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    do {
      v6 = *a3;
      v7 = a3[1];
      v8 = a3[2];
      a3 += 3;
      --v4;
      a2[1] = v7;
      a2[2] = v8;
      *a2 = v6;
      a2 += 3;
    } while (v4 != 0);
    if (a4 >= 8) {
      do {
      LABEL_6:
        v9 = *a3;
        v10 = a3[2];
        v5 -= 8LL;
        a2[1] = a3[1];
        a2[2] = v10;
        *a2 = v9;
        v11 = a3[3];
        v12 = a3[5];
        a2[4] = a3[4];
        a2[5] = v12;
        a2[3] = v11;
        v13 = a3[8];
        v14 = a3[6];
        a2[7] = a3[7];
        a2[8] = v13;
        a2[6] = v14;
        v15 = a3[9];
        v16 = a3[11];
        a2[10] = a3[10];
        a2[11] = v16;
        a2[9] = v15;
        v17 = a3[12];
        v18 = a3[14];
        a2[13] = a3[13];
        a2[14] = v18;
        a2[12] = v17;
        v19 = a3[15];
        v20 = a3[17];
        a2[16] = a3[16];
        a2[17] = v20;
        a2[15] = v19;
        v21 = a3[18];
        v22 = a3[20];
        a2[19] = a3[19];
        a2[20] = v22;
        a2[18] = v21;
        v23 = a3[21];
        v24 = a3[22];
        v25 = a3[23];
        a3 += 24;
        a2[22] = v24;
        a2[23] = v25;
        a2[21] = v23;
        a2 += 24;
      } while (v5 != 0);
    }
  }
}

void ESQueue_543380(__int64 a1, _QWORD* a2, __int64* a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
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

  if (a4 != 0) {
    v4 = a4 & 7;
    if ((a4 & 7) == 0) {
      v5 = a4;
      if (a4 < 8) {
        return;
      }
      goto LABEL_6;
    }
    v5 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    do {
      v6 = *a3;
      v7 = a3[2];
      --v4;
      a2[1] = a3[1];
      a2[2] = v7;
      *a2 = v6;
      a2 += 3;
    } while (v4 != 0);
    if (a4 >= 8) {
      do {
      LABEL_6:
        v8 = *a3;
        v9 = a3[2];
        v5 -= 8LL;
        a2[1] = a3[1];
        a2[2] = v9;
        *a2 = v8;
        v10 = *a3;
        v11 = a3[2];
        a2[4] = a3[1];
        a2[5] = v11;
        a2[3] = v10;
        v12 = a3[2];
        v13 = *a3;
        a2[7] = a3[1];
        a2[8] = v12;
        a2[6] = v13;
        v14 = *a3;
        v15 = a3[2];
        a2[10] = a3[1];
        a2[11] = v15;
        a2[9] = v14;
        v16 = *a3;
        v17 = a3[2];
        a2[13] = a3[1];
        a2[14] = v17;
        a2[12] = v16;
        v18 = *a3;
        v19 = a3[2];
        a2[16] = a3[1];
        a2[17] = v19;
        a2[15] = v18;
        v20 = *a3;
        v21 = a3[2];
        a2[19] = a3[1];
        a2[20] = v21;
        a2[18] = v20;
        v22 = *a3;
        v23 = a3[2];
        a2[22] = a3[1];
        a2[23] = v23;
        a2[21] = v22;
        a2 += 24;
      } while (v5 != 0);
    }
  }
}

void ESQueue_543460(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
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

  if (a4 != 0) {
    v4 = a4 & 7;
    v5 = a3 + 24 * a4;
    v6 = a2 + 24 * a4;
    if ((a4 & 7) != 0) {
      v7 = a4 & 0xFFFFFFFFFFFFFFF8LL;
      do {
        v8 = *(_QWORD*)(v5 - 24);
        v9 = *(_QWORD*)(v5 - 16);
        v5 -= 24;
        --v4;
        v10 = *(_QWORD*)(v5 + 16);
        *(_QWORD*)(v6 - 24) = v8;
        v6 -= 24;
        *(_QWORD*)(v6 + 8) = v9;
        *(_QWORD*)(v6 + 16) = v10;
      } while (v4 != 0);
      if (a4 < 8) {
        return;
      }
    }
    else {
      v7 = a4;
      if (a4 < 8) {
        return;
      }
    }
    v11 = (_QWORD*)(v6 - 96);
    v12 = (__int64*)(v5 - 96);
    do {
      v13 = v12[9];
      v14 = v12[11];
      v7 -= 8LL;
      v11[10] = v12[10];
      v11[11] = v14;
      v11[9] = v13;
      v15 = v12[6];
      v16 = v12[8];
      v11[7] = v12[7];
      v11[8] = v16;
      v11[6] = v15;
      v17 = v12[5];
      v18 = v12[3];
      v11[4] = v12[4];
      v11[5] = v17;
      v11[3] = v18;
      v19 = *v12;
      v20 = v12[2];
      v11[1] = v12[1];
      v11[2] = v20;
      *v11 = v19;
      v21 = *(v12 - 3);
      v22 = *(v12 - 1);
      *(v11 - 2) = *(v12 - 2);
      *(v11 - 1) = v22;
      *(v11 - 3) = v21;
      v23 = *(v12 - 6);
      v24 = *(v12 - 4);
      *(v11 - 5) = *(v12 - 5);
      *(v11 - 4) = v24;
      *(v11 - 6) = v23;
      v25 = *(v12 - 9);
      v26 = *(v12 - 7);
      *(v11 - 8) = *(v12 - 8);
      *(v11 - 7) = v26;
      *(v11 - 9) = v25;
      v27 = *(v12 - 12);
      v28 = *(v12 - 11);
      v29 = *(v12 - 10);
      v12 -= 24;
      *(v11 - 11) = v28;
      *(v11 - 10) = v29;
      *(v11 - 12) = v27;
      v11 -= 24;
    } while (v7 != 0);
  }
}

__int64 ESQueue_543560(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88ba8 + 16;
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
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

#pragma GCC visibility pop
