#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_632590(_QWORD* result, __int64, __int64);
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvClose_plt(_QWORD);
__int64 NvOsDrvOpen_plt(_QWORD);
__int64 NvOsEventDestroy_plt(void);
__int64 NvOsEventPoolWait_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsEventWait_plt(_QWORD, _QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsGetTimeUS_plt(void);
__int64 NvOsMapRegSpace_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsSystemEventCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsUnMapRegSpace_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmMemLoadMapBufferSgl_plt(_QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemRead_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmSyncCalculateSizeForInplaceSyncpoints_plt(_QWORD);
__int64 SdkRoutine_629ca0(_QWORD);
__int64 SdkRoutine_6318c0(unsigned int*, __int64, _QWORD*, unsigned __int64,
                          __int64);
__int64 SdkRoutine_634120(void);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nvidia_623fe0(__int64*, unsigned __int64);
__int64 nvidia_624080(_QWORD*, unsigned __int64);
__int64 nvidia_624a40(__int64*, unsigned __int64);
__int64 nvidia_626630(__int64*, _DWORD*);
__int64 nvidia_626ca0(__int64, _BYTE*, __int64*);
__int64 nvidia_627b10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_627de0(_QWORD*, __int64, _QWORD*);
__int64 nvidia_6280e0(__int64*, unsigned __int64);
__int64 nvidia_628d40(__int64*, unsigned __int64);
__int64 nvidia_629030(_QWORD*);
__int64 nvidia_6290b0(__int64, int, __int64, int, unsigned int*, __int64);
__int64 nvidia_629e00(__int64);
__int64 nvidia_62ad20(_QWORD*, unsigned __int64);
__int64 nvidia_62ae40(_QWORD*, unsigned __int64);
__int64 nvidia_62cfe0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_62d0f0(__int64, __int64);
__int64 nvidia_62ed90(__int64, __int64*);
__int64 nvidia_631e20(_QWORD*, unsigned __int64);
__int64 nvidia_632100(__int64, int, __int64, __int64);
__int64 nvidia_632390(__int64);
__int64 nvidia_632550(__int64);
__int64 nvidia_635560_alt1(_QWORD, _QWORD) __asm__("nvidia_635560");
__int64 nvidia_637730(_QWORD, _QWORD);
__int64 nvidia_637780(_QWORD, _QWORD);
__int64 nvidia_638760_alt1(_QWORD, _QWORD) __asm__("nvidia_638760");
__int64 nvidia_638c20(_QWORD);
__int64 nvidia_6391b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_639270(_QWORD);
__int64 nvidia_639330(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_6393c0(_QWORD);
__int64 nvidia_639440(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_6394d0(_QWORD);
__int64 nvidia_639550(_QWORD);
__int64 nvidia_639830(_QWORD, _QWORD);
__int64 nvidia_639960(_QWORD, _QWORD, _QWORD);
__int64 nvidia_63b590(_QWORD, _QWORD);
__int64 nvidia_63b5f0(_QWORD, _QWORD);
__int64 nvidia_63b750(_QWORD, _QWORD);
__int64 nvidia_63cb90(__int64, __int64);
__int64 nvidia_63cbf0(__int64, __int64*);
__int64 nvidia_63d350(_QWORD, _QWORD);
__int64 nvidia_644ce0(_QWORD, _QWORD);
__int64 nvidia_644cf0(__int64, __int64, _QWORD*, __int64, __int64*,
                      unsigned __int64);
__int64 nvidia_644cf0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_644cf0");
__int64 nvidia_644da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_644da0_alt1(__int64, __int64, __int64,
                           __int64) __asm__("nvidia_644da0");
__int64 nvstl_mutex_impl_nvos_6321d0(__int64, _DWORD*, __int64);
__int64 nvstl_mutex_impl_nvos_633a70(__int64, _DWORD*, __int64);
__int64 nvstl_mutex_impl_nvos_634620(void);
__int64 nvstl_mutex_impl_nvos_639790(_QWORD, _QWORD);
__int64 nvstl_mutex_impl_nvos_63ce10(_QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*);
extern _BYTE* SdkData_e89a10;
extern _BYTE* SdkData_e89a18;
extern _BYTE* SdkData_e89a90;
extern _DWORD SdkData_c773a8[3];
extern _DWORD SdkData_c773c0[3];
extern _DWORD SdkData_c77530[3];
extern __int64 (*SdkData_e73090)();
extern __int64 (*SdkData_e744d0[])();
extern __int64 SdkData_ea4520;
extern __int64* SdkData_e89a40;
extern __int64* SdkData_e89a68[5];
extern __int64* SdkData_e89a70[4];
extern __int64* SdkData_e89a78[3];
extern __int64* SdkData_e89aa8[2];
extern __int64* SdkData_e89ab0;
extern char SdkData_10406ce;
extern char SdkData_10406cf;
extern char SdkData_10406d0;
extern char SdkData_10406d1;
extern char SdkData_10406f8;
extern char SdkData_10406fa;
extern unsigned int SdkData_c773b4[3];
void nn_os_detail_RemoveNativeWaitHolder();
void nvidia_627100(__int64, __int64*, _DWORD*);
__int64 nvidia_632740(__int64 a1, __int64 a2);
__int64 nvidia_632d00(__int64* a1, _QWORD* a2);
__int64 nvidia_632e80(__int64 a1, __int64 a2, int a3);
__int64 nvidia_632ee0(__int64 a1, __int64* a2, __int64 a3);
__int64 nvidia_632fb0(__int64 a1, unsigned __int8* a2);
__int64 nvidia_6330b0(__int64 a1, unsigned int a2);
__int64 nvidia_633200(_QWORD* a1, unsigned int a2);
__int64 nvidia_633270(__int64 a1);
__int64 nvidia_633290(__int64 a1, unsigned int a2);
__int64 nvidia_633350(__int64 a1, int a2);
__int64 nvidia_6333b0(__int64 a1, int a2);
__int64 nvidia_6333e0(__int64 a1, int a2);
__int64 nvidia_633450(__int64 a1, int a2, int a3, _DWORD* a4);
__int64 nvidia_6334e0(__int64 a1, int a2);
__int64 nvidia_633540(__int64 a1, int a2);
__int64 nvidia_6335b0(__int64 a1, int a2);
__int64 nvidia_633720(__int64 a1, int* a2);
__int64 nvidia_633860(__int64 a1, __int64 a2);
__int64 nvidia_633af0(__int64 a1);
__int64 nvidia_633b30(__int64 a1, __int64 a2);
unsigned int* nvidia_633e30(unsigned int* result, _QWORD* a2, _QWORD* a3,
                            _QWORD* a4);
__int64 nvidia_633e50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7);
__int64 nvidia_634da0(__int64 a1, __int64 a2, __int64 a3);
__int64 nvidia_634ea0(__int64 a1);
__int64 nvidia_634fa0(__int64 a1);
__int64 nvidia_635140(__int64 a1, __int64 a2);
__int64 nvidia_635390(__int64 result, _QWORD* a2, _QWORD* a3, _QWORD* a4);
__int64 nvidia_635510(__int64 a1, __int64 a2);
__int64 nvidia_635560(__int64 a1);
__int64 nvidia_6355c0(__int64 result, _QWORD* a2);
__int64 nvidia_6355d0(__int64 a1, unsigned int a2);
__int64 nvidia_6355f0(__int64 a1, __int64 a2, __int64* a3);
__int64 nvidia_635610(__int64 a1);
__int64 nvidia_635670(__int64 a1);
void nvidia_6356d0(__int64 a1);
__int64 nvidia_635b00(__int64 a1);
__int64 nvidia_635be0(__int64 a1, __int64* a2);
__int64 nvidia_635f20(__int64 result, int* a2);
__int64 nvidia_6364e0(__int64 a1, __int64 a2, int* a3);
__int64 nvidia_636750(__int64 a1, int a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, int* a7);
__int64 nvidia_636870(__int64 a1, int a2, __int64 a3, int a4, __int64 a5,
                      unsigned int* a6);
__int64 nvidia_636960(_QWORD* a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, _DWORD* a7);
__int64 nvidia_6369f0(__int64 a1, _QWORD* a2);
__int64 nvidia_636a10();
__int64 nvidia_636a50(__int64 a1, __int64 a2, __int64* a3);
__int64 nvidia_636b20(__int64 a1, __int64 a2, __int64* a3);
__int64 nvidia_636cc0(__int64 a1, unsigned int a2, unsigned int a3, int a4,
                      unsigned int a5);
__int64 nvidia_636e00(_QWORD* a1, _QWORD* a2);
__int64 nvidia_636e80(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4);
__int64 nvidia_636f70(__int64 a1, int a2);
__int64 nvidia_636fc0(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4);
__int64 nvidia_6370b0(__int64 a1, int a2);
__int64 nvidia_637100(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4);
__int64 nvidia_6371f0(__int64 a1, int a2);
__int64 nvidia_637240(__int64 a1);
__int64 nvidia_637280(__int64 a1, _QWORD* a2, __int64 a3);
__int64 nvidia_637340(__int64 a1, _QWORD* a2, __int64 a3);
__int64 nvidia_637400(__int64 a1, __int64 a2, __int64* a3);
__int64 nvidia_6374d0(__int64 a1, __int64 a2, __int64* a3);
__int64 nvidia_6375a0(__int64 a1, __int64 a2);
__int64 nvidia_6375c0(__int64 a1, __int64 a2, __int64 a3, __int64* a4);
__int64 nvidia_6376a0(__int64 a1);
__int64 nvidia_637800(__int64 a1);
__int64 nvidia_637840(__int64* a1, const char* a2, __int64* a3);
__int64 nvidia_637990(__int64 a1, _BYTE* a2);
__int64 nvidia_637a00(__int64 a1, unsigned int a2);
__int64 nvidia_637a90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 nvidia_637b20(__int64 a1, _QWORD* a2);
__int64 nvidia_637ba0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nvidia_637d30(__int64 a1, _BYTE* a2, unsigned __int64* a3);
__int64 nvidia_638160(__int64 a1, __int64* a2, unsigned int a3, int* a4);
__int64 nvidia_638410(_QWORD* a1);
void (***nvidia_6384a0(_QWORD* a1))(_QWORD);
__int64 nvidia_638690(_QWORD* a1);
__int64 nvidia_638760(unsigned int* a1, __int64* a2);
__int64 nvidia_638990(__int64* a1, unsigned __int64 a2);
__int64 nvidia_638a20(__int64* a1, unsigned __int64 a2);

__int64 nvidia_632740(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  bool v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  char v38;
  __int64 v39;
  __int64 v40;

  v2 = *(_QWORD*)(a1 + 96);
  v5 = 0;
  v37 = 0;
  v38 = 0;
  if (v2 != 0) {
    v6 = *(_DWORD*)(a1 + 104);
    if (v6 == 1) {
      goto LABEL_9;
    }
  }
  else {
    v38 = 1;
    v5 = 11;
    v37 = 11;
    v6 = *(_DWORD*)(a1 + 104);
    if (v6 == 1) {
      goto LABEL_9;
    }
  }
  if (v6 == 2) {
    LOBYTE(v6) = SdkData_10406ce;
    if (SdkData_10406ce != 1) {
      goto LABEL_11;
    }
  }
  else {
    LOBYTE(v6) = 1;
  }
LABEL_9:
  v38 = v6;
  if (v2 != 0) {
    v5 = 11;
    v37 = 11;
  }
LABEL_11:
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(_DWORD*)(a1 + 88);
  if (*(_DWORD*)(v7 + 332) >= 0x1Fu && *(_DWORD*)(v7 + 320) >= 0x20u) {
    if (v8 == -1) {
      v8 = *(_DWORD*)(v7 + 1940);
      v9 = *(_QWORD*)(v7 + 1632);
      if (v9 == 0) {
      LABEL_35:
        v38 = 1;
        if (v5 == 0) {
          v37 = 11;
        }
        goto LABEL_39;
      }
    }
    else if (v8 < 0) {
      v8 = -1;
      v38 = 1;
      if (v5 == 0) {
        v5 = 11;
      }
      v37 = v5;
      v9 = *(_QWORD*)(v7 + 1632);
      if (v9 == 0) {
        goto LABEL_35;
      }
    }
    else {
      v9 = *(_QWORD*)(v7 + 1632);
      if (v9 == 0) {
        goto LABEL_35;
      }
    }
    v10 = (int*)(*(_QWORD*)(v7 + 1624) + 24LL);
    while (1) {
      v12 = *v10;
      v10 += 8;
      v11 = v12;
      if ((v12 & 0x80000000) == 0 && v11 == v8) {
        goto LABEL_30;
      }
      if (--v9 == 0) {
        goto LABEL_35;
      }
    }
  }
  if ((unsigned int)(v8 - 1) > 0xFFFFFFFD) {
    v8 = 0;
  LABEL_30:
    if (v5 == 0 && *(_BYTE*)(v7 + 425) == 1) {
      v13 = *(_DWORD*)(a2 + 100);
      if (v13 >= *(_DWORD*)(v7 + 404)) {
        v38 = 1;
        v37 = 11;
      }
      else {
        v14 = *(_DWORD*)(v7 + 408);
        if (v14 != 0) {
          *(_DWORD*)(a1 + 192) = v14;
        }
        else {
          *(_DWORD*)(a1 + 192) = v13;
        }
      }
    }
    goto LABEL_39;
  }
  v8 = 0;
  v38 = 1;
  if (v5 == 0) {
    v37 = 2;
  }
LABEL_39:
  nvidia_632590((_QWORD*)a1, (__int64)&v37, a2);
  v15 = *(_QWORD*)(a1 + 8);
  result = v37;
  if (*(_QWORD*)(v15 + 184) == 0) {
    v20 = v37 == 0;
    v21 = 15;
    goto LABEL_84;
  }
  if (v37 != 0) {
    if (*(_DWORD*)(v15 + 332) < 0x1Fu) {
      goto LABEL_46;
    }
  }
  else if (*(_DWORD*)(a1 + 48) == -1) {
    v36 = NvOsDrvOpen_plt(*(_QWORD*)(v15 + 184));
    *(_DWORD*)(a1 + 48) = v36;
    if (v36 == -1) {
      result = 196625;
    }
    else {
      result = 0;
    }
    if (*(_DWORD*)(v15 + 332) < 0x1Fu) {
      goto LABEL_46;
    }
  }
  else {
    result = 8;
    if (*(_DWORD*)(v15 + 332) < 0x1Fu) {
      goto LABEL_46;
    }
  }
  if (*(_DWORD*)(v15 + 320) >= 0x20u) {
    v17 = *(_QWORD*)(a1 + 56);
    LODWORD(v39) = v8;
    if (*(_DWORD*)(v17 + 40) < 0x20u) {
      v21 = 2;
    }
    else {
      v18 = result;
      v19 = nvidia_644da0(*(unsigned int*)(a1 + 48), 1074022432, &v39, 4);
      if (v19 == 0) {
        result = v18;
        goto LABEL_46;
      }
      v21 = v19;
      LODWORD(result) = v18;
    }
    v20 = (_DWORD)result == 0;
  LABEL_84:
    if (v20) {
      return v21;
    }
    else {
      return (unsigned int)result;
    }
  }
LABEL_46:
  if ((_DWORD)result != 0) {
    return result;
  }
  v22 = *(_QWORD*)(a1 + 96);
  LODWORD(v39) = *(_DWORD*)(a1 + 48);
  if (*(_DWORD*)(*(_QWORD*)(v22 + 32) + 32LL) == 0) {
    return 2;
  }
  result = nvidia_644da0(*(unsigned int*)(v22 + 24), 1074020609, &v39, 4);
  if ((_DWORD)result != 0) {
    return result;
  }
  v23 = *(_QWORD*)(a1 + 72);
  if (v23 != 0) {
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v23 + 112LL))(v23, a1);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  if (*(_BYTE*)(a1 + 116) == 1) {
    v24 = *(_QWORD*)a1;
    LOBYTE(v39) = 0;
    result = (*(__int64 (**)(__int64, __int64, __int64*))(v24 + 136))(
        a1, 0xFFFFFFFFLL, &v39);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 216LL))(a1, a2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v25 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v25 + 363) & 0x10) != 0 && (SdkData_10406d0 & 1) == 0 &&
      (*(_BYTE*)(a1 + 93) & 1) != 0) {
    v26 = *(_QWORD*)(a1 + 56);
    v39 = 0;
    v40 = 0;
    if (*(_DWORD*)(v26 + 40) < 0x1Eu) {
      return 2;
    }
    result = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292510LL, &v39, 16);
    if ((_DWORD)result != 0) {
      return result;
    }
    v27 = v39;
    *(_QWORD*)(a1 + 152) = v40;
    if (*(_DWORD*)(v25 + 312) >= 0xBu &&
        (*(_QWORD*)(v25 + 360) & 0x4000000) != 0) {
      *(_QWORD*)(a1 + 160) = v27;
    }
  }
  v28 = *(_DWORD*)(a1 + 108);
  v39 = 0;
  v40 = 3735928559LL;
  v29 = *(_QWORD*)(a1 + 56);
  LODWORD(v39) = v28;
  if (*(_DWORD*)(v29 + 40) < 9u) {
    return 2;
  }
  result = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292489LL, &v39, 16);
  if ((_DWORD)result != 0) {
    return result;
  }
  v30 = *(_DWORD*)(a2 + 56);
  if (v30 != 0) {
    result = nvidia_632100(a1, v30, *(_QWORD*)(a2 + 64), *(_QWORD*)(a2 + 72));
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL) >= 0x14u) {
    v31 = *(_QWORD*)(a1 + 56);
    v39 = a1;
    if (*(_DWORD*)(v31 + 40) <= 0x13u) {
      return 2;
    }
    result = nvidia_644da0(*(unsigned int*)(a1 + 48), 1074284308, &v39, 8);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v32 = *(_QWORD*)(a1 + 8);
  LOBYTE(v39) = 0;
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
  if ((*(unsigned int*)(v33 + 748) *
           (unsigned __int64)(0x3E8u % *(_DWORD*)(v33 + 744)) /
           *(unsigned int*)(v33 + 744) +
       *(unsigned int*)(v33 + 748) *
           (unsigned __int64)(0x3E8u / *(_DWORD*)(v33 + 744))) >>
          32 !=
      0) {
    return 11;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
  if ((_DWORD)result == 0) {
    if (*(_QWORD*)(a1 + 72) == 0 &&
        *(_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) == 1) {
      v34 = *(_QWORD*)(a1 + 8);
      if (*(_DWORD*)(v34 + 320) > 0xCu || (*(_BYTE*)(v34 + 361) & 1) == 0 ||
          *(_DWORD*)(v34 + 340) < 0xAu || (SdkData_10406cf & 1) != 0) {
        v35 =
            *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 4);
        if (v35 <= 2) {
          LODWORD(v39) = 50 * v35 + 50;
          if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) >= 0xDu) {
            nvidia_644da0(*(unsigned int*)(a1 + 48), 1074022413, &v39, 4);
          }
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 nvidia_632d00(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  void (*v5)(__int64*, __int64*, __int64*, __int64*);
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
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

  v2 = *a1;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v5 = *(void (**)(__int64*, __int64*, __int64*, __int64*))(v2 + 224);
  v29 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v5(a1, &v24, &v25, &v26);
  v6 = a1[9];
  v7 = a1[10];
  LODWORD(v23) = *((_DWORD*)a1 + 10);
  v8 = *((_BYTE*)a1 + 92);
  v30 = v7;
  LOBYTE(v27) = v8;
  v28 = a1[12];
  v29 = v6;
  LODWORD(v6) = *((_DWORD*)a1 + 27);
  LODWORD(v31) = *((_DWORD*)a1 + 26);
  HIDWORD(v31) = v6;
  v9 = (*(__int64 (**)(__int64*))(*a1 + 240))(a1);
  v10 = a1[17];
  LOBYTE(v32) = v9 & 1;
  BYTE1(v32) = *((_BYTE*)a1 + 116);
  v33 = a1[15];
  v34 = v10;
  LODWORD(v10) = *((_DWORD*)a1 + 39);
  LODWORD(v35) = *((_DWORD*)a1 + 38);
  HIDWORD(v35) = v10;
  v36 = a1[20];
  result = (*(__int64 (**)(__int64*))(*a1 + 232))(a1);
  v12 = a1[1];
  v13 = 0;
  LOBYTE(v37) = result & 1;
  v14 = *(_DWORD*)(v12 + 1488);
  BYTE1(v37) = *((_BYTE*)a1 + 93);
  BYTE2(v37) = *((_BYTE*)a1 + 128);
  HIDWORD(v37) = *((_DWORD*)a1 + 48);
  v15 = (unsigned int)(v14 * HIDWORD(v37));
  if (*(_QWORD*)(v12 + 744) > v15) {
    v13 = *(_QWORD*)(v12 + 736) + 6LL * (unsigned int)v15;
  }
  v16 = v36;
  a2[12] = v35;
  a2[13] = v16;
  a2[14] = v37;
  a2[15] = v13;
  v17 = v32;
  a2[8] = v31;
  a2[9] = v17;
  v18 = v34;
  a2[10] = v33;
  a2[11] = v18;
  v19 = v28;
  a2[4] = v27;
  a2[5] = v19;
  v20 = v30;
  a2[6] = v29;
  a2[7] = v20;
  v21 = v24;
  *a2 = v23;
  a2[1] = v21;
  v22 = v26;
  a2[2] = v25;
  a2[3] = v22;
  return result;
}

__int64 nvidia_632e80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  int v6;
  int v7;

  v3 = *(_QWORD*)(a1 + 56);
  v5 = a2;
  v7 = 0;
  v6 = a3;
  if (*(_DWORD*)(v3 + 40) < 0xBu) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292491LL, &v5, 16);
  }
}

