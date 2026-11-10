#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_plt_86fc90(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void std___1_to_string_plt_86fca0(PSEUDO_X8, _QWORD);
__int64* MPEG4Writer_50d9e0_alt1(__int64*,
                                 __int64*) __asm__("MPEG4Writer_50d9e0");
__int64 MovieFree_plt(void* this_);
__int64 MovieMalloc_plt(_QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_5093c0(__int64);
__int64 SdkRoutine_5094a0(__int64);
__int64 SdkRoutine_512f00(_QWORD*);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86e8b0(_QWORD);
__int64 SdkRoutine_86fc70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86fc80(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 htonl_plt(void);
__int64 htonl_plt_alt1(_QWORD) __asm__("htonl_plt");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_addChunkOffset_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_addItemOffsetAndSize_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_addOneCttsTableEntry_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nandroid_MPEG4Writer_Track_addOneStscTableEntry_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nandroid_MPEG4Writer_Track_addOneStssTableEntry_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_addOneSttsTableEntry_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nandroid_MPEG4Writer_Track_bufferChunk_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_checkCodecSpecificData_plt(_QWORD);
__int64 nandroid_MPEG4Writer_Track_dumpTimeStamps_plt(_QWORD);
__int64 nandroid_MPEG4Writer_Track_isExifData_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_makeAVCCodecSpecificData_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nandroid_MPEG4Writer_Track_stop_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_trackProgressStatus_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_Track_updateDriftTime_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_addSample_l_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__int64 nandroid_MPEG4Writer_beginBox_plt_86f8e0(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_endBox_plt(_QWORD);
__int64 nandroid_MPEG4Writer_estimateFileLevelMetaSize_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_startTracks_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_startWriterThread_plt(_QWORD);
__int64 nandroid_MPEG4Writer_writeFtypBox_plt(_QWORD, _QWORD);
__int64 nandroid_MPEG4Writer_write_506f80(__int64, __int64, __int64, __int64);
__int64 nandroid_MediaBuffer_MediaBuffer_plt_86f490(_QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaDataBase_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MetaData_MetaData_plt_86f4f0(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_append_plt(_QWORD, _QWORD);
__int64 nandroid_String8_length_plt(_QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_extractors_mp4_4f61b0(unsigned __int64*, __int64,
                                       unsigned __int64);
__int64 nandroid_libstagefright_514300(_QWORD*, __int64);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_ThreadManager_GetInstance_plt(_QWORD);
__int64 nn_movie_detail_ThreadManager__ChangeThreadPriority_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nn_movie_detail_ThreadManager__GetThreadCoreMaskByInstance_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_movie_detail_ThreadManager__GetThreadPriorityByInstance_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(_QWORD);
__int64 nn_movie_detail_ThreadManager__StackAllocate_plt(_QWORD, _QWORD,
                                                         _QWORD);
__int64 nn_movie_detail_ThreadManager__StackFree_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_ThreadManager__StaticCreate_plt(_QWORD, _QWORD, _QWORD,
                                                        _QWORD, _QWORD, _QWORD,
                                                        _QWORD, _QWORD, _QWORD,
                                                        _QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SetThreadName_plt(_QWORD, _QWORD);
__int64 nn_os_StartThread_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strlen_plt(_QWORD);
__int64 systemTime_plt(_QWORD);
__int64 write_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_c57830;
extern _UNKNOWN SdkData_f4cd88;
extern __int64 SdkData_e88330;
extern __int64 SdkData_e889c8;
extern __int64 SdkData_e889d0;
extern __int64 SdkData_e889d8;
extern __int64 SdkData_e889e0;
extern __int64 SdkData_e889e8;
extern __int64 SdkData_e889f0;
extern __int64 SdkData_e889f8;
extern __int64 SdkData_e88a08;
extern __int64 SdkData_e88a10;
extern __int64 SdkData_e88a18;
extern __int64 SdkData_e88a20;
extern __int64 SdkData_e88a28;
extern __int64 SdkData_e88a30;
extern int SdkData_f4cd80;
extern void (*SdkData_e88338[493])();
void __attribute__((noreturn)) nn_fs_dc4d0();
void __attribute__((noreturn)) nn_fs_dc4d0_alt1(_QWORD,
                                                _QWORD) __asm__("nn_fs_dc4d0");
__int64 MPEG4Writer_5044a0(_QWORD* a1);
__int64 MPEG4Writer_5045e0(_QWORD* a1);
__int64 MPEG4Writer_504700(_QWORD* a1);
__int64 nandroid_MPEG4Writer_Track_dump(__int64 a1, unsigned int a2);
const char* nandroid_MPEG4Writer_Track_getTrackType(void* this_);
__int64 nandroid_MPEG4Writer_start(void* this_, void* a2);
__int64 nandroid_MPEG4Writer_startWriterThread(void* this_);
__int64 MPEG4Writer_5096b0(__int64 result, _DWORD* a2);
unsigned int* MPEG4Writer_509840(unsigned int* result, _DWORD* a2);
__int64 MPEG4Writer_5099a0(__int64 result, _DWORD* a2);
unsigned int* MPEG4Writer_509da0(unsigned int* result, _QWORD* a2);
void nandroid_MPEG4Writer_Track_Destroy_Track(void* this_);
__int64 MPEG4Writer_50ab20(_QWORD* a1);
__int64 MPEG4Writer_50ac40(_QWORD* a1);
__int64 nandroid_MPEG4Writer_Track_threadEntry(void* this_);
__int64 nandroid_MPEG4Writer_Track_dumpTimeStamps(__int64 this_);
__int64 MPEG4Writer_50d980(__int64 a1);
_QWORD* MPEG4Writer_50d9e0(__int64* a1, __int64* a2);
_QWORD* MPEG4Writer_50dda0(_QWORD* a1, __int64 a2);
__int64 nandroid_MPEG4Writer_Track_writeHdlrBox(void* this_);
__int64 MPEG4Writer_512980(_QWORD* a1);
unsigned __int64* MPEG4Writer_5130c0(unsigned __int64* a1, __int64 a2);
__int64 MPEG4Writer_5133f0(_QWORD* a1);
__int64 MPEG4Writer_513480(_QWORD* a1);
__int64 MPEG4Writer_513990(_QWORD* a1);
__int64 MPEG4Writer_513d40(_QWORD* a1);
__int64 MPEG4Writer_513e60(_QWORD* a1);
__int64 MPEG4Writer_513f00(_QWORD* a1);
__int64 MPEG4Writer_514020(_QWORD* a1);
__int64 MPEG4Writer_5140b0(_QWORD* a1);
__int64 MPEG4Writer_514140(_QWORD* a1);

__int64 MPEG4Writer_5044a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e889d8 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 48);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 48);
      SdkRoutine_512f00((_QWORD*)(v3 + 8));
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 40) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 48) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 MPEG4Writer_5045e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e889d0 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 MPEG4Writer_504700(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e889c8 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 nandroid_MPEG4Writer_Track_dump(__int64 a1, unsigned int a2)
{
  const char* v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[32];
  __int64 v10;

  memset(v9, 0, sizeof(v9));
  v10 = 0;
  nandroid_String8_String8_plt_86d870(&v10);
  if ((*(_BYTE*)(a1 + 30) & 1) != 0) {
    v4 = "Audio";
  }
  else if ((*(_BYTE*)(a1 + 31) & 1) != 0) {
    v4 = "Video";
  }
  else if (*(_BYTE*)(a1 + 32) != 0) {
    v4 = "Image";
  }
  else {
    v4 = "Metadata";
  }
  snprintf_plt(v9, 256, "     %s track\n", v4);
  nandroid_String8_append_plt(&v10, v9);
  if (*(_BYTE*)(a1 + 306) != 0) {
    v5 = "true";
  }
  else {
    v5 = "false";
  }
  snprintf_plt(v9, 256, "       reached EOS: %s\n", v5);
  nandroid_String8_append_plt(&v10, v9);
  snprintf_plt(v9, 256, "       frames encoded : %d\n",
               *(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL));
  nandroid_String8_append_plt(&v10, v9);
  snprintf_plt(v9, 256, "       duration encoded : %ld us\n",
               *(_QWORD*)(a1 + 40));
  nandroid_String8_append_plt(&v10, v9);
  v6 = v10;
  v7 = nandroid_String8_length_plt(&v10);
  write_plt(a2, v6, v7);
  nandroid_String8_Destroy_String8_plt(&v10);
  return 0;
}

const char* nandroid_MPEG4Writer_Track_getTrackType(void* this_)
{
  if ((*((_BYTE*)this_ + 30) & 1) != 0) {
    return "Audio";
  }
  if ((*((_BYTE*)this_ + 31) & 1) != 0) {
    return "Video";
  }
  if (*((_BYTE*)this_ + 32) != 0) {
    return "Image";
  }
  return "Metadata";
}

__int64 nandroid_MPEG4Writer_start(void* this_, void* a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  void* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _BYTE* v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  if (*((_DWORD*)this_ + 18) != 0) {
    return 0x80000000LL;
  }
  v5 = (_QWORD*)((char*)this_ + 64);
  v6 = *((_QWORD*)this_ + 8);
  v8 = this_;
  if (a2 != nullptr) {
    this_ = (void*)nandroid_RefBase_incStrong_plt((char*)a2 + 16, v5);
  }
  if (v6 != 0) {
    this_ = (void*)nandroid_RefBase_decStrong_plt(v6 + 16, v5);
  }
  if (v6 != *v5) {
    nandroid_sp_report_race_plt(this_);
  }
  v9 = *((_QWORD*)v8 + 2);
  *((_QWORD*)v8 + 8) = a2;
  if (v9 != 0) {
    *((_BYTE*)v8 + 79) = 1;
  }
  v31 = 0;
  if (a2 != nullptr &&
      (nandroid_MetaDataBase_findInt32_plt(a2, 1718575732, &v31) & 1) != 0 &&
      v31 != 0) {
    *((_BYTE*)v8 + 78) = 0;
  }
  if (*((_BYTE*)v8 + 78) == 1) {
    v10 = *((_QWORD*)v8 + 2);
    if (v10 == 0 || v10 >= 0x100000000LL) {
      *((_QWORD*)v8 + 2) = 0xFFFFFFFFLL;
      v30 = 0;
      if (a2 != nullptr) {
        goto LABEL_19;
      }
    LABEL_28:
      v12 = (char*)v8 + 81;
      v13 = *((unsigned __int8*)v8 + 81);
      v29 = 0;
      *((_QWORD*)v8 + 21) = -1;
      if (v13 != 1) {
        goto LABEL_32;
      }
    LABEL_29:
      if (*((_BYTE*)v8 + 80) != 1) {
        return 0;
      }
      *((_BYTE*)v8 + 80) = 0;
      return nandroid_MPEG4Writer_startTracks_plt(v8, a2);
    }
  }
  v30 = 0;
  if (a2 == nullptr) {
    goto LABEL_28;
  }
LABEL_19:
  if ((nandroid_MetaDataBase_findInt32_plt(a2, 843989324, &v30) & 1) != 0 &&
      v30 != 0) {
    *((_BYTE*)v8 + 77) = 0;
  }
  v29 = 0;
  if ((nandroid_MetaDataBase_findInt32_plt(a2, 1920234083, &v29) & 1) != 0) {
    *((_BYTE*)v8 + 76) = v29 != 0;
  }
  v12 = (char*)v8 + 81;
  v11 = *((_BYTE*)v8 + 81);
  *((_QWORD*)v8 + 21) = -1;
  if ((v11 & 1) != 0) {
    goto LABEL_29;
  }
  if ((nandroid_MetaDataBase_findInt32_plt(a2, 1953330028, (char*)v8 + 164) &
       1) == 0) {
  LABEL_32:
    *((_DWORD*)v8 + 41) = 1000;
  }
  *((_BYTE*)v8 + 144) = 0;
  *((_BYTE*)v8 + 128) = 0;
  *((_QWORD*)v8 + 13) = 0;
  *((_QWORD*)v8 + 14) = 0;
  nandroid_MPEG4Writer_writeFtypBox_plt(v8, a2);
  v14 = *((_QWORD*)v8 + 15);
  *((_QWORD*)v8 + 17) = *((_QWORD*)v8 + 11);
  if (v14 == 0) {
    v32 = -1;
    if (*((_BYTE*)v8 + 344) == 1) {
      *((_QWORD*)v8 + 15) +=
          nandroid_MPEG4Writer_estimateFileLevelMetaSize_plt(v8, a2);
    }
    if (*((_BYTE*)v8 + 345) == 1) {
      if (a2 != nullptr) {
        nandroid_MetaDataBase_findInt32_plt(a2, 1651668069, &v32);
        v15 = v32;
      }
      else {
        v15 = -1;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4cd88,
                                memory_order_acquire) &
           1) == 0) {
        v26 = v15;
        v27 = __cxa_guard_acquire_plt(&SdkData_f4cd88);
        v15 = v26;
        if (v27 != 0) {
          if (*((_BYTE*)v8 + 78) != 0) {
            v28 = 1;
          }
          else {
            v28 = 2;
          }
          SdkData_f4cd80 = v28;
          __cxa_guard_release_plt(&SdkData_f4cd88);
          v15 = v26;
        }
      }
      v16 = *((_QWORD*)v8 + 2);
      v17 = (v16 != 0) & *((_BYTE*)v8 + 79);
      if (v17 == 1) {
        v18 =
            (unsigned __int128)(6 * v16 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
        v19 = (v18 >> 7) + ((unsigned __int64)v18 >> 63);
      }
      else {
        v19 = 3072;
      }
      if (v15 >= 1) {
        v20 = *((_QWORD*)v8 + 3);
        if (v20 != 0) {
          v21 = (unsigned __int128)(6 * (unsigned int)v15 * (v20 / 1000) *
                                    (__int128)0x431BDE82D7B634DBLL) >>
                64;
          v22 = (v21 >> 21) + ((unsigned __int64)v21 >> 63);
          if (v19 >= v22) {
            v19 = v22;
          }
          if (v17 == 0) {
            v19 = v22;
          }
        }
      }
      v23 = 3072;
      if (v19 > 3072) {
        v23 = v19;
      }
      if (v23 >= 405000) {
        v23 = 405000;
      }
      *((_QWORD*)v8 + 15) += (v23 + *((_QWORD*)v8 + 19)) * SdkData_f4cd80;
    }
  }
  if (*((_BYTE*)v8 + 144) == 1) {
    v24 = *((_DWORD*)v8 + 34);
    if ((v24 & 0x80000000) == 0) {
      *((_DWORD*)v8 + 12) = v24;
    }
    v32 = htonl_plt();
    nandroid_MPEG4Writer_write_506f80((__int64)v8, (__int64)&v32, 1, 4);
    nandroid_MPEG4Writer_write_506f80((__int64)v8, (__int64)"free", 1, 4);
    v25 = *((_QWORD*)v8 + 15) + *((_QWORD*)v8 + 17);
    *((_QWORD*)v8 + 11) = v25;
    *((_QWORD*)v8 + 12) = v25;
    if ((v25 & 0x80000000) != 0) {
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  v25 = *((_QWORD*)v8 + 11);
  *((_QWORD*)v8 + 11) = v25;
  *((_QWORD*)v8 + 12) = v25;
  if ((v25 & 0x80000000) == 0) {
  LABEL_62:
    *((_DWORD*)v8 + 12) = v25;
  }
LABEL_63:
  if (*((_BYTE*)v8 + 78) == 1) {
    nandroid_MPEG4Writer_write_506f80((__int64)v8, (__int64)"????mdat", 1, 8);
    result = nandroid_MPEG4Writer_startWriterThread_plt(v8);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    nandroid_MPEG4Writer_write_506f80((__int64)v8, (__int64)&SdkData_c57830, 1,
                                      16);
    result = nandroid_MPEG4Writer_startWriterThread_plt(v8);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  result = nandroid_MPEG4Writer_startTracks_plt(v8, a2);
  if ((_DWORD)result == 0) {
    *v12 = 1;
  }
  return result;
}

__int64 nandroid_MPEG4Writer_startWriterThread(void* this_)
{
  void* v1;
  __int64* v2;
  __int64* v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD** v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
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
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v38_;

  *((_BYTE*)this_ + 273) = 0;
  *((_QWORD*)this_ + 56) = 0;
  v1 = this_;
  v2 = *((__int64**)this_ + 30);
  *((_BYTE*)this_ + 272) = 1;
  v3 = (__int64*)v2[2];
  if (v3 != v2) {
    v4 = (atomic_uchar*)SdkData_e88330;
    v5 = SdkData_e88338[0];
    v6 = SdkData_e88a08 + 16;
    do {
      v38_.v40 = 0;
      v38_.v41 = 0;
      v38_.v38 = v6;
      v38_.v39 = 0;
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      v8 = SdkRoutine_4c3860(16, 48, v7);
      v38_.v39 = v8;
      *(_QWORD*)(v8 + 32) = v8;
      *(_QWORD*)(v8 + 40) = v8;
      v9 = *v3;
      v38_.v40 = 0;
      v38_.v41 = 0;
      v10 = *((_QWORD*)v1 + 41);
      v37 = v9;
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v11 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      v12 = (_QWORD*)SdkRoutine_4c3860(16, 56, v11);
      *v12 = v37;
      nandroid_libstagefright_514300(v12 + 1, (__int64)&v38_.v38);
      v13 = v38_.v40;
      v14 = v38_.v41;
      v12[6] = v10;
      v12[3] = v13;
      v12[4] = v14;
      v15 = *(_QWORD*)(v10 + 40);
      v12[5] = v15;
      *(_QWORD*)(v15 + 48) = v12;
      *(_QWORD*)(v10 + 40) = v12;
      this_ = (void*)SdkRoutine_512f00(&v38_.v38);
      v3 = (__int64*)v3[2];
    } while (v3 != *((__int64**)v1 + 30));
  }
  if (*((_BYTE*)v1 + 296) != 0) {
    return 0;
  }
  v17 = nn_movie_detail_ThreadManager_GetInstance_plt(this_);
  v18 = nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(v17);
  if ((v18 & 1) != 0) {
    v19 = nn_movie_detail_ThreadManager_GetInstance_plt(v18);
    v20 = nn_movie_detail_ThreadManager__StackAllocate_plt(v19, 0x8000, 4096);
    v21 = v20;
    *((_QWORD*)v1 + 36) = v20;
    if (v20 != 0) {
      goto LABEL_15;
    }
    return 4294967284LL;
  }
  v20 = SdkRoutine_4c3860(4096, 0x8000, *((_QWORD***)v1 + 7));
  v21 = v20;
  *((_QWORD*)v1 + 36) = v20;
  if (v20 == 0) {
    return 4294967284LL;
  }
LABEL_15:
  v22 = *((_QWORD*)v1 + 38);
  v23 = nn_movie_detail_ThreadManager_GetInstance_plt(v20);
  v24 =
      nn_movie_detail_ThreadManager__GetThreadPriorityByInstance_plt(v23, v22);
  v25 = *((_QWORD*)v1 + 38);
  LODWORD(v22) = v24;
  v26 = nn_movie_detail_ThreadManager_GetInstance_plt(v24);
  v27 =
      nn_movie_detail_ThreadManager__GetThreadCoreMaskByInstance_plt(v26, v25);
  v28 = nn_movie_detail_ThreadManager__StaticCreate_plt(
      5, (char*)v1 + 280, SdkData_e88a10, v1, v21, 0x8000, (unsigned int)v22,
      "MediaMuxerMpeg4WriterThread", v27, *((_QWORD*)v1 + 38));
  if ((_DWORD)v28 != 0) {
    v29 = nn_movie_detail_ThreadManager_GetInstance_plt(v28);
    v30 = nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(v29);
    v31 = *((_QWORD*)v1 + 36);
    if ((v30 & 1) != 0) {
      v32 = nn_movie_detail_ThreadManager_GetInstance_plt(v30);
      nn_movie_detail_ThreadManager__StackFree_plt(v32, v31);
    }
    else {
      nn_movie_detail_FreeMemory(*((_QWORD*)v1 + 36), *((_QWORD**)v1 + 7));
    }
    return 4294967284LL;
  }
  else {
    v33 = *((_DWORD*)v1 + 78);
    if (v33 != 127) {
      v34 = *((_QWORD*)v1 + 35);
      v35 = nn_movie_detail_ThreadManager_GetInstance_plt(v28);
      nn_movie_detail_ThreadManager__ChangeThreadPriority_plt(v35, v34, v33);
    }
    v36 = *((_QWORD*)v1 + 35);
    *((_BYTE*)v1 + 296) = 1;
    nn_os_StartThread_plt(v36);
    *((_BYTE*)v1 + 82) = 1;
    return 0;
  }
}

__int64 MPEG4Writer_5096b0(__int64 result, _DWORD* a2)
{
  __int64 v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  v3 = result;
  v4 = *(_DWORD*)(result + 4) % *(_DWORD*)result;
  v5 = *(_DWORD*)(result + 8) % 3u;
  if ((v4 | v5) == 0) {
    *(_QWORD*)(result + 16) =
        SdkRoutine_86e8b0(4LL * (unsigned int)(3 * *(_DWORD*)result));
    v6 = *(_QWORD*)(v3 + 32);
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v13 = __cxa_guard_acquire_plt(SdkData_e88330);
      v8 = SdkData_e88338[0];
      if (v13 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v8 = SdkData_e88338[0];
      }
    }
    v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    result = SdkRoutine_4c3860(16, 24, v9);
    v10 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(result + 16) = v6;
    *(_QWORD*)result = v10;
    v11 = *(_QWORD*)(v6 + 8);
    *(_QWORD*)(result + 8) = v11;
    *(_QWORD*)(v11 + 16) = result;
    *(_QWORD*)(v6 + 8) = result;
  }
  *(_DWORD*)(*(_QWORD*)(v3 + 16) + 4LL * (3 * v4 + v5)) = *a2;
  v12 = *(_DWORD*)(v3 + 8) + 1;
  *(_DWORD*)(v3 + 8) = v12;
  if ((unsigned int)(-1431655765 * v12) <= 0x55555555) {
    *(_QWORD*)(v3 + 4) = (unsigned int)(*(_DWORD*)(v3 + 4) + 1);
  }
  return result;
}

unsigned int* MPEG4Writer_509840(unsigned int* result, _DWORD* a2)
{
  __int64 v2;
  _QWORD* v4;
  unsigned int v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *result;
  v4 = result;
  v5 = result[1] % (unsigned int)v2;
  if (v5 == 0) {
    *((_QWORD*)result + 2) = SdkRoutine_86e8b0(4 * v2);
    v6 = v4[4];
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v12 = __cxa_guard_acquire_plt(SdkData_e88330);
      v8 = SdkData_e88338[0];
      if (v12 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v8 = SdkData_e88338[0];
      }
    }
    v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    result = (unsigned int*)SdkRoutine_4c3860(16, 24, v9);
    v10 = v4[2];
    *((_QWORD*)result + 2) = v6;
    *(_QWORD*)result = v10;
    v11 = *(_QWORD*)(v6 + 8);
    *((_QWORD*)result + 1) = v11;
    *(_QWORD*)(v11 + 16) = result;
    *(_QWORD*)(v6 + 8) = result;
  }
  *(_DWORD*)(v4[2] + 4LL * v5) = *a2;
  *(_QWORD*)((char*)v4 + 4) = (unsigned int)(*((_DWORD*)v4 + 1) + 1);
  return result;
}

__int64 MPEG4Writer_5099a0(__int64 result, _DWORD* a2)
{
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  v3 = result;
  v4 = *(_DWORD*)(result + 8) & 1;
  v5 = *(_DWORD*)(result + 4) % *(_DWORD*)result;
  if ((v5 | v4) == 0) {
    *(_QWORD*)(result + 16) =
        SdkRoutine_86e8b0(4LL * (unsigned int)(2 * *(_DWORD*)result));
    v6 = *(_QWORD*)(v3 + 32);
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v13 = __cxa_guard_acquire_plt(SdkData_e88330);
      v8 = SdkData_e88338[0];
      if (v13 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v8 = SdkData_e88338[0];
      }
    }
    v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    result = SdkRoutine_4c3860(16, 24, v9);
    v10 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(result + 16) = v6;
    *(_QWORD*)result = v10;
    v11 = *(_QWORD*)(v6 + 8);
    *(_QWORD*)(result + 8) = v11;
    *(_QWORD*)(v11 + 16) = result;
    *(_QWORD*)(v6 + 8) = result;
  }
  *(_DWORD*)(*(_QWORD*)(v3 + 16) + 4LL * (v4 | (unsigned int)(2 * v5))) = *a2;
  v12 = *(_DWORD*)(v3 + 8);
  *(_DWORD*)(v3 + 8) = v12 + 1;
  if ((v12 & 1) != 0) {
    *(_QWORD*)(v3 + 4) = (unsigned int)(*(_DWORD*)(v3 + 4) + 1);
  }
  return result;
}

unsigned int* MPEG4Writer_509da0(unsigned int* result, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v4;
  unsigned int v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *result;
  v4 = result;
  v5 = result[1] % (unsigned int)v2;
  if (v5 == 0) {
    *((_QWORD*)result + 2) = SdkRoutine_86e8b0(8 * v2);
    v6 = v4[4];
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v12 = __cxa_guard_acquire_plt(SdkData_e88330);
      v8 = SdkData_e88338[0];
      if (v12 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v8 = SdkData_e88338[0];
      }
    }
    v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    result = (unsigned int*)SdkRoutine_4c3860(16, 24, v9);
    v10 = v4[2];
    *((_QWORD*)result + 2) = v6;
    *(_QWORD*)result = v10;
    v11 = *(_QWORD*)(v6 + 8);
    *((_QWORD*)result + 1) = v11;
    *(_QWORD*)(v11 + 16) = result;
    *(_QWORD*)(v6 + 8) = result;
  }
  *(_QWORD*)(v4[2] + 8LL * v5) = *a2;
  *(_QWORD*)((char*)v4 + 4) = (unsigned int)(*((_DWORD*)v4 + 1) + 1);
  return result;
}

void nandroid_MPEG4Writer_Track_Destroy_Track(void* this_)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  __int64 v12;
  void* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  void* v19;

  nandroid_MPEG4Writer_Track_stop_plt(this_, 1);
  v3 = *((_QWORD*)this_ + 17);
  if (v3 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 17));
    SdkRoutine_857220(v3, 40);
  }
  v4 = *((_QWORD*)this_ + 18);
  if (v4 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 18));
    SdkRoutine_857220(v4, 40);
  }
  v5 = *((_QWORD*)this_ + 19);
  if (v5 != 0) {
    SdkRoutine_5094a0(*((_QWORD*)this_ + 19));
    SdkRoutine_857220(v5, 40);
  }
  v6 = *((_QWORD*)this_ + 20);
  if (v6 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 20));
    SdkRoutine_857220(v6, 40);
  }
  v7 = *((_QWORD*)this_ + 22);
  if (v7 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 22));
    SdkRoutine_857220(v7, 40);
  }
  v8 = *((_QWORD*)this_ + 21);
  if (v8 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 21));
    SdkRoutine_857220(v8, 40);
  }
  v9 = *((_QWORD*)this_ + 23);
  if (v9 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 23));
    SdkRoutine_857220(v9, 40);
  }
  v10 = *((_QWORD*)this_ + 24);
  if (v10 != 0) {
    SdkRoutine_5093c0(*((_QWORD*)this_ + 24));
    SdkRoutine_857220(v10, 40);
  }
  v11 = *((void**)this_ + 36);
  *((_QWORD*)this_ + 23) = 0;
  *((_QWORD*)this_ + 24) = 0;
  *((_QWORD*)this_ + 21) = 0;
  *((_QWORD*)this_ + 22) = 0;
  *((_QWORD*)this_ + 19) = 0;
  *((_QWORD*)this_ + 20) = 0;
  *((_QWORD*)this_ + 17) = 0;
  *((_QWORD*)this_ + 18) = 0;
  if (v11 != nullptr) {
    MovieFree_plt(v11);
    *((_QWORD*)this_ + 36) = 0;
  }
  v12 = SdkData_e88a28 + 16;
  *((_QWORD*)this_ + 56) = SdkData_e88a28 + 16;
  nandroid_VectorImpl_finish_vector_plt((char*)this_ + 448);
  nandroid_VectorImpl_Destroy_VectorImpl_plt((char*)this_ + 448);
  *((_QWORD*)this_ + 51) = v12;
  nandroid_VectorImpl_finish_vector_plt((char*)this_ + 408);
  nandroid_VectorImpl_Destroy_VectorImpl_plt((char*)this_ + 408);
  *((_QWORD*)this_ + 45) = v12;
  nandroid_VectorImpl_finish_vector_plt((char*)this_ + 360);
  nandroid_VectorImpl_Destroy_VectorImpl_plt((char*)this_ + 360);
  MPEG4Writer_50ab20((_QWORD*)this_ + 33);
  MPEG4Writer_50ab20((_QWORD*)this_ + 31);
  if (*((_QWORD*)this_ + 30) != 0) {
    v13 = *((void**)this_ + 29);
    v14 = *(_QWORD**)(*((_QWORD*)this_ + 28) + 8LL);
    *(_QWORD*)(*(_QWORD*)v13 + 8LL) = v14;
    *v14 = *(_QWORD*)v13;
    *((_QWORD*)this_ + 30) = 0;
    if (v13 != (void*)((char*)this_ + 224)) {
      do {
        v19 = *((void**)v13 + 1);
        if ((*((_BYTE*)v13 + 32) & 1) != 0) {
          SdkRoutine_857220(*((_QWORD*)v13 + 6),
                            *((_QWORD*)v13 + 4) & 0xFFFFFFFFFFFFFFFELL);
        }
        SdkRoutine_857220(v13, 56);
        v13 = v19;
      } while (v19 != (void*)((char*)this_ + 224));
    }
  }
  MPEG4Writer_50ac40((_QWORD*)this_ + 14);
  v15 = *((_QWORD**)this_ + 2);
  if (v15 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v15 + *(_QWORD*)(*v15 - 24LL),
                                   (char*)this_ + 16);
  }
  v18 = *((_QWORD*)this_ + 1);
  v17 = (char*)this_ + 8;
  v16 = v18;
  if (v18 != 0) {
    nandroid_RefBase_decStrong_plt(v16 + 16, v17);
  }
}

