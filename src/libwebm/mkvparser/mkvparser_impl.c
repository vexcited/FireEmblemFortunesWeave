#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MatroskaExtractor_4e6640(__int64);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d4780(__int64);
__int64 SdkRoutine_870e80(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 mkvparser_BlockGroup_BlockGroup_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD);
__int64 mkvparser_Block_Block_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Block_Destroy_Block_plt(_QWORD);
__int64 mkvparser_Block_Parse_plt(_QWORD, _QWORD);
__int64 mkvparser_Chapters_Atom_ExpandDisplaysArray_plt(void);
__int64 mkvparser_Chapters_Atom_Parse_plt(void);
__int64 mkvparser_Chapters_Destroy_Chapters_plt(_QWORD);
__int64 mkvparser_Chapters_Display_Clear_plt(_QWORD);
__int64 mkvparser_Chapters_Display_Destroy_Display_plt(_QWORD);
__int64 mkvparser_Chapters_Display_Parse_plt(void);
__int64 mkvparser_Chapters_Edition_Clear_plt(_QWORD);
__int64 mkvparser_Chapters_Edition_Destroy_Edition_plt(_QWORD);
__int64 mkvparser_Chapters_Edition_Edition_plt(_QWORD);
__int64 mkvparser_Chapters_Edition_ExpandAtomsArray_plt(void);
__int64 mkvparser_Cluster_Cluster_plt_870ea0(_QWORD);
__int64 mkvparser_Cluster_Cluster_plt_871090(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Cluster_CreateBlockGroup_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD);
__int64 mkvparser_Cluster_Create_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Cluster_Destroy_Cluster_plt(_QWORD);
__int64 mkvparser_Cluster_GetEntry_plt_871150(void);
__int64 mkvparser_Cluster_HasBlockEntries_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Cluster_Load_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Cluster_Parse_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_ContentEncoding_Destroy_ContentEncoding_plt(_QWORD);
__int64 mkvparser_CuePoint_CuePoint_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_CuePoint_Destroy_CuePoint_plt(_QWORD);
__int64 mkvparser_Cues_Cues_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Cues_Destroy_Cues_plt(_QWORD);
__int64 mkvparser_GetUIntLength_plt(_QWORD);
__int64 mkvparser_ReadID_plt(_QWORD);
__int64 mkvparser_ReadUInt_plt(_QWORD);
__int64 mkvparser_SeekHead_Destroy_SeekHead_plt(_QWORD);
__int64 mkvparser_SegmentInfo_Destroy_SegmentInfo_plt(_QWORD);
__int64 mkvparser_Segment_AppendCluster_plt(_QWORD, _QWORD);
__int64 mkvparser_Segment_DoLoadCluster_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_Segment_DoParseNext_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Segment_DoneParsing_plt(_QWORD);
__int64 mkvparser_Segment_GetNext_plt(_QWORD, _QWORD);
__int64 mkvparser_Segment_PreloadCluster_plt(_QWORD, _QWORD, _QWORD);
__int64 mkvparser_SimpleBlock_SimpleBlock_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 mkvparser_Tags_Destroy_Tags_plt(_QWORD);
__int64 mkvparser_Tags_ExpandTagsArray_plt(void);
__int64 mkvparser_Tags_SimpleTag_Clear_plt(_QWORD);
__int64 mkvparser_Tags_SimpleTag_Destroy_SimpleTag_plt(_QWORD);
__int64 mkvparser_Tags_SimpleTag_Parse_plt(void);
__int64 mkvparser_Tags_SimpleTag_SimpleTag_plt(_QWORD);
__int64 mkvparser_Tags_Tag_Clear_plt(_QWORD);
__int64 mkvparser_Tags_Tag_Destroy_Tag_plt(_QWORD);
__int64 mkvparser_Tags_Tag_ExpandSimpleTagsArray_plt(void);
__int64 mkvparser_Tags_Tag_Parse_plt(void);
__int64 mkvparser_Tags_Tag_Tag_plt(_QWORD);
__int64 mkvparser_Track_Destroy_Track_plt_871390(void);
__int64 mkvparser_Track_EOSBlock_EOSBlock_plt(_QWORD);
__int64 mkvparser_Track_Info_CopyStr_plt(_QWORD, _QWORD);
__int64 mkvparser_Track_Info_Copy_plt(_QWORD, _QWORD);
__int64 mkvparser_Track_Info_Destroy_Info_plt(_QWORD);
__int64 mkvparser_Track_Info_Info_plt(_QWORD);
__int64 mkvparser_Track_Track_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 mkvparser_Tracks_Destroy_Tracks_plt(_QWORD);
__int64 mkvparser_VideoTrack_Destroy_VideoTrack_plt(void);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88c10;
extern __int64 SdkData_e88c18;
extern __int64 SdkData_e88c20;
extern __int64 SdkData_e88c28;
extern __int64 SdkData_e88c30;
extern __int64 SdkData_e88c38;
extern __int64 SdkData_e88c40;
extern void (*SdkData_e88338[493])();
void __attribute__((noreturn)) nn_fs_10de70();
void mkvparser_Track_Info_Clear_plt(void* this_);
__int64 mkvparser_UnserializeString(__int64 (***a1)(_QWORD, __int64,
                                                    unsigned __int64, void*),
                                    __int64 a2, unsigned __int64 a3,
                                    __int64* a4);
__int64 mkvparser_SafeArrayAlloc(unsigned __int64 a1, unsigned __int64 a2);
_QWORD* mkvparser_EBMLHeader_Init(_QWORD* this_);
void mkvparser_EBMLHeader_Destroy_EBMLHeader(void* this_);
__int64 mkvparser_Segment_Segment(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5);
void mkvparser_Segment_Destroy_Segment(void* this_);
__int64 mkvparser_Segment_DoLoadCluster(void* this_, __int64* a2, __int64* a3);
__int64 mkvparser_Segment_DoLoadClusterUnknownSize(void* this_, __int64* a2,
                                                   __int64* a3);
__int64 mkvparser_Cluster_Create(void* this_, void* a2, __int64 a3);
__int64 mkvparser_Segment_ResetClusterTable(__int64 result);
__int64 mkvparser_Segment_IsInClusterTable(__int64 a1, __int64 a2);
void mkvparser_SeekHead_Destroy_SeekHead(void* this_);
__int64 mkvparser_Segment_ParseCues(void* this_, __int64 a2, __int64* a3,
                                    __int64* a4);
void mkvparser_Cues_Destroy_Cues(void* this_);
__int64* mkvparser_Cues_PreloadCuePoint(void* this_, __int64* a2, __int64 a3);
__int64 mkvparser_Segment_GetBlock(__int64 a1, __int64 a2, __int64 a3);
__int64 mkvparser_Segment_FindOrPreloadCluster(void* this_, __int64 a2,
                                               char a3);
void mkvparser_CuePoint_Destroy_CuePoint(void* this_);
char* mkvparser_Segment_GetFirst(void* this_);
__int64 mkvparser_Segment_GetLast(void* this_);
__int64 mkvparser_Segment_GetNext(void* this_, void* a2);
__int64 mkvparser_Segment_ParseNext(void* this_, void* a2, void** a3,
                                    __int64* a4, __int64* a5);
_QWORD* mkvparser_Segment_FindCluster(void* this_, __int64 a2);
__int64 mkvparser_Segment_GetDuration(void* this_);
void mkvparser_Chapters_Destroy_Chapters(void* this_);
__int64 mkvparser_Chapters_ExpandEditionsArray(__int64 a1);
__int64 mkvparser_Chapters_Atom_Clear(void* this_);
__int64 mkvparser_Chapters_Edition_ParseAtom(__int64* a1);
__int64 mkvparser_Chapters_Atom_GetStopTime(void* this_, void* a2);
__int64 mkvparser_Chapters_Display_Clear(void* this_);
__int64 mkvparser_Chapters_Atom_ParseDisplay(__int64 a1);
void mkvparser_Tags_Destroy_Tags(void* this_);
__int64 mkvparser_Tags_Tag_Clear(__int64 this_);
__int64 mkvparser_Tags_ParseTag(void* this_);
__int64 mkvparser_Tags_ExpandTagsArray(__int64 a1);
__int64 mkvparser_Tags_SimpleTag_Clear(void* this_);
__int64 mkvparser_Tags_Tag_ParseSimpleTag(__int64 a1);
__int64 mkvparser_Tags_Tag_ExpandSimpleTagsArray(__int64* a1);
void mkvparser_SegmentInfo_Destroy_SegmentInfo(void* this_);
void mkvparser_ContentEncoding_ContentCompression_Destroy_ContentCompression(
    void* this_);
void mkvparser_ContentEncoding_ContentEncryption_Destroy_ContentEncryption(
    void* this_);
__int64 mkvparser_Track_Track(void* this_, void* a2, __int64 a3, __int64 a4);
__int64 mkvparser_Track_Info_Clear(void* this_);
void mkvparser_Track_Destroy_Track_553ed0(void* this_);
__int64 mkvparser_Track_Create(void* this_, void* a2, void* a3, __int64 a4,
                               __int64* a5, void** a6);
__int64 mkvparser_Track_Info_Copy(__int64 a1, __int64 a2);
__int64 mkvparser_Track_GetFirst(void* this_, void** a2);
__int64 mkvparser_Track_GetNext(void* this_, void* a2, void** a3);
_QWORD* mkvparser_Track_EOSBlock_EOSBlock(_QWORD* this_);
_QWORD* mkvparser_BlockEntry_BlockEntry(_QWORD* this_, void* a2, __int64 a3);
__int64 mkvparser_VideoTrack_VideoTrack(void* this_, void* a2, __int64 a3,
                                        __int64 a4);
void mkvparser_VideoTrack_Destroy_VideoTrack(void* this_);
__int64 mkvparser_AudioTrack_AudioTrack(void* this_, void* a2, __int64 a3,
                                        __int64 a4);
void mkvparser_Tracks_Destroy_Tracks(void* this_);
__int64 mkvparser_Cluster_CreateBlock(void* this_, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5);
__int64 mkvparser_Cluster_Cluster_55be40(void* this_);
__int64 mkvparser_Cluster_Cluster_55bef0(void* this_, void* a2, __int64 a3,
                                         __int64 a4);
__int64 mkvparser_Cluster_GetFirstTime(void* this_);
__int64 mkvparser_Cluster_GetLastTime(void* this_);
__int64 mkvparser_Cluster_CreateBlockGroup(void* this_, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5);
__int64 mkvparser_Cluster_CreateSimpleBlock(_QWORD* a1, __int64 a2, __int64 a3,
                                            __int64 a4);
__int64 mkvparser_Cluster_AddRef(__int64 this_);
__int64 mkvparser_Cluster_DecRef(__int64 this_);
__int64 mkvparser_SimpleBlock_SimpleBlock(_QWORD* a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5);
__int64 mkvparser_BlockGroup_BlockGroup(void* this_, void* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        __int64 a7, __int64 a8, __int64 a9);
__int64 mkvparser_Block_Block(__int64 this_, __int64 a2, __int64 a3,
                              __int64 a4);
__int64 mkvparser_Block_Destroy_Block(__int64 result);
__int64 mkvparser_55d7c0(_QWORD* a1);
__int64 mkvparser_55d7e0(_QWORD* a1);
__int64 mkvparser_55d880(_QWORD* a1);
__int64 mkvparser_55d8a0(_QWORD* a1);
void mkvparser_Track_Destroy_Track_55d940(void* this_);
__int64 mkvparser_Block_Destroy_Block_plt_alt1(__int64) __asm__(
    "mkvparser_Block_Destroy_Block_plt");
__int64
nn_os_GetTlsValue_plt_alt1(unsigned int) __asm__("nn_os_GetTlsValue_plt");
int __cxa_guard_acquire_plt_alt1(__int64) __asm__("__cxa_guard_acquire_plt");
void __cxa_guard_release_plt_alt1(__int64) __asm__("__cxa_guard_release_plt");
void nn_movie_detail_FreeMemory_alt1(__int64, _DWORD*) __asm__(
    "nn_movie_detail_FreeMemory");
void mkvparser_Cluster_Destroy_Cluster(void* this_);

__int64 mkvparser_UnserializeString(__int64 (***a1)(_QWORD, __int64,
                                                    unsigned __int64, void*),
                                    __int64 a2, unsigned __int64 a3,
                                    __int64* a4)
{
  __int64 v4;
  atomic_uchar* v9;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD* v12;
  __int64 result;
  _QWORD** v14;
  void* v15;
  void* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;

  v4 = *a4;
  v9 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v11 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  nn_movie_detail_FreeMemory(v4, v12);
  *a4 = 0;
  if (a3 > 0x1312D00) {
    return -2;
  }
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v14 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  v15 = (void*)SdkRoutine_4c3860(16, a3 + 1, v14);
  if (v15 != nullptr) {
    v17 = v15;
    memset_plt(v15, nullptr, a3 + 1);
    *a4 = (__int64)v17;
    v18 = (**a1)(a1, a2, a3, v17);
    if (v18 != 0) {
      v19 = *a4;
      v20 = v18;
      if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v11 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v21 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
      nn_movie_detail_FreeMemory(v19, v21);
      *a4 = 0;
      return v20;
    }
    else {
      result = 0;
      *(_BYTE*)(*a4 + a3) = 0;
    }
  }
  else {
    *a4 = 0;
    return -2;
  }
  return result;
}

__int64 mkvparser_SafeArrayAlloc(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  void* v6;
  int v9;

  if (a1 == 0 || a2 == 0 || a2 > 0x80000000 / a1) {
    return 0;
  }
  v2 = a2 * a1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v9 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v9 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v6 = (void*)SdkRoutine_4c3860(16, v2, v5);
  if (v6 != nullptr) {
    return memset_plt(v6, nullptr, v2);
  }
  else {
    return 0;
  }
}

_QWORD* mkvparser_EBMLHeader_Init(_QWORD* this_)
{
  __int64 v1;
  _QWORD* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  v1 = *(this_ + 4);
  v2 = this_;
  *this_ = 1;
  *(this_ + 1) = 1;
  *(this_ + 2) = 4;
  *(this_ + 3) = 8;
  if (v1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v4 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v6 = __cxa_guard_acquire_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
      if (v6 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v4 = SdkData_e88338[0];
      }
    }
    v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    this_ = (_QWORD*)nn_movie_detail_FreeMemory(v1, v5);
    v2[4] = 0;
  }
  v2[5] = 1;
  v2[6] = 1;
  return this_;
}

void mkvparser_EBMLHeader_Destroy_EBMLHeader(void* this_)
{
  __int64 v1;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  v1 = *((_QWORD*)this_ + 4);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  nn_movie_detail_FreeMemory(v1, v4);
}

__int64 mkvparser_Segment_Segment(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5)
{
  __int64 result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 16) = a4;
  *(_QWORD*)(a1 + 24) = a5;
  result = mkvparser_Cluster_Cluster_plt_870ea0(a1 + 32);
  *(_QWORD*)(a1 + 160) = a4;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 240) = 8;
  return result;
}

void mkvparser_Segment_Destroy_Segment(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  __int64 v6;
  __int64 i;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;

  v1 = *((_QWORD*)this_ + 29);
  v3 = (atomic_uchar*)SdkData_e88330;
  v4 = SdkData_e88338[0];
  if (v1 != 0) {
    mkvparser_Cluster_Destroy_Cluster_plt(*((_QWORD*)this_ + 29));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v1, v5);
    *((_QWORD*)this_ + 29) = 0;
  }
  v6 = *((_QWORD*)this_ + 33);
  if (v6 >= 1) {
    for (i = 0; i < v6; ++i) {
      v9 = *((_QWORD*)this_ + 28);
      v10 = *(_QWORD*)(v9 + 8 * i);
      if (v10 != 0) {
        mkvparser_Cluster_Destroy_Cluster_plt(*(_QWORD*)(v9 + 8 * i));
        if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v3) != 0) {
          *(_DWORD*)v4 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
          __cxa_guard_release_plt(v3);
        }
        v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
        nn_movie_detail_FreeMemory(v10, v8);
        *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * i) = 0;
        v6 = *((_QWORD*)this_ + 33);
      }
    }
  }
  v11 = *((_QWORD*)this_ + 28);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  nn_movie_detail_FreeMemory(v11, v12);
  v13 = *((_QWORD*)this_ + 24);
  if (v13 != 0) {
    mkvparser_Tracks_Destroy_Tracks_plt(*((_QWORD*)this_ + 24));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v14 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v13, v14);
  }
  v15 = *((_QWORD*)this_ + 23);
  if (v15 != 0) {
    mkvparser_SegmentInfo_Destroy_SegmentInfo_plt(*((_QWORD*)this_ + 23));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v16 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v15, v16);
  }
  v17 = *((_QWORD*)this_ + 25);
  if (v17 != 0) {
    mkvparser_Cues_Destroy_Cues_plt(*((_QWORD*)this_ + 25));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v18 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v17, v18);
  }
  v19 = *((_QWORD*)this_ + 26);
  if (v19 != 0) {
    mkvparser_Chapters_Destroy_Chapters_plt(*((_QWORD*)this_ + 26));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v20 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v19, v20);
  }
  v21 = *((_QWORD*)this_ + 27);
  if (v21 != 0) {
    mkvparser_Tags_Destroy_Tags_plt(*((_QWORD*)this_ + 27));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v22 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v21, v22);
  }
  v23 = *((_QWORD*)this_ + 22);
  if (v23 != 0) {
    mkvparser_SeekHead_Destroy_SeekHead_plt(*((_QWORD*)this_ + 22));
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v24 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v23, v24);
  }
  mkvparser_Cluster_Destroy_Cluster_plt((char*)this_ + 32);
}

