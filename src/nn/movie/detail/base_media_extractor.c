#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nandroid_DataSourceFactory_CreateFromURI_plt(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nandroid_NuCachedSource2_Create_plt(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_delete_plt(_QWORD);
__int64 AMediaFormat_new_plt(void);
__int64 AMediaFormat_new_plt_alt1(_QWORD) __asm__("AMediaFormat_new_plt");
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d0060(_QWORD*, __int64, char);
__int64 SdkRoutine_4d32e0();
__int64 SdkRoutine_4d3690();
__int64 SdkRoutine_4d36a0();
__int64 SdkRoutine_4d36b0();
__int64 SdkRoutine_4d36c0();
__int64 SdkRoutine_4d3bc0();
__int64 SdkRoutine_4d3c00();
__int64 SdkRoutine_4d3c20();
__int64 SdkRoutine_4d3f00();
__int64 SdkRoutine_4d3f20(__int64, __int64);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_86d7e0(_QWORD, _QWORD);
__int64 SdkRoutine_86d9a0(_QWORD, _QWORD);
__int64 SdkRoutine_86da60(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 base_media_extractor_4cf880_alt1(__int64) __asm__(
    "base_media_extractor_4cf880");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_findBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86db80(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86dba0(_QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_append_plt_86daa0(_QWORD, _QWORD);
__int64 nandroid_AString_append_plt_86dbb0(_QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_AString_startsWith_plt(_QWORD, _QWORD);
__int64 nandroid_ESDS_Destroy_ESDS_plt(_QWORD);
__int64 nandroid_ESDS_ESDS_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ESDS_InitCheck_plt(_QWORD);
__int64 nandroid_ESDS_getCodecSpecificInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_InMemoryFileSource_InMemoryFileSource_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nandroid_MPEG4Extractor_Sniff_plt(_QWORD, _QWORD);
__int64 nandroid_MatroskaExtractor_Sniff_plt(_QWORD, _QWORD);
__int64 nandroid_MediaBufferGroup_MediaBufferGroup_plt(_QWORD, _QWORD);
__int64 nandroid_MetaData_MetaData_plt_86da40(void);
__int64 nandroid_NuCachedSource2_IsCacheFull_plt(_QWORD, _QWORD);
__int64 nandroid_NuCachedSource2_RemoveCacheSpecificHeaders_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nandroid_NuCachedSource2_flushCache_plt(_QWORD);
__int64 nandroid_NuCachedSource2_getBufferedRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_SortedVectorImpl_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_StreamSource_StreamSource_plt(_QWORD, _QWORD);
__int64 nandroid_StreamSource_signalSeeked_plt(_QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_String8_plt_86d890(_QWORD, _QWORD);
__int64 nandroid_String8_String8_plt_86d8a0(_QWORD, _QWORD);
__int64 nandroid_String8_appendFormat_plt(_QWORD, const char*, ...);
__int64 nandroid_String8_length_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_convertMessageToMetaData_plt(_QWORD, _QWORD);
__int64 nandroid_convertMetaDataToMessage_plt_86da80(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_MediaProperty_Clear_plt(_QWORD);
__int64 nn_movie_MediaProperty_ContainsKey_plt(_QWORD, _QWORD);
__int64 nn_movie_MediaProperty_GetString_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_AllocateMemory_alt1(__int64, _QWORD**) __asm__(
    "nn_movie_detail_AllocateMemory");
__int64 nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(_QWORD, _QWORD);
__int64
    nn_movie_detail_BaseMediaExtractor_Destroy_BaseMediaExtractor_plt(_QWORD);
__int64 nn_movie_detail_BaseMediaExtractor_DoSetMedia_plt(_QWORD);
__int64 nn_movie_detail_BaseMediaExtractor_GetCacheConfig_plt(_QWORD, _QWORD);
__int64
    nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(_QWORD);
__int64 nn_movie_detail_BaseMediaExtractor_TrackInfo_TrackInfo_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_FreeMemory_alt1(_QWORD, _QWORD) __asm__(
    "nn_movie_detail_FreeMemory");
__int64 nn_movie_detail_MediaExtractorState_MediaExtractorState_plt(_QWORD);
__int64 nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(_QWORD,
                                                                     _QWORD);
__int64 nn_movie_detail_MediaState_SetState_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_ParseAvccCodecSpecificData_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_os_WaitEvent_plt(_QWORD);
__int64 strcmp_plt(void* this_, const char*);
char* SdkRoutine_4d3740(__int64, char*, char*, char*, __int64);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88418;
extern __int64 SdkData_e88420;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88350[490])();
extern void (*SdkData_e88370[486])();
extern void (*SdkData_e88378[485])();
extern void (*SdkData_e88428[463])();
extern void (*SdkData_e88430[462])();
extern void (*SdkData_e88438[461])();
extern void (*SdkData_e88470[454])();
extern void (*SdkData_e88510[434])();
void __attribute__((noreturn)) nn_fs_10de70();
__int64 nn_movie_detail_BaseMediaExtractor_TrackInfo_TrackInfo(__int64 this_);
void nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo(
    void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_BaseMediaExtractor(void* this_);
void nn_movie_detail_BaseMediaExtractor_Destroy_BaseMediaExtractor(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdda0(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3);
__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cde70(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3);
__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdf40();
__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdf50();
__int64 nn_movie_detail_BaseMediaExtractor_Finalize(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_SetUriMedia(void* this_,
                                                       const char* a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetCacheConfig(__int64 a1,
                                                          __int64 a2);
__int64 nn_movie_detail_BaseMediaExtractor_DoSetMedia(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_SetInMemoryMedia(void* this_,
                                                            const void* a2,
                                                            __int64 a3);
__int64 nn_movie_detail_BaseMediaExtractor_SetUpMediaSourceMode(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_AppendMediaSourceData_4cf110(
    void* this_, char* a2, __int64 a3);
__int64 nn_movie_detail_BaseMediaExtractor_AppendMediaSourceData_4cf1d0(
    void* this_, char* a2, __int64 a3);
__int64
nn_movie_detail_BaseMediaExtractor_GetMediaSourceModeSeekPosition_4cf290(
    void* this_, __int64* a2);
__int64
nn_movie_detail_BaseMediaExtractor_GetMediaSourceModeSeekPosition_4cf320(
    void* this_, __int64* a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackCount_4cf3b0(void* this_,
                                                                int* a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackCount_4cf440(void* this_,
                                                                int* a2);
__int64 nn_movie_detail_BaseMediaExtractor_SelectTrack(void* this_, int a2);
__int64 base_media_extractor_4cf790(__int64 a1);
__int64 base_media_extractor_4cf880(_QWORD* a1);
__int64 nn_movie_detail_BaseMediaExtractor_DeselectTrack_4cf900(void* this_,
                                                                int a2);
__int64 nn_movie_detail_BaseMediaExtractor_DeselectTrack_4cfa00(void* this_,
                                                                int a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackProperties(void* this_,
                                                              void* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackMimeType(__int64 a1, int* a2,
                                                            int a3);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackConfigurationSize(
    void* this_, unsigned __int64* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_GetTrackConfiguration(
    void* this_, void* a2, unsigned __int64 a3, int a4);
__int64 nn_movie_detail_BaseMediaExtractor_Start_4d1900(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_SignalAllTracks(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_Start_4d1a40(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_Stop_4d1b10(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_Stop_4d1b90(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_GetSampleAvailableEvent_4d1c20(
    __int64 a1, _QWORD* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_FindInSelectedTracks(void* this_,
                                                                int a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetSampleAvailableEvent_4d1d60(
    __int64 a1, _QWORD* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_SeekTo(__int64 a1, __int64 a2,
                                                  int a3);
__int64 nn_movie_detail_BaseMediaExtractor_GetSampleBufferSize(
    void* this_, unsigned __int64* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_AdvanceTrack(void* this_, void* a2);
__int64 nn_movie_detail_BaseMediaExtractor_ReadSamples(
    void* this_, void* a2, unsigned __int64* a3, __int64* a4, unsigned int* a5,
    unsigned __int64 a6, int a7);
__int64 nn_movie_detail_BaseMediaExtractor_GetSampleTime(void* this_,
                                                         __int64* a2, int a3);
__int64 nn_movie_detail_BaseMediaExtractor_GetSampleProperties(__int64 a1,
                                                               __int64 a2,
                                                               int a3);
__int64
nn_movie_detail_BaseMediaExtractor_GetCacheRangeCount_4d2a50(void* this_,
                                                             _BOOL4* a2);
__int64
nn_movie_detail_BaseMediaExtractor_GetCacheRangeCount_4d2ae0(void* this_,
                                                             _BOOL4* a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetCacheRange(void* this_,
                                                         __int64* a2,
                                                         __int64* a3);
__int64 nn_movie_detail_BaseMediaExtractor_IsCacheFull_4d2ce0(void* this_,
                                                              bool* a2,
                                                              bool* a3);
__int64 nn_movie_detail_BaseMediaExtractor_IsCacheFull_4d2d60(void* this_,
                                                              bool* a2,
                                                              bool* a3);
__int64 nn_movie_detail_BaseMediaExtractor_StreamSourceReadData(
    void* this_, void* a2, unsigned __int64* a3, unsigned __int64 a4);
__int64
nn_movie_detail_BaseMediaExtractor_StreamSourceSeekTo_4d2f80(void* this_,
                                                             __int64 a2);
__int64
nn_movie_detail_BaseMediaExtractor_StreamSourceSeekTo_4d2fe0(void* this_,
                                                             __int64 a2);
__int64
nn_movie_detail_BaseMediaExtractor_StreamSourceSetSize_4d3040(void* this_,
                                                              __int64 a2);
__int64
nn_movie_detail_BaseMediaExtractor_StreamSourceSetSize_4d3070(void* this_,
                                                              __int64 a2);
__int64
nn_movie_detail_BaseMediaExtractor_SetPreferredPixels_4d30a0(void* this_);
__int64
nn_movie_detail_BaseMediaExtractor_SetPreferredPixels_4d30b0(void* this_);
__int64
nn_movie_detail_BaseMediaExtractor_SetMinBandwidthSamples_4d30c0(void* this_);
__int64
nn_movie_detail_BaseMediaExtractor_SetMinBandwidthSamples_4d30d0(void* this_);
__int64 nn_movie_detail_BaseMediaExtractor_SignalTrack(void* this_, int a2);
__int64 nn_movie_detail_BaseMediaExtractor_GetCacheThreshold(
    void* this_, unsigned __int64 a2, __int64* a3, unsigned __int64* a4);
__int64
nn_movie_detail_BaseMediaExtractor_SetTrackSampleAvailableEventType_4d31e0(
    __int64 a1, int a2, __int64 a3);
__int64
nn_movie_detail_BaseMediaExtractor_SetTrackSampleAvailableEventType_4d3260(
    __int64 a1, int a2, __int64 a3);

__int64 nn_movie_detail_BaseMediaExtractor_TrackInfo_TrackInfo(__int64 this_)
{
  *(_QWORD*)(this_ + 16) = 0;
  *(_QWORD*)(this_ + 24) = 0;
  *(_QWORD*)this_ = 0;
  *(_QWORD*)(this_ + 8) = 0;
  *(_BYTE*)(this_ + 36) = 0;
  *(_DWORD*)(this_ + 40) = 0;
  *(_DWORD*)(this_ + 32) = -1;
  return this_;
}

void nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo(void* this_)
{
  __int64 v1;
  __int64 v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v1 = *((_QWORD*)this_ + 1);
  if (v1 != 0) {
    (*(void (**)(_QWORD))(v1 + 8))(*(_QWORD*)v1);
    v3 = *((_QWORD*)this_ + 1);
    if (v3 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v5 = SdkData_e88338[0];
      if ((explicit & 1) == 0) {
        v9 = __cxa_guard_acquire_plt(SdkData_e88330);
        v5 = SdkData_e88338[0];
        if (v9 != 0) {
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
          v5 = SdkData_e88338[0];
        }
      }
      v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v6);
    }
    *((_QWORD*)this_ + 1) = 0;
  }
  v7 = *((_QWORD*)this_ + 2);
  if (v7 != 0) {
    (*(void (**)(_QWORD))(v7 + 8))(*(_QWORD*)v7);
    *((_QWORD*)this_ + 2) = 0;
  }
  v8 = *((_QWORD*)this_ + 3);
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    *((_QWORD*)this_ + 3) = 0;
  }
  *(_QWORD*)this_ = 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_BaseMediaExtractor(void* this_)
{
  __int64 v2;
  __int64 result;

  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v2 = SdkData_e88418;
  *((_BYTE*)this_ + 48) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *(_QWORD*)this_ = v2 + 16;
  *((_QWORD*)this_ + 1) = v2 + 304;
  nn_movie_detail_MediaExtractorState_MediaExtractorState_plt((char*)this_ +
                                                              64);
  *((_BYTE*)this_ + 1320) = 0;
  *((_QWORD*)this_ + 166) = 0;
  *((_QWORD*)this_ + 168) = 0;
  *((_QWORD*)this_ + 169) = 0;
  *((_QWORD*)this_ + 171) = 0;
  *((_QWORD*)this_ + 172) = 0;
  *((_QWORD*)this_ + 173) = 0;
  *((_WORD*)this_ + 700) = 0;
  *((_QWORD*)this_ + 170) = 0x7FFFFFFFFFFFFFFFLL;
  *((_QWORD*)this_ + 177) = 0;
  *((_DWORD*)this_ + 356) = 0;
  *((_QWORD*)this_ + 174) = SdkRoutine_4d32e0;
  *(_QWORD*)((char*)this_ + 1404) = 0;
  result = nn_os_InitializeMutex_plt((char*)this_ + 1400, 1, 0);
  *((_QWORD*)this_ + 183) = 0;
  *((_QWORD*)this_ + 182) = 0;
  *((_QWORD*)this_ + 181) = 0;
  *((_QWORD*)this_ + 180) = 0;
  *((_QWORD*)this_ + 179) = 0;
  return result;
}

void nn_movie_detail_BaseMediaExtractor_Destroy_BaseMediaExtractor(void* this_)
{
  char* v1;

  v1 = (char*)this_ - 8;
  nn_movie_detail_BaseMediaExtractor_Destroy_BaseMediaExtractor_plt(
      (char*)this_ - 8);
  SdkRoutine_857220(v1, 1472);
}

__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdda0(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 64, 0);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *(_BYTE*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 1464) = a2;
    nn_movie_detail_MediaState_SetState_plt(a1 + 64, 1);
    v7 = *(_QWORD*)(a1 + 1464);
    *(_QWORD*)(a1 + 1328) = a3;
    if (v7 != 0) {
      v8 = (_QWORD*)nn_movie_detail_AllocateMemory(32);
      result = 259840;
      if (v8 != nullptr) {
        v9 = *(_QWORD*)(a1 + 1464);
        *v8 = v8;
        v8[1] = v8;
        v8[2] = 0;
        v8[3] = v9;
        *(_QWORD*)(a1 + 1336) = v8;
        return 0;
      }
    }
    else {
      return 259840;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cde70(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 56, 0);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *(_BYTE*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 1456) = a2;
    nn_movie_detail_MediaState_SetState_plt(a1 + 56, 1);
    v7 = *(_QWORD*)(a1 + 1456);
    *(_QWORD*)(a1 + 1320) = a3;
    if (v7 != 0) {
      v8 = (_QWORD*)nn_movie_detail_AllocateMemory(32);
      result = 259840;
      if (v8 != nullptr) {
        v9 = *(_QWORD*)(a1 + 1456);
        *v8 = v8;
        v8[1] = v8;
        v8[2] = 0;
        v8[3] = v9;
        *(_QWORD*)(a1 + 1328) = v8;
        return 0;
      }
    }
    else {
      return 259840;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdf40()
{
  return 263936;
}

__int64 nn_movie_detail_BaseMediaExtractor_Initialize_4cdf50()
{
  return 263936;
}

__int64 nn_movie_detail_BaseMediaExtractor_Finalize(void* this_)
{
  __int64 result;
  __int64 v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 1);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 171) != 0) {
      *((_QWORD*)this_ + 171) = 0;
      *((_QWORD*)this_ + 172) = 0;
    }
    if ((*((_BYTE*)this_ + 48) & 1) == 0) {
      nn_movie_detail_MediaState_SetState_plt((char*)this_ + 64, 0);
      *((_BYTE*)this_ + 48) = 1;
    }
    v3 = *((_QWORD*)this_ + 7);
    if (v3 != 0) {
      (*(void (**)(_QWORD))(v3 + 8))(*(_QWORD*)v3);
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v5 = SdkData_e88338[0];
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v6);
      *((_QWORD*)this_ + 7) = 0;
    }
    v7 = *((_QWORD*)this_ + 5);
    if (v7 != 0) {
      v8 = *((_QWORD**)this_ + 173);
      if (v8 != nullptr) {
        v8[1] = *v8;
        *((_QWORD*)this_ + 179) = 0;
        v7 = *((_QWORD*)this_ + 5);
      }
      nn_os_SignalEvent_plt(v7);
    }
    v9 = *((_QWORD*)this_ + 182);
    if (v9 != 0) {
      v10 = (_QWORD*)((char*)this_ + 1456);
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
      v12 = *((_QWORD**)this_ + 182);
      if (v12 != nullptr) {
        v11 = nandroid_RefBase_decStrong_plt(
            (char*)v12 + *(_QWORD*)(*v12 - 24LL), (char*)this_ + 1456);
      }
      if (v12 != (_QWORD*)*v10) {
        nandroid_sp_report_race_plt(v11);
      }
      *v10 = 0;
    }
    v13 = *((_QWORD*)this_ + 181);
    if (v13 != 0) {
      v14 = (_QWORD*)((char*)this_ + 1448);
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
      v16 = *((_QWORD**)this_ + 181);
      if (v16 != nullptr) {
        v15 = nandroid_RefBase_decStrong_plt(
            (char*)v16 + *(_QWORD*)(*v16 - 24LL), (char*)this_ + 1448);
      }
      if (v16 != (_QWORD*)*v14) {
        nandroid_sp_report_race_plt(v15);
      }
      *v14 = 0;
    }
    v17 = *((_QWORD**)this_ + 167);
    if (v17 != nullptr) {
      if (v17[2] != 0) {
        v18 = (_QWORD*)v17[1];
        v19 = *(_QWORD**)(*v17 + 8LL);
        *(_QWORD*)(*v18 + 8LL) = v19;
        *v19 = *v18;
        v17[2] = 0;
        if (v18 != v17) {
          do {
            v20 = (_QWORD*)v18[1];
            nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(
                v18 + 2);
            nn_movie_detail_FreeMemory((__int64)v18, (_QWORD*)v17[3]);
            v18 = v20;
          } while (v20 != v17);
        }
      }
      v21 = *((_QWORD**)this_ + 167);
      if (v21[2] != 0) {
        v22 = (_QWORD*)v21[1];
        v23 = *(_QWORD**)(*v21 + 8LL);
        *(_QWORD*)(*v22 + 8LL) = v23;
        *v23 = *v22;
        v21[2] = 0;
        if (v22 != v21) {
          do {
            v24 = (_QWORD*)v22[1];
            nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(
                v22 + 2);
            nn_movie_detail_FreeMemory((__int64)v22, (_QWORD*)v21[3]);
            v22 = v24;
          } while (v24 != v21);
        }
      }
      v25 = *((_QWORD**)this_ + 183);
      if (v25 != nullptr) {
        nn_movie_detail_FreeMemory(*((_QWORD*)this_ + 167), v25);
      }
      *((_QWORD*)this_ + 167) = 0;
      return 0;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_SetUriMedia(void* this_,
                                                       const char* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD** v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned int v15;
  _QWORD* v16;
  _QWORD v17[5];
  _QWORD* v18;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 2);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    memset(v17, 0, sizeof(v17));
    nandroid_SortedVectorImpl_SortedVectorImpl_plt(v17, 16, 0);
    v5 = SdkData_e88420 + 16;
    v17[0] = SdkData_e88420 + 16;
    v6 = nn_movie_detail_BaseMediaExtractor_GetCacheConfig_plt(this_, v17);
    if (v6 == 0) {
      v7 = *((_QWORD*)this_ + 182);
      v8 = (_QWORD**)((char*)this_ + 1456);
      if (v7 != 0) {
        v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
        v10 = *v8;
        if (*v8 != nullptr) {
          v9 = nandroid_RefBase_decStrong_plt(
              (char*)v10 + *(_QWORD*)(*v10 - 24LL), (char*)this_ + 1456);
        }
        if (v10 != *v8) {
          nandroid_sp_report_race_plt(v9);
        }
        *v8 = nullptr;
      }
      v16 = nullptr;
      v11 = X8CALL_X0(void*, nandroid_DataSourceFactory_CreateFromURI_plt(
                                 (void*)(&v18), &v16, a2, v17, 0, 0));
      v12 = *v8;
      if (*v8 != nullptr) {
        v11 = (_QWORD*)nandroid_RefBase_decStrong_plt(
            (char*)v12 + *(_QWORD*)(*v12 - 24LL), (char*)this_ + 1456);
      }
      if (v12 != *v8) {
        nandroid_sp_report_race_plt(v11);
      }
      v13 = v18;
      v14 = v16;
      v18 = nullptr;
      *v8 = v13;
      if (v14 != nullptr) {
        nandroid_RefBase_decStrong_plt((char*)v14 + *(_QWORD*)(*v14 - 24LL),
                                       &v16);
        v13 = *v8;
      }
      if (v13 != nullptr) {
        v6 = nn_movie_detail_BaseMediaExtractor_DoSetMedia_plt(this_);
      }
      else {
        v6 = 259840;
      }
    }
    v15 = v6;
    v17[0] = v5;
    nandroid_VectorImpl_finish_vector_plt(v17);
    nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v17);
    return v15;
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetCacheConfig(__int64 a1,
                                                          __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  _BYTE v11[8];
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 1328);
  v10 = 0;
  v4 = 259840;
  v5 = v2 >> 10;
  v6 = (__int64)(float)(vcvts_n_f32_u64(v2, 1u) * 0x1.0000000000000p-10f);
  nandroid_String8_String8_plt_86d870(&v10);
  if ((unsigned int)nandroid_String8_appendFormat_plt(&v10, "%zd/%zd/%d", v6,
                                                      v5, 0) != -12) {
    nandroid_String8_String8_plt_86d890(&v9, "x-cache-config");
    nandroid_String8_String8_plt_86d8a0(v11, &v9);
    nandroid_String8_String8_plt_86d8a0(&v12, &v10);
    v7 = nandroid_SortedVectorImpl_add_plt(a2, v11);
    nandroid_String8_Destroy_String8_plt(&v12);
    nandroid_String8_Destroy_String8_plt(v11);
    nandroid_String8_Destroy_String8_plt(&v9);
    if (v7 == -12) {
      v4 = 259840;
    }
    else {
      v4 = 0;
    }
  }
  nandroid_String8_Destroy_String8_plt(&v10);
  return v4;
}

__int64 nn_movie_detail_BaseMediaExtractor_DoSetMedia(void* this_)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  _QWORD** v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 (*v13)(__int64, _QWORD);
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64 (*v17)(__int64, _QWORD);
  _QWORD** v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  atomic_uchar* v22;
  void(__attribute__((noreturn)) * v23)();
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD** v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  _DWORD* v33;
  void(__attribute__((noreturn)) * v34)();
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  void(__attribute__((noreturn)) * v42)();
  void(__attribute__((noreturn)) * v43)();
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  float v48;

  v2 = (_QWORD*)((char*)this_ + 1456);
  if ((***((unsigned int (****)(_QWORD))this_ + 182))(
          *((_QWORD*)this_ + 182)) != 0) {
  LABEL_2:
    v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 40LL))(*v2);
    v4 = (_QWORD*)*v2;
    if (*v2 != 0) {
      v3 = nandroid_RefBase_decStrong_plt((char*)v4 + *(_QWORD*)(*v4 - 24LL),
                                          v2);
    }
    if (v4 != (_QWORD*)*v2) {
      nandroid_sp_report_race_plt(v3);
    }
    *v2 = 0;
    return 524032;
  }
  v6 = *v2;
  v48 = 0x0.0p+0f;
  v7 = *(_QWORD*)(v6 + 8);
  if (v7 == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v42 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v42) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v9 = (_QWORD*)SdkRoutine_4c3860(16, 40, v8);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    *(_QWORD*)(v6 + 8) = v9;
    v9[4] = v6;
    **(_QWORD**)(v6 + 8) = SdkRoutine_4d3690;
    *(_QWORD*)(*(_QWORD*)(v6 + 8) + 8LL) = SdkRoutine_4d36a0;
    *(_QWORD*)(*(_QWORD*)(v6 + 8) + 16LL) = SdkRoutine_4d36b0;
    *(_QWORD*)(*(_QWORD*)(v6 + 8) + 24LL) = SdkRoutine_4d36c0;
    v7 = *(_QWORD*)(v6 + 8);
  }
  v10 = nandroid_MPEG4Extractor_Sniff_plt(v7, &v48);
  v11 = *v2;
  v12 = fmaxf(v48, 0x0.0p+0f);
  if (v48 <= 0x0.0p+0f) {
    v13 = nullptr;
  }
  else {
    v13 = (__int64 (*)(__int64, _QWORD))v10;
  }
  v14 = *(_QWORD*)(v11 + 8);
  if (v14 != 0) {
    v15 = nandroid_MatroskaExtractor_Sniff_plt(v14, &v48);
    *(float*)&v16 = v48;
    if (v48 <= v12) {
      v17 = v13;
    }
    else {
      v17 = (__int64 (*)(__int64, _QWORD))v15;
    }
    if (v17 == nullptr) {
      goto LABEL_37;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v43 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v43) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v18 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v19 = (_QWORD*)SdkRoutine_4c3860(16, 40, v18);
    *v19 = 0;
    v19[1] = 0;
    v19[2] = 0;
    v19[3] = 0;
    *(_QWORD*)(v11 + 8) = v19;
    v19[4] = v11;
    **(_QWORD**)(v11 + 8) = SdkRoutine_4d3690;
    *(_QWORD*)(*(_QWORD*)(v11 + 8) + 8LL) = SdkRoutine_4d36a0;
    *(_QWORD*)(*(_QWORD*)(v11 + 8) + 16LL) = SdkRoutine_4d36b0;
    *(_QWORD*)(*(_QWORD*)(v11 + 8) + 24LL) = SdkRoutine_4d36c0;
    v20 = nandroid_MatroskaExtractor_Sniff_plt(*(_QWORD*)(v11 + 8), &v48);
    *(float*)&v16 = v48;
    if (v48 <= v12) {
      v17 = v13;
    }
    else {
      v17 = (__int64 (*)(__int64, _QWORD))v20;
    }
    if (v17 == nullptr) {
      goto LABEL_37;
    }
  }
  if (*(float*)&v16 <= 0x0.0p+0f) {
  LABEL_37:
    v36 =
        (*(__int64 (**)(_QWORD, long double))(*(_QWORD*)*v2 + 40LL))(*v2, v16);
    v37 = (_QWORD*)*v2;
    if (*v2 != 0) {
      v36 = nandroid_RefBase_decStrong_plt((char*)v37 + *(_QWORD*)(*v37 - 24LL),
                                           v2);
    }
    if (v37 != (_QWORD*)*v2) {
      nandroid_sp_report_race_plt(v36);
    }
    *v2 = 0;
    return 257792;
  }
  v21 = *((_QWORD*)this_ + 7);
  v22 = (atomic_uchar*)SdkData_e88330;
  v23 = SdkData_e88338[0];
  if (v21 != 0) {
    (*(void (**)(_QWORD))(v21 + 8))(*(_QWORD*)v21);
    if ((atomic_load_explicit(v22, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v23 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v23) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v24 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v23);
    nn_movie_detail_FreeMemory(v21, v24);
    *((_QWORD*)this_ + 7) = 0;
  }
  v25 = *v2;
  v26 = *(_QWORD*)(*v2 + 8LL);
  if (v26 == 0) {
    if ((atomic_load_explicit(v22, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v23 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v23) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v27 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v23);
    v28 = (_QWORD*)SdkRoutine_4c3860(16, 40, v27);
    *v28 = 0;
    v28[1] = 0;
    v28[2] = 0;
    v28[3] = 0;
    *(_QWORD*)(v25 + 8) = v28;
    v28[4] = v25;
    **(_QWORD**)(v25 + 8) = SdkRoutine_4d3690;
    *(_QWORD*)(*(_QWORD*)(v25 + 8) + 8LL) = SdkRoutine_4d36a0;
    *(_QWORD*)(*(_QWORD*)(v25 + 8) + 16LL) = SdkRoutine_4d36b0;
    *(_QWORD*)(*(_QWORD*)(v25 + 8) + 24LL) = SdkRoutine_4d36c0;
    v26 = *(_QWORD*)(v25 + 8);
  }
  v29 = v17(v26, 0);
  *((_QWORD*)this_ + 7) = v29;
  if (v29 == 0) {
    goto LABEL_2;
  }
  v30 = (_QWORD*)v29;
  *((_DWORD*)this_ + 336) = (*(__int64 (**)(_QWORD))(v29 + 16))(*(_QWORD*)v29);
  v31 = AMediaFormat_new_plt();
  if (v31 != 0) {
    *((_DWORD*)this_ + 337) = 0;
    v32 = (_QWORD*)v31;
    v33 = (_DWORD*)((char*)this_ + 1348);
    ((void (*)(_QWORD, __int64))v30[5])(*v30, v31);
    v34 = SdkData_e88428[0];
    if ((nandroid_AMessage_findInt32_plt(*v32, *(_QWORD*)SdkData_e88428[0],
                                         (char*)this_ + 1348) &
         1) == 0 &&
        *((int*)this_ + 336) >= 1 &&
        (*((_DWORD*)this_ + 337) & 0x80000000) == 0) {
      v35 = 0;
      v44 = 0;
      do {
        if ((*v33 & 0x80000000) == 0) {
          v39 = ((__int64 (*)(_QWORD, __int64))v30[3])(*v30, v35);
          if (v39 != 0) {
            v40 = v39;
            if ((*(unsigned int (**)(_QWORD, _QWORD*))(v39 + 32))(*(_QWORD*)v39,
                                                                  v32) == 0) {
              v47 = 0;
              v46 = 0;
              if ((nandroid_AMessage_findInt64_plt(
                       *v32, *(_QWORD*)SdkData_e88430[0], &v46) &
                   1) != 0) {
                *((_QWORD*)this_ + 169) = v46;
              }
              if ((nandroid_AMessage_findInt32_plt(*v32, *(_QWORD*)v34, &v47) &
                   1) != 0) {
                *v33 += v47;
              }
              else {
                v45 = 0;
                *((_DWORD*)this_ + 337) = -1;
                if (*((__int64*)this_ + 169) >= 1 &&
                    (*(unsigned int (**)(_QWORD, __int64*))(
                        *(_QWORD*)*v2 + 16LL))(*v2, &v45) == 0 &&
                    v45 != 0x7FFFFFFFFFFFFFFFLL) {
                  v44 = 8000000 * v45 / (signed __int64)*((_QWORD*)this_ + 169);
                }
              }
            }
            (*(void (**)(_QWORD))(v40 + 8))(*(_QWORD*)v40);
            if ((atomic_load_explicit(v22, memory_order_acquire) & 1) == 0 &&
                (unsigned int)__cxa_guard_acquire_plt(v22) != 0) {
              *(_DWORD*)v23 = 0;
              *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v23) = 1;
              __cxa_guard_release_plt(v22);
            }
            v38 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v23);
            nn_movie_detail_FreeMemory(v40, v38);
          }
        }
        ++v35;
      } while (v35 < *((int*)this_ + 336));
      if ((*v33 & 0x80000000) != 0 && v44 > 0) {
        *v33 = v44;
      }
    }
    AMediaFormat_delete_plt(v32);
  }
  nn_movie_detail_MediaState_SetState_plt((char*)this_ + 64, 3);
  return 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_SetInMemoryMedia(void* this_,
                                                            const void* a2,
                                                            __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD** v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v13)();
  _QWORD** v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 3);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    v7 = *((_QWORD*)this_ + 182);
    *((_QWORD*)this_ + 171) = a2;
    v8 = (_QWORD**)((char*)this_ + 1456);
    *((_QWORD*)this_ + 172) = a3;
    if (v7 != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
      v10 = *v8;
      if (*v8 != nullptr) {
        v9 = nandroid_RefBase_decStrong_plt(
            (char*)v10 + *(_QWORD*)(*v10 - 24LL), (char*)this_ + 1456);
        if (v10 != *v8) {
          v9 = nandroid_sp_report_race_plt(v9);
        }
        *v8 = nullptr;
      }
      v11 = *v8;
      if (*v8 != nullptr) {
        v9 = nandroid_RefBase_decStrong_plt(
            (char*)v11 + *(_QWORD*)(*v11 - 24LL), (char*)this_ + 1456);
      }
      if (v11 != *v8) {
        nandroid_sp_report_race_plt(v9);
      }
      *v8 = nullptr;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v13 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v13 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v14 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
    v15 = (_QWORD*)SdkRoutine_4c3860(16, 88, v14);
    nandroid_InMemoryFileSource_InMemoryFileSource_plt(
        v15, *((_QWORD*)this_ + 171), *((_QWORD*)this_ + 172));
    v16 = *((_QWORD**)this_ + 182);
    v17 = nandroid_RefBase_incStrong_plt((char*)v15 + *(_QWORD*)(*v15 - 24LL),
                                         (char*)this_ + 1456);
    if (v16 != nullptr) {
      v17 = nandroid_RefBase_decStrong_plt((char*)v16 + *(_QWORD*)(*v16 - 24LL),
                                           (char*)this_ + 1456);
    }
    if (v16 != *v8) {
      nandroid_sp_report_race_plt(v17);
    }
    *((_QWORD*)this_ + 182) = v15;
    return nn_movie_detail_BaseMediaExtractor_DoSetMedia_plt(this_);
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_SetUpMediaSourceMode(void* this_)
{
  __int64 result;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD** v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int8 v30[4];
  __int64 v31;
  _QWORD v32[5];

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 7);
  if ((_DWORD)result != 0 && (result & 0x3FFFFF) != 0x40100) {
    return result;
  }
  if (*((_QWORD*)this_ + 181) != 0) {
    return 259328;
  }
  v3 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v6 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  v7 = (_QWORD*)nn_movie_detail_AllocateMemory_alt1(32, v6);
  v8 = *((_QWORD*)this_ + 183);
  *v7 = 0;
  v7[1] = 0;
  v9 = v7;
  v7[2] = 0;
  v7[3] = v8;
  v10 = *((_QWORD*)this_ + 173);
  *((_QWORD*)this_ + 173) = v9;
  if (v10 != 0) {
    (*((void (**)(void))this_ + 174))();
    if (*((_QWORD*)this_ + 173) == 0) {
      return 259840;
    }
  }
  *((_QWORD*)this_ + 179) = 0;
  v11 = (_QWORD*)((char*)this_ + 1448);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  v13 = (_QWORD*)SdkRoutine_4c3860(16, 120, v12);
  nandroid_StreamSource_StreamSource_plt(v13, this_);
  v14 = *((_QWORD**)this_ + 181);
  v15 = nandroid_RefBase_incStrong_plt((char*)v13 + *(_QWORD*)(*v13 - 24LL),
                                       (char*)this_ + 1448);
  if (v14 != nullptr) {
    v15 = nandroid_RefBase_decStrong_plt((char*)v14 + *(_QWORD*)(*v14 - 24LL),
                                         (char*)this_ + 1448);
  }
  if (v14 != (_QWORD*)*v11) {
    nandroid_sp_report_race_plt(v15);
  }
  v16 = *((_QWORD*)this_ + 170);
  *((_QWORD*)this_ + 181) = v13;
  v13[2] = v16;
  v17 = nn_movie_detail_MediaState_SetState_plt((char*)this_ + 64, 8);
  if (*((_QWORD*)this_ + 166) != 0) {
    memset(v32, 0, sizeof(v32));
    nandroid_SortedVectorImpl_SortedVectorImpl_plt(v32, 16, 0);
    v18 = SdkData_e88420;
    v19 = SdkData_e88420 + 16;
    v32[0] = SdkData_e88420 + 16;
    v20 = nn_movie_detail_BaseMediaExtractor_GetCacheConfig_plt(this_, v32);
    if (v20 != 0) {
      v21 = v20;
      v32[0] = v19;
      nandroid_VectorImpl_finish_vector_plt(v32);
      nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v32);
      return v21;
    }
    v25 = *((_QWORD*)this_ + 182);
    if (v25 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
      SdkRoutine_86d7e0((char*)this_ + 1456, 0);
    }
    v31 = 0;
    nandroid_String8_String8_plt_86d870(&v31);
    v30[0] = 1;
    nandroid_NuCachedSource2_RemoveCacheSpecificHeaders_plt(v32, &v31, v30);
    v26 = (_QWORD*)*v11;
    v28 = v26;
    if (v26 != nullptr) {
      nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL),
                                     &v28);
    }
    if (nandroid_String8_length_plt(&v31) != 0) {
      v27 = v31;
    }
    else {
      v27 = 0;
    }
    nandroid_NuCachedSource2_Create_plt((void*)(&v29), &v28, v27, v30[0]);
    SdkRoutine_86d9a0((char*)this_ + 1456, &v29);
    if (v29 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v29 + *(_QWORD*)(*v29 - 24LL),
                                     &v29);
    }
    if (v28 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v28 + *(_QWORD*)(*v28 - 24LL),
                                     &v28);
    }
    nandroid_String8_Destroy_String8_plt(&v31);
    v32[0] = v18 + 16;
    nandroid_VectorImpl_finish_vector_plt(v32);
    nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v32);
    result = 259840;
    if (*((_QWORD*)this_ + 182) != 0) {
      return nn_movie_detail_BaseMediaExtractor_DoSetMedia_plt(this_);
    }
  }
  else {
    v22 = *((_QWORD**)this_ + 182);
    v23 = *((_QWORD**)this_ + 181);
    v24 = (_QWORD*)((char*)this_ + 1456);
    if (v23 != nullptr) {
      v17 = nandroid_RefBase_incStrong_plt((char*)v23 + *(_QWORD*)(*v23 - 24LL),
                                           (char*)this_ + 1456);
    }
    if (v22 != nullptr) {
      v17 = nandroid_RefBase_decStrong_plt((char*)v22 + *(_QWORD*)(*v22 - 24LL),
                                           (char*)this_ + 1456);
    }
    if (v22 != (_QWORD*)*v24) {
      nandroid_sp_report_race_plt(v17);
    }
    *v24 = v23;
    result = 259840;
    if (v23 != nullptr) {
      return nn_movie_detail_BaseMediaExtractor_DoSetMedia_plt(this_);
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_AppendMediaSourceData_4cf110(
    void* this_, char* a2, __int64 a3)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 10);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 181) != 0) {
      if (a3 != 0) {
        nn_os_LockMutex_plt((char*)this_ + 1400);
        SdkRoutine_4d3740(*((_QWORD*)this_ + 173),
                          *(char**)(*((_QWORD*)this_ + 173) + 8LL), a2, &a2[a3],
                          a3);
        nn_os_UnlockMutex_plt((char*)this_ + 1400);
      }
      nn_os_SignalEvent_plt(*((_QWORD*)this_ + 5));
      return 0;
    }
    else {
      return 256768;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_AppendMediaSourceData_4cf1d0(
    void* this_, char* a2, __int64 a3)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 10);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 180) != 0) {
      if (a3 != 0) {
        nn_os_LockMutex_plt((char*)this_ + 1392);
        SdkRoutine_4d3740(*((_QWORD*)this_ + 172),
                          *(char**)(*((_QWORD*)this_ + 172) + 8LL), a2, &a2[a3],
                          a3);
        nn_os_UnlockMutex_plt((char*)this_ + 1392);
      }
      nn_os_SignalEvent_plt(*((_QWORD*)this_ + 4));
      return 0;
    }
    else {
      return 256768;
    }
  }
  return result;
}

__int64

nn_movie_detail_BaseMediaExtractor_GetMediaSourceModeSeekPosition_4cf290(
    void* this_, __int64* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 9);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 181) != 0) {
      nn_os_LockMutex_plt((char*)this_ + 1400);
      *a2 = *((_QWORD*)this_ + 180);
      nandroid_StreamSource_signalSeeked_plt(*((_QWORD*)this_ + 181));
      nn_os_UnlockMutex_plt((char*)this_ + 1400);
      return 0;
    }
    else {
      return 256768;
    }
  }
  return result;
}

__int64

nn_movie_detail_BaseMediaExtractor_GetMediaSourceModeSeekPosition_4cf320(
    void* this_, __int64* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 9);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 180) != 0) {
      nn_os_LockMutex_plt((char*)this_ + 1392);
      *a2 = *((_QWORD*)this_ + 179);
      nandroid_StreamSource_signalSeeked_plt(*((_QWORD*)this_ + 180));
      nn_os_UnlockMutex_plt((char*)this_ + 1392);
      return 0;
    }
    else {
      return 256768;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackCount_4cf3b0(void* this_,
                                                                int* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 11);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 182) != 0) {
      if (*((_QWORD*)this_ + 7) != 0) {
        *a2 = *((_DWORD*)this_ + 336);
        return 0;
      }
      else {
        return 524032;
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackCount_4cf440(void* this_,
                                                                int* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 11);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 181) != 0) {
      if (*((_QWORD*)this_ + 6) != 0) {
        *a2 = *((_DWORD*)this_ + 334);
        return 0;
      }
      else {
        return 524032;
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_SelectTrack(void* this_, int a2)
{
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  _QWORD** v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64* v20;
  unsigned int (*v21)(__int64, __int64);
  __int64 v22;
  __int64 v23;
  _QWORD v24[3];

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 12);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 182) != 0) {
      v5 = *((_QWORD*)this_ + 167);
      while (1) {
        v5 = *(_QWORD*)(v5 + 8);
        if (v5 == *((_QWORD*)this_ + 167)) {
          break;
        }
        if (*(_DWORD*)(v5 + 48) == a2) {
          return 0;
        }
      }
      v6 = *((_QWORD**)this_ + 7);
      if (((__int64 (*)(_QWORD))v6[2])(*v6) <= (unsigned __int64)a2) {
        return 261376;
      }
      else {
        v7 = ((__int64 (*)(_QWORD, _QWORD))v6[3])(*v6, a2);
        if (v7 != 0) {
          v8 = *((__int64**)this_ + 167);
          v9 = v7;
          v10 =
              (_QWORD*)nn_movie_detail_AllocateMemory_alt1(64, (_QWORD**)v8[3]);
          *v10 = 0;
          v10[1] = 0;
          nn_movie_detail_BaseMediaExtractor_TrackInfo_TrackInfo_plt(v10 + 2);
          v10[1] = v8;
          v11 = *v8;
          *v10 = *v8;
          *(_QWORD*)(v11 + 8) = v10;
          *v8 = (__int64)v10;
          ++v8[2];
          *(_DWORD*)(**((_QWORD**)this_ + 167) + 48LL) = a2;
          *(_QWORD*)(**((_QWORD**)this_ + 167) + 24LL) = v9;
          LOBYTE(v11) = atomic_load_explicit(
              (atomic_uchar* volatile)SdkData_e88330, memory_order_acquire);
          v12 = SdkData_e88338[0];
          if ((v11 & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            *(_DWORD*)v12 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
          v14 = SdkRoutine_4c3860(16, 24, v13);
          v15 = nandroid_MediaBufferGroup_MediaBufferGroup_plt(v14, 0);
          *(_QWORD*)(**((_QWORD**)this_ + 167) + 40LL) = v14;
          if (*(_QWORD*)(**((_QWORD**)this_ + 167) + 40LL) != 0 &&
              (v16 = 258304, (v17 = AMediaFormat_new_plt_alt1(v15)) != 0)) {
            v18 = (_QWORD*)v17;
            if ((*(unsigned int (**)(_QWORD, __int64))(v9 + 32))(*(_QWORD*)v9,
                                                                 v17) == 0) {
              memset(v24, 0, sizeof(v24));
              nandroid_AString_AString_plt_86d9f0(v24);
              if ((nandroid_AMessage_findString_plt(
                       *v18, *(_QWORD*)SdkData_e88438[0], v24) &
                   1) != 0) {
                *(_BYTE*)(**((_QWORD**)this_ + 167) + 52LL) =
                    nandroid_AString_startsWith_plt(v24, "video/") & 1;
                v19 = **((_QWORD**)this_ + 167);
                v20 = *(__int64**)(v19 + 24);
                v21 = (unsigned int (*)(__int64, __int64))v20[2];
                v22 = *v20;
                v23 = base_media_extractor_4cf790(*(_QWORD*)(v19 + 40));
                if (v21(v22, v23) != 0) {
                  base_media_extractor_4cf880_alt1(*((_QWORD*)this_ + 167));
                  v16 = 257792;
                }
                else {
                  v16 = 0;
                }
              }
              nandroid_AString_Destroy_AString_plt(v24);
            }
            AMediaFormat_delete_plt(v18);
            return v16;
          }
          else {
            return 259840;
          }
        }
        else {
          return 258304;
        }
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 base_media_extractor_4cf790(__int64 a1)
{
  __int64 result;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  _QWORD* v6;
  int v7;

  result = *(_QWORD*)(a1 + 8);
  if (result == 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v4 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v7 = __cxa_guard_acquire_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
      if (v7 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v4 = SdkData_e88338[0];
      }
    }
    v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    v6 = (_QWORD*)SdkRoutine_4c3860(16, 40, v5);
    *(_QWORD*)(a1 + 8) = v6;
    *v6 = a1;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) = SdkRoutine_4d3bc0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = SdkRoutine_4d3c00;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) = SdkRoutine_4d3c20;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) = SdkRoutine_4d3f00;
    return *(_QWORD*)(a1 + 8);
  }
  return result;
}

__int64 base_media_extractor_4cf880(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;

  v1 = (_QWORD*)*a1;
  v3 = *(_QWORD**)(*a1 + 8LL);
  *(_QWORD*)(*(_QWORD*)*a1 + 8LL) = v3;
  *v3 = *v1;
  --a1[2];
  nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(v1 + 2);
  return nn_movie_detail_FreeMemory_alt1(v1, a1[3]);
}

__int64 nn_movie_detail_BaseMediaExtractor_DeselectTrack_4cf900(void* this_,
                                                                int a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 13);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 518912;
    if (*((_QWORD*)this_ + 182) != 0) {
      v5 = *((_QWORD*)this_ + 167);
      v6 = v5;
      do {
        v6 = *(_QWORD*)(v6 + 8);
        if (v6 == v5) {
          return 519424;
        }
      } while (*(_DWORD*)(v6 + 48) != a2);
      v7 = *(_QWORD*)(v6 + 24);
      if (v7 != 0) {
        (*(void (**)(_QWORD))(v7 + 24))(*(_QWORD*)v7);
        v5 = *((_QWORD*)this_ + 167);
      }
      v8 = *(_QWORD**)(v6 + 8);
      *(_QWORD*)(*(_QWORD*)v6 + 8LL) = v8;
      *v8 = *(_QWORD*)v6;
      --*(_QWORD*)(v5 + 16);
      nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(v6 +
                                                                         16);
      nn_movie_detail_FreeMemory(v6, *(_QWORD**)(v5 + 24));
      return 0;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_DeselectTrack_4cfa00(void* this_,
                                                                int a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 13);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 518912;
    if (*((_QWORD*)this_ + 181) != 0) {
      v5 = *((_QWORD*)this_ + 166);
      v6 = v5;
      do {
        v6 = *(_QWORD*)(v6 + 8);
        if (v6 == v5) {
          return 519424;
        }
      } while (*(_DWORD*)(v6 + 48) != a2);
      v7 = *(_QWORD*)(v6 + 24);
      if (v7 != 0) {
        (*(void (**)(_QWORD))(v7 + 24))(*(_QWORD*)v7);
        v5 = *((_QWORD*)this_ + 166);
      }
      v8 = *(_QWORD**)(v6 + 8);
      *(_QWORD*)(*(_QWORD*)v6 + 8LL) = v8;
      *v8 = *(_QWORD*)v6;
      --*(_QWORD*)(v5 + 16);
      nn_movie_detail_BaseMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(v6 +
                                                                         16);
      nn_movie_detail_FreeMemory(v6, *(_QWORD**)(v5 + 24));
      return 0;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackProperties(void* this_,
                                                              void* a2, int a3)
{
  int v6;
  __int64 result;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  atomic_uchar* v13;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v15)();
  _QWORD** v16;
  __int64 v17;
  _QWORD** v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  void(__attribute__((noreturn)) * v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD v36[3];
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v39_;
  __int64 v46;
  __int64 v47;
  __int64 v48;

  v6 = 259840;
  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 14);
  if ((_DWORD)result != 0 && (result & 0x3FFFFF) != 0x40100) {
    return result;
  }
  if (*((_QWORD*)this_ + 182) == 0) {
    return 518912;
  }
  v8 = *((_QWORD**)this_ + 7);
  v9 = ((__int64 (*)(_QWORD, _QWORD))v8[3])(*v8, a3);
  if (v9 == 0) {
    return 258304;
  }
  v10 = (_QWORD*)v9;
  v11 = nn_movie_MediaProperty_Clear_plt(a2);
  v48 = 0;
  v12 = AMediaFormat_new_plt_alt1(v11);
  v13 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v15 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v15 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v15) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v16 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v15);
  v17 = SdkRoutine_4c3860(16, 32, v16);
  nandroid_MetaData_MetaData_plt_86da40();
  v48 = v17;
  nandroid_RefBase_incStrong_plt(v17 + 16, &v48);
  v47 = 0;
  if ((atomic_load_explicit(v13, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v15 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v15) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v18 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v15);
  v19 = SdkRoutine_4c3860(16, 1344, v18);
  nandroid_AMessage_AMessage_plt_86da50();
  v47 = v19;
  v20 = nandroid_RefBase_incStrong_plt(v19, &v47);
  v21 = AMediaFormat_new_plt_alt1(v20);
  v22 = (_QWORD*)v21;
  if (v12 == 0) {
    v23 = 259840;
    if (v48 == 0) {
      goto LABEL_38;
    }
    goto LABEL_35;
  }
  if (v21 == 0 || v48 == 0 || v47 == 0) {
    goto LABEL_34;
  }
  if (((unsigned int (*)(_QWORD, __int64))v10[4])(*v10, v12) != 0) {
    SdkRoutine_86da60(&v48, 0);
    if (v48 == 0) {
      goto LABEL_30;
    }
  }
  else {
    nandroid_convertMessageToMetaData_plt(v12, &v48);
    if (v48 == 0) {
    LABEL_30:
      if (((unsigned int (*)(_QWORD, _QWORD*))v8[5])(*v8, v22) != 0) {
        AMediaFormat_delete_plt(v12);
        v23 = 0;
        if (v48 == 0) {
          goto LABEL_38;
        }
        goto LABEL_35;
      }
      SdkRoutine_4d0060(v22, (__int64)a2, 1);
      v6 = 0;
    LABEL_34:
      AMediaFormat_delete_plt(v12);
      v23 = v6;
      if (v48 == 0) {
        goto LABEL_38;
      }
      goto LABEL_35;
    }
  }
  if ((unsigned int)nandroid_convertMetaDataToMessage_plt_86da80(&v48, &v47) !=
      0) {
    goto LABEL_30;
  }
  v46 = 0;
  v24 = 0;
  v25 = 0;
  v26 = SdkData_e88350[0];
  while (1) {
    if ((nandroid_AMessage_findBuffer_plt(v47, *(_QWORD*)((char*)v26 + v24),
                                          &v46) &
         1) != 0) {
      if (*(_QWORD*)((char*)v26 + v24) == *(_QWORD*)SdkData_e88378[0]) {
        break;
      }
      v39_.v40 = 0;
      v39_.v41 = 0;
      v39_.v39 = 0;
      nandroid_AString_AString_plt_86da90(&v39_.v39, "csd-");
      nandroid_AString_append_plt_86daa0(&v39_.v39, v25);
      v27 = nandroid_AString_c_str_plt(&v39_.v39);
      nn_movie_MediaProperty_SetInt32_plt(a2, v27, *(unsigned int*)(v46 + 48));
      ++v25;
      nandroid_AString_Destroy_AString_plt(&v39_.v39);
    }
  LABEL_22:
    v24 += 8;
    if (v24 == 48) {
      SdkRoutine_4d0060(&v47, (__int64)a2, 0);
      if (v46 != 0) {
        nandroid_RefBase_decStrong_plt(v46, &v46);
      }
      v15 = SdkData_e88338[0];
      goto LABEL_30;
    }
  }
  v39_.v44 = 0;
  v39_.v45 = 0;
  v39_.v42 = 0;
  v39_.v43 = 0;
  v28 = *(_QWORD*)(v46 + 24);
  v29 = *(_QWORD*)(v46 + 32);
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39 = 0;
  nandroid_ESDS_ESDS_plt(&v39_.v39, v28, v29);
  if ((unsigned int)nandroid_ESDS_InitCheck_plt(&v39_.v39) == 0) {
    v37 = 0;
    v38 = 0;
    nandroid_ESDS_getCodecSpecificInfo_plt(&v39_.v39, &v38, &v37);
    memset(v36, 0, sizeof(v36));
    nandroid_AString_AString_plt_86da90(v36, "csd-");
    nandroid_AString_append_plt_86daa0(v36, v25);
    v30 = nandroid_AString_c_str_plt(v36);
    nn_movie_MediaProperty_SetInt32_plt(a2, v30, (unsigned int)v37);
    nandroid_AString_Destroy_AString_plt(v36);
    nandroid_ESDS_Destroy_ESDS_plt(&v39_.v39);
    goto LABEL_22;
  }
  nandroid_ESDS_Destroy_ESDS_plt(&v39_.v39);
  if (v46 != 0) {
    nandroid_RefBase_decStrong_plt(v46, &v46);
  }
  v15 = SdkData_e88338[0];
  AMediaFormat_delete_plt(v12);
  v23 = 517376;
  if (v48 != 0) {
  LABEL_35:
    v31 = v48;
    v32 = nandroid_RefBase_decStrong_plt(v48 + 16, &v48);
    if (v31 != v48) {
      nandroid_sp_report_race_plt(v32);
    }
    v48 = 0;
  }
LABEL_38:
  if (v47 != 0) {
    v33 = v47;
    v34 = nandroid_RefBase_decStrong_plt(v47, &v47);
    if (v33 != v47) {
      nandroid_sp_report_race_plt(v34);
    }
    v47 = 0;
  }
  if (v22 != nullptr) {
    AMediaFormat_delete_plt(v22);
  }
  ((void (*)(_QWORD))v10[1])(*v10);
  if ((atomic_load_explicit(v13, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v15 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v15) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v35 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v15);
  nn_movie_detail_FreeMemory((__int64)v10, v35);
  if (v47 != 0) {
    nandroid_RefBase_decStrong_plt(v47, &v47);
  }
  if (v48 != 0) {
    nandroid_RefBase_decStrong_plt(v48 + 16, &v48);
  }
  return v23;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackMimeType(__int64 a1, int* a2,
                                                            int a3)
{
  unsigned int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v15)();
  _QWORD* v16;
  _QWORD v17[3];

  v6 = 258304;
  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 64, 15);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*(_QWORD*)(a1 + 1456) != 0) {
      v8 = *(_QWORD*)(a1 + 56);
      if (v8 != 0) {
        v9 = (*(__int64 (**)(_QWORD, _QWORD))(v8 + 24))(*(_QWORD*)v8, a3);
        if (v9 != 0) {
          v10 = (_QWORD*)v9;
          v11 = AMediaFormat_new_plt_alt1(v9);
          if (v11 != 0) {
            v12 = (_QWORD*)v11;
            if (((unsigned int (*)(_QWORD, __int64))v10[4])(*v10, v11) == 0) {
              memset(v17, 0, sizeof(v17));
              nandroid_AString_AString_plt_86d9f0(v17);
              if ((nandroid_AMessage_findString_plt(
                       *v12, *(_QWORD*)SdkData_e88438[0], v17) &
                   1) != 0) {
                if ((nandroid_AString_startsWith_plt(v17, "video/avc") & 1) !=
                    0) {
                  v13 = 0;
                }
                else if ((nandroid_AString_startsWith_plt(
                              v17, "video/x-vnd.on2.vp8") &
                          1) != 0) {
                  v13 = 4;
                }
                else if ((nandroid_AString_startsWith_plt(
                              v17, "video/x-vnd.on2.vp9") &
                          1) != 0) {
                  v13 = 1;
                }
                else if ((nandroid_AString_startsWith_plt(v17, "video/av1") &
                          1) != 0 ||
                         (nandroid_AString_startsWith_plt(v17, "video/av01") &
                          1) != 0) {
                  v13 = 3;
                }
                else if ((nandroid_AString_startsWith_plt(v17,
                                                          "audio/mp4a-latm") &
                          1) != 0) {
                  v13 = 65;
                }
                else if ((nandroid_AString_startsWith_plt(v17, "audio/opus") &
                          1) != 0) {
                  v13 = 67;
                }
                else if ((nandroid_AString_startsWith_plt(v17, "audio/vorbis") &
                          1) != 0) {
                  v13 = 66;
                }
                else {
                  v13 = -1;
                }
                v6 = 0;
                *a2 = v13;
              }
              nandroid_AString_Destroy_AString_plt(v17);
            }
            AMediaFormat_delete_plt(v12);
          }
          else {
            v6 = 259840;
          }
          ((void (*)(_QWORD))v10[1])(*v10);
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)SdkData_e88330, memory_order_acquire);
          v15 = SdkData_e88338[0];
          if ((explicit & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            *(_DWORD*)v15 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v15) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v16 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v15);
          nn_movie_detail_FreeMemory((__int64)v10, v16);
          return v6;
        }
        else {
          return 258304;
        }
      }
      else {
        return 524032;
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackConfigurationSize(
    void* this_, unsigned __int64* a2, int a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  void(__attribute__((noreturn)) * v13)();
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  bool v23;
  char v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v29)();
  _QWORD* v30;
  int v32;
  __int64 v33;
  __int64 v34;
  struct {
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v35_;
  _QWORD* v42;

  v6 = 259840;
  v7 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 16);
  if (v7 != 0 && (v7 & 0x3FFFFF) != 0x40100) {
    return v7;
  }
  if (*((_QWORD*)this_ + 182) == 0) {
    return 518912;
  }
  v32 = v7;
  v8 = (*(__int64 (**)(_QWORD, _QWORD))(*((_QWORD*)this_ + 7) + 24LL))(
      **((_QWORD**)this_ + 7), a3);
  if (v8 == 0) {
    return 258304;
  }
  v9 = (_QWORD*)v8;
  *a2 = 0;
  v10 = AMediaFormat_new_plt_alt1(v8);
  if (v10 == 0) {
    goto LABEL_36;
  }
  v11 = (_QWORD*)v10;
  if (((unsigned int (*)(_QWORD, __int64))v9[4])(*v9, v10) != 0) {
    goto LABEL_34;
  }
  v42 = nullptr;
  v12 = 0;
  v13 = SdkData_e88350[0];
  v14 = SdkData_e88378[0];
  v15 = SdkData_e88370[0];
  while (1) {
    if ((nandroid_AMessage_findBuffer_plt(*v11, *(_QWORD*)((char*)v13 + v12),
                                          &v42) &
         1) == 0) {
      goto LABEL_10;
    }
    v16 = *(_QWORD*)((char*)v13 + v12);
    if (v16 != *(_QWORD*)v14) {
      break;
    }
    v35_.v40 = 0;
    v35_.v41 = 0;
    v35_.v38 = 0;
    v35_.v39 = 0;
    v25 = v42[3];
    v26 = v42[4];
    v35_.v36 = 0;
    v35_.v37 = 0;
    v35_.v35 = 0;
    nandroid_ESDS_ESDS_plt(&v35_.v35, v25, v26);
    if ((unsigned int)nandroid_ESDS_InitCheck_plt(&v35_.v35) != 0) {
      nandroid_ESDS_Destroy_ESDS_plt(&v35_.v35);
      v27 = 0;
      v22 = 517376;
      goto LABEL_31;
    }
    v33 = 0;
    v34 = 0;
    nandroid_ESDS_getCodecSpecificInfo_plt(&v35_.v35, &v34, &v33);
    *a2 += v33;
    nandroid_ESDS_Destroy_ESDS_plt(&v35_.v35);
  LABEL_10:
    v12 += 8;
    if (v12 == 48) {
      v22 = v32;
      v27 = 1;
      goto LABEL_31;
    }
  }
  if (v16 != *(_QWORD*)v15) {
    *a2 += v42[6];
    goto LABEL_10;
  }
  v35_.v36 = 0;
  v35_.v37 = 0;
  v35_.v35 = 0;
  nandroid_AString_AString_plt_86db80(&v35_.v35, v42[3] + v42[5], v42[6]);
  v17 = 2LL * v42[6];
  v18 = nn_movie_detail_AllocateMemory_alt1(v17, *((_QWORD***)this_ + 183));
  if (v18 == 0) {
    nandroid_AString_Destroy_AString_plt(&v35_.v35);
    v27 = 0;
    v22 = 259840;
    goto LABEL_31;
  }
  v19 = v18;
  v34 = 0;
  v20 = nandroid_AString_c_str_plt(&v35_.v35);
  v21 = nn_movie_detail_ParseAvccCodecSpecificData_plt(v19, v17, &v34, v20,
                                                       v42[6]);
  v22 = v21;
  v23 = v21 == 0 || (v21 & 0x3FFFFF) == 262400;
  v24 = v23;
  if (v23) {
    v22 = v32;
    *a2 += v34;
  }
  nn_movie_detail_FreeMemory(v19, *((_QWORD**)this_ + 183));
  nandroid_AString_Destroy_AString_plt(&v35_.v35);
  if ((v24 & 1) != 0) {
    v32 = v22;
    v14 = SdkData_e88378[0];
    v15 = SdkData_e88370[0];
    goto LABEL_10;
  }
  v27 = 0;
LABEL_31:
  if (v42 != nullptr) {
    nandroid_RefBase_decStrong_plt(v42, &v42);
  }
  if (v27 != 0) {
  LABEL_34:
    v22 = 0;
  }
  AMediaFormat_delete_plt(v11);
  v6 = v22;
LABEL_36:
  ((void (*)(_QWORD))v9[1])(*v9);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v29 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v29 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v29) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v30 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v29);
  nn_movie_detail_FreeMemory((__int64)v9, v30);
  return v6;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetTrackConfiguration(
    void* this_, void* a2, unsigned __int64 a3, int a4)
{
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  void(__attribute__((noreturn)) * v17)();
  void(__attribute__((noreturn)) * v18)();
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 i;
  __int64 v59;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v61)();
  _QWORD* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  void* v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  int v78;
  struct {
    __int64 v79;
    __int64 v80;
    __int64 v81;
  } v79_;
  __int64 v82;
  __int64 v83;
  struct {
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
  } v84_;
  _QWORD* v91;
  struct {
    __int64 v92;
    unsigned __int64 v93;
    unsigned __int64 v94;
    _QWORD* v95;
  } v92_;

  v8 = 259840;
  v9 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 17);
  if (v9 != 0 && (v9 & 0x3FFFFF) != 0x40100) {
    return v9;
  }
  if (*((_QWORD*)this_ + 182) == 0) {
    return 518912;
  }
  v78 = v9;
  v10 = (*(__int64 (**)(_QWORD, _QWORD))(*((_QWORD*)this_ + 7) + 24LL))(
      **((_QWORD**)this_ + 7), a4);
  if (v10 == 0) {
    return 258304;
  }
  v11 = *((_QWORD**)this_ + 183);
  v12 = (_QWORD*)v10;
  v92_.v92 = 0;
  v92_.v93 = 0;
  v92_.v94 = 0;
  v92_.v95 = v11;
  v13 = AMediaFormat_new_plt_alt1(v10);
  if (v13 == 0) {
    goto LABEL_79;
  }
  v75 = a3;
  v72 = a2;
  v14 = (_QWORD*)v13;
  v15 = 0;
  v16 = 0;
  v17 = SdkData_e88350[0];
  v18 = SdkData_e88378[0];
  do {
    if (((unsigned int (*)(_QWORD, _QWORD*))v12[4])(*v12, v14) != 0) {
      goto LABEL_9;
    }
    v91 = nullptr;
    if ((nandroid_AMessage_findBuffer_plt(*v14, *((_QWORD*)v17 + v15), &v91) &
         1) == 0) {
      goto LABEL_65;
    }
    v19 = *((_QWORD*)v17 + v15);
    if (v19 == *(_QWORD*)v18) {
      v84_.v89 = 0;
      v84_.v90 = 0;
      v84_.v87 = 0;
      v84_.v88 = 0;
      v22 = v91[3];
      v23 = v91[4];
      v84_.v85 = 0;
      v84_.v86 = 0;
      v84_.v84 = 0;
      nandroid_ESDS_ESDS_plt(&v84_.v84, v22, v23);
      if ((unsigned int)nandroid_ESDS_InitCheck_plt(&v84_.v84) == 0) {
        v82 = 0;
        v83 = 0;
        nandroid_ESDS_getCodecSpecificInfo_plt(&v84_.v84, &v83, &v82);
        v45 = v82;
        v79_.v80 = 0;
        v79_.v81 = 0;
        v79_.v79 = 0;
        nandroid_AString_AString_plt_86db80(&v79_.v79, v83, v82);
        v46 = v92_.v93;
        if (v92_.v93 >= v92_.v94) {
          v74 = v45;
          v77 = v16;
          v48 = v92_.v93 - v92_.v92;
          v49 =
              1 - 0x5555555555555555LL * ((__int64)(v92_.v93 - v92_.v92) >> 3);
          if (v49 > 0xAAAAAAAAAAAAAAALL) {
          LABEL_88:
            nn_fs_10de70();
          }
          if (0x5555555555555556LL * ((__int64)(v92_.v94 - v92_.v92) >> 3) >
              v49) {
            v49 = 0x5555555555555556LL * ((__int64)(v92_.v94 - v92_.v92) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v92_.v94 - v92_.v92) >> 3) >=
              0x555555555555555LL) {
            v50 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v50 = v49;
          }
          v71 = 3 * v50;
          v51 =
              nn_movie_detail_AllocateMemory_alt1(24 * v50, (_QWORD**)v92_.v95);
          v52 = v51 + v48;
          v69 = v51;
          nandroid_AString_AString_plt_86dba0(v51 + v48, &v79_.v79);
          v54 = v92_.v92;
          v53 = v92_.v93;
          v55 = v52 + v92_.v92 - v92_.v93;
          if (v92_.v93 != v92_.v92) {
            v56 = v92_.v92;
            v67 = v52 + v92_.v92 - v92_.v93;
            v57 = v67;
            do {
              nandroid_AString_AString_plt_86dba0(v57, v56);
              v56 += 24;
              v57 += 24;
            } while (v56 != v53);
            do {
              nandroid_AString_Destroy_AString_plt(v54);
              v54 += 24;
            } while (v54 != v53);
            v54 = v92_.v92;
            v17 = SdkData_e88350[0];
            v18 = SdkData_e88378[0];
            v55 = v67;
          }
          v47 = v52 + 24;
          v92_.v92 = v55;
          v92_.v93 = v52 + 24;
          v92_.v94 = v69 + 8 * v71;
          if (v54 != 0) {
            nn_movie_detail_FreeMemory(v54, v92_.v95);
          }
          v16 = v77;
          v45 = v74;
        }
        else {
          nandroid_AString_AString_plt_86dba0(v92_.v93, &v79_.v79);
          v47 = v46 + 24;
        }
        v16 += v45;
        v92_.v93 = v47;
        nandroid_AString_Destroy_AString_plt(&v79_.v79);
        nandroid_ESDS_Destroy_ESDS_plt(&v84_.v84);
      LABEL_65:
        v24 = 1;
        v25 = v91;
        if (v91 == nullptr) {
          goto LABEL_8;
        }
      LABEL_66:
        nandroid_RefBase_decStrong_plt(v25, &v91);
        goto LABEL_8;
      }
      nandroid_ESDS_Destroy_ESDS_plt(&v84_.v84);
      v24 = 0;
      v78 = 517376;
      v25 = v91;
      if (v91 != nullptr) {
        goto LABEL_66;
      }
    }
    else {
      if (v19 != *(_QWORD*)SdkData_e88370[0]) {
        v84_.v85 = 0;
        v84_.v86 = 0;
        v84_.v84 = 0;
        nandroid_AString_AString_plt_86db80(&v84_.v84, v91[3] + v91[5], v91[6]);
        v20 = v92_.v93;
        if (v92_.v93 >= v92_.v94) {
          v76 = v16;
          v34 = v92_.v93 - v92_.v92;
          v35 =
              1 - 0x5555555555555555LL * ((__int64)(v92_.v93 - v92_.v92) >> 3);
          if (v35 > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_88;
          }
          if (0x5555555555555556LL * ((__int64)(v92_.v94 - v92_.v92) >> 3) >
              v35) {
            v35 = 0x5555555555555556LL * ((__int64)(v92_.v94 - v92_.v92) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v92_.v94 - v92_.v92) >> 3) >=
              0x555555555555555LL) {
            v36 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v36 = v35;
          }
          v37 = 3 * v36;
          v38 =
              nn_movie_detail_AllocateMemory_alt1(24 * v36, (_QWORD**)v92_.v95);
          v39 = v38 + v34;
          v73 = v38;
          nandroid_AString_AString_plt_86dba0(v38 + v34, &v84_.v84);
          v41 = v92_.v92;
          v40 = v92_.v93;
          v42 = v39 + v92_.v92 - v92_.v93;
          if (v92_.v93 != v92_.v92) {
            v68 = v39 + v92_.v92 - v92_.v93;
            v70 = v37;
            v43 = v92_.v92;
            v44 = v68;
            do {
              nandroid_AString_AString_plt_86dba0(v44, v43);
              v43 += 24;
              v44 += 24;
            } while (v43 != v40);
            do {
              nandroid_AString_Destroy_AString_plt(v41);
              v41 += 24;
            } while (v41 != v40);
            v41 = v92_.v92;
            v42 = v68;
            v37 = v70;
          }
          v21 = v39 + 24;
          v92_.v92 = v42;
          v92_.v93 = v39 + 24;
          v92_.v94 = v73 + 8 * v37;
          v17 = SdkData_e88350[0];
          if (v41 != 0) {
            nn_movie_detail_FreeMemory(v41, v92_.v95);
          }
          v16 = v76;
          v18 = SdkData_e88378[0];
        }
        else {
          nandroid_AString_AString_plt_86dba0(v92_.v93, &v84_.v84);
          v21 = v20 + 24;
        }
        v92_.v93 = v21;
        v16 += v91[6];
        nandroid_AString_Destroy_AString_plt(&v84_.v84);
        v24 = 1;
        v25 = v91;
        if (v91 == nullptr) {
          goto LABEL_8;
        }
        goto LABEL_66;
      }
      v84_.v85 = 0;
      v84_.v86 = 0;
      v84_.v84 = 0;
      nandroid_AString_AString_plt_86db80(&v84_.v84, v91[3] + v91[5], v91[6]);
      v26 = 2LL * v91[6];
      v27 = nn_movie_detail_AllocateMemory_alt1(v26, *((_QWORD***)this_ + 183));
      if (v27 != 0) {
        v28 = v27;
        v83 = 0;
        v29 = nandroid_AString_c_str_plt(&v84_.v84);
        v30 = nn_movie_detail_ParseAvccCodecSpecificData_plt(v28, v26, &v83,
                                                             v29, v91[6]);
        v31 = v30 == 0 || (v30 & 0x3FFFFF) == 262400;
        v24 = v31;
        if (v31) {
          v79_.v80 = 0;
          v79_.v81 = 0;
          v79_.v79 = 0;
          nandroid_AString_AString_plt_86db80(&v79_.v79, v28, v83);
          v32 = v92_.v93;
          v18 = SdkData_e88378[0];
          if (v92_.v93 >= v92_.v94) {
            v33 = SdkRoutine_4d3f20((__int64)&v92_.v92, (__int64)&v79_.v79);
          }
          else {
            nandroid_AString_AString_plt_86dba0(v92_.v93, &v79_.v79);
            v33 = v32 + 24;
          }
          v92_.v93 = v33;
          v16 += v83;
          nandroid_AString_Destroy_AString_plt(&v79_.v79);
        }
        else {
          v78 = v30;
          v18 = SdkData_e88378[0];
        }
        nn_movie_detail_FreeMemory(v28, *((_QWORD**)this_ + 183));
        nandroid_AString_Destroy_AString_plt(&v84_.v84);
        v17 = SdkData_e88350[0];
        v25 = v91;
        if (v91 != nullptr) {
          goto LABEL_66;
        }
      }
      else {
        nandroid_AString_Destroy_AString_plt(&v84_.v84);
        v24 = 0;
        v78 = 259840;
        v17 = SdkData_e88350[0];
        v18 = SdkData_e88378[0];
        v25 = v91;
        if (v91 != nullptr) {
          goto LABEL_66;
        }
      }
    }
  LABEL_8:
    if (v24 == 0) {
      goto LABEL_78;
    }
  LABEL_9:
    ++v15;
  } while (v15 != 6);
  if (v16 <= v75) {
    v84_.v85 = 0;
    v84_.v86 = 0;
    v84_.v84 = 0;
    nandroid_AString_AString_plt_86d9f0(&v84_.v84);
    for (i = v92_.v92; i != v92_.v93; i += 24) {
      nandroid_AString_append_plt_86dbb0(&v84_.v84, i);
    }
    v59 = nandroid_AString_c_str_plt(&v84_.v84);
    memcpy_plt(v72, v59, v16);
    nandroid_AString_Destroy_AString_plt(&v84_.v84);
    v78 = 0;
  }
  else {
    v78 = 262912;
  }
