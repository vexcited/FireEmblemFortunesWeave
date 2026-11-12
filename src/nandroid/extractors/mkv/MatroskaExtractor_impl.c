#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    MatroskaExtractor_4e1940_alt1(PSEUDO_X8, _QWORD,
                                  _QWORD) __asm__("MatroskaExtractor_4e1940");
__int64* nn_fs_dc120(__int64* result, __int64*);
__int64 AMediaFormat_clear_plt(_QWORD);
__int64 AMediaFormat_delete_plt(_QWORD);
__int64 AMediaFormat_getInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_getInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_getString_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_new_plt(_QWORD);
__int64 AMediaFormat_setBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setFloat_plt(_QWORD, _QWORD, float);
__int64 AMediaFormat_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 AMediaFormat_setString_plt(_QWORD, _QWORD, _QWORD);
__int64 MatroskaExtractor_4e61f0_alt1(void*, unsigned __int64) __asm__(
    "MatroskaExtractor_4e61f0");
__int64 MatroskaExtractor_4e6840_alt1() __asm__("MatroskaExtractor_4e6840");
__int64
    MatroskaExtractor_4e6aa0_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("MatroskaExtractor_4e6aa0");
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86e8b0(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 mkvparser_AudioTrack_GetBitDepth_plt(_QWORD);
__int64 mkvparser_AudioTrack_GetChannels_plt(_QWORD);
__int64 mkvparser_Block_Frame_Read_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Block_GetFrameCount_plt(_QWORD);
__int64 mkvparser_Block_GetFrame_plt(_QWORD, _QWORD);
__int64 mkvparser_Block_GetTime_plt(_QWORD, _QWORD);
__int64 mkvparser_Block_IsKey_plt(_QWORD);
__int64 mkvparser_Cluster_EOS_plt(_QWORD);
__int64 mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(_QWORD);
__int64 mkvparser_EBMLHeader_EBMLHeader_plt(_QWORD);
__int64 mkvparser_EBMLHeader_Parse_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_SeekHead_GetCount_plt(_QWORD);
__int64 mkvparser_SeekHead_GetEntry_plt(_QWORD, _QWORD);
__int64 mkvparser_Segment_CreateInstance_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Segment_Destroy_Segment_plt(_QWORD);
__int64 mkvparser_Segment_GetCues_plt(_QWORD);
__int64 mkvparser_Segment_GetDuration_plt(_QWORD);
__int64 mkvparser_Segment_GetSeekHead_plt(_QWORD);
__int64 mkvparser_Segment_GetTracks_plt(_QWORD);
__int64 mkvparser_Segment_IsInClusterTable_plt(_QWORD);
__int64 mkvparser_Segment_LoadCluster_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Segment_Load_plt(_QWORD);
__int64 mkvparser_Segment_ParseCues_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Segment_ParseHeaders_plt(_QWORD);
__int64 mkvparser_Track_GetCodecDelay_plt(_QWORD);
__int64 mkvparser_Track_GetCodecId_plt(void);
__int64 mkvparser_Track_GetCodecPrivate_plt(_QWORD, _QWORD);
__int64 mkvparser_Track_GetDefaultDuration_plt(_QWORD);
__int64 mkvparser_Track_GetLanguage_plt(_QWORD);
__int64 mkvparser_Track_GetSeekPreRoll_plt(_QWORD);
__int64 mkvparser_Track_GetType_plt(_QWORD);
__int64 mkvparser_Tracks_GetTrackByIndex_plt(_QWORD, _QWORD);
__int64 mkvparser_Tracks_GetTracksCount_plt(_QWORD);
__int64 mkvparser_VideoTrack_GetDisplayHeight_plt(_QWORD);
__int64 mkvparser_VideoTrack_GetDisplayUnit_plt(_QWORD);
__int64 mkvparser_VideoTrack_GetDisplayWidth_plt(_QWORD);
__int64 mkvparser_VideoTrack_GetHeight_plt(_QWORD);
__int64 mkvparser_VideoTrack_GetWidth_plt(_QWORD);
__int64 nandroid_BlockIterator_advance_l_plt(_QWORD);
__int64 nandroid_BlockIterator_seek_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_GetMPEGAudioFrameSize_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD);
__int64 nandroid_MakeFourCCString_plt(_QWORD, _QWORD);
__int64 nandroid_MatroskaExtractor_CreateSeekTable_plt(_QWORD);
__int64 nandroid_MatroskaExtractor_addTracks_plt(_QWORD);
__int64 nandroid_MatroskaExtractor_getColorInformation_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nandroid_MatroskaExtractor_initTrackInfo_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 nandroid_MatroskaExtractor_synthesizeAVCC_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MatroskaExtractor_synthesizeMPEG2_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MatroskaExtractor_synthesizeMPEG4_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_MatroskaSource_findMP3Header_plt(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 nandroid_MatroskaSource_mp3FrameRead_plt(_QWORD, _QWORD, _QWORD,
                                                 _QWORD);
__int64 nandroid_MatroskaSource_readBlock_plt(_QWORD);
__int64 nandroid_MatroskaSource_setWebmBlockCryptoInfo_plt(_QWORD, _QWORD);
__int64 nandroid_U16_AT_plt(_QWORD);
__int64 nandroid_U32_AT_plt(_QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_VectorImpl_plt_86e620(_QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_editItemLocation_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_VectorImpl_pop_plt(_QWORD);
__int64 nandroid_VectorImpl_push_plt_86e780(_QWORD);
__int64 nandroid_addVorbisCodecInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_4c5aa0(__int64 result, _QWORD*);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_AllocateMemory_alt1(__int64, _QWORD**) __asm__(
    "nn_movie_detail_AllocateMemory");
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_FreeMemory_alt1(_QWORD, _QWORD) __asm__(
    "nn_movie_detail_FreeMemory");
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 ntohs_plt(_QWORD);
__int64 strcmp_plt(void* this_, const char*);
__int64 strcmp_plt_alt1(void* this_, const char*,
                        const char*) __asm__("strcmp_plt");
__int64 strncasecmp_plt(_QWORD, _QWORD, _QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64 tolower_plt(_QWORD);
double mkvparser_AudioTrack_GetSamplingRate_plt(_QWORD);
double mkvparser_VideoTrack_GetFrameRate_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e885f0;
extern __int64 SdkData_e88648;
extern __int64 SdkData_e88668;
extern __int64 SdkData_e88670;
extern __int64 SdkData_e88678;
extern __int64 SdkData_e88720;
extern __int64 SdkData_e88728;
extern __int64 SdkData_e88730;
extern char SdkData_bbbd5c;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88358[489])();
extern void (*SdkData_e88360[488])();
extern void (*SdkData_e88368[487])();
extern void (*SdkData_e88370[486])();
extern void (*SdkData_e88430[462])();
extern void (*SdkData_e88438[461])();
extern void (*SdkData_e88440[460])();
extern void (*SdkData_e88448[459])();
extern void (*SdkData_e88458[457])();
extern void (*SdkData_e88470[454])();
extern void (*SdkData_e88478[453])();
extern void (*SdkData_e88490[450])();
extern void (*SdkData_e88498[449])();
extern void (*SdkData_e884b8[445])();
extern void (*SdkData_e884c0[444])();
extern void (*SdkData_e884e0[440])();
extern void (*SdkData_e884e8[439])();
extern void (*SdkData_e88510[434])();
extern void (*SdkData_e885f8[405])();
extern void (*SdkData_e88600[404])();
extern void (*SdkData_e88608[403])();
extern void (*SdkData_e88610[402])();
extern void (*SdkData_e88618[401])();
extern void (*SdkData_e88640[396])();
extern void (*SdkData_e88650[394])();
extern void (*SdkData_e88658[393])();
extern void (*SdkData_e88660[392])();
extern void (*SdkData_e88680[388])();
extern void (*SdkData_e88688[387])();
extern void (*SdkData_e88690[386])();
extern void (*SdkData_e88698[385])();
extern void (*SdkData_e886a0[384])();
extern void (*SdkData_e886a8[383])();
extern void (*SdkData_e886b0[382])();
extern void (*SdkData_e886b8[381])();
extern void (*SdkData_e886c0[380])();
extern void (*SdkData_e886c8[379])();
extern void (*SdkData_e886d0[378])();
extern void (*SdkData_e886d8[377])();
extern void (*SdkData_e886e0[376])();
extern void (*SdkData_e886e8[375])();
extern void (*SdkData_e886f0[374])();
extern void (*SdkData_e886f8[373])();
void SdkRoutine_85c8b0(void*);
void __attribute__((noreturn)) nn_fs_10de70(_QWORD);
__int64 MatroskaExtractor_4e0680(_QWORD* a1);
__attribute__((swiftcall)) void
MatroskaExtractor_4e1940(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1);
__int64 MatroskaExtractor_4e1f50();
_QWORD* MatroskaExtractor_4e1fd0(_QWORD* result, _DWORD* a2);
__int64 nandroid_MatroskaSource_readBlock(void* this_);
__int64 MatroskaExtractor_4e2540(__int64* a1, __int64** a2);
__int64 nandroid_MatroskaSource_mp3FrameRead(_QWORD* a1, _QWORD* a2, _BYTE* a3,
                                             __int64 a4);
__int64 nandroid_MatroskaSource_read(__int64 a1, __int64** a2, __int64 a3);
__int64 nandroid_MatroskaExtractor_CreateSeekTable(__int64 this_);
__int64 nandroid_MatroskaExtractor_MatroskaExtractor(__int64 a1, __int64 a2);
unsigned __int64 nandroid_MatroskaExtractor_addTracks(void* this_);
void MatroskaExtractor_4e54e0(__int64 a1, char a2, __int64 a3,
                              unsigned __int64 a4);
char* MatroskaExtractor_4e5f50(unsigned int a1);
char* MatroskaExtractor_4e6150(unsigned __int16 a1);
__int64 MatroskaExtractor_4e61f0(void* a1, unsigned __int64 a2, const char* a3);
__int64 (*nandroid_MatroskaExtractor_Sniff(__int64 a1, _DWORD* a2))();
_QWORD* MatroskaExtractor_4e6500(_QWORD* result);
__int64 MatroskaExtractor_4e6640(__int64 a1);
__int64 MatroskaExtractor_4e66d0(__int64 a1);
__int64 MatroskaExtractor_4e66e0(__int64 a1);
__int64 MatroskaExtractor_4e66f0(__int64 a1);
__int64 MatroskaExtractor_4e6700(__int64 a1);
__int64 MatroskaExtractor_4e6710(__int64 a1);
__int64 MatroskaExtractor_4e6720(__int64 a1);
__int64 MatroskaExtractor_4e6730(__int64 a1);
__int64 MatroskaExtractor_4e6740(__int64 a1, __int64 a2, __int64 a3,
                                 __int64 a4);
__int64 MatroskaExtractor_4e6790(__int64 a1, __int64* a2, __int64* a3);
__int64 MatroskaExtractor_4e6810(__int64 a1);
__int64 MatroskaExtractor_4e6820(__int64 a1);
__int64 MatroskaExtractor_4e6830(__int64 a1);
__int64 MatroskaExtractor_4e6990(__int64 result);
__int64 MatroskaExtractor_4e6a40(__int64 result);
__int64 MatroskaExtractor_4e6a60(__int64 a1, __int64 a2);
__int64 MatroskaExtractor_4e6aa0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 MatroskaExtractor_4e6ca0(__int64* a1, _QWORD* a2, unsigned int a3,
                                 __int64 a4);
__int64 MatroskaExtractor_4e6d60(_QWORD* a1);
__int64 MatroskaExtractor_4e6df0(_QWORD* a1);
__int64 MatroskaExtractor_4e7290(_QWORD* a1);
__int64 MatroskaExtractor_4e6990_alt1() __asm__("MatroskaExtractor_4e6990");
__int64 MatroskaExtractor_4e69c0();
__int64 MovieMalloc_plt(_QWORD);
__int64 SdkRoutine_4e69b0();
__int64 SdkRoutine_4e6d10();
__int64 SdkRoutine_4e6d20();
__int64 SdkRoutine_4e6d30();
__int64 SdkRoutine_4e6d40();
__int64 SdkRoutine_4e6d50();
__int64 nandroid_MatroskaExtractor_MatroskaExtractor_plt(_QWORD, _QWORD);
__int64* MatroskaExtractor_4e6840(__int64 a1);

__int64 MatroskaExtractor_4e0680(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e885f0 + 16;
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

__attribute__((swiftcall)) void

MatroskaExtractor_4e1940(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD* v8;
  int v9;

  v3 = *(_QWORD*)(*a1 + 8);
  v4 = *(_QWORD*)(*a1 + 16);
  *(_QWORD*)(v3 + 16) = v4;
  *(_QWORD*)(v4 + 8) = v3;
  v5 = *a1;
  if (*a1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v7 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v9 = __cxa_guard_acquire_plt(SdkData_e88330);
      v7 = SdkData_e88338[0];
      if (v9 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v7 = SdkData_e88338[0];
      }
    }
    v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    nn_movie_detail_FreeMemory(v5, v8);
  }
  *a2 = v4;
}

__int64 MatroskaExtractor_4e1f50()
{
  int v0;
  void(__attribute__((noreturn)) * v1)();

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                            memory_order_acquire) &
       1) != 0) {
    return nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
  }
  v0 = __cxa_guard_acquire_plt(SdkData_e88330);
  v1 = SdkData_e88338[0];
  if (v0 != 0) {
    *(_DWORD*)SdkData_e88338[0] = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v1) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
    v1 = SdkData_e88338[0];
  }
  return nn_os_GetTlsValue_plt(*(unsigned int*)v1);
}