__int64 MPEG4Writer_50ab20(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88a20 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 24);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 24);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 16) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 24) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 MPEG4Writer_50ac40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88a18 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 nandroid_MPEG4Writer_Track_threadEntry(void* this_)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  const char* v9;
  const char* v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  atomic_uchar* v14;
  __int64 v15;
  atomic_uchar* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8 v23;
  int v24;
  void(__attribute__((noreturn)) * v25)();
  _QWORD** v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD** v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  int v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64* i;
  __int64 v63;
  __int64** v64;
  __int64** v65;
  _BOOL4 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64* j;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _BOOL4 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  char v91;
  int v92;
  __int64 v93;
  _QWORD** v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  __int64 v113;
  __int64 v114;
  const char* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  void(__attribute__((noreturn)) * v119)();
  void(__attribute__((noreturn)) * v120)();
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned int* v125;
  unsigned int v126;
  int v127;
  __int64 v128;
  void (**v129)(__int64);
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  unsigned int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  unsigned int v145;
  int v146;
  __int64 v147;
  __int64 v148;
  unsigned int v149;
  __int64 v150;
  int v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned int v156;
  __int64 v157;
  __int64 v158;
  __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  unsigned int v169;
  __int64 v170;
  int v171;
  int v172;
  int v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  int v178;
  __int64 v179;
  struct {
    __int64 v180;
    __int64 v181;
  } v180_;
  struct {
    unsigned __int64 v182[2];
    __int64 v183;
  } v182_;
  int v184;
  __int64 v185;
  int v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;

  v1 = *(_QWORD*)this_;
  v3 = *(unsigned int*)(*(_QWORD*)this_ + 160LL);
  nn_os_LockMutex_plt(*(_QWORD*)this_ + 200LL);
  v4 = *(_QWORD*)(v1 + 240);
  v5 = *(_QWORD*)(v4 + 16);
  if (v5 == v4) {
    v7 = false;
    nn_os_UnlockMutex_plt(v1 + 200);
    v8 = *((_QWORD*)this_ + 11);
    v189 = 0;
    if (v8 != 0) {
      goto LABEL_5;
    }
  }
  else {
    v6 = 1;
    do {
      v5 = *(_QWORD*)(v5 + 16);
      --v6;
    } while (v5 != v4);
    v7 = v6 != 0;
    nn_os_UnlockMutex_plt(v1 + 200);
    v8 = *((_QWORD*)this_ + 11);
    v189 = 0;
    if (v8 != 0) {
    LABEL_5:
      if (*((_BYTE*)this_ + 31) != 0) {
        v9 = "VideoTrackEncoding";
      }
      else {
        v9 = "MetadataTrackEncoding";
      }
      if (*((_BYTE*)this_ + 30) != 0) {
        v10 = "AudioTrackEncoding";
      }
      else {
        v10 = v9;
      }
      nn_os_SetThreadName_plt(v8, v10);
    }
  }
  v187 = 0;
  v188 = 0;
  if ((*((_BYTE*)this_ + 24) & 1) != 0) {
    v11 = 0;
    v176 = 0;
    v12 = 0;
    v174 = 0;
    v177 = 0;
    v175 = -1;
    v172 = 0;
    v173 = 1;
    goto LABEL_230;
  }
  v166 = 0;
  v167 = v3;
  v172 = 0;
  v13 = 0;
  v11 = 0;
  v160 = 0;
  v177 = 0;
  v163 = 0;
  v164 = 0;
  v162 = 0;
  v174 = 0;
  v165 = 0;
  v176 = 0;
  v170 = 0;
  v161 = 0;
  v14 = (atomic_uchar*)SdkData_e88330;
  v175 = -1;
  v173 = 1;
  while (1) {
    v12 = (*(__int64 (**)(_QWORD, __int64*, _QWORD))(
        **((_QWORD**)this_ + 2) + 24LL))(*((_QWORD*)this_ + 2), &v187, 0);
    if (v12 != 0) {
      goto LABEL_230;
    }
    if ((*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187) == 0 ||
        *((_BYTE*)this_ + 25) == 1 && (*((_BYTE*)this_ + 26) & 1) == 0) {
      goto LABEL_15;
    }
    v186 = 0;
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 56LL))(v187);
    if ((nandroid_MetaDataBase_findInt32_plt(v15, 1668247142, &v186) & 1) !=
            0 &&
        v186 != 0) {
      v16 = v14;
      if (*((_BYTE*)this_ + 304) != 1 || v13 <= 0) {
        v17 = X8CALL_X0(
            _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
                         **((_QWORD**)this_ + 2) + 16LL))(
                         (void*)&v180_.v180, (void*)*((_QWORD**)this_ + 2)));
        v18 = *((_QWORD*)this_ + 1);
        if (v18 != 0) {
          v17 = (_QWORD*)nandroid_RefBase_decStrong_plt(v18 + 16,
                                                        (char*)this_ + 8);
        }
        if (v18 != *((_QWORD*)this_ + 1)) {
          nandroid_sp_report_race_plt(v17);
        }
        *((_QWORD*)this_ + 1) = v180_.v180;
        if (*((_BYTE*)this_ + 28) == 1) {
          v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 16LL))(v187);
          v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 32LL))(v187);
          v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187);
          nandroid_MPEG4Writer_Track_makeAVCCodecSpecificData_plt(
              this_, v19 + v20, v21);
        }
        else if (*((_BYTE*)this_ + 33) == 1) {
          v52 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 16LL))(v187);
          v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 32LL))(v187);
          v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187);
          v55 = MovieMalloc_plt(v54);
          *((_QWORD*)this_ + 36) = v55;
          if (v55 != 0) {
            *((_QWORD*)this_ + 37) = v54;
            memcpy_plt(v55, v52 + v53, v54);
          }
        }
      }
      (**(void (***)(__int64))v187)(v187);
      v187 = 0;
      *((_BYTE*)this_ + 304) = 1;
      v14 = v16;
      goto LABEL_16;
    }
    if ((*((_BYTE*)this_ + 31) & 1) == 0 && (*((_BYTE*)this_ + 30) & 1) == 0 &&
        (*((_BYTE*)this_ + 32) & 1) == 0 &&
        (unsigned __int64)(*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(
            v187) >>
                26 !=
            0) {
      v130 = v187;
      v129 = *(void (***)(__int64))v187;
      goto LABEL_227;
    }
    v185 = 0;
    v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 56LL))(v187);
    v23 = nandroid_MetaDataBase_findInt32_plt(v22, 1836415076, &v185);
    v24 = v23 & ((_DWORD)v185 != 0);
    if (v24 == 1 && (nandroid_MPEG4Writer_Track_isExifData_plt(
                         this_, v187, (char*)&v185 + 4) &
                     1) == 0) {
    LABEL_15:
      (**(void (***)(__int64))v187)(v187);
      v187 = 0;
      goto LABEL_16;
    }
    v178 = v24;
    v171 = v13;
    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v14) != 0) {
      v119 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v119) = 1;
      __cxa_guard_release_plt(v14);
    }
    v25 = SdkData_e88338[0];
    v26 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v27 = SdkRoutine_4c3860(16, 96, v26);
    v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187);
    nandroid_MediaBuffer_MediaBuffer_plt_86f490(v27, v28);
    v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 16LL))(v187);
    v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 32LL))(v187);
    v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187);
    memcpy_plt(v29, v30 + v31, v32);
    v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 40LL))(v187);
    (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v27 + 48LL))(v27, 0, v33);
    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v14) != 0) {
      *(_DWORD*)v25 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v25) = 1;
      __cxa_guard_release_plt(v14);
    }
    v34 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v25);
    v35 = SdkRoutine_4c3860(16, 32, v34);
    v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v187 + 56LL))(v187);
    nandroid_MetaData_MetaData_plt_86f4f0(v35, v36);
    v37 = v188;
    v38 = nandroid_RefBase_incStrong_plt(v35 + 16, &v188);
    if (v37 != 0) {
      v38 = nandroid_RefBase_decStrong_plt(v37 + 16, &v188);
    }
    if (v37 != v188) {
      nandroid_sp_report_race_plt(v38);
    }
    v188 = v35;
    (**(void (***)(__int64))v187)(v187);
    v39 = v178;
    v187 = 0;
    if (v178 != 0) {
      v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 56LL))(v27);
      nandroid_MetaDataBase_setInt32_plt(v40, 1952998514, HIDWORD(v185));
    }
    v41 = 1;
    if ((*((_BYTE*)this_ + 28) & 1) == 0 && (*((_BYTE*)this_ + 29) & 1) == 0) {
      v41 = *((unsigned __int8*)this_ + 32);
    }
    v42 = v41 & (v178 ^ 1);
    v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
    v169 = v42;
    if (v42 == 1) {
      if (v43 >= 4) {
        v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        if (*(_DWORD*)(v44 + (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 32LL))(
                                 v27)) == 0x1000000) {
          v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 32LL))(v27);
          v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
          (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v27 + 48LL))(
              v27, v45 + 4, v46 - 4);
        }
      }
      v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
      v48 = *(_QWORD*)this_;
      if (*(_BYTE*)(*(_QWORD*)this_ + 77LL) == 1) {
        v49 = *((_BYTE*)this_ + 32);
        v168 = v47 + 4;
        v50 = *((_QWORD*)this_ + 9) + v47 + 4;
        *((_QWORD*)this_ + 8) = v50;
        *((_QWORD*)this_ + 9) = v50;
        if ((v49 & 1) != 0) {
          goto LABEL_69;
        }
      }
      else {
        v56 = *((_BYTE*)this_ + 32);
        v168 = v47 + 2;
        v50 = *((_QWORD*)this_ + 9) + v47 + 2;
        *((_QWORD*)this_ + 8) = v50;
        *((_QWORD*)this_ + 9) = v50;
        if ((v56 & 1) != 0) {
          goto LABEL_69;
        }
      }
    }
    else {
      v48 = *(_QWORD*)this_;
      v51 = *((_BYTE*)this_ + 32);
      v168 = v43;
      v50 = *((_QWORD*)this_ + 9) + v43;
      *((_QWORD*)this_ + 8) = v50;
      *((_QWORD*)this_ + 9) = v50;
      if ((v51 & 1) != 0) {
        goto LABEL_69;
      }
    }
    if ((*(_BYTE*)(v48 + 144) & 1) == 0) {
      v57 = 144;
      if (*(_BYTE*)(v48 + 78) == 0) {
        v57 = 152;
      }
      if ((*((_BYTE*)this_ + 128) & 1) != 0) {
        v58 = 4;
      }
      else {
        v58 = (unsigned int)(4 * *(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL));
      }
      *((_QWORD*)this_ + 8) =
          v50 +
          (unsigned int)(4 * *(_DWORD*)(*(_QWORD*)((char*)this_ + v57) + 4LL)) +
          v58 +
          (unsigned int)(8 * (*(_DWORD*)(*((_QWORD*)this_ + 23) + 4LL) +
                              *(_DWORD*)(*((_QWORD*)this_ + 22) + 4LL)) +
                         4 * *(_DWORD*)(*((_QWORD*)this_ + 21) + 4LL) +
                         12 * (*(_DWORD*)(*((_QWORD*)this_ + 24) + 4LL) +
                               *(_DWORD*)(*((_QWORD*)this_ + 20) + 4LL)));
    }
  LABEL_69:
    v59 = *(_QWORD*)(v48 + 16);
    if (v59 != 0) {
      v60 = *(__int64**)(v48 + 240);
      v61 = *(_QWORD*)(v48 + 120);
      for (i = (__int64*)v60[2]; i != v60; v61 += *(_QWORD*)(v63 + 64)) {
        v63 = *i;
        i = (__int64*)i[2];
      }
      if ((*(_BYTE*)(v48 + 144) & 1) == 0) {
        break;
      }
      if (v61 >= 95 * v59 / 100) {
        goto LABEL_271;
      }
    }
  LABEL_76:
    if (*(_QWORD*)(v48 + 24) != 0) {
      v64 = *(__int64***)(v48 + 240);
      v65 = (__int64**)v64[2];
      if (v65 != v64) {
        v66 = v7;
        v67 = v11;
        while (1) {
          v68 = *v65;
          if (((*v65)[4] & 1) == 0) {
            v69 = *v68;
            v70 = v68[5];
            nn_os_LockMutex_plt(*v68 + 200);
            v71 = *(_QWORD*)(v69 + 168);
            nn_os_UnlockMutex_plt(v69 + 200);
            v72 = v68[39];
            v73 = *v68;
            if (v72 == -1) {
              v74 = 0;
            }
            else {
              v74 = v72 - v71;
            }
            nn_os_LockMutex_plt(v73 + 200);
            v75 = *(int*)(v73 + 176);
            nn_os_UnlockMutex_plt(v73 + 200);
            if (v74 + v70 + v75 >= (signed __int64)*(_QWORD*)(v48 + 24)) {
              (**(void (***)(__int64))v27)(v27);
              (*(void (**)(_QWORD))(**((_QWORD**)this_ + 2) + 8LL))(
                  *((_QWORD*)this_ + 2));
              v11 = v67;
              LOBYTE(v7) = v66;
              goto LABEL_229;
            }
            v64 = *(__int64***)(v48 + 240);
          }
          v65 = (__int64**)v65[2];
          if (v65 == v64) {
            v48 = *(_QWORD*)this_;
            v11 = v67;
            v7 = v66;
            v59 = *(_QWORD*)(*(_QWORD*)this_ + 16LL);
            v14 = (atomic_uchar*)SdkData_e88330;
            v39 = v178;
            break;
          }
        }
      }
    }
    if (v59 != 0) {
      v76 = *(__int64**)(v48 + 240);
      v77 = *(_QWORD*)(v48 + 120);
      for (j = (__int64*)v76[2]; j != v76; v77 += *(_QWORD*)(v79 + 64)) {
        v79 = *j;
        j = (__int64*)j[2];
      }
      if ((*(_BYTE*)(v48 + 144) & 1) == 0) {
        v77 += 1024;
      }
      if (v77 >= 90 * v59 / 100) {
        nn_os_LockMutex_plt(v48 + 200);
        if ((*(_BYTE*)(v48 + 83) & 1) == 0) {
          *(_BYTE*)(v48 + 83) = 1;
        }
        nn_os_UnlockMutex_plt(v48 + 200);
      }
    }
    v184 = 0;
    v13 = v171 + 1;
    nandroid_MetaDataBase_findInt32_plt(v188, 1937337955, &v184);
    nandroid_MetaDataBase_findInt64_plt(v188, 1953066341, &v189);
    if (*((_BYTE*)this_ + 31) == 1) {
      if ((*((_BYTE*)this_ + 34) & 1) == 0 && v184 == 0) {
        goto LABEL_137;
      }
      if (v184 != 0) {
        *((_BYTE*)this_ + 34) = 1;
      }
    }
    if ((*((_BYTE*)this_ + 32) & 1) != 0) {
      goto LABEL_117;
    }
    if (*(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL) != 0) {
      v80 = v189;
      if (*((_BYTE*)this_ + 26) != 1) {
        goto LABEL_111;
      }
    }
    else {
      v83 = v7;
      v84 = systemTime_plt(1);
      v85 = *(_QWORD*)this_;
      v86 = v189;
      v87 = (unsigned __int128)(v84 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
      v88 = *(_QWORD*)this_ + 200LL;
      *((_QWORD*)this_ + 41) = (v87 >> 7) + ((unsigned __int64)v87 >> 63);
      nn_os_LockMutex_plt(v88);
      v89 = *(_QWORD*)(v85 + 168);
      if (v89 < 0 || v89 > v86) {
        *(_QWORD*)(v85 + 168) = v86;
      }
      nn_os_UnlockMutex_plt(v85 + 200);
      v80 = v189;
      v7 = v83;
      *((_QWORD*)this_ + 39) = v189;
      v170 = v80;
      if (*((_BYTE*)this_ + 26) != 1) {
      LABEL_111:
        v82 = v170;
        goto LABEL_112;
      }
    }
    if (v80 - v170 < 0 || (v81 = v80 - v170 - *((_QWORD*)this_ + 5)) < v177) {
      v129 = *(void (***)(__int64))v27;
      v130 = v27;
    LABEL_227:
      (*v129)(v130);
      (*(void (**)(_QWORD))(**((_QWORD**)this_ + 2) + 8LL))(
          *((_QWORD*)this_ + 2));
      *((_BYTE*)this_ + 35) = 1;
      goto LABEL_229;
    }
    *((_BYTE*)this_ + 26) = 0;
    v82 = v170 - v177 + v81;
  LABEL_112:
    v170 = v82;
    v90 = v171 + 1;
    v182_.v182[1] = 0;
    v182_.v183 = 0;
    v180_.v181 = 0;
    v182_.v182[0] = 0;
    v189 = v80 - v82;
    v180_.v180 = v80 - v82;
    if (v80 - v82 < 0) {
      goto LABEL_113;
    }
    if (*((_BYTE*)this_ + 31) == 1) {
      v179 = 0;
      nandroid_MetaDataBase_findInt64_plt(v188, 1684366164, &v179);
      v106 = v179;
      v107 = (v179 + v164) / ++v163;
      v164 = v107;
      v108 = v107 + v162;
      if (v179 == v162) {
        v106 = v108;
      }
      v162 = v106;
      v109 = v106 - v170;
      v110 = *((_QWORD*)this_ + 7);
      if (v110 < 0) {
        v109 &= ~(v109 >> 63);
      }
      else {
        v111 = *((_DWORD*)this_ + 20);
        v112 = v111 + 999999;
        if (v111 < 0) {
          v112 = 1000000;
        }
        LODWORD(v113) = v112 / v111;
        if ((int)v113 <= 100) {
          v113 = 100;
        }
        else {
          v113 = (unsigned int)v113;
        }
        v114 = v110 + v113;
        if (v114 > v109) {
          v109 = v114;
        }
        if ((unsigned __int64)v109 < 0x65) {
          v109 = v164;
        }
      }
      v179 = v109;
      *((_QWORD*)this_ + 7) = v109;
      v180_.v181 = v109;
      if (v184 != 0) {
        v115 = "Key frame";
      }
      else {
        v115 = "Non-Key frame";
      }
      MPEG4Writer_5130c0(v182_.v182, (__int64)v115);
      if (*((_QWORD*)this_ + 30) >= 0xAu) {
        MPEG4Writer_50d980((__int64)this_ + 224);
      }
      MPEG4Writer_50d9e0_alt1((__int64*)this_ + 28, &v180_.v180);
      v116 = v189 - v179 + 1800000000;
      if (v116 < 0) {
        goto LABEL_113;
      }
      v189 = v179;
      v117 = v116 * *((int*)this_ + 20);
      v11 = (v117 + 500000) / 1000000;
      if (v117 > 0xF423FFFF85EDFLL) {
        goto LABEL_113;
      }
      if (*(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL) != 0) {
        if (v11 == v175) {
          v118 = (unsigned int)(v176 + 1);
        }
        else {
          nandroid_MPEG4Writer_Track_addOneCttsTableEntry_plt(this_, (int)v176,
                                                              v175);
          v118 = 1;
          v175 = v11;
        }
        v176 = v118;
      }
      else {
        nandroid_MPEG4Writer_Track_addOneCttsTableEntry_plt(this_, 1,
                                                            (unsigned int)v11);
        v176 = 0;
        v175 = v11;
      }
      if (*(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL) != 0) {
        if (v11 <= (signed __int64)*((_QWORD*)this_ + 27)) {
          if (v11 < (signed __int64)*((_QWORD*)this_ + 26)) {
            *((_QWORD*)this_ + 25) = v116;
            *((_QWORD*)this_ + 26) = v11;
          }
        }
        else {
          *((_QWORD*)this_ + 27) = v11;
        }
      }
      else {
        *((_QWORD*)this_ + 26) = v11;
        *((_QWORD*)this_ + 27) = v11;
      }
    }
    if (*(_BYTE*)(*(_QWORD*)this_ + 76LL) == 1 &&
        (*((_BYTE*)this_ + 30) & 1) != 0) {
      nandroid_MPEG4Writer_Track_updateDriftTime_plt(this_, &v188);
    }
    v121 = v189;
    if ((v189 & 0x8000000000000000LL) == 0) {
      if (v189 > (signed __int64)*((_QWORD*)this_ + 5)) {
        *((_QWORD*)this_ + 5) = v189;
      }
      v122 = *((int*)this_ + 20);
      v123 =
          (v160 * v122 + 500000) / -1000000 + (v121 * v122 + 500000) / 1000000;
      if (v123 >= 0) {
        if (v174 != 0 && v174 != v123) {
          v124 = (1000000 * (v174 - v123) + (int)v122 / 2) / v122;
          if ((unsigned __int64)(v124 + 99) <= 0xC6) {
            v123 = v174;
            v189 = v124 + v121;
          }
        }
        v125 = *((unsigned int**)this_ + 17);
        LODWORD(v179) = htonl_plt_alt1(v168);
        MPEG4Writer_509840(v125, &v179);
        v126 = *(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL);
        if (v126 < 3) {
          if (*((_BYTE*)this_ + 128) != 1) {
            goto LABEL_216;
          }
        }
        else {
          if (v126 == 3 || v123 != v174) {
            nandroid_MPEG4Writer_Track_addOneSttsTableEntry_plt(this_, v173,
                                                                v174);
            v127 = 1;
          }
          else {
            v127 = v173 + 1;
          }
          v173 = v127;
          if (*((_BYTE*)this_ + 128) != 1) {
          LABEL_216:
            v128 = v189;
            if (v184 != 0) {
              goto LABEL_217;
            }
            goto LABEL_218;
          }
        }
        if (*(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL) >= 2u && v168 != v161) {
          *((_BYTE*)this_ + 128) = 0;
        }
        v161 = v168;
        v128 = v189;
        if (v184 != 0) {
        LABEL_217:
          nandroid_MPEG4Writer_Track_addOneStssTableEntry_plt(
              this_, *(unsigned int*)(*((_QWORD*)this_ + 17) + 4LL));
        }
      LABEL_218:
        v177 = v128 - v160;
        if (*((_BYTE*)this_ + 305) == 1) {
          if (*((__int64*)this_ + 42) <= 0) {
            *((_QWORD*)this_ + 42) = *((_QWORD*)this_ + 39);
          }
          nandroid_MPEG4Writer_Track_trackProgressStatus_plt(this_, v189);
        }
        v92 = 1;
        v91 = 0;
        v174 = v123;
        v160 = v128;
        if ((v182_.v182[0] & 1) == 0) {
          goto LABEL_115;
        }
      LABEL_114:
        SdkRoutine_857220(v182_.v183, v182_.v182[0] & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_115;
      }
    }
  LABEL_113:
    (**(void (***)(__int64))v27)(v27);
    (*(void (**)(_QWORD))(**((_QWORD**)this_ + 2) + 8LL))(
        *((_QWORD*)this_ + 2));
    v91 = 1;
    v92 = 0;
    *((_BYTE*)this_ + 35) = 1;
    if ((v182_.v182[0] & 1) != 0) {
      goto LABEL_114;
    }
  LABEL_115:
    if (v92 == 0) {
      if ((v91 & 1) != 0) {
        goto LABEL_229;
      }
      goto LABEL_152;
    }
    v39 = v178;
    v13 = v171 + 1;
  LABEL_117:
    if (!v7) {
      v97 = nandroid_MPEG4Writer_addSample_l_plt(*(_QWORD*)this_, v27, v169,
                                                 HIDWORD(v185), &v180_.v180);
      if (*((_BYTE*)this_ + 32) == 1) {
        nandroid_MPEG4Writer_Track_addItemOffsetAndSize_plt(this_, v97,
                                                            v180_.v180, v39);
      }
      else {
        v104 = 152;
        if (*(_BYTE*)(*(_QWORD*)this_ + 78LL) != 0) {
          v104 = 144;
        }
        if (*(_DWORD*)(*(_QWORD*)((char*)this_ + v104) + 4LL) == 0) {
          nandroid_MPEG4Writer_Track_addChunkOffset_plt(this_, v97);
        }
      }
    LABEL_137:
      (**(void (***)(__int64))v27)(v27);
      goto LABEL_16;
    }
    v93 = *((_QWORD*)this_ + 15);
    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v14) != 0) {
      v120 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v120) = 1;
      __cxa_guard_release_plt(v14);
    }
    v94 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v95 = (_QWORD*)SdkRoutine_4c3860(16, 24, v94);
    *v95 = v27;
    v95[2] = v93;
    v96 = *(_QWORD*)(v93 + 8);
    v95[1] = v96;
    *(_QWORD*)(v96 + 16) = v95;
    *(_QWORD*)(v93 + 8) = v95;
    if (*((_BYTE*)this_ + 32) == 1) {
      nandroid_MPEG4Writer_Track_bufferChunk_plt(this_, 0);
      ++v172;
    }
    else if ((_DWORD)v167 != 0) {
      v98 = v189;
      if (v166 != 0) {
        v99 = v189 - v166;
        if (v189 - v166 > v167) {
          v90 = v13;
          if (v99 > (signed __int64)*((_QWORD*)this_ + 6)) {
            *((_QWORD*)this_ + 6) = v99;
          }
          v100 = *((_QWORD*)this_ + 15);
          if (v172 == 0) {
            v101 = *(_QWORD*)(v100 + 16);
            goto LABEL_145;
          }
          v101 = *(_QWORD*)(v100 + 16);
          if (v101 == v100) {
            v102 = 0;
          }
          else {
            v102 = 0;
            v103 = *(_QWORD*)(v100 + 16);
            do {
              v103 = *(_QWORD*)(v103 + 16);
              ++v102;
            } while (v103 != v100);
          }
          if (v102 != v165) {
          LABEL_145:
            if (v101 == v100) {
              v105 = 0;
            }
            else {
              v105 = 0;
              do {
                v101 = *(_QWORD*)(v101 + 16);
                ++v105;
              } while (v101 != v100);
            }
            v165 = v105;
            nandroid_MPEG4Writer_Track_addOneStscTableEntry_plt(this_, v172 + 1,
                                                                v105);
            v98 = v189;
          }
          nandroid_MPEG4Writer_Track_bufferChunk_plt(this_, v98);
          ++v172;
          v166 = v189;
        LABEL_152:
          v13 = v90;
        }
      }
      else {
        v166 = v189;
      }
    }
    else {
      nandroid_MPEG4Writer_Track_addOneStscTableEntry_plt(this_, ++v172, 1);
      nandroid_MPEG4Writer_Track_bufferChunk_plt(this_, v189);
    }
  LABEL_16:
    if ((*((_BYTE*)this_ + 24) & 1) != 0) {
      goto LABEL_229;
    }
  }
  if (v61 + 1024 < v59) {
    goto LABEL_76;
  }
