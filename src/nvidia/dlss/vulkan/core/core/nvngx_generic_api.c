#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4c00(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 isxdigit_plt(_QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64* dltss_network_transformers_71640(__int64* result, _QWORD*);
extern _UNKNOWN NgxData_937a38;
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 NVSDK_NGX_GetParameters(__int64 a1, _QWORD* a2);
__int64 NVSDK_NGX_DestroyParameters(__int64 a1, __int64 a2);
__int64 NVSDK_NGX_GetCapabilityParameters(__int64 a1, _QWORD* a2);
__int64 NGXStoreCallToReleaseFeature(__int64 a1, __int64* a2);
_QWORD* nvngx_generic_api_ae450(_QWORD* result, __int64 a2, __int64 a3);
__int64 nvngx_generic_api_ae460(int a1, unsigned __int8* a2);
__attribute__((swiftcall)) void
nvngx_generic_api_ae490(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 NGXValidateIdentifier(__int64 a1);

__int64 NVSDK_NGX_GetParameters(__int64 a1, _QWORD* a2)
{
  if (a1 == 0) {
    return 3134193671LL;
  }
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 32800);
    return 1;
  }
  else {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan/core/core/nvngx_generic_api.cpp",
                     1286, "NVSDK_NGX_GetParameters",
                     "error: please provide valid reference to a pointer to "
                     "parameter interface");
    return 3134193669LL;
  }
}

__int64 NVSDK_NGX_DestroyParameters(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a1 == 0) {
    return 3134193671LL;
  }
  v2 = *(_QWORD*)(a1 + 32800);
  if (a2 != v2 || v2 == 0) {
    if (a2 != 0) {
      NgxRoutine_430(a2, 8);
    }
    return 1;
  }
  else {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan/core/core/nvngx_generic_api.cpp",
                     1303, "NVSDK_NGX_DestroyParameters",
                     "error: destroying the global param map is not allowed");
    return 3134193669LL;
  }
}

__int64 NVSDK_NGX_GetCapabilityParameters(__int64 a1, _QWORD* a2)
{
  __int64 result;
  _QWORD* v4;

  result = 3134193671LL;
  if (a1 != 0) {
    v4 = *(_QWORD**)(a1 + 32808);
    if (v4 != nullptr) {
      if (a2 != nullptr) {
        *a2 = X8CALL_X0(_QWORD*,
                        (*(__attribute__((swiftcall)) void (**)(
                            PSEUDO_X8, _QWORD*))(*v4 + 136LL))((void*)v4, v4));
        return 1;
      }
      else {
        NgxRoutine_b4b90(
            "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
            "dlss/vulkan/core/core/nvngx_generic_api.cpp",
            1321, "NVSDK_NGX_GetCapabilityParameters",
            "error: please provide valid reference to a pointer to parameter "
            "interface");
        return 3134193669LL;
      }
    }
  }
  return result;
}

__int64 NGXStoreCallToReleaseFeature(__int64 a1, __int64* a2)
{
  _QWORD* v4;
  __int64 v5;
  _QWORD* v7;

  v4 = (_QWORD*)NgxRoutine_420(32);
  v5 = *a2;
  *v4 = 0;
  v4[1] = 0;
  v7 = v4;
  *(_DWORD*)v4 = 2;
  v4[2] = 0;
  v4[3] = v5;
  dltss_network_transformers_71640((__int64*)(a1 + 24LL * HIDWORD(v5) + 35152),
                                   &v7);
  return NgxRoutine_b4c00(
      "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
      "vulkan/core/core/nvngx_generic_api.cpp",
      1336, "NGXStoreCallToReleaseFeature",
      "Stored release feature %s handle %d",
      (const char*)&NgxData_937a38 +
          *((int*)&NgxData_937a38 + *((unsigned int*)v7 + 7)),
      *((_DWORD*)v7 + 6));
}

_QWORD* nvngx_generic_api_ae450(_QWORD* result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(a2 + 16) = a3;
  *result = a2;
  return result;
}

__int64 nvngx_generic_api_ae460(int a1, unsigned __int8* a2)
{
  int v2;
  int v3;

  v2 = 0;
  v3 = 0;
  if (a1 >= 19 && a2 != nullptr) {
    v2 = *a2;
    v3 = a2[1];
  }
  return v2 | (unsigned int)(v3 << 8);
}

__attribute__((swiftcall)) void

nvngx_generic_api_ae490(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  *(_QWORD*)(a3 + 24) = 0;
  *(_DWORD*)(a3 + 32) = 0;
  *(_BYTE*)(a3 + 36) = 0;
  if (a2 == 0) {
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0;
    goto LABEL_6;
  }
  *(_QWORD*)a3 = *(_QWORD*)a2;
  *(_DWORD*)(a3 + 8) = *(_DWORD*)(a2 + 8);
  if ((int)result < 19) {
  LABEL_6:
    *(_QWORD*)(a3 + 16) = 0;
    {
      result;
      return;
    }
  }
  *(_QWORD*)(a3 + 16) = *(_QWORD*)(a2 + 16);
  if ((_DWORD)result != 19) {
    *(_QWORD*)(a3 + 24) = *(_QWORD*)(a2 + 24);
    *(_DWORD*)(a3 + 32) = *(_DWORD*)(a2 + 32);
    *(_BYTE*)(a3 + 36) = *(_BYTE*)(a2 + 36);
  }
  {
    result;
    return;
  }
}

