#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_bcat_DirectoryName_IsValid_plt(_QWORD);
__int64 nn_bcat_shim_HandleIpcError_plt(_QWORD);
__int64 nn_bcat_shim_ShimLibraryGlobal_CreateDirectoryService_plt(_QWORD,
                                                                  _QWORD);
__int64 nn_bcat_shim_ShimLibraryGlobal_IncrementDeliveryCacheDirectoryCount_plt(
    _QWORD);
__int64 nn_bcat_shim_ShimLibraryGlobal_ShimLibraryGlobal_plt(_QWORD);
extern __int64 SdkData_e87748;
extern __int64 SdkData_e87750;
__int64 nn_bcat_2c0690(_QWORD* a1);

__int64 nn_bcat_2c0690(_QWORD* a1)
{
  _QWORD* v2;
  atomic_uchar* v3;
  unsigned int v4;
  __int64 result;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;

  v2 = (_QWORD*)a1[1];
  if ((nn_bcat_DirectoryName_IsValid_plt(*a1) & 1) == 0) {
    return 634;
  }
  if (*v2 != 0) {
    return 3194;
  }
  v9 = 0;
  v3 = (atomic_uchar*)SdkData_e87748;
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e87748,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e87748) != 0) {
    nn_bcat_shim_ShimLibraryGlobal_ShimLibraryGlobal_plt(SdkData_e87750);
    __cxa_guard_release_plt(SdkData_e87748);
  }
  v4 = nn_bcat_shim_ShimLibraryGlobal_CreateDirectoryService_plt(SdkData_e87750,
                                                                 &v9);
  result = nn_bcat_shim_HandleIpcError_plt(v4);
  if ((_DWORD)result == 0) {
    v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v9 + 32LL))(v9, *a1);
    v7 = nn_bcat_shim_HandleIpcError_plt(v6);
    if (v7 != 0) {
      v8 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
      return v8;
    }
    else {
      *v2 = v9;
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e87748) != 0) {
        nn_bcat_shim_ShimLibraryGlobal_ShimLibraryGlobal_plt(SdkData_e87750);
        __cxa_guard_release_plt(SdkData_e87748);
      }
      nn_bcat_shim_ShimLibraryGlobal_IncrementDeliveryCacheDirectoryCount_plt(
          SdkData_e87750);
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