LABEL_271:
  (*(void (**)(_QWORD))(**((_QWORD**)this_ + 2) + 8LL))(*((_QWORD*)this_ + 2));
  (**(void (***)(__int64))v27)(v27);
LABEL_229:
  v12 = 0;
LABEL_230:
  if ((*((_BYTE*)this_ + 35) & 1) != 0 ||
      (*((_BYTE*)this_ + 32) & 1) == 0 &&
          *(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL) == 0 ||
      *((_BYTE*)this_ + 31) == 1 &&
          *(_DWORD*)(*((_QWORD*)this_ + 21) + 4LL) == 0 ||
      (v131 = v12,
       (unsigned int)nandroid_MPEG4Writer_Track_checkCodecSpecificData_plt(
           this_) != 0)) {
    nandroid_MPEG4Writer_Track_dumpTimeStamps_plt(this_);
    v131 = -1007;
  }
  v132 = *(_QWORD*)this_;
  nn_os_LockMutex_plt(*(_QWORD*)this_ + 200LL);
  nn_os_UnlockMutex_plt(v132 + 200);
  if (*((_BYTE*)this_ + 32) == 1) {
    if (*(_QWORD*)(*((_QWORD*)this_ + 15) + 16LL) != *((_QWORD*)this_ + 15)) {
      nandroid_MPEG4Writer_Track_bufferChunk_plt(this_, 0);
    }
    goto LABEL_265;
  }
  if (v7) {
    v133 = *((_QWORD*)this_ + 15);
    v134 = v173;
    v135 = *(_QWORD*)(v133 + 16);
    if (v135 != v133) {
      v136 = 0;
      do {
        v135 = *(_QWORD*)(v135 + 16);
        ++v136;
      } while (v135 != v133);
      v137 = *((_QWORD*)this_ + 20);
      LODWORD(v180_.v180) = htonl_plt_alt1((unsigned int)(v172 + 1));
      MPEG4Writer_5096b0(v137, &v180_.v180);
      v138 = *((_QWORD*)this_ + 20);
      LODWORD(v180_.v180) = htonl_plt_alt1(v136);
      MPEG4Writer_5096b0(v138, &v180_.v180);
      v139 = *((_QWORD*)this_ + 20);
      LODWORD(v180_.v180) = htonl_plt_alt1(1);
      MPEG4Writer_5096b0(v139, &v180_.v180);
      nandroid_MPEG4Writer_Track_bufferChunk_plt(this_, v189);
    }
  }
  else {
    v140 = *((_QWORD*)this_ + 20);
    v141 = *(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL);
    v142 = htonl_plt_alt1(1);
    LODWORD(v180_.v180) = v142;
    MPEG4Writer_5096b0(v140, &v180_.v180);
    v143 = *((_QWORD*)this_ + 20);
    LODWORD(v180_.v180) = htonl_plt_alt1(v141);
    MPEG4Writer_5096b0(v143, &v180_.v180);
    v144 = *((_QWORD*)this_ + 20);
    LODWORD(v180_.v180) = v142;
    MPEG4Writer_5096b0(v144, &v180_.v180);
    v134 = v173;
  }
  v145 = *(_DWORD*)(*((_QWORD*)this_ + 17) + 4LL);
  if (v145 == 1) {
    v146 = v134;
  }
  else {
    v146 = v134 + 1;
  }
  if (v145 == 1) {
    v147 = 0;
  }
  else {
    v147 = v177;
  }
  if (v145 > 2) {
    v154 = *((_QWORD*)this_ + 22);
    LODWORD(v180_.v180) = htonl_plt_alt1((unsigned int)(v134 + 1));
    MPEG4Writer_5099a0(v154, &v180_.v180);
    v155 = *((_QWORD*)this_ + 22);
    LODWORD(v180_.v180) = htonl_plt_alt1(v174);
    v153 = v155;
  LABEL_259:
    MPEG4Writer_5099a0(v153, &v180_.v180);
  }
  else {
    v148 = *((_QWORD*)this_ + 22);
    if (v145 == 1) {
      v149 = 0;
    }
    else {
      v149 = v174;
    }
    LODWORD(v180_.v180) = htonl_plt_alt1(1);
    MPEG4Writer_5099a0(v148, &v180_.v180);
    v150 = *((_QWORD*)this_ + 22);
    v151 = htonl_plt_alt1(v149);
    LODWORD(v180_.v180) = v151;
    MPEG4Writer_5099a0(v150, &v180_.v180);
    if (v146 >= 2) {
      v152 = *((_QWORD*)this_ + 22);
      LODWORD(v180_.v180) = htonl_plt_alt1((unsigned int)(v146 - 1));
      MPEG4Writer_5099a0(v152, &v180_.v180);
      v153 = *((_QWORD*)this_ + 22);
      LODWORD(v180_.v180) = v151;
      goto LABEL_259;
    }
  }
  if (v11 == v175 && (int)v176 >= 1 && (*((_BYTE*)this_ + 31) & 1) != 0) {
    v156 = v11;
    v157 = *((_QWORD*)this_ + 23);
    LODWORD(v180_.v180) = htonl_plt_alt1(v176);
    MPEG4Writer_5099a0(v157, &v180_.v180);
    v158 = *((_QWORD*)this_ + 23);
    LODWORD(v180_.v180) = htonl_plt_alt1(v156);
    MPEG4Writer_5099a0(v158, &v180_.v180);
  }
  *((_QWORD*)this_ + 5) += v147;
