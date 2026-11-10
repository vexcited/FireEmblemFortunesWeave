#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MD5Final_plt(_QWORD, _QWORD);
__int64 MD5Init_plt(_QWORD);
__int64 MD5Update_plt(_QWORD, _QWORD, _QWORD);
__int64 NvColorFormatToString_plt(_QWORD);
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsAtomicCompareExchange32_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFcloseEx_plt(_QWORD);
__int64 NvOsFopen_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFprintf_plt(_QWORD, const char*, ...);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsFwrite_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsVsnprintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmChipGetCapabilityU32_plt(_QWORD, _QWORD);
__int64 NvRmMemReadStrided_plt(void);
__int64 NvRmMemReadStrided_plt_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD,
                                    _QWORD) __asm__("NvRmMemReadStrided_plt");
__int64 NvRmMemRead_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemWriteStrided_plt(void);
__int64 NvRmMemWriteStrided_plt_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD,
                                     _QWORD) __asm__("NvRmMemWriteStrided_plt");
__int64 NvRmMemWrite_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmPrivGetChipIdLimited_plt(void);
__int64 NvRmSurfaceRead_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_608000(void);
__int64 SdkRoutine_608360(void);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nvidia_605f60(int, int, char);
__int64 nvidia_605fc0(__int64, unsigned int, _QWORD*);
__int64 nvidia_605fc0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_605fc0");
__int64 nvidia_606150(__int64, __int64, char);
__int64 nvidia_606150_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_606150");
__int64
    nvrm_surface_query_607510_alt1(_QWORD) __asm__("nvrm_surface_query_607510");
__int64
    nvrm_surface_query_607570_alt1(_QWORD) __asm__("nvrm_surface_query_607570");
__int64 strcmp_plt(void* this_, const char*, const char*);
extern _DWORD SdkData_bb3820[4];
extern int SdkData_ea4450;
__int64 nvrm_surface_query_603d30(__int64 a1);
__int64 nvrm_surface_query_603e00(__int64 a1, unsigned int a2, unsigned int a3,
                                  _DWORD* a4, unsigned int a5, _DWORD* a6);
__int64 nvrm_surface_query_604060(__int64 a1, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5, __int64 a6);
__int64 nvrm_surface_query_604180(_DWORD* a1, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5, __int64 a6);
__int64 nvrm_surface_query_6044e0(_DWORD* a1, unsigned int a2, unsigned int a3,
                                  int a4, int a5, __int64 a6);
__int64 nvrm_surface_query_604960(unsigned int* a1, unsigned int a2,
                                  unsigned int a3, unsigned int a4,
                                  unsigned int a5, __int64 a6);
__int64 nvrm_surface_query_604fe0(__int64 a1, char a2, unsigned int* a3);
__int64 nvrm_surface_query_605160(_DWORD* a1, char a2, __int64 a3, _DWORD* a4);
__int64 nvrm_surface_query_6066f0(__int64 a1, int a2, char a3);
__int64 nvrm_surface_query_606880(__int64 a1, unsigned int a2, int a3);
__int64 nvrm_surface_query_6068a0(__int64 result, unsigned int a2,
                                  unsigned int a3, unsigned int a4,
                                  unsigned int a5, char* a6);
__int64 nvrm_surface_query_607060(__int64 result, unsigned int a2, int a3,
                                  unsigned int a4, int a5, char* a6);
__int64 nvrm_surface_query_6074c0(int a1);
_DWORD* nvrm_surface_query_6074d0(_DWORD* result, int a2);
__int64 nvrm_surface_query_607510(__int64 a1);
__int64 nvrm_surface_query_607570(_DWORD* a1);
__int64 nvrm_surface_query_6075d0(_DWORD* a1, unsigned int a2, int a3);
__int64 nvrm_surface_query_6077c0(__int64 result);
unsigned int* nvrm_surface_query_6078c0(unsigned int* result);
__int64 nvrm_surface_query_6078d0(__int64 result);
__int64 nvrm_surface_query_607910(__int64 a1);
__int64 nvrm_surface_query_607940(__int64 a1, char* a2, const char* a3);
__int64 nvrm_surface_query_6079e0(__int64 a1, char* a2, const char* a3);
__int64 nvrm_surface_query_607be0(__int64 a1, char* a2, const char* a3);
bool nvrm_surface_query_607de0(__int64 a1, char* a2, const char* a3);
__int64 nvrm_surface_query_607e80(__int64 a1, char* a2, const char* a3);
__int64 nvrm_surface_query_607f40(__int64 a1, int a2);
_DWORD* nvrm_surface_query_607fa0(__int64 a1, int a2);
__int64 NvRmSurfaceDumpJson(int* a1, unsigned int a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            char a9);
__int64 NvRmSurfaceComputeMD5(unsigned int* a1, unsigned int a2, _BYTE* a3);

__int64 nvrm_surface_query_603d30(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  unsigned int v4;
  int v5;

  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = 0;
  v5 = 0;
  result = NvRmChipGetCapabilityU32_plt(1281, &v5);
  if ((_DWORD)result == 0) {
    if ((unsigned int)(v5 - 1) < 4) {
      *(_DWORD*)a1 = v5;
      v4 = 0;
      result = NvRmChipGetCapabilityU32_plt(1537, &v4);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v4 < 6) {
        *(_DWORD*)(a1 + 4) = v4;
        v3 = 0;
        result = NvRmChipGetCapabilityU32_plt(3073, &v3);
        if ((_DWORD)result != 0) {
          return result;
        }
        if (v3 < 2) {
          *(_DWORD*)(a1 + 8) = v3;
          return 0;
        }
      }
    }
    return 2;
  }
  return result;
}

__int64 nvrm_surface_query_603e00(__int64 a1, unsigned int a2, unsigned int a3,
                                  _DWORD* a4, unsigned int a5, _DWORD* a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  char v18;
  int v19;

  v6 = *(_DWORD*)(a1 + 36);
  v7 = 65538;
  if (v6 > 5) {
    return v7;
  }
  v8 = *(_DWORD*)(a1 + 20);
  if (v8 > 0x1FFFFFFFu >> v6) {
    return v7;
  }
  v9 = a3 >> (v6 + 3);
  if (((((8 * v8) << v6) * (unsigned __int64)v9) & 0xFFFFFFFF00000000LL) != 0) {
    return 11;
  }
  if (a2 >> 6 > 0x7FFFFFu >> v6) {
    return 11;
  }
  v10 = v9 * v8;
  v11 = a2 >> 6 << 9 << v6;
  v12 = (8 * v10) << v6;
  if (__CFADD__(v12, v11)) {
    return 11;
  }
  v13 = v12 + v11;
  v14 = ((((8 << v6) - 1) & a3) << 6) & 0x7FFFFE00;
  if (__CFADD__(v13, v14)) {
    return 11;
  }
  v16 = v13 + v14;
  if (a4 != nullptr) {
    *a4 = 16 - (a2 & 0xF);
  }
  v18 = (*(_QWORD*)(a1 + 48) & 4LL) != 0;
  if (a5 < 4) {
    v18 = 1;
  }
  v19 = nvidia_605f60(a2, a3, v18);
  if (__CFADD__(v16, v19)) {
    return 11;
  }
  *a6 = v19 + v16;
  return 0;
}

__int64 nvrm_surface_query_604060(__int64 a1, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 result;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;

  result = 4;
  if (a1 != 0 && a6 != 0) {
    if ((*(_DWORD*)(a1 + 24) != 0 || *(_QWORD*)(a1 + 80) != 0) &&
        (*(_DWORD*)(a1 + 40) != 1 ||
         *(_DWORD*)(a1 + 44) > *(_DWORD*)(a1 + 28))) {
      if (*(_DWORD*)a1 >= a4) {
        v8 = *(_DWORD*)(a1 + 4);
        if (v8 >= a5 && a2 < *(_DWORD*)a1 && a3 < v8 &&
            *(_DWORD*)a1 - a4 >= a2 && v8 - a5 >= a3) {
          v9 = *(_QWORD*)(a1 + 8);
          result = 65538;
          if ((_BYTE)v9 != 0) {
            v10 = *(_DWORD*)(a1 + 20);
            if (v10 != 0 &&
                ((v10 * (unsigned __int64)(a5 + a3)) & 0xFFFFFFFF00000000LL) ==
                    0 &&
                (((unsigned __int8)v9 * (unsigned __int64)(a4 + a2)) &
                 0xFF00000000LL) == 0) {
              if ((v9 & 7) != 0 && ((((_BYTE)a2 * (_BYTE)v9) & 7) != 0 ||
                                    (((_BYTE)a4 * (_BYTE)v9) & 7) != 0) ||
                  (v9 & 0x3EFF) == 0x810 && ((a4 | a2) & 1) != 0) {
                return 4;
              }
              else {
                return 0;
              }
            }
          }
        }
      }
    }
    else {
      return 65538;
    }
  }
  return result;
}

__int64 nvrm_surface_query_604180(_DWORD* a1, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5, __int64 a6)
{
  unsigned int v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  __int64 result;
  int v13;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  char v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
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

  v6 = a1[7];
  v7 = a1[11];
  v8 = v7 >= v6;
  v9 = v7 - v6;
  if (v8) {
    v10 = v9;
  }
  else {
    v10 = 0;
  }
  if (__CFADD__(a3, a5)) {
    return 4;
  }
  v13 = a1[10];
  v15 = a5;
  v16 = a3;
  if (a1[6] != 0) {
    if (v13 == 1) {
      if (!__CFADD__(v6, a2)) {
        if (a5 == 0) {
          return 0;
        }
        v17 = v6 + a2;
        v18 = a4;
        while (1) {
          v19 = a1[5];
          if (v19 == 0 || ((v19 * (unsigned __int64)(v16 >> 1)) &
                           0x7FFFFFFF00000000LL) != 0) {
            break;
          }
          v20 = v19 * (v16 >> 1);
          if ((v16 & 1) != 0) {
            if (v20 > ~v10) {
              return 4;
            }
            v20 += v10;
          }
          result = NvRmMemWrite_plt((unsigned int)a1[6], v17 + v20, a6, v18);
          if ((_DWORD)result == 0) {
            a6 += v18;
            --v15;
            ++v16;
            if (v15 != 0) {
              continue;
            }
          }
          return result;
        }
      }
    }
    else if (!__CFADD__(v6, a1[5] * a3 + a2)) {
      return NvRmMemWriteStrided_plt();
    }
    return 4;
  }
  v45 = 0;
  result = nvidia_605fc0((__int64)a1, 2u, &v45);
  if ((_DWORD)result == 0) {
    if (v13 == 1) {
      if (v15 != 0) {
        v23 = v45 + a2;
        while (1) {
          v25 = a1[5];
          if (v25 == 0 || ((v25 * (unsigned __int64)(v16 >> 1)) &
                           0x7FFFFFFF00000000LL) != 0) {
            break;
          }
          v24 = v25 * (v16 >> 1);
          if ((v16 & 1) != 0) {
            if (v24 > ~v10) {
              break;
            }
            v24 += v10;
          }
          memcpy_plt(v23 + v24, a6, a4);
          a6 += a4;
          --v15;
          ++v16;
          if (v15 == 0) {
            goto LABEL_40;
          }
        }
        v26 = 0;
        v27 = 4;
        goto LABEL_41;
      }
    }
    else if (v15 != 0) {
      v28 = v15 & 7;
      v29 = v45 + a2 + a1[5] * v16;
      if (v15 >= 8) {
        v30 = v15 & 0xFFFFFFF8;
        do {
          memcpy_plt(v29, a6, a4);
          v31 = a6 + a4;
          v32 = v29 + (unsigned int)a1[5];
          memcpy_plt(v32, v31, a4);
          v33 = v31 + a4;
          v34 = v32 + (unsigned int)a1[5];
          memcpy_plt(v34, v33, a4);
          v35 = v33 + a4;
          v36 = v34 + (unsigned int)a1[5];
          memcpy_plt(v36, v35, a4);
          v37 = v35 + a4;
          v38 = v36 + (unsigned int)a1[5];
          memcpy_plt(v38, v37, a4);
          v39 = v37 + a4;
          v40 = v38 + (unsigned int)a1[5];
          memcpy_plt(v40, v39, a4);
          v41 = v39 + a4;
          v42 = v40 + (unsigned int)a1[5];
          memcpy_plt(v42, v41, a4);
          v43 = v41 + a4;
          v44 = v42 + (unsigned int)a1[5];
          memcpy_plt(v44, v43, a4);
          a6 = v43 + a4;
          v30 -= 8;
          v29 = v44 + (unsigned int)a1[5];
        } while (v30 != 0);
      }
      for (; v28 != 0; v29 += (unsigned int)a1[5]) {
        memcpy_plt(v29, a6, a4);
        a6 += a4;
        --v28;
      }
    }
  LABEL_40:
    v26 = 1;
    v27 = 0;
  LABEL_41:
    LODWORD(result) = nvidia_606150((__int64)a1, v45, 1);
    if (((unsigned __int8)v26 & ((_DWORD)result != 0)) != 0) {
      return (unsigned int)result;
    }
    else {
      return v27;
    }
  }
  return result;
}

