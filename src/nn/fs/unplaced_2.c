#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_fs_detail_GetFileSystemProxyServiceObject_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_10dae0(_QWORD);
__int64 SdkRoutine_856490(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_crypto_detail_ClearMemoryImpl_plt(_QWORD, _QWORD);
__int64 nn_crypto_detail_DigitsFromOctetString_plt(_QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 nn_crypto_detail_OctetStringFromDigits_plt(_QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 nn_crypto_detail_Sha256Impl_Destroy_Sha256Impl_plt(_QWORD);
__int64 nn_crypto_detail_Sha256Impl_GetHash_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_crypto_detail_Sha256Impl_Initialize_plt(_QWORD);
__int64 nn_crypto_detail_Sha256Impl_Update_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_4635e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_fs_4635e0");
__int64 nn_fs_463e10_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_fs_463e10");
__int64 nn_fs_463ee0_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_fs_463ee0");
__int64 nn_fs_ConvertAccountUidToFsUserId_plt(_QWORD);
unsigned __int128 nn_fs_ConvertAccountUidToFsUserId_plt_pair(_QWORD) __asm__(
    "nn_fs_ConvertAccountUidToFsUserId_plt");
__int64 nn_fs_HierarchicalRomFileTable_FindNextDirectory_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_FindNextFile_plt(_QWORD, _QWORD, _QWORD,
                                                        _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_OpenFile_plt_85b790(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nn_fs_Path_GetString_plt(_QWORD);
__int64 nn_fs_Path_InitializeWithReplaceBackslash_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_Normalize_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_Path_plt(_QWORD);
__int64 nn_fs_QuerySaveDataTotalSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_SaveDataFilter_Make_plt_85b3d0(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD, _QWORD);
__int64 nn_fs__1019e0(_QWORD);
__int64 nn_fs__119020();
__int64 nn_fs__119040();
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_CreateBcatSaveData_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_CreateCacheStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_CreateDeviceSaveData_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD, _QWORD);
__int64 nn_fs_detail_CreateSaveData_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_CreateTemporaryStorage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_ExtendSaveData_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_FileAccessor_Destroy_FileAccessor_plt(_QWORD);
__int64 nn_fs_detail_FileAccessor_GetSize_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_FileAccessor_ReadWithoutCacheAccessLog_plt(_QWORD, _QWORD,
                                                                _QWORD, _QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_ReplacementList_Finalize(void);
__int64 nn_fs_detail_FileSystemAccessor_OpenFile_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 nn_fs_detail_FindFileSystem_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_FindSaveDataWithFilter_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_FixSaveDataCertificate_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 nn_fs_detail_GetSaveDataAvailableSize_plt_85b330(_QWORD);
__int64 nn_fs_detail_GetSaveDataAvailableSize_plt_85b5a0(_QWORD, _QWORD);
__int64 nn_fs_detail_GetSaveDataJournalSize_plt_85b340(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_GetSaveDataJournalSize_plt_85b5b0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(_QWORD, _QWORD) __asm__(
    "nn_fs_detail_IsEnabledAccessLog_plt_85a3e0");
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_OpenSaveDataTransferProhibiterForCloudBackUp_plt(_QWORD);
__int64 nn_fs_detail_OutputAccessLogUnlessResultSuccess_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD, const char*,
                                                            ...);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_fs_detail_PathBasedFileDataCache_Add_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_PathBasedFileDataCache_FindHashIndexOrNext_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(_QWORD);
__int64 nn_fs_detail_PathBasedFileDataCache_Remove_plt_85bc80(_QWORD, _QWORD,
                                                              _QWORD, _QWORD);
__int64 nn_fs_detail_QuerySaveDataTotalSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__int64 nn_os_FinalizeReaderWriterLock_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeReaderWriterLock_plt(_QWORD);
__int64 nn_os_ReleaseWriteLock_plt(_QWORD);
__int64 nn_os_SdkAllocateTlsSlot_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
__int64 strlen_plt(_QWORD);
extern _UNKNOWN SdkData_eafad8;
extern _UNKNOWN SdkData_eafae0;
extern _UNKNOWN SdkData_eafaf0;
extern __int64 (*SdkData_e50d18[])();
extern __int64 (*SdkData_eafb20)(_QWORD*, __int64);
extern __int64 (*SdkData_eafb20_alt1)(int*, __int64) __asm__("SdkData_eafb20");
extern __int64 SdkData_e86db8;
extern __int64 SdkData_e86dc0;
extern __int64 SdkData_e86e10;
extern __int64 SdkData_e86e18;
extern __int64 SdkData_eafa60;
extern __int64 SdkData_eafa68;
extern int SdkData_eafa2c;
extern int SdkData_eafa58;
void __attribute__((noreturn)) nn_fs_dc4f0(const char*);
void fs_path_based_file_data_cache_api_1304d0();
__int64 nn_fs_1021a0(_QWORD* a1);
__int64 nn_fs_1021f0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                     unsigned __int64 a5);
__int64 nn_fs_1022d0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_fs_102350(__int64 a1);
__int64 nn_fs_102380(__int64 a1, __int64 a2);
__int64 nn_fs_1023c0(__int64 a1, __int64 a2);
__int64 nn_fs_102400(__int64 a1);
__int64 nn_fs_OpenCacheStorageList(_QWORD* a1);
__int64 nn_fs_ReadCacheStorageList(int* a1, _QWORD* a2, __int64* a3, int a4);
__int64 nn_fs_CloseCacheStorageList(__int64 a1);
bool nn_fs_10d5d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void __attribute__((noreturn)) nn_fs_10de70();
__int64 nn_fs_118da0(__int64 a1);
__int64 nn_fs_1190f0();
__int64 nn_fs_11cc60(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                     __int64 a5);
_QWORD* nn_fs_121050(_QWORD* result);
__int64 nn_fs_1210c0(_QWORD* a1);
__int64 nn_fs_121140(_QWORD* a1);
__int64 nn_fs_121220(_QWORD* a1);
bool nn_fs_125640(__int64 a1);
__int64 nn_fs_126510(__int64 a1);
__int64 nn_fs_1265a0(__int64 a1);
__int64 nn_fs_12f010(_QWORD* a1, __int64* a2);
__int64 nn_fs_12f1b0(__int64 a1, _QWORD* a2);
__int64 nn_fs_12f1f0(_QWORD* a1, _QWORD* a2);
__int64 nn_fs_12f390();
__int64 nn_fs_12f3a0(_QWORD* a1);
__int64 nn_fs_12f400(__int64 result, __int64 a2, unsigned __int64 a3,
                     __int64 a4);
__int64 nn_fs_12f4a0(__int64 result, __int64* a2);
__int64 nn_fs_12f4f0(__int64 a1);
__int64 nn_fs_12f5a0(_QWORD* a1);
_QWORD* nn_fs_12f600(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4);
void nn_fs_12f6a0(__int64 a1, __int64 a2);
__int64 nn_fs_12f6c0(__int64 a1);
__int64 nn_fs_EnableIndividualFileDataCache(void* this_, const char* a2,
                                            size_t a3);
__int64 nn_fs_DisableIndividualFileDataCache(void* this_, const char* a2);
__int64 nn_fs_131090(_QWORD** a1);
__int64 nn_fs_131410(_QWORD** a1);
__int64 nn_fs_detail_EnsureApplicationDeviceSaveData(_QWORD* a1, __int64 a2,
                                                     __int64 a3, __int64 a4);
__int64 nn_fs_462860(_QWORD* a1, __int64 a2, __int64 a3);
__int64 nn_fs_EnsureApplicationSaveData(__int64* a1, __int64 a2, __int64* a3,
                                        __int64* a4);
__int64 nn_fs_4631f0(__int64 a1, _QWORD* a2);
__int64 nn_fs_ExtendApplicationSaveData(_QWORD* a1, __int64 a2, __int64 a3,
                                        char a4, __int64* a5, __int64 a6,
                                        __int64 a7);
__int64 nn_fs_4635e0(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4,
                     __int64 a5);
__int64 nn_fs_GetApplicationSaveDataSize(_QWORD* a1, _QWORD* a2, __int64 a3,
                                         char a4, __int64* a5);
__int64 TryCreateCacheStorage(_QWORD* a1, unsigned int a2, __int64 a3,
                              __int64 a4, unsigned int a5, __int64 a6,
                              __int64 a7, unsigned int a8, __int64 a9);
__int64 nn_fs_463e10(_QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4);
__int64 nn_fs_463ee0(_QWORD* a1, _QWORD** a2, __int64 a3, __int64 a4);
__int64 nn_fs_463fc0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);
__int64 nn_fs_4640c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);

__int64 nn_fs_1021a0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  v1 = (_QWORD*)a1[1];
  *a1 = SdkData_e50d18;
  a1[1] = 0;
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 8LL))(
        (void*)v1, v1);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 nn_fs_1021f0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                     unsigned __int64 a5)
{
  __int64 result;

  result = 3104258;
  if (a2 == nullptr) {
    return nn_fs__1019e0(result);
  }
  if (a5 == 0) {
    *a2 = 0;
    return 0;
  }
  if (a4 == 0) {
    return nn_fs__1019e0(result);
  }
  if (a3 < 0) {
    result = 3103234;
    return nn_fs__1019e0(result);
  }
  if ((a5 & 0x8000000000000000LL) != 0) {
    return nn_fs__1019e0(3103746);
  }
  if ((a3 ^ 0x7FFFFFFFFFFFFFFFuLL) < a5) {
    result = 1538562;
    return nn_fs__1019e0(result);
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16LL))(
      *(_QWORD*)(a1 + 8));
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
    if ((result & 0x3FFFFF) == 0x227A02) {
      return 1538562;
    }
    return nn_fs__1019e0(result);
  }
  return result;
}

__int64 nn_fs_1022d0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5;

  if (a4 == 0) {
    return 0;
  }
  v5 = 3103746;
  if (a3 == 0) {
    return nn_fs__1019e0(3104258);
  }
  if (a2 < 0) {
    return nn_fs__1019e0(3103234);
  }
  if ((a4 & 0x8000000000000000LL) == 0) {
    v5 = 1538562;
    if ((a2 ^ 0x7FFFFFFFFFFFFFFFuLL) >= a4) {
      v5 = (*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
          *(_QWORD*)(a1 + 8));
    }
  }
  return nn_fs__1019e0(v5);
}

__int64 nn_fs_102350(__int64 a1)
{
  unsigned int v1;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
  return nn_fs__1019e0(v1);
}

__int64 nn_fs_102380(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a2 < 0) {
    return nn_fs__1019e0(3103746);
  }
  v2 = (*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 40LL))(
      *(_QWORD*)(a1 + 8));
  return nn_fs__1019e0(v2);
}

__int64 nn_fs_1023c0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a2 == 0) {
    return nn_fs__1019e0(3104258);
  }
  v2 = (*(unsigned int (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8));
  return nn_fs__1019e0(v2);
}

__int64 nn_fs_102400(__int64 a1)
{
  unsigned int v1;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  return nn_fs__1019e0(v1);
}

__int64 nn_fs_OpenCacheStorageList(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v11;
  _QWORD v12[4];
  const void* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;

  v16 = a1;
  v13 = nullptr;
  v12[0] = &v16;
  v12[1] = &v14;
  v14 = &v15;
  v15 = nullptr;
  v12[2] = &v13;
  v12[3] = &v15;
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0 &&
      ((v1 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v2 = nn_os_GetSystemTick_plt(v1);
    v3 = SdkRoutine_10dae0(v12);
    v4 = v3;
    v5 = nn_os_GetSystemTick_plt(v3);
    v6 = v4;
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v4, v2, v5, "OpenCacheStorageList", 0,
        ", cachestoragelist_handle: 0x%p", v13);
  }
  else {
    v4 = SdkRoutine_10dae0(v12);
    v6 = v4;
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v6) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v6, "OpenCacheStorageList");
    v11 = v4;
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v11);
      __udf(0);
    }
  }
  else if (v4 != 0) {
    goto LABEL_8;
  }
  v4 = 0;
  *v16 = v13;
LABEL_8:
  v7 = v15;
  v15 = nullptr;
  if (v7 != nullptr) {
    v8 = v7[1];
    if (v8 != 0) {
      v9 = v7[3];
      v7[2] = v8;
      nn_fs_detail_Deallocate_plt(v8, v9 - v8);
    }
    nn_fs_detail_Deallocate_plt(v7, 40);
  }
  return v4;
}

