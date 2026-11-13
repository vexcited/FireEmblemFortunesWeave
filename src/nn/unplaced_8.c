#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_6af430(_DWORD* result, int, unsigned int, unsigned int, int,
                          unsigned int, unsigned int*, unsigned int*,
                          unsigned int*);
_QWORD* nvidia_64ac60(_QWORD* result, _QWORD*, unsigned int);
__attribute__((swiftcall)) void nn_65f3c0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
    nn_audio_CreateUserClientSessionByHipc_plt(PSEUDO_X8);
__int64 (***audio_out_1e7d70(_QWORD*))(_QWORD);
__int64* SdkRoutine_65e0a0(__int64* result, __int64);
__int64* SdkRoutine_65e300(__int64* result, __int64, __int64);
__int64 NvOsGetCurrentAllocator_plt(_QWORD);
__int64 NvOsSleepMS_plt(unsigned int);
__int64 NvRmGpuChannelEventIdControl_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockCloseAsyncReq_plt(_QWORD);
__int64 NvRmGpuClockGetDomains_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockGetPoints_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockSet_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuClockWaitAsyncReq_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuLibOpen_plt(_QWORD);
__int64 NvRmGpuProfilerV2PmaStreamFree_plt(_QWORD);
__int64 NvRmGpuRegOpsSessionClose_plt(__int64);
__int64 NvRmGpuRegOpsSessionCreateChannelless_plt(__int64, __int64);
__int64 NvRmGpuRegOpsSessionCreateForChannel_plt(void);
__int64 NvRmGpuRegOpsSessionCreateForChannel_plt_alt1(_QWORD, _QWORD) __asm__(
    "NvRmGpuRegOpsSessionCreateForChannel_plt");
__int64 NvRmGpuRegOpsSessionExec_plt(__int64, __int64, __int64);
__int64 NvRmGpuRegOpsSessionPerfbufMap_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionPerfbufUnmap_plt(_QWORD);
__int64 NvRmGpuRegOpsSessionReadFB_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionSetMmuDebugMode_plt(void);
__int64 NvRmGpuRegOpsSessionSetSmExceptionMask_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionSetTimeoutMode_plt(_QWORD, _QWORD);
__int64 NvRmGpuRegOpsSessionWriteFB_plt(_QWORD, _QWORD);
__int64 NvRmGpuTaskSchedulingGroupEventIdControl_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 NvRmMemHandleAllocAttr_plt(__int64, __int64, __int64);
__int64 NvRmMemHandleFree_plt(unsigned int);
__int64 NvRmMemMap_plt(unsigned int, int, int, char, __int64);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_650730(__int64);
__int64 SdkRoutine_653cc0(__int64, __int64);
__int64 SdkRoutine_654d40(__int64);
__int64 SdkRoutine_656170();
__int64 SdkRoutine_6589a0(_QWORD);
__int64 SdkRoutine_65b950();
__int64 SdkRoutine_65c900(__int64, const char*, _OWORD*);
__int64 SdkRoutine_65d380(__int64);
__int64 SdkRoutine_65d550(__int64, __int64);
__int64 SdkRoutine_65d570(__int64, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_65d5c0(__int64, __int64, __int16);
__int64 SdkRoutine_65d7b0(__int64);
__int64 SdkRoutine_65ed60(_QWORD);
__int64 SdkRoutine_66f7e0(__int64);
__int64 SdkRoutine_6700e0(__int64 result);
__int64 SdkRoutine_6a0860();
__int64 SdkRoutine_6a0870(__int64 result);
__int64 SdkRoutine_6a0b80(__int64 result);
__int64 SdkRoutine_6add10(__int64 result, int);
__int64 SdkRoutine_6ade10();
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_65ed70(__int64);
__int64 nn_65f540(__int64, __int64, _DWORD*);
__int64 nn_66a6d0(__int64 result, __int64, __int64*);
__int64 nn_applet_GetAppletResourceUserId_plt(__int64);
__int64 nn_audio_CreateAudioRendererManagerByDfc_plt(void);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_diag_detail_VLogImpl_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_de900(__int64, __int64*);
__int64 nn_fs_detail_Deallocate_plt(__int64, unsigned __int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_GetCurrentProcessHandle_plt(__int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Unlock_plt(void* this_);
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nvidia_64b010(__int64 result);
__int64 vsprintf_plt(_QWORD, _QWORD, _QWORD);
bool SdkRoutine_664670(__int64, int);
bool SdkRoutine_664d80(__int64, int);
bool SdkRoutine_66f960(__int64, __int64);
extern _BYTE SdkData_bb7008[8];
extern _DWORD SdkData_bb0190[8];
extern _DWORD SdkData_c926a8[16];
extern _UNKNOWN* SdkData_1042258;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN* SdkData_e89c70;
extern _UNKNOWN* SdkData_e89ec0;
extern _UNKNOWN SdkData_e4cf18;
extern _UNKNOWN SdkData_f05de8;
extern _UNKNOWN SdkData_f05df0;
extern _UNKNOWN SdkData_f05e1c;
extern _UNKNOWN SdkData_f163e0;
extern __int128 SdkData_bb0f90;
extern __int128 SdkData_bb1230;
extern __int128 SdkData_bb13e0;
extern __int128 SdkData_bb1650;
extern __int128 SdkData_bb1820;
extern __int128 SdkData_bb1cb0;
extern __int128 SdkData_bb1e70;
extern __int128 SdkData_bb2100;
extern __int128 SdkData_bb2ca0;
extern __int128 SdkData_bb2dd0;
extern __int128 SdkData_bb3090;
extern __int128 SdkData_bb3310;
extern __int128 SdkData_bb35f0;
extern __int128 SdkData_bb3aa0;
extern __int128 SdkData_bb42e0;
extern __int128 SdkData_bb44e0;
extern __int128 SdkData_bb47c0;
extern __int128 SdkData_bb47d0;
extern __int128 SdkData_bb4aa0;
extern __int128 SdkData_bb4ab0;
extern __int128 SdkData_bb4ed0;
extern __int64 (*SdkData_e795c8[])();
extern __int64* SdkData_e89c18;
extern __int64* SdkData_e89c40;
extern __int64 SdkData_10450c8;
extern __int64 SdkData_f163d8;
extern char SdkData_10420b0;
extern char SdkData_10450c4;
extern float SdkData_c92628[32];
extern int SdkData_10420ac;
extern int SdkData_10450c0;
extern int SdkData_f05e18;
extern void (*SdkData_e87348[142])();
float nn_65ce90(float result);
int* SdkRoutine_6a0b30(int* result);
int __cxa_guard_acquire_plt(__int64);
int32x4_t SdkRoutine_6a0500(__int64, int, int, int);
unsigned __int64 SdkRoutine_6af4e0(__int64, unsigned int, unsigned int,
                                   unsigned int);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
void __attribute__((noreturn)) SdkRoutine_aebd0(__int64, __int64);
void __cxa_guard_release_plt(__int64);
void nn_audio_capture_StartSystemAudioCaptureServer_plt(__int64);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_aead0(__int64 a1, ...);
void __attribute__((noreturn)) nn_aeb60(__int64 a1, ...);
__int64 nn_dbd00(__int64 a1);
__int64 nn_1bca40(__int64 a1, __int64* a2, __int64 a3, __int64* a4);
__int64 nn_1bf440(__int64 a1, __int64* a2, __int64* a3, __int64* a4);
__int64 nn_1e7e80(__int64 a1, __int64 a2, __int64* a3);
__attribute__((swiftcall)) void nn_22f680(PSEUDO_X8 x8_, void* this_);
__int64 nn_64a260(__int64 result);
__int64 nn_64a2c0(__int64 a1, __int64 a2);
__int64 nn_64a320(__int64 a1, __int64 a2);
__int64 nn_654130(__int64 a1, __int64 a2);
__int64 nn_654330(__int64 a1, __int64 a2);
_QWORD* nn_657d30(_QWORD* result, unsigned int a2, int a3, __int64 a4);
__int64 nn_65a600(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64* a5,
                  __int64 a6);
bool nn_65a8e0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 nn_65c320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int16 a6, int a7);
__int64 nn_65c5e0(__int64 a1, ...);
__int64 nn_65ca10(__int64 a1, char* a2, ...);
__int64 nn_65d0a0(_OWORD* a1, __int64 a2);
__int64 nn_65dbc0(__int64* a1, unsigned int* a2);
__int64 nn_65dd60(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_65e040(__int64 a1, __int64 a2);
__int64 nn_663fa0(__int64 result);
__int64 nn_668500(__int64 result);
__int64 nn_668550(__int64 result);
__int64 nn_669180(_QWORD* a1, __int64 a2, unsigned int a3, int* a4);
__int64 nn_66afc0(__int64* a1);
unsigned __int16* nn_66cae0(unsigned __int16* result);
void nn_698610(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_69f620(__int64 a1, __int64 a2);
__int64 nn_69f6b0(__int64 a1);
__int64 nn_69f780(__int64* a1);
__int64 nn_69fd40(__int64 a1);
__int64 nn_69fe20(__int64 a1);
__int64 nn_69fee0(_QWORD* a1);
__int64 nn_6a0000(_QWORD* a1);
__int64 nn_6a0120(__int64 a1);
__int64 nn_6a02a0(__int64 a1);
__int64 nn_6a0320(_QWORD* a1);
__int64 nn_6a03d0(__int64 a1);
__int64 nn_6a0460(__int64 a1);
__int64 nn_6a2bc0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4);
__int64 nn_6a2de0(__int64 a1, unsigned int a2, __int64 a3);
__int64 nn_6a2f60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
__int64 nn_6a30c0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
__int64 nn_6a3220(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
__int64 nn_6a7500(__int64 a1);
__int64 nn_6a9080(_QWORD* a1);
__int64 nn_6aa140(__int64 a1);
__int64 nn_6aa400(__int64 a1);
__int64 nn_6aaae0(__int64 a1);
__int64 nn_6ad040(__int64 a1);
__int64 nn_6adbf0(__int64 a1);
__int64 nn_6addf0(__int64 result);
float nn_75a7c0(void* this_);
__int64 nn_762070(__int64 a1, __int64 a2, int a3, int a4);

__int64 nn_aead0(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va1, a1);
  __builtin_va_start(va, a1);
  return nn_diag_detail_VLogImpl_plt(&SdkData_e4cf18, a1, (__int64)&va1);
}

void __attribute__((noreturn)) nn_aeb60(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  SdkRoutine_aebd0(a1, (__int64)&va);
}

__int64 nn_dbd00(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  _BYTE* v13;

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  v13 = nullptr;
  nn_fs_de900(a1, (__int64*)&v13);
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  v12 = 0;
  v3 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v12);
  if (v3 == 0) {
    v4 = (__int64)v13;
    {
      v6 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v13);
      __asm__ volatile("" ::"r"(v6));
    }
    {
      v5 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v13 + 8);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v6 + v5 > v12) {
      v3 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 40LL))(
          *(_QWORD*)(a1 + 8), v6 + v5);
      if (v3 != 0) {
        goto LABEL_9;
      }
      v4 = (__int64)v13;
      {
        v6 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v13);
        __asm__ volatile("" ::"r"(v6));
      }
      {
        v5 = *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v13 + 8);
        __asm__ volatile("" ::"r"(v5));
      }
    }
    v3 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64))(
        **(_QWORD**)(a1 + 8) + 24LL))(
        *(_QWORD*)(a1 + 8), v5, *(__int64*)((char*)((__int64*)0x30LL) + v4),
        v6);
    if (v3 == 0) {
      v3 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(a1 + 8) + 24LL))(
          *(_QWORD*)(a1 + 8), 0,
          *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v13 + 4),
          *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v13 + 12));
      if (v3 == 0) {
        v3 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
            *(_QWORD*)(a1 + 8));
        if (v3 == 0) {
          *(_BYTE*)(a1 + 156) = 0;
        }
      }
    }
  }
LABEL_9:
  v7 = (__int64)v13;
  v8 = v3;
  v13 = nullptr;
  if (v7 != 0) {
    if ((*(_BYTE(*)[4])0x20LL)[v7] == 1) {
      {
        v9 = *(__int64*)((char*)((__int64*)0x30LL) + v7);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v9 != 0) {
        (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
            ***(_QWORD***)((char*)((__int64*)0x28LL) + v7) + 24LL))(
            **(_QWORD**)((char*)((__int64*)0x28LL) + v7), v9,
            *(__int64*)((char*)((__int64*)0x38LL) + v7), 16);
      }
    }
    if (*(_BYTE*)v7 == 1) {
      {
        v10 = *(__int64*)((char*)((__int64*)0xCLL) + v7 + 4);
        __asm__ volatile("" ::"r"(v10));
      }
      if (v10 != 0) {
        (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
            ***(_QWORD***)((char*)((__int64*)0x4LL) + v7 + 4) + 24LL))(
            **(_QWORD**)((char*)((__int64*)0x4LL) + v7 + 4), v10,
            *(void(__attribute__((noreturn))**)())(
                (char*)(*(void*(*)[1])0x18LL) + v7),
            16);
      }
    }
    nn_fs_detail_Deallocate_plt(v7, 0x48u);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v8;
}

__int64 nn_1bca40(__int64 a1, __int64* a2, __int64 a3, __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v15;
  unsigned __int64 v16;
  unsigned int* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned int v30;
  struct {
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v31_;
  __int64 v36;
  struct {
    _QWORD* v37;
    unsigned int* v38;
  } v37_;
  _QWORD v39[4];

  {
    v6 = *a4;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = a4[1];
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = a1 + 8;
  {
    v10 = *(_DWORD*)(v8 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = v7;
  v12 = v6;
  {
    v9 = *(unsigned __int16**)(v8 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  v15 = (**(__int64 (***)(unsigned __int16*))v9)(v9);
  {
    v16 = v9[4];
    __asm__ volatile("" ::"r"(v16));
  }
  v30 = v15;
  v17 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v15);
  LODWORD(v39[3]) = 2162688;
  v37_.v38 = v17;
  v39[0] = 0x11000000000001LL;
  v39[1] = 26;
  v39[2] = 0x700000402000000LL;
  v37_.v37 = v39;
  *(_QWORD*)v17 = 0x1A00110006LL;
  v31_.v31 = a3;
  v31_.v32 = 128;
  v31_.v33 = v12;
  v31_.v34 = v11;
  v36 = 0x500000019LL;
  v18 = nn_sf_hipc_detail_SetBuffers(&v37_.v37, 2, (__int64)&v31_.v31,
                                     (__int64)&v36, v16, 104);
  if ((_DWORD)v18 != 0) {
    LODWORD(v28) = v18;
    v26 = v30;
  }
  else {
    {
      v19 =
          ((unsigned __int64)&v37_.v38[*((unsigned __int8*)v37_.v37 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v19));
    }
    *(_QWORD*)(v19 + 16) = 0x149434653LL;
    *(_QWORD*)(v19 + 24) = 110;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    *(_QWORD*)(v19 + 48) = 0;
    *(_QWORD*)(v19 + 56) = 0;
    *(_QWORD*)(v19 + 64) = 0;
    *(_QWORD*)(v19 + 72) = 0;
    *(_QWORD*)(v19 + 80) = 0;
    {
      v20 = *a2;
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = a2[2];
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(v19 + 40) = a2[1];
    *(_QWORD*)(v19 + 48) = v21;
    *(_QWORD*)(v19 + 32) = v20;
    {
      v22 = a2[3];
      __asm__ volatile("" ::"r"(v22));
    }
    {
      v23 = a2[4];
      __asm__ volatile("" ::"r"(v23));
    }
    {
      v24 = a2[5];
      __asm__ volatile("" ::"r"(v24));
    }
    {
      v25 = a2[6];
      __asm__ volatile("" ::"r"(v25));
    }
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 56) = v22;
    *(_QWORD*)(v19 + 64) = v23;
    *(_QWORD*)(v19 + 72) = v24;
    *(_QWORD*)(v19 + 80) = v25;
    *(_DWORD*)v19 = 4718593;
    *(_DWORD*)(v19 + 4) = v10;
    *(_DWORD*)(v19 + 12) = nn_sf_cmif_GetInlineContext_plt(v18);
    v26 = v30;
    v27 = nn_sf_hipc_SendSyncRequest_plt(v30, (__int64)v17, 256);
    if (v27 != 0) {
      LODWORD(v28) = v27;
    }
    else {
      v31_.v34 = 0;
      v31_.v35 = 0;
      v31_.v32 = 0;
      v31_.v33 = 0;
      v31_.v31 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v31_.v31, v17);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v31_.v31 + 4LL * BYTE1(v31_.v35) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v28 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v31_.v31 + 4LL * BYTE1(v31_.v35) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v28));
        }
        if ((_DWORD)v28 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v28);
        }
      }
      else {
        LODWORD(v28) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v9 + 8LL))(v9, v26);
  return (unsigned int)v28;
}

__int64 nn_1bf440(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned int v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v33_;
  struct {
    _QWORD* v39;
    unsigned int* v40;
  } v39_;
  _QWORD v41[4];

  {
    v6 = a2[1];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *a3;
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = a3[1];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = a1 + 8;
  {
    v10 = *a4;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a4[1];
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *a2;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(unsigned __int16**)(v9 + 8);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(_DWORD*)(v9 + 16);
    __asm__ volatile("" ::"r"(v14));
  }
  v15 = v11;
  v16 = v10;
  v17 = 16 * v8;
  v18 = v7;
  v19 = 16 * v6;
  v20 = v12;
  v21 = (**(__int64 (***)(unsigned __int16*))v13)(v13);
  {
    v22 = v13[4];
    __asm__ volatile("" ::"r"(v22));
  }
  v30 = v21;
  v23 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v21);
  v39_.v39 = v41;
  v39_.v40 = v23;
  LODWORD(v41[3]) = 1441812;
  v41[0] = 0x101000000000001LL;
  v41[1] = 3085;
  v41[2] = 0x700040002000000LL;
  *(_QWORD*)v23 = 0xC0D01010006LL;
  v33_.v33 = v20;
  v33_.v34 = v19;
  v33_.v35 = v18;
  v33_.v36 = v17;
  v33_.v37 = v16;
  v33_.v38 = v15;
  v31_.v31 = 0x90000000ALL;
  v31_.v32 = 6;
  v24 = nn_sf_hipc_detail_SetBuffers(&v39_.v39, 3, (__int64)&v33_.v33,
                                     (__int64)&v31_.v31, v22, 48);
  if ((_DWORD)v24 != 0) {
    LODWORD(v28) = v24;
    v26 = v30;
  }
  else {
    {
      v25 =
          ((unsigned __int64)&v39_.v40[*((unsigned __int8*)v39_.v39 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v25));
    }
    *(_QWORD*)(v25 + 8) = 0;
    *(_DWORD*)v25 = 1048577;
    *(_DWORD*)(v25 + 4) = v14;
    *(_QWORD*)(v25 + 16) = 0x149434653LL;
    *(_QWORD*)(v25 + 24) = 100;
    *(_DWORD*)(v25 + 12) = nn_sf_cmif_GetInlineContext_plt(v24);
    v26 = v30;
    v27 = nn_sf_hipc_SendSyncRequest_plt(v30, (__int64)v23, 256);
    if (v27 != 0) {
      LODWORD(v28) = v27;
    }
    else {
      v33_.v36 = 0;
      v33_.v37 = 0;
      v33_.v34 = 0;
      v33_.v35 = 0;
      v33_.v33 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v33_.v33, v23);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v28 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v28));
        }
        if ((_DWORD)v28 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v28);
        }
      }
      else {
        LODWORD(v28) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v13 + 8LL))(v13, v26);
  return (unsigned int)v28;
}

