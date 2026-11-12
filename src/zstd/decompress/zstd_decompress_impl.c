#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CudaDriverRoutine_2231b0(_QWORD* result, __int64, __int64);
__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_1128f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_12dd50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_12dec0(void);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1fe530(__int64 result);
__int64 CudaDriverRoutine_1fe550(__int64, int**, __int64, unsigned int*,
                                 _DWORD*);
__int64 CudaDriverRoutine_1fe840(__int64, int**, __int64, unsigned int*,
                                 __int64, unsigned int*);
__int64 CudaDriverRoutine_205dd0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_205fa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_206060(_QWORD);
__int64 CudaDriverRoutine_20b420(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_223120(_QWORD*);
__int64 CudaDriverRoutine_2244b0(_QWORD*);
__int64 CudaDriverRoutine_224560(unsigned __int8**);
__int64 CudaDriverRoutine_5b5d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_5e9f0(_QWORD);
__int64 CudaDriverRoutine_5f050(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_98340_alt1(void) __asm__("CudaDriverRoutine_98340");
__int64 CudaDriverStub_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_108070(_QWORD);
__int64 CudaDriverStub_12dd40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_226ef0(_QWORD);
__int64 XXH64_update(__int64 result, _QWORD*, __int64);
__int64 ZSTD_decompressDCtx_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("ZSTD_decompressDCtx");
__int64 ZSTD_freeDStream(_QWORD);
__int64 ZSTD_getDDict_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("ZSTD_getDDict");
__int64 cuda_Alloc_plt(_QWORD);
__int64 cuda_driver_misc_helpers_deeb0(_QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strcmp_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 zstd_decompress_2236a0_alt1() __asm__("zstd_decompress_2236a0");
__int64 zstd_decompress_2238e0_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("zstd_decompress_2238e0");
__int64 zstd_decompress_223ce0_alt1(_QWORD,
                                    _QWORD) __asm__("zstd_decompress_223ce0");
__int64 zstd_decompress_224260_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("zstd_decompress_224260");
__int64 zstd_decompress_224280_alt1(_QWORD,
                                    _QWORD) __asm__("zstd_decompress_224280");
__int64 zstd_decompress_224320_alt1(_QWORD,
                                    _QWORD) __asm__("zstd_decompress_224320");
__int64 zstd_decompress_2243c0_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("zstd_decompress_2243c0");
__int64 zstd_decompress_226f00_alt1() __asm__("zstd_decompress_226f00");
__int64 zstd_decompress_251d50(__int64 result);
__int64 zstd_decompress_block_252cb0(_DWORD*, __int64, unsigned __int64);
__int64 zstd_decompress_block_2534c0(__int64 result);
extern _QWORD CudaDriverData_1131ae8[4];
extern _QWORD CudaDriverData_1131c28[4];
extern _UNKNOWN CudaDriverData_14347a8;
extern _UNKNOWN* CudaDriverData_1432168;
extern __int128 CudaDriverData_1115780;
extern __int128 CudaDriverData_1115d50;
extern __int128 CudaDriverData_1116050;
extern int CudaDriverData_1434ac0;
unsigned __int64 XXH64_digest(_QWORD*);
unsigned __int64 ZSTD_decompressBlock_internal(__int64, unsigned __int64,
                                               unsigned __int64, __int64,
                                               unsigned __int64);
unsigned __int64 ZSTD_getFrameHeader_advanced(__int64, unsigned __int8*,
                                              unsigned __int64, int);
__int64 zstd_decompress_220dd0(__int64 a1);
__int64 zstd_decompress_220e10(__int64 a1);
__int64 zstd_decompress_220e60(int a1, __int64 a2);
__int64 ZSTD_DCtx_loadDictionary_advanced(_DWORD* a1, _DWORD* a2);
__int64 ZSTD_DCtx_loadDictionary(__int64 a1, unsigned int* a2, _DWORD* a3);
__int64 ZSTD_DCtx_refPrefix(__int64 a1, __int64 a2, unsigned int* a3,
                            __int64 a4, unsigned int* a5);
__int64 ZSTD_initDStream_usingDict(__int64 a1, unsigned int a2, __int64 a3,
                                   __int64 a4, unsigned int a5);
__int64 ZSTD_DCtx_reset(__int64* a1, __int64 a2, __int64 a3, int a4,
                        unsigned int a5, __int64 a6, unsigned int a7);
__int64 zstd_decompress_221e50(__int64 a1, __int64 a2, __int64 a3);
__int64 ZSTD_initDStream(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 zstd_decompress_221fd0(unsigned int a1, __int64 a2);
_QWORD* ZSTD_resetDStream(_QWORD* result, _QWORD* a2);
__int64 zstd_decompress_222030(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ZSTD_DCtx_setFormat(__int64 a1, _QWORD* a2);
__int64 ZSTD_DCtx_loadDictionary_byReference(__int64 a1, unsigned __int64 a2,
                                             __int64 a3, __int64 a4);
__int64 zstd_decompress_223310(__int64 result, __int64 a2);
__int64 zstd_decompress_223380(__int64 a1, unsigned __int64 a2, __int64 a3);
__int64 zstd_decompress_223400(__int64 result, __int64 a2);
_QWORD* zstd_decompress_2234c0(__int64 a1);
_QWORD* zstd_decompress_2234e0(__int64 a1, __int64 a2);
__int64 zstd_decompress_223500(__int64 result, __int64 a2, __int64 a3);
__int64 zstd_decompress_223550(__int64 result);
__int64 zstd_decompress_223590(__int64 result);
__int64 zstd_decompress_2235f0(__int64 result);
__int64 zstd_decompress_223640(__int64 a1, __int64 a2, __int64 a3);
__int64 zstd_decompress_2236a0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 zstd_decompress_2236d0(_QWORD* a1, _QWORD* a2);
bool zstd_decompress_223710(unsigned __int64* a1, unsigned __int64* a2);
__int64 zstd_decompress_223740(__int64* a1, __int64 a2, __int64 a3);
_QWORD* zstd_decompress_2237d0(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5);
__int64 ZSTD_decompressDCtx(__int64 result, _QWORD* a2,
                            void (*a3)(_QWORD, __int64), __int64 a4,
                            void (*a5)(_QWORD, __int64), __int64 a6);
__int64 zstd_decompress_2238e0(__int64 a1, __int64 a2, __int64 a3);
__int64 zstd_decompress_223ce0(__int64** a1, __int64** a2);
__int64 zstd_decompress_224260(__int64 result, _QWORD* a2, _QWORD* a3);
__int64* zstd_decompress_224280(__int64* a1, __int64 a2);
__int64* zstd_decompress_224320(__int64* a1, __int64 a2);
__int64 zstd_decompress_2243c0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 ZSTD_getDDict(__int64 a1, _QWORD* a2,
                      __int64 (*a3)(_QWORD, _QWORD, __int64), __int64 a4);
__int64 ZSTD_decompressContinue(__int64 a1, _QWORD* a2);
__int64 zstd_decompress_226f00(__int64 result);
__int64 zstd_decompress_226f60(__int64 result);
__int64 zstd_decompress_226fc0(__int64 a1);
__int64 zstd_decompress_227620(__int64 a1, _QWORD* a2);
__int64 zstd_decompress_227ba0(_QWORD* a1);
__int64 zstd_decompress_227c10(__int64 a1);
__int64 zstd_decompress_227c40(_DWORD* a1);
__int64 ZSTD_initDStream_usingDDict(__int64 a1);
__int64 ZSTD_DCtx_setMaxWindowSize(_DWORD* a1, _DWORD* a2);
_QWORD* zstd_decompress_227d40(_QWORD* result);
__int64 ZSTD_sizeof_DStream(_QWORD* a1);
unsigned __int64 ZSTD_decompressMultiFrame(__int64 a1, char* a2, __int64 a3,
                                           unsigned __int8* a4,
                                           unsigned __int64 a5, _DWORD* a6,
                                           unsigned __int64 a7, __int64 a8);
__int64 ZSTD_decompress(char* a1, __int64 a2, unsigned __int8* a3,
                        unsigned __int64 a4);

__int64 zstd_decompress_220dd0(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  if (*(_DWORD*)a1 != 0) {
    return 201;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                 104LL))(
      *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
}

__int64 zstd_decompress_220e10(__int64 a1)
{
  if (a1 == 0) {
    return 999;
  }
  if (*(_DWORD*)a1 != 0) {
    return 201;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 33160LL) +
                                 136LL))(
      *(void**)(*(_QWORD*)(a1 + 72) + 33160LL));
}

__int64 zstd_decompress_220e60(int a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v6;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  _DWORD* v30;
  int v31;
  unsigned __int64 v32;
  unsigned int* v33;
  __int64 v34;
  unsigned int v35;
  _DWORD v36[4];
  int v37;
  _DWORD v38[1829];
  __int64 v39;
  __int64 v40;

  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v39 = v2;
    v40 = v3;
    v6 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v6 == 0) {
      return 101;
    }
    if (a2 != 0) {
      result = (*(__int64 (**)(__int64, _DWORD*))(v6 + 21256))(v6, v38);
      if ((_DWORD)result != 0) {
        return result;
      }
      v8 = v38[0];
      v9 = *(_QWORD*)(a2 + 16);
      *(_DWORD*)(a2 + 8) = v38[0];
      if (v9 == 0) {
        return 0;
      }
      if (*(_DWORD*)(a2 + 12) < v8) {
        return 2;
      }
      v10 = *(_DWORD*)(v6 + 3480);
      if (v10 != 0) {
        v11 = v10 & 7;
        if (v10 >= 8) {
          v14 = (int*)(v6 + 3512);
          v15 = 0;
          v13 = 0;
          v16 = -(__int64)(v10 & 0xFFFFFFF8);
          v17 = &v37;
          do {
            v18 = *(v14 - 6);
            v15 -= 8;
            v19 = *(v14 - 7) + v13;
            *(v17 - 4) = v13;
            *(v17 - 3) = v19;
            v20 = v18 + v19;
            v21 = *(v14 - 4);
            v22 = *(v14 - 5) + v20;
            *(v17 - 2) = v20;
            *(v17 - 1) = v22;
            v23 = v21 + v22;
            v24 = *(v14 - 2);
            v25 = *(v14 - 3) + v23;
            *v17 = v23;
            v17[1] = v25;
            v26 = v24 + v25;
            v27 = *(v14 - 1) + v24 + v25;
            v17[2] = v26;
            v17[3] = v27;
            v28 = *v14;
            v14 += 8;
            v17 += 8;
            v13 = v28 + v27;
          } while (v16 != v15);
          v12 = -v15;
        }
        else {
          v12 = 0;
          v13 = 0;
        }
        if (v11 != 0) {
          v29 = (int*)(v6 + 4 * v12 + 3484);
          v30 = &v36[v12];
          do {
            v31 = *v29++;
            *v30++ = v13;
            --v11;
            v13 += v31;
          } while (v11 != 0);
        }
      }
      if (v8 == 0) {
        return 0;
      }
      v32 = 0;
      while (1) {
        v33 = &v38[v32];
        v34 = v33[20];
        if (*(_DWORD*)(v6 + 3480) <= (unsigned int)v34) {
          break;
        }
        v35 = *(_DWORD*)(a2 + 4) * v32++;
        *(_DWORD*)(*(_QWORD*)(a2 + 16) + v35) =
            v33[532] + (v33[276] + v36[v34]) * *(_DWORD*)(v6 + 3736);
        if (v32 >= v38[0]) {
          return 0;
        }
      }
    }
    return 1;
  }
  return result;
}

__int64 ZSTD_DCtx_loadDictionary_advanced(_DWORD* a1, _DWORD* a2)
{
  __int64 v5;
  __int64 v6;

  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if ((unsigned int)cuda_driver_misc_helpers_deeb0(a1, 2) != 0) {
    return 201;
  }
  v5 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
  CudaDriverStub_107f90(a1 + 3964, 0, 0);
  *a2 = CudaDriverRoutine_1fe530((__int64)(a1 + 1134));
  CudaDriverStub_108070(a1 + 3964);
  v6 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v6 + 24);
  return 0;
}

__int64 ZSTD_DCtx_loadDictionary(__int64 a1, unsigned int* a2, _DWORD* a3)
{
  __int64 v7;
  unsigned int v8;
  __int64 v9;

  if (a1 == 0 || *(_DWORD*)a1 != 0 ||
      (unsigned int)cuda_driver_misc_helpers_deeb0(a1, 2) != 0) {
    return 201;
  }
  v7 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v7 + 24, 0, 0, 0);
  CudaDriverStub_107f90(a1 + 15856, 0, 0);
  v8 = CudaDriverRoutine_1fe550(*(_QWORD*)(a1 + 2360), (int**)(a1 + 4536),
                                a1 + 13800, a2, a3);
  CudaDriverStub_108070(a1 + 15856);
  v9 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v9 + 24);
  return v8;
}

