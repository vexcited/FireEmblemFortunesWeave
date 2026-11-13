#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_detail_driver_HardwareOpusDecoder_vtable[])();
extern __int64 (*nn_atk_detail_driver_OpusDecoderImpl_vtable[])();
extern __int64 (*nn_codec_HardwareOpusDecoder_vtable[])();
__int64 nn_atk_278780(__int64 a1, unsigned int a2);
__int64 nn_atk_2b9130(__int64 a1);

__int64 nn_atk_278780(__int64 a1, unsigned int a2)
{
  unsigned int* v2;
  char* v3;
  __int64 v5;

  {
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL);
    __asm__ volatile("" ::"r"(v5));
  }
  if (HIBYTE(a2) == 1 &&
      (v2 = (unsigned int*)(v5 + *(int*)(v5 + 4)), (a2 & 0xFFFFFF) < *v2) &&
      *((_WORD*)(v3 = (char*)v2 + (int)v2[2 * (a2 & 0xFFFFFF) + 2]) + 6) ==
          8705) {
    return *(unsigned int*)&v3[*((int*)v3 + 4) + 32];
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 nn_atk_2b9130(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = nn_atk_detail_driver_HardwareOpusDecoder_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 16) = nn_codec_HardwareOpusDecoder_vtable;
  *(_QWORD*)(a1 + 24) = 0;
  result = a1 + 80;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)result = nn_atk_detail_driver_OpusDecoderImpl_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

#pragma GCC visibility pop