__int64 nn_1e7e80(__int64 a1, __int64 a2, __int64* a3)
{
  void(__attribute__((noreturn)) * v6)();
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  _BYTE* v31;
  struct {
    unsigned int v32;
    char v33;
  } v32_;
  __int64 v34;
  _QWORD v35[2];
  _QWORD v36[32];
  _QWORD v37[2];
  __int64 v38;
  __int128 v39;
  __int64* v40;

  nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_f05e1c);
  v6 = SdkData_e87348[0];
  {
    v7 = *(unsigned int*)SdkData_e87348[0];
    __asm__ volatile("" ::"r"(v7));
  }
  if ((int)v7 < 1) {
  LABEL_5:
    v9 = nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f05e1c);
  }
  else {
    v8 = (__int64*)&SdkData_f05df0;
    while (*(v8 - 1) != a1) {
      --v7;
      v8 += 2;
      if (v7 == 0) {
        goto LABEL_5;
      }
    }
    {
      v10 = *v8;
      __asm__ volatile("" ::"r"(v10));
    }
    v9 = nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f05e1c);
    if (v10 != 0) {
      return 4761;
    }
  }
  v39 = (__typeof__(v39)){0};
  v37[0] = a2;
  v37[1] = 256;
  v38 = 0;
  memset(v36, 0, sizeof(v36));
  v35[0] = v36;
  v35[1] = 256;
  v11 = nn_os_GetCurrentProcessHandle_plt(v9);
  if ((_DWORD)v11 == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v12 = v11;
  v13 = nn_applet_GetAppletResourceUserId_plt(v11);
  v34 = 0;
  audio_out_1e7d70(&v34);
  v14 = v34;
  v32_.v32 = v12;
  v32_.v33 = 0;
  {
    v15 = *a3;
    __asm__ volatile("" ::"r"(v15));
  }
  v40 = &v38;
  v16 = (*(__int64 (**)(__int64, __int64**, _QWORD*, __int64, unsigned int*,
                        __int128*, _QWORD*, __int64))(*(_QWORD*)v34 + 40LL))(
      v34, &v40, v37, v15, &v32_.v32, &v39, v35, v13);
  if (v32_.v33 == 1) {
    nn_os_CloseNativeHandle_plt(v32_.v32);
  }
  if (v16 == 0) {
    v17 = v38;
    v38 = 0;
    nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_f05e1c);
    {
      v18 = *(unsigned int*)v6;
      __asm__ volatile("" ::"r"(v18));
    }
    if (SdkData_f05e18 == (_DWORD)v18 || (int)v18 < 1) {
    LABEL_16:
      nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f05e1c);
      (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
      v16 = 2713;
      if (v14 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v19 = &SdkData_f05de8;
      while (*v19 != 0) {
        --v18;
        v19 += 2;
        if (v18 == 0) {
          goto LABEL_16;
        }
      }
      *v19 = a1;
      v19[1] = v17;
      ++SdkData_f05e18;
      v21 = nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f05e1c);
      v22 = v39;
      v23 = 0;
      *(_QWORD*)(a1 + 352) = 0;
      *(_DWORD*)a1 = v22;
      *(_QWORD*)(a1 + 4) = *(_QWORD*)((char*)&v39 + 4);
      *(_DWORD*)(a1 + 12) = HIDWORD(v39);
      while (1) {
        v24 = (unsigned __int8*)v36 + v23;
        v25 = a1 + v23;
        if (*((_BYTE*)v36 + v23) == 0) {
          v31 = (_BYTE*)(v25 + 16);
          goto LABEL_34;
        }
        {
          v26 = v24[1];
          __asm__ volatile("" ::"r"(v26));
        }
        *(_BYTE*)(v25 + 16) = *((_BYTE*)v36 + v23);
        if (v26 == 0) {
          v31 = (_BYTE*)(a1 + v23 + 17);
          goto LABEL_34;
        }
        *(_BYTE*)(v25 + 17) = v26;
        v27 = a1 + v23;
        if (v24[2] == 0) {
          v31 = (_BYTE*)(v27 + 18);
          goto LABEL_34;
        }
        {
          v28 = v24[3];
          __asm__ volatile("" ::"r"(v28));
        }
        *(_BYTE*)(v27 + 18) = v24[2];
        if (v28 == 0) {
          v31 = (_BYTE*)(a1 + v23 + 19);
          goto LABEL_34;
        }
        {
          v29 = v24[4];
          __asm__ volatile("" ::"r"(v29));
        }
        v30 = a1 + v23;
        *(_BYTE*)(v27 + 19) = v28;
        if (v29 == 0) {
          break;
        }
        v23 += 5;
        *(_BYTE*)(v30 + 20) = v29;
        if ((_DWORD)v23 == 255) {
          v31 = (_BYTE*)(a1 + v23 + 16);
          goto LABEL_34;
        }
      }
      v31 = (_BYTE*)(v30 + 20);
    LABEL_34:
      *v31 = 0;
      nn_audio_capture_StartSystemAudioCaptureServer_plt(v21);
      v14 = v34;
      v16 = 0;
      if (v34 == 0) {
        goto LABEL_18;
      }
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
LABEL_18:
  if (v38 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
  }
  return v16;
}

__attribute__((swiftcall)) void nn_22f680(PSEUDO_X8 x8_, void* this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  _QWORD* v3;
  _QWORD* v4;
  int v5;
  __int64 v6;
  __int64* v7;

  if (((unsigned __int8)this_ & 1) != 0) {
    (__int64 (***)(_QWORD)) nn_audio_CreateAudioRendererManagerByDfc_plt();
    return;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f163e0,
                            memory_order_acquire) &
       1) == 0) {
    v4 = a2;
    v5 = __cxa_guard_acquire_plt((__int64)&SdkData_f163e0);
    a2 = v4;
    if (v5 != 0) {
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt((__int64)&SdkData_f163e0);
      a2 = v4;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_f163d8;
  if (SdkData_f163d8 != 0) {
    *a2 = SdkData_f163d8;
    {
      (__int64 (***)(_QWORD)) (**result)(result);
      return;
    }
  }
  v3 = a2;
  v6 = 0;
  nn_audio_CreateUserClientSessionByHipc_plt((void*)(&v6));
  v7 = &SdkData_f163d8;
  LODWORD(v7) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v6 + 48LL))(v6, &v7);
  if ((_DWORD)v7 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v7);
  }
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  result = (__int64 (***)(_QWORD))SdkData_f163d8;
  *v3 = SdkData_f163d8;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__int64 nn_64a260(__int64 result)
{
  __int64 v1;
  __int64 v2;

  {
    v1 = *(_QWORD*)(result + 16);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 != 0) {
    {
      v2 = *(_QWORD*)(result + 16);
      __asm__ volatile("" ::"r"(v2));
    }
    --*(_DWORD*)(*(_QWORD*)(v1 + 8) + 7632LL);
    SdkRoutine_65d380(v2);
    return (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)SdkData_e89bd8))(v1);
  }
  return result;
}

__int64 nn_64a2c0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 != 0) {
    --*(_DWORD*)(*(_QWORD*)(a2 + 8) + 7632LL);
    SdkRoutine_65d380(a2),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)SdkData_e89bd8))(a2);
  }
  return result;
}

__int64 nn_64a320(__int64 a1, __int64 a2)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 != 0) {
    --*(_DWORD*)(*(_QWORD*)(a2 + 8) + 7632LL);
    SdkRoutine_65d380(a2),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)SdkData_e89bd8))(a2);
  }
  return result;
}

__int64 nn_654130(__int64 a1, __int64 a2)
{
  __int64 result;
  void* v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[2];
    __int64 v9;
    __int64 v10;
    __int128 v11;
    __int64 v12;
  } v8_;

  {
    result = *(_QWORD*)(a1 + 7256);
    __asm__ volatile("" ::"r"(result));
  }
  if (result == 0) {
    v5 = SdkData_e89bd8;
    result = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, 256);
    *(_QWORD*)(a1 + 7256) = result;
    if (result != 0) {
      v6 = 4096;
      v8_.v12 = 0;
      v8_.v8[0] = 0x1200000000LL;
      v8_.v9 = 0;
      v8_.v11 = (__typeof__(v8_.v11)){0};
      v8_.v8[1] = a1;
      v8_.v10 = 4096;
      if (a2 != 0) {
        (*(void (**)(_QWORD, _QWORD*))(a2 + 8))(*(_QWORD*)a2, v8_.v8);
        v6 = v8_.v10;
      }
      v7 = SdkRoutine_6add10(v6, 4096);
      *(_QWORD*)(a1 + 7248) = v7;
      if (v7 != 0) {
        v8_.v9 = v7;
        if ((unsigned __int8)nn_65d0a0(*(_OWORD**)(a1 + 7256),
                                       (__int64)v8_.v8) != 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 7256) + 16LL) |= 0x10000000u;
          return *(_QWORD*)(a1 + 7256);
        }
        (*(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v5))(
            *(_QWORD*)(a1 + 7256));
        *(_QWORD*)(a1 + 7256) = 0;
      }
      return 0;
    }
  }
  return result;
}

__int64 nn_654330(__int64 a1, __int64 a2)
{
  __int64* v4;
  int* v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  unsigned int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  _DWORD v16[72];

  ++SdkData_10420ac;
  memset_plt(a1, 0, 0x2320u);
  SdkRoutine_654d40(a1);
  if ((nn_65ed70(a1 + 2520) & 1) != 0) {
    nn_os_LockMutex_plt((__int64)SdkData_e89c10);
    nn_65f3c0((void*)((__int64)v16), a1 + 2520);
    memcpy_plt(a1 + 16, (__int64)v16, 0x118u);
    v4 = SdkData_e89c40;
    *(_DWORD*)(a1 + 7544) = 1;
    *(_DWORD*)(a1 + 7356) = 0;
    *(_OWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v4) =
        (__typeof__(*(_OWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v4))){0};
    *(_OWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) =
        (__typeof__(*(_OWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4))){0};
    *v4 = -1;
    *((_BYTE*)((int*)0x24LL) + (_QWORD)v4) = 1;
    v5 = (int*)(a1 + 7520);
    *(_QWORD*)(a1 + 7348) = 0;
    *(_OWORD*)(a1 + 7280) = SdkData_bb2100;
    *(_OWORD*)(a1 + 7296) = SdkData_bb47c0;
    *(_OWORD*)(a1 + 7312) = SdkData_bb2ca0;
    *(_OWORD*)(a1 + 7328) = SdkData_bb4aa0;
    *(_OWORD*)(a1 + 7364) = SdkData_bb0f90;
    {
      v10 = *(_DWORD*)(a1 + 184) == 1283;
      __asm__ volatile("" ::"r"(v10));
    }
    *(_OWORD*)(a1 + 7380) = SdkData_bb3aa0;
    *(_OWORD*)(a1 + 7396) = SdkData_bb3090;
    *(_OWORD*)(a1 + 7412) = SdkData_bb1cb0;
    if (v10) {
      v6 = 142565504;
    }
    else {
      v6 = 538329104;
    }
    *(_DWORD*)(a1 + 7344) = v6;
    *(_QWORD*)(a1 + 7500) = 0;
    *(_QWORD*)(a1 + 7508) = 0;
    *(_DWORD*)(a1 + 7500) = 1;
    {
      v7 = *(unsigned __int8*)(a1 + 276);
      __asm__ volatile("" ::"r"(v7));
    }
    *(_QWORD*)(a1 + 7492) = 0;
    *(_OWORD*)(a1 + 7428) = SdkData_bb3310;
    *(_DWORD*)(a1 + 7360) = 2 * v7;
    *(_OWORD*)(a1 + 7476) = SdkData_bb47d0;
    *(_OWORD*)(a1 + 7520) = SdkData_bb4ab0;
    *(_QWORD*)(a1 + 7536) = 0x1000000000LL;
    *(_OWORD*)(a1 + 7444) = SdkData_bb35f0;
    *(_OWORD*)(a1 + 7460) = SdkData_bb1230;
    if ((SdkRoutine_65ed60(a1 + 2520) & 1) != 0) {
      nn_65f540(a1 + 2520, (__int64)"18273276", (_DWORD*)(a1 + 7280));
      nn_65f540(a1 + 2520, (__int64)"18273275", (_DWORD*)(a1 + 7284));
      nn_65f540(a1 + 2520, (__int64)"0x9abdc5", (_DWORD*)(a1 + 7288));
      nn_65f540(a1 + 2520, (__int64)"0x9abdc6", (_DWORD*)(a1 + 7520));
      nn_65f540(a1 + 2520, (__int64)"1a298e9f", (_DWORD*)(a1 + 7292));
      nn_65f540(a1 + 2520, (__int64)"18ADD00D", (_DWORD*)(a1 + 7296));
      nn_65f540(a1 + 2520, (__int64)"808EE280", (_DWORD*)(a1 + 7300));
      nn_65f540(a1 + 2520, (__int64)"FAF8A723", (_DWORD*)(a1 + 7304));
      nn_65f540(a1 + 2520, (__int64)"8AD8A75", (_DWORD*)(a1 + 7308));
      nn_65f540(a1 + 2520, (__int64)"8AD8AD00", (_DWORD*)(a1 + 7312));
      nn_65f540(a1 + 2520, (__int64)"6fe11ec1", (_DWORD*)(a1 + 7316));
      nn_65f540(a1 + 2520, (__int64)"0x923dc0", (_DWORD*)(a1 + 7320));
      nn_65f540(a1 + 2520, (__int64)"0x923dc2", (_DWORD*)(a1 + 7324));
      nn_65f540(a1 + 2520, (__int64)"0x923dc3", (_DWORD*)(a1 + 7328));
      nn_65f540(a1 + 2520, (__int64)"0x923dd3", (_DWORD*)(a1 + 7332));
      nn_65f540(a1 + 2520, (__int64)"0x923dc4", (_DWORD*)(a1 + 7336));
      nn_65f540(a1 + 2520, (__int64)"0x923dc1", (_DWORD*)(a1 + 7340));
      nn_65f540(a1 + 2520, (__int64)"a3456abe", (_DWORD*)(a1 + 7344));
      nn_65f540(a1 + 2520, (__int64)"46F1E13D", (_DWORD*)(a1 + 7348));
      nn_65f540(a1 + 2520, (__int64)"eae964", (_DWORD*)(a1 + 7352));
      nn_65f540(a1 + 2520, (__int64)"48550336", (_DWORD*)(a1 + 7356));
      nn_65f540(a1 + 2520, (__int64)"58027529", (_DWORD*)(a1 + 7360));
      nn_65f540(a1 + 2520, (__int64)"89894423", (_DWORD*)(a1 + 7364));
      nn_65f540(a1 + 2520, (__int64)"QualityEnhancements",
                (_DWORD*)(a1 + 7368));
      nn_65f540(a1 + 2520, (__int64)"13279512", (_DWORD*)(a1 + 7372));
      nn_65f540(a1 + 2520, (__int64)"CacheDisable", (_DWORD*)(a1 + 7376));
      nn_65f540(a1 + 2520, (__int64)"ShaderCacheInitSize",
                (_DWORD*)(a1 + 7380));
      nn_65f540(a1 + 2520, (__int64)"fa345cce", (_DWORD*)(a1 + 7384));
      nn_65f540(a1 + 2520, (__int64)"87364952", (_DWORD*)(a1 + 7388));
      nn_65f540(a1 + 2520, (__int64)"0356afd3", (_DWORD*)(a1 + 7392));
      nn_65f540(a1 + 2520, (__int64)"0356afd2", (_DWORD*)(a1 + 7396));
      nn_65f540(a1 + 2520, (__int64)"0356afd0", (_DWORD*)(a1 + 7400));
      nn_65f540(a1 + 2520, (__int64)"0356afd1", (_DWORD*)(a1 + 7404));
      nn_65f540(a1 + 2520, (__int64)"TexLODBias", (_DWORD*)(a1 + 7408));
      nn_65f540(a1 + 2520, (__int64)"CubemapAniso", (_DWORD*)(a1 + 7412));
      nn_65f540(a1 + 2520, (__int64)"24189123", (_DWORD*)(a1 + 7416));
      nn_65f540(a1 + 2520, (__int64)"b1fb0f01", (_DWORD*)(a1 + 7420));
      nn_65f540(a1 + 2520, (__int64)"1acf43fe", (_DWORD*)(a1 + 7424));
      nn_65f540(a1 + 2520, (__int64)"1bda43fe", (_DWORD*)(a1 + 7428));
      nn_65f540(a1 + 2520, (__int64)"a2fb451e", (_DWORD*)(a1 + 7432));
      nn_65f540(a1 + 2520, (__int64)"e435563f", (_DWORD*)(a1 + 7436));
      nn_65f540(a1 + 2520, (__int64)"B40D9E03d", (_DWORD*)(a1 + 7440));
      nn_65f540(a1 + 2520, (__int64)"FF54EC97", (_DWORD*)(a1 + 7444));
      nn_65f540(a1 + 2520, (__int64)"FF54EC98", (_DWORD*)(a1 + 7448));
      nn_65f540(a1 + 2520, (__int64)"49867584", (_DWORD*)(a1 + 7452));
      nn_65f540(a1 + 2520, (__int64)"", (_DWORD*)(a1 + 7456));
      nn_65f540(a1 + 2520, (__int64)"7CCD93", (_DWORD*)(a1 + 7460));
      nn_65f540(a1 + 2520, (__int64)"2165ad", (_DWORD*)(a1 + 7464));
      nn_65f540(a1 + 2520, (__int64)"2165ae", (_DWORD*)(a1 + 7468));
      nn_65f540(a1 + 2520, (__int64)"e433456d", (_DWORD*)(a1 + 7472));
      nn_65f540(a1 + 2520, (__int64)"beefcba3", (_DWORD*)(a1 + 7476));
      nn_65f540(a1 + 2520, (__int64)"3001ac", (_DWORD*)(a1 + 7480));
      nn_65f540(a1 + 2520, (__int64)"0xce2348", (_DWORD*)(a1 + 7484));
      nn_65f540(a1 + 2520, (__int64)"0xbd10fb", (_DWORD*)(a1 + 7488));
      nn_65f540(a1 + 2520, (__int64)"2a1f64", (_DWORD*)(a1 + 7492));
      nn_65f540(a1 + 2520, (__int64)"", (_DWORD*)(a1 + 7496));
      nn_65f540(a1 + 2520, (__int64)"313233", (_DWORD*)(a1 + 7500));
      nn_65f540(a1 + 2520, (__int64)"95282304", (_DWORD*)(a1 + 7504));
      nn_65f540(a1 + 2520, (__int64)"a13b46c80", (_DWORD*)(a1 + 7508));
      nn_65f540(a1 + 2520, (__int64)"fbf4ac45", (_DWORD*)(a1 + 7512));
      nn_65f540(a1 + 2520, (__int64)"0x191043", (_DWORD*)(a1 + 7524));
      nn_65f540(a1 + 2520, (__int64)"0x121044", (_DWORD*)(a1 + 7528));
      nn_65f540(a1 + 2520, (__int64)"0x121045", (_DWORD*)(a1 + 7532));
      nn_65f540(a1 + 2520, (__int64)"0xa011ea", (_DWORD*)(a1 + 7536));
      nn_65f540(a1 + 2520, (__int64)"0xc370ab", (_DWORD*)(a1 + 7540));
      nn_65f540(a1 + 2520, (__int64)"0xba9320", (_DWORD*)(a1 + 7544));
      if ((nn_65f540(a1 + 2520, (__int64)"2a1f64", v16) & 1) != 0) {
        *(_DWORD*)(a1 + 7516) = 1;
      }
      *(_DWORD*)(a1 + 7348) &= 0x1Fu;
      SdkRoutine_6589a0(a1 + 2520);
      v4 = SdkData_e89c40;
      v5 = (int*)(a1 + 7520);
    }
    *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) =
        *(_DWORD*)(a1 + 7500);
    nn_os_UnlockMutex_plt((__int64)SdkData_e89c10);
    {
      v8 = *(_DWORD*)(a2 + 4);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = *v5;
      __asm__ volatile("" ::"r"(v9));
    }
    if (*v5 == 1) {
      v8 |= 1u;
    }
    else if (v9 == 3) {
      v8 &= 0xFFFFFF8A;
    }
    else if (v9 == 2) {
      v8 |= 4u;
    }
    *(_DWORD*)(a1 + 8) = v8;
    *(_DWORD*)(a1 + 7536) = -1;
    nn_os_LockMutex_plt((__int64)SdkData_e89c10);
    *(_DWORD*)(a1 + 7576) = 6;
    v12 = SdkRoutine_6ade10();
    if (v12 != 0) {
      *(_QWORD*)(v12 + 24) = 0;
      *(_QWORD*)(v12 + 232) = 0;
      *(_OWORD*)(v12 + 48) = (__typeof__(*(_OWORD*)(v12 + 48))){0};
      *(_OWORD*)(v12 + 64) = (__typeof__(*(_OWORD*)(v12 + 64))){0};
      *(_QWORD*)(v12 + 56) = v12 + 24;
      *(_QWORD*)(v12 + 64) = v12 + 24;
      *(_QWORD*)(v12 + 128) = 0;
      *(_OWORD*)(v12 + 168) = (__typeof__(*(_OWORD*)(v12 + 168))){0};
      *(_OWORD*)(v12 + 152) = (__typeof__(*(_OWORD*)(v12 + 152))){0};
      *(_QWORD*)(v12 + 96) = 0;
      *(_QWORD*)(v12 + 104) = 0;
      *(_QWORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 32) = 0;
      *(_BYTE*)(v12 + 40) = 0;
      *(_OWORD*)(v12 + 73) = (__typeof__(*(_OWORD*)(v12 + 73))){0};
      *(_QWORD*)(v12 + 200) = 0;
      *(_QWORD*)(v12 + 208) = 0;
      *(_QWORD*)(v12 + 136) = 0;
      *(_BYTE*)(v12 + 144) = 0;
      *(_QWORD*)(v12 + 112) = 0;
      *(_QWORD*)(v12 + 120) = 0;
      *(_OWORD*)(v12 + 177) = (__typeof__(*(_OWORD*)(v12 + 177))){0};
      *(_QWORD*)(v12 + 312) = 0;
      *(_QWORD*)(v12 + 320) = 0;
      *(_QWORD*)(v12 + 304) = 0;
      *(_QWORD*)(v12 + 240) = 0;
      *(_QWORD*)(v12 + 216) = 0;
      *(_QWORD*)(v12 + 224) = 0;
      *(_BYTE*)(v12 + 248) = 0;
      *(_QWORD*)(v12 + 160) = v12 + 128;
      *(_QWORD*)(v12 + 168) = v12 + 128;
      *(_OWORD*)(v12 + 256) = (__typeof__(*(_OWORD*)(v12 + 256))){0};
      *(_OWORD*)(v12 + 272) = (__typeof__(*(_OWORD*)(v12 + 272))){0};
      *(_OWORD*)(v12 + 281) = (__typeof__(*(_OWORD*)(v12 + 281))){0};
      *(_QWORD*)(v12 + 264) = v12 + 232;
      *(_QWORD*)(v12 + 272) = v12 + 232;
      *(_QWORD*)v12 = (char*)SdkData_e89c70 + 16;
      *(_QWORD*)(v12 + 8) = a1;
    }
    {
      v13 = *(_DWORD*)(a1 + 7288);
      __asm__ volatile("" ::"r"(v13));
    }
    *(_QWORD*)(a1 + 7568) = v12;
    *(_BYTE*)(a1 + 7580) = (v13 & 6) != 4;
    v14 = SdkRoutine_65d7b0(a1);
    *(_QWORD*)(a1 + 7552) = v14;
    if (v14 != 0) {
      v11 = 1;
    }
    else {
      SdkRoutine_650730(a1);
      v11 = 0;
    }
    nn_os_UnlockMutex_plt((__int64)SdkData_e89c10);
  }
  else {
    v10 = --SdkData_10420ac != 0 || SdkData_10420b0 == 0;
    if (v10) {
      return 0;
    }
    else {
      SdkRoutine_65b950();
      SdkData_10420b0 = 0;
      v11 = 0;
      *SdkData_e89c40 = 0;
      *SdkData_e89c18 = 0;
    }
  }
  return v11;
}

