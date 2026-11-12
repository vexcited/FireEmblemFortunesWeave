#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_AMessage_dup_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 nandroid_ABuffer_ABuffer_plt_86e010(__int64, unsigned __int64);
__int64 nandroid_ABuffer_setRange_plt(__int64, unsigned __int64,
                                      unsigned __int64);
__int64 nandroid_AMessage_findInt32_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_post_plt(__int64, __int64);
__int64 nandroid_AMessage_setInt32_plt(__int64, const char*, int);
__int64 nandroid_ATSParser_signalEOS_plt(__int64, int);
__int64 nandroid_AnotherPacketSource_clear_plt(__int64);
__int64 nandroid_AnotherPacketSource_queueDiscontinuity_plt(__int64, int,
                                                            __int64, char);
__int64 nandroid_M3UParser_getDiscontinuitySeq_plt(__int64);
__int64 nandroid_M3UParser_getSeqNumberRange_plt(__int64, __int64, __int64);
__int64 nandroid_M3UParser_getTargetDuration_plt(__int64);
__int64 nandroid_M3UParser_isComplete_plt(__int64);
__int64 nandroid_M3UParser_isEvent_plt(__int64);
__int64 nandroid_M3UParser_itemAt_plt(__int64, unsigned __int64, __int64,
                                      __int64);
__int64 nandroid_M3UParser_size_plt(void);
__int64 nandroid_PlaylistFetcher_decryptBuffer_plt(__int64, unsigned __int64,
                                                   __int64, bool);
__int64 nandroid_PlaylistFetcher_delayUsToRefreshPlaylist_plt(__int64);
__int64 nandroid_PlaylistFetcher_extractAndQueueAccessUnitsFromTs_plt(__int64,
                                                                      __int64);
__int64 nandroid_PlaylistFetcher_getSegmentStartTimeUs_plt(__int64, int);
__int64
nandroid_PlaylistFetcher_getSeqNumberForDiscontinuity_plt(__int64,
                                                          unsigned __int64);
__int64 nandroid_PlaylistFetcher_getSeqNumberForTime_plt(__int64, __int64);
__int64 nandroid_PlaylistFetcher_initSeqNumberForLiveStream_plt(__int64,
                                                                __int64,
                                                                __int64);
__int64 nandroid_PlaylistFetcher_postMonitorQueue_plt(__int64, __int64,
                                                      __int64);
__int64 nandroid_PlaylistFetcher_refreshPlaylist_plt(__int64);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nandroid_RefBase_incStrong_plt(__int64, __int64);
__int64 nn_os_GetTlsValue_plt(unsigned int);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
void nandroid_sp_report_race_plt(__int64);
__int64 nandroid_libstagefright_httplive_531ea0(__int64 a1, __int64 a2,
                                                __int64* a3, int* a4, int* a5);

