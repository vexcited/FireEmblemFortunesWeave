#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_codec_CBlock_GetEscape_plt(_QWORD, _QWORD);
__int64 nn_codec_CPns_Read_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD);
__int64 nn_codec_CPulseData_Apply_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_get_plt(_QWORD, _QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_pushForward_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKgetWindowSlope_plt(_QWORD, _QWORD);
__int64 nn_codec_FDKmemclear_plt(_QWORD, _QWORD);
__int64 nn_codec_HcrDecoder_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_HcrInit_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_HcrMuteErroneousLines_plt(_QWORD);
__int64 nn_codec_imdct_block_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _DWORD, _QWORD, _DWORD,
                                 _DWORD);
extern void (*SdkData_e87a50[778])();
extern void (*SdkData_e87c20[720])();
__int64 nn_codec_CBlock_ReadScaleFactorData(__int64 a1, int* a2, int a3);
__int64 nn_codec_CBlock_ScaleSpectralData(__int64* a1, __int64 a2);
__int64 nn_codec_CBlock_ReadSectionData(unsigned int* a1, __int64 a2,
                                        __int64 a3, char a4);
__int64 nn_codec_CBlock_ReadSpectralData(int* a1, __int64* a2, _QWORD* a3,
                                         char a4);
__int64 nn_codec_CBlock_FrequencyToTime(__int64 a1, __int64* a2, _WORD* a3,
                                        signed __int16 a4, int a5);

__int64 nn_codec_CBlock_ReadScaleFactorData(__int64 a1, int* a2, int a3)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  __int16 v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v34;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  if (*(_BYTE*)(a1 + 32) == 0) {
    return 0;
  }
  v40 = *(unsigned __int8*)(a1 + 36);
  if (*(_BYTE*)(a1 + 36) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 216);
  v38 = 0;
  v5 = 0;
  v41 = v3 + 512;
  v34 = a3 & 0x81100;
  v39 = v3;
  v6 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                  (unsigned __int64)((__int64*)0x4LL) + 4);
  v37 = *(unsigned __int8*)(v3 + 1251);
LABEL_5:
  v7 = 0;
  v36 = v5;
  v42 = 16 * v5;