LABEL_265:
  *((_BYTE*)this_ + 306) = 1;
  if (v188 != 0) {
    nandroid_RefBase_decStrong_plt(v188 + 16, &v188);
  }
  if (v131 == -1011) {
    return 0;
  }
  else {
    return v131;
  }
}

__int64 nandroid_MPEG4Writer_Track_dumpTimeStamps(__int64 this_)
{
  __int64 v1;
  const char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64* v30;
  char* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  char* v45;
  unsigned __int64 v46;
  char* v47;
  unsigned __int64 v48;
  struct {
    _QWORD v49[2];
    char* v50;
  } v49_;
  _QWORD v51[3];
  struct {
    _QWORD v52[2];
    __int64 v53;
  } v52_;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;
  struct {
    __int64 v57;
    unsigned __int64 v58;
    char* v59;
  } v57_;
  struct {
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v60_;
  struct {
    __int64 v63;
    __int64 v64;
    __int64 v65;
  } v63_;
  struct {
    __int64 v66;
    unsigned __int64 v67;
    char* v68;
  } v66_;
  struct {
    _QWORD v69[2];
    __int64 v70;
  } v69_;

  if (*(_QWORD*)(this_ + 240) != 0) {
    v1 = this_;
    if ((*(_BYTE*)(this_ + 30) & 1) != 0) {
      v2 = "Audio";
    }
    else if ((*(_BYTE*)(this_ + 31) & 1) != 0) {
      v2 = "Video";
    }
    else if (*(_BYTE*)(this_ + 32) != 0) {
      v2 = "Image";
    }
    else {
      v2 = "Metadata";
    }
    v3 = strlen_plt(v2);
    if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
      nn_fs_dc4d0();
    }
    v4 = v3;
    if (v3 >= 0x17) {
      if ((v3 | 7) == 0x17) {
        v6 = 26;
      }
      else {
        v6 = (v3 | 7) + 1;
      }
      v5 = (char*)SdkRoutine_85e050(v6);
      v57_.v58 = v4;
      v57_.v59 = v5;
      v57_.v57 = v6 | 1;
    }
    else {
      LOBYTE(v57_.v57) = 2 * v3;
      v5 = (char*)&v57_.v57 + 1;
      if (v3 == 0) {
      LABEL_18:
        v5[v4] = 0;
        v7 = (__int64*)SdkRoutine_86fc70(&v57_.v57, 0, "Dumping ", 8);
        v9 = v7[1];
        v8 = v7[2];
        v60_.v60 = *v7;
        v60_.v61 = v9;
        v60_.v62 = v8;
        v7[1] = 0;
        v7[2] = 0;
        *v7 = 0;
        v10 = (__int64*)SdkRoutine_86fc80(&v60_.v60, " track's last ", 14);
        v12 = v10[1];
        v11 = v10[2];
        v63_.v63 = *v10;
        v63_.v64 = v12;
        v63_.v65 = v11;
        v10[1] = 0;
        v10[2] = 0;
        *v10 = 0;
        std___1_to_string_plt_86fc90((void*)(&v54_.v54), *(_QWORD*)(v1 + 240));
        if ((v54_.v54 & 1) != 0) {
          v13 = v54_.v56;
        }
        else {
          v13 = (char*)&v54_.v54 + 1;
        }
        if ((v54_.v54 & 1) != 0) {
          v14 = v54_.v55;
        }
        else {
          v14 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
        }
        v15 = (__int64*)SdkRoutine_86fc80(&v63_.v63, v13, v14);
        v17 = v15[1];
        v16 = (char*)v15[2];
        v66_.v66 = *v15;
        v66_.v67 = v17;
        v66_.v68 = v16;
        v15[1] = 0;
        v15[2] = 0;
        *v15 = 0;
        this_ = SdkRoutine_86fc80(
            &v66_.v66, " frames' timestamps(pts, dts) and frame type : ", 47);
        v19 = *(_QWORD*)(this_ + 8);
        v18 = *(_QWORD*)(this_ + 16);
        v69_.v69[0] = *(_QWORD*)this_;
        v69_.v69[1] = v19;
        v69_.v70 = v18;
        *(_QWORD*)(this_ + 8) = 0;
        *(_QWORD*)(this_ + 16) = 0;
        *(_QWORD*)this_ = 0;
        if ((v66_.v66 & 1) != 0) {
          this_ = SdkRoutine_857220(v66_.v68, v66_.v66 & 0xFFFFFFFFFFFFFFFELL);
          if ((v54_.v54 & 1) == 0) {
          LABEL_26:
            if ((v63_.v63 & 1) == 0) {
              goto LABEL_27;
            }
            goto LABEL_33;
          }
        }
        else if ((v54_.v54 & 1) == 0) {
          goto LABEL_26;
        }
        this_ = SdkRoutine_857220(v54_.v56, v54_.v54 & 0xFFFFFFFFFFFFFFFELL);
        if ((v63_.v63 & 1) == 0) {
        LABEL_27:
          if ((v60_.v60 & 1) == 0) {
            goto LABEL_28;
          }
          goto LABEL_34;
        }
      LABEL_33:
        this_ = SdkRoutine_857220(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
        if ((v60_.v60 & 1) == 0) {
        LABEL_28:
          v20 = v1 + 224;
          if ((v57_.v57 & 1) == 0) {
            goto LABEL_29;
          }
        LABEL_35:
          this_ = SdkRoutine_857220(v57_.v59, v57_.v57 & 0xFFFFFFFFFFFFFFFELL);
          v21 = *(_QWORD*)(v1 + 232);
          if (v21 == v20) {
          LABEL_73:
            if ((v69_.v69[0] & 1) != 0) {
              return SdkRoutine_857220(v69_.v70,
                                       v69_.v69[0] & 0xFFFFFFFFFFFFFFFELL);
            }
            return this_;
          }
          while (1) {
          LABEL_38:
            std___1_to_string_plt_86fca0((void*)(v51), *(_QWORD*)(v21 + 16));
            v22 = (_QWORD*)SdkRoutine_86fc70(v51, 0, "\n(", 2);
            v24 = v22[1];
            v23 = v22[2];
            v52_.v52[0] = *v22;
            v52_.v52[1] = v24;
            v52_.v53 = v23;
            v22[1] = 0;
            v22[2] = 0;
            *v22 = 0;
            v25 = (__int64*)SdkRoutine_86fc80(v52_.v52, "us, ", 4);
            v27 = v25[1];
            v26 = (char*)v25[2];
            v54_.v54 = *v25;
            v54_.v55 = v27;
            v54_.v56 = v26;
            v25[1] = 0;
            v25[2] = 0;
            *v25 = 0;
            std___1_to_string_plt_86fca0((void*)(v49_.v49),
                                         *(_QWORD*)(v21 + 24));
            if ((v49_.v49[0] & 1) != 0) {
              v28 = v49_.v50;
            }
            else {
              v28 = (char*)v49_.v49 + 1;
            }
            if ((v49_.v49[0] & 1) != 0) {
              v29 = v49_.v49[1];
            }
            else {
              v29 = (unsigned __int64)LOBYTE(v49_.v49[0]) >> 1;
            }
            v30 = (__int64*)SdkRoutine_86fc80(&v54_.v54, v28, v29);
            v32 = v30[1];
            v31 = (char*)v30[2];
            v57_.v57 = *v30;
            v57_.v58 = v32;
            v57_.v59 = v31;
            v30[1] = 0;
            v30[2] = 0;
            *v30 = 0;
            v33 = (__int64*)SdkRoutine_86fc80(&v57_.v57, "us ", 3);
            v35 = v33[1];
            v34 = v33[2];
            v60_.v60 = *v33;
            v60_.v61 = v35;
            v60_.v62 = v34;
            v33[1] = 0;
            v33[2] = 0;
            *v33 = 0;
            v36 = *(unsigned __int8*)(v21 + 32);
            v37 = (v36 & 1) == 0;
            v38 = v36 >> 1;
            if (v37) {
              v39 = v21 + 33;
            }
            else {
              v39 = *(_QWORD*)(v21 + 48);
            }
            if (v37) {
              v40 = v38;
            }
            else {
              v40 = *(_QWORD*)(v21 + 40);
            }
            v41 = (__int64*)SdkRoutine_86fc80(&v60_.v60, v39, v40);
            v43 = v41[1];
            v42 = v41[2];
            v63_.v63 = *v41;
            v63_.v64 = v43;
            v63_.v65 = v42;
            v41[1] = 0;
            v41[2] = 0;
            *v41 = 0;
            v44 = (__int64*)SdkRoutine_86fc80(&v63_.v63, ") ", 2);
            v46 = v44[1];
            v45 = (char*)v44[2];
            v66_.v66 = *v44;
            v66_.v67 = v46;
            v66_.v68 = v45;
            v44[1] = 0;
            v44[2] = 0;
            *v44 = 0;
            if ((v66_.v66 & 1) != 0) {
              v47 = v66_.v68;
            }
            else {
              v47 = (char*)&v66_.v66 + 1;
            }
            if ((v66_.v66 & 1) != 0) {
              v48 = v66_.v67;
            }
            else {
              v48 = (unsigned __int64)(unsigned __int8)v66_.v66 >> 1;
            }
            this_ = SdkRoutine_86fc80(v69_.v69, v47, v48);
            if ((v66_.v66 & 1) != 0) {
              this_ =
                  SdkRoutine_857220(v66_.v68, v66_.v66 & 0xFFFFFFFFFFFFFFFELL);
              if ((v63_.v63 & 1) == 0) {
              LABEL_58:
                if ((v60_.v60 & 1) == 0) {
                  goto LABEL_59;
                }
                goto LABEL_67;
              }
            }
            else if ((v63_.v63 & 1) == 0) {
              goto LABEL_58;
            }
            this_ =
                SdkRoutine_857220(v63_.v65, v63_.v63 & 0xFFFFFFFFFFFFFFFELL);
            if ((v60_.v60 & 1) == 0) {
            LABEL_59:
              if ((v57_.v57 & 1) == 0) {
                goto LABEL_60;
              }
              goto LABEL_68;
            }
          LABEL_67:
            this_ =
                SdkRoutine_857220(v60_.v62, v60_.v60 & 0xFFFFFFFFFFFFFFFELL);
            if ((v57_.v57 & 1) == 0) {
            LABEL_60:
              if ((v49_.v49[0] & 1) == 0) {
                goto LABEL_61;
              }
              goto LABEL_69;
            }
          LABEL_68:
            this_ =
                SdkRoutine_857220(v57_.v59, v57_.v57 & 0xFFFFFFFFFFFFFFFELL);
            if ((v49_.v49[0] & 1) == 0) {
            LABEL_61:
              if ((v54_.v54 & 1) == 0) {
                goto LABEL_62;
              }
              goto LABEL_70;
            }
          LABEL_69:
            this_ =
                SdkRoutine_857220(v49_.v50, v49_.v49[0] & 0xFFFFFFFFFFFFFFFELL);
            if ((v54_.v54 & 1) == 0) {
            LABEL_62:
              if ((v52_.v52[0] & 1) == 0) {
                goto LABEL_63;
              }
              goto LABEL_71;
            }
          LABEL_70:
            this_ =
                SdkRoutine_857220(v54_.v56, v54_.v54 & 0xFFFFFFFFFFFFFFFELL);
            if ((v52_.v52[0] & 1) == 0) {
            LABEL_63:
              if ((v51[0] & 1) != 0) {
                goto LABEL_72;
              }
              goto LABEL_37;
            }
          LABEL_71:
            this_ =
                SdkRoutine_857220(v52_.v53, v52_.v52[0] & 0xFFFFFFFFFFFFFFFELL);
            if ((v51[0] & 1) != 0) {
            LABEL_72:
              this_ = SdkRoutine_857220(v51[2], v51[0] & 0xFFFFFFFFFFFFFFFELL);
            }
          LABEL_37:
            v21 = *(_QWORD*)(v21 + 8);
            if (v21 == v20) {
              goto LABEL_73;
            }
          }
        }
      LABEL_34:
        this_ = SdkRoutine_857220(v60_.v62, v60_.v60 & 0xFFFFFFFFFFFFFFFELL);
        v20 = v1 + 224;
        if ((v57_.v57 & 1) == 0) {
        LABEL_29:
          v21 = *(_QWORD*)(v1 + 232);
          if (v21 != v20) {
            goto LABEL_38;
          }
          goto LABEL_73;
        }
        goto LABEL_35;
      }
    }
    memcpy_plt(v5, v2, v4);
    goto LABEL_18;
  }
  return this_;
}

__int64 MPEG4Writer_50d980(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = (_QWORD*)v1[1];
  *(_QWORD*)(*v1 + 8LL) = v2;
  *v2 = *v1;
  --*(_QWORD*)(a1 + 16);
  if ((v1[4] & 1) != 0) {
    SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  }
  return SdkRoutine_857220(v1, 56);
}

_QWORD* MPEG4Writer_50d9e0(__int64* a1, __int64* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = (_QWORD*)SdkRoutine_85e050(0x38u);
  v5 = *a2;
  v6 = a2[1];
  v7 = result;
  *result = 0;
  result[1] = 0;
  result[2] = v5;
  result[3] = v6;
  if ((a2[2] & 1) != 0) {
    result = (_QWORD*)nandroid_extractors_mp4_4f61b0(result + 4, a2[4], a2[3]);
  }
  else {
    v8 = a2[3];
    v9 = a2[4];
    result[4] = a2[2];
    result[5] = v8;
    result[6] = v9;
  }
  v10 = *a1;
  *v7 = *a1;
  v7[1] = (__int64)a1;
  *(_QWORD*)(v10 + 8) = v7;
  *a1 = (__int64)v7;
  ++a1[2];
  return result;
}

_QWORD* MPEG4Writer_50dda0(_QWORD* a1, __int64 a2)
{
  atomic_uchar* v4;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v6)();
  _QWORD** v7;
  _QWORD* result;
  __int64 v9;
  __int64* v10;
  __int64* i;
  _QWORD** v12;
  __int64 v13;
  __int64 v14;

  *a1 = SdkData_e88a18 + 16;
  v4 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v6 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
  result = (_QWORD*)SdkRoutine_4c3860(16, 24, v7);
  a1[1] = result;
  result[1] = result;
  v9 = a1[1];
  *(_QWORD*)(v9 + 16) = v9;
  v10 = *(__int64**)(a2 + 8);
  for (i = (__int64*)v10[2]; i != v10; i = (__int64*)i[2]) {
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
      *(_DWORD*)v6 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(v4);
    }
    v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
    result = (_QWORD*)SdkRoutine_4c3860(16, 24, v12);
    v13 = *i;
    result[2] = v9;
    *result = v13;
    v14 = *(_QWORD*)(v9 + 8);
    result[1] = v14;
    *(_QWORD*)(v14 + 16) = result;
    *(_QWORD*)(v9 + 8) = result;
  }
  return result;
}