__int64 mkvparser_Segment_DoLoadCluster(void* this_, __int64* a2, __int64* a3)
{
  __int64 v6;
  __int64 result;
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
  __int64 (**v18)(__int64, __int64, __int64, _BYTE*);
  int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int (***v24)(_QWORD, __int64, __int64, __int64*);
  __int64 v25;
  char v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)(__int64, __int64, __int64, _BYTE*);
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _BYTE v62[4];
  __int64 v63;
  __int64 v64;

  if ((*((_QWORD*)this_ + 20) & 0x8000000000000000LL) != 0) {
    v8 = *((_QWORD*)this_ + 21);
    if (v8 == 0) {
      return -1;
    }
    result = mkvparser_Cluster_Parse_plt(v8, a2, a3);
    if (result < 0) {
      return result;
    }
    if (result == 0) {
      return 2;
    }
    v9 = *((_QWORD*)this_ + 21);
    v10 = *(_QWORD*)(v9 + 32);
    if ((v10 & 0x8000000000000000LL) == 0) {
      v11 = *(_QWORD*)(v9 + 8) + v10;
      *a2 = v11;
      *((_QWORD*)this_ + 20) = v11;
      *((_QWORD*)this_ + 21) = 0;
      return 2;
    }
    return -2;
  }
  v6 = *(_QWORD*)this_;
  v60 = 0;
  v61 = 0;
  LODWORD(result) = (*(__int64 (**)(__int64, __int64*, __int64*))(
      *(_QWORD*)v6 + 8LL))(v6, &v61, &v60);
  if ((result & 0x80000000) != 0) {
    return (int)result;
  }
  if ((v61 & 0x8000000000000000LL) == 0 && v60 > v61) {
    return -2;
  }
  v12 = *((_QWORD*)this_ + 3);
  v13 = *((_QWORD*)this_ + 20);
  if (v12 <= -1) {
    v14 = -1;
  }
  else {
    v14 = *((_QWORD*)this_ + 2) + v12;
  }
  if ((v61 & 0x8000000000000000LL) == 0 && v13 >= v61) {
    return 1;
  }
  while (1) {
    if ((v14 & 0x8000000000000000LL) == 0 && v13 >= v14) {
      return 1;
    }
    v15 = v60;
    *a2 = v13;
    if (v13 >= v15) {
      goto LABEL_94;
    }
    result = -2;
    if (v13 < 0) {
      return result;
    }
    v16 = *(_QWORD*)this_;
    if (*(_QWORD*)this_ == 0) {
      return result;
    }
    v63 = 0;
    v64 = 0;
    if (((*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v16 + 8LL))(
             v16, &v64, &v63) &
         0x80000000) != 0) {
      return -2;
    }
    v17 = v63;
    if ((v64 & 0x8000000000000000LL) == 0 && v63 > v64) {
      return -2;
    }
    *a3 = 1;
    if (v13 >= v17) {
      if (v13 != 0) {
        return -3;
      }
      v22 = *a2;
      v23 = *a2 + 1;
      if ((v14 & 0x8000000000000000LL) == 0) {
      LABEL_37:
        if (v23 > v14) {
          return -2;
        }
      }
    }
    else {
      v18 = *(__int64 (***)(__int64, __int64, __int64, _BYTE*))v16;
      v62[0] = 0;
      v19 = (*v18)(v16, v13, 1, v62);
      if (v19 != 0) {
        goto LABEL_95;
      }
      if (v62[0] == 0) {
        return -2;
      }
      v20 = *a3;
      if ((v62[0] & 0x80) == 0) {
        v21 = 128;
        do {
          v21 >>= 1;
          ++v20;
        } while (((unsigned __int8)v21 & v62[0]) == 0);
        *a3 = v20;
      }
      v22 = *a2;
      v23 = v20 + *a2;
      if ((v14 & 0x8000000000000000LL) == 0) {
        goto LABEL_37;
      }
    }
    if (v23 > v60) {
      return -3;
    }
    result = -2;
    if (v22 < 0) {
      return result;
    }
    v24 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))this_;
    if (*(_QWORD*)this_ == 0) {
      return result;
    }
    LOBYTE(v64) = 0;
    if ((**v24)(v24, v22, 1, &v64) != 0) {
      return -2;
    }
    v25 = (unsigned __int8)v64;
    if ((_BYTE)v64 == 0) {
      return -2;
    }
    if ((v64 & 0x80) != 0) {
      v27 = 1;
      v28 = (unsigned __int8)v64;
    }
    else {
      if ((unsigned __int8)v64 <= 0x3Fu) {
        if ((unsigned __int8)v64 > 0x1Fu) {
          v26 = 1;
          v27 = 3;
        }
        else {
          if ((unsigned __int8)v64 < 0x10u) {
            return -2;
          }
          v27 = 4;
          v26 = 0;
        }
      }
      else {
        v26 = 0;
        v27 = 2;
      }
      if ((**v24)(v24, v22 + 1, 1, &v64) != 0) {
        return -2;
      }
      v28 = (unsigned __int8)v64 | (unsigned __int64)(v25 << 8);
      if ((unsigned int)v25 <= 0x3F) {
        if ((**v24)(v24, v22 + 2, 1, &v64) != 0) {
          return -2;
        }
        v28 = (unsigned __int8)v64 | (v28 << 8);
        if ((v26 & 1) == 0) {
          if ((**v24)(v24, v22 + 3, 1, &v64) != 0) {
            return -2;
          }
          v28 = (unsigned __int8)v64 | (v28 << 8);
        }
      }
    }
    *a3 = v27;
    v29 = *a2 + v27;
    v30 = v60;
    *a2 = v29;
    if (v29 >= v30) {
    LABEL_94:
      *a3 = 1;
      return -3;
    }
    result = -2;
    if (v29 < 0) {
      return result;
    }
    v31 = *(_QWORD*)this_;
    if (*(_QWORD*)this_ == 0) {
      return result;
    }
    v63 = 0;
    v64 = 0;
    if (((*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v31 + 8LL))(
             v31, &v64, &v63) &
         0x80000000) != 0) {
      return -2;
    }
    v32 = v63;
    if ((v64 & 0x8000000000000000LL) == 0 && v63 > v64) {
      return -2;
    }
    *a3 = 1;
    if (v29 >= v32) {
      if (v29 != 0) {
        return -3;
      }
      v36 = *a2 + 1;
      if (v14 < 0) {
        goto LABEL_75;
      }
    LABEL_74:
      if (v36 > v14) {
        return -2;
      }
      goto LABEL_75;
    }
    v33 = *(__int64 (***)(__int64, __int64, __int64, _BYTE*))v31;
    v62[0] = 0;
    v19 = (*v33)(v31, v29, 1, v62);
    if (v19 != 0) {
    LABEL_95:
      if (v19 >= 0) {
        return -3;
      }
      else {
        return v19;
      }
    }
    if (v62[0] == 0) {
      return -2;
    }
    v34 = *a3;
    if ((v62[0] & 0x80) == 0) {
      v35 = 128;
      do {
        v35 >>= 1;
        ++v34;
      } while (((unsigned __int8)v35 & v62[0]) == 0);
      *a3 = v34;
    }
    v36 = v34 + *a2;
    if ((v14 & 0x8000000000000000LL) == 0) {
      goto LABEL_74;
    }
  LABEL_75:
    if (v36 > v60) {
      return -3;
    }
    result = mkvparser_ReadUInt_plt(*(_QWORD*)this_);
    if (result < 0) {
      return result;
    }
    v37 = *a2 + *a3;
    *a2 = v37;
    if (result != 0) {
      break;
    }
    v13 = v37;
  LABEL_89:
    v42 = v61;
    *((_QWORD*)this_ + 20) = v13;
    if ((v42 & 0x8000000000000000LL) == 0) {
      result = 1;
      if (v13 >= v42) {
        return result;
      }
    }
  }
  v13 = v37 + result;
  v38 = (-1LL << (7 * (unsigned __int8)*a3)) ^ result;
  if ((v14 & 0x8000000000000000LL) == 0 && v38 != -1 && v13 > v14) {
    return -2;
  }
  if (v28 == 475249515) {
    if (v38 == -1) {
      return -2;
    }
    if (*((_QWORD*)this_ + 25) == 0) {
      v39 = result - v22;
      v40 = result;
      v41 = SdkRoutine_4d4780(72);
      mkvparser_Cues_Cues_plt(v41, this_, *a2, v40, v22, v39 + v37);
      *((_QWORD*)this_ + 25) = v41;
      v13 = *a2 + v40;
    }
    goto LABEL_89;
  }
  if (v28 != 524531317) {
    if (v38 == -1) {
      return -2;
    }
    goto LABEL_89;
  }
  v44 = *((_QWORD*)this_ + 2);
  if (v38 == -1) {
    v45 = -1;
  }
  else {
    v45 = result;
  }
  v46 = v22 - v44;
  if (v22 - v44 < 0) {
    return -2;
  }
  v63 = 0;
  v64 = 0;
  result = mkvparser_Cluster_HasBlockEntries_plt(this_, v22 - v44, &v64, &v63);
  if (result < 0) {
    v52 = v63;
    *a2 = v64;
    *a3 = v52;
    return result;
  }
  v47 = *((_QWORD*)this_ + 31);
  if (*((__int64*)this_ + 32) >= 1) {
    if (v47 >= (signed __int64)*((_QWORD*)this_ + 33)) {
      return -2;
    }
    v48 = *(_QWORD**)(*((_QWORD*)this_ + 28) + 8 * v47);
    if (v48 == nullptr) {
      return -2;
    }
    if ((v48[2] & 0x8000000000000000LL) == 0) {
      return -2;
    }
    v49 = v48[1];
    v50 = v49 - *(_QWORD*)(*v48 + 16LL);
    if (v50 < 0) {
      return -2;
    }
    if (v50 == v46) {
      if (result == 0) {
        return -2;
      }
      if (v45 < 0) {
        v58 = v48[4];
        if (v58 < 1) {
          return -2;
        }
        v51 = v58 + v49;
      }
      else {
        v51 = *a2 + v45;
      }
      *a2 = v51;
      v48[2] = v47;
      v59 = *((_QWORD*)this_ + 32) - 1LL;
      ++*((_QWORD*)this_ + 31);
      *((_QWORD*)this_ + 32) = v59;
      v56 = *a2 <= v14;
      *((_QWORD*)this_ + 20) = *a2;
      v56 = v56 || v14 <= -1;
      goto LABEL_141;
    }
  }
  if (result != 0) {
    v53 = mkvparser_Cluster_Create_plt(this_, *((_QWORD*)this_ + 31), v46);
    if (v53 == 0) {
      return -1;
    }
    v54 = v53;
    if ((mkvparser_Segment_AppendCluster_plt(this_, v53) & 1) == 0) {
      mkvparser_Cluster_Destroy_Cluster_plt(v54);
      MatroskaExtractor_4e6640(v54);
      return -1;
    }
    if (*((_QWORD*)this_ + 29) == 0) {
      *((_QWORD*)this_ + 29) = mkvparser_Cluster_Create_plt(this_, v47, v46);
    }
    if (v45 < 0) {
      *((_QWORD*)this_ + 21) = v54;
      *((_QWORD*)this_ + 20) = -*a2;
      return 0;
    }
    v55 = *a2 + v45;
    *a2 = v55;
    *((_QWORD*)this_ + 20) = v55;
    v56 = v55 <= v14 || v14 <= 0;
  LABEL_141:
    if (v56) {
      return 0;
    }
    else {
      return -2;
    }
  }
  v57 = *a2;
  if ((v45 & 0x8000000000000000LL) == 0) {
    v57 += v45;
    *a2 = v57;
  }
  if (v61 < 0 || v57 < v61) {
    if (v14 < 0 || v57 < v14) {
      *((_QWORD*)this_ + 20) = v57;
      return 2;
    }
    else {
      *((_QWORD*)this_ + 20) = v14;
      return 1;
    }
  }
  else {
    *((_QWORD*)this_ + 20) = v61;
    return 1;
  }
}

__int64 mkvparser_Segment_DoLoadClusterUnknownSize(void* this_, __int64* a2,
                                                   __int64* a3)
{
  __int64 result;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((*((_QWORD*)this_ + 20) & 0x8000000000000000LL) == 0) {
    return -1;
  }
  v4 = *((_QWORD*)this_ + 21);
  if (v4 == 0) {
    return -1;
  }
  result = mkvparser_Cluster_Parse_plt(v4, a2, a3);
  if ((result & 0x8000000000000000LL) == 0) {
    if (result != 0) {
      v7 = *((_QWORD*)this_ + 21);
      v8 = *(_QWORD*)(v7 + 32);
      if (v8 < 0) {
        return -2;
      }
      v9 = *(_QWORD*)(v7 + 8) + v8;
      *a2 = v9;
      *((_QWORD*)this_ + 20) = v9;
      *((_QWORD*)this_ + 21) = 0;
    }
    return 2;
  }
  return result;
}

__int64 mkvparser_Cluster_Create(void* this_, void* a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v9)();
  _QWORD** v10;
  __int64 v11;

  result = 0;
  if (this_ != nullptr && (a3 & 0x8000000000000000LL) == 0) {
    v6 = *((_QWORD*)this_ + 2);
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v9 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v9 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v9) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v10 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v9);
    v11 = SdkRoutine_4c3860(16, 128, v10);
    mkvparser_Cluster_Cluster_plt_871090(v11, this_, a2, v6 + a3);
    return v11;
  }
  return result;
}

__int64 mkvparser_Segment_ResetClusterTable(__int64 result)
{
  int v1;
  __int64 i;
  __int64 v3;

  v1 = *(_DWORD*)(result + 240);
  if (v1 >= 1) {
    for (i = 0; i < v1; ++i) {
      v3 = *(_QWORD*)(*(_QWORD*)(result + 224) + 8 * i);
      if (v3 != 0) {
        *(_QWORD*)(v3 + 120) = 0;
        v1 = *(_DWORD*)(result + 240);
      }
    }
  }
  return result;
}

__int64 mkvparser_Segment_IsInClusterTable(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 result;

  if (*(_QWORD*)(a1 + 232) == a2) {
    return 1;
  }
  v2 = *(unsigned int*)(a1 + 240);
  if ((int)v2 < 1) {
    return 0;
  }
  v3 = *(__int64**)(a1 + 224);
  v4 = v2 - 1;
  do {
    v5 = v4;
    v7 = *v3++;
    v6 = v7;
    v8 = v7 != 0 && v6 == a2;
    result = v8;
    if (v8) {
      break;
    }
    v4 = v5 - 1;
  } while (v5 != 0);
  return result;
}

void mkvparser_SeekHead_Destroy_SeekHead(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;

  v1 = *((_QWORD*)this_ + 5);
  v3 = (atomic_uchar*)SdkData_e88330;
  v4 = SdkData_e88338[0];
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v1, v5);
  }
  v6 = *((_QWORD*)this_ + 7);
  if (v6 != 0) {
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory(v6, v7);
  }
}

__int64 mkvparser_Segment_ParseCues(void* this_, __int64 a2, __int64* a3,
                                    __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (***v16)(__int64, __int64, __int64, unsigned __int8*);
  __int64 v17;
  __int64 (**v18)(__int64, __int64, __int64, unsigned __int8*);
  __int64* v19;
  __int64 v20;
  unsigned int v21;
  void* v22;
  __int64* v23;
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
  char v36[4];
  __int64 v37;
  _QWORD v38[3];

  if (*((_QWORD*)this_ + 25) != 0) {
    return 0;
  }
  if (a2 < 0) {
    return -1;
  }
  v38[1] = v4;
  v38[2] = v5;
  v8 = *(_QWORD*)this_;
  v34 = 0;
  v35 = 0;
  LODWORD(result) = (*(__int64 (**)(__int64, __int64*, __int64*))(
      *(_QWORD*)v8 + 8LL))(v8, &v35, &v34);
  if ((result & 0x80000000) != 0) {
    return (int)result;
  }
  result = 1;
  v12 = *((_QWORD*)this_ + 2) + a2;
  v13 = v35;
  *a3 = v12;
  if (v13 < 0 || v12 >= v13) {
    return result;
  }
  v14 = *((_QWORD*)this_ + 3);
  if (v14 <= -1) {
    v15 = -1;
  }
  else {
    v15 = *((_QWORD*)this_ + 2) + v14;
  }
  if (v12 >= v34) {
  LABEL_39:
    result = -3;
    *a4 = 1;
    return result;
  }
  result = -2;
  if (v12 < 0) {
    return result;
  }
  v16 = *(__int64 (****)(__int64, __int64, __int64, unsigned __int8*))this_;
  if (*(_QWORD*)this_ == 0) {
    return result;
  }
  v37 = 0;
  v38[0] = 0;
  if ((((__int64 (*)(__int64 (***)(__int64, __int64, __int64, unsigned __int8*),
                     _QWORD*, __int64*))(*v16)[1])(v16, v38, &v37) &
       0x80000000) != 0) {
    return -2;
  }
  v17 = v37;
  if ((v38[0] & 0x8000000000000000LL) == 0 && v37 > (signed __int64)v38[0]) {
    return -2;
  }
  *a4 = 1;
  if (v12 >= v17) {
    v19 = a4;
    if (v12 != 0) {
      goto LABEL_23;
    }
    v20 = 1;
  }
  else {
    v18 = *v16;
    v36[0] = 0;
    LODWORD(result) = (*v18)((__int64)v16, v12, 1, (unsigned __int8*)v36);
    if ((_DWORD)result != 0) {
      v19 = a4;
      if ((result & 0x80000000) != 0) {
        return (int)result;
      }
      goto LABEL_23;
    }
    if (v36[0] == 0) {
      return -2;
    }
    v20 = *a4;
    if ((v36[0] & 0x80) == 0) {
      v21 = 128;
      v22 = this_;
      v23 = a3;
      do {
        v21 >>= 1;
        ++v20;
      } while (((unsigned __int8)v21 & v36[0]) == 0);
      *a4 = v20;
      goto LABEL_31;
    }
  }
  v22 = this_;
  v23 = a3;
LABEL_31:
  v24 = v20 + *v23;
  if ((v15 & 0x8000000000000000LL) == 0 && v24 > v15) {
    return -2;
  }
  if (v24 > v34) {
    return -3;
  }
  if (mkvparser_ReadID_plt(*(_QWORD*)v22) != 475249515) {
    return -2;
  }
  v19 = a4;
  v25 = *a3 + *a4;
  v26 = v34;
  *a3 = v25;
  if (v25 >= v26) {
  LABEL_23:
    *v19 = 1;
    return -3;
  }
  result = mkvparser_GetUIntLength_plt(*(_QWORD*)this_);
  if (result < 0) {
    return result;
  }
  if (result != 0) {
    goto LABEL_39;
  }
  v27 = *a4 + *a3;
  if ((v15 & 0x8000000000000000LL) == 0 && v27 > v15) {
    return -2;
  }
  if (v27 > v34) {
    return -3;
  }
  result = mkvparser_ReadUInt_plt(*(_QWORD*)this_);
  v28 = result;
  if (result < 0) {
    return result;
  }
  if (result == 0) {
    return 1;
  }
  v29 = *a3 + *a4;
  *a3 = v29;
  v30 = v29 + result;
  if ((v15 & 0x8000000000000000LL) == 0 && v30 > v15) {
    return -2;
  }
  if ((v35 & 0x8000000000000000LL) == 0 && v30 > v35) {
    return 1;
  }
  v31 = v34;
  *a4 = result;
  if (v30 > v31) {
    return -3;
  }
  v32 = v30 - v12;
  v33 = SdkRoutine_4d4780(72);
  mkvparser_Cues_Cues_plt(v33, this_, *a3, v28, v12, v32);
  *((_QWORD*)this_ + 25) = v33;
  return 0;
}

