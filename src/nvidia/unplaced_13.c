#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* CudaDriverRoutine_1caa40(__int64* result, unsigned int, unsigned int,
                                  __int64);
__int64* CudaDriverRoutine_203100(__int64* result);
__int64 CudaDriverRoutine_103520(__int64 result, int*);
__int64 CudaDriverRoutine_103780(__int64, int*);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_1085d0(__int64 result);
__int64 CudaDriverRoutine_1089c0(__int64 result, __int64);
__int64 CudaDriverRoutine_108e40(__int64 result, __int64);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_1197e0(__int64 result);
__int64 CudaDriverRoutine_1206e0(__int64);
__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_122410(__int64);
__int64 CudaDriverRoutine_122460(__int64, __int64, __int64);
__int64 CudaDriverRoutine_1235f0(__int64 result, char);
__int64 CudaDriverRoutine_1251c0(unsigned int*);
__int64 CudaDriverRoutine_12df40(_DWORD*, void (*)(__int64, __int64));
__int64 CudaDriverRoutine_12df40_alt1(_DWORD*, void (*)(void)) __asm__(
    "CudaDriverRoutine_12df40");
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_137750(__int64);
__int64 CudaDriverRoutine_137830(__int64);
__int64 CudaDriverRoutine_137900();
__int64 CudaDriverRoutine_137920();
__int64 CudaDriverRoutine_18cb30(_QWORD*, _QWORD*, int, char);
__int64 CudaDriverRoutine_19bcb0(__int64, __int64, __int64*, int, char*, char);
__int64 CudaDriverRoutine_19dbf0(__int64, __int64);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1a2b00(__int64 result,
                                 __int64 (*)(_QWORD, _QWORD, __int64), __int64);
__int64 CudaDriverRoutine_1ba480(_QWORD*, __int64);
__int64 CudaDriverRoutine_1ba4f0(__int64 result, __int64);
__int64 CudaDriverRoutine_1ba520(__int64 result);
__int64 CudaDriverRoutine_1ba580(__int64);
__int64 CudaDriverRoutine_1cab00(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_1dcc60(__int64, __int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_77080();
__int64 CudaDriverRoutine_7d4d0(__int64 result, __int64);
__int64 CudaDriverRoutine_7d5b0();
__int64 CudaDriverRoutine_7e820(__int64 result, _DWORD*, _DWORD*, _DWORD*,
                                __int64, unsigned int, _DWORD*);
__int64 CudaDriverRoutine_7e9a0(__int64 result, _DWORD*, __int64, unsigned int,
                                _DWORD*);
__int64 CudaDriverRoutine_7eae0(__int64 result);
__int64 CudaDriverRoutine_7eba0(__int64 result, __int64);
__int64 CudaDriverRoutine_7fe80(__int64 result, __int64, char, int);
__int64 CudaDriverRoutine_80510(__int64, __int64, __int64, char, int);
__int64 CudaDriverRoutine_83020(__int64);
__int64 CudaDriverRoutine_8ea00(__int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_c5d50();
__int64 CudaDriverRoutine_c5d80();
__int64 CudaDriverRoutine_c65b0(__int64, _WORD*);
__int64 CudaDriverRoutine_c6620();
__int64 CudaDriverRoutine_c6720(__int64, __int64, __int64, __int64, __int64,
                                unsigned int);
__int64 CudaDriverRoutine_dca80(__int64, __int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 CudaDriverRoutine_ee2a0(__int64, __int64);
__int64 CudaDriverRoutine_ee330(__int64);
__int64 CudaDriverRoutine_eec70(__int64, __int64);
__int64 CudaDriverStub_102370(_QWORD);
__int64 CudaDriverStub_102e00(_QWORD);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_107f90_alt1(void*) __asm__("CudaDriverStub_107f90");
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_108070_alt1(void*) __asm__("CudaDriverStub_108070");
__int64 CudaDriverStub_10f720(_QWORD);
__int64 CudaDriverStub_112e40(_QWORD, _QWORD);
__int64 CudaDriverStub_112f50(_QWORD, _QWORD);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_118070(__int64);
__int64 CudaDriverStub_1223e0(_QWORD);
__int64 CudaDriverStub_12d100(_QWORD);
__int64 CudaDriverStub_12db60(_QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12db80(_QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_12dca0(_QWORD);
__int64 CudaDriverStub_12dd30(_QWORD);
__int64 CudaDriverStub_12dd40(__int64, unsigned int, unsigned int);
__int64 CudaDriverStub_137960();
__int64 CudaDriverStub_137980();
__int64 CudaDriverStub_1379a0();
__int64 CudaDriverStub_1a0ee0(_QWORD, _QWORD);
__int64 CudaDriverStub_1d8c10(_QWORD);
__int64 CudaDriverStub_1db190(_QWORD);
__int64 CudaDriverStub_1db800(_QWORD);
__int64 CudaDriverStub_1dbab0(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_203210(__int64, __int64, __int64, __int64, __int64);
__int64 CudaDriverStub_57450(_QWORD);
__int64 CudaDriverStub_57450_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("CudaDriverStub_57450");
__int64 CudaDriverStub_98590(_QWORD);
__int64 NvRmGpuLibGetVersionInfo_plt(void);
__int64 NvRmGpuLibOpen_plt(_QWORD);
__int64 NvRmGpuProfilerV2RegOpsExec_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 cuda_debugger_api_7d040();
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_108520(__int64);
__int64 cuda_driver_108740(__int64 result, unsigned __int64*);
__int64 cuda_driver_108c40(__int64 result, unsigned __int64*);
__int64 cuda_driver_1150a0(__int64, __int64, unsigned int);
__int64 cuda_driver_121e20(__int64);
__int64 cuda_driver_1226c0(_QWORD*, unsigned int);
__int64 cuda_driver_1378a0(__int64);
__int64 cuda_driver_1378c0(__int64);
__int64 cuda_driver_1378e0(__int64);
__int64 cuda_driver_137940(__int64);
__int64 cuda_driver_1da1b0(__int64, __int64*, __int64, _QWORD*);
__int64 cuda_driver_203220(unsigned __int64, __int64, unsigned __int64,
                           unsigned __int64, unsigned __int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 cuda_driver_7d6e0(__int64, char, bool*, const char**);
__int64 cuda_driver_9e5f0(__int64, __int64, __int128*);
__int64 cuda_driver_c61e0();
__int64 cuda_driver_d5280(__int64, __int64, unsigned int);
__int64 cuda_driver_d54e0(__int64, __int64, unsigned int);
__int64 cuda_driver_e2030();
__int64 cuda_driver_ff320(_DWORD*, __int64, _DWORD*);
__int64 cuda_driver_helpers_1b6f70(__int64, __int64*, __int64, __int64, __int64,
                                   int, char);
__int64 cuda_driver_helpers_1db920(__int64, unsigned __int64);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, char);
__int64 cuda_driver_predicates_10f750(__int64, int, unsigned int, __int64,
                                      _DWORD*, __int64);
__int64 cuda_driver_unplaced_9_1bb6a0(unsigned __int64, unsigned __int64);
__int64 fclose_plt(_QWORD);
__int64 feof_plt(_QWORD);
__int64 fopen_plt(_QWORD, _QWORD);
__int64 fread_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt_alt1(__int64, int, unsigned __int64) __asm__("memset_plt");
bool CudaDriverRoutine_122140(_BOOL8 result);
bool CudaDriverRoutine_98110(_BOOL8 result);
bool CudaDriverRoutine_9ac20(__int64);
__int64 CudaDriverStub_985a0(__int64);
extern _DWORD CudaDriverData_14328d4;
extern _DWORD CudaDriverData_143bd30[];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_1423268;
extern _UNKNOWN* CudaDriverData_1423388;
extern _UNKNOWN* CudaDriverData_1423390;
extern _UNKNOWN* CudaDriverData_14321c8;
extern _UNKNOWN** CudaDriverData_1423090;
extern _UNKNOWN CudaDriverData_14328e8;
extern _UNKNOWN CudaDriverData_143bd18;
extern __int128 CudaDriverData_1115690;
extern __int128 CudaDriverData_1115ec0;
extern __int128 CudaDriverData_11162f0;
extern __int64 (*CudaDriverData_14324a0)(_QWORD*);
extern __int64 (*cuda_driver_7e640_ptr)();
extern __int64* CudaDriverData_1423260;
extern __int64 CudaDriverData_1432e78;
extern __int64 CudaDriverData_14403e0;
extern char CudaDriverData_1436502;
extern char CudaDriverData_14403dc;
extern int CudaDriverData_14328d8;
extern int CudaDriverData_1432900;
extern int CudaDriverData_14358d0;
extern int CudaDriverData_14403d8;
extern int CudaDriverData_144d328;
extern void (*CudaDriverData_1421fe8[25])();
extern void (*CudaDriverData_1421ff0[24])();
extern void (*CudaDriverData_1421ff8[23])();
extern void (*CudaDriverData_1422020[18])();
extern void (*CudaDriverData_1423080)();
void CudaDriverStub_10fdf0();
void CudaDriverStub_111420();
__int64 nvidia_11ea0(__int64 a1, _BYTE* a2);
__int64 nvidia_211a0(__int64 a1, _BYTE* a2);
__int64 nvidia_42ee0(__int64 a1, _DWORD* a2, __int64 a3);
__int64 nvidia_60ae0(__int64 a1, int a2, int a3);
__int64 nvidia_60ca0(__int64 a1, int a2, _DWORD* a3);
__int64 nvidia_7daa0(__int64 a1, char a2, int a3, __int64 a4);
__int64 nvidia_8e890(__int64* a1);
__int64 nvidia_bf0d0(__int64* a1, __int64 a2);
__int64 nvidia_c4770(__int64 a1, __int64 a2);
__int64 nvidia_e1f00(unsigned __int64* a1, _QWORD* a2, char a3);
__int64 nvidia_e26e0(_QWORD* a1, __int128* a2, __int64* a3);
__int64* nvidia_10f380(__int64* result);
__int64 nvidia_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3);
__int64 nvidia_135980(__int64 a1);
__int64 nvidia_138230();
void nvidia_1b3d20(__int64 a1, _BYTE* a2);
__int64 nvidia_1c0c40(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 nvidia_1d47c0(__int64 a1, _BYTE* a2);
void nvidia_1fb7e0(__int64 a1, _QWORD* a2);
__int64 nvidia_1fbf20(__int64 a1, _BYTE* a2);
__int64 nvidia_210400(__int64 a1);
__int64 nvidia_233e00(__int64 a1, _BYTE* a2);
__int64 nvidia_2461c0(__int64 a1, _BYTE* a2);

__int64 nvidia_11ea0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 nvidia_211a0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 nvidia_42ee0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  int* v8;
  __int64 v9;
  int* v10;
  __int64 v11;
  int v12;
  bool v13;
  int* v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  int v23;
  _DWORD* v24;
  __int64 i;
  int v26;
  int v27;
  __int64 v28;
  unsigned int v30;
  _DWORD* v31;
  int* v32;
  int v33;
  __int64 v34;

  v34 = 0;
  result = CudaDriverRoutine_121c60(&v34);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50(v34, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_121e20(v34);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter pool cannot be NULL");
    return 1;
  }
  if (a2 == nullptr) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter map cannot be NULL");
    return 1;
  }
  v7 = *(_QWORD*)(a1 + 96);
  if (v7 == 0) {
    v11 = *(_QWORD*)(a1 + 104);
    if (v11 != 0) {
      v9 = v11 + 104;
      v8 = *(int**)(v11 + 104);
      v12 = *v8;
      goto LABEL_15;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Parameter pool cannot have invalid CUmemorypool");
    return 1;
  }
  v10 = *(int**)(v7 + 176);
  v9 = v7 + 176;
  v8 = v10;
  v11 = *(_QWORD*)(a1 + 104);
  v12 = *v10;
  if (v11 != 0) {
  LABEL_15:
    v13 = *(_QWORD*)(v11 + 56) != (_QWORD)v8;
    goto LABEL_16;
  }
  v13 = false;
LABEL_16:
  if (a3 == 0) {
    return cuda_driver_ff320(a2, 0, &v33);
  }
  v14 = a2 + 1;
  v15 = a3;
  v16 = CudaDriverData_1422118;
  do {
    v17 = *(_DWORD*)(a1 + 16);
    if (v17 == 1 && *(v14 - 1) != 1) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Invalid mapping location type request: Device memory can "
                   "only be mapped on device");
      return 801;
    }
    v18 = v14[1];
    if (v18 == 1) {
      CudaDriverRoutine_ed630(
          (__int64)"CUDA", 0,
          (__int64)"Mempools do not support Read-Only flag");
      return 801;
    }
    if (*(v14 - 1) == 1) {
      result = 101;
      if (*v14 < 0 ||
          *v14 >= (signed __int32)*(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                                             (_QWORD)v16)) {
        return result;
      }
    }
    if (v17 == 1 && v18 != 0) {
      v19 = v16[*v14 + 35];
      v20 = **(_QWORD**)(v9 + 8);
      if (v19 != v20 &&
          (unsigned __int8)CudaDriverRoutine_eec70(v20, v19) == 0) {
        return 217;
      }
    }
    --v15;
    v14 += 3;
  } while (v15 != 0);
  result = cuda_driver_ff320(a2, a3, &v33);
  if ((_DWORD)result == 0) {
    if (v13) {
      v21 = a2 + 2;
      v22 = a3;
      while (1) {
        v23 = *(v21 - 2);
        if (v23 == 1) {
          break;
        }
        if (v23 != 3) {
          goto LABEL_35;
        }
        if (*v21 != 3) {
          goto LABEL_63;
        }
      LABEL_36:
        --v22;
        v21 += 3;
        if (v22 == 0) {
          goto LABEL_64;
        }
      }
      if (*(_DWORD*)(a1 + 16) != 1 && *v21 != 0) {
        result = CudaDriverRoutine_1251c0((unsigned int*)v16[*(v21 - 1) + 35]);
        if ((_DWORD)result != 0) {
          return result;
        }
      }
    LABEL_35:
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"HOST/HOST_NUMA pools are always "
                                       "read-write accessible on the HOST");
      goto LABEL_36;
    }
    v24 = a2 + 2;
    for (i = a3; i != 0; --i) {
      v26 = *(v24 - 2);
      if (v26 == 3) {
        if (*v24 != 3) {
        LABEL_63:
          v30 = 801;
          CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                  (__int64)"HOST pools are always read-write "
                                           "accessible on the HOST");
          return v30;
        }
      }
      else {
        if (v26 == 1) {
          v27 = *(_DWORD*)(a1 + 16);
          v28 = (int)*(v24 - 1);
          if (v27 == 1 && (_DWORD)v28 == v12) {
            if (*v24 != 3) {
              v30 = 101;
              CudaDriverRoutine_ed630(
                  (__int64)"CUDA", 0,
                  (__int64)"Modifying accessibility of memory pool on owning "
                           "device is not supported");
              return v30;
            }
          }
          else if (v27 != 1 && *v24 != 0) {
            result = CudaDriverRoutine_1251c0((unsigned int*)v16[v28 + 35]);
            if ((_DWORD)result != 0) {
              return result;
            }
          }
        }
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"HOST/HOST_NUMA pools are always "
                                         "read-write accessible on the HOST");
      }
      v24 += 3;
    }
  LABEL_64:
    v31 = a2 + 2;
    do {
      if (*(v31 - 2) == 1) {
        v32 = (int*)v16[*(v31 - 1) + 35];
        if (*v31 == 3) {
          result = CudaDriverRoutine_103780(v9, v32);
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        else if (*v31 == 0) {
          CudaDriverRoutine_103520(v9, v32);
        }
      }
      --a3;
      v31 += 3;
    } while (a3 != 0);
    return 0;
  }
  return result;
}

__int64 nvidia_60ae0(__int64 a1, int a2, int a3)
{
  _DWORD v7[2];
  __int64 v8;

  memset_plt(&v8, 0, 2056);
  v7[0] = a2;
  v7[1] = a3;
  return CudaDriverRoutine_8ea00(a1, (__int64)v7);
}

__int64 nvidia_60ca0(__int64 a1, int a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v10;
  struct {
    __int64 v12;
    int v13;
  } v12_;
  struct {
    _BYTE v14[7692];
    unsigned int v15;
    __int64 v16;
    int v17;
  } v14_;

  memset_plt(v14_.v14, 0, 7712);
  v6 = fopen_plt(a1, "r");
  if (v6 != 0) {
    v7 = v6;
    if (fread_plt(v14_.v14, 7712, 1, v6) == 1) {
      v8 = v14_.v15;
      if (v14_.v15 <= 0x800 &&
          (v12_.v12 = v14_.v16, v12_.v13 = v14_.v17, v14_.v15 != 0)) {
        while ((_DWORD)v12_.v12 != 0 || HIDWORD(v12_.v12) != a2) {
          if ((unsigned int)feof_plt(v7) != 0) {
            goto LABEL_12;
          }
          if (fread_plt(&v12_.v12, 12, 1, v7) != 1) {
            goto LABEL_14;
          }
          if (--v8 == 0) {
            goto LABEL_12;
          }
        }
        v10 = 0;
        *a3 = v12_.v13;
      }
      else {
      LABEL_12:
        v10 = 1;
      }
    }
    else {
    LABEL_14:
      v10 = 304;
    }
    fclose_plt(v7);
  }
  else {
    return 304;
  }
  return v10;
}

__int64 nvidia_7daa0(__int64 a1, char a2, int a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  void* v10;
  _BOOL4 v11;
  int v12;
  __int64 i;
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
  int v24;
  int v25;
  int v26;
  void(__attribute__((noreturn)) * v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  _DWORD* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (*v37)(__int64);
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 (*v41)(__int64);
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 (*v45)(__int64);
  __int64 v46;
  unsigned int (*v47)(_QWORD, _DWORD*);
  int v48;
  const char* v49;
  bool v50;
  _QWORD v51[16];
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    _QWORD v55[16];
    int v56;
  } v55_;
  _DWORD v57[5];
  __int64 v58;
  int v59;
  int v60;
  bool v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  _DWORD v71[33];
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _DWORD v82[5];
  __int128 v83;
  __int128 v84;
  __int128 v85;
  __int128 v86;
  __int128 v87;
  __int128 v88;
  __int128 v89;
  __int128 v90;
  __int128 v91;
  __int128 v92;
  __int128 v93;
  __int128 v94;
  __int128 v95;
  __int128 v96;
  __int128 v97;
  __int128 v98;
  __int128 v99;
  __int128 v100;
  __int128 v101;
  _BYTE v102[29];

  v81 = 0;
  v80 = 0;
  memset(v51, 0, sizeof(v51));
  v55_.v56 = 0;
  v52 = 0;
  v53 = 0;
  memset(v55_.v55, 0, sizeof(v55_.v55));
  result = CudaDriverStub_985a0(a1);
  if ((_BYTE)result != 0) {
    return result;
  }
  v9 = *(_QWORD*)(a1 + 64);
  v49 = nullptr;
  result = cuda_driver_7d6e0(v9, 1, &v50, &v49);
  if ((_DWORD)result != 0 || !v50 || *(_BYTE*)(a1 + 15965) != 0) {
    return result;
  }
  if ((CudaDriverRoutine_77080() & 1) == 0 && *(_QWORD*)(a1 + 16176) == 0) {
    cuda_driver_helpers_1b6f70(*(_QWORD*)(a1 + 216), (__int64*)(a1 + 16176),
                               (__int64)cuda_driver_7e640_ptr, a1,
                               (__int64)&CudaDriverData_14328e8, 0, 1);
  }
  v10 = CudaDriverData_1422118;
  CudaDriverStub_12db60((char*)((_UNKNOWN*)0x17E0LL) +
                        (_QWORD)CudaDriverData_1422118);
  v11 = true;
  if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 1u,
                                          0) == 0) {
    if ((a2 & 1) != 0) {
      CudaDriverRoutine_12df40(
          &CudaDriverData_14328d4,
          (void (*)(__int64, __int64))cuda_debugger_api_7d040);
      if (*(_DWORD*)CudaDriverData_1421ff0[0] == 0 ||
          (*(_DWORD*)CudaDriverData_1421ff8[0] | a3) != 0) {
        goto LABEL_10;
      }
    }
    else if (a3 != 0) {
      goto LABEL_10;
    }
    if (CudaDriverRoutine_122140(*(_QWORD*)(a1 + 232))) {
      if ((CudaDriverRoutine_77080() & 1) == 0) {
        v17 = CudaDriverRoutine_98340(a1);
        CudaDriverRoutine_1235f0(v17, 0);
      }
    }
    else {
      cuda_driver_1226c0(*(_QWORD**)(a1 + 232), 3u);
    }
    v18 = CudaDriverStub_1223e0(*(_QWORD*)(a1 + 232));
    if (v18 == 0) {
      v27 = CudaDriverData_1422020[0];
      v28 = 0x2DF90000000ALL;
      goto LABEL_44;
    }
    v19 = v18;
    v20 = CudaDriverRoutine_122410(*(_QWORD*)(a1 + 232));
    v21 = CudaDriverStub_1db800(v20);
    v22 = CudaDriverRoutine_122410(*(_QWORD*)(a1 + 232));
    v23 = CudaDriverStub_1dbf90(v22);
    v24 = CudaDriverStub_10f720(*(_QWORD*)(a1 + 1208));
    v25 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 16976LL);
    if (v24 == 2) {
      v26 = 2;
    }
    else {
      v26 = (v25 & 0x80) != 0 && *(_DWORD*)CudaDriverData_1421fe8[0] != 0;
    }
    if ((v25 & 0x10000) == 0) {
      if ((unsigned int)CudaDriverRoutine_122460(
              *(_QWORD*)(a1 + 232), (__int64)&v81,
              (__int64)"READ_DYNAMIC_REGISTER") != 0) {
        v27 = CudaDriverData_1422020[0];
        v28 = 0x2E550000000ALL;
        goto LABEL_44;
      }
      if ((unsigned int)CudaDriverRoutine_122460(
              *(_QWORD*)(a1 + 232), (__int64)&v80,
              (__int64)"WRITE_DYNAMIC_REGISTER") != 0) {
        v27 = CudaDriverData_1422020[0];
        v28 = 0x2E790000000ALL;
      LABEL_44:
        *(_QWORD*)v27 = v28 & 0xFFFFFFFFFFFFLL | 0x4000000000000LL;
        (*(void(__attribute__((noreturn))**)(void))CudaDriverData_1423080)();
      }
    }
    CudaDriverRoutine_7eae0(a1);
    v29 = *(_QWORD*)(a1 + 15848);
    if (v29 != 0) {
      v30 = CudaDriverStub_1dbab0(v29);
    }
    else {
      v30 = 0;
    }
    CudaDriverRoutine_19dbf0(a1, (__int64)&v54);
    v57[0] = 0;
    *(_QWORD*)&v57[3] = CudaDriverStub_1db800(v19);
    v58 = CudaDriverStub_102e00(v19);
    v31 = CudaDriverStub_12dd30(v58);
    v32 = *(_DWORD**)(a1 + 64);
    *(_QWORD*)&v57[1] = a1;
    v59 = v31;
    v33 = *(_DWORD*)(a1 + 15896);
    LODWORD(v32) = *v32;
    v34 = *(_QWORD*)(a1 + 1208);
    v62 = v26;
    v63 = v30;
    v64 = v21;
    v65 = v23;
    v72 = 0;
    v61 = v33 != 0;
    v60 = (int)v32;
    v66 = v81;
    v67 = v80;
    v73 = v54;
    v35 = CudaDriverStub_102370(v34);
    v36 = *(_QWORD*)(a1 + 64);
    v74 = v35;
    v37 = *(__int64 (**)(__int64))(v36 + 18432);
    v38 = CudaDriverRoutine_98340(a1);
    v39 = v37(v38);
    v40 = *(_QWORD*)(a1 + 64);
    v75 = v39;
    v41 = *(__int64 (**)(__int64))(v40 + 18440);
    v42 = CudaDriverRoutine_98340(a1);
    v43 = v41(v42);
    v44 = *(_QWORD*)(a1 + 1256) / (unsigned __int64)*(unsigned int*)(a1 + 164);
    v76 = v43;
    v77 = v44;
    v45 = *(__int64 (**)(__int64))(*(_QWORD*)(a1 + 64) + 18464LL);
    v46 = CudaDriverRoutine_98340(a1);
    v78 = v45(v46);
    CudaDriverRoutine_7e820(a1, (_DWORD*)&v53 + 1, &v53, (_DWORD*)&v52 + 1,
                            (__int64)v51, 0x20u, &v52);
    v68 = HIDWORD(v53);
    v69 = v53;
    v70 = HIDWORD(v52);
    v71[32] = v52;
    memcpy_plt((__int64)v71, (__int64)v51, 4LL * (unsigned int)v52);
    if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 21864LL) == 1) {
      if (a4 == 0 ||
          (v47 = *(unsigned int (**)(_QWORD, _DWORD*))(a4 + 48)) == nullptr) {
        v48 = (*(__int64 (**)(__int64, _DWORD*, _QWORD))(
            (char*)((__int64*)0x10LL) + (_QWORD)*CudaDriverData_1423090))(
            a1, v82, 0);
        v11 = v48 == 0;
        if (v48 == 0) {
          v79 = *(_QWORD*)v82;
        }
        goto LABEL_56;
      }
      if (v47(*(_QWORD*)(a4 + 8), v82) == 0) {
        v79 = *(_QWORD*)v82;
      }
    }
    v11 = true;
  LABEL_56:
    if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 21864LL) == 4) {
      v82[0] = 0;
      CudaDriverRoutine_7e9a0(a1, v55_.v55, (__int64)v55_.v55 + 4, 0x20u, v82);
      v72 = v82[0] + 1;
    }
    CudaDriverRoutine_7d4d0((__int64)v57, 353);
    CudaDriverRoutine_7eba0((__int64)v55_.v55, 4LL * v72);
    CudaDriverRoutine_7d5b0();
  }