__int64 nandroid_libstagefright_httplive_531ea0(__int64 a1, __int64 a2,
                                                __int64* a3, int* a4, int* a5)
{
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  signed int v31;
  int v32;
  __int64 v33;
  _QWORD** v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  unsigned __int8 explicit;
  unsigned int* v41;
  _QWORD** v42;
  __int64 v43;
  int v44;
  __int64 result;
  __int64 v46;
  __int64 v47;
  signed __int64 v48;
  __int64 v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  void(__attribute__((noreturn)) * v63)();
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;

  v10 = nandroid_PlaylistFetcher_refreshPlaylist_plt(a1);
  *a4 = 0;
  *a5 = 0;
  v11 = v10;
  v12 = *(_QWORD*)(a1 + 296);
  if (v12 == 0) {
    *(_QWORD*)(a1 + 400) = -1;
    goto LABEL_15;
  }
  nandroid_M3UParser_getSeqNumberRange_plt(v12, (__int64)a4, (__int64)a5);
  if ((*(_DWORD*)(a1 + 172) & 0x80000000) != 0) {
    *(_DWORD*)(a1 + 172) =
        nandroid_M3UParser_getDiscontinuitySeq_plt(*(_QWORD*)(a1 + 296));
  }
  v13 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 400) = -1;
  if (v13 != 0 && (*(_DWORD*)(a1 + 304) & 0x80000000) != 0) {
    v14 = *(_QWORD*)(a1 + 160);
    if (v14 < 0) {
      if ((nandroid_M3UParser_isComplete_plt(v13) & 1) != 0 ||
          (nandroid_M3UParser_isEvent_plt(*(_QWORD*)(a1 + 296)) & 1) != 0) {
        v62 = nandroid_PlaylistFetcher_getSeqNumberForTime_plt(
            a1, *(_QWORD*)(a1 + 152));
        *(_DWORD*)(a1 + 304) = v62;
        *(_QWORD*)(a1 + 152) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 112) + 912LL) =
            nandroid_PlaylistFetcher_getSegmentStartTimeUs_plt(a1, v62);
      }
      else {
        nandroid_PlaylistFetcher_initSeqNumberForLiveStream_plt(a1, (__int64)a4,
                                                                (__int64)a5);
      }
      *(_BYTE*)(a1 + 176) = 1;
      goto LABEL_15;
    }
    if (*(_DWORD*)(a1 + 148) != 4 && *(_DWORD*)(a1 + 324) != 1) {
      v14 += nandroid_M3UParser_getTargetDuration_plt(v13) / 2;
    }
    v15 = nandroid_PlaylistFetcher_getSeqNumberForTime_plt(a1, v14);
    v16 = *(int*)(a1 + 172);
    *(_DWORD*)(a1 + 304) = v15;
    v17 = nandroid_PlaylistFetcher_getSeqNumberForDiscontinuity_plt(a1, v16);
    v18 = *(_DWORD*)(a1 + 304);
    if (v18 >= v17) {
      v19 = *a4;
      if (v18 >= *a4) {
      LABEL_12:
        v20 = *a5;
        if (v18 > *a5) {
          goto LABEL_68;
        }
        goto LABEL_15;
      }
    }
    else {
      *(_DWORD*)(a1 + 304) = v17;
      v18 = v17;
      v19 = *a4;
      if (v17 >= *a4) {
        goto LABEL_12;
      }
    }
    *(_DWORD*)(a1 + 304) = v19;
    v52 = v19;
    v20 = *a5;
    if (v52 > *a5) {
    LABEL_68:
      *(_DWORD*)(a1 + 304) = v20;
    }
  }
