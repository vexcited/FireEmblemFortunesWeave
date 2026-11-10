#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_629ca0(_QWORD* result);
_QWORD* nvidia_62a2a0(_QWORD* result);
__int64 NvOsBusyWaitUS_plt(_QWORD);
__int64 NvOsDrvClose_plt(void);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsMutexCreate_plt(_QWORD);
__int64 NvOsMutexDestroyEx_plt(_QWORD);
__int64 NvOsMutexLockEx_plt(_QWORD);
__int64 NvOsMutexUnlockEx_plt(_QWORD);
__int64 NvOsSleepMS_plt(_QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmMemLoadMapBufferSgl_plt(_QWORD);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmSyncCalculateSizeForInplaceSyncpoints_plt(_QWORD);
__int64 SdkRoutine_62aaa0(_QWORD);
__int64 SdkRoutine_644780();
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nvidia_623fe0(__int64*, unsigned __int64);
__int64 nvidia_624080(_QWORD*, unsigned __int64);
__int64 nvidia_625ed0();
__int64 nvidia_628d40(_QWORD*, unsigned __int64);
__int64 nvidia_628fd0(_QWORD*, __int64);
__int64 nvidia_629070(_QWORD*, __int64);
__int64 nvidia_629c70(__int64 result, __int64);
__int64 nvidia_629c90(__int64);
__int64 nvidia_629d00(_QWORD*, __int64);
__int64 nvidia_629d40(_QWORD*, __int64);
__int64 nvidia_632420(__int64);
__int64 nvidia_636a10();
__int64 nvidia_637780(_QWORD*, unsigned __int64);
__int64 nvidia_638690(_QWORD*);
__int64 nvidia_63a200(__int64);
__int64 nvidia_63b090(unsigned int*, __int64, __int64, __int64);
__int64 nvidia_643ff0();
__int64 nvidia_644c60();
__int64 nvidia_644ce0(__int64, int);
__int64 nvidia_644cf0(__int64, __int64, _QWORD*, __int64, __int64*,
                      unsigned __int64);
__int64 nvidia_644da0(__int64, __int64, __int64, __int64);
bool nvidia_624420(unsigned __int8*, unsigned __int8*);
extern _BYTE* SdkData_e89a58;
extern __int64 (*SdkData_e747e0[])();
extern __int64* SdkData_e89940[17];
extern __int64* SdkData_e899a0[5];
extern __int64* SdkData_e89a50;
extern __int64* SdkData_e89a60[6];
extern __int64* SdkData_e89a80[2];
extern __int64* SdkData_e89ad8[5];
extern __int64* SdkData_e89ae0[4];
extern __int64* SdkData_e89af8;
extern __int64 SdkData_1040728;
extern __int64 SdkData_1040738;
extern __int64 SdkData_ea4520;
extern char SdkData_1040734;
extern int SdkData_1040730;
extern unsigned int SdkData_c773fc[3];
void (***nvidia_6384a0(_QWORD*))(_QWORD);
void __attribute__((noreturn)) nvidia_62a350(__int64, __int64, __int64,
                                             __int64);
void nn_os_detail_RemoveNativeWaitHolder();
__int64 nvstl_mutex_impl_nvos_624170(__int64 a1, int a2, int a3);
__int64 nvstl_mutex_impl_nvos_6241e0(_QWORD* a1);
__int64 nvstl_mutex_impl_nvos_624280(_QWORD* a1, __int64 a2, __int64 a3,
                                     _QWORD* a4);
__int64 nvstl_mutex_impl_nvos_624540(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned __int8* a4);
__int64 nvstl_mutex_impl_nvos_6247e0(__int64 a1, unsigned int a2, int* a3);
__int64 nvstl_mutex_impl_nvos_624920(_QWORD* a1, unsigned int a2);
__int64 nvstl_mutex_impl_nvos_62a020(_QWORD* a1, __int64 a2);
_QWORD* nvstl_mutex_impl_nvos_62a0a0(_QWORD* a1);
__int64 nvstl_mutex_impl_nvos_62a130(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_62a1e0(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_6321d0(__int64 a1, _DWORD* a2, __int64 a3);
_QWORD* nvstl_mutex_impl_nvos_633910(__int64 a1);
__int64 nvstl_mutex_impl_nvos_633a70(__int64 a1, _DWORD* a2, __int64 a3);
_QWORD* nvstl_mutex_impl_nvos_633ff0(_QWORD* a1);
void nvstl_mutex_impl_nvos_634080(_QWORD* a1);
__int64 nvstl_mutex_impl_nvos_634620(__int64* a1, unsigned int a2, __int64 a3,
                                     unsigned __int64 a4, __int64 a5,
                                     __int64 a6, __int64 a7);
__int64 nvstl_mutex_impl_nvos_6353b0(__int64 a1, unsigned int a2, __int64 a3,
                                     unsigned __int64 a4, __int64 a5,
                                     __int64 a6);
__int64 nvstl_mutex_impl_nvos_635770(__int64 a1, __int64 a2);
_QWORD* nvstl_mutex_impl_nvos_6382d0(__int64 a1);
__int64 nvstl_mutex_impl_nvos_639790(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_639bd0(__int64 a1, int a2, char a3);
__int64 nvstl_mutex_impl_nvos_639d40(__int64 a1, int a2);
__int64 nvstl_mutex_impl_nvos_639ea0(__int64 a1);
__int64 nvstl_mutex_impl_nvos_639f70(__int64 a1);
__int64 nvstl_mutex_impl_nvos_63a040(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, unsigned int* a4,
                                     __int64 a5);
__int64 nvstl_mutex_impl_nvos_63a350(__int64 a1, unsigned int a2, __int64 a3,
                                     __int64 a4, char a5, __int64 a6,
                                     _QWORD* a7, _QWORD* a8);
__int64 nvstl_mutex_impl_nvos_63a620(__int64 a1, __int64* a2, __int64 a3);
__int64 nvstl_mutex_impl_nvos_63a820(__int64 a1);
_QWORD* nvstl_mutex_impl_nvos_63af60(__int64 a1);
void nvstl_mutex_impl_nvos_63aff0(__int64 a1);
__int64 nvstl_mutex_impl_nvos_63b190(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_63b350(__int64 a1, __int64* a2, __int64 a3);
_QWORD* nvstl_mutex_impl_nvos_63b490(_QWORD* a1);
void nvstl_mutex_impl_nvos_63b510(_QWORD* a1);
__int64 nvstl_mutex_impl_nvos_63ce10(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_63d560(__int64 a1, __int64 a2);
__int64 nvstl_mutex_impl_nvos_63d6e0(__int64 a1, __int64 a2);
_QWORD* nvstl_mutex_impl_nvos_63df30(__int64 a1);
void nvstl_mutex_impl_nvos_63dfd0(__int64 a1);
__int64 nvstl_mutex_impl_nvos_644610(_QWORD* a1);
__int64 nvstl_mutex_impl_nvos_644980(bool* a1);
__int64 nvstl_mutex_impl_nvos_644af0(_BYTE* a1);
__int64 nvstl_mutex_impl_nvos_644c70();

__int64 nvstl_mutex_impl_nvos_624170(__int64 a1, int a2, int a3)
{
  __int64 result;

  *(_DWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 12) = a3;
  *(_QWORD*)a1 = 1;
  result = NvOsMutexCreate_plt(a1 + 16);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  return result;
}

__int64 nvstl_mutex_impl_nvos_6241e0(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  nvidia_624080(a1 + 6, 0);
  NvOsFree_plt(a1[6]);
  a1[6] = 0;
  a1[8] = 0;
  nvidia_623fe0(a1 + 3, 0);
  NvOsFree_plt(a1[3]);
  v2 = a1[2];
  a1[3] = 0;
  a1[5] = 0;
  result = NvOsMutexDestroyEx_plt(v2);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  return result;
}

__int64 nvstl_mutex_impl_nvos_624280(_QWORD* a1, __int64 a2, __int64 a3,
                                     _QWORD* a4)
{
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v16 = a3;
  v13 = a2;
  v14 = 0;
  v15 = 0;
  memcpy_plt(&v14, &v16, 8);
  memcpy_plt(&v15, &v13, 8);
  v11 = v14;
  v12 = v15;
  if ((unsigned int)NvOsMutexLockEx_plt(a1[2]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v6 = a1[7];
  if (v6 != 0) {
    v7 = 16 * v6;
    v8 = (_BYTE*)(a1[6] + 7LL);
    while (*(v8 - 7) != 0 || *(v8 - 6) != 0 || *(v8 - 5) != 0 ||
           *(v8 - 4) != 0 || *(v8 - 3) != 0 || *(v8 - 2) != 0 ||
           *(v8 - 1) != 0 || *v8 != 0 || v8[1] != 0 || v8[2] != 0 ||
           v8[3] != 0 || v8[4] != 0 || v8[5] != 0 || v8[6] != 0 || v8[7] != 0 ||
           v8[8] != 0) {
      v8 += 16;
      v7 -= 16;
      if (v7 == 0) {
        goto LABEL_23;
      }
    }
    *(_QWORD*)(v8 - 7) = v11;
    *(_QWORD*)(v8 + 1) = v12;
    *a4 = v11;
    a4[1] = v12;
    v9 = 0;
  }
  else {
  LABEL_23:
    v9 = 17;
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(a1[2]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v9;
}

__int64 nvstl_mutex_impl_nvos_624540(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned __int8* a4)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v14 = a3;
  v11 = a2;
  v12 = 0;
  v13 = 0;
  memcpy_plt(&v12, &v14, 8);
  memcpy_plt(&v13, &v11, 8);
  v6 = 11;
  if (*a4 == (unsigned __int8)v12 &&
      __PAIR64__(a4[2], a4[1]) == __PAIR64__(BYTE2(v12), BYTE1(v12)) &&
      __PAIR64__(a4[4], a4[3]) == __PAIR64__(BYTE4(v12), BYTE3(v12)) &&
      __PAIR64__(a4[6], a4[5]) == __PAIR64__(BYTE6(v12), BYTE5(v12)) &&
      __PAIR64__(a4[8], a4[7]) ==
          __PAIR64__((unsigned __int8)v13, HIBYTE(v12)) &&
      a4[9] == BYTE1(v13) && a4[10] == BYTE2(v13) && a4[11] == BYTE3(v13) &&
      a4[12] == BYTE4(v13) && a4[13] == BYTE5(v13) && a4[14] == BYTE6(v13) &&
      a4[15] == HIBYTE(v13)) {
    if ((unsigned int)NvOsMutexLockEx_plt(a1[2]) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    83,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::lock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl::N"
                             "ullLockOrderToken]",
                    (__int64)"NvOsMutexLockEx() failed");
    }
    v7 = a1[7];
    if (v7 != 0) {
      v8 = a1[6];
      v9 = 16 * v7;
      while (!nvidia_624420((unsigned __int8*)v8, a4)) {
        v8 += 16;
        v9 -= 16;
        if (v9 == 0) {
          v6 = 11;
          goto LABEL_20;
        }
      }
      v6 = 0;
      *(_QWORD*)v8 = 0;
      *(_QWORD*)(v8 + 8) = 0;
    }
  LABEL_20:
    if ((unsigned int)NvOsMutexUnlockEx_plt(a1[2]) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    92,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::unlock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl:"
                             ":NullLockOrderToken]",
                    (__int64)"NvOsMutexUnlockEx() failed");
    }
  }
  return v6;
}

__int64 nvstl_mutex_impl_nvos_6247e0(__int64 a1, unsigned int a2, int* a3)
{
  int v5;
  int v6;
  __int64 v7;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;

  if (a2 > 1) {
    return 2;
  }
  v5 = *(_DWORD*)(a1 + 8);
  v6 = *(_DWORD*)(a1 + 12);
  v7 = *(_QWORD*)(a1 + 16);
  if (a2 != 0) {
    v9 = v5;
  }
  else {
    v9 = 0;
  }
  if (a2 != 0) {
    v10 = v6;
  }
  else {
    v10 = v5;
  }
  if ((unsigned int)NvOsMutexLockEx_plt(v7) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  if (v10 != 0) {
    v11 = *(_DWORD*)(a1 + 12);
    v12 = *(_QWORD*)(a1 + 24);
    while (1) {
      v13 = v9 % v11;
      v14 = (v9 % v11) >> 5;
      v15 = 1 << (v9 % v11);
      v16 = *(_DWORD*)(v12 + 4LL * v14);
      if ((v15 & v16) == 0) {
        break;
      }
      --v10;
      ++v9;
      if (v10 == 0) {
        goto LABEL_14;
      }
    }
    v17 = 0;
    *(_DWORD*)(v12 + 4LL * v14) = v16 | v15;
    *a3 = v13;
    if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 16)) != 0) {
    LABEL_17:
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    92,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::unlock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl:"
                             ":NullLockOrderToken]",
                    (__int64)"NvOsMutexUnlockEx() failed");
    }
  }
  else {
  LABEL_14:
    v17 = 17;
    if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 16)) != 0) {
      goto LABEL_17;
    }
  }
  return v17;
}

__int64 nvstl_mutex_impl_nvos_624920(_QWORD* a1, unsigned int a2)
{
  unsigned __int64 v2;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;

  v2 = a2 >> 5;
  if (a1[4] > v2) {
    v4 = a2;
    if ((unsigned int)NvOsMutexLockEx_plt(a1[2]) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    83,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::lock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl::N"
                             "ullLockOrderToken]",
                    (__int64)"NvOsMutexLockEx() failed");
    }
    v5 = a1[3];
    v6 = 1 << v4;
    v7 = *(_DWORD*)(v5 + 4 * v2);
    if ((v7 & (1 << v4)) != 0) {
      v8 = 0;
      *(_DWORD*)(v5 + 4 * v2) = v7 & ~v6;
      if ((unsigned int)NvOsMutexUnlockEx_plt(a1[2]) == 0) {
        return v8;
      }
    }
    else {
      v8 = 11;
      if ((unsigned int)NvOsMutexUnlockEx_plt(a1[2]) == 0) {
        return v8;
      }
    }
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return 17;
}

__int64 nvstl_mutex_impl_nvos_62a020(_QWORD* a1, __int64 a2)
{
  __int64 result;

  nvidia_629c70((__int64)a1, a2);
  *a1 = SdkData_e899a0[0] + 2;
  result = NvOsMutexCreate_plt(a1 + 3);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  a1[4] = a1 + 4;
  a1[5] = a1 + 4;
  return result;
}

_QWORD* nvstl_mutex_impl_nvos_62a0a0(_QWORD* a1)
{
  __int64 v2;

  *a1 = SdkData_e899a0[0] + 2;
  nvidia_62a2a0(a1 + 4);
  v2 = a1[3];
  a1[4] = 0;
  a1[5] = 0;
  if ((unsigned int)NvOsMutexDestroyEx_plt(v2) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  return SdkRoutine_629ca0(a1);
}

__int64 nvstl_mutex_impl_nvos_62a130(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 24)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v4 = *(_QWORD**)(a1 + 40);
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a2 + 24) = a1 + 32;
  *(_QWORD*)(a2 + 32) = v4;
  v6 = a2 + 24;
  *v4 = v6;
  *(_QWORD*)(a1 + 40) = v6;
  if ((unsigned int)NvOsMutexUnlockEx_plt(v5) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return 0;
}

__int64 nvstl_mutex_impl_nvos_62a1e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 24)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD**)(a2 + 32);
  if (v5 != nullptr) {
    *v5 = v4;
  }
  if (v4 != 0) {
    *(_QWORD*)(v4 + 8) = v5;
  }
  v6 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  if ((unsigned int)NvOsMutexUnlockEx_plt(v6) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return 0;
}