__int64 nvidia_632ee0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  if (*a2 != 0) {
    return 8;
  }
  v7 = NvOsAlloc_plt(64);
  if (v7 != 0) {
    v8 = v7;
    nvidia_63b5f0(v7, a1);
    *a2 = v8;
    result = nvidia_63b750(v8, a3);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v9 = *a2;
  if (*a2 != 0) {
    v10 = result;
    (**(void (***)(__int64))v9)(*a2);
    v11 = *a2;
    *(_BYTE*)(v9 + 17) = 1;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      NvOsFree_plt(*a2);
      *a2 = 0;
    }
    return v10;
  }
  return result;
}

__int64 nvidia_632fb0(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD v12[3];

  v4 = *a2;
  v5 = a2[8];
  if ((v4 & 1) == 0 && a2[8] == 0) {
    return 11;
  }
  v12[1] = v2;
  v12[2] = v3;
  v7 = *((_DWORD*)a2 + 1);
  v8 = *((unsigned int*)a2 + 3);
  v12[0] = 0;
  if (v4 != 0) {
    if (v7 != 0) {
      if (v7 != 1) {
        v10 = 0;
        v4 = 11;
        if (v5 == 0) {
          goto LABEL_16;
        }
        goto LABEL_11;
      }
      v9 = 2;
    }
    else {
      v9 = 1;
    }
    v4 = 0;
    LODWORD(v12[0]) = v9;
  }
  v10 = 1;
  if (v5 != 0) {
  LABEL_11:
    if ((unsigned int)v8 > 2) {
      return 11;
    }
    HIDWORD(v12[0]) = SdkData_c773a8[v8];
  }
LABEL_16:
  if (v10 == 0) {
    return v4;
  }
  v11 = *(_QWORD*)(a1 + 56);
  if (*(_DWORD*)(v11 + 40) < 0x1Fu ||
      *(_DWORD*)(*(_QWORD*)(v11 + 72) + 16LL) < 0x130u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3221768223LL, v12, 8);
  }
}

__int64 nvidia_6330b0(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;

  if ((*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 24) &
       1) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(v5 + 320) > 0xCu || (*(_BYTE*)(v5 + 361) & 1) == 0 ||
      *(_DWORD*)(v5 + 340) < 0xAu || (SdkData_10406cf & 1) != 0) {
    if (a2 <= 2) {
      v8 = 50 * a2 + 50;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) < 0xDu) {
        return 2;
      }
      else {
        return nvidia_644da0(*(unsigned int*)(a1 + 48), 1074022413, &v8, 4);
      }
    }
    return 11;
  }
  if (a2 > 2) {
    return 11;
  }
  v6 = SdkData_c773b4[a2];
  v7 = SdkData_c773c0[a2];
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 104LL))(a1, v6);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 120LL))(a1, v7);
  }
  return result;
}

__int64 nvidia_633200(_QWORD* a1, unsigned int a2)
{
  __int64 v5;

  if ((*(_BYTE*)((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) + 24) & 1) != 0) {
    return 0;
  }
  v5 = a1[8];
  if (v5 != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 56LL))(v5, a2);
  }
  else {
    return 2;
  }
}

__int64 nvidia_633270(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 64);
  if (v1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
  }
  else {
    return 2;
  }
}

__int64 nvidia_633290(__int64 a1, unsigned int a2)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;

  if ((*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 24) &
       1) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 64);
  if (v5 != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 72LL))(v5, a2);
  }
  v6 = *(_QWORD*)(a1 + 56);
  v7 = a2;
  if (*(_DWORD*)(v6 + 40) < 0x1Du) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3221506077LL, &v7, 4);
  }
}

__int64 nvidia_633350(__int64 a1, int a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 56);
  v4 = a2;
  if (*(_DWORD*)(v2 + 40) < 3u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 1074022403, &v4, 4);
  }
}

