#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_fs_detail_FileSystemAccessor_GetMultiCommitTarget_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    nn_fs_detail_GetFileSystemProxyServiceObject_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_85af00(_QWORD, _QWORD);
__int64 SdkRoutine_85af90(_QWORD, _QWORD);
__int64 SdkRoutine_85afa0(_QWORD, _QWORD);
unsigned __int128 SdkRoutine_85afa0_pair(_QWORD,
                                         _QWORD) __asm__("SdkRoutine_85afa0");
__int64 SdkRoutine_dbd00(_QWORD);
__int64 SdkRoutine_f3600(__int64, int);
__int64 SdkRoutine_f42c0();
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_fs_FileStorage_FileStorage_plt(_QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_CreateDirectory_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_CreateFile_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_CreateRootDirectory_plt(_QWORD);
__int64 nn_fs_HierarchicalRomFileTable_FindOpen_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_Format_plt(_QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_HierarchicalRomFileTable_plt(_QWORD);
__int64 nn_fs_HierarchicalRomFileTable_Initialize_plt(_QWORD, _QWORD, _QWORD,
                                                      _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_QueryRomFileSystemSize_plt(_QWORD,
                                                                  _QWORD,
                                                                  _QWORD);
__int64 nn_fs_Path_AppendChild_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_GetString_plt(_QWORD);
__int64 nn_fs_Path_Initialize_plt(_QWORD, _QWORD);
__int64 nn_fs_Path_Path_plt(_QWORD);
__int64 nn_fs_Path_RemoveChild_plt(_QWORD);
__int64 nn_fs_RomFsFileSystem_GetFileBaseOffset_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(_QWORD, _QWORD);
__int64 nn_fs_RomFsFileSystem_Initialize_plt_85af30(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 nn_fs_RomFsFileSystem_RomFsFileSystem_plt(void);
__int64 nn_fs_SetUpFixedPath_plt(_QWORD, _QWORD);
__int64 nn_fs_da070(__int64**);
__int64 nn_fs_dc510_alt1(_QWORD, _QWORD) __asm__("nn_fs_dc510");
__int64 nn_fs_dc570_alt1(_QWORD, _QWORD) __asm__("nn_fs_dc570");
__int64 nn_fs_dcab0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_fs_dcab0");
__int64 nn_fs_dcfe0_alt1(void) __asm__("nn_fs_dcfe0");
__int64 nn_fs_dd460_alt1(_QWORD, _QWORD) __asm__("nn_fs_dd460");
__int64 nn_fs_dd680_alt1(_QWORD, _QWORD) __asm__("nn_fs_dd680");
__int64 nn_fs_de3c0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_fs_de3c0");
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_EnableFileSystemAccessorAccessLog_plt(_QWORD);
__int64
    nn_fs_detail_FileServiceObjectAdapter_FileServiceObjectAdapter_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_fs_detail_Find_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_GetMemoryResource_plt(void);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85aec0(_QWORD);
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLogUnlessResultSuccess_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD, const char*,
                                                            ...);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_fs_detail_OutputAccessLog_plt_85b210(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85b220(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85b220_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const char*,
    ...) __asm__("nn_fs_detail_OutputAccessLog_plt_85b220");
__int64 nn_fs_save_SaveDataFileSystemCore_Destroy_SaveDataFileSystemCore_plt(
    _QWORD);
__int64 nn_mem_StandardAllocator_Allocate_plt_85af60(_QWORD);
__int64 nn_mem_StandardAllocator_CleanUpManagementArea_plt(_QWORD);
__int64 nn_mem_StandardAllocator_Finalize_plt(_QWORD);
__int64 nn_os_GetCurrentThread_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_GetThreadId_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_GetFsInlineContext_plt(void);
__int64 nn_sf_GetFsInlineContext_plt_alt1(_QWORD) __asm__(
    "nn_sf_GetFsInlineContext_plt");
__int64 nn_sf_SetFsInlineContext_plt(_QWORD, _QWORD);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 std___1___libcpp_verbose_abort_plt(const char*, ...);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
__int64 strlen_plt(_QWORD);
__int64 strnlen_plt(_QWORD, _QWORD);
extern _DWORD SdkData_bb47a0[4];
extern _UNKNOWN SdkData_bd27d0;
extern _UNKNOWN SdkData_bd28ac;
extern _UNKNOWN SdkData_bd2988;
extern _UNKNOWN SdkData_e4ddf0;
extern _UNKNOWN SdkData_eaf490;
extern __int16 SdkData_eaf440;
extern __int16 SdkData_eaf9f8;
extern __int64 (*SdkData_e4de40[])();
extern __int64 (*SdkData_e50d18[])();
extern __int64 SdkData_e86ce0;
extern __int64 SdkData_e86d00;
extern __int64 SdkData_e86d58;
extern __int64 SdkData_e86d68;
extern __int64 SdkData_e86d70;
extern __int64 SdkData_e86da0;
extern __int64 SdkData_eaf448;
extern __int64 SdkData_eaf8b0;
extern __int64 SdkData_eaf8e8;
extern char SdkData_bbbd5c;
extern int SdkData_eaf8f0;
extern int nn_fs_detail_g_SessionForRealtimeMode;
extern unsigned int SdkData_bb2590[4];
void __attribute__((noreturn)) nn_fs_dc4d0_alt1(void) __asm__("nn_fs_dc4d0");
void __attribute__((noreturn)) nn_fs_dc4f0_alt1(_QWORD) __asm__("nn_fs_dc4f0");
void __attribute__((noreturn)) nn_fs_dc820_alt1(void) __asm__("nn_fs_dc820");
void __attribute__((noreturn)) nn_fs_dc840_alt1(_QWORD) __asm__("nn_fs_dc840");
__int64 nn_fs_Commit(void* this_, const char* const* a2);
__int64 nn_fs_cbac0(__int64 a1);
__int64 nn_fs_d7460(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_fs_GetContentStorageInfo(__int64 a1);
__int64 nn_fs_MountDevelopmentStorageReadWrite(void* this_, const char* a2,
                                               size_t a3);
__int64 nn_fs_da290(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_fs_da500(__int64 a1);
__int64 nn_fs_da750(__int64 a1);
__int64 nn_fs_da770(__int64 a1);
__int64 nn_fs_da7c0(__int64 a1);
__int64 nn_fs_da840(__int64 a1);
__int64 nn_fs_da8f0(__int64 a1);
__int64 nn_fs_da9a0(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_fs_dad00(__int64 a1, __int64 a2);
__int64 nn_fs_daf00(__int64 a1, __int64 a2);
__int64 nn_fs_db130(__int64 a1, __int64 a2);
__int64 nn_fs_db3c0(__int64 a1, __int64 a2);
__int64 nn_fs_db4e0(__int64 a1, __int64 a2);
__int64 nn_fs_db5d0(__int64 a1);
__int64 nn_fs_db610(__int64 a1, _DWORD* a2, __int64 a3);
__int64 nn_fs_db7e0(__int64 a1, __int64* a2, __int64 a3, int a4);
__int64 nn_fs_dba80(__int64 a1, __int64* a2, __int64 a3, int a4);
__int64 nn_fs_dbe80(__int64* a1, __int64 a2, __int64 a3);
__int64* nn_fs_dc120(__int64* result, __int64* a2);
void __attribute__((noreturn)) nn_fs_dc4d0();
void __attribute__((noreturn)) nn_fs_dc4f0(const char* a1);
__int64 nn_fs_dc510(__int64 result, _QWORD* a2);
__int64 nn_fs_dc570(__int64 result, __int64 a2);
__attribute__((swiftcall)) void nn_fs_dc600(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2);
void __attribute__((noreturn)) nn_fs_dc820();
void __attribute__((noreturn)) nn_fs_dc840(const char* a1);
unsigned __int8* nn_fs_dc860(unsigned __int8* result, unsigned __int8 a2);
__int64 nn_fs_dcab0(__int64* a1, __int64 a2, unsigned __int64 a3);
__int64 nn_fs_dcb60(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                    __int64 a5);
__int64* nn_fs_dcd00(__int64* result, __int64 a2, __int64 a3);
__int64* nn_fs_dcfe0(__int64* result, __int64* a2);
__int64 nn_fs_dd460(__int64 a1, __int64* a2);
__int64 nn_fs_dd680(__int64 a1, __int64* a2);
__int64 nn_fs_dd7e0(__int64 a1, __int64 a2, char a3);
__int64 nn_fs_ddf10(_QWORD* a1);
__int64 nn_fs_ddf40(_QWORD* a1);
__int64 nn_fs_ddfa0(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4,
                    __int64 a5);
__int64 nn_fs_de080(__int64* a1, __int64 a2, __int64 a3, __int64 a4, _BYTE* a5);
__int64 nn_fs_de160(__int64 a1);
__int64 nn_fs_de170();
__int64 nn_fs_de180(__int64 result);
__int64 nn_fs_de1c0(__int64 a1);
__int64 nn_fs_de240(__int64 a1, __int64* a2, __int64 a3, signed __int64 a4);
__int64 nn_fs_de340(__int64 a1, __int64* a2);
__int64 nn_fs_de3c0(__int64 result, __int64 a2, __int64 a3);
__int64 nn_fs_de900(__int64 a1, __int64* a2, __int64 a3, unsigned __int64 a4);
__int64 nn_fs_df280(__int64 result, __int64 a2, _BYTE* a3);
__int64 nn_fs_df380(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64* a6, __int64 a7);
__int64 nn_fs_df530(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_fs_e03d0(__int64* a1);
__int64 nn_fs_detail_InitializeDfcFileSystemProxyServiceObject(_QWORD* a1);
__int64
nn_fs_detail_DisableSessionForRealtimeOnlyAndChangeSessionCount(void* this_);
__int64 nn_fs_detail_EnableSessionForRealtimeOnly(void* this_);
__int64 nn_fs_InitializeForApplication(__int64 result);
__int64 nn_fs_InitializeWithMultiSessionForSystem(__int64 result);
__int64 nn_fs_InitializeWithMultiSessionForTargetTool(__int64 result);
__int64 nn_fs_GetAndClearMemoryReportInfo(_QWORD* a1);
__int64 nn_fs_SetPriorityOnCurrentThread(unsigned int a1);
__int64 nn_fs_GetPriorityOnCurrentThread(void* this_, __int64 a2);
__int64 nn_fs_SetPriorityRawOnCurrentThread(unsigned int a1);
__int64 nn_fs_SetPriorityRaw(__int64 a1, unsigned int a2);
__int64 nn_fs_GetPriorityRawOnCurrentThreadForInternalUse(__int64 a1);
__int64 nn_fs_GetPriorityRawOnCurrentThread(void* this_);
__int64 nn_fs_GetPriorityRaw(__int64 a1);
__int64 nn_fs_101580(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
__int64 nn_fs_1020b0(_QWORD* a1);
__int64 nn_fs_102110(_QWORD* a1);
__int64 nn_fs_102170(_QWORD* a1);
__int64* std___1___tree___emplace_unique_impl(__int64** a1, __int64* a2);
__int64* std___1___tree___emplace_unique_impl_dc000(__int64** a1, int* a2);
void __attribute__((noreturn)) unplaced_dc4d0();
void __attribute__((noreturn)) unplaced_dc820();
__int64 std___1___tree_find(__int64 a1, unsigned __int8* a2);

__int64 nn_fs_Commit(void* this_, const char* const* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  const char* v7;
  char* v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  const char* v13;
  const char* v14;
  __int64 v15;
  const char* v16;
  const char* v17;
  const char* v18;
  const char* v19;
  const char* v20;
  const char* v21;
  const char* v22;
  const char* v23;
  const char* v24;
  const char* v25;
  const char* v26;
  const char* v27;
  const char* v28;
  const char* v29;
  const char* v30;
  const char* v31;
  const char* v32;
  const char* v33;
  const char* v34;
  const char* v35;
  const char* v36;
  const char* v37;
  const char* v38;
  const char* v39;
  const char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  const char* v47;
  char* v48;
  const char* v49;
  __int64 v50;
  const char* v51;
  const char* v52;
  const char* v53;
  const char* v54;
  const char* v55;
  const char* v56;
  const char* v57;
  const char* v58;
  const char* v59;
  const char* v60;
  const char* v61;
  const char* v62;
  const char* v63;
  const char* v64;
  const char* v65;
  const char* v66;
  const char* v67;
  const char* v68;
  const char* v69;
  const char* v70;
  const char* v71;
  const char* v72;
  const char* v73;
  const char* v74;
  const char* v75;
  const char* v76;
  const char* v77;
  const char* v78;
  const char* v79;
  const char* v80;
  const char* v81;
  const char* v82;
  const char* v83;
  const char* v84;
  const char* v85;
  const char* v86;
  const char* v87;
  const char* v88;
  const char* v90;
  const char* v91;
  const char* v92;
  const char* v93;
  const char* v94;
  const char* v95;
  const char* v96;
  const char* v97;
  const char* v98;
  const char* v99;
  const char* v100;
  const char* v101;
  const char* v102;
  const char* v103;
  const char* v104;
  const char* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  const char* v112;
  unsigned int v113;
  _QWORD v114[3];
  __int64 v115;
  unsigned int v116;
  void* v117;

  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = (int)a2;
  v117 = this_;
  v116 = (unsigned int)a2;
  v114[0] = &v117;
  v114[1] = &v116;
  v114[2] = &v115;
  v115 = 0;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v2 == 0) {
    if ((v3 & 1) == 0) {
      goto LABEL_67;
    }
    v10 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v10 & 1) == 0) {
      goto LABEL_67;
    }
    v111 = nn_os_GetSystemTick_plt(v10),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = nn_os_GetSystemTick_plt(v111),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = &SdkData_bbbd5c;
    v108 = v11;
    if ((int)v116 <= 0) {
      v13 = &SdkData_bbbd5c;
    }
    else {
      v13 = "\"";
    }
    if ((int)v116 < 1) {
      v51 = &SdkData_bbbd5c;
      v52 = &SdkData_bbbd5c;
      v53 = &SdkData_bbbd5c;
      v54 = &SdkData_bbbd5c;
      v55 = &SdkData_bbbd5c;
      v56 = &SdkData_bbbd5c;
      v57 = &SdkData_bbbd5c;
      v58 = &SdkData_bbbd5c;
      v59 = &SdkData_bbbd5c;
      v60 = &SdkData_bbbd5c;
      v61 = &SdkData_bbbd5c;
      v62 = &SdkData_bbbd5c;
      v63 = &SdkData_bbbd5c;
      v14 = &SdkData_bbbd5c;
    LABEL_58:
      v76 = &SdkData_bbbd5c;
      v77 = &SdkData_bbbd5c;
      v78 = &SdkData_bbbd5c;
    LABEL_59:
      v79 = &SdkData_bbbd5c;
    LABEL_60:
      v80 = &SdkData_bbbd5c;
      v81 = &SdkData_bbbd5c;
    LABEL_61:
      v82 = &SdkData_bbbd5c;
    LABEL_62:
      v83 = &SdkData_bbbd5c;
      v84 = &SdkData_bbbd5c;
    LABEL_63:
      v85 = &SdkData_bbbd5c;
    LABEL_64:
      v86 = &SdkData_bbbd5c;
      v87 = &SdkData_bbbd5c;
    LABEL_65:
      v88 = &SdkData_bbbd5c;
    LABEL_66:
      nn_fs_detail_OutputAccessLog_plt_85a860(
          0, v111, v108, "Commit", 0,
          ", name_array: [ "
          "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%"
          "s%s%s%s%s%s ], name_count: %d",
          v13, v14, v13, v63, v62, v76, v62, v77, v78, v61, v78, v60, v59, v79,
          v59, v80, v81, v58, v81, v57, v56, v82, v56, v83, v84, v55, v84, v54,
          v53, v85, v53, v86, v87, v52, v87, v51, v12, v88, v12, v116),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_67:
      v5 = 0;
      goto LABEL_68;
    }
    if (v117 != nullptr) {
      v14 = *(const char**)v117;
      if (v116 == 1) {
        v12 = &SdkData_bbbd5c;
      LABEL_57:
        v51 = &SdkData_bbbd5c;
        v52 = &SdkData_bbbd5c;
        v53 = &SdkData_bbbd5c;
        v54 = &SdkData_bbbd5c;
        v55 = &SdkData_bbbd5c;
        v56 = &SdkData_bbbd5c;
        v57 = &SdkData_bbbd5c;
        v58 = &SdkData_bbbd5c;
        v59 = &SdkData_bbbd5c;
        v60 = &SdkData_bbbd5c;
        v61 = &SdkData_bbbd5c;
        v62 = &SdkData_bbbd5c;
        v63 = &SdkData_bbbd5c;
        goto LABEL_58;
      }
      v76 = *((const char**)v117 + 1);
      if (v116 > 2) {
        v61 = *((const char**)v117 + 2);
        if (v116 == 3) {
          v63 = ", ";
          v62 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v58 = &SdkData_bbbd5c;
          v59 = &SdkData_bbbd5c;
          v60 = &SdkData_bbbd5c;
        LABEL_99:
          v77 = ", ";
          v78 = "\"";
          goto LABEL_59;
        }
        v79 = *((const char**)v117 + 3);
        if (v116 <= 4) {
          v60 = ", ";
          v59 = "\"";
          v62 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v58 = &SdkData_bbbd5c;
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
          goto LABEL_60;
        }
        v58 = *((const char**)v117 + 4);
        if (v116 == 5) {
          v60 = ", ";
          v59 = "\"";
          v62 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
        LABEL_128:
          v80 = ", ";
          v81 = "\"";
          goto LABEL_61;
        }
        v82 = *((const char**)v117 + 5);
        if (v116 <= 6) {
          v57 = ", ";
          v56 = "\"";
          v59 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v60 = ", ";
          v62 = "\"";
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
          v80 = ", ";
          v81 = "\"";
          goto LABEL_62;
        }
        v55 = *((const char**)v117 + 6);
        if (v116 == 7) {
          v57 = ", ";
          v56 = "\"";
          v59 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v60 = ", ";
          v62 = "\"";
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
          v80 = ", ";
          v81 = "\"";
        LABEL_155:
          v83 = ", ";
          v84 = "\"";
          goto LABEL_63;
        }
        v85 = *((const char**)v117 + 7);
        if (v116 <= 8) {
          v54 = ", ";
          v53 = "\"";
          v56 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v57 = ", ";
          v59 = "\"";
          v60 = ", ";
          v62 = "\"";
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
          v80 = ", ";
          v81 = "\"";
          v83 = ", ";
          v84 = "\"";
          goto LABEL_64;
        }
        v52 = *((const char**)v117 + 8);
        if (v116 != 9) {
          v88 = *((const char**)v117 + 9);
          v51 = ", ";
          v12 = "\"";
          v53 = "\"";
          v54 = ", ";
          v56 = "\"";
          v57 = ", ";
          v59 = "\"";
          v60 = ", ";
          v62 = "\"";
          v63 = ", ";
          v77 = ", ";
          v78 = "\"";
          v80 = ", ";
          v81 = "\"";
          v83 = ", ";
          v84 = "\"";
          v86 = ", ";
          v87 = "\"";
          goto LABEL_66;
        }
        v54 = ", ";
        v53 = "\"";
        v56 = "\"";
        v12 = &SdkData_bbbd5c;
        v51 = &SdkData_bbbd5c;
        v57 = ", ";
        v59 = "\"";
        v60 = ", ";
        v62 = "\"";
        v63 = ", ";
        v77 = ", ";
        v78 = "\"";
        v80 = ", ";
        v81 = "\"";
        v83 = ", ";
        v84 = "\"";
        goto LABEL_182;
      }
      v63 = ", ";
      v12 = &SdkData_bbbd5c;
      v51 = &SdkData_bbbd5c;
      v52 = &SdkData_bbbd5c;
      v53 = &SdkData_bbbd5c;
      v54 = &SdkData_bbbd5c;
      v55 = &SdkData_bbbd5c;
      v56 = &SdkData_bbbd5c;
      v57 = &SdkData_bbbd5c;
      v58 = &SdkData_bbbd5c;
      v59 = &SdkData_bbbd5c;
      v60 = &SdkData_bbbd5c;
      v61 = &SdkData_bbbd5c;
    }
    else {
      if (v116 == 1) {
        v12 = &SdkData_bbbd5c;
        v14 = "(nullptr)";
        goto LABEL_57;
      }
      if (v116 > 2) {
        if (v116 == 3) {
          v61 = "(nullptr)";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v63 = ", ";
          v62 = "\"";
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v58 = &SdkData_bbbd5c;
          v59 = &SdkData_bbbd5c;
          v60 = &SdkData_bbbd5c;
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          goto LABEL_99;
        }
        if (v116 <= 4) {
          v61 = "(nullptr)";
          v60 = ", ";
          v63 = ", ";
          v59 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v58 = &SdkData_bbbd5c;
          v62 = "\"";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          goto LABEL_60;
        }
        if (v116 == 5) {
          v60 = ", ";
          v59 = "\"";
          v62 = "\"";
          v58 = "(nullptr)";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v56 = &SdkData_bbbd5c;
          v57 = &SdkData_bbbd5c;
          v61 = "(nullptr)";
          v63 = ", ";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          goto LABEL_128;
        }
        if (v116 <= 6) {
          v58 = "(nullptr)";
          v57 = ", ";
          v60 = ", ";
          v56 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v55 = &SdkData_bbbd5c;
          v59 = "\"";
          v61 = "(nullptr)";
          v62 = "\"";
          v63 = ", ";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          v80 = ", ";
          v81 = "\"";
          v82 = "(nullptr)";
          goto LABEL_62;
        }
        if (v116 == 7) {
          v57 = ", ";
          v56 = "\"";
          v59 = "\"";
          v55 = "(nullptr)";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v53 = &SdkData_bbbd5c;
          v54 = &SdkData_bbbd5c;
          v58 = "(nullptr)";
          v60 = ", ";
          v61 = "(nullptr)";
          v62 = "\"";
          v63 = ", ";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          v80 = ", ";
          v81 = "\"";
          v82 = "(nullptr)";
          goto LABEL_155;
        }
        if (v116 <= 8) {
          v55 = "(nullptr)";
          v54 = ", ";
          v57 = ", ";
          v53 = "\"";
          v12 = &SdkData_bbbd5c;
          v51 = &SdkData_bbbd5c;
          v52 = &SdkData_bbbd5c;
          v56 = "\"";
          v58 = "(nullptr)";
          v59 = "\"";
          v60 = ", ";
          v61 = "(nullptr)";
          v62 = "\"";
          v63 = ", ";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          v80 = ", ";
          v81 = "\"";
          v82 = "(nullptr)";
          v83 = ", ";
          v84 = "\"";
          v85 = "(nullptr)";
          goto LABEL_64;
        }
        if (v116 != 9) {
          v52 = "(nullptr)";
          v51 = ", ";
          v54 = ", ";
          v12 = "\"";
          v53 = "\"";
          v55 = "(nullptr)";
          v56 = "\"";
          v57 = ", ";
          v58 = "(nullptr)";
          v59 = "\"";
          v60 = ", ";
          v61 = "(nullptr)";
          v62 = "\"";
          v63 = ", ";
          v14 = "(nullptr)";
          v76 = "(nullptr)";
          v77 = ", ";
          v78 = "\"";
          v79 = "(nullptr)";
          v80 = ", ";
          v81 = "\"";
          v82 = "(nullptr)";
          v83 = ", ";
          v84 = "\"";
          v85 = "(nullptr)";
          v86 = ", ";
          v87 = "\"";
          v88 = "(nullptr)";
          goto LABEL_66;
        }
        v54 = ", ";
        v53 = "\"";
        v56 = "\"";
        v52 = "(nullptr)";
        v12 = &SdkData_bbbd5c;
        v51 = &SdkData_bbbd5c;
        v55 = "(nullptr)";
        v57 = ", ";
        v58 = "(nullptr)";
        v59 = "\"";
        v60 = ", ";
        v61 = "(nullptr)";
        v62 = "\"";
        v63 = ", ";
        v14 = "(nullptr)";
        v76 = "(nullptr)";
        v77 = ", ";
        v78 = "\"";
        v79 = "(nullptr)";
        v80 = ", ";
        v81 = "\"";
        v82 = "(nullptr)";
        v83 = ", ";
        v84 = "\"";
        v85 = "(nullptr)";
      LABEL_182:
        v86 = ", ";
        v87 = "\"";
        goto LABEL_65;
      }
      v14 = "(nullptr)";
      v12 = &SdkData_bbbd5c;
      v51 = &SdkData_bbbd5c;
      v63 = ", ";
      v52 = &SdkData_bbbd5c;
      v53 = &SdkData_bbbd5c;
      v54 = &SdkData_bbbd5c;
      v55 = &SdkData_bbbd5c;
      v56 = &SdkData_bbbd5c;
      v57 = &SdkData_bbbd5c;
      v58 = &SdkData_bbbd5c;
      v59 = &SdkData_bbbd5c;
      v60 = &SdkData_bbbd5c;
      v61 = &SdkData_bbbd5c;
      v76 = "(nullptr)";
    }
    v77 = &SdkData_bbbd5c;
    v78 = &SdkData_bbbd5c;
    v79 = &SdkData_bbbd5c;
    v80 = &SdkData_bbbd5c;
    v81 = &SdkData_bbbd5c;
    v82 = &SdkData_bbbd5c;
    v83 = &SdkData_bbbd5c;
    v84 = &SdkData_bbbd5c;
    v85 = &SdkData_bbbd5c;
    v86 = &SdkData_bbbd5c;
    v87 = &SdkData_bbbd5c;
    v88 = &SdkData_bbbd5c;
    v62 = "\"";
    goto LABEL_66;
  }
  if ((v3 & 1) == 0) {
    v5 = nn_fs_cbac0((__int64)v114),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = v5;
    goto LABEL_32;
  }
  v110 = nn_os_GetSystemTick_plt(v3),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = nn_fs_cbac0((__int64)v114),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = v4;
  v6 = nn_os_GetSystemTick_plt(v4),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = &SdkData_bbbd5c;
  v8 = "\"";
  if ((int)v116 <= 0) {
    v8 = &SdkData_bbbd5c;
  }
  v105 = v8;
  v107 = v6;
  if ((int)v116 >= 1) {
    if (v117 != nullptr) {
      v9 = *(const char**)v117;
      if (v116 == 1) {
        v7 = &SdkData_bbbd5c;
      LABEL_22:
        v103 = &SdkData_bbbd5c;
        v16 = &SdkData_bbbd5c;
        v17 = &SdkData_bbbd5c;
        v18 = &SdkData_bbbd5c;
        v19 = &SdkData_bbbd5c;
        v20 = &SdkData_bbbd5c;
        v21 = &SdkData_bbbd5c;
        v22 = &SdkData_bbbd5c;
        v23 = &SdkData_bbbd5c;
        v24 = &SdkData_bbbd5c;
        v25 = &SdkData_bbbd5c;
        v26 = &SdkData_bbbd5c;
        v27 = &SdkData_bbbd5c;
        goto LABEL_23;
      }
      v28 = *((const char**)v117 + 1);
      if (v116 > 2) {
        v25 = *((const char**)v117 + 2);
        if (v116 == 3) {
          v27 = ", ";
          v26 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v22 = &SdkData_bbbd5c;
          v23 = &SdkData_bbbd5c;
          v24 = &SdkData_bbbd5c;
        LABEL_51:
          v29 = ", ";
          v30 = "\"";
          goto LABEL_24;
        }
        v31 = *((const char**)v117 + 3);
        if (v116 <= 4) {
          v24 = ", ";
          v23 = "\"";
          v26 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v22 = &SdkData_bbbd5c;
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
          goto LABEL_25;
        }
        v22 = *((const char**)v117 + 4);
        if (v116 == 5) {
          v24 = ", ";
          v23 = "\"";
          v26 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
        LABEL_103:
          v32 = ", ";
          v33 = "\"";
          goto LABEL_26;
        }
        v34 = *((const char**)v117 + 5);
        if (v116 <= 6) {
          v21 = ", ";
          v20 = "\"";
          v23 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v24 = ", ";
          v26 = "\"";
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
          v32 = ", ";
          v33 = "\"";
          goto LABEL_27;
        }
        v19 = *((const char**)v117 + 6);
        if (v116 == 7) {
          v21 = ", ";
          v20 = "\"";
          v23 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v24 = ", ";
          v26 = "\"";
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
          v32 = ", ";
          v33 = "\"";
        LABEL_132:
          v35 = ", ";
          v36 = "\"";
          goto LABEL_28;
        }
        v37 = *((const char**)v117 + 7);
        if (v116 <= 8) {
          v35 = ", ";
          v17 = "\"";
          v20 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v21 = ", ";
          v23 = "\"";
          v24 = ", ";
          v26 = "\"";
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
          v32 = ", ";
          v33 = "\"";
          v18 = ", ";
          v36 = "\"";
          goto LABEL_29;
        }
        v16 = *((const char**)v117 + 8);
        if (v116 != 9) {
          v40 = *((const char**)v117 + 9);
          v38 = ", ";
          v7 = "\"";
          v17 = "\"";
          v18 = ", ";
          v20 = "\"";
          v21 = ", ";
          v23 = "\"";
          v24 = ", ";
          v26 = "\"";
          v27 = ", ";
          v29 = ", ";
          v30 = "\"";
          v32 = ", ";
          v33 = "\"";
          v35 = ", ";
          v36 = "\"";
          v103 = ", ";
          v39 = "\"";
          goto LABEL_31;
        }
        v38 = ", ";
        v17 = "\"";
        v20 = "\"";
        v7 = &SdkData_bbbd5c;
        v103 = &SdkData_bbbd5c;
        v21 = ", ";
        v23 = "\"";
        v24 = ", ";
        v26 = "\"";
        v27 = ", ";
        v29 = ", ";
        v30 = "\"";
        v32 = ", ";
        v33 = "\"";
        v35 = ", ";
        v36 = "\"";
        goto LABEL_159;
      }
      v27 = ", ";
      v7 = &SdkData_bbbd5c;
      v103 = &SdkData_bbbd5c;
      v16 = &SdkData_bbbd5c;
      v17 = &SdkData_bbbd5c;
      v18 = &SdkData_bbbd5c;
      v19 = &SdkData_bbbd5c;
      v20 = &SdkData_bbbd5c;
      v21 = &SdkData_bbbd5c;
      v22 = &SdkData_bbbd5c;
      v23 = &SdkData_bbbd5c;
      v24 = &SdkData_bbbd5c;
      v25 = &SdkData_bbbd5c;
    }
    else {
      if (v116 == 1) {
        v7 = &SdkData_bbbd5c;
        v9 = "(nullptr)";
        goto LABEL_22;
      }
      if (v116 > 2) {
        if (v116 == 3) {
          v25 = "(nullptr)";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v27 = ", ";
          v26 = "\"";
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v22 = &SdkData_bbbd5c;
          v23 = &SdkData_bbbd5c;
          v24 = &SdkData_bbbd5c;
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          goto LABEL_51;
        }
        if (v116 <= 4) {
          v25 = "(nullptr)";
          v24 = ", ";
          v27 = ", ";
          v23 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v22 = &SdkData_bbbd5c;
          v26 = "\"";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          goto LABEL_25;
        }
        if (v116 == 5) {
          v24 = ", ";
          v23 = "\"";
          v26 = "\"";
          v22 = "(nullptr)";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v20 = &SdkData_bbbd5c;
          v21 = &SdkData_bbbd5c;
          v25 = "(nullptr)";
          v27 = ", ";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          goto LABEL_103;
        }
        if (v116 <= 6) {
          v22 = "(nullptr)";
          v21 = ", ";
          v24 = ", ";
          v20 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v19 = &SdkData_bbbd5c;
          v23 = "\"";
          v25 = "(nullptr)";
          v26 = "\"";
          v27 = ", ";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          v32 = ", ";
          v33 = "\"";
          v34 = "(nullptr)";
          goto LABEL_27;
        }
        if (v116 == 7) {
          v21 = ", ";
          v20 = "\"";
          v23 = "\"";
          v19 = "(nullptr)";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v17 = &SdkData_bbbd5c;
          v18 = &SdkData_bbbd5c;
          v22 = "(nullptr)";
          v24 = ", ";
          v25 = "(nullptr)";
          v26 = "\"";
          v27 = ", ";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          v32 = ", ";
          v33 = "\"";
          v34 = "(nullptr)";
          goto LABEL_132;
        }
        if (v116 <= 8) {
          v19 = "(nullptr)";
          v35 = ", ";
          v21 = ", ";
          v17 = "\"";
          v7 = &SdkData_bbbd5c;
          v103 = &SdkData_bbbd5c;
          v16 = &SdkData_bbbd5c;
          v20 = "\"";
          v22 = "(nullptr)";
          v23 = "\"";
          v24 = ", ";
          v25 = "(nullptr)";
          v26 = "\"";
          v27 = ", ";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          v32 = ", ";
          v33 = "\"";
          v34 = "(nullptr)";
          v18 = ", ";
          v36 = "\"";
          v37 = "(nullptr)";
          goto LABEL_29;
        }
        if (v116 != 9) {
          v16 = "(nullptr)";
          v38 = ", ";
          v18 = ", ";
          v7 = "\"";
          v17 = "\"";
          v19 = "(nullptr)";
          v20 = "\"";
          v21 = ", ";
          v22 = "(nullptr)";
          v23 = "\"";
          v24 = ", ";
          v25 = "(nullptr)";
          v26 = "\"";
          v27 = ", ";
          v9 = "(nullptr)";
          v28 = "(nullptr)";
          v29 = ", ";
          v30 = "\"";
          v31 = "(nullptr)";
          v32 = ", ";
          v33 = "\"";
          v34 = "(nullptr)";
          v35 = ", ";
          v36 = "\"";
          v37 = "(nullptr)";
          v103 = ", ";
          v39 = "\"";
          v40 = "(nullptr)";
          goto LABEL_31;
        }
        v38 = ", ";
        v17 = "\"";
        v20 = "\"";
        v16 = "(nullptr)";
        v7 = &SdkData_bbbd5c;
        v103 = &SdkData_bbbd5c;
        v19 = "(nullptr)";
        v21 = ", ";
        v22 = "(nullptr)";
        v23 = "\"";
        v24 = ", ";
        v25 = "(nullptr)";
        v26 = "\"";
        v27 = ", ";
        v9 = "(nullptr)";
        v28 = "(nullptr)";
        v29 = ", ";
        v30 = "\"";
        v31 = "(nullptr)";
        v32 = ", ";
        v33 = "\"";
        v34 = "(nullptr)";
        v35 = ", ";
        v36 = "\"";
        v37 = "(nullptr)";
      LABEL_159:
        v18 = ", ";
        v39 = "\"";
        goto LABEL_30;
      }
      v9 = "(nullptr)";
      v7 = &SdkData_bbbd5c;
      v103 = &SdkData_bbbd5c;
      v27 = ", ";
      v16 = &SdkData_bbbd5c;
      v17 = &SdkData_bbbd5c;
      v18 = &SdkData_bbbd5c;
      v19 = &SdkData_bbbd5c;
      v20 = &SdkData_bbbd5c;
      v21 = &SdkData_bbbd5c;
      v22 = &SdkData_bbbd5c;
      v23 = &SdkData_bbbd5c;
      v24 = &SdkData_bbbd5c;
      v25 = &SdkData_bbbd5c;
      v28 = "(nullptr)";
    }
    v29 = &SdkData_bbbd5c;
    v30 = &SdkData_bbbd5c;
    v31 = &SdkData_bbbd5c;
    v32 = &SdkData_bbbd5c;
    v33 = &SdkData_bbbd5c;
    v34 = &SdkData_bbbd5c;
    v35 = &SdkData_bbbd5c;
    v36 = &SdkData_bbbd5c;
    v37 = &SdkData_bbbd5c;
    v38 = &SdkData_bbbd5c;
    v39 = &SdkData_bbbd5c;
    v40 = &SdkData_bbbd5c;
    v26 = "\"";
    goto LABEL_31;
  }
  v103 = &SdkData_bbbd5c;
  v16 = &SdkData_bbbd5c;
  v17 = &SdkData_bbbd5c;
  v18 = &SdkData_bbbd5c;
  v19 = &SdkData_bbbd5c;
  v20 = &SdkData_bbbd5c;
  v21 = &SdkData_bbbd5c;
  v22 = &SdkData_bbbd5c;
  v23 = &SdkData_bbbd5c;
  v24 = &SdkData_bbbd5c;
  v25 = &SdkData_bbbd5c;
  v26 = &SdkData_bbbd5c;
  v27 = &SdkData_bbbd5c;
  v9 = &SdkData_bbbd5c;
LABEL_23:
  v28 = &SdkData_bbbd5c;
  v29 = &SdkData_bbbd5c;
  v30 = &SdkData_bbbd5c;
LABEL_24:
  v31 = &SdkData_bbbd5c;
LABEL_25:
  v32 = &SdkData_bbbd5c;
  v33 = &SdkData_bbbd5c;
LABEL_26:
  v34 = &SdkData_bbbd5c;
LABEL_27:
  v35 = &SdkData_bbbd5c;
  v36 = &SdkData_bbbd5c;
LABEL_28:
  v37 = &SdkData_bbbd5c;
LABEL_29:
  v38 = &SdkData_bbbd5c;
  v39 = &SdkData_bbbd5c;
LABEL_30:
  v40 = &SdkData_bbbd5c;
LABEL_31:
  v15 = v5;
  nn_fs_detail_OutputAccessLogUnlessResultSuccess_plt(
      v5, v110, v107, "Commit", 0,
      ", name_array: [ "
      "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%"
      "s%s%s%s ], name_count: %d",
      v105, v9, v105, v27, v26, v28, v26, v29, v30, v25, v30, v24, v23, v31,
      v23, v32, v33, v22, v33, v21, v20, v34, v20, v35, v36, v19, v36, v18, v17,
      v37, v17, v38, v39, v16, v39, v103, v7, v40, v7, v116),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_32:
  v41 = nn_fs_detail_IsAbortNeeded_plt(v15),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v41 & 1) != 0) {
    v41 = nn_fs_detail_LogResultErrorMessage_plt(v15, "Commit"),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v113 = v5;
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v113),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else if (v5 != 0) {
    goto LABEL_68;
  }
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(v41, v42) & 1) != 0) {
    v43 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v43 & 1) != 0) {
      v44 = nn_os_GetSystemTick_plt(v43),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v115 + 40LL))(v115),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = v45;
      v46 = nn_os_GetSystemTick_plt(v45),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v47 = &SdkData_bbbd5c;
      v106 = v46;
      v109 = v44;
      if ((int)v116 <= 0) {
        v48 = &SdkData_bbbd5c;
      }
      else {
        v48 = "\"";
      }
      v104 = v48;
      if ((int)v116 < 1) {
        v112 = &SdkData_bbbd5c;
        v64 = &SdkData_bbbd5c;
        v65 = &SdkData_bbbd5c;
        v66 = &SdkData_bbbd5c;
        v67 = &SdkData_bbbd5c;
        v68 = &SdkData_bbbd5c;
        v69 = &SdkData_bbbd5c;
        v70 = &SdkData_bbbd5c;
        v71 = &SdkData_bbbd5c;
        v72 = &SdkData_bbbd5c;
        v73 = &SdkData_bbbd5c;
        v74 = &SdkData_bbbd5c;
        v75 = &SdkData_bbbd5c;
        v49 = &SdkData_bbbd5c;
      LABEL_82:
        v90 = &SdkData_bbbd5c;
        v91 = &SdkData_bbbd5c;
        v92 = &SdkData_bbbd5c;
      LABEL_83:
        v93 = &SdkData_bbbd5c;
      LABEL_84:
        v94 = &SdkData_bbbd5c;
        v95 = &SdkData_bbbd5c;
      LABEL_85:
        v96 = &SdkData_bbbd5c;
      LABEL_86:
        v97 = &SdkData_bbbd5c;
        v98 = &SdkData_bbbd5c;
      LABEL_87:
        v99 = &SdkData_bbbd5c;
      LABEL_88:
        v100 = &SdkData_bbbd5c;
        v101 = &SdkData_bbbd5c;
      LABEL_89:
        v102 = &SdkData_bbbd5c;
        goto LABEL_90;
      }
      if (v117 != nullptr) {
        v49 = *(const char**)v117;
        if (v116 == 1) {
          v47 = &SdkData_bbbd5c;
        LABEL_81:
          v112 = &SdkData_bbbd5c;
          v64 = &SdkData_bbbd5c;
          v65 = &SdkData_bbbd5c;
          v66 = &SdkData_bbbd5c;
          v67 = &SdkData_bbbd5c;
          v68 = &SdkData_bbbd5c;
          v69 = &SdkData_bbbd5c;
          v70 = &SdkData_bbbd5c;
          v71 = &SdkData_bbbd5c;
          v72 = &SdkData_bbbd5c;
          v73 = &SdkData_bbbd5c;
          v74 = &SdkData_bbbd5c;
          v75 = &SdkData_bbbd5c;
          goto LABEL_82;
        }
        v90 = *((const char**)v117 + 1);
        if (v116 > 2) {
          v73 = *((const char**)v117 + 2);
          if (v116 == 3) {
            v75 = ", ";
            v74 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v70 = &SdkData_bbbd5c;
            v71 = &SdkData_bbbd5c;
            v72 = &SdkData_bbbd5c;
          LABEL_109:
            v91 = ", ";
            v92 = "\"";
            goto LABEL_83;
          }
          v93 = *((const char**)v117 + 3);
          if (v116 <= 4) {
            v72 = ", ";
            v71 = "\"";
            v74 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v70 = &SdkData_bbbd5c;
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
            goto LABEL_84;
          }
          v70 = *((const char**)v117 + 4);
          if (v116 == 5) {
            v72 = ", ";
            v71 = "\"";
            v74 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
          LABEL_138:
            v94 = ", ";
            v95 = "\"";
            goto LABEL_85;
          }
          v96 = *((const char**)v117 + 5);
          if (v116 <= 6) {
            v69 = ", ";
            v68 = "\"";
            v71 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v72 = ", ";
            v74 = "\"";
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
            v94 = ", ";
            v95 = "\"";
            goto LABEL_86;
          }
          v67 = *((const char**)v117 + 6);
          if (v116 == 7) {
            v69 = ", ";
            v68 = "\"";
            v71 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v72 = ", ";
            v74 = "\"";
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
            v94 = ", ";
            v95 = "\"";
          LABEL_165:
            v97 = ", ";
            v98 = "\"";
            goto LABEL_87;
          }
          v99 = *((const char**)v117 + 7);
          if (v116 <= 8) {
            v97 = ", ";
            v65 = "\"";
            v68 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v69 = ", ";
            v71 = "\"";
            v72 = ", ";
            v74 = "\"";
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
            v94 = ", ";
            v95 = "\"";
            v66 = ", ";
            v98 = "\"";
            goto LABEL_88;
          }
          v64 = *((const char**)v117 + 8);
          if (v116 == 9) {
            v100 = ", ";
            v65 = "\"";
            v68 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v69 = ", ";
            v71 = "\"";
            v72 = ", ";
            v74 = "\"";
            v75 = ", ";
            v91 = ", ";
            v92 = "\"";
            v94 = ", ";
            v95 = "\"";
            v97 = ", ";
            v98 = "\"";
          LABEL_188:
            v66 = ", ";
            v101 = "\"";
            goto LABEL_89;
          }
          v102 = *((const char**)v117 + 9);
          v100 = ", ";
          v47 = "\"";
          v65 = "\"";
          v66 = ", ";
          v68 = "\"";
          v69 = ", ";
          v71 = "\"";
          v72 = ", ";
          v74 = "\"";
          v75 = ", ";
          v91 = ", ";
          v92 = "\"";
          v94 = ", ";
          v95 = "\"";
          v97 = ", ";
          v98 = "\"";
          v112 = ", ";
          v101 = "\"";
          goto LABEL_90;
        }
        v75 = ", ";
        v47 = &SdkData_bbbd5c;
        v112 = &SdkData_bbbd5c;
        v64 = &SdkData_bbbd5c;
        v65 = &SdkData_bbbd5c;
        v66 = &SdkData_bbbd5c;
        v67 = &SdkData_bbbd5c;
        v68 = &SdkData_bbbd5c;
        v69 = &SdkData_bbbd5c;
        v70 = &SdkData_bbbd5c;
        v71 = &SdkData_bbbd5c;
        v72 = &SdkData_bbbd5c;
        v73 = &SdkData_bbbd5c;
      }
      else {
        if (v116 == 1) {
          v47 = &SdkData_bbbd5c;
          v49 = "(nullptr)";
          goto LABEL_81;
        }
        if (v116 > 2) {
          if (v116 == 3) {
            v73 = "(nullptr)";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v75 = ", ";
            v74 = "\"";
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v70 = &SdkData_bbbd5c;
            v71 = &SdkData_bbbd5c;
            v72 = &SdkData_bbbd5c;
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            goto LABEL_109;
          }
          if (v116 <= 4) {
            v73 = "(nullptr)";
            v72 = ", ";
            v75 = ", ";
            v71 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v70 = &SdkData_bbbd5c;
            v74 = "\"";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            goto LABEL_84;
          }
          if (v116 == 5) {
            v72 = ", ";
            v71 = "\"";
            v74 = "\"";
            v70 = "(nullptr)";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v68 = &SdkData_bbbd5c;
            v69 = &SdkData_bbbd5c;
            v73 = "(nullptr)";
            v75 = ", ";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            goto LABEL_138;
          }
          if (v116 <= 6) {
            v70 = "(nullptr)";
            v69 = ", ";
            v72 = ", ";
            v68 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v67 = &SdkData_bbbd5c;
            v71 = "\"";
            v73 = "(nullptr)";
            v74 = "\"";
            v75 = ", ";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            v94 = ", ";
            v95 = "\"";
            v96 = "(nullptr)";
            goto LABEL_86;
          }
          if (v116 == 7) {
            v69 = ", ";
            v68 = "\"";
            v71 = "\"";
            v67 = "(nullptr)";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v65 = &SdkData_bbbd5c;
            v66 = &SdkData_bbbd5c;
            v70 = "(nullptr)";
            v72 = ", ";
            v73 = "(nullptr)";
            v74 = "\"";
            v75 = ", ";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            v94 = ", ";
            v95 = "\"";
            v96 = "(nullptr)";
            goto LABEL_165;
          }
          if (v116 <= 8) {
            v67 = "(nullptr)";
            v97 = ", ";
            v69 = ", ";
            v65 = "\"";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v64 = &SdkData_bbbd5c;
            v68 = "\"";
            v70 = "(nullptr)";
            v71 = "\"";
            v72 = ", ";
            v73 = "(nullptr)";
            v74 = "\"";
            v75 = ", ";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            v94 = ", ";
            v95 = "\"";
            v96 = "(nullptr)";
            v66 = ", ";
            v98 = "\"";
            v99 = "(nullptr)";
            goto LABEL_88;
          }
          if (v116 == 9) {
            v100 = ", ";
            v65 = "\"";
            v68 = "\"";
            v64 = "(nullptr)";
            v47 = &SdkData_bbbd5c;
            v112 = &SdkData_bbbd5c;
            v67 = "(nullptr)";
            v69 = ", ";
            v70 = "(nullptr)";
            v71 = "\"";
            v72 = ", ";
            v73 = "(nullptr)";
            v74 = "\"";
            v75 = ", ";
            v49 = "(nullptr)";
            v90 = "(nullptr)";
            v91 = ", ";
            v92 = "\"";
            v93 = "(nullptr)";
            v94 = ", ";
            v95 = "\"";
            v96 = "(nullptr)";
            v97 = ", ";
            v98 = "\"";
            v99 = "(nullptr)";
            goto LABEL_188;
          }
          v64 = "(nullptr)";
          v100 = ", ";
          v66 = ", ";
          v47 = "\"";
          v65 = "\"";
          v67 = "(nullptr)";
          v68 = "\"";
          v69 = ", ";
          v70 = "(nullptr)";
          v71 = "\"";
          v72 = ", ";
          v73 = "(nullptr)";
          v74 = "\"";
          v75 = ", ";
          v49 = "(nullptr)";
          v90 = "(nullptr)";
          v91 = ", ";
          v92 = "\"";
          v93 = "(nullptr)";
          v94 = ", ";
          v95 = "\"";
          v96 = "(nullptr)";
          v97 = ", ";
          v98 = "\"";
          v99 = "(nullptr)";
          v112 = ", ";
          v101 = "\"";
          v102 = "(nullptr)";
        LABEL_90:
          v50 = v5;
          nn_fs_detail_OutputAccessLog_plt_85a860(
              v5, v109, v106, "Commit", 0,
              ", name_array: [ "
              "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%"
              "s%s%s%s%s%s%s%s ], name_count: %d",
              v104, v49, v104, v75, v74, v90, v74, v91, v92, v73, v92, v72, v71,
              v93, v71, v94, v95, v70, v95, v69, v68, v96, v68, v97, v98, v67,
              v98, v66, v65, v99, v65, v100, v101, v64, v101, v112, v47, v102,
              v47, v116),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((nn_fs_detail_IsAbortNeeded_plt(v5) & 1) == 0) {
            goto LABEL_68;
          }
          goto LABEL_91;
        }
        v49 = "(nullptr)";
        v47 = &SdkData_bbbd5c;
        v112 = &SdkData_bbbd5c;
        v75 = ", ";
        v64 = &SdkData_bbbd5c;
        v65 = &SdkData_bbbd5c;
        v66 = &SdkData_bbbd5c;
        v67 = &SdkData_bbbd5c;
        v68 = &SdkData_bbbd5c;
        v69 = &SdkData_bbbd5c;
        v70 = &SdkData_bbbd5c;
        v71 = &SdkData_bbbd5c;
        v72 = &SdkData_bbbd5c;
        v73 = &SdkData_bbbd5c;
        v90 = "(nullptr)";
      }
      v91 = &SdkData_bbbd5c;
      v92 = &SdkData_bbbd5c;
      v93 = &SdkData_bbbd5c;
      v94 = &SdkData_bbbd5c;
      v95 = &SdkData_bbbd5c;
      v96 = &SdkData_bbbd5c;
      v97 = &SdkData_bbbd5c;
      v98 = &SdkData_bbbd5c;
      v99 = &SdkData_bbbd5c;
      v100 = &SdkData_bbbd5c;
      v101 = &SdkData_bbbd5c;
      v102 = &SdkData_bbbd5c;
      v74 = "\"";
      goto LABEL_90;
    }
  }
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v115 + 40LL))(v115),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v50 = v5;
  if ((nn_fs_detail_IsAbortNeeded_plt(v5) & 1) != 0) {
  LABEL_91:
    nn_fs_detail_LogResultErrorMessage_plt(v50, "Commit"),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v113 = v5;
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v113),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_68:
  if (v115 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v115 + 8LL))(v115),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v5;
}

