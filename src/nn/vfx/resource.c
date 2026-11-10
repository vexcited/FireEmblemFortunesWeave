#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_5b75e0(_BYTE* result, __int64);
__int64 GameRoutine_5b6b00(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c96e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5c9b40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5deed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5e6140(_QWORD, _QWORD);
__int64 GameRoutine_5fe3b0(_QWORD, _QWORD);
__int64 GameRoutine_603fb0(_QWORD, _QWORD);
__int64 GameRoutine_6064a0(_QWORD);
__int64 GameRoutine_606650(_QWORD, _QWORD);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(_QWORD);
__int64 Resource_5c6100(__int64 a1, __int64 a2);
__int64 GameRoutine_5de750(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_604da0(_QWORD, _QWORD);
__int64 GameRoutine_605fe0(_QWORD, _QWORD);
__int64 Resource_5c8c60(__int64 result);
extern __int64* GameData_2134fd0[5];
_BYTE* Resource_5b75e0(_BYTE* result, __int64 a2);
__int64 Resource_5c8c60(__int64 result);
_BYTE* Resource_5c8c90(_BYTE* result);
__int64 Resource_5c8cd0(__int64 a1);
bool Resource_5c92d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                     __int64 a5);
__int64 Resource_5c9360(__int64 result);
__int64 Resource_5c96e0(__int64 result, __int64 a2, __int64 a3);
__int64 Resource_5c9920(__int64 result);
__int64 Resource_5c9b40(__int64 result, __int64 a2, __int64 a3);
__int64 GameRoutine_5c7e20(__int64);
__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);
__int64 GameRoutine_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fc7e0(__int64*, __int64);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
extern __int64 GameData_2136448[3];
__int64 Resource_5c65e0(__int64 result, __int64 a2);

_BYTE* Resource_5b75e0(_BYTE* result, __int64 a2)
{
  _BYTE* v2;

  if (*result == 1) {
    v2 = result;
    result = (_BYTE*)GameRoutine_605fe0(result + 880, a2);
    *((_QWORD*)v2 + 108) = 0;
  }
  return result;
}

