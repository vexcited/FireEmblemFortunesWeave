#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void
    nandroid_AnotherPacketSource_getLatestDequeuedMeta_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    nandroid_AnotherPacketSource_getLatestEnqueuedMeta_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    nandroid_AnotherPacketSource_getMetaAfterLastDequeued_plt(PSEUDO_X8, _QWORD,
                                                              _QWORD);
__attribute__((swiftcall)) void
    nandroid_LiveSession_addFetcher_plt(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nandroid_LiveSession_getPacketSourceForStreamIndex_plt(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nandroid_LiveSession_latestMediaSegmentStartTime_plt(PSEUDO_X8, _QWORD);
__int64 LiveSession_5277a0_alt1(_QWORD) __asm__("LiveSession_5277a0");
__int64 LiveSession_527960_alt1(_QWORD) __asm__("LiveSession_527960");
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86e160(_QWORD, _QWORD);
__int64 SdkRoutine_86f010(_QWORD, _QWORD);
__int64 SdkRoutine_86f350(_QWORD, _QWORD);
__int64 SdkRoutine_86ff90(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_ALooper_ALooper_plt(void);
__int64 nandroid_ALooper_GetNowUs_plt(_QWORD);
__int64 nandroid_ALooper_setName_plt(_QWORD, _QWORD);
__int64 nandroid_ALooper_start_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ALooper_unregisterHandler_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findObject_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findPointer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_postReply_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_post_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86dba0(_QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_append_plt_86db20(_QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_AString_clear_plt(_QWORD);
__int64 nandroid_AString_empty_plt(_QWORD);
__int64 nandroid_AnotherPacketSource_clear_plt(_QWORD);
__int64 nandroid_AnotherPacketSource_queueDiscontinuity_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nandroid_AnotherPacketSource_signalEOS_plt(_QWORD, _QWORD);
__int64 nandroid_HLSTime_HLSTime_plt(_QWORD, _QWORD);
__int64 nandroid_HLSTime_getSegmentTimeUs_plt(_QWORD);
__int64 nandroid_LiveSession_cancelBandwidthSwitch_plt(_QWORD, _QWORD);
__int64 nandroid_LiveSession_changeConfiguration_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64 nandroid_LiveSession_finishDisconnect_plt(_QWORD);
__int64 nandroid_LiveSession_resumeFetcher_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD);
__int64 nandroid_M3UParser_getAacAudioObjectType_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_hasType_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_isVariantPlaylist_plt(void);
__int64 nandroid_M3UParser_itemAt_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_pickRandomMediaItems_plt(_QWORD);
__int64 nandroid_M3UParser_size_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_fetchPlaylistAsync_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_startAsync_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD, _QWORD,
                                                _DWORD);
__int64 nandroid_PlaylistFetcher_stopAsync_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD, _QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(_QWORD) __asm__(
    "nandroid_RefBase_Destroy_RefBase_plt_86def0");
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_VectorImpl_plt_86e620(_QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_clear_plt(_QWORD);
__int64 nandroid_VectorImpl_editItemLocation_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_VectorImpl_push_plt_86ea50(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_removeItemsAt_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_VectorImpl_sort_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern __int64 SdkData_e88a70;
extern __int64 SdkData_e88a78;
extern __int64 SdkData_e88a80;
extern __int64 SdkData_e88a90;
extern __int64 SdkData_e88a98;
extern __int64 SdkData_e88aa0;
extern __int64 SdkData_e88aa8;
extern __int64 SdkData_e88ab0;
extern void (*SdkData_e88338[493])();
struct PseudoSret nandroid_AMessage_dup_plt(_QWORD);
__int64 LiveSession_51fee0(__int64 a1, int* a2);
__int64 nandroid_LiveSession_onConnect(__int64 a1, _QWORD* a2);
__int64 nandroid_LiveSession_finishDisconnect(void* this_);
__int64 LiveSession_521bf0(__int64 a1, __int64 a2);
__int64 LiveSession_521c60(__int64 a1, __int64 a2);
__int64 LiveSession_521ce0(__int64 a1, __int64 a2);
__int64 nandroid_LiveSession_cancelBandwidthSwitch(void* this_, char a2);
__int64 nandroid_LiveSession_onMasterPlaylistFetched(__int64 a1, _QWORD* a2);
__int64 nandroid_LiveSession_onChangeConfiguration3(__int64 a1, _QWORD* a2);
__int64 LiveSession_526af0(_QWORD* a1);
__int64 LiveSession_526b50(_QWORD* a1);
__int64 LiveSession_526c40(_QWORD* a1);
__int64 LiveSession_526ed0(_QWORD* a1);
__int64 LiveSession_527320(_QWORD* a1);
__int64 LiveSession_5277a0(_QWORD* a1);
__int64 LiveSession_5278c0(_QWORD* a1);
__int64 LiveSession_527960(_QWORD* a1);
__int64 LiveSession_527a80(_QWORD* a1);
__int64 LiveSession_527b10(_QWORD* a1);

__int64 LiveSession_51fee0(__int64 a1, int* a2)
{
  int v2;
  __int64 v4;
  int v6;
  _QWORD* v7;

  v2 = *a2;
  v7 = nullptr;
  v6 = v2;
  v4 = nandroid_SortedVectorImpl_indexOf_plt(a1, &v6);
  if (v7 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v7 + *(_QWORD*)(*v7 - 24LL), &v7);
  }
  return *(_QWORD*)(a1 + 8) + 16 * v4 + 8;
}

__int64 nandroid_LiveSession_onConnect(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v10)();
  _QWORD** v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  void(__attribute__((noreturn)) * v17)();
  __int64 v18;
  _QWORD* v19;

  nandroid_AMessage_findString_plt(*a2, "url", a1 + 440);
  v4 = *a2;
  v19 = nullptr;
  if ((nandroid_AMessage_findPointer_plt(v4, "headers", &v19) & 1) == 0) {
    nandroid_VectorImpl_clear_plt(a1 + 400);
    if (*(_QWORD*)(a1 + 584) != 0) {
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  SdkRoutine_86f010(a1 + 400, v19);
  v5 = (__int64)v19;
  if (v19 != nullptr) {
    v6 = v19;
    *v19 = SdkData_e88420 + 16;
    nandroid_VectorImpl_finish_vector_plt(v6);
    nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v5);
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v17 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v17) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    nn_movie_detail_FreeMemory(v5, v7);
  }
  v19 = nullptr;
  if (*(_QWORD*)(a1 + 584) == 0) {
  LABEL_8:
    v8 = (__int64*)(a1 + 584);
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v10 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v10 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v10) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v11 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v10);
    v12 = SdkRoutine_4c3860(16, 216, v11);
    nandroid_ALooper_ALooper_plt();
    v13 = *v8;
    v14 = nandroid_RefBase_incStrong_plt(v12, a1 + 584);
    if (v13 != 0) {
      v14 = nandroid_RefBase_decStrong_plt(v13, a1 + 584);
    }
    if (v13 != *v8) {
      nandroid_sp_report_race_plt(v14);
    }
    *v8 = v12;
    nandroid_ALooper_setName_plt(v12, "Fetcher");
    nandroid_ALooper_start_plt(*v8, 0, 1);
  }
LABEL_14:
  v15 = nandroid_AString_c_str_plt(a1 + 440);
  nandroid_LiveSession_addFetcher_plt((void*)(&v18), a1, v15, 0);
  nandroid_PlaylistFetcher_fetchPlaylistAsync_plt(v18);
  result = v18;
  if (v18 != 0) {
    return nandroid_RefBase_decStrong_plt(v18, &v18);
  }
  return result;
}

__int64 nandroid_LiveSession_finishDisconnect(void* this_)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _QWORD* v16;

  nandroid_LiveSession_cancelBandwidthSwitch_plt(this_, 0);
  ++*((_DWORD*)this_ + 97);
  *((_DWORD*)this_ + 98) = -1;
  nn_os_LockMutex_plt((char*)this_ + 728);
  if (*((_QWORD*)this_ + 76) != 0) {
    v2 = 24;
    v3 = 0;
    do {
      nandroid_PlaylistFetcher_stopAsync_plt(
          *(_QWORD*)(*((_QWORD*)this_ + 75) + v2), 1);
      nandroid_ALooper_unregisterHandler_plt(
          *((_QWORD*)this_ + 73),
          *(unsigned int*)(*(_QWORD*)(*((_QWORD*)this_ + 75) + v2) + 16LL));
      ++v3;
      v2 += 48;
    } while (v3 < *((_QWORD*)this_ + 76));
  }
  nandroid_VectorImpl_clear_plt((char*)this_ + 592);
  nn_os_UnlockMutex_plt((char*)this_ + 728);
  v16 = nullptr;
  LODWORD(v15) = 1;
  v4 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 648, &v15);
  if (v16 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v16 + *(_QWORD*)(*v16 - 24LL), &v16);
  }
  nandroid_AnotherPacketSource_signalEOS_plt(
      *(_QWORD*)(*((_QWORD*)this_ + 82) + 16 * v4 + 8), 4294966285LL);
  v16 = nullptr;
  LODWORD(v15) = 2;
  v5 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 648, &v15);
  if (v16 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v16 + *(_QWORD*)(*v16 - 24LL), &v16);
  }
  nandroid_AnotherPacketSource_signalEOS_plt(
      *(_QWORD*)(*((_QWORD*)this_ + 82) + 16 * v5 + 8), 4294966285LL);
  v16 = nullptr;
  LODWORD(v15) = 4;
  v6 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 648, &v15);
  if (v16 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v16 + *(_QWORD*)(*v16 - 24LL), &v16);
  }
  nandroid_AnotherPacketSource_signalEOS_plt(
      *(_QWORD*)(*((_QWORD*)this_ + 82) + 16 * v6 + 8), 4294966285LL);
  v15 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v8 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v8 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
  v10 = SdkRoutine_4c3860(16, 1344, v9);
  nandroid_AMessage_AMessage_plt_86da50();
  v15 = v10;
  nandroid_RefBase_incStrong_plt(v10, &v15);
  nandroid_AMessage_setInt32_plt(v15, "err", 0);
  v11 = (_QWORD*)((char*)this_ + 880);
  nandroid_AMessage_postReply_plt(v15, (char*)this_ + 880);
  v12 = *((_QWORD*)this_ + 110);
  if (v12 != 0) {
    v13 = nandroid_RefBase_decStrong_plt(v12, v11);
    if (v12 != *v11) {
      nandroid_sp_report_race_plt(v13);
    }
    *v11 = 0;
  }
  result = v15;
  if (v15 != 0) {
    return nandroid_RefBase_decStrong_plt(v15, &v15);
  }
  return result;
}