LABEL_10:
  v12 = CudaDriverStub_12dd40((__int64)&CudaDriverData_14328d8, 0, 1u);
  if (v12 == 3) {
  LABEL_13:
    CudaDriverData_14328d8 = 4;
    goto LABEL_14;
  }
  if (v12 == 2) {
    v99 = (__typeof__(v99)){0};
    v100 = (__typeof__(v100)){0};
    v101 = (__typeof__(v101)){0};
    memset(v102, 0, sizeof(v102));
    v98 = (__typeof__(v98)){0};
    v97 = (__typeof__(v97)){0};
    v96 = (__typeof__(v96)){0};
    v95 = (__typeof__(v95)){0};
    v94 = (__typeof__(v94)){0};
    v93 = (__typeof__(v93)){0};
    v92 = (__typeof__(v92)){0};
    v91 = (__typeof__(v91)){0};
    v90 = (__typeof__(v90)){0};
    v89 = (__typeof__(v89)){0};
    v88 = (__typeof__(v88)){0};
    v87 = (__typeof__(v87)){0};
    v86 = (__typeof__(v86)){0};
    v85 = (__typeof__(v85)){0};
    v84 = (__typeof__(v84)){0};
    v83 = (__typeof__(v83)){0};
    *(_OWORD*)&v82[1] = (__typeof__(*(_OWORD*)&v82[1])){0};
    v82[0] = 14;
    CudaDriverRoutine_7d4d0((__int64)v82, 353);
    CudaDriverRoutine_83020((__int64)&CudaDriverData_1432900);
    goto LABEL_13;
  }
LABEL_14:
  result = CudaDriverStub_12db80((char*)((_UNKNOWN*)0x17E0LL) + (_QWORD)v10);
  if (v11) {
    if ((CudaDriverRoutine_12df40(
             &CudaDriverData_14328d4,
             (void (*)(__int64, __int64))cuda_debugger_api_7d040),
         *(_DWORD*)CudaDriverData_1421ff0[0] != 0) &&
            *(_DWORD*)CudaDriverData_1421ff8[0] == 0 ||
        ((result = CudaDriverRoutine_77080()) & 1) != 0) {
      CudaDriverStub_107f90(*(_QWORD*)(a1 + 80) + 128LL);
      for (i = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 2040LL); i != 0;
           i = *(_QWORD*)(i + 8)) {
        CudaDriverRoutine_7fe80(a1, i, 0, 0);
      }
      v14 = *(_QWORD*)(a1 + 1232);
      if (v14 != 0) {
        v15 = CudaDriverStub_1db800(v14);
        v16 = CudaDriverStub_1dbf90(*(_QWORD*)(a1 + 1232));
        CudaDriverRoutine_80510(a1, v15, v16, 0, 0);
      }
      return CudaDriverStub_108070(*(_QWORD*)(a1 + 80) + 128LL);
    }
  }
  return result;
}

