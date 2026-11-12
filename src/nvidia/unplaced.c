#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAllocAlign_plt(_QWORD, _QWORD);
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvQueryEvent_plt(_QWORD, _QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsThreadCreateWithAttr_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsThreadJoin_plt(_QWORD);
__int64 NvRmGpu_alt1(_QWORD) __asm__("NvRmGpu");
__int64 NvRmMemGetGpukMemoryHandle_plt(_QWORD);
__int64 NvRmMemGetNvRmMemIdForDebug_plt(_QWORD);
__int64 NvRmMemGetSize_plt(_QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmMemHandleFromFd_plt(_QWORD, _QWORD);
__int64 SdkRoutine_5fb200(_QWORD, _QWORD);
__int64 SdkRoutine_5fb200_alt1(__int64, __int64) __asm__("SdkRoutine_5fb200");
__int64 SdkRoutine_5fb210(__int64);
__int64 SdkRoutine_5fb210_alt1(_QWORD) __asm__("SdkRoutine_5fb210");
__int64 SdkRoutine_5fb210_alt2(_DWORD*) __asm__("SdkRoutine_5fb210");
__int64 SdkRoutine_5fb5c0(void (*)(void), __int64, int);
__int64 SdkRoutine_5fb8a0();
__int64 SdkRoutine_5fbf90();
__int64 SdkRoutine_5fbfa0(_QWORD);
__int64 SdkRoutine_5fc5c0(__int64 result);
__int64 SdkRoutine_5fec30(void);
__int64 SdkRoutine_5fec50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_CreateDirectory_plt(_QWORD);
__int64 nn_fs_DeleteFile_plt(_QWORD);
__int64 nn_fs_FlushFile_plt(_QWORD);
__int64 nn_fs_GetEntryType_plt(_QWORD, _QWORD);
__int64 nn_fs_GetFileSize_plt(_QWORD, _QWORD);
__int64 nn_fs_MountHostRoot_plt(_QWORD);
__int64 nn_fs_MountHost_plt(_QWORD, _QWORD);
__int64 nn_fs_ReadFile_plt_85a950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_SetFileSize_plt(_QWORD);
__int64 nn_fs_UnmountHostRoot_plt(_QWORD);
__int64 nn_fs_Unmount_plt(_QWORD);
__int64 nn_fs_WriteFile_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_CreateGpuAddressSpace_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_CreateGraphicsDevice_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_DestroyGpuAddressSpace_plt(_QWORD);
__int64 nn_gpu_sdk_GetComptagBackingStoreSize_plt(void);
__int64 nn_gpu_sdk_GetGpuAddressSpaceHandle_plt(void);
__int64 nn_gpu_sdk_GetGpuAddressSpaceHandle_plt_alt1(_QWORD) __asm__(
    "nn_gpu_sdk_GetGpuAddressSpaceHandle_plt");
__int64 nn_gpu_sdk_MapComptagBackingStore_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_QueryPageTableEntryList_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_UnmapComptagBackingStore_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_CancelJobTracking_plt(_QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineAllocSpace_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineFreeSpace_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineMapBufferEx_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineMappingModify_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineRemap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_util_ExecuteVirtualMachineUnmapBuffer_plt(_QWORD, _QWORD);
__int64 nn_gpu_sdk_util_FinalizeJobManager_plt(_QWORD);
__int64 nn_gpu_sdk_util_FinalizeVirtualMachine_plt(_QWORD);
__int64 nn_gpu_sdk_util_InitializeJobManager_plt(void);
__int64 nn_gpu_sdk_util_InitializeVirtualMachine_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 nn_gpu_sdk_util_PrepareJobTracking_plt(_QWORD);
__int64 nn_gpu_sdk_util_ProcessJobTracking_plt(_QWORD);
__int64 nn_gpu_sdk_util_StartJobTracking_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_nvsrv_GetUserNvDrvStatus_plt(void);
__int64 nn_os_CreateSystemEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_GetHostArgc_plt(_QWORD);
__int64 nn_os_GetHostArgv_plt(void);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetMultiWaitHolderUserData_plt(_QWORD, _QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_client_GetDomainProxyZero();
__int64 nnosInitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nnosLockMutex_plt(_QWORD);
__int64 nnosUnlockMutex_plt(_QWORD);
__int64 nvidia_5f8f80_alt1(_QWORD) __asm__("nvidia_5f8f80");
__int64 nvidia_5f8f90_alt1(_QWORD) __asm__("nvidia_5f8f90");
__int64 nvidia_5f8fa0_alt1(_QWORD) __asm__("nvidia_5f8fa0");
__int64 nvidia_5fb9d0_alt1(_QWORD) __asm__("nvidia_5fb9d0");
__int64 nvidia_5fbb10_alt1(_QWORD) __asm__("nvidia_5fbb10");
__int64 nvidia_5fbb80_alt1(_QWORD, _QWORD) __asm__("nvidia_5fbb80");
__int64 nvidia_5fbfb0_alt1() __asm__("nvidia_5fbfb0");
__int64 nvidia_5fbff0_alt1(_QWORD) __asm__("nvidia_5fbff0");
__int64 nvidia_5fcab0_alt1() __asm__("nvidia_5fcab0");
__int64 nvidia_5fcaf0_alt1(_QWORD) __asm__("nvidia_5fcaf0");
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_103f150;
extern _UNKNOWN SdkData_103f160;
extern _UNKNOWN SdkData_103f168;
extern _UNKNOWN SdkData_ea40a0;
extern _UNKNOWN SdkData_ea4298;
extern __int64 SdkData_103f140;
extern __int64 SdkData_103f158;
extern __int64 SdkData_e71eb8;
extern __int64 SdkData_f72e70;
extern __int64 SdkData_f72e78;
extern __int64 SdkData_f72e80;
extern __int64 SdkData_f72e88;
extern __int64 SdkData_f72e90;
extern char SdkData_103b029;
extern char SdkData_103b02a;
extern char SdkData_103b02b;
extern char* SdkData_e71b40;
extern char* SdkData_e71b90;
extern char* SdkData_e71be0;
extern char* SdkData_e71c30;
extern char* SdkData_e71c80;
extern char* SdkData_e71cd0;
extern char* SdkData_e71de8;
extern char* SdkData_e71df8;
extern char* SdkData_e71e08;
extern char* SdkData_e71e18;
extern char* SdkData_e71e28;
extern char* SdkData_e71e38;
extern char* SdkData_e71e48;
extern char* SdkData_e71e58;
extern char* SdkData_e71e68;
extern char* SdkData_e71e78;
extern char* SdkData_e71e88;
extern char* SdkData_e71e98;
extern char* SdkData_e71ea8;
extern char* SdkData_ea4108[2];
extern char** SdkData_e89898[2];
extern int SdkData_103b03c;
extern int SdkData_ea4118;
extern int SdkData_ea43c8;
extern int SdkData_f72e98;
extern int SdkData_f72ea0;
extern void (*SdkData_ea42b8)(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_ea42b8_alt1)(_QWORD, __int64,
                                   _QWORD) __asm__("SdkData_ea42b8");
extern void (*SdkData_ea42c0)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42c8)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42d0)(_QWORD, __int64, _QWORD);
void __attribute__((noreturn)) SdkRoutine_0(_QWORD, _QWORD, _QWORD);
void nn_os_detail_RemoveNativeWaitHolder();
__int64 nvidia_5f0d40(_BYTE* a1, unsigned int a2);
__int64 nvidia_5f0ea0(_WORD* a1, unsigned int a2);
char* nvidia_5f10c0(char* result, unsigned int* a2, __int64* a3);
unsigned __int16* nvidia_5f1150(unsigned __int16* result, _DWORD* a2,
                                __int64* a3);
__int64 nvidia_5f11c0(__int64 result, _DWORD* a2, _QWORD* a3);
__int64 nvidia_5f1230(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nvidia_5f1460(__int64 a1, __int64 a2, unsigned __int64 a3,
                      unsigned __int64 a4);
__int64 nvidia_5f50f0(__int64 a1, __int64 a2);
__int64 nvidia_5f5150(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_5f57b0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 nvidia_5f70c0(__int64* a1, __int64 a2, __int64 a3);
__int64 nvidia_5f71a0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 nvidia_5f7240(__int64* a1, unsigned __int64 a2, int a3);
__int64 nvidia_5f72e0(__int64 a1, _QWORD* a2);
__int64 nvidia_5f72f0(__int64* a1, __int64 a2);
__int64 nvidia_5f7360(__int64 a1);
__int64 nvidia_5f73a0(__int64 a1);
__int64 NvOsFtruncate_0(__int64 a1);
void __attribute__((noreturn)) NvOsBreakPoint(__int64 a1);
void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1);
void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsFree_0(__int64 a1);
__int64 nvidia_5f8f70(__int64 a1);
__int64 nvidia_5f8f80(__int64 a1);
__int64 nvidia_5f8f90(__int64 a1);
__int64 nvidia_5f8fa0(__int64 a1);
__int64 nvidia_5fb070();
__int64 _ZN2nv22DumpGraphicsMemoryInfoEv_0();
__int64 nvidia_5fb220(__int64 a1, _QWORD* a2);
__int64 nvidia_5fb4f0(_DWORD* a1, int a2);
__int64 nvidia_5fb540(int a1);
int* hosFinalizeEvents(int* result, __int64 a2);
bool hosSetupSystemEvents(int* a1, __int64 a2, __int64 a3, int a4);
void* NvOsDrvGpuGetGpukDevice();
__int64 NvRmGpu(__int64 a1);
__int64 nvidia_5fb9d0(void** a1);
__int64 nvidia_5fbb10(__int64 result);
__int64 nvidia_5fbb80(int a1, _QWORD* a2);
__int64 nvidia_5fbbf0(_QWORD* a1);
__int64 nvidia_5fbc40(__int64 result);
__int64 nvidia_5fbcb0(__int64 a1, __int64 a2, int a3, int* a4, __int64 a5,
                      _BYTE* a6);
__int64 nvidia_5fbf60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6);
__int64 nvidia_5fbfb0(__int64 result, _QWORD** a2);
__int64 nvidia_5fbff0(_QWORD* a1);
__int64 nvidia_5fc040(_DWORD* a1);
__int64 nvidia_5fc080(_DWORD* a1, __int64 a2, int a3, unsigned int* a4,
                      __int64 a5, _BYTE* a6);
__int64 nvidia_5fc2d0(_DWORD* a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6);
__int64 nvidia_5fc320(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, _BYTE* a8);
__int64 nvidia_5fc380(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, unsigned __int64 a7, _BYTE* a8);
__int64 nvidia_5fc660(int a1, _QWORD* a2);
__int64 nvidia_5fc6d0(_QWORD* a1);
__int64 nvidia_5fc990(bool* a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6);
__int64 nvidia_5fc9c0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, _BYTE* a8);
__int64 nvidia_5fca40(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, unsigned int a8);
__int64 nvidia_5fcab0(__int64 result, _QWORD** a2);
__int64 nvidia_5fcaf0(_QWORD* a1);
__int64 nvidia_5fcb90(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      __int64 a5, _BYTE* a6);
__int64 nvidia_5fccb0(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      __int64 a5, unsigned int a6);
__int64 nvidia_5fcd00(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5,
                      _BYTE* a6);
__int64 nvidia_5fd340(__int64 result);
__int64 nvidia_5fd360(__int64 result);
__int64 nvidia_5fd3a0(__int64 result);
__int64 nvidia_5fd3e0(__int64 result);
__int64 nvidia_5fd430(__int64 result);
__int64 nvidia_5fd490(__int64 result);
__int64 nvidia_5fd4f0(__int64 result);
char* nvidia_5fd710(int a1);
__int64 nvidia_5feb10();
__int64 nvidia_5ff970(__int64 a1, unsigned int a2);
__int64 nvidia_5ffab0(__int64 a1);
__int64 nvidia_5ffc20(__int64 a1, _QWORD* a2, char a3);
__int64 unplaced_5fb440(__int64 a1);

__int64 nvidia_5f0d40(_BYTE* a1, unsigned int a2)
{
  int v3;
  unsigned int v4;
  __int64 result;
  char v6;
  int v7;
  int i;

  if (a2 < 0x10000) {
    v3 = 3;
  }
  else {
    v3 = 4;
  }
  if (a2 >= 0x800) {
    v4 = v3;
  }
  else {
    v4 = 2;
  }
  if (a2 >= 0x80) {
    result = v4;
  }
  else {
    result = 1;
  }
  if (a1 != nullptr) {
    if (a2 <= 0x7F) {
      v6 = 127;
    }
    else {
      v6 = 0x7Fu >> result;
    }
    v7 = 6 * result - 6;
    *a1 = (a2 >> (6 * result - 6)) & v6 | (2 * ~v6);
    if ((_DWORD)result != 1) {
      for (i = ((_BYTE)result - 1) & 7; i != 0;
           *++a1 = (a2 >> v7) & 0x3F | 0x80) {
        v7 -= 6;
        --i;
      }
    }
  }
  return result;
}

__int64 nvidia_5f0ea0(_WORD* a1, unsigned int a2)
{
  if (a1 != nullptr) {
    if (a2 <= 0x10000) {
      *a1 = a2;
      return 2;
    }
    *a1 = ((a2 + 983040) >> 10) & 0x3FF | 0xD800;
    a1[1] = (unsigned __int8)a2 | 0xDB00;
  }
  if (a2 <= 0x10000) {
    return 2;
  }
  else {
    return 4;
  }
}

char* nvidia_5f10c0(char* result, unsigned int* a2, __int64* a3)
{
  __int64 v3;
  char* v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  bool v9;
  char v10;
  unsigned int v11;
  char v12;
  char* v13;
  __int64 i;
  int v15;

  v3 = *a3;
  if (*a3 != 0) {
    v4 = result;
    v6 = *result++;
    v5 = v6;
    *a3 = v3 - 1;
    v7 = (unsigned __int8)v6;
    if (v3 == 1 || (v5 & 0x80000000) == 0) {
      *a2 = v7 & 0x7F;
    }
    else {
      v8 = (v7 >> 4) & 3;
      v9 = v8 != 0;
      v10 = v8 - 1;
      if (!v9) {
        v10 = 0;
      }
      v11 = (0x1Fu >> v10) & v7;
      v12 = v4[1];
      v13 = &v4[v3];
      for (i = v3 - 2;; --i) {
        *a3 = i;
        v11 = v12 & 0x3F | (v11 << 6);
        if (i == 0) {
          break;
        }
        v15 = *++result;
        v12 = v15;
        if (v15 >= -64) {
          *a2 = v11;
          return result;
        }
      }
      *a2 = v11;
      return v13;
    }
  }
  else {
    *a2 = 0;
  }
  return result;
}

unsigned __int16* nvidia_5f1150(unsigned __int16* result, _DWORD* a2,
                                __int64* a3)
{
  __int64 v3;
  int v4;
  unsigned __int16 v6;

  v3 = *a3;
  if ((unsigned __int64)*a3 > 1) {
    v4 = *result;
    *a3 = v3 - 2;
    if ((unsigned __int64)(v3 - 2) >= 2 && (v4 & 0xFC00) == 55296) {
      v6 = result[1];
      *a3 = v3 - 4;
      *a2 = (v6 & 0x3FF | ((v4 & 0x3FF) << 10)) + 0x10000;
      result += 2;
    }
    else {
      *a2 = v4;
      ++result;
    }
  }
  else {
    *a2 = 0;
    *a3 = 0;
  }
  return result;
}

__int64 nvidia_5f11c0(__int64 result, _DWORD* a2, _QWORD* a3)
{
  if (*a3 != 0) {
    --*a3;
    ++result;
  }
  else {
    *a2 = 0;
  }
  return result;
}

__int64 nvidia_5f1230(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v7 = (-16 - (_BYTE)a2) & 0xF;
  v8 = a2 + v7;
  memset_plt((void*)(a2 + v7 + 16), nullptr, 976, a4);
  nnosInitializeMutex_plt(v8 + 904, 0, 0);
  *(_QWORD*)(v8 + 936) = a2;
  *(_QWORD*)(v8 + 880) = a3;
  *(_QWORD*)(v8 + 872) = a3;
  *(_QWORD*)(v8 + 944) = a3;
  *(_QWORD*)(v8 + 104) = v8 + 88;
  *(_QWORD*)(v8 + 8) = 979;
  *(_QWORD*)(v8 + 112) = v8 + 88;
  *(_QWORD*)(v8 + 968) = a1;
  *(_QWORD*)(v8 + 976) = 0;
  *(_QWORD*)(v8 + 120) = v8 + 104;
  *(_QWORD*)(v8 + 128) = v8 + 104;
  *(_QWORD*)(v8 + 136) = v8 + 120;
  *(_QWORD*)(v8 + 144) = v8 + 120;
  *(_QWORD*)(v8 + 152) = v8 + 136;
  *(_QWORD*)(v8 + 160) = v8 + 136;
  v10 = SdkData_f72e70;
  *(_QWORD*)(v8 + 176) = v8 + 152;
  *(_QWORD*)(v8 + 168) = v8 + 152;
  v11 = SdkData_f72e98;
  v12 = SdkData_f72e90;
  *(_QWORD*)(v8 + 192) = v8 + 168;
  *(_QWORD*)(v8 + 72) = 4095;
  *(_QWORD*)(v8 + 80) = v10;
  *(_DWORD*)(v8 + 896) = v11 | 4;
  *(_QWORD*)(v8 + 184) = v8 + 168;
  *(_QWORD*)(v8 + 200) = v8 + 184;
  *(_QWORD*)(v8 + 208) = v8 + 184;
  *(_QWORD*)(v8 + 216) = v8 + 200;
  *(_QWORD*)(v8 + 224) = v8 + 200;
  *(_QWORD*)(v8 + 232) = v8 + 216;
  *(_QWORD*)(v8 + 240) = v8 + 216;
  *(_QWORD*)(v8 + 248) = v8 + 232;
  *(_QWORD*)(v8 + 256) = v8 + 232;
  *(_QWORD*)(v8 + 264) = v8 + 248;
  *(_QWORD*)(v8 + 272) = v8 + 248;
  *(_QWORD*)(v8 + 280) = v8 + 264;
  *(_QWORD*)(v8 + 288) = v8 + 264;
  *(_QWORD*)(v8 + 296) = v8 + 280;
  *(_QWORD*)(v8 + 304) = v8 + 280;
  *(_QWORD*)(v8 + 312) = v8 + 296;
  *(_QWORD*)(v8 + 320) = v8 + 296;
  *(_QWORD*)(v8 + 328) = v8 + 312;
  *(_QWORD*)(v8 + 336) = v8 + 312;
  *(_QWORD*)(v8 + 344) = v8 + 328;
  *(_QWORD*)(v8 + 352) = v8 + 328;
  *(_QWORD*)(v8 + 360) = v8 + 344;
  *(_QWORD*)(v8 + 368) = v8 + 344;
  *(_QWORD*)(v8 + 376) = v8 + 360;
  *(_QWORD*)(v8 + 384) = v8 + 360;
  *(_QWORD*)(v8 + 392) = v8 + 376;
  *(_QWORD*)(v8 + 400) = v8 + 376;
  *(_QWORD*)(v8 + 408) = v8 + 392;
  *(_QWORD*)(v8 + 416) = v8 + 392;
  *(_QWORD*)(v8 + 424) = v8 + 408;
  *(_QWORD*)(v8 + 432) = v8 + 408;
  *(_QWORD*)(v8 + 440) = v8 + 424;
  *(_QWORD*)(v8 + 448) = v8 + 424;
  *(_QWORD*)(v8 + 456) = v8 + 440;
  *(_QWORD*)(v8 + 464) = v8 + 440;
  *(_QWORD*)(v8 + 472) = v8 + 456;
  *(_QWORD*)(v8 + 480) = v8 + 456;
  *(_QWORD*)(v8 + 488) = v8 + 472;
  *(_QWORD*)(v8 + 496) = v8 + 472;
  *(_QWORD*)(v8 + 504) = v8 + 488;
  *(_QWORD*)(v8 + 512) = v8 + 488;
  *(_QWORD*)(v8 + 528) = v8 + 504;
  *(_QWORD*)(v8 + 520) = v8 + 504;
  *(_QWORD*)(v8 + 544) = v8 + 520;
  *(_QWORD*)(v8 + 536) = v8 + 520;
  v13 = (32 - (_BYTE)v8) & 0xF;
  *(_QWORD*)(v8 + 560) = v8 + 536;
  *(_QWORD*)(v8 + 552) = v8 + 536;
  v14 = v8 + 976 + v13;
  *(_QWORD*)(v8 + 576) = v8 + 552;
  *(_QWORD*)(v8 + 568) = v8 + 552;
  *(_QWORD*)(v8 + 56) = v14;
  *(_QWORD*)(v8 + 64) = v12;
  *(_QWORD*)(v8 + 592) = v8 + 568;
  *(_QWORD*)(v8 + 584) = v8 + 568;
  *(_QWORD*)(v8 + 608) = v8 + 584;
  *(_QWORD*)(v8 + 600) = v8 + 584;
  v15 = a3 - v7 - 1056;
  v16 = v15 - v13;
  *(_QWORD*)(v8 + 32) = v16;
  *(_QWORD*)(v8 + 40) = a2;
  *(_QWORD*)(v14 + 8) = v16 | 1;
  *(_QWORD*)(v8 + 976 + v15 + 8) = 80;
  return v8 + 16;
}

__int64 nvidia_5f1460(__int64 a1, __int64 a2, unsigned __int64 a3,
                      unsigned __int64 a4)
{
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  int v9;
  __int64 v10;

  v4 = a4;
  if (SdkData_f72e70 != 0) {
    if (a3 < 0x421) {
      return 0;
    }
  }
  else {
    v5 = a1;
    v6 = a2;
    v7 = a3;
    nnosLockMutex_plt(&SdkData_ea40a0);
    if (SdkData_f72e70 == 0) {
      SdkData_f72e78 = 4096;
      SdkData_f72e80 = 0x200000;
      SdkData_f72e88 = 0x200000;
      SdkData_f72e90 = 0x200000;
      SdkData_f72e98 = 7;
      SdkData_f72e70 = (unsigned __int64)&v10 ^ 0x55555558;
    }
    nnosUnlockMutex_plt(&SdkData_ea40a0);
    a3 = v7;
    a2 = v6;
    a1 = v5;
    if (v7 < 0x421) {
      return 0;
    }
  }
  if (a3 >= -1056 - SdkData_f72e78) {
    return 0;
  }
  result = nvidia_5f1230(a1, a2, a3, a4);
  *(_DWORD*)(result + 944) = 8;
  if (v4 != 0) {
    v9 = 2;
  }
  else {
    v9 = 0;
  }
  *(_DWORD*)(result + 880) = *(_DWORD*)(result + 880) & 0xFFFFFFFD | v9;
  return result;
}

__int64 nvidia_5f50f0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(__int64);
  __int64 result;
  __int64 (*v4)(__int64, __int64);

  v2 = *(__int64 (**)(__int64))(a1 + 96);
  if (v2 != nullptr) {
    *(_BYTE*)(a1 + 48) = 1;
    result = v2(a2);
    if (result != 0) {
      return result;
    }
    return -1;
  }
  v4 = *(__int64 (**)(__int64, __int64))(a1 + 104);
  if (v4 == nullptr) {
    return -1;
  }
  *(_BYTE*)(a1 + 48) = 1;
  result = v4(a2, 128);
  if (result == 0) {
    return -1;
  }
  return result;
}