__int64 Resource_5c6100(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 FirstBlockEv;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  *(_QWORD*)(a1 + 1192) = 0;
  if (a2 != 0) {
    *(_QWORD*)(a1 + 1112) = a2;
    if (*(_QWORD*)(a1 + 1336) == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  GameRoutine_5c02c0(
      "Heap is not set in the argument of the resource destruction method.");
  if (*(_QWORD*)(a1 + 1336) != 0) {
  LABEL_3:
    v3 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  }

LABEL_4:
  v4 = *(_QWORD*)(a1 + 1200);
  if (v4 != 0) {
    FirstBlockEv = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(v4);
    GameRoutine_603fb0(FirstBlockEv, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 1200) = 0;
  }
  v6 = *(_QWORD*)(a1 + 1272);
  if (v6 != 0) {
    v7 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(v6);
    GameRoutine_603fb0(v7, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 1272) = 0;
  }
  GameRoutine_5c96e0(a1 + 1216, *(_QWORD*)(a1 + 16), a1 + 1104);
  GameRoutine_5c9b40(a1 + 1288, *(_QWORD*)(a1 + 16), a1 + 1104);
  v8 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 120) = 0;
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    *(_QWORD*)(a1 + 112) = 0;
  }
  if (*(_QWORD*)(a1 + 136) != 0) {
    v10 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    *(_QWORD*)(a1 + 136) = 0;
  }
  result = *(_QWORD*)(a1 + 152);
  if (result != 0) {
    result = GameRoutine_5e6140(result, *(_QWORD*)(a1 + 16));
    *(_QWORD*)(a1 + 152) = 0;
  }
  if (*(int*)(a1 + 160) >= 1) {
    v12 = 0;
    do {
      v13 = *(_QWORD*)(a1 + 16);
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 40LL) + 8 * v12);
      GameRoutine_6064a0(*(_QWORD*)(v14 + 128));
      result = GameRoutine_606650(*(_QWORD*)(v14 + 136), v13);
      ++v12;
    } while (v12 < *(int*)(a1 + 160));
  }
  v15 = *(_QWORD*)(a1 + 168);
  if (v15 != 0) {
    result = *(_QWORD*)(v15 + 64);
    if (*(_QWORD*)(v15 + 72) == result) {
      result = GameRoutine_5fe3b0(result, *(_QWORD*)(a1 + 16));
    }
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(a1 + 168) = 0;
  }
  if (*(int*)(a1 + 76) >= 1) {
    v16 = 0;
    do {
      v19 = *(_QWORD*)(a1 + 88);
      if (*(int*)(v19 + 56 * v16 + 4) >= 1) {
        v20 = 0;
        v21 = 0;
        v22 = 56 * v16;
        do {
          v23 = *(_QWORD*)(v19 + v22 + 24);
          GameRoutine_5b6b00(v23 + v20, *(_QWORD*)(a1 + 16));
          GameRoutine_5b75e0((_BYTE*)(v23 + v20), *(_QWORD*)(a1 + 16));
          v19 = *(_QWORD*)(a1 + 88);
          ++v21;
          v20 += 992;
        } while (v21 < *(int*)(v19 + v22 + 4));
      }
      v17 = *(_QWORD*)(a1 + 1112);
      v18 = *(_QWORD*)(v19 + 56 * v16 + 32);
      --*(_DWORD*)(a1 + 1128);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, v18);
      ++v16;
    } while (v16 < *(int*)(a1 + 76));
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v24 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 24LL))(v24);
    *(_QWORD*)(a1 + 88) = 0;
  }
  if (*(_QWORD*)(a1 + 96) != 0) {
    v25 = *(_QWORD*)(a1 + 1112);
    --*(_DWORD*)(a1 + 1128);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 24LL))(v25);
    *(_QWORD*)(a1 + 96) = 0;
  }
  if (*(_BYTE*)(a1 + 320) == 1) {
    result = GameRoutine_5deed0(a1 + 240, *(_QWORD*)(a1 + 16), a1 + 1104);
  }
  if (*(_BYTE*)(a1 + 752) == 1) {
    return GameRoutine_5deed0(a1 + 672, *(_QWORD*)(a1 + 16), a1 + 1104);
  }
  return result;
}