LABEL_8:
  v8 = v7 + v42;
  v9 = *(unsigned __int8*)(v41 + v7 + v42);
  if ((unsigned int)(v9 - 14) < 2) {
    v10 = 0;
    v11 = *(_QWORD*)((char*)SdkData_e87c20[0] +
                     (unsigned __int64)((_UNKNOWN*)0xC0LL));
    v12 = a2[1];
    while (1) {
      while (v12 > 2) {
        v13 = *a2;
      LABEL_15:
        v12 -= 2;
        a2[1] = v12;
        v14 = *(unsigned __int16*)(v11 + 8LL * v10 + 2LL * ((v13 >> v12) & v6));
        v10 = v14 >> 2;
        if ((v14 & 1) != 0) {
          goto LABEL_22;
        }
      }
      v15 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v15) {
        v16 = v15;
      }
      else {
        v16 = 31 - a2[1];
      }
      v17 = *a2 << v16;
      v18 = nn_codec_FDK_get_plt(a2 + 2, v16);
      v19 = a2[1];
      v13 = v17 | v18;
      *a2 = v17 | v18;
      v12 = v19 + v16;
      if (v12 > 1) {
        goto LABEL_15;
      }
      v20 = v13 << (2 - v12);
      v12 = 0;
      *a2 = v20;
      a2[1] = 0;
      v14 = *(unsigned __int16*)(v11 + 8LL * v10 + 2LL * (v20 & v6));
      v10 = v14 >> 2;
      if ((v14 & 1) != 0) {
      LABEL_22:
        if ((v14 & 2) != 0) {
          a2[1] = v12 + 1;
        }
        v21 = v38 + v10;
        v38 = v38 + v10 - 60;
      LABEL_37:
        *(_WORD*)(v39 + 2 * v8) = v21 - 160;
      LABEL_7:
        if (++v7 == v40) {
          v5 = v36 + 1;
          if (v36 + 1 >= (unsigned __int64)*(unsigned __int8*)(a1 + 32)) {
            return 0;
          }
          goto LABEL_5;
        }
        goto LABEL_8;
      }
    }
  }
  if (*(_BYTE*)(v41 + v7 + v42) == 0) {
    *(_WORD*)(v39 + 2 * v8) = 0;
    goto LABEL_7;
  }
  if (v9 != 13) {
    v22 = 0;
    v23 = *(_QWORD*)((char*)SdkData_e87c20[0] +
                     (unsigned __int64)((_UNKNOWN*)0xC0LL));
    v24 = a2[1];
    while (1) {
      while (v24 > 2) {
        v25 = *a2;
      LABEL_27:
        v24 -= 2;
        a2[1] = v24;
        v26 = *(unsigned __int16*)(v23 + 8LL * v22 + 2LL * ((v25 >> v24) & v6));
        v22 = v26 >> 2;
        if ((v26 & 1) != 0) {
          goto LABEL_34;
        }
      }
      v27 = nn_codec_FDK_getValidBits_plt(a2 + 2);
      if (31 - a2[1] >= v27) {
        v28 = v27;
      }
      else {
        v28 = 31 - a2[1];
      }
      v29 = *a2 << v28;
      v30 = nn_codec_FDK_get_plt(a2 + 2, v28);
      v31 = a2[1];
      v25 = v29 | v30;
      *a2 = v29 | v30;
      v24 = v31 + v28;
      if (v24 > 1) {
        goto LABEL_27;
      }
      v32 = v25 << (2 - v24);
      v24 = 0;
      *a2 = v32;
      a2[1] = 0;
      v26 = *(unsigned __int16*)(v23 + 8LL * v22 + 2LL * (v32 & v6));
      v22 = v26 >> 2;
      if ((v26 & 1) != 0) {
      LABEL_34:
        if ((v26 & 2) != 0) {
          a2[1] = v24 + 1;
        }
        v21 = v37 + v22;
        v37 = v37 + v22 - 60;
        goto LABEL_37;
      }
    }
  }
  if (v34 == 0) {
    nn_codec_CPns_Read_plt(a1 + 56, a2, (char*)SdkData_e87c20[0] + 192,
                           *(_QWORD*)(a1 + 216),
                           *(unsigned __int8*)(*(_QWORD*)(a1 + 216) + 1251LL),
                           (unsigned int)v7, v36);
    goto LABEL_7;
  }
  return 16386;
}

