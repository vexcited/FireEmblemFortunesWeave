#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85fa00(_QWORD, _QWORD);
__int64 nn_account_AsyncContext_AsyncContext_plt_85f9f0(_QWORD);
__int64 nn_account_AsyncContext_Destroy_AsyncContext_plt_85fa10(_QWORD);
__int64 nn_account_detail_OAuthProcedureBase_GetPtr_plt(_QWORD);
__int64 strlen_plt(_QWORD);
__int64
nn_account_NintendoAccountLinkageProcedure_ApplyAsyncWithAuthorizedToken(
    void* this_, void* a2, const char* a3, const char* a4, const char* a5);
__int64

nn_account_NintendoAccountLinkageProcedure_ApplyAsyncWithAuthorizedToken(
    void* this_, void* a2, const char* a3, const char* a4, const char* a5)
{
  __int64 v9;
  unsigned int v10;
  _QWORD v12[4];
  _QWORD v13[2];
  _QWORD v14[2];
  __int64 v15;
  __int64* v16;

  v15 = 0;
  v9 = nn_account_detail_OAuthProcedureBase_GetPtr_plt(this_);
  v12[0] = a3;
  v12[1] = strlen_plt(a3) + 1;
  v14[0] = a4;
  v14[1] = strlen_plt(a4) + 1;
  v13[0] = a5;
  v13[1] = strlen_plt(a5) + 1;
  v16 = &v15;
  v10 = (*(__int64 (**)(__int64, __int64**, _QWORD*, _QWORD*, _QWORD*))(
      *(_QWORD*)v9 + 88LL))(v9, &v16, v12, v14, v13);
  if (v10 == 0) {
    if (v15 == 0) {
      return 154748;
    }
    v15 = 0;
    nn_account_AsyncContext_AsyncContext_plt_85f9f0(v12);
    SdkRoutine_85fa00(a2, v12);
    nn_account_AsyncContext_Destroy_AsyncContext_plt_85fa10(v12);
  }
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v10;
}

#pragma GCC visibility pop
