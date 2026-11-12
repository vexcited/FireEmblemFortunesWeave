#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nvidia_dlss_ab9e0(__int64, __int64, int);
_QWORD* nvidia_dlss_ab5c0(_QWORD*, __int64);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD*, __int64*);
__int64 NVSDK_NGX_Result_FAIL_OutOfGPUMemory(__int64*, int, int, __int64,
                                             __int64, _QWORD*);
__int64 NgxRoutine_36f20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 NgxRoutine_b4b90_alt1(_QWORD, _QWORD, _QWORD, const char*,
                              ...) __asm__("NgxRoutine_b4b90");
__int64 NgxRoutine_b4b90_alt3(__int64, __int64, __int64, const char*,
                              ...) __asm__("NgxRoutine_b4b90");
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2db0_alt1(_QWORD) __asm__("NgxRoutine_e2db0");
__int64 NgxRoutine_e2de0();
__int64 NgxRoutine_e2de0_alt1(_QWORD) __asm__("NgxRoutine_e2de0");
__int64 dlaa_34c80(__int64, __int64, unsigned __int64, __int64, __int64*);
__int64 dlaa_367a0(__int64*, int*, int, int, int, int);
__int64 dlaa_36960(__int64, int*);
__int64 dlaa_scaling_7d420(__int64, __int64);
__int64 nvidia_dlss_a8d00(__int64*, __int64*);
__int64 nvidia_dlss_ab6e0(_QWORD);
__int64 nvidia_dlss_ab9e0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("nvidia_dlss_ab9e0");
__int64 nvidia_dlss_abac0(__int64, __int64, _DWORD*);
__int64 nvidia_dlss_abbc0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_abca0(_QWORD, _QWORD, float);
__int64 nvidia_dlss_acc20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_34940(__int64, __int64);
__int64 nvidia_dlss_rel_source_34b70(__int64, __int64);
__int64 nvidia_dlss_rel_source_b6620(__int64, __int64*, __int64, __int64**);
__int64 nvidia_dlss_rel_source_b6980(__int64*, __int64*);
__int64 nvidia_dlss_rel_source_b6c40();
extern _UNKNOWN NgxData_2b70a08;
extern _UNKNOWN NgxData_2b88b58;
extern _UNKNOWN* NgxData_952228;
extern _UNKNOWN* NgxData_9545e0;
extern _UNKNOWN* NgxData_9547a8;
extern __int64 (*NgxData_94ea40[])();
extern __int64* NgxData_9547b0[2];
extern __int64 NgxData_2b6add8;
extern __int64 NgxData_2b6ade0;
extern __int64 NgxData_2b70a18;
extern __int64 NgxData_2b70a20;
extern __int64 NgxData_2b70a30;
extern __int64 NgxData_2b88b40;
extern __int64 NgxData_2b88b68;
extern __int64 NgxData_2b88b70;
extern __int64 NgxData_2b88b80;
extern __int64 NgxData_952c20[3];
extern __int64* NgxData_9545f0;
extern __int64* NgxData_9547b8;
void NgxRoutine_b4b90_alt2(__int64, __int64, __int64, __int64,
                           ...) __asm__("NgxRoutine_b4b90");
void NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, ...);
__int64 ngx_templates_aa760(__int64 a1, int a2, int a3, int a4, _DWORD* a5,
                            _DWORD* a6, _DWORD* a7, _DWORD* a8, _DWORD* a9,
                            _DWORD* a10);
__int64 ngx_templates_aa9e0(__int64 a1, unsigned int* a2);
bool ResizeFeatureCommon(__int64 a1, int* a2, int a3, int a4, int a5, int a6);
__int64 ngx_templates_aaee0(__int64 a1, int* a2);
__int64 ngx_templates_ab0c0(__int64 a1, __int64 a2);
__int64 ngx_templates_b5710(unsigned __int64 a1, __int64 a2, int a3, __int64 a4,
                            const void* a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9);
__int64 ngx_templates_b5e90(int* a1);
__int64 ngx_templates_b60a0(__int64 a1, unsigned int* a2, __int64 a3,
                            __int64 a4);
__int64 ngx_templates_b6330(__int64 a1);
__int64 GetStatsCommon(__int64 a1);

