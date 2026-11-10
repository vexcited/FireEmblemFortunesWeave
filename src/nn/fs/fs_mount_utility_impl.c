#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_detail_Find_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledFileSystemAccessorAccessLog_plt(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_os_GetSystemTick_plt(_QWORD);
bool nn_fs_IsMounted(void* this_, const char* a2);

bool nn_fs_IsMounted(void* this_, const char* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  unsigned int v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v14;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2) & 1) != 0 &&
      ((v3 = nn_fs_detail_IsEnabledFileSystemAccessorAccessLog_plt(this_)) &
       1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v14 = 0;
    v5 = nn_fs_detail_Find_plt(&v14, this_);
    v6 = v5 == 0;
    if ((v5 & 0x3FFFFF) == 0x35F202) {
      v7 = 0;
    }
    else {
      v7 = v5;
    }
    if ((_DWORD)v5 != 0) {
      v8 = "false";
    }
    else {
      v8 = "true";
    }
    if ((_DWORD)v5 != 0) {
      v9 = v7;
    }
    else {
      v9 = 0;
    }
    v10 = nn_os_GetSystemTick_plt(v5);
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v9, v4, v10, "IsMounted", 0, ", name: \"%s\", is_mounted: \"%s\"",
        (const char*)this_, v8);
    v11 = v9;
  }
  else {
    v14 = 0;
    v12 = nn_fs_detail_Find_plt(&v14, this_);
    v6 = v12 == 0;
    if (v12 != 0) {
      if ((v12 & 0x3FFFFF) == 0x35F202) {
        v11 = 0;
      }
      else {
        v11 = v12;
      }
      v9 = v11;
    }
    else {
      v11 = 0;
      v9 = 0;
    }
  }
  nn_fs_detail_IsAbortNeeded_plt(v9);
  nn_fs_detail_LogResultErrorMessage_plt(v9, "IsMounted");
  LODWORD(v14) = v11;
  if (v11 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  return v6;
}

#pragma GCC visibility pop
