#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
SdkRoutine_745d80_alt1(PSEUDO_X8, __int16*) __asm__("SdkRoutine_745d80");
__int64 SdkRoutine_745d80();
__int64 SdkRoutine_87ac90(_QWORD, _QWORD);
__int64 SdkRoutine_87aca0(_QWORD, _QWORD);
__int64 SdkRoutine_87acb0(_QWORD, _QWORD);
__int64 SdkRoutine_87acc0(_QWORD, _QWORD);
__int64 SdkRoutine_87ace0(_QWORD, _QWORD, float);
__int64 SdkRoutine_87acf0(_QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
bool SdkRoutine_7441e0(__int64**, unsigned int*, unsigned __int64);
extern _UNKNOWN SdkData_ca72b4;
_DWORD* nerd_gillette_internal_otete_jaimev1_GetTanHalfFieldOfView(
    _DWORD* this_, float* a2, float* a3);
bool nerd_gillette_internal_otete_jaimev1_DecodePacketPrefixROK(
    void* this_, unsigned __int64 a2, __int64 a3, const unsigned __int8* a4,
    unsigned __int64* a5, unsigned __int64* a6);
bool nerd_gillette_internal_otete_jaimev1_DecodePacketModeROK(
    int* a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeIntensityROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
bool nerd_gillette_internal_otete_jaimev1_Serialize_744460(float* a1,
                                                           __int64** a2);
bool nerd_gillette_internal_otete_jaimev1_DecodeHandCountROK(
    void* this_, unsigned __int64* a2, const unsigned __int8* a3,
    unsigned __int64* a4, unsigned __int64* a5);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeHandROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
bool nerd_gillette_internal_otete_jaimev1_Serialize_744ac0(__int64 a1,
                                                           __int64** a2);
bool nerd_gillette_internal_otete_jaimev1_DecodeShapeCountROK(
    void* this_, unsigned __int64* a2, const unsigned __int8* a3,
    unsigned __int64* a4, unsigned __int64* a5);
float nerd_gillette_internal_otete_jaimev1_DecodeShapeROK(float* a1, __int64 a2,
                                                          __int64 a3,
                                                          unsigned __int64* a4,
                                                          float* a5);
__int64 nerd_gillette_internal_otete_jaimev1_Serialize_745620(float* a1,
                                                              __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeSilhouetteROK(
    __int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
    unsigned __int64* a6);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeShapeAndSilhouetteROK(
    float* a1, __int64* a2, _QWORD* a3, __int64 a4, __int64 a5, __int64 a6,
    unsigned __int64* a7, float* a8);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeImageROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4, float* a5);
bool nerd_gillette_internal_otete_jaimev1_DecodeHasFullFrameShapeROK(
    void* this_, bool* a2, const unsigned __int8* a3, unsigned __int64* a4,
    unsigned __int64* a5);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeFullFrameShapeROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nerd_gillette_internal_otete_jaimev1_Serialize_746040(unsigned int* a1,
                                                              __int64** a2);
bool nerd_gillette_internal_otete_jaimev1_Serialize_749d80(__int64 a1,
                                                           __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev1_EncodeFullSilhouetteROK(
    __int64* a1, __int16* a2, unsigned __int64 a3, unsigned __int8* a4);
bool nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3);
bool nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteImplROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3,
    __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*));
_DWORD*

nerd_gillette_internal_otete_jaimev1_GetTanHalfFieldOfView(_DWORD* this_,
                                                           float* a2, float* a3)
{

#pragma clang fp contract(off)
  *this_ = 1068149419;
  *a2 = 0x1.0000000000000p+0f;
  return this_;
}

bool nerd_gillette_internal_otete_jaimev1_DecodePacketPrefixROK(
    void* this_, unsigned __int64 a2, __int64 a3, const unsigned __int8* a4,
    unsigned __int64* a5, unsigned __int64* a6)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char v13;
  unsigned __int64 v14;
  char v15;
  int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  char v20;
  unsigned __int64 v21;
  char v22;
  unsigned __int64 v23;
  char v24;

  v6 = 8LL * (_QWORD)a4;
  if (*a5 >= 8 * (__int64)a4) {
    v7 = 8LL * (_QWORD)a4;
  }
  else {
    v7 = *a5;
  }
  v8 = v6 - v7;
  if (v6 - v7 >= a2) {
    if (a2 == 0) {
      v10 = 0;
    LABEL_25:
      *(_DWORD*)this_ = v10;
      *a5 = v7;
      return v8 >= a2;
    }
    v9 = a2 & 3;
    if (a2 < 4) {
      v10 = 0;
    LABEL_20:
      if ((a2 & 3) != 0) {
        do {
          while (v7 < v6) {
            v23 = v7 >> 3;
            v24 = v7++ & 7;
            v10 = (*(unsigned __int8*)(a3 + v23) >> v24) & 1 | (2 * v10);
            if (--v9 == 0) {
              goto LABEL_25;
            }
          }
          v10 *= 2;
          --v9;
        } while (v9 != 0);
      }
      goto LABEL_25;
    }
    v11 = a2 & 0xFFFFFFFFFFFFFFFCLL;
    v10 = 0;
    while (1) {
      if (v7 >= v6) {
        v16 = 0;
      LABEL_13:
        v17 = 0;
        if (v7 >= v6) {
          goto LABEL_14;
        }
      LABEL_18:
        v21 = v7 >> 3;
        v22 = v7++ & 7;
        v18 = 2 * ((*(unsigned __int8*)(a3 + v21) >> v22) & 1);
        if (v7 < v6) {
          goto LABEL_10;
        }
      LABEL_19:
        v11 -= 4LL;
        v10 = v18 | (4 * (v17 | v16 | (4 * v10)));
        if (v11 == 0) {
          goto LABEL_20;
        }
      }
      else {
        v14 = v7 >> 3;
        v15 = v7++ & 7;
        v16 = 2 * ((*(unsigned __int8*)(a3 + v14) >> v15) & 1);
        if (v7 >= v6) {
          goto LABEL_13;
        }
        v19 = v7 >> 3;
        v20 = v7++ & 7;
        v17 = (*(unsigned __int8*)(a3 + v19) >> v20) & 1;
        if (v7 < v6) {
          goto LABEL_18;
        }
      LABEL_14:
        v18 = 0;
        if (v7 >= v6) {
          goto LABEL_19;
        }
      LABEL_10:
        v12 = v7 >> 3;
        v13 = v7++ & 7;
        v11 -= 4LL;
        v10 = (*(unsigned __int8*)(a3 + v12) >> v13) & 1 | v18 |
              (4 * (v17 | v16 | (4 * v10)));
        if (v11 == 0) {
          goto LABEL_20;
        }
      }
    }
  }
  return v8 >= a2;
}

bool nerd_gillette_internal_otete_jaimev1_DecodePacketModeROK(
    int* a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  char v12;

  v4 = 8 * a3;
  if (*a4 >= 8 * a3) {
    v5 = 8 * a3;
  }
  else {
    v5 = *a4;
  }
  v6 = v4 - v5;
  if (v4 - v5 >= 2) {
    if (*a4 >= v4) {
      v9 = 0;
      if (v5 >= v4) {
        goto LABEL_7;
      }
    }
    else {
      v7 = v5 >> 3;
      v8 = v5++ & 7;
      v9 = 2 * ((*(unsigned __int8*)(a2 + v7) >> v8) & 1);
      if (v5 >= v4) {
      LABEL_7:
        v10 = 0;
      LABEL_10:
        *a1 = v10 | v9;
        *a4 = v5;
        return v6 > 1;
      }
    }
    v11 = v5 >> 3;
    v12 = v5++ & 7;
    v10 = (*(unsigned __int8*)(a2 + v11) >> v12) & 1;
    goto LABEL_10;
  }
  return v6 > 1;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeIntensityROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v4 = *a4;
  v5 = 8 * a3;
  v10 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v8 = a2;
  v9 = v5;
  v11 = &v8;
  result = SdkRoutine_87ac90(a1, &v11) & 1;
  *a4 = v9;
  return result;
}

bool nerd_gillette_internal_otete_jaimev1_Serialize_744460(float* a1,
                                                           __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  char v47;
  unsigned __int64 v48;
  char v49;
  unsigned __int64 v50;
  char v51;
  unsigned __int64 v52;
  char v53;
  unsigned __int64 v54;
  char v55;
  unsigned __int64 v56;
  char v57;
  unsigned __int64 v58;
  char v59;
  unsigned __int64 v60;
  char v61;
  unsigned __int64 v62;
  char v63;
  unsigned __int64 v64;
  char v65;
  unsigned __int64 v66;
  char v67;
  unsigned __int64 v68;
  char v69;
  unsigned __int64 v70;
  char v71;
  unsigned __int64 v72;
  char v73;
  unsigned int v74;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  v5 = v4 - v3;
  if (v4 - v3 >= 0x12) {
    v6 = *v2;
    if (v4 <= v3) {
      v9 = 0;
    }
    else {
      v7 = v3 >> 3;
      v8 = (*a2)[1] & 7;
      ++v3;
      LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
      v2[1] = v3;
      v9 = 2 * (((unsigned int)v7 >> v8) & 1);
      if (v3 < v4) {
        v42 = v3 >> 3;
        v43 = v3++ & 7;
        LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
        v2[1] = v3;
        v10 = ((unsigned int)v42 >> v43) & 1;
        if (v3 >= v4) {
        LABEL_5:
          v11 = 0;
          v12 = v10 | v9;
          if (v3 >= v4) {
            goto LABEL_6;
          }
          goto LABEL_24;
        }
      LABEL_23:
        v44 = v3 >> 3;
        v45 = v3++ & 7;
        LODWORD(v44) = *(unsigned __int8*)(v6 + v44);
        v2[1] = v3;
        v11 = 2 * (((unsigned int)v44 >> v45) & 1);
        v12 = v10 | v9;
        if (v3 >= v4) {
        LABEL_6:
          v13 = 0;
          v14 = v11 | (4 * v12);
          if (v3 >= v4) {
            goto LABEL_7;
          }
          goto LABEL_25;
        }
      LABEL_24:
        v46 = v3 >> 3;
        v47 = v3++ & 7;
        LODWORD(v46) = *(unsigned __int8*)(v6 + v46);
        v2[1] = v3;
        v13 = ((unsigned int)v46 >> v47) & 1;
        v14 = v11 | (4 * v12);
        if (v3 >= v4) {
        LABEL_7:
          v15 = 0;
          v16 = v13 | v14;
          if (v3 >= v4) {
            goto LABEL_8;
          }
          goto LABEL_26;
        }
      LABEL_25:
        v48 = v3 >> 3;
        v49 = v3++ & 7;
        LODWORD(v48) = *(unsigned __int8*)(v6 + v48);
        v2[1] = v3;
        v15 = 2 * (((unsigned int)v48 >> v49) & 1);
        v16 = v13 | v14;
        if (v3 >= v4) {
        LABEL_8:
          v17 = 0;
          v18 = v15 | (4 * v16);
          if (v3 >= v4) {
            goto LABEL_9;
          }
          goto LABEL_27;
        }
      LABEL_26:
        v50 = v3 >> 3;
        v51 = v3++ & 7;
        LODWORD(v50) = *(unsigned __int8*)(v6 + v50);
        v2[1] = v3;
        v17 = ((unsigned int)v50 >> v51) & 1;
        v18 = v15 | (4 * v16);
        if (v3 >= v4) {
        LABEL_9:
          v19 = 0;
          v20 = v17 | v18;
          if (v3 >= v4) {
            goto LABEL_10;
          }
          goto LABEL_28;
        }
      LABEL_27:
        v52 = v3 >> 3;
        v53 = v3++ & 7;
        LODWORD(v52) = *(unsigned __int8*)(v6 + v52);
        v2[1] = v3;
        v19 = 2 * (((unsigned int)v52 >> v53) & 1);
        v20 = v17 | v18;
        if (v3 >= v4) {
        LABEL_10:
          v21 = 0;
          v22 = v19 | (4 * v20);
          if (v3 >= v4) {
            goto LABEL_11;
          }
          goto LABEL_29;
        }
      LABEL_28:
        v54 = v3 >> 3;
        v55 = v3++ & 7;
        LODWORD(v54) = *(unsigned __int8*)(v6 + v54);
        v2[1] = v3;
        v21 = ((unsigned int)v54 >> v55) & 1;
        v22 = v19 | (4 * v20);
        if (v3 >= v4) {
        LABEL_11:
          v23 = 0;
          v24 = v21 | v22;
          if (v3 >= v4) {
            goto LABEL_12;
          }
          goto LABEL_30;
        }
      LABEL_29:
        v56 = v3 >> 3;
        v57 = v3++ & 7;
        LODWORD(v56) = *(unsigned __int8*)(v6 + v56);
        v2[1] = v3;
        v23 = 2 * (((unsigned int)v56 >> v57) & 1);
        v24 = v21 | v22;
        if (v3 >= v4) {
        LABEL_12:
          v25 = 0;
          v26 = v23 | (4 * v24);
          if (v3 >= v4) {
            goto LABEL_13;
          }
          goto LABEL_31;
        }
      LABEL_30:
        v58 = v3 >> 3;
        v59 = v3++ & 7;
        LODWORD(v58) = *(unsigned __int8*)(v6 + v58);
        v2[1] = v3;
        v25 = ((unsigned int)v58 >> v59) & 1;
        v26 = v23 | (4 * v24);
        if (v3 >= v4) {
        LABEL_13:
          v27 = 0;
          v28 = v25 | v26;
          if (v3 >= v4) {
            goto LABEL_14;
          }
          goto LABEL_32;
        }
      LABEL_31:
        v60 = v3 >> 3;
        v61 = v3++ & 7;
        LODWORD(v60) = *(unsigned __int8*)(v6 + v60);
        v2[1] = v3;
        v27 = 2 * (((unsigned int)v60 >> v61) & 1);
        v28 = v25 | v26;
        if (v3 >= v4) {
        LABEL_14:
          v29 = 0;
          v30 = v27 | (4 * v28);
          if (v3 >= v4) {
            goto LABEL_15;
          }
          goto LABEL_33;
        }
      LABEL_32:
        v62 = v3 >> 3;
        v63 = v3++ & 7;
        LODWORD(v62) = *(unsigned __int8*)(v6 + v62);
        v2[1] = v3;
        v29 = ((unsigned int)v62 >> v63) & 1;
        v30 = v27 | (4 * v28);
        if (v3 >= v4) {
        LABEL_15:
          v31 = 0;
          v32 = v29 | v30;
          if (v3 >= v4) {
            goto LABEL_16;
          }
          goto LABEL_34;
        }
      LABEL_33:
        v64 = v3 >> 3;
        v65 = v3++ & 7;
        LODWORD(v64) = *(unsigned __int8*)(v6 + v64);
        v2[1] = v3;
        v31 = 2 * (((unsigned int)v64 >> v65) & 1);
        v32 = v29 | v30;
        if (v3 >= v4) {
        LABEL_16:
          v33 = 0;
          v34 = v31 | (4 * v32);
          if (v3 >= v4) {
            goto LABEL_17;
          }
          goto LABEL_35;
        }
      LABEL_34:
        v66 = v3 >> 3;
        v67 = v3++ & 7;
        LODWORD(v66) = *(unsigned __int8*)(v6 + v66);
        v2[1] = v3;
        v33 = ((unsigned int)v66 >> v67) & 1;
        v34 = v31 | (4 * v32);
        if (v3 >= v4) {
        LABEL_17:
          v35 = 0;
          v36 = v33 | v34;
          if (v3 >= v4) {
            goto LABEL_18;
          }
          goto LABEL_36;
        }
      LABEL_35:
        v68 = v3 >> 3;
        v69 = v3++ & 7;
        LODWORD(v68) = *(unsigned __int8*)(v6 + v68);
        v2[1] = v3;
        v35 = 2 * (((unsigned int)v68 >> v69) & 1);
        v36 = v33 | v34;
        if (v3 >= v4) {
        LABEL_18:
          v37 = 0;
          v38 = v35 | (4 * v36);
          if (v3 >= v4) {
            goto LABEL_19;
          }
          goto LABEL_37;
        }
      LABEL_36:
        v70 = v3 >> 3;
        v71 = v3++ & 7;
        LODWORD(v70) = *(unsigned __int8*)(v6 + v70);
        v2[1] = v3;
        v37 = ((unsigned int)v70 >> v71) & 1;
        v38 = v35 | (4 * v36);
        if (v3 >= v4) {
        LABEL_19:
          v39 = 0;
          v40 = v37 | v38;
          if (v3 >= v4) {
          LABEL_20:
            v41 = 0;
          LABEL_39:
            *a1 = (float)((float)((float)(v41 | v39 |
                                          (unsigned __int64)(4 * v40)) *
                                  0.0000038147f) *
                          143900.0f) +
                  100.0f;
            return v5 > 0x11;
          }
        LABEL_38:
          v74 = *(unsigned __int8*)(v6 + (v3 >> 3));
          v2[1] = v3 + 1;
          v41 = (v74 >> (v3 & 7)) & 1;
          goto LABEL_39;
        }
      LABEL_37:
        v72 = v3 >> 3;
        v73 = v3++ & 7;
        LODWORD(v72) = *(unsigned __int8*)(v6 + v72);
        v2[1] = v3;
        v39 = 2 * (((unsigned int)v72 >> v73) & 1);
        v40 = v37 | v38;
        if (v3 >= v4) {
          goto LABEL_20;
        }
        goto LABEL_38;
      }
    }
    v10 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_23;
  }
  return v5 > 0x11;
}