__int64 nvidia_6333b0(__int64 a1, int a2)
{
  if (a2 != -1) {
    return 2;
  }
  *(_BYTE*)(a1 + 116) = 1;
  return 0;
}

__int64 nvidia_6333e0(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v7;

  v2 = *(_QWORD*)(a1 + 56);
  v7 = a2;
  v3 = *(_DWORD*)(v2 + 40);
  v4 = *(_QWORD*)(v2 + 80) & 0x10LL;
  if (v3 < 7 || v4 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3221506055LL, &v7, 4);
  }
}

__int64 nvidia_633450(__int64 a1, int a2, int a3, _DWORD* a4)
{
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 result;
  _DWORD v10[2];
  int v11;
  int v12;

  v11 = a3;
  v12 = 0;
  v10[0] = 1;
  v10[1] = a2;
  v5 = *(_QWORD*)(a1 + 56);
  v6 = *(_DWORD*)(v5 + 40);
  v7 = *(_QWORD*)(v5 + 80) & 0x40LL;
  if (v6 < 0x13 || v7 == 0) {
    *a4 = a3;
    return 2;
  }
  else {
    result = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292499LL, v10, 16);
    *a4 = v11;
  }
  return result;
}

__int64 nvidia_6334e0(__int64 a1, int a2)
{
  __int64 v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  _QWORD v8[2];

  v3 = *(_QWORD*)(a1 + 56);
  result = 2;
  v8[1] = 0;
  LODWORD(v8[0]) = 2;
  HIDWORD(v8[0]) = a2;
  v5 = *(_DWORD*)(v3 + 40);
  v6 = *(_QWORD*)(v3 + 80) & 0x40LL;
  if (v5 >= 0x13 && v6 != 0) {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292499LL, v8, 16);
  }
  return result;
}

__int64 nvidia_633540(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  _QWORD v7[2];

  v2 = *(_QWORD*)(a1 + 56);
  LODWORD(v7[0]) = 0;
  HIDWORD(v7[0]) = a2;
  v7[1] = 0;
  v3 = *(_DWORD*)(v2 + 40);
  v4 = *(_QWORD*)(v2 + 80) & 0x40LL;
  if (v3 < 0x13 || v4 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292499LL, v7, 16);
  }
}

__int64 nvidia_6335b0(__int64 a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  result = 11;
  if (a2 > 1) {
    if (a2 == 2) {
      if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) >= 0x10u) {
        v4 = *(unsigned int*)(a1 + 48);
        v5 = 18448;
        return nvidia_644ce0(v4, v5);
      }
    }
    else {
      if (a2 != 3) {
        return result;
      }
      if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) >= 0x11u) {
        v4 = *(unsigned int*)(a1 + 48);
        v5 = 18449;
        return nvidia_644ce0(v4, v5);
      }
    }
    return 2;
  }
  if (a2 == 0) {
    if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) >= 0xEu) {
      v4 = *(unsigned int*)(a1 + 48);
      v5 = 18446;
      return nvidia_644ce0(v4, v5);
    }
    return 2;
  }
  if (a2 != 1) {
    return result;
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) < 0xFu) {
    return 2;
  }
  v4 = *(unsigned int*)(a1 + 48);
  v5 = 18447;
  return nvidia_644ce0(v4, v5);
}

__int64 nvidia_633720(__int64 a1, int* a2)
{
  int v2;
  __int64 v3;
  __int64 result;
  int v6;
  _BOOL4 v7;
  int v8;
  int v9;
  int v10;
  struct {
    __int64 v11;
    __int64 v12;
    __int64 v13;
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
    __int64 v26;
  } v11_;

  v3 = *(_QWORD*)(a1 + 56);
  v11_.v25 = 0;
  v11_.v26 = 0;
  v11_.v23 = 0;
  v11_.v24 = 0;
  v11_.v21 = 0;
  v11_.v22 = 0;
  v11_.v19 = 0;
  v11_.v20 = 0;
  v11_.v17 = 0;
  v11_.v18 = 0;
  v11_.v15 = 0;
  v11_.v16 = 0;
  v11_.v13 = 0;
  v11_.v14 = 0;
  v11_.v11 = 0;
  v11_.v12 = 0;
  if (*(_DWORD*)(v3 + 40) < 0x16u) {
    result = 2;
    v6 = v11_.v11;
  LABEL_8:
    if (v6 == 0) {
      v7 = false;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      goto LABEL_15;
    }
    if (v6 == 1) {
      v6 = HIDWORD(v11_.v12);
      v9 = HIDWORD(v11_.v11);
      v8 = v11_.v12;
      v10 = 2;
      v7 = v11_.v13 == 2;
      goto LABEL_15;
    }
  LABEL_14:
    v10 = 1;
    v7 = false;
    v6 = 0;
    v8 = 0;
    v9 = 0;
    goto LABEL_15;
  }
  result = nvidia_644da0_alt1(*(unsigned int*)(a1 + 48), 2155890710LL,
                              (__int64)&v11_.v11, 128);
  v6 = v11_.v11;
  if ((int)v11_.v11 <= 1) {
    goto LABEL_8;
  }
  if ((_DWORD)v11_.v11 == 2) {
    v9 = HIDWORD(v11_.v11);
    v8 = v11_.v12;
    v6 = HIDWORD(v11_.v12);
    v7 = v11_.v13;
    v10 = 3;
    v2 = HIDWORD(v11_.v13);
    goto LABEL_15;
  }
  if ((_DWORD)v11_.v11 == 3) {
    v7 = false;
    v6 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 4;
    goto LABEL_15;
  }
  if ((_DWORD)v11_.v11 != 4) {
    goto LABEL_14;
  }
  v7 = false;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 5;
LABEL_15:
  *a2 = v10;
  a2[1] = v9;
  a2[2] = v8;
  a2[3] = v6;
  a2[4] = v7;
  a2[5] = v2;
  return result;
}

__int64 nvidia_633860(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  _QWORD v9[2];

  v3 = *(_QWORD*)(a1 + 136);
  v9[0] = 0;
  NvOsEventPoolWait_plt(v3, 0, v9);
  v5 = 0;
  if (v9[0] == *(_QWORD*)(a1 + 144)) {
    v6 = *(_QWORD*)(a1 + 56);
    v9[0] = 0;
    v9[1] = 0;
    if (*(_DWORD*)(v6 + 40) < 0x17u) {
      v5 = 2;
    }
    else {
      v7 = nvidia_644da0(*(unsigned int*)(a1 + 48), 3222292503LL, v9, 16);
      if (v7 != 0) {
        v5 = v7;
      }
      else {
        v5 = 0;
      }
    }
    memcpy_plt(a2, v9, 16);
  }
  return v5;
}

__int64 nvidia_633af0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;

  v2 = nvidia_632550(a1);
  v3 = nvidia_632390(a1);
  if (v3 != 0) {
    v4 = v3;
  }
  else {
    v4 = 0;
  }
  if (v2 != 0) {
    return v2;
  }
  else {
    return v4;
  }
}

__int64 nvidia_633b30(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD v35[2];
  __int64 v36;
  __int64 v37;
  __int64 v38;

  if (*(_DWORD*)a2 == 1) {
    v9 = *(_QWORD*)(a2 + 8);
    v4 = *(_QWORD*)(a2 + 16);
    if (v4 == 0) {
      LODWORD(v4) = (unsigned int)v9 >> 2;
    }
    if (v9 < 4 || (v9 & (v9 - 1)) != 0) {
      return 11;
    }
  }
  else {
    if (*(_DWORD*)a2 != 0) {
      return 11;
    }
    v3 = *(_QWORD*)(a2 + 8);
    v4 = *(_QWORD*)(a2 + 16);
    v5 = v3 - 1;
    v6 = v3 >> 2;
    v7 = __clz(v5);
    if (v4 == 0) {
      LODWORD(v4) = v6;
    }
    v8 = 1LL << (-v7 & 63);
    if ((unsigned int)v8 <= 4) {
      LODWORD(v9) = 4;
    }
    else {
      LODWORD(v9) = v8;
    }
  }
  v12 = v9 - 3;
  *(_DWORD*)(a1 + 216) = v9;
  *(_DWORD*)(a1 + 220) = v4;
  v13 = *(unsigned __int8*)(a1 + 92);
  *(_DWORD*)(a1 + 224) = v12;
  if (v13 != 1) {
    v16 = 0;
    v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
    if (v17 >= 0x1A) {
      goto LABEL_22;
    }
    goto LABEL_41;
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = *(_QWORD*)(v14 + 360);
  if (*(_BYTE*)(*(_QWORD*)(v14 + 352) + 169LL) != 1) {
    if ((v15 & 0x8000000) != 0) {
      goto LABEL_40;
    }
  }
  else if ((v15 & 0x8000000) != 0 &&
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 56LL))(
                *(_QWORD*)(v14 + 296)) &
            1) != 0) {
  LABEL_40:
    v16 = 1;
    v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
    if (v17 < 0x1A) {
      goto LABEL_41;
    }
  LABEL_22:
    v18 = *(unsigned __int8*)(a1 + 93);
    v19 = *(unsigned __int8*)(a1 + 128);
    v20 = *(_DWORD*)(a1 + 216);
    v21 = *(_DWORD*)(a1 + 220);
    v37 = 0;
    v38 = 0;
    v36 = 0;
    if ((v18 | v16) != 0) {
      if (v16 != 0) {
        v22 = 3;
      }
      else {
        v22 = 2;
      }
      if (v18 == 0) {
        v22 = 1;
      }
      LODWORD(v36) = v22;
    }
    v35[0] = v20;
    v35[1] = v21;
    if (v19 != 0) {
      v23 = 0;
      result = (unsigned int)(2 * v19);
      v24 = -1;
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_55;
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) < 0x1Au) {
      return 2;
    }
    LODWORD(result) =
        nvidia_644da0(*(unsigned int*)(a1 + 48), 3223341082LL, v35, 32);
    if ((_DWORD)result != 0) {
      result = (unsigned int)result;
    }
    else {
      result = 0;
    }
    v24 = HIDWORD(v36);
    v23 = v37;
    if ((_DWORD)result == 0) {
    LABEL_55:
      *(_DWORD*)(a1 + 152) = v24;
      *(_DWORD*)(a1 + 156) = v23;
      goto LABEL_56;
    }
    return result;
  }
  if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 72LL))(
          *(_QWORD*)(v14 + 296)) != 2) {
    goto LABEL_40;
  }
  v16 = ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 56LL))(
             *(_QWORD*)(v14 + 296)) ^
         1) &
        1;
  v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
  if (v17 >= 0x1A) {
    goto LABEL_22;
  }
LABEL_41:
  if (v17 >= 0x18) {
    v25 = *(unsigned __int8*)(a1 + 93);
    v26 = *(_BYTE*)(a1 + 128);
    v27 = *(_DWORD*)(a1 + 216);
    v28 = *(_DWORD*)(a1 + 220);
    v37 = 0;
    v38 = 0;
    v36 = 0;
    if ((v25 | v16) != 0) {
      if (v16 != 0) {
        v29 = 3;
      }
      else {
        v29 = 2;
      }
      if (v25 == 0) {
        v29 = 1;
      }
      LODWORD(v36) = v29;
    }
    if ((v26 & 1) == 0) {
      v30 = *(_QWORD*)(a1 + 56);
      v35[0] = v27;
      v35[1] = v28;
      if (*(_DWORD*)(v30 + 40) >= 0x18u) {
        result = nvidia_644da0(*(unsigned int*)(a1 + 48), 1075857432, v35, 32);
        if ((_DWORD)result != 0) {
          return result;
        }
      LABEL_56:
        v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
            *(_QWORD*)(a1 + 8));
        v32 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v31 + 24LL))(
            v31, *(unsigned int*)(a1 + 216));
        v33 = *(_QWORD*)(a1 + 208);
        if (v33 != 0) {
          NvOsFree_plt(v33);
          *(_QWORD*)(a1 + 208) = 0;
        }
        if (v32 != 0 &&
            (v34 = NvOsAlloc_plt(v32), *(_QWORD*)(a1 + 208) = v34, v34 == 0)) {
          return 6;
        }
        else {
          return 0;
        }
      }
    }
  }
  return 2;
}

unsigned int* nvidia_633e30(unsigned int* result, _QWORD* a2, _QWORD* a3,
                            _QWORD* a4)
{
  __int64 v4;

  v4 = result[55];
  *a2 = result[54];
  *a4 = result[56];
  *a3 = v4;
  return result;
}

