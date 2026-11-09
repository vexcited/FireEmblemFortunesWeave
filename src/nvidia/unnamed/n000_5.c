#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN NgxData_2669fb4;
extern int NgxData_266a59c;
extern _UNKNOWN NgxData_2b70a50;
extern __int64 (*NgxData_2b70a58)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD);
extern __int64 (*NgxData_2b70a60)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD);
extern __int64 (*NgxData_2b70a68)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*NgxData_2b70a70)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*NgxData_2b70a78)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD);
extern _UNKNOWN* NgxData_2b70a80;
extern __int64 (*NgxData_2b70a88)(_QWORD, _QWORD);
extern _UNKNOWN* NgxData_2b70a90;
extern _UNKNOWN* NgxData_2b70a98;
extern _UNKNOWN* NgxData_2b70aa0;
extern _UNKNOWN* NgxData_2b70aa8;
extern _UNKNOWN* NgxData_2b70ab0;
extern _UNKNOWN* NgxData_2b70ab8;
extern _UNKNOWN* NgxData_2b70ac0;
extern __int64 NgxData_2b70ac8;
extern _UNKNOWN* NgxData_2b70ad0;
extern _UNKNOWN* NgxData_2b70ad8;
extern _UNKNOWN* NgxData_2b70ae0;
extern _UNKNOWN* NgxData_2b70ae8;
extern __int64 NgxData_2b70af0;
extern __int64 NgxData_2b70af8;
extern __int64 NgxData_2b88b40;
extern _UNKNOWN NgxData_2b88b58;
extern __int64 NgxData_2b88b68;
extern __int64 NgxData_2b88b70;
extern __int64 NgxData_2b88b80;
extern _DWORD NgxData_938040[25];
extern _DWORD NgxData_9380a4[3];
extern _DWORD NgxData_9380b0[3];
extern _DWORD NgxData_9380bc[7];
extern __int64 NgxData_9513c0;
extern _UNKNOWN* NgxData_952228;
extern _UNKNOWN* NgxData_9547a8;
extern __int64* NgxData_9547b0[2];
extern __int64* NgxData_9547b8;
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 NgxRoutine_36960(__int64, int*);
__int64 NgxRoutine_36f20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_7d420(__int64, __int64);
__int64 NgxRoutine_a3fe0(__int64);
__int64 NgxRoutine_a40a0(__int64);
_QWORD* NgxRoutine_a7260(_QWORD*, __int64*);
__int64 NgxRoutine_a7830(__int64, char);
_QWORD* NgxRoutine_a89c0(__int64, __int64*, __int64, _QWORD**);
__int64 NgxRoutine_a8d00(__int64*, __int64*);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, const char*, ...);
__int64 NgxRoutine_b6d50(__int64);
__int64 NgxRoutine_b8ba0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_ba400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_ba840(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e2db0(_QWORD);
__int64 NgxRoutine_e2de0(_QWORD);
__int64 NgxRoutine_e30e0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e30f0(_QWORD);
__int64 NgxRoutine_e3100(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3120(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3480(_QWORD, _QWORD);
__int64 NgxRoutine_e3490(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e34a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e34b0(_QWORD, _QWORD);
__int64 NgxRoutine_e34c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e34d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e34e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e34f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3500(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3550(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3560(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3570(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3580(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3590(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e35a0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e35b0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e35c0(_QWORD, _QWORD, _QWORD);

__int64 NgxHr_b2dd0()
{
  __int64 v0;
  unsigned int v1;
  int v4;

  v0 = NgxRoutine_e2db0(&NgxData_2b70a50);
  v4 = 0;
  if (NgxData_2b70a80 != nullptr) {
    v1 = ((__int64 (*)(__int64))NgxData_2b70a80)(v0);
    if (v1 != 1) {
      goto LABEL_11;
    }
  LABEL_9:
    v1 = 1;
    NgxData_2b70a58 = nullptr;
    NgxData_2b70a60 = nullptr;
    NgxData_2b70a68 = nullptr;
    NgxData_2b70a70 = nullptr;
    NgxData_2b70a78 = nullptr;
    NgxData_2b70a80 = nullptr;
    NgxData_2b70a88 = nullptr;
    NgxData_2b70a90 = nullptr;
    NgxData_2b70a98 = nullptr;
    NgxData_2b70aa0 = nullptr;
    NgxData_2b70aa8 = nullptr;
    NgxData_2b70ab0 = nullptr;
    NgxData_2b70ab8 = nullptr;
    NgxData_2b70ac0 = nullptr;
    NgxData_2b70ac8 = 0;
    NgxData_2b70ad0 = nullptr;
    NgxData_2b70ad8 = nullptr;
    NgxData_2b70ae0 = nullptr;
    NgxData_2b70ae8 = nullptr;
    NgxData_2b70af0 = 0;
    NgxData_2b70af8 = 0;
    goto LABEL_11;
  }
  if (NgxData_2b70a88 == nullptr) {
    v1 = -1160773625;
    goto LABEL_11;
  }
  v1 = NgxData_2b70a88(0, &v4);
  if (v1 == 1 && v4 == 0) {
    goto LABEL_9;
  }
LABEL_11:
  NgxRoutine_e2de0(&NgxData_2b70a50);
  return v1;
}

__int64 NgxHr_b5e90(int* a1)
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
  NgxRoutine_e2db0(&NgxData_2b88b58);
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
      NgxRoutine_b4b90(
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
  NgxRoutine_a8d00(NgxData_9547b8, (__int64*)v9);
  if (v14 != 0) {
    v16 = v14;
    v15 = NgxRoutine_a7260(NgxData_9547b0[0], &v16);
    if (v15 != nullptr) {
      v12 = NgxRoutine_36960(v15[9], a1);
    }
    else {
      v12 = -1160773630;
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          61, (__int64)"findExistingDeviceData",
          "Error: specified Device not found");
    }
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        263, (__int64)"ReleaseFeatureCommon", "Error: Device was nullptr");
    v12 = -1160773625;
  }
LABEL_26:
  NgxRoutine_e2de0(&NgxData_2b88b58);
  return v12;
}

__int64 NgxHr_b60a0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4)
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
  NgxRoutine_e2db0(NgxData_9547a8);
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
      NgxRoutine_b4b90(
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
  v20 = NgxRoutine_a7260(NgxData_9547b0[0], &v21);
  if (v20 != nullptr) {
    v18 = NgxRoutine_36f20(v20[9], a1, a2, a3, a4);
  }
  else {
    v18 = -1160773630;
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        61, (__int64)"findExistingDeviceData",
        "Error: specified Device not found");
  }
LABEL_26:
  NgxRoutine_e2de0(&NgxData_2b88b58);
  return v18;
}

__int64 NgxHr_b6330(__int64 a1)
{
  unsigned int v2;

  if (a1 != 0) {
    NgxRoutine_e2db0(&NgxData_2b88b58);
    if (NgxData_2b88b40 != 0) {
      v2 = NgxRoutine_7d420(*(_QWORD*)(NgxData_2b88b40 + 72), a1);
    }
    else {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          314, (__int64)"GetOptimalSettingsCommon",
          "Error: could't find initialized instance");
      v2 = -1160773625;
    }
    NgxRoutine_e2de0(&NgxData_2b88b58);
    return v2;
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        305, (__int64)"GetOptimalSettingsCommon",
        "Error: params pointer was null");
    return 3134193669LL;
  }
}

__int64 NgxHr_b6400(__int64 a1)
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
    NgxRoutine_e2db0(&NgxData_2b88b58);
    if (NgxData_2b88b40 != 0) {
      (*(void (**)(_QWORD, __int64*, __int64*))(
          **(_QWORD**)(NgxData_2b88b40 + 120) + 544LL))(
          *(_QWORD*)(NgxData_2b88b40 + 120), &v8, &v5);
      NgxRoutine_e2de0(&NgxData_2b88b58);
      (**(void (***)(__int64, char*, __int64))a1)(a1, "SizeInBytes", v8);
      (*(void (**)(__int64, const char*, __int64))(*(_QWORD*)a1 + 32LL))(
          a1, "#D", 40);
      (*(void (**)(__int64, const char*, _QWORD))(*(_QWORD*)a1 + 32LL))(
          a1, "#E", 0);
      return 1;
    }
    else {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
          337, (__int64)"GetStatsCommon",
          "Error: could't find initialized instance");
      NgxRoutine_e2de0(&NgxData_2b88b58);
      return 3134193671LL;
    }
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa\\ngx_templates.h",
        327, (__int64)"GetStatsCommon", "Error: params pointer was null");
    return 3134193669LL;
  }
}