_QWORD* MatroskaExtractor_4e1fd0(_QWORD* result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  char* v16;

  v3 = (_DWORD*)result[1];
  v2 = result[2];
  v5 = result;
  if ((unsigned __int64)v3 < v2) {
    *v3 = *a2;
    v6 = (__int64)(v3 + 1);
  LABEL_3:
    v5[1] = v6;
    return result;
  }
  v7 = (__int64)v3 - *result;
  v8 = (v7 >> 2) + 1;
  if (v8 >> 62 != 0) {
    nn_fs_10de70(result);
  }
  v9 = v2 - *result;
  v10 = v9 >> 1;
  if (v9 >> 1 <= v8) {
    v10 = (v7 >> 2) + 1;
  }
  if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
    v11 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v11 = v10;
  }
  v12 = nn_movie_detail_AllocateMemory(4 * v11);
  v14 = v12 + 4 * v11;
  v13 = (_DWORD*)(v12 + v7);
  *v13 = *a2;
  v6 = v12 + v7 + 4;
  v15 = v5[1] - *v5;
  v16 = (char*)v13 - v15;
  memcpy_plt((char*)v13 - v15, *v5, v15);
  result = (_QWORD*)*v5;
  *v5 = v16;
  v5[1] = v6;
  v5[2] = v14;
  if (result == nullptr) {
    goto LABEL_3;
  }
  result = (_QWORD*)nn_movie_detail_FreeMemory_alt1(result, v5[3]);
  v5[1] = v6;
  return result;
}

__int64 nandroid_MatroskaSource_readBlock(void* this_)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  _QWORD** v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  int v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64* v40;

  if (*(_QWORD*)(*((_QWORD*)this_ + 15) + 16LL) != *((_QWORD*)this_ + 15)) {
    return 4294957295LL;
  }
  v3 = *((_QWORD*)this_ + 8);
  if (v3 != 0 && (mkvparser_Cluster_EOS_plt(v3) & 1) == 0 &&
      *((_QWORD*)this_ + 9) != 0) {
    v4 = *((_QWORD*)this_ + 8);
    *((_DWORD*)this_ + 26) = 0;
    v5 = 0;
    if ((mkvparser_Cluster_EOS_plt(v4) & 1) == 0) {
      v6 = *((_QWORD*)this_ + 9);
      if (v6 != 0) {
        v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      }
    }
    v7 = -1;
    if (*((_QWORD*)this_ + 8) != 0 && *((_QWORD*)this_ + 9) != 0) {
      if ((mkvparser_Segment_IsInClusterTable_plt(
               *(_QWORD*)(*((_QWORD*)this_ + 5) + 96LL)) &
           1) == 0) {
        return 4294957289LL;
      }
      v8 = (*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 9) + 16LL))(
          *((_QWORD*)this_ + 9));
      v9 = mkvparser_Block_GetTime_plt(v8, *((_QWORD*)this_ + 8));
      if ((unsigned __int64)(v9 + 3499) < 0x3E8) {
        return 4294957289LL;
      }
      v7 = (v9 + 500) / 1000;
    }
    if ((int)mkvparser_Block_GetFrameCount_plt(v5) >= 1) {
      v10 = 0;
      v11 = SdkData_e88338[0];
      do {
        v12 = nandroid_VectorImpl_editItemLocation_plt(
            *((_QWORD*)this_ + 2) + 40LL, *((_QWORD*)this_ + 3));
        v13 = mkvparser_Block_GetFrame_plt(v5, (unsigned int)v10);
        v14 = *(_QWORD*)(v13 + 8);
        v15 = *(_QWORD*)(v12 + 80);
        if (__CFADD__(v14, v15)) {
          return 4294957295LL;
        }
        v16 = v13;
        v17 = *((__int64**)this_ + 1);
        v40 = nullptr;
        MatroskaExtractor_4e2540(v17, &v40);
        (*(void (**)(__int64*, _QWORD, __int64))(*v40 + 56))(v40, 0, v15 + v14);
        v18 = (*(__int64 (**)(__int64*))(*v40 + 24))(v40);
        v19 = *(_QWORD*)(v12 + 72);
        v20 = v18;
        if (v19 != 0) {
          memcpy_plt(v18, v19, *(_QWORD*)(v12 + 80));
        }
        v21 = (*(__int64 (**)(__int64*))(*v40 + 64))(v40);
        AMediaFormat_setInt64_plt(v21, *(_QWORD*)SdkData_e88448[0], v7);
        v22 = *(_QWORD*)SdkData_e88470[0];
        v23 = mkvparser_Block_IsKey_plt(v5);
        AMediaFormat_setInt32_plt(v21, v22, v23 & 1);
        if (*((_DWORD*)this_ + 8) == 5) {
          v39 = 0;
          if ((AMediaFormat_getInt32_plt(*(_QWORD*)(v12 + 16),
                                         *(_QWORD*)SdkData_e88498[0], &v39) &
               1) == 0) {
            return 4294957295LL;
          }
          v38 = 0;
          if ((AMediaFormat_getInt64_plt(*(_QWORD*)(v12 + 16),
                                         *(_QWORD*)SdkData_e88430[0], &v38) &
               1) == 0) {
            return 4294957295LL;
          }
          if (v38 > v7) {
            AMediaFormat_setInt32_plt(
                v21, *(_QWORD*)SdkData_e88640[0],
                (unsigned int)((v38 - v7) * v39 / 1000000));
          }
        }
        if ((unsigned int)mkvparser_Block_Frame_Read_plt(
                v16, *(_QWORD*)(*((_QWORD*)this_ + 2) + 88LL),
                v20 + *(_QWORD*)(v12 + 80)) != 0 ||
            *(_BYTE*)(*((_QWORD*)this_ + 2) + 106LL) == 1 &&
                *(_BYTE*)(v12 + 8) == 1 &&
                (unsigned int)
                        nandroid_MatroskaSource_setWebmBlockCryptoInfo_plt(
                            this_, v40) != 0) {
          v31 = *((_QWORD*)this_ + 15);
          v32 = *(_QWORD*)(v31 + 16);
          if (v32 != v31) {
            do {
              v33 = *(_QWORD*)(v32 + 16);
              if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                        memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
                *(_DWORD*)v11 = 0;
                *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
                __cxa_guard_release_plt(SdkData_e88330);
              }
              v34 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
              nn_movie_detail_FreeMemory(v32, v34);
              v31 = *((_QWORD*)this_ + 15);
              v32 = v33;
            } while (v33 != v31);
          }
          *(_QWORD*)(v31 + 8) = v31;
          *(_QWORD*)(*((_QWORD*)this_ + 15) + 16LL) = *((_QWORD*)this_ + 15);
          v35 = *((_QWORD*)this_ + 5);
          nn_os_LockMutex_plt(v35 + 8);
          v36 = nandroid_BlockIterator_advance_l_plt((char*)this_ + 40);
          nn_os_UnlockMutex_plt(v35 + 8);
          v37 = v40;
          *((_DWORD*)this_ + 26) = v36;
          (*(void (**)(__int64*))(*v37 + 16))(v37);
          return 4294957296LL;
        }
        v24 = *((_QWORD*)this_ + 15);
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          *(_DWORD*)v11 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v25 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
        v26 = (_QWORD*)SdkRoutine_4c3860(16, 24, v25);
        v27 = v40;
        v26[2] = v24;
        ++v10;
        *v26 = v27;
        v28 = *(_QWORD*)(v24 + 8);
        v26[1] = v28;
        *(_QWORD*)(v28 + 16) = v26;
        *(_QWORD*)(v24 + 8) = v26;
      } while (v10 < (int)mkvparser_Block_GetFrameCount_plt(v5));
    }
    v29 = *((_QWORD*)this_ + 5);
    nn_os_LockMutex_plt(v29 + 8);
    v30 = nandroid_BlockIterator_advance_l_plt((char*)this_ + 40);
    nn_os_UnlockMutex_plt(v29 + 8);
    *((_DWORD*)this_ + 26) = v30;
    return v30;
  }
  else if (*((_DWORD*)this_ + 26) == -10007) {
    return 4294957289LL;
  }
  else {
    return 4294957290LL;
  }
}