__int64 nn_fs_cbac0(__int64 a1)
{
  _QWORD* v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;

  v2 = *(_QWORD**)a1;
  result = 3104258;
  if (*v2 != 0) {
    v4 = **(_DWORD**)(a1 + 8);
    if (v4 > 0xA) {
      return 3108354;
    }
    else if (v4 != 0) {
      v14 = nullptr;
      nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)&v14, 3104258);
      v15 = *(_QWORD**)(a1 + 16);
      result = (*(__int64 (**)(_QWORD*, _QWORD**))(*v14 + 1056LL))(v14, &v15);
      if ((_DWORD)result == 0) {
        if (**(int**)(a1 + 8) < 1) {
        LABEL_16:
          result = 0;
        }
        else {
          v5 = 0;
          while (1) {
            v6 = *(_QWORD*)(**(_QWORD**)a1 + 8 * v5);
            v13 = 0;
            result = nn_fs_detail_Find_plt(&v13, v6);
            if ((_DWORD)result != 0) {
              break;
            }
            v12 = nullptr;
            nn_fs_detail_FileSystemAccessor_GetMultiCommitTarget_plt(
                (void*)&v12, v13);
            v7 = v12;
            if (v12 == nullptr) {
              result = 3226114;
              break;
            }
            v8 = **(_QWORD**)(a1 + 16);
            (*(void (**)(_QWORD*))*v12)(v12);
            v15 = v7;
            result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v8 + 32LL))(
                v8, &v15);
            if (v15 != nullptr) {
              v9 = result;
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                  *v15 + 8LL))((void*)v15, v15);
              result = v9;
            }
            if ((_DWORD)result != 0) {
              if (v12 != nullptr) {
                v11 = result;
                (*(void (**)(_QWORD*))(*v12 + 8LL))(v12);
                result = v11;
              }
              break;
            }
            if (v12 != nullptr) {
              (*(void (**)(_QWORD*))(*v12 + 8LL))(v12);
            }
            if (++v5 >= **(int**)(a1 + 8)) {
              goto LABEL_16;
            }
          }
        }
      }
      if (v14 != nullptr) {
        v10 = result;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v14 + 8LL))((void*)v14, v14);
        return v10;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nn_fs_d7460(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  const char* v4;

  v3 = *(_DWORD*)(a1 + 8);
  if (v3 > 29) {
    if (v3 <= 34) {
      if (v3 == 30) {
        v4 = "@User";
        goto LABEL_22;
      }
      if (v3 == 31) {
        v4 = "@System";
        goto LABEL_22;
      }
    LABEL_24:
      nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    }
    if (v3 == 36) {
      v4 = "@System0";
      goto LABEL_22;
    }
    if (v3 != 35) {
      goto LABEL_24;
    }
  LABEL_15:
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  if (v3 <= 27) {
    if ((unsigned int)(v3 - 20) >= 8 && v3 != 0 && v3 != 10) {
      goto LABEL_24;
    }
    goto LABEL_15;
  }
  if (v3 == 28) {
    v4 = "@CalibFile";
  }
  else {
    v4 = "@Safe";
  }
LABEL_22:
  nn_util_SNPrintf_plt(a2, a3, "%s:", v4);
  return 0;
}

__int64 nn_fs_GetContentStorageInfo(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  int v4;
  unsigned int v6;
  int v7;
  __int64 v8;

  v8 = 0;
  nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)(&v8), a1);
  v7 = 0;
  v2 = (*(__int64 (**)(__int64, int*))(*(_QWORD*)v8 + 904LL))(v8, &v7);
  v3 = nn_fs_detail_IsAbortNeeded_plt(v2);
  if ((v3 & 1) != 0) {
    v3 = nn_fs_detail_LogResultErrorMessage_plt(v2, "GetContentStorageInfo");
    v6 = v2;
    if (v2 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v6);
    }
  }
  else if (v2 != 0) {
    goto LABEL_12;
  }
  switch (v7) {
  case 2:
    memcpy_plt(a1, &SdkData_bd2988, 220);
    v4 = 5;
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0x100000003LL;
    *(_QWORD*)(a1 + 232) = 0x10000000000LL;
    *(_QWORD*)(a1 + 240) = 0x10100000004LL;
    *(_QWORD*)(a1 + 248) = 1;
    *(_QWORD*)(a1 + 256) = 2;
    break;
  case 1:
    memcpy_plt(a1, &SdkData_bd28ac, 220);
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0x10100000000LL;
    *(_QWORD*)(a1 + 232) = 0x100000003LL;
    v4 = 4;
    *(_QWORD*)(a1 + 240) = 1;
    *(_QWORD*)(a1 + 248) = 2;
    break;
  case 0:
  LABEL_6:
    memcpy_plt(a1, &SdkData_bd27d0, 220);
    *(_DWORD*)(a1 + 220) = 5;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 232) = 1;
    *(_QWORD*)(a1 + 240) = 2;
    v4 = 3;
    break;
  default:
    nn_detail_UnexpectedDefaultImpl_plt_857150(v3);
    goto LABEL_6;
  }
  *(_DWORD*)(a1 + 264) = v4;
  *(_BYTE*)(a1 + 268) = 3;
  *(_DWORD*)(a1 + 272) = 1;
  if ((nn_fs_detail_IsAbortNeeded_plt(0) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(0, "GetContentStorageInfo");
  }
  v2 = 0;
LABEL_12:
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  return v2;
}

