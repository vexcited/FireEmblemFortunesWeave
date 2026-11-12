#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvngx_generic_api_ae450(_QWORD* result, __int64, __int64);
__attribute__((swiftcall)) void NgxRoutine_b37a0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void
nvngx_generic_api_ae490(PSEUDO_X8, __int64 result, __int64);
__int64 NGXValidateIdentifier(__int64);
__int64 NgxRoutine_39810(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_420_alt1(_QWORD) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_440(__int64, __int64);
__int64 NgxRoutine_b0d00(__int64, __int64);
__int64 NgxRoutine_b1a80(__int64, __int64*, __int64, _QWORD**);
__int64 NgxRoutine_b1dc0(__int64*);
__int64 NgxRoutine_b1ec0(_QWORD);
__int64 NgxRoutine_b3550(_QWORD*, __int64);
__int64 NgxRoutine_b35d0(__int64*);
__int64 NgxRoutine_b3ef0(_QWORD, _QWORD);
__int64 NgxRoutine_b3ef0_alt1(__int64, __int64) __asm__("NgxRoutine_b3ef0");
__int64 NgxRoutine_b4b90(_QWORD, _QWORD, _QWORD, const char*, ...);
__int64 NgxRoutine_b4b90_alt1(__int64, __int64, __int64, __int64,
                              ...) __asm__("NgxRoutine_b4b90");
__int64 NgxRoutine_baf10(__int64 result);
__int64 NgxRoutine_e2db0();
__int64 NgxRoutine_e2de0();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_ad6d0(unsigned int, __int64);
__int64 nvidia_dlss_ad7f0(__int64 result, unsigned int);
__int64 nvidia_dlss_ad920(__int64*, __int64, _DWORD*);
__int64 nvidia_dlss_ade60(__int64);
__int64 nvngx_generic_api_ae460(int, unsigned __int8*);
__int64 nvngx_vulkan_af240_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD, _QWORD, _QWORD, _DWORD,
                                _QWORD) __asm__("nvngx_vulkan_af240");
__int64 strlen_plt(_QWORD);
__int64 wcsncat_plt(_QWORD, _QWORD, _QWORD);
__int64 wcsncpy_plt(_QWORD, _QWORD, _QWORD);
bool NGXSafeInitializeLog(__int64, __int64, unsigned int, __int64, int);
const char* InvalidParam(int);
extern _UNKNOWN* NgxData_952228;
extern _UNKNOWN NgxData_f5558;
extern _UNKNOWN NgxData_f58f0;
extern __int64 (****NgxData_954670)(int, int, int, int, int, int, int, int,
                                    char);
extern __int64 (*NgxData_94eb40[])();
extern __int64 (*NgxData_94ec60[])();
extern __int64 NgxData_2b70a48;
extern __int64 NgxData_954678;
extern char* NgxData_2669368[];
extern int NgxData_9379f4[];
void NgxRoutine_4008();
void NgxRoutine_4010();
void __attribute__((noreturn)) NgxRoutine_27cb0();
__int64 nvngx_vulkan_aeda0(__int64 a1, __int64 a2, __int64 a3, int a4,
                           __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                           __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                           __int64 a13);
