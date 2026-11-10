#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void
    nandroid_ABuffer_CreateAsCopy_plt(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__attribute__((swiftcall)) void
    nandroid_AMessage_dup_plt_alt1(PSEUDO_X8,
                                   _QWORD) __asm__("nandroid_AMessage_dup_plt");
__attribute__((swiftcall)) void
    nandroid_ATSParser_getSource_plt(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void nandroid_DataURISource_Create_plt(PSEUDO_X8,
                                                                  _QWORD);
__attribute__((swiftcall)) void nandroid_M3UParser_meta_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d4780(__int64);
__int64 SdkRoutine_86e160(_QWORD, _QWORD);
__int64 SdkRoutine_86ec90(_QWORD, _QWORD);
__int64 SdkRoutine_86f350(_QWORD, _QWORD);
__int64 SdkRoutine_870550(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 isxdigit_plt(_QWORD);
__int64 nandroid_ABuffer_ABuffer_plt_86dfe0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABuffer_ABuffer_plt_86e010(_QWORD, _QWORD);
__int64 nandroid_ABuffer_setRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ALooper_GetNowUs_plt(void);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_AMessage_plt_86ddc0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findPointer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_post_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_setBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setObject_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86f280(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_what_plt(_QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86dba0(_QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_AString_insert_plt_86f400(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_size_plt(_QWORD);
__int64 nandroid_AString_startsWith_plt(_QWORD, _QWORD);
__int64 nandroid_ATSParser_hasSource_plt(_QWORD, _QWORD);
__int64 nandroid_AnotherPacketSource_clear_plt(_QWORD);
__int64 nandroid_HTTPDownloader_disconnect_plt(_QWORD);
__int64 nandroid_HTTPDownloader_fetchBlock_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_HTTPDownloader_fetchFile_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_HTTPDownloader_reconnect_plt(_QWORD);
__int64 nandroid_LiveSession_addBandwidthMeasurement_plt(_QWORD, _QWORD,
                                                         _QWORD);
__int64 nandroid_M3UParser_getSeqNumberRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_M3UParser_isComplete_plt(_QWORD);
__int64 nandroid_M3UParser_isEvent_plt(_QWORD);
__int64 nandroid_M3UParser_itemAt_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_DownloadState_resetState_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_DownloadState_restoreState_plt(void);
__int64 nandroid_PlaylistFetcher_DownloadState_saveState_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD);
__int64 nandroid_PlaylistFetcher_checkDecryptPadding_plt(_QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_decryptBuffer_plt(_QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 nandroid_PlaylistFetcher_extractAndQueueAccessUnitsFromTs_plt(_QWORD,
                                                                      _QWORD);
__int64 nandroid_PlaylistFetcher_extractAndQueueAccessUnits_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nandroid_PlaylistFetcher_getSegmentStartTimeUs_plt(_QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_initDownloadState_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_notifyError_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_notifyStopReached_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_onDownloadNext_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_onMonitorQueue_plt(_QWORD);
__int64 nandroid_PlaylistFetcher_onResumeUntil_plt(_QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_onStart_plt(_QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_onStop_plt(_QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_postMonitorQueue_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_shouldPauseDownload_plt(_QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD, _QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(_QWORD) __asm__(
    "nandroid_RefBase_Destroy_RefBase_plt_86def0");
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_remove_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_clear_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 tolower_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88af0;
extern __int64 SdkData_e88b00;
extern void (*SdkData_e88338[493])();
struct PseudoSret nandroid_AMessage_dup_plt(_QWORD);
struct PseudoSret nandroid_HTTPDownloader_fetchPlaylist_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nandroid_PlaylistFetcher_decryptBuffer(__int64 a1, __int64 a2,
                                               __int64 a3, char a4);
__int64 PlaylistFetcher_52f310(__int64 a1, __int64 a2, __int64* a3);
__int64 nandroid_PlaylistFetcher_onMessageReceived(__int64 a1, _QWORD* a2);
__int64 nandroid_PlaylistFetcher_onStart(__int64 a1, _QWORD* a2);
__int64 nandroid_PlaylistFetcher_onPause(void* this_);
__int64 nandroid_PlaylistFetcher_onStop(__int64 a1, _QWORD* a2);
__int64 nandroid_PlaylistFetcher_onDownloadNext(void* this_);
__int64 nandroid_PlaylistFetcher_setAccessUnitProperties(__int64 a1, __int64 a2,
                                                         __int64* a3, char a4);
__int64 PlaylistFetcher_5342f0(_QWORD* a1);
__int64 PlaylistFetcher_534360(_QWORD* a1);
__int64 PlaylistFetcher_534480(_QWORD* a1);

__int64 nandroid_PlaylistFetcher_decryptBuffer(__int64 a1, __int64 a2,
                                               __int64 a3, char a4)
{
  char v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned int v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  char v38;
  unsigned __int64 v39;
  bool v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned __int8 v46;
  int v47;
  unsigned __int8 v48;
  char v49;
  char v50;
  __int64 v52;
  _QWORD v53[3];
  struct {
    __int64 v54;
    __int64 v55;
  } v54_;
  _QWORD* v56;
  _QWORD v57[3];
  _QWORD v58[3];
  __int64 v59;
  struct {
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v60_;
  __int64 v63;

  v59 = 0;
  memset(v58, 0, sizeof(v58));
  nandroid_AString_AString_plt_86d9f0(v58);
  if (a2 < 0) {
  LABEL_5:
    v9 = (_QWORD*)(a1 + 456);
    nandroid_AString_AString_plt_86da90(&v60_.v60, "NONE");
    SdkRoutine_86e160(v58, &v60_.v60);
    nandroid_AString_Destroy_AString_plt(&v60_.v60);
  }
  else {
    while (1) {
      v60_.v61 = 0;
      v60_.v62 = 0;
      v60_.v60 = 0;
      nandroid_AString_AString_plt_86d9f0(&v60_.v60);
      nandroid_M3UParser_itemAt_plt(*(_QWORD*)(a1 + 296), a2, &v60_.v60, &v59);
      v8 = nandroid_AMessage_findString_plt(v59, "cipher-method", v58);
      nandroid_AString_Destroy_AString_plt(&v60_.v60);
      if ((v8 & 1) != 0) {
        break;
      }
      v40 = a2-- < 1;
      if (v40) {
        goto LABEL_5;
      }
    }
    v9 = (_QWORD*)(a1 + 456);
    if ((a4 & 1) != 0 && *(_QWORD*)(a1 + 456) != 0) {
      nandroid_AString_AString_plt_86da90(&v60_.v60, "SAMPLE-AES");
      v22 = SdkRoutine_86f350(v58, &v60_.v60);
      v23 = nandroid_AString_Destroy_AString_plt(&v60_.v60);
      if ((v22 & 1) == 0) {
        v24 = *v9;
        if (*v9 != 0) {
          v23 = nandroid_RefBase_decStrong_plt(*v9, a1 + 456);
        }
        if (v24 != *v9) {
          nandroid_sp_report_race_plt(v23);
        }
        *(_QWORD*)(a1 + 456) = 0;
        *(_BYTE*)(a1 + 448) = 1;
      }
    }
  }
  nandroid_ABuffer_meta_plt((void*)(&v60_.v60));
  v10 = v60_.v60;
  v11 = nandroid_AString_c_str_plt(v58);
  nandroid_AMessage_setString_plt_86de10(v10, "cipher-method", v11, -1);
  if (v60_.v60 != 0) {
    nandroid_RefBase_decStrong_plt(v60_.v60, &v60_.v60);
  }
  nandroid_AString_AString_plt_86da90(&v60_.v60, "NONE");
  v12 = SdkRoutine_86f350(v58, &v60_.v60);
  nandroid_AString_Destroy_AString_plt(&v60_.v60);
  if ((v12 & 1) != 0) {
    v13 = 0;
    goto LABEL_90;
  }
  nandroid_AString_AString_plt_86da90(&v60_.v60, "SAMPLE-AES");
  v14 = SdkRoutine_86f350(v58, &v60_.v60);
  nandroid_AString_Destroy_AString_plt(&v60_.v60);
  if ((v14 & 1) == 0) {
    nandroid_AString_AString_plt_86da90(&v60_.v60, "AES-128");
    v15 = SdkRoutine_86f350(v58, &v60_.v60);
    nandroid_AString_Destroy_AString_plt(&v60_.v60);
    if ((v15 & 1) == 0) {
      v13 = -1010;
      goto LABEL_90;
    }
  }
  memset(v57, 0, sizeof(v57));
  nandroid_AString_AString_plt_86d9f0(v57);
  if ((nandroid_AMessage_findString_plt(v59, "cipher-uri", v57) & 1) != 0) {
    nandroid_AString_AString_plt_86dba0(&v60_.v60, v57);
    v63 = 0;
    v16 = nandroid_SortedVectorImpl_indexOf_plt(a1 + 240, &v60_.v60);
    if (v63 != 0) {
      nandroid_RefBase_decStrong_plt(v63, &v63);
    }
    v17 = nandroid_AString_Destroy_AString_plt(&v60_.v60);
    v56 = nullptr;
    if ((v16 & 0x8000000000000000LL) == 0) {
      v18 = v56;
      v19 = *(_QWORD*)(a1 + 248) + 32 * v16;
      v20 = *(_QWORD**)(v19 + 24);
      if (v20 != nullptr) {
        v17 = nandroid_RefBase_incStrong_plt(*(_QWORD*)(v19 + 24), &v56);
      }
      if (v18 != v56) {
        nandroid_sp_report_race_plt(v17);
      }
      v56 = v20;
      goto LABEL_21;
    }
    if ((nandroid_AString_startsWith_plt(v57, "data:") & 1) != 0) {
      v60_.v60 = 0;
      v25 = nandroid_AString_c_str_plt(v57);
      nandroid_DataURISource_Create_plt((void*)(v53), v25);
      v26 = v53[0];
      v53[0] = 0;
      v60_.v60 = v26;
      if (v26 != 0) {
        if ((*(unsigned int (**)(__int64, _QWORD*))(*(_QWORD*)v26 + 16LL))(
                v26, v53) == 0 &&
            (v53[0] & 0x8000000000000000LL) == 0) {
          v27 = SdkRoutine_4d4780(64);
          nandroid_ABuffer_ABuffer_plt_86e010(v27, v53[0]);
          SdkRoutine_86ec90(&v56, v27);
          (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)v60_.v60 + 8LL))(v60_.v60, 0, v56[3] + v56[5], v53[0]);
          nandroid_ABuffer_setRange_plt(v56, 0, v53[0]);
          if (v60_.v60 != 0) {
            nandroid_RefBase_decStrong_plt(
                v60_.v60 + *(_QWORD*)(*(_QWORD*)v60_.v60 - 24LL), &v60_.v60);
          }
          goto LABEL_21;
        }
        if (v60_.v60 != 0) {
          nandroid_RefBase_decStrong_plt(
              v60_.v60 + *(_QWORD*)(*(_QWORD*)v60_.v60 - 24LL), &v60_.v60);
        }
      }
      v13 = -1007;
      v21 = v56;
      if (v56 == nullptr) {
        goto LABEL_89;
      }
      goto LABEL_88;
    }
    v28 = *(_QWORD*)(a1 + 104);
    v29 = nandroid_AString_c_str_plt(v57);
    v30 = nandroid_HTTPDownloader_fetchFile_plt(v28, v29, &v56, 0);
    if (v30 == -1001) {
      v13 = -1001;
      v21 = v56;
      if (v56 == nullptr) {
        goto LABEL_89;
      }
      goto LABEL_88;
    }
    if (v30 < 0) {
      v13 = -1004;
      v21 = v56;
      if (v56 == nullptr) {
        goto LABEL_89;
      }
      goto LABEL_88;
    }
    v21 = v56;
    if (v56[6] != 16) {
      v13 = -1007;
    LABEL_88:
      nandroid_RefBase_decStrong_plt(v21, &v56);
      goto LABEL_89;
    }
    PlaylistFetcher_52f310(a1 + 240, (__int64)v57, (__int64*)&v56);
  LABEL_21:
    if ((a4 & 1) != 0) {
      v60_.v61 = 0;
      v60_.v62 = 0;
      v60_.v60 = 0;
      nandroid_AString_AString_plt_86d9f0(&v60_.v60);
      if ((nandroid_AMessage_findString_plt(v59, "cipher-iv", &v60_.v60) & 1) !=
          0) {
        if (((nandroid_AString_startsWith_plt(&v60_.v60, "0x") & 1) != 0 ||
             (nandroid_AString_startsWith_plt(&v60_.v60, "0X") & 1) != 0) &&
            (unsigned __int64)nandroid_AString_size_plt(&v60_.v60) <= 0x22) {
          if ((unsigned __int64)nandroid_AString_size_plt(&v60_.v60) <= 0x21) {
            do {
              nandroid_AString_insert_plt_86f400(&v60_.v60, "0", 1, 2);
            } while ((unsigned __int64)nandroid_AString_size_plt(&v60_.v60) <
                     0x22);
          }
          v41 = &v54_.v54;
          v42 = 0;
          v54_.v54 = 0;
          v54_.v55 = 0;
          while (1) {
            v43 = nandroid_AString_c_str_plt(&v60_.v60);
            v44 = (unsigned __int8)tolower_plt(
                *(unsigned __int8*)(v43 + v42 + 2));
            v45 = nandroid_AString_c_str_plt(&v60_.v60);
            if ((unsigned int)isxdigit_plt(v44) == 0) {
              break;
            }
            v46 = tolower_plt(*(unsigned __int8*)(v45 + v42 + 3));
            v47 = v46;
            v48 = v46;
            if ((unsigned int)isxdigit_plt(v46) == 0) {
              break;
            }
            v49 = v44 - 48;
            v42 += 2;
            if (v44 - 48 >= 0xA) {
              v49 = v44 - 87;
            }
            v50 = v47 - 48;
            if ((unsigned int)(v47 - 48) >= 0xA) {
              v50 = v48 - 87;
            }
            *(_BYTE*)v41 = v50 | (16 * v49);
            v41 = (__int64*)((char*)v41 + 1);
            if (v42 == 32) {
              goto LABEL_48;
            }
          }
        }
        nandroid_AString_Destroy_AString_plt(&v60_.v60);
        v13 = -1007;
        v21 = v56;
        if (v56 == nullptr) {
          goto LABEL_89;
        }
        goto LABEL_88;
      }
      v31 = *(_DWORD*)(a1 + 304);
      v54_.v54 = 0;
      LODWORD(v54_.v55) = 0;
      HIDWORD(v54_.v55) = bswap32(v31);
    LABEL_48:
      v32 = (__int64*)(v56[3] + v56[5]);
      if ((*(_QWORD*)(a1 + 432) ^ *v32 | *(_QWORD*)(a1 + 440) ^ v32[1] |
           *(_QWORD*)(a1 + 416) ^ v54_.v54 | *(_QWORD*)(a1 + 424) ^ v54_.v55) !=
          0) {
        v34 = *v32;
        v33 = v32[1];
        *(_QWORD*)(a1 + 432) = v34;
        *(_QWORD*)(a1 + 440) = v33;
        v35 = v54_.v55;
        *(_QWORD*)(a1 + 416) = v54_.v54;
        *(_QWORD*)(a1 + 424) = v35;
        nandroid_AString_AString_plt_86da90(v53, "SAMPLE-AES");
        v36 = SdkRoutine_86f350(v58, v53);
        nandroid_AString_Destroy_AString_plt(v53);
        if ((v36 & 1) != 0) {
          v53[0] = 0;
          *(_BYTE*)(a1 + 448) = 1;
          nandroid_ABuffer_CreateAsCopy_plt((void*)(v53), a1 + 432, 16);
          v52 = 0;
          nandroid_ABuffer_CreateAsCopy_plt((void*)(&v52), a1 + 416, 16);
          v37 = SdkRoutine_4d4780(1344);
          nandroid_AMessage_AMessage_plt_86da50();
          SdkRoutine_870550(v9, v37);
          nandroid_AMessage_setBuffer_plt(*(_QWORD*)(a1 + 456), "keyData", v53);
          nandroid_AMessage_setBuffer_plt(*(_QWORD*)(a1 + 456), "initVec",
                                          &v52);
          if (v52 != 0) {
            nandroid_RefBase_decStrong_plt(v52, &v52);
          }
          if (v53[0] != 0) {
            nandroid_RefBase_decStrong_plt(v53[0], v53);
          }
        }
      }
      nandroid_AString_Destroy_AString_plt(&v60_.v60);
    }
    nandroid_AString_AString_plt_86da90(&v60_.v60, "SAMPLE-AES");
    v38 = SdkRoutine_86f350(v58, &v60_.v60);
    nandroid_AString_Destroy_AString_plt(&v60_.v60);
    if ((v38 & 1) != 0 || (v39 = *(_QWORD*)(*(_QWORD*)a3 + 48LL)) == 0) {
      v13 = 0;
      v21 = v56;
      if (v56 == nullptr) {
        goto LABEL_89;
      }
    }
    else {
      v40 = (v39 & 0xF) == 0 && v39 > 0xF;
      if (v40) {
        v13 = 0;
      }
      else {
        v13 = -1007;
      }
      v21 = v56;
      if (v56 == nullptr) {
        goto LABEL_89;
      }
    }
    goto LABEL_88;
  }
  v13 = -1007;
LABEL_89:
  nandroid_AString_Destroy_AString_plt(v57);
LABEL_90:
  nandroid_AString_Destroy_AString_plt(v58);
  if (v59 != 0) {
    nandroid_RefBase_decStrong_plt(v59, &v59);
  }
  return v13;
}

__int64 PlaylistFetcher_52f310(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE v8[24];
  __int64 v9;

  nandroid_AString_AString_plt_86dba0(v8, a2);
  v5 = *a3;
  v9 = v5;
  if (v5 != 0) {
    nandroid_RefBase_incStrong_plt(v5, &v9);
  }
  v6 = nandroid_SortedVectorImpl_add_plt(a1, v8);
  if (v9 != 0) {
    nandroid_RefBase_decStrong_plt(v9, &v9);
  }
  nandroid_AString_Destroy_AString_plt(v8);
  return v6;
}

__int64 nandroid_PlaylistFetcher_onMessageReceived(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18[4];
  __int64 v19;

  result = nandroid_AMessage_what_plt(*a2);
  if ((int)result > 1885435250) {
    if ((int)result > 1937010543) {
      if ((_DWORD)result == 1937010544) {
        nandroid_PlaylistFetcher_onStop_plt(a1, a2);
        v11 = *(_QWORD*)(a1 + 88);
        v19 = 0;
        *(struct PseudoSret*)(&v19) = nandroid_AMessage_dup_plt(v11);
        v7 = v19;
        v8 = "what";
        v9 = 2;
      }
      else {
        if ((_DWORD)result != 1937011316) {
          return result;
        }
        nandroid_PlaylistFetcher_onStart_plt(a1, a2);
        v6 = *(_QWORD*)(a1 + 88);
        v19 = 0;
        *(struct PseudoSret*)(&v19) = nandroid_AMessage_dup_plt(v6);
        nandroid_AMessage_setInt32_plt(v19, "what", 0);
        v7 = v19;
        v8 = "err";
        v9 = 0;
      }
    }
    else {
      if ((_DWORD)result != 1885435251) {
        if ((_DWORD)result == 1920167269) {
          return nandroid_PlaylistFetcher_onResumeUntil_plt(a1, a2);
        }
        return result;
      }
      ++*(_DWORD*)(a1 + 344);
      *(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 172);
      nn_os_LockMutex_plt(a1 + 464);
      *(_DWORD*)(a1 + 496) = -1082130432;
      nn_os_UnlockMutex_plt(a1 + 464);
      nandroid_HTTPDownloader_reconnect_plt(*(_QWORD*)(a1 + 104));
      v10 = *(_QWORD*)(a1 + 88);
      v19 = 0;
      *(struct PseudoSret*)(&v19) = nandroid_AMessage_dup_plt(v10);
      nandroid_AMessage_setInt32_plt(v19, "what", 1);
      v7 = v19;
      v8 = "seekMode";
      if (*(_BYTE*)(*(_QWORD*)(a1 + 504) + 16LL) != 0) {
        v9 = 1;
      }
      else {
        v9 = 2;
      }
    }
    nandroid_AMessage_setInt32_plt(v7, v8, v9);
    nandroid_AMessage_post_plt(v19, 0);
    goto LABEL_21;
  }
  if ((_DWORD)result != 1684827768) {
    if ((_DWORD)result == 1718383476) {
      v12 = *(_QWORD*)(a1 + 104);
      v18[0] = 0;
      v19 = 0;
      v13 = nandroid_AString_c_str_plt(a1 + 120);
      *(struct PseudoSret*)(&v19) =
          nandroid_HTTPDownloader_fetchPlaylist_plt(v12, v13, 0, v18);
      v14 = *(_QWORD*)(a1 + 88);
      v17 = 0;
      *(struct PseudoSret*)(&v17) = nandroid_AMessage_dup_plt(v14);
      nandroid_AMessage_setInt32_plt(v17, "what", 10);
      v15 = v17;
      v16 = v19;
      if (v19 != 0) {
        nandroid_RefBase_incStrong_plt(v19, &v16);
      }
      nandroid_AMessage_setObject_plt(v15, "playlist", &v16);
      if (v16 != 0) {
        nandroid_RefBase_decStrong_plt(v16, &v16);
      }
      nandroid_AMessage_post_plt(v17, 0);
      if (v17 != 0) {
        nandroid_RefBase_decStrong_plt(v17, &v17);
      }
    LABEL_21:
      result = v19;
      if (v19 != 0) {
        return nandroid_RefBase_decStrong_plt(v19, &v19);
      }
      return result;
    }
    if ((_DWORD)result != 1836019305) {
      return result;
    }
  }
  v5 = *a2;
  LODWORD(v19) = 0;
  result = nandroid_AMessage_findInt32_plt(v5, "generation", &v19);
  if ((_DWORD)v19 == *(_DWORD*)(a1 + 344)) {
    if ((unsigned int)nandroid_AMessage_what_plt(*a2) == 1836019305) {
      return nandroid_PlaylistFetcher_onMonitorQueue_plt(a1);
    }
    else {
      return nandroid_PlaylistFetcher_onDownloadNext_plt(a1);
    }
  }
  return result;
}

__int64 nandroid_PlaylistFetcher_onStart(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _QWORD* v32;

  nandroid_VectorImpl_clear_plt(a1 + 192);
  v4 = (_QWORD*)(a1 + 184);
  v5 = *(_QWORD*)(a1 + 184);
  if (v5 != 0) {
    v6 = nandroid_RefBase_decStrong_plt(*(_QWORD*)(a1 + 184), a1 + 184);
    if (v5 != *v4) {
      nandroid_sp_report_race_plt(v6);
    }
    *v4 = 0;
  }
  v7 = X8CALL_X0(void*, nandroid_AMessage_dup_plt_alt1((void*)(&v31),
                                                       *(_QWORD*)(a1 + 88)));
  v8 = *(_QWORD*)(a1 + 96);
  if (v8 != 0) {
    v7 = (_QWORD*)nandroid_RefBase_decStrong_plt(*(_QWORD*)(a1 + 96), a1 + 96);
  }
  if (v8 != *(_QWORD*)(a1 + 96)) {
    nandroid_sp_report_race_plt(v7);
  }
  v9 = v31;
  *(_QWORD*)(a1 + 96) = v31;
  nandroid_AMessage_setInt32_plt(v9, "what", 8);
  nandroid_AMessage_setString_plt_86f280(*(_QWORD*)(a1 + 96), "uri", a1 + 120);
  v10 = *a2;
  v30 = 0;
  nandroid_AMessage_findInt32_plt(v10, "streamTypeMask", &v30);
  v11 = *a2;
  v28 = 0;
  v29 = 0;
  v27 = 0;
  nandroid_AMessage_findInt64_plt(v11, "startTimeUs", &v29);
  nandroid_AMessage_findInt64_plt(*a2, "segmentStartTimeUs", &v28);
  nandroid_AMessage_findInt32_plt(*a2, "startDiscontinuitySeq",
                                  (char*)&v27 + 4);
  nandroid_AMessage_findInt32_plt(*a2, "seekMode", &v27);
  v12 = v30;
  if ((v30 & 1) == 0) {
    if ((v30 & 2) == 0) {
      goto LABEL_11;
    }
    goto LABEL_22;
  }
  v13 = *a2;
  v26 = nullptr;
  nandroid_AMessage_findPointer_plt(v13, "audioSource", &v26);
  v25 = v26;
  if (v26 != nullptr) {
    nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL), &v25);
    LODWORD(v31) = 1;
    v32 = v25;
    if (v25 != nullptr) {
      nandroid_RefBase_incStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                     &v32);
    }
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v14 = v32;
    if (v32 != nullptr) {
      goto LABEL_18;
    }
  }
  else {
    v32 = nullptr;
    LODWORD(v31) = 1;
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v14 = v32;
    if (v32 != nullptr) {
    LABEL_18:
      nandroid_RefBase_decStrong_plt((char*)v14 + *(_QWORD*)(*v14 - 24LL),
                                     &v32);
    }
  }
  if (v25 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL), &v25);
  }
  v12 = v30;
  if ((v30 & 2) == 0) {
  LABEL_11:
    if ((v12 & 4) == 0) {
      goto LABEL_12;
    }
    goto LABEL_30;
  }
LABEL_22:
  v15 = *a2;
  v26 = nullptr;
  nandroid_AMessage_findPointer_plt(v15, "videoSource", &v26);
  v25 = v26;
  if (v26 != nullptr) {
    nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL), &v25);
    LODWORD(v31) = 2;
    v32 = v25;
    if (v25 != nullptr) {
      nandroid_RefBase_incStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                     &v32);
    }
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v16 = v32;
    if (v32 != nullptr) {
      goto LABEL_26;
    }
  }
  else {
    v32 = nullptr;
    LODWORD(v31) = 2;
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v16 = v32;
    if (v32 != nullptr) {
    LABEL_26:
      nandroid_RefBase_decStrong_plt((char*)v16 + *(_QWORD*)(*v16 - 24LL),
                                     &v32);
    }
  }
  if (v25 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL), &v25);
  }
  v12 = v30;
  if ((v30 & 4) == 0) {
  LABEL_12:
    v26 = nullptr;
    if ((v12 & 3) == 0) {
      goto LABEL_46;
    }
  LABEL_38:
    if ((nandroid_AMessage_findPointer_plt(*a2, "metadataSource", &v26) & 1) ==
        0) {
      goto LABEL_46;
    }
    v25 = v26;
    if (v26 != nullptr) {
      nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL),
                                     &v25);
      LODWORD(v31) = 8;
      v32 = v25;
      if (v25 != nullptr) {
        nandroid_RefBase_incStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                       &v32);
      }
      nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
      v19 = v32;
      if (v32 == nullptr) {
        goto LABEL_44;
      }
    }
    else {
      v32 = nullptr;
      LODWORD(v31) = 8;
      nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
      v19 = v32;
      if (v32 == nullptr) {
      LABEL_44:
        if (v25 != nullptr) {
          nandroid_RefBase_decStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                         &v25);
        }
        goto LABEL_46;
      }
    }
    nandroid_RefBase_decStrong_plt((char*)v19 + *(_QWORD*)(*v19 - 24LL), &v32);
    goto LABEL_44;
  }
