#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_prepo_AsyncContext_AsyncContext_plt_872a10(_QWORD, _QWORD);
__int64 nn_prepo_AsyncContext_AsyncContext_plt_872a20(_QWORD, _QWORD);
__int64 nn_prepo_detail_HandleSaveResult_plt(_QWORD);
__int64 nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(_QWORD);
__int64 nn_srepo_detail_ReportGenerator_Initialize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_srepo_detail_VerifyEventId_plt(_QWORD, _QWORD);
bool SdkRoutine_5a9900();
bool SdkRoutine_5a9c80();
extern __int64 SdkData_e88e58;
__int64 nn_prepo_detail_PlayReportImpl_Save_5a9830(void* this_);
__int64 nn_prepo_detail_PlayReportImpl_Save_5a9a20(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
nn_prepo_detail_PlayReportImpl_Send_5a9b00(PSEUDO_X8 x8_, void* this_);
__attribute__((swiftcall)) void
nn_prepo_detail_PlayReportImpl_Send_5a9da0(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2);

__int64 nn_prepo_detail_PlayReportImpl_Save_5a9830(void* this_)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  _QWORD v9[2];
  _QWORD v10[2];
  __int64 v11;

  if (!SdkRoutine_5a9900()) {
    return 0;
  }
  v11 = 0;
  if ((nn_srepo_detail_VerifyEventId_plt(&v11, this_) & 1) == 0) {
    return 2689;
  }
  v2 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
  v10[0] = this_;
  v10[1] = v11 + 1;
  v4 = *((_QWORD*)this_ + 7);
  v3 = (char*)this_ + 56;
  v5 = (unsigned __int8)*(v3 - 24);
  v9[0] = *((_QWORD*)v3 - 2);
  v9[1] = v4;
  v6 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, _QWORD, __int64))(
      *(_QWORD*)v2 + 80LL))(v2, v10, v9, 0, v5);
  v7 = nn_prepo_detail_HandleSaveResult_plt(v6);
  nn_srepo_detail_ReportGenerator_Initialize_plt(v3, *((_QWORD*)v3 - 2),
                                                 *((_QWORD*)v3 - 1));
  return v7;
}

__int64 nn_prepo_detail_PlayReportImpl_Save_5a9a20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  _QWORD v11[2];
  _QWORD v12[2];
  __int64 v13;

  if (!SdkRoutine_5a9900()) {
    return 0;
  }
  v13 = 0;
  if ((nn_srepo_detail_VerifyEventId_plt(&v13, a1) & 1) == 0) {
    return 2689;
  }
  v4 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
  v12[0] = a1;
  v12[1] = v13 + 1;
  v6 = *(_QWORD*)(a1 + 56);
  v5 = a1 + 56;
  v7 = *(unsigned __int8*)(v5 - 24);
  v11[0] = *(_QWORD*)(v5 - 16);
  v11[1] = v6;
  v8 = (*(__int64 (**)(__int64, __int64, _QWORD*, _QWORD*, _QWORD, __int64))(
      *(_QWORD*)v4 + 88LL))(v4, a2, v12, v11, 0, v7);
  v9 = nn_prepo_detail_HandleSaveResult_plt(v8);
  nn_srepo_detail_ReportGenerator_Initialize_plt(v5, *(_QWORD*)(v5 - 16),
                                                 *(_QWORD*)(v5 - 8));
  return v9;
}

__attribute__((swiftcall)) void

