#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(_QWORD);
extern _UNKNOWN SdkData_eafad8;
extern _UNKNOWN SdkData_eafae0;
void fs_path_based_file_data_cache_api_1304d0();

void fs_path_based_file_data_cache_api_1304d0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
    nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
        &SdkData_eafae0);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eafad8);
  }
}

#pragma GCC visibility pop