__int64 ZSTD_DCtx_refPrefix(__int64 a1, __int64 a2, unsigned int* a3,
                            __int64 a4, unsigned int* a5)
{
  __int64 v11;
  unsigned int v12;
  __int64 v13;

  if (a1 == 0 || *(_DWORD*)a1 != 0 ||
      (unsigned int)cuda_driver_misc_helpers_deeb0(a1, 2) != 0) {
    return 201;
  }
  v11 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v11 + 24, 0, 0, 0);
  CudaDriverStub_107f90(a1 + 15856, 0, 0);
  v12 = CudaDriverRoutine_1fe840(*(_QWORD*)(a1 + 2360), (int**)(a1 + 4536), a2,
                                 a3, a4, a5);
  CudaDriverStub_108070(a1 + 15856);
  v13 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v13 + 24);
  return v12;
}

__int64 ZSTD_initDStream_usingDict(__int64 a1, unsigned int a2, __int64 a3,
                                   __int64 a4, unsigned int a5)
{
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15;

  v5 = 1;
  v15 = 0;
  if (a1 != 0 && a4 != 0 && (a5 - 1) >> 13 <= 2) {
    if (a2 < 3) {
      if (a3 != 0) {
        goto LABEL_6;
      }
      goto LABEL_11;
    }
    if (a2 == 3) {
      v7 = a1;
      v8 = a4;
      v9 = a3;
      if ((unsigned __int8)CudaDriverRoutine_5e9f0(*(_QWORD*)(a1 + 72)) == 0) {
        return 1;
      }
      a2 = 8;
      a3 = v9;
      a4 = v8;
      a1 = v7;
      if (v9 != 0) {
      LABEL_6:
        if (*(_QWORD*)(a3 + 16) == a1) {
          goto LABEL_13;
        }
        return 1;
      }
    LABEL_11:
      a3 = *(_QWORD*)(a1 + 96);
      if (*(_QWORD*)(a3 + 16) == a1) {
      LABEL_13:
        v10 = a3;
        v11 = a4;
        v12 = a2;
        CudaDriverRoutine_98340_alt1();
        CudaDriverRoutine_205fa0(v12, v10, &v15, 0);
        v13 = 4LL * a5;
        memcpy_plt(v15, v11, v13);
        v15 += v13;
        CudaDriverRoutine_206060(v10);
        return 0;
      }
      return 1;
    }
  }
  return v5;
}

__int64 ZSTD_DCtx_reset(__int64* a1, __int64 a2, __int64 a3, int a4,
                        unsigned int a5, __int64 a6, unsigned int a7)
{
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int128 v17;
  int v18;
  __int64 v19;
  __int64 v20;

  if (a2 == 0) {
    return 201;
  }
  result = 1;
  if (a5 <= 4 && ((1 << a5) & 0x16) != 0 && a3 != 0) {
    v19 = v7;
    v20 = v8;
    v13 = a3;
    v14 = a4;
    v15 = a5;
    v16 = a6;
    v18 = 1;
    v17 = CudaDriverData_1115780;
    if (a7 <= 2) {
      v11 = a1;
      v12 = (*(__int64 (**)(__int64, __int64, __int64*, _QWORD, _QWORD))(
          *(_QWORD*)(a2 + 64) + 19320LL))(*a1, a2, &v13, 0, 2 - a7);
      result = 0;
      *v11 = v12;
    }
  }
  return result;
}

__int64 zstd_decompress_221e50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;

  v4 = a2;
  v10 = 0;
  if (a2 == 0) {
    v4 = CudaDriverRoutine_5f050(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL), a1, 1);
  }
  v6 = CudaDriverRoutine_5b5d0(v4, 0);
  CudaDriverRoutine_205dd0(v4, a1, &v10);
  if (v6 <= 2) {
    if (v6 != 0) {
      if (v6 != 2) {
        v8 = 0;
        goto LABEL_14;
      }
      v7 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
          *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 19056LL))(v10, a3, 1, 0);
    }
    else {
      v7 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
          *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 19048LL))(v10, a3, 1, 0);
    }
    goto LABEL_13;
  }
  if (v6 == 3) {
    v7 = (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
        *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) + 19080LL))(v10, a3, 1, 0);
  LABEL_13:
    v8 = 0;
    v10 = v7;
    goto LABEL_14;
  }
  if (v6 == 4) {
    v8 = 801;
  }
  else {
    v8 = 0;
  }
LABEL_14:
  CudaDriverRoutine_206060(a1);
  return v8;
}

__int64 ZSTD_initDStream(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  if (a2 == 0) {
    return 201;
  }
  if (a4 == 0) {
    return 1;
  }
  if ((unsigned int)(a3 - 1) >= 4) {
    a3 = 0;
  }
  else {
    a3 = (unsigned int)a3;
  }
  *a1 = (*(__int64 (**)(_QWORD, __int64, __int64))(*(_QWORD*)(a2 + 64) +
                                                   18672LL))(*a1, a4, a3);
  return 0;
}

__int64 zstd_decompress_221fd0(unsigned int a1, __int64 a2)
{
  if (a1 > 0x3FF) {
    return 1;
  }
  CudaDriverRoutine_20b420(7, a1, a2);
  return 0;
}

_QWORD* ZSTD_resetDStream(_QWORD* result, _QWORD* a2)
{
  *result = CudaDriverData_1432168;
  *a2 = 1024;
  return result;
}

__int64 zstd_decompress_222030(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 result;
  __int64 v5;

  v5 = 0;
  if (a1 == 0) {
    return 201;
  }
  if (a3 == nullptr) {
    return 1;
  }
  if (a2 == -1) {
    return 400;
  }
  result = CudaDriverRoutine_1128f0(0, a1, a2, 2, &v5);
  if ((_DWORD)result == 0) {
    *a3 = *(_QWORD*)(v5 + 304);
  }
  return result;
}

__int64 ZSTD_DCtx_setFormat(__int64 a1, _QWORD* a2)
{
  if (a2 == nullptr) {
    return 999;
  }
  if (a1 != 0) {
    *a2 = *(unsigned int*)(a1 + 56);
  }
  else {
    *a2 = 0;
  }
  return 0;
}

__int64 ZSTD_DCtx_loadDictionary_byReference(__int64 a1, unsigned __int64 a2,
                                             __int64 a3, __int64 a4)
{
  unsigned __int64 v4;
  __int64 result;
  unsigned __int64* v11;
  unsigned __int64* v12;
  unsigned int v13;

  v4 = a2 + a3 - 1;
  if (a2 > v4 || a1 == 0 || a4 == 0) {
    return 2;
  }
  if (*(_BYTE*)a1 == 0) {
    return 1;
  }
  v11 = (unsigned __int64*)CudaDriverRoutine_12e510(1, 16);
  if (v11 == nullptr) {
    return 3;
  }
  *v11 = a2;
  v11[1] = v4;
  v12 = v11;
  result = zstd_decompress_2238e0_alt1(*(_QWORD*)(a1 + 8), v11, a4);
  if ((_DWORD)result != 0) {
    v13 = result;
    CudaDriverRoutine_12e340(v12);
    return v13;
  }
  return result;
}