__int64 nn_fs_MountDevelopmentStorageReadWrite(void* this_, const char* a2,
                                               size_t a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64* v10[3];
  size_t v11;
  const char* v12;
  const char* v13;

  v12 = a2;
  v13 = (const char*)this_;
  v11 = a3;
  v10[0] = (__int64*)&v13;
  v10[1] = (__int64*)&v12;
  v10[2] = (__int64*)&v11;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(1);
  if ((v3 & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v5 = nn_fs_da070(v10);
    v6 = v5;
    v7 = nn_os_GetSystemTick_plt(v5);
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v6, v4, v7, "MountDevelopmentStorageReadWrite", 0,
        ", name: \"%s\", size: %zu", v13, v11);
  }
  else {
    v6 = nn_fs_da070(v10);
  }
  if (v6 != 0) {
    result = 513026;
    if (((v6 & 0x1FF) != 2 || ((v6 >> 9) & 0x1FFF) - 4280 >= 5) &&
        (v6 & 0x3FFFFFLL) != 0x202) {
      if ((nn_fs_detail_IsAbortNeeded_plt(v6) & 1) != 0) {
        nn_fs_detail_LogResultErrorMessage_plt(
            v6, "MountDevelopmentStorageReadWrite");
        v9 = v6;
        nn_diag_detail_AbortImpl_plt_858db0(&v9);
      }
      return v6;
    }
  }
  else {
    if ((nn_fs_detail_IsEnabledAccessLog_plt_85aec0(1) & 1) != 0) {
      nn_fs_detail_EnableFileSystemAccessorAccessLog_plt(v13);
    }
    return 0;
  }
  return result;
}

__int64 nn_fs_da290(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE v25[769];
  __int64* v26;

  memset_plt((void*)v25, nullptr, 769, a4);
  v6 = nn_util_SNPrintf_plt(v25, 769, "/rom0.fsimg");
  v24 = 0;
  nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)(&v24), v6);
  v23 = 0;
  v26 = &v23;
  v7 = (*(__int64 (**)(__int64, __int64**, __int64))(*(_QWORD*)v24 + 504LL))(
      v24, &v26, 2);
  if (v7 != 0) {
    goto LABEL_2;
  }
  if (*(_BYTE*)a2 != 1) {
  LABEL_6:
    v22 = 0;
    v26 = &v22;
    v10 = (*(__int64 (**)(__int64, __int64**, _BYTE*, __int64))(
        *(_QWORD*)v23 + 104LL))(v23, &v26, v25, 3);
    if (v10 != 0) {
      v8 = v10;
      v18 = v22;
      if (v22 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v8 = 1638402;
      v11 = nn_fs_detail_Allocate_plt(16);
      if (v11 == 0) {
        goto LABEL_19;
      }
      v12 = v11;
      nn_fs_detail_FileServiceObjectAdapter_FileServiceObjectAdapter_plt(v11,
                                                                         &v22);
      v13 = nn_fs_detail_Allocate_plt(32);
      *(_QWORD*)(v13 + 16) = 0;
      *(_QWORD*)(v13 + 24) = v12;
      *(_QWORD*)(v13 + 8) = 0;
      *(_QWORD*)v13 = &SdkData_e4ddf0;
      v14 = nn_fs_detail_Allocate_plt(40);
      if (v14 != 0) {
        v15 = v14;
        v20_.v20 = v12;
        v20_.v21 = v13;
        nn_fs_FileStorage_FileStorage_plt(v14, &v20_.v20);
        v16 = v20_.v21;
        if (v20_.v21 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak_plt(v16);
        }
        v17 = *a1;
        *a1 = v15;
        if (v17 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
          v8 = 0;
          v18 = v22;
          if (v22 == 0) {
            goto LABEL_21;
          }
          goto LABEL_20;
        }
        v8 = 0;
      LABEL_19:
        v18 = v22;
        if (v22 == 0) {
          goto LABEL_21;
        }
        goto LABEL_20;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_19;
      }
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_plt(v13);
      v18 = v22;
      if (v22 == 0) {
        goto LABEL_21;
      }
    }
  LABEL_20:
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    goto LABEL_21;
  }
  v9 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v23 + 48LL))(v23, v25);
  if (v9 == 0 || (v8 = v9, (v9 & 0x3FFFFF) == 0x202)) {
    v7 = (*(__int64 (**)(__int64, _BYTE*, _QWORD, __int64))(
        *(_QWORD*)v23 + 40LL))(v23, v25, *(_QWORD*)(a2 + 8), 1);
    if (v7 != 0) {
    LABEL_2:
      v8 = v7;
      goto LABEL_21;
    }
    goto LABEL_6;
  }
LABEL_21:
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  return v8;
}

__int64 nn_fs_da500(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[784];
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;
  __int64* v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v25_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  nn_os_SdkMutexType_Lock_plt(a1 + 152),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v2 = *(_QWORD*)(a1 + 8);
  v24 = 0;
  v3 = nn_fs_RomFsFileSystem_GetRequiredWorkingMemorySize_plt(&v24, v2),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if (v3 == 0) {
    v4 = v24;
    v3 = 1638402;
    if (v24 == 0) {
      v3 = 2191362;
      goto LABEL_16;
    }
    v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)(a1 + 24) + 16LL))(*(_QWORD*)(a1 + 24), v24, 16),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v5 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    }
    v6 = v5;
    v7 = nn_fs_detail_Allocate_plt(336),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v7 == 0) {
      goto LABEL_15;
    }
    v8 = (__int64*)v7;
    nn_fs_RomFsFileSystem_RomFsFileSystem_plt(),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    v9 = *(_QWORD*)(a1 + 8);
    v23 = v8;
    v10 = nn_fs_RomFsFileSystem_Initialize_plt_85af30(v8, v9, v6, v24, 1),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v10 != 0) {
      v3 = v10;
      v23 = nullptr;
      goto LABEL_14;
    }
    v18_.v21 = 0;
    v18_.v22 = 0;
    v18_.v19 = 0;
    v18_.v20 = 0;
    v18_.v18 = 0;
    nn_fs_Path_Path_plt(&v18_.v18),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    v11 = nn_fs_SetUpFixedPath_plt(&v18_.v18, "/"),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v11 != 0) {
      v3 = v11;
      v15 = v18_.v19;
      v18_.v19 = 0;
      if (v15 != 0) {
      LABEL_12:
        nn_fs_detail_Deallocate_plt(v15, v18_.v20),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
    }
    else {
      memset_plt_alt1((void*)v17, nullptr, 784),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      v25_.v28 = 0;
      v25_.v29 = 0;
      v25_.v26 = 0;
      v25_.v27 = 0;
      v25_.v25 = 0;
      nn_fs_Path_Path_plt(&v25_.v25),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      v3 = nn_fs_Path_Initialize_plt(&v25_.v25, &v18_.v18),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if (v3 == 0) {
        v3 = nn_fs_df380(v8, (__int64)&v25_.v25, (__int64)v17, a1, v13,
                         (__int64*)&v23, a1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
      v14 = v25_.v26;
      v25_.v26 = 0;
      if (v14 != 0) {
        nn_fs_detail_Deallocate_plt(v14, v25_.v27),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
      v15 = v18_.v19;
      v18_.v19 = 0;
      if (v15 != 0) {
        goto LABEL_12;
      }
    }
    v8 = v23;
    v23 = nullptr;
    if (v8 == nullptr) {
    LABEL_15:
      (*(void (**)(_QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 24) + 24LL))(*(_QWORD*)(a1 + 24), v6, v4, 16),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      goto LABEL_16;
    }
  LABEL_14:
    (*(void (**)(__int64*))(*v8 + 8))(v8),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    goto LABEL_15;
  }
LABEL_16:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  return v3;
}

__int64 nn_fs_da750(__int64 a1)
{
  __int64 result;
  int v2;

  *(_QWORD*)a1 = SdkData_e4de40;
  v2 = *(unsigned __int8*)(a1 + 8);
  result = a1 + 8;
  if (v2 == 1) {
    return nn_mem_StandardAllocator_Finalize_plt(result);
  }
  return result;
}

__int64 nn_fs_da770(__int64 a1)
{
  __int64 v1;

  *(_QWORD*)a1 = SdkData_e4de40;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v1 = a1;
    nn_mem_StandardAllocator_Finalize_plt(a1 + 8);
    a1 = v1;
  }
  return nn_fs_detail_Deallocate_plt(a1, 80);
}

__int64 nn_fs_da7c0(__int64 a1)
{
  __int64 result;

  result = nn_mem_StandardAllocator_Allocate_plt_85af60(a1 + 8);
  if (result == 0) {
    nn_mem_StandardAllocator_CleanUpManagementArea_plt(a1 + 8);
    return nn_mem_StandardAllocator_Allocate_plt_85af60(a1 + 8);
  }
  return result;
}

__int64 nn_fs_da840(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;

  *(_QWORD*)a1 = SdkData_e86d58 + 16;
  if (*(_BYTE*)(a1 + 156) == 1) {
    v4 = SdkRoutine_dbd00(a1);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
      __udf(0);
    }
  }
  nn_fs_dc510_alt1(a1 + 112, *(_QWORD*)(a1 + 120));
  nn_fs_dc570_alt1(a1 + 40, *(_QWORD*)(a1 + 48));
  v2 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_fs_da8f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v5;

  *(_QWORD*)a1 = SdkData_e86d58 + 16;
  if (*(_BYTE*)(a1 + 156) == 1) {
    v5 = SdkRoutine_dbd00(a1);
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
      __udf(0);
    }
  }
  nn_fs_dc510_alt1(a1 + 112, *(_QWORD*)(a1 + 120));
  nn_fs_dc570_alt1(a1 + 40, *(_QWORD*)(a1 + 48));
  v2 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  return nn_fs_detail_Deallocate_plt(a1, 160);
}

__int64 nn_fs_da9a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  unsigned int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  signed __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  signed __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v28[2];
    __int64 v29;
    __int64 v30;
  } v28_;
  __int64 v31;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    __int64 v34;
    __int64 v35;
  } v32_;

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)&v32_.v32, nullptr, 512);
    v7 = *(_QWORD*)(a1 + 8);
    v31 = 0;
    v8 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v31);
    if (v8 != 0 ||
        v31 <= 511 &&
            (v8 = (*(__int64 (**)(_QWORD, __int64))(
                 **(_QWORD**)(a1 + 8) + 40LL))(*(_QWORD*)(a1 + 8), 512)) != 0 ||
        (v8 = (*(__int64 (**)(_QWORD, _QWORD, __int64*, __int64))(
             **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, &v32_.v32,
                                           512)) != 0 ||
        (v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
             *(_QWORD*)(a1 + 8))) != 0) {
    LABEL_43:
      v12 = v8;
      goto LABEL_46;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v32_.v34 = 0;
  v32_.v35 = 0;
  v32_.v32 = 0;
  v32_.v33 = 0;
  v9 = nn_fs_Path_GetString_plt(a2);
  nn_fs_dc600((void*)(&v32_.v32), a1, v9);
  v28_.v30 = v32_.v35;
  if ((v32_.v32 & 1) == 0) {
    v28_.v28[0] = v32_.v32;
    v28_.v28[1] = v32_.v33;
    v28_.v29 = v32_.v34;
    v10 = SdkRoutine_85af90(a1 + 40, v28_.v28);
    if ((v28_.v28[0] & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  nn_fs_dcab0(v28_.v28, v32_.v34, v32_.v33);
  v10 = SdkRoutine_85af90(a1 + 40, v28_.v28);
  if ((v28_.v28[0] & 1) != 0) {
  LABEL_12:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v28_.v30 + 24LL))(v28_.v30, v28_.v29,
                                    v28_.v28[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_13:
  if (a1 + 48 != v10 && *(_DWORD*)(v10 + 80) == 0) {
    v11 = 0;
    v12 = 0;
    if ((v32_.v32 & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v12 = 514;
  v11 = 1;
  if ((v32_.v32 & 1) != 0) {
  LABEL_16:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v32_.v35 + 24LL))(v32_.v35, v32_.v34,
                                    v32_.v32 & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_17:
  if ((v11 & 1) == 0) {
    v13 = nn_fs_Path_GetString_plt(a2);
    v14 = nn_fs_Path_GetString_plt(a2);
    v15 = v14 + strnlen_plt(v14, 768);
    do {
      v16 = v15;
      if (v15 <= v14) {
        break;
      }
      --v15;
    } while (*(_BYTE*)(v16 - 1) != 47);
    if (a3 != 0) {
      v17 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if (v17 < a3) {
        v12 = 3109378;
        goto LABEL_46;
      }
      v18 = *(_QWORD**)(a1 + 112);
      v19 = (_QWORD*)(a1 + 120);
      if (v18 == (_QWORD*)(a1 + 120)) {
        goto LABEL_45;
      }
      v20 = (_QWORD*)(a1 + 120);
      do {
        v21 = v18[5];
        if (v21 >= v17 && (v20 == v19 || v21 < (signed __int64)v20[5])) {
          v20 = v18;
        }
        v22 = (_QWORD*)v18[1];
        if (v22 != nullptr) {
          do {
            v23 = v22;
            v22 = (_QWORD*)*v22;
          } while (v22 != nullptr);
        }
        else {
          do {
            v23 = (_QWORD*)v18[2];
            v24 = v18 == (_QWORD*)*v23;
            v18 = v23;
          } while (!v24);
        }
        v18 = v23;
      } while (v23 != v19);
      if (v20 == v19) {
      LABEL_45:
        v12 = 15362;
        goto LABEL_46;
      }
      v25 = v20[4];
    }
    else {
      v25 = 0;
    }
    v8 = nn_fs_dcb60((__int64*)(a1 + 32), v13, v16, v25, a3);
    if (v8 == 0) {
      v26 = *(_QWORD*)(a1 + 8);
      v32_.v32 = 0;
      v8 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v26 + 48LL))(
          v26, &v32_.v32);
      if (v8 == 0) {
        if (*(_QWORD*)(a1 + 144) + 512LL <= v32_.v32) {
          v12 = 0;
          goto LABEL_46;
        }
        v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 40LL))(
            *(_QWORD*)(a1 + 8));
      }
    }
    goto LABEL_43;
  }
LABEL_46:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v12;
}

__int64 nn_fs_dad00(__int64 a1, __int64 a2)
{
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v18[2];
    __int64 v19;
    __int64 v20;
  } v18_;
  __int64 v21;
  __int64 v22[64];

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)v22, nullptr, 512);
    v5 = *(_QWORD*)(a1 + 8);
    v21 = 0;
    v6 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v21);
    if (v6 != 0 ||
        v21 <= 511 &&
            (v6 = (*(__int64 (**)(_QWORD, __int64))(
                 **(_QWORD**)(a1 + 8) + 40LL))(*(_QWORD*)(a1 + 8), 512)) != 0 ||
        (v6 = (*(__int64 (**)(_QWORD, _QWORD, __int64*, __int64))(
             **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, v22, 512)) !=
            0 ||
        (v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
             *(_QWORD*)(a1 + 8))) != 0) {
      v7 = v6;
      goto LABEL_25;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v8 = nn_fs_Path_GetString_plt(a2);
  v9 = *(_QWORD*)(a1 + 24);
  v10 = v8;
  v18_.v20 = v9;
  v11 = strlen_plt(v8);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 16LL))(
        v9, v14, 16);
    if (v15 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v13 = (char*)v15;
    v18_.v18[1] = v12;
    v18_.v19 = v15;
    v18_.v18[0] = v14 | 1;
  }
  else {
    LOBYTE(v18_.v18[0]) = 2 * v11;
    v13 = (char*)v18_.v18 + 1;
    if (v11 == 0) {
      goto LABEL_19;
    }
  }
  memmove_plt(v13, v10, v12);
