#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_fs_detail_CalculateFilePathHashDefault();
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__attribute__((swiftcall)) void
nn_fs_detail_PathBasedFileDataCache_Lock(PSEUDO_X8 x8_, void* this_);
__int64
nn_fs_detail_PathBasedFileDataCache_SetDefaultCalculateHashFunc(__int64 this_);
__attribute__((swiftcall)) void

nn_fs_detail_PathBasedFileDataCache_Lock(PSEUDO_X8 x8_, void* this_)
{
  char** a2 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v2;

  v2 = (char*)this_ + 16;
  *a2 = v2;
  {
    nn_os_AcquireWriteLock_plt(v2);
    return;
  }
}

__int64

nn_fs_detail_PathBasedFileDataCache_SetDefaultCalculateHashFunc(__int64 this_)
{
  *(_QWORD*)(this_ + 64) = nn_fs_detail_CalculateFilePathHashDefault;
  return this_;
}

#pragma GCC visibility pop