__int64 NgxHr_b6d50(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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

  if (NgxData_9513c0 == 0) {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        59, (__int64)"LoadVkEntrypoints", "error: Vulkan library not loaded");
    return 0xFFFFFFFFLL;
  }
  v2 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCreateCuModuleNVX");
  *(_QWORD*)(a1 + 880) = v2;
  if (v2 != 0) {
    v3 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCreateCuFunctionNVX");
    *(_QWORD*)(a1 + 888) = v3;
    if (v3 != 0) {
      goto LABEL_4;
    }
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        110, (__int64)"LoadVkEntrypoints",
        "Failed to load VK device function: %s", "vkCreateCuModuleNVX");
    v14 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCreateCuFunctionNVX");
    *(_QWORD*)(a1 + 888) = v14;
    if (v14 != 0) {
    LABEL_4:
      v4 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkDestroyCuModuleNVX");
      *(_QWORD*)(a1 + 896) = v4;
      if (v4 != 0) {
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkCreateCuFunctionNVX");
  v15 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkDestroyCuModuleNVX");
  *(_QWORD*)(a1 + 896) = v15;
  if (v15 != 0) {
  LABEL_5:
    v5 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkDestroyCuFunctionNVX");
    *(_QWORD*)(a1 + 904) = v5;
    if (v5 != 0) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkDestroyCuModuleNVX");
  v16 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkDestroyCuFunctionNVX");
  *(_QWORD*)(a1 + 904) = v16;
  if (v16 != 0) {
  LABEL_6:
    v6 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCmdCuLaunchKernelNVX");
    *(_QWORD*)(a1 + 912) = v6;
    if (v6 != 0) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkDestroyCuFunctionNVX");
  v17 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCmdCuLaunchKernelNVX");
  *(_QWORD*)(a1 + 912) = v17;
  if (v17 != 0) {
  LABEL_7:
    v7 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewAddressNVX");
    *(_QWORD*)(a1 + 920) = v7;
    if (v7 != 0) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkCmdCuLaunchKernelNVX");
  v18 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewAddressNVX");
  *(_QWORD*)(a1 + 920) = v18;
  if (v18 != 0) {
  LABEL_8:
    v8 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewHandleNVX");
    *(_QWORD*)(a1 + 928) = v8;
    if (v8 != 0) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkGetImageViewAddressNVX");
  v19 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewHandleNVX");
  *(_QWORD*)(a1 + 928) = v19;
  if (v19 != 0) {
  LABEL_9:
    v9 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewHandle64NVX");
    *(_QWORD*)(a1 + 936) = v9;
    if (v9 != 0) {
      goto LABEL_10;
    }
  LABEL_21:
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        110, (__int64)"LoadVkEntrypoints",
        "Failed to load VK device function: %s", "vkGetImageViewHandle64NVX");
    v21 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCmdPushDescriptorSetKHR");
    *(_QWORD*)(a1 + 944) = v21;
    if (v21 != 0) {
      goto LABEL_11;
    }
    goto LABEL_22;
  }
LABEL_20:
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      110, (__int64)"LoadVkEntrypoints",
      "Failed to load VK device function: %s", "vkGetImageViewHandleNVX");
  v20 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkGetImageViewHandle64NVX");
  *(_QWORD*)(a1 + 936) = v20;
  if (v20 == 0) {
    goto LABEL_21;
  }
LABEL_10:
  v10 = NgxRoutine_e3480(*(_QWORD*)(a1 + 840), "vkCmdPushDescriptorSetKHR");
  *(_QWORD*)(a1 + 944) = v10;
  if (v10 == 0) {
  LABEL_22:
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        110, (__int64)"LoadVkEntrypoints",
        "Failed to load VK device function: %s", "vkCmdPushDescriptorSetKHR");
  }
LABEL_11:
  v11 = *(_QWORD*)(a1 + 840);
  *(_DWORD*)(a1 + 952) = 0;
  v12 = NgxRoutine_e3480(v11, "vkGetBufferDeviceAddress");
  *(_QWORD*)(a1 + 864) = v12;
  if (v12 != 0) {
    return 0;
  }
  v22 = *(_QWORD*)(a1 + 840);
  *(_DWORD*)(a1 + 952) = 1;
  v23 = NgxRoutine_e3480(v22, "vkGetBufferDeviceAddressKHR");
  *(_QWORD*)(a1 + 864) = v23;
  if (v23 != 0) {
    return 0;
  }
  v24 = *(_QWORD*)(a1 + 840);
  *(_DWORD*)(a1 + 952) = 2;
  v25 = NgxRoutine_e3480(v24, "vkGetBufferDeviceAddressEXT");
  *(_QWORD*)(a1 + 864) = v25;
  if (v25 != 0) {
    return 0;
  }
  NgxRoutine_b4b90(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      137, (__int64)"LoadVkEntrypoints",
      "Error: vkGetBufferDeviceAddressXXX() function is not available. Request "
      "VK_KHR_buffer_device_address or VK_EXT_buffe"
      "r_device_address extension");
  return 0xFFFFFFFFLL;
}

__int64 NgxHr_b7160(__int64 a1, _QWORD* a2)
{
  __int64 v5;
  unsigned __int64 v6;
  void* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  _BOOL4 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD v59[5];
  __int64 v60;
  _QWORD v61[2];
  int v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  __int64* v67;
  __int64 v68;
  int v69;
  _QWORD v70[4];
  _QWORD v71[6];
  __int64 v72;
  unsigned __int64 v73;
  __int128 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  _QWORD* v83;
  __int64 v84;
  int v85;
  _DWORD v86[3];

  NgxRoutine_a40a0(a1);
  *(_QWORD*)(a1 + 856) = *a2;
  *(_QWORD*)(a1 + 840) = a2[2];
  *(_QWORD*)(a1 + 848) = a2[1];
  if ((unsigned int)NgxRoutine_b6d50(a1) != 0) {
    return 0xFFFFFFFFLL;
  }
  v5 = *(_QWORD*)(a1 + 848);
  v86[0] = 0;
  NgxRoutine_e3490(v5, 0, v86, 0);
  v46 = NgxRoutine_420(260LL * v86[0]);
  NgxRoutine_e3490(*(_QWORD*)(a1 + 848), 0, v86, v46);
  v81 = 0;
  v82 = 0;
  v83 = nullptr;
  v84 = 0;
  v85 = 1065353216;
  if (v86[0] != 0) {
    v6 = 0;
    v7 = NgxData_952228;
    v8 = v46;
    do {
      v9 = NgxRoutine_e30f0(v8);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_71;
      }
      v10 = v9;
      if (v9 >= 0x17) {
        if ((v9 | 7) == 0x17) {
          v12 = 26;
        }
        else {
          v12 = (v9 | 7) + 1;
        }
        v11 = (char*)NgxRoutine_420(v12);
        v48 = v10;
        v49 = v11;
        v47 = v12 | 1;
      }
      else {
        v11 = (char*)&v47 + 1;
        LOBYTE(v47) = 2 * v9;
        if (v9 == 0) {
          goto LABEL_15;
        }
      }
      NgxRoutine_e3120(v11, v8, v10);
    LABEL_15:
      v11[v10] = 0;
      v13 = *(_DWORD*)(v8 + 256);
      v72 = (__int64)&v47;
      v14 = NgxRoutine_ba400(&v81, &v47, v7, &v72, v71);
      v15 = v47;
      *(_DWORD*)(v14 + 40) = v13;
      if ((v15 & 1) != 0) {
        NgxRoutine_430(v49, v47 & 0xFFFFFFFFFFFFFFFELL);
      }
      ++v6;
      v8 += 260;
    } while (v6 < v86[0]);
  }
  v16 = NgxRoutine_e30f0("VK_NVX_binary_import");
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_71;
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)NgxRoutine_420(v19);
    v48 = v17;
    v49 = v18;
    v47 = v19 | 1;
    goto LABEL_25;
  }
  LOBYTE(v47) = 2 * v16;
  v18 = (char*)&v47 + 1;
  if (v16 != 0) {
  LABEL_25:
    NgxRoutine_e3100(v18, "VK_NVX_binary_import", v17);
  }
  v18[v17] = 0;
  v72 = (__int64)&v47;
  v21 = false;
  if (*(_DWORD*)(NgxRoutine_ba840(&v81, &v47, NgxData_952228, &v72, v71) +
                 40) <= 1u) {
    goto LABEL_38;
  }
  v22 = NgxRoutine_e30f0("VK_NVX_image_view_handle");
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_71:
    NgxRoutine_27cb0();
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)NgxRoutine_420(v25);
    v73 = v23;
    *(_QWORD*)&v74 = v24;
    v72 = v25 | 1;
    goto LABEL_35;
  }
  LOBYTE(v72) = 2 * v22;
  v24 = (char*)&v72 + 1;
  if (v22 != 0) {
  LABEL_35:
    NgxRoutine_e3100(v24, "VK_NVX_image_view_handle", v23);
  }
  v24[v23] = 0;
  v71[0] = &v72;
  v21 = *(_DWORD*)(NgxRoutine_ba840(&v81, &v72, NgxData_952228, v71, v61) +
                   40) > 2u;
  if ((v72 & 1) != 0) {
    NgxRoutine_430(v74, v72 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_38:
  if ((v47 & 1) != 0) {
    NgxRoutine_430(v49, v47 & 0xFFFFFFFFFFFFFFFELL);
    if (v21) {
    LABEL_40:
      *(_BYTE*)(a1 + 1628) = 1;
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          191, (__int64)"Init", "Enabling texmode_raw");
      if (v84 == 0) {
        goto LABEL_58;
      }
    LABEL_44:
      v26 = v83;
      if (v83 != nullptr) {
        do {
          v30 = (_QWORD*)*v26;
          if ((v26[2] & 1) != 0) {
            NgxRoutine_430(v26[4], v26[2] & 0xFFFFFFFFFFFFFFFELL);
          }
          NgxRoutine_430(v26, 48);
          v26 = v30;
        } while (v30 != nullptr);
      }
      v83 = nullptr;
      if (v82 == 0) {
        goto LABEL_57;
      }
      v27 = v81;
      v28 = v82 & 7;
      if (v82 >= 8) {
        v31 = (_QWORD*)(v81 + 32);
        v32 = 0;
        v33 = -(__int64)(v82 & 0xFFFFFFFFFFFFFFF8LL);
        do {
          *(v31 - 4) = 0;
          *(v31 - 3) = 0;
          *(v31 - 2) = 0;
          *(v31 - 1) = 0;
          v32 -= 8;
          *v31 = 0;
          v31[1] = 0;
          v31[2] = 0;
          v31[3] = 0;
          v31 += 8;
        } while (v33 != v32);
        v29 = -v32;
        if (v28 == 0) {
          goto LABEL_57;
        }
      }
      else {
        v29 = 0;
        if ((v82 & 7) == 0) {
        LABEL_57:
          v84 = 0;
          goto LABEL_58;
        }
      }
      v34 = (_QWORD*)(v27 + 8 * v29);
      do {
        *v34++ = 0;
        --v28;
      } while (v28 != 0);
      goto LABEL_57;
    }
  }
  else if (v21) {
    goto LABEL_40;
  }
  if (v84 != 0) {
    goto LABEL_44;
  }
LABEL_58:
  NgxRoutine_430(v46, v20);
  v35 = *(_QWORD*)(a1 + 840);
  v72 = 31;
  v73 = 0;
  *(_QWORD*)&v74 = 0x100000000LL;
  *((_QWORD*)&v74 + 1) = 1;
  v77 = 0x3F80000000000000LL;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v75 = 0x200000002LL;
  v76 = 2;
  NgxRoutine_e34a0(v35, &v72, 0, a1 + 960);
  v36 = *(_QWORD*)(a1 + 840);
  *(_QWORD*)((char*)&v74 + 4) = 0;
  NgxRoutine_e34a0(v36, &v72, 0, a1 + 976);
  NgxRoutine_e34b0(*(_QWORD*)(a1 + 848), a1 + 1104);
  v37 = *(_QWORD*)(a1 + 840);
  memset(&v71[2], 0, 32);
  v71[0] = 0x300000000LL;
  v71[1] = 0x2000000001LL;
  v70[0] = 32;
  v70[1] = 0;
  v70[2] = 0x100000001LL;
  v70[3] = v71;
  if ((unsigned int)NgxRoutine_e34c0(v37, v70, 0, a1 + 1656) == 0) {
    v38 = *(_QWORD*)(a1 + 840);
    v61[1] = 0;
    v62 = 0;
    v64 = a1 + 1656;
    v66 = 0;
    v63 = 1;
    v65 = 1;
    v68 = 32;
    v69 = 32;
    v61[0] = 30;
    v67 = &v68;
    if ((unsigned int)NgxRoutine_e34d0(v38, v61, 0, a1 + 1640) == 0) {
      v59[1] = 0;
      v59[0] = 16;
      v59[2] = 0;
      v59[3] = (unsigned int)NgxData_266a59c;
      v39 = *(_QWORD*)(a1 + 840);
      v59[4] = &NgxData_2669fb4;
      if ((unsigned int)NgxRoutine_e34e0(v39, v59, 0, &v60) == 0) {
        v47 = 0;
        v48 = 0;
        v49 = nullptr;
        v50 = 0;
        v40 = *(_QWORD*)(a1 + 840);
        v51 = 0;
        v52 = 0;
        LODWORD(v47) = 29;
        v41 = *(_QWORD*)(a1 + 1640);
        v57 = 0;
        v58 = 0;
        v55 = 0;
        v56 = v41;
        LODWORD(v50) = 18;
        HIDWORD(v52) = 32;
        v53 = v60;
        v54 = "main";
        if ((unsigned int)NgxRoutine_e34f0(v40, 0, 1, &v47, 0, a1 + 1664) ==
            0) {
          NgxRoutine_e3500(*(_QWORD*)(a1 + 840), v60, 0);
          *(_WORD*)(a1 + 816) = 257;
          *(_QWORD*)(a1 + 808) = 0x300000170LL;
          NgxRoutine_a7830(a1 + 120, 1);
          NgxRoutine_a3fe0(a1);
          v42 = 0;
          v43 = v83;
          if (v83 == nullptr) {
            goto LABEL_63;
          }
          do {
          LABEL_69:
            v45 = (_QWORD*)*v43;
            if ((v43[2] & 1) != 0) {
              NgxRoutine_430(v43[4], v43[2] & 0xFFFFFFFFFFFFFFFELL);
            }
            NgxRoutine_430(v43, 48);
            v43 = v45;
          } while (v45 != nullptr);
          goto LABEL_63;
        }
      }
    }
  }
  v42 = -1;
  v43 = v83;
  if (v83 != nullptr) {
    goto LABEL_69;
  }
LABEL_63:
  v44 = v81;
  v81 = 0;
  if (v44 != 0) {
    NgxRoutine_430(v44, 8 * v82);
  }
  return v42;
}

