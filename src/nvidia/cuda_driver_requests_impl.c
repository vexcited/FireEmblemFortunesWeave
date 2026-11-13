#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1084c0(__int64 result);
__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_112680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_113ee0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_114a80(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2980(int*, unsigned __int64);
__int64 CudaDriverRoutine_1ff0d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_205fa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_206060(_QWORD);
__int64 CudaDriverRoutine_222b80(_QWORD, _QWORD);
__int64 CudaDriverRoutine_2b880(_QWORD*, __int64, int, __int64,
                                unsigned __int8*, __int64);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_9ad80(_QWORD);
__int64 CudaDriverRoutine_c4770(__int64, __int64);
__int64 CudaDriverRoutine_d83a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);
__int64 CudaDriverRoutine_d84d0(_QWORD, _QWORD);
__int64
CudaDriverRoutine_d84d0_alt1(__int64,
                             __int64) __asm__("CudaDriverRoutine_d84d0");
__int64 CudaDriverRoutine_d9230(__int64*, __int64, __int64);
__int64 CudaDriverRoutine_df060(_QWORD);
__int64 CudaDriverStub_112b20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_112b20_alt1(__int64, __int64*, unsigned int, __int64*,
                                   __int64*) __asm__("CudaDriverStub_112b20");
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 CudaDriverStub_57450(_QWORD, _QWORD);
__int64 CudaDriverStub_5a690(_QWORD, _QWORD);
__int64 CudaDriverStub_5ab60(_QWORD, _QWORD);
__int64 NvRmGpuAddressSpaceAllocationClose_plt(_QWORD);
__int64 NvRmGpuAddressSpaceAllocationCreate_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 NvRmGpuAddressSpaceClose_plt(_QWORD);
__int64 NvRmGpuAddressSpaceCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuAddressSpaceFlushDeferredMappings_plt(_QWORD);
__int64 NvRmGpuAddressSpaceGetInfo_plt(_QWORD, _QWORD);
__int64 NvRmGpuChannelEventIdControl_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuChannelGetInfo_plt(_QWORD, _QWORD);
__int64 NvRmGpuChannelKickoffPb_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD);
__int64 NvRmGpuChannelSetPreemptionModes_plt(_QWORD, _QWORD);
__int64 NvRmGpuDeviceAllocateMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 NvRmGpuDeviceCacheControl_plt(_QWORD, _QWORD);
__int64 NvRmGpuDeviceChooseKind_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuDeviceClearSmErrors_plt(_QWORD);
__int64 NvRmGpuDeviceGetInfo_plt(_QWORD);
__int64 NvRmGpuDeviceGetKindInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuDeviceRegisterBuffer_plt(_QWORD, _QWORD);
__int64 NvRmGpuDeviceResumeFromPause_plt(_QWORD);
__int64 NvRmGpuDeviceSetSmDebugMode_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuDeviceTriggerSuspend_plt(_QWORD);
__int64 NvRmGpuDeviceWaitForPause_plt(_QWORD, _QWORD);
__int64 NvRmGpuLibClose_plt(_QWORD);
__int64 NvRmGpuLibListDevices_plt(_QWORD, _QWORD);
__int64 NvRmGpuMappingClose_plt(_QWORD);
__int64 NvRmGpuMappingCreateFixed_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuMappingCreate_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 NvRmGpuProfilerClose_plt(_QWORD);
__int64 NvRmGpuRegOpsSessionClose_plt(_QWORD);
__int64 NvRmGpuTSGSubcontextCreate_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuTaskSchedulingGroupCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuTaskSchedulingGroupEventIdControl_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 NvRmGpuTaskSchedulingGroupReadSmErrorState_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuTaskSchedulingGroupSetL2SectorPromotionPolicy_plt(_QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemMgrInit_plt(void);
__int64 NvRmMemQueryHandleParams_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmSyncExtractSyncpoint_plt(_QWORD, _QWORD, _QWORD);
__int64 cuMemAlloc_v2_plt(_QWORD, _QWORD);
__int64 cuMemFree_v2_plt(void);
__int64 cuMemcpyDtoH_v2_plt(_QWORD, _QWORD, _QWORD);
__int64 cuda_GetAllocator_plt(void);
__int64 cuda_driver_checks_da280(__int64, __int64);
__int64 cuda_driver_misc_helpers_deeb0(_QWORD, _QWORD);
__int64 cuda_driver_small_28980(__int64, unsigned int, __int64, int, char,
                                char);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
extern _DWORD CudaDriverData_1130d64[3];
extern _DWORD CudaDriverData_1130d70[3];
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN CudaDriverData_1130fa8;
extern _UNKNOWN* CudaDriverData_1410658;
void CudaDriverRoutine_4728();
void CudaDriverRoutine_4730();
void CudaDriverRoutine_7370();
void CudaDriverRoutine_7378();
__int64 cuda_driver_requests_65a20(_DWORD* a1);
__int64 cuda_driver_requests_65aa0(__int64 a1);
__int64 cuda_driver_requests_65cc0(__int64 a1);
__int64 cuda_driver_requests_66b60(__int64 a1);
double cuda_driver_requests_66c60(__int64 a1);
double cuda_driver_requests_66cb0(__int64 a1);
__int64 cuda_driver_requests_66d20(__int64 a1);
__int64 cuda_driver_requests_66fd0(__int64 a1);
__int64 cuda_driver_requests_67070(__int64 a1);
__int64 cuda_driver_requests_670f0(__int64 a1);
__int64 cuda_driver_requests_671a0(__int64 a1);
__int64 cuda_driver_requests_671e0(__int64 a1);
__int64 cuda_driver_requests_67250(__int64 a1);
__int64 cuda_driver_requests_67270(__int64 a1);
__int64 cuda_driver_requests_672e0(__int64 a1);
__int64 cuda_driver_requests_67440(__int64 a1);
__int64 cuda_driver_requests_674c0(__int64 a1);
__int64 cuda_driver_requests_67710(__int64 a1);
__int64 cuda_driver_requests_677f0(__int64 a1);
__int64 cuda_driver_requests_67850(__int64 a1);
__int64 cuda_driver_requests_67870(__int64 a1);
__int64 cuda_driver_requests_678c0(__int64 a1);
__int64 cuda_driver_requests_67910(__int64 a1);
__int64 cuda_driver_requests_679a0(__int64 a1);
__int64 cuda_driver_requests_67a90(__int64 a1);
__int64 cuda_driver_requests_67ab0(__int64 a1);
__int64 cuda_driver_requests_67b30(__int64 a1);
__int64 cuda_driver_requests_67c90(__int64 a1);
__int64 cuda_driver_requests_67ff0(__int64 a1);
__int64 cuda_driver_requests_68130(__int64 a1);
__int64 cuda_driver_requests_681f0(__int64 a1);
__int64 cuda_driver_requests_68370(__int64 a1);
__int64 cuda_driver_requests_68470(__int64 a1);
__int64 cuda_driver_requests_68570(__int64 a1);
__int64 cuda_driver_requests_685c0(__int64 a1);
__int64 cuda_driver_requests_68620(__int64 a1);
__int64 cuda_driver_requests_68670(__int64 a1);
__int64 cuda_driver_requests_686f0(_DWORD* a1);
__int64 cuda_driver_requests_68970(_DWORD* a1);
__int64 cuda_driver_requests_689e0(__int64 a1);
__int64 cuda_driver_requests_68ae0(_DWORD* a1);
__int64 cuda_driver_requests_68d00(__int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_requests_68ec0(int* a1, int* a2, int a3, int a4, int a5);
__int64 cuda_driver_requests_68f40(__int64 result);
__int64 cuda_driver_requests_68f70(int a1);
__int64 cuda_driver_requests_68fa0(_DWORD* a1);
__int64 cuda_driver_requests_69260(__int64 a1);
__int64 cuda_driver_requests_69420(__int64 a1);
__int64 cuda_driver_requests_69450(unsigned __int64 a1, unsigned __int64 a2,
                                   _DWORD* a3);
__int64 cuda_driver_requests_69560(__int64 a1, _QWORD* a2);
__int64 cuda_driver_requests_69600(__int64 result);
__int64 cuda_driver_requests_69630(__int64 a1, _DWORD* a2, unsigned int* a3,
                                   _DWORD* a4);
__int64 cuda_driver_requests_69710(unsigned __int64 a1, __int64* a2);
__int64 cuda_driver_requests_697e0(unsigned __int64 a1, __int64 a2);
__int64 cuda_driver_requests_698a0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5);
__int64 cuda_driver_requests_69980(__int64 a1, _OWORD* a2);
__int64 cuda_driver_requests_699b0(__int64 a1, __int64 a2);
__int64 cuda_driver_requests_69a50(unsigned __int64 a1, __int64 a2, __int64 a3);
__int64 cuda_driver_requests_766e0(__int64 a1, __int64 a2, _DWORD* a3);
__int64 cuda_driver_requests_768a0(__int64 a1, __int64 a2, _DWORD* a3,
                                   __int64 a4);
__int64 cuda_driver_requests_76970(__int64 a1, __int64 a2, _DWORD* a3);
__int64 cuda_driver_requests_8e890(__int64* a1);
__int64 cuda_driver_requests_8e9c0(__int64 result, __int64 a2);

__int64 cuda_driver_requests_65a20(_DWORD* a1)
{
  if (*a1 >= 0xCu) {
    return 0;
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_65aa0(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_DWORD*)a1 < 0xCu) {
    return 2;
  }
  v3 = *(_QWORD*)(a1 + 4);
  v4 = *(_QWORD*)(v3 + 44);
  if (v4 != 0) {
    if (*(_QWORD*)(v3 + 36) != 0) {
      v5 = 20;
      v6 = 0;
      do {
        if (*(_QWORD*)(*(_QWORD*)(v3 + 44) + v5) != 0) {
          CudaDriverRoutine_12e340(*(_QWORD*)(*(_QWORD*)(v3 + 44) + v5));
          v3 = *(_QWORD*)(a1 + 4);
        }
        ++v6;
        v5 += 28;
      } while (*(_QWORD*)(v3 + 36) > v6);
      v4 = *(_QWORD*)(v3 + 44);
    }
    CudaDriverRoutine_12e340(v4);
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 60) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 60));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 88) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 88));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 96) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 96));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 112) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 112));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 184) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 184));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 192) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 192));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 208) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 208));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 236) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 236));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 248) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 248));
    v3 = *(_QWORD*)(a1 + 4);
  }
  v7 = *(_QWORD*)(v3 + 284);
  if (v7 != 0) {
    v8 = *(_QWORD*)(v7 + 4);
    if (v8 != 0) {
      CudaDriverRoutine_12e340(v8);
      v7 = *(_QWORD*)(*(_QWORD*)(a1 + 4) + 284LL);
    }
    CudaDriverRoutine_12e340(v7);
    v3 = *(_QWORD*)(a1 + 4);
  }
  v9 = *(_QWORD*)(v3 + 292);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 4);
    if (v10 != 0) {
      CudaDriverRoutine_12e340(v10);
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 4) + 292LL);
    }
    v11 = *(_QWORD*)(v9 + 12);
    if (v11 != 0) {
      CudaDriverRoutine_12e340(v11);
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 4) + 292LL);
    }
    v12 = *(_QWORD*)(v9 + 20);
    if (v12 != 0) {
      CudaDriverRoutine_12e340(v12);
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 4) + 292LL);
    }
    CudaDriverRoutine_12e340(v9);
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_QWORD*)(v3 + 312) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 312));
    v3 = *(_QWORD*)(a1 + 4);
  }
  if (*(_DWORD*)(v3 + 324) == 2 && *(_QWORD*)(v3 + 328) != 0) {
    CudaDriverRoutine_12e340(*(_QWORD*)(v3 + 328));
    v3 = *(_QWORD*)(a1 + 4);
  }
  CudaDriverRoutine_12e340(v3);
  return 0;
}