__int64 nvrm_surface_query_6044e0(_DWORD* a1, unsigned int a2, unsigned int a3,
                                  int a4, int a5, __int64 a6)
{
  unsigned int v9;
  __int64 result;
  bool v11;
  unsigned int v14;
  _DWORD* v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  bool v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  _BOOL4 v41;
  _BOOL4 v42;
  bool v43;
  int v44;
  int v45;
  char v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  bool v51;
  bool v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  int v60;
  char v61;
  unsigned int v62;
  int v63;
  __int64 v65;
  unsigned int v66[3];

  v9 = a1[9];
  result = 65538;
  if (v9 <= 5) {
    result = 4;
    v11 = __CFADD__(a3, a5);
    if (!__CFADD__(a2, a4) && !v11) {
      v14 = a3;
      v16 = a1;
      result = nvrm_surface_query_603d30((__int64)v66);
      if ((_DWORD)result == 0) {
        v17 = v16[7];
        v19 = v16[10];
        v18 = v16[11];
        v20 = v18 >= v17;
        v21 = v18 - v17;
        v65 = 0;
        if (v20) {
          v22 = v21;
        }
        else {
          v22 = 0;
        }
        v23 = nvidia_605fc0((__int64)v16, 2u, &v65);
        if (v14 >= a5 + v14) {
        LABEL_56:
          v24 = (__int64)v16;
        }
        else {
          v60 = a5 + v14;
          v62 = v22;
          v63 = v19;
          v24 = (__int64)v16;
          v61 = v19 == 1;
          v25 = a2;
          v26 = a4 + a2;
          if (a2 < a4 + a2) {
            v27 = a6;
            while (2) {
              v28 = v25;
              v29 = v14 >> v61;
              if (v63 == 1) {
                v30 = ((int)(v14 << 31) >> 31) & v62;
              }
              else {
                v30 = 0;
              }
              do {
                v31 = *(_DWORD*)(v24 + 36);
                if (v31 > 5 ||
                    (v32 = *(_DWORD*)(v24 + 20)) > 0x1FFFFFFFu >> v31) {
                  v23 = 65538;
                  goto LABEL_57;
                }
                v33 = v29 >> (v31 + 3);
                if ((((unsigned int)((8 * v32) << v31) *
                      (unsigned __int64)v33) &
                     0xFFFFFFFF00000000LL) != 0) {
                  goto LABEL_53;
                }
                if (v28 >> 6 > 0x7FFFFFu >> v31) {
                  goto LABEL_53;
                }
                v34 = v33 * v32;
                v35 = v28 >> 6 << 9 << v31;
                v36 = (8 * v34) << v31;
                if (__CFADD__(v36, v35)) {
                  goto LABEL_53;
                }
                v37 = 8 << v31;
                v38 = v36 + v35;
                v39 = (((v37 - 1) & v29) << 6) & 0x7FFFFE00;
                if (__CFADD__(v38, v39)) {
                  goto LABEL_53;
                }
                v40 = v38 + v39;
                v41 = v66[0] > 3;
                v42 = (*(_QWORD*)(v24 + 48) & 4LL) == 0;
                v43 = !v41 || !v42;
                v44 = v41 && v42 ? 128 : 192;
                v45 = v43 ? 32 : 64;
                v46 = v43 ? 1 : 2;
                v47 = v43 ? 16 : 48;
                v48 = v47 & (16 * v29) & 0xFFFFFEF0 |
                      (((v28 & 0x20) != 0) << 8) |
                      (v44 & (32 * (v14 >> v61)) | (v28 << v46) & v45) &
                          0xFFFFFFF0 |
                      v28 & 0xF;
                if (__CFADD__(v40, v48)) {
                LABEL_53:
                  v23 = 11;
                  goto LABEL_57;
                }
                v49 = v48 + v40;
                v23 = 11;
                v50 = 16 - (v28 & 0xF);
                v51 = __CFADD__(v49, v30);
                v52 = __CFADD__(v28, v50);
                if (v51 || v52) {
                  goto LABEL_57;
                }
                v53 = v49 + v30;
                v54 = v30;
                v55 = v26;
                if (v26 - v28 >= v50) {
                  v56 = v50;
                }
                else {
                  v56 = v26 - v28;
                }
                if (v65 != 0) {
                  v57 = v27;
                  memcpy_plt(v65 + (unsigned int)v53, v27, v56);
                }
                else {
                  v57 = v27;
                  v58 = NvRmMemWrite_plt(*(unsigned int*)(v24 + 24), v53, v27,
                                         v56);
                  if (v58 != 0) {
                    v23 = v58;
                    goto LABEL_56;
                  }
                }
                v25 = a2;
                v27 = v57 + v56;
                v28 += v50;
                v26 = v55;
                v24 = (__int64)v16;
                v30 = v54;
              } while (v28 < v55);
              ++v14;
              v23 = 0;
              if (v14 != v60) {
                continue;
              }
              break;
            }
          }
        }
      LABEL_57:
        LODWORD(result) = nvidia_606150(v24, v65, 1);
        if (v23 != 0 || (_DWORD)result == 0) {
          return v23;
        }
        else {
          return (unsigned int)result;
        }
      }
    }
  }
  return result;
}

__int64 nvrm_surface_query_604960(unsigned int* a1, unsigned int a2,
                                  unsigned int a3, unsigned int a4,
                                  unsigned int a5, __int64 a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  unsigned int v11;
  __int64 result;
  unsigned int v14;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  char v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
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
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  v6 = a1[7];
  v7 = a1[11];
  v8 = a3;
  v9 = v7 >= v6;
  v10 = v7 - v6;
  if (v9) {
    v11 = v10;
  }
  else {
    v11 = 0;
  }
  if (((a1[5] * (unsigned __int64)a3) & 0xFFFFFFFF00000000LL) != 0) {
    return 4;
  }
  v14 = a1[10];
  v16 = a5;
  if (a1[6] != 0) {
    if (v14 != 1) {
      return NvRmMemReadStrided_plt();
    }
    if (a5 == 0) {
      return 0;
    }
    v17 = v6 + a2;
    v18 = a4;
    while (1) {
      v19 = a1[5];
      if (v19 == 0 ||
          ((v19 * (unsigned __int64)(v8 >> 1)) & 0x7FFFFFFF00000000LL) != 0) {
        break;
      }
      v20 = v19 * (v8 >> 1);
      if ((v8 & 1) != 0) {
        if (v20 > ~v11) {
          return 4;
        }
        v20 += v11;
      }
      result = NvRmMemRead_plt(a1[6], v17 + v20, a6, v18);
      if ((_DWORD)result == 0) {
        a6 += v18;
        --v16;
        ++v8;
        if (v16 != 0) {
          continue;
        }
      }
      return result;
    }
    return 4;
  }
  v50 = 0;
  result = nvidia_605fc0_alt1(a1, 1, &v50);
  if ((_DWORD)result == 0) {
    v23 = a4;
    if (v14 == 1) {
      v24 = v50;
      if (v16 != 0) {
        v25 = v50 + a2;
        v26 = v23;
        while (1) {
          v28 = a1[5];
          if (v28 == 0 || ((v28 * (unsigned __int64)(v8 >> 1)) &
                           0x7FFFFFFF00000000LL) != 0) {
            break;
          }
          v27 = v28 * (v8 >> 1);
          if ((v8 & 1) != 0) {
            if (v27 > ~v11) {
              break;
            }
            v27 += v11;
          }
          memcpy_plt(a6, v25 + v27, v26);
          a6 += v26;
          --v16;
          ++v8;
          if (v16 == 0) {
            goto LABEL_38;
          }
        }
        v29 = 0;
        v30 = 4;
        goto LABEL_39;
      }
    }
    else {
      v24 = v50;
      if (v16 != 0) {
        v31 = v16 & 7;
        v32 = a2 + a1[5] * v8;
        v33 = a4;
        v34 = v50 + v32;
        if (v16 >= 8) {
          v35 = v16 & 0xFFFFFFF8;
          do {
            memcpy_plt(a6, v34, v33);
            v36 = a6 + v33;
            v37 = v34 + a1[5];
            memcpy_plt(v36, v37, v33);
            v38 = v36 + v33;
            v39 = v37 + a1[5];
            memcpy_plt(v38, v39, v33);
            v40 = v38 + v33;
            v41 = v39 + a1[5];
            memcpy_plt(v40, v41, v33);
            v42 = v40 + v33;
            v43 = v41 + a1[5];
            memcpy_plt(v42, v43, v33);
            v44 = v42 + v33;
            v45 = v43 + a1[5];
            memcpy_plt(v44, v45, v33);
            v46 = v44 + v33;
            v47 = v45 + a1[5];
            memcpy_plt(v46, v47, v33);
            v48 = v46 + v33;
            v49 = v47 + a1[5];
            memcpy_plt(v48, v49, v33);
            a6 = v48 + v33;
            v35 -= 8;
            v34 = v49 + a1[5];
          } while (v35 != 0);
        }
        for (; v31 != 0; v34 += a1[5]) {
          memcpy_plt(a6, v34, v33);
          a6 += v33;
          --v31;
        }
      }
    }
  LABEL_38:
    v29 = 1;
    v30 = 0;
  LABEL_39:
    LODWORD(result) = nvidia_606150_alt1(a1, v24, 0);
    if (((unsigned __int8)v29 & ((_DWORD)result != 0)) != 0) {
      return (unsigned int)result;
    }
    else {
      return v30;
    }
  }
  return result;
}

