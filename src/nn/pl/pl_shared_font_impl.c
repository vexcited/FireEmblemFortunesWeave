#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_pl_sharedresource_GetPlatformSharedResourceManager_plt(PSEUDO_X8);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachSharedMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_MapSharedMemory_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_f65df8;
extern _UNKNOWN SdkData_f65e50;
extern __int64 SdkData_f65e38;
extern __int64 SdkData_f65e40;
extern __int64 SdkData_f65e48;
__int64 nn_pl_GetBuiltInFontData_5a27d0(__int64 a1, unsigned int a2,
                                        unsigned int a3);
__int64 nn_pl_RequestLoadNxFont(void* this_, void* a2);
__int64 nn_pl_GetBuiltInFontData_5a2b90(__int64 a1, unsigned int a2,
                                        unsigned int a3);
__int64 nn_pl_GetBuiltInFontDataSet(_DWORD* a1);
__int64 pl_shared_font_5a2e10();

__int64 nn_pl_GetBuiltInFontData_5a27d0(__int64 a1, unsigned int a2,
                                        unsigned int a3)
{
  __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  bool v9;
  int v10;
  __int64 v11;
  struct {
    unsigned __int64 v12;
    unsigned int v13;
  } v12_;
  int v14;
  _BYTE v15[4];

  v15[0] = 0;
  v12_.v13 = 0;
  v12_.v12 = 0;
  nn_pl_sharedresource_GetPlatformSharedResourceManager_plt((void*)(&v11));
  v14 = (*(__int64 (**)(__int64, _BYTE*, unsigned __int64*, _QWORD, _QWORD))(
      *(_QWORD*)v11 + 96LL))(v11, v15, &v12_.v12, a2, a3);
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  result = v15[0];
  if (v15[0] == 1) {
    v7 = v12_.v12;
    v8 = v12_.v13;
    v9 = (v12_.v12 & 0x100) != 0;
    *(_BYTE*)a1 = v12_.v12;
    *(_BYTE*)(a1 + 1) = v9;
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f65e50,
                              memory_order_acquire) &
         1) == 0) {
      v10 = __cxa_guard_acquire_plt(&SdkData_f65e50);
      result = 1;
      if (v10 != 0) {
        SdkData_f65e48 = pl_shared_font_5a2e10();
        __cxa_guard_release_plt(&SdkData_f65e50);
        result = 1;
      }
    }
    *(_QWORD*)(a1 + 8) = SdkData_f65e48 + HIDWORD(v7);
    *(_QWORD*)(a1 + 16) = v8;
  }
  return result;
}

__int64 nn_pl_RequestLoadNxFont(void* this_, void* a2)
{
  __int64 result;
  __int64 v4;
  struct {
    unsigned int v5;
    int v6;
  } v5_;
  _QWORD v7[8];
  __int64* v8;

  memset(v7, 0, sizeof(v7));
  LODWORD(v8) = nn_os_CreateTransferMemory_plt(v7, this_, 19922944, 1);
  if ((_DWORD)v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  v5_.v6 = 1;
  v5_.v5 = nn_os_DetachTransferMemory_plt(v7);
  nn_pl_sharedresource_GetPlatformSharedResourceManager_plt((void*)(&v4));
  v8 = &SdkData_f65e38;
  LODWORD(v8) =
      (*(__int64 (**)(__int64, __int64**, _QWORD, unsigned int*, __int64))(
          *(_QWORD*)v4 + 112LL))(v4, &v8, 0, &v5_.v5, 19922944);
  if ((_DWORD)v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  result = v4;
  if (v4 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  SdkData_f65e40 = (__int64)this_;
  if ((unsigned __int8)v5_.v6 == 1) {
    result = nn_os_CloseNativeHandle_plt(v5_.v5);
  }
  if (LOBYTE(v7[0]) != 0) {
    return nn_os_DestroyTransferMemory_plt(v7);
  }
  return result;
}

__int64 nn_pl_GetBuiltInFontData_5a2b90(__int64 a1, unsigned int a2,
                                        unsigned int a3)
{
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  unsigned __int8 v11;

  v9 = 0;
  v8 = 0;
  v11 = 0;
  v10 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64*, _QWORD,
                        _QWORD))(*(_QWORD*)SdkData_f65e38 + 32LL))(
      SdkData_f65e38, &v11, &v8, a2, a3);
  if (v10 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
    __udf(0);
  }
  result = v11;
  if (v11 == 1) {
    v5 = v8;
    v6 = v9;
    v7 = (v8 & 0x100) != 0;
    *(_BYTE*)a1 = v8;
    *(_BYTE*)(a1 + 1) = v7;
    *(_QWORD*)(a1 + 8) = SdkData_f65e40 + HIDWORD(v5);
    *(_QWORD*)(a1 + 16) = v6;
  }
  return result;
}

__int64 nn_pl_GetBuiltInFontDataSet(_DWORD* a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int8 v16;

  v14 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  v5 = 0;
  v16 = 0;
  v15 = 0;
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_f65e38 + 40LL))(
      (__int64)SdkData_f65e38);
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
    __udf(0);
  }
  result = v16;
  if (v16 == 1) {
    *a1 = v15;
  }
  return result;
}

__int64 pl_shared_font_5a2e10()
{
  __int64 v0;
  int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;

  v5 = 0;
  nn_pl_sharedresource_GetPlatformSharedResourceManager_plt((void*)&v5);
  v4 = 0;
  v3 = 0;
  v2 = (*(__int64 (**)(__int64, __int64*, unsigned int*))(*(_QWORD*)v5 + 88LL))(
      v5, &v4, &v3);
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v2);
    __udf(0);
  }
  nn_os_AttachSharedMemory_plt(&SdkData_f65df8, v3, (unsigned int)v4,
                               BYTE4(v4));
  BYTE4(v4) = 0;
  LODWORD(v4) = 0;
  v0 = nn_os_MapSharedMemory_plt(&SdkData_f65df8, 1);
  if (BYTE4(v4) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v4);
  }
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v0;
}

#pragma GCC visibility pop