__int64 nvidia_5f5150(__int64 a1, __int64 a2, __int64 a3)
{
  if (a3 != 0) {
    (*(void (**)(__int64, __int64))(a1 + 112))(a2, a3);
  }
  return 0;
}

__int64 nvidia_5f57b0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD v5[3];
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v7 = 0;
  v5[2] = a4;
  v8 = 0;
  v9 = 0;
  v5[0] = 0;
  v5[1] = 0;
  v6 = -1;
  return NvOsThreadCreateWithAttr_plt(a1, a2, a3, v5);
}

__int64 nvidia_5f70c0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;

  v4 = *a1;
  v11 = 0;
  if ((unsigned int)nn_fs_GetFileSize_plt(&v11, v4) != 0) {
    return 196611;
  }
  v8 = *a1;
  if ((a1[2] & 8) != 0) {
    v10 = 0;
    if ((unsigned int)nn_fs_WriteFile_plt(v8, v11, a2, a3, &v10) != 0) {
      return 196608;
    }
  }
  else {
    v9 = a1[1];
    v10 = 0;
    if ((unsigned int)nn_fs_WriteFile_plt(v8, v9, a2, a3, &v10) != 0) {
      return 196608;
    }
  }
  if ((a1[2] & 8) == 0) {
    a1[1] += a3;
  }
  *((_BYTE*)a1 + 24) = 1;
  return 0;
}