__int64 nvstl_mutex_impl_nvos_6321d0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64* v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 result;

  nvidia_628fd0((_QWORD*)a1, (__int64)a2);
  v6 = SdkData_e89a50;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)a1 = v6 + 2;
  LODWORD(v6) = *(_DWORD*)a3;
  *(_DWORD*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 52) = 0;
  *(_DWORD*)(a1 + 48) = -1;
  v7 = a2[395];
  *(_DWORD*)(a1 + 40) = (_DWORD)v6;
  *(_QWORD*)(a1 + 56) = a2 + 70;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 88) = *(_DWORD*)(a3 + 92);
  *(_BYTE*)(a1 + 92) = *(_BYTE*)(a3 + 25);
  *(_BYTE*)(a1 + 93) = *(_BYTE*)(a3 + 24);
  v8 = *(_QWORD*)(a3 + 48);
  v9 = (_QWORD*)(v8 + 24);
  if (v8 == 0) {
    v9 = (_QWORD*)(a3 + 32);
  }
  v10 = *(_DWORD*)(a3 + 80);
  v11 = *(_DWORD*)(a3 + 84);
  *(_QWORD*)(a1 + 96) = *v9;
  v12 = a2[243];
  if (v10 != 0) {
    v12 = v10;
  }
  v13 = a2[393];
  if (v13 == 0) {
    v13 = v7;
  }
  if (v11 != -1) {
    v13 = v11;
  }
  *(_DWORD*)(a1 + 104) = v12;
  *(_DWORD*)(a1 + 108) = v13;
  if (v8 != 0) {
    LODWORD(v8) = *(_DWORD*)(v8 + 32);
  }
  *(_DWORD*)(a1 + 112) = v8;
  *(_BYTE*)(a1 + 116) = (*(_BYTE*)(a3 + 89) | *SdkData_e89a58) & 1;
  if (v12 == 2) {
    v14 = (unsigned int)NvRmSyncCalculateSizeForInplaceSyncpoints_plt(1);
  }
  else {
    v14 = 0;
  }
  *(_QWORD*)(a1 + 120) = v14;
  v15 = *(_BYTE*)(a3 + 97);
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 128) = v15;
  *(_QWORD*)(a1 + 152) = 0xFFFFFFFFLL;
  if ((unsigned int)NvOsMutexCreate_plt(a1 + 168) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_QWORD*)(a1 + 176) = 0;
  result = NvOsMutexCreate_plt(a1 + 184);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_DWORD*)(a1 + 192) = 0;
  return result;
}

