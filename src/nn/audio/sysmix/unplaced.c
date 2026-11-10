#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _QWORD SdkData_c15aa0[5];
extern __int64 SdkData_e86d80;
__int64 nn_audio_sysmix_2b06f0(__int64 a1);
__int64 nn_audio_sysmix_2b0720(__int64 a1);

__int64 nn_audio_sysmix_2b06f0(__int64 a1)
{
  if ((unsigned int)(a1 - 1) >= 5) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    __udf(0);
  }
  return SdkData_c15aa0[(unsigned int)(a1 - 1)];
}

__int64 nn_audio_sysmix_2b0720(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  *(_QWORD*)(a1 + 32) = SdkData_e86d80 + 16;
  v3 = a1 + 32;
  nn_os_SdkMutexType_Lock_plt(v3 + 64);
  nn_sf_hipc_client_ResizeSessions(v3, 0);
  nn_os_SdkMutexType_Unlock_plt(v3 + 64);
  result = *(_QWORD*)(v3 - 16);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