__int64 nvrm_surface_query_604fe0(__int64 a1, char a2, unsigned int* a3)
{
  unsigned int v3;
  __int64 result;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int* v12;
  int v13;
  __int64 v14;
  int v15;
  struct {
    _BYTE v16[4];
    int v17;
    int v18;
  } v16_;

  v3 = *(_DWORD*)(a1 + 36);
  if (v3 > 5) {
    return 65538;
  }
  v5 = *(_DWORD*)(a1 + 16);
  if (v5 != 3) {
    if (v5 == 1) {
      v6 = 4;
    }
    else {
      v6 = 1;
    }
    if (v5 == 2) {
      v7 = 16;
    }
    else {
      v7 = v6;
    }
    v8 = *(_DWORD*)(a1 + 4);
    *a3 = v8;
    if (*(_DWORD*)(a1 + 40) != 1) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v9 = *(_QWORD*)(a1 + 8);
  v12 = a3;
  result = nvrm_surface_query_603d30((__int64)v16_.v16);
  if ((_DWORD)result != 0) {
    return result;
  }
  if ((a2 & 0x10) != 0) {
    a3 = v12;
    v14 = a1;
    if ((BYTE4(v9) & 0x3Fu) - 15 > 7 || (unsigned int)(v16_.v17 - 2) > 3) {
      v13 = 1;
    }
    else {
      v13 = SdkData_bb3820[v16_.v17 - 2];
    }
  }
  else {
    v13 = 1;
    a3 = v12;
    v14 = a1;
  }
  if (v16_.v18 == 1) {
    v15 = 64;
  }
  else {
    v15 = v13;
  }
  if ((a2 & 8) != 0) {
    v7 = v15;
  }
  else {
    v7 = v13;
  }
  if (v7 <= 8 << v3) {
    v7 = 8 << v3;
  }
  v8 = *(_DWORD*)(v14 + 4);
  *a3 = v8;
  if (*(_DWORD*)(v14 + 40) == 1) {
  LABEL_11:
    if (v8 != 0) {
      v8 = (v8 & 1) + (v8 >> 1);
      *a3 = v8;
    }
  }
LABEL_13:
  if (__CFADD__(v8, v7 - 1)) {
    return 10;
  }
  *a3 = (v8 + v7 - 1) & -v7;
  return 0;
}

__int64 nvrm_surface_query_605160(_DWORD* a1, char a2, __int64 a3, _DWORD* a4)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  unsigned int v15;

  v15 = 0;
  result = nvrm_surface_query_604fe0((__int64)a1, a2, &v15);
  if ((_DWORD)result == 0) {
    v7 = a1[5];
    v8 = v15;
    if (((v15 * (unsigned __int64)v7) & 0xFFFFFFFF00000000LL) != 0) {
      return 10;
    }
    v9 = v15 * v7;
    *a4 = v15 * v7;
    v10 = v8 * v7;
    if (a1[10] == 1) {
      v11 = a1[11];
      v12 = a1[7];
      v13 = v11 >= v12;
      v14 = v11 - v12;
      if (!v13) {
        return 10;
      }
      if (__CFADD__(v9, v14)) {
        return 10;
      }
      v10 = v14 + v9;
      *a4 = v14 + v9;
    }
    *a4 = nvrm_surface_query_6075d0(a1, v10, v9);
    return 0;
  }
  return result;
}

__int64 nvrm_surface_query_6066f0(__int64 a1, int a2, char a3)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64 v12;

  HIDWORD(v12) = 0;
  result = NvRmChipGetCapabilityU32_plt(770, (char*)&v12 + 4);
  if (HIDWORD(v12) == 1) {
    v7 = 4096;
  }
  else {
    v7 = 0x2000;
  }
  if (SdkData_ea4450 == -1) {
    v12 = 0;
    NvRmChipGetCapabilityU32_plt(770, (char*)&v12 + 4);
    NvRmChipGetCapabilityU32_plt(515, &v12);
    result = NvOsAtomicCompareExchange32_plt(&SdkData_ea4450, 0xFFFFFFFFLL,
                                             v12 != 0);
    if (SdkData_ea4450 != 1) {
    LABEL_13:
      *(_QWORD*)(a1 + 64) = 0;
      *(_DWORD*)(a1 + 72) = 0;
      return result;
    }
  }
  else if (SdkData_ea4450 != 1) {
    goto LABEL_13;
  }
  if (a2 != 1 || (*(_QWORD*)(a1 + 48) & 2) == 0 || *(_BYTE*)(a1 + 8) != 32 ||
      *(_DWORD*)a1 > v7 || *(_DWORD*)(a1 + 4) > v7) {
    goto LABEL_13;
  }
  HIDWORD(v12) = 0;
  result = nvrm_surface_query_604fe0(a1, a3, (unsigned int*)&v12 + 1);
  if ((_DWORD)result == 0) {
    v8 = *(_DWORD*)(a1 + 28) + HIDWORD(v12) * *(_DWORD*)(a1 + 20);
    if (v8 <= 0xFFFFFF00) {
      v9 = (v8 + 255) & 0xFFFFFF00;
    }
    else {
      v9 = 0;
    }
    *(_DWORD*)(a1 + 64) = v9;
    v10 = v9 + nvrm_surface_query_607510_alt1(a1);
    if (v10 <= 0xFFFFFF00) {
      v9 = (v10 + 255) & 0xFFFFFF00;
    }
    *(_DWORD*)(a1 + 68) = v9;
    result = nvrm_surface_query_607570_alt1(a1);
    if (v9 + (unsigned int)result <= 0xFFFFFF00) {
      v11 = (v9 + result + 255) & 0xFFFFFF00;
    }
    else {
      v11 = v9;
    }
    *(_DWORD*)(a1 + 72) = v11;
  }
  return result;
}

__int64 nvrm_surface_query_606880(__int64 a1, unsigned int a2, int a3)
{
  return (a2 & 0xF | (unsigned __int8)(16 * (a3 & 0xF)) | (a2 >> 4 << 8)) +
         *(_DWORD*)(a1 + 20) * (a3 & 0xFFFFFFF0);
}