void mkvparser_Cues_Destroy_Cues(void* this_)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;

  v1 = *((_QWORD*)this_ + 7);
  v2 = *((__int64**)this_ + 5);
  v3 = 8LL * *((_QWORD*)this_ + 6);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 + 8 * v1 != 0) {
    v7 = v3 + 8 * v1;
    do {
      v10 = *v2++;
      v9 = v10;
      if (v10 != 0) {
        mkvparser_CuePoint_Destroy_CuePoint_plt(v9);
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
          *(_DWORD*)v5 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
          __cxa_guard_release_plt(v4);
        }
        v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
        nn_movie_detail_FreeMemory(v9, v8);
      }
      v7 -= 8;
    } while (v7 != 0);
    v2 = *((__int64**)this_ + 5);
  }
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v11 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory((__int64)v2, v11);
}

__int64* mkvparser_Cues_PreloadCuePoint(void* this_, __int64* a2, __int64 a3)
{
  __int64* result;
  __int64 v4;
  atomic_uchar* v6;
  void(__attribute__((noreturn)) * v7)();
  __int64 v9;
  __int64 v10;
  _QWORD** v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD** v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (*((_QWORD*)this_ + 6) != 0) {
    return nullptr;
  }
  v4 = *a2;
  v6 = (atomic_uchar*)SdkData_e88330;
  v7 = SdkData_e88338[0];
  if ((signed __int64)*((_QWORD*)this_ + 7) < *a2) {
    goto LABEL_21;
  }
  v9 = a3;
  if (v4 >= 1) {
    v10 = 2 * v4;
  }
  else {
    v10 = 2048;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v7 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v11 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
  result = (__int64*)nn_movie_detail_AllocateMemory(8 * v10, v11);
  if (result != nullptr) {
    v12 = *((_QWORD*)this_ + 5);
    v13 = *((_QWORD*)this_ + 7);
    v14 = (__int64)result;
    if (v13 != 0) {
      v15 = 8 * v13 - 8;
      if ((~(_BYTE)v15 & 0x38) != 0) {
        v16 = *((__int64**)this_ + 5);
        v18 = -(__int64)(((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 7);
        v17 = result;
        do {
          v19 = *v16++;
          v20 = __CFADD__(v18++, 1);
          *v17++ = v19;
        } while (!v20);
      }
      else {
        v16 = *((__int64**)this_ + 5);
        v17 = result;
      }
      if (v15 >= 0x38) {
        v21 = (__int64*)(v12 + 8 * v13);
        do {
          *v17 = *v16;
          v17[1] = v16[1];
          v17[2] = v16[2];
          v17[3] = v16[3];
          v17[4] = v16[4];
          v17[5] = v16[5];
          v17[6] = v16[6];
          v22 = v16[7];
          v16 += 8;
          v17[7] = v22;
          v17 += 8;
        } while (v16 != v21);
      }
      v12 = *((_QWORD*)this_ + 5);
    }
    if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v23 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    nn_movie_detail_FreeMemory(v12, v23);
    *((_QWORD*)this_ + 5) = v14;
    *a2 = v10;
    a3 = v9;
  LABEL_21:
    v24 = a3;
    if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v25 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    v26 = SdkRoutine_4c3860(16, 48, v25);
    mkvparser_CuePoint_CuePoint_plt(v26, *((_QWORD*)this_ + 7), v24);
    v27 = *((_QWORD*)this_ + 7);
    v28 = *((_QWORD*)this_ + 5);
    result = (_QWORD*)(((char*)0x0LL) + 1);
    *((_QWORD*)this_ + 7) = v27 + 1;
    *(_QWORD*)(v28 + 8 * v27) = v26;
  }
  return result;
}

__int64 mkvparser_Segment_GetBlock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_uchar* v10;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v12)();
  _QWORD** v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v20;

  v3 = *(_QWORD*)(a1 + 224);
  v5 = *(_QWORD*)(a3 + 8);
  v6 = v3 + 8LL * *(_QWORD*)(a1 + 248) + 8LL * *(_QWORD*)(a1 + 256);
  while (v3 < v6) {
    v7 = v3 + 8 * ((((__int64)(v6 - v3) >> 3) + ((v6 - v3) >> 63)) >> 1);
    v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL) - *(_QWORD*)(**(_QWORD**)v7 + 16LL);
    if (v8 < v5) {
      v3 = v7 + 8;
    }
    else {
      v6 = v3 + 8 * ((((__int64)(v6 - v3) >> 3) + ((v6 - v3) >> 63)) >> 1);
      if (v8 <= v5) {
        return mkvparser_Cluster_GetEntry_plt_871150();
      }
    }
  }
  if ((v5 & 0x8000000000000000LL) == 0) {
    v9 = *(_QWORD*)(a1 + 16);
    v10 = (atomic_uchar*)SdkData_e88330;
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v12 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v12 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
    v14 = SdkRoutine_4c3860(16, 128, v13);
    mkvparser_Cluster_Cluster_plt_871090(v14, a1, -1, v9 + v5);
    v15 = *(_QWORD*)(a1 + 224);
    v16 = *(int*)(a1 + 240) - 1LL;
    v17 = (__int64)(v3 - v15) >> 3;
    if (v17 >= v16) {
      v18 = *(int*)(a1 + 240) - 1LL;
    }
    else {
      v18 = (__int64)(v3 - v15) >> 3;
    }
    if (v17 >= v16 && *(_QWORD*)(v15 + 8 * v18) != 0 &&
        *(__int64*)(*(_QWORD*)v15 + 120LL) > 0) {
      ++v18;
    }
    if ((mkvparser_Segment_PreloadCluster_plt(a1, v14, v18) & 1) != 0) {
      return mkvparser_Cluster_GetEntry_plt_871150();
    }
    mkvparser_Cluster_Destroy_Cluster_plt(v14);
    if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v12 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v20 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
    nn_movie_detail_FreeMemory(v14, v20);
  }
  return 0;
}

__int64 mkvparser_Segment_FindOrPreloadCluster(void* this_, __int64 a2, char a3)
{
  _QWORD* v3;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_uchar* v14;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v16)();
  _QWORD** v17;
  __int64 v18;
  char v19;
  _QWORD* v20;
  int v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  atomic_uchar* v37;
  char v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  _QWORD* v56;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  _QWORD* v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  __int64 v85;
  _QWORD* v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  int v90;

  if (a2 < 0) {
    return 0;
  }
  v3 = (_QWORD*)((char*)this_ + 248);
  v7 = *((_QWORD*)this_ + 32) + *((_QWORD*)this_ + 31);
  if (v7 >= 1) {
    v8 = *((__int64**)this_ + 28);
    v9 = &v8[v7];
    do {
      v10 = &v8[(v9 - v8 + ((unsigned __int64)((char*)v9 - (char*)v8) >> 63)) >>
                1];
      v11 = *v10;
      v12 = *(_QWORD*)(*v10 + 8) - *(_QWORD*)(*(_QWORD*)*v10 + 16LL);
      if (v12 < a2) {
        v8 = v10 + 1;
      }
      else {
        v9 =
            &v8[(v9 - v8 + ((unsigned __int64)((char*)v9 - (char*)v8) >> 63)) >>
                1];
        if (v12 <= a2) {
          return v11;
        }
      }
    } while (v8 < v9);
  }
  v13 = *((_QWORD*)this_ + 2);
  v14 = (atomic_uchar*)SdkData_e88330;
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
  v11 = SdkRoutine_4c3860(16, 128, v17);
  mkvparser_Cluster_Cluster_plt_871090(v11, this_, -1, v13 + a2);
  v18 = *((_QWORD*)this_ + 28);
  if (*(_QWORD*)v18 != 0) {
    v19 = a3 & (a2 < (signed __int64)(*(_QWORD*)(*(_QWORD*)v18 + 8LL) -
                                      *(_QWORD*)(**(_QWORD**)v18 + 16LL)));
    if (v7 < 1) {
      goto LABEL_16;
    }
  LABEL_14:
    v20 = *(_QWORD**)(v18 + 8 * v7 - 8);
    if (v20 != nullptr) {
      v19 |= a3 & (a2 > (signed __int64)(v20[1] - *(_QWORD*)(*v20 + 16LL)));
    }
    goto LABEL_16;
  }
  v19 = 0;
  if (v7 >= 1) {
    goto LABEL_14;
  }
LABEL_16:
  v21 = *((_DWORD*)this_ + 60);
  *v3 = 0;
  v3[1] = 0;
  if (v21 < 1) {
  LABEL_75:
    v49 = 0;
    goto LABEL_76;
  }
  v22 = 0;
  do {
    v24 = *((_QWORD*)this_ + 28);
    v26 = *(_QWORD*)(v24 + 8 * v22);
    if (v26 != 0) {
      if (*(__int64*)(v26 + 120) <= 0 || (v19 & 1) != 0) {
        mkvparser_Cluster_Destroy_Cluster_plt(v26);
        if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v14) != 0) {
          *(_DWORD*)v16 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v16) = 1;
          __cxa_guard_release_plt(v14);
        }
        v23 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v16);
        nn_movie_detail_FreeMemory(v26, v23);
        v24 = *((_QWORD*)this_ + 28);
      LABEL_20:
        *(_QWORD*)(v24 + 8 * v22) = 0;
      }
    }
    else if ((v19 & 1) != 0) {
      goto LABEL_20;
    }
    v25 = *((int*)this_ + 60);
    ++v22;
  } while (v22 < v25);
  if ((int)v25 >= 1) {
    v27 = 0;
    v28 = *((_DWORD*)this_ + 60);
    while (*(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v27) == 0) {
      if ((unsigned int)v25 == ++v27) {
        LODWORD(v27) = *((_DWORD*)this_ + 60);
        goto LABEL_61;
      }
    }
    if ((int)v25 > (int)v27 && (_DWORD)v27 != 0) {
      v29 = 8LL * (unsigned int)v25;
      if ((int)v27 <= 1) {
        v30 = 1;
      }
      else {
        v30 = v27;
      }
      v31 = v30 & 3;
      if ((int)v27 >= 4) {
        v33 = v29 - 32;
        v34 = v25 - 3;
        v88 = v31;
        v89 = 8LL * (unsigned int)v25;
        v32 = 0;
        v90 = v25 - 2;
        do {
          if ((v28 - 1 == (_DWORD)v32 ||
               (memmove_plt(*((_QWORD*)this_ + 28),
                            *((_QWORD*)this_ + 28) + 8LL, v33 + 24),
                v90 != (_DWORD)v32)) &&
                  (memmove_plt(*((_QWORD*)this_ + 28),
                               *((_QWORD*)this_ + 28) + 8LL, v33 + 16),
                   v34 == (_DWORD)v32) ||
              (memmove_plt(*((_QWORD*)this_ + 28), *((_QWORD*)this_ + 28) + 8LL,
                           v33 + 8),
               v28 - 4 != (_DWORD)v32)) {
            memmove_plt(*((_QWORD*)this_ + 28), *((_QWORD*)this_ + 28) + 8LL,
                        v33);
          }
          v32 += 4;
          v33 -= 32;
        } while ((v27 & 0x7FFFFFFC) != v32);
        LODWORD(v25) = v28 - v32;
        v14 = (atomic_uchar*)SdkData_e88330;
        v31 = v88;
        v29 = v89;
      }
      else {
        v32 = 0;
      }
      if (v31 != 0) {
        v35 = v29 - 8 * v32;
        v36 = v25 - 1;
        v37 = v14;
        v16 = SdkData_e88338[0];
        if ((int)v27 <= 1) {
          v38 = 1;
        }
        else {
          v38 = v27;
        }
        v39 = v35 - 8;
        v40 = v38 & 3;
        do {
          if (v36 != 0) {
            memmove_plt(*((_QWORD*)this_ + 28), *((_QWORD*)this_ + 28) + 8LL,
                        v39);
          }
          v39 -= 8;
          --v36;
          --v40;
        } while (v40 != 0);
        v14 = v37;
      }
      else {
        v16 = SdkData_e88338[0];
      }
    }
  LABEL_61:
    if ((_DWORD)v27 != 0) {
      v41 = v27 & 7;
      if ((unsigned int)v27 >= 8) {
        v43 = 0;
        do {
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 1)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 2)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 3)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 4)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 5)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60) - 6)) = 0;
          v44 = v43 + *((_DWORD*)this_ + 60);
          v43 -= 8;
          *(_QWORD*)(*((_QWORD*)this_ + 28) + 8LL * (v44 - 7)) = 0;
          *(_QWORD*)(*((_QWORD*)this_ + 28) +
                     8LL * (v43 + *((_DWORD*)this_ + 60))) = 0;
        } while (-(v27 & 0xFFFFFFF8) != v43);
        v42 = 1 - v43;
        if ((v27 & 7) != 0) {
          goto LABEL_68;
        }
      }
      else {
        v42 = 1;
        if ((v27 & 7) == 0) {
          goto LABEL_70;
        }
      LABEL_68:
        v45 = -v42;
        do {
          --v41;
          v46 = v45 + *((_DWORD*)this_ + 60);
          --v45;
          *(_QWORD*)(*((_QWORD*)this_ + 28) + 8LL * v46) = 0;
        } while (v41 != 0);
      }
    }
  }
LABEL_70:
  v47 = *((_DWORD*)this_ + 60);
  if (v47 < 1) {
    goto LABEL_75;
  }
  v48 = 0;
  v49 = 0;
  do {
    v50 = *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v48);
    if (v50 != 0) {
      *(_QWORD*)(v50 + 16) = -1;
      ++v49;
      ++*((_QWORD*)this_ + 32);
      v47 = *((_DWORD*)this_ + 60);
    }
    ++v48;
  } while (v48 < v47);