__int64 ngx_templates_aa760(__int64 a1, int a2, int a3, int a4, _DWORD* a5,
                            _DWORD* a6, _DWORD* a7, _DWORD* a8, _DWORD* a9,
                            _DWORD* a10)
{
  int v17;
  int v18;
  int v25;
  int v26;
  int v27;
  _QWORD* v28;
  __int64 result;
  _QWORD* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  struct {
    __int64 (**v37)();
    __int64 v38;
    __int64 v39;
    _QWORD* v40;
    __int64 v41;
    int v42;
  } v37_;

  v37_.v37 = NgxData_94ea40;
  v37_.v38 = 0;
  v37_.v39 = 0;
  v37_.v40 = nullptr;
  v37_.v41 = 0;
  v37_.v42 = 1065353216;
  nvidia_dlss_ab9e0((__int64)&v37_.v37, (__int64)"Internal_DLAA_Text", 0);
  ((void (*)(__int64 (***)(void), const char*, _QWORD))v37_.v37[4])(
      &v37_.v37, "Internal_DLAA_History_0", 0);
  ((void (*)(__int64 (***)(void), const char*, _QWORD))v37_.v37[4])(
      &v37_.v37, "Internal_DLAA_History_1", 0);
  nvidia_dlss_ab9e0((__int64)&v37_.v37, (__int64)"Width", a2);
  nvidia_dlss_ab9e0((__int64)&v37_.v37, (__int64)"Height", a3);
  if (a4 == 2) {
    v17 = 5;
  }
  else {
    v17 = 1;
  }
  if (a4 == 1) {
    v18 = 3;
  }
  else {
    v18 = v17;
  }
  nvidia_dlss_ab9e0((__int64)&v37_.v37, (__int64)"PerfQualityValue", v18);
  NgxRoutine_e2db0();
  if (NgxData_2b6add8 != 0) {
    dlaa_scaling_7d420(*(_QWORD*)(NgxData_2b6add8 + 72), (__int64)&v37_.v37);
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel\\source/features/dlaa/ngx_templates.h",
        314, (__int64)"GetOptimalSettingsCommon",
        (__int64)"Error: could't find initialized instance");
  }
  NgxRoutine_e2de0();
  nvidia_dlss_abac0((__int64)&v37_.v37, (__int64)"OutWidth", &v36);
  nvidia_dlss_abac0((__int64)&v37_.v37, (__int64)"OutHeight", &v35);
  nvidia_dlss_abac0((__int64)&v37_.v37,
                    (__int64)"DLSS.Get.Dynamic.Min.Render.Width", &v34);
  nvidia_dlss_abac0((__int64)&v37_.v37,
                    (__int64)"DLSS.Get.Dynamic.Min.Render.Height", &v33);
  nvidia_dlss_abac0((__int64)&v37_.v37,
                    (__int64)"DLSS.Get.Dynamic.Max.Render.Width", &v32);
  nvidia_dlss_abac0((__int64)&v37_.v37,
                    (__int64)"DLSS.Get.Dynamic.Max.Render.Height", &v31);
  v25 = v35;
  v37_.v37 = NgxData_94ea40;
  *a5 = v36;
  *a6 = v25;
  v26 = v33;
  *a7 = v34;
  *a8 = v26;
  v27 = v31;
  v28 = v37_.v40;
  *a9 = v32;
  *a10 = v27;
  if (v28 != nullptr) {
    do {
      v30 = (_QWORD*)*v28;
      if ((v28[2] & 1) != 0) {
        NgxRoutine_430(v28[4], v28[2] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v28, 48);
      v28 = v30;
    } while (v30 != nullptr);
  }
  result = v37_.v38;
  v37_.v38 = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8 * v37_.v39);
  }
  return result;
}