__int64 nvrm_surface_query_6068a0(__int64 result, unsigned int a2,
                                  unsigned int a3, unsigned int a4,
                                  unsigned int a5, char* a6)
{
  __int64 v6;
  char* v7;
  unsigned int v8;
  unsigned int v9;
  _DWORD* v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  char v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  __int64* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  char* v54;
  char* v55;
  char* v56;
  unsigned int v57;
  unsigned int v58;
  __int64* v59;
  int v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  unsigned int v75;
  char v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  __int64* v80;
  int v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  __int64 v95;
  unsigned int v96;
  int v97;
  __int64 v98;
  unsigned int v99;
  __int64 v100;

  v6 = *(_QWORD*)(result + 80);
  v7 = a6;
  v8 = a5;
  v9 = a3;
  v10 = (_DWORD*)result;
  v11 = 16 - (a2 & 0xF);
  if (a4 < v11) {
    v11 = a4;
  }
  v12 = a2 & 0xF;
  if ((a2 & 0xF) != 0) {
    v13 = v11;
  }
  else {
    v13 = 0;
  }
  v14 = a4 - v13;
  v15 = (a4 - (_DWORD)v13) & 0xF;
  v98 = (a4 - (unsigned int)v13) >> 4;
  if (v6 == 0) {
    if (a5 != 0) {
      v19 = 16 * a3;
      v20 = v12 | (a2 >> 4 << 8);
      do {
        v21 = v10[5];
        v22 = (v19 & 0xF0 | v20) + v10[7];
        v23 = v22 + v21 * (v9 & 0xFFFFFFF0);
        if ((_DWORD)v13 != 0) {
          result = NvRmMemRead_plt((unsigned int)v10[6],
                                   v22 + v21 * (v9 & 0xFFFFFFF0), v7, v13);
          v7 += v13;
          v23 += v13 + 240;
        }
        if (v14 >= 0x10) {
          result = NvRmMemReadStrided_plt_alt1((unsigned int)v10[6], v23, 256,
                                               v7, 16, 16, v98);
          v23 += (_DWORD)v98 << 8;
          v7 += v14 & 0xFFFFFFF0;
        }
        if ((_DWORD)v15 != 0) {
          result = NvRmMemRead_plt((unsigned int)v10[6], v23, v7, v14 & 0xF);
          v7 += v15;
        }
        --v8;
        v19 += 16;
        ++v9;
      } while (v8 != 0);
    }
    return result;
  }
  if (a5 == 0) {
    return result;
  }
  v16 = a5 - 1;
  v100 = *(_QWORD*)(result + 80);
  v17 = (16 * a2) & 0xFFFFFF00;
  if (v14 > 0xF) {
    v97 = v17 | v12;
    if ((_DWORD)v13 != 0) {
      v24 = (v14 >> 4) & 7;
      v96 = v98 - 1;
      v95 = v6 + 240;
      v25 = v17 + v12;
      v26 = 16 * a3;
      v94 = v25;
      while (1) {
        v27 = v16;
        v28 = v10[5];
        v29 = v6 + ((16 * (v9 & 0xF)) | v97) + v28 * (v9 & 0xFFFFFFF0);
        result = memcpy_plt(v7, v29, v13);
        if (v24 != 0) {
          break;
        }
        v7 += v13;
        v37 = (_QWORD*)(v29 + v13 + 240);
        v32 = v98;
        if (v96 >= 7) {
          goto LABEL_29;
        }
      LABEL_30:
        if ((_DWORD)v15 != 0) {
          result = memcpy_plt(v7, v37, v15);
          v7 += v15;
        }
        v6 = v100;
        ++v9;
        v16 = v27 - 1;
        v26 += 16;
        if (v27 == 0) {
          return result;
        }
      }
      v30 = v24;
      v31 = v95 + v94 + 16 * v28 * (v9 >> 4) + (v26 & 0xF0);
      v32 = v98;
      do {
        v33 = (__int64*)(v31 + v13);
        v34 = &v7[v13];
        --v32;
        v31 += 256;
        v36 = *v33;
        v35 = v33[1];
        v7 += 16;
        --v30;
        *(_QWORD*)v34 = v36;
        *((_QWORD*)v34 + 1) = v35;
      } while (v30 != 0);
      v37 = (_QWORD*)(v31 + v13);
      v7 += v13;
      if (v96 < 7) {
        goto LABEL_30;
      }
      do {
      LABEL_29:
        v38 = v37[1];
        v32 -= 8;
        *(_QWORD*)v7 = *v37;
        *((_QWORD*)v7 + 1) = v38;
        v39 = v37[33];
        *((_QWORD*)v7 + 2) = v37[32];
        *((_QWORD*)v7 + 3) = v39;
        v40 = v37[65];
        *((_QWORD*)v7 + 4) = v37[64];
        *((_QWORD*)v7 + 5) = v40;
        v41 = v37[97];
        *((_QWORD*)v7 + 6) = v37[96];
        *((_QWORD*)v7 + 7) = v41;
        v42 = v37[129];
        *((_QWORD*)v7 + 8) = v37[128];
        *((_QWORD*)v7 + 9) = v42;
        v43 = v37[161];
        *((_QWORD*)v7 + 10) = v37[160];
        *((_QWORD*)v7 + 11) = v43;
        v44 = v37[193];
        *((_QWORD*)v7 + 12) = v37[192];
        *((_QWORD*)v7 + 13) = v44;
        v45 = v37[224];
        v46 = v37[225];
        v37 += 256;
        *((_QWORD*)v7 + 14) = v45;
        *((_QWORD*)v7 + 15) = v46;
        v7 += 128;
      } while (v32 != 0);
      goto LABEL_30;
    }
    if ((_DWORD)v15 != 0) {
      v57 = v98 - 1;
      while (1) {
        v58 = v16;
        v59 = (__int64*)(v6 + ((16 * (v9 & 0xF)) | v97) +
                         v10[5] * (v9 & 0xFFFFFFF0));
        if (((v14 >> 4) & 7) != 0) {
          break;
        }
        v63 = v98;
        if (v57 >= 7) {
          goto LABEL_52;
        }
      LABEL_45:
        ++v9;
        result = memcpy_plt(v7, v59, v14 & 0xF);
        v6 = v100;
        v7 += v15;
        --v16;
        if (v58 == 0) {
          return result;
        }
      }
      v60 = (v14 >> 4) & 7;
      do {
        v61 = *v59;
        v62 = v59[1];
        v59 += 32;
        --v60;
        *(_QWORD*)v7 = v61;
        *((_QWORD*)v7 + 1) = v62;
        v7 += 16;
      } while (v60 != 0);
      v63 = v98 & 0xFFFFFF8;
      if (v57 < 7) {
        goto LABEL_45;
      }
      do {
      LABEL_52:
        v64 = v59[1];
        v63 -= 8;
        *(_QWORD*)v7 = *v59;
        *((_QWORD*)v7 + 1) = v64;
        v65 = v59[33];
        *((_QWORD*)v7 + 2) = v59[32];
        *((_QWORD*)v7 + 3) = v65;
        v66 = v59[65];
        *((_QWORD*)v7 + 4) = v59[64];
        *((_QWORD*)v7 + 5) = v66;
        v67 = v59[97];
        *((_QWORD*)v7 + 6) = v59[96];
        *((_QWORD*)v7 + 7) = v67;
        v68 = v59[129];
        *((_QWORD*)v7 + 8) = v59[128];
        *((_QWORD*)v7 + 9) = v68;
        v69 = v59[161];
        *((_QWORD*)v7 + 10) = v59[160];
        *((_QWORD*)v7 + 11) = v69;
        v70 = v59[193];
        *((_QWORD*)v7 + 12) = v59[192];
        *((_QWORD*)v7 + 13) = v70;
        v71 = v59[224];
        v72 = v59[225];
        v59 += 256;
        *((_QWORD*)v7 + 14) = v71;
        *((_QWORD*)v7 + 15) = v72;
        v7 += 128;
      } while (v63 != 0);
      goto LABEL_45;
    }
    while (1) {
      v79 = v16;
      v80 = (__int64*)(v6 + ((16 * (v9 & 0xF)) | v97) +
                       *(_DWORD*)(result + 20) * (v9 & 0xFFFFFFF0));
      if (((v14 >> 4) & 7) != 0) {
        break;
      }
      v84 = (a4 - (unsigned int)v13) >> 4;
      if (v14 >= 0x80) {
        goto LABEL_71;
      }
    LABEL_64:
      ++v9;
      --v16;
      if (v79 == 0) {
        return result;
      }
    }
    v81 = (v14 >> 4) & 7;
    do {
      v82 = *v80;
      v83 = v80[1];
      v80 += 32;
      --v81;
      *(_QWORD*)v7 = v82;
      *((_QWORD*)v7 + 1) = v83;
      v7 += 16;
    } while (v81 != 0);
    v84 = v98 & 0xFFFFFF8;
    if (v14 < 0x80) {
      goto LABEL_64;
    }
    do {
    LABEL_71:
      v85 = v80[1];
      v84 -= 8;
      *(_QWORD*)v7 = *v80;
      *((_QWORD*)v7 + 1) = v85;
      v86 = v80[33];
      *((_QWORD*)v7 + 2) = v80[32];
      *((_QWORD*)v7 + 3) = v86;
      v87 = v80[65];
      *((_QWORD*)v7 + 4) = v80[64];
      *((_QWORD*)v7 + 5) = v87;
      v88 = v80[97];
      *((_QWORD*)v7 + 6) = v80[96];
      *((_QWORD*)v7 + 7) = v88;
      v89 = v80[129];
      *((_QWORD*)v7 + 8) = v80[128];
      *((_QWORD*)v7 + 9) = v89;
      v90 = v80[161];
      *((_QWORD*)v7 + 10) = v80[160];
      *((_QWORD*)v7 + 11) = v90;
      v91 = v80[193];
      *((_QWORD*)v7 + 12) = v80[192];
      *((_QWORD*)v7 + 13) = v91;
      v92 = v80[224];
      v93 = v80[225];
      v80 += 256;
      *((_QWORD*)v7 + 14) = v92;
      *((_QWORD*)v7 + 15) = v93;
      v7 += 128;
    } while (v84 != 0);
    goto LABEL_64;
  }
  if ((_DWORD)v13 != 0) {
    if ((a5 & 1) == 0) {
      v18 = a5 - 1;
      if (a5 == 1) {
        return result;
      }
      goto LABEL_57;
    }
    v9 = a3 + 1;
    v73 = v6 + (v12 | (16 * (a3 & 0xF)) | v17) +
          *(_DWORD*)(result + 20) * (a3 & 0xFFFFFFF0);
    result = memcpy_plt(a6, v73, v13);
    v7 += v13;
    if ((_DWORD)v15 != 0) {
      result = memcpy_plt(v7, v73 + v13 + 240, v15);
      v7 += v15;
    }
    v6 = v100;
    v18 = v8 - 2;
    if (v16 != 0) {
    LABEL_57:
      v74 = v12 | v17;
      v75 = v18 + 1;
      v76 = 16 * v9;
      do {
        v77 = v6 + (v76 & 0xF0 | v74) + v10[5] * (v9 & 0xFFFFFFF0);
        memcpy_plt(v7, v77, v13);
        if ((_DWORD)v15 != 0) {
          memcpy_plt(&v7[v13], v77 + v13 + 240, v15);
        }
        v78 =
            v100 + ((v76 + 16) & 0xF0 | v74) + v10[5] * ((v9 + 1) & 0xFFFFFFF0);
        result = memcpy_plt(&v7[v13 + v15], v78, v13);
        if ((_DWORD)v15 != 0) {
          result = memcpy_plt(&v7[2 * v13 + v15], v78 + v13 + 240, v15);
        }
        v6 = v100;
        v75 -= 2;
        v76 += 32;
        v9 += 2;
        v7 += 2 * v13 + 2 * v15;
      } while (v75 != 0);
    }
  }
  else if ((_DWORD)v15 != 0) {
    v47 = a5 & 3;
    if ((a5 & 3) != 0) {
      v99 = (16 * a2) & 0xFFFFFF00;
      v48 = v12 | v17;
      v49 = 16 * a3;
      v16 = ~v47 + a5;
      do {
        v50 = v9++ & 0xFFFFFFF0;
        result = memcpy_plt(v7, v6 + (v49 & 0xF0 | v48) + v10[5] * v50, v15);
        v6 = v100;
        v7 += v15;
        v49 += 16;
        --v47;
      } while (v47 != 0);
      v17 = v99;
    }
    if (v8 >= 4) {
      v51 = 16 * v9;
      v52 = -1;
      v53 = v12 | v17;
      do {
        memcpy_plt(v7,
                   v6 + (v51 & 0xF0 | v53) +
                       v10[5] * ((v9 + v52 + 1) & 0xFFFFFFF0),
                   v15);
        v54 = &v7[v15];
        memcpy_plt(v54,
                   v100 + (((_BYTE)v51 + 16) & 0xF0 | v53) +
                       v10[5] * ((v9 + v52 + 2) & 0xFFFFFFF0),
                   v15);
        v55 = &v54[v15];
        memcpy_plt(v55,
                   v100 + (((_BYTE)v51 + 32) & 0xF0 | v53) +
                       v10[5] * ((v9 + v52 + 3) & 0xFFFFFFF0),
                   v15);
        v56 = &v55[v15];
        result = memcpy_plt(v56,
                            v100 + (((_BYTE)v51 + 48) & 0xF0 | v53) +
                                v10[5] * ((v9 + v52 + 4) & 0xFFFFFFF0),
                            v15);
        v6 = v100;
        v52 += 4;
        v51 += 64;
        v7 = &v56[v15];
      } while (v16 != v52);
    }
  }
  return result;
}