__int64 cuda_driver_requests_65cc0(__int64 a1)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _DWORD* v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;

  if (*(_DWORD*)a1 < 0x14u) {
    return 2;
  }
  v3 = NvRmGpuDeviceGetInfo_plt(*(_QWORD*)(a1 + 4));
  if (v3 == 0) {
    return 196623;
  }
  v5 = *(_QWORD*)(a1 + 12);
  v4 = (__int64*)(a1 + 12);
  v6 = v3;
  *(_QWORD*)(v5 + 340) = *(_QWORD*)(v3 + 456);
  *(_BYTE*)(*v4 + 4) = *(_BYTE*)(v3 + 153);
  *(_BYTE*)(*v4 + 5) = *(_BYTE*)(v3 + 47);
  *(_BYTE*)(*v4 + 6) = *(_BYTE*)(v3 + 53);
  *(_DWORD*)(*v4 + 8) = *(_DWORD*)(v3 + 620);
  *(_DWORD*)(*v4 + 12) = *(_DWORD*)(v3 + 636);
  *(_BYTE*)(*v4 + 16) = *(_BYTE*)(v3 + 162);
  *(_BYTE*)(*v4 + 17) = *(_BYTE*)(v3 + 55);
  *(_BYTE*)(*v4 + 18) = *(_BYTE*)(v3 + 35);
  *(_BYTE*)(*v4 + 19) = *(_BYTE*)(v3 + 99);
  *(_BYTE*)(*v4 + 20) = *(_BYTE*)(v3 + 205);
  *(_DWORD*)(*v4 + 24) = *(_DWORD*)(v3 + 624);
  *(_BYTE*)(*v4 + 28) = *(_BYTE*)(v3 + 204);
  *(_DWORD*)(*v4 + 32) = *(_DWORD*)(v3 + 384);
  *(_QWORD*)(*v4 + 36) = *(_QWORD*)(v3 + 672);
  *(_QWORD*)(*v4 + 44) = CudaDriverStub_12e330(28LL * *(_QWORD*)(*v4 + 36));
  v7 = *v4;
  if (*(_QWORD*)(*v4 + 44) == 0) {
    return 6;
  }
  if (*(_QWORD*)(v7 + 36) != 0) {
    v8 = 0;
    do {
      v9 = 32 * v8;
      v10 = 28 * v8;
      *(_DWORD*)(*(_QWORD*)(v7 + 44) + 28 * v8 + 8) =
          *(_DWORD*)(*(_QWORD*)(v6 + 664) + 32 * v8 + 24);
      v11 = *(_DWORD*)(*(_QWORD*)(v6 + 664) + 32 * v8);
      if (v11 >= 0x15) {
        v11 = 21;
      }
      *(_DWORD*)(*(_QWORD*)(*v4 + 44) + 28 * v8 + 4) = v11 + 1;
      *(_QWORD*)(*(_QWORD*)(*v4 + 44) + v10 + 12) =
          *(_QWORD*)(*(_QWORD*)(v6 + 664) + v9 + 16);
      *(_QWORD*)(*(_QWORD*)(*v4 + 44) + v10 + 20) = CudaDriverStub_12e330(
          4LL * *(_QWORD*)(*(_QWORD*)(*v4 + 44) + v10 + 12));
      v7 = *v4;
      v12 = *(_QWORD*)(*v4 + 44);
      if (*(_QWORD*)(v12 + v10 + 20) == 0) {
        return 6;
      }
      if (*(_QWORD*)(v12 + 28 * v8 + 12) != 0) {
        v13 = 0;
        do {
          *(_DWORD*)(*(_QWORD*)(v12 + v10 + 20) + 4 * v13) =
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 664) + v9 + 8) + 4 * v13);
          ++v13;
          v7 = *v4;
          v12 = *(_QWORD*)(*v4 + 44);
        } while (*(_QWORD*)(v12 + v10 + 12) > v13);
      }
    } while (*(_QWORD*)(v7 + 36) > (unsigned __int64)++v8);
  }
  *(_QWORD*)(v7 + 52) = *(_QWORD*)(v6 + 368);
  v14 = *(_QWORD*)(*v4 + 52);
  if (v14 != 0) {
    *(_QWORD*)(*v4 + 60) = CudaDriverStub_12e330(4 * v14);
    v15 = *v4;
    if (*(_QWORD*)(*v4 + 60) == 0) {
      return 6;
    }
    if (*(_QWORD*)(v15 + 52) != 0) {
      v16 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)(v15 + 60) + 4 * v16) =
            *(_DWORD*)(*(_QWORD*)(v6 + 360) + 4 * v16);
        ++v16;
        v15 = *v4;
      } while (*(_QWORD*)(*v4 + 52) > v16);
    }
  }
  else {
    *(_QWORD*)(*v4 + 60) = 0;
    v15 = *v4;
  }
  *(_QWORD*)(v15 + 68) = *(_QWORD*)(v6 + 752);
  *(_BYTE*)(*v4 + 76) = *(_BYTE*)(v6 + 65);
  *(_QWORD*)(*v4 + 80) = *(_QWORD*)(v6 + 336);
  v17 = (int)(strlen_plt(*(_QWORD*)(v6 + 232)) + 1);
  *(_QWORD*)(*v4 + 88) = CudaDriverStub_12e330(v17);
  v18 = *(_QWORD*)(*v4 + 88);
  if (v18 == 0) {
    return 6;
  }
  strncpy_plt(v18, *(_QWORD*)(v6 + 232), v17);
  v19 = (int)(strlen_plt(*(_QWORD*)(v6 + 240)) + 1);
  *(_QWORD*)(*v4 + 96) = CudaDriverStub_12e330(v19);
  v20 = *(_QWORD*)(*v4 + 96);
  if (v20 == 0) {
    return 6;
  }
  strncpy_plt(v20, *(_QWORD*)(v6 + 240), v19);
  *(_QWORD*)(*v4 + 104) = *(_QWORD*)(v6 + 656);
  *(_QWORD*)(*v4 + 112) = CudaDriverStub_12e330(4LL * *(_QWORD*)(*v4 + 104));
  v21 = *v4;
  if (*(_QWORD*)(*v4 + 112) == 0) {
    return 6;
  }
  if (*(_QWORD*)(v21 + 104) != 0) {
    v22 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)(v21 + 112) + 4 * v22) =
          *(_DWORD*)(*(_QWORD*)(v6 + 648) + 4 * v22);
      ++v22;
      v21 = *v4;
    } while (*(_QWORD*)(*v4 + 104) > v22);
  }
  v23 = *(_DWORD*)(v6 + 220);
  if (v23 == 1) {
    v24 = 2;
  }
  else {
    v24 = 3;
  }
  if (v23 != 0) {
    v25 = v24;
  }
  else {
    v25 = 1;
  }
  *(_DWORD*)(v21 + 120) = v25;
  v26 = *(_DWORD*)(v6 + 224);
  if (v26 == 1) {
    v27 = 2;
  }
  else {
    v27 = 3;
  }
  if (v26 != 0) {
    v28 = v27;
  }
  else {
    v28 = 1;
  }
  *(_DWORD*)(*v4 + 324) = v28;
  *(_DWORD*)(*v4 + 124) = *(_DWORD*)(v6 + 552);
  *(_DWORD*)(*v4 + 128) = *(_DWORD*)(v6 + 344);
  *(_QWORD*)(*v4 + 132) = *(_QWORD*)(v6 + 424);
  *(_DWORD*)(*v4 + 140) = *(_DWORD*)(v6 + 208);
  *(_DWORD*)(*v4 + 144) = *(_DWORD*)(v6 + 212);
  *(_DWORD*)(*v4 + 148) = *(_DWORD*)(v6 + 536);
  *(_DWORD*)(*v4 + 152) = *(_DWORD*)(v6 + 532);
  *(_DWORD*)(*v4 + 156) = *(_DWORD*)(v6 + 744);
  *(_DWORD*)(*v4 + 160) = *(_DWORD*)(v6 + 748);
  *(_BYTE*)(*v4 + 164) = *(_BYTE*)(v6 + 580);
  v29 = *(_DWORD*)(v6 + 8);
  if (v29 >= 3) {
    v29 = 3;
  }
  *(_DWORD*)(*v4 + 168) = v29 + 1;
  *(_BYTE*)(*v4 + 172) = *(_BYTE*)(v6 + 163);
  *(_BYTE*)(*v4 + 348) = *(_BYTE*)(v6 + 165);
  *(_BYTE*)(*v4 + 349) = *(_BYTE*)(v6 + 166);
  *(_BYTE*)(*v4 + 173) = *(_BYTE*)(v6 + 64);
  *(_QWORD*)(*v4 + 176) = *(_QWORD*)(v6 + 24);
  *(_QWORD*)(*v4 + 184) = CudaDriverStub_12e330(4LL * *(_QWORD*)(*v4 + 176));
  v30 = *v4;
  if (*(_QWORD*)(*v4 + 184) == 0) {
    return 6;
  }
  if (*(_QWORD*)(v30 + 176) != 0) {
    v31 = 0;
    do {
      v32 = *(_QWORD*)(v30 + 184);
      v33 = *(_DWORD*)(*(_QWORD*)(v6 + 16) + 4 * v31);
      if (v33 >= 3) {
        v33 = 3;
      }
      *(_DWORD*)(v32 + 4 * v31++) = v33 + 1;
      v30 = *v4;
    } while (*(_QWORD*)(*v4 + 176) > v31);
  }
  *(_QWORD*)(*v4 + 192) = CudaDriverStub_12e330(16);
  v34 = *(_QWORD*)(*v4 + 192);
  if (v34 == 0) {
    return 6;
  }
  *(_DWORD*)(v34 + 4) = *(_DWORD*)(*(_QWORD*)(v6 + 248) + 8LL);
  *(_DWORD*)(*(_QWORD*)(*v4 + 192) + 8LL) =
      *(_DWORD*)(*(_QWORD*)(v6 + 248) + 44LL);
  *(_DWORD*)(*(_QWORD*)(*v4 + 192) + 12LL) =
      *(_DWORD*)(*(_QWORD*)(v6 + 248) + 4LL);
  *(_QWORD*)(*v4 + 200) = *(_QWORD*)(v6 + 256);
  *(_QWORD*)(*v4 + 208) = CudaDriverStub_12e330(
      8LL * *(unsigned int*)(*(_QWORD*)(*v4 + 192) + 4LL));
  v35 = *v4;
  if (*(_QWORD*)(*v4 + 208) == 0) {
    return 6;
  }
  if (*(_DWORD*)(*(_QWORD*)(v35 + 192) + 4LL) != 0) {
    v36 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(v35 + 208) + 8 * v36) =
          *(_QWORD*)(*(_QWORD*)(v6 + 264) + 8 * v36);
      ++v36;
      v35 = *v4;
    } while (v36 < *(unsigned int*)(*(_QWORD*)(*v4 + 192) + 4LL));
  }
  *(_BYTE*)(v35 + 216) = *(_BYTE*)(v6 + 96);
  *(_DWORD*)(*v4 + 220) = *(_DWORD*)(v6 + 356);
  *(_DWORD*)(*v4 + 224) = *(_DWORD*)(v6 + 548);
  *(_QWORD*)(*v4 + 228) = *(_QWORD*)(v6 + 288);
  *(_QWORD*)(*v4 + 236) = CudaDriverStub_12e330(
      8LL * *(unsigned int*)(*(_QWORD*)(*v4 + 192) + 12LL));
  v37 = *v4;
  if (*(_QWORD*)(*v4 + 236) == 0) {
    return 6;
  }
  if (*(_DWORD*)(*(_QWORD*)(v37 + 192) + 12LL) != 0) {
    v38 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(v37 + 236) + 8 * v38) =
          *(_QWORD*)(*(_QWORD*)(v6 + 312) + 8 * v38);
      ++v38;
      v37 = *v4;
    } while (v38 < *(unsigned int*)(*(_QWORD*)(*v4 + 192) + 12LL));
  }
  *(_DWORD*)(v37 + 256) = *(_DWORD*)(v6 + 528);
  *(_DWORD*)(*v4 + 276) = *(_DWORD*)(v6 + 200);
  *(_BYTE*)(*v4 + 244) = *(_BYTE*)(v6 + 49);
  v39 = *(_DWORD*)(*v4 + 276) * *(_DWORD*)(*v4 + 256);
  *(_QWORD*)(*v4 + 248) = CudaDriverStub_12e330(12LL * v39);
  v40 = *v4;
  if (*(_QWORD*)(*v4 + 248) == 0) {
    return 6;
  }
  if (v39 >= 1) {
    v41 = 0;
    v42 = 0;
    do {
      *(_BYTE*)(*(_QWORD*)(*v4 + 248) + v41 + 4) =
          *(_BYTE*)(*(_QWORD*)(v6 + 568) + v42);
      *(_BYTE*)(*(_QWORD*)(*v4 + 248) + v41 + 5) =
          *(_BYTE*)(*(_QWORD*)(v6 + 568) + v42 + 1);
      *(_BYTE*)(*(_QWORD*)(*v4 + 248) + v41 + 6) =
          *(_BYTE*)(*(_QWORD*)(v6 + 568) + v42 + 2);
      *(_BYTE*)(*(_QWORD*)(*v4 + 248) + v41 + 7) =
          *(_BYTE*)(*(_QWORD*)(v6 + 568) + v42 + 3);
      *(_BYTE*)(*(_QWORD*)(*v4 + 248) + v41 + 8) =
          *(_BYTE*)(*(_QWORD*)(v6 + 568) + v42 + 4);
      v43 = *(_QWORD*)(v6 + 568) + v42;
      v42 += 6;
      v44 = *(_QWORD*)(*v4 + 248) + v41;
      v41 += 12;
      *(_BYTE*)(v44 + 9) = *(_BYTE*)(v43 + 5);
    } while (6LL * (unsigned int)v39 != v42);
    v40 = *v4;
  }
  *(_BYTE*)(v40 + 260) = *(_BYTE*)(v6 + 81);
  *(_BYTE*)(*v4 + 261) = *(_BYTE*)(v6 + 79);
  *(_DWORD*)(*v4 + 32) = *(_DWORD*)(v6 + 384);
  *(_BYTE*)(*v4 + 18) = *(_BYTE*)(v6 + 35);
  *(_BYTE*)(*v4 + 262) = *(_BYTE*)(v6 + 841);
  *(_BYTE*)(*v4 + 320) = *(_BYTE*)(v6 + 39);
  *(_BYTE*)(*v4 + 263) = *(_BYTE*)(v6 + 101);
  *(_BYTE*)(*v4 + 264) = *(_BYTE*)(v6 + 154);
  *(_BYTE*)(*v4 + 265) = *(_BYTE*)(v6 + 159);
  *(_BYTE*)(*v4 + 266) = *(_BYTE*)(v6 + 38);
  *(_BYTE*)(*v4 + 267) = *(_BYTE*)(v6 + 48);
  *(_BYTE*)(*v4 + 268) = *(_BYTE*)(v6 + 57);
  *(_BYTE*)(*v4 + 269) = *(_BYTE*)(v6 + 111);
  *(_BYTE*)(*v4 + 270) = *(_BYTE*)(v6 + 36);
  *(_QWORD*)(*v4 + 80) = *(_QWORD*)(v6 + 336);
  *(_BYTE*)(*v4 + 271) = *(_BYTE*)(v6 + 83);
  *(_DWORD*)(*v4 + 272) = *(_DWORD*)(v6 + 92);
  *(_BYTE*)(*v4 + 321) = *(_BYTE*)(v6 + 176);
  *(_DWORD*)(*v4 + 336) = *(_DWORD*)(v6 + 376);
  *(_QWORD*)(*v4 + 284) = CudaDriverStub_12e330(12);
  if (*(_QWORD*)(*v4 + 284) == 0) {
    return 6;
  }
  *(_QWORD*)(*(_QWORD*)(*v4 + 284) + 4LL) = CudaDriverStub_12e330(8);
  v45 = *(_QWORD*)(*(_QWORD*)(*v4 + 284) + 4LL);
  if (v45 == 0) {
    return 6;
  }
  *(_WORD*)(v45 + 4) = *(_WORD*)(v6 + 444);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 284) + 4LL) + 6LL) =
      *(_BYTE*)(v6 + 446);
  v46 = *(_QWORD*)(*(_QWORD*)(*v4 + 284) + 4LL);
  *(_BYTE*)(v46 + 7) = *(_BYTE*)(v46 + 7) & 0xE0 | *(_BYTE*)(v6 + 447) & 0x1F;
  *(_DWORD*)(*v4 + 280) = *(_DWORD*)(v6 + 540);
  *(_QWORD*)(*v4 + 292) = CudaDriverStub_12e330(28);
  if (*(_QWORD*)(*v4 + 292) == 0) {
    return 6;
  }
  *(_QWORD*)(*(_QWORD*)(*v4 + 292) + 4LL) = CudaDriverStub_12e330(12);
  if (*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 4LL) == 0) {
    return 6;
  }
  *(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) = CudaDriverStub_12e330(20);
  if (*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) == 0) {
    return 6;
  }
  *(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) = CudaDriverStub_12e330(20);
  v47 = *(_QWORD*)(*v4 + 292);
  if (*(_QWORD*)(v47 + 20) == 0) {
    return 6;
  }
  *(_BYTE*)(*(_QWORD*)(v47 + 12) + 4LL) = *(_BYTE*)(v6 + 488);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 5LL) =
      *(_BYTE*)(v6 + 489);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 6LL) =
      *(_BYTE*)(v6 + 490);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 7LL) =
      *(_BYTE*)(v6 + 491);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 8LL) =
      *(_BYTE*)(v6 + 492);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 9LL) =
      *(_BYTE*)(v6 + 493);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 10LL) =
      *(_BYTE*)(v6 + 494);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 11LL) =
      *(_BYTE*)(v6 + 495);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 12LL) =
      *(_BYTE*)(v6 + 496);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 13LL) =
      *(_BYTE*)(v6 + 497);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 14LL) =
      *(_BYTE*)(v6 + 498);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 15LL) =
      *(_BYTE*)(v6 + 499);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 16LL) =
      *(_BYTE*)(v6 + 500);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 17LL) =
      *(_BYTE*)(v6 + 501);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 18LL) =
      *(_BYTE*)(v6 + 502);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 12LL) + 19LL) =
      *(_BYTE*)(v6 + 503);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 4LL) =
      *(_BYTE*)(v6 + 504);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 5LL) =
      *(_BYTE*)(v6 + 505);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 6LL) =
      *(_BYTE*)(v6 + 506);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 7LL) =
      *(_BYTE*)(v6 + 507);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 8LL) =
      *(_BYTE*)(v6 + 508);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 9LL) =
      *(_BYTE*)(v6 + 509);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 10LL) =
      *(_BYTE*)(v6 + 510);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 11LL) =
      *(_BYTE*)(v6 + 511);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 12LL) =
      *(_BYTE*)(v6 + 512);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 13LL) =
      *(_BYTE*)(v6 + 513);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 14LL) =
      *(_BYTE*)(v6 + 514);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 15LL) =
      *(_BYTE*)(v6 + 515);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 16LL) =
      *(_BYTE*)(v6 + 516);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 17LL) =
      *(_BYTE*)(v6 + 517);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 18LL) =
      *(_BYTE*)(v6 + 518);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 20LL) + 19LL) =
      *(_BYTE*)(v6 + 519);
  *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 4LL) + 4LL) =
      *(_WORD*)(v6 + 470);
  *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 4LL) + 6LL) =
      *(_WORD*)(v6 + 474);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 292) + 4LL) + 8LL) =
      *(_BYTE*)(v6 + 478);
  v48 = *(_DWORD*)(v6 + 784) != 0 ? 2 : 1;
  *(_DWORD*)(*v4 + 300) = v48;
  v49 = (int)(strlen_plt(*(_QWORD*)(v6 + 800)) + 1);
  *(_QWORD*)(*v4 + 312) = CudaDriverStub_12e330(v49);
  v50 = *(_QWORD*)(*v4 + 312);
  if (v50 == 0) {
    return 6;
  }
  strncpy_plt(v50, *(_QWORD*)(v6 + 800), v49);
  v51 = *v4;
  if (*(_DWORD*)(*v4 + 324) == 2) {
    *(_QWORD*)(*v4 + 328) = CudaDriverStub_12e330(8);
    v52 = *(_DWORD**)(*v4 + 328);
    if (v52 != nullptr) {
      *v52 = *(_DWORD*)(v6 + 448);
      *(_DWORD*)(*(_QWORD*)(*v4 + 328) + 4LL) = *(_DWORD*)(v6 + 452);
      v51 = *v4;
      goto LABEL_76;
    }
    return 6;
  }