__int64 nn_fs_ReadCacheStorageList(int* a1, _QWORD* a2, __int64* a3, int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v24;

  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1) & 1) != 0) {
    v8 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0);
    if ((v8 & 1) != 0) {
      v9 = nn_os_GetSystemTick_plt(v8);
      v10 = v9;
      if (a4 < 0) {
        v11 = 3072514;
      }
      else {
        v11 = 3104258;
        if (a1 != nullptr && a2 != nullptr) {
          if (a4 != 0 && (v12 = a3[1], v13 = *a3,
                          *a3 < (unsigned __int64)((a3[2] - v12) >> 2))) {
            v14 = 0;
            do {
              *a3 = v13 + 1;
              if (v12 == 0) {
                break;
              }
              a2[2] = 0;
              a2[3] = 0;
              *a2 = 0;
              a2[1] = 0;
              *(_DWORD*)a2 = *(_DWORD*)(v12 + 4 * v13);
              a2 += 4;
              if (a4 - 1 == v14) {
                LODWORD(v14) = v14 + 1;
                break;
              }
              v12 = a3[1];
              v13 = *a3;
              ++v14;
            } while (*a3 < (unsigned __int64)((a3[2] - v12) >> 2));
          }
          else {
            LODWORD(v14) = 0;
          }
          *a1 = v14;
          v18 = nn_os_GetSystemTick_plt(v9);
          v19 = *a1;
          v20 = v18;
          v21 = 0;
          v11 = 0;
          goto LABEL_30;
        }
      }
      v20 = nn_os_GetSystemTick_plt(v9);
      v19 = 0;
      v21 = v11;
    LABEL_30:
      nn_fs_detail_OutputAccessLog_plt_85a860(
          v21, v10, v20, "ReadCacheStorageList", 0,
          ", cachestoragelist_handle: 0x%p, infobuffercount: "
          "0x%X, cache_storage_count: %d",
          a3, a4, v19);
    LABEL_31:
      v22 = v11;
      if ((nn_fs_detail_IsAbortNeeded_plt(v11) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_39:
      nn_fs_detail_LogResultErrorMessage_plt(v22, "ReadCacheStorageList");
      v24 = v11;
      if (v11 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v24);
      LABEL_41:
        nn_fs_detail_LogResultErrorMessage_plt(0, "ReadCacheStorageList");
      }
      return 0;
    }
  }
  if ((a4 & 0x80000000) == 0) {
    v11 = 3104258;
    if (a1 != nullptr && a2 != nullptr) {
      if (a4 != 0) {
        v15 = a3[1];
        v16 = *a3;
        if (*a3 < (unsigned __int64)((a3[2] - v15) >> 2)) {
          v17 = 0;
          while (1) {
            *a3 = v16 + 1;
            if (v15 == 0) {
            LABEL_22:
              *a1 = v17;
              if ((nn_fs_detail_IsAbortNeeded_plt(0) & 1) == 0) {
                return 0;
              }
              goto LABEL_41;
            }
            a2[2] = 0;
            a2[3] = 0;
            *a2 = 0;
            a2[1] = 0;
            *(_DWORD*)a2 = *(_DWORD*)(v15 + 4 * v16);
            a2 += 4;
            if (a4 - 1 == v17) {
              break;
            }
            v15 = a3[1];
            v16 = *a3;
            ++v17;
            if (*a3 >= (unsigned __int64)((a3[2] - v15) >> 2)) {
              goto LABEL_22;
            }
          }
          *a1 = v17 + 1;
          if ((nn_fs_detail_IsAbortNeeded_plt(0) & 1) != 0) {
            goto LABEL_41;
          }
          return 0;
        }
        *a1 = 0;
        if ((nn_fs_detail_IsAbortNeeded_plt(0) & 1) != 0) {
          goto LABEL_41;
        }
      }
      else {
        *a1 = 0;
        if ((nn_fs_detail_IsAbortNeeded_plt(0) & 1) != 0) {
          goto LABEL_41;
        }
      }
      return 0;
    }
    goto LABEL_31;
  }
  v11 = 3072514;
  v22 = 3072514;
  if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
    goto LABEL_39;
  }
LABEL_32:
  if (v11 == 0) {
    return 0;
  }
  return v11;
}

__int64 nn_fs_CloseCacheStorageList(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v1 = (_QWORD*)a1;
  if (a1 != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      v3 = v1[3];
      v1[2] = v2;
      nn_fs_detail_Deallocate_plt(v2, v3 - v2);
    }
    a1 = nn_fs_detail_Deallocate_plt(v1, 40);
  }
  result = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(a1);
  if ((result & 1) != 0) {
    result = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0);
    if ((result & 1) != 0) {
      v5 = nn_os_GetSystemTick_plt(result);
      v6 = nn_os_GetSystemTick_plt(v5);
      return nn_fs_detail_OutputAccessLog_plt_85a860(
          0, v5, v6, "CloseCacheStorageList", 0,
          ", cachestoragelist_handle: 0x%p", v1);
    }
  }
  return result;
}

bool nn_fs_10d5d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  char v13;
  int v14;
  _QWORD v16[4];
  _QWORD v17[23];
  _QWORD v18[4];
  int v19;
  _BYTE v20[4];
  _QWORD v21[4];
  _QWORD v22[4];
  _QWORD v23[4];

  v19 = 0;
  memset(v18, 0, sizeof(v18));
  memset(&v17[15], 0, 64);
  if (a5 != 0) {
    nn_crypto_detail_DigitsFromOctetString_plt(v18, 8, a4, 32);
    v13 = 1;
  }
  else {
    v13 = 0;
  }
  BYTE1(v19) = v13;
  memset(v17, 0, 120);
  memset(v16, 0, sizeof(v16));
  nn_crypto_detail_Sha256Impl_Initialize_plt(v17);
  nn_crypto_detail_Sha256Impl_Update_plt(v17, a6, a7);
  nn_crypto_detail_Sha256Impl_GetHash_plt(v17, v16, 32);
  memset(v23, 0, sizeof(v23));
  nn_crypto_detail_DigitsFromOctetString_plt(v23, 8, a8, a9);
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  v20[0] = 0;
  v14 = SdkRoutine_856490(v20, v21, v16, 32, v18, v23, 8);
  if (v14 == 0) {
    nn_crypto_detail_OctetStringFromDigits_plt(a2, 32, v21, 8);
    nn_crypto_detail_OctetStringFromDigits_plt(a2 + 32, 32, v22, 8);
    nn_crypto_detail_Sha256Impl_Destroy_Sha256Impl_plt(v17);
    if (BYTE1(v19) != 1) {
      return v14 == 0;
    }
    goto LABEL_6;
  }
  nn_crypto_detail_Sha256Impl_Destroy_Sha256Impl_plt(v17);
  if (BYTE1(v19) == 1) {
  LABEL_6:
    nn_crypto_detail_ClearMemoryImpl_plt(v18, 32);
  }
  return v14 == 0;
}

void __attribute__((noreturn)) nn_fs_10de70() { nn_fs_dc4f0("vector"); }

__int64 nn_fs_118da0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  char v4[64];
  _QWORD v5[2];
  _QWORD v6[3];
  char v7[56];
  _QWORD v8[2];
  __int64 v9;
  __int64 vars0;

  strcpy(v7, "Error: FS Access Log failed to allocate memory.\n");
  if ((SdkData_eafa2c & 2) != 0) {
    v9 = 0;
    nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)&v9, a1);
    v8[0] = v7;
    v8[1] = 48;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 944LL))(v9, v8);
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    }
  }
  result = nn_fs_detail_IsAbortNeeded_plt(1752066);
  if ((result & 1) != 0) {
    v8[0] = 0;
    nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)v8, result);
    (*(void (**)(_QWORD))(*(_QWORD*)v8[0] + 1000LL))(v8[0]);
    if (v8[0] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v8[0] + 8LL))(v8[0]);
    }
    LODWORD(v8[0]) = 1752066;
    v2 = nn_diag_detail_AbortImpl_plt_858db0(v8);
    v6[1] = &vars0;
    v6[2] = v3;
    v6[0] = 0;
    strcpy(v4, "Error: FS Access Log to SD Card failed to allocate memory.\n");
    nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)v6, v2);
    v5[0] = v4;
    v5[1] = 59;
    (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)v6[0] + 944LL))(v6[0], v5);
    if (v6[0] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6[0] + 8LL))(v6[0]);
    }
    result = nn_fs_detail_IsAbortNeeded_plt(1752066);
    if ((result & 1) != 0) {
      v5[0] = 0;
      nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)v5, result);
      (*(void (**)(_QWORD))(*(_QWORD*)v5[0] + 1000LL))(v5[0]);
      if (v5[0] != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v5[0] + 8LL))(v5[0]);
      }
      LODWORD(v5[0]) = 1752066;
      nn_diag_detail_AbortImpl_plt_858db0(v5);
      __udf(0);
    }
  }
  return result;
}

__int64 nn_fs_1190f0()
{
  __int64 result;
  int v1;

  v1 = nn_os_SdkAllocateTlsSlot_plt(&SdkData_eafa58, 0);
  if (v1 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v1);
    __udf(0);
  }
  result = fw_rtld_RegisterCrtDestructor();
  SdkData_eafa60 = (__int64)nn_fs__119020;
  SdkData_eafa68 = (__int64)nn_fs__119040;
  return result;
}

