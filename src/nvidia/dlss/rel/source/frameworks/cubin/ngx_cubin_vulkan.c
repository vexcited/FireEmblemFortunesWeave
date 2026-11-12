#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_a89c0(__int64, __int64*, __int64, _QWORD**);
_QWORD* nvidia_dlss_rel_source_frameworks_cubin_a7260(_QWORD*, __int64*);
__attribute__((swiftcall)) void UTF8StrToWStr(PSEUDO_X8, _BYTE*, void*);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_b4b90(__int64, __int64, __int64, const char*, ...);
__int64 NgxRoutine_ba400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_ba840(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_bac40(_QWORD, _QWORD);
__int64 NgxRoutine_e2c70(_QWORD);
__int64 NgxRoutine_e2ca0(_QWORD);
__int64 genericPostInit(__int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 ngx_cubin_generic_a40a0(__int64);
__int64 ngx_cubin_kernel_map_a7830(__int64, char);
__int64 ngx_cubin_vulkan_b8ba0_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("ngx_cubin_vulkan_b8ba0");
__int64 nvidia_dlss_a8d00(__int64*, __int64*);
__int64 strlen_plt(_QWORD);
__int64 vkAllocateMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkBindBufferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkBindImageMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCmdPipelineBarrier_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _DWORD, _QWORD);
__int64 vkCreateBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreateComputePipelines_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 vkCreateDescriptorSetLayout_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreateImageView_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreateImage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreatePipelineLayout_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreateSampler_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkCreateShaderModule_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 vkDestroyBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyImage_plt(_QWORD, _QWORD, _QWORD);
__int64 vkDestroyShaderModule_plt(_QWORD, _QWORD, _QWORD);
__int64 vkEnumerateDeviceExtensionProperties_plt(_QWORD, _QWORD, _QWORD,
                                                 _QWORD);
__int64 vkFreeMemory_plt(_QWORD, _QWORD, _QWORD);
__int64 vkGetBufferMemoryRequirements_plt(_QWORD, _QWORD, _QWORD);
__int64 vkGetDeviceProcAddr_plt(_QWORD, _QWORD);
__int64 vkGetImageMemoryRequirements_plt(_QWORD, _QWORD, _QWORD);
__int64 vkGetPhysicalDeviceImageFormatProperties2_plt(_QWORD, _QWORD, _QWORD);
__int64 vkGetPhysicalDeviceMemoryProperties_plt(_QWORD, _QWORD);
__int64 vkGetPhysicalDeviceProperties2_plt(_QWORD, _QWORD);
extern _DWORD NgxData_938040[25];
extern _DWORD NgxData_9380a4[3];
extern _DWORD NgxData_9380b0[3];
extern _DWORD NgxData_9380bc[7];
extern _UNKNOWN NgxData_2669fb4;
extern _UNKNOWN* NgxData_952228;
extern __int64 (*NgxData_94f068[])();
extern __int64 NgxData_9513c0;
extern int NgxData_266a59c;
extern unsigned int NgxData_937fdc[25];
void NgxRoutine_b4b90_alt1(__int64, __int64, __int64, __int64,
                           ...) __asm__("NgxRoutine_b4b90");
void NgxRoutine_b4c00(__int64 result, __int64, __int64, __int64, ...);
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 ngx_cubin_vulkan_b6d50(__int64 a1);
__int64 ngx_cubin_vulkan_b7160(__int64 a1, _QWORD* a2);
__int64 ngx_cubin_vulkan_b79d0(__int64 a1, __int64* a2);
__int64 ngx_cubin_vulkan_b7a30(__int64 a1, _DWORD* a2);
__int64 ngx_cubin_vulkan_b7a40(__int64 a1, int a2, int* a3);
__int64 ngx_cubin_vulkan_b7bd0(__int64 a1, int a2, _DWORD* a3);
__int64 CreateKernel(__int64 a1, __int64 a2, unsigned int a3, const char* a4,
                     int a5, __int64* a6, int a7, int a8, int a9, __int64 a10);
__int64 ngx_cubin_vulkan_b7e30(__int64 a1, __int64 a2);
__int64 ngx_cubin_vulkan_b7ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 ngx_cubin_vulkan_b7ef0(__int64 a1, unsigned int a2, __int64* a3,
                               __int64 a4, unsigned int a5);
__int64 ngx_cubin_vulkan_b8080(__int64 a1, __int64* a2, __int64* a3,
                               unsigned int a4);
__int64 ngx_cubin_vulkan_b81b0(__int64 a1, unsigned int a2, __int64* a3,
                               __int64 a4);
__int64 ngx_cubin_vulkan_b8330(__int64 a1, __int64* a2, __int64* a3);
__int64 ngx_cubin_vulkan_b8450(__int64 a1, unsigned int a2, __int64 a3,
                               __int64 a4);
__int64 ngx_cubin_vulkan_b8540(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ngx_cubin_vulkan_b85d0(__int64 a1, __int64* a2, __int64 a3,
                               unsigned int a4, unsigned int a5,
                               unsigned int a6);
__int64 ngx_cubin_vulkan_b8720(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4);
__int64 CreateTexture2DResourceSharedImpl(__int64 a1, unsigned int* a2,
                                          __int64* a3, char a4);
__int64 ngx_cubin_vulkan_b8ba0(__int64 a1, __int64* a2, __int64* a3);
__int64 ngx_cubin_vulkan_b8e40(__int64 a1, unsigned int* a2, __int64* a3);
__attribute__((swiftcall)) void
ngx_cubin_vulkan_b9220(PSEUDO_X8 x8_, __int64 result, unsigned __int64* a2);
__int64 ngx_cubin_vulkan_b9310(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 ngx_cubin_vulkan_b9420(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 GetResourceDeviceMemoryHandle(__int64 a1, __int64 a2, _QWORD* a3);
__int64 ngx_cubin_vulkan_b9640(__int64 a1, __int64* a2, __int64 a3);
__int64 ngx_cubin_vulkan_b97b0(__int64 a1, char* a2);

__int64 ngx_cubin_vulkan_b6d50(__int64 a1)
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
  v2 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkCreateCuModuleNVX");
  *(_QWORD*)(a1 + 880) = v2;
  if (v2 != 0) {
    v3 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkCreateCuFunctionNVX");
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
    v14 =
        vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkCreateCuFunctionNVX");
    *(_QWORD*)(a1 + 888) = v14;
    if (v14 != 0) {
    LABEL_4:
      v4 =
          vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkDestroyCuModuleNVX");
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
  v15 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkDestroyCuModuleNVX");
  *(_QWORD*)(a1 + 896) = v15;
  if (v15 != 0) {
  LABEL_5:
    v5 =
        vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkDestroyCuFunctionNVX");
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
  v16 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkDestroyCuFunctionNVX");
  *(_QWORD*)(a1 + 904) = v16;
  if (v16 != 0) {
  LABEL_6:
    v6 =
        vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkCmdCuLaunchKernelNVX");
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
  v17 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkCmdCuLaunchKernelNVX");
  *(_QWORD*)(a1 + 912) = v17;
  if (v17 != 0) {
  LABEL_7:
    v7 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                 "vkGetImageViewAddressNVX");
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
  v18 =
      vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkGetImageViewAddressNVX");
  *(_QWORD*)(a1 + 920) = v18;
  if (v18 != 0) {
  LABEL_8:
    v8 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                 "vkGetImageViewHandleNVX");
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
  v19 =
      vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840), "vkGetImageViewHandleNVX");
  *(_QWORD*)(a1 + 928) = v19;
  if (v19 != 0) {
  LABEL_9:
    v9 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                 "vkGetImageViewHandle64NVX");
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
    v21 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                  "vkCmdPushDescriptorSetKHR");
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
  v20 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                "vkGetImageViewHandle64NVX");
  *(_QWORD*)(a1 + 936) = v20;
  if (v20 == 0) {
    goto LABEL_21;
  }
LABEL_10:
  v10 = vkGetDeviceProcAddr_plt(*(_QWORD*)(a1 + 840),
                                "vkCmdPushDescriptorSetKHR");
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
  v12 = vkGetDeviceProcAddr_plt(v11, "vkGetBufferDeviceAddress");
  *(_QWORD*)(a1 + 864) = v12;
  if (v12 != 0) {
    return 0;
  }
  v22 = *(_QWORD*)(a1 + 840);
  *(_DWORD*)(a1 + 952) = 1;
  v23 = vkGetDeviceProcAddr_plt(v22, "vkGetBufferDeviceAddressKHR");
  *(_QWORD*)(a1 + 864) = v23;
  if (v23 != 0) {
    return 0;
  }
  v24 = *(_QWORD*)(a1 + 840);
  *(_DWORD*)(a1 + 952) = 2;
  v25 = vkGetDeviceProcAddr_plt(v24, "vkGetBufferDeviceAddressEXT");
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

__int64 ngx_cubin_vulkan_b7160(__int64 a1, _QWORD* a2)
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

  ngx_cubin_generic_a40a0(a1);
  *(_QWORD*)(a1 + 856) = *a2;
  *(_QWORD*)(a1 + 840) = a2[2];
  *(_QWORD*)(a1 + 848) = a2[1];
  if ((unsigned int)ngx_cubin_vulkan_b6d50(a1) != 0) {
    return 0xFFFFFFFFLL;
  }
  v5 = *(_QWORD*)(a1 + 848);
  v86[0] = 0;
  vkEnumerateDeviceExtensionProperties_plt(v5, 0, v86, 0);
  v46 = NgxRoutine_420(260LL * v86[0]);
  vkEnumerateDeviceExtensionProperties_plt(*(_QWORD*)(a1 + 848), 0, v86, v46);
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
      v9 = strlen_plt(v8);
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
      memmove_plt(v11, v8, v10);
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
  v16 = strlen_plt("VK_NVX_binary_import");
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
    memcpy_plt(v18, "VK_NVX_binary_import", v17);
  }
  v18[v17] = 0;
  v72 = (__int64)&v47;
  v21 = false;
  if (*(_DWORD*)(NgxRoutine_ba840(&v81, &v47, NgxData_952228, &v72, v71) +
                 40) <= 1u) {
    goto LABEL_38;
  }
  v22 = strlen_plt("VK_NVX_image_view_handle");
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
    memcpy_plt(v24, "VK_NVX_image_view_handle", v23);
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
  vkCreateSampler_plt(v35, &v72, 0, a1 + 960);
  v36 = *(_QWORD*)(a1 + 840);
  *(_QWORD*)((char*)&v74 + 4) = 0;
  vkCreateSampler_plt(v36, &v72, 0, a1 + 976);
  vkGetPhysicalDeviceMemoryProperties_plt(*(_QWORD*)(a1 + 848), a1 + 1104);
  v37 = *(_QWORD*)(a1 + 840);
  memset(&v71[2], 0, 32);
  v71[0] = 0x300000000LL;
  v71[1] = 0x2000000001LL;
  v70[0] = 32;
  v70[1] = 0;
  v70[2] = 0x100000001LL;
  v70[3] = v71;
  if ((unsigned int)vkCreateDescriptorSetLayout_plt(v37, v70, 0, a1 + 1656) ==
      0) {
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
    if ((unsigned int)vkCreatePipelineLayout_plt(v38, v61, 0, a1 + 1640) == 0) {
      v59[1] = 0;
      v59[0] = 16;
      v59[2] = 0;
      v59[3] = (unsigned int)NgxData_266a59c;
      v39 = *(_QWORD*)(a1 + 840);
      v59[4] = &NgxData_2669fb4;
      if ((unsigned int)vkCreateShaderModule_plt(v39, v59, 0, &v60) == 0) {
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
        if ((unsigned int)vkCreateComputePipelines_plt(v40, 0, 1, &v47, 0,
                                                       a1 + 1664) == 0) {
          vkDestroyShaderModule_plt(*(_QWORD*)(a1 + 840), v60, 0);
          *(_WORD*)(a1 + 816) = 257;
          *(_QWORD*)(a1 + 808) = 0x300000170LL;
          ngx_cubin_kernel_map_a7830(a1 + 120, 1);
          genericPostInit(a1);
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

__int64 ngx_cubin_vulkan_b79d0(__int64 a1, __int64* a2)
{
  __int64 v3;

  v3 = NgxRoutine_420(64);
  *(_DWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 56) = 0;
  *(_DWORD*)(v3 + 48) = 1065353216;
  *a2 = v3;
  *(_QWORD*)v3 = NgxData_94f068;
  return 0;
}

__int64 ngx_cubin_vulkan_b7a30(__int64 a1, _DWORD* a2)
{
  *a2 = 2;
  return 0;
}

__int64 ngx_cubin_vulkan_b7a40(__int64 a1, int a2, int* a3)
{
  __int64 result;
  int v4;

  result = 0;
  v4 = 10;
  switch (a2) {
  case 9:
    goto LABEL_6;
  case 10:
    *a3 = 26;
    return 0;
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 18:
  case 19:
  case 20:
  case 21:
  case 22:
  case 23:
  case 24:
  case 25:
  case 26:
  case 27:
  case 28:
  case 29:
  case 30:
  case 31:
  case 32:
  case 33:
  case 34:
  case 35:
  case 36:
  case 39:
  case 40:
  case 41:
  case 42:
  case 43:
  case 45:
  case 46:
  case 47:
  case 48:
  case 49:
  case 50:
  case 51:
  case 52:
  case 53:
  case 54:
  case 55:
  case 56:
  case 57:
  case 58:
  case 59:
  case 60:
  case 61:
  case 62:
  case 63:
  case 65:
  case 66:
  case 67:
  case 68:
  case 69:
  case 70:
  case 71:
  case 72:
  case 73:
  case 75:
  case 77:
  case 78:
  case 79:
  case 80:
  case 81:
  case 84:
  case 85:
  case 86:
  case 87:
  case 88:
  case 89:
  case 90:
  case 93:
  case 94:
  case 95:
  case 96:
  case 99:
  case 101:
  case 102:
  case 104:
  case 105:
  case 106:
  case 107:
  case 108:
  case 110:
  case 111:
  case 112:
  case 113:
  case 114:
  case 115:
  case 116:
  case 117:
  case 118:
  case 119:
  case 120:
  case 121:
    goto LABEL_5;
  case 16:
    *a3 = 21;
    return 0;
  case 17:
    *a3 = 27;
    return 0;
  case 37:
    *a3 = 15;
    return 0;
  case 38:
    *a3 = 25;
    return 0;
  case 44:
    *a3 = 16;
    return 0;
  case 64:
    *a3 = 19;
    return 0;
  case 74:
    *a3 = 7;
    return 0;
  case 76:
    *a3 = 6;
    return 0;
  case 82:
    *a3 = 22;
    return 0;
  case 83:
    *a3 = 5;
    return 0;
  case 91:
    *a3 = 17;
    return 0;
  case 92:
    *a3 = 18;
    return 0;
  case 97:
    *a3 = 2;
    return 0;
  case 98:
    *a3 = 20;
    return 0;
  case 100:
    *a3 = 9;
    return 0;
  case 103:
    *a3 = 8;
    return 0;
  case 109:
    *a3 = 1;
    return 0;
  case 122:
    *a3 = 14;
    return 0;
  default:
    if (a2 == 1000464000) {
      *a3 = 23;
      return 0;
    }
    else {
    LABEL_5:
      result = 0xFFFFFFFFLL;
      v4 = 0;
    LABEL_6:
      *a3 = v4;
    }
    return result;
  }
}

__int64 ngx_cubin_vulkan_b7bd0(__int64 a1, int a2, _DWORD* a3)
{
  int v3;
  __int64 result;

  v3 = a2 - 1;
  if ((unsigned int)(a2 - 1) > 0x18) {
    *a3 = 0;
    return 0xFFFFFFFFLL;
  }
  else {
    result = NgxData_937fdc[v3];
    *a3 = NgxData_938040[v3];
  }
  return result;
}

__int64 CreateKernel(__int64 a1, __int64 a2, unsigned int a3, const char* a4,
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
  v17 = nvidia_dlss_rel_source_frameworks_cubin_a7260((_QWORD*)(a1 + 8), &v31);
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
        nvidia_dlss_a89c0(a1 + 8, &v31, (__int64)NgxData_952228, &v32)[3] = v20;
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

__int64 ngx_cubin_vulkan_b7e30(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;

  v8 = a2;
  if (a2 == 0) {
    return 0;
  }
  v3 = nvidia_dlss_rel_source_frameworks_cubin_a7260((_QWORD*)(a1 + 8), &v8);
  if (v3 != nullptr) {
    v4 = v3[3];
    v5 = v3;
    (*(void (**)(_QWORD, _QWORD, _QWORD))(a1 + 904))(*(_QWORD*)(a1 + 840),
                                                     *(_QWORD*)(v4 + 16), 0);
    (*(void (**)(_QWORD, _QWORD, _QWORD))(a1 + 896))(*(_QWORD*)(a1 + 840),
                                                     *(_QWORD*)(v4 + 8), 0);
    v6 = v5[3];
    if (v6 != 0) {
      NgxRoutine_430(v6, 4);
    }
    nvidia_dlss_a8d00((__int64*)(a1 + 8), v5);
    return 0;
  }
  return 4294967162LL;
}

__int64 ngx_cubin_vulkan_b7ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD*)(a1 + 1632) = a4;
  return 0;
}

__int64 ngx_cubin_vulkan_b7ef0(__int64 a1, unsigned int a2, __int64* a3,
                               __int64 a4, unsigned int a5)
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

__int64 ngx_cubin_vulkan_b8080(__int64 a1, __int64* a2, __int64* a3,
                               unsigned int a4)
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

__int64 ngx_cubin_vulkan_b81b0(__int64 a1, unsigned int a2, __int64* a3,
                               __int64 a4)
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

__int64 ngx_cubin_vulkan_b8330(__int64 a1, __int64* a2, __int64* a3)
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

__int64 ngx_cubin_vulkan_b8450(__int64 a1, unsigned int a2, __int64 a3,
                               __int64 a4)
{
  unsigned int* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  bool v12;
  _BYTE* v13;
  char v14;
  _QWORD v15[3];

  v4 = *(unsigned int**)(a1 + 280);
  if (v4 == nullptr) {
    return 4294967291LL;
  }
  if (a2 < *v4) {
    if (a3 == 0) {
      v8 = 0;
      goto LABEL_9;
    }
    if (*(_DWORD*)(a3 + 48) == 1) {
      v5 = a2;
      v6 = a4;
      v15[0] = 1000244001;
      v15[1] = 0;
      v15[2] = *(_QWORD*)a3;
      v7 = (*(__int64 (**)(_QWORD, _QWORD*))(a1 + 864))(*(_QWORD*)(a1 + 840),
                                                        v15);
      a4 = v6;
      a2 = v5;
      v8 = v7;
    LABEL_9:
      result = 0;
      v10 = *(_QWORD*)(a4 + 16) + 40LL * a2;
      v11 = *(_QWORD*)(v10 + 8);
      *(_QWORD*)(v10 + 8) = v8;
      v12 = v11 == v8;
      *(_DWORD*)(v10 + 4) = 1;
      v13 = *(_BYTE**)(v10 + 32);
      v14 = !v12;
      *(_BYTE*)v10 = v14;
      *v13 |= v14;
      return result;
    }
  }
  return 4294967291LL;
}

__int64 ngx_cubin_vulkan_b8540(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD v6[5];

  if (a2 != 0) {
    if (*(_DWORD*)(a2 + 48) == 1) {
      v6[3] = v3;
      v6[4] = v4;
      v6[0] = 1000244001;
      v6[1] = 0;
      v6[2] = *(_QWORD*)a2;
      *a3 = (*(__int64 (**)(_QWORD, _QWORD*))(a1 + 864))(*(_QWORD*)(a1 + 840),
                                                         v6);
      return 0;
    }
    else {
      return 4294967291LL;
    }
  }
  else {
    *a3 = 0;
    return 0;
  }
}

__int64 ngx_cubin_vulkan_b85d0(__int64 a1, __int64* a2, __int64 a3,
                               unsigned int a4, unsigned int a5,
                               unsigned int a6)
{
  __int64 result;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  void (*v21)(__int64, _QWORD*);
  _QWORD v22[2];
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD v32[5];
  __int64 v33;

  result = 4294967291LL;
  if (a2 != nullptr && *(_QWORD*)(a1 + 280) != 0) {
    if ((*(unsigned int (**)(__int64*))(*a2 + 8))(a2) ==
        **(_DWORD**)(a1 + 280)) {
      (*(void (**)(__int64*))*a2)(a2);
      v13 = (*(__int64 (**)(__int64*))(*a2 + 24))(a2);
      v33 = v13;
      if (v13 != 0) {
        v14 = *a2;
        v32[0] = 1;
        v15 = (*(__int64 (**)(__int64*))(v14 + 16))(a2);
        v16 = *(_QWORD*)(a1 + 280);
        v26 = 0;
        v27 = 0;
        v22[0] = 0;
        v24 = 0;
        v25 = 0;
        v17 = *(_DWORD*)(v16 + 24);
        v18 = *(_DWORD*)(v16 + 28);
        v32[1] = v15;
        v32[2] = 2;
        LODWORD(v22[0]) = 1000029002;
        v19 = *(_QWORD*)(v16 + 40);
        v22[1] = 0;
        v23 = 0;
        v32[3] = &v33;
        v32[4] = 0;
        v20 = *(_QWORD*)(v16 + 16);
        LODWORD(v16) = *(_DWORD*)(v16 + 32);
        v24 = __PAIR64__(a5, a4);
        v28 = 0;
        v29 = 0;
        LODWORD(v27) = v19;
        v21 = *(void (**)(__int64, _QWORD*))(a1 + 912);
        v26 = __PAIR64__(v16, v18);
        v23 = v20;
        v25 = __PAIR64__(v17, a6);
        v30 = 1;
        v31 = v32;
        v21(a3, v22);
      }
      return 0;
    }
    else {
      return 4294967291LL;
    }
  }
  return result;
}

__int64 ngx_cubin_vulkan_b8720(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 (*v6)(__int64, __int64, _QWORD*);
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v12;
  _QWORD v13[2];
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v6 = *(__int64 (**)(__int64, __int64, _QWORD*))(a1 + 920);
  if (v6 == nullptr) {
    return 4294967293LL;
  }
  if (*((_DWORD*)a2 + 12) != 0) {
    return 4294967291LL;
  }
  v16 = v4;
  v17 = v5;
  v8 = *(_QWORD*)(a1 + 840);
  v9 = *a2;
  v13[0] = 1000030001;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  result = v6(v8, v9, v13);
  if ((_DWORD)result != 0) {
    return 0xFFFFFFFFLL;
  }
  v12 = v15;
  *a3 = v14;
  *a4 = v12;
  return result;
}

__int64 CreateTexture2DResourceSharedImpl(__int64 a1, unsigned int* a2,
                                          __int64* a3, char a4)
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
    if ((unsigned int)vkGetPhysicalDeviceImageFormatProperties2_plt(v26, &v46,
                                                                    v32) != 0 ||
        (v44 & 2) == 0) {
      NgxRoutine_b4b90(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          902, (__int64)"CreateTexture2DResourceSharedImpl",
          "Error: Vulkan image format is not exportable!");
      return 0xFFFFFFFFLL;
    }
    v55 = v53;
    if ((unsigned int)vkCreateImage_plt(*(_QWORD*)(a1 + 840), &v54, 0, &v64) !=
        0) {
      return 0xFFFFFFFFLL;
    }
  }
  else if ((unsigned int)vkCreateImage_plt(*(_QWORD*)(a1 + 840), &v54, 0,
                                           &v64) != 0) {
    return 0xFFFFFFFFLL;
  }
  v16 = *(_QWORD*)(a1 + 840);
  v43 = 0;
  v44 = 0;
  v42 = 0;
  vkGetImageMemoryRequirements_plt(v16, v64, &v42);
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
  v21 = vkAllocateMemory_plt(*(_QWORD*)(a1 + 840), &v46, 0, &v41);
  v22 = *(_QWORD*)(a1 + 840);
  v23 = v64;
  if (v21 != 0) {
    goto LABEL_25;
  }
  if ((unsigned int)vkBindImageMemory_plt(v22, v64, v41, 0) == 0) {
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
    if ((unsigned int)vkCreateImageView_plt(v25, v32, 0, &v65) == 0) {
      ngx_cubin_vulkan_b8ba0_alt1(a1 + 1048, &v64, &v41);
      v28 = NgxRoutine_420(56);
      memset_plt(v28, 0, 56);
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
  vkFreeMemory_plt(*(_QWORD*)(a1 + 840), v41, 0);
LABEL_24:
  v22 = *(_QWORD*)(a1 + 840);
  v23 = v64;
LABEL_25:
  vkDestroyImage_plt(v22, v23, 0);
  return 0xFFFFFFFFLL;
}

__int64 ngx_cubin_vulkan_b8ba0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 == 0) {
    NgxRoutine_bac40(a1, *(unsigned int*)(a1 + 36));
    v3 = *(_QWORD*)(a1 + 8);
    if (v3 == 0) {
      return 0;
    }
  }
  v7 = *a2;
  v8 = 0x2001326193LL *
       ((16777619 *
         ((16777619 *
           ((16777619 *
             ((16777619 *
               ((16777619 * ((16777619 * ((16777619LL * ((unsigned __int8)*a2 ^
                                                         0x811C9DC5)) ^
                                          (unsigned __int8)BYTE1(*a2))) ^
                             (unsigned __int8)BYTE2(*a2))) ^
                BYTE3(*a2))) ^
              (unsigned __int8)BYTE4(*a2))) ^
            (unsigned __int8)((unsigned __int16)WORD2(*a2) >> 8))) ^
          (unsigned __int8)BYTE6(*a2))) ^
        HIBYTE(*a2));
  v9 = 33 * ((9 * (v8 ^ (v8 >> 7))) ^ ((9 * (v8 ^ (v8 >> 7))) >> 17));
  v10 = *(_DWORD*)(a1 + 32);
  v11 = 1LL << v10;
  v12 = v9 & ((1LL << v10) - 1);
  v13 = *(_QWORD**)(v3 + 8 * v12);
  if (v13 == nullptr) {
    if ((float)(*(float*)(a1 + 48) * (float)(unsigned __int64)v11) <
        (float)(unsigned __int64)(*(_QWORD*)(a1 + 40) + 1LL)) {
      NgxRoutine_bac40(a1, (unsigned int)(v10 + 1));
      v12 = v9 & ~(-1LL << *(_DWORD*)(a1 + 32));
    }
  LABEL_11:
    v16 = (__int64*)NgxRoutine_420(40);
    v17 = *a3;
    v18 = *(_QWORD*)(a1 + 16);
    *v16 = *a2;
    v16[1] = v17;
    v16[4] = v18;
    v16[2] = 0;
    v16[3] = a1 + 18;
    *((_DWORD*)v16 + 4) = v9 | 0x80000000;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12) = v16;
    v19 = *(_QWORD*)(a1 + 16);
    if (v19 == a1 + 25) {
      *(_QWORD*)(a1 + 24) = v16;
    }
    else {
      *(_QWORD*)(v19 + 24) = v16;
    }
    *(_QWORD*)(a1 + 16) = v16;
    goto LABEL_19;
  }
  if (v7 == *v13) {
    return 0;
  }
  v14 = *(_QWORD*)(v3 + 8 * v12);
  while ((*(_DWORD*)(v14 + 16) & 0x80000000) == 0) {
    v14 = *(_QWORD*)(v14 + 32);
    if (v7 == *(_QWORD*)v14) {
      return 0;
    }
  }
  if ((float)(*(float*)(a1 + 48) * (float)(unsigned __int64)v11) <
      (float)(unsigned __int64)(*(_QWORD*)(a1 + 40) + 1LL)) {
    NgxRoutine_bac40(a1, (unsigned int)(v10 + 1));
    v12 = v9 & ~(-1LL << *(_DWORD*)(a1 + 32));
    v13 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8 * v12);
    if (v13 == nullptr) {
      goto LABEL_11;
    }
  }
  v20 = (_QWORD*)NgxRoutine_420(40);
  v21 = *a2;
  v22 = *a3;
  v20[2] = 0;
  v20[3] = 0;
  *v20 = v21;
  v20[1] = v22;
  v20[3] = v13[3];
  v20[4] = v13;
  *((_DWORD*)v20 + 4) = v9 & 0x7FFFFFFF;
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12) = v20;
  if (v13 == *(_QWORD**)(a1 + 16)) {
    *(_QWORD*)(a1 + 16) = v20;
    v13[3] = v20;
  }
  else {
    v23 = v13[3];
    v13[3] = v20;
    *(_QWORD*)(v23 + 32) = v20;
  }
LABEL_19:
  ++*(_QWORD*)(a1 + 40);
  return 1;
}

__int64 ngx_cubin_vulkan_b8e40(__int64 a1, unsigned int* a2, __int64* a3)
{
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  int v20;
  int* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  _QWORD v29[2];
  __int64 v30;
  _QWORD v31[4];
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v31[0] = 12;
  v31[1] = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v6 = *a2;
  v31[2] = 0;
  v31[3] = v6;
  v7 = a2[6];
  if (v7 == 3) {
    v11 = 2;
    v8 = -15;
    v10 = nullptr;
    v9 = 0;
  LABEL_14:
    LODWORD(v32) = v11;
    if ((unsigned int)vkCreateBuffer_plt(*(_QWORD*)(a1 + 840), v31, 0, &v35) ==
        0) {
      goto LABEL_17;
    }
    return 0xFFFFFFFFLL;
  }
  if (v7 == 2) {
    v11 = 1;
    v10 = nullptr;
    v9 = 0;
    v8 = -7;
    goto LABEL_14;
  }
  if (v7 != 1) {
    v10 = nullptr;
    v9 = 0;
    v8 = -1;
    if ((unsigned int)vkCreateBuffer_plt(*(_QWORD*)(a1 + 840), v31, 0, &v35) ==
        0) {
      goto LABEL_17;
    }
    return 0xFFFFFFFFLL;
  }
  v8 = -2;
  LODWORD(v32) = 131122;
  if (*(_DWORD*)(a1 + 952) == 2) {
    v9 = 0;
  }
  else {
    v9 = 2;
  }
  if (*(_DWORD*)(a1 + 952) == 2) {
    v10 = nullptr;
  }
  else {
    v10 = &v24;
  }
  if ((unsigned int)vkCreateBuffer_plt(*(_QWORD*)(a1 + 840), v31, 0, &v35) !=
      0) {
    return 0xFFFFFFFFLL;
  }
LABEL_17:
  v12 = *(_QWORD*)(a1 + 840);
  v29[1] = 0;
  v30 = 0;
  v29[0] = 0;
  vkGetBufferMemoryRequirements_plt(v12, v35, v29);
  v13 = *(unsigned int*)(a1 + 1104);
  if ((_DWORD)v13 == 0) {
    goto LABEL_25;
  }
  v14 = (_DWORD*)(a1 + 1108);
  v15 = 0;
  while ((((unsigned int)v30 >> v15) & 1) == 0 || (*v14 | v8) != 0xFFFFFFFF) {
    ++v15;
    v14 += 2;
    if (v13 == v15) {
      goto LABEL_25;
    }
  }
  v16 = *(_QWORD*)(a1 + 840);
  v25 = 0;
  v26 = v9;
  v27 = 0;
  v23 = v15;
  v24 = 1000060000;
  v20 = 5;
  v21 = v10;
  v22 = v29[0];
  if ((unsigned int)vkAllocateMemory_plt(v16, &v20, 0, &v28) != 0) {
    goto LABEL_25;
  }
  if ((unsigned int)vkBindBufferMemory_plt(*(_QWORD*)(a1 + 840), v35, v28, 0) !=
      0) {
    vkFreeMemory_plt(*(_QWORD*)(a1 + 840), v28, 0);
  LABEL_25:
    vkDestroyBuffer_plt(*(_QWORD*)(a1 + 840), v35, 0);
    return 0xFFFFFFFFLL;
  }
  NgxRoutine_e2c70(a1 + 984);
  ngx_cubin_vulkan_b8ba0(a1 + 992, &v35, &v28);
  NgxRoutine_e2ca0(a1 + 984);
  v18 = NgxRoutine_420(56);
  memset_plt(v18, 0, 56);
  v19 = v35;
  *a3 = v18;
  *(_DWORD*)(v18 + 48) = 1;
  *(_BYTE*)(v18 + 52) = 1;
  *(_QWORD*)v18 = v19;
  *(_DWORD*)(v18 + 8) = *a2;
  return 0;
}

__attribute__((swiftcall)) void

ngx_cubin_vulkan_b9220(PSEUDO_X8 x8_, __int64 result, unsigned __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0) {
    v4 = *a2;
    v5 =
        0x2001326193LL *
        ((16777619 *
          ((16777619 *
            ((16777619 *
              ((16777619 *
                ((16777619 * ((16777619 * ((16777619LL * ((unsigned __int8)*a2 ^
                                                          0x811C9DC5)) ^
                                           (unsigned __int8)BYTE1(*a2))) ^
                              (unsigned __int8)BYTE2(*a2))) ^
                 BYTE3(*a2))) ^
               (unsigned __int8)BYTE4(*a2))) ^
             (unsigned __int8)((unsigned __int16)WORD2(*a2) >> 8))) ^
           (unsigned __int8)BYTE6(*a2))) ^
         HIBYTE(*a2));
    v6 = *(_QWORD*)(v3 + 8 * ((33 * ((9 * (v5 ^ (v5 >> 7))) ^
                                     ((9 * (v5 ^ (v5 >> 7))) >> 17))) &
                              ~(-1LL << *(_DWORD*)(result + 32))));
    if (v6 != 0) {
      if (*(_QWORD*)v6 == v4) {
      LABEL_6:
        *a3 = v6;
        {
          result;
          return;
        }
      }
      while ((*(_DWORD*)(v6 + 16) & 0x80000000) == 0) {
        v6 = *(_QWORD*)(v6 + 32);
        if (*(_QWORD*)v6 == v4) {
          goto LABEL_6;
        }
      }
    }
  }
  *a3 = result + 25;
  {
    result;
    return;
  }
}