__int64 nn_codec_CBlock_ScaleSpectralData(__int64* a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int8 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int16* v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int16* v28;
  int v29;
  __int16* v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int16* v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int* v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int16 v55;

  v2 = *((unsigned __int8*)a1 + 35);
  v3 = a1[27];
  v4 = *a1;
  v5 = a1 + 1;
  v7 = a1 + 1;
  v8 = v2 == 2;
  v9 = 8;
  if (!v8) {
    v9 = 0;
  }
  v10 = *(_QWORD*)(a2 + v9);
  nn_codec_FDKmemclear_plt(v7, 16);
  result = *((unsigned __int8*)a1 + 32);
  if (*((_BYTE*)a1 + 32) != 0) {
    v12 = *((_BYTE*)a1 + 36);
    v13 = a1 + 3;
    if (v12 != 0) {
      v14 = v3 + 256;
      v15 = 0;
      v16 = 0;
      v17 = v3 + 270;
      v18 = v3 + 256;
      while (*((_BYTE*)v13 + v15) == 0) {
      LABEL_7:
        if (++v15 >= (unsigned __int64)(unsigned int)result) {
          return result;
        }
      }
      v19 = 32LL * v16;
      v20 = v16;
      v21 = 4LL * v16;
      v22 = 0;
      v23 = (__int16*)(v17 + v19);
      v24 = v18 + v19;
    LABEL_11:
      v25 = *((__int16*)v5 + v20);
      if (v12 >= 8u) {
        v27 = 0;
        v28 = v23;
        do {
          v27 -= 8;
          if (v25 <= *(v28 - 7)) {
            v25 = *(v28 - 7);
          }
          if (v25 <= *(v28 - 6)) {
            v25 = *(v28 - 6);
          }
          if (v25 <= *(v28 - 5)) {
            v25 = *(v28 - 5);
          }
          if (v25 <= *(v28 - 4)) {
            v25 = *(v28 - 4);
          }
          if (v25 <= *(v28 - 3)) {
            v25 = *(v28 - 3);
          }
          if (v25 <= *(v28 - 2)) {
            v25 = *(v28 - 2);
          }
          if (v25 <= *(v28 - 1)) {
            v25 = *(v28 - 1);
          }
          v29 = *v28;
          v28 += 8;
          if (v25 <= v29) {
            v25 = v29;
          }
        } while (-(__int64)(v12 & 0xF8) != v27);
        v26 = -v27;
        if ((v12 & 7) == 0) {
          goto LABEL_37;
        }
      }
      else {
        v26 = 0;
        if ((v12 & 7) == 0) {
        LABEL_37:
          v34 = 0;
          v35 = v21 * *((int*)a1 + 10);
          if (*(_BYTE*)(a1[27] + 1249) != 0) {
            v25 += 3;
          }
          *((_WORD*)v5 + v20) = v25;
          v36 = v4 + v35;
          v37 = v4 + 16 + v35;
          while (1) {
            v38 = v25 - *(__int16*)(v14 + 32 * v20 + 2 * v34);
            if (v38 != 0) {
              v39 = (__int16*)(v10 + 2 * v34);
              v40 = v39[1];
              v41 = *v39;
              if (v41 >= v40) {
                goto LABEL_40;
              }
              v42 = (v40 - v41) & 7LL;
              if (v42 != 0) {
                break;
              }
              v43 = v41;
              if ((unsigned __int64)(v41 - (__int64)v40) <=
                  0xFFFFFFFFFFFFFFF8LL) {
                goto LABEL_49;
              }
            }
          LABEL_40:
            if (++v34 == v12) {
              ++v22;
              ++v20;
              v23 += 16;
              v24 += 32;
              v21 += 4;
              if (v22 >= *((unsigned __int8*)v13 + v15)) {
                result = *((unsigned __int8*)a1 + 32);
                v16 = v20;
                goto LABEL_7;
              }
              goto LABEL_11;
            }
          }
          v43 = v41;
          do {
            --v42;
            *(int*)(v36 + 4 * v43++) >>= v38;
          } while (v42 != 0);
          if ((unsigned __int64)(v41 - (__int64)v40) > 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_40;
          }
        LABEL_49:
          v44 = v40 - v43;
          v45 = (int*)(v37 + 4 * v43);
          do {
            v44 -= 8;
            v46 = *(v45 - 3) >> v38;
            *(v45 - 4) >>= v38;
            *(v45 - 3) = v46;
            v47 = *(v45 - 1) >> v38;
            *(v45 - 2) >>= v38;
            *(v45 - 1) = v47;
            v48 = v45[1] >> v38;
            *v45 >>= v38;
            v45[1] = v48;
            v49 = v45[3] >> v38;
            v45[2] >>= v38;
            v45[3] = v49;
            v45 += 8;
          } while (v44 != 0);
          goto LABEL_40;
        }
      }
      v30 = (__int16*)(v24 + 2 * v26);
      v31 = v12 & 7;
      do {
        v33 = *v30++;
        v32 = v33;
        if (v25 <= v33) {
          v25 = v32;
        }
        --v31;
      } while (v31 != 0);
      goto LABEL_37;
    }
    v50 = 0;
    v51 = 0;
    do {
      if (*((_BYTE*)v13 + v50) != 0) {
        v52 = (__int64)a1 + 2 * v51 + 8;
        v53 = 0;
        do {
          v54 = 2 * v53++;
          v55 = *(_WORD*)(v52 + v54);
          if (*(_BYTE*)(a1[27] + 1249) != 0) {
            v55 += 3;
          }
          *(_WORD*)(v52 + v54) = v55;
        } while ((unsigned int)v53 < *((unsigned __int8*)v13 + v50));
        result = *((unsigned __int8*)a1 + 32);
        v51 += v53;
      }
      ++v50;
    } while (v50 < (unsigned int)result);
  }
  return result;
}