LABEL_30:
  v17 = *a2;
  v26 = nullptr;
  nandroid_AMessage_findPointer_plt(v17, "subtitleSource", &v26);
  v25 = v26;
  if (v26 != nullptr) {
    nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL), &v25);
    LODWORD(v31) = 4;
    v32 = v25;
    if (v25 != nullptr) {
      nandroid_RefBase_incStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL),
                                     &v32);
    }
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v18 = v32;
    if (v32 != nullptr) {
      goto LABEL_34;
    }
  }
  else {
    v32 = nullptr;
    LODWORD(v31) = 4;
    nandroid_SortedVectorImpl_add_plt(a1 + 192, &v31);
    v18 = v32;
    if (v32 != nullptr) {
    LABEL_34:
      nandroid_RefBase_decStrong_plt((char*)v18 + *(_QWORD*)(*v18 - 24LL),
                                     &v32);
    }
  }
  if (v25 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v25 + *(_QWORD*)(*v25 - 24LL), &v25);
  }
  v26 = nullptr;
  if ((v30 & 3) != 0) {
    goto LABEL_38;
  }
LABEL_46:
  *(_DWORD*)(a1 + 148) = v30;
  *(_QWORD*)(a1 + 160) = v28;
  if ((v27 & 0x8000000000000000LL) == 0) {
    *(_DWORD*)(a1 + 172) = HIDWORD(v27);
  }
  v20 = v27;
  v21 = v29;
  *(_DWORD*)(a1 + 356) = 0;
  *(_DWORD*)(a1 + 324) = v20;
  if ((v21 & 0x8000000000000000LL) == 0 || v20 == 1) {
    v22 = *(_QWORD*)(a1 + 408);
    *(_WORD*)(a1 + 320) = 1;
    nandroid_AnotherPacketSource_clear_plt(v22);
    if ((v29 & 0x8000000000000000LL) == 0) {
      v23 = *(_QWORD*)(a1 + 504);
      *(_QWORD*)(a1 + 152) = v29;
      *(_BYTE*)(a1 + 384) = 0;
      *(_BYTE*)(a1 + 328) = 0;
      *(_DWORD*)(a1 + 304) = -1;
      nandroid_PlaylistFetcher_DownloadState_resetState_plt(v23);
    }
  }
  atomic_store(1u, (unsigned __int8*)(a1 + 232));
  nandroid_PlaylistFetcher_postMonitorQueue_plt(a1, 0, 0);
  return 0;
}