LABEL_19:
  v13[v12] = 0;
  v16 = SdkRoutine_85af90(a1 + 40, v18_.v18);
  v22[0] = v16;
  if ((v18_.v18[0] & 1) != 0) {
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v18_.v20 + 24LL))(v18_.v20, v18_.v19,
                                    v18_.v18[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  if (a1 + 48 == v16 || *(_DWORD*)(v16 + 80) != 1) {
    v7 = 514;
  }
  else {
    nn_fs_dd460(a1 + 32, v22);
    v7 = 0;
  }
LABEL_25:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v7;
}

__int64 nn_fs_daf00(__int64 a1, __int64 a2)
{
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  char v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  struct {
    __int64 v16[2];
    __int64 v17;
    __int64 v18;
  } v16_;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    __int64 v21;
    __int64 v22;
  } v19_;
  __int64 v23;

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)&v19_.v19, nullptr, 512);
    v5 = *(_QWORD*)(a1 + 8);
    v23 = 0;
    v6 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v23);
    if (v6 != 0) {
      goto LABEL_22;
    }
    if (v23 <= 511) {
      v6 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 40LL))(
          *(_QWORD*)(a1 + 8), 512);
      if (v6 != 0) {
        goto LABEL_22;
      }
    }
    v6 = (*(__int64 (**)(_QWORD, _QWORD, __int64*, __int64))(
        **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, &v19_.v19, 512);
    if (v6 != 0) {
      goto LABEL_22;
    }
    v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8));
    if (v6 != 0) {
      goto LABEL_22;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v19_.v21 = 0;
  v19_.v22 = 0;
  v19_.v19 = 0;
  v19_.v20 = 0;
  v7 = nn_fs_Path_GetString_plt(a2);
  nn_fs_dc600((void*)(&v19_.v19), a1, v7);
  v16_.v18 = v19_.v22;
  if ((v19_.v19 & 1) == 0) {
    v16_.v16[0] = v19_.v19;
    v16_.v16[1] = v19_.v20;
    v16_.v17 = v19_.v21;
    v8 = SdkRoutine_85af90(a1 + 40, v16_.v16);
    if ((v16_.v16[0] & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  nn_fs_dcab0(v16_.v16, v19_.v21, v19_.v20);
  v8 = SdkRoutine_85af90(a1 + 40, v16_.v16);
  if ((v16_.v16[0] & 1) != 0) {
  LABEL_12:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v16_.v18 + 24LL))(v16_.v18, v16_.v17,
                                    v16_.v16[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_13:
  if (a1 + 48 != v8 && *(_DWORD*)(v8 + 80) == 0) {
    v9 = 0;
    v10 = 0;
    if ((v19_.v19 & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v10 = 514;
  v9 = 1;
  if ((v19_.v19 & 1) != 0) {
  LABEL_16:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v19_.v22 + 24LL))(v19_.v22, v19_.v21,
                                    v19_.v19 & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_17:
  if ((v9 & 1) == 0) {
    v11 = nn_fs_Path_GetString_plt(a2);
    v12 = nn_fs_Path_GetString_plt(a2);
    v13 = v12 + strnlen_plt(v12, 768);
    do {
      v14 = v13;
      if (v13 <= v12) {
        break;
      }
      --v13;
    } while (*(_BYTE*)(v14 - 1) != 47);
    v6 = nn_fs_dbe80((__int64*)(a1 + 32), v11, v14);
  LABEL_22:
    v10 = v6;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v10;
}

__int64 nn_fs_db130(__int64 a1, __int64 a2)
{
  _BYTE* v4;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v21[2];
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v25_;

  v4 = (_BYTE*)nn_fs_Path_GetString_plt(a2);
  if (*v4 == 47 && v4[1] == 0) {
    return 3087874;
  }
  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)&v25_.v25, nullptr, 512);
    v6 = *(_QWORD*)(a1 + 8);
    v24 = 0;
    v7 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v24);
    if (v7 != 0 ||
        v24 <= 511 &&
            (v7 = (*(__int64 (**)(_QWORD, __int64))(
                 **(_QWORD**)(a1 + 8) + 40LL))(*(_QWORD*)(a1 + 8), 512)) != 0 ||
        (v7 = (*(__int64 (**)(_QWORD, _QWORD, __int64*, __int64))(
             **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, &v25_.v25,
                                           512)) != 0 ||
        (v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
             *(_QWORD*)(a1 + 8))) != 0) {
      v8 = v7;
      goto LABEL_29;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v25_.v26 = 0;
  v25_.v27 = 0;
  v25_.v25 = 0;
  v9 = nn_fs_Path_GetString_plt(a2);
  v10 = *(_QWORD*)(a1 + 24);
  v11 = v9;
  v25_.v28 = v10;
  v12 = strlen_plt(v9);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v12 | 7) + 1;
    }
    v18 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
        v10, v17, 16);
    if (v18 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v14 = (char*)v18;
    v25_.v26 = v13;
    v25_.v27 = v18;
    v25_.v25 = v17 | 1;
  LABEL_21:
    memmove_plt(v14, v11, v13);
    v14[v13] = 0;
    v15 = v25_.v28;
    v16 = v25_.v25;
    v21_.v23 = v25_.v28;
    if ((v25_.v25 & 1) == 0) {
      goto LABEL_15;
    }
  LABEL_22:
    nn_fs_dcab0(v21_.v21, v25_.v27, v25_.v26);
    goto LABEL_23;
  }
  LOBYTE(v25_.v25) = 2 * v12;
  v14 = (char*)&v25_.v25 + 1;
  if (v12 != 0) {
    goto LABEL_21;
  }
  BYTE1(v25_.v25) = 0;
  v15 = v25_.v28;
  v16 = v25_.v25;
  v21_.v23 = v25_.v28;
  if ((v25_.v25 & 1) != 0) {
    goto LABEL_22;
  }
LABEL_15:
  v21_.v21[0] = v25_.v25;
  v21_.v21[1] = v25_.v26;
  v21_.v22 = v25_.v27;
LABEL_23:
  v19 = SdkRoutine_85af90(a1 + 40, v21_.v21);
  v24 = v19;
  if ((v21_.v21[0] & 1) != 0) {
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v21_.v23 + 24LL))(v21_.v23, v21_.v22,
                                    v21_.v21[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  if (a1 + 48 == v19 || *(_DWORD*)(v19 + 80) != 0) {
    v8 = 514;
    if ((v16 & 1) == 0) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  nn_fs_dd680(a1 + 32, &v24);
  v8 = 0;
  if ((v16 & 1) != 0) {
  LABEL_28:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v15 + 24LL))(v15, v25_.v27, v25_.v25 & 0xFFFFFFFFFFFFFFFELL,
                               16);
  }
LABEL_29:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v8;
}

__int64 nn_fs_db3c0(__int64 a1, __int64 a2)
{
  _BYTE* v4;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v10;
  _BYTE v11[512];

  v4 = (_BYTE*)nn_fs_Path_GetString_plt(a2);
  if (*v4 == 47 && v4[1] == 0) {
    return 3087874;
  }
  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)v11, nullptr, 512);
    v6 = *(_QWORD*)(a1 + 8);
    v10 = 0;
    v7 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v10);
    if (v7 != 0) {
      goto LABEL_11;
    }
    if (v10 <= 511) {
      v7 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 40LL))(
          *(_QWORD*)(a1 + 8), 512);
      if (v7 != 0) {
        goto LABEL_11;
      }
    }
    v7 = (*(__int64 (**)(_QWORD, _QWORD, _BYTE*, __int64))(
        **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, v11, 512);
    if (v7 != 0) {
      goto LABEL_11;
    }
    v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8));
    if (v7 != 0) {
      goto LABEL_11;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v7 = nn_fs_dd7e0(a1, a2, 1);
LABEL_11:
  v8 = v7;
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v8;
}

__int64 nn_fs_db4e0(__int64 a1, __int64 a2)
{
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v9;
  _BYTE v10[512];

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((*(_BYTE*)(a1 + 156) & 1) != 0) {
    goto LABEL_8;
  }
  memset_plt_alt1((void*)v10, nullptr, 512);
  v5 = *(_QWORD*)(a1 + 8);
  v9 = 0;
  v6 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v9);
  if (v6 == 0 &&
      (v9 > 511 ||
       (v6 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 40LL))(
            *(_QWORD*)(a1 + 8), 512)) == 0)) {
    v6 = (*(__int64 (**)(_QWORD, _QWORD, _BYTE*, __int64))(
        **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, v10, 512);
    if (v6 == 0) {
      v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
          *(_QWORD*)(a1 + 8));
      if (v6 == 0) {
        *(_BYTE*)(a1 + 156) = 1;
      LABEL_8:
        v6 = nn_fs_dd7e0(a1, a2, 0);
      }
    }
  }
  v7 = v6;
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v7;
}

__int64 nn_fs_db5d0(__int64 a1)
{
  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return 3225602;
}

__int64 nn_fs_db610(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  struct {
    __int64 v19[2];
    __int64 v20;
    __int64 v21;
  } v19_;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v22_;

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  v6 = nn_fs_Path_GetString_plt(a3);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = v6;
  v22_.v25 = v7;
  v9 = strlen_plt(v6);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0();
  }
  v10 = v9;
  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v9 | 7) + 1;
    }
    v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 16LL))(
        v7, v15, 16);
    if (v16 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v11 = (char*)v16;
    v22_.v23 = v10;
    v22_.v24 = v16;
    v22_.v22 = v15 | 1;
  }
  else {
    LOBYTE(v22_.v22) = 2 * v9;
    v11 = (char*)&v22_.v22 + 1;
    if (v9 == 0) {
      BYTE1(v22_.v22) = 0;
      v12 = v22_.v25;
      v13 = v22_.v22;
      v19_.v21 = v22_.v25;
      if ((v22_.v22 & 1) == 0) {
        goto LABEL_5;
      }
    LABEL_13:
      nn_fs_dcab0(v19_.v19, v22_.v24, v22_.v23);
      v14 = SdkRoutine_85af90(a1 + 40, v19_.v19);
      if ((v19_.v19[0] & 1) == 0) {
        goto LABEL_15;
      }
      goto LABEL_14;
    }
  }
  memmove_plt(v11, v8, v10);
  v11[v10] = 0;
  v12 = v22_.v25;
  v13 = v22_.v22;
  v19_.v21 = v22_.v25;
  if ((v22_.v22 & 1) != 0) {
    goto LABEL_13;
  }
LABEL_5:
  v19_.v19[0] = v22_.v22;
  v19_.v19[1] = v22_.v23;
  v19_.v20 = v22_.v24;
  v14 = SdkRoutine_85af90(a1 + 40, v19_.v19);
  if ((v19_.v19[0] & 1) != 0) {
  LABEL_14:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v19_.v21 + 24LL))(v19_.v21, v19_.v20,
                                    v19_.v19[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_15:
  if (a1 + 48 == v14) {
    v17 = 514;
    if ((v13 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v17 = 0;
  *a2 = *(_DWORD*)(v14 + 80);
  if ((v13 & 1) != 0) {
  LABEL_17:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v12 + 24LL))(v12, v22_.v24, v22_.v22 & 0xFFFFFFFFFFFFFFFELL,
                               16);
  }
LABEL_18:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v17;
}

__int64 nn_fs_db7e0(__int64 a1, __int64* a2, __int64 a3, int a4)
{
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
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
  _QWORD* v29;
  struct {
    _QWORD v31[2];
    __int64 v32;
    __int64 v33;
  } v31_;
  __int64 v34;
  _BYTE v35[512];

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  if ((a4 & 4) != 0) {
    v11 = 3225602;
    goto LABEL_31;
  }
  if ((a4 & 2) != 0 && (*(_BYTE*)(a1 + 156) & 1) == 0) {
    memset_plt_alt1((void*)v35, nullptr, 512);
    v9 = *(_QWORD*)(a1 + 8);
    v34 = 0;
    v10 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v34);
    if (v10 != 0 ||
        v34 <= 511 &&
            (v10 = (*(__int64 (**)(_QWORD, __int64))(
                 **(_QWORD**)(a1 + 8) + 40LL))(*(_QWORD*)(a1 + 8), 512)) != 0 ||
        (v10 = (*(__int64 (**)(_QWORD, _QWORD, _BYTE*, __int64))(
             **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), 0, v35, 512)) !=
            0 ||
        (v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
             *(_QWORD*)(a1 + 8))) != 0) {
      v11 = v10;
      goto LABEL_31;
    }
    *(_BYTE*)(a1 + 156) = 1;
  }
  v12 = nn_fs_Path_GetString_plt(a3);
  v13 = *(_QWORD*)(a1 + 24);
  v14 = v12;
  v31_.v33 = v13;
  v15 = strlen_plt(v12);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0();
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v13 + 16LL))(
        v13, v18, 16);
    if (v19 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v17 = (char*)v19;
    v31_.v31[1] = v16;
    v31_.v32 = v19;
    v31_.v31[0] = v18 | 1;
  }
  else {
    LOBYTE(v31_.v31[0]) = 2 * v15;
    v17 = (char*)v31_.v31 + 1;
    if (v15 == 0) {
      goto LABEL_21;
    }
  }
  memmove_plt(v17, v14, v16);
LABEL_21:
  v17[v16] = 0;
  v20 = SdkRoutine_85af90(a1 + 40, v31_.v31);
  if ((v31_.v31[0] & 1) != 0) {
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v31_.v33 + 24LL))(v31_.v33, v31_.v32,
                                    v31_.v31[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  if (a1 + 48 == v20 || *(_DWORD*)(v20 + 80) != 1) {
    v11 = 514;
  }
  else {
    v11 = 1638402;
    v21 = nn_fs_detail_Allocate_plt(56);
    if (v21 != 0) {
      v22 = *(_QWORD*)(a1 + 8);
      v23 = *(_QWORD*)(v20 + 64);
      v24 = *(_QWORD*)(v20 + 72);
      v25 = v21;
      v26 = SdkData_e86ce0;
      *(_BYTE*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_QWORD*)(v21 + 48) = 0;
      *(_QWORD*)v21 = v26 + 16;
      *(_QWORD*)(v21 + 8) = v22;
      *(_QWORD*)(v21 + 16) = v23 + 512;
      *(_QWORD*)(v21 + 24) = v24;
      v27 = nn_fs_detail_Allocate_plt(24);
      if (v27 != 0) {
        v28 = SdkData_e86d68;
        *(_DWORD*)(v27 + 16) = a4;
        *(_QWORD*)v27 = v28 + 16;
        *(_QWORD*)(v27 + 8) = v25;
        v29 = (_QWORD*)*a2;
        *a2 = v27;
        if (v29 != nullptr) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
              *v29 + 8LL))((void*)(v29), v29);
        }
        v11 = 0;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
      }
    }
  }
LABEL_31:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v11;
}

__int64 nn_fs_dba80(__int64 a1, __int64* a2, __int64 a3, int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  unsigned int v26;
  _QWORD* v27;
  struct {
    __int64 v29[2];
    __int64 v30;
    __int64 v31;
  } v29_;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v32_;

  nn_os_SdkMutexType_Lock_plt(a1 + 152);
  v8 = nn_fs_Path_GetString_plt(a3);
  v9 = *(_QWORD*)(a1 + 24);
  v10 = v8;
  v32_.v35 = v9;
  v11 = strlen_plt(v8);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0();
  }
  v12 = v11;
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = 0;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v11 | 7) + 1;
    }
    v18 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 16LL))(
        v9, v17, 16);
    if (v18 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v13 = (char*)v18;
    v32_.v33 = v12;
    v32_.v34 = v18;
    v32_.v32 = v17 | 1;
  }
  else {
    LOBYTE(v32_.v32) = 2 * v11;
    v13 = (char*)&v32_.v32 + 1;
    if (v11 == 0) {
      BYTE1(v32_.v32) = 0;
      v14 = v32_.v35;
      v15 = v32_.v32;
      v29_.v31 = v32_.v35;
      if ((v32_.v32 & 1) == 0) {
        goto LABEL_5;
      }
      goto LABEL_13;
    }
  }
  memmove_plt(v13, v10, v12);
  v13[v12] = 0;
  v14 = v32_.v35;
  v15 = v32_.v32;
  v29_.v31 = v32_.v35;
  if ((v32_.v32 & 1) == 0) {
  LABEL_5:
    v29_.v29[0] = v32_.v32;
    v29_.v29[1] = v32_.v33;
    v29_.v30 = v32_.v34;
    v16 = SdkRoutine_85af90(a1 + 40, v29_.v29);
    if ((v29_.v29[0] & 1) == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_13:
  nn_fs_dcab0(v29_.v29, v32_.v34, v32_.v33);
  v16 = SdkRoutine_85af90(a1 + 40, v29_.v29);
  if ((v29_.v29[0] & 1) != 0) {
  LABEL_14:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v29_.v31 + 24LL))(v29_.v31, v29_.v30,
                                    v29_.v29[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_15:
  if (a1 + 48 == v16 || *(_DWORD*)(v16 + 80) != 0) {
    v26 = 514;
    if ((v15 & 1) == 0) {
      goto LABEL_30;
    }
    goto LABEL_24;
  }
  v19 = nn_fs_detail_Allocate_plt(72);
  if (v19 == 0) {
    v26 = 1638402;
    if ((v15 & 1) == 0) {
      goto LABEL_30;
    }
  LABEL_24:
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v14 + 24LL))(v14, v32_.v34, v32_.v32 & 0xFFFFFFFFFFFFFFFELL,
                               16);
    goto LABEL_30;
  }
  v20 = SdkData_e86d70;
  v21 = v32_.v32;
  v22 = v32_.v33;
  *(_QWORD*)(v19 + 32) = v14;
  *(_QWORD*)(v19 + 40) = v16;
  *(_QWORD*)(v19 + 48) = v16;
  *(_QWORD*)(v19 + 56) = a1 + 48;
  *(_DWORD*)(v19 + 64) = a4;
  *(_QWORD*)v19 = v20 + 16;
  *(_QWORD*)(v19 + 8) = v21;
  v23 = v32_.v34;
  *(_QWORD*)(v19 + 16) = v22;
  *(_QWORD*)(v19 + 24) = v23;
  v24 = (unsigned __int8)v21 >> 1;
  if ((v21 & 1) != 0) {
    v24 = v22;
  }
  if (v24 == 1) {
    if ((v21 & 1) != 0) {
      v25 = *(_BYTE**)(v19 + 24);
      *(_QWORD*)(v19 + 16) = 0;
    }
    else {
      v25 = (_BYTE*)(v19 + 9);
      *(_BYTE*)(v19 + 8) = 0;
    }
    *v25 = 0;
  }
  v27 = (_QWORD*)*a2;
  *a2 = v19;
  if (v27 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v27 + 8LL))(
        (void*)(v27), v27);
  }
  v26 = 0;
LABEL_30:
  nn_os_SdkMutexType_Unlock_plt(a1 + 152);
  return v26;
}

__int64 nn_fs_dbe80(__int64* a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  char v14;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    __int64 v18;
    __int64 v19;
  } v16_;
  struct {
    _QWORD v20[2];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v20_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1 + 1;
  v4 = *a1;
  v20_.v27 = 0;
  v20_.v28 = 0;
  v20_.v26 = 0;
  v16_.v19 = v4;
  v8 = strlen_plt(a2),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0(),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v4 + 16LL))(
        v4, v11, 16),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v12 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 = (char*)v12;
    v16_.v17 = v9;
    v16_.v18 = v12;
    v16_.v16 = v11 | 1;
    goto LABEL_10;
  }
  LOBYTE(v16_.v16) = 2 * v8;
  v10 = (char*)&v16_.v16 + 1;
  if (v8 != 0) {
  LABEL_10:
    memmove_plt(v10, a2, v9),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10[v9] = 0;
  v20_.v20[0] = v16_.v16;
  v20_.v20[1] = v16_.v17;
  v20_.v21 = v16_.v18;
  v20_.v22 = v16_.v19;
  v20_.v23 = v20_.v26;
  v20_.v24 = v20_.v27;
  v20_.v25 = v20_.v28;
  ({
    unsigned __int128 r_ = SdkRoutine_85afa0_pair(v3, v20_.v20);
    v13 = COERCE_AS(__typeof__(v13), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v14 = v13;
  if ((v20_.v20[0] & 1) != 0) {
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v20_.v22 + 24LL))(v20_.v22, v20_.v21,
                                    v20_.v20[0] & 0xFFFFFFFFFFFFFFFELL, 16),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v14 & 1) == 0) {
    return 1026;
  }
  ++*((_DWORD*)a1 + 10);
  a1[6] += ((unsigned int)strnlen_plt(a3, 768) + 27LL) & 0x1FFFFFFFCLL,
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return 0;
}

__int64* std___1___tree___emplace_unique_impl_dc000(__int64** a1, int* a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64** v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;

  v4 = (__int64*)(*(__int64 (**)(__int64*, __int64, __int64))(*a1[2] + 16))(
      a1[2], 48, 16);
  if (v4 == nullptr) {
    nn_diag_detail_AbortImpl_plt_856170(0);
  }
  v5 = *a2;
  v6 = v4;
  v4[4] = v5;
  v4[5] = *((_QWORD*)a2 + 1);
  v7 = a1 + 1;
  v8 = a1[1];
  if (v8 != nullptr) {
    do {
      while (1) {
        v10 = v8[4];
        v9 = (__int64**)v8;
        if (v10 <= v5) {
          break;
        }
        v8 = (__int64*)*v8;
        v7 = v9;
        if (*v9 == nullptr) {
          goto LABEL_10;
        }
      }
      if (v10 >= v5) {
        (*(void (**)(__int64*, __int64*, __int64, __int64))(*a1[2] + 24))(
            a1[2], v4, 48, 16);
        return (__int64*)v9;
      }
      v8 = (__int64*)v8[1];
    } while (v8 != nullptr);
    v7 = v9 + 1;
  }
  else {
    v9 = a1 + 1;
  }
LABEL_10:
  *v4 = 0;
  v4[1] = 0;
  v4[2] = (__int64)v9;
  v11 = v4;
  *v7 = v4;
  v12 = (__int64*)**a1;
  if (v12 != nullptr) {
    *a1 = v12;
    v11 = *v7;
  }
  nn_fs_dc120(a1[1], v11);
  a1[3] = (__int64*)((char*)a1[3] + 1);
  return v6;
}

__int64* nn_fs_dc120(__int64* result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64** v11;
  __int64 v12;
  __int64** v13;

  *((_BYTE*)a2 + 24) = a2 == result;
  if (a2 != result) {
    do {
      v2 = (__int64*)a2[2];
      if ((v2[3] & 1) != 0) {
        return result;
      }
      v3 = (__int64*)v2[2];
      v4 = (__int64*)*v3;
      if (v2 == (__int64*)*v3) {
        v4 = (__int64*)v3[1];
        if (v4 == nullptr || (v4[3] & 1) != 0) {
          if (a2 == (__int64*)*v2) {
            v5 = (__int64**)a2[2];
          }
          else {
            v5 = (__int64**)v2[1];
            v6 = *v5;
            v2[1] = (__int64)*v5;
            if (v6 != nullptr) {
              v6[2] = (__int64)v2;
              v3 = (__int64*)v2[2];
            }
            v5[2] = v3;
            if (v2 == (__int64*)*v3) {
              *v3 = (__int64)v5;
            }
            else {
              v3[1] = (__int64)v5;
            }
            *v5 = v2;
            v2[2] = (__int64)v5;
            v3 = v5[2];
          }
          *((_BYTE*)v5 + 24) = 1;
          *((_BYTE*)v3 + 24) = 0;
          v9 = (__int64*)*v3;
          v10 = *(_QWORD*)(*v3 + 8);
          *v3 = v10;
          if (v10 != 0) {
            *(_QWORD*)(v10 + 16) = v3;
          }
          v11 = (__int64**)v3[2];
          v9[2] = (__int64)v11;
          if (v3 == *v11) {
            *v11 = v9;
          }
          else {
            v11[1] = v9;
          }
          v9[1] = (__int64)v3;
          goto LABEL_39;
        }
      }
      else if (v4 == nullptr || (v4[3] & 1) != 0) {
        v7 = *v2;
        if (a2 == (__int64*)*v2) {
          v8 = *(_QWORD*)(v7 + 8);
          *v2 = v8;
          if (v8 != 0) {
            *(_QWORD*)(v8 + 16) = v2;
            v3 = (__int64*)v2[2];
          }
          *(_QWORD*)(v7 + 16) = v3;
          if (v2 == (__int64*)*v3) {
            *v3 = v7;
          }
          else {
            v3[1] = v7;
          }
          *(_QWORD*)(v7 + 8) = v2;
          v2[2] = v7;
          v3 = *(__int64**)(v7 + 16);
        }
        else {
          v7 = a2[2];
        }
        *(_BYTE*)(v7 + 24) = 1;
        *((_BYTE*)v3 + 24) = 0;
        v9 = (__int64*)v3[1];
        v12 = *v9;
        v3[1] = *v9;
        if (v12 != 0) {
          *(_QWORD*)(v12 + 16) = v3;
        }
        v13 = (__int64**)v3[2];
        v9[2] = (__int64)v13;
        if (v3 == *v13) {
          *v13 = v9;
        }
        else {
          v13[1] = v9;
        }
        *v9 = (__int64)v3;
      LABEL_39:
        v3[2] = (__int64)v9;
        return result;
      }
      *((_BYTE*)v2 + 24) = 1;
      a2 = v3;
      *((_BYTE*)v3 + 24) = v3 == result;
      *((_BYTE*)v4 + 24) = 1;
    } while (v3 != result);
  }
  return result;
}

__int64* std___1___tree___emplace_unique_impl(__int64** a1, __int64* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64* v25;
  __int64* v26;

  v4 = (_QWORD*)(*(__int64 (**)(__int64*, __int64, __int64))(*a1[2] + 16))(
      a1[2], 88, 16);
  if (v4 == nullptr) {
    nn_diag_detail_AbortImpl_plt_856170(0);
    __udf(0);
  }
  v5 = *a2;
  v6 = a2[2];
  v7 = v4;
  v4[5] = a2[1];
  v4[6] = v6;
  v4[4] = v5;
  v4[7] = a2[3];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v8 = a2[4];
  v9 = a2[6];
  v4[9] = a2[5];
  v4[10] = v9;
  v4[8] = v8;
  v11 = a1 + 1;
  v10 = a1[1];
  if (v10 != nullptr) {
    v12 = *((unsigned __int8*)v4 + 32);
    v13 = v4[6];
    if ((v12 & 1) != 0) {
      v14 = (char*)v4[6];
    }
    else {
      v14 = (char*)v4 + 33;
    }
    if ((v12 & 1) != 0) {
      v15 = v4[5];
    }
    else {
      v15 = v12 >> 1;
    }
    while (1) {
      while (1) {
        v16 = v10;
        v17 = *((unsigned __int8*)v10 + 32);
        v18 = (v17 & 1) == 0;
        v19 = v17 >> 1;
        v20 = v18 ? v19 : v16[5];
        v21 = v18 ? (__int64)v16 + 33 : v16[6];
        v22 = v20 >= v15 ? v15 : v20;
        v23 = memcmp_plt(v14, v21, v22);
        if (v23 != 0) {
          break;
        }
        if (v15 >= v20) {
          goto LABEL_23;
        }
      LABEL_9:
        v10 = (__int64*)*v16;
        v11 = (__int64**)v16;
        if (*v16 == 0) {
          goto LABEL_30;
        }
      }
      if (v23 < 0) {
        goto LABEL_9;
      }
    LABEL_23:
      v24 = memcmp_plt(v21, v14, v22);
      if (v24 != 0) {
        if ((v24 & 0x80000000) == 0) {
          goto LABEL_33;
        }
      }
      else if (v20 >= v15) {
      LABEL_33:
        if ((v12 & 1) != 0) {
          (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
              *(_QWORD*)v7[7] + 24LL))(v7[7], v13, v7[4] & 0xFFFFFFFFFFFFFFFELL,
                                       16);
        }
        (*(void (**)(__int64*, __int64*, __int64, __int64))(*a1[2] + 24))(
            a1[2], v7, 88, 16);
        return v16;
      }
      v10 = (__int64*)v16[1];
      if (v10 == nullptr) {
        v11 = (__int64**)(v16 + 1);
        goto LABEL_30;
      }
    }
  }
  v16 = (__int64*)(a1 + 1);