__int64 nandroid_MPEG4Writer_Track_writeHdlrBox(void* this_)
{
  __int64 v2;
  int v3;
  __int64 v4;
  const char* v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  int v13;

  nandroid_MPEG4Writer_beginBox_plt_86f8e0(*(_QWORD*)this_, "hdlr");
  v2 = *(_QWORD*)this_;
  v3 = htonl_plt_alt1(0);
  v13 = v3;
  nandroid_MPEG4Writer_write_506f80(v2, (__int64)&v13, 1, 4);
  v4 = *(_QWORD*)this_;
  v13 = v3;
  nandroid_MPEG4Writer_write_506f80(v4, (__int64)&v13, 1, 4);
  if (*((_BYTE*)this_ + 31) != 0) {
    v5 = "vide";
  }
  else {
    v5 = "meta";
  }
  if (*((_BYTE*)this_ + 30) != 0) {
    v6 = "soun";
  }
  else {
    v6 = v5;
  }
  nandroid_MPEG4Writer_write_506f80(*(_QWORD*)this_, (__int64)v6, 1, 4);
  v7 = *(_QWORD*)this_;
  v13 = v3;
  nandroid_MPEG4Writer_write_506f80(v7, (__int64)&v13, 1, 4);
  v8 = *(_QWORD*)this_;
  v13 = v3;
  nandroid_MPEG4Writer_write_506f80(v8, (__int64)&v13, 1, 4);
  v9 = *(_QWORD*)this_;
  v13 = v3;
  nandroid_MPEG4Writer_write_506f80(v9, (__int64)&v13, 1, 4);
  if (*((_BYTE*)this_ + 31) != 0) {
    v10 = "VideoHandle";
  }
  else {
    v10 = "MetadHandle";
  }
  if (*((_BYTE*)this_ + 30) != 0) {
    v11 = "SoundHandle";
  }
  else {
    v11 = v10;
  }
  nandroid_MPEG4Writer_write_506f80(*(_QWORD*)this_, (__int64)v11, 1, 12);
  return nandroid_MPEG4Writer_endBox_plt(*(_QWORD*)this_);
}

