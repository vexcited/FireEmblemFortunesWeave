#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__attribute__((swiftcall)) void nandroid_AMessage_dup_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d4780(__int64);
__int64 SdkRoutine_4d9ae0(_QWORD*, __int64*, int, char, char);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86dd50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ALooper_ALooper_plt(void);
__int64 nandroid_ALooper_registerHandler_plt(_QWORD, _QWORD);
__int64 nandroid_ALooper_setName_plt(_QWORD, _QWORD);
__int64 nandroid_ALooper_start_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_AMessage_plt_86ddc0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findAsInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findObject_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_post_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86db80(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_append_plt_86daa0(_QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_AString_find_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_insert_plt_86ddb0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_size_plt(_QWORD);
__int64 nandroid_AString_startsWith_plt(_QWORD, _QWORD);
__int64 nandroid_ESDS_Destroy_ESDS_plt(_QWORD);
__int64 nandroid_ESDS_ESDS_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ESDS_InitCheck_plt(_QWORD);
__int64 nandroid_ESDS_getCodecSpecificInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_HTTPLiveSource2_HTTPLiveSource2_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD);
__int64 nandroid_HttpServiceConnection_HttpServiceConnection_plt(_QWORD,
                                                                 _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_SortedVectorImpl_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_String8_plt_86d890(_QWORD, _QWORD);
__int64 nandroid_String8_String8_plt_86d8a0(_QWORD, _QWORD);
__int64 nandroid_String8_appendFormat_plt(_QWORD, const char*, ...);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_convertMetaDataToMessage_plt_86da80(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_movie_MediaProperty_Clear_plt(_QWORD);
__int64 nn_movie_MediaProperty_SetInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetString_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_GetVideoMinCompressionRatio_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_HlsMediaExtractorHandler_HlsMediaExtractorHandler_plt(
    _QWORD, _QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_ConvertMessageToMediaProperty_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_plt(void);
__int64 nn_movie_detail_HlsMediaExtractor_DoSetMedia_plt(_QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_Finalize_plt(void);
__int64 nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(_QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_SignalAllTracks_plt(_QWORD);
__int64
    nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(_QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_TrackInfo_TrackInfo_plt(_QWORD);
__int64 nn_movie_detail_MediaExtractorState_MediaExtractorState_plt(_QWORD);
__int64 nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(_QWORD,
                                                                     _QWORD);
__int64 nn_movie_detail_MediaState_Destroy_MediaState_plt_86d340(_QWORD);
__int64 nn_movie_detail_MediaState_GetState_plt(_QWORD);
__int64 nn_movie_detail_MediaState_SetState_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_MimeToMediaMimeType_plt(_QWORD);
__int64 nn_movie_detail_ParseAvccCodecSpecificData_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_FinalizeConditionVariable_plt(_QWORD);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_InitializeConditionVariable_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern __int64 SdkData_e88518;
extern __int64 SdkData_e88520;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88350[490])();
extern void (*SdkData_e88370[486])();
extern void (*SdkData_e88378[485])();
__int64 nn_movie_detail_HlsMediaExtractor_TrackInfo_TrackInfo(__int64 this_);
void nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_HlsMediaExtractor(void* this_);
void nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_4d4230(
    void* this_);
__int64
nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_4d4360(__int64 a1);
__int64 nn_movie_detail_HlsMediaExtractor_Initialize_4d43f0(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
__int64 nn_movie_detail_HlsMediaExtractor_Initialize_4d44a0(void* this_,
                                                            void* a2,
                                                            __int64 a3);
__int64 nn_movie_detail_HlsMediaExtractor_SetUriMedia(void* this_,
                                                      const char* a2);
void nn_movie_detail_HlsMediaExtractor_GetCacheThreshold(void* this_,
                                                         unsigned __int64 a2,
                                                         __int64* a3,
                                                         unsigned __int64* a4);
__int64 nn_movie_detail_HlsMediaExtractor_SetInMemoryMedia(void* this_,
                                                           const void* a2);
__int64 nn_movie_detail_HlsMediaExtractor_SetUpMediaSourceMode(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_AppendMediaSourceData(void* this_,
                                                                const void* a2);
__int64
nn_movie_detail_HlsMediaExtractor_GetMediaSourceModeSeekPosition(void* this_,
                                                                 __int64* a2);
__int64 nn_movie_detail_HlsMediaExtractor_GetTrackCount(void* this_, int* a2);
__int64 nn_movie_detail_HlsMediaExtractor_SelectTrack(void* this_,
                                                      unsigned int a2);
__int64 nn_movie_detail_HlsMediaExtractor_DeselectTrack(void* this_,
                                                        unsigned int a2);
__int64 nn_movie_detail_HlsMediaExtractor_GetTrackProperties(void* this_,
                                                             void* a2,
                                                             unsigned int a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetTrackFormat(__int64 a1, int a2);
__int64 nn_movie_detail_HlsMediaExtractor_ConvertMessageToMediaProperty(
    __int64 a1, __int64 a2, _QWORD* a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetTrackMimeType(__int64 a1, int* a2,
                                                           unsigned int a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetTrackConfigurationSize(
    void* this_, unsigned __int64* a2, unsigned int a3);
__int64 nn_movie_detail_HlsMediaExtractor_Start(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_Stop(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_GetSampleAvailableEvent(__int64 a1,
                                                                  _QWORD* a2,
                                                                  int a3);
__int64 nn_movie_detail_HlsMediaExtractor_FindInSelectedTracks(void* this_,
                                                               int a2);
__int64 nn_movie_detail_HlsMediaExtractor_SeekTo(__int64 a1, __int64 a2,
                                                 int a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetSampleBufferSize(
    void* this_, unsigned __int64* a2, int a3);
__int64 nn_movie_detail_HlsMediaExtractor_AdvanceTrack(void* this_, void* a2);
__int64 nn_movie_detail_HlsMediaExtractor_ReadSamples(
    void* this_, void* a2, unsigned __int64* a3, __int64* a4, unsigned int* a5,
    unsigned __int64 a6, int a7);
__int64 nn_movie_detail_HlsMediaExtractor_GetSampleTime(void* this_,
                                                        __int64* a2, int a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetSampleProperties(void* this_,
                                                              void* a2, int a3);
__int64 nn_movie_detail_HlsMediaExtractor_GetCacheRangeCount(void* this_,
                                                             int* a2);
__int64 nn_movie_detail_HlsMediaExtractor_GetCacheRange(void* this_,
                                                        __int64* a2,
                                                        __int64* a3);
__int64 nn_movie_detail_HlsMediaExtractor_IsCacheFull(void* this_, bool* a2,
                                                      bool* a3);
__int64 nn_movie_detail_HlsMediaExtractor_StreamSourceReadData(void* this_,
                                                               void* a2,
                                                               __int64* a3);
__int64 nn_movie_detail_HlsMediaExtractor_StreamSourceSeekTo(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_SetPreferredPixels(void* this_,
                                                             __int64 a2);
__int64 nn_movie_detail_HlsMediaExtractor_SetMinBandwidthSamples(void* this_,
                                                                 __int64 a2);
__int64 nn_movie_detail_HlsMediaExtractor_SignalTrack(void* this_, int a2);
__int64 nn_movie_detail_HlsMediaExtractor_SignalAllTracks(void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_IsVideoTrack(void* this_, int a2);
__attribute__((swiftcall)) void
nn_movie_detail_HlsMediaExtractor_GetCacheConfig(PSEUDO_X8 x8_, void* this_);
__int64 nn_movie_detail_HlsMediaExtractor_QueueSamplesLoop(void* this_,
                                                           char a2);
__int64 hls_media_extractor_4d8ee0(__int64 a1, __int64 a2, char a3);
__int64 nn_movie_detail_HlsMediaExtractor_SetTrackSampleAvailableEventType(
    __int64 a1, int a2, __int64 a3);
__int64 nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample(__int64 this_);
void nn_movie_detail_HlsMediaExtractor_HlsSample_Destroy_HlsSample(void* this_);
__int64 nandroid_ALooper_stop_plt(__int64);
__int64 nandroid_ALooper_unregisterHandler_plt(__int64, int);
__int64 nandroid_RefBase_decStrong_plt_alt1(__int64, __int64) __asm__(
    "nandroid_RefBase_decStrong_plt");
__int64 nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo_plt_alt1(
    __int64) __asm__("nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_"
                     "TrackInfo_plt");
__int64 nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt_alt1(
    __int64, int) __asm__("nn_movie_detail_MediaExtractorState_"
                          "ValidateCurrentState_plt");
__int64 nn_movie_detail_MediaState_SetState_plt_alt1(
    __int64, unsigned int) __asm__("nn_movie_detail_MediaState_SetState_plt");
__int64 nn_os_LockMutex_plt_alt1(__int64) __asm__("nn_os_LockMutex_plt");
__int64 nn_os_UnlockMutex_plt_alt1(__int64) __asm__("nn_os_UnlockMutex_plt");
__int64 std___1___shared_weak_count___release_weak_plt_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak_plt");
void nandroid_sp_report_race_plt_alt1(__int64) __asm__(
    "nandroid_sp_report_race_plt");
void nn_movie_detail_FreeMemory_alt1(__int64, _DWORD*) __asm__(
    "nn_movie_detail_FreeMemory");
__int64 nn_movie_detail_HlsMediaExtractor_Finalize(void* this_);
__int64 nn_os_WaitConditionVariable_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_HlsMediaExtractor_DoSetMedia(void* this_);

__int64 nn_movie_detail_HlsMediaExtractor_TrackInfo_TrackInfo(__int64 this_)
{
  *(_BYTE*)(this_ + 24) = 0;
  *(_QWORD*)(this_ + 8) = 0;
  *(_QWORD*)(this_ + 16) = 0;
  *(_QWORD*)this_ = 0;
  *(_BYTE*)(this_ + 32) = 0;
  *(_DWORD*)(this_ + 28) = -1;
  return this_;
}

void nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo(void* this_)
{
  __int64 v1;
  __int64 v2;

  v1 = *((_QWORD*)this_ + 2);
  *((_QWORD*)this_ + 1) = 0;
  *((_QWORD*)this_ + 2) = 0;
  if (v1 == 0) {
    *(_QWORD*)this_ = 0;
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v2 = *((_QWORD*)this_ + 2);
    *(_QWORD*)this_ = 0;
    if (v2 == 0) {
      return;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_plt(v1);
    v2 = *((_QWORD*)this_ + 2);
    *(_QWORD*)this_ = 0;
    if (v2 == 0) {
      return;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_plt(v2);
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_HlsMediaExtractor(void* this_)
{
  __int64 v2;
  __int64 result;

  *((_QWORD*)this_ + 3) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 2) = 0;
  v2 = SdkData_e88518;
  *((_BYTE*)this_ + 40) = 0;
  *(_QWORD*)this_ = v2 + 16;
  *((_QWORD*)this_ + 1) = 0;
  nn_movie_detail_MediaExtractorState_MediaExtractorState_plt((char*)this_ +
                                                              48);
  *((_BYTE*)this_ + 1304) = 0;
  *((_QWORD*)this_ + 168) = 0;
  *((_DWORD*)this_ + 338) = 0;
  *((_QWORD*)this_ + 164) = 0;
  *((_QWORD*)this_ + 165) = 0;
  *((_WORD*)this_ + 664) = 0;
  *(_QWORD*)((char*)this_ + 1332) = 0;
  nn_os_InitializeMutex_plt((char*)this_ + 1328, 0, 0);
  *((_DWORD*)this_ + 340) = 0;
  *((_QWORD*)this_ + 171) = 0;
  *((_QWORD*)this_ + 172) = 0;
  *((_QWORD*)this_ + 173) = 0;
  *((_QWORD*)this_ + 174) = 0;
  *((_QWORD*)this_ + 176) = 0;
  *((_QWORD*)this_ + 177) = 0;
  *((_QWORD*)this_ + 178) = 0;
  *((_QWORD*)this_ + 175) = 2;
  *((_QWORD*)this_ + 179) = 0;
  *((_QWORD*)this_ + 180) = 0;
  *((_WORD*)this_ + 724) = 0;
  *((_QWORD*)this_ + 183) = 0;
  *((_BYTE*)this_ + 1476) = 0;
  *((_QWORD*)this_ + 185) = 0;
  *((_QWORD*)this_ + 186) = 0;
  *((_QWORD*)this_ + 187) = 0;
  *((_QWORD*)this_ + 188) = 0;
  *((_QWORD*)this_ + 189) = 0;
  *(_QWORD*)((char*)this_ + 1452) = 0;
  *((_QWORD*)this_ + 190) = 0;
  *((_BYTE*)this_ + 1460) = 1;
  nn_os_InitializeMutex_plt((char*)this_ + 1528, 0, 0);
  nn_os_InitializeMutex_plt((char*)this_ + 1560, 0, 0);
  nn_os_InitializeConditionVariable_plt((char*)this_ + 1592);
  result = nn_os_InitializeConditionVariable_plt((char*)this_ + 1592);
  *((_QWORD*)this_ + 200) = 0;
  return result;
}

void nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_4d4230(
    void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;

  *(_QWORD*)this_ = SdkData_e88518 + 16;
  v9 = nn_movie_detail_HlsMediaExtractor_Finalize_plt();
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  nn_os_FinalizeConditionVariable_plt((char*)this_ + 1592);
  nn_os_FinalizeMutex_plt((char*)this_ + 1560);
  nn_os_FinalizeMutex_plt((char*)this_ + 1528);
  v2 = *((_QWORD*)this_ + 190);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_plt(v2);
  }
  v3 = *((_QWORD*)this_ + 188);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_plt(v3);
  }
  v4 = *((_QWORD*)this_ + 180);
  if (v4 != 0) {
    nandroid_RefBase_decStrong_plt(v4, (char*)this_ + 1440);
  }
  v5 = *((_QWORD**)this_ + 179);
  if (v5 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v5 + *(_QWORD*)(*v5 - 24LL),
                                   (char*)this_ + 1432);
  }
  v6 = *((_QWORD*)this_ + 178);
  if (v6 != 0) {
    nandroid_RefBase_decStrong_plt(v6, (char*)this_ + 1424);
  }
  v7 = *((_QWORD*)this_ + 177);
  if (v7 != 0) {
    nandroid_RefBase_decStrong_plt(v7, (char*)this_ + 1416);
  }
  v8 = *((_QWORD*)this_ + 176);
  if (v8 != 0) {
    nandroid_RefBase_decStrong_plt(v8, (char*)this_ + 1408);
  }
  nn_os_FinalizeMutex_plt((char*)this_ + 1328);
  nn_movie_detail_MediaState_Destroy_MediaState_plt_86d340((char*)this_ + 48);
}

__int64

nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_4d4360(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  nn_movie_detail_HlsMediaExtractor_Destroy_HlsMediaExtractor_plt();
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
  return nn_movie_detail_FreeMemory(a1, v4);
}

__int64 nn_movie_detail_HlsMediaExtractor_Initialize_4d43f0(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 6, 0);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    v11 = *a1;
    a1[172] = a4;
    a1[173] = a5;
    result =
        (*(__int64 (**)(__int64*, __int64, __int64))(v11 + 16))(a1, a2, a3);
    if ((_DWORD)result != 0) {
      if ((result & 0x3FFFFF) == 0x40100) {
        return 0;
      }
      else {
        return (unsigned int)result;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_Initialize_4d44a0(void* this_,
                                                            void* a2,
                                                            __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD** v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD** v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  void(__attribute__((noreturn)) * v17)();
  _QWORD** v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _QWORD** v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 0);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *((_BYTE*)this_ + 40) = 0;
    *((_QWORD*)this_ + 171) = a2;
    if (a2 == nullptr) {
      return 259840;
    }
    v7 = nn_movie_detail_AllocateMemory(32, (_QWORD**)a2);
    if (v7 == 0) {
      return 259840;
    }
    v8 = (_QWORD*)v7;
    nn_os_LockMutex_plt((char*)this_ + 1328);
    v9 = *((_QWORD*)this_ + 171);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = 0;
    v8[3] = v9;
    *((_QWORD*)this_ + 165) = v8;
    nn_os_UnlockMutex_plt((char*)this_ + 1328);
    v10 = *((_QWORD***)this_ + 171);
    if (v10 == nullptr) {
      return 259840;
    }
    v11 = (_QWORD*)nn_movie_detail_AllocateMemory(32, v10);
    if (v11 == nullptr) {
      return 259840;
    }
    v12 = *((_QWORD*)this_ + 171);
    *v11 = v11;
    v11[1] = v11;
    v11[2] = 0;
    v11[3] = v12;
    *((_QWORD*)this_ + 185) = v11;
    v13 = *((_QWORD***)this_ + 171);
    if (v13 == nullptr) {
      return 259840;
    }
    v14 = (_QWORD*)nn_movie_detail_AllocateMemory(32, v13);
    if (v14 == nullptr) {
      return 259840;
    }
    v15 = *((_QWORD*)this_ + 171);
    *v14 = v14;
    v14[1] = v14;
    v14[2] = 0;
    v14[3] = v15;
    *((_QWORD*)this_ + 186) = v14;
    v16 = (atomic_uchar*)SdkData_e88330;
    LOBYTE(v15) = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                       memory_order_acquire);
    v17 = SdkData_e88338[0];
    if ((v15 & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v17 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v18 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v17);
    v19 = SdkRoutine_4c3860(16, 216, v18);
    nandroid_ALooper_ALooper_plt();
    v20 = *((_QWORD*)this_ + 177);
    v21 = (__int64*)((char*)this_ + 1416);
    v22 = nandroid_RefBase_incStrong_plt(v19, (char*)this_ + 1416);
    if (v20 != 0) {
      v22 = nandroid_RefBase_decStrong_plt(v20, (char*)this_ + 1416);
    }
    if (v20 != *v21) {
      nandroid_sp_report_race_plt(v22);
    }
    *v21 = v19;
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v17 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v23 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v17);
    v24 = (_QWORD*)SdkRoutine_4c3860(16, 40, v23);
    nandroid_HttpServiceConnection_HttpServiceConnection_plt(
        v24, *((_QWORD*)this_ + 172));
    v25 = *((_QWORD**)this_ + 179);
    v26 = (_QWORD*)((char*)this_ + 1432);
    v27 = nandroid_RefBase_incStrong_plt((char*)v24 + *(_QWORD*)(*v24 - 24LL),
                                         (char*)this_ + 1432);
    if (v25 != nullptr) {
      v27 = nandroid_RefBase_decStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                           (char*)this_ + 1432);
    }
    if (v25 != (_QWORD*)*v26) {
      nandroid_sp_report_race_plt(v27);
    }
    v28 = *v21;
    *v26 = v24;
    nandroid_ALooper_setName_plt(v28, "HlsMediaExtractorLooper");
    if ((unsigned int)nandroid_ALooper_start_plt(*v21, 0, 0) == 0) {
      v29 = SdkRoutine_4d4780(96);
      nn_movie_detail_HlsMediaExtractorHandler_HlsMediaExtractorHandler_plt(
          v29, this_);
      SdkRoutine_86dd50((char*)this_ + 1424, v29);
      v30 = *((_QWORD*)this_ + 178);
      result = 259840;
      if (v30 != 0) {
        v31 = *v21;
        v32 = *((_QWORD*)this_ + 178);
        nandroid_RefBase_incStrong_plt(v30, &v32);
        nandroid_ALooper_registerHandler_plt(v31, &v32);
        if (v32 != 0) {
          nandroid_RefBase_decStrong_plt(v32, &v32);
        }
        nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 1);
        *((_QWORD*)this_ + 164) = a3;
        *(_QWORD*)((char*)this_ + 1452) = 0;
        return 0;
      }
    }
    else {
      return 259840;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_Finalize(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  _DWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  _DWORD* v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  _DWORD* v55;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt_alt1(
      (__int64)this_ + 48, 1);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if ((*((_BYTE*)this_ + 40) & 1) == 0) {
      nn_movie_detail_MediaState_SetState_plt_alt1((__int64)this_ + 48, 0);
      *((_BYTE*)this_ + 40) = 1;
    }
    v3 = *((_QWORD*)this_ + 177);
    if (v3 != 0) {
      v4 = *((_QWORD*)this_ + 178);
      v5 = (__int64*)((char*)this_ + 1416);
      if (v4 != 0) {
        nandroid_ALooper_unregisterHandler_plt(v3, *(_DWORD*)(v4 + 16));
        v3 = *v5;
      }
      v3 = nandroid_ALooper_stop_plt(v3);
      v6 = *v5;
      if (*v5 != 0) {
        v3 = nandroid_RefBase_decStrong_plt_alt1(*v5, (__int64)this_ + 1416);
        if (v6 != *v5) {
          nandroid_sp_report_race_plt_alt1(v3);
        }
        *v5 = 0;
      }
      v7 = *v5;
      if (*v5 != 0) {
        v3 = nandroid_RefBase_decStrong_plt_alt1(*v5, (__int64)this_ + 1416);
      }
      if (v7 != *v5) {
        nandroid_sp_report_race_plt_alt1(v3);
      }
      *v5 = 0;
    }
    if (*((_QWORD*)this_ + 178) != 0) {
      v8 = (__int64*)((char*)this_ + 1424);
      v9 = *((_QWORD*)this_ + 178);
      if (v9 != 0) {
        v3 = nandroid_RefBase_decStrong_plt_alt1(*((_QWORD*)this_ + 178),
                                                 (__int64)this_ + 1424);
        if (v9 != *v8) {
          nandroid_sp_report_race_plt_alt1(v3);
        }
        *v8 = 0;
      }
      v10 = *v8;
      if (*v8 != 0) {
        v3 = nandroid_RefBase_decStrong_plt_alt1(*v8, (__int64)this_ + 1424);
      }
      if (v10 != *v8) {
        nandroid_sp_report_race_plt_alt1(v3);
      }
      *v8 = 0;
    }
    v11 = *((_QWORD*)this_ + 176);
    if (v11 != 0) {
      v12 = (__int64*)((char*)this_ + 1408);
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 248LL))(v11);
      v13 = *((_QWORD*)this_ + 176);
      if (v13 != 0) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(*v12, (__int64)this_ + 1408);
        if (v13 != *v12) {
          nandroid_sp_report_race_plt_alt1(v11);
        }
        *v12 = 0;
      }
      v14 = *v12;
      if (*v12 != 0) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(*v12, (__int64)this_ + 1408);
      }
      if (v14 != *v12) {
        nandroid_sp_report_race_plt_alt1(v11);
      }
      *v12 = 0;
    }
    if (*((_QWORD*)this_ + 179) != 0) {
      v15 = (_QWORD*)((char*)this_ + 1432);
      v16 = *((_QWORD**)this_ + 179);
      if (v16 != nullptr) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(
            (__int64)v16 + *(_QWORD*)(*v16 - 24LL), (__int64)this_ + 1432);
        if (v16 != (_QWORD*)*v15) {
          nandroid_sp_report_race_plt_alt1(v11);
        }
        *v15 = 0;
      }
      v17 = (_QWORD*)*v15;
      if (*v15 != 0) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(
            (__int64)v17 + *(_QWORD*)(*v17 - 24LL), (__int64)this_ + 1432);
      }
      if (v17 != (_QWORD*)*v15) {
        nandroid_sp_report_race_plt_alt1(v11);
      }
      *v15 = 0;
    }
    if (*((_QWORD*)this_ + 180) != 0) {
      v18 = (__int64*)((char*)this_ + 1440);
      v19 = *((_QWORD*)this_ + 180);
      if (v19 != 0) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(*((_QWORD*)this_ + 180),
                                                  (__int64)this_ + 1440);
        if (v19 != *v18) {
          nandroid_sp_report_race_plt_alt1(v11);
        }
        *v18 = 0;
      }
      v20 = *v18;
      if (*v18 != 0) {
        v11 = nandroid_RefBase_decStrong_plt_alt1(*v18, (__int64)this_ + 1440);
      }
      if (v20 != *v18) {
        nandroid_sp_report_race_plt_alt1(v11);
      }
      *v18 = 0;
    }
    nn_os_LockMutex_plt_alt1((__int64)this_ + 1528);
    v21 = *((_QWORD**)this_ + 185);
    if (v21 != nullptr) {
      if (v21[2] != 0) {
        v22 = (_QWORD*)v21[1];
        v23 = *(_QWORD**)(*v21 + 8LL);
        *(_QWORD*)(*v22 + 8LL) = v23;
        *v23 = *v22;
        v21[2] = 0;
        if (v22 != v21) {
          do {
            v24 = (_QWORD*)v22[1];
            v25 = v22[3];
            if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v26 = v22;
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak_plt_alt1(v25);
              v22 = v26;
            }
            nn_movie_detail_FreeMemory_alt1((__int64)v22, (_DWORD*)v21[3]);
            v22 = v24;
          } while (v24 != v21);
        }
      }
      v27 = *((_QWORD**)this_ + 185);
      if (v27[2] != 0) {
        v28 = (_QWORD*)v27[1];
        v29 = *(_QWORD**)(*v27 + 8LL);
        *(_QWORD*)(*v28 + 8LL) = v29;
        *v29 = *v28;
        v27[2] = 0;
        if (v28 != v27) {
          do {
            v30 = (_QWORD*)v28[1];
            v31 = v28[3];
            if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v32 = v28;
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
              std___1___shared_weak_count___release_weak_plt_alt1(v31);
              v28 = v32;
            }
            nn_movie_detail_FreeMemory_alt1((__int64)v28, (_DWORD*)v27[3]);
            v28 = v30;
          } while (v30 != v27);
        }
      }
      v33 = *((_DWORD**)this_ + 171);
      if (v33 != nullptr) {
        nn_movie_detail_FreeMemory_alt1(*((_QWORD*)this_ + 185), v33);
      }
      *((_QWORD*)this_ + 185) = 0;
    }
    v34 = *((_QWORD**)this_ + 186);
    if (v34 != nullptr) {
      if (v34[2] != 0) {
        v35 = (_QWORD*)v34[1];
        v36 = *(_QWORD**)(*v34 + 8LL);
        *(_QWORD*)(*v35 + 8LL) = v36;
        *v36 = *v35;
        v34[2] = 0;
        if (v35 != v34) {
          do {
            v37 = (_QWORD*)v35[1];
            v38 = v35[3];
            if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v39 = v35;
              (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
              std___1___shared_weak_count___release_weak_plt_alt1(v38);
              v35 = v39;
            }
            nn_movie_detail_FreeMemory_alt1((__int64)v35, (_DWORD*)v34[3]);
            v35 = v37;
          } while (v37 != v34);
        }
      }
      v40 = *((_QWORD**)this_ + 186);
      if (v40[2] != 0) {
        v41 = (_QWORD*)v40[1];
        v42 = *(_QWORD**)(*v40 + 8LL);
        *(_QWORD*)(*v41 + 8LL) = v42;
        *v42 = *v41;
        v40[2] = 0;
        if (v41 != v40) {
          do {
            v43 = (_QWORD*)v41[1];
            v44 = v41[3];
            if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v45 = v41;
              (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
              std___1___shared_weak_count___release_weak_plt_alt1(v44);
              v41 = v45;
            }
            nn_movie_detail_FreeMemory_alt1((__int64)v41, (_DWORD*)v40[3]);
            v41 = v43;
          } while (v43 != v40);
        }
      }
      v46 = *((_DWORD**)this_ + 171);
      if (v46 != nullptr) {
        nn_movie_detail_FreeMemory_alt1(*((_QWORD*)this_ + 186), v46);
      }
      *((_QWORD*)this_ + 186) = 0;
    }
    nn_os_UnlockMutex_plt_alt1((__int64)this_ + 1528);
    nn_os_LockMutex_plt_alt1((__int64)this_ + 1328);
    v47 = *((_QWORD**)this_ + 165);
    if (v47 != nullptr) {
      if (v47[2] != 0) {
        v48 = (_QWORD*)v47[1];
        v49 = *(_QWORD**)(*v47 + 8LL);
        *(_QWORD*)(*v48 + 8LL) = v49;
        *v49 = *v48;
        v47[2] = 0;
        if (v48 != v47) {
          do {
            v50 = (_QWORD*)v48[1];
            nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo_plt_alt1(
                (__int64)(v48 + 2));
            nn_movie_detail_FreeMemory_alt1((__int64)v48, (_DWORD*)v47[3]);
            v48 = v50;
          } while (v50 != v47);
        }
      }
      v51 = *((_QWORD**)this_ + 165);
      if (v51[2] != 0) {
        v52 = (_QWORD*)v51[1];
        v53 = *(_QWORD**)(*v51 + 8LL);
        *(_QWORD*)(*v52 + 8LL) = v53;
        *v53 = *v52;
        v51[2] = 0;
        if (v52 != v51) {
          do {
            v54 = (_QWORD*)v52[1];
            nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo_plt_alt1(
                (__int64)(v52 + 2));
            nn_movie_detail_FreeMemory_alt1((__int64)v52, (_DWORD*)v51[3]);
            v52 = v54;
          } while (v54 != v51);
        }
      }
      v55 = *((_DWORD**)this_ + 171);
      if (v55 != nullptr) {
        nn_movie_detail_FreeMemory_alt1(*((_QWORD*)this_ + 165), v55);
      }
      *((_QWORD*)this_ + 165) = 0;
    }
    nn_os_UnlockMutex_plt_alt1((__int64)this_ + 1328);
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_SetUriMedia(void* this_,
                                                      const char* a2)
{
  unsigned int v4;
  __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_uchar* v15;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v17)();
  _QWORD** v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD** v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD v36[3];
  __int64 v37;
  _QWORD v38[2];
  _QWORD v39[5];
  __int64 v40;

  v4 = 259840;
  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 2);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    v6 = *((_QWORD*)this_ + 164);
    v7 = v6 >> 10;
    if (v6 >= 0x401) {
      if (v6 >= 0x1401) {
        if (v6 >= 0x2801) {
          v9 = 40960;
          v10 = 10240;
          v11 = 6144;
          v12 = 5120;
          v13 = 4096;
          if (v6 <= 0x19000) {
            v9 = 20480;
          }
          if (v6 >= 0xC801) {
            v10 = v9;
          }
          if (v6 >= 0x7801) {
            v11 = v10;
          }
          if (v6 >= 0x6401) {
            v12 = v11;
          }
          if (v6 > 0x5000) {
            v13 = v12;
          }
          if (v6 >= 0x3C01) {
            v8 = v13;
          }
          else {
            v8 = 3072;
          }
        }
        else {
          v8 = 2048;
        }
      }
      else {
        v8 = 1024;
      }
    }
    else {
      v8 = 0;
    }
    memset(v39, 0, sizeof(v39));
    nandroid_SortedVectorImpl_SortedVectorImpl_plt(v39, 16, 0);
    v14 = SdkData_e88420;
    v40 = 0;
    v39[0] = SdkData_e88420 + 16;
    nandroid_String8_String8_plt_86d870(&v40);
    nandroid_String8_appendFormat_plt(&v40, "%zd/%zd/%d", v8, v7, -1);
    nandroid_String8_String8_plt_86d890(v36, "x-cache-config");
    nandroid_String8_String8_plt_86d8a0(&v37, v36);
    nandroid_String8_String8_plt_86d8a0(v38, &v40);
    nandroid_SortedVectorImpl_add_plt(v39, &v37);
    nandroid_String8_Destroy_String8_plt(v38);
    nandroid_String8_Destroy_String8_plt(&v37);
    nandroid_String8_Destroy_String8_plt(v36);
    v38[0] = 0;
    v38[1] = 0;
    v37 = 0;
    nandroid_AString_AString_plt_86da90(&v37, a2);
    if (nandroid_AString_find_plt(&v37, "://", 0) < 0) {
      nandroid_AString_AString_plt_86da90(v36, "file://");
      nandroid_AString_insert_plt_86ddb0(&v37, v36, 0);
      nandroid_AString_Destroy_AString_plt(v36);
    }
    v36[0] = 0;
    v15 = (atomic_uchar*)SdkData_e88330;
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v17 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v17 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v18 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v17);
    v19 = SdkRoutine_4c3860(16, 1344, v18);
    v20 = *((_QWORD**)this_ + 178);
    v35 = v20;
    if (v20 != nullptr) {
      nandroid_RefBase_incStrong_plt(v20, &v35);
    }
    nandroid_AMessage_AMessage_plt_86ddc0(v19, 1936876366, &v35);
    v36[0] = v19;
    nandroid_RefBase_incStrong_plt(v19, v36);
    if (v35 != nullptr) {
      nandroid_RefBase_decStrong_plt(v35, &v35);
    }
    if (v36[0] != 0) {
      v21 = (__int64*)((char*)this_ + 1408);
      if (*((_QWORD*)this_ + 176) != 0) {
        v22 = *v21;
        v23 = nandroid_RefBase_decStrong_plt(*v21, (char*)this_ + 1408);
        if (v22 != *v21) {
          v23 = nandroid_sp_report_race_plt(v23);
        }
        *v21 = 0;
        v24 = *v21;
        if (*v21 != 0) {
          v23 = nandroid_RefBase_decStrong_plt(*v21, (char*)this_ + 1408);
        }
        if (v24 != *v21) {
          nandroid_sp_report_race_plt(v23);
        }
        *v21 = 0;
      }
      if ((atomic_load_explicit(v15, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v17 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v25 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v17);
      v26 = SdkRoutine_4c3860(16, 256, v25);
      v27 = *((_QWORD**)this_ + 179);
      v28 = v26;
      v35 = v27;
      if (v27 != nullptr) {
        nandroid_RefBase_incStrong_plt((char*)v27 + *(_QWORD*)(*v27 - 24LL),
                                       &v35);
      }
      v29 = nandroid_AString_c_str_plt(&v37);
      nandroid_HTTPLiveSource2_HTTPLiveSource2_plt(v28, v36, &v35, v29, v39);
      v30 = *v21;
      v31 = nandroid_RefBase_incStrong_plt(v28, (char*)this_ + 1408);
      if (v30 != 0) {
        v31 = nandroid_RefBase_decStrong_plt(v30, (char*)this_ + 1408);
      }
      if (v30 != *v21) {
        nandroid_sp_report_race_plt(v31);
      }
      v32 = v35;
      *v21 = v28;
      if (v32 == nullptr || (nandroid_RefBase_decStrong_plt(
                                 (char*)v32 + *(_QWORD*)(*v32 - 24LL), &v35),
                             v28 = *v21, *v21 != 0)) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)v28 + 264LL))(
            v28, *((_QWORD*)this_ + 173));
        (*(void (**)(_QWORD, _QWORD))(**((_QWORD**)this_ + 176) + 272LL))(
            *((_QWORD*)this_ + 176), *((_QWORD*)this_ + 174));
        (*(void (**)(_QWORD, _QWORD))(**((_QWORD**)this_ + 176) + 280LL))(
            *((_QWORD*)this_ + 176), *((_QWORD*)this_ + 175));
        (*(void (**)(_QWORD, _QWORD))(**((_QWORD**)this_ + 176) + 72LL))(
            *((_QWORD*)this_ + 176), 0);
        v33 =
            X8CALL_X0(void*, nandroid_AMessage_dup_plt((void*)(&v35), v36[0]));
        v34 = *((_QWORD*)this_ + 180);
        if (v34 != 0) {
          v33 = (_QWORD*)nandroid_RefBase_decStrong_plt(*((_QWORD*)this_ + 180),
                                                        (char*)this_ + 1440);
        }
        if (v34 != *((_QWORD*)this_ + 180)) {
          nandroid_sp_report_race_plt(v33);
        }
        *((_QWORD*)this_ + 180) = v35;
        v4 = nn_movie_detail_HlsMediaExtractor_DoSetMedia_plt(this_);
      }
      if (v36[0] != 0) {
        nandroid_RefBase_decStrong_plt(v36[0], v36);
      }
    }
    nandroid_AString_Destroy_AString_plt(&v37);
    nandroid_String8_Destroy_String8_plt(&v40);
    v39[0] = v14 + 16;
    nandroid_VectorImpl_finish_vector_plt(v39);
    nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v39);
    return v4;
  }
  return result;
}

void nn_movie_detail_HlsMediaExtractor_GetCacheThreshold(void* this_,
                                                         unsigned __int64 a2,
                                                         __int64* a3,
                                                         unsigned __int64* a4)
{
  __int64 v4;

  if (a3 != nullptr && a4 != nullptr) {
    *a4 = a2 >> 10;
    if (a2 >= 0x401) {
      if (a2 >= 0x1401) {
        if (a2 >= 0x2801) {
          if (a2 >= 0x3C01) {
            if (a2 > 0x5000) {
              if (a2 >= 0x6401) {
                if (a2 >= 0x7801) {
                  if (a2 >= 0xC801) {
                    v4 = 40960;
                    if (a2 <= 0x19000) {
                      v4 = 20480;
                    }
                  }
                  else {
                    v4 = 10240;
                  }
                }
                else {
                  v4 = 6144;
                }
              }
              else {
                v4 = 5120;
              }
            }
            else {
              v4 = 4096;
            }
          }
          else {
            v4 = 3072;
          }
        }
        else {
          v4 = 2048;
        }
      }
      else {
        v4 = 1024;
      }
    }
    else {
      v4 = 0;
    }
    *a3 = v4;
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_DoSetMedia(void* this_)
{
  int v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*((_QWORD*)this_ + 176) == 0) {
    return 518912;
  }
  nn_os_LockMutex_plt((char*)this_ + 1528);
  nn_os_WaitConditionVariable_plt((char*)this_ + 1592, (char*)this_ + 1528);
  nn_os_UnlockMutex_plt((char*)this_ + 1528);
  v2 = *((_DWORD*)this_ + 400);
  result = 524032;
  if (v2 > -1006) {
    if (v2 <= -1004) {
      if (v2 == -1005) {
        return 523008;
      }
    }
    else if (v2 == -1003 || v2 == -1001) {
      return 521984;
    }
    else {
      result = 517376;
      if (v2 == 0) {
        v4 = *((_QWORD*)this_ + 176);
        v11 = 0;
        v5 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, __int64, _QWORD))(
                                    *(_QWORD*)v4 + 128LL))((void*)&v10, v4, 0));
        v6 = v11;
        if (v11 != 0) {
          v5 = (_QWORD*)nandroid_RefBase_decStrong_plt(v11, &v11);
        }
        if (v6 != v11) {
          nandroid_sp_report_race_plt(v5);
        }
        v11 = v10;
        if (v10 != 0) {
          *((_BYTE*)this_ + 1448) = 1;
          ++*((_QWORD*)this_ + 183);
        }
        v7 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, _QWORD, __int64))(
                                    **((_QWORD**)this_ + 176) + 128LL))(
                                    (void*)&v10, *((_QWORD*)this_ + 176), 1));
        v8 = v11;
        if (v11 != 0) {
          v7 = (_QWORD*)nandroid_RefBase_decStrong_plt(v11, &v11);
        }
        if (v8 != v11) {
          nandroid_sp_report_race_plt(v7);
        }
        v11 = v10;
        if (v10 != 0) {
          *((_BYTE*)this_ + 1449) = 1;
          v9 = *((_QWORD*)this_ + 183) + 1LL;
          *((_QWORD*)this_ + 183) = v9;
        }
        else {
          v9 = *((_QWORD*)this_ + 183);
        }
        *((_DWORD*)this_ + 340) =
            (*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 176) + 168LL))(
                *((_QWORD*)this_ + 176)) +
            v9;
        nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 3);
        if (v11 != 0) {
          nandroid_RefBase_decStrong_plt(v11, &v11);
        }
        return 0;
      }
    }
  }
  else if (v2 <= -1010) {
    if (v2 != -1011) {
      result = 517376;
      if (v2 == -1010) {
        return 525056;
      }
    }
  }
  else if (v2 == -1009) {
    return 262912;
  }
  else if (v2 == -1008) {
    return 261376;
  }
  else {
    result = 517376;
    if (v2 == -1007) {
      return 264448;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_SetInMemoryMedia(void* this_,
                                                           const void* a2)
{
  __int64 result;

  LODWORD(result) =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
          (char*)this_ + 48, 3);
  if ((result & 0x3FFFFF) == 0x40100 || (_DWORD)result == 0) {
    return 263936;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_SetUpMediaSourceMode(void* this_)
{
  __int64 result;

  LODWORD(result) =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
          (char*)this_ + 48, 7);
  if ((result & 0x3FFFFF) == 0x40100 || (_DWORD)result == 0) {
    return 263936;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_AppendMediaSourceData(void* this_,
                                                                const void* a2)
{
  __int64 result;

  LODWORD(result) =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
          (char*)this_ + 48, 10);
  if ((result & 0x3FFFFF) == 0x40100 || (_DWORD)result == 0) {
    return 263936;
  }
  else {
    return (unsigned int)result;
  }
}

__int64

nn_movie_detail_HlsMediaExtractor_GetMediaSourceModeSeekPosition(void* this_,
                                                                 __int64* a2)
{
  __int64 result;

  LODWORD(result) =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
          (char*)this_ + 48, 9);
  if ((result & 0x3FFFFF) == 0x40100 || (_DWORD)result == 0) {
    return 263936;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_GetTrackCount(void* this_, int* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 11);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 176) != 0) {
      *a2 = *((_DWORD*)this_ + 340);
      return 0;
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_SelectTrack(void* this_,
                                                      unsigned int a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;

  v4 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 12);
  if (v4 != 0) {
    v5 = v4;
    if ((v4 & 0x3FFFFF) != 0x40100) {
      return v5;
    }
  }
  v7 = *((_QWORD*)this_ + 176);
  if (v7 == 0) {
    return 518912;
  }
  if ((a2 & 0x80000000) != 0) {
    return 261376;
  }
  v5 = 261376;
  if ((signed int)a2 >= (signed __int32)*((_DWORD*)this_ + 340)) {
    return v5;
  }
  if (*((_QWORD*)this_ + 183) <= (unsigned __int64)a2) {
    (*(void (**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v7 + 192LL))(
        v7, a2, 1, 0);
  }
  else {
    v8 = (char*)this_ + a2;
    v8[1472] = 1;
    v8[1474] = 0;
  }
  nn_os_LockMutex_plt((char*)this_ + 1328);
  v9 = *((__int64**)this_ + 165);
  v10 = v9;
  while (1) {
    v10 = (__int64*)v10[1];
    if (v10 == v9) {
      break;
    }
    if (*((_DWORD*)v10 + 11) == a2) {
      goto LABEL_17;
    }
  }
  v11 = (_QWORD*)nn_movie_detail_AllocateMemory(56, (_QWORD**)v9[3]);
  *v11 = 0;
  v11[1] = 0;
  nn_movie_detail_HlsMediaExtractor_TrackInfo_TrackInfo_plt(v11 + 2);
  v11[1] = v9;
  v12 = *v9;
  *v11 = *v9;
  *(_QWORD*)(v12 + 8) = v11;
  *v9 = (__int64)v11;
  ++v9[2];
  *(_DWORD*)(**((_QWORD**)this_ + 165) + 44LL) = a2;
  *(_BYTE*)(**((_QWORD**)this_ + 165) + 48LL) = 0;
LABEL_17:
  nn_os_UnlockMutex_plt((char*)this_ + 1328);
  return 0;
}

__int64 nn_movie_detail_HlsMediaExtractor_DeselectTrack(void* this_,
                                                        unsigned int a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned int v10;

  v4 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 13);
  if (v4 == 0 || (v5 = v4, (v4 & 0x3FFFFF) == 0x40100)) {
    v6 = *((_QWORD*)this_ + 176);
    if (v6 != 0) {
      if ((a2 & 0x80000000) != 0) {
        return 261376;
      }
      else {
        v5 = 261376;
        if ((signed int)a2 < (signed __int32)*((_DWORD*)this_ + 340)) {
          if (*((_QWORD*)this_ + 183) <= (unsigned __int64)a2) {
            (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(
                *(_QWORD*)v6 + 192LL))(v6, a2, 0, 0);
          }
          else {
            *((_BYTE*)this_ + a2 + 1472) = 0;
          }
          nn_os_LockMutex_plt((char*)this_ + 1328);
          v7 = *((_QWORD*)this_ + 165);
          v8 = v7;
          while (1) {
            v8 = *(_QWORD*)(v8 + 8);
            if (v8 == v7) {
              break;
            }
            if (*(_DWORD*)(v8 + 44) == a2) {
              v9 = *(_QWORD**)(v8 + 8);
              *(_QWORD*)(*(_QWORD*)v8 + 8LL) = v9;
              *v9 = *(_QWORD*)v8;
              --*(_QWORD*)(v7 + 16);
              nn_movie_detail_HlsMediaExtractor_TrackInfo_Destroy_TrackInfo_plt(
                  v8 + 16);
              nn_movie_detail_FreeMemory(v8, *(_QWORD**)(v7 + 24));
              v10 = 0;
              goto LABEL_16;
            }
          }
          v10 = 519424;
        LABEL_16:
          nn_os_UnlockMutex_plt((char*)this_ + 1328);
          return v10;
        }
      }
    }
    else {
      return 518912;
    }
  }
  return v5;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetTrackProperties(void* this_,
                                                             void* a2,
                                                             unsigned int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  __int64 v15;
  __int64 v16;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 14);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 176) == 0) {
      return 518912;
    }
    nn_movie_MediaProperty_Clear_plt(a2);
    result = 261376;
    if ((a3 & 0x80000000) == 0 &&
        (signed int)a3 < (signed __int32)*((_DWORD*)this_ + 340)) {
      v16 = 0;
      if (a3 == 1) {
        if (*((_BYTE*)this_ + 1448) == 1 &&
            (*((_BYTE*)this_ + 1449) & 1) != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64))(
              **((_QWORD**)this_ + 176) + 128LL))((void*)(&v16),
                                                  *((_QWORD*)this_ + 176), 1);
          goto LABEL_15;
        }
      }
      else if (a3 == 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, bool))(
            **((_QWORD**)this_ + 176) + 128LL))(
            (void*)(&v16), *((_QWORD*)this_ + 176),
            (*((_BYTE*)this_ + 1448) & 1) == 0);
        goto LABEL_15;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
          **((_QWORD**)this_ + 176) + 176LL))(
          (void*)(&v16), *((_QWORD*)this_ + 176), a3 - *((_QWORD*)this_ + 183));
    LABEL_15:
      if (v16 != 0) {
        nandroid_AMessage_setString_plt_86de10(v16, "container-mime",
                                               "application/x-mpegURL", -1);
        v15 = 0;
        if ((nandroid_AMessage_findAsInt64_plt(v16, "durationUs", &v15) & 1) ==
                0 &&
            (*(unsigned int (**)(_QWORD, __int64*))(
                **((_QWORD**)this_ + 176) + 160LL))(*((_QWORD*)this_ + 176),
                                                    &v15) == 0) {
          nandroid_AMessage_setInt64_plt(v16, "durationUs", v15);
        }
        nandroid_AMessage_setInt32_plt(v16, "bitrate", 0);
        memset(v14, 0, sizeof(v14));
        nandroid_AString_AString_plt_86d9f0(v14);
        v7 = nandroid_AMessage_findString_plt(v16, "mime", v14);
        if ((v7 & 1) != 0) {
          v7 = nandroid_AString_startsWith_plt(v14, "video/");
          if ((v7 & 1) != 0) {
            v8 = nandroid_AString_c_str_plt(v14);
            v9 = nn_movie_detail_MimeToMediaMimeType_plt(v8);
            v13 = 0;
            v7 = nandroid_AMessage_findInt32_plt(v16, "width", (char*)&v13 + 4);
            if ((v7 & 1) != 0) {
              v7 = nandroid_AMessage_findInt32_plt(v16, "height", &v13);
              if ((v7 & 1) != 0) {
                v12 = 0;
                if ((nandroid_AMessage_findInt32_plt(v16, "max-width",
                                                     (char*)&v12 + 4) &
                     1) != 0 &&
                    (nandroid_AMessage_findInt32_plt(v16, "max-height", &v12) &
                     1) != 0 &&
                    (int)v12 * HIDWORD(v12) > (int)v13 * HIDWORD(v13)) {
                  v13 = v12;
                  nandroid_AMessage_setInt32_plt(v16, "width", HIDWORD(v12));
                  nandroid_AMessage_setInt32_plt(v16, "height",
                                                 (unsigned int)v13);
                }
                v11 = 0;
                nandroid_AMessage_findInt32_plt(v16, "level", &v11);
                v10 = nn_movie_detail_GetVideoMinCompressionRatio_plt(v9, v11);
                v7 = nandroid_AMessage_setInt32_plt(
                    v16, "max-input-size",
                    (unsigned int)(3 * HIDWORD(v13) * (int)v13 / 2 / v10));
              }
            }
          }
        }
        nn_movie_detail_HlsMediaExtractor_ConvertMessageToMediaProperty_plt(
            v7, a2, &v16);
        nandroid_AString_Destroy_AString_plt(v14);
        result = v16;
        if (v16 != 0) {
          nandroid_RefBase_decStrong_plt(v16, &v16);
          return 0;
        }
      }
      else {
        return 259840;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetTrackFormat(__int64 a1, int a2)
{
  if (a2 == 1) {
    if (*(_BYTE*)(a1 + 1448) == 1 && (*(_BYTE*)(a1 + 1449) & 1) != 0) {
      return (*(__int64 (**)(_QWORD, __int64))(
          **(_QWORD**)(a1 + 1408) + 128LL))(*(_QWORD*)(a1 + 1408), 1);
    }
  }
  else if (a2 == 0) {
    return (*(__int64 (**)(_QWORD, bool))(**(_QWORD**)(a1 + 1408) + 128LL))(
        *(_QWORD*)(a1 + 1408), (*(_BYTE*)(a1 + 1448) & 1) == 0);
  }
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1408) + 176LL))(
      *(_QWORD*)(a1 + 1408), a2 - *(_QWORD*)(a1 + 1464));
}