bool nerd_gillette_internal_otete_jaimev1_DecodeHandCountROK(
    void* this_, unsigned __int64* a2, const unsigned __int8* a3,
    unsigned __int64* a4, unsigned __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;

  v5 = *a4;
  v6 = 8LL * (_QWORD)a3;
  if (*a4 >= 8 * (__int64)a3) {
    v7 = 8LL * (_QWORD)a3;
  }
  else {
    v7 = *a4;
  }
  if (v6 > v5) {
    v8 = v7 >> 3;
    v9 = v7++ & 7;
    *(_QWORD*)this_ = (*((unsigned __int8*)a2 + v8) >> v9) & 1;
  }
  *a4 = v7;
  return v6 > v5;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeHandROK(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           unsigned __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  char v8;
  float v9;
  int v10;
  __int64 v11;
  float* v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  __int64* v22;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v23_;

  v4 = *a4;
  v5 = 8 * a3;
  v23_.v25 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v23_.v23 = a2;
  v23_.v24 = v5;
  v22 = &v23_.v23;
  v8 = SdkRoutine_87aca0(a1, &v22);
  if ((v8 & 1) != 0) {
    v9 = (float)(*(float*)(a1 + 4) + -0x1.e000000000000p+7f) *
         0x1.1111120000000p-8f;
    *(float*)a1 =
        (float)(*(float*)a1 + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
    *(float*)(a1 + 4) = v9;
    v10 = *(_DWORD*)(a1 + 12);
    *(float*)(a1 + 8) = *(float*)(a1 + 8) * 0x1.23456a0000000p-16f;
    if (v10 != 0) {
      if (v10 == 1) {
        v11 = 0;
      }
      else {
        v12 = (float*)(a1 + 28);
        v13 = 0;
        do {
          v13 -= 2;
          v14 = (float)(*v12 + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
          *(v12 - 1) = (float)(*(v12 - 1) + -0x1.4000000000000p+8f) *
                       0x1.1111120000000p-8f;
          *v12 = v14;
          v15 = (float)(*(v12 - 2) + -0x1.e000000000000p+7f) *
                0x1.1111120000000p-8f;
          *(v12 - 3) = (float)(*(v12 - 3) + -0x1.4000000000000p+8f) *
                       0x1.1111120000000p-8f;
          *(v12 - 2) = v15;
          v16 =
              (float)(v12[7] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
          v12[6] =
              (float)(v12[6] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
          v12[7] = v16;
          v17 =
              (float)(v12[5] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
          v12[4] =
              (float)(v12[4] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
          v12[5] = v17;
          v12 += 14;
        } while (-(__int64)(v10 & 0xFFFFFFFE) != v13);
        v11 = -v13;
        if ((v10 & 1) == 0) {
          goto LABEL_11;
        }
      }
      v18 = (float*)(a1 + 16 + 28 * v11);
      v19 = (float)(v18[3] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
      v18[2] = (float)(v18[2] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
      v18[3] = v19;
      v20 = (float)(v18[1] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
      *v18 = (float)(*v18 + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
      v18[1] = v20;
    }
  LABEL_11:
    *a4 = v23_.v24;
  }
  return v8 & 1;
}

bool nerd_gillette_internal_otete_jaimev1_Serialize_744ac0(__int64 a1,
                                                           __int64** a2)
{
  __int64* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned int v42;
  __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned __int64 v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned __int64 v75;
  char v76;
  unsigned int v77;
  __int64* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  char v116;
  unsigned __int64 v117;
  char v118;
  unsigned __int64 v119;
  char v120;
  unsigned __int64 v121;
  char v122;
  unsigned __int64 v123;
  char v124;
  unsigned __int64 v125;
  char v126;
  unsigned __int64 v127;
  char v128;
  unsigned __int64 v129;
  char v130;
  unsigned __int64 v131;
  char v132;
  unsigned __int64 v133;
  char v134;
  unsigned __int64 v135;
  char v136;
  unsigned __int64 v137;
  char v138;
  unsigned __int64 v139;
  char v140;
  unsigned int v141;
  __int64* v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  int v151;
  int v152;
  bool v153;
  __int64 v154;
  __int64 v155;
  char v156;
  unsigned __int64 v158;
  char v159;
  unsigned __int64 v160;
  char v161;
  unsigned int v162;
  unsigned int v163;

  v2 = *a2;
  v4 = (*a2)[1];
  v5 = (*a2)[2];
  if (v5 - v4 < 0xA) {
    goto LABEL_83;
  }
  v6 = *v2;
  if (v5 <= v4) {
    v9 = 0;
  LABEL_4:
    v10 = 0;
    if (v4 >= v5) {
      goto LABEL_5;
    }
    goto LABEL_15;
  }
  v7 = v4 >> 3;
  v8 = (*a2)[1] & 7;
  ++v4;
  LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
  v2[1] = v4;
  v9 = 2 * (((unsigned int)v7 >> v8) & 1);
  if (v4 >= v5) {
    goto LABEL_4;
  }
  v26 = v4 >> 3;
  v27 = v4++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v6 + v26);
  v2[1] = v4;
  v10 = ((unsigned int)v26 >> v27) & 1;
  if (v4 >= v5) {
  LABEL_5:
    v11 = 0;
    v12 = v10 | v9;
    if (v4 >= v5) {
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_15:
  v28 = v4 >> 3;
  v29 = v4++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v6 + v28);
  v2[1] = v4;
  v11 = 2 * (((unsigned int)v28 >> v29) & 1);
  v12 = v10 | v9;
  if (v4 >= v5) {
  LABEL_6:
    v13 = 0;
    v14 = v11 | (4 * v12);
    if (v4 >= v5) {
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_16:
  v30 = v4 >> 3;
  v31 = v4++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v6 + v30);
  v2[1] = v4;
  v13 = ((unsigned int)v30 >> v31) & 1;
  v14 = v11 | (4 * v12);
  if (v4 >= v5) {
  LABEL_7:
    v15 = 0;
    v16 = v13 | v14;
    if (v4 >= v5) {
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_17:
  v32 = v4 >> 3;
  v33 = v4++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v6 + v32);
  v2[1] = v4;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v13 | v14;
  if (v4 >= v5) {
  LABEL_8:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v4 >= v5) {
      goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_18:
  v34 = v4 >> 3;
  v35 = v4++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v6 + v34);
  v2[1] = v4;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v4 >= v5) {
  LABEL_9:
    v19 = 0;
    v20 = v17 | v18;
    if (v4 >= v5) {
      goto LABEL_10;
    }
    goto LABEL_20;
  }
LABEL_19:
  v36 = v4 >> 3;
  v37 = v4++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v6 + v36);
  v2[1] = v4;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v17 | v18;
  if (v4 >= v5) {
  LABEL_10:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v4 >= v5) {
      goto LABEL_11;
    }
  LABEL_21:
    v40 = v4 >> 3;
    v41 = v4++ & 7;
    LODWORD(v40) = *(unsigned __int8*)(v6 + v40);
    v2[1] = v4;
    v23 = 2 * (((unsigned int)v40 >> v41) & 1);
    v24 = v21 | v22;
    if (v4 >= v5) {
      goto LABEL_12;
    }
    goto LABEL_22;
  }
LABEL_20:
  v38 = v4 >> 3;
  v39 = v4++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v6 + v38);
  v2[1] = v4;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v4 < v5) {
    goto LABEL_21;
  }
LABEL_11:
  v23 = 0;
  v24 = v21 | v22;
  if (v4 >= v5) {
  LABEL_12:
    v25 = 0;
    goto LABEL_23;
  }
LABEL_22:
  v42 = *(unsigned __int8*)(v6 + (v4 >> 3));
  v2[1] = v4 + 1;
  v25 = (v42 >> (v4 & 7)) & 1;
LABEL_23:
  *(float*)a1 =
      (float)((float)((float)(v25 | v23 | (unsigned __int64)(4 * v24)) *
                      0x1.0040100000000p-10f) *
              0x1.0000000000000p+10f) +
      0x0.0p+0f;
  v43 = *a2;
  v44 = (*a2)[1];
  v45 = (*a2)[2];
  if (v45 - v44 < 9) {
    goto LABEL_83;
  }
  v46 = *v43;
  if (v45 <= v44) {
    v49 = 0;
  LABEL_26:
    v50 = 0;
    if (v44 >= v45) {
      goto LABEL_27;
    }
    goto LABEL_36;
  }
  v47 = v44 >> 3;
  v48 = (*a2)[1] & 7;
  ++v44;
  LODWORD(v47) = *(unsigned __int8*)(v46 + v47);
  v43[1] = v44;
  v49 = 2 * (((unsigned int)v47 >> v48) & 1);
  if (v44 >= v45) {
    goto LABEL_26;
  }
  v63 = v44 >> 3;
  v64 = v44++ & 7;
  LODWORD(v63) = *(unsigned __int8*)(v46 + v63);
  v43[1] = v44;
  v50 = ((unsigned int)v63 >> v64) & 1;
  if (v44 >= v45) {
  LABEL_27:
    v51 = 0;
    v52 = v50 | v49;
    if (v44 >= v45) {
      goto LABEL_28;
    }
    goto LABEL_37;
  }
LABEL_36:
  v65 = v44 >> 3;
  v66 = v44++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v46 + v65);
  v43[1] = v44;
  v51 = 2 * (((unsigned int)v65 >> v66) & 1);
  v52 = v50 | v49;
  if (v44 >= v45) {
  LABEL_28:
    v53 = 0;
    v54 = v51 | (4 * v52);
    if (v44 >= v45) {
      goto LABEL_29;
    }
    goto LABEL_38;
  }
LABEL_37:
  v67 = v44 >> 3;
  v68 = v44++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v46 + v67);
  v43[1] = v44;
  v53 = ((unsigned int)v67 >> v68) & 1;
  v54 = v51 | (4 * v52);
  if (v44 >= v45) {
  LABEL_29:
    v55 = 0;
    v56 = v53 | v54;
    if (v44 >= v45) {
      goto LABEL_30;
    }
    goto LABEL_39;
  }
LABEL_38:
  v69 = v44 >> 3;
  v70 = v44++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v46 + v69);
  v43[1] = v44;
  v55 = 2 * (((unsigned int)v69 >> v70) & 1);
  v56 = v53 | v54;
  if (v44 >= v45) {
  LABEL_30:
    v57 = 0;
    v58 = v55 | (4 * v56);
    if (v44 >= v45) {
      goto LABEL_31;
    }
    goto LABEL_40;
  }
LABEL_39:
  v71 = v44 >> 3;
  v72 = v44++ & 7;
  LODWORD(v71) = *(unsigned __int8*)(v46 + v71);
  v43[1] = v44;
  v57 = ((unsigned int)v71 >> v72) & 1;
  v58 = v55 | (4 * v56);
  if (v44 >= v45) {
  LABEL_31:
    v59 = 0;
    v60 = v57 | v58;
    if (v44 >= v45) {
      goto LABEL_32;
    }
  LABEL_41:
    v75 = v44 >> 3;
    v76 = v44++ & 7;
    LODWORD(v75) = *(unsigned __int8*)(v46 + v75);
    v43[1] = v44;
    v61 = ((unsigned int)v75 >> v76) & 1 | v59 | (4 * v60);
    if (v44 >= v45) {
      goto LABEL_33;
    }
    goto LABEL_42;
  }
LABEL_40:
  v73 = v44 >> 3;
  v74 = v44++ & 7;
  LODWORD(v73) = *(unsigned __int8*)(v46 + v73);
  v43[1] = v44;
  v59 = 2 * (((unsigned int)v73 >> v74) & 1);
  v60 = v57 | v58;
  if (v44 < v45) {
    goto LABEL_41;
  }
LABEL_32:
  v61 = v59 | (4 * v60);
  if (v44 >= v45) {
  LABEL_33:
    v62 = 0;
    goto LABEL_43;
  }
LABEL_42:
  v77 = *(unsigned __int8*)(v46 + (v44 >> 3));
  v43[1] = v44 + 1;
  v62 = (v77 >> (v44 & 7)) & 1;
LABEL_43:
  *(float*)(a1 + 4) =
      (float)((float)((float)(v62 | (unsigned __int64)(2 * v61)) *
                      0x1.0080400000000p-9f) *
              0x1.0000000000000p+9f) +
      0x0.0p+0f;
  v78 = *a2;
  v79 = (*a2)[1];
  v80 = (*a2)[2];
  if (v80 - v79 < 0x10) {
    goto LABEL_83;
  }
  v81 = *v78;
  if (v80 <= v79) {
    v84 = 0;
  LABEL_46:
    v85 = 0;
    if (v79 >= v80) {
      goto LABEL_47;
    }
    goto LABEL_63;
  }
  v82 = v79 >> 3;
  v83 = (*a2)[1] & 7;
  ++v79;
  LODWORD(v82) = *(unsigned __int8*)(v81 + v82);
  v78[1] = v79;
  v84 = 2 * (((unsigned int)v82 >> v83) & 1);
  if (v79 >= v80) {
    goto LABEL_46;
  }
  v113 = v79 >> 3;
  v114 = v79++ & 7;
  LODWORD(v113) = *(unsigned __int8*)(v81 + v113);
  v78[1] = v79;
  v85 = ((unsigned int)v113 >> v114) & 1;
  if (v79 >= v80) {
  LABEL_47:
    v86 = 0;
    v87 = v85 | v84;
    if (v79 >= v80) {
      goto LABEL_48;
    }
    goto LABEL_64;
  }
LABEL_63:
  v115 = v79 >> 3;
  v116 = v79++ & 7;
  LODWORD(v115) = *(unsigned __int8*)(v81 + v115);
  v78[1] = v79;
  v86 = 2 * (((unsigned int)v115 >> v116) & 1);
  v87 = v85 | v84;
  if (v79 >= v80) {
  LABEL_48:
    v88 = 0;
    v89 = v86 | (4 * v87);
    if (v79 >= v80) {
      goto LABEL_49;
    }
    goto LABEL_65;
  }
LABEL_64:
  v117 = v79 >> 3;
  v118 = v79++ & 7;
  LODWORD(v117) = *(unsigned __int8*)(v81 + v117);
  v78[1] = v79;
  v88 = ((unsigned int)v117 >> v118) & 1;
  v89 = v86 | (4 * v87);
  if (v79 >= v80) {
  LABEL_49:
    v90 = 0;
    v91 = v88 | v89;
    if (v79 >= v80) {
      goto LABEL_50;
    }
    goto LABEL_66;
  }
LABEL_65:
  v119 = v79 >> 3;
  v120 = v79++ & 7;
  LODWORD(v119) = *(unsigned __int8*)(v81 + v119);
  v78[1] = v79;
  v90 = 2 * (((unsigned int)v119 >> v120) & 1);
  v91 = v88 | v89;
  if (v79 >= v80) {
  LABEL_50:
    v92 = 0;
    v93 = v90 | (4 * v91);
    if (v79 >= v80) {
      goto LABEL_51;
    }
    goto LABEL_67;
  }
LABEL_66:
  v121 = v79 >> 3;
  v122 = v79++ & 7;
  LODWORD(v121) = *(unsigned __int8*)(v81 + v121);
  v78[1] = v79;
  v92 = ((unsigned int)v121 >> v122) & 1;
  v93 = v90 | (4 * v91);
  if (v79 >= v80) {
  LABEL_51:
    v94 = 0;
    v95 = v92 | v93;
    if (v79 >= v80) {
      goto LABEL_52;
    }
    goto LABEL_68;
  }
LABEL_67:
  v123 = v79 >> 3;
  v124 = v79++ & 7;
  LODWORD(v123) = *(unsigned __int8*)(v81 + v123);
  v78[1] = v79;
  v94 = 2 * (((unsigned int)v123 >> v124) & 1);
  v95 = v92 | v93;
  if (v79 >= v80) {
  LABEL_52:
    v96 = 0;
    v97 = v94 | (4 * v95);
    if (v79 >= v80) {
      goto LABEL_53;
    }
    goto LABEL_69;
  }
LABEL_68:
  v125 = v79 >> 3;
  v126 = v79++ & 7;
  LODWORD(v125) = *(unsigned __int8*)(v81 + v125);
  v78[1] = v79;
  v96 = ((unsigned int)v125 >> v126) & 1;
  v97 = v94 | (4 * v95);
  if (v79 >= v80) {
  LABEL_53:
    v98 = 0;
    v99 = v96 | v97;
    if (v79 >= v80) {
      goto LABEL_54;
    }
    goto LABEL_70;
  }
LABEL_69:
  v127 = v79 >> 3;
  v128 = v79++ & 7;
  LODWORD(v127) = *(unsigned __int8*)(v81 + v127);
  v78[1] = v79;
  v98 = 2 * (((unsigned int)v127 >> v128) & 1);
  v99 = v96 | v97;
  if (v79 >= v80) {
  LABEL_54:
    v100 = 0;
    v101 = v98 | (4 * v99);
    if (v79 >= v80) {
      goto LABEL_55;
    }
    goto LABEL_71;
  }
LABEL_70:
  v129 = v79 >> 3;
  v130 = v79++ & 7;
  LODWORD(v129) = *(unsigned __int8*)(v81 + v129);
  v78[1] = v79;
  v100 = ((unsigned int)v129 >> v130) & 1;
  v101 = v98 | (4 * v99);
  if (v79 >= v80) {
  LABEL_55:
    v102 = 0;
    v103 = v100 | v101;
    if (v79 >= v80) {
      goto LABEL_56;
    }
    goto LABEL_72;
  }
LABEL_71:
  v131 = v79 >> 3;
  v132 = v79++ & 7;
  LODWORD(v131) = *(unsigned __int8*)(v81 + v131);
  v78[1] = v79;
  v102 = 2 * (((unsigned int)v131 >> v132) & 1);
  v103 = v100 | v101;
  if (v79 >= v80) {
  LABEL_56:
    v104 = 0;
    v105 = v102 | (4 * v103);
    if (v79 >= v80) {
      goto LABEL_57;
    }
    goto LABEL_73;
  }
LABEL_72:
  v133 = v79 >> 3;
  v134 = v79++ & 7;
  LODWORD(v133) = *(unsigned __int8*)(v81 + v133);
  v78[1] = v79;
  v104 = ((unsigned int)v133 >> v134) & 1;
  v105 = v102 | (4 * v103);
  if (v79 >= v80) {
  LABEL_57:
    v106 = 0;
    v107 = v104 | v105;
    if (v79 >= v80) {
      goto LABEL_58;
    }
    goto LABEL_74;
  }
LABEL_73:
  v135 = v79 >> 3;
  v136 = v79++ & 7;
  LODWORD(v135) = *(unsigned __int8*)(v81 + v135);
  v78[1] = v79;
  v106 = 2 * (((unsigned int)v135 >> v136) & 1);
  v107 = v104 | v105;
  if (v79 >= v80) {
  LABEL_58:
    v108 = 0;
    v109 = v106 | (4 * v107);
    if (v79 >= v80) {
      goto LABEL_59;
    }
  LABEL_75:
    v139 = v79 >> 3;
    v140 = v79++ & 7;
    LODWORD(v139) = *(unsigned __int8*)(v81 + v139);
    v78[1] = v79;
    v110 = 2 * (((unsigned int)v139 >> v140) & 1);
    v111 = v108 | v109;
    if (v79 >= v80) {
      goto LABEL_60;
    }
    goto LABEL_76;
  }
LABEL_74:
  v137 = v79 >> 3;
  v138 = v79++ & 7;
  LODWORD(v137) = *(unsigned __int8*)(v81 + v137);
  v78[1] = v79;
  v108 = ((unsigned int)v137 >> v138) & 1;
  v109 = v106 | (4 * v107);
  if (v79 < v80) {
    goto LABEL_75;
  }
LABEL_59:
  v110 = 0;
  v111 = v108 | v109;
  if (v79 >= v80) {
  LABEL_60:
    v112 = 0;
    goto LABEL_77;
  }
LABEL_76:
  v141 = *(unsigned __int8*)(v81 + (v79 >> 3));
  v78[1] = v79 + 1;
  v112 = (v141 >> (v79 & 7)) & 1;
LABEL_77:
  *(float*)(a1 + 8) =
      (float)((float)((float)(v112 | v110 | (unsigned __int64)(4 * v111)) *
                      0x1.0001000000000p-16f) *
              0x1.2c00000000000p+18f) +
      0x0.0p+0f;
  v142 = *a2;
  v143 = (*a2)[1];
  v144 = (*a2)[2];
  if (v144 - v143 >= 4) {
    v145 = *v142;
    if (v144 <= v143) {
      v148 = 0;
    }
    else {
      v146 = v143 >> 3;
      v147 = (*a2)[1] & 7;
      ++v143;
      LODWORD(v146) = *(unsigned __int8*)(v145 + v146);
      v142[1] = v143;
      v148 = 2 * (((unsigned int)v146 >> v147) & 1);
      if (v143 < v144) {
        v158 = v143 >> 3;
        v159 = v143++ & 7;
        LODWORD(v158) = *(unsigned __int8*)(v145 + v158);
        v142[1] = v143;
        v149 = ((unsigned int)v158 >> v159) & 1;
        if (v143 >= v144) {
        LABEL_81:
          v150 = 0;
          v151 = v149 | v148;
          if (v143 >= v144) {
          LABEL_82:
            v152 = 0;
            goto LABEL_93;
          }
        LABEL_92:
          v162 = *(unsigned __int8*)(v145 + (v143 >> 3));
          v142[1] = v143 + 1;
          v152 = (v162 >> (v143 & 7)) & 1;
        LABEL_93:
          v163 = v152 | v150 | (4 * v151);
          *(_DWORD*)(a1 + 12) = v163;
          v153 = v163 < 0xB;
          v154 = *(unsigned int*)(a1 + 12);
          if ((_DWORD)v154 == 0) {
            return v153;
          }
          goto LABEL_84;
        }
      LABEL_91:
        v160 = v143 >> 3;
        v161 = v143++ & 7;
        LODWORD(v160) = *(unsigned __int8*)(v145 + v160);
        v142[1] = v143;
        v150 = 2 * (((unsigned int)v160 >> v161) & 1);
        v151 = v149 | v148;
        if (v143 >= v144) {
          goto LABEL_82;
        }
        goto LABEL_92;
      }
    }
    v149 = 0;
    if (v143 >= v144) {
      goto LABEL_81;
    }
    goto LABEL_91;
  }
LABEL_83:
  v153 = false;
  v154 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v154 == 0) {
    return v153;
  }
LABEL_84:
  v155 = a1 + 16;
  v156 = v153;
  do {
    while ((v156 & 1) != 0) {
      v156 = SdkRoutine_87acb0(v155, a2);
      --v154;
      v155 += 28;
      if (v154 == 0) {
        return v156 & 1;
      }
    }
    v156 = 0;
    --v154;
    v155 += 28;
  } while (v154 != 0);
  return v156 & 1;
}

bool nerd_gillette_internal_otete_jaimev1_DecodeShapeCountROK(
    void* this_, unsigned __int64* a2, const unsigned __int8* a3,
    unsigned __int64* a4, unsigned __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char v16;
  unsigned __int64 v17;
  char v18;
  unsigned __int64 v19;
  char v20;

  v5 = 8LL * (_QWORD)a3;
  if (*a4 >= 8 * (__int64)a3) {
    v6 = 8LL * (_QWORD)a3;
  }
  else {
    v6 = *a4;
  }
  v7 = v5 - v6;
  if (v5 - v6 >= 4) {
    if (*a4 >= v5) {
      v10 = 0;
      if (v6 >= v5) {
      LABEL_7:
        v11 = 0;
        if (v6 >= v5) {
          goto LABEL_8;
        }
        goto LABEL_12;
      }
    }
    else {
      v8 = v6 >> 3;
      v9 = v6++ & 7;
      v10 = 2 * ((*((unsigned __int8*)a2 + v8) >> v9) & 1u);
      if (v6 >= v5) {
        goto LABEL_7;
      }
    }
    v15 = v6 >> 3;
    v16 = v6++ & 7;
    v11 = (*((unsigned __int8*)a2 + v15) >> v16) & 1;
    if (v6 >= v5) {
    LABEL_8:
      v12 = 0;
      v13 = v11 | v10;
      if (v6 >= v5) {
      LABEL_9:
        v14 = 0;
      LABEL_14:
        *(_QWORD*)this_ = v14 | v12 | (4 * v13);
        goto LABEL_15;
      }
    LABEL_13:
      v19 = v6 >> 3;
      v20 = v6++ & 7;
      v14 = (*((unsigned __int8*)a2 + v19) >> v20) & 1;
      goto LABEL_14;
    }
  LABEL_12:
    v17 = v6 >> 3;
    v18 = v6++ & 7;
    v12 = 2 * ((*((unsigned __int8*)a2 + v17) >> v18) & 1u);
    v13 = v11 | v10;
    if (v6 >= v5) {
      goto LABEL_9;
    }
    goto LABEL_13;
  }
LABEL_15:
  *a4 = v6;
  return v7 > 3;
}

float nerd_gillette_internal_otete_jaimev1_DecodeShapeROK(float* a1, __int64 a2,
                                                          __int64 a3,
                                                          unsigned __int64* a4,
                                                          float* a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  __int64 v6;
  float v10;
  float v11;
  unsigned __int64 v12;
  float result;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v14_;
  __int64* v17;

  v5 = *a4;
  v6 = 8 * a3;
  v14_.v16 = 8 * a3;
  if (v5 < 8 * a3) {
    v6 = v5;
  }
  v14_.v14 = a2;
  v14_.v15 = v6;
  v17 = &v14_.v14;
  SdkRoutine_87acc0(a1, &v17);
  v10 = *a1;
  v11 = (float)(a1[2] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
  a1[1] = (float)(a1[1] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
  a1[2] = v11;
  v12 = v14_.v15;
  result = v10 * (float)(0x1.8e70000000000p+14f / *a5);
  *a1 = result;
  *a4 = v12;
  return result;
}

__int64 nerd_gillette_internal_otete_jaimev1_Serialize_745620(float* a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  char v30;
  unsigned __int64 v31;
  char v32;
  unsigned __int64 v33;
  char v34;
  unsigned __int64 v35;
  char v36;
  unsigned __int64 v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  unsigned int v41;
  __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned __int64 v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned __int64 v75;
  char v76;
  unsigned __int64 v77;
  char v78;
  unsigned __int64 v79;
  char v80;
  unsigned int v81;
  __int64* v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  char v116;
  unsigned int v117;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 0xA) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    v8 = 0;
  LABEL_4:
    v9 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_15;
  }
  v6 = v3 >> 3;
  v7 = (*a2)[1] & 7;
  ++v3;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * (((unsigned int)v6 >> v7) & 1);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v25 = v3 >> 3;
  v26 = v3++ & 7;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  v2[1] = v3;
  v9 = ((unsigned int)v25 >> v26) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_15:
  v27 = v3 >> 3;
  v28 = v3++ & 7;
  LODWORD(v27) = *(unsigned __int8*)(v5 + v27);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v27 >> v28) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_16:
  v29 = v3 >> 3;
  v30 = v3++ & 7;
  LODWORD(v29) = *(unsigned __int8*)(v5 + v29);
  v2[1] = v3;
  v12 = ((unsigned int)v29 >> v30) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_17:
  v31 = v3 >> 3;
  v32 = v3++ & 7;
  LODWORD(v31) = *(unsigned __int8*)(v5 + v31);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v31 >> v32) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_18:
  v33 = v3 >> 3;
  v34 = v3++ & 7;
  LODWORD(v33) = *(unsigned __int8*)(v5 + v33);
  v2[1] = v3;
  v16 = ((unsigned int)v33 >> v34) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_20;
  }
LABEL_19:
  v35 = v3 >> 3;
  v36 = v3++ & 7;
  LODWORD(v35) = *(unsigned __int8*)(v5 + v35);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v35 >> v36) & 1);
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    v20 = 0;
    v21 = v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
  LABEL_21:
    v39 = v3 >> 3;
    v40 = v3++ & 7;
    LODWORD(v39) = *(unsigned __int8*)(v5 + v39);
    v2[1] = v3;
    v22 = 2 * (((unsigned int)v39 >> v40) & 1);
    v23 = v20 | v21;
    if (v3 >= v4) {
      goto LABEL_12;
    }
    goto LABEL_22;
  }