_QWORD* nvstl_mutex_impl_nvos_633910(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = SdkData_e89a50 + 2;
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 184)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    (**(void (***)(_QWORD))v2)(*(_QWORD*)(a1 + 176));
    v3 = *(_QWORD*)(a1 + 176);
    *(_BYTE*)(v2 + 17) = 1;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
      NvOsFree_plt(*(_QWORD*)(a1 + 176));
      *(_QWORD*)(a1 + 176) = 0;
    }
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 168)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  v4 = *(_QWORD*)(a1 + 64);
  if (v4 != 0) {
    (**(void (***)(_QWORD))v4)(*(_QWORD*)(a1 + 64));
    v5 = *(_QWORD*)(a1 + 64);
    *(_BYTE*)(v4 + 17) = 1;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
      NvOsFree_plt(*(_QWORD*)(a1 + 64));
      *(_QWORD*)(a1 + 64) = 0;
    }
  }
  if (*(_DWORD*)(a1 + 48) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 48) = -1;
  }
  *(_QWORD*)a1 = SdkData_e89940[0] + 2;
  return SdkRoutine_629ca0((_QWORD*)a1);
}

__int64 nvstl_mutex_impl_nvos_633a70(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 result;

  nvstl_mutex_impl_nvos_6321d0(a1, a2, a3);
  *(_QWORD*)a1 = SdkData_e89a60[0] + 2;
  result = NvOsMutexCreate_plt(a1 + 200);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 228) = *(_BYTE*)(a3 + 88);
  return result;
}

_QWORD* nvstl_mutex_impl_nvos_633ff0(_QWORD* a1)
{
  __int64 v2;

  *a1 = SdkData_e89a60[0] + 2;
  v2 = a1[26];
  if (v2 != 0) {
    NvOsFree_plt(v2);
    a1[26] = 0;
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(a1[25]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  return nvstl_mutex_impl_nvos_633910((__int64)a1);
}

void nvstl_mutex_impl_nvos_634080(_QWORD* a1)
{
  __int64 v2;

  *a1 = SdkData_e89a60[0] + 2;
  v2 = a1[26];
  if (v2 != 0) {
    NvOsFree_plt(v2);
    a1[26] = 0;
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(a1[25]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  nvstl_mutex_impl_nvos_633910((__int64)a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvstl_mutex_impl_nvos_634620(__int64* a1, unsigned int a2, __int64 a3,
                                     unsigned __int64 a4, __int64 a5,
                                     __int64 a6, __int64 a7)
{
  unsigned __int64 v11;
  int v12;
  int v13;
  _BOOL4 v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  unsigned int v19;
  _BOOL4 v21;
  unsigned int v22;
  __int64 result;
  int v24;
  _DWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  char v39;
  char v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  _QWORD* v49;
  unsigned int v50;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
  } v54_;
  struct {
    _QWORD v57[2];
    __int64 v58;
    __int64 v59;
  } v57_;

  if (a5 != 0) {
    v11 = *(_QWORD*)(a5 + 24);
  }
  else {
    v11 = 0;
  }
  v12 = *(_DWORD*)(a7 + 32);
  v13 = *((unsigned __int8*)a1 + 93);
  v14 = v12 == 2;
  if (v12 == 2) {
    v15 = 0;
  }
  else {
    v15 = 11;
  }
  if (v12 == 1) {
    v14 = true;
    v15 = 0;
  }
  v16 = v12 == 0;
  if (v12 != 0) {
    v17 = v12 == 1;
  }
  else {
    v17 = v13 ^ 1;
  }
  v18 = v12 == 0 || v14;
  if (v16) {
    v19 = 0;
  }
  else {
    v19 = v15;
  }
  v21 = a5 != 0 && *(_DWORD*)(a7 + 40) != 0;
  if (((unsigned __int8)v18 & (a4 > *((unsigned int*)a1 + 54))) != 0) {
    v22 = 17;
  }
  else {
    v22 = v19;
  }
  if ((v18 & v21) != 0) {
    result = 2;
  }
  else {
    result = v22;
  }
  if (*(_QWORD*)a7 != 0 && *(_QWORD*)(a7 + 8) < (unsigned __int64)a1[15]) {
    v24 = 0;
    if ((_DWORD)result != 0) {
      result = (unsigned int)result;
    }
    else {
      result = 6;
    }
    v25 = *(_DWORD**)(a7 + 24);
    if (v25 != nullptr) {
      goto LABEL_122;
    }
    return result;
  }
  if ((_DWORD)result != 0) {
    goto LABEL_38;
  }
  if ((v13 & 1) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1[12] + 72LL))(a1[12]);
    if ((_DWORD)result != 0) {
      goto LABEL_38;
    }
  }
  if (v11 < 2) {
    goto LABEL_70;
  }
  v26 = 0;
  do {
    v54_.v55 = 0x400000000LL;
    v54_.v56 = 0;
    v54_.v54 = 0;
    if (a5 != 0) {
      HIDWORD(v54_.v55) = 5;
      v54_.v56 = *(_QWORD*)(*(_QWORD*)(a5 + 8) + 8 * v26);
    }
    v27 = a1[23];
    LODWORD(v54_.v55) = 0;
    if ((unsigned int)NvOsMutexLockEx_plt(v27) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    83,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::lock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl::N"
                             "ullLockOrderToken]",
                    (__int64)"NvOsMutexLockEx() failed");
    }
    v57_.v58 = 0;
    v57_.v59 = 0;
    v28 = HIDWORD(v54_.v55);
    v57_.v57[0] = &v54_.v54;
    v57_.v57[1] = 24;
    if (*(_DWORD*)(a1[7] + 40) >= 0x1Bu) {
      v29 = nvidia_644cf0(*((unsigned int*)a1 + 12), 3222816795LL, v57_.v57, 2,
                          nullptr, 0);
      if (v17 != 0) {
        goto LABEL_55;
      }
    LABEL_51:
      if ((unsigned int)(HIDWORD(v54_.v55) - 1) >= 3) {
      LABEL_64:
        if (v29 == 0) {
          v30 = 0;
          if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
            goto LABEL_66;
          }
          goto LABEL_61;
        }
      }
      else {
        v29 = SdkData_c773fc[HIDWORD(v54_.v55) - 1];
      }
    LABEL_60:
      v30 = v29;
      if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
        goto LABEL_66;
      }
      goto LABEL_61;
    }
    v29 = 2;
    if (v17 == 0) {
      goto LABEL_51;
    }
    while (1) {
    LABEL_55:
      if ((unsigned int)(HIDWORD(v54_.v55) - 2) < 2) {
        HIDWORD(v54_.v55) = v28;
        goto LABEL_59;
      }
      if (HIDWORD(v54_.v55) == 1) {
        break;
      }
      HIDWORD(v54_.v55) = v28;
      if (v29 != 14) {
        goto LABEL_64;
      }
    LABEL_59:
      v29 = NvOsBusyWaitUS_plt(100);
      if (v29 != 0) {
        goto LABEL_60;
      }
      v29 = 2;
      if (*(_DWORD*)(a1[7] + 40) >= 0x1Cu) {
        v29 = nvidia_644cf0(*((unsigned int*)a1 + 12), 3222816796LL, v57_.v57,
                            2, nullptr, 0);
      }
    }
    HIDWORD(v54_.v55) = v28;
    v30 = 6;
    if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
    LABEL_66:
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    92,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::unlock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl:"
                             ":NullLockOrderToken]",
                    (__int64)"NvOsMutexUnlockEx() failed");
    }
  LABEL_61:
    if (v30 != 0) {
      v24 = HIDWORD(v54_.v55);
      if ((unsigned int)(HIDWORD(v54_.v55) - 1) >= 3) {
        result = v30;
        v24 = 0;
        v25 = *(_DWORD**)(a7 + 24);
        if (v25 != nullptr) {
          goto LABEL_122;
        }
      }
      else {
        result = SdkData_c773fc[HIDWORD(v54_.v55) - 1];
        v25 = *(_DWORD**)(a7 + 24);
        if (v25 != nullptr) {
          goto LABEL_122;
        }
      }
      return result;
    }
    ++v26;
  } while (v26 < v11 - 1);
