#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_CreateAudioRendererManager_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_audio_GetAudioRendererWorkBufferSize(unsigned int* a1);

__int64 nn_audio_GetAudioRendererWorkBufferSize(unsigned int* a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  _QWORD v10[2];
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  struct {
    __int64 v18;
    char gap64_[24];
    __int64 v19;
  } v18_;

  v1 = a1[11];
  v18_.v19 = 0;
  nn_audio_CreateAudioRendererManager_plt(v1 == 1);
  v3 = *a1;
  v4 = a1[1];
  v14 = 0;
  v15 = 0;
  v18_.v18 = 0;
  v10[0] = __PAIR64__(v4, v3);
  v10[1] = *((_QWORD*)a1 + 1);
  v11 = a1[4];
  v12 = *(_QWORD*)(a1 + 5);
  v13 = a1[7];
  LOBYTE(v14) = *((_BYTE*)a1 + 32);
  v5 = a1[10];
  HIDWORD(v14) = a1[9];
  LODWORD(v15) = v5;
  v6 = a1[12];
  BYTE2(v14) = a1[11];
  v7 = a1[13];
  BYTE3(v14) = v6;
  v16 = v7;
  v17 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(
      *(_QWORD*)v18_.v19 + 40LL))(v18_.v19, &v18_.v18, v10);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  v8 = v18_.v18;
  if (v18_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18_.v19 + 8LL))(v18_.v19);
  }
  return v8 + 4096;
}

#pragma GCC visibility pop