__int64 nvidia_8e890(__int64* a1)
{
  __int64 v5;
  __int64 v9;
  unsigned int v16;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  _BYTE v25[4];
  __int64 v26;

  v26 = -1;
  v24 = 0;
  memset_plt(&v23, 0, 2060);
  *a1 = 0;
  v21 = 5;
  v22 = 6;
  CudaDriverStub_57450(v25);
  v5 = CudaDriverRoutine_12e510(1, 4);
  if (v5 != 0) {
    v9 = v5;
    CudaDriverStub_57450(v5);
    CudaDriverStub_57450(v25);
    if ((unsigned int)CudaDriverStub_12db70(v25, &v21) != 0 ||
        (unsigned int)CudaDriverStub_12db70(v25, &v26) != 0 ||
        (CudaDriverStub_57450(v9),
         (unsigned int)CudaDriverStub_12db70(v9, &v22) != 0) ||
        (unsigned int)CudaDriverStub_12db70(v9, &v24) != 0) {
      v16 = 304;
    }
    else {
      v16 = v24;
      if ((_DWORD)v24 == 0) {
        *a1 = v9;
        CudaDriverStub_57450(v25);
        return v16;
      }
    }
    CudaDriverStub_57450(v25);
    CudaDriverStub_57450(v9);
    CudaDriverRoutine_12e340(v9);
  }
  else {
    CudaDriverStub_57450(v25);
    return 2;
  }
  return v16;
}

__int64 nvidia_bf0d0(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    int v20;
    char gap772_[4];
    __int64* v21;
  } v19_;

  memset_plt(&v12, 0, 744);
  v11 = *(__int64*)((char*)a1 + 12);
  v19_.v20 = 2;
  v19_.v19[0] = 0x800000011LL;
  if (a2 != 0) {
    v4 = **(_QWORD**)(a2 + 64);
  }
  else {
    v4 = 0;
  }
  v19_.v19[1] = v4;
  v19_.v21 = &v11;
  CudaDriverData_14324a0(v19_.v19);
  result = HIDWORD(v19_.v19[0]);
  if (SHIDWORD(v19_.v19[0]) > 2) {
    if (SHIDWORD(v19_.v19[0]) <= 4) {
      if (HIDWORD(v19_.v19[0]) == 3) {
        return 219;
      }
      else {
        return 208;
      }
    }
    if (HIDWORD(v19_.v19[0]) == 5) {
      return 211;
    }
    if (HIDWORD(v19_.v19[0]) == 6) {
      return 2;
    }
    return 999;
  }
  if (HIDWORD(v19_.v19[0]) != 0) {
    if (HIDWORD(v19_.v19[0]) == 1) {
      return result;
    }
    if (HIDWORD(v19_.v19[0]) == 2) {
      return 400;
    }
    return 999;
  }
  if (v13 == 0) {
    return 205;
  }
  a1[5] = v13;
  v6 = v15;
  v7 = v18;
  *((_DWORD*)a1 + 7) = v14;
  a1[10] = v7;
  a1[13] = v6;
  v8 = v17;
  v9 = *a1;
  *((_OWORD*)a1 + 3) = v16;
  *((_OWORD*)a1 + 4) = v8;
  result = (*(__int64 (**)(__int64*, __int64))(v9 + 80))(a1, a2);
  if ((_DWORD)result != 0) {
    v10 = result;
    (*(void (**)(__int64*, __int64))(*a1 + 32))(a1, a2);
    return v10;
  }
  return result;
}

__int64 nvidia_c4770(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  bool v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  char v13;
  unsigned int v14;
  int* v15;
  unsigned __int64 v16;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  int v34;
  bool v35;
  __int64 v36;
  __int64* v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  char v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v50;
  void* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int128* v57;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  char v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char v68;
  char v69;
  __int64 v70;
  __int64 v71;
  int* v72;
  unsigned __int64 v73;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  bool v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  _BYTE v83[4];
  struct {
    _BYTE v84[200];
    __int64 v85;
    __int64 v86;
    __int64 v87;
  } v84_;
  struct {
    _QWORD v88[3];
    char v89;
  } v88_;
  _BYTE v90[7];
  struct {
    char gap320_[8];
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    char* v95;
    int v96;
    unsigned int v97;
    int* v98;
    char v99;
    char gap385_[7];
    __int64* v100;
    char v101;
    char gap401_[7];
    int v102;
    char gap412_[4];
    __int128 v103;
    __int128 v104;
    __int64 v105;
    int v106;
  } v91_;
  __int64 v107;
  __int64 v108;
  struct {
    _QWORD v109[2];
    __int64 v110;
  } v109_;

  v109_.v110 = v2;
  v4 = *(_QWORD*)(a1 + 304);
  v88_.v88[0] = 0;
  v88_.v88[1] = a2;
  v88_.v88[2] = a1;
  v88_.v89 = 0;
  v84_.v85 = 0;
  v84_.v86 = 0;
  v84_.v87 = 0;
  memset(v90, 0, sizeof(v90));
  if (v4 != 0) {
    v7 = *(_QWORD*)(a2 + 16) != *(_QWORD*)(v4 + 16);
    v8 = *(_DWORD*)(a1 + 292);
    v9 = *(_QWORD*)(a1 + 320);
    v83[0] = 0;
    if (v9 == 0) {
      goto LABEL_6;
    }
  }
  else {
    v7 = true;
    v8 = *(_DWORD*)(a1 + 292);
    v10 = *(_QWORD*)(a1 + 320);
    v83[0] = 0;
    if (v10 == 0) {
      goto LABEL_6;
    }
  }
  v11 = CudaDriverStub_118070(a2);
  if (v11 != 0) {
    return v11;
  }
LABEL_6:
  v82 = 0;
  if (*(_DWORD*)((char*)((__int64*)0x10LL) + (_QWORD)CudaDriverData_14321c8 +
                 4) != 0) {
    v12 = a1;
    LODWORD(v91_.v91) = 72;
    if (*(_BYTE*)(a1 + 415) != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
    }
    LOBYTE(v91_.v95) = *(_BYTE*)(a1 + 415);
    v13 = *(_BYTE*)(a1 + 416);
    v91_.v92 = v12;
    v91_.v93 = a2;
    LOBYTE(v91_.v94) = 0;
    LOBYTE(v91_.v96) = v13;
    v91_.v98 = &v82;
    LOBYTE(v91_.v100) = *(_BYTE*)(a1 + 414);
    cuda_driver_20b420(0x13u, 5u, (__int64)&v91_.v91);
    if (v82 != 0) {
      v11 = 0;
      if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                     (_QWORD)CudaDriverData_14321c8) == 0) {
        return v11;
      }
      goto LABEL_43;
    }
  }
  CudaDriverStub_107f90(a1 + 392);
  v14 = cuda_driver_d5280(a1, a2, 0);
  if (v14 != 0) {
    v11 = v14;
    CudaDriverStub_108070(a1 + 392);
    if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                   (_QWORD)CudaDriverData_14321c8) == 0) {
      return v11;
    }
    goto LABEL_43;
  }
  *(_QWORD*)(a1 + 312) = a2;
  v15 = *(int**)(a1 + 376);
  v16 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16));
  if (CudaDriverRoutine_1a2980(v15, v16) != 0) {
    if (*(_BYTE*)(a1 + 408) == 0) {
      goto LABEL_23;
    }
  }
  else {
    ++v8;
    *(_QWORD*)(*(_QWORD*)(a1 + 296) + 8LL * *(unsigned int*)(a1 + 292)) =
        CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16)) + 24;
    if (*(_BYTE*)(a1 + 408) == 0) {
    LABEL_23:
      cuda_driver_108740(v8, *(unsigned __int64**)(a1 + 296));
      v18 = 0;
      v19 = 0;
      goto LABEL_24;
    }
  }
  if (CudaDriverData_144d328 != 0 || (*(_BYTE*)(a2 + 56) & 1) != 0 ||
      *(_BYTE*)(CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16)) + 15891) == 0) {
    goto LABEL_23;
  }
  cuda_driver_108c40(v8, *(unsigned __int64**)(a1 + 296));
  CudaDriverStub_107f90(a2 + 24);
  v18 = 1;
  v19 = 1;
LABEL_24:
  CudaDriverRoutine_1a2b00(
      *(_QWORD*)(a1 + 376),
      (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_c5d50,
      (__int64)v83);
  if (v18 != 0 && v83[0] != 0) {
    CudaDriverStub_108070(a2 + 24);
    CudaDriverRoutine_108e40(v8, *(_QWORD*)(a1 + 296));
    cuda_driver_108740(v8, *(unsigned __int64**)(a1 + 296));
    v19 = 0;
  }
  CudaDriverRoutine_1206e0(a1);
  CudaDriverRoutine_1ba4f0((__int64)v84_.v84,
                           *(_QWORD*)(*(_QWORD*)(a2 + 16) + 72LL));
  if (*(_BYTE*)(a1 + 410) == 0) {
    v24 = *(_QWORD*)(a1 + 376);
    v91_.v91 = 0;
    v91_.v92 = a1;
    LOBYTE(v91_.v93) = 0;
    *(_DWORD*)((char*)&v91_.v93 + 1) = 0;
    HIDWORD(v91_.v93) = 0;
    CudaDriverRoutine_1a2b00(
        v24, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_c5d80,
        (__int64)&v91_.v91);
    v11 = v91_.v91;
    if ((_DWORD)v91_.v91 != 0) {
    LABEL_37:
      if (v19 != 0) {
        goto LABEL_38;
      }
    LABEL_49:
      CudaDriverRoutine_1089c0(v8, *(_QWORD*)(a1 + 296));
      if (v11 == 0) {
      LABEL_39:
        v11 = cuda_driver_d54e0(a1, a2, 0);
      }
    LABEL_40:
      if (*(_DWORD*)(CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16)) + 15896) !=
          0) {
        v11 = CudaDriverStub_98590(*(_QWORD*)(a2 + 16));
      }
      *(_QWORD*)(a1 + 312) = 0;
      CudaDriverStub_108070(a1 + 392);
      CudaDriverRoutine_1ba580((__int64)v84_.v84);
      if (*(_DWORD*)((char*)((__int64*)0x18LL) +
                     (_QWORD)CudaDriverData_14321c8) != 0) {
      LABEL_43:
        HIDWORD(v91_.v91) = v11;
        v25 = a1;
        LODWORD(v91_.v91) = 48;
        if (*(_BYTE*)(a1 + 415) != 0) {
          v25 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
        }
        LOBYTE(v91_.v95) = *(_BYTE*)(a1 + 415);
        v26 = *(_BYTE*)(a1 + 416);
        v91_.v92 = v25;
        v91_.v93 = a2;
        LOBYTE(v91_.v94) = 0;
        LOBYTE(v91_.v96) = v26;
        cuda_driver_20b420(0x13u, 6u, (__int64)&v91_.v91);
      }
      return v11;
    }
  }
  if (v83[0] != 0) {
    v20 = *(_QWORD*)(a1 + 104);
    if (v20 != 0) {
      while (1) {
        if (*(_DWORD*)(v20 + 4) == 0) {
          v21 = *(_QWORD*)(v20 + 1200);
          *(_DWORD*)(v20 + 528) = 0;
          v22 = CudaDriverRoutine_98340(v21);
          v23 = cuda_driver_9e5f0(v22, *(_QWORD*)(v20 + 32),
                                  (__int128*)(v20 + 480));
          if (v23 != 0) {
            break;
          }
        }
        v20 = *(_QWORD*)(v20 + 1136);
        if (v20 == 0) {
          goto LABEL_30;
        }
      }
    LABEL_48:
      v11 = v23;
      if (v19 == 0) {
        goto LABEL_49;
      }
      goto LABEL_38;
    }
  }