__int64 ngx_templates_aa9e0(__int64 a1, unsigned int* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v10;
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;

  v13 = 0;
  v14 = nullptr;
  v15 = 0;
  v11 = NgxData_94ea40;
  v12 = 0;
  v16 = 1065353216;
  nvidia_dlss_ab9e0_alt1(&v11, "Internal_DLAA_Text", 0);
  ((void (*)(__int64 (***)(), const char*, _QWORD))v11[4])(
      &v11, "Internal_DLAA_History_0", 0);
  ((void (*)(__int64 (***)(), const char*, _QWORD))v11[4])(
      &v11, "Internal_DLAA_History_1", 0);
  nvidia_dlss_ab9e0_alt1(&v11, "Width", a2[3]);
  nvidia_dlss_ab9e0_alt1(&v11, "Height", a2[4]);
  nvidia_dlss_ab9e0_alt1(&v11, "OutWidth", a2[5]);
  nvidia_dlss_ab9e0_alt1(&v11, "OutHeight", a2[6]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Enable.Output.Subrects", a2[7]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Feature.Create.Flags", *a2);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Hint.Render.Preset.DLAA", a2[2]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Hint.Render.Preset.Quality", a2[2]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Hint.Render.Preset.Balanced", a2[2]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Hint.Render.Preset.Performance", a2[2]);
  nvidia_dlss_ab9e0_alt1(&v11, "DLSS.Hint.Render.Preset.UltraPerformance",
                         a2[2]);
  v17 = 0;
  NgxRoutine_e2db0_alt1(NgxData_9545e0);
  v3 = (***(__int64 (****)(_QWORD, _QWORD))NgxData_952c20[0])(
      *(_QWORD*)NgxData_952c20[0], 0);
  v4 = v3;
  if (v3 == 0) {
    if ((unsigned __int64)NgxData_2b6ade0 >= 2) {
      NgxRoutine_b4b90_alt1(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel\\source/features/dlaa/ngx_templates.h",
          186, "CreateFeatureCommon",
          "Error: multiple active Devices present and CreateFeature() didn't "
          "specify wanted Device");
      goto LABEL_10;
    }
    v4 = *(_QWORD*)(NgxData_2b6add8 + 128);
    v5 = nvidia_dlss_ab6e0(v4);
    if (v5 != 0) {
      goto LABEL_3;
    }
  LABEL_9:
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel\\source/features/dlaa/ngx_templates.h",
        61, "findExistingDeviceData", "Error: specified Device not found");
    goto LABEL_10;
  }
  v5 = nvidia_dlss_ab6e0(v3);
  if (v5 == 0) {
    goto LABEL_9;
  }
LABEL_3:
  if ((unsigned int)NVSDK_NGX_Result_FAIL_OutOfGPUMemory(
          *(__int64**)(v5 + 72), *(_DWORD*)(v5 + 64), 1, 0, (__int64)&v11,
          &v17) == 1) {
    v19 = v17;
    *(_QWORD*)(nvidia_dlss_acc20(NgxData_9545f0, v17, NgxData_952228, &v19,
                                 &v18) +
               24) = v4;
    NgxRoutine_e2de0_alt1(NgxData_9545e0);
    v6 = v17;
    v11 = NgxData_94ea40;
    v7 = v14;
    if (v14 == nullptr) {
      goto LABEL_11;
    }
    goto LABEL_15;
  }
LABEL_10:
  NgxRoutine_e2de0_alt1(NgxData_9545e0);
  v6 = 0;
  v11 = NgxData_94ea40;
  v7 = v14;
  if (v14 != nullptr) {
    do {
    LABEL_15:
      v10 = (_QWORD*)*v7;
      if ((v7[2] & 1) != 0) {
        NgxRoutine_430(v7[4], v7[2] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v7, 48);
      v7 = v10;
    } while (v10 != nullptr);
  }
LABEL_11:
  v8 = v12;
  v12 = 0;
  if (v8 != 0) {
    NgxRoutine_430(v8, 8 * v13);
  }
  return v6;
}

bool ResizeFeatureCommon(__int64 a1, int* a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v21;
  __int64 v22;

  NgxRoutine_e2db0_alt1(NgxData_9545e0);
  if (NgxData_2b70a20 == 0 || NgxData_2b70a30 == 0) {
    goto LABEL_25;
  }
  v12 = (unsigned int)*a2;
  v13 = NgxData_2b70a20 - 1;
  if ((NgxData_2b70a20 & (NgxData_2b70a20 - 1)) != 0) {
    v14 = (unsigned int)*a2;
    if (NgxData_2b70a20 <= v12) {
      v14 = (unsigned int)v12 % (unsigned int)NgxData_2b70a20;
    }
    v15 = *(__int64***)(NgxData_2b70a18 + 8 * v14);
    if (v15 == nullptr) {
      goto LABEL_25;
    }
  }
  else {
    v14 = ((_DWORD)NgxData_2b70a20 - 1) & (unsigned int)v12;
    v15 = *(__int64***)(NgxData_2b70a18 + 8 * v14);
    if (v15 == nullptr) {
    LABEL_25:
      NgxRoutine_b4b90_alt1(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel\\source/features/dlaa/ngx_templates.h",
          222, "ResizeFeatureCommon", "Error: invalid handle");
      goto LABEL_26;
    }
  }
  v16 = *v15;
  if (v16 == nullptr) {
    goto LABEL_25;
  }
  if ((NgxData_2b70a20 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == v12) {
        if (*((_DWORD*)v16 + 4) == (_DWORD)v12) {
          goto LABEL_28;
        }
      }
      else if ((v18 & v13) != v14) {
        goto LABEL_25;
      }
      v16 = (__int64*)*v16;
      if (v16 == nullptr) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v12) {
      break;
    }
    if (v17 >= NgxData_2b70a20) {
      v17 %= (unsigned __int64)NgxData_2b70a20;
    }
    if (v17 != v14) {
      goto LABEL_25;
    }
  LABEL_15:
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      goto LABEL_25;
    }
  }
  if (*((_DWORD*)v16 + 4) != (_DWORD)v12) {
    goto LABEL_15;
  }