LABEL_70:
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)a1[1] + 56LL))(a1[1]);
  v32 = (*(__int64 (**)(__int64, unsigned __int64))(*(_QWORD*)v31 + 24LL))(v31,
                                                                           a4);
  if (a4 == 0) {
    v36 = 0;
    a3 = 0;
    goto LABEL_81;
  }
  if (a2 != 0x80000000) {
    v37 = (*(__int64 (**)(__int64))(*(_QWORD*)a1[1] + 56LL))(a1[1]);
    result = (*(__int64 (**)(__int64, _QWORD, __int64, unsigned __int64))(
        *(_QWORD*)v37 + 40LL))(v37, a2, a3, a4);
    if ((_DWORD)result == 0) {
      v36 = 0;
      goto LABEL_81;
    }
  LABEL_38:
    v24 = 0;
    v25 = *(_DWORD**)(a7 + 24);
    if (v25 != nullptr) {
      goto LABEL_122;
    }
    return result;
  }
  if ((unsigned int)NvOsMutexLockEx_plt(a1[25]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v33 = a1[26];
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)a1[1] + 56LL))(a1[1]);
  v35 = (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64))(
      *(_QWORD*)v34 + 32LL))(v34, a3, a4, v33);
  if (v35 != 0) {
    v24 = 0;
    v50 = v35;
    if ((unsigned int)NvOsMutexUnlockEx_plt(a1[25]) != 0) {
      goto LABEL_131;
    }
  LABEL_119:
    result = v50;
    goto LABEL_120;
  }
  v36 = 1;
  a3 = v33;
LABEL_81:
  v38 = *a1;
  v54_.v55 = 0;
  v54_.v56 = 0;
  v54_.v54 = 0;
  v39 = (*(__int64 (**)(__int64*))(v38 + 240))(a1);
  v40 = *(_BYTE*)(a7 + 36);
  v41 = *(_DWORD*)(a7 + 40);
  if ((v39 & 1) != 0) {
    v42 = 20;
  }
  else {
    v42 = 4;
  }
  v43 = HIDWORD(v54_.v55) | v42;
  HIDWORD(v54_.v55) |= v42;
  if (a5 != 0) {
    v44 = *(_QWORD*)(a5 + 8);
    v43 |= 1u;
    HIDWORD(v54_.v55) = v43;
    v54_.v56 = *(_QWORD*)(v44 + 8 * v11 - 8);
  }
  if (((a6 == 0) | v40 & 1) == 0) {
    HIDWORD(v54_.v55) = v43 | 2;
    if (HIDWORD(a4) == 0) {
      goto LABEL_90;
    }
  LABEL_95:
    v24 = 0;
    result = 11;
    goto LABEL_117;
  }
  if ((v40 & 1) != 0) {
    HIDWORD(v54_.v56) = v41;
    HIDWORD(v54_.v55) = v43 | 0x100;
    LODWORD(v54_.v56) = 0;
  }
  if (HIDWORD(a4) != 0) {
    goto LABEL_95;
  }
LABEL_90:
  v45 = a1[23];
  LODWORD(v54_.v55) = a4;
  if ((unsigned int)NvOsMutexLockEx_plt(v45) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v46 = HIDWORD(v54_.v55);
  v57_.v57[0] = &v54_.v54;
  v57_.v57[1] = 24;
  v57_.v58 = a3;
  v57_.v59 = v32;
  if (*(_DWORD*)(a1[7] + 40) >= 0x1Bu) {
    v47 = nvidia_644cf0(*((unsigned int*)a1 + 12), 3222816795LL, v57_.v57, 2,
                        nullptr, 0);
    if (v17 != 0) {
      goto LABEL_101;
    }
  LABEL_97:
    if ((unsigned int)(HIDWORD(v54_.v55) - 1) >= 3) {
    LABEL_110:
      if (v47 == 0) {
        v48 = 0;
        if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
          goto LABEL_112;
        }
        goto LABEL_107;
      }
    }
    else {
      v47 = SdkData_c773fc[HIDWORD(v54_.v55) - 1];
    }
  LABEL_106:
    v48 = v47;
    if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
      goto LABEL_112;
    }
    goto LABEL_107;
  }
  v47 = 2;
  if (v17 == 0) {
    goto LABEL_97;
  }