_QWORD* nn_657d30(_QWORD* result, unsigned int a2, int a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;

  if (a2 == 8) {
    result = nvidia_64ac60(result, &v18, 0x10u);
    *(_BYTE*)v18 = 102;
    v8 = (unsigned __int64*)v18;
    {
      v9 = *(_QWORD*)v18 & 0xFFFFFFFF000000FFLL | 0x800;
      __asm__ volatile("" ::"r"(v9));
    }
  LABEL_22:
    *v8 = v9;
    *(_DWORD*)(v18 + 4) = a3;
    if (a4 != 0) {
      {
        v17 = *(_QWORD*)(a4 + 8);
        __asm__ volatile("" ::"r"(v17));
      }
      if (v17 != 0) {
        v17 = *(_QWORD*)(v17 + 24) + *(int*)(a4 + 16);
        __asm__ volatile("" ::"r"(v17));
      }
    }
    else {
      v17 = 0;
    }
    *(_QWORD*)(v18 + 8) = v17;
    return result;
  }
  if (a2 == 5) {
    if (*((_BYTE*)result + 168) != 1) {
      goto LABEL_21;
    }
    if (a4 != 0 && (v6 = *(_QWORD*)(a4 + 8)) != 0) {
      v7 = *(_QWORD*)(v6 + 24) + *(int*)(a4 + 16);
      __asm__ volatile("" ::"r"(v7));
    }
    else {
      v7 = 0;
    }
    {
      v15 = *result;
      __asm__ volatile("" ::"r"(v15));
    }
    if ((unsigned __int64)(*result + 20LL) > result[1]) {
      v16 = result;
      SdkRoutine_64b750((__int64)result, v15,
                        4LL * (unsigned int)(*((_DWORD*)result + 26) + 5));
      {
        v15 = *v16;
        __asm__ volatile("" ::"r"(v15));
      }
      result = v16;
    }
    *(_DWORD*)(v15 + 16) = a3;
    *(_QWORD*)(v15 + 8) = v7;
    *(_QWORD*)v15 = 0x3002DA0042EA6LL;
    *result = v15 + 20;
    if ((result[21] & 1) == 0) {
    LABEL_21:
      result = nvidia_64ac60(result, &v18, 0x10u);
      *(_BYTE*)v18 = 102;
      v8 = (unsigned __int64*)v18;
      {
        v9 = *(_QWORD*)v18 & 0xFFFFFFFF000000FFLL | 0x500;
        __asm__ volatile("" ::"r"(v9));
      }
      goto LABEL_22;
    }
  }
  else {
    if (a4 != 0 && (v10 = *(_QWORD*)(a4 + 8)) != 0) {
      {
        v11 = *(_QWORD*)(v10 + 24) + *(int*)(a4 + 16);
        __asm__ volatile("" ::"r"(v11));
      }
      if (a2 > 7) {
        return result;
      }
    }
    else {
      v11 = 0;
      if (a2 > 7) {
        return result;
      }
    }
    if (((0xDFu >> a2) & 1) != 0) {
      {
        v12 = SdkData_bb0190[a2];
        __asm__ volatile("" ::"r"(v12));
      }
      {
        v13 = *result;
        __asm__ volatile("" ::"r"(v13));
      }
      if ((unsigned __int64)(*result + 24LL) > result[1]) {
        v14 = result;
        SdkRoutine_64b750((__int64)result, v13,
                          4LL * (unsigned int)(*((_DWORD*)result + 26) + 6));
        {
          v13 = *v14;
          __asm__ volatile("" ::"r"(v13));
        }
        result = v14;
      }
      *(_DWORD*)(v13 + 16) = a3;
      *(_DWORD*)(v13 + 20) = 0;
      *(_DWORD*)v13 = v12;
      *(_DWORD*)(v13 + 4) = 537135332;
      *(_QWORD*)(v13 + 8) = v11;
      *result = v13 + 24;
    }
  }
  return result;
}

__int64 nn_65a600(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64* a5,
                  __int64 a6)
{
  __int64 (**v11)(__int64);
  __int64 result;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  struct {
    char v16[28];
    char v17[12];
  } v16_;

  v11 = (__int64 (**)(__int64))SdkData_e89bd8;
  result = (*(__int64 (**)(__int64))SdkData_e89bd8)(8);
  if (result != 0) {
    v13 = (_QWORD*)result;
    {
      v14 = (*v11)(8);
      __asm__ volatile("" ::"r"(v14));
    }
    if (v14 != 0) {
      v15 = v14;
      if ((*(unsigned int (**)(_QWORD, _QWORD*, __int64, _QWORD, char*, char*))(
              *(_QWORD*)(a2 + 7648) + 96LL))(*(_QWORD*)(a2 + 7656), v13, a3, 0,
                                             v16_.v17, v16_.v16) == 0) {
        if ((*(unsigned int (**)(__int64, _QWORD, __int64))(
                *(_QWORD*)(a2 + 7648) + 112LL))(v15, *v13, a6) == 0) {
          *a4 = v13;
          *a5 = v15;
          return 1;
        }
        (*(void (**)(_QWORD))(*(_QWORD*)(a2 + 7648) + 104LL))(*v13);
      }
      (*(void (**)(_QWORD*))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v11))(v13);
      (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v11))(v15);
    }
    else {
      (*(void (**)(_QWORD*))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v11))(v13);
    }
    return 0;
  }
  return result;
}

bool nn_65a8e0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  int v6;
  void* v7;

  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(a2 + 7648) + 104LL))(*a3);
  if (v6 == 0) {
    v7 = SdkData_e89bd8;
    (*(void (**)(_QWORD*))((char*)(*(void*(*)[1])0x18LL) +
                           (_QWORD)SdkData_e89bd8))(a3);
    (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v7))(a4);
  }
  return v6 == 0;
}

__int64 nn_65c320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int16 a6, int a7)
{
  __int64 result;
  __int64 v13;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  unsigned int v30;
  unsigned int v31;
  void* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char v36;
  void (*v37)(_QWORD);
  __int64 v38;
  struct {
    _QWORD v39[2];
    __int128 v40;
    __int128 v41;
    __int64 v42;
  } v39_;

  *(_QWORD*)(a1 + 24) = a2;
  v39_.v42 = 0;
  v39_.v40 = (__typeof__(v39_.v40)){0};
  v39_.v41 = (__typeof__(v39_.v41)){0};
  v39_.v39[0] = 0;
  v39_.v39[1] = a2;
  if (a3 != 0) {
    (*(void (**)(_QWORD, _QWORD*))(a3 + 8))(*(_QWORD*)a3, v39_.v39);
  }
  result = SdkRoutine_6add10(a4, a7);
  *(_QWORD*)(a1 + 8) = result;
  if (result != 0) {
    {
      v13 = *(_QWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v13));
    }
    *(_QWORD*)&v39_.v40 = result;
    *((_QWORD*)&v39_.v40 + 1) = a4;
    SdkRoutine_65d5c0(a1 + 32, v13, a6);
    if ((SdkRoutine_65d550(a1 + 32, (__int64)v39_.v39) & 1) == 0) {
      nn_6addf0(*(_QWORD*)(a1 + 8));
      return 0;
    }
    *(_QWORD*)(a1 + 288) = a4;
    nn_os_LockMutex_plt(a2 + 2440);
    if (*(_QWORD*)(a2 + 2416) == 0) {
      v20 = (*(__int64 (**)(__int64))SdkData_e89bd8)(256);
      *(_QWORD*)(a2 + 2416) = v20;
      if (v20 != 0) {
        v21 = 56;
      LABEL_8:
        *(_QWORD*)(v20 + v21 - 56) = 0;
        while (1) {
          {
            v22 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v22));
          }
          if (v22 != 0) {
            *(_QWORD*)(v22 + v21 - 48) = 0;
          }
          {
            v23 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v23));
          }
          if (v23 != 0) {
            *(_QWORD*)(v23 + v21 - 40) = 0;
          }
          {
            v24 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v24));
          }
          if (v24 != 0) {
            *(_QWORD*)(v24 + v21 - 32) = 0;
          }
          {
            v25 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v25));
          }
          if (v25 != 0) {
            *(_QWORD*)(v25 + v21 - 24) = 0;
          }
          {
            v26 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v26));
          }
          if (v26 != 0) {
            *(_QWORD*)(v26 + v21 - 16) = 0;
          }
          {
            v27 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v27));
          }
          if (v27 != 0) {
            *(_QWORD*)(v27 + v21 - 8) = 0;
          }
          {
            v28 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v28));
          }
          if (v28 != 0) {
            *(_QWORD*)(v28 + v21) = 0;
          }
          if (v21 == 248) {
            break;
          }
          {
            v20 = *(_QWORD*)(a2 + 2416);
            __asm__ volatile("" ::"r"(v20));
          }
          v21 += 64;
          if (v20 != 0) {
            goto LABEL_8;
          }
        }
        {
          v29 = *(_BYTE*)(a2 + 2436);
          __asm__ volatile("" ::"r"(v29));
        }
        *(_QWORD*)(a2 + 2428) = 0x2000000020LL;
        *(_BYTE*)(a2 + 2436) = v29 | 3;
      }
    }
    {
      v30 = *(_DWORD*)(a2 + 2424);
      __asm__ volatile("" ::"r"(v30));
    }
    if (v30 == *(_DWORD*)(a2 + 2428)) {
      if ((*(_BYTE*)(a2 + 2436) & 1) == 0) {
        goto LABEL_42;
      }
      {
        v31 = (*(int*)(a2 + 2432) + v30) / *(int*)(a2 + 2432) *
              *(int*)(a2 + 2432);
        __asm__ volatile("" ::"r"(v31));
      }
      *(_DWORD*)(a2 + 2428) = v31;
      v32 = SdkData_e89bd8;
      v33 = (*(__int64 (**)(__int64))SdkData_e89bd8)(8LL * v31);
      if (v33 == 0) {
        goto LABEL_42;
      }
      LODWORD(v34) = *(_DWORD*)(a2 + 2424);
      if ((_DWORD)v34 != 0) {
        v35 = 0;
        do {
          *(_QWORD*)(v33 + 8 * v35) =
              *(_QWORD*)(*(_QWORD*)(a2 + 2416) + 8 * v35);
          ++v35;
          {
            v34 = *(unsigned int*)(a2 + 2424);
            __asm__ volatile("" ::"r"(v34));
          }
        } while (v35 < v34);
      }
      if ((unsigned int)v34 < *(_DWORD*)(a2 + 2428)) {
        v34 = (unsigned int)v34;
        do {
          *(_QWORD*)(v33 + 8 * v34++) = 0;
        } while (v34 < *(unsigned int*)(a2 + 2428));
      }
      {
        v36 = *(_BYTE*)(a2 + 2436);
        __asm__ volatile("" ::"r"(v36));
      }
      if ((v36 & 2) != 0) {
        v37 = *(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v32);
        v38 = v33;
        v37(*(_QWORD*)(a2 + 2416));
        {
          v36 = *(_BYTE*)(a2 + 2436);
          __asm__ volatile("" ::"r"(v36));
        }
        v33 = v38;
      }
      *(_QWORD*)(a2 + 2416) = v33;
      *(_BYTE*)(a2 + 2436) = v36 | 2;
      {
        v30 = *(_DWORD*)(a2 + 2424);
        __asm__ volatile("" ::"r"(v30));
      }
    }
    else {
      {
        v33 = *(_QWORD*)(a2 + 2416);
        __asm__ volatile("" ::"r"(v33));
      }
    }
    *(_DWORD*)(a2 + 2424) = v30 + 1;
    *(_QWORD*)(v33 + 8LL * v30) = a1 + 32;
  LABEL_42:
    *(_DWORD*)(a1 + 48) |= 0x10000000u;
    nn_os_UnlockMutex_plt(a2 + 2440);
    return 1;
  }
  return result;
}

__int64 nn_65c5e0(__int64 a1, ...)
{
  __builtin_va_list va1;
  __builtin_va_list va;
  _BYTE v4[500];

  __builtin_va_start(va, a1);
  __builtin_va_copy(va1, va);
  return vsprintf_plt(v4, a1, (__int64)&va1);
}

__int64 nn_65ca10(__int64 a1, char* a2, ...)
{
  __builtin_va_list va1;
  __builtin_va_list va;

  __builtin_va_start(va, a2);
  __builtin_va_copy(va1, va);
  return SdkRoutine_65c900(a1, a2, (__int64)&va1);
}