__int64 NgxHr_b7c10(__int64 a1, __int64 a2, unsigned int a3, const char* a4,
                    int a5, __int64* a6, int a7, int a8, int a9, __int64 a10)
{
  _QWORD* v17;
  __int64 v18;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  _QWORD v24[4];
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;

  v31 = a2;
  v17 = NgxRoutine_a7260((_QWORD*)(a1 + 8), &v31);
  if (v17 != nullptr) {
    v18 = v17[2];
  LABEL_3:
    *a6 = v18;
    return 0;
  }
  if (*(_QWORD*)(a1 + 880) != 0 && *(_QWORD*)(a1 + 888) != 0) {
    v20 = NgxRoutine_420(48);
    *(_DWORD*)v20 = a5;
    v27 = 1000029000;
    v28 = nullptr;
    v25[0] = 1000029004;
    v25[1] = 0;
    v26 = 0;
    v29 = a3;
    v30 = v31;
    if (*(_BYTE*)(a1 + 1628) == 1) {
      LODWORD(v26) = 1;
      v28 = v25;
    }
    v21 = (*(__int64 (**)(_QWORD, __int64*, _QWORD, __int64))(a1 + 880))(
        *(_QWORD*)(a1 + 840), &v27, 0, v20 + 8);
    if (v21 != 0) {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          472, (__int64)"CreateKernel",
          "Error: vkCreateCuModuleNVX() for %s failed %d", a4, v21);
    }
    else {
      v22 = *(_QWORD*)(a1 + 840);
      *(_DWORD*)(v20 + 24) = a7;
      *(_DWORD*)(v20 + 28) = a8;
      *(_QWORD*)(v20 + 40) = a10;
      *(_DWORD*)(v20 + 32) = a9;
      v24[0] = 1000029001;
      v24[1] = 0;
      v24[2] = *(_QWORD*)(v20 + 8);
      v24[3] = a4;
      v23 = (*(__int64 (**)(__int64, _QWORD*, _QWORD, __int64))(a1 + 888))(
          v22, v24, 0, v20 + 16);
      if (v23 == 0) {
        v32 = &v31;
        NgxRoutine_a89c0(a1 + 8, &v31, (__int64)NgxData_952228, &v32)[3] = v20;
        v18 = v31;
        goto LABEL_3;
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          492, (__int64)"CreateKernel",
          "Error: vkCreateCuFunctionNVX(%s) failed %d", a4, v23);
      (*(void (**)(_QWORD, _QWORD, _QWORD))(a1 + 896))(*(_QWORD*)(a1 + 840),
                                                       *(_QWORD*)(v20 + 8), 0);
    }
    NgxRoutine_430(v20, 48);
  }
  else {
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        449, (__int64)"CreateKernel",
        "Error: vkCreateCuModuleNVX() and/or vkCreateCuFunctionNVX() functions "
        "are not available. Request VK_NVX_binary_import extension");
  }
  return 0xFFFFFFFFLL;
}