__int64 MatroskaExtractor_4e2540(__int64* a1, __int64** a2)
{
  __int64 v2;
  __int64 result;
  __int64* v6;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned __int64 v11;
  bool v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v16)();
  _QWORD** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;

  v2 = *a1;
  v27 = 0;
  result =
      (*(__int64 (**)(_QWORD, unsigned __int64*))(v2 + 24))(*(_QWORD*)v2, &v27);
  v6 = nullptr;
  if ((_DWORD)result == 0 && v27 != 0) {
    v9 = a1 + 2;
    v8 = a1[2];
    if (v8 == 0) {
      goto LABEL_16;
    }
    v10 = a1 + 2;
    do {
      v11 = *(_QWORD*)(v8 + 32);
      v12 = v11 >= v27;
      if (v11 >= v27) {
        v13 = 0;
      }
      else {
        v13 = 8;
      }
      if (v12) {
        v10 = (__int64*)v8;
      }
      v8 = *(_QWORD*)(v8 + v13);
    } while (v8 != 0);
    if (v10 != v9 && v27 >= v10[4]) {
      v6 = (__int64*)v10[5];
    }
    else {
    LABEL_16:
      v14 = result;
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v16 = SdkData_e88338[0];
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v16 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v16) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v17 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v16);
      v18 = (__int64*)SdkRoutine_4c3860(16, 16, v17);
      v19 = v27;
      v6 = v18;
      v20 = a1 + 2;
      *v18 = SdkData_e88648 + 16;
      v18[1] = v19;
      v21 = v27;
      v22 = (__int64*)*v9;
      if (*v9 != 0) {
        result = v14;
        while (1) {
          while (1) {
            v20 = v22;
            v23 = v22[4];
            if (v27 >= v23) {
              break;
            }
            v22 = (__int64*)*v20;
            v9 = v20;
            if (*v20 == 0) {
              goto LABEL_24;
            }
          }
          if (v23 >= v27) {
            break;
          }
          v22 = (__int64*)v20[1];
          if (v22 == nullptr) {
            v9 = v20 + 1;
            goto LABEL_24;
          }
        }
      }
      else {
      LABEL_24:
        v24 =
            (__int64*)nn_movie_detail_AllocateMemory_alt1(48, (_QWORD**)a1[3]);
        v24[4] = v21;
        v24[5] = (__int64)v6;
        *v24 = 0;
        v24[1] = 0;
        v24[2] = (__int64)v20;
        *v9 = (__int64)v24;
        v25 = *(_QWORD*)a1[1];
        if (v25 != 0) {
          a1[1] = v25;
          v26 = (__int64*)*v9;
        }
        else {
          v26 = v24;
        }
        nn_fs_dc120((__int64*)a1[2], v26);
        result = v14;
        ++a1[4];
      }
    }
  }
  *a2 = v6;
  return result;
}

__int64 nandroid_MatroskaSource_mp3FrameRead(_QWORD* a1, _QWORD* a2, _BYTE* a3,
                                             __int64 a4)
{
  unsigned int v4;
  __int64* v8;
  __int64 v9;
  void(__attribute__((noreturn)) * v10)();
  __int64 v11;
  atomic_uchar* v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64** v22;
  __int64** v23;
  unsigned int v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64** v53;
  __int64** v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64** v74;
  __int64** v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64* v82;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  int v91;
  __int64 v92;
  unsigned __int64 v93;
  int v94;

  v8 = **(__int64***)(a1[15] + 16LL);
  if (a3 != nullptr && (*a3 & 8) != 0) {
    v9 = (*(__int64 (**)(_QWORD))(*v8 + 64))(**(_QWORD**)(a1[15] + 16LL));
    v10 = SdkData_e88448[0];
    if ((AMediaFormat_getInt64_plt(v9, *(_QWORD*)SdkData_e88448[0], a1 + 16) &
         1) == 0) {
      v32 = (*(__int64 (**)(__int64*))(*v8 + 64))(v8);
      AMediaFormat_getInt64_plt(v32, *(_QWORD*)v10, a1 + 16);
      return (unsigned int)-10001;
    }
    if ((a1[16] & 0x8000000000000000LL) != 0) {
      a1[16] = 0;
      v11 = (*(__int64 (**)(__int64*))(*v8 + 64))(v8);
      AMediaFormat_setInt64_plt(v11, *(_QWORD*)v10, a1[16]);
    }
  }
  v94 = -1;
  v12 = (atomic_uchar*)SdkData_e88330;
  v13 = SdkData_e88338[0];
  while (2) {
    v14 = (*(__int64 (**)(__int64*))(*v8 + 24))(v8);
    v15 = (*(__int64 (**)(__int64*))(*v8 + 40))(v8);
    v16 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
    nandroid_MatroskaSource_findMP3Header_plt(a1, a1 + 17, v14 + v15, v16,
                                              &v94);
    v17 = v94;
    if (v94 < 0) {
      (*(void (**)(__int64*))(*v8 + 16))(v8);
      v18 = *(_QWORD*)(a1[15] + 16LL);
      v20 = *(_QWORD*)(v18 + 8);
      v19 = *(_QWORD*)(v18 + 16);
      *(_QWORD*)(v20 + 16) = v19;
      *(_QWORD*)(v19 + 8) = v20;
      if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v12) != 0) {
        *(_DWORD*)v13 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
        __cxa_guard_release_plt(v12);
      }
      v21 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
      nn_movie_detail_FreeMemory(v18, v21);
      while (1) {
        v22 = (__int64**)a1[15];
        v23 = (__int64**)v22[2];
        if (v23 != v22) {
          break;
        }
        v24 = nandroid_MatroskaSource_readBlock_plt(a1);
        if (v24 != 0) {
          v25 = (__int64*)a1[15];
          v26 = (__int64*)v25[2];
          if (v26 == v25) {
            return v24;
          }
          do {
            v28 = v26[1];
            v27 = v26[2];
            v29 = *v26;
            *(_QWORD*)(v28 + 16) = v27;
            *(_QWORD*)(v27 + 8) = v28;
            if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
                (unsigned int)__cxa_guard_acquire_plt(v12) != 0) {
              *(_DWORD*)v13 = 0;
              *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
              __cxa_guard_release_plt(v12);
            }
            v30 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
            nn_movie_detail_FreeMemory((__int64)v26, v30);
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            v31 = (__int64*)a1[15];
            v26 = (__int64*)v31[2];
          } while (v26 != v31);
          v4 = v24;
        }
        if (v24 != 0) {
          return v4;
        }
      }
      v8 = *v23;
      v17 = v94;
      if (v94 < 0) {
        continue;
      }
    }
    break;
  }
  v33 = (*(__int64 (**)(__int64*))(*v8 + 40))(v8);
  v34 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
  (*(void (**)(__int64*, __int64, __int64))(*v8 + 56))(v8, v33 + v17,
                                                       v34 - v17);
  v35 = (*(__int64 (**)(__int64*))(*v8 + 24))(v8);
  v36 = *(_DWORD*)(v35 + (*(__int64 (**)(__int64*))(*v8 + 40))(v8));
  v92 = 0;
  v93 = 0;
  v91 = 0;
  if ((nandroid_GetMPEGAudioFrameSize_plt(bswap32(v36), &v93, (char*)&v92 + 4,
                                          &v92, &v91, 0) &
       1) == 0) {
    return (unsigned int)-10002;
  }
  v37 = (__int64*)a1[1];
  v90 = nullptr;
  MatroskaExtractor_4e2540(v37, &v90);
  (*(void (**)(__int64*, _QWORD, unsigned __int64))(*v90 + 56))(v90, 0, v93);
  v38 = (*(__int64 (**)(__int64*))(*v90 + 24))(v90);
  v39 = v93;
  v40 = v38;
  v41 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
  v42 = *v8;
  if (v39 > v41) {
    v43 = (*(__int64 (**)(__int64*))(v42 + 24))(v8);
    v44 = (*(__int64 (**)(__int64*))(*v8 + 40))(v8);
    v45 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
    memcpy_plt(v40, v43 + v44, v45);
    v46 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
    v47 = v93;
    v48 = v46;
    v87 = v47 - (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    v49 = *(_QWORD*)(a1[15] + 16LL);
    v51 = *(_QWORD*)(v49 + 8);
    v50 = *(_QWORD*)(v49 + 16);
    *(_QWORD*)(v51 + 16) = v50;
    *(_QWORD*)(v50 + 8) = v51;
    if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v13 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v52 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
    nn_movie_detail_FreeMemory(v49, v52);
    v86 = v48;
    while (1) {
      v53 = (__int64**)a1[15];
      v54 = (__int64**)v53[2];
      if (v54 != v53) {
        break;
      }
      v24 = nandroid_MatroskaSource_readBlock_plt(a1);
      if (v24 != 0) {
        v55 = (__int64*)a1[15];
        v56 = (__int64*)v55[2];
        if (v56 == v55) {
          return v24;
        }
        do {
          v58 = v56[1];
          v57 = v56[2];
          v59 = *v56;
          *(_QWORD*)(v58 + 16) = v57;
          *(_QWORD*)(v57 + 8) = v58;
          if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(v12) != 0) {
            *(_DWORD*)v13 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
            __cxa_guard_release_plt(v12);
          }
          v60 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
          nn_movie_detail_FreeMemory((__int64)v56, v60);
          (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
          v61 = (__int64*)a1[15];
          v56 = (__int64*)v61[2];
        } while (v56 != v61);
        v4 = v24;
      }
      if (v24 != 0) {
        return v4;
      }
    }
    v8 = *v54;
    v67 = (*(__int64 (**)(__int64*))(**v54 + 40))(*v54);
    v68 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
    if (v68 < v87) {
      v85 = v40;
      do {
        v69 = (*(__int64 (**)(__int64*))(*v8 + 24))(v8);
        memcpy_plt(v40 + v86, v69 + v67, v68);
        (*(void (**)(__int64*))(*v8 + 16))(v8);
        v70 = *(_QWORD*)(a1[15] + 16LL);
        v72 = *(_QWORD*)(v70 + 8);
        v71 = *(_QWORD*)(v70 + 16);
        *(_QWORD*)(v72 + 16) = v71;
        *(_QWORD*)(v71 + 8) = v72;
        if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v12) != 0) {
          *(_DWORD*)v13 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
          __cxa_guard_release_plt(v12);
        }
        v86 += v68;
        v87 -= v68;
        v73 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
        nn_movie_detail_FreeMemory(v70, v73);
        v40 = v85;
        while (1) {
          v74 = (__int64**)a1[15];
          v75 = (__int64**)v74[2];
          if (v75 != v74) {
            break;
          }
          v24 = nandroid_MatroskaSource_readBlock_plt(a1);
          if (v24 != 0) {
            v76 = (__int64*)a1[15];
            v77 = (__int64*)v76[2];
            if (v77 == v76) {
              return v24;
            }
            do {
              v79 = v77[1];
              v78 = v77[2];
              v80 = *v77;
              *(_QWORD*)(v79 + 16) = v78;
              *(_QWORD*)(v78 + 8) = v79;
              if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
                  (unsigned int)__cxa_guard_acquire_plt(v12) != 0) {
                *(_DWORD*)v13 = 0;
                *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
                __cxa_guard_release_plt(v12);
              }
              v81 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
              nn_movie_detail_FreeMemory((__int64)v77, v81);
              (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
              v82 = (__int64*)a1[15];
              v77 = (__int64*)v82[2];
            } while (v77 != v82);
            v4 = v24;
          }
          if (v24 != 0) {
            return v4;
          }
        }
        v8 = *v75;
        v67 = (*(__int64 (**)(__int64*))(**v75 + 40))(*v75);
        v68 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
      } while (v68 < v87);
    }
    v84 = (*(__int64 (**)(__int64*))(*v8 + 24))(v8);
    memcpy_plt(v40 + v86, v84 + v67, v87);
    (*(void (**)(__int64*, unsigned __int64, unsigned __int64))(*v8 + 56))(
        v8, v67 + v87, v68 - v87);
    if ((unsigned __int64)(*(__int64 (**)(__int64*))(*v8 + 48))(v8) > 3) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  v62 = (*(__int64 (**)(__int64*))(v42 + 40))(v8);
  v63 = (*(__int64 (**)(__int64*))(*v8 + 48))(v8);
  v64 = (*(__int64 (**)(__int64*))(*v8 + 24))(v8);
  memcpy_plt(v40, v64 + v62, v93);
  (*(void (**)(__int64*, unsigned __int64, unsigned __int64))(*v8 + 56))(
      v8, v93 + v62, v63 - v93);
  if ((unsigned __int64)(*(__int64 (**)(__int64*))(*v8 + 48))(v8) <= 3) {
  LABEL_41:
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    v88 = *(_QWORD*)(a1[15] + 16LL);
    MatroskaExtractor_4e1940_alt1((void*)(&v89), a1 + 14, &v88);
  }