LABEL_20:
  v37 = v3 >> 3;
  v38 = v3++ & 7;
  LODWORD(v37) = *(unsigned __int8*)(v5 + v37);
  v2[1] = v3;
  v20 = ((unsigned int)v37 >> v38) & 1;
  v21 = v18 | (4 * v19);
  if (v3 < v4) {
    goto LABEL_21;
  }
LABEL_11:
  v22 = 0;
  v23 = v20 | v21;
  if (v3 >= v4) {
  LABEL_12:
    v24 = 0;
    goto LABEL_23;
  }
LABEL_22:
  v41 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v24 = (v41 >> (v3 & 7)) & 1;
LABEL_23:
  *a1 = (float)((float)((float)(v24 | v22 | (unsigned __int64)(4 * v23)) *
                        0x1.0040100000000p-10f) *
                0x1.fe00000000000p+7f) +
        0x0.0p+0f;
  v42 = *a2;
  v43 = (*a2)[1];
  v44 = (*a2)[2];
  if (v44 - v43 < 0xA) {
    return 0;
  }
  v45 = *v42;
  if (v44 <= v43) {
    v48 = 0;
  LABEL_26:
    v49 = 0;
    if (v43 >= v44) {
      goto LABEL_27;
    }
    goto LABEL_37;
  }
  v46 = v43 >> 3;
  v47 = (*a2)[1] & 7;
  ++v43;
  LODWORD(v46) = *(unsigned __int8*)(v45 + v46);
  v42[1] = v43;
  v48 = 2 * (((unsigned int)v46 >> v47) & 1);
  if (v43 >= v44) {
    goto LABEL_26;
  }
  v65 = v43 >> 3;
  v66 = v43++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v45 + v65);
  v42[1] = v43;
  v49 = ((unsigned int)v65 >> v66) & 1;
  if (v43 >= v44) {
  LABEL_27:
    v50 = 0;
    v51 = v49 | v48;
    if (v43 >= v44) {
      goto LABEL_28;
    }
    goto LABEL_38;
  }
LABEL_37:
  v67 = v43 >> 3;
  v68 = v43++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v45 + v67);
  v42[1] = v43;
  v50 = 2 * (((unsigned int)v67 >> v68) & 1);
  v51 = v49 | v48;
  if (v43 >= v44) {
  LABEL_28:
    v52 = 0;
    v53 = v50 | (4 * v51);
    if (v43 >= v44) {
      goto LABEL_29;
    }
    goto LABEL_39;
  }
LABEL_38:
  v69 = v43 >> 3;
  v70 = v43++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v45 + v69);
  v42[1] = v43;
  v52 = ((unsigned int)v69 >> v70) & 1;
  v53 = v50 | (4 * v51);
  if (v43 >= v44) {
  LABEL_29:
    v54 = 0;
    v55 = v52 | v53;
    if (v43 >= v44) {
      goto LABEL_30;
    }
    goto LABEL_40;
  }
LABEL_39:
  v71 = v43 >> 3;
  v72 = v43++ & 7;
  LODWORD(v71) = *(unsigned __int8*)(v45 + v71);
  v42[1] = v43;
  v54 = 2 * (((unsigned int)v71 >> v72) & 1);
  v55 = v52 | v53;
  if (v43 >= v44) {
  LABEL_30:
    v56 = 0;
    v57 = v54 | (4 * v55);
    if (v43 >= v44) {
      goto LABEL_31;
    }
    goto LABEL_41;
  }
LABEL_40:
  v73 = v43 >> 3;
  v74 = v43++ & 7;
  LODWORD(v73) = *(unsigned __int8*)(v45 + v73);
  v42[1] = v43;
  v56 = ((unsigned int)v73 >> v74) & 1;
  v57 = v54 | (4 * v55);
  if (v43 >= v44) {
  LABEL_31:
    v58 = 0;
    v59 = v56 | v57;
    if (v43 >= v44) {
      goto LABEL_32;
    }
    goto LABEL_42;
  }
LABEL_41:
  v75 = v43 >> 3;
  v76 = v43++ & 7;
  LODWORD(v75) = *(unsigned __int8*)(v45 + v75);
  v42[1] = v43;
  v58 = 2 * (((unsigned int)v75 >> v76) & 1);
  v59 = v56 | v57;
  if (v43 >= v44) {
  LABEL_32:
    v60 = 0;
    v61 = v58 | (4 * v59);
    if (v43 >= v44) {
      goto LABEL_33;
    }
  LABEL_43:
    v79 = v43 >> 3;
    v80 = v43++ & 7;
    LODWORD(v79) = *(unsigned __int8*)(v45 + v79);
    v42[1] = v43;
    v62 = 2 * (((unsigned int)v79 >> v80) & 1);
    v63 = v60 | v61;
    if (v43 >= v44) {
      goto LABEL_34;
    }
    goto LABEL_44;
  }
LABEL_42:
  v77 = v43 >> 3;
  v78 = v43++ & 7;
  LODWORD(v77) = *(unsigned __int8*)(v45 + v77);
  v42[1] = v43;
  v60 = ((unsigned int)v77 >> v78) & 1;
  v61 = v58 | (4 * v59);
  if (v43 < v44) {
    goto LABEL_43;
  }
LABEL_33:
  v62 = 0;
  v63 = v60 | v61;
  if (v43 >= v44) {
  LABEL_34:
    v64 = 0;
    goto LABEL_45;
  }
LABEL_44:
  v81 = *(unsigned __int8*)(v45 + (v43 >> 3));
  v42[1] = v43 + 1;
  v64 = (v81 >> (v43 & 7)) & 1;
LABEL_45:
  a1[1] = (float)((float)((float)(v64 | v62 | (unsigned __int64)(4 * v63)) *
                          0x1.0040100000000p-10f) *
                  0x1.0000000000000p+10f) +
          0x0.0p+0f;
  v82 = *a2;
  v83 = (*a2)[1];
  v84 = (*a2)[2];
  if (v84 - v83 < 9) {
    return 0;
  }
  v85 = *v82;
  if (v84 <= v83) {
    v88 = 0;
  LABEL_48:
    v89 = 0;
    if (v83 >= v84) {
      goto LABEL_49;
    }
    goto LABEL_59;
  }
  v86 = v83 >> 3;
  v87 = (*a2)[1] & 7;
  ++v83;
  LODWORD(v86) = *(unsigned __int8*)(v85 + v86);
  v82[1] = v83;
  v88 = 2 * (((unsigned int)v86 >> v87) & 1);
  if (v83 >= v84) {
    goto LABEL_48;
  }
  v103 = v83 >> 3;
  v104 = v83++ & 7;
  LODWORD(v103) = *(unsigned __int8*)(v85 + v103);
  v82[1] = v83;
  v89 = ((unsigned int)v103 >> v104) & 1;
  if (v83 >= v84) {
  LABEL_49:
    v90 = 0;
    v91 = v89 | v88;
    if (v83 >= v84) {
      goto LABEL_50;
    }
    goto LABEL_60;
  }
LABEL_59:
  v105 = v83 >> 3;
  v106 = v83++ & 7;
  LODWORD(v105) = *(unsigned __int8*)(v85 + v105);
  v82[1] = v83;
  v90 = 2 * (((unsigned int)v105 >> v106) & 1);
  v91 = v89 | v88;
  if (v83 >= v84) {
  LABEL_50:
    v92 = 0;
    v93 = v90 | (4 * v91);
    if (v83 >= v84) {
      goto LABEL_51;
    }
    goto LABEL_61;
  }
LABEL_60:
  v107 = v83 >> 3;
  v108 = v83++ & 7;
  LODWORD(v107) = *(unsigned __int8*)(v85 + v107);
  v82[1] = v83;
  v92 = ((unsigned int)v107 >> v108) & 1;
  v93 = v90 | (4 * v91);
  if (v83 >= v84) {
  LABEL_51:
    v94 = 0;
    v95 = v92 | v93;
    if (v83 >= v84) {
      goto LABEL_52;
    }
    goto LABEL_62;
  }
LABEL_61:
  v109 = v83 >> 3;
  v110 = v83++ & 7;
  LODWORD(v109) = *(unsigned __int8*)(v85 + v109);
  v82[1] = v83;
  v94 = 2 * (((unsigned int)v109 >> v110) & 1);
  v95 = v92 | v93;
  if (v83 >= v84) {
  LABEL_52:
    v96 = 0;
    v97 = v94 | (4 * v95);
    if (v83 >= v84) {
      goto LABEL_53;
    }
    goto LABEL_63;
  }
LABEL_62:
  v111 = v83 >> 3;
  v112 = v83++ & 7;
  LODWORD(v111) = *(unsigned __int8*)(v85 + v111);
  v82[1] = v83;
  v96 = ((unsigned int)v111 >> v112) & 1;
  v97 = v94 | (4 * v95);
  if (v83 >= v84) {
  LABEL_53:
    v98 = 0;
    v99 = v96 | v97;
    if (v83 >= v84) {
      goto LABEL_54;
    }
  LABEL_64:
    v115 = v83 >> 3;
    v116 = v83++ & 7;
    LODWORD(v115) = *(unsigned __int8*)(v85 + v115);
    v82[1] = v83;
    v100 = ((unsigned int)v115 >> v116) & 1 | v98 | (4 * v99);
    if (v83 >= v84) {
      goto LABEL_55;
    }
  LABEL_65:
    v117 = *(unsigned __int8*)(v85 + (v83 >> 3));
    v82[1] = v83 + 1;
    v101 = (v117 >> (v83 & 7)) & 1;
    goto LABEL_66;
  }
LABEL_63:
  v113 = v83 >> 3;
  v114 = v83++ & 7;
  LODWORD(v113) = *(unsigned __int8*)(v85 + v113);
  v82[1] = v83;
  v98 = 2 * (((unsigned int)v113 >> v114) & 1);
  v99 = v96 | v97;
  if (v83 < v84) {
    goto LABEL_64;
  }
LABEL_54:
  v100 = v98 | (4 * v99);
  if (v83 < v84) {
    goto LABEL_65;
  }
LABEL_55:
  v101 = 0;
