#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FinalizeAacMemoryAllocator_plt(void);
__int64 nn_codec_InitializeAacMemoryAllocator_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_aacDecoder_ConfigRaw_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_aacDecoder_Open_plt(_QWORD, _QWORD);
__int64 nn_codec_detail_GetAudioSpecificConfig_plt(_QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e87c58;
__int64 aac_decoder_361fc0(__int64 result);

__int64 aac_decoder_361fc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  _QWORD v21[5];
  __int64 v22;
  _QWORD v23[2];

  v3 = 0;
  if ((int)result > 0x4000) {
    if ((int)result > 16394) {
      if ((int)result > 0x8000) {
        if ((unsigned int)(result - 32769) >= 3) {
          goto LABEL_31;
        }
        return v3;
      }
      if ((_DWORD)result == 16395) {
        return 8195;
      }
      if ((_DWORD)result != 16396) {
        v5 = 16397;
        goto LABEL_30;
      }
    }
    else {
      if ((int)result <= 16388) {
        if ((unsigned int)(result - 16385) < 2 || (_DWORD)result != 16387) {
          return 65534;
        }
        return 8195;
      }
      if ((unsigned int)(result - 16390) >= 5) {
        v5 = 16389;
        goto LABEL_29;
      }
    }
    return 65534;
  }
  if ((int)result > 4096) {
    if ((unsigned int)(result - 8193) <= 0xB) {
      v4 = 1 << (result - 1);
      v3 = result;
      if ((v4 & 0xEC3) == 0) {
        if ((v4 & 0x3C) == 0) {
          return 65534;
        }
        return 8195;
      }
      return v3;
    }
    if ((_DWORD)result != 4097) {
      v5 = 4098;
    LABEL_29:
      v3 = result;
    LABEL_30:
      if ((_DWORD)result != v5) {
        goto LABEL_31;
      }
      return v3;
    }
    return 65534;
  }
  if ((_DWORD)result == 0) {
    return v3;
  }
  if ((_DWORD)result != 2) {
    if ((_DWORD)result == 5) {
      return 0xFFFF;
    }
  LABEL_31:
    v23[0] = v1;
    v23[1] = v2;
    v6 = nn_detail_UnexpectedDefaultImpl_plt_857150(result);
    v21[3] = v23;
    v21[4] = v9;
    v10 = 8200;
    v12 = v11;
    v14 = v13;
    v15 = v8;
    v16 = v7;
    v17 = v6;
    if (v7 <= 23999) {
      if (v7 > 11999) {
        if (v7 != 12000 && v7 != 16000 && v7 != 22050) {
          return v10;
        }
      }
      else if (v7 != 7350 && v7 != 8000 && v7 != 11025) {
        return v10;
      }
    }
    else if (v7 <= 47999) {
      if (v7 != 24000 && v7 != 32000 && v7 != 44100) {
        return v10;
      }
    }
    else if (v7 > 88199) {
      if (v7 != 96000 && v7 != 88200) {
        return v10;
      }
    }
    else if (v7 != 48000 && v7 != 64000) {
      return v10;
    }
    if (v8 - 1 < 6 || v8 == 8) {
      nn_os_LockMutex_plt(SdkData_e87c58);
      *(_QWORD*)(v17 + 16) = 0;
      *(_QWORD*)(v17 + 24) = 0;
      memset(v21, 0, 24);
      nn_codec_InitializeAacMemoryAllocator_plt(v14, v12, v21);
      v18 = nn_codec_aacDecoder_Open_plt(1, 1);
      v22 = 0;
      v20 = (char*)&v22 + 4;
      nn_codec_detail_GetAudioSpecificConfig_plt((char*)&v22 + 4, 4, &v22, v16,
                                                 v15, 29, 1);
      if ((unsigned int)nn_codec_aacDecoder_ConfigRaw_plt(v18, &v20, &v22) !=
          0) {
        v10 = 8195;
      }
      else {
        v10 = 0;
        *(_QWORD*)(v17 + 32) = v12;
        *(_DWORD*)(v17 + 40) = v16;
        *(_DWORD*)(v17 + 44) = v15;
        *(_QWORD*)v17 = v18;
        *(_QWORD*)(v17 + 8) = v14;
        *(_DWORD*)(v17 + 48) = 10000;
      }
      *(_QWORD*)(v17 + 16) = nn_codec_FinalizeAacMemoryAllocator_plt();
      *(_QWORD*)(v17 + 24) = v19;
      nn_os_UnlockMutex_plt(SdkData_e87c58);
    }
    else {
      return 8199;
    }
    return v10;
  }
  return result;
}

#pragma GCC visibility pop