__int64 nvidia_5f71a0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v11;
  __int64 v12;

  v7 = *a1;
  v8 = a1[1];
  v12 = 0;
  if ((unsigned int)nn_fs_ReadFile_plt_85a950(&v12, v7, v8, a2, a3) != 0) {
    return 196609;
  }
  v11 = v12;
  if (a4 != nullptr) {
    *a4 = v12;
  }
  if (v11 == 0) {
    return 196610;
  }
  a1[1] += v11;
  return 0;
}

__int64 nvidia_5f7240(__int64* a1, unsigned __int64 a2, int a3)
{
  __int64 v4;
  unsigned int v7;
  unsigned __int64 v9;
  unsigned __int64 v10;

  v4 = *a1;
  v7 = 196611;
  v10 = 0;
  if ((unsigned int)nn_fs_GetFileSize_plt(&v10, v4) == 0) {
    if (a3 != 0) {
      if (a3 == 2) {
        v9 = v10;
      }
      else {
        if (a3 != 1) {
          return 4;
        }
        v9 = a1[1];
      }
      a2 += v9;
    }
    if ((a2 & 0x8000000000000000LL) == 0 && a2 <= v10) {
      v7 = 0;
      a1[1] = a2;
    }
  }
  return v7;
}

__int64 nvidia_5f72e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  *a2 = v2;
  return 0;
}

__int64 nvidia_5f72f0(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v3 = *a1;
  v7 = 0;
  result = nn_fs_GetFileSize_plt(&v7, v3);
  if ((_DWORD)result != 0) {
    return 196611;
  }
  v6 = v7;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = v6;
  *(_DWORD*)(a2 + 8) = *((_DWORD*)a1 + 5);
  return result;
}

__int64 nvidia_5f7360(__int64 a1)
{
  __int64 result;

  result = nn_fs_FlushFile_plt(*(_QWORD*)a1);
  if ((_DWORD)result != 0) {
    return 196611;
  }
  *(_BYTE*)(a1 + 24) = 0;
  return result;
}

__int64 nvidia_5f73a0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v8;
  char** v10;
  int v11;
  unsigned int v12;
  int v14;

  v2 = 196611;
  v14 = 0;
  v3 = nn_os_LockMutex_plt(&SdkData_ea4298);
  v4 = SdkData_103b03c++;
  if (v4 != 0) {
    goto LABEL_13;
  }
  if ((SdkData_103b029 & 1) == 0) {
    v5 = nn_fs_MountHostRoot_plt(v3);
    if ((v5 & 0x3FFFFF) == 0x7802) {
      SdkData_103b029 = 1;
    }
    else if (v5 != 0) {
      v6 = v5;
      --SdkData_103b03c;
      nn_os_UnlockMutex_plt(&SdkData_ea4298);
      if (((v6 >> 9) & 0x1FFC) - 3200 < 0x12C && (v6 & 0x1FF) == 2) {
        return 6;
      }
      else {
        return 196611;
      }
    }
  }
  if ((SdkData_103b02a & 1) != 0) {
    goto LABEL_13;
  }
  v10 = SdkData_e89898[0];
  v11 = nn_fs_GetEntryType_plt(&v14, *SdkData_e89898[0]);
  if (v11 != 0) {
    if ((v11 & 0x3FFFFF) != 0x202 ||
        (unsigned int)nn_fs_CreateDirectory_plt(*v10) != 0) {
      goto LABEL_38;
    }
  }
  else if (v14 != 0) {
    goto LABEL_38;
  }
  v12 = nn_fs_MountHost_plt(SdkData_ea4108[0], *v10);
  if ((v12 & 0x3FFFFF) == 0x7802) {
    SdkData_103b02a = 1;
  LABEL_39:
    SdkData_103b02b = 1;
  LABEL_13:
    nn_os_UnlockMutex_plt(&SdkData_ea4298);
    if ((unsigned int)nn_fs_DeleteFile_plt(a1) != 0) {
      v2 = 196611;
    }
    else {
      v2 = 0;
    }
    goto LABEL_16;
  }
  if (v12 == 0) {
    goto LABEL_39;
  }
  if (((v12 >> 9) & 0x1FFC) - 3200 < 0x12C && (v12 & 0x1FF) == 2) {
    v2 = 6;
  }
  else {
    v2 = 196611;
  }
LABEL_38:
  nn_os_UnlockMutex_plt(&SdkData_ea4298);