LABEL_76:
  *(_BYTE*)(v51 + 350) = *(_BYTE*)(v6 + 848);
  *(_DWORD*)(*v4 + 352) = *(_DWORD*)(v6 + 852);
  *(_QWORD*)(*v4 + 384) = *(_QWORD*)(v6 + 400);
  *(_QWORD*)(*v4 + 376) = CudaDriverStub_12e330(24LL * *(_QWORD*)(*v4 + 384));
  v53 = *v4;
  if (*(_QWORD*)(*v4 + 376) == 0) {
    return 6;
  }
  if (*(_QWORD*)(v53 + 384) != 0) {
    v54 = 0;
    v55 = 0;
    do {
      ++v55;
      *(_DWORD*)(*(_QWORD*)(v53 + 376) + v54) =
          *(_DWORD*)(*(_QWORD*)(v6 + 392) + v54);
      *(_BYTE*)(*(_QWORD*)(*v4 + 376) + v54 + 4) =
          *(_BYTE*)(*(_QWORD*)(v6 + 392) + v54 + 4);
      *(_QWORD*)(*(_QWORD*)(*v4 + 376) + v54 + 8) =
          *(_QWORD*)(*(_QWORD*)(v6 + 392) + v54 + 8);
      v56 = *(_QWORD*)(*(_QWORD*)(v6 + 392) + v54 + 16);
      v57 = *(_QWORD*)(*v4 + 376) + v54;
      v54 += 24;
      *(_QWORD*)(v57 + 16) = v56;
      v53 = *v4;
    } while (*(_QWORD*)(*v4 + 384) > v55);
  }
  *(_DWORD*)(v53 + 392) = *(_DWORD*)(v6 + 880);
  return 0;
}

