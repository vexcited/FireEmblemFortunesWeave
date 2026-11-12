#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nvidia_dlss_rel_source_39180(_QWORD*);
_QWORD* nvidia_dlss_rel_source_39900(_QWORD*, _QWORD*);
__int64 NgxRoutine_27b20(_QWORD, _QWORD);
__int64 NgxRoutine_33430(void);
__int64 NgxRoutine_3a180(_QWORD, _QWORD);
__int64 NgxRoutine_3a300(_QWORD, _QWORD);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_420_alt1(__int64) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_5d770(_QWORD);
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4b90_alt1(__int64, __int64, __int64, __int64,
                              ...) __asm__("NgxRoutine_b4b90");
__int64 NgxRoutine_b4c00(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4c00_alt1(__int64 result, __int64, __int64, __int64,
                              __int64, __int64, __int64, __int64,
                              char) __asm__("NgxRoutine_b4c00");
__int64 ReadValuesFromDRS_alt1(_QWORD) __asm__("ReadValuesFromDRS");
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 abs_plt(_QWORD, float);
__int64 dlaa_354e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("dlaa_354e0");
__int64 dlaa_35780_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("dlaa_35780");
__int64 dlaa_361d0_alt1(_QWORD) __asm__("dlaa_361d0");
__int64 dlss_cubin_kernel_map_5dc20(_QWORD, _QWORD, _QWORD);
__int64 dltss_64650(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 dltss_64a50(__int64, __int64, __int64, __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a9980(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_39430(__int64);
__int64 nvidia_dlss_rel_source_3a590(_QWORD);
__int64 nvidia_dlss_rel_source_3a660(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_3aa00(_QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_5eab0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_602f0(__int64, _QWORD*);
__int64 nvidia_dlss_rel_source_features_dlaa_7d1e0(float);
const char* nvidia_dlss_rel_source_a3620(int, _QWORD*);
double log2_plt(long double);
extern _UNKNOWN NgxData_2b6acb8;
extern _UNKNOWN NgxData_2b6acc0;
extern _UNKNOWN NgxData_2b6acc8;
extern _UNKNOWN NgxData_2b6acd0;
extern _UNKNOWN NgxData_2b6acd8;
extern _UNKNOWN NgxData_2b6ace0;
extern _UNKNOWN NgxData_2b6ace8;
extern _UNKNOWN NgxData_2b6acf0;
extern _UNKNOWN* NgxData_952228;
extern __int64 NgxData_2b6aeb0;
extern __int64 NgxData_94c870;
extern __int64 NgxData_94c880;
extern __int64 NgxData_94c890;
extern __int64 NgxData_94c8a0;
extern __int64 NgxData_94c8b0;
extern __int64 NgxData_94c8c0;
extern __int64* NgxData_952230[14];
extern char* NgxData_94c868;
extern char* NgxData_94c878;
extern char* NgxData_94c888;
extern char* NgxData_94c898;
extern char* NgxData_94c8a8;
extern char* NgxData_94c8b8;
extern char NgxData_2b6ac90;
extern char NgxData_2b6ac91;
extern char NgxData_2b6ac92;
extern char NgxData_2b6ac93;
extern char NgxData_2b6ac94;
extern char NgxData_2b6ac95;
extern char NgxData_2b6ac96;
extern char NgxData_2b6ac97;
extern int NgxData_2b6ac98;
extern int NgxData_2b6ac9c;
extern int NgxData_2b6aca0;
extern int NgxData_2b6aca4;
extern int NgxData_2b6aca8;
extern int NgxData_2b6acac;
extern int NgxData_2b6acb0;
extern int NgxData_2b6acb4;
extern int NgxData_960004;
float DLSS_GetOptimalSettingsHelper(float, __int64, __int64, int, char, __int64,
                                    __int64, __int64, __int64, _DWORD*, _DWORD*,
                                    _DWORD*);
void __attribute__((noreturn)) NgxRoutine_27cf0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 dlaa_34c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64* a5);
__int64 ReadValuesFromDRS(__int64 a1);
__int64 NVSDK_NGX_Result_FAIL_OutOfGPUMemory(__int64* a1, int a2, int a3,
                                             __int64 a4, __int64 a5,
                                             _QWORD* a6);
__int64 dlaa_354e0(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4);
__int64 dlaa_35780(__int64 a1, __int64 a2, unsigned int* a3, __int64 a4,
                   long double a5);
__int64 dlaa_361d0(__int64 a1);
__int64 dlaa_36630(__int64 a1, __int64 a2, char a3);
__int64 dlaa_367a0(__int64* a1, int* a2, int a3, int a4, int a5, int a6);
__int64 dlaa_36960(__int64 a1, int* a2);
__int64 dlaa_36ac0(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5,
                   int a6, __int64 a7);

__int64 dlaa_34c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64* a5)
{
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _BYTE v13[4];

  v8 = -1160773630;
  v9 = NgxRoutine_5d770(a3);
  v10 = *a5;
  *(_QWORD*)a1 = v9;
  *(_QWORD*)(a1 + 2408) = a5;
  if ((*(unsigned int (**)(__int64*, __int64))(v10 + 16))(a5, a2) == 0) {
    *(_DWORD*)(a1 + 2832) = (*(__int64 (**)(_QWORD))(
        **(_QWORD**)(a1 + 2408) + 80LL))(*(_QWORD*)(a1 + 2408));
    v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 2408) + 536LL))(
        *(_QWORD*)(a1 + 2408));
    dlss_cubin_kernel_map_5dc20(a1 + 472, v11 & 1, *(unsigned int*)(a1 + 2832));
    ReadValuesFromDRS_alt1(a1);
    if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD, const char*, __int64,
                             __int64, __int64, __int64, int,
                             _QWORD))(**(_QWORD**)(a1 + 2408) + 120LL))(
            *(_QWORD*)(a1 + 2408), *(_QWORD*)(a1 + 480),
            *(unsigned int*)(a1 + 488), "cuda_clear_buffer_kernel", 9,
            a1 + 2416, 16, 16, 1, 0) == 0) {
      nvidia_dlss_rel_source_features_dlaa_5eab0(a1 + 8, a5, a1 + 472);
      NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                       "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                       210, "Init", "Device 0x%x", a2);
      if ((*(unsigned int (**)(_QWORD, _BYTE*))(
              **(_QWORD**)(a1 + 2408) + 104LL))(*(_QWORD*)(a1 + 2408), v13) !=
          0) {
        return (unsigned int)-1160773630;
      }
      else {
        return 1;
      }
    }
  }
  return v8;
}

