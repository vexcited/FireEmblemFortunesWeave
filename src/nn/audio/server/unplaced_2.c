#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 command_generator_242a60(_QWORD);
__int64 nn_audio_server_AddressInfo_Destroy_AddressInfo_plt(_QWORD);
__int64 nn_audio_server_MemoryPoolInfo_Translate_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_audio_server_242980(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int16 a5, int a6);

__int64 nn_audio_server_242980(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int16 a5, int a6)
{
  int v6;
  unsigned int v7;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  _QWORD v16[4];

  v6 = *(char*)(a3 + 4);
  *(_DWORD*)(a1 + 36) = a6;
  *(_DWORD*)(a1 + 40) = v6;
  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v7 = *(unsigned __int8*)(a3 + 5);
  if (v7 >= 3) {
    v15 = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    return command_generator_242a60(v15);
  }
  else {
    *(_BYTE*)(a1 + 16) = v7;
    *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
    command_generator_242a60(a3 + 192);
    command_generator_242a60(a3 + 280);
    command_generator_242a60(a3 + 368);
    command_generator_242a60(a3 + 456);
    *(_QWORD*)(a1 + 240) =
        nn_audio_server_MemoryPoolInfo_Translate_plt(a2, a4, 256);
    v12 = *(_QWORD*)(a3 + 168);
    v16[0] = *(_QWORD*)(a3 + 160);
    v16[1] = v12;
    v13 = *(_QWORD*)(a3 + 184);
    v16[2] = *(_QWORD*)(a3 + 176);
    v16[3] = v13;
    nn_audio_server_AddressInfo_Destroy_AddressInfo_plt(v16);
    *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
    return a1;
  }
}

#pragma GCC visibility pop
