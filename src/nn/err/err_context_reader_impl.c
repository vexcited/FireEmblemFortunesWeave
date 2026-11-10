#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_err_detail_SerializedContextSeries_CBegin_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    nn_err_detail_SerializedContextSeries_CEnd_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_868c50(_QWORD);
__int64 SdkRoutine_868e90(_QWORD);
__int64 SdkRoutine_868ea0(_QWORD, _QWORD);
__int64 nn_err_408050(_QWORD, _QWORD);
__int64 nn_err_ContextReader_ContextReader_plt(_QWORD);
__int64 nn_err_detail_RawContext_RawContext_plt_868cd0(_QWORD);
__int64 nn_err_detail_SerializedContextSeries_ConstIterator_ConstIterator_plt(
    _QWORD, _QWORD, _QWORD);
__int64
    nn_err_detail_SerializedContextSeries_ConstIterator_GetPosition_plt(_QWORD);
__int64
    nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(_QWORD,
                                                                      _QWORD);
_QWORD* nn_err_ContextReader_ContextReader(_QWORD* result, unsigned __int8* a2);
__int64 ContextReader_407d50(__int64 a1);
__int64 nn_err_ContextReader_Next(void* this_);

_QWORD* nn_err_ContextReader_ContextReader(_QWORD* result, unsigned __int8* a2)
{
  int v2;
  _QWORD* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v4 = result;
  result[5] = 0;
  result[6] = 0;
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = 0;
  if (v2 == 1) {
    result = (_QWORD*)
        nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(
            result + 1, a2 + 8);
    *(_BYTE*)v4 = 1;
    if (*a2 == 1) {
      v5 = *((_QWORD*)a2 + 2);
      *((_QWORD*)a2 + 2) = 0;
      if (v5 != 0) {
        result = (_QWORD*)SdkRoutine_868c50(a2 + 24);
      }
    }
  }
  *a2 = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[7] = 0;
  v6 = *((_DWORD*)a2 + 28);
  *((_DWORD*)a2 + 28) = 0;
  *((_DWORD*)v4 + 28) = v6;
  if (a2[56] == 1) {
    v7 = nn_err_detail_SerializedContextSeries_ConstIterator_GetPosition_plt(
        a2 + 64);
    if (*((_BYTE*)v4 + 56) == 1) {
      v8 = v4[11];
      v4[11] = 0;
      if (v8 != 0) {
        SdkRoutine_868c50(v4 + 12);
      }
    }
    *((_BYTE*)v4 + 56) = 0;
    result = (_QWORD*)
        nn_err_detail_SerializedContextSeries_ConstIterator_ConstIterator_plt(
            v4 + 8, v4 + 1, v7);
    *((_BYTE*)v4 + 56) = 1;
    if (a2[56] == 1) {
      v9 = *((_QWORD*)a2 + 11);
      *((_QWORD*)a2 + 11) = 0;
      if (v9 != 0) {
        result = (_QWORD*)SdkRoutine_868c50(a2 + 96);
      }
    }
    a2[56] = 0;
  }
  return result;
}

__int64 ContextReader_407d50(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  _QWORD v9[2];
  __int64 v10;
  _QWORD v11[4];
  __int64 v12;
  _QWORD v13[3];
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;

  v15[1] = 0;
  v16 = 0;
  v14 = 0;
  v15[0] = 0;
  v12 = 0;
  memset(v13, 0, sizeof(v13));
  memset(v11, 0, sizeof(v11));
  v9[1] = 0;
  v10 = 0;
  v9[0] = 0;
  nn_err_ContextReader_ContextReader_plt(v9);
  nn_err_408050(a1, v9);
  if ((unsigned __int8)v12 == 1) {
    v2 = nn_err_detail_SerializedContextSeries_ConstIterator_GetPosition_plt(
        v13);
    if (*(_BYTE*)(a1 + 56) == 1) {
      v3 = *(_QWORD*)(a1 + 88);
      *(_QWORD*)(a1 + 88) = 0;
      if (v3 != 0) {
        SdkRoutine_868c50(a1 + 96);
      }
    }
    *(_BYTE*)(a1 + 56) = 0;
    nn_err_detail_SerializedContextSeries_ConstIterator_ConstIterator_plt(
        a1 + 64, a1 + 8, v2);
    *(_BYTE*)(a1 + 56) = 1;
    if ((unsigned __int8)v12 == 1) {
      v4 = v14;
      v14 = 0;
      if (v4 != 0) {
        SdkRoutine_868c50(v15);
      }
    }
    LOBYTE(v12) = 0;
  }
  v5 = v16;
  LODWORD(v16) = *(_DWORD*)(a1 + 112);
  v6 = LOBYTE(v9[0]);
  *(_DWORD*)(a1 + 112) = v5;
  if (v6 == 1) {
    v7 = v10;
    v10 = 0;
    if (v7 != 0) {
      SdkRoutine_868c50(v11);
    }
  }
  return a1;
}

__int64 nn_err_ContextReader_Next(void* this_)
{
  __int64 v2;
  char v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[3];
    __int64 v13;
  } v12_;
  __int64 v14;
  struct {
    _QWORD v15[3];
    __int64 v16;
  } v15_;
  _BYTE v17[16];

  if ((*((_BYTE*)this_ + 56) & 1) != 0) {
    nn_err_detail_SerializedContextSeries_CEnd_plt((void*)(v15_.v15),
                                                   (char*)this_ + 8);
    if ((SdkRoutine_868ea0((char*)this_ + 64, v15_.v15) & 1) != 0) {
      v2 = SdkRoutine_868e90((char*)this_ + 64);
      nn_err_detail_SerializedContextSeries_CEnd_plt((void*)(v12_.v12),
                                                     (char*)this_ + 8);
      v3 = SdkRoutine_868ea0(v2, v12_.v12);
      v4 = v12_.v13;
      v5 = v3;
      v12_.v13 = 0;
      if (v4 != 0) {
        SdkRoutine_868c50(&v14);
      }
    }
    else {
      v5 = 0;
    }
    v10 = v15_.v16;
    v15_.v16 = 0;
    if (v10 != 0) {
      SdkRoutine_868c50(v17);
    }
  }
  else if (*(_BYTE*)this_ == 1) {
    nn_err_detail_SerializedContextSeries_CBegin_plt((void*)(v15_.v15),
                                                     (char*)this_ + 8);
    if (*((_BYTE*)this_ + 56) == 1) {
      v6 = *((_QWORD*)this_ + 11);
      *((_QWORD*)this_ + 11) = 0;
      if (v6 != 0) {
        SdkRoutine_868c50((char*)this_ + 96);
      }
    }
    v7 = v15_.v15[0];
    v8 = v15_.v15[1];
    *((_BYTE*)this_ + 56) = 0;
    *((_QWORD*)this_ + 8) = v7;
    *((_QWORD*)this_ + 9) = v8;
    nn_err_detail_RawContext_RawContext_plt_868cd0((char*)this_ + 80);
    v9 = v15_.v16;
    v15_.v16 = 0;
    *((_BYTE*)this_ + 56) = 1;
    if (v9 != 0) {
      SdkRoutine_868c50(v17);
    }
    v5 = 1;
  }
  else {
    v5 = 0;
  }
  return v5 & 1;
}

#pragma GCC visibility pop
