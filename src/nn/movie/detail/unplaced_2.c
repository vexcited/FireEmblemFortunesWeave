#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86d6a0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(_QWORD);
__int64 nn_movie_detail_MediaExtractorImpl_DoSelectTrack_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_MediaExtractorImpl_DoSetMediaBuffer_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_MediaExtractorImpl_DoSetMediaUri_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_MediaExtractorImpl_DoSetUpMediaSourceMode_plt(_QWORD);
__int64
    nn_movie_detail_MediaExtractorImpl_TrackInfo_Destroy_TrackInfo_plt(_QWORD);
__int64 nn_movie_detail_MediaState_SetState_plt(_QWORD, _QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_ReceiveMessageQueue_plt(_QWORD, _QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_SignalLightEvent_plt(void);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88540;
extern void (*SdkData_e88338[493])();
__int64 nn_movie_detail_4c8320(void* this_, void* a2);
__int64 nn_movie_detail_4d32e0(__int64* a1);
__int64 nn_movie_detail_4d4780(__int64 a1);
__int64 nn_movie_detail_4d9ae0(_QWORD* a1, __int64* a2, int a3, char a4,
                               char a5);

__int64 nn_movie_detail_4c8320(void* this_, void* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  unsigned int* v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v29;
  _QWORD* v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 result;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 (*v39)(void);
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* i;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  _QWORD v64[2];
  _QWORD v65[2];
  _QWORD v66[2];
  _QWORD* v67;

  v67 = nullptr;
  do {
    while (1) {
      while (1) {
        do {
          nn_os_ReceiveMessageQueue_plt(&v67, (char*)this_ + 1616);
          v3 = v67;
        } while (v67 == nullptr);
        v5 = *v67;
        v4 = v67[1];
        if (v4 != 0) {
          break;
        }
        *v67 = 0;
        v3[1] = 0;
        nn_movie_detail_FreeMemory((__int64)v3, *((_QWORD**)this_ + 216));
        if (v5 != 0) {
          goto LABEL_14;
        }
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v6 = v3[1];
      *v3 = 0;
      v3[1] = 0;
      if (v6 != 0) {
        break;
      }
    LABEL_13:
      nn_movie_detail_FreeMemory((__int64)v3, *((_QWORD**)this_ + 216));
      if (v5 != 0) {
        goto LABEL_14;
      }
    LABEL_19:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_plt(v4);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v7 = v3[1];
      if (v7 == 0) {
        goto LABEL_13;
      }
    }
    else {
      v8 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_plt(v6);
      v3 = v8;
      v7 = v8[1];
      if (v7 == 0) {
        goto LABEL_13;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_13;
    }
    v12 = (__int64)v3;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_plt(v7);
    nn_movie_detail_FreeMemory(v12, *((_QWORD**)this_ + 216));
    if (v5 == 0) {
      goto LABEL_19;
    }
  LABEL_14:
    v9 = 0;
    v10 = 257280;
    switch (*(_DWORD*)v5) {
    case 1:
      v11 = *(_QWORD*)(v5 + 16);
      v66[0] = *(_QWORD*)(v5 + 8);
      v66[1] = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        v10 = nn_movie_detail_MediaExtractorImpl_DoSetMediaUri_plt(this_, v66);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_139;
        }
        goto LABEL_142;
      }
      v63 = nn_movie_detail_MediaExtractorImpl_DoSetMediaUri_plt(this_, v66);
      v9 = 0;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = v63;
      if (result != 0) {
        goto LABEL_144;
      }
      goto LABEL_140;
    case 2:
      v11 = *(_QWORD*)(v5 + 16);
      v65[0] = *(_QWORD*)(v5 + 8);
      v65[1] = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        v10 =
            nn_movie_detail_MediaExtractorImpl_DoSetMediaBuffer_plt(this_, v65);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_139;
        }
        goto LABEL_142;
      }
      v62 = nn_movie_detail_MediaExtractorImpl_DoSetMediaBuffer_plt(this_, v65);
      v9 = 0;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = v62;
      if (result != 0) {
        goto LABEL_144;
      }
      goto LABEL_140;
    case 3:
      v37 = *(_QWORD*)(v5 + 16);
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak_plt(v37);
        }
      }
      *((_DWORD*)this_ + 332) = 0;
      nn_os_SignalEvent_plt((char*)this_ + 1480);
      v9 = 0;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = 0;
      if (result == 0) {
        goto LABEL_140;
      }
      goto LABEL_144;
    case 4:
      v36 =
          nn_movie_detail_MediaExtractorImpl_DoSetUpMediaSourceMode_plt(this_);
      v9 = 0;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = v36;
      if (result == 0) {
        goto LABEL_140;
      }
      goto LABEL_144;
    case 5:
      v20 = *(_QWORD*)(v5 + 16);
      v64[0] = *(_QWORD*)(v5 + 8);
      v64[1] = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
        v17 = nn_movie_detail_MediaExtractorImpl_DoSelectTrack_plt(this_, v64);
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_47:
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak_plt(v20);
        }
      }
      else {
        v17 = nn_movie_detail_MediaExtractorImpl_DoSelectTrack_plt(this_, v64);
      }
    LABEL_156:
      *((_DWORD*)this_ + 332) = v17;
      nn_os_SignalEvent_plt((char*)this_ + 1480);
      v9 = 0;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = v17;
      if (result == 0) {
        goto LABEL_140;
      }
      goto LABEL_144;
    case 6:
      v24 = *(unsigned int**)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v25 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v25 == 0) {
        goto LABEL_137;
      }
      v26 = *v24;
      v27 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v25 + 96LL))(v25, *v24);
      if (v27 != 0 && (v27 & 0x3FFFFF) != 262400) {
        goto LABEL_153;
      }
      v29 = *((_QWORD*)this_ + 165);
      break;
    case 7:
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v38 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v38 == 0) {
        goto LABEL_137;
      }
      v39 = *(__int64 (**)(void))(*(_QWORD*)v38 + 112LL);
      goto LABEL_115;
    case 8:
      v40 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v41 = *((_QWORD*)this_ + 2);
      if (v41 != 0) {
        v42 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v41 + 120LL))(
            v41, *(_QWORD*)v40, *(unsigned int*)(v40 + 8));
        if ((v42 & 0x3FFFFF) == 0x40100) {
          v10 = 0;
        }
        else {
          v10 = v42;
        }
        if (v11 != 0) {
          goto LABEL_138;
        }
      }
      else {
        v10 = 524032;
        if (v11 != 0) {
          goto LABEL_138;
        }
      }
      goto LABEL_139;
    case 9:
      v50 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v50 != 0) {
        v51 = *((_QWORD*)this_ + 2);
        v10 = 518912;
        if (v51 == 0) {
        LABEL_137:
          if (v11 == 0) {
            goto LABEL_139;
          }
          goto LABEL_138;
        }
        v39 = *(__int64 (**)(void))(*(_QWORD*)v51 + 128LL);
      LABEL_115:
        v49 = v39();
      LABEL_116:
        if ((v49 & 0x3FFFFF) == 0x40100) {
          v10 = 0;
        }
        else {
          v10 = v49;
        }
        if (v11 != 0) {
          goto LABEL_138;
        }
      }
      else {
        v10 = 259840;
        if (v11 != 0) {
          goto LABEL_138;
        }
      }
      goto LABEL_139;
    case 0xA:
      v47 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v48 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v48 == 0) {
        goto LABEL_137;
      }
      v49 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v48 + 136LL))(v48, *(_QWORD*)v47, *(_QWORD*)(v47 + 8),
                                  *(unsigned int*)(v47 + 16));
      goto LABEL_116;
    case 0xB:
      v16 = *((_QWORD*)this_ + 2);
      v17 = 518912;
      if (v16 != 0) {
        v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 144LL))(v16);
        v17 = v18;
        if (v18 == 0 || (v18 & 0x3FFFFF) == 262400) {
          *((_BYTE*)this_ + 1304) = 1;
          nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 4);
          v17 = 0;
        }
      }
      goto LABEL_156;
    case 0xC:
      nn_movie_detail_MediaState_SetState_plt((char*)this_ + 48, 5);
      v33 = (*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 2) + 152LL))(
          *((_QWORD*)this_ + 2));
      v9 = 0;
      if ((v33 & 0x3FFFFF) == 0x40100) {
        v34 = 0;
      }
      else {
        v34 = v33;
      }
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = v34;
      if (result == 0) {
        goto LABEL_140;
      }
      goto LABEL_144;
    case 0xD:
      v21 = *(_QWORD*)(v5 + 8);
      v20 = *(_QWORD*)(v5 + 16);
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      v22 = *((_QWORD*)this_ + 2);
      v17 = 518912;
      if (v22 != 0) {
        v23 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v22 + 168LL))(
            v22, *(_QWORD*)v21, *(unsigned int*)(v21 + 8));
        if ((v23 & 0x3FFFFF) == 0x40100) {
          v17 = 0;
        }
        else {
          v17 = v23;
        }
      }
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_47;
      }
      goto LABEL_156;
    case 0xE:
      v13 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v14 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v14 != 0) {
        v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v14 + 176LL))(
            v14, *(_QWORD*)v13, *(unsigned int*)(v13 + 8));
      }
      if (v11 == 0) {
        goto LABEL_139;
      }
      v15 = (atomic_ullong*)(v11 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_27;
      }
      goto LABEL_99;
    case 0xF:
      v43 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v44 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v44 != 0) {
        v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD))(*(_QWORD*)v44 + 184LL))(
            v44, *(_QWORD*)v43, *(_QWORD*)(v43 + 8), *(_QWORD*)(v43 + 16),
            *(_QWORD*)(v43 + 24), *(_QWORD*)(v43 + 32),
            *(unsigned int*)(v43 + 40));
      }
      if (v11 == 0) {
        goto LABEL_139;
      }
      v15 = (atomic_ullong*)(v11 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
      LABEL_27:
        if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_139;
        }
      }
      else {
      LABEL_99:
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_plt(v11);
        if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_139;
        }
      }
      goto LABEL_142;
    case 0x10:
      goto LABEL_143;
    case 0x11:
      v45 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v46 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v46 == 0) {
        goto LABEL_137;
      }
      v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v46 + 192LL))(
          v46, *(_QWORD*)v45, *(unsigned int*)(v45 + 8));
      if (v11 == 0) {
        goto LABEL_139;
      }
      goto LABEL_138;
    case 0x12:
      v60 = *(_QWORD*)(v5 + 8);
      v11 = *(_QWORD*)(v5 + 16);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v61 = *((_QWORD*)this_ + 2);
      v10 = 518912;
      if (v61 != 0) {
        v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v61 + 200LL))(
            v61, *(_QWORD*)v60, *(unsigned int*)(v60 + 8));
      }
      goto LABEL_137;
    case 0x13:
      v52 = *((_QWORD*)this_ + 2);
      if (v52 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 32LL))(v52);
        (***((void (****)(_QWORD))this_ + 2))(*((_QWORD*)this_ + 2));
        *((_QWORD*)this_ + 2) = 0;
      }
      v53 = *((_QWORD*)this_ + 3);
      if (v53 != 0) {
        v54 = *((_QWORD**)this_ + 216);
        if (v54 != nullptr) {
          nn_movie_detail_FreeMemory(v53, v54);
        }
        *((_QWORD*)this_ + 3) = 0;
      }
      v55 = *((_QWORD**)this_ + 165);
      for (i = (_QWORD*)v55[1]; i != v55; v55 = *((_QWORD**)this_ + 165)) {
        SdkRoutine_86d6a0((char*)this_ + 2264, i + 2);
        i = (_QWORD*)i[1];
      }
      if (v55[2] != 0) {
        v57 = (_QWORD*)v55[1];
        v58 = *(_QWORD**)(*v55 + 8LL);
        *(_QWORD*)(*v57 + 8LL) = v58;
        *v58 = *v57;
        v55[2] = 0;
        if (v57 != v55) {
          do {
            v59 = (_QWORD*)v57[1];
            nn_movie_detail_MediaExtractorImpl_TrackInfo_Destroy_TrackInfo_plt(
                v57 + 2);
            nn_movie_detail_FreeMemory((__int64)v57, (_QWORD*)v55[3]);
            v9 = 1;
            v10 = 0;
            v57 = v59;
          } while (v59 != v55);
          goto LABEL_143;
        }
      }
      v9 = 1;
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = 0;
      if (result != 0) {
        goto LABEL_144;
      }
      goto LABEL_140;
    default:
      result = *(_QWORD*)(v5 + 32);
      *(_DWORD*)(v5 + 24) = 257280;
      if (result == 0) {
        goto LABEL_140;
      }
      goto LABEL_144;
    }
    while (1) {
      v29 = *(_QWORD*)(v29 + 8);
      if (v29 == *((_QWORD*)this_ + 165)) {
        break;
      }
      if (*(_DWORD*)(v29 + 64) == v26) {
        v27 = SdkRoutine_86d6a0((char*)this_ + 2264, v29 + 16);
        if (v27 == 0 || (v27 & 0x3FFFFF) == 262400) {
          v31 = *(_QWORD**)(v29 + 8);
          v32 = *((_QWORD*)this_ + 165);
          *(_QWORD*)(*(_QWORD*)v29 + 8LL) = v31;
          *v31 = *(_QWORD*)v29;
          --*(_QWORD*)(v32 + 16);
          nn_movie_detail_MediaExtractorImpl_TrackInfo_Destroy_TrackInfo_plt(
              v29 + 16);
          nn_movie_detail_FreeMemory(v29, *(_QWORD**)(v32 + 24));
          v10 = 0;
          if (v11 == 0) {
            goto LABEL_139;
          }
        }
        else {
        LABEL_153:
          v10 = v27;
          if (v11 == 0) {
            goto LABEL_139;
          }
        }
      LABEL_138:
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_139;
        }
      LABEL_142:
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_plt(v11);
        v9 = 0;
      LABEL_143:
        result = *(_QWORD*)(v5 + 32);
        *(_DWORD*)(v5 + 24) = v10;
        if (result != 0) {
          goto LABEL_144;
        }
      LABEL_140:
        if (v4 == 0) {
          goto LABEL_2;
        }
        goto LABEL_147;
      }
    }
    v10 = 519424;
    if (v11 != 0) {
      goto LABEL_138;
    }
  LABEL_139:
    v9 = 0;
    result = *(_QWORD*)(v5 + 32);
    *(_DWORD*)(v5 + 24) = v10;
    if (result == 0) {
      goto LABEL_140;
    }
  LABEL_144:
    if (v4 == 0) {
      continue;
    }
    if (*(__int64*)(v4 + 8) >= 1) {
      result = nn_os_SignalLightEvent_plt();
    }
  LABEL_147:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak_plt(v4);
    }
  LABEL_2:;
  } while (v9 == 0);
  return result;
}