__int64 nn_movie_detail_HlsMediaExtractor_ConvertMessageToMediaProperty(
    __int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  __int64 v27;
  const char* v28;
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
  _QWORD v40[3];
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  __int64 v60;
  _QWORD v61[3];
  _QWORD v62[3];
  __int64 v63;

  memset(v62, 0, sizeof(v62));
  nandroid_AString_AString_plt_86d9f0(v62);
  if ((nandroid_AMessage_findString_plt(*a3, "mime", v62) & 1) != 0) {
    v5 = nandroid_AString_c_str_plt(v62);
    v6 = nandroid_AString_size_plt(v62);
    nn_movie_MediaProperty_SetString_plt(a2, "mime", v5, v6);
  }
  memset(v61, 0, sizeof(v61));
  nandroid_AString_AString_plt_86d9f0(v61);
  if ((nandroid_AMessage_findString_plt(*a3, "container-mime", v61) & 1) != 0) {
    v7 = nandroid_AString_c_str_plt(v61);
    v8 = nandroid_AString_size_plt(v61);
    nn_movie_MediaProperty_SetString_plt(a2, "container-mime", v7, v8);
  }
  v9 = *a3;
  v63 = 0;
  if ((nandroid_AMessage_findInt64_plt(v9, "durationUs", &v63) & 1) != 0) {
    nn_movie_MediaProperty_SetInt64_plt(a2, "duration-us", v63);
  }
  v10 = *a3;
  v60 = 0;
  if ((nandroid_AMessage_findInt64_plt(v10, "totalDataSize", &v60) & 1) != 0) {
    nn_movie_MediaProperty_SetInt64_plt(a2, "totalDataSize", v60);
  }
  v11 = *a3;
  v59 = 0;
  if ((nandroid_AMessage_findInt32_plt(v11, "bitrate", &v59) & 1) != 0) {
    nn_movie_MediaProperty_SetInt32_plt(a2, "bit-rate", v59);
  }
  if ((nandroid_AMessage_findInt32_plt(*a3, "bit-rate", &v59) & 1) != 0) {
    nn_movie_MediaProperty_SetInt32_plt(a2, "bitrate", v59);
  }
  v12 = *a3;
  v58 = 0;
  if ((nandroid_AMessage_findInt32_plt(v12, "is-sync-frame", &v58) & 1) != 0 &&
      v58 != 0) {
    nn_movie_MediaProperty_SetInt32_plt(a2, "is-sync-frame", 1);
  }
  v13 = *a3;
  v57 = 0;
  if ((nandroid_AMessage_findInt32_plt(v13, "profile", &v57) & 1) != 0) {
    nn_movie_MediaProperty_SetInt32_plt(a2, "profile", v57);
  }
  v14 = *a3;
  v56 = 0;
  if ((nandroid_AMessage_findInt32_plt(v14, "level", &v56) & 1) != 0) {
    nn_movie_MediaProperty_SetInt32_plt(a2, "level", v56);
  }
  if ((nandroid_AString_startsWith_plt(v62, "video/") & 1) != 0) {
    v15 = *a3;
    LODWORD(v40[0]) = 0;
    v55 = 0;
    if ((nandroid_AMessage_findInt32_plt(v15, "width", v40) & 1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a3, "height", &v55) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "width", LODWORD(v40[0]));
      nn_movie_MediaProperty_SetInt32_plt(a2, "height", v55);
    }
    v16 = *a3;
    v53 = 0;
    v54 = 0;
    if ((nandroid_AMessage_findInt32_plt(v16, "max-width", &v54) & 1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a3, "max-height", &v53) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "max-width", v54);
      nn_movie_MediaProperty_SetInt32_plt(a2, "max-height", v53);
    }
    v17 = *a3;
    v51 = 0;
    v52 = 0;
    if ((nandroid_AMessage_findInt32_plt(v17, "sar-width", &v52) & 1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a3, "sar-height", &v51) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "sar-width", v52);
      nn_movie_MediaProperty_SetInt32_plt(a2, "sar-height", v51);
    }
    v18 = *a3;
    v49 = 0;
    v50 = 0;
    if ((nandroid_AMessage_findInt32_plt(v18, "stride", &v50) & 1) != 0 &&
        (nandroid_AMessage_findInt32_plt(*a3, "slice-height", &v49) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "stride", v50);
      nn_movie_MediaProperty_SetInt32_plt(a2, "slice-height", v49);
    }
    v19 = *a3;
    v48 = 0;
    if ((nandroid_AMessage_findInt32_plt(v19, "color-format", &v48) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "color-format", v48);
    }
    v20 = *a3;
    v47 = 0;
    if ((nandroid_AMessage_findInt32_plt(v20, "rotation-degrees", &v47) & 1) !=
        0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "rotation-degrees", v47);
    }
    v21 = *a3;
    v46 = 0;
    if ((nandroid_AMessage_findInt32_plt(v21, "hw-buf-size", &v46) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "hw-buf-size", v46);
    }
    v22 = *a3;
    v45 = 0;
    if ((nandroid_AMessage_findInt32_plt(v22, "hw-buf-align", &v45) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "hw-buf-align", v45);
    }
    v23 = *a3;
    v44 = 0;
    if ((nandroid_AMessage_findInt32_plt(v23, "frame-rate", &v44) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "frame-rate", v44);
    }
    v24 = *a3;
    v43 = 0;
    if ((nandroid_AMessage_findInt32_plt(v24, "color-range", &v43) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "color-range", v43);
    }
    v25 = *a3;
    v42 = 0;
    if ((nandroid_AMessage_findInt32_plt(v25, "color-standard", &v42) & 1) !=
        0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "color-standard", v42);
    }
    v26 = *a3;
    v41 = 0;
    if ((nandroid_AMessage_findInt32_plt(v26, "color-transfer", &v41) & 1) !=
        0) {
      v27 = v41;
      v28 = "color-transfer";
    LABEL_64:
      nn_movie_MediaProperty_SetInt32_plt(a2, v28, v27);
    }
  }
  else if ((nandroid_AString_startsWith_plt(v62, "audio/") & 1) != 0) {
    v29 = *a3;
    LODWORD(v40[0]) = 0;
    if ((nandroid_AMessage_findInt32_plt(v29, "channel-count", v40) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "channel-count", LODWORD(v40[0]));
    }
    v30 = *a3;
    v55 = 0;
    if ((nandroid_AMessage_findInt32_plt(v30, "sample-rate", &v55) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "sample-rate", v55);
    }
    v31 = *a3;
    v54 = 0;
    if ((nandroid_AMessage_findInt32_plt(v31, "channel-mask", &v54) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "channel-mask", v54);
    }
    v32 = *a3;
    v53 = 0;
    if ((nandroid_AMessage_findInt32_plt(v32, "encoder-delay", &v53) & 1) !=
        0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "encoder-delay", v53);
    }
    v33 = *a3;
    v52 = 0;
    if ((nandroid_AMessage_findInt32_plt(v33, "encoder-padding", &v52) & 1) !=
        0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "encoder-padding", v52);
    }
    v34 = *a3;
    v51 = 0;
    if ((nandroid_AMessage_findInt32_plt(v34, "is-adts", &v51) & 1) != 0) {
      nn_movie_MediaProperty_SetInt32_plt(a2, "is-adts", v51);
    }
    v35 = *a3;
    v50 = 0;
    if ((nandroid_AMessage_findInt32_plt(v35, "aac-profile", &v50) & 1) != 0) {
      v27 = v50;
      v28 = "aac-profile";
      goto LABEL_64;
    }
  }
  v36 = *a3;
  v55 = 0;
  if ((nandroid_AMessage_findInt32_plt(v36, "max-input-size", &v55) & 1) != 0) {
    nn_movie_MediaProperty_SetSize_plt(a2, "max-input-size", (int)v55);
  }
  memset(v40, 0, sizeof(v40));
  nandroid_AString_AString_plt_86d9f0(v40);
  if ((nandroid_AMessage_findString_plt(*a3, "media-language", v40) & 1) != 0) {
    v37 = nandroid_AString_c_str_plt(v40);
    v38 = nandroid_AString_size_plt(v40);
    nn_movie_MediaProperty_SetString_plt(a2, "language", v37, v38);
  }
  nandroid_AString_Destroy_AString_plt(v40);
  nandroid_AString_Destroy_AString_plt(v61);
  return nandroid_AString_Destroy_AString_plt(v62);
}