__int64 zstd_decompress_223310(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD v5[2];

  v3 = 0;
  if (result != 0) {
    if (*(_BYTE*)result != 0) {
      v2 = *(_QWORD*)(result + 8);
      v5[0] = a2;
      v5[1] = a2;
      v4 = v5;
      result = zstd_decompress_224280_alt1(v2, v5);
      if (result != 0) {
        zstd_decompress_224260_alt1(result, &v4, &v3);
        return v3;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_223380(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD v8[2];

  result = 0;
  v6 = 0;
  if (a1 != 0 && a2 <= a2 + a3 - 1) {
    if (*(_BYTE*)a1 != 0) {
      v5 = *(_QWORD*)(a1 + 8);
      v8[0] = a2;
      v8[1] = a2 + a3 - 1;
      v7 = v8;
      result = zstd_decompress_224280_alt1(v5, v8);
      if (result != 0) {
        zstd_decompress_224260_alt1(result, &v7, &v6);
        return v6;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_223400(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];
  _QWORD* v10;

  if (result != 0) {
    if (*(_BYTE*)result != 0) {
      v2 = result;
      v3 = *(_QWORD*)(result + 8);
      v8 = 0;
      v9[0] = a2;
      v9[1] = a2;
      v10 = v9;
      result = zstd_decompress_224280_alt1(v3, v9);
      if (result != 0) {
        v4 = result;
        zstd_decompress_224260_alt1(result, &v10, &v8);
        if (v8 != 0) {
          v5 = *(_QWORD*)(v2 + 8);
          v6 = v10;
          v7 = v8;
          zstd_decompress_223ce0_alt1(v5, v4);
          CudaDriverRoutine_12e340(v6);
          return v7;
        }
        else {
          return 0;
        }
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

_QWORD* zstd_decompress_2234c0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  if (a1 == 0 || *(_BYTE*)a1 == 0) {
    return nullptr;
  }
  v1 = *(_QWORD**)(a1 + 8);
  v5 = (_QWORD*)*v1;
  v3 = v1 + 1;
  v4 = v5;
  do {
    v6 = v4;
    v4 = (_QWORD*)*v4;
  } while (v4 != v3);
  if (v6 == v3) {
    return nullptr;
  }
  else {
    return v6;
  }
}

_QWORD* zstd_decompress_2234e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  bool v7;

  if (a1 == 0 || *(_BYTE*)a1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD**)(a2 + 8);
  v5 = (_QWORD*)(v2 + 8);
  if (v4 == (_QWORD*)(v2 + 8)) {
    do {
      v6 = *(_QWORD**)(a2 + 16);
      if (v6 == nullptr) {
        break;
      }
      v7 = a2 == v6[1];
      a2 = *(_QWORD*)(a2 + 16);
    } while (v7);
  }
  else {
    do {
      v6 = v4;
      v4 = (_QWORD*)*v4;
    } while (v4 != v5);
  }
  if (v6 == v5) {
    return nullptr;
  }
  else {
    return v6;
  }
}

__int64 zstd_decompress_223500(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD v4[2];

  if (result != 0) {
    if (*(_BYTE*)result != 0) {
      v3 = *(_QWORD*)(result + 8);
      v4[0] = a2;
      v4[1] = a2 + a3 - 1;
      return zstd_decompress_224320_alt1(v3, v4);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_223550(__int64 result)
{
  __int64 v1;

  v1 = 0;
  if (result != 0) {
    zstd_decompress_224260_alt1(result, 0, &v1);
    return v1;
  }
  return result;
}

__int64 zstd_decompress_223590(__int64 result)
{
  _QWORD* v1;

  v1 = nullptr;
  if (result != 0) {
    zstd_decompress_224260_alt1(result, &v1, 0);
    if (v1 != nullptr) {
      return v1[1] - *v1 + 1LL;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_2235f0(__int64 result)
{
  __int64 v1;

  v1 = 0;
  if (result != 0) {
    zstd_decompress_224260_alt1(result, &v1, 0);
    if (v1 != 0) {
      return *(_QWORD*)v1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_223640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  result = 2;
  if (a1 != 0 && a2 != 0) {
    if (*(_BYTE*)a1 != 0) {
      v5 = *(_QWORD*)(a1 + 8);
      v6[0] = a2;
      v6[1] = a3;
      return zstd_decompress_2243c0_alt1(v5, zstd_decompress_2236a0_alt1, v6);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 zstd_decompress_2236a0(_QWORD* a1, __int64 a2, __int64 a3)
{
  if (*(_QWORD*)a3 != 0) {
    return (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD))a3)(
        *a1, a1[1] - *a1 + 1LL, a2, *(_QWORD*)(a3 + 8));
  }
  else {
    return 0;
  }
}

__int64 zstd_decompress_2236d0(_QWORD* a1, _QWORD* a2)
{
  if (*a2 <= *a1 && a2[1] >= a1[1]) {
    return 0;
  }
  if (*a1 > *a2) {
    return 1;
  }
  return 0xFFFFFFFFLL;
}

bool zstd_decompress_223710(unsigned __int64* a1, unsigned __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;

  v2 = *a2;
  if (*a2 >= *a1) {
    v3 = a1;
  }
  else {
    v3 = a2;
  }
  if (*a2 <= *a1) {
    v2 = *a1;
  }
  return v2 <= v3[1];
}

__int64 zstd_decompress_223740(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  if (a1 == nullptr) {
    return 2;
  }
  v6 = CudaDriverRoutine_12e510(1, 72);
  if (v6 == 0) {
    return 3;
  }
  v7 = v6;
  v8 = v6 + 8;
  result = 0;
  *(_QWORD*)(v7 + 56) = a2;
  *(_QWORD*)(v7 + 64) = a3;
  *(_DWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)v7 = v8;
  *(_QWORD*)(v7 + 8) = v8;
  *(_QWORD*)(v7 + 16) = v8;
  *(_QWORD*)(v7 + 24) = 0;
  *a1 = v7;
  return result;
}

_QWORD* zstd_decompress_2237d0(_QWORD* result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5)
{
  _QWORD* v5;
  _QWORD* v6;

  if (result != nullptr) {
    v5 = (_QWORD*)*result;
    v6 = result;
    if (*result != 0) {
      ZSTD_decompressDCtx_alt1(*result, *v5, a2, a3, a4, a5);
      result = (_QWORD*)CudaDriverRoutine_12e340(v5);
      *v6 = 0;
    }
  }
  return result;
}

__int64 ZSTD_decompressDCtx(__int64 result, _QWORD* a2,
                            void (*a3)(_QWORD, __int64), __int64 a4,
                            void (*a5)(_QWORD, __int64), __int64 a6)
{
  __int64 v11;

  if (a2 != (_QWORD*)(result + 8)) {
    v11 = result;
    ZSTD_decompressDCtx(result, *a2, a3, a4, a5, a6);
    ZSTD_decompressDCtx(v11, a2[1], a3, a4, a5, a6);
    if (a3 != nullptr) {
      a3(a2[4], a4);
    }
    if (a5 != nullptr) {
      a5(a2[5], a6);
    }
    return CudaDriverRoutine_12e340(a2);
  }
  return result;
}

__int64 zstd_decompress_2238e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64* v4;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  _DWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64** v27;
  __int64* v28;
  __int64** v29;

  v4 = (__int64*)(a1 + 8);
  v3 = *(__int64**)a1;
  if (*(_QWORD*)a1 != a1 + 8) {
    do {
      v8 = v3;
      v9 = (*(__int64 (**)(__int64, __int64))(a1 + 56))(a2, v3[4]);
      if ((*(unsigned int (**)(__int64, __int64))(a1 + 64))(a2, v8[4]) != 0) {
        return 8;
      }
      v10 = v9 >= 0;
      v3 = (__int64*)v8[v10];
    } while (v3 != v4);
    v11 = CudaDriverRoutine_12e510(1, 48);
    if (v11 != 0) {
      goto LABEL_8;
    }
    return 3;
  }
  v8 = nullptr;
  v11 = CudaDriverRoutine_12e510(1, 48);
  if (v11 == 0) {
    return 3;
  }
LABEL_8:
  *(_QWORD*)(v11 + 16) = v8;
  v12 = v11 + 16;
  v13 = v11;
  *(_QWORD*)v11 = v4;
  *(_QWORD*)(v11 + 8) = v4;
  *(_DWORD*)(v11 + 24) = 1;
  *(_QWORD*)(v11 + 32) = a2;
  *(_QWORD*)(v11 + 40) = a3;
  if (v8 != nullptr) {
    if (((*(__int64 (**)(__int64, __int64))(a1 + 56))(a2, v8[4]) &
         0x80000000) != 0) {
      *v8 = v13;
      v14 = *(_QWORD*)a1;
      if (v13 == *(_QWORD*)a1) {
        goto LABEL_76;
      }
    }
    else {
      v8[1] = v13;
      v14 = *(_QWORD*)a1;
      if (v13 == *(_QWORD*)a1) {
        goto LABEL_76;
      }
    }
    v16 = *(_QWORD*)v12;
    v17 = (_DWORD*)(*(_QWORD*)v12 + 24LL);
    if (*v17 == 1) {
      do {
        v18 = *(__int64**)(v16 + 16);
        v19 = *v18;
        if (v16 != *v18) {
          if (*(_DWORD*)(v19 + 24) == 1) {
            goto LABEL_23;
          }
          v20 = *(_QWORD*)v16;
          if (v13 != *(_QWORD*)v16) {
            v20 = v16;
            v16 = v13;
          LABEL_47:
            *(_DWORD*)(v20 + 24) = 0;
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 16) + 16LL) + 24LL) = 1;
            v24 = *(__int64**)(*(_QWORD*)(v16 + 16) + 16LL);
            v25 = (__int64*)v24[1];
            v26 = (__int64*)*v25;
            v24[1] = *v25;
            if (v26 != v4) {
              v26[2] = (__int64)v24;
            }
            v27 = (__int64**)v24[2];
            if (v25 != v4) {
              v25[2] = (__int64)v27;
            }
            if (v27 != nullptr) {
              if (v24 == *v27) {
                *v27 = v25;
              }
              else {
                v27[1] = v25;
              }
            }
            else {
              *(_QWORD*)a1 = v25;
            }
            *v25 = (__int64)v24;
            goto LABEL_57;
          }
          v22 = *(__int64**)(v20 + 8);
          *(_QWORD*)v16 = v22;
          if (v22 != v4) {
            v22[2] = v16;
            v18 = *(__int64**)(v16 + 16);
          }
          if ((__int64*)v13 != v4) {
            *(_QWORD*)(v20 + 16) = v18;
          }
          if (v18 != nullptr) {
            if (v16 != v18[1]) {
              *v18 = v20;
              *(_QWORD*)(v20 + 8) = v16;
              if ((__int64*)v16 == v4) {
                goto LABEL_46;
              }
            LABEL_44:
              *(_QWORD*)(v16 + 16) = v20;
              goto LABEL_47;
            }
            v18[1] = v20;
            *(_QWORD*)(v20 + 8) = v16;
            if ((__int64*)v16 != v4) {
              goto LABEL_44;
            }
          }
          else {
            *(_QWORD*)a1 = v20;
            *(_QWORD*)(v20 + 8) = v16;
            if ((__int64*)v16 != v4) {
              goto LABEL_44;
            }
          }
        LABEL_46:
          v20 = *(_QWORD*)(v16 + 16);
          goto LABEL_47;
        }
        v19 = v18[1];
        if (*(_DWORD*)(v19 + 24) == 1) {
        LABEL_23:
          *v17 = 0;
          *(_DWORD*)(v19 + 24) = 0;
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v12 + 16LL) + 24LL) = 1;
          v13 = *(_QWORD*)(*(_QWORD*)v12 + 16LL);
          v14 = *(_QWORD*)a1;
          if (v13 == *(_QWORD*)a1) {
            break;
          }
          goto LABEL_60;
        }
        v21 = *(_QWORD*)(v16 + 8);
        if (v13 == v21) {
          v23 = *(__int64**)v21;
          *(_QWORD*)(v16 + 8) = *(_QWORD*)v21;
          if (v23 != v4) {
            v23[2] = v16;
            v18 = *(__int64**)(v16 + 16);
          }
          if ((__int64*)v13 != v4) {
            *(_QWORD*)(v21 + 16) = v18;
          }
          if (v18 != nullptr) {
            if (v16 == *v18) {
              *v18 = v21;
              *(_QWORD*)v21 = v16;
              if ((__int64*)v16 == v4) {
              LABEL_65:
                v21 = *(_QWORD*)(v16 + 16);
                goto LABEL_66;
              }
            }
            else {
              v18[1] = v21;
              *(_QWORD*)v21 = v16;
              if ((__int64*)v16 == v4) {
                goto LABEL_65;
              }
            }
          }
          else {
            *(_QWORD*)a1 = v21;
            *(_QWORD*)v21 = v16;
            if ((__int64*)v16 == v4) {
              goto LABEL_65;
            }
          }
          *(_QWORD*)(v16 + 16) = v21;
        }
        else {
          v21 = v16;
          v16 = v13;
        }
      LABEL_66:
        *(_DWORD*)(v21 + 24) = 0;
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 16) + 16LL) + 24LL) = 1;
        v24 = *(__int64**)(*(_QWORD*)(v16 + 16) + 16LL);
        v25 = (__int64*)*v24;
        v28 = *(__int64**)(*v24 + 8);
        *v24 = (__int64)v28;
        if (v28 != v4) {
          v28[2] = (__int64)v24;
        }
        v29 = (__int64**)v24[2];
        if (v25 != v4) {
          v25[2] = (__int64)v29;
        }
        if (v29 != nullptr) {
          if (v24 == v29[1]) {
            v29[1] = v25;
          }
          else {
            *v29 = v25;
          }
          v25[1] = (__int64)v24;
        }
        else {
          *(_QWORD*)a1 = v25;
          v25[1] = (__int64)v24;
        }
      LABEL_57:
        if (v24 != v4) {
          v24[2] = (__int64)v25;
        }
        v13 = v16;
        v14 = *(_QWORD*)a1;
        if (v16 == *(_QWORD*)a1) {
          break;
        }
      LABEL_60:
        v12 = v13 + 16;
        v16 = *(_QWORD*)(v13 + 16);
        v17 = (_DWORD*)(v16 + 24);
      } while (*(_DWORD*)(v16 + 24) == 1);
    }
  }
  else {
    *(_QWORD*)a1 = v11;
    v14 = v11;
  }
LABEL_76:
  *(_DWORD*)(v14 + 24) = 0;
  return 0;
}

__int64 zstd_decompress_223ce0(__int64** a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  __int64** v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64** v23;
  int v24;
  __int64* v25;
  __int64* v26;
  __int64** v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64** v31;
  __int64* v32;
  __int64** v33;

  v2 = *a2;
  v3 = (__int64*)(a1 + 1);
  if (*a2 == (__int64*)(a1 + 1)) {
    v4 = (__int64*)a2;
  }
  else {
    v4 = (__int64*)a2;
    if (a2[1] != v3) {
      v2 = a2[1];
      do {
        v4 = v2;
        v2 = (__int64*)*v2;
      } while (v2 != v3);
    }
    if (v2 != v3) {
      v5 = (__int64**)v4[2];
      v2[2] = (__int64)v5;
      if (v5 != nullptr) {
        goto LABEL_7;
      }
    LABEL_12:
      *a1 = v2;
      if (v4 == (__int64*)a2) {
        goto LABEL_14;
      }
      goto LABEL_13;
    }
  }
  v2 = (__int64*)v4[1];
  v5 = (__int64**)v4[2];
  v2[2] = (__int64)v5;
  if (v5 == nullptr) {
    goto LABEL_12;
  }
LABEL_7:
  if (v4 != *v5) {
    v5[1] = v2;
    if (v4 == (__int64*)a2) {
      goto LABEL_14;
    }
  LABEL_13:
    a2[4] = (__int64*)v4[4];
    a2[5] = (__int64*)v4[5];
    goto LABEL_14;
  }
  *v5 = v2;
  if (v4 != (__int64*)a2) {
    goto LABEL_13;
  }
LABEL_14:
  if (*((_DWORD*)v4 + 6) != 0) {
    CudaDriverRoutine_12e340(v4);
    return 0;
  }
  if (v2 != *a1) {
    while (1) {
      if (*((_DWORD*)v2 + 6) != 0) {
        goto LABEL_105;
      }
      v7 = (__int64**)(v2 + 2);
      v8 = (__int64*)v2[2];
      v9 = *v8;
      if (v2 == (__int64*)*v8) {
        v14 = (__int64*)v8[1];
        if (*((_DWORD*)v14 + 6) == 1) {
          *((_DWORD*)v14 + 6) = 0;
          *((_DWORD*)*v7 + 6) = 1;
          v15 = *v7;
          v16 = (__int64*)(*v7)[1];
          v17 = (__int64*)*v16;
          (*v7)[1] = *v16;
          if (v17 != v3) {
            v17[2] = (__int64)v15;
          }
          v18 = (__int64**)v15[2];
          if (v16 != v3) {
            v16[2] = (__int64)v18;
          }
          if (v18 == nullptr) {
            *a1 = v16;
            *v16 = (__int64)v15;
            if (v15 == v3) {
              goto LABEL_58;
            }
            goto LABEL_57;
          }
          if (v15 != *v18) {
            v18[1] = v16;
            *v16 = (__int64)v15;
            if (v15 == v3) {
              goto LABEL_58;
            }
          LABEL_57:
            v15[2] = (__int64)v16;
            goto LABEL_58;
          }
          *v18 = v16;
          *v16 = (__int64)v15;
          if (v15 != v3) {
            goto LABEL_57;
          }
        LABEL_58:
          v8 = *v7;
          v14 = (__int64*)(*v7)[1];
        }
        v24 = *(_DWORD*)(v14[1] + 24);
        if (*(_DWORD*)(*v14 + 24) != 0) {
          if (v24 == 0) {
            *(_DWORD*)(*v14 + 24) = 0;
            *((_DWORD*)v14 + 6) = 1;
            v25 = (__int64*)*v14;
            v26 = *(__int64**)(*v14 + 8);
            *v14 = (__int64)v26;
            if (v26 != v3) {
              v26[2] = (__int64)v14;
            }
            v27 = (__int64**)v14[2];
            if (v25 != v3) {
              v25[2] = (__int64)v27;
            }
            if (v27 == nullptr) {
              *a1 = v25;
              v25[1] = (__int64)v14;
              if (v14 == v3) {
                goto LABEL_92;
              }
              goto LABEL_91;
            }
            if (v14 != v27[1]) {
              *v27 = v25;
              v25[1] = (__int64)v14;
              if (v14 == v3) {
                goto LABEL_92;
              }
            LABEL_91:
              v14[2] = (__int64)v25;
              goto LABEL_92;
            }
            v27[1] = v25;
            v25[1] = (__int64)v14;
            if (v14 != v3) {
              goto LABEL_91;
            }
          LABEL_92:
            v8 = *v7;
            v14 = (__int64*)(*v7)[1];
          }
        LABEL_93:
          *((_DWORD*)v14 + 6) = *((_DWORD*)v8 + 6);
          *((_DWORD*)*v7 + 6) = 0;
          *(_DWORD*)(v14[1] + 24) = 0;
          v28 = *v7;
          v29 = (__int64*)(*v7)[1];
          v32 = (__int64*)*v29;
          v28[1] = *v29;
          if (v32 != v3) {
            v32[2] = (__int64)v28;
          }
          v33 = (__int64**)v28[2];
          if (v29 != v3) {
            v29[2] = (__int64)v33;
          }
          if (v33 != nullptr) {
            if (v28 == *v33) {
              *v33 = v29;
            }
            else {
              v33[1] = v29;
            }
            *v29 = (__int64)v28;
          }
          else {
            *a1 = v29;
            *v29 = (__int64)v28;
          }
        LABEL_84:
          v7 = a1;
          if (v28 != v3) {
            v28[2] = (__int64)v29;
            v7 = a1;
          }
          goto LABEL_18;
        }
        if (v24 != 0) {
          goto LABEL_93;
        }
        *((_DWORD*)v14 + 6) = 1;
        goto LABEL_18;
      }
      if (*(_DWORD*)(v9 + 24) == 1) {
        break;
      }
    LABEL_42:
      v19 = *(_QWORD*)(v9 + 8);
      v20 = *(_DWORD*)(*(_QWORD*)v9 + 24LL);
      if (*(_DWORD*)(v19 + 24) != 0) {
        if (v20 == 0) {
          *(_DWORD*)(v19 + 24) = 0;
          *(_DWORD*)(v9 + 24) = 1;
          v21 = *(__int64**)(v9 + 8);
          v22 = (__int64*)*v21;
          *(_QWORD*)(v9 + 8) = *v21;
          if (v22 != v3) {
            v22[2] = v9;
          }
          v23 = *(__int64***)(v9 + 16);
          if (v21 != v3) {
            v21[2] = (__int64)v23;
          }
          if (v23 == nullptr) {
            *a1 = v21;
            *v21 = v9;
            if ((__int64*)v9 == v3) {
              goto LABEL_73;
            }
            goto LABEL_72;
          }
          if ((__int64*)v9 != *v23) {
            v23[1] = v21;
            *v21 = v9;
            if ((__int64*)v9 == v3) {
              goto LABEL_73;
            }
          LABEL_72:
            *(_QWORD*)(v9 + 16) = v21;
            goto LABEL_73;
          }
          *v23 = v21;
          *v21 = v9;
          if ((__int64*)v9 != v3) {
            goto LABEL_72;
          }
        LABEL_73:
          v8 = *v7;
          v9 = **v7;
        }
      LABEL_74:
        *(_DWORD*)(v9 + 24) = *((_DWORD*)v8 + 6);
        *((_DWORD*)*v7 + 6) = 0;
        *(_DWORD*)(*(_QWORD*)v9 + 24LL) = 0;
        v28 = *v7;
        v29 = (__int64*)**v7;
        v30 = (__int64*)v29[1];
        *v28 = (__int64)v30;
        if (v30 != v3) {
          v30[2] = (__int64)v28;
        }
        v31 = (__int64**)v28[2];
        if (v29 != v3) {
          v29[2] = (__int64)v31;
        }
        if (v31 != nullptr) {
          if (v28 == v31[1]) {
            v31[1] = v29;
          }
          else {
            *v31 = v29;
          }
        }
        else {
          *a1 = v29;
        }
        v29[1] = (__int64)v28;
        goto LABEL_84;
      }
      if (v20 != 0) {
        goto LABEL_74;
      }
      *(_DWORD*)(v9 + 24) = 1;
    LABEL_18:
      v2 = *v7;
      if (*v7 == *a1) {
        goto LABEL_105;
      }
    }
    *(_DWORD*)(v9 + 24) = 0;
    *((_DWORD*)*v7 + 6) = 1;
    v10 = *v7;
    v11 = (__int64*)**v7;
    v12 = (__int64*)v11[1];
    **v7 = (__int64)v12;
    if (v12 != v3) {
      v12[2] = (__int64)v10;
    }
    v13 = (__int64**)v10[2];
    if (v11 != v3) {
      v11[2] = (__int64)v13;
    }
    if (v13 != nullptr) {
      if (v10 == v13[1]) {
        v13[1] = v11;
        v11[1] = (__int64)v10;
        if (v10 == v3) {
          goto LABEL_41;
        }
      }
      else {
        *v13 = v11;
        v11[1] = (__int64)v10;
        if (v10 == v3) {
          goto LABEL_41;
        }
      }
    }
    else {
      *a1 = v11;
      v11[1] = (__int64)v10;
      if (v10 == v3) {
      LABEL_41:
        v8 = *v7;
        v9 = **v7;
        goto LABEL_42;
      }
    }
    v10[2] = (__int64)v11;
    goto LABEL_41;
  }
LABEL_105:
  *((_DWORD*)v2 + 6) = 0;
  CudaDriverRoutine_12e340(v4);
  return 0;
}

__int64 zstd_decompress_224260(__int64 result, _QWORD* a2, _QWORD* a3)
{
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(result + 32);
  }
  if (a3 != nullptr) {
    *a3 = *(_QWORD*)(result + 40);
  }
  return result;
}

__int64* zstd_decompress_224280(__int64* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  int v6;
  __int64 v7;

  v3 = a1 + 1;
  v2 = (__int64*)*a1;
  if ((__int64*)*a1 == a1 + 1) {
    return nullptr;
  }
  while (1) {
    v6 = ((__int64 (*)(__int64, __int64))a1[7])(a2, v2[4]);
    if (v6 == 0) {
      break;
    }
    v7 = v6 >= 0;
    v2 = (__int64*)v2[v7];
    if (v2 == v3) {
      return nullptr;
    }
  }
  return v2;
}

__int64* zstd_decompress_224320(__int64* a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  int v6;
  __int64 v7;

  v3 = a1 + 1;
  v2 = (__int64*)*a1;
  if ((__int64*)*a1 == a1 + 1) {
    return nullptr;
  }
  while (1) {
    v6 = ((__int64 (*)(__int64, __int64))a1[7])(a2, v2[4]);
    if (((unsigned int (*)(__int64, __int64))a1[8])(a2, v2[4]) != 0) {
      break;
    }
    v7 = v6 >= 0;
    v2 = (__int64*)v2[v7];
    if (v2 == v3) {
      return nullptr;
    }
  }
  return v2;
}

__int64 zstd_decompress_2243c0(_QWORD* a1, __int64 a2, __int64 a3)
{
  if (a1 == nullptr) {
    return 2;
  }
  if (a2 != 0) {
    return ZSTD_getDDict_alt1(a1, *a1, a2, a3);
  }
  return 0;
}

__int64 ZSTD_getDDict(__int64 a1, _QWORD* a2,
                      __int64 (*a3)(_QWORD, _QWORD, __int64), __int64 a4)
{
  _QWORD* v4;
  _QWORD* v7;
  __int64 result;

  v4 = (_QWORD*)(a1 + 8);
  if (a2 == (_QWORD*)(a1 + 8)) {
    return 0;
  }
  v7 = a2;
  while (1) {
    result = ZSTD_getDDict(a1, *v7, a3, a4);
    if ((_DWORD)result != 0) {
      break;
    }
    result = a3(v7[4], v7[5], a4);
    if ((_DWORD)result != 0) {
      break;
    }
    v7 = (_QWORD*)v7[1];
    if (v7 == v4) {
      return 0;
    }
  }
  return result;
}

__int64 ZSTD_decompressContinue(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int8* v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  _BYTE* v24;
  int v25;
  int v26;
  unsigned __int8* v27;
  int v28;
  int v29;
  unsigned __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  int* v35;
  __int64 v36;
  unsigned __int64 v37;
  _DWORD* v38;
  _DWORD* v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned int v46;
  unsigned int v47;
  _QWORD* v48;
  unsigned int v49;
  unsigned __int8* v50;

  if (a2 == nullptr) {
    return 2;
  }
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if (*(_BYTE*)a1 != 127 || *(_BYTE*)(a1 + 1) != 69 ||
      *(_BYTE*)(a1 + 2) != 76 || *(_BYTE*)(a1 + 3) != 70) {
    return 4;
  }
  v2 = *(unsigned int*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 48);
  v4 = a1 + 16;
  v6 = (unsigned int*)(a1 + v2);
  if (*(_WORD*)(a1 + 48) != 0) {
    v7 = a1;
    v8 = a1 + *(unsigned int*)(v4 + (unsigned int)v2 +
                               *(unsigned __int16*)(a1 + 46) *
                                   *(unsigned __int16*)(a1 + 50));
    while ((unsigned int)strcmp_plt(v8 + *v6, ".debug_frame") != 0) {
      v6 += 10;
      --v3;
      result = 5;
      if (v3 == 0) {
        return result;
      }
    }
  }
  else {
    v10 = v6[5];
    if (v10 == 0) {
      return 5;
    }
    v7 = a1;
    v11 = a1 + *(unsigned int*)(v4 + (unsigned int)v2 +
                                *(unsigned __int16*)(a1 + 46) *
                                    *(unsigned __int16*)(a1 + 50));
    while ((unsigned int)strcmp_plt(v11 + *v6, ".debug_frame") != 0) {
      v6 += 10;
      --v10;
      result = 5;
      if (v10 == 0) {
        return result;
      }
    }
  }
  result = CudaDriverRoutine_223120(a2 + 1);
  if ((_DWORD)result == 0) {
    v12 = v6[5];
    v13 = (unsigned int*)(v7 + v6[4]);
    *a2 = (char*)v13 + v12;
    if ((_DWORD)v12 == 0) {
      return 0;
    }
    v14 = v13;
    while (1) {
      v15 = CudaDriverRoutine_12e510(1, 72);
      if (v15 == 0) {
        break;
      }
      v16 = v15;
      *(_QWORD*)v15 = v14;
      *(_QWORD*)(v15 + 8) = (unsigned int)((_DWORD)v14 - (_DWORD)v13);
      v17 = *v14;
      *(_DWORD*)(v15 + 24) = v17;
      if ((_DWORD)v17 == -1) {
        v20 = *(_QWORD*)(v14 + 1);
        v21 = (unsigned int)v20;
        *(_DWORD*)(v15 + 24) = v20;
        *(_QWORD*)(v15 + 16) = (char*)v14 + (unsigned int)v20 + 12;
        if ((unsigned int)v20 <= 7uLL) {
          goto LABEL_81;
        }
        v23 = *(_QWORD*)(v14 + 3);
        v22 = v14 + 3;
        v19 = (unsigned __int8*)(v22 + 2);
        v50 = (unsigned __int8*)(v22 + 2);
        if (v23 != -1) {
          goto LABEL_82;
        }
        v14 = (unsigned int*)((char*)v22 + v21);
      }
      else {
        *(_QWORD*)(v15 + 16) = (char*)v14 + v17 + 4;
        if ((unsigned int)v17 <= 3) {
          goto LABEL_81;
        }
        v18 = v14[1];
        v19 = (unsigned __int8*)(v14 + 2);
        v50 = (unsigned __int8*)(v14 + 2);
        if (v18 != -1) {
          goto LABEL_82;
        }
        v14 = (unsigned int*)((char*)v14 + v17 + 4);
      }
      v24 = v19 + 1;
      if (v19 + 1 > (unsigned __int8*)v14) {
      LABEL_81:
        v50 = nullptr;
      LABEL_82:
        if (*(_QWORD*)(v16 + 64) != 0) {
          CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64),
                                   (__int64)ZSTD_freeDStream, 0);
        }
        *(_QWORD*)(v16 + 64) = 0;
        *(_OWORD*)v16 = 0u;
        *(_OWORD*)(v16 + 16) = 0u;
        *(_OWORD*)(v16 + 32) = 0u;
        *(_OWORD*)(v16 + 48) = 0u;
        CudaDriverRoutine_12e340(v16);
        result = 1;
        v48 = a2;
        if (a2[1] != 0) {
        LABEL_85:
          v49 = result;
          CudaDriverRoutine_2231b0(v48 + 1,
                                   (__int64)zstd_decompress_226f00_alt1, 0);
          result = v49;
          v48 = a2;
        }
      LABEL_86:
        *v48 = 0;
        v48[1] = 0;
        v48[2] = 0;
        return result;
      }
      v25 = *v19;
      v50 = v19 + 1;
      if ((v25 & 0xFFFFFFFD) != 1) {
        goto LABEL_82;
      }
      if (*v24 != 0) {
        v24 += strlen_plt(v24);
      }
      v50 = v24 + 1;
      *(_DWORD*)(v16 + 28) = CudaDriverRoutine_2244b0(&v50);
      v26 = CudaDriverRoutine_224560(&v50);
      v27 = v50;
      *(_DWORD*)(v16 + 32) = v26;
      if (v27 > (unsigned __int8*)v14) {
        goto LABEL_82;
      }
      if (v25 == 3) {
        v29 = CudaDriverRoutine_2244b0(&v50);
        v27 = v50;
        *(_DWORD*)(v16 + 36) = v29;
      }
      else if (v25 == 1) {
        if (v27 != nullptr) {
          if (v27 + 1 <= (unsigned __int8*)v14) {
            v28 = *v27++;
          }
          else {
            v28 = 0;
            v27 = nullptr;
          }
        }
        else {
          v28 = 0;
        }
        v50 = v27;
        *(_DWORD*)(v16 + 36) = v28;
      }
      if (v27 > (unsigned __int8*)v14) {
        goto LABEL_82;
      }
      *(_QWORD*)(v16 + 40) = v27;
      if ((unsigned int)CudaDriverRoutine_223120((_QWORD*)(v16 + 64)) != 0) {
        goto LABEL_82;
      }
      *(_QWORD*)(v16 + 48) = 0;
      *(_QWORD*)(v16 + 56) = 0;
      v30 = (unsigned __int64*)(v16 + 48);
      if ((unsigned __int64)v14 < *a2) {
        while (1) {
          v31 = CudaDriverRoutine_12e510(1, 48);
          if (v31 == 0) {
            goto LABEL_82;
          }
          *(_QWORD*)v31 = v14;
          v32 = v31;
          v33 = *v14;
          *(_DWORD*)(v31 + 16) = v33;
          if ((_DWORD)v33 == -1) {
            v36 = *(_QWORD*)(v14 + 1);
            v37 = (unsigned int)v36;
            *(_DWORD*)(v31 + 16) = v36;
            v34 = (unsigned __int64)v14 + (unsigned int)v36 + 12;
            *(_QWORD*)(v31 + 8) = v34;
            if (v37 < 8) {
              goto LABEL_62;
            }
            if (*(_QWORD*)(v14 + 3) == -1) {
            LABEL_70:
              CudaDriverRoutine_12e340(v31);
              v41 = *(_QWORD*)(v16 + 48);
              v43 = *(_QWORD*)(v16 + 56);
              v44 = a2;
            LABEL_71:
              if (v43 == v41) {
                break;
              }
              v46 = ZSTD_DCtx_loadDictionary_byReference(v44[1], v41, v43 - v41,
                                                         v16);
              if (v46 == 0) {
                goto LABEL_49;
              }
              v47 = v46;
              if (*(_QWORD*)(v16 + 64) != 0) {
                CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64),
                                         (__int64)ZSTD_freeDStream, 0);
              }
              *(_QWORD*)(v16 + 64) = 0;
              *(_OWORD*)v16 = 0u;
              *(_OWORD*)(v16 + 16) = 0u;
              *(_OWORD*)(v16 + 32) = 0u;
              *(_OWORD*)(v16 + 48) = 0u;
              CudaDriverRoutine_12e340(v16);
              if (v47 == 8) {
                goto LABEL_49;
              }
              result = v47;
              v48 = a2;
              if (a2[1] != 0) {
                goto LABEL_85;
              }
              goto LABEL_86;
            }
            v35 = (int*)(v14 + 5);
          }
          else {
            v34 = (unsigned __int64)v14 + v33 + 4;
            *(_QWORD*)(v31 + 8) = v34;
            if ((unsigned int)v33 < 4) {
              goto LABEL_62;
            }
            if (v14[1] == -1) {
              goto LABEL_70;
            }
            v35 = (int*)(v14 + 2);
          }
          v38 = v35 + 1;
          if ((unsigned __int64)(v35 + 1) > v34 ||
              (v40 = *v35, v39 = v35 + 2, *(_DWORD*)(v31 + 24) = v40,
               (unsigned __int64)v39 > v34)) {
          LABEL_62:
            v39 = nullptr;
            goto LABEL_63;
          }
          *(_DWORD*)(v31 + 32) = *v38;
        LABEL_63:
          *(_QWORD*)(v31 + 40) = v39;
          v14 = (unsigned int*)v34;
          if ((unsigned int)ZSTD_DCtx_loadDictionary_byReference(
                  *(_QWORD*)(v16 + 64), *(_QWORD*)(v31 + 24),
                  *(_QWORD*)(v31 + 32), v31) != 0) {
            CudaDriverRoutine_12e340(v32);
            goto LABEL_82;
          }
          v41 = *v30;
          v42 = *(_QWORD*)(v32 + 24);
          if (*v30 - 1 >= v42) {
            *v30 = v42;
            v41 = v42;
            v43 = *(_QWORD*)(v16 + 56);
            v44 = a2;
            v45 = *(_QWORD*)(v32 + 32) + *(_QWORD*)(v32 + 24);
            if (v43 < v45) {
            LABEL_68:
              *(_QWORD*)(v16 + 56) = v45;
              v43 = v45;
            }
          }
          else {
            v43 = *(_QWORD*)(v16 + 56);
            v44 = a2;
            v45 = *(_QWORD*)(v32 + 32) + v42;
            if (v43 < v45) {
              goto LABEL_68;
            }
          }
          if ((unsigned __int64)v14 >= *v44) {
            goto LABEL_71;
          }
        }
      }
      if (*(_QWORD*)(v16 + 64) != 0) {
        CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64), (__int64)ZSTD_freeDStream,
                                 0);
      }
      *(_QWORD*)(v16 + 64) = 0;
      *(_OWORD*)v16 = 0u;
      *(_OWORD*)(v16 + 16) = 0u;
      *(_OWORD*)(v16 + 32) = 0u;
      *(_OWORD*)(v16 + 48) = 0u;
      CudaDriverRoutine_12e340(v16);
    LABEL_49:
      result = 0;
      if ((unsigned __int64)v14 >= *a2) {
        return result;
      }
    }
    result = 3;
    v48 = a2;
    if (a2[1] != 0) {
      goto LABEL_85;
    }
    goto LABEL_86;
  }
  return result;
}

__int64 zstd_decompress_226f00(__int64 result)
{
  __int64 v1;

  if (result != 0) {
    if (*(_QWORD*)(result + 64) != 0) {
      v1 = result;
      CudaDriverRoutine_2231b0((_QWORD*)(result + 64),
                               (__int64)ZSTD_freeDStream, 0);
      result = v1;
    }
    *(_QWORD*)(result + 64) = 0;
    *(_OWORD*)result = 0u;
    *(_OWORD*)(result + 16) = 0u;
    *(_OWORD*)(result + 32) = 0u;
    *(_OWORD*)(result + 48) = 0u;
    return CudaDriverRoutine_12e340(result);
  }
  return result;
}

__int64 zstd_decompress_226f60(__int64 result)
{
  __int64 v1;

  if (result != 0) {
    if (*(_QWORD*)(result + 64) != 0) {
      v1 = result;
      CudaDriverRoutine_2231b0((_QWORD*)(result + 64),
                               (__int64)CudaDriverStub_226ef0, 0);
      result = v1;
    }
    *(_QWORD*)(result + 64) = 0;
    *(_OWORD*)result = 0u;
    *(_OWORD*)(result + 16) = 0u;
    *(_OWORD*)(result + 32) = 0u;
    *(_OWORD*)(result + 48) = 0u;
    return CudaDriverRoutine_12e340(result);
  }
  return result;
}

__int64 zstd_decompress_226fc0(__int64 a1)
{
  int v1;
  __int64 v2;
  _QWORD* v3;
  unsigned int* v4;
  int v5;
  unsigned int* v6;
  int v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  bool v16;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int16* v35;
  __int64 v36;
  unsigned int v37;
  unsigned int* v38;
  char v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned int* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int* v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned int* v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int* v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  bool v69;
  __int64 v70;
  _QWORD* v71;
  unsigned int v72;
  __int64 v73;
  __int64 v75;
  unsigned __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;

  v1 = *(unsigned __int16*)(a1 + 60);
  v2 = a1;
  if (*(_WORD*)(a1 + 60) != 0) {
    v3 = (_QWORD*)(a1 + 40);
    v4 = (unsigned int*)(a1 + *(_QWORD*)(a1 + 40));
    v5 = *(unsigned __int16*)(a1 + 60);
    v6 = v4;
    while (v6[1] != 2) {
      v6 += 16;
      if (--v5 == 0) {
        v6 = nullptr;
        break;
      }
    }
    v7 = *(unsigned __int16*)(a1 + 60);
    v8 = *(unsigned __int16*)(a1 + 60);
  }
  else {
    v3 = (_QWORD*)(a1 + 40);
    v4 = (unsigned int*)(a1 + *(_QWORD*)(a1 + 40));
    v8 = *((_QWORD*)v4 + 4);
    if (v8 == 0) {
      return 5;
    }
    v17 = 1;
    v6 = (unsigned int*)(a1 + *(_QWORD*)(a1 + 40));
    while (v6[1] != 2) {
      v6 += 16;
      v16 = v8 > v17++;
      if (!v16) {
        v7 = 0;
        v6 = nullptr;
        goto LABEL_7;
      }
    }
    v7 = 0;
  }
LABEL_7:
  v76 = v8;
  if (*(_WORD*)(a1 + 60) == 0) {
    v18 = *((_QWORD*)v4 + 4);
    if (v18 != 0) {
      v9 = *(unsigned __int16*)(a1 + 58);
      v19 = 1;
      v11 = v4;
      v71 = v3;
      v77 = *(unsigned __int16*)(a1 + 62);
      v20 =
          a1 + *(_QWORD*)((char*)v4 +
                          *(unsigned __int16*)(a1 + 58) *
                              (unsigned __int64)*(unsigned __int16*)(a1 + 62) +
                          24);
      do {
        if ((unsigned int)strcmp_plt(v20 + *v11, ".shstrtab") == 0) {
          v2 = a1;
          goto LABEL_12;
        }
        v11 += 16;
        v16 = v18 > v19++;
      } while (v16);
      v2 = a1;
      v11 = nullptr;
    LABEL_27:
      if (v1 != 0) {
        goto LABEL_28;
      }
    LABEL_12:
      v13 = *((_QWORD*)v4 + 4);
      if (v13 != 0) {
        v14 = 1;
        v15 = v2 +
              *(_QWORD*)((char*)v4 +
                         *(unsigned __int16*)(v2 + 58) *
                             (unsigned __int64)*(unsigned __int16*)(v2 + 62) +
                         24);
        while ((unsigned int)strcmp_plt(v15 + *v4, ".strtab") != 0) {
          v4 += 16;
          v16 = v13 > v14++;
          if (!v16) {
            return 5;
          }
        }
        goto LABEL_33;
      }
    }
    return 5;
  }
  v9 = *(unsigned __int16*)(a1 + 58);
  v71 = v3;
  v10 = v7;
  v11 = v4;
  v77 = *(unsigned __int16*)(a1 + 62);
  v12 = a1 + *(_QWORD*)((char*)v4 +
                        *(unsigned __int16*)(a1 + 58) *
                            (unsigned __int64)*(unsigned __int16*)(a1 + 62) +
                        24);
  do {
    if ((unsigned int)strcmp_plt(v12 + *v11, ".shstrtab") == 0) {
      goto LABEL_27;
    }
    v11 += 16;
    --v10;
  } while (v10 != 0);
  v11 = nullptr;
LABEL_28:
  v21 = v2 + *(_QWORD*)((char*)v4 + v9 * (unsigned __int64)v77 + 24);
  while ((unsigned int)strcmp_plt(v21 + *v4, ".strtab") != 0) {
    v4 += 16;
    if (--v7 == 0) {
      return 5;
    }
  }
LABEL_33:
  result = 5;
  if (v11 != nullptr && v6 != nullptr) {
    v23 = *((_QWORD*)v6 + 7);
    if (v23 != 0) {
      v25 = *((_QWORD*)v6 + 3);
      v24 = *((_QWORD*)v6 + 4);
      v26 = *((_QWORD*)v11 + 3);
      v27 = *((_QWORD*)v4 + 3);
      v28 = CudaDriverRoutine_12e510(v76, 4);
      if (v28 != 0) {
        v29 = v28;
        v75 = v2;
        if (v23 > v24) {
        LABEL_38:
          CudaDriverRoutine_12e340(v29);
          return 0;
        }
        LODWORD(v30) = 0;
        v31 = v2 + v25;
        v32 = v2 + v26;
        v33 = v25 + v75;
        v34 = v24 / v23;
        v35 = (unsigned __int16*)(v33 + 6);
        v73 = v75 + v27;
        do {
          if ((*(_BYTE*)(v35 - 1) & 0xF) == 3) {
            *(_DWORD*)(v28 + 4LL * *v35) = v30;
          }
          v30 = (unsigned int)(v30 + 1);
          v35 += 12;
        } while (v34 > v30);
        v36 = 0;
        v37 = 0;
        v70 = v75 + 32;
        while (1) {
          v38 = (unsigned int*)(v31 + 24 * v36);
          if ((*((_BYTE*)v38 + 5) & 8) == 0) {
            goto LABEL_48;
          }
          v39 = *((_BYTE*)v38 + 4);
          v40 = *v38;
          v78 = *((unsigned __int16*)v38 + 3);
          if ((_DWORD)v40 != 0) {
            v41 = strlen_plt(v73 + v40);
            strncpy_plt(v73 + v40, ".hidden", v41 + 1);
          }
          *(_QWORD*)v38 = 0;
          *((_QWORD*)v38 + 1) = 0;
          *((_QWORD*)v38 + 2) = 0;
          *((_BYTE*)v38 + 4) = v39;
          *v38 = v40;
          v42 = v76;
          if ((_DWORD)v78 == 0) {
            goto LABEL_48;
          }
          v43 = *(unsigned __int16*)(v75 + 60);
          if (*(_WORD*)(v75 + 60) == 0) {
            v43 = *(_QWORD*)(v70 + *v71);
          }
          if (v43 > v78) {
            v44 = (unsigned int*)(v75 + *(_QWORD*)(v75 + 40) +
                                  *(unsigned __int16*)(v75 + 58) *
                                      (unsigned int)v78);
            if (v44 != nullptr) {
              v45 = *v44;
              if ((_DWORD)v45 != 0) {
                v46 = strlen_plt(v32 + v45);
                strncpy_plt(v32 + v45, ".hidden", v46 + 1);
              }
              if (v44[1] != 8) {
                v47 = *((_QWORD*)v44 + 4);
                if (v47 != 0) {
                  memset_plt(v75 + *((_QWORD*)v44 + 3), 0, v47);
                }
              }
              *(_OWORD*)v44 = 0u;
              *((_OWORD*)v44 + 1) = 0u;
              *((_OWORD*)v44 + 2) = 0u;
              *((_OWORD*)v44 + 3) = 0u;
              *v44 = v45;
            }
          }
          v48 = (unsigned int*)(v31 + 24LL * *(unsigned int*)(v29 + 4 * v78));
          if (*((unsigned __int16*)v48 + 3) == (_DWORD)v78) {
            v49 = *((_BYTE*)v48 + 4);
            v50 = *v48;
            if ((_DWORD)v50 != 0) {
              v51 = strlen_plt(v73 + v50);
              strncpy_plt(v73 + v50, ".hidden", v51 + 1);
            }
            *(_QWORD*)v48 = 0;
            *((_QWORD*)v48 + 1) = 0;
            *v48 = v50;
            v42 = v76;
            *((_QWORD*)v48 + 2) = 0;
            *((_BYTE*)v48 + 4) = v49;
          }
          v52 = *(_QWORD*)(v75 + 40);
          if (*(_WORD*)(v75 + 60) == 0) {
            break;
          }
          v53 = v78;
          v54 = (unsigned int*)(v75 + v52);
          if (v75 + v52 != 0) {
            goto LABEL_72;
          }
        LABEL_48:
          v36 = ++v37;
          if (v34 <= v37) {
            goto LABEL_38;
          }
        }
        v53 = v78;
        if (*(_QWORD*)(v70 + v52) == 0) {
          goto LABEL_48;
        }
        v54 = (unsigned int*)(v75 + v52);
        if (v75 + v52 == 0) {
          goto LABEL_48;
        }
      LABEL_72:
        v55 = 0;
        v56 = 0;
        v72 = v37;
        while (1) {
          if (v54[11] == v53) {
            v57 = v54[1];
            if (v57 == 4 || v57 == 9 || v57 == 1879048192) {
            LABEL_84:
              v60 =
                  (unsigned int*)(v31 + 24LL * *(unsigned int*)(v29 + 4 * v55));
              if (v56 == *((unsigned __int16*)v60 + 3)) {
                v61 = *((_BYTE*)v60 + 4);
                v62 = *v60;
                if ((_DWORD)v62 != 0) {
                  v63 = strlen_plt(v73 + v62);
                  v37 = v72;
                  strncpy_plt(v73 + v62, ".hidden", v63 + 1);
                }
                *(_QWORD*)v60 = 0;
                *((_QWORD*)v60 + 1) = 0;
                *v60 = v62;
                v42 = v76;
                *((_QWORD*)v60 + 2) = 0;
                *((_BYTE*)v60 + 4) = v61;
              }
              v64 = *v54;
              if ((_DWORD)v64 != 0) {
                v65 = strlen_plt(v32 + v64);
                strncpy_plt(v32 + v64, ".hidden", v65 + 1);
              }
              v53 = v78;
              if (v54[1] != 8) {
                v66 = *((_QWORD*)v54 + 4);
                if (v66 != 0) {
                  memset_plt(v75 + *((_QWORD*)v54 + 3), 0, v66);
                }
              }
              *(_OWORD*)v54 = 0u;
              *((_OWORD*)v54 + 1) = 0u;
              *((_OWORD*)v54 + 2) = 0u;
              *((_OWORD*)v54 + 3) = 0u;
              *v54 = v64;
              goto LABEL_74;
            }
            v67 = v54[10];
            if (v57 == 1 && v67 == 0) {
              if ((unsigned int)strncmp_plt(v32 + *v54, ".nv.constant", 12) ==
                  0) {
                goto LABEL_84;
              }
            }
            else {
              v69 = v57 == 8 && v67 == 0;
              if (v69 && (unsigned int)strncmp_plt(v32 + *v54, ".nv.shared.",
                                                   11) == 0) {
                goto LABEL_84;
              }
            }
          }
        LABEL_74:
          v54 += 16;
          v55 = ++v56;
          if (v42 <= v56) {
            goto LABEL_48;
          }
        }
      }
      return 3;
    }
    else {
      return 4;
    }
  }
  return result;
}

__int64 zstd_decompress_227620(__int64 a1, _QWORD* a2)
{
  int v2;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int8* v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  _BYTE* v24;
  int v25;
  int v26;
  unsigned __int8* v27;
  int v28;
  int v29;
  unsigned __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned int v46;
  unsigned int v47;
  _QWORD* v48;
  unsigned int v49;
  unsigned __int8* v50;

  if (a2 == nullptr) {
    return 2;
  }
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if (*(_BYTE*)a1 != 127 || *(_BYTE*)(a1 + 1) != 69 ||
      *(_BYTE*)(a1 + 2) != 76 || *(_BYTE*)(a1 + 3) != 70) {
    return 4;
  }
  v2 = *(unsigned __int16*)(a1 + 60);
  v4 = (unsigned int*)(a1 + *(_QWORD*)(a1 + 40));
  if (*(_WORD*)(a1 + 60) != 0) {
    v5 = a1;
    v6 = a1 + *(_QWORD*)((char*)v4 +
                         *(unsigned __int16*)(a1 + 58) *
                             (unsigned __int64)*(unsigned __int16*)(a1 + 62) +
                         24);
    while ((unsigned int)strcmp_plt(v6 + *v4, ".debug_frame") != 0) {
      v4 += 16;
      --v2;
      result = 5;
      if (v2 == 0) {
        return result;
      }
    }
  }
  else {
    v8 = *((_QWORD*)v4 + 4);
    if (v8 == 0) {
      return 5;
    }
    v9 = 1;
    v5 = a1;
    v10 = a1 + *(_QWORD*)((char*)v4 +
                          *(unsigned __int16*)(a1 + 58) *
                              (unsigned __int64)*(unsigned __int16*)(a1 + 62) +
                          24);
    while ((unsigned int)strcmp_plt(v10 + *v4, ".debug_frame") != 0) {
      v4 += 16;
      v11 = v8 > v9++;
      result = 5;
      if (!v11) {
        return result;
      }
    }
  }
  result = CudaDriverRoutine_223120(a2 + 1);
  if ((_DWORD)result == 0) {
    v12 = *((_QWORD*)v4 + 4);
    v13 = (unsigned int*)(v5 + *((_QWORD*)v4 + 3));
    *a2 = (char*)v13 + v12;
    if (v12 == 0) {
      return 0;
    }
    v14 = v13;
    while (1) {
      v15 = CudaDriverRoutine_12e510(1, 72);
      if (v15 == 0) {
        break;
      }
      v16 = v15;
      *(_QWORD*)v15 = v14;
      *(_QWORD*)(v15 + 8) = (unsigned int)((_DWORD)v14 - (_DWORD)v13);
      v17 = *v14;
      *(_DWORD*)(v15 + 24) = v17;
      if ((_DWORD)v17 == -1) {
        v20 = *(_QWORD*)(v14 + 1);
        v21 = (unsigned int)v20;
        *(_DWORD*)(v15 + 24) = v20;
        *(_QWORD*)(v15 + 16) = (char*)v14 + (unsigned int)v20 + 12;
        if ((unsigned int)v20 <= 7uLL) {
          goto LABEL_81;
        }
        v23 = *(_QWORD*)(v14 + 3);
        v22 = v14 + 3;
        v19 = (unsigned __int8*)(v22 + 2);
        v50 = (unsigned __int8*)(v22 + 2);
        if (v23 != -1) {
          goto LABEL_82;
        }
        v14 = (unsigned int*)((char*)v22 + v21);
      }
      else {
        *(_QWORD*)(v15 + 16) = (char*)v14 + v17 + 4;
        if ((unsigned int)v17 <= 3) {
          goto LABEL_81;
        }
        v18 = v14[1];
        v19 = (unsigned __int8*)(v14 + 2);
        v50 = (unsigned __int8*)(v14 + 2);
        if (v18 != -1) {
          goto LABEL_82;
        }
        v14 = (unsigned int*)((char*)v14 + v17 + 4);
      }
      v24 = v19 + 1;
      if (v19 + 1 > (unsigned __int8*)v14) {
      LABEL_81:
        v50 = nullptr;
      LABEL_82:
        if (*(_QWORD*)(v16 + 64) != 0) {
          CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64),
                                   (__int64)CudaDriverStub_226ef0, 0);
        }
        *(_QWORD*)(v16 + 64) = 0;
        *(_OWORD*)v16 = 0u;
        *(_OWORD*)(v16 + 16) = 0u;
        *(_OWORD*)(v16 + 32) = 0u;
        *(_OWORD*)(v16 + 48) = 0u;
        CudaDriverRoutine_12e340(v16);
        result = 1;
        v48 = a2;
        if (a2[1] != 0) {
        LABEL_85:
          v49 = result;
          CudaDriverRoutine_2231b0(v48 + 1, (__int64)zstd_decompress_226f60, 0);
          result = v49;
          v48 = a2;
        }
      LABEL_86:
        *v48 = 0;
        v48[1] = 0;
        v48[2] = 0;
        return result;
      }
      v25 = *v19;
      v50 = v19 + 1;
      if ((v25 & 0xFFFFFFFD) != 1) {
        goto LABEL_82;
      }
      if (*v24 != 0) {
        v24 += strlen_plt(v24);
      }
      v50 = v24 + 1;
      *(_DWORD*)(v16 + 28) = CudaDriverRoutine_2244b0(&v50);
      v26 = CudaDriverRoutine_224560(&v50);
      v27 = v50;
      *(_DWORD*)(v16 + 32) = v26;
      if (v27 > (unsigned __int8*)v14) {
        goto LABEL_82;
      }
      if (v25 == 3) {
        v29 = CudaDriverRoutine_2244b0(&v50);
        v27 = v50;
        *(_DWORD*)(v16 + 36) = v29;
      }
      else if (v25 == 1) {
        if (v27 != nullptr) {
          if (v27 + 1 <= (unsigned __int8*)v14) {
            v28 = *v27++;
          }
          else {
            v28 = 0;
            v27 = nullptr;
          }
        }
        else {
          v28 = 0;
        }
        v50 = v27;
        *(_DWORD*)(v16 + 36) = v28;
      }
      if (v27 > (unsigned __int8*)v14) {
        goto LABEL_82;
      }
      *(_QWORD*)(v16 + 40) = v27;
      if ((unsigned int)CudaDriverRoutine_223120((_QWORD*)(v16 + 64)) != 0) {
        goto LABEL_82;
      }
      *(_QWORD*)(v16 + 48) = 0;
      *(_QWORD*)(v16 + 56) = 0;
      v30 = (unsigned __int64*)(v16 + 48);
      if ((unsigned __int64)v14 < *a2) {
        while (1) {
          v31 = CudaDriverRoutine_12e510(1, 48);
          if (v31 == 0) {
            goto LABEL_82;
          }
          *(_QWORD*)v31 = v14;
          v32 = v31;
          v33 = *v14;
          *(_DWORD*)(v31 + 16) = v33;
          if ((_DWORD)v33 == -1) {
            v36 = *(_QWORD*)(v14 + 1);
            v37 = (unsigned int)v36;
            *(_DWORD*)(v31 + 16) = v36;
            v34 = (unsigned __int64)v14 + (unsigned int)v36 + 12;
            *(_QWORD*)(v31 + 8) = v34;
            if (v37 < 8) {
              goto LABEL_62;
            }
            if (*(_QWORD*)(v14 + 3) == -1) {
            LABEL_70:
              CudaDriverRoutine_12e340(v31);
              v41 = *(_QWORD*)(v16 + 48);
              v43 = *(_QWORD*)(v16 + 56);
              v44 = a2;
            LABEL_71:
              if (v43 == v41) {
                break;
              }
              v46 = ZSTD_DCtx_loadDictionary_byReference(v44[1], v41, v43 - v41,
                                                         v16);
              if (v46 == 0) {
                goto LABEL_49;
              }
              v47 = v46;
              if (*(_QWORD*)(v16 + 64) != 0) {
                CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64),
                                         (__int64)CudaDriverStub_226ef0, 0);
              }
              *(_QWORD*)(v16 + 64) = 0;
              *(_OWORD*)v16 = 0u;
              *(_OWORD*)(v16 + 16) = 0u;
              *(_OWORD*)(v16 + 32) = 0u;
              *(_OWORD*)(v16 + 48) = 0u;
              CudaDriverRoutine_12e340(v16);
              if (v47 == 8) {
                goto LABEL_49;
              }
              result = v47;
              v48 = a2;
              if (a2[1] != 0) {
                goto LABEL_85;
              }
              goto LABEL_86;
            }
            v35 = (__int64*)(v14 + 5);
          }
          else {
            v34 = (unsigned __int64)v14 + v33 + 4;
            *(_QWORD*)(v31 + 8) = v34;
            if ((unsigned int)v33 < 4) {
              goto LABEL_62;
            }
            if (v14[1] == -1) {
              goto LABEL_70;
            }
            v35 = (__int64*)(v14 + 2);
          }
          v38 = v35 + 1;
          if ((unsigned __int64)(v35 + 1) > v34 ||
              (v40 = *v35, v39 = v35 + 2, *(_QWORD*)(v31 + 24) = v40,
               (unsigned __int64)v39 > v34)) {
          LABEL_62:
            v39 = nullptr;
            goto LABEL_63;
          }
          *(_QWORD*)(v31 + 32) = *v38;
        LABEL_63:
          *(_QWORD*)(v31 + 40) = v39;
          v14 = (unsigned int*)v34;
          if ((unsigned int)ZSTD_DCtx_loadDictionary_byReference(
                  *(_QWORD*)(v16 + 64), *(_QWORD*)(v31 + 24),
                  *(_QWORD*)(v31 + 32), v31) != 0) {
            CudaDriverRoutine_12e340(v32);
            goto LABEL_82;
          }
          v41 = *v30;
          v42 = *(_QWORD*)(v32 + 24);
          if (*v30 - 1 >= v42) {
            *v30 = v42;
            v41 = v42;
            v43 = *(_QWORD*)(v16 + 56);
            v44 = a2;
            v45 = *(_QWORD*)(v32 + 32) + *(_QWORD*)(v32 + 24);
            if (v43 < v45) {
            LABEL_68:
              *(_QWORD*)(v16 + 56) = v45;
              v43 = v45;
            }
          }
          else {
            v43 = *(_QWORD*)(v16 + 56);
            v44 = a2;
            v45 = *(_QWORD*)(v32 + 32) + v42;
            if (v43 < v45) {
              goto LABEL_68;
            }
          }
          if ((unsigned __int64)v14 >= *v44) {
            goto LABEL_71;
          }
        }
      }
      if (*(_QWORD*)(v16 + 64) != 0) {
        CudaDriverRoutine_2231b0((_QWORD*)(v16 + 64),
                                 (__int64)CudaDriverStub_226ef0, 0);
      }
      *(_QWORD*)(v16 + 64) = 0;
      *(_OWORD*)v16 = 0u;
      *(_OWORD*)(v16 + 16) = 0u;
      *(_OWORD*)(v16 + 32) = 0u;
      *(_OWORD*)(v16 + 48) = 0u;
      CudaDriverRoutine_12e340(v16);
    LABEL_49:
      result = 0;
      if ((unsigned __int64)v14 >= *a2) {
        return result;
      }
    }
    result = 3;
    v48 = a2;
    if (a2[1] != 0) {
      goto LABEL_85;
    }
    goto LABEL_86;
  }
  return result;
}