__int64 ReadValuesFromDRS(__int64 a1)
{
  __int64 v2;
  char v3;
  int v4;
  int v5;
  __int64 result;
  char* v7;
  char* v8;
  int v9;
  float v10;
  unsigned int v11;
  int v12;
  unsigned int v13;

  v2 = *(_QWORD*)(a1 + 2408);
  v13 = 0;
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 528LL))(v2);
  *(_BYTE*)(a1 + 2364) = 0;
  *(_BYTE*)(a1 + 2346) = v3 & 1;
  if ((NgxRoutine_27b20(279951208, &v13) & 1) != 0) {
    v4 = v13;
    v5 = 1;
    *(_BYTE*)(a1 + 2348) = 1;
    if (v4 <= 2) {
      if (v4 != 0) {
        if (v4 == 1) {
          goto LABEL_16;
        }
        if (v4 == 2) {
          v5 = 2;
          goto LABEL_16;
        }
      LABEL_17:
        NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                         "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                         1664, "ReadValuesFromDRS",
                         "Info: Reading NGX_DLSS_MODE_ID from DRS, value = %d",
                         v4);
        goto LABEL_18;
      }
    }
    else {
      if (v4 > 4) {
        if (v4 != 5) {
          if (v4 == 6) {
            *(_BYTE*)(a1 + 2356) = 1;
          }
          goto LABEL_17;
        }
        v5 = 3;
        goto LABEL_16;
      }
      if (v4 != 3) {
        v5 = 5;
      LABEL_16:
        *(_DWORD*)(a1 + 2840) = v5;
        goto LABEL_17;
      }
      *(_BYTE*)(a1 + 2348) = 0;
    }
    *(_DWORD*)(a1 + 2840) = 0;
    goto LABEL_17;
  }
LABEL_18:
  if ((NgxRoutine_27b20(279951212, &v13) & 1) != 0) {
    if (v13 == 1) {
      v7 = "true";
    }
    else {
      v7 = "false";
    }
    *(_BYTE*)(a1 + 2364) = v13 == 1;
    NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                     1670, "ReadValuesFromDRS",
                     "read OVERRIDE_PERF_TO_9X from DRS, value = %s", v7);
    if ((NgxRoutine_27b20(283385332, &v13) & 1) == 0) {
    LABEL_20:
      if ((NgxRoutine_27b20(283385333, &v13) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_31:
      v9 = v13;
      *(_BYTE*)(a1 + 2357) = 1;
      v10 = (float)v9 / 100.0;
      *(float*)(a1 + 2360) = v10;
      NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                       "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                       1682, "ReadValuesFromDRS",
                       "read scaling ratio from DRS, value = %f", v10);
      result = NgxRoutine_27b20(283385331, &v13);
      if ((result & 1) == 0) {
        return result;
      }
      goto LABEL_32;
    }
  }
  else if ((NgxRoutine_27b20(283385332, &v13) & 1) == 0) {
    goto LABEL_20;
  }
  if (v13 == 1) {
    v8 = "true";
  }
  else {
    v8 = "false";
  }
  *(_BYTE*)(a1 + 2347) = v13 == 1;
  NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                   1675, "ReadValuesFromDRS",
                   "read FORCE_DLAA from DRS, value = %s", v8);
  if ((NgxRoutine_27b20(283385333, &v13) & 1) != 0) {
    goto LABEL_31;
  }
LABEL_21:
  result = NgxRoutine_27b20(283385331, &v13);
  if ((result & 1) == 0) {
    return result;
  }
LABEL_32:
  v11 = v13;
  *(_BYTE*)(a1 + 2349) = 1;
  *(_DWORD*)(a1 + 2352) = v11;
  if (v11 == 0xFFFFFF) {
    if (((*(_DWORD*)(a1 + 2840) - 3) & 0xFFFFFFFD) != 0) {
      v12 = 5;
    }
    else {
      v12 = 6;
    }
    *(_DWORD*)(a1 + 2836) = v12;
    return NgxRoutine_b4c00(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dlaa.cpp",
        1731, "ReadValuesFromDRS",
        "Info: Reading NGX_OVERRIDE_RENDER_PRESET_SELECTION from DRS, value = "
        "%d",
        v11);
  }
  *(_DWORD*)(a1 + 2836) = v11;
  if (v11 <= 0xA) {
    return NgxRoutine_b4c00(
        "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
        "rel/source/features/dlaa/dlaa.cpp",
        1731, "ReadValuesFromDRS",
        "Info: Reading NGX_OVERRIDE_RENDER_PRESET_SELECTION from DRS, value = "
        "%d",
        v11);
  }
  return result;
}

__int64 NVSDK_NGX_Result_FAIL_OutOfGPUMemory(__int64* a1, int a2, int a3,
                                             __int64 a4, __int64 a5, _QWORD* a6)
{
  __int64 result;
  __int64* v8;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  bool v17;
  int v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64** v31;
  int v32;
  __int64* v33;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64* v45;
  unsigned int v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v51;
  __int64 v53;
  int v54;
  int v55;
  char v56;
  int* v57;

  if ((unsigned __int64)a1[299] >= 0xFFFFFFFF) {
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                     271, "CreateFeature",
                     "Error: too many DLSS instances are already in use!");
    NgxRoutine_b4c00("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                     272, "CreateFeature",
                     "NVSDK_NGX_Result_FAIL_OutOfGPUMemory");
    return 3134193677LL;
  }
  v8 = a1 + 296;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1[301] + 488LL))(a1[301], a5);
  v14 = a1[297];
  v15 = a1[299];
  v55 = a3;
  NgxData_2b6aeb0 = a4;
  v16 = NgxData_960004;
  v17 = v14 == 0 || v15 == 0;
  v18 = NgxData_960004 + 1;
  if (v17) {
    goto LABEL_39;
  }
  v19 = *v8;
  v20 = a3 << 8;
  v21 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v22 = NgxData_960004 + 1;
    v23 = (unsigned int)(NgxData_960004 + v20);
    v24 = v23;
    if (v14 <= v23) {
    LABEL_9:
      v24 = (unsigned int)v23 % (unsigned int)v14;
    }
  LABEL_10:
    v25 = *(__int64**)(v19 + 8 * v24);
    if (v25 != nullptr) {
      while (1) {
        v25 = (__int64*)*v25;
        if (v25 == nullptr) {
          break;
        }
        v27 = v25[1];
        if (v27 == v23) {
          if (*((_DWORD*)v25 + 5) == a3 && *((_DWORD*)v25 + 4) == v16) {
            v16 = v22++;
            v23 = (unsigned int)(v16 + v20);
            v24 = v23;
            if (v14 <= v23) {
              goto LABEL_9;
            }
            goto LABEL_10;
          }
        }
        else {
          if (v27 >= v14) {
            v27 %= v14;
          }
          if (v27 != v24) {
            break;
          }
        }
      }
    }
    v18 = v22;
    goto LABEL_39;
  }
  v28 = (unsigned int)(NgxData_960004 + v20);
  v29 = v14 + 0xFFFFFFFF;
  v30 = (v14 + 0xFFFFFFFF) & v28;
  v31 = *(__int64***)(v19 + 8 * v30);
  if (v31 == nullptr) {
  LABEL_39:
    v32 = v16;
    goto LABEL_40;
  }
  do {
    v32 = v18;
    v33 = *v31;
    if (*v31 == nullptr) {
    LABEL_38:
      v18 = v32;
      goto LABEL_39;
    }
    while (1) {
      v35 = v33[1];
      if (v35 == v28) {
        break;
      }
      if ((v35 & v21) != v30) {
        goto LABEL_38;
      }
    LABEL_32:
      v33 = (__int64*)*v33;
      if (v33 == nullptr) {
        goto LABEL_38;
      }
    }
    if (*((_DWORD*)v33 + 5) != a3 || *((_DWORD*)v33 + 4) != v16) {
      goto LABEL_32;
    }
    v28 = (unsigned int)(v32 + v20);
    v18 = v32 + 1;
    v16 = v32;
    v30 = v29 & v28;
    v31 = *(__int64***)(v19 + 8 * (v29 & v28));
  } while (v31 != nullptr);