__int64 nn_fs_11cc60(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  char v52;
  __int64 v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  char v67;
  __int64 v68;
  __int64 v69;
  char v70;
  __int64 v71;
  __int64 v72;
  char v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  char v79;
  __int64 v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  char v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  char v93;
  __int64 v94;
  _BYTE* v95;
  unsigned int v98;
  _QWORD* v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;

  v10 = nn_fs_detail_Allocate_plt(769);
  if (v10 != 0) {
    v11 = v10;
    if ((*(_BYTE*)(a1 + 32) & 1) != 0 && (a4 == 0 || a5 >= 1)) {
      if (a4 != 0) {
        v101 = a2;
        v56 = 0;
        v57 = a4;
        if (a5 <= 1) {
          v12 = 1;
        }
        else {
          v12 = a5;
        }
        while (1) {
          v16 = nn_fs_HierarchicalRomFileTable_FindNextDirectory_plt(
              *(_QWORD*)(a1 + 8) + 8LL, v11, a3, 769);
          if (v16 != 0) {
            break;
          }
          v58 = 0;
          v59 = a4 + 784 * v56;
          while (1) {
            if (*(_BYTE*)(v11 + v58) == 0) {
            LABEL_97:
              v94 = v11 + v58;
              v95 = (_BYTE*)(v57 + v58);
              goto LABEL_121;
            }
            v60 = v57 + v58;
            v61 = v11 + v58;
            *(_BYTE*)(v57 + v58) = *(_BYTE*)(v11 + v58);
            if (*(_BYTE*)(v11 + v58 + 1) == 0) {
              v94 = v61 + 1;
              v95 = (_BYTE*)(v60 + 1);
              goto LABEL_121;
            }
            *(_BYTE*)(v60 + 1) = *(_BYTE*)(v11 + v58 + 1);
            if (*(_BYTE*)(v61 + 2) == 0) {
              v94 = v11 + v58 + 2;
              v95 = (_BYTE*)(v57 + v58 + 2);
              goto LABEL_121;
            }
            v62 = v11 + v58;
            *(_BYTE*)(v60 + 2) = *(_BYTE*)(v61 + 2);
            v63 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 3) == 0) {
              v94 = v62 + 3;
              v95 = (_BYTE*)(v63 + 3);
              goto LABEL_121;
            }
            *(_BYTE*)(v63 + 3) = *(_BYTE*)(v11 + v58 + 3);
            v64 = *(_BYTE*)(v62 + 4);
            if (v64 == 0) {
              v94 = v11 + v58 + 4;
              v95 = (_BYTE*)(v57 + v58 + 4);
              goto LABEL_121;
            }
            v65 = v11 + v58;
            *(_BYTE*)(v63 + 4) = v64;
            v66 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 5) == 0) {
              v94 = v65 + 5;
              v95 = (_BYTE*)(v66 + 5);
              goto LABEL_121;
            }
            *(_BYTE*)(v66 + 5) = *(_BYTE*)(v11 + v58 + 5);
            v67 = *(_BYTE*)(v65 + 6);
            if (v67 == 0) {
              v94 = v11 + v58 + 6;
              v95 = (_BYTE*)(v57 + v58 + 6);
              goto LABEL_121;
            }
            v68 = v11 + v58;
            *(_BYTE*)(v66 + 6) = v67;
            v69 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 7) == 0) {
              v94 = v68 + 7;
              v95 = (_BYTE*)(v69 + 7);
              goto LABEL_121;
            }
            *(_BYTE*)(v69 + 7) = *(_BYTE*)(v11 + v58 + 7);
            v70 = *(_BYTE*)(v68 + 8);
            if (v70 == 0) {
              v94 = v11 + v58 + 8;
              v95 = (_BYTE*)(v57 + v58 + 8);
              goto LABEL_121;
            }
            v71 = v11 + v58;
            *(_BYTE*)(v69 + 8) = v70;
            v72 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 9) == 0) {
              v94 = v71 + 9;
              v95 = (_BYTE*)(v72 + 9);
              goto LABEL_121;
            }
            *(_BYTE*)(v72 + 9) = *(_BYTE*)(v11 + v58 + 9);
            v73 = *(_BYTE*)(v71 + 10);
            if (v73 == 0) {
              v94 = v11 + v58 + 10;
              v95 = (_BYTE*)(v57 + v58 + 10);
              goto LABEL_121;
            }
            v74 = v11 + v58;
            *(_BYTE*)(v72 + 10) = v73;
            v75 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 11) == 0) {
              v94 = v74 + 11;
              v95 = (_BYTE*)(v75 + 11);
              goto LABEL_121;
            }
            *(_BYTE*)(v75 + 11) = *(_BYTE*)(v11 + v58 + 11);
            v76 = *(_BYTE*)(v74 + 12);
            if (v76 == 0) {
              v94 = v11 + v58 + 12;
              v95 = (_BYTE*)(v57 + v58 + 12);
              goto LABEL_121;
            }
            v77 = v11 + v58;
            *(_BYTE*)(v75 + 12) = v76;
            v78 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 13) == 0) {
              v94 = v77 + 13;
              v95 = (_BYTE*)(v78 + 13);
              goto LABEL_121;
            }
            *(_BYTE*)(v78 + 13) = *(_BYTE*)(v11 + v58 + 13);
            v79 = *(_BYTE*)(v77 + 14);
            if (v79 == 0) {
              v94 = v11 + v58 + 14;
              v95 = (_BYTE*)(v57 + v58 + 14);
              goto LABEL_121;
            }
            v80 = v11 + v58;
            *(_BYTE*)(v78 + 14) = v79;
            v81 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 15) == 0) {
              v94 = v80 + 15;
              v95 = (_BYTE*)(v81 + 15);
              goto LABEL_121;
            }
            *(_BYTE*)(v81 + 15) = *(_BYTE*)(v11 + v58 + 15);
            v82 = *(_BYTE*)(v80 + 16);
            if (v82 == 0) {
              v94 = v11 + v58 + 16;
              v95 = (_BYTE*)(v57 + v58 + 16);
              goto LABEL_121;
            }
            v83 = v11 + v58;
            *(_BYTE*)(v81 + 16) = v82;
            v84 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 17) == 0) {
              v94 = v83 + 17;
              v95 = (_BYTE*)(v84 + 17);
              goto LABEL_121;
            }
            *(_BYTE*)(v84 + 17) = *(_BYTE*)(v11 + v58 + 17);
            v85 = *(_BYTE*)(v83 + 18);
            if (v85 == 0) {
              v94 = v11 + v58 + 18;
              v95 = (_BYTE*)(v57 + v58 + 18);
              goto LABEL_121;
            }
            v86 = v11 + v58;
            *(_BYTE*)(v84 + 18) = v85;
            v87 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 19) == 0) {
              v94 = v86 + 19;
              v95 = (_BYTE*)(v87 + 19);
              goto LABEL_121;
            }
            *(_BYTE*)(v87 + 19) = *(_BYTE*)(v11 + v58 + 19);
            v88 = *(_BYTE*)(v86 + 20);
            if (v88 == 0) {
              v94 = v11 + v58 + 20;
              v95 = (_BYTE*)(v57 + v58 + 20);
              goto LABEL_121;
            }
            v89 = v11 + v58;
            *(_BYTE*)(v87 + 20) = v88;
            v90 = v57 + v58;
            if (*(_BYTE*)(v11 + v58 + 21) == 0) {
              v94 = v89 + 21;
              v95 = (_BYTE*)(v90 + 21);
              goto LABEL_121;
            }
            *(_BYTE*)(v90 + 21) = *(_BYTE*)(v11 + v58 + 21);
            v91 = *(unsigned __int8*)(v89 + 22);
            if (v91 == 0) {
              v94 = v11 + v58 + 22;
              v95 = (_BYTE*)(v57 + v58 + 22);
              goto LABEL_121;
            }
            *(_BYTE*)(v90 + 22) = v91;
            v92 = v57 + v58;
            v93 = *(_BYTE*)(v11 + v58 + 23);
            if (v93 == 0) {
              break;
            }
            v58 += 24;
            *(_BYTE*)(v92 + 23) = v93;
            if ((_DWORD)v58 == 768) {
              goto LABEL_97;
            }
          }
          v94 = v11 + v58 + 23;
          v95 = (_BYTE*)(v92 + 23);
        LABEL_121:
          *v95 = 0;
          if ((unsigned int)v94 + (unsigned int)strlen_plt(v94) -
                  (unsigned int)v11 >
              0x300) {
          LABEL_139:
            v16 = 3073538;
            goto LABEL_138;
          }
          ++v56;
          v57 += 784;
          *(_BYTE*)(v59 + 772) = 0;
          *(_QWORD*)(v59 + 776) = 0;
          if (v56 == v12) {
            a2 = v101;
            goto LABEL_6;
          }
        }
        LODWORD(v12) = v56;
        a2 = v101;
      }
      else {
        LODWORD(v12) = -1;
        do {
          v16 = nn_fs_HierarchicalRomFileTable_FindNextDirectory_plt(
              *(_QWORD*)(a1 + 8) + 8LL, v11, a3, 769);
          LODWORD(v12) = v12 + 1;
        } while (v16 == 0);
      }
      if ((v16 & 0x1FF) != 2 || ((v16 >> 9) & 0x1FFF) - 7910 >= 3) {
        goto LABEL_138;
      }
    }
    else {
      LODWORD(v12) = 0;
    }
  LABEL_6:
    if ((*(_BYTE*)(a1 + 32) & 2) == 0) {
      goto LABEL_137;
    }
    v13 = (unsigned int)v12;
    if (a4 != 0 && a5 <= (unsigned int)v12) {
      goto LABEL_137;
    }
    if (a4 != 0) {
      v100 = a2;
      v14 = a4 + 784LL * (unsigned int)v12;
      while (1) {
        v15 = *(_DWORD*)(a3 + 4);
        v16 = nn_fs_HierarchicalRomFileTable_FindNextFile_plt(
            *(_QWORD*)(a1 + 8) + 8LL, v11, a3, 769);
        if (v16 != 0) {
          break;
        }
        v17 = 0;
        v18 = a4 + 784 * v13;
        while (1) {
          if (*(_BYTE*)(v11 + v17) == 0) {
          LABEL_38:
            v53 = v11 + v17;
            v54 = (_BYTE*)(v14 + v17);
            goto LABEL_62;
          }
          v19 = v14 + v17;
          v20 = v11 + v17;
          *(_BYTE*)(v14 + v17) = *(_BYTE*)(v11 + v17);
          if (*(_BYTE*)(v11 + v17 + 1) == 0) {
            v53 = v20 + 1;
            v54 = (_BYTE*)(v19 + 1);
            goto LABEL_62;
          }
          *(_BYTE*)(v19 + 1) = *(_BYTE*)(v11 + v17 + 1);
          if (*(_BYTE*)(v20 + 2) == 0) {
            v53 = v11 + v17 + 2;
            v54 = (_BYTE*)(v14 + v17 + 2);
            goto LABEL_62;
          }
          v21 = v11 + v17;
          *(_BYTE*)(v19 + 2) = *(_BYTE*)(v20 + 2);
          v22 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 3) == 0) {
            v53 = v21 + 3;
            v54 = (_BYTE*)(v22 + 3);
            goto LABEL_62;
          }
          *(_BYTE*)(v22 + 3) = *(_BYTE*)(v11 + v17 + 3);
          v23 = *(_BYTE*)(v21 + 4);
          if (v23 == 0) {
            v53 = v11 + v17 + 4;
            v54 = (_BYTE*)(v14 + v17 + 4);
            goto LABEL_62;
          }
          v24 = v11 + v17;
          *(_BYTE*)(v22 + 4) = v23;
          v25 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 5) == 0) {
            v53 = v24 + 5;
            v54 = (_BYTE*)(v25 + 5);
            goto LABEL_62;
          }
          *(_BYTE*)(v25 + 5) = *(_BYTE*)(v11 + v17 + 5);
          v26 = *(_BYTE*)(v24 + 6);
          if (v26 == 0) {
            v53 = v11 + v17 + 6;
            v54 = (_BYTE*)(v14 + v17 + 6);
            goto LABEL_62;
          }
          v27 = v11 + v17;
          *(_BYTE*)(v25 + 6) = v26;
          v28 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 7) == 0) {
            v53 = v27 + 7;
            v54 = (_BYTE*)(v28 + 7);
            goto LABEL_62;
          }
          *(_BYTE*)(v28 + 7) = *(_BYTE*)(v11 + v17 + 7);
          v29 = *(_BYTE*)(v27 + 8);
          if (v29 == 0) {
            v53 = v11 + v17 + 8;
            v54 = (_BYTE*)(v14 + v17 + 8);
            goto LABEL_62;
          }
          v30 = v11 + v17;
          *(_BYTE*)(v28 + 8) = v29;
          v31 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 9) == 0) {
            v53 = v30 + 9;
            v54 = (_BYTE*)(v31 + 9);
            goto LABEL_62;
          }
          *(_BYTE*)(v31 + 9) = *(_BYTE*)(v11 + v17 + 9);
          v32 = *(_BYTE*)(v30 + 10);
          if (v32 == 0) {
            v53 = v11 + v17 + 10;
            v54 = (_BYTE*)(v14 + v17 + 10);
            goto LABEL_62;
          }
          v33 = v11 + v17;
          *(_BYTE*)(v31 + 10) = v32;
          v34 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 11) == 0) {
            v53 = v33 + 11;
            v54 = (_BYTE*)(v34 + 11);
            goto LABEL_62;
          }
          *(_BYTE*)(v34 + 11) = *(_BYTE*)(v11 + v17 + 11);
          v35 = *(_BYTE*)(v33 + 12);
          if (v35 == 0) {
            v53 = v11 + v17 + 12;
            v54 = (_BYTE*)(v14 + v17 + 12);
            goto LABEL_62;
          }
          v36 = v11 + v17;
          *(_BYTE*)(v34 + 12) = v35;
          v37 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 13) == 0) {
            v53 = v36 + 13;
            v54 = (_BYTE*)(v37 + 13);
            goto LABEL_62;
          }
          *(_BYTE*)(v37 + 13) = *(_BYTE*)(v11 + v17 + 13);
          v38 = *(_BYTE*)(v36 + 14);
          if (v38 == 0) {
            v53 = v11 + v17 + 14;
            v54 = (_BYTE*)(v14 + v17 + 14);
            goto LABEL_62;
          }
          v39 = v11 + v17;
          *(_BYTE*)(v37 + 14) = v38;
          v40 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 15) == 0) {
            v53 = v39 + 15;
            v54 = (_BYTE*)(v40 + 15);
            goto LABEL_62;
          }
          *(_BYTE*)(v40 + 15) = *(_BYTE*)(v11 + v17 + 15);
          v41 = *(_BYTE*)(v39 + 16);
          if (v41 == 0) {
            v53 = v11 + v17 + 16;
            v54 = (_BYTE*)(v14 + v17 + 16);
            goto LABEL_62;
          }
          v42 = v11 + v17;
          *(_BYTE*)(v40 + 16) = v41;
          v43 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 17) == 0) {
            v53 = v42 + 17;
            v54 = (_BYTE*)(v43 + 17);
            goto LABEL_62;
          }
          *(_BYTE*)(v43 + 17) = *(_BYTE*)(v11 + v17 + 17);
          v44 = *(_BYTE*)(v42 + 18);
          if (v44 == 0) {
            v53 = v11 + v17 + 18;
            v54 = (_BYTE*)(v14 + v17 + 18);
            goto LABEL_62;
          }
          v45 = v11 + v17;
          *(_BYTE*)(v43 + 18) = v44;
          v46 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 19) == 0) {
            v53 = v45 + 19;
            v54 = (_BYTE*)(v46 + 19);
            goto LABEL_62;
          }
          *(_BYTE*)(v46 + 19) = *(_BYTE*)(v11 + v17 + 19);
          v47 = *(_BYTE*)(v45 + 20);
          if (v47 == 0) {
            v53 = v11 + v17 + 20;
            v54 = (_BYTE*)(v14 + v17 + 20);
            goto LABEL_62;
          }
          v48 = v11 + v17;
          *(_BYTE*)(v46 + 20) = v47;
          v49 = v14 + v17;
          if (*(_BYTE*)(v11 + v17 + 21) == 0) {
            v53 = v48 + 21;
            v54 = (_BYTE*)(v49 + 21);
            goto LABEL_62;
          }
          *(_BYTE*)(v49 + 21) = *(_BYTE*)(v11 + v17 + 21);
          v50 = *(unsigned __int8*)(v48 + 22);
          if (v50 == 0) {
            v53 = v11 + v17 + 22;
            v54 = (_BYTE*)(v14 + v17 + 22);
            goto LABEL_62;
          }
          *(_BYTE*)(v49 + 22) = v50;
          v51 = v14 + v17;
          v52 = *(_BYTE*)(v11 + v17 + 23);
          if (v52 == 0) {
            break;
          }
          v17 += 24;
          *(_BYTE*)(v51 + 23) = v52;
          if ((_DWORD)v17 == 768) {
            goto LABEL_38;
          }
        }
        v53 = v11 + v17 + 23;
        v54 = (_BYTE*)(v51 + 23);
      LABEL_62:
        *v54 = 0;
        if ((unsigned int)v53 + (unsigned int)strlen_plt(v53) -
                (unsigned int)v11 >
            0x300) {
          goto LABEL_139;
        }
        v55 = *(_QWORD*)(a1 + 8);
        v102 = 0;
        v103 = 0;
        v16 = nn_fs_HierarchicalRomFileTable_OpenFile_plt_85b790(v55 + 8, &v102,
                                                                 v15);
        if (v16 != 0) {
          goto LABEL_138;
        }
        ++v13;
        v14 += 784;
        *(_BYTE*)(v18 + 772) = 1;
        *(_QWORD*)(v18 + 776) = v103;
        if (a5 <= v13) {
          a2 = v100;
          LODWORD(v12) = v13;
          goto LABEL_137;
        }
      }
      a2 = v100;
      LODWORD(v12) = v13;
    }
    else {
      LODWORD(v12) = v12 - 1;
      do {
        v16 = nn_fs_HierarchicalRomFileTable_FindNextFile_plt(
            *(_QWORD*)(a1 + 8) + 8LL, v11, a3, 769);
        LODWORD(v12) = v12 + 1;
      } while (v16 == 0);
    }
    if ((v16 & 0x1FF) == 2 && ((v16 >> 9) & 0x1FFF) - 7910 < 3) {
    LABEL_137:
      v16 = 0;
      *a2 = (int)v12;
    }
  LABEL_138:
    v98 = v16;
    nn_fs_detail_Deallocate_plt(v11, 769);
    return v98;
  }
  return 1752066;
}