__int64 nvidia_633e50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7)
{
  int v7;
  int v8;
  int v9;
  __int64 result;

  if (a5 != nullptr) {
    v7 = *a5;
    if (a6 != 0) {
      goto LABEL_3;
    }
  LABEL_16:
    v8 = 0;
    if (v7 != 0) {
      goto LABEL_6;
    }
  LABEL_17:
    v9 = *(_DWORD*)(a1 + 104);
    if (v9 == 2) {
      return nvstl_mutex_impl_nvos_634620();
    }
    goto LABEL_18;
  }
  v7 = 0;
  if (a6 == 0) {
    goto LABEL_16;
  }
LABEL_3:
  v8 = *(_DWORD*)(a7 + 44);
  if (v8 == 0) {
    v8 = *(_DWORD*)(a1 + 104);
  }
  if ((v8 | v7) == 0) {
    goto LABEL_17;
  }
LABEL_6:
  if (v7 != 0) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  if (v7 == 0 || v8 == 0) {
  LABEL_13:
    if (v9 == 2) {
      return nvstl_mutex_impl_nvos_634620();
    }
  LABEL_18:
    if (v9 == 1) {
      return SdkRoutine_634120();
    }
    return 2;
  }
  if (v7 == v8) {
    v9 = v7;
    goto LABEL_13;
  }
  if (v7 != 2) {
    if (v7 != 1) {
      return 2;
    }
    result = SdkRoutine_634120();
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_25:
    if (v8 == 2) {
      return nvstl_mutex_impl_nvos_634620();
    }
    if (v8 == 1) {
      return SdkRoutine_634120();
    }
    return 2;
  }
  result = nvstl_mutex_impl_nvos_634620();
  if ((_DWORD)result == 0) {
    goto LABEL_25;
  }
  return result;
}

__int64 nvidia_634da0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v7;
  char v8;
  __int64 v9;
  int v10;
  __int64 v11;

  result = nvstl_mutex_impl_nvos_6321d0(a1, (_DWORD*)a2, a3);
  v7 = SdkData_e89a68[0];
  *(_QWORD*)(a1 + 196) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_QWORD*)a1 = v7 + 2;
  v8 = -(__int64)__clz(*(_QWORD*)(a3 + 8) - 1LL);
  v9 = 1LL << v8;
  if ((unsigned __int64)(1LL << v8) <= 2) {
    LODWORD(v9) = 2;
  }
  if ((v8 & 0x20) != 0) {
    v10 = 0;
  }
  else {
    v10 = v9;
  }
  *(_DWORD*)(a1 + 208) = v10;
  v11 = *(_QWORD*)(a2 + 1928);
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 216) = v11;
  *(_QWORD*)(a1 + 224) = 0;
  return result;
}

__int64 nvidia_634ea0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;

  if (*(_QWORD*)(a1 + 232) != 0) {
    v2 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
        *(_QWORD*)(a1 + 8));
    v3 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 24LL))(
        v2, *(unsigned int*)(a1 + 208));
    v4 = NvRmMemUnmap_plt(*(unsigned int*)(a1 + 196), *(_QWORD*)(a1 + 232), v3);
    *(_QWORD*)(a1 + 232) = 0;
    v5 = *(unsigned int*)(a1 + 196);
    if ((_DWORD)v5 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = 0;
  v5 = *(unsigned int*)(a1 + 196);
  if ((_DWORD)v5 != 0) {
  LABEL_3:
    NvRmMemHandleFree_plt(v5);
    *(_DWORD*)(a1 + 196) = 0;
  }
LABEL_4:
  if (*(_QWORD*)(a1 + 224) != 0) {
    v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
        *(_QWORD*)(a1 + 8));
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 72LL))(v6);
    v8 = NvRmMemUnmap_plt(*(unsigned int*)(a1 + 200), *(_QWORD*)(a1 + 224),
                          (v7 + SdkData_ea4520 - 1) & -SdkData_ea4520);
    if (v8 != 0 && v4 == 0) {
      v4 = v8;
    }
    *(_QWORD*)(a1 + 224) = 0;
  }
  v9 = *(unsigned int*)(a1 + 200);
  if ((_DWORD)v9 != 0) {
    NvRmMemHandleFree_plt(v9);
    *(_DWORD*)(a1 + 200) = 0;
  }
  return v4;
}

__int64 nvidia_634fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;

  if (*(_DWORD*)(a1 + 208) == 0) {
    return 17;
  }
  if (*(_BYTE*)(a1 + 93) != 1) {
    return 2;
  }
  v2 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  v15 = 0;
  v16 = 0;
  v12 = 0;
  v14 = 0;
  v13 = -1;
  v17 = -1;
  v18 = 0;
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 360LL);
  LOBYTE(v18) = 1;
  BYTE4(v12) = 1;
  v4 = *(unsigned int*)(a1 + 208);
  if ((((v3 & 0x100000) == 0) | *SdkData_e89a18 & 1) != 0) {
    v5 = 2;
  }
  else {
    v5 = 1;
  }
  v15 = v5 | 0x100000000LL;
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 24LL))(v2, v4);
  result = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64*,
                           __int64))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8), 2, v6, 2304, &v12, a1 + 196);
  if ((_DWORD)result == 0) {
    result = NvRmMemMap_plt(*(unsigned int*)(a1 + 196), 0, v6, 3, a1 + 232);
    if ((_DWORD)result == 0) {
      v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
          *(_QWORD*)(a1 + 8));
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
      v10 = -*SdkData_e89a40;
      v11 = v9 + *SdkData_e89a40 - 1;
      result = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64*,
                               __int64))(**(_QWORD**)(a1 + 8) + 80LL))(
          *(_QWORD*)(a1 + 8), 2, v11 & v10, 2304, &v12, a1 + 200);
      if ((_DWORD)result == 0) {
        return NvRmMemMap_plt(*(unsigned int*)(a1 + 200), 0, v11 & v10, 3,
                              a1 + 224);
      }
    }
  }
  return result;
}

__int64 nvidia_635140(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  bool v4;
  __int64 result;
  unsigned int v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  int v14;
  int v15;
  _DWORD v16[4];
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if (*(_DWORD*)a2 != 0) {
    if (*(_DWORD*)a2 != 1) {
      return 11;
    }
    v3 = *(_QWORD*)(a2 + 8);
    v4 = v3 >= 2 && (v3 & (v3 - 1)) == 0;
    if (!v4) {
      return 11;
    }
  }
  result = nvidia_634fa0(a1);
  if ((_DWORD)result == 0) {
    v6 = *(_DWORD*)(a1 + 196);
    v7 = *(_DWORD*)(a1 + 200);
    result = NvRmMemLoadMapBufferSgl_plt(v6);
    if ((_DWORD)result == 0) {
      result = NvRmMemLoadMapBufferSgl_plt(*(unsigned int*)(a1 + 200));
      if ((_DWORD)result == 0) {
        v8 = *(_QWORD*)(a1 + 8);
        v9 = *(_DWORD*)(v8 + 320);
        if (v9 >= 0x21) {
          if (*(_BYTE*)(a1 + 92) != 1) {
            v12 = 0;
          LABEL_29:
            v13 = *(_DWORD*)(a1 + 208);
            v4 = *(_BYTE*)(a1 + 128) == 0;
            v14 = v12 & 1 | (2 * *(unsigned __int8*)(a1 + 93));
            v23 = 0;
            v24 = 0;
            v21 = 0;
            v22 = 0;
            v19 = 0;
            v20 = 0;
            v18 = 0;
            v16[3] = v7;
            v17 = v6;
            v16[0] = v13;
            if (v4) {
              v15 = 8;
            }
            else {
              v15 = 12;
            }
            v16[1] = 0;
            v16[2] = v15 | v14;
            if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) < 0x21u) {
              *(_DWORD*)(a1 + 248) = 0;
              return 2;
            }
            else {
              result = nvidia_644da0(*(unsigned int*)(a1 + 48), 3226486817LL,
                                     v16, 80);
              *(_DWORD*)(a1 + 248) = HIDWORD(v17);
            }
            return result;
          }
          v10 = *(_QWORD*)(v8 + 360);
          if (*(_BYTE*)(*(_QWORD*)(v8 + 352) + 169LL) == 1) {
            if ((v10 & 0x8000000) != 0 &&
                ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 56LL))(
                     *(_QWORD*)(v8 + 296)) &
                 1) != 0) {
              goto LABEL_28;
            }
          }
          else if ((v10 & 0x8000000) != 0) {
            goto LABEL_28;
          }
          if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 72LL))(
                  *(_QWORD*)(v8 + 296)) == 2) {
            v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 56LL))(
                      *(_QWORD*)(v8 + 296)) ^
                  1;
            goto LABEL_29;
          }
        LABEL_28:
          v12 = 1;
          goto LABEL_29;
        }
        result = 2;
        if (v9 < 0x18 || (*(_BYTE*)(a1 + 92) & 1) == 0) {
          return result;
        }
        v11 = *(_QWORD*)(v8 + 360);
        if (*(_BYTE*)(*(_QWORD*)(v8 + 352) + 169LL) == 1) {
          if ((v11 & 0x8000000) != 0 &&
              ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 56LL))(
                   *(_QWORD*)(v8 + 296)) &
               1) != 0) {
            return 2;
          }
        }
        else if ((v11 & 0x8000000) != 0) {
          return result;
        }
        if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 72LL))(
                *(_QWORD*)(v8 + 296)) == 2) {
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 296) + 56LL))(
              *(_QWORD*)(v8 + 296));
        }
        return 2;
      }
    }
  }
  return result;
}

__int64 nvidia_635390(__int64 result, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;

  v4 = *(unsigned int*)(result + 208);
  *a2 = v4--;
  *a4 = v4;
  *a3 = v4;
  return result;
}

__int64 nvidia_635510(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;

  result = nvidia_629030((_QWORD*)a1);
  v5 = SdkData_e89a70[0];
  *(_BYTE*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = -1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 32) = a2 + 280;
  *(_QWORD*)(a1 + 40) = 0;
  return result;
}

__int64 nvidia_635560(__int64 a1)
{
  int v3;

  if (*(_DWORD*)(a1 + 24) != -1) {
    return 8;
  }
  v3 = NvOsDrvOpen_plt(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 128LL));
  *(_DWORD*)(a1 + 24) = v3;
  if (v3 == -1) {
    return 196625;
  }
  else {
    return 2;
  }
}

__int64 nvidia_6355c0(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 48);
  return result;
}

__int64 nvidia_6355d0(__int64 a1, unsigned int a2)
{
  if (a2 >= 2) {
    return 11;
  }
  else {
    return 2;
  }
}

__int64 nvidia_6355f0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;

  v3 = *a3;
  *a3 = 0;
  if (v3 != 0) {
    return 2;
  }
  else {
    return 0;
  }
}

__int64 nvidia_635610(__int64 a1)
{
  unsigned int v2;
  __int64 v3;

  if (*(_QWORD*)(a1 + 40) == 0) {
    v2 = 0;
    v3 = *(unsigned int*)(a1 + 24);
    if ((_DWORD)v3 == -1) {
      return v2;
    }
    goto LABEL_3;
  }
  v2 = 2;
  *(_QWORD*)(a1 + 40) = 0;
  v3 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v3 != -1) {
  LABEL_3:
    NvOsDrvClose_plt(v3);
    *(_DWORD*)(a1 + 24) = -1;
  }
  return v2;
}

__int64 nvidia_635670(__int64 a1)
{
  unsigned int v1;
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e744d0;
  v1 = *(_DWORD*)(a1 + 24);
  if (v1 != -1) {
    v2 = a1;
    NvOsDrvClose_plt(v1);
    a1 = v2;
    *(_DWORD*)(v2 + 24) = -1;
  }
  return SdkRoutine_629ca0(a1);
}

void nvidia_6356d0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89a70[0] + 2;
  v2 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 24) = -1;
  }
  SdkRoutine_629ca0(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvidia_635b00(__int64 a1)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  if (*(_QWORD*)(a1 + 1912) != 0) {
    NvOsEventDestroy_plt();
  }
  if (*(_DWORD*)(a1 + 1936) == 0 || *(_DWORD*)(a1 + 920) == -1) {
    v3 = 0;
    v4 = *(unsigned int*)(a1 + 944);
    if ((_DWORD)v4 != -1) {
    LABEL_11:
      NvOsDrvClose_plt(v4);
      *(_DWORD*)(a1 + 944) = -1;
    }
  }
  else {
    v5 = *(_QWORD*)(a1 + 1928);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
    v3 = NvOsUnMapRegSpace_plt(v5, v7, 4096);
    *(_DWORD*)(a1 + 1936) = 0;
    *(_QWORD*)(a1 + 1928) = 0;
    v4 = *(unsigned int*)(a1 + 944);
    if ((_DWORD)v4 != -1) {
      goto LABEL_11;
    }
  }
  v8 = *(unsigned int*)(a1 + 920);
  if ((_DWORD)v8 != -1) {
    NvOsDrvClose_plt(v8);
    *(_DWORD*)(a1 + 920) = -1;
  }
  return v3;
}