LABEL_30:
  CudaDriverRoutine_1a2b00(
      *(_QWORD*)(a1 + 376),
      (__int64 (*)(_QWORD, _QWORD, __int64))cuda_driver_c61e0,
      (__int64)v88_.v88);
  v11 = v88_.v88[0];
  if (LODWORD(v88_.v88[0]) != 0) {
    goto LABEL_37;
  }
  v23 = CudaDriverStub_112f50(v84_.v84, a2);
  if (v23 != 0) {
    goto LABEL_48;
  }
  v28 = *(_QWORD*)(a1 + 352);
  if (v28 == 0) {
  LABEL_156:
    v71 = *(_QWORD*)(a1 + 272);
    if (v71 != 0) {
      while (1) {
        v72 = *(int**)(a1 + 376);
        v73 = CudaDriverStub_12d100(*(_QWORD*)(v71 + 992));
        v75 = CudaDriverRoutine_1a2980(v72, v73);
        v76 = cuda_driver_unplaced_9_1bb6a0(*(_QWORD*)(v75 + 152),
                                            *(_QWORD*)(v71 + 992));
        if (v76 != 0) {
          break;
        }
        v71 = *(_QWORD*)(v71 + 1176);
        if (v71 == 0) {
          goto LABEL_159;
        }
      }
    }
    else {
    LABEL_159:
      *(_DWORD*)(a1 + 372) = *(_DWORD*)(a2 + 60);
      CudaDriverRoutine_c65b0(a2, (_WORD*)a1);
      v77 = *(_QWORD*)(a1 + 376);
      *(_BYTE*)(a1 + 410) = 1;
      v90[0] = 1;
      CudaDriverRoutine_1a2b00(
          v77, (__int64 (*)(_QWORD, _QWORD, __int64))CudaDriverRoutine_c6620,
          (__int64)v88_.v88);
      v11 = v88_.v88[0];
      if (LODWORD(v88_.v88[0]) != 0) {
        goto LABEL_37;
      }
      if (**(_DWORD**)(a1 + 344) == 0) {
        v11 = 0;
        if (v19 == 0) {
          goto LABEL_49;
        }
      LABEL_38:
        CudaDriverStub_108070(a2 + 24);
        CudaDriverRoutine_108e40(v8, *(_QWORD*)(a1 + 296));
        if (v11 != 0) {
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      v76 = CudaDriverRoutine_dca80(a1, a2);
    }
    v11 = v76;
    goto LABEL_37;
  }
  v78 = v7;
  while (1) {
    v29 = *(_QWORD*)(v28 + 8);
    v80 = v28;
    v107 = 0;
    v108 = 0;
    if (!v7 && *(_QWORD*)(v29 + 1208) == *(_QWORD*)(a1 + 304)) {
      v81 = *(_QWORD*)(v29 + 1208);
      *(_QWORD*)(v29 + 1208) = a2;
      v79 = v29 + 900;
      v30 = *(_DWORD*)(v29 + 4);
      if (v30 == 0) {
        goto LABEL_79;
      }
    }
    else {
      v81 = 0;
      v79 = v29 + 900;
      v30 = *(_DWORD*)(v29 + 4);
      if (v30 == 0) {
        goto LABEL_79;
      }
    }
    if (v30 != 2 || *(_BYTE*)(v29 + 155) == 0 && *(_BYTE*)(v29 + 156) == 0) {
      v31 = *(unsigned int*)(v29 + 1036);
      if ((_DWORD)v31 != 0) {
        v32 = *(_BYTE**)(v29 + 1000);
        while (1) {
          v33 = *(_QWORD*)v32;
          if (*(_QWORD*)(v29 + 1208) != *(_QWORD*)(*(_QWORD*)v32 + 1208LL) ||
              ((v34 = *(_DWORD*)(v33 + 4)) != 0 ? (v35 = v34 == 13)
                                                : (v35 = true),
               v35 || v34 == 2 && (*(_BYTE*)(v33 + 155) != 0 ||
                                   *(_BYTE*)(v33 + 156) != 0))) {
            CudaDriverRoutine_1ba4f0((__int64)&v91_.v91,
                                     *(_QWORD*)(*(_QWORD*)(v33 + 1200) + 72LL));
            v36 = *(_QWORD*)v32;
            if (v32[8] != 0 && *(_DWORD*)(v36 + 4) == 0) {
              v37 = &v91_.v91;
              LODWORD(v91_.v93) = 1;
              *(_DWORD*)v91_.v94 = 1;
              *(_OWORD*)(v91_.v94 + 8) = *(_OWORD*)(v36 + 760);
            }
            else {
              v37 = *(__int64**)(v36 + 992);
            }
            v11 = cuda_driver_1150a0(*(_QWORD*)(v29 + 1208), (__int64)v37, 0);
            CudaDriverRoutine_1ba580((__int64)&v91_.v91);
            if (v11 != 0) {
              goto LABEL_115;
            }
          }
          --v31;
          v32 += 16;
          if (v31 == 0) {
            goto LABEL_79;
          }
        }
      }
      v38 = cuda_driver_1150a0(*(_QWORD*)(v29 + 1208), (__int64)v84_.v84, 0);
      if (v38 != 0) {
        goto LABEL_114;
      }
    }
  LABEL_79:
    if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)CudaDriverData_14321c8 +
                   4) == 0) {
      goto LABEL_87;
    }
    v39 = *(_QWORD*)(v29 + 1240);
    v40 = *(unsigned __int8*)(v29 + 1412);
    v41 = *(_DWORD*)(v29 + 4);
    LODWORD(v91_.v91) = 136;
    v42 = *(_QWORD*)(v39 + 8);
    DWORD2(v91_.v103) = v40;
    v43 = *(unsigned __int8*)(a1 + 415);
    HIDWORD(v91_.v91) = v41;
    LOBYTE(v91_.v96) = v29 == v42;
    v44 = a1;
    if (v43 != 0) {
      v44 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
    }
    v91_.v92 = v44;
    v91_.v93 = v29;
    v91_.v94 = a2;
    v91_.v95 = (char*)&v108 + 4;
    v91_.v100 = &v108;
    if (v41 != 0) {
      LOBYTE(v91_.v98) = 0;
      LOBYTE(v91_.v102) = 0;
    }
    else {
      v45 = *(_BYTE*)(v29 + 672);
      LOBYTE(v91_.v98) = *(_BYTE*)(v29 + 390);
      LOBYTE(v91_.v102) = v45;
      *(_QWORD*)(*(_QWORD*)(v29 + 32) + 992LL) = v29 + 184;
      if (*(_DWORD*)(v29 + 4) == 0) {
        v91_.v99 = *(_BYTE*)(v29 + 673);
        v91_.v104 = *(_OWORD*)v79;
        v50 = *(_QWORD*)(v79 + 16);
        v91_.v106 = *(_DWORD*)(v29 + 924);
        v91_.v105 = v50;
        goto LABEL_86;
      }
    }
    v91_.v99 = 0;
    v91_.v105 = 0;
    v91_.v104 = (__typeof__(v91_.v104)){0};
    v91_.v106 = 0;
  LABEL_86:
    LOBYTE(v91_.v103) = 0;
    cuda_driver_20b420(0x13u, 7u, (__int64)&v91_.v91);
  LABEL_87:
    if ((_DWORD)v108 != 0) {
      v46 = a2;
      if ((_DWORD)v108 != 1) {
        if ((_DWORD)v108 != 2) {
          v11 = 1;
          goto LABEL_115;
        }
        v46 = *(_QWORD*)(v29 + 1208);
      }
      v38 = CudaDriverRoutine_1ba480(&v107,
                                     *(_QWORD*)(*(_QWORD*)(v46 + 16) + 72LL));
      if (v38 != 0) {
        goto LABEL_114;
      }
      v38 = CudaDriverStub_112f50(v107, v46);
      if (v38 != 0) {
        goto LABEL_114;
      }
      v47 = *(_DWORD*)(v29 + 4);
      if (v47 != 0 && (v47 != 2 || *(_BYTE*)(v29 + 155) == 0 &&
                                       *(_BYTE*)(v29 + 156) == 0)) {
        v38 = cuda_driver_1150a0(*(_QWORD*)(v29 + 1208), v107, 0);
        if (v38 != 0) {
          goto LABEL_114;
        }
      }
    }
    if (HIDWORD(v108) != 0) {
    LABEL_99:
      v48 = *(_DWORD*)(v29 + 4);
    LABEL_100:
      if (v48 == 0 || v48 == 13) {
      LABEL_107:
        v11 = 0;
        goto LABEL_115;
      }
      if (v48 == 2) {
      LABEL_105:
        if (*(_BYTE*)(v29 + 155) != 0 || *(_BYTE*)(v29 + 156) != 0) {
          goto LABEL_107;
        }
      }
    LABEL_113:
      v38 =
          CudaDriverStub_112e40(*(_QWORD*)(v29 + 992), *(_QWORD*)(v29 + 1208));
    LABEL_114:
      v11 = v38;
      goto LABEL_115;
    }
    v48 = *(_DWORD*)(v29 + 4);
    v11 = 1;
    switch (v48) {
    case 0:
      v38 = CudaDriverRoutine_c6720(a1, v29, a2, (__int64)v84_.v84, v107, 0);
      if (v38 == 0) {
        goto LABEL_99;
      }
      goto LABEL_114;
    case 1:
    case 3:
    case 6:
    case 7:
    case 8:
    case 9:
    case 12:
      goto LABEL_113;
    case 2:
      goto LABEL_105;
    case 5:
    case 10:
    case 11:
    case 13:
      goto LABEL_100;
    default:
      break;
    }
  LABEL_115:
    v51 = CudaDriverData_14321c8;
    if (*(_DWORD*)((char*)((char*)0x20LL) + (_QWORD)CudaDriverData_14321c8) !=
        0) {
      v52 = *(unsigned __int8*)(a1 + 415);
      LODWORD(v91_.v91) = 104;
      v53 = a1;
      if (v52 != 0) {
        v53 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
      }
      v91_.v92 = v53;
      v91_.v93 = v29;
      v91_.v94 = a2;
      v54 = *(_QWORD*)(v29 + 1240);
      v91_.v96 = *(_DWORD*)(v29 + 4);
      v55 = *(_QWORD*)(v54 + 8);
      v91_.v97 = v11;
      LOBYTE(v91_.v98) = v29 == v55;
      v91_.v102 = *(unsigned __int8*)(v29 + 1412);
      if (v91_.v96 != 0) {
        v91_.v99 = 0;
        LOBYTE(v91_.v100) = 0;
        v91_.v103 = (__typeof__(v91_.v103)){0};
      }
      else {
        v91_.v99 = *(_BYTE*)(v29 + 673);
        LOBYTE(v91_.v100) = *(_BYTE*)(v29 + 672);
        v91_.v103 = *(_OWORD*)v79;
      }
      v91_.v101 = 0;
      cuda_driver_20b420(0x13u, 8u, (__int64)&v91_.v91);
      if (*(_DWORD*)(v29 + 4) == 0) {
        *(_QWORD*)(*(_QWORD*)(v29 + 32) + 992LL) = 0;
      }
      v51 = CudaDriverData_14321c8;
    }
    if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)v51 + 4) == 0) {
      if (v11 != 0 || *(_DWORD*)((char*)((char*)0x20LL) + (_QWORD)v51) == 0) {
        goto LABEL_130;
      }
    LABEL_129:
      v56 = *(_QWORD*)(v29 + 1256);
      if (v56 == 0) {
        goto LABEL_130;
      }
      while (2) {
        v109_.v109[0] = 0;
        v57 = (__int128*)(v56 + 900);
        if (*(_DWORD*)((char*)((__int64*)0x18LL) + (_QWORD)v51 + 4) != 0) {
          v58 = *(_QWORD*)(v56 + 1240);
          v59 = *(_DWORD*)(v56 + 4);
          v60 = *(unsigned __int8*)(v56 + 1412);
          LODWORD(v91_.v91) = 136;
          v61 = *(_QWORD*)(v58 + 8);
          HIDWORD(v91_.v91) = v59;
          DWORD2(v91_.v103) = v60;
          v62 = a1;
          LOBYTE(v91_.v96) = v56 == v61;
          if (*(_BYTE*)(a1 + 415) != 0) {
            v62 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
          }
          v91_.v92 = v62;
          v91_.v93 = v56;
          v91_.v94 = a2;
          v91_.v95 = (char*)v109_.v109 + 4;
          v91_.v100 = v109_.v109;
          if (*(_DWORD*)(v56 + 4) != 0) {
            LOBYTE(v91_.v98) = 0;
            LOBYTE(v91_.v102) = 0;
            goto LABEL_145;
          }
          v63 = *(_BYTE*)(v56 + 672);
          LOBYTE(v91_.v98) = *(_BYTE*)(v56 + 390);
          LOBYTE(v91_.v102) = v63;
          *(_QWORD*)(*(_QWORD*)(v56 + 32) + 992LL) = v56 + 184;
          if (*(_DWORD*)(v56 + 4) != 0) {
          LABEL_145:
            v91_.v99 = 0;
            v91_.v105 = 0;
            v91_.v104 = (__typeof__(v91_.v104)){0};
            v91_.v106 = 0;
          }
          else {
            v91_.v99 = *(_BYTE*)(v56 + 673);
            v91_.v104 = *v57;
            v70 = *(_QWORD*)(v56 + 916);
            v91_.v106 = *(_DWORD*)(v56 + 924);
            v91_.v105 = v70;
          }
          LOBYTE(v91_.v103) = 0;
          cuda_driver_20b420(0x13u, 7u, (__int64)&v91_.v91);
          v51 = CudaDriverData_14321c8;
        }
        if (*(_DWORD*)((char*)((char*)0x20LL) + (_QWORD)v51) != 0) {
          v64 = *(unsigned __int8*)(a1 + 415);
          LODWORD(v91_.v91) = 104;
          v65 = a1;
          if (v64 != 0) {
            v65 = *(_QWORD*)(*(_QWORD*)(a1 + 424) + 96LL);
          }
          v91_.v92 = v65;
          v91_.v93 = v56;
          v91_.v94 = a2;
          v66 = *(_QWORD*)(v56 + 1240);
          v91_.v96 = *(_DWORD*)(v56 + 4);
          v67 = *(_QWORD*)(v66 + 8);
          v91_.v97 = 0;
          LOBYTE(v91_.v98) = v56 == v67;
          v91_.v102 = *(unsigned __int8*)(v56 + 1412);
          if (v91_.v96 != 0) {
            v68 = 0;
            v69 = 0;
            v91_.v103 = (__typeof__(v91_.v103)){0};
          }
          else {
            v68 = *(_BYTE*)(v56 + 673);
            v69 = *(_BYTE*)(v56 + 672);
            v91_.v103 = *v57;
          }
          v91_.v99 = v68;
          LOBYTE(v91_.v100) = v69;
          v91_.v101 = 0;
          cuda_driver_20b420(0x13u, 8u, (__int64)&v91_.v91);
          if (*(_DWORD*)(v56 + 4) == 0) {
            *(_QWORD*)(*(_QWORD*)(v56 + 32) + 992LL) = 0;
          }
          v51 = CudaDriverData_14321c8;
        }
        v56 = *(_QWORD*)(v56 + 1256);
        if (v56 == 0) {
          goto LABEL_130;
        }
        continue;
      }
    }
    if (v11 == 0) {
      goto LABEL_129;
    }
  LABEL_130:
    if (v81 != 0) {
      *(_QWORD*)(v29 + 1208) = v81;
    }
    v7 = v78;
    if (v107 != 0) {
      CudaDriverRoutine_1ba520(v107);
    }
    if (v11 != 0) {
      goto LABEL_37;
    }
    v28 = *(_QWORD*)(v80 + 24);
    if (v28 == 0) {
      goto LABEL_156;
    }
  }
}

__int64 nvidia_e1f00(unsigned __int64* a1, _QWORD* a2, char a3)
{
  unsigned __int64 v3;
  __int64* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  void* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;

  v3 = *a1;
  v7 = CudaDriverData_1423260;
  v8 = *CudaDriverData_1423260;
  if ((a3 & 1) == 0 && v3 < v8) {
    return 803;
  }
  v10 = (v8 - 8) >> 3;
  v11 = (v3 - 8) >> 3;
  if (v11 >= v10) {
    v12 = v10;
  }
  else {
    v12 = v11;
  }
  CudaDriverRoutine_12df40_alt1(CudaDriverData_143bd30,
                                (void (*)(void))cuda_driver_e2030);
  v13 = CudaDriverData_1423268;
  CudaDriverStub_107f90_alt1(CudaDriverData_1423268);
  if (v12 != 0) {
    LODWORD(v14) = 1;
    do {
      v15 = (unsigned int)(v14 - 1);
      if (a1[(unsigned int)v15 + 1] != 0) {
        v16 = CudaDriverRoutine_18cb30(a1, a2, v14, a3 & 2);
        if (v16 != 0) {
          v17 = v16;
          goto LABEL_15;
        }
      }
      else {
        a2[v15 + 1] = v7[v15 + 1];
      }
      v14 = (unsigned int)(v14 + 1);
    } while (v12 >= v14);
  }
  v17 = 0;
  *((_BYTE*)((__int64*)0x10LL) + (_QWORD)v13) = 1;
LABEL_15:
  CudaDriverStub_108070_alt1(&CudaDriverData_143bd18);
  return v17;
}