__int64 nn_65d0a0(_OWORD* a1, __int64 a2)
{
  int v4;
  __int64 v5;
  bool v6;
  __int16 v7;
  __int16 v8;
  char v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v31;
  unsigned int v32;
  unsigned int v33;
  void* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char v38;
  void (*v39)(_QWORD);
  __int64 v40;

  *a1 = (__typeof__(*a1)){0};
  a1[1] = (__typeof__(a1[1])){0};
  a1[2] = (__typeof__(a1[2])){0};
  a1[3] = (__typeof__(a1[3])){0};
  a1[4] = (__typeof__(a1[4])){0};
  a1[5] = (__typeof__(a1[5])){0};
  a1[6] = (__typeof__(a1[6])){0};
  a1[7] = (__typeof__(a1[7])){0};
  a1[8] = (__typeof__(a1[8])){0};
  a1[9] = (__typeof__(a1[9])){0};
  a1[10] = (__typeof__(a1[10])){0};
  a1[11] = (__typeof__(a1[11])){0};
  a1[12] = (__typeof__(a1[12])){0};
  a1[13] = (__typeof__(a1[13])){0};
  a1[14] = (__typeof__(a1[14])){0};
  a1[15] = (__typeof__(a1[15])){0};
  {
    v4 = *(_DWORD*)(a2 + 4);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *(_QWORD*)(a2 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = (v4 & 1) == 0;
  v7 = 2 - (v4 & 1);
  if ((v4 & 4) != 0) {
    v6 = false;
    v7 = 4;
  }
  if ((v4 & 2) != 0) {
    v8 = 2;
  }
  else {
    v8 = v7;
  }
  v9 = (v4 & 2) != 0 || v6;
  if ((*(_DWORD*)&v9 & (*(unsigned __int8*)(v5 + 9) >> 7)) != 0) {
    v8 = 4;
  }
  if ((v4 & 8) != 0) {
    v10 = 8;
  }
  else {
    v10 = 32;
  }
  if ((v4 & 0x10) != 0) {
    v11 = 16;
  }
  else {
    v11 = v10;
  }
  if ((v4 & 0x20) != 0) {
    v12 = 32;
  }
  else {
    v12 = v11;
  }
  v13 = v4 & 0xFFC0;
  if ((v4 & 0x100) != 0) {
    v12 = 8;
  }
  if ((v4 & 0x200) != 0) {
    v14 = 1;
  }
  else {
    v14 = v8;
  }
  SdkRoutine_65d5c0((__int64)a1, v5, v14 | v13 | v12);
  if ((SdkRoutine_65d550((__int64)a1, a2) & 1) == 0) {
    SdkRoutine_65d380((__int64)a1);
    return 0;
  }
  nn_os_LockMutex_plt(v5 + 2440);
  if (*(_QWORD*)(v5 + 2416) == 0) {
    v21 = (*(__int64 (**)(__int64))SdkData_e89bd8)(256);
    *(_QWORD*)(v5 + 2416) = v21;
    if (v21 != 0) {
      v22 = 56;
    LABEL_29:
      *(_QWORD*)(v21 + v22 - 56) = 0;
      while (1) {
        {
          v23 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v23));
        }
        if (v23 != 0) {
          *(_QWORD*)(v23 + v22 - 48) = 0;
        }
        {
          v24 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v24));
        }
        if (v24 != 0) {
          *(_QWORD*)(v24 + v22 - 40) = 0;
        }
        {
          v25 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v25));
        }
        if (v25 != 0) {
          *(_QWORD*)(v25 + v22 - 32) = 0;
        }
        {
          v26 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v26));
        }
        if (v26 != 0) {
          *(_QWORD*)(v26 + v22 - 24) = 0;
        }
        {
          v27 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v27));
        }
        if (v27 != 0) {
          *(_QWORD*)(v27 + v22 - 16) = 0;
        }
        {
          v28 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v28));
        }
        if (v28 != 0) {
          *(_QWORD*)(v28 + v22 - 8) = 0;
        }
        {
          v29 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v29));
        }
        if (v29 != 0) {
          *(_QWORD*)(v29 + v22) = 0;
        }
        if (v22 == 248) {
          break;
        }
        {
          v21 = *(_QWORD*)(v5 + 2416);
          __asm__ volatile("" ::"r"(v21));
        }
        v22 += 64;
        if (v21 != 0) {
          goto LABEL_29;
        }
      }
      {
        v31 = *(_BYTE*)(v5 + 2436);
        __asm__ volatile("" ::"r"(v31));
      }
      *(_QWORD*)(v5 + 2428) = 0x2000000020LL;
      *(_BYTE*)(v5 + 2436) = v31 | 3;
    }
  }
  {
    v32 = *(_DWORD*)(v5 + 2424);
    __asm__ volatile("" ::"r"(v32));
  }
  if (v32 == *(_DWORD*)(v5 + 2428)) {
    if ((*(_BYTE*)(v5 + 2436) & 1) == 0) {
      goto LABEL_63;
    }
    {
      v33 =
          (*(int*)(v5 + 2432) + v32) / *(int*)(v5 + 2432) * *(int*)(v5 + 2432);
      __asm__ volatile("" ::"r"(v33));
    }
    *(_DWORD*)(v5 + 2428) = v33;
    v34 = SdkData_e89bd8;
    v35 = (*(__int64 (**)(__int64))SdkData_e89bd8)(8LL * v33);
    if (v35 == 0) {
      goto LABEL_63;
    }
    LODWORD(v36) = *(_DWORD*)(v5 + 2424);
    if ((_DWORD)v36 != 0) {
      v37 = 0;
      do {
        *(_QWORD*)(v35 + 8 * v37) = *(_QWORD*)(*(_QWORD*)(v5 + 2416) + 8 * v37);
        ++v37;
        {
          v36 = *(unsigned int*)(v5 + 2424);
          __asm__ volatile("" ::"r"(v36));
        }
      } while (v37 < v36);
    }
    if ((unsigned int)v36 < *(_DWORD*)(v5 + 2428)) {
      v36 = (unsigned int)v36;
      do {
        *(_QWORD*)(v35 + 8 * v36++) = 0;
      } while (v36 < *(unsigned int*)(v5 + 2428));
    }
    {
      v38 = *(_BYTE*)(v5 + 2436);
      __asm__ volatile("" ::"r"(v38));
    }
    if ((v38 & 2) != 0) {
      v39 = *(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v34);
      v40 = v35;
      v39(*(_QWORD*)(v5 + 2416));
      {
        v38 = *(_BYTE*)(v5 + 2436);
        __asm__ volatile("" ::"r"(v38));
      }
      v35 = v40;
    }
    *(_QWORD*)(v5 + 2416) = v35;
    *(_BYTE*)(v5 + 2436) = v38 | 2;
    {
      v32 = *(_DWORD*)(v5 + 2424);
      __asm__ volatile("" ::"r"(v32));
    }
  }
  else {
    {
      v35 = *(_QWORD*)(v5 + 2416);
      __asm__ volatile("" ::"r"(v35));
    }
  }
  *(_DWORD*)(v5 + 2424) = v32 + 1;
  *(_QWORD*)(v35 + 8LL * v32) = a1;
LABEL_63:
  nn_os_UnlockMutex_plt(v5 + 2440);
  return 1;
}

__int64 nn_65dbc0(__int64* a1, unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  {
    v2 = *a1;
    __asm__ volatile("" ::"r"(v2));
  }
  if (*a1 == 0) {
    return 0;
  }
  {
    v3 = *a2;
    __asm__ volatile("" ::"r"(v3));
  }
  while (1) {
    {
      v5 = *(_DWORD*)(v2 + 16);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v3 == v5) {
      break;
    }
    if (v3 >= v5) {
      v6 = 40;
    }
    else {
      v6 = 32;
    }
    {
      v2 = *(_QWORD*)(v2 + v6);
      __asm__ volatile("" ::"r"(v2));
    }
    if (v2 == 0) {
      return 0;
    }
  }
  {
    v8 = *(_QWORD*)(v2 + 32);
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = v2;
  if (v8 != 0) {
    {
      v10 = *(_QWORD*)(v2 + 40);
      __asm__ volatile("" ::"r"(v10));
    }
    if (v10 == 0) {
      v11 = (_QWORD*)(v2 + 24);
      {
        v12 = *(_QWORD*)(v2 + 24);
        __asm__ volatile("" ::"r"(v12));
      }
      v9 = v2;
      v13 = (_QWORD*)(v2 + 32);
    LABEL_16:
      *(_QWORD*)(v8 + 24) = v12;
      v14 = v12;
      {
        v12 = *(_QWORD*)(v9 + 24);
        __asm__ volatile("" ::"r"(v12));
      }
      if (v12 == 0) {
        goto LABEL_14;
      }
    LABEL_17:
      if (v9 == *(_QWORD*)(v12 + 32)) {
        *(_QWORD*)(v12 + 32) = v8;
      }
      else {
        *(_QWORD*)(v12 + 40) = v8;
      }
      goto LABEL_20;
    }
    do {
      v9 = v10;
      {
        v10 = *(_QWORD*)(v10 + 32);
        __asm__ volatile("" ::"r"(v10));
      }
    } while (v10 != 0);
  }
  v11 = (_QWORD*)(v9 + 24);
  {
    v12 = *(_QWORD*)(v9 + 24);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v8 = *(_QWORD*)(v9 + 40);
    __asm__ volatile("" ::"r"(v8));
  }
  v13 = (_QWORD*)(v9 + 32);
  if (v8 != 0) {
    goto LABEL_16;
  }
  {
    v14 = *(_QWORD*)(v9 + 24);
    __asm__ volatile("" ::"r"(v14));
  }
  if (v12 != 0) {
    goto LABEL_17;
  }
LABEL_14:
  *a1 = v8;
LABEL_20:
  {
    v15 = *(_BYTE*)(v9 + 20);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v9 != v2) {
    {
      v16 = *(_QWORD*)(v2 + 24);
      __asm__ volatile("" ::"r"(v16));
    }
    *v11 = v16;
    if (v16 != 0) {
      if (v2 == *(_QWORD*)(v16 + 32)) {
        *(_QWORD*)(v16 + 32) = v9;
      }
      else {
        *(_QWORD*)(v16 + 40) = v9;
      }
    }
    else {
      *a1 = v9;
    }
    *(_BYTE*)(v9 + 20) = *(_BYTE*)(v2 + 20);
    {
      v17 = *(_QWORD*)(v2 + 32);
      __asm__ volatile("" ::"r"(v17));
    }
    *v13 = v17;
    if (v17 != 0) {
      *(_QWORD*)(v17 + 24) = v9;
    }
    {
      v18 = *(_QWORD*)(v2 + 40);
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(v9 + 40) = v18;
    if (v18 != 0) {
      *(_QWORD*)(v18 + 24) = v9;
    }
    if (v14 == v2) {
      v14 = v9;
    }
  }
  if ((v15 & 1) == 0) {
    SdkRoutine_65e300(a1, v8, v14);
  }
  (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                         (_QWORD)SdkData_e89bd8))(v2);
  --*((_DWORD*)a1 + 2);
  return 1;
}

__int64 nn_65dd60(__int64 a1, __int64 a2, __int64 a3)
{
  int* v6;
  int* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 (**v16)(__int64);
  int v17;
  unsigned int v18;
  int v20;
  int* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;

  nn_os_LockMutex_plt(a1 + 128);
  {
    v6 = *(int**)(a1 + 64);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (int*)(a1 + 48);
  if (v6 == (int*)(a1 + 48)) {
  LABEL_8:
    v18 = 0;
    goto LABEL_9;
  }
  {
    v8 = *(unsigned int*)(a1 + 32);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = (a2 - *(_QWORD*)(a1 + 24)) / v8;
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = (a3 + v8 - 1) / v8;
  v11 = v10 + v9;
  while (1) {
    {
      v12 = *v6;
      __asm__ volatile("" ::"r"(v12));
    }
    if ((unsigned int)v9 >= *v6) {
      {
        v13 = v6[1];
        __asm__ volatile("" ::"r"(v13));
      }
      v14 = v13 + v12;
      if (v13 + v12 >= v11) {
        break;
      }
    }
    {
      v6 = *((int**)v6 + 2);
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 == v7) {
      goto LABEL_8;
    }
  }
  v15 = v9 - v12;
  v16 = (__int64 (**)(__int64))SdkData_e89bd8;
  if (v15 != 0) {
    v20 = v14 - v11;
    if (v14 != v11) {
      v6[1] = v15;
      {
        v21 = *((int**)v6 + 2);
        __asm__ volatile("" ::"r"(v21));
      }
      if (*(_QWORD*)(a1 + 40) != 0) {
        {
          v22 = (*v16)(32);
          __asm__ volatile("" ::"r"(v22));
        }
        if (v22 == 0) {
          goto LABEL_18;
        }
        v23 = (_QWORD*)(v22 + 16);
        *(_DWORD*)v22 = v11;
        *(_DWORD*)(v22 + 4) = v20;
        *(_QWORD*)(v22 + 8) = 0;
      }
      else {
        *(_DWORD*)(a1 + 80) = v11;
        *(_DWORD*)(a1 + 84) = v20;
        v22 = a1 + 80;
        *(_QWORD*)(a1 + 88) = 0;
        v23 = (_QWORD*)(a1 + 96);
      }
      *v23 = 0;
      v23[1] = 0;
      {
        v24 = *((_QWORD*)v21 + 3);
        __asm__ volatile("" ::"r"(v24));
      }
      *(_QWORD*)(v22 + 16) = v21;
      *(_QWORD*)(v22 + 24) = v24;
      *((_QWORD*)v21 + 3) = v22;
      *(_QWORD*)(*(_QWORD*)(v22 + 24) + 16LL) = v22;
      ++*(_QWORD*)(a1 + 40);
      goto LABEL_18;
    }
    v17 = v13 - v10;
  }
  else {
    v17 = v13 - v10;
    *v6 = v11;
  }
  v6[1] = v17;
  v21 = v6;
LABEL_18:
  if (v6[1] == 0 && v21 != v7) {
    {
      v25 = *((_QWORD*)v21 + 3);
      __asm__ volatile("" ::"r"(v25));
    }
    *(_QWORD*)(*((_QWORD*)v21 + 2) + 24LL) = v25;
    *(_QWORD*)(v25 + 16) = *((_QWORD*)v21 + 2);
    if (v21 != (int*)(a1 + 80)) {
      (*(void (**)(int*))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v16))(v21);
    }
    --*(_QWORD*)(a1 + 40);
  }
  {
    v26 = *(_QWORD*)(a1 + 112);
    __asm__ volatile("" ::"r"(v26));
  }
  {
    v27 = (*v16)(48);
    __asm__ volatile("" ::"r"(v27));
  }
  if (v27 != 0) {
    *(_DWORD*)v27 = v9;
    *(_DWORD*)(v27 + 4) = v10;
    *(_QWORD*)(v27 + 8) = 0;
    *(_OWORD*)(v27 + 16) = (__typeof__(*(_OWORD*)(v27 + 16))){0};
    *(_OWORD*)(v27 + 32) = (__typeof__(*(_OWORD*)(v27 + 32))){0};
    *(_DWORD*)(v27 + 16) = v9;
    if (v26 != 0) {
      do {
        {
          v28 = *(_DWORD*)(v26 + 16);
          __asm__ volatile("" ::"r"(v28));
        }
        if (v28 == (_DWORD)v9) {
          (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v16))(
              v27);
          v18 = 1;
          goto LABEL_9;
        }
        if (v28 <= (unsigned int)v9) {
          v29 = 40;
        }
        else {
          v29 = 32;
        }
        v30 = v26;
        {
          v26 = *(_QWORD*)(v26 + v29);
          __asm__ volatile("" ::"r"(v26));
        }
      } while (v26 != 0);
      *(_QWORD*)(v27 + 32) = 0;
      *(_QWORD*)(v27 + 40) = 0;
      *(_QWORD*)(v27 + 24) = v30;
      *(_BYTE*)(v27 + 20) = 1;
      if (*(_DWORD*)(v30 + 16) <= (unsigned int)v9) {
        *(_QWORD*)(v30 + 40) = v27;
      }
      else {
        *(_QWORD*)(v30 + 32) = v27;
      }
    }
    else {
      *(_QWORD*)(v27 + 24) = 0;
      *(_QWORD*)(v27 + 32) = 0;
      *(_QWORD*)(v27 + 40) = 0;
      *(_BYTE*)(v27 + 20) = 1;
      *(_QWORD*)(a1 + 112) = v27;
    }
    SdkRoutine_65e0a0((__int64*)(a1 + 112), v27);
    v18 = 1;
    ++*(_DWORD*)(a1 + 120);
  }
  else {
    v18 = 1;
  }
LABEL_9:
  nn_os_UnlockMutex_plt(a1 + 128);
  return v18;
}

__int64 nn_65e040(__int64 a1, __int64 a2)
{
  void* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v4 = SdkData_e89bd8;
  do {
    v5 = a2;
    {
      v6 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v6));
    }
    {
      a2 = *(_QWORD*)(a2 + 40);
      __asm__ volatile("" ::"r"(a2));
    }
    result = (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                       (_QWORD)v4))(v5);
    if (v6 != 0) {
      result = nn_65e040(a1, v6);
    }
  } while (a2 != 0);
  return result;
}

__int64 nn_663fa0(__int64 result)
{
  _QWORD* v1;
  _BYTE* v2;
  char v3;
  __int64 v4;
  __int64 i;
  void* v6;

  if (result != 0) {
    v1 = (_QWORD*)result;
    v2 = (_BYTE*)(result + 0x2000);
    SdkRoutine_66f7e0(result + 40);
    if (*(_QWORD*)(v1[2] + 7688LL) != 0) {
      SdkRoutine_6700e0((__int64)v1);
    }
    {
      v3 = v2[2560];
      __asm__ volatile("" ::"r"(v3));
    }
    if ((v3 & 2) != 0) {
      {
        v4 = v1[1036];
        __asm__ volatile("" ::"r"(v4));
      }
      v1[1035] = SdkData_e795c8;
      if (v4 != 0) {
        SdkRoutine_653cc0(v4, (__int64)(v1 + 1035));
        {
          v3 = v2[2560];
          __asm__ volatile("" ::"r"(v3));
        }
      }
    }
    if ((v3 & 1) != 0) {
      for (i = v1[1058]; i != 0; i = v1[1058]) {
        SdkRoutine_653cc0((__int64)(v1 + 1054), i);
      }
    }
    nn_668550((__int64)(v1 + 1061));
    nn_668550((__int64)(v1 + 1068));
    nn_668550((__int64)(v1 + 1075));
    nn_668550((__int64)(v1 + 1082));
    nn_668550((__int64)(v1 + 1089));
    nn_668550((__int64)(v1 + 1096));
    nn_668550((__int64)(v1 + 1103));
    nn_668550((__int64)(v1 + 1110));
    nn_668550((__int64)(v1 + 1117));
    nn_668550((__int64)(v1 + 1124));
    nn_668550((__int64)(v1 + 1131));
    nn_668550((__int64)(v1 + 1138));
    nn_668550((__int64)(v1 + 1145));
    nn_668550((__int64)(v1 + 1152));
    nn_668550((__int64)(v1 + 1159));
    nn_668550((__int64)(v1 + 1166));
    nvidia_64b010((__int64)(v1 + 1405));
    if (v2[64] == 1) {
      SdkRoutine_65d380((__int64)(v1 + 1000));
      if ((v2[80] & 1) == 0) {
        nn_6addf0(v1[1033]);
      }
      v2[64] = 0;
    }
    if (v2[2824] == 1) {
      SdkRoutine_65d380((__int64)(v1 + 1345));
      if ((v2[2840] & 1) == 0) {
        nn_6addf0(v1[1378]);
      }
      v2[2824] = 0;
    }
    v6 = SdkData_e89bd8;
    if (*(_QWORD*)(v1[2] + 7688LL) != 0) {
      (*(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                            (_QWORD)SdkData_e89bd8))(v1[982]);
    }
    {
      result = v1[1433];
      __asm__ volatile("" ::"r"(result));
    }
    if (result != 0) {
      SdkRoutine_65d380(result);
      return (*(__int64 (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                                      (_QWORD)v6))(v1[1433]);
    }
  }
  return result;
}

__int64 nn_668500(__int64 result)
{
  __int64 v1;

  if (*(_DWORD*)(result + 8) == 4) {
    v1 = result;
    result = (*(__int64 (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                                      (_QWORD)SdkData_e89bd8))(
        *(_QWORD*)(result + 16));
    *(_QWORD*)(v1 + 16) = 0;
  }
  return result;
}

__int64 nn_668550(__int64 result)
{
  __int64 v1;

  if (*(_DWORD*)(result + 8) == 4) {
    v1 = result;
    result = (*(__int64 (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                                      (_QWORD)SdkData_e89bd8))(
        *(_QWORD*)(result + 16));
    *(_QWORD*)(v1 + 16) = 0;
  }
  return result;
}

__int64 nn_669180(_QWORD* a1, __int64 a2, unsigned int a3, int* a4)
{
  void* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 result;

  a1[2] = 0;
  a1[3] = 0;
  *a1 = a2;
  a1[1] = 0;
  if (SdkRoutine_656170() != 0) {
    v7 = SdkData_e89bd8;
    v8 = (*(__int64 (**)(__int64))SdkData_e89bd8)(24);
    v9 = SdkRoutine_656170();
    v10 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v9 + 24LL))(
        v9, v8, a3);
    if (v10 == 3) {
      if (a4 != nullptr) {
        v11 = 3;
        goto LABEL_10;
      }
    LABEL_11:
      (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v7))(v8);
      return 0;
    }
    if (v10 == 1) {
      if (a4 != nullptr) {
        v11 = 1;
      LABEL_10:
        *a4 = v11;
        goto LABEL_11;
      }
      goto LABEL_11;
    }
    a1[2] = v8;
    *((_DWORD*)a1 + 2) = 4;
    if (a4 != nullptr) {
      *a4 = 0;
    }
    return 1;
  }
  else {
    result = 0;
    if (a4 != nullptr) {
      *a4 = 4;
    }
  }
  return result;
}