__int64 nandroid_PlaylistFetcher_onPause(void* this_)
{
  ++*((_DWORD*)this_ + 86);
  *((_DWORD*)this_ + 88) = *((_DWORD*)this_ + 43);
  nn_os_LockMutex_plt((char*)this_ + 464);
  *((_DWORD*)this_ + 124) = -1082130432;
  nn_os_UnlockMutex_plt((char*)this_ + 464);
  return nandroid_HTTPDownloader_reconnect_plt(*((_QWORD*)this_ + 13));
}

__int64 nandroid_PlaylistFetcher_onStop(__int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v8;
  int v9;

  v2 = *(_DWORD*)(a1 + 344);
  v9 = 0;
  *(_DWORD*)(a1 + 344) = v2 + 1;
  nandroid_AMessage_findInt32_plt(*a2, "clear", &v9);
  if (v9 != 0 && *(_QWORD*)(a1 + 208) != 0) {
    v4 = 8;
    v5 = 0;
    do {
      v6 = *(_QWORD*)(a1 + 200);
      v8 = nullptr;
      v8 = *(_QWORD**)(v6 + v4);
      nandroid_RefBase_incStrong_plt((char*)v8 + *(_QWORD*)(*v8 - 24LL), &v8);
      nandroid_AnotherPacketSource_clear_plt(v8);
      if (v8 != nullptr) {
        nandroid_RefBase_decStrong_plt((char*)v8 + *(_QWORD*)(*v8 - 24LL), &v8);
      }
      ++v5;
      v4 += 16;
    } while (v5 < *(_QWORD*)(a1 + 208));
  }
  nandroid_PlaylistFetcher_DownloadState_resetState_plt(*(_QWORD*)(a1 + 504));
  nandroid_VectorImpl_clear_plt(a1 + 192);
  *(_DWORD*)(a1 + 148) = 0;
  atomic_store(0, (unsigned __int8*)(a1 + 232));
  nn_os_LockMutex_plt(a1 + 464);
  *(_DWORD*)(a1 + 496) = -1082130432;
  nn_os_UnlockMutex_plt(a1 + 464);
  return nandroid_HTTPDownloader_disconnect_plt(*(_QWORD*)(a1 + 104));
}

