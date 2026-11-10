#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_async_detail_ExecuteInline_plt(void);
__int64 nn_async_detail_GetThreadLocalTaskExecutionContext_plt(void);
__int64
    nn_async_detail_ScopedCancellationTokenRegister_Destroy_ScopedCancellationTokenRegister_plt(
        _QWORD);
__int64
    nn_async_detail_ScopedCancellationTokenRegister_ScopedCancellationTokenRegister_plt(
        _QWORD);
__int64 nn_async_detail_SynchronousContinuationList_ExecuteContinuations_plt(
    _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_GetCurrentFiber_plt(_QWORD);
__int64 nn_os_SwitchToFiber_plt(_QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
__int64 nn_async_detail_FiberTaskCoordinatorBase_DoExecute(__int64 a1);
__int64
nn_async_detail_FiberTaskCoordinatorBase_GetSynchronousContinuationList_ab760(
    void* this_);

__int64 nn_async_detail_FiberTaskCoordinatorBase_DoExecute(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _QWORD v14[2];

  v14[0] = 0;
  v14[1] = 0;
  v2 =
      nn_async_detail_ScopedCancellationTokenRegister_ScopedCancellationTokenRegister_plt(
          v14);
  *(_QWORD*)(a1 + 232) = nn_os_GetCurrentFiber_plt(v2);
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 272) = 3;
  v3 = nn_async_detail_GetThreadLocalTaskExecutionContext_plt();
  v4 = *(_QWORD*)(v3 + 24);
  v5 = v3;
  *(_QWORD*)(v3 + 24) = a1;
  nn_os_SwitchToFiber_plt(a1 + 56);
  for (*(_QWORD*)(v5 + 24) = v4; *(_QWORD*)(a1 + 240) != 0;
       *(_QWORD*)(v8 + 24) = v7) {
    nn_async_detail_ExecuteInline_plt();
    v9 = *(_QWORD*)(a1 + 256);
    *(_QWORD*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_QWORD*)(a1 + 256) = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_plt(v9);
    }
    v6 = nn_async_detail_GetThreadLocalTaskExecutionContext_plt();
    v7 = *(_QWORD*)(v6 + 24);
    v8 = v6;
    *(_QWORD*)(v6 + 24) = a1;
    nn_os_SwitchToFiber_plt(a1 + 56);
  }
  if (*(_DWORD*)(a1 + 272) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
    if (*(_BYTE*)(a1 + 208) == 1) {
      nn_async_detail_SynchronousContinuationList_ExecuteContinuations_plt(a1 +
                                                                           144);
    }
  }
  v10 = *(_QWORD*)(a1 + 264);
  v11 =
      nn_async_detail_ScopedCancellationTokenRegister_Destroy_ScopedCancellationTokenRegister_plt(
          v14);
  v12 = *(_DWORD*)(a1 + 272);
  if (v12 >= 3) {
    if (v12 == 3) {
      v11 = nn_diag_detail_AbortImpl_plt_856170(v11);
    }
    nn_detail_UnexpectedDefaultImpl_plt_857150(v11);
    __udf(0);
  }
  return v10;
}

__int64

nn_async_detail_FiberTaskCoordinatorBase_GetSynchronousContinuationList_ab760(
    void* this_)
{
  if (*((_BYTE*)this_ + 160) != 0) {
    return (__int64)this_ + 96;
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