LABEL_101:
  while (2) {
    if ((unsigned int)(HIDWORD(v54_.v55) - 2) < 2) {
      HIDWORD(v54_.v55) = v46;
    LABEL_105:
      v47 = NvOsBusyWaitUS_plt(100);
      if (v47 != 0) {
        goto LABEL_106;
      }
      v47 = 2;
      if (*(_DWORD*)(a1[7] + 40) >= 0x1Cu) {
        v47 = nvidia_644cf0(*((unsigned int*)a1 + 12), 3222816796LL, v57_.v57,
                            2, nullptr, 0);
      }
      continue;
    }
    break;
  }
  if (HIDWORD(v54_.v55) != 1) {
    HIDWORD(v54_.v55) = v46;
    if (v47 != 14) {
      goto LABEL_110;
    }
    goto LABEL_105;
  }
  HIDWORD(v54_.v55) = v46;
  v48 = 6;
  if ((unsigned int)NvOsMutexUnlockEx_plt(a1[23]) != 0) {
  LABEL_112:
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
LABEL_107:
  result = v48;
  if (a6 == 0 || v48 != 0) {
    if (v48 != 0 &&
        (v24 = HIDWORD(v54_.v55), (unsigned int)(HIDWORD(v54_.v55) - 1) <= 2)) {
      result = SdkData_c773fc[HIDWORD(v54_.v55) - 1];
    }
    else {
      v24 = 0;
    }
  }
  else {
    v49 = *(_QWORD**)(a6 + 8);
    v24 = 0;
    *(_DWORD*)a6 = 2;
    *v49 = v54_.v56;
    *(_QWORD*)(a6 + 24) = 1;
  }
LABEL_117:
  if (v36 != 0) {
    v50 = result;
    if ((unsigned int)NvOsMutexUnlockEx_plt(a1[25]) == 0) {
      goto LABEL_119;
    }
  LABEL_131:
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
LABEL_120:
  if ((_DWORD)result != 0) {
    v25 = *(_DWORD**)(a7 + 24);
    if (v25 != nullptr) {
    LABEL_122:
      *v25 = v24;
    }
  }
  return result;
}

__int64 nvstl_mutex_impl_nvos_6353b0(__int64 a1, unsigned int a2, __int64 a3,
                                     unsigned __int64 a4, __int64 a5,
                                     __int64 a6)
{
  unsigned int v6;
  __int64 v10;

  if ((a5 | a6) != 0) {
    return 2;
  }
  v6 = a4;
  if (a4 >= *(unsigned int*)(a1 + 208)) {
    return 17;
  }
  if (a4 != 0) {
    if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 184)) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    83,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::lock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl::N"
                             "ullLockOrderToken]",
                    (__int64)"NvOsMutexLockEx() failed");
    }
    v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
        *(_QWORD*)(a1 + 8));
    v6 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
        *(_QWORD*)v10 + 80LL))(v10, a1 + 208, a2, a3, v6);
    if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 184)) != 0) {
      nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                             "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                    92,
                    (__int64)"void "
                             "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                             "NvRmGpuUnexpectedErrorHandler, "
                             "nvstl::impl::NullLockOrderTok"
                             "en>::unlock() [T_UnexpectedError = "
                             "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                             "T_OrderToken = nvstl::impl:"
                             ":NullLockOrderToken]",
                    (__int64)"NvOsMutexUnlockEx() failed");
    }
  }
  return v6;
}

__int64 nvstl_mutex_impl_nvos_635770(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  nvidia_629070((_QWORD*)a1, a2);
  v4 = SdkData_e89a80[0];
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 24) = SdkData_e747e0;
  nvidia_629c90(a1);
  v5 = nvidia_644c60();
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  *(_QWORD*)(a1 + 296) = v5;
  *(_QWORD*)(a1 + 304) = v6;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = a1 + 24;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 400) = 0x100000000LL;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_WORD*)(a1 + 428) = 0;
  *(_DWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 420) = 0;
  memset_plt((void*)(a1 + 448), nullptr, 412);
  *(_QWORD*)(a1 + 917) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 928) = a1 + 280;
  *(_DWORD*)(a1 + 920) = -1;
  result = NvOsMutexCreate_plt(a1 + 936);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_BYTE*)(a1 + 948) = 0;
  *(_DWORD*)(a1 + 944) = -1;
  *(_QWORD*)(a1 + 952) = a1 + 280;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_BYTE*)(a1 + 1048) = 0;
  *(_DWORD*)(a1 + 1052) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_WORD*)(a1 + 1128) = 0;
  *(_BYTE*)(a1 + 1130) = 0;
  *(_DWORD*)(a1 + 1132) = 0;
  *(_BYTE*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_DWORD*)(a1 + 1160) = 0;
  *(_WORD*)(a1 + 1164) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_DWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1384) = 0;
  *(_DWORD*)(a1 + 1392) = 0;
  *(_WORD*)(a1 + 1396) = 0;
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1408) = 0;
  *(_QWORD*)(a1 + 1416) = 0;
  *(_DWORD*)(a1 + 1812) = 0;
  *(_BYTE*)(a1 + 1816) = 0;
  *(_QWORD*)(a1 + 1848) = 0;
  *(_QWORD*)(a1 + 1477) = 0;
  *(_QWORD*)(a1 + 1472) = 0;
  *(_QWORD*)(a1 + 1464) = 0;
  *(_QWORD*)(a1 + 1456) = 0;
  *(_QWORD*)(a1 + 1448) = 0;
  *(_QWORD*)(a1 + 1440) = 0;
  *(_QWORD*)(a1 + 1432) = 0;
  *(_QWORD*)(a1 + 1424) = 0;
  *(_QWORD*)(a1 + 1488) = 0;
  *(_QWORD*)(a1 + 1496) = 0;
  *(_QWORD*)(a1 + 1504) = 0;
  *(_QWORD*)(a1 + 1512) = 0;
  *(_QWORD*)(a1 + 1528) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_QWORD*)(a1 + 1560) = 0;
  *(_WORD*)(a1 + 1568) = 0;
  *(_DWORD*)(a1 + 1744) = 0;
  *(_QWORD*)(a1 + 1736) = 0;
  *(_QWORD*)(a1 + 1728) = 0;
  *(_QWORD*)(a1 + 1720) = 0;
  *(_QWORD*)(a1 + 1712) = 0;
  *(_QWORD*)(a1 + 1704) = 0;
  *(_QWORD*)(a1 + 1696) = 0;
  *(_QWORD*)(a1 + 1688) = 0;
  *(_QWORD*)(a1 + 1680) = 0;
  *(_QWORD*)(a1 + 1672) = 0;
  *(_QWORD*)(a1 + 1664) = 0;
  *(_QWORD*)(a1 + 1656) = 0;
  *(_QWORD*)(a1 + 1648) = 0;
  *(_QWORD*)(a1 + 1640) = 0;
  *(_QWORD*)(a1 + 1632) = 0;
  *(_QWORD*)(a1 + 1624) = 0;
  *(_QWORD*)(a1 + 1616) = 0;
  *(_QWORD*)(a1 + 1608) = 0;
  *(_BYTE*)(a1 + 1808) = 0;
  *(_QWORD*)(a1 + 1800) = 0;
  *(_QWORD*)(a1 + 1792) = 0;
  *(_QWORD*)(a1 + 1784) = 0;
  *(_QWORD*)(a1 + 1776) = 0;
  *(_QWORD*)(a1 + 1768) = 0;
  *(_QWORD*)(a1 + 1760) = 0;
  *(_QWORD*)(a1 + 1752) = 0;
  *(_QWORD*)(a1 + 1864) = 0;
  *(_QWORD*)(a1 + 1872) = 0;
  *(_QWORD*)(a1 + 1880) = 0;
  *(_QWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1896) = 0;
  *(_QWORD*)(a1 + 1904) = 0;
  *(_QWORD*)(a1 + 1912) = 0;
  *(_QWORD*)(a1 + 1920) = a1;
  *(_QWORD*)(a1 + 1928) = 0;
  *(_QWORD*)(a1 + 1936) = 0;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 1952) = 0;
  *(_QWORD*)(a1 + 1960) = 0;
  *(_QWORD*)(a1 + 1517) = 0;
  *(_QWORD*)(a1 + 1588) = 0;
  *(_QWORD*)(a1 + 1596) = 0;
  *(_QWORD*)(a1 + 1572) = 0;
  *(_QWORD*)(a1 + 1580) = 0;
  *(_QWORD*)(a1 + 1820) = 0;
  *(_QWORD*)(a1 + 1828) = 0;
  *(_QWORD*)(a1 + 1836) = 0;
  return result;
}