LABEL_76:
  *((_DWORD*)this_ + 60) = 8;
  *((_QWORD*)this_ + 33) = 8;
  if ((mkvparser_Segment_PreloadCluster_plt(this_, v11, v49) & 1) == 0) {
    mkvparser_Cluster_Destroy_Cluster_plt(v11);
    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v16 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v16) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v56 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v16);
    nn_movie_detail_FreeMemory(v11, v56);
    return 0;
  }
  v51 = *((_DWORD*)this_ + 60);
  if (v51 >= 1) {
    v52 = *((_QWORD*)this_ + 28);
    v53 = v51 & 7;
    if ((unsigned int)v51 >= 8) {
      v58 = (_QWORD*)(v52 + 32);
      v59 = 0;
      v55 = 0;
      v60 = -(__int64)(v51 & 0x7FFFFFF8);
      do {
        v59 -= 8;
        if (*(v58 - 4) != 0) {
          ++v55;
        }
        if (*(v58 - 3) != 0) {
          ++v55;
        }
        if (*(v58 - 2) != 0) {
          ++v55;
        }
        if (*(v58 - 1) != 0) {
          ++v55;
        }
        if (*v58 != 0) {
          ++v55;
        }
        v61 = v58[1] == 0;
        v62 = v58[2];
        v63 = v58[3];
        v58 += 8;
        if (!v61) {
          ++v55;
        }
        if (v62 != 0) {
          ++v55;
        }
        if (v63 != 0) {
          ++v55;
        }
      } while (v60 != v59);
      v54 = -v59;
      if (v53 != 0) {
        goto LABEL_104;
      }
    }
    else {
      v54 = 0;
      v55 = 0;
      if ((v51 & 7) == 0) {
        goto LABEL_108;
      }
    LABEL_104:
      v64 = (__int64*)(v52 + 8 * v54);
      do {
        v65 = *v64++;
        if (v65 != 0) {
          ++v55;
        }
        --v53;
      } while (v53 != 0);
    }
  LABEL_108:
    v66 = v55 - 2;
    if (v55 >= 2) {
      v67 = v55 - 1;
      v68 = 0;
      do {
        if (v66 >= 3) {
          v69 = 0;
          do {
            v75 = *((_QWORD*)this_ + 28);
            v76 = v75 + 8 * v69;
            v77 = *(_QWORD**)v76;
            v78 = *(_QWORD**)(v76 + 8);
            if ((signed __int64)(v77[1] - *(_QWORD*)(*v77 + 16LL)) >
                (signed __int64)(v78[1] - *(_QWORD*)(*v78 + 16LL))) {
              *(_QWORD*)(v75 + 8 * v69) = v78;
              *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v69 + 8) = v77;
            }
            v79 = *((_QWORD*)this_ + 28) + 8 * v69;
            v80 = *(_QWORD**)(v79 + 8);
            v81 = *(_QWORD**)(v79 + 16);
            if ((signed __int64)(v80[1] - *(_QWORD*)(*v80 + 16LL)) >
                (signed __int64)(v81[1] - *(_QWORD*)(*v81 + 16LL))) {
              *(_QWORD*)(v79 + 8) = v81;
              *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v69 + 16) = v80;
            }
            v82 = *((_QWORD*)this_ + 28) + 8 * v69;
            v83 = *(_QWORD**)(v82 + 16);
            v84 = *(_QWORD**)(v82 + 24);
            if ((signed __int64)(v83[1] - *(_QWORD*)(*v83 + 16LL)) >
                (signed __int64)(v84[1] - *(_QWORD*)(*v84 + 16LL))) {
              *(_QWORD*)(v82 + 16) = v84;
              *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v69 + 24) = v83;
            }
            v85 = *((_QWORD*)this_ + 28) + 8 * v69;
            v86 = *(_QWORD**)(v85 + 24);
            v87 = *(_QWORD**)(v85 + 32);
            if ((signed __int64)(v86[1] - *(_QWORD*)(*v86 + 16LL)) >
                (signed __int64)(v87[1] - *(_QWORD*)(*v87 + 16LL))) {
              *(_QWORD*)(v85 + 24) = v87;
              *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v69 + 32) = v86;
            }
            v69 += 4;
          } while ((v67 & 0xFFFFFFFC) != v69);
        }
        else {
          v69 = 0;
        }
        if ((v67 & 3) != 0) {
          v70 = 8 * v69;
          v71 = v67 & 3;
          do {
            v72 = *((_QWORD*)this_ + 28);
            v73 = *(_QWORD**)(v72 + v70);
            v74 = *(_QWORD**)(v72 + v70 + 8);
            if ((signed __int64)(v73[1] - *(_QWORD*)(*v73 + 16LL)) >
                (signed __int64)(v74[1] - *(_QWORD*)(*v74 + 16LL))) {
              *(_QWORD*)(v72 + v70) = v74;
              *(_QWORD*)(*((_QWORD*)this_ + 28) + v70 + 8) = v73;
            }
            v70 += 8;
            --v71;
          } while (v71 != 0);
        }
        ++v68;
      } while (v68 != v67);
    }
  }
  return v11;
}

void mkvparser_CuePoint_Destroy_CuePoint(void* this_)
{
  __int64 v1;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  v1 = *((_QWORD*)this_ + 4);
  if (v1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v3 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v5 = __cxa_guard_acquire_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
      if (v5 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v3 = SdkData_e88338[0];
      }
    }
    v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
    nn_movie_detail_FreeMemory(v1, v4);
  }
}

char* mkvparser_Segment_GetFirst(void* this_)
{
  bool v2;
  char* v3;

  if (*((_QWORD*)this_ + 29) != 0) {
    return *((char**)this_ + 29);
  }
  v2 = *((__int64*)this_ + 31) < 1 || *((_QWORD*)this_ + 28) == 0;
  v3 = (char*)this_ + 32;
  if (!v2) {
    return nullptr;
  }
  return v3;
}

__int64 mkvparser_Segment_GetLast(void* this_)
{
  __int64 v1;
  __int64 v2;

  v1 = *((_QWORD*)this_ + 28);
  if (v1 != 0 && (v2 = *((_QWORD*)this_ + 31)) > 0) {
    return *(_QWORD*)(v1 + 8 * v2 - 8);
  }
  else {
    return (__int64)this_ + 32;
  }
}

__int64 mkvparser_Segment_GetNext(void* this_, void* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  __int64 (**v12)(__int64, __int64, __int64, _BYTE*);
  int v13;
  unsigned int (***v14)(_QWORD, __int64, __int64, __int64*);
  unsigned __int8 v15;
  unsigned int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int (***v22)(_QWORD, __int64, __int64, __int64*);
  __int64 v23;
  __int64 v24;
  unsigned int (**v25)(_QWORD, __int64, __int64, _BYTE*);
  unsigned int v26;
  __int64 v27;
  unsigned int (***v28)(_QWORD, __int64, __int64, __int64*);
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int (***v35)(_QWORD, __int64, __int64, __int64*);
  __int64 v36;
  __int64 (**v37)(_QWORD, __int64, __int64, _BYTE*);
  int v38;
  unsigned int (***v39)(_QWORD, __int64, __int64, __int64*);
  __int64 v40;
  char v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned int (***v44)(_QWORD, __int64, __int64, __int64*);
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 (**v48)(_QWORD, __int64, __int64, _BYTE*);
  int v49;
  unsigned int v50;
  signed int v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v67)();
  _QWORD** v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  _BYTE v76[4];
  __int64 v77;
  __int64 v78;

  v2 = *((_QWORD*)a2 + 2);
  if ((v2 & 0x8000000000000000LL) == 0) {
    v4 = v2 + 1;
    if (v4 >= (signed __int64)*((_QWORD*)this_ + 31)) {
      return (__int64)this_ + 32;
    }
    else {
      return *(_QWORD*)(*((_QWORD*)this_ + 28) + 8 * v4);
    }
  }
  v6 = *((_QWORD*)a2 + 1);
  result = 0;
  if ((v6 & 0x8000000000000000LL) == 0) {
    v7 = *(_QWORD*)this_;
    if (*(_QWORD*)this_ != 0) {
      v78 = 0;
      v77 = 0;
      v8 = *((_QWORD*)this_ + 2);
      v9 = *((_QWORD*)this_ + 3);
      v10 = this_;
      if (((*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v7 + 8LL))(
               v7, &v78, &v77) &
           0x80000000) != 0 ||
          (v78 & 0x8000000000000000LL) == 0 && v77 > v78) {
        return 0;
      }
      v11 = v6;
      if (v6 < v77) {
        v12 = *(__int64 (***)(__int64, __int64, __int64, _BYTE*))v7;
        v76[0] = 0;
        v13 = (*v12)(v7, v6, 1, v76);
        v11 = -2;
        if (v76[0] != 0) {
          v11 = 0;
        }
        if (v13 != 0) {
          v11 = v13;
        }
      }
      if (v11 != 0) {
        return 0;
      }
      v14 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
      if (*(_QWORD*)v10 == 0) {
        return 0;
      }
      LOBYTE(v78) = 0;
      if ((**v14)(v14, v6, 1, &v78) != 0) {
        return 0;
      }
      v15 = v78;
      if ((char)v78 < 1) {
        return 0;
      }
      v16 = (unsigned __int8)v78;
      if ((unsigned __int8)v78 <= 0x3Fu) {
        if ((unsigned __int8)v78 > 0x1Fu) {
          v17 = 1;
          v18 = 3;
        }
        else {
          if ((unsigned __int8)v78 < 0x10u) {
            return 0;
          }
          v18 = 4;
          v17 = 0;
        }
      }
      else {
        v17 = 0;
        v18 = 2;
      }
      if ((**v14)(v14, v6 + 1, 1, &v78) != 0) {
        return 0;
      }
      if (v16 > 0x3F) {
        return 0;
      }
      v19 = (unsigned __int8)v78;
      if ((**v14)(v14, v6 + 2, 1, &v78) != 0) {
        return 0;
      }
      if ((v17 & 1) != 0) {
        return 0;
      }
      v20 = (unsigned __int8)v78;
      if ((**v14)(v14, v6 + 3, 1, &v78) != 0 ||
          ((unsigned __int8)v78 |
           (((v19 << 8) | ((unsigned __int64)v15 << 16) | v20) << 8)) !=
              0x1F43B675) {
        return 0;
      }
      v21 = v9 + v8;
      v22 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
      v23 = v18 + v6;
      if (*(_QWORD*)v10 == 0) {
        v27 = -2;
        goto LABEL_62;
      }
      v78 = 0;
      v77 = 0;
      v24 = v18;
      if ((((__int64 (*)(unsigned int (***)(_QWORD, __int64, __int64, __int64*),
                         __int64*, __int64*))(*v22)[1])(v22, &v78, &v77) &
           0x80000000) == 0) {
        if (v78 < 0 || (v24 = v18, v77 <= v78)) {
          if (v23 >= v77) {
          LABEL_45:
            v24 = 1;
            goto LABEL_46;
          }
          v25 = (unsigned int (**)(_QWORD, __int64, __int64, _BYTE*))*v22;
          v76[0] = 0;
          v24 = 1;
          if ((*v25)(v22, v18 + v6, 1, v76) == 0) {
            if (v76[0] != 0 && (v76[0] & 0x80) == 0) {
              v26 = 128;
              v24 = 1;
              do {
                v26 >>= 1;
                ++v24;
              } while (((unsigned __int8)v26 & v76[0]) == 0);
              goto LABEL_46;
            }
            goto LABEL_45;
          }
        }
      }
    LABEL_46:
      v28 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
      if (*(_QWORD*)v10 != 0) {
        LOBYTE(v78) = 0;
        v29 = (**v28)(v28, v18 + v6, 1, &v78);
        if ((v29 & 0x80000000) == 0) {
          if (v29 != 0) {
          LABEL_49:
            v27 = -3;
          LABEL_61:
            v18 = 1;
            goto LABEL_62;
          }
          if ((_BYTE)v78 == 0) {
            v27 = -2;
            goto LABEL_61;
          }
          if ((v78 & 0x80) != 0) {
            v27 = v78 & 0x7F;
            goto LABEL_61;
          }
          v30 = 128;
          v31 = 0;
          do {
            v30 >>= 1;
            ++v31;
          } while (((unsigned __int8)v30 & (unsigned __int8)v78) == 0);
          v27 = (unsigned __int8)v78 & ~v30;
          v32 = v18 + v6;
          v18 = v31 + 1;
          v33 = v32 + 1;
          while (1) {
            v29 = (**v28)(v28, v33, 1, &v78);
            if ((v29 & 0x80000000) != 0) {
              break;
            }
            if (v29 != 0) {
              goto LABEL_49;
            }
            --v31;
            ++v33;
            v27 = (unsigned __int8)v78 | (unsigned __int64)(v27 << 8);
            if (v31 == 0) {
              goto LABEL_62;
            }
          }
        }
        v27 = (int)v29;
        goto LABEL_61;
      }
      v27 = -2;
      v18 = v24;
    LABEL_62:
      v34 = v18 + v23 + v27;
      if (v34 < v21) {
        while (1) {
          result = 0;
          if (v34 < 0) {
            return result;
          }
          v35 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
          if (*(_QWORD*)v10 == 0) {
            return result;
          }
          v78 = 0;
          v77 = 0;
          if ((((__int64 (*)(
                   unsigned int (***)(_QWORD, __int64, __int64, __int64*),
                   __int64*, __int64*))(*v35)[1])(v35, &v78, &v77) &
               0x80000000) != 0 ||
              (v78 & 0x8000000000000000LL) == 0 && v77 > v78) {
            return 0;
          }
          v36 = v34;
          if (v34 < v77) {
            v37 = (__int64 (**)(_QWORD, __int64, __int64, _BYTE*))*v35;
            v76[0] = 0;
            v38 = (*v37)(v35, v34, 1, v76);
            v36 = -2;
            if (v76[0] != 0) {
              v36 = 0;
            }
            if (v38 != 0) {
              v36 = v38;
            }
          }
          if (v36 != 0) {
            return 0;
          }
          v39 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
          if (*(_QWORD*)v10 == 0) {
            return 0;
          }
          LOBYTE(v78) = 0;
          if ((**v39)(v39, v34, 1, &v78) != 0) {
            return 0;
          }
          v40 = (unsigned __int8)v78;
          if ((_BYTE)v78 == 0) {
            return 0;
          }
          if ((v78 & 0x80) != 0) {
            v42 = 1;
            v43 = (unsigned __int8)v78;
          }
          else {
            if ((unsigned __int8)v78 <= 0x3Fu) {
              if ((unsigned __int8)v78 > 0x1Fu) {
                v41 = 1;
                v42 = 3;
              }
              else {
                if ((unsigned __int8)v78 < 0x10u) {
                  return 0;
                }
                v42 = 4;
                v41 = 0;
              }
            }
            else {
              v41 = 0;
              v42 = 2;
            }
            if ((**v39)(v39, v34 + 1, 1, &v78) != 0) {
              return 0;
            }
            v43 = (unsigned __int8)v78 | (unsigned __int64)(v40 << 8);
            if ((unsigned int)v40 <= 0x3F) {
              if ((**v39)(v39, v34 + 2, 1, &v78) != 0) {
                return 0;
              }
              v43 = (unsigned __int8)v78 | (v43 << 8);
              if ((v41 & 1) == 0) {
                if ((**v39)(v39, v34 + 3, 1, &v78) != 0) {
                  return 0;
                }
                v43 = (unsigned __int8)v78 | (v43 << 8);
              }
            }
          }
          v44 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
          v45 = v42 + v34;
          if (*(_QWORD*)v10 != 0 && (v45 & 0x8000000000000000LL) == 0) {
            break;
          }
          v47 = v42;
        LABEL_106:
          if (v45 < 0 || v44 == nullptr) {
            v53 = v47 + v45;
            v52 = -2;
            goto LABEL_123;
          }
          LOBYTE(v78) = 0;
          v51 = (**v44)(v44, v42 + v34, 1, &v78);
          if (v51 < 0) {
            goto LABEL_121;
          }
          if (v51 == 0) {
            if ((_BYTE)v78 == 0) {
              v52 = -2;
              goto LABEL_122;
            }
            if ((v78 & 0x80) != 0) {
              v52 = v78 & 0x7F;
              v55 = 1;
            LABEL_130:
              v53 = v55 + v45;
              if (v52 == 0) {
                goto LABEL_126;
              }
              goto LABEL_123;
            }
            v54 = 128;
            v55 = 1;
            do {
              v56 = v55;
              v54 >>= 1;
              ++v55;
            } while (((unsigned __int8)v54 & (unsigned __int8)v78) == 0);
            v52 = (unsigned __int8)v78 & ~v54;
            v57 = v42 + v34 + 1;
            while (1) {
              v51 = (**v44)(v44, v57, 1, &v78);
              if (v51 < 0) {
                break;
              }
              if (v51 != 0) {
                goto LABEL_110;
              }
              --v56;
              ++v57;
              v52 = (unsigned __int8)v78 | (unsigned __int64)(v52 << 8);
              if (v56 == 0) {
                goto LABEL_130;
              }
            }
          LABEL_121:
            v52 = v51;
            goto LABEL_122;
          }
        LABEL_110:
          v52 = -3;
        LABEL_122:
          v53 = v45 + 1;
        LABEL_123:
          if (v43 == 524531317) {
            v58 = *((_QWORD*)v10 + 2);
            v78 = 0;
            v77 = 0;
            v59 = v34 - v58;
            if (mkvparser_Cluster_HasBlockEntries_plt(v10, v59, &v78, &v77) >
                0) {
              goto LABEL_133;
            }
          }
          v53 += v52;
        LABEL_126:
          v34 = v53;
          if (v53 >= v21) {
            goto LABEL_132;
          }
        }
        v78 = 0;
        v77 = 0;
        v46 = ((
            __int64 (*)(unsigned int (***)(_QWORD, __int64, __int64, __int64*),
                        __int64*, __int64*))(*v44)[1])(v44, &v78, &v77);
        v47 = v42;
        if ((v46 & 0x80000000) == 0) {
          if (v78 < 0 || (v47 = v42, v77 <= v78)) {
            if (v45 >= v77) {
            LABEL_104:
              v47 = 1;
              goto LABEL_105;
            }
            v48 = (__int64 (**)(_QWORD, __int64, __int64, _BYTE*))*v44;
            v76[0] = 0;
            v49 = (*v48)(v44, v42 + v34, 1, v76);
            v47 = 1;
            if (v49 == 0) {
              if (v76[0] != 0 && (v76[0] & 0x80) == 0) {
                v50 = 128;
                v47 = 1;
                do {
                  v50 >>= 1;
                  ++v47;
                } while (((unsigned __int8)v50 & v76[0]) == 0);
                goto LABEL_105;
              }
              goto LABEL_104;
            }
          }
        }
      LABEL_105:
        v44 = *(unsigned int (****)(_QWORD, __int64, __int64, __int64*))v10;
        goto LABEL_106;
      }
    LABEL_132:
      v59 = 0;
    LABEL_133:
      if (v59 >= 1) {
        v60 = *((_QWORD*)v10 + 32);
        v61 = *((_QWORD*)v10 + 28) + 8LL * *((_QWORD*)v10 + 31);
        if (v60 >= 1) {
          v62 = v61 + 8 * v60;
          do {
            v63 =
                v61 +
                8 * ((((__int64)(v62 - v61) >> 3) + ((v62 - v61) >> 63)) >> 1);
            result = *(_QWORD*)v63;
            v64 = *(_QWORD*)(*(_QWORD*)v63 + 8LL) -
                  *(_QWORD*)(**(_QWORD**)v63 + 16LL);
            if (v64 < v59) {
              v61 = v63 + 8;
            }
            else {
              v62 = v61 +
                    8 * ((((__int64)(v62 - v61) >> 3) + ((v62 - v61) >> 63)) >>
                         1);
              if (v64 <= v59) {
                return result;
              }
            }
          } while (v61 < v62);
        }
        v65 = *((_QWORD*)v10 + 2);
        explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                        memory_order_acquire);
        v67 = SdkData_e88338[0];
        if ((explicit & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          *(_DWORD*)v67 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v67) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v68 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v67);
        v69 = SdkRoutine_4c3860(16, 128, v68);
        v70 = v65 + v59;
        v71 = v69;
        mkvparser_Cluster_Cluster_plt_871090(v69, v10, -1, v70);
        v72 = *((_QWORD*)v10 + 28);
        v73 = *((int*)v10 + 60) - 1LL;
        v74 = (__int64)(v61 - v72) >> 3;
        if (v74 >= v73) {
          v75 = *((int*)v10 + 60) - 1LL;
        }
        else {
          v75 = (__int64)(v61 - v72) >> 3;
        }
        if (v74 >= v73 && *(_QWORD*)(v72 + 8 * v75) != 0 &&
            *(__int64*)(*(_QWORD*)v72 + 120LL) > 0) {
          ++v75;
        }
        if ((mkvparser_Segment_PreloadCluster_plt(v10, v71, v75) & 1) != 0) {
          return v71;
        }
        mkvparser_Cluster_Destroy_Cluster_plt(v71);
        MatroskaExtractor_4e6640(v71);
      }
      return 0;
    }
  }
  return result;
}

