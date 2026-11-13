#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_CAacDecoder_DecodeFrame_plt(__int64, unsigned int, __int64,
                                             int, int);
__int64 nn_codec_CAacDecoder_SignalInterruption_plt(__int64);
__int64 nn_codec_CAacDecoder_SyncQmfMode_plt(__int64);
__int64 nn_codec_FDK_getValidBits_plt(__int64);
__int64 nn_codec_FDK_pushBack_plt(__int64, unsigned int, unsigned __int8);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKmemclear_plt(__int64, unsigned int);
__int64 nn_codec_FDKmemcpy_plt(__int64, __int64, unsigned int);
__int64 nn_codec_applyLimiter_plt(__int64, __int64, __int64, __int64,
                                  unsigned int, unsigned int, unsigned int);
__int64 nn_codec_getLimiterDelay_plt(__int64);
__int64 nn_codec_pcmDmx_ApplyFrame_plt(__int64, __int64, unsigned int, __int64,
                                       int, __int64, __int64, __int64, __int64);
__int64 nn_codec_pcmDmx_GetParam_plt(__int64, int, __int64);
__int64 nn_codec_pcmDmx_Reset_plt(__int64, unsigned int);
__int64 nn_codec_resetLimiter_plt(__int64);
__int64 nn_codec_sbrDecoder_Apply_plt(__int64, __int64, __int64, __int64,
                                      __int64, int, int, __int64);
__int64 nn_codec_sbrDecoder_GetDelay_plt(__int64);
__int64 nn_codec_sbrDecoder_SetParam_plt(__int64, int, unsigned int);
__int64 nn_codec_setLimiterNChannels_plt(__int64, unsigned int);
__int64 nn_codec_setLimiterSampleRate_plt(__int64, unsigned int);
__int64 nn_codec_transportDec_EndAccessUnit_plt(__int64);
__int64 nn_codec_transportDec_GetBitstream_plt(__int64, unsigned int);
__int64 nn_codec_transportDec_GetMissingAccessUnitCount_plt(__int64, __int64);
__int64 nn_codec_transportDec_ReadAccessUnit_plt(__int64, unsigned int);
__int64 nn_codec_transportDec_SetParam_plt(__int64, int, int);
__int64 fdk_aac_libAACdec_src_33baa0(__int64 a1, __int64 a2, int a3, int a4);