_QWORD* nvstl_mutex_impl_nvos_6382d0(__int64 a1)
{
  int v2;

  *(_QWORD*)a1 = SdkData_e89a80[0] + 2;
  nvidia_637780((_QWORD*)(a1 + 1944), 0);
  NvOsFree_plt(*(_QWORD*)(a1 + 1944));
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 1960) = 0;
  nvidia_623fe0((__int64*)(a1 + 1888), 0);
  NvOsFree_plt(*(_QWORD*)(a1 + 1888));
  *(_QWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1904) = 0;
  nvidia_628d40((_QWORD*)(a1 + 1864), 0);
  NvOsFree_plt(*(_QWORD*)(a1 + 1864));
  v2 = *(_DWORD*)(a1 + 944);
  *(_QWORD*)(a1 + 1864) = 0;
  *(_QWORD*)(a1 + 1880) = 0;
  if (v2 != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 944) = -1;
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 936)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  if (*(_DWORD*)(a1 + 920) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 920) = -1;
  }
  nvidia_6384a0((_QWORD*)(a1 + 264));
  nvidia_638690((_QWORD*)(a1 + 24));
  return SdkRoutine_629ca0((_QWORD*)a1);
}

__int64 nvstl_mutex_impl_nvos_639790(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 result;
  __int64 v6;

  nvidia_629d00((_QWORD*)a1, a2);
  v4 = SdkData_e89ad8[0];
  *(_BYTE*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = -1;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 32) = a2 + 280;
  result = NvOsMutexCreate_plt(a1 + 40);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_DWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 72) = 0;
  v6 = SdkData_ea4520;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = v6;
  return result;
}

__int64 nvstl_mutex_impl_nvos_639bd0(__int64 a1, int a2, char a3)
{
  int v6;
  unsigned int v7;
  _QWORD v9[2];

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v9[0] = 0;
  v9[1] = 0;
  if (a2 > 2) {
    if (a2 == 3) {
      v7 = 0;
      LODWORD(v9[0]) = 2;
      v6 = 1;
      if ((a3 & 1) != 0) {
        goto LABEL_15;
      }
    }
    else {
      if (a2 != 4) {
        goto LABEL_14;
      }
      v6 = 0;
      v7 = 2;
      if ((a3 & 1) != 0) {
        goto LABEL_15;
      }
    }
  }
  else {
    if (a2 != 1) {
      if (a2 == 2) {
        v6 = 1;
        v7 = 0;
        LODWORD(v9[0]) = 1;
        if ((a3 & 1) == 0) {
          goto LABEL_16;
        }
      LABEL_15:
        HIDWORD(v9[0]) = 1;
        goto LABEL_16;
      }
    LABEL_14:
      v7 = 11;
      v6 = 0;
      if ((a3 & 1) == 0) {
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    v7 = 0;
    v6 = 1;
    if ((a3 & 1) != 0) {
      goto LABEL_15;
    }
  }
LABEL_16:
  if (v6 != 0) {
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 2u) {
      v7 = 2;
    }
    else {
      v7 =
          nvidia_644da0(*(unsigned int*)(a1 + 24), 1074810882, (__int64)v9, 16);
    }
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v7;
}

__int64 nvstl_mutex_impl_nvos_639d40(__int64 a1, int a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v7;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v7 = 0;
  if (a2 > 2) {
    if (a2 == 3) {
      LODWORD(v7) = 2;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) >= 3u) {
        goto LABEL_14;
      }
      goto LABEL_17;
    }
    if (a2 == 4) {
      goto LABEL_17;
    }
  LABEL_12:
    v4 = 11;
    goto LABEL_18;
  }
  if (a2 != 1) {
    if (a2 == 2) {
      LODWORD(v7) = 1;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) >= 3u) {
        goto LABEL_14;
      }
    LABEL_17:
      v4 = 2;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  LODWORD(v7) = 0;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 3u) {
    goto LABEL_17;
  }
LABEL_14:
  v5 = nvidia_644da0(*(unsigned int*)(a1 + 24), 1074286595, (__int64)&v7, 8);
  if (v5 != 0) {
    v4 = v5;
  }
  else {
    v4 = 0;
  }
LABEL_18:
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v4;
}

__int64 nvstl_mutex_impl_nvos_639ea0(__int64 a1)
{
  unsigned int v2;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 6u) {
    v2 = 2;
  }
  else {
    v2 = nvidia_644ce0(*(unsigned int*)(a1 + 24), 20486);
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v2;
}

__int64 nvstl_mutex_impl_nvos_639f70(__int64 a1)
{
  unsigned int v2;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 7u) {
    v2 = 2;
  }
  else {
    v2 = nvidia_644ce0(*(unsigned int*)(a1 + 24), 20487);
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v2;
}

__int64 nvstl_mutex_impl_nvos_63a040(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, unsigned int* a4,
                                     __int64 a5)
{
  char v9;
  char v10;
  unsigned __int64 v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;
  struct {
    _DWORD v22[2];
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v22_;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  if (a3 != 0) {
    if (*a4 <= 1) {
      v9 = 1;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 380LL);
      while (1) {
        v22_.v24 = 0;
        v22_.v25 = 0;
        v22_.v23 = 0;
        v14 = a3 - v11 >= v13 ? v13 : a3 - v11;
        v15 = *a4;
        v22_.v22[1] = v14;
        if (v15 > 1) {
          break;
        }
        v22_.v22[0] = v15;
        v16 = nvidia_63b090((unsigned int*)(a1 + 24), (__int64)v22_.v22,
                            a2 + 24 * v11, 24 * v14);
        if (v16 != 0) {
          v19 = v16;
          goto LABEL_22;
        }
        v11 += v14;
        v9 &= v22_.v24;
        v10 |= (v22_.v24 & 2) != 0;
        v12 |= (v22_.v24 & 2) == 0;
        if (v11 >= a3) {
          v17 = v12 & 1;
          if ((v12 & 1) != 0) {
            v18 = 2;
          }
          else {
            v18 = 0;
          }
          if ((v10 & 1) != 0) {
            v17 = v18;
          }
          goto LABEL_21;
        }
      }
    }
    v19 = 11;
  }
  else {
    v17 = 0;
    v9 = 1;
  LABEL_21:
    *(_DWORD*)(a5 + 4) = v17;
    v19 = 0;
    *(_BYTE*)a5 = v9 & 1;
  }
LABEL_22:
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v19;
}

__int64 nvstl_mutex_impl_nvos_63a350(__int64 a1, unsigned int a2, __int64 a3,
                                     __int64 a4, char a5, __int64 a6,
                                     _QWORD* a7, _QWORD* a8)
{
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  struct {
    _QWORD v20[2];
    __int64 v21;
    unsigned int v22;
    int v23;
    __int64 v24;
    __int64 v25;
  } v20_;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v15 = *(_DWORD*)(a1 + 48);
  if (v15 != 0) {
    v16 = 8;
  }
  else {
    v16 = 4;
  }
  if ((a5 & 1) == 0 && v15 == 0) {
    v16 = nvidia_63a200(a1);
    if (v16 == 0) {
      v16 = NvRmMemLoadMapBufferSgl_plt(*(unsigned int*)(a1 + 48));
      if (v16 == 0) {
        v16 = NvRmMemLoadMapBufferSgl_plt(a2);
        if (v16 == 0) {
          v17 = *(_DWORD*)(a1 + 48);
          v20_.v21 = 0;
          v20_.v24 = 0;
          v20_.v25 = 0;
          v20_.v20[0] = a4;
          v20_.v20[1] = a3;
          v20_.v22 = a2;
          v20_.v23 = v17;
          if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 4u) {
            v16 = 2;
            *a7 = 0;
          }
          else {
            v16 = nvidia_644da0(*(unsigned int*)(a1 + 24), 3224391684LL,
                                (__int64)v20_.v20, 48);
            *a7 = v20_.v21;
            if (v16 == 0) {
              *a8 = *(_QWORD*)(a1 + 56);
            }
          }
        }
      }
    }
  }
  v18 = v16;
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v18;
}