LABEL_78:
  AMediaFormat_delete_plt(v14);
  v8 = v78;
LABEL_79:
  ((void (*)(_QWORD))v12[1])(*v12);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v61 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v61 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v61) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v62 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v61);
  nn_movie_detail_FreeMemory((__int64)v12, v62);
  v63 = v92_.v92;
  if (v92_.v92 != 0) {
    v64 = v92_.v93;
    v65 = v92_.v92;
    if (v92_.v92 != v92_.v93) {
      do {
        v64 -= 24LL;
        nandroid_AString_Destroy_AString_plt(v64);
      } while (v64 != v63);
      v65 = v92_.v92;
    }
    v92_.v93 = v63;
    nn_movie_detail_FreeMemory(v65, v92_.v95);
  }
  return v8;
}

__int64 nn_movie_detail_BaseMediaExtractor_Start_4d1900(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 18);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 518912;
    if (*((_QWORD*)this_ + 182) != 0) {
      if (*(_QWORD*)(*((_QWORD*)this_ + 167) + 16LL) != 0) {
        *((_BYTE*)this_ + 1320) = 1;
        nn_movie_detail_MediaState_SetState_plt((char*)this_ + 64, 4);
        v3 = *((_QWORD*)this_ + 167);
        v4 = *(_QWORD*)(v3 + 8);
        if (v4 != v3) {
          do {
            nn_os_SignalSystemEvent_plt(*(_QWORD*)(v4 + 16));
            if (*(_DWORD*)(v4 + 48) == -1) {
              break;
            }
            v4 = *(_QWORD*)(v4 + 8);
          } while (v4 != *((_QWORD*)this_ + 167));
        }
        return 0;
      }
      else {
        return 519424;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_SignalAllTracks(void* this_)
{
  __int64 v1;
  __int64 v2;

  v1 = *((_QWORD*)this_ + 167);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 != v1) {
    do {
      nn_os_SignalSystemEvent_plt(*(_QWORD*)(v2 + 16));
      if (*(_DWORD*)(v2 + 48) == -1) {
        break;
      }
      v2 = *(_QWORD*)(v2 + 8);
    } while (v2 != *((_QWORD*)this_ + 167));
  }
  return 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_Start_4d1a40(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 18);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 518912;
    if (*((_QWORD*)this_ + 181) != 0) {
      if (*(_QWORD*)(*((_QWORD*)this_ + 166) + 16LL) != 0) {
        *((_BYTE*)this_ + 1312) = 1;
        nn_movie_detail_MediaState_SetState_plt((char*)this_ + 56, 4);
        v3 = *((_QWORD*)this_ + 166);
        v4 = *(_QWORD*)(v3 + 8);
        if (v4 != v3) {
          do {
            nn_os_SignalSystemEvent_plt(*(_QWORD*)(v4 + 16));
            if (*(_DWORD*)(v4 + 48) == -1) {
              break;
            }
            v4 = *(_QWORD*)(v4 + 8);
          } while (v4 != *((_QWORD*)this_ + 166));
        }
        return 0;
      }
      else {
        return 519424;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_Stop_4d1b10(void* this_)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 19);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    nn_movie_detail_MediaState_SetState_plt((char*)this_ + 64, 5);
    if (((*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 182) + 32LL))(
             *((_QWORD*)this_ + 182)) &
         4) != 0) {
      nandroid_NuCachedSource2_flushCache_plt(*((_QWORD*)this_ + 182));
    }
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_Stop_4d1b90(void* this_)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 19);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    nn_movie_detail_MediaState_SetState_plt((char*)this_ + 56, 5);
    if (((*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 181) + 32LL))(
             *((_QWORD*)this_ + 181)) &
         4) != 0) {
      nandroid_NuCachedSource2_flushCache_plt(*((_QWORD*)this_ + 181));
    }
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetSampleAvailableEvent_4d1c20(
    __int64 a1, _QWORD* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  _QWORD* v11;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 64, 20);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 519424;
    if (*(_QWORD*)(a1 + 1456) != 0) {
      v7 = *(_QWORD*)(a1 + 1336);
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 != v7) {
        v9 = nullptr;
        do {
          v10 = *(_DWORD*)(v8 + 48);
          v11 = (_QWORD*)(v8 + 16);
          v8 = *(_QWORD*)(v8 + 8);
          if (v10 == a3) {
            v9 = v11;
          }
        } while (v8 != v7);
        if (v9 != nullptr) {
          *a2 = *v9;
          return 0;
        }
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_FindInSelectedTracks(void* this_,
                                                                int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;

  v2 = *((_QWORD*)this_ + 167);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 == v2) {
    return 0;
  }
  result = 0;
  do {
    v5 = *(_DWORD*)(v3 + 48);
    v6 = v3 + 16;
    v3 = *(_QWORD*)(v3 + 8);
    if (v5 == a2) {
      result = v6;
    }
  } while (v3 != v2);
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetSampleAvailableEvent_4d1d60(
    __int64 a1, _QWORD* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  _QWORD* v11;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 56, 20);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 519424;
    if (*(_QWORD*)(a1 + 1448) != 0) {
      v7 = *(_QWORD*)(a1 + 1328);
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 != v7) {
        v9 = nullptr;
        do {
          v10 = *(_DWORD*)(v8 + 48);
          v11 = (_QWORD*)(v8 + 16);
          v8 = *(_QWORD*)(v8 + 8);
          if (v10 == a3) {
            v9 = v11;
          }
        } while (v8 != v7);
        if (v9 != nullptr) {
          *a2 = *v9;
          return 0;
        }
      }
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_SeekTo(__int64 a1, __int64 a2,
                                                  int a3)
{
  unsigned int v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  _QWORD** v11;
  int v12;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v26;

  v6 =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 64, 23);
  if (v6 == 0 || (v6 & 0x3FFFFF) == 0x40100) {
    v7 = *(_QWORD*)(a1 + 1336);
    v26 = a2;
    if (a3 == 1) {
      v8 = 8;
    }
    else {
      v8 = 10;
    }
    if (a3 == 2) {
      v9 = 9;
    }
    else {
      v9 = v8;
    }
    do {
      v7 = *(_QWORD*)(v7 + 8);
      if (v7 == *(_QWORD*)(a1 + 1336)) {
        goto LABEL_31;
      }
      nn_os_ClearSystemEvent_plt(*(_QWORD*)(v7 + 16));
      v11 = (_QWORD**)(v7 + 32);
      v10 = *(_QWORD*)(v7 + 32);
      if (v10 != 0) {
        (*(void (**)(_QWORD))(v10 + 8))(*(_QWORD*)v10);
        *v11 = nullptr;
      }
    } while (*(_BYTE*)(v7 + 52) != 1);
    v12 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64))(
        *(_QWORD*)(v7 + 24) + 40LL))(**(_QWORD**)(v7 + 24), v7 + 32, v9, a2);
    *(_DWORD*)(v7 + 56) = v12;
    if (v12 == -10006 || v12 == 0) {
      if (v12 != 0 && v12 != -10006) {
        goto LABEL_51;
      }
    }
    else {
      v6 = 517376;
      if (v12 != 0 && v12 != -10006) {
      LABEL_51:
        nn_os_SignalSystemEvent_plt(*(_QWORD*)(a1 + 32));
        return v6;
      }
    }
    if (*v11 != nullptr) {
      v16 = (_QWORD*)((__int64 (*)(_QWORD))(*v11)[7])(**v11);
      if (v16 != nullptr) {
        nandroid_AMessage_findInt64_plt(*v16, "timeUs", &v26);
      }
    }
  LABEL_31:
    v17 = *(_QWORD*)(a1 + 1336);
    v18 = *(_QWORD*)(v17 + 8);
    if (v18 != v17) {
      do {
        if ((*(_BYTE*)(v18 + 52) & 1) == 0) {
          nn_os_ClearSystemEvent_plt(*(_QWORD*)(v18 + 16));
          v20 = *(_QWORD*)(v18 + 32);
          if (v20 != 0) {
            (*(void (**)(_QWORD))(v20 + 8))(*(_QWORD*)v20);
            *(_QWORD*)(v18 + 32) = 0;
          }
          v21 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64))(
              *(_QWORD*)(v18 + 24) + 40LL))(**(_QWORD**)(v18 + 24), v18 + 32,
                                            v9, v26);
          *(_DWORD*)(v18 + 56) = v21;
          if (v21 != -10006 && v21 != 0) {
            v6 = 517376;
          }
          if (v21 != 0 && v21 != -10006) {
            goto LABEL_51;
          }
        }
        v18 = *(_QWORD*)(v18 + 8);
      } while (v18 != *(_QWORD*)(a1 + 1336));
    }
    nn_os_SignalSystemEvent_plt(*(_QWORD*)(a1 + 32));
    v23 = *(_QWORD*)(a1 + 1336);
    v24 = *(_QWORD*)(v23 + 8);
    if (v24 != v23) {
      do {
        nn_os_SignalSystemEvent_plt(*(_QWORD*)(v24 + 16));
        if (*(_DWORD*)(v24 + 48) == -1) {
          break;
        }
        v24 = *(_QWORD*)(v24 + 8);
      } while (v24 != *(_QWORD*)(a1 + 1336));
    }
    return 0;
  }
  return v6;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetSampleBufferSize(
    void* this_, unsigned __int64* a2, int a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v6 = 262400;
  v7 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 24);
  if (v7 == 0 || (v7 & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 182) != 0) {
      v8 = *((_QWORD*)this_ + 167);
      v9 = *(_QWORD*)(v8 + 8);
      if (v9 == v8) {
        return 519424;
      }
      v10 = 0;
      do {
        v11 = *(_DWORD*)(v9 + 48);
        v12 = v9 + 16;
        v9 = *(_QWORD*)(v9 + 8);
        if (v11 == a3) {
          v10 = v12;
        }
      } while (v9 != v8);
      if (v10 == 0) {
        return 519424;
      }
      else {
        v13 = *(_QWORD*)(v10 + 16);
        if (v13 != 0) {
          goto LABEL_12;
        }
        if (*((_BYTE*)this_ + 1320) != 1) {
          return 517888;
        }
        if (*(_DWORD*)(v10 + 40) != -10006) {
          v6 = v7;
          v15 = nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(this_, v10);
          if (v15 != -10006 && v15 != 0) {
            v6 = 517376;
          }
          if (v15 == 0 || v15 == -10006) {
            v13 = *(_QWORD*)(v10 + 16);
            v6 = 517376;
            if (v13 != 0) {
            LABEL_12:
              v6 = 0;
              *a2 = (*(__int64 (**)(_QWORD))(v13 + 24))(*(_QWORD*)v13);
            }
          }
        }
      }
    }
    else {
      return 518912;
    }
  }
  else {
    return v7;
  }
  return v6;
}

