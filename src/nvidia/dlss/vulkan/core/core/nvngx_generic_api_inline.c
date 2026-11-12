#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_b3ef0(_QWORD, _QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4c00(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64* dltss_network_transformers_71640(__int64* result, _QWORD*);
extern __int64 (****NgxData_954670)(int, int, int, int, int, int, int, int,
                                    char);
extern __int64 NgxData_2b70a48;
extern __int64 NgxData_954678;
extern char* NgxData_94ecf0[12];
__int64 NVSDK_NGX_AllocateParameters(_QWORD* a1);
__int64 nvngx_generic_api_afc30(__int64 a1, int a2, __int64 a3, _QWORD** a4);
__int64 nvngx_generic_api_afe00(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4, _QWORD** a5);

__int64 NVSDK_NGX_AllocateParameters(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v4;

  if (NgxData_2b70a48 == 0) {
    return 3134193671LL;
  }
  if (a1 != nullptr) {
    v2 = (_QWORD*)NgxRoutine_420(88);
    NgxRoutine_b3ef0(v2, *NgxData_954670);
    v4 = NgxData_954678;
    *a1 = v2;
    *v2 = v4 + 16;
    return 1;
  }
  else {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
                     416, "NVSDK_NGX_AllocateParameters",
                     "error: please provide valid reference to a pointer to "
                     "parameter interface");
    return 3134193669LL;
  }
}

__int64 nvngx_generic_api_afc30(__int64 a1, int a2, __int64 a3, _QWORD** a4)
{
  __int64 result;
  __int64 v9;
  __int64 (*v10)(__int64, _QWORD, __int64, _QWORD**);
  unsigned int v11;
  unsigned int v12;
  _QWORD* v13;
  _QWORD* v14;
  _DWORD* v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;

  if (a2 < 17) {
    if (NgxData_2b70a48 != 0) {
      if (a3 != 0 && a4 != nullptr) {
        v9 = NgxData_2b70a48;
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan\\core/core/nvngx_generic_api.h",
            471, "NVSDK_NGX_CreateFeature_Validate", "app id is %llu ",
            *(_QWORD*)NgxData_2b70a48);
        v10 = *(__int64 (**)(__int64, _QWORD, __int64, _QWORD**))(
            v9 + 120LL * (unsigned int)a2 + 32872);
        if (v10 != nullptr) {
          result = v10(a1, (unsigned int)a2, a3, a4);
          if ((result & 0xFFF00000) != 0xBAD00000) {
            v11 = a2;
            v12 = result;
            v13 = (_QWORD*)NgxRoutine_420(32);
            v14 = *a4;
            *v13 = 0;
            v13[1] = 0;
            v18 = v13;
            v15 = v13;
            v13[2] = a1;
            v13[3] = 0;
            v13[3] = *v14;
            v13[1] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 136LL))(a3);
            *v15 = 1;
            dltss_network_transformers_71640(
                (__int64*)(v9 + 24LL * v11 + 35152), &v18);
            v17 = v18 + 3;
            v16 = *((_DWORD*)v18 + 6);
            *a4 = v18 + 3;
            NgxRoutine_b4c00(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
                517, "NGXStoreCallToCreateFeature",
                "stored create feature %s handle %d",
                NgxData_94ecf0[*((unsigned int*)v17 + 1)], v16);
            return v12;
          }
        }
        else {
          return 3134193675LL;
        }
      }
      else {
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan\\core/core/nvngx_generic_api.h",
            467, "NVSDK_NGX_CreateFeature_Validate",
            "error: invalid handle or parameters interface pointer", a1);
        return 3134193669LL;
      }
    }
    else {
      return 3134193671LL;
    }
  }
  else {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
                     461, "NVSDK_NGX_CreateFeature_Validate",
                     "error: required feature is not supported by NGX runtime, "
                     "please update display driver",
                     a1);
    return 3134193676LL;
  }
  return result;
}

__int64 nvngx_generic_api_afe00(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4, _QWORD** a5)
{
  __int64 result;
  __int64 v11;
  __int64 (*v12)(__int64, __int64, _QWORD, __int64, _QWORD**);
  unsigned int v13;
  _QWORD* v14;
  _QWORD* v15;
  _DWORD* v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;

  if ((int)a3 < 17) {
    if (NgxData_2b70a48 != 0) {
      if (a4 != 0 && a5 != nullptr) {
        v11 = NgxData_2b70a48;
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan\\core/core/nvngx_generic_api.h",
            471, "NVSDK_NGX_CreateFeature_Validate", "app id is %llu ",
            *(_QWORD*)NgxData_2b70a48);
        v12 = *(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD**))(
            v11 + 120LL * a3 + 32880);
        if (v12 != nullptr) {
          result = v12(a1, a2, a3, a4, a5);
          if ((result & 0xFFF00000) != 0xBAD00000) {
            v13 = result;
            v14 = (_QWORD*)NgxRoutine_420(32);
            v15 = *a5;
            *v14 = 0;
            v14[1] = 0;
            v19 = v14;
            v16 = v14;
            v14[2] = a2;
            v14[3] = 0;
            v14[3] = *v15;
            v14[1] = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 136LL))(a4);
            *v16 = 1;
            dltss_network_transformers_71640(
                (__int64*)(v11 + 24LL * a3 + 35152), &v19);
            v18 = v19 + 3;
            v17 = *((_DWORD*)v19 + 6);
            *a5 = v19 + 3;
            NgxRoutine_b4c00(
                "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                "nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
                517, "NGXStoreCallToCreateFeature",
                "stored create feature %s handle %d",
                NgxData_94ecf0[*((unsigned int*)v18 + 1)], v17);
            return v13;
          }
        }
        else {
          return 3134193675LL;
        }
      }
      else {
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan\\core/core/nvngx_generic_api.h",
            467, "NVSDK_NGX_CreateFeature_Validate",
            "error: invalid handle or parameters interface pointer", a1, a2);
        return 3134193669LL;
      }
    }
    else {
      return 3134193671LL;
    }
  }
  else {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan\\core/core/nvngx_generic_api.h",
                     461, "NVSDK_NGX_CreateFeature_Validate",
                     "error: required feature is not supported by NGX runtime, "
                     "please update display driver",
                     a1, a2);
    return 3134193676LL;
  }
  return result;
}

#pragma GCC visibility pop