__int64 fdk_aac_libAACdec_src_33baa0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int* v8;
  unsigned int* v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int* v23;
  __int64 v24;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  struct {
    int v47;
    int v48;
  } v47_;

  if (a1 != 0) {
    if ((a4 & 4) != 0) {
      *(_DWORD*)(a1 + 720) = 0;
    }
    v45 = *(_DWORD*)(a1 + 16);
    v8 = (unsigned int*)nn_codec_transportDec_GetBitstream_plt(
        *(_QWORD*)(a1 + 24), 0);
    v9 = v8;
    if (v8[12] != 0) {
      nn_codec_FDK_put_plt(v8 + 2, *v8, v8[1]);
      *(_QWORD*)v9 = 0;
      v10 = a4 & 3;
      v44 = nn_codec_FDK_getValidBits_plt((__int64)(v9 + 2));
      if ((a4 & 3) != 0) {
        goto LABEL_6;
      }
    }
    else {
      nn_codec_FDK_pushBack_plt((__int64)(v8 + 2), v8[1], 0);
      *(_QWORD*)v9 = 0;
      v10 = a4 & 3;
      v44 = nn_codec_FDK_getValidBits_plt((__int64)(v9 + 2));
      if ((a4 & 3) != 0) {
      LABEL_6:
        v11 = *(_DWORD*)(a1 + 720);
        v12 = __OFSUB__(v11, 1);
        v13 = v11 - 1;
        if (v13 < 0 == v12) {
          v14 = 0;
          v15 = 0;
          *(_DWORD*)(a1 + 720) = v13;
        LABEL_22:
          if ((v15 | a4 & 0xC) == 0) {
            goto LABEL_27;
          }
          nn_codec_sbrDecoder_SetParam_plt(*(_QWORD*)(a1 + 16080), 4, a4 & 8);
          nn_codec_CAacDecoder_SignalInterruption_plt(a1);
          v21 = *(_QWORD*)(a1 + 16080);
          if (v21 != 0) {
            nn_codec_sbrDecoder_SetParam_plt(v21, 5, 0);
          }
          if ((a4 & 4) != 0) {
          LABEL_27:
            if ((a4 & 2) != 0) {
              nn_codec_transportDec_SetParam_plt(*(_QWORD*)(a1 + 24), 5, 1);
              *(_QWORD*)(a1 + 720) = 0;
              *(_DWORD*)(a1 + 728) = 0;
            }
            v22 = *(unsigned __int8*)(a1 + 16176);
            *(_DWORD*)(a1 + 708) = 0;
            if (v22 == 255) {
              LOBYTE(v22) = (*(_BYTE*)(a1 + 68) & 0x30) == 0;
            }
            *(_BYTE*)(a1 + 16177) = v22;
            *(_DWORD*)(a1 + 16180) = 0x10000;
            v20 = nn_codec_CAacDecoder_DecodeFrame_plt(
                a1, a4 | (unsigned int)v14, a1 + 16188, 0x4000, v45);
            if (v10 == 0 &&
                (unsigned int)nn_codec_transportDec_EndAccessUnit_plt(
                    *(_QWORD*)(a1 + 24)) != 0) {
              *(_BYTE*)(a1 + 64) = 0;
            }
            if (v20 == 0 || (v20 & 0xFFFFF000) == 0x4000) {
              *(_DWORD*)(a1 + 640) = *(_DWORD*)(a1 + 672);
              *(_DWORD*)(a1 + 644) = *(_DWORD*)(a1 + 692);
              *(_DWORD*)(a1 + 648) = *(_DWORD*)(a1 + 696);
              nn_codec_CAacDecoder_SyncQmfMode_plt(a1);
              if ((v20 | a4 & 1) != 0 ||
                  *(int*)(*(_QWORD*)(a1 + 808) + 4644LL) >= 3) {
                *(_BYTE*)(a1 + 64) = 0;
              }
              v23 = (int*)(a1 + 648);
              if (*(_BYTE*)(a1 + 16088) != 0) {
                LODWORD(v24) = *(_DWORD*)(a1 + 648);
                v43 = a2;
                if ((int)v24 < 7 && *(_BYTE*)(a1 + 168) == 0) {
                  v26 = *(_DWORD*)(a1 + 648);
                }
                else {
                  v26 = *(unsigned __int8*)(a1 + 168);
                }
                nn_codec_sbrDecoder_SetParam_plt(*(_QWORD*)(a1 + 16080), 0,
                                                 *(_DWORD*)(a1 + 16092));
                nn_codec_sbrDecoder_SetParam_plt(*(_QWORD*)(a1 + 16080), 3,
                                                 a4 & 2);
                if (*(_DWORD*)(a1 + 680) == 39) {
                  nn_codec_sbrDecoder_SetParam_plt(
                      *(_QWORD*)(a1 + 16080), 2,
                      (*(_DWORD*)(a1 + 68) & 0x1000000) != 0);
                }
                v27 = *(_QWORD*)(a1 + 16160);
                v47_.v47 = 0;
                if ((unsigned int)nn_codec_pcmDmx_GetParam_plt(
                        v27, 3, (__int64)&v47_.v47) == 0 &&
                    v47_.v47 == 1) {
                  *(_BYTE*)(a1 + 16090) = 0;
                }
                v28 = nn_codec_sbrDecoder_Apply_plt(
                    *(_QWORD*)(a1 + 16080), a1 + 16188, a1 + 648, a1 + 640,
                    *(_QWORD*)(a1 + 160) + 8LL * v26, v45,
                    *(unsigned __int8*)(a1 + 64), a1 + 16090);
                a2 = v43;
                if (v28 == 0) {
                  v29 = *(_DWORD*)(a1 + 640);
                  v24 = (int)v24;
                  *(_DWORD*)(a1 + 68) |= 0x2000u;
                  if (*(_DWORD*)(a1 + 672) == v29) {
                    v30 = 0x20000000;
                  }
                  else {
                    v30 = 0x40000000;
                    if (*(_DWORD*)(a1 + 644) == 768) {
                      v30 = 1431655808;
                    }
                  }
                  v31 = *(_QWORD*)(a1 + 16080);
                  *(_DWORD*)(a1 + 644) =
                      ((unsigned __int64)(v30 *
                                          (__int64)(4 * *(int*)(a1 + 692))) >>
                       31) &
                      0xFFFFFFFE;
                  *(_DWORD*)(a1 + 708) =
                      ((unsigned __int64)(v30 *
                                          (__int64)(4 * *(int*)(a1 + 708))) >>
                       31) &
                      0xFFFFFFFE;
                  *(_DWORD*)(a1 + 708) += nn_codec_sbrDecoder_GetDelay_plt(v31);
                  if (*(_BYTE*)(a1 + 16090) != 0) {
                    *(_DWORD*)(a1 + 68) |= 0x8000u;
                  }
                  if ((int)v24 < *v23) {
                    v32 = a1 + 152;
                    do {
                      *(_DWORD*)(v32 + 4 * v24 - 32) = 1;
                      *(_BYTE*)(v32 + v24) = v24;
                      ++v24;
                    } while (v24 < *v23);
                  }
                }
              }
              v46 = 0;
              if ((a4 & 0xC) != 0) {
                nn_codec_pcmDmx_Reset_plt(*(_QWORD*)(a1 + 16160), 2u);
              }
              v33 = &v46;
              if (*(_BYTE*)(a1 + 16177) == 0) {
                v33 = nullptr;
              }
              if ((unsigned int)nn_codec_pcmDmx_ApplyFrame_plt(
                      *(_QWORD*)(a1 + 16160), a1 + 16188, *(_DWORD*)(a1 + 644),
                      a1 + 648, v45, a1 + 120, a1 + 152, *(_QWORD*)(a1 + 160),
                      (__int64)v33) == 10 &&
                  v20 == 0) {
                v20 = 16388;
              }
              if ((a4 & 8) != 0) {
                nn_codec_resetLimiter_plt(*(_QWORD*)(a1 + 16168));
              }
              if (*(_BYTE*)(a1 + 16177) != 0) {
                nn_codec_setLimiterNChannels_plt(*(_QWORD*)(a1 + 16168),
                                                 *(_DWORD*)(a1 + 648));
                nn_codec_setLimiterSampleRate_plt(*(_QWORD*)(a1 + 16168),
                                                  *(_DWORD*)(a1 + 640));
                nn_codec_applyLimiter_plt(*(_QWORD*)(a1 + 16168), a1 + 16188,
                                          a1 + 16180, (__int64)&v46, 1u,
                                          *(_DWORD*)(a1 + 16184),
                                          *(_DWORD*)(a1 + 644));
                *(_DWORD*)(a1 + 708) +=
                    nn_codec_getLimiterDelay_plt(*(_QWORD*)(a1 + 16168));
              }
              if ((a4 & 2) != 0) {
                nn_codec_CAacDecoder_SignalInterruption_plt(a1);
                v35 = *(_QWORD*)(a1 + 16080);
                if (v35 != 0) {
                  nn_codec_sbrDecoder_SetParam_plt(v35, 5, 0);
                }
              }
              *(_DWORD*)(a1 + 712) = *(_DWORD*)(a1 + 68);
            }
          }
          else {
            v20 = 4097;
          }
          goto LABEL_81;
        }
      LABEL_21:
        v14 = 0;
        v15 = 0;
        goto LABEL_22;
      }
    }
    if (*(int*)(a1 + 12) >= 1) {
      v15 = 0;
      v14 = 0;
      v17 = 0;
      while (1) {
        v19 =
            nn_codec_transportDec_ReadAccessUnit_plt(*(_QWORD*)(a1 + 24), v17);
        if (v19 <= 257) {
          if (v19 != 0) {
            if (v19 == 257) {
              v20 = 4098;
              goto LABEL_81;
            }
            goto LABEL_56;
          }
        }
        else {
          switch (v19) {
          case 258:
            v18 = *(_QWORD*)(a1 + 24);
            v47_.v48 = 0;
            nn_codec_transportDec_GetMissingAccessUnitCount_plt(
                (__int64)&v47_.v48, v18);
            v15 = 1;
            *(_DWORD*)(a1 + 720) = v47_.v48;
            break;
          case 1027:
            v14 = 1;
            break;
          case 515:
            v20 = 8203;
            goto LABEL_81;
          default:
          LABEL_56:
            v20 = 5;
          LABEL_81:
            if (v9[12] != 0) {
              nn_codec_FDK_put_plt(v9 + 2, *v9, v9[1]);
            }
            else {
              nn_codec_FDK_pushBack_plt((__int64)(v9 + 2), v9[1], 0);
            }
            *(_QWORD*)v9 = 0;
            v36 = nn_codec_FDK_getValidBits_plt((__int64)(v9 + 2));
            v37 = *(_DWORD*)(a1 + 644);
            v38 = v44 - v36;
            if (v37 >= 1) {
              *(_DWORD*)(a1 + 688) = *(int*)(a1 + 640) * v38 / v37;
            }
            v39 = v38 >> 3;
            *(_DWORD*)(a1 + 724) += v39;
            v40 = v20 & 0xFFFFF000;
            if ((v20 == 0 || v40 == 0x4000) &&
                (++*(_DWORD*)(a1 + 732), v40 == 0x4000)) {
              *(_DWORD*)(a1 + 728) += v39;
              ++*(_DWORD*)(a1 + 736);
              v41 = v37 * *(int*)(a1 + 648);
              if (a3 >= v41) {
                v16 = v20;
              }
              else {
                v16 = 8204;
              }
              if (v16 != 0) {
              LABEL_98:
                if ((v16 & 0xFFFFF000) != 0x4000) {
                  nn_codec_FDKmemclear_plt(a2, 2 * a3);
                  return v16;
                }
              }
            }
            else {
              v41 = v37 * *(int*)(a1 + 648);
              if (a3 >= v41) {
                v16 = v20;
              }
              else {
                v16 = 8204;
              }
              if (v16 != 0) {
                goto LABEL_98;
              }
            }
            nn_codec_FDKmemcpy_plt(a2, a1 + 16188, 2 * v41);
            return v16;
          }
        }
        if ((signed int)++v17 >= (signed __int32)*(_DWORD*)(a1 + 12)) {
          goto LABEL_22;
        }
      }
    }
    goto LABEL_21;
  }
  return 8193;
}

#pragma GCC visibility pop