__int64 nandroid_PlaylistFetcher_onDownloadNext(void* this_)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  _BOOL4 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v19)();
  _QWORD** v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD** v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  char v33;
  void(__attribute__((noreturn)) * v34)();
  _QWORD** v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  const char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  _QWORD* v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v57;
  unsigned __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  void(__attribute__((noreturn)) * v66)();
  _QWORD v67[3];
  _QWORD* v68;
  _QWORD v69[2];
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  _QWORD* v74;
  _QWORD v75[3];
  __int64 v76;

  memset(v75, 0, sizeof(v75));
  nandroid_AString_AString_plt_86d9f0(v75);
  v2 = *((_QWORD*)this_ + 63);
  v76 = 0;
  v73 = nullptr;
  v74 = nullptr;
  v3 = *(unsigned __int8*)(v2 + 16);
  v72 = 0;
  if (v3 == 1) {
    nandroid_PlaylistFetcher_DownloadState_restoreState_plt();
  }
  else if ((nandroid_PlaylistFetcher_initDownloadState_plt(
                this_, v75, &v76, (char*)&v72 + 4, &v72) &
            1) == 0) {
    goto LABEL_102;
  }
  v4 = v3 ^ 1;
  v70 = 0;
  v71 = 0;
  if ((nandroid_AMessage_findInt64_plt(v76, "range-offset", &v71) & 1) != 0 &&
      (nandroid_AMessage_findInt64_plt(v76, "range-length", &v70) & 1) != 0) {
    if (v70 != 0) {
      goto LABEL_10;
    }
    ++*((_DWORD*)this_ + 76);
    goto LABEL_8;
  }
  v70 = -1;
  v71 = 0;
  while (1) {
  LABEL_10:
    v5 = nandroid_ALooper_GetNowUs_plt();
    v6 = *((_QWORD*)this_ + 13);
    v7 = v5;
    v8 = nandroid_AString_c_str_plt(v75);
    v9 = nandroid_HTTPDownloader_fetchBlock_plt(v6, v8, &v74, v71, v70, 48128,
                                                0, v4 & 1);
    v10 = nandroid_ALooper_GetNowUs_plt();
    if (v9 == -1001) {
      goto LABEL_102;
    }
    if (v9 == -1009) {
      if (*((int*)this_ + 79) >= 300) {
        *((_DWORD*)this_ + 79) = 0;
        LODWORD(v9) = -1009;
      LABEL_69:
        v46 = *((_QWORD*)this_ + 11);
        v68 = nullptr;
        nandroid_AMessage_dup_plt_alt1((void*)(&v68), v46);
        nandroid_AMessage_setInt32_plt(v68, "what", 3);
        v38 = v68;
        v39 = "err";
        v40 = (unsigned int)v9;
      LABEL_99:
        nandroid_AMessage_setInt32_plt(v38, v39, v40);
        nandroid_AMessage_post_plt(v68, 0);
      }
      else {
        v68 = nullptr;
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v66 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v66) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v35 =
            (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
        v36 = SdkRoutine_4c3860(16, 1344, v35);
        v67[0] = this_;
        nandroid_RefBase_incStrong_plt(this_, v67);
        nandroid_AMessage_AMessage_plt_86ddc0(v36, 1684827768, v67);
        v68 = (_QWORD*)v36;
        nandroid_RefBase_incStrong_plt(v36, &v68);
        if (v67[0] != 0) {
          nandroid_RefBase_decStrong_plt(v67[0], v67);
        }
        nandroid_AMessage_setInt32_plt(v68, "generation",
                                       *((unsigned int*)this_ + 86));
        nandroid_AMessage_post_plt(v68, 100000);
        ++*((_DWORD*)this_ + 79);
      }
      if (v68 != nullptr) {
        nandroid_RefBase_decStrong_plt(v68, &v68);
      }
      goto LABEL_102;
    }
    *((_DWORD*)this_ + 79) = 0;
    if (v9 < 0) {
      goto LABEL_69;
    }
    if ((*((_BYTE*)this_ + 320) & 1) == 0) {
      v11 = v9 != 0 && *((_QWORD*)this_ + 23) == 0;
      v12 = !v11;
      if (((v4 | v12) & 1) == 0 && (*((_BYTE*)this_ + 148) & 3) != 0) {
        nandroid_LiveSession_addBandwidthMeasurement_plt(*((_QWORD*)this_ + 14),
                                                         v9, v10 - v7);
      }
    }
    v13 = v74[6];
    nandroid_ABuffer_setRange_plt(v74, v13 - v9, v9);
    v14 = nandroid_PlaylistFetcher_decryptBuffer_plt(
        this_, *((int*)this_ + 76) - (__int64)SHIDWORD(v72), &v74, v74[5] == 0);
    nandroid_ABuffer_setRange_plt(v74, 0, v13);
    if (v14 != 0) {
      v37 = *((_QWORD*)this_ + 11);
      v68 = nullptr;
      nandroid_AMessage_dup_plt_alt1((void*)(&v68), v37);
      nandroid_AMessage_setInt32_plt(v68, "what", 3);
      v38 = v68;
      v39 = "err";
      v40 = v14;
      goto LABEL_99;
    }
    if (v74[6] == 0 || *(_BYTE*)(v74[3] + v74[5]) != 71) {
      goto LABEL_44;
    }
    v15 = *((unsigned __int8*)this_ + 320);
    if (v73 != nullptr) {
      if (v73[4] == v74[4]) {
        goto LABEL_41;
      }
      v16 = v73[5];
      v17 = v73[6];
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v19 = SdkData_e88338[0];
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v19 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v19) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v20 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v19);
      v21 = SdkRoutine_4c3860(16, 64, v20);
      nandroid_ABuffer_ABuffer_plt_86dfe0(v21, v74[3] + v74[5], v74[4]);
      v22 = v73;
      v23 = nandroid_RefBase_incStrong_plt(v21, &v73);
      if (v22 != nullptr) {
        v23 = nandroid_RefBase_decStrong_plt(v22, &v73);
      }
      if (v22 != v73) {
        nandroid_sp_report_race_plt(v23);
      }
      v73 = (_QWORD*)v21;
      v24 = v21;
      v25 = v16;
      v26 = v17;
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        v34 = SdkData_e88338[0];
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v34) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v27 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
      v28 = SdkRoutine_4c3860(16, 64, v27);
      nandroid_ABuffer_ABuffer_plt_86dfe0(v28, v74[3] + v74[5], v74[4]);
      v29 = v73;
      v30 = nandroid_RefBase_incStrong_plt(v28, &v73);
      if (v29 != nullptr) {
        v30 = nandroid_RefBase_decStrong_plt(v29, &v73);
      }
      if (v29 != v73) {
        nandroid_sp_report_race_plt(v30);
      }
      v73 = (_QWORD*)v28;
      v24 = v28;
      v25 = 0;
      v26 = 0;
    }
    nandroid_ABuffer_setRange_plt(v24, v25, v26);
  LABEL_41:
    nandroid_ABuffer_setRange_plt(v73, v73[5], v73[6] + v9);
    v31 = nandroid_PlaylistFetcher_extractAndQueueAccessUnitsFromTs_plt(this_,
                                                                        &v73);
    if (v31 != 0) {
      break;
    }
    if (*((_DWORD*)this_ + 81) != 0 &&
        v15 != *((unsigned __int8*)this_ + 320)) {
      v50 = (_QWORD*)((char*)this_ + 96);
      v32 = nandroid_AMessage_post_plt(*((_QWORD*)this_ + 12), 0);
      v51 = *((_QWORD*)this_ + 12);
      if (v51 != 0) {
        v32 = nandroid_RefBase_decStrong_plt(*v50, (char*)this_ + 96);
        if (v51 != *v50) {
          v32 = nandroid_sp_report_race_plt(v32);
        }
        *v50 = 0;
      }
    LABEL_76:
      if (v9 != 0) {
        nandroid_PlaylistFetcher_DownloadState_saveState_plt(
            *((_QWORD*)this_ + 63), v75, &v76, &v74, &v73, (char*)&v72 + 4,
            &v72);
        goto LABEL_102;
      }
      v33 = 1;
    LABEL_79:
      if (v74[6] != 0 && *(_BYTE*)(v74[3] + v74[5]) == 71) {
        nandroid_ATSParser_getSource_plt((void*)(&v68), *((_QWORD*)this_ + 47),
                                         0);
        v67[0] = v68;
        if (v68 != nullptr) {
          nandroid_RefBase_incStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                         v67);
          if (v68 != nullptr) {
            nandroid_RefBase_decStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                           &v68);
          }
        }
        if ((nandroid_ATSParser_hasSource_plt(*((_QWORD*)this_ + 47), 0) & 1) ==
            0) {
          v52 = *((_DWORD*)this_ + 37);
          v69[0] = 0;
          *((_DWORD*)this_ + 37) = v52 & 0xFFFFFFFD;
          LODWORD(v68) = 2;
          nandroid_SortedVectorImpl_remove_plt((char*)this_ + 192, &v68);
          if (v69[0] != 0) {
            nandroid_RefBase_decStrong_plt(
                v69[0] + *(_QWORD*)(*(_QWORD*)v69[0] - 24LL), v69);
          }
        }
        if (v67[0] != 0) {
          nandroid_RefBase_decStrong_plt(
              v67[0] + *(_QWORD*)(*(_QWORD*)v67[0] - 24LL), v67);
        }
        v53 = *((_QWORD*)this_ + 47);
        v67[0] = 0;
        nandroid_ATSParser_getSource_plt((void*)(&v68), v53, 1);
        v67[0] = v68;
        if (v68 != nullptr) {
          nandroid_RefBase_incStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                         v67);
          if (v68 != nullptr) {
            nandroid_RefBase_decStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                           &v68);
          }
        }
        v32 = nandroid_ATSParser_hasSource_plt(*((_QWORD*)this_ + 47), 1);
        if ((v32 & 1) == 0) {
          v54 = *((_DWORD*)this_ + 37);
          LODWORD(v68) = 1;
          v69[0] = 0;
          *((_DWORD*)this_ + 37) = v54 & 0xFFFFFFFE;
          v32 = nandroid_SortedVectorImpl_remove_plt((char*)this_ + 192, &v68);
          if (v69[0] != 0) {
            v32 = nandroid_RefBase_decStrong_plt(
                v69[0] + *(_QWORD*)(*(_QWORD*)v69[0] - 24LL), v69);
          }
        }
        if (v67[0] != 0) {
          v32 = nandroid_RefBase_decStrong_plt(
              v67[0] + *(_QWORD*)(*(_QWORD*)v67[0] - 24LL), v67);
        }
      }
      if ((unsigned int)nandroid_PlaylistFetcher_checkDecryptPadding_plt(
              v32, &v74) != 0) {
        v55 = *((_QWORD*)this_ + 11);
        v68 = nullptr;
        nandroid_AMessage_dup_plt_alt1((void*)(&v68), v55);
        nandroid_AMessage_setInt32_plt(v68, "what", 3);
        v38 = v68;
        v39 = "err";
        v40 = 4294966289LL;
        goto LABEL_99;
      }
      if (v73 != nullptr) {
        v69[0] = 0;
        v69[1] = 0;
        v68 = nullptr;
        nandroid_AString_AString_plt_86d9f0(&v68);
        nandroid_ABuffer_meta_plt((void*)(v67));
        nandroid_AMessage_findString_plt(v67[0], "cipher-method", &v68);
        if (v67[0] != 0) {
          nandroid_RefBase_decStrong_plt(v67[0], v67);
        }
        if (v73[6] != 0) {
          nandroid_AString_AString_plt_86da90(v67, "NONE");
          if ((SdkRoutine_86f350(&v68, v67) & 1) != 0) {
            nandroid_AString_Destroy_AString_plt(v67);
          LABEL_117:
            v59 = *((_QWORD*)this_ + 11);
            v67[0] = 0;
            nandroid_AMessage_dup_plt_alt1((void*)(v67), v59);
            nandroid_AMessage_setInt32_plt(v67[0], "what", 3);
            nandroid_AMessage_setInt32_plt(v67[0], "err", 4294966289LL);
            nandroid_AMessage_post_plt(v67[0], 0);
            if (v67[0] != 0) {
              nandroid_RefBase_decStrong_plt(v67[0], v67);
            }
            nandroid_AString_Destroy_AString_plt(&v68);
            goto LABEL_102;
          }
          v58 = v73[6];
          nandroid_AString_Destroy_AString_plt(v67);
          if (v58 >= 0x11) {
            goto LABEL_117;
          }
        }
        nandroid_AString_Destroy_AString_plt(&v68);
        v57 = *((unsigned __int8*)this_ + 320);
        v60 = v57;
        if (v73 == nullptr) {
        LABEL_121:
          v61 = nandroid_PlaylistFetcher_extractAndQueueAccessUnits_plt(
              this_, &v74, &v76);
          if (v61 == -1008) {
            nandroid_PlaylistFetcher_notifyStopReached_plt(this_);
            goto LABEL_102;
          }
          if (v61 == -11) {
            goto LABEL_8;
          }
          if (v61 != 0) {
            nandroid_PlaylistFetcher_notifyError_plt(this_);
            goto LABEL_102;
          }
          v60 = *((unsigned __int8*)this_ + 320);
        }
        ++*((_DWORD*)this_ + 76);
        if (*((_DWORD*)this_ + 81) == 0 || v57 == v60) {
          if ((v33 & 1) == 0) {
            goto LABEL_8;
          }
        }
        else {
          v63 = *((_QWORD*)this_ + 12);
          v62 = (_QWORD*)((char*)this_ + 96);
          nandroid_AMessage_post_plt(v63, 0);
          v64 = *v62;
          if (*v62 != 0) {
            v65 = nandroid_RefBase_decStrong_plt(*v62, v62);
            if (v64 != *v62) {
              nandroid_sp_report_race_plt(v65);
            }
            *v62 = 0;
          }
        }
        goto LABEL_102;
      }
      v57 = *((unsigned __int8*)this_ + 320);
      goto LABEL_121;
    }
  LABEL_44:
    v32 = nandroid_PlaylistFetcher_shouldPauseDownload_plt(this_);
    if ((v32 & 1) != 0) {
      goto LABEL_76;
    }
    v4 = 0;
    v33 = 0;
    if (v9 == 0) {
      goto LABEL_79;
    }
  }
  if (v31 == -1008) {
    v47 = *((_QWORD*)this_ + 11);
    v68 = nullptr;
    nandroid_AMessage_dup_plt_alt1((void*)(&v68), v47);
    v38 = v68;
    v39 = "what";
    v40 = 9;
    goto LABEL_99;
  }
  if (v31 != -11) {
    v48 = *((_QWORD*)this_ + 11);
    v68 = nullptr;
    v49 = v31;
    nandroid_AMessage_dup_plt_alt1((void*)(&v68), v48);
    nandroid_AMessage_setInt32_plt(v68, "what", 3);
    v38 = v68;
    v39 = "err";
    v40 = v49;
    goto LABEL_99;
  }
  v41 = *((_QWORD*)this_ + 47);
  if (v41 != 0) {
    v42 = nandroid_RefBase_decStrong_plt(*((_QWORD*)this_ + 47),
                                         (char*)this_ + 376);
    if (v41 != *((_QWORD*)this_ + 47)) {
      nandroid_sp_report_race_plt(v42);
    }
    *((_QWORD*)this_ + 47) = 0;
  }
  if (*((_QWORD*)this_ + 26) != 0) {
    v43 = 8;
    v44 = 0;
    do {
      v45 = *((_QWORD*)this_ + 25);
      v68 = nullptr;
      v68 = *(_QWORD**)(v45 + v43);
      nandroid_RefBase_incStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                     &v68);
      nandroid_AnotherPacketSource_clear_plt(v68);
      if (v68 != nullptr) {
        nandroid_RefBase_decStrong_plt((char*)v68 + *(_QWORD*)(*v68 - 24LL),
                                       &v68);
      }
      ++v44;
      v43 += 16;
    } while (v44 < *((_QWORD*)this_ + 26));
  }