LABEL_30:
  *v7 = 0;
  v7[1] = 0;
  v7[2] = (__int64)v16;
  v25 = v7;
  *v11 = v7;
  v26 = (__int64*)**a1;
  if (v26 != nullptr) {
    *a1 = v26;
    v25 = *v11;
  }
  nn_fs_dc120(a1[1], v25);
  a1[3] = (__int64*)((char*)a1[3] + 1);
  return v7;
}

void __attribute__((noreturn)) nn_fs_dc4d0()
{
  nn_fs_dc4f0_alt1("basic_string");
}

void __attribute__((noreturn)) unplaced_dc4d0() { nn_fs_dc4f0("basic_string"); }

void __attribute__((noreturn)) nn_fs_dc4f0(const char* a1)
{
  std___1___libcpp_verbose_abort_plt(
      "length_error was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

__int64 nn_fs_dc510(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2 != nullptr) {
    v2 = result;
    nn_fs_dc510(result, *a2);
    nn_fs_dc510(v2, a2[1]);
    return (*(__int64 (**)(_QWORD, _QWORD*, __int64, __int64))(
        **(_QWORD**)(v2 + 16) + 24LL))(*(_QWORD*)(v2 + 16), a2, 48, 16);
  }
  return result;
}

__int64 nn_fs_dc570(__int64 result, __int64 a2)
{
  __int64 v3;

  if (a2 != 0) {
    v3 = result;
    nn_fs_dc570(result, *(_QWORD*)a2);
    nn_fs_dc570(v3, *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)(a2 + 32) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD, unsigned __int64, __int64))(
          **(_QWORD**)(a2 + 56) + 24LL))(
          *(_QWORD*)(a2 + 56), *(_QWORD*)(a2 + 48),
          *(_QWORD*)(a2 + 32) & 0xFFFFFFFFFFFFFFFELL, 16);
    }
    return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
        **(_QWORD**)(v3 + 16) + 24LL))(*(_QWORD*)(v3 + 16), a2, 88, 16);
  }
  return result;
}

__attribute__((swiftcall)) void nn_fs_dc600(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2)
{
  unsigned __int8* a3 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  int v18;
  unsigned __int8* result;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    __int64 v28;
    unsigned __int8* v29;
  } v26_;

  v3 = *(unsigned __int8**)(a1 + 24);
  v26_.v29 = v3;
  v6 = strlen_plt(a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_48;
  }
  v7 = v6;
  v26_.v27 = 0;
  v26_.v28 = 0;
  v26_.v26 = 0;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v10 = (*(__int64 (**)(unsigned __int8*, __int64, __int64))(
        *(_QWORD*)v3 + 16LL))(v3, v9, 16);
    if (v10 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v8 = (char*)v10;
    v26_.v27 = v7;
    v26_.v28 = v10;
    v26_.v26 = v9 | 1;
    goto LABEL_10;
  }
  LOBYTE(v26_.v26) = 2 * v6;
  v8 = (char*)&v26_.v26 + 1;
  if (v6 != 0) {
  LABEL_10:
    memmove_plt(v8, a2, v7);
  }
  v8[v7] = 0;
  *((_QWORD*)a3 + 2) = 0;
  *((_QWORD*)a3 + 3) = 0;
  v11 = (unsigned __int8)v26_.v26;
  v13 = v26_.v27;
  v12 = (char*)v26_.v28;
  *(_QWORD*)a3 = 0;
  *((_QWORD*)a3 + 1) = 0;
  v14 = (v11 & 1) == 0;
  v15 = v11 >> 1;
  if (v14) {
    v16 = (char*)&v26_.v26 + 1;
  }
  else {
    v16 = v12;
  }
  if (!v14) {
    v15 = v13;
  }
  if (v15 != 0) {
    v17 = v15;
    while (v17 != 0) {
      v18 = (unsigned __int8)v16[--v17];
      if (v18 == 47) {
        goto LABEL_22;
      }
    }
    result = v26_.v29;
    if (v15 >= 0xFFFFFFFFFFFFFFFFLL) {
      v20 = -1;
    }
    else {
      v20 = v15;
    }
    *((_QWORD*)a3 + 3) = v26_.v29;
    if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_48;
    }
  }
  else {
    v17 = -1;
  LABEL_22:
    result = v26_.v29;
    if (v15 >= v17) {
      v20 = v17;
    }
    else {
      v20 = v15;
    }
    *((_QWORD*)a3 + 3) = v26_.v29;
    if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_48:
      nn_fs_dc4d0();
    }
  }
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v20 | 7) + 1;
    }
    v23 = (*(__int64 (**)(unsigned __int8*, __int64, __int64))(
        *(_QWORD*)result + 16LL))(result, v22, 16);
    if (v23 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v21 = (char*)v23;
    *((_QWORD*)a3 + 1) = v20;
    *((_QWORD*)a3 + 2) = v23;
    *(_QWORD*)a3 = v22 | 1;
    goto LABEL_34;
  }
  *a3 = 2 * v20;
  v21 = (char*)(a3 + 1);
  if (v20 != 0) {
  LABEL_34:
    result = (unsigned __int8*)memmove_plt(v21, v16, v20);
  }
  v21[v20] = 0;
  v24 = *a3;
  if ((v24 & 1) != 0) {
    v25 = *((_QWORD*)a3 + 1);
  }
  else {
    v25 = v24 >> 1;
  }
  if (v25 != 0) {
    if ((v26_.v26 & 1) == 0) {
      result;
      return;
    }
    {
      (unsigned __int8*)(*(
          __int64 (**)(unsigned __int8*, __int64, unsigned __int64, __int64))(
          *(_QWORD*)v26_.v29 + 24LL))(v26_.v29, v26_.v28,
                                      v26_.v26 & 0xFFFFFFFFFFFFFFFELL, 16);
      return;
    }
  }
  result = nn_fs_dc860(a3, 0x2Fu);
  if ((v26_.v26 & 1) != 0) {
    (unsigned __int8*)(*(
        __int64 (**)(unsigned __int8*, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v26_.v29 + 24LL))(v26_.v29, v26_.v28,
                                    v26_.v26 & 0xFFFFFFFFFFFFFFFELL, 16);
    return;
  }
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) nn_fs_dc820()
{
  nn_fs_dc840_alt1("basic_string");
}

void __attribute__((noreturn)) unplaced_dc820() { nn_fs_dc840("basic_string"); }

void __attribute__((noreturn)) nn_fs_dc840(const char* a1)
{
  std___1___libcpp_verbose_abort_plt(
      "out_of_range was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

unsigned __int8* nn_fs_dc860(unsigned __int8* result, unsigned __int8 a2)
{
  unsigned __int64 v2;
  unsigned __int8* v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  bool v34;
  __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  int v42;

  v2 = *result;
  v4 = result;
  if ((v2 & 1) == 0) {
    if ((_DWORD)v2 != 44) {
      v8 = v2 >> 1;
      *result = v2 + 2;
      v12 = result + 1;
    LABEL_20:
      v15 = &v12[v8];
      *v15 = a2;
      v15[1] = 0;
      return result;
    }
    v5 = result + 1;
    v6 = 48;
    v7 = 22;
    goto LABEL_12;
  }
  v8 = *((_QWORD*)result + 1);
  v9 = *(_QWORD*)result & 0xFFFFFFFFFFFFFFFELL;
  v7 = v9 - 1;
  if (v8 != v9 - 1) {
  LABEL_19:
    v12 = *((unsigned __int8**)v4 + 2);
    *((_QWORD*)v4 + 1) = v8 + 1;
    goto LABEL_20;
  }
  v5 = *((unsigned __int8**)result + 2);
  if (v7 <= 0x7FFFFFFFFFFFFFF2LL) {
    v10 = (2 * v7) | 7;
    if (v10 == 23) {
      v11 = 26;
    }
    else {
      v11 = v10 + 1;
    }
    if (v7 >= 0xC) {
      v6 = v11;
    }
    else {
      v6 = 23;
    }
  LABEL_12:
    v9 = v7 + 1;
    goto LABEL_15;
  }
  v6 = -9;
LABEL_15:
  v8 = v7;
  v13 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **((_QWORD**)result + 3) + 16LL))(*((_QWORD*)result + 3), v6, 16);
  if (v13 != 0) {
    v14 = v13;
    result = (unsigned __int8*)memmove_plt(v13, v5, v8);
    if (v9 != 23) {
      result = (unsigned __int8*)(*(
          __int64 (**)(_QWORD, unsigned __int8*, unsigned __int64, __int64))(
          **((_QWORD**)v4 + 3) + 24LL))(*((_QWORD*)v4 + 3), v5, v9, 16);
    }
    *((_QWORD*)v4 + 2) = v14;
    *(_QWORD*)v4 = v6 | 1;
    goto LABEL_19;
  }
  v16 = nn_diag_detail_AbortImpl_plt_856170(0);
  v18 = v16 + 8;
  v19 = *(_QWORD*)(v16 + 8);
  if (v19 != 0) {
    v20 = *v17;
    v21 = v16 + 8;
    v22 = (v20 & 1) == 0;
    v23 = v20 >> 1;
    if (v22) {
      v24 = v17 + 1;
    }
    else {
      v24 = *((unsigned __int8**)v17 + 2);
    }
    if (v22) {
      v25 = v23;
    }
    else {
      v25 = *((_QWORD*)v17 + 1);
    }
    do {
      v26 = *(unsigned __int8*)(v19 + 32);
      v27 = (v26 & 1) == 0;
      v28 = v26 >> 1;
      if (v27) {
        v29 = v28;
      }
      else {
        v29 = *(_QWORD*)(v19 + 40);
      }
      if (v27) {
        v30 = v19 + 33;
      }
      else {
        v30 = *(_QWORD*)(v19 + 48);
      }
      if (v25 >= v29) {
        v31 = v29;
      }
      else {
        v31 = v25;
      }
      v32 = memcmp_plt(v30, v24, v31);
      if (v29 < v25) {
        v33 = -1;
      }
      else {
        v33 = 1;
      }
      if (v29 == v25) {
        v33 = 0;
      }
      if (v32 != 0) {
        v33 = v32;
      }
      v34 = v33 < 0;
      if (v33 >= 0) {
        v35 = 0;
      }
      else {
        v35 = 8;
      }
      if (!v34) {
        v21 = v19;
      }
      v19 = *(_QWORD*)(v19 + v35);
    } while (v19 != 0);
    if (v21 != v18) {
      v36 = *(unsigned __int8*)(v21 + 32);
      v37 = (v36 & 1) == 0;
      v38 = v36 >> 1;
      if (v37) {
        v39 = v38;
      }
      else {
        v39 = *(_QWORD*)(v21 + 40);
      }
      if (v37) {
        v40 = v21 + 33;
      }
      else {
        v40 = *(_QWORD*)(v21 + 48);
      }
      if (v39 >= v25) {
        v41 = v25;
      }
      else {
        v41 = v39;
      }
      v42 = memcmp_plt(v24, v40, v41);
      if (v42 != 0) {
        if (v42 >= 0) {
          return (unsigned __int8*)v21;
        }
      }
      else if (v25 >= v39) {
        return (unsigned __int8*)v21;
      }
    }
  }
  return (unsigned __int8*)v18;
}

__int64 std___1___tree_find(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  bool v18;
  __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int v26;

  v2 = a1 + 8;
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = *a2;
    v5 = a1 + 8;
    v6 = (v4 & 1) == 0;
    v7 = v4 >> 1;
    if (v6) {
      v8 = a2 + 1;
    }
    else {
      v8 = *((unsigned __int8**)a2 + 2);
    }
    if (v6) {
      v9 = v7;
    }
    else {
      v9 = *((_QWORD*)a2 + 1);
    }
    do {
      v10 = *(unsigned __int8*)(v3 + 32);
      v11 = (v10 & 1) == 0;
      v12 = v10 >> 1;
      if (v11) {
        v13 = v12;
      }
      else {
        v13 = *(_QWORD*)(v3 + 40);
      }
      if (v11) {
        v14 = v3 + 33;
      }
      else {
        v14 = *(_QWORD*)(v3 + 48);
      }
      if (v9 >= v13) {
        v15 = v13;
      }
      else {
        v15 = v9;
      }
      v16 = memcmp_plt(v14, v8, v15);
      if (v13 < v9) {
        v17 = -1;
      }
      else {
        v17 = 1;
      }
      if (v13 == v9) {
        v17 = 0;
      }
      if (v16 != 0) {
        v17 = v16;
      }
      v18 = v17 < 0;
      if (v17 >= 0) {
        v19 = 0;
      }
      else {
        v19 = 8;
      }
      if (!v18) {
        v5 = v3;
      }
      v3 = *(_QWORD*)(v3 + v19);
    } while (v3 != 0);
    if (v5 != v2) {
      v20 = *(unsigned __int8*)(v5 + 32);
      v21 = (v20 & 1) == 0;
      v22 = v20 >> 1;
      if (v21) {
        v23 = v22;
      }
      else {
        v23 = *(_QWORD*)(v5 + 40);
      }
      if (v21) {
        v24 = v5 + 33;
      }
      else {
        v24 = *(_QWORD*)(v5 + 48);
      }
      if (v23 >= v9) {
        v25 = v9;
      }
      else {
        v25 = v23;
      }
      v26 = memcmp_plt(v8, v24, v25);
      if (v26 != 0) {
        if (v26 >= 0) {
          return v5;
        }
      }
      else if (v9 >= v23) {
        return v5;
      }
    }
  }
  return v2;
}

__int64 nn_fs_dcab0(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a3 > 0x16) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      nn_fs_dc4d0();
    }
    v7 = a1[3];
    v8 = a2;
    if ((a3 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (a3 | 7) + 1;
    }
    v4 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 16LL))(
        v7, v9, 16);
    if (v4 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0);
      __udf(0);
    }
    a1[1] = a3;
    a1[2] = v4;
    a2 = v8;
    *a1 = v9 | 1;
    v5 = a3 + 1;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v4 = (__int64)a1 + 1;
    v5 = a3 + 1;
  }
  return memmove_plt(v4, a2, v5);
}

__int64 nn_fs_dcb60(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64* v5;
  __int64 v6;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char v18;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    __int64 v22;
    __int64 v23;
  } v20_;
  struct {
    _QWORD v24[2];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v24_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1 + 1;
  v6 = *a1;
  v20_.v23 = *a1;
  v12 = strlen_plt(a2),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    nn_fs_dc4d0(),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 16LL))(
        v6, v15, 16),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v16 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(0),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v14 = (char*)v16;
    v20_.v21 = v13;
    v20_.v22 = v16;
    v20_.v20 = v15 | 1;
    goto LABEL_10;
  }
  LOBYTE(v20_.v20) = 2 * v12;
  v14 = (char*)&v20_.v20 + 1;
  if (v12 != 0) {
  LABEL_10:
    memmove_plt(v14, a2, v13),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14[v13] = 0;
  v24_.v27 = a4;
  v24_.v28 = a5;
  v24_.v24[0] = v20_.v20;
  v24_.v24[1] = v20_.v21;
  v24_.v25 = v20_.v22;
  v24_.v26 = v20_.v23;
  v24_.v29 = 1;
  ({
    unsigned __int128 r_ = SdkRoutine_85afa0_pair(v5, v24_.v24);
    v17 = COERCE_AS(__typeof__(v17), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v18 = v17;
  if ((v24_.v24[0] & 1) != 0) {
    (*(void (**)(__int64, __int64, unsigned __int64, __int64))(
        *(_QWORD*)v24_.v26 + 24LL))(v24_.v26, v24_.v25,
                                    v24_.v24[0] & 0xFFFFFFFFFFFFFFFELL, 16),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v18 & 1) == 0) {
    return 1026;
  }
  ++*((_DWORD*)a1 + 14);
  a1[8] += ((unsigned int)strnlen_plt(a3, 768) + 35LL) & 0x1FFFFFFFCLL,
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_fs_dcd00(a1 + 9, a4, a5),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return 0;
}

__int64* nn_fs_dcd00(__int64* result, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 v4;
  __int64** v5;
  __int64** v7;
  __int64** i;
  __int64* v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64** v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64** v20;
  __int64 v21;
  __int64* v22;
  __int64** v23;
  __int64** v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64** v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  signed __int64 v35;

  if (a3 == 0) {
    return result;
  }
  v3 = result;
  v5 = (__int64**)(result + 2);
  v4 = result[2];
  v7 = v5;
  if (v4 == 0) {
    goto LABEL_59;
  }
  v7 = v5;
  for (i = (__int64**)v4; i != nullptr; i = (__int64**)i[v11]) {
    v9 = i[4];
    v10 = (__int64)v9 <= a2;
    v11 = (__int64)v9 <= a2;
    if (!v10) {
      v7 = i;
    }
  }
  v12 = *v7;
  if (*v7 != nullptr) {
    do {
      v13 = (__int64**)v12;
      v12 = (__int64*)v12[1];
    } while (v12 != nullptr);
  }
  else {
  LABEL_59:
    do {
      v13 = (__int64**)v7[2];
      v14 = v7 == (__int64**)*v13;
      v7 = v13;
    } while (v14);
  }
  if (v13 == v5) {
    goto LABEL_54;
  }
  v15 = (__int64)v13[4];
  if (a2 < v15 || (v16 = ((a3 + 7) & 0xFFFFFFFFFFFFFFF8LL) + a2,
                   (v17 = (__int64)v13[5] + v15) < v16)) {
    v4 = nn_diag_detail_AbortImpl_plt_856170(v4);
  LABEL_54:
    v26 = (__int64*)nn_diag_detail_AbortImpl_plt_856170(v4);
    goto LABEL_55;
  }
  v18 = v13[1];
  if (v18 != nullptr) {
    do {
      v19 = v18;
      v18 = (__int64*)*v18;
    } while (v18 != nullptr);
  }
  else {
    v20 = v13;
    do {
      v19 = v20[2];
      v14 = v20 == (__int64**)*v19;
      v20 = (__int64**)v19;
    } while (!v14);
  }
  if ((__int64**)v3[1] == v13) {
    v3[1] = (__int64)v19;
  }
  --v3[4];
  nn_fs_dcfe0_alt1();
  result = (__int64*)(*(__int64 (**)(__int64, __int64**, __int64, __int64))(
      *(_QWORD*)v3[3] + 24LL))(v3[3], v13, 48, 16);
  v10 = a2 <= v15;
  v21 = a2 - v15;
  if (!v10) {
    v22 = *v5;
    v23 = v5;
    v24 = v5;
    if (*v5 != nullptr) {
      do {
        while (1) {
          v24 = (__int64**)v22;
          v25 = v22[4];
          if (v15 >= v25) {
            break;
          }
          v22 = *v24;
          v23 = v24;
          if (*v24 == nullptr) {
            goto LABEL_33;
          }
        }
        if (v25 >= v15) {
          goto LABEL_37;
        }
        v22 = v24[1];
      } while (v22 != nullptr);
      v23 = v24 + 1;
    }
  LABEL_33:
    v26 = (__int64*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)v3[3] + 16LL))(v3[3], 48, 16);
    if (v26 != nullptr) {
      v26[4] = v15;
      v26[5] = v21;
      *v26 = 0;
      v26[1] = 0;
      v27 = v26;
      v26[2] = (__int64)v24;
      *v23 = v26;
      v28 = *(_QWORD*)v3[1];
      if (v28 != 0) {
        v3[1] = v28;
        v27 = *v23;
      }
      result = nn_fs_dc120((__int64*)v3[2], v27);
      ++v3[4];
      goto LABEL_37;
    }
  LABEL_55:
    v32 = (__int64*)nn_diag_detail_AbortImpl_plt_856170(v26);
    goto LABEL_56;
  }
LABEL_37:
  if (v17 > v16) {
    v29 = *v5;
    v30 = v5;
    if (*v5 != nullptr) {
      do {
        while (1) {
          v30 = (__int64**)v29;
          v31 = v29[4];
          if (v16 >= v31) {
            break;
          }
          v29 = *v30;
          v5 = v30;
          if (*v30 == nullptr) {
            goto LABEL_45;
          }
        }
        if (v31 >= v16) {
          goto LABEL_49;
        }
        v29 = v30[1];
      } while (v29 != nullptr);
      v5 = v30 + 1;
    }
  LABEL_45:
    v32 = (__int64*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)v3[3] + 16LL))(v3[3], 48, 16);
    if (v32 != nullptr) {
      v32[4] = v16;
      v32[5] = v17 - v16;
      *v32 = 0;
      v32[1] = 0;
      v33 = v32;
      v32[2] = (__int64)v30;
      *v5 = v32;
      v34 = *(_QWORD*)v3[1];
      if (v34 != 0) {
        v3[1] = v34;
        v33 = *v5;
      }
      result = nn_fs_dc120((__int64*)v3[2], v33);
      ++v3[4];
      goto LABEL_49;
    }
  LABEL_56:
    nn_diag_detail_AbortImpl_plt_856170(v32);
    __udf(0);
  }
LABEL_49:
  v35 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if (v3[5] > v35) {
    v35 = v3[5];
  }
  v3[5] = v35;
  return result;
}