__int64 mkvparser_Segment_ParseNext(void* this_, void* a2, void** a3,
                                    __int64* a4, __int64* a5)
{
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  bool v16;
  void* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 (***v22)(__int64, __int64, __int64, unsigned __int8*);
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void* v26;
  __int64 (**v27)(__int64, __int64, __int64, unsigned __int8*);
  int v28;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39[4];
  __int64 v40;
  __int64 v41;

  *a3 = nullptr;
  v9 = *((_QWORD*)a2 + 2);
  if (v9 < 0) {
    v12 = *(_QWORD*)this_;
    v37 = 0;
    v38 = 0;
    LODWORD(result) = (*(__int64 (**)(__int64, __int64*, __int64*))(
        *(_QWORD*)v12 + 8LL))(v12, &v38, &v37);
    if ((result & 0x80000000) != 0) {
      return (int)result;
    }
    v14 = *((_QWORD*)this_ + 3);
    v15 = *((_QWORD*)this_ + 2) + v14;
    v16 = v14 <= -1;
    v17 = a2;
    v18 = *((_QWORD*)a2 + 1);
    if (v16) {
      v19 = -1;
    }
    else {
      v19 = v15;
    }
    *a4 = v18;
    v20 = *((_QWORD*)v17 + 4);
    if ((v20 & 0x8000000000000000LL) == 0) {
      v21 = v20 + v18;
    LABEL_14:
      *a4 = v21;
      do {
        result = mkvparser_Segment_DoParseNext_plt(this_, a3, a4, a5);
      } while (result > 1);
      return result;
    }
    if (v18 < v37) {
      result = -2;
      if (v18 < 0) {
        return result;
      }
      v22 = *(__int64 (****)(__int64, __int64, __int64, unsigned __int8*))this_;
      if (*(_QWORD*)this_ == 0) {
        return result;
      }
      v41 = 0;
      v40 = 0;
      if ((((__int64 (*)(
               __int64 (***)(__int64, __int64, __int64, unsigned __int8*),
               __int64*, __int64*))(*v22)[1])(v22, &v41, &v40) &
           0x80000000) != 0) {
        return -2;
      }
      v23 = v40;
      if ((v41 & 0x8000000000000000LL) == 0 && v40 > v41) {
        return -2;
      }
      *a5 = 1;
      if (v18 >= v23) {
        if (v18 != 0) {
          return -3;
        }
        v30 = 1;
      }
      else {
        v27 = *v22;
        v39[0] = 0;
        v28 = (*v27)((__int64)v22, v18, 1, (unsigned __int8*)v39);
        if (v28 != 0) {
          if (v28 >= 0) {
            return -3;
          }
          else {
            return v28;
          }
        }
        if (v39[0] == 0) {
          return -2;
        }
        v30 = *a5;
        if ((v39[0] & 0x80) == 0) {
          v31 = 128;
          do {
            v31 >>= 1;
            ++v30;
          } while (((unsigned __int8)v31 & v39[0]) == 0);
          *a5 = v30;
        }
      }
      v32 = v30 + *a4;
      if ((v19 & 0x8000000000000000LL) == 0 && v32 > v19) {
        return -2;
      }
      if (v32 > v37) {
        return -3;
      }
      if (mkvparser_ReadUInt_plt(*(_QWORD*)this_) != 524531317) {
        return -1;
      }
      v33 = *a4 + *a5;
      v34 = v37;
      *a4 = v33;
      if (v33 < v34) {
        result = mkvparser_GetUIntLength_plt(*(_QWORD*)this_);
        if (result < 0) {
          return result;
        }
        if (result == 0) {
          v35 = *a5 + *a4;
          if ((v19 & 0x8000000000000000LL) == 0 && v35 > v19) {
            return -2;
          }
          if (v35 <= v37) {
            result = mkvparser_ReadUInt_plt(*(_QWORD*)this_);
            if (result < 0) {
              return result;
            }
            v36 = *a4 + *a5;
            *a4 = v36;
            if (((-1LL << (7 * (unsigned __int8)*a5)) ^ result) !=
                0xFFFFFFFFFFFFFFFFLL) {
              v21 = v36 + result;
              if (v19 < 0 || v21 <= v19) {
                goto LABEL_14;
              }
            }
            return -2;
          }
        }
        return -3;
      }
    }
    result = -3;
    *a5 = 1;
    return result;
  }
  v10 = v9 + 1;
  if (v10 >= (signed __int64)*((_QWORD*)this_ + 31)) {
    do {
      result = mkvparser_Segment_DoLoadCluster_plt(this_, a4, a5);
    } while (result > 1);
    if ((result & 0x8000000000000000LL) == 0) {
      if (result != 0) {
        return 1;
      }
      else {
        v24 = *((_QWORD*)this_ + 28);
        if (v24 != 0 && (v25 = *((_QWORD*)this_ + 31)) > 0) {
          v26 = *(void**)(v24 + 8 * v25 - 8);
        }
        else {
          v26 = (void*)((char*)this_ + 32);
        }
        *a3 = v26;
        return 0;
      }
    }
  }
  else {
    *a3 = *(void**)(*((_QWORD*)this_ + 28) + 8 * v10);
    return 0;
  }
  return result;
}

_QWORD* mkvparser_Segment_FindCluster(void* this_, __int64 a2)
{
  _QWORD** v2;
  _QWORD* v4;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *((_QWORD***)this_ + 28);
  if (v2 == nullptr || *((__int64*)this_ + 31) <= 0) {
    return (_QWORD*)((char*)this_ + 32);
  }
  v4 = *v2;
  v14 = 0;
  v15 = 0;
  v6 = mkvparser_Cluster_Load_plt(v4, &v15, &v14);
  result = v4;
  if (v6 >= 0) {
    v6 = v4[5];
  }
  if ((v6 & 0x8000000000000000LL) == 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*v4 + 184LL) + 40LL) * v4[5];
  }
  if (a2 > v6) {
    v8 = *((_QWORD*)this_ + 31);
    if (v8 < 1) {
      v9 = 0;
    }
    else {
      v9 = 0;
      do {
        v14 = 0;
        v15 = 0;
        v10 = v9 + ((unsigned __int64)(v8 - v9) >> 1);
        v11 = *(_QWORD**)(*((_QWORD*)this_ + 28) + 8 * v10);
        v12 = mkvparser_Cluster_Load_plt(v11, &v15, &v14);
        if (v12 >= 0) {
          v13 = v11[5];
        }
        else {
          v13 = v12;
        }
        if ((v13 & 0x8000000000000000LL) == 0) {
          v13 = *(_QWORD*)(*(_QWORD*)(*v11 + 184LL) + 40LL) * v11[5];
        }
        if (v13 <= a2) {
          v9 = v10 + 1;
          v10 = v8;
        }
        v8 = v10;
      } while (v9 < v10);
    }
    return *(_QWORD**)(*((_QWORD*)this_ + 28) + 8 * v9 - 8);
  }
  return result;
}

__int64 mkvparser_Segment_GetDuration(void* this_)
{

#pragma clang fp contract(off)
  __int64 v1;
  double v2;

  v1 = *((_QWORD*)this_ + 23);
  v2 = *(double*)(v1 + 48);
  if (v2 < 0x0.0p+0) {
    return -1;
  }
  else {
    return (__int64)(v2 * (double)*(__int64*)(v1 + 40));
  }
}

void mkvparser_Chapters_Destroy_Chapters(void* this_)
{
  int v1;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD* v12;

  v1 = *((_DWORD*)this_ + 13);
  if (v1 >= 1) {
    do {
      v3 = *((_QWORD*)this_ + 5);
      v4 = v1 - 1;
      *((_DWORD*)this_ + 13) = v4;
      mkvparser_Chapters_Edition_Clear_plt(v3 + 16LL * v4);
      v1 = *((_DWORD*)this_ + 13);
    } while (v1 > 0);
  }
  v5 = *((_QWORD*)this_ + 5);
  if (v5 != 0) {
    v7 = v5 - 8;
    v6 = *(_QWORD*)(v5 - 8);
    if (v6 != 0) {
      v8 = -16 * v6;
      v9 = v5 + 16 * v6 - 16;
      do {
        mkvparser_Chapters_Edition_Destroy_Edition_plt(v9);
        v9 -= 16;
        v8 += 16;
      } while (v8 != 0);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v11 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v11 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
    nn_movie_detail_FreeMemory(v7, v12);
  }
}

__int64 mkvparser_Chapters_ExpandEditionsArray(__int64 a1)
{
  int v1;
  atomic_uchar* v3;
  int v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD** v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v1 = *(_DWORD*)(a1 + 48);
  if (v1 <= (signed __int32)*(_DWORD*)(a1 + 52)) {
    v3 = (atomic_uchar*)SdkData_e88330;
    if (v1 != 0) {
      v4 = 2 * v1;
    }
    else {
      v4 = 1;
    }
    if (v4 < 0) {
      v5 = -1;
    }
    else {
      v5 = (16LL * v4) | 8;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v7 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    v9 = (_QWORD*)SdkRoutine_4c3860(16, v5, v8);
    *v9 = v4;
    v10 = v9 + 1;
    v11 = 16LL * v4;
    v12 = v9;
    v13 = v9 + 1;
    do {
      mkvparser_Chapters_Edition_Edition_plt(v13);
      v13 += 2;
      v11 -= 16;
    } while (v11 != 0);
    if (*(int*)(a1 + 52) >= 1) {
      v14 = (_DWORD*)v12 + 5;
      v15 = 0;
      v16 = 0;
      do {
        ++v16;
        v17 = *(_QWORD*)(a1 + 40) + v15;
        v15 += 16;
        *(_QWORD*)(v14 - 3) = *(_QWORD*)v17;
        *(v14 - 1) = *(_DWORD*)(v17 + 8);
        *v14 = *(_DWORD*)(v17 + 12);
        v14 += 4;
      } while (v16 < *(int*)(a1 + 52));
    }
    v18 = *(_QWORD*)(a1 + 40);
    if (v18 != 0) {
      v20 = v18 - 8;
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0) {
        v21 = -16 * v19;
        v22 = v18 + 16 * v19 - 16;
        do {
          mkvparser_Chapters_Edition_Destroy_Edition_plt(v22);
          v22 -= 16;
          v21 += 16;
        } while (v21 != 0);
      }
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v7 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v23 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
      nn_movie_detail_FreeMemory(v20, v23);
    }
    *(_QWORD*)(a1 + 40) = v10;
    *(_DWORD*)(a1 + 48) = v4;
  }
  return 1;
}

__int64 mkvparser_Chapters_Atom_Clear(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 result;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;

  v1 = *(_QWORD*)this_;
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  result = nn_movie_detail_FreeMemory(v1, v6);
  v8 = *((_DWORD*)this_ + 11);
  *(_QWORD*)this_ = 0;
  if (v8 >= 1) {
    do {
      v9 = *((_QWORD*)this_ + 4);
      v10 = v8 - 1;
      *((_DWORD*)this_ + 11) = v10;
      result = mkvparser_Chapters_Display_Clear_plt(v9 + 24LL * v10);
      v8 = *((_DWORD*)this_ + 11);
    } while (v8 > 0);
  }
  v11 = *((_QWORD*)this_ + 4);
  if (v11 != 0) {
    v13 = v11 - 8;
    v12 = *(_QWORD*)(v11 - 8);
    if (v12 != 0) {
      v14 = v11 + 24 * v12 - 24;
      v15 = -24 * v12;
      do {
        mkvparser_Chapters_Display_Destroy_Display_plt(v14);
        v14 -= 24;
        v15 += 24;
      } while (v15 != 0);
    }
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v5 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v16 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
    result = nn_movie_detail_FreeMemory(v13, v16);
  }
  *((_QWORD*)this_ + 4) = 0;
  *((_DWORD*)this_ + 10) = 0;
  return result;
}

__int64 mkvparser_Chapters_Edition_ParseAtom(__int64* a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;

  mkvparser_Chapters_Edition_ExpandAtomsArray_plt();
  v2 = *((_DWORD*)a1 + 3);
  v3 = *a1;
  *((_DWORD*)a1 + 3) = v2 + 1;
  v4 = (_QWORD*)(v3 + 48LL * v2);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = -1;
  v4[3] = -1;
  v4[4] = 0;
  v4[5] = 0;
  return mkvparser_Chapters_Atom_Parse_plt();
}

__int64 mkvparser_Chapters_Atom_GetStopTime(void* this_, void* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;

  if (a2 == nullptr) {
    return -1;
  }
  if (*(_QWORD*)a2 == 0) {
    return -1;
  }
  v2 = *(_QWORD*)(*(_QWORD*)a2 + 184LL);
  if (v2 == 0) {
    return -1;
  }
  v3 = *((_QWORD*)this_ + 3);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = v4 < 1;
  v6 = v4 * v3;
  if (v5 || v3 < 0) {
    return -1;
  }
  else {
    return v6;
  }
}

__int64 mkvparser_Chapters_Display_Clear(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 result;

  v1 = *(_QWORD*)this_;
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v1, v6);
  *(_QWORD*)this_ = 0;
  v7 = *((_QWORD*)this_ + 1);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v7, v8);
  *((_QWORD*)this_ + 1) = 0;
  v9 = *((_QWORD*)this_ + 2);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  result = nn_movie_detail_FreeMemory(v9, v10);
  *((_QWORD*)this_ + 2) = 0;
  return result;
}

__int64 mkvparser_Chapters_Atom_ParseDisplay(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;

  mkvparser_Chapters_Atom_ExpandDisplaysArray_plt();
  v2 = *(_DWORD*)(a1 + 44);
  v3 = *(_QWORD*)(a1 + 32);
  *(_DWORD*)(a1 + 44) = v2 + 1;
  v4 = (_QWORD*)(v3 + 24LL * v2);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  return mkvparser_Chapters_Display_Parse_plt();
}