__int64 cuda_driver_requests_66b60(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuRegOpsSessionClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

double cuda_driver_requests_66c60(__int64 a1)
{
  double result;
  double v3;

  if (*(_DWORD*)a1 >= 0x14u) {
    NvRmSyncExtractSyncpoint_plt(*(_QWORD*)(a1 + 4), 0, &v3);
    result = v3;
    *(double*)(a1 + 12) = v3;
  }
  return result;
}

double cuda_driver_requests_66cb0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v4;
  double result;
  struct {
    _QWORD v6[2];
    double v7;
  } v6_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)a1 >= 0x14u) {
    NvRmGpuTaskSchedulingGroupReadSmErrorState_plt(*(_QWORD*)(a1 + 4), v6_.v6,
                                                   *(unsigned int*)(a1 + 36)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(double, "d0", "=w"));
    v4 = v6_.v6[0];
    *(_QWORD*)(a1 + 20) = v6_.v6[1];
    *(_QWORD*)(a1 + 12) = v4;
    result = v6_.v7;
    *(double*)(a1 + 28) = v6_.v7;
  }
  return result;
}

__int64 cuda_driver_requests_66d20(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[8];
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;

  if (*(_DWORD*)a1 < 0x34u) {
    return 2;
  }
  v14 = v1;
  v15 = v2;
  v5 = *(_QWORD*)(a1 + 4);
  memset(v9, 0, sizeof(v9));
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  NvRmGpuChannelGetInfo_plt(v5, v9);
  v6 = v11;
  *(_QWORD*)(a1 + 16) = *((_QWORD*)&v11 + 1);
  *(_QWORD*)(a1 + 24) = v6;
  if ((unsigned int)v10 > 2) {
    return 4;
  }
  v7 = v12;
  *(_DWORD*)(a1 + 12) = v10 + 1;
  v8 = *((_QWORD*)&v12 + 1);
  *(_QWORD*)(a1 + 32) = v7;
  *(_QWORD*)(a1 + 40) = v8;
  return 0;
}

__int64 cuda_driver_requests_66fd0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  _BYTE v6[12];
  unsigned int v7;
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)a1 < 0x14u) {
    return 2;
  }
  v8 = v1;
  v9 = v2;
  v6[0] = *(_BYTE*)(a1 + 12);
  v6[8] = *(_BYTE*)(a1 + 13);
  v4 = *(_DWORD*)(a1 + 16) - 1;
  if (v4 > 3) {
    return 4;
  }
  v5 = *(_QWORD*)(a1 + 4);
  v7 = v4;
  return NvRmGpuChannelSetPreemptionModes_plt(v5, v6);
}

__int64 cuda_driver_requests_67070(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  if (*(_DWORD*)a1 < 0x20u) {
    return 2;
  }
  v4 = *(_DWORD*)(a1 + 28);
  if (v4 == 1) {
    v5 = 0;
    goto LABEL_7;
  }
  if (v4 == 2) {
    v5 = 1;
  LABEL_7:
    v7 = v1;
    v8 = v2;
    v6 = v5;
    return NvRmGpuTSGSubcontextCreate_plt(
        *(_QWORD*)(a1 + 12), *(_QWORD*)(a1 + 20), &v6, *(_QWORD*)(a1 + 4));
  }
  return 4;
}

__int64 cuda_driver_requests_670f0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _OWORD* v4;
  _QWORD v5[5];

  if (*(_DWORD*)a1 < 0x1Cu) {
    return 2;
  }
  v5[3] = v1;
  v5[4] = v2;
  v4 = *(_OWORD**)(a1 + 20);
  memset(v5, 0, 24);
  if (v4 != nullptr) {
    *(_OWORD*)&v5[1] = *v4;
  }
  return NvRmGpuTaskSchedulingGroupCreate_plt(*(_QWORD*)(a1 + 4), v5,
                                              *(_QWORD*)(a1 + 12));
}

__int64 cuda_driver_requests_671a0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(_DWORD*)a1 < 0x1Cu) {
    return 2;
  }
  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 12) - 1;
  v4 = *(_QWORD*)(a1 + 20);
  v5 = *(_QWORD*)(a1 + 4);
  if (v3 >= 3) {
    v6 = 0xFFFFFFFFLL;
  }
  else {
    v6 = v3;
  }
  if (v2 - 1 >= 6) {
    v7 = 0xFFFFFFFFLL;
  }
  else {
    v7 = v2;
  }
  return NvRmGpuTaskSchedulingGroupEventIdControl_plt(v5, v6, v7, v4);
}

__int64 cuda_driver_requests_671e0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(_DWORD*)a1 < 0x1Cu) {
    return 2;
  }
  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 12) - 1;
  v4 = *(_QWORD*)(a1 + 20);
  v5 = *(_QWORD*)(a1 + 4);
  if (v3 >= 3) {
    v6 = 0xFFFFFFFFLL;
  }
  else {
    v6 = v3;
  }
  if (v2 - 1 >= 6) {
    v7 = 0xFFFFFFFFLL;
  }
  else {
    v7 = v2;
  }
  return NvRmGpuChannelEventIdControl_plt(v5, v6, v7, v4);
}

__int64 cuda_driver_requests_67250(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuAddressSpaceClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_67270(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  __int64 v5;
  __int128 v6;
  _QWORD v7[6];
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)a1 < 0x34u) {
    return 2;
  }
  v8 = v1;
  v9 = v2;
  v4 = *(_DWORD*)(a1 + 20);
  v5 = *(_QWORD*)(a1 + 12);
  memset(v7, 0, 40);
  LODWORD(v7[0]) = v4;
  v6 = *(_OWORD*)(a1 + 24);
  v7[3] = *(_QWORD*)(a1 + 40);
  LOBYTE(v4) = *(_BYTE*)(a1 + 48);
  *(_OWORD*)&v7[1] = v6;
  LOBYTE(v7[4]) = v4;
  return NvRmGpuAddressSpaceCreate_plt(*(_QWORD*)(a1 + 4), v7, v5);
}

__int64 cuda_driver_requests_672e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[8];

  if (*(_DWORD*)a1 < 0x14u) {
    return 2;
  }
  v10[6] = v1;
  v10[7] = v2;
  NvRmGpuAddressSpaceGetInfo_plt(*(_QWORD*)(a1 + 4), v10);
  *(_QWORD*)(*(_QWORD*)(a1 + 12) + 12LL) = v10[1];
  *(_QWORD*)(*(_QWORD*)(a1 + 12) + 4LL) =
      CudaDriverStub_12e330(24LL * *(_QWORD*)(*(_QWORD*)(a1 + 12) + 12LL));
  v5 = *(_QWORD*)(a1 + 12);
  if (*(_QWORD*)(v5 + 4) == 0) {
    return 6;
  }
  if (*(_QWORD*)(v5 + 12) != 0) {
    v6 = 0;
    v7 = 0;
    do {
      ++v7;
      *(_QWORD*)(*(_QWORD*)(v5 + 4) + v6 + 4) = *(_QWORD*)(v10[0] + v6);
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 12) + 4LL) + v6 + 12) =
          *(_DWORD*)(v10[0] + v6 + 8);
      v8 = *(_QWORD*)(v10[0] + v6 + 16);
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 12) + 4LL) + v6;
      v6 += 24;
      *(_QWORD*)(v9 + 16) = v8;
      v5 = *(_QWORD*)(a1 + 12);
    } while (*(_QWORD*)(v5 + 12) > v7);
  }
  return 0;
}