_QWORD* nn_fs_121050(_QWORD* result)
{
  __int64 v1;

  v1 = result[3];
  *result = SdkData_e86db8 + 16;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    return (_QWORD*)std___1___shared_weak_count___release_weak_plt(v1);
  }
  return result;
}

__int64 nn_fs_1210c0(_QWORD* a1)
{
  __int64 v1;

  v1 = a1[3];
  *a1 = SdkData_e86db8 + 16;
  if (v1 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    return nn_fs_detail_Deallocate_plt(a1, 40);
  }
  (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  std___1___shared_weak_count___release_weak_plt(v1);
  return nn_fs_detail_Deallocate_plt(a1, 40);
}

__int64 nn_fs_121140(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *a1 = SdkData_e86dc0 + 16;
  result = a1[7];
  a1[7] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v3 = a1[6];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak_plt(v3);
    *a1 = SdkData_e86db8 + 16;
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  else {
    *a1 = SdkData_e86db8 + 16;
    v4 = a1[3];
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak_plt(v4);
  }
  return result;
}

__int64 nn_fs_121220(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = SdkData_e86dc0 + 16;
  v2 = a1[7];
  a1[7] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[6];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_plt(v3);
  }
  v4 = a1[3];
  *a1 = SdkData_e86db8 + 16;
  if (v4 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    return nn_fs_detail_Deallocate_plt(a1, 64);
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_plt(v4);
  return nn_fs_detail_Deallocate_plt(a1, 64);
}

bool nn_fs_125640(__int64 a1)
{
  _BOOL8 result;
  unsigned __int8* v9;
  __int64 v10;
  int v12;
  unsigned int v13;

  if (*(_BYTE*)(a1 + 110) == 0 && *(_BYTE*)(a1 + 111) == 0 &&
      *(_BYTE*)(a1 + 113) == 0 && *(_BYTE*)(a1 + 114) == 0 &&
      *(_BYTE*)(a1 + 115) == 0 && *(_BYTE*)(a1 + 149) == 0 &&
      *(_BYTE*)(a1 + 150) == 0 && *(_BYTE*)(a1 + 151) == 0) {
    v9 = (unsigned __int8*)(a1 + 301);
    v10 = 224;
    while (*(v9 - 13) == 0) {
      if (*(v9 - 12) != 0) {
        break;
      }
      if (*(v9 - 11) != 0) {
        break;
      }
      if (*(v9 - 10) != 0) {
        break;
      }
      if (*(v9 - 9) != 0) {
        break;
      }
      if (*(v9 - 8) != 0) {
        break;
      }
      if (*(v9 - 7) != 0) {
        break;
      }
      if (*(v9 - 6) != 0) {
        break;
      }
      if (*(v9 - 5) != 0) {
        break;
      }
      if (*(v9 - 4) != 0) {
        break;
      }
      if (*(v9 - 3) != 0) {
        break;
      }
      if (*(v9 - 2) != 0) {
        break;
      }
      if (*(v9 - 1) != 0) {
        break;
      }
      v12 = *v9;
      v9 += 14;
      if (v12 != 0) {
        break;
      }
      v10 -= 14;
      if (v10 == 0) {
        result = false;
        if (*(_BYTE*)(a1 + 44) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 45) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 46) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 47) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 48) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 49) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 50) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 51) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 52) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 53) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 54) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 55) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 56) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 57) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 58) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 59) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 60) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 61) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 62) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 63) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 64) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 65) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 66) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 67) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 68) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 69) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 70) != 0) {
          return result;
        }
        if (*(_BYTE*)(a1 + 71) != 0) {
          return result;
        }
        result = false;
        if (*(unsigned __int8*)(a1 + 40) > 5u ||
            *(unsigned __int8*)(a1 + 41) > 1u ||
            (*(_QWORD*)(a1 + 72) & 0x8000000000000000LL) != 0 ||
            (*(_QWORD*)(a1 + 80) & 0x8000000000000000LL) != 0 ||
            (*(_QWORD*)(a1 + 88) & 0x8000000000000000LL) != 0) {
          return result;
        }
        v13 = *(unsigned __int8*)(a1 + 108);
        if ((v13 < 5 || v13 - 100 <= 2) &&
            *(unsigned __int8*)(a1 + 109) <= 1u) {
          return *(unsigned __int8*)(a1 + 148) < 3u;
        }
        return false;
      }
    }
  }
  return false;
}

__int64 nn_fs_126510(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "Register");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 nn_fs_1265a0(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "Cancel");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 nn_fs_12f010(_QWORD* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v9;
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

  v4 = nn_os_SdkMutexType_Lock_plt(a1 + 1);
  v5 = *a2;
  if (a1[5] == *a2 && a1[6] == a2[1] && a1[7] == a2[2] && a1[8] == a2[3] &&
      a1[9] == a2[4]) {
    v7 = a1[10];
    goto LABEL_32;
  }
  v6 = a2[2];
  v7 = a1[4];
  v9 = v6 > -1 && v6 == v5;
  if (v5 != v7 && v9 == 0) {
    v12 = 0;
    goto LABEL_19;
  }
  v11 = a1[3];
  if (((v11 != 0) & ~v9) == 0) {
    v12 = a1[2];
  LABEL_19:
    a1[3] = v12;
    goto LABEL_20;
  }
  v12 = 2 * v11;
  a1[3] = 2 * v11;
  if (v11 > 0x8000) {
    v12 = (a1[2] + 0xFFFFLL) & -a1[2];
    goto LABEL_19;
  }
LABEL_20:
  a1[5] = *a2;
  v13 = a2[1];
  v14 = a2[2];
  v15 = a2[4];
  a1[8] = a2[3];
  a1[9] = v15;
  a1[6] = v13;
  a1[7] = v14;
  if (v12 == 0) {
    goto LABEL_30;
  }
  v16 = a2[1];
  v17 = a1[2];
  v18 = 0x10000;
  if (v16 < 0x10000) {
    v18 = a2[1];
  }
  if (v12 > v18) {
    v18 = v12;
  }
  v19 = v17 - 1;
  v20 = v17 - 1 + v18;
  v21 = -v17;
  v22 = a2[3];
  v23 = v20 & v21;
  if (v22 < 0 || (v24 = *a2 + v16) + v23 <= v22) {
    if ((v23 & 0x8000000000000000LL) == 0) {
      goto LABEL_31;
    }
    nn_diag_detail_AbortImpl_plt_856170(v4);
  LABEL_30:
    v23 = 0;
    goto LABEL_31;
  }
  v23 = (((v19 + v22) & v21) - v24) & ~((((v19 + v22) & v21) - v24) >> 63);
LABEL_31:
  a1[10] = v7;
  a1[11] = v23;
LABEL_32:
  nn_os_SdkMutexType_Unlock_plt(a1 + 1);
  return v7;
}

__int64 nn_fs_12f1b0(__int64 a1, _QWORD* a2)
{
  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  *(_QWORD*)(a1 + 32) = a2[1] + *a2;
  return nn_os_SdkMutexType_Unlock_plt(a1 + 8);
}

__int64 nn_fs_12f1f0(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v4 = nn_os_SdkMutexType_Lock_plt(a1 + 1);
  v5 = a1 + 4;
  if (a1[4] == *a2 && a1[5] == a2[1] && a1[6] == a2[2] && a1[7] == a2[3] &&
      a1[8] == a2[4]) {
    v15 = a1[9];
    goto LABEL_16;
  }
  if (a1[6] == a2[2] && (v6 = a1[7]) == a2[3] && a1[8] == a2[4]) {
    v20 = a2[1];
    v7 = a1[2];
    v21 = v6 - (*a2 + v20);
    if (v21 >= 2 * v20) {
      v21 = 2 * v20;
    }
    v9 = v21 & -(__int64)v7;
  }
  else {
    v7 = a1[2];
    a1[3] = v7;
    v8 = a2[1];
    if (v8 != a2[3] - *a2) {
      *v5 = *a2;
      v17 = a2[1];
      v18 = a2[2];
      v19 = a2[4];
      a1[7] = a2[3];
      a1[8] = v19;
      a1[5] = v17;
      a1[6] = v18;
      v13 = a1 + 3;
      v14 = a1[11];
      if (v7 <= v14) {
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    v9 = -(__int64)v7 & (2 * v8);
  }
  a1[3] = v9;
  *v5 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[4];
  a1[7] = a2[3];
  a1[8] = v12;
  a1[5] = v10;
  a1[6] = v11;
  v13 = a1 + 3;
  v14 = v7;
  v7 = v9;
  if (v9 >= v14) {
    v14 = a1[11];
    if (v9 <= v14) {
      goto LABEL_14;
    }
  }
LABEL_13:
  *v13 = v14;
  v7 = v14;
LABEL_14:
  if ((v7 & 0x8000000000000000LL) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
    __udf(0);
  }
  v15 = *a2;
  a1[9] = v15;
  a1[10] = v7;
LABEL_16:
  nn_os_SdkMutexType_Unlock_plt(a1 + 1);
  return v15;
}

__int64 nn_fs_12f390() { return 0; }

__int64 nn_fs_12f3a0(_QWORD* a1)
{
  *a1 = SdkData_e86e10 + 16;
  return nn_fs_detail_FileDataCacheSystem_ReplacementList_Finalize();
}

__int64 nn_fs_12f400(__int64 result, __int64 a2, unsigned __int64 a3,
                     __int64 a4)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;

  v4 = *(__int64**)(result + 56);
  v5 = (__int64*)v4[1];
  v6 = *v5;
  *(_QWORD*)(*v4 + 8) = v5;
  *v5 = *v4;
  *(_QWORD*)(v6 + 8) = v4;
  *v4 = v6;
  --*(_DWORD*)(result + 12);
  v4[4] = a2;
  v4[5] = a3;
  v4[6] = a4;
  *((_DWORD*)v4 + 14) = 0;
  v7 = *v4;
  *v4 = result + 32;
  v8 = *(_QWORD**)(result + 40);
  *(_QWORD*)(v7 + 8) = v8;
  *v8 = v7;
  *(_QWORD*)(result + 40) = v4;
  LODWORD(v6) = *(_DWORD*)(result + 16) - 1;
  ++*(_DWORD*)(result + 8);
  v9 = *(_QWORD*)(result + 64) + 16LL * (int)(v6 & (a3 >> 14));
  v10 = v4[2];
  v4 += 2;
  *v4 = v9;
  v11 = *(_QWORD**)(v9 + 8);
  *(_QWORD*)(v10 + 8) = v11;
  *v11 = v10;
  *(_QWORD*)(v9 + 8) = v4;
  return result;
}

__int64 nn_fs_12f4a0(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;

  v2 = *a2;
  if (a2 != (__int64*)(result + 32)) {
    v3 = (__int64*)a2[1];
    v4 = *v3;
    *(_QWORD*)(v2 + 8) = v3;
    *v3 = *a2;
    *(_QWORD*)(v4 + 8) = a2;
    v2 = v4;
  }
  *a2 = result + 32;
  v5 = *(_QWORD**)(result + 40);
  *(_QWORD*)(v2 + 8) = v5;
  *v5 = v2;
  *(_QWORD*)(result + 40) = a2;
  return result;
}

__int64 nn_fs_12f4f0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;

  v1 = *(__int64**)(a1 + 32);
  if (v1 != (__int64*)(a1 + 32)) {
    v2 = (__int64*)v1[1];
    v3 = *v2;
    *(_QWORD*)(*v1 + 8) = v2;
    *v2 = *v1;
    *(_QWORD*)(v3 + 8) = v1;
    *v1 = v3;
  }
  --*(_DWORD*)(a1 + 8);
  v4 = *v1;
  *v1 = a1 + 48;
  v5 = *(_QWORD**)(a1 + 56);
  *(_QWORD*)(v4 + 8) = v5;
  *v5 = v4;
  *(_QWORD*)(a1 + 56) = v1;
  LODWORD(v4) = *(_DWORD*)(a1 + 16) - 1;
  ++*(_DWORD*)(a1 + 12);
  if (v1 + 2 !=
      (__int64*)(*(_QWORD*)(a1 + 64) +
                 16LL * (int)(v4 & ((unsigned __int64)v1[5] >> 14)))) {
    v6 = (__int64*)v1[3];
    v7 = *v6;
    *(_QWORD*)(v1[2] + 8) = v6;
    *v6 = v1[2];
    *(_QWORD*)(v7 + 8) = v1 + 2;
    v1[2] = v7;
  }
  return v1[6];
}