LABEL_42:
  v65 = (*(__int64 (**)(__int64*))(*v90 + 64))(v90);
  AMediaFormat_setInt64_plt(v65, *(_QWORD*)SdkData_e88448[0], a1[16]);
  a1[16] += (__int64)(8000 * v93) / v91;
  if ((a4 & 0x8000000000000000LL) == 0) {
    v66 = (*(__int64 (**)(__int64*))(*v90 + 64))(v90);
    AMediaFormat_setInt64_plt(v66, *(_QWORD*)SdkData_e88650[0], a4);
  }
  v4 = 0;
  *a2 = v90;
  return v4;
}

__int64 nandroid_MatroskaSource_read(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64 result;
  __int64* v10;
  __int64* v11;
  unsigned int v12;
  atomic_uchar* v13;
  void(__attribute__((noreturn)) * v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64* v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64* v45;
  atomic_uchar* v46;
  void(__attribute__((noreturn)) * v47)();
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  void(__attribute__((noreturn)) * v57)();
  void(__attribute__((noreturn)) * v58)();
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  void(__attribute__((noreturn)) * v69)();
  unsigned int v70;
  __int64 v71;
  __int64* v72;

  *a2 = nullptr;
  if (a3 == 0) {
    v6 = -1;
    goto LABEL_5;
  }
  if ((*(_DWORD*)a3 & 8) == 0) {
    v6 = -1;
    goto LABEL_5;
  }
  v20 = *(_DWORD*)a3 & 7;
  if (v20 == 4) {
    return 4294957294LL;
  }
  v34 = *(_QWORD*)(a3 + 8);
  nandroid_MatroskaExtractor_CreateSeekTable_plt(*(_QWORD*)(a1 + 16));
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 105LL) & 1) != 0) {
    v6 = -1;
    goto LABEL_5;
  }
  v44 = *(__int64**)(a1 + 120);
  v45 = (__int64*)v44[2];
  if (v45 != v44) {
    v46 = (atomic_uchar*)SdkData_e88330;
    v47 = SdkData_e88338[0];
    do {
      v49 = v45[1];
      v48 = v45[2];
      v50 = *v45;
      *(_QWORD*)(v49 + 16) = v48;
      *(_QWORD*)(v48 + 8) = v49;
      if ((atomic_load_explicit(v46, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v46) != 0) {
        *(_DWORD*)v47 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v47) = 1;
        __cxa_guard_release_plt(v46);
      }
      v51 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v47);
      nn_movie_detail_FreeMemory((__int64)v45, v51);
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      v52 = *(__int64**)(a1 + 120);
      v45 = (__int64*)v52[2];
    } while (v45 != v52);
  }
  result = nandroid_BlockIterator_seek_plt(a1 + 40, v34,
                                           *(unsigned __int8*)(a1 + 36), &v72);
  if (v20 == 3) {
    v6 = (__int64)v72;
  }
  else {
    v6 = -1;
  }
  if ((_DWORD)result == 0) {
  LABEL_5:
    while (1) {
      v7 = *(__int64***)(a1 + 120);
      v8 = (__int64**)v7[2];
      if (v8 != v7) {
        break;
      }
      result = nandroid_MatroskaSource_readBlock_plt(a1);
      if ((_DWORD)result != 0) {
        v10 = *(__int64**)(a1 + 120);
        v11 = (__int64*)v10[2];
        if (v11 != v10) {
          v12 = result;
          v13 = (atomic_uchar*)SdkData_e88330;
          v14 = SdkData_e88338[0];
          do {
            v16 = v11[1];
            v15 = v11[2];
            v17 = *v11;
            *(_QWORD*)(v16 + 16) = v15;
            *(_QWORD*)(v15 + 8) = v16;
            if ((atomic_load_explicit(v13, memory_order_acquire) & 1) == 0 &&
                (unsigned int)__cxa_guard_acquire_plt(v13) != 0) {
              *(_DWORD*)v14 = 0;
              *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v14) = 1;
              __cxa_guard_release_plt(v13);
            }
            v18 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v14);
            nn_movie_detail_FreeMemory((__int64)v11, v18);
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            v19 = *(__int64**)(a1 + 120);
            v11 = (__int64*)v19[2];
          } while (v11 != v19);
          return v12;
        }
        return result;
      }
    }
    if (*(_DWORD*)(a1 + 32) == 3) {
      return nandroid_MatroskaSource_mp3FrameRead_plt(a1, a2, a3, v6);
    }
    v22 = v8[1];
    v21 = v8[2];
    v23 = *v8;
    v22[2] = (__int64)v21;
    v21[1] = (__int64)v22;
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v69 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v69) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v24 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v25 = nn_movie_detail_FreeMemory((__int64)v8, v24);
    v26 = *(_DWORD*)(a1 + 32);
    if ((v26 & 0xFFFFFFFD) != 0 || *(_QWORD*)(a1 + 96) == 0) {
      if ((v6 & 0x8000000000000000LL) == 0) {
        v35 = (*(__int64 (**)(__int64*))(*v23 + 64))(v23);
        v25 = AMediaFormat_setInt64_plt(v35, *(_QWORD*)SdkData_e88650[0], v6);
        v26 = *(_DWORD*)(a1 + 32);
      }
      if (v26 == 4) {
        LODWORD(v71) = 0;
        LODWORD(v72) = 16;
        v36 = AMediaFormat_new_plt(v25);
        v37 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, v36);
        if (v36 != 0 && v37 == 0) {
          AMediaFormat_getInt32_plt(v36, *(_QWORD*)SdkData_e88658[0], &v72);
          AMediaFormat_getInt32_plt(v36, *(_QWORD*)SdkData_e88660[0], &v71);
        }
        AMediaFormat_delete_plt(v36);
        if ((_DWORD)v71 == 1 && (_DWORD)v72 == 16) {
          v38 = (*(__int64 (**)(__int64*))(*v23 + 24))(v23);
          v39 = (*(__int64 (**)(__int64*))(*v23 + 40))(v23);
          v40 = (*(__int64 (**)(__int64*))(*v23 + 24))(v23);
          v41 = (*(__int64 (**)(__int64*))(*v23 + 40))(v23);
          if ((unsigned __int64)(*(__int64 (**)(__int64*))(*v23 + 48))(v23) >=
              2) {
            v42 = v38 + 2 * v39;
            v43 = 0;
            do {
              *(_WORD*)(v42 + 2 * v43) =
                  ntohs_plt(*(unsigned __int16*)(v40 + 2 * v41 + 2 * v43));
              ++v43;
            } while (v43 < (unsigned __int64)(*(__int64 (**)(__int64*))(
                               *v23 + 48))(v23) >>
                     1);
          }
        }
      }
      *a2 = v23;
      return 0;
    }
    else {
      v27 = (*(__int64 (**)(__int64*))(*v23 + 24))(v23);
      v28 = v27 + (*(__int64 (**)(__int64*))(*v23 + 40))(v23);
      v29 = (*(__int64 (**)(__int64*))(*v23 + 48))(v23);
      v30 = *(_QWORD*)(a1 + 96);
      v31 = v29;
      v72 = nullptr;
      if (v30 <= v29) {
        v33 = 0;
        v32 = 0;
        while (1) {
          v53 = 0;
          if (v30 > 2) {
            if (v30 == 3) {
              v53 =
                  ((unsigned __int64)*(unsigned __int8*)(v28 + v32) << 16) |
                  ((unsigned __int64)*(unsigned __int8*)(v28 + v32 + 1) << 8) |
                  *(unsigned __int8*)(v28 + v32 + 2);
            }
            else if (v30 == 4) {
              v53 = (unsigned int)nandroid_U32_AT_plt(v28 + v32);
            }
          }
          else if (v30 == 1) {
            v53 = *(unsigned __int8*)(v28 + v32);
          }
          else if (v30 == 2) {
            v53 = (unsigned __int16)nandroid_U16_AT_plt(v28 + v32);
          }
          v30 = *(_QWORD*)(a1 + 96);
          v54 = v30 + v32 + v53;
          if (v54 <= v30 + v32) {
            goto LABEL_63;
          }
          if (v54 <= v31) {
            v32 += v53 + v30;
            v33 += v53 + 4;
            if (v32 + v30 <= v31) {
              continue;
            }
          }
          goto LABEL_62;
        }
      }
      v32 = 0;
      v33 = 0;
    LABEL_62:
      if (v32 < v31) {
        goto LABEL_63;
      }
      if (v33 == v31 && v30 == 4) {
        v72 = v23;
      }
      else {
        MatroskaExtractor_4e2540(*(__int64**)(a1 + 8), &v72);
        (*(void (**)(__int64*, _QWORD, __int64))(*v72 + 56))(v72, 0, v33);
      }
      v55 = (*(__int64 (**)(__int64*))(*v23 + 64))(v23);
      v71 = 0;
      v56 = v55;
      v57 = SdkData_e88448[0];
      if ((AMediaFormat_getInt64_plt(v55, *(_QWORD*)SdkData_e88448[0], &v71) &
           1) == 0) {
        AMediaFormat_getInt64_plt(v56, *(_QWORD*)v57, &v71);
        return 4294957295LL;
      }
      v70 = 0;
      v58 = SdkData_e88470[0];
      if ((AMediaFormat_getInt32_plt(v56, *(_QWORD*)SdkData_e88470[0], &v70) &
           1) == 0) {
        AMediaFormat_getInt32_plt(v56, *(_QWORD*)v58, &v70);
        return 4294957295LL;
      }
      v59 = (*(__int64 (**)(__int64*))(*v72 + 64))(v72);
      AMediaFormat_setInt64_plt(v59, *(_QWORD*)v57, v71);
      AMediaFormat_setInt32_plt(v59, *(_QWORD*)v58, v70);
      v60 = (*(__int64 (**)(__int64*))(*v72 + 24))(v72);
      v61 = *(_QWORD*)(a1 + 96);
      if (v61 <= v31) {
        v65 = v60;
        v66 = 0;
        v62 = 0;
        while (1) {
          v67 = 0;
          if (v61 > 2) {
            if (v61 == 3) {
              v67 =
                  ((unsigned __int64)*(unsigned __int8*)(v28 + v62) << 16) |
                  ((unsigned __int64)*(unsigned __int8*)(v28 + v62 + 1) << 8) |
                  *(unsigned __int8*)(v28 + v62 + 2);
            }
            else if (v61 == 4) {
              v67 = (unsigned int)nandroid_U32_AT_plt(v28 + v62);
            }
          }
          else if (v61 == 1) {
            v67 = *(unsigned __int8*)(v28 + v62);
          }
          else if (v61 == 2) {
            v67 = (unsigned __int16)nandroid_U16_AT_plt(v28 + v62);
          }
          v68 = *(_QWORD*)(a1 + 96) + v62;
          if (v68 + v67 <= v68) {
            goto LABEL_63;
          }
          if (v68 + v67 <= v31) {
            *(_DWORD*)(v65 + v66) = 0x1000000;
            if (v23 != v72) {
              memcpy_plt(v65 + v66 + 4, v28 + v62 + *(_QWORD*)(a1 + 96), v67);
            }
            v66 += v67 + 4;
            v61 = *(_QWORD*)(a1 + 96);
            v62 += v67 + v61;
            if (v62 + v61 <= v31) {
              continue;
            }
          }
          goto LABEL_72;
        }
      }
      v62 = 0;
    LABEL_72:
      if (v62 < v31) {
      LABEL_63:
        (*(void (**)(__int64*))(*v23 + 16))(v23);
        return 4294957295LL;
      }
      v63 = v72;
      if (v23 != v72) {
        (*(void (**)(__int64*))(*v23 + 16))(v23);
        v63 = v72;
      }
      if ((v6 & 0x8000000000000000LL) == 0) {
        v64 = X8CALL_X0(_QWORD*,
                        (*(__attribute__((swiftcall)) void (**)(
                            PSEUDO_X8, __int64*))(*v63 + 64))((void*)v63, v63));
        AMediaFormat_setInt64_plt(v64, *(_QWORD*)SdkData_e88650[0], v6);
        v63 = v72;
      }
      *a2 = v63;
      return 0;
    }
  }
  return result;
}