__int64 nvstl_mutex_impl_nvos_63a620(__int64 a1, __int64* a2, __int64 a3)
{
  int v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v17_;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v6 = *((unsigned __int8*)a2 + 8);
  if (v6 == 1) {
    v7 = *(_QWORD**)(a1 + 56);
    if (v7 != nullptr) {
      *v7 = 0xFFFFFFFFLL;
    }
  }
  v8 = *a2;
  v9 = *((unsigned __int8*)a2 + 10);
  v17_.v20 = 0;
  v17_.v21 = 0;
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v17 = v8;
  if ((v6 & 1) != 0 || v9 != 0) {
    if (v9 != 0) {
      v10 = v6 | 4;
    }
    else {
      v10 = v6;
    }
    LODWORD(v17_.v20) = v10;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 8u) {
    LABEL_8:
      v11 = 0;
      v12 = 0;
      v13 = 2;
      if (*((_BYTE*)a2 + 8) != 1) {
        goto LABEL_22;
      }
      goto LABEL_15;
    }
  }
  else {
    LOBYTE(v10) = 0;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 8u) {
      goto LABEL_8;
    }
  }
  v14 = nvidia_644da0(*(unsigned int*)(a1 + 24), 3223867400LL,
                      (__int64)&v17_.v17, 40);
  v12 = v17_.v18;
  v11 = v17_.v19;
  LOBYTE(v10) = v17_.v20;
  v13 = v14;
  if (*((_BYTE*)a2 + 8) != 1) {
    goto LABEL_22;
  }
LABEL_15:
  if ((*((_BYTE*)a2 + 9) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v15 = 1000;
    while (**(_QWORD**)(a1 + 56) == 0xFFFFFFFFLL) {
      NvOsSleepMS_plt(10);
      if (--v15 == 0) {
        if (v13 == 0) {
          v13 = 5;
        }
        break;
      }
    }
  }
LABEL_22:
  if (*((_BYTE*)a2 + 8) != 1) {
    if (v13 != 0) {
      goto LABEL_24;
    }
  LABEL_27:
    *(_QWORD*)a3 = v12;
    *(_QWORD*)(a3 + 8) = v11;
    *(_DWORD*)(a3 + 17) = 0;
    *(_DWORD*)(a3 + 20) = 0;
    *(_BYTE*)(a3 + 16) = (v10 & 8) != 0;
    if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) == 0) {
      return v13;
    }
  LABEL_28:
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  v12 = **(_QWORD**)(a1 + 56);
  if (v13 == 0) {
    goto LABEL_27;
  }
LABEL_24:
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    goto LABEL_28;
  }
  return v13;
}

__int64 nvstl_mutex_impl_nvos_63a820(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int v8;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) < 5u) {
    v3 = 2;
    v4 = *(_QWORD*)(a1 + 56);
    if (v4 != 0) {
      goto LABEL_7;
    }
  }
  else {
    v2 = nvidia_644ce0(*(unsigned int*)(a1 + 24), 20485);
    if (v2 != 0) {
      v3 = v2;
    }
    else {
      v3 = 0;
    }
    v4 = *(_QWORD*)(a1 + 56);
    if (v4 != 0) {
    LABEL_7:
      v5 = NvRmMemUnmap_plt(*(unsigned int*)(a1 + 48), v4, *(_QWORD*)(a1 + 64));
      *(_QWORD*)(a1 + 56) = 0;
      v6 = *(unsigned int*)(a1 + 48);
      if ((_DWORD)v6 == 0) {
        goto LABEL_9;
      }
      goto LABEL_8;
    }
  }
  v5 = 0;
  v6 = *(unsigned int*)(a1 + 48);
  if ((_DWORD)v6 != 0) {
  LABEL_8:
    NvRmMemHandleFree_plt(v6);
    *(_DWORD*)(a1 + 48) = 0;
  }
LABEL_9:
  if (v3 != 0) {
    v7 = v3;
  }
  else {
    v7 = v5;
  }
  if (v5 != 0) {
    v8 = v7;
  }
  else {
    v8 = v3;
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v8;
}

_QWORD* nvstl_mutex_impl_nvos_63af60(__int64 a1)
{
  *(_QWORD*)a1 = SdkData_e89ad8[0] + 2;
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  if (*(_DWORD*)(a1 + 24) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 24) = -1;
  }
  return SdkRoutine_629ca0((_QWORD*)a1);
}

void nvstl_mutex_impl_nvos_63aff0(__int64 a1)
{
  *(_QWORD*)a1 = SdkData_e89ad8[0] + 2;
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  if (*(_DWORD*)(a1 + 24) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 24) = -1;
  }
  SdkRoutine_629ca0((_QWORD*)a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvstl_mutex_impl_nvos_63b190(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;

  nvidia_629d40((_QWORD*)a1, a2);
  v3 = SdkData_e89ae0[0];
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_DWORD*)(a1 + 32) = -1;
  result = NvOsMutexCreate_plt(a1 + 40);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  return result;
}

__int64 nvstl_mutex_impl_nvos_63b350(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v6 = (unsigned int*)SdkRoutine_62aaa0(*(_QWORD*)(a1 + 8));
  v7 = *a2;
  v8 = *((unsigned __int8*)a2 + 8);
  v9 = *((unsigned __int8*)a2 + 9);
  v10 = *((unsigned __int8*)a2 + 10);
  v18_.v21 = 0;
  v18_.v22 = 0;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18 = v7;
  if ((v9 | v8) != 0 || v10 != 0) {
    v12 = v8 | (2 * v9);
    if (v10 != 0) {
      v12 |= 4u;
    }
    LODWORD(v18_.v21) = v12;
  }
  if (*(_DWORD*)(*((_QWORD*)v6 + 1) + 56LL) < 8u) {
    v13 = 2;
  }
  else {
    v13 = nvidia_644da0(*v6, 3223867400LL, (__int64)&v18_.v18, 40);
    if (v13 == 0) {
      v14 = v18_.v19;
      v15 = v18_.v20;
      v16 = v18_.v21;
      *(_DWORD*)(a3 + 17) = 0;
      *(_DWORD*)(a3 + 20) = 0;
      *(_QWORD*)a3 = v14;
      *(_QWORD*)(a3 + 8) = v15;
      *(_BYTE*)(a3 + 16) = (v16 & 8) != 0;
    }
  }
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 40)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v13;
}