__int64 MPEG4Writer_512980(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88a30 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

unsigned __int64* MPEG4Writer_5130c0(unsigned __int64* a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v4 = strlen_plt(a2);
  v5 = a2;
  v6 = *a1;
  v7 = v4;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  else {
    v8 = 22;
  }
  v9 = *a1;
  if (v4 > v8) {
    if (v4 - v8 > -10LL - v8) {
      nn_fs_dc4d0_alt1(a1, v5);
    }
    v10 = v5;
    if ((v6 & 1) != 0) {
      v11 = (char*)a1[2];
    }
    else {
      v11 = (char*)a1 + 1;
    }
    if (v8 > 0x7FFFFFFFFFFFFFF2LL) {
      v14 = -9;
    }
    else {
      v12 = 2 * v8;
      if (v4 > 2 * v8) {
        v12 = v4;
      }
      if ((v12 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v12 | 7) + 1;
      }
      if (v12 >= 0x17) {
        v14 = v13;
      }
      else {
        v14 = 23;
      }
    }
    v15 = SdkRoutine_85e050(v14);
    memcpy_plt(v15, v10, v7);
    if (v8 != 22) {
      SdkRoutine_857220(v11, v8 + 1);
    }
    a1[2] = v15;
    *a1 = v14 | 1;
  LABEL_29:
    a1[1] = v7;
    goto LABEL_30;
  }
  if ((v6 & 1) != 0) {
    v15 = a1[2];
  }
  else {
    v15 = (__int64)a1 + 1;
  }
  if (v4 != 0) {
    memmove_plt(v15, v5, v4);
    v9 = *(_BYTE*)a1;
  }
  if ((v9 & 1) != 0) {
    goto LABEL_29;
  }
  *(_BYTE*)a1 = 2 * v7;
LABEL_30:
  *(_BYTE*)(v15 + v7) = 0;
  return a1;
}

__int64 MPEG4Writer_5133f0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  MPEG4Writer_5044a0(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_513480(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e889e0 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_513990(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e889e8 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_513d40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e889f0 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 MPEG4Writer_513e60(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  MPEG4Writer_513d40(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_513f00(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e889f8 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 MPEG4Writer_514020(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  MPEG4Writer_513f00(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_5140b0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  MPEG4Writer_50ab20(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 MPEG4Writer_514140(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88a28 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_VectorImpl_Destroy_VectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

#pragma GCC visibility pop