LABEL_66:
  a1[2] = (float)((float)((float)(v101 | (unsigned __int64)(2 * v100)) *
                          0x1.0080400000000p-9f) *
                  0x1.0000000000000p+9f) +
          0x0.0p+0f;
  return 1;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeSilhouetteROK(
    __int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
    unsigned __int64* a6)
{
  unsigned __int64 v6;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v6 = *a6;
  v12 = a3;
  v13 = a4;
  v10 = a1;
  v11 = 0;
  if (v6 >= 8 * a5) {
    v6 = 8 * a5;
  }
  v14 = v6;
  v15 = 8 * a5;
  result = nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK_plt(
               &v10, &v13, &SdkData_ca72b4, SdkRoutine_745d80) &
           1;
  *a2 = v11;
  *a6 = v14;
  return result;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeShapeAndSilhouetteROK(
    float* a1, __int64* a2, _QWORD* a3, __int64 a4, __int64 a5, __int64 a6,
    unsigned __int64* a7, float* a8)
{

#pragma clang fp contract(off)
  unsigned __int64 v8;
  unsigned __int64 v9;
  char v17;
  float v18;
  float v19;
  unsigned __int64 v20;
  char v21;
  struct {
    __int64* v23;
    __int64 v24;
    __int64 v25;
  } v23_;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    __int64 v28;
  } v26_;

  v8 = *a7;
  v9 = 8 * a6;
  v26_.v26 = a5;
  if (v8 >= 8 * a6) {
    v8 = 8 * a6;
  }
  v26_.v27 = v8;
  v26_.v28 = 8 * a6;
  v23_.v23 = &v26_.v26;
  v17 = SdkRoutine_87acc0(a1, &v23_.v23);
  v18 = *a1;
  v19 = (float)(a1[2] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
  a1[1] = (float)(a1[1] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
  a1[2] = v19;
  v20 = v26_.v27;
  *a1 = v18 * (float)(0x1.8e70000000000p+14f / *a8);
  *a7 = v20;
  if ((v17 & 1) != 0) {
    v23_.v25 = a4;
    v26_.v26 = a5;
    v23_.v23 = a2;
    v23_.v24 = 0;
    if (v20 >= v9) {
      v20 = v9;
    }
    v26_.v27 = v20;
    v26_.v28 = v9;
    v21 = nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK_plt(
        &v23_.v23, &v26_.v26, &SdkData_ca72b4, SdkRoutine_745d80_alt1);
    *a3 = v23_.v24;
    *a7 = v26_.v27;
  }
  else {
    v21 = 0;
  }
  return v21 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeImageROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4, float* a5)
{
  unsigned __int64 v5;
  float v6;
  char v8;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v5 = *a4;
  v6 = *a5;
  v11 = 0;
  v12 = a2;
  if (v5 >= 8 * a3) {
    v5 = 8 * a3;
  }
  v13 = v5;
  v14 = 8 * a3;
  LODWORD(v11) = 40;
  v10[0] = a1;
  v10[1] = 0x1E00000028LL;
  v8 = SdkRoutine_87ace0(v10, &v12, 25500.0 / v6);
  if ((v8 & 1) != 0) {
    *a4 = v13;
  }
  return v8 & 1;
}

bool nerd_gillette_internal_otete_jaimev1_DecodeHasFullFrameShapeROK(
    void* this_, bool* a2, const unsigned __int8* a3, unsigned __int64* a4,
    unsigned __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;

  v5 = *a4;
  v6 = 8LL * (_QWORD)a3;
  if (*a4 >= 8 * (__int64)a3) {
    v7 = 8LL * (_QWORD)a3;
  }
  else {
    v7 = *a4;
  }
  if (v6 > v5) {
    v8 = v7 >> 3;
    v9 = v7++ & 7;
    *(_BYTE*)this_ = ((unsigned __int8)a2[v8] >> v9) & 1;
  }
  *a4 = v7;
  return v6 > v5;
}

__int64 nerd_gillette_internal_otete_jaimev1_DecodeFullFrameShapeROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v4 = *a4;
  v5 = 8 * a3;
  v10 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v8 = a2;
  v9 = v5;
  v11 = &v8;
  result = SdkRoutine_87acf0(a1, &v11) & 1;
  *a4 = v9;
  return result;
}

__int64 nerd_gillette_internal_otete_jaimev1_Serialize_746040(unsigned int* a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  char v9;
  unsigned __int64 v10;
  char v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned __int64 v15;
  char v16;
  unsigned __int64 v17;
  char v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  unsigned __int64 v118;
  char v119;
  unsigned __int64 v120;
  char v121;
  unsigned __int64 v122;
  char v123;
  unsigned __int64 v124;
  char v125;
  unsigned __int64 v126;
  char v127;
  unsigned __int64 v128;
  char v129;
  unsigned int v130;

  v2 = *a2;
  v4 = (*a2)[1];
  v3 = (*a2)[2];
  if (v3 - v4 < 0x20) {
    goto LABEL_36;
  }
  v5 = *v2;
  v6 = -32;
  v7 = 0;
  do {
    while (v4 >= v3) {
      v12 = 0;
    LABEL_6:
      v13 = 0;
      if (v4 >= v3) {
        goto LABEL_7;
      }
    LABEL_11:
      v17 = v4 >> 3;
      v18 = v4++ & 7;
      LODWORD(v17) = *(unsigned __int8*)(v5 + v17);
      v2[1] = v4;
      v14 = 2 * (((unsigned int)v17 >> v18) & 1);
      if (v4 >= v3) {
        goto LABEL_12;
      }
    LABEL_3:
      v8 = v4 >> 3;
      v9 = v4++ & 7;
      LODWORD(v8) = *(unsigned __int8*)(v5 + v8);
      v2[1] = v4;
      v6 += 4;
      v7 = ((unsigned int)v8 >> v9) & 1 | v14 | (4 * (v13 | v12 | (4 * v7)));
      if (v6 == 0) {
        goto LABEL_13;
      }
    }
    v10 = v4 >> 3;
    v11 = v4++ & 7;
    LODWORD(v10) = *(unsigned __int8*)(v5 + v10);
    v2[1] = v4;
    v12 = 2 * (((unsigned int)v10 >> v11) & 1);
    if (v4 >= v3) {
      goto LABEL_6;
    }
    v15 = v4 >> 3;
    v16 = v4++ & 7;
    LODWORD(v15) = *(unsigned __int8*)(v5 + v15);
    v2[1] = v4;
    v13 = ((unsigned int)v15 >> v16) & 1;
    if (v4 < v3) {
      goto LABEL_11;
    }
  LABEL_7:
    v14 = 0;
    if (v4 < v3) {
      goto LABEL_3;
    }
  LABEL_12:
    v6 += 4;
    v7 = v14 | (4 * (v13 | v12 | (4 * v7)));
  } while (v6 != 0);
LABEL_13:
  *a1 = v7;
  v19 = *a2;
  v21 = (*a2)[1];
  v20 = (*a2)[2];
  if (v20 - v21 < 0x20) {
    goto LABEL_36;
  }
  v22 = *v19;
  v23 = -32;
  v24 = 0;
  while (2) {
    while (2) {
      if (v21 < v20) {
        v27 = v21 >> 3;
        v28 = v21++ & 7;
        LODWORD(v27) = *(unsigned __int8*)(v22 + v27);
        v19[1] = v21;
        v29 = 2 * (((unsigned int)v27 >> v28) & 1);
        if (v21 >= v20) {
          goto LABEL_18;
        }
        v32 = v21 >> 3;
        v33 = v21++ & 7;
        LODWORD(v32) = *(unsigned __int8*)(v22 + v32);
        v19[1] = v21;
        v30 = ((unsigned int)v32 >> v33) & 1;
        if (v21 < v20) {
          goto LABEL_23;
        }
      LABEL_19:
        v31 = 0;
        if (v21 >= v20) {
          break;
        }
        goto LABEL_15;
      }
      v29 = 0;
    LABEL_18:
      v30 = 0;
      if (v21 >= v20) {
        goto LABEL_19;
      }
    LABEL_23:
      v34 = v21 >> 3;
      v35 = v21++ & 7;
      LODWORD(v34) = *(unsigned __int8*)(v22 + v34);
      v19[1] = v21;
      v31 = 2 * (((unsigned int)v34 >> v35) & 1);
      if (v21 < v20) {
      LABEL_15:
        v25 = v21 >> 3;
        v26 = v21++ & 7;
        LODWORD(v25) = *(unsigned __int8*)(v22 + v25);
        v19[1] = v21;
        v23 += 4;
        v24 = ((unsigned int)v25 >> v26) & 1 | v31 |
              (4 * (v30 | v29 | (4 * v24)));
        if (v23 == 0) {
          goto LABEL_25;
        }
        continue;
      }
      break;
    }
    v23 += 4;
    v24 = v31 | (4 * (v30 | v29 | (4 * v24)));
    if (v23 != 0) {
      continue;
    }
    break;
  }
LABEL_25:
  a1[1] = v24;
  v36 = *a2;
  v37 = (*a2)[1];
  v38 = (*a2)[2];
  if (v38 - v37 < 8) {
  LABEL_36:
    v54 = 0;
    v55 = a1[2];
    if ((_DWORD)v55 == 0) {
      return v54;
    }
    goto LABEL_37;
  }
  v39 = *v36;
  if (v38 > v37) {
    v40 = v37 >> 3;
    v41 = (*a2)[1] & 7;
    ++v37;
    LODWORD(v40) = *(unsigned __int8*)(v39 + v40);
    v36[1] = v37;
    v42 = 2 * (((unsigned int)v40 >> v41) & 1);
    if (v37 >= v38) {
      goto LABEL_28;
    }
    v118 = v37 >> 3;
    v119 = v37++ & 7;
    LODWORD(v118) = *(unsigned __int8*)(v39 + v118);
    v36[1] = v37;
    v43 = ((unsigned int)v118 >> v119) & 1;
    if (v37 < v38) {
      goto LABEL_84;
    }
  LABEL_29:
    v44 = 0;
    v45 = v43 | v42;
    if (v37 >= v38) {
      goto LABEL_30;
    }
  LABEL_85:
    v122 = v37 >> 3;
    v123 = v37++ & 7;
    LODWORD(v122) = *(unsigned __int8*)(v39 + v122);
    v36[1] = v37;
    v46 = ((unsigned int)v122 >> v123) & 1;
    v47 = v44 | (4 * v45);
    if (v37 < v38) {
      goto LABEL_86;
    }
  LABEL_31:
    v48 = 0;
    v49 = v46 | v47;
    if (v37 >= v38) {
      goto LABEL_32;
    }
  LABEL_87:
    v126 = v37 >> 3;
    v127 = v37++ & 7;
    LODWORD(v126) = *(unsigned __int8*)(v39 + v126);
    v36[1] = v37;
    v50 = ((unsigned int)v126 >> v127) & 1;
    v51 = v48 | (4 * v49);
    if (v37 < v38) {
      goto LABEL_88;
    }
  LABEL_33:
    v52 = 0;
    v53 = v50 | v51;
    if (v37 >= v38) {
      goto LABEL_34;
    }
  LABEL_89:
    v130 = *(unsigned __int8*)(v39 + (v37 >> 3));
    v36[1] = v37 + 1;
    a1[2] = (v130 >> (v37 & 7)) & 1 | v52 | (4 * v53);
    v54 = 1;
    v55 = a1[2];
    if ((_DWORD)v55 == 0) {
      return v54;
    }
  LABEL_37:
    v56 = 0;
    while (2) {
      while (1) {
        if ((v54 & 1) != 0) {
          v57 = *a2;
          v58 = (*a2)[1];
          v59 = (*a2)[2];
          if (v59 - v58 >= 0x13) {
            break;
          }
        }
        v54 = 0;
        if (++v56 >= v55) {
          return v54;
        }
      }
      v60 = *v57;
      if (v59 <= v58) {
        v63 = 0;
      LABEL_43:
        v64 = 0;
        if (v58 >= v59) {
          goto LABEL_44;
        }
      LABEL_63:
        v84 = v58 >> 3;
        v85 = v58++ & 7;
        LODWORD(v84) = *(unsigned __int8*)(v60 + v84);
        v57[1] = v58;
        v65 = 2 * (((unsigned int)v84 >> v85) & 1);
        if (v58 < v59) {
          goto LABEL_64;
        }
      LABEL_45:
        v66 = 0;
        if (v58 >= v59) {
          goto LABEL_46;
        }
      LABEL_65:
        v88 = v58 >> 3;
        v89 = v58++ & 7;
        LODWORD(v88) = *(unsigned __int8*)(v60 + v88);
        v57[1] = v58;
        v67 = 2 * (((unsigned int)v88 >> v89) & 1);
        if (v58 < v59) {
          goto LABEL_66;
        }
      LABEL_47:
        v68 = 0;
        if (v58 >= v59) {
          goto LABEL_48;
        }
      LABEL_67:
        v92 = v58 >> 3;
        v93 = v58++ & 7;
        LODWORD(v92) = *(unsigned __int8*)(v60 + v92);
        v57[1] = v58;
        v69 = 2 * (((unsigned int)v92 >> v93) & 1);
        if (v58 < v59) {
          goto LABEL_68;
        }
      LABEL_49:
        v70 = 0;
        if (v58 >= v59) {
          goto LABEL_50;
        }
      LABEL_69:
        v96 = v58 >> 3;
        v97 = v58++ & 7;
        LODWORD(v96) = *(unsigned __int8*)(v60 + v96);
        v57[1] = v58;
        v71 = 2 * (((unsigned int)v96 >> v97) & 1);
        if (v58 < v59) {
          goto LABEL_70;
        }
      LABEL_51:
        v72 = 0;
        if (v58 >= v59) {
          goto LABEL_52;
        }
      LABEL_71:
        v100 = v58 >> 3;
        v101 = v58++ & 7;
        LODWORD(v100) = *(unsigned __int8*)(v60 + v100);
        v57[1] = v58;
        v73 = 2 * (((unsigned int)v100 >> v101) & 1);
        if (v58 < v59) {
          goto LABEL_72;
        }
      LABEL_53:
        v74 = 0;
        if (v58 >= v59) {
          goto LABEL_54;
        }
      LABEL_73:
        v104 = v58 >> 3;
        v105 = v58++ & 7;
        LODWORD(v104) = *(unsigned __int8*)(v60 + v104);
        v57[1] = v58;
        v75 = 2 * (((unsigned int)v104 >> v105) & 1);
        if (v58 < v59) {
          goto LABEL_74;
        }
      LABEL_55:
        v76 = 0;
        if (v58 >= v59) {
          goto LABEL_56;
        }
      LABEL_75:
        v108 = v58 >> 3;
        v109 = v58++ & 7;
        LODWORD(v108) = *(unsigned __int8*)(v60 + v108);
        v57[1] = v58;
        v77 = 2 * (((unsigned int)v108 >> v109) & 1);
        if (v58 < v59) {
          goto LABEL_76;
        }
      LABEL_57:
        v78 = 0;
        if (v58 >= v59) {
          goto LABEL_58;
        }
      LABEL_77:
        v112 = v58 >> 3;
        v113 = v58++ & 7;
        LODWORD(v112) = *(unsigned __int8*)(v60 + v112);
        v57[1] = v58;
        v79 = 2 * (((unsigned int)v112 >> v113) & 1);
        if (v58 < v59) {
          goto LABEL_78;
        }
      LABEL_59:
        v80 = 0;
        if (v58 >= v59) {
          goto LABEL_60;
        }
      LABEL_79:
        v116 = *(unsigned __int8*)(v60 + (v58 >> 3));
        v57[1] = v58 + 1;
        v81 = (v116 >> (v58 & 7)) & 1;
      }
      else {
        v61 = v58 >> 3;
        v62 = (*a2)[1] & 7;
        ++v58;
        LODWORD(v61) = *(unsigned __int8*)(v60 + v61);
        v57[1] = v58;
        v63 = 2 * (((unsigned int)v61 >> v62) & 1);
        if (v58 >= v59) {
          goto LABEL_43;
        }
        v82 = v58 >> 3;
        v83 = v58++ & 7;
        LODWORD(v82) = *(unsigned __int8*)(v60 + v82);
        v57[1] = v58;
        v64 = ((unsigned int)v82 >> v83) & 1;
        if (v58 < v59) {
          goto LABEL_63;
        }
      LABEL_44:
        v65 = 0;
        if (v58 >= v59) {
          goto LABEL_45;
        }
      LABEL_64:
        v86 = v58 >> 3;
        v87 = v58++ & 7;
        LODWORD(v86) = *(unsigned __int8*)(v60 + v86);
        v57[1] = v58;
        v66 = ((unsigned int)v86 >> v87) & 1;
        if (v58 < v59) {
          goto LABEL_65;
        }
      LABEL_46:
        v67 = 0;
        if (v58 >= v59) {
          goto LABEL_47;
        }
      LABEL_66:
        v90 = v58 >> 3;
        v91 = v58++ & 7;
        LODWORD(v90) = *(unsigned __int8*)(v60 + v90);
        v57[1] = v58;
        v68 = ((unsigned int)v90 >> v91) & 1;
        if (v58 < v59) {
          goto LABEL_67;
        }
      LABEL_48:
        v69 = 0;
        if (v58 >= v59) {
          goto LABEL_49;
        }
      LABEL_68:
        v94 = v58 >> 3;
        v95 = v58++ & 7;
        LODWORD(v94) = *(unsigned __int8*)(v60 + v94);
        v57[1] = v58;
        v70 = ((unsigned int)v94 >> v95) & 1;
        if (v58 < v59) {
          goto LABEL_69;
        }
      LABEL_50:
        v71 = 0;
        if (v58 >= v59) {
          goto LABEL_51;
        }
      LABEL_70:
        v98 = v58 >> 3;
        v99 = v58++ & 7;
        LODWORD(v98) = *(unsigned __int8*)(v60 + v98);
        v57[1] = v58;
        v72 = ((unsigned int)v98 >> v99) & 1;
        if (v58 < v59) {
          goto LABEL_71;
        }
      LABEL_52:
        v73 = 0;
        if (v58 >= v59) {
          goto LABEL_53;
        }
      LABEL_72:
        v102 = v58 >> 3;
        v103 = v58++ & 7;
        LODWORD(v102) = *(unsigned __int8*)(v60 + v102);
        v57[1] = v58;
        v74 = ((unsigned int)v102 >> v103) & 1;
        if (v58 < v59) {
          goto LABEL_73;
        }
      LABEL_54:
        v75 = 0;
        if (v58 >= v59) {
          goto LABEL_55;
        }
      LABEL_74:
        v106 = v58 >> 3;
        v107 = v58++ & 7;
        LODWORD(v106) = *(unsigned __int8*)(v60 + v106);
        v57[1] = v58;
        v76 = ((unsigned int)v106 >> v107) & 1;
        if (v58 < v59) {
          goto LABEL_75;
        }
      LABEL_56:
        v77 = 0;
        if (v58 >= v59) {
          goto LABEL_57;
        }
      LABEL_76:
        v110 = v58 >> 3;
        v111 = v58++ & 7;
        LODWORD(v110) = *(unsigned __int8*)(v60 + v110);
        v57[1] = v58;
        v78 = ((unsigned int)v110 >> v111) & 1;
        if (v58 < v59) {
          goto LABEL_77;
        }
      LABEL_58:
        v79 = 0;
        if (v58 >= v59) {
          goto LABEL_59;
        }
      LABEL_78:
        v114 = v58 >> 3;
        v115 = v58++ & 7;
        LODWORD(v114) = *(unsigned __int8*)(v60 + v114);
        v57[1] = v58;
        v80 = ((unsigned int)v114 >> v115) & 1;
        if (v58 < v59) {
          goto LABEL_79;
        }
      LABEL_60:
        v81 = 0;
      }
      a1[v56 + 3] =
          v81 |
          (2 *
           (v80 | v79 |
            (4 *
             (v78 | v77 |
              (4 *
               (v76 | v75 |
                (4 * (v74 | v73 |
                      (4 * (v72 | v71 |
                            (4 * (v70 | v69 |
                                  (4 * (v68 | v67 |
                                        (4 * (v66 | v65 |
                                              (4 * (v64 | v63))))))))))))))))));
      v54 = 1;
      v55 = a1[2];
      if (++v56 >= v55) {
        return v54;
      }
      continue;
    }
  }
  v42 = 0;
LABEL_28:
  v43 = 0;
  if (v37 >= v38) {
    goto LABEL_29;
  }
LABEL_84:
  v120 = v37 >> 3;
  v121 = v37++ & 7;
  LODWORD(v120) = *(unsigned __int8*)(v39 + v120);
  v36[1] = v37;
  v44 = 2 * (((unsigned int)v120 >> v121) & 1);
  v45 = v43 | v42;
  if (v37 < v38) {
    goto LABEL_85;
  }
LABEL_30:
  v46 = 0;
  v47 = v44 | (4 * v45);
  if (v37 >= v38) {
    goto LABEL_31;
  }
LABEL_86:
  v124 = v37 >> 3;
  v125 = v37++ & 7;
  LODWORD(v124) = *(unsigned __int8*)(v39 + v124);
  v36[1] = v37;
  v48 = 2 * (((unsigned int)v124 >> v125) & 1);
  v49 = v46 | v47;
  if (v37 < v38) {
    goto LABEL_87;
  }
LABEL_32:
  v50 = 0;
  v51 = v48 | (4 * v49);
  if (v37 >= v38) {
    goto LABEL_33;
  }
LABEL_88:
  v128 = v37 >> 3;
  v129 = v37++ & 7;
  LODWORD(v128) = *(unsigned __int8*)(v39 + v128);
  v36[1] = v37;
  v52 = 2 * (((unsigned int)v128 >> v129) & 1);
  v53 = v50 | v51;
  if (v37 < v38) {
    goto LABEL_89;
  }
LABEL_34:
  a1[2] = v52 | (4 * v53);
  v54 = 1;
  v55 = a1[2];
  if ((_DWORD)v55 != 0) {
    goto LABEL_37;
  }
  return v54;
}

bool nerd_gillette_internal_otete_jaimev1_Serialize_749d80(__int64 a1,
                                                           __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  char v30;
  unsigned __int64 v31;
  char v32;
  unsigned __int64 v33;
  char v34;
  unsigned __int64 v35;
  char v36;
  unsigned __int64 v37;
  char v38;
  unsigned __int64 v39;
  char v40;
  unsigned int v41;
  __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  char v63;
  unsigned __int64 v64;
  char v65;
  unsigned __int64 v66;
  char v67;
  unsigned __int64 v68;
  char v69;
  unsigned __int64 v70;
  char v71;
  unsigned __int64 v72;
  char v73;
  unsigned __int64 v74;
  char v75;
  unsigned int v76;
  __int64* v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  __int64* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  char v138;
  unsigned __int64 v139;
  char v140;
  unsigned __int64 v141;
  char v142;
  unsigned __int64 v143;
  char v144;
  unsigned __int64 v145;
  char v146;
  unsigned __int64 v147;
  char v148;
  unsigned __int64 v149;
  char v150;
  unsigned int v151;
  __int64* v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  unsigned int v158;
  unsigned __int64 v159;
  char v160;
  unsigned int v161;
  int v162;
  unsigned int v163;
  int v164;
  __int64* v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  unsigned int v171;
  unsigned __int64 v173;
  char v174;
  unsigned int v175;
  unsigned __int64 v176;
  char v177;
  unsigned int v178;
  int v179;
  unsigned __int64 v180;
  char v181;
  unsigned int v182;
  int v183;
  unsigned __int64 v184;
  char v185;
  unsigned int v186;
  int v187;
  unsigned __int64 v188;
  char v189;
  unsigned int v190;
  int v191;
  unsigned __int64 v192;
  char v193;
  unsigned int v194;
  int v195;
  unsigned __int64 v196;
  char v197;
  unsigned int v198;
  int v199;
  unsigned int v200;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 0xA) {
    return false;
  }
  v5 = *v2;
  if (v4 <= v3) {
    v8 = 0;
  LABEL_4:
    v9 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_15;
  }
  v6 = v3 >> 3;
  v7 = (*a2)[1] & 7;
  ++v3;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * (((unsigned int)v6 >> v7) & 1);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v25 = v3 >> 3;
  v26 = v3++ & 7;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  v2[1] = v3;
  v9 = ((unsigned int)v25 >> v26) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_15:
  v27 = v3 >> 3;
  v28 = v3++ & 7;
  LODWORD(v27) = *(unsigned __int8*)(v5 + v27);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v27 >> v28) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_16:
  v29 = v3 >> 3;
  v30 = v3++ & 7;
  LODWORD(v29) = *(unsigned __int8*)(v5 + v29);
  v2[1] = v3;
  v12 = ((unsigned int)v29 >> v30) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_17:
  v31 = v3 >> 3;
  v32 = v3++ & 7;
  LODWORD(v31) = *(unsigned __int8*)(v5 + v31);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v31 >> v32) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_18:
  v33 = v3 >> 3;
  v34 = v3++ & 7;
  LODWORD(v33) = *(unsigned __int8*)(v5 + v33);
  v2[1] = v3;
  v16 = ((unsigned int)v33 >> v34) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_20;
  }
