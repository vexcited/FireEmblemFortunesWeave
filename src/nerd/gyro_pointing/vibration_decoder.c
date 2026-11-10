#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int16 SdkData_c94a40[258];
__int64 nerd_VibrationDecoder_Init(void* this_, unsigned int a2);
unsigned __int64 nerd_VibrationDecoder_DoGenerateChunk(void* this_, int a2,
                                                       int a3, int a4, int a5,
                                                       __int16* a6);

__int64 nerd_VibrationDecoder_Init(void* this_, unsigned int a2)
{
  if (a2 % 0xC8 != 0) {
    return 3587;
  }
  *((_QWORD*)this_ + 4) = a2 / 0xC8;
  *(_QWORD*)this_ = 0xA00000000000000LL;
  *((_QWORD*)this_ + 1) = 0;
  *((_QWORD*)this_ + 2) = 335544320;
  *((_DWORD*)this_ + 6) = 0x100000000uLL / a2;
  return 0;
}

unsigned __int64 nerd_VibrationDecoder_DoGenerateChunk(void* this_, int a2,
                                                       int a3, int a4, int a5,
                                                       __int16* a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;

  v6 = *(_DWORD*)this_;
  v7 = *((_DWORD*)this_ + 3);
  v8 = *((_QWORD*)this_ + 4);
  if (v8 != 0) {
    v9 = *((_DWORD*)this_ + 1);
    v10 = *((_DWORD*)this_ + 2);
    v12 = *((_DWORD*)this_ + 4);
    v11 = *((_DWORD*)this_ + 5);
    v13 = 0;
    v14 = (a2 - v9) / (int)v8;
    v15 = v9 + v14;
    v16 = ((a3 - v10) << 16) / (int)v8;
    v17 = v16 + (v10 << 16) + 0x8000;
    v18 = ((a5 - v11) << 16) / (int)v8;
    v19 = (a4 - v12) / (int)v8;
    v20 = v12 + v19;
    v21 = v18 + (v11 << 16) + 0x8000;
    do {
      v22 = (unsigned __int16)(v7 >> 8);
      v23 = *((_DWORD*)this_ + 6);
      v24 = SdkData_c94a40[HIBYTE(v6)];
      v25 = v23 * (unsigned __int64)v15;
      v26 = v23 * (unsigned __int64)v20;
      v15 += v14;
      v20 += v19;
      v27 =
          (SdkData_c94a40[HIBYTE(v6) + 1] - v24) * (unsigned __int16)(v6 >> 8);
      v6 += v25 >> 20;
      v28 = v24 + (v27 >> 16);
      v29 = HIBYTE(v7);
      v7 += v26 >> 20;
      v30 = SdkData_c94a40[v29];
      v31 = v30 + (((SdkData_c94a40[v29 + 1] - v30) * v22) >> 16);
      v32 = v17 >> 16;
      v17 += v16;
      v33 = v28 * v32;
      v34 = v21 >> 16;
      v21 += v18;
      v35 = (v33 + v31 * v34) / 256;
      if (v35 <= -32768) {
        v35 = -32768;
      }
      if (v35 >= 0x7FFF) {
        LOWORD(v35) = 0x7FFF;
      }
      a6[v13++] = v35;
      v8 = *((_QWORD*)this_ + 4);
    } while (v13 < v8);
  }
  *(_DWORD*)this_ = v6;
  *((_DWORD*)this_ + 1) = a2;
  *((_DWORD*)this_ + 2) = a3;
  *((_DWORD*)this_ + 3) = v7;
  *((_DWORD*)this_ + 4) = a4;
  *((_DWORD*)this_ + 5) = a5;
  return v8;
}

#pragma GCC visibility pop
