#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_868c50(_QWORD);
__int64 SdkRoutine_868f30(_QWORD, _QWORD);
__int64 nn_err_ContextReader_SetSerializedContextSeries_plt(_QWORD, _QWORD);
__int64 nn_err_ContextReader_SetTotalCount_plt(_QWORD, _QWORD);
__int64 nn_err_detail_SerializedContextSeries_Initialize_plt_868e40(_QWORD,
                                                                    _QWORD);
__int64
nn_err_detail_ContextReaderClientImpl_PullContext_nn_err_context_IReaderForSystem_40bb20(
    __int64 a1, __int64* a2, unsigned int a3, unsigned int a4, __int64 a5);
__int64
nn_err_detail_ContextReaderClientImpl_PullContext_nn_err_context_IReaderForSystem_40bdc0(
    _QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4, __int64* a5,
    unsigned int a6, unsigned int a7);
__int64
nn_err_detail_ContextReaderClientImpl_ListContextDescriptorWithResultForDebug_nn_err_context_IReaderForSystem(
    _DWORD* a1, _DWORD* a2, __int64 a3, __int64 a4, __int64* a5);
__int64

nn_err_detail_ContextReaderClientImpl_PullContext_nn_err_context_IReaderForSystem_40bb20(
    __int64 a1, __int64* a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 result;
  unsigned __int64 i;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  _QWORD v30[2];
  __int64 v31;
  __int64 v32;
  _QWORD v33[4];
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD v37[4];
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD v43[3];
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;

  v5 = *a2;
  v7 = a3;
  v8 = a4;
  v49 = 0;
  v50 = 0;
  result =
      (*(__int64 (**)(__int64*, char*, __int64*, __int64*, _QWORD, _QWORD))(
          v5 + 32))(a2, (char*)&v50 + 4, &v50, &v49, a3, a4);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (SHIDWORD(v50) < 1) {
    return 26862;
  }
  for (i = (unsigned int)v50;; i >>= 1) {
    v13 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
        *(_QWORD*)a5 + 16LL))(a5, i, 16);
    if (v13 != 0) {
      break;
    }
    if (i <= 0x81) {
      return 6894;
    }
  }
  v15 = *a2;
  v47 = a5;
  v48 = i;
  v45 = 0;
  v44 = 0;
  v16 = v13;
  v34 = v13;
  v35 = i;
  LODWORD(result) = (*(__int64 (**)(__int64*, char*, __int64*, int*, __int64*,
                                    __int64, __int64))(v15 + 40))(
      a2, (char*)&v45 + 4, &v45, &v44, &v34, v7, v8);
  if ((_DWORD)result != 0) {
    v46 = 0;
  LABEL_22:
    v26 = result;
    SdkRoutine_868c50(&v47);
    return v26;
  }
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  memset(v37, 0, sizeof(v37));
  v35 = 0;
  v36 = 0;
  v34 = 0;
  nn_err_ContextReader_SetTotalCount_plt(&v34, HIDWORD(v45));
  if (v44 == 0) {
  LABEL_15:
    SdkRoutine_868f30(a1, &v34);
    result = 0;
    v21 = v16;
    if ((unsigned __int8)v38 != 1) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  memset(v33, 0, sizeof(v33));
  v31 = 0;
  v32 = 0;
  v46 = 0;
  v29 = v16;
  v30[0] = v47;
  v30[1] = v48;
  v17 = nn_err_detail_SerializedContextSeries_Initialize_plt_868e40(&v31, &v29);
  v18 = v29;
  v29 = 0;
  if (v18 != 0) {
    v19 = v17;
    SdkRoutine_868c50(v30);
    v17 = v19;
  }
  if (v17 == 0) {
    nn_err_ContextReader_SetSerializedContextSeries_plt(&v34, &v31);
    v20 = v32;
    v32 = 0;
    if (v20 != 0) {
      SdkRoutine_868c50(v33);
    }
    v16 = 0;
    goto LABEL_15;
  }
  v27 = v32;
  v28 = v17;
  v32 = 0;
  if (v27 != 0) {
    SdkRoutine_868c50(v33);
  }
  v16 = 0;
  result = v28;
  v21 = 0;
  if ((unsigned __int8)v38 == 1) {
  LABEL_16:
    v22 = v42;
    v42 = 0;
    if (v22 != 0) {
      v23 = result;
      SdkRoutine_868c50(v43);
      result = v23;
      v21 = v16;
    }
  }
LABEL_18:
  if ((unsigned __int8)v34 == 1) {
    v24 = v36;
    v36 = 0;
    if (v24 != 0) {
      v25 = result;
      SdkRoutine_868c50(v37);
      result = v25;
      v21 = v16;
    }
  }
  v46 = 0;
  if (v21 != 0) {
    goto LABEL_22;
  }
  return result;
}

__int64

nn_err_detail_ContextReaderClientImpl_PullContext_nn_err_context_IReaderForSystem_40bdc0(
    _QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4, __int64* a5,
    unsigned int a6, unsigned int a7)
{
  __int64 v7;
  __int64 result;
  _QWORD v11[2];
  unsigned int v12;
  __int64 v13;

  v7 = *a5;
  v11[0] = a3;
  v11[1] = a4;
  v13 = 0;
  v12 = 0;
  result = (*(__int64 (**)(__int64*, char*, __int64*, unsigned int*, _QWORD*,
                           _QWORD, _QWORD))(v7 + 40))(a5, (char*)&v13 + 4, &v13,
                                                      &v12, v11, a6, a7);
  if ((_DWORD)result == 0) {
    *a1 = (unsigned int)v13;
    *a2 = v12;
  }
  return result;
}

__int64

nn_err_detail_ContextReaderClientImpl_ListContextDescriptorWithResultForDebug_nn_err_context_IReaderForSystem(
    _DWORD* a1, _DWORD* a2, __int64 a3, __int64 a4, __int64* a5)
{
  __int64 v5;
  __int64 result;
  int v9;
  _QWORD v10[2];
  __int64 v11;

  v5 = *a5;
  v10[0] = a3;
  v10[1] = a4;
  v11 = 0;
  result = (*(__int64 (**)(__int64*, char*, __int64*, _QWORD*))(v5 + 48))(
      a5, (char*)&v11 + 4, &v11, v10);
  if ((_DWORD)result == 0) {
    v9 = v11;
    *a1 = HIDWORD(v11);
    *a2 = v9;
  }
  return result;
}

#pragma GCC visibility pop