__int64 nvidia_e26e0(_QWORD* a1, __int128* a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  _QWORD* v12;
  unsigned __int64* v13;
  unsigned int v14;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned __int64 v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  __int128 v30;
  int v31;
  int v32;
  __int64 v33[48];
  struct {
    __int128 v34;
    __int64 v35;
    int v36;
    int v37;
    int v38;
    char v39;
  } v34_;
  struct {
    char gap416_[5];
    _BYTE v40[11];
    __int128 v41;
  } v40_;
  struct {
    __int128 v42;
    __int128 v43;
    __int128 v44;
    __int128 v45;
    __int128 v46;
    __int128 v47;
    __int128 v48;
    __int128 v49;
    __int128 v50;
    __int128 v51;
    __int128 v52;
    __int128 v53;
    __int128 v54;
    __int128 v55;
    __int128 v56;
    __int128 v57;
    __int128 v58;
    __int128 v59;
    __int128 v60;
    __int128 v61;
    __int128 v62;
    __int128 v63;
    __int128 v64;
    __int128 v65;
  } v42_;

  *a3 = 0;
  v6 = CudaDriverRoutine_98340((__int64)a1);
  cuda_driver_108520(v6 + 24);
  v7 = a1[243];
  if (v7 != 0) {
    v8 = CudaDriverData_14358d0;
    if ((unsigned int)CudaDriverData_14358d0 > 1) {
      while (1) {
        v9 = *(_QWORD*)(v7 + 40);
        if (*(_QWORD*)(v9 + 8) == *(_QWORD*)a2 &&
            *(_QWORD*)(v9 + 16) == *((_QWORD*)a2 + 1)) {
          goto LABEL_14;
        }
        v7 = *(_QWORD*)(v7 + 48);
        if (v7 == 0) {
          goto LABEL_15;
        }
      }
    }
    do {
      if (v8 < 2) {
        v10 = CudaDriverStub_1d8c10(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 72LL));
        v8 = CudaDriverData_14358d0;
        if (*(_QWORD*)(v10 + 8) != *(_QWORD*)a2) {
          goto LABEL_8;
        }
      }
      else {
        v10 = *(_QWORD*)(v7 + 40);
        if (*(_QWORD*)(v10 + 8) != *(_QWORD*)a2) {
          goto LABEL_8;
        }
      }
      if (*(_QWORD*)(v10 + 16) == *((_QWORD*)a2 + 1)) {
        goto LABEL_14;
      }
    LABEL_8:
      v7 = *(_QWORD*)(v7 + 48);
    } while (v7 != 0);
  }
LABEL_15:
  v12 = (_QWORD*)CudaDriverRoutine_12e510(1, 64);
  if (v12 == nullptr) {
    v11 = 0;
    goto LABEL_24;
  }
  *v12 = a1;
  v13 = v12 + 2;
  v7 = (__int64)v12;
  v14 = CudaDriverStub_203210((__int64)a1, 0, 2, 0, (__int64)(v12 + 2));
  if (v14 != 0) {
    goto LABEL_17;
  }
  if ((unsigned int)CudaDriverData_14358d0 < 2) {
    v21 = *a2;
    v22 = a1[10];
    v42_.v43 = (__typeof__(v42_.v43)){0};
    v42_.v44 = (__typeof__(v42_.v44)){0};
    v42_.v45 = (__typeof__(v42_.v45)){0};
    v42_.v46 = (__typeof__(v42_.v46)){0};
    v42_.v47 = (__typeof__(v42_.v47)){0};
    v42_.v48 = (__typeof__(v42_.v48)){0};
    v42_.v49 = (__typeof__(v42_.v49)){0};
    v42_.v50 = (__typeof__(v42_.v50)){0};
    v42_.v51 = (__typeof__(v42_.v51)){0};
    v42_.v52 = (__typeof__(v42_.v52)){0};
    v42_.v53 = (__typeof__(v42_.v53)){0};
    v42_.v54 = v21;
    v42_.v55 = (__typeof__(v42_.v55)){0};
    v42_.v56 = (__typeof__(v42_.v56)){0};
    v42_.v57 = (__typeof__(v42_.v57)){0};
    v42_.v58 = (__typeof__(v42_.v58)){0};
    v42_.v59 = (__typeof__(v42_.v59)){0};
    v42_.v60 = (__typeof__(v42_.v60)){0};
    v42_.v61 = (__typeof__(v42_.v61)){0};
    v42_.v62 = (__typeof__(v42_.v62)){0};
    v42_.v63 = (__typeof__(v42_.v63)){0};
    HIDWORD(v42_.v63) = -1;
    if ((CudaDriverData_1436502 & 1) != 0) {
      v23 = 0x802119000211LL;
    }
    else {
      v23 = 0x802119000219LL;
    }
    *(_QWORD*)&v42_.v42 = v23;
    *((_QWORD*)&v42_.v42 + 1) = 0x40000;
    v42_.v64 = (__typeof__(v42_.v64)){0};
    v42_.v65 = (__typeof__(v42_.v65)){0};
    v14 =
        cuda_driver_1da1b0(v22, (__int64*)&v42_.v42, 81920, (_QWORD*)(v7 + 8));
    if (v14 == 0) {
      v14 = cuda_driver_203220(*v13, *(_QWORD*)(v7 + 8), 0, 0, 0);
      if (v14 == 0) {
        goto LABEL_34;
      }
    }
  }
  else {
    v19 = CudaDriverRoutine_12e510(32, 4096);
    *(_QWORD*)(v7 + 24) = v19;
    if (v19 == 0) {
      v11 = 2;
      goto LABEL_18;
    }
    v20 = *(unsigned int*)(a1[8] + 4248LL);
    if ((unsigned int)CudaDriverStub_12db70(0, a2) != 0) {
      v11 = 205;
      goto LABEL_18;
    }
    v25 = a1[10];
    memset(&v33[2], 0, 336);
    v26 = (((unsigned __int64)(unsigned int)(v20 - 1) + 20) / v20 * v20) << 12;
    HIDWORD(v33[43]) = -1;
    if ((CudaDriverData_1436502 & 1) != 0) {
      v27 = 0x105000211LL;
    }
    else {
      v27 = 0x105000219LL;
    }
    v33[0] = v27;
    v33[1] = 0x400040000LL;
    memset(&v33[44], 0, 32);
    v14 = cuda_driver_1da1b0(v25, v33, v26, (_QWORD*)(v7 + 32));
    if (v14 == 0) {
      v28 = CudaDriverStub_1dbab0(*(_QWORD*)(v7 + 32));
      memset_plt_alt1(v28, 0, v26);
      v29 = a2[2];
      v30 = a2[3];
      v34_.v39 = 0;
      v34_.v37 = 0;
      memset(v40_.v40, 0, sizeof(v40_.v40));
      v42_.v44 = (__typeof__(v42_.v44)){0};
      v42_.v45 = (__typeof__(v42_.v45)){0};
      v34_.v35 = 0x10000;
      v31 = *((_DWORD*)a2 + 6);
      v32 = *((_DWORD*)a2 + 7);
      v34_.v34 = v29;
      v40_.v41 = v30;
      v34_.v36 = v31;
      v34_.v38 = v32;
      v42_.v42 = CudaDriverData_1115ec0;
      v42_.v43 = (__typeof__(v42_.v43)){0};
      v42_.v46 = (__typeof__(v42_.v46)){0};
      v42_.v47 = (__typeof__(v42_.v47)){0};
      v42_.v48 = (__typeof__(v42_.v48)){0};
      v42_.v49 = (__typeof__(v42_.v49)){0};
      v42_.v50 = (__typeof__(v42_.v50)){0};
      v42_.v51 = (__typeof__(v42_.v51)){0};
      v42_.v52 = (__typeof__(v42_.v52)){0};
      v42_.v53 = (__typeof__(v42_.v53)){0};
      v42_.v54 = (__typeof__(v42_.v54)){0};
      v42_.v55 = (__typeof__(v42_.v55)){0};
      v42_.v56 = (__typeof__(v42_.v56)){0};
      v42_.v57 = (__typeof__(v42_.v57)){0};
      v42_.v58 = (__typeof__(v42_.v58)){0};
      v42_.v59 = (__typeof__(v42_.v59)){0};
      v42_.v60 = (__typeof__(v42_.v60)){0};
      v42_.v61 = (__typeof__(v42_.v61)){0};
      v42_.v62 = (__typeof__(v42_.v62)){0};
      v42_.v63 = (__typeof__(v42_.v63)){0};
      v42_.v64 = (__typeof__(v42_.v64)){0};
      v42_.v65 = (__typeof__(v42_.v65)){0};
      v14 = CudaDriverRoutine_1dcc60((__int64)a1, (__int64)&v34_.v34,
                                     (__int64)&v42_.v42, (_QWORD*)(v7 + 8));
      if (v14 == 0) {
        v14 = cuda_driver_203220(*(_QWORD*)(v7 + 16), *(_QWORD*)(v7 + 8),
                                 *(_QWORD*)(v7 + 24), *(_QWORD*)(v7 + 32),
                                 *(_QWORD*)(*(_QWORD*)(v7 + 40) + 24LL));
        if (v14 == 0) {
        LABEL_34:
          *(_QWORD*)(v7 + 48) = a1[243];
          a1[243] = v7;
          v24 = *(_QWORD*)(v7 + 48);
          if (v24 != 0) {
            *(_QWORD*)(v24 + 56) = v7;
          }
        LABEL_14:
          v11 = 0;
          *a3 = v7;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_17:
  v11 = v14;
LABEL_18:
  if (*v13 != 0) {
    CudaDriverRoutine_203100((__int64*)v13);
  }
  v16 = *(_QWORD*)(v7 + 40);
  if (v16 != 0) {
    CudaDriverStub_57450_alt1(v16, 2, 0);
  }
  *(_OWORD*)v7 = (__typeof__(*(_OWORD*)v7)){0};
  *(_OWORD*)(v7 + 16) = (__typeof__(*(_OWORD*)(v7 + 16))){0};
  *(_OWORD*)(v7 + 32) = (__typeof__(*(_OWORD*)(v7 + 32))){0};
  *(_OWORD*)(v7 + 48) = (__typeof__(*(_OWORD*)(v7 + 48))){0};
  CudaDriverRoutine_12e340(v7);
LABEL_24:
  v17 = CudaDriverRoutine_98340((__int64)a1);
  CudaDriverRoutine_1085d0(v17 + 24);
  return v11;
}

__int64* nvidia_10f380(__int64* result)
{
  __int64 v1;
  _BOOL8* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (result != nullptr) {
    v1 = result[2];
    v2 = (_BOOL8*)result;
    if (v1 != 0) {
      CudaDriverRoutine_ee2a0(*result, v1);
      v2[2] = false;
    }
    v3 = v2[4];
    if (v3 != 0) {
      v4 = *v2;
      if (CudaDriverRoutine_98110(*v2)) {
        v5 = cuda_driver_helpers_1db920(*(_QWORD*)(v4 + 80), v3);
        v6 = v5;
        if (v5 == 0) {
          return (_QWORD*)(((_UNKNOWN*)0x3E4LL) + 3);
        }
        CudaDriverRoutine_ee330(v5);
        CudaDriverStub_1db190(&v6);
      }
      else {
        CudaDriverRoutine_ee2a0(v4, v3);
      }
      v2[4] = false;
    }
    CudaDriverRoutine_12e340((__int64)v2);
    return nullptr;
  }
  return result;
}

__int64 nvidia_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;

  v6 = CudaDriverRoutine_98340(a1);
  cuda_driver_1084c0(v6 + 24);
  v7 = *(_QWORD*)(a3 + 8);
  v8 = *(_DWORD*)(a1 + 8);
  if (v8 == 1) {
  LABEL_4:
    if (*a2 != 0) {
      v12 = 0;
      do {
        CudaDriverRoutine_1197e0(*(_QWORD*)(a2[2] + 8 * v12));
        *(_QWORD*)(a2[2] + 8 * v12++) = 0;
      } while (v12 < *a2);
    }
    v13 = 0;
    *a2 = 0;
    goto LABEL_19;
  }
  while (v8 != 3) {
    v9 = CudaDriverRoutine_98340(a1);
    v10 = CudaDriverRoutine_1085b0(v9 + 24);
    CudaDriverStub_12dc90(v10);
    v11 = CudaDriverRoutine_98340(a1);
    cuda_driver_1084c0(v11 + 24);
    v8 = *(_DWORD*)(a1 + 8);
    if (v8 == 1) {
      goto LABEL_4;
    }
  }
  v23 = 0;
  v24 = 0x3C00000000LL;
  v14 = CudaDriverStub_116790(&v23, a1, &v24);
  if (v14 != 0) {
  LABEL_16:
    v13 = v14;
  LABEL_17:
    v20 = v23;
    if (v23 == 0) {
      goto LABEL_19;
    }
  LABEL_18:
    CudaDriverRoutine_116fa0(v20);
    goto LABEL_19;
  }
  if (*a2 == 0) {
  LABEL_15:
    v14 = CudaDriverRoutine_114a80(v7, v23, 1);
    goto LABEL_16;
  }
  v15 = 0;
  while (1) {
    v16 = *(_QWORD*)(a2[2] + 8 * v15);
    CudaDriverStub_107f90(v16 + 592);
    v17 = v23;
    v18 = *(_QWORD*)(v16 + 8);
    if (v18 != 0) {
      v19 = cuda_driver_unplaced_9_1bb6a0(
          *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v23), v18);
      if (v19 != 0) {
        break;
      }
    }
    v13 = cuda_driver_unplaced_9_1bb6a0(
        *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v17), *(_QWORD*)(v16 + 584));
    CudaDriverStub_108070(v16 + 592);
    if (v13 != 0) {
      goto LABEL_17;
    }
    if (++v15 >= *a2) {
      goto LABEL_15;
    }
  }
  v13 = v19;
  CudaDriverStub_108070(v16 + 592);
  v20 = v23;
  if (v23 != 0) {
    goto LABEL_18;
  }
LABEL_19:
  *(_DWORD*)a3 = v13;
  v21 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_1085b0(v21 + 24);
}