__int64 nandroid_MatroskaExtractor_CreateSeekTable(__int64 this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((atomic_exchange((atomic_uchar* volatile)(this_ + 120), 1u) & 1) == 0) {
    v1 = this_;
    if ((*(_BYTE*)(this_ + 105) & 1) == 0) {
      v2 = mkvparser_Segment_GetCues_plt(*(_QWORD*)(this_ + 96));
      this_ = mkvparser_Segment_GetSeekHead_plt(*(_QWORD*)(v1 + 96));
      if (v2 == 0 && this_ != 0) {
        v4 = this_;
        v5 = mkvparser_SeekHead_GetCount_plt(this_);
        if (v5 == 0) {
          return mkvparser_Segment_Load_plt(*(_QWORD*)(v1 + 96));
        }
        v6 = 0;
        v7 = v5;
        while (1) {
          v8 = (_QWORD*)mkvparser_SeekHead_GetEntry_plt(v4, (unsigned int)v6);
          if (*v8 == 475249515) {
            break;
          }
          if (v7 == ++v6) {
            return mkvparser_Segment_Load_plt(*(_QWORD*)(v1 + 96));
          }
        }
        v9 = *(_QWORD*)(v1 + 96);
        v10 = v8[1];
        v12 = 0;
        v11 = 0;
        mkvparser_Segment_ParseCues_plt(v9, v10, &v11, &v12);
        this_ = mkvparser_Segment_GetCues_plt(*(_QWORD*)(v1 + 96));
        v2 = this_;
      }
      if (v2 != 0) {
        return this_;
      }
      return mkvparser_Segment_Load_plt(*(_QWORD*)(v1 + 96));
    }
  }
  return this_;
}

__int64 nandroid_MatroskaExtractor_MatroskaExtractor(__int64 a1, __int64 a2)
{
  __int64 v4;
  atomic_uchar* v5;
  void(__attribute__((noreturn)) * v6)();
  _QWORD** v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  int v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD v24[128];
  __int64 v25;
  struct {
    _QWORD v26[4];
    const char* v27;
    __int64 v28;
    __int64 v29;
  } v26_;
  __int64 v30;

  *(_QWORD*)a1 = SdkData_e88668 + 16;
  nn_os_InitializeMutex_plt(a1 + 8, 0, 0);
  nandroid_VectorImpl_VectorImpl_plt_86e620(a1 + 40, 96, 0);
  v4 = SdkData_e88670;
  *(_QWORD*)(a1 + 80) = a2;
  *(_QWORD*)(a1 + 40) = v4 + 16;
  v5 = (atomic_uchar*)SdkData_e88330;
  LOBYTE(v4) = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((v4 & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v6 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
  v8 = (_QWORD*)SdkRoutine_4c3860(16, 16, v7);
  v9 = *(_QWORD*)(a1 + 80);
  *v8 = SdkData_e88678 + 16;
  v8[1] = v9;
  *(_QWORD*)(a1 + 96) = 0;
  v10 = (__int64*)(a1 + 96);
  v30 = 0;
  *(_QWORD*)(a1 + 88) = v8;
  v11 = *(_QWORD*)(a1 + 80);
  *(_BYTE*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 106) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  v12 = ((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11) & 5) != 0 &&
        (*(unsigned int (**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 80) + 24LL))(
            *(_QWORD*)(a1 + 80), &v30) != 0;
  *(_BYTE*)(a1 + 105) = v12;
  v26_.v28 = 0;
  v26_.v29 = 0;
  v26_.v27 = nullptr;
  memset(v26_.v26, 0, sizeof(v26_.v26));
  mkvparser_EBMLHeader_EBMLHeader_plt(v26_.v26);
  v13 = *(_QWORD*)(a1 + 88);
  v25 = 0;
  if ((mkvparser_EBMLHeader_Parse_plt(v26_.v26, v13, &v25) &
       0x8000000000000000LL) == 0) {
    if (v26_.v27 != nullptr &&
        (unsigned int)strcmp_plt((void*)"webm", v26_.v27) == 0) {
      *(_BYTE*)(a1 + 106) = 1;
      if (mkvparser_Segment_CreateInstance_plt(*(_QWORD*)(a1 + 88), v25,
                                               a1 + 96) != 0) {
        return mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(v26_.v26);
      }
    }
    else if (mkvparser_Segment_CreateInstance_plt(*(_QWORD*)(a1 + 88), v25,
                                                  a1 + 96) != 0) {
      return mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(v26_.v26);
    }
    v15 = *(unsigned __int8*)(a1 + 105);
    v16 = mkvparser_Segment_ParseHeaders_plt(*(_QWORD*)(a1 + 96));
    if (v15 == 1) {
      if (v16 != 0) {
        goto LABEL_12;
      }
      v18 = *v10;
      v24[0] = 0;
      v19 = mkvparser_Segment_LoadCluster_plt(v18, &v25, v24);
      if ((v19 & (v19 >> 63)) < 0) {
        goto LABEL_12;
      }
    }
    else {
      if (v16 < 0) {
        v20 = *v10;
        if (*v10 == 0) {
        LABEL_25:
          *v10 = 0;
          return mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(v26_.v26);
        }
        mkvparser_Segment_Destroy_Segment_plt(*v10);
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) != 0) {
        LABEL_24:
          v22 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v6);
          nn_movie_detail_FreeMemory(v20, v22);
          goto LABEL_25;
        }
      LABEL_29:
        if ((unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          *(_DWORD*)v6 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        goto LABEL_24;
      }
      v21 = *v10;
      v24[0] = 0;
      if (mkvparser_Segment_LoadCluster_plt(v21, &v25, v24) < 0) {
      LABEL_12:
        memset_plt((void*)v24, nullptr, 1024);
        if (((*(__int64 (**)(_QWORD, _QWORD*, __int64))(
                 *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8LL) + 24LL))(
                 *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 8LL) + 32LL), v24,
                 1024) &
             1) == 0) {
          LOBYTE(v24[0]) = 0;
        }
        v20 = *v10;
        if (*v10 == 0) {
          goto LABEL_25;
        }
        mkvparser_Segment_Destroy_Segment_plt(*v10);
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) != 0) {
          goto LABEL_24;
        }
        goto LABEL_29;
      }
    }
    nandroid_MatroskaExtractor_addTracks_plt(a1);
  }
  return mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(v26_.v26);
}