__int64 nn_codec_CBlock_ReadSectionData(unsigned int* a1, __int64 a2,
                                        __int64 a3, char a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 result;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  _BYTE* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;

  v4 = *(_QWORD*)(a2 + 216);
  v7 = 8;
  if (*(_BYTE*)(a2 + 35) != 2) {
    v7 = 0;
  }
  v61 = v4 + 512;
  v8 = *(_QWORD*)(a3 + v7);
  *(_BYTE*)(v4 + 2035) = 0;
  v56 = v8;
  nn_codec_FDKmemclear_plt(v4 + 512, 128);
  if (*(_BYTE*)(a2 + 35) == 2) {
    v10 = 3;
  }
  else {
    v10 = 5;
  }
  if (*(_BYTE*)(a2 + 32) == 0) {
    return 0;
  }
  v59 = *(unsigned __int8*)(a2 + 36);
  if (*(_BYTE*)(a2 + 36) == 0) {
    return 0;
  }
  v62 = 0;
  v11 = 0;
  v53 = v4 + 1264;
  v12 = ~(-1 << v10);
  v60 = a2;
  v55 = *(_QWORD*)((char*)SdkData_e87a50[0] +
                   (unsigned __int64)((__int64*)0xCLL) + 4);
  v58 = (_BYTE*)(v4 + 1776);
  while (2) {
    v13 = 0;
    v52 = v11;
    v57 = 16 * v11;
    v54 = 128 - 16 * v11;
    do {
      v14 = a1[1];
      if ((a4 & 1) == 0) {
        if (v14 <= 4) {
          v16 = nn_codec_FDK_getValidBits_plt(a1 + 2);
          if (31 - a1[1] >= v16) {
            v17 = v16;
          }
          else {
            v17 = 31 - a1[1];
          }
          v18 = *a1 << v17;
          v19 = nn_codec_FDK_get_plt(a1 + 2, v17);
          v20 = a1[1];
          v15 = v18 | v19;
          *a1 = v18 | v19;
          v14 = v20 + v17;
          if (v20 + v17 <= 3) {
            v21 = 0;
            v15 <<= 4 - v14;
            *(_QWORD*)a1 = v15;
            v22 = v15;
          LABEL_21:
            v23 = v22 & v55;
            v24 = v22 & (unsigned __int8)v55;
            goto LABEL_33;
          }
        }
        else {
          v15 = *a1;
        }
        v21 = v14 - 4;
        v22 = v15 >> (v14 - 4);
        a1[1] = v21;
        goto LABEL_21;
      }
      if (v14 <= 5) {
        v25 = nn_codec_FDK_getValidBits_plt(a1 + 2);
        if (31 - a1[1] >= v25) {
          v26 = v25;
        }
        else {
          v26 = 31 - a1[1];
        }
        v27 = *a1 << v26;
        v28 = nn_codec_FDK_get_plt(a1 + 2, v26);
        v29 = a1[1];
        v15 = v27 | v28;
        *a1 = v27 | v28;
        v14 = v29 + v26;
        if (v29 + v26 <= 4) {
          v21 = 0;
          v15 <<= 5 - v14;
          *(_QWORD*)a1 = v15;
          v30 = v15;
          goto LABEL_28;
        }
      }
      else {
        v15 = *a1;
      }
      v21 = v14 - 5;
      v30 = v15 >> (v14 - 5);
      a1[1] = v21;
    LABEL_28:
      v23 = v30 & HIDWORD(v55);
      v24 = v30 & BYTE4(v55);
      v31 = v30 & HIDWORD(v55) & 0xFC;
      if (v24 >= 0xB && v31 != 12) {
        v45 = 0;
        v46 = 1;
        goto LABEL_49;
      }
    LABEL_33:
      v33 = *((_DWORD*)SdkData_e87a50[0] + v10);
      if (v21 > v10) {
        goto LABEL_40;
      }
      v34 = nn_codec_FDK_getValidBits_plt(a1 + 2);
      v35 = 31 - a1[1] >= v34 ? v34 : 31 - a1[1];
      v36 = *a1 << v35;
      v37 = nn_codec_FDK_get_plt(a1 + 2, v35);
      v38 = a1[1];
      v15 = v36 | v37;
      *a1 = v36 | v37;
      v21 = v38 + v35;
      if (v10 <= v21) {
      LABEL_40:
        v39 = v21 - v10;
        a1[1] = v39;
        v46 = (v15 >> v39) & v33;
        if (v46 != v12) {
        LABEL_39:
          v45 = 0;
          goto LABEL_49;
        }
      }
      else {
        v15 <<= v10 - v21;
        v39 = 0;
        *(_QWORD*)a1 = v15;
        v46 = v15 & v33;
        if ((v15 & v33) != v12) {
          goto LABEL_39;
        }
      }
      v45 = 0;
      do {
        while (1) {
          if (v39 <= v10) {
            v40 = nn_codec_FDK_getValidBits_plt(a1 + 2);
            v41 = 31 - a1[1] >= v40 ? v40 : 31 - a1[1];
            v42 = *a1 << v41;
            v43 = nn_codec_FDK_get_plt(a1 + 2, v41);
            v44 = a1[1];
            v15 = v42 | v43;
            *a1 = v42 | v43;
            v39 = v44 + v41;
            if (v10 > v39) {
              break;
            }
          }
          v39 -= v10;
          a1[1] = v39;
          v46 = (v15 >> v39) & v33;
          v45 += v12;
          if (v46 != v12) {
            goto LABEL_49;
          }
        }
        v15 <<= v10 - v39;
        v39 = 0;
        *(_QWORD*)a1 = v15;
        v46 = v15 & v33;
        v45 += v12;
      } while ((v15 & v33) == v12);
    LABEL_49:
      if (v45 + v46 < 1) {
        return 16386;
      }
      v47 = v45 + v46 + v13;
      if ((a4 & 4) != 0) {
        v48 = v60;
        if (v62 > 255) {
          return 16386;
        }
        *(_WORD*)(v53 + 2LL * v62) =
            *(_WORD*)(v56 + 2LL * v47) - *(_WORD*)(v56 + 2LL * v13);
        if (v24 == 12) {
          return 16390;
        }
        ++v62;
        *v58++ = v23;
        ++*(_BYTE*)(*(_QWORD*)(v60 + 216) + 2035LL);
        if (*(_BYTE*)(v60 + 35) == 2) {
        LABEL_52:
          if (v47 > v54) {
            return 16388;
          }
          goto LABEL_58;
        }
      }
      else {
        v48 = v60;
        if (*(_BYTE*)(v60 + 35) == 2) {
          goto LABEL_52;
        }
      }
      if (v47 > 64) {
        return 16388;
      }
    LABEL_58:
      if (v24 == 12 || (v23 & 0xFE) == 0xE &&
                           *(_BYTE*)(*(_QWORD*)(v48 + 216) + 1250LL) == 0) {
        return 16390;
      }
      if (v47 <= v13 + 1) {
        v49 = v13 + 1;
      }
      else {
        v49 = v47;
      }
      memset_plt((void*)(v61 + v57 + v13), (void*)v23, v49 + ~v13 + 1);
      v50 = v13;
      do {
        ++v50;
      } while (v50 < v47);
      v13 = v50;
    } while (v50 < v59);
    result = 0;
    v11 = v52 + 1;
    if (v52 + 1 < (unsigned int)*(unsigned __int8*)(v60 + 32)) {
      continue;
    }
    return result;
  }
}