__int64 cuda_driver_requests_67440(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuLibClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_674c0(__int64 a1)
{
  int* v3;
  unsigned __int64 v4;
  int v5;

  if (*(_DWORD*)a1 < 0x1Cu) {
    return 2;
  }
  v3 = (int*)NvRmGpuLibListDevices_plt(*(_QWORD*)(a1 + 12), a1 + 4);
  if (*(_QWORD*)(a1 + 4) != 0) {
    v4 = 0;
    do {
      v5 = *v3;
      v3 += 4;
      *(_DWORD*)(*(_QWORD*)(a1 + 20) + 4 * v4++) = v5;
    } while (*(_QWORD*)(a1 + 4) > v4);
  }
  return 0;
}

__int64 cuda_driver_requests_67710(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuProfilerClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_677f0(__int64 a1)
{
  int v2;

  if (*(_DWORD*)a1 < 0x20u) {
    return 2;
  }
  v2 = *(_DWORD*)(a1 + 28);
  if (v2 == 1) {
    return NvRmGpuDeviceSetSmDebugMode_plt(
        *(_QWORD*)(a1 + 20), *(_QWORD*)(a1 + 12), *(_QWORD*)(a1 + 4), 0);
  }
  if (v2 == 2) {
    return NvRmGpuDeviceSetSmDebugMode_plt(
        *(_QWORD*)(a1 + 20), *(_QWORD*)(a1 + 12), *(_QWORD*)(a1 + 4), 1);
  }
  return 4;
}

__int64 cuda_driver_requests_67850(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuDeviceTriggerSuspend_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_67870(__int64 a1)
{
  if (*(_DWORD*)a1 < 0x30u) {
    return 2;
  }
  if (*(_DWORD*)(a1 + 12) == 0x80000000) {
    return NvRmGpuChannelKickoffPb_plt(
        *(_QWORD*)(a1 + 4), 0x80000000LL, *(_QWORD*)(a1 + 16),
        *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40));
  }
  return 0;
}

__int64 cuda_driver_requests_678c0(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuDeviceResumeFromPause_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_67910(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuDeviceClearSmErrors_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_679a0(__int64 a1)
{
  _QWORD* v1;
  __int64 result;
  unsigned int v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  _QWORD vars0[2];

  v1 = &vars0[-6 * *(unsigned int*)(a1 + 12)];
  if (*(_DWORD*)a1 < 0x2Cu) {
    return 2;
  }
  result = NvRmGpuDeviceWaitForPause_plt(*(_QWORD*)(a1 + 4), v1);
  v4 = *(_DWORD*)(a1 + 16);
  if (v4 >= 0x40 && *(_DWORD*)(a1 + 12) != 0) {
    v5 = v1 + 4;
    LODWORD(v6) = 1;
    v7 = 0;
    do {
      if ((_DWORD)v6 != 0) {
        v8 = 0;
        v9 = v5;
        do {
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 20) + 8 * v7) + 8 * v8) =
              *(v9 - 4);
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 28) + 8 * v7) + 8 * v8) =
              *(v9 - 2);
          v10 = *v9;
          v9 += 6;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 36) + 8 * v7) + 8 * v8++) = v10;
          v6 = *(unsigned int*)(a1 + 12);
        } while (v8 < v6);
        v4 = *(_DWORD*)(a1 + 16);
      }
      ++v7;
      ++v5;
    } while (v7 < v4 >> 6);
  }
  return result;
}