__int64 nn_66afc0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  void* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char v10;
  void (*v11)(__int64);
  __int64 v12;

  nn_os_LockMutex_plt((__int64)(a1 + 3));
  {
    v2 = *((unsigned int*)a1 + 2);
    __asm__ volatile("" ::"r"(v2));
  }
  if ((_DWORD)v2 != 0) {
    {
      v3 = *a1;
      __asm__ volatile("" ::"r"(v3));
    }
    v4 = 0;
    while (*(float*)(v3 + 4 * v4) != 0x0.0p+0f) {
      if (v2 == ++v4) {
        goto LABEL_7;
      }
    }
    if ((unsigned __int16)v4 != 0xFFFF) {
      *(_DWORD*)(v3 + 4LL * (unsigned __int16)v4) = 0;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ((_DWORD)v2 == *((_DWORD*)a1 + 3)) {
    if ((*((_BYTE*)a1 + 20) & 1) == 0 ||
        (v5 = (unsigned int)(*((_DWORD*)a1 + 4) + v2) / *((_DWORD*)a1 + 4) *
              *((_DWORD*)a1 + 4),
         *((_DWORD*)a1 + 3) = v5, v6 = SdkData_e89bd8,
         (v7 = (*(__int64 (**)(__int64))SdkData_e89bd8)(4LL * v5)) == 0)) {
      LODWORD(v4) = 0xFFFF;
      goto LABEL_23;
    }
    LODWORD(v8) = *((_DWORD*)a1 + 2);
    if ((_DWORD)v8 != 0) {
      v9 = 0;
      do {
        *(_DWORD*)(v7 + 4 * v9) = *(_DWORD*)(*a1 + 4 * v9);
        ++v9;
        {
          v8 = *((unsigned int*)a1 + 2);
          __asm__ volatile("" ::"r"(v8));
        }
      } while (v9 < v8);
    }
    if ((unsigned int)v8 < *((_DWORD*)a1 + 3)) {
      v8 = (unsigned int)v8;
      do {
        *(_DWORD*)(v7 + 4 * v8++) = 0;
      } while (v8 < *((unsigned int*)a1 + 3));
    }
    {
      v10 = *((_BYTE*)a1 + 20);
      __asm__ volatile("" ::"r"(v10));
    }
    if ((v10 & 2) != 0) {
      v11 = *(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6);
      v12 = v7;
      v11(*a1);
      {
        v10 = *((_BYTE*)a1 + 20);
        __asm__ volatile("" ::"r"(v10));
      }
      v7 = v12;
    }
    *a1 = v7;
    *((_BYTE*)a1 + 20) = v10 | 2;
    LODWORD(v2) = *((_DWORD*)a1 + 2);
  }
  else {
    {
      v7 = *a1;
      __asm__ volatile("" ::"r"(v7));
    }
  }
  *((_DWORD*)a1 + 2) = v2 + 1;
  *(_DWORD*)(v7 + 4LL * (unsigned int)v2) = 0;
  LODWORD(v4) = *((unsigned __int16*)a1 + 4) - 1;
LABEL_23:
  nn_os_UnlockMutex_plt((__int64)(a1 + 3));
  return (unsigned int)v4;
}

unsigned __int16* nn_66cae0(unsigned __int16* result)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  void* v11;
  void* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int16* v25;
  __int64 v26;
  int v27;
  __int128 v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  unsigned __int16* v38;
  __int64 v39;
  unsigned __int16* v40;
  __int64* v41;
  __int64 v42;
  int v43;
  int v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  _DWORD* v48;
  __int64 v49;
  __int64* v50;
  int v51;
  unsigned __int16* v52;
  bool v53;
  __int64 v54;
  bool v55;
  __int128 v56;
  __int128 v57;
  unsigned __int64 v58;
  struct {
    __int128 v59;
    __int128 v60;
    _DWORD v61[5];
    int v62;
    unsigned int v63;
  } v59_;
  __int64 v64;

  {
    v3 = *result;
    __asm__ volatile("" ::"r"(v3));
  }
  *(_DWORD*)result = 65537;
  if (v3 == 1) {
    {
      v4 = *((unsigned int*)result + 2);
      __asm__ volatile("" ::"r"(v4));
    }
    v5 = v64;
    switch (v4) {
    case 0LL: {
      v6 = *((_QWORD*)result + 2);
      __asm__ volatile("" ::"r"(v6));
    }
      {
        v7 = *(_QWORD*)v6;
        __asm__ volatile("" ::"r"(v7));
      }
      if (*(_BYTE*)(*(_QWORD*)v6 + 277LL) != 1) {
        goto LABEL_46;
      }
      {
        v8 = *(_QWORD*)(v7 + 7232);
        __asm__ volatile("" ::"r"(v8));
      }
      v9 = result;
      {
        v10 = *(_DWORD*)(v8 + 88);
        __asm__ volatile("" ::"r"(v10));
      }
      *(_QWORD*)(v6 + 48) = *(_QWORD*)(v8 + 56);
      *(_QWORD*)(v6 + 56) = 0;
      {
        v11 = *(void**)(v6 + 32);
        __asm__ volatile("" ::"r"(v11));
      }
      *(_DWORD*)(v6 + 40) = 0;
      *(_DWORD*)(v6 + 44) = v10;
      SdkData_1042258 = v11;
      v12 = SdkData_e89bd8;
      v13 = (*(__int64 (**)(__int64))SdkData_e89bd8)(256);
      if (v13 == 0) {
        goto LABEL_48;
      }
      *(_QWORD*)(v7 + 7240) = v13;
      v14 = v13;
      SdkRoutine_65d5c0(v13, v7, 1042);
      if ((SdkRoutine_65d570(v14, *(unsigned int*)(v6 + 12), 0, 0) & 1) != 0) {
        v15 = 0;
      }
      else {
        SdkRoutine_65d380(*(_QWORD*)(v7 + 7240));
        (*(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v12))(
            *(_QWORD*)(v7 + 7240));
        *(_QWORD*)(v7 + 7240) = 0;
      LABEL_48:
        v15 = 2;
      }
      result = v9;
      goto LABEL_50;
    case 1LL: {
      v39 = **((_QWORD**)result + 2);
      __asm__ volatile("" ::"r"(v39));
    }
      SdkData_1042258 = nullptr;
      if (v39 == 0 || *(_QWORD*)(v39 + 7240) == 0) {
        goto LABEL_45;
      }
      v40 = result;
      SdkRoutine_65d380(*(_QWORD*)(v39 + 7240));
      (*(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                            (_QWORD)SdkData_e89bd8))(*(_QWORD*)(v39 + 7240));
      result = v40;
      v15 = 0;
      *(_QWORD*)(v39 + 7240) = 0;
      goto LABEL_50;
    case 2LL: {
      v22 = *((_QWORD*)result + 2);
      __asm__ volatile("" ::"r"(v22));
    }
      v15 = 2;
      {
        v23 = *(_DWORD*)v22;
        __asm__ volatile("" ::"r"(v23));
      }
      if (*(int*)v22 > 1) {
        if (v23 == 2) {
        LABEL_36:
          {
            v50 = (__int64*)(*(_QWORD*)(v22 + 8) + 8LL);
            __asm__ volatile("" ::"r"(v50));
          }
          goto LABEL_42;
        }
        if (v23 != 3) {
          goto LABEL_50;
        }
        {
          v50 = *(__int64**)(v22 + 8);
          __asm__ volatile("" ::"r"(v50));
        }
      }
      else {
        if (v23 != 0) {
          if (v23 != 1) {
            goto LABEL_50;
          }
          goto LABEL_36;
        }
        v50 = (__int64*)(v22 + 8);
      }
    LABEL_42:
      {
        v54 = *v50;
        __asm__ volatile("" ::"r"(v54));
      }
      v15 = 0;
      *(_QWORD*)(v22 + 24) = v54;
      *(_DWORD*)(v22 + 16) = *(_DWORD*)(v54 + 96);
    LABEL_50:
      *((_DWORD*)result + 1) = v15;
      break;
    case 3LL: {
      v24 = *((_QWORD*)result + 2);
      __asm__ volatile("" ::"r"(v24));
    }
      v25 = result;
      {
        v26 = *(_QWORD*)v24;
        __asm__ volatile("" ::"r"(v26));
      }
      nn_66a6d0(*(_QWORD*)v24, (__int64)&v59_.v59, *(__int64**)(v24 + 8));
      {
        v27 = *(unsigned __int8*)(v26 + 84);
        __asm__ volatile("" ::"r"(v27));
      }
      DWORD2(v56) = v59_.v62;
      *(_QWORD*)&v56 = *(_QWORD*)&v59_.v61[3];
      SdkRoutine_6af430(&v56, v59_.v61[0], v59_.v61[1], v59_.v61[2], v27,
                        v59_.v63, (unsigned int*)&v56 + 3, (unsigned int*)&v57,
                        (unsigned int*)&v57 + 1);
      *((_QWORD*)&v57 + 1) = v59_.v59 - *(_QWORD*)(v26 + 96);
      v58 = SdkRoutine_6af4e0((__int64)&v56, HIDWORD(v56), v57, DWORD1(v57));
      v28 = v57;
      result = v25;
      v15 = 0;
      v29 = v56;
      {
        v30 = *(_QWORD*)(v26 + 16);
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v31 = *((_QWORD*)&v57 + 1) +
              ((__int64)(*(_QWORD*)(v26 + 24) << 16) >> 16);
        __asm__ volatile("" ::"r"(v31));
      }
      {
        v32 = *(_DWORD*)(v30 + 88);
        __asm__ volatile("" ::"r"(v32));
      }
      {
        v33 = *(_QWORD*)(v30 + 56);
        __asm__ volatile("" ::"r"(v33));
      }
      *(_DWORD*)(v24 + 760) = 0;
      *(_QWORD*)(v24 + 776) = 0;
      *(_QWORD*)(v24 + 32) = v31;
      *(_DWORD*)(v24 + 764) = v32;
      *(_QWORD*)(v24 + 768) = v33;
      v34 = v58;
      *(_DWORD*)(v24 + 776) = *(unsigned __int8*)(v26 + 89);
      *(_DWORD*)(v24 + 40) = *(_QWORD*)(v26 + 32);
      *(_DWORD*)(v24 + 44) = *(unsigned __int16*)(v26 + 36);
      *(_DWORD*)(v24 + 48) = *(unsigned __int16*)(v26 + 38);
      *(_DWORD*)(v24 + 752) = (int)*(_QWORD*)(v26 + 40) >> 25;
      *(_DWORD*)(v24 + 68) = (int)(*(_QWORD*)(v26 + 24) >> 24) >> 24;
      {
        v35 = *(_QWORD*)(v26 + 40);
        __asm__ volatile("" ::"r"(v35));
      }
      *(_QWORD*)(v24 + 744) = v34;
      *(_DWORD*)(v24 + 756) = (int)((_DWORD)v35 << 7) >> 23;
      *(_OWORD*)(v24 + 712) = v29;
      *(_OWORD*)(v24 + 728) = v28;
      goto LABEL_50;
    case 4LL: {
      v16 = *((__int64**)result + 2);
      __asm__ volatile("" ::"r"(v16));
    }
      v15 = 0;
      {
        v17 = *v16;
        __asm__ volatile("" ::"r"(v17));
      }
      v16[1] = *(_QWORD*)(*v16 + 32);
      v16[3] = *(_QWORD*)(v17 + 24);
      {
        v18 = *(_QWORD*)(v17 + 16);
        __asm__ volatile("" ::"r"(v18));
      }
      {
        v19 = *(_DWORD*)(v18 + 88);
        __asm__ volatile("" ::"r"(v19));
      }
      {
        v20 = *(_QWORD*)(v18 + 56);
        __asm__ volatile("" ::"r"(v20));
      }
      *((_DWORD*)v16 + 8) = 0;
      *((_DWORD*)v16 + 9) = v19;
      v16[5] = v20;
      v16[6] = 0;
      v16[2] = *(_QWORD*)(v17 + 16);
      goto LABEL_50;
    case 5LL: {
      v41 = *((__int64**)result + 2);
      __asm__ volatile("" ::"r"(v41));
    }
      {
        v42 = *v41;
        __asm__ volatile("" ::"r"(v42));
      }
      {
        v43 = *(_DWORD*)(*v41 + 8);
        __asm__ volatile("" ::"r"(v43));
      }
      if (v43 != 1) {
        if (v43 == 3) {
          v44 = 1;
        }
        else {
          if (v43 != 2) {
            goto LABEL_46;
          }
          v44 = 0;
        }
        *((_DWORD*)v41 + 5) = v44;
      }
      v15 = 0;
      v41[1] = 16LL * *(unsigned int*)(v42 + 16);
      *((_DWORD*)v41 + 4) = *(_DWORD*)(v42 + 20);
      goto LABEL_50;
    case 6LL: {
      v45 = *((__int64**)result + 2);
      __asm__ volatile("" ::"r"(v45));
    }
      v15 = 0;
      {
        v46 = *v45;
        __asm__ volatile("" ::"r"(v46));
      }
      {
        v47 = v45[1];
        __asm__ volatile("" ::"r"(v47));
      }
      LODWORD(v45) = *((_DWORD*)v45 + 4);
      *(_DWORD*)(v46 + 8) = 3;
      *(_QWORD*)(v46 + 16) = v47;
      *(_DWORD*)(v46 + 24) = (_DWORD)v45;
      goto LABEL_50;
    case 7LL: {
      v36 = *((__int64**)result + 2);
      __asm__ volatile("" ::"r"(v36));
    }
      {
        v37 = *v36;
        __asm__ volatile("" ::"r"(v37));
      }
      if ((*(_BYTE*)(*v36 + 356) & 8) == 0) {
        goto LABEL_46;
      }
      v38 = result;
      v59_.v60 = (__typeof__(v59_.v60)){0};
      *(_OWORD*)v59_.v61 = (__typeof__(*(_OWORD*)v59_.v61)){0};
      v59_.v59 = (__typeof__(v59_.v59)){0};
      *((_QWORD*)&v59_.v60 + 1) = v36[4];
      if (SdkRoutine_66f960(v37 + 40, (__int64)&v59_.v59)) {
        v15 = 0;
        result = v38;
        *((_DWORD*)v36 + 2) = v59_.v59;
        v36[2] = *((_QWORD*)&v59_.v59 + 1);
        v36[3] = v59_.v60;
        *(_OWORD*)(v36 + 5) = *(_OWORD*)v59_.v61;
      }
      else {
        v15 = 2;
        result = v38;
      }
      goto LABEL_50;
    case 8LL: {
      v48 = *((_DWORD**)result + 2);
      __asm__ volatile("" ::"r"(v48));
    }
      {
        v49 = *(_QWORD*)v48;
        __asm__ volatile("" ::"r"(v49));
      }
      if ((*(_BYTE*)(*(_QWORD*)v48 + 356LL) & 8) == 0) {
        v15 = 3;
        goto LABEL_50;
      }
      {
        v51 = v48[3];
        __asm__ volatile("" ::"r"(v51));
      }
      if (v51 == 1) {
        v52 = result;
        v53 = SdkRoutine_664d80(v49, 1);
      }
      else {
        if (v51 != 0) {
          goto LABEL_46;
        }
        v52 = result;
        v53 = SdkRoutine_664670(v49, 1);
      }
      v55 = v53;
      result = v52;
      if (v55) {
      LABEL_45:
        v15 = 0;
        goto LABEL_50;
      }
    LABEL_46:
      v15 = 2;
      goto LABEL_50;
    case 9LL: {
      v21 = *((_BYTE**)result + 2);
      __asm__ volatile("" ::"r"(v21));
    }
      if (*(_QWORD*)v21 == 0) {
        goto LABEL_46;
      }
      v15 = 0;
      v21[8] =
          (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v21 + 16LL) + 8LL) & 0x4000) != 0;
      goto LABEL_50;
    default:
      v64 = v5;
      *((_DWORD*)result + 1) = 4;
      return result;
    }
  }
  else {
    *((_DWORD*)result + 1) = 1;
  }
  return result;
}