__int64 nvidia_635be0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  char v4;
  unsigned __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  unsigned int* v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 i;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v25;
  unsigned int* v26;
  __int64 v27;
  int v28;
  _DWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  _DWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  int* v38;
  int v39;
  int v40;
  int v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _DWORD* v44;
  _DWORD* v45;
  unsigned __int64 v46;
  unsigned int v47;
  int v48;
  int v49;
  _DWORD* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;

  v53 = 0;
  v54 = 0;
  v52 = 0;
  v3 = nvidia_638760_alt1(a1, &v52);
  if (v3 == 0) {
    v4 = v53;
    if (v53 != 0) {
      v5 = a2[1];
      if (v5 == 0) {
        goto LABEL_23;
      }
      v6 = v52;
      v7 = (_DWORD*)*a2;
      if ((*SdkData_e89a90 & 1) != 0) {
        if (v53 == 1) {
          v37 = 0;
        }
        else {
          v43 = v53 & 0xFFFFFFFFFFFFFFFELL;
          v37 = 0;
          do {
            v44 = (_DWORD*)(v6 + 16 * v37);
            if (*v44 <= 1u) {
              v45 = v7;
              v46 = v5;
              while (*v45 != *v44 || v45[1] != v44[1]) {
                --v46;
                v45 += 8;
                if (v46 == 0) {
                  goto LABEL_57;
                }
              }
              v45[6] = v44[2];
            }
          LABEL_57:
            v47 = v44[4];
            if (v47 <= 1) {
              v49 = v44[5];
              v48 = v44[6];
              v50 = v7;
              v51 = v5;
              while (*v50 != v47 || v50[1] != v49) {
                --v51;
                v50 += 8;
                if (v51 == 0) {
                  goto LABEL_50;
                }
              }
              v50[6] = v48;
            }
          LABEL_50:
            v37 += 2;
          } while (v37 != v43);
        }
        if ((v4 & 1) != 0) {
          v38 = (int*)(v6 + 16 * v37);
          v39 = *v38;
          if ((unsigned int)*v38 <= 1) {
            v41 = v38[1];
            v40 = v38[2];
            v42 = v5;
            while (*v7 != v39 || v7[1] != v41) {
              --v42;
              v7 += 8;
              if (v42 == 0) {
                goto LABEL_15;
              }
            }
            v7[6] = v40;
          }
        }
      }
      else {
        if (v53 == 1) {
          v8 = 0;
        }
        else {
          v25 = v53 & 0xFFFFFFFFFFFFFFFELL;
          v8 = 0;
          do {
            v26 = (unsigned int*)(v6 + 16 * v8);
            v27 = *v26;
            if ((unsigned int)v27 <= 2) {
              v28 = SdkData_c77530[v27];
              v29 = v7;
              v30 = v5;
              while (*v29 != v28 || v29[1] != v26[1]) {
                --v30;
                v29 += 8;
                if (v30 == 0) {
                  goto LABEL_34;
                }
              }
              v29[6] = v26[2];
            }
          LABEL_34:
            v31 = v26[4];
            if ((unsigned int)v31 <= 2) {
              v33 = v26[5];
              v32 = v26[6];
              v34 = SdkData_c77530[v31];
              v35 = v7;
              v36 = v5;
              while (*v35 != v34 || v35[1] != v33) {
                --v36;
                v35 += 8;
                if (v36 == 0) {
                  goto LABEL_27;
                }
              }
              v35[6] = v32;
            }
          LABEL_27:
            v8 += 2;
          } while (v8 != v25);
        }
        if ((v4 & 1) != 0) {
          v9 = (unsigned int*)(v6 + 16 * v8);
          v10 = *v9;
          if ((unsigned int)v10 <= 2) {
            v12 = v9[1];
            v11 = v9[2];
            v13 = SdkData_c77530[v10];
            v14 = v5;
            while (*v7 != v13 || v7[1] != v12) {
              --v14;
              v7 += 8;
              if (v14 == 0) {
                goto LABEL_15;
              }
            }
            v7[6] = v11;
          }
        }
      }
    }
    else {
      v5 = a2[1];
    }
  LABEL_15:
    if (v5 != 0) {
      v15 = 0;
      v16 = 0;
      for (i = 0; i < v5; ++i) {
        v18 = (_QWORD*)(*a2 + v15);
        if (*(_DWORD*)v18 != 1 || *((_DWORD*)v18 + 6) != -1) {
          if (i != v16) {
            v19 = (_QWORD*)(*a2 + 32 * v16);
            v20 = *v18;
            v21 = v18[1];
            v23 = v18[2];
            v22 = v18[3];
            v19[2] = v23;
            v19[3] = v22;
            *v19 = v20;
            v19[1] = v21;
            v5 = a2[1];
          }
          ++v16;
        }
        v15 += 32;
      }
      goto LABEL_24;
    }
  LABEL_23:
    v16 = 0;
  LABEL_24:
    nvidia_628d40(a2, v16);
    v3 = 0;
  }
  nvidia_624080(&v52, 0);
  NvOsFree_plt(v52);
  return v3;
}

__int64 nvidia_635f20(__int64 result, int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  _BOOL4 v26;
  int v28;
  int v29;
  int v30;
  _BOOL4 v32;
  _BOOL4 v35;
  int v37;
  int v38;
  int v39;
  _BOOL4 v41;
  _DWORD* v42;
  _BOOL4 v44;
  int v46;
  __int64 v47;
  _DWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE v58[8];

  if (*a2 == 0) {
    v2 = result + 24;
    v4 = result;
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    result = SdkRoutine_6318c0((unsigned int*)(v4 + 920), v2,
                               (_QWORD*)(v4 + 264), v4 + 960, v5);
    *((_BYTE*)a2 + 4) = 1;
    v6 = *a2;
    if ((_DWORD)result != 0) {
      if (v6 == 0) {
        *a2 = result;
      }
    }
    else {
      if (v6 != 0) {
        return result;
      }
      v7 = SdkData_e89a78[0];
      v8 = atomic_fetch_add_explicit((atomic_ullong* volatile)SdkData_e89a78[0],
                                     1u, memory_order_relaxed) +
           1;
      *(_QWORD*)(v4 + 1848) = v8;
      if (v8 < 0) {
        *v7 = 0x8000000000000000LL;
        *((_BYTE*)a2 + 4) = 1;
        if (*a2 == 0) {
          *a2 = 17;
        }
      }
      else {
        *((_BYTE*)a2 + 4) = 1;
        if (*a2 != 0) {
          return result;
        }
        v9 = *(_QWORD*)(v4 + 360);
        v58[0] = (v9 & 0x10000000000LL) != 0;
        v58[1] = (v9 & 0x20000000000LL) != 0;
        v58[2] = (v9 & 0x40000000000LL) != 0;
        v58[3] = (v9 & 0x80000000000LL) != 0;
        v10 = *(_QWORD*)(v4 + 272);
        v58[4] =
            (v9 >> 44) & (*(_DWORD*)(v4 + 332) > 3u) & (*SdkData_e89a10 ^ 1);
        result = nvidia_626ca0(v10, v58, (__int64*)(v4 + 872));
        *((_BYTE*)a2 + 4) = 1;
        v11 = *a2;
        if ((_DWORD)result != 0) {
          if (v11 == 0) {
            *a2 = result;
          }
        }
        else {
          if (v11 != 0) {
            return result;
          }
          v12 = *(_QWORD*)(v4 + 272);
          *(_QWORD*)(v4 + 1608) = *(_QWORD*)(v4 + 872);
          *(_QWORD*)(v4 + 1616) = *(_QWORD*)(v4 + 880);
          nvidia_627100(v12, (__int64*)(v4 + 872), (_DWORD*)(v4 + 960));
          result =
              nvidia_627b10(*(_QWORD*)(v4 + 272), v58, v4 + 960, v4 + 1864);
          *((_BYTE*)a2 + 4) = 1;
          v13 = *a2;
          if ((_DWORD)result != 0) {
            if (v13 == 0) {
              *a2 = result;
            }
          }
          else {
            if (v13 != 0) {
              return result;
            }
            if (*(_DWORD*)(v4 + 332) <= 0x1Eu) {
              v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 272LL))(v14);
              v15 = *(_QWORD*)(v4 + 1872);
              if (v15 != 0) {
                v16 = *(_QWORD*)(v4 + 1864);
                v17 = *(_QWORD*)(v4 + 1872) & 3LL;
                if (v15 >= 4) {
                  v19 = (_DWORD*)(v16 + 64);
                  v20 = 0;
                  v21 = -(__int64)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                  do {
                    v22 = *(v19 - 16);
                    v23 = *(v19 - 15);
                    v24 = v22 | v23;
                    v26 = v22 == 1 && v23 == (_DWORD)result;
                    if (v24 == 0 || v26) {
                      *(v19 - 10) = 0;
                    }
                    v28 = *(v19 - 8);
                    v29 = *(v19 - 7);
                    v30 = v28 | v29;
                    v32 = v28 == 1 && v29 == (_DWORD)result;
                    if (v30 == 0 || v32) {
                      *(v19 - 2) = 0;
                    }
                    v35 = *v19 == 1 && v19[1] == (_DWORD)result;
                    if (*(_QWORD*)v19 == 0 || v35) {
                      v19[6] = 0;
                    }
                    v37 = v19[8];
                    v38 = v19[9];
                    v39 = v37 | v38;
                    v41 = v37 == 1 && v38 == (_DWORD)result;
                    if (v39 == 0 || v41) {
                      v19[14] = 0;
                    }
                    v20 -= 4;
                    v19 += 32;
                  } while (v21 != v20);
                  v18 = -v20;
                }
                else {
                  v18 = 0;
                }
                if (v17 != 0) {
                  v42 = (_DWORD*)(v16 + 32 * v18);
                  do {
                    v44 = *v42 == 1 && v42[1] == (_DWORD)result;
                    if (*(_QWORD*)v42 == 0 || v44) {
                      v42[6] = 0;
                    }
                    v42 += 8;
                    --v17;
                  } while (v17 != 0);
                }
              }
              *((_BYTE*)a2 + 4) = 1;
            }
            else {
              result = nvidia_635be0(v4 + 920, (__int64*)(v4 + 1864));
              *((_BYTE*)a2 + 4) = 1;
              if ((_DWORD)result != 0) {
                if (*a2 == 0) {
                  *a2 = result;
                }
                return result;
              }
            }
            if (*a2 == 0) {
              result = nvidia_627de0(*(_QWORD**)(v4 + 272), v4 + 1864,
                                     (_QWORD*)(v4 + 760));
              *((_BYTE*)a2 + 4) = 1;
              v46 = *a2;
              if ((_DWORD)result != 0) {
                if (v46 == 0) {
                  *a2 = result;
                }
              }
              else if (v46 == 0) {
                *(_QWORD*)(v4 + 1416) = *(_QWORD*)(v4 + 1848);
                v47 = *(_QWORD*)(v4 + 1872);
                if (v47 != 0) {
                  v48 = *(_DWORD**)(v4 + 1864);
                  v49 = (v47 - 1) & 0x7FFFFFFFFFFFFFFLL;
                  v50 = (v49 + 1) & 3;
                  if (v49 >= 3) {
                    v57 = (v49 + 1) & 0xFFFFFFFFFFFFFFCLL;
                    v52 = -1;
                    v51 = 0;
                    do {
                      if (*v48 == 0 && v48[1] < v52 && (int)v48[6] > -1) {
                        v51 = v48[6];
                        v52 = v48[1];
                      }
                      if (v48[8] == 0 && v48[9] < v52 && (int)v48[14] > -1) {
                        v51 = v48[14];
                        v52 = v48[9];
                      }
                      if (v48[16] == 0 && v48[17] < v52 && (int)v48[22] > -1) {
                        v51 = v48[22];
                        v52 = v48[17];
                      }
                      if (v48[24] == 0 && v48[25] < v52 && (int)v48[30] > -1) {
                        v51 = v48[30];
                        v52 = v48[25];
                      }
                      v48 += 32;
                      v57 -= 4;
                    } while (v57 != 0);
                  }
                  else {
                    v51 = 0;
                    v52 = -1;
                  }
                  for (; v50 != 0; --v50) {
                    if (*v48 == 0 && v48[1] < v52 && (int)v48[6] > -1) {
                      v51 = v48[6];
                      v52 = v48[1];
                    }
                    v48 += 8;
                  }
                }
                else {
                  v51 = 0;
                }
                *(_QWORD*)(v4 + 1632) = v47;
                *(_DWORD*)(v4 + 1940) = v51;
                *(_QWORD*)(v4 + 976) = v4 + 432;
                *(_QWORD*)(v4 + 984) = *(_QWORD*)(v4 + 440);
                *(_QWORD*)(v4 + 1824) = *(_QWORD*)(v4 + 520);
                *(_QWORD*)(v4 + 1832) = *(_QWORD*)(v4 + 544);
                v53 = *(_QWORD*)(v4 + 1216) -
                      ((*(_QWORD*)(v4 + 1216) >> 1) & 0x5555555555555555LL);
                v54 = *(_QWORD*)(v4 + 760);
                *(_DWORD*)(v4 + 1820) =
                    (unsigned int)((0x101010101010101LL *
                                    (((v53 & 0x3333333333333333LL) +
                                      ((v53 >> 2) & 0x3333333333333333LL) +
                                      (((v53 & 0x3333333333333333LL) +
                                        ((v53 >> 2) & 0x3333333333333333LL)) >>
                                       4)) &
                                     0xF0F0F0F0F0F0F0FLL)) >>
                                   32) >>
                    24;
                *(_QWORD*)(v4 + 1224) = *(_QWORD*)(v4 + 568);
                *(_QWORD*)(v4 + 1232) = *(_QWORD*)(v4 + 592);
                *(_QWORD*)(v4 + 1240) = *(_QWORD*)(v4 + 616);
                *(_QWORD*)(v4 + 1256) = *(_QWORD*)(v4 + 640);
                *(_QWORD*)(v4 + 1264) = *(_QWORD*)(v4 + 664);
                *(_QWORD*)(v4 + 1272) = *(_QWORD*)(v4 + 688);
                *(_QWORD*)(v4 + 1280) = *(_QWORD*)(v4 + 712);
                if (*(_QWORD*)(v4 + 768) != 0) {
                  v55 = v54;
                }
                else {
                  v55 = 0;
                }
                *(_QWORD*)(v4 + 1288) = v55;
                *(_QWORD*)(v4 + 1320) = *(_QWORD*)(v4 + 784);
                *(_QWORD*)(v4 + 1328) = *(_QWORD*)(v4 + 792);
                *(_QWORD*)(v4 + 1352) = *(_QWORD*)(v4 + 808);
                *(_QWORD*)(v4 + 1360) = *(_QWORD*)(v4 + 816);
                v56 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
                result = (*(__int64 (**)(__int64, _QWORD))(
                    *(_QWORD*)v56 + 176LL))(v56, *(_QWORD*)(v4 + 1248));
                *(_DWORD*)(v4 + 1512) = result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_6364e0(__int64 a1, __int64 a2, int* a3)
{
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  char v19;
  _QWORD v20[3];

  v18 = 0;
  v5 = nvidia_638c20(a1 + 24);
  v19 = 1;
  if (v5 != 0) {
    v18 = v5;
  }
  else {
    v6 = *(_QWORD*)(a1 + 48);
    if (v6 == 0) {
      v7 = 15;
      goto LABEL_7;
    }
    if (*(_DWORD*)(a1 + 920) != -1) {
      v7 = 8;
    LABEL_5:
      v19 = 1;
    LABEL_7:
      v18 = v7;
      goto LABEL_8;
    }
    v17 = NvOsDrvOpen_plt(v6);
    *(_DWORD*)(a1 + 920) = v17;
    if (v17 == -1) {
      v7 = 196625;
      goto LABEL_5;
    }
    v19 = 1;
  }
LABEL_8:
  nvidia_635f20(a1, (int*)&v18);
  result = v18;
  if (v18 != 0) {
    return result;
  }
  v9 = *a3;
  result = 2;
  if (*a3 == 0) {
  LABEL_14:
    *(_DWORD*)(a1 + 972) = 2;
    goto LABEL_15;
  }
  if (v9 == 1) {
    return result;
  }
  if (v9 == 2) {
    if ((SdkData_10406ce & 1) != 0) {
      return result;
    }
    goto LABEL_14;
  }
LABEL_15:
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  result =
      (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 136LL))(v10, a1 + 896);
  if ((_DWORD)result == 0) {
    v11 = *(unsigned int*)(a1 + 920);
    *(_QWORD*)(a1 + 1640) = *(_QWORD*)(a1 + 896);
    *(_QWORD*)(a1 + 1648) = *(_QWORD*)(a1 + 904);
    result = NvOsSystemEventCreate_plt(v11, 2, a1 + 1912);
    if ((_DWORD)result == 0) {
      if (*(_DWORD*)(a1 + 332) >= 4u && (SdkData_10406d1 & 1) == 0 &&
          (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
        *(_DWORD*)(a1 + 1804) = 0;
      }
      memset(v20, 0, sizeof(v20));
      *(_QWORD*)(a1 + 512) = 0;
      nvidia_637730(v20, 0);
      NvOsFree_plt(v20[0]);
      if ((*(_BYTE*)(a1 + 363) & 0x40) != 0 &&
          (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 288) + 72LL))(
              *(_QWORD*)(a1 + 288)) != 0) {
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 56LL))(v12);
        v20[0] = 0;
        result = NvOsMapRegSpace_plt(v20, v13, 4096);
        if ((_DWORD)result != 0) {
          return result;
        }
        v14 = v20[0];
        *(_DWORD*)(a1 + 1936) = 4096;
        *(_QWORD*)(a1 + 1928) = v14;
      }
      if ((SdkData_10406fa & 1) == 0) {
        v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 304LL))(v15, a1 + 960);
      }
      v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 328LL))(
          v16, a1 + 1768);
    }
  }
  return result;
}