__int64 NGXValidateIdentifier(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  char v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  int v24;
  unsigned int v25;
  char v26;
  char* v27;
  unsigned int v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;

  if (*(_DWORD*)a1 != 1 || *(_DWORD*)(a1 + 16) != 0) {
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v4 = strlen_plt(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_77:
    NgxRoutine_27cb0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)NgxRoutine_420(v7);
    v33 = v5;
    v34 = (unsigned __int8*)v6;
    v32 = v7 | 1;
    goto LABEL_13;
  }
  LOBYTE(v32) = 2 * v4;
  v6 = (char*)&v32 + 1;
  if (v4 != 0) {
  LABEL_13:
    memmove_plt(v6, v3, v5);
  }
  v6[v5] = 0;
  v8 = (unsigned __int8)v32;
  v9 = v33;
  v10 = v32 & 1;
  v11 = (unsigned __int64)(unsigned __int8)v32 >> 1;
  v12 = v10 == 0;
  if (v10 != 0) {
    v13 = v33;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v32 >> 1;
  }
  if (v13 >= 2) {
    while (1) {
      if (v12) {
        v14 = (unsigned __int8*)&v32 + 1;
      }
      else {
        v14 = v34;
      }
      v15 = *v14;
      if (v15 > 0x5A) {
        if (v15 == 91) {
          if (v14[v13 - 1] != 93) {
            goto LABEL_51;
          }
        }
        else if (v15 != 123 || v14[v13 - 1] != 125) {
          goto LABEL_51;
        }
      }
      else if (v15 == 34) {
        if (v14[v13 - 1] != 34) {
          goto LABEL_51;
        }
      }
      else if (v15 != 40 || v14[v13 - 1] != 41) {
        goto LABEL_51;
      }
      v16 = v13 - 2;
      if (v12) {
        v17 = (char*)&v32 + 2;
      }
      else {
        v17 = (char*)(v34 + 1);
      }
      if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_77;
      }
      if (v16 >= 0x17) {
        if ((v16 | 7) == 0x17) {
          v19 = 26;
        }
        else {
          v19 = (v16 | 7) + 1;
        }
        v18 = (char*)NgxRoutine_420(v19);
        v30 = v16;
        v31 = v18;
        v29 = v19 | 1;
      }
      else {
        v18 = (char*)&v29 + 1;
        LOBYTE(v29) = 2 * v16;
        if (v13 == 2) {
          BYTE1(v29) = 0;
          if ((v32 & 1) != 0) {
            goto LABEL_50;
          }
          goto LABEL_19;
        }
      }
      memmove_plt(v18, v17, v16);
      v20 = v32;
      v18[v16] = 0;
      if ((v20 & 1) != 0) {
      LABEL_50:
        NgxRoutine_430(v34, v32 & 0xFFFFFFFFFFFFFFFELL);
      }
    LABEL_19:
      v9 = v30;
      v32 = v29;
      v33 = v30;
      v34 = (unsigned __int8*)v31;
      v8 = (unsigned __int8)v29;
      v13 = (unsigned __int8)v29 >> 1;
      v12 = (v29 & 1) == 0;
      if ((v29 & 1) != 0) {
        v13 = v30;
      }
      if (v13 <= 1) {
      LABEL_51:
        v10 = v8 & 1;
        v11 = v8 >> 1;
        break;
      }
    }
  }
  if (v10 != 0) {
    v21 = v9;
  }
  else {
    v21 = v11;
  }
  if (v21 != 0) {
    v22 = 1;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if (v10 != 0) {
      v27 = (char*)v34;
    }
    else {
      v27 = (char*)&v32 + 1;
    }
    do {
      if (v27[v23] != 45) {
        if ((unsigned int)isxdigit_plt((unsigned __int8)v27[v23]) == 0) {
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/vulkan/core/core/nvngx_generic_api.cpp",
              1434, "NGXValidateIdentifier",
              "Error: projectID [%s] contains invalid character [%c]",
              *(const char**)(a1 + 8), (unsigned __int8)v27[v23]);
          goto LABEL_74;
        }
        if ((unsigned int)++v24 >= 0x21) {
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/vulkan/core/core/nvngx_generic_api.cpp",
              1450, "NGXValidateIdentifier",
              "Error: projectID [%s] contains more than 32 digits",
              *(_QWORD*)(a1 + 8));
          goto LABEL_74;
        }
        if (v27[v23] == v26) {
          ++v25;
        }
        else {
          v25 = 0;
        }
        if (v25 >= 5) {
          NgxRoutine_b4b90(
              "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
              "dlss/vulkan/core/core/nvngx_generic_api.cpp",
              1455, "NGXValidateIdentifier",
              "Error: projectID [%s] contains more than 4 matching digits in a "
              "row",
              *(_QWORD*)(a1 + 8));
          goto LABEL_74;
        }
        v26 = v27[v23];
      }
      v23 = v22++;
    } while (v21 > v23);
    if (v24 != 32) {
      goto LABEL_70;
    }
    result = 1;
  }
  else {
  LABEL_70:
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan/core/core/nvngx_generic_api.cpp",
                     1461, "NGXValidateIdentifier",
                     "Error: projectID [%s] contains less than 32 digits",
                     *(_QWORD*)(a1 + 8));
  LABEL_74:
    result = 3134193669LL;
  }
  if (v10 != 0) {
    v28 = result;
    NgxRoutine_430(v34, v32 & 0xFFFFFFFFFFFFFFFELL);
    return v28;
  }
  return result;
}

#pragma GCC visibility pop