LABEL_15:
  v21 = *(_DWORD*)(a1 + 304);
  if (v21 >= *a4 && v11 == 0 && v21 <= *a5) {
    v25 = 0;
    goto LABEL_27;
  }
  if (v11 == 0 &&
          (nandroid_M3UParser_isComplete_plt(*(_QWORD*)(a1 + 296)) & 1) != 0 ||
      (v22 = *(_DWORD*)(a1 + 308)) > 4) {
    if (*(_QWORD*)(a1 + 296) != 0) {
      v31 = *(_DWORD*)(a1 + 304);
      v32 = *a4;
      if (v31 >= (int)(v32 + nandroid_M3UParser_size_plt()) &&
          (nandroid_M3UParser_isComplete_plt(*(_QWORD*)(a1 + 296)) & 1) == 0) {
        v61 = nandroid_PlaylistFetcher_delayUsToRefreshPlaylist_plt(a1);
      LABEL_94:
        nandroid_PlaylistFetcher_postMonitorQueue_plt(a1, v61, 0);
        return 0;
      }
      v33 = *(_QWORD*)(a1 + 376);
      if (v33 != 0) {
        nandroid_ATSParser_signalEOS_plt(v33, -1011);
        v67 = 0;
        if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
          v63 = SdkData_e88338[0];
          *(_DWORD*)SdkData_e88338[0] = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v63) = 1;
          __cxa_guard_release_plt(SdkData_e88330);
        }
        v34 = (_QWORD**)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
        v35 = SdkRoutine_4c3860(16, 64, v34);
        nandroid_ABuffer_ABuffer_plt_86e010(v35, 0);
        v67 = v35;
        nandroid_RefBase_incStrong_plt(v35, (__int64)&v67);
        *(_DWORD*)(a1 + 304) = *a5;
        nandroid_PlaylistFetcher_extractAndQueueAccessUnitsFromTs_plt(
            a1, (__int64)&v67);
        if (v67 != 0) {
          nandroid_RefBase_decStrong_plt(v67, (__int64)&v67);
        }
      }
      v36 = *(_QWORD*)(a1 + 88);
      v67 = 0;
      nandroid_AMessage_dup_plt((void*)(&v67), v36);
      nandroid_AMessage_setInt32_plt(v67, "what", 3);
      nandroid_AMessage_setInt32_plt(v67, "err", -1011);
      nandroid_AMessage_post_plt(v67, 0);
      v24 = v67;
      if (v67 == 0) {
        return 0;
      }
    }
    else {
      v37 = *(_QWORD*)(a1 + 88);
      v67 = 0;
      nandroid_AMessage_dup_plt((void*)(&v67), v37);
      nandroid_AMessage_setInt32_plt(v67, "what", 3);
      nandroid_AMessage_setInt32_plt(v67, "err", -1004);
      nandroid_AMessage_post_plt(v67, 0);
      v24 = v67;
      if (v67 == 0) {
        return 0;
      }
    }
  LABEL_44:
    nandroid_RefBase_decStrong_plt(v24, (__int64)&v67);
    return 0;
  }
  *(_DWORD*)(a1 + 308) = v22 + 1;
  if (v11 != 0 || (signed __int32)*(_DWORD*)(a1 + 304) > *a5) {
    if (*(_QWORD*)(a1 + 296) != 0) {
      v47 = nandroid_M3UParser_size_plt();
      v48 = nandroid_M3UParser_getTargetDuration_plt(*(_QWORD*)(a1 + 296)) *
            v47 / (unsigned __int64)(*(int*)(a1 + 308) + 1LL);
    }
    else {
      v48 = 3000000;
    }
    if (v48 >= 3000000) {
      v61 = 3000000;
    }
    else {
      v61 = v48;
    }
    goto LABEL_94;
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v23 = *(_QWORD*)(a1 + 88);
    v67 = 0;
    nandroid_AMessage_dup_plt((void*)(&v67), v23);
    nandroid_AMessage_setInt32_plt(v67, "what", 9);
    nandroid_AMessage_post_plt(v67, 0);
    v24 = v67;
    if (v67 == 0) {
      return 0;
    }
    goto LABEL_44;
  }
  v21 = *a5 - 3;
  v25 = 1;
  *(_DWORD*)(a1 + 304) = v21;
  if (v21 <= *a4) {
    v21 = *a4;
  }
  *(_DWORD*)(a1 + 304) = v21;