void mkvparser_Tags_Destroy_Tags(void* this_)
{
  int v1;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD* v12;

  v1 = *((_DWORD*)this_ + 13);
  if (v1 >= 1) {
    do {
      v3 = *((_QWORD*)this_ + 5);
      v4 = v1 - 1;
      *((_DWORD*)this_ + 13) = v4;
      mkvparser_Tags_Tag_Clear_plt(v3 + 16LL * v4);
      v1 = *((_DWORD*)this_ + 13);
    } while (v1 > 0);
  }
  v5 = *((_QWORD*)this_ + 5);
  if (v5 != 0) {
    v7 = v5 - 8;
    v6 = *(_QWORD*)(v5 - 8);
    if (v6 != 0) {
      v8 = -16 * v6;
      v9 = v5 + 16 * v6 - 16;
      do {
        mkvparser_Tags_Tag_Destroy_Tag_plt(v9);
        v9 -= 16;
        v8 += 16;
      } while (v8 != 0);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v11 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v11 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
    nn_movie_detail_FreeMemory(v7, v12);
  }
}

__int64 mkvparser_Tags_Tag_Clear(__int64 this_)
{
  int v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD* v12;

  v1 = *(_DWORD*)(this_ + 12);
  v2 = this_;
  if (v1 >= 1) {
    do {
      v3 = *(_QWORD*)v2;
      v4 = v1 - 1;
      *(_DWORD*)(v2 + 12) = v4;
      this_ = mkvparser_Tags_SimpleTag_Clear_plt(v3 + 16LL * v4);
      v1 = *(_DWORD*)(v2 + 12);
    } while (v1 > 0);
  }
  v5 = *(_QWORD*)v2;
  if (*(_QWORD*)v2 != 0) {
    v7 = v5 - 8;
    v6 = *(_QWORD*)(v5 - 8);
    if (v6 != 0) {
      v8 = -16 * v6;
      v9 = v5 + 16 * v6 - 16;
      do {
        mkvparser_Tags_SimpleTag_Destroy_SimpleTag_plt(v9);
        v9 -= 16;
        v8 += 16;
      } while (v8 != 0);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v11 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v11 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
    this_ = nn_movie_detail_FreeMemory(v7, v12);
  }
  *(_QWORD*)v2 = 0;
  *(_DWORD*)(v2 + 8) = 0;
  return this_;
}

__int64 mkvparser_Tags_ParseTag(void* this_)
{
  __int64 v2;
  _QWORD* v3;

  mkvparser_Tags_ExpandTagsArray_plt();
  v2 = *((int*)this_ + 13);
  v3 = (_QWORD*)(*((_QWORD*)this_ + 5) + 16 * v2);
  *((_DWORD*)this_ + 13) = v2 + 1;
  *v3 = 0;
  v3[1] = 0;
  return mkvparser_Tags_Tag_Parse_plt();
}

__int64 mkvparser_Tags_ExpandTagsArray(__int64 a1)
{
  int v1;
  atomic_uchar* v3;
  int v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD** v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v1 = *(_DWORD*)(a1 + 48);
  if (v1 <= (signed __int32)*(_DWORD*)(a1 + 52)) {
    v3 = (atomic_uchar*)SdkData_e88330;
    if (v1 != 0) {
      v4 = 2 * v1;
    }
    else {
      v4 = 1;
    }
    if (v4 < 0) {
      v5 = -1;
    }
    else {
      v5 = (16LL * v4) | 8;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v7 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    v9 = (_QWORD*)SdkRoutine_4c3860(16, v5, v8);
    *v9 = v4;
    v10 = v9 + 1;
    v11 = 16LL * v4;
    v12 = v9;
    v13 = v9 + 1;
    do {
      mkvparser_Tags_Tag_Tag_plt(v13);
      v13 += 2;
      v11 -= 16;
    } while (v11 != 0);
    if (*(int*)(a1 + 52) >= 1) {
      v14 = (_DWORD*)v12 + 5;
      v15 = 0;
      v16 = 0;
      do {
        ++v16;
        v17 = *(_QWORD*)(a1 + 40) + v15;
        v15 += 16;
        *(_QWORD*)(v14 - 3) = *(_QWORD*)v17;
        *(v14 - 1) = *(_DWORD*)(v17 + 8);
        *v14 = *(_DWORD*)(v17 + 12);
        v14 += 4;
      } while (v16 < *(int*)(a1 + 52));
    }
    v18 = *(_QWORD*)(a1 + 40);
    if (v18 != 0) {
      v20 = v18 - 8;
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0) {
        v21 = -16 * v19;
        v22 = v18 + 16 * v19 - 16;
        do {
          mkvparser_Tags_Tag_Destroy_Tag_plt(v22);
          v22 -= 16;
          v21 += 16;
        } while (v21 != 0);
      }
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v7 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v23 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
      nn_movie_detail_FreeMemory(v20, v23);
    }
    *(_QWORD*)(a1 + 40) = v10;
    *(_DWORD*)(a1 + 48) = v4;
  }
  return 1;
}

__int64 mkvparser_Tags_SimpleTag_Clear(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 result;

  v1 = *(_QWORD*)this_;
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v1, v6);
  *(_QWORD*)this_ = 0;
  v7 = *((_QWORD*)this_ + 1);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  result = nn_movie_detail_FreeMemory(v7, v8);
  *((_QWORD*)this_ + 1) = 0;
  return result;
}

__int64 mkvparser_Tags_Tag_ParseSimpleTag(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;

  mkvparser_Tags_Tag_ExpandSimpleTagsArray_plt();
  v2 = *(int*)(a1 + 12);
  v3 = (_QWORD*)(*(_QWORD*)a1 + 16 * v2);
  *(_DWORD*)(a1 + 12) = v2 + 1;
  *v3 = 0;
  v3[1] = 0;
  return mkvparser_Tags_SimpleTag_Parse_plt();
}

__int64 mkvparser_Tags_Tag_ExpandSimpleTagsArray(__int64* a1)
{
  int v1;
  atomic_uchar* v3;
  int v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD** v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v1 = *((_DWORD*)a1 + 2);
  if (v1 <= (signed __int32)*((_DWORD*)a1 + 3)) {
    v3 = (atomic_uchar*)SdkData_e88330;
    if (v1 != 0) {
      v4 = 2 * v1;
    }
    else {
      v4 = 1;
    }
    if (v4 < 0) {
      v5 = -1;
    }
    else {
      v5 = (16LL * v4) | 8;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v7 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    v9 = (_QWORD*)SdkRoutine_4c3860(16, v5, v8);
    *v9 = v4;
    v10 = v9 + 1;
    v11 = 16LL * v4;
    v12 = v9;
    v13 = v9 + 1;
    do {
      mkvparser_Tags_SimpleTag_SimpleTag_plt(v13);
      v13 += 2;
      v11 -= 16;
    } while (v11 != 0);
    if (*((int*)a1 + 3) >= 1) {
      v14 = v12 + 2;
      v15 = 0;
      v16 = 0;
      do {
        ++v16;
        v17 = (_QWORD*)(*a1 + v15);
        v15 += 16;
        *(v14 - 1) = *v17;
        *v14 = v17[1];
        v14 += 2;
      } while (v16 < *((int*)a1 + 3));
    }
    v18 = *a1;
    if (*a1 != 0) {
      v20 = v18 - 8;
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0) {
        v21 = -16 * v19;
        v22 = v18 + 16 * v19 - 16;
        do {
          mkvparser_Tags_SimpleTag_Destroy_SimpleTag_plt(v22);
          v22 -= 16;
          v21 += 16;
        } while (v21 != 0);
      }
      if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v7 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v23 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
      nn_movie_detail_FreeMemory(v20, v23);
    }
    *a1 = (__int64)v10;
    *((_DWORD*)a1 + 2) = v4;
  }
  return 1;
}

void mkvparser_SegmentInfo_Destroy_SegmentInfo(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;

  v1 = *((_QWORD*)this_ + 7);
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v1, v6);
  *((_QWORD*)this_ + 7) = 0;
  v7 = *((_QWORD*)this_ + 8);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v7, v8);
  *((_QWORD*)this_ + 8) = 0;
  v9 = *((_QWORD*)this_ + 9);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v9, v10);
  *((_QWORD*)this_ + 9) = 0;
}

void mkvparser_ContentEncoding_ContentCompression_Destroy_ContentCompression(
    void* this_)
{
  __int64 v1;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  v1 = *((_QWORD*)this_ + 1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  nn_movie_detail_FreeMemory(v1, v4);
}

void mkvparser_ContentEncoding_ContentEncryption_Destroy_ContentEncryption(
    void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;

  v1 = *((_QWORD*)this_ + 1);
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v1, v6);
  v7 = *((_QWORD*)this_ + 3);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v7, v8);
  v9 = *((_QWORD*)this_ + 5);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v9, v10);
}

__int64 mkvparser_Track_Track(void* this_, void* a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  __int64 result;

  v5 = SdkData_e88c10;
  *((_QWORD*)this_ + 2) = a3;
  *((_QWORD*)this_ + 3) = a4;
  *(_QWORD*)this_ = v5 + 16;
  *((_QWORD*)this_ + 1) = a2;
  mkvparser_Track_Info_Info_plt((char*)this_ + 32);
  result = mkvparser_Track_EOSBlock_EOSBlock_plt((char*)this_ + 152);
  *((_QWORD*)this_ + 22) = 0;
  *((_QWORD*)this_ + 23) = 0;
  return result;
}

__int64 mkvparser_Track_Info_Clear(void* this_)
{
  __int64 v1;
  atomic_uchar* v3;
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
  __int64 result;

  v1 = *((_QWORD*)this_ + 6);
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
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v1, v6);
  *((_QWORD*)this_ + 6) = 0;
  v7 = *((_QWORD*)this_ + 7);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v7, v8);
  *((_QWORD*)this_ + 7) = 0;
  v9 = *((_QWORD*)this_ + 8);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v9, v10);
  v11 = *((_QWORD*)this_ + 10);
  *((_QWORD*)this_ + 8) = 0;
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v11, v12);
  *((_QWORD*)this_ + 10) = 0;
  *((_QWORD*)this_ + 11) = 0;
  v13 = *((_QWORD*)this_ + 9);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v14 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  result = nn_movie_detail_FreeMemory(v13, v14);
  *((_QWORD*)this_ + 9) = 0;
  return result;
}

void mkvparser_Track_Destroy_Track_553ed0(void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  mkvparser_Track_Destroy_Track_plt_871390();
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  nn_movie_detail_FreeMemory((__int64)this_, v4);
}

__int64 mkvparser_Track_Create(void* this_, void* a2, void* a3, __int64 a4,
                               __int64* a5, void** a6)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v13)();
  _QWORD** v14;
  __int64 v15;

  if (*a5 != 0) {
    return -1;
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
  v15 = SdkRoutine_4c3860(16, 192, v14);
  mkvparser_Track_Track_plt(v15, this_, a3, a4);
  if ((unsigned int)mkvparser_Track_Info_Copy_plt(a2, v15 + 32) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    return -1;
  }
  else {
    *a5 = v15;
    return 0;
  }
}

__int64 mkvparser_Track_Info_Copy(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v6;

  if (a2 == a1) {
    return 0;
  }
  *(_QWORD*)a2 = *(_QWORD*)a1;
  *(_QWORD*)(a2 + 8) = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(a2 + 96) = *(_BYTE*)(a1 + 96);
  v4 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a2 + 104) = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a2 + 112) = v4;
  if ((unsigned int)mkvparser_Track_Info_CopyStr_plt(a1, 48) != 0 ||
      (unsigned int)mkvparser_Track_Info_CopyStr_plt(a1, 56) != 0 ||
      (unsigned int)mkvparser_Track_Info_CopyStr_plt(a1, 64) != 0 ||
      (unsigned int)mkvparser_Track_Info_CopyStr_plt(a1, 72) != 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(a1 + 88) == 0) {
    return 0;
  }
  if (*(_QWORD*)(a1 + 80) == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(a2 + 80) != 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(a2 + 88) != 0) {
    return 0xFFFFFFFFLL;
  }
  v6 = SdkRoutine_870e80(1);
  *(_QWORD*)(a2 + 80) = v6;
  if (v6 == 0) {
    return 0xFFFFFFFFLL;
  }
  memcpy_plt(v6, *(_QWORD*)(a1 + 80), *(_QWORD*)(a1 + 88));
  *(_QWORD*)(a2 + 88) = *(_QWORD*)(a1 + 88);
  return 0;
}

__int64 mkvparser_Track_GetFirst(void* this_, void** a2)
{
  _QWORD* v2;
  _QWORD* v5;
  int v7;
  __int64 result;
  void** v9;
  void* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *((_QWORD**)this_ + 1);
  v5 = (_QWORD*)v2[29];
  if (v5 == nullptr) {
    if (v2[28] != 0 && (signed __int64)v2[31] > 0LL) {
      goto LABEL_33;
    }
    v5 = v2 + 4;
  }
  v7 = 0;
  while (*v5 != 0) {
    if ((__int64)v5[8] > 0) {
      goto LABEL_15;
    }
    v16 = 0;
    v15 = 0;
    result = mkvparser_Cluster_Parse_plt(v5, &v16, &v15);
    if (result < 0) {
      *a2 = nullptr;
      return result;
    }
    if ((__int64)v5[8] < 1) {
      *a2 = nullptr;
    }
    else {
    LABEL_15:
      v9 = (void**)v5[6];
      v10 = *v9;
      *a2 = *v9;
      if (v10 != nullptr) {
        while (1) {
          if (*(_QWORD*)((*(__int64 (**)(void*))(*(_QWORD*)v10 + 16LL))(v10) +
                         16) == *((_QWORD*)this_ + 5) &&
              ((*(__int64 (**)(void*, _QWORD))(*(_QWORD*)this_ + 16LL))(this_,
                                                                        *a2) &
               1) != 0) {
            return 0;
          }
          v11 = *((_QWORD*)*a2 + 2) + 1LL;
          if (v11 >= v5[8]) {
            v16 = 0;
            v15 = 0;
            result = mkvparser_Cluster_Parse_plt(v5, &v16, &v15);
            if (result < 0) {
              return result;
            }
            if (result != 0) {
              break;
            }
          }
          v10 = *(void**)(v5[6] + 8 * v11);
          if (v10 == nullptr) {
            break;
          }
          *a2 = v10;
        }
        if (v7 > 98) {
          goto LABEL_33;
        }
        ++v7;
      }
    }
    v5 = (_QWORD*)mkvparser_Segment_GetNext_plt(*((_QWORD*)this_ + 1), v5);
    if (v5 == nullptr) {
      goto LABEL_33;
    }
  }
  v12 = *((_QWORD**)this_ + 1);
  v13 = v12[3];
  if ((v13 & 0x8000000000000000LL) == 0) {
    v14 = v12[2] + v13;
    goto LABEL_28;
  }
  v16 = 0;
  v15 = 0;
  if (((*(__int64 (**)(_QWORD, __int64*, __int64*))(*(_QWORD*)*v12 + 8LL))(
           *v12, &v16, &v15) &
       0x80000000) == 0) {
    v14 = v16;
    if (v16 < 0) {
    LABEL_29:
      *a2 = nullptr;
      return -3;
    }
  LABEL_28:
    if ((signed __int64)v12[20] >= v14) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
LABEL_33:
  result = 1;
  *a2 = (void*)((char*)this_ + 152);
  return result;
}

__int64 mkvparser_Track_GetNext(void* this_, void* a2, void** a3)
{
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  void* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  void* v17;
  __int64 v19;
  __int64 v20;

  v6 = (*(__int64 (**)(void*))(*(_QWORD*)a2 + 16LL))(a2);
  if (v6 == 0 || *(_QWORD*)(v6 + 16) != *((_QWORD*)this_ + 5)) {
    return -1;
  }
  v7 = *((_QWORD**)a2 + 1);
  v8 = *((_QWORD*)a2 + 2) + 1LL;
  if (v8 < v7[8]) {
    goto LABEL_4;
  }
  v20 = 0;
  v19 = 0;
  v11 = mkvparser_Cluster_Parse_plt(v7, &v20, &v19);
  v10 = v11;
  if (v11 < 0) {
  LABEL_33:
    *a3 = nullptr;
    return v10;
  }
  if (v11 != 0) {
    v9 = nullptr;
    *a3 = nullptr;
  }
  else {
  LABEL_4:
    v9 = *(void**)(v7[6] + 8 * v8);
    *a3 = v9;
  }
  v12 = 0;
  while (1) {
    while (v9 != nullptr) {
      if (*(_QWORD*)((*(__int64 (**)(void*))(*(_QWORD*)v9 + 16LL))(v9) + 16) ==
          *((_QWORD*)this_ + 5)) {
        return 0;
      }
      v13 = *((_QWORD*)*a3 + 2) + 1LL;
      if (v13 < v7[8]) {
        goto LABEL_10;
      }
      v20 = 0;
      v19 = 0;
      v14 = mkvparser_Cluster_Parse_plt(v7, &v20, &v19);
      v10 = v14;
      if (v14 < 0) {
      LABEL_17:
        v9 = nullptr;
        *a3 = nullptr;
        if (v10 < 0) {
          return v10;
        }
      }
      else {
        if (v14 != 0) {
          v10 = 0;
          goto LABEL_17;
        }
      LABEL_10:
        v9 = *(void**)(v7[6] + 8 * v13);
        *a3 = v9;
      }
    }
    v15 = (_QWORD*)mkvparser_Segment_GetNext_plt(*((_QWORD*)this_ + 1), v7);
    if (v15 == nullptr) {
      goto LABEL_30;
    }
    v7 = v15;
    if (*v15 == 0) {
      break;
    }
    if ((__int64)v15[8] > 0) {
      goto LABEL_24;
    }
    v20 = 0;
    v19 = 0;
    v16 = mkvparser_Cluster_Parse_plt(v15, &v20, &v19);
    if (v16 < 0) {
      v10 = v16;
      goto LABEL_33;
    }
    if ((__int64)v7[8] < 1) {
      v9 = nullptr;
      *a3 = nullptr;
    }
    else {
    LABEL_24:
      v9 = nullptr;
      v17 = *(void**)v7[6];
      *a3 = v17;
      if (v17 != nullptr) {
        ++v12;
        v9 = v17;
        if (v12 == 100) {
          goto LABEL_30;
        }
      }
    }
  }
  if ((mkvparser_Segment_DoneParsing_plt(*((_QWORD*)this_ + 1)) & 1) != 0) {
  LABEL_30:
    *a3 = (void*)((char*)this_ + 152);
    return 1;
  }
  *a3 = nullptr;
  return -3;
}

_QWORD* mkvparser_Track_EOSBlock_EOSBlock(_QWORD* this_)
{
  *(this_ + 2) = 0x8000000000000000LL;
  *this_ = SdkData_e88c18 + 16;
  *(this_ + 1) = 0;
  return this_;
}

_QWORD* mkvparser_BlockEntry_BlockEntry(_QWORD* this_, void* a2, __int64 a3)
{
  __int64 v3;

  v3 = SdkData_e88c20;
  *(this_ + 2) = a3;
  *this_ = v3 + 16;
  *(this_ + 1) = a2;
  return this_;
}

__int64 mkvparser_VideoTrack_VideoTrack(void* this_, void* a2, __int64 a3,
                                        __int64 a4)
{
  __int64 v5;
  __int64 result;
  __int64 v7;

  v5 = SdkData_e88c10;
  *((_QWORD*)this_ + 2) = a3;
  *((_QWORD*)this_ + 3) = a4;
  *(_QWORD*)this_ = v5 + 16;
  *((_QWORD*)this_ + 1) = a2;
  mkvparser_Track_Info_Info_plt((char*)this_ + 32);
  result = mkvparser_Track_EOSBlock_EOSBlock_plt((char*)this_ + 152);
  *((_QWORD*)this_ + 22) = 0;
  *((_QWORD*)this_ + 23) = 0;
  v7 = SdkData_e88c28;
  *((_QWORD*)this_ + 30) = 0;
  *((_QWORD*)this_ + 32) = 0;
  *((_QWORD*)this_ + 33) = 0;
  *(_QWORD*)this_ = v7 + 16;
  return result;
}

void mkvparser_VideoTrack_Destroy_VideoTrack(void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  mkvparser_VideoTrack_Destroy_VideoTrack_plt();
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  nn_movie_detail_FreeMemory((__int64)this_, v4);
}

__int64 mkvparser_AudioTrack_AudioTrack(void* this_, void* a2, __int64 a3,
                                        __int64 a4)
{
  __int64 v5;
  __int64 result;

  v5 = SdkData_e88c10;
  *((_QWORD*)this_ + 2) = a3;
  *((_QWORD*)this_ + 3) = a4;
  *(_QWORD*)this_ = v5 + 16;
  *((_QWORD*)this_ + 1) = a2;
  mkvparser_Track_Info_Info_plt((char*)this_ + 32);
  result = mkvparser_Track_EOSBlock_EOSBlock_plt((char*)this_ + 152);
  *((_QWORD*)this_ + 22) = 0;
  *((_QWORD*)this_ + 23) = 0;
  *(_QWORD*)this_ = SdkData_e88c30 + 16;
  return result;
}

void mkvparser_Tracks_Destroy_Tracks(void* this_)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD* v8;

  v1 = *((__int64**)this_ + 5);
  v2 = *((__int64**)this_ + 6);
  if (v1 != v2) {
    do {
      v5 = *v1++;
      v4 = v5;
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      }
    } while (v1 != v2);
    v1 = *((__int64**)this_ + 5);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v7 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v7 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
  nn_movie_detail_FreeMemory((__int64)v1, v8);
}