__int64 nvidia_135980(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  char v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64* v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  char v43;
  unsigned int v44;
  _BYTE v45[97];
  _BYTE v46[7];
  __int64 v47;
  _DWORD v48[3];

  if (CudaDriverData_14403d8 != 2) {
    if ((unsigned int)CudaDriverStub_12dd40((__int64)&CudaDriverData_14403d8,
                                            1u, 0) == 0) {
      v42 = NvRmGpuLibOpen_plt(0);
      if (v42 != 0) {
        CudaDriverData_14403e0 = v42;
      }
      CudaDriverData_14403dc = v42 != 0;
      CudaDriverData_14403d8 = 2;
      if (v42 != 0) {
        goto LABEL_6;
      }
      return 10;
    }
    while (CudaDriverData_14403d8 == 1) {
      CudaDriverStub_12dca0(100);
    }
  }
  if (CudaDriverData_14403dc != 1) {
    return 10;
  }
LABEL_6:
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 && *(_QWORD*)(v2 + 40) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
    if (HIDWORD(v3) == 0) {
      v4 = *(_QWORD*)(a1 + 16);
      v5 = *(_DWORD*)(a1 + 36);
      if (v5 == 1) {
        goto LABEL_12;
      }
      if (v5 == 2) {
        v5 = 0;
      LABEL_12:
        v48[0] = v5;
        if (v3 != 0) {
          v6 = 1;
          v7 = 0;
          while (1) {
            v8 = 0;
            v47 = 0;
            if ((unsigned int)v3 >= 0x7C) {
              v9 = 124;
            }
            else {
              v9 = (unsigned int)v3;
            }
            if ((unsigned int)v9 <= 1) {
              v10 = 1;
            }
            else {
              v10 = (unsigned int)v9;
            }
            if ((unsigned int)v3 >= 4) {
              v11 = 0;
              v8 = 0;
              v12 = v7;
              do {
                v13 = v4 + 32LL * v12;
                v14 = &v45[v11];
                v8 += 4;
                v11 += 96;
                *v14 = *(_BYTE*)v13;
                v14[1] = *(_BYTE*)(v13 + 2);
                *((_DWORD*)v14 + 1) = *(_DWORD*)(v13 + 12);
                *((_QWORD*)v14 + 1) =
                    *(unsigned int*)(v13 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v13 + 16) << 32);
                *((_QWORD*)v14 + 2) =
                    *(unsigned int*)(v13 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v13 + 24) << 32);
                v15 = v4 + 32LL * (v12 + 1);
                v14[24] = *(_BYTE*)v15;
                v14[25] = *(_BYTE*)(v15 + 2);
                *((_DWORD*)v14 + 7) = *(_DWORD*)(v15 + 12);
                *((_QWORD*)v14 + 4) =
                    *(unsigned int*)(v15 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v15 + 16) << 32);
                *((_QWORD*)v14 + 5) =
                    *(unsigned int*)(v15 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v15 + 24) << 32);
                v16 = v4 + 32LL * (v12 + 2);
                v14[48] = *(_BYTE*)v16;
                v14[49] = *(_BYTE*)(v16 + 2);
                *((_DWORD*)v14 + 13) = *(_DWORD*)(v16 + 12);
                *((_QWORD*)v14 + 7) =
                    *(unsigned int*)(v16 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v16 + 16) << 32);
                *((_QWORD*)v14 + 8) =
                    *(unsigned int*)(v16 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v16 + 24) << 32);
                v17 = v12 + 3;
                v12 += 4;
                v18 = v4 + 32 * v17;
                v14[72] = *(_BYTE*)v18;
                v14[73] = *(_BYTE*)(v18 + 2);
                *((_DWORD*)v14 + 19) = *(_DWORD*)(v18 + 12);
                *((_QWORD*)v14 + 10) =
                    *(unsigned int*)(v18 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v18 + 16) << 32);
                *((_QWORD*)v14 + 11) =
                    *(unsigned int*)(v18 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v18 + 24) << 32);
              } while (96 * (v10 >> 2) != v11);
            }
            v19 = v10 & 3;
            if ((v10 & 3) != 0) {
              v20 = (unsigned __int64*)&v45[24 * v8 + 8];
              v21 = v7 + v8;
              do {
                v22 = v4 + 32LL * v21;
                --v19;
                ++v21;
                *((_BYTE*)v20 - 8) = *(_BYTE*)v22;
                *((_BYTE*)v20 - 7) = *(_BYTE*)(v22 + 2);
                *((_DWORD*)v20 - 1) = *(_DWORD*)(v22 + 12);
                *v20 = *(unsigned int*)(v22 + 20) |
                       ((unsigned __int64)*(unsigned int*)(v22 + 16) << 32);
                v20[1] = *(unsigned int*)(v22 + 28) |
                         ((unsigned __int64)*(unsigned int*)(v22 + 24) << 32);
                v20 += 3;
              } while (v19 != 0);
            }
            v23 = NvRmGpuProfilerV2RegOpsExec_plt(*(_QWORD*)(v2 + 40), v45, v9,
                                                  v48, &v47);
            if (v23 != 0) {
              break;
            }
            if ((unsigned int)v3 >= 8) {
              v25 = v46;
              v24 = 0;
              do {
                v26 = v7 + (unsigned int)v24;
                v24 += 8;
                v27 = v4 + 32 * v26;
                *(_BYTE*)(v27 + 2) = *(v25 - 96);
                *(_QWORD*)(v27 + 16) = __ROR8__(*(_QWORD*)(v25 - 89), 32);
                v28 = v4 + 32LL * (unsigned int)(v26 + 1);
                *(_BYTE*)(v28 + 2) = *(v25 - 72);
                *(_QWORD*)(v28 + 16) = __ROR8__(*(_QWORD*)(v25 - 65), 32);
                v29 = v4 + 32LL * (unsigned int)(v26 + 2);
                *(_BYTE*)(v29 + 2) = *(v25 - 48);
                *(_QWORD*)(v29 + 16) = __ROR8__(*(_QWORD*)(v25 - 41), 32);
                v30 = v4 + 32LL * (unsigned int)(v26 + 3);
                *(_BYTE*)(v30 + 2) = *(v25 - 24);
                *(_QWORD*)(v30 + 16) = __ROR8__(*(_QWORD*)(v25 - 17), 32);
                v31 = v4 + 32LL * (unsigned int)(v26 + 4);
                *(_BYTE*)(v31 + 2) = *v25;
                *(_QWORD*)(v31 + 16) = __ROR8__(*(_QWORD*)(v25 + 7), 32);
                v32 = v4 + 32LL * (unsigned int)(v26 + 5);
                *(_BYTE*)(v32 + 2) = v25[24];
                *(_QWORD*)(v32 + 16) = __ROR8__(*(_QWORD*)(v25 + 31), 32);
                v33 = v4 + 32LL * (unsigned int)(v26 + 6);
                v34 = v4 + 32LL * (unsigned int)(v26 + 7);
                *(_BYTE*)(v33 + 2) = v25[48];
                *(_QWORD*)(v33 + 16) = __ROR8__(*(_QWORD*)(v25 + 55), 32);
                *(_BYTE*)(v34 + 2) = v25[72];
                v35 = *(_QWORD*)(v25 + 79);
                v25 += 192;
                *(_QWORD*)(v34 + 16) = __ROR8__(v35, 32);
              } while ((v10 & 0x78) != v24);
            }
            else {
              v24 = 0;
            }
            v36 = v10 & 7;
            if ((v10 & 7) != 0) {
              v37 = &v45[24 * v24 + 8];
              v38 = v7 + v24;
              do {
                v39 = v4 + 32LL * v38++;
                --v36;
                *(_BYTE*)(v39 + 2) = *((_BYTE*)v37 - 7);
                v40 = *v37;
                v37 += 3;
                *(_QWORD*)(v39 + 16) = __ROR8__(v40, 32);
              } while (v36 != 0);
            }
            LODWORD(v3) = v3 - v9;
            v7 += v9;
            v6 &= v47;
            if ((_DWORD)v3 == 0) {
              v43 = v6 & 1;
              goto LABEL_49;
            }
          }
          if (v23 == 4) {
            v44 = 5;
          }
          else {
            v44 = 7;
          }
          if (v23 == 196623) {
            return 9;
          }
          else {
            return v44;
          }
        }
        else {
          v43 = 1;
        LABEL_49:
          *(_BYTE*)(a1 + 40) = v43;
          return 0;
        }
      }
    }
  }
  return 5;
}

__int64 nvidia_138230()
{
  __int64 result;
  _QWORD* v1;

  result = NvRmGpuLibGetVersionInfo_plt();
  if ((vmaxvq_u32(
           vmvnq_s8(vceqq_s32(*(int32x4_t*)((char*)((__int64*)0x10LL) +
                                            (_QWORD)CudaDriverData_1423388),
                              COERCE_AS(int32x4_t, CudaDriverData_11162f0)))) &
       1) == 0) {
    v1 = CudaDriverData_1423390;
    CudaDriverData_1432e78 = (__int64)CudaDriverData_1423390;
    goto LABEL_5;
  }
  v1 = (_QWORD*)CudaDriverData_1432e78;
  if (CudaDriverData_1432e78 != 0) {
  LABEL_5:
    v1[4] = CudaDriverRoutine_137750;
    v1[5] = CudaDriverRoutine_137830;
    v1[16] = cuda_driver_1378a0;
    v1[17] = cuda_driver_1378c0;
    v1[18] = cuda_driver_1378e0;
    v1[19] = cuda_driver_137940;
    v1[36] = CudaDriverStub_137960;
    v1[51] = CudaDriverStub_137980;
    v1[12] = CudaDriverRoutine_137900;
    v1[13] = CudaDriverRoutine_137920;
    v1[53] = CudaDriverStub_1379a0;
  }
  return result;
}