__int64 Resource_5c65e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _QWORD v32[2];

  v2 = *(unsigned int*)(a2 + 8);
  v3 = result;
  if ((_DWORD)v2 == -1) {
    *(_DWORD*)(result + 104) = 0;
  LABEL_33:
    *(_QWORD*)(result + 112) = 0;
    *(_QWORD*)(result + 120) = 0;
    return result;
  }
  v4 = (_DWORD*)(a2 + v2);
  v6 = 0;
  do {
    v7 = (unsigned int)v4[3];
    if (*v4 == 1296650832) {
      ++v6;
    }
    v4 = (_DWORD*)((char*)v4 + v7);
  } while ((_DWORD)v7 != -1);
  *(_DWORD*)(result + 104) = v6;
  if (v6 == 0) {
    goto LABEL_33;
  }
  v8 = 152LL * v6 + 32;
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(result + 1112) + 16LL))(*(_QWORD*)(result + 1112), v8, 128);
  v10 = *(_QWORD*)(v3 + 1120);
  v11 = *(_DWORD*)(v3 + 104);
  *(_QWORD*)(v3 + 112) = v9;
  *(_QWORD*)(v3 + 1120) = v10 + v8;
  ++*(_DWORD*)(v3 + 1128);
  if (v11 != 0) {
    v12 = GameData_2136448[0];
    v13 = 152LL * v11 - 152;
    v14 = v9;
    if ((~(v13 / 0x98) & 7) != 0) {
      v15 = ((unsigned __int8)(v13 / 0x98) + 1) & 7;
      v14 = v9;
      do {
        *(_QWORD*)v14 = v12 + 16;
        *(_BYTE*)(v14 + 8) = 0;
        --v15;
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        v14 += 152;
      } while (v15 != 0);
    }
    if (v13 >= 0x428) {
      v16 = v9 + 152LL * v11;
      v17 = v12 + 16;
      do {
        *(_QWORD*)v14 = v17;
        *(_BYTE*)(v14 + 8) = 0;
        v18 = (_QWORD*)(v14 + 316);
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        *(_QWORD*)(v14 + 152) = v17;
        *(_BYTE*)(v14 + 160) = 0;
        *(_QWORD*)(v14 + 164) = 0;
        *(_QWORD*)(v14 + 172) = 0;
        *(_QWORD*)(v14 + 180) = 0;
        *(_QWORD*)(v14 + 188) = 0;
        *(_QWORD*)(v14 + 196) = 0;
        *(_QWORD*)(v14 + 204) = 0;
        *(_QWORD*)(v14 + 212) = 0;
        *(_QWORD*)(v14 + 220) = 0;
        *(_QWORD*)(v14 + 228) = 0;
        *(_DWORD*)(v14 + 236) = 0;
        *(_QWORD*)(v14 + 304) = v17;
        *(_BYTE*)(v14 + 312) = 0;
        *(_DWORD*)(v14 + 388) = 0;
        *(_QWORD*)(v14 + 456) = v17;
        *(_BYTE*)(v14 + 464) = 0;
        *(_DWORD*)(v14 + 540) = 0;
        *(_QWORD*)(v14 + 608) = v17;
        *(_BYTE*)(v14 + 616) = 0;
        *(_DWORD*)(v14 + 692) = 0;
        *(_QWORD*)(v14 + 760) = v17;
        *(_BYTE*)(v14 + 768) = 0;
        *(_DWORD*)(v14 + 844) = 0;
        *(_QWORD*)(v14 + 912) = v17;
        *(_BYTE*)(v14 + 920) = 0;
        *(_DWORD*)(v14 + 996) = 0;
        *(_QWORD*)(v14 + 1064) = v17;
        *(_BYTE*)(v14 + 1072) = 0;
        *(_DWORD*)(v14 + 1148) = 0;
        v14 += 1216;
        *v18 = 0;
        v18[1] = 0;
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[40] = 0;
        v18[41] = 0;
        v18[42] = 0;
        v18[43] = 0;
        v18[44] = 0;
        v18[45] = 0;
        v18[46] = 0;
        v18[57] = 0;
        v18[58] = 0;
        v18[59] = 0;
        v18[60] = 0;
        v18[61] = 0;
        v18[62] = 0;
        v18[63] = 0;
        v18[64] = 0;
        v18[65] = 0;
        v18[84] = 0;
        v18[83] = 0;
        v18[82] = 0;
        v18[81] = 0;
        v18[80] = 0;
        v18[79] = 0;
        v18[78] = 0;
        v18[77] = 0;
        v18[76] = 0;
        v18[103] = 0;
        v18[102] = 0;
        v18[101] = 0;
        v18[100] = 0;
        v18[99] = 0;
        v18[98] = 0;
        v18[97] = 0;
        v18[96] = 0;
        v18[95] = 0;
      } while (v14 != v16);
    }
  }
  *(_QWORD*)(v3 + 120) = v9;
  v19 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v19 == -1) {
  LABEL_18:
    v20 = nullptr;
  }
  else {
    v20 = (_DWORD*)(a2 + v19);
    while (*v20 != 1296650832) {
      v21 = (unsigned int)v20[3];
      v20 = (_DWORD*)((char*)v20 + v21);
      if ((_DWORD)v21 == -1) {
        goto LABEL_18;
      }
    }
  }
  v22 = *(__int64**)(v3 + 16);
  v32[0] = 0;
  v32[1] = 0;
  GameRoutine_5fc180(v32);
  HIDWORD(v32[0]) = 4;
  v23 = GameRoutine_5fc7e0(v22, (__int64)v32);
  v24 = 0;
  if (v20 != nullptr) {
    v25 = v23 - 1;
    v26 = -v23;
    v27 = (__int64)v20;
    do {
      v24 += (v25 + GameRoutine_5c7e20(v27)) & v26;
      v28 = *(unsigned int*)(v27 + 12);
      v27 += v28;
    } while ((_DWORD)v28 != -1);
  }
  if ((GameRoutine_5ded80(v3 + 672, *(__int64**)(v3 + 16), v3 + 1104, 4, v24) &
       1) != 0) {
    RectDrawer_5fcbc0(v3 + 672, (__int64*)(v3 + 1072));
  }
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1096) = GameRoutine_5fcb50(v3 + 672);
  if (v20 != nullptr) {
    v29 = 0;
    v30 = 0;
    if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120), v3 + 672, (__int64)v20) &
         1) == 0) {
      goto LABEL_28;
    }
    while (1) {
      *(_QWORD*)(v3 + 224) += (unsigned int)v20[1];
      v31 = (unsigned int)v20[3];
      if ((_DWORD)v31 == -1) {
        break;
      }
      while (1) {
        v20 = (_DWORD*)((char*)v20 + v31);
        ++v30;
        v29 += 152;
        if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120) + v29, v3 + 672,
                                (__int64)v20) &
             1) != 0) {
          break;
        }
      LABEL_28:
        GameRoutine_5c02c0("Faild to initialize primitive: Index %d \n", v30);
        v31 = (unsigned int)v20[3];
        if ((_DWORD)v31 == -1) {
          goto LABEL_31;
        }
      }
    }
  }