__int64 nvidia_636750(__int64 a1, int a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, int* a7)
{
  char v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;

  v8 = a2;
  if (*(_BYTE*)(a5 + 7) != 1 || (v9 = 2, (*(_DWORD*)(a5 + 12) | a2) == 2) &&
                                    (*(_BYTE*)(a5 + 6) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 352) + 169LL) & 1) != 0 ||
        (SdkData_10406f8 & 1) != 0) {
      v9 = nvidia_6290b0(a1, 2, a3, a4, (unsigned int*)a5, a6);
      if (v9 != 0) {
        return v9;
      }
      v11 = 2 - (v8 & 1);
    }
    else {
      v10 = *(_DWORD*)(a5 + 12);
      if ((a2 & 2) == 0) {
        goto LABEL_17;
      }
      v11 = 2;
      v12 = a1;
      v13 = a3;
      v14 = a4;
      v15 = a5;
      v16 = a6;
      v17 = nvidia_6290b0(a1, 2, a3, a4, (unsigned int*)a5, a6);
      a3 = v13;
      a4 = v14;
      a5 = v15;
      a6 = v16;
      v18 = v17;
      a1 = v12;
      if (v18 != 0) {
      LABEL_17:
        if (((v8 & 2 ^ 2) & v10) == 0) {
          return 6;
        }
        v11 = 2;
        if ((unsigned int)nvidia_6290b0(a1, 2, a3, a4, (unsigned int*)a5, a6) !=
            0) {
          return 6;
        }
      }
    }
    v9 = 0;
    *a7 = v11;
  }
  return v9;
}

__int64 nvidia_636870(__int64 a1, int a2, __int64 a3, int a4, __int64 a5,
                      unsigned int* a6)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v14;
  __int64 result;
  unsigned int v16;
  unsigned int v17;
  _QWORD v18[2];

  v7 = *(_DWORD*)(a5 + 24);
  v6 = *(_DWORD*)(a5 + 28);
  v17 = 0;
  v18[0] = 0;
  v18[1] = 0;
  if (v6 != -1) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v14 + 144LL))(v14, v6,
                                                                    v18);
    if ((v18[0] & 1) == 0) {
      return 4;
    }
  }
  if (v7 >= 4) {
    return 11;
  }
  result = nvidia_636750(a1, a2, a3, a4, a5, (__int64)&v17, (int*)v18);
  if ((_DWORD)result != 0) {
    if (v17 != 0) {
      v16 = result;
      NvRmMemHandleFree_plt(v17);
      return v16;
    }
  }
  else {
    *a6 = v17;
  }
  return result;
}

__int64 nvidia_636960(_QWORD* a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, _DWORD* a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  _QWORD v13[4];
  int v14;
  int v15;
  __int64 v16[3];

  v7 = a1[181];
  v8 = a1[182];
  memset(v16, 0, sizeof(v16));
  v13[0] = v7;
  v13[1] = v8;
  v9 = a1[184];
  v13[2] = a1[183];
  v13[3] = v9;
  LODWORD(v7) = *a7;
  v14 = a4;
  v15 = v7;
  v10 = nvidia_62ed90((__int64)v13, v16);
  if (v10 != 0) {
    v11 = v10;
  }
  else {
    v11 = 2;
  }
  nvidia_62ad20(v16, 0);
  NvOsFree_plt(v16[0]);
  return v11;
}

__int64 nvidia_6369f0(__int64 a1, _QWORD* a2)
{
  if (*(_DWORD*)(a1 + 1180) == 1) {
    return 2;
  }
  *a2 = 0;
  return 0;
}

__int64 nvidia_636a10()
{
  if ((SdkData_10406ce & 1) != 0) {
    return 0;
  }
  else {
    return (unsigned int)NvRmSyncCalculateSizeForInplaceSyncpoints_plt(1);
  }
}

__int64 nvidia_636a50(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  if (*a3 != 0) {
    return 8;
  }
  v7 = NvOsAlloc_plt(104);
  if (v7 != 0) {
    v8 = v7;
    nvidia_62cfe0(v7, a1, a2);
    *a3 = v8;
    result = nvidia_62d0f0(v8, a2);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v9 = *a3;
  if (*a3 != 0) {
    v10 = result;
    (**(void (***)(__int64))v9)(*a3);
    v11 = *a3;
    *(_BYTE*)(v9 + 17) = 1;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      NvOsFree_plt(*a3);
      *a3 = 0;
    }
    return v10;
  }
  return result;
}

__int64 nvidia_636b20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;

  if (*(_BYTE*)(a2 + 96) != 1) {
    if (*a3 != 0) {
      return 8;
    }
    v10 = NvOsAlloc_plt(232);
    if (v10 != 0) {
      v11 = v10;
      nvstl_mutex_impl_nvos_633a70(v10, (_DWORD*)a1, a2);
      *a3 = v11;
      result = nvidia_632740(v11, a2);
      if ((_DWORD)result == 0) {
        return result;
      }
    }
    else {
      result = 6;
    }
    goto LABEL_19;
  }
  if ((*(_BYTE*)(a1 + 363) & 0x40) == 0) {
    return 2;
  }
  if ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 288) + 72LL))(
          *(_QWORD*)(a1 + 288)) == 0) {
    return 2;
  }
  result = 8;
  if (*(_QWORD*)(a1 + 1928) != 0 && *(_DWORD*)(a1 + 1936) != 0 && *a3 == 0) {
    v7 = NvOsAlloc_plt(256);
    if (v7 == 0) {
      result = 6;
      v12 = *a3;
      if (*a3 == 0) {
        return result;
      }
    LABEL_22:
      v13 = result;
      (**(void (***)(__int64))v12)(v12);
      result = v13;
      *(_BYTE*)(v12 + 17) = 1;
      if (*a3 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)*a3 + 8LL))((void*)(_QWORD*)*a3, *a3);
        NvOsFree_plt(*a3);
        *a3 = 0;
        return v13;
      }
      return result;
    }
    v8 = v7;
    nvidia_634da0(v7, a1, a2);
    *a3 = v8;
    result = nvidia_632740(v8, a2);
    if ((_DWORD)result == 0) {
      return result;
    }
  LABEL_19:
    v12 = *a3;
    if (*a3 == 0) {
      return result;
    }
    goto LABEL_22;
  }
  return result;
}

__int64 nvidia_636cc0(__int64 a1, unsigned int a2, unsigned int a3, int a4,
                      unsigned int a5)
{
  __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;

  v10 = NvOsGetTimeUS_plt();
  v15 = 0;
  result = NvRmMemRead_plt(a2, a3, &v15, 4);
  if ((_DWORD)result == 0) {
    if (a5 != 0) {
      if (a5 == -1) {
        while (v15 - a4 < 0) {
          result = NvOsEventWait_plt(*(_QWORD*)(a1 + 1912), 0xFFFFFFFFLL);
          if ((_DWORD)result != 5) {
            v15 = 0;
            result = NvRmMemRead_plt(a2, a3, &v15, 4);
            if ((_DWORD)result == 0) {
              continue;
            }
          }
          return result;
        }
      }
      else {
        v12 = v10 + a5;
        while (v15 - a4 < 0) {
          v13 = NvOsGetTimeUS_plt();
          if (v12 <= v13) {
            return 5;
          }
          if (v12 - v13 >= 0xFFFFFFFF) {
            v14 = 0xFFFFFFFFLL;
          }
          else {
            v14 = v12 - v13;
          }
          result = NvOsEventWait_plt(*(_QWORD*)(a1 + 1912), v14);
          if ((_DWORD)result != 5) {
            v15 = 0;
            result = NvRmMemRead_plt(a2, a3, &v15, 4);
            if ((_DWORD)result == 0) {
              continue;
            }
          }
          return result;
        }
      }
    }
    else if (v15 - a4 < 0) {
      return 5;
    }
    return 0;
  }
  return result;
}