__int64 cuda_driver_requests_67a90(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuAddressSpaceFlushDeferredMappings_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_67ab0(__int64 a1)
{
  unsigned int v1;
  __int16 v3;
  bool v4;

  v1 = *(_DWORD*)a1;
  v4 = false;
  v3 = 0;
  if (v1 < 0x10) {
    return 2;
  }
  v4 = *(_BYTE*)(a1 + 13) != 0;
  if (*(_BYTE*)(a1 + 12) != 0) {
    LOBYTE(v3) = 1;
  }
  if (*(_BYTE*)(a1 + 14) != 0) {
    HIBYTE(v3) = 1;
  }
  return NvRmGpuDeviceCacheControl_plt(*(_QWORD*)(a1 + 4), &v3);
}

__int64 cuda_driver_requests_67b30(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuMappingClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_67c90(__int64 a1)
{
  unsigned int v2;
  int v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned __int64 v22;

  v8 = 0;
  v7 = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v16 = 0;
  v17 = cuda_GetAllocator_plt();
  v19 = 0;
  v2 = *(_DWORD*)a1;
  v18 = 0;
  v20 = 0;
  v22 = 0xFFFFFFFF00000003LL;
  if (v2 < 0x4C) {
    return 2;
  }
  v9 = *(_DWORD*)(a1 + 20);
  v11 = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(a1 + 36) != 0) {
    LOBYTE(v16) = *(_BYTE*)(a1 + 37);
  }
  v4 = *(_DWORD*)(a1 + 32);
  if (v4 <= 3) {
    switch (v4) {
    case 1:
      v10 = 0;
      v5 = *(_DWORD*)(a1 + 40);
      if (v5 > 2) {
        goto LABEL_26;
      }
      goto LABEL_36;
    case 2:
      v10 = 1;
      v5 = *(_DWORD*)(a1 + 40);
      if (v5 <= 2) {
        goto LABEL_36;
      }
      goto LABEL_26;
    case 3:
      v10 = 2;
      v5 = *(_DWORD*)(a1 + 40);
      if (v5 > 2) {
        goto LABEL_26;
      }
    LABEL_36:
      if (v5 == 1) {
        v21 = 0;
        if (*(_BYTE*)(a1 + 38) == 0) {
          goto LABEL_42;
        }
        goto LABEL_41;
      }
      if (v5 == 2) {
        v21 = 1;
        if (*(_BYTE*)(a1 + 38) == 0) {
          goto LABEL_42;
        }
      LABEL_41:
        BYTE4(v14) = *(_BYTE*)(a1 + 39);
        goto LABEL_42;
      }
      goto LABEL_52;
    default:
      break;
    }
  LABEL_21:
    v10 = -1;
    v5 = *(_DWORD*)(a1 + 40);
    if (v5 > 2) {
      goto LABEL_26;
    }
    goto LABEL_36;
  }
  if (v4 > 5) {
    if (v4 == 6) {
      v10 = 5;
      v5 = *(_DWORD*)(a1 + 40);
      if (v5 <= 2) {
        goto LABEL_36;
      }
      goto LABEL_26;
    }
    if (v4 == 0x7FFFFFFF) {
      v10 = 0x7FFFFFFF;
      v5 = *(_DWORD*)(a1 + 40);
      if (v5 > 2) {
        goto LABEL_26;
      }
      goto LABEL_36;
    }
    goto LABEL_21;
  }
  if (v4 == 4) {
    v10 = 3;
    v5 = *(_DWORD*)(a1 + 40);
    if (v5 > 2) {
      goto LABEL_26;
    }
    goto LABEL_36;
  }
  v10 = 4;
  v5 = *(_DWORD*)(a1 + 40);
  if (v5 <= 2) {
    goto LABEL_36;
  }
LABEL_26:
  switch (v5) {
  case 3:
    v21 = 2;
    if (*(_BYTE*)(a1 + 38) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  case 4:
    v21 = 3;
    if (*(_BYTE*)(a1 + 38) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  case 0x7FFFFFFF:
    v21 = 0x7FFFFFFF;
    if (*(_BYTE*)(a1 + 38) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  default:
    break;
  }
LABEL_52:
  v21 = -1;
  if (*(_BYTE*)(a1 + 38) != 0) {
    goto LABEL_41;
  }
LABEL_42:
  v6 = *(_DWORD*)(a1 + 52) - 1;
  if (v6 <= 2) {
    v12 = CudaDriverData_1130d64[v6];
    if (*(_BYTE*)(a1 + 56) == 0) {
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v12 = -1;
  if (*(_BYTE*)(a1 + 56) != 0) {
  LABEL_46:
    v18 = *(_QWORD*)(a1 + 60);
  }
LABEL_47:
  if (*(_BYTE*)(a1 + 44) != 0) {
    LODWORD(v22) = *(_DWORD*)(a1 + 48);
  }
  if (*(_BYTE*)(a1 + 68) != 0) {
    HIDWORD(v22) = *(_DWORD*)(a1 + 72);
  }
  return NvRmMemHandleAllocAttr_plt(*(_QWORD*)(a1 + 4), &v7,
                                    *(_QWORD*)(a1 + 12));
}

__int64 cuda_driver_requests_67ff0(__int64 a1)
{
  __int64 v2;

  v2 = 0x100FFFFFFFFLL;
  if (*(_DWORD*)a1 < 0x24u) {
    return 2;
  }
  if (*(_BYTE*)(a1 + 12) != 0) {
    BYTE5(v2) = *(_BYTE*)(a1 + 11) != 0;
  }
  if (*(_BYTE*)(a1 + 8) != 0) {
    LODWORD(v2) = *(_DWORD*)(a1 + 4);
  }
  if (*(_BYTE*)(a1 + 10) != 0) {
    BYTE4(v2) = *(_BYTE*)(a1 + 9) != 0;
  }
  if ((unsigned int)(*(_DWORD*)(a1 + 16) - 1) > 3 ||
      (unsigned int)(*(_DWORD*)(a1 + 20) - 1) > 2) {
    return 0;
  }
  else {
    return NvRmGpuDeviceRegisterBuffer_plt(*(_QWORD*)(a1 + 28),
                                           *(unsigned int*)(a1 + 24));
  }
}

__int64 cuda_driver_requests_68130(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD v9[13];

  if (*(_DWORD*)a1 < 0x30u) {
    return 2;
  }
  *(_QWORD*)&v9[9] = v1;
  *(_QWORD*)&v9[11] = v2;
  memset(&v9[1], 0, 32);
  v9[2] = -1;
  v9[7] = -1;
  LOBYTE(v9[8]) = 1;
  v4 = (unsigned int)(*(_DWORD*)(a1 + 12) - 1);
  *(_QWORD*)&v9[4] = 0x100000002LL;
  if ((unsigned int)v4 > 2 || *(_DWORD*)(a1 + 24) != 2 ||
      (unsigned int)(*(_DWORD*)(a1 + 44) - 1) > 3) {
    return 0;
  }
  v5 = *(_DWORD*)(a1 + 28);
  v9[6] = *(_DWORD*)(a1 + 44) - 1;
  v6 = *(_QWORD*)(a1 + 16);
  v7 = *(_QWORD*)(a1 + 32);
  v8 = *(_QWORD*)(a1 + 4);
  v9[0] = v5;
  return NvRmGpuDeviceAllocateMemory_plt(v8, v4, v6, 2048, v9, v7);
}

__int64 cuda_driver_requests_681f0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  int v4;
  int v6;
  int v7;
  int v8;
  _QWORD v9[6];
  __int64 v10;
  __int64 v11;
  int v12;

  if (*(_DWORD*)a1 < 0x20u) {
    return 2;
  }
  v10 = v1;
  v11 = v2;
  v4 = *(_DWORD*)(a1 + 12);
  memset(v9, 0, 36);
  if (v4 == 3) {
    *(_OWORD*)((char*)&v9[2] + 4) = 0u;
    *(_OWORD*)((char*)v9 + 4) = 0u;
    LODWORD(v9[0]) = 3;
    goto LABEL_13;
  }
  if (v4 == 2) {
    LODWORD(v9[0]) = 2;
    v8 = *(unsigned __int8*)(a1 + 17);
    *(_OWORD*)((char*)v9 + 4) = 0u;
    *(_OWORD*)((char*)&v9[2] + 4) = 0u;
    BYTE4(v9[0]) = v8 != 0;
    BYTE6(v9[0]) = *(_BYTE*)(a1 + 16) != 0;
    goto LABEL_13;
  }
  result = 0;
  if (v4 != 1) {
    return result;
  }
  v6 = *(unsigned __int8*)(a1 + 16);
  BYTE4(v9[0]) = *(_BYTE*)(a1 + 17) != 0;
  v7 = *(_DWORD*)(a1 + 28);
  BYTE6(v9[0]) = v6 != 0;
  if (v7 > 31) {
    if (v7 == 32) {
      HIDWORD(v9[1]) = 4;
      goto LABEL_13;
    }
    if (v7 != 64) {
      if (v7 == 128) {
        HIDWORD(v9[1]) = 6;
        goto LABEL_13;
      }
      goto LABEL_22;
    }
    HIDWORD(v9[1]) = 5;
  }
  else {
    if (v7 == 8) {
      HIDWORD(v9[1]) = 1;
      goto LABEL_13;
    }
    if (v7 != 16) {
      if (v7 == 24) {
        HIDWORD(v9[1]) = 3;
        goto LABEL_13;
      }
    LABEL_22:
      HIDWORD(v9[1]) = 0;
      goto LABEL_13;
    }
    HIDWORD(v9[1]) = 2;
  }
LABEL_13:
  result = NvRmGpuDeviceChooseKind_plt(*(_QWORD*)(a1 + 4), v9, &v12);
  if ((_DWORD)result == 0) {
    **(_DWORD**)(a1 + 20) = v12;
  }
  return result;
}

__int64 cuda_driver_requests_68370(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  _QWORD v13[5];

  if (*(_DWORD*)a1 < 0x5Cu) {
    return 2;
  }
  v13[3] = v1;
  v13[4] = v2;
  v4 = *(_DWORD*)(a1 + 56);
  v11 = (__typeof__(v11)){0};
  *(_QWORD*)((char*)&v11 + 4) = v4 | 0xFFFFFFFF00000000LL;
  v5 = *(_QWORD*)(a1 + 60);
  v12 = (__typeof__(v12)){0};
  v10 = v5;
  DWORD2(v12) = *(_DWORD*)(a1 + 68);
  BYTE12(v11) = *(_BYTE*)(a1 + 72);
  HIBYTE(v11) = *(_BYTE*)(a1 + 73);
  BYTE1(v12) = *(_BYTE*)(a1 + 74);
  BYTE13(v11) = *(_BYTE*)(a1 + 75);
  BYTE3(v12) = *(_BYTE*)(a1 + 76);
  LOBYTE(v12) = *(_BYTE*)(a1 + 88);
  v6 = *(_DWORD*)(a1 + 80) - 1;
  if (v6 <= 2) {
    DWORD3(v12) = CudaDriverData_1130d70[v6];
  }
  v7 = *(_DWORD*)(a1 + 84);
  if (v7 == 1) {
    v8 = 0;
    goto LABEL_9;
  }
  if (v7 == 2) {
    v8 = 1;
  LABEL_9:
    LODWORD(v11) = v8;
  }
  result = ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, __int64*, _QWORD,
                         _QWORD*))NvRmGpuMappingCreateFixed_plt)(
      *(_QWORD*)(a1 + 8), *(unsigned int*)(a1 + 4), *(_QWORD*)(a1 + 40),
      *(_QWORD*)(a1 + 24), &v10, *(_QWORD*)(a1 + 32), v13);
  *(_QWORD*)(a1 + 48) = v13[0];
  return result;
}

__int64 cuda_driver_requests_68470(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  _QWORD v13[5];

  if (*(_DWORD*)a1 < 0x5Cu) {
    return 2;
  }
  v13[3] = v1;
  v13[4] = v2;
  v4 = *(_DWORD*)(a1 + 56);
  v11 = (__typeof__(v11)){0};
  *(_QWORD*)((char*)&v11 + 4) = v4 | 0xFFFFFFFF00000000LL;
  v5 = *(_QWORD*)(a1 + 60);
  v12 = (__typeof__(v12)){0};
  v10 = v5;
  DWORD2(v12) = *(_DWORD*)(a1 + 68);
  BYTE12(v11) = *(_BYTE*)(a1 + 72);
  HIBYTE(v11) = *(_BYTE*)(a1 + 73);
  BYTE1(v12) = *(_BYTE*)(a1 + 74);
  BYTE13(v11) = *(_BYTE*)(a1 + 75);
  BYTE3(v12) = *(_BYTE*)(a1 + 76);
  LOBYTE(v12) = *(_BYTE*)(a1 + 88);
  v6 = *(_DWORD*)(a1 + 80) - 1;
  if (v6 <= 2) {
    DWORD3(v12) = CudaDriverData_1130d70[v6];
  }
  v7 = *(_DWORD*)(a1 + 84);
  if (v7 == 1) {
    v8 = 0;
    goto LABEL_9;
  }
  if (v7 == 2) {
    v8 = 1;
  LABEL_9:
    LODWORD(v11) = v8;
  }
  result = NvRmGpuMappingCreate_plt(
      *(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 4), *(_QWORD*)(a1 + 24), &v10,
      *(_QWORD*)(a1 + 32), v13);
  *(_QWORD*)(a1 + 48) = v13[0];
  return result;
}

__int64 cuda_driver_requests_68570(__int64 a1)
{
  int v2;

  if (*(_DWORD*)a1 < 0x24u) {
    return 2;
  }
  if ((*(_DWORD*)(a1 + 24) & 3) != 0) {
    v2 = 3;
  }
  else {
    v2 = 0;
  }
  return NvRmMemMap_plt(*(unsigned int*)(a1 + 4), *(_QWORD*)(a1 + 8),
                        *(_QWORD*)(a1 + 16), v2 | *(_DWORD*)(a1 + 24) & 0x1C7u,
                        *(_QWORD*)(a1 + 28));
}

__int64 cuda_driver_requests_685c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD v5[4];

  if (*(_DWORD*)a1 < 0x18u) {
    return 2;
  }
  v5[2] = v1;
  v5[3] = v2;
  result = NvRmGpuDeviceGetKindInfo_plt(*(_QWORD*)(a1 + 4),
                                        *(unsigned int*)(a1 + 12), v5);
  *(_QWORD*)(a1 + 16) = HIDWORD(v5[1]);
  return result;
}

__int64 cuda_driver_requests_68620(__int64 a1)
{
  if (*(_DWORD*)a1 >= 0xCu) {
    return NvRmGpuAddressSpaceAllocationClose_plt(*(_QWORD*)(a1 + 4));
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_68670(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[3];
    int v12;
  } v11_;
  _QWORD v13[4];

  if (*(_DWORD*)a1 < 0x38u) {
    return 2;
  }
  v13[2] = v1;
  v13[3] = v2;
  v4 = *(_QWORD*)(a1 + 36);
  v5 = *(_BYTE*)(a1 + 32);
  v6 = *(_QWORD*)(a1 + 4);
  v8 = *(unsigned int*)(a1 + 12);
  v13[0] = 0;
  v13[1] = v4;
  v10 = *(_QWORD*)(a1 + 16);
  v9 = *(_QWORD*)(a1 + 24);
  BYTE4(v13[0]) = v5;
  result =
      NvRmGpuAddressSpaceAllocationCreate_plt(v10, v6, v8, v13, v9, v11_.v11);
  *(_QWORD*)(a1 + 44) = v11_.v11[0];
  *(_DWORD*)(a1 + 52) = v11_.v12;
  return result;
}

__int64 cuda_driver_requests_686f0(_DWORD* a1)
{
  __int64 result;
  struct {
    _BYTE v5[40];
    int v6;
  } v5_;

  if (*a1 < 0xCu) {
    return 2;
  }
  result = NvRmMemQueryHandleParams_plt((unsigned int)a1[1], 0, v5_.v5, 56);
  a1[2] = v5_.v6;
  return result;
}

__int64 cuda_driver_requests_68970(_DWORD* a1)
{
  if (*a1 >= 0x24u) {
    a1[8] = -1;
  }
  return 2;
}

__int64 cuda_driver_requests_689e0(__int64 a1)
{
  if (*(_DWORD*)a1 < 0x10u) {
    return 2;
  }
  if ((unsigned int)(*(_DWORD*)(a1 + 12) - 1) > 2) {
    return 4;
  }
  return NvRmGpuTaskSchedulingGroupSetL2SectorPromotionPolicy_plt(
      *(_QWORD*)(a1 + 4));
}

__int64 cuda_driver_requests_68ae0(_DWORD* a1)
{
  if (*a1 >= 4u) {
    return NvRmMemMgrInit_plt();
  }
  else {
    return 2;
  }
}

__int64 cuda_driver_requests_68d00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  char* v4;
  char* v5;
  char* v6;
  __int64 result;
  int v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  int v16;

  v3 = 0;
  *(_QWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  while (1) {
    if (*(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3) == a1) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3;
      if (*(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 8) == a2) {
        break;
      }
    }
    v5 = (char*)&CudaDriverData_1130fa8 + v3;
    if (*(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 24) == a1 &&
        *((_QWORD*)v5 + 4) == a2) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3 + 24;
      break;
    }
    if (*((_QWORD*)v5 + 6) == a1 &&
        *(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 56) == a2) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3 + 48;
      break;
    }
    v6 = (char*)&CudaDriverData_1130fa8 + v3;
    if (*(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 72) == a1 &&
        *((_QWORD*)v6 + 10) == a2) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3 + 72;
      break;
    }
    if (*((_QWORD*)v6 + 12) == a1 &&
        *(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 104) == a2) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3 + 96;
      break;
    }
    if (*(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 120) == a1 &&
        *(_QWORD*)((char*)&CudaDriverData_1130fa8 + v3 + 128) == a2) {
      v4 = (char*)&CudaDriverData_1130fa8 + v3 + 120;
      break;
    }
    v3 += 144;
    if (v3 == 1584) {
      return 86;
    }
  }
  v8 = *((_DWORD*)v4 + 5);
  result = 0xFFFF;
  v9 = v8 - 11;
  *(_QWORD*)a3 = *((_QWORD*)v4 + 2);
  if ((unsigned int)(v8 - 11) <= 0x2E && ((0x7FFFFFFFFDFFuLL >> v9) & 1) != 0) {
    v10 = (__int64)*(&CudaDriverData_1410658 + v9);
    v11 = *(_DWORD*)(v10 + 4);
    *(_DWORD*)(a3 + 16) = v11;
    v12 = *(_DWORD*)(v10 + 8);
    v13 = v12 - 5;
    *(_DWORD*)(a3 + 20) = v12;
    if (v12 == 5 && v11 == 3 && v8 == 18) {
      v16 = 7;
    }
    else {
      v16 = v12;
    }
    if (v11 == 5) {
      if (v13 >= 3) {
        result = 0;
        *(_DWORD*)(a3 + 8) = 5;
      }
      else {
        v16 = CudaDriverData_1130d70[v13];
        result = 0;
        *(_DWORD*)(a3 + 8) = 6;
      }
      *(_DWORD*)(a3 + 12) = v16;
    }
    else {
      if (v12 == 2 && v11 == 8) {
        v16 = 0;
      }
      *(_DWORD*)(a3 + 8) = v11;
      *(_DWORD*)(a3 + 12) = v16;
      return 0;
    }
  }
  return result;
}