__int64 nn_fs_12f5a0(_QWORD* a1)
{
  *a1 = SdkData_e86e18 + 16;
  return nn_fs_detail_FileDataCacheSystem_ReplacementList_Finalize();
}

_QWORD* nn_fs_12f600(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = *(__int64**)(a1 + 56);
  v5 = (__int64*)v4[1];
  v6 = *v5;
  *(_QWORD*)(*v4 + 8) = v5;
  *v5 = *v4;
  *(_QWORD*)(v6 + 8) = v4;
  *v4 = v6;
  --*(_DWORD*)(a1 + 12);
  v4[4] = a2;
  v4[5] = a3;
  v4[6] = a4;
  *((_DWORD*)v4 + 14) = 30;
  v7 = *v4;
  v9 = *(_QWORD*)(a1 + 32);
  result = (_QWORD*)(a1 + 32);
  *v4 = v9;
  *(_QWORD*)(v7 + 8) = result;
  *(_QWORD*)(*result + 8LL) = v4;
  *result = v7;
  LODWORD(v6) = *((_DWORD*)result - 4) - 1;
  ++*((_DWORD*)result - 6);
  v10 = result[4];
  v11 = v4[2];
  v4 += 2;
  v12 = 16LL * (int)(v6 & (a3 >> 14));
  *v4 = *(_QWORD*)(v10 + v12);
  *(_QWORD*)(v11 + 8) = v10 + v12;
  *(_QWORD*)(*(_QWORD*)(v10 + v12) + 8LL) = v4;
  *(_QWORD*)(v10 + v12) = v11;
  return result;
}

void nn_fs_12f6a0(__int64 a1, __int64 a2) { *(_DWORD*)(a2 + 56) = 0; }

__int64 nn_fs_12f6c0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;

  v1 = *(__int64**)(a1 + 40);
  v2 = (__int64*)(a1 + 32);
  if (v1 != (__int64*)(a1 + 32)) {
    v3 = *(__int64**)(a1 + 40);
    v4 = v3;
    do {
      if (*((_DWORD*)v3 + 14) < *((_DWORD*)v4 + 14)) {
        v3 = v4;
      }
      v4 = (__int64*)v4[1];
    } while (v4 != v2);
    v5 = *((_DWORD*)v3 + 14);
    if (v5 <= 30) {
      do {
        *((_DWORD*)v1 + 14) = *((_DWORD*)v1 + 14) - v5 + 31;
        v1 = (__int64*)v1[1];
      } while (v1 != v2);
    }
    v1 = v3;
  }
  if (v1 != v2) {
    v6 = (__int64*)v1[1];
    v7 = *v6;
    *(_QWORD*)(*v1 + 8) = v6;
    *v6 = *v1;
    *(_QWORD*)(v7 + 8) = v1;
    *v1 = v7;
  }
  --*(_DWORD*)(a1 + 8);
  v8 = *v1;
  *v1 = a1 + 48;
  v9 = *(_QWORD**)(a1 + 56);
  *(_QWORD*)(v8 + 8) = v9;
  *v9 = v8;
  *(_QWORD*)(a1 + 56) = v1;
  LODWORD(v8) = *(_DWORD*)(a1 + 16) - 1;
  ++*(_DWORD*)(a1 + 12);
  if (v1 + 2 !=
      (__int64*)(*(_QWORD*)(a1 + 64) +
                 16LL * (int)(v8 & ((unsigned __int64)v1[5] >> 14)))) {
    v10 = (__int64*)v1[3];
    v11 = *v10;
    *(_QWORD*)(v1[2] + 8) = v10;
    *v10 = v1[2];
    *(_QWORD*)(v11 + 8) = v1 + 2;
    v1[2] = v11;
  }
  return v1[6];
}

__int64 nn_fs_EnableIndividualFileDataCache(void* this_, const char* a2,
                                            size_t a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v19;
  _QWORD* v20[5];
  __int64 v21;
  __int64 v22;
  __int64 v23;
  size_t v24;
  const char* v25;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = a2;
  v23 = 0;
  v24 = a3;
  v22 = 0;
  v5 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(this_, a2),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v5 & 1) != 0) {
    v6 = nn_os_GetSystemTick_plt(v5),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = nn_fs_detail_FindFileSystem_plt(&v23, &v22, this_),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v7;
    v9 = nn_os_GetSystemTick_plt(v7),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = v8;
    nn_fs_detail_OutputAccessLogUnlessResultSuccess_plt(
        v8, v6, v9, "EnableIndividualFileDataCache", 0,
        ", path: \"%s\", buffer_size: %zu, file_size: %ld", (const char*)this_,
        a3, 0),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v8 = nn_fs_detail_FindFileSystem_plt(&v23, &v22, this_),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = v8;
  }
  v11 = nn_fs_detail_IsAbortNeeded_plt(v10),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v11 & 1) != 0) {
    v11 = nn_fs_detail_LogResultErrorMessage_plt(
        v10, "EnableIndividualFileDataCache"),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LODWORD(v20[0]) = v8;
    if (v8 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v20),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else if (v8 != 0) {
    return v8;
  }
  v21 = 0;
  v20[0] = &v25;
  v20[1] = &v23;
  v20[2] = &v22;
  v20[3] = &v21;
  v20[4] = &v24;
  v13 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(v11, v12),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v13 & 1) != 0 && (*(_BYTE*)(v23 + 104) & 1) != 0) {
    v14 = nn_os_GetSystemTick_plt(v13),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = nn_fs_131090(v20),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v15;
    v16 = nn_os_GetSystemTick_plt(v15),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = v8;
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v8, v14, v16, "EnableIndividualFileDataCache", 0,
        ", path: \"%s\", buffer_size: %zu, file_size: %ld", (const char*)this_,
        v24, v21),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v8 = nn_fs_131090(v20),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = v8;
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v17) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v17,
                                           "EnableIndividualFileDataCache"),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = v8;
    if (v8 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v19),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  return v8;
}

__int64 nn_fs_DisableIndividualFileDataCache(void* this_, const char* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  unsigned int v18;
  _QWORD* v19[2];
  __int64 v20;
  __int64 v21;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = 0;
  v21 = 0;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(this_, a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v3 & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = nn_fs_detail_FindFileSystem_plt(&v21, &v20, this_),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = v5;
    v7 = nn_os_GetSystemTick_plt(v5),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v6;
    nn_fs_detail_OutputAccessLogUnlessResultSuccess_plt(
        v6, v4, v7, "DisableIndividualFileDataCache", 0, ", path: \"%s\"",
        (const char*)this_),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v6 = nn_fs_detail_FindFileSystem_plt(&v21, &v20, this_),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v6;
  }
  nn_fs_detail_IsAbortNeeded_plt(v8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = nn_fs_detail_LogResultErrorMessage_plt(v8,
                                              "DisableIndividualFileDataCache"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v19[0]) = v6;
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v19),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19[0] = &v21;
  v19[1] = &v20;
  v11 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(v9, v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v11 & 1) != 0 && (*(_BYTE*)(v21 + 104) & 1) != 0) {
    v12 = nn_os_GetSystemTick_plt(v11),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = nn_fs_131410(v19),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = v13;
    v15 = nn_os_GetSystemTick_plt(v13),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = v14;
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v14, v12, v15, "DisableIndividualFileDataCache", 0, ", path: \"%s\"",
        (const char*)this_),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v14 = nn_fs_131410(v19),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = v14;
  }
  nn_fs_detail_IsAbortNeeded_plt(v16),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = nn_fs_detail_LogResultErrorMessage_plt(
      v16, "DisableIndividualFileDataCache"),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = v14;
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v18),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return result;
}

__int64 nn_fs_131090(_QWORD** a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 result;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;

  if (**a1 == 0) {
    return 3104258;
  }
  if (*(_BYTE*)(*a1[1] + 106LL) != 1) {
    return 0;
  }
  v2 = (_QWORD*)nn_fs_detail_Allocate_plt(136);
  if (v2 == nullptr) {
    return 1751042;
  }
  v2[4] = 0;
  v3 = v2 + 4;
  v4 = v2;
  v2[15] = 0;
  v2[16] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[12] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[11] = 0;
  v5 = v2 + 11;
  *v2 = v2;
  v2[1] = v2;
  nn_fs_Path_Path_plt(v2 + 4);
  nn_os_InitializeReaderWriterLock_plt(v5);
  v6 = *a1;
  v21 = v4;
  v4[9] = *v6;
  v7 = *a1[1];
  v20 = 0;
  v4[3] = v7;
  LODWORD(result) =
      nn_fs_detail_FileSystemAccessor_OpenFile_plt(*a1[1], &v20, *a1[2], 1);
  if ((_DWORD)result != 0 ||
      (v19 = 0,
       LODWORD(result) = nn_fs_detail_FileAccessor_GetSize_plt(v20, &v19),
       (_DWORD)result != 0)) {
    v9 = false;
    v10 = v20;
    v20 = 0;
    if (v10 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  *a1[3] = v19;
  v11 = *a1[3];
  if (v11 > (signed __int64)*a1[4]) {
    v9 = false;
    LODWORD(result) = 3103746;
    v10 = v20;
    v20 = 0;
    if (v10 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v12 = v20;
  v13 = v4[9];
  v4[10] = v11;
  v19 = 0;
  LODWORD(result) = nn_fs_detail_FileAccessor_ReadWithoutCacheAccessLog_plt(
      v12, &v19, 0, v13);
  v9 = result == 0;
  v10 = v20;
  v20 = 0;
  if (v10 != 0) {
  LABEL_12:
    v14 = result;
    nn_fs_detail_FileAccessor_Destroy_FileAccessor_plt(v10);
    nn_fs_detail_Deallocate_plt(v10, 64);
    LODWORD(result) = v14;
  }
LABEL_13:
  if (!v9 || (LODWORD(result) =
                  nn_fs_Path_InitializeWithReplaceBackslash_plt(v3, *a1[2]),
              (_DWORD)result != 0)) {
    v21 = nullptr;
    goto LABEL_29;
  }
  LODWORD(v20) = 0;
  result = nn_fs_Path_Normalize_plt(v3, &v20);
  if ((_DWORD)result != 0) {
    goto LABEL_28;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
    nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
        &SdkData_eafae0);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eafad8);
  }
  v15 = nn_fs_Path_GetString_plt(v3);
  result = SdkData_eafb20(v4 + 2, v15);
  if ((_DWORD)result != 0) {
  LABEL_28:
    v4 = v21;
    v21 = nullptr;
    if (v4 == nullptr) {
      return result;
    }
    goto LABEL_29;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
    nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
        &SdkData_eafae0);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eafad8);
  }
  if ((nn_fs_detail_PathBasedFileDataCache_FindHashIndexOrNext_plt(
           &SdkData_eafae0, (char*)v21 + 20, v21[3], v21 + 2, v21 + 4) &
       1) != 0) {
    result = 35842;
    v4 = v21;
    v21 = nullptr;
    if (v4 == nullptr) {
      return result;
    }
    goto LABEL_29;
  }
  fs_path_based_file_data_cache_api_1304d0();
  if ((nn_fs_detail_PathBasedFileDataCache_Add_plt(&SdkData_eafae0, &v21) &
       1) == 0) {
    result = 35842;
    goto LABEL_28;
  }
  v16 = *a1[1];
  if (*(_BYTE*)(v16 + 106) == 1) {
    result = 0;
    *(_BYTE*)(v16 + 107) = 1;
    v4 = v21;
    v21 = nullptr;
    if (v4 == nullptr) {
      return result;
    }
  }
  else {
    result = 0;
    v4 = v21;
    v21 = nullptr;
    if (v4 == nullptr) {
      return result;
    }
  }
LABEL_29:
  v17 = result;
  nn_os_FinalizeReaderWriterLock_plt(v4 + 11);
  v18 = v4[5];
  v4[5] = 0;
  if (v18 != 0) {
    nn_fs_detail_Deallocate_plt(v18, v4[6]);
  }
  nn_fs_detail_Deallocate_plt(v4, 136);
  return v17;
}

