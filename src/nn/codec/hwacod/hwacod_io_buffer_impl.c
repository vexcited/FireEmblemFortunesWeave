#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_codec_util_detail_FixedQueueImpl_Pop_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_codec_util_detail_FixedQueueImpl_Push_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
void __attribute__((noreturn)) nn_codec_hwacod_32f020(void);
__int64 nn_codec_hwacod_shim_IoBufferManager_Initialize(__int64 a1, __int64 a2,
                                                        __int64 a3,
                                                        unsigned int* a4,
                                                        __int64 a5);

__int64 nn_codec_hwacod_shim_IoBufferManager_Initialize(__int64 a1, __int64 a2,
                                                        __int64 a3,
                                                        unsigned int* a4,
                                                        __int64 a5)
{
  __int64 v5;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  unsigned int* v28;
  __int64 v29;
  int v30;
  __int64 vars0;

  v5 = (int)a4[2];
  v11 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD*)a1 = v11;
  *(_QWORD*)(a1 + 8) = v5;
  v12 = v11 + 96LL * (int)v5;
  if (*(_BYTE*)(a1 + 256) == 1) {
    *(_BYTE*)(a1 + 256) = 0;
  }
  nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(a1 + 64, v12,
                                                         (4 * v5) | 1);
  v13 = nn_diag_detail_NotNullImpl_plt(v12);
  if ((v13 & 1) == 0) {
    v13 = nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  else if ((int)v5 > 0) {
    if (a2 + a3 - v12 > 4 * v5) {
      v14 = 0;
      v30 = 0;
      *(_BYTE*)(a1 + 256) = 1;
      v15 = *a4;
      v16 = a4[1] + (unsigned int)v15;
      do {
        v19 = *(_QWORD*)a1 + 96LL * v14;
        if (*(_BYTE*)(v19 + 88) == 1) {
          *(_BYTE*)(v19 + 88) = 0;
          v14 = v30;
        }
        v17 = *a4;
        v18 = a4[1];
        *(_QWORD*)v19 = v19;
        *(_QWORD*)(v19 + 8) = v19;
        *(_DWORD*)(v19 + 16) = 0;
        *(_DWORD*)(v19 + 20) = v14;
        *(_QWORD*)(v19 + 80) = 0;
        *(_BYTE*)(v19 + 88) = 1;
        *(_QWORD*)(v19 + 40) = 0;
        *(_QWORD*)(v19 + 48) = a5 + v15;
        *(_QWORD*)(v19 + 24) = a5;
        *(_QWORD*)(v19 + 32) = v17;
        *(_QWORD*)(v19 + 56) = v18;
        *(_QWORD*)(v19 + 64) = 0;
        nn_codec_util_detail_FixedQueueImpl_Push_plt(a1 + 64, &v30, 4);
        a5 += v16;
        v14 = v30 + 1;
        v30 = v14;
      } while (v14 < (int)v5);
      *(_BYTE*)(a1 + 324) = 1;
      return 0;
    }
  LABEL_13:
    v21 = nn_diag_detail_AbortImpl_plt_856170(v13);
    v26 = &vars0;
    v27 = v22;
    v28 = a4;
    v29 = a5;
    v23 = (_QWORD*)v21;
    nn_os_SdkMutexType_Lock_plt(v21 + 320);
    v25 = 0;
    if ((nn_codec_util_detail_FixedQueueImpl_Pop_plt(v23 + 8, &v25, 4, 4) &
         1) != 0) {
      v24 = *v23 + 96LL * v25;
      if ((*(_BYTE*)(v24 + 88) & 1) == 0) {
        nn_codec_hwacod_32f020();
      }
    }
    else {
      v24 = 0;
    }
    nn_os_SdkMutexType_Unlock_plt(v23 + 40);
    return v24;
  }
  v13 = nn_diag_detail_AbortImpl_plt_856170(v13);
  goto LABEL_13;
}

#pragma GCC visibility pop
