#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetAppletCommonFunctions_plt(_QWORD);
__int64 nn_am_GetLibraryAppletCreator_plt(void);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_applet_CreateTransferStorage(_QWORD* a1, __int64 a2, __int64 a3);
__int64 nn_applet_DetachHandleStorage(_DWORD* a1, _QWORD* a2, __int64 a3);
__int64 nn_applet_PushToAppletBoundChannel(__int64 a1);

__int64 nn_applet_CreateTransferStorage(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned int v6;
  struct {
    unsigned int v8;
    char v9;
  } v8_;
  __int64 v10;
  _QWORD v11[8];
  __int64* v12;

  memset(v11, 0, sizeof(v11));
  LODWORD(v12) = nn_os_CreateTransferMemory_plt(v11, a2, a3, 0);
  if ((_DWORD)v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v12);
  }
  v10 = 0;
  v5 = nn_am_GetLibraryAppletCreator_plt();
  v8_.v8 = nn_os_DetachTransferMemory_plt(v11);
  v8_.v9 = 1;
  v12 = &v10;
  v6 = (*(__int64 (**)(__int64, __int64**, unsigned int*, __int64))(
      *(_QWORD*)v5 + 80LL))(v5, &v12, &v8_.v8, a3);
  if (v8_.v9 == 1) {
    nn_os_CloseNativeHandle_plt(v8_.v8);
  }
  if (v6 == 0) {
    *a1 = v10;
    if (LOBYTE(v11[0]) == 0) {
      return v6;
    }
    goto LABEL_8;
  }
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))((__int64)v10);
  }
  if (LOBYTE(v11[0]) != 0) {
  LABEL_8:
    nn_os_DestroyTransferMemory_plt(v11);
  }
  return v6;
}

__int64 nn_applet_DetachHandleStorage(_DWORD* a1, _QWORD* a2, __int64 a3)
{
  int v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;

  v13 = 0;
  v14 = &v13;
  v6 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a3 + 40LL))(a3, &v14);
  if (v6 != 0) {
    if ((v6 & 0x3FFFFF) != 0x3FE80) {
      LODWORD(v14) = v6;
      nn_diag_detail_AbortImpl_plt_858db0(&v14);
    }
    v8 = 16003;
    v9 = v13;
    if (v13 != 0) {
      goto LABEL_6;
    }
  }
  else {
    v14 = nullptr;
    v12 = 0;
    v11 = (*(__int64 (**)(__int64, __int64**, __int64*))(*(_QWORD*)v13 + 40LL))(
        v13, &v14, &v12);
    if (v11 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v11);
    }
    v7 = (int)v14;
    BYTE4(v14) = 0;
    LODWORD(v14) = 0;
    *a1 = v7;
    *a2 = v12;
    (*(void (**)(__int64))(*(_QWORD*)a3 + 8LL))(a3);
    if (BYTE4(v14) == 1) {
      nn_os_CloseNativeHandle_plt((unsigned int)v14);
    }
    v8 = 0;
    v9 = v13;
    if (v13 != 0) {
    LABEL_6:
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    }
  }
  return v8;
}

__int64 nn_applet_PushToAppletBoundChannel(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v6;
  __int64 v7;

  v2 = nn_am_GetAppletCommonFunctions_plt(a1);
  if (a1 != 0) {
    v3 = v2;
    (**(void (***)(__int64))a1)(a1);
    v2 = v3;
  }
  v7 = a1;
  v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 56LL))(v2, &v7);
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v6 = v4;
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1);
}

#pragma GCC visibility pop