__int64* nn_fs_dcfe0(__int64* result, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  int v6;
  __int64* v7;
  int v8;
  __int64** v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64** v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64** v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64* v25;
  __int64 v26;
  __int64** v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64** v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64** v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64** v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;

  v2 = *a2;
  v3 = a2;
  if (*a2 != 0) {
    v4 = (__int64*)a2[1];
    if (v4 == nullptr) {
      v3 = a2;
      v5 = (__int64**)a2[2];
      v6 = 0;
      *(_QWORD*)(v2 + 16) = v5;
      if (a2 == *v5) {
        goto LABEL_10;
      }
    LABEL_6:
      v5[1] = (__int64*)v2;
      v7 = *(__int64**)v3[2];
      v8 = *((unsigned __int8*)v3 + 24);
      if (v3 == a2) {
        goto LABEL_7;
      }
    LABEL_16:
      v9 = (__int64**)a2[2];
      v3[2] = (__int64)v9;
      if (a2 == *v9) {
        *v9 = v3;
        v33 = *a2;
        *v3 = *a2;
        *(_QWORD*)(v33 + 16) = v3;
        v11 = a2[1];
        v3[1] = v11;
        if (v11 == 0) {
        LABEL_19:
          if (result == a2) {
            result = v3;
          }
          *((_BYTE*)v3 + 24) = *((_BYTE*)a2 + 24);
          if (result == nullptr) {
            return result;
          }
          goto LABEL_22;
        }
      }
      else {
        v9[1] = v3;
        v10 = *a2;
        *v3 = *a2;
        *(_QWORD*)(v10 + 16) = v3;
        v11 = a2[1];
        v3[1] = v11;
        if (v11 == 0) {
          goto LABEL_19;
        }
      }
      *(_QWORD*)(v11 + 16) = v3;
      goto LABEL_19;
    }
    do {
      v3 = v4;
      v4 = (__int64*)*v4;
    } while (v4 != nullptr);
  }
  v2 = v3[1];
  if (v2 == 0) {
    v5 = (__int64**)v3[2];
    v6 = 1;
    if (v3 == *v5) {
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  v5 = (__int64**)v3[2];
  v6 = 0;
  *(_QWORD*)(v2 + 16) = v5;
  if (v3 != *v5) {
    goto LABEL_6;
  }
LABEL_10:
  *v5 = (__int64*)v2;
  if (v3 == result) {
    v7 = nullptr;
    result = (__int64*)v2;
    v8 = *((unsigned __int8*)v3 + 24);
    if (v3 != a2) {
      goto LABEL_16;
    }
  }
  else {
    v7 = *(__int64**)(v3[2] + 8);
    v8 = *((unsigned __int8*)v3 + 24);
    if (v3 != a2) {
      goto LABEL_16;
    }
  }
LABEL_7:
  if (result == nullptr) {
    return result;
  }
LABEL_22:
  if (v8 == 0) {
    return result;
  }
  if (v6 == 0) {
    *(_BYTE*)(v2 + 24) = 1;
    return result;
  }
  while (1) {
    v16 = v7[2];
    if (v7 == *(__int64**)v16) {
      break;
    }
    if ((v7[3] & 1) == 0) {
      *((_BYTE*)v7 + 24) = 1;
      *(_BYTE*)(v16 + 24) = 0;
      v17 = v7[2];
      v18 = *(__int64**)(v17 + 8);
      v19 = *v18;
      *(_QWORD*)(v17 + 8) = *v18;
      if (v19 != 0) {
        *(_QWORD*)(v19 + 16) = v17;
      }
      v20 = *(__int64***)(v17 + 16);
      v18[2] = (__int64)v20;
      if ((__int64*)v17 == *v20) {
        *v20 = v18;
      }
      else {
        v20[1] = v18;
      }
      *v18 = v17;
      *(_QWORD*)(v17 + 16) = v18;
      if (result == (__int64*)*v7) {
        result = v7;
      }
      v7 = *(__int64**)(*v7 + 8);
    }
    v25 = (__int64*)*v7;
    if (*v7 != 0 && *((_BYTE*)v25 + 24) != 1) {
      v26 = v7[1];
      if (v26 == 0) {
        goto LABEL_76;
      }
    LABEL_75:
      if (*(_BYTE*)(v26 + 24) == 1) {
      LABEL_76:
        *((_BYTE*)v25 + 24) = 1;
        *((_BYTE*)v7 + 24) = 0;
        v34 = (__int64*)*v7;
        v35 = *(_QWORD*)(*v7 + 8);
        *v7 = v35;
        if (v35 != 0) {
          *(_QWORD*)(v35 + 16) = v7;
        }
        v36 = (__int64**)v7[2];
        v34[2] = (__int64)v36;
        if (v7 == *v36) {
          *v36 = v34;
        }
        else {
          v36[1] = v34;
        }
        v34[1] = (__int64)v7;
        v7[2] = (__int64)v34;
      }
      else {
        v34 = v7;
      }
      v37 = v34[2];
      *((_BYTE*)v34 + 24) = *(_BYTE*)(v37 + 24);
      *(_BYTE*)(v37 + 24) = 1;
      *(_BYTE*)(v34[1] + 24) = 1;
      v38 = v34[2];
      v39 = *(__int64**)(v38 + 8);
      v40 = *v39;
      *(_QWORD*)(v38 + 8) = *v39;
      if (v40 != 0) {
        *(_QWORD*)(v40 + 16) = v38;
      }
      v41 = *(__int64***)(v38 + 16);
      v39[2] = (__int64)v41;
      if ((__int64*)v38 == *v41) {
        *v41 = v39;
      }
      else {
        v41[1] = v39;
      }
      *v39 = v38;
      *(_QWORD*)(v38 + 16) = v39;
      return result;
    }
    v26 = v7[1];
    if (v26 != 0 && *(_BYTE*)(v26 + 24) != 1) {
      goto LABEL_75;
    }
    *((_BYTE*)v7 + 24) = 0;
    v12 = (__int64*)v7[2];
    if (v12 == result || (v12[3] & 1) == 0) {
      goto LABEL_73;
    }
  LABEL_29:
    v14 = (__int64**)v12[2];
    v15 = v12 == *v14;
    v7 = v14[v15];
  }
  if ((v7[3] & 1) == 0) {
    *((_BYTE*)v7 + 24) = 1;
    *(_BYTE*)(v16 + 24) = 0;
    v21 = (_QWORD*)v7[2];
    v22 = *v21;
    v23 = *(_QWORD*)(*v21 + 8LL);
    *v21 = v23;
    if (v23 != 0) {
      *(_QWORD*)(v23 + 16) = v21;
    }
    v24 = (_QWORD*)v21[2];
    *(_QWORD*)(v22 + 16) = v24;
    if (v21 == (_QWORD*)*v24) {
      *v24 = v22;
    }
    else {
      v24[1] = v22;
    }
    *(_QWORD*)(v22 + 8) = v21;
    v21[2] = v22;
    v27 = (__int64**)v7[1];
    if (result == (__int64*)v27) {
      result = v7;
    }
    v7 = *v27;
  }
  v28 = *v7;
  if (*v7 != 0 && *(_BYTE*)(v28 + 24) != 1) {
    goto LABEL_81;
  }
  v29 = v7[1];
  if (v29 == 0 || *(_BYTE*)(v29 + 24) == 1) {
    *((_BYTE*)v7 + 24) = 0;
    v12 = (__int64*)v7[2];
    if (*((_BYTE*)v12 + 24) != 1 || v12 == result) {
    LABEL_73:
      *((_BYTE*)v12 + 24) = 1;
      return result;
    }
    goto LABEL_29;
  }
  if (v28 == 0) {
    goto LABEL_66;
  }
  if (*(_BYTE*)(v28 + 24) == 1) {
    v29 = v7[1];
  LABEL_66:
    *(_BYTE*)(v29 + 24) = 1;
    *((_BYTE*)v7 + 24) = 0;
    v30 = (__int64*)v7[1];
    v31 = *v30;
    v7[1] = *v30;
    if (v31 != 0) {
      *(_QWORD*)(v31 + 16) = v7;
    }
    v32 = (__int64**)v7[2];
    v30[2] = (__int64)v32;
    if (v7 == *v32) {
      *v32 = v30;
    }
    else {
      v32[1] = v30;
    }
    *v30 = (__int64)v7;
    v7[2] = (__int64)v30;
  }
  else {
  LABEL_81:
    v30 = v7;
  }
  v42 = v30[2];
  *((_BYTE*)v30 + 24) = *(_BYTE*)(v42 + 24);
  *(_BYTE*)(v42 + 24) = 1;
  *(_BYTE*)(*v30 + 24) = 1;
  v43 = (_QWORD*)v30[2];
  v44 = *v43;
  v45 = *(_QWORD*)(*v43 + 8LL);
  *v43 = v45;
  if (v45 != 0) {
    *(_QWORD*)(v45 + 16) = v43;
  }
  v46 = (_QWORD*)v43[2];
  *(_QWORD*)(v44 + 16) = v46;
  if (v43 == (_QWORD*)*v46) {
    *v46 = v44;
  }
  else {
    v46[1] = v44;
  }
  *(_QWORD*)(v44 + 8) = v43;
  v43[2] = v44;
  return result;
}

__int64 nn_fs_dd460(__int64 a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64** v11;
  __int64** v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  bool v20;
  __int64* v21;

  --*(_DWORD*)(a1 + 56);
  if ((*(_BYTE*)(*a2 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(*a2 + 48);
  }
  else {
    v4 = *a2 + 33;
  }
  v5 = v4 + strnlen_plt(v4, 768);
  do {
    v6 = v5;
    if (v5 <= v4) {
      break;
    }
    --v5;
  } while (*(_BYTE*)(v6 - 1) != 47);
  *(_QWORD*)(a1 + 64) -=
      ((unsigned int)strnlen_plt(v6, 768) + 35LL) & 0x1FFFFFFFCLL;
  v7 = *a2;
  v8 = *(_QWORD*)(*a2 + 72);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v7 + 64);
    v11 = (__int64**)(a1 + 88);
    v10 = *(__int64**)(a1 + 88);
    if (v10 != nullptr) {
      while (1) {
        while (1) {
          v12 = (__int64**)v10;
          v13 = v10[4];
          if (v9 >= v13) {
            break;
          }
          v10 = *v12;
          v11 = v12;
          if (*v12 == nullptr) {
            goto LABEL_15;
          }
        }
        if (v13 >= v9) {
          break;
        }
        v10 = v12[1];
        if (v10 == nullptr) {
          v11 = v12 + 1;
          goto LABEL_15;
        }
      }
    }
    else {
      v12 = (__int64**)(a1 + 88);
    LABEL_15:
      v14 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a1 + 96) + 16LL))(*(_QWORD*)(a1 + 96), 48, 16);
      if (v14 == nullptr) {
        nn_diag_detail_AbortImpl_plt_856170(0);
        __udf(0);
      }
      *v14 = 0;
      v14[1] = 0;
      v14[2] = (__int64)v12;
      v15 = v14;
      v14[4] = v9;
      v14[5] = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      *v11 = v14;
      v16 = **(_QWORD**)(a1 + 80);
      if (v16 != 0) {
        *(_QWORD*)(a1 + 80) = v16;
        v15 = *v11;
      }
      nn_fs_dc120(*(__int64**)(a1 + 88), v15);
      ++*(_QWORD*)(a1 + 104);
      v7 = *a2;
    }
  }
  v17 = *(_QWORD**)(v7 + 8);
  if (v17 != nullptr) {
    do {
      v18 = v17;
      v17 = (_QWORD*)*v17;
    } while (v17 != nullptr);
  }
  else {
    v19 = (_QWORD*)v7;
    do {
      v18 = (_QWORD*)v19[2];
      v20 = v19 == (_QWORD*)*v18;
      v19 = v18;
    } while (!v20);
  }
  if (*(_QWORD*)(a1 + 8) == v7) {
    *(_QWORD*)(a1 + 8) = v18;
  }
  v21 = *(__int64**)(a1 + 16);
  --*(_QWORD*)(a1 + 32);
  nn_fs_dcfe0(v21, (__int64*)v7);
  if ((*(_BYTE*)(v7 + 32) & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(v7 + 56) + 24LL))(
        *(_QWORD*)(v7 + 56), *(_QWORD*)(v7 + 48),
        *(_QWORD*)(v7 + 32) & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(a1 + 24) + 24LL))(*(_QWORD*)(a1 + 24), v7, 88, 16);
}

__int64 nn_fs_dd680(__int64 a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  bool v11;
  __int64* v12;

  --*(_DWORD*)(a1 + 40);
  if ((*(_BYTE*)(*a2 + 32) & 1) != 0) {
    v4 = *(_QWORD*)(*a2 + 48);
  }
  else {
    v4 = *a2 + 33;
  }
  v5 = v4 + strnlen_plt(v4, 768);
  do {
    v6 = v5;
    if (v5 <= v4) {
      break;
    }
    --v5;
  } while (*(_BYTE*)(v6 - 1) != 47);
  *(_QWORD*)(a1 + 48) -=
      ((unsigned int)strnlen_plt(v6, 768) + 27LL) & 0x1FFFFFFFCLL;
  v7 = *a2;
  v8 = *(_QWORD**)(v7 + 8);
  if (v8 != nullptr) {
    do {
      v9 = v8;
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  }
  else {
    v10 = (_QWORD*)v7;
    do {
      v9 = (_QWORD*)v10[2];
      v11 = v10 == (_QWORD*)*v9;
      v10 = v9;
    } while (!v11);
  }
  if (*(_QWORD*)(a1 + 8) == v7) {
    *(_QWORD*)(a1 + 8) = v9;
  }
  v12 = *(__int64**)(a1 + 16);
  --*(_QWORD*)(a1 + 32);
  nn_fs_dcfe0(v12, (__int64*)v7);
  if ((*(_BYTE*)(v7 + 32) & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(v7 + 56) + 24LL))(
        *(_QWORD*)(v7 + 56), *(_QWORD*)(v7 + 48),
        *(_QWORD*)(v7 + 32) & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      **(_QWORD**)(a1 + 24) + 24LL))(*(_QWORD*)(a1 + 24), v7, 88, 16);
}

__int64 nn_fs_dd7e0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned int v36;
  unsigned __int8* v38;
  unsigned __int64 v39;
  unsigned __int8* v40;
  signed __int64 v41;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  bool v46;
  signed __int64 v47;
  char* v48;
  unsigned int v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  unsigned __int64 v56;
  char* v57;
  signed __int64 v58;
  char* v59;
  signed __int64 v60;
  __int64 v61;
  unsigned int v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  int v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int8* v69;
  __int64 v70;
  char v71;
  __int64 v72;
  _QWORD v73[2];
  unsigned __int8* v74;
  __int64 v75;
  _QWORD v76[2];
  unsigned __int8* v77;
  __int64 v78;
  __int64 v79;
  _QWORD v80[2];
  unsigned __int8* v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int8* v89;
  __int64 v90;

  v6 = nn_fs_Path_GetString_plt(a2);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = v6;
  v90 = v7;
  v9 = strlen_plt(v6);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_135:
    nn_fs_dc4d0_alt1();
  }
  v10 = v9;
  v88 = 0;
  v89 = nullptr;
  v87 = 0;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 16LL))(
        v7, v12, 16);
    if (v13 == 0) {
      v21 = nn_diag_detail_AbortImpl_plt_856170(0);
      goto LABEL_137;
    }
    v11 = (char*)v13;
    v88 = v10;
    v89 = (unsigned __int8*)v13;
    v87 = v12 | 1;
    goto LABEL_10;
  }
  LOBYTE(v87) = 2 * v9;
  v11 = (char*)&v87 + 1;
  if (v9 != 0) {
  LABEL_10:
    memmove_plt(v11, v8, v10);
  }
  v11[v10] = 0;
  v84 = 0;
  v85 = nullptr;
  v83 = 0;
  v14 = nn_fs_Path_GetString_plt(a2);
  v15 = *(_QWORD*)(a1 + 24);
  v16 = v14;
  v86 = v15;
  v17 = strlen_plt(v14);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_135;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v21 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v15 + 16LL))(
        v15, v20, 16);
    if (v21 != 0) {
      v19 = (char*)v21;
      v84 = v18;
      v85 = (char*)v21;
      v83 = v20 | 1;
      goto LABEL_20;
    }
  LABEL_137:
    v31 = nn_diag_detail_AbortImpl_plt_856170(v21);
    goto LABEL_138;
  }
  LOBYTE(v83) = 2 * v17;
  v19 = (char*)&v83 + 1;
  if (v17 != 0) {
  LABEL_20:
    memmove_plt(v19, v16, v18);
  }
  v19[v18] = 0;
  v22 = v84;
  v23 = v85;
  if ((v83 & 1) != 0) {
    v24 = v85;
  }
  else {
    v24 = (char*)&v83 + 1;
  }
  if ((v83 & 1) != 0) {
    v25 = v84;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v83 >> 1;
  }
  if (v24[v25 - 1] != 47) {
    if ((v83 & 1) != 0) {
      v27 = v83 & 0xFFFFFFFFFFFFFFFELL;
      if (v84 != (v83 & 0xFFFFFFFFFFFFFFFELL) - 1) {
        v30 = v85;
      LABEL_47:
        v84 = v22 + 1;
        goto LABEL_48;
      }
      if (v84 > 0x7FFFFFFFFFFFFFF2LL) {
        v26 = -9;
      LABEL_43:
        v31 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v86 +
                                                          16LL))(v86, v26, 16);
        if (v31 != 0) {
          v30 = (char*)v31;
          memmove_plt(v31, v23, v22);
          if (v27 != 23) {
            (*(void (**)(__int64, char*, unsigned __int64, __int64))(
                *(_QWORD*)v86 + 24LL))(v86, v23, v27, 16);
          }
          v85 = v30;
          v83 = v26 | 1;
          goto LABEL_47;
        }
      LABEL_138:
        v42 = nn_diag_detail_AbortImpl_plt_856170(v31);
      LABEL_139:
        nn_detail_UnexpectedDefaultImpl_plt_857150(v42);
        __udf(0);
      }
      v28 = (2 * v84) | 7;
      if (v28 == 23) {
        v29 = 26;
      }
      else {
        v29 = v28 + 1;
      }
      if (v84 >= 0xC) {
        v26 = v29;
      }
      else {
        v26 = 23;
      }
    }
    else {
      if ((unsigned __int8)v83 != 44) {
        v22 = (unsigned __int64)(unsigned __int8)v83 >> 1;
        v30 = (char*)&v83 + 1;
        LOBYTE(v83) = v83 + 2;
      LABEL_48:
        *(_WORD*)&v30[v22] = 47;
        goto LABEL_49;
      }
      v26 = 48;
      v22 = 22;
      v23 = (char*)&v83 + 1;
    }
    v27 = v22 + 1;
    goto LABEL_43;
  }
LABEL_49:
  v32 = v90;
  v33 = (unsigned __int8)v87;
  v82 = v90;
  if ((v87 & 1) != 0) {
    nn_fs_dcab0_alt1(v80, v89, v88);
    v34 = SdkRoutine_85af90(a1 + 40, v80);
    if ((v80[0] & 1) == 0) {
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v80[0] = v87;
  v80[1] = v88;
  v81 = v89;
  v34 = SdkRoutine_85af90(a1 + 40, v80);
  if ((v80[0] & 1) != 0) {
  LABEL_53:
    (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64))(
        *(_QWORD*)v82 + 24LL))(v82, v81, v80[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  }
LABEL_54:
  v35 = (_QWORD*)(a1 + 48);
  if (a1 + 48 == v34 || *(_DWORD*)(v34 + 80) != 0) {
    v36 = 514;
    if ((v83 & 1) != 0) {
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  v39 = v88;
  v38 = v89;
  v71 = a3;
  if ((v33 & 1) != 0) {
    v40 = v89;
  }
  else {
    v40 = (unsigned __int8*)&v87 + 1;
  }
  v69 = v89;
  v70 = a1;
  v68 = v88;
  v72 = v32;
  if ((v33 & 1) != 0) {
    v41 = v88;
  }
  else {
    v41 = v33 >> 1;
  }
  v79 = 0;
  v78 = v32;
  if ((v33 & 1) == 0) {
    goto LABEL_122;
  }
LABEL_68:
  nn_fs_dcab0_alt1(v76, v38, v39);
  v42 = SdkRoutine_85af90(a1 + 40, v76);
  v79 = v42;
  if ((v76[0] & 1) == 0) {
    goto LABEL_70;
  }
LABEL_69:
  (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64))(
      *(_QWORD*)v78 + 24LL))(v78, v77, v76[0] & 0xFFFFFFFFFFFFFFFELL, 16);
  v42 = v79;
  while (1) {
  LABEL_70:
    v43 = *(_QWORD**)(v42 + 8);
    if (v43 != nullptr) {
      do {
        v44 = v43;
        v43 = (_QWORD*)*v43;
      } while (v43 != nullptr);
    }
    else {
      do {
        v44 = *(_QWORD**)(v42 + 16);
        v46 = v42 == *v44;
        v42 = (__int64)v44;
      } while (!v46);
    }
    v79 = (__int64)v44;
    if (v44 != v35) {
      break;
    }
    v55 = v44;
  LABEL_99:
    if (v55 == v35) {
      goto LABEL_125;
    }
  LABEL_100:
    v56 = *((unsigned __int8*)v55 + 32);
    v57 = (char*)v55 + 33;
    v46 = (v56 & 1) == 0;
    v58 = v56 >> 1;
    if (!v46) {
      v57 = (char*)v55[6];
      v58 = v55[5];
    }
    v67 = v57;
    if ((v83 & 1) != 0) {
      v59 = v85;
    }
    else {
      v59 = (char*)&v83 + 1;
    }
    if ((v83 & 1) != 0) {
      v60 = v84;
    }
    else {
      v60 = (unsigned __int64)(unsigned __int8)v83 >> 1;
    }
    if (v60 != 0) {
      if (v58 < v60) {
        goto LABEL_125;
      }
      v61 = (__int64)v57;
      v62 = (unsigned __int8)*v59;
      v63 = &v57[v58];
      while (1) {
        v64 = memchr_plt(v61, v62, v58 - v60 + 1);
        if (v64 == 0) {
          goto LABEL_125;
        }
        v65 = v64;
        v42 = memcmp_plt(v64, v59, v60);
        if ((_DWORD)v42 == 0) {
          break;
        }
        v61 = v65 + 1;
        v58 = (signed __int64)&v63[-v65 - 1];
        if (v58 < v60) {
          goto LABEL_125;
        }
      }
      if ((char*)v65 == v63 || (char*)v65 != v67) {
        goto LABEL_125;
      }
    }
    v66 = *((_DWORD*)v55 + 20);
    if (v66 != 0) {
      a1 = v70;
      if (v66 != 1) {
        goto LABEL_139;
      }
      nn_fs_dd460_alt1(v70 + 32, &v79);
      v39 = v68;
      v38 = v69;
      v79 = 0;
      v78 = v72;
      if ((v33 & 1) != 0) {
        goto LABEL_68;
      }
    }
    else {
      a1 = v70;
      nn_fs_dd680_alt1(v70 + 32, &v79);
      v39 = v68;
      v38 = v69;
      v79 = 0;
      v78 = v72;
      if ((v33 & 1) != 0) {
        goto LABEL_68;
      }
    }
  LABEL_122:
    v76[0] = v87;
    v76[1] = v88;
    v77 = v89;
    v42 = SdkRoutine_85af90(a1 + 40, v76);
    v79 = v42;
    if ((v76[0] & 1) != 0) {
      goto LABEL_69;
    }
  }
  while (1) {
    v45 = *((unsigned __int8*)v44 + 32);
    v46 = (v45 & 1) == 0;
    v47 = v45 >> 1;
    if (v46) {
      v48 = (char*)v44 + 33;
    }
    else {
      v48 = (char*)v44[6];
    }
    if (!v46) {
      v47 = v44[5];
    }
    if (v41 != 0) {
      if (v47 < v41) {
        goto LABEL_125;
      }
      v49 = *v40;
      v50 = &v48[v47];
      v51 = (__int64)v48;
      while (1) {
        v52 = memchr_plt(v51, v49, v47 - v41 + 1);
        if (v52 == 0) {
          goto LABEL_125;
        }
        v53 = v52;
        v42 = memcmp_plt(v52, v40, v41);
        if ((_DWORD)v42 == 0) {
          break;
        }
        v51 = v53 + 1;
        v47 = (signed __int64)&v50[-v53 - 1];
        if (v47 < v41) {
          goto LABEL_125;
        }
      }
      if ((char*)v53 == v50 || (char*)v53 != v48) {
        goto LABEL_125;
      }
    }
    if (v48[v41] == 47) {
      break;
    }
    v54 = (_QWORD*)v44[1];
    if (v54 != nullptr) {
      do {
        v55 = v54;
        v54 = (_QWORD*)*v54;
      } while (v54 != nullptr);
    }
    else {
      do {
        v55 = (_QWORD*)v44[2];
        v46 = v44 == (_QWORD*)*v55;
        v44 = v55;
      } while (!v46);
    }
    v79 = (__int64)v55;
    v44 = v55;
    if (v55 == v35) {
      goto LABEL_99;
    }
  }
  v55 = v44;
  if (v44 != v35) {
    goto LABEL_100;
  }
LABEL_125:
  if ((v71 & 1) != 0) {
    v32 = v72;
    v75 = v72;
    if ((v33 & 1) != 0) {
      nn_fs_dcab0_alt1(v73, v69, v68);
    }
    else {
      v73[0] = v87;
      v73[1] = v88;
      v74 = v89;
    }
    v79 = SdkRoutine_85af90(v70 + 40, v73);
    if ((v73[0] & 1) != 0) {
      (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64))(
          *(_QWORD*)v75 + 24LL))(v75, v74, v73[0] & 0xFFFFFFFFFFFFFFFELL, 16);
    }
    nn_fs_dd680_alt1(v70 + 32, &v79);
    v36 = 0;
    if ((v83 & 1) != 0) {
    LABEL_57:
      (*(void (**)(__int64, char*, unsigned __int64, __int64))(
          *(_QWORD*)v86 + 24LL))(v86, v85, v83 & 0xFFFFFFFFFFFFFFFELL, 16);
    }
  }
  else {
    v32 = v72;
    v36 = 0;
    if ((v83 & 1) != 0) {
      goto LABEL_57;
    }
  }
LABEL_58:
  if ((v33 & 1) != 0) {
    (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64))(
        *(_QWORD*)v32 + 24LL))(v32, v89, v87 & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  return v36;
}

__int64 nn_fs_ddf10(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = SdkData_e86d68 + 16;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_fs_ddf40(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  v1 = (_QWORD*)a1[1];
  *a1 = SdkData_e86d68 + 16;
  a1[1] = 0;
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 8LL))(
        (void*)v1, v1);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 24);
}

__int64 nn_fs_ddfa0(__int64* a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 result;
  __int64 v12;

  if ((a1[2] & 1) == 0) {
    return 3175426;
  }
  v5 = *a1;
  v12 = 0;
  result = (*(__int64 (**)(__int64*, __int64*))(v5 + 48))(a1, &v12);
  if ((_DWORD)result == 0) {
    if (v12 < a3) {
      return 1538562;
    }
    else {
      if (a5 >= v12 - a3) {
        a5 = v12 - a3;
      }
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)a1[1] + 16LL))(a1[1], a3, a4, a5);
      if ((_DWORD)result == 0) {
        *a2 = a5;
      }
    }
  }
  return result;
}

__int64 nn_fs_de080(__int64* a1, __int64 a2, __int64 a3, __int64 a4, _BYTE* a5)
{
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v13;

  v5 = *((_DWORD*)a1 + 4);
  if ((v5 & 2) == 0) {
    return 3175938;
  }
  v6 = *a1;
  v13 = 0;
  result = (*(__int64 (**)(__int64*, __int64*))(v6 + 48))(a1, &v13);
  if ((_DWORD)result == 0) {
    if ((v5 & 4) != 0 || v13 >= a4 + a2) {
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)a1[1] + 24LL))(a1[1], a2, a3, a4);
      if ((_DWORD)result == 0) {
        if ((*a5 & 1) != 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)a1[1] + 32LL))(a1[1]);
        }
        else {
          return 0;
        }
      }
    }
    else {
      return 3174914;
    }
  }
  return result;
}

__int64 nn_fs_de160(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 nn_fs_de170() { return 3225602; }

__int64 nn_fs_de180(__int64 result)
{
  *(_QWORD*)result = SdkData_e86d70 + 16;
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(result + 32) + 24LL))(
        *(_QWORD*)(result + 32), *(_QWORD*)(result + 24),
        *(_QWORD*)(result + 8) & 0xFFFFFFFFFFFFFFFELL, 16);
  }
  return result;
}