__int64 nn_fs_131410(_QWORD** a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (*(_BYTE*)(**a1 + 106LL) != 1) {
    return 0;
  }
  v15 = v1;
  v16 = v2;
  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = 0;
  v10 = 0;
  nn_fs_Path_Path_plt(&v10);
  result = nn_fs_Path_InitializeWithReplaceBackslash_plt(&v10, *a1[1]);
  if ((_DWORD)result == 0) {
    v9 = 0;
    result = nn_fs_Path_Normalize_plt(&v10, &v9);
    if ((_DWORD)result == 0) {
      v8 = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
        nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
            &SdkData_eafae0);
        fw_rtld_RegisterCrtDestructor();
        __cxa_guard_release_plt(&SdkData_eafad8);
      }
      v5 = nn_fs_Path_GetString_plt(&v10);
      result = SdkData_eafb20_alt1(&v8, v5);
      if ((_DWORD)result == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
          nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
              &SdkData_eafae0);
          fw_rtld_RegisterCrtDestructor();
          __cxa_guard_release_plt(&SdkData_eafad8);
        }
        nn_os_AcquireWriteLock_plt(&SdkData_eafaf0);
        if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eafad8,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(&SdkData_eafad8) != 0) {
          nn_fs_detail_PathBasedFileDataCache_PathBasedFileDataCache_plt(
              &SdkData_eafae0);
          fw_rtld_RegisterCrtDestructor();
          __cxa_guard_release_plt(&SdkData_eafad8);
        }
        nn_fs_detail_PathBasedFileDataCache_Remove_plt_85bc80(&SdkData_eafae0,
                                                              **a1, &v8, &v10);
        nn_os_ReleaseWriteLock_plt(&SdkData_eafaf0);
        result = 0;
      }
    }
  }
  v6 = v11;
  v11 = 0;
  if (v6 != 0) {
    v7 = result;
    nn_fs_detail_Deallocate_plt(v6, v12);
    return v7;
  }
  return result;
}

__int64 nn_fs_detail_EnsureApplicationDeviceSaveData(_QWORD* a1, __int64 a2,
                                                     __int64 a3, __int64 a4)
{
  __int64 result;
  int v8;
  _QWORD v9[2];
  _QWORD v10[3];
  __int16 v11;
  char v12[8];
  __int64 v13;
  _QWORD v14[9];
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[3];
  _QWORD v21[12];

  v17 = a3;
  v18 = a2;
  v16 = a4;
  if (a1 == nullptr) {
    return 3104258;
  }
  v13 = a2;
  v15 = 0;
  v12[0] = 1;
  memset(v14, 0, sizeof(v14));
  memset(v10, 0, sizeof(v10));
  v9[0] = 0;
  v9[1] = 0;
  v8 = 0;
  v11 = 769;
  result = nn_fs_SaveDataFilter_Make_plt_85b3d0(v14, v12, &v11, v10, v9, &v8);
  if ((_DWORD)result == 0) {
    memset(v21, 0, sizeof(v21));
    result = nn_fs_detail_FindSaveDataWithFilter_plt(v21, 1, v14);
    if ((_DWORD)result != 0) {
      if ((result & 0x3FFFFF) == 0x7D402) {
        v20[0] = &v18;
        v20[1] = &v17;
        v20[2] = &v16;
        result = nn_fs_463ee0_alt1(&v15, v20, a3, a4);
        if ((_DWORD)result == 0) {
        LABEL_6:
          result = 0;
          *a1 = v15;
        }
      }
    }
    else {
      v19 = 0;
      result = nn_fs_4635e0_alt1(&v19, 1, v21[0], a3, a4);
      if ((_DWORD)result != 0 && (result & 0x1FF) == 2 &&
          (((unsigned int)result >> 9) & 0x1FFE) - 30 <= 0xF) {
        result = 0;
        v15 = v19;
      }
      if ((_DWORD)result == 0) {
        goto LABEL_6;
      }
    }
  }
  return result;
}

__int64 nn_fs_462860(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v7;
  int v8;
  _QWORD v9[2];
  _QWORD v10[3];
  __int16 v11;
  char v12[8];
  __int64 v13;
  _QWORD v14[9];
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[12];

  v3 = *(_QWORD*)(a3 + 12448);
  v15 = 0;
  v16 = a2;
  if (v3 < 1) {
  LABEL_8:
    result = 0;
    *a1 = 0;
    return result;
  }
  v13 = a2;
  v12[0] = 1;
  memset(v14, 0, sizeof(v14));
  memset(v10, 0, sizeof(v10));
  v9[0] = 0;
  v9[1] = 0;
  v8 = 0;
  v11 = 513;
  result = nn_fs_SaveDataFilter_Make_plt_85b3d0(v14, v12, &v11, v10, v9, &v8);
  if ((_DWORD)result != 0) {
    return result;
  }
  v7 = *(_QWORD*)(a3 + 12448);
  memset(v18, 0, sizeof(v18));
  result = nn_fs_detail_FindSaveDataWithFilter_plt(v18, 1, v14);
  if ((_DWORD)result == 0) {
    v17 = 0;
    result = nn_fs_4635e0_alt1(&v17, 1, v18[0], v7, 0x200000);
    if ((_DWORD)result != 0 && (result & 0x1FF) == 2 &&
        (((unsigned int)result >> 9) & 0x1FFE) - 30 <= 0xF) {
      result = 0;
      v15 = v17;
    }
    goto LABEL_5;
  }
  if ((result & 0x3FFFFF) == 0x7D402) {
    result = nn_fs_463e10_alt1(&v15, &v16, a3, v7);
  LABEL_5:
    if ((_DWORD)result != 0) {
      return result;
    }
    if (v15 != 0) {
      *a1 = v15;
      return 15362;
    }
    goto LABEL_8;
  }
  return result;
}