LABEL_16:
  v8 = nn_os_LockMutex_plt(&SdkData_ea4298);
  if (--SdkData_103b03c == 0) {
    if ((SdkData_103b02a & 1) == 0 && SdkData_103b02b != 0) {
      v8 = nn_fs_Unmount_plt(SdkData_ea4108[0]);
      SdkData_103b02b = 0;
    }
    if ((SdkData_103b029 & 1) == 0) {
      nn_fs_UnmountHostRoot_plt(v8);
    }
  }
  nn_os_UnlockMutex_plt(&SdkData_ea4298);
  return v2;
}

__int64 NvOsFtruncate_0(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 16) & 2) == 0) {
    return 196611;
  }
  if ((unsigned int)nn_fs_SetFileSize_plt(*(_QWORD*)a1) != 0) {
    return 15;
  }
  return 0;
}

void __attribute__((noreturn)) NvOsBreakPoint(__int64 a1)
{
  if (a1 != 0 && nn_sf_hipc_client_GetDomainProxyZero() != 0) {
    nn_os_detail_RemoveNativeWaitHolder();
    nn_os_detail_RemoveNativeWaitHolder();
  }
  *(_DWORD*)SdkRoutine_0 += SdkData_ea4118 / SdkData_f72ea0;
  __udf(0x8002u);
}

void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c0(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1)
{
  SdkData_ea42b8_alt1(&SdkData_ea42b8_alt1, a1, SdkData_ea42b8_alt1);
}

void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c8(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsFree_0(__int64 a1)
{
  SdkData_ea42d0(&SdkData_ea42b8, a1, SdkData_ea42d0);
}

__int64 nvidia_5f8f70(__int64 a1)
{
  __int64 v1;

  v1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  return nvidia_5f8f80_alt1(v1);
}

__int64 nvidia_5f8f80(__int64 a1)
{
  __int64 v1;

  v1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  return nvidia_5f8f90_alt1(v1);
}

__int64 nvidia_5f8f90(__int64 a1)
{
  __int64 v1;

  v1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  return nvidia_5f8fa0_alt1(v1);
}

__int64 nvidia_5f8fa0(__int64 a1)
{
  return nn_diag_detail_AbortImpl_plt_856170(a1);
}

__int64 nvidia_5fb070()
{
  __int64 result;
  __int64 v1;

  result = nn_nvsrv_GetUserNvDrvStatus_plt();
  if ((_DWORD)result == 4096) {
    v1 = nn_os_GetHostArgc_plt(result);
    if ((int)v1 >= 1) {
      v1 = nn_os_GetHostArgv_plt();
    }
    nn_diag_detail_AbortImpl_plt_856170(v1);
    __udf(0);
  }
  return result;
}

__int64 _ZN2nv22DumpGraphicsMemoryInfoEv_0()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_103f140 + 64LL))(
      SdkData_103f140);
}

__int64 nvidia_5fb220(__int64 a1, _QWORD* a2)
{
  unsigned int v4;
  char** v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v12;

  v12 = 0;
  nn_os_SdkMutexType_Lock_plt(&SdkData_103f150);
  if ((unsigned int)strncmp_plt("/dev/nvhost-gpu", a1, 15) != 0) {
    if ((unsigned int)strncmp_plt("/dev/nvhost-as-gpu", a1, 18) != 0) {
      if ((unsigned int)strncmp_plt("/dev/nvhost-dbg-gpu", a1, 19) != 0) {
        if ((unsigned int)strncmp_plt("/dev/nvhost-prof-gpu", a1, 20) != 0) {
          if ((unsigned int)strncmp_plt("/dev/nvhost-prof-dev-gpu", a1, 24) !=
              0) {
            if ((unsigned int)strncmp_plt("/dev/tegra-soc-hwpm", a1, 19) != 0) {
              v4 = 0;
              *a2 = 0;
              goto LABEL_22;
            }
            v5 = &SdkData_e71cd0;
            v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
            if (v6 == nullptr) {
            LABEL_21:
              v4 = 6;
              goto LABEL_22;
            }
          }
          else {
            v5 = &SdkData_e71c80;
            v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
            if (v6 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        else {
          v5 = &SdkData_e71c30;
          v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
          if (v6 == nullptr) {
            goto LABEL_21;
          }
        }
      }
      else {
        v5 = &SdkData_e71be0;
        v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
        if (v6 == nullptr) {
          goto LABEL_21;
        }
      }
    }
    else {
      v5 = &SdkData_e71b90;
      v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
      if (v6 == nullptr) {
        goto LABEL_21;
      }
    }
  }
  else {
    v5 = &SdkData_e71b40;
    v6 = (_QWORD*)NvOsAllocAlign_plt(8, 32);
    if (v6 == nullptr) {
      goto LABEL_21;
    }
  }
  v6[2] = 0;
  v6[3] = 0;
  *v6 = 0;
  v6[1] = 0;
  v9 = v5[2];
  if (v9 != nullptr) {
    ((void(__attribute__((noreturn))*)(__int64*, __int64, __int64))v9)(&v12, v7,
                                                                       v8);
  }
  v6[1] = v5;
  v6[2] = 0;
  v4 = 0;
  *(_DWORD*)v6 = -1;
  v10 = SdkData_103f158;
  SdkData_103f158 = (__int64)v6;
  v6[3] = v10;
  *a2 = v6;
LABEL_22:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_103f150);
  return v4;
}

__int64 unplaced_5fb440(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;

  nn_os_SdkMutexType_Lock_plt(&SdkData_103f150);
  v2 = SdkData_103f158;
  if (SdkData_103f158 != 0) {
    if (SdkData_103f158 == a1) {
      v4 = &SdkData_103f158;
    LABEL_7:
      *v4 = *(_QWORD*)(v2 + 24);
      *(_QWORD*)(v2 + 24) = 0;
    }
    else {
      while (1) {
        v3 = v2;
        v2 = *(_QWORD*)(v2 + 24);
        if (v2 == 0) {
          break;
        }
        if (v2 == a1) {
          v4 = (__int64*)(v3 + 24);
          goto LABEL_7;
        }
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_103f150);
  if (*(_QWORD*)(a1 + 16) != 0) {
    (*(void (**)(void*))(*(_QWORD*)(a1 + 8) + 24LL))(*(void**)(a1 + 16));
  }
  return NvOsFree_plt(a1);
}

__int64 nvidia_5fb4f0(_DWORD* a1, int a2)
{
  nn_os_SdkMutexType_Lock_plt(&SdkData_103f150);
  *a1 = a2;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_103f150);
}

__int64 nvidia_5fb540(int a1)
{
  __int64 v2;
  __int64 v3;

  nn_os_SdkMutexType_Lock_plt(&SdkData_103f150);
  v2 = 0;
  if (a1 != -1) {
    v3 = SdkData_103f158;
    if (SdkData_103f158 != 0) {
      while (*(_DWORD*)v3 != a1) {
        v3 = *(_QWORD*)(v3 + 24);
        if (v3 == 0) {
          v2 = 0;
          goto LABEL_7;
        }
      }
      v2 = v3;
    }
  }
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_103f150);
  return v2;
}

int* hosFinalizeEvents(int* result, __int64 a2)
{
  int* v2;
  __int64 v4;
  __int64 v5;

  if (*result != 0) {
    v2 = result;
    nn_os_SignalSystemEvent_plt(result + 14);
    if (*v2 >= 1) {
      v4 = 48;
      v5 = 0;
      do {
        nn_os_UnlinkMultiWaitHolder_plt(*((_QWORD*)v2 + 25) + v4);
        nn_os_FinalizeMultiWaitHolder_plt(*((_QWORD*)v2 + 25) + v4);
        nn_os_DestroySystemEvent_plt(*((_QWORD*)v2 + 25) + v4 - 48);
        ++v5;
        v4 += 144;
      } while (v5 < *v2);
    }
    NvOsThreadJoin_plt(a2);
    nn_os_FinalizeMultiWait_plt(v2 + 2);
    return (int*)nn_os_DestroySystemEvent_plt(v2 + 14);
  }
  return result;
}

bool hosSetupSystemEvents(int* a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;

  v14 = 0;
  v10[0] = 0;
  v10[1] = 0;
  v15 = 0;
  v16 = a3;
  v12 = a4;
  v13 = -1;
  v11 = 3;
  if (*a1 == 0) {
    return false;
  }
  nn_os_InitializeMultiWait_plt(a1 + 2);
  if (*a1 >= 1) {
    v6 = 0;
    v7 = 0;
    do {
      NvOsDrvQueryEvent_plt((unsigned int)a1[1],
                            *(unsigned int*)(*((_QWORD*)a1 + 25) + v6 + 112));
      v8 = *((_QWORD*)a1 + 25) + v6;
      nn_os_InitializeMultiWaitHolder_plt_8591f0(v8 + 48, v8);
      nn_os_SetMultiWaitHolderUserData_plt(v8 + 48, v8);
      nn_os_LinkMultiWaitHolder_plt(a1 + 2, v8 + 48);
      ++v7;
      v6 += 144;
    } while (v7 < *a1);
  }
  *((_QWORD*)a1 + 7) = 0;
  *((_QWORD*)a1 + 23) = 0;
  *((_QWORD*)a1 + 24) = 0;
  *((_QWORD*)a1 + 21) = 0;
  *((_QWORD*)a1 + 22) = 0;
  *((_QWORD*)a1 + 19) = 0;
  *((_QWORD*)a1 + 20) = 0;
  *((_QWORD*)a1 + 17) = 0;
  *((_QWORD*)a1 + 18) = 0;
  *((_QWORD*)a1 + 15) = 0;
  *((_QWORD*)a1 + 16) = 0;
  *((_QWORD*)a1 + 13) = 0;
  *((_QWORD*)a1 + 14) = 0;
  *((_QWORD*)a1 + 11) = 0;
  *((_QWORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 9) = 0;
  *((_QWORD*)a1 + 10) = 0;
  *((_QWORD*)a1 + 8) = 0;
  v17 = nn_os_CreateSystemEvent_plt(a1 + 14, 0, 0);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
    __udf(0);
  }
  nn_os_InitializeMultiWaitHolder_plt_8591f0(a1 + 26, a1 + 14);
  nn_os_SetMultiWaitHolderUserData_plt(a1 + 26, a1 + 14);
  nn_os_LinkMultiWaitHolder_plt(a1 + 2, a1 + 26);
  return (unsigned int)NvOsThreadCreateWithAttr_plt(SdkRoutine_5fb8a0, a1 + 2,
                                                    a2, v10) == 0;
}

void* NvOsDrvGpuGetGpukDevice()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_103f168,
                            memory_order_acquire) &
       1) != 0) {
    return &SdkData_103f160;
  }
  if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_103f168) != 0) {
    NvRmGpu_alt1(&SdkData_103f160);
    __cxa_guard_release_plt(&SdkData_103f168);
  }
  return &SdkData_103f160;
}