__int64 zstd_decompress_227ba0(_QWORD* a1)
{
  __int64 v2;

  if (a1 == nullptr) {
    return 2;
  }
  do {
    while (1) {
      v2 = *a1;
      if (HIDWORD(*a1) != 0) {
        break;
      }
      if (v2 == CudaDriverRoutine_12dd50(a1, (unsigned int)(v2 + 1), *a1)) {
        return 0;
      }
    }
  } while (v2 != 0);
  return 0;
}

__int64 zstd_decompress_227c10(__int64 a1)
{
  if (a1 == 0) {
    return 2;
  }
  if ((unsigned int)CudaDriverRoutine_12dec0() == -1) {
    return 13;
  }
  return 0;
}

__int64 zstd_decompress_227c40(_DWORD* a1)
{
  if (a1 == nullptr) {
    return 2;
  }
  while ((unsigned int)CudaDriverStub_12dd40(a1 + 1, 1, 0) != 0)
    ;
  while (*a1 != 0)
    ;
  return 0;
}

__int64 ZSTD_initDStream_usingDDict(__int64 a1)
{
  if (a1 == 0) {
    return 2;
  }
  if (CudaDriverRoutine_12dd50(a1, 0, 0x100000000LL) == 0x100000000LL) {
    return 0;
  }
  return 14;
}