__int64 nn_movie_detail_BaseMediaExtractor_AdvanceTrack(void* this_, void* a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  int v8;

  if (a2 == nullptr) {
    return 4294957292LL;
  }
  if (*((_DWORD*)a2 + 10) != -10006) {
    v4 = (_QWORD*)((char*)a2 + 16);
    v3 = *((_QWORD*)a2 + 2);
    if (v3 != 0) {
      (*(void (**)(_QWORD))(v3 + 8))(*(_QWORD*)v3);
      *v4 = 0;
    }
    *((_DWORD*)a2 + 10) = (*(__int64 (**)(_QWORD, char*, _QWORD, _QWORD))(
        *((_QWORD*)a2 + 1) + 40LL))(**((_QWORD**)a2 + 1), (char*)a2 + 16, 0, 0);
    v6 = *((_QWORD*)this_ + 167);
    v7 = *(_QWORD*)(v6 + 8);
    if (v7 != v6) {
      v8 = *((_DWORD*)a2 + 8);
      if ((v8 & 0x80000000) == 0) {
        while (1) {
          if (*(_DWORD*)(v7 + 48) == v8) {
            nn_os_SignalSystemEvent_plt(*(_QWORD*)(v7 + 16));
            if (*(_DWORD*)(v7 + 48) == v8) {
              return *((unsigned int*)a2 + 10);
            }
            v6 = *((_QWORD*)this_ + 167);
          }
          v7 = *(_QWORD*)(v7 + 8);
          if (v7 == v6) {
            return *((unsigned int*)a2 + 10);
          }
        }
      }
      do {
        nn_os_SignalSystemEvent_plt(*(_QWORD*)(v7 + 16));
        if (*(_DWORD*)(v7 + 48) == v8) {
          break;
        }
        v7 = *(_QWORD*)(v7 + 8);
      } while (v7 != *((_QWORD*)this_ + 167));
    }
  }
  return *((unsigned int*)a2 + 10);
}

