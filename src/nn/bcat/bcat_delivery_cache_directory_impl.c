#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_bcat_2c0690(_QWORD*);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85b6c0(_QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85b690(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_bcat_DeliveryCacheDirectory_Open_2c0470(void* this_, void* a2);

__int64 nn_bcat_DeliveryCacheDirectory_Open_2c0470(void* this_, void* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  _QWORD v10[2];

  v10[0] = a2;
  v10[1] = this_;
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2) & 1) == 0) {
    return nn_bcat_2c0690(v10);
  }
  v4 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85b6c0(*(_QWORD*)this_);
  if ((v4 & 1) == 0) {
    return nn_bcat_2c0690(v10);
  }
  v5 = nn_os_GetSystemTick_plt(v4);
  v6 = nn_bcat_2c0690(v10);
  v7 = v6;
  v8 = nn_os_GetSystemTick_plt(v6);
  nn_fs_detail_OutputAccessLog_plt_85b690(
      v7, v5, v8, "Open", *(_QWORD*)this_,
      ", class_name: DeliveryCacheDirectory, path: \"%s\"", (const char*)a2);
  return v7;
}

#pragma GCC visibility pop