__int64 nn_movie_detail_HlsMediaExtractor_GetTrackMimeType(__int64 a1, int* a2,
                                                           unsigned int a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD v12[3];
  __int64 v13;

  v6 =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 48, 15);
  if (v6 == 0 || (v7 = v6, (v6 & 0x3FFFFF) == 0x40100)) {
    v8 = *(_QWORD*)(a1 + 1408);
    if (v8 == 0) {
      return 518912;
    }
    v7 = 261376;
    if ((a3 & 0x80000000) == 0 &&
        (signed int)a3 < (signed __int32)*(_DWORD*)(a1 + 1360)) {
      v13 = 0;
      if (a3 == 1) {
        if (*(_BYTE*)(a1 + 1448) == 1 && (*(_BYTE*)(a1 + 1449) & 1) != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)v8 + 128LL))((void*)(&v13), v8, 1);
          goto LABEL_14;
        }
      }
      else if (a3 == 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, bool))(
            *(_QWORD*)v8 + 128LL))((void*)(&v13), v8,
                                   (*(_BYTE*)(a1 + 1448) & 1) == 0);
        goto LABEL_14;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)v8 + 176LL))((void*)(&v13), v8, a3 - *(_QWORD*)(a1 + 1464));
    LABEL_14:
      if (v13 != 0) {
        memset(v12, 0, sizeof(v12));
        nandroid_AString_AString_plt_86d9f0(v12);
        if ((nandroid_AMessage_findString_plt(v13, "mime", v12) & 1) != 0) {
          v9 = nandroid_AString_c_str_plt(v12);
          v10 = nn_movie_detail_MimeToMediaMimeType_plt(v9);
        }
        else {
          v10 = -1;
        }
        *a2 = v10;
        nandroid_AString_Destroy_AString_plt(v12);
        if (v13 != 0) {
          nandroid_RefBase_decStrong_plt(v13, &v13);
        }
        return 0;
      }
      else {
        return 259840;
      }
    }
  }
  return v7;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetTrackConfigurationSize(
    void* this_, unsigned __int64* a2, unsigned int a3)
{
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v26_;
  _QWORD* v33;
  __int64 v34;

  v6 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 16);
  if (v6 == 0 || (v7 = v6, (v6 & 0x3FFFFF) == 0x40100)) {
    v8 = *((_QWORD*)this_ + 176);
    v9 = 517376;
    if (v8 == 0) {
      return 518912;
    }
    v7 = 261376;
    if ((a3 & 0x80000000) == 0 &&
        (signed int)a3 < (signed __int32)*((_DWORD*)this_ + 340)) {
      v34 = 0;
      if (a3 == 1) {
        if (*((_BYTE*)this_ + 1448) == 1 &&
            (*((_BYTE*)this_ + 1449) & 1) != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)v8 + 128LL))((void*)(&v34), v8, 1);
          goto LABEL_14;
        }
      }
      else if (a3 == 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, bool))(
            *(_QWORD*)v8 + 128LL))((void*)(&v34), v8,
                                   (*((_BYTE*)this_ + 1448) & 1) == 0);
      LABEL_14:
        if (v34 == 0) {
          return 259840;
        }
        *a2 = 0;
        v33 = nullptr;
        v10 = 0;
        v11 = SdkData_e88350[0];
        v12 = SdkData_e88378[0];
        v13 = SdkData_e88370[0];
        while (1) {
          if ((nandroid_AMessage_findBuffer_plt(
                   v34, *(_QWORD*)((char*)v11 + v10), &v33) &
               1) != 0) {
            v14 = *(_QWORD*)((char*)v11 + v10);
            if (v14 == *(_QWORD*)v12) {
              v26_.v31 = 0;
              v26_.v32 = 0;
              v26_.v29 = 0;
              v26_.v30 = 0;
              v21 = v33[3];
              v22 = v33[4];
              v26_.v27 = 0;
              v26_.v28 = 0;
              v26_.v26 = 0;
              nandroid_ESDS_ESDS_plt(&v26_.v26, v21, v22);
              if ((unsigned int)nandroid_ESDS_InitCheck_plt(&v26_.v26) != 0) {
                nandroid_ESDS_Destroy_ESDS_plt(&v26_.v26);
                goto LABEL_31;
              }
              v24 = 0;
              v25 = 0;
              nandroid_ESDS_getCodecSpecificInfo_plt(&v26_.v26, &v25, &v24);
              *a2 += v24;
              nandroid_ESDS_Destroy_ESDS_plt(&v26_.v26);
            }
            else if (v14 == *(_QWORD*)v13) {
              v26_.v27 = 0;
              v26_.v28 = 0;
              v26_.v26 = 0;
              nandroid_AString_AString_plt_86db80(&v26_.v26, v33[3] + v33[5],
                                                  v33[6]);
              v15 = 2LL * v33[6];
              v16 = nn_movie_detail_AllocateMemory(v15,
                                                   *((_QWORD***)this_ + 171));
              if (v16 == 0) {
                nandroid_AString_Destroy_AString_plt(&v26_.v26);
                v9 = 259840;
              LABEL_31:
                if (v33 != nullptr) {
                  nandroid_RefBase_decStrong_plt(v33, &v33);
                }
                if (v34 != 0) {
                  nandroid_RefBase_decStrong_plt(v34, &v34);
                }
                return v9;
              }
              v17 = v16;
              v25 = 0;
              v18 = nandroid_AString_c_str_plt(&v26_.v26);
              v19 = nn_movie_detail_ParseAvccCodecSpecificData_plt(
                  v17, v15, &v25, v18, v33[6]);
              if (v19 != 0 && (v19 & 0x3FFFFF) != 262400) {
                v9 = v19;
                nandroid_AString_Destroy_AString_plt(&v26_.v26);
                goto LABEL_31;
              }
              *a2 += v25;
              nn_movie_detail_FreeMemory(v17, *((_QWORD**)this_ + 171));
              nandroid_AString_Destroy_AString_plt(&v26_.v26);
            }
            else {
              *a2 += v33[6];
            }
          }
          v10 += 8;
          if (v10 == 48) {
            v9 = 0;
            goto LABEL_31;
          }
        }
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)v8 + 176LL))((void*)(&v34), v8,
                                 a3 - *((_QWORD*)this_ + 183));
      goto LABEL_14;
    }
  }
  return v7;
}