__int64 nvidia_636e00(_QWORD* a1, _QWORD* a2)
{
  unsigned int v2;
  __int64 result;
  _QWORD* v6;

  v2 = *((_DWORD*)a1 + 83);
  result = 2;
  if (v2 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (a1[45] & 0x100000000000LL) != 0) {
    v6 = X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *a1 + 56LL))((void*)a1, a1));
    *a2 = (*(unsigned int (**)(_QWORD*))(*v6 + 216LL))(v6);
    return 0;
  }
  return result;
}

__int64 nvidia_636e80(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4)
{
  unsigned int v4;
  __int64 result;
  int v7;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned __int64 v14;

  v4 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v4 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    v7 = *(_DWORD*)(a1 + 1600);
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 200LL))(v11);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v14 = (*(unsigned int (**)(__int64))(*(_QWORD*)v13 + 208LL))(v13) + v12;
    if (a2 >= v12 && a2 < v14 && a3 == v7) {
      return nvidia_6391b0(a1 + 1920, (unsigned int)a2, a3, a4);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_636f70(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v2 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    if (a2 == *(_DWORD*)(a1 + 1600)) {
      return nvidia_639270(a1 + 1920);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_636fc0(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4)
{
  unsigned int v4;
  __int64 result;
  int v7;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned __int64 v14;

  v4 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v4 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    v7 = *(_DWORD*)(a1 + 1600);
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 200LL))(v11);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v14 = (*(unsigned int (**)(__int64))(*(_QWORD*)v13 + 216LL))(v13) + v12;
    if (a2 >= v12 && a2 < v14 && a3 == v7) {
      return nvidia_639330(a1 + 1920, (unsigned int)a2, a3, a4);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_6370b0(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v2 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    if (a2 == *(_DWORD*)(a1 + 1600)) {
      return nvidia_6393c0(a1 + 1920);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_637100(__int64 a1, unsigned __int64 a2, unsigned int a3,
                      __int64 a4)
{
  unsigned int v4;
  __int64 result;
  int v7;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned __int64 v14;

  v4 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v4 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    v7 = *(_DWORD*)(a1 + 1600);
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 200LL))(v11);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v14 = (*(unsigned int (**)(__int64))(*(_QWORD*)v13 + 224LL))(v13) + v12;
    if (a2 >= v12 && a2 < v14 && a3 == v7) {
      return nvidia_639440(a1 + 1920, (unsigned int)a2, a3, a4);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_6371f0(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(_DWORD*)(a1 + 332);
  result = 2;
  if (v2 >= 4 && (SdkData_10406d1 & 1) == 0 &&
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) != 0) {
    if (a2 == *(_DWORD*)(a1 + 1600)) {
      return nvidia_6394d0(a1 + 1920);
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_637240(__int64 a1)
{
  if (*(_DWORD*)(a1 + 332) < 4u || (SdkData_10406d1 & 1) != 0 ||
      (*(_QWORD*)(a1 + 360) & 0x100000000000LL) == 0) {
    return 2;
  }
  else {
    return nvidia_639550(a1 + 1920);
  }
}

__int64 nvidia_637280(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  __int64 result;
  unsigned int v9;

  v6 = NvOsAlloc_plt(64);
  if (v6 == 0) {
    return 6;
  }
  v7 = (_BYTE*)v6;
  nvidia_63b590(v6, a1);
  result = nvidia_63b750(v7, a3);
  if ((_DWORD)result != 0) {
    v9 = result;
    (**(void (***)(_BYTE*))v7)(v7);
    v7[17] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)v7 + 8LL))(v7);
    NvOsFree_plt(v7);
    return v9;
  }
  else {
    *a2 = v7;
  }
  return result;
}

__int64 nvidia_637340(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  __int64 result;
  unsigned int v9;

  v6 = NvOsAlloc_plt(56);
  if (v6 == 0) {
    return 6;
  }
  v7 = (_BYTE*)v6;
  nvidia_635510(v6, a1);
  result = nvidia_635560_alt1(v7, a3);
  if ((_DWORD)result != 0) {
    v9 = result;
    (**(void (***)(_BYTE*))v7)(v7);
    v7[17] = 1;
    (*(void (**)(_BYTE*))(*(_QWORD*)v7 + 8LL))(v7);
    NvOsFree_plt(v7);
    return v9;
  }
  else {
    *a2 = v7;
  }
  return result;
}

__int64 nvidia_637400(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  if (*a3 != 0) {
    return 8;
  }
  v7 = NvOsAlloc_plt(168);
  if (v7 != 0) {
    v8 = v7;
    nvstl_mutex_impl_nvos_63ce10(v7, a1);
    *a3 = v8;
    result = nvidia_63d350(v8, a2);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v9 = *a3;
  if (*a3 != 0) {
    v10 = result;
    (**(void (***)(__int64))v9)(*a3);
    v11 = *a3;
    *(_BYTE*)(v9 + 17) = 1;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      NvOsFree_plt(*a3);
      *a3 = 0;
    }
    return v10;
  }
  return result;
}

__int64 nvidia_6374d0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  if (*a3 != 0) {
    return 8;
  }
  v7 = NvOsAlloc_plt(80);
  if (v7 != 0) {
    v8 = v7;
    nvstl_mutex_impl_nvos_639790(v7, a1);
    *a3 = v8;
    result = nvidia_639830(v8, a2);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v9 = *a3;
  if (*a3 != 0) {
    v10 = result;
    (**(void (***)(__int64))v9)(*a3);
    v11 = *a3;
    *(_BYTE*)(v9 + 17) = 1;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      NvOsFree_plt(*a3);
      *a3 = 0;
    }
    return v10;
  }
  return result;
}

__int64 nvidia_6375a0(__int64 a1, __int64 a2)
{
  if (*(_QWORD*)(a2 + 64) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 232LL))(a1);
  }
  else {
    return 11;
  }
}

__int64 nvidia_6375c0(__int64 a1, __int64 a2, __int64 a3, __int64* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;

  if (*a4 != 0) {
    return 8;
  }
  v9 = NvOsAlloc_plt(80);
  if (v9 != 0) {
    v10 = v9;
    nvstl_mutex_impl_nvos_639790(v9, a1);
    *a4 = v10;
    result = nvidia_639960(v10, a2, a3);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v11 = *a4;
  if (*a4 != 0) {
    v12 = result;
    (**(void (***)(__int64))v11)(*a4);
    v13 = *a4;
    *(_BYTE*)(v11 + 17) = 1;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
      NvOsFree_plt(*a4);
      *a4 = 0;
    }
    return v12;
  }
  return result;
}

__int64 nvidia_6376a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  _QWORD v5[3];
  _QWORD v6[3];

  v1 = *(_QWORD*)(a1 + 144);
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  v2 = NvOsDrvOpen_plt(v1);
  if ((_DWORD)v2 == -1) {
    v3 = 196625;
  }
  else {
    NvOsDrvClose_plt(v2);
    v3 = 2;
  }
  nvidia_637780(v5, 0);
  NvOsFree_plt(v5[0]);
  nvidia_637730(v6, 0);
  NvOsFree_plt(v6[0]);
  return v3;
}

__int64 nvidia_637800(__int64 a1)
{
  __int64 v1;

  v1 = NvOsDrvOpen_plt(*(_QWORD*)(a1 + 144));
  if ((_DWORD)v1 == -1) {
    return 196625;
  }
  NvOsDrvClose_plt(v1);
  return 2;
}

__int64 nvidia_637840(__int64* a1, const char* a2, __int64* a3)
{
  __int64 v3;
  __int64 result;
  __int64 v9;
  void* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24[8];
  void** v25;

  v3 = *a1;
  v25 = nullptr;
  result = (*(__int64 (**)(__int64*, void***))(v3 + 240))(a1, &v25);
  if ((_DWORD)result == 0) {
    result = 196625;
    v9 = *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v25 + 4);
    if (v9 != 0) {
      v10 = *v25;
      v11 = v9 << 6;
      while ((unsigned int)strcmp_plt(v10, a2) != 0) {
        v10 = (void*)((char*)v10 + 64);
        v11 -= 64;
        if (v11 == 0) {
          return 196625;
        }
      }
      v12 = *(_QWORD*)v10;
      v13 = *((_QWORD*)v10 + 1);
      v14 = *((_QWORD*)v10 + 3);
      v24[2] = *((_QWORD*)v10 + 2);
      v24[3] = v14;
      v24[0] = v12;
      v24[1] = v13;
      v15 = *((_QWORD*)v10 + 5);
      v16 = *((_QWORD*)v10 + 6);
      v17 = *((_QWORD*)v10 + 7);
      v24[4] = *((_QWORD*)v10 + 4);
      v24[5] = v15;
      v18 = *a3;
      v24[6] = v16;
      v24[7] = v17;
      if (v18 != 0) {
        return 8;
      }
      v19 = NvOsAlloc_plt(104);
      if (v19 != 0) {
        v20 = v19;
        nvidia_63cb90(v19, (__int64)a1);
        *a3 = v20;
        result = nvidia_63cbf0(v20, v24);
        if ((_DWORD)result == 0) {
          return result;
        }
      }
      else {
        result = 6;
      }
      v21 = *a3;
      if (*a3 != 0) {
        v22 = result;
        (**(void (***)(__int64))v21)(*a3);
        v23 = *a3;
        *(_BYTE*)(v21 + 17) = 1;
        if (v23 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
          NvOsFree_plt(*a3);
          *a3 = 0;
        }
        return v22;
      }
    }
  }
  return result;
}

__int64 nvidia_637990(__int64 a1, _BYTE* a2)
{
  __int64 v3;

  v3 = (unsigned __int8)(*a2 | (2 * a2[1]) | (4 * a2[2]));
  if (*(_DWORD*)(*(_QWORD*)(a1 + 928) + 52LL) < 7u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 920), 1074284295, &v3, 8);
  }
}

__int64 nvidia_637a00(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v5;

  v5 = 0;
  if (a2 > 1) {
    return 11;
  }
  v2 = *(_QWORD*)(a1 + 928);
  LODWORD(v5) = a2;
  if (*(_DWORD*)(v2 + 52) < 0xEu) {
    return 2;
  }
  if ((*(_QWORD*)(v2 + 80) & 0x100000000LL) != 0 &&
      *(_DWORD*)(v2 + 36) >= 0x22u) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 920), 1074284302, &v5, 8);
  }
}

__int64 nvidia_637a90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  int v7;
  __int64 v8;
  _DWORD v9[2];
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_QWORD*)(a2 + 8) != a1) {
    return 4;
  }
  v11 = v4;
  v12 = v5;
  v7 = *(_DWORD*)(a2 + 48);
  v10 = a3;
  v9[0] = v7;
  if (a4 > 1) {
    return 11;
  }
  v8 = *(_QWORD*)(a1 + 928);
  v9[1] = a4;
  if (*(_DWORD*)(v8 + 52) < 0xFu) {
    return 2;
  }
  else {
    return nvidia_644da0(*(unsigned int*)(a1 + 920), 1074808591, v9, 16);
  }
}

__int64 nvidia_637b20(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 928);
  v5 = 0;
  if (*(_DWORD*)(v2 + 52) < 0x11u) {
    *a2 = v5;
    return 2;
  }
  else {
    LODWORD(result) =
        nvidia_644da0(*(unsigned int*)(a1 + 920), 2148026129LL, &v5, 8);
    if ((_DWORD)result != 0) {
      result = (unsigned int)result;
    }
    else {
      result = 0;
    }
    *a2 = v5;
  }
  return result;
}

__int64 nvidia_637ba0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[6];
  __int64 v26;
  __int64 v27[4];
  _QWORD v28[2];
  __int64 v29;

  v29 = 0;
  memset_plt((void*)v25, nullptr, 3072, a4);
  v27[2] = (__int64)v25;
  v27[3] = 3072;
  v28[0] = &v29;
  v28[1] = 8;
  v27[0] = (__int64)&v29;
  v27[1] = 8;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 928) + 52LL) <= 0xFu) {
    return 2;
  }
  result =
      nvidia_644cf0(*(unsigned int*)(a1 + 920), 3221767952LL, v28, 1, v27, 2u);
  if ((_DWORD)result != 0) {
    return result;
  }
  v7 = *(_DWORD*)(a1 + 1488);
  if (v7 != 0) {
    v8 = v7 & 3;
    if (v7 >= 4) {
      v10 = (__int64*)(a2 + 96);
      v11 = 0;
      v12 = -(__int64)(v7 & 0xFFFFFFFC);
      v13 = &v26;
      do {
        v14 = *(v13 - 5);
        v11 -= 4;
        *(v10 - 12) = *(v13 - 6);
        *(v10 - 10) = v14;
        v15 = *(v13 - 3);
        *(v10 - 8) = *(v13 - 4);
        *(v10 - 6) = v15;
        v16 = *(v13 - 1);
        *(v10 - 4) = *(v13 - 2);
        *(v10 - 2) = v16;
        v17 = v13[1];
        *v10 = *v13;
        v10[2] = v17;
        v18 = v13[3];
        v10[4] = v13[2];
        v10[6] = v18;
        v19 = v13[4];
        v20 = v13[5];
        v13 += 12;
        v10[8] = v19;
        v10[10] = v20;
        v10 += 24;
      } while (v12 != v11);
      v9 = -v11;
      if (v8 == 0) {
        return 0;
      }
    }
    else {
      v9 = 0;
      if (v8 == 0) {
        return 0;
      }
    }
    v21 = &v25[3 * v9 + 1];
    v22 = (_QWORD*)(a2 + 48 * v9 + 16);
    do {
      v23 = *v21;
      --v8;
      *(v22 - 2) = *(v21 - 1);
      v24 = v21[1];
      *v22 = v23;
      v21 += 3;
      v22[2] = v24;
      v22 += 6;
    } while (v8 != 0);
  }
  return 0;
}