__int64 NgxHr_b7ef0(__int64 a1, unsigned int a2, __int64* a3, __int64 a4,
                    unsigned int a5)
{
  unsigned int* v5;
  int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  _BYTE* v12;
  char v13;
  __int64 (*v14)(_QWORD, _QWORD*);
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 (*v18)(_QWORD, _QWORD*);
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v5 = *(unsigned int**)(a1 + 280);
  if (v5 == nullptr) {
    return 4294967291LL;
  }
  if (a2 >= *v5) {
    return 4294967291LL;
  }
  if (a3 != nullptr) {
    v6 = *((_DWORD*)a3 + 12);
    v23 = 0;
    v24 = 0;
    v22[1] = 0;
    v22[0] = 1000030000;
    if (v6 != 0) {
      return 4294967291LL;
    }
    v23 = *a3;
    v25 = *(_QWORD*)(a1 + 8LL * a5 + 960);
    LODWORD(v24) = 1;
    if (*(_BYTE*)(a1 + 1628) == 1) {
      v14 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 936);
      if (v14 != nullptr) {
        v15 = a2;
        v16 = a4;
        v17 = v14(*(_QWORD*)(a1 + 840), v22);
        a4 = v16;
        a2 = v15;
        v8 = v17;
        goto LABEL_8;
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          580, (__int64)"GetInputTextureViewHandle64",
          "Error: vkGetImageViewHandle64NVX() function not available. Request "
          "VK_NVX_image_view_handle extension");
    }
    else {
      v18 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 928);
      if (v18 != nullptr) {
        v19 = a2;
        v20 = a4;
        v21 = v18(*(_QWORD*)(a1 + 840), v22);
        a4 = v20;
        a2 = v19;
        v8 = v21;
        goto LABEL_8;
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          589, (__int64)"GetInputTextureViewHandle64",
          "Error: vkGetImageViewHandleNVX() function not available. Request "
          "VK_NVX_image_view_handle extension");
    }
    return 0xFFFFFFFFLL;
  }
  v8 = 0;