__int64 nn_movie_detail_HlsMediaExtractor_Start(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 18);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    result = 518912;
    if (*((_QWORD*)this_ + 176) != 0) {
      nn_os_LockMutex_plt((char*)this_ + 1328);
      v3 = *(_QWORD*)(*((_QWORD*)this_ + 165) + 16LL);
      nn_os_UnlockMutex_plt((char*)this_ + 1328);
      if (v3 != 0) {
        atomic_store(0, (unsigned int*)this_ + 401);
        v4 = 0;
        nandroid_AMessage_dup_plt((void*)(&v4), *((_QWORD*)this_ + 180));
        nandroid_AMessage_setInt32_plt(v4, "what", 1685143893);
        nandroid_AMessage_post_plt(v4, 0);
        *((_BYTE*)this_ + 1304) = 1;
        nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 4);
        if (v4 != 0) {
          nandroid_RefBase_decStrong_plt(v4, &v4);
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

__int64 nn_movie_detail_HlsMediaExtractor_Stop(void* this_)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 19);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 5);
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetSampleAvailableEvent(__int64 a1,
                                                                  _QWORD* a2,
                                                                  int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  int v10;
  _QWORD* v11;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 48, 20);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*(_QWORD*)(a1 + 1408) != 0) {
      nn_os_LockMutex_plt(a1 + 1328);
      v7 = *(_QWORD*)(a1 + 1320);
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 == v7) {
        nn_os_UnlockMutex_plt(a1 + 1328);
        return 519424;
      }
      else {
        v9 = nullptr;
        do {
          v10 = *(_DWORD*)(v8 + 44);
          v11 = (_QWORD*)(v8 + 16);
          v8 = *(_QWORD*)(v8 + 8);
          if (v10 == a3) {
            v9 = v11;
          }
        } while (v8 != v7);
        nn_os_UnlockMutex_plt(a1 + 1328);
        result = 519424;
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

__int64 nn_movie_detail_HlsMediaExtractor_FindInSelectedTracks(void* this_,
                                                               int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  nn_os_LockMutex_plt((char*)this_ + 1328);
  v4 = *((_QWORD*)this_ + 165);
  v5 = *(_QWORD*)(v4 + 8);
  if (v5 == v4) {
    v6 = 0;
  }
  else {
    v6 = 0;
    do {
      v7 = *(_DWORD*)(v5 + 44);
      v8 = v5 + 16;
      v5 = *(_QWORD*)(v5 + 8);
      if (v7 == a2) {
        v6 = v8;
      }
    } while (v5 != v4);
  }
  nn_os_UnlockMutex_plt((char*)this_ + 1328);
  return v6;
}

__int64 nn_movie_detail_HlsMediaExtractor_SeekTo(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 i;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  result =
      nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(a1 + 48, 23);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*(_QWORD*)(a1 + 1408) != 0) {
      nn_os_LockMutex_plt(a1 + 1560);
      v7 = *(_QWORD*)(a1 + 1408);
      if (a3 == 1) {
        v8 = 0;
      }
      else {
        v8 = 2;
      }
      if (a3 == 2) {
        v9 = 1;
      }
      else {
        v9 = v8;
      }
      *(_QWORD*)(a1 + 1452) = 0;
      v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 200LL))(
          v7, a2 & ~(a2 >> 63), v9);
      *(_BYTE*)(a1 + 1460) = 0;
      if (v10 == 0) {
        nn_os_LockMutex_plt(a1 + 1528);
        v11 = *(_QWORD*)(a1 + 1480);
        *(_WORD*)(a1 + 1474) = 0;
        while (*(_QWORD*)(v11 + 16) != 0) {
          v12 = *(_QWORD**)(v11 + 8);
          v13 = v12[3];
          if (v13 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                      memory_order_relaxed);
            v11 = *(_QWORD*)(a1 + 1480);
            v12 = *(_QWORD**)(v11 + 8);
          }
          v14 = (_QWORD*)v12[1];
          *(_QWORD*)(*v12 + 8LL) = v14;
          *v14 = *v12;
          --*(_QWORD*)(v11 + 16);
          v15 = v12[3];
          if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            v16 = (__int64)v12;
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak_plt(v15);
            nn_movie_detail_FreeMemory(v16, *(_QWORD**)(v11 + 24));
            if (v13 != 0) {
            LABEL_19:
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                std___1___shared_weak_count___release_weak_plt(v13);
              }
            }
          }
          else {
            nn_movie_detail_FreeMemory((__int64)v12, *(_QWORD**)(v11 + 24));
            if (v13 != 0) {
              goto LABEL_19;
            }
          }
          v11 = *(_QWORD*)(a1 + 1480);
        }
        v17 = *(_QWORD*)(a1 + 1504);
        *(_QWORD*)(a1 + 1496) = 0;
        *(_QWORD*)(a1 + 1504) = 0;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_plt(v17);
        }
        for (i = *(_QWORD*)(a1 + 1488); *(_QWORD*)(i + 16) != 0;
             i = *(_QWORD*)(a1 + 1488)) {
          v19 = *(_QWORD**)(i + 8);
          v20 = v19[3];
          if (v20 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                      memory_order_relaxed);
            i = *(_QWORD*)(a1 + 1488);
            v19 = *(_QWORD**)(i + 8);
          }
          v21 = (_QWORD*)v19[1];
          *(_QWORD*)(*v19 + 8LL) = v21;
          *v21 = *v19;
          --*(_QWORD*)(i + 16);
          v22 = v19[3];
          if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            v23 = (__int64)v19;
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak_plt(v22);
            nn_movie_detail_FreeMemory(v23, *(_QWORD**)(i + 24));
            if (v20 != 0) {
            LABEL_35:
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak_plt(v20);
              }
            }
          }
          else {
            nn_movie_detail_FreeMemory((__int64)v19, *(_QWORD**)(i + 24));
            if (v20 != 0) {
              goto LABEL_35;
            }
          }
        }
        v24 = *(_QWORD*)(a1 + 1520);
        *(_QWORD*)(a1 + 1512) = 0;
        *(_QWORD*)(a1 + 1520) = 0;
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak_plt(v24);
        }
        nn_os_UnlockMutex_plt(a1 + 1528);
      }
      *(_BYTE*)(a1 + 1476) = 0;
      *(_BYTE*)(a1 + 1460) = 1;
      nn_os_LockMutex_plt(a1 + 1328);
      v25 = *(_QWORD*)(a1 + 1320);
      v26 = *(_QWORD*)(v25 + 8);
      if (v26 != v25) {
        do {
          nn_os_ClearSystemEvent_plt(*(_QWORD*)(v26 + 16));
          v27 = *(_QWORD*)(v26 + 32);
          *(_QWORD*)(v26 + 24) = 0;
          *(_QWORD*)(v26 + 32) = 0;
          if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            std___1___shared_weak_count___release_weak_plt(v27);
          }
          *(_BYTE*)(v26 + 40) = 0;
          v26 = *(_QWORD*)(v26 + 8);
        } while (v26 != *(_QWORD*)(a1 + 1320));
      }
      nn_os_UnlockMutex_plt(a1 + 1328);
      nn_os_SignalSystemEvent_plt(*(_QWORD*)(a1 + 24));
      atomic_store(0, (unsigned int*)(a1 + 1604));
      v28 = 0;
      nandroid_AMessage_dup_plt((void*)(&v28), *(_QWORD*)(a1 + 1440));
      nandroid_AMessage_setInt32_plt(v28, "what", 1685143893);
      nandroid_AMessage_post_plt(v28, 0);
      if (v28 != 0) {
        nandroid_RefBase_decStrong_plt(v28, &v28);
      }
      nn_os_UnlockMutex_plt(a1 + 1560);
      return 0;
    }
    else {
      return 518912;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetSampleBufferSize(
    void* this_, unsigned __int64* a2, int a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 24);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 176) == 0) {
      return 518912;
    }
    v7 = result;
    nn_os_LockMutex_plt((char*)this_ + 1328);
    v8 = *((_QWORD*)this_ + 165);
    v9 = *(_QWORD*)(v8 + 8);
    if (v9 == v8) {
      nn_os_UnlockMutex_plt((char*)this_ + 1328);
      return 519424;
    }
    v10 = 0;
    do {
      v11 = *(_DWORD*)(v9 + 44);
      v12 = v9 + 16;
      v9 = *(_QWORD*)(v9 + 8);
      if (v11 == a3) {
        v10 = v12;
      }
    } while (v9 != v8);
    nn_os_UnlockMutex_plt((char*)this_ + 1328);
    result = 519424;
    if (v10 != 0) {
      v13 = *(_QWORD*)(v10 + 8);
      if (v13 != 0) {
        goto LABEL_12;
      }
      if (*((_BYTE*)this_ + 1304) == 1) {
        result = 262400;
        if ((*(_BYTE*)(v10 + 24) & 1) == 0) {
          v14 = nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(this_, v10);
          v15 = v14;
          if (v14 != -10006 && v14 != 0) {
            v7 = 517376;
          }
          if (v14 == 0 || (result = v7, v15 == -10006)) {
            v13 = *(_QWORD*)(v10 + 8);
            if (v13 == 0) {
            LABEL_14:
              *a2 = v13;
              return 0;
            }
          LABEL_12:
            v13 = *(_QWORD*)(v13 + 16);
            if (v13 != 0) {
              v13 = *(_QWORD*)(v13 + 48);
            }
            goto LABEL_14;
          }
        }
      }
      else {
        return 517888;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_AdvanceTrack(void* this_, void* a2)
{
  __int64 result;
  char* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (a2 == nullptr) {
    return 4294957292LL;
  }
  if ((*((_BYTE*)a2 + 24) & 1) == 0) {
    v8 = (*((_DWORD*)a2 + 7) == 0) & *((_BYTE*)this_ + 1448);
    while (1) {
      nn_os_LockMutex_plt((char*)this_ + 1528);
      v9 = *((_QWORD*)a2 + 2);
      *((_QWORD*)a2 + 1) = 0;
      *((_QWORD*)a2 + 2) = 0;
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_plt(v9);
        v10 = *((_QWORD*)this_ + 189);
        if (v10 == 0) {
        LABEL_29:
          v14 = *((_QWORD*)this_ + 187);
          if (v14 == 0) {
            goto LABEL_40;
          }
          if ((v8 & 1) != 0) {
            goto LABEL_39;
          }
          goto LABEL_31;
        }
      }
      else {
        v10 = *((_QWORD*)this_ + 189);
        if (v10 == 0) {
          goto LABEL_29;
        }
      }
      if (v8 != 0) {
        v11 = *((_QWORD*)this_ + 190);
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                    memory_order_relaxed);
        }
        v12 = *((_QWORD*)a2 + 2);
        *((_QWORD*)a2 + 1) = v10;
        *((_QWORD*)a2 + 2) = v11;
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_plt(v12);
        }
        v13 = *((_QWORD*)this_ + 190);
        *((_QWORD*)this_ + 189) = 0;
        *((_QWORD*)this_ + 190) = 0;
        if (v13 != 0) {
          goto LABEL_37;
        }
        goto LABEL_39;
      }
      v14 = *((_QWORD*)this_ + 187);
      if (v14 == 0) {
        goto LABEL_39;
      }
    LABEL_31:
      v15 = *((_QWORD*)this_ + 188);
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16 = *((_QWORD*)a2 + 2);
      *((_QWORD*)a2 + 1) = v14;
      *((_QWORD*)a2 + 2) = v15;
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_plt(v16);
      }
      v13 = *((_QWORD*)this_ + 188);
      *((_QWORD*)this_ + 187) = 0;
      *((_QWORD*)this_ + 188) = 0;
      if (v13 != 0) {
      LABEL_37:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_plt(v13);
        }
      }
    LABEL_39:
      v17 = *((_QWORD*)a2 + 1);
      if (v17 != 0) {
        if (*(_DWORD*)(v17 + 24) == 2) {
          *((_BYTE*)a2 + 24) = 1;
        }
        nn_os_UnlockMutex_plt((char*)this_ + 1528);
        break;
      }
    LABEL_40:
      *((_BYTE*)this_ + 1460) = 1;
      nn_os_UnlockMutex_plt((char*)this_ + 1528);
      nn_os_SleepThread_plt(10000000);
      if (*((_BYTE*)this_ + 1460) == 1) {
        v18 = atomic_load((unsigned int*)this_ + 401);
        if (v18 == 0 && (unsigned int)nn_movie_detail_MediaState_GetState_plt(
                            (char*)this_ + 48) != 5) {
          continue;
        }
      }
      break;
    }
  }
  result = atomic_load((unsigned int*)this_ + 401);
  if ((_DWORD)result == 0 || (_DWORD)result == -10006) {
    if (*((_BYTE*)a2 + 24) == 1) {
      v6 = (char*)this_ + 1328;
      nn_os_LockMutex_plt((char*)this_ + 1328);
      v7 = *((_QWORD*)this_ + 165);
      while (1) {
        v7 = *(_QWORD*)(v7 + 8);
        if (v7 == *((_QWORD*)this_ + 165)) {
          break;
        }
        if (*(_BYTE*)(v7 + 40) == 0) {
          goto LABEL_54;
        }
      }
      nn_os_UnlockMutex_plt((char*)this_ + 1328);
      nn_os_LockMutex_plt((char*)this_ + 1328);
      v22 = *((_QWORD*)this_ + 165);
      v23 = *(_QWORD*)(v22 + 8);
      if (v23 != v22) {
        do {
          nn_os_SignalSystemEvent_plt(*(_QWORD*)(v23 + 16));
          if (*(_DWORD*)(v23 + 44) == -1) {
            break;
          }
          v23 = *(_QWORD*)(v23 + 8);
        } while (v23 != *((_QWORD*)this_ + 165));
      }
    }
    else {
      v19 = *((_DWORD*)a2 + 7);
      v6 = (char*)this_ + 1328;
      nn_os_LockMutex_plt((char*)this_ + 1328);
      v20 = *((_QWORD*)this_ + 165);
      v21 = *(_QWORD*)(v20 + 8);
      if (v21 != v20) {
        if ((v19 & 0x80000000) == 0) {
          while (1) {
            if (*(_DWORD*)(v21 + 44) == v19) {
              nn_os_SignalSystemEvent_plt(*(_QWORD*)(v21 + 16));
              if (*(_DWORD*)(v21 + 44) == v19) {
                goto LABEL_54;
              }
              v20 = *((_QWORD*)this_ + 165);
            }
            v21 = *(_QWORD*)(v21 + 8);
            if (v21 == v20) {
              goto LABEL_54;
            }
          }
        }
        do {
          nn_os_SignalSystemEvent_plt(*(_QWORD*)(v21 + 16));
          if (*(_DWORD*)(v21 + 44) == v19) {
            break;
          }
          v21 = *(_QWORD*)(v21 + 8);
        } while (v21 != *((_QWORD*)this_ + 165));
      }
    }
  LABEL_54:
    nn_os_UnlockMutex_plt(v6);
    if (*((_BYTE*)a2 + 24) != 0) {
      return 4294957290LL;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_ReadSamples(
    void* this_, void* a2, unsigned __int64* a3, __int64* a4, unsigned int* a5,
    unsigned __int64 a6, int a7)
{
  __int64 result;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v29;
  int v30;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 25);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 176) == 0) {
      return 518912;
    }
    v15 = result;
    nn_os_LockMutex_plt((char*)this_ + 1328);
    v16 = *((_QWORD*)this_ + 165);
    v17 = *(_QWORD*)(v16 + 8);
    if (v17 == v16) {
      nn_os_UnlockMutex_plt((char*)this_ + 1328);
      return 519424;
    }
    v18 = 0;
    do {
      v19 = *(_DWORD*)(v17 + 44);
      v20 = v17 + 16;
      v17 = *(_QWORD*)(v17 + 8);
      if (v19 == a7) {
        v18 = v20;
      }
    } while (v17 != v16);
    result = nn_os_UnlockMutex_plt((char*)this_ + 1328);
    if (v18 == 0) {
      return 519424;
    }
    if (*(_QWORD*)(v18 + 8) != 0) {
      goto LABEL_11;
    }
    if (*((_BYTE*)this_ + 1304) != 1) {
      return 517888;
    }
    if ((*(_BYTE*)(v18 + 24) & 1) != 0) {
      return 262400;
    }
    result = nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(this_, v18);
    v27 = result;
    if ((_DWORD)result != -10006 && (_DWORD)result != 0) {
      v15 = 517376;
    }
    if ((_DWORD)result == 0 || (result = v15, v27 == -10006)) {
    LABEL_11:
      *a3 = 0;
      *a5 = 0;
      v21 = *(_QWORD*)(v18 + 8);
      if (v21 != 0 && *(_DWORD*)(v21 + 24) != 2) {
        v23 = *(_QWORD*)(v21 + 16);
        if (v23 == 0) {
          nn_diag_detail_AbortImpl_plt_856170(result);
        }
        v24 = *(_QWORD*)(v23 + 48);
        *a3 = v24;
        if (v24 > a6) {
          *a3 = 0;
          return 262912;
        }
        memcpy_plt(
            a2,
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 16LL) + 24LL) +
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 16LL) + 40LL),
            v24);
        v25 = *(_QWORD*)(v18 + 8);
        if (v25 != 0) {
          v26 = *(_QWORD*)(v25 + 8);
        }
        else {
          v26 = -1;
        }
        *a4 = v26;
        v29 = *(_DWORD*)(*(_QWORD*)(v18 + 8) + 24LL);
        if (v29 != 0) {
          if (v29 == 2) {
            *a5 |= 8u;
            return 262400;
          }
        }
        else {
          *a5 |= 0x10u;
        }
        result = 262400;
        if ((*(_BYTE*)(v18 + 24) & 1) == 0) {
          v30 = nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(this_, v18);
          if (v30 != -10006 && v30 != 0) {
            v15 = 517376;
          }
          if (v30 == 0) {
            return 0;
          }
          result = v15;
          if (v30 == -10006) {
            return 0;
          }
        }
      }
      else {
        *((_BYTE*)this_ + a7 + 1474) = 1;
        *(_BYTE*)(v18 + 24) = 1;
        *a4 = -1;
        *a5 |= 8u;
        v22 = atomic_load((unsigned int*)this_ + 401);
        if (v22 != 0) {
          return 517376;
        }
        else {
          return 262400;
        }
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetSampleTime(void* this_,
                                                        __int64* a2, int a3)
{
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 26);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    if (*((_QWORD*)this_ + 176) == 0) {
      return 518912;
    }
    v7 = result;
    nn_os_LockMutex_plt((char*)this_ + 1328);
    v8 = *((_QWORD*)this_ + 165);
    v9 = *(_QWORD*)(v8 + 8);
    if (v9 == v8) {
      nn_os_UnlockMutex_plt((char*)this_ + 1328);
      return 519424;
    }
    v10 = 0;
    do {
      v11 = *(_DWORD*)(v9 + 44);
      v12 = v9 + 16;
      v9 = *(_QWORD*)(v9 + 8);
      if (v11 == a3) {
        v10 = v12;
      }
    } while (v9 != v8);
    nn_os_UnlockMutex_plt((char*)this_ + 1328);
    result = 519424;
    if (v10 != 0) {
      v13 = *(_QWORD*)(v10 + 8);
      if (v13 != 0) {
        goto LABEL_12;
      }
      if (*((_BYTE*)this_ + 1304) == 1) {
        result = 262400;
        if ((*(_BYTE*)(v10 + 24) & 1) == 0) {
          v15 = nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(this_, v10);
          v16 = v15;
          if (v15 != -10006 && v15 != 0) {
            v7 = 517376;
          }
          if (v15 == 0 || (result = v7, v16 == -10006)) {
            v13 = *(_QWORD*)(v10 + 8);
            if (v13 == 0) {
              v14 = -1;
              goto LABEL_13;
            }
          LABEL_12:
            v14 = *(_QWORD*)(v13 + 8);
          LABEL_13:
            *a2 = v14;
            return 0;
          }
        }
      }
      else {
        return 517888;
      }
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetSampleProperties(void* this_,
                                                              void* a2, int a3)
{
  unsigned int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 27);
  if (v6 != 0 && (v6 & 0x3FFFFF) != 0x40100) {
    return v6;
  }
  v8 = v6;
  v7 = 519424;
  nn_os_LockMutex_plt((char*)this_ + 1328);
  v9 = *((_QWORD*)this_ + 165);
  v10 = *(_QWORD*)(v9 + 8);
  if (v10 == v9) {
    nn_os_UnlockMutex_plt((char*)this_ + 1328);
    return v7;
  }
  v11 = 0;
  do {
    v12 = *(_DWORD*)(v10 + 44);
    v13 = v10 + 16;
    v10 = *(_QWORD*)(v10 + 8);
    if (v12 == a3) {
      v11 = v13;
    }
  } while (v10 != v9);
  nn_os_UnlockMutex_plt((char*)this_ + 1328);
  if (v11 != 0) {
    v14 = *(_QWORD*)(v11 + 8);
    if (v14 != 0) {
      goto LABEL_11;
    }
    if (*((_BYTE*)this_ + 1304) != 1) {
      return 517888;
    }
    if ((*(_BYTE*)(v11 + 24) & 1) != 0) {
      return 262400;
    }
    v18 = nn_movie_detail_HlsMediaExtractor_AdvanceTrack_plt(this_, v11);
    if (v18 != -10006 && v18 != 0) {
      v8 = 517376;
    }
    if (v18 == 0 || (v7 = v8, v18 == -10006)) {
      v14 = *(_QWORD*)(v11 + 8);
      if (v14 != 0) {
      LABEL_11:
        v7 = 262400;
        if (*(_QWORD*)(v14 + 16) == 0) {
          return v7;
        }
        v24 = 0;
        nandroid_ABuffer_meta_plt((void*)(&v24));
        v22 = 0;
        v23 = 0;
        if ((nandroid_AMessage_findObject_plt(v24, "format", &v22) & 1) == 0) {
          goto LABEL_37;
        }
        v15 = v22;
        v16 = v22 - 16;
        if (v22 == 0) {
          v16 = 0;
        }
        v21 = v16;
        if (v22 != 0) {
          v15 = nandroid_RefBase_incStrong_plt(v22, &v21);
          if (v21 == 0) {
          LABEL_35:
            if (v23 != 0) {
              nn_movie_detail_HlsMediaExtractor_ConvertMessageToMediaProperty_plt(
                  v15, a2, &v23);
            }
          LABEL_37:
            if (v22 != 0) {
              nandroid_RefBase_decStrong_plt(v22, &v22);
            }
            if (v23 != 0) {
              nandroid_RefBase_decStrong_plt(v23, &v23);
            }
            if (v24 != 0) {
              nandroid_RefBase_decStrong_plt(v24, &v24);
            }
            return 0;
          }
          v15 = nandroid_convertMetaDataToMessage_plt_86da80(&v21, &v23);
          v17 = v21;
        }
        else {
          v17 = 0;
        }
        if (v17 != 0) {
          v15 = nandroid_RefBase_decStrong_plt(v17 + 16, &v21);
        }
        goto LABEL_35;
      }
      return 262400;
    }
  }
  return v7;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetCacheRangeCount(void* this_,
                                                             int* a2)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 28);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *a2 = 1;
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_GetCacheRange(void* this_,
                                                        __int64* a2,
                                                        __int64* a3)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 29);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *a2 = 0;
    *a3 = 0;
    result = *((_QWORD*)this_ + 176);
    if (result != 0) {
      (*(void (**)(__int64, __int64*, __int64*))(*(_QWORD*)result + 256LL))(
          result, a2, a3);
      return 0;
    }
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_IsCacheFull(void* this_, bool* a2,
                                                      bool* a3)
{
  __int64 result;

  result = nn_movie_detail_MediaExtractorState_ValidateCurrentState_plt(
      (char*)this_ + 48, 30);
  if ((_DWORD)result == 0 || (result & 0x3FFFFF) == 0x40100) {
    *a2 = false;
    *a3 = false;
    return 0;
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_StreamSourceReadData(void* this_,
                                                               void* a2,
                                                               __int64* a3)
{
  return 263936;
}

__int64 nn_movie_detail_HlsMediaExtractor_StreamSourceSeekTo(void* this_)
{
  return 263936;
}

__int64 nn_movie_detail_HlsMediaExtractor_SetPreferredPixels(void* this_,
                                                             __int64 a2)
{
  __int64 v2;

  *((_QWORD*)this_ + 174) = a2;
  v2 = *((_QWORD*)this_ + 176);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 272LL))(v2);
  }
  return 0;
}