__int64 nvrm_surface_query_607060(__int64 result, unsigned int a2, int a3,
                                  unsigned int a4, int a5, char* a6)
{
  int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  unsigned int v40;
  int v41;
  int v42;
  unsigned int v43;
  char v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  __int64 v51;

  v7 = a5;
  v8 = a3;
  v9 = result;
  if (a4 >= 16 - (a2 & 0xF)) {
    v10 = 16 - (a2 & 0xF);
  }
  else {
    v10 = a4;
  }
  v11 = a2 & 0xF;
  if ((a2 & 0xF) != 0) {
    v12 = v10;
  }
  else {
    v12 = 0;
  }
  v13 = a4 - v12;
  v14 = (a4 - (_DWORD)v12) & 0xF;
  v51 = (a4 - (unsigned int)v12) >> 4;
  if (*(_DWORD*)(result + 24) == 0) {
    if (a5 == 0) {
      return result;
    }
    v21 = v11 | (a2 >> 4 << 8);
    v49 = v51 - 1;
    while (1) {
      v22 = *(_QWORD*)(v9 + 80);
      v23 = ((16 * (v8 & 0xF)) | v21) + *(_DWORD*)(v9 + 20) * (v8 & 0xFFFFFFF0);
      v24 = (_QWORD*)(v22 + v23);
      if ((_DWORD)v12 != 0) {
        result = memcpy_plt(v22 + v23, a6, v12);
        v24 = (_QWORD*)((char*)v24 + v12);
        a6 += v12 + 240;
      }
      if (v13 >= 0x10) {
        if (((v13 >> 4) & 7) != 0) {
          break;
        }
        v28 = v51;
        if (v49 >= 7) {
          goto LABEL_25;
        }
      }
    LABEL_26:
      if ((_DWORD)v14 != 0) {
        result = memcpy_plt(v24, a6, v13 & 0xF);
        a6 += v14;
      }
      --v7;
      ++v8;
      if (v7 == 0) {
        return result;
      }
    }
    v25 = (v13 >> 4) & 7;
    do {
      v26 = *(_QWORD*)a6;
      v27 = *((_QWORD*)a6 + 1);
      a6 += 16;
      --v25;
      *v24 = v26;
      v24[1] = v27;
      v24 += 32;
    } while (v25 != 0);
    v28 = v51 & 0xFFFFFF8;
    if (v49 < 7) {
      goto LABEL_26;
    }
    do {
    LABEL_25:
      v29 = *((_QWORD*)a6 + 1);
      v28 -= 8;
      *v24 = *(_QWORD*)a6;
      v24[1] = v29;
      v30 = *((_QWORD*)a6 + 3);
      v24[32] = *((_QWORD*)a6 + 2);
      v24[33] = v30;
      v31 = *((_QWORD*)a6 + 4);
      v24[65] = *((_QWORD*)a6 + 5);
      v24[64] = v31;
      v32 = *((_QWORD*)a6 + 6);
      v24[97] = *((_QWORD*)a6 + 7);
      v24[96] = v32;
      v33 = *((_QWORD*)a6 + 8);
      v24[129] = *((_QWORD*)a6 + 9);
      v24[128] = v33;
      v34 = *((_QWORD*)a6 + 10);
      v24[161] = *((_QWORD*)a6 + 11);
      v24[160] = v34;
      v35 = *((_QWORD*)a6 + 12);
      v24[193] = *((_QWORD*)a6 + 13);
      v24[192] = v35;
      v36 = *((_QWORD*)a6 + 14);
      v37 = *((_QWORD*)a6 + 15);
      a6 += 128;
      v24[225] = v37;
      v24[224] = v36;
      v24 += 256;
    } while (v28 != 0);
    goto LABEL_26;
  }
  if (a5 != 0) {
    v15 = (16 * a2) & 0xFFFFFF00;
    if (v13 > 0xF) {
      v38 = v13 & 0xFFFFFFF0;
      if ((_DWORD)v12 != 0) {
        v50 = v11 | v15;
        v39 = 16 * a3;
        do {
          v40 = (v39 & 0xF0 | v50) + *(_DWORD*)(v9 + 20) * (v8 & 0xFFFFFFF0) +
                *(_DWORD*)(v9 + 28);
          NvRmMemWrite_plt(*(unsigned int*)(v9 + 24), v40, a6, v12);
          result = NvRmMemWriteStrided_plt_alt1(*(unsigned int*)(v9 + 24),
                                                (_DWORD)v12 + 240 + v40, 256,
                                                &a6[v12], 16, 16, v51);
          if ((_DWORD)v14 != 0) {
            result =
                NvRmMemWrite_plt(*(unsigned int*)(v9 + 24),
                                 v40 + (_DWORD)v12 + 240 + ((_DWORD)v51 << 8),
                                 &a6[v38 + v12], v14);
          }
          --v7;
          v39 += 16;
          ++v8;
          a6 += v38 + v12 + v14;
        } while (v7 != 0);
      }
      else {
        v44 = 16 * a3;
        v45 = v11 | v15;
        do {
          v46 = (v44 & 0xF0 | v45) + *(_DWORD*)(v9 + 20) * (v8 & 0xFFFFFFF0) +
                *(_DWORD*)(v9 + 28);
          result = NvRmMemWriteStrided_plt_alt1(*(unsigned int*)(v9 + 24), v46,
                                                256, a6, 16, 16, v51);
          if ((_DWORD)v14 != 0) {
            result = NvRmMemWrite_plt(*(unsigned int*)(v9 + 24),
                                      v46 + ((_DWORD)v51 << 8), &a6[v38], v14);
          }
          --v7;
          a6 += v38 + v14;
          v44 += 16;
          ++v8;
        } while (v7 != 0);
      }
    }
    else if ((_DWORD)v12 != 0) {
      v16 = v15 | v11;
      if ((_DWORD)v14 != 0) {
        v17 = 16 * a3;
        do {
          v18 = v8++ & 0xFFFFFFF0;
          v19 = (v17 & 0xF0 | v16) + *(_DWORD*)(v9 + 20) * v18 +
                *(_DWORD*)(v9 + 28);
          NvRmMemWrite_plt(*(unsigned int*)(v9 + 24), v19, a6, v12);
          v20 = &a6[v12];
          result = NvRmMemWrite_plt(*(unsigned int*)(v9 + 24),
                                    (_DWORD)v12 + 240 + v19, v20, v14);
          a6 = &v20[v14];
          --v7;
          v17 += 16;
        } while (v7 != 0);
      }
      else {
        v47 = 16 * a3;
        do {
          v48 = v8++ & 0xFFFFFFF0;
          result =
              NvRmMemWrite_plt(*(unsigned int*)(v9 + 24),
                               (v47 & 0xF0 | v16) + *(_DWORD*)(v9 + 20) * v48 +
                                   *(_DWORD*)(v9 + 28),
                               a6, v12);
          a6 += v12;
          --v7;
          v47 += 16;
        } while (v7 != 0);
      }
    }
    else if ((_DWORD)v14 != 0) {
      v41 = 16 * a3;
      v42 = v11 | v15;
      do {
        v43 = v8++ & 0xFFFFFFF0;
        result =
            NvRmMemWrite_plt(*(unsigned int*)(v9 + 24),
                             (v41 & 0xF0 | v42) + *(_DWORD*)(v9 + 20) * v43 +
                                 *(_DWORD*)(v9 + 28),
                             a6, v13 & 0xF);
        a6 += v14;
        --v7;
        v41 += 16;
      } while (v7 != 0);
    }
  }
  return result;
}

__int64 nvrm_surface_query_6074c0(int a1) { return (a1 + 63) & 0xFFFFFFC0; }

_DWORD* nvrm_surface_query_6074d0(_DWORD* result, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  v2 = result[17];
  if (*((_QWORD*)result + 8) != 0) {
    v3 = result[7];
    v4 = result[16] + a2 - v3;
    v5 = a2 - v3;
    result[16] = v4;
    result[17] = v5 + v2;
    result[18] += v5;
  }
  return result;
}

__int64 nvrm_surface_query_607510(__int64 a1)
{
  char v2;
  int v4;

  v4 = 0;
  NvRmChipGetCapabilityU32_plt(770, &v4);
  if (v4 == 1) {
    v2 = 7;
  }
  else {
    v2 = 8;
  }
  return ((((unsigned int)(*(_DWORD*)(a1 + 4) + 7) >> 3) + 7) & 0x3FFFFFF8)
         << v2;
}

__int64 nvrm_surface_query_607570(_DWORD* a1)
{
  char v2;
  int v4;

  v4 = 0;
  NvRmChipGetCapabilityU32_plt(770, &v4);
  if (v4 == 1) {
    v2 = 7;
  }
  else {
    v2 = 8;
  }
  return ((((unsigned int)(*a1 + 7) >> 3) + 7) & 0x3FFFFFF8) << v2;
}

__int64 nvrm_surface_query_6075d0(_DWORD* a1, unsigned int a2, int a3)
{
  int v6;
  char v7;
  unsigned int v8;
  char v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v14;
  unsigned int v15;

  v14 = 0;
  NvRmChipGetCapabilityU32_plt(770, &v14);
  if (v14 == 1) {
    v6 = 20480;
  }
  else {
    v6 = 0;
  }
  if (a1[16] != 0) {
    v15 = 0;
    NvRmChipGetCapabilityU32_plt(770, &v15);
    v7 = v15 == 1 ? 7 : 8;
    v8 = a1[16] + v6 - a1[7] +
         (((((unsigned int)(a1[1] + 7) >> 3) + 7) & 0x3FFFFFF8) << v7);
    if (a2 <= v8) {
      a2 = v8;
    }
  }
  if (a1[17] != 0) {
    v15 = 0;
    NvRmChipGetCapabilityU32_plt(770, &v15);
    v9 = v15 == 1 ? 7 : 8;
    v10 = a1[17] + v6 - a1[7] +
          (((((unsigned int)(*a1 + 7) >> 3) + 7) & 0x3FFFFFF8) << v9);
    if (a2 <= v10) {
      a2 = v10;
    }
  }
  if (a1[18] != 0) {
    v15 = 0;
    NvRmChipGetCapabilityU32_plt(770, &v15);
    if (v15 >= 2) {
      v11 = (((unsigned int)(a3 + 4095) >> 12) + 7) >> 3;
    }
    else {
      v11 = 0;
    }
    v12 = a1[18] + v6 + v11 - a1[7];
    if (a2 <= v12) {
      return v12;
    }
  }
  return a2;
}

__int64 nvrm_surface_query_6077c0(__int64 result)
{
  unsigned __int8* v1;
  int v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  __int64 v7;
  unsigned int v9;
  __int64 v10;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;

  if (result != 0) {
    v1 = (unsigned __int8*)result;
    result = NvOsAlloc_plt(32);
    if (result != 0) {
      v2 = 1;
      v3 = 0;
      *(_DWORD*)result = 0;
      *(_QWORD*)(result + 8) = 0;
      *(_QWORD*)(result + 16) = v1;
      *(_QWORD*)(result + 24) = 0;
      v4 = v1 + 1;
      v5 = *v1;
      v6 = v5 > 0x20;
      v7 = (1LL << v5) & 0x100000600LL;
      if (!v6 && v7 != 0) {
        do {
          *(_DWORD*)result = v2;
          v3 += 0x100000000LL;
          ++v2;
          v9 = *v4++;
          v10 = (1LL << v9) & 0x100000600LL;
        } while (v9 <= 0x20 && v10 != 0);
      }
      v12 = v1[v3 >> 32];
      if (v12 == 91) {
        v15 = result;
        v16 = SdkRoutine_608360();
        result = v15;
        *(_DWORD*)(v15 + 4) = v16;
        if (v16 != -1) {
          return result;
        }
      }
      else if (v12 == 123) {
        v13 = result;
        v14 = SdkRoutine_608000();
        result = v13;
        *(_DWORD*)(v13 + 4) = v14;
        if (v14 != -1) {
          return result;
        }
      }
      else {
        *(_DWORD*)(result + 4) = -1;
      }
      NvOsFree_plt(result);
      return 0;
    }
  }
  return result;
}

unsigned int* nvrm_surface_query_6078c0(unsigned int* result)
{
  if (result != nullptr) {
    return (unsigned int*)*result;
  }
  return result;
}

__int64 nvrm_surface_query_6078d0(__int64 result)
{
  __int64 v1;

  if (result != 0) {
    if (*(_QWORD*)(result + 24) != 0) {
      v1 = result;
      NvOsFree_plt(*(_QWORD*)(result + 24));
      result = v1;
    }
    return NvOsFree_plt(result);
  }
  return result;
}

__int64 nvrm_surface_query_607910(__int64 a1)
{
  if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + *(int*)(a1 + 4)) == 2) {
    return *(_QWORD*)(a1 + 24) + *(int*)(a1 + 4);
  }
  else {
    return 0;
  }
}

