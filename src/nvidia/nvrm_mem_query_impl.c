#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gpu_sdk_CreateGpuAccessibleMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, _QWORD);
__int64 nn_gpu_sdk_DestroyGpuAccessibleMemory_plt(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 nn_gpu_sdk_DestroyNativeMemoryForDebug_plt(_QWORD);
__int64 nn_gs_sdk_CreateVprMemory_plt(_QWORD);
__int64 nn_gs_sdk_DestroyVprMemory_plt(_QWORD);
extern __int64 SdkData_103f220;
__int64 nvrm_mem_query_6009f0(__int64 result);
__int64 nvrm_mem_query_600da0(__int64 a1, __int64 a2, unsigned int a3, int a4);
__int64 nvrm_mem_query_600ea0(__int64 a1, __int64 a2);

__int64 nvrm_mem_query_6009f0(__int64 result)
{
  int v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;

  v2 = result + 116;
  v1 = *(_DWORD*)(result + 116);
  if (v1 <= 2) {
    switch (v1) {
    case 0:
      return result;
    case 1:
      v7 = *(_QWORD*)(result + 80);
      v9 = *(_DWORD*)(result + 124);
      v8 = *(_DWORD*)(result + 128);
      v10 = *(_DWORD*)(result + 112);
      if (v8 != 0) {
        v11 = result;
        nn_gpu_sdk_DestroyNativeMemoryForDebug_plt(v8);
        result = v11;
      }
      v12 = v10 & 0xFFFFFFFD;
      v13 = result;
      nn_gpu_sdk_DestroyGpuAccessibleMemory_plt(
          SdkData_103f220, v9, *(_QWORD*)(result + 96),
          *(_QWORD*)(result + 104), v12 != 1);
      result =
          (*(__int64 (**)(__int64, _QWORD))(v7 + 24))(v7, *(_QWORD*)(v13 + 96));
      goto LABEL_14;
    case 2:
      v4 = *(_DWORD*)(result + 124);
      v3 = *(_DWORD*)(result + 128);
      v5 = *(_DWORD*)(result + 112);
      if (v3 != 0) {
        v6 = result;
        nn_gpu_sdk_DestroyNativeMemoryForDebug_plt(v3);
        result = v6;
      }
      result = nn_gpu_sdk_DestroyGpuAccessibleMemory_plt(
          SdkData_103f220, v4, *(_QWORD*)(result + 96),
          *(_QWORD*)(result + 104), (v5 & 0xFFFFFFFD) != 1);
      goto LABEL_14;
    default:
      break;
    }
  LABEL_16:
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  if ((unsigned int)(v1 - 3) >= 2) {
    if (v1 != 5) {
      goto LABEL_16;
    }
    result = nn_gs_sdk_DestroyVprMemory_plt(*(unsigned int*)(result + 120));
  }
LABEL_14:
  *(_DWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)v2 = 0;
  return result;
}

__int64 nvrm_mem_query_600da0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4;
  _BOOL4 v9;
  void* v10;
  void* v12;
  __int64 result;
  unsigned int v14;
  unsigned int v15;

  v4 = *(_QWORD*)(a1 + 80);
  v15 = 0;
  v9 = (a4 & 0xFFFFFFFD) != 1;
  v10 = (void*)(*(__int64 (**)(__int64, _QWORD, __int64))(v4 + 8))(v4, a3, a2);
  if (v10 == nullptr) {
    return 6;
  }
  v12 = v10;
  memset_plt(v10, nullptr, a2);
  result = nn_gpu_sdk_CreateGpuAccessibleMemory_plt(&v15, SdkData_103f220, v12,
                                                    a2, 0, v9);
  v14 = v15;
  if ((_DWORD)result != 0) {
    if (v15 != 0) {
      nn_gpu_sdk_DestroyGpuAccessibleMemory_plt(SdkData_103f220, v15, v12, a2,
                                                v9);
    }
    (*(void (**)(__int64, void*))(v4 + 24))(v4, v12);
    return 4;
  }
  else {
    *(_QWORD*)(a1 + 96) = v12;
    *(_QWORD*)(a1 + 104) = a2;
    *(_DWORD*)(a1 + 120) = a3;
    *(_DWORD*)(a1 + 124) = v14;
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    *(_DWORD*)(a1 + 112) = a4;
    *(_DWORD*)(a1 + 116) = 1;
  }
  return result;
}

__int64 nvrm_mem_query_600ea0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  int v6;

  v6 = 0;
  result = nn_gs_sdk_CreateVprMemory_plt(&v6);
  if ((_DWORD)result != 0) {
    return 6;
  }
  v5 = v6;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = a2;
  *(_QWORD*)(a1 + 112) = 0x500000000LL;
  *(_DWORD*)(a1 + 120) = v5;
  return result;
}

#pragma GCC visibility pop