LABEL_8:
  result = 0;
  v9 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v10 = *(_QWORD*)(v9 + 8);
  *(_QWORD*)(v9 + 8) = v8;
  v11 = v10 == v8;
  *(_DWORD*)(v9 + 4) = 1;
  v12 = *(_BYTE**)(v9 + 32);
  v13 = !v11;
  *(_BYTE*)v9 = v13;
  *v12 |= v13;
  return result;
}

__int64 NgxHr_b8080(__int64 a1, __int64* a2, __int64* a3, unsigned int a4)
{
  int v4;
  __int64 v6;
  __int64 (*v7)(_QWORD, _QWORD*);
  __int64* v8;
  unsigned int (*v9)(_QWORD, _QWORD*);
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a2 == nullptr) {
    v6 = 0;
  LABEL_11:
    *a3 = v6;
    return 0;
  }
  v4 = *((_DWORD*)a2 + 12);
  v11 = 0;
  v12 = 0;
  v10[1] = 0;
  v10[0] = 1000030000;
  if (v4 != 0) {
    return 4294967291LL;
  }
  v11 = *a2;
  v13 = *(_QWORD*)(a1 + 8LL * a4 + 960);
  LODWORD(v12) = 1;
  if (*(_BYTE*)(a1 + 1628) == 1) {
    v7 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 936);
    if (v7 != nullptr) {
      v8 = a3;
      v6 = v7(*(_QWORD*)(a1 + 840), v10);
    LABEL_10:
      a3 = v8;
      goto LABEL_11;
    }
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        580, (__int64)"GetInputTextureViewHandle64",
        "Error: vkGetImageViewHandle64NVX() function not available. Request "
        "VK_NVX_image_view_handle extension");
  }
  else {
    v9 = *(unsigned int (**)(_QWORD, _QWORD*))(a1 + 928);
    if (v9 != nullptr) {
      v8 = a3;
      v6 = v9(*(_QWORD*)(a1 + 840), v10);
      goto LABEL_10;
    }
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        589, (__int64)"GetInputTextureViewHandle64",
        "Error: vkGetImageViewHandleNVX() function not available. Request "
        "VK_NVX_image_view_handle extension");
  }
  return 0xFFFFFFFFLL;
}

