#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findMessage_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_post_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64
nn_movie_detail_HlsMediaExtractorHandler_Destroy_HlsMediaExtractorHandler_plt(
    void);
__int64 nn_movie_detail_HlsMediaExtractor_QueueSamplesLoop_plt(_QWORD, _QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_SignalConditionVariable_plt(_QWORD);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
void nn_movie_detail_HlsMediaExtractorHandler_Destroy_HlsMediaExtractorHandler(
    void* this_);
__int64 nn_movie_detail_HlsMediaExtractorHandler_onMessageReceived(__int64 a1,
                                                                   __int64* a2);

void nn_movie_detail_HlsMediaExtractorHandler_Destroy_HlsMediaExtractorHandler(
    void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v5;

  nn_movie_detail_HlsMediaExtractorHandler_Destroy_HlsMediaExtractorHandler_plt();
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

__int64 nn_movie_detail_HlsMediaExtractorHandler_onMessageReceived(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v3;
  __int64 result;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;

  v3 = *a2;
  v14 = 0;
  result = nandroid_AMessage_findInt32_plt(v3, "what", &v14);
  if (v14 <= 2) {
    if (v14 != 0) {
      if (v14 == 2) {
        v8 = *a2;
        v13 = 0;
        nandroid_AMessage_findMessage_plt(v8, "format", &v13);
        result = v13;
        v12 = 0;
        if (v13 != 0) {
          nandroid_AMessage_findInt32_plt(v13, "width", (char*)&v12 + 4);
          nandroid_AMessage_findInt32_plt(v13, "height", &v12);
          result = v13;
          if (v13 != 0) {
            return nandroid_RefBase_decStrong_plt(v13, &v13);
          }
        }
      }
    }
    else {
      v11 = *a2;
      LODWORD(v13) = 0;
      nandroid_AMessage_findInt32_plt(v11, "err", &v13);
      *(_DWORD*)(*(_QWORD*)(a1 + 88) + 1600LL) = v13;
      return nn_os_SignalConditionVariable_plt(*(_QWORD*)(a1 + 88) + 1592LL);
    }
  }
  else {
    switch (v14) {
    case 3:
      v9 = *a2;
      LODWORD(v13) = 0;
      return nandroid_AMessage_findInt32_plt(v9, "percentage", &v13);
    case 13:
      v10 = *a2;
      LODWORD(v13) = 0;
      result = nandroid_AMessage_findInt32_plt(v10, "err", &v13);
      if ((_DWORD)v13 != -1011 && (_DWORD)v13 != 0) {
        atomic_store(v13, (unsigned int*)(*(_QWORD*)(a1 + 88) + 1604LL));
        return nn_movie_detail_HlsMediaExtractor_QueueSamplesLoop_plt(
            *(_QWORD*)(a1 + 88), 1);
      }
      break;
    case 1685143893:
      v6 = nn_movie_detail_HlsMediaExtractor_QueueSamplesLoop_plt(
          *(_QWORD*)(a1 + 88), 0);
      v7 = *a2;
      if ((v6 & 1) != 0) {
        return nandroid_AMessage_post_plt(v7, 100);
      }
      else {
        return nandroid_AMessage_post_plt(v7, 3000);
      }
    default:
      break;
    }
  }
  return result;
}

#pragma GCC visibility pop
