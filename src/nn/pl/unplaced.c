#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_pl_sharedresource_GetPlatformSharedResourceManager_plt(PSEUDO_X8);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 pl_shared_font_5a2e10();
extern _UNKNOWN SdkData_f65e50;
extern __int64 SdkData_f65e48;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
__int64 nn_pl_5a28e0(int* a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                     unsigned int a6);

__int64 nn_pl_5a28e0(int* a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                     unsigned int a6)
{
  int v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  unsigned int* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  _QWORD v23[2];
  _QWORD v24[2];
  struct {
    __int64 v25;
    char gap72_[4];
    int v26;
  } v25_;
  __int64 v27;
  struct {
    _QWORD v28[8];
    char gap152_[4];
    _BYTE v29[4];
  } v28_;

  v28_.v29[0] = 0;
  v28_.v28[6] = 0;
  v28_.v28[7] = 0;
  if (a4 >= 6) {
    v11 = 6;
  }
  else {
    v11 = a4;
  }
  v12 = v11;
  memset(v28_.v28, 0, 48);
  v27 = 0;
  nn_pl_sharedresource_GetPlatformSharedResourceManager_plt((void*)(&v25_.v25));
  v23[0] = a3;
  v23[1] = v12;
  v24[0] = &v27;
  v24[1] = v12;
  v25_.v26 = (*(__int64 (**)(__int64, _BYTE*, int*, _QWORD*, _QWORD*, __int64,
                             _QWORD))(*(_QWORD*)v25_.v25 + 104LL))(
      v25_.v25, v28_.v29, a1, v24, v23, a5, a6);
  if (v25_.v26 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v25_.v26);
  }
  if (v25_.v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25_.v25 + 8LL))(v25_.v25);
  }
  result = v28_.v29[0];
  if (v28_.v29[0] == 1 && *a1 >= 1) {
    v14 = 0;
    v15 = (unsigned int*)v28_.v28;
    do {
      v16 = *((_QWORD*)v15 - 1);
      v17 = *v15;
      *(_BYTE*)a2 = v16;
      *(_BYTE*)(a2 + 1) = (v16 & 0x100) != 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f65e50,
                                memory_order_acquire) &
           1) == 0) {
        v22 = result;
        v20 = v16;
        v21 = v17;
        v18 = __cxa_guard_acquire_plt((__int64)&SdkData_f65e50);
        v16 = v20;
        v17 = v21;
        v19 = v18;
        result = v22;
        if (v19 != 0) {
          SdkData_f65e48 = pl_shared_font_5a2e10();
          __cxa_guard_release_plt((__int64)&SdkData_f65e50);
          v16 = v20;
          v17 = v21;
          result = v22;
        }
      }
      v15 += 3;
      ++v14;
      *(_QWORD*)(a2 + 8) = SdkData_f65e48 + HIDWORD(v16);
      *(_QWORD*)(a2 + 16) = v17;
      a2 += 24;
    } while (v14 < *a1);
  }
  return result;
}

#pragma GCC visibility pop