__int64 nn_codec_CBlock_ReadSpectralData(int* a1, __int64* a2, _QWORD* a3,
                                         char a4)
{
  __int64 v5;
  __int64* v6;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v16;
  unsigned __int8 v17;
  unsigned int v18;
  char* v19;
  char v20;
  unsigned __int8 v21;
  int v22;
  int v23;
  __int16 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  _DWORD* v53;
  __int64 v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  _DWORD* v66;
  __int64 i;
  int v68;
  unsigned int* v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  __int64 result;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int* v77;
  __int64 v78;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  unsigned __int64 v88;
  int v89;
  __int64* v90;
  int v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  unsigned int v97;
  __int16* v98;
  int v99;
  __int64 v100;
  _DWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;

  v5 = a2[27];
  v6 = a2;
  v8 = 1;
  v87 = *a2;
  if (*((_BYTE*)a2 + 35) != 2) {
    v8 = 0;
  }
  v82 = a3[v8];
  v83 = *((unsigned __int8*)a2 + 36);
  nn_codec_FDKmemclear_plt(*a2, 4096);
  v80 = a4;
  if ((a4 & 4) == 0) {
    if (*((_BYTE*)v6 + 32) != 0 && (_DWORD)v83 != 0) {
      v89 = 0;
      v9 = 0;
      v81 = v5 + 512;
      v90 = v6 + 3;
      v11 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                       (unsigned __int64)((__int64*)0x4LL));
      v10 = *(_DWORD*)((char*)SdkData_e87a50[0] +
                       (unsigned __int64)((__int64*)0x4LL) + 4);
      v99 = v10;
      v86 = v6;
      while (1) {
        v13 = 0;
        v88 = v9;
        v14 = v81 + 16 * v9;
        v84 = v14;
        do {
          v16 = *(unsigned __int8*)(v14 + v13);
          v85 = v13;
          if ((v16 & 0xF0) == 0x10) {
            v16 = 11;
            *(_BYTE*)(v14 + v13) = 11;
          }
          else if (v16 <= 0xF && ((1 << v16) & 0xE001) != 0) {
            goto LABEL_13;
          }
          v17 = *((_BYTE*)v90 + v9);
          if (v17 != 0) {
            v18 = 0;
            v97 = v16;
            v19 = (char*)SdkData_e87c20[0] + 16 * v16;
            v20 = v19[9];
            v96 = (__int64*)v19;
            v21 = v19[8];
            v22 = (unsigned __int8)v19[10];
            v23 = ~(-1 << v20);
            v95 = v21 & 7;
            v98 = (__int16*)(v82 + 2 * v13);
            v24 = v98[1];
            v93 = -(__int64)(v21 & 0xF8);
            v102 = v21;
            v103 = 4LL * v21;
            v25 = v89;
          LABEL_20:
            if (*v98 >= v24) {
              goto LABEL_19;
            }
            v26 = *((_DWORD*)v6 + 10);
            v27 = *v98;
            v92 = v18;
            v91 = v25;
            v94 = v87 + 4LL * (int)(v26 * (v18 + v89));
            v28 = 4 * v27 + 4LL * v26 * v25;
            v101 = (_DWORD*)(v87 + 16 + v28);
            v104 = v87 + v28;
          LABEL_23:
            v100 = v27;
            v29 = 0;
            v30 = *v96;
            v31 = a1[1];
            while (2) {
              while (v31 <= 2) {
                v34 = nn_codec_FDK_getValidBits_plt(a1 + 2);
                if (31 - a1[1] >= v34) {
                  v35 = v34;
                }
                else {
                  v35 = 31 - a1[1];
                }
                v36 = *a1 << v35;
                v37 = nn_codec_FDK_get_plt(a1 + 2, v35);
                v38 = a1[1];
                v32 = v36 | v37;
                *a1 = v36 | v37;
                v31 = v38 + v35;
                if (v31 > 1) {
                  goto LABEL_25;
                }
                v39 = v32 << (2 - v31);
                v31 = 0;
                *a1 = v39;
                a1[1] = 0;
                v33 = *(unsigned __int16*)(v30 + 8LL * v29 + 2LL * (v39 & v10));
                v29 = v33 >> 2;
                if ((v33 & 1) != 0) {
                LABEL_32:
                  if ((v33 & 2) != 0) {
                    a1[1] = v31 + 1;
                  }
                  if ((_DWORD)v102 == 0) {
                    goto LABEL_60;
                  }
                  if (v22 != 0) {
                    if ((unsigned int)v102 >= 8) {
                      v53 = v101;
                      v54 = 0;
                      do {
                        v54 -= 8;
                        v55 = v29 >> v20 >> v20;
                        *(v53 - 4) = (v29 & v23) - v22;
                        *(v53 - 3) = ((v29 >> v20) & v23) - v22;
                        v56 = v55 & v23;
                        v57 = v55 >> v20;
                        v58 = v57 & v23;
                        v59 = v57 >> v20;
                        *(v53 - 2) = v56 - v22;
                        *(v53 - 1) = v58 - v22;
                        v60 = v59 & v23;
                        v61 = v59 >> v20;
                        v62 = v61 & v23;
                        v63 = v61 >> v20;
                        *v53 = v60 - v22;
                        v53[1] = v62 - v22;
                        v64 = v63 & v23;
                        v65 = v63 >> v20;
                        v29 = v65 >> v20;
                        v53[2] = v64 - v22;
                        v53[3] = (v65 & v23) - v22;
                        v53 += 8;
                      } while (v93 != v54);
                      v40 = -v54;
                      if (v95 != 0) {
                        goto LABEL_58;
                      }
                    }
                    else {
                      v40 = 0;
                      if (v95 == 0) {
                        goto LABEL_60;
                      }
                    LABEL_58:
                      v66 = (_DWORD*)(v104 + 4 * v40);
                      for (i = v95; i != 0; --i) {
                        v68 = v29 & v23;
                        v29 >>= v20;
                        *v66++ = v68 - v22;
                      }
                    }
                  LABEL_60:
                    if (v97 == 11) {
                      v69 = (unsigned int*)(v94 + 4 * v100);
                      v70 = nn_codec_CBlock_GetEscape_plt(a1, *v69);
                      v71 = v69[1];
                      *v69 = v70;
                      v69[1] = nn_codec_CBlock_GetEscape_plt(a1, v71);
                    }
                    v27 = v100 + v102;
                    v101 = (_DWORD*)((char*)v101 + v103);
                    v104 += v103;
                    if (v100 + v102 < v98[1]) {
                      goto LABEL_23;
                    }
                    v24 = v98[1];
                    v9 = v88;
                    v6 = v86;
                    v18 = v92;
                    v25 = v91;
                    v17 = *((_BYTE*)v90 + v88);
                  LABEL_19:
                    ++v18;
                    ++v25;
                    if (v18 >= v17) {
                      goto LABEL_13;
                    }
                    goto LABEL_20;
                  }
                  v41 = 0;
                  while (2) {
                    if ((v29 & v23) != 0) {
                      v43 = a1[1];
                      if (v43 > 1) {
                        v44 = *a1;
                        goto LABEL_50;
                      }
                      v45 = v11;
                      v46 = nn_codec_FDK_getValidBits_plt(a1 + 2);
                      if (31 - a1[1] >= v46) {
                        v47 = v46;
                      }
                      else {
                        v47 = 31 - a1[1];
                      }
                      v48 = *a1 << v47;
                      v49 = nn_codec_FDK_get_plt(a1 + 2, v47);
                      v50 = a1[1];
                      v44 = v48 | v49;
                      *a1 = v48 | v49;
                      v43 = v50 + v47;
                      if (v43 != 0) {
                        v11 = v45;
                        v10 = v99;
                      LABEL_50:
                        v51 = v43 - 1;
                        v52 = v44 >> v51;
                        a1[1] = v51;
                      }
                      else {
                        v11 = v45;
                        v10 = v99;
                        v52 = 2 * v44;
                        *(_QWORD*)a1 = v52;
                      }
                      if ((v52 & v11) != 0) {
                        v42 = -(v29 & v23);
                      }
                      else {
                        v42 = v29 & v23;
                      }
                    }
                    else {
                      v42 = 0;
                    }
                    v29 >>= v20;
                    *(_DWORD*)(v104 + v41) = v42;
                    v41 += 4;
                    if (v103 == v41) {
                      goto LABEL_60;
                    }
                    continue;
                  }
                }
              }
              v32 = *a1;
            LABEL_25:
              v31 -= 2;
              a1[1] = v31;
              v33 = *(unsigned __int16*)(v30 + 8LL * v29 +
                                         2LL * ((v32 >> v31) & v10));
              v29 = v33 >> 2;
              if ((v33 & 1) != 0) {
                goto LABEL_32;
              }
              continue;
            }
          }
        LABEL_13:
          v14 = v84;
          v13 = v85 + 1;
        } while (v85 + 1 != v83);
        v12 = *((unsigned __int8*)v90 + v9++);
        v89 += v12;
        if (v9 >= *((unsigned __int8*)v6 + 32)) {
          goto LABEL_75;
        }
      }
    }
    goto LABEL_75;
  }
  if (*(_WORD*)(v6[27] + 2032) != 0) {
    v72 = v6[28];
    if ((unsigned int)nn_codec_HcrInit_plt(v72 + 728, v6, a3, a1) != 0) {
      return 16388;
    }
    if ((unsigned int)nn_codec_HcrDecoder_plt(v72 + 728, v6, a3, a1) != 0) {
      nn_codec_HcrMuteErroneousLines_plt(v72 + 728);
    }
    v74 = a1[1];
    v75 = *(__int16*)(v6[27] + 2032);
    v76 = a1[12];
    if (v74 <= v75) {
      v77 = (unsigned int*)(a1 + 2);
      if (v76 == 0) {
        nn_codec_FDK_pushBack_plt(a1 + 2, v74, 0);
        goto LABEL_74;
      }
    }
    else {
      if (v76 == 0) {
        a1[1] = v74 - v75;
        goto LABEL_75;
      }
      v77 = (unsigned int*)(a1 + 2);
    }
    nn_codec_FDK_put_plt(v77, (unsigned int)*a1);
  LABEL_74:
    v78 = (unsigned int)a1[12];
    *(_QWORD*)a1 = 0;
    nn_codec_FDK_pushForward_plt(v77, v75, v78);
  }