__int64 ngx_cubin_vulkan_b9310(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  if (a4 != 0) {
    return 4294967192LL;
  }
  if (a3 == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(a3 + 48);
  if (v5 == 0) {
    v8 = 45;
    v9 = 0;
    v10 = 0x6000000060LL;
    v11 = 0x100000001LL;
    v12 = -1;
    v7 = *(_QWORD*)(a3 + 16);
    v13 = *(_QWORD*)(a3 + 8);
    v14 = v7;
    v15 = *(_QWORD*)(a3 + 24);
    v16 = *(_DWORD*)(a3 + 32);
    vkCmdPipelineBarrier_plt(a2, 0x10000, 0x10000, 0, 0, 0, 0, 0, 1, &v8);
    return 0;
  }
  if (v5 == 1) {
    v6 = *(_QWORD*)a3;
    v8 = 44;
    v9 = 0;
    v10 = 0x6000000060LL;
    v13 = 0;
    v14 = -1;
    v11 = -1;
    v12 = v6;
    vkCmdPipelineBarrier_plt(a2, 0x10000, 0x10000, 0, 0, 0, 1, &v8, 0, 0);
    return 0;
  }
  return 4294967291LL;
}

__int64 ngx_cubin_vulkan_b9420(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;

  v5 = *(_QWORD*)(a1 + 96);
  v3 = a1 + 96;
  v4 = v5;
  if (v5 != 0) {
    v6 = v3;
    do {
      v7 = *(_QWORD*)(v4 + 32);
      v8 = v7 >= a3;
      if (v7 >= a3) {
        v9 = 0;
      }
      else {
        v9 = 8;
      }
      if (v8) {
        v6 = v4;
      }
      v4 = *(_QWORD*)(v4 + v9);
    } while (v4 != 0);
    if (v6 != v3 && a3 >= *(_QWORD*)(v6 + 32) && *(_DWORD*)(v6 + 96) != -1) {
      return 0;
    }
  }
  v12 = 45;
  v13 = 0;
  v14 = 0x6000000060LL;
  v15 = 0x100000000LL;
  v16 = -1;
  v11 = *(_QWORD*)(a3 + 16);
  v17 = *(_QWORD*)(a3 + 8);
  v18 = v11;
  v19 = *(_QWORD*)(a3 + 24);
  v20 = *(_DWORD*)(a3 + 32);
  vkCmdPipelineBarrier_plt(a2, 0x10000, 0x10000, 0, 0, 0, 0, 0, 1, &v12);
  return 0;
}

__int64 GetResourceDeviceMemoryHandle(__int64 a1, __int64 a2, _QWORD* a3)
{
  int v3;
  const void** v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a2 == 0) {
    NgxRoutine_b4b90_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        1371, (__int64)"GetResourceDeviceMemoryHandle",
        (__int64)"error: InResource is NULL!");
    return 4294967291LL;
  }
  v3 = *(_DWORD*)(a2 + 48);
  if (v3 != 0) {
    NgxRoutine_b4b90_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        1401, (__int64)"GetResourceDeviceMemoryHandle",
        (__int64)"error: Unsupported Resource Type: %d", v3);
    return 4294967291LL;
  }
  v5 = (const void**)(a2 + 8);
  if (*(_QWORD*)(a2 + 8) != 0) {
    ngx_cubin_vulkan_b9220((void*)(&v10), a1 + 1048,
                           (unsigned __int64*)(a2 + 8));
    v8 = v10;
    v9 = a1 + 1073;
    if (v10 == v9) {
      NgxRoutine_b4b90_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
          1392, (__int64)"GetResourceDeviceMemoryHandle",
          (__int64)"error: image (%p) not found in m_imageMemoryMap!", *v5);
    }
    else {
      *a3 = *(_QWORD*)(v10 + 8);
    }
    if (v8 == v9) {
      return 0xFFFFFFFFLL;
    }
    else {
      return 0;
    }
  }
  else {
    NgxRoutine_b4b90_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
        1384, (__int64)"GetResourceDeviceMemoryHandle",
        (__int64)"error: VkImage handle in VK resource $p is NULL", a2);
    return 0xFFFFFFFFLL;
  }
}