void nn_698610(__int64 a1, __int64 a2, __int64 a3)
{
  int v5;
  float v6;
  unsigned int v7;
  int32x2_t v8;
  int v9;
  int32x4_t v10;
  int32x4_t v11;
  int v12;
  int16x4_t v13;
  unsigned int v14;
  unsigned int v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  float v23;
  float v24;
  unsigned int v25;
  int v26;
  unsigned __int8 v27;
  float v28;
  unsigned __int8 v29;
  float v30;
  unsigned __int8 v31;
  int v32;
  int v33;
  float v34;
  float v35;
  float v36;
  int v37;
  int v38;
  unsigned int v39;

  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LANES64(v8).n64_u32[1] = 0;
  *(_OWORD*)a3 = (__typeof__(*(_OWORD*)a3)){0};
  *(_OWORD*)(a3 + 16) = (__typeof__(*(_OWORD*)(a3 + 16))){0};
  v5 = SdkData_bb7008[(__int64)((unsigned __int64)*(unsigned int*)(a2 + 44)
                                << 60) >>
                      60] &
           7 |
       (8 * (SdkData_bb7008[(char)*(_DWORD*)(a2 + 44) >> 4] & 7)) & 0x3F |
       ((SdkData_bb7008[(int)(*(_DWORD*)(a2 + 44) << 20) >> 28] & 7) << 6);
  *(_DWORD*)a3 = v5;
  v6 = 0x1.e000000000000p+3f;
  v7 = vcvts_n_u32_f32(
           fminf(fmaxf(*(float*)(a2 + 8), 0x0.0p+0f), 0x1.e000000000000p+3f),
           8u) &
       0xFFF;
  *(_DWORD*)(a3 + 8) = v7;
  LANES64(v8).n64_f32[0] = fmaxf(*(float*)(a2 + 12), 0x0.0p+0f);
  if (*(float*)(a2 + 8) > LANES64(v8).n64_f32[0]) {
    LANES64(v8).n64_u32[0] = *(_DWORD*)(a2 + 8);
  }
  *(_DWORD*)(a3 + 8) =
      v7 & 0xFF000FFF |
      ((vcvts_n_u32_f32(fminf(LANES64(v8).n64_f32[0], 0x1.e000000000000p+3f),
                        8u) &
        0xFFF)
       << 12);
  v9 = (((*(_DWORD*)(a2 + 44) & 0x100000) != 0) |
        (16 * (((int)(*(_DWORD*)(a2 + 44) << 12) >> 28) & 1)) |
        (((32 * ((unsigned __int8)((int)(*(_DWORD*)(a2 + 44) << 12) >> 28) +
                 ((*(_DWORD*)(a2 + 44) & 0x80000) != 0))) &
          0xC0) +
         64) &
            0xC0) +
       17;
  *(_DWORD*)(a3 + 4) = v9;
  LANES64(v8).n64_u32[0] = *(_DWORD*)(a2 + 24);
  if (LANES64(v8).n64_f32[0] <= 0x0.0p+0f) {
    v15 = 0;
  }
  else {
    v10 = vdupq_lane_s32(v8, 0);
    v11 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb1650), v10);
    if ((vmaxvq_u32(v11) & 1) != 0) {
      v12 = 0;
      LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v11)).n64_u64[0];
      v14 = 1;
    }
    else {
      v16 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb4ed0), v10);
      if ((vmaxvq_u32(v16) & 1) != 0) {
        LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v16)).n64_u64[0];
        v14 = 1;
        v12 = 4;
      }
      else {
        v17 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb2dd0), v10);
        if ((vmaxvq_u32(v17) & 1) != 0) {
          LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v17)).n64_u64[0];
          v14 = 1;
          v12 = 8;
        }
        else {
          v18 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb44e0), v10);
          if ((vmaxvq_u32(v18) & 1) != 0) {
            LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v18)).n64_u64[0];
            v14 = 1;
            v12 = 12;
          }
          else {
            v19 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb1e70), v10);
            if ((vmaxvq_u32(v19) & 1) != 0) {
              LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v19)).n64_u64[0];
              v14 = 1;
              v12 = 16;
            }
            else {
              v20 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb13e0), v10);
              if ((vmaxvq_u32(v20) & 1) != 0) {
                LANES64(v13).n64_u64[0] = LANES64_OF(vmovn_s32(v20)).n64_u64[0];
                v14 = 1;
                v12 = 20;
              }
              else {
                v21 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb42e0), v10);
                if ((vmaxvq_u32(v21) & 1) != 0) {
                  LANES64(v13).n64_u64[0] =
                      LANES64_OF(vmovn_s32(v21)).n64_u64[0];
                  v14 = 1;
                  v12 = 24;
                }
                else {
                  v22 = vcgeq_f32(COERCE_AS(float32x4_t, SdkData_bb1820), v10);
                  LANES64(v13).n64_u64[0] =
                      LANES64_OF(vmovn_s32(v22)).n64_u64[0];
                  v14 = vmaxvq_u32(v22) & 1;
                  v12 = 28;
                }
              }
            }
          }
        }
      }
    }
    if (v14 != 0) {
      v15 = v12 +
            (unsigned __int8)(4 - vmaxv_u16(vand_s8(
                                      vcltz_s16(vshl_n_s16(v13, 0xFu)),
                                      COERCE_AS(int8x8_t, 0x1000200030004LL))));
    }
    else {
      v15 = 32;
    }
    if (v15 >= 0x1F) {
      v15 = 31;
    }
  }
  {
    v23 = SdkData_c92628[v15];
    __asm__ volatile("" ::"w"(v23));
  }
  {
    v24 = v23 + (float)(*(float*)(a2 + 16) +
                        (float)((float)*(unsigned int*)(a1 + 7408) *
                                0x1.0000000000000p-4f));
    __asm__ volatile("" ::"w"(v24));
  }
  if (v24 <= 0x1.e000000000000p+3f) {
    v6 = -0x1.e000000000000p+3f;
    if (v24 >= -0x1.e000000000000p+3f) {
      v6 = v23 + (float)(*(float*)(a2 + 16) +
                         (float)((float)*(unsigned int*)(a1 + 7408) *
                                 0x1.0000000000000p-4f));
      __asm__ volatile("" ::"w"(v6));
    }
  }
  v25 = (v15 << 26) | ((vcvtd_n_s32_f64(v6, 8u) & 0x1FFF) << 12) | v9;
  *(_DWORD*)(a3 + 4) = v25;
  *(_DWORD*)(a3 + 4) = *(_DWORD*)(a1 + 7412) & 0x100 | v25 | 0x200;
  *(_DWORD*)(a3 + 16) = *(_DWORD*)(a2 + 28);
  *(_DWORD*)(a3 + 20) = *(_DWORD*)(a2 + 32);
  *(_DWORD*)(a3 + 24) = *(_DWORD*)(a2 + 36);
  *(_DWORD*)(a3 + 28) = *(_DWORD*)(a2 + 40);
  {
    v26 = *(_DWORD*)(a2 + 44);
    __asm__ volatile("" ::"r"(v26));
  }
  if ((v26 & 0x3000000) != 0) {
    *(_DWORD*)a3 = v5 | (HIWORD(v26) + 7168) & 0x1C00 | 0x200;
  }
  nn_65ce90(*(float*)(a2 + 28)),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v28 = (float)v27 / 0x1.fe00000000000p+7f;
  nn_65ce90(*(float*)(a2 + 32)),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v30 = (float)v29 / 0x1.fe00000000000p+7f;
  nn_65ce90(*(float*)(a2 + 36)),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v32 = *(_DWORD*)a3 | 0x26000;
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v33 = *(_DWORD*)(a3 + 8);
    __asm__ volatile("" ::"r"(v33));
  }
  *(_DWORD*)a3 = v32;
  v34 = (float)(v30 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f;
  *(_DWORD*)(a3 + 8) =
      v33 |
      (COERCE_INT((float)(v28 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f)
       << 24);
  *(_DWORD*)(a3 + 12) =
      (LOBYTE(v34) << 12) & 0xFFFFF |
      ((unsigned __int8)COERCE_UNSIGNED_INT(
           (float)((float)((float)v31 / 0x1.fe00000000000p+7f) *
                   0x1.fe00000000000p+7f) +
           0x1.8000000000000p+23f)
       << 20);
  {
    v35 = *(float*)(a2 + 20);
    __asm__ volatile("" ::"w"(v35));
  }
  if (v35 <= 0x1.0000000000000p+0f) {
    v37 = 0;
  }
  else if (v35 >= 0x1.0000000000000p+4f) {
    v37 = 7340032;
  }
  else {
    v36 = v35 + 0x1.8000000000000p+23f;
    {
      v37 = (SdkData_c926a8[LOWORD(v36) - 1] & 7) << 20;
      __asm__ volatile("" ::"r"(v37));
    }
  }
  *(_DWORD*)a3 = v37 | v32;
  {
    v38 = (__int16)*(_DWORD*)(a2 + 44) >> 12;
    __asm__ volatile("" ::"r"(v38));
  }
  {
    v39 = *(_DWORD*)(a3 + 4) & 0xFFFFF3FF;
    __asm__ volatile("" ::"r"(v39));
  }
  if (v38 == 2) {
    v39 |= 0x800u;
  }
  else if (v38 == 1) {
    v39 |= 0x400u;
  }
  *(_DWORD*)(a3 + 4) = v39;
}

__int64 nn_69f620(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  __int64 v8;
  unsigned int v9;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = SdkData_e89ec0;
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  if (a1 != 0) {
    {
      v5 = *(_QWORD*)(a1 + 48);
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = *(_QWORD*)(a1 + 104);
      __asm__ volatile("" ::"r"(v6));
    }
  }
  else {
    v5 = 0;
    v6 = 0;
  }
  result = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64)) &
            (*(_BYTE(*)[4])0x20LL)[(_QWORD)v4])(a2, v5, v6),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result != 0) {
    v9 = result;
    (*(void (**)(__int64, __int64))((char*)((__int64*)0x28LL) + (_QWORD)v4))(
        *(_QWORD*)(a2 + 24), v8),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a2 + 24) = 0;
    return v9;
  }
  return result;
}

__int64 nn_69f6b0(__int64 a1)
{
  void* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  __int64 v8;
  void (*v9)(__int64, __int64);
  unsigned int v10;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = SdkData_e89ec0;
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v3 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v3));
  }
  *(_QWORD*)(a1 + 24) = 0;
  if (v3 == 0) {
    if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) + (_QWORD)v2))() &
         1) != 0) {
      goto LABEL_8;
    }
    return 10;
  }
  if (*(_DWORD*)v3 != 2) {
    return 5;
  }
  {
    v4 = *(_QWORD*)(v3 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) + (_QWORD)v2))() & 1) ==
      0) {
    return 10;
  }
  if (v4 != 0) {
    {
      v5 = *(_QWORD*)(v4 + 48);
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = *(_QWORD*)(v4 + 104);
      __asm__ volatile("" ::"r"(v6));
    }
    goto LABEL_9;
  }
LABEL_8:
  v5 = 0;
  v6 = 0;
LABEL_9:
  result = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64)) &
            (*(_BYTE(*)[4])0x20LL)[(_QWORD)v2])(a1, v5, v6),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result != 0) {
    v9 = *(void (**)(__int64, __int64))((char*)((__int64*)0x28LL) + (_QWORD)v2),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = result;
    v9(*(_QWORD*)(a1 + 24), v8),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 24) = 0;
    return v10;
  }
  return result;
}

__int64 nn_69f780(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  __int64 v8;
  void (*v9)(__int64, __int64);
  unsigned int v10;
  struct {
    __int64 v11;
    int v12;
    char gap12_[4];
    __int64 v13;
    __int64 v14;
  } v11_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  {
    v1 = *a1;
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = a1[2];
    __asm__ volatile("" ::"r"(v2));
  }
  v11_.v12 = *((_DWORD*)a1 + 2);
  v11_.v13 = v2;
  v11_.v11 = v1;
  v3 = SdkData_e89ec0;
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  v11_.v14 = 0;
  if (v2 == 0) {
    if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) + (_QWORD)v3))() &
         1) != 0) {
      goto LABEL_8;
    }
    return 10;
  }
  if (*(_DWORD*)v2 != 2) {
    return 5;
  }
  {
    v4 = *(_QWORD*)(v2 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) + (_QWORD)v3))() & 1) ==
      0) {
    return 10;
  }
  if (v4 != 0) {
    {
      v5 = *(_QWORD*)(v4 + 48);
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = *(_QWORD*)(v4 + 104);
      __asm__ volatile("" ::"r"(v6));
    }
    goto LABEL_9;
  }
LABEL_8:
  v5 = 0;
  v6 = 0;
LABEL_9:
  result = (*(__int64 (**)(__int64, unsigned __int64, unsigned __int64)) &
            (*(_BYTE(*)[4])0x20LL)[(_QWORD)v3])((__int64)&v11_.v11, v5, v6),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result != 0) {
    v9 = *(void (**)(__int64, __int64))((char*)((__int64*)0x28LL) + (_QWORD)v3),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = result;
    v9(v11_.v14, v8),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return v10;
  }
  return result;
}

__int64 nn_69fd40(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 result;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    return 5;
  }
  {
    v3 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 >= 2 && v3 != 0xFFFF) {
    return 5;
  }
  v5 = SdkRoutine_6a0b80(v2);
  if (v5 == 0) {
    return 5;
  }
  v6 = (_QWORD*)v5;
  v7 = (_QWORD*)SdkRoutine_6a0860();
  *v7 = *(_QWORD*)(v6[2] + 2528LL);
  v7[1] = v6[6];
  v7[2] = v6[13];
  if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt() != 0 ||
      (unsigned int)NvRmGpuRegOpsSessionSetTimeoutMode_plt(v7[3], 1) != 0 ||
      (_DWORD)(result = NvRmGpuRegOpsSessionSetSmExceptionMask_plt(v7[3],
                                                                   v3)) != 0) {
    SdkRoutine_6a0870((__int64)v7);
    return 7;
  }
  else {
    *(_QWORD*)(a1 + 24) = v7;
  }
  return result;
}

__int64 nn_69fe20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  unsigned int v6;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  {
    v2 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    return 5;
  }
  {
    v3 = *(_QWORD*)(v2 + 24);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return 5;
  }
  v4 = NvRmGpuRegOpsSessionSetSmExceptionMask_plt(v3, 0xFFFF);
  v5 = NvRmGpuRegOpsSessionSetTimeoutMode_plt(
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL), 0);
  if (((unsigned int)NvRmGpuRegOpsSessionClose_plt(
           *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL)) |
       v5 | v4) != 0) {
    v6 = 7;
  }
  else {
    v6 = 0;
  }
  SdkRoutine_6a0870(v2);
  return v6;
}

__int64 nn_69fee0(_QWORD* a1)
{
  int* v2;
  __int64 v3;
  int* v4;
  int* v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = (int*)a1[1];
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == nullptr) {
    return 5;
  }
  {
    v3 = a1[2];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return 5;
  }
  if (*(_QWORD*)(v3 + 24) == 0) {
    return 5;
  }
  v4 = SdkRoutine_6a0b30(v2);
  if (v4 == nullptr) {
    return 5;
  }
  v5 = v4;
  nn_os_LockMutex_plt((__int64)(v4 + 610));
  {
    v6 = v5[606];
    __asm__ volatile("" ::"r"(v6));
  }
  if (v6 != 0) {
    {
      v7 = a1[3];
      __asm__ volatile("" ::"r"(v7));
    }
    v8 = 0;
    while (1) {
      {
        v9 = *(_QWORD*)(*((_QWORD*)v5 + 302) + 8LL * v8);
        __asm__ volatile("" ::"r"(v9));
      }
      {
        v10 = *(_QWORD*)(v9 + 24);
        __asm__ volatile("" ::"r"(v10));
      }
      if (v7 >= v10 && v7 - v10 < *(_QWORD*)(v9 + 56)) {
        break;
      }
      {
        v11 = *(_QWORD*)(v9 + 40);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v7 >= v11 && v7 - v11 < *(_QWORD*)(v9 + 56)) {
        break;
      }
      if (v6 == ++v8) {
        goto LABEL_19;
      }
    }
    if ((unsigned int)NvRmGpuRegOpsSessionReadFB_plt(
            *(_QWORD*)(a1[2] + 24LL), *(unsigned int*)(v9 + 88)) != 0) {
      v12 = 7;
    }
    else {
      v12 = 0;
    }
  }
  else {
  LABEL_19:
    v12 = 11;
  }
  nn_os_UnlockMutex_plt((__int64)(v5 + 610));
  return v12;
}

__int64 nn_6a0000(_QWORD* a1)
{
  int* v2;
  __int64 v3;
  int* v4;
  int* v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = (int*)a1[1];
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == nullptr) {
    return 5;
  }
  {
    v3 = a1[2];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return 5;
  }
  if (*(_QWORD*)(v3 + 24) == 0) {
    return 5;
  }
  v4 = SdkRoutine_6a0b30(v2);
  if (v4 == nullptr) {
    return 5;
  }
  v5 = v4;
  nn_os_LockMutex_plt((__int64)(v4 + 610));
  {
    v6 = v5[606];
    __asm__ volatile("" ::"r"(v6));
  }
  if (v6 != 0) {
    {
      v7 = a1[3];
      __asm__ volatile("" ::"r"(v7));
    }
    v8 = 0;
    while (1) {
      {
        v9 = *(_QWORD*)(*((_QWORD*)v5 + 302) + 8LL * v8);
        __asm__ volatile("" ::"r"(v9));
      }
      {
        v10 = *(_QWORD*)(v9 + 24);
        __asm__ volatile("" ::"r"(v10));
      }
      if (v7 >= v10 && v7 - v10 < *(_QWORD*)(v9 + 56)) {
        break;
      }
      {
        v11 = *(_QWORD*)(v9 + 40);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v7 >= v11 && v7 - v11 < *(_QWORD*)(v9 + 56)) {
        break;
      }
      if (v6 == ++v8) {
        goto LABEL_19;
      }
    }
    if ((unsigned int)NvRmGpuRegOpsSessionWriteFB_plt(
            *(_QWORD*)(a1[2] + 24LL), *(unsigned int*)(v9 + 88)) != 0) {
      v12 = 7;
    }
    else {
      v12 = 0;
    }
  }
  else {
  LABEL_19:
    v12 = 11;
  }
  nn_os_UnlockMutex_plt((__int64)(v5 + 610));
  return v12;
}

__int64 nn_6a0120(__int64 a1)
{
  int* v2;
  __int64 v3;
  int* v4;
  int* v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  unsigned int v14;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = *(int**)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == nullptr) {
    return 5;
  }
  {
    v3 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return 5;
  }
  if (*(_QWORD*)(v3 + 24) == 0) {
    return 5;
  }
  v4 = SdkRoutine_6a0b30(v2);
  if (v4 == nullptr) {
    return 5;
  }
  v5 = v4;
  nn_os_LockMutex_plt((__int64)(v4 + 610));
  if (*(_DWORD*)(a1 + 28) == 0) {
  LABEL_21:
    v14 = 0;
    goto LABEL_26;
  }
  v6 = 0;
  while (1) {
    {
      v7 = v5[606];
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 == 0) {
    LABEL_25:
      v14 = 11;
      goto LABEL_26;
    }
    v8 = 0;
    {
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24 * v6 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    while (1) {
      {
        v10 = *(_QWORD*)(*((_QWORD*)v5 + 302) + 8LL * v8);
        __asm__ volatile("" ::"r"(v10));
      }
      {
        v11 = *(_QWORD*)(v10 + 24);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v9 >= v11 && v9 - v11 < *(_QWORD*)(v10 + 56)) {
        break;
      }
      {
        v12 = *(_QWORD*)(v10 + 40);
        __asm__ volatile("" ::"r"(v12));
      }
      if (v9 >= v12 && v9 - v12 < *(_QWORD*)(v10 + 56)) {
        break;
      }
      if (v7 == ++v8) {
        goto LABEL_25;
      }
    }
    {
      v13 = *(_DWORD*)(a1 + 24);
      __asm__ volatile("" ::"r"(v13));
    }
    if (v13 != 2) {
      break;
    }
    if ((unsigned int)NvRmGpuRegOpsSessionWriteFB_plt(
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL),
            *(unsigned int*)(v10 + 88)) != 0) {
    LABEL_27:
      v14 = 7;
      goto LABEL_26;
    }
  LABEL_20:
    if (++v6 >= (unsigned __int64)*(unsigned int*)(a1 + 28)) {
      goto LABEL_21;
    }
  }
  if (v13 == 1) {
    if ((unsigned int)NvRmGpuRegOpsSessionReadFB_plt(
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL),
            *(unsigned int*)(v10 + 88)) != 0) {
      goto LABEL_27;
    }
    goto LABEL_20;
  }
  v14 = 5;
LABEL_26:
  nn_os_UnlockMutex_plt((__int64)(v5 + 610));
  return v14;
}

__int64 nn_6a02a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 result;
  _BOOL4 v6;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    return 5;
  }
  v3 = SdkRoutine_6a0b80(v2);
  if (v3 == 0) {
    return 5;
  }
  {
    v4 = *(_DWORD*)(v3 + 356);
    __asm__ volatile("" ::"r"(v4));
  }
  result = 0;
  v6 = (v4 & 0x14) == 0 || (v4 & 8) != 0;
  *(_DWORD*)(a1 + 16) = v6;
  return result;
}

__int64 nn_6a0320(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  if (a1[1] == 0) {
    return 5;
  }
  {
    v2 = (_QWORD*)a1[2];
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == nullptr || v2[3] == 0) {
    return 5;
  }
  {
    v3 = v2[2];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 != 0) {
    if ((unsigned int)NvRmGpuTaskSchedulingGroupEventIdControl_plt(
            v3, 1, 2, v2 + 4) != 0) {
      return 7;
    }
  }
  else if ((unsigned int)NvRmGpuChannelEventIdControl_plt(v2[1], 1, 2,
                                                          v2 + 4) != 0) {
    return 7;
  }
  a1[3] = *(_QWORD*)(a1[2] + 32LL);
  return 0;
}

__int64 nn_6a03d0(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  {
    v2 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0 || *(_QWORD*)(v2 + 24) == 0 || *(_DWORD*)(a1 + 24) > 1u) {
    return 5;
  }
  if ((unsigned int)NvRmGpuRegOpsSessionSetMmuDebugMode_plt() != 0) {
    return 7;
  }
  return 0;
}

__int64 nn_6a0460(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (((*(__int64 (**)(void))((char*)((__int64*)0x30LL) +
                              (_QWORD)SdkData_e89ec0))() &
       1) == 0) {
    return 10;
  }
  {
    v2 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    return 5;
  }
  {
    v3 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 0) {
    return 5;
  }
  if (*(_QWORD*)(v3 + 24) == 0) {
    return 5;
  }
  v4 = SdkRoutine_6a0b80(v2);
  if (v4 == 0) {
    return 5;
  }
  v5 = v4;
  SdkRoutine_6a0500(v4, 4300460, *(_DWORD*)(a1 + 28), *(_DWORD*)(a1 + 32));
  SdkRoutine_6a0500(v5, 4300456, *(_DWORD*)(a1 + 36), *(_DWORD*)(a1 + 40));
  return 0;
}

