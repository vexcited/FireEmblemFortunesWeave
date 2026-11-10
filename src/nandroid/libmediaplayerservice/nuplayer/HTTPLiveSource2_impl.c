#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_AMessage_dup_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_ALooper_ALooper_plt(void);
__int64 nandroid_ALooper_registerHandler_plt(_QWORD, _QWORD);
__int64 nandroid_ALooper_setName_plt(_QWORD, _QWORD);
__int64 nandroid_ALooper_start_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_AMessage_plt_86ddc0(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findMessage_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_post_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_setInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setMessage_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_what_plt(_QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_HTTPLiveSource2_onSessionNotify_plt(_QWORD, _QWORD);
__int64 nandroid_HTTPLiveSource2_pollForRawData_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 nandroid_LiveSession_LiveSession_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__int64 nandroid_LiveSession_connectAsync_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_LiveSession_hasDynamicDuration_plt(_QWORD);
__int64 nandroid_LiveSession_isSeekable_plt(_QWORD);
__int64 nandroid_LiveSession_setBufferingSettings_plt(_QWORD, _QWORD);
__int64 nandroid_LiveSession_setMinBandwidthSamples_plt(_QWORD, _QWORD);
__int64 nandroid_LiveSession_setPreferredPixels_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_Source_notifyVideoSizeChanged_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
void* nandroid_HTTPLiveSource2_prepareAsync(void* this_);
__int64 nandroid_HTTPLiveSource2_onMessageReceived(__int64 a1, _QWORD* a2);
__int64 nandroid_HTTPLiveSource2_onSessionNotify(__int64* a1, __int64* a2);

void* nandroid_HTTPLiveSource2_prepareAsync(void* this_)
{
  __int64* v1;
  atomic_uchar* v3;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD** v10;
  __int64 v11;
  _QWORD** v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  void* result;
  void* v23;
  void* v24;

  v1 = (__int64*)((char*)this_ + 184);
  v3 = (atomic_uchar*)SdkData_e88330;
  v4 = SdkData_e88338[0];
  if (*((_QWORD*)this_ + 23) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    v6 = SdkRoutine_4c3860(16, 216, v5);
    nandroid_ALooper_ALooper_plt();
    v7 = *v1;
    v8 = nandroid_RefBase_incStrong_plt(v6, v1);
    if (v7 != 0) {
      v8 = nandroid_RefBase_decStrong_plt(v7, v1);
    }
    if (v7 != *v1) {
      nandroid_sp_report_race_plt(v8);
    }
    *((_QWORD*)this_ + 23) = v6;
    nandroid_ALooper_setName_plt(v6, "http live2");
    nandroid_ALooper_start_plt(*((_QWORD*)this_ + 23), 0, 1);
    v9 = *((_QWORD*)this_ + 23);
    v24 = this_;
    nandroid_RefBase_incStrong_plt(this_, &v24);
    nandroid_ALooper_registerHandler_plt(v9, &v24);
    if (v24 != nullptr) {
      nandroid_RefBase_decStrong_plt(v24, &v24);
    }
  }
  v24 = nullptr;
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v11 = SdkRoutine_4c3860(16, 1344, v10);
  v23 = this_;
  nandroid_RefBase_incStrong_plt(this_, &v23);
  nandroid_AMessage_AMessage_plt_86ddc0(v11, 0, &v23);
  v24 = (void*)v11;
  nandroid_RefBase_incStrong_plt(v11, &v24);
  if (v23 != nullptr) {
    nandroid_RefBase_decStrong_plt(v23, &v23);
  }
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  v13 = SdkRoutine_4c3860(16, 1016, v12);
  nandroid_LiveSession_LiveSession_plt(v13, &v24, *((_DWORD*)this_ + 42) & 1,
                                       (char*)this_ + 96,
                                       *((unsigned int*)this_ + 62));
  v14 = *((_QWORD*)this_ + 24);
  v15 = nandroid_RefBase_incStrong_plt(v13, (char*)this_ + 192);
  if (v14 != 0) {
    v15 = nandroid_RefBase_decStrong_plt(v14, (char*)this_ + 192);
  }
  if (v14 != *((_QWORD*)this_ + 24)) {
    nandroid_sp_report_race_plt(v15);
  }
  v16 = *((_QWORD*)this_ + 28);
  *((_QWORD*)this_ + 24) = v13;
  *(_QWORD*)(v13 + 560) = v16;
  nandroid_LiveSession_setPreferredPixels_plt(*((_QWORD*)this_ + 24),
                                              *((_QWORD*)this_ + 29));
  nandroid_LiveSession_setMinBandwidthSamples_plt(*((_QWORD*)this_ + 24),
                                                  *((_QWORD*)this_ + 30));
  v18 = *((_QWORD*)this_ + 23);
  v17 = *((void**)this_ + 24);
  v23 = v17;
  if (v17 != nullptr) {
    nandroid_RefBase_incStrong_plt(v17, &v23);
  }
  nandroid_ALooper_registerHandler_plt(v18, &v23);
  if (v23 != nullptr) {
    nandroid_RefBase_decStrong_plt(v23, &v23);
  }
  nandroid_LiveSession_setBufferingSettings_plt(*((_QWORD*)this_ + 24),
                                                (char*)this_ + 212);
  v19 = *((_QWORD*)this_ + 24);
  v20 = nandroid_AString_c_str_plt((char*)this_ + 104);
  if (*((_QWORD*)this_ + 18) != 0) {
    v21 = (char*)this_ + 128;
  }
  else {
    v21 = nullptr;
  }
  nandroid_LiveSession_connectAsync_plt(v19, v20, v21);
  result = v24;
  if (v24 != nullptr) {
    return (void*)nandroid_RefBase_decStrong_plt(v24, &v24);
  }
  return result;
}

__int64 nandroid_HTTPLiveSource2_onMessageReceived(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = nandroid_AMessage_what_plt(*a2);
  switch ((_DWORD)result) {
  case 2:
    if (*(_BYTE*)(a1 + 209) == 1) {
      return nandroid_HTTPLiveSource2_pollForRawData_plt(
          a1, a2, *(unsigned int*)(a1 + 204), 8, 9);
    }
    break;
  case 1:
    return nandroid_HTTPLiveSource2_pollForRawData_plt(
        a1, a2, *(unsigned int*)(a1 + 200), 4, 7);
  case 0:
    return nandroid_HTTPLiveSource2_onSessionNotify_plt(a1, a2);
  default:
    break;
  }
  return result;
}

__int64 nandroid_HTTPLiveSource2_onSessionNotify(__int64* a1, __int64* a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  unsigned int v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v3 = *a2;
  v32 = 0;
  result = nandroid_AMessage_findInt32_plt(v3, "what", &v32);
  if (v32 > 3) {
    if (v32 <= 5) {
      v11 = a1[11];
      v33 = 0;
      if (v32 == 4) {
        nandroid_AMessage_dup_plt((void*)(&v33), v11);
        v8 = v33;
        v10 = "what";
        v9 = 4;
      }
      else {
        nandroid_AMessage_dup_plt((void*)(&v33), v11);
        v8 = v33;
        v10 = "what";
        v9 = 5;
      }
      goto LABEL_23;
    }
    if (v32 == 6) {
      v21 = a1[11];
      v33 = 0;
      nandroid_AMessage_dup_plt((void*)(&v33), v21);
      v22 = *a2;
      LODWORD(v31) = 0;
      nandroid_AMessage_findInt32_plt(v22, "percentage", &v31);
      nandroid_AMessage_setInt32_plt(v33, "what", 3);
      v8 = v33;
      v9 = (unsigned int)v31;
      v10 = "percentage";
      goto LABEL_23;
    }
    if (v32 == 7 && (a1[26] & 1) == 0) {
      v15 = a1[11];
      v33 = 0;
      *((_BYTE*)a1 + 208) = 1;
      nandroid_AMessage_dup_plt((void*)(&v33), v15);
      v8 = v33;
      v10 = "what";
      v9 = 9;
      goto LABEL_23;
    }
  }
  else {
    if (v32 <= 1) {
      if (v32 == 0) {
        v16 = *a2;
        LODWORD(v29) = 0;
        nandroid_AMessage_findInt32_plt(v16, "changedMask", &v29);
        v17 = *a2;
        v18 = v29;
        v33 = 0;
        nandroid_AMessage_findMessage_plt(v17, "reply", &v33);
        v19 = a1[11];
        v31 = 0;
        nandroid_AMessage_dup_plt((void*)(&v31), v19);
        nandroid_AMessage_setInt32_plt(v31, "what", 10);
        nandroid_AMessage_setInt32_plt(v31, "audio", v18 & 1);
        nandroid_AMessage_setInt32_plt(v31, "video", (v18 & 2) != 0);
        nandroid_AMessage_setMessage_plt(v31, "reply", &v33);
        nandroid_AMessage_post_plt(v31, 0);
        if (v31 != 0) {
          nandroid_RefBase_decStrong_plt(v31, &v31);
        }
        goto LABEL_24;
      }
      if (v32 != 1) {
        return result;
      }
      v6 = *a2;
      LODWORD(v31) = 0;
      nandroid_AMessage_findInt32_plt(v6, "err", &v31);
      v7 = a1[11];
      v33 = 0;
      nandroid_AMessage_dup_plt((void*)(&v33), v7);
      nandroid_AMessage_setInt32_plt(v33, "what", 13);
      v8 = v33;
      v9 = (unsigned int)v31;
      v10 = "err";
    LABEL_23:
      nandroid_AMessage_setInt32_plt(v8, v10, v9);
      nandroid_AMessage_post_plt(v33, 0);
    LABEL_24:
      result = v33;
      if (v33 == 0) {
        return result;
      }
      v23 = &v33;
      return nandroid_RefBase_decStrong_plt(result, v23);
    }
    if (v32 != 2) {
      v12 = *a2;
      LODWORD(v31) = 0;
      nandroid_AMessage_findInt32_plt(v12, "err", &v31);
      v13 = a1[11];
      v14 = v31;
      v33 = 0;
      nandroid_AMessage_dup_plt((void*)(&v33), v13);
      nandroid_AMessage_setInt32_plt(v33, "what", 0);
      v8 = v33;
      v10 = "err";
      v9 = v14;
      goto LABEL_23;
    }
    v20 = *a1;
    v31 = 0;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*, _QWORD))(
        v20 + 128))((void*)(&v31), a1, 0);
    v30 = 0;
    if (v31 != 0 &&
        (nandroid_AMessage_findInt32_plt(v31, "width", (char*)&v30 + 4) & 1) !=
            0 &&
        (nandroid_AMessage_findInt32_plt(v31, "height", &v30) & 1) != 0) {
      nandroid_Source_notifyVideoSizeChanged_plt(a1, &v31);
    }
    else {
      v24 = a1[11];
      v29 = 0;
      v33 = 0;
      nandroid_AMessage_dup_plt((void*)(&v33), v24);
      nandroid_AMessage_setInt32_plt(v33, "what", 2);
      nandroid_AMessage_setMessage_plt(v33, "format", &v29);
      nandroid_AMessage_post_plt(v33, 0);
      if (v33 != 0) {
        nandroid_RefBase_decStrong_plt(v33, &v33);
      }
      if (v29 != 0) {
        nandroid_RefBase_decStrong_plt(v29, &v29);
      }
    }
    if ((nandroid_LiveSession_isSeekable_plt(a1[24]) & 1) != 0) {
      v25 = 15;
    }
    else {
      v25 = 0;
    }
    v26 = (nandroid_LiveSession_hasDynamicDuration_plt(a1[24]) & 1) == 0;
    v27 = a1[11];
    v33 = 0;
    if (!v26) {
      v25 |= 0x10u;
    }
    nandroid_AMessage_dup_plt((void*)(&v33), v27);
    nandroid_AMessage_setInt32_plt(v33, "what", 1);
    nandroid_AMessage_setInt32_plt(v33, "flags", v25);
    nandroid_AMessage_post_plt(v33, 0);
    if (v33 != 0) {
      nandroid_RefBase_decStrong_plt(v33, &v33);
    }
    v28 = a1[11];
    v33 = 0;
    nandroid_AMessage_dup_plt((void*)(&v33), v28);
    nandroid_AMessage_setInt32_plt(v33, "what", 0);
    nandroid_AMessage_setInt32_plt(v33, "err", 0);
    nandroid_AMessage_post_plt(v33, 0);
    if (v33 != 0) {
      nandroid_RefBase_decStrong_plt(v33, &v33);
    }
    result = v31;
    if (v31 != 0) {
      v23 = &v31;
      return nandroid_RefBase_decStrong_plt(result, v23);
    }
  }
  return result;
}

#pragma GCC visibility pop