void nvidia_1b3d20(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 i;
  int32x4_t v6;
  int32x4_t v7;
  int32x4_t v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t* v11;
  __int64 v12;
  int v13;
  char* v14;
  char v15;
  _DWORD v16[4];
  __int64 v17;
  _DWORD v18[4];
  __int64 v19;
  _BYTE v20[1024];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v20, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v18, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v16, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  if ((*(unsigned int (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(
          a1, a2) != 801) {
    return;
  }
  if ((_DWORD)v4 != 0) {
    if ((unsigned int)v4 < 8) {
      for (i = 0; i != v4; ++i) {
      LABEL_8:
        v18[i] = 5264652;
        v16[i] = i;
      }
      goto LABEL_9;
    }
    LANES128(v6).n128_u64[0] = 0x400000004LL;
    LANES128(v6).n128_u64[1] = 0x400000004LL;
    LANES128(v7).n128_u64[0] = 0x800000008LL;
    LANES128(v7).n128_u64[1] = 0x800000008LL;
    i = (unsigned int)v4 & 0xFFFFFFF8;
    v8 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
    v9 = (int32x4_t*)&v17;
    v10 = vdupq_n_s32(0x50550Cu);
    v11 = (int32x4_t*)&v19;
    v12 = i;
    do {
      v11[-1] = v10;
      *v11 = v10;
      v12 -= 8;
      v11 += 2;
      v9[-1] = v8;
      *v9 = vaddq_s32(v8, v6);
      v9 += 2;
      v8 = vaddq_s32(v8, v7);
    } while (v12 != 0);
    if (i != v4) {
      goto LABEL_8;
    }
  }
LABEL_9:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_111420(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && (_DWORD)v4 != 0) {
    v14 = v20;
    while (1) {
      v15 = *v14;
      v14 += 4;
      if ((v15 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return;
      }
    }
    *a2 = 1;
  }
}

__int64 nvidia_1c0c40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  unsigned int v6;
  unsigned int v7;
  __int64 v9;
  __int64 result;
  int v11;
  unsigned int v12;
  char v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  _QWORD* v26;
  __int64 (*v27)(void);
  unsigned __int64 v28;
  __int64 v29;
  _DWORD* v30;
  unsigned int v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  char v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  char v41[4];
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;

  v4 = *(_QWORD*)(a1 + 24);
  v6 = a3;
  v7 = a2;
  v9 = a1 + 23375432;
  result = (*(__int64 (**)(__int64, __int64, __int64, unsigned int*))(
      a1 + 23375432))(a1, a2, a3, &v39);
  if ((_DWORD)result != 0) {
    return result;
  }
  v11 = 9;
  switch (a4) {
  case 0:
  case 3:
  case 7:
  case 10:
  case 12:
  case 17:
  case 19:
  case 20:
  case 21:
    v12 = v39;
    v41[0] = 0;
    v44 = 0;
    v40 = 0;
    v38 = v9;
    if (v39 == 0) {
      goto LABEL_20;
    }
    if (v6 > 0x3F) {
      if (v6 - 64 > 0xFFFFFFBE) {
        goto LABEL_20;
      }
      v13 = 64 - v6;
      if (v6 > 0x40) {
        v13 = 0;
      }
      if (((*(_QWORD*)(a1 + 91280LL * v7 + 1168) >> ((unsigned __int8)v6 - 64)
                                                        << v13) &
           1) == 0) {
        goto LABEL_20;
      }
    }
    else if (((*(_QWORD*)(a1 + 91280LL * v7 + 1160) >> v6) & 1) == 0) {
      goto LABEL_20;
    }
    v14 = a1 + 91280LL * v7 + 1096 + 1424LL * v6;
    result = CudaDriverRoutine_19bcb0(*(_QWORD*)(v14 + 160),
                                      *(_QWORD*)(a1 + 24), &v44, 2, v41, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (v41[0] != 1) {
      goto LABEL_20;
    }
    if (*(_QWORD*)(a1 + 24) == 0) {
      return 29;
    }
    result = (*(__int64 (**)(__int64, _QWORD, _QWORD, unsigned int*))(
        v9 + 328))(a1, v7, v6, &v40);
    if ((_DWORD)result == 0) {
      result = (*(__int64 (**)(__int64, _QWORD, unsigned __int64*, __int64))(
          v9 + 208))(a1, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + v40, &v42, 4);
      if ((_DWORD)result == 0) {
        if ((_DWORD)v42 == 65539) {
          v37 = v4;
          v15 = v14 + 144;
          CudaDriverRoutine_1caa40((__int64*)(a1 + 91280LL * v7 + 1200), v6, 1u,
                                   1);
          v16 = 0;
          v17 = 0;
          *(_BYTE*)(a1 + 91280LL * v7 + 1192) = 1;
          *(_BYTE*)(a1 + 91280LL * v7 + 1229) = 1;
          do {
            if ((v12 & 1) != 0) {
              result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD,
                                       unsigned __int64*))(v9 + 728))(
                  a1, v7, v6, (unsigned int)v17, &v43);
              if ((_DWORD)result != 0) {
                return result;
              }
              *(_DWORD*)(v15 + 864 + 4 * v17) = 12;
              v16 |= 1 << v17;
            }
            ++v17;
            v12 >>= 1;
          } while (v17 != 32);
          v4 = v37;
          goto LABEL_21;
        }
      LABEL_20:
        v16 = 0;
      LABEL_21:
        v18 = v39;
        v19 = 0;
        v20 = a1 + 91280LL * v7 + 1096 + 1424LL * v6;
        v36 = v6 - 64;
        v21 = 64 - v6;
        if (v6 > 0x40) {
          v21 = 0;
        }
        v35 = v21;
        while (1) {
          if ((v18 & 1) == 0 || (v16 & 1) != 0) {
            goto LABEL_25;
          }
          result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD,
                                   unsigned int*))(v9 + 1488))(
              *(_QWORD*)(v4 + 608), v7, v6, (unsigned int)v19, &v40);
          if ((_DWORD)result != 0) {
            return result;
          }
          v22 = *(_QWORD*)(v20 + 160);
          v23 = v4;
          v24 = v40;
          v25 = CudaDriverStub_1a0ee0(a1, *(_QWORD*)(v20 + 152));
          if (v25 == 0) {
            return 21;
          }
          if (*(_DWORD*)(v25 + 48) != 0) {
            v26 = *(_QWORD**)(v25 + 8);
            if (*(_DWORD*)(v26[9] + 72LL) >= 3u && v26[8] != 0 &&
                v24 < *(_DWORD*)(v20 + 680)) {
              if (v6 > 0x3F) {
                if (v36 <= 0xFFFFFFBE &&
                    ((*(_QWORD*)(a1 + 91280LL * v7 + 1168) >> v36 << v35) &
                     1) != 0) {
                LABEL_39:
                  v33 = v26[5];
                  v34 = v26[8];
                  v32 = v26[6];
                  v27 = *(__int64 (**)(void))(v38 + 616);
                  v42 = v33;
                  result = v27();
                  if ((_DWORD)result != 0) {
                    return result;
                  }
                  result = (*(__int64 (**)(unsigned __int64, unsigned __int64*,
                                           _QWORD))(v38 + 616))(v22, &v43, 0);
                  if ((_DWORD)result != 0) {
                    return result;
                  }
                  result =
                      CudaDriverRoutine_1cab00(*(_QWORD*)(a1 + 24), v43, &v44);
                  if ((_DWORD)result != 0) {
                    return result;
                  }
                  if (v44 != 0) {
                    v28 = v43;
                  }
                  else {
                    v28 = v22;
                  }
                  if (v28 > v42 && v28 > v33 + v34 - v32) {
                    *(_BYTE*)(a1 + 91280LL * v7 + 1192) = 1;
                    *(_BYTE*)(a1 + 91280LL * v7 + 1229) = 1;
                    *(_DWORD*)(v20 + 1008 + 4 * v19) = 2;
                  }
                }
              }
              else if (((*(_QWORD*)(a1 + 91280LL * v7 + 1160) >> v6) & 1) !=
                       0) {
                goto LABEL_39;
              }
            }
          }
          v4 = v23;
          v9 = v38;
        LABEL_25:
          ++v19;
          v18 >>= 1;
          v16 >>= 1;
          if (v19 == 32) {
            return 0;
          }
        }
      }
    }
    return result;
  case 1:
  case 2:
  case 22:
    goto LABEL_54;
  case 4:
  case 5:
  case 6:
    v11 = 8;
    goto LABEL_54;
  case 8:
  case 9:
  case 11:
  case 13:
  case 18:
  case 33:
    v11 = 4;
    goto LABEL_54;
  case 14:
    v11 = 5;
    goto LABEL_54;
  case 15:
    v11 = 6;
    goto LABEL_54;
  case 16:
    v11 = 7;
    goto LABEL_54;
  case 23:
    v11 = 14;
    goto LABEL_54;
  default:
    v11 = -1;
  LABEL_54:
    v29 = a1 + 91280LL * v7;
    v30 = (_DWORD*)(v29 + 1424LL * v6);
    *(_BYTE*)(v29 + 1192) = 1;
    *(_BYTE*)(v29 + 1229) = 1;
    v31 = v39;
    if ((v39 & 1) != 0) {
      v30[526] = v11;
      if ((v31 & 2) == 0) {
      LABEL_56:
        if ((v31 & 4) == 0) {
          goto LABEL_57;
        }
        goto LABEL_89;
      }
    }
    else if ((v39 & 2) == 0) {
      goto LABEL_56;
    }
    v30[527] = v11;
    if ((v31 & 4) == 0) {
    LABEL_57:
      if ((v31 & 8) == 0) {
        goto LABEL_58;
      }
      goto LABEL_90;
    }
  LABEL_89:
    v30[528] = v11;
    if ((v31 & 8) == 0) {
    LABEL_58:
      if ((v31 & 0x10) == 0) {
        goto LABEL_59;
      }
      goto LABEL_91;
    }
  LABEL_90:
    v30[529] = v11;
    if ((v31 & 0x10) == 0) {
    LABEL_59:
      if ((v31 & 0x20) == 0) {
        goto LABEL_60;
      }
      goto LABEL_92;
    }
  LABEL_91:
    v30[530] = v11;
    if ((v31 & 0x20) == 0) {
    LABEL_60:
      if ((v31 & 0x40) == 0) {
        goto LABEL_61;
      }
      goto LABEL_93;
    }
  LABEL_92:
    v30[531] = v11;
    if ((v31 & 0x40) == 0) {
    LABEL_61:
      if ((v31 & 0x80) == 0) {
        goto LABEL_62;
      }
      goto LABEL_94;
    }
  LABEL_93:
    v30[532] = v11;
    if ((v31 & 0x80) == 0) {
    LABEL_62:
      if ((v31 & 0x100) == 0) {
        goto LABEL_63;
      }
      goto LABEL_95;
    }
  LABEL_94:
    v30[533] = v11;
    if ((v31 & 0x100) == 0) {
    LABEL_63:
      if ((v31 & 0x200) == 0) {
        goto LABEL_64;
      }
      goto LABEL_96;
    }
  LABEL_95:
    v30[534] = v11;
    if ((v31 & 0x200) == 0) {
    LABEL_64:
      if ((v31 & 0x400) == 0) {
        goto LABEL_65;
      }
      goto LABEL_97;
    }
  LABEL_96:
    v30[535] = v11;
    if ((v31 & 0x400) == 0) {
    LABEL_65:
      if ((v31 & 0x800) == 0) {
        goto LABEL_66;
      }
      goto LABEL_98;
    }
  LABEL_97:
    v30[536] = v11;
    if ((v31 & 0x800) == 0) {
    LABEL_66:
      if ((v31 & 0x1000) == 0) {
        goto LABEL_67;
      }
      goto LABEL_99;
    }
  LABEL_98:
    v30[537] = v11;
    if ((v31 & 0x1000) == 0) {
    LABEL_67:
      if ((v31 & 0x2000) == 0) {
        goto LABEL_68;
      }
      goto LABEL_100;
    }
  LABEL_99:
    v30[538] = v11;
    if ((v31 & 0x2000) == 0) {
    LABEL_68:
      if ((v31 & 0x4000) == 0) {
        goto LABEL_69;
      }
      goto LABEL_101;
    }
  LABEL_100:
    v30[539] = v11;
    if ((v31 & 0x4000) == 0) {
    LABEL_69:
      if ((v31 & 0x8000) == 0) {
        goto LABEL_70;
      }
      goto LABEL_102;
    }
  LABEL_101:
    v30[540] = v11;
    if ((v31 & 0x8000) == 0) {
    LABEL_70:
      if ((v31 & 0x10000) == 0) {
        goto LABEL_71;
      }
      goto LABEL_103;
    }
  LABEL_102:
    v30[541] = v11;
    if ((v31 & 0x10000) == 0) {
    LABEL_71:
      if ((v31 & 0x20000) == 0) {
        goto LABEL_72;
      }
      goto LABEL_104;
    }
  LABEL_103:
    v30[542] = v11;
    if ((v31 & 0x20000) == 0) {
    LABEL_72:
      if ((v31 & 0x40000) == 0) {
        goto LABEL_73;
      }
      goto LABEL_105;
    }
  LABEL_104:
    v30[543] = v11;
    if ((v31 & 0x40000) == 0) {
    LABEL_73:
      if ((v31 & 0x80000) == 0) {
        goto LABEL_74;
      }
      goto LABEL_106;
    }
  LABEL_105:
    v30[544] = v11;
    if ((v31 & 0x80000) == 0) {
    LABEL_74:
      if ((v31 & 0x100000) == 0) {
        goto LABEL_75;
      }
      goto LABEL_107;
    }
  LABEL_106:
    v30[545] = v11;
    if ((v31 & 0x100000) == 0) {
    LABEL_75:
      if ((v31 & 0x200000) == 0) {
        goto LABEL_76;
      }
      goto LABEL_108;
    }
  LABEL_107:
    v30[546] = v11;
    if ((v31 & 0x200000) == 0) {
    LABEL_76:
      if ((v31 & 0x400000) == 0) {
        goto LABEL_77;
      }
      goto LABEL_109;
    }
  LABEL_108:
    v30[547] = v11;
    if ((v31 & 0x400000) == 0) {
    LABEL_77:
      if ((v31 & 0x800000) == 0) {
        goto LABEL_78;
      }
      goto LABEL_110;
    }
  LABEL_109:
    v30[548] = v11;
    if ((v31 & 0x800000) == 0) {
    LABEL_78:
      if ((v31 & 0x1000000) == 0) {
        goto LABEL_79;
      }
      goto LABEL_111;
    }
  LABEL_110:
    v30[549] = v11;
    if ((v31 & 0x1000000) == 0) {
    LABEL_79:
      if ((v31 & 0x2000000) == 0) {
        goto LABEL_80;
      }
      goto LABEL_112;
    }
  LABEL_111:
    v30[550] = v11;
    if ((v31 & 0x2000000) == 0) {
    LABEL_80:
      if ((v31 & 0x4000000) == 0) {
        goto LABEL_81;
      }
      goto LABEL_113;
    }
  LABEL_112:
    v30[551] = v11;
    if ((v31 & 0x4000000) == 0) {
    LABEL_81:
      if ((v31 & 0x8000000) == 0) {
        goto LABEL_82;
      }
      goto LABEL_114;
    }
  LABEL_113:
    v30[552] = v11;
    if ((v31 & 0x8000000) == 0) {
    LABEL_82:
      if ((v31 & 0x10000000) == 0) {
        goto LABEL_83;
      }
      goto LABEL_115;
    }
  LABEL_114:
    v30[553] = v11;
    if ((v31 & 0x10000000) == 0) {
    LABEL_83:
      if ((v31 & 0x20000000) == 0) {
        goto LABEL_84;
      }
    LABEL_116:
      v30[555] = v11;
      if ((v31 & 0x40000000) == 0) {
        goto LABEL_85;
      }
    LABEL_117:
      v30[556] = v11;
      if ((v31 & 0x80000000) == 0) {
        return 0;
      }
      goto LABEL_118;
    }
  LABEL_115:
    v30[554] = v11;
    if ((v31 & 0x20000000) != 0) {
      goto LABEL_116;
    }
  LABEL_84:
    if ((v31 & 0x40000000) != 0) {
      goto LABEL_117;
    }
  LABEL_85:
    if ((v31 & 0x80000000) == 0) {
      return 0;
    }
  LABEL_118:
    result = 0;
    v30[557] = v11;
    return result;
  }
}