__int64 LiveSession_521bf0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE v5[24];
  _QWORD v6[3];

  nandroid_AString_AString_plt_86dba0(v5, a2);
  v6[0] = 0;
  v3 = nandroid_SortedVectorImpl_indexOf_plt(a1, v5);
  if (v6[0] != 0) {
    nandroid_RefBase_decStrong_plt(v6[0], v6);
  }
  nandroid_AString_Destroy_AString_plt(v5);
  return v3;
}

__int64 LiveSession_521c60(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE v5[24];
  _QWORD v6[3];

  nandroid_AString_AString_plt_86dba0(v5, a2);
  v6[0] = 0;
  v3 = nandroid_SortedVectorImpl_indexOf_plt(a1, v5);
  if (v6[0] != 0) {
    nandroid_RefBase_decStrong_plt(v6[0], v6);
  }
  nandroid_AString_Destroy_AString_plt(v5);
  return nandroid_VectorImpl_editItemLocation_plt(a1, v3) + 24;
}

__int64 LiveSession_521ce0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE v5[24];
  _QWORD v6[3];

  nandroid_AString_AString_plt_86dba0(v5, a2);
  v6[0] = 0;
  v3 = nandroid_SortedVectorImpl_indexOf_plt(a1, v5);
  if (v6[0] != 0) {
    nandroid_RefBase_decStrong_plt(v6[0], v6);
  }
  nandroid_AString_Destroy_AString_plt(v5);
  return *(_QWORD*)(a1 + 8) + 48 * v3 + 24;
}