LABEL_75:
  result = 0;
  if ((v80 & 0x18) == 0 && *((_BYTE*)v6 + 35) != 2) {
    nn_codec_CPulseData_Apply_plt(v6[27] + 1252, *a3, v87);
    return 0;
  }
  return result;
}

__int64 nn_codec_CBlock_FrequencyToTime(__int64 a1, __int64* a2, _WORD* a3,
                                        signed __int16 a4, int a5)
{
  int v5;
  int v6;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  _WORD* v21;
  int* v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  int* v29;
  _WORD* v30;
  int v31;
  int v32;

  v5 = *((unsigned __int8*)a2 + 35);
  v6 = a4;
  switch (v5) {
  case 1:
    v12 = a4 >> 3;
    break;
  case 2:
    v9 = a4 >> 3;
    v10 = 8;
    v11 = v9;
    v12 = v9;
    goto LABEL_12;
  case 3:
    v9 = a4 >> 3;
    v10 = 1;
    v11 = a4;
    v12 = a4;
    goto LABEL_12;
  default:
    if (*((_BYTE*)a2 + 34) == 2) {
      v13 = (3 * a4) >> 2;
    }
    else {
      v13 = 0;
    }
    v12 = a4 - v13;
    break;
  }
  v10 = 1;
  v9 = a4;
  v11 = a4;
LABEL_12:
  v14 = *a2;
  v15 = *(_QWORD*)a2[28];
  v16 = nn_codec_FDKgetWindowSlope_plt(v9, *((unsigned __int8*)a2 + 34));
  v17 = nn_codec_FDKgetWindowSlope_plt(v12, *((unsigned __int8*)a2 + 34));
  result =
      nn_codec_imdct_block_plt(a1 + 8, v15, v14, a2 + 1, v10, (unsigned int)v6,
                               v11, v16, v9, v17, v12, 0);
  if (v6 < 1) {
    return result;
  }
  v19 = v6 & 3;
  if ((unsigned __int16)a4 < 4u) {
    v20 = 0;
    if ((v6 & 3) == 0) {
      return result;
    }
    goto LABEL_36;
  }
  v21 = a3;
  v22 = (int*)(v15 + 8);
  v23 = 0;
  do {
    v23 -= 4;
    v24 = *(v22 - 2) >> 14;
    if (v24 <= -32768) {
      v24 = -32768;
    }
    if (v24 >= 0x7FFF) {
      LOWORD(v24) = 0x7FFF;
    }
    *v21 = v24;
    v25 = *(v22 - 1) >> 14;
    if (v25 <= -32768) {
      v25 = -32768;
    }
    if (v25 >= 0x7FFF) {
      LOWORD(v25) = 0x7FFF;
    }
    v21[a5] = v25;
    v26 = *v22 >> 14;
    if (v26 <= -32768) {
      v26 = -32768;
    }
    if (v26 >= 0x7FFF) {
      LOWORD(v26) = 0x7FFF;
    }
    v21[2 * a5] = v26;
    v27 = v22[1];
    v22 += 4;
    LODWORD(result) = v27 >> 14;
    if ((int)result <= -32768) {
      LODWORD(result) = -32768;
    }
    if ((int)result >= 0x7FFF) {
      result = 0x7FFF;
    }
    else {
      result = (unsigned int)result;
    }
    v21[3 * a5] = result;
    v21 += 4 * a5;
  } while (-(__int64)(v6 & 0x7FFC) != v23);
  v20 = -v23;
  if ((v6 & 3) != 0) {
  LABEL_36:
    v28 = v20 * a5;
    v29 = (int*)(v15 + 4 * v20);
    v30 = &a3[v28];
    do {
      v31 = *v29++;
      v32 = v31 >> 14;
      if (v31 >> 14 <= -32768) {
        v32 = -32768;
      }
      if (v32 >= 0x7FFF) {
        LOWORD(v32) = 0x7FFF;
      }
      --v19;
      *v30 = v32;
      v30 += a5;
    } while (v19 != 0);
  }
  return result;
}

#pragma GCC visibility pop