LABEL_31:
  GameRoutine_5fcb80(v3 + 672);
  return GameRoutine_5fcb70(v3 + 672);
}

__int64 Resource_5c8c60(__int64 result)
{
  *(_QWORD*)(result + 364) = -1;
  *(_QWORD*)(result + 372) = -1;
  *(_QWORD*)(result + 348) = -1;
  *(_QWORD*)(result + 356) = -1;
  *(_QWORD*)(result + 332) = -1;
  *(_QWORD*)(result + 340) = -1;
  *(_QWORD*)(result + 316) = -1;
  *(_QWORD*)(result + 324) = -1;
  *(_QWORD*)(result + 300) = -1;
  *(_QWORD*)(result + 308) = -1;
  *(_QWORD*)(result + 292) = -1;
  return result;
}

_BYTE* Resource_5c8c90(_BYTE* result)
{
  *result = 0;
  return result;
}

__int64 Resource_5c8cd0(__int64 a1)
{
  GameRoutine_5de750(a1 + 244, *(_QWORD*)(a1 + 8), "sysTextureSampler0");
  GameRoutine_5de750(a1 + 252, *(_QWORD*)(a1 + 8), "sysTextureSampler1");
  GameRoutine_5de750(a1 + 260, *(_QWORD*)(a1 + 8), "sysTextureSampler2");
  GameRoutine_5de750(a1 + 268, *(_QWORD*)(a1 + 8), "sysFrameBufferTexture");
  GameRoutine_5de750(a1 + 276, *(_QWORD*)(a1 + 8), "sysDepthBufferTexture");
  GameRoutine_5de750(a1 + 284, *(_QWORD*)(a1 + 8), "sysCurlNoiseTextureArray");
  GameRoutine_5de750(a1 + 20, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureSampler0");
  GameRoutine_5de750(a1 + 28, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureSampler1");
  GameRoutine_5de750(a1 + 36, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureSampler2");
  GameRoutine_5de750(a1 + 44, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureSampler3");
  GameRoutine_5de750(a1 + 52, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureArraySampler0");
  GameRoutine_5de750(a1 + 60, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureArraySampler1");
  GameRoutine_5de750(a1 + 68, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureArraySampler2");
  GameRoutine_5de750(a1 + 76, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTextureArraySampler3");
  GameRoutine_5de750(a1 + 84, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTexture3DSampler0");
  GameRoutine_5de750(a1 + 92, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTexture3DSampler1");
  GameRoutine_5de750(a1 + 100, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTexture3DSampler2");
  GameRoutine_5de750(a1 + 108, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderTexture3DSampler3");
  GameRoutine_5de750(a1 + 116, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeSampler0");
  GameRoutine_5de750(a1 + 124, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeSampler1");
  GameRoutine_5de750(a1 + 132, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeSampler2");
  GameRoutine_5de750(a1 + 140, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeSampler3");
  GameRoutine_5de750(a1 + 148, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeArraySampler0");
  GameRoutine_5de750(a1 + 156, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeArraySampler1");
  GameRoutine_5de750(a1 + 164, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeArraySampler2");
  GameRoutine_5de750(a1 + 172, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderCubeArraySampler3");
  GameRoutine_5de750(a1 + 180, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowSampler0");
  GameRoutine_5de750(a1 + 188, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowSampler1");
  GameRoutine_5de750(a1 + 196, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowSampler2");
  GameRoutine_5de750(a1 + 204, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowSampler3");
  GameRoutine_5de750(a1 + 212, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowArraySampler0");
  GameRoutine_5de750(a1 + 220, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowArraySampler1");
  GameRoutine_5de750(a1 + 228, *(_QWORD*)(a1 + 8),
                     "sysCustomShaderShadowArraySampler2");
  return GameRoutine_5de750(a1 + 236, *(_QWORD*)(a1 + 8),
                            "sysCustomShaderShadowArraySampler3");
}

bool Resource_5c92d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v9;
  unsigned int v10;
  _BOOL4 v11;

  v5 = a1 + 8LL * a3;
  v9 = *(unsigned int*)(v5 + 340);
  v10 = *(_DWORD*)(v5 + 344);
  v11 = v9 != -1;
  if ((_DWORD)v9 != -1) {
    GameRoutine_5fe120(a2, v9, 0, a4, a5);
  }
  if (v10 != -1) {
    GameRoutine_5fe120(a2, v10, 4, a4, a5);
    return true;
  }
  return v11;
}

__int64 Resource_5c9360(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 48) = 0;
  return result;
}

__int64 Resource_5c96e0(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  int v4;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v3 = (_QWORD*)(result + 32);
  if (*(_QWORD*)(result + 32) != 0) {
    v4 = *(_DWORD*)(result + 48);
    v6 = result;
    if (v4 >= 1) {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = GameData_2134fd0[0];
      do {
        if (*(_BYTE*)(*v3 + v9) == 1) {
          GameRoutine_604da0(
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 32LL) +
                                    v11[*(unsigned int*)(v6 + 16)] + v8) +
                         104LL),
              a2);
          Resource_5c8c60(*(_QWORD*)(v6 + 32) + v9);
          v4 = *(_DWORD*)(v6 + 48);
        }
        ++v10;
        v9 += 384;
        v8 += 64;
      } while (v10 < v4);
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a3 + 24LL))(
        a3, *(_QWORD*)(v6 + 40));
    *v3 = 0;
    v3[1] = 0;
  }
  return result;
}

__int64 Resource_5c9920(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

__int64 Resource_5c9b40(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;

  v3 = (_QWORD*)(result + 24);
  if (*(_QWORD*)(result + 24) != 0) {
    v5 = result;
    if (*(int*)(result + 40) >= 1) {
      v7 = 0;
      v8 = 0;
      v9 = GameData_2134fd0[0];
      do {
        GameRoutine_604da0(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 8) + 32LL) +
                                  v9[*(unsigned int*)(v5 + 16)] + v7) +
                       104LL),
            a2);
        ++v8;
        v7 += 64;
      } while (v8 < *(int*)(v5 + 40));
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a3 + 24LL))(
        a3, *(_QWORD*)(v5 + 32));
    *v3 = 0;
    v3[1] = 0;
  }
  return result;
}

#pragma GCC visibility pop
