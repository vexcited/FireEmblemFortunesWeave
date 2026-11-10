#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
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
__int64 nn_friends_detail_GetGlobalAllocator_plt(_QWORD, _QWORD);
extern __int64 SdkData_e880f0;
extern __int64 SdkData_e88100;
__int64 friends_async_api_456650(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5);
__int64 friends_async_api_457f80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7,
                                 __int64 a8);

__int64 friends_async_api_456650(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5)
{
  __int64 v10;
  unsigned int v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[8];
  __int64 v18;
  __int64 v19;

  v19 = 0;
  v18 = 0;
  nn_friends_detail_GetGlobalAllocator_plt(&v19, &v18);
  memset(v17, 0, sizeof(v17));
  nn_friends_detail_AsyncMemoryAllocator_AsyncMemoryAllocator_plt_869f60(v17);
  if ((nn_friends_detail_AsyncMemoryAllocator_Allocate_plt(v17, 608, 40, 12288,
                                                           v19, v18) &
       1) != 0) {
    v10 = nn_friends_detail_AsyncMemoryAllocator_GetContextBuffer_plt(v17);
    nn_friends_detail_AsyncContextInternal_AsyncContextInternal_plt();
    v11 = nn_friends_detail_AsyncContextInternal_Initialize_plt(v10);
    if (v11 == 0) {
      v12 =
          (_QWORD*)nn_friends_detail_AsyncMemoryAllocator_GetFunctionBuffer_plt(
              v17);
      v13 = nn_friends_detail_AsyncContextInternal_GetSession_plt(v10);
      v14 = SdkData_e880f0;
      v12[2] = v13;
      v12[3] = a4;
      v12[4] = a5;
      *v12 = v14 + 16;
      v12[1] = a3;
      v15 =
          nn_friends_detail_AsyncMemoryAllocator_GetThreadStackBuffer_plt(v17);
      nn_friends_detail_AsyncContextInternal_Execute_plt(v10, v12, a2, v15,
                                                         12288);
      nn_friends_detail_AsyncContextInternal_AttachAllocator_plt(v10, v17);
      nn_friends_AsyncContext_SetInternal_plt(a1, v10);
      v11 = 0;
    }
  }
  else {
    v11 = 5753;
  }
  nn_friends_detail_AsyncMemoryAllocator_Destroy_AsyncMemoryAllocator_plt(v17);
  return v11;
}

__int64 friends_async_api_457f80(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v16;
  unsigned int v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  _BYTE v24[800];
  _QWORD v25[8];
  __int64 v26;
  __int64 v27;

  v26 = 0;
  v27 = 0;
  nn_friends_detail_GetGlobalAllocator_plt(&v27, &v26);
  memset(v25, 0, sizeof(v25));
  nn_friends_detail_AsyncMemoryAllocator_AsyncMemoryAllocator_plt_869f60(v25);
  if ((nn_friends_detail_AsyncMemoryAllocator_Allocate_plt(v25, 608, 856, 12288,
                                                           v27, v26) &
       1) != 0) {
    v16 = nn_friends_detail_AsyncMemoryAllocator_GetContextBuffer_plt(v25);
    nn_friends_detail_AsyncContextInternal_AsyncContextInternal_plt();
    v17 = nn_friends_detail_AsyncContextInternal_Initialize_plt(v16);
    if (v17 == 0) {
      v18 =
          (_QWORD*)nn_friends_detail_AsyncMemoryAllocator_GetFunctionBuffer_plt(
              v25);
      v23 = a1;
      v19 = nn_friends_detail_AsyncContextInternal_GetSession_plt(v16);
      memcpy_plt(v24, a8, 800);
      v20 = SdkData_e88100;
      v18[2] = v19;
      v18[3] = a4;
      v18[4] = a5;
      v18[5] = a6;
      v18[6] = a7;
      *v18 = v20 + 16;
      v18[1] = a3;
      memcpy_plt(v18 + 7, v24, 800);
      v21 =
          nn_friends_detail_AsyncMemoryAllocator_GetThreadStackBuffer_plt(v25);
      nn_friends_detail_AsyncContextInternal_Execute_plt(v16, v18, a2, v21,
                                                         12288);
      nn_friends_detail_AsyncContextInternal_AttachAllocator_plt(v16, v25);
      nn_friends_AsyncContext_SetInternal_plt(v23, v16);
      v17 = 0;
    }
  }
  else {
    v17 = 5753;
  }
  nn_friends_detail_AsyncMemoryAllocator_Destroy_AsyncMemoryAllocator_plt(v25);
  return v17;
}

#pragma GCC visibility pop