__int64 NgxHr_b81b0(__int64 a1, unsigned int a2, __int64* a3, __int64 a4)
{
  unsigned int* v4;
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  _BYTE* v11;
  char v12;
  __int64 (*v13)(_QWORD, _QWORD*);
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(_QWORD, _QWORD*);
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  _QWORD v21[2];
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = *(unsigned int**)(a1 + 280);
  if (v4 == nullptr) {
    return 4294967291LL;
  }
  if (a2 >= *v4) {
    return 4294967291LL;
  }
  if (a3 != nullptr) {
    v5 = *((_DWORD*)a3 + 12);
    v23 = 0;
    v24 = 0;
    v21[1] = 0;
    v22 = 0;
    v21[0] = 1000030000;
    if (v5 != 0) {
      return 4294967291LL;
    }
    v22 = *a3;
    LODWORD(v23) = 3;
    if (*(_BYTE*)(a1 + 1628) == 1) {
      v13 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 936);
      if (v13 != nullptr) {
        v14 = a2;
        v15 = a4;
        v16 = v13(*(_QWORD*)(a1 + 840), v21);
        a4 = v15;
        a2 = v14;
        v7 = v16;
        goto LABEL_8;
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          635, (__int64)"GetInputSurfaceViewHandle64",
          "Error: vkGetImageViewHandle64NVX() function not available. Request "
          "VK_NVX_image_view_handle extension");
    }
    else {
      v17 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 928);
      if (v17 != nullptr) {
        v18 = a2;
        v19 = a4;
        v20 = v17(*(_QWORD*)(a1 + 840), v21);
        a4 = v19;
        a2 = v18;
        v7 = v20;
        goto LABEL_8;
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          644, (__int64)"GetInputSurfaceViewHandle64",
          "Error: vkGetImageViewHandleNVX() function not available. Request "
          "VK_NVX_image_view_handle extension");
    }
    return 0xFFFFFFFFLL;
  }
  v7 = 0;