__int64 nn_movie_detail_BaseMediaExtractor_ReadSamples(
    void* this_, void* a2, unsigned __int64* a3, __int64* a4, unsigned int* a5,
    unsigned __int64 a6, int a7)
{
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  unsigned int v26;
  int v27;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;

  v14 = 262400;
  v15 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 25);
  if (v15 != 0 && (v15 & 0x3FFFFF) != 0x40100) {
    return v15;
  }
  if (*((_QWORD*)this_ + 182) == 0) {
    return 518912;
  }
  v16 = *((_QWORD*)this_ + 167);
  v17 = *(_QWORD*)(v16 + 8);
  if (v17 != v16) {
    v18 = 0;
    do {
      v19 = *(_DWORD*)(v17 + 48);
      v20 = v17 + 16;
      v17 = *(_QWORD*)(v17 + 8);
      if (v19 == a7) {
        v18 = v20;
      }
    } while (v17 != v16);
    if (v18 != 0) {
      if (*(_QWORD*)(v18 + 16) != 0) {
        goto LABEL_51;
      }
      if (*((_BYTE*)this_ + 1320) != 1) {
        return 517888;
      }
      if (*(_DWORD*)(v18 + 40) == -10006) {
        *a5 |= 8u;
        return v14;
      }
      v26 = v15;
      v27 = nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(this_, v18);
      v15 = v26;
      if (v27 != -10006 && v27 != 0) {
        v15 = 517376;
      }
      if (v27 != 0 && v27 != -10006) {
        return v15;
      }
      if (*(_QWORD*)(v18 + 16) != 0) {
      LABEL_51:
        *a3 = 0;
        v21 = v15;
        *a3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(v18 + 16) + 40LL))(
            **(_QWORD**)(v18 + 16));
        *a5 = 0;
        v22 = (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)(v18 + 16) + 56LL))(
            **(_QWORD**)(v18 + 16));
        if (v22 != nullptr) {
          v23 = v22;
          v24 = *v22;
          v33 = v24;
          if (v24 != 0) {
            v25 = v23;
            nandroid_RefBase_incStrong_plt(v24, &v33);
            if (v33 != 0) {
              v32 = 0;
              if ((nandroid_AMessage_findInt32_plt(
                       v33, *(_QWORD*)SdkData_e88470[0], &v32) &
                   1) != 0 &&
                  v32 >= 1) {
                *a5 |= 4u;
              }
              if (*a3 <= a6) {
                v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(v18 + 16) + 16LL))(
                    **(_QWORD**)(v18 + 16));
                memcpy_plt(a2, v30, *a3);
                if ((nandroid_AMessage_findInt64_plt(*v25, "timeUs", a4) & 1) ==
                    0) {
                  *a4 = -1;
                }
                if (*(_DWORD*)(v18 + 40) == -10006) {
                  v14 = 262400;
                  *a5 |= 8u;
                }
                else {
                  v31 = nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(
                      this_, v18);
                  if (v31 == -10006) {
                    v14 = v21;
                  }
                  else {
                    v14 = v21;
                    if (v31 != 0) {
                      v14 = 517376;
                    }
                  }
                  if (v31 == 0 || v31 == -10006) {
                    v14 = 0;
                  }
                }
              }
              else {
                *a3 = 0;
                v14 = 262912;
              }
              if (v33 != 0) {
                nandroid_RefBase_decStrong_plt(v33, &v33);
              }
              return v14;
            }
          }
        }
      }
      return 517376;
    }
  }
  return 519424;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetSampleTime(void* this_,
                                                         __int64* a2, int a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned int v15;
  int v16;

  v6 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 26);
  if (v6 != 0 && (v6 & 0x3FFFFF) != 0x40100) {
    return v6;
  }
  if (*((_QWORD*)this_ + 182) == 0) {
    return 518912;
  }
  v8 = *((_QWORD*)this_ + 167);
  v9 = *(_QWORD*)(v8 + 8);
  if (v9 == v8) {
    return 519424;
  }
  v10 = 0;
  do {
    v11 = *(_DWORD*)(v9 + 48);
    v12 = v9 + 16;
    v9 = *(_QWORD*)(v9 + 8);
    if (v11 == a3) {
      v10 = v12;
    }
  } while (v9 != v8);
  v7 = 519424;
  if (v10 != 0) {
    v13 = *(_QWORD*)(v10 + 16);
    if (v13 != 0) {
    LABEL_12:
      v14 = (_QWORD*)(*(__int64 (**)(_QWORD))(v13 + 56))(*(_QWORD*)v13);
      if (v14 != nullptr &&
          (nandroid_AMessage_findInt64_plt(*v14, "timeUs", a2) & 1) != 0) {
        return 0;
      }
      else {
        v7 = 0;
        *a2 = -1;
      }
      return v7;
    }
    if (*((_BYTE*)this_ + 1320) != 1) {
      return 517888;
    }
    v7 = 262400;
    if (*(_DWORD*)(v10 + 40) != -10006) {
      v15 = v6;
      v16 = nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(this_, v10);
      v7 = v15;
      if (v16 != -10006 && v16 != 0) {
        v7 = 517376;
      }
      if (v16 == 0 || v16 == -10006) {
        v13 = *(_QWORD*)(v10 + 16);
        if (v13 == 0) {
          if (*(_DWORD*)(v10 + 40) == -10006) {
            return 262400;
          }
          else {
            return 519424;
          }
        }
        goto LABEL_12;
      }
    }
  }
  return v7;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetSampleProperties(__int64 a1,
                                                               __int64 a2,
                                                               int a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  int v20;
  _QWORD v21[4];

  v4 = *(_QWORD*)(a1 + 1456);
  result = 517376;
  if (v4 == 0) {
    return 518912;
  }
  v6 = *(_QWORD*)(a1 + 1336);
  v7 = *(_QWORD*)(v6 + 8);
  if (v7 != v6) {
    v8 = 0;
    do {
      v9 = *(_DWORD*)(v7 + 48);
      v10 = v7 + 16;
      v7 = *(_QWORD*)(v7 + 8);
      if (v9 == a3) {
        v8 = v10;
      }
    } while (v7 != v6);
    if (v8 != 0) {
      if (*(_QWORD*)(v8 + 16) != 0) {
        goto LABEL_9;
      }
      if (*(_BYTE*)(a1 + 1320) != 1) {
        return 517888;
      }
      if (*(_DWORD*)(v8 + 40) == -10006) {
        return 262400;
      }
      v19 = a2;
      v20 = nn_movie_detail_BaseMediaExtractor_AdvanceTrack_plt(a1, v8);
      a2 = v19;
      result = 517376;
      if (v20 == 0 || v20 == -10006) {
      LABEL_9:
        if (*(_DWORD*)(v8 + 40) == -10006) {
          return 262400;
        }
        else {
          v11 = *(_QWORD*)(v8 + 16);
          if (v11 != 0) {
            v12 = a2;
            v13 = (_QWORD*)(*(__int64 (**)(_QWORD))(v11 + 56))(*(_QWORD*)v11);
            if (v13 != nullptr) {
              v14 = *v13;
              v15 = v13;
              result = 517376;
              if (v14 != 0) {
                SdkRoutine_4d0060(v15, v12, 0);
                if ((nn_movie_MediaProperty_ContainsKey_plt(v12,
                                                            "max-input-size") &
                     1) == 0) {
                  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(v8 + 16) + 40LL))(
                      **(_QWORD**)(v8 + 16));
                  memset(v21, 0, sizeof(v21));
                  v17 = v16;
                  if ((nn_movie_MediaProperty_GetString_plt(
                           v12, v21, 32, *(_QWORD*)SdkData_e88438[0]) &
                       1) != 0 &&
                      (unsigned int)strcmp_plt(*(void**)SdkData_e88510[0],
                                               (const char*)v21) == 0) {
                    v17 += 4;
                  }
                  nn_movie_MediaProperty_SetSize_plt(v12, "max-input-size",
                                                     v17);
                }
                nn_movie_MediaProperty_SetInt32_plt(v12, "track-id",
                                                    *(unsigned int*)(v8 + 32));
                return 0;
              }
            }
            else {
              return 517376;
            }
          }
        }
      }
      return result;
    }
  }
  return 519424;
}