__int64 nn_fs_de1c0(__int64 a1)
{
  __int64 v1;

  *(_QWORD*)a1 = SdkData_e86d70 + 16;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v1 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD,
                                            unsigned __int64, __int64))(
        **(_QWORD**)(a1 + 32) + 24LL))(
        (void*)*(_QWORD**)(a1 + 32), *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 24),
        *(_QWORD*)(a1 + 8) & 0xFFFFFFFFFFFFFFFELL, 16);
    a1 = v1;
  }
  return nn_fs_detail_Deallocate_plt(a1, 72);
}

__int64 nn_fs_de240(__int64 a1, __int64* a2, __int64 a3, signed __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v9;
  _BYTE v11[784];

  v4 = a1 + 40;
  if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 56)) {
    *a2 = 0;
  }
  else {
    v6 = 1;
    if (a4 <= 1) {
      v9 = 1;
    }
    else {
      v9 = a4;
    }
    while (1) {
      memset_plt((void*)v11, nullptr, 784, a4);
      nn_fs_de3c0(a1, (__int64)v11, v4);
      if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 56)) {
        break;
      }
      memcpy_plt(a3, v11, 784);
      if (v9 == v6) {
        goto LABEL_11;
      }
      ++v6;
      a3 += 784;
      if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 56)) {
        *a2 = (unsigned int)(v6 - 1);
        return 0;
      }
    }
    v6 = (unsigned int)(v6 - 1);
  LABEL_11:
    *a2 = v6;
  }
  return 0;
}

__int64 nn_fs_de340(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v6;

  v2 = -1;
  v6 = *(_QWORD*)(a1 + 48);
  do {
    nn_fs_de3c0_alt1(a1, 0, &v6);
    ++v2;
  } while (v6 != *(_QWORD*)(a1 + 56));
  *a2 = v2;
  return 0;
}

__int64 nn_fs_de3c0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  signed __int64 v16;
  unsigned __int8* v17;
  signed __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  signed __int64 v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  bool v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  char* v32;
  char v33;
  int v34;
  int v35;
  bool v36;
  char v37;
  char* v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
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
  int v54;
  _BYTE* v55;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;

  v4 = result;
  v57 = result;
  v58 = (unsigned __int8*)(result + 9);
  while (1) {
    v5 = *(_QWORD**)a3;
    v6 = *(_QWORD**)(*(_QWORD*)a3 + 8LL);
    if (v6 != nullptr) {
      do {
        v7 = v6;
        v6 = (_QWORD*)*v6;
      } while (v6 != nullptr);
    }
    else {
      do {
        v7 = (_QWORD*)v5[2];
        v10 = v5 == (_QWORD*)*v7;
        v5 = v7;
      } while (!v10);
    }
    *(_QWORD*)a3 = v7;
    v8 = *(_QWORD**)(v4 + 56);
    if (v7 == v8) {
      return result;
    }
    v9 = *((unsigned __int8*)v7 + 32);
    v10 = (v9 & 1) == 0;
    v11 = v9 >> 1;
    if (v10) {
      v12 = v11;
    }
    else {
      v12 = v7[5];
    }
    v13 = *(unsigned __int8*)(v4 + 8);
    if (v10) {
      v14 = (__int64)v7 + 33;
    }
    else {
      v14 = v7[6];
    }
    v15 = (v13 & 1) == 0;
    v16 = v13 >> 1;
    if (v15) {
      v17 = v58;
    }
    else {
      v17 = *(unsigned __int8**)(v4 + 24);
    }
    if (v15) {
      v18 = v16;
    }
    else {
      v18 = *(_QWORD*)(v4 + 16);
    }
    if (v18 != 0) {
      if ((__int64)v12 >= v18) {
        v19 = *v17;
        v20 = v14 + v12;
        v21 = v12;
        result = v14;
        do {
          result = memchr_plt(result, v19, v21 - v18 + 1);
          if (result == 0) {
            break;
          }
          v22 = result;
          result = memcmp_plt(result, v17, v18);
          if ((_DWORD)result == 0) {
            if (v22 == v20 || v22 != v14) {
              break;
            }
            goto LABEL_29;
          }
          result = v22 + 1;
          v21 = v20 - (v22 + 1);
        } while (v21 >= v18);
      }
      *(_QWORD*)a3 = v8;
      return result;
    }
  LABEL_29:
    v4 = v57;
    if (*(_BYTE*)(v14 + v18) == 47) {
      v23 = v7[7];
      v24 = v18 + 1;
      v59 = 0;
      v60 = 0;
      v25 = v12 >= v18 + 1;
      v26 = v12 - (v18 + 1);
      v61 = nullptr;
      v62 = v23;
      if (!v25) {
        nn_fs_dc820_alt1();
      }
      if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
        nn_fs_dc4d0_alt1();
      }
      if (v26 >= 0x17) {
        if ((v26 | 7) == 0x17) {
          v28 = 26;
        }
        else {
          v28 = (v26 | 7) + 1;
        }
        v29 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v23 +
                                                          16LL))(v23, v28, 16);
        if (v29 == 0) {
          nn_diag_detail_AbortImpl_plt_856170(0);
          __udf(0);
        }
        v27 = (char*)v29;
        v60 = v26;
        v61 = (char*)v29;
        v59 = v28 | 1;
      LABEL_41:
        memmove_plt(v27, v14 + v24, v26);
        goto LABEL_42;
      }
      v27 = (char*)&v59 + 1;
      LOBYTE(v59) = 2 * v26;
      if (v12 != v24) {
        goto LABEL_41;
      }
    LABEL_42:
      v27[v26] = 0;
      v30 = v59 & 1;
      if (v30 != 0) {
        v31 = v60;
      }
      else {
        v31 = (unsigned __int64)(unsigned __int8)v59 >> 1;
      }
      if ((v59 & 1) != 0) {
        v32 = v61;
      }
      else {
        v32 = (char*)&v59 + 1;
      }
      result = memchr_plt(v32, 47, v31);
      if (result == 0 || result - (_QWORD)v32 == -1) {
        v34 = *(_DWORD*)(v57 + 64);
        v35 = *((_DWORD*)v7 + 20);
        if ((v34 & 1) == 0 || v35 != 0) {
          v36 = (v34 & 2) != 0 && v35 == 1;
          v37 = !v36;
          v33 = v37 ^ 1;
          if (!v36 || a2 == 0) {
            goto LABEL_119;
          }
        }
        else if (a2 == 0) {
        LABEL_118:
          v33 = 1;
          goto LABEL_119;
        }
        *(_QWORD*)(a2 + 776) = v7[9];
        *(_BYTE*)(a2 + 772) = *((_DWORD*)v7 + 20);
        result = strnlen_plt(v32, 768);
        v38 = &v32[result];
        do {
          v39 = v38;
          if (v38 <= v32) {
            break;
          }
          --v38;
        } while (*(v39 - 1) != 47);
        v40 = 0;
        while (1) {
          v41 = &v39[v40];
          if (v39[v40] == 0) {
          LABEL_93:
            v55 = (_BYTE*)(a2 + v40);
            goto LABEL_117;
          }
          v42 = a2 + v40;
          *(_BYTE*)(a2 + v40) = v39[v40];
          if (v41[1] == 0) {
            v55 = (_BYTE*)(v42 + 1);
            goto LABEL_117;
          }
          *(_BYTE*)(v42 + 1) = v41[1];
          if (v41[2] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 2);
            goto LABEL_117;
          }
          *(_BYTE*)(v42 + 2) = v41[2];
          v43 = a2 + v40;
          if (v41[3] == 0) {
            v55 = (_BYTE*)(v43 + 3);
            goto LABEL_117;
          }
          *(_BYTE*)(v43 + 3) = v41[3];
          if (v41[4] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 4);
            goto LABEL_117;
          }
          *(_BYTE*)(v43 + 4) = v41[4];
          v44 = a2 + v40;
          if (v41[5] == 0) {
            v55 = (_BYTE*)(v44 + 5);
            goto LABEL_117;
          }
          *(_BYTE*)(v44 + 5) = v41[5];
          if (v41[6] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 6);
            goto LABEL_117;
          }
          *(_BYTE*)(v44 + 6) = v41[6];
          v45 = a2 + v40;
          if (v41[7] == 0) {
            v55 = (_BYTE*)(v45 + 7);
            goto LABEL_117;
          }
          *(_BYTE*)(v45 + 7) = v41[7];
          if (v41[8] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 8);
            goto LABEL_117;
          }
          *(_BYTE*)(v45 + 8) = v41[8];
          v46 = a2 + v40;
          if (v41[9] == 0) {
            v55 = (_BYTE*)(v46 + 9);
            goto LABEL_117;
          }
          *(_BYTE*)(v46 + 9) = v41[9];
          if (v41[10] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 10);
            goto LABEL_117;
          }
          *(_BYTE*)(v46 + 10) = v41[10];
          v47 = a2 + v40;
          if (v41[11] == 0) {
            v55 = (_BYTE*)(v47 + 11);
            goto LABEL_117;
          }
          *(_BYTE*)(v47 + 11) = v41[11];
          if (v41[12] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 12);
            goto LABEL_117;
          }
          *(_BYTE*)(v47 + 12) = v41[12];
          v48 = a2 + v40;
          if (v41[13] == 0) {
            v55 = (_BYTE*)(v48 + 13);
            goto LABEL_117;
          }
          *(_BYTE*)(v48 + 13) = v41[13];
          if (v41[14] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 14);
            goto LABEL_117;
          }
          *(_BYTE*)(v48 + 14) = v41[14];
          v49 = a2 + v40;
          if (v41[15] == 0) {
            v55 = (_BYTE*)(v49 + 15);
            goto LABEL_117;
          }
          *(_BYTE*)(v49 + 15) = v41[15];
          if (v41[16] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 16);
            goto LABEL_117;
          }
          *(_BYTE*)(v49 + 16) = v41[16];
          v50 = a2 + v40;
          if (v41[17] == 0) {
            v55 = (_BYTE*)(v50 + 17);
            goto LABEL_117;
          }
          *(_BYTE*)(v50 + 17) = v41[17];
          if (v41[18] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 18);
            goto LABEL_117;
          }
          *(_BYTE*)(v50 + 18) = v41[18];
          v51 = a2 + v40;
          if (v41[19] == 0) {
            v55 = (_BYTE*)(v51 + 19);
            goto LABEL_117;
          }
          *(_BYTE*)(v51 + 19) = v41[19];
          if (v41[20] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 20);
            goto LABEL_117;
          }
          *(_BYTE*)(v51 + 20) = v41[20];
          v52 = a2 + v40;
          if (v41[21] == 0) {
            v55 = (_BYTE*)(v52 + 21);
            goto LABEL_117;
          }
          *(_BYTE*)(v52 + 21) = v41[21];
          if (v41[22] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 22);
            goto LABEL_117;
          }
          *(_BYTE*)(v52 + 22) = v41[22];
          v53 = a2 + v40;
          v54 = (unsigned __int8)v41[23];
          if (v54 == 0) {
            break;
          }
          v40 += 24;
          *(_BYTE*)(v53 + 23) = v54;
          if ((_DWORD)v40 == 768) {
            goto LABEL_93;
          }
        }
        v55 = (_BYTE*)(v53 + 23);
      LABEL_117:
        *v55 = 0;
        v30 = v59 & 1;
        goto LABEL_118;
      }
      v33 = 0;
    LABEL_119:
      if (v30 != 0) {
        result = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64))(
            *(_QWORD*)v62 + 24LL))(v62, v61, v59 & 0xFFFFFFFFFFFFFFFELL, 16);
      }
      if ((v33 & 1) != 0) {
        return result;
      }
    }
  }
}