unsigned __int64 nandroid_MatroskaExtractor_addTracks(void* this_)
{

#pragma clang fp contract(off)
  void* v1;
  unsigned __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  void(__attribute__((noreturn)) * v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v24;
  unsigned __int64 v39;
  char* v40;
  _BOOL4 v45;
  void** v46;
  unsigned __int64 v47;
  __int64 v48;
  char v49;
  char v50;
  int v51;
  unsigned __int64 v52;
  __int64 v53;
  const char* v54;
  int v55;
  __int64 v56;
  void(__attribute__((noreturn)) * v57)();
  _BOOL8 v59;
  void* v60;
  void* v61;
  void** v62;
  __int64 v63;
  __int64 v64;
  double v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v77;
  unsigned __int64 v79;
  void* v80;
  int v81;
  char v83;
  int v85;
  char v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  double v97;
  float v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  int v101;
  int v102;
  __int64 v103;
  char v106;
  char v108;
  char v110;
  int v111;
  char v112;
  void* v113;
  int v114;
  char v115;
  struct {
    void* v116[2];
    int v117;
  } v116_;
  unsigned __int64 v118;

  v1 = this_;
  result = mkvparser_Segment_GetTracks_plt(*((_QWORD*)this_ + 12));
  if (result != 0) {
    v3 = result;
    result = mkvparser_Tracks_GetTracksCount_plt(result);
    if (result != 0) {
      v4 = 0;
      v5 = 0;
      v6 = SdkData_e88438[0];
      v113 = v1;
      while (1) {
        v7 = mkvparser_Tracks_GetTrackByIndex_plt(v3, v5);
        if (v7 == 0) {
          goto LABEL_6;
        }
        v8 = v7;
        v9 = mkvparser_Track_GetCodecId_plt();
        if (v9 == 0) {
          goto LABEL_6;
        }
        v10 = (const char*)v9;
        v118 = 0;
        v11 = mkvparser_Track_GetCodecPrivate_plt(v8, &v118);
        v12 = v11;
        if (v4 != 0) {
          AMediaFormat_clear_plt(v4);
          v13 = mkvparser_Track_GetType_plt(v8);
          if (v13 == 2) {
            goto LABEL_34;
          }
        }
        else {
          v4 = AMediaFormat_new_plt(v11);
          v13 = mkvparser_Track_GetType_plt(v8);
          if (v13 == 2) {
          LABEL_34:
            if ((unsigned int)strcmp_plt((void*)"A_AAC", v10) != 0) {
              if ((unsigned int)strcmp_plt((void*)"A_VORBIS", v10) == 0) {
                AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                           *(_QWORD*)SdkData_e88510[0]);
                v45 = nandroid_addVorbisCodecInfo_plt(v4, v12, v118) == 0;
                goto LABEL_73;
              }
              if ((unsigned int)strcmp_plt((void*)"A_OPUS", v10) == 0) {
                AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                           *(_QWORD*)SdkData_e886d0[0]);
                AMediaFormat_setBuffer_plt(v4, *(_QWORD*)SdkData_e88358[0], v12,
                                           v118);
                v116_.v116[0] = (void*)mkvparser_Track_GetCodecDelay_plt(v8);
                AMediaFormat_setBuffer_plt(v4, *(_QWORD*)SdkData_e88360[0],
                                           v116_.v116, 8);
                *((_QWORD*)v1 + 14) = mkvparser_Track_GetSeekPreRoll_plt(v8);
                AMediaFormat_setBuffer_plt(v4, *(_QWORD*)SdkData_e88368[0],
                                           (char*)v1 + 112, 8);
                goto LABEL_72;
              }
              if ((unsigned int)strcmp_plt((void*)"A_MPEG/L3", v10) != 0) {
                if ((unsigned int)strcmp_plt((void*)"A_MPEG/L2", v10) != 0) {
                  if ((unsigned int)strcmp_plt((void*)"A_PCM/INT/LIT", v10) ==
                          0 ||
                      (unsigned int)strcmp_plt((void*)"A_PCM/INT/BIG", v10) ==
                          0) {
                    AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                               *(_QWORD*)SdkData_e88618[0]);
                    v59 = (unsigned int)strcmp_plt((void*)"A_PCM/INT/BIG",
                                                   v10) == 0;
                    AMediaFormat_setInt32_plt(v4, *(_QWORD*)SdkData_e88660[0],
                                              v59);
                    goto LABEL_72;
                  }
                  if ((unsigned int)strcmp_plt((void*)"A_MS/ACM", v10) != 0) {
                    goto LABEL_6;
                  }
                  if (v12 == 0) {
                    goto LABEL_6;
                  }
                  v39 = v118;
                  if (v118 < 0x12) {
                    goto LABEL_6;
                  }
                  v40 = MatroskaExtractor_4e6150(*(_WORD*)v12);
                  if ((unsigned int)strncasecmp_plt("audio/", v40, 6) != 0 ||
                      (MatroskaExtractor_4e61f0_alt1((void*)v40, v39) & 1) ==
                          0) {
                    goto LABEL_6;
                  }
                  AMediaFormat_setString_plt(v4, *(_QWORD*)v6, v40);
                  if ((unsigned int)strcmp_plt(
                          (void*)v40, *(const char**)SdkData_e886b0[0]) != 0) {
                    if ((unsigned int)strcmp_plt(
                            (void*)v40, *(const char**)SdkData_e886b8[0]) ==
                            0 ||
                        (unsigned int)strcmp_plt(
                            (void*)v40, *(const char**)SdkData_e886c0[0]) ==
                            0) {
                      v45 = true;
                      v46 = v116_.v116;
                      v47 = 4;
                      v48 = v4;
                      LODWORD(v116_.v116[0]) = *(unsigned __int16*)(v12 + 12);
                      goto LABEL_54;
                    }
                  LABEL_72:
                    v45 = true;
                  LABEL_73:
                    v64 = *(_QWORD*)SdkData_e88498[0];
                    v65 = mkvparser_AudioTrack_GetSamplingRate_plt(v8);
                    AMediaFormat_setInt32_plt(v4, v64, (unsigned int)(int)v65);
                    v66 = *(_QWORD*)SdkData_e88490[0];
                    v67 = mkvparser_AudioTrack_GetChannels_plt(v8);
                    AMediaFormat_setInt32_plt(v4, v66, v67);
                    v68 = *(_QWORD*)SdkData_e88658[0];
                    v69 = mkvparser_AudioTrack_GetBitDepth_plt(v8);
                    AMediaFormat_setInt32_plt(v4, v68, v69);
                    v70 = -1;
                    v115 = 0;
                    v71 = mkvparser_Track_GetLanguage_plt(v8);
                    if (v71 != 0) {
                      goto LABEL_74;
                    }
                    goto LABEL_75;
                  }
                  v47 = v118;
                LABEL_53:
                  v45 = true;
                  v48 = v4;
                  v46 = (void**)v12;
                LABEL_54:
                  MatroskaExtractor_4e54e0(v48, 1, (__int64)v46, v47);
                  goto LABEL_73;
                }
                v56 = *(_QWORD*)v6;
                v57 = SdkData_e886e8[0];
              }
              else {
                v56 = *(_QWORD*)v6;
                v57 = SdkData_e88610[0];
              }
              AMediaFormat_setString_plt(v4, v56, *(_QWORD*)v57);
              goto LABEL_72;
            }
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                       *(_QWORD*)SdkData_e88608[0]);
            v47 = v118;
            if (v118 < 2) {
              goto LABEL_6;
            }
            goto LABEL_53;
          }
        }
        if (v13 != 1) {
          goto LABEL_6;
        }
        if ((unsigned int)strcmp_plt((void*)"V_MPEG4/ISO/AVC", v10) == 0) {
          break;
        }
        if ((unsigned int)strcmp_plt((void*)"V_MPEGH/ISO/HEVC", v10) == 0) {
          AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                     *(_QWORD*)SdkData_e88600[0]);
          if (v118 == 0) {
            goto LABEL_6;
          }
          AMediaFormat_setBuffer_plt(v4, *(_QWORD*)SdkData_e886c8[0], v12,
                                     v118);
          if (v118 < 0x16) {
            goto LABEL_97;
          }
          v49 = *(_BYTE*)(v12 + 21);
          goto LABEL_58;
        }
        if ((unsigned int)strcmp_plt((void*)"V_MPEG4/ISO/ASP", v10) != 0) {
          if ((unsigned int)strcmp_plt((void*)"V_VP8", v10) == 0) {
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                       *(_QWORD*)SdkData_e886d8[0]);
            v53 = v118;
            if (v118 != 0) {
              goto LABEL_95;
            }
            v54 = "video/x-vnd.on2.vp8";
            v55 = 3698806;
          LABEL_69:
            v116_.v117 = v55;
            v60 = *(void**)v54;
            v61 = *((void**)v54 + 1);
            v62 = v116_.v116;
            v53 = 20;
            v63 = v4;
            v116_.v116[0] = v60;
            v116_.v116[1] = v61;
            goto LABEL_96;
          }
          if ((unsigned int)strcmp_plt((void*)"V_VP9", v10) == 0) {
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                       *(_QWORD*)SdkData_e886e0[0]);
            v53 = v118;
            if (v118 != 0) {
              goto LABEL_95;
            }
            v54 = "video/x-vnd.on2.vp9";
            v55 = 3764342;
            goto LABEL_69;
          }
          if ((unsigned int)strcmp_plt((void*)"V_AV1", v10) == 0) {
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                       *(_QWORD*)SdkData_e886f0[0]);
            v53 = v118;
            if (v118 == 0) {
              goto LABEL_97;
            }
          LABEL_95:
            v63 = v4;
            v62 = (void**)v12;
          LABEL_96:
            AMediaFormat_setBuffer_plt(v63, *(_QWORD*)SdkData_e88358[0], v62,
                                       v53);
            goto LABEL_97;
          }
          if ((unsigned int)strcmp_plt((void*)"V_MPEG2", v10) != 0 &&
              (unsigned int)strcmp_plt((void*)"V_MPEG1", v10) != 0) {
            if ((unsigned int)strcmp_plt((void*)"V_MJPEG", v10) == 0) {
              AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                         *(_QWORD*)SdkData_e886f8[0]);
              goto LABEL_97;
            }
            if ((unsigned int)strcmp_plt((void*)"V_MS/VFW/FOURCC", v10) != 0) {
              goto LABEL_6;
            }
            if (v12 == 0) {
              goto LABEL_6;
            }
            if (v118 < 0x14) {
              goto LABEL_6;
            }
            v24 = MatroskaExtractor_4e5f50(bswap32(*(_DWORD*)(v12 + 16)));
            if ((unsigned int)strncasecmp_plt("video/", v24, 6) != 0) {
              goto LABEL_6;
            }
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6, v24);
            if ((unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e885f8[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e88680[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e88688[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e88690[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e88698[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e886a0[0]) != 0 &&
                (unsigned int)strcmp_plt(
                    (void*)v24, *(const char**)SdkData_e886a8[0]) != 0) {
              goto LABEL_5;
            }
          }
          else {
            AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                       *(_QWORD*)SdkData_e886a0[0]);
            if (v12 != 0) {
              v52 = v118;
            LABEL_61:
              MatroskaExtractor_4e54e0(v4, 0, v12, v52);
            LABEL_97:
              v51 = -1;
              v50 = 0;
              goto LABEL_98;
            }
          }
        }
        else {
          AMediaFormat_setString_plt(v4, *(_QWORD*)v6,
                                     *(_QWORD*)SdkData_e88680[0]);
          v52 = v118;
          if (v118 != 0) {
            goto LABEL_61;
          }
        }
        v51 = -1;
        v50 = 1;
      LABEL_98:
        v114 = v51;
        v88 = mkvparser_VideoTrack_GetWidth_plt(v8);
        v89 = mkvparser_VideoTrack_GetHeight_plt(v8);
        if (v88 - 0x80000000 < 0xFFFFFFFF80000001LL) {
          goto LABEL_5;
        }
        v90 = v89;
        if ((unsigned __int64)(v89 - 0x80000000LL) < 0xFFFFFFFF80000001LL) {
          goto LABEL_5;
        }
        v115 = v50;
        AMediaFormat_setInt32_plt(v4, *(_QWORD*)SdkData_e884c0[0],
                                  (unsigned int)v88);
        AMediaFormat_setInt32_plt(v4, *(_QWORD*)SdkData_e884b8[0],
                                  (unsigned int)v90);
        v91 = mkvparser_VideoTrack_GetDisplayUnit_plt(v8);
        v92 = mkvparser_VideoTrack_GetDisplayWidth_plt(v8);
        v93 = mkvparser_VideoTrack_GetDisplayHeight_plt(v8);
        if (v92 - 1 <= 0x7FFFFFFE) {
          LODWORD(v94) = v93;
          if (v93 - 1 <= 0x7FFFFFFE) {
            if ((unsigned __int64)(v91 - 1) >= 3) {
              if (v91 == 0) {
                goto LABEL_112;
              }
            }
            else {
              v95 = v92 * v90 / v93;
              if (v88 > v95) {
                v95 = v88;
              }
              if (v90 <= v93 * v88 / v92) {
                v94 = v93 * v88 / v92;
              }
              else {
                v94 = v90;
              }
              if (v95 >> 31 == 0 && v94 >> 31 == 0) {
                LODWORD(v92) = v95;
              LABEL_112:
                AMediaFormat_setInt32_plt(v4, *(_QWORD*)SdkData_e884e8[0],
                                          (unsigned int)v92);
                AMediaFormat_setInt32_plt(v4, *(_QWORD*)SdkData_e884e0[0],
                                          (unsigned int)v94);
              }
            }
          }
        }
        v96 = mkvparser_Track_GetDefaultDuration_plt(v8);
        v1 = v113;
        if (v96 == 0 ||
            (v97 = 0x1.dcd6500000000p+29 / (double)v96) == 0x0.0p+0) {
          v97 = mkvparser_VideoTrack_GetFrameRate_plt(v8);
        }
        v98 = v97;
        AMediaFormat_setFloat_plt(v4, *(_QWORD*)SdkData_e88440[0], v98);
        if (v88 <= v90) {
          v99 = v90;
        }
        else {
          v99 = v88;
        }
        v100 = v99 >> 6;
        if (v100 <= 0x40) {
          v101 = 2;
        }
        else {
          v101 = 4;
        }
        if (v100 > 0x82) {
          v101 = 6;
        }
        if (v100 <= 0x106) {
          v102 = v101;
        }
        else {
          v102 = 8;
        }
        v103 = AMediaFormat_setInt32_plt(
            v4, *(_QWORD*)SdkData_e88478[0],
            (unsigned int)((int)(((v90 * v88) >> 1) + v90 * v88) / v102));
        nandroid_MatroskaExtractor_getColorInformation_plt(v103, v8, v4);
        v45 = true;
        v6 = SdkData_e88438[0];
        v70 = v114;
        v71 = mkvparser_Track_GetLanguage_plt(v8);
        if (v71 != 0) {
        LABEL_74:
          LODWORD(v116_.v116[0]) = 0;
          strncpy_plt(v116_.v116, v71, 3);
          BYTE3(v116_.v116[0]) = 0;
          AMediaFormat_setString_plt(v4, *(_QWORD*)SdkData_e88458[0],
                                     v116_.v116);
        }
      LABEL_75:
        if (!v45) {
          goto LABEL_6;
        }
        v72 = mkvparser_Segment_GetDuration_plt(*((_QWORD*)v1 + 12));
        AMediaFormat_setInt64_plt(v4, *(_QWORD*)SdkData_e88430[0],
                                  (v72 + 500) / 1000);
        v73 = *(_QWORD*)v6;
        v116_.v116[0] = (void*)&SdkData_bbbd5c;
        if ((AMediaFormat_getString_plt(v4, v73, v116_.v116) & 1) == 0) {
          goto LABEL_6;
        }
        nandroid_VectorImpl_push_plt_86e780((char*)v1 + 40);
        v74 = *((_QWORD*)v1 + 7) - 1LL;
        v75 = nandroid_VectorImpl_editItemLocation_plt((char*)v1 + 40, v74);
        nandroid_MatroskaExtractor_initTrackInfo_plt(v1, v8, v4, v75);
        *(_DWORD*)(v75 + 88) = v70;
        v77 = strcmp_plt((void*)"V_MPEG4/ISO/AVC", v10);
        v79 = v118;
        if (v77 == 0 && v118 == 0) {
          goto LABEL_82;
        }
        v80 = v116_.v116[0];
        v81 = strcmp_plt(v116_.v116[0], *(const char**)SdkData_e885f8[0]);
        v83 = v115 ^ 1;
        if (v81 != 0) {
          v83 = 1;
        }
        if ((v83 & 1) != 0) {
          if ((unsigned int)strcmp_plt((void*)"V_MPEG2", v10) == 0 &&
              v79 == 0) {
            goto LABEL_89;
          }
          v85 = strcmp_plt(v80, *(const char**)SdkData_e886a0[0]);
          v87 = v115 ^ 1;
          if (v85 != 0) {
            v87 = 1;
          }
          if ((v87 & 1) != 0) {
            if ((unsigned int)strcmp_plt((void*)"V_MPEG4/ISO/ASP", v10) != 0 ||
                v79 != 0) {
              v106 = (unsigned int)strcmp_plt(
                         v80, *(const char**)SdkData_e88680[0]) != 0
                         ? 0
                         : v115;
              if ((v106 & 1) == 0) {
                v108 = (unsigned int)strcmp_plt(
                           v80, *(const char**)SdkData_e88688[0]) != 0
                           ? 0
                           : v115;
                if ((v108 & 1) == 0) {
                  v110 = (unsigned int)strcmp_plt(
                             v80, *(const char**)SdkData_e88690[0]) != 0
                             ? 0
                             : v115;
                  if ((v110 & 1) == 0) {
                    v111 = strcmp_plt(v80, *(const char**)SdkData_e88698[0]);
                    v112 = v115 ^ 1;
                    if (v111 != 0) {
                      v112 = 1;
                    }
                    if ((v112 & 1) != 0) {
                      goto LABEL_83;
                    }
                  }
                }
              }
            }
            if ((unsigned int)nandroid_MatroskaExtractor_synthesizeMPEG4_plt(
                    v1, v75, v74) == 0) {
            LABEL_83:
              v4 = 0;
              goto LABEL_5;
            }
          }
          else {
          LABEL_89:
            if ((unsigned int)nandroid_MatroskaExtractor_synthesizeMPEG2_plt(
                    v1, v75, v74) == 0) {
              goto LABEL_83;
            }
          }
        }
        else {
        LABEL_82:
          if ((unsigned int)nandroid_MatroskaExtractor_synthesizeAVCC_plt(
                  v1, v75, v74) == 0) {
            goto LABEL_83;
          }
        }
        nandroid_VectorImpl_pop_plt((char*)v1 + 40);
      LABEL_5:
        v6 = SdkData_e88438[0];
      LABEL_6:
        ++v5;
        result = mkvparser_Tracks_GetTracksCount_plt(v3);
        if (v5 >= result) {
          if (v4 != 0) {
            return AMediaFormat_delete_plt(v4);
          }
          return result;
        }
      }
      AMediaFormat_setString_plt(v4, *(_QWORD*)v6, *(_QWORD*)SdkData_e885f8[0]);
      AMediaFormat_setBuffer_plt(v4, *(_QWORD*)SdkData_e88370[0], v12, v118);
      if (v118 < 5) {
        goto LABEL_97;
      }
      v49 = *(_BYTE*)(v12 + 4);
    LABEL_58:
      v50 = 0;
      v51 = (v49 & 3) + 1;
      goto LABEL_98;
    }
  }
  return result;
}

