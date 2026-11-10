#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
extern _UNKNOWN SdkData_bd27d0;
extern _UNKNOWN SdkData_bd28ac;
extern _UNKNOWN SdkData_bd2988;
__int64 nn_fs_ContentStorageInfo_Initialize(__int64 a1, int a2);

__int64 nn_fs_ContentStorageInfo_Initialize(__int64 a1, int a2)
{
  int v3;

  switch (a2) {
  case 2:
    memcpy_plt(a1, &SdkData_bd2988, 220);
    v3 = 5;
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0x100000003LL;
    *(_QWORD*)(a1 + 232) = 0x10000000000LL;
    *(_QWORD*)(a1 + 240) = 0x10100000004LL;
    *(_QWORD*)(a1 + 248) = 1;
    *(_QWORD*)(a1 + 256) = 2;
    break;
  case 1:
    memcpy_plt(a1, &SdkData_bd28ac, 220);
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0x10100000000LL;
    *(_QWORD*)(a1 + 232) = 0x100000003LL;
    v3 = 4;
    *(_QWORD*)(a1 + 240) = 1;
    *(_QWORD*)(a1 + 248) = 2;
    break;
  case 0:
    memcpy_plt(a1, &SdkData_bd27d0, 220);
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 232) = 1;
    *(_QWORD*)(a1 + 240) = 2;
    v3 = 3;
    break;
  default:
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    __udf(0);
  }
  *(_DWORD*)(a1 + 264) = v3;
  *(_BYTE*)(a1 + 268) = 3;
  *(_DWORD*)(a1 + 272) = 1;
  return 0;
}

#pragma GCC visibility pop