__int64 ZSTD_DCtx_setMaxWindowSize(_DWORD* a1, _DWORD* a2)
{
  __int64 result;

  result = 2;
  if (a1 != nullptr && a2 != nullptr) {
    *a2 = 0;
    if (a1[1] != 0 || *a1 != 0) {
      result = 0;
      *a2 = 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

_QWORD* zstd_decompress_227d40(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _BYTE* v4;

  if (result != nullptr) {
    v1 = result;
    result = (_QWORD*)CudaDriverStub_12e330(24);
    if (result != nullptr) {
      *result = 0;
      result[1] = v1;
      v2 = v1;
      v3 = result;
      v4 = (_BYTE*)CudaDriverStub_12e330(v2);
      result = v3;
      v3[2] = v4;
      if (v4 != nullptr) {
        *v4 = 0;
        *v3 = 1;
      }
      else {
        CudaDriverRoutine_12e340(v3);
        return nullptr;
      }
    }
  }
  return result;
}

__int64 ZSTD_sizeof_DStream(_QWORD* a1)
{
  _QWORD* v1;

  if (a1 != nullptr) {
    if (a1[2] != 0) {
      v1 = a1;
      CudaDriverRoutine_12e340(a1[2]);
      a1 = v1;
    }
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    CudaDriverRoutine_12e340(a1);
  }
  return 0;
}

unsigned __int64 ZSTD_decompressMultiFrame(__int64 a1, char* a2, __int64 a3,
                                           unsigned __int8* a4,
                                           unsigned __int64 a5, _DWORD* a6,
                                           unsigned __int64 a7, __int64 a8)
{
  unsigned __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  char* v14;
  unsigned __int64 result;
  __int128 v16;
  _DWORD* v17;
  _DWORD* v18;
  _OWORD* v19;
  char v20;
  __int64 v21;
  char* v22;
  _QWORD* v23;
  bool v24;
  _OWORD* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  unsigned __int8* v40;
  char* v41;
  unsigned __int8* v42;
  _DWORD* v43;
  _DWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  _BOOL4 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _DWORD* v59;
  char* v60;
  unsigned __int8* v61;
  unsigned __int64 v62;
  __int128 v63;
  int v64;
  int v65;
  unsigned __int8* v66;
  unsigned __int8* v67;
  unsigned int v68;
  unsigned __int8* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  unsigned __int64 v73;
  unsigned int v74;
  unsigned __int64 v75;
  unsigned __int8* v76;
  bool v77;
  char* v78;
  unsigned __int8* v79;
  __int64 v80;
  int v81;
  __int64 v82;
  _DWORD* v83;
  char* v84;
  char v85;
  unsigned __int64 v86;
  _DWORD* v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _OWORD* v94;
  __int64 v95;
  _OWORD* v96;
  _DWORD* v97;
  char* v98;
  _QWORD* v99;
  __int64 v100;
  unsigned __int8* v101;
  __int64 v102;

  v9 = a5;
  v11 = a1 + 26684;
  if (a8 != 0) {
    a6 = *(_DWORD**)(a8 + 8);
    a7 = *(_QWORD*)(a8 + 16);
  }
  v12 = 5;
  v13 = *(_DWORD*)(a1 + 30104) == 0;
  if (*(_DWORD*)(a1 + 30104) != 0) {
    v12 = 1;
  }
  if (a5 < v12) {
    v14 = a2;
  LABEL_7:
    if (v9 != 0) {
      return -72;
    }
    else {
      return v14 - a2;
    }
  }
  v16 = (__typeof__(v16)){0};
  v17 = (_DWORD*)(a8 + 24576);
  v18 = (_DWORD*)(a1 + 32);
  v19 = (_OWORD*)(a1 + 29992);
  v20 = 0;
  v21 = a8 + 24;
  v22 = (char*)a6 + a7;
  v23 = (_QWORD*)(a1 + 29976);
  v24 = a7 == 0 || a6 == nullptr;
  v25 = (_OWORD*)(a1 + 29888);
  v26 = !v24;
  v27 = a1 + 10296;
  v28 = a1 + 6192;
  v29 = a1 + 4136;
  v30 = a8 + 6184;
  v31 = a8 + 4128;
  v32 = a8 + 10288;
  v102 = a1 + 30008;
  v14 = a2;
LABEL_17:
  v101 = (unsigned __int8*)v14;
  if (!v13) {
  LABEL_27:
    v99 = v23;
    v100 = a3;
    v96 = v25;
    v97 = v17;
    v94 = v19;
    v95 = v27;
    v93 = v28;
    v91 = v30;
    v92 = v21;
    v89 = v32;
    v90 = v31;
    v88 = v26;
    v98 = v22;
    if (a8 != 0) {
      v35 = *(_QWORD*)(a8 + 8);
      v36 = *(_QWORD*)(a8 + 16);
      *(_QWORD*)(a1 + 29920) = v12;
      *v23 = 0;
      v23[1] = 0;
      *(_DWORD*)(v11 + 3516) = 0;
      v37 = v35 + v36;
      v38 = *(_QWORD*)(a1 + 29912);
      *(_DWORD*)(a1 + 10296) = 201326604;
      *(_DWORD*)(v11 + 3492) = 1;
      *v25 = v16;
      v25[1] = v16;
      *(_QWORD*)v11 = 0x400000001LL;
      *v19 = CudaDriverData_1116050;
      *(_DWORD*)(v11 + 8) = 8;
      *(_QWORD*)a1 = v18;
      *(_QWORD*)(a1 + 8) = v28;
      *(_QWORD*)(a1 + 16) = v29;
      *(_QWORD*)(a1 + 24) = v27;
      *(_DWORD*)(v11 + 3520) = v38 != v37;
      *(_DWORD*)(v11 + 3516) = v17[685];
      v39 = *(char**)(a8 + 8);
      *(_QWORD*)(a1 + 29896) = v39;
      *(_QWORD*)(a1 + 29904) = v39;
      v40 = (unsigned __int8*)(*(_QWORD*)(a8 + 8) + *(_QWORD*)(a8 + 16));
      *(_QWORD*)(a1 + 29912) = v40;
      *(_QWORD*)(a1 + 29888) = v40;
      if (v17[686] != 0) {
        *(_QWORD*)(a1 + 30000) = 0x100000001LL;
        *(_QWORD*)a1 = v21;
        *(_QWORD*)(a1 + 8) = v30;
        *(_QWORD*)(a1 + 16) = v31;
        *(_QWORD*)(a1 + 24) = v32;
        *(_DWORD*)v11 = v17[525];
        *(_DWORD*)(v11 + 4) = v17[526];
        *(_DWORD*)(v11 + 8) = v17[527];
        if (a3 == 0) {
          goto LABEL_40;
        }
        goto LABEL_38;
      }
      *(_QWORD*)(a1 + 30000) = 0;
    }
    else {
      *(_QWORD*)(a1 + 29920) = v12;
      *v25 = v16;
      v25[1] = v16;
      v39 = nullptr;
      v40 = nullptr;
      *v23 = 0;
      v23[1] = 0;
      *(_DWORD*)(v11 + 3516) = 0;
      *(_QWORD*)a1 = v18;
      *(_QWORD*)(a1 + 8) = v28;
      *(_QWORD*)(a1 + 16) = v29;
      *(_QWORD*)(a1 + 24) = v27;
      *(_DWORD*)(a1 + 10296) = 201326604;
      *(_DWORD*)(v11 + 3492) = 1;
      *(_QWORD*)v11 = 0x400000001LL;
      *v19 = CudaDriverData_1116050;
      *(_DWORD*)(v11 + 8) = 8;
      if (v26 != 0) {
        if (a7 >= 8 && *a6 == -332356553) {
          v41 = a2;
          v42 = a4;
          v43 = v18;
          v44 = a6;
          v45 = a7;
          *(_DWORD*)(v11 + 3516) = a6[1];
          v46 = zstd_decompress_block_252cb0(v18, (__int64)a6, a7);
          if (v46 > 0xFFFFFFFFFFFFFF88LL) {
            return -30;
          }
          v47 = *(_QWORD*)(a1 + 29888);
          v48 = *(_QWORD*)(a1 + 29896);
          a7 = v45;
          a3 = v100;
          v39 = (char*)v44 + v46;
          a6 = v44;
          a4 = v42;
          a2 = v41;
          v18 = v43;
          v22 = v98;
          *(_QWORD*)(a1 + 30000) = 0x100000001LL;
        }
        else {
          v48 = 0;
          v47 = 0;
          v39 = (char*)a6;
        }
        v82 = v48 - v47;
        *(_QWORD*)(a1 + 29912) = v47;
        *(_QWORD*)(a1 + 29896) = v39;
        v40 = (unsigned __int8*)v22;
        *(_QWORD*)(a1 + 29888) = v22;
        *(_QWORD*)(a1 + 29904) = &v39[v82];
        if (a3 == 0) {
        LABEL_40:
          v49 = *(_DWORD*)(v11 + 3420);
          v50 = 9;
          if (v49 != 0) {
            v50 = 5;
          }
          if (v9 < v50) {
            return -72;
          }
          v87 = v18;
          v85 = v20;
          if (v49 != 0) {
            v51 = 1;
          }
          else {
            v51 = 5;
          }
          v52 = a4[v51 - 1];
          v53 = v52 >> 6;
          v54 = CudaDriverData_1131ae8[v52 & 3];
          v55 = (unsigned int)v52 < 0x40;
          LODWORD(v52) = v52 & 0x20;
          v24 = (_DWORD)v52 == 0;
          v56 = v55 & ((unsigned int)v52 >> 5);
          v57 = v54 + v51 + CudaDriverData_1131c28[v53];
          if (v24) {
            ++v57;
          }
          v58 = v57 + v56;
          if ((unsigned __int64)(v57 + v56) <= 0xFFFFFFFFFFFFFF88LL) {
            if (v9 < v58 + 3) {
              return -72;
            }
            v86 = a7;
            v59 = a6;
            v60 = a2;
            v61 = a4;
            v62 = ZSTD_getFrameHeader_advanced(a1 + 29928, a4, v58, v49);
            if (v62 <= 0xFFFFFFFFFFFFFF88LL) {
              v63 = (__typeof__(v63)){0};
              if (v62 == 0) {
                if (*(_DWORD*)(v11 + 3540) == 1 &&
                    *(_QWORD*)(a1 + 30216) != 0) {
                  zstd_decompress_block_2534c0(a1);
                  v63 = (__typeof__(v63)){0};
                }
                v64 = *(_DWORD*)(v11 + 3272);
                if (v64 != 0 && *(_DWORD*)(v11 + 3516) != v64) {
                  return -32;
                }
                if (*(_DWORD*)(v11 + 3276) != 0) {
                  v65 = *(_DWORD*)(v11 + 3424);
                  v66 = v101;
                  v67 = v61;
                  *(_DWORD*)(v11 + 3428) = v65 == 0;
                  if (v65 == 0) {
                    *(_OWORD*)(v102 + 16) = v63;
                    *(_OWORD*)(v102 + 32) = v63;
                    *(_OWORD*)(v102 + 48) = v63;
                    *(_OWORD*)(v102 + 64) = v63;
                    *(_OWORD*)v102 = v63;
                    *(_QWORD*)(v102 + 80) = 0;
                    *(_QWORD*)(a1 + 30040) = 0x61C8864E7A143579LL;
                    *(_OWORD*)(a1 + 30016) = CudaDriverData_1115d50;
                  }
                }
                else {
                  v66 = v101;
                  *(_DWORD*)(v11 + 3428) = 0;
                  v67 = v61;
                }
                v83 = v59;
                v84 = v60;
                *v99 += v58;
                v68 = *(_DWORD*)(v11 + 3548);
                if (v68 != 0) {
                  if (*(_DWORD*)(v11 + 3260) < v68) {
                    v68 = *(_DWORD*)(v11 + 3260);
                  }
                  *(_DWORD*)(v11 + 3260) = v68;
                }
                a4 = &v67[v58];
                v9 -= v58;
                v69 = v66;
                v70 = (unsigned __int64)&v66[v100];
                while (1) {
                  v71 = v9 - 3;
                  if (v9 < 3) {
                    return -72;
                  }
                  v72 = *(unsigned __int16*)a4;
                  v73 = ((unsigned __int64)*(unsigned __int16*)a4 >> 1) & 3;
                  v74 = v72 | (a4[2] << 16);
                  v75 = v73;
                  v58 = v74 >> 3;
                  if ((_DWORD)v73 != 1) {
                    if ((_DWORD)v73 == 3) {
                      return -20;
                    }
                    v75 = v74 >> 3;
                  }
                  v9 = v71 - v75;
                  if (v71 < v75) {
                    return -72;
                  }
                  v76 = a4 + 3;
                  v77 = (unsigned __int64)(a4 + 3) < v70 && v76 >= v69;
                  if (v77) {
                    v78 = (char*)(a4 + 3);
                  }
                  else {
                    v78 = (char*)v70;
                  }
                  if ((_DWORD)v73 == 2) {
                    v58 = ZSTD_decompressBlock_internal(
                        a1, (unsigned __int64)v69, v78 - (char*)v69,
                        (__int64)(a4 + 3), v75);
                    if (v58 > 0xFFFFFFFFFFFFFF88LL) {
                      goto LABEL_121;
                    }
                    if (*(_DWORD*)(v11 + 3428) == 0) {
                      goto LABEL_66;
                    }
                  }
                  else if ((_DWORD)v73 == 1) {
                    if (v78 - (char*)v69 < v58) {
                      return -70;
                    }
                    if (v69 != nullptr) {
                      memset_plt(v69, *v76, v74 >> 3);
                      if (*(_DWORD*)(v11 + 3428) == 0) {
                        goto LABEL_66;
                      }
                    }
                    else {
                      if (v74 >= 8) {
                        return -74;
                      }
                      v58 = 0;
                      if (*(_DWORD*)(v11 + 3428) == 0) {
                        goto LABEL_66;
                      }
                    }
                  }
                  else {
                    if (v75 > v70 - (unsigned __int64)v69) {
                      return -70;
                    }
                    if (v69 != nullptr) {
                      memmove_plt(v69, a4 + 3, v75);
                      v58 = v75;
                      if (*(_DWORD*)(v11 + 3428) == 0) {
                        goto LABEL_66;
                      }
                    }
                    else {
                      if (v75 != 0) {
                        return -74;
                      }
                      v58 = 0;
                      if (*(_DWORD*)(v11 + 3428) == 0) {
                        goto LABEL_66;
                      }
                    }
                  }
                  XXH64_update(v102, v69, v58);
                LABEL_66:
                  v16 = (__typeof__(v16)){0};
                  v69 += v58;
                  a4 = &v76[v75];
                  if ((v72 & 1) != 0) {
                    v79 = v101;
                    v80 = *(_QWORD*)(a1 + 29928);
                    v58 = v69 - v101;
                    if (v80 != -1 && v58 != v80) {
                      return -20;
                    }
                    if (*(_DWORD*)(v11 + 3276) != 0) {
                      a6 = v83;
                      a2 = v84;
                      a7 = v86;
                      v77 = v9 >= 4;
                      v9 -= 4LL;
                      v22 = v98;
                      if (!v77) {
                        return -22;
                      }
                      if (*(_DWORD*)(v11 + 3424) == 0) {
                        v81 = XXH64_digest((_QWORD*)v102);
                        v79 = v101;
                        v16 = (__typeof__(v16)){0};
                        a6 = v83;
                        v22 = v98;
                        a7 = v86;
                        a2 = v84;
                        a4 = &v76[v75];
                        if (*(_DWORD*)&v76[v75] != v81) {
                          return -22;
                        }
                      }
                      a4 += 4;
                    }
                    else {
                      a6 = v83;
                      a2 = v84;
                      a7 = v86;
                      v22 = v98;
                    }
                    v23 = v99;
                    if (v58 >= 0xFFFFFFFFFFFFFF89LL) {
                      goto LABEL_121;
                    }
                    v14 = (char*)&v79[v58];
                    a3 = v100 - v58;
                    v25 = v96;
                    v17 = v97;
                    v20 = 1;
                    v18 = v87;
                    v19 = v94;
                    v27 = v95;
                    v28 = v93;
                    v30 = v91;
                    v21 = v92;
                    v32 = v89;
                    v31 = v90;
                    v26 = v88;
                    v12 = 5;
                    v13 = *(_DWORD*)(v11 + 3420) == 0;
                    if (*(_DWORD*)(v11 + 3420) != 0) {
                      v12 = 1;
                    }
                    if (v9 >= v12) {
                      goto LABEL_17;
                    }
                    goto LABEL_7;
                  }
                }
              }
              return -72;
            }
            v58 = v62;
          }
        LABEL_121:
          if (((unsigned __int8)v85 & ((_DWORD)v58 == -10)) != 0) {
            return -72;
          }
          else {
            return v58;
          }
        }
      LABEL_38:
        if (v101 != v40) {
          *(_QWORD*)(a1 + 29912) = v40;
          *(_QWORD*)(a1 + 29896) = v101;
          *(_QWORD*)(a1 + 29888) = v101;
          *(_QWORD*)(a1 + 29904) = &v101[v39 - (char*)v40];
        }
        goto LABEL_40;
      }
    }
    if (a3 == 0) {
      goto LABEL_40;
    }
    goto LABEL_38;
  }
  while (1) {
    if (v9 < 4 || *(_DWORD*)a4 >> 4 != 25481893) {
      goto LABEL_27;
    }
    if (v9 < 8) {
      return -72;
    }
    v33 = *((unsigned int*)a4 + 1);
    if ((unsigned int)v33 > 0xFFFFFFF7) {
      return -14;
    }
    v34 = v33 + 8;
    result = -72;
    if (v34 <= v9) {
      result = v34;
    }
    if (result > 0xFFFFFFFFFFFFFF88LL) {
      return result;
    }
    a4 += result;
    v9 -= result;
    if (v9 < v12) {
      goto LABEL_7;
    }
  }
}

__int64 ZSTD_decompress(char* a1, __int64 a2, unsigned __int8* a3,
                        unsigned __int64 a4)
{
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;

  v8 = cuda_Alloc_plt(95968);
  if (v8 == 0) {
    return -64;
  }
  *(_QWORD*)(v8 + 30168) = 0;
  *(_QWORD*)(v8 + 29912) = 0;
  *(_QWORD*)(v8 + 30280) = 0;
  v9 = v8;
  *(_QWORD*)(v8 + 30128) = 0;
  *(_QWORD*)(v8 + 95960) = 0;
  *(_DWORD*)(v8 + 30252) = 0;
  *(_DWORD*)(v8 + 30176) = 1;
  *(_DWORD*)(v8 + 30232) = 0;
  *(_OWORD*)(v8 + 30236) = 0u;
  *(_OWORD*)(v8 + 30136) = 0u;
  *(_OWORD*)(v8 + 30216) = 0u;
  *(_QWORD*)(v8 + 30264) = 134217729;
  *(_QWORD*)(v8 + 30316) = 0;
  *(_QWORD*)(v8 + 30104) = 0;
  *(_QWORD*)(v8 + 30204) = 0;
  *(_OWORD*)(v8 + 30184) = 0u;
  v10 = ZSTD_decompressMultiFrame(v8, a1, a2, a3, a4, nullptr, 0, 0);
  zstd_decompress_251d50(v9);
  return v10;
}

#pragma GCC visibility pop