LABEL_19:
  v35 = v3 >> 3;
  v36 = v3++ & 7;
  LODWORD(v35) = *(unsigned __int8*)(v5 + v35);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v35 >> v36) & 1);
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    v20 = 0;
    v21 = v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
  LABEL_21:
    v39 = v3 >> 3;
    v40 = v3++ & 7;
    LODWORD(v39) = *(unsigned __int8*)(v5 + v39);
    v2[1] = v3;
    v22 = 2 * (((unsigned int)v39 >> v40) & 1);
    v23 = v20 | v21;
    if (v3 >= v4) {
      goto LABEL_12;
    }
    goto LABEL_22;
  }
LABEL_20:
  v37 = v3 >> 3;
  v38 = v3++ & 7;
  LODWORD(v37) = *(unsigned __int8*)(v5 + v37);
  v2[1] = v3;
  v20 = ((unsigned int)v37 >> v38) & 1;
  v21 = v18 | (4 * v19);
  if (v3 < v4) {
    goto LABEL_21;
  }
LABEL_11:
  v22 = 0;
  v23 = v20 | v21;
  if (v3 >= v4) {
  LABEL_12:
    v24 = 0;
    goto LABEL_23;
  }
LABEL_22:
  v41 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v24 = (v41 >> (v3 & 7)) & 1;
LABEL_23:
  *(float*)a1 =
      (float)((float)((float)(v24 | v22 | (unsigned __int64)(4 * v23)) *
                      0x1.0040100000000p-10f) *
              0x1.0000000000000p+10f) +
      0x0.0p+0f;
  v42 = *a2;
  v43 = (*a2)[1];
  v44 = (*a2)[2];
  if (v44 - v43 < 9) {
    return false;
  }
  v45 = *v42;
  if (v44 <= v43) {
    v48 = 0;
  LABEL_26:
    v49 = 0;
    if (v43 >= v44) {
      goto LABEL_27;
    }
    goto LABEL_36;
  }
  v46 = v43 >> 3;
  v47 = (*a2)[1] & 7;
  ++v43;
  LODWORD(v46) = *(unsigned __int8*)(v45 + v46);
  v42[1] = v43;
  v48 = 2 * (((unsigned int)v46 >> v47) & 1);
  if (v43 >= v44) {
    goto LABEL_26;
  }
  v62 = v43 >> 3;
  v63 = v43++ & 7;
  LODWORD(v62) = *(unsigned __int8*)(v45 + v62);
  v42[1] = v43;
  v49 = ((unsigned int)v62 >> v63) & 1;
  if (v43 >= v44) {
  LABEL_27:
    v50 = 0;
    v51 = v49 | v48;
    if (v43 >= v44) {
      goto LABEL_28;
    }
    goto LABEL_37;
  }
LABEL_36:
  v64 = v43 >> 3;
  v65 = v43++ & 7;
  LODWORD(v64) = *(unsigned __int8*)(v45 + v64);
  v42[1] = v43;
  v50 = 2 * (((unsigned int)v64 >> v65) & 1);
  v51 = v49 | v48;
  if (v43 >= v44) {
  LABEL_28:
    v52 = 0;
    v53 = v50 | (4 * v51);
    if (v43 >= v44) {
      goto LABEL_29;
    }
    goto LABEL_38;
  }
LABEL_37:
  v66 = v43 >> 3;
  v67 = v43++ & 7;
  LODWORD(v66) = *(unsigned __int8*)(v45 + v66);
  v42[1] = v43;
  v52 = ((unsigned int)v66 >> v67) & 1;
  v53 = v50 | (4 * v51);
  if (v43 >= v44) {
  LABEL_29:
    v54 = 0;
    v55 = v52 | v53;
    if (v43 >= v44) {
      goto LABEL_30;
    }
    goto LABEL_39;
  }
LABEL_38:
  v68 = v43 >> 3;
  v69 = v43++ & 7;
  LODWORD(v68) = *(unsigned __int8*)(v45 + v68);
  v42[1] = v43;
  v54 = 2 * (((unsigned int)v68 >> v69) & 1);
  v55 = v52 | v53;
  if (v43 >= v44) {
  LABEL_30:
    v56 = 0;
    v57 = v54 | (4 * v55);
    if (v43 >= v44) {
      goto LABEL_31;
    }
    goto LABEL_40;
  }
LABEL_39:
  v70 = v43 >> 3;
  v71 = v43++ & 7;
  LODWORD(v70) = *(unsigned __int8*)(v45 + v70);
  v42[1] = v43;
  v56 = ((unsigned int)v70 >> v71) & 1;
  v57 = v54 | (4 * v55);
  if (v43 >= v44) {
  LABEL_31:
    v58 = 0;
    v59 = v56 | v57;
    if (v43 >= v44) {
      goto LABEL_32;
    }
  LABEL_41:
    v74 = v43 >> 3;
    v75 = v43++ & 7;
    LODWORD(v74) = *(unsigned __int8*)(v45 + v74);
    v42[1] = v43;
    v60 = ((unsigned int)v74 >> v75) & 1 | v58 | (4 * v59);
    if (v43 >= v44) {
      goto LABEL_33;
    }
    goto LABEL_42;
  }
LABEL_40:
  v72 = v43 >> 3;
  v73 = v43++ & 7;
  LODWORD(v72) = *(unsigned __int8*)(v45 + v72);
  v42[1] = v43;
  v58 = 2 * (((unsigned int)v72 >> v73) & 1);
  v59 = v56 | v57;
  if (v43 < v44) {
    goto LABEL_41;
  }
LABEL_32:
  v60 = v58 | (4 * v59);
  if (v43 >= v44) {
  LABEL_33:
    v61 = 0;
    goto LABEL_43;
  }
LABEL_42:
  v76 = *(unsigned __int8*)(v45 + (v43 >> 3));
  v42[1] = v43 + 1;
  v61 = (v76 >> (v43 & 7)) & 1;
LABEL_43:
  *(float*)(a1 + 4) =
      (float)((float)((float)(v61 | (unsigned __int64)(2 * v60)) *
                      0x1.0080400000000p-9f) *
              0x1.0000000000000p+9f) +
      0x0.0p+0f;
  v77 = *a2;
  v78 = (*a2)[1];
  v79 = (*a2)[2];
  if (v79 - v78 < 0xA) {
    return false;
  }
  v80 = *v77;
  if (v79 <= v78) {
    v83 = 0;
  LABEL_46:
    v84 = 0;
    if (v78 >= v79) {
      goto LABEL_47;
    }
    goto LABEL_57;
  }
  v81 = v78 >> 3;
  v82 = (*a2)[1] & 7;
  ++v78;
  LODWORD(v81) = *(unsigned __int8*)(v80 + v81);
  v77[1] = v78;
  v83 = 2 * (((unsigned int)v81 >> v82) & 1);
  if (v78 >= v79) {
    goto LABEL_46;
  }
  v100 = v78 >> 3;
  v101 = v78++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v80 + v100);
  v77[1] = v78;
  v84 = ((unsigned int)v100 >> v101) & 1;
  if (v78 >= v79) {
  LABEL_47:
    v85 = 0;
    v86 = v84 | v83;
    if (v78 >= v79) {
      goto LABEL_48;
    }
    goto LABEL_58;
  }
LABEL_57:
  v102 = v78 >> 3;
  v103 = v78++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v80 + v102);
  v77[1] = v78;
  v85 = 2 * (((unsigned int)v102 >> v103) & 1);
  v86 = v84 | v83;
  if (v78 >= v79) {
  LABEL_48:
    v87 = 0;
    v88 = v85 | (4 * v86);
    if (v78 >= v79) {
      goto LABEL_49;
    }
    goto LABEL_59;
  }
LABEL_58:
  v104 = v78 >> 3;
  v105 = v78++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v80 + v104);
  v77[1] = v78;
  v87 = ((unsigned int)v104 >> v105) & 1;
  v88 = v85 | (4 * v86);
  if (v78 >= v79) {
  LABEL_49:
    v89 = 0;
    v90 = v87 | v88;
    if (v78 >= v79) {
      goto LABEL_50;
    }
    goto LABEL_60;
  }
LABEL_59:
  v106 = v78 >> 3;
  v107 = v78++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v80 + v106);
  v77[1] = v78;
  v89 = 2 * (((unsigned int)v106 >> v107) & 1);
  v90 = v87 | v88;
  if (v78 >= v79) {
  LABEL_50:
    v91 = 0;
    v92 = v89 | (4 * v90);
    if (v78 >= v79) {
      goto LABEL_51;
    }
    goto LABEL_61;
  }
LABEL_60:
  v108 = v78 >> 3;
  v109 = v78++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v80 + v108);
  v77[1] = v78;
  v91 = ((unsigned int)v108 >> v109) & 1;
  v92 = v89 | (4 * v90);
  if (v78 >= v79) {
  LABEL_51:
    v93 = 0;
    v94 = v91 | v92;
    if (v78 >= v79) {
      goto LABEL_52;
    }
    goto LABEL_62;
  }
LABEL_61:
  v110 = v78 >> 3;
  v111 = v78++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v80 + v110);
  v77[1] = v78;
  v93 = 2 * (((unsigned int)v110 >> v111) & 1);
  v94 = v91 | v92;
  if (v78 >= v79) {
  LABEL_52:
    v95 = 0;
    v96 = v93 | (4 * v94);
    if (v78 >= v79) {
      goto LABEL_53;
    }
  LABEL_63:
    v114 = v78 >> 3;
    v115 = v78++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v80 + v114);
    v77[1] = v78;
    v97 = 2 * (((unsigned int)v114 >> v115) & 1);
    v98 = v95 | v96;
    if (v78 >= v79) {
      goto LABEL_54;
    }
    goto LABEL_64;
  }
LABEL_62:
  v112 = v78 >> 3;
  v113 = v78++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v80 + v112);
  v77[1] = v78;
  v95 = ((unsigned int)v112 >> v113) & 1;
  v96 = v93 | (4 * v94);
  if (v78 < v79) {
    goto LABEL_63;
  }
LABEL_53:
  v97 = 0;
  v98 = v95 | v96;
  if (v78 >= v79) {
  LABEL_54:
    v99 = 0;
    goto LABEL_65;
  }
LABEL_64:
  v116 = *(unsigned __int8*)(v80 + (v78 >> 3));
  v77[1] = v78 + 1;
  v99 = (v116 >> (v78 & 7)) & 1;
LABEL_65:
  *(float*)(a1 + 8) =
      (float)((float)((float)(v99 | v97 | (unsigned __int64)(4 * v98)) *
                      0x1.0040100000000p-10f) *
              0x1.0000000000000p+10f) +
      0x0.0p+0f;
  v117 = *a2;
  v118 = (*a2)[1];
  v119 = (*a2)[2];
  if (v119 - v118 < 9) {
    return false;
  }
  v120 = *v117;
  if (v119 <= v118) {
    v123 = 0;
  LABEL_68:
    v124 = 0;
    if (v118 >= v119) {
      goto LABEL_69;
    }
    goto LABEL_78;
  }
  v121 = v118 >> 3;
  v122 = (*a2)[1] & 7;
  ++v118;
  LODWORD(v121) = *(unsigned __int8*)(v120 + v121);
  v117[1] = v118;
  v123 = 2 * (((unsigned int)v121 >> v122) & 1);
  if (v118 >= v119) {
    goto LABEL_68;
  }
  v137 = v118 >> 3;
  v138 = v118++ & 7;
  LODWORD(v137) = *(unsigned __int8*)(v120 + v137);
  v117[1] = v118;
  v124 = ((unsigned int)v137 >> v138) & 1;
  if (v118 >= v119) {
  LABEL_69:
    v125 = 0;
    v126 = v124 | v123;
    if (v118 >= v119) {
      goto LABEL_70;
    }
    goto LABEL_79;
  }
LABEL_78:
  v139 = v118 >> 3;
  v140 = v118++ & 7;
  LODWORD(v139) = *(unsigned __int8*)(v120 + v139);
  v117[1] = v118;
  v125 = 2 * (((unsigned int)v139 >> v140) & 1);
  v126 = v124 | v123;
  if (v118 >= v119) {
  LABEL_70:
    v127 = 0;
    v128 = v125 | (4 * v126);
    if (v118 >= v119) {
      goto LABEL_71;
    }
    goto LABEL_80;
  }
LABEL_79:
  v141 = v118 >> 3;
  v142 = v118++ & 7;
  LODWORD(v141) = *(unsigned __int8*)(v120 + v141);
  v117[1] = v118;
  v127 = ((unsigned int)v141 >> v142) & 1;
  v128 = v125 | (4 * v126);
  if (v118 >= v119) {
  LABEL_71:
    v129 = 0;
    v130 = v127 | v128;
    if (v118 >= v119) {
      goto LABEL_72;
    }
    goto LABEL_81;
  }
LABEL_80:
  v143 = v118 >> 3;
  v144 = v118++ & 7;
  LODWORD(v143) = *(unsigned __int8*)(v120 + v143);
  v117[1] = v118;
  v129 = 2 * (((unsigned int)v143 >> v144) & 1);
  v130 = v127 | v128;
  if (v118 >= v119) {
  LABEL_72:
    v131 = 0;
    v132 = v129 | (4 * v130);
    if (v118 >= v119) {
      goto LABEL_73;
    }
    goto LABEL_82;
  }
LABEL_81:
  v145 = v118 >> 3;
  v146 = v118++ & 7;
  LODWORD(v145) = *(unsigned __int8*)(v120 + v145);
  v117[1] = v118;
  v131 = ((unsigned int)v145 >> v146) & 1;
  v132 = v129 | (4 * v130);
  if (v118 >= v119) {
  LABEL_73:
    v133 = 0;
    v134 = v131 | v132;
    if (v118 >= v119) {
      goto LABEL_74;
    }
  LABEL_83:
    v149 = v118 >> 3;
    v150 = v118++ & 7;
    LODWORD(v149) = *(unsigned __int8*)(v120 + v149);
    v117[1] = v118;
    v135 = ((unsigned int)v149 >> v150) & 1 | v133 | (4 * v134);
    if (v118 >= v119) {
      goto LABEL_75;
    }
  LABEL_84:
    v151 = *(unsigned __int8*)(v120 + (v118 >> 3));
    v117[1] = v118 + 1;
    v136 = (v151 >> (v118 & 7)) & 1;
    goto LABEL_85;
  }
LABEL_82:
  v147 = v118 >> 3;
  v148 = v118++ & 7;
  LODWORD(v147) = *(unsigned __int8*)(v120 + v147);
  v117[1] = v118;
  v133 = 2 * (((unsigned int)v147 >> v148) & 1);
  v134 = v131 | v132;
  if (v118 < v119) {
    goto LABEL_83;
  }
LABEL_74:
  v135 = v133 | (4 * v134);
  if (v118 < v119) {
    goto LABEL_84;
  }
LABEL_75:
  v136 = 0;
LABEL_85:
  *(float*)(a1 + 12) =
      (float)((float)((float)(v136 | (unsigned __int64)(2 * v135)) *
                      0x1.0080400000000p-9f) *
              0x1.0000000000000p+9f) +
      0x0.0p+0f;
  v152 = *a2;
  v153 = (*a2)[1];
  v154 = (*a2)[2];
  if (v154 - v153 < 3) {
    return false;
  }
  v155 = *v152;
  if (v154 <= v153) {
    v158 = 0;
  }
  else {
    v156 = v153 >> 3;
    v157 = (*a2)[1] & 7;
    ++v153;
    LODWORD(v156) = *(unsigned __int8*)(v155 + v156);
    v152[1] = v153;
    v158 = 2 * (((unsigned int)v156 >> v157) & 1);
  }
  if (v153 >= v154) {
    v161 = 0;
  }
  else {
    v159 = v153 >> 3;
    v160 = v153++ & 7;
    LODWORD(v159) = *(unsigned __int8*)(v155 + v159);
    v152[1] = v153;
    v161 = ((unsigned int)v159 >> v160) & 1;
  }
  v162 = v161 | v158;
  if (v153 >= v154) {
    v164 = 0;
  }
  else {
    v163 = *(unsigned __int8*)(v155 + (v153 >> 3));
    v152[1] = v153 + 1;
    v164 = (v163 >> (v153 & 7)) & 1;
  }
  *(_DWORD*)(a1 + 16) = v164 | (2 * v162);
  v165 = *a2;
  v167 = (*a2)[1];
  v166 = (*a2)[2];
  if (v166 - v167 < 9) {
    return false;
  }
  v168 = *v165;
  if (v166 <= v167) {
    v171 = 0;
  }
  else {
    v169 = v167 >> 3;
    v170 = (*a2)[1] & 7;
    ++v167;
    LODWORD(v169) = *(unsigned __int8*)(v168 + v169);
    v165[1] = v167;
    v171 = 2 * (((unsigned int)v169 >> v170) & 1);
  }
  if (v167 >= v166) {
    v175 = 0;
  }
  else {
    v173 = v167 >> 3;
    v174 = v167++ & 7;
    LODWORD(v173) = *(unsigned __int8*)(v168 + v173);
    v165[1] = v167;
    v175 = ((unsigned int)v173 >> v174) & 1;
  }
  if (v167 >= v166) {
    v178 = 0;
  }
  else {
    v176 = v167 >> 3;
    v177 = v167++ & 7;
    LODWORD(v176) = *(unsigned __int8*)(v168 + v176);
    v165[1] = v167;
    v178 = 2 * (((unsigned int)v176 >> v177) & 1);
  }
  v179 = v175 | v171;
  if (v167 >= v166) {
    v182 = 0;
  }
  else {
    v180 = v167 >> 3;
    v181 = v167++ & 7;
    LODWORD(v180) = *(unsigned __int8*)(v168 + v180);
    v165[1] = v167;
    v182 = ((unsigned int)v180 >> v181) & 1;
  }
  v183 = v178 | (4 * v179);
  if (v167 >= v166) {
    v186 = 0;
  }
  else {
    v184 = v167 >> 3;
    v185 = v167++ & 7;
    LODWORD(v184) = *(unsigned __int8*)(v168 + v184);
    v165[1] = v167;
    v186 = 2 * (((unsigned int)v184 >> v185) & 1);
  }
  v187 = v182 | v183;
  if (v167 >= v166) {
    v190 = 0;
  }
  else {
    v188 = v167 >> 3;
    v189 = v167++ & 7;
    LODWORD(v188) = *(unsigned __int8*)(v168 + v188);
    v165[1] = v167;
    v190 = ((unsigned int)v188 >> v189) & 1;
  }
  v191 = v186 | (4 * v187);
  if (v167 >= v166) {
    v194 = 0;
  }
  else {
    v192 = v167 >> 3;
    v193 = v167++ & 7;
    LODWORD(v192) = *(unsigned __int8*)(v168 + v192);
    v165[1] = v167;
    v194 = 2 * (((unsigned int)v192 >> v193) & 1);
  }
  v195 = v190 | v191;
  if (v167 >= v166) {
    v198 = 0;
  }
  else {
    v196 = v167 >> 3;
    v197 = v167++ & 7;
    LODWORD(v196) = *(unsigned __int8*)(v168 + v196);
    v165[1] = v167;
    v198 = ((unsigned int)v196 >> v197) & 1;
  }
  v199 = v198 | v194 | (4 * v195);
  if (v167 >= v166) {
    *(_DWORD*)(a1 + 20) = 2 * v199;
  }
  else {
    v200 = *(unsigned __int8*)(v168 + (v167 >> 3));
    v165[1] = v167 + 1;
    *(_DWORD*)(a1 + 20) = (v200 >> (v167 & 7)) & 1 | (2 * v199);
  }
  return SdkRoutine_7441e0(a2, (unsigned int*)(a1 + 24), 9u);
}