__int64 nn_movie_detail_HlsMediaExtractor_SetMinBandwidthSamples(void* this_,
                                                                 __int64 a2)
{
  __int64 v2;

  *((_QWORD*)this_ + 175) = a2;
  v2 = *((_QWORD*)this_ + 176);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 280LL))(v2);
  }
  return 0;
}

__int64 nn_movie_detail_HlsMediaExtractor_SignalTrack(void* this_, int a2)
{
  __int64 v4;
  __int64 v5;

  nn_os_LockMutex_plt((char*)this_ + 1328);
  v4 = *((_QWORD*)this_ + 165);
  v5 = *(_QWORD*)(v4 + 8);
  if (v5 != v4) {
    if ((a2 & 0x80000000) == 0) {
      while (1) {
        if (*(_DWORD*)(v5 + 44) == a2) {
          nn_os_SignalSystemEvent_plt(*(_QWORD*)(v5 + 16));
          if (*(_DWORD*)(v5 + 44) == a2) {
            goto LABEL_10;
          }
          v4 = *((_QWORD*)this_ + 165);
        }
        v5 = *(_QWORD*)(v5 + 8);
        if (v5 == v4) {
          goto LABEL_10;
        }
      }
    }
    do {
      nn_os_SignalSystemEvent_plt(*(_QWORD*)(v5 + 16));
      if (*(_DWORD*)(v5 + 44) == a2) {
        break;
      }
      v5 = *(_QWORD*)(v5 + 8);
    } while (v5 != *((_QWORD*)this_ + 165));
  }
LABEL_10:
  nn_os_UnlockMutex_plt((char*)this_ + 1328);
  return 0;
}

