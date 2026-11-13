#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nvrm_surface_query_607fa0(__int64, int);
__int64 NvColorFormatFromString_plt(_QWORD);
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvClose_plt(void);
__int64 NvOsDrvIoctl_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvOsDrvOpen_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsGetCurrentAllocator_plt(void);
__int64 NvRmMemCacheSyncForCpu_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemCacheSyncForDevice_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmSurfaceGetAlignment_plt(_QWORD, _QWORD);
__int64 SdkRoutine_607f20(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nvrm_surface_query_6077c0(__int64 result);
__int64 nvrm_surface_query_6078d0(__int64 result);
__int64 nvrm_surface_query_607910(__int64);
__int64 nvrm_surface_query_607940(__int64, char*);
__int64 nvrm_surface_query_6079e0(__int64, char*);
__int64 nvrm_surface_query_607be0(__int64, char*);
__int64 nvrm_surface_query_607e80(__int64, char*);
__int64 nvrm_surface_query_607f40(__int64, int);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strcmp_plt_alt1(void* this_, const char*) __asm__("strcmp_plt");
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 unplaced_4_629030(_QWORD*, __int64);
int nvrm_surface_query_607de0(__int64, char*);
extern __int64* SdkData_e89a70[4];
extern char* SdkData_e71f28;
extern char* SdkData_e71f58;
extern int SdkData_ea4230;
extern void (*SdkData_ea42b8)(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_ea42b8_alt1)(_QWORD, __int64,
                                   _QWORD) __asm__("SdkData_ea42b8");
extern void (*SdkData_ea42c0)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42c8)(_QWORD, __int64, __int64);
extern void (*SdkData_ea42d0)(_QWORD, __int64, _QWORD);
unsigned int* nvrm_surface_query_6078c0(unsigned int* result);
void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1);
void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) NvOsFree_0(__int64 a1);
__int64 nvidia_5f7a90(void* a1, __int64 a2, const char* a3);
__int64 NvRmSurfaceFromJson(__int64 a1, __int64 a2, unsigned int* a3,
                            __int64 a4, unsigned int a5);
__int64 nvidia_635510(__int64 a1, __int64 a2);

void __attribute__((noreturn)) NvOsAllocAlign_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c0(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsAlloc_0(__int64 a1)
{
  SdkData_ea42b8_alt1(&SdkData_ea42b8_alt1, a1, SdkData_ea42b8_alt1);
}

void __attribute__((noreturn)) NvOsRealloc_0(__int64 a1, __int64 a2)
{
  SdkData_ea42c8(&SdkData_ea42b8, a1, a2);
}

void __attribute__((noreturn)) NvOsFree_0(__int64 a1)
{
  SdkData_ea42d0(&SdkData_ea42b8, a1, SdkData_ea42d0);
}

__int64 nvidia_5f7a90(void* a1, __int64 a2, const char* a3)
{
  unsigned int v4;
  const char* v6;
  const char* v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  char v14[65];
  _BYTE v15[65];
  __int16 v16;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = (unsigned int)a3;
  if ((unsigned int)strcmp_plt(a1, "nvn_no_vsync_capability", a3) != 0 &&
      (unsigned int)strcmp_plt(a1, "0xbaed2s", v6) != 0 &&
      (unsigned int)strcmp_plt(a1, "0xbaed3s", v8) != 0) {
    return 2;
  }
  else {
    v9 = 196614;
    memset_plt((void*)v14, nullptr, 387),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (SdkData_ea4230 == -1) {
      v11 = NvOsDrvOpen_plt("/dev/nvhost-ctrl"),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v11 & 0x80000000) != 0) {
        return v9;
      }
      v12 = -1;
      atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_ea4230,
                                     (unsigned int*)&v12, v11);
      if (v12 != -1) {
        NvOsDrvClose_plt(),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    strcpy(v14, "nv");
    strncpy_plt(v15, a1, 64),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v15[64] = 0;
    if ((unsigned int)NvOsDrvIoctl_plt((unsigned int)SdkData_ea4230,
                                       3246587931LL, v14, 387) == 0) {
      if (v4 >= 0x101) {
        v10 = 257;
      }
      else {
        v10 = v4;
      }
      strncpy_plt(a2, &v16, v10),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      return 0;
    }
  }
  return v9;
}