__int64 nandroid_LiveSession_cancelBandwidthSwitch(void* this_, char a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v17_;
  _BYTE v20[24];
  _QWORD v21[3];

  nn_os_LockMutex_plt((char*)this_ + 728);
  if (*((_BYTE*)this_ + 849) != 1) {
    return nn_os_UnlockMutex_plt((char*)this_ + 728);
  }
  if (*((_QWORD*)this_ + 76) != 0) {
    if ((a2 & 1) != 0) {
      v4 = 0;
      v5 = 0;
      do {
        v6 = nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 592, v5);
        if (*(_BYTE*)(v6 + 40) == 1) {
          *(_BYTE*)(v6 + 40) = 0;
          nandroid_LiveSession_resumeFetcher_plt(
              this_, *((_QWORD*)this_ + 75) + v4, *((unsigned int*)this_ + 160),
              -1, 0);
        }
        ++v5;
        v4 += 48;
      } while (v5 < *((_QWORD*)this_ + 76));
    }
    else {
      v7 = 0;
      do {
        v8 = nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 592, v7);
        if (*(_BYTE*)(v8 + 40) == 1) {
          *(_BYTE*)(v8 + 40) = 0;
        }
        ++v7;
      } while (v7 < *((_QWORD*)this_ + 76));
    }
  }
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v17 = 0;
  nandroid_AString_AString_plt_86dba0(&v17_.v17, (char*)this_ + 128);
  if ((nandroid_AString_empty_plt(&v17_.v17) & 1) == 0) {
    if ((SdkRoutine_86f350((char*)this_ + 128, &v17_.v17) & 1) != 0) {
      nandroid_AString_clear_plt((char*)this_ + 128);
      if ((SdkRoutine_86f350((char*)this_ + 216, &v17_.v17) & 1) == 0) {
      LABEL_15:
        if ((SdkRoutine_86f350((char*)this_ + 304, &v17_.v17) & 1) == 0) {
        LABEL_17:
          nandroid_AString_AString_plt_86dba0(v20, &v17_.v17);
          v21[0] = 0;
          v9 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 592, v20);
          if (v21[0] != 0) {
            nandroid_RefBase_decStrong_plt(v21[0], v21);
          }
          nandroid_AString_Destroy_AString_plt(v20);
          if ((v9 & 0x8000000000000000LL) == 0) {
            v10 = nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 592,
                                                           v9);
            *(_BYTE*)(v10 + 40) = 1;
            nandroid_PlaylistFetcher_stopAsync_plt(*(_QWORD*)(v10 + 24), 1);
          }
          goto LABEL_21;
        }
      LABEL_16:
        nandroid_AString_clear_plt((char*)this_ + 304);
        goto LABEL_17;
      }
    }
    else if ((SdkRoutine_86f350((char*)this_ + 216, &v17_.v17) & 1) == 0) {
      goto LABEL_15;
    }
    nandroid_AString_clear_plt((char*)this_ + 216);
    if ((SdkRoutine_86f350((char*)this_ + 304, &v17_.v17) & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
LABEL_21:
  nandroid_AString_Destroy_AString_plt(&v17_.v17);
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v17 = 0;
  nandroid_AString_AString_plt_86dba0(&v17_.v17, (char*)this_ + 216);
  if ((nandroid_AString_empty_plt(&v17_.v17) & 1) == 0) {
    if ((SdkRoutine_86f350((char*)this_ + 216, &v17_.v17) & 1) != 0) {
      nandroid_AString_clear_plt((char*)this_ + 216);
    }
    if ((SdkRoutine_86f350((char*)this_ + 304, &v17_.v17) & 1) != 0) {
      nandroid_AString_clear_plt((char*)this_ + 304);
    }
    nandroid_AString_AString_plt_86dba0(v20, &v17_.v17);
    v21[0] = 0;
    v11 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 592, v20);
    if (v21[0] != 0) {
      nandroid_RefBase_decStrong_plt(v21[0], v21);
    }
    nandroid_AString_Destroy_AString_plt(v20);
    if ((v11 & 0x8000000000000000LL) == 0) {
      v12 = nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 592, v11);
      *(_BYTE*)(v12 + 40) = 1;
      nandroid_PlaylistFetcher_stopAsync_plt(*(_QWORD*)(v12 + 24), 1);
    }
  }
  nandroid_AString_Destroy_AString_plt(&v17_.v17);
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v17 = 0;
  nandroid_AString_AString_plt_86dba0(&v17_.v17, (char*)this_ + 304);
  if ((nandroid_AString_empty_plt(&v17_.v17) & 1) == 0) {
    if ((SdkRoutine_86f350((char*)this_ + 304, &v17_.v17) & 1) != 0) {
      nandroid_AString_clear_plt((char*)this_ + 304);
    }
    nandroid_AString_AString_plt_86dba0(v20, &v17_.v17);
    v21[0] = 0;
    v13 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 592, v20);
    if (v21[0] != 0) {
      nandroid_RefBase_decStrong_plt(v21[0], v21);
    }
    nandroid_AString_Destroy_AString_plt(v20);
    if ((v13 & 0x8000000000000000LL) == 0) {
      v14 = nandroid_VectorImpl_editItemLocation_plt((char*)this_ + 592, v13);
      *(_BYTE*)(v14 + 40) = 1;
      nandroid_PlaylistFetcher_stopAsync_plt(*(_QWORD*)(v14 + 24), 1);
    }
  }
  nandroid_AString_Destroy_AString_plt(&v17_.v17);
  v15 = *((_DWORD*)this_ + 200);
  *((_BYTE*)this_ + 849) = 0;
  *((_DWORD*)this_ + 160) = 0;
  *((_DWORD*)this_ + 200) = v15 + 1;
  *((_QWORD*)this_ + 63) = *((_QWORD*)this_ + 64);
  return nn_os_UnlockMutex_plt((char*)this_ + 728);
}