__int64 nn_fs_EnsureApplicationSaveData(__int64* a1, __int64 a2, __int64* a3,
                                        __int64* a4)
{
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  _QWORD* v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _QWORD v31[2];
  _QWORD v32[3];
  _BYTE v33[4];
  struct {
    char v34[8];
    __int64 v35;
  } v34_;
  int v36;
  _QWORD v37[2];
  _QWORD v38[3];
  __int16 v39;
  _QWORD v40[2];
  int v41;
  _QWORD v42[2];
  _QWORD v43[3];
  __int16 v44;
  _QWORD v45[2];
  _DWORD v46[18];
  struct {
    __int64 v47;
    __int64 v48;
  } v47_;
  __int64* v49;
  _QWORD* v50;
  __int64 v51;
  struct {
    __int64 v52;
    __int64* v53;
    __int64* v54;
    __int64* v55;
  } v52_;
  struct {
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v56_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = a2;
  if (a1 != nullptr) {
    v50 = nullptr;
    v7 = nn_fs_detail_OpenSaveDataTransferProhibiterForCloudBackUp_plt(&v50),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LODWORD(v56_.v56) = v7;
      if (v7 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else if (v7 != 0) {
      goto LABEL_35;
    }
    v8 = *a4;
    v9 = a4[1];
    v49 = nullptr;
    if ((v8 | v9) != 0 && a3[1552] >= 1) {
      v47_.v47 = ({
        unsigned __int128 r_ = nn_fs_ConvertAccountUidToFsUserId_plt_pair(a4);
        v10 = COERCE_AS(__typeof__(v10), (unsigned long long)(r_ >> 64));
        (__int64)(unsigned long long)r_;
      });
      v47_.v48 = v10;
      v43[1] = v47_.v47;
      v43[2] = v10;
      v44 = 257;
      v42[0] = 0;
      v42[1] = 0;
      v41 = 0;
      v45[1] = v51;
      memset(v46, 0, sizeof(v46));
      LOBYTE(v45[0]) = 1;
      LOBYTE(v43[0]) = 1;
      v7 = nn_fs_SaveDataFilter_Make_plt_85b3d0(v46, v45, &v44, v43, v42, &v41),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v56_.v56) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
        goto LABEL_35;
      }
      v11 = a3[1552];
      v12 = a3[1553];
      v56_.v66 = 0;
      v56_.v67 = 0;
      v56_.v64 = 0;
      v56_.v65 = 0;
      v56_.v62 = 0;
      v56_.v63 = 0;
      v56_.v60 = 0;
      v56_.v61 = 0;
      v56_.v58 = 0;
      v56_.v59 = 0;
      v56_.v56 = 0;
      v56_.v57 = 0;
      v13 = nn_fs_detail_FindSaveDataWithFilter_plt(&v56_.v56, 1, v46),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v13 != 0) {
        v7 = v13;
        if ((v13 & 0x3FFFFF) == 0x7D402) {
          v52_.v54 = a3;
          v52_.v55 = a3;
          v52_.v52 = (__int64)&v51;
          v52_.v53 = &v47_.v47;
          v7 = nn_fs_463fc0(&v49, (__int64)&v52_.v52, v11, v12, 311296),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v14 = nn_fs_detail_FixSaveDataCertificate_plt(1, v51, 1, v47_.v47,
                                                      v47_.v48, a3 + 1692),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v14 != 0) {
          v7 = v14;
        }
        else {
          v52_.v52 = 0;
          v7 = nn_fs_4635e0(&v52_.v52, 1u, v56_.v56, v11, v12),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v7 != 0 && (v7 & 0x1FF) == 2 &&
              ((v7 >> 9) & 0x1FFE) - 30 <= 0xF) {
            v7 = 0;
            v49 = (__int64*)v52_.v52;
          }
        }
      }
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v56_.v56) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
        goto LABEL_35;
      }
    }
    if (a3[1554] >= 1) {
      memset(v46, 0, sizeof(v46));
      memset(v38, 0, sizeof(v38));
      v37[0] = 0;
      v37[1] = 0;
      v36 = 0;
      v40[1] = v51;
      LOBYTE(v40[0]) = 1;
      v39 = 769;
      v7 = nn_fs_SaveDataFilter_Make_plt_85b3d0(v46, v40, &v39, v38, v37, &v36),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v56_.v56) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
        goto LABEL_35;
      }
      v15 = a3[1554];
      v16 = a3[1555];
      v47_.v47 = 0;
      v56_.v66 = 0;
      v56_.v67 = 0;
      v56_.v64 = 0;
      v56_.v65 = 0;
      v56_.v62 = 0;
      v56_.v63 = 0;
      v56_.v60 = 0;
      v56_.v61 = 0;
      v56_.v58 = 0;
      v56_.v59 = 0;
      v56_.v56 = 0;
      v56_.v57 = 0;
      v17 = nn_fs_detail_FindSaveDataWithFilter_plt(&v56_.v56, 1, v46),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v17 != 0) {
        v7 = v17;
        if ((v17 & 0x3FFFFF) == 0x7D402) {
          v52_.v54 = a3;
          v52_.v52 = (__int64)&v51;
          v52_.v53 = a3;
          v7 = nn_fs_4640c0(&v47_.v47, (__int64)&v52_.v52, v15, v16, 311296),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v52_.v52 = 0;
        v7 = nn_fs_4635e0(&v52_.v52, 1u, v56_.v56, v15, v16),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v7 != 0 && (v7 & 0x1FF) == 2 && ((v7 >> 9) & 0x1FFE) - 30 <= 0xF) {
          v7 = 0;
          v47_.v47 = v52_.v52;
        }
      }
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v56_.v56) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
        goto LABEL_35;
      }
      v18 = v47_.v47;
      if (v47_.v47 == 0) {
        v19 = nn_fs_detail_CreateDeviceSaveData_plt(v51, a3[1551], a3[1554],
                                                    a3[1555], 0, a3 + 1692),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v19 == 0 || (v29 = v19, v7 = v19, (v19 & 0x3FFFFFLL) == 0x402)) {
          v18 = 0;
        }
        else {
          if ((v19 & 0x1FF) != 2 || ((v19 >> 9) & 0x1FFE) - 30 >= 0x10) {
            if ((nn_fs_detail_IsAbortNeeded_plt(v19) & 1) != 0) {
              nn_fs_detail_LogResultErrorMessage_plt(
                  v29, "EnsureApplicationSaveData"),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LODWORD(v56_.v56) = v7;
              nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            goto LABEL_35;
          }
          v18 = 294912;
        }
      }
      v49 = (__int64*)((char*)v49 + v18);
    }
    v56_.v56 = 0;
    v20 = nn_fs_462860(&v56_.v56, v51, (__int64)a3),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v20 != 0) {
      v7 = v20;
      if ((v20 & 0x1FF) != 2 || ((v20 >> 9) & 0x1FFE) - 30 > 0xF) {
        if ((nn_fs_detail_IsAbortNeeded_plt(v20) & 1) != 0) {
          nn_fs_detail_LogResultErrorMessage_plt(v7,
                                                 "EnsureApplicationSaveData"),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v46[0] = v7;
          nn_diag_detail_AbortImpl_plt_858db0(v46),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_35;
      }
      v21 = (__int64)v49 + v56_.v56;
      if (a3[1581] < 1) {
        goto LABEL_30;
      }
    }
    else {
      v21 = (__int64)v49;
      if (a3[1581] < 1) {
        goto LABEL_30;
      }
    }
    if (v21 != 0) {
      v56_.v66 = 0;
      v56_.v67 = 0;
      v56_.v64 = 0;
      v56_.v65 = 0;
      v56_.v62 = 0;
      v56_.v63 = 0;
      v56_.v60 = 0;
      v56_.v61 = 0;
      v56_.v58 = 0;
      v56_.v59 = 0;
      v56_.v56 = 0;
      v56_.v57 = 0;
      memset(v46, 0, sizeof(v46));
      v33[1] = 4;
      v31[1] = 0;
      memset(v32, 0, sizeof(v32));
      v31[0] = 0;
      v30 = 0;
      v34_.v35 = v51;
      v34_.v34[0] = 1;
      v33[0] = 1;
      v7 = nn_fs_SaveDataFilter_Make_plt_85b3d0(v46, v34_.v34, v33, v32, v31,
                                                &v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v52_.v52) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v52_.v52),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
        goto LABEL_35;
      }
      v22 = nn_fs_detail_FindSaveDataWithFilter_plt(&v56_.v56, 3, v46),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v22 == 0) {
        goto LABEL_30;
      }
      v26 = v22;
      v7 = v22;
      if ((v22 & 0x3FFFFFLL) != 0x7D402) {
        if ((nn_fs_detail_IsAbortNeeded_plt(v22) & 1) != 0) {
          nn_fs_detail_LogResultErrorMessage_plt(v26,
                                                 "EnsureApplicationSaveData"),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LODWORD(v52_.v52) = v7;
          nn_diag_detail_AbortImpl_plt_858db0(&v52_.v52),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_35;
      }
      v27 = a3[1581];
      v52_.v52 = 0;
      v7 = nn_fs_4631f0(v27, &v52_.v52),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v47_.v47) = v7;
        if (v7 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v47_.v47),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else if (v7 != 0) {
      LABEL_35:
        v24 = v50;
        v50 = nullptr;
        if (v24 != nullptr) {
          if (*v24 != 0) {
            (*(void (**)(_QWORD))(*(_QWORD*)*v24 + 8LL))(*v24),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          nn_fs_detail_Deallocate_plt(v24, 8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        return v7;
      }
      v21 += v52_.v52;
      goto LABEL_30;
    }
    v23 = nn_fs_detail_CreateTemporaryStorage_plt(v51, a3[1551]),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v23 == 0) {
    LABEL_34:
      v7 = 0;
      *a1 = 0;
      goto LABEL_35;
    }
    v7 = v23;
    if ((v23 & 0x1FF) != 2 || ((v23 >> 9) & 0x1FFE) - 30 > 0xF) {
      if ((v23 & 0x3FFFFFLL) != 0x402) {
        if ((nn_fs_detail_IsAbortNeeded_plt(v23) & 1) != 0) {
          nn_fs_detail_LogResultErrorMessage_plt(v7,
                                                 "EnsureApplicationSaveData"),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LODWORD(v56_.v56) = v7;
          nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_35;
      }
      goto LABEL_34;
    }
    v28 = a3[1581];
    v56_.v56 = 0;
    v7 = nn_fs_4631f0(v28, &v56_.v56),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((nn_fs_detail_IsAbortNeeded_plt(v7) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(v7, "EnsureApplicationSaveData"),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46[0] = v7;
      if (v7 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(v46),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else if (v7 != 0) {
      goto LABEL_35;
    }
    v21 = v56_.v56;
  LABEL_30:
    if (v21 != 0) {
      *a1 = v21;
      v7 = 15362;
      if ((nn_fs_detail_IsAbortNeeded_plt(15362) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(15362,
                                               "EnsureApplicationSaveData"),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LODWORD(v56_.v56) = 15362;
        nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  v7 = 3072514;
  if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                           "EnsureApplicationSaveData"),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LODWORD(v56_.v56) = 3072514;
    nn_diag_detail_AbortImpl_plt_858db0(&v56_.v56),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v7;
}

__int64 nn_fs_4631f0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;

  v4 = 0;
  result = nn_fs_detail_QuerySaveDataTotalSize_plt(&v4, a1, 0);
  if ((_DWORD)result == 0) {
    *a2 = ((v4 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
  }
  return result;
}

__int64 nn_fs_ExtendApplicationSaveData(_QWORD* a1, __int64 a2, __int64 a3,
                                        char a4, __int64* a5, __int64 a6,
                                        __int64 a7)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BOOL4 v21;
  _BOOL4 v22;
  bool v23;
  int v25;
  __int64 v26;
  int v27;
  _QWORD v28[2];
  struct {
    char v29[8];
    __int64 v30;
    __int64 v31;
  } v29_;
  _BYTE v32[4];
  struct {
    char v33[8];
    __int64 v34;
  } v33_;
  _QWORD v35[9];
  __int64 v36[13];

  if (a1 == nullptr) {
    if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "ExtendApplicationSaveData");
      LODWORD(v36[0]) = 3072514;
      nn_diag_detail_AbortImpl_plt_858db0(v36);
    }
    goto LABEL_20;
  }
  v7 = *a5;
  v8 = a5[1];
  if (a4 == 3) {
    v15 = a1;
    if ((v7 | v8) != 0) {
      LODWORD(v16) = 3072514;
    }
    else {
      LODWORD(v16) = 0;
    }
  }
  else {
    if (a4 != 1) {
      if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) == 0) {
        goto LABEL_20;
      }
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "ExtendApplicationSaveData");
      LODWORD(v36[0]) = 3072514;
      goto LABEL_37;
    }
    v15 = a1;
    if ((v7 | v8) != 0) {
      LODWORD(v16) = 0;
    }
    else {
      LODWORD(v16) = 3072514;
    }
  }
  if ((nn_fs_detail_IsAbortNeeded_plt((unsigned int)v16) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt((unsigned int)v16,
                                           "ExtendApplicationSaveData");
    LODWORD(v36[0]) = v16;
    if ((_DWORD)v16 == 0) {
      goto LABEL_12;
    }
  LABEL_37:
    nn_diag_detail_AbortImpl_plt_858db0(v36);
  }
  if ((_DWORD)v16 != 0) {
    return (unsigned int)v16;
  }
LABEL_12:
  v17 = *a5;
  v18 = a5[1];
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, 96);
  v33_.v34 = a2;
  v33_.v33[0] = 1;
  v32[1] = a4;
  v32[0] = 1;
  v29_.v29[0] = 1;
  v28[0] = 0;
  v28[1] = 0;
  v27 = 0;
  v29_.v30 = v17;
  v29_.v31 = v18;
  LODWORD(v16) = nn_fs_SaveDataFilter_Make_plt_85b3d0(v35, v33_.v33, v32,
                                                      v29_.v29, v28, &v27);
  if ((nn_fs_detail_IsAbortNeeded_plt((unsigned int)v16) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt((unsigned int)v16,
                                           "ExtendApplicationSaveData");
    LODWORD(v26) = v16;
    if ((_DWORD)v16 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v26);
    }
  }
  else if ((_DWORD)v16 != 0) {
    return (unsigned int)v16;
  }
  LODWORD(v16) = nn_fs_detail_FindSaveDataWithFilter_plt(v36, 1, v35);
  if ((nn_fs_detail_IsAbortNeeded_plt((unsigned int)v16) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt((unsigned int)v16,
                                           "ExtendApplicationSaveData");
    LODWORD(v26) = v16;
    if ((_DWORD)v16 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v26);
    }
  }
  else if ((_DWORD)v16 != 0) {
    return (unsigned int)v16;
  }
  if (a4 != 1) {
    if (a4 == 3) {
      v19 = 12640;
      v20 = 12632;
      goto LABEL_22;
    }
    if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "ExtendApplicationSaveData");
      LODWORD(v26) = 3072514;
      goto LABEL_31;
    }
  LABEL_20:
    LODWORD(v16) = 3072514;
    return (unsigned int)v16;
  }
  v19 = 12624;
  v20 = 12616;
LABEL_22:
  v21 = a6 <= (signed __int64)*(_QWORD*)(a3 + v20);
  v22 = a7 <= (signed __int64)*(_QWORD*)(a3 + v19);
  v23 = v21 && v22;
  if (v21 && v22) {
    v16 = 0;
  }
  else {
    v16 = 3105794;
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v16) & 1) == 0) {
    if (!v23) {
      return (unsigned int)v16;
    }
    goto LABEL_27;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v16, "ExtendApplicationSaveData");
  LODWORD(v26) = v16;
  if (!v23) {
  LABEL_31:
    nn_diag_detail_AbortImpl_plt_858db0(&v26);
  }