__int64

nn_movie_detail_BaseMediaExtractor_GetCacheRangeCount_4d2a50(void* this_,
                                                             _BOOL4* a2)
{
  __int64 result;
  __int64 v5;
  _BOOL4 v6;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 28);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    v5 = *((_QWORD*)this_ + 182);
    if (v5 != 0) {
      v6 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5) & 4) != 0;
      *a2 = v6;
      return 0;
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64

nn_movie_detail_BaseMediaExtractor_GetCacheRangeCount_4d2ae0(void* this_,
                                                             _BOOL4* a2)
{
  __int64 result;
  __int64 v5;
  _BOOL4 v6;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 56, 28);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    v5 = *((_QWORD*)this_ + 181);
    if (v5 != 0) {
      v6 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5) & 4) != 0;
      *a2 = v6;
      return 0;
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetCacheRange(void* this_,
                                                         __int64* a2,
                                                         __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 64, 29);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *a2 = 0;
    *a3 = 0;
    v7 = *((_QWORD*)this_ + 182);
    if (v7 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7) & 4) != 0 &&
          (*((int*)this_ + 337) > 0 || *((__int64*)this_ + 169) >= 1)) {
        v8 = *((_QWORD*)this_ + 182);
        v13 = 0;
        v12 = 0;
        nandroid_NuCachedSource2_getBufferedRange_plt(v8, &v13, &v12);
        v9 = *((int*)this_ + 337);
        if ((int)v9 <= 0) {
          v10 = *((_QWORD*)this_ + 182);
          v11 = 0;
          if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v10 + 16LL))(
                  v10, &v11) == 0) {
            v9 = 8000000 * v11 / (signed __int64)*((_QWORD*)this_ + 169);
            if (v11 != 0x7FFFFFFFFFFFFFFFLL) {
              *((_DWORD*)this_ + 337) = v9;
            }
          }
        }
        if (v9 >= 1) {
          *a2 = 8000000 * v13 / v9;
          *a3 = 8000000 * v12 / v9;
        }
      }
      return 0;
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_BaseMediaExtractor_IsCacheFull_4d2ce0(void* this_,
                                                              bool* a2,
                                                              bool* a3)
{
  bool v7;

  if (((*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 182) + 32LL))(
           *((_QWORD*)this_ + 182)) &
       4) == 0) {
    return 521472;
  }
  v7 =
      nandroid_NuCachedSource2_IsCacheFull_plt(*((_QWORD*)this_ + 182), a3) & 1;
  *a2 = v7;
  return 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_IsCacheFull_4d2d60(void* this_,
                                                              bool* a2,
                                                              bool* a3)
{
  bool v7;

  if (((*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 181) + 32LL))(
           *((_QWORD*)this_ + 181)) &
       4) == 0) {
    return 521472;
  }
  v7 =
      nandroid_NuCachedSource2_IsCacheFull_plt(*((_QWORD*)this_ + 181), a3) & 1;
  *a2 = v7;
  return 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_StreamSourceReadData(
    void* this_, void* a2, unsigned __int64* a3, unsigned __int64 a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;

  nn_os_LockMutex_plt((char*)this_ + 1400);
  v8 = *((__int64**)this_ + 173);
  v9 = *v8;
  v10 = v8[1];
  if (v10 - *v8 < a4) {
    v11 = *((_QWORD*)this_ + 179);
    do {
      nn_os_UnlockMutex_plt((char*)this_ + 1400);
      nn_os_SignalSystemEvent_plt(*((_QWORD*)this_ + 2));
      nn_os_WaitEvent_plt(*((_QWORD*)this_ + 5));
      nn_os_LockMutex_plt((char*)this_ + 1400);
      v12 = *((_QWORD*)this_ + 179);
      v14 = **((_QWORD**)this_ + 173);
      v13 = *(_QWORD*)(*((_QWORD*)this_ + 173) + 8LL);
      v15 = v13 - v14 - v12;
      if (v13 - v14 == v12) {
        break;
      }
      v16 = v9 - v10;
      v9 = **((_QWORD**)this_ + 173);
      v10 = *(_QWORD*)(*((_QWORD*)this_ + 173) + 8LL);
      v17 = v16 + v11;
      v11 = *((_QWORD*)this_ + 179);
    } while (v17 + v15 != 0 && v15 < a4);
  }
  *a3 = a4;
  v19 = *((_QWORD*)this_ + 179);
  v20 = **((_QWORD**)this_ + 173);
  v21 = *(_QWORD*)(*((_QWORD*)this_ + 173) + 8LL) - (v19 + v20);
  if (v21 < a4) {
    *a3 = v21;
    a4 = v21;
    v19 = *((_QWORD*)this_ + 179);
    v20 = **((_QWORD**)this_ + 173);
  }
  memcpy_plt(a2, v20 + v19, a4);
  v22 = *((_QWORD*)this_ + 179) + *a3;
  *((_QWORD*)this_ + 179) = v22;
  if (v22 >= 0x10000) {
    v23 = *((_QWORD**)this_ + 173);
    v25 = *v23;
    v24 = v23[1];
    v26 = v22 + *v23;
    if (v22 >> 17 != 0 || v24 - v26 <= 0x7F) {
      if (v24 - v25 != v22) {
        if (v25 == v26) {
        LABEL_20:
          *((_QWORD*)this_ + 179) = 0;
          goto LABEL_21;
        }
        v27 = v24 - (v25 + v22);
        if (v24 != v25 + v22) {
          memmove_plt(*v23, v25 + v22, v24 - (v25 + v22));
        }
        v25 += v27;
      }
      v23[1] = v25;
      goto LABEL_20;
    }
  }
LABEL_21:
  *((_QWORD*)this_ + 180) += *a3;
  nn_os_UnlockMutex_plt((char*)this_ + 1400);
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_StreamSourceSeekTo_4d2f80(void* this_,
                                                             __int64 a2)
{
  _QWORD* v4;

  nn_os_LockMutex_plt((char*)this_ + 1400);
  v4 = *((_QWORD**)this_ + 173);
  *((_QWORD*)this_ + 180) = a2;
  v4[1] = *v4;
  *((_QWORD*)this_ + 179) = 0;
  nn_os_SignalSystemEvent_plt(*((_QWORD*)this_ + 3));
  nn_os_UnlockMutex_plt((char*)this_ + 1400);
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_StreamSourceSeekTo_4d2fe0(void* this_,
                                                             __int64 a2)
{
  _QWORD* v4;

  nn_os_LockMutex_plt((char*)this_ + 1392);
  v4 = *((_QWORD**)this_ + 172);
  *((_QWORD*)this_ + 179) = a2;
  v4[1] = *v4;
  *((_QWORD*)this_ + 178) = 0;
  nn_os_SignalSystemEvent_plt(*((_QWORD*)this_ + 2));
  nn_os_UnlockMutex_plt((char*)this_ + 1392);
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_StreamSourceSetSize_4d3040(void* this_,
                                                              __int64 a2)
{
  __int64 v2;

  if (a2 < 0) {
    return 257280;
  }
  v2 = *((_QWORD*)this_ + 181);
  *((_QWORD*)this_ + 170) = a2;
  if (v2 != 0) {
    *(_QWORD*)(v2 + 16) = a2;
  }
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_StreamSourceSetSize_4d3070(void* this_,
                                                              __int64 a2)
{
  __int64 v2;

  if (a2 < 0) {
    return 257280;
  }
  v2 = *((_QWORD*)this_ + 180);
  *((_QWORD*)this_ + 169) = a2;
  if (v2 != 0) {
    *(_QWORD*)(v2 + 16) = a2;
  }
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetPreferredPixels_4d30a0(void* this_)
{
  return 257792;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetPreferredPixels_4d30b0(void* this_)
{
  return 257792;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetMinBandwidthSamples_4d30c0(void* this_)
{
  return 257792;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetMinBandwidthSamples_4d30d0(void* this_)
{
  return 257792;
}

__int64 nn_movie_detail_BaseMediaExtractor_SignalTrack(void* this_, int a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *((_QWORD*)this_ + 167);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != v2) {
    if ((a2 & 0x80000000) == 0) {
      while (1) {
        if (*(_DWORD*)(v3 + 48) == a2) {
          nn_os_SignalSystemEvent_plt(*(_QWORD*)(v3 + 16));
          if (*(_DWORD*)(v3 + 48) == a2) {
            return 0;
          }
          v2 = *((_QWORD*)this_ + 167);
        }
        v3 = *(_QWORD*)(v3 + 8);
        if (v3 == v2) {
          return 0;
        }
      }
    }
    do {
      nn_os_SignalSystemEvent_plt(*(_QWORD*)(v3 + 16));
      if (*(_DWORD*)(v3 + 48) == a2) {
        break;
      }
      v3 = *(_QWORD*)(v3 + 8);
    } while (v3 != *((_QWORD*)this_ + 167));
  }
  return 0;
}

__int64 nn_movie_detail_BaseMediaExtractor_GetCacheThreshold(
    void* this_, unsigned __int64 a2, __int64* a3, unsigned __int64* a4)
{

#pragma clang fp contract(off)
  if (a3 != nullptr && a4 != nullptr) {
    *a4 = a2 >> 10;
    *a3 = (__int64)(float)(vcvts_n_f32_u64(a2, 1u) * 0x1.0000000000000p-10f);
  }
  return 0;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetTrackSampleAvailableEventType_4d31e0(
    __int64 a1, int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;

  result = 261376;
  if ((a2 & 0x80000000) == 0 && a2 < (signed __int32)*(_DWORD*)(a1 + 1344)) {
    v5 = *(_QWORD*)(a1 + 1336);
    while (1) {
      v5 = *(_QWORD*)(v5 + 8);
      if (v5 == *(_QWORD*)(a1 + 1336)) {
        break;
      }
      if (*(_DWORD*)(v5 + 48) == a2) {
        *(_QWORD*)(v5 + 16) = a3;
        if (*(_BYTE*)(a1 + 1320) == 1) {
          nn_os_SignalSystemEvent_plt(a3);
        }
        return 0;
      }
    }
  }
  return result;
}

__int64

nn_movie_detail_BaseMediaExtractor_SetTrackSampleAvailableEventType_4d3260(
    __int64 a1, int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;

  result = 261376;
  if ((a2 & 0x80000000) == 0 && a2 < (signed __int32)*(_DWORD*)(a1 + 1336)) {
    v5 = *(_QWORD*)(a1 + 1328);
    while (1) {
      v5 = *(_QWORD*)(v5 + 8);
      if (v5 == *(_QWORD*)(a1 + 1328)) {
        break;
      }
      if (*(_DWORD*)(v5 + 48) == a2) {
        *(_QWORD*)(v5 + 16) = a3;
        if (*(_BYTE*)(a1 + 1312) == 1) {
          nn_os_SignalSystemEvent_plt(a3);
        }
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