LABEL_28:
  v21 = v16[3];
  if (v21 != 0) {
    v22 = nvidia_dlss_ab6e0(v21);
    if (v22 != 0) {
      v19 = dlaa_367a0(*(__int64**)(v22 + 72), a2, a3, a4, a5, a6) == 1;
      goto LABEL_27;
    }
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel\\source/features/dlaa/ngx_templates.h",
        61, "findExistingDeviceData", "Error: specified Device not found");
  }
  else {
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel\\source/features/dlaa/ngx_templates.h",
        229, "ResizeFeatureCommon", "Error: Device was nullptr");
  }
LABEL_26:
  v19 = false;
LABEL_27:
  NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
  return v19;
}

__int64 ngx_templates_aaee0(__int64 a1, int* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  NgxRoutine_e2db0_alt1(NgxData_9545e0);
  if (NgxData_2b70a20 == 0 || NgxData_2b70a30 == 0) {
    goto LABEL_25;
  }
  v4 = (unsigned int)*a2;
  v5 = NgxData_2b70a20 - 1;
  if ((NgxData_2b70a20 & (NgxData_2b70a20 - 1)) != 0) {
    v6 = (unsigned int)*a2;
    if (NgxData_2b70a20 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)NgxData_2b70a20;
    }
    v7 = *(__int64**)(NgxData_2b70a18 + 8 * v6);
    if (v7 == nullptr) {
      goto LABEL_25;
    }
  }
  else {
    v6 = ((_DWORD)NgxData_2b70a20 - 1) & (unsigned int)v4;
    v7 = *(__int64**)(NgxData_2b70a18 + 8 * v6);
    if (v7 == nullptr) {
    LABEL_25:
      NgxRoutine_b4b90_alt1(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel\\source/features/dlaa/ngx_templates.h",
          255, "ReleaseFeatureCommon", "Error: invalid handle");
      return NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
    }
  }
  v8 = *v7;
  if (*v7 == 0) {
    goto LABEL_25;
  }
  if ((NgxData_2b70a20 & v5) == 0) {
    while (1) {
      v10 = *(_QWORD*)(v8 + 8);
      if (v10 == v4) {
        if (*(_DWORD*)(v8 + 16) == (_DWORD)v4) {
          goto LABEL_27;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = *(_QWORD*)v8;
      if (v8 == 0) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v9 = *(_QWORD*)(v8 + 8);
    if (v9 == v4) {
      break;
    }
    if (v9 >= NgxData_2b70a20) {
      v9 %= (unsigned __int64)NgxData_2b70a20;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = *(_QWORD*)v8;
    if (v8 == 0) {
      goto LABEL_25;
    }
  }
  if (*(_DWORD*)(v8 + 16) != (_DWORD)v4) {
    goto LABEL_15;
  }
LABEL_27:
  v11 = *(_QWORD*)(v8 + 24);
  nvidia_dlss_a8d00(NgxData_9545f0, (__int64*)v8);
  if (v11 == 0) {
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel\\source/features/dlaa/ngx_templates.h",
        263, "ReleaseFeatureCommon", "Error: Device was nullptr");
    return NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
  }
  v12 = nvidia_dlss_ab6e0(v11);
  if (v12 == 0) {
    NgxRoutine_b4b90_alt1(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel\\source/features/dlaa/ngx_templates.h",
        61, "findExistingDeviceData", "Error: specified Device not found");
    return NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
  }
  dlaa_36960(*(_QWORD*)(v12 + 72), a2);
  return NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
}

__int64 ngx_templates_ab0c0(__int64 a1, __int64 a2)
{
  unsigned int* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;
  __int64 v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  int v21;

  v18 = 0;
  v19 = nullptr;
  v20 = 0;
  v16 = NgxData_94ea40;
  v17 = 0;
  v21 = 1065353216;
  nvidia_dlss_ab9e0_alt1(&v16, "Internal_DLAA_Text", 0);
  ((void (*)(__int64 (***)(), const char*, _QWORD))v16[4])(
      &v16, "Internal_DLAA_History_0", 0);
  ((void (*)(__int64 (***)(), const char*, _QWORD))v16[4])(
      &v16, "Internal_DLAA_History_1", 0);
  nvidia_dlss_ab9e0_alt1(&v16, "Width", *(unsigned int*)(a2 + 168));
  nvidia_dlss_ab9e0_alt1(&v16, "Height", *(unsigned int*)(a2 + 172));
  nvidia_dlss_ab9e0_alt1(&v16, "OutWidth", *(unsigned int*)(a2 + 176));
  nvidia_dlss_ab9e0_alt1(&v16, "OutHeight", *(unsigned int*)(a2 + 180));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Enable.Output.Subrects",
                         *(unsigned int*)(a2 + 184));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Feature.Create.Flags",
                         *(unsigned int*)(a2 + 156));
  nvidia_dlss_abbc0(&v16, "Color", *(_QWORD*)a2);
  nvidia_dlss_abbc0(&v16, "Output", *(_QWORD*)(a2 + 32));
  nvidia_dlss_abbc0(&v16, "Depth", *(_QWORD*)(a2 + 8));
  nvidia_dlss_abbc0(&v16, "MotionVectors", *(_QWORD*)(a2 + 16));
  nvidia_dlss_abbc0(&v16, "DLSS.Input.Bias.Current.Color.Mask",
                    *(_QWORD*)(a2 + 24));
  nvidia_dlss_abca0(&v16, "Jitter.Offset.X", *(float*)(a2 + 64));
  nvidia_dlss_abca0(&v16, "Jitter.Offset.Y", *(float*)(a2 + 68));
  nvidia_dlss_ab9e0_alt1(&v16, "Reset", *(unsigned int*)(a2 + 72));
  nvidia_dlss_abca0(&v16, "MV.Scale.X", *(float*)(a2 + 76));
  nvidia_dlss_abca0(&v16, "MV.Scale.Y", *(float*)(a2 + 80));
  nvidia_dlss_abca0(&v16, "DLSS.Pre.Exposure", *(float*)(a2 + 84));
  nvidia_dlss_abbc0(&v16, "ExposureTexture", *(_QWORD*)(a2 + 40));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Render.Subrect.Dimensions.Width",
                         *(unsigned int*)(a2 + 88));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Render.Subrect.Dimensions.Height",
                         *(unsigned int*)(a2 + 92));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Color.Subrect.Base.X",
                         *(unsigned int*)(a2 + 96));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Color.Subrect.Base.Y",
                         *(unsigned int*)(a2 + 100));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Depth.Subrect.Base.X",
                         *(unsigned int*)(a2 + 104));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Depth.Subrect.Base.Y",
                         *(unsigned int*)(a2 + 108));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.MV.Subrect.Base.X",
                         *(unsigned int*)(a2 + 112));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.MV.Subrect.Base.Y",
                         *(unsigned int*)(a2 + 116));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Bias.Current.Color.Subrect.Base.X",
                         *(unsigned int*)(a2 + 120));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Input.Bias.Current.Color.Subrect.Base.Y",
                         *(unsigned int*)(a2 + 124));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Output.Subrect.Base.X",
                         *(unsigned int*)(a2 + 128));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Output.Subrect.Base.Y",
                         *(unsigned int*)(a2 + 132));
  nvidia_dlss_ab9e0_alt1(&v16, "DLSS.Indicator.Invert.Y.Axis",
                         *(unsigned int*)(a2 + 136));
  v4 = *(_QWORD*)(a2 + 48);
  v3 = *(unsigned int**)(a2 + 56);
  NgxRoutine_e2db0_alt1(NgxData_9545e0);
  if (NgxData_2b70a20 == 0 || NgxData_2b70a30 == 0) {
    goto LABEL_23;
  }
  v5 = *v3;
  v6 = NgxData_2b70a20 - 1;
  if ((NgxData_2b70a20 & (NgxData_2b70a20 - 1)) != 0) {
    v7 = *v3;
    if (NgxData_2b70a20 <= v5) {
      v7 = (unsigned int)v5 % (unsigned int)NgxData_2b70a20;
    }
    v8 = *(__int64***)(NgxData_2b70a18 + 8 * v7);
    if (v8 == nullptr) {
      goto LABEL_23;
    }
  }
  else {
    v7 = ((_DWORD)NgxData_2b70a20 - 1) & (unsigned int)v5;
    v8 = *(__int64***)(NgxData_2b70a18 + 8 * v7);
    if (v8 == nullptr) {
    LABEL_23:
      NgxRoutine_b4b90_alt1(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel\\source/features/dlaa/ngx_templates.h",
          285, "EvaluateFeatureCommon", "Error: invalid handle");
      goto LABEL_24;
    }
  }
  v9 = *v8;
  if (v9 == nullptr) {
    goto LABEL_23;
  }
  if ((NgxData_2b70a20 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v5) {
        if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
          goto LABEL_28;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_23;
      }
      v9 = (__int64*)*v9;
      if (v9 == nullptr) {
        goto LABEL_23;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v5) {
      break;
    }
    if (v10 >= NgxData_2b70a20) {
      v10 %= (unsigned __int64)NgxData_2b70a20;
    }
    if (v10 != v7) {
      goto LABEL_23;
    }
  LABEL_13:
    v9 = (__int64*)*v9;
    if (v9 == nullptr) {
      goto LABEL_23;
    }
  }
  if (*((_DWORD*)v9 + 4) != (_DWORD)v5) {
    goto LABEL_13;
  }