__int64 NvRmGpu(__int64 a1)
{
  __int64 result;
  __int64 v2;
  int v3;

  result = nn_gpu_sdk_CreateGraphicsDevice_plt(a1, "NvRmGpu", 0, 0);
  v3 = result;
  if ((_DWORD)result != 0) {
    v2 = nn_diag_detail_AbortImpl_plt_858db0(&v3);
    return nvidia_5fb9d0_alt1(v2);
  }
  return result;
}

__int64 nvidia_5fb9d0(void** a1)
{
  void* v2;
  void* v4;
  _QWORD* v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_103f168,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_103f168) != 0) {
    NvRmGpu((__int64)&SdkData_103f160);
    __cxa_guard_release_plt(&SdkData_103f168);
  }
  v2 = (void*)SdkRoutine_5fb200(8, 368);
  if (v2 == nullptr) {
    return 6;
  }
  v4 = v2;
  memset_plt_alt1(v2, nullptr, 368);
  v5 = (_QWORD*)SdkRoutine_5fb200(8, 128);
  if (v5 == nullptr) {
  LABEL_6:
    v6 = *((_QWORD*)v4 + 44);
    if (v6 != 0) {
      SdkRoutine_5fb210(v6);
      *((_QWORD*)v4 + 44) = 0;
    }
    SdkRoutine_5fb210(v4);
    return 6;
  }
  v5[14] = 0;
  v5[15] = 0;
  v5[12] = 0;
  v5[13] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[2] = 0;
  v5[3] = 0;
  *v5 = 0;
  v5[1] = 0;
  *((_QWORD*)v4 + 44) = v5;
  nn_gpu_sdk_util_InitializeJobManager_plt();
  if ((unsigned int)nn_gpu_sdk_CreateGpuAddressSpace_plt(v4, &SdkData_103f160,
                                                         0) != 0) {
    nn_gpu_sdk_util_FinalizeJobManager_plt(*((_QWORD*)v4 + 44));
    goto LABEL_6;
  }
  nn_gpu_sdk_util_InitializeVirtualMachine_plt(
      (char*)v4 + 32, &SdkData_103f160, v4, *((_QWORD*)v4 + 44),
      SdkRoutine_5fbf90, SdkRoutine_5fbfa0, 0);
  *((_QWORD*)v4 + 45) = 1;
  *a1 = v4;
  return 0;
}

__int64 nvidia_5fbb10(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 360),
                                0xFFFFFFFFFFFFFFFFLL,
                                memory_order_release) == 1) {
    v1 = result;
    __builtin_arm_dmb(9u);
    nn_gpu_sdk_util_FinalizeVirtualMachine_plt(result + 32);
    nn_gpu_sdk_DestroyGpuAddressSpace_plt(v1);
    v2 = *(_QWORD*)(v1 + 352);
    if (v2 != 0) {
      nn_gpu_sdk_util_FinalizeJobManager_plt(v2);
      SdkRoutine_5fb210_alt1(*(_QWORD*)(v1 + 352));
      *(_QWORD*)(v1 + 352) = 0;
    }
    return SdkRoutine_5fb210_alt1(v1);
  }
  return result;
}

__int64 nvidia_5fbb80(int a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64* v5;

  v4 = 0;
  v5 = &v4;
  SdkRoutine_5fb5c0((void (*)(void))nvidia_5fbfb0_alt1, (__int64)&v5, a1);
  if (v4 == 0) {
    return 4;
  }
  result = 0;
  *a2 = v4;
  return result;
}

__int64 nvidia_5fbbf0(_QWORD* a1)
{
  __int64 result;
  void* v3;

  v3 = nullptr;
  result = nvidia_5fb9d0(&v3);
  if ((_DWORD)result == 0) {
    *a1 = v3;
  }
  return result;
}

__int64 nvidia_5fbc40(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 360),
                                0xFFFFFFFFFFFFFFFFLL,
                                memory_order_release) == 1) {
    v1 = result;
    __builtin_arm_dmb(9u);
    nn_gpu_sdk_util_FinalizeVirtualMachine_plt(result + 32);
    nn_gpu_sdk_DestroyGpuAddressSpace_plt(v1);
    v2 = *(_QWORD*)(v1 + 352);
    if (v2 != 0) {
      nn_gpu_sdk_util_FinalizeJobManager_plt(v2);
      SdkRoutine_5fb210_alt1(*(_QWORD*)(v1 + 352));
      *(_QWORD*)(v1 + 352) = 0;
    }
    return SdkRoutine_5fb210_alt1(v1);
  }
  return result;
}

__int64 nvidia_5fbcb0(__int64 a1, __int64 a2, int a3, int* a4, __int64 a5,
                      _BYTE* a6)
{
  __int64 result;
  int v9;
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;

  if (a3 > -1071103739) {
    if (a3 > 1074020608) {
      switch (a3) {
      case 1074020609:
        v11 = *a4;
        v14 = 0;
        *a6 = 1;
        result = nvidia_5fc660(v11, &v14);
        v12 = v14;
        if ((_DWORD)result != 0) {
          if (v14 == 0) {
            return result;
          }
        }
        else if (*(__int64*)((char*)((__int64*)0xCLL) + v14 + 4) != 0) {
          LODWORD(result) = 13;
        }
        else {
          LODWORD(result) = 0;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 360), 1u,
                                    memory_order_relaxed);
          *(__int64*)((char*)((__int64*)0xCLL) + v12 + 4) = a1;
        }
        v13 = result;
        SdkRoutine_5fc5c0(v12);
        return v13;
      case 1076379913:
        v9 = nn_gpu_sdk_GetGpuAddressSpaceHandle_plt();
        result = 0;
        a4[1] = v9;
        goto LABEL_14;
      case 1074807047:
        nn_diag_detail_AbortImpl_plt_856170(a1);
        break;
      default:
        break;
      }
    }
    else {
      switch (a3) {
      case -1071103738:
        result =
            nn_gpu_sdk_util_ExecuteVirtualMachineMapBufferEx_plt(a1 + 32, a4);
        *a6 = 0;
        return result;
      case -1069530872:
      LABEL_10:
        result = 0;
      LABEL_14:
        *a6 = 1;
        return result;
      case -1070055158:
        nn_diag_detail_AbortImpl_plt_856170(a1);
        break;
      default:
        break;
      }
    }
  }
  else {
    if (a3 <= -1072152319) {
      if (a3 != -2146418421) {
        if (a3 == -1073200891) {
          result =
              nn_gpu_sdk_util_ExecuteVirtualMachineUnmapBuffer_plt(a1 + 32, a4);
          *a6 = 0;
          return result;
        }
        if (a3 == -1072676605) {
          result =
              nn_gpu_sdk_util_ExecuteVirtualMachineFreeSpace_plt(a1 + 32, a4);
          *a6 = 0;
          return result;
        }
        goto LABEL_31;
      }
      goto LABEL_10;
    }
    switch (a3) {
    case -1072152318:
      result = nn_gpu_sdk_util_ExecuteVirtualMachineAllocSpace_plt(a1 + 32, a4);
      *a6 = 0;
      return result;
    case -1071628020:
      result =
          nn_gpu_sdk_util_ExecuteVirtualMachineMappingModify_plt(a1 + 32, a4);
      *a6 = 0;
      return result;
    case -1072152316:
      nn_diag_detail_AbortImpl_plt_856170(a1);
      break;
    default:
      break;
    }
  }
LABEL_31:
  if ((a3 & 0xC000FFFF) != 0xC000410D) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  result = nn_gpu_sdk_util_ExecuteVirtualMachineRemap_plt(
      a1 + 32, a4, (unsigned int)(3277 * (HIWORD(a3) & 0x3FF8)) >> 17);
  *a6 = 0;
  return result;
}

__int64 nvidia_5fbf60(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6)
{
  if (a3 == 1074020609 && a6 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  return a6;
}

__int64 nvidia_5fbfb0(__int64 result, _QWORD** a2)
{
  __int64 v2;
  __int64 v3;

  if (*(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) == 2) {
    v2 = *(_QWORD*)(result + 16);
    **a2 = v2;
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 360), 1u,
                                  memory_order_relaxed) == 0) {
      v3 = nn_diag_detail_AbortImpl_plt_856170(result);
      return nvidia_5fbff0_alt1(v3);
    }
  }
  return result;
}

__int64 nvidia_5fbff0(_QWORD* a1)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = SdkRoutine_5fb200_alt1(4, 4);
  if (v2 == 0) {
    return 6;
  }
  v3 = (_DWORD*)v2;
  result = 0;
  *v3 = 0;
  *a1 = v3;
  return result;
}

__int64 nvidia_5fc040(_DWORD* a1)
{
  _DWORD* v1;

  if (*a1 != 0) {
    v1 = a1;
    NvRmMemHandleFree_plt((unsigned int)*a1);
    a1 = v1;
    *v1 = 0;
  }
  return SdkRoutine_5fb210_alt2(a1);
}

