#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NGXSafeInitializeLog(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, __int64, ...);
__int64 NgxRoutine_e2db0(_QWORD);
__int64 NgxRoutine_e2de0(_QWORD);
extern _UNKNOWN NgxData_2b70a50;
extern _UNKNOWN NgxData_f5734;
extern _UNKNOWN* NgxData_2b70a70;
extern _UNKNOWN* NgxData_2b70a78;
extern _UNKNOWN* NgxData_2b70a80;
extern _UNKNOWN* NgxData_2b70a88;
extern _UNKNOWN* NgxData_2b70a90;
extern _UNKNOWN* NgxData_2b70a98;
extern _UNKNOWN* NgxData_2b70aa0;
extern _UNKNOWN* NgxData_2b70aa8;
extern _UNKNOWN* NgxData_2b70ab0;
extern _UNKNOWN* NgxData_2b70ab8;
extern _UNKNOWN* NgxData_2b70ac0;
extern _UNKNOWN* NgxData_2b70ad0;
extern _UNKNOWN* NgxData_2b70ad8;
extern _UNKNOWN* NgxData_2b70ae0;
extern _UNKNOWN* NgxData_2b70ae8;
extern __int64 (*NgxData_2b70a58)(__int64, __int64, __int64, __int64, __int64,
                                  _QWORD);
extern __int64 (*NgxData_2b70a58_alt1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD) __asm__("NgxData_2b70a58");
extern __int64 (*NgxData_2b70a60)(__int64, __int64, __int64, __int64, __int64,
                                  _QWORD, __int64);
extern __int64 (*NgxData_2b70a60_alt1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD,
                                       _QWORD) __asm__("NgxData_2b70a60");
extern __int64 (*NgxData_2b70a68)(__int64, __int64, __int64, __int64, __int64,
                                  __int64, __int64, _QWORD, __int64);
extern __int64 (*NgxData_2b70a68_alt1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD,
                                       _QWORD) __asm__("NgxData_2b70a68");
extern __int64 (*NgxData_2b70a70_alt1)(__int64, _QWORD, __int64, __int64,
                                       __int64, __int64, __int64, _QWORD,
                                       __int64) __asm__("NgxData_2b70a70");
extern __int64 (*NgxData_2b70a78_alt1)(__int64, _QWORD, __int64, __int64,
                                       __int64, __int64, __int64, __int64,
                                       __int64, __int64,
                                       __int64) __asm__("NgxData_2b70a78");
extern __int64 (*NgxData_954680[4])();
extern __int64 (*NgxData_954688[3])();
extern __int64 (*NgxData_954690[2])();
extern __int64 (*NgxData_954698)();
extern __int64 (*NgxData_9546a8)();
extern __int64 (*NgxData_9546b0[2])(int, int, int, int, int, int, int, int,
                                    __int64);
extern __int64 (*NgxData_9546b8)(int, int, int, int, int, int, int, int,
                                 __int64);
extern __int64 (*NgxData_9546c0)(int, int, int, int, int, int, int, int,
                                 __int64, int, __int64);
extern __int64 (*NgxData_9546c8[11])();
extern __int64 (*NgxData_9546d0[10])();
extern __int64 (*NgxData_9546d8[9])();
extern __int64 (*NgxData_9546e0[8])();
extern __int64 (*NgxData_9546e8[7])();
extern __int64 (*NgxData_9546f0[6])();
extern __int64 (*NgxData_9546f8[5])();
extern __int64 (*NgxData_954700[4])();
extern __int64 (*NgxData_954708[3])();
extern __int64 (*NgxData_954710[2])();
extern __int64 (*NgxData_954718)();
extern __int64 NgxData_2b70ac8;
extern __int64 NgxData_2b70af0;
extern __int64 NgxData_2b70af8;
__int64 NVSDK_NGX_VULKAN_Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              unsigned int a9);
__int64 nvsdk_ngx_vulkan_lib_b2a60(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 NVSDK_NGX_VULKAN_Init_with_ProjectID(__int64 a1, unsigned int a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6, __int64 a7, __int64 a8,
                                             __int64 a9, __int64 a10,
                                             unsigned int a11);

__int64 NVSDK_NGX_VULKAN_Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                              unsigned int a9)
{
  __int64 result;

  result = nvsdk_ngx_vulkan_lib_b2a60(a2, a6, a8, a9);
  if ((_DWORD)result == 1) {
    if (NgxData_2b70a68 != nullptr) {
      return NgxData_2b70a68(a1, a2, a3, a4, a5, a6, a7, a9, a8);
    }
    if (a6 != 0 && a7 != 0) {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/sdk/source/api/nvsdk_ngx_vulkan_lib.cpp",
          327, (__int64)"NVSDK_NGX_VULKAN_Init",
          (__int64)"error: app passed vkGetInstance/DeviceProcAddr but NGX "
                   "Core driver does not support the proper Init ent"
                   "rypoint... Please update your driver.");
    }
    else {
      if (NgxData_2b70a60 != nullptr) {
        return NgxData_2b70a60(a1, a2, a3, a4, a5, a9, a8);
      }
      if (a8 == 0 || *(_QWORD*)a8 == 0 || *(_DWORD*)(a8 + 8) == 0) {
        return NgxData_2b70a58(a1, a2, a3, a4, a5, a9);
      }
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/sdk/source/api/nvsdk_ngx_vulkan_lib.cpp",
          341, (__int64)"NVSDK_NGX_VULKAN_Init",
          (__int64)"error: app passed non-empty list of extra paths but NGX "
                   "Core driver does not support the proper Init en"
                   "trypoint... Please update your driver.");
    }
    return 3134193676LL;
  }
  return result;
}