__int64 ngx_cubin_vulkan_b9640(__int64 a1, __int64* a2, __int64 a3)
{
  int v3;
  int v4;
  __int64 result;
  unsigned int (*v6)(__int64, _QWORD*);
  __int64 v8;
  __int64 v9;
  bool v10;
  char v11;
  _QWORD v12[2];
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (a2 == nullptr) {
    return 4294967291LL;
  }
  *(_QWORD*)(a3 + 40) = 0;
  *(_DWORD*)(a3 + 48) = 0;
  *(_DWORD*)(a3 + 12) = 0;
  *(_BYTE*)(a3 + 52) = 0;
  v3 = *((_DWORD*)a2 + 12);
  if (v3 != 0) {
    if (v3 == 1) {
      *(_DWORD*)a3 = *((_DWORD*)a2 + 2);
      *(_DWORD*)(a3 + 4) = 1;
      if (*((_BYTE*)a2 + 52) != 0) {
        v4 = 6;
      }
      else {
        v4 = 2;
      }
      *(_DWORD*)(a3 + 48) = v4;
      v12[0] = 1000244001;
      v12[1] = 0;
      v13 = *a2;
      *(_QWORD*)(a3 + 40) = (*(__int64 (**)(_QWORD, _QWORD*))(a1 + 864))(
          *(_QWORD*)(a1 + 840), v12);
      return 0;
    }
    return 0;
  }
  *(_DWORD*)(a3 + 48) = 1;
  *(_DWORD*)a3 = *((_DWORD*)a2 + 10);
  *(_DWORD*)(a3 + 4) = *((_DWORD*)a2 + 11);
  *(_DWORD*)(a3 + 8) = *((_DWORD*)a2 + 9);
  *(_DWORD*)(a3 + 16) = *((_DWORD*)a2 + 6);
  if (*((_BYTE*)a2 + 52) == 1) {
    *(_DWORD*)(a3 + 48) = 5;
  }
  v6 = *(unsigned int (**)(__int64, _QWORD*))(a1 + 928);
  if (v6 == nullptr) {
    return 0;
  }
  v12[1] = 0;
  v12[0] = 1000030000;
  v13 = *a2;
  v14 = 0;
  v8 = *(_QWORD*)(a1 + 960);
  v9 = *(_QWORD*)(a1 + 840);
  v15 = v8;
  LODWORD(v14) = 2;
  v10 = v6(v9, v12) == 0;
  result = 0;
  v11 = !v10;
  *(_BYTE*)(a3 + 52) = v11;
  return result;
}