__int64 nvidia_5fc080(_DWORD* a1, __int64 a2, int a3, unsigned int* a4,
                      __int64 a5, _BYTE* a6)
{
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[2];
  __int128 v20;
  __int64 v21;
  __int64 v22;

  if (a3 != -1072151545) {
    if (a3 != 1074807850) {
      if (a3 != -1072151511) {
        *a6 = 1;
        return 0;
      }
      *a6 = 0;
      v22 = 0;
      v7 = *a4;
      v21 = 0;
      v20 = 0u;
      result = nvidia_5fbb80_alt1(v7, &v22);
      if ((_DWORD)result != 0) {
        goto LABEL_10;
      }
      v9 = nn_gpu_sdk_GetGpuAddressSpaceHandle_plt_alt1(v22);
      v10 = nn_gpu_sdk_GetComptagBackingStoreSize_plt();
      LODWORD(v20) = (unsigned __int64)(v10 + 0xFFFF) >> 16;
      *(_QWORD*)((char*)&v20 + 4) = 0x10000;
      v21 = 0x10000;
      result =
          nn_gpu_sdk_util_ExecuteVirtualMachineAllocSpace_plt(v22 + 32, &v20);
      if ((_DWORD)result != 0) {
        goto LABEL_10;
      }
      v11 = v21;
      if ((unsigned int)nn_gpu_sdk_MapComptagBackingStore_plt(
              v9, v21, v10 + v21 - 1) == 0) {
        nvidia_5fbb10_alt1(v22);
        *((_QWORD*)a4 + 1) = v11;
        *((_QWORD*)a4 + 2) = v10;
        return 0;
      }
      if (v11 == 0 ||
          (v19[0] = v11, v19[1] = 0,
           (_DWORD)(v12 = nn_gpu_sdk_util_ExecuteVirtualMachineFreeSpace_plt(
                        v22 + 32, v19)) == 0)) {
        result = 327680;
      LABEL_10:
        if (v22 != 0) {
          v13 = result;
          nvidia_5fbb10_alt1(v22);
          return v13;
        }
        return result;
      }
    LABEL_26:
      nn_diag_detail_AbortImpl_plt_856170(v12);
      __udf(0);
    }
    *a6 = 0;
    v19[0] = 0;
    v14 = *a4;
    *((_QWORD*)&v20 + 1) = 0;
    v15 = nvidia_5fbb80_alt1(v14, v19);
    if ((_DWORD)v15 != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v15);
    }
    else {
      v16 = nn_gpu_sdk_GetGpuAddressSpaceHandle_plt_alt1(v19[0]);
      LODWORD(v22) =
          nn_gpu_sdk_UnmapComptagBackingStore_plt(v16, *((_QWORD*)a4 + 1));
      if ((_DWORD)v22 == 0) {
        *(_QWORD*)&v20 = *((_QWORD*)a4 + 1);
        v17 = nn_gpu_sdk_util_ExecuteVirtualMachineFreeSpace_plt(v19[0] + 32LL,
                                                                 &v20);
        if ((_DWORD)v17 == 0) {
          nvidia_5fbb10_alt1(v19[0]);
          return 0;
        }
        goto LABEL_25;
      }
    }
    v17 = nn_diag_detail_AbortImpl_plt_858db0(&v22);
  LABEL_25:
    v12 = nn_diag_detail_AbortImpl_plt_856170(v17);
    goto LABEL_26;
  }
  LODWORD(v20) = 0;
  *a6 = 1;
  if (*a1 != 0) {
    return 13;
  }
  result = NvRmMemHandleFromFd_plt(*a4, &v20);
  if ((_DWORD)result == 0) {
    *a4 = NvRmMemGetGpukMemoryHandle_plt((unsigned int)v20);
    *a1 = v20;
    return 0;
  }
  return result;
}

__int64 nvidia_5fc2d0(_DWORD* a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6)
{
  if (a3 == 1074283528) {
    NvRmMemHandleFree_plt((unsigned int)*a1);
    *a1 = 0;
  }
  return a6;
}

__int64 nvidia_5fc320(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, _BYTE* a8)
{
  *a8 = 1;
  if (a3 == -1072151538) {
    *(_DWORD*)(a4 + 4) =
        NvRmMemGetGpukMemoryHandle_plt(*(unsigned int*)(a4 + 4));
  }
  return 0;
}

__int64 nvidia_5fc380(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, unsigned __int64 a7, _BYTE* a8)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 result;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  unsigned __int8* v19;
  __int64 v20;
  __int16 v21;
  unsigned __int8 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;

  if (a3 == -1072151538) {
    v16 = *(unsigned int*)(a4 + 4);
    *a8 = 1;
    *(_DWORD*)(a4 + 4) = NvRmMemGetGpukMemoryHandle_plt(v16);
    return 0;
  }
  if (a3 != -1072151519) {
    *a8 = 1;
    return 0;
  }
  v8 = *(unsigned int*)(a4 + 4);
  *a8 = 0;
  if (a7 / 0x28 >= v8) {
    v9 = v8;
  }
  else {
    v9 = a7 / 0x28;
  }
  if (v9 == 0) {
    *(_DWORD*)(a4 + 4) = 0;
    return 0;
  }
  v10 = *(_DWORD*)a4;
  v30 = 0;
  v31 = 0;
  result = nvidia_5fbb80(v10, &v31);
  if ((_DWORD)result != 0) {
    v14 = v31;
    if (v31 == 0) {
      return result;
    }
    goto LABEL_9;
  }
  v17 = nn_gpu_sdk_GetGpuAddressSpaceHandle_plt_alt1(v31);
  if ((unsigned int)nn_gpu_sdk_QueryPageTableEntryList_plt(&v30, v17) != 0) {
    return 327680;
  }
  v18 = v30;
  result = 0;
  if (v30 != 0) {
    v19 = (unsigned __int8*)(a6 + 38);
    v20 = v30;
    do {
      v25 = *(_QWORD*)(v19 - 22);
      if (v25 != 0) {
        v28 = 3;
      }
      else {
        v28 = 2;
      }
      if (*(v19 - 4) != 0) {
        v29 = v28;
      }
      else {
        v29 = v25 != 0;
      }
      if (*(v19 - 5) != 0) {
        v24 = v29 | 8;
      }
      else {
        v24 = v29;
      }
      if (v25 != 0) {
        v21 = *v19;
        v22 = *(v19 - 6);
        v23 = *(_DWORD*)(v19 - 14);
        if (*(v19 - 3) != 0) {
          v24 |= 4u;
        }
        if (*(v19 - 1) != 0) {
          v25 |= 0x8000000000uLL;
        }
      }
      else {
        v23 = 0;
        v21 = 0;
        v22 = 0;
      }
      v26 = *(_QWORD*)(v19 - 38);
      v27 = *(_QWORD*)(v19 - 30);
      *(_QWORD*)(v19 - 22) = v25;
      --v20;
      *(_DWORD*)(v19 - 14) = v24;
      *(_DWORD*)(v19 - 10) = v23;
      *((_WORD*)v19 - 3) = v21;
      *(v19 - 4) = v22;
      *(_DWORD*)(v19 - 3) = 0;
      v19[1] = 0;
      *(_QWORD*)(v19 - 38) = v27;
      *(_QWORD*)(v19 - 30) = v26;
      v19 += 40;
    } while (v20 != 0);
  }
  *(_DWORD*)(a4 + 4) = v18;
  v14 = v31;
  if (v31 != 0) {
  LABEL_9:
    v15 = result;
    nvidia_5fbb10(v14);
    return v15;
  }
  return result;
}

__int64 nvidia_5fc660(int a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64* v5;

  v4 = 0;
  v5 = &v4;
  SdkRoutine_5fb5c0((void (*)(void))nvidia_5fcab0_alt1, (__int64)&v5, a1);
  if (v4 == 0) {
    return 4;
  }
  result = 0;
  *a2 = v4;
  return result;
}

__int64 nvidia_5fc6d0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 result;

  v2 = SdkRoutine_5fb200_alt1(8, 32);
  if (v2 == 0) {
    return 6;
  }
  v3 = (_QWORD*)v2;
  result = 0;
  v3[1] = 0;
  v3[2] = 0;
  *v3 = 0;
  v3[3] = 1;
  *a1 = v3;
  return result;
}

__int64 nvidia_5fc990(bool* a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      unsigned int a6)
{
  if ((a3 & 0xC000FFFF) == 0xC000481A && a6 == 0) {
    *a1 = (*(_BYTE*)(a4 + 8) & 2) != 0;
  }
  return a6;
}

__int64 nvidia_5fc9c0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, _BYTE* a8)
{
  __int64 result;

  *a8 = 1;
  if ((a3 & 0xC000FFFF) + 1073723365 > 1 || (*(_BYTE*)a1 & 1) != 0) {
    return 0;
  }
  result = nn_gpu_sdk_util_PrepareJobTracking_plt(*(_QWORD*)(a1 + 8));
  if ((_DWORD)result == 0) {
    *(_DWORD*)(a4 + 12) |= 2u;
  }
  return result;
}

__int64 nvidia_5fca40(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, unsigned int a8)
{
  __int64 v10;

  if ((a3 & 0xC000FFFF) + 1073723365 <= 1 && (*(_BYTE*)a1 & 1) == 0) {
    v10 = *(_QWORD*)(a1 + 8);
    if (a8 != 0) {
      nn_gpu_sdk_util_CancelJobTracking_plt(v10);
    }
    else {
      nn_gpu_sdk_util_StartJobTracking_plt(v10, *(unsigned int*)(a4 + 16),
                                           *(unsigned int*)(a4 + 20));
    }
    nn_gpu_sdk_util_ProcessJobTracking_plt(*(_QWORD*)(a1 + 8));
  }
  return a8;
}