__int64 cuda_driver_requests_68ec0(int* a1, int* a2, int a3, int a4, int a5)
{
  unsigned int v5;
  unsigned int v6;
  int v9;

  v5 = 31;
  if (a1 != nullptr && a2 != nullptr && (unsigned int)(a3 - 1) <= 0x38) {
    v6 = a5 - 5;
    if (a5 == 5 && a4 == 3 && a3 == 18) {
      v9 = 7;
    }
    else {
      v9 = a5;
    }
    if (a4 == 5) {
      if (v6 >= 3) {
        a4 = 5;
      }
      else {
        a4 = 6;
        v9 = CudaDriverData_1130d70[v6];
      }
    }
    else if (a5 == 2 && a4 == 8) {
      v9 = 0;
    }
    v5 = 0;
    *a1 = a4;
    *a2 = v9;
  }
  return v5;
}

__int64 cuda_driver_requests_68f40(__int64 result)
{
  if ((_DWORD)result != 0) {
    return 1;
  }
  *((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)CudaDriverData_1422118 + 2) |= 1u;
  return result;
}

__int64 cuda_driver_requests_68f70(int a1)
{
  if (a1 != 0) {
    return 0;
  }
  else {
    return *((_BYTE*)&CudaDriverRoutine_4730 + (_QWORD)CudaDriverData_1422118 +
             2) &
           1;
  }
}

__int64 cuda_driver_requests_68fa0(_DWORD* a1)
{
  __int64 result;
  unsigned int v3;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _BOOL4 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[65536];
  __int64 v20;
  __int64 v21;

  v17 = 0;
  v18 = 0;
  v20 = 0;
  result = CudaDriverRoutine_df060(&v21);
  if ((_DWORD)result != 0) {
    *a1 = 72;
    return result;
  }
  v3 = CudaDriverRoutine_1ff0d0(v21, 0);
  v4 = 3LL * v3;
  v5 = v3;
  v6 = cuMemAlloc_v2_plt(&v20, v4);
  if (v6 == 0) {
    v7 = CudaDriverStub_12e330(v4);
    if (v7 != 0) {
      memset_plt(v19, 67, 0x10000);
      CudaDriverRoutine_205fa0(0, *(_QWORD*)(v21 + 112), &v18, &v17);
      if (v5 != 0) {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        do {
          if (v4 - v10 >= 0x10000) {
            v10 = 0x10000;
          }
          else {
            v10 = v4 - v10;
          }
          v18 = (*(__int64 (**)(__int64, __int64, unsigned __int64, _BYTE*,
                                __int64, __int64))(
              *(_QWORD*)(v21 + 64) + 19248LL))(v18, v21, v20 + v11, v19, v10,
                                               2);
          if ((unsigned __int8)CudaDriverStub_5a690(v17, v18) == 0) {
            CudaDriverStub_5ab60(v17, &v18);
            ++v9;
          }
          v11 += v10;
        } while (v11 < v4);
        v12 = v9 < 3;
      }
      else {
        v12 = true;
      }
      CudaDriverRoutine_206060(*(_QWORD*)(v21 + 112));
      v13 = CudaDriverRoutine_113ee0(*(_QWORD*)(v21 + 112), 1);
      if (v13 != 0) {
        *a1 = 116;
        v8 = v13;
        if (v20 == 0) {
          goto LABEL_6;
        }
      }
      else {
        v14 = cuMemcpyDtoH_v2_plt(v7, v20, v4);
        if (v14 != 0) {
          *a1 = 122;
          v8 = v14;
          if (v20 == 0) {
            goto LABEL_6;
          }
        }
        else {
          v15 = CudaDriverRoutine_113ee0(*(_QWORD*)(v21 + 112), 1);
          if (v15 != 0) {
            *a1 = 128;
            v8 = v15;
            if (v20 == 0) {
              goto LABEL_6;
            }
          }
          else if (v5 != 0) {
            v16 = 0;
            while (*(_BYTE*)(v7 + v16) == 67) {
              if (v4 == ++v16) {
                goto LABEL_33;
              }
            }
            *a1 = 135;
            v8 = 710;
            if (v20 == 0) {
              goto LABEL_6;
            }
          }
          else {
          LABEL_33:
            if (v12) {
              *a1 = 143;
              v8 = 710;
              if (v20 == 0) {
                goto LABEL_6;
              }
            }
            else {
              v8 = 0;
              if (v20 == 0) {
                goto LABEL_6;
              }
            }
          }
        }
      }
    }
    else {
      *a1 = 89;
      v8 = 0;
      if (v20 == 0) {
        goto LABEL_6;
      }
    }
    goto LABEL_5;
  }
  v7 = 0;
  *a1 = 82;
  v8 = v6;
  if (v20 != 0) {
  LABEL_5:
    cuMemFree_v2_plt();
  }
LABEL_6:
  CudaDriverRoutine_12e340(v7);
  return v8;
}

__int64 cuda_driver_requests_69260(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  result = CudaDriverStub_112b20(0, a1, 3, &v2, &v3);
  if ((_DWORD)result == 0) {
    return CudaDriverRoutine_114a80(*(_QWORD*)(v3 + 760), v2, 0);
  }
  return result;
}

__int64 cuda_driver_requests_69420(__int64 a1)
{
  int v1;
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  v1 = *(_DWORD*)(a1 + 4);
  result = 1;
  if (v1 == 1) {
    *(_BYTE*)(a1 + 528) = 1;
    return 0;
  }
  return result;
}

__int64 cuda_driver_requests_69450(unsigned __int64 a1, unsigned __int64 a2,
                                   _DWORD* a3)
{
  __int64 result;
  unsigned __int64 v6;
  void* v8;
  __int64 v10;
  __int64 v12;
  __int64 v13;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a2 != 0) {
    v6 = a1;
    if (*(_BYTE*)(a1 + 528) != 0) {
      v8 = CudaDriverData_1422118;
      CudaDriverRoutine_1084c0((__int64)&CudaDriverRoutine_7378 +
                               (_QWORD)CudaDriverData_1422118);
      v10 = CudaDriverRoutine_1a2980(
          *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v8), a2);
      CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v8);
      if (v10 == 0) {
        if (*(_DWORD*)(a2 + 4) == 2) {
          v10 = a2;
        }
        else {
          v10 = 0;
        }
      }
      result = 1;
      if (a3 != nullptr && v10 != 0) {
        *a3 = 0;
        v12 = CudaDriverRoutine_1a2980(*(int**)(v10 + 80), v6);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 520);
          if (v13 == 0 || *(_QWORD*)(v12 + 1208) == v13) {
            return 0;
          }
          else {
            result = 0;
            *a3 = 1;
          }
        }
        else {
          return 1;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_requests_69560(__int64 a1, _QWORD* a2)
{
  __int64 result;
  _BYTE v4[8];
  __int64 v5;

  if (a1 == 0) {
    return 1;
  }
  result = CudaDriverRoutine_112680(0, a1, 3, &v5, v4, 2, 0);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(v5 + 1036) == 1) {
      *a2 = **(_QWORD**)(v5 + 1000);
      return 0;
    }
    else {
      return 401;
    }
  }
  return result;
}