__int64 ngx_cubin_vulkan_b97b0(__int64 a1, char* a2)
{
  __int64 v2;
  char* v4;
  __int64 v6[3];
  struct {
    int v7;
    char gap28_[4];
    _QWORD* v8;
  } v7_;
  char v9[804];
  _QWORD v10[8];

  if (*(_QWORD*)(a1 + 840) == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(_QWORD*)(a1 + 848);
  if (v2 == 0) {
    return 0xFFFFFFFFLL;
  }
  v10[0] = 1000071004;
  memset(&v10[1], 0, 56);
  memset_plt(&v7_.v7, 0, 840);
  v7_.v7 = 1000059001;
  v7_.v8 = v10;
  vkGetPhysicalDeviceProperties2_plt(v2, &v7_.v7);
  UTF8StrToWStr((void*)(v6), v9, nullptr);
  if ((*a2 & 1) != 0) {
    NgxRoutine_430(*((_QWORD*)a2 + 2),
                   (4LL * *(_QWORD*)a2) & 0xFFFFFFFFFFFFFFF8LL);
  }
  qmemcpy(a2, v6, 24);
  if ((*a2 & 1) != 0) {
    v4 = *((char**)a2 + 2);
  }
  else {
    v4 = a2 + 4;
  }
  NgxRoutine_b4c00(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/frameworks/cubin/ngx_cubin_vulkan.cpp",
      1468, (__int64)"GetAdapterDescription",
      (__int64)"  Vulkan Adapter Description: %S", v4);
  return 0;
}

#pragma GCC visibility pop