__int64 nvidia_5fcab0(__int64 result, _QWORD** a2)
{
  __int64 v2;
  __int64 v3;

  if (*(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) == 1) {
    v2 = *(_QWORD*)(result + 16);
    **a2 = v2;
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 24), 1u,
                                  memory_order_relaxed) == 0) {
      v3 = nn_diag_detail_AbortImpl_plt_856170(result);
      return nvidia_5fcaf0_alt1(v3);
    }
  }
  return result;
}

__int64 nvidia_5fcaf0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 result;

  v2 = SdkRoutine_5fb200_alt1(4, 8);
  if (v2 == 0) {
    return 6;
  }
  v3 = (_QWORD*)v2;
  result = 0;
  *v3 = 0;
  *a1 = v3;
  return result;
}

__int64 nvidia_5fcb90(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      __int64 a5, _BYTE* a6)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 result;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;

  *a6 = 1;
  if (a3 != -1070575612) {
    return 0;
  }
  v17 = v6;
  v18 = v7;
  v8 = *a1;
  v16 = 0;
  v15 = 0;
  if (v8 != 0) {
    return 13;
  }
  if (a1[1] != 0) {
    return 13;
  }
  result = NvRmMemHandleFromFd_plt(*(unsigned int*)(a4 + 24), &v16);
  if ((_DWORD)result != 0 ||
      (_DWORD)(result = NvRmMemHandleFromFd_plt(*(unsigned int*)(a4 + 28),
                                                &v15)) != 0) {
    if (v16 != 0) {
      v12 = result;
      NvRmMemHandleFree_plt(v16);
      result = v12;
    }
    if (v15 != 0) {
      v13 = result;
      NvRmMemHandleFree_plt(v15);
      return v13;
    }
  }
  else {
    *(_DWORD*)(a4 + 24) = NvRmMemGetGpukMemoryHandle_plt(v16);
    *(_DWORD*)(a4 + 28) = NvRmMemGetGpukMemoryHandle_plt(v15);
    v14 = v15;
    *a1 = v16;
    a1[1] = v14;
    return 0;
  }
  return result;
}

__int64 nvidia_5fccb0(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      __int64 a5, unsigned int a6)
{
  if (a3 == 20485) {
    NvRmMemHandleFree_plt(*a1);
    NvRmMemHandleFree_plt(a1[1]);
    *(_QWORD*)a1 = 0;
  }
  return a6;
}

__int64 nvidia_5fcd00(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5,
                      _BYTE* a6)
{
  __int64 v7;
  __int64 v8;

  *a6 = 1;
  if (a3 == 4) {
    v7 =
        (unsigned int)NvRmMemGetNvRmMemIdForDebug_plt(*(unsigned int*)(a4 + 8));
    v8 = *(unsigned int*)(a4 + 16);
    *(_QWORD*)(a4 + 8) = v7;
    *(_QWORD*)(a4 + 16) = (unsigned int)NvRmMemGetNvRmMemIdForDebug_plt(v8);
  }
  return 0;
}

__int64 nvidia_5fd340(__int64 result)
{
  *(_DWORD*)(result + 20) = 0;
  *(_DWORD*)(result + 28) = 0;
  *(_DWORD*)(result + 36) = 0;
  *(_QWORD*)(result + 12) = 0x1FFFFFFFFLL;
  return result;
}

__int64 nvidia_5fd360(__int64 result)
{
  *(_DWORD*)(result + 20) = 4;
  *(_QWORD*)(result + 12) = 0x100000001LL;
  *(_DWORD*)(result + 36) = 1;
  *(_DWORD*)(result + 28) = 1;
  *(_DWORD*)(result + 56) = 1;
  *(_DWORD*)(result + 64) = 1;
  *(_QWORD*)(result + 40) = 0x80000000020LL;
  *(_QWORD*)(result + 48) = 0x100000000LL;
  return result;
}

__int64 nvidia_5fd3a0(__int64 result)
{
  *(_QWORD*)(result + 44) = 2048;
  *(_DWORD*)(result + 20) = 5;
  *(_QWORD*)(result + 12) = 0x100000001LL;
  *(_QWORD*)(result + 52) = 0x100000001LL;
  *(_DWORD*)(result + 28) = 1;
  *(_DWORD*)(result + 64) = 1;
  *(_QWORD*)(result + 36) = 0x4000000001LL;
  return result;
}

__int64 nvidia_5fd3e0(__int64 result)
{
  *(_QWORD*)(result + 12) = 0x100000001LL;
  *(_QWORD*)(result + 20) = 0x100000006LL;
  *(_QWORD*)(result + 28) = 0x100000002LL;
  *(_QWORD*)(result + 44) = 2048;
  *(_QWORD*)(result + 36) = 0x2000000002LL;
  *(_QWORD*)(result + 52) = 0x200000002LL;
  *(_QWORD*)(result + 68) = 0x100000000LL;
  *(_DWORD*)(result + 76) = 1;
  return result;
}

__int64 nvidia_5fd430(__int64 result)
{
  *(_QWORD*)(result + 12) = 0x100000001LL;
  *(_QWORD*)(result + 20) = 0x200000007LL;
  *(_QWORD*)(result + 28) = 0x200000003LL;
  *(_QWORD*)(result + 44) = 2048;
  *(_QWORD*)(result + 36) = 0x2000000003LL;
  *(_QWORD*)(result + 52) = 0x300000003LL;
  *(_QWORD*)(result + 68) = 0x200000001LL;
  *(_DWORD*)(result + 76) = 2;
  return result;
}

__int64 nvidia_5fd490(__int64 result)
{
  *(_QWORD*)(result + 28) = 4;
  *(_QWORD*)(result + 20) = 8;
  *(_QWORD*)(result + 12) = 1;
  *(_DWORD*)(result + 60) = 1;
  *(_QWORD*)(result + 44) = 0x100000800LL;
  *(_QWORD*)(result + 36) = 0x2000000004LL;
  *(_QWORD*)(result + 52) = 0x400000004LL;
  *(_QWORD*)(result + 68) = 0x300000002LL;
  *(_DWORD*)(result + 76) = 3;
  return result;
}

__int64 nvidia_5fd4f0(__int64 result)
{
  *(_QWORD*)(result + 28) = 5;
  *(_QWORD*)(result + 20) = 9;
  *(_QWORD*)(result + 12) = 1;
  *(_DWORD*)(result + 60) = 1;
  *(_QWORD*)(result + 44) = 0x100000800LL;
  *(_QWORD*)(result + 36) = 0x2000000004LL;
  *(_QWORD*)(result + 52) = 0x500000005LL;
  *(_QWORD*)(result + 68) = 0x400000003LL;
  *(_QWORD*)(result + 76) = 0x100000004LL;
  return result;
}

char* nvidia_5fd710(int a1)
{
  int v1;
  int v2;
  char* result;

  v1 = BYTE2(a1);
  v2 = (unsigned __int16)a1;
  result = nullptr;
  if (v2 <= 105) {
    if (v2 <= 10) {
      if (v2 != 0) {
        if (v2 != 4) {
          return result;
        }
        if (v1 == 0) {
          return SdkData_e71de8;
        }
        if (v1 == 1) {
          return SdkData_e71df8;
        }
      }
      else if (v1 == 0) {
        return (char*)SdkData_e71eb8;
      }
    }
    else {
      switch (v2) {
      case 11:
        if (v1 == 0) {
          return SdkData_e71e08;
        }
        if (v1 == 1) {
          return SdkData_e71ea8;
        }
        break;
      case 12:
        if (v1 == 0) {
          return SdkData_e71e18;
        }
        if (v1 == 1) {
          return SdkData_e71e98;
        }
        if ((v1 | 0xC) == 0) {
          return (char*)SdkData_e71eb8;
        }
        break;
      case 35:
        if (v1 == 0) {
          return SdkData_e71e28;
        }
        break;
      default:
        return result;
      }
    }
  }
  else if (v2 > 109) {
    switch (v2) {
    case 'n':
      if (v1 == 0) {
        return SdkData_e71e48;
      }
      break;
    case 'u':
      if (v1 == 0) {
        return SdkData_e71e78;
      }
      break;
    case 'v':
      if (v1 == 0) {
        return SdkData_e71e88;
      }
      break;
    default:
      return result;
    }
  }
  else {
    switch (v2) {
    case 'j':
      if (v1 == 0) {
        return SdkData_e71e68;
      }
      break;
    case 'k':
      if (v1 == 0) {
        return SdkData_e71e58;
      }
      break;
    case 'm':
      if (v1 == 0) {
        return SdkData_e71e38;
      }
      break;
    default:
      return result;
    }
  }
  return nullptr;
}

__int64 nvidia_5feb10()
{
  __int64 result;

  result = (unsigned int)SdkData_ea43c8;
  if ((SdkData_ea43c8 & 0x80000000) == 0) {
    result = SdkRoutine_5fec30();
    SdkData_ea43c8 = -1;
  }
  return result;
}

