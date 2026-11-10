#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_friends_AsyncContext_SetInternal_plt(_QWORD, _QWORD);
__int64 nn_friends_detail_AsyncContextInternal_AsyncContextInternal_plt(void);
__int64 nn_friends_detail_AsyncContextInternal_AttachAllocator_plt(_QWORD,
                                                                   _QWORD);
__int64 nn_friends_detail_AsyncContextInternal_Execute_plt(_QWORD, _QWORD,
                                                           _QWORD, _QWORD,
                                                           _QWORD);
__int64 nn_friends_detail_AsyncContextInternal_GetSession_plt(_QWORD);
__int64 nn_friends_detail_AsyncContextInternal_Initialize_plt(_QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_Allocate_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_AsyncMemoryAllocator_plt_869f60(
    _QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_Destroy_AsyncMemoryAllocator_plt(
    _QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_GetContextBuffer_plt(_QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_GetFunctionBuffer_plt(_QWORD);
__int64 nn_friends_detail_AsyncMemoryAllocator_GetThreadStackBuffer_plt(_QWORD);
__int64 nn_friends_detail_CheckInternetRequestAccepted_plt(void);
__int64 nn_friends_detail_GetGlobalAllocator_plt(_QWORD, _QWORD);
extern __int64 SdkData_e880f8;
__int64 nn_friends_4567d0(_QWORD* a1, __int64 a2);
__int64 nn_friends_456880(__int64 a1);
__int64 nn_friends_457210(_QWORD* a1, __int64 a2);
__int64 nn_friends_457620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64* a7, __int64* a8);
__int64 nn_friends_458150(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4);
__int64 nn_friends_4581e0(__int64 a1);

__int64 nn_friends_4567d0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  _BYTE v6[4];

  v3 = *a1;
  v6[0] = 0;
  result = (*(__int64 (**)(__int64, _BYTE*, __int64))(*(_QWORD*)v3 + 128LL))(
      v3, v6, a2);
  if ((_DWORD)result == 0) {
    if ((v6[0] & 1) != 0) {
      return 0;
    }
    else {
      result = nn_friends_detail_CheckInternetRequestAccepted_plt();
      if ((_DWORD)result == 0) {
        return (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)*a1 + 136LL))(*a1,
                                                                         a2);
      }
    }
  }
  return result;
}

__int64 nn_friends_456880(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(a1 + 8))(a1 + 16, a1 + 24);
}

__int64 nn_friends_457210(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  _BYTE v6[4];

  v3 = *a1;
  v6[0] = 0;
  result = (*(__int64 (**)(__int64, _BYTE*, __int64))(*(_QWORD*)v3 + 88LL))(
      v3, v6, a2);
  if ((_DWORD)result == 0) {
    if ((v6[0] & 1) != 0) {
      return 0;
    }
    else {
      result = nn_friends_detail_CheckInternetRequestAccepted_plt();
      if ((_DWORD)result == 0) {
        return (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)*a1 + 96LL))(*a1,
                                                                        a2);
      }
    }
  }
  return result;
}

__int64 nn_friends_457620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64* a7, __int64* a8)
{
  __int64 v16;
  unsigned int v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[8];
  __int64 v42;
  __int64 v43;

  v42 = 0;
  v43 = 0;
  nn_friends_detail_GetGlobalAllocator_plt(&v43, &v42);
  memset(v41, 0, sizeof(v41));
  nn_friends_detail_AsyncMemoryAllocator_AsyncMemoryAllocator_plt_869f60(v41);
  if ((nn_friends_detail_AsyncMemoryAllocator_Allocate_plt(v41, 608, 192, 12288,
                                                           v43, v42) &
       1) != 0) {
    v16 = nn_friends_detail_AsyncMemoryAllocator_GetContextBuffer_plt(v41);
    nn_friends_detail_AsyncContextInternal_AsyncContextInternal_plt();
    v17 = nn_friends_detail_AsyncContextInternal_Initialize_plt(v16);
    if (v17 == 0) {
      v18 =
          (_QWORD*)nn_friends_detail_AsyncMemoryAllocator_GetFunctionBuffer_plt(
              v41);
      v19 = nn_friends_detail_AsyncContextInternal_GetSession_plt(v16);
      v38 = a7[6];
      v39 = a7[7];
      v40 = a7[8];
      v34 = a7[2];
      v35 = a7[3];
      v36 = a7[4];
      v37 = a7[5];
      v32 = *a7;
      v33 = a7[1];
      v29 = a8[6];
      v30 = a8[7];
      v31 = a8[8];
      v27 = a8[2];
      v28 = a8[3];
      v25 = *a8;
      v26 = a8[1];
      v20 = SdkData_e880f8;
      v22 = a8[4];
      v21 = a8[5];
      v18[2] = v19;
      v18[3] = a4;
      v18[4] = a5;
      v18[5] = a6;
      *v18 = v20 + 16;
      v18[1] = a3;
      v18[8] = v34;
      v18[9] = v35;
      v18[6] = v32;
      v18[7] = v33;
      v18[12] = v38;
      v18[13] = v39;
      v18[10] = v36;
      v18[11] = v37;
      v18[20] = v21;
      v18[21] = v29;
      v18[22] = v30;
      v18[23] = v31;
      v18[16] = v26;
      v18[17] = v27;
      v18[18] = v28;
      v18[19] = v22;
      v18[14] = v40;
      v18[15] = v25;
      v23 =
          nn_friends_detail_AsyncMemoryAllocator_GetThreadStackBuffer_plt(v41);
      nn_friends_detail_AsyncContextInternal_Execute_plt(v16, v18, a2, v23,
                                                         12288);
      nn_friends_detail_AsyncContextInternal_AttachAllocator_plt(v16, v41);
      nn_friends_AsyncContext_SetInternal_plt(a1, v16);
      v17 = 0;
    }
  }
  else {
    v17 = 5753;
  }
  nn_friends_detail_AsyncMemoryAllocator_Destroy_AsyncMemoryAllocator_plt(v41);
  return v17;
}

__int64 nn_friends_458150(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  _QWORD v12[2];

  result = nn_friends_detail_CheckInternetRequestAccepted_plt();
  if ((_DWORD)result == 0) {
    v9 = a2[1];
    v10 = *a1;
    v12[0] = *a2;
    v12[1] = v9;
    v11[0] = a4;
    v11[1] = v9;
    return (*(__int64 (**)(__int64, _QWORD*, __int64, _QWORD*))(
        *(_QWORD*)v10 + 152LL))(v10, v12, a3, v11);
  }
  return result;
}

__int64 nn_friends_4581e0(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64, __int64, __int64))(a1 + 8))(
      a1 + 16, a1 + 24, a1 + 40, a1 + 56);
}

#pragma GCC visibility pop