LABEL_28:
  v14 = nvidia_dlss_ab6e0(v9[3]);
  if (v14 != 0) {
    NgxRoutine_36f20(*(_QWORD*)(v14 + 72), v4, v3, &v16, 0);
    NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
    v12 = v19;
    v16 = NgxData_94ea40;
    if (v19 == nullptr) {
      goto LABEL_25;
    }
    goto LABEL_32;
  }
  NgxRoutine_b4b90_alt1(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
      "nvn2/dlss/rel\\source/features/dlaa/ngx_templates.h",
      61, "findExistingDeviceData", "Error: specified Device not found");
LABEL_24:
  NgxRoutine_e2de0_alt1(&NgxData_2b70a08);
  v12 = v19;
  v16 = NgxData_94ea40;
  if (v19 == nullptr) {
    goto LABEL_25;
  }
  do {
  LABEL_32:
    v15 = (_QWORD*)*v12;
    if ((v12[2] & 1) != 0) {
      NgxRoutine_430(v12[4], v12[2] & 0xFFFFFFFFFFFFFFFELL);
    }
    NgxRoutine_430(v12, 48);
    v12 = v15;
  } while (v15 != nullptr);
LABEL_25:
  result = v17;
  v17 = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8 * v18);
  }
  return result;
}

__int64 ngx_templates_b5710(unsigned __int64 a1, __int64 a2, int a3, __int64 a4,
                            const void* a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9)
{
  unsigned int v17;
  __int64 v18;
  const void* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  const void* v28;
  const void** v29;

  NgxRoutine_e2db0();
  v17 = nvidia_dlss_rel_source_34b70(a2, a4);
  if (v17 >> 20 == 2989) {
    NgxRoutine_b4b90_alt2(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        81, (__int64)"InitCommon",
        (__int64)"Error: NGXDLAA_InitLog() has failed. Bailing out.");
  }
  else if (a3 <= 20 &&
           *(__int64*)((char*)NgxData_9547b0[0] +
                       (unsigned __int64)&(*(_BYTE(*)[16])0x10LL)[8]) != 0) {
    v17 = 1;
  }
  else if (a5 != nullptr) {
    v28 = a5;
    v29 = &v28;
    v18 =
        nvidia_dlss_rel_source_b6620((__int64)NgxData_9547b0[0], (__int64*)&v28,
                                     (__int64)NgxData_952228, (__int64**)&v29);
    *(_QWORD*)(v18 + 24) = a1;
    nvidia_dlss_ab5c0((_QWORD*)(v18 + 40), a2);
    v19 = *(const void**)(v18 + 128);
    *(_DWORD*)(v18 + 64) = a3;
    *(_QWORD*)(v18 + 88) = a7;
    *(_QWORD*)(v18 + 96) = a5;
    *(_QWORD*)(v18 + 80) = a6;
    *(_QWORD*)(v18 + 104) = a8;
    *(_QWORD*)(v18 + 112) = a9;
    NgxRoutine_b4c00(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        116, (__int64)"InitCommon", (__int64)"m_pDevice: 0x%p->0x%p", v19, a5);
    v20 = *(_QWORD*)(v18 + 72);
    *(_QWORD*)(v18 + 128) = a5;
    if (v20 == 0) {
      v21 = NgxRoutine_420(2848);
      nvidia_dlss_rel_source_34940(v21, *(unsigned int*)(v18 + 32));
      *(_QWORD*)(v18 + 72) = v21;
      v22 = (__int64*)nvidia_dlss_rel_source_b6c40();
      v23 = *(_BYTE*)(v18 + 40);
      v24 = *(_QWORD*)(v18 + 56);
      *(_QWORD*)(v18 + 120) = v22;
      if ((v23 & 1) != 0) {
        v25 = v24;
      }
      else {
        v25 = v18 + 44;
      }
      v17 = dlaa_34c80(*(_QWORD*)(v18 + 72), v18 + 80, a1, v25, v22);
      if (v17 != 1) {
        v26 = nvidia_dlss_rel_source_frameworks_cubin_a7260(NgxData_9547b0[0],
                                                            (__int64*)&v28);
        if (v26 != nullptr) {
          nvidia_dlss_rel_source_b6980(NgxData_9547b0[0], v26);
        }
      }
    }
  }
  else {
    NgxRoutine_b4b90_alt2(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        103, (__int64)"InitCommon",
        (__int64)"Error: Device pointer was nullptr");
    v17 = -1160773627;
  }
  NgxRoutine_e2de0();
  return v17;
}

