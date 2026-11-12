#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsMutexLockEx_plt(_QWORD);
__int64 NvOsMutexUnlockEx_plt(_QWORD);
__int64 nvidia_63b210(__int64, unsigned int*);
__int64 nvstl_mutex_impl_nvos_63b190(__int64);
void __attribute__((noreturn)) nvidia_62a350(__int64, __int64, __int64,
                                             __int64);
__int64 nvidia_nvstl_impl_63a4e0(__int64 a1, unsigned int* a2, __int64* a3);

__int64 nvidia_nvstl_impl_63a4e0(__int64 a1, unsigned int* a2, __int64* a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

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
  if (*a3 != 0) {
    v6 = 8;
    goto LABEL_7;
  }
  v7 = NvOsAlloc_plt(48);
  if (v7 != 0) {
    v8 = v7;
    nvstl_mutex_impl_nvos_63b190(v7);
    *a3 = v8;
    v6 = nvidia_63b210(v8, a2);
    if (v6 == 0) {
      goto LABEL_7;
    }
  }
  else {
    v6 = 6;
  }
  v10 = *a3;
  if (*a3 != 0) {
    (**(void (***)(__int64))v10)(*a3);
    v11 = *a3;
    *(_BYTE*)(v10 + 17) = 1;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      NvOsFree_plt(*a3);
      *a3 = 0;
    }
  }
LABEL_7:
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
  return v6;
}

#pragma GCC visibility pop