LABEL_8:
  result = 0;
  v8 = *(_QWORD*)(a4 + 16) + 40LL * a2;
  v9 = *(_QWORD*)(v8 + 8);
  *(_QWORD*)(v8 + 8) = v7;
  v10 = v9 == v7;
  *(_DWORD*)(v8 + 4) = 1;
  v11 = *(_BYTE**)(v8 + 32);
  v12 = !v10;
  *(_BYTE*)v8 = v12;
  *v11 |= v12;
  return result;
}

__int64 NgxHr_b8330(__int64 a1, __int64* a2, __int64* a3)
{
  int v3;
  __int64 v5;
  __int64 (*v6)(_QWORD, _QWORD*);
  __int64* v7;
  unsigned int (*v8)(_QWORD, _QWORD*);
  _QWORD v9[2];
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (a2 == nullptr) {
    v5 = 0;
  LABEL_11:
    *a3 = v5;
    return 0;
  }
  v3 = *((_DWORD*)a2 + 12);
  v11 = 0;
  v12 = 0;
  v9[1] = 0;
  v10 = 0;
  v9[0] = 1000030000;
  if (v3 != 0) {
    return 4294967291LL;
  }
  v10 = *a2;
  LODWORD(v11) = 3;
  if (*(_BYTE*)(a1 + 1628) == 1) {
    v6 = *(__int64 (**)(_QWORD, _QWORD*))(a1 + 936);
    if (v6 != nullptr) {
      v7 = a3;
      v5 = v6(*(_QWORD*)(a1 + 840), v9);
    LABEL_10:
      a3 = v7;
      goto LABEL_11;
    }
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        635, (__int64)"GetInputSurfaceViewHandle64",
        "Error: vkGetImageViewHandle64NVX() function not available. Request "
        "VK_NVX_image_view_handle extension");
  }
  else {
    v8 = *(unsigned int (**)(_QWORD, _QWORD*))(a1 + 928);
    if (v8 != nullptr) {
      v7 = a3;
      v5 = v8(*(_QWORD*)(a1 + 840), v9);
      goto LABEL_10;
    }
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        644, (__int64)"GetInputSurfaceViewHandle64",
        "Error: vkGetImageViewHandleNVX() function not available. Request "
        "VK_NVX_image_view_handle extension");
  }
  return 0xFFFFFFFFLL;
}

