#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD*, __int64*);
__int64 NVSDK_NGX_Result_FAIL_OutOfGPUMemory(__int64, int, int, __int64,
                                             __int64, _QWORD*);
__int64 NgxRoutine_2b0();
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2de0();
__int64 nvidia_dlss_acc20(__int64, unsigned int*, __int64, _DWORD**);
extern _UNKNOWN* NgxData_952228;
extern __int64* NgxData_9547b0[2];
extern __int64* NgxData_9547b8;
void NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 nvidia_dlss_rel_source_a25f0();
__int64 nvidia_dlss_rel_source_b5cf0(__int64 a1, int a2, __int64 a3,
                                     unsigned int** a4);

__int64 nvidia_dlss_rel_source_a25f0()
{
  __int64* v0;

  v0 = NgxData_9547b0[0];
  *NgxData_9547b0[0] = 0;
  v0[1] = 0;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v0] = 0;
  *(_QWORD*)&(*(_BYTE(*)[16])0x10LL)[(_QWORD)v0 + 8] = 0;
  *(_DWORD*)((char*)((char*)0x20LL) + (_QWORD)v0) = 1065353216;
  return NgxRoutine_2b0();
}

__int64 nvidia_dlss_rel_source_b5cf0(__int64 a1, int a2, __int64 a3,
                                     unsigned int** a4)
{
  unsigned int v8;
  unsigned int* v9;
  _QWORD* v10;
  unsigned int* v12;

  *a4 = nullptr;
  NgxRoutine_e2db0();
  if (*(__int64*)((char*)NgxData_9547b0[0] +
                  (unsigned __int64)&(*(_BYTE(*)[16])0x10LL)[8]) < 2uLL) {
    v9 = *(
        unsigned int**)(*(__int64*)((char*)NgxData_9547b0[0] +
                                    (unsigned __int64)(*(_BYTE(*)[16])0x10LL)) +
                        128);
    v12 = v9;
    v10 = nvidia_dlss_rel_source_frameworks_cubin_a7260(NgxData_9547b0[0],
                                                        (__int64*)&v12);
    if (v10 != nullptr) {
      v8 = NVSDK_NGX_Result_FAIL_OutOfGPUMemory(v10[9], *((_DWORD*)v10 + 16),
                                                a2, a1, a3, a4);
      if (v8 == 1) {
        v12 = *a4;
        *(_QWORD*)(nvidia_dlss_acc20((__int64)NgxData_9547b8, v12,
                                     (__int64)NgxData_952228, &v12) +
                   24) = v9;
      }
    }
    else {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          61, (__int64)"findExistingDeviceData",
          (__int64)"Error: specified Device not found");
      v8 = -1160773625;
    }
  }
  else {
    v8 = -1160773630;
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        186, (__int64)"CreateFeatureCommon",
        (__int64)"Error: multiple active Devices present and CreateFeature() "
                 "didn't specify wanted Device");
  }
  NgxRoutine_e2de0();
  return v8;
}

#pragma GCC visibility pop