void MatroskaExtractor_4e54e0(__int64 a1, char a2, __int64 a3,
                              unsigned __int64 a4)
{
  unsigned __int64 v4;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  _BYTE* v22;
  void* v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  _DWORD* v27;
  unsigned int v28;
  _BYTE* v29;
  char* v30;
  _BYTE* v31;
  __int64 v32;
  char v33;
  __int64 v34;
  unsigned int v35;
  _BYTE* v36;
  int v37;
  __int64 v38;
  _BYTE* v39;
  __int64 v40;

  v4 = a4 >> 21;
  if (a4 <= 0x7F) {
    v7 = 15;
  }
  else {
    v7 = 16;
  }
  if (a4 >> 14 != 0) {
    v8 = 17;
  }
  else {
    v8 = v7;
  }
  if (v4 != 0) {
    v9 = 18;
  }
  else {
    v9 = v8;
  }
  v10 = v9 + a4;
  v11 = (unsigned int)(v9 + a4) >> 14;
  v12 = (unsigned int)(v9 + a4) >> 21;
  if ((unsigned int)(v9 + a4) <= 0x7F) {
    v13 = 5;
  }
  else {
    v13 = 6;
  }
  if (v11 != 0) {
    v14 = 7;
  }
  else {
    v14 = v13;
  }
  if (v12 != 0) {
    v15 = 8;
  }
  else {
    v15 = v14;
  }
  v16 = v15 + v10;
  v17 = (v15 + v10) >> 14;
  v18 = (v15 + v10) >> 21;
  if (v15 + v10 <= 0x7F) {
    v19 = 2;
  }
  else {
    v19 = 3;
  }
  if (v17 != 0) {
    v20 = 4;
  }
  else {
    v20 = v19;
  }
  if (v18 != 0) {
    v21 = 5;
  }
  else {
    v21 = v20;
  }
  v22 = (_BYTE*)SdkRoutine_86e8b0((int)(v21 + v16));
  v23 = v22;
  *v22 = 3;
  if (v18 != 0) {
    v24 = 4;
  }
  else {
    if (v16 < 0x4000) {
      v26 = 1;
      v24 = 2;
      if (v16 < 0x80) {
        v25 = 2;
      }
      else {
        v25 = 3;
      }
      v27 = &v22[v25];
      v22[v25 - 1] = v16 & 0x7F;
      if (v16 < 0x80) {
        goto LABEL_37;
      }
      goto LABEL_33;
    }
    v24 = 3;
  }
  v25 = v24 + 1LL;
  v26 = v24 - 1;
  v27 = &v22[v25];
  v22[v25 - 1] = v16 & 0x7F;
LABEL_33:
  *((_BYTE*)v27 - 2) = (v16 >> 7) | 0x80;
  if (v26 != 1) {
    *((_BYTE*)v27 - 3) = v17 | 0x80;
    if (v26 != 2) {
      *((_BYTE*)v27 - 4) = v18 | 0x80;
    }
  }
  v26 = v24;
LABEL_37:
  *v27 = 0x4000000;
  if (v12 != 0) {
    v28 = 4;
  }
  else {
    if (v10 < 0x4000) {
      v31 = &v22[v25];
      if (v10 < 0x80) {
        v32 = 1;
      }
      else {
        v32 = 2;
      }
      v30 = &v31[v32 + 4];
      if (v10 >= 0x80) {
        v28 = 2;
        *(v30 - 2) = (v10 >> 7) | 0x80;
      }
      else {
        v28 = 1;
      }
      goto LABEL_55;
    }
    v28 = 3;
  }
  v29 = &v22[v25 + v28];
  v30 = v29 + 4;
  v29[3] = v10 & 0x7F;
  v29[2] = (v10 >> 7) | 0x80;
  v29[1] = v11 | 0x80;
  if (v28 != 3) {
    *v29 = v12 | 0x80;
  }
LABEL_55:
  if ((a2 & 1) != 0) {
    v33 = 64;
  }
  else {
    v33 = 32;
  }
  *v30 = v33;
  v34 = v28 + v26;
  if (v4 != 0) {
    v35 = 4;
  LABEL_62:
    v36 = &v22[v34 + v35];
    v37 = v35 - 1;
    v38 = (__int64)(v36 + 19);
  LABEL_63:
    *(_BYTE*)(v38 - 2) = ((unsigned int)a4 >> 7) | 0x80;
    if (v37 != 1) {
      *(_BYTE*)(v38 - 3) = ((unsigned int)a4 >> 14) | 0x80;
      if (v37 != 2) {
        *(_BYTE*)(v38 - 4) = ((unsigned int)a4 >> 21) | 0x80;
      }
    }
    goto LABEL_70;
  }
  if (a4 >= 0x4000) {
    v35 = 3;
    goto LABEL_62;
  }
  v37 = 1;
  v39 = &v22[v34];
  if (a4 < 0x80) {
    v40 = 1;
  }
  else {
    v40 = 2;
  }
  v38 = (__int64)&v39[v40 + 19];
  if (a4 >= 0x80) {
    goto LABEL_63;
  }
LABEL_70:
  memcpy_plt(v38, a3, a4);
  AMediaFormat_setBuffer_plt(a1, *(_QWORD*)SdkData_e88358[0], a3, a4);
  SdkRoutine_85c8b0(v23);
}