__int64 nn_fs_de900(__int64 a1, __int64* a2, __int64 a3, unsigned __int64 a4)
{
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  bool v15;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  bool v25;
  bool v26;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
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
  _QWORD* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  _BYTE* v54;
  __int64 v55;
  char* v56;
  _QWORD* v57;
  _QWORD* v58;
  _BYTE* v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 result;
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
  __int64 v74;
  __int64 v75;
  struct {
    __int64 v76;
    __int64 v77;
    _BYTE* v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
  } v76_;
  __int64 v83;
  struct {
    _QWORD v84[4];
    char v85;
    char gap129_[7];
    __int64 v86;
    __int64 v87;
  } v84_;
  struct {
    _QWORD v88[4];
    char v89;
    char gap185_[7];
    __int64 v90;
    __int64 v91;
  } v88_;
  struct {
    _QWORD v92[4];
    char v93;
    char gap241_[7];
    __int64 v94;
    __int64 v95;
  } v92_;
  struct {
    _QWORD v96[4];
    char v97;
    char gap297_[7];
    __int64 v98;
    __int64 v99;
  } v96_;
  struct {
    _QWORD v100[4];
    char v101;
    char gap353_[7];
    __int64 v102;
    __int64 v103;
  } v100_;
  struct {
    _QWORD v104[4];
    char v105;
    char gap409_[7];
    __int64 v106;
    __int64 v107;
  } v104_;
  _QWORD v108[3];
  _QWORD v109[3];
  _QWORD v110[3];
  _QWORD v111[3];
  struct {
    char v112[8];
    __int64 v113;
    char gap544_[40];
    __int64 v114;
    __int64 v115;
    char gap600_[40];
    __int64 v116;
    char gap648_[24];
    __int64 v117;
    char gap680_[40];
    __int64 v118;
    __int64 v119;
    char gap736_[40];
    __int64 v120;
  } v112_;
  int v121;
  int v122;
  _QWORD v123[3];

  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt((void*)v112_.v112, nullptr, 272, a4),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_fs_HierarchicalRomFileTable_HierarchicalRomFileTable_plt(v112_.v112),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v6 = *(_DWORD*)(a1 + 72);
  if (v6 >= 3) {
    if ((unsigned int)v6 >= 0x14) {
      v7 = v6 - 1;
      while (1) {
        do {
          v8 = v6;
          v9 = v7++;
          v10 = v9 - 17 * (v6++ / 0x11u);
        } while (v10 == -1);
        if (v9 - 13 * (v8 / 0xD) != -1 && v9 - 11 * (v8 / 0xB) != -1) {
          v11 = v8;
          v12 = -7 * (v8 / 7);
          v13 = v9 - 3 * (v8 / 3);
          v14 = v9 + v12 == -1 || v9 - 5 * (v11 / 5) == -1;
          v15 = v14 || (v7 & 1) == 0;
          if (!v15 && v13 != -1) {
            break;
          }
        }
      }
    }
    else {
      v7 = v6 | 1;
    }
  }
  else {
    v7 = 3;
  }
  v17 = *(_DWORD*)(a1 + 88);
  if (v17 >= 3) {
    if ((unsigned int)v17 >= 0x14) {
      v18 = v17 - 1;
      while (1) {
        do {
          v19 = v17;
          v20 = v18++;
          v21 = v20 - 17 * (v17++ / 0x11u);
        } while (v21 == -1);
        if (v20 - 13 * (v19 / 0xD) != -1 && v20 - 11 * (v19 / 0xB) != -1) {
          v22 = v19;
          v23 = -7 * (v19 / 7);
          v24 = v20 - 3 * (v19 / 3);
          v25 = v20 + v23 == -1 || v20 - 5 * (v22 / 5) == -1;
          v26 = v25 || (v18 & 1) == 0;
          if (!v26 && v24 != -1) {
            break;
          }
        }
      }
    }
    else {
      v18 = v17 | 1;
    }
  }
  else {
    v18 = 3;
  }
  v28 = *(_QWORD*)(a1 + 80);
  v75 = *(_QWORD*)(a1 + 96);
  v29 = (_QWORD*)nn_fs_detail_Allocate_plt(72),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v30 = (__int64)v29;
  if (v29 != nullptr) {
    v29[6] = 0;
    v29[7] = 0;
    v29[4] = 0;
    v29[5] = 0;
    v29[2] = 0;
    v29[3] = 0;
    *v29 = 0;
    v29[1] = 0;
  }
  v31 = (_QWORD*)(a1 + 24);
  *(_BYTE*)v29 = 0;
  v29[1] = a1 + 24;
  v29[2] = 0;
  v29[3] = 512;
  v32 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 24) + 16LL))(*(_QWORD*)(a1 + 24), 512, 16),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v32 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(0),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v33 = 4LL * v7;
  v34 = 4LL * v18;
  v35 = (_QWORD*)v32;
  *(_QWORD*)(v30 + 16) = v32;
  v36 = v34 + v33 + v28;
  v37 = v36 + v75;
  *(_BYTE*)v30 = 1;
  if (*(_BYTE*)(v30 + 32) == 1) {
    v38 = *(_QWORD*)(v30 + 48);
    if (v38 != 0) {
      (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
          ***(_QWORD***)(v30 + 40) + 24LL))(**(_QWORD**)(v30 + 40), v38,
                                            *(_QWORD*)(v30 + 56), 16),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v37 = v36 + v75;
    }
  }
  *(_BYTE*)(v30 + 32) = 0;
  *(_QWORD*)(v30 + 40) = v31;
  *(_QWORD*)(v30 + 48) = 0;
  *(_QWORD*)(v30 + 56) = v37;
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v31 + 16LL))(*v31),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v39 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(0),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  *(_QWORD*)(v30 + 48) = v39;
  v40 = SdkData_e86d00;
  v111[2] = 4LL * v7;
  *(_BYTE*)(v30 + 32) = 1;
  v41 = SdkData_e86ce0;
  v110[1] = v39 + v33;
  v110[2] = v28;
  v73 = v33 + v28;
  v74 = v34 + v33 + v28;
  v104_.v104[2] = 0;
  v104_.v104[3] = 4LL * v7;
  v109[1] = v39 + v33 + v28;
  v104_.v105 = 0;
  v104_.v106 = 0;
  v104_.v107 = 0;
  v100_.v100[2] = 0;
  v100_.v100[3] = v34;
  v100_.v101 = 0;
  v100_.v102 = 0;
  v100_.v103 = 0;
  v42 = SdkData_e86ce0 + 16;
  v111[0] = v40 + 16;
  v111[1] = v39;
  v109[2] = v34;
  v110[0] = v40 + 16;
  v108[2] = v75;
  v109[0] = v40 + 16;
  v108[0] = v40 + 16;
  v108[1] = v39 + v36;
  v104_.v104[0] = SdkData_e86ce0 + 16;
  v104_.v104[1] = v111;
  v100_.v100[0] = SdkData_e86ce0 + 16;
  v100_.v100[1] = v109;
  LODWORD(v76_.v76) =
      nn_fs_HierarchicalRomFileTable_Format_plt(v104_.v104, v100_.v100),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((_DWORD)v76_.v76 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v76_.v76),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v43 = v100_.v103;
  v100_.v100[0] = v42;
  if (v100_.v103 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v100_.v103 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v43),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v44 = v104_.v107;
  v104_.v104[0] = v41 + 16;
  if (v104_.v107 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v104_.v107 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v44),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v96_.v96[2] = 0;
  v96_.v96[3] = v33;
  v96_.v97 = 0;
  v96_.v98 = 0;
  v96_.v99 = 0;
  v92_.v92[2] = 0;
  v92_.v92[3] = v28;
  v92_.v93 = 0;
  v92_.v94 = 0;
  v92_.v95 = 0;
  v96_.v96[0] = v41 + 16;
  v96_.v96[1] = v111;
  v88_.v88[2] = 0;
  v88_.v88[3] = v34;
  v88_.v89 = 0;
  v88_.v90 = 0;
  v88_.v91 = 0;
  v84_.v85 = 0;
  v84_.v86 = 0;
  v84_.v87 = 0;
  v92_.v92[0] = v41 + 16;
  v92_.v92[1] = v110;
  v88_.v88[0] = v41 + 16;
  v88_.v88[1] = v109;
  v84_.v84[0] = v41 + 16;
  v84_.v84[1] = v108;
  v84_.v84[2] = 0;
  v84_.v84[3] = v75;
  LODWORD(v76_.v76) = nn_fs_HierarchicalRomFileTable_Initialize_plt(
      v112_.v112, v96_.v96, v92_.v92, v88_.v88, v84_.v84),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((_DWORD)v76_.v76 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v76_.v76),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v45 = v84_.v87;
  v84_.v84[0] = v41 + 16;
  if (v84_.v87 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84_.v87 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v45),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v46 = v88_.v91;
  v88_.v88[0] = v41 + 16;
  if (v88_.v91 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88_.v91 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v46),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v47 = v92_.v95;
  v92_.v92[0] = v41 + 16;
  if (v92_.v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v92_.v95 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v47),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v48 = v96_.v99;
  v96_.v96[0] = v41 + 16;
  if (v96_.v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v96_.v99 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    std___1___shared_weak_count___release_weak_plt(v48),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v49 = nn_fs_HierarchicalRomFileTable_CreateRootDirectory_plt(v112_.v112),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  LODWORD(v76_.v76) = v49;
  if ((_DWORD)v49 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v76_.v76),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v50 = *(_QWORD**)(a1 + 40);
  v83 = 0xFFFFFFFFLL;
  if (v50 != (_QWORD*)(a1 + 48)) {
    do {
      v76_.v81 = 0;
      v76_.v82 = 0;
      v76_.v80 = 0;
      v51 = *((_BYTE*)v50 + 32);
      v76_.v76 = 0;
      v76_.v77 = 0;
      v52 = v50[7];
      v76_.v78 = nullptr;
      v76_.v79 = v52;
      if ((v51 & 1) != 0) {
        v49 = nn_fs_dcab0(&v76_.v76, v50[6], v50[5]),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v55 = v50[10];
        v76_.v81 = v50[9];
        v76_.v82 = v55;
        v76_.v80 = v50[8];
        if ((_DWORD)v55 == 0) {
        LABEL_84:
          if ((v76_.v76 & 1) != 0) {
            v59 = v76_.v78;
          }
          else {
            v59 = (char*)&v76_.v76 + 1;
          }
          v49 = nn_fs_df280(a1, (__int64)v112_.v112, v59),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          if ((v76_.v76 & 1) == 0) {
            goto LABEL_77;
          }
          goto LABEL_76;
        }
      }
      else {
        v53 = v50[5];
        v54 = (_BYTE*)v50[6];
        v76_.v76 = v50[4];
        v76_.v77 = v53;
        v76_.v78 = v54;
        v55 = v50[10];
        v76_.v81 = v50[9];
        v76_.v82 = v55;
        v76_.v80 = v50[8];
        if ((_DWORD)v55 == 0) {
          goto LABEL_84;
        }
      }
      if ((_DWORD)v55 != 1) {
        nn_diag_detail_AbortImpl_plt_856170(v49),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      v122 = 0;
      if ((v76_.v76 & 1) != 0) {
        v56 = v76_.v78;
      }
      else {
        v56 = (char*)&v76_.v76 + 1;
      }
      v123[0] = v76_.v80;
      v123[1] = v76_.v81;
      v49 = nn_fs_HierarchicalRomFileTable_CreateFile_plt(v112_.v112, &v122,
                                                          v56, v123, &v83),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v121 = v49;
      if ((_DWORD)v49 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v121),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      if ((v76_.v76 & 1) != 0) {
      LABEL_76:
        v49 = (*(__int64 (**)(__int64, _BYTE*, unsigned __int64, __int64))(
            *(_QWORD*)v76_.v79 + 24LL))(v76_.v79, v76_.v78,
                                        v76_.v76 & 0xFFFFFFFFFFFFFFFELL, 16),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
    LABEL_77:
      v57 = (_QWORD*)v50[1];
      if (v57 != nullptr) {
        do {
          v58 = v57;
          v57 = (_QWORD*)*v57;
        } while (v57 != nullptr);
      }
      else {
        do {
          v58 = (_QWORD*)v50[2];
          v14 = v50 == (_QWORD*)*v58;
          v50 = v58;
        } while (!v14);
      }
      v50 = v58;
    } while (v58 != (_QWORD*)(a1 + 48));
  }
  v60 = *(_QWORD*)(a1 + 144);
  v76_.v76 = 0;
  v123[0] = 0;
  *(_QWORD*)(v30 + 64) = ((v60 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 512;
  v61 = nn_fs_HierarchicalRomFileTable_QueryRomFileSystemSize_plt(
      v112_.v112, &v76_.v76, v123),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((_DWORD)v61 != 0 || v28 != v76_.v76 || v75 != v123[0]) {
    nn_diag_detail_AbortImpl_plt_856170(v61),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  result = memset_plt((void*)(v35 + 10), nullptr, 432, v62),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v35[2] = v33;
  v35[3] = v33;
  *v35 = 80;
  v35[1] = 0;
  v35[4] = v28;
  v35[5] = v73;
  v35[6] = v34;
  v35[7] = v74;
  v35[8] = v75;
  v35[9] = 512;
  v64 = *(_QWORD*)(v30 + 64);
  v35[1] = v64;
  v35[3] = v64 + v33;
  v35[5] = *(_QWORD*)(v30 + 64) + v73;
  v35[7] = *(_QWORD*)(v30 + 64) + v74;
  v65 = *a2;
  *a2 = v30;
  v66 = SdkData_e86ce0;
  if (v65 != 0) {
    if (*(_BYTE*)(v65 + 32) == 1) {
      v67 = *(_QWORD*)(v65 + 48);
      if (v67 != 0) {
        (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
            ***(_QWORD***)(v65 + 40) + 24LL))(**(_QWORD**)(v65 + 40), v67,
                                              *(_QWORD*)(v65 + 56), 16),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
    }
    if (*(_BYTE*)v65 == 1) {
      v68 = *(_QWORD*)(v65 + 16);
      if (v68 != 0) {
        (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
            ***(_QWORD***)(v65 + 8) + 24LL))(**(_QWORD**)(v65 + 8), v68,
                                             *(_QWORD*)(v65 + 24), 16),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
    }
    result = nn_fs_detail_Deallocate_plt(v65, 72),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v69 = v112_.v120;
  v112_.v119 = v66 + 16;
  if (v112_.v120 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v112_.v120 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    result = std___1___shared_weak_count___release_weak_plt(v69),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v70 = v112_.v118;
  v112_.v117 = v66 + 16;
  if (v112_.v118 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v112_.v118 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    result = std___1___shared_weak_count___release_weak_plt(v70),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v71 = v112_.v116;
  v112_.v115 = v66 + 16;
  if (v112_.v116 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v112_.v116 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    result = std___1___shared_weak_count___release_weak_plt(v71),
    v62 = COERCE_AS(__typeof__(v62),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v72 = v112_.v114;
  v112_.v113 = v66 + 16;
  if (v112_.v114 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v112_.v114 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    return std___1___shared_weak_count___release_weak_plt(v72);
  }
  return result;
}

__int64 nn_fs_df280(__int64 result, __int64 a2, _BYTE* a3)
{
  __int64 v5;
  unsigned __int8* v6;
  int v7;
  struct {
    unsigned __int8 v8[16];
    unsigned __int8* v9;
    __int64 v10;
  } v8_;

  if (a3 != nullptr && (*a3 != 47 || a3[1] != 0)) {
    v5 = result;
    nn_fs_dc600((void*)(v8_.v8), result, (__int64)a3);
    if ((v8_.v8[0] & 1) != 0) {
      v6 = v8_.v9;
    }
    else {
      v6 = &v8_.v8[1];
    }
    nn_fs_df280(v5, a2, v6);
    if ((v8_.v8[0] & 1) != 0) {
      (*(void (**)(__int64, unsigned __int8*, unsigned __int64, __int64))(
          *(_QWORD*)v8_.v10 + 24LL))(
          v8_.v10, v8_.v9, *(_QWORD*)v8_.v8 & 0xFFFFFFFFFFFFFFFELL, 16);
    }
    *(_QWORD*)v8_.v8 = 0;
    result = nn_fs_HierarchicalRomFileTable_FindOpen_plt(a2, v8_.v8, a3);
    if ((result & 0x1FF) == 2 &&
        (((unsigned int)result >> 9) & 0x1FFF) - 7901 <= 3) {
      v7 = 0;
      result = nn_fs_HierarchicalRomFileTable_CreateDirectory_plt(a2, &v7, a3);
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_856170(result);
      }
    }
    else if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
  }
  return result;
}

__int64 nn_fs_df380(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64* a6, __int64 a7)
{
  __int64 v7;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned int v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v7 = *a1;
  v23 = nullptr;
  result = (*(__int64 (**)(__int64*, _QWORD**, __int64, __int64, __int64))(
      v7 + 112))(a1, &v23, a2, 3, a5),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if ((_DWORD)result != 0) {
    goto LABEL_15;
  }
  v22 = 0;
  if (a3 != 0) {
    while (1) {
      result = (*(__int64 (**)(_QWORD*, __int64*, __int64, __int64))(
          *v23 + 16LL))(v23, &v22, a3, 1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result != 0) {
        break;
      }
      if (v22 == 0) {
        result = 0;
        break;
      }
      result = nn_fs_Path_AppendChild_plt(a2, a3),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result != 0) {
        break;
      }
      if (*(_BYTE*)(a3 + 772) != 0) {
        v15 = *a6;
        v24 = 0;
        v16 = nn_fs_Path_GetString_plt(a2),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        result = nn_fs_RomFsFileSystem_GetFileBaseOffset_plt(v15, &v24, v16),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if ((_DWORD)result != 0) {
          break;
        }
        v24 -= 512;
        v17 = nn_fs_Path_GetString_plt(a2),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        result = nn_fs_dcb60((__int64*)(a7 + 32), v17, a3, v24,
                             *(_QWORD*)(a3 + 776)),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if ((_DWORD)result != 0) {
          break;
        }
      }
      else {
        v18 = nn_fs_Path_GetString_plt(a2),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        result = nn_fs_dbe80((__int64*)(a4 + 32), v18, a3),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if ((_DWORD)result != 0) {
          break;
        }
        result = nn_fs_df380(a1, a2, a3, a4, v19, a6, a7),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if ((_DWORD)result != 0) {
          break;
        }
      }
      result = nn_fs_Path_RemoveChild_plt(a2),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result != 0) {
        break;
      }
      v22 = 0;
    }
  LABEL_15:
    v20 = v23;
    v23 = nullptr;
    if (v20 == nullptr) {
      return result;
    }
    goto LABEL_16;
  }
  result = 3104258;
  v20 = v23;
  v23 = nullptr;
  if (v20 == nullptr) {
    return result;
  }
LABEL_16:
  v21 = result;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v20 + 8LL))(
      (void*)(v20), v20),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  return v21;
}

__int64 nn_fs_df530(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  char v12[8];
  __int64 v13;
  _QWORD v14[2];
  __int64 v15;

  v13 = a1;
  v15 = 0;
  v12[0] = 1;
  result = nn_fs_da290(&v15, (__int64)v12, a3, a4);
  if ((_DWORD)result != 0) {
    v5 = v15;
    if (v15 == 0) {
      return result;
    }
    goto LABEL_8;
  }
  v6 = nn_fs_detail_Allocate_plt(160);
  v7 = v15;
  if (v6 != 0) {
    v5 = v6;
    v8 = nn_fs_detail_GetMemoryResource_plt();
    *(_QWORD*)(v5 + 48) = 0;
    *(_DWORD*)(v5 + 72) = 1;
    v9 = SdkData_e86d58;
    *(_QWORD*)(v5 + 40) = v5 + 48;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = v8;
    *(_QWORD*)(v5 + 56) = v8;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 32) = v8;
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = v8;
    *(_QWORD*)(v5 + 128) = v8;
    *(_QWORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_DWORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)v5 = v9 + 16;
    *(_QWORD*)(v5 + 8) = v7;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 112) = v5 + 120;
    v14[0] = 0;
    v14[1] = 0x10000000000LL;
    SdkRoutine_85af00(v5 + 112, v14);
    LODWORD(v14[0]) = nn_fs_dbe80((__int64*)(v5 + 32), (__int64)"/",
                                  (__int64)&SdkData_bbbd5c);
    if (LODWORD(v14[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v14);
      __udf(0);
    }
    v10 = *(_QWORD*)v5;
    *(_DWORD*)(v5 + 152) = 0;
    *(_BYTE*)(v5 + 156) = 0;
    LODWORD(result) = (*(__int64 (**)(__int64))(v10 + 120))(v5);
    goto LABEL_8;
  }
  result = 1638402;
  v5 = v15;
  if (v15 != 0) {
  LABEL_8:
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    return v11;
  }
  return result;
}

__int64 nn_fs_e03d0(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_fs_detail_InitializeDfcFileSystemProxyServiceObject(_QWORD* a1)
{
  void (***v1)(_QWORD);
  __int64 result;

  v1 = (void (***)(_QWORD))*a1;
  if (*a1 != 0) {
    (**v1)(*a1);
  }
  result = SdkData_eaf448;
  SdkData_eaf448 = (__int64)v1;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64

nn_fs_detail_DisableSessionForRealtimeOnlyAndChangeSessionCount(void* this_)
{
  int v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 result;
  int v6;

  if ((SdkData_eaf440 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  v1 = (int)this_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eaf490,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eaf490) != 0) {
    SdkRoutine_f42c0();
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eaf490);
  }
  v2 = nn_diag_detail_NotNullImpl_plt(&SdkData_eaf8b0);
  if ((v2 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  LOBYTE(SdkData_eaf9f8) = 0;
  v3 = nn_os_SdkMutexType_Lock_plt(&SdkData_eaf8f0);
  if (v1 > (int)SdkData_eaf8e8) {
    nn_diag_detail_AbortImpl_plt_856170(v3);
  }
  v4 = SdkRoutine_f3600((__int64)&SdkData_eaf8b0, v1);
  result = nn_os_SdkMutexType_Unlock_plt(&SdkData_eaf8f0);
  v6 = v4;
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  return result;
}

__int64 nn_fs_detail_EnableSessionForRealtimeOnly(void* this_)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 result;
  int v5;

  if ((SdkData_eaf440 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eaf490,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_eaf490) != 0) {
    SdkRoutine_f42c0();
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_eaf490);
  }
  v1 = nn_diag_detail_NotNullImpl_plt(&SdkData_eaf8b0);
  if ((v1 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v1);
  }
  LOBYTE(SdkData_eaf9f8) = 0;
  v2 = nn_os_SdkMutexType_Lock_plt(&SdkData_eaf8f0);
  if ((int)SdkData_eaf8e8 <= 4) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  v3 = SdkRoutine_f3600((__int64)&SdkData_eaf8b0, 5);
  result = nn_os_SdkMutexType_Unlock_plt(&SdkData_eaf8f0);
  v5 = v3;
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  LOBYTE(SdkData_eaf9f8) = 1;
  return result;
}

__int64 nn_fs_InitializeForApplication(__int64 result)
{
  if ((unsigned __int8)SdkData_eaf440 == 1) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  if (nn_fs_detail_g_SessionForRealtimeMode != 0) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  nn_fs_detail_g_SessionForRealtimeMode = 1;
  return result;
}

__int64 nn_fs_InitializeWithMultiSessionForSystem(__int64 result)
{
  if ((unsigned __int8)SdkData_eaf440 == 1) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  if (nn_fs_detail_g_SessionForRealtimeMode != 0) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  nn_fs_detail_g_SessionForRealtimeMode = 2;
  return result;
}

__int64 nn_fs_InitializeWithMultiSessionForTargetTool(__int64 result)
{
  if (nn_fs_detail_g_SessionForRealtimeMode != 1) {
    if ((unsigned __int8)SdkData_eaf440 == 1) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    if (nn_fs_detail_g_SessionForRealtimeMode != 0) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    nn_fs_detail_g_SessionForRealtimeMode = 2;
  }
  return result;
}

__int64 nn_fs_GetAndClearMemoryReportInfo(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v14;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (a1 != nullptr) {
    v3 = &v31;
    v1 = a1;
    v31 = 0;
    nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)&v31, a1);
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v15 = 0;
    v16 = 0;
    v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v31 + 968LL))(v31, &v15);
    v2 = v4;
    if ((nn_fs_detail_IsAbortNeeded_plt(v4) & 1) == 0) {
      if (v4 != 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else {
    v4 = 3104258;
    if ((nn_fs_detail_IsAbortNeeded_plt(3104258) & 1) == 0) {
      return v4;
    }
    nn_fs_detail_LogResultErrorMessage_plt(3104258,
                                           "GetAndClearMemoryReportInfo");
    LODWORD(v15) = 3104258;
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  nn_fs_detail_LogResultErrorMessage_plt(v2, "GetAndClearMemoryReportInfo");
  v14 = v4;
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
    __udf(0);
  }
LABEL_4:
  v5 = v28;
  v4 = 0;
  v1[12] = v27;
  v1[13] = v5;
  v6 = v30;
  v1[14] = v29;
  v1[15] = v6;
  v7 = v24;
  v1[8] = v23;
  v1[9] = v7;
  v8 = v26;
  v1[10] = v25;
  v1[11] = v8;
  v9 = v20;
  v1[4] = v19;
  v1[5] = v9;
  v10 = v22;
  v1[6] = v21;
  v1[7] = v10;
  v11 = v16;
  *v1 = v15;
  v1[1] = v11;
  v12 = v18;
  v1[2] = v17;
  v1[3] = v12;
LABEL_5:
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  return v4;
}

__int64 nn_fs_SetPriorityOnCurrentThread(unsigned int a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  __int64 result;
  unsigned int v15;

  v2 = 3104258;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(1);
  if ((v3 & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v5 = nn_os_GetCurrentThread_plt(v4);
    if (v5 != 0) {
      if (a1 <= 2) {
        v7 = v5;
        v8 = nn_sf_GetFsInlineContext_plt();
        v5 = nn_sf_SetFsInlineContext_plt(v7, v8 & 0xFFFFFFF8 |
                                                  (0x20001u >> (8 * a1)));
        v2 = 0;
      }
      else {
        v2 = 3072514;
      }
    }
    v9 = nn_os_GetSystemTick_plt(v5);
    nn_fs_detail_OutputAccessLog_plt_85b210(
        v2, a1, v4, v9, "SetPriorityOnCurrentThread", 0, &SdkData_bbbd5c);
  }
  else {
    v6 = nn_os_GetCurrentThread_plt(v3);
    if (v6 != 0) {
      if (a1 <= 2) {
        v10 = 8 * a1;
        v11 = v6;
        v12 = 0x20001u >> v10;
        v13 = nn_sf_GetFsInlineContext_plt();
        nn_sf_SetFsInlineContext_plt(v11, v13 & 0xFFFFFFF8 | v12);
        v2 = 0;
      }
      else {
        v2 = 3072514;
      }
    }
  }
  nn_fs_detail_IsAbortNeeded_plt(v2);
  result =
      nn_fs_detail_LogResultErrorMessage_plt(v2, "SetPriorityOnCurrentThread");
  v15 = v2;
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
    __udf(0);
  }
  return result;
}

__int64 nn_fs_GetPriorityOnCurrentThread(void* this_, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v10;

  v2 = 3104258;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2);
  if ((v3 & 1) != 0 &&
      ((v3 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v5 = nn_os_GetCurrentThread_plt(v4);
    if (v5 != 0) {
      v5 = nn_sf_GetFsInlineContext_plt();
      if (((unsigned __int8)v5 & 7u) > 3) {
        v6 = 0;
        v2 = 3072514;
      }
      else {
        v2 = 0;
        v6 = SdkData_bb47a0[v5 & 7];
      }
    }
    else {
      v6 = 0;
    }
    v8 = nn_os_GetSystemTick_plt(v5);
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v2, v4, v8, "GetPriorityOnCurrentThread", 0, &SdkData_bbbd5c);
  }
  else if (nn_os_GetCurrentThread_plt(v3) != 0) {
    v7 = nn_sf_GetFsInlineContext_plt() & 7;
    if (v7 >= 4) {
      v6 = 0;
      v2 = 3072514;
    }
    else {
      v2 = 0;
      v6 = SdkData_bb47a0[v7];
    }
  }
  else {
    v6 = 0;
  }
  nn_fs_detail_IsAbortNeeded_plt(v2);
  nn_fs_detail_LogResultErrorMessage_plt(v2, "GetPriorityOnCurrentThread");
  v10 = v2;
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  return v6;
}

__int64 nn_fs_SetPriorityRawOnCurrentThread(unsigned int a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  __int64 result;
  unsigned int v15;

  v2 = 3104258;
  v3 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
  if ((v3 & 1) != 0) {
    v4 = nn_os_GetSystemTick_plt(v3);
    v5 = nn_os_GetCurrentThread_plt(v4);
    if (v5 != 0) {
      if (a1 <= 3) {
        v7 = v5;
        v8 = nn_sf_GetFsInlineContext_plt();
        v5 = nn_sf_SetFsInlineContext_plt(v7, v8 & 0xFFFFFFF8 |
                                                  (0x3020001u >> (8 * a1)));
        v2 = 0;
      }
      else {
        v2 = 3072514;
      }
    }
    v9 = nn_os_GetSystemTick_plt(v5);
    nn_fs_detail_OutputAccessLog_plt_85b220(
        v2, a1, v4, v9, "SetPriorityRawOnCurrentThread", 0, &SdkData_bbbd5c);
  }
  else {
    v6 = nn_os_GetCurrentThread_plt(v3);
    if (v6 != 0) {
      if (a1 <= 3) {
        v10 = 8 * a1;
        v11 = v6;
        v12 = 0x3020001u >> v10;
        v13 = nn_sf_GetFsInlineContext_plt();
        nn_sf_SetFsInlineContext_plt(v11, v13 & 0xFFFFFFF8 | v12);
        v2 = 0;
      }
      else {
        v2 = 3072514;
      }
    }
  }
  nn_fs_detail_IsAbortNeeded_plt(v2);
  result = nn_fs_detail_LogResultErrorMessage_plt(
      v2, "SetPriorityRawOnCurrentThread");
  v15 = v2;
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
    __udf(0);
  }
  return result;
}

__int64 nn_fs_SetPriorityRaw(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;

  v4 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
  if ((v4 & 1) != 0) {
    v5 = nn_os_GetSystemTick_plt(v4);
    v6 = v5;
    if (a1 != 0) {
      if (a2 <= 3) {
        v8 = nn_sf_GetFsInlineContext_plt_alt1(a1);
        v5 = nn_sf_SetFsInlineContext_plt(a1, v8 & 0xFFFFFFF8 |
                                                  (0x3020001u >> (8 * a2)));
        v7 = 0;
      }
      else {
        v7 = 3072514;
      }
      v9 = nn_os_GetSystemTick_plt(v5);
      v10 = nn_os_GetThreadId_plt(a1);
    }
    else {
      v7 = 3104258;
      v9 = nn_os_GetSystemTick_plt(v5);
      v10 = 0;
    }
    nn_fs_detail_OutputAccessLog_plt_85b220_alt1(
        v7, a2, v6, v9, "SetPriorityRaw", 0, ", thread_id: %llu", v10);
  }
  else if (a1 != 0) {
    if (a2 <= 3) {
      v11 = nn_sf_GetFsInlineContext_plt_alt1(a1);
      nn_sf_SetFsInlineContext_plt(a1,
                                   v11 & 0xFFFFFFF8 | (0x3020001u >> (8 * a2)));
      v7 = 0;
    }
    else {
      v7 = 3072514;
    }
  }
  else {
    v7 = 3104258;
  }
  nn_fs_detail_IsAbortNeeded_plt(v7);
  result = nn_fs_detail_LogResultErrorMessage_plt(v7, "SetPriorityRaw");
  v21 = v7;
  if (v7 != 0) {
    v13 = nn_diag_detail_AbortImpl_plt_858db0(&v21);
    v18 = &v20;
    v19 = v14;
    v15 = nn_os_GetCurrentThread_plt(v13);
    if (v15 != 0) {
      v16 = nn_sf_GetFsInlineContext_plt_alt1(v15) & 7;
      if (v16 < 4) {
        return SdkData_bb2590[v16];
      }
    }
    else {
      v17 = 3104258;
      nn_diag_detail_AbortImpl_plt_858db0(&v17);
    }
    v17 = 3072514;
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
    __udf(0);
  }
  return result;
}

__int64 nn_fs_GetPriorityRawOnCurrentThreadForInternalUse(__int64 a1)
{
  unsigned int v1;
  int v3;

  if (nn_os_GetCurrentThread_plt(a1) == 0) {
    v3 = 3104258;
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  v1 = nn_sf_GetFsInlineContext_plt() & 7;
  if (v1 >= 4) {
    v3 = 3072514;
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  return SdkData_bb2590[v1];
}

__int64 nn_fs_GetPriorityRawOnCurrentThread(void* this_)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v9;

  v1 = 3104258;
  v2 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
  if ((v2 & 1) != 0 &&
      ((v2 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v3 = nn_os_GetSystemTick_plt(v2);
    v4 = nn_os_GetCurrentThread_plt(v3);
    if (v4 != 0) {
      v4 = nn_sf_GetFsInlineContext_plt();
      if (((unsigned __int8)v4 & 7u) > 3) {
        v5 = 0;
        v1 = 3072514;
      }
      else {
        v1 = 0;
        v5 = SdkData_bb2590[v4 & 7];
      }
    }
    else {
      v5 = 0;
    }
    v7 = nn_os_GetSystemTick_plt(v4);
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v1, v3, v7, "GetPriorityRawOnCurrentThread", 0, &SdkData_bbbd5c);
  }
  else if (nn_os_GetCurrentThread_plt(v2) != 0) {
    v6 = nn_sf_GetFsInlineContext_plt() & 7;
    if (v6 >= 4) {
      v5 = 0;
      v1 = 3072514;
    }
    else {
      v1 = 0;
      v5 = SdkData_bb2590[v6];
    }
  }
  else {
    v5 = 0;
  }
  nn_fs_detail_IsAbortNeeded_plt(v1);
  nn_fs_detail_LogResultErrorMessage_plt(v1, "GetPriorityRawOnCurrentThread");
  v9 = v1;
  if (v1 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  return v5;
}

__int64 nn_fs_GetPriorityRaw(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v13;

  if (a1 == 0) {
    v4 = 0;
    v6 = 0;
    v3 = 1;
    v5 = 3104258;
    v7 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
    if ((v7 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  v2 = nn_sf_GetFsInlineContext_plt_alt1(a1) & 7;
  v3 = 1;
  v4 = 0;
  v5 = 3072514;
  if (v2 <= 1) {
    if (v2 == 0) {
      v4 = 1;
      v5 = 0;
      v6 = 1;
      v7 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
      if ((v7 & 1) == 0) {
        goto LABEL_10;
      }
      goto LABEL_15;
    }
    v6 = 0;
    if (v2 == 1) {
      v4 = 0;
      v3 = 0;
      v5 = 0;
      v6 = 1;
      v7 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
      if ((v7 & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_15:
      v9 = nn_os_GetSystemTick_plt(v7);
      v10 = nn_os_GetSystemTick_plt(v9);
      if (a1 != 0) {
        v11 = nn_os_GetThreadId_plt(a1);
      }
      else {
        v11 = 0;
      }
      v8 = v5;
      nn_fs_detail_OutputAccessLog_plt_85b220_alt1(
          v5, v3, v9, v10, "GetPriorityRaw", 0, ", thread_id: %llu", v11);
      goto LABEL_19;
    }
    goto LABEL_14;
  }
  if (v2 == 2) {
    v5 = 0;
    v6 = 1;
    v4 = 2;
    v3 = 2;
  LABEL_14:
    v7 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
    if ((v7 & 1) != 0) {
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  v6 = 0;
  if (v2 != 3) {
    goto LABEL_14;
  }
  v5 = 0;
  v6 = 1;
  v4 = 3;
  v3 = 3;
  v7 = nn_fs_detail_IsEnabledAccessLog_plt_85aec0(2);
  if ((v7 & 1) != 0) {
    goto LABEL_15;
  }
LABEL_10:
  v8 = v5;
LABEL_19:
  nn_fs_detail_IsAbortNeeded_plt(v8);
  nn_fs_detail_LogResultErrorMessage_plt(v8, "GetPriorityRaw");
  v13 = v5;
  if ((v6 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
    __udf(0);
  }
  return v4;
}

__int64 nn_fs_101580(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  __int64 result;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a4 == 3) {
    if (a2 != nullptr) {
      if (a3 == 64) {
        a2[6] = 0;
        a2[7] = 0;
        a2[4] = 0;
        a2[5] = 0;
        a2[2] = 0;
        a2[3] = 0;
        *a2 = 0;
        a2[1] = 0;
        return 0;
      }
      else {
        return 3103746;
      }
    }
    else {
      return 3104258;
    }
  }
  else if (a4 == 2) {
    return 0;
  }
  else if (a4 != 0) {
    return 3225602;
  }
  else {
    result = 3103234;
    if ((a5 & 0x8000000000000000LL) == 0) {
      v8 = *(_QWORD*)(a1 + 32);
      v9 = v8 < a5;
      v10 = v8 - a5;
      if (!v9) {
        v11 = *(_QWORD*)(a1 + 16);
        if (v10 >= a6) {
          v12 = a6;
        }
        else {
          v12 = v10;
        }
        memset_plt((void*)(v11 + a5), nullptr, v12, 0);
        return 0;
      }
    }
  }
  return result;
}

__int64 nn_fs_1020b0(_QWORD* a1)
{
  __int64 result;

  *a1 = SdkData_e86da0 + 16;
  nn_fs_save_SaveDataFileSystemCore_Destroy_SaveDataFileSystemCore_plt(a1 + 2);
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_fs_102110(_QWORD* a1)
{
  __int64 v2;

  *a1 = SdkData_e86da0 + 16;
  nn_fs_save_SaveDataFileSystemCore_Destroy_SaveDataFileSystemCore_plt(a1 + 2);
  v2 = a1[1];
  a1[1] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  return nn_fs_detail_Deallocate_plt(a1, 696);
}

__int64 nn_fs_102170(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = SdkData_e50d18;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