__int64 nerd_gillette_internal_otete_jaimev1_EncodeFullSilhouetteROK(
    __int64* a1, __int16* a2, unsigned __int64 a3, unsigned __int8* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int16 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int8* v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  unsigned __int16* v48;
  int v49;
  int v50;
  int v51;
  unsigned __int16* v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  int v61;
  int v62;
  __int64 v63;
  unsigned __int8* v64;
  int v65;
  int v66;
  unsigned __int8* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  char* v73;
  int v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  int v83;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  char v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char v98;
  unsigned __int64 v99;
  char v100;
  unsigned __int64 v101;
  char v102;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;

  v4 = a1[1];
  if (v4 > 0x956) {
    if (v4 + 9 >= 0x960) {
      return 0;
    }
  }
  else {
    *(_BYTE*)(*a1 + (v4 >> 3)) |= ((a3 & 0x200) != 0) << (v4 & 7);
    v5 = *a1;
    a1[1] = v4 + 1;
    *(_BYTE*)(v5 + ((v4 + 1) >> 3)) |= ((a3 & 0x100) != 0) << ((v4 + 1) & 7);
    v6 = *a1;
    a1[1] = v4 + 2;
    *(_BYTE*)(v6 + ((v4 + 2) >> 3)) |= ((a3 & 0x80) != 0) << ((v4 + 2) & 7);
    v7 = *a1;
    a1[1] = v4 + 3;
    *(_BYTE*)(v7 + ((v4 + 3) >> 3)) |= ((a3 & 0x40) != 0) << ((v4 + 3) & 7);
    v8 = *a1;
    a1[1] = v4 + 4;
    *(_BYTE*)(v8 + ((v4 + 4) >> 3)) |= ((a3 & 0x20) != 0) << ((v4 + 4) & 7);
    v9 = *a1;
    a1[1] = v4 + 5;
    *(_BYTE*)(v9 + ((v4 + 5) >> 3)) |= ((a3 & 0x10) != 0) << ((v4 + 5) & 7);
    v10 = *a1;
    a1[1] = v4 + 6;
    *(_BYTE*)(v10 + ((v4 + 6) >> 3)) |= ((a3 & 8) != 0) << ((v4 + 6) & 7);
    v11 = *a1;
    a1[1] = v4 + 7;
    *(_BYTE*)(v11 + ((v4 + 7) >> 3)) |= ((a3 & 4) != 0) << ((v4 + 7) & 7);
    v12 = *a1;
    a1[1] = v4 + 8;
    *(_BYTE*)(v12 + ((v4 + 8) >> 3)) |= ((a3 & 2) != 0) << (v4 & 7);
    v13 = *a1;
    a1[1] = v4 + 9;
    *(_BYTE*)(v13 + ((v4 + 9) >> 3)) |= (a3 & 1) << ((v4 + 9) & 7);
    a1[1] = v4 + 10;
    if (v4 >= 0x94D) {
      return 0;
    }
    v14 = *a2;
    *(_BYTE*)(*a1 + ((v4 + 10) >> 3)) |= ((*a2 & 0x200) != 0)
                                         << ((v4 + 10) & 7);
    v15 = *a1;
    a1[1] = v4 + 11;
    *(_BYTE*)(v15 + ((v4 + 11) >> 3)) |= ((v14 & 0x100) != 0)
                                         << ((v4 + 11) & 7);
    v16 = *a1;
    a1[1] = v4 + 12;
    *(_BYTE*)(v16 + ((v4 + 12) >> 3)) |= ((v14 & 0x80) != 0) << ((v4 + 12) & 7);
    v17 = *a1;
    a1[1] = v4 + 13;
    *(_BYTE*)(v17 + ((v4 + 13) >> 3)) |= ((v14 & 0x40) != 0) << ((v4 + 13) & 7);
    v18 = *a1;
    a1[1] = v4 + 14;
    *(_BYTE*)(v18 + ((v4 + 14) >> 3)) |= ((v14 & 0x20) != 0) << ((v4 + 14) & 7);
    v19 = *a1;
    a1[1] = v4 + 15;
    *(_BYTE*)(v19 + ((v4 + 15) >> 3)) |= ((v14 & 0x10) != 0) << ((v4 + 15) & 7);
    v20 = *a1;
    a1[1] = v4 + 16;
    *(_BYTE*)(v20 + ((v4 + 16) >> 3)) |= ((v14 & 8) != 0) << (v4 & 7);
    v21 = *a1;
    a1[1] = v4 + 17;
    *(_BYTE*)(v21 + ((v4 + 17) >> 3)) |= ((v14 & 4) != 0) << ((v4 + 17) & 7);
    v22 = *a1;
    a1[1] = v4 + 18;
    *(_BYTE*)(v22 + ((v4 + 18) >> 3)) |= ((v14 & 2) != 0) << ((v4 + 18) & 7);
    v23 = *a1;
    a1[1] = v4 + 19;
    v24 = v4 + 20;
    *(_BYTE*)(v23 + ((v4 + 19) >> 3)) |= (v14 & 1) << ((v4 + 19) & 7);
    a1[1] = v4 + 20;
    if (v4 > 0x943) {
      return 0;
    }
    v25 = a2[1];
    v26 = v24 & 7;
    *(_BYTE*)(*a1 + (v24 >> 3)) |= ((v25 & 0x100) != 0) << (v24 & 7);
    v27 = *a1;
    a1[1] = v4 + 21;
    *(_BYTE*)(v27 + ((v4 + 21) >> 3)) |= ((v25 & 0x80) != 0) << ((v4 + 21) & 7);
    v28 = *a1;
    a1[1] = v4 + 22;
    *(_BYTE*)(v28 + ((v4 + 22) >> 3)) |= ((v25 & 0x40) != 0) << ((v4 + 22) & 7);
    v29 = *a1;
    a1[1] = v4 + 23;
    *(_BYTE*)(v29 + ((v4 + 23) >> 3)) |= ((v25 & 0x20) != 0) << ((v4 + 23) & 7);
    v30 = *a1;
    a1[1] = v4 + 24;
    *(_BYTE*)(v30 + ((v4 + 24) >> 3)) |= ((v25 & 0x10) != 0) << (v4 & 7);
    v31 = *a1;
    a1[1] = v4 + 25;
    *(_BYTE*)(v31 + ((v4 + 25) >> 3)) |= ((v25 & 8) != 0) << ((v4 + 25) & 7);
    v32 = *a1;
    a1[1] = v4 + 26;
    *(_BYTE*)(v32 + ((v4 + 26) >> 3)) |= ((v25 & 4) != 0) << ((v4 + 26) & 7);
    v33 = *a1;
    a1[1] = v4 + 27;
    *(_BYTE*)(v33 + ((v4 + 27) >> 3)) |= ((v25 & 2) != 0) << ((v4 + 27) & 7);
    v34 = v4 + 28;
    v4 += 29LL;
    v35 = *a1;
    a1[1] = v34;
    *(_BYTE*)(v35 + (v34 >> 3)) |= (v25 & 1) << v26;
    a1[1] = v4;
  }
  v36 = 1;
  if (a3 == 0) {
    return v36;
  }
  v37 = a4 + 2;
  v38 = 65529;
  v39 = 0;
  v40 = 0;
  do {
    v47 = v38;
    v48 = (unsigned __int16*)&a2[2 * v39];
    v49 = v40;
    ++v39;
    v50 = *v48;
    v51 = v48[1];
    if (v39 >= a3) {
      v40 = 0;
      v38 = 0;
      if ((__int16)v47 >= 1) {
      LABEL_15:
        if ((v49 & 0x8000) != 0) {
          goto LABEL_20;
        }
        LOWORD(v54) = v47;
        LOWORD(v47) = v49;
        LOWORD(v55) = v38;
        LOWORD(v53) = v40;
        goto LABEL_21;
      }
    }
    else {
      v52 = (unsigned __int16*)&a2[2 * v39];
      v40 = *v52 - v50;
      v38 = v52[1] - v51;
      if ((__int16)v47 >= 1) {
        goto LABEL_15;
      }
    }
    if ((__int16)v49 < 1) {
      if ((v47 & 0x8000) != 0) {
        v53 = -v40;
        v55 = -v38;
        v54 = -v47;
        v47 = -v49;
        goto LABEL_21;
      }
      if ((v49 & 0x8000) != 0) {
      LABEL_20:
        v55 = -v40;
        v54 = -v49;
        LOWORD(v53) = v38;
        goto LABEL_21;
      }
      LOWORD(v54) = 0;
      LOWORD(v47) = 0;
      LOWORD(v55) = 0;
      LOWORD(v53) = 0;
    }
    else {
      v53 = -v38;
      v47 = -v47;
      LOWORD(v54) = v49;
      LOWORD(v55) = v40;
    }
  LABEL_21:
    v56 = *a4;
    v57 = 0;
    v58 = 0;
    v59 = v56;
    while (1) {
      v60 = &v37[204 * v58];
      v61 = (char)*v60;
      if ((__int16)v47 >= v61) {
        if ((__int16)v47 > v61) {
          v57 = v58;
          goto LABEL_23;
        }
        v62 = (char)v60[1];
        if ((__int16)v54 >= v62) {
          break;
        }
      }
      v59 = v58;
    LABEL_23:
      v58 = (unsigned __int64)(v59 + v57) >> 1;
      if (v57 == v58) {
        v63 = 0;
        v58 = 0;
        while (1) {
          v64 = &v37[204 * v58];
          v65 = (char)*v64;
          if (v65 <= 0) {
            if (v65 < 0) {
              v63 = v58;
              goto LABEL_32;
            }
            v66 = (char)v64[1];
            if (v66 <= 1) {
              v63 = v58;
              if (v66 == 1) {
                goto LABEL_40;
              }
              goto LABEL_32;
            }
          }
          v56 = v58;
        LABEL_32:
          v58 = (unsigned __int64)(v56 + v63) >> 1;
          if (v63 == v58) {
            v58 = -1;
            goto LABEL_40;
          }
        }
      }
    }
    v57 = v58;
    if ((__int16)v54 > v62) {
      goto LABEL_23;
    }
  LABEL_40:
    v67 = &v37[204 * v58];
    v68 = 0;
    v69 = 0;
    v70 = v67[2];
    v71 = v67 + 4;
    v72 = v70;
    while (2) {
      v73 = (char*)&v71[4 * v69];
      v74 = *v73;
      if ((__int16)v53 >= v74) {
        if ((__int16)v53 > v74) {
          goto LABEL_41;
        }
        v75 = v73[1];
        if ((__int16)v55 >= v75) {
          if ((__int16)v55 <= v75) {
            v76 = 0;
            v77 = *(unsigned __int16*)&v67[4 * v69 + 6];
            v78 = v77 >> 12;
            v79 = v4 + (v77 >> 12);
            if ((unsigned int)v77 >= 0x1000) {
              goto LABEL_59;
            }
            goto LABEL_68;
          }
        LABEL_41:
          v68 = v69;
          v69 = v72;
        }
      }
      v72 = v69;
      v69 = (unsigned __int64)(v69 + v68) >> 1;
      if (v68 != v69) {
        continue;
      }
      break;
    }
    v80 = 0;
    v81 = 0;
    while (2) {
      v82 = (char*)&v71[4 * v81];
      v83 = *v82;
      if (v83 <= 0) {
        if (v83 < 0) {
          goto LABEL_50;
        }
        v84 = v82[1];
        if (v84 <= 1) {
          if (v84 == 1) {
            goto LABEL_58;
          }
        LABEL_50:
          v80 = v81;
          v81 = v70;
        }
      }
      v70 = v81;
      v81 = (unsigned __int64)(v81 + v80) >> 1;
      if (v80 != v81) {
        continue;
      }
      break;
    }
    v81 = -1;
  LABEL_58:
    v76 = 1;
    v77 = *(unsigned __int16*)&v67[4 * v81 + 6];
    v78 = v77 >> 12;
    v79 = v4 + (v77 >> 12);
    if ((unsigned int)v77 >= 0x1000) {
    LABEL_59:
      if (v4 <= 0x95F && v79 <= 0x960) {
        v85 = v77 & 0xFFF;
        v86 = (v77 >> 12) & 7;
        if (v86 != 0) {
          v87 = v78;
          do {
            --v87;
            if (v4 <= 0x95F) {
              v88 = v4 >> 3;
              v89 = v4++ & 7;
              *(_BYTE*)(*a1 + v88) |= ((v85 >> v87) & 1) << v89;
              a1[1] = v4;
            }
            --v86;
          } while (v86 != 0);
        }
        else {
          v87 = v78;
        }
        if ((unsigned int)(v78 - 1) >= 7) {
          v96 = v87 - 8;
          do {
            if (v4 <= 0x95F) {
              v97 = v4 >> 3;
              v98 = v4++ & 7;
              *(_BYTE*)(*a1 + v97) |= ((v85 >> ((unsigned __int8)v96 + 7)) & 1)
                                      << v98;
              a1[1] = v4;
              if (v4 <= 0x95F) {
                v99 = v4 >> 3;
                v100 = v4++ & 7;
                *(_BYTE*)(*a1 + v99) |=
                    ((v85 >> ((unsigned __int8)v96 + 6)) & 1) << v100;
                a1[1] = v4;
                if (v4 <= 0x95F) {
                  v101 = v4 >> 3;
                  v102 = v4++ & 7;
                  *(_BYTE*)(*a1 + v101) |=
                      ((v85 >> ((unsigned __int8)v96 + 5)) & 1) << v102;
                  a1[1] = v4;
                  if (v4 <= 0x95F) {
                    v103 = v4 >> 3;
                    v104 = v4++ & 7;
                    *(_BYTE*)(*a1 + v103) |=
                        ((v85 >> ((unsigned __int8)v96 + 4)) & 1) << v104;
                    a1[1] = v4;
                    if (v4 <= 0x95F) {
                      v105 = v4 >> 3;
                      v106 = v4++ & 7;
                      *(_BYTE*)(*a1 + v105) |=
                          ((v85 >> ((unsigned __int8)v96 + 3)) & 1) << v106;
                      a1[1] = v4;
                      if (v4 <= 0x95F) {
                        v107 = v4 >> 3;
                        v108 = v4++ & 7;
                        *(_BYTE*)(*a1 + v107) |=
                            ((v85 >> ((unsigned __int8)v96 + 2)) & 1) << v108;
                        a1[1] = v4;
                        if (v4 <= 0x95F) {
                          v109 = v4 >> 3;
                          v110 = v4++ & 7;
                          *(_BYTE*)(*a1 + v109) |=
                              ((v85 >> ((unsigned __int8)v96 + 1)) & 1) << v110;
                          a1[1] = v4;
                          if (v4 <= 0x95F) {
                            v111 = v4 >> 3;
                            v112 = v4++ & 7;
                            *(_BYTE*)(*a1 + v111) |= ((v85 >> v96) & 1) << v112;
                            a1[1] = v4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v96 -= 8LL;
          } while (v96 != -8);
        }
      }
    }
  LABEL_68:
    if (v79 > 0x960) {
      return 0;
    }
    if (v76 == 0) {
      continue;
    }
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v53 & 0x20) == 0) << (v4 & 7);
      v90 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v90 + ((v4 + 1) >> 3)) |= ((v53 & 0x10) != 0) << ((v4 + 1) & 7);
      v91 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v91 + ((v4 + 2) >> 3)) |= ((v53 & 8) != 0) << ((v4 + 2) & 7);
      v92 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v92 + ((v4 + 3) >> 3)) |= ((v53 & 4) != 0) << ((v4 + 3) & 7);
      v93 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v93 + ((v4 + 4) >> 3)) |= ((v53 & 2) != 0) << ((v4 + 4) & 7);
      v94 = v4 + 5;
      v4 += 6LL;
      v95 = *a1;
      a1[1] = v94;
      *(_BYTE*)(v95 + (v94 >> 3)) |= (v53 & 1) << (v94 & 7);
      a1[1] = v4;
      goto LABEL_85;
    }
    if (v4 + 6 > 0x960) {
      return 0;
    }
  LABEL_85:
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v55 & 0x20) == 0) << (v4 & 7);
      v41 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v41 + ((v4 + 1) >> 3)) |= ((v55 & 0x10) != 0) << ((v4 + 1) & 7);
      v42 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v42 + ((v4 + 2) >> 3)) |= ((v55 & 8) != 0) << ((v4 + 2) & 7);
      v43 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v43 + ((v4 + 3) >> 3)) |= ((v55 & 4) != 0) << ((v4 + 3) & 7);
      v44 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v44 + ((v4 + 4) >> 3)) |= ((v55 & 2) != 0) << ((v4 + 4) & 7);
      v45 = v4 + 5;
      v4 += 6LL;
      v46 = *a1;
      a1[1] = v45;
      *(_BYTE*)(v46 + (v45 >> 3)) |= (v55 & 1) << (v45 & 7);
      a1[1] = v4;
    }
    else if (v4 + 6 > 0x960) {
      return 0;
    }
  } while (v39 != a3);
  return 1;
}

bool nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  unsigned __int64 v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v45;
  char v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  unsigned int v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned __int64 v77;
  int v78;
  int v79;
  unsigned __int64 v80;
  char v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned int v114;
  _WORD* v115;
  unsigned __int8* v116;
  int v117;
  int v118;
  int v119;
  int v120;
  __int64 v121;
  int v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int8* v127;
  int v128;
  int v129;
  char v130;
  __int64 v131;
  unsigned __int8* v132;
  int v133;
  int v134;
  unsigned __int8* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  int v139;
  unsigned __int64 v140;
  char v141;
  unsigned int v142;
  unsigned __int64 v143;
  unsigned int v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned __int8* v151;
  int v152;
  int v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  char v156;
  unsigned int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  int v168;
  unsigned __int64 v169;
  char v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned int v189;
  _WORD* v190;
  unsigned __int64 v191;

  a1[1] = 0;
  v3 = a1[2];
  v4 = a2[1];
  v5 = a2[2];
  v6 = *a2;
  if (v4 >= v5) {
    v9 = 0;
  LABEL_3:
    v10 = 0;
    if (v4 >= v5) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v7 = v4 >> 3;
  v8 = a2[1] & 7;
  ++v4;
  LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
  a2[1] = v4;
  v9 = 2 * (((unsigned int)v7 >> v8) & 1);
  if (v4 >= v5) {
    goto LABEL_3;
  }
  v26 = v4 >> 3;
  v27 = v4++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v6 + v26);
  a2[1] = v4;
  v10 = ((unsigned int)v26 >> v27) & 1;
  if (v4 >= v5) {
  LABEL_4:
    v11 = 0;
    v12 = v10 | v9;
    if (v4 >= v5) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v28 = v4 >> 3;
  v29 = v4++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v6 + v28);
  a2[1] = v4;
  v11 = 2 * (((unsigned int)v28 >> v29) & 1);
  v12 = v10 | v9;
  if (v4 >= v5) {
  LABEL_5:
    v13 = 0;
    v14 = v11 | (4 * v12);
    if (v4 >= v5) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v30 = v4 >> 3;
  v31 = v4++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v6 + v30);
  a2[1] = v4;
  v13 = ((unsigned int)v30 >> v31) & 1;
  v14 = v11 | (4 * v12);
  if (v4 >= v5) {
  LABEL_6:
    v15 = 0;
    v16 = v14 | v13;
    if (v4 >= v5) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v32 = v4 >> 3;
  v33 = v4++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v6 + v32);
  a2[1] = v4;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v4 >= v5) {
  LABEL_7:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v4 >= v5) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v34 = v4 >> 3;
  v35 = v4++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v6 + v34);
  a2[1] = v4;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v4 >= v5) {
  LABEL_8:
    v19 = 0;
    v20 = v18 | v17;
    if (v4 >= v5) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v36 = v4 >> 3;
  v37 = v4++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v6 + v36);
  a2[1] = v4;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v18 | v17;
  if (v4 >= v5) {
  LABEL_9:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v4 >= v5) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v38 = v4 >> 3;
  v39 = v4++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v6 + v38);
  a2[1] = v4;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v4 >= v5) {
  LABEL_10:
    v23 = 0;
    v24 = v22 | v21;
    if (v4 >= v5) {
      goto LABEL_11;
    }
  LABEL_22:
    v42 = v4 >> 3;
    v43 = v4++ & 7;
    LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
    a2[1] = v4;
    v25 = v23 | (4 * v24) | ((unsigned int)v42 >> v43) & 1;
    if (v3 >= v25) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v40 = v4 >> 3;
  v41 = v4++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v6 + v40);
  a2[1] = v4;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v22 | v21;
  if (v4 < v5) {
    goto LABEL_22;
  }
LABEL_11:
  v25 = v23 | (4 * v24);
  if (v3 < v25) {
    return false;
  }