__int64 nn_movie_detail_HlsMediaExtractor_SignalAllTracks(void* this_)
{
  __int64 v2;
  __int64 v3;

  nn_os_LockMutex_plt((char*)this_ + 1328);
  v2 = *((_QWORD*)this_ + 165);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != v2) {
    do {
      nn_os_SignalSystemEvent_plt(*(_QWORD*)(v3 + 16));
      if (*(_DWORD*)(v3 + 44) == -1) {
        break;
      }
      v3 = *(_QWORD*)(v3 + 8);
    } while (v3 != *((_QWORD*)this_ + 165));
  }
  nn_os_UnlockMutex_plt((char*)this_ + 1328);
  return 0;
}

__int64 nn_movie_detail_HlsMediaExtractor_IsVideoTrack(void* this_, int a2)
{
  return (a2 == 0) & *((_BYTE*)this_ + 1448);
}

__attribute__((swiftcall)) void

nn_movie_detail_HlsMediaExtractor_GetCacheConfig(PSEUDO_X8 x8_, void* this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _BYTE v12[8];
  _BYTE v13[8];
  __int64 v14;
  __int64 v15;

  v3 = *((_QWORD*)this_ + 164);
  if (v3 >= 0x401) {
    if (v3 >= 0x1401) {
      if (v3 >= 0x2801) {
        v5 = 40960;
        v6 = 10240;
        v7 = 6144;
        v8 = 5120;
        v9 = 4096;
        if (v3 <= 0x19000) {
          v5 = 20480;
        }
        if (v3 >= 0xC801) {
          v6 = v5;
        }
        if (v3 >= 0x7801) {
          v7 = v6;
        }
        if (v3 >= 0x6401) {
          v8 = v7;
        }
        if (v3 > 0x5000) {
          v9 = v8;
        }
        if (v3 >= 0x3C01) {
          v4 = v9;
        }
        else {
          v4 = 3072;
        }
      }
      else {
        v4 = 2048;
      }
    }
    else {
      v4 = 1024;
    }
  }
  else {
    v4 = 0;
  }
  v10 = v3 >> 10;
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  nandroid_SortedVectorImpl_SortedVectorImpl_plt(a2, 16, 0);
  v15 = 0;
  *a2 = SdkData_e88420 + 16;
  nandroid_String8_String8_plt_86d870(&v15);
  nandroid_String8_appendFormat_plt(&v15, "%zd/%zd/%d", v4, v10, -1);
  nandroid_String8_String8_plt_86d890(v12, "x-cache-config");
  nandroid_String8_String8_plt_86d8a0(v13, v12);
  nandroid_String8_String8_plt_86d8a0(&v14, &v15);
  nandroid_SortedVectorImpl_add_plt(a2, v13);
  nandroid_String8_Destroy_String8_plt(&v14);
  nandroid_String8_Destroy_String8_plt(v13);
  nandroid_String8_Destroy_String8_plt(v12);
  {
    nandroid_String8_Destroy_String8_plt(&v15);
    return;
  }
}