__int64 nvsdk_ngx_vulkan_lib_b2a60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v10;

  v8 = -1160773617;
  NgxRoutine_e2db0(&NgxData_2b70a50);
  if (a3 != 0 && a4 >= 20) {
    v9 = *(unsigned __int8*)(a3 + 36);
    if ((_DWORD)v9 == 1 && *(_QWORD*)(a3 + 24) == 0 ||
        (unsigned int)(v10 = *(unsigned int*)(a3 + 32)) > 2) {
      v8 = -1160773627;
      goto LABEL_30;
    }
    if ((NGXSafeInitializeLog(a1, &NgxData_f5734, v10, *(_QWORD*)(a3 + 24),
                              v9) &
         1) == 0) {
      goto LABEL_30;
    }
  }
  else if ((NGXSafeInitializeLog(a1, &NgxData_f5734, 0, 0, 0) & 1) == 0) {
    goto LABEL_30;
  }
  if (NgxData_2b70a58_alt1 == nullptr || NgxData_2b70a80 == nullptr ||
      NgxData_2b70a98 == nullptr || NgxData_2b70a90 == nullptr ||
      NgxData_2b70aa0 == nullptr || NgxData_2b70ab0 == nullptr ||
      NgxData_2b70ab8 == nullptr) {
    NgxData_2b70af8 = a2;
    NgxData_2b70a58_alt1 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD))NgxData_954698;
    NgxData_2b70a60_alt1 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD))NgxData_9546a8;
    NgxData_2b70a68_alt1 =
        (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD, _QWORD))NgxData_9546b0[0];
    NgxData_2b70a70 = NgxData_9546b8;
    NgxData_2b70a78 = NgxData_9546c0;
    NgxData_2b70a80 = NgxData_9546c8[0];
    NgxData_2b70a88 = NgxData_9546d0[0];
    NgxData_2b70a90 = NgxData_9546e0[0];
    NgxData_2b70a98 = NgxData_9546d8[0];
    NgxData_2b70aa0 = NgxData_9546e8[0];
    NgxData_2b70aa8 = NgxData_9546f0[0];
    NgxData_2b70ab0 = NgxData_954700[0];
    NgxData_2b70ab8 = NgxData_9546f8[0];
    NgxData_2b70ac0 = NgxData_954708[0];
    NgxData_2b70ac8 = (__int64)NgxData_954710[0];
    NgxData_2b70ad0 = NgxData_954718;
    NgxData_2b70ad8 = NgxData_954680[0];
    NgxData_2b70ae0 = NgxData_954690[0];
    NgxData_2b70ae8 = NgxData_954688[0];
    NgxData_2b70af0 = 0;
  }
  v8 = 1;
LABEL_30:
  NgxRoutine_e2de0(&NgxData_2b70a50);
  return v8;
}

__int64 NVSDK_NGX_VULKAN_Init_with_ProjectID(__int64 a1, unsigned int a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6, __int64 a7, __int64 a8,
                                             __int64 a9, __int64 a10,
                                             unsigned int a11)
{
  __int64 v17;
  unsigned int v18;
  const char* v20;
  __int64 v21;

  v17 = a10;
  v18 = nvsdk_ngx_vulkan_lib_b2a60(a4, a8, a10, a11);
  if (v18 == 1) {
    if (NgxData_2b70a78_alt1 != nullptr) {
      LODWORD(a10) = a11;
      return NgxData_2b70a78_alt1(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v17);
    }
    if (a8 != 0 && a9 != 0) {
      v20 = "error: app passed vkGetInstance/DeviceProcAddr but NGX Core "
            "driver does not support the proper Init entrypoi"
            "nt... Please update your driver.";
      v21 = 367;
    }
    else {
      if (NgxData_2b70a70_alt1 != nullptr) {
        return NgxData_2b70a70_alt1(a1, a2, a3, a4, a5, a6, a7, a11, a10);
      }
      v20 = "error: app called Init with ProjectID but NGX Core driver does "
            "not support the proper Init entrypoint... Ple"
            "ase update your driver.";
      v21 = 378;
    }
    v18 = -1160773620;
    NgxRoutine_b4b90(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/vulkan/sdk/source/api/nvsdk_ngx_vulkan_lib.cpp",
        v21, (__int64)"NVSDK_NGX_VULKAN_Init_with_ProjectID", (__int64)v20);
  }
  return v18;
}

#pragma GCC visibility pop