__int64 NvRmSurfaceFromJson(__int64 a1, __int64 a2, unsigned int* a3,
                            __int64 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  unsigned int v20;
  __int64 v23;
  __int64 v25;
  __int64 v28;
  void* v30;
  void* v32;
  int v33;
  __int64 v34;
  __int64 v37;
  __int64 v38;
  int v39;
  int v41;
  int i;
  __int64 v43;
  const char* v44;
  const char* v46;
  void* v51;
  void* v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  _BOOL4 v66;
  _DWORD* v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD v74[2];
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  int v86[3];

  v74[0] = 0;
  v74[1] = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v75 = 2;
  v10 = 4;
  v81 = NvOsGetCurrentAllocator_plt();
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0xFFFFFFFF00000003LL;
  if (a2 != 0 && a3 != nullptr && a4 != 0 && a5 != 0) {
    v86[0] = 0;
    v11 = a5;
    v12 = NvOsAlloc_plt(a5);
    v13 = v12;
    if (v12 == 0) {
      v10 = 6;
      goto LABEL_12;
    }
    v10 = 1048582;
    memcpy_plt(v12, a4, v11);
    *a3 = 0;
    v14 = (unsigned int*)nvrm_surface_query_6077c0(v13);
    if (v14 != nullptr) {
      v70 = a1;
      v15 = (__int64)v14;
      v69 = (unsigned int)nvrm_surface_query_6078c0(v14);
      v72 = v15;
      v16 = nvrm_surface_query_607910(v15);
      if (v16 == 0 ||
          (v18 = v16, v66 = nvrm_surface_query_607de0(v16, "inflate"),
           (v71 = nvrm_surface_query_607e80(v18, "surfaces")) == 0) ||
          (v20 = SdkRoutine_607f20(v71), *a3 = v20, v20 - 4 < 0xFFFFFFFD)) {
      LABEL_10:
        nvrm_surface_query_6078d0(v72);
        goto LABEL_12;
      }
      memset_plt((void*)a2, nullptr, 88 * v20);
      if ((int)*a3 >= 1) {
        v23 = 0;
        while (1) {
          v68 = v23;
          v67 = nvrm_surface_query_607fa0(v71, v23);
          if (v67 == nullptr) {
            goto LABEL_10;
          }
          v25 = a2 + 88 * v68;
          *(_DWORD*)v25 = nvrm_surface_query_6079e0((__int64)v67, "Width");
          *(_DWORD*)(v25 + 4) =
              nvrm_surface_query_6079e0((__int64)v67, "Height");
          v28 = nvrm_surface_query_607940((__int64)v67, "ColorFormat");
          *(_QWORD*)(v25 + 8) = NvColorFormatFromString_plt(v28);
          v30 = (void*)nvrm_surface_query_607940((__int64)v67, "Layout");
          if (v30 == nullptr) {
            break;
          }
          v32 = v30;
          if ((unsigned int)strcmp_plt_alt1(v30, "Pitch") != 0) {
            if ((unsigned int)strcmp_plt_alt1(v32, "Tiled") != 0) {
              if ((unsigned int)strcmp_plt_alt1(v32, "Blocklinear") != 0) {
                break;
              }
              v34 = 2;
            }
            else {
              v34 = 1;
            }
          }
          else {
            v34 = 0;
          }
          v33 = (int)(&SdkData_e71f28)[2 * v34 + 1];
        LABEL_27:
          *(_DWORD*)(v25 + 16) = v33;
          *(_DWORD*)(v25 + 20) =
              nvrm_surface_query_6079e0((__int64)v67, "Pitch");
          *(_DWORD*)(v25 + 28) =
              nvrm_surface_query_6079e0((__int64)v67, "Offset");
          v37 = nvrm_surface_query_607e80((__int64)v67, "Flags");
          if (v37 == 0) {
            goto LABEL_10;
          }
          v38 = v37;
          v39 = SdkRoutine_607f20(v37);
          if (v39 >= 1) {
            v41 = v39;
            for (i = 0; v41 != i; ++i) {
              v44 = (const char*)nvrm_surface_query_607f40(v38, i);
              if (v44 == nullptr) {
                goto LABEL_10;
              }
              v46 = v44;
              if ((unsigned int)strcmp_plt_alt1((void*)"Compressible", v44) !=
                  0) {
                if ((unsigned int)strcmp_plt_alt1(
                        (void*)"ForceTegraRawSwizzling", v46) != 0) {
                  if ((unsigned int)strcmp_plt_alt1((void*)"VPR", v46) != 0) {
                    continue;
                  }
                  v43 = 1;
                }
                else {
                  v43 = 4;
                }
              }
              else {
                v43 = 2;
              }
              *(_QWORD*)(v25 + 48) |= v43;
            }
          }
          *(_DWORD*)(v25 + 64) = nvrm_surface_query_6079e0(
              (__int64)v67, "CdeHorizontalCompbitsOffset");
          *(_DWORD*)(v25 + 68) = nvrm_surface_query_6079e0(
              (__int64)v67, "CdeVerticalCompbitsOffset");
          *(_DWORD*)(v25 + 72) =
              nvrm_surface_query_6079e0((__int64)v67, "CdeScatterBufferOffset");
          *(_DWORD*)(v25 + 36) =
              nvrm_surface_query_6079e0((__int64)v67, "BlockHeightLog2");
          v51 = (void*)nvrm_surface_query_607940((__int64)v67,
                                                 "DisplayScanFormat");
          if (v51 != nullptr) {
            v53 = v51;
            if ((unsigned int)strcmp_plt_alt1(v51, "Progressive") == 0) {
              v55 = v68;
              v57 = 0;
            LABEL_46:
              v56 = (int)(&SdkData_e71f58)[2 * v57 + 1];
              goto LABEL_47;
            }
            v54 = strcmp_plt_alt1(v53, "Interlaced");
            v55 = v68;
            if (v54 == 0) {
              v57 = 1;
              goto LABEL_46;
            }
            v56 = 0;
          }
          else {
            v55 = v68;
            v56 = 0;
          }
        LABEL_47:
          *(_DWORD*)(v25 + 40) = v56;
          *(_DWORD*)(v25 + 44) =
              nvrm_surface_query_6079e0((__int64)v67, "SecondFieldOffset");
          v59 = nvrm_surface_query_607be0((__int64)v67, "Size");
          *(_QWORD*)(v25 + 56) = v59;
          if (v55 != 0 &&
              (*(_QWORD*)(a2 + 8) != *(_QWORD*)(v25 + 8) ||
               *(_DWORD*)(a2 + 16) != *(_DWORD*)(v25 + 16) ||
               ((*(_DWORD*)(v25 + 48) ^ *(_DWORD*)(a2 + 48)) & 2) != 0 ||
               *(_DWORD*)(a2 + 40) != *(_DWORD*)(v25 + 40) ||
               *(_QWORD*)(a2 + 56) != v59)) {
            goto LABEL_10;
          }
          v23 = v68 + 1;
          if (v68 + 1 >= (int)*a3) {
            goto LABEL_54;
          }
        }
        v33 = 1;
        goto LABEL_27;
      }
    LABEL_54:
      nvrm_surface_query_6078d0(v72);
      v10 = 1;
      if (!v66) {
        v60 = *(unsigned int*)(a2 + 56);
        NvRmSurfaceGetAlignment_plt(a2, v86);
        v76 = v60;
        HIDWORD(v74[1]) = v86[0];
        v75 = 1;
        LODWORD(v77) = 2304;
        v10 = NvRmMemHandleAllocAttr_plt(v70, v74, a2 + 24);
        if (v10 == 0) {
          v61 = *(unsigned int*)(a2 + 24);
          if (*a3 >= 2) {
            v62 = (_DWORD*)(a2 + 112);
            v63 = 1;
            do {
              *v62 = v61;
              v62 += 22;
              ++v63;
            } while (v63 < *a3);
          }
          v64 = *(unsigned int*)(a2 + 28);
          v65 = *(_QWORD*)(a2 + 56);
          v73 = 0;
          v10 = NvRmMemMap_plt(v61, v64, v65, 2, &v73);
          if (v10 == 0) {
            NvRmMemCacheSyncForCpu_plt(*(unsigned int*)(a2 + 24), v73,
                                       *(_QWORD*)(a2 + 56));
            memcpy_plt(v73, a4 + v69 + 1, v60);
            NvRmMemCacheSyncForDevice_plt(*(unsigned int*)(a2 + 24), v73,
                                          *(_QWORD*)(a2 + 56));
            NvRmMemUnmap_plt(*(unsigned int*)(a2 + 24), v73,
                             *(_QWORD*)(a2 + 56));
            goto LABEL_13;
          }
        }
      }
    }
  LABEL_12:
    *a3 = 0;
  LABEL_13:
    NvOsFree_plt(v13);
    NvOsFree_plt(0);
  }
  return v10;
}

__int64 nvidia_635510(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;

  result = unplaced_4_629030((_QWORD*)a1, a2);
  v5 = SdkData_e89a70[0];
  *(_BYTE*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = -1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 32) = a2 + 280;
  *(_QWORD*)(a1 + 40) = 0;
  return result;
}

#pragma GCC visibility pop