__int64 mkvparser_Cluster_CreateBlock(void* this_, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5)
{
  __int64 v8;
  __int64 v9;
  atomic_uchar* v10;
  __int64 v11;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v13)();
  _QWORD** v14;
  __int64 v15;
  _QWORD** v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_uchar* v26;
  void(__attribute__((noreturn)) * v27)();
  _QWORD** v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD** v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  bool v74;
  __int64* v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  void(__attribute__((noreturn)) * v83)();
  __int64 v84;
  __int64 v85;

  if (a2 != 163 && a2 != 160) {
    return -1;
  }
  v8 = *((_QWORD*)this_ + 8);
  if (v8 < 0) {
    v22 = *((_QWORD*)this_ + 9);
    v23 = a2;
    v24 = a5;
    *((_QWORD*)this_ + 7) = v22;
    v25 = 8 * v22;
    v26 = (atomic_uchar*)SdkData_e88330;
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v83 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v83) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v27 = SdkData_e88338[0];
    v28 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v29 = nn_movie_detail_AllocateMemory(v25, v28);
    v30 = *((_QWORD*)this_ + 7);
    *((_QWORD*)this_ + 6) = v29;
    v31 = 120 * v30;
    if ((atomic_load_explicit(v26, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v27 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v27) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v32 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v27);
    v33 = nn_movie_detail_AllocateMemory(v31, v32);
    if (v33 == 0) {
      return -4;
    }
    v35 = *((__int64**)this_ + 12);
    v34 = *((_QWORD*)this_ + 13);
    if ((unsigned __int64)v35 >= v34) {
      v37 = *((_QWORD*)this_ + 11);
      v38 = (__int64)v35 - v37;
      v39 = (v38 >> 3) + 1;
      if (v39 >> 61 != 0) {
        goto LABEL_66;
      }
      v40 = v34 - v37;
      v41 = v33;
      v42 = v40 >> 2;
      if (v40 >> 2 <= v39) {
        v42 = (v38 >> 3) + 1;
      }
      if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
        v43 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v43 = v42;
      }
      v44 = nn_movie_detail_AllocateMemory(8 * v43, *((_QWORD***)this_ + 14));
      v46 = v44 + 8 * v43;
      v45 = (__int64*)(v44 + v38);
      *v45 = v41;
      v36 = v44 + v38 + 8;
      v47 = *((_QWORD*)this_ + 11);
      v48 = *((_QWORD*)this_ + 12) - v47;
      v49 = (char*)v45 - v48;
      memcpy_plt((char*)v45 - v48, v47, v48);
      v50 = *((_QWORD*)this_ + 11);
      *((_QWORD*)this_ + 11) = v49;
      *((_QWORD*)this_ + 12) = v36;
      *((_QWORD*)this_ + 13) = v46;
      if (v50 != 0) {
        nn_movie_detail_FreeMemory(v50, *((_QWORD**)this_ + 14));
      }
    }
    else {
      *v35 = v33;
      v36 = (__int64)(v35 + 1);
    }
    v51 = *((_QWORD*)this_ + 6);
    a5 = v24;
    a2 = v23;
    *((_QWORD*)this_ + 12) = v36;
    *((_QWORD*)this_ + 10) = 0;
    if (v51 == 0) {
      return -4;
    }
    *((_QWORD*)this_ + 8) = 0;
  }
  else {
    v9 = *((_QWORD*)this_ + 7);
    if (v8 >= v9) {
      v84 = a5;
      v85 = a2;
      v10 = (atomic_uchar*)SdkData_e88330;
      v11 = *((_QWORD*)this_ + 9) + v9;
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
      v15 = nn_movie_detail_AllocateMemory(8 * v11, v14);
      if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v13 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v16 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
      v17 = nn_movie_detail_AllocateMemory(120 * v11, v16);
      if (v17 == 0) {
        return -4;
      }
      v19 = *((__int64**)this_ + 12);
      v18 = *((_QWORD*)this_ + 13);
      if ((unsigned __int64)v19 < v18) {
        *v19 = v17;
        v20 = (__int64)(v19 + 1);
        goto LABEL_36;
      }
      v53 = *((_QWORD*)this_ + 11);
      v54 = (__int64)v19 - v53;
      v55 = (v54 >> 3) + 1;
      if (v55 >> 61 == 0) {
        v56 = v18 - v53;
        v57 = v17;
        v58 = v56 >> 2;
        if (v56 >> 2 <= v55) {
          v58 = (v54 >> 3) + 1;
        }
        if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF8LL) {
          v59 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v59 = v58;
        }
        v60 = nn_movie_detail_AllocateMemory(8 * v59, *((_QWORD***)this_ + 14));
        v62 = v60 + 8 * v59;
        v61 = (__int64*)(v60 + v54);
        *v61 = v57;
        v20 = v60 + v54 + 8;
        v63 = *((_QWORD*)this_ + 11);
        v64 = *((_QWORD*)this_ + 12) - v63;
        v65 = (char*)v61 - v64;
        memcpy_plt((char*)v61 - v64, v63, v64);
        v66 = *((_QWORD*)this_ + 11);
        *((_QWORD*)this_ + 11) = v65;
        *((_QWORD*)this_ + 12) = v20;
        *((_QWORD*)this_ + 13) = v62;
        if (v66 != 0) {
          nn_movie_detail_FreeMemory(v66, *((_QWORD**)this_ + 14));
        }
      LABEL_36:
        *((_QWORD*)this_ + 12) = v20;
        *((_QWORD*)this_ + 10) = 0;
        if (v15 != 0) {
          v67 = *((_QWORD*)this_ + 6);
          v68 = *((_QWORD*)this_ + 8);
          if (v68 != 0) {
            v69 = 8 * v68 - 8;
            if ((~(_BYTE)v69 & 0x38) != 0) {
              v71 = *((__int64**)this_ + 6);
              v72 = -(__int64)(((unsigned __int8)((unsigned int)v69 >> 3) + 1) &
                               7);
              v70 = (_QWORD*)v15;
              do {
                v73 = *v71++;
                v74 = __CFADD__(v72++, 1);
                *v70++ = v73;
              } while (!v74);
            }
            else {
              v70 = (_QWORD*)v15;
              v71 = *((__int64**)this_ + 6);
            }
            if (v69 >= 0x38) {
              v75 = (__int64*)(v67 + 8 * v68);
              do {
                *v70 = *v71;
                v70[1] = v71[1];
                v70[2] = v71[2];
                v70[3] = v71[3];
                v70[4] = v71[4];
                v70[5] = v71[5];
                v70[6] = v71[6];
                v76 = v71[7];
                v71 += 8;
                v70[7] = v76;
                v70 += 8;
              } while (v71 != v75);
            }
            v67 = *((_QWORD*)this_ + 6);
          }
          if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0 &&
              (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
            *(_DWORD*)v13 = 0;
            *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v13) = 1;
            __cxa_guard_release_plt(SdkData_e88330);
          }
          v77 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v13);
          nn_movie_detail_FreeMemory(v67, v77);
          a5 = v84;
          *((_QWORD*)this_ + 6) = v15;
          *((_QWORD*)this_ + 7) = v11;
          v52 = *((_QWORD*)this_ + 10);
          if (v85 != 160) {
            goto LABEL_50;
          }
          goto LABEL_27;
        }
        return -4;
      }
    LABEL_66:
      nn_fs_10de70();
    }
  }
  v52 = *((_QWORD*)this_ + 10);
  if (a2 != 160) {
  LABEL_50:
    if (v52 >= (signed __int64)*((_QWORD*)this_ + 7)) {
      result = -1;
    }
    else {
      v78 = *((_QWORD*)this_ + 8);
      v79 = *((_QWORD*)this_ + 6);
      v80 = *(_QWORD*)(*((_QWORD*)this_ + 12) - 8LL) + 120 * v52;
      mkvparser_SimpleBlock_SimpleBlock_plt(v80, this_, v78, a3, a4);
      *(_QWORD*)(v79 + 8 * v78) = v80;
      result = mkvparser_Block_Parse_plt(v80 + 24, *(_QWORD*)(v80 + 8));
      if (result != 0) {
        v81 = *(_QWORD**)(v79 + 8 * v78);
        if (v81 != nullptr) {
          v82 = result;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
              *v81 + 8LL))((void*)(v81), *(_QWORD*)(v79 + 8 * v78));
          result = v82;
        }
        *(_QWORD*)(v79 + 8 * v78) = 0;
      }
      else {
        ++*((_QWORD*)this_ + 8);
      }
    }
    goto LABEL_57;
  }
LABEL_27:
  result = mkvparser_Cluster_CreateBlockGroup_plt(this_, a3, a4, a5, v52);
LABEL_57:
  ++*((_QWORD*)this_ + 10);
  return result;
}

__int64 mkvparser_Cluster_Cluster_55be40(void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  __int64 result;
  int v5;

  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  *(_QWORD*)this_ = 0;
  *((_QWORD*)this_ + 1) = 0;
  *((_QWORD*)this_ + 10) = 0;
  *((_QWORD*)this_ + 8) = 0;
  *((_QWORD*)this_ + 9) = 128;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v5 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v5 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  result = nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  *((_QWORD*)this_ + 11) = 0;
  *((_QWORD*)this_ + 12) = 0;
  *((_QWORD*)this_ + 13) = 0;
  *((_QWORD*)this_ + 14) = result;
  *((_QWORD*)this_ + 15) = 0;
  return result;
}

__int64 mkvparser_Cluster_Cluster_55bef0(void* this_, void* a2, __int64 a3,
                                         __int64 a4)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v6)();
  __int64 result;
  int v8;

  *(_QWORD*)this_ = a2;
  *((_QWORD*)this_ + 1) = a4;
  *((_QWORD*)this_ + 2) = a3;
  *((_QWORD*)this_ + 3) = a4;
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 10) = 0;
  *((_QWORD*)this_ + 4) = -1;
  *((_QWORD*)this_ + 5) = -1;
  *((_QWORD*)this_ + 8) = -1;
  *((_QWORD*)this_ + 9) = 128;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v8 = __cxa_guard_acquire_plt(SdkData_e88330);
    v6 = SdkData_e88338[0];
    if (v8 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v6 = SdkData_e88338[0];
    }
  }
  result = nn_os_GetTlsValue_plt(*(unsigned int*)v6);
  *((_QWORD*)this_ + 11) = 0;
  *((_QWORD*)this_ + 12) = 0;
  *((_QWORD*)this_ + 13) = 0;
  *((_QWORD*)this_ + 14) = result;
  *((_QWORD*)this_ + 15) = 0;
  return result;
}

void mkvparser_Cluster_Destroy_Cluster(void* this_)
{
  __int64 v1;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_uchar* v7;
  unsigned int* v8;
  unsigned __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  atomic_uchar* v16;
  unsigned int* v17;
  _DWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  _DWORD* v21;
  void(__attribute__((noreturn)) * v22)();

  v1 = *((_QWORD*)this_ + 8);
  if (v1 < 1) {
    v15 = *((_QWORD*)this_ + 6);
    v16 = (atomic_uchar*)SdkData_e88330;
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_plt_alt1(SdkData_e88330) != 0) {
      v22 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v22) = 1;
      __cxa_guard_release_plt_alt1(SdkData_e88330);
    }
    v17 = (unsigned int*)SdkData_e88338[0];
    v18 = (_DWORD*)nn_os_GetTlsValue_plt_alt1(*(_DWORD*)SdkData_e88338[0]);
    nn_movie_detail_FreeMemory_alt1(v15, v18);
    v14 = *((_QWORD*)this_ + 11);
    if (*((_QWORD*)this_ + 12) != v14) {
      v19 = 0;
      do {
        v20 = *(_QWORD*)(v14 + 8 * v19);
        if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0 &&
            __cxa_guard_acquire_plt_alt1((__int64)v16) != 0) {
          *v17 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
          __cxa_guard_release_plt_alt1((__int64)v16);
        }
        v21 = (_DWORD*)nn_os_GetTlsValue_plt_alt1(*v17);
        nn_movie_detail_FreeMemory_alt1(v20, v21);
        v14 = *((_QWORD*)this_ + 11);
        ++v19;
      } while (v19 < (*((_QWORD*)this_ + 12) - v14) >> 3);
    }
    *((_QWORD*)this_ + 12) = v14;
    if (v14 != 0) {
      goto LABEL_17;
    }
  }
  else {
    for (i = 0; i < v1; ++i) {
      v4 = *(_QWORD*)(*((_QWORD*)this_ + 6) + 8 * i);
      if (v4 != 0) {
        v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        if (v5 != 0) {
          mkvparser_Block_Destroy_Block_plt_alt1(v5);
        }
        *(_QWORD*)(*((_QWORD*)this_ + 6) + 8 * i) = 0;
        v1 = *((_QWORD*)this_ + 8);
      }
    }
    v6 = *((_QWORD*)this_ + 11);
    v7 = (atomic_uchar*)SdkData_e88330;
    v8 = (unsigned int*)SdkData_e88338[0];
    if (*((_QWORD*)this_ + 12) != v6) {
      v9 = 0;
      do {
        v10 = *(_QWORD*)(v6 + 8 * v9);
        if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
            __cxa_guard_acquire_plt_alt1((__int64)v7) != 0) {
          *v8 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
          __cxa_guard_release_plt_alt1((__int64)v7);
        }
        v11 = (_DWORD*)nn_os_GetTlsValue_plt_alt1(*v8);
        nn_movie_detail_FreeMemory_alt1(v10, v11);
        v6 = *((_QWORD*)this_ + 11);
        ++v9;
      } while (v9 < (*((_QWORD*)this_ + 12) - v6) >> 3);
    }
    *((_QWORD*)this_ + 12) = v6;
    v12 = *((_QWORD*)this_ + 6);
    if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire_plt_alt1(SdkData_e88330) != 0) {
      *v8 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
      __cxa_guard_release_plt_alt1(SdkData_e88330);
    }
    v13 = (_DWORD*)nn_os_GetTlsValue_plt_alt1(*v8);
    nn_movie_detail_FreeMemory_alt1(v12, v13);
    v14 = *((_QWORD*)this_ + 11);
    if (v14 != 0) {
    LABEL_17:
      *((_QWORD*)this_ + 12) = v14;
      nn_movie_detail_FreeMemory_alt1(v14, *((_DWORD**)this_ + 14));
    }
  }
}

__int64 mkvparser_Cluster_GetFirstTime(void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;

  if (*((__int64*)this_ + 8) > 0) {
    goto LABEL_21;
  }
  v10 = 0;
  v11 = 0;
  result = mkvparser_Cluster_Parse_plt(this_, &v11, &v10);
  if (result < 0) {
    return result;
  }
  if (*((__int64*)this_ + 8) >= 1) {
  LABEL_21:
    v2 = **((_QWORD**)this_ + 6);
    if (v2 != 0) {
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      v10 = 0;
      v11 = 0;
      v4 = mkvparser_Cluster_Load_plt(this_, &v11, &v10);
      v5 = *((_QWORD*)this_ + 5);
      if (v4 < 0) {
        v5 = v4;
      }
      if (v5 < 0 ||
          (v6 = *(__int16*)(v3 + 24), (v5 ^ 0x7FFFFFFFFFFFFFFFLL) < v6)) {
        v7 = -1;
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
      }
      else {
        v7 = v5 + v6;
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
        if (v7 == 0) {
          return v7 * v8;
        }
      }
      if (v8 > 0x7FFFFFFFFFFFFFFFLL / v7) {
        return -1;
      }
      return v7 * v8;
    }
  }
  v10 = 0;
  v11 = 0;
  result = mkvparser_Cluster_Load_plt(this_, &v11, &v10);
  v8 = *((_QWORD*)this_ + 5);
  if (result >= 0) {
    result = *((_QWORD*)this_ + 5);
  }
  if ((result & 0x8000000000000000LL) == 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
    return v7 * v8;
  }
  return result;
}

__int64 mkvparser_Cluster_GetLastTime(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v11 = 0;
  v12 = 0;
  result = mkvparser_Cluster_Parse_plt(this_, &v12, &v11);
  if ((result & 0x8000000000000000LL) == 0) {
    while (result == 0) {
      v11 = 0;
      v12 = 0;
      result = mkvparser_Cluster_Parse_plt(this_, &v12, &v11);
      if (result < 0) {
        return result;
      }
    }
    v3 = *((_QWORD*)this_ + 8);
    if (v3 >= 1) {
      v4 = *(_QWORD*)(*((_QWORD*)this_ + 6) + 8 * v3 - 8);
      if (v4 != 0) {
        v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        v11 = 0;
        v12 = 0;
        v6 = mkvparser_Cluster_Load_plt(this_, &v12, &v11);
        v7 = *((_QWORD*)this_ + 5);
        if (v6 < 0) {
          v7 = v6;
        }
        if (v7 < 0 ||
            (v8 = *(__int16*)(v5 + 24), (v7 ^ 0x7FFFFFFFFFFFFFFFLL) < v8)) {
          v9 = -1;
          v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
          goto LABEL_17;
        }
        v9 = v7 + v8;
        v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
        if (v9 != 0) {
        LABEL_17:
          if (v10 > 0x7FFFFFFFFFFFFFFFLL / v9) {
            return -1;
          }
        }
        return v9 * v10;
      }
    }
    v11 = 0;
    v12 = 0;
    result = mkvparser_Cluster_Load_plt(this_, &v12, &v11);
    v10 = *((_QWORD*)this_ + 5);
    if (result >= 0) {
      result = *((_QWORD*)this_ + 5);
    }
    if ((result & 0x8000000000000000LL) == 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)this_ + 184LL) + 40LL);
      return v9 * v10;
    }
  }
  return result;
}