__int64 nandroid_LiveSession_onMasterPlaylistFetched(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;
  char v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 i;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  int v40;
  __int64 v41;
  _QWORD v42[3];
  __int64 v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  _QWORD v47[3];
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _QWORD v51[3];

  memset(v47, 0, sizeof(v47));
  nandroid_AString_AString_plt_86d9f0(v47);
  nandroid_AMessage_findString_plt(*a2, "uri", v47);
  nandroid_AString_AString_plt_86dba0(&v48, v47);
  v51[0] = 0;
  v4 = nandroid_SortedVectorImpl_indexOf_plt(a1 + 592, &v48);
  if (v51[0] != 0) {
    nandroid_RefBase_decStrong_plt(v51[0], v51);
  }
  nandroid_AString_Destroy_AString_plt(&v48);
  if ((v4 & 0x8000000000000000LL) == 0) {
    nandroid_ALooper_unregisterHandler_plt(
        *(_QWORD*)(a1 + 584),
        *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 600) + 48 * v4 + 24) +
                         16LL));
    nandroid_VectorImpl_removeItemsAt_plt(a1 + 592, v4, 1);
    v5 = *a2;
    v6 = (_QWORD*)(a1 + 536);
    nandroid_AMessage_findObject_plt(v5, "playlist", a1 + 536);
    if (*(_QWORD*)(a1 + 536) != 0) {
      if ((nandroid_M3UParser_isVariantPlaylist_plt() & 1) != 0) {
        v51[0] = 0;
        v51[1] = 0;
        v49 = 0;
        v50 = 0;
        v48 = 0;
        nandroid_VectorImpl_VectorImpl_plt_86e620(&v48, 32, 0);
        v7 = *v6;
        v48 = SdkData_e88a90 + 16;
        if (nandroid_M3UParser_size_plt(v7) != 0) {
          v8 = 0;
          v9 = 0;
          v10 = 0;
          v11 = 0;
          while (1) {
            v46 = 0;
            v45[0] = 0;
            v43 = 0;
            v44 = v11;
            memset(v42, 0, sizeof(v42));
            v45[1] = -1;
            nandroid_AString_AString_plt_86d9f0(v42);
            nandroid_M3UParser_itemAt_plt(*v6, v11, v42, &v43);
            nandroid_AMessage_findInt32_plt(v43, "bandwidth", v45);
            v41 = 0;
            v12 =
                nandroid_AMessage_findInt32_plt(v43, "width", (char*)&v41 + 4);
            v13 = HIDWORD(v41);
            if (v8 > SHIDWORD(v41)) {
              v13 = v8;
            }
            if ((v12 & 1) != 0) {
              v8 = v13;
            }
            v14 = nandroid_AMessage_findInt32_plt(v43, "height", &v41);
            if (v9 <= (int)v41) {
              v15 = v41;
            }
            else {
              v15 = v9;
            }
            if ((v14 & 1) != 0) {
              v9 = v15;
            }
            v46 = SHIDWORD(v41) * (__int64)(int)v41;
            nandroid_VectorImpl_push_plt_86ea50(a1 + 464, &v44);
            if ((nandroid_M3UParser_hasType_plt(*v6, v11, "video") & 1) != 0) {
              nandroid_VectorImpl_push_plt_86ea50(&v48, &v44);
              if ((nandroid_M3UParser_getAacAudioObjectType_plt(*v6, v11,
                                                                "audio") &
                   1) == 0) {
              LABEL_20:
                nandroid_AString_Destroy_AString_plt(v42);
                v16 = v43;
                if (v43 == 0) {
                  goto LABEL_8;
                }
                goto LABEL_28;
              }
            }
            else if ((nandroid_M3UParser_getAacAudioObjectType_plt(*v6, v11,
                                                                   "audio") &
                      1) == 0) {
              goto LABEL_20;
            }
            v40 = 0;
            v17 = nandroid_AMessage_findInt32_plt(v43, "aac-profile", &v40);
            v18 = v40;
            if (v40 <= v10) {
              v18 = v10;
            }
            if ((v17 & 1) != 0) {
              v10 = v18;
            }
            nandroid_AString_Destroy_AString_plt(v42);
            v16 = v43;
            if (v43 != 0) {
            LABEL_28:
              nandroid_RefBase_decStrong_plt(v16, &v43);
            }
          LABEL_8:
            if (++v11 >= (unsigned __int64)nandroid_M3UParser_size_plt(*v6)) {
              goto LABEL_33;
            }
          }
        }
        v10 = 0;
        v9 = 0;
        v8 = 0;
      LABEL_33:
        if (v50 != 0 && v50 < *(_QWORD*)(a1 + 480)) {
          nandroid_VectorImpl_clear_plt(a1 + 464);
          if (v50 != 0) {
            v24 = 0;
            for (i = 0; i < v50; ++i) {
              nandroid_VectorImpl_push_plt_86ea50(a1 + 464, v49 + v24);
              v24 += 32;
            }
          }
        }
        v26 = *(_QWORD*)(*(_QWORD*)(a1 + 472) + 8LL);
        nandroid_VectorImpl_sort_plt(a1 + 464, SdkData_e88ab0);
        v27 = *(_QWORD*)(a1 + 480);
        if (v27 != 0) {
          v28 = *(_QWORD*)(a1 + 568);
          v29 = *(_QWORD*)(a1 + 472);
          if (v28 != 0) {
            v30 = (unsigned __int64*)(v29 + 24);
            v23 = -1;
            do {
              v31 = *v30;
              v30 += 4;
              v32 = v23 + 2;
              ++v23;
            } while (v31 < v28 && v32 < v27);
          }
          else {
            v34 = (__int64*)(v29 + 8);
            v23 = 0;
            while (1) {
              v35 = *v34;
              v34 += 4;
              if (v35 == v26) {
                break;
              }
              if (v27 == ++v23) {
                goto LABEL_50;
              }
            }
          }
        }
        else {
        LABEL_50:
          v23 = 0;
        }
        v48 = SdkData_e88a90 + 16;
        nandroid_VectorImpl_finish_vector_plt(&v48);
        nandroid_VectorImpl_Destroy_VectorImpl_plt(&v48);
        v36 = *(_DWORD*)(a1 + 544);
        if (v8 > 0) {
          v36 = v8;
        }
        *(_DWORD*)(a1 + 544) = v36;
        v37 = *(_DWORD*)(a1 + 548);
        if (v9 > 0) {
          v37 = v9;
        }
        *(_DWORD*)(a1 + 548) = v37;
        v22 = *(_DWORD*)(a1 + 552);
        if (v10 > 0) {
          v22 = v10;
        }
      }
      else {
        v50 = 0;
        v51[0] = 0;
        v48 = 0;
        v49 = 0;
        nandroid_VectorImpl_push_plt_86ea50(a1 + 464, &v48);
        v22 = *(_DWORD*)(a1 + 552);
        v23 = 0;
      }
      v38 = *(_QWORD*)(a1 + 536);
      *(_DWORD*)(a1 + 552) = v22;
      nandroid_M3UParser_pickRandomMediaItems_plt(v38);
      nandroid_LiveSession_changeConfiguration_plt(a1, 0, v23, 0);
    }
    else {
      v19 = *(_QWORD*)(a1 + 360);
      v48 = 0;
      *(struct PseudoSret*)(&v48) = nandroid_AMessage_dup_plt(v19);
      v20 = v48;
      ++*(_DWORD*)(a1 + 388);
      *(_DWORD*)(a1 + 392) = -1;
      nandroid_AMessage_setInt32_plt(v20, "what", 3);
      nandroid_AMessage_setInt32_plt(v48, "err", 4294966292LL);
      nandroid_AMessage_post_plt(v48, 0);
      v21 = v48;
      *(_BYTE*)(a1 + 385) = 0;
      if (v21 != 0) {
        nandroid_RefBase_decStrong_plt(v21, &v48);
      }
    }
  }
  return nandroid_AString_Destroy_AString_plt(v47);
}