LABEL_27:
  v26 = 0;
  LODWORD(v16) = nn_fs_4635e0(&v26, 1u, v36[0], a6, a7);
  if ((_DWORD)v16 != 0) {
    if ((v16 & 0x1FF) == 2 && (((unsigned int)v16 >> 9) & 0x1FFE) - 30 <= 0xF) {
      *v15 = v26;
      if ((nn_fs_detail_IsAbortNeeded_plt((unsigned int)v16) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt((unsigned int)v16,
                                               "ExtendApplicationSaveData");
        v25 = v16;
        nn_diag_detail_AbortImpl_plt_858db0(&v25);
      }
    }
    else if ((nn_fs_detail_IsAbortNeeded_plt((unsigned int)v16) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt((unsigned int)v16,
                                             "ExtendApplicationSaveData");
      v25 = v16;
      nn_diag_detail_AbortImpl_plt_858db0(&v25);
    }
  }
  return (unsigned int)v16;
}

__int64 nn_fs_4635e0(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4,
                     __int64 a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v16 = 0;
  result = nn_fs_detail_GetSaveDataAvailableSize_plt_85b330(&v16);
  if ((_DWORD)result == 0) {
    v15 = 0;
    result = nn_fs_detail_GetSaveDataJournalSize_plt_85b340(&v15, a2, a3);
    if ((_DWORD)result == 0) {
      result = 3106306;
      if (v16 >= a4) {
        v11 = v15;
        if (v15 >= a5) {
        LABEL_14:
          result = 0;
          *a1 = 0;
          return result;
        }
      }
      else {
        if ((a4 & 0xFFFFF) != 0) {
          return result;
        }
        v11 = v15;
      }
      if ((a5 & 0xFFFFF) == 0 || v11 >= a5) {
        if (a4 <= v16) {
          a4 = v16;
        }
        if (a5 <= v11) {
          a5 = v11;
        }
        result = nn_fs_detail_ExtendSaveData_plt(a2, a3, a4, a5);
        if ((_DWORD)result == 0) {
          goto LABEL_14;
        }
        if ((result & 0x1FF) == 2 &&
            (((unsigned int)result >> 9) & 0x1FFE) - 30 <= 0xF) {
          v14 = 0;
          result = nn_fs_QuerySaveDataTotalSize_plt(&v14, v16, v15);
          if ((_DWORD)result == 0) {
            v13 = 0;
            result = nn_fs_QuerySaveDataTotalSize_plt(&v13, a4, a5);
            if ((_DWORD)result == 0) {
              result = 15362;
              v12 = a5 + a4;
              if (a5 + a4 < 0 != __OFADD__(a5, a4)) {
                v12 = a5 + a4 + 1023;
              }
              *a1 = (((v12 >> 10) + 1064959) & 0xFFFFFFFFFFFFC000LL) +
                    ((v13 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + *a1 -
                    ((v14 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + 0x8000;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nn_fs_GetApplicationSaveDataSize(_QWORD* a1, _QWORD* a2, __int64 a3,
                                         char a4, __int64* a5)
{
  __int64 v6;
  __int64 v7;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD v21[2];
  struct {
    char v22[8];
    __int64 v23;
    __int64 v24;
  } v22_;
  _BYTE v25[4];
  struct {
    char v26[8];
    __int64 v27;
  } v26_;
  _QWORD v28[9];
  _QWORD v29[12];

  if (a1 == nullptr) {
    v12 = 3072514;
    if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "GetApplicationSaveDataSize");
      LODWORD(v29[0]) = 3072514;
      nn_diag_detail_AbortImpl_plt_858db0(v29);
    }
    return v12;
  }
  if (a2 == nullptr) {
    v12 = 3072514;
    if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) != 0) {
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "GetApplicationSaveDataSize");
      LODWORD(v29[0]) = 3072514;
      nn_diag_detail_AbortImpl_plt_858db0(v29);
    }
    return v12;
  }
  v6 = *a5;
  v7 = a5[1];
  v12 = 3072514;
  if (a4 == 3) {
    if ((v6 | v7) != 0) {
      v12 = 3072514;
    }
    else {
      v12 = 0;
    }
  }
  else {
    if (a4 != 1) {
      if ((nn_fs_detail_IsAbortNeeded_plt(3072514) & 1) == 0) {
        return v12;
      }
      nn_fs_detail_LogResultErrorMessage_plt(3072514,
                                             "GetApplicationSaveDataSize");
      LODWORD(v29[0]) = 3072514;
      goto LABEL_31;
    }
    if ((v6 | v7) != 0) {
      v12 = 0;
    }
    else {
      v12 = 3072514;
    }
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v12) & 1) == 0) {
    if (v12 != 0) {
      return v12;
    }
    goto LABEL_13;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v12, "GetApplicationSaveDataSize");
  LODWORD(v29[0]) = v12;
  if (v12 != 0) {
  LABEL_31:
    nn_diag_detail_AbortImpl_plt_858db0(v29);
  }
LABEL_13:
  v13 = *a5;
  v14 = a5[1];
  v26_.v27 = a3;
  memset(v28, 0, sizeof(v28));
  memset(v29, 0, sizeof(v29));
  v26_.v26[0] = 1;
  v25[1] = a4;
  v25[0] = 1;
  v22_.v22[0] = 1;
  v21[0] = 0;
  v21[1] = 0;
  v20 = 0;
  v22_.v23 = v13;
  v22_.v24 = v14;
  v12 = nn_fs_SaveDataFilter_Make_plt_85b3d0(v28, v26_.v26, v25, v22_.v22, v21,
                                             &v20);
  if ((nn_fs_detail_IsAbortNeeded_plt(v12) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v12, "GetApplicationSaveDataSize");
    LODWORD(v19) = v12;
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v19);
    }
  }
  else if (v12 != 0) {
    return v12;
  }
  v12 = nn_fs_detail_FindSaveDataWithFilter_plt(v29, 1, v28);
  if ((nn_fs_detail_IsAbortNeeded_plt(v12) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v12, "GetApplicationSaveDataSize");
    LODWORD(v19) = v12;
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v19);
    }
  }
  else if (v12 != 0) {
    return v12;
  }
  v18 = 0;
  v19 = 0;
  v12 = nn_fs_detail_GetSaveDataAvailableSize_plt_85b5a0(&v19, v29[0]);
  if ((nn_fs_detail_IsAbortNeeded_plt(v12) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v12, "GetApplicationSaveDataSize");
    v17 = v12;
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v17);
    }
  }
  else if (v12 != 0) {
    return v12;
  }
  v12 = nn_fs_detail_GetSaveDataJournalSize_plt_85b5b0(&v18, v29[0]);
  if ((nn_fs_detail_IsAbortNeeded_plt(v12) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v12, "GetApplicationSaveDataSize");
    v17 = v12;
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v17);
    }
  }
  else if (v12 != 0) {
    return v12;
  }
  v15 = v18;
  v12 = 0;
  *a1 = v19;
  *a2 = v15;
  return v12;
}

__int64 TryCreateCacheStorage(_QWORD* a1, unsigned int a2, __int64 a3,
                              __int64 a4, unsigned int a5, __int64 a6,
                              __int64 a7, unsigned int a8, __int64 a9)
{
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v22;
  char v24[2];
  __int16 v25;
  _QWORD v26[2];
  _QWORD v27[3];
  _BYTE v28[4];
  char v29[8];
  __int64 v30;
  _QWORD v31[9];
  __int64 v32[12];
  __int64 v33;
  _DWORD v34[4];

  v14 = (unsigned __int64)v31;
  v30 = a3;
  v25 = a5;
  v15 = a8;
  v33 = 0;
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  v29[0] = 1;
  v28[1] = 5;
  v28[0] = 1;
  v26[1] = 0;
  memset(v27, 0, sizeof(v27));
  v26[0] = 0;
  v24[0] = 1;
  v17 = nn_fs_SaveDataFilter_Make_plt_85b3d0(v31, v29, v28, v27, v26, v24);
  v18 = v17;
  if ((nn_fs_detail_IsAbortNeeded_plt(v17) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v17, "TryCreateCacheStorage");
    v34[0] = v17;
    if (v17 != 0) {
      v19 = nn_diag_detail_AbortImpl_plt_858db0(v34);
    LABEL_13:
      v15 = v19;
      v17 = v19;
      if ((v19 & 0x3FFFFFLL) == 0x7D402) {
        v22 =
            nn_fs_detail_CreateCacheStorage_plt(a3, a2, a4, a5, a6, a7, 0, v18);
        v17 = 0;
        if (v22 == 0) {
          goto LABEL_15;
        }
        goto LABEL_30;
      }
      goto LABEL_20;
    }
  }
  else if (v17 != 0) {
    return v17;
  }
  v18 = a9;
  v19 = nn_fs_detail_FindSaveDataWithFilter_plt(v32, a2, v31);
  if (v19 != 0) {
    goto LABEL_13;
  }
  v17 = nn_fs_detail_FixSaveDataCertificate_plt(a2, a3, 5, 0, 0, a9);
  if ((nn_fs_detail_IsAbortNeeded_plt(v17) & 1) == 0) {
    if (v17 != 0) {
      return v17;
    }
    goto LABEL_6;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v17, "TryCreateCacheStorage");
  v34[0] = v17;
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v34);
  LABEL_20:
    if ((nn_fs_detail_IsAbortNeeded_plt(v15) & 1) == 0) {
      return v17;
    }
    nn_fs_detail_LogResultErrorMessage_plt(v15, "TryCreateCacheStorage");
    v34[0] = v17;
    v20 = nn_diag_detail_AbortImpl_plt_858db0(v34);
    goto LABEL_22;
  }
LABEL_6:
  if ((v15 & 1) == 0) {
    v17 = 1537538;
    if ((nn_fs_detail_IsAbortNeeded_plt(1537538) & 1) == 0) {
      return v17;
    }
    goto LABEL_27;
  }
  v20 = nn_fs_4635e0(&v33, a2, v32[0], a6, a7);
  if (v20 == 0) {
  LABEL_8:
    v17 = 0;
    *a1 = *(_QWORD*)(v14 + 168);
    return v17;
  }
LABEL_22:
  v17 = v20;
  if ((v20 & 0x1FF) == 2 && ((v20 >> 9) & 0x1FFE) - 30 < 0x10) {
    goto LABEL_8;
  }
  v14 = v20;
  if ((v20 & 0x3FFFFFLL) == 0x35F402) {
    v17 = 2202114;
    if ((nn_fs_detail_IsAbortNeeded_plt(2202114) & 1) == 0) {
      return v17;
    }
    nn_fs_detail_LogResultErrorMessage_plt(2202114, "TryCreateCacheStorage");
    v34[0] = 2202114;
    nn_diag_detail_AbortImpl_plt_858db0(v34);
  LABEL_27:
    nn_fs_detail_LogResultErrorMessage_plt(1537538, "TryCreateCacheStorage");
    v34[0] = v17;
    nn_diag_detail_AbortImpl_plt_858db0(v34);
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v14) & 1) == 0) {
    return v17;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v14, "TryCreateCacheStorage");
  v34[0] = v17;
  v22 = nn_diag_detail_AbortImpl_plt_858db0(v34);
LABEL_30:
  if ((v22 & 0x1FF) != 2 || ((v22 >> 9) & 0x1FFE) - 30 > 0xF) {
    goto LABEL_36;
  }
  *(_QWORD*)(v14 + 176) = 0;
  v17 = nn_fs_QuerySaveDataTotalSize_plt(v34, a6, a7);
  if (v17 == 0) {
    *(_QWORD*)(v14 + 168) =
        ((*(_QWORD*)(v14 + 176) + 0x3FFFLL) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
  }
LABEL_15:
  while ((nn_fs_detail_IsAbortNeeded_plt(v17) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v17, "TryCreateCacheStorage");
    v34[0] = v17;
    if (v17 == 0) {
      goto LABEL_8;
    }
    v22 = nn_diag_detail_AbortImpl_plt_858db0(v34);
  LABEL_36:
    if ((v22 & 0x3FFFFF) == 0x402) {
      v17 = 0;
    }
    else {
      v17 = v22;
    }
  }
  if (v17 == 0) {
    goto LABEL_8;
  }
  return v17;
}

__int64 nn_fs_463e10(_QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v8;

  result = nn_fs_detail_CreateBcatSaveData_plt(*a2, *(_QWORD*)(a3 + 12448),
                                               a3 + 13536);
  if ((_DWORD)result != 0) {
    if ((result & 0x1FF) != 2 ||
        (((unsigned int)result >> 9) & 0x1FFE) - 30 > 0xF) {
      if ((result & 0x3FFFFF) == 0x402) {
        return 0;
      }
      else {
        return (unsigned int)result;
      }
    }
    else {
      v8 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v8, a4, 0x200000);
      if ((_DWORD)result == 0) {
        *a1 += ((v8 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
      }
    }
  }
  return result;
}

__int64 nn_fs_463ee0(_QWORD* a1, _QWORD** a2, __int64 a3, __int64 a4)
{
  unsigned int v7;
  __int64 result;
  __int64 v10;

  v7 = nn_fs_detail_CreateDeviceSaveData_plt(**a2, **a2, *a2[1], *a2[2], 0, 0);
  result = 0;
  if (v7 != 0) {
    if ((v7 & 0x1FF) != 2 || ((v7 >> 9) & 0x1FFE) - 30 > 0xF) {
      if ((v7 & 0x3FFFFF) == 0x402) {
        return 0;
      }
      else {
        return v7;
      }
    }
    else {
      v10 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v10, a3, a4);
      if ((_DWORD)result == 0) {
        *a1 += ((v10 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
      }
    }
  }
  return result;
}

__int64 nn_fs_463fc0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9;
  __int64 result;
  __int64 v12;

  v9 =
      nn_fs_detail_CreateSaveData_plt(**(_QWORD**)a2, **(_QWORD**)(a2 + 8),
                                      *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL),
                                      *(_QWORD*)(*(_QWORD*)(a2 + 16) + 12408LL),
                                      *(_QWORD*)(*(_QWORD*)(a2 + 16) + 12416LL),
                                      *(_QWORD*)(*(_QWORD*)(a2 + 16) + 12424LL),
                                      0, *(_QWORD*)(a2 + 24) + 13536LL);
  result = 0;
  if (v9 != 0) {
    if ((v9 & 0x1FF) != 2 || ((v9 >> 9) & 0x1FFE) - 30 > 0xF) {
      if ((v9 & 0x3FFFFF) == 0x402) {
        return 0;
      }
      else {
        return v9;
      }
    }
    else {
      v12 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v12, a3, a4);
      if ((_DWORD)result == 0) {
        *a1 += a5 + ((v12 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL);
      }
    }
  }
  return result;
}

__int64 nn_fs_4640c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9;
  __int64 result;
  __int64 v12;

  v9 = nn_fs_detail_CreateDeviceSaveData_plt(
      **(_QWORD**)a2, *(_QWORD*)(*(_QWORD*)(a2 + 8) + 12408LL),
      *(_QWORD*)(*(_QWORD*)(a2 + 8) + 12432LL),
      *(_QWORD*)(*(_QWORD*)(a2 + 8) + 12440LL), 0,
      *(_QWORD*)(a2 + 16) + 13536LL);
  result = 0;
  if (v9 != 0) {
    if ((v9 & 0x1FF) != 2 || ((v9 >> 9) & 0x1FFE) - 30 > 0xF) {
      if ((v9 & 0x3FFFFF) == 0x402) {
        return 0;
      }
      else {
        return v9;
      }
    }
    else {
      v12 = 0;
      result = nn_fs_QuerySaveDataTotalSize_plt(&v12, a3, a4);
      if ((_DWORD)result == 0) {
        *a1 += a5 + ((v12 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