LABEL_27:
  *(_DWORD*)(a1 + 308) = 0;
  nandroid_M3UParser_itemAt_plt(*(_QWORD*)(a1 + 296), v21 - (__int64)*a4, a2,
                                (__int64)a3);
  v26 = *a3;
  v66 = 0;
  nandroid_AMessage_findInt32_plt(v26, "discontinuity-sequence", (__int64)&v66);
  v27 = *(_DWORD*)(a1 + 168);
  v28 = v66;
  if (v27 != v66) {
    if (v27 != -1) {
      ++*(_DWORD*)(a1 + 172);
    }
    *(_DWORD*)(a1 + 168) = v28;
  }
  v29 = *a3;
  v65 = 0;
  if ((nandroid_AMessage_findInt32_plt(v29, "discontinuity", (__int64)&v65) &
       1) != 0 &&
      v65 != 0) {
    v30 = 1;
  }
  else {
    v38 = *(_DWORD*)(a1 + 352);
    if (v38 <= -1 || *(_DWORD*)(a1 + 172) == v38) {
      v30 = v25;
    }
    else {
      v30 = 1;
    }
  }
  v64 = 0;
  *(_DWORD*)(a1 + 352) = -1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v41 = (unsigned int*)SdkData_e88338[0];
  if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *v41 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v41) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v42 = (_QWORD**)nn_os_GetTlsValue_plt(*v41);
  v43 = SdkRoutine_4c3860(16, 64, v42);
  nandroid_ABuffer_ABuffer_plt_86e010(v43, 0x10u);
  v64 = v43;
  nandroid_RefBase_incStrong_plt(v43, (__int64)&v64);
  nandroid_ABuffer_setRange_plt(v64, 0, 0x10u);
  v44 = nandroid_PlaylistFetcher_decryptBuffer_plt(
      a1, *(int*)(a1 + 304) - (__int64)*a4, (__int64)&v64, true);
  if (v44 == -1001) {
  LABEL_60:
    result = 0;
    v46 = v64;
    if (v64 == 0) {
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  if (v44 != 0) {
    v49 = *(_QWORD*)(a1 + 88);
    v67 = 0;
    v50 = v44;
    nandroid_AMessage_dup_plt((void*)(&v67), v49);
    nandroid_AMessage_setInt32_plt(v67, "what", 3);
    nandroid_AMessage_setInt32_plt(v67, "err", v50);
    nandroid_AMessage_post_plt(v67, 0);
    if (v67 != 0) {
      nandroid_RefBase_decStrong_plt(v67, (__int64)&v67);
    }
    goto LABEL_60;
  }
  result = 1;
  v46 = v64;
  if (v64 != 0) {
  LABEL_61:
    v51 = result;
    nandroid_RefBase_decStrong_plt(v46, (__int64)&v64);
    result = v51;
  }
LABEL_62:
  if ((_DWORD)result == 0) {
    return result;
  }
  if (*(_BYTE*)(a1 + 320) != 1) {
    if (v30 == 0) {
      return result;
    }
  }
  else if ((v30 & 1 | ((*(_BYTE*)(a1 + 328) & 1) == 0)) == 0) {
  LABEL_74:
    if (v30 != 0) {
      v54 = result;
      if (*(_QWORD*)(a1 + 376) != 0) {
        v55 = *(_QWORD*)(a1 + 376);
        if (v55 != 0) {
          v56 = nandroid_RefBase_decStrong_plt(*(_QWORD*)(a1 + 376), a1 + 376);
          if (v55 != *(_QWORD*)(a1 + 376)) {
            nandroid_sp_report_race_plt(v56);
          }
          *(_QWORD*)(a1 + 376) = 0;
        }
      }
      v57 = *(_QWORD*)(a1 + 208);
      v67 = 0;
      if (v57 != 0) {
        v58 = 8;
        v59 = 0;
        do {
          nandroid_AnotherPacketSource_queueDiscontinuity_plt(
              *(_QWORD*)(*(_QWORD*)(a1 + 200) + v58), 6, (__int64)&v67, 0);
          ++v59;
          v58 += 16;
        } while (v59 < *(_QWORD*)(a1 + 208));
        if (v67 != 0) {
          nandroid_RefBase_decStrong_plt(v67, (__int64)&v67);
        }
      }
      result = v54;
      if (*(_BYTE*)(a1 + 320) == 1 && (*(_BYTE*)(a1 + 176) & 1) != 0 &&
          *(_BYTE*)(a1 + 384) == 1) {
        v60 = *(_QWORD*)(a1 + 408);
        *(_QWORD*)(a1 + 152) = 0;
        *(_BYTE*)(a1 + 384) = 0;
        *(_BYTE*)(a1 + 321) = 0;
        nandroid_AnotherPacketSource_clear_plt(v60);
        return v54;
      }
    }
    return result;
  }
  v53 = result;
  if ((nandroid_M3UParser_isComplete_plt(*(_QWORD*)(a1 + 296)) & 1) != 0 ||
      (nandroid_M3UParser_isEvent_plt(*(_QWORD*)(a1 + 296)) & 1) != 0) {
    *(_QWORD*)(a1 + 336) = nandroid_PlaylistFetcher_getSegmentStartTimeUs_plt(
        a1, *(_DWORD*)(a1 + 304));
  }
  result = v53;
  *(_BYTE*)(a1 + 328) = 1;
  goto LABEL_74;
}

#pragma GCC visibility pop