__int64 mkvparser_Cluster_CreateBlockGroup(void* this_, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5)
{
  unsigned int (***v5)(_QWORD, __int64, __int64, char*);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)(_QWORD, __int64, __int64, char*);
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 (**v20)(_QWORD, __int64, __int64, char*);
  signed int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  __int64 (**v26)(_QWORD, __int64, __int64, char*);
  __int64 v27;
  __int64 v28;
  __int64 (**v29)(_QWORD, __int64, __int64, char*);
  __int64 v30;
  __int64 (**v31)(_QWORD, __int64, __int64, char*);
  __int64 (**v32)(_QWORD, __int64, __int64, char*);
  __int64 (**v33)(_QWORD, __int64, __int64, char*);
  __int64 (**v34)(_QWORD, __int64, __int64, char*);
  __int64 (**v35)(_QWORD, __int64, __int64, char*);
  __int64 (**v36)(_QWORD, __int64, __int64, char*);
  __int64 (**v37)(_QWORD, __int64, __int64, char*);
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 (**v43)(_QWORD, __int64, __int64, char*);
  unsigned __int64 v44;
  __int64 v45;
  __int64 (**v46)(_QWORD, __int64, __int64, char*);
  __int64 (**v47)(_QWORD, __int64, __int64, char*);
  __int64 (**v48)(_QWORD, __int64, __int64, char*);
  __int64 (**v49)(_QWORD, __int64, __int64, char*);
  __int64 (**v50)(_QWORD, __int64, __int64, char*);
  __int64 (**v51)(_QWORD, __int64, __int64, char*);
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  char v59;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _BYTE v68[4];
  _BYTE v69[4];
  _BYTE v70[4];
  _BYTE v71[4];
  char v72[4];

  v5 = **(unsigned int (*****)(_QWORD, __int64, __int64, char*))this_;
  if (v5 == nullptr) {
    return -2;
  }
  v6 = a3 + a2;
  v7 = -1;
  v8 = -1;
  v9 = a2;
  v64 = 0;
  v67 = -1;
  v65 = a3 + a2;
  v63 = 1;
  while (v9 < v6) {
    if (v9 < 0) {
      return -2;
    }
    v13 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
    v14 = v8;
    v68[0] = 0;
    if ((unsigned int)(*v13)(v5, v9, 1, v68) != 0) {
      return -2;
    }
    v15 = v68[0];
    if (v68[0] == 0) {
      return -2;
    }
    if ((v68[0] & 0x80) != 0) {
      v17 = 1;
      v18 = v68[0];
    }
    else {
      if (v68[0] <= 0x3Fu) {
        if (v68[0] > 0x1Fu) {
          v16 = 1;
          v17 = 3;
        }
        else {
          if (v68[0] < 0x10u) {
            return -2;
          }
          v17 = 4;
          v16 = 0;
        }
      }
      else {
        v16 = 0;
        v17 = 2;
      }
      if ((**v5)(v5, v9 + 1, 1, v68) != 0) {
        return -2;
      }
      v18 = v68[0] | (unsigned __int64)(v15 << 8);
      if ((unsigned int)v15 <= 0x3F) {
        if ((**v5)(v5, v9 + 2, 1, v68) != 0) {
          return -2;
        }
        v18 = v68[0] | (v18 << 8);
        if ((v16 & 1) == 0) {
          if ((**v5)(v5, v9 + 3, 1, v68) != 0) {
            return -2;
          }
          v18 = v68[0] | (v18 << 8);
        }
      }
    }
    v19 = v17 + v9;
    if (v17 + v9 > v6) {
      return -2;
    }
    if (v19 < 0) {
      v23 = -2;
      v24 = v17 + v19;
      if (v18 != 155) {
        goto LABEL_48;
      }
      goto LABEL_38;
    }
    v20 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
    v69[0] = 0;
    v21 = (*v20)(v5, v17 + v9, 1, v69);
    v66 = v7;
    if (v21 < 0) {
      v22 = v67;
    }
    else {
      if (v21 != 0) {
        v22 = v67;
      LABEL_36:
        v23 = -3;
        goto LABEL_46;
      }
      if (v69[0] == 0) {
        v22 = v67;
        v23 = -2;
        goto LABEL_46;
      }
      v22 = v67;
      if ((v69[0] & 0x80) != 0) {
        v23 = v69[0] & 0x7F;
        goto LABEL_46;
      }
      v40 = 128;
      v27 = 1;
      do {
        v41 = v27;
        v40 >>= 1;
        ++v27;
      } while (((unsigned __int8)v40 & v69[0]) == 0);
      v23 = v69[0] & ~v40;
      v42 = v17 + v9 + 1;
      while (1) {
        v21 = (**v5)(v5, v42, 1, v69);
        if (v21 < 0) {
          break;
        }
        if (v21 != 0) {
          goto LABEL_36;
        }
        --v41;
        ++v42;
        v23 = v69[0] | (unsigned __int64)(v23 << 8);
        if (v41 == 0) {
          goto LABEL_47;
        }
      }
    }
    v23 = v21;
  LABEL_46:
    v27 = 1;
  LABEL_47:
    v67 = v22;
    v28 = v27;
    v7 = v66;
    v6 = v65;
    v24 = v28 + v19;
    if (v18 != 155) {
    LABEL_48:
      if (v18 == 251) {
        if ((unsigned __int64)(v23 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
          return -2;
        }
        if (v24 < 0) {
          return -1;
        }
        v29 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
        v72[0] = 0;
        if (((*v29)(v5, v24, 1, v72) & 0x80000000) != 0) {
          return -1;
        }
        v30 = v72[0];
        v8 = v14;
        if ((unsigned __int64)v23 >= 2) {
          v31 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
          v71[0] = 0;
          if (((*v31)(v5, v24 + 1, 1, v71) & 0x80000000) != 0) {
            return -1;
          }
          v30 = v71[0] | (unsigned __int64)(v30 << 8);
          if (v23 != 2) {
            v32 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
            v71[0] = 0;
            if (((*v32)(v5, v24 + 2, 1, v71) & 0x80000000) != 0) {
              return -1;
            }
            v30 = v71[0] | (unsigned __int64)(v30 << 8);
            if (v23 != 3) {
              v33 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
              v71[0] = 0;
              if (((*v33)(v5, v24 + 3, 1, v71) & 0x80000000) != 0) {
                return -1;
              }
              v30 = v71[0] | (unsigned __int64)(v30 << 8);
              if (v23 != 4) {
                v34 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
                v71[0] = 0;
                if (((*v34)(v5, v24 + 4, 1, v71) & 0x80000000) != 0) {
                  return -1;
                }
                v30 = v71[0] | (unsigned __int64)(v30 << 8);
                if (v23 != 5) {
                  v35 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
                  v71[0] = 0;
                  if (((*v35)(v5, v24 + 5, 1, v71) & 0x80000000) != 0) {
                    return -1;
                  }
                  v30 = v71[0] | (unsigned __int64)(v30 << 8);
                  if (v23 != 6) {
                    v36 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
                    v71[0] = 0;
                    if (((*v36)(v5, v24 + 6, 1, v71) & 0x80000000) != 0) {
                      return -1;
                    }
                    v30 = v71[0] | (unsigned __int64)(v30 << 8);
                    if (v23 != 7) {
                      v37 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
                      v71[0] = 0;
                      if (((*v37)(v5, v24 + 7, 1, v71) & 0x80000000) != 0) {
                        return -1;
                      }
                      v30 = v71[0] | (unsigned __int64)(v30 << 8);
                    }
                  }
                }
              }
            }
          }
        }
        v38 = v63;
        if (v30 >= 1) {
          v39 = v30;
        }
        else {
          v39 = v64;
        }
        if (v30 < 1) {
          v38 = v30;
        }
        v63 = v38;
        v64 = v39;
      }
      else {
        v10 = v67;
        v8 = v14;
        if (v7 >= 0) {
          v11 = v7;
        }
        else {
          v11 = v24;
        }
        if (v7 >= 0) {
          v12 = v67;
        }
        else {
          v12 = v23;
        }
        if (v18 == 161) {
          v10 = v12;
          v7 = v11;
        }
        v67 = v10;
      }
      goto LABEL_12;
    }
  LABEL_38:
    result = -2;
    if (v23 > 8 || v24 < 0 ||
        (unsigned __int64)(v23 - 9) < 0xFFFFFFFFFFFFFFF8LL) {
      return result;
    }
    v26 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
    v70[0] = 0;
    if (((*v26)(v5, v24, 1, v70) & 0x80000000) != 0) {
      return -2;
    }
    v8 = v70[0];
    if (v23 != 1) {
      v43 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v43)(v5, v24 + 1, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v44 = v70[0] | ((unsigned __int64)(unsigned __int8)v8 << 8);
      if (v23 == 2) {
        goto LABEL_84;
      }
      v46 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v46)(v5, v24 + 2, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v8 = v70[0] | ((unsigned __int64)(unsigned __int16)v44 << 8);
      if (v23 == 3) {
        goto LABEL_88;
      }
      v47 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v47)(v5, v24 + 3, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v44 = v70[0] | ((v8 & 0xFFFFFF) << 8);
      if (v23 == 4) {
        goto LABEL_84;
      }
      v48 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v48)(v5, v24 + 4, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v8 = v70[0] | ((unsigned __int64)(unsigned int)v44 << 8);
      if (v23 == 5) {
        goto LABEL_88;
      }
      v49 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v49)(v5, v24 + 5, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v44 = v70[0] | ((v8 & 0xFFFFFFFFFFLL) << 8);
      if (v23 == 6) {
      LABEL_84:
        v45 = v8 << 8;
        v8 = v44;
        if (v45 < 0) {
          return -2;
        }
        goto LABEL_12;
      }
      v50 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
      v70[0] = 0;
      if (((*v50)(v5, v24 + 6, 1, v70) & 0x80000000) != 0) {
        return -2;
      }
      v8 = v70[0] | ((v44 & 0xFFFFFFFFFFFFLL) << 8);
      if (v23 == 7) {
      LABEL_88:
        if (((v44 << 8) & 0x8000000000000000LL) != 0) {
          return -2;
        }
      }
      else {
        v51 = (__int64 (**)(_QWORD, __int64, __int64, char*))*v5;
        v70[0] = 0;
        if (((*v51)(v5, v24 + 7, 1, v70) & 0x80000000) != 0) {
          return -2;
        }
        v52 = v8 << 8;
        v8 = v70[0] | (unsigned __int64)(v8 << 8);
        if (v52 < 0) {
          return -2;
        }
      }
    }
  LABEL_12:
    v9 = v24 + v23;
    if (v9 > v6) {
      return -2;
    }
  }
  result = -2;
  if ((v7 & 0x8000000000000000LL) == 0 && v9 == v6) {
    if (a5 >= (signed __int64)*((_QWORD*)this_ + 7)) {
      return -1;
    }
    v53 = *((_QWORD*)this_ + 8);
    v54 = *((_QWORD*)this_ + 6);
    v55 = *(_QWORD*)(*((_QWORD*)this_ + 12) - 8LL) + 120 * a5;
    mkvparser_BlockGroup_BlockGroup_plt(v55, this_, v53, v7, v67, v63, v64, v8,
                                        a4);
    *(_QWORD*)(v54 + 8 * v53) = v55;
    result = mkvparser_Block_Parse_plt(v55 + 24, *(_QWORD*)(v55 + 8));
    if (result != 0) {
      v56 = *(_QWORD**)(v54 + 8 * v53);
      if (v56 != nullptr) {
        v57 = result;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
            *v56 + 8LL))((void*)(v56), *(_QWORD*)(v54 + 8 * v53));
        result = v57;
      }
      *(_QWORD*)(v54 + 8 * v53) = 0;
    }
    else {
      if (*(__int64*)(v55 + 104) >= 1 ||
          (signed __int64)*(_QWORD*)(v55 + 96) <= 0LL) {
        v59 = 0;
      }
      else {
        v59 = 0x80;
      }
      *(_BYTE*)(v55 + 50) = v59 & 0x80 | *(_BYTE*)(v55 + 50) & 0x7F;
      ++*((_QWORD*)this_ + 8);
    }
  }
  return result;
}

__int64 mkvparser_Cluster_CreateSimpleBlock(_QWORD* a1, __int64 a2, __int64 a3,
                                            __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 result;
  _QWORD* v9;
  __int64 v10;

  if (a4 >= (signed __int64)a1[7]) {
    return -1;
  }
  v4 = a1[8];
  v5 = a1[6];
  v7 = *(_QWORD*)(a1[12] - 8LL) + 120 * a4;
  mkvparser_SimpleBlock_SimpleBlock_plt(v7, a1, v4, a2, a3);
  *(_QWORD*)(v5 + 8 * v4) = v7;
  result = mkvparser_Block_Parse_plt(v7 + 24, *(_QWORD*)(v7 + 8));
  if (result != 0) {
    v9 = *(_QWORD**)(v5 + 8 * v4);
    if (v9 != nullptr) {
      v10 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v9 + 8LL))(
          (void*)(v9), *(_QWORD*)(v5 + 8 * v4));
      result = v10;
    }
    *(_QWORD*)(v5 + 8 * v4) = 0;
  }
  else {
    ++a1[8];
  }
  return result;
}

__int64 mkvparser_Cluster_AddRef(__int64 this_)
{
  ++*(_QWORD*)(this_ + 120);
  return this_;
}

__int64 mkvparser_Cluster_DecRef(__int64 this_)
{
  --*(_QWORD*)(this_ + 120);
  return this_;
}

__int64 mkvparser_SimpleBlock_SimpleBlock(_QWORD* a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5)
{
  a1[2] = a3;
  *a1 = SdkData_e88c38 + 16;
  a1[1] = a2;
  return mkvparser_Block_Block_plt(a1 + 3, a4, a5, 0);
}

__int64 mkvparser_BlockGroup_BlockGroup(void* this_, void* a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        __int64 a7, __int64 a8, __int64 a9)
{
  __int64 result;

  *((_QWORD*)this_ + 2) = a3;
  *(_QWORD*)this_ = SdkData_e88c40 + 16;
  *((_QWORD*)this_ + 1) = a2;
  result = mkvparser_Block_Block_plt((char*)this_ + 24, a4, a5, a9);
  *((_QWORD*)this_ + 12) = a6;
  *((_QWORD*)this_ + 13) = a7;
  *((_QWORD*)this_ + 14) = a8;
  return result;
}

__int64 mkvparser_Block_Block(__int64 this_, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD*)this_ = a2;
  *(_QWORD*)(this_ + 8) = a3;
  *(_QWORD*)(this_ + 16) = 0;
  *(_BYTE*)(this_ + 26) = 0;
  *(_QWORD*)(this_ + 32) = 0;
  *(_QWORD*)(this_ + 48) = 0;
  *(_QWORD*)(this_ + 56) = 0;
  *(_QWORD*)(this_ + 64) = a4;
  *(_WORD*)(this_ + 24) = -1;
  *(_DWORD*)(this_ + 40) = -1;
  return this_;
}

__int64 mkvparser_Block_Destroy_Block(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  if (*(int*)(result + 40) >= 2) {
    v1 = *(_QWORD*)(result + 32);
    if (v1 != 0) {
      v2 = result;
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v4 = SdkData_e88338[0];
      if ((explicit & 1) == 0) {
        v6 = __cxa_guard_acquire_plt(SdkData_e88330);
        v4 = SdkData_e88338[0];
        if (v6 != 0) {
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
          v4 = SdkData_e88338[0];
        }
      }
      v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
      nn_movie_detail_FreeMemory(v1, v5);
      result = v2;
    }
  }
  *(_QWORD*)(result + 32) = 0;
  return result;
}

__int64 mkvparser_55d7c0(_QWORD* a1)
{
  *a1 = SdkData_e88c38 + 16;
  return mkvparser_Block_Destroy_Block_plt(a1 + 3);
}

__int64 mkvparser_55d7e0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88c38 + 16;
  mkvparser_Block_Destroy_Block_plt(a1 + 3);
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

__int64 mkvparser_55d880(_QWORD* a1)
{
  *a1 = SdkData_e88c40 + 16;
  return mkvparser_Block_Destroy_Block_plt(a1 + 3);
}

__int64 mkvparser_55d8a0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88c40 + 16;
  mkvparser_Block_Destroy_Block_plt(a1 + 3);
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

void mkvparser_Track_Destroy_Track_55d940(void* this_)
{
  __int64* v2;
  __int64* v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;

  *(_QWORD*)this_ = SdkData_e88c10 + 16;
  mkvparser_Track_Info_Clear_plt((void*)((char*)this_ + 32));
  v2 = *((__int64**)this_ + 22);
  v3 = *((__int64**)this_ + 23);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v2 != v3) {
    do {
      v8 = *v2++;
      v7 = v8;
      if (v8 != 0) {
        mkvparser_ContentEncoding_Destroy_ContentEncoding_plt(v7);
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
          *(_DWORD*)v5 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
          __cxa_guard_release_plt(v4);
        }
        v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
        nn_movie_detail_FreeMemory(v7, v6);
      }
    } while (v2 != v3);
    v2 = *((__int64**)this_ + 22);
  }
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory((__int64)v2, v9);
  mkvparser_Track_Info_Destroy_Info_plt((char*)this_ + 32);
}

#pragma GCC visibility pop