LABEL_8:
  nandroid_PlaylistFetcher_postMonitorQueue_plt(this_, 0, 0);
LABEL_102:
  if (v73 != nullptr) {
    nandroid_RefBase_decStrong_plt(v73, &v73);
  }
  if (v74 != nullptr) {
    nandroid_RefBase_decStrong_plt(v74, &v74);
  }
  if (v76 != 0) {
    nandroid_RefBase_decStrong_plt(v76, &v76);
  }
  return nandroid_AString_Destroy_AString_plt(v75);
}

__int64 nandroid_PlaylistFetcher_setAccessUnitProperties(__int64 a1, __int64 a2,
                                                         __int64* a3, char a4)
{
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v5 = *a3;
  v22 = 0;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)v5 + 16LL))((void*)(&v22), (__int64)v5);
  if (v22 != 0) {
    nandroid_ABuffer_meta_plt((void*)(&v24));
    v8 = v24;
    if (v22 != 0) {
      v9 = v22 + 16;
    }
    else {
      v9 = 0;
    }
    v23 = v9;
    if (v22 != 0) {
      nandroid_RefBase_incStrong_plt(v22 + 16, &v23);
    }
    nandroid_AMessage_setObject_plt(v8, "format", &v23);
    if (v23 != 0) {
      nandroid_RefBase_decStrong_plt(v23, &v23);
    }
    if (v24 != 0) {
      nandroid_RefBase_decStrong_plt(v24, &v24);
    }
  }
  if ((a4 & 1) != 0) {
    nandroid_ABuffer_meta_plt((void*)(&v24));
    nandroid_AMessage_setInt32_plt(v24, "discard", 1);
    if (v24 != 0) {
      nandroid_RefBase_decStrong_plt(v24, &v24);
    }
  }
  v10 = *(_QWORD*)(a1 + 296);
  v21 = 0;
  nandroid_M3UParser_meta_plt((void*)(&v24), v10);
  v11 = nandroid_AMessage_findInt32_plt(v24, "target-duration", &v21);
  if (v24 != 0) {
    nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  if ((v11 & 1) != 0) {
    nandroid_ABuffer_meta_plt((void*)(&v24));
    nandroid_AMessage_setInt32_plt(v24, "targetDuration", v21);
    if (v24 != 0) {
      nandroid_RefBase_decStrong_plt(v24, &v24);
    }
  }
  nandroid_ABuffer_meta_plt((void*)(&v24));
  nandroid_AMessage_setInt32_plt(v24, "discontinuitySeq",
                                 *(unsigned int*)(a1 + 172));
  if (v24 != 0) {
    nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  nandroid_ABuffer_meta_plt((void*)(&v24));
  v12 = v24;
  v13 = nandroid_PlaylistFetcher_getSegmentStartTimeUs_plt(
      a1, *(unsigned int*)(a1 + 304));
  nandroid_AMessage_setInt64_plt(v12, "segmentStartTimeUs", v13);
  if (v24 != 0) {
    nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  nandroid_ABuffer_meta_plt((void*)(&v24));
  nandroid_AMessage_setInt64_plt(v24, "segmentFirstTimeUs",
                                 *(_QWORD*)(a1 + 400));
  if (v24 != 0) {
    nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  nandroid_ABuffer_meta_plt((void*)(&v20));
  v14 = *(_QWORD*)(a1 + 296);
  v15 = v20;
  v16 = *(int*)(a1 + 304);
  v25 = 0;
  nandroid_M3UParser_getSeqNumberRange_plt(v14, (char*)&v25 + 4, &v25);
  v17 = *(_QWORD*)(a1 + 296);
  v24 = 0;
  nandroid_M3UParser_itemAt_plt(v17, v16 - SHIDWORD(v25), 0, &v24);
  v23 = 0;
  nandroid_AMessage_findInt64_plt(v24, "durationUs", &v23);
  v18 = v23;
  if (v24 != 0) {
    nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  nandroid_AMessage_setInt64_plt(v15, "segmentDurationUs", v18);
  if (v20 != 0) {
    nandroid_RefBase_decStrong_plt(v20, &v20);
  }
  if ((nandroid_M3UParser_isComplete_plt(*(_QWORD*)(a1 + 296)) & 1) == 0 &&
      (nandroid_M3UParser_isEvent_plt(*(_QWORD*)(a1 + 296)) & 1) == 0) {
    nandroid_ABuffer_meta_plt((void*)(&v24));
    nandroid_AMessage_setInt64_plt(v24, "playlistTimeUs", *(_QWORD*)(a1 + 288));
    if (v24 != 0) {
      nandroid_RefBase_decStrong_plt(v24, &v24);
    }
  }
  if (v22 != 0) {
    nandroid_RefBase_decStrong_plt(v22 + 16, &v22);
  }
  return a2;
}

__int64 PlaylistFetcher_5342f0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = SdkData_e88af0 + 16;
  v3 = a1 + 8;
  v2 = a1[8];
  if (v2 != 0) {
    nandroid_RefBase_decStrong_plt(v2, v3);
  }
  v4 = a1[7];
  if (v4 != 0) {
    nandroid_RefBase_decStrong_plt(v4, a1 + 7);
  }
  v5 = a1[6];
  if (v5 != 0) {
    nandroid_RefBase_decStrong_plt(v5, a1 + 6);
  }
  nandroid_AString_Destroy_AString_plt(a1 + 3);
  return nandroid_RefBase_Destroy_RefBase_plt_86def0(a1, v6);
}

__int64 PlaylistFetcher_534360(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD* v9;
  int v11;

  *a1 = SdkData_e88af0 + 16;
  v3 = a1 + 8;
  v2 = a1[8];
  if (v2 != 0) {
    nandroid_RefBase_decStrong_plt(v2, v3);
  }
  v4 = a1[7];
  if (v4 != 0) {
    nandroid_RefBase_decStrong_plt(v4, a1 + 7);
  }
  v5 = a1[6];
  if (v5 != 0) {
    nandroid_RefBase_decStrong_plt(v5, a1 + 6);
  }
  nandroid_AString_Destroy_AString_plt(a1 + 3);
  nandroid_RefBase_Destroy_RefBase_plt_86def0_alt1(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v8 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v11 = __cxa_guard_acquire_plt(SdkData_e88330);
    v8 = SdkData_e88338[0];
    if (v11 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v8 = SdkData_e88338[0];
    }
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
  return nn_movie_detail_FreeMemory((__int64)a1, v9);
}

__int64 PlaylistFetcher_534480(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88b00 + 16;
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

#pragma GCC visibility pop