LABEL_24:
  if (v4 >= v5) {
    v47 = 0;
  LABEL_26:
    v48 = 0;
    if (v4 >= v5) {
      goto LABEL_27;
    }
    goto LABEL_47;
  }
  v45 = v4 >> 3;
  v46 = v4++ & 7;
  LODWORD(v45) = *(unsigned __int8*)(v6 + v45);
  a2[1] = v4;
  v47 = 2 * (((unsigned int)v45 >> v46) & 1);
  if (v4 >= v5) {
    goto LABEL_26;
  }
  v80 = v4 >> 3;
  v81 = v4++ & 7;
  LODWORD(v80) = *(unsigned __int8*)(v6 + v80);
  a2[1] = v4;
  v48 = ((unsigned int)v80 >> v81) & 1;
  if (v4 >= v5) {
  LABEL_27:
    v49 = 0;
    if (v4 >= v5) {
      goto LABEL_28;
    }
    goto LABEL_48;
  }
LABEL_47:
  v82 = v4 >> 3;
  v83 = v4++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v6 + v82);
  a2[1] = v4;
  v49 = 2 * (((unsigned int)v82 >> v83) & 1);
  if (v4 >= v5) {
  LABEL_28:
    v50 = 0;
    if (v4 >= v5) {
      goto LABEL_29;
    }
    goto LABEL_49;
  }
LABEL_48:
  v84 = v4 >> 3;
  v85 = v4++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v6 + v84);
  a2[1] = v4;
  v50 = ((unsigned int)v84 >> v85) & 1;
  if (v4 >= v5) {
  LABEL_29:
    v51 = 0;
    if (v4 >= v5) {
      goto LABEL_30;
    }
    goto LABEL_50;
  }
LABEL_49:
  v86 = v4 >> 3;
  v87 = v4++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v6 + v86);
  a2[1] = v4;
  v51 = 2 * (((unsigned int)v86 >> v87) & 1);
  if (v4 >= v5) {
  LABEL_30:
    v52 = 0;
    if (v4 >= v5) {
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_50:
  v88 = v4 >> 3;
  v89 = v4++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v6 + v88);
  a2[1] = v4;
  v52 = ((unsigned int)v88 >> v89) & 1;
  if (v4 >= v5) {
  LABEL_31:
    v53 = 0;
    if (v4 >= v5) {
      goto LABEL_32;
    }
    goto LABEL_52;
  }
LABEL_51:
  v90 = v4 >> 3;
  v91 = v4++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v6 + v90);
  a2[1] = v4;
  v53 = 2 * (((unsigned int)v90 >> v91) & 1);
  if (v4 >= v5) {
  LABEL_32:
    v54 = 0;
    if (v4 >= v5) {
      goto LABEL_33;
    }
    goto LABEL_53;
  }
LABEL_52:
  v92 = v4 >> 3;
  v93 = v4++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v6 + v92);
  a2[1] = v4;
  v54 = ((unsigned int)v92 >> v93) & 1;
  if (v4 >= v5) {
  LABEL_33:
    v55 = 0;
    if (v4 >= v5) {
      goto LABEL_34;
    }
    goto LABEL_54;
  }
LABEL_53:
  v94 = v4 >> 3;
  v95 = v4++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v6 + v94);
  a2[1] = v4;
  v55 = 2 * (((unsigned int)v94 >> v95) & 1);
  if (v4 >= v5) {
  LABEL_34:
    v56 = 0;
    if (v4 >= v5) {
      goto LABEL_35;
    }
    goto LABEL_55;
  }
LABEL_54:
  v96 = v4 >> 3;
  v97 = v4++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v6 + v96);
  a2[1] = v4;
  v56 = ((unsigned int)v96 >> v97) & 1;
  if (v4 >= v5) {
  LABEL_35:
    v57 = 0;
    if (v4 >= v5) {
      goto LABEL_36;
    }
    goto LABEL_56;
  }
LABEL_55:
  v98 = v4 >> 3;
  v99 = v4++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v6 + v98);
  a2[1] = v4;
  v57 = 2 * (((unsigned int)v98 >> v99) & 1);
  if (v4 >= v5) {
  LABEL_36:
    v58 = 0;
    v59 = v48 | v47;
    if (v4 >= v5) {
      goto LABEL_37;
    }
    goto LABEL_57;
  }
LABEL_56:
  v100 = v4 >> 3;
  v101 = v4++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v6 + v100);
  a2[1] = v4;
  v58 = ((unsigned int)v100 >> v101) & 1;
  v59 = v48 | v47;
  if (v4 >= v5) {
  LABEL_37:
    v60 = 0;
    v61 = v49 | (4 * v59);
    v62 = v58 | v57;
    if (v4 >= v5) {
      goto LABEL_38;
    }
    goto LABEL_58;
  }
LABEL_57:
  v102 = v4 >> 3;
  v103 = v4++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v6 + v102);
  a2[1] = v4;
  v60 = 2 * (((unsigned int)v102 >> v103) & 1);
  v61 = v49 | (4 * v59);
  v62 = v58 | v57;
  if (v4 >= v5) {
  LABEL_38:
    v63 = 0;
    v64 = v60 | (4 * v62);
    v65 = v50 | v61;
    if (v4 >= v5) {
      goto LABEL_39;
    }
    goto LABEL_59;
  }
LABEL_58:
  v104 = v4 >> 3;
  v105 = v4++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v6 + v104);
  a2[1] = v4;
  v63 = ((unsigned int)v104 >> v105) & 1;
  v64 = v60 | (4 * v62);
  v65 = v50 | v61;
  if (v4 >= v5) {
  LABEL_39:
    v66 = 0;
    v67 = v51 | (4 * v65);
    v68 = v63 | v64;
    if (v4 >= v5) {
      goto LABEL_40;
    }
    goto LABEL_60;
  }
LABEL_59:
  v106 = v4 >> 3;
  v107 = v4++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v6 + v106);
  a2[1] = v4;
  v66 = 2 * (((unsigned int)v106 >> v107) & 1);
  v67 = v51 | (4 * v65);
  v68 = v63 | v64;
  if (v4 >= v5) {
  LABEL_40:
    v69 = 0;
    v70 = v66 | (4 * v68);
    v71 = v52 | v67;
    if (v4 >= v5) {
      goto LABEL_41;
    }
    goto LABEL_61;
  }
LABEL_60:
  v108 = v4 >> 3;
  v109 = v4++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v6 + v108);
  a2[1] = v4;
  v69 = ((unsigned int)v108 >> v109) & 1;
  v70 = v66 | (4 * v68);
  v71 = v52 | v67;
  if (v4 >= v5) {
  LABEL_41:
    v72 = 0;
    v73 = v53 | (4 * v71);
    v74 = v69 | v70;
    if (v4 >= v5) {
      goto LABEL_42;
    }
    goto LABEL_62;
  }
LABEL_61:
  v110 = v4 >> 3;
  v111 = v4++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v6 + v110);
  a2[1] = v4;
  v72 = 2 * (((unsigned int)v110 >> v111) & 1);
  v73 = v53 | (4 * v71);
  v74 = v69 | v70;
  if (v4 >= v5) {
  LABEL_42:
    v75 = v54 | v73;
    v76 = v72 | (4 * v74);
    if (v4 >= v5) {
      goto LABEL_43;
    }
    goto LABEL_63;
  }
LABEL_62:
  v112 = v4 >> 3;
  v113 = v4++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v6 + v112);
  a2[1] = v4;
  v75 = v54 | v73;
  v76 = ((unsigned int)v112 >> v113) & 1 | v72 | (4 * v74);
  if (v4 >= v5) {
  LABEL_43:
    v77 = a1[1];
    v78 = 2 * v76;
    v79 = v56 | v55 | (4 * v75);
    if (v77 >= v3) {
      goto LABEL_65;
    }
    goto LABEL_64;
  }
LABEL_63:
  v114 = *(unsigned __int8*)(v6 + (v4 >> 3));
  a2[1] = v4 + 1;
  v77 = a1[1];
  v78 = (v114 >> (v4 & 7)) & 1 | (2 * v76);
  v79 = v56 | v55 | (4 * v75);
  if (v77 < v3) {
  LABEL_64:
    v115 = (_WORD*)(*a1 + 4 * v77);
    *v115 = v79;
    v115[1] = v78;
    a1[1] = v77 + 1;
  }
LABEL_65:
  v116 = a3 + 2;
  v117 = 65529;
  v118 = 0;
  while (2) {
    if ((__int16)v117 < 1) {
      if ((__int16)v118 >= 1) {
        v119 = -v117;
        LOWORD(v120) = v118;
        goto LABEL_71;
      }
      if ((v117 & 0x8000) != 0) {
        v119 = -v118;
        v120 = -v117;
        goto LABEL_71;
      }
      if ((v118 & 0x8000) == 0) {
        LOWORD(v119) = 0;
        LOWORD(v120) = 0;
        goto LABEL_71;
      }
      goto LABEL_68;
    }
    LOWORD(v119) = v118;
    LOWORD(v120) = v117;
    if ((v118 & 0x8000) != 0) {
    LABEL_68:
      v120 = -v118;
      LOWORD(v119) = v117;
    }
  LABEL_71:
    v121 = *a3;
    v122 = (unsigned __int16)v119;
    v123 = (unsigned __int16)v120;
    v124 = 0;
    v125 = 0;
    v126 = v121;
    while (1) {
      v127 = &v116[204 * v125];
      v128 = (char)*v127;
      if (v122 >= v128) {
        if (v122 <= v128) {
          v129 = (char)v127[1];
          if (v123 < v129) {
            goto LABEL_73;
          }
          if (v123 <= v129) {
            break;
          }
        }
        v124 = v125;
        v125 = v126;
      }
    LABEL_73:
      v126 = v125;
      v125 = (unsigned __int64)(v125 + v124) >> 1;
      if (v124 == v125) {
        v131 = 0;
        v125 = 0;
        while (1) {
          v132 = &v116[204 * v125];
          v133 = (char)*v132;
          if (v133 <= 0) {
            if ((v133 & 0x80000000) == 0) {
              v134 = (char)v132[1];
              if (v134 > 1) {
                goto LABEL_81;
              }
              if (v134 == 1) {
                v130 = 0;
                goto LABEL_88;
              }
            }
            v131 = v125;
            v125 = v121;
          }
        LABEL_81:
          v121 = v125;
          v125 = (unsigned __int64)(v125 + v131) >> 1;
          if (v131 == v125) {
            v130 = *(a3 - 202);
            v125 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v130 = v128;
  LABEL_88:
    if (v122 != (unsigned __int16)v130) {
      return false;
    }
    v135 = &v116[204 * v125];
    if (v123 != (unsigned __int16)(char)v135[1]) {
      return false;
    }
    v137 = a2[1];
    v136 = a2[2];
    v138 = *a2;
    v139 = 0;
    while (2) {
      if (v137 >= v136) {
        v142 = 0;
      }
      else {
        v140 = v137 >> 3;
        v141 = v137++ & 7;
        LODWORD(v140) = *(unsigned __int8*)(v138 + v140);
        a2[1] = v137;
        v142 = ((unsigned int)v140 >> v141) & 1;
      }
      v143 = v135[2];
      v144 = v142 & 0xFFFFF001 | (2 * (v139 & 0x7FF));
      v145 = 0;
      v146 = 0;
      v147 = (v139 & 0xFFFFF000) + 4096;
      v139 = v144 | v147;
      v148 = (unsigned __int16)v147 >> 12;
    LABEL_97:
      v149 = *(unsigned __int16*)&v135[4 * v146 + 6];
      if (v148 < v149 >> 12) {
        goto LABEL_96;
      }
      if (v148 > v149 >> 12) {
        goto LABEL_95;
      }
      v150 = v149 & 0xFFF;
      if (v144 < v150) {
        goto LABEL_96;
      }
      if (v144 > v150) {
      LABEL_95:
        v145 = v146;
        v146 = v143;
      LABEL_96:
        v143 = v146;
        v146 = (v146 + v145) >> 1;
        if (v145 == v146) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v151 = &v135[4 * v146];
    v152 = (char)v151[4];
    v153 = (char)v151[5];
    if (v152 == 0) {
      if (v153 == 1) {
        if (v137 >= v136) {
          v157 = 0;
        LABEL_109:
          v158 = 0;
          if (v137 >= v136) {
            goto LABEL_110;
          }
        LABEL_127:
          v171 = v137 >> 3;
          v172 = v137++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v138 + v171);
          a2[1] = v137;
          v159 = 2 * (((unsigned int)v171 >> v172) & 1);
          if (v137 < v136) {
            goto LABEL_128;
          }
        LABEL_111:
          v160 = 0;
          if (v137 >= v136) {
            goto LABEL_112;
          }
        LABEL_129:
          v175 = v137 >> 3;
          v176 = v137++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v138 + v175);
          a2[1] = v137;
          v161 = 2 * (((unsigned int)v175 >> v176) & 1);
          if (v137 < v136) {
            goto LABEL_130;
          }
        LABEL_113:
          v162 = 0;
          if (v137 >= v136) {
            goto LABEL_114;
          }
        LABEL_131:
          v179 = v137 >> 3;
          v180 = v137++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v138 + v179);
          a2[1] = v137;
          v163 = 2 * (((unsigned int)v179 >> v180) & 1);
          if (v137 < v136) {
            goto LABEL_132;
          }
        LABEL_115:
          v164 = 0;
          if (v137 >= v136) {
            goto LABEL_116;
          }
        LABEL_133:
          v183 = v137 >> 3;
          v184 = v137++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v138 + v183);
          a2[1] = v137;
          v165 = 2 * (((unsigned int)v183 >> v184) & 1);
          if (v137 < v136) {
            goto LABEL_134;
          }
        LABEL_117:
          v166 = 0;
          if (v137 >= v136) {
            goto LABEL_118;
          }
        LABEL_135:
          v187 = v137 >> 3;
          v188 = v137++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v138 + v187);
          a2[1] = v137;
          v167 = 2 * (((unsigned int)v187 >> v188) & 1);
          if (v137 < v136) {
            goto LABEL_136;
          }
        LABEL_119:
          v168 = 0;
        }
        else {
          v155 = v137 >> 3;
          v156 = v137++ & 7;
          LODWORD(v155) = *(unsigned __int8*)(v138 + v155);
          a2[1] = v137;
          v157 = 2 * (((unsigned int)v155 >> v156) & 1);
          if (v137 >= v136) {
            goto LABEL_109;
          }
          v169 = v137 >> 3;
          v170 = v137++ & 7;
          LODWORD(v169) = *(unsigned __int8*)(v138 + v169);
          a2[1] = v137;
          v158 = ((unsigned int)v169 >> v170) & 1;
          if (v137 < v136) {
            goto LABEL_127;
          }
        LABEL_110:
          v159 = 0;
          if (v137 >= v136) {
            goto LABEL_111;
          }
        LABEL_128:
          v173 = v137 >> 3;
          v174 = v137++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v138 + v173);
          a2[1] = v137;
          v160 = ((unsigned int)v173 >> v174) & 1;
          if (v137 < v136) {
            goto LABEL_129;
          }
        LABEL_112:
          v161 = 0;
          if (v137 >= v136) {
            goto LABEL_113;
          }
        LABEL_130:
          v177 = v137 >> 3;
          v178 = v137++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v138 + v177);
          a2[1] = v137;
          v162 = ((unsigned int)v177 >> v178) & 1;
          if (v137 < v136) {
            goto LABEL_131;
          }
        LABEL_114:
          v163 = 0;
          if (v137 >= v136) {
            goto LABEL_115;
          }
        LABEL_132:
          v181 = v137 >> 3;
          v182 = v137++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v138 + v181);
          a2[1] = v137;
          v164 = ((unsigned int)v181 >> v182) & 1;
          if (v137 < v136) {
            goto LABEL_133;
          }
        LABEL_116:
          v165 = 0;
          if (v137 >= v136) {
            goto LABEL_117;
          }
        LABEL_134:
          v185 = v137 >> 3;
          v186 = v137++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v138 + v185);
          a2[1] = v137;
          v166 = ((unsigned int)v185 >> v186) & 1;
          if (v137 < v136) {
            goto LABEL_135;
          }
        LABEL_118:
          v167 = 0;
          if (v137 >= v136) {
            goto LABEL_119;
          }
        LABEL_136:
          v189 = *(unsigned __int8*)(v138 + (v137 >> 3));
          a2[1] = v137 + 1;
          v168 = (v189 >> (v137 & 7)) & 1;
        }
        v152 = (v161 | (4 * (v160 | v159 | (4 * (v158 | v157))))) + v162 - 32;
        v153 = (v167 | (4 * (v166 | v165 | (4 * (v164 | v163))))) + v168 - 32;
        if ((__int16)v117 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v152 = 0;
        if ((__int16)v117 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v118 & 0x8000) != 0) {
        goto LABEL_143;
      }
      v118 = v152;
      v152 = v153;
      v154 = a1[1];
      if (((unsigned __int16)v118 | (unsigned __int16)v153) == 0) {
        return v25 == v154;
      }
      goto LABEL_144;
    }
    if ((__int16)v117 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v118 < 1) {
      if ((v117 & 0x8000) == 0) {
        if ((v118 & 0x8000) == 0) {
          v154 = a1[1];
          return v25 == v154;
        }
      LABEL_143:
        v118 = -v153;
        v154 = a1[1];
        if (((unsigned __int16)-(__int16)v153 | (unsigned __int16)v152) == 0) {
          return v25 == v154;
        }
        goto LABEL_144;
      }
      v118 = -v152;
      v152 = -v153;
      v154 = a1[1];
      if (((unsigned __int16)v118 | (unsigned __int16)-(__int16)v153) == 0) {
        return v25 == v154;
      }
    LABEL_144:
      if (v154 >= v3) {
        return false;
      }
      v78 += v152;
      v79 += v118;
      v190 = (_WORD*)(*a1 + 4 * v154);
      *v190 = v79;
      v190[1] = v78;
      v191 = v154 + 1;
      a1[1] = v154 + 1;
      if (v154 >= v25) {
        return false;
      }
      v117 = v152;
      if (((unsigned __int16)v118 | (unsigned __int16)v152) == 0) {
        v154 = v191;
        return v25 == v154;
      }
      continue;
    }
    break;
  }
  v152 = -v152;
  v118 = v153;
  v154 = a1[1];
  if (((unsigned __int16)v153 | (unsigned __int16)v152) != 0) {
    goto LABEL_144;
  }
  return v25 == v154;
}