__int64 nvngx_vulkan_af1d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, unsigned int a6);
__int64 nvngx_vulkan_af240(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9);
__int64 nvngx_vulkan_af900(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, int a6, __int64 a7);
__int64 nvngx_vulkan_af960(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9);
__int64 nvngx_vulkan_af9c0(__int64 a1, int a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9);
__int64 nvngx_vulkan_afa40(__int64 a1, int a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           __int64 a9, int a10, __int64 a11);
__int64 nvngx_vulkan_afad0();
__int64 NVSDK_NGX_VULKAN_GetFeatureRequirements_CORE_HOS(__int64 a1, __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4);
__int64 nvngx_vulkan_b0340(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64* a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nvngx_vulkan_b0460();
__int64 NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements_CORE_HOS(
    __int64 a1, __int64 a2, unsigned int* a3, __int64 a4, __int64 a5);

__int64 nvngx_vulkan_aeda0(__int64 a1, __int64 a2, __int64 a3, int a4,
                           __int64* a5, __int64 a6, __int64 a7, __int64 a8,
                           __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                           __int64 a13)
{
  __int64 v17;
  unsigned int v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  const wchar_t* v29;
  const wchar_t* v30;
  unsigned int v31;
  __int64 v32;
  int v33;

  v33 = 0;
  v31 = 0;
  v32 = 0;
  if ((NgxRoutine_39810(&a13, &v33, &v31) & 1) == 0) {
    v18 = -1160773631;
    goto LABEL_6;
  }
  v18 = NGXValidateIdentifier(a2);
  if ((v18 & 0xFFF00000) != 0xBAD00000) {
    if (*a5 != 0) {
      v18 = 1;
      goto LABEL_6;
    }
    v20 = NgxRoutine_420(52328);
    memset_plt(v20, 0, 52328);
    NgxRoutine_b1ec0(v20);
    v22 = a13;
    v23 = v31;
    *a5 = v20;
    *(_QWORD*)(v20 + 35576) = v22;
    *(_DWORD*)(v20 + 32796) = v33;
    if ((_DWORD)v23 != 0) {
      v24 = NgxRoutine_440(v23, 4);
      v25 = v23;
      if (v24 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v25 = 0;
      v24 = 0;
    }
    NgxRoutine_430(*(_QWORD*)(v20 + 32824), v21);
    v26 = v32;
    *(_QWORD*)(v20 + 32824) = v24;
    *(_DWORD*)(v20 + 32816) = v23;
    memcpy_plt(v24, v26, 4 * v25);
  LABEL_12:
    *(_DWORD*)(wcsncpy_plt(v20 + 8, a3, 4096) + 16380) = 0;
    *(_DWORD*)(wcsncat_plt(v20 + 8, &NgxData_f5558, 4096) + 16380) = 0;
    *(_DWORD*)(v20 + 32792) = a4;
    v27 = (_QWORD*)NgxRoutine_420(88);
    NgxRoutine_b3ef0(v27, *NgxData_954670);
    v28 = NgxData_954678;
    v29 = *(const wchar_t**)(v20 + 16400);
    v30 = *(const wchar_t**)(v20 + 16392);
    *(_QWORD*)(v20 + 32800) = v27;
    *v27 = v28 + 16;
    NgxRoutine_b4b90("C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/"
                     "drivers/nvn2/dlss/vulkan/core/core/nvngx_vulkan.cpp",
                     191, "NVSDK_NGX_VULKAN_Init_Validate",
                     "called from module %ls at %ls", v29, v30);
    *(_DWORD*)(v20 + 34880) = nvidia_dlss_ad6d0(0, v20);
    v18 = 1;
    *(_DWORD*)(v20 + 34884) = nvidia_dlss_ad6d0(1u, v20);
    *(_DWORD*)(v20 + 34888) = nvidia_dlss_ad6d0(2u, v20);
    *(_DWORD*)(v20 + 34892) = nvidia_dlss_ad6d0(3u, v20);
    *(_DWORD*)(v20 + 34896) = nvidia_dlss_ad6d0(4u, v20);
    *(_DWORD*)(v20 + 34900) = nvidia_dlss_ad6d0(5u, v20);
    *(_DWORD*)(v20 + 34904) = nvidia_dlss_ad6d0(6u, v20);
    *(_DWORD*)(v20 + 34908) = nvidia_dlss_ad6d0(7u, v20);
    *(_DWORD*)(v20 + 34912) = nvidia_dlss_ad6d0(8u, v20);
    *(_DWORD*)(v20 + 34916) = nvidia_dlss_ad6d0(9u, v20);
    *(_DWORD*)(v20 + 34920) = nvidia_dlss_ad6d0(0xAu, v20);
    *(_DWORD*)(v20 + 34924) = nvidia_dlss_ad6d0(0xBu, v20);
    *(_DWORD*)(v20 + 34928) = nvidia_dlss_ad6d0(0xCu, v20);
    *(_DWORD*)(v20 + 34932) = nvidia_dlss_ad6d0(0xDu, v20);
    *(_DWORD*)(v20 + 34936) = nvidia_dlss_ad6d0(0xEu, v20);
    *(_DWORD*)(v20 + 34940) = nvidia_dlss_ad6d0(0xFu, v20);
    *(_DWORD*)(v20 + 34944) = nvidia_dlss_ad6d0(0x10u, v20);
  }
LABEL_6:
  NgxRoutine_430(v32, v17);
  return v18;
}

__int64 nvngx_vulkan_af1d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, unsigned int a6)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v10;
  __int64 v11;

  v11 = a1;
  v10 = 0;
  v6 = ((__int64 (*)(int*, __int64, __int64, __int64, __int64, _QWORD, _QWORD,
                     _QWORD, _QWORD))nvngx_vulkan_af240_alt1)(&v10, a2, a3, a4,
                                                              a5, 0, 0, a6, 0);
  NgxRoutine_430(0, v7);
  NgxRoutine_430(0, v8);
  return v6;
}