__int64 cuda_driver_requests_69600(__int64 result)
{
  char v1;

  if ((_DWORD)result != 0) {
    v1 = 16;
  }
  else {
    v1 = 0;
  }
  *((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) =
      *((_BYTE*)&CudaDriverRoutine_4728 + (_QWORD)CudaDriverData_1422118) &
          0xEF |
      v1;
  return result;
}

__int64 cuda_driver_requests_69630(__int64 a1, _DWORD* a2, unsigned int* a3,
                                   _DWORD* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  char v12;
  __int64 v13;
  int v14;

  result = CudaDriverRoutine_df060(0);
  if ((_DWORD)result == 0) {
    result = 1;
    if (a1 != 0 && a2 != nullptr && a3 != nullptr && a4 != nullptr) {
      result = cuda_driver_misc_helpers_deeb0(a1, 0);
      if ((_DWORD)result == 0) {
        v9 = CudaDriverRoutine_98340(a1);
        v10 = v9;
        *a2 = *(_DWORD*)(*(_QWORD*)(v9 + 64) + 17000LL);
        v11 = *(_DWORD*)(*(_QWORD*)(v9 + 64) + 17004LL);
        if (v11 <= 1) {
          v11 = 1;
        }
        *a3 = v11;
        v12 = CudaDriverRoutine_9ad80(*(_QWORD*)(v9 + 64));
        v13 = *(_QWORD*)(v10 + 64);
        if (v12 != 0) {
          v14 = (*(__int64 (**)(__int64))(v13 + 18424))(40);
        }
        else {
          v14 = *(_DWORD*)(v13 + 17000);
        }
        *a4 = v14;
        return 0;
      }
    }
  }
  return result;
}

__int64 cuda_driver_requests_69710(unsigned __int64 a1, __int64* a2)
{
  __int64 result;
  void* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v7 = 0;
  v8 = 0;
  result = CudaDriverStub_112b20_alt1(0, a2, 2u, &v7, &v8);
  if ((_DWORD)result == 0) {
    if (a1 != 0 &&
        ((v4 = CudaDriverData_1422118,
          CudaDriverRoutine_1084c0((__int64)&CudaDriverRoutine_7378 +
                                   (_QWORD)CudaDriverData_1422118),
          v6 = CudaDriverRoutine_1a2980(
              *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1),
          CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 +
                                   (_QWORD)v4),
          v6 != 0) ||
         (v6 = a1, *(_DWORD*)(a1 + 4) == 2))) {
      return CudaDriverRoutine_c4770(v6, v7);
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_requests_697e0(unsigned __int64 a1, __int64 a2)
{
  void* v4;
  __int64 v6;

  if (a1 != 0 &&
      ((v4 = CudaDriverData_1422118,
        CudaDriverRoutine_1084c0((__int64)&CudaDriverRoutine_7378 +
                                 (_QWORD)CudaDriverData_1422118),
        v6 = CudaDriverRoutine_1a2980(
            *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v4), a1),
        CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v4),
        v6 != 0) ||
       (v6 = a1, *(_DWORD*)(a1 + 4) == 2))) {
    return CudaDriverRoutine_c4770(v6, a2);
  }
  else {
    return 1;
  }
}

__int64 cuda_driver_requests_698a0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v10;

  result = 1;
  if (a1 != 0 && a5 != 0 && *(_QWORD*)a5 != 0 &&
      (*(_DWORD*)(a5 + 8) == 0 || *(_QWORD*)(a5 + 16) != 0)) {
    v10 = 0;
    result = CudaDriverRoutine_2b880(&v10, a2, 12, a3, nullptr, a4);
    if ((_DWORD)result == 0) {
      result = cuda_driver_small_28980(*(_QWORD*)a5, *(_DWORD*)(a5 + 8),
                                       *(_QWORD*)(a5 + 16), *(_DWORD*)(a5 + 24),
                                       1, 0);
      if ((_DWORD)result == 0) {
        return CudaDriverRoutine_d83a0(a1, v10, a3, 0, 0, a4, a5, 2);
      }
    }
  }
  return result;
}

__int64 cuda_driver_requests_69980(__int64 a1, _OWORD* a2)
{
  __int64 result;
  __int128 v4;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 12) {
    v4 = *(_OWORD*)(a1 + 48);
    *a2 = *(_OWORD*)(a1 + 32);
    a2[1] = v4;
    return 0;
  }
  return result;
}

__int64 cuda_driver_requests_699b0(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v4;
  __int64 v5;

  result = 1;
  if (a1 != 0 && a2 != 0) {
    if (*(_QWORD*)a2 != 0 &&
        ((v4 = *(_DWORD*)(a2 + 8)) == 0 || *(_QWORD*)(a2 + 16) != 0) &&
        *(_DWORD*)(a1 + 4) == 12) {
      v5 = a1;
      result = cuda_driver_small_28980(*(_QWORD*)a2, v4, *(_QWORD*)(a2 + 16),
                                       *(_DWORD*)(a2 + 24), 1, 0);
      if ((_DWORD)result == 0) {
        return CudaDriverRoutine_d84d0(v5, a2);
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 cuda_driver_requests_69a50(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  void* v6;
  __int64 v8;
  __int64 result;
  __int64 v10;

  if (a1 == 0) {
    return 1;
  }
  v6 = CudaDriverData_1422118;
  CudaDriverRoutine_1084c0((__int64)&CudaDriverRoutine_7378 +
                           (_QWORD)CudaDriverData_1422118);
  v8 = CudaDriverRoutine_1a2980(
      *(int**)((char*)&CudaDriverRoutine_7370 + (_QWORD)v6), a1);
  CudaDriverRoutine_1085b0((__int64)&CudaDriverRoutine_7378 + (_QWORD)v6);
  if (v8 == 0) {
    if (*(_DWORD*)(a1 + 4) == 2) {
      v8 = a1;
    }
    else {
      v8 = 0;
    }
  }
  result = 1;
  if (a3 != 0 && a2 != 0 && v8 != 0 && *(_QWORD*)a3 != 0 &&
      (*(_DWORD*)(a3 + 8) == 0 || *(_QWORD*)(a3 + 16) != 0) &&
      *(_DWORD*)(a2 + 4) == 12) {
    result = CudaDriverRoutine_d9230(&v10, a2, v8);
    if ((_DWORD)result == 0) {
      result = cuda_driver_small_28980(*(_QWORD*)a3, *(_DWORD*)(a3 + 8),
                                       *(_QWORD*)(a3 + 16), *(_DWORD*)(a3 + 24),
                                       1, 0);
      if ((_DWORD)result == 0) {
        if ((unsigned int)cuda_driver_checks_da280(v10, a3) != 0) {
          return 1;
        }
        else {
          return CudaDriverRoutine_d84d0_alt1(v10, a3);
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_requests_766e0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  _BYTE* v9;
  _BYTE v10[4];

  v10[0] = 0;
  *a3 = 0;
  if (a2 == 0) {
    *a3 = 4;
    return 1;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 56);
  if (*((_BYTE*)a3 + 4) == 1) {
    v5 = a2;
    v6 = a3;
    v7 = (*(__int64 (**)(__int64, _QWORD, _BYTE*))(
        *(_QWORD*)(v4 + 8) + 23375784LL))(v4, *(_QWORD*)(a2 + 16), v10);
    *v6 = v7;
    if (v7 != 0) {
      return 1;
    }
    a3 = v6;
    a2 = v5;
    if ((v10[0] & 1) != 0) {
      return 0;
    }
  }
  v8 = a3;
  v9 = (_BYTE*)a2;
  result = (*(__int64 (**)(__int64, _QWORD, __int64))(
      *(_QWORD*)(v4 + 8) + 23376032LL))(v4, *(_QWORD*)(a2 + 8), a2 + 24);
  *v8 = result;
  if ((_DWORD)result != 0) {
    return 0;
  }
  *v9 = 1;
  return result;
}

__int64 cuda_driver_requests_768a0(__int64 a1, __int64 a2, _DWORD* a3,
                                   __int64 a4)
{
  __int64 result;

  *a3 = 0;
  if (a2 != 0) {
    if (*(_BYTE*)a2 == 1) {
      result = (*(__int64 (**)(_QWORD, _QWORD, __int64, __int64))(
          *(_QWORD*)(*(_QWORD*)(a2 + 56) + 8LL) + 23376040LL))(
          *(_QWORD*)(a2 + 56), *(_QWORD*)(a2 + 8), a2 + 24, a4);
      *a3 = result;
      if ((_DWORD)result != 0) {
        return 0;
      }
      else {
        *(_BYTE*)a2 = 0;
        *(_OWORD*)(a2 + 24) = 0u;
        *(_OWORD*)(a2 + 40) = 0u;
      }
    }
    else {
      return 0;
    }
  }
  else {
    *a3 = 4;
    return 1;
  }
  return result;
}

__int64 cuda_driver_requests_76970(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;

  if (a2 != 0) {
    result = *(_QWORD*)(a2 + 96);
    if (result != 0) {
      return CudaDriverRoutine_222b80(result, cuda_driver_requests_768a0);
    }
  }
  else {
    *a3 = 3;
    return 1;
  }
  return result;
}

__int64 cuda_driver_requests_8e890(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  _BYTE v15[4];
  __int64 v16;

  v16 = -1;
  v14 = 0;
  memset_plt(&v13, 0, 2060);
  *a1 = 0;
  v11 = 5;
  v12 = 6;
  CudaDriverStub_57450(v15, v2);
  v3 = CudaDriverRoutine_12e510(1, 4);
  if (v3 != 0) {
    v5 = v3;
    CudaDriverStub_57450(v3, v4);
    CudaDriverStub_57450(v15, v6);
    if ((unsigned int)CudaDriverStub_12db70(v15, &v11) != 0 ||
        (unsigned int)CudaDriverStub_12db70(v15, &v16) != 0 ||
        (CudaDriverStub_57450(v5, v7),
         (unsigned int)CudaDriverStub_12db70(v5, &v12) != 0) ||
        (unsigned int)CudaDriverStub_12db70(v5, &v14) != 0) {
      v8 = 304;
    }
    else {
      v8 = v14;
      if ((_DWORD)v14 == 0) {
        *a1 = v5;
        CudaDriverStub_57450(v15, v7);
        return v8;
      }
    }
    CudaDriverStub_57450(v15, v7);
    CudaDriverStub_57450(v5, v9);
    CudaDriverRoutine_12e340(v5);
  }
  else {
    CudaDriverStub_57450(v15, v4);
    return 2;
  }
  return v8;
}

__int64 cuda_driver_requests_8e9c0(__int64 result, __int64 a2)
{
  __int64 v2;

  if (result != 0) {
    v2 = result;
    CudaDriverStub_57450(result, a2);
    return CudaDriverRoutine_12e340(v2);
  }
  return result;
}

#pragma GCC visibility pop