__int64 nn_6a2bc0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t v14;
  unsigned __int32* v15;
  __int64 v16;
  int32x4_t v17;
  int32x4_t v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  __int64 v23;
  int* v24;
  int v25;

  result = 0;
  if (a1 != 0 && a4 != 0) {
    {
      v6 = *(_QWORD*)(a1 + 152);
      __asm__ volatile("" ::"r"(v6));
    }
    if (v6 != 0 && (v7 = *(_QWORD*)(v6 + 72)) != 0 &&
        (v8 = *(_QWORD*)(v6 + 88)) != 0 && a2 < *(_DWORD*)(v6 + 64)) {
      if (a2 != 0) {
        if (a2 >= 9) {
          v11 = (__typeof__(v11)){0};
          LANES128(v12).n128_u64[0] = 0x700000007LL;
          LANES128(v12).n128_u64[1] = 0x700000007LL;
          v13 = a2 & 7;
          if ((a2 & 7) == 0) {
            v13 = 8;
          }
          v14 = (__typeof__(v14)){0};
          v15 = (unsigned __int32*)(v7 + 160);
          v9 = a2 - v13;
          v16 = v9;
          do {
            LANES128(v17).n128_u32[0] = *(v15 - 40);
            LANES128(v18).n128_u32[0] = *v15;
            v19 = v15 - 20;
            v20 = v15 + 20;
            LANES128(v17).n128_u32[1] = *(v15 - 30);
            LANES128(v18).n128_u32[1] = v15[10];
            v21 = v15 - 10;
            v22 = v15 + 30;
            v16 -= 8;
            v15 += 80;
            LANES128(v17).n128_u32[2] = *v19;
            LANES128(v18).n128_u32[2] = *v20;
            LANES128(v17).n128_u32[3] = *v21;
            LANES128(v18).n128_u32[3] = *v22;
            v11 = vaddq_s32(
                COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v17, v12)) &
                                      __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                  0xFFFFFFF8FFFFFFF8LL))),
                v11);
            v14 = vaddq_s32(
                COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v18, v12)) &
                                      __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                  0xFFFFFFF8FFFFFFF8LL))),
                v14);
          } while (v16 != 0);
          LODWORD(v10) = vaddvq_s32(vaddq_s32(v14, v11));
        }
        else {
          v9 = 0;
          LODWORD(v10) = 0;
        }
        v23 = a2 - v9;
        v24 = (int*)(v7 + 40 * v9);
        do {
          {
            v25 = *v24;
            __asm__ volatile("" ::"r"(v25));
          }
          v24 += 10;
          --v23;
          v10 = ((v25 + 7) & 0xFFFFFFF8) + (unsigned int)v10;
        } while (v23 != 0);
      }
      else {
        v10 = 0;
      }
      memcpy_plt(a4, v8 + v10, a3);
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nn_6a2de0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int32x4_t v10;
  int32x4_t v11;
  __int64 v12;
  int32x4_t v13;
  unsigned __int32* v14;
  __int64 v15;
  int32x4_t v16;
  int32x4_t v17;
  unsigned __int32* v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  __int64 v22;
  int* v23;
  int v24;

  LODWORD(v3) = 0;
  if (a1 != 0 && a3 != 0) {
    {
      v3 = *(_QWORD*)(a1 + 152);
      __asm__ volatile("" ::"r"(v3));
    }
    if (v3 != 0) {
      {
        v4 = *(_QWORD*)(v3 + 72);
        __asm__ volatile("" ::"r"(v4));
      }
      if (v4 == 0 || a2 >= *(_DWORD*)(v3 + 64)) {
        return 0;
      }
      {
        v5 = *(_QWORD*)(v3 + 88);
        __asm__ volatile("" ::"r"(v5));
      }
      if (v5 != 0) {
        if (a2 != 0) {
          v6 = a2;
          if (a2 >= 9) {
            v10 = (__typeof__(v10)){0};
            LANES128(v11).n128_u64[0] = 0x700000007LL;
            LANES128(v11).n128_u64[1] = 0x700000007LL;
            v12 = a2 & 7;
            if (v12 == 0) {
              v12 = 8;
            }
            v13 = (__typeof__(v13)){0};
            v14 = (unsigned __int32*)(v4 + 160);
            v7 = a2 - v12;
            v15 = v7;
            do {
              LANES128(v16).n128_u32[0] = *(v14 - 40);
              LANES128(v17).n128_u32[0] = *v14;
              v18 = v14 - 20;
              v19 = v14 + 20;
              LANES128(v16).n128_u32[1] = *(v14 - 30);
              LANES128(v17).n128_u32[1] = v14[10];
              v20 = v14 - 10;
              v21 = v14 + 30;
              v15 -= 8;
              v14 += 80;
              LANES128(v16).n128_u32[2] = *v18;
              LANES128(v17).n128_u32[2] = *v19;
              LANES128(v16).n128_u32[3] = *v20;
              LANES128(v17).n128_u32[3] = *v21;
              v10 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v16, v11)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v10);
              v13 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v17, v11)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v13);
            } while (v15 != 0);
            LODWORD(v8) = vaddvq_s32(vaddq_s32(v13, v10));
          }
          else {
            v7 = 0;
            LODWORD(v8) = 0;
          }
          v22 = v6 - v7;
          v23 = (int*)(v4 + 40 * v7);
          do {
            {
              v24 = *v23;
              __asm__ volatile("" ::"r"(v24));
            }
            v23 += 10;
            --v22;
            v8 = ((v24 + 7) & 0xFFFFFFF8) + (unsigned int)v8;
          } while (v22 != 0);
        }
        else {
          v8 = 0;
        }
        v5 += v8;
      }
      LODWORD(v3) = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
                        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 600LL))(
                        v5, 1, 8, a3) == 0;
    }
  }
  return (unsigned int)v3;
}

__int64 nn_6a2f60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t v14;
  unsigned __int32* v15;
  __int64 v16;
  int32x4_t v17;
  int32x4_t v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  __int64 v23;
  int* v24;
  int v25;

  LODWORD(v4) = 0;
  if (a1 != 0 && a4 != 0) {
    {
      v4 = *(_QWORD*)(a1 + 152);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 != 0) {
      {
        v5 = *(_QWORD*)(v4 + 72);
        __asm__ volatile("" ::"r"(v5));
      }
      if (v5 == 0 || a2 >= *(_DWORD*)(v4 + 64)) {
        return 0;
      }
      {
        v6 = *(_QWORD*)(v4 + 88);
        __asm__ volatile("" ::"r"(v6));
      }
      if (v6 != 0) {
        if (a2 != 0) {
          v7 = a2;
          if (a2 >= 9) {
            v11 = (__typeof__(v11)){0};
            LANES128(v12).n128_u64[0] = 0x700000007LL;
            LANES128(v12).n128_u64[1] = 0x700000007LL;
            v13 = a2 & 7;
            if (v13 == 0) {
              v13 = 8;
            }
            v14 = (__typeof__(v14)){0};
            v15 = (unsigned __int32*)(v5 + 160);
            v8 = a2 - v13;
            v16 = v8;
            do {
              LANES128(v17).n128_u32[0] = *(v15 - 40);
              LANES128(v18).n128_u32[0] = *v15;
              v19 = v15 - 20;
              v20 = v15 + 20;
              LANES128(v17).n128_u32[1] = *(v15 - 30);
              LANES128(v18).n128_u32[1] = v15[10];
              v21 = v15 - 10;
              v22 = v15 + 30;
              v16 -= 8;
              v15 += 80;
              LANES128(v17).n128_u32[2] = *v19;
              LANES128(v18).n128_u32[2] = *v20;
              LANES128(v17).n128_u32[3] = *v21;
              LANES128(v18).n128_u32[3] = *v22;
              v11 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v17, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v11);
              v14 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v18, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v14);
            } while (v16 != 0);
            LODWORD(v9) = vaddvq_s32(vaddq_s32(v14, v11));
          }
          else {
            v8 = 0;
            LODWORD(v9) = 0;
          }
          v23 = v7 - v8;
          v24 = (int*)(v5 + 40 * v8);
          do {
            {
              v25 = *v24;
              __asm__ volatile("" ::"r"(v25));
            }
            v24 += 10;
            --v23;
            v9 = ((v25 + 7) & 0xFFFFFFF8) + (unsigned int)v9;
          } while (v23 != 0);
        }
        else {
          v9 = 0;
        }
        v6 += v9;
      }
      LODWORD(v4) = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 600LL))(
                        v6, 2, 4 * a3) == 0;
    }
  }
  return (unsigned int)v4;
}

__int64 nn_6a30c0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t v14;
  unsigned __int32* v15;
  __int64 v16;
  int32x4_t v17;
  int32x4_t v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  __int64 v23;
  int* v24;
  int v25;

  LODWORD(v4) = 0;
  if (a1 != 0 && a4 != 0) {
    {
      v4 = *(_QWORD*)(a1 + 152);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 != 0) {
      {
        v5 = *(_QWORD*)(v4 + 72);
        __asm__ volatile("" ::"r"(v5));
      }
      if (v5 == 0 || a2 >= *(_DWORD*)(v4 + 64)) {
        return 0;
      }
      {
        v6 = *(_QWORD*)(v4 + 88);
        __asm__ volatile("" ::"r"(v6));
      }
      if (v6 != 0) {
        if (a2 != 0) {
          v7 = a2;
          if (a2 >= 9) {
            v11 = (__typeof__(v11)){0};
            LANES128(v12).n128_u64[0] = 0x700000007LL;
            LANES128(v12).n128_u64[1] = 0x700000007LL;
            v13 = a2 & 7;
            if (v13 == 0) {
              v13 = 8;
            }
            v14 = (__typeof__(v14)){0};
            v15 = (unsigned __int32*)(v5 + 160);
            v8 = a2 - v13;
            v16 = v8;
            do {
              LANES128(v17).n128_u32[0] = *(v15 - 40);
              LANES128(v18).n128_u32[0] = *v15;
              v19 = v15 - 20;
              v20 = v15 + 20;
              LANES128(v17).n128_u32[1] = *(v15 - 30);
              LANES128(v18).n128_u32[1] = v15[10];
              v21 = v15 - 10;
              v22 = v15 + 30;
              v16 -= 8;
              v15 += 80;
              LANES128(v17).n128_u32[2] = *v19;
              LANES128(v18).n128_u32[2] = *v20;
              LANES128(v17).n128_u32[3] = *v21;
              LANES128(v18).n128_u32[3] = *v22;
              v11 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v17, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v11);
              v14 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v18, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v14);
            } while (v16 != 0);
            LODWORD(v9) = vaddvq_s32(vaddq_s32(v14, v11));
          }
          else {
            v8 = 0;
            LODWORD(v9) = 0;
          }
          v23 = v7 - v8;
          v24 = (int*)(v5 + 40 * v8);
          do {
            {
              v25 = *v24;
              __asm__ volatile("" ::"r"(v25));
            }
            v24 += 10;
            --v23;
            v9 = ((v25 + 7) & 0xFFFFFFF8) + (unsigned int)v9;
          } while (v23 != 0);
        }
        else {
          v9 = 0;
        }
        v6 += v9;
      }
      LODWORD(v4) = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 600LL))(
                        v6, 3, 4 * a3) == 0;
    }
  }
  return (unsigned int)v4;
}

__int64 nn_6a3220(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int32x4_t v11;
  int32x4_t v12;
  __int64 v13;
  int32x4_t v14;
  unsigned __int32* v15;
  __int64 v16;
  int32x4_t v17;
  int32x4_t v18;
  unsigned __int32* v19;
  unsigned __int32* v20;
  unsigned __int32* v21;
  unsigned __int32* v22;
  __int64 v23;
  int* v24;
  int v25;

  LODWORD(v4) = 0;
  if (a1 != 0 && a4 != 0) {
    {
      v4 = *(_QWORD*)(a1 + 152);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 != 0) {
      {
        v5 = *(_QWORD*)(v4 + 72);
        __asm__ volatile("" ::"r"(v5));
      }
      if (v5 == 0 || a2 >= *(_DWORD*)(v4 + 64)) {
        return 0;
      }
      {
        v6 = *(_QWORD*)(v4 + 88);
        __asm__ volatile("" ::"r"(v6));
      }
      if (v6 != 0) {
        if (a2 != 0) {
          v7 = a2;
          if (a2 >= 9) {
            v11 = (__typeof__(v11)){0};
            LANES128(v12).n128_u64[0] = 0x700000007LL;
            LANES128(v12).n128_u64[1] = 0x700000007LL;
            v13 = a2 & 7;
            if (v13 == 0) {
              v13 = 8;
            }
            v14 = (__typeof__(v14)){0};
            v15 = (unsigned __int32*)(v5 + 160);
            v8 = a2 - v13;
            v16 = v8;
            do {
              LANES128(v17).n128_u32[0] = *(v15 - 40);
              LANES128(v18).n128_u32[0] = *v15;
              v19 = v15 - 20;
              v20 = v15 + 20;
              LANES128(v17).n128_u32[1] = *(v15 - 30);
              LANES128(v18).n128_u32[1] = v15[10];
              v21 = v15 - 10;
              v22 = v15 + 30;
              v16 -= 8;
              v15 += 80;
              LANES128(v17).n128_u32[2] = *v19;
              LANES128(v18).n128_u32[2] = *v20;
              LANES128(v17).n128_u32[3] = *v21;
              LANES128(v18).n128_u32[3] = *v22;
              v11 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v17, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v11);
              v14 = vaddq_s32(
                  COERCE_AS(int32x4_t, (COERCE_AS(_OWORD, vaddq_s32(v18, v12)) &
                                        __PAIR128__(0xFFFFFFF8FFFFFFF8LL,
                                                    0xFFFFFFF8FFFFFFF8LL))),
                  v14);
            } while (v16 != 0);
            LODWORD(v9) = vaddvq_s32(vaddq_s32(v14, v11));
          }
          else {
            v8 = 0;
            LODWORD(v9) = 0;
          }
          v23 = v7 - v8;
          v24 = (int*)(v5 + 40 * v8);
          do {
            {
              v25 = *v24;
              __asm__ volatile("" ::"r"(v25));
            }
            v24 += 10;
            --v23;
            v9 = ((v25 + 7) & 0xFFFFFFF8) + (unsigned int)v9;
          } while (v23 != 0);
        }
        else {
          v9 = 0;
        }
        v6 += v9;
      }
      LODWORD(v4) = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)(*(_QWORD*)(a1 + 8) + 7688LL) + 600LL))(
                        v6, 4, 8 * a3) == 0;
    }
  }
  return (unsigned int)v4;
}