__int64 nandroid_LiveSession_onChangeConfiguration3(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  bool v16;
  char v17;
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
  unsigned __int64 v28;
  __int64 result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  char v35;
  _QWORD* v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  int v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  int v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
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
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  unsigned int v79;
  _QWORD* v80;
  int v81;
  _QWORD* v82;
  _QWORD* v83;
  __int64 v84;
  _QWORD* v85;
  _QWORD* v86;
  _QWORD* v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD v93[3];
  int v94;
  __int64 v95;
  unsigned int v96[4];

  v2 = *(_QWORD*)(a1 + 816);
  if (v2 != 0) {
    v5 = (_QWORD*)(a1 + 816);
    v6 = nandroid_RefBase_decStrong_plt(*(_QWORD*)(a1 + 816), a1 + 816);
    if (v2 != *v5) {
      nandroid_sp_report_race_plt(v6);
    }
    *v5 = 0;
  }
  v7 = *a2;
  *(_QWORD*)v96 = 0;
  nandroid_AMessage_findInt32_plt(v7, "streamMask", &v96[1]);
  nandroid_AMessage_findInt32_plt(*a2, "resumeMask", v96);
  v95 = 0;
  *(_DWORD*)(a1 + 636) = v96[0] | v96[1];
  v94 = 0;
  nandroid_AMessage_findInt64_plt(*a2, "timeUs", &v95);
  v8 = nandroid_AMessage_findInt32_plt(*a2, "pickTrack", &v94);
  if ((v95 & 0x8000000000000000LL) == 0) {
    v9 = nandroid_ALooper_GetNowUs_plt(v8);
    v10 = a1 + 96;
    *(_QWORD*)(a1 + 840) = v9 - v95;
    goto LABEL_16;
  }
  if (v94 != 0) {
    v10 = a1 + 96;
    *(_QWORD*)(a1 + 840) =
        nandroid_ALooper_GetNowUs_plt(v8) - *(_QWORD*)(a1 + 832);
    goto LABEL_16;
  }
  v15 = *(_DWORD*)(a1 + 632) & *(_DWORD*)(a1 + 636) & ~v96[0];
  *(_DWORD*)(a1 + 640) = v15;
  v16 = v15 != 0;
  v10 = a1 + 96;
  *(_QWORD*)(a1 + 840) =
      nandroid_ALooper_GetNowUs_plt(v8) - *(_QWORD*)(a1 + 832);
  if (v16) {
    v11 = v96[1];
    if ((v96[1] & 1) != 0) {
      v69 = *(_QWORD*)(a1 + 96);
      v70 = *a2;
      v86 = nullptr;
      v87 = nullptr;
      v85 = nullptr;
      nandroid_AString_AString_plt_86da90(&v85, v69);
      nandroid_AString_append_plt_86db20(&v85, "URI");
      v71 = nandroid_AString_c_str_plt(&v85);
      nandroid_AMessage_findString_plt(v70, v71, a1 + 128);
      nandroid_AString_Destroy_AString_plt(&v85);
      v11 = v96[1];
      if ((v96[1] & 2) == 0) {
      LABEL_11:
        if ((v11 & 4) == 0) {
          goto LABEL_13;
        }
        goto LABEL_12;
      }
    }
    else if ((v96[1] & 2) == 0) {
      goto LABEL_11;
    }
    v72 = *(_QWORD*)(a1 + 184);
    v73 = *a2;
    v86 = nullptr;
    v87 = nullptr;
    v85 = nullptr;
    nandroid_AString_AString_plt_86da90(&v85, v72);
    nandroid_AString_append_plt_86db20(&v85, "URI");
    v74 = nandroid_AString_c_str_plt(&v85);
    nandroid_AMessage_findString_plt(v73, v74, a1 + 216);
    nandroid_AString_Destroy_AString_plt(&v85);
    if ((v96[1] & 4) == 0) {
    LABEL_13:
      v79 = 1;
      nn_os_LockMutex_plt(a1 + 728);
      if (*(_QWORD*)(a1 + 608) == 0) {
        goto LABEL_28;
      }
      goto LABEL_24;
    }
  LABEL_12:
    v12 = *(_QWORD*)(a1 + 272);
    v13 = *a2;
    v86 = nullptr;
    v87 = nullptr;
    v85 = nullptr;
    nandroid_AString_AString_plt_86da90(&v85, v12);
    nandroid_AString_append_plt_86db20(&v85, "URI");
    v14 = nandroid_AString_c_str_plt(&v85);
    nandroid_AMessage_findString_plt(v13, v14, a1 + 304);
    nandroid_AString_Destroy_AString_plt(&v85);
    goto LABEL_13;
  }
LABEL_16:
  v17 = v96[1];
  if ((v96[1] & 1) == 0) {
    if ((v96[1] & 2) == 0) {
      goto LABEL_18;
    }
  LABEL_22:
    v21 = *(_QWORD*)(a1 + 184);
    v22 = *a2;
    v86 = nullptr;
    v87 = nullptr;
    v85 = nullptr;
    nandroid_AString_AString_plt_86da90(&v85, v21);
    nandroid_AString_append_plt_86db20(&v85, "URI");
    v23 = nandroid_AString_c_str_plt(&v85);
    nandroid_AMessage_findString_plt(v22, v23, a1 + 192);
    nandroid_AString_Destroy_AString_plt(&v85);
    if ((v96[1] & 4) == 0) {
    LABEL_19:
      v79 = 0;
      nn_os_LockMutex_plt(a1 + 728);
      if (*(_QWORD*)(a1 + 608) == 0) {
        goto LABEL_28;
      }
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v18 = *(_QWORD*)(a1 + 96);
  v19 = *a2;
  v86 = nullptr;
  v87 = nullptr;
  v85 = nullptr;
  nandroid_AString_AString_plt_86da90(&v85, v18);
  nandroid_AString_append_plt_86db20(&v85, "URI");
  v20 = nandroid_AString_c_str_plt(&v85);
  nandroid_AMessage_findString_plt(v19, v20, a1 + 104);
  nandroid_AString_Destroy_AString_plt(&v85);
  v17 = v96[1];
  if ((v96[1] & 2) != 0) {
    goto LABEL_22;
  }
LABEL_18:
  if ((v17 & 4) == 0) {
    goto LABEL_19;
  }
LABEL_23:
  v24 = *(_QWORD*)(a1 + 272);
  v25 = *a2;
  v86 = nullptr;
  v87 = nullptr;
  v85 = nullptr;
  nandroid_AString_AString_plt_86da90(&v85, v24);
  nandroid_AString_append_plt_86db20(&v85, "URI");
  v26 = nandroid_AString_c_str_plt(&v85);
  nandroid_AMessage_findString_plt(v25, v26, a1 + 280);
  nandroid_AString_Destroy_AString_plt(&v85);
  v79 = 0;
  nn_os_LockMutex_plt(a1 + 728);
  if (*(_QWORD*)(a1 + 608) == 0) {
    goto LABEL_28;
  }
LABEL_24:
  v27 = 0;
  v28 = 0;
  do {
    if ((nandroid_LiveSession_resumeFetcher_plt(a1, *(_QWORD*)(a1 + 600) + v27,
                                                v96[0], v95, 0) &
         1) == 0) {
      *(_BYTE*)(nandroid_VectorImpl_editItemLocation_plt(a1 + 592, v28) + 40) =
          1;
    }
    ++v28;
    v27 += 48;
  } while (v28 < *(_QWORD*)(a1 + 608));
LABEL_28:
  result = nn_os_UnlockMutex_plt(a1 + 728);
  v30 = 0;
  v31 = 0;
  if (v79 != 0) {
    v32 = 32;
  }
  else {
    v32 = 8;
  }
  v75 = v10 + v32;
  while (2) {
    if (((v96[1] >> v31) & 1) == 0) {
      goto LABEL_33;
    }
    memset(v93, 0, sizeof(v93));
    nandroid_AString_AString_plt_86d9f0(v93);
    SdkRoutine_86e160(v93, v75 + 88 * v31);
    v92 = 0;
    v33 = nandroid_AString_c_str_plt(v93);
    nn_os_LockMutex_plt(a1 + 768);
    v34 = *(unsigned __int8*)(a1 + 762);
    nn_os_UnlockMutex_plt(a1 + 768);
    nandroid_LiveSession_addFetcher_plt((void*)&v92, a1, v33, v34);
    v90 = 0;
    v91 = 0;
    v89 = nullptr;
    v85 = nullptr;
    nandroid_HLSTime_HLSTime_plt(&v89, &v85);
    if (v85 != nullptr) {
      nandroid_RefBase_decStrong_plt(v85, &v85);
    }
    v87 = nullptr;
    v88 = nullptr;
    v85 = nullptr;
    v86 = nullptr;
    if (v31 == 2) {
      goto LABEL_41;
    }
    v35 = v79;
    if (v94 != 0) {
      v35 = 1;
    }
    if ((v35 & 1) == 0) {
    LABEL_41:
      v36 = X8CALL_X0(_QWORD*,
                      nandroid_LiveSession_latestMediaSegmentStartTime_plt(
                          (void*)&v82, a1));
      v89 = v82;
      v90 = (__int64)v83;
      v37 = v91;
      if (v91 != 0) {
        v36 = (_QWORD*)nandroid_RefBase_decStrong_plt(v91, &v91);
      }
      if (v37 != v91) {
        nandroid_sp_report_race_plt(v36);
      }
      v91 = v84;
    }
    v78 = 0;
    v76 = v30;
    v77 = v10;
    v38 = v31;
    while (1) {
      if ((v96[1] & (1 << v38)) == 0 ||
          (SdkRoutine_86f350(v93, v10 + v32) & 1) == 0) {
        goto LABEL_49;
      }
      LODWORD(v82) = 1 << v38;
      v83 = nullptr;
      v39 = nandroid_SortedVectorImpl_indexOf_plt(a1 + 648, &v82);
      v40 = v39;
      if (v83 != nullptr) {
        v39 = nandroid_RefBase_decStrong_plt(
            (char*)v83 + *(_QWORD*)(*v83 - 24LL), &v83);
      }
      v41 = *(_QWORD**)((char*)&v85 + v30);
      v42 = *(_QWORD**)(*(_QWORD*)(a1 + 656) + 16 * v40 + 8);
      if (v42 != nullptr) {
        v39 = nandroid_RefBase_incStrong_plt(
            (char*)v42 + *(_QWORD*)(*v42 - 24LL), (char*)&v85 + v30);
      }
      if (v41 != nullptr) {
        v39 = nandroid_RefBase_decStrong_plt(
            (char*)v41 + *(_QWORD*)(*v41 - 24LL), (char*)&v85 + v30);
      }
      if (v41 != *(_QWORD**)((char*)&v85 + v30)) {
        nandroid_sp_report_race_plt(v39);
      }
      v43 = v95;
      *(_QWORD**)((char*)&v85 + v30) = v42;
      if (v43 < 0) {
        break;
      }
      v90 = v43;
    LABEL_48:
      v96[1] &= ~(1 << v38);
    LABEL_49:
      v30 += 8;
      ++v38;
      v10 += 88;
      if (v30 == 24) {
        goto LABEL_119;
      }
    }
    v81 = 0;
    v80 = nullptr;
    if ((v79 & 1) != 0) {
      v44 = X8CALL_X0(_QWORD*,
                      nandroid_AnotherPacketSource_getLatestEnqueuedMeta_plt(
                          (void*)&v82, v42));
      v45 = v80;
      if (v80 != nullptr) {
        v44 = (_QWORD*)nandroid_RefBase_decStrong_plt(v80, &v80);
      }
      if (v45 != v80) {
        nandroid_sp_report_race_plt(v44);
      }
      v80 = v82;
      nn_os_LockMutex_plt(a1 + 768);
      v46 = *(unsigned __int8*)(a1 + 762);
      nn_os_UnlockMutex_plt(a1 + 768);
      if (v46 == 1) {
        v47 = X8CALL_X0(_QWORD*,
                        nandroid_AnotherPacketSource_getLatestDequeuedMeta_plt(
                            (void*)&v82, *(_QWORD**)((char*)&v85 + v30)));
        v48 = v80;
        if (v80 != nullptr) {
          v47 = (_QWORD*)nandroid_RefBase_decStrong_plt(v80, &v80);
        }
        if (v48 != v80) {
          nandroid_sp_report_race_plt(v47);
        }
        v49 = v82;
        v80 = v82;
        if (v82 == nullptr) {
        LABEL_87:
          if (v30 == 16) {
          LABEL_101:
            LODWORD(v82) = 1 << v38;
            v83 = nullptr;
            v59 = nandroid_SortedVectorImpl_indexOf_plt(a1 + 688, &v82);
            v60 = v59;
            if (v83 != nullptr) {
              v59 = nandroid_RefBase_decStrong_plt(
                  (char*)v83 + *(_QWORD*)(*v83 - 24LL), &v83);
            }
            v61 = *(_QWORD**)((char*)&v85 + v30);
            v62 = *(_QWORD**)(*(_QWORD*)(a1 + 696) + 16 * v60 + 8);
            if (v62 != nullptr) {
              v59 = nandroid_RefBase_incStrong_plt(
                  (char*)v62 + *(_QWORD*)(*v62 - 24LL), (char*)&v85 + v30);
            }
            if (v61 != nullptr) {
              v59 = nandroid_RefBase_decStrong_plt(
                  (char*)v61 + *(_QWORD*)(*v61 - 24LL), (char*)&v85 + v30);
            }
            if (v61 != *(_QWORD**)((char*)&v85 + v30)) {
              nandroid_sp_report_race_plt(v59);
            }
            *(_QWORD**)((char*)&v85 + v30) = v62;
            nandroid_AnotherPacketSource_clear_plt(v62);
            v63 = v78;
            v52 = 1;
            if (v78 <= *(_DWORD*)(v10 + 56)) {
              v63 = *(_DWORD*)(v10 + 56);
            }
            v78 = v63;
            v53 = v80;
            if (v80 != nullptr) {
              goto LABEL_112;
            }
            goto LABEL_113;
          }
        LABEL_88:
          if (v49 != nullptr &&
              (nandroid_AMessage_findInt32_plt(v49, "discontinuity", &v81) &
               1) == 0) {
            v83 = nullptr;
            v84 = 0;
            v82 = nullptr;
            nandroid_HLSTime_HLSTime_plt(&v82, &v80);
            v56 = SdkRoutine_86ff90(&v89, &v82);
            v57 = v84;
            if ((v56 & 1) != 0) {
              v89 = v82;
              v90 = (__int64)v83;
              v58 = v91;
              if (v84 != 0) {
                v56 = nandroid_RefBase_incStrong_plt(v84, &v91);
              }
              if (v58 != 0) {
                v56 = nandroid_RefBase_decStrong_plt(v58, &v91);
              }
              if (v58 != v91) {
                nandroid_sp_report_race_plt(v56);
              }
              v91 = v57;
              v57 = v84;
            }
            if (v57 != 0) {
              nandroid_RefBase_decStrong_plt(v57, &v84);
            }
          }
          if ((v79 & 1) == 0) {
            nandroid_AnotherPacketSource_clear_plt(
                *(_QWORD**)((char*)&v85 + v30));
            v64 = *(__int64*)((char*)&v85 + v30);
            v82 = nullptr;
            nandroid_AnotherPacketSource_queueDiscontinuity_plt(v64, 6, &v82,
                                                                1);
            if (v82 != nullptr) {
              nandroid_RefBase_decStrong_plt(v82, &v82);
            }
            v52 = 1;
            v53 = v80;
            if (v80 != nullptr) {
              goto LABEL_112;
            }
            goto LABEL_113;
          }
          goto LABEL_101;
        }
      }
      else {
        v49 = v80;
        if (v80 == nullptr) {
          goto LABEL_87;
        }
      }
      if (*(_QWORD*)(a1 + 504) > *(_QWORD*)(a1 + 512)) {
        v54 = X8CALL_X0(
            _QWORD*, nandroid_AnotherPacketSource_getMetaAfterLastDequeued_plt(
                         (void*)&v82, *(_QWORD**)((char*)&v85 + v30),
                         *(_QWORD*)(a1 + 872)));
        v55 = v80;
        if (v80 != nullptr) {
          v54 = (_QWORD*)nandroid_RefBase_decStrong_plt(v80, &v80);
        }
        if (v55 != v80) {
          nandroid_sp_report_race_plt(v54);
        }
        v49 = v82;
        v80 = v82;
      }
      goto LABEL_87;
    }
    v50 = X8CALL_X0(_QWORD*,
                    nandroid_AnotherPacketSource_getLatestDequeuedMeta_plt(
                        (void*)&v82, v42));
    v51 = v80;
    if (v80 != nullptr) {
      v50 = (_QWORD*)nandroid_RefBase_decStrong_plt(v80, &v80);
    }
    if (v51 != v80) {
      nandroid_sp_report_race_plt(v50);
    }
    v49 = v82;
    v80 = v82;
    if (v30 != 16) {
      goto LABEL_88;
    }
    nandroid_AnotherPacketSource_clear_plt(v87);
    v52 = 0;
    v53 = v80;
    if (v80 != nullptr) {
    LABEL_112:
      nandroid_RefBase_decStrong_plt(v53, &v80);
    }
  LABEL_113:
    if (v52 != 0) {
      goto LABEL_48;
    }
  LABEL_119:
    v65 = v92;
    if (v86 != nullptr || (*(_DWORD*)(a1 + 636) & 2) == 0 && v85 != nullptr) {
      nandroid_LiveSession_getPacketSourceForStreamIndex_plt((void*)&v82, a1, 3,
                                                             v79);
    }
    else {
      v82 = nullptr;
    }
    v30 = v76;
    v10 = v77;
    if (v90 >= 0) {
      v66 = v90;
    }
    else {
      v66 = *(_QWORD*)(a1 + 912);
    }
    v67 = nandroid_HLSTime_getSegmentTimeUs_plt(&v89);
    nandroid_PlaylistFetcher_startAsync_plt(v65, &v85, &v86, &v87, &v82, v66,
                                            v67, (unsigned int)v89, v78);
    if (v82 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v82 + *(_QWORD*)(*v82 - 24LL),
                                     &v82);
    }
    if (v88 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v88 + *(_QWORD*)(*v88 - 24LL),
                                     &v88);
    }
    if (v87 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v87 + *(_QWORD*)(*v87 - 24LL),
                                     &v87);
    }
    if (v86 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v86 + *(_QWORD*)(*v86 - 24LL),
                                     &v86);
    }
    if (v85 != nullptr) {
      nandroid_RefBase_decStrong_plt((char*)v85 + *(_QWORD*)(*v85 - 24LL),
                                     &v85);
    }
    if (v91 != 0) {
      nandroid_RefBase_decStrong_plt(v91, &v91);
    }
    if (v92 != 0) {
      nandroid_RefBase_decStrong_plt(v92, &v92);
    }
    result = nandroid_AString_Destroy_AString_plt(v93);
  LABEL_33:
    ++v31;
    v30 += 8;
    v10 += 88;
    if (v31 != 3) {
      continue;
    }
    break;
  }
  *(_BYTE*)(a1 + 848) = 0;
  if ((v79 & 1) != 0) {
    *(_BYTE*)(a1 + 849) = 1;
  }
  else {
    *(_DWORD*)(a1 + 632) = *(_DWORD*)(a1 + 636);
    v68 = *(_QWORD*)(a1 + 504);
    if (*(_QWORD*)(a1 + 512) != v68) {
      *(_QWORD*)(a1 + 512) = v68;
    }
  }
  if (*(_QWORD*)(a1 + 880) != 0) {
    return nandroid_LiveSession_finishDisconnect_plt(a1);
  }
  return result;
}

