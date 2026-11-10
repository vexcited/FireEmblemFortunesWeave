#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_async_Executable_Destroy_Executable_plt(_QWORD);
__int64
    nn_async_detail_SynchronousContinuationList_Destroy_SynchronousContinuationList_plt(
        _QWORD);
extern __int64 SdkData_e86c30;
__int64 async_detail_ac980(__int64 a1);

__int64 async_detail_ac980(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;

  v1 = SdkData_e86c30 + 16;
  *(_QWORD*)a1 = SdkData_e86c30 + 88;
  v2 = *(unsigned __int8*)(a1 + 72);
  *(_QWORD*)(a1 - 48) = v1;
  v3 = a1 - 48;
  if (v2 == 1) {
    nn_async_detail_SynchronousContinuationList_Destroy_SynchronousContinuationList_plt(
        a1 + 8);
  }
  return nn_async_Executable_Destroy_Executable_plt(v3);
}

#pragma GCC visibility pop