__int64 nvidia_5ff970(__int64 a1, unsigned int a2)
{
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = a1 + 56;
  if (*(_DWORD*)(a1 + 56) == 0) {
    v5 = 0;
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(unsigned __int8*)(a1 + 52);
    v8 = (_DWORD*)NvOsAlloc_plt(20);
    if (v8 == nullptr) {
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  if (*(_DWORD*)(a1 + 88) == 0) {
    v5 = 1;
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(unsigned __int8*)(a1 + 52);
    v8 = (_DWORD*)NvOsAlloc_plt(20);
    if (v8 == nullptr) {
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  if (*(_DWORD*)(a1 + 120) == 0) {
    v5 = 2;
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(unsigned __int8*)(a1 + 52);
    v8 = (_DWORD*)NvOsAlloc_plt(20);
    if (v8 == nullptr) {
    LABEL_14:
      v4 = 6;
    LABEL_15:
      NvOsFree_plt(v8);
      return v4;
    }
  LABEL_11:
    v8[2] = v7;
    v8[3] = a2;
    v8[4] = 0;
    *v8 = 1;
    v4 = SdkRoutine_5fec50(v6, 3222536201LL, v8, 20);
    if (v4 == 0) {
      v9 = (unsigned int)v8[4];
      v10 = v2 + 32 * v5;
      *(_DWORD*)v10 = a2;
      *(_QWORD*)(v10 + 8) = v9;
      *(_QWORD*)(v10 + 16) = NvRmMemGetSize_plt(a2);
      *(_BYTE*)(v10 + 24) = 1;
    }
    goto LABEL_15;
  }
  if (*(_DWORD*)(a1 + 152) == 0) {
    v5 = 3;
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(unsigned __int8*)(a1 + 52);
    v8 = (_DWORD*)NvOsAlloc_plt(20);
    if (v8 == nullptr) {
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  return 6;
}

__int64 nvidia_5ffab0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = NvOsAlloc_plt(64);
  if (v2 == 0) {
    return 6;
  }
  v3 = v2;
  result = nn_os_CreateSystemEvent_plt(v2 + 16, 1, 0);
  v8 = result;
  if ((_DWORD)result != 0) {
    v5 = nn_diag_detail_AbortImpl_plt_858db0(&v8);
    v6 = *(_QWORD*)(v5 + 8);
    v7 = v5;
    nn_os_DestroySystemEvent_plt(v6 + 16);
    result = NvOsFree_plt(v6);
    *(_QWORD*)(v7 + 8) = 0;
  }
  else {
    *(_QWORD*)(a1 + 8) = v3;
  }
  return result;
}

__int64 nvidia_5ffc20(__int64 a1, _QWORD* a2, char a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _DWORD* i;
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
  _QWORD* v27;

  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 < v4) {
    return 2;
  }
  v6 = (_QWORD*)*a2;
  if (*a2 == 0) {
    v7 = nullptr;
  LABEL_9:
    *(_QWORD*)(a1 + 32) = v7;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    *(_DWORD*)(a1 + 24) = 1;
    *(_BYTE*)(a1 + 56) = 1;
    if ((a3 & 1) != 0) {
      *(_QWORD*)(a1 + 64) = a1 + 64;
      *(_QWORD*)(a1 + 72) = a1 + 64;
    }
    if (v7 != nullptr) {
      if (v3 >= v7[1]) {
        v7[6] = a1;
        v10 = (_QWORD*)*a2;
        if (a1 == *a2) {
          goto LABEL_66;
        }
      }
      else {
        v7[5] = a1;
        v10 = (_QWORD*)*a2;
        if (a1 == *a2) {
          goto LABEL_66;
        }
      }
      v11 = *(_QWORD*)(a1 + 32);
      for (i = (_DWORD*)(v11 + 24); *(_DWORD*)(v11 + 24) != 0;
           i = (_DWORD*)(v11 + 24)) {
        v13 = *(_QWORD*)(v11 + 32);
        v14 = *(_QWORD*)(v13 + 40);
        if (v11 == v14) {
          v19 = *(_QWORD*)(v13 + 48);
          if (v19 == 0 || *(_DWORD*)(v19 + 24) == 0) {
            v20 = *(_QWORD*)(v11 + 48);
            if (a1 != v20) {
              v21 = v11;
              v11 = a1;
              *(_DWORD*)(v21 + 24) = 0;
              v22 = *(_QWORD*)(v14 + 48);
              *(_DWORD*)(v13 + 24) = 1;
              *(_QWORD*)(v13 + 40) = v22;
              if (v22 != 0) {
                goto LABEL_35;
              }
              goto LABEL_36;
            }
            v25 = *(_QWORD*)(v20 + 40);
            *(_QWORD*)(v11 + 48) = v25;
            if (v25 == 0) {
              *(_QWORD*)(v20 + 32) = v13;
              goto LABEL_62;
            }
            *(_QWORD*)(v25 + 32) = v11;
            v13 = *(_QWORD*)(v11 + 32);
            *(_QWORD*)(v20 + 32) = v13;
            if (v13 != 0) {
              if (v11 != *(_QWORD*)(v13 + 40)) {
                *(_QWORD*)(v13 + 48) = v20;
                goto LABEL_64;
              }
            LABEL_62:
              *(_QWORD*)(v13 + 40) = v20;
            }
            else {
              *a2 = v20;
            }
          LABEL_64:
            *(_QWORD*)(v11 + 32) = v20;
            *(_QWORD*)(v20 + 40) = v11;
            v13 = *(_QWORD*)(v20 + 32);
            v14 = *(_QWORD*)(v13 + 40);
            *(_DWORD*)(v20 + 24) = 0;
            v22 = *(_QWORD*)(v14 + 48);
            *(_DWORD*)(v13 + 24) = 1;
            *(_QWORD*)(v13 + 40) = v22;
            if (v22 != 0) {
            LABEL_35:
              *(_QWORD*)(v22 + 32) = v13;
            }
          LABEL_36:
            v23 = *(_QWORD*)(v13 + 32);
            *(_QWORD*)(v14 + 32) = v23;
            if (v23 != 0) {
              if (v13 == *(_QWORD*)(v23 + 48)) {
                *(_QWORD*)(v23 + 48) = v14;
              }
              else {
                *(_QWORD*)(v23 + 40) = v14;
              }
              *(_QWORD*)(v14 + 48) = v13;
            }
            else {
              *a2 = v14;
              *(_QWORD*)(v14 + 48) = v13;
            }
          LABEL_47:
            *(_QWORD*)(v13 + 32) = v14;
            a1 = v11;
            v10 = (_QWORD*)*a2;
            if (v11 == *a2) {
              break;
            }
            goto LABEL_48;
          }
          *i = 0;
          *(_DWORD*)(v19 + 24) = 0;
          a1 = v13;
          *(_DWORD*)(v13 + 24) = 1;
          v10 = (_QWORD*)*a2;
          if (a1 == *a2) {
            break;
          }
        }
        else {
          if (v14 == 0 || *(_DWORD*)(v14 + 24) == 0) {
            v15 = *(_QWORD*)(v11 + 40);
            if (a1 != v15) {
              v16 = v11;
              v11 = a1;
              *(_DWORD*)(v16 + 24) = 0;
              v14 = *(_QWORD*)(v13 + 48);
              *(_DWORD*)(v13 + 24) = 1;
              v17 = *(_QWORD*)(v14 + 40);
              *(_QWORD*)(v13 + 48) = v17;
              if (v17 != 0) {
                goto LABEL_25;
              }
              goto LABEL_26;
            }
            v24 = *(_QWORD*)(v15 + 48);
            *(_QWORD*)(v11 + 40) = v24;
            if (v24 != 0) {
              *(_QWORD*)(v24 + 32) = v11;
              v13 = *(_QWORD*)(v11 + 32);
              *(_QWORD*)(v15 + 32) = v13;
              if (v13 != 0) {
                if (v11 != *(_QWORD*)(v13 + 48)) {
                  goto LABEL_43;
                }
              LABEL_57:
                *(_QWORD*)(v13 + 48) = v15;
              }
              else {
                *a2 = v15;
              }
            }
            else {
              *(_QWORD*)(v15 + 32) = v13;
              if (v11 == *(_QWORD*)(v13 + 48)) {
                goto LABEL_57;
              }
            LABEL_43:
              *(_QWORD*)(v13 + 40) = v15;
            }
            *(_QWORD*)(v11 + 32) = v15;
            *(_QWORD*)(v15 + 48) = v11;
            v13 = *(_QWORD*)(v15 + 32);
            *(_DWORD*)(v15 + 24) = 0;
            v14 = *(_QWORD*)(v13 + 48);
            *(_DWORD*)(v13 + 24) = 1;
            v17 = *(_QWORD*)(v14 + 40);
            *(_QWORD*)(v13 + 48) = v17;
            if (v17 != 0) {
            LABEL_25:
              *(_QWORD*)(v17 + 32) = v13;
            }
          LABEL_26:
            v18 = *(_QWORD*)(v13 + 32);
            *(_QWORD*)(v14 + 32) = v18;
            if (v18 != 0) {
              if (v13 == *(_QWORD*)(v18 + 40)) {
                *(_QWORD*)(v18 + 40) = v14;
              }
              else {
                *(_QWORD*)(v18 + 48) = v14;
              }
            }
            else {
              *a2 = v14;
            }
            *(_QWORD*)(v14 + 40) = v13;
            goto LABEL_47;
          }
          *i = 0;
          *(_DWORD*)(v14 + 24) = 0;
          a1 = v13;
          *(_DWORD*)(v13 + 24) = 1;
          v10 = (_QWORD*)*a2;
          if (a1 == *a2) {
            break;
          }
        }
      LABEL_48:
        v11 = *(_QWORD*)(a1 + 32);
      }
    }
    else {
      *a2 = a1;
      v10 = (_QWORD*)a1;
    }
  LABEL_66:
    *((_DWORD*)v10 + 6) = 0;
    return 0;
  }
  while (1) {
    while (1) {
      v7 = v6;
      v8 = v6[1];
      if (v3 >= v8) {
        break;
      }
      v6 = (_QWORD*)v7[5];
      if (v6 == nullptr) {
        goto LABEL_9;
      }
    }
    v9 = v7[2];
    if (v4 <= v9) {
      break;
    }
    v6 = (_QWORD*)v7[6];
    if (v6 == nullptr) {
      goto LABEL_9;
    }
  }
  if (v4 != v8 || v3 != v9) {
    return 3;
  }
  v27 = (_QWORD*)v7[9];
  *(_BYTE*)(a1 + 56) = 0;
  *v27 = a1 + 64;
  *(_QWORD*)(a1 + 64) = v7 + 8;
  *(_QWORD*)(a1 + 72) = v27;
  v7[9] = a1 + 64;
  return 0;
}

#pragma GCC visibility pop
