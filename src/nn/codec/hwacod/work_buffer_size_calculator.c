#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_codec_hwacod_shim_GetClientHipcSession_plt(PSEUDO_X8, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64
nn_codec_hwacod_shim_HardwareAudioCodecManager_GetWorkBufferSize_plt(void);
__int64
    nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetInstanceSize_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_codec_hwacod_shim_WorkBufferSizeCalculator_WorkBufferSizeCalculator(
    int* a1, __int64 a2, int a3, int a4);
__int64
nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetAdspManagerSize(__int64 a1);
__attribute__((swiftcall)) void
nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetSharedMemoryParameter(
    PSEUDO_X8 x8_, __int64 this_);

__int64 nn_codec_hwacod_shim_WorkBufferSizeCalculator_WorkBufferSizeCalculator(
    int* a1, __int64 a2, int a3, int a4)
{
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 result;
  int v29;
  int v30;
  __int64 v31;

  v7 = memcpy_plt(a1, a2, 288);
  a1[72] = a3;
  a1[73] = a4;
  v31 = 0;
  nn_codec_hwacod_shim_GetClientHipcSession_plt((void*)(&v31), v7);
  v8 = (unsigned int)a1[73];
  v30 = 0;
  v29 = (*(__int64 (**)(__int64, int*, __int64, __int64))(
      *(_QWORD*)v31 + 56LL))(v31, &v30, v8, 1);
  if (v29 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v29);
  }
  v9 = v30;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v10 = nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetInstanceSize_plt(a1) +
        63;
  v11 = a1[72];
  v12 = a1[73];
  v13 = a1[70];
  v14 = v10 & 0xFFFFFFC0;
  a1[94] = v14;
  a1[95] = v11;
  if (v13 == 3 || v13 == 2) {
    v15 = 2 * a1[1] * ((*((_QWORD*)a1 + 1) * *a1 + 999999999LL) / 1000000000);
    v16 = 1536;
  }
  else if (v13 == 1) {
    v15 = 2 * a1[1] * ((*((_QWORD*)a1 + 1) * *a1 + 999999999LL) / 1000000000);
    v16 = ((_DWORD)v15 + 63) & 0xFFFFFFC0;
  }
  else {
    v15 = 0;
    v16 = 0;
  }
  v17 = v11 * v14;
  a1[98] = v12;
  v18 = ((v15 << 32) + 0x3F00000000LL) & 0xFFFFFFC000000000LL;
  *((_QWORD*)a1 + 48) = v18 | v16;
  v19 = (v9 + 63) & 0xFFFFFFC0;
  v20 = (unsigned int)((v16 + HIDWORD(v18)) * v12);
  v21 = ((_DWORD)v19 + (_DWORD)v17 + 4095) & 0xFFFFF000;
  v22 = ((_DWORD)v20 + 4095) & 0xFFFFF000;
  *((_QWORD*)a1 + 41) = v19;
  *((_QWORD*)a1 + 42) = v17 | (v19 >> 6 << 38);
  v23 = ((v12 << 6) + 4287) & 0xFFFFF000;
  v24 = (unsigned int)(v21 + v23);
  v25 = (unsigned int)(v22 + v23);
  a1[88] = v24;
  a1[93] = v25;
  *(_QWORD*)(a1 + 89) = v20;
  *(_QWORD*)(a1 + 91) = v23 | (v22 >> 12 << 44);
  v26 = (unsigned int)(v25 + v24);
  *((_QWORD*)a1 + 43) = v23 | (v21 >> 12 << 44);
  v27 = v25 | (v24 >> 12 << 44);
  result =
      nn_codec_hwacod_shim_HardwareAudioCodecManager_GetWorkBufferSize_plt();
  *((_QWORD*)a1 + 39) = v27;
  *((_QWORD*)a1 + 40) = (unsigned int)result |
                        ((unsigned __int64)(unsigned int)(v26 >> 12) << 44);
  *((_QWORD*)a1 + 37) =
      (((_DWORD)result + (_DWORD)v26 + 63) & 0xFFFFFFC0) + 4095LL;
  *((_QWORD*)a1 + 38) = v24;
  return result;
}

__int64

nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetAdspManagerSize(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  int v5;
  unsigned int v6;
  __int64 v7;

  v7 = 0;
  nn_codec_hwacod_shim_GetClientHipcSession_plt((void*)(&v7), a1);
  v2 = *(unsigned int*)(a1 + 292);
  v6 = 0;
  v5 = (*(__int64 (**)(__int64, unsigned int*, __int64, __int64))(
      *(_QWORD*)v7 + 56LL))(v7, &v6, v2, 1);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  v3 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v3;
}

__attribute__((swiftcall)) void

nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetSharedMemoryParameter(
    PSEUDO_X8 x8_, __int64 this_)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  *(_DWORD*)a2 = 1;
  v2 = *(_QWORD*)(this_ + 336);
  *(_QWORD*)(a2 + 4) = *(_QWORD*)(this_ + 328);
  v3 = *(_QWORD*)(this_ + 344);
  *(_QWORD*)(a2 + 12) = v2;
  LODWORD(v2) = *(_DWORD*)(this_ + 372);
  *(_QWORD*)(a2 + 20) = v3;
  LODWORD(v3) = *(_DWORD*)(this_ + 352);
  *(_DWORD*)(a2 + 48) = v2;
  *(_DWORD*)(a2 + 28) = v3;
  v4 = *(_QWORD*)(this_ + 364);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(this_ + 356);
  *(_QWORD*)(a2 + 40) = v4;
  v5 = *(_QWORD*)(this_ + 384);
  *(_QWORD*)(a2 + 52) = *(_QWORD*)(this_ + 376);
  LODWORD(v4) = *(_DWORD*)(this_ + 392);
  *(_QWORD*)(a2 + 60) = v5;
  *(_DWORD*)(a2 + 68) = v4;
  {
    this_;
    return;
  }
}

#pragma GCC visibility pop