__int64 nvidia_637d30(__int64 a1, _BYTE* a2, unsigned __int64* a3)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  _QWORD v13[2];

  if ((*(_BYTE*)(a1 + 363) & 0x40) != 0 &&
      (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 288) + 72LL))(
          *(_QWORD*)(a1 + 288)) != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 88LL))(
        v6, *(_QWORD*)(a1 + 1928));
    if (v7 == -1) {
      return 15;
    }
    if (*a2 != 1) {
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  v8 = *(_QWORD*)(a1 + 928);
  v13[0] = 0;
  v13[1] = 0;
  if (*(_DWORD*)(v8 + 52) < 0x1Cu) {
    return 2;
  }
  v9 = nvidia_644da0(*(unsigned int*)(a1 + 920), 3222292252LL, v13, 16);
  if (v9 != 0) {
    return v9;
  }
  v7 = v13[0];
  if (*a2 == 1) {
  LABEL_9:
    v10 = *(_QWORD*)(a1 + 352);
    if (*(_DWORD*)(v10 + 116) != 1 || *(_DWORD*)(v10 + 120) != 1) {
      v7 = v7 % *(unsigned int*)(a1 + 1708) * *(unsigned int*)(a1 + 1704) /
               *(unsigned int*)(a1 + 1708) +
           v7 / *(unsigned int*)(a1 + 1708) * *(unsigned int*)(a1 + 1704);
    }
  }
LABEL_12:
  v11 = 0;
  *a3 = v7;
  return v11;
}

__int64 nvidia_638160(__int64 a1, __int64* a2, unsigned int a3, int* a4)
{
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  _QWORD v21[2];
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];
  _QWORD v26[4];

  v22 = 0;
  v23 = 0;
  v24 = 0;
  v8 = a3;
  v9 = nvidia_624a40(&v22, a3);
  if (v9 != 0) {
    goto LABEL_21;
  }
  if (a3 == 0) {
    goto LABEL_12;
  }
  v10 = 0;
  do {
    v11 = *a2++;
    v12 = *(unsigned __int8*)(v11 + 93);
    LODWORD(v26[0]) = *(_DWORD*)(v11 + 48);
    if (v12 == 1) {
      v13 = nvidia_626630(&v22, v26);
      v14 = v10 != 0 ? v10 : v13;
      if (v13 != 0) {
        v10 = v14;
      }
    }
    --v8;
  } while (v8 != 0);
  if (v10 == 0) {
  LABEL_12:
    v15 = *a4;
    v21[0] = 0;
    v21[1] = 0;
    if ((unsigned int)(v15 - 1) >= 2) {
      if (v15 != 0) {
        v10 = 11;
        goto LABEL_23;
      }
    }
    else {
      HIDWORD(v21[0]) = v15;
    }
    LODWORD(v21[0]) = a3;
    v26[0] = v21;
    v26[1] = 16;
    v25[0] = v21;
    v25[1] = 16;
    v26[2] = v22;
    v26[3] = 4 * v23;
    v16 = *(_QWORD*)(a1 + 928);
    v17 = *(_DWORD*)(v16 + 52);
    v18 = *(_QWORD*)(v16 + 80) & 0x1000000LL;
    if (v17 >= 0x1E && v18 != 0) {
      v9 = nvidia_644cf0_alt1(*(unsigned int*)(a1 + 920), 3222292254LL, v26, 2,
                              v25, 1);
    LABEL_21:
      v10 = v9;
      goto LABEL_23;
    }
    v10 = 2;
  }
LABEL_23:
  nvidia_623fe0(&v22, 0);
  NvOsFree_plt(v22);
  return v10;
}

__int64 nvidia_638410(_QWORD* a1)
{
  *a1 = SdkData_e89aa8[0] + 2;
  nvidia_629e00((__int64)(a1 + 15));
  nvidia_629e00((__int64)(a1 + 13));
  nvidia_629e00((__int64)(a1 + 11));
  nvidia_629e00((__int64)(a1 + 9));
  nvidia_629e00((__int64)(a1 + 7));
  nvidia_629e00((__int64)(a1 + 5));
  nvidia_629e00((__int64)(a1 + 3));
  *a1 = &SdkData_e73090;
  return nvidia_629e00((__int64)(a1 + 1));
}

void (***nvidia_6384a0(_QWORD* a1))(_QWORD)
{
  void (***result)(_QWORD);

  nvidia_62ad20(a1 + 79, 0);
  NvOsFree_plt(a1[79]);
  a1[79] = 0;
  a1[81] = 0;
  nvidia_623fe0(a1 + 76, 0);
  NvOsFree_plt(a1[76]);
  a1[76] = 0;
  a1[78] = 0;
  a1[75] = 0;
  a1[72] = 0;
  nvidia_62ae40(a1 + 68, 0);
  NvOsFree_plt(a1[68]);
  a1[68] = 0;
  a1[70] = 0;
  nvidia_623fe0(a1 + 65, 0);
  NvOsFree_plt(a1[65]);
  a1[65] = 0;
  a1[67] = 0;
  nvidia_6280e0(a1 + 62, 0);
  NvOsFree_plt(a1[62]);
  a1[62] = 0;
  a1[64] = 0;
  nvidia_631e20(a1 + 59, 0);
  NvOsFree_plt(a1[59]);
  a1[59] = 0;
  a1[61] = 0;
  nvidia_6280e0(a1 + 56, 0);
  NvOsFree_plt(a1[56]);
  a1[56] = 0;
  a1[58] = 0;
  nvidia_6280e0(a1 + 53, 0);
  NvOsFree_plt(a1[53]);
  a1[53] = 0;
  a1[55] = 0;
  nvidia_6280e0(a1 + 50, 0);
  NvOsFree_plt(a1[50]);
  a1[50] = 0;
  a1[52] = 0;
  nvidia_6280e0(a1 + 47, 0);
  NvOsFree_plt(a1[47]);
  a1[47] = 0;
  a1[49] = 0;
  nvidia_6280e0(a1 + 44, 0);
  NvOsFree_plt(a1[44]);
  a1[44] = 0;
  a1[46] = 0;
  nvidia_6280e0(a1 + 41, 0);
  NvOsFree_plt(a1[41]);
  a1[41] = 0;
  a1[43] = 0;
  nvidia_6280e0(a1 + 38, 0);
  NvOsFree_plt(a1[38]);
  a1[38] = 0;
  a1[40] = 0;
  nvidia_623fe0(a1 + 35, 0);
  NvOsFree_plt(a1[35]);
  a1[35] = 0;
  a1[37] = 0;
  nvidia_623fe0(a1 + 32, 0);
  NvOsFree_plt(a1[32]);
  result = (void (***)(_QWORD))*a1;
  a1[34] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[22] = 0;
  if (result != nullptr) {
    (**result)(result);
    result = (void (***)(_QWORD))NvOsFree_plt(*a1);
    *a1 = 0;
  }
  return result;
}

__int64 nvidia_638690(_QWORD* a1)
{
  *a1 = SdkData_e89ab0 + 2;
  nvidia_629e00((__int64)(a1 + 28));
  nvidia_629e00((__int64)(a1 + 26));
  nvidia_629e00((__int64)(a1 + 24));
  nvidia_629e00((__int64)(a1 + 22));
  nvidia_629e00((__int64)(a1 + 20));
  *a1 = SdkData_e89aa8[0] + 2;
  nvidia_629e00((__int64)(a1 + 15));
  nvidia_629e00((__int64)(a1 + 13));
  nvidia_629e00((__int64)(a1 + 11));
  nvidia_629e00((__int64)(a1 + 9));
  nvidia_629e00((__int64)(a1 + 7));
  nvidia_629e00((__int64)(a1 + 5));
  nvidia_629e00((__int64)(a1 + 3));
  *a1 = &SdkData_e73090;
  return nvidia_629e00((__int64)(a1 + 1));
}

__int64 nvidia_638760(unsigned int* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];

  result = nvidia_624080(a2, 0x40u);
  v5 = a2[1];
  v23 = 0;
  v24 = 0;
  if (v5 != 0) {
    v6 = *a2;
    v7 = 0;
    v8 = 0;
    do {
      v9 = (_QWORD*)(v6 + v7);
      ++v8;
      *v9 = 0;
      v9[1] = 0;
      v6 = *a2;
      v10 = a2[1];
      v11 = *a2 + v7;
      v7 += 16;
      *(_DWORD*)(v11 + 8) = -1;
    } while (v8 < v10);
    if ((unsigned int)(v10 >> 28) != 0) {
      goto LABEL_20;
    }
    v5 = 16 * v10;
  }
  LODWORD(v23) = v5;
  if ((_DWORD)result != 0) {
    return result;
  }
  v12 = *a2;
  v28[0] = &v23;
  v28[1] = 16;
  v25[0] = &v23;
  v25[1] = 16;
  v26 = v12;
  v27 = v5;
  if (*(_DWORD*)(*((_QWORD*)a1 + 1) + 52LL) <= 0x1Eu) {
    return 2;
  }
  result = nvidia_644cf0_alt1(*a1, 3222292255LL, v28, 1, v25, 2);
  if ((_DWORD)result != 0) {
    return result;
  }
  v13 = (unsigned __int64)(unsigned int)v23 >> 4;
  if (a2[1] >= v13) {
    v22 = true;
  LABEL_26:
    if (!v22) {
      return 15;
    }
    nvidia_624080(a2, v13);
    return 0;
  }
  result = nvidia_624080(a2, v13);
  v14 = a2[1];
  v23 = 0;
  v24 = 0;
  if (v14 == 0) {
  LABEL_16:
    LODWORD(v23) = v14;
    if ((_DWORD)result != 0) {
      return result;
    }
    v21 = *a2;
    v28[0] = &v23;
    v28[1] = 16;
    v25[0] = &v23;
    v25[1] = 16;
    v26 = v21;
    v27 = v14;
    if (*(_DWORD*)(*((_QWORD*)a1 + 1) + 52LL) >= 0x1Fu) {
      result = nvidia_644cf0_alt1(*a1, 3222292255LL, v28, 1, v25, 2);
      if ((_DWORD)result != 0) {
        return result;
      }
      v13 = (unsigned __int64)(unsigned int)v23 >> 4;
      v22 = a2[1] >= v13;
      goto LABEL_26;
    }
    return 2;
  }
  v15 = *a2;
  v16 = 0;
  v17 = 0;
  do {
    v18 = (_QWORD*)(v15 + v16);
    ++v17;
    *v18 = 0;
    v18[1] = 0;
    v15 = *a2;
    v19 = a2[1];
    v20 = *a2 + v16;
    v16 += 16;
    *(_DWORD*)(v20 + 8) = -1;
  } while (v17 < v19);
  if ((unsigned int)(v19 >> 28) == 0) {
    v14 = 16 * v19;
    goto LABEL_16;
  }
LABEL_20:
  if ((_DWORD)result != 0) {
    return (unsigned int)result;
  }
  else {
    return 11;
  }
}

__int64 nvidia_638990(__int64* a1, unsigned __int64 a2)
{
  __int64 v4;
  __int64 v5;

  if (a1[2] >= a2) {
    return 0;
  }
  v4 = NvOsAlloc_plt(a2);
  if (v4 == 0) {
    return 6;
  }
  v5 = v4;
  NvOsFree_plt(*a1);
  *a1 = v5;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_638a20(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 58 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(a2 << 6);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = (_QWORD*)(v5 + v7);
      ++v8;
      v10 = (__int64*)(*a1 + v7);
      v7 += 64;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[3];
      v9[2] = v10[2];
      v9[3] = v13;
      *v9 = v11;
      v9[1] = v12;
      v14 = v10[4];
      v15 = v10[5];
      v17 = v10[6];
      v16 = v10[7];
      v9[6] = v17;
      v9[7] = v16;
      v9[4] = v14;
      v9[5] = v15;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

#pragma GCC visibility pop