__int64 nn_6a7500(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  void* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;
  void (*v9)(_QWORD);
  __int64 v10;
  unsigned int v11;

  nn_os_LockMutex_plt(a1 + 24);
  {
    v2 = *(_DWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == *(_DWORD*)(a1 + 12)) {
    if ((*(_BYTE*)(a1 + 20) & 1) == 0 ||
        (v3 = (*(int*)(a1 + 16) + v2) / *(int*)(a1 + 16) * *(int*)(a1 + 16),
         *(_DWORD*)(a1 + 12) = v3, v4 = SdkData_e89bd8,
         (v5 = (*(__int64 (**)(__int64))SdkData_e89bd8)(4LL * v3)) == 0)) {
      v11 = 0xFFFF;
      goto LABEL_16;
    }
    LODWORD(v6) = *(_DWORD*)(a1 + 8);
    if ((_DWORD)v6 != 0) {
      v7 = 0;
      do {
        *(_DWORD*)(v5 + 4 * v7) = *(_DWORD*)(*(_QWORD*)a1 + 4 * v7);
        ++v7;
        {
          v6 = *(unsigned int*)(a1 + 8);
          __asm__ volatile("" ::"r"(v6));
        }
      } while (v7 < v6);
    }
    if ((unsigned int)v6 < *(_DWORD*)(a1 + 12)) {
      v6 = (unsigned int)v6;
      do {
        *(_DWORD*)(v5 + 4 * v6++) = 0;
      } while (v6 < *(unsigned int*)(a1 + 12));
    }
    {
      v8 = *(_BYTE*)(a1 + 20);
      __asm__ volatile("" ::"r"(v8));
    }
    if ((v8 & 2) != 0) {
      v9 = *(void (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v4);
      v10 = v5;
      v9(*(_QWORD*)a1);
      {
        v8 = *(_BYTE*)(a1 + 20);
        __asm__ volatile("" ::"r"(v8));
      }
      v5 = v10;
    }
    *(_QWORD*)a1 = v5;
    *(_BYTE*)(a1 + 20) = v8 | 2;
    {
      v2 = *(_DWORD*)(a1 + 8);
      __asm__ volatile("" ::"r"(v2));
    }
  }
  else {
    {
      v5 = *(_QWORD*)a1;
      __asm__ volatile("" ::"r"(v5));
    }
  }
  *(_DWORD*)(a1 + 8) = v2 + 1;
  *(_DWORD*)(v5 + 4LL * v2) = 0;
  {
    v11 = *(unsigned __int16*)(a1 + 8) - 1;
    __asm__ volatile("" ::"r"(v11));
  }
LABEL_16:
  nn_os_UnlockMutex_plt(a1 + 24);
  return v11;
}

__int64 nn_6a9080(_QWORD* a1)
{
  int v2;
  __int64 v3;
  __int64* v4;
  void* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;
  int v16;
  int* v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(0x64u);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  {
    v4 = (__int64*)a1[1];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4[1] == 0) {
    {
      v15 = v4[3];
      __asm__ volatile("" ::"r"(v15));
    }
    v22 = 0;
    if (v15 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt_alt1(
              v15, &v22) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v4, (__int64)&v22) != 0) {
      return 7;
    }
    v4[1] = v22;
  }
  v5 = SdkData_e89bd8;
  {
    v6 = 44LL * a1[3];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (*(__int64 (**)(unsigned __int64))SdkData_e89bd8)(v6);
  v8 = v7;
  if (v7 != 0) {
    memset_plt(v7, 0, v6);
  }
  if (a1[3] != 0) {
    v9 = (_DWORD*)(v8 + 20);
    v10 = 0;
    v11 = 0;
    do {
      ++v11;
      *(v9 - 5) = *(unsigned __int8*)(a1[2] + v10);
      *(v9 - 4) = *(unsigned __int8*)(a1[2] + v10 + 1);
      *(v9 - 3) = *(unsigned __int8*)(a1[2] + v10 + 2);
      *((_BYTE*)v9 - 8) = *(_BYTE*)(a1[2] + v10 + 3);
      *(v9 - 1) = *(_DWORD*)(a1[2] + v10 + 4);
      *(_DWORD*)v9 = *(_DWORD*)(a1[2] + v10 + 8);
      v9[1] = *(_DWORD*)(a1[2] + v10 + 12);
      v9[2] = *(_DWORD*)(a1[2] + v10 + 16);
      v9[3] = *(_DWORD*)(a1[2] + v10 + 20);
      v9[4] = *(_DWORD*)(a1[2] + v10 + 24);
      {
        v12 = a1[2] + v10;
        __asm__ volatile("" ::"r"(v12));
      }
      v10 += 32;
      v9[5] = *(_DWORD*)(v12 + 28);
      v9 += 11;
      {
        v13 = a1[3];
        __asm__ volatile("" ::"r"(v13));
      }
    } while (v11 < v13);
  }
  else {
    v13 = 0;
  }
  v16 = NvRmGpuRegOpsSessionExec_plt(v4[1], v13, v8);
  if (a1[3] != 0) {
    v17 = (int*)(v8 + 32);
    v18 = 0;
    v19 = 0;
    do {
      ++v19;
      *(_BYTE*)(a1[2] + v18 + 2) = *(v17 - 6);
      *(_DWORD*)(a1[2] + v18 + 16) = *(v17 - 1);
      {
        v20 = *v17;
        __asm__ volatile("" ::"r"(v20));
      }
      v17 += 11;
      {
        v21 = a1[2] + v18;
        __asm__ volatile("" ::"r"(v21));
      }
      v18 += 32;
      *(_DWORD*)(v21 + 20) = v20;
    } while (v19 < a1[3]);
  }
  (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v5))(v8);
  if (v16 != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 nn_6aa140(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  void* v6;
  unsigned int* v7;
  unsigned int* v15;
  __int16 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  char v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  unsigned __int64 v40;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(0x64u);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  {
    v4 = *(__int64**)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = v4;
  if (v4[1] == 0) {
    {
      v23 = v4[3];
      __asm__ volatile("" ::"r"(v23));
    }
    v26 = 0;
    if (v23 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt_alt1(
              v23, &v26) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v4, (__int64)&v26) != 0) {
      return 7;
    }
    v4[1] = v26;
    {
      v5 = *(__int64**)(a1 + 8);
      __asm__ volatile("" ::"r"(v5));
    }
  }
  *(_QWORD*)(a1 + 48) = 0;
  v6 = SdkData_e89bd8;
  v7 = (unsigned int*)(*(__int64 (**)(__int64))SdkData_e89bd8)(32);
  v15 = v7;
  if (v7 != nullptr) {
    *(_OWORD*)v7 = (__typeof__(*(_OWORD*)v7)){0};
    *((_OWORD*)v7 + 1) = (__typeof__(*((_OWORD*)v7 + 1))){0};
  }
  {
    v16 = *(_WORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v16));
  }
  *(_QWORD*)(a1 + 48) = v7;
  if ((v16 & 0xFFF) == 0) {
    {
      v17 = *(int*)(a1 + 24) - 1;
      __asm__ volatile("" ::"r"(v17));
    }
    if (v17 <= 2) {
      v27 = 0;
      v26 = 0;
      v32 = 0;
      v35 = 0;
      v36 = 0;
      v33 = 0;
      v34 = 0;
      v37 = NvOsGetCurrentAllocator_plt(v7);
      v38 = 0;
      v31 = 0;
      v39 = (__typeof__(v39)){0};
      v28 = 4096;
      v29 = v17;
      {
        v30 = *(_QWORD*)(a1 + 16);
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v18 = *(_QWORD*)(a1 + 64);
        __asm__ volatile("" ::"r"(v18));
      }
      v40 = 0xFFFFFFFF00000003LL;
      if (v18 != 0) {
        v38 = v18;
      }
      if ((unsigned int)NvRmMemHandleAllocAttr_plt(v5[2], (__int64)&v26,
                                                   (__int64)v15) == 0) {
        {
          v19 = *(_QWORD*)(a1 + 16);
          __asm__ volatile("" ::"r"(v19));
        }
        {
          v20 = *v15;
          __asm__ volatile("" ::"r"(v20));
        }
        *((_QWORD*)v15 + 3) = v19;
        if ((unsigned int)NvRmMemMap_plt(v20, 0, v19, 3, (__int64)(v15 + 2)) ==
            0) {
          {
            v25 = *(_QWORD*)(a1 + 64);
            __asm__ volatile("" ::"r"(v25));
          }
          if ((v25 == 0 || *((_QWORD*)v15 + 1) == v25) &&
              (unsigned int)NvRmGpuRegOpsSessionPerfbufMap_plt(
                  v5[1], *v15, *(_QWORD*)(a1 + 16), v15 + 4) == 0) {
            v21 = 0;
            *(_QWORD*)(a1 + 64) = *((_QWORD*)v15 + 1);
            *(_QWORD*)(a1 + 56) = *((_QWORD*)v15 + 2);
            *(_QWORD*)(a1 + 40) = *v15;
            return v21;
          }
        }
      }
      {
        v15 = *(unsigned int**)(a1 + 48);
        __asm__ volatile("" ::"r"(v15));
      }
      v21 = 7;
      if (*((_QWORD*)v15 + 2) == 0) {
        goto LABEL_23;
      }
      goto LABEL_22;
    }
  }
  v21 = 5;
  if (*((_QWORD*)v7 + 2) != 0) {
  LABEL_22:
    NvRmGpuRegOpsSessionPerfbufUnmap_plt(v4[1]);
    *((_QWORD*)v15 + 2) = 0;
  }
LABEL_23:
  {
    v22 = *((_QWORD*)v15 + 1);
    __asm__ volatile("" ::"r"(v22));
  }
  if (v22 != 0) {
    NvRmMemUnmap_plt(*v15, v22, v15[6]);
    *((_QWORD*)v15 + 1) = 0;
  }
  if (*v15 != 0) {
    NvRmMemHandleFree_plt(*v15);
    *v15 = 0;
  }
  (*(void (**)(unsigned int*))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v6))(
      v15);
  *(_OWORD*)(a1 + 56) = (__typeof__(*(_OWORD*)(a1 + 56))){0};
  *(_OWORD*)(a1 + 40) = (__typeof__(*(_OWORD*)(a1 + 40))){0};
  return v21;
}

__int64 nn_6aa400(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(0x64u);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  {
    v4 = *(__int64**)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = v4[1];
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 == 0) {
    {
      v9 = v4[3];
      __asm__ volatile("" ::"r"(v9));
    }
    v10 = 0;
    if (v9 != 0) {
      if ((unsigned int)NvRmGpuRegOpsSessionCreateForChannel_plt_alt1(
              v9, &v10) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)NvRmGpuRegOpsSessionCreateChannelless_plt(
                 *v4, (__int64)&v10) != 0) {
      return 7;
    }
    v5 = v10;
    v4[1] = v10;
  }
  {
    v6 = *(unsigned int**)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  if (*((_QWORD*)v6 + 2) != 0) {
    NvRmGpuRegOpsSessionPerfbufUnmap_plt(v5);
    *((_QWORD*)v6 + 2) = 0;
  }
  {
    v7 = *((_QWORD*)v6 + 1);
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 != 0) {
    NvRmMemUnmap_plt(*v6, v7, v6[6]);
    *((_QWORD*)v6 + 1) = 0;
  }
  if (*v6 != 0) {
    NvRmMemHandleFree_plt(*v6);
    *v6 = 0;
  }
  (*(void (**)(unsigned int*))((char*)(*(void*(*)[1])0x18LL) +
                               (_QWORD)SdkData_e89bd8))(v6);
  return 0;
}

__int64 nn_6aaae0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  int v4;
  _QWORD* v5;
  __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int8x16_t v10;
  int8x16_t v11;
  __int64 v12;
  double* v13;
  unsigned __int64 v14;
  double* v15;
  int8x16_t v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  void* v23;
  __int64 v24;
  unsigned __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  unsigned __int64 v33;
  __int64 v34;
  int64x2_t v35;
  int8x16_t* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned int v48;
  unsigned __int64 v49;
  _QWORD v50[4];
  unsigned __int64 v51;
  __int64 v52;
  float64x2_t v53;
  float64x2_t v54;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(0x64u);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  {
    v4 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 == 3) {
    return 3;
  }
  {
    v5 = *(_QWORD**)(a1 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  if (v4 != 2) {
    if (v4 != 1 || v5[15] == 0) {
      return 5;
    }
    result = NvRmGpuClockCloseAsyncReq_plt(*v5);
    if ((_DWORD)result != 196623) {
      if ((_DWORD)result != 4) {
        if ((_DWORD)result == 0) {
          v5[15] = 0;
          return result;
        }
        return 7;
      }
      return 5;
    }
    return 9;
  }
  if (v5[15] != 0) {
    return 11;
  }
  if ((unsigned int)NvRmGpuClockGetDomains_plt(*v5, &v52, &v51) != 0 ||
      v51 == 0) {
    return 7;
  }
  if (v51 >= 5) {
    v10 = (__typeof__(v10)){0};
    v11 = (__typeof__(v11)){0};
    v12 = v51 & 3;
    if ((v51 & 3) == 0) {
      v12 = 4;
    }
    v13 = (const double*)(v52 + 88);
    v8 = v51 - v12;
    v14 = v8;
    do {
      v15 = v13 - 8;
      v54 = vld4q_f64(v13).val[0];
      v13 += 16;
      v14 -= 4LL;
      v53 = vld4q_f64(v15).val[0];
      v10 = vbslq_s8(vcgtq_u64(v53, v10), v53, v10);
      v11 = vbslq_s8(vcgtq_u64(v54, v11), v54, v11);
    } while (v14 != 0);
    v16 = vbslq_s8(vcgtq_u64(v10, v11), v10, v11);
    v17 = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0];
    v9 =
        LANES64_OF(vbsl_s8(COERCE_AS(int8x8_t,
                                     vcgtd_u64(LANES128(v16).n128_u64[0], v17)),
                           COERCE_AS(int8x8_t, LANES128(v16).n128_u64[0]),
                           COERCE_AS(int8x8_t, v17)))
            .n64_u64[0];
  }
  else {
    v8 = 0;
    v9 = 0;
  }
  v18 = v51 - v8;
  v19 = (unsigned __int64*)(v52 + 32 * v8 + 24);
  do {
    {
      v21 = *v19;
      __asm__ volatile("" ::"r"(v21));
    }
    v19 += 4;
    v20 = v21;
    if (v21 > v9) {
      v9 = v20;
    }
    --v18;
  } while (v18 != 0);
  v22 = 8 * v9;
  v23 = SdkData_e89bd8;
  v24 = (*(__int64 (**)(unsigned __int64))SdkData_e89bd8)(8 * v9);
  v25 = (unsigned __int64*)v24;
  if (v24 != 0) {
    memset_plt(v24, 0, v22);
  }
  if (v51 != 0) {
    v26 = v52;
    v27 = 0;
    while (1) {
      v31 = 32 * v27;
      v32 = NvRmGpuClockGetPoints_plt(*v5, *(unsigned int*)(v26 + 32 * v27),
                                      v25, &v49);
      if (v32 != 0) {
        goto LABEL_58;
      }
      {
        v33 = *v25;
        __asm__ volatile("" ::"r"(v33));
      }
      if (v49 >= 2) {
        if (v49 < 5) {
          v34 = 1;
        LABEL_50:
          v44 = v49 - v34;
          {
            v45 = &v25[v34];
            __asm__ volatile("" ::"r"(v45));
          }
          do {
            {
              v47 = *v45++;
              __asm__ volatile("" ::"r"(v47));
            }
            v46 = v47;
            if (v47 > v33) {
              v33 = v46;
            }
            --v44;
          } while (v44 != 0);
          goto LABEL_42;
        }
        v35 = vdupq_n_s64(v33);
        v36 = (int8x16_t*)(v25 + 3);
        v37 = (v49 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        v34 = v37 | 1;
        v38 = v37;
        v39 = v35;
        do {
          {
            v40 = v36[-1];
            __asm__ volatile("" ::"w"(v40));
          }
          {
            v41 = *v36;
            __asm__ volatile("" ::"w"(v41));
          }
          v36 += 2;
          v38 -= 4LL;
          v35 = vbslq_s8(vcgtq_u64(v40, v35), v40, v35);
          v39 = vbslq_s8(vcgtq_u64(v41, v39), v41, v39);
        } while (v38 != 0);
        v42 = vbslq_s8(vcgtq_u64(v35, v39), v35, v39);
        v43 = LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0];
        v33 = LANES64_OF(
                  vbsl_s8(COERCE_AS(int8x8_t,
                                    vcgtd_u64(LANES128(v42).n128_u64[0], v43)),
                          COERCE_AS(int8x8_t, LANES128(v42).n128_u64[0]),
                          COERCE_AS(int8x8_t, v43)))
                  .n64_u64[0];
        if (v49 - 1 != v37) {
          goto LABEL_50;
        }
      }
    LABEL_42:
      v28 = v51;
      v26 = v52;
      {
        v29 = &v50[2 * v27++];
        __asm__ volatile("" ::"r"(v29));
      }
      {
        v30 = *(_DWORD*)(v52 + v31);
        __asm__ volatile("" ::"r"(v30));
      }
      v29[1] = v33;
      *(_DWORD*)v29 = v30;
      if (v27 >= v28) {
        goto LABEL_56;
      }
    }
  }
  v28 = 0;
LABEL_56:
  v32 = NvRmGpuClockSet_plt(*v5, v50, v28, v5 + 15);
  if (v32 == 0) {
    v32 = NvRmGpuClockWaitAsyncReq_plt(*v5, v5 + 15, 1, 0xFFFFFFFFLL);
  }
LABEL_58:
  v48 = v32;
  (*(void (**)(unsigned __int64*))((char*)(*(void*(*)[1])0x18LL) +
                                   (_QWORD)v23))(v25);
  result = v48;
  if (v48 != 0) {
    if (v48 != 196623) {
      if (v48 != 4) {
        return 7;
      }
      return 5;
    }
    return 9;
  }
  return result;
}

__int64 nn_6ad040(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  void* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v15;
  int* v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        NvOsSleepMS_plt(0x64u);
      }
    }
    else {
      v3 = NvRmGpuLibOpen_plt(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  {
    v4 = *(_QWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 == 0 || *(_QWORD*)(v4 + 24) == 0) {
    return 5;
  }
  v5 = SdkData_e89bd8;
  {
    v6 = 44LL * *(unsigned int*)(a1 + 28);
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = (*(__int64 (**)(unsigned __int64))SdkData_e89bd8)(v6);
  v8 = v7;
  if (v7 != 0) {
    memset_plt(v7, 0, v6);
  }
  if (*(_DWORD*)(a1 + 28) != 0) {
    v9 = (_DWORD*)(v8 + 20);
    v10 = 0;
    v11 = 0;
    do {
      ++v11;
      *(v9 - 5) = *(unsigned __int8*)(*(_QWORD*)(a1 + 40) + v10);
      *(v9 - 4) = *(unsigned __int8*)(*(_QWORD*)(a1 + 40) + v10 + 1);
      *(v9 - 3) = *(unsigned __int8*)(*(_QWORD*)(a1 + 40) + v10 + 2);
      *((_BYTE*)v9 - 8) = *(_BYTE*)(*(_QWORD*)(a1 + 40) + v10 + 3);
      *(v9 - 1) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 4);
      *(_DWORD*)v9 = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 8);
      v9[1] = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 12);
      v9[2] = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 16);
      v9[3] = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 20);
      v9[4] = *(_DWORD*)(*(_QWORD*)(a1 + 40) + v10 + 24);
      {
        v12 = *(_QWORD*)(a1 + 40) + v10;
        __asm__ volatile("" ::"r"(v12));
      }
      v10 += 32;
      v9[5] = *(_DWORD*)(v12 + 28);
      v9 += 11;
      {
        v13 = *(unsigned int*)(a1 + 28);
        __asm__ volatile("" ::"r"(v13));
      }
    } while (v11 < v13);
  }
  else {
    v13 = 0;
  }
  v15 = NvRmGpuRegOpsSessionExec_plt(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL),
                                     v13, v8);
  if (*(_DWORD*)(a1 + 28) != 0) {
    v16 = (int*)(v8 + 32);
    v17 = 0;
    v18 = 0;
    do {
      ++v18;
      *(_BYTE*)(*(_QWORD*)(a1 + 40) + v17 + 2) = *(v16 - 6);
      *(_DWORD*)(*(_QWORD*)(a1 + 40) + v17 + 16) = *(v16 - 1);
      {
        v19 = *v16;
        __asm__ volatile("" ::"r"(v19));
      }
      v16 += 11;
      {
        v20 = *(_QWORD*)(a1 + 40) + v17;
        __asm__ volatile("" ::"r"(v20));
      }
      v17 += 32;
      *(_DWORD*)(v20 + 20) = v19;
    } while (v18 < *(unsigned int*)(a1 + 28));
  }
  (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v5))(v8);
  if (v15 != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 nn_6adbf0(__int64 a1)
{
  unsigned int* v1;
  unsigned int v3;
  __int64 v4;
  int v5;
  char v6;

  {
    v1 = *(unsigned int**)(a1 + 88);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 == nullptr) {
    return 5;
  }
  if (*((_QWORD*)v1 + 2) != 0) {
    v3 = NvRmGpuProfilerV2PmaStreamFree_plt(*(_QWORD*)(a1 + 40));
    if (v3 != 0) {
      if (v3 == 196623) {
        v3 = 9;
      }
      else if (v3 == 4) {
        v3 = 5;
      }
      else {
        v3 = 7;
      }
    }
    *((_QWORD*)v1 + 2) = 0;
    {
      v4 = *((_QWORD*)v1 + 1);
      __asm__ volatile("" ::"r"(v4));
    }
    if (v4 == 0) {
      goto LABEL_23;
    }
    goto LABEL_13;
  }
  v3 = 0;
  {
    v4 = *((_QWORD*)v1 + 1);
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 != 0) {
  LABEL_13:
    v5 = NvRmMemUnmap_plt(*v1, v4, v1[6]);
    if (v5 != 0) {
      if (v5 == 196623) {
        v5 = 9;
      }
      else if (v5 == 4) {
        v5 = 5;
      }
      else {
        v5 = 7;
      }
      v6 = 1;
    }
    else {
      v6 = 0;
    }
    *((_QWORD*)v1 + 1) = 0;
    if (((v3 == 0) & (unsigned __int8)v6) != 0) {
      v3 = v5;
    }
  }
LABEL_23:
  if (*v1 != 0) {
    NvRmMemHandleFree_plt(*v1);
    *v1 = 0;
  }
  (*(void (**)(unsigned int*))((char*)(*(void*(*)[1])0x18LL) +
                               (_QWORD)SdkData_e89bd8))(v1);
  *(_QWORD*)(a1 + 88) = 0;
  return v3;
}

__int64 nn_6addf0(__int64 result)
{
  if (result != 0) {
    return (*(__int64 (**)(_QWORD))((char*)(*(void*(*)[1])0x18LL) +
                                    (_QWORD)SdkData_e89bd8))(
        *(_QWORD*)(result - 8));
  }
  return result;
}

float nn_75a7c0(void* this_)
{

#pragma clang fp contract(off)
  return (float)*((unsigned __int64*)this_ + 21) /
         (float)(unsigned __int64)(*((_QWORD*)this_ + 22) +
                                   *((_QWORD*)this_ + 21));
}

__int64 nn_762070(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

  v6 = a1 + 8;
  {
    v8 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v7 = *(_QWORD*)(v6 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v12 = (**(__int64 (***)(__int64))v7)(v7);
  v13 = v12;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  *(_QWORD*)v14 = 0x8000001000000006LL;
  v14[2] = 1;
  v15 = ((unsigned __int64)v14 + 35) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 404;
  *(_QWORD*)(v15 + 40) = a2;
  *(_DWORD*)(v15 + 32) = a3;
  *(_DWORD*)(v15 + 36) = a4;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 2097153;
  *(_DWORD*)(v15 + 4) = v8;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v14);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v19_.v20 = 0;
    memset(v19_.v19, 0, sizeof(v19_.v19));
    nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v14);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v17 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v17));
      }
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v13);
  return (unsigned int)v17;
}

#pragma GCC visibility pop