__int64 nvrm_surface_query_607940(__int64 a1, char* a2, const char* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  void* v7;

  v3 = *(_DWORD*)(a1 + 32);
  if (v3 == -1) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v6 = v5 + v3;
    v7 = *(void**)(v6 + 8);
    if (v7 != nullptr && (unsigned int)strcmp_plt(v7, a2, a3) == 0) {
      break;
    }
    v3 = *(_DWORD*)(v6 + 16);
    if (v3 == -1) {
      return 0;
    }
  }
  if (*(_DWORD*)v6 != 0) {
    return 0;
  }
  return *(_QWORD*)(v6 + 32);
}

__int64 nvrm_surface_query_6079e0(__int64 a1, char* a2, const char* a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_DWORD*)(a1 + 32);
  if (v3 == -1) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v6 = v5 + v3;
    v7 = *(void**)(v6 + 8);
    if (v7 != nullptr && (unsigned int)strcmp_plt(v7, a2, a3) == 0) {
      break;
    }
    v3 = *(_DWORD*)(v6 + 16);
    if (v3 == -1) {
      return 0;
    }
  }
  if (*(_DWORD*)v6 != 1) {
    return 0;
  }
  v8 = *(_QWORD*)(v6 + 48);
  if (v8 == 0) {
    return 0;
  }
  if (v8 == 1) {
    return *(_QWORD*)(v6 + 32);
  }
  v10 = *(_QWORD*)(v6 + 32);
  v11 = v8 - 2;
  if (v8 < 2) {
    if (v8 == -1) {
      v13 = *(_QWORD*)(v6 + 32);
    }
    else {
      if ((*(_QWORD*)(v6 + 48) & 7LL) == 7) {
        v12 = *(_QWORD*)(v6 + 48);
        v13 = *(_QWORD*)(v6 + 32);
      }
      else {
        v17 = 1;
        v12 = *(_QWORD*)(v6 + 48);
        v13 = *(_QWORD*)(v6 + 32);
        do {
          v13 *= v10;
          v18 = *(_QWORD*)(v6 + 48) & 7LL ^ v17;
          ++v12;
          ++v17;
        } while (v18 != 7);
      }
      if ((unsigned __int64)v8 <= 0xFFFFFFFFFFFFFFF7LL) {
        v19 = v10 * v10;
        v20 = v12 + 1;
        v21 = v19 * v19 * v19 * v19;
        do {
          v13 *= v21;
          v20 += 8;
        } while (v20 != 0);
      }
    }
    return (__int64)(float)(0x1.0000000000000p+0f / (float)v13);
  }
  else {
    if ((*(_QWORD*)(v6 + 48) & 7LL) == 1) {
      result = *(_QWORD*)(v6 + 32);
    }
    else {
      result = *(_QWORD*)(v6 + 32);
      v14 = ((_BYTE)v8 - 1) & 7;
      do {
        result *= v10;
        --v8;
        --v14;
      } while (v14 != 0);
    }
    if (v11 >= 7) {
      v15 = v8 - 2;
      v16 = v10 * v10 * v10 * v10 * v10 * v10 * v10 * v10;
      do {
        result *= v16;
        v15 -= 8LL;
      } while (v15 < 0xFFFFFFFFFFFFFFFDLL);
    }
  }
  return result;
}

__int64 nvrm_surface_query_607be0(__int64 a1, char* a2, const char* a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_DWORD*)(a1 + 32);
  if (v3 == -1) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v6 = v5 + v3;
    v7 = *(void**)(v6 + 8);
    if (v7 != nullptr && (unsigned int)strcmp_plt(v7, a2, a3) == 0) {
      break;
    }
    v3 = *(_DWORD*)(v6 + 16);
    if (v3 == -1) {
      return 0;
    }
  }
  if (*(_DWORD*)v6 != 1) {
    return 0;
  }
  v8 = *(_QWORD*)(v6 + 48);
  if (v8 == 0) {
    return 0;
  }
  if (v8 == 1) {
    return *(_QWORD*)(v6 + 32);
  }
  v10 = *(_QWORD*)(v6 + 32);
  v11 = v8 - 2;
  if (v8 < 2) {
    if (v8 == -1) {
      v13 = *(_QWORD*)(v6 + 32);
    }
    else {
      if ((*(_QWORD*)(v6 + 48) & 7LL) == 7) {
        v12 = *(_QWORD*)(v6 + 48);
        v13 = *(_QWORD*)(v6 + 32);
      }
      else {
        v17 = 1;
        v12 = *(_QWORD*)(v6 + 48);
        v13 = *(_QWORD*)(v6 + 32);
        do {
          v13 *= v10;
          v18 = *(_QWORD*)(v6 + 48) & 7LL ^ v17;
          ++v12;
          ++v17;
        } while (v18 != 7);
      }
      if ((unsigned __int64)v8 <= 0xFFFFFFFFFFFFFFF7LL) {
        v19 = v10 * v10;
        v20 = v12 + 1;
        v21 = v19 * v19 * v19 * v19;
        do {
          v13 *= v21;
          v20 += 8;
        } while (v20 != 0);
      }
    }
    return (__int64)(float)(0x1.0000000000000p+0f / (float)v13);
  }
  else {
    if ((*(_QWORD*)(v6 + 48) & 7LL) == 1) {
      result = *(_QWORD*)(v6 + 32);
    }
    else {
      result = *(_QWORD*)(v6 + 32);
      v14 = ((_BYTE)v8 - 1) & 7;
      do {
        result *= v10;
        --v8;
        --v14;
      } while (v14 != 0);
    }
    if (v11 >= 7) {
      v15 = v8 - 2;
      v16 = v10 * v10 * v10 * v10 * v10 * v10 * v10 * v10;
      do {
        result *= v16;
        v15 -= 8LL;
      } while (v15 < 0xFFFFFFFFFFFFFFFDLL);
    }
  }
  return result;
}

bool nvrm_surface_query_607de0(__int64 a1, char* a2, const char* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  void* v7;

  v3 = *(_DWORD*)(a1 + 32);
  if (v3 == -1) {
    return false;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  do {
    v6 = v5 + v3;
    v7 = *(void**)(v6 + 8);
    if (v7 != nullptr && (unsigned int)strcmp_plt(v7, a2, a3) == 0) {
      return *(_DWORD*)v6 == 4;
    }
    v3 = *(_DWORD*)(v6 + 16);
  } while (v3 != -1);
  return false;
}

__int64 nvrm_surface_query_607e80(__int64 a1, char* a2, const char* a3)
{
  int v3;
  __int64 v5;
  __int64 v6;
  void* v7;

  v3 = *(_DWORD*)(a1 + 32);
  if (v3 == -1) {
    return 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v6 = v5 + v3;
    v7 = *(void**)(v6 + 8);
    if (v7 != nullptr && (unsigned int)strcmp_plt(v7, a2, a3) == 0) {
      break;
    }
    v3 = *(_DWORD*)(v6 + 16);
    if (v3 == -1) {
      return 0;
    }
  }
  if (*(_DWORD*)v6 == 3) {
    return v6;
  }
  else {
    return 0;
  }
}

__int64 nvrm_surface_query_607f40(__int64 a1, int a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_DWORD*)(a1 + 32);
  if (v2 == -1) {
    return 0;
  }
  v3 = a2 + 1;
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v5 = v4 + v2;
    if (--v3 == 0) {
      break;
    }
    v2 = *(_DWORD*)(v5 + 16);
    if (v2 == -1) {
      return 0;
    }
  }
  if (v4 == 0 || *(_DWORD*)v5 != 0) {
    return 0;
  }
  else {
    return *(_QWORD*)(v5 + 32);
  }
}

_DWORD* nvrm_surface_query_607fa0(__int64 a1, int a2)
{
  int v2;
  int v3;
  __int64 v4;
  _DWORD* v5;

  v2 = *(_DWORD*)(a1 + 32);
  if (v2 == -1) {
    return nullptr;
  }
  v3 = a2 + 1;
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL);
  while (1) {
    v5 = (_DWORD*)(v4 + v2);
    if (--v3 == 0) {
      break;
    }
    v2 = v5[4];
    if (v2 == -1) {
      return nullptr;
    }
  }
  if (v4 == 0) {
    return nullptr;
  }
  if (*v5 == 2) {
    return v5;
  }
  return nullptr;
}

