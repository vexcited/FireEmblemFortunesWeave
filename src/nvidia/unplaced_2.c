#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_616e20(PSEUDO_X8, __int64* result);
__attribute__((swiftcall)) void
    nvidia_6176c0_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("nvidia_6176c0");
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsAtomicCompareExchange32_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFree_plt(void);
__int64 NvOsGetConfigString_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsGetCurrentAllocator_plt(void);
__int64 NvOsGetTimeNS_plt(void);
__int64 NvOsGetTimeUS_plt(void);
__int64 NvRmChannelMapRelocs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmFenceWait_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xChannelCheckIsDeterministicPRIVATE_plt(_QWORD, _QWORD);
__int64 NvRmHost1xChannelClose_plt(void);
__int64 NvRmHost1xChannelIsValidSyncptPRIVATE_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xChannelPinCommandBufferPRIVATE_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD);
__int64 NvRmHost1xChannelPinDataBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD);
__int64 NvRmHost1xChannelPinGetUIdPRIVATE_plt(_QWORD);
__int64 NvRmHost1xChannelSubmitPRIVATE_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD, _QWORD, _QWORD,
                                           _DWORD, _QWORD, _QWORD, _DWORD,
                                           _QWORD);
__int64 NvRmHost1xChannelUnpin_plt(_QWORD);
__int64 NvRmHost1xClose_plt(_QWORD);
__int64 NvRmHost1xGetDefaultOpenAttrs_plt(_QWORD);
__int64 NvRmHost1xOpen_plt(_QWORD, _QWORD);
__int64 NvRmHost1xStreamAddWaits_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xStreamBegin_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xStreamEnd_plt(_QWORD);
__int64 NvRmHost1xStreamFlush_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xStreamFree_plt(void);
__int64 NvRmHost1xStreamPushBufferAddress_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 NvRmHost1xStreamPushIncr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xStreamPushSyncpointIncrement_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xStreamPushWords_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xSyncpointDetachChannel_plt(void);
__int64 NvRmHost1xSyncpointFree_plt(_QWORD);
__int64 NvRmHost1xSyncpointWait_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmHost1xWaiterAllocate_plt(_QWORD, _QWORD);
__int64 NvRmHost1xWaiterFree_plt(_QWORD);
__int64 NvRmMemCacheSyncForCpu_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemCacheSyncForDevice_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleFree_plt(_QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemMgrInit_plt(void);
__int64 NvRmMemQueryHandleParams_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmMemUnmap_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemWrite_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvTegraSysDeInit_plt(void);
__int64 NvTegraSysGetChipIdRev_plt(void);
__int64 NvTegraSysGetChipId_plt(void);
__int64 NvTegraSysGetProductionMode_plt(void);
__int64 NvTegraSysInit_plt(_QWORD);
__int64 SdkRoutine_616510(_QWORD*, __int64);
__int64 SdkRoutine_6165a0(_QWORD, _QWORD);
__int64 SdkRoutine_617b40(_QWORD);
__int64 SdkRoutine_617f10(_QWORD);
__int64 SdkRoutine_61d3a0(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nnosLockMutex_plt(_QWORD);
__int64 nnosUnlockMutex_plt(_QWORD);
__int64 nvidia_5ffc20(__int64, _QWORD*, char);
__int64 nvidia_602920_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_602920");
__int64 nvidia_602e00_alt1(_QWORD) __asm__("nvidia_602e00");
__int64 nvidia_617a60_alt1(_QWORD) __asm__("nvidia_617a60");
__int64 nvidia_617a70_alt1(_QWORD) __asm__("nvidia_617a70");
__int64 nvidia_617a80_alt1(_QWORD) __asm__("nvidia_617a80");
__int64 nvidia_617aa0_alt1(_QWORD) __asm__("nvidia_617aa0");
__int64 nvidia_617ab0_alt1(_QWORD) __asm__("nvidia_617ab0");
__int64 nvidia_617ae0(_QWORD);
__int64 nvidia_617fc0_alt1(_QWORD) __asm__("nvidia_617fc0");
__int64 nvidia_618050_alt1(__int64, unsigned __int64,
                           __int64) __asm__("nvidia_618050");
__int64 nvidia_618460_alt1(_QWORD) __asm__("nvidia_618460");
__int64 nvidia_6185c0_alt1(_QWORD) __asm__("nvidia_6185c0");
__int64 nvidia_619210_alt1(_QWORD*, __int64, __int64,
                           __int64) __asm__("nvidia_619210");
__int64 nvidia_619290_alt1(_QWORD*, __int64, __int64,
                           __int64) __asm__("nvidia_619290");
__int64 nvidia_61d630(_QWORD);
__int64 nvrm_surface_query_604fe0(__int64, char, unsigned int*);
__int64 nvrm_surface_query_605160(_DWORD*, char, __int64, _DWORD*);
__int64 nvrm_surface_query_6066f0(__int64, int, char);
__int64 nvrm_surface_query_6074c0(_QWORD);
__int64
nvrm_surface_query_6074c0_alt1(int) __asm__("nvrm_surface_query_6074c0");
__int64 nvrm_surface_query_6075d0(_DWORD*, unsigned int, int);
bool nvidia_617c10_alt1(_QWORD*, _QWORD*) __asm__("nvidia_617c10");
extern _DWORD SdkData_103f258_alt1[22] __asm__("SdkData_103f258");
extern _DWORD SdkData_c65064[21];
extern _DWORD SdkData_c650b8[22];
extern _DWORD SdkData_c661b0[10];
extern _DWORD SdkData_c661d8[10];
extern _UNKNOWN* SdkData_e898c0;
extern _UNKNOWN SdkData_103f258;
extern _UNKNOWN SdkData_103f2b0;
extern _UNKNOWN SdkData_c651c0;
extern _UNKNOWN SdkData_e71f78;
extern _UNKNOWN SdkData_ea44b0;
extern char SdkData_103f248;
extern int SdkData_103f24c;
extern int SdkData_103f250;
extern int SdkData_103f254;
extern int SdkData_ea4448;
__int64 nvidia_5fffc0(__int64 a1, __int64* a2);
__int64 nvidia_6004e0(unsigned __int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nvidia_601e90(__int64 a1, unsigned __int64 a2);
__int64 nvidia_601f20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nvidia_602020(__int64 a1);
__int64 nvidia_6020c0(__int64 a1, int a2, int a3);
__int64 nvidia_6020e0(__int64 a1, int a2);
__int64 nvidia_602120(__int64 a1, unsigned int a2, __int64 a3, __int64 a4);
__int64 nvidia_602260(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_6022e0(__int64 result);
__int64 nvidia_602340(__int64* a1);
__int64 nvidia_602450(void* a1, __int64 a2);
__int64 nvidia_6025a0(unsigned int* a1);
__int64 nvidia_602790(__int64 a1, int a2, int a3, int a4, int a5);
__int64 nvidia_602840(__int64 a1, int a2, int a3);
__int64 nvidia_602920(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      unsigned int* a5, __int64 a6, unsigned int* a7);
__int64 nvidia_602d30(_DWORD* a1, unsigned int a2, int a3, int a4);
__int64 nvidia_602e00(__int64 result);
__int64 nvidia_6052c0(unsigned int* a1);
__int64 nvidia_605380(__int64 a1, char a2);
__int64 nvidia_6054d0();
__int64 nvidia_6055a0(unsigned __int64* a1, unsigned int a2, unsigned int a3,
                      unsigned __int64 a4, __int64 a5, int a6);
__int64 nvidia_605f60(int a1, int a2, char a3);
__int64 nvidia_605fc0(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 nvidia_606150(__int64 a1, __int64 a2, char a3);
__int64 sync_get_nvrm_mapping(unsigned int a1, __int64 a2);
__int64 sync_close(unsigned int a1);
__int64 sync_create_nvrm_mapping(__int64 a1, unsigned int a2);
__int64 nvidia_616d50();
void* nvidia_616e00(int a1);
__attribute__((swiftcall)) void nvidia_617260(PSEUDO_X8 x8_, __int64* a1,
                                              int a2);
__attribute__((swiftcall)) void nvidia_617310(PSEUDO_X8 x8_, __int64 result);
__int64 nvidia_617380(__int64 a1, int a2, int a3);
__int64 nvidia_6173d0(__int64 a1, int a2, int a3);
__int64 nvidia_617420(__int64 a1, int a2, int a3, __int64 a4, __int64 a5);
__int64 nvidia_617480(__int64 a1, int a2, int a3, int a4, __int64 a5);
__int64 nvidia_617550(__int64 a1);
__int64 nvidia_617660(__int64 a1);
__attribute__((swiftcall)) void nvidia_6176c0(PSEUDO_X8 x8_, __int64 result,
                                              __int64 a2);
__int64 nvidia_617770(__int64 a1);
__int64 nvidia_617780(__int64* a1, __int64 a2);
__int64 nvidia_6177f0(__int64 a1, __int64* a2, __int64 a3);
__int64 nvidia_617a50(__int64 result);
__int64 nvidia_617a60(_QWORD* a1);
__int64 nvidia_617a70(_QWORD* a1);
__int64 nvidia_617a80(_QWORD* a1);
__int64 nvidia_617a90(_QWORD* a1);
__int64 nvidia_617aa0(_QWORD* a1);
__int64 nvidia_617ab0(_QWORD* a1);
__int64 nvidia_617ac0(_QWORD* a1);
__int64 nvidia_617ad0(_QWORD* a1);
__attribute__((swiftcall)) void nvidia_617b50(PSEUDO_X8 x8_, _QWORD* a1,
                                              _QWORD* a2);
bool nvidia_617c10(_QWORD* a1, __int64* a2);
__int64 nvidia_617d70(_QWORD* a1, unsigned int* a2);
__int64 nvidia_617fc0(_QWORD* a1);
__int64 nvidia_618050(_QWORD* a1, unsigned __int64 a2, __int64 a3);
__attribute__((swiftcall)) void nvidia_618120(PSEUDO_X8 x8_, __int64 a1,
                                              unsigned int* a2);
__int64 nvidia_618460(__int64 a1);
__int64 nvidia_6185c0(__int64 a1);
__int64 nvidia_6187e0(__int64 a1, __int64 a2, int a3);
__int64 nvidia_618a60(__int64 a1, __int64 a2);
__int64 nvidia_618d00(__int64 a1, unsigned int a2, unsigned int a3);
__int64 nvidia_6190f0(__int64 result, __int64 a2, __int64 a3);
__int64 nvidia_619120(__int64 a1, int a2);
__int64 nvidia_619210(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_619290(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
bool nvidia_619320(__int64 a1, int a2);
__int64 nvidia_6195f0(__int64 a1);
__int64 nvidia_619680(__int64 a1, int a2);
__int64 nvidia_6197b0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_619800(__int64 result, __int64 a2);
__int64 nvidia_619860(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void nvidia_619950(PSEUDO_X8 x8_, __int64 a1,
                                              _DWORD* a2, __int64 a3);

__int64 nvidia_5fffc0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char v14;
  int v15;
  _QWORD* v16;
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
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;

  v2 = a1 + 64;
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == a1 + 64) {
    v6 = 0;
    v7 = *(_QWORD*)(a1 + 40);
    v8 = a1;
    if (v7 == 0) {
      goto LABEL_8;
    }
  }
  else {
    if (*(_BYTE*)(a1 + 56) != 1) {
      v16 = *(_QWORD**)(a1 + 72);
      *v16 = v3;
      *(_QWORD*)(v3 + 8) = v16;
      *(_QWORD*)(a1 + 64) = a1 + 64;
      *(_QWORD*)(a1 + 72) = v2;
      return 0;
    }
    v5 = *(_QWORD**)(a1 + 72);
    v6 = v3 - 64;
    *v5 = v3;
    *(_QWORD*)(v3 + 8) = v5;
    *(_QWORD*)(a1 + 64) = a1 + 64;
    *(_QWORD*)(a1 + 72) = v2;
    v7 = *(_QWORD*)(a1 + 40);
    v8 = a1;
    if (v7 == 0) {
      goto LABEL_8;
    }
  }
  v9 = *(_QWORD*)(a1 + 48);
  if (v9 == 0) {
    v10 = (_QWORD*)(a1 + 32);
    v17 = *(_QWORD*)(a1 + 32);
    v8 = a1;
    v12 = (_QWORD*)(a1 + 40);
    *(_QWORD*)(v7 + 32) = v17;
    v13 = v17;
    v14 = 0;
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 == 0) {
      goto LABEL_15;
    }
  LABEL_10:
    if (v8 == *(_QWORD*)(v11 + 40)) {
      *(_QWORD*)(v11 + 40) = v7;
      v15 = *(_DWORD*)(v8 + 24);
      if (v8 == a1) {
        goto LABEL_28;
      }
    }
    else {
      *(_QWORD*)(v11 + 48) = v7;
      v15 = *(_DWORD*)(v8 + 24);
      if (v8 == a1) {
        goto LABEL_28;
      }
    }
    goto LABEL_20;
  }
  do {
    v8 = v9;
    v9 = *(_QWORD*)(v9 + 40);
  } while (v9 != 0);
LABEL_8:
  v10 = (_QWORD*)(v8 + 32);
  v11 = *(_QWORD*)(v8 + 32);
  v7 = *(_QWORD*)(v8 + 48);
  v12 = (_QWORD*)(v8 + 40);
  if (v7 == 0) {
    v14 = 1;
    v13 = *(_QWORD*)(v8 + 32);
    if (v11 == 0) {
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  *(_QWORD*)(v7 + 32) = v11;
  v13 = v11;
  v14 = 0;
  v11 = *(_QWORD*)(v8 + 32);
  if (v11 != 0) {
    goto LABEL_10;
  }
LABEL_15:
  *a2 = v7;
  v15 = *(_DWORD*)(v8 + 24);
  if (v8 == a1) {
    goto LABEL_28;
  }
LABEL_20:
  v18 = *(_QWORD*)(a1 + 32);
  *v10 = v18;
  if (v18 == 0) {
    *a2 = v8;
    *(_DWORD*)(v8 + 24) = *(_DWORD*)(a1 + 24);
    v19 = *(_QWORD*)(a1 + 40);
    *v12 = v19;
    if (v19 == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (a1 == *(_QWORD*)(v18 + 40)) {
    *(_QWORD*)(v18 + 40) = v8;
    *(_DWORD*)(v8 + 24) = *(_DWORD*)(a1 + 24);
    v19 = *(_QWORD*)(a1 + 40);
    *v12 = v19;
    if (v19 == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  *(_QWORD*)(v18 + 48) = v8;
  *(_DWORD*)(v8 + 24) = *(_DWORD*)(a1 + 24);
  v19 = *(_QWORD*)(a1 + 40);
  *v12 = v19;
  if (v19 != 0) {
  LABEL_23:
    *(_QWORD*)(v19 + 32) = v8;
  }
LABEL_24:
  v20 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v8 + 48) = v20;
  if (v20 != 0) {
    *(_QWORD*)(v20 + 32) = v8;
  }
  if (v13 == a1) {
    v13 = v8;
  }
LABEL_28:
  if (v15 == 0) {
    if (v7 != *a2) {
      while (1) {
        if (v7 != 0 && *(_DWORD*)(v7 + 24) != 0) {
          goto LABEL_108;
        }
        if (v13 != 0) {
          v21 = *(_QWORD*)(v13 + 40);
          if (v7 == v21) {
            v21 = *(_QWORD*)(v13 + 48);
            if (v21 != 0) {
              if (*(_DWORD*)(v21 + 24) == 0) {
                goto LABEL_72;
              }
              v24 = *(_QWORD*)(v21 + 40);
              *(_DWORD*)(v21 + 24) = 0;
              *(_DWORD*)(v13 + 24) = 1;
              *(_QWORD*)(v13 + 48) = v24;
              if (v24 != 0) {
                *(_QWORD*)(v24 + 32) = v13;
              }
              v25 = *(_QWORD*)(v13 + 32);
              *(_QWORD*)(v21 + 32) = v25;
              if (v25 == 0) {
                *a2 = v21;
                *(_QWORD*)(v21 + 40) = v13;
                *(_QWORD*)(v13 + 32) = v21;
                v21 = *(_QWORD*)(v13 + 48);
                if (v21 == 0) {
                  goto LABEL_32;
                }
                goto LABEL_72;
              }
              if (v13 != *(_QWORD*)(v25 + 40)) {
                *(_QWORD*)(v25 + 48) = v21;
                *(_QWORD*)(v21 + 40) = v13;
                *(_QWORD*)(v13 + 32) = v21;
                v21 = *(_QWORD*)(v13 + 48);
                if (v21 == 0) {
                  goto LABEL_32;
                }
              LABEL_72:
                v33 = *(_QWORD*)(v21 + 40);
                if (v33 != 0 && *(_DWORD*)(v33 + 24) != 0) {
                  v34 = *(_QWORD*)(v21 + 48);
                  if (v34 != 0 && *(_DWORD*)(v34 + 24) != 0) {
                    v35 = *(_DWORD*)(v13 + 24);
                    *(_QWORD*)(v13 + 48) = v33;
                    *(_DWORD*)(v21 + 24) = v35;
                    *(_DWORD*)(v13 + 24) = 0;
                    *(_DWORD*)(v34 + 24) = 0;
                    v29 = (_QWORD*)(v21 + 40);
                    goto LABEL_97;
                  }
                  v37 = *(_QWORD*)(v33 + 48);
                  *(_DWORD*)(v33 + 24) = 0;
                  *(_DWORD*)(v21 + 24) = 1;
                  *(_QWORD*)(v21 + 40) = v37;
                  if (v37 != 0) {
                    *(_QWORD*)(v37 + 32) = v21;
                  }
                  v38 = *(_QWORD*)(v21 + 32);
                  *(_QWORD*)(v33 + 32) = v38;
                  if (v38 != 0) {
                    if (v21 == *(_QWORD*)(v38 + 48)) {
                      *(_QWORD*)(v38 + 48) = v33;
                    }
                    else {
                      *(_QWORD*)(v38 + 40) = v33;
                    }
                  }
                  else {
                    *a2 = v33;
                  }
                  *(_QWORD*)(v33 + 48) = v21;
                  *(_QWORD*)(v21 + 32) = v33;
                  v21 = *(_QWORD*)(v13 + 48);
                  v33 = *(_QWORD*)(v21 + 40);
                  v36 = *(_QWORD*)(v21 + 48);
                LABEL_96:
                  v41 = *(_DWORD*)(v13 + 24);
                  *(_QWORD*)(v13 + 48) = v33;
                  *(_DWORD*)(v21 + 24) = v41;
                  *(_DWORD*)(v13 + 24) = 0;
                  *(_DWORD*)(v36 + 24) = 0;
                  v29 = (_QWORD*)(v21 + 40);
                  if (v33 != 0) {
                  LABEL_97:
                    *(_QWORD*)(v33 + 32) = v13;
                  }
                  v40 = *(_QWORD*)(v13 + 32);
                  *(_QWORD*)(v21 + 32) = v40;
                  if (v40 != 0) {
                    if (v13 != *(_QWORD*)(v40 + 40)) {
                    LABEL_100:
                      *(_QWORD*)(v40 + 48) = v21;
                      goto LABEL_102;
                    }
                  LABEL_92:
                    *(_QWORD*)(v40 + 40) = v21;
                  LABEL_102:
                    *v29 = v13;
                    *(_QWORD*)(v13 + 32) = v21;
                    v13 = *a2;
                    goto LABEL_32;
                  }
                LABEL_101:
                  *a2 = v21;
                  goto LABEL_102;
                }
                v36 = *(_QWORD*)(v21 + 48);
                if (v36 != 0 && *(_DWORD*)(v36 + 24) != 0) {
                  goto LABEL_96;
                }
              LABEL_79:
                *(_DWORD*)(v21 + 24) = 1;
                goto LABEL_32;
              }
              *(_QWORD*)(v25 + 40) = v21;
              *(_QWORD*)(v21 + 40) = v13;
              *(_QWORD*)(v13 + 32) = v21;
              v21 = *(_QWORD*)(v13 + 48);
              if (v21 != 0) {
                goto LABEL_72;
              }
            }
          }
          else if (v21 != 0) {
            if (*(_DWORD*)(v21 + 24) == 0) {
              goto LABEL_56;
            }
            v22 = *(_QWORD*)(v21 + 48);
            *(_DWORD*)(v21 + 24) = 0;
            *(_DWORD*)(v13 + 24) = 1;
            *(_QWORD*)(v13 + 40) = v22;
            if (v22 != 0) {
              *(_QWORD*)(v22 + 32) = v13;
            }
            v23 = *(_QWORD*)(v13 + 32);
            *(_QWORD*)(v21 + 32) = v23;
            if (v23 == 0) {
              *a2 = v21;
              *(_QWORD*)(v21 + 48) = v13;
              *(_QWORD*)(v13 + 32) = v21;
              v21 = *(_QWORD*)(v13 + 40);
              if (v21 == 0) {
                goto LABEL_32;
              }
            LABEL_56:
              v26 = *(_QWORD*)(v21 + 48);
              if (v26 != 0 && *(_DWORD*)(v26 + 24) != 0) {
                v27 = *(_QWORD*)(v21 + 40);
                if (v27 != 0 && *(_DWORD*)(v27 + 24) != 0) {
                  v28 = *(_DWORD*)(v13 + 24);
                  *(_QWORD*)(v13 + 40) = v26;
                  *(_DWORD*)(v21 + 24) = v28;
                  *(_DWORD*)(v13 + 24) = 0;
                  *(_DWORD*)(v27 + 24) = 0;
                  v29 = (_QWORD*)(v21 + 48);
                  goto LABEL_89;
                }
                v31 = *(_QWORD*)(v26 + 40);
                *(_DWORD*)(v26 + 24) = 0;
                *(_DWORD*)(v21 + 24) = 1;
                *(_QWORD*)(v21 + 48) = v31;
                if (v31 != 0) {
                  *(_QWORD*)(v31 + 32) = v21;
                }
                v32 = *(_QWORD*)(v21 + 32);
                *(_QWORD*)(v26 + 32) = v32;
                if (v32 != 0) {
                  if (v21 == *(_QWORD*)(v32 + 40)) {
                    *(_QWORD*)(v32 + 40) = v26;
                  }
                  else {
                    *(_QWORD*)(v32 + 48) = v26;
                  }
                }
                else {
                  *a2 = v26;
                }
                *(_QWORD*)(v26 + 40) = v21;
                *(_QWORD*)(v21 + 32) = v26;
                v21 = *(_QWORD*)(v13 + 40);
                v30 = *(_QWORD*)(v21 + 40);
                v26 = *(_QWORD*)(v21 + 48);
              LABEL_88:
                v39 = *(_DWORD*)(v13 + 24);
                *(_QWORD*)(v13 + 40) = v26;
                *(_DWORD*)(v21 + 24) = v39;
                *(_DWORD*)(v13 + 24) = 0;
                *(_DWORD*)(v30 + 24) = 0;
                v29 = (_QWORD*)(v21 + 48);
                if (v26 != 0) {
                LABEL_89:
                  *(_QWORD*)(v26 + 32) = v13;
                }
                v40 = *(_QWORD*)(v13 + 32);
                *(_QWORD*)(v21 + 32) = v40;
                if (v40 != 0) {
                  if (v13 == *(_QWORD*)(v40 + 48)) {
                    goto LABEL_100;
                  }
                  goto LABEL_92;
                }
                goto LABEL_101;
              }
              v30 = *(_QWORD*)(v21 + 40);
              if (v30 != 0 && *(_DWORD*)(v30 + 24) != 0) {
                goto LABEL_88;
              }
              goto LABEL_79;
            }
            if (v13 != *(_QWORD*)(v23 + 48)) {
              *(_QWORD*)(v23 + 40) = v21;
              *(_QWORD*)(v21 + 48) = v13;
              *(_QWORD*)(v13 + 32) = v21;
              v21 = *(_QWORD*)(v13 + 40);
              if (v21 == 0) {
                goto LABEL_32;
              }
              goto LABEL_56;
            }
            *(_QWORD*)(v23 + 48) = v21;
            *(_QWORD*)(v21 + 48) = v13;
            *(_QWORD*)(v13 + 32) = v21;
            v21 = *(_QWORD*)(v13 + 40);
            if (v21 != 0) {
              goto LABEL_56;
            }
          }
        }
        else {
          v13 = v7;
        }
      LABEL_32:
        v7 = v13;
        v13 = *(_QWORD*)(v13 + 32);
        if (v7 == *a2) {
          goto LABEL_108;
        }
      }
    }
    if ((v14 & 1) == 0) {
    LABEL_108:
      *(_DWORD*)(v7 + 24) = 0;
    }
  }
  if (v6 != 0) {
    nvidia_5ffc20(v6, a2, 0);
    return 0;
  }
  return 0;
}

__int64 nvidia_6004e0(unsigned __int64 a1, _QWORD* a2, _QWORD* a3)
{
  if (a3 != nullptr) {
    while (1) {
      while (a1 < a3[1]) {
        a3 = (_QWORD*)a3[5];
        if (a3 == nullptr) {
          goto LABEL_7;
        }
      }
      if (a1 <= a3[2]) {
        break;
      }
      a3 = (_QWORD*)a3[6];
      if (a3 == nullptr) {
        goto LABEL_7;
      }
    }
    *a2 = a3;
    return 0;
  }
  else {
  LABEL_7:
    *a2 = a3;
    return 4;
  }
}

__int64 nvidia_601e90(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 result;

  v3 = *(_QWORD*)(*(_QWORD*)a1 + 96LL);
  if (v3 != 0 && a2 >= v3 && a2 < *(_QWORD*)(*(_QWORD*)a1 + 104LL) + v3) {
    return *(unsigned int*)(a1 + 8);
  }
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 == 0 ||
      (v6 = a2, result = nvidia_601e90(v5, a2), a2 = v6, (_DWORD)result == 0)) {
    v7 = *(_QWORD*)(a1 + 48);
    if (v7 == 0) {
      return 0;
    }
    result = nvidia_601e90(v7, a2);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_601f20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6;
  unsigned __int8 v7;
  __int64 result;
  unsigned int v9;

  v6 = memset_plt((void*)(a1 + 8), nullptr, 142744, a4);
  *(_QWORD*)a1 = a2;
  v7 = NvRmHost1xGetDefaultOpenAttrs_plt(v6);
  result = NvRmHost1xOpen_plt(a1 + 8, v7);
  if ((_DWORD)result == 0) {
    v9 = NvRmHost1xWaiterAllocate_plt(a1 + 142464, *(_QWORD*)(a1 + 8));
    if (v9 != 0) {
    LABEL_7:
      NvRmHost1xClose_plt(*(_QWORD*)(a1 + 8));
      return v9;
    }
    v9 = nvidia_602450((void*)(a1 + 16), a2);
    if (v9 != 0) {
    LABEL_6:
      NvRmHost1xWaiterFree_plt(*(_QWORD*)(a1 + 142464));
      goto LABEL_7;
    }
    result = nvidia_602450((void*)(a1 + 71152), a2);
    if ((_DWORD)result != 0) {
      v9 = result;
      nvidia_6025a0((unsigned int*)(a1 + 16));
      goto LABEL_6;
    }
    *(_DWORD*)(a1 + 142288) = 0;
  }
  return result;
}

__int64 nvidia_602020(__int64 a1)
{
  __int64 result;

  result = nvidia_6025a0((unsigned int*)(a1 + 16));
  if ((_DWORD)result == 0) {
    result = nvidia_6025a0((unsigned int*)(a1 + 71152));
    if ((_DWORD)result == 0) {
      NvRmHost1xWaiterFree_plt(*(_QWORD*)(a1 + 142464));
      NvRmHost1xClose_plt(*(_QWORD*)(a1 + 8));
      memset_plt_alt1((void*)a1, nullptr, 142752);
      return 0;
    }
  }
  return result;
}

__int64 nvidia_6020c0(__int64 a1, int a2, int a3)
{
  __int64 v3;
  _DWORD* v4;
  int v5;
  _DWORD* v6;
  int v7;

  v3 = a1 + 71136LL * *(unsigned int*)(a1 + 142288);
  v5 = *(_DWORD*)(v3 + 70988);
  v4 = (_DWORD*)(v3 + 16);
  v6 = (_DWORD*)(v3 + 70988);
  if (v5 == a2) {
  LABEL_20:
    v7 = v6[1];
    if (!__CFADD__(v7, a3)) {
      v6[1] = v7 + a3;
      return 0;
    }
    return 17;
  }
  if (v4[17744] != 0) {
    v6 = v4 + 17747;
    if (v4[17747] == a2) {
      goto LABEL_20;
    }
    if (v4[17748] != 0) {
      v6 = v4 + 17751;
      if (v4[17751] == a2) {
        goto LABEL_20;
      }
      if (v4[17752] != 0) {
        v6 = v4 + 17755;
        if (v4[17755] == a2) {
          goto LABEL_20;
        }
        if (v4[17756] != 0) {
          v6 = v4 + 17759;
          if (v4[17759] == a2) {
            goto LABEL_20;
          }
          if (v4[17760] != 0) {
            v6 = v4 + 17763;
            if (v4[17763] == a2) {
              goto LABEL_20;
            }
            if (v4[17764] != 0) {
              v6 = v4 + 17767;
              if (v4[17767] == a2) {
                goto LABEL_20;
              }
              if (v4[17768] != 0) {
                v6 = v4 + 17771;
                if (v4[17771] == a2) {
                  goto LABEL_20;
                }
                if (v4[17772] != 0) {
                  v6 = v4 + 17775;
                  if (v4[17775] == a2) {
                    goto LABEL_20;
                  }
                  if (v4[17776] != 0) {
                    v6 = v4 + 17779;
                    if (v4[17779] == a2) {
                      goto LABEL_20;
                    }
                    if (v4[17780] != 0) {
                      return 17;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *v6 = a2;
  v6[1] = a3;
  return 0;
}

__int64 nvidia_6020e0(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;

  v2 = a1 + 71136LL * *(unsigned int*)(a1 + 142288);
  v3 = *(_DWORD*)(v2 + 304);
  if (v3 >> 15 != 0) {
    return 17;
  }
  *(_DWORD*)(*(_QWORD*)(v2 + 32) + (v3 & 0xFFFFFFFC)) = a2;
  *(_DWORD*)(v2 + 304) += 4;
  return 0;
}

__int64 nvidia_602120(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  _DWORD* v10;
  int* v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int* v16;
  int v17;

  v4 = a1 + 139264;
  v5 = *(unsigned int*)(a1 + 142288);
  v6 = a1 + 4 * v5;
  v7 = a1 + 80LL * (unsigned int)v5 + 142292;
  result = nvidia_602920_alt1(a1 + 71136LL * (unsigned int)v5 + 16,
                              *(_QWORD*)a1, a2, v7, v6 + 142452, a3, a4);
  if ((_DWORD)result == 0) {
    if (*(_DWORD*)(v6 + 142452) == 0) {
      return 0;
    }
    v9 = 0;
    while (1) {
      v11 = (int*)(v7 + 8 * v9);
      v12 = *(unsigned int*)(v4 + 3464);
      v13 = *v11;
      v14 = v11[1];
      if ((_DWORD)v12 != 0) {
        v15 = 0;
        v16 = (int*)(v4 + 3208);
        while (1) {
          v17 = *v16;
          v16 += 2;
          if (v17 == v13) {
            break;
          }
          if (v12 == ++v15) {
            LODWORD(v15) = *(_DWORD*)(v4 + 3464);
            goto LABEL_4;
          }
        }
      }
      else {
        LODWORD(v15) = 0;
      }
      if ((_DWORD)v15 == (_DWORD)v12) {
      LABEL_4:
        if ((_DWORD)v12 == 32) {
          return 17;
        }
        *(_DWORD*)(v4 + 3464) = v12 + 1;
      }
      v10 = (_DWORD*)(v4 + 3208 + 8LL * (unsigned int)v15);
      ++v9;
      *v10 = v13;
      v10[1] = v14;
      if (v9 >= *(unsigned int*)(v6 + 142452)) {
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_602260(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 v3;
  __int64 v4;
  _DWORD* v5;

  if (a2 != 0) {
    v3 = *(unsigned int*)(a1 + 142728);
    if ((unsigned int)v3 >> 29 != 0) {
      return 17;
    }
    v4 = a1;
    v5 = a3;
    memcpy_plt(a2, a1 + 142472, 8 * v3);
    a1 = v4;
    a3 = v5;
  }
  if (a3 != nullptr) {
    *a3 = *(_DWORD*)(a1 + 142728);
  }
  return 0;
}

__int64 nvidia_6022e0(__int64 result)
{
  *(_DWORD*)(result + 142728) = 0;
  return result;
}

__int64 nvidia_602340(__int64* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  int v5;
  _BOOL8 v6;
  __int64 v7;
  unsigned int* v8;
  _BYTE v9[4];

  v2 = *a1;
  v9[0] = 0;
  result = NvRmHost1xChannelCheckIsDeterministicPRIVATE_plt(v2, v9);
  if ((_DWORD)result == 0) {
    if (v9[0] != 0) {
      v4 = 0;
    }
    else {
      v4 = 0x20C49BA5E353F7LL;
    }
    v5 = *((_DWORD*)a1 + 35572);
    if (v5 == -1) {
      return 17;
    }
    else {
      v6 = (v5 & 1) == 0;
      if (*((_DWORD*)a1 + v6 + 35613) != 0) {
        v7 = 0;
        v8 = (unsigned int*)&a1[10 * ((v5 & 1) == 0) + 17787];
        while (1) {
          result =
              NvRmHost1xSyncpointWait_plt(a1[17808], *(v8 - 1), *v8, v4, 0);
          if ((_DWORD)result != 0) {
            break;
          }
          v8 += 2;
          if (++v7 >= (unsigned __int64)*((unsigned int*)a1 + v6 + 35613)) {
            goto LABEL_10;
          }
        }
      }
      else {
      LABEL_10:
        *((_DWORD*)a1 + 35572) = v6;
        nvidia_602e00_alt1(&a1[8892 * v6 + 2]);
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_602450(void* a1, __int64 a2)
{
  __int64 result;
  int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;

  v10 = 0;
  v9 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = NvOsGetCurrentAllocator_plt();
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0xFFFFFFFF00000003LL;
  memset_plt_alt1(a1, nullptr, 71136);
  v11 = 0x200000020LL;
  v12 = 0x8000;
  v13 = 2304;
  if ((unsigned int)NvRmMemHandleAllocAttr_plt(0, &v9, a1) != 0) {
    return 6;
  }
  v6 = NvRmMemMap_plt(*(unsigned int*)a1, 0, 0x8000, 2, (char*)a1 + 16);
  if (v6 != 0) {
  LABEL_5:
    v7 = v6;
    NvRmMemHandleFree_plt(*(unsigned int*)a1);
    *(_DWORD*)a1 = 0;
    *((_QWORD*)a1 + 2) = 0;
    return v7;
  }
  if (*((_QWORD*)a1 + 2) == 0) {
    v6 = 6;
    goto LABEL_5;
  }
  result = NvRmHost1xChannelPinCommandBufferPRIVATE_plt(
      (char*)a1 + 8, a2, *(unsigned int*)a1, 0, 0x8000);
  if ((_DWORD)result != 0) {
    v8 = result;
    NvRmMemUnmap_plt(*(unsigned int*)a1, *((_QWORD*)a1 + 2), 0x8000);
    v6 = v8;
    goto LABEL_5;
  }
  return result;
}

__int64 nvidia_6025a0(unsigned int* a1)
{
  unsigned __int64 v2;
  __int64 result;

  if (a1[17742] != 0) {
    v2 = 0;
    do {
      NvRmHost1xChannelUnpin_plt(*(_QWORD*)&a1[2 * v2++ + 9550]);
    } while (v2 < a1[17742]);
  }
  NvRmHost1xChannelUnpin_plt(*((_QWORD*)a1 + 1));
  result = NvRmMemUnmap_plt(*a1, *((_QWORD*)a1 + 2), 0x8000);
  if ((_DWORD)result == 0) {
    result = NvRmMemHandleFree_plt(*a1);
    if ((_DWORD)result == 0) {
      memset_plt_alt1((void*)a1, nullptr, 71136);
      return 0;
    }
  }
  return result;
}

__int64 nvidia_602790(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5;
  _DWORD* v12;
  int v13;
  __int64 v14;

  v5 = *(unsigned int*)(a1 + 38192);
  if ((unsigned int)v5 > 0x3FF) {
    return 17;
  }
  *(_DWORD*)(a1 + 38192) = v5 + 1;
  v12 = (_DWORD*)(a1 + 24LL * (unsigned int)v5);
  v12[1356] = NvRmHost1xChannelPinGetUIdPRIVATE_plt(*(_QWORD*)(a1 + 8));
  v13 = *(_DWORD*)(a1 + 288);
  v12[1358] = a2;
  v12[1359] = a3;
  v12[1357] = v13;
  v14 = a1 + 4 * v5;
  *(_DWORD*)(v14 + 30000) = a4;
  *(_DWORD*)(v14 + 34096) = a5;
  return 0;
}

__int64 nvidia_602840(__int64 a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int v9;
  __int64 v10;
  int v12;
  int v13;
  _DWORD* v14;
  __int64 v15;

  v3 = *(_DWORD*)(a1 + 288);
  v4 = *(_DWORD*)(a1 + 292);
  v5 = v3 - v4;
  if (v3 <= v4) {
    return 0;
  }
  v9 = NvRmHost1xChannelPinGetUIdPRIVATE_plt(*(_QWORD*)(a1 + 8));
  if (v9 == 0) {
    return 4;
  }
  v10 = *(unsigned int*)(a1 + 5416);
  if ((unsigned int)v10 > 0xFF) {
    return 17;
  }
  v12 = v9;
  v13 = *(_DWORD*)(a1 + 292);
  *(_DWORD*)(a1 + 5416) = v10 + 1;
  v14 = (_DWORD*)(a1 + 12LL * (unsigned int)v10);
  v15 = a1 + 4 * v10;
  v14[74] = v12;
  v14[76] = v5 >> 2;
  *(_DWORD*)(v15 + 3368) = a2;
  *(_DWORD*)(v15 + 4392) = a3;
  LODWORD(v15) = *(_DWORD*)(a1 + 288);
  v14[75] = v13;
  *(_DWORD*)(a1 + 292) = v15;
  return 0;
}

__int64 nvidia_602920(unsigned int* a1, __int64 a2, int a3, __int64 a4,
                      unsigned int* a5, __int64 a6, unsigned int* a7)
{
  __int64 v7;
  unsigned int v8;
  __int64 result;
  __int64 v10;
  unsigned int* v16;
  unsigned __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned int* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  char v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  unsigned int* v34;
  unsigned int v35;
  unsigned int v36;
  int* v37;
  __int64 v38;
  unsigned int* v39;
  _DWORD* v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  char v48[4];
  _QWORD v49[5];
  int v50;

  v7 = a1[72];
  v8 = a1[73];
  memset(v49, 0, sizeof(v49));
  if ((unsigned int)v7 > v8) {
    return 8;
  }
  v10 = a1[71];
  if ((unsigned int)v7 <= (unsigned int)v10 && a1[1354] == 0) {
    return 0;
  }
  result = NvRmMemCacheSyncForDevice_plt(
      *a1, *((_QWORD*)a1 + 2) + ((unsigned int)v10 & 0xFFFFFFFC), v7 - v10);
  if ((_DWORD)result != 0) {
    return result;
  }
  v48[0] = 0;
  v16 = a1 + 17743;
  if ((unsigned int)NvRmChannelMapRelocs_plt(a2, a1 + 1356, a1[9548], 1) == 0) {
    LODWORD(v17) = a1[9548];
    if ((_DWORD)v17 != 0) {
      v19 = 0;
      v45 = 0;
      while (1) {
        v22 = &a1[6 * v19 + 1356];
        v23 = *((_QWORD*)v22 + 2) + v22[3];
        if (a1[v19 + 8524] == 2) {
          v23 += 0x8000000000LL;
        }
        v24 = v23 >> a1[v19 + 7500];
        if (HIDWORD(v24) != 0) {
          break;
        }
      LABEL_12:
        v20 = *v22;
        v21 = v22[1];
        v50 = v24;
        NvRmMemWrite_plt(v20, v21, &v50, 4);
        ++v19;
        v17 = a1[9548];
        if (v19 >= v17) {
          if (v45 != 0) {
            goto LABEL_7;
          }
          goto LABEL_41;
        }
      }
      v22 = &a1[6 * v19 + 1356];
      v25 = &a1[v19 + 7501];
      while (++v19 < (unsigned int)v17) {
        v26 = v22[9];
        v27 = *((_QWORD*)v22 + 5);
        v22 += 6;
        v28 = v27 + v26;
        v29 = v25[1024] == 2;
        v31 = *v25++;
        v30 = v31;
        if (v29) {
          v28 += 0x8000000000LL;
        }
        v24 = v28 >> v30;
        if (HIDWORD(v24) == 0) {
          v45 = 17;
          goto LABEL_12;
        }
      }
      LODWORD(v17) = 0;
      v18 = a1[17744];
      if (v18 == 0) {
        goto LABEL_42;
      }
    }
    else {
    LABEL_41:
      a1[9548] = 0;
      v18 = a1[17744];
      if (v18 == 0) {
        goto LABEL_42;
      }
    }
  LABEL_23:
    if (a1[17748] != 0) {
      if (a1[17752] != 0) {
        if (a1[17756] != 0) {
          if (a1[17760] != 0) {
            if (a1[17764] != 0) {
              if (a1[17768] != 0) {
                if (a1[17772] != 0) {
                  if (a1[17776] != 0) {
                    if (a1[17780] != 0) {
                      v32 = 10;
                    }
                    else {
                      v32 = 9;
                    }
                  }
                  else {
                    v32 = 8;
                  }
                }
                else {
                  v32 = 7;
                }
              }
              else {
                v32 = 6;
              }
            }
            else {
              v32 = 5;
            }
          }
          else {
            v32 = 4;
          }
        }
        else {
          v32 = 3;
        }
      }
      else {
        v32 = 2;
      }
    }
    else {
      v32 = 1;
    }
    if (a7 == nullptr) {
      goto LABEL_53;
    }
    *a7 = 0;
    v33 = v32;
    v34 = a1 + 17744;
    while (*(v34 - 1) != a3) {
      v34 += 4;
      if (--v33 == 0) {
        goto LABEL_53;
      }
    }
    v18 = *v34;
    goto LABEL_52;
  }
LABEL_7:
  LODWORD(v17) = 0;
  v18 = a1[17744];
  if (v18 != 0) {
    goto LABEL_23;
  }
LABEL_42:
  v32 = 0;
  if (a7 != nullptr) {
  LABEL_52:
    *a7 = v18;
  }
LABEL_53:
  result = NvRmHost1xChannelSubmitPRIVATE_plt(
      a2, a1 + 74, a1[1354], a1 + 1098, a1 + 842, a1 + 1356, a1 + 7500,
      a1 + 8524, a1[9548], v49, a1 + 17743, v32, a6);
  if ((_DWORD)v17 != 0) {
    v35 = result;
    NvRmChannelMapRelocs_plt(a2, a1 + 1356, (unsigned int)v17, 0);
    result = v35;
  }
  if ((_DWORD)result == 0) {
    v36 = a1[72];
    a1[1354] = 0;
    a1[9548] = 0;
    a1[71] = v36;
    if (v32 != 0) {
      v37 = (int*)v49;
      v38 = v32;
      v39 = v16;
      v40 = (_DWORD*)(a4 + 4);
      while (1) {
        v41 = NvRmHost1xChannelIsValidSyncptPRIVATE_plt(a2, *v39, v48);
        result = 11;
        if (v41 != 0 || (v48[0] & 1) == 0) {
          break;
        }
        v43 = *v39;
        v39 += 4;
        v42 = v43;
        v44 = *v37++;
        --v38;
        *(v40 - 1) = v42;
        *v40 = v44;
        v40 += 2;
        if (v38 == 0) {
          goto LABEL_61;
        }
      }
    }
    else {
    LABEL_61:
      *a5 = v32;
      *((_QWORD*)v16 + 18) = 0;
      *((_QWORD*)v16 + 19) = 0;
      *((_QWORD*)v16 + 16) = 0;
      *((_QWORD*)v16 + 17) = 0;
      *((_QWORD*)v16 + 14) = 0;
      *((_QWORD*)v16 + 15) = 0;
      *((_QWORD*)v16 + 12) = 0;
      *((_QWORD*)v16 + 13) = 0;
      *((_QWORD*)v16 + 10) = 0;
      *((_QWORD*)v16 + 11) = 0;
      *((_QWORD*)v16 + 8) = 0;
      *((_QWORD*)v16 + 9) = 0;
      *((_QWORD*)v16 + 6) = 0;
      *((_QWORD*)v16 + 7) = 0;
      *((_QWORD*)v16 + 4) = 0;
      *((_QWORD*)v16 + 5) = 0;
      *((_QWORD*)v16 + 2) = 0;
      *((_QWORD*)v16 + 3) = 0;
      *(_QWORD*)v16 = 0;
      *((_QWORD*)v16 + 1) = 0;
      return 0;
    }
  }
  return result;
}

__int64 nvidia_602d30(_DWORD* a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4;
  int v6;
  int v7;
  int v8;

  v4 = a1[72];
  if (v4 > 0x8000) {
    return 17;
  }
  if (0x8000 - v4 < a2) {
    return 6;
  }
  v6 = a1[1354];
  if (__CFADD__(v6, a3)) {
    return 17;
  }
  if ((unsigned int)(v6 + a3) > 0x100) {
    return 6;
  }
  v7 = a1[9548];
  if (__CFADD__(v7, a4)) {
    return 17;
  }
  if ((unsigned int)(v7 + a4) > 0x400) {
    return 6;
  }
  v8 = a1[17742];
  if (__CFADD__(v8, a4)) {
    return 17;
  }
  if ((unsigned int)(v8 + a4) <= 0x1000) {
    return 0;
  }
  return 6;
}

__int64 nvidia_602e00(__int64 result)
{
  __int64 v1;
  unsigned int* v2;
  unsigned __int64 v3;

  v1 = result;
  v2 = (unsigned int*)(result + 70968);
  if (*(_DWORD*)(result + 70968) != 0) {
    v3 = 0;
    do {
      result = NvRmHost1xChannelUnpin_plt(*(_QWORD*)(v1 + 38200 + 8 * v3++));
    } while (v3 < *v2);
  }
  *(_DWORD*)(v1 + 5416) = 0;
  *(_DWORD*)(v1 + 38192) = 0;
  *(_QWORD*)(v1 + 280) = 0;
  *(_QWORD*)(v1 + 288) = 0;
  *(_QWORD*)v2 = 0;
  *((_QWORD*)v2 + 1) = 0;
  *((_QWORD*)v2 + 2) = 0;
  *((_QWORD*)v2 + 3) = 0;
  *((_QWORD*)v2 + 4) = 0;
  *((_QWORD*)v2 + 5) = 0;
  *((_QWORD*)v2 + 6) = 0;
  *((_QWORD*)v2 + 7) = 0;
  *((_QWORD*)v2 + 8) = 0;
  *((_QWORD*)v2 + 9) = 0;
  *((_QWORD*)v2 + 10) = 0;
  *((_QWORD*)v2 + 11) = 0;
  *((_QWORD*)v2 + 12) = 0;
  *((_QWORD*)v2 + 13) = 0;
  *((_QWORD*)v2 + 14) = 0;
  *((_QWORD*)v2 + 15) = 0;
  *((_QWORD*)v2 + 16) = 0;
  *((_QWORD*)v2 + 17) = 0;
  *((_QWORD*)v2 + 18) = 0;
  *((_QWORD*)v2 + 19) = 0;
  v2[40] = 0;
  return result;
}

__int64 nvidia_6052c0(unsigned int* a1)
{
  unsigned __int64 v1;
  unsigned int v3;
  unsigned __int64 v4;
  int v5;
  int v6;

  v1 = *((unsigned __int8*)a1 + 8) * (unsigned __int64)*a1;
  if (v1 > 0x7FFFFFFF8LL) {
    return 10;
  }
  v3 = a1[4];
  v4 = (v1 + 7) >> 3;
  switch (v3) {
  case 1u:
    v5 = 256;
    v6 = 255;
    if ((unsigned int)v4 < 0xFFFFFF01) {
      goto LABEL_7;
    }
    break;
  case 2u:
    a1[5] = nvrm_surface_query_6074c0((unsigned int)v4);
    return 0;
  case 3u:
    v5 = 64;
    v6 = 63;
    if ((unsigned int)v4 < 0xFFFFFFC1) {
    LABEL_7:
      LODWORD(v4) = (v6 + v4) & -v5;
      goto LABEL_8;
    }
    break;
  default:
  LABEL_8:
    a1[5] = v4;
    return 0;
  }
  return 10;
}

__int64 nvidia_605380(__int64 a1, char a2)
{
  __int64 result;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;

  if (*(_DWORD*)(a1 + 40) != 1) {
    *(_DWORD*)(a1 + 44) = 0;
    return 0;
  }
  v11 = 0;
  result = nvrm_surface_query_604fe0(a1, a2, &v11);
  if ((_DWORD)result == 0) {
    v4 = *(_DWORD*)(a1 + 16);
    switch (v4) {
    case 1:
      v5 = 1024;
      v6 = *(_DWORD*)(a1 + 20);
      v7 = v11;
      if (((v11 * (unsigned __int64)v6) & 0xFFFFFFFF00000000LL) != 0) {
        return 10;
      }
      break;
    case 2:
      v5 = 256;
      v6 = *(_DWORD*)(a1 + 20);
      v7 = v11;
      if (((v11 * (unsigned __int64)v6) & 0xFFFFFFFF00000000LL) != 0) {
        return 10;
      }
      break;
    case 3:
      if ((*(_BYTE*)(a1 + 48) & 2) != 0) {
        v5 = 0x20000;
      }
      else {
        v5 = 0x2000;
      }
      v6 = *(_DWORD*)(a1 + 20);
      v7 = v11;
      if (((v11 * (unsigned __int64)v6) & 0xFFFFFFFF00000000LL) == 0) {
        break;
      }
      return 10;
    default:
      return 65538;
    }
    v8 = v7 * v6;
    v9 = *(_DWORD*)(a1 + 28);
    if (__CFADD__(v8, v9)) {
      return 10;
    }
    else {
      v10 = v9 + v8;
      if (__CFADD__(v10, v5 - 1)) {
        return 10;
      }
      else {
        *(_DWORD*)(a1 + 44) = (v10 + v5 - 1) & -v5;
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_6054d0()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  int v3;
  _BOOL8 v4;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;

  result = (unsigned int)SdkData_ea4448;
  if (SdkData_ea4448 == -1) {
    v9 = v0;
    v10 = v1;
    v8 = 0;
    v6 = 0;
    v7 = 0;
    v3 = NvOsGetConfigString_plt("NV_COMPRESSION", &v6, 20);
    v4 = true;
    if (v3 == 0 && (_BYTE)v6 != 0) {
      v4 = (v6 ^ 0x64656C6261736964LL | (unsigned __int8)v7) != 0 &&
           (_DWORD)v6 != 6710895 && (unsigned __int16)v6 != 48;
    }
    NvOsAtomicCompareExchange32_plt(&SdkData_ea4448, 0xFFFFFFFFLL, v4);
    return (unsigned int)SdkData_ea4448;
  }
  return result;
}

__int64 nvidia_6055a0(unsigned __int64* a1, unsigned int a2, unsigned int a3,
                      unsigned __int64 a4, __int64 a5, int a6)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned int* v13;
  int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  unsigned int v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  _BOOL4 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  bool v39;
  int v40;
  int v41;
  int v42;
  unsigned __int64* v43;
  int v44;
  unsigned __int64* v45;
  int v46;
  int v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned __int64 v58;
  int v59;
  unsigned int v60;
  unsigned __int64* v61;
  struct {
    unsigned __int64 v62;
    unsigned __int64 v63;
    unsigned __int64 v64;
    unsigned __int64 v65;
    unsigned __int64 v66;
    unsigned __int64 v67;
    unsigned __int64 v68;
    __int64 v69;
    unsigned __int64 v70;
    unsigned __int64 v71;
    unsigned __int64 v72;
  } v62_;
  unsigned int v73;

  v8 = 4;
  if (a1 == nullptr) {
    return v8;
  }
  if (a2 == 0) {
    return v8;
  }
  if (a3 == 0) {
    return v8;
  }
  v9 = (unsigned __int8)a4;
  if ((_BYTE)a4 == 0) {
    return v8;
  }
  if ((a2 & 1) != 0 && (a4 & 0x3EFF) == 0x810) {
    return 4;
  }
  v62_.v71 = 0;
  v62_.v72 = 0;
  v62_.v69 = 0;
  v62_.v70 = 0;
  v11 = 0;
  v12 = 0;
  v62_.v67 = 0;
  v62_.v68 = 0;
  v62_.v65 = 0;
  v62_.v66 = 0;
  v62_.v62 = __PAIR64__(a3, a2);
  v62_.v63 = a4;
  v62_.v64 = 0;
  if (a5 == 0) {
    v19 = 0;
    v18 = 0;
    LODWORD(v17) = 0;
    v14 = 255;
    LODWORD(v62_.v66) = 254;
  LABEL_40:
    v33 = a6 + 1;
    do {
      v15 = v33 - 1;
      if (v33 == 1) {
        break;
      }
      v34 = 8 << (v33-- - 2);
    } while (v34 >= a3);
  LABEL_43:
    v16 = 3;
    HIDWORD(v62_.v66) = v15;
    v35 = (v12 & 2) == 0;
    LODWORD(v62_.v64) = 3;
    goto LABEL_44;
  }
  v13 = (unsigned int*)(a5 + 4);
  v14 = 255;
  v15 = -1;
  v16 = 3;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = -2;
  v21 = 28;
  while (1) {
    v24 = *(v13 - 1);
    if (v24 == 0) {
      break;
    }
    v25 = (unsigned int)(v24 - 1);
    v26 = *v13;
    switch (v25) {
    case 0LL:
      v16 = *v13;
      if (v26 - 1 >= 3) {
        return 4;
      }
      goto LABEL_14;
    case 1LL:
      v14 = *v13;
      if (v26 >= 0x100) {
        return 4;
      }
      goto LABEL_14;
    case 2LL:
      v11 = *v13;
      if (v26 >= 2) {
        return 4;
      }
      goto LABEL_14;
    case 3LL:
      if (v26 != 0) {
        a6 = 0;
      }
      goto LABEL_14;
    case 4LL:
      v15 = *v13;
      if (v26 + 1 >= 7) {
        return 4;
      }
      goto LABEL_14;
    case 5LL:
      v17 = v26;
      goto LABEL_14;
    case 6LL:
      v18 = *v13;
      goto LABEL_14;
    case 7LL:
      if (v26 >= 3) {
        if (v26 != 3) {
          return 4;
        }
        v61 = a1;
        v56 = a3;
        v57 = v11;
        v27 = a2;
        v28 = a5;
        v59 = v14;
        v60 = v18;
        v29 = a4;
        v30 = v9;
        v58 = v17;
        v31 = a6;
        v55 = v16;
        v32 = nvidia_6054d0();
        v16 = v55;
        a3 = v56;
        v9 = v30;
        a5 = v28;
        a4 = v29;
        v14 = v59;
        v18 = v60;
        a6 = v31;
        a2 = v27;
        v19 = v32;
        v17 = v58;
        v11 = v57;
        v21 = 28;
        a1 = v61;
      }
      else {
        v19 = *v13;
      }
    LABEL_14:
      v20 += 2LL;
      v13 += 2;
      if (v20 >= 0x1A) {
        goto LABEL_49;
      }
      break;
    case 8LL:
      if (v26 != 0) {
        v12 = (v12 & 0xFFFFFFFFFFFFFFFELL) + 1;
      }
      else {
        v12 &= ~1uLL;
      }
      goto LABEL_14;
    case 9LL:
      v22 = v12 & 0xFFFFFFFFFFFFFFFBLL;
      if (v26 != 0) {
        v23 = 4;
      }
      else {
        v23 = 0;
      }
      goto LABEL_13;
    case 10LL:
    case 11LL:
      goto LABEL_14;
    case 12LL:
      v22 = v12 & 0xFFFFFFFFFFFFFFF7LL;
      if (v26 != 0) {
        v23 = 8;
      }
      else {
        v23 = 0;
      }
    LABEL_13:
      v12 = v22 | v23;
      goto LABEL_14;
    default:
      return 4;
    }
  }
  v21 = v20 + 2;
LABEL_49:
  v62_.v68 = v12;
  LODWORD(v62_.v67) = v11;
  if (*(_DWORD*)(a5 + 4LL * (v21 & 0xFFFFFFFE)) != 0) {
    return 4;
  }
  if (v16 == 1) {
    LODWORD(v62_.v66) = 0;
  }
  else if (v16 == 3) {
    LODWORD(v62_.v66) = 254;
    if (v19 != 0) {
      v36 = HIDWORD(a4) & 0x3F;
      if ((unsigned int)(v36 - 2) < 0xC || (_DWORD)v36 == 45) {
        HIDWORD(v37) = (unsigned __int8)a4 - 8;
        LODWORD(v37) = HIDWORD(v37);
        if (((unsigned int)(v37 >> 3) | 4) == 7) {
          v12 |= 2u;
          v62_.v68 = v12;
          LODWORD(v62_.v66) = 255;
        }
      }
    }
    if (v15 != -1) {
      goto LABEL_43;
    }
    goto LABEL_40;
  }
  LODWORD(v62_.v64) = v16;
  v35 = (v12 & 2) == 0;
  if ((v12 & 2) != 0) {
    return 4;
  }
LABEL_44:
  if ((_DWORD)v17 == 0) {
    v38 = (unsigned int)v9 * (unsigned __int64)a2;
    if (v38 > 0x7FFFFFFF8LL) {
      return 10;
    }
    v17 = (v38 + 7) >> 3;
    if (v16 != 1) {
      if (v16 == 2) {
        v43 = a1;
        v44 = nvrm_surface_query_6074c0_alt1(v17);
        v16 = 2;
        LODWORD(v17) = v44;
        a1 = v43;
      }
      else if (v16 == 3) {
        v42 = 64;
      LABEL_83:
        if (__CFADD__((_DWORD)v17, v42 - 1)) {
          return 10;
        }
        LODWORD(v17) = (v42 - 1 + v17) & -v42;
      }
    LABEL_85:
      v45 = a1;
      HIDWORD(v62_.v64) = v17;
      if (v11 == 1) {
        v46 = v16;
        v73 = 0;
        v8 = nvrm_surface_query_604fe0((__int64)&v62_.v62, v14, &v73);
        if (v8 != 0) {
          return v8;
        }
        switch (v46) {
        case 1:
          v47 = 1024;
          break;
        case 2:
          v47 = 256;
          break;
        case 3:
          if (v35) {
            v47 = 0x2000;
          }
          else {
            v47 = 0x20000;
          }
          break;
        default:
          return 65538;
        }
        if (((v73 * (unsigned __int64)(unsigned int)v17) &
             0xFFFFFFFF00000000LL) != 0 ||
            __CFADD__(v73 * v17, v47 - 1)) {
          return 10;
        }
        HIDWORD(v62_.v67) = (v73 * v17 + v47 - 1) & -v47;
      }
      else {
        HIDWORD(v62_.v67) = 0;
      }
      nvrm_surface_query_6066f0((__int64)&v62_.v62, v19, v14);
      v73 = 0;
      v8 = nvrm_surface_query_605160(&v62_.v62, v14, 0, &v73);
      if (v8 != 0) {
        return v8;
      }
      if (v18 == 0) {
        v18 = v73;
      LABEL_99:
        v48 = v62_.v71;
        v49 = v62_.v72;
        v8 = 0;
        v45[8] = v62_.v70;
        v45[9] = v48;
        v50 = v62_.v66;
        v52 = v62_.v67;
        v51 = v62_.v68;
        v45[10] = v49;
        v45[4] = v50;
        v45[5] = v52;
        v53 = v62_.v63;
        *v45 = v62_.v62;
        v45[1] = v53;
        v54 = v62_.v65;
        v45[2] = v62_.v64;
        v45[3] = v54;
        v62_.v68 = v51 | 0x8000000000000000LL;
        v62_.v69 = v18;
        v45[6] = v51 | 0x8000000000000000LL;
        v45[7] = v18;
        return v8;
      }
      if (v73 <= v18) {
        goto LABEL_99;
      }
      return 10;
    }
    v42 = 256;
    goto LABEL_83;
  }
  if ((unsigned int)(v16 - 2) >= 2) {
    if (v16 == 1) {
      v39 = (v14 & 0xFFFFFF1F) != 0 || v14 == 0;
      v40 = v39 ? 255 : 63;
      v41 = v14 == 4 ? 127 : v40;
      if ((v41 & (unsigned int)v17) == 0) {
        goto LABEL_85;
      }
    }
  }
  else if ((v17 & 0x3F) == 0) {
    goto LABEL_85;
  }
  return 4;
}

__int64 nvidia_605f60(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  char v6;

  if (a3 != 0) {
    v3 = 32;
  }
  else {
    v3 = 64;
  }
  if (a3 != 0) {
    v4 = 192;
  }
  else {
    v4 = 128;
  }
  if (a3 != 0) {
    v5 = 16;
  }
  else {
    v5 = 48;
  }
  if (a3 != 0) {
    v6 = 1;
  }
  else {
    v6 = 2;
  }
  return a1 & 0xF | (((a1 & 0x20) != 0) << 8) | (a1 << v6) & v3 |
         v5 & (16 * a2) | v4 & (unsigned int)(32 * a2);
}

__int64 nvidia_605fc0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  unsigned int v18;
  unsigned int v19;

  *a3 = *(_QWORD*)(a1 + 80);
  if ((*(_QWORD*)(a1 + 48) & 0x8000000000000000LL) != 0) {
    v7 = *(_DWORD*)(a1 + 56);
    v8 = *(unsigned int*)(a1 + 24);
    if ((_DWORD)v8 == 0) {
      goto LABEL_21;
    }
  }
  else {
    v19 = 0;
    result = nvrm_surface_query_604fe0(a1, 255, &v19);
    if ((_DWORD)result != 0) {
      return result;
    }
    v12 = *(_DWORD*)(a1 + 20);
    if (((v19 * (unsigned __int64)v12) & 0xFFFFFFFF00000000LL) != 0) {
      return 10;
    }
    v13 = v19 * v12;
    v14 = v19 * v12;
    if (*(_DWORD*)(a1 + 40) == 1) {
      v15 = *(_DWORD*)(a1 + 44);
      v16 = *(_DWORD*)(a1 + 28);
      v17 = v15 >= v16;
      v18 = v15 - v16;
      if (!v17 || __CFADD__(v13, v18)) {
        return 10;
      }
      v14 = v18 + v13;
    }
    v7 = nvrm_surface_query_6075d0((_DWORD*)a1, v14, v13);
    v8 = *(unsigned int*)(a1 + 24);
    if ((_DWORD)v8 == 0) {
      goto LABEL_21;
    }
  }
  if (*(_QWORD*)(a1 + 80) != 0) {
    v9 = v7;
    result = NvRmMemCacheSyncForCpu_plt(v8, *a3, v7);
    if ((_DWORD)result != 0) {
      goto LABEL_7;
    }
  LABEL_21:
    if (*a3 != 0) {
      return 0;
    }
    else {
      return 65538;
    }
  }
  v9 = v7;
  result = NvRmMemMap_plt(v8, *(unsigned int*)(a1 + 28), v7, a2, a3);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = NvRmMemCacheSyncForCpu_plt(*(unsigned int*)(a1 + 24), *a3, v9);
  if ((_DWORD)result == 0) {
    goto LABEL_21;
  }
LABEL_7:
  if (*(_QWORD*)(a1 + 80) == 0) {
    v10 = *(_DWORD*)(a1 + 24);
    v11 = result;
    NvRmMemUnmap_plt(v10, *a3, v9);
    result = v11;
  }
  *a3 = 0;
  return result;
}

__int64 nvidia_606150(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;

  if (*(_DWORD*)(a1 + 24) == 0) {
    return 0;
  }
  if ((*(_QWORD*)(a1 + 48) & 0x8000000000000000LL) != 0) {
    v8 = *(_DWORD*)(a1 + 56);
    if ((a3 & 1) == 0) {
      goto LABEL_15;
    }
  }
  else {
    v5 = a2;
    v18 = 0;
    result = nvrm_surface_query_604fe0(a1, 255, &v18);
    if ((_DWORD)result != 0) {
      return result;
    }
    v7 = *(_DWORD*)(a1 + 20);
    if (((v18 * (unsigned __int64)v7) & 0xFFFFFFFF00000000LL) != 0) {
      return 10;
    }
    v10 = v18 * v7;
    v11 = v18 * v7;
    if (*(_DWORD*)(a1 + 40) == 1) {
      v12 = *(_DWORD*)(a1 + 44);
      v13 = *(_DWORD*)(a1 + 28);
      v14 = v12 >= v13;
      v15 = v12 - v13;
      if (!v14 || __CFADD__(v10, v15)) {
        return 10;
      }
      v11 = v15 + v10;
    }
    v8 = nvrm_surface_query_6075d0((_DWORD*)a1, v11, v10);
    a2 = v5;
    if ((a3 & 1) == 0) {
    LABEL_15:
      v9 = a2;
      result = 0;
      if (*(_QWORD*)(a1 + 80) != 0) {
        goto LABEL_17;
      }
      goto LABEL_16;
    }
  }
  v9 = a2;
  result = NvRmMemCacheSyncForDevice_plt(*(unsigned int*)(a1 + 24), a2, v8);
  if (*(_QWORD*)(a1 + 80) == 0) {
  LABEL_16:
    v16 = *(_DWORD*)(a1 + 24);
    v17 = result;
    NvRmMemUnmap_plt(v16, v9, v8);
    result = v17;
  }
LABEL_17:
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

__int64 sync_get_nvrm_mapping(unsigned int a1, __int64 a2)
{
  char* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  nnosLockMutex_plt(&SdkData_ea44b0);
  if (a1 <= 0x8B && *(_DWORD*)(v4 = (char*)&SdkData_103f258 + 36 * a1) != 0) {
    v5 = 0;
    *(_QWORD*)a2 = *(_QWORD*)v4;
    v6 = *((_QWORD*)v4 + 1);
    v7 = *((_QWORD*)v4 + 2);
    v8 = *((_QWORD*)v4 + 3);
    *(_DWORD*)(a2 + 32) = *((_DWORD*)v4 + 8);
    *(_QWORD*)(a2 + 16) = v7;
    *(_QWORD*)(a2 + 24) = v8;
    *(_QWORD*)(a2 + 8) = v6;
  }
  else {
    v5 = -9;
  }
  nnosUnlockMutex_plt(&SdkData_ea44b0);
  return v5;
}

__int64 sync_close(unsigned int a1)
{
  unsigned int* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;

  nnosLockMutex_plt(&SdkData_ea44b0);
  if (a1 <= 0x8B) {
    v2 = (unsigned int*)((char*)&SdkData_103f258 + 36 * a1);
    v3 = *v2;
    if (*v2 != 0) {
      v4 = v3 & 7;
      if (v3 >= 8) {
        v7 = 0;
        v8 = -(__int64)(v3 & 0xFFFFFFF8);
        v9 = (char*)&SdkData_103f258 + 36 * a1 + 32;
        do {
          *(_QWORD*)(v9 - 28) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 - 20) = 0xFFFFFFFFLL;
          v7 -= 8;
          *(_QWORD*)(v9 - 12) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 - 4) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 + 4) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 + 12) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 + 20) = 0xFFFFFFFFLL;
          *(_QWORD*)(v9 + 28) = 0xFFFFFFFFLL;
          v9 += 64;
        } while (v8 != v7);
        v5 = -v7;
        if (v4 == 0) {
          goto LABEL_12;
        }
      }
      else {
        v5 = 0;
        if ((v3 & 7) == 0) {
        LABEL_12:
          *v2 = 0;
          v6 = 0;
          --SdkData_103f24c;
          goto LABEL_13;
        }
      }
      v10 = (char*)&SdkData_103f258 + 36 * a1 + 8 * v5 + 8;
      do {
        *(_QWORD*)(v10 - 4) = 0xFFFFFFFFLL;
        v10 += 8;
        --v4;
      } while (v4 != 0);
      goto LABEL_12;
    }
  }
  v6 = -9;
LABEL_13:
  nnosUnlockMutex_plt(&SdkData_ea44b0);
  return v6;
}

__int64 sync_create_nvrm_mapping(__int64 a1, unsigned int a2)
{
  unsigned int v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned int v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  _BYTE* v10;
  _DWORD* v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  _BYTE v23[36];

  v2 = -22;
  if (a1 == 0 || a2 == 0) {
    return v2;
  }
  v3 = a2 - 1;
  v5 = 0;
  v6 = 0;
  v7 = a2;
  *(_QWORD*)&v23[4] = 0xFFFFFFFFLL;
  *(_QWORD*)&v23[12] = 0xFFFFFFFFLL;
  *(_QWORD*)&v23[20] = 0xFFFFFFFFLL;
  *(_QWORD*)&v23[28] = 0xFFFFFFFFLL;
  do {
    if (v6 != 0) {
      v8 = (_DWORD*)(a1 + 8 * v5);
      v9 = v6;
      v10 = &v23[8];
      v11 = &v23[8];
      while (1) {
        v12 = *v11;
        v11 += 2;
        if (v12 == v8[1] && *((_DWORD*)v10 - 1) == *v8) {
          break;
        }
        --v9;
        v10 = v11;
        if (v9 == 0) {
          goto LABEL_12;
        }
      }
    }
    else {
    LABEL_12:
      if (v5 >= v3 && v6 == 0) {
        goto LABEL_4;
      }
      if ((unsigned int)NvRmFenceWait_plt(0, a1 + 8 * v5, 0) == 5) {
        if (v6 == 4) {
          return (unsigned int)-22;
        }
      LABEL_4:
        *(_QWORD*)&v23[8 * v6++ + 4] = *(_QWORD*)(a1 + 8 * v5);
      }
    }
    ++v5;
  } while (v5 != v7);
  *(_DWORD*)v23 = v6;
  nnosLockMutex_plt(&SdkData_ea44b0);
  if (SdkData_103f248 == 1) {
    LODWORD(v13) = SdkData_103f254;
  }
  else {
    SdkData_103f248 = 1;
    SdkData_103f254 = 0;
    v14 = &SdkData_103f2b0;
    v13 = 140;
    do {
      *(v14 - 11) = 0xFFFFFFFF00000000LL;
      *(v14 - 10) = 0xFFFFFFFF00000000LL;
      *(v14 - 9) = 0xFFFFFFFF00000000LL;
      *(v14 - 8) = 0xFFFFFFFF00000000LL;
      v13 -= 5;
      *(v14 - 7) = 0;
      *(v14 - 6) = 0xFFFFFFFFLL;
      *(v14 - 5) = 0xFFFFFFFFLL;
      *(v14 - 4) = 0xFFFFFFFFLL;
      *(v14 - 3) = 0xFFFFFFFFLL;
      *(v14 - 2) = 0xFFFFFFFF00000000LL;
      *(v14 - 1) = 0xFFFFFFFF00000000LL;
      *v14 = 0xFFFFFFFF00000000LL;
      v14[1] = 0xFFFFFFFF00000000LL;
      v14[2] = 0;
      v14[3] = 0xFFFFFFFFLL;
      v14[4] = 0xFFFFFFFFLL;
      v14[5] = 0xFFFFFFFFLL;
      v14[6] = 0xFFFFFFFFLL;
      v14[7] = 0xFFFFFFFF00000000LL;
      v14[8] = 0xFFFFFFFF00000000LL;
      v14[9] = 0xFFFFFFFF00000000LL;
      v14[10] = 0xFFFFFFFF00000000LL;
      *((_DWORD*)v14 + 22) = 0;
      v14 = (_QWORD*)((char*)v14 + 180);
    } while (v13 != 0);
  }
  v15 = 140;
  while (1) {
    v2 = (int)v13 % 140;
    if (SdkData_103f258_alt1[9 * ((int)v13 % 140)] == 0) {
      break;
    }
    v2 = ((int)v13 + 1) % 140;
    if (SdkData_103f258_alt1[9 * v2] == 0) {
      break;
    }
    v2 = ((int)v13 + 2) % 140;
    if (SdkData_103f258_alt1[9 * v2] == 0) {
      break;
    }
    v2 = ((int)v13 + 3) % 140;
    if (SdkData_103f258_alt1[9 * v2] == 0) {
      break;
    }
    v2 = ((int)v13 + 4) % 140;
    if (SdkData_103f258_alt1[9 * v2] == 0) {
      break;
    }
    LODWORD(v13) = v13 + 5;
    v15 -= 5;
    if (v15 == 0) {
      v2 = -12;
      goto LABEL_33;
    }
  }
  v16 = SdkData_103f24c;
  SdkData_103f254 = v2 + 1;
  v17 = ++SdkData_103f24c;
  if (SdkData_103f250 <= v16) {
    SdkData_103f250 = v17;
  }
  if ((v2 & 0x80000000) == 0) {
    v18 = *(_QWORD*)&v23[24];
    v19 = (char*)&SdkData_103f258_alt1[9 * v2];
    *((_QWORD*)v19 + 2) = *(_QWORD*)&v23[16];
    *((_QWORD*)v19 + 3) = v18;
    v20 = *(_QWORD*)v23;
    *((_DWORD*)v19 + 8) = *(_DWORD*)&v23[32];
    v21 = *(_QWORD*)&v23[8];
    *(_QWORD*)v19 = v20;
    *((_QWORD*)v19 + 1) = v21;
  }
LABEL_33:
  nnosUnlockMutex_plt(&SdkData_ea44b0);
  return v2;
}

__int64 nvidia_616d50()
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;

  if ((unsigned int)NvTegraSysInit_plt(0) != 0) {
    return 0;
  }
  v1 = NvTegraSysGetChipId_plt();
  if (v1 <= 32) {
    if (v1 == 24) {
      v2 = 2;
      goto LABEL_15;
    }
    if (v1 == 25) {
      v2 = 3;
      goto LABEL_15;
    }
  LABEL_12:
    v2 = 0;
    goto LABEL_15;
  }
  if (v1 == 33) {
    v2 = 1;
    goto LABEL_15;
  }
  if (v1 != 35) {
    goto LABEL_12;
  }
  if ((unsigned int)NvTegraSysGetChipIdRev_plt() == 9) {
    v2 = 5;
  }
  else {
    v2 = 4;
  }
LABEL_15:
  v3 = NvTegraSysGetProductionMode_plt();
  NvTegraSysDeInit_plt();
  v4 = 0x100000000LL;
  if (v3 == 0) {
    v4 = 0;
  }
  return v4 | v2;
}

void* nvidia_616e00(int a1)
{
  if (a1 == 5) {
    return &SdkData_e71f78;
  }
  else {
    return nullptr;
  }
}

__attribute__((swiftcall)) void nvidia_617260(PSEUDO_X8 x8_, __int64* a1,
                                              int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  unsigned __int64 v6;
  _BYTE v7[24];

  result = X8CALL_X0(__int64*, SdkRoutine_616e20((void*)((__int64)v7), a1));
  if ((v7[0] & 1) != 0) {
    if (*(_DWORD*)&v7[20] == a2) {
      *(_QWORD*)(a3 + 4) = *(_QWORD*)&v7[4];
      *(_QWORD*)(a3 + 12) = *(_QWORD*)&v7[12];
      *(_DWORD*)(a3 + 20) = *(_DWORD*)&v7[20];
      *(_BYTE*)a3 = 1;
    }
    else {
      *(_DWORD*)(a3 + 4) = 2;
      *(_BYTE*)a3 = 0;
    }
  }
  else {
    v6 = *(_QWORD*)&v7[8];
    *(_QWORD*)a3 = *(_QWORD*)v7;
    *(_OWORD*)(a3 + 8) = __PAIR128__(*(unsigned __int64*)&v7[16], v6);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_617310(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v2;
  int v3;
  int v4;

  v2 = result - 2;
  if ((unsigned int)(result - 2) <= 0x14 && ((0x1FAFBDu >> v2) & 1) != 0) {
    *(_DWORD*)(a2 + 16) = 0;
    v3 = SdkData_c65064[v2];
    *(_BYTE*)a2 = 1;
    v4 = SdkData_c650b8[v2];
    *(_DWORD*)(a2 + 4) = v3;
    *(_DWORD*)(a2 + 8) = v4;
    *(_DWORD*)(a2 + 12) = v4;
    *(_DWORD*)(a2 + 20) = result;
  }
  else {
    *(_BYTE*)a2 = 0;
    *(_DWORD*)(a2 + 4) = 2;
    {
      2;
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nvidia_617380(__int64 a1, int a2, int a3)
{
  __int64 v3;
  __int64 v6;

  v3 = *(unsigned int*)(a1 + 8);
  if ((unsigned int)v3 > 0x60) {
    return 17;
  }
  v6 = a1 + 32 * v3;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 32) = 0;
  *(_DWORD*)(v6 + 36) = a2;
  *(_DWORD*)(v6 + 40) = a3;
  LODWORD(v6) = *(_DWORD*)(a1 + 12) + 1;
  *(_DWORD*)(a1 + 8) = v3 + 1;
  *(_DWORD*)(a1 + 12) = v6;
  return 0;
}

__int64 nvidia_6173d0(__int64 a1, int a2, int a3)
{
  __int64 v3;
  __int64 v6;
  int v7;

  v3 = *(unsigned int*)(a1 + 8);
  if ((unsigned int)v3 > 0x60) {
    return 17;
  }
  v6 = a1 + 32 * v3;
  *(_DWORD*)(a1 + 8) = v3 + 1;
  v7 = *(_DWORD*)(a1 + 16);
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 32) = 1;
  *(_DWORD*)(v6 + 36) = a2;
  *(_DWORD*)(v6 + 40) = a3;
  *(_DWORD*)(a1 + 16) = v7 + 1;
  return 0;
}

__int64 nvidia_617420(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v7;
  int v8;

  v5 = *(unsigned int*)(a1 + 8);
  if ((unsigned int)v5 > 0x60) {
    return 17;
  }
  if ((_BYTE)a5 != 0) {
    return 11;
  }
  v7 = a1 + 32 * v5;
  *(_DWORD*)(a1 + 8) = v5 + 1;
  v8 = *(_DWORD*)(a1 + 20);
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = a4;
  *(_DWORD*)(v7 + 32) = 2;
  *(_DWORD*)(v7 + 36) = a2;
  *(_DWORD*)(v7 + 44) = a3;
  *(_QWORD*)(v7 + 56) = a5;
  *(_DWORD*)(a1 + 20) = v8 + 1;
  return 0;
}

__int64 nvidia_617480(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  int v16;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = nvidia_617ab0((_QWORD*)a1),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = nvidia_619120(v10, a4),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v11;
  if ((v12 & 1) != 0) {
    v14 = *(unsigned int*)(a1 + 8);
    if ((unsigned int)v14 <= 0x60) {
      if ((_BYTE)a5 != 0) {
        return 11;
      }
      else {
        v15 = a1 + 32 * v14;
        *(_DWORD*)(a1 + 8) = v14 + 1;
        v16 = *(_DWORD*)(a1 + 20);
        *(_QWORD*)(v15 + 40) = 0;
        *(_QWORD*)(v15 + 48) = v11;
        *(_DWORD*)(v15 + 32) = 2;
        *(_DWORD*)(v15 + 36) = a2;
        *(_DWORD*)(v15 + 44) = a3;
        *(_QWORD*)(v15 + 56) = a5;
        *(_DWORD*)(a1 + 20) = v16 + 1;
        return 0;
      }
    }
    else {
      return 17;
    }
  }
  return result;
}

__int64 nvidia_617550(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[7];
  int v13;

  v2 = SdkRoutine_617f10(a1 + 1192);
  if (v2 != 0 || (v2 = nvidia_618460_alt1(a1 + 1256)) != 0) {
    v3 = v2;
    v4 = a1 + 4952;
  }
  else {
    v5 = nvidia_617ae0(a1 + 1288);
    if (v5 != 0) {
      v3 = v5;
      v4 = a1 + 4952;
    }
    else {
      v3 = SdkRoutine_61d3a0(a1 + 4952);
      if (v3 == 0) {
        nvidia_6176c0_alt1((void*)v12, a1 + 8, a1 + 64);
        v6 = v12[5];
        *(_QWORD*)(a1 + 1088) = v12[4];
        v7 = v12[6];
        *(_QWORD*)(a1 + 1096) = v6;
        v8 = v12[1];
        *(_QWORD*)(a1 + 1104) = v7;
        LODWORD(v7) = v13;
        *(_QWORD*)(a1 + 1064) = v8;
        v9 = v12[3];
        *(_DWORD*)(a1 + 1112) = v7;
        v10 = v12[0];
        *(_QWORD*)(a1 + 1080) = v9;
        *(_QWORD*)(a1 + 1056) = v10;
        *(_QWORD*)(a1 + 1072) = v12[2];
        return v3;
      }
      v4 = a1 + 4952;
    }
  }
  if ((unsigned int)nvidia_61d630(v4) == 0 &&
      (unsigned int)SdkRoutine_617b40(a1 + 1288) == 0 &&
      (unsigned int)nvidia_6185c0_alt1(a1 + 1256) == 0) {
    nvidia_617fc0_alt1(a1 + 1192);
  }
  return v3;
}

__int64 nvidia_617660(__int64 a1)
{
  __int64 result;

  result = nvidia_61d630(a1 + 4952);
  if ((_DWORD)result == 0) {
    result = SdkRoutine_617b40(a1 + 1288);
    if ((_DWORD)result == 0) {
      result = nvidia_6185c0_alt1(a1 + 1256);
      if ((_DWORD)result == 0) {
        return nvidia_617fc0_alt1(a1 + 1192);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void nvidia_6176c0(PSEUDO_X8 x8_, __int64 result,
                                              __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  int v4;
  int v5;
  bool v6;
  char v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;

  v3 = *(unsigned __int8*)(result + 5);
  *(_DWORD*)(a3 + 12) = 0;
  v4 = *(_DWORD*)(a2 + 40);
  v5 = *(_DWORD*)(a2 + 44);
  v6 = v3 == 0;
  LOBYTE(v3) = *(_BYTE*)(a2 + 7);
  *(_BYTE*)(a3 + 3) = 1;
  v7 = *(_BYTE*)(a2 + 6);
  *(_WORD*)(a3 + 7) = 0;
  *(_DWORD*)(a3 + 56) = 0;
  *(_DWORD*)(a3 + 40) = v4;
  *(_DWORD*)(a3 + 44) = v5;
  *(_BYTE*)(a3 + 1) = v3;
  *(_BYTE*)(a3 + 2) = *(_BYTE*)(a2 + 9);
  *(_BYTE*)(a3 + 4) = *(_BYTE*)(a2 + 1);
  *(_WORD*)(a3 + 5) = *(_WORD*)(a2 + 2);
  *(_WORD*)(a3 + 9) = *(_WORD*)(a2 + 10);
  *(_BYTE*)(a3 + 11) = *(_BYTE*)(a2 + 12);
  *(_WORD*)(a3 + 12) = *(_WORD*)(a2 + 13);
  *(_QWORD*)(a3 + 16) = *(_QWORD*)(a2 + 16);
  *(_DWORD*)(a3 + 24) = *(_DWORD*)(a2 + 24);
  v8 = v6;
  v9 = (v8 | v7) & 1;
  v10 = *(_QWORD*)(a2 + 28);
  *(_BYTE*)a3 = v9;
  v11 = *(_DWORD*)(a2 + 36);
  *(_QWORD*)(a3 + 28) = v10;
  *(_DWORD*)(a3 + 36) = v11;
  LODWORD(v10) = *(_DWORD*)(a2 + 52);
  *(_DWORD*)(a3 + 48) = *(_DWORD*)(a2 + 48);
  *(_DWORD*)(a3 + 52) = v10;
  {
    result;
    return;
  }
}

__int64 nvidia_617770(__int64 a1) { return a1 + 4744; }

__int64 nvidia_617780(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  bool v7;
  int v8;
  __int64 v9;
  __int64 v10;

  result = NvOsAlloc_plt(9448);
  if (result != 0) {
    v5 = result;
    nvidia_6177f0(result, a1, a2);
    v6 = *(_DWORD*)(v5 + 1128);
    result = v5;
    v7 = __CFADD__(v6, 1);
    v8 = v6 + 1;
    if (v7) {
      v8 = -1;
    }
    *(_DWORD*)(v5 + 1128) = v8;
    v9 = *(_QWORD*)(v5 + 1136);
    v7 = __CFADD__(v9, 9448);
    v10 = v9 + 9448;
    if (v7) {
      v10 = -1;
    }
    *(_QWORD*)(v5 + 1136) = v10;
  }
  return result;
}

__int64 nvidia_6177f0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v11;
  __int64 result;

  *(_QWORD*)a1 = a1;
  v4 = a1 + 0x2000;
  v5 = *a2;
  v6 = a2[2];
  *(_QWORD*)(a1 + 16) = a2[1];
  *(_QWORD*)(a1 + 24) = v6;
  *(_QWORD*)(a1 + 8) = v5;
  v7 = a2[3];
  v8 = a2[4];
  v9 = a2[6];
  *(_QWORD*)(a1 + 48) = a2[5];
  *(_QWORD*)(a1 + 56) = v9;
  *(_QWORD*)(a1 + 32) = v7;
  *(_QWORD*)(a1 + 40) = v8;
  memcpy_plt(a1 + 64, a3, 992);
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_DWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1120) = a1;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1192) = a1;
  *(_QWORD*)(a1 + 1200) = 1;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_BYTE*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = a1;
  *(_QWORD*)(a1 + 1264) = a1;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_DWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = a1;
  *(_QWORD*)(a1 + 1296) = a1;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_DWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = a1;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_DWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = a1;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_DWORD*)(a1 + 1376) = 0;
  memset_plt_alt1((void*)(a1 + 1384), nullptr, 3568);
  v11 = *(unsigned __int8*)(a1 + 77);
  *(_QWORD*)(a1 + 4760) = 0;
  *(_QWORD*)(a1 + 4848) = 0;
  *(_QWORD*)(a1 + 4864) = 0;
  *(_QWORD*)(a1 + 4952) = a1;
  *(_DWORD*)(a1 + 4752) = v11 ^ 1;
  *(_QWORD*)(a1 + 4768) = 0x201A22120LL;
  *(_QWORD*)(a1 + 4840) = 1065353216;
  *(_QWORD*)(a1 + 4856) = 1065353216;
  *(_DWORD*)(a1 + 4872) = 1065353216;
  memset_plt_alt1((void*)(a1 + 4960), nullptr, 3920);
  *(_QWORD*)(a1 + 8880) = a1;
  *(_QWORD*)(a1 + 8888) = 0;
  *(_QWORD*)(a1 + 8896) = 0;
  *(_DWORD*)(a1 + 8904) = 0;
  *(_QWORD*)(a1 + 8912) = a1;
  *(_QWORD*)(a1 + 8920) = 0;
  *(_DWORD*)(a1 + 8928) = 0;
  *(_QWORD*)(a1 + 8936) = a1;
  *(_QWORD*)(a1 + 8944) = 0;
  *(_QWORD*)(a1 + 8952) = 0;
  *(_DWORD*)(a1 + 8960) = 0;
  *(_QWORD*)(a1 + 8968) = a1;
  *(_QWORD*)(a1 + 8976) = 0;
  *(_DWORD*)(a1 + 8984) = 0;
  *(_QWORD*)(a1 + 8992) = 0;
  *(_QWORD*)(a1 + 9000) = 0;
  *(_QWORD*)(a1 + 9008) = 0;
  *(_QWORD*)(a1 + 9016) = 0;
  *(_QWORD*)(a1 + 9024) = 0;
  *(_QWORD*)(a1 + 9032) = a1;
  *(_QWORD*)(a1 + 9040) = a1;
  *(_QWORD*)(a1 + 9048) = 0;
  *(_DWORD*)(a1 + 9056) = 0;
  *(_QWORD*)(a1 + 9064) = 0;
  result = memset_plt_alt1((void*)(a1 + 9072), nullptr, 372);
  *(_BYTE*)(v4 + 954) = 1;
  *(_DWORD*)(a1 + 9160) = 0;
  *(_DWORD*)(a1 + 9176) = 0;
  *(_DWORD*)(a1 + 9192) = 0;
  *(_DWORD*)(a1 + 9208) = 0;
  *(_DWORD*)(a1 + 9224) = 0;
  *(_DWORD*)(a1 + 9240) = 0;
  *(_DWORD*)(a1 + 9256) = 0;
  *(_DWORD*)(a1 + 9272) = 0;
  *(_DWORD*)(a1 + 9288) = 0;
  *(_QWORD*)(a1 + 9088) = 0x2000000020LL;
  *(_DWORD*)(a1 + 9304) = 0;
  *(_DWORD*)(a1 + 9096) = 32;
  *(_DWORD*)(a1 + 9112) = 2;
  *(_QWORD*)(a1 + 9136) = 0x400CCCCD3F800000LL;
  *(_WORD*)(v4 + 952) = 257;
  *(_QWORD*)(a1 + 9120) = 0xBF80000041000000LL;
  *(_QWORD*)(a1 + 9128) = 0x3F7B295F3F800000LL;
  return result;
}

__int64 nvidia_617a50(__int64 result)
{
  if (result != 0) {
    return NvOsFree_plt();
  }
  return result;
}

__int64 nvidia_617a60(_QWORD* a1) { return *a1 + 8LL; }

__int64 nvidia_617a70(_QWORD* a1) { return *a1 + 64LL; }

__int64 nvidia_617a80(_QWORD* a1) { return *a1 + 1120LL; }

__int64 nvidia_617a90(_QWORD* a1) { return *a1 + 1128LL; }

__int64 nvidia_617aa0(_QWORD* a1) { return *a1 + 1192LL; }

__int64 nvidia_617ab0(_QWORD* a1) { return *a1 + 1256LL; }

__int64 nvidia_617ac0(_QWORD* a1) { return *a1 + 1288LL; }

__int64 nvidia_617ad0(_QWORD* a1) { return *a1 + 1352LL; }

__attribute__((swiftcall)) void nvidia_617b50(PSEUDO_X8 x8_, _QWORD* a1,
                                              _QWORD* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 (*v10)(__int64);

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = nvidia_617a60(a1),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = nvidia_617a70(a1),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = result;
  if (*(_BYTE*)(v6 + 5) != 1 || (*(_BYTE*)(result + 6) & 1) != 0) {
    result = nvidia_617c10_alt1(a1, a2),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((result & 1) == 0) {
      *(_BYTE*)a3 = 0;
      *(_DWORD*)(a3 + 8) = v9;
      {
        result;
        return;
      }
    }
    v10 = *(__int64 (**)(__int64))(v8 + 184),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v10 != nullptr) {
      v10(v9), v9 = COERCE_AS(__typeof__(v9),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return;
    }
  }
  *(_BYTE*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 2;
  {
    result;
    return;
  }
}

bool nvidia_617c10(_QWORD* a1, __int64* a2)
{
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v9;
  _QWORD* v10;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = nvidia_619860((__int64)(a1 + 1), *a2),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = v4;
  if ((v3 & 1) == 0) {
    return false;
  }
  v6 = nvidia_617a60(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (_QWORD*)nvidia_617aa0(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((unsigned int)nvidia_618050(v7, *(_QWORD*)(v5 + 60),
                                  *(_QWORD*)(v6 + 16)) != 0) {
    return false;
  }
  v9 = nvidia_617a70(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (_QWORD*)nvidia_617ab0(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (unsigned int)nvidia_619210_alt1(
             v10, *(_QWORD*)(v5 + 32), *(_QWORD*)v5, *(_QWORD*)(v9 + 120)) == 0;
}

__int64 nvidia_617d70(_QWORD* a1, unsigned int* a2)
{
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  unsigned int v7;
  _BYTE* v8;
  __int64 v9;
  __int64* v10;
  unsigned int (*v12)(__int64*, unsigned int*);
  __int64 v13;
  __int64* v14;
  _QWORD* v15;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = nvidia_617a60(a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = (_BYTE*)nvidia_617a70(a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a2;
  switch ((_DWORD)v6) {
  case 0:
    return v6 | 1;
  case 2:
    if (v5[7] == 0) {
      return 0;
    }
    break;
  case 1:
    if (*(_BYTE*)(v4 + 5) == 1 && v5[6] == 0) {
      return 0;
    }
    break;
  default:
    return 0;
  }
  v7 = a2[1];
  if (v7 != 1) {
    if (v7 == 0 && v5[8] == 1) {
      v8 = v5;
      v9 = nvidia_619680((__int64)(a1 + 1), 4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v9 & 1) == 0) {
        return 0;
      }
      goto LABEL_18;
    }
    return 0;
  }
  v8 = v5;
  v9 = nvidia_619680((__int64)(a1 + 1), 3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v9 & 1) == 0) {
    return 0;
  }
LABEL_18:
  v12 = *((unsigned int (**)(__int64*, unsigned int*))v8 + 25),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v12 == nullptr) {
    return (__int64)v12;
  }
  v13 = v9;
  v14 = v10;
  if (v12(v10, a2) != 0) {
    return 0;
  }
  v15 = (_QWORD*)nvidia_617ab0(a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((unsigned int)nvidia_619290_alt1(v15, v14[4], *v14, v14[1]) != 0) {
    return 0;
  }
  else {
    return v13;
  }
}

__int64 nvidia_617fc0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  if (a1[6] != 0) {
    result = NvRmHost1xStreamFree_plt();
    if ((_DWORD)result != 0) {
      return result;
    }
    a1[6] = 0;
  }
  v3 = a1[5];
  if (v3 != 0) {
    NvRmHost1xWaiterFree_plt(v3);
    a1[5] = 0;
  }
  if (a1[4] != 0) {
    NvRmHost1xSyncpointDetachChannel_plt();
    NvRmHost1xSyncpointFree_plt(a1[4]);
    a1[4] = 0;
  }
  if (a1[3] != 0) {
    NvRmHost1xChannelClose_plt();
    a1[3] = 0;
  }
  result = a1[2];
  if (result != 0) {
    NvRmHost1xClose_plt(result);
    a1[2] = 0;
    return 0;
  }
  return result;
}

__int64 nvidia_618050(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3;
  unsigned __int64 v4;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  bool v12;
  int v13;
  __int64 result;

  v3 = a2;
  if ((_DWORD)a2 == -1) {
    return 0;
  }
  v4 = HIDWORD(a2);
  if (a3 == 0) {
    result =
        NvRmHost1xSyncpointWait_plt(a1[5], (unsigned int)a2, HIDWORD(a2), 0, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    return 0;
  }
  v7 = NvOsGetTimeUS_plt();
  v8 = NvRmHost1xSyncpointWait_plt(a1[5], v3, (unsigned int)v4, a3, 0);
  v9 = NvOsGetTimeUS_plt() - v7;
  v10 = nvidia_617a90(a1);
  if (v9 >= 0x33) {
    v11 = *(_DWORD*)(v10 + 32);
    v12 = __CFADD__(v11, 1);
    v13 = v11 + 1;
    if (v12) {
      v13 = -1;
    }
    *(_DWORD*)(v10 + 32) = v13;
  }
  result = v8;
  if (v8 == 0) {
    return 0;
  }
  return result;
}

__attribute__((swiftcall)) void nvidia_618120(PSEUDO_X8 x8_, __int64 a1,
                                              unsigned int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  bool v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  unsigned int* v16;
  unsigned __int64 v17;
  unsigned int* v18;
  unsigned int* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned int* v32;
  unsigned __int64 v33;
  unsigned int* v34;
  unsigned int* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;

  result = NvRmHost1xStreamAddWaits_plt(
      *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 32), a2[6], a2 + 784, a2 + 816);
  if ((_DWORD)result != 0) {
    goto LABEL_15;
  }
  v7 = a2[4];
  v8 = a2[5];
  v10 = a2[2];
  v9 = a2[3];
  v11 = v8 + 2 * v7;
  if (__CFADD__(v8, 2 * v7)) {
    v11 = -1;
  }
  v12 = __CFADD__(v9, v11);
  v13 = v9 + v11;
  if (v12) {
    v13 = -1;
  }
  v14 = v7 <= -1 ? -1 : v13;
  v15 = *(_BYTE*)(a1 + 56) == 1 ? NvOsGetTimeNS_plt() : 0LL;
  result = NvRmHost1xStreamBegin_plt(*(_QWORD*)(a1 + 48), (unsigned int)v10,
                                     v14, v8, 1);
  if ((_DWORD)result != 0) {
    goto LABEL_15;
  }
  if ((_DWORD)v10 != 0) {
    v16 = a2 + 8;
    v17 = 0;
    v18 = (unsigned int*)SdkData_e898c0;
    while (1) {
      if (v17 >= 0x61) {
        v19 = v18;
      }
      else {
        v19 = v16;
      }
      v20 = *v19;
      if (*v19 == 2) {
        v25 = nvidia_617a70((_QWORD*)a1);
        result = NvRmHost1xStreamPushIncr_plt(*(_QWORD*)(a1 + 48),
                                              *(_DWORD*)(v25 + 128) >> 2, 2);
        if ((_DWORD)result != 0) {
          goto LABEL_15;
        }
        v26 = *(_QWORD*)(a1 + 48);
        LODWORD(v41) = v19[1] >> 2;
        result = NvRmHost1xStreamPushWords_plt(v26, 1, &v41);
        if ((_DWORD)result == 0) {
          result = NvRmHost1xStreamPushBufferAddress_plt(
              *(_QWORD*)(a1 + 48), *(_QWORD*)(*((_QWORD*)v19 + 2) + 32LL),
              *((_QWORD*)v19 + 3), 8, v19[3]);
        }
        goto LABEL_19;
      }
      if (v20 == 1) {
        break;
      }
      if (v20 == 0) {
        result =
            NvRmHost1xStreamPushIncr_plt(*(_QWORD*)(a1 + 48), v19[1] >> 2, 1);
        if ((_DWORD)result != 0) {
          goto LABEL_15;
        }
        v21 = *(_QWORD*)(a1 + 48);
        LODWORD(v41) = v19[2];
        result = NvRmHost1xStreamPushWords_plt(v21, 1, &v41);
      LABEL_19:
        if ((_DWORD)result != 0) {
          goto LABEL_15;
        }
      }
      ++v17;
      v16 += 8;
      if (v10 == v17) {
        goto LABEL_34;
      }
    }
    v22 = nvidia_617a70((_QWORD*)a1);
    result = NvRmHost1xStreamPushIncr_plt(*(_QWORD*)(a1 + 48),
                                          *(_DWORD*)(v22 + 128) >> 2, 2);
    if ((_DWORD)result != 0) {
      goto LABEL_15;
    }
    v23 = v19[2];
    v24 = *(_QWORD*)(a1 + 48);
    LODWORD(v41) = v19[1] >> 2;
    HIDWORD(v41) = v23;
    result = NvRmHost1xStreamPushWords_plt(v24, 2, &v41);
    goto LABEL_19;
  }
LABEL_34:
  v27 = nvidia_617a70((_QWORD*)a1);
  result = NvRmHost1xStreamPushSyncpointIncrement_plt(
      *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 32),
      *(unsigned __int16*)(v27 + 132));
  if ((_DWORD)result != 0 ||
      (_DWORD)(result = NvRmHost1xStreamEnd_plt(*(_QWORD*)(a1 + 48))) != 0) {
  LABEL_15:
    *(_BYTE*)a3 = 0;
    *(_DWORD*)(a3 + 8) = result;
    {
      result;
      return;
    }
  }
  v28 = *(unsigned __int8*)(a1 + 56);
  v40 = 0;
  if (v28 == 1) {
    v29 = NvOsGetTimeNS_plt();
  }
  else {
    v29 = 0;
  }
  result = NvRmHost1xStreamFlush_plt(*(_QWORD*)(a1 + 48), &v40, &v41);
  v30 = result;
  if (*(_BYTE*)(a1 + 56) == 1) {
    v31 = NvOsGetTimeNS_plt();
    *(_QWORD*)(nvidia_617a90((_QWORD*)a1) + 48) = v31 - v15;
    result = nvidia_617a90((_QWORD*)a1);
    *(_QWORD*)(result + 56) = v31 - v29;
  }
  if (v30 != 0) {
    *(_BYTE*)a3 = 0;
    *(_DWORD*)(a3 + 8) = v30;
  }
  else {
    if ((_DWORD)v10 != 0) {
      v32 = a2 + 8;
      v33 = 0;
      v34 = (unsigned int*)SdkData_e898c0;
      do {
        if (v33 >= 0x61) {
          v35 = v34;
        }
        else {
          v35 = v32;
        }
        if (*v35 == 2) {
          v36 = nvidia_617ab0((_QWORD*)a1);
          result = nvidia_6190f0(v36, *((_QWORD*)v35 + 2), v41);
        }
        ++v33;
        v32 += 8;
      } while (v10 != v33);
    }
    v37 = *(_QWORD*)(a1 + 8);
    *(_BYTE*)a3 = 1;
    v38 = v41;
    v12 = __CFADD__(v37, 1);
    v39 = v37 + 1;
    if (v12) {
      v39 = 1;
    }
    *(_QWORD*)(a1 + 8) = v39;
    *(_QWORD*)(a3 + 8) = v39;
    *(_QWORD*)(a3 + 16) = v38;
  }
  {
    result;
    return;
  }
}

__int64 nvidia_618460(__int64 a1)
{
  __int64 result;
  _DWORD* v3;
  int v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = NvRmMemMgrInit_plt(),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result == 0) {
    v3 = (_DWORD*)nvidia_617a60((_QWORD*)a1),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v3[12];
    if ((unsigned int)(v4 - 2001) < 0xFFFFF830) {
      nvidia_617a60((_QWORD*)a1),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return 11;
    }
    if (v3[10] != 0) {
      ++v4;
    }
    if (v3[8] != 0) {
      v5 = v4 + 7;
    }
    else {
      v5 = v4;
    }
    v6 = (_QWORD*)nvidia_617a80((_QWORD*)(a1 + 8)),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = SdkRoutine_616510(v6, (unsigned int)(56 * v5)),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v7;
    if ((v8 & 1) != 0) {
      v9 = 0;
      v10 = 0;
      *(_QWORD*)(a1 + 16) = v7;
      *(_DWORD*)(a1 + 24) = v5;
      do {
        ++v10;
        v11 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v9);
        v9 += 56;
        v11[5] = 0;
        v11[6] = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[1] = 0;
        v11[2] = 0;
        *v11 = 0;
      } while (v10 < *(unsigned int*)(a1 + 24));
    }
    else if ((_DWORD)v7 != 0) {
      return result;
    }
    if (*(_DWORD*)(a1 + 24) != 0) {
      v12 = 0;
      v13 = 0;
      do {
        v14 = *(_QWORD*)(a1 + 16) + v12;
        v12 += 56;
        *(_DWORD*)(v14 + 16) = 0;
        *(_DWORD*)(v14 + 20) = v13;
        *(_WORD*)(v14 + 24) = 0;
        *(_DWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 44) = 0xFFFFFFFFLL;
        *(_QWORD*)v14 = 0;
        *(_QWORD*)(v14 + 8) = 0;
        *(_QWORD*)(v14 + 32) = 0;
        *(_DWORD*)(v14 + 40) = 0;
        ++v13;
      } while (v13 < *(unsigned int*)(a1 + 24));
    }
    return 0;
  }
  return result;
}

__int64 nvidia_6185c0(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  _DWORD* v7;
  int* v8;
  int v9;
  int v10;
  __int64 v14;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(_DWORD*)(a1 + 24);
  if (v2 == 0) {
    v6 = 0;
    if (v1 == 0) {
      return v6;
    }
    goto LABEL_17;
  }
  v3 = 56LL * v2 - 56;
  v4 = v3 / 0x38 + 1;
  v5 = v4 & 7;
  if (v3 >= 0x188) {
    v16 = v4 & 0xFFFFFFFFFFFFFF8LL;
    v6 = 0;
    v7 = *(_DWORD**)(a1 + 16);
    while (1) {
      if (v6 != 0 || v7[7] == 0) {
        if (v6 == 0 && v7[21] != 0) {
          v6 = 8;
          goto LABEL_38;
        }
      }
      else {
        v6 = 8;
      }
      if (v6 == 0 && v7[35] != 0) {
        v6 = 8;
        goto LABEL_43;
      }
    LABEL_38:
      if (v6 == 0 && v7[49] != 0) {
        v6 = 8;
        goto LABEL_48;
      }
    LABEL_43:
      if (v6 == 0 && v7[63] != 0) {
        v6 = 8;
        goto LABEL_53;
      }
    LABEL_48:
      if (v6 == 0 && v7[77] != 0) {
        v6 = 8;
      LABEL_58:
        if (v6 == 0 && v7[105] != 0) {
          v6 = 8;
        }
        goto LABEL_22;
      }
    LABEL_53:
      if (v6 != 0 || v7[91] == 0) {
        goto LABEL_58;
      }
      v6 = 8;
    LABEL_22:
      v7 += 112;
      v16 -= 8;
      if (v16 == 0) {
        goto LABEL_4;
      }
    }
  }
  v6 = 0;
  v7 = *(_DWORD**)(a1 + 16);
LABEL_4:
  if (v5 != 0) {
    v8 = v7 + 7;
    do {
      v10 = *v8;
      v8 += 14;
      v9 = v10;
      if (v6 == 0 && v9 != 0) {
        v6 = 8;
      }
      --v5;
    } while (v5 != 0);
  }
  if (v1 != 0 && v6 == 0) {
  LABEL_17:
    v14 = nvidia_617a80_alt1(a1 + 8);
    SdkRoutine_6165a0(v14, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 16) = 0;
    *(_DWORD*)(a1 + 24) = 0;
  }
  return v6;
}

__int64 nvidia_6187e0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v22_;
  unsigned int v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  char v36;
  __int64 v37;
  __int16 v38;
  __int64 v39;
  __int16 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;

  v3 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v3 == 0) {
    return 0;
  }
  v4 = v3 & 3;
  v6 = *(_QWORD*)(a1 + 16);
  if ((v3 & 3) != 0) {
    while (*(_DWORD*)(v6 + 28) != 0) {
      v6 += 56;
      if (--v4 == 0) {
        goto LABEL_5;
      }
    }
  LABEL_16:
    v10 = a3;
    v11 = (_QWORD*)a1;
  }
  else {
  LABEL_5:
    if (((v3 - 1) & 0x1FFFFFFFFFFFFFFFuLL) < 3) {
      return 0;
    }
    v6 += 112;
    v8 = *(_QWORD*)(a1 + 16) + 56LL * (unsigned int)v3;
    while (1) {
      if (*(_DWORD*)(v6 - 84) == 0) {
        v6 -= 112;
        goto LABEL_16;
      }
      if (*(_DWORD*)(v6 - 28) == 0) {
        v10 = a3;
        v11 = (_QWORD*)a1;
        v6 -= 56;
        goto LABEL_17;
      }
      if (*(_DWORD*)(v6 + 28) == 0) {
        goto LABEL_16;
      }
      if (*(_DWORD*)(v6 + 84) == 0) {
        break;
      }
      v9 = v6 + 112;
      v6 += 224;
      if (v9 == v8) {
        return 0;
      }
    }
    v10 = a3;
    v11 = (_QWORD*)a1;
    v6 += 56;
  }
LABEL_17:
  v30 = 0;
  v31 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = NvOsGetCurrentAllocator_plt();
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v34 = a2;
  v29 = 0;
  v45 = 0xFFFFFFFF00000003LL;
  v32 = v10;
  v33 = 2;
  v35 = 4352;
  if ((unsigned int)NvRmMemHandleAllocAttr_plt(0, &v30, &v29) != 0) {
    return 0;
  }
  v22_.v27 = 0;
  v22_.v28 = 0;
  v22_.v25 = 0;
  v22_.v26 = 0;
  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  if ((unsigned int)NvRmMemQueryHandleParams_plt(v29, 0, &v22_.v22, 56) != 0) {
    goto LABEL_21;
  }
  v12 = *(_QWORD*)(nvidia_617aa0(v11) + 24);
  v21 = 0;
  if ((unsigned int)NvRmHost1xChannelPinDataBuffer_plt(&v21, v12, v29, 1, 0,
                                                       v22_.v23) != 0) {
    goto LABEL_21;
  }
  if ((unsigned int)NvRmMemMap_plt(v29, 0, a2, 3, &v20) != 0) {
    NvRmHost1xChannelUnpin_plt(v21);
  LABEL_21:
    NvRmMemHandleFree_plt(v29);
    return 0;
  }
  v13 = nvidia_617a90(v11);
  v14 = *(_DWORD*)(v13 + 4);
  v15 = *(_QWORD*)(v13 + 16);
  v16 = __CFADD__(v14, 1);
  v17 = v14 + 1;
  if (v16) {
    v17 = -1;
  }
  v16 = __CFADD__(v15, v22_.v23);
  v18 = v15 + v22_.v23;
  *(_DWORD*)(v13 + 4) = v17;
  v19 = v20;
  if (v16) {
    v18 = -1;
  }
  *(_QWORD*)(v13 + 16) = v18;
  *(_DWORD*)(v6 + 16) = 1;
  *(_WORD*)(v6 + 24) = 1;
  *(_DWORD*)(v6 + 40) = 1;
  *(_QWORD*)v6 = v19;
  *(_QWORD*)(v6 + 8) = a2;
  *(_DWORD*)(v6 + 28) = v29;
  *(_QWORD*)(v6 + 32) = v21;
  *(_QWORD*)(v6 + 44) = 0xFFFFFFFFLL;
  return 1;
}

__int64 nvidia_618a60(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;

  if (a2 == 0) {
    return 11;
  }
  v2 = *(_DWORD*)(a2 + 20);
  if (v2 >= *(_DWORD*)(a1 + 24)) {
    return 11;
  }
  v3 = *(_QWORD*)(a1 + 16) + 56LL * v2;
  v5 = *(_QWORD*)(nvidia_617a60_alt1(a1) + 8);
  v6 = nvidia_617aa0_alt1(a1);
  result = nvidia_618050_alt1(v6, *(_QWORD*)(v3 + 44), v5);
  if ((_DWORD)result == 0) {
    if (*(_QWORD*)v3 != 0) {
      result = NvRmMemUnmap_plt(*(unsigned int*)(v3 + 28), *(_QWORD*)v3,
                                *(_QWORD*)(v3 + 8));
      if ((_DWORD)result != 0) {
        return result;
      }
      *(_QWORD*)v3 = 0;
    }
    NvRmHost1xChannelUnpin_plt(*(_QWORD*)(v3 + 32));
    result = NvRmMemHandleFree_plt(*(unsigned int*)(v3 + 28));
    if ((_DWORD)result == 0) {
      *(_QWORD*)v3 = 0;
      *(_QWORD*)(v3 + 8) = 0;
      *(_DWORD*)(v3 + 16) = 0;
      *(_WORD*)(v3 + 24) = 0;
      *(_DWORD*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_DWORD*)(v3 + 40) = 0;
      *(_QWORD*)(v3 + 44) = 0xFFFFFFFFLL;
    }
  }
  return result;
}

__int64 nvidia_618d00(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
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

  v3 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v3 == 0) {
    return 0;
  }
  v4 = v3 & 3;
  v5 = *(_QWORD*)(a1 + 16);
  if ((v3 & 3) != 0) {
    while (*(_DWORD*)(v5 + 28) != 0) {
      v5 += 56;
      if (--v4 == 0) {
        goto LABEL_5;
      }
    }
  LABEL_16:
    v9 = a1;
    v10 = a3;
  }
  else {
  LABEL_5:
    if (((v3 - 1) & 0x1FFFFFFFFFFFFFFFuLL) < 3) {
      return 0;
    }
    v5 += 112;
    v7 = *(_QWORD*)(a1 + 16) + 56LL * (unsigned int)v3;
    while (1) {
      if (*(_DWORD*)(v5 - 84) == 0) {
        v5 -= 112;
        goto LABEL_16;
      }
      if (*(_DWORD*)(v5 - 28) == 0) {
        v9 = a1;
        v10 = a3;
        v5 -= 56;
        goto LABEL_17;
      }
      if (*(_DWORD*)(v5 + 28) == 0) {
        goto LABEL_16;
      }
      if (*(_DWORD*)(v5 + 84) == 0) {
        break;
      }
      v8 = v5 + 112;
      v5 += 224;
      if (v8 == v7) {
        return 0;
      }
    }
    v9 = a1;
    v10 = a3;
    v5 += 56;
  }
LABEL_17:
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v15 = 0;
  if ((unsigned int)NvRmMemQueryHandleParams_plt(a2, 0, &v15, 56) != 0) {
    return 0;
  }
  if ((_BYTE)v18 != 0) {
    return 0;
  }
  v12 = *(_QWORD*)(nvidia_617aa0_alt1(v9) + 24);
  v14 = 0;
  if ((unsigned int)NvRmHost1xChannelPinDataBuffer_plt(&v14, v12, a2, v10, 0,
                                                       v16) != 0) {
    return 0;
  }
  v13 = v16;
  *(_WORD*)(v5 + 24) = 0;
  *(_DWORD*)(v5 + 28) = a2;
  *(_DWORD*)(v5 + 40) = v10;
  *(_DWORD*)(v5 + 16) = 1;
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = v13;
  *(_QWORD*)(v5 + 32) = v14;
  *(_QWORD*)(v5 + 44) = 0xFFFFFFFFLL;
  return 1;
}

__int64 nvidia_6190f0(__int64 result, __int64 a2, __int64 a3)
{
  unsigned int v3;

  if (a2 != 0) {
    v3 = *(_DWORD*)(a2 + 20);
    if (v3 < *(_DWORD*)(result + 24)) {
      *(_QWORD*)(*(_QWORD*)(result + 16) + 56LL * v3 + 44) = a3;
    }
  }
  return result;
}

__int64 nvidia_619120(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v2 & 3;
  if ((v2 & 3) == 0) {
    v7 = *(_QWORD*)(a1 + 16);
    if (((v2 - 1) & 0x1FFFFFFFFFFFFFFFuLL) >= 3) {
    LABEL_10:
      v8 = v7 + 112;
      result = 1;
      v9 = v3 + 56LL * (unsigned int)v2;
      while (1) {
        if (*(_DWORD*)(v8 - 84) == a2) {
          return 1;
        }
        if (*(_DWORD*)(v8 - 28) == a2) {
          return 1;
        }
        if (*(_DWORD*)(v8 + 28) == a2) {
          return result;
        }
        if (*(_DWORD*)(v8 + 84) == a2) {
          break;
        }
        v10 = v8 + 112;
        v8 += 224;
        if (v10 == v9) {
          return 0;
        }
      }
      return 1;
    }
    return 0;
  }
  result = 1;
  v7 = v3;
  while (*(_DWORD*)(v7 + 28) != a2) {
    v7 += 56;
    if (--v4 == 0) {
      if (((v2 - 1) & 0x1FFFFFFFFFFFFFFFuLL) >= 3) {
        goto LABEL_10;
      }
      return 0;
    }
  }
  return result;
}

__int64 nvidia_619210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;

  if (a2 == 0) {
    return 0;
  }
  if (*(_BYTE*)nvidia_617a70_alt1(a1) != 1) {
    return 0;
  }
  result = NvRmMemCacheSyncForCpu_plt(*(unsigned int*)(a2 + 28), a3, a4);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

__int64 nvidia_619290(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;

  if (a2 == 0) {
    return 0;
  }
  if (*(_BYTE*)nvidia_617a70_alt1(a1) != 1) {
    return 0;
  }
  result = NvRmMemCacheSyncForDevice_plt(*(unsigned int*)(a2 + 28), a3, a4);
  if ((_DWORD)result == 0) {
    return 0;
  }
  return result;
}

bool nvidia_619320(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  _BOOL8 result;
  __int64 v6;
  _DWORD* v7;

  if (a2 == 0) {
    return false;
  }
  v2 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v2 == 0) {
    return false;
  }
  v3 = v2 & 3;
  v4 = *(_DWORD**)(a1 + 16);
  if ((v2 & 3) == 0) {
  LABEL_6:
    if (((v2 - 1) & 0x1FFFFFFFFFFFFFFFuLL) >= 3) {
      v4 += 28;
      v6 = *(_QWORD*)(a1 + 16) + 56LL * (unsigned int)v2;
      while (1) {
        if (*(v4 - 21) == a2) {
          v4 -= 28;
          return v4[10] == 1;
        }
        if (*(v4 - 7) == a2) {
          return *(v4 - 4) == 1;
        }
        if (v4[7] == a2) {
          return v4[10] == 1;
        }
        if (v4[21] == a2) {
          break;
        }
        v7 = v4 + 28;
        v4 += 56;
        result = false;
        if (v7 == (_DWORD*)v6) {
          return result;
        }
      }
      return v4[24] == 1;
    }
    return false;
  }
  while (v4[7] != a2) {
    v4 += 14;
    if (--v3 == 0) {
      goto LABEL_6;
    }
  }
  return v4[10] == 1;
}

__int64 nvidia_6195f0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  if (*(_QWORD*)(a1 + 40) == 0) {
    return 0;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    goto LABEL_7;
  }
  v2 = nvidia_617ab0_alt1(a1);
  result = nvidia_618a60(v2, *(_QWORD*)(a1 + 8));
  if ((_DWORD)result == 0) {
    if (*(_QWORD*)(a1 + 40) == 0) {
    LABEL_8:
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_DWORD*)(a1 + 24) = 0;
      return 0;
    }
  LABEL_7:
    v4 = nvidia_617a80_alt1(a1 + 32);
    SdkRoutine_6165a0(v4, *(_QWORD*)(a1 + 40));
    *(_QWORD*)(a1 + 40) = 0;
    *(_DWORD*)(a1 + 48) = 0;
    goto LABEL_8;
  }
  return result;
}

__int64 nvidia_619680(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v6;
  __int64 v8;
  _QWORD* v9;
  int v10;
  __int64 v12;
  int v13;
  __int64 result;
  bool v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 24);
  v4 = *(_DWORD*)(a1 + 48);
  if (v3 >= v4) {
    v6 = 17;
  }
  else {
    v6 = v2 + 72LL * v3;
  }
  if (v3 >= v4) {
    return 0;
  }
  v8 = nvidia_617a60((_QWORD*)a1);
  v9 = (_QWORD*)nvidia_617aa0((_QWORD*)a1);
  v10 = nvidia_618050(v9, *(_QWORD*)(v6 + 60), *(_QWORD*)(v8 + 24));
  if (v10 != 0) {
    if (v10 == 5) {
      v12 = nvidia_617a90((_QWORD*)a1);
      v13 = *(_DWORD*)(v12 + 36);
      result = 0;
      v15 = __CFADD__(v13, 1);
      v16 = v13 + 1;
      if (v15) {
        v16 = -1;
      }
      *(_DWORD*)(v12 + 36) = v16;
    }
    else {
      return 0;
    }
  }
  else {
    memset_plt_alt1(*(void**)v6, nullptr, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(v6 + 48) = 0;
    *(_DWORD*)(v6 + 56) = a2;
    *(_QWORD*)(v6 + 60) = 0xFFFFFFFFLL;
    return 1;
  }
  return result;
}

__int64 nvidia_6197b0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;

  if (a2 != 0) {
    v4 = *(_DWORD*)(a2 + 40);
    v5 = *(_DWORD*)(result + 48);
    if (v4 < v5) {
      v6 = *(_QWORD*)(result + 40) + 72LL * v4;
      *(_QWORD*)(v6 + 60) = a4;
      *(_QWORD*)(v6 + 48) = a3;
      v5 = *(_DWORD*)(result + 48);
    }
    v7 = v5 - 1;
    v8 = *(_DWORD*)(result + 24);
    if (v8 < v7) {
      v9 = v8 + 1;
    }
    else {
      v9 = 0;
    }
    *(_DWORD*)(result + 24) = v9;
  }
  return result;
}

__int64 nvidia_619800(__int64 result, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  if (a2 != 0) {
    v2 = *(_DWORD*)(a2 + 40);
    v3 = *(_DWORD*)(result + 48);
    if (v2 < v3) {
      v4 = *(_QWORD*)(result + 40) + 72LL * v2;
      *(_QWORD*)(v4 + 60) = 0xFFFFFFFFLL;
      *(_QWORD*)(v4 + 48) = 0;
      v3 = *(_DWORD*)(result + 48);
    }
    v5 = v3 - 1;
    v6 = *(_DWORD*)(result + 24);
    if (v6 < v5) {
      v7 = v6 + 1;
    }
    else {
      v7 = 0;
    }
    *(_DWORD*)(result + 24) = v7;
  }
  return result;
}

__int64 nvidia_619860(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 == 0) {
    return 0;
  }
  if (a2 == 0) {
    return 0;
  }
  v4 = *(unsigned int*)(a1 + 48);
  if ((_DWORD)v4 == 0) {
    return 0;
  }
  v5 = v4 & 3;
  v6 = *(_QWORD*)(a1 + 40);
  if ((v4 & 3) != 0) {
    while (*(_QWORD*)(v6 + 48) != a2) {
      v6 += 72;
      if (--v5 == 0) {
        goto LABEL_7;
      }
    }
    return 1;
  }
LABEL_7:
  v7 = v2 + 72LL * (unsigned int)v4;
  if (((v4 - 1) & 0x1FFFFFFFFFFFFFFFuLL) < 3) {
    return 0;
  }
  for (i = v6 + 144; *(_QWORD*)(i - 96) != a2; i += 288) {
    if (*(_QWORD*)(i - 24) == a2) {
      return 1;
    }
    if (*(_QWORD*)(i + 48) == a2) {
      return 1;
    }
    if (*(_QWORD*)(i + 120) == a2) {
      return 1;
    }
    v10 = i + 144;
    if (v10 == v7) {
      return 0;
    }
  }
  return 1;
}

__attribute__((swiftcall)) void nvidia_619950(PSEUDO_X8 x8_, __int64 a1,
                                              _DWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  unsigned int v5;
  bool v6;
  __int64 v8;
  int v9;
  __int64 v13;
  float result;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  int v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  bool v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v67;
  __int64 v68;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  _BYTE* v73;
  int v74;
  bool v75;
  bool v76;
  int v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  int v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  unsigned __int64 v90;
  int v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  int v98;
  int v99;
  __int64 v100;
  __int64 v101;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 == nullptr) {
    *(_BYTE*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 11;
    {
      result;
      return;
    }
  }
  v4 = a2[66];
  if (v4 > 2) {
    goto LABEL_13;
  }
  v5 = a2[1];
  v6 = *a2 >= *(_DWORD*)(a3 + 24) && v5 >= *(_DWORD*)(a3 + 28);
  if (!v6) {
    goto LABEL_13;
  }
  if (*a2 > *(_DWORD*)(a3 + 32) || v5 > *(_DWORD*)(a3 + 36)) {
    goto LABEL_13;
  }
  v9 = a2[6];
  if (v9 == 0) {
  LABEL_19:
    LODWORD(v8) = 11;
    goto LABEL_14;
  }
  v13 = a4;
  if ((nvidia_619120(a1 + 1256, v9) & 1) != 0) {
    v15 = (unsigned int)a2[7];
    v16 = *(_QWORD*)(v8 + 8);
    v6 = v16 >= v15;
    v17 = v16 - v15;
    a4 = v13;
    if (!v6) {
      goto LABEL_19;
    }
    v25 = a2[4];
    v18 = a2;
    if (v25 == 3) {
      v26 = (unsigned int)a2[5];
      if ((v26 & 0x3F) != 0) {
        goto LABEL_13;
      }
      v43 = a2[9];
      if (v43 > 5) {
        goto LABEL_13;
      }
      v44 = 8LL << v43;
      v45 = (unsigned int)a2[1];
      v46 = v44 - 1;
      v47 = (unsigned int)v45 & ((_DWORD)v44 - 1);
      v6 = v44 >= v47;
      v48 = v44 - v47;
      if (!v6) {
        v48 = 0;
      }
      if (((unsigned int)v45 & v46) == 0) {
        v48 = 0;
      }
      v29 = v48 + v45;
    }
    else {
      if (v25 != 1) {
        goto LABEL_13;
      }
      v26 = (unsigned int)a2[5];
      if ((unsigned __int8)a2[5] != 0) {
        goto LABEL_13;
      }
      v27 = (unsigned int)a2[1];
      LODWORD(v28) = 4 - (a2[1] & 3);
      if ((v27 & 3) != 0) {
        v28 = (unsigned int)v28;
      }
      else {
        v28 = 0;
      }
      v29 = v28 + v27;
    }
    if (v17 < v29 * v26) {
    LABEL_13:
      LODWORD(v8) = 2;
    LABEL_14:
      *(_BYTE*)a4 = 0;
      *(_DWORD*)(a4 + 8) = v8;
      {
        result;
        return;
      }
    }
  }
  else {
    a4 = v13;
    v18 = a2;
    if ((_DWORD)v8 != 0) {
      goto LABEL_14;
    }
  }
  if (((1u >> (v4 & 7)) & 1) == 0) {
    v30 = v18[28];
    if (v30 == 0) {
      goto LABEL_19;
    }
    if ((nvidia_619120(a1 + 1256, v30) & 1) != 0) {
      v31 = (unsigned int)a2[29];
      v32 = *(_QWORD*)(v8 + 8);
      v6 = v32 >= v31;
      v33 = v32 - v31;
      a4 = v13;
      if (!v6) {
        goto LABEL_19;
      }
      v34 = a2[26];
      v18 = a2;
      if (v34 == 1) {
        v35 = (unsigned int)a2[27];
        if ((unsigned __int8)a2[27] != 0) {
          goto LABEL_13;
        }
        v83 = (unsigned int)a2[23];
        LODWORD(v84) = 4 - (a2[23] & 3);
        v84 = (v83 & 3) != 0 ? (unsigned int)v84 : 0LL;
        v42 = v84 + v83;
      }
      else {
        if (v34 != 3) {
          goto LABEL_13;
        }
        v35 = (unsigned int)a2[27];
        if ((v35 & 0x3F) != 0) {
          goto LABEL_13;
        }
        v36 = a2[31];
        if (v36 > 5) {
          goto LABEL_13;
        }
        v37 = 8LL << v36;
        v38 = (unsigned int)a2[23];
        v39 = v37 - 1;
        v40 = (unsigned int)v38 & ((_DWORD)v37 - 1);
        v6 = v37 >= v40;
        v41 = v37 - v40;
        if (!v6) {
          v41 = 0;
        }
        if (((unsigned int)v38 & v39) == 0) {
          v41 = 0;
        }
        v42 = v41 + v38;
      }
      if (v33 < v42 * v35) {
        goto LABEL_13;
      }
    }
    else {
      a4 = v13;
      v18 = a2;
      if ((_DWORD)v8 != 0) {
        goto LABEL_14;
      }
    }
    if ((v4 & 1) == 0) {
      v49 = v18[50];
      if (v49 == 0) {
        goto LABEL_19;
      }
      if ((nvidia_619120(a1 + 1256, v49) & 1) != 0) {
        v50 = (unsigned int)a2[51];
        v51 = *(_QWORD*)(v8 + 8);
        v6 = v51 >= v50;
        v52 = v51 - v50;
        if (!v6) {
          goto LABEL_66;
        }
        v86 = a2[48];
        if (v86 == 1) {
          v87 = (unsigned int)a2[49];
          if ((unsigned __int8)a2[49] != 0) {
            goto LABEL_153;
          }
          v100 = (unsigned int)a2[45];
          v18 = a2;
          LODWORD(v101) = 4 - (a2[45] & 3);
          if ((v100 & 3) != 0) {
            v101 = (unsigned int)v101;
          }
          else {
            v101 = 0;
          }
          v94 = v101 + v100;
        }
        else {
          if (v86 != 3) {
            goto LABEL_153;
          }
          v87 = (unsigned int)a2[49];
          if ((v87 & 0x3F) != 0) {
            goto LABEL_153;
          }
          v88 = a2[53];
          if (v88 > 5) {
            goto LABEL_153;
          }
          v89 = (unsigned int)a2[45];
          v90 = 8LL << v88;
          v18 = a2;
          v91 = v90 - 1;
          v92 = (unsigned int)v89 & ((_DWORD)v90 - 1);
          v6 = v90 >= v92;
          v93 = v90 - v92;
          if (!v6) {
            v93 = 0;
          }
          if (((unsigned int)v89 & v91) == 0) {
            v93 = 0;
          }
          v94 = v93 + v89;
        }
        v6 = v52 >= v94 * v87;
        a4 = v13;
        if (!v6) {
          goto LABEL_13;
        }
      }
      else {
        a4 = v13;
        v18 = a2;
        if ((_DWORD)v8 != 0) {
          goto LABEL_14;
        }
      }
    }
  }
  v19 = a3;
  v20 = *((_QWORD*)v18 + 1);
  if (((6u >> v4) & 1) == 0) {
    goto LABEL_70;
  }
  v21 = v18[4];
  v22 = 3u >> v4;
  v23 = (*((_QWORD*)v18 + 12) ^ v20) & 0x3F00000000LL;
  if (v21 == 3) {
    if (v23 != 0) {
      goto LABEL_19;
    }
    if (v18[26] != 3) {
      goto LABEL_13;
    }
    v24 = v18[9];
    if (v18[31] != v24) {
      goto LABEL_13;
    }
    if ((v22 & 1) != 0) {
      goto LABEL_70;
    }
    if (((*((_QWORD*)v18 + 23) ^ v20) & 0x3F00000000LL) != 0) {
    LABEL_66:
      LODWORD(v8) = 11;
      a4 = v13;
      goto LABEL_14;
    }
    if (a2[48] == 3) {
      v18 = a2;
      v19 = a3;
      a4 = v13;
      if (a2[53] == v24) {
        goto LABEL_70;
      }
      goto LABEL_13;
    }
  LABEL_153:
    LODWORD(v8) = 2;
    a4 = v13;
    goto LABEL_14;
  }
  if (v23 != 0) {
    goto LABEL_19;
  }
  if (v18[26] != v21) {
    goto LABEL_13;
  }
  if ((v22 & 1) == 0) {
    if (((*((_QWORD*)v18 + 23) ^ v20) & 0x3F00000000LL) != 0) {
      goto LABEL_19;
    }
    if (v18[48] != v21) {
      goto LABEL_13;
    }
  }
LABEL_70:
  if ((v20 & 0x3F00000000LL) == 0xE00000000LL) {
  LABEL_71:
    v53 = 2;
  LABEL_72:
    *(_BYTE*)a4 = 0;
    *(_DWORD*)(a4 + 8) = v53;
    {
      result;
      return;
    }
  }
  v54 = v18[66];
  v55 = v18[67];
  v56 = *((_QWORD*)v18 + 12);
  v57 = 0;
  v58 = *((_QWORD*)v18 + 23);
  while (1) {
    v59 = (char*)&SdkData_c651c0 + v57;
    if (*(_DWORD*)((char*)&SdkData_c651c0 + v57 + 4) == v54 &&
        *((_DWORD*)v59 + 2) == v55 &&
        ((*(_DWORD*)((char*)&SdkData_c651c0 + v57 + 16) ^ (unsigned int)v20) &
         0x1FFFFFFF) == 0) {
      v60 = *(_QWORD*)((char*)&SdkData_c651c0 + v57 + 24);
      v62 = v60 == 0;
      v61 = ((unsigned int)v60 ^ (unsigned int)v56) & 0x1FFFFFFF;
      v62 = v62 || v61 == 0;
      if (v62) {
        v63 = (char*)&SdkData_c651c0 + v57;
        v64 = *(_QWORD*)((char*)&SdkData_c651c0 + v57 + 32);
        v62 = v64 == 0;
        v65 = ((unsigned int)v64 ^ (unsigned int)v58) & 0x1FFFFFFF;
        if (v62 || v65 == 0) {
          break;
        }
      }
    }
    if (*((_DWORD*)v59 + 11) == v54 &&
        *(_DWORD*)((char*)&SdkData_c651c0 + v57 + 48) == v55 &&
        ((*(_DWORD*)((char*)&SdkData_c651c0 + v57 + 56) ^ (unsigned int)v20) &
         0x1FFFFFFF) == 0) {
      v67 = *(_QWORD*)((char*)&SdkData_c651c0 + v57 + 64);
      v62 = v67 == 0;
      v68 = ((unsigned int)v67 ^ (unsigned int)v56) & 0x1FFFFFFF;
      if (v62 || v68 == 0) {
        v70 = *(_QWORD*)((char*)&SdkData_c651c0 + v57 + 72);
        if (v70 == 0 ||
            (((unsigned int)v70 ^ (unsigned int)v58) & 0x1FFFFFFF) == 0) {
          v63 = (char*)&SdkData_c651c0 + v57 + 40;
          break;
        }
      }
    }
    v57 += 80;
    if (v57 == 4080) {
      goto LABEL_71;
    }
  }
  v71 = *(_DWORD*)v63;
  if (*(_DWORD*)v63 > 0x7Eu) {
    goto LABEL_109;
  }
  v72 = v19 + 6LL * v71;
  v74 = *(unsigned __int8*)(v72 + 224);
  v73 = (_BYTE*)(v72 + 224);
  v75 = v74 == 0 && v73[1] == 0;
  v76 = v75 && v73[2] == 0;
  if (!v76 || v73[3] != 0) {
    goto LABEL_109;
  }
  if (v71 != 123 || v73[4] != 0) {
    v78 = *(_DWORD*)v63;
  LABEL_131:
    a4 = v13;
    v18 = a2;
    goto LABEL_110;
  }
  v78 = 69;
  if (*(_BYTE*)(a3 + 638) != 0 || *(_BYTE*)(a3 + 639) != 0 ||
      *(_BYTE*)(a3 + 640) != 0 || *(_BYTE*)(a3 + 641) != 0) {
    goto LABEL_131;
  }
  a4 = v13;
  v18 = a2;
  if (*(_BYTE*)(a3 + 642) == 0) {
  LABEL_109:
    v78 = *(_DWORD*)v63;
  }
LABEL_110:
  v79 = (unsigned int)v18[68];
  if ((unsigned int)v79 >= 0xA) {
    v53 = 11;
    goto LABEL_72;
  }
  v80 = v18[66];
  if (v80 != 0) {
    v81 = *((unsigned __int8*)v18 + 96);
    v82 = v18[27];
    v80 = v18[23];
  }
  else {
    v82 = 0;
    v81 = 0;
  }
  v95 = *v18;
  if (HIBYTE(*v18) != 0 || (v96 = v18[1]) >> 24 != 0) {
    v53 = 4;
    goto LABEL_72;
  }
  *(_QWORD*)(a4 + 8) = a2;
  *(_DWORD*)(a4 + 32) = v81;
  *(_DWORD*)(a4 + 36) = v82;
  *(_DWORD*)(a4 + 60) = 0;
  *(_BYTE*)a4 = 1;
  v97 = SdkData_c661b0[v79];
  *(_DWORD*)(a4 + 16) = v78;
  *(_DWORD*)(a4 + 20) = (unsigned __int8)v20;
  v98 = a2[5];
  v99 = SdkData_c661d8[v79];
  *(float*)(a4 + 52) = (float)v95;
  *(float*)(a4 + 56) = (float)v96;
  *(_DWORD*)(a4 + 24) = v98;
  *(_DWORD*)(a4 + 28) = v96;
  *(_DWORD*)(a4 + 48) = v97;
  *(_DWORD*)(a4 + 40) = v80;
  *(_DWORD*)(a4 + 44) = v99;
  {
    (float)v95;
    return;
  }
}

#pragma GCC visibility pop