__int64 ngx_templates_b5e90(int* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v17 = v1;
  v18 = v2;
  NgxRoutine_e2db0_alt1(&NgxData_2b88b58);
  if (NgxData_2b88b70 == 0 || NgxData_2b88b80 == 0) {
    goto LABEL_25;
  }
  v5 = (unsigned int)*a1;
  v6 = NgxData_2b88b70 - 1;
  if ((NgxData_2b88b70 & (NgxData_2b88b70 - 1)) != 0) {
    v7 = (unsigned int)*a1;
    if (NgxData_2b88b70 <= v5) {
      v7 = (unsigned int)v5 % (unsigned int)NgxData_2b88b70;
    }
    v8 = *(__int64**)(NgxData_2b88b68 + 8 * v7);
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  else {
    v7 = ((_DWORD)NgxData_2b88b70 - 1) & (unsigned int)v5;
    v8 = *(__int64**)(NgxData_2b88b68 + 8 * v7);
    if (v8 == nullptr) {
    LABEL_25:
      NgxRoutine_b4b90_alt3(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          255, (__int64)"ReleaseFeatureCommon", "Error: invalid handle");
      v12 = -1160773627;
      goto LABEL_26;
    }
  }
  v9 = *v8;
  if (*v8 == 0) {
    goto LABEL_25;
  }
  if ((NgxData_2b88b70 & v6) == 0) {
    while (1) {
      v11 = *(_QWORD*)(v9 + 8);
      if (v11 == v5) {
        if (*(_DWORD*)(v9 + 16) == (_DWORD)v5) {
          goto LABEL_27;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_25;
      }
      v9 = *(_QWORD*)v9;
      if (v9 == 0) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v10 = *(_QWORD*)(v9 + 8);
    if (v10 == v5) {
      break;
    }
    if (v10 >= NgxData_2b88b70) {
      v10 %= (unsigned __int64)NgxData_2b88b70;
    }
    if (v10 != v7) {
      goto LABEL_25;
    }
  LABEL_15:
    v9 = *(_QWORD*)v9;
    if (v9 == 0) {
      goto LABEL_25;
    }
  }
  if (*(_DWORD*)(v9 + 16) != (_DWORD)v5) {
    goto LABEL_15;
  }
LABEL_27:
  v14 = *(_QWORD*)(v9 + 24);
  nvidia_dlss_a8d00(NgxData_9547b8, (__int64*)v9);
  if (v14 != 0) {
    v16 = v14;
    v15 =
        nvidia_dlss_rel_source_frameworks_cubin_a7260(NgxData_9547b0[0], &v16);
    if (v15 != nullptr) {
      v12 = dlaa_36960(v15[9], a1);
    }
    else {
      v12 = -1160773630;
      NgxRoutine_b4b90_alt3(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          61, (__int64)"findExistingDeviceData",
          "Error: specified Device not found");
    }
  }
  else {
    NgxRoutine_b4b90_alt3(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        263, (__int64)"ReleaseFeatureCommon", "Error: Device was nullptr");
    v12 = -1160773625;
  }
LABEL_26:
  NgxRoutine_e2de0_alt1(&NgxData_2b88b58);
  return v12;
}

__int64 ngx_templates_b60a0(__int64 a1, unsigned int* a2, __int64 a3,
                            __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v22 = v4;
  v23 = v5;
  NgxRoutine_e2db0_alt1(NgxData_9547a8);
  if (NgxData_2b88b70 == 0 || NgxData_2b88b80 == 0) {
    goto LABEL_25;
  }
  v11 = *a2;
  v12 = NgxData_2b88b70 - 1;
  if ((NgxData_2b88b70 & (NgxData_2b88b70 - 1)) != 0) {
    v13 = *a2;
    if (NgxData_2b88b70 <= v11) {
      v13 = (unsigned int)v11 % (unsigned int)NgxData_2b88b70;
    }
    v14 = *(__int64***)(NgxData_2b88b68 + 8 * v13);
    if (v14 == nullptr) {
      goto LABEL_25;
    }
  }
  else {
    v13 = ((_DWORD)NgxData_2b88b70 - 1) & (unsigned int)v11;
    v14 = *(__int64***)(NgxData_2b88b68 + 8 * v13);
    if (v14 == nullptr) {
    LABEL_25:
      NgxRoutine_b4b90_alt3(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          285, (__int64)"EvaluateFeatureCommon", "Error: invalid handle");
      v18 = -1160773627;
      goto LABEL_26;
    }
  }
  v15 = *v14;
  if (v15 == nullptr) {
    goto LABEL_25;
  }
  if ((NgxData_2b88b70 & v12) == 0) {
    while (1) {
      v17 = v15[1];
      if (v17 == v11) {
        if (*((_DWORD*)v15 + 4) == (_DWORD)v11) {
          goto LABEL_27;
        }
      }
      else if ((v17 & v12) != v13) {
        goto LABEL_25;
      }
      v15 = (__int64*)*v15;
      if (v15 == nullptr) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v16 = v15[1];
    if (v16 == v11) {
      break;
    }
    if (v16 >= NgxData_2b88b70) {
      v16 %= (unsigned __int64)NgxData_2b88b70;
    }
    if (v16 != v13) {
      goto LABEL_25;
    }
  LABEL_15:
    v15 = (__int64*)*v15;
    if (v15 == nullptr) {
      goto LABEL_25;
    }
  }
  if (*((_DWORD*)v15 + 4) != (_DWORD)v11) {
    goto LABEL_15;
  }
LABEL_27:
  v21 = v15[3];
  v20 = nvidia_dlss_rel_source_frameworks_cubin_a7260(NgxData_9547b0[0], &v21);
  if (v20 != nullptr) {
    v18 = NgxRoutine_36f20(v20[9], a1, a2, a3, a4);
  }
  else {
    v18 = -1160773630;
    NgxRoutine_b4b90_alt3(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        61, (__int64)"findExistingDeviceData",
        "Error: specified Device not found");
  }
LABEL_26:
  NgxRoutine_e2de0_alt1(&NgxData_2b88b58);
  return v18;
}

__int64 ngx_templates_b6330(__int64 a1)
{
  unsigned int v2;

  if (a1 != 0) {
    NgxRoutine_e2db0_alt1(&NgxData_2b88b58);
    if (NgxData_2b88b40 != 0) {
      v2 = dlaa_scaling_7d420(*(_QWORD*)(NgxData_2b88b40 + 72), a1);
    }
    else {
      NgxRoutine_b4b90_alt3(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          314, (__int64)"GetOptimalSettingsCommon",
          "Error: could't find initialized instance");
      v2 = -1160773625;
    }
    NgxRoutine_e2de0_alt1(&NgxData_2b88b58);
    return v2;
  }
  else {
    NgxRoutine_b4b90_alt3(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        305, (__int64)"GetOptimalSettingsCommon",
        "Error: params pointer was null");
    return 3134193669LL;
  }
}

__int64 GetStatsCommon(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v6 = v1;
  v7 = v2;
  if (a1 != 0) {
    v8 = 0;
    v5 = 0;
    NgxRoutine_e2db0_alt1(&NgxData_2b88b58);
    if (NgxData_2b88b40 != 0) {
      (*(void (**)(_QWORD, __int64*, __int64*))(
          **(_QWORD**)(NgxData_2b88b40 + 120) + 544LL))(
          *(_QWORD*)(NgxData_2b88b40 + 120), &v8, &v5);
      NgxRoutine_e2de0_alt1(&NgxData_2b88b58);
      (**(void (***)(__int64, char*, __int64))a1)(a1, "SizeInBytes", v8);
      (*(void (**)(__int64, const char*, __int64))(*(_QWORD*)a1 + 32LL))(
          a1, "#D", 40);
      (*(void (**)(__int64, const char*, _QWORD))(*(_QWORD*)a1 + 32LL))(
          a1, "#E", 0);
      return 1;
    }
    else {
      NgxRoutine_b4b90_alt3(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          337, (__int64)"GetStatsCommon",
          "Error: could't find initialized instance");
      NgxRoutine_e2de0_alt1(&NgxData_2b88b58);
      return 3134193671LL;
    }
  }
  else {
    NgxRoutine_b4b90_alt3(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        327, (__int64)"GetStatsCommon", "Error: params pointer was null");
    return 3134193669LL;
  }
}

#pragma GCC visibility pop