__int64 NvRmSurfaceDumpJson(int* a1, unsigned int a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            char a9)
{
  __int64 result;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  const char* v24;
  const char* v25;
  const char* v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  char** v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  _DWORD* v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  const char* v46;
  const char* v47;
  __int64 v48;
  int v49;
  const char* v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  int* v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  unsigned int v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  char* v72;
  char* v73;
  char* v74;
  unsigned __int64 v75;
  unsigned int v76;
  __int64 v77;
  int* v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  _QWORD v88[5];
  _QWORD v89[36];
  __int64 v90;
  char* v91;
  char* v92;
  char* v93;
  unsigned __int64 v94;
  char* v95;
  char* v96;
  char* v97;
  char* v98;
  char* v99;
  char* v100;
  char* v101;

  result = 4;
  v88[1] = a5;
  v88[2] = a6;
  v88[3] = a7;
  v88[4] = a8;
  if (a1 == nullptr || a2 == 0 || a4 == 0) {
    return result;
  }
  v90 = 0;
  memset(v89, 0, 256);
  v89[34] = v88;
  v89[35] = 0xFFFFFF80FFFFFFE0LL;
  v89[32] = &a9;
  v89[33] = v89;
  v91 = &a9;
  v92 = (char*)v89;
  v93 = (char*)v88;
  v94 = 0xFFFFFF80FFFFFFE0LL;
  if ((NvOsVsnprintf_plt(v89, 256, a4, &v91) & 0x80000000) != 0) {
    return 4;
  }
  result = NvOsFopen_plt(v89, 6, &v90);
  if ((_DWORD)result != 0) {
    return result;
  }
  v12 = v90;
  v13 = NvRmPrivGetChipIdLimited_plt();
  NvOsFprintf_plt(v12, "{\n");
  NvOsFprintf_plt(v12, "    \"inflate\": %s,\n", "false");
  NvOsFprintf_plt(v12, "    \"chipId\": %u,\n", v13);
  NvOsFprintf_plt(v12, "    \"surfaces\": [\n");
  v77 = a2;
  v78 = a1;
  v14 = *((_QWORD*)a1 + 1);
  v79 = a1[11];
  v81 = a1[16];
  v16 = a1[17];
  v15 = a1[18];
  v18 = *a1;
  v17 = a1[1];
  v20 = a1[9];
  v19 = a1[10];
  v21 = *((_QWORD*)a1 + 6);
  v83 = v16;
  v85 = v15;
  NvOsFprintf_plt(v12, "    {\n");
  v22 = ((unsigned __int8)v14 * v18) >> 3;
  v23 = NvColorFormatToString_plt(v14);
  v24 = "unknown";
  v25 = (const char*)v23;
  if (v19 == 1) {
    v24 = "Interlaced";
  }
  if (v19 != 0) {
    v26 = v24;
  }
  else {
    v26 = "Progressive";
  }
  NvOsFprintf_plt(v12, "        \"Width\": %u,\n", v18);
  NvOsFprintf_plt(v12, "        \"Height\": %u,\n", v17);
  NvOsFprintf_plt(v12, "        \"ColorFormat\": \"%s\",\n", v25);
  NvOsFprintf_plt(v12, "        \"Layout\": \"%s\",\n", "Pitch");
  NvOsFprintf_plt(v12, "        \"Pitch\": %u,\n", v22);
  NvOsFprintf_plt(v12, "        \"Offset\": %u,\n", 0);
  NvOsFprintf_plt(v12, "        \"BlockHeightLog2\": %u,\n", v20);
  NvOsFprintf_plt(v12, "        \"DisplayScanFormat\": \"%s\",\n", v26);
  NvOsFprintf_plt(v12, "        \"SecondFieldOffset\": %u,\n", v79);
  NvOsFprintf_plt(v12, "        \"Flags\": [");
  if ((v21 & 2) != 0) {
    NvOsFprintf_plt(v12, "\"Compressible\" ");
    v27 = v22 * v17;
    v29 = v83;
    v28 = v85;
    v30 = v81;
    if ((v21 & 1) == 0) {
    LABEL_19:
      if ((v21 & 4) == 0) {
        goto LABEL_22;
      }
      NvOsFprintf_plt(v12, ", ");
      goto LABEL_21;
    }
    NvOsFprintf_plt(v12, ", ");
  LABEL_18:
    NvOsFprintf_plt(v12, "\"VPR\" ");
    goto LABEL_19;
  }
  v27 = v22 * v17;
  v29 = v83;
  v28 = v85;
  v30 = v81;
  if ((v21 & 1) != 0) {
    goto LABEL_18;
  }
  if ((v21 & 4) != 0) {
  LABEL_21:
    NvOsFprintf_plt(v12, "\"ForceTegraRawSwizzling\" ");
  }
LABEL_22:
  NvOsFprintf_plt(v12, "],\n");
  NvOsFprintf_plt(v12, "        \"CdeHorizontalCompbitsOffset\": %u,\n", v30);
  NvOsFprintf_plt(v12, "        \"CdeVerticalCompbitsOffset\": %u,\n", v29);
  NvOsFprintf_plt(v12, "        \"CdeScatterBufferOffset\": %u,\n", v28);
  NvOsFprintf_plt(v12, "        \"Size\": %llu\n", v27);
  NvOsFprintf_plt(v12, "    }");
  v76 = a2 - 1;
  if (a2 != 1) {
    v36 = a2 - 1LL;
    v37 = v78 + 40;
    while (1) {
      v38 = *(v37 - 8);
      v39 = v27;
      v40 = *((_QWORD*)v37 - 8);
      v41 = *((_QWORD*)v37 - 3);
      v80 = *(v37 - 9);
      v82 = *(v37 - 7);
      v43 = *(v37 - 18);
      v42 = *(v37 - 17);
      v84 = *(v37 - 2);
      v86 = *(v37 - 1);
      v87 = *v37;
      NvOsFprintf_plt(v12, ", {\n");
      v44 = ((unsigned __int8)v40 * v43) >> 3;
      v45 = NvColorFormatToString_plt(v40);
      v46 = "unknown";
      v47 = (const char*)v45;
      v48 = v43;
      v49 = v39;
      if (v38 == 1) {
        v46 = "Interlaced";
      }
      v50 = v38 != 0 ? v46 : "Progressive";
      NvOsFprintf_plt(v12, "        \"Width\": %u,\n", v48);
      v51 = v42;
      NvOsFprintf_plt(v12, "        \"Height\": %u,\n", v42);
      NvOsFprintf_plt(v12, "        \"ColorFormat\": \"%s\",\n", v47);
      NvOsFprintf_plt(v12, "        \"Layout\": \"%s\",\n", "Pitch");
      v52 = v44;
      NvOsFprintf_plt(v12, "        \"Pitch\": %u,\n", v44);
      NvOsFprintf_plt(v12, "        \"Offset\": %u,\n", v49);
      NvOsFprintf_plt(v12, "        \"BlockHeightLog2\": %u,\n", v80);
      NvOsFprintf_plt(v12, "        \"DisplayScanFormat\": \"%s\",\n", v50);
      NvOsFprintf_plt(v12, "        \"SecondFieldOffset\": %u,\n", v82);
      NvOsFprintf_plt(v12, "        \"Flags\": [");
      if ((v41 & 2) == 0) {
        break;
      }
      NvOsFprintf_plt(v12, "\"Compressible\" ");
      v53 = v86;
      v54 = v87;
      v55 = v84;
      if ((v41 & 1) != 0) {
        NvOsFprintf_plt(v12, ", ");
      LABEL_40:
        NvOsFprintf_plt(v12, "\"VPR\" ");
      }
      if ((v41 & 4) != 0) {
        NvOsFprintf_plt(v12, ", ");
      LABEL_27:
        NvOsFprintf_plt(v12, "\"ForceTegraRawSwizzling\" ");
      }
    LABEL_28:
      v37 += 22;
      LODWORD(v27) = v52 * v51 + v49;
      NvOsFprintf_plt(v12, "],\n");
      NvOsFprintf_plt(v12, "        \"CdeHorizontalCompbitsOffset\": %u,\n",
                      v55);
      NvOsFprintf_plt(v12, "        \"CdeVerticalCompbitsOffset\": %u,\n", v53);
      NvOsFprintf_plt(v12, "        \"CdeScatterBufferOffset\": %u,\n", v54);
      NvOsFprintf_plt(v12, "        \"Size\": %llu\n", v52 * v51);
      NvOsFprintf_plt(v12, "    }");
      if (--v36 == 0) {
        goto LABEL_23;
      }
    }
    v53 = v86;
    v54 = v87;
    v55 = v84;
    if ((v41 & 1) == 0) {
      if ((v41 & 4) == 0) {
        goto LABEL_28;
      }
      goto LABEL_27;
    }
    goto LABEL_40;
  }
LABEL_23:
  NvOsFprintf_plt(v12, " ]\n");
  NvOsFprintf_plt(v12, "}\n%c", 0);
  v31 = v77;
  v32 = v77 & 3;
  if (v76 >= 3) {
    v33 = (char**)v78;
    v56 = 0;
    v35 = 0;
    v57 = v78 + 44;
    do {
      v56 -= 4;
      if (v35 <=
          (((unsigned int)*((unsigned __int8*)v57 - 168) * *(v57 - 44)) >> 3) *
              *(v57 - 43)) {
        v35 = (((unsigned int)*((unsigned __int8*)v57 - 168) * *(v57 - 44)) >>
               3) *
              *(v57 - 43);
      }
      v58 = *(v57 - 22);
      v59 = *(v57 - 21);
      if (v35 <=
          (((unsigned int)*((unsigned __int8*)v57 - 80) * v58) >> 3) * v59) {
        v35 = (((unsigned int)*((unsigned __int8*)v57 - 80) * v58) >> 3) * v59;
      }
      v60 = v57[22];
      v61 = v57[23];
      if (v35 <=
          (((unsigned int)*((unsigned __int8*)v57 + 8) * *v57) >> 3) * v57[1]) {
        v35 =
            (((unsigned int)*((unsigned __int8*)v57 + 8) * *v57) >> 3) * v57[1];
      }
      v62 = *((unsigned __int8*)v57 + 96);
      v57 += 88;
      v63 = ((unsigned int)(v62 * v60) >> 3) * v61;
      if (v35 <= v63) {
        v35 = v63;
      }
    } while (-(__int64)((unsigned int)v77 & 0xFFFFFFFC) != v56);
    v34 = -v56;
    if ((v77 & 3) == 0) {
      goto LABEL_58;
    }
    goto LABEL_54;
  }
  v33 = (char**)v78;
  v34 = 0;
  v35 = 0;
  if ((v77 & 3) != 0) {
  LABEL_54:
    v64 = (__int64)&v33[11 * v34] + 4;
    do {
      v65 = *(unsigned __int8*)(v64 + 4);
      v67 = *(_DWORD*)(v64 - 4);
      v66 = *(_DWORD*)v64;
      v64 += 88;
      v68 = ((unsigned int)(v65 * v67) >> 3) * v66;
      if (v35 <= v68) {
        v35 = v68;
      }
      --v32;
    } while (v32 != 0);
  }
LABEL_58:
  if (v35 != 0) {
    v69 = NvOsAlloc_plt(v35);
    if (v69 != 0) {
      v70 = v69;
      do {
        v71 = v33[9];
        v99 = v33[8];
        v100 = v71;
        v101 = v33[10];
        v72 = v33[5];
        v95 = v33[4];
        v96 = v72;
        v73 = v33[7];
        v97 = v33[6];
        v98 = v73;
        v74 = v33[1];
        v91 = *v33;
        v92 = v74;
        v75 = (unsigned __int64)v33[3];
        v93 = v33[2];
        v94 = v75;
        NvRmSurfaceRead_plt(&v91, 0, 0, (unsigned int)v91, HIDWORD(v91), v70);
        NvOsFwrite_plt(v12, v70,
                       (((unsigned __int8)v92 * (unsigned int)v91) >> 3) *
                           HIDWORD(v91));
        --v31;
        v33 += 11;
      } while (v31 != 0);
      NvOsFree_plt(v70);
    }
  }
  NvOsFcloseEx_plt(v90);
  return 0;
}