__int64 nn_movie_detail_HlsMediaExtractor_QueueSamplesLoop(void* this_, char a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64* v8;
  atomic_ullong* v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
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
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  unsigned __int8 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v2 = *((_QWORD*)this_ + 176);
  if (v2 == 0) {
    return v2 & 1;
  }
  if ((a2 & 1) == 0) {
    if (*((_BYTE*)this_ + 1460) != 1) {
      LOBYTE(v2) = 0;
      return v2 & 1;
    }
    v34 = *((unsigned __int8*)this_ + 1448);
    v35 = *((unsigned __int8*)this_ + 1449);
    v36 = *((unsigned __int8*)this_ + 1472);
    if ((v35 & v34 & 1) != 0) {
      v37 = v34 & v36;
      v38 = 0;
      if ((*((_BYTE*)this_ + 1473) & 1) == 0) {
      LABEL_53:
        if ((v37 & (*((_QWORD*)this_ + 189) == 0)) == 1 &&
            (*((_BYTE*)this_ + 1474) & 1) == 0) {
          hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 0);
          if (*((_QWORD*)this_ + 189) == 0 &&
              (*((_BYTE*)this_ + 1474) & 1) == 0) {
            hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 0);
            if (*((_QWORD*)this_ + 189) == 0 &&
                (*((_BYTE*)this_ + 1474) & 1) == 0) {
              hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 0);
              if (*((_QWORD*)this_ + 189) == 0 &&
                  (*((_BYTE*)this_ + 1474) & 1) == 0 && v38 <= 2) {
                hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 0);
                if (*((_QWORD*)this_ + 189) == 0 &&
                    (*((_BYTE*)this_ + 1474) & 1) == 0 && (v38 | 4) <= 5) {
                  hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 0);
                  if (*((_QWORD*)this_ + 189) == 0 &&
                      (*((_BYTE*)this_ + 1474) & 1) == 0 && v38 == 0) {
                    hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_,
                                               0);
                  }
                }
              }
            }
          }
        }
        if ((*((_BYTE*)this_ + 1476) & 1) == 0) {
          v39 = *((_QWORD*)this_ + 176);
          v43 = 0;
          v41 = 0;
          v42 = 0;
          if ((*(unsigned int (**)(__int64, __int64*, __int64*))(
                  *(_QWORD*)v39 + 256LL))(v39, &v43, &v42) == 0 &&
              (*(unsigned int (**)(_QWORD, __int64*))(
                  **((_QWORD**)this_ + 176) + 160LL))(*((_QWORD*)this_ + 176),
                                                      &v41) == 0 &&
              (v42 - v43 > 3000 || v42 + 3000 >= v41)) {
            nn_movie_detail_HlsMediaExtractor_SignalAllTracks_plt(this_);
            *((_BYTE*)this_ + 1476) = 1;
          }
        }
        LOBYTE(v2) = *((_BYTE*)this_ + 1460);
        return v2 & 1;
      }
    }
    else {
      v37 = v34 & v36;
      v38 = 0;
      if ((v35 & v36 & 1) == 0) {
        goto LABEL_53;
      }
    }
    if (*((_QWORD*)this_ + 187) == 0) {
      if ((*((_BYTE*)this_ + 1475) & 1) != 0) {
        v38 = 0;
      }
      else {
        v38 = 1;
        hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 1);
        if (*((_QWORD*)this_ + 187) == 0 &&
            (*((_BYTE*)this_ + 1475) & 1) == 0) {
          hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 1);
          v38 = 2;
          if (*((_QWORD*)this_ + 187) == 0 &&
              (*((_BYTE*)this_ + 1475) & 1) == 0) {
            hls_media_extractor_4d8ee0((__int64)this_, (__int64)this_, 1);
            v38 = 3;
          }
        }
      }
    }
    goto LABEL_53;
  }
  if (*((_QWORD*)this_ + 183) != 0) {
    v4 = 0;
    v5 = SdkData_e88520 + 16;
    while (1) {
      v6 = (__int64*)SdkRoutine_85e050(0x38u);
      v7 = v6 + 3;
      v8 = v6;
      v6[1] = 0;
      v9 = (atomic_ullong*)(v6 + 1);
      v6[2] = 0;
      *v6 = v5;
      v10 = nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(v6 + 3);
      *((_DWORD*)v8 + 6) = v4;
      v11 = v8[5];
      if (v11 != 0) {
        v10 = nandroid_RefBase_decStrong_plt(v8[5], v8 + 5);
      }
      if (v11 != v8[5]) {
        nandroid_sp_report_race_plt(v10);
      }
      v8[5] = 0;
      v12 = (atomic_ullong*)(v8 + 1);
      *((_DWORD*)v8 + 12) = 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 1), 1u,
                                memory_order_relaxed);
      nn_os_LockMutex_plt((char*)this_ + 1528);
      v13 = 1480;
      if (((*((_DWORD*)v8 + 6) == 0) & *((_BYTE*)this_ + 1448)) != 0) {
        v13 = 1488;
      }
      v14 = *(__int64**)((char*)this_ + v13);
      v15 = (_QWORD*)nn_movie_detail_AllocateMemory(32, (_QWORD**)v14[3]);
      *v15 = 0;
      v15[1] = 0;
      v15[2] = v7;
      v15[3] = v8;
      atomic_fetch_add_explicit(v12, 1u, memory_order_relaxed);
      v15[1] = v14;
      v16 = *v14;
      *v15 = *v14;
      *(_QWORD*)(v16 + 8) = v15;
      *v14 = (__int64)v15;
      ++v14[2];
      nn_os_UnlockMutex_plt((char*)this_ + 1528);
      if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        nn_os_LockMutex_plt((char*)this_ + 1528);
        if (v4 != 0) {
          goto LABEL_28;
        }
      }
      else {
        (*(void (**)(__int64*))(*v8 + 16))(v8);
        std___1___shared_weak_count___release_weak_plt(v8);
        nn_os_LockMutex_plt((char*)this_ + 1528);
        if (v4 != 0) {
          goto LABEL_28;
        }
      }
      if ((*((_BYTE*)this_ + 1448) & 1) != 0) {
        v17 = *((_QWORD*)this_ + 190);
        *((_QWORD*)this_ + 189) = 0;
        *((_QWORD*)this_ + 190) = 0;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_plt(v17);
          v33 = *(_QWORD*)(*((_QWORD*)this_ + 186) + 8LL);
          v20 = *(_QWORD*)(v33 + 16);
          v19 = *(_QWORD*)(v33 + 24);
          if (v19 != 0) {
          LABEL_23:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
          }
        }
        else {
          v18 = *(_QWORD*)(*((_QWORD*)this_ + 186) + 8LL);
          v20 = *(_QWORD*)(v18 + 16);
          v19 = *(_QWORD*)(v18 + 24);
          if (v19 != 0) {
            goto LABEL_23;
          }
        }
        v21 = *((_QWORD*)this_ + 190);
        *((_QWORD*)this_ + 189) = v20;
        *((_QWORD*)this_ + 190) = v19;
        if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_plt(v21);
        }
        v22 = *((_QWORD*)this_ + 186);
        goto LABEL_36;
      }
    LABEL_28:
      v23 = *((_QWORD*)this_ + 188);
      *((_QWORD*)this_ + 187) = 0;
      *((_QWORD*)this_ + 188) = 0;
      if (v23 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
        v24 = *(_QWORD*)(*((_QWORD*)this_ + 185) + 8LL);
        v26 = *(_QWORD*)(v24 + 16);
        v25 = *(_QWORD*)(v24 + 24);
        if (v25 == 0) {
          goto LABEL_32;
        }
      LABEL_31:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
        goto LABEL_32;
      }
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak_plt(v23);
      v32 = *(_QWORD*)(*((_QWORD*)this_ + 185) + 8LL);
      v26 = *(_QWORD*)(v32 + 16);
      v25 = *(_QWORD*)(v32 + 24);
      if (v25 != 0) {
        goto LABEL_31;
      }
    LABEL_32:
      v27 = *((_QWORD*)this_ + 188);
      *((_QWORD*)this_ + 187) = v26;
      *((_QWORD*)this_ + 188) = v25;
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak_plt(v27);
      }
      v22 = *((_QWORD*)this_ + 185);
    LABEL_36:
      v28 = *(_QWORD**)(v22 + 8);
      v29 = (_QWORD*)v28[1];
      *(_QWORD*)(*v28 + 8LL) = v29;
      *v29 = *v28;
      --*(_QWORD*)(v22 + 16);
      v30 = v28[3];
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = v28;
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak_plt(v30);
        v28 = v31;
      }
      nn_movie_detail_FreeMemory((__int64)v28, *(_QWORD**)(v22 + 24));
      nn_os_UnlockMutex_plt((char*)this_ + 1528);
      if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (*((_QWORD*)this_ + 183) <= (unsigned __int64)++v4) {
          break;
        }
      }
      else {
        (*(void (**)(__int64*))(*v8 + 16))(v8);
        std___1___shared_weak_count___release_weak_plt(v8);
        if (*((_QWORD*)this_ + 183) <= (unsigned __int64)++v4) {
          break;
        }
      }
    }
  }
  LOBYTE(v2) = 0;
  *((_BYTE*)this_ + 1460) = 0;
  *((_WORD*)this_ + 737) = 257;
  return v2 & 1;
}

