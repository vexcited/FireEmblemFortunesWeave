#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_async_Executable_Destroy_Executable_plt(_QWORD);
__int64
    nn_async_detail_SynchronousContinuationList_Destroy_SynchronousContinuationList_plt(
        _QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern __int64 SdkData_e86c18;
__int64 nn_async_detail_ab780(__int64 a1);
__int64 nn_async_detail_ab830(__int64 a1);

__int64 nn_async_detail_ab780(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 256);
  v2 = SdkData_e86c18 + 88;
  *(_QWORD*)a1 = SdkData_e86c18 + 16;
  *(_QWORD*)(a1 + 48) = v2;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_plt(v1);
    a1 = v5;
    if (*(_BYTE*)(v5 + 208) != 1) {
      return nn_async_Executable_Destroy_Executable_plt(a1);
    }
  }
  else if (*(_BYTE*)(a1 + 208) != 1) {
    return nn_async_Executable_Destroy_Executable_plt(a1);
  }
  v3 = a1;
  nn_async_detail_SynchronousContinuationList_Destroy_SynchronousContinuationList_plt(
      a1 + 144);
  a1 = v3;
  return nn_async_Executable_Destroy_Executable_plt(a1);
}

__int64 nn_async_detail_ab830(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 208);
  v2 = SdkData_e86c18 + 88;
  *(_QWORD*)(a1 - 48) = SdkData_e86c18 + 16;
  v3 = a1 - 48;
  *(_QWORD*)a1 = v2;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_plt(v1);
    a1 = v5;
    if (*(_BYTE*)(v5 + 160) != 1) {
      return nn_async_Executable_Destroy_Executable_plt(v3);
    }
  }
  else if (*(_BYTE*)(a1 + 160) != 1) {
    return nn_async_Executable_Destroy_Executable_plt(v3);
  }
  nn_async_detail_SynchronousContinuationList_Destroy_SynchronousContinuationList_plt(
      a1 + 96);
  return nn_async_Executable_Destroy_Executable_plt(v3);
}

#pragma GCC visibility pop
