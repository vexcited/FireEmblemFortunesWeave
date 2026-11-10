#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_devmgr_Finalize_plt(void);
__int64 nn_audio_devmgr_Initialize_plt(void);
__int64 nn_audio_devmgr_IsVirtualDeviceAvailable_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_23b2b0(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystemManager_GetInstance_plt(void);
__int64 nn_audio_server_AudioRenderSystemManager_Remove_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_AudioRenderSystem_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_Initialize_plt(_QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD, _QWORD,
                                                         _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_plt_8631d0(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_plt_8631e0(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_MapTransferMemory_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnmapTransferMemory_plt(_QWORD);
__int64
nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_23aa00(
    __int64 a1, __int64 a2, unsigned int* a3, unsigned int* a4, unsigned int a5,
    __int64 a6, unsigned int a7);
__int64
nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_23ab90(
    __int64 a1, __int64 a2, __int64 a3, unsigned int* a4, unsigned int a5,
    __int64 a6, unsigned int a7);
__int64 nn_audio_server_AudioRendererManagerImpl_OpenAudioRenderer(
    __int64 a1, __int64** a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7);
__int64
nn_audio_server_AudioRendererManagerImpl_OpenAudioRendererForManualExecution(
    __int64 a1, __int64** a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7);
__int64

nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_23aa00(
    __int64 a1, __int64 a2, unsigned int* a3, unsigned int* a4, unsigned int a5,
    __int64 a6, unsigned int a7)
{
  __int64 v7;
  __int64 v15;
  __int64 result;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;

  v7 = *(_QWORD*)(a1 + 80);
  if (*(_BYTE*)(a1 + 1632) == 1) {
    if (*(_BYTE*)(a1 + 1020) == 1) {
      *(_BYTE*)(a1 + 1020) = 0;
    }
    if (*(_BYTE*)(a1 + 1032) == 1) {
      *(_BYTE*)(a1 + 1032) = 0;
    }
    nn_os_FinalizeEvent_plt(a1 + 784);
    *(_BYTE*)(a1 + 1632) = 0;
  }
  v15 =
      nn_audio_server_AudioRenderSystem_AudioRenderSystem_plt(a1 + 96, v7 + 16);
  v20 = 0;
  *(_BYTE*)(a1 + 1632) = 1;
  if (*(_BYTE*)(a1 + 8) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v15);
    __udf(0);
  }
  nn_os_AttachTransferMemory_plt(a1 + 8, a5, *a3, *((unsigned __int8*)a3 + 4));
  *((_BYTE*)a3 + 4) = 0;
  *a3 = 0;
  result = nn_os_MapTransferMemory_plt(&v20, a1 + 8, 0);
  if ((_DWORD)result != 0) {
    if (*(_BYTE*)(a1 + 1632) != 1) {
      return result;
    }
  LABEL_10:
    if (*(_BYTE*)(a1 + 1020) == 1) {
      *(_BYTE*)(a1 + 1020) = 0;
    }
    v17 = result;
    if (*(_BYTE*)(a1 + 1032) == 1) {
      *(_BYTE*)(a1 + 1032) = 0;
    }
    nn_os_FinalizeEvent_plt(a1 + 784);
    *(_BYTE*)(a1 + 1632) = 0;
    return v17;
  }
  v18 = v20;
  *(_BYTE*)(a1 + 72) = 1;
  result = nn_audio_server_AudioRenderSystem_Initialize_plt(a1 + 96, a2, *a4,
                                                            v18, a5, a6, a7);
  if ((_DWORD)result == 0) {
    *((_BYTE*)a4 + 4) = 0;
    *a4 = 0;
    return result;
  }
  v19 = result;
  nn_os_UnmapTransferMemory_plt(a1 + 8);
  result = v19;
  *(_BYTE*)(a1 + 72) = 0;
  if (*(_BYTE*)(a1 + 1632) == 1) {
    goto LABEL_10;
  }
  return result;
}

__int64

nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_23ab90(
    __int64 a1, __int64 a2, __int64 a3, unsigned int* a4, unsigned int a5,
    __int64 a6, unsigned int a7)
{
  __int64 v7;
  __int64 result;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;

  v7 = *(_QWORD*)(a1 + 80);
  if (*(_BYTE*)(a1 + 1632) == 1) {
    if (*(_BYTE*)(a1 + 1020) == 1) {
      *(_BYTE*)(a1 + 1020) = 0;
    }
    if (*(_BYTE*)(a1 + 1032) == 1) {
      *(_BYTE*)(a1 + 1032) = 0;
    }
    nn_os_FinalizeEvent_plt(a1 + 784);
    *(_BYTE*)(a1 + 1632) = 0;
  }
  nn_audio_server_AudioRenderSystem_AudioRenderSystem_plt(a1 + 96, v7 + 16);
  *(_BYTE*)(a1 + 1632) = 1;
  result = nn_audio_server_AudioRenderSystem_Initialize_plt(a1 + 96, a2, *a4,
                                                            a3, a5, a6, a7);
  if ((_DWORD)result != 0) {
    if (*(_BYTE*)(a1 + 73) == 1) {
      v16 = result;
      v17 = nn_audio_server_AudioRenderSystemManager_GetInstance_plt();
      nn_audio_server_AudioRenderSystemManager_Remove_plt(v17, a1 + 96);
      result = v16;
      *(_BYTE*)(a1 + 73) = 0;
    }
    if (*(_BYTE*)(a1 + 1632) == 1) {
      if (*(_BYTE*)(a1 + 1020) == 1) {
        *(_BYTE*)(a1 + 1020) = 0;
      }
      v18 = result;
      if (*(_BYTE*)(a1 + 1032) == 1) {
        *(_BYTE*)(a1 + 1032) = 0;
      }
      nn_os_FinalizeEvent_plt(a1 + 784);
      *(_BYTE*)(a1 + 1632) = 0;
      return v18;
    }
  }
  else {
    *((_BYTE*)a4 + 4) = 0;
    *a4 = 0;
  }
  return result;
}

__int64 nn_audio_server_AudioRendererManagerImpl_OpenAudioRenderer(
    __int64 a1, __int64** a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7)
{
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  _QWORD v20[34];
  __int64 v21;

  v21 = a7;
  LODWORD(v20[0]) = nn_audio_devmgr_Initialize_plt();
  if (LODWORD(v20[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v20);
    __udf(0);
  }
  strcpy((char*)v20, "MainAudioOut");
  v20[32] = v20;
  v20[33] = 12;
  v13 = nn_audio_devmgr_IsVirtualDeviceAvailable_plt(v20, 1, 0);
  if (v13 == 0) {
    nn_os_SdkMutexType_Lock_plt(a1 + 6212);
    v14 = a1 + 4LL * *(int*)(a1 + 6208);
    v15 = *(_DWORD*)(v14 + 6200);
    *(_DWORD*)(v14 + 6200) = -1;
    ++*(_DWORD*)(a1 + 6208);
    nn_os_SdkMutexType_Unlock_plt(a1 + 6212);
    v20[0] = a1;
    v16 = nn_audio_server_23b2b0(a1 + 8, v20);
    v17 =
        nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_plt_8631d0(
            v16 + 16, a3, a4, a5, a6, &v21, v15);
    if (v17 != 0 || (v13 = 0, v18 = **a2, ** a2 = v16, v16 = v18, v18 != 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
      v13 = v17;
    }
  }
  nn_audio_devmgr_Finalize_plt();
  return v13;
}

__int64

nn_audio_server_AudioRendererManagerImpl_OpenAudioRendererForManualExecution(
    __int64 a1, __int64** a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7)
{
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v20 = a7;
  nn_os_SdkMutexType_Lock_plt(a1 + 6212);
  v13 = a1 + 4LL * *(int*)(a1 + 6208);
  v14 = *(_DWORD*)(v13 + 6200);
  *(_DWORD*)(v13 + 6200) = -1;
  ++*(_DWORD*)(a1 + 6208);
  nn_os_SdkMutexType_Unlock_plt(a1 + 6212);
  v19 = a1;
  v15 = nn_audio_server_23b2b0(a1 + 8, &v19);
  v16 =
      nn_audio_server_AudioRendererManagerImpl_AudioRendererImpl_Initialize_plt_8631e0(
          v15 + 16, a3, a4, a5, a6, &v20, v14);
  if (v16 != 0 || (v17 = **a2, ** a2 = v15, v15 = v17, v17 != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v16;
}

#pragma GCC visibility pop