__int64 nvidia_1d47c0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  int32x4_t* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int32* v11;
  _DWORD* v12;
  unsigned __int32 v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(int32x4_t**)(a1 + 16104);
    if ((unsigned int)v4 >= 8 &&
        (unsigned __int64)((char*)v23 - (char*)v6 - 32) >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = v6 + 3;
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = LANES128(v6[2]).n128_u32[v9] + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = &LANES128(v6[3]).n128_u32[v9 + 3];
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

void nvidia_1fb7e0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int32x2_t v20;
  unsigned int v21;
  int32x2_t v22;
  __int64 v23;
  int v24;
  int32x2_t v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64* v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  int32x4_t* v59;
  float* v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int v64;
  int32x4_t v65;
  int32x4_t v66;
  _BYTE v67[3];
  _BYTE v68[6144];
  float32x4x3_t v69;
  float32x4x3_t v70;

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v68, 0, 6144),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v67, 0, 12288),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(_QWORD*)(a1 + 64);
  v5 = *(_DWORD*)(v4 + 3736);
  v6 = (unsigned int)(v5 * *(_DWORD*)(v4 + 3756));
  v7 = *(_DWORD*)(v4 + 3724);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 16104);
    v9 = v8 + 24;
    if ((unsigned int)v6 < 0x41) {
      if (v7 >= 0xC &&
          (v5 == 1 ? (v12 = v7 - 1431655766 >= 0xAAAAAAAB) : (v12 = false),
           v12 && (v9 >= (unsigned __int64)&v68[12 * v7] ||
                   (unsigned __int64)v68 >=
                       v8 + 4 * (unsigned __int64)(v7 - 1) + 28))) {
        v13 = v7 & 0x7FFFFFF8;
        v59 = (int32x4_t*)(v8 + 40);
        v60 = (float*)v68;
        v14 = 3 * (v7 & 0x7FFFFFF8);
        v61 = vdupq_n_s32(0x504624u);
        v62 = vdupq_n_s32(0x504614u);
        v63 = vdupq_n_s32(0x504634u);
        v64 = v7 & 0x7FFFFFF8;
        do {
          v65 = v59[-1];
          v66 = *v59;
          v64 -= 8;
          v59 += 2;
          v69.val[2] = vaddq_s32(v65, v61);
          v69.val[1] = vaddq_s32(v65, v63);
          v69.val[0] = vaddq_s32(v65, v62);
          v70.val[2] = vaddq_s32(v66, v61);
          v70.val[1] = vaddq_s32(v66, v63);
          v70.val[0] = vaddq_s32(v66, v62);
          vst3q_f32(v60, v69);
          vst3q_f32(v60 + 12, v70);
          v60 += 24;
        } while (v64 != 0);
        if (v7 == v13) {
          goto LABEL_22;
        }
      }
      else {
        v13 = 0;
        v14 = 0;
      }
      v15 = v13 * v5;
      do {
        v16 = *(_DWORD*)(v9 + 4LL * v15);
        v17 = v14 + 1;
        v18 = v14 + 2;
        ++v13;
        v15 += v5;
        v16 += 5260820;
        *(_DWORD*)&v68[4 * v14] = v16;
        v14 += 3;
        *(_DWORD*)&v68[4 * v17] = v16 + 32;
        *(_DWORD*)&v68[4 * v18] = v16 + 16;
      } while (v13 < v7);
      goto LABEL_22;
    }
    if (v7 == 1) {
      v10 = 0;
      v11 = 0;
    }
    else {
      v19 = 0;
      v10 = 0;
      v11 = 0;
      do {
        v10 += 2;
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v19))).n64_u64[0];
        *(int32x2_t*)&v68[4 * v11] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50463400504614LL));
        *(int32x2_t*)&v68[4 * (v11 + 2)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * (v11 + 4)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50475000504758LL));
        v21 = v5 + v19;
        v19 += 2 * v5;
        LANES64(v22).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v21))).n64_u64[0];
        v23 = 4LL * (unsigned int)(v11 + 8);
        *(int32x2_t*)&v68[4 * (v11 + 6)] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50463400504614LL));
        v24 = v11 + 10;
        v11 += 12;
        *(int32x2_t*)&v68[v23] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * v24] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50475000504758LL));
      } while ((v7 & 0xFFFFFFFE) != v10);
    }
    if ((v7 & 1) != 0) {
      LANES64(v25).n64_u64[0] =
          LANES64_OF(
              vld1_dup_f32((const float*)(v9 + 4LL * (unsigned int)(v5 * v10))))
              .n64_u64[0];
      *(int32x2_t*)&v68[4 * v11] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50463400504614LL));
      *(int32x2_t*)&v68[4 * (v11 + 2)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50461C00504624LL));
      *(int32x2_t*)&v68[4 * (v11 + 4)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50475000504758LL));
    }
  }
LABEL_22:
  CudaDriverRoutine_98340(a1),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v26 == 0) {
    if (*(_BYTE*)(v4 + 3744) != 0) {
      CudaDriverRoutine_9ac20(*(_QWORD*)(a1 + 64)),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_DWORD*)(v4 + 3724) != 0) {
        v27 = 0;
        v28 = 0;
        do {
          if ((_DWORD)v6 != 0) {
            v29 = *(_QWORD*)&v67[8 * v28];
            v30 = 0;
            v31 = *(_QWORD*)&v67[8 * (v28 | 1)];
            v32 = *(_QWORD*)&v67[8 * (v28 + 2)];
            v33 = *(_QWORD*)&v67[8 * (v28 + 3)];
            v34 = *(_QWORD*)&v67[8 * (v28 + 4)];
            v35 = *(_QWORD*)&v67[8 * (v28 + 5)];
            do {
              while (1) {
                if (v30 > 0x3F) {
                  v39 = (unsigned int)v30 <= 0x40 ? 64 - v30 : 0;
                  v36 = v33 >> v30 << v39;
                  v37 = v34 >> v30 << v39;
                  v38 = v35 >> v30 << v39;
                }
                else {
                  v36 = v29 >> v30;
                  v37 = v31 >> v30;
                  v38 = v32 >> v30;
                }
                v40 = v36 & 1;
                v41 = v37 & 1;
                v42 = v38 & 1;
                v43 = ((v30 & 0xFFFFFFFD) + 1) >> 1;
                v44 = &a2[40 * ((v30 & 2) != 0) +
                          40 * *(_DWORD*)(v4 + 3736) * v27];
                v45 = 1LL << v43;
                if ((v30 & 0xFFFFFFFD) <= 0x7E) {
                  break;
                }
                v44[1] = v44[1] & ~v45 | (v40 << v43);
                v44[3] = v44[3] & ~v45 | (v41 << v43);
                v44[7] = v44[7] & ~v45 | (v42 << v43);
                if (v6 == ++v30) {
                  goto LABEL_38;
                }
              }
              *v44 = *v44 & ~v45 | (v40 << v43);
              v44[2] = v44[2] & ~v45 | (v41 << v43);
              v44[6] = v44[6] & ~v45 | (v42 << v43);
              ++v30;
            } while (v6 != v30);
          }
        LABEL_38:
          v46 = *(_DWORD*)(v4 + 3736);
          v47 = v46 * v27++;
          if ((unsigned int)v47 < v46 * v27) {
            v48 = &a2[40 * (unsigned int)v47 + 7];
            do {
              *(v48 - 6) = 0;
              *(v48 - 4) = 0;
              ++v47;
              *v48 = 0;
              v48 += 40;
            } while (v47 < *(_DWORD*)(v4 + 3736) * v27);
          }
          v28 += 6;
        } while (v27 < *(_DWORD*)(v4 + 3724));
      }
    }
    else if (*(_DWORD*)(v4 + 3732) != 0) {
      if ((unsigned int)v6 <= 0x40) {
        v56 = 1;
        v57 = 0;
        do {
          ++v57;
          v58 = *(_QWORD*)&v67[8 * (v56 - 1)];
          a2[2] = *(_QWORD*)&v67[8 * v56];
          *a2 = v58;
          LODWORD(v58) = v56 + 1;
          v56 += 3;
          a2[6] = *(_QWORD*)&v67[8 * (unsigned int)v58];
          a2 += 40;
        } while (v57 < *(unsigned int*)(v4 + 3732));
      }
      else {
        v49 = 0;
        v50 = 0;
        do {
          ++v49;
          v51 = *(_QWORD*)&v67[8 * (v50 + 3)];
          v52 = *(_QWORD*)&v67[8 * (v50 + 1)];
          v53 = *(_QWORD*)&v67[8 * (v50 + 2)];
          *a2 = *(_QWORD*)&v67[8 * v50];
          a2[1] = v51;
          v54 = *(_QWORD*)&v67[8 * (v50 + 4)];
          a2[2] = v52;
          a2[3] = v54;
          LODWORD(v52) = v50 + 5;
          v50 += 6;
          v55 = *(_QWORD*)&v67[8 * (unsigned int)v52];
          a2[6] = v53;
          a2[7] = v55;
          a2 += 40;
        } while (v49 < *(unsigned int*)(v4 + 3732));
      }
    }
  }
}

__int64 nvidia_1fbf20(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[256];
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v23[4];
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 nvidia_210400(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 result;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char v34;
  unsigned __int64 v35;
  unsigned int v36;
  _QWORD v37[4];
  __int64 v38;
  _QWORD v39[2];

  memset_plt(v37, 0, 4096);
  if (a1 == 0) {
    return 4;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 4;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == 0) {
    return 4;
  }
  v4 = *(_DWORD*)(v2 + 24);
  if (v4 == 0) {
    v7 = 1;
    goto LABEL_15;
  }
  v5 = v4 & 3;
  if (v4 < 4) {
    v6 = 0;
    v7 = 1;
    if ((v4 & 3) == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v9 = (__int64*)(v3 + 64);
  v7 = 1;
  v10 = 0;
  v11 = -(__int64)(v4 & 0xFFFFFFFC);
  v12 = &v38;
  do {
    v13 = *(v9 - 8);
    v14 = *(v9 - 7);
    v15 = *(v9 - 4);
    v16 = *(v9 - 3);
    v10 -= 4;
    *(v12 - 4) = v13;
    *(v12 - 3) = v14;
    v18 = *v9;
    v17 = v9[1];
    v19 = v9[4];
    v20 = v9[5];
    *(v12 - 2) = v15;
    *(v12 - 1) = v16;
    *v12 = v18;
    v12[1] = v17;
    v12[2] = v19;
    v12[3] = v20;
    v12 += 8;
    v9 += 16;
    v7 &= (v19 | v20 | v18 | v17 | v15 | v16 | v13 | v14) == 0;
  } while (v11 != v10);
  v6 = -v10;
  if (v5 != 0) {
  LABEL_13:
    v21 = (__int64*)(v3 + 32 * v6 + 8);
    v22 = &v37[2 * v6 + 1];
    do {
      v23 = *(v21 - 1);
      v24 = *v21;
      v21 += 4;
      *(v22 - 1) = v23;
      *v22 = v24;
      v22 += 2;
      --v5;
      v7 &= (v23 | v24) == 0;
    } while (v5 != 0);
  }
LABEL_15:
  v25 = (*(__int64 (**)(_QWORD, _QWORD))(v2 + 4080))(*(_QWORD*)(v2 + 4272), 0);
  if ((_DWORD)v25 == 0) {
    v26 = *(_DWORD*)(v2 + 24);
    if (v26 == 0) {
      return 0;
    }
    if ((v7 & 1) == 0) {
      v29 = 0;
      while (1) {
        v25 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD*))(v2 + 3256))(
            v2 + 16, *(_QWORD*)(v2 + 4272), (unsigned int)v29, v39);
        if ((_DWORD)v25 != 0) {
          return CudaDriverRoutine_20f580(v25);
        }
        if (*(_DWORD*)(v2 + 28) != 0) {
          v30 = &v37[2 * v29];
          v31 = 0;
          v32 = v39[0] & ~*v30;
          v33 = v39[1] & ~v30[1];
          do {
            v34 = 64 - v31;
            if ((unsigned int)v31 > 0x40) {
              v34 = 0;
            }
            v35 = v33 >> v31 << v34;
            if (v31 <= 0x3F) {
              v35 = v32 >> v31;
            }
            v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, unsigned __int64))(
                v2 + 4104))(*(_QWORD*)(v2 + 4272), (unsigned int)v29,
                            (unsigned int)v31, v35 & 1);
            if ((_DWORD)v25 != 0) {
              return CudaDriverRoutine_20f580(v25);
            }
          } while (++v31 < *(unsigned int*)(v2 + 28));
        }
        ++v29;
        result = 0;
        if (v29 >= *(unsigned int*)(v2 + 24)) {
          return result;
        }
      }
    }
    if (*(_DWORD*)(v2 + 28) == 0) {
      return 0;
    }
    v27 = 1;
    v28 = 0;
    while (v27 == 0) {
    LABEL_35:
      ++v28;
      result = 0;
      if (v28 >= v26) {
        return result;
      }
    }
    v36 = 0;
    while (1) {
      v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(v2 + 4104))(
          *(_QWORD*)(v2 + 4272), v28, v36, 0);
      if ((_DWORD)v25 != 0) {
        break;
      }
      v27 = *(_DWORD*)(v2 + 28);
      if (++v36 >= v27) {
        v26 = *(_DWORD*)(v2 + 24);
        goto LABEL_35;
      }
    }
  }
  return CudaDriverRoutine_20f580(v25);
}

__int64 nvidia_233e00(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 nvidia_2461c0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  _DWORD* v12;
  int v13;
  int32x4_t* v14;
  int32x4_t* v15;
  int32x4_t v16;
  __int64 v17;
  int32x4_t v18;
  int32x4_t v19;
  __int64 v20;
  char* v21;
  char v22;
  _DWORD v23[4];
  __int64 v24;
  _DWORD v25[256];

  memset_plt(v25, 0, 1024);
  memset_plt(v23, 0, 1024);
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  result =
      (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(a1, a2);
  if ((_DWORD)result != 801) {
    return result;
  }
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD*)(a1 + 16104);
    if ((unsigned int)v4 >= 8 && (unsigned __int64)&v23[-6] - v6 >= 0x20) {
      v7 = (unsigned int)v4 & 0xFFFFFFF8;
      v14 = (int32x4_t*)&v24;
      v15 = (int32x4_t*)(v6 + 40);
      v16 = vdupq_n_s32(0x50450Cu);
      v17 = v7;
      do {
        v18 = v15[-1];
        v19 = *v15;
        v17 -= 8;
        v15 += 2;
        v14[-1] = vaddq_s32(v18, v16);
        *v14 = vaddq_s32(v19, v16);
        v14 += 2;
      } while (v17 != 0);
      if (v7 == v4) {
        goto LABEL_16;
      }
    }
    else {
      v7 = 0;
    }
    v8 = v4 & 7;
    v9 = v7;
    if ((v4 & 7) != 0) {
      v9 = v7;
      do {
        --v8;
        v23[v9] = *(_DWORD*)(v6 + 24 + 4 * v9) + 5260556;
        ++v9;
      } while (v8 != 0);
    }
    if ((unsigned __int64)(v7 - v4) <= 0xFFFFFFFFFFFFFFF8LL) {
      v10 = v4 - v9;
      v11 = (int*)(v6 + 4 * v9 + 52);
      v12 = &v23[v9 + 4];
      do {
        v10 -= 8;
        *(v12 - 4) = *(v11 - 7) + 5260556;
        *(v12 - 3) = *(v11 - 6) + 5260556;
        *(v12 - 2) = *(v11 - 5) + 5260556;
        *(v12 - 1) = *(v11 - 4) + 5260556;
        *v12 = *(v11 - 3) + 5260556;
        v12[1] = *(v11 - 2) + 5260556;
        v12[2] = *(v11 - 1) + 5260556;
        v13 = *v11;
        v11 += 8;
        v12[3] = v13 + 5260556;
        v12 += 8;
      } while (v10 != 0);
    }
  }
LABEL_16:
  v20 = CudaDriverRoutine_98340(a1);
  result = cuda_driver_predicates_10f750(v20, 2, v4, (__int64)v23, v25, 0);
  if ((_DWORD)result == 0 && (_DWORD)v4 != 0) {
    v21 = (char*)v25;
    while (1) {
      v22 = *v21;
      v21 += 4;
      if ((v22 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return 0;
      }
    }
    *a2 = 1;
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