char* MatroskaExtractor_4e5f50(unsigned int a1)
{
  int v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  int v5;
  void(__attribute__((noreturn)) * v6)();
  struct {
    int v8;
    char v9;
  } v8_;

  v2 = tolower_plt(HIBYTE(a1));
  v3 = tolower_plt(BYTE2(a1));
  v4 = tolower_plt(BYTE1(a1));
  v5 = (v2 << 24) | (v3 << 16) | (v4 << 8) |
       (unsigned __int8)tolower_plt((unsigned __int8)a1);
  if (v5 > 1835692134) {
    if (v5 > 1836085350) {
      if (v5 != 1836085351) {
        if (v5 != 1932670515) {
          if (v5 == 2021026148) {
            v6 = SdkData_e88688[0];
            return *(char**)v6;
          }
          goto LABEL_26;
        }
      LABEL_23:
        v6 = SdkData_e886a8[0];
        return *(char**)v6;
      }
    }
    else if (v5 != 1835692135) {
      if (v5 == 1836070006) {
        v6 = SdkData_e88680[0];
        return *(char**)v6;
      }
      if (v5 == 1836082994) {
        v6 = SdkData_e886a0[0];
        return *(char**)v6;
      }
      goto LABEL_26;
    }
    v6 = SdkData_e886f8[0];
    return *(char**)v6;
  }
  if (v5 <= 1685599535) {
    if ((unsigned int)(v5 - 1684633139) < 2) {
      v6 = SdkData_e88698[0];
      return *(char**)v6;
    }
    if (v5 != 1635148593) {
      if (v5 != 1684633208) {
        goto LABEL_26;
      }
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  switch (v5) {
  case 1685599536:
  LABEL_21:
    v6 = SdkData_e88690[0];
    return *(char**)v6;
  case 1748121139:
    goto LABEL_23;
  case 1748121140:
  LABEL_15:
    v6 = SdkData_e885f8[0];
    return *(char**)v6;
  default:
    break;
  }
LABEL_26:
  v8_.v9 = 0;
  v8_.v8 = 0;
  nandroid_MakeFourCCString_plt(a1, &v8_.v8);
  return &SdkData_bbbd5c;
}

char* MatroskaExtractor_4e6150(unsigned __int16 a1)
{
  int v1;
  char* result;
  void(__attribute__((noreturn)) * v3)();

  v1 = a1;
  result = &SdkData_bbbd5c;
  if (v1 > 79) {
    if ((unsigned int)(v1 - 352) < 2) {
      v3 = SdkData_e886b0[0];
    }
    else if (v1 == 85) {
      v3 = SdkData_e88610[0];
    }
    else {
      if (v1 != 80) {
        return result;
      }
      v3 = SdkData_e886e8[0];
    }
  }
  else {
    switch (v1) {
    case 1:
      v3 = SdkData_e88618[0];
      break;
    case 2:
      v3 = SdkData_e886b8[0];
      break;
    case 17:
      v3 = SdkData_e886c0[0];
      break;
    default:
      return result;
    }
  }
  return *(char**)v3;
}

__int64 MatroskaExtractor_4e61f0(void* a1, unsigned __int64 a2, const char* a3)
{
  __int64 result;
  const char* v6;
  const char* v7;
  const char* v8;
  int v9;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = strcmp_plt_alt1(a1, *(const char**)SdkData_e886b8[0], a3),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (a2 > 0x31 || (_DWORD)result != 0) {
    result = strcmp_plt_alt1(a1, *(const char**)SdkData_e886c0[0], v6),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (a2 > 0x13 || (_DWORD)result != 0) {
      result = strcmp_plt_alt1(a1, *(const char**)SdkData_e886b0[0], v7),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (a2 > 0x1B || (_DWORD)result != 0) {
        v9 = strcmp_plt_alt1(a1, *(const char**)SdkData_e88610[0], v8),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        return a2 > 0x1D || v9 != 0;
      }
    }
  }
  return result;
}

__int64 (*nandroid_MatroskaExtractor_Sniff(__int64 a1, _DWORD* a2))()
{
  __int64 (*v3)();
  _QWORD v5[2];
  _QWORD v6[7];
  _QWORD v7[2];
  __int64 v8;

  memset(v6, 0, sizeof(v6));
  v5[0] = SdkData_e88720 + 16;
  v5[1] = a1;
  v7[0] = SdkData_e88678 + 16;
  v7[1] = v5;
  mkvparser_EBMLHeader_EBMLHeader_plt(v6);
  v8 = 0;
  if (mkvparser_EBMLHeader_Parse_plt(v6, v7, &v8) < 0) {
    v3 = nullptr;
  }
  else {
    *a2 = 1058642330;
    v3 = MatroskaExtractor_4e6840_alt1;
  }
  mkvparser_EBMLHeader_Destroy_EBMLHeader_plt(v6);
  return v3;
}

_QWORD* MatroskaExtractor_4e6500(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD** v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  bool v10;

  v1 = result[1];
  *result = SdkData_e88728 + 16;
  if (v1 != 0) {
    v2 = *(_QWORD**)(v1 + 8);
    v3 = (_QWORD**)(v1 + 16);
    if (v2 != (_QWORD*)(v1 + 16)) {
      do {
        v7 = v2[5];
        if (v7 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
        }
        v8 = (_QWORD*)v2[1];
        if (v8 != nullptr) {
          do {
            v9 = v8;
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
        else {
          do {
            v9 = (_QWORD*)v2[2];
            v10 = v2 == (_QWORD*)*v9;
            v2 = v9;
          } while (!v10);
        }
        v2 = v9;
      } while (v9 != v3);
    }
    nn_movie_4c5aa0(v1 + 8, *v3);
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
    return (_QWORD*)nn_movie_detail_FreeMemory(v1, v6);
  }
  return result;
}

__int64 MatroskaExtractor_4e6640(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

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

__int64 MatroskaExtractor_4e66d0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 8LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e66e0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 16LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e66f0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 24LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e6700(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 32LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e6710(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 40LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e6720(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 48LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e6730(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 56LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 MatroskaExtractor_4e6740(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if (a3 == 0) {
    return 0;
  }
  if ((*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
          **(_QWORD**)(a1 + 8) + 16LL))(*(_QWORD*)(a1 + 8), a2, a4, a3) >= 1) {
    return 0;
  }
  return 0xFFFFFFFFLL;
}

__int64 MatroskaExtractor_4e6790(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v8;

  v3 = *(_QWORD*)(a1 + 8);
  v8 = 0;
  if ((*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v3 + 24LL))(v3, &v8) !=
      0) {
    if (a2 != nullptr) {
      *a2 = -1;
    }
    if (a3 != nullptr) {
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    LABEL_10:
      *a3 = v6;
    }
  }
  else {
    if (a2 != nullptr) {
      *a2 = v8;
    }
    if (a3 != nullptr) {
      v6 = v8;
      goto LABEL_10;
    }
  }
  return 0;
}

__int64 MatroskaExtractor_4e6810(__int64 a1)
{
  return (**(__int64 (***)(_QWORD))(a1 + 8))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64 MatroskaExtractor_4e6820(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 8LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64 MatroskaExtractor_4e6830(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 16LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64* MatroskaExtractor_4e6840(__int64 a1)
{
  atomic_uchar* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  __int64 v6;
  _QWORD** v7;
  _QWORD* v8;
  __int64* result;

  v2 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v6 = SdkRoutine_4c3860(16, 128, v5);
  if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v7 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v8 = (_QWORD*)SdkRoutine_4c3860(16, 16, v7);
  *v8 = SdkData_e88720 + 16;
  v8[1] = a1;
  nandroid_MatroskaExtractor_MatroskaExtractor_plt(v6, v8);
  result = (__int64*)MovieMalloc_plt(72);
  *result = v6;
  result[1] = (__int64)MatroskaExtractor_4e6990_alt1;
  result[2] = (__int64)SdkRoutine_4e69b0;
  result[3] = (__int64)MatroskaExtractor_4e69c0;
  result[4] = (__int64)SdkRoutine_4e6d10;
  result[5] = (__int64)SdkRoutine_4e6d20;
  result[6] = (__int64)SdkRoutine_4e6d30;
  result[7] = (__int64)SdkRoutine_4e6d40;
  result[8] = (__int64)SdkRoutine_4e6d50;
  return result;
}

__int64 MatroskaExtractor_4e6990(__int64 result)
{
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 MatroskaExtractor_4e6a40(__int64 result)
{
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 MatroskaExtractor_4e6a60(__int64 a1, __int64 a2)
{
  char v3;

  return MatroskaExtractor_4e6aa0_alt1(&v3, a1, a2);
}

__int64 MatroskaExtractor_4e6aa0(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  atomic_uchar* v6;
  void(__attribute__((noreturn)) * v7)();
  _QWORD* v8;
  _QWORD** v9;
  _QWORD* v10;
  _QWORD** v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  bool v18;

  v3 = a2[1];
  v6 = (atomic_uchar*)SdkData_e88330;
  v7 = SdkData_e88338[0];
  if (v3 != 0) {
    v8 = *(_QWORD**)(v3 + 8);
    v9 = (_QWORD**)(v3 + 16);
    if (v8 != (_QWORD*)(v3 + 16)) {
      do {
        v15 = v8[5];
        if (v15 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
        }
        v16 = (_QWORD*)v8[1];
        if (v16 != nullptr) {
          do {
            v17 = v16;
            v16 = (_QWORD*)*v16;
          } while (v16 != nullptr);
        }
        else {
          do {
            v17 = (_QWORD*)v8[2];
            v18 = v8 == (_QWORD*)*v17;
            v8 = v17;
          } while (!v18);
        }
        v8 = v17;
      } while (v17 != v9);
    }
    nn_movie_4c5aa0(v3 + 8, *v9);
    if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    nn_movie_detail_FreeMemory(v3, v10);
  }
  if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v7 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v11 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
  v12 = (_QWORD*)SdkRoutine_4c3860(16, 40, v11);
  if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v7 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v13 = nn_os_GetTlsValue_plt(*(unsigned int*)v7);
  v12[2] = 0;
  v12[3] = v13;
  v12[4] = 0;
  *v12 = a3;
  v12[1] = v12 + 2;
  a2[1] = v12;
  return (*(__int64 (**)(_QWORD*))(*a2 + 16LL))(a2);
}

__int64 MatroskaExtractor_4e6ca0(__int64* a1, _QWORD* a2, unsigned int a3,
                                 __int64 a4)
{
  __int64 v4;
  __int64 (*v6)(__int64*, __int64*, _QWORD*);
  __int64 result;
  _QWORD v9[2];
  __int64 v10;

  v4 = *a1;
  v9[1] = a4;
  v9[0] = a3;
  v6 = *(__int64 (**)(__int64*, __int64*, _QWORD*))(v4 + 40);
  v10 = 0;
  result = v6(a1, &v10, v9);
  if ((_DWORD)result == 0 && v10 != 0) {
    *a2 = *(__int64*)((char*)((__int64*)0x4LL) + v10 + 4);
  }
  return result;
}

__int64 MatroskaExtractor_4e6d60(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  MatroskaExtractor_4e0680(a1);
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

__int64 MatroskaExtractor_4e6df0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88670 + 16;
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

__int64 MatroskaExtractor_4e7290(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88730 + 16;
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