LABEL_40:
  NgxData_960004 = v18;
  v54 = v32;
  v57 = &v54;
  v36 = nvidia_dlss_rel_source_3a660(v8, &v54, NgxData_952228, &v57, &v56);
  v37 = *a1;
  v38 = v36;
  *(_DWORD*)(v36 + 172) = a2;
  *(_QWORD*)(v36 + 96) = v37;
  result = dlaa_354e0_alt1(a1, v36 + 24, a5, v36 + 24);
  v39 = *a1;
  if (*(_QWORD*)(*a1 + 80) == 194836104) {
    *(_DWORD*)(v38 + 52) |= 0x20u;
  }
  v40 = *(_DWORD*)(v39 + 68);
  if (v40 == 2) {
    v42 = *(_DWORD*)(v38 + 52);
    if ((v42 & 0x20) != 0) {
      v43 = result;
      NgxRoutine_b4b90(
          "C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/dlss/"
          "rel/source/features/dlaa/dlaa.cpp",
          320, "CreateFeature",
          "Warning: DLSS Sharpening is deprecated and disabled. Please refer "
          "to the programming guide for guidance on sharp"
          "ening alternatives.");
      v42 = *(_DWORD*)(v38 + 52);
      result = v43;
    }
    v41 = v42 & 0xFFFFFFDF;
  LABEL_48:
    *(_DWORD*)(v38 + 52) = v41;
  }
  else if (v40 == 1) {
    v41 = *(_DWORD*)(v38 + 52) | 0x20;
    goto LABEL_48;
  }
  if ((unsigned int)result >> 20 != 2989) {
    result = dlaa_35780_alt1(a1, v38 + 24, v38 + 24, a4);
    if ((result & 0xFFF00000) != 0xBAD00000) {
      v44 = a1[297];
      v45 = nullptr;
      if (v44 == 0) {
        v46 = result;
        goto LABEL_80;
      }
      v46 = result;
      if (a1[299] != 0) {
        v47 = v44 - 1;
        v48 = (unsigned int)(v54 + (v55 << 8));
        if ((v44 & (v44 - 1)) != 0) {
          v49 = (unsigned int)(v54 + (v55 << 8));
          if (v44 <= v48) {
            v49 = (unsigned int)v48 % (unsigned int)v44;
          }
        }
        else {
          v49 = ((_DWORD)v44 - 1) & (unsigned int)v48;
        }
        v45 = *(__int64**)(*v8 + 8 * v49);
        if (v45 != nullptr) {
          v45 = (__int64*)*v45;
          if (v45 != nullptr) {
            if ((v44 & v47) == 0) {
              while (1) {
                v53 = v45[1];
                if (v53 == v48) {
                  if (*((_DWORD*)v45 + 5) == v55 &&
                      *((_DWORD*)v45 + 4) == v54) {
                    goto LABEL_80;
                  }
                }
                else if ((v53 & v47) != v49) {
                  goto LABEL_79;
                }
                v45 = (__int64*)*v45;
                if (v45 == nullptr) {
                  goto LABEL_80;
                }
              }
            }
            do {
              v51 = v45[1];
              if (v51 == v48) {
                if (*((_DWORD*)v45 + 5) == v55 && *((_DWORD*)v45 + 4) == v54) {
                  break;
                }
              }
              else {
                if (v51 >= v44) {
                  v51 %= v44;
                }
                if (v51 != v49) {
                LABEL_79:
                  v45 = nullptr;
                  break;
                }
              }
              v45 = (__int64*)*v45;
            } while (v45 != nullptr);
          }
        }
      }
    LABEL_80:
      *a6 = v45 + 2;
      dlaa_361d0_alt1(a1);
      return v46;
    }
  }
  return result;
}

__int64 dlaa_354e0(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4)
{
  char* v9;
  __int64 v10;

  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "CreationNodeMask", a2) != 1) {
    *a2 = 1;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "VisibilityNodeMask", a2 + 1) != 1) {
    a2[1] = 1;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "FreeMemOnReleaseFeature", a2 + 2) != 1) {
    a2[2] = 0;
  }
  if ((*(unsigned int (**)(__int64, char*, _DWORD*))(*(_QWORD*)a3 + 96LL))(
          a3, "Width", a2 + 3) != 1) {
    v9 = "Width";
    v10 = 1819;
  LABEL_22:
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
                     v10, "FillCreationParams",
                     "error: could not find %s parameter", v9);
    return 3134193669LL;
  }
  if ((*(unsigned int (**)(__int64, char*, _DWORD*))(*(_QWORD*)a3 + 96LL))(
          a3, "Height", a2 + 4) != 1) {
    v9 = "Height";
    v10 = 1820;
    goto LABEL_22;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "OutWidth", a2 + 5) != 1) {
    v9 = "OutWidth";
    v10 = 1821;
    goto LABEL_22;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "OutHeight", a2 + 6) != 1) {
    v9 = "OutHeight";
    v10 = 1822;
    goto LABEL_22;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "DLSS.Feature.Create.Flags", a2 + 7) != 1) {
    a2[7] = 0;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "PerfQualityValue", a2 + 8) != 1) {
    a2[8] = 0;
  }
  if ((*(unsigned int (**)(__int64, const char*, _DWORD*))(
          *(_QWORD*)a3 + 96LL))(a3, "DLSS.Enable.Output.Subrects", a2 + 9) !=
      1) {
    a2[9] = 0;
  }
  return dltss_64650(a1 + 8, a2 + 10, a3, *(_QWORD*)(a4 + 72));
}