__int64 nvngx_vulkan_af240(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  _QWORD* v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  char* v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  char* v34;
  const char* v35;
  __int64 (*v36)(_QWORD, _QWORD*, __int64, __int64, __int64, _QWORD, _QWORD,
                 _QWORD, _QWORD*);
  int v37;
  __int64 (*v38)(_QWORD, _QWORD*, __int64, __int64, __int64, _QWORD, _QWORD*);
  int v39;
  __int64 (*v40)(_QWORD, _QWORD*, __int64, __int64, __int64, _QWORD);
  int v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  _QWORD* v57;
  unsigned int* v58;
  __int128 v59;
  __int64 v60;
  __int16 v64;
  struct {
    _BYTE v65[16];
    unsigned __int8* v66;
  } v65_;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    char* v69;
  } v67_;
  __int64 v70;
  __int64 v71[2];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_QWORD*)&v59 = a6;
  *((_QWORD*)&v59 + 1) = a7;
  nvngx_generic_api_ae490((void*)((__int64)v65_.v65), (unsigned int)a8, a9),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v64 = nvngx_generic_api_ae460(a8, v65_.v66),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  nvngx_generic_api_ae450(&a9, (__int64)v65_.v65, (__int64)&v64),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (!NGXSafeInitializeLog(a2, (__int64)&NgxData_f58f0, *(_DWORD*)(a9 + 32),
                            *(_QWORD*)(a9 + 24),
                            *(unsigned __int8*)(a9 + 36))) {
    return 3134193679LL;
  }
  v15 = a9;
  result =
      nvngx_vulkan_aeda0((__int64)NgxData_2669368, a1, a2, a8, &NgxData_2b70a48,
                         v12, v13, v14, v52, v53, v54, v55, 0),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((result & 0xFFF00000) != 0xBAD00000) {
    v56 = result;
    v17 = (_QWORD*)NgxData_2b70a48;
    v18 = NgxData_2b70a48 + 52288;
    v19 = *(_BYTE**)(NgxData_2b70a48 + 32800);
    v58 = (unsigned int*)(NgxData_2b70a48 + 32792);
    *(_QWORD*)(NgxData_2b70a48 + 52288) = a3;
    *(_QWORD*)(v18 + 8) = a4;
    *(_QWORD*)(v18 + 16) = a5;
    *(_OWORD*)(v18 + 24) = v59;
    NgxRoutine_e2db0(),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v71[0] = a5;
    v67_.v67 = (__int64)v71;
    *(_DWORD*)(NgxRoutine_b1a80((__int64)(v17 + 4453), v71,
                                (__int64)NgxData_952228, (_QWORD**)&v67_.v67) +
               24) = 1,
               v12 = COERCE_AS(__typeof__(v12),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
               v13 = COERCE_AS(__typeof__(v13),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
               v14 = COERCE_AS(__typeof__(v14),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_e2de0(),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v20 = (_BYTE*)NgxRoutine_420_alt1(88),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    NgxRoutine_b3ef0_alt1((__int64)v20, (__int64)*NgxData_954670),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_QWORD*)v20 = NgxData_94eb40;
    if (v15 != 0) {
      v20[72] = 1;
      if (a8 >= 20) {
        v21 = *(_DWORD*)(v15 + 32);
        v22 = NgxRoutine_b0d00((__int64)v20, (__int64)"Minimum.Logging.Level"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v22 != 0) {
          *(_DWORD*)v22 = 2;
          if ((*(_BYTE*)(v22 + 4) & 1) == 0) {
            *(_BYTE*)(v22 + 4) = v20[72];
          }
          *(_DWORD*)(v22 + 8) = v21;
        }
        (*(void (**)(_BYTE*, const char*, _QWORD))(*(_QWORD*)v20 + 32LL))(
            v20, "Disable.Other.Logging.Sinks", *(unsigned __int8*)(v15 + 36)),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v23 = *(_QWORD*)(v15 + 24);
        v24 = NgxRoutine_b0d00((__int64)v20, (__int64)"Log.Callback"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v24 != 0) {
          *(_DWORD*)v24 = 7;
          if ((*(_BYTE*)(v24 + 4) & 1) == 0) {
            *(_BYTE*)(v24 + 4) = v20[72];
          }
          *(_QWORD*)(v24 + 8) = v23;
        }
      }
      v20[72] = 0;
    }
    v25 = 4105;
    v60 = v15;
    v26 = 0;
    v57 = v20;
    v27 = v17 + 4360;
    while (1) {
      v19[72] = 1;
      NgxRoutine_b3550(v71, (__int64)NgxData_9379f4 + NgxData_9379f4[v26]),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_b3550(&v70, (__int64)".Available"),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_b37a0((void*)((_QWORD**)&v67_.v67), (__int64)v71,
                       (__int64)&v70),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v67_.v67 != 0) {
        v28 = *(char**)(v67_.v67 + 8);
      }
      else {
        v28 = "";
      }
      (*(void (**)(_BYTE*, char*, _QWORD))(*(_QWORD*)v19 + 32LL))(v19, v28, 0),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_b35d0(&v67_.v67),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_b35d0(&v70),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      NgxRoutine_b35d0(v71),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v29 = InvalidParam(v26),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      (*(void (**)(_BYTE*, const char*, _QWORD))(*(_QWORD*)v19 + 24LL))(
          v19, v29, *((unsigned int*)v27 + v26)),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v19[72] = 0;
      if (*((_DWORD*)v27 + v26) == -1160773615) {
        v30 = strlen_plt("NvNGXFeatureDenied"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_75;
        }
        v31 = v30;
        if (v30 >= 0x17) {
          if ((v30 | 7) == 0x17) {
            v33 = 26;
          }
          else {
            v33 = (v30 | 7) + 1;
          }
          v32 = (char*)NgxRoutine_420_alt1(v33),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v67_.v68 = v31;
          v67_.v69 = v32;
          v67_.v67 = v33 | 1;
        }
        else {
          v32 = (char*)&v67_.v67 + 1;
          LOBYTE(v67_.v67) = 2 * v30;
          if (v30 == 0) {
            goto LABEL_56;
          }
        }
        v34 = v32;
        v35 = "NvNGXFeatureDenied";
        goto LABEL_55;
      }
      if (v17[v25] != 0 || v17[v25 + 8] != 0 || v17[v25 + 9] != 0) {
        break;
      }
    LABEL_15:
      ++v26;
      v25 += 15;
      if (v26 == 17) {
        *v57 = NgxData_94ec60;
        NgxRoutine_b1dc0(v57 + 4),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v44 = v57[1];
        if (v44 != 0) {
          v45 = v57[2];
          v46 = v57[1];
          if (v44 != v45) {
            do {
              v47 = *(_QWORD*)(v45 - 8);
              if (v47 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                NgxRoutine_baf10(v47),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              v45 -= 16;
            } while (v45 != v44);
            v46 = v57[1];
          }
          v48 = v57[3];
          v57[2] = v44;
          NgxRoutine_430(v46, v48 - v46),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        NgxRoutine_430(v57, 88),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v49 = NgxData_2b70a48;
        if (NgxData_2b70a48 != 0) {
          v50 = *(_QWORD*)(NgxData_2b70a48 + 32808);
          if (v50 != 0) {
            NgxRoutine_430(v50, 8),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v49 = NgxData_2b70a48;
            *(_QWORD*)(NgxData_2b70a48 + 32808) = 0;
          }
          v51 = *(_QWORD*)(v49 + 32800);
          if (v51 != 0) {
            *(_QWORD*)(NgxData_2b70a48 +
                       32808) =
                (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 136LL))(v51),
                       v12 = COERCE_AS(
                           __typeof__(v12),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                       v13 = COERCE_AS(
                           __typeof__(v13),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                       v14 = COERCE_AS(
                           __typeof__(v14),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
        }
        return v56;
      }
    }
    if (v59 == 0 || v17[v25 + 9] != 0) {
      if (v60 == 0) {
        goto LABEL_38;
      }
    }
    else {
      NgxRoutine_b4b90_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/core/core/nvngx_vulkan.cpp",
          296, (__int64)"NVSDK_NGX_CORE_VULKAN_Init_Ext",
          (__int64)"warning: passed vkGetInstance/DeviceProcAddr to NGX SDK, "
                   "but snippet is out of date...\n"
                   "Falling back to older API."),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v60 == 0) {
        goto LABEL_38;
      }
    }
    if (v17[v25 + 8] == 0) {
      NgxRoutine_b4b90_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/core/core/nvngx_vulkan.cpp",
          301, (__int64)"NVSDK_NGX_CORE_VULKAN_Init_Ext",
          (__int64)"warning: passed NVSDK_NGX_FeatureCommonInfo to NGX SDK, "
                   "but snippet is out of date...\n"
                   "Falling back to older API."),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  LABEL_38:
    v36 = (__int64 (*)(_QWORD, _QWORD*, __int64, __int64, __int64, _QWORD,
                       _QWORD, _QWORD, _QWORD*))v17[v25 + 9],
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v36 != nullptr) {
      v37 =
          v36(*v17, v17 + 1, a3, a4, a5, v59, *((_QWORD*)&v59 + 1), *v58, v57),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      *((_DWORD*)v27 + v26) = v37;
      if ((v37 & 0xFFF00000) != 0xBAD00000) {
        goto LABEL_46;
      }
    }
    else {
      v38 = (__int64 (*)(_QWORD, _QWORD*, __int64, __int64, __int64, _QWORD,
                         _QWORD*))v17[v25 + 8],
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v38 != nullptr) {
        v39 = v38(*v17, v17 + 1, a3, a4, a5, *v58, v57),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        *((_DWORD*)v27 + v26) = v39;
        if ((v39 & 0xFFF00000) != 0xBAD00000) {
          goto LABEL_46;
        }
      }
      else {
        v40 = (__int64 (*)(_QWORD, _QWORD*, __int64, __int64, __int64,
                           _QWORD))v17[v25],
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v40 != nullptr) {
          v41 = v40(*v17, v17 + 1, a3, a4, a5, *v58),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          *((_DWORD*)v27 + v26) = v41;
          if ((v41 & 0xFFF00000) != 0xBAD00000) {
          LABEL_46:
            v42 = strlen_plt("NvNGXFeatureInitSuccess"),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v42 >= 0xFFFFFFFFFFFFFFF7LL) {
            LABEL_75:
              NgxRoutine_27cb0(),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            v31 = v42;
            if (v42 >= 0x17) {
              if ((v42 | 7) == 0x17) {
                v43 = 26;
              }
              else {
                v43 = (v42 | 7) + 1;
              }
              v32 = (char*)NgxRoutine_420_alt1(v43),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v67_.v68 = v31;
              v67_.v69 = v32;
              v67_.v67 = v43 | 1;
            }
            else {
              v32 = (char*)&v67_.v67 + 1;
              LOBYTE(v67_.v67) = 2 * v42;
              if (v42 == 0) {
              LABEL_56:
                v32[v31] = 0;
                nvidia_dlss_ad7f0((__int64)v17, v26),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                if ((v67_.v67 & 1) != 0) {
                  NgxRoutine_430(v67_.v69, v67_.v67 & 0xFFFFFFFFFFFFFFFELL),
                      v12 = COERCE_AS(
                          __typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v13 = COERCE_AS(
                          __typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v14 = COERCE_AS(
                          __typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                }
                goto LABEL_15;
              }
            }
            v35 = "NvNGXFeatureInitSuccess";
            v34 = v32;
          LABEL_55:
            memcpy_plt(v34, v35, v31),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            goto LABEL_56;
          }
        }
      }
    }
    goto LABEL_15;
  }
  return result;
}

__int64 nvngx_vulkan_af900(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, int a6, __int64 a7)
{
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v11;
  __int64 v12;

  v12 = a1;
  v11 = 0;
  v7 = nvngx_vulkan_af240((__int64)&v11, a2, a3, a4, a5, 0, 0, a6, a7);
  NgxRoutine_430(0, v8);
  NgxRoutine_430(0, v9);
  return v7;
}

__int64 nvngx_vulkan_af960(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9)
{
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v13;
  __int64 v14;

  v14 = a1;
  v13 = 0;
  v9 = nvngx_vulkan_af240((__int64)&v13, a2, a3, a4, a5, a6, a7, a8, a9);
  NgxRoutine_430(0, v10);
  NgxRoutine_430(0, v11);
  return v9;
}

__int64 nvngx_vulkan_af9c0(__int64 a1, int a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, int a8,
                           __int64 a9)
{
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;

  v14 = a1;
  v15 = a2;
  v16 = a3;
  v13 = 1;
  v9 = nvngx_vulkan_af240((__int64)&v13, a4, a5, a6, a7, 0, 0, a8, a9);
  NgxRoutine_430(0, v10);
  NgxRoutine_430(0, v11);
  return v9;
}

__int64 nvngx_vulkan_afa40(__int64 a1, int a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           __int64 a9, int a10, __int64 a11)
{
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;

  v16 = a1;
  v17 = a2;
  v18 = a3;
  v15 = 1;
  v11 = nvngx_vulkan_af240((__int64)&v15, a4, a5, a6, a7, a8, a9, a10, a11);
  NgxRoutine_430(0, v12);
  NgxRoutine_430(0, v13);
  return v11;
}

__int64 nvngx_vulkan_afad0()
{
  int v1;

  v1 = 0;
  return nvidia_dlss_ad920(&NgxData_2b70a48, 0, &v1);
}

__int64 NVSDK_NGX_VULKAN_GetFeatureRequirements_CORE_HOS(__int64 a1, __int64 a2,
                                                         unsigned int* a3,
                                                         __int64 a4)
{
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(__int64, __int64, unsigned int*, __int64);
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v25;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = -1160773627;
  if (a1 != 0 && a2 != 0 && a3 != nullptr && a4 != 0) {
    if ((int)a3[1] >= 17) {
      NgxRoutine_b4b90_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/core/core/nvngx_vulkan.cpp",
          652, (__int64)"NVSDK_NGX_VULKAN_GetFeatureRequirements_CORE_HOS",
          (__int64)"error: required feature is not supported by NGX runtime, "
                   "please update display driver"),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return (unsigned int)-1160773620;
    }
    v6 = *a3;
    v7 = *((_QWORD*)a3 + 5);
    v25 = 0;
    v11 = nvngx_vulkan_b0340((__int64)NgxData_2669368, (__int64)(a3 + 2), v7,
                             v6, &v25, 0, 0, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    NgxRoutine_430(0, v12),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    NgxRoutine_430(0, v13),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v11 == 1) {
      v15 = v25;
      if (v25 != 0) {
        v16 = *(__int64 (**)(__int64, __int64, unsigned int*, __int64))(
            v25 + 120LL * a3[1] + 32920),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v16 != nullptr) {
          v17 = v16(a1, a2, a3, a4),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v15 = v25;
          v11 = v17;
          v18 = *(_QWORD*)(v25 + 32800);
          if (v18 == 0) {
          LABEL_12:
            v19 = *(_QWORD*)(v15 + 32808);
            if (v19 != 0) {
              NgxRoutine_430(v19, 8),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v15 = v25;
              *(_QWORD*)(v25 + 32808) = 0;
            }
            NgxRoutine_430(*(_QWORD*)((char*)&NgxRoutine_4010 + v15), v14),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v20 = *(_QWORD*)((char*)&NgxRoutine_4008 + v25);
            *(_QWORD*)((char*)&NgxRoutine_4010 + v25) = 0;
            NgxRoutine_430(v20, v21),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v22 = v25;
            *(_QWORD*)((char*)&NgxRoutine_4008 + v25) = 0;
            nvidia_dlss_ade60(v22),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            NgxRoutine_430(v22, 52288),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return v11;
          }
        }
        else {
          v11 = -1160773614;
          v18 = *(_QWORD*)(v25 + 32800);
          if (v18 == 0) {
            goto LABEL_12;
          }
        }
        NgxRoutine_430(v18, 8),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = v25;
        *(_QWORD*)(v25 + 32800) = 0;
        goto LABEL_12;
      }
      return (unsigned int)-1160773625;
    }
    return v11;
  }
  return v4;
}

__int64 nvngx_vulkan_b0340(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64* a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64 vars18;

  vars18 = a8;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  if ((NgxRoutine_39810(&vars18, &v22, &v20) & 1) != 0) {
    v11 = NGXValidateIdentifier(a2);
    if ((v11 & 0xFFF00000) != 0xBAD00000 && *a5 == 0) {
      v12 = NgxRoutine_420(52288);
      v13 = v12 + 0x8000;
      memset_plt(v12, 0, 52288);
      NgxRoutine_b1ec0(v12);
      v14 = vars18;
      *a5 = v12;
      v15 = v20;
      *(_QWORD*)(v12 + 35576) = v14;
      *(_DWORD*)(v12 + 32796) = v22;
      if ((_DWORD)v15 != 0) {
        v16 = NgxRoutine_440(v15, 4);
        v17 = v15;
        if (v16 == 0) {
          goto LABEL_8;
        }
      }
      else {
        v17 = 0;
        v16 = 0;
      }
      NgxRoutine_430(*(_QWORD*)(v13 + 56), v10);
      v19 = v21;
      *(_QWORD*)(v13 + 56) = v16;
      *(_DWORD*)(v13 + 48) = v15;
      memcpy_plt(v16, v19, 4 * v17);
    }
  }
  else {
    v11 = -1160773631;
  }
LABEL_8:
  NgxRoutine_430(v21, v10);
  return v11;
}

__int64 nvngx_vulkan_b0460() { return 3134193682LL; }

__int64 NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements_CORE_HOS(
    __int64 a1, __int64 a2, unsigned int* a3, __int64 a4, __int64 a5)
{
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (*v18)(__int64, __int64, unsigned int*, __int64, __int64);
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v27;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = -1160773627;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    if ((int)a3[1] >= 17) {
      NgxRoutine_b4b90_alt1(
          (__int64)"C:/dvs/git/dirty/git-master_hos/gpu/drv_secured_g/drivers/"
                   "nvn2/dlss/vulkan/core/core/nvngx_vulkan.cpp",
          807,
          (__int64)"NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements_"
                   "CORE_HOS",
          (__int64)"error: required feature is not supported by NGX runtime, "
                   "please update display driver"),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return (unsigned int)-1160773620;
    }
    v7 = *a3;
    v8 = *((_QWORD*)a3 + 5);
    v27 = 0;
    v13 = nvngx_vulkan_b0340((__int64)NgxData_2669368, (__int64)(a3 + 2), v8,
                             v7, &v27, 0, 0, 0),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    NgxRoutine_430(0, v14),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    NgxRoutine_430(0, v15),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 == 1) {
      v17 = v27;
      if (v27 != 0) {
        v18 = *(__int64 (**)(__int64, __int64, unsigned int*, __int64,
                             __int64))(v27 + 120LL * a3[1] + 32928),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v18 != nullptr) {
          v19 = v18(a1, a2, a3, a4, a5),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v17 = v27;
          v13 = v19;
          v20 = *(_QWORD*)(v27 + 32800);
          if (v20 == 0) {
          LABEL_11:
            v21 = *(_QWORD*)(v17 + 32808);
            if (v21 != 0) {
              NgxRoutine_430(v21, 8),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v23 = COERCE_AS(
                      __typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v17 = v27;
              *(_QWORD*)(v27 + 32808) = 0;
            }
            NgxRoutine_430(*(_QWORD*)((char*)&NgxRoutine_4010 + v17), v16),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v22 = *(_QWORD*)((char*)&NgxRoutine_4008 + v27);
            *(_QWORD*)((char*)&NgxRoutine_4010 + v27) = 0;
            NgxRoutine_430(v22, v23),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v24 = v27;
            *(_QWORD*)((char*)&NgxRoutine_4008 + v27) = 0;
            nvidia_dlss_ade60(v24),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            NgxRoutine_430(v24, 52288),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v23 =
                    COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return v13;
          }
        }
        else {
          v13 = -1160773614;
          v20 = *(_QWORD*)(v27 + 32800);
          if (v20 == 0) {
            goto LABEL_11;
          }
        }
        NgxRoutine_430(v20, 8),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v17 = v27;
        *(_QWORD*)(v27 + 32800) = 0;
        goto LABEL_11;
      }
      return (unsigned int)-1160773625;
    }
    return v13;
  }
  return v5;
}

#pragma GCC visibility pop