bool nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteImplROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3,
    __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*))
{
  unsigned __int64 v4;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  char v47;
  unsigned __int64 v49;
  char v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  int v117;
  int v118;
  unsigned __int64 v119;
  unsigned __int8* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int8* v131;
  int v132;
  int v133;
  char v134;
  __int64 v135;
  unsigned __int8* v136;
  int v137;
  int v138;
  unsigned __int8* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  int v143;
  unsigned __int64 v144;
  char v145;
  unsigned int v146;
  unsigned __int64 v147;
  unsigned int v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned __int8* v155;
  int v156;
  int v157;
  unsigned __int64 v158;
  char v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned __int64 v189;
  char v190;
  unsigned int v191;
  unsigned __int64 v192;
  _QWORD* v193;
  unsigned __int64 v195;
  _WORD v196[2];
  __int16 v197;
  _BYTE v198[10];

  v4 = a1[2];
  a1[1] = 0;
  v8 = *a2;
  v195 = v4;
  v9 = a2[1];
  v10 = a2[2];
  if (v9 >= v10) {
    v13 = 0;
  LABEL_3:
    v14 = 0;
    if (v9 >= v10) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v11 = v9 >> 3;
  v12 = a2[1] & 7;
  ++v9;
  LODWORD(v11) = *(unsigned __int8*)(v8 + v11);
  a2[1] = v9;
  v13 = 2 * (((unsigned int)v11 >> v12) & 1);
  if (v9 >= v10) {
    goto LABEL_3;
  }
  v30 = v9 >> 3;
  v31 = v9++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v8 + v30);
  a2[1] = v9;
  v14 = ((unsigned int)v30 >> v31) & 1;
  if (v9 >= v10) {
  LABEL_4:
    v15 = 0;
    v16 = v14 | v13;
    if (v9 >= v10) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v32 = v9 >> 3;
  v33 = v9++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v8 + v32);
  a2[1] = v9;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v9 >= v10) {
  LABEL_5:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v9 >= v10) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v34 = v9 >> 3;
  v35 = v9++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v8 + v34);
  a2[1] = v9;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v9 >= v10) {
  LABEL_6:
    v19 = 0;
    v20 = v17 | v18;
    if (v9 >= v10) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v36 = v9 >> 3;
  v37 = v9++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v8 + v36);
  a2[1] = v9;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v17 | v18;
  if (v9 >= v10) {
  LABEL_7:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v9 >= v10) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v38 = v9 >> 3;
  v39 = v9++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v8 + v38);
  a2[1] = v9;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v9 >= v10) {
  LABEL_8:
    v23 = 0;
    v24 = v21 | v22;
    if (v9 >= v10) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v40 = v9 >> 3;
  v41 = v9++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v8 + v40);
  a2[1] = v9;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v21 | v22;
  if (v9 >= v10) {
  LABEL_9:
    v25 = 0;
    v26 = v23 | (4 * v24);
    if (v9 >= v10) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v42 = v9 >> 3;
  v43 = v9++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v8 + v42);
  a2[1] = v9;
  v25 = ((unsigned int)v42 >> v43) & 1;
  v26 = v23 | (4 * v24);
  if (v9 >= v10) {
  LABEL_10:
    v27 = 0;
    v28 = v25 | v26;
    if (v9 >= v10) {
      goto LABEL_11;
    }
  LABEL_22:
    v46 = v9 >> 3;
    v47 = v9++ & 7;
    LODWORD(v46) = *(unsigned __int8*)(v8 + v46);
    a2[1] = v9;
    v29 = ((unsigned int)v46 >> v47) & 1 | v27 | (4 * v28);
    if (v195 >= v29) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v44 = v9 >> 3;
  v45 = v9++ & 7;
  LODWORD(v44) = *(unsigned __int8*)(v8 + v44);
  a2[1] = v9;
  v27 = 2 * (((unsigned int)v44 >> v45) & 1);
  v28 = v25 | v26;
  if (v9 < v10) {
    goto LABEL_22;
  }
LABEL_11:
  v29 = v27 | (4 * v28);
  if (v195 < v29) {
    return false;
  }
LABEL_24:
  if (v9 >= v10) {
    v51 = 0;
  LABEL_26:
    v52 = 0;
    if (v9 >= v10) {
      goto LABEL_27;
    }
    goto LABEL_46;
  }
  v49 = v9 >> 3;
  v50 = v9++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v8 + v49);
  a2[1] = v9;
  v51 = 2 * (((unsigned int)v49 >> v50) & 1);
  if (v9 >= v10) {
    goto LABEL_26;
  }
  v82 = v9 >> 3;
  v83 = v9++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v8 + v82);
  a2[1] = v9;
  v52 = ((unsigned int)v82 >> v83) & 1;
  if (v9 >= v10) {
  LABEL_27:
    v53 = 0;
    if (v9 >= v10) {
      goto LABEL_28;
    }
    goto LABEL_47;
  }
LABEL_46:
  v84 = v9 >> 3;
  v85 = v9++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v8 + v84);
  a2[1] = v9;
  v53 = 2 * (((unsigned int)v84 >> v85) & 1);
  if (v9 >= v10) {
  LABEL_28:
    v54 = 0;
    if (v9 >= v10) {
      goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_47:
  v86 = v9 >> 3;
  v87 = v9++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v8 + v86);
  a2[1] = v9;
  v54 = ((unsigned int)v86 >> v87) & 1;
  if (v9 >= v10) {
  LABEL_29:
    v55 = 0;
    if (v9 >= v10) {
      goto LABEL_30;
    }
    goto LABEL_49;
  }
LABEL_48:
  v88 = v9 >> 3;
  v89 = v9++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v8 + v88);
  a2[1] = v9;
  v55 = 2 * (((unsigned int)v88 >> v89) & 1);
  if (v9 >= v10) {
  LABEL_30:
    v56 = 0;
    if (v9 >= v10) {
      goto LABEL_31;
    }
    goto LABEL_50;
  }
LABEL_49:
  v90 = v9 >> 3;
  v91 = v9++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v8 + v90);
  a2[1] = v9;
  v56 = ((unsigned int)v90 >> v91) & 1;
  if (v9 >= v10) {
  LABEL_31:
    v57 = 0;
    if (v9 >= v10) {
      goto LABEL_32;
    }
    goto LABEL_51;
  }
LABEL_50:
  v92 = v9 >> 3;
  v93 = v9++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v8 + v92);
  a2[1] = v9;
  v57 = 2 * (((unsigned int)v92 >> v93) & 1);
  if (v9 >= v10) {
  LABEL_32:
    v58 = 0;
    if (v9 >= v10) {
      goto LABEL_33;
    }
    goto LABEL_52;
  }
LABEL_51:
  v94 = v9 >> 3;
  v95 = v9++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v8 + v94);
  a2[1] = v9;
  v58 = ((unsigned int)v94 >> v95) & 1;
  if (v9 >= v10) {
  LABEL_33:
    v59 = 0;
    if (v9 >= v10) {
      goto LABEL_34;
    }
    goto LABEL_53;
  }
LABEL_52:
  v96 = v9 >> 3;
  v97 = v9++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v8 + v96);
  a2[1] = v9;
  v59 = 2 * (((unsigned int)v96 >> v97) & 1);
  if (v9 >= v10) {
  LABEL_34:
    v60 = 0;
    if (v9 >= v10) {
      goto LABEL_35;
    }
    goto LABEL_54;
  }
LABEL_53:
  v98 = v9 >> 3;
  v99 = v9++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v8 + v98);
  a2[1] = v9;
  v60 = ((unsigned int)v98 >> v99) & 1;
  if (v9 >= v10) {
  LABEL_35:
    v61 = 0;
    if (v9 >= v10) {
      goto LABEL_36;
    }
    goto LABEL_55;
  }
LABEL_54:
  v100 = v9 >> 3;
  v101 = v9++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v8 + v100);
  a2[1] = v9;
  v61 = 2 * (((unsigned int)v100 >> v101) & 1);
  if (v9 >= v10) {
  LABEL_36:
    v62 = 0;
    v63 = v52 | v51;
    if (v9 >= v10) {
      goto LABEL_37;
    }
    goto LABEL_56;
  }
LABEL_55:
  v102 = v9 >> 3;
  v103 = v9++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v8 + v102);
  a2[1] = v9;
  v62 = ((unsigned int)v102 >> v103) & 1;
  v63 = v52 | v51;
  if (v9 >= v10) {
  LABEL_37:
    v64 = 0;
    v65 = v53 | (4 * v63);
    v66 = v62 | v61;
    if (v9 >= v10) {
      goto LABEL_38;
    }
    goto LABEL_57;
  }
LABEL_56:
  v104 = v9 >> 3;
  v105 = v9++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v8 + v104);
  a2[1] = v9;
  v64 = 2 * (((unsigned int)v104 >> v105) & 1);
  v65 = v53 | (4 * v63);
  v66 = v62 | v61;
  if (v9 >= v10) {
  LABEL_38:
    v67 = 0;
    v68 = v64 | (4 * v66);
    v69 = v54 | v65;
    if (v9 >= v10) {
      goto LABEL_39;
    }
    goto LABEL_58;
  }
LABEL_57:
  v106 = v9 >> 3;
  v107 = v9++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v8 + v106);
  a2[1] = v9;
  v67 = ((unsigned int)v106 >> v107) & 1;
  v68 = v64 | (4 * v66);
  v69 = v54 | v65;
  if (v9 >= v10) {
  LABEL_39:
    v70 = 0;
    v71 = v55 | (4 * v69);
    v72 = v67 | v68;
    if (v9 >= v10) {
      goto LABEL_40;
    }
    goto LABEL_59;
  }
LABEL_58:
  v108 = v9 >> 3;
  v109 = v9++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v8 + v108);
  a2[1] = v9;
  v70 = 2 * (((unsigned int)v108 >> v109) & 1);
  v71 = v55 | (4 * v69);
  v72 = v67 | v68;
  if (v9 >= v10) {
  LABEL_40:
    v73 = 0;
    v74 = v70 | (4 * v72);
    v75 = v56 | v71;
    if (v9 >= v10) {
      goto LABEL_41;
    }
    goto LABEL_60;
  }
LABEL_59:
  v110 = v9 >> 3;
  v111 = v9++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v8 + v110);
  a2[1] = v9;
  v73 = ((unsigned int)v110 >> v111) & 1;
  v74 = v70 | (4 * v72);
  v75 = v56 | v71;
  if (v9 >= v10) {
  LABEL_41:
    v76 = 0;
    v77 = v57 | (4 * v75);
    v78 = v73 | v74;
    if (v9 >= v10) {
      goto LABEL_42;
    }
  LABEL_61:
    v114 = v9 >> 3;
    v115 = v9++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v8 + v114);
    a2[1] = v9;
    v79 = v58 | v77;
    v80 = ((unsigned int)v114 >> v115) & 1 | v76 | (4 * v78);
    if (v9 >= v10) {
      goto LABEL_43;
    }
  LABEL_62:
    v116 = *(unsigned __int8*)(v8 + (v9 >> 3));
    a2[1] = v9 + 1;
    v81 = (v116 >> (v9 & 7)) & 1;
    goto LABEL_63;
  }
LABEL_60:
  v112 = v9 >> 3;
  v113 = v9++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v8 + v112);
  a2[1] = v9;
  v76 = 2 * (((unsigned int)v112 >> v113) & 1);
  v77 = v57 | (4 * v75);
  v78 = v73 | v74;
  if (v9 < v10) {
    goto LABEL_61;
  }
LABEL_42:
  v79 = v58 | v77;
  v80 = v76 | (4 * v78);
  if (v9 < v10) {
    goto LABEL_62;
  }
LABEL_43:
  v81 = 0;
LABEL_63:
  v117 = v81 | (2 * v80);
  *(_WORD*)&v198[8] = 0;
  v118 = v60 | v59 | (4 * v79);
  v197 = v60 | v59 | (4 * v79);
  *(_QWORD*)v198 = (unsigned __int16)(v81 | (2 * v80));
  a4((void*)&v198[2], &v197);
  v119 = a1[1];
  if (v119 < v195) {
    *(_QWORD*)(*a1 + 8 * v119) = *(_QWORD*)&v198[2];
    a1[1] = v119 + 1;
  }
  v120 = a3 + 2;
  v121 = 65529;
  v122 = 0;
  do {
    if ((__int16)v121 < 1) {
      if ((__int16)v122 >= 1) {
        v123 = -v121;
        LOWORD(v124) = v122;
        goto LABEL_71;
      }
      if ((v121 & 0x8000) != 0) {
        v123 = -v122;
        v124 = -v121;
        goto LABEL_71;
      }
      if ((v122 & 0x8000) == 0) {
        LOWORD(v123) = 0;
        LOWORD(v124) = 0;
        goto LABEL_71;
      }
    LABEL_68:
      v124 = -v122;
      LOWORD(v123) = v121;
      goto LABEL_71;
    }
    LOWORD(v123) = v122;
    LOWORD(v124) = v121;
    if ((v122 & 0x8000) != 0) {
      goto LABEL_68;
    }
  LABEL_71:
    v125 = *a3;
    v126 = (unsigned __int16)v123;
    v127 = (unsigned __int16)v124;
    v128 = 0;
    v129 = 0;
    v130 = v125;
    while (1) {
      v131 = &v120[204 * v129];
      v132 = (char)*v131;
      if (v126 >= v132) {
        if (v126 <= v132) {
          v133 = (char)v131[1];
          if (v127 < v133) {
            goto LABEL_73;
          }
          if (v127 <= v133) {
            break;
          }
        }
        v128 = v129;
        v129 = v130;
      }
    LABEL_73:
      v130 = v129;
      v129 = (unsigned __int64)(v129 + v128) >> 1;
      if (v128 == v129) {
        v135 = 0;
        v129 = 0;
        while (1) {
          v136 = &v120[204 * v129];
          v137 = (char)*v136;
          if (v137 <= 0) {
            if ((v137 & 0x80000000) == 0) {
              v138 = (char)v136[1];
              if (v138 > 1) {
                goto LABEL_81;
              }
              if (v138 == 1) {
                v134 = 0;
                goto LABEL_88;
              }
            }
            v135 = v129;
            v129 = v125;
          }
        LABEL_81:
          v125 = v129;
          v129 = (unsigned __int64)(v129 + v135) >> 1;
          if (v135 == v129) {
            v134 = *(a3 - 202);
            v129 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v134 = v132;
  LABEL_88:
    if (v126 != (unsigned __int16)v134) {
      return false;
    }
    v139 = &v120[204 * v129];
    if (v127 != (unsigned __int16)(char)v139[1]) {
      return false;
    }
    v140 = a2[1];
    v141 = a2[2];
    v142 = *a2;
    v143 = 0;
    while (2) {
      if (v140 >= v141) {
        v146 = 0;
      }
      else {
        v144 = v140 >> 3;
        v145 = v140++ & 7;
        LODWORD(v144) = *(unsigned __int8*)(v142 + v144);
        a2[1] = v140;
        v146 = ((unsigned int)v144 >> v145) & 1;
      }
      v147 = v139[2];
      v148 = v146 & 0xFFFFF001 | (2 * (v143 & 0x7FF));
      v149 = 0;
      v150 = 0;
      v151 = (v143 & 0xFFFFF000) + 4096;
      v143 = v148 | v151;
      v152 = (unsigned __int16)v151 >> 12;
    LABEL_97:
      v153 = *(unsigned __int16*)&v139[4 * v150 + 6];
      if (v152 < v153 >> 12) {
        goto LABEL_96;
      }
      if (v152 > v153 >> 12) {
        goto LABEL_95;
      }
      v154 = v153 & 0xFFF;
      if (v148 < v154) {
        goto LABEL_96;
      }
      if (v148 > v154) {
      LABEL_95:
        v149 = v150;
        v150 = v147;
      LABEL_96:
        v147 = v150;
        v150 = (v150 + v149) >> 1;
        if (v149 == v150) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v155 = &v139[4 * v150];
    v156 = (char)v155[4];
    v157 = (char)v155[5];
    if (v156 == 0) {
      if (v157 == 1) {
        if (v140 >= v141) {
          v160 = 0;
        LABEL_109:
          v161 = 0;
          if (v140 >= v141) {
            goto LABEL_110;
          }
        LABEL_127:
          v173 = v140 >> 3;
          v174 = v140++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v142 + v173);
          a2[1] = v140;
          v162 = 2 * (((unsigned int)v173 >> v174) & 1);
          if (v140 < v141) {
            goto LABEL_128;
          }
        LABEL_111:
          v163 = 0;
          if (v140 >= v141) {
            goto LABEL_112;
          }
        LABEL_129:
          v177 = v140 >> 3;
          v178 = v140++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v142 + v177);
          a2[1] = v140;
          v164 = 2 * (((unsigned int)v177 >> v178) & 1);
          if (v140 < v141) {
            goto LABEL_130;
          }
        LABEL_113:
          v165 = 0;
          if (v140 >= v141) {
            goto LABEL_114;
          }
        LABEL_131:
          v181 = v140 >> 3;
          v182 = v140++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v142 + v181);
          a2[1] = v140;
          v166 = 2 * (((unsigned int)v181 >> v182) & 1);
          if (v140 < v141) {
            goto LABEL_132;
          }
        LABEL_115:
          v147 = 0;
          if (v140 >= v141) {
            goto LABEL_116;
          }
        LABEL_133:
          v185 = v140 >> 3;
          v186 = v140++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v142 + v185);
          a2[1] = v140;
          v167 = 2 * (((unsigned int)v185 >> v186) & 1);
          if (v140 < v141) {
            goto LABEL_134;
          }
        LABEL_117:
          v168 = 0;
          if (v140 >= v141) {
            goto LABEL_118;
          }
        LABEL_135:
          v189 = v140 >> 3;
          v190 = v140++ & 7;
          LODWORD(v189) = *(unsigned __int8*)(v142 + v189);
          a2[1] = v140;
          v169 = 2 * (((unsigned int)v189 >> v190) & 1);
          if (v140 < v141) {
            goto LABEL_136;
          }
        LABEL_119:
          v170 = 0;
        }
        else {
          v158 = v140 >> 3;
          v159 = v140++ & 7;
          LODWORD(v158) = *(unsigned __int8*)(v142 + v158);
          a2[1] = v140;
          v160 = 2 * (((unsigned int)v158 >> v159) & 1);
          if (v140 >= v141) {
            goto LABEL_109;
          }
          v171 = v140 >> 3;
          v172 = v140++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v142 + v171);
          a2[1] = v140;
          v161 = ((unsigned int)v171 >> v172) & 1;
          if (v140 < v141) {
            goto LABEL_127;
          }
        LABEL_110:
          v162 = 0;
          if (v140 >= v141) {
            goto LABEL_111;
          }
        LABEL_128:
          v175 = v140 >> 3;
          v176 = v140++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v142 + v175);
          a2[1] = v140;
          v163 = ((unsigned int)v175 >> v176) & 1;
          if (v140 < v141) {
            goto LABEL_129;
          }
        LABEL_112:
          v164 = 0;
          if (v140 >= v141) {
            goto LABEL_113;
          }
        LABEL_130:
          v179 = v140 >> 3;
          v180 = v140++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v142 + v179);
          a2[1] = v140;
          v165 = ((unsigned int)v179 >> v180) & 1;
          if (v140 < v141) {
            goto LABEL_131;
          }
        LABEL_114:
          v166 = 0;
          if (v140 >= v141) {
            goto LABEL_115;
          }
        LABEL_132:
          v183 = v140 >> 3;
          v184 = v140++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v142 + v183);
          a2[1] = v140;
          v147 = ((unsigned int)v183 >> v184) & 1;
          if (v140 < v141) {
            goto LABEL_133;
          }
        LABEL_116:
          v167 = 0;
          if (v140 >= v141) {
            goto LABEL_117;
          }
        LABEL_134:
          v187 = v140 >> 3;
          v188 = v140++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v142 + v187);
          a2[1] = v140;
          v168 = ((unsigned int)v187 >> v188) & 1;
          if (v140 < v141) {
            goto LABEL_135;
          }
        LABEL_118:
          v169 = 0;
          if (v140 >= v141) {
            goto LABEL_119;
          }
        LABEL_136:
          v191 = *(unsigned __int8*)(v142 + (v140 >> 3));
          a2[1] = v140 + 1;
          v170 = (v191 >> (v140 & 7)) & 1;
        }
        v156 = (v165 | v164 | (4 * (v163 | v162 | (4 * (v161 | v160))))) - 32;
        v157 = (v170 | v169 | (4 * (v168 | v167 | (4 * (v147 | v166))))) - 32;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v156 = 0;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v122 & 0x8000) == 0) {
        v122 = v156;
        v156 = v157;
        if (((unsigned __int16)v122 | (unsigned __int16)v157) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
    LABEL_143:
      v122 = -v157;
      if (((unsigned __int16)-(__int16)v157 | (unsigned __int16)v156) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_144;
    }
    if ((__int16)v121 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v122 < 1) {
      if ((v121 & 0x8000) != 0) {
        v122 = -v156;
        v156 = -v157;
        if (((unsigned __int16)v122 | (unsigned __int16)-(__int16)v157) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
      if ((v122 & 0x8000) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_143;
    }
    v156 = -v156;
    v122 = v157;
    if (((unsigned __int16)v157 | (unsigned __int16)v156) == 0) {
      return v29 == a1[1];
    }
  LABEL_144:
    if (a1[1] >= v195) {
      return false;
    }
    v117 += v156;
    v118 += v122;
    *(_QWORD*)&v198[2] = 0;
    v196[0] = v118;
    v196[1] = v117;
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, _WORD*, unsigned __int64))a4)((void*)&v198[2], v196, v147);
    v192 = a1[1];
    v193 = (_QWORD*)(*a1 + 8 * v192++);
    *v193 = *(_QWORD*)&v198[2];
    a1[1] = v192;
    if (v192 > v29) {
      return false;
    }
    v121 = v156;
  } while (((unsigned __int16)v122 | (unsigned __int16)v156) != 0);
  return v29 == a1[1];
}

#pragma GCC visibility pop
