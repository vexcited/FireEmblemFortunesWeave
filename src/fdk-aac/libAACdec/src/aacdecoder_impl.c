#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_codec_CConcealment_InitChannelData_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_CPns_InitPns_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_CProgramConfig_GetElementTable_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_codec_CProgramConfig_Init_plt(_QWORD);
__int64 nn_codec_CProgramConfig_IsValid_plt(_QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_GetAacDecoderChannelInfo_plt(_QWORD);
__int64 nn_codec_GetAacDecoderStaticChannelInfo_plt(_QWORD);
__int64 nn_codec_GetOverlapBuffer_plt(_QWORD);
__int64 nn_codec_HcrInitRom_plt(_QWORD);
__int64 nn_codec_aacDecoder_Close_plt(_QWORD);
__int64 nn_codec_aacDecoder_drcInitChannelData_plt(_QWORD);
__int64 nn_codec_getSamplingRateInfo_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_mdct_init_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_pcmDmx_SetMatrixMixdownFromPce_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_codec_setHcrType_plt(_QWORD, _QWORD);
__int64 nn_codec_transportDec_GetFormat_plt(_QWORD);
extern __int64 SdkData_e87a48;
extern void (*SdkData_e87a50[778])();
__int64 nn_codec_CAacDecoder_Init(unsigned int* a1, __int64 a2);
__int64 nn_codec_CAacDecoder_AncDataParse(__int64 result, unsigned int* a2,
                                          int a3);

__int64 nn_codec_CAacDecoder_Init(unsigned int* a1, __int64 a2)
{
  __int64 v2;
  int v5;
  unsigned int v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  __int64 v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int* v48;
  int v49;
  __int64 v51;

  if (a1 == nullptr) {
    return 8193;
  }
  v2 = *(unsigned int*)(a2 + 500);
  if ((unsigned int)v2 > 0x27) {
  LABEL_10:
    if ((_DWORD)v2 != 143) {
      return 8194;
    }
    goto LABEL_4;
  }
  if (((1LL << v2) & 0x8020800020LL) == 0) {
    if (v2 == 2) {
      a1[169] = 1;
    }
    else if (v2 != 20) {
      goto LABEL_10;
    }
    if (*(_DWORD*)(a2 + 20) != 0) {
      return 8195;
    }
  }
LABEL_4:
  nn_codec_CProgramConfig_Init_plt((char*)a1 + 169);
  v5 = *(unsigned __int8*)(a2 + 524);
  if ((unsigned int)v5 <= 0xE) {
    if (((1 << v5) & 0x7E) != 0) {
      v6 = *(unsigned __int8*)(a2 + 524);
    LABEL_19:
      nn_codec_FDKmemcpy_plt(
          a1 + 18,
          SdkData_e87a48 + 28LL * ((unsigned int)(unsigned __int8)v5 - 1), 28);
      a1[25] = -1;
      v9 = v6 & 7;
      if (v6 - 1 >= 7) {
        v10 = 0;
        do {
          v11 = (char*)a1 + v10;
          v11[113] = v10 + 1;
          v11[112] = v10;
          v11[114] = v10 + 2;
          v11[115] = v10 + 3;
          v11[116] = v10 + 4;
          v11[117] = v10 + 5;
          v12 = v10 + 6;
          v10 += 8;
          v11[118] = v12;
          v11[119] = v12 + 1;
        } while (v10 != (v6 & 0x78));
      }
      else {
        v10 = 0;
      }
      if ((v6 & 7) != 0) {
        do {
          *((_BYTE*)a1 + v10 + 112) = v10;
          ++v10;
          --v9;
        } while (v9 != 0);
      }
      if (v6 <= 7) {
        memset_plt((void*)((char*)a1 + v6 + 112),
                   (char*)((_UNKNOWN*)0xFCLL) + 3, 8 - v6);
      }
      *((_BYTE*)a1 + 168) = *(_BYTE*)(a2 + 524);
      goto LABEL_28;
    }
    if (((1 << v5) & 0x5080) != 0) {
      v6 = 8;
      goto LABEL_19;
    }
    if (v5 == 11) {
      v6 = 7;
      goto LABEL_19;
    }
  }
  if (*(_BYTE*)(a2 + 524) != 0) {
    return 8199;
  }
  if ((unsigned int)nn_codec_CProgramConfig_IsValid_plt(a2 + 32) == 0) {
    v51 = *((_QWORD*)a1 + 3);
    *((_BYTE*)a1 + 168) = 0;
    if ((unsigned int)nn_codec_transportDec_GetFormat_plt(v51) == 2) {
      v6 = 8;
      goto LABEL_113;
    }
    return 8199;
  }
  v6 = *(unsigned __int8*)(a2 + 494);
  if (*(_BYTE*)(a2 + 494) == 0) {
    return 8199;
  }
  nn_codec_FDKmemcpy_plt((char*)a1 + 169, a2 + 32, 465);
  v38 =
      nn_codec_CProgramConfig_GetElementTable_plt(a2 + 32, a1 + 18, 8, a1 + 42);
  if (v38 <= 7) {
    memset_plt((void*)&a1[v38 + 18], (char*)((_UNKNOWN*)0xFCLL) + 3,
               4 * (7 - v38) + 4);
  }
  if (v6 > 8) {
    return 8199;
  }
LABEL_113:
  v5 = *(char*)(a2 + 524);
  if (v5 >= 1) {
    goto LABEL_19;
  }
  if ((unsigned int)nn_codec_CProgramConfig_IsValid_plt(a2 + 32) != 0) {
    nn_codec_pcmDmx_SetMatrixMixdownFromPce_plt(
        *((_QWORD*)a1 + 2020), *(unsigned __int8*)(a2 + 45),
        *(unsigned __int8*)(a2 + 46), *(unsigned __int8*)(a2 + 47));
  }
LABEL_28:
  v13 = a1[170];
  a1[171] = *(char*)(a2 + 524);
  v14 = *(_DWORD*)(a2 + 500);
  if (v13 == v14) {
    v15 = 0;
    v16 = *(_DWORD*)(a2 + 508);
    v17 = (int*)(a1 + 3072);
    if (a1[173] == v16) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  a1[170] = v14;
  v15 = 1;
  v16 = *(_DWORD*)(a2 + 508);
  v17 = (int*)(a1 + 3072);
  if (a1[173] != v16) {
  LABEL_32:
    v15 = 1;
    a1[173] = v16;
  }
LABEL_33:
  a1[172] = 0;
  a1[17] = 0;
  a1[175] = *(_DWORD*)(a2 + 516);
  a1[176] = *(_DWORD*)(a2 + 520);
  if (*(_BYTE*)(a2 + 529) != 0) {
    v18 = 0x2000;
  }
  else {
    v18 = 0;
  }
  a1[17] = v18;
  v19 = *(unsigned __int8*)(a2 + 530);
  *((_BYTE*)v17 + 3800) = 0;
  if (v19 != 0) {
    v20 = 0x8000;
  }
  else {
    v20 = 0;
  }
  v21 = v20 | v18;
  a1[17] = v21;
  if (*(_BYTE*)(a2 + 526) != 0) {
    ++v21;
  }
  a1[17] = v21;
  if (*(_BYTE*)(a2 + 527) != 0) {
    v22 = 2;
  }
  else {
    v22 = 0;
  }
  v23 = v22 | v21;
  a1[17] = v23;
  if (*(_BYTE*)(a2 + 528) != 0) {
    v24 = 4;
  }
  else {
    v24 = 0;
  }
  v25 = v24 | v23;
  a1[17] = v25;
  v26 = *(_DWORD*)(a2 + 500);
  if (v26 == 39) {
    v27 = v25 | 0x10;
    a1[17] = v27;
    if (*(_BYTE*)(a2 + 529) != 0) {
      v28 = 0x2000;
    }
    else {
      v28 = 0;
    }
    v29 = v28 | v27;
    a1[17] = v29;
    if (*(_BYTE*)(a2 + 4) != 0) {
      v30 = 0x4000;
    }
    else {
      v30 = 0;
    }
    v31 = v30 | v29;
    a1[17] = v31;
    if (*(_BYTE*)(a2 + 2) != 0) {
      v32 = 0x1000000;
    }
    else {
      v32 = 0;
    }
    v25 = v32 | v31;
    a1[17] = v25;
    v26 = *(_DWORD*)(a2 + 500);
  }
  if (v26 == 23) {
    v33 = 32;
  }
  else {
    v33 = 0;
  }
  v34 = v33 | v25;
  a1[17] = v34;
  v35 = ~((unsigned int)*(char*)(a2 + 525) >> 25) & 0x40 | v34;
  a1[17] = v35;
  v36 = *(_DWORD*)(a2 + 500);
  if (v36 == 143) {
    v35 |= 0x24008u;
    a1[17] = v35;
    v36 = *(_DWORD*)(a2 + 500);
  }
  if (v36 == 20 || v36 == 6) {
    v35 |= 8u;
    a1[17] = v35;
  }
  if (*(_BYTE*)(a2 + 529) != 0) {
    *((_WORD*)v17 + 1900) = 257;
  }
  if (*(_BYTE*)(a2 + 530) != 0) {
    a1[17] = v35 | 0x8000;
  }
  v37 = *(char*)(a2 + 525);
  if ((v37 & 0x80000000) == 0 && *(char*)(a2 + 524) < 1) {
    return 8196;
  }
  *((_BYTE*)a1 + 716) = v37;
  if (*(char*)(a2 + 525) > 1) {
    return 8196;
  }
  if (a1[168] != *(_DWORD*)(a2 + 504)) {
    result = nn_codec_getSamplingRateInfo_plt(
        a1 + 8, *(unsigned int*)(a2 + 508), *(unsigned __int8*)(a2 + 531));
    if ((_DWORD)result != 0) {
      return result;
    }
    a1[168] = a1[14];
    v15 = 1;
  }
  if (a1[1] == v6) {
    if (v15 != 0) {
      goto LABEL_101;
    }
    goto LABEL_110;
  }
  v40 = 0;
  v41 = 0;
  do {
    v42 = (int*)&a1[2 * v41];
    if (*((_QWORD*)v42 + 93) != 0) {
      if (*((_QWORD*)v42 + 101) != 0) {
        goto LABEL_88;
      }
    }
    else {
      v43 = *((_QWORD*)a1 + 109);
      v44 = nn_codec_GetAacDecoderChannelInfo_plt((unsigned int)v41);
      *((_QWORD*)v42 + 93) = v44;
      if (v44 == 0) {
        goto LABEL_97;
      }
      *(_QWORD*)(v44 + 216) = v43 + 2038 * (v41 & 1);
      *(_QWORD*)(*((_QWORD*)v42 + 93) + 224LL) = a1 + 218;
      if (*((_QWORD*)v42 + 101) != 0) {
        goto LABEL_88;
      }
    }
    v45 = nn_codec_GetAacDecoderStaticChannelInfo_plt((unsigned int)v41);
    *((_QWORD*)v42 + 101) = v45;
    if (v45 == 0 || (**((_QWORD**)v42 + 101) =
                         nn_codec_GetOverlapBuffer_plt((unsigned int)v41),
                     **((_QWORD**)v42 + 101) == 0)) {
    LABEL_97:
      nn_codec_aacDecoder_Close_plt(a1);
      return 2;
    }
    **((_QWORD**)v42 + 93) = *((_QWORD*)a1 + 110) + v40;
  LABEL_88:
    nn_codec_CPns_InitPns_plt(*((_QWORD*)v42 + 93) + 56LL, a1 + 222, a1 + 254,
                              a1 + 255);
    ++v41;
    v40 += 4096;
  } while (v6 != v41);
  if ((int)v6 > (int)*a1) {
    *a1 = v6;
  }
  nn_codec_HcrInitRom_plt(a1 + 400);
  nn_codec_setHcrType_plt(a1 + 400, 0);
  a1[1] = v6;
LABEL_101:
  if ((int)*a1 >= 1) {
    v46 = 0;
    do {
      v49 = a1[170];
      if (v49 == 39 || v49 == 23) {
        v47 = a1[173];
      }
      else {
        v47 = (int)a1[173] / 8;
      }
      v48 = (int*)&a1[2 * v46];
      *(_DWORD*)(*((_QWORD*)v48 + 93) + 40LL) = v47;
      nn_codec_mdct_init_plt(*((_QWORD*)v48 + 101) + 8LL,
                             **((_QWORD**)v48 + 101), 2048);
      nn_codec_aacDecoder_drcInitChannelData_plt(*((_QWORD*)v48 + 101) + 48LL);
      nn_codec_CConcealment_InitChannelData_plt(*((_QWORD*)v48 + 101) + 112LL,
                                                a1 + 3988, a1[173]);
      ++v46;
    } while (v46 < (int)*a1);
  }
LABEL_110:
  a1[178] = a1[17];
  return 0;
}

__int64 nn_codec_CAacDecoder_AncDataParse(__int64 result, unsigned int* a2,
                                          int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int* v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;

  if (a3 >= 1) {
    v5 = result;
    if (*(_QWORD*)result != 0) {
      v6 = *(int*)(result + 44);
      v7 = *(int*)(result + 12 + 4 * v6);
      if ((int)v7 + a3 <= (signed __int32)*(_DWORD*)(result + 8) &&
          (int)v6 <= 6) {
        v14 = (unsigned int)a3;
        v15 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                         (unsigned __int64)(*(_BYTE**)0x20LL));
        while (1) {
          v17 = a2[1];
          if (v17 < 9) {
            v19 = nn_codec_FDK_getValidBits_plt(a2 + 2);
            if (31 - a2[1] >= v19) {
              v20 = v19;
            }
            else {
              v20 = 31 - a2[1];
            }
            v21 = *a2 << v20;
            result = nn_codec_FDK_get_plt(a2 + 2, v20);
            v22 = a2[1];
            v18 = v21 | result;
            *a2 = v21 | result;
            v17 = v22 + v20;
            if (v17 > 7) {
              goto LABEL_21;
            }
            v16 = v18 << (8 - v17);
            *a2 = v16;
            a2[1] = 0;
            --v14;
            *(_BYTE*)(*(_QWORD*)v5 + v7++) = v16 & v15;
            if (v14 == 0) {
              goto LABEL_22;
            }
          }
          else {
            v18 = *a2;
          LABEL_21:
            v23 = v17 - 8;
            a2[1] = v23;
            --v14;
            *(_BYTE*)(*(_QWORD*)v5 + v7++) = (v18 >> v23) & v15;
            if (v14 == 0) {
            LABEL_22:
              v24 = *(int*)(v5 + 44);
              *(_DWORD*)(v5 + 44) = v24 + 1;
              *(_DWORD*)(v5 + 12 + 4 * (v24 + 1)) =
                  *(_DWORD*)(v5 + 12 + 4 * v24) + a3;
              return result;
            }
          }
        }
      }
    }
  }
  if (a3 >= 1) {
    v10 = a2[1];
    v11 = a2[12];
    v12 = 8 * a3;
    if (v10 <= 8 * a3) {
      v13 = a2 + 2;
      if (v11 == 0) {
        nn_codec_FDK_pushBack_plt(a2 + 2, v10, 0);
        goto LABEL_26;
      }
    LABEL_12:
      nn_codec_FDK_put_plt(v13, *a2);
    LABEL_26:
      *(_QWORD*)a2 = 0;
      return nn_codec_FDK_pushForward_plt(v13, v12, a2[12]);
    }
    if (v11 != 0) {
      v13 = a2 + 2;
      goto LABEL_12;
    }
    a2[1] = v10 - v12;
  }
  return result;
}

#pragma GCC visibility pop