__int64 nn_movie_detail_4d32e0(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  int v8;

  v2 = *a1;
  if (v2 != 0) {
    v3 = (_QWORD*)a1[3];
    a1[1] = v2;
    nn_movie_detail_FreeMemory(v2, v3);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v8 = __cxa_guard_acquire_plt(SdkData_e88330);
    v5 = SdkData_e88338[0];
    if (v8 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v5 = SdkData_e88338[0];
    }
  }
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory((__int64)a1, v6);
}

__int64 nn_movie_detail_4d4780(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD** v4;
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
  v4 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return SdkRoutine_4c3860(16, a1, v4);
}

__int64 nn_movie_detail_4d9ae0(_QWORD* a1, __int64* a2, int a3, char a4,
                               char a5)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD** v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;

  *a1 = 0;
  a1[1] = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v11 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  v13 = nn_movie_detail_AllocateMemory(64, v12);
  v14 = SdkData_e88540;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = v12;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  result = nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(v13 + 32);
  *a1 = v13 + 32;
  a1[1] = v13;
  *(_DWORD*)(v13 + 32) = a3;
  if ((a4 & 1) != 0) {
    v18 = *(_QWORD*)(v13 + 48);
    v17 = v13 + 48;
    v16 = v18;
    *(_DWORD*)(v17 + 8) = 2;
    *(_QWORD*)(v17 - 8) = 0x7FFFFFFFFFFFFFFFLL;
    if (v18 != 0) {
      result = nandroid_RefBase_decStrong_plt(v16, v17);
    }
    if (v16 != *(_QWORD*)v17) {
      result = nandroid_sp_report_race_plt(result);
    }
    *(_QWORD*)v17 = 0;
    return result;
  }
  result = *a2;
  if (*a2 != 0) {
    nandroid_ABuffer_meta_plt((void*)(&v22));
    nandroid_AMessage_findInt64_plt(v22, "timeUs", v13 + 40);
    result = v22;
    if (v22 != 0) {
      result = nandroid_RefBase_decStrong_plt(v22, &v22);
    }
    v19 = *a2;
    v20 = (__int64*)(v13 + 48);
    v21 = *(_QWORD*)(v13 + 48);
    if (v19 != 0) {
      result = nandroid_RefBase_incStrong_plt(v19, v13 + 48);
    }
    if (v21 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v20 = (__int64*)(v13 + 48);
    v21 = *(_QWORD*)(v13 + 48);
    v19 = 0;
    if (v21 == 0) {
      goto LABEL_15;
    }
  }
  result = nandroid_RefBase_decStrong_plt(v21, v20);
LABEL_15:
  if (v21 != *v20) {
    result = nandroid_sp_report_race_plt(result);
  }
  *v20 = v19;
  if ((a5 & 1) != 0) {
    *(_DWORD*)(v13 + 56) = 0;
  }
  return result;
}

#pragma GCC visibility pop