__int64 hls_media_extractor_4d8ee0(__int64 a1, __int64 a2, char a3)
{
  char v3;
  unsigned int v6;
  __int64 v7;
  char v8;
  int v9;
  _DWORD* v10;
  __int64 v11;
  __int64* v12;
  _DWORD* v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  unsigned int i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  _QWORD* v36;
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
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 result;
  char v55;
  __int64 v56;
  _QWORD v57[2];
  __int64 v58;
  _QWORD v59[2];
  __int64 v60;
  _QWORD v61[3];
  __int64 v62;
  __int64 v63;

  v3 = a3;
  if ((a3 & 1) != 0) {
    v6 = *(unsigned __int8*)(a1 + 1448);
  }
  else {
    v6 = 0;
  }
  v7 = *(_QWORD*)(a1 + 1408);
  v63 = 0;
  v8 = 1;
  v9 = (*(__int64 (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 152LL))(
      v7, a3 & 1, &v63);
  if (v9 == -1009 || v9 == -1011) {
    goto LABEL_75;
  }
  if (v9 != -1013) {
    goto LABEL_74;
  }
  if ((v3 & 1) != 0) {
    v10 = *(_DWORD**)(a1 + 1496);
    if (v10 == nullptr) {
      goto LABEL_37;
    }
    v11 = *(_QWORD*)(a1 + 1504);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    nn_os_LockMutex_plt(a2 + 1528);
    if (*v10 != 0 || (*(_BYTE*)(a2 + 1448) & 1) == 0) {
      v12 = *(__int64**)(a2 + 1480);
    }
    else {
      v12 = *(__int64**)(a2 + 1488);
    }
    v16 = (_QWORD*)nn_movie_detail_AllocateMemory(32, (_QWORD**)v12[3]);
    *v16 = 0;
    v16[1] = 0;
    v16[2] = v10;
    v16[3] = v11;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v16[1] = v12;
    v17 = *v12;
    *v16 = *v12;
    *(_QWORD*)(v17 + 8) = v16;
    *v12 = (__int64)v16;
    ++v12[2];
    nn_os_UnlockMutex_plt(a2 + 1528);
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_plt(v11);
    }
    v18 = *(_QWORD*)(a1 + 1504);
    *(_QWORD*)(a1 + 1496) = 0;
    *(_QWORD*)(a1 + 1504) = 0;
    if (v18 == 0) {
      goto LABEL_37;
    }
  }
  else {
    v13 = *(_DWORD**)(a1 + 1512);
    if (v13 == nullptr) {
      goto LABEL_37;
    }
    v14 = *(_QWORD*)(a1 + 1520);
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    nn_os_LockMutex_plt(a2 + 1528);
    if (*v13 != 0 || (*(_BYTE*)(a2 + 1448) & 1) == 0) {
      v15 = *(__int64**)(a2 + 1480);
    }
    else {
      v15 = *(__int64**)(a2 + 1488);
    }
    v19 = (_QWORD*)nn_movie_detail_AllocateMemory(32, (_QWORD**)v15[3]);
    *v19 = 0;
    v19[1] = 0;
    v19[2] = v13;
    v19[3] = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v19[1] = v15;
    v20 = *v15;
    *v19 = *v15;
    *(_QWORD*)(v20 + 8) = v19;
    *v15 = (__int64)v19;
    ++v15[2];
    nn_os_UnlockMutex_plt(a2 + 1528);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_plt(v14);
    }
    v18 = *(_QWORD*)(a1 + 1520);
    *(_QWORD*)(a1 + 1512) = 0;
    *(_QWORD*)(a1 + 1520) = 0;
    if (v18 == 0) {
      goto LABEL_37;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_plt(v18);
  }
LABEL_37:
  v21 = *(unsigned __int8*)(a1 + 1449);
  if (v21 == 1 && *(_BYTE*)(a1 + 1448) == 1) {
    if ((v3 & 1) != 0) {
      v22 = *(_DWORD*)(a1 + 1452) + 1;
      v23 = *(_DWORD*)(a1 + 1456);
      *(_DWORD*)(a1 + 1452) = v22;
    }
    else {
      v22 = *(_DWORD*)(a1 + 1452);
      v23 = *(_DWORD*)(a1 + 1456) + 1;
      *(_DWORD*)(a1 + 1456) = v23;
    }
    if (v22 == v23) {
      *(_QWORD*)(a1 + 1452) = 0;
    }
  }
  v62 = 0;
  if (v6 != 0) {
    v24 = *(_QWORD*)(a1 + 1408);
    if ((*(_BYTE*)(a1 + 1448) & (unsigned __int8)v21) != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
          *(_QWORD*)v24 + 128LL))((void*)(&v62), v24, 1);
      if (v62 == 0) {
        goto LABEL_74;
      }
    }
    else {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
          *(_QWORD*)v24 + 176LL))((void*)(&v62), v24,
                                  v6 - *(_QWORD*)(a1 + 1464));
      if (v62 == 0) {
        goto LABEL_74;
      }
    }
  }
  else {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, bool))(
        **(_QWORD**)(a1 + 1408) + 128LL))((void*)(&v62), *(_QWORD*)(a1 + 1408),
                                          (*(_BYTE*)(a1 + 1448) & 1) == 0);
    if (v62 == 0) {
      goto LABEL_74;
    }
  }
  v55 = v3;
  for (i = 0;; ++i) {
    memset(v61, 0, sizeof(v61));
    nandroid_AString_AString_plt_86da90(v61, "csd-");
    nandroid_AString_append_plt_86daa0(v61, i);
    v26 = v62;
    v60 = 0;
    v27 = nandroid_AString_c_str_plt(v61);
    if ((nandroid_AMessage_findBuffer_plt(v26, v27, &v60) & 1) == 0) {
      break;
    }
    v58 = v60;
    if (v60 != 0) {
      nandroid_RefBase_incStrong_plt(v60, &v58);
    }
    SdkRoutine_4d9ae0(v59, &v58, v6, 0, 1);
    nn_os_LockMutex_plt(a2 + 1528);
    v28 = v59[0];
    if (*(_DWORD*)v59[0] != 0 || (*(_BYTE*)(a2 + 1448) & 1) == 0) {
      v29 = *(__int64**)(a2 + 1480);
    }
    else {
      v29 = *(__int64**)(a2 + 1488);
    }
    v30 = (_QWORD*)nn_movie_detail_AllocateMemory(32, (_QWORD**)v29[3]);
    v31 = v59[1];
    *v30 = 0;
    v30[1] = 0;
    v30[2] = v28;
    v30[3] = v31;
    if (v31 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                memory_order_relaxed);
    }
    v30[1] = v29;
    v32 = *v29;
    *v30 = *v29;
    *(_QWORD*)(v32 + 8) = v30;
    *v29 = (__int64)v30;
    ++v29[2];
    nn_os_UnlockMutex_plt(a2 + 1528);
    if (v31 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
      v33 = v58;
      if (v58 == 0) {
        goto LABEL_66;
      }
    LABEL_65:
      nandroid_RefBase_decStrong_plt(v33, &v58);
      goto LABEL_66;
    }
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_plt(v31);
    v33 = v58;
    if (v58 != 0) {
      goto LABEL_65;
    }
  LABEL_66:
    if (v60 != 0) {
      nandroid_RefBase_decStrong_plt(v60, &v60);
    }
    nandroid_AString_Destroy_AString_plt(v61);
  }
  v3 = v55;
  if (v60 != 0) {
    nandroid_RefBase_decStrong_plt(v60, &v60);
  }
  nandroid_AString_Destroy_AString_plt(v61);
  if (v62 != 0) {
    nandroid_RefBase_decStrong_plt(v62, &v62);
  }
LABEL_74:
  v8 = 0;
LABEL_75:
  if (v9 == 0 || v9 == -1011) {
    v56 = v63;
    if (v63 != 0) {
      nandroid_RefBase_incStrong_plt(v63, &v56);
    }
    SdkRoutine_4d9ae0(v57, &v56, v6, v8, 0);
    nn_os_LockMutex_plt(a2 + 1528);
    v34 = v57[0];
    if (*(_DWORD*)v57[0] != 0 || (*(_BYTE*)(a2 + 1448) & 1) == 0) {
      v35 = *(__int64**)(a2 + 1480);
    }
    else {
      v35 = *(__int64**)(a2 + 1488);
    }
    v36 = (_QWORD*)nn_movie_detail_AllocateMemory(32, (_QWORD**)v35[3]);
    v37 = v57[1];
    *v36 = 0;
    v36[1] = 0;
    v36[2] = v34;
    v36[3] = v37;
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
    }
    v36[1] = v35;
    v38 = *v35;
    *v36 = *v35;
    *(_QWORD*)(v38 + 8) = v36;
    *v35 = (__int64)v36;
    ++v35[2];
    nn_os_UnlockMutex_plt(a2 + 1528);
    if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak_plt(v37);
    }
    if (v56 != 0) {
      nandroid_RefBase_decStrong_plt(v56, &v56);
    }
    if ((v3 & 1) != 0) {
      v39 = *(_QWORD*)(a1 + 1504);
      *(_QWORD*)(a1 + 1496) = 0;
      *(_QWORD*)(a1 + 1504) = 0;
      if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
        std___1___shared_weak_count___release_weak_plt(v39);
      }
      v40 = *(_QWORD*)(*(_QWORD*)(a1 + 1480) + 8LL);
      v42 = *(_QWORD*)(v40 + 16);
      v41 = *(_QWORD*)(v40 + 24);
      if (v41 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                  memory_order_relaxed);
      }
      v43 = *(_QWORD*)(a1 + 1504);
      *(_QWORD*)(a1 + 1496) = v42;
      *(_QWORD*)(a1 + 1504) = v41;
      if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        std___1___shared_weak_count___release_weak_plt(v43);
      }
      v44 = *(_QWORD*)(a1 + 1480);
    }
    else {
      v45 = *(_QWORD*)(a1 + 1520);
      *(_QWORD*)(a1 + 1512) = 0;
      *(_QWORD*)(a1 + 1520) = 0;
      if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak_plt(v45);
      }
      v46 = *(_QWORD*)(*(_QWORD*)(a1 + 1488) + 8LL);
      v48 = *(_QWORD*)(v46 + 16);
      v47 = *(_QWORD*)(v46 + 24);
      if (v47 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                  memory_order_relaxed);
      }
      v49 = *(_QWORD*)(a1 + 1520);
      *(_QWORD*)(a1 + 1512) = v48;
      *(_QWORD*)(a1 + 1520) = v47;
      if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
        std___1___shared_weak_count___release_weak_plt(v49);
      }
      v44 = *(_QWORD*)(a1 + 1488);
    }
    v50 = *(_QWORD**)(v44 + 8);
    v51 = (_QWORD*)v50[1];
    *(_QWORD*)(*v50 + 8LL) = v51;
    *v51 = *v50;
    --*(_QWORD*)(v44 + 16);
    v52 = v50[3];
    if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v53 = v50;
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak_plt(v52);
      v50 = v53;
    }
    nn_movie_detail_FreeMemory((__int64)v50, *(_QWORD**)(v44 + 24));
  }
  result = v63;
  if (v63 != 0) {
    return nandroid_RefBase_decStrong_plt(v63, &v63);
  }
  return result;
}

__int64 nn_movie_detail_HlsMediaExtractor_SetTrackSampleAvailableEventType(
    __int64 a1, int a2, __int64 a3)
{
  unsigned int v3;
  __int64 v7;

  v3 = 261376;
  if ((a2 & 0x80000000) == 0 && a2 < (signed __int32)*(_DWORD*)(a1 + 1360)) {
    nn_os_LockMutex_plt(a1 + 1328);
    v7 = *(_QWORD*)(a1 + 1320);
    while (1) {
      v7 = *(_QWORD*)(v7 + 8);
      if (v7 == *(_QWORD*)(a1 + 1320)) {
        break;
      }
      if (*(_DWORD*)(v7 + 44) == a2) {
        *(_QWORD*)(v7 + 16) = a3;
        if (*(_BYTE*)(a1 + 1476) == 1) {
          nn_os_SignalSystemEvent_plt(a3);
        }
        v3 = 0;
        break;
      }
    }
    nn_os_UnlockMutex_plt(a1 + 1328);
  }
  return v3;
}

__int64 nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample(__int64 this_)
{
  *(_DWORD*)this_ = 0;
  *(_QWORD*)(this_ + 8) = 0;
  *(_QWORD*)(this_ + 16) = 0;
  *(_DWORD*)(this_ + 24) = 1;
  return this_;
}

void nn_movie_detail_HlsMediaExtractor_HlsSample_Destroy_HlsSample(void* this_)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = (_QWORD*)((char*)this_ + 16);
  if (*((_QWORD*)this_ + 2) != 0) {
    v2 = *v1;
    v3 = nandroid_RefBase_decStrong_plt(*v1, v1);
    if (v2 != *v1) {
      v3 = nandroid_sp_report_race_plt(v3);
    }
    *v1 = 0;
    v4 = *v1;
    if (*v1 != 0) {
      v3 = nandroid_RefBase_decStrong_plt(*v1, v1);
    }
    if (v4 != *v1) {
      nandroid_sp_report_race_plt(v3);
    }
    *v1 = 0;
  }
}

#pragma GCC visibility pop