__int64 NgxHr_b87c0(__int64 a1, unsigned int* a2, __int64* a3, char a4)
{
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  char v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;
  char v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[2];
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  _QWORD* v47;
  _BYTE v48[12];
  int v49;
  int v50;
  _QWORD v51[2];
  __int64 v52;
  _QWORD v53[3];
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int128 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;

  v54 = 14;
  v64 = 0;
  v65 = 0;
  v62 = 0;
  v63 = 0;
  v60 = 0;
  v61 = 0;
  v59 = 0u;
  v57 = 0;
  v58 = 0;
  v55 = nullptr;
  v56 = 0x100000000LL;
  if ((a4 & 1) != 0) {
    v7 = a2[2];
  }
  else {
    v8 = a2[3] - 1;
    if (v8 > 0x18) {
      v7 = 0;
    }
    else {
      v7 = NgxData_938040[v8];
    }
  }
  v9 = *a2;
  v10 = a2[1];
  v11 = -1;
  HIDWORD(v59) = 0;
  LODWORD(v63) = 0;
  a2[14] = -1;
  v57 = __PAIR64__(v9, v7);
  v58 = v10 | 0x100000000LL;
  *((_BYTE*)a2 + 60) = 1;
  v12 = a2[6];
  *(_QWORD*)((char*)&v59 + 4) = 0x100000001LL;
  LODWORD(v59) = a2[4];
  v13 = v12 - 1;
  if (v12 - 1 > 2) {
    v14 = 0;
  }
  else {
    v14 = NgxData_9380a4[v13];
    v11 = NgxData_9380b0[v13];
    LODWORD(v60) = v14;
  }
  v53[2] = 1;
  v15 = *((_BYTE*)a2 + 20);
  v53[0] = 1000072001;
  v53[1] = 0;
  if ((v15 & 1) != 0) {
    v49 = v14;
    v50 = 0;
    *(_DWORD*)v48 = v7;
    v26 = *(_QWORD*)(a1 + 848);
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v47 = v51;
    *(_QWORD*)&v48[4] = 1;
    v46 = 1000059004;
    v51[0] = 1000071000;
    v51[1] = 0;
    v52 = 1;
    v42 = 1000071001;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v32[1] = &v42;
    v32[0] = 1000059003;
    if ((unsigned int)NgxRoutine_e35c0(v26, &v46, v32) != 0 || (v44 & 2) == 0) {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          902, (__int64)"CreateTexture2DResourceSharedImpl",
          "Error: Vulkan image format is not exportable!");
      return 0xFFFFFFFFLL;
    }
    v55 = v53;
    if ((unsigned int)NgxRoutine_e3550(*(_QWORD*)(a1 + 840), &v54, 0, &v64) !=
        0) {
      return 0xFFFFFFFFLL;
    }
  }
  else if ((unsigned int)NgxRoutine_e3550(*(_QWORD*)(a1 + 840), &v54, 0,
                                          &v64) != 0) {
    return 0xFFFFFFFFLL;
  }
  v16 = *(_QWORD*)(a1 + 840);
  v43 = 0;
  v44 = 0;
  v42 = 0;
  NgxRoutine_e3560(v16, v64, &v42);
  v17 = *(unsigned int*)(a1 + 1104);
  if ((_DWORD)v17 == 0) {
    goto LABEL_24;
  }
  v18 = (_DWORD*)(a1 + 1108);
  v19 = 0;
  while ((((unsigned int)v44 >> v19) & 1) == 0 || (*v18 | v11) != 0xFFFFFFFF) {
    ++v19;
    v18 += 2;
    if (v17 == v19) {
      goto LABEL_24;
    }
  }
  *(_DWORD*)&v48[8] = v19;
  v46 = 5;
  v47 = nullptr;
  *(_QWORD*)v48 = v42;
  v52 = 1;
  v20 = *((_BYTE*)a2 + 20);
  v51[0] = 1000072002;
  v51[1] = 0;
  if ((v20 & 1) != 0) {
    v47 = v51;
  }
  v21 = NgxRoutine_e3570(*(_QWORD*)(a1 + 840), &v46, 0, &v41);
  v22 = *(_QWORD*)(a1 + 840);
  v23 = v64;
  if (v21 != 0) {
    goto LABEL_25;
  }
  if ((unsigned int)NgxRoutine_e3580(v22, v64, v41, 0) == 0) {
    v32[1] = 0;
    v36 = 0;
    v24 = 1;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v32[0] = 15;
    v33 = 0;
    v34 = v64;
    LODWORD(v35) = 1;
    HIDWORD(v35) = v57;
    if ((unsigned int)(v57 - 124) <= 6) {
      v24 = NgxData_9380bc[(unsigned int)(v57 - 124)];
    }
    v25 = *(_QWORD*)(a1 + 840);
    LODWORD(v38) = v24;
    LODWORD(v39) = 1;
    LODWORD(v40) = 1;
    if ((unsigned int)NgxRoutine_e3590(v25, v32, 0, &v65) == 0) {
      NgxRoutine_b8ba0(a1 + 1048, &v64, &v41);
      v28 = NgxRoutine_420(56);
      NgxRoutine_e30e0(v28, 0, 56);
      v29 = v58;
      *a3 = v28;
      *(_DWORD*)(v28 + 44) = v29;
      *(_DWORD*)(v28 + 48) = 0;
      *(_QWORD*)(v28 + 36) = v57;
      v30 = v64;
      *(_QWORD*)v28 = v65;
      *(_QWORD*)(v28 + 8) = v30;
      v31 = v39;
      *(_QWORD*)(v28 + 16) = v38;
      *(_QWORD*)(v28 + 24) = v31;
      *(_DWORD*)(v28 + 32) = v40;
      *(_BYTE*)(v28 + 52) = 1;
      return 0;
    }
  }
  NgxRoutine_e35a0(*(_QWORD*)(a1 + 840), v41, 0);
LABEL_24:
  v22 = *(_QWORD*)(a1 + 840);
  v23 = v64;
LABEL_25:
  NgxRoutine_e35b0(v22, v23, 0);
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
