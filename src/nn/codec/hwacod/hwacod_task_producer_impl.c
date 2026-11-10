#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_codec_hwacod_shim_TaskProducer_Initialize(void* this_, void* a2,
                                                     unsigned __int64 a3,
                                                     int a4, int a5);

__int64 nn_codec_hwacod_shim_TaskProducer_Initialize(void* this_, void* a2,
                                                     unsigned __int64 a3,
                                                     int a4, int a5)
{
  __int64 v10;

  if (*((_BYTE*)this_ + 192) == 1) {
    *((_BYTE*)this_ + 192) = 0;
  }
  nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(this_, a2,
                                                         (16LL * a4) | 1);
  v10 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v10 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  if (a4 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  if (a3 <= 16LL * a4) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  *((_DWORD*)this_ + 65) = a5;
  *((_BYTE*)this_ + 192) = 1;
  atomic_store(0, (unsigned __int16*)this_ + 128);
  return 0;
}

#pragma GCC visibility pop