__int64 dlaa_35780(__int64 a1, __int64 a2, unsigned int* a3, __int64 a4,
                   long double a5)
{

#pragma clang fp contract(off)
  unsigned int v9;
  unsigned int v10;
  double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int* v17;
  float v18;
  unsigned int v19;
  int v20;
  int v21;
  float v22;
  unsigned int v23;
  int v24;
  int v25;
  float v26;
  unsigned int v27;
  int v28;
  int v29;
  float v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  float v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  const char* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  float v58;
  unsigned int v59;
  int v60;
  int v61;
  float v62;
  unsigned int v63;
  int v64;
  int v65;
  float v66;
  unsigned int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  const char* v100;
  __int64 v101;
  __int64 v102;
  char v103;
  char v104;
  char v105;
  char v106;
  char v107;
  char v108;
  __int64 v109;
  struct {
    _QWORD* v110;
    _QWORD* v111;
    char* v112;
  } v110_;
  struct {
    unsigned int v113;
    unsigned int v114;
  } v113_;

  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v9 = -1160773630;
  *(_DWORD*)(a2 + 80) = a3[3];
  *(_DWORD*)(a2 + 84) = a3[4];
  *(_DWORD*)(a2 + 104) = a3[5];
  *(_DWORD*)(a2 + 108) = a3[6];
  *(_DWORD*)(a2 + 112) = a3[7] & 0xFFFFFF7F;
  v10 = *a3;
  *(_DWORD*)(a2 + 116) = *a3;
  *(double*)&a5 = (double)v10;
  *(_DWORD*)(a2 + 120) = a3[1];
  *(_BYTE*)(a2 + 144) = a3[9] != 0;
  *(_DWORD*)(a2 + 128) = a3[8];
  v11 = log2_plt(a5),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v12 = *(unsigned int*)(a2 + 104);
  v13 = *(unsigned int*)(a2 + 108);
  *(_DWORD*)(a2 + 124) = (unsigned int)v11;
  *(_BYTE*)(a2 + 152) = a3[2] != 0;
  if ((int)v12 < 32 || (int)v13 <= 31) {
    NgxRoutine_b4b90_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        1939, (__int64)"CreateDlssInstance",
        (__int64)"Error: Application provided output dimensions below the "
                 "minimum supported size. Output dimensions (%d x %"
                 "d) must be at least %d x %d.",
        (unsigned int)v12, (unsigned int)v13, 32, 32),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return (unsigned int)-1160773627;
  }
  v14 = *(unsigned int*)(a2 + 80);
  v15 = *(unsigned int*)(a2 + 84);
  if ((int)v14 > (int)v12 || (int)v15 > (int)v13) {
    NgxRoutine_b4b90_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        1948, (__int64)"CreateDlssInstance",
        (__int64)"Error: Application passed invalid creation dimensions. Input "
                 "dimensions (%d x %d) must be <= output dimen"
                 "sions (%d x %d).",
        v14, v15, v12, v13),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return (unsigned int)-1160773627;
  }
  v16 = (int*)(a2 + 88);
  v17 = (int*)(a2 + 96);
  v18 = DLSS_GetOptimalSettingsHelper(
      *(float*)(a1 + 2360), a1, v12 | (v13 << 32), *(_DWORD*)(a2 + 128),
      *(_BYTE*)(a1 + 2348), *(unsigned int*)(a1 + 2840),
      *(unsigned __int8*)(a1 + 2364), *(unsigned __int8*)(a1 + 2347),
      *(unsigned __int8*)(a1 + 2356), &v113_.v113, (_DWORD*)(a2 + 88),
      (_DWORD*)(a2 + 96)),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v19 = v113_.v113;
  if (v113_.v113 != 0 && v113_.v114 != 0) {
    v109 = a4;
    v20 = *(_DWORD*)(a2 + 80);
    v21 = (int)abs_plt(v113_.v113, v18) / 50,
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v21 <= 2) {
      v21 = 2;
    }
    if (v20 < (int)(v19 - v21)) {
      goto LABEL_19;
    }
    v23 = v113_.v114;
    v24 = *(_DWORD*)(a2 + 84);
    v25 = (int)abs_plt(v113_.v114, v22) / 50,
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v25 <= 2) {
      v25 = 2;
    }
    if (v24 < (int)(v23 - v25)) {
      goto LABEL_19;
    }
    v27 = v113_.v113;
    v28 = *(_DWORD*)(a2 + 80);
    v29 = (int)abs_plt(v113_.v113, v26) / 50,
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v29 <= 2) {
      v29 = 2;
    }
    if (v28 > (int)(v29 + v27)) {
      goto LABEL_19;
    }
    v31 = v113_.v114;
    v32 = *(_DWORD*)(a2 + 84);
    v37 = (int)abs_plt(v113_.v114, v30) / 50,
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v37 <= 2) {
      v37 = 2;
    }
    if (v32 > (int)(v37 + v31)) {
    LABEL_19:
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          1980, (__int64)"CreateDlssInstance",
          (__int64)"Info: Optimal settings not used. Custom dimensions (%dx%d) "
                   "overriding Optimal dimensions (%dx%d).",
          *(unsigned int*)(a2 + 80), *(unsigned int*)(a2 + 84), v113_.v113,
          v113_.v114, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *(_DWORD*)(a2 + 156) |= 2u;
    }
    v39 = *(_DWORD*)(a2 + 96);
    if (*(_DWORD*)(a2 + 88) == v39 &&
        *(_DWORD*)(a2 + 92) == *(_DWORD*)(a2 + 100)) {
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          1988, (__int64)"CreateDlssInstance",
          (__int64)"Info: Dynamic scaling capability is disabled for this "
                   "combination of creation parameters.",
          v33, v34, v35, v36, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v43 = 1;
    }
    else {
      v56 = *(_DWORD*)(a2 + 80);
      v57 = (int)abs_plt(v39, v38) / 50,
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v57 <= 2) {
        v57 = 2;
      }
      if (v56 >= (int)(v39 - v57)) {
        v59 = *(_DWORD*)(a2 + 100);
        v60 = *(_DWORD*)(a2 + 84);
        v61 = (int)abs_plt(v59, v58) / 50,
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v61 <= 2) {
          v61 = 2;
        }
        if (v60 >= (int)(v59 - v61)) {
          v63 = *(_DWORD*)(a2 + 88);
          v64 = *(_DWORD*)(a2 + 80);
          v65 = (int)abs_plt(v63, v62) / 50,
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v65 <= 2) {
            v65 = 2;
          }
          if (v64 <= (int)(v65 + v63)) {
            v67 = *(_DWORD*)(a2 + 92);
            v68 = *(_DWORD*)(a2 + 84);
            v69 = (int)abs_plt(v67, v66) / 50,
            v101 = COERCE_AS(__typeof__(v101),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v36 = COERCE_AS(__typeof__(v36),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v55 = COERCE_AS(__typeof__(v55),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v83 = COERCE_AS(__typeof__(v83),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v87 = COERCE_AS(__typeof__(v87),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v69 <= 2) {
              v69 = 2;
            }
            if (v68 <= (int)(v69 + v67)) {
              goto LABEL_44;
            }
          }
        }
      }
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2007, (__int64)"CreateDlssInstance",
          (__int64)"Info: Dynamic scaling disabled : DLSS creation time res "
                   "(%dx%d) outside of supported dimensions : Min ("
                   "%dx%d) and Max (%dx%d) dynamic res.",
          *(unsigned int*)(a2 + 80), *(unsigned int*)(a2 + 84),
          *(unsigned int*)(a2 + 96), *(unsigned int*)(a2 + 100),
          *(_DWORD*)(a2 + 88)),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v43 = 4;
    }
    v70 = *(_DWORD*)(a2 + 80);
    v71 = *(_DWORD*)(a2 + 84);
    *(_DWORD*)(a2 + 88) = v70;
    *(_DWORD*)(a2 + 92) = v71;
    *(_DWORD*)(a2 + 96) = v70;
    *(_DWORD*)(a2 + 100) = v71;
    *(_DWORD*)(a2 + 156) |= v43;
  LABEL_44:
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acb8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acb8) != 0) {
      NgxData_2b6ac98 = *(_DWORD*)(a2 + 80);
      __cxa_guard_release_plt(&NgxData_2b6acb8),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v72 = *(unsigned int*)(a2 + 80);
    if ((_DWORD)v72 != NgxData_2b6ac98 || (NgxData_2b6ac90 & 1) == 0) {
      NgxData_2b6ac98 = *(_DWORD*)(a2 + 80);
      NgxData_2b6ac90 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2014, (__int64)"CreateDlssInstance",
          (__int64)"InCreationTimeWidth %d", v72, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acc0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acc0) != 0) {
      NgxData_2b6ac9c = *(_DWORD*)(a2 + 84);
      __cxa_guard_release_plt(&NgxData_2b6acc0),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v73 = *(unsigned int*)(a2 + 84);
    if ((_DWORD)v73 != NgxData_2b6ac9c || (NgxData_2b6ac91 & 1) == 0) {
      NgxData_2b6ac9c = *(_DWORD*)(a2 + 84);
      NgxData_2b6ac91 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2015, (__int64)"CreateDlssInstance",
          (__int64)"InCreationTimeHeight %d", v73, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acc8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acc8) != 0) {
      NgxData_2b6aca0 = *v16;
      __cxa_guard_release_plt(&NgxData_2b6acc8),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v74 = (unsigned int)*v16;
    if ((_DWORD)v74 != NgxData_2b6aca0 || (NgxData_2b6ac92 & 1) == 0) {
      NgxData_2b6aca0 = *v16;
      NgxData_2b6ac92 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2016, (__int64)"CreateDlssInstance",
          (__int64)"InDynamicMaxSetDims.Width %d", v74, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acd0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acd0) != 0) {
      NgxData_2b6aca4 = *(_DWORD*)(a2 + 92);
      __cxa_guard_release_plt(&NgxData_2b6acd0),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v75 = *(unsigned int*)(a2 + 92);
    if ((_DWORD)v75 != NgxData_2b6aca4 || (NgxData_2b6ac93 & 1) == 0) {
      NgxData_2b6aca4 = *(_DWORD*)(a2 + 92);
      NgxData_2b6ac93 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2017, (__int64)"CreateDlssInstance",
          (__int64)"InDynamicMaxSetDims.Height %d", v75, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acd8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acd8) != 0) {
      NgxData_2b6aca8 = *v17;
      __cxa_guard_release_plt(&NgxData_2b6acd8),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v76 = (unsigned int)*v17;
    if ((_DWORD)v76 != NgxData_2b6aca8 || (NgxData_2b6ac94 & 1) == 0) {
      NgxData_2b6aca8 = *v17;
      NgxData_2b6ac94 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2018, (__int64)"CreateDlssInstance",
          (__int64)"InDynamicMinSetDims.Width %d", v76, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6ace0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6ace0) != 0) {
      NgxData_2b6acac = *(_DWORD*)(a2 + 100);
      __cxa_guard_release_plt(&NgxData_2b6ace0),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v77 = *(unsigned int*)(a2 + 100);
    if ((_DWORD)v77 != NgxData_2b6acac || (NgxData_2b6ac95 & 1) == 0) {
      NgxData_2b6acac = *(_DWORD*)(a2 + 100);
      NgxData_2b6ac95 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2019, (__int64)"CreateDlssInstance",
          (__int64)"InDynamicMinSetDims.Height %d", v77, v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6ace8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6ace8) != 0) {
      NgxData_2b6acb0 = *(_DWORD*)(a2 + 104);
      __cxa_guard_release_plt(&NgxData_2b6ace8),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v78 = *(unsigned int*)(a2 + 104);
    if ((_DWORD)v78 != NgxData_2b6acb0 || (NgxData_2b6ac96 & 1) == 0) {
      NgxData_2b6acb0 = *(_DWORD*)(a2 + 104);
      NgxData_2b6ac96 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2020, (__int64)"CreateDlssInstance", (__int64)"OutWidth %d", v78, v40,
          v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b6acf0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b6acf0) != 0) {
      NgxData_2b6acb4 = *(_DWORD*)(a2 + 108);
      __cxa_guard_release_plt(&NgxData_2b6acf0),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v79 = *(unsigned int*)(a2 + 108);
    if ((_DWORD)v79 != NgxData_2b6acb4 || (NgxData_2b6ac97 & 1) == 0) {
      NgxData_2b6acb4 = *(_DWORD*)(a2 + 108);
      NgxData_2b6ac97 = 1;
      NgxRoutine_b4c00_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
          2021, (__int64)"CreateDlssInstance", (__int64)"OutHeight %d", v79,
          v40, v41, v42, v103),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2022, (__int64)"CreateDlssInstance", (__int64)"HDR %d",
        *(_DWORD*)(a2 + 112) & 1, v40, v41, v42, v103),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2023, (__int64)"CreateDlssInstance",
        (__int64)"Motion Vectors LowRes %d", (*(_DWORD*)(a2 + 112) & 2) != 0,
        v80, v81, v82, v104),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2024, (__int64)"CreateDlssInstance",
        (__int64)"Motion Vectors Jittered %d", (*(_DWORD*)(a2 + 112) & 4) != 0,
        v83, v84, v85, v105),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2025, (__int64)"CreateDlssInstance", (__int64)"Depth Inverted %d",
        (*(_DWORD*)(a2 + 112) & 8) != 0, v86, v87, v88, v106),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2026, (__int64)"CreateDlssInstance", (__int64)"Do Sharpening %d",
        (*(_DWORD*)(a2 + 112) & 0x20) != 0, v89, v90, v91, v107),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v92 = *(_DWORD*)(a2 + 128);
    v93 = (_QWORD*)NgxRoutine_420(96),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v94 = NgxData_94c870;
    v110_.v112 = (char*)(v93 + 12);
    v110_.v110 = v93;
    v110_.v111 = v93 + 12;
    *v93 = NgxData_94c868;
    v93[1] = v94;
    v95 = NgxData_94c880;
    v93[2] = NgxData_94c878;
    v93[3] = v95;
    v96 = NgxData_94c890;
    v93[4] = NgxData_94c888;
    v93[5] = v96;
    v97 = NgxData_94c8a0;
    v93[6] = NgxData_94c898;
    v93[7] = v97;
    v98 = NgxData_94c8b0;
    v93[8] = NgxData_94c8a8;
    v93[9] = v98;
    v99 = NgxData_94c8c0;
    v93[10] = NgxData_94c8b8;
    v93[11] = v99;
    v100 = nvidia_dlss_rel_source_a3620(v92, &v110_.v110),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v102 = COERCE_AS(__typeof__(v102),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v41 = COERCE_AS(__typeof__(v41),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v83 = COERCE_AS(__typeof__(v83),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b4c00_alt1(
        (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                 "nvn2/dlss/rel/source/features/dlaa/dlaa.cpp",
        2030, (__int64)"CreateDlssInstance",
        (__int64)"PerfQualityValue %s (%d)", (__int64)v100,
        *(unsigned int*)(a2 + 128), v101, v102, v108),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v110_.v110 != nullptr) {
      v110_.v111 = v110_.v110;
      NgxRoutine_430(v110_.v110, v110_.v112 - (char*)v110_.v110),
          v101 = COERCE_AS(__typeof__(v101),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v102 = COERCE_AS(__typeof__(v102),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v55 = COERCE_AS(__typeof__(v55),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v83 = COERCE_AS(__typeof__(v83),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v85 = COERCE_AS(__typeof__(v85),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v87 = COERCE_AS(__typeof__(v87),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((*(unsigned int (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2408) + 32LL))(
            *(_QWORD*)(a1 + 2408), a2 + 160) == 0 &&
        (*(unsigned int (**)(_QWORD, __int64, _QWORD, _QWORD))(
            **(_QWORD**)(a1 + 2408) + 248LL))(*(_QWORD*)(a1 + 2408), v109,
                                              *(unsigned int*)(a2 + 124),
                                              *(_QWORD*)(a2 + 160)) == 0) {
      return (unsigned int)dltss_64a50(a1 + 8, a2, (__int64)(a3 + 10), v109);
    }
    return v9;
  }
  v45 = *(_DWORD*)(a2 + 128);
  v46 = (_QWORD*)NgxRoutine_420(96),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v47 = NgxData_94c870;
  v110_.v112 = (char*)(v46 + 12);
  v110_.v110 = v46;
  v110_.v111 = v46 + 12;
  *v46 = NgxData_94c868;
  v46[1] = v47;
  v48 = NgxData_94c880;
  v46[2] = NgxData_94c878;
  v46[3] = v48;
  v49 = NgxData_94c890;
  v46[4] = NgxData_94c888;
  v46[5] = v49;
  v50 = NgxData_94c8a0;
  v46[6] = NgxData_94c898;
  v46[7] = v50;
  v51 = NgxData_94c8b0;
  v46[8] = NgxData_94c8a8;
  v46[9] = v51;
  v52 = NgxData_94c8c0;
  v46[10] = NgxData_94c8b8;
  v46[11] = v52;
  v53 = nvidia_dlss_rel_source_a3620(v45, &v110_.v110),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v102 = COERCE_AS(__typeof__(v102),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v83 = COERCE_AS(__typeof__(v83),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  NgxRoutine_b4c00_alt1(
      (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/nvn2/"
               "dlss/rel/source/features/dlaa/dlaa.cpp",
      1969, (__int64)"CreateDlssInstance",
      (__int64)"Error: Provided PerfQuality Mode (%s, %d) is unsupported by "
               "this version of DLSS.",
      (__int64)v53, *(unsigned int*)(a2 + 128), v54, v55, v103),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v102 = COERCE_AS(__typeof__(v102),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v83 = COERCE_AS(__typeof__(v83),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v110_.v110 != nullptr) {
    v110_.v111 = v110_.v110;
    NgxRoutine_430(v110_.v110, v110_.v112 - (char*)v110_.v110),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v102 = COERCE_AS(__typeof__(v102),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s0", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s0", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(float, "s0", "=w")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v83 = COERCE_AS(__typeof__(v83),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  return (unsigned int)-1160773616;
}

__int64 dlaa_361d0(__int64 a1)
{
  __int64 result;
  __int64 (*v3)(__int64, unsigned __int64, __int64);
  int v4;
  float v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;

  result = NgxRoutine_33430();
  if (result != 0) {
    v3 = (__int64 (*)(__int64, unsigned __int64, __int64))result;
    if (*(_BYTE*)(a1 + 2357) == 1) {
      v4 = 1;
      if (*(_BYTE*)(a1 + 2356) == 1) {
        if ((nvidia_dlss_rel_source_features_dlaa_7d1e0(*(float*)(a1 + 2360)) &
             1) != 0) {
          v4 = 3;
        }
        else {
          v4 = 1;
        }
      }
      result = NgxRoutine_420_alt1(24);
      v5 = *(float*)(a1 + 2360);
      v6 = result + 24;
      v7 = result;
      *(_DWORD*)(result + 8) = v4;
      *(_DWORD*)(result + 12) = 1;
      *(_QWORD*)result = 0x100000001LL;
      *(double*)(result + 16) = v5;
      if (*(_BYTE*)(a1 + 2348) != 1) {
        goto LABEL_8;
      }
    }
    else {
      v7 = 0;
      v6 = 0;
      if (*(_BYTE*)(a1 + 2348) != 1) {
      LABEL_8:
        v8 = v7;
        v9 = v6;
        goto LABEL_29;
      }
    }
    v10 = 3;
    v11 = (unsigned int)(*(_DWORD*)(a1 + 2840) - 1);
    if ((unsigned int)v11 < 5) {
      v12 = v11 + 1;
    }
    else {
      v12 = 0;
    }
    if (*(_BYTE*)(a1 + 2356) == 1) {
      v12 = 6;
      if ((nvidia_dlss_rel_source_features_dlaa_7d1e0(*(float*)(a1 + 2360)) &
           1) != 0) {
        v10 = 3;
      }
      else {
        v10 = 1;
      }
    }
    v13 = v6 - v7;
    v14 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v6 - v7) >> 3);
    v15 = v14 + 1;
    if (v14 + 1 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_57;
    }
    if (0x5555555555555556LL * ((__int64)(v6 - v7) >> 3) > v15) {
      v15 = 0x5555555555555556LL * ((__int64)(v6 - v7) >> 3);
    }
    if (v14 >= 0x555555555555555LL) {
      v16 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v16 = v15;
    }
    if (v16 != 0) {
      if (v16 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_58;
      }
      v8 = NgxRoutine_420_alt1(24 * v16);
    }
    else {
      v8 = 0;
    }
    v17 = v8 + v13;
    v9 = v8 + 24 * v16;
    *(_QWORD*)(v17 + 16) = v12;
    v6 = v8 + v13 + 24;
    *(_QWORD*)v17 = 1;
    *(_DWORD*)(v17 + 8) = v10;
    *(_DWORD*)(v17 + 12) = 2;
    result = memcpy_plt(v8, v7, v13);
    if (v7 != 0) {
      result = NgxRoutine_430(v7, v13);
    }
  LABEL_29:
    if (*(_BYTE*)(a1 + 2349) != 1) {
      goto LABEL_38;
    }
    v18 = *(unsigned int*)(a1 + 2836);
    if (*(_BYTE*)(a1 + 2350) != 0) {
      v19 = 3;
    }
    else {
      v19 = 1;
    }
    if (*(_DWORD*)(a1 + 2352) == 0xFFFFFF) {
      v20 = v19 | 4;
    }
    else {
      v20 = v19;
    }
    if (v6 < v9) {
      *(_DWORD*)(v6 + 8) = v20;
      *(_DWORD*)(v6 + 12) = 0;
      *(_QWORD*)(v6 + 16) = v18;
      *(_QWORD*)v6 = 1;
      v6 += 24LL;
    LABEL_38:
      if (v8 == v6) {
        goto LABEL_40;
      }
      goto LABEL_39;
    }
    v21 = v6 - v8;
    v22 = 1 - 0x5555555555555555LL * ((__int64)(v6 - v8) >> 3);
    if (v22 <= 0xAAAAAAAAAAAAAAALL) {
      v23 = v9 - v8;
      if (0x5555555555555556LL * ((__int64)(v9 - v8) >> 3) > v22) {
        v22 = 0x5555555555555556LL * ((__int64)(v9 - v8) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v8) >> 3) >=
          0x555555555555555LL) {
        v24 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v24 = v22;
      }
      if (v24 == 0) {
        v25 = 0;
      LABEL_53:
        v26 = v25 + v21;
        *(_QWORD*)v26 = 1;
        v9 = v25 + 24 * v24;
        *(_DWORD*)(v26 + 8) = v20;
        *(_DWORD*)(v26 + 12) = 0;
        *(_QWORD*)(v26 + 16) = v18;
        v6 = v25 + v21 + 24;
        result = memcpy_plt(v25, v8, v21);
        if (v8 != 0) {
          result = NgxRoutine_430(v8, v23);
        }
        v8 = v25;
        if (v25 != v6) {
        LABEL_39:
          result = v3(1, 0xAAAAAAAAAAAAAAABLL * ((__int64)(v6 - v8) >> 3), v8);
        }
      LABEL_40:
        if (v8 != 0) {
          return NgxRoutine_430(v8, v9 - v8);
        }
        return result;
      }
      if (v24 <= 0xAAAAAAAAAAAAAAALL) {
        v25 = NgxRoutine_420_alt1(24 * v24);
        goto LABEL_53;
      }
    LABEL_58:
      NgxRoutine_27cf0();
    }
  LABEL_57:
    nvidia_dlss_rel_source_common_33410();
  }
  return result;
}

__int64 dlaa_36630(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v17[16];
    int v18;
    __int16 v19;
    char v20;
    char gap143_[1];
    __int64 v21;
    char v22;
    char gap153_[3];
    int v23;
    char v24;
    char gap161_[3];
    int v25;
    __int64 v26;
  } v17_;
  _QWORD v27[354];
  __int64 v28;
  _BYTE v29[13];

  v4 = *(_QWORD*)(a2 + 3016);
  if (v4 != 0 && (*(_BYTE*)(a2 + 3024) & 1) == 0) {
    dlaa_36630(a1, v4, a3 & 1);
    v7 = *(_QWORD*)(a2 + 3016);
    if (v7 != 0) {
      nvidia_dlss_rel_source_39180((_QWORD*)(v7 + 168));
      NgxRoutine_430(v7, 3032);
    }
    *(_QWORD*)(a2 + 3016) = 0;
  }
  nvidia_dlss_rel_source_features_dlaa_602f0(a1 + 8, (_QWORD*)a2);
  if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 40LL))(*(_QWORD*)(a1 + 2408),
                                           *(_QWORD*)(a2 + 160), a3 & 1) != 0) {
    return (unsigned int)-1160773630;
  }
  else {
    v9 = *(_QWORD*)(a2 + 48);
    v10 = *(_QWORD*)(a2 + 56);
    v8 = 1;
    v17_.v18 = 0;
    v17_.v19 = 1;
    v17_.v20 = 1;
    v17_.v21 = 0;
    v17_.v22 = 0;
    v17_.v23 = 0;
    v17_.v24 = 0;
    v17_.v25 = 0;
    v17_.v26 = 0;
    v17_.v17[6] = v9;
    v17_.v17[7] = v10;
    v11 = *(_QWORD*)(a2 + 24);
    v17_.v17[2] = *(_QWORD*)(a2 + 16);
    v17_.v17[3] = v11;
    v12 = *(_QWORD*)(a2 + 40);
    v17_.v17[4] = *(_QWORD*)(a2 + 32);
    v17_.v17[5] = v12;
    v13 = *(_QWORD*)(a2 + 8);
    v17_.v17[0] = *(_QWORD*)a2;
    v17_.v17[1] = v13;
    v14 = *(_QWORD*)(a2 + 64);
    memset(&v17_.v17[10], 255, 32);
    v17_.v17[8] = v14;
    v17_.v17[14] = 0x80000000LL;
    v17_.v17[15] = 0xFFFFFFFF00000000LL;
    nvidia_dlss_rel_source_39430((__int64)v27);
    *(_QWORD*)&v29[4] = 0;
    v29[12] = 0;
    v28 = 0;
    memcpy_plt(a2, v17_.v17, 168);
    nvidia_dlss_rel_source_39900((_QWORD*)(a2 + 168), v27);
    v15 = *(_QWORD*)v29;
    *(_QWORD*)(a2 + 3004) = v28;
    *(_QWORD*)(a2 + 3012) = v15;
    *(_QWORD*)(a2 + 3017) = *(_QWORD*)&v29[5];
    nvidia_dlss_rel_source_39180(v27);
  }
  return v8;
}

__int64 dlaa_367a0(__int64* a1, int* a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;
  int v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64** v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v20;
  int v22;
  int v23;
  int v24;
  int v25;
  long double v26;

  v7 = a1[297];
  v8 = a1[299];
  result = 3134193668LL;
  if (v7 == 0 || v8 == 0) {
    return result;
  }
  v11 = *a2;
  v12 = a2[1];
  v13 = v7 - 1;
  v14 = (unsigned int)(*a2 + (v12 << 8));
  if ((v7 & (v7 - 1)) == 0) {
    v15 = ((_DWORD)v7 - 1) & (unsigned int)v14;
    v16 = *(__int64***)(a1[296] + 8 * v15);
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_11;
  }
  v15 = (unsigned int)(v11 + (v12 << 8));
  if (v7 <= v14) {
    v15 = (unsigned int)v14 % (unsigned int)v7;
  }
  v16 = *(__int64***)(a1[296] + 8 * v15);
  if (v16 != nullptr) {
  LABEL_11:
    v17 = *v16;
    if (*v16 == nullptr) {
      return result;
    }
    if ((v7 & v13) == 0) {
      while (1) {
        v20 = v17[1];
        if (v20 == v14) {
          if (*((_DWORD*)v17 + 5) == v12 && *((_DWORD*)v17 + 4) == v11) {
            goto LABEL_33;
          }
        }
        else if ((v20 & v13) != v15) {
          return result;
        }
        v17 = (__int64*)*v17;
        if (v17 == nullptr) {
          return result;
        }
      }
    }
    do {
      v18 = v17[1];
      if (v18 == v14) {
        if (*((_DWORD*)v17 + 5) == v12 && *((_DWORD*)v17 + 4) == v11) {
        LABEL_33:
          v22 = *((_DWORD*)v17 + 9);
          v23 = *((_DWORD*)v17 + 10);
          v24 = *((_DWORD*)v17 + 11);
          v25 = *((_DWORD*)v17 + 12);
          *((_DWORD*)v17 + 11) = a5;
          *((_DWORD*)v17 + 12) = a6;
          *((_DWORD*)v17 + 9) = a3;
          *((_DWORD*)v17 + 10) = a4;
          *((_BYTE*)v17 + 92) = 1;
          result = dlaa_36630((__int64)a1, (__int64)(v17 + 3), 0);
          if ((result & 0xFFF00000) == 0xBAD00000 ||
              (v17[12] = *a1,
               (_DWORD)(result = dlaa_35780((__int64)a1, (__int64)(v17 + 3),
                                            (unsigned int*)v17 + 6, 0, v26)) !=
                   1)) {
            *((_DWORD*)v17 + 11) = v24;
            *((_DWORD*)v17 + 12) = v25;
            *((_DWORD*)v17 + 9) = v22;
            *((_DWORD*)v17 + 10) = v23;
          }
          *((_BYTE*)v17 + 92) = 0;
          return result;
        }
      }
      else {
        if (v18 >= v7) {
          v18 %= v7;
        }
        if (v18 != v15) {
          return result;
        }
      }
      v17 = (__int64*)*v17;
    } while (v17 != nullptr);
  }
  return result;
}

__int64 dlaa_36960(__int64 a1, int* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 result;
  int v7;
  int v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v16;
  __int64 v18;

  v3 = *(_QWORD*)(a1 + 2376);
  v4 = *(_QWORD*)(a1 + 2392);
  result = 3134193668LL;
  if (v3 == 0 || v4 == 0) {
    return result;
  }
  v7 = *a2;
  v8 = a2[1];
  v9 = (_QWORD*)(a1 + 2368);
  v10 = v3 - 1;
  v11 = (unsigned int)(*a2 + (v8 << 8));
  if ((v3 & (v3 - 1)) == 0) {
    v12 = ((_DWORD)v3 - 1) & (unsigned int)v11;
    v13 = *(__int64***)(*v9 + 8 * v12);
    if (v13 == nullptr) {
      return result;
    }
    goto LABEL_11;
  }
  v12 = (unsigned int)(v7 + (v8 << 8));
  if (v3 <= v11) {
    v12 = (unsigned int)v11 % (unsigned int)v3;
  }
  v13 = *(__int64***)(*v9 + 8 * v12);
  if (v13 != nullptr) {
  LABEL_11:
    v14 = *v13;
    if (*v13 == nullptr) {
      return result;
    }
    if ((v3 & v10) == 0) {
      while (1) {
        v18 = v14[1];
        if (v18 == v11) {
          if (*((_DWORD*)v14 + 5) == v8 && *((_DWORD*)v14 + 4) == v7) {
            goto LABEL_32;
          }
        }
        else if ((v18 & v10) != v12) {
          return result;
        }
        v14 = (__int64*)*v14;
        if (v14 == nullptr) {
          return result;
        }
      }
    }
    do {
      v16 = v14[1];
      if (v16 == v11) {
        if (*((_DWORD*)v14 + 5) == v8 && *((_DWORD*)v14 + 4) == v7) {
        LABEL_32:
          dlaa_36630(a1, (__int64)(v14 + 3), *((_BYTE*)v14 + 176));
          nvidia_dlss_rel_source_3aa00(v9, v14);
          return 1;
        }
      }
      else {
        if (v16 >= v3) {
          v16 %= v3;
        }
        if (v16 != v12) {
          return result;
        }
      }
      v14 = (__int64*)*v14;
    } while (v14 != nullptr);
  }
  return result;
}

__int64 dlaa_36ac0(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5,
                   int a6, __int64 a7)
{
  __int64 v7;
  unsigned __int8 v8;
  __int64 v11;
  int v13;
  int v14;
  __int64*** v15;
  __int64** v16;
  unsigned int v17;
  int v20;
  __int64** v22;
  __int64** v23;
  __int64* v24;
  _DWORD* v25;
  int v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  __int64* v32;
  __int64* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned int v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64** v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64*** v44;
  __int64 v45;
  __int64 v46;
  __int64*** v47;
  int v48;

  v7 = a7;
  v8 = a5;
  v11 = a2;
  if (a3 >= -15) {
    v13 = a3 + 15;
  }
  else {
    v13 = a3 + 30;
  }
  if (a4 >= -15) {
    v14 = a4 + 15;
  }
  else {
    v14 = a4 + 30;
  }
  v15 = (__int64***)(a1 + 24LL * a6 + 2424);
  if (*v15 != nullptr) {
    goto LABEL_8;
  }
  v48 = v14;
  v20 = v13;
  v22 = (__int64**)NgxRoutine_420_alt1(80);
  v22[2] = nullptr;
  v22[3] = nullptr;
  v22[4] = nullptr;
  v22[5] = nullptr;
  v23 = v22;
  v22[6] = nullptr;
  v22[7] = nullptr;
  v22[8] = nullptr;
  v22[9] = nullptr;
  v24 = NgxData_952230[0] + 2;
  *((_DWORD*)v22 + 10) = 0;
  *((_DWORD*)v22 + 18) = 0;
  *v22 = v24;
  v22[1] = nullptr;
  v25 = (_DWORD*)NgxRoutine_420_alt1(4);
  *v25 = 1;
  nvidia_dlss_rel_source_3a590(v15);
  v26 = *v25;
  *v15 = v23;
  v15[1] = (__int64**)v25;
  if (v26 != 0) {
    v8 = a5;
    v7 = a7;
    if (*((_DWORD*)v23 + 10) == 9) {
    LABEL_24:
      v27 = v23[6];
      v28 = v23[7];
      goto LABEL_31;
    }
  }
  else {
    v29 = v23[6];
    *v23 = v24;
    if (v29 != nullptr) {
      v30 = v23[8];
      v23[7] = v29;
      NgxRoutine_430(v29, (char*)v30 - (char*)v29);
    }
    v31 = v23[2];
    v8 = a5;
    if (v31 != nullptr) {
      v32 = v23[4];
      v23[3] = v31;
      NgxRoutine_430(v31, (char*)v32 - (char*)v31);
    }
    NgxRoutine_430(v23, 80);
    NgxRoutine_430(v25, 4);
    v23 = *v15;
    v7 = a7;
    if (*((_DWORD*)*v15 + 10) == 9) {
      goto LABEL_24;
    }
  }
  v33 = v23[2];
  *((_DWORD*)v23 + 18) = 0;
  v23[3] = v33;
  v27 = v23[6];
  v23[7] = v27;
  v28 = v27;
LABEL_31:
  v14 = v48;
  v34 = (char*)v28 - (char*)v27;
  v13 = v20;
  *((_DWORD*)v23 + 10) = 9;
  if (v34 > 0x8F) {
    v11 = a2;
    if (v34 != 144) {
      v23[7] = v27 + 18;
    }
    v35 = 9;
    v36 = 9;
  }
  else {
    NgxRoutine_3a180(v23 + 6, 144 - v34);
    v35 = *((unsigned int*)v23 + 10);
    v11 = a2;
    v36 = *((_DWORD*)v23 + 10);
  }
  v37 = v23[2];
  v38 = 0xCCCCCCCCCCCCCCCDLL * (v23[3] - v37);
  if (v35 <= v38) {
    if (v35 < v38) {
      v23[3] = &v37[5 * (unsigned int)v35];
    }
  }
  else {
    NgxRoutine_3a300(v23 + 2, v35 - v38);
    v36 = *((_DWORD*)v23 + 10);
  }
  if (v36 != 0) {
    v39 = v23[2];
    v40 = v23 + 1;
    v41 = v36;
    v42 = v36 & 7;
    if (v36 >= 8) {
      v44 = (__int64***)(v39 + 24);
      v45 = 0;
      v46 = -(__int64)(v41 & 0xFFFFFFF8);
      do {
        *(v44 - 20) = v40;
        *(v44 - 15) = v40;
        v45 -= 8;
        *(v44 - 10) = v40;
        *(v44 - 5) = v40;
        *v44 = v40;
        v44[5] = v40;
        v44[10] = v40;
        v44[15] = v40;
        v44 += 40;
      } while (v46 != v45);
      v43 = -v45;
      if (v42 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v43 = 0;
      if (v42 == 0) {
        goto LABEL_8;
      }
    }
    v47 = (__int64***)&v39[5 * v43 + 4];
    do {
      *v47 = v40;
      v47 += 5;
      --v42;
    } while (v42 != 0);
  }
LABEL_8:
  v16 = *v15;
  v17 = -1160773630;
  if ((*(unsigned int (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2408) + 240LL))(
          *(_QWORD*)(a1 + 2408), *(_QWORD*)(a1 + 2416)) == 0 &&
      (*(unsigned int (**)(_QWORD, _QWORD, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 0,
                                            (unsigned int)a3, v16, 0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 1,
                                            (unsigned int)a4, v16, 0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 2, 0, v16,
                                            0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 3, 0, v16,
                                            0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 4,
                                            (unsigned int)a3, v16, 0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 5,
                                            (unsigned int)a4, v16, 0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 280LL))(
          *(_QWORD*)(a1 + 2408), 6, 16843009 * (unsigned int)v8, v16, 0) == 0 &&
      (*(unsigned int (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
          **(_QWORD**)(a1 + 2408) + 272LL))(*(_QWORD*)(a1 + 2408), 7, 0, v16,
                                            0) == 0 &&
      (unsigned int)nvidia_dlss_a9980(v11, *(_QWORD*)(a1 + 2408), 8, v16) ==
          0) {
    if ((*(unsigned int (**)(_QWORD, __int64**, __int64, _QWORD, _QWORD,
                             __int64))(**(_QWORD**)(a1 + 2408) + 344LL))(
            *(_QWORD*)(a1 + 2408), v16, v7, (unsigned int)(v13 >> 4),
            (unsigned int)(v14 >> 4), 1) != 0) {
      return (unsigned int)-1160773630;
    }
    else {
      return 1;
    }
  }
  return v17;
}

#pragma GCC visibility pop
