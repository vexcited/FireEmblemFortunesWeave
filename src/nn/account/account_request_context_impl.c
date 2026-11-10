#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_account_AsyncContext_GetResult_plt(_QWORD);
__int64 nn_account_detail_StartPselApplet_plt(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strnlen_plt(_QWORD, _QWORD);
__int64
nn_account_NintendoAccountAuthorizationRequestContext_GetResultWithInteractionIfRequired(
    void* this_);
__int64 nn_account_NintendoAccountAuthorizationRequestContext_GetState(
    void* this_, unsigned __int64* a2, char* a3, unsigned __int64 a4);
__int64 nn_account_NintendoAccountAuthorizationRequestContext_DebugGetInfo(
    void* this_, unsigned __int64* a2);
__int64

nn_account_NintendoAccountAuthorizationRequestContext_GetResultWithInteractionIfRequired(
    void* this_)
{
  __int64 v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v8_;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;

  v2 = *((_QWORD*)this_ + 2);
  LOBYTE(v8_.v8) = 0;
  LODWORD(result) =
      (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v8_.v8);
  if ((_DWORD)result != 0) {
    goto LABEL_2;
  }
  if ((unsigned __int8)v8_.v8 == 1) {
    return 0;
  }
  result = nn_account_AsyncContext_GetResult_plt((char*)this_ + 24);
  if ((_DWORD)result != 0) {
  LABEL_2:
    if ((((unsigned int)result >> 9) & 0x1FFE) - 200 < 0x46 &&
            (result & 0x1FF) == 124 ||
        (result & 0x3FFFFF) == 143484) {
      result = 143484;
    }
    else {
      result = (unsigned int)result;
    }
    if ((result & 0x3FFFFF) == 0x2307C) {
      v6 = *((_QWORD*)this_ + 2);
      v28_.v28 = 0;
      v28_.v29 = 0;
      result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 32LL))(
          v6, &v28_.v28);
      if ((_DWORD)result == 0) {
        v8_.v9 = 0;
        v8_.v26 = 0;
        v8_.v27 = 0;
        v8_.v24 = 0;
        v8_.v25 = 0;
        v8_.v22 = 0;
        v8_.v23 = 0;
        v8_.v20 = 0;
        v8_.v21 = 0;
        v8_.v18 = 0;
        v8_.v19 = 0;
        v8_.v16 = 0;
        v8_.v17 = 0;
        v8_.v14 = 0;
        v8_.v15 = 0;
        v8_.v8 = 6;
        v7 = *((_QWORD*)this_ + 1);
        v8_.v9 = *(_QWORD*)this_;
        v8_.v10 = v7;
        v8_.v11 = v28_.v28;
        v8_.v12 = v28_.v29;
        v8_.v13 = 0;
        return nn_account_detail_StartPselApplet_plt(&v8_.v8, 0);
      }
    }
  }
  return result;
}

__int64 nn_account_NintendoAccountAuthorizationRequestContext_GetState(
    void* this_, unsigned __int64* a2, char* a3, unsigned __int64 a4)
{
  __int64 v4;
  __int64 result;
  __int64 v9;
  __int64 v10;
  _QWORD v11[16];

  v4 = *((_QWORD*)this_ + 2);
  memset(v11, 0, sizeof(v11));
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 72LL))(v4, v11);
  if ((_DWORD)result == 0) {
    if (a4 >= 0x80) {
      v9 = 128;
    }
    else {
      v9 = a4;
    }
    v10 = strncpy_plt(a3, v11, v9);
    *a2 = strnlen_plt(v10, a4);
    return 0;
  }
  return result;
}

__int64 nn_account_NintendoAccountAuthorizationRequestContext_DebugGetInfo(
    void* this_, unsigned __int64* a2)
{
  __int64 v2;
  __int64 result;
  unsigned __int64 v5;
  struct {
    unsigned __int64 v6;
    unsigned __int64 v7;
  } v6_;
  int v8;

  v2 = *((_QWORD*)this_ + 2);
  v6_.v6 = 0;
  v6_.v7 = 0;
  result = (*(__int64 (**)(__int64, unsigned __int64*))(*(_QWORD*)v2 + 32LL))(
      v2, &v6_.v6);
  v8 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8);
  }
  v5 = v6_.v7;
  *a2 = v6_.v6;
  a2[1] = v5;
  return result;
}

#pragma GCC visibility pop