nn_prepo_detail_PlayReportImpl_Send_5a9b00(PSEUDO_X8 x8_, void* this_)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 result;
  __int64 v14;
  struct {
    unsigned int v15;
    char v16;
  } v15_;
  _QWORD v17[2];
  _QWORD v18[8];
  __int64 v19;
  __int64 v20;
  __int64* v21;

  if (!SdkRoutine_5a9c80()) {
    nn_prepo_AsyncContext_AsyncContext_plt_872a20(a2, 3201);
    return;
  }
  v20 = 0;
  v4 = nn_srepo_detail_VerifyEventId_plt(&v20, this_);
  if ((v4 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v5 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
  v6 = *((_QWORD*)this_ + 5);
  v7 = *((_QWORD*)this_ + 6);
  v8 = v5;
  v19 = 0;
  memset(v18, 0, sizeof(v18));
  LODWORD(v17[0]) = nn_os_CreateTransferMemory_plt(v18, v6, v7, 0);
  if (LODWORD(v17[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v17);
  }
  v9 = *((unsigned __int8*)this_ + 32);
  v17[0] = this_;
  v17[1] = v20 + 1;
  v15_.v15 = nn_os_DetachTransferMemory_plt(v18);
  v10 = *((unsigned int*)this_ + 12);
  v11 = *((unsigned int*)this_ + 14);
  v15_.v16 = 1;
  v21 = &v19;
  v12 = (*(__int64 (**)(__int64, __int64**, _QWORD*, _QWORD, unsigned int*,
                        __int64, __int64, _QWORD))(*(_QWORD*)v8 + 128LL))(
      v8, &v21, v17, v9, &v15_.v15, v10, v11, 0);
  if (v15_.v16 == 1) {
    nn_os_CloseNativeHandle_plt(v15_.v15);
  }
  *((_QWORD*)this_ + 5) = 0;
  if (v12 != 0) {
    nn_prepo_AsyncContext_AsyncContext_plt_872a20(a2, v12);
    if (LOBYTE(v18[0]) == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v14 = v19;
  v19 = 0;
  nn_prepo_AsyncContext_AsyncContext_plt_872a10(a2, v14);
  if (LOBYTE(v18[0]) != 0) {
  LABEL_8:
    nn_os_DestroyTransferMemory_plt(v18);
  }
LABEL_9:
  result = v19;
  if (v19 != 0) {
    (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nn_prepo_detail_PlayReportImpl_Send_5a9da0(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 result;
  __int64 v16;
  struct {
    unsigned int v17;
    char v18;
  } v17_;
  _QWORD v19[2];
  _QWORD v20[8];
  __int64 v21;
  __int64 v22;
  __int64* v23;

  if (!SdkRoutine_5a9c80()) {
    nn_prepo_AsyncContext_AsyncContext_plt_872a20(a3, 3201);
    return;
  }
  v22 = 0;
  v6 = nn_srepo_detail_VerifyEventId_plt(&v22, a1);
  if ((v6 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  v7 = nn_prepo_detail_ShimLibraryGlobal_GetSession_plt(SdkData_e88e58);
  v8 = *(_QWORD*)(a1 + 40);
  v9 = *(_QWORD*)(a1 + 48);
  v10 = v7;
  v21 = 0;
  memset(v20, 0, sizeof(v20));
  LODWORD(v19[0]) = nn_os_CreateTransferMemory_plt(v20, v8, v9, 0);
  if (LODWORD(v19[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v19);
  }
  v11 = *(unsigned __int8*)(a1 + 32);
  v19[0] = a1;
  v19[1] = v22 + 1;
  v17_.v17 = nn_os_DetachTransferMemory_plt(v20);
  v12 = *(unsigned int*)(a1 + 48);
  v13 = *(unsigned int*)(a1 + 56);
  v17_.v18 = 1;
  v23 = &v21;
  v14 = (*(__int64 (**)(__int64, __int64**, __int64, _QWORD*, _QWORD,
                        unsigned int*, __int64, __int64, _QWORD))(
      *(_QWORD*)v10 + 120LL))(v10, &v23, a2, v19, v11, &v17_.v17, v12, v13, 0);
  if (v17_.v18 == 1) {
    nn_os_CloseNativeHandle_plt(v17_.v17);
  }
  *(_QWORD*)(a1 + 40) = 0;
  if (v14 != 0) {
    nn_prepo_AsyncContext_AsyncContext_plt_872a20(a3, v14);
    if (LOBYTE(v20[0]) == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v16 = v21;
  v21 = 0;
  nn_prepo_AsyncContext_AsyncContext_plt_872a10(a3, v16);
  if (LOBYTE(v20[0]) != 0) {
  LABEL_8:
    nn_os_DestroyTransferMemory_plt(v20);
  }
LABEL_9:
  result = v21;
  if (v21 != 0) {
    (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