__int64 NvRmSurfaceComputeMD5(unsigned int* a1, unsigned int a2, _BYTE* a3)
{
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int* v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  void* v20;
  void* v22;
  __int64 v23;
  void* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  char v29;
  int v30;
  unsigned int v31;
  char v32;
  char v33;
  int v34;
  char v35;
  char v36;
  unsigned int v37;
  char v38;
  char v39;
  char v40;
  int v41;
  char v42;
  char v43;
  unsigned int v44;
  char v45;
  char v46;
  char v47;
  int v48;
  char v49;
  char v50;
  unsigned int v51;
  char v52;
  char v53;
  char v54;
  int v55;
  char v56;
  char v57;
  unsigned int v58;
  char v59;
  char v60;
  char v61;
  int v62;
  char v63;
  char v64;
  unsigned int v65;
  char v66;
  char v67;
  char v68;
  int v69;
  char v70;
  char v71;
  unsigned int v72;
  char v73;
  char v74;
  char v75;
  int v76;
  char v77;
  char v78;
  unsigned int v79;
  char v80;
  char v81;
  char v82;
  int v83;
  char v84;
  char v85;
  unsigned int v86;
  char v87;
  char v88;
  char v89;
  int v90;
  char v91;
  char v92;
  unsigned int v93;
  char v94;
  char v95;
  char v96;
  int v97;
  char v98;
  char v99;
  unsigned int v100;
  char v101;
  char v102;
  char v103;
  int v104;
  char v105;
  char v106;
  unsigned int v107;
  char v108;
  char v109;
  char v110;
  int v111;
  char v112;
  char v113;
  unsigned int v114;
  char v115;
  char v116;
  char v117;
  int v118;
  char v119;
  char v120;
  unsigned int v121;
  char v122;
  char v123;
  char v124;
  int v125;
  char v126;
  char v127;
  unsigned int v128;
  char v129;
  char v130;
  char v131;
  int v132;
  char v133;
  char v134;
  char v135;
  unsigned int v136;
  char v137;
  struct {
    __int64 v139;
    __int64 v140;
  } v139_;
  _QWORD v141[11];

  v5 = a1;
  if (a2 == 0) {
    v8 = 0;
    goto LABEL_11;
  }
  v6 = a2 & 3;
  if (a2 < 4) {
    v7 = 0;
    v8 = 0;
    if ((a2 & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v9 = a1 + 44;
  v10 = 0;
  v8 = 0;
  do {
    v10 -= 4;
    v11 = v8 +
          ((*((unsigned __int8*)v9 - 168) * *(v9 - 44)) >> 3) * *(v9 - 43) +
          ((*((unsigned __int8*)v9 - 80) * *(v9 - 22)) >> 3) * *(v9 - 21) +
          ((*((unsigned __int8*)v9 + 8) * *v9) >> 3) * v9[1];
    v12 = *((unsigned __int8*)v9 + 96);
    v13 = v9[22];
    v14 = v9[23];
    v9 += 88;
    v8 = v11 + ((v12 * v13) >> 3) * v14;
  } while (-(__int64)(a2 & 0xFFFFFFFC) != v10);
  v7 = -v10;
  if ((a2 & 3) != 0) {
  LABEL_9:
    v15 = (__int64)&a1[22 * v7 + 1];
    do {
      v16 = *(unsigned __int8*)(v15 + 4);
      v18 = *(_DWORD*)(v15 - 4);
      v17 = *(_DWORD*)v15;
      v15 += 88;
      --v6;
      v8 += ((unsigned int)(v16 * v18) >> 3) * v17;
    } while (v6 != 0);
  }
LABEL_11:
  v19 = v8;
  v20 = (void*)NvOsAlloc_plt(v8);
  if (v20 == nullptr) {
    return 6;
  }
  v22 = v20;
  memset_plt(v20, nullptr, v19);
  if (a2 != 0) {
    v23 = a2;
    v24 = v22;
    do {
      NvRmSurfaceRead_plt(v5, 0, 0, *v5, v5[1], v24);
      v25 = *((unsigned __int8*)v5 + 8);
      v26 = *v5;
      v27 = v5[1];
      v5 += 22;
      --v23;
      v24 = (void*)((char*)v24 + ((v25 * v26) >> 3) * v27);
    } while (v23 != 0);
  }
  v139_.v140 = 0;
  memset(v141, 0, sizeof(v141));
  v139_.v139 = 0;
  MD5Init_plt(v141);
  MD5Update_plt(v141, v22, v19);
  MD5Final_plt(&v139_.v139, v141);
  v28 = (unsigned __int8)v139_.v139;
  a3[32] = 0;
  v29 = v28 & 0xF | 0x30;
  v30 = (v28 >> 4) + 55;
  if (v28 < 0xA0) {
    LOBYTE(v30) = (v28 >> 4) | 0x30;
  }
  v31 = v28 & 0xF;
  v32 = (v28 & 0xF) + 55;
  *a3 = v30;
  if (v31 < 0xA) {
    v32 = v29;
  }
  a3[1] = v32;
  v33 = BYTE1(v139_.v139);
  v34 = BYTE1(v139_.v139) >> 4;
  v35 = v34 | 0x30;
  v36 = v34 + 55;
  if (BYTE1(v139_.v139) < 0xA0u) {
    v36 = v35;
  }
  a3[2] = v36;
  v37 = v33 & 0xF;
  v38 = v33 & 0xF | 0x30;
  v39 = (v33 & 0xF) + 55;
  if (v37 < 0xA) {
    v39 = v38;
  }
  a3[3] = v39;
  v40 = BYTE2(v139_.v139);
  v41 = BYTE2(v139_.v139) >> 4;
  v42 = v41 | 0x30;
  v43 = v41 + 55;
  if (BYTE2(v139_.v139) < 0xA0u) {
    v43 = v42;
  }
  a3[4] = v43;
  v44 = v40 & 0xF;
  v45 = v40 & 0xF | 0x30;
  v46 = (v40 & 0xF) + 55;
  if (v44 < 0xA) {
    v46 = v45;
  }
  a3[5] = v46;
  v47 = BYTE3(v139_.v139);
  v48 = BYTE3(v139_.v139) >> 4;
  v49 = v48 | 0x30;
  v50 = v48 + 55;
  if (BYTE3(v139_.v139) < 0xA0u) {
    v50 = v49;
  }
  a3[6] = v50;
  v51 = v47 & 0xF;
  v52 = v47 & 0xF | 0x30;
  v53 = (v47 & 0xF) + 55;
  if (v51 < 0xA) {
    v53 = v52;
  }
  a3[7] = v53;
  v54 = BYTE4(v139_.v139);
  v55 = BYTE4(v139_.v139) >> 4;
  v56 = v55 | 0x30;
  v57 = v55 + 55;
  if (BYTE4(v139_.v139) < 0xA0u) {
    v57 = v56;
  }
  a3[8] = v57;
  v58 = v54 & 0xF;
  v59 = v54 & 0xF | 0x30;
  v60 = (v54 & 0xF) + 55;
  if (v58 < 0xA) {
    v60 = v59;
  }
  a3[9] = v60;
  v61 = BYTE5(v139_.v139);
  v62 = BYTE5(v139_.v139) >> 4;
  v63 = v62 | 0x30;
  v64 = v62 + 55;
  if (BYTE5(v139_.v139) < 0xA0u) {
    v64 = v63;
  }
  a3[10] = v64;
  v65 = v61 & 0xF;
  v66 = v61 & 0xF | 0x30;
  v67 = (v61 & 0xF) + 55;
  if (v65 < 0xA) {
    v67 = v66;
  }
  a3[11] = v67;
  v68 = BYTE6(v139_.v139);
  v69 = BYTE6(v139_.v139) >> 4;
  v70 = v69 | 0x30;
  v71 = v69 + 55;
  if (BYTE6(v139_.v139) < 0xA0u) {
    v71 = v70;
  }
  a3[12] = v71;
  v72 = v68 & 0xF;
  v73 = v68 & 0xF | 0x30;
  v74 = (v68 & 0xF) + 55;
  if (v72 < 0xA) {
    v74 = v73;
  }
  a3[13] = v74;
  v75 = HIBYTE(v139_.v139);
  v76 = HIBYTE(v139_.v139) >> 4;
  v77 = v76 | 0x30;
  v78 = v76 + 55;
  if (HIBYTE(v139_.v139) < 0xA0u) {
    v78 = v77;
  }
  a3[14] = v78;
  v79 = v75 & 0xF;
  v80 = v75 & 0xF | 0x30;
  v81 = (v75 & 0xF) + 55;
  if (v79 < 0xA) {
    v81 = v80;
  }
  a3[15] = v81;
  v82 = v139_.v140;
  v83 = (unsigned __int8)v139_.v140 >> 4;
  v84 = v83 | 0x30;
  v85 = v83 + 55;
  if ((unsigned __int8)v139_.v140 < 0xA0u) {
    v85 = v84;
  }
  a3[16] = v85;
  v86 = v82 & 0xF;
  v87 = v82 & 0xF | 0x30;
  v88 = (v82 & 0xF) + 55;
  if (v86 < 0xA) {
    v88 = v87;
  }
  a3[17] = v88;
  v89 = BYTE1(v139_.v140);
  v90 = BYTE1(v139_.v140) >> 4;
  v91 = v90 | 0x30;
  v92 = v90 + 55;
  if (BYTE1(v139_.v140) < 0xA0u) {
    v92 = v91;
  }
  a3[18] = v92;
  v93 = v89 & 0xF;
  v94 = v89 & 0xF | 0x30;
  v95 = (v89 & 0xF) + 55;
  if (v93 < 0xA) {
    v95 = v94;
  }
  a3[19] = v95;
  v96 = BYTE2(v139_.v140);
  v97 = BYTE2(v139_.v140) >> 4;
  v98 = v97 | 0x30;
  v99 = v97 + 55;
  if (BYTE2(v139_.v140) < 0xA0u) {
    v99 = v98;
  }
  a3[20] = v99;
  v100 = v96 & 0xF;
  v101 = v96 & 0xF | 0x30;
  v102 = (v96 & 0xF) + 55;
  if (v100 < 0xA) {
    v102 = v101;
  }
  a3[21] = v102;
  v103 = BYTE3(v139_.v140);
  v104 = BYTE3(v139_.v140) >> 4;
  v105 = v104 | 0x30;
  v106 = v104 + 55;
  if (BYTE3(v139_.v140) < 0xA0u) {
    v106 = v105;
  }
  a3[22] = v106;
  v107 = v103 & 0xF;
  v108 = v103 & 0xF | 0x30;
  v109 = (v103 & 0xF) + 55;
  if (v107 < 0xA) {
    v109 = v108;
  }
  a3[23] = v109;
  v110 = BYTE4(v139_.v140);
  v111 = BYTE4(v139_.v140) >> 4;
  v112 = v111 | 0x30;
  v113 = v111 + 55;
  if (BYTE4(v139_.v140) < 0xA0u) {
    v113 = v112;
  }
  a3[24] = v113;
  v114 = v110 & 0xF;
  v115 = v110 & 0xF | 0x30;
  v116 = (v110 & 0xF) + 55;
  if (v114 < 0xA) {
    v116 = v115;
  }
  a3[25] = v116;
  v117 = BYTE5(v139_.v140);
  v118 = BYTE5(v139_.v140) >> 4;
  v119 = v118 | 0x30;
  v120 = v118 + 55;
  if (BYTE5(v139_.v140) < 0xA0u) {
    v120 = v119;
  }
  a3[26] = v120;
  v121 = v117 & 0xF;
  v122 = v117 & 0xF | 0x30;
  v123 = (v117 & 0xF) + 55;
  if (v121 < 0xA) {
    v123 = v122;
  }
  a3[27] = v123;
  v124 = BYTE6(v139_.v140);
  v125 = BYTE6(v139_.v140) >> 4;
  v126 = v125 | 0x30;
  v127 = v125 + 55;
  if (BYTE6(v139_.v140) < 0xA0u) {
    v127 = v126;
  }
  a3[28] = v127;
  v128 = v124 & 0xF;
  v129 = v124 & 0xF | 0x30;
  v130 = (v124 & 0xF) + 55;
  if (v128 < 0xA) {
    v130 = v129;
  }
  a3[29] = v130;
  v131 = HIBYTE(v139_.v140);
  v132 = HIBYTE(v139_.v140) >> 4;
  v133 = HIBYTE(v139_.v140) & 0xF | 0x30;
  v134 = v132 | 0x30;
  v135 = v132 + 55;
  if (HIBYTE(v139_.v140) < 0xA0u) {
    v135 = v134;
  }
  a3[30] = v135;
  v136 = v131 & 0xF;
  v137 = (v131 & 0xF) + 55;
  if (v136 >= 0xA) {
    v133 = v137;
  }
  a3[31] = v133;
  NvOsFree_plt(v22);
  return 0;
}

#pragma GCC visibility pop