__int64 LiveSession_526af0(_QWORD* a1)
{
  __int64 v3;

  *a1 = SdkData_e88a70 + 16;
  LiveSession_527960_alt1(a1 + 8);
  LiveSession_5277a0_alt1(a1 + 6);
  nn_os_FinalizeMutex_plt(a1 + 2);
  return nandroid_RefBase_Destroy_RefBase_plt_86def0(a1, v3);
}

__int64 LiveSession_526b50(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;

  *a1 = SdkData_e88a70 + 16;
  LiveSession_527960(a1 + 8);
  LiveSession_5277a0(a1 + 6);
  nn_os_FinalizeMutex_plt(a1 + 2);
  nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(a1);
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
  return nn_movie_detail_FreeMemory((__int64)a1, v6);
}

__int64 LiveSession_526c40(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88aa8 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
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

__int64 LiveSession_526ed0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88aa0 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
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

__int64 LiveSession_527320(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88a98 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
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

__int64 LiveSession_5277a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88a78 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 32);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 32);
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
  *(_QWORD*)(v2 + 24) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 32) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 LiveSession_5278c0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  LiveSession_5277a0(a1);
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

__int64 LiveSession_527960(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88a80 + 16;
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

__int64 LiveSession_527a80(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  LiveSession_527960(a1);
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

__int64 LiveSession_527b10(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88a90 + 16;
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