_QWORD* nvstl_mutex_impl_nvos_63b490(_QWORD* a1)
{
  *a1 = SdkData_e89ae0[0] + 2;
  if ((unsigned int)NvOsMutexDestroyEx_plt(a1[5]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  return SdkRoutine_629ca0(a1);
}

void nvstl_mutex_impl_nvos_63b510(_QWORD* a1)
{
  *a1 = SdkData_e89ae0[0] + 2;
  if ((unsigned int)NvOsMutexDestroyEx_plt(a1[5]) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  SdkRoutine_629ca0(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvstl_mutex_impl_nvos_63ce10(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 result;

  nvstl_mutex_impl_nvos_62a020((_QWORD*)a1, a2);
  *(_BYTE*)(a1 + 52) = 0;
  v4 = SdkData_e89af8;
  *(_QWORD*)(a1 + 56) = a2 + 280;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_DWORD*)(a1 + 48) = -1;
  *(_QWORD*)(a1 + 144) = nvidia_636a10();
  result = NvOsMutexCreate_plt(a1 + 152);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  *(_QWORD*)(a1 + 160) = 0;
  return result;
}

__int64 nvstl_mutex_impl_nvos_63d560(__int64 a1, __int64 a2)
{
  __int64 v4;
  bool v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned int v17;
  _QWORD v19[3];

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(v4 + 340) < 0xBu || (*(_QWORD*)(v4 + 360) & 0x100LL) == 0;
  if (!v5 && *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) +
                        100) >= 2u) {
    v6 = *(_DWORD*)(a2 + 48);
    v7 = *(_DWORD*)(a2 + 112);
    v19[1] = 0;
    v19[2] = 0;
    v19[0] = __PAIR64__(v7, v6);
    v8 = *(_QWORD*)(a1 + 56);
    v9 = *(_DWORD*)(v8 + 60);
    v10 = *(_QWORD*)(v8 + 80) & 0x100LL;
    if (v9 >= 0xB && v10 != 0) {
      v12 = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222819851LL, (__int64)v19,
                          24);
      if (v12 != 0) {
        goto LABEL_21;
      }
      goto LABEL_20;
    }
  LABEL_18:
    v17 = 2;
    goto LABEL_22;
  }
  LODWORD(v19[0]) = *(_DWORD*)(a2 + 48);
  v13 = *(_QWORD*)(a1 + 56);
  v14 = *(_DWORD*)(v13 + 60);
  v15 = *(_QWORD*)(v13 + 80) & 0x100LL;
  if (v14 == 0 || v15 == 0) {
    goto LABEL_18;
  }
  v12 = nvidia_644da0(*(unsigned int*)(a1 + 48), 3221509121LL, (__int64)v19, 4);
  if (v12 == 0) {
  LABEL_20:
    v12 = nvstl_mutex_impl_nvos_62a130(a1, a2);
  }
LABEL_21:
  v17 = v12;
LABEL_22:
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v17;
}

__int64 nvstl_mutex_impl_nvos_63d6e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v12;

  if ((unsigned int)NvOsMutexLockEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v12 = *(_DWORD*)(a2 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  v5 = *(_DWORD*)(v4 + 60);
  v6 = *(_QWORD*)(v4 + 80) & 0x100LL;
  if (v5 < 2 || v6 == 0) {
    v8 = 2;
  LABEL_8:
    nvidia_632420(a2);
  LABEL_9:
    nvstl_mutex_impl_nvos_62a1e0(a1, a2);
    goto LABEL_13;
  }
  v9 = nvidia_644da0(*(unsigned int*)(a1 + 48), 3221509122LL, (__int64)&v12, 4);
  if (v9 != 0) {
    v8 = v9;
    goto LABEL_8;
  }
  v10 = nvidia_632420(a2);
  if (v10 != 0) {
    v8 = v10;
    goto LABEL_9;
  }
  v8 = nvstl_mutex_impl_nvos_62a1e0(a1, a2);
LABEL_13:
  if ((unsigned int)NvOsMutexUnlockEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  return v8;
}

_QWORD* nvstl_mutex_impl_nvos_63df30(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89af8 + 2;
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    NvOsFree_plt(v2);
    *(_QWORD*)(a1 + 160) = 0;
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  if (*(_DWORD*)(a1 + 48) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 48) = -1;
  }
  return nvstl_mutex_impl_nvos_62a0a0((_QWORD*)a1);
}

void nvstl_mutex_impl_nvos_63dfd0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89af8 + 2;
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    NvOsFree_plt(v2);
    *(_QWORD*)(a1 + 160) = 0;
  }
  if ((unsigned int)NvOsMutexDestroyEx_plt(*(_QWORD*)(a1 + 152)) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  if (*(_DWORD*)(a1 + 48) != -1) {
    NvOsDrvClose_plt();
    *(_DWORD*)(a1 + 48) = -1;
  }
  nvstl_mutex_impl_nvos_62a0a0((_QWORD*)a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvstl_mutex_impl_nvos_644610(_QWORD* a1)
{
  __int64 result;

  result = NvOsMutexDestroyEx_plt(*a1);
  if ((_DWORD)result != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  72,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::~g"
                           "en_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl:"
                           ":NullLockOrderToken]",
                  (__int64)"NvOsMutexDestroyEx() failed");
  }
  return result;
}

__int64 nvstl_mutex_impl_nvos_644980(bool* a1)
{
  int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;

  if ((unsigned int)NvOsMutexLockEx_plt(SdkData_1040728) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  v2 = SdkData_1040730++;
  if (v2 != 0) {
    v3 = 0;
    v4 = SdkData_1040728;
    *a1 = true;
    if ((unsigned int)NvOsMutexUnlockEx_plt(v4) != 0) {
      goto LABEL_14;
    }
  }
  else {
    v3 = SdkRoutine_644780();
    if (v3 != 0) {
      SdkData_1040730 = 0;
      if (SdkData_1040738 != 0) {
        (**(void (***)(__int64))SdkData_1040738)(SdkData_1040738);
        NvOsFree_plt(SdkData_1040738);
        SdkData_1040738 = 0;
      }
      if (SdkData_1040734 == 1) {
        nvidia_625ed0();
        SdkData_1040734 = 0;
      }
      nvidia_643ff0();
      v7 = SdkData_1040728;
      *a1 = v3 == 0;
      if ((unsigned int)NvOsMutexUnlockEx_plt(v7) != 0) {
      LABEL_14:
        nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                               "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                      92,
                      (__int64)"void "
                               "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                               "NvRmGpuUnexpectedErrorHandler, "
                               "nvstl::impl::NullLockOrderT"
                               "oken>::unlock() [T_UnexpectedError = "
                               "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                               "T_OrderToken = nvstl::i"
                               "mpl::NullLockOrderToken]",
                      (__int64)"NvOsMutexUnlockEx() failed");
      }
    }
    else {
      v5 = SdkData_1040728;
      *a1 = true;
      if ((unsigned int)NvOsMutexUnlockEx_plt(v5) != 0) {
        goto LABEL_14;
      }
    }
  }
  return v3;
}

__int64 nvstl_mutex_impl_nvos_644af0(_BYTE* a1)
{
  int v3;
  unsigned int v4;

  if (*a1 != 1) {
    return 0;
  }
  if ((unsigned int)NvOsMutexLockEx_plt(SdkData_1040728) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  83,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::lock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::NullLockOrderToken]",
                  (__int64)"NvOsMutexLockEx() failed");
  }
  *a1 = 0;
  v3 = SdkData_1040730 - 1;
  if (SdkData_1040730-- <= 1) {
    if (v3 != 0) {
      v4 = 8;
      if ((unsigned int)NvOsMutexUnlockEx_plt(SdkData_1040728) == 0) {
        return v4;
      }
    }
    else {
      if (SdkData_1040738 != 0) {
        (**(void (***)(__int64))SdkData_1040738)(SdkData_1040738);
        NvOsFree_plt(SdkData_1040738);
        SdkData_1040738 = 0;
      }
      if ((SdkData_1040734 & 1) == 0) {
        nvidia_643ff0();
        v4 = 0;
        if ((unsigned int)NvOsMutexUnlockEx_plt(SdkData_1040728) != 0) {
          goto LABEL_17;
        }
        return v4;
      }
      v4 = nvidia_625ed0();
      SdkData_1040734 = 0;
      nvidia_643ff0();
      if ((unsigned int)NvOsMutexUnlockEx_plt(SdkData_1040728) == 0) {
        return v4;
      }
    }
  LABEL_17:
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  92,
                  (__int64)"void "
                           "nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken"
                           ">::unlock() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::Nul"
                           "lLockOrderToken]",
                  (__int64)"NvOsMutexUnlockEx() failed");
  }
  v4 = 0;
  if ((unsigned int)NvOsMutexUnlockEx_plt(SdkData_1040728) != 0) {
    goto LABEL_17;
  }
  return v4;
}

__int64 nvstl_mutex_impl_nvos_644c70()
{
  if ((unsigned int)NvOsMutexCreate_plt(&SdkData_1040728) != 0) {
    nvidia_62a350((__int64)"C:/dvs/git/dirty/git-master_hos/core-private/"
                           "include\\nvstl\\impl\\nvstl_mutex_impl_nvos.h",
                  65,
                  (__int64)"nvstl::impl::gen_nvos_mutex<nvrm_gpu::"
                           "NvRmGpuUnexpectedErrorHandler, "
                           "nvstl::impl::NullLockOrderToken>::ge"
                           "n_nvos_mutex() [T_UnexpectedError = "
                           "nvrm_gpu::NvRmGpuUnexpectedErrorHandler, "
                           "T_OrderToken = nvstl::impl::"
                           "NullLockOrderToken]",
                  (__int64)"NvOsMutexCreate() failed");
  }
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
