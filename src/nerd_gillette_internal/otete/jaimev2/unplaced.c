#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
SdkRoutine_7477f0_alt1(PSEUDO_X8, __int16*) __asm__("SdkRoutine_7477f0");
__int64 SdkRoutine_7477f0();
__int64 SdkRoutine_87ac90(_QWORD, _QWORD);
__int64 SdkRoutine_87acc0(_QWORD, _QWORD);
__int64 SdkRoutine_87ace0(_QWORD, _QWORD, float);
__int64 SdkRoutine_87ad00(_QWORD, _QWORD);
__int64 SdkRoutine_87ad10(_QWORD, _QWORD);
__int64 SdkRoutine_87ad20(_QWORD, _QWORD);
__int64 SdkRoutine_87ad30(_QWORD, _QWORD);
__int64 SdkRoutine_87ad40(_QWORD, _QWORD);
__int64 SdkRoutine_87ad50(_QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev1_DecodeFullSilhouetteROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_ca72b4;
_DWORD* nerd_gillette_internal_otete_jaimev2_GetTanHalfFieldOfView(
    _DWORD* this_, float* a2, float* a3);
float nerd_gillette_internal_otete_jaimev2_GetDirectionFromAngloid(
    void* this_, float* a2, float* a3, float result);
bool nerd_gillette_internal_otete_jaimev2_DecodePacketPrefixROK(
    void* this_, unsigned __int64 a2, __int64 a3, const unsigned __int8* a4,
    unsigned __int64* a5, unsigned __int64* a6);
bool nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK(
    int* a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
bool nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK(
    void* this_, bool* a2, const unsigned __int8* a3, unsigned __int64* a4,
    unsigned __int64* a5);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHandROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nerd_gillette_internal_otete_jaimev2_Serialize_746f20(__int64 a1,
                                                              __int64** a2);
bool nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK(
    void* this_, bool* a2, const unsigned __int8* a3, unsigned __int64* a4,
    unsigned __int64* a5);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeSilhouetteROK(
    __int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
    unsigned __int64* a6);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeShapeAndSilhouetteROK(
    float* a1, __int64* a2, _QWORD* a3, __int64 a4, __int64 a5, __int64 a6,
    unsigned __int64* a7, float* a8);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeImageROK(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4, float* a5);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK(
    float* a1, _QWORD* a2, __int64* a3, unsigned __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64* a8, float* a9);
__int64 nerd_gillette_internal_otete_jaimev2_Serialize_747bc0(unsigned int* a1,
                                                              __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev2_SerializePosition(float* a1,
                                                               __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74aec0(unsigned int* a1,
                                                              __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74b2e0(__int64 a1,
                                                              __int64** a2);
__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74b600(__int64 a1,
                                                              __int64** a2);
__attribute__((swiftcall)) void
nerd_gillette_internal_otete_jaimev2_GetReverseSymmetricSegment(
    PSEUDO_X8 x8_, __int16* result, unsigned __int16* a2);
__int16* nerd_gillette_internal_otete_jaimev2_GetSymmetricEquivalentSegments(
    __int16* result, unsigned __int16* a2, _WORD* a3, _WORD* a4);
__attribute__((swiftcall)) void
nerd_gillette_internal_otete_jaimev2_IdentifyCluster(PSEUDO_X8 x8_,
                                                     __int64 result,
                                                     unsigned __int8 a2,
                                                     __int16* a3);
__int64 nerd_gillette_internal_otete_jaimev2_EncodeFullSilhouetteROK(
    __int64* a1, __int16* a2, unsigned __int64 a3, unsigned __int8* a4);
bool nerd_gillette_internal_otete_jaimev2_DecodeFullSilhouetteROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3);
bool nerd_gillette_internal_otete_jaimev2_DecodeFullSilhouetteImplROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3,
    __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*));
__attribute__((swiftcall)) void unplaced_7477f0(PSEUDO_X8 x8_, __int16* a1);
_DWORD*

nerd_gillette_internal_otete_jaimev2_GetTanHalfFieldOfView(_DWORD* this_,
                                                           float* a2, float* a3)
{

#pragma clang fp contract(off)
  *this_ = 1068149419;
  *a2 = 0x1.0000000000000p+0f;
  return this_;
}

float nerd_gillette_internal_otete_jaimev2_GetDirectionFromAngloid(void* this_,
                                                                   float* a2,
                                                                   float* a3,
                                                                   float result)
{
  float v4;
  float v5;

  v4 = -0x1.0000000000000p+0f;
  v5 = fabsf(result);
  if (result >= 0x0.0p+0f) {
    v4 = 0x1.0000000000000p+0f;
  }
  if (v5 >= 0x1.0000000000000p-2f) {
    if (v5 >= 0x1.8000000000000p-1f) {
      result = v4 - result;
      *(float*)this_ = -0x1.0000000000000p+0f;
      *a2 = result * 0x1.0000000000000p+2f;
    }
    else {
      *(float*)this_ =
          (float)(v5 * -0x1.0000000000000p+2f) + 0x1.0000000000000p+1f;
      *a2 = v4;
      return 0x1.0000000000000p+1f;
    }
  }
  else {
    *(float*)this_ = 0x1.0000000000000p+0f;
    *a2 = result * 0x1.0000000000000p+2f;
  }
  return result;
}

bool nerd_gillette_internal_otete_jaimev2_DecodePacketPrefixROK(
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

bool nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK(
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

__int64 nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK(
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

bool nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK(
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

__int64 nerd_gillette_internal_otete_jaimev2_DecodeHandROK(__int64 a1,
                                                           __int64 a2,
                                                           __int64 a3,
                                                           unsigned __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  char v8;
  int v9;
  float v10;
  float v11;
  float v12;
  unsigned __int64 v13;
  float v14;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64* v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;

  v4 = *a4;
  v5 = 8 * a3;
  v25_.v27 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v25_.v25 = a2;
  v25_.v26 = v5;
  v24 = &v25_.v25;
  v8 = SdkRoutine_87ad00(a1, &v24);
  if ((v8 & 1) != 0) {
    if (*(_DWORD*)a1 == 7) {
      *(_DWORD*)a1 = -1;
    }
    v9 = *(unsigned __int8*)(a1 + 84);
    v10 = (float)(*(float*)(a1 + 12) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 8) = (float)(*(float*)(a1 + 8) + -0x1.4000000000000p+8f) *
                        0x1.1111120000000p-8f;
    *(float*)(a1 + 12) = v10;
    *(float*)(a1 + 16) = *(float*)(a1 + 16) * 0x1.1111120000000p-8f;
    if (v9 == 1) {
      v16 = (float)(*(float*)(a1 + 100) + -0x1.e000000000000p+7f) *
            0x1.1111120000000p-8f;
      *(float*)(a1 + 96) =
          (float)(*(float*)(a1 + 96) + -0x1.4000000000000p+8f) *
          0x1.1111120000000p-8f;
      *(float*)(a1 + 100) = v16;
      v17 = (float)(*(float*)(a1 + 92) + -0x1.e000000000000p+7f) *
            0x1.1111120000000p-8f;
      *(float*)(a1 + 88) =
          (float)(*(float*)(a1 + 88) + -0x1.4000000000000p+8f) *
          0x1.1111120000000p-8f;
      *(float*)(a1 + 92) = v17;
      if (*(_BYTE*)(a1 + 112) != 1) {
      LABEL_8:
        if (*(_BYTE*)(a1 + 140) != 1) {
          goto LABEL_9;
        }
        goto LABEL_16;
      }
    }
    else if (*(_BYTE*)(a1 + 112) != 1) {
      goto LABEL_8;
    }
    v18 = (float)(*(float*)(a1 + 128) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 124) =
        (float)(*(float*)(a1 + 124) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 128) = v18;
    v19 = (float)(*(float*)(a1 + 120) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 116) =
        (float)(*(float*)(a1 + 116) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 120) = v19;
    if (*(_BYTE*)(a1 + 140) != 1) {
    LABEL_9:
      if (*(_BYTE*)(a1 + 168) != 1) {
        goto LABEL_10;
      }
      goto LABEL_17;
    }
  LABEL_16:
    v20 = (float)(*(float*)(a1 + 156) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 152) =
        (float)(*(float*)(a1 + 152) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 156) = v20;
    v21 = (float)(*(float*)(a1 + 148) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 144) =
        (float)(*(float*)(a1 + 144) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 148) = v21;
    if (*(_BYTE*)(a1 + 168) != 1) {
    LABEL_10:
      if (*(_BYTE*)(a1 + 196) != 1) {
      LABEL_12:
        v13 = v25_.v26;
        v14 = (float)(*(float*)(a1 + 232) + -0x1.e000000000000p+7f) *
              0x1.1111120000000p-8f;
        *(float*)(a1 + 228) =
            (float)(*(float*)(a1 + 228) + -0x1.4000000000000p+8f) *
            0x1.1111120000000p-8f;
        *(float*)(a1 + 232) = v14;
        *a4 = v13;
        return v8 & 1;
      }
    LABEL_11:
      v11 = (float)(*(float*)(a1 + 212) + -0x1.e000000000000p+7f) *
            0x1.1111120000000p-8f;
      *(float*)(a1 + 208) =
          (float)(*(float*)(a1 + 208) + -0x1.4000000000000p+8f) *
          0x1.1111120000000p-8f;
      *(float*)(a1 + 212) = v11;
      v12 = (float)(*(float*)(a1 + 204) + -0x1.e000000000000p+7f) *
            0x1.1111120000000p-8f;
      *(float*)(a1 + 200) =
          (float)(*(float*)(a1 + 200) + -0x1.4000000000000p+8f) *
          0x1.1111120000000p-8f;
      *(float*)(a1 + 204) = v12;
      goto LABEL_12;
    }
  LABEL_17:
    v22 = (float)(*(float*)(a1 + 184) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 180) =
        (float)(*(float*)(a1 + 180) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 184) = v22;
    v23 = (float)(*(float*)(a1 + 176) + -0x1.e000000000000p+7f) *
          0x1.1111120000000p-8f;
    *(float*)(a1 + 172) =
        (float)(*(float*)(a1 + 172) + -0x1.4000000000000p+8f) *
        0x1.1111120000000p-8f;
    *(float*)(a1 + 176) = v23;
    if (*(_BYTE*)(a1 + 196) != 1) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  return v8 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_Serialize_746f20(__int64 a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char v15;
  unsigned int v16;
  unsigned int v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  char v46;
  unsigned __int64 v47;
  char v48;
  unsigned __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  char v54;
  unsigned __int64 v55;
  char v56;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned int v65;
  __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char v74;
  __int64 v75;
  unsigned __int64 v76;
  char v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  char v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  char v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  char v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  char v109;
  __int64 v110;
  __int64 v111;
  unsigned int v112;
  __int64 v113;
  __int64* v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  unsigned int v120;
  unsigned __int64 v121;
  char v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  int v126;
  __int64 v127;
  char v128;
  __int64 v129;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 3) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    v10 = 0;
  LABEL_4:
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_9;
  }
  v8 = v3 >> 3;
  v9 = (*a2)[1] & 7;
  ++v3;
  LODWORD(v8) = *(unsigned __int8*)(v5 + v8);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v8 >> v9) & 1);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v14 = v3 >> 3;
  v15 = v3++ & 7;
  LODWORD(v14) = *(unsigned __int8*)(v5 + v14);
  v2[1] = v3;
  v10 |= ((unsigned int)v14 >> v15) & 1;
  if (v3 >= v4) {
  LABEL_5:
    *(_DWORD*)a1 = 2 * v10;
    v11 = *a2;
    v12 = (*a2)[1];
    v13 = (*a2)[2];
    if (v13 == v12) {
      return 0;
    }
    goto LABEL_10;
  }
LABEL_9:
  v16 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  *(_DWORD*)a1 = (v16 >> (v3 & 7)) & 1 | (2 * v10);
  v11 = *a2;
  v12 = (*a2)[1];
  v13 = (*a2)[2];
  if (v13 == v12) {
    return 0;
  }
LABEL_10:
  if (v12 >= v13) {
    *(_BYTE*)(a1 + 4) = 0;
    if ((SdkRoutine_87ad10(a1 + 8, a2) & 1) == 0) {
      return 0;
    }
  }
  else {
    v17 = *(unsigned __int8*)(*v11 + (v12 >> 3));
    v11[1] = v12 + 1;
    *(_BYTE*)(a1 + 4) = (v17 >> (v12 & 7)) & 1;
    if ((SdkRoutine_87ad10(a1 + 8, a2) & 1) == 0) {
      return 0;
    }
  }
  v18 = *a2;
  v19 = (*a2)[1];
  v20 = (*a2)[2];
  if (v20 - v19 < 0xC) {
    return 0;
  }
  v21 = *v18;
  if (v20 <= v19) {
    v24 = 0;
  LABEL_17:
    v25 = 0;
    if (v19 >= v20) {
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v22 = v19 >> 3;
  v23 = (*a2)[1] & 7;
  ++v19;
  LODWORD(v22) = *(unsigned __int8*)(v21 + v22);
  v18[1] = v19;
  v24 = 2 * (((unsigned int)v22 >> v23) & 1);
  if (v19 >= v20) {
    goto LABEL_17;
  }
  v45 = v19 >> 3;
  v46 = v19++ & 7;
  LODWORD(v45) = *(unsigned __int8*)(v21 + v45);
  v18[1] = v19;
  v25 = ((unsigned int)v45 >> v46) & 1;
  if (v19 >= v20) {
  LABEL_18:
    v26 = 0;
    v27 = v25 | v24;
    if (v19 >= v20) {
      goto LABEL_19;
    }
    goto LABEL_31;
  }
LABEL_30:
  v47 = v19 >> 3;
  v48 = v19++ & 7;
  LODWORD(v47) = *(unsigned __int8*)(v21 + v47);
  v18[1] = v19;
  v26 = 2 * (((unsigned int)v47 >> v48) & 1);
  v27 = v25 | v24;
  if (v19 >= v20) {
  LABEL_19:
    v28 = 0;
    v29 = v26 | (4 * v27);
    if (v19 >= v20) {
      goto LABEL_20;
    }
    goto LABEL_32;
  }
LABEL_31:
  v49 = v19 >> 3;
  v50 = v19++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v21 + v49);
  v18[1] = v19;
  v28 = ((unsigned int)v49 >> v50) & 1;
  v29 = v26 | (4 * v27);
  if (v19 >= v20) {
  LABEL_20:
    v30 = 0;
    v31 = v28 | v29;
    if (v19 >= v20) {
      goto LABEL_21;
    }
    goto LABEL_33;
  }
LABEL_32:
  v51 = v19 >> 3;
  v52 = v19++ & 7;
  LODWORD(v51) = *(unsigned __int8*)(v21 + v51);
  v18[1] = v19;
  v30 = 2 * (((unsigned int)v51 >> v52) & 1);
  v31 = v28 | v29;
  if (v19 >= v20) {
  LABEL_21:
    v32 = 0;
    v33 = v30 | (4 * v31);
    if (v19 >= v20) {
      goto LABEL_22;
    }
    goto LABEL_34;
  }
LABEL_33:
  v53 = v19 >> 3;
  v54 = v19++ & 7;
  LODWORD(v53) = *(unsigned __int8*)(v21 + v53);
  v18[1] = v19;
  v32 = ((unsigned int)v53 >> v54) & 1;
  v33 = v30 | (4 * v31);
  if (v19 >= v20) {
  LABEL_22:
    v34 = 0;
    v35 = v32 | v33;
    if (v19 >= v20) {
      goto LABEL_23;
    }
    goto LABEL_35;
  }
LABEL_34:
  v55 = v19 >> 3;
  v56 = v19++ & 7;
  LODWORD(v55) = *(unsigned __int8*)(v21 + v55);
  v18[1] = v19;
  v34 = 2 * (((unsigned int)v55 >> v56) & 1);
  v35 = v32 | v33;
  if (v19 >= v20) {
  LABEL_23:
    v36 = 0;
    v37 = v34 | (4 * v35);
    if (v19 >= v20) {
      goto LABEL_24;
    }
    goto LABEL_36;
  }
LABEL_35:
  v57 = v19 >> 3;
  v58 = v19++ & 7;
  LODWORD(v57) = *(unsigned __int8*)(v21 + v57);
  v18[1] = v19;
  v36 = ((unsigned int)v57 >> v58) & 1;
  v37 = v34 | (4 * v35);
  if (v19 >= v20) {
  LABEL_24:
    v38 = 0;
    v39 = v36 | v37;
    if (v19 >= v20) {
      goto LABEL_25;
    }
    goto LABEL_37;
  }
LABEL_36:
  v59 = v19 >> 3;
  v60 = v19++ & 7;
  LODWORD(v59) = *(unsigned __int8*)(v21 + v59);
  v18[1] = v19;
  v38 = 2 * (((unsigned int)v59 >> v60) & 1);
  v39 = v36 | v37;
  if (v19 >= v20) {
  LABEL_25:
    v40 = 0;
    v41 = v38 | (4 * v39);
    if (v19 >= v20) {
      goto LABEL_26;
    }
  LABEL_38:
    v63 = v19 >> 3;
    v64 = v19++ & 7;
    LODWORD(v63) = *(unsigned __int8*)(v21 + v63);
    v18[1] = v19;
    v42 = 2 * (((unsigned int)v63 >> v64) & 1);
    v43 = v40 | v41;
    if (v19 >= v20) {
      goto LABEL_27;
    }
  LABEL_39:
    v65 = *(unsigned __int8*)(v21 + (v19 >> 3));
    v18[1] = v19 + 1;
    v44 = (v65 >> (v19 & 7)) & 1;
    goto LABEL_40;
  }
LABEL_37:
  v61 = v19 >> 3;
  v62 = v19++ & 7;
  LODWORD(v61) = *(unsigned __int8*)(v21 + v61);
  v18[1] = v19;
  v40 = ((unsigned int)v61 >> v62) & 1;
  v41 = v38 | (4 * v39);
  if (v19 < v20) {
    goto LABEL_38;
  }
LABEL_26:
  v42 = 0;
  v43 = v40 | v41;
  if (v19 < v20) {
    goto LABEL_39;
  }
LABEL_27:
  v44 = 0;
LABEL_40:
  *(float*)(a1 + 16) =
      (float)((float)((float)(v44 | v42 | (unsigned __int64)(4 * v43)) *
                      0x1.0010020000000p-12f) *
              0x1.4000000000000p+9f) +
      0x0.0p+0f;
  v66 = *a2;
  v67 = (*a2)[1];
  v68 = (*a2)[2];
  if (v68 - v67 >= 0xC) {
    v69 = *v66;
    if (v68 <= v67) {
      v72 = 0;
    }
    else {
      v70 = v67 >> 3;
      v71 = (*a2)[1] & 7;
      ++v67;
      LODWORD(v70) = *(unsigned __int8*)(v69 + v70);
      v66[1] = v67;
      v72 = 2 * (((unsigned int)v70 >> v71) & 1);
    }
    if (v67 >= v68) {
      v75 = 0;
    }
    else {
      v73 = v67 >> 3;
      v74 = v67++ & 7;
      LODWORD(v73) = *(unsigned __int8*)(v69 + v73);
      v66[1] = v67;
      v75 = ((unsigned int)v73 >> v74) & 1;
    }
    if (v67 >= v68) {
      v78 = 0;
    }
    else {
      v76 = v67 >> 3;
      v77 = v67++ & 7;
      LODWORD(v76) = *(unsigned __int8*)(v69 + v76);
      v66[1] = v67;
      v78 = 2 * (((unsigned int)v76 >> v77) & 1);
    }
    v79 = v75 | v72;
    if (v67 >= v68) {
      v82 = 0;
    }
    else {
      v80 = v67 >> 3;
      v81 = v67++ & 7;
      LODWORD(v80) = *(unsigned __int8*)(v69 + v80);
      v66[1] = v67;
      v82 = ((unsigned int)v80 >> v81) & 1;
    }
    v83 = v78 | (4 * v79);
    if (v67 >= v68) {
      v86 = 0;
    }
    else {
      v84 = v67 >> 3;
      v85 = v67++ & 7;
      LODWORD(v84) = *(unsigned __int8*)(v69 + v84);
      v66[1] = v67;
      v86 = 2 * (((unsigned int)v84 >> v85) & 1);
    }
    v87 = v82 | v83;
    if (v67 >= v68) {
      v90 = 0;
    }
    else {
      v88 = v67 >> 3;
      v89 = v67++ & 7;
      LODWORD(v88) = *(unsigned __int8*)(v69 + v88);
      v66[1] = v67;
      v90 = ((unsigned int)v88 >> v89) & 1;
    }
    v91 = v86 | (4 * v87);
    if (v67 >= v68) {
      v94 = 0;
    }
    else {
      v92 = v67 >> 3;
      v93 = v67++ & 7;
      LODWORD(v92) = *(unsigned __int8*)(v69 + v92);
      v66[1] = v67;
      v94 = 2 * (((unsigned int)v92 >> v93) & 1);
    }
    v95 = v90 | v91;
    if (v67 >= v68) {
      v98 = 0;
    }
    else {
      v96 = v67 >> 3;
      v97 = v67++ & 7;
      LODWORD(v96) = *(unsigned __int8*)(v69 + v96);
      v66[1] = v67;
      v98 = ((unsigned int)v96 >> v97) & 1;
    }
    v99 = v94 | (4 * v95);
    if (v67 >= v68) {
      v102 = 0;
    }
    else {
      v100 = v67 >> 3;
      v101 = v67++ & 7;
      LODWORD(v100) = *(unsigned __int8*)(v69 + v100);
      v66[1] = v67;
      v102 = 2 * (((unsigned int)v100 >> v101) & 1);
    }
    v103 = v98 | v99;
    if (v67 >= v68) {
      v106 = 0;
    }
    else {
      v104 = v67 >> 3;
      v105 = v67++ & 7;
      LODWORD(v104) = *(unsigned __int8*)(v69 + v104);
      v66[1] = v67;
      v106 = ((unsigned int)v104 >> v105) & 1;
    }
    v107 = v102 | (4 * v103);
    if (v67 >= v68) {
      v110 = 0;
    }
    else {
      v108 = v67 >> 3;
      v109 = v67++ & 7;
      LODWORD(v108) = *(unsigned __int8*)(v69 + v108);
      v66[1] = v67;
      v110 = 2 * (((unsigned int)v108 >> v109) & 1);
    }
    v111 = v106 | v107;
    if (v67 >= v68) {
      v113 = 0;
    }
    else {
      v112 = *(unsigned __int8*)(v69 + (v67 >> 3));
      v66[1] = v67 + 1;
      v113 = (v112 >> (v67 & 7)) & 1;
    }
    *(float*)(a1 + 20) =
        (float)(PSEUDO_UNFUSED(
            (float)(v113 | v110 | (unsigned __int64)(4 * v111)) *
            0x1.0010020000000p-12f)) +
        0x0.0p+0f;
    v114 = *a2;
    v115 = (*a2)[1];
    v116 = (*a2)[2];
    if (v116 - v115 >= 3) {
      v117 = *v114;
      if (v116 <= v115) {
        v120 = 0;
      }
      else {
        v118 = v115 >> 3;
        v119 = (*a2)[1] & 7;
        ++v115;
        LODWORD(v118) = *(unsigned __int8*)(v117 + v118);
        v114[1] = v115;
        v120 = 4 * (((unsigned int)v118 >> v119) & 1);
      }
      if (v115 >= v116) {
        v123 = 0;
      }
      else {
        v121 = v115 >> 3;
        v122 = v115++ & 7;
        LODWORD(v121) = *(unsigned __int8*)(v117 + v121);
        v114[1] = v115;
        v123 = 2 * (((unsigned int)v121 >> v122) & 1);
      }
      if (v115 >= v116) {
        v125 = 0;
      }
      else {
        v124 = *(unsigned __int8*)(v117 + (v115 >> 3));
        v114[1] = v115 + 1;
        v125 = (v124 >> (v115 & 7)) & 1;
      }
      v126 = v125 | v120 | v123;
      *(_DWORD*)(a1 + 24) = v126;
      if (v126 == 0) {
        goto LABEL_97;
      }
      v127 = a1 + 28;
      v128 = 1;
      v129 = v125 + v120 + v123;
      do {
        while ((v128 & 1) != 0) {
          v128 = SdkRoutine_87ad20(v127, a2);
          --v129;
          v127 += 8;
          if (v129 == 0) {
            goto LABEL_92;
          }
        }
        v128 = 0;
        --v129;
        v127 += 8;
      } while (v129 != 0);
    LABEL_92:
      if ((v128 & 1) != 0) {
      LABEL_97:
        if ((SdkRoutine_87ad30(a1 + 84, a2) & 1) != 0 &&
            (SdkRoutine_87ad30(a1 + 112, a2) & 1) != 0 &&
            (SdkRoutine_87ad30(a1 + 140, a2) & 1) != 0 &&
            (SdkRoutine_87ad30(a1 + 168, a2) & 1) != 0 &&
            (SdkRoutine_87ad30(a1 + 196, a2) & 1) != 0) {
          return SdkRoutine_87ad40(a1 + 224, a2);
        }
      }
    }
  }
  return 0;
}

bool nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK(
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

__int64 nerd_gillette_internal_otete_jaimev2_DecodeSilhouetteROK(
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
               &v10, &v13, &SdkData_ca72b4, SdkRoutine_7477f0) &
           1;
  *a2 = v11;
  *a6 = v14;
  return result;
}

__attribute__((swiftcall)) void unplaced_7477f0(PSEUDO_X8 x8_, __int16* a1)
{

#pragma clang fp contract(off)
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float result;
  float v3;

  result = (float)(*a1 - 320) * 0x1.1111120000000p-8f;
  v3 = (float)(a1[1] - 240) * 0x1.1111120000000p-8f;
  *a2 = result;
  a2[1] = v3;
  {
    result;
    return;
  }
}

__int64 nerd_gillette_internal_otete_jaimev2_DecodeShapeAndSilhouetteROK(
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
        &v23_.v23, &v26_.v26, &SdkData_ca72b4, SdkRoutine_7477f0_alt1);
    *a3 = v23_.v24;
    *a7 = v26_.v27;
  }
  else {
    v21 = 0;
  }
  return v21 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_DecodeImageROK(
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
  v8 = SdkRoutine_87ace0(v10, &v12, 144000.0 / v6);
  if ((v8 & 1) != 0) {
    *a4 = v13;
  }
  return v8 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK(
    float* a1, _QWORD* a2, __int64* a3, unsigned __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64* a8, float* a9)
{

#pragma clang fp contract(off)
  __int64 v15;
  char v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  char v20;
  __int64 v21;
  __int64* v23;
  struct {
    __int64 v24;
    __int64 v25;
    unsigned __int64 v26;
  } v24_;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v27_;
  __int64* v30;

  v27_.v27 = a6;
  v23 = &v24_.v24;
  v24_.v24 = a6;
  v15 = *a8;
  if (*a8 >= (unsigned __int64)(8 * a7)) {
    v15 = 8 * a7;
  }
  v24_.v25 = v15;
  v24_.v26 = 8 * a7;
  v27_.v28 = v15;
  v27_.v29 = 8 * a7;
  v30 = &v27_.v27;
  v16 = SdkRoutine_87acc0(a1, &v30);
  v17 = *a1;
  v18 = (float)(a1[2] + -0x1.e000000000000p+7f) * 0x1.1111120000000p-8f;
  a1[1] = (float)(a1[1] + -0x1.4000000000000p+8f) * 0x1.1111120000000p-8f;
  a1[2] = v18;
  v19 = v27_.v28;
  *a1 = v17 * (float)(0x1.8e70000000000p+14f / *a9);
  *a8 = v19;
  if ((v16 & 1) != 0) {
    if (v19 >= v24_.v26) {
      v19 = v24_.v26;
    }
    v24_.v25 = v19;
    v20 = SdkRoutine_87ad50(a5, &v23);
    *a8 = v24_.v25;
    if (a4 < 4) {
      v21 = 0;
    }
    else {
      *a2 = 0xBF7DDDDEBFA9999ALL;
      a2[1] = 0xBF7DDDDE3FA9999ALL;
      a2[2] = 0x3F7DDDDE3FA9999ALL;
      a2[3] = 0x3F7DDDDEBFA9999ALL;
      v21 = 4;
    }
    *a3 = v21;
  }
  else {
    v20 = 0;
  }
  return v20 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_Serialize_747bc0(unsigned int* a1,
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
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  char v54;
  unsigned __int64 v55;
  char v56;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned int v71;
  __int64* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;
  char v79;
  unsigned __int64 v80;
  char v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned __int64 v85;
  char v86;
  unsigned __int64 v87;
  char v88;
  __int64* v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  int v98;
  unsigned int v99;
  int v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  int v106;
  unsigned int v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned __int64 v116;
  char v117;
  unsigned __int64 v118;
  char v119;
  unsigned int v120;
  unsigned int* v121;
  unsigned __int64 v122;
  __int64* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  unsigned __int64 v132;
  char v133;
  unsigned int v134;
  __int64* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned int v155;
  unsigned int v156;
  unsigned int v157;
  unsigned int v158;
  int v159;
  unsigned __int64 v160;
  char v161;
  unsigned __int64 v162;
  char v163;
  unsigned __int64 v164;
  char v165;
  unsigned __int64 v166;
  char v167;
  unsigned __int64 v168;
  char v169;
  unsigned __int64 v170;
  char v171;
  unsigned __int64 v172;
  char v173;
  unsigned __int64 v174;
  char v175;
  unsigned __int64 v176;
  char v177;
  unsigned __int64 v178;
  char v179;
  unsigned __int64 v180;
  char v181;
  unsigned __int64 v182;
  char v183;
  unsigned __int64 v184;
  char v185;
  unsigned __int64 v186;
  char v187;
  unsigned __int64 v188;
  char v189;
  unsigned __int64 v190;
  char v191;
  unsigned __int64 v192;
  char v193;
  unsigned int v194;

  v2 = *a2;
  v4 = (*a2)[1];
  v3 = (*a2)[2];
  if (v3 - v4 < 0x20) {
    return 0;
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
  a1[1] = v7;
  v19 = *a2;
  v20 = (*a2)[1];
  v21 = (*a2)[2];
  if (v21 - v20 < 0xD) {
    return 0;
  }
  v22 = *v19;
  if (v21 <= v20) {
    v25 = 0;
  LABEL_16:
    v26 = 0;
    if (v20 >= v21) {
      goto LABEL_17;
    }
  LABEL_32:
    v51 = v20 >> 3;
    v52 = v20++ & 7;
    LODWORD(v51) = *(unsigned __int8*)(v22 + v51);
    v19[1] = v20;
    v27 = 2 * (((unsigned int)v51 >> v52) & 1);
    v28 = v26 | v25;
    if (v20 < v21) {
      goto LABEL_33;
    }
  LABEL_18:
    v29 = 0;
    v30 = v27 | (4 * v28);
    if (v20 >= v21) {
      goto LABEL_19;
    }
  LABEL_34:
    v55 = v20 >> 3;
    v56 = v20++ & 7;
    LODWORD(v55) = *(unsigned __int8*)(v22 + v55);
    v19[1] = v20;
    v31 = 2 * (((unsigned int)v55 >> v56) & 1);
    v32 = v29 | v30;
    if (v20 < v21) {
      goto LABEL_35;
    }
  LABEL_20:
    v33 = 0;
    v34 = v31 | (4 * v32);
    if (v20 >= v21) {
      goto LABEL_21;
    }
  LABEL_36:
    v59 = v20 >> 3;
    v60 = v20++ & 7;
    LODWORD(v59) = *(unsigned __int8*)(v22 + v59);
    v19[1] = v20;
    v35 = 2 * (((unsigned int)v59 >> v60) & 1);
    v36 = v33 | v34;
    if (v20 < v21) {
      goto LABEL_37;
    }
  LABEL_22:
    v37 = 0;
    v38 = v35 | (4 * v36);
    if (v20 >= v21) {
      goto LABEL_23;
    }
  LABEL_38:
    v63 = v20 >> 3;
    v64 = v20++ & 7;
    LODWORD(v63) = *(unsigned __int8*)(v22 + v63);
    v19[1] = v20;
    v39 = 2 * (((unsigned int)v63 >> v64) & 1);
    v40 = v37 | v38;
    if (v20 < v21) {
      goto LABEL_39;
    }
  LABEL_24:
    v41 = 0;
    v42 = v39 | (4 * v40);
    if (v20 >= v21) {
      goto LABEL_25;
    }
  LABEL_40:
    v67 = v20 >> 3;
    v68 = v20++ & 7;
    LODWORD(v67) = *(unsigned __int8*)(v22 + v67);
    v19[1] = v20;
    v43 = 2 * (((unsigned int)v67 >> v68) & 1);
    v44 = v41 | v42;
    if (v20 < v21) {
      goto LABEL_41;
    }
  LABEL_26:
    v45 = v43 | (4 * v44);
    if (v20 >= v21) {
      goto LABEL_27;
    }
  LABEL_42:
    v71 = *(unsigned __int8*)(v22 + (v20 >> 3));
    v19[1] = v20 + 1;
    v46 = (v71 >> (v20 & 7)) & 1;
  }
  else {
    v23 = v20 >> 3;
    v24 = (*a2)[1] & 7;
    ++v20;
    LODWORD(v23) = *(unsigned __int8*)(v22 + v23);
    v19[1] = v20;
    v25 = 2 * (((unsigned int)v23 >> v24) & 1);
    if (v20 >= v21) {
      goto LABEL_16;
    }
    v49 = v20 >> 3;
    v50 = v20++ & 7;
    LODWORD(v49) = *(unsigned __int8*)(v22 + v49);
    v19[1] = v20;
    v26 = ((unsigned int)v49 >> v50) & 1;
    if (v20 < v21) {
      goto LABEL_32;
    }
  LABEL_17:
    v27 = 0;
    v28 = v26 | v25;
    if (v20 >= v21) {
      goto LABEL_18;
    }
  LABEL_33:
    v53 = v20 >> 3;
    v54 = v20++ & 7;
    LODWORD(v53) = *(unsigned __int8*)(v22 + v53);
    v19[1] = v20;
    v29 = ((unsigned int)v53 >> v54) & 1;
    v30 = v27 | (4 * v28);
    if (v20 < v21) {
      goto LABEL_34;
    }
  LABEL_19:
    v31 = 0;
    v32 = v29 | v30;
    if (v20 >= v21) {
      goto LABEL_20;
    }
  LABEL_35:
    v57 = v20 >> 3;
    v58 = v20++ & 7;
    LODWORD(v57) = *(unsigned __int8*)(v22 + v57);
    v19[1] = v20;
    v33 = ((unsigned int)v57 >> v58) & 1;
    v34 = v31 | (4 * v32);
    if (v20 < v21) {
      goto LABEL_36;
    }
  LABEL_21:
    v35 = 0;
    v36 = v33 | v34;
    if (v20 >= v21) {
      goto LABEL_22;
    }
  LABEL_37:
    v61 = v20 >> 3;
    v62 = v20++ & 7;
    LODWORD(v61) = *(unsigned __int8*)(v22 + v61);
    v19[1] = v20;
    v37 = ((unsigned int)v61 >> v62) & 1;
    v38 = v35 | (4 * v36);
    if (v20 < v21) {
      goto LABEL_38;
    }
  LABEL_23:
    v39 = 0;
    v40 = v37 | v38;
    if (v20 >= v21) {
      goto LABEL_24;
    }
  LABEL_39:
    v65 = v20 >> 3;
    v66 = v20++ & 7;
    LODWORD(v65) = *(unsigned __int8*)(v22 + v65);
    v19[1] = v20;
    v41 = ((unsigned int)v65 >> v66) & 1;
    v42 = v39 | (4 * v40);
    if (v20 < v21) {
      goto LABEL_40;
    }
  LABEL_25:
    v43 = 0;
    v44 = v41 | v42;
    if (v20 >= v21) {
      goto LABEL_26;
    }
  LABEL_41:
    v69 = v20 >> 3;
    v70 = v20++ & 7;
    LODWORD(v69) = *(unsigned __int8*)(v22 + v69);
    v19[1] = v20;
    v45 = ((unsigned int)v69 >> v70) & 1 | v43 | (4 * v44);
    if (v20 < v21) {
      goto LABEL_42;
    }
  LABEL_27:
    v46 = 0;
  }
  *a1 = v46 | (2 * v45);
  v72 = *a2;
  v74 = (*a2)[1];
  v73 = (*a2)[2];
  if (v73 - v74 < 0x20) {
    return 0;
  }
  v75 = *v72;
  v76 = -32;
  v77 = 0;
  while (2) {
    while (2) {
      if (v74 < v73) {
        v80 = v74 >> 3;
        v81 = v74++ & 7;
        LODWORD(v80) = *(unsigned __int8*)(v75 + v80);
        v72[1] = v74;
        v82 = 2 * (((unsigned int)v80 >> v81) & 1);
        if (v74 >= v73) {
          goto LABEL_48;
        }
        v85 = v74 >> 3;
        v86 = v74++ & 7;
        LODWORD(v85) = *(unsigned __int8*)(v75 + v85);
        v72[1] = v74;
        v83 = ((unsigned int)v85 >> v86) & 1;
        if (v74 < v73) {
          goto LABEL_53;
        }
      LABEL_49:
        v84 = 0;
        if (v74 >= v73) {
          break;
        }
        goto LABEL_45;
      }
      v82 = 0;
    LABEL_48:
      v83 = 0;
      if (v74 >= v73) {
        goto LABEL_49;
      }
    LABEL_53:
      v87 = v74 >> 3;
      v88 = v74++ & 7;
      LODWORD(v87) = *(unsigned __int8*)(v75 + v87);
      v72[1] = v74;
      v84 = 2 * (((unsigned int)v87 >> v88) & 1);
      if (v74 < v73) {
      LABEL_45:
        v78 = v74 >> 3;
        v79 = v74++ & 7;
        LODWORD(v78) = *(unsigned __int8*)(v75 + v78);
        v72[1] = v74;
        v76 += 4;
        v77 = ((unsigned int)v78 >> v79) & 1 | v84 |
              (4 * (v83 | v82 | (4 * v77)));
        if (v76 == 0) {
          goto LABEL_55;
        }
        continue;
      }
      break;
    }
    v76 += 4;
    v77 = v84 | (4 * (v83 | v82 | (4 * v77)));
    if (v76 != 0) {
      continue;
    }
    break;
  }
LABEL_55:
  a1[2] = v77;
  v89 = *a2;
  v90 = (*a2)[1];
  v91 = (*a2)[2];
  if (v91 - v90 < 8) {
    return 0;
  }
  v92 = *v89;
  if (v91 <= v90) {
    v95 = 0;
  LABEL_58:
    v96 = 0;
    if (v90 >= v91) {
      goto LABEL_59;
    }
  LABEL_68:
    v110 = v90 >> 3;
    v111 = v90++ & 7;
    LODWORD(v110) = *(unsigned __int8*)(v92 + v110);
    v89[1] = v90;
    v97 = 2 * (((unsigned int)v110 >> v111) & 1);
    v98 = v96 | v95;
    if (v90 < v91) {
      goto LABEL_69;
    }
  LABEL_60:
    v99 = 0;
    v100 = v97 | (4 * v98);
    if (v90 >= v91) {
      goto LABEL_61;
    }
  LABEL_70:
    v114 = v90 >> 3;
    v115 = v90++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v92 + v114);
    v89[1] = v90;
    v101 = 2 * (((unsigned int)v114 >> v115) & 1);
    v102 = v99 | v100;
    if (v90 < v91) {
      goto LABEL_71;
    }
  LABEL_62:
    v103 = 0;
    v104 = v101 | (4 * v102);
    if (v90 >= v91) {
      goto LABEL_63;
    }
  LABEL_72:
    v118 = v90 >> 3;
    v119 = v90++ & 7;
    LODWORD(v118) = *(unsigned __int8*)(v92 + v118);
    v89[1] = v90;
    v105 = 2 * (((unsigned int)v118 >> v119) & 1);
    v106 = v103 | v104;
    if (v90 < v91) {
      goto LABEL_73;
    }
  LABEL_64:
    v107 = v105 | (4 * v106);
    a1[3] = v107;
    if (v107 > 0x40) {
      return 0;
    }
  LABEL_74:
    if (v107 == 0) {
      return 1;
    }
    v121 = a1 + 5;
    LOBYTE(v47) = 1;
    v122 = 0;
    while (1) {
      if ((v47 & 1) == 0) {
        goto LABEL_76;
      }
      v123 = *a2;
      v124 = (*a2)[1];
      v125 = (*a2)[2];
      if (v125 - v124 < 3) {
        goto LABEL_76;
      }
      v126 = *v123;
      if (v125 <= v124) {
        break;
      }
      v127 = v124 >> 3;
      v128 = (*a2)[1] & 7;
      ++v124;
      LODWORD(v127) = *(unsigned __int8*)(v126 + v127);
      v123[1] = v124;
      v129 = 2 * (((unsigned int)v127 >> v128) & 1);
      if (v124 >= v125) {
        goto LABEL_81;
      }
      v132 = v124 >> 3;
      v133 = v124++ & 7;
      LODWORD(v132) = *(unsigned __int8*)(v126 + v132);
      v123[1] = v124;
      v130 = ((unsigned int)v132 >> v133) & 1;
      if (v124 < v125) {
      LABEL_85:
        v134 = *(unsigned __int8*)(v126 + (v124 >> 3));
        v123[1] = v124 + 1;
        v131 = (v134 >> (v124 & 7)) & 1;
        goto LABEL_86;
      }
    LABEL_82:
      v131 = 0;
    LABEL_86:
      *(v121 - 1) = v131 | (2 * (v130 | v129));
      v135 = *a2;
      v136 = (*a2)[1];
      v137 = (*a2)[2];
      if (v137 - v136 < 0x13) {
      LABEL_76:
        v47 = 0;
        ++v122;
        v121 += 2;
        if (v122 >= a1[3]) {
          return v47;
        }
      }
      else {
        v138 = *v135;
        if (v137 <= v136) {
          v141 = 0;
        LABEL_89:
          v142 = 0;
          if (v136 >= v137) {
            goto LABEL_90;
          }
          goto LABEL_109;
        }
        v139 = v136 >> 3;
        v140 = (*a2)[1] & 7;
        ++v136;
        LODWORD(v139) = *(unsigned __int8*)(v138 + v139);
        v135[1] = v136;
        v141 = 2 * (((unsigned int)v139 >> v140) & 1);
        if (v136 >= v137) {
          goto LABEL_89;
        }
        v160 = v136 >> 3;
        v161 = v136++ & 7;
        LODWORD(v160) = *(unsigned __int8*)(v138 + v160);
        v135[1] = v136;
        v142 = ((unsigned int)v160 >> v161) & 1;
        if (v136 >= v137) {
        LABEL_90:
          v143 = 0;
          if (v136 >= v137) {
            goto LABEL_91;
          }
          goto LABEL_110;
        }
      LABEL_109:
        v162 = v136 >> 3;
        v163 = v136++ & 7;
        LODWORD(v162) = *(unsigned __int8*)(v138 + v162);
        v135[1] = v136;
        v143 = 2 * (((unsigned int)v162 >> v163) & 1);
        if (v136 >= v137) {
        LABEL_91:
          v144 = 0;
          if (v136 >= v137) {
            goto LABEL_92;
          }
          goto LABEL_111;
        }
      LABEL_110:
        v164 = v136 >> 3;
        v165 = v136++ & 7;
        LODWORD(v164) = *(unsigned __int8*)(v138 + v164);
        v135[1] = v136;
        v144 = ((unsigned int)v164 >> v165) & 1;
        if (v136 >= v137) {
        LABEL_92:
          v145 = 0;
          if (v136 >= v137) {
            goto LABEL_93;
          }
          goto LABEL_112;
        }
      LABEL_111:
        v166 = v136 >> 3;
        v167 = v136++ & 7;
        LODWORD(v166) = *(unsigned __int8*)(v138 + v166);
        v135[1] = v136;
        v145 = 2 * (((unsigned int)v166 >> v167) & 1);
        if (v136 >= v137) {
        LABEL_93:
          v146 = 0;
          if (v136 >= v137) {
            goto LABEL_94;
          }
          goto LABEL_113;
        }
      LABEL_112:
        v168 = v136 >> 3;
        v169 = v136++ & 7;
        LODWORD(v168) = *(unsigned __int8*)(v138 + v168);
        v135[1] = v136;
        v146 = ((unsigned int)v168 >> v169) & 1;
        if (v136 >= v137) {
        LABEL_94:
          v147 = 0;
          if (v136 >= v137) {
            goto LABEL_95;
          }
          goto LABEL_114;
        }
      LABEL_113:
        v170 = v136 >> 3;
        v171 = v136++ & 7;
        LODWORD(v170) = *(unsigned __int8*)(v138 + v170);
        v135[1] = v136;
        v147 = 2 * (((unsigned int)v170 >> v171) & 1);
        if (v136 >= v137) {
        LABEL_95:
          v148 = 0;
          if (v136 >= v137) {
            goto LABEL_96;
          }
          goto LABEL_115;
        }
      LABEL_114:
        v172 = v136 >> 3;
        v173 = v136++ & 7;
        LODWORD(v172) = *(unsigned __int8*)(v138 + v172);
        v135[1] = v136;
        v148 = ((unsigned int)v172 >> v173) & 1;
        if (v136 >= v137) {
        LABEL_96:
          v149 = 0;
          if (v136 >= v137) {
            goto LABEL_97;
          }
          goto LABEL_116;
        }
      LABEL_115:
        v174 = v136 >> 3;
        v175 = v136++ & 7;
        LODWORD(v174) = *(unsigned __int8*)(v138 + v174);
        v135[1] = v136;
        v149 = 2 * (((unsigned int)v174 >> v175) & 1);
        if (v136 >= v137) {
        LABEL_97:
          v150 = 0;
          if (v136 >= v137) {
            goto LABEL_98;
          }
          goto LABEL_117;
        }
      LABEL_116:
        v176 = v136 >> 3;
        v177 = v136++ & 7;
        LODWORD(v176) = *(unsigned __int8*)(v138 + v176);
        v135[1] = v136;
        v150 = ((unsigned int)v176 >> v177) & 1;
        if (v136 >= v137) {
        LABEL_98:
          v151 = 0;
          if (v136 >= v137) {
            goto LABEL_99;
          }
          goto LABEL_118;
        }
      LABEL_117:
        v178 = v136 >> 3;
        v179 = v136++ & 7;
        LODWORD(v178) = *(unsigned __int8*)(v138 + v178);
        v135[1] = v136;
        v151 = 2 * (((unsigned int)v178 >> v179) & 1);
        if (v136 >= v137) {
        LABEL_99:
          v152 = 0;
          if (v136 >= v137) {
            goto LABEL_100;
          }
          goto LABEL_119;
        }
      LABEL_118:
        v180 = v136 >> 3;
        v181 = v136++ & 7;
        LODWORD(v180) = *(unsigned __int8*)(v138 + v180);
        v135[1] = v136;
        v152 = ((unsigned int)v180 >> v181) & 1;
        if (v136 >= v137) {
        LABEL_100:
          v153 = 0;
          if (v136 >= v137) {
            goto LABEL_101;
          }
          goto LABEL_120;
        }
      LABEL_119:
        v182 = v136 >> 3;
        v183 = v136++ & 7;
        LODWORD(v182) = *(unsigned __int8*)(v138 + v182);
        v135[1] = v136;
        v153 = 2 * (((unsigned int)v182 >> v183) & 1);
        if (v136 >= v137) {
        LABEL_101:
          v154 = 0;
          if (v136 >= v137) {
            goto LABEL_102;
          }
          goto LABEL_121;
        }
      LABEL_120:
        v184 = v136 >> 3;
        v185 = v136++ & 7;
        LODWORD(v184) = *(unsigned __int8*)(v138 + v184);
        v135[1] = v136;
        v154 = ((unsigned int)v184 >> v185) & 1;
        if (v136 >= v137) {
        LABEL_102:
          v155 = 0;
          if (v136 >= v137) {
            goto LABEL_103;
          }
          goto LABEL_122;
        }
      LABEL_121:
        v186 = v136 >> 3;
        v187 = v136++ & 7;
        LODWORD(v186) = *(unsigned __int8*)(v138 + v186);
        v135[1] = v136;
        v155 = 2 * (((unsigned int)v186 >> v187) & 1);
        if (v136 >= v137) {
        LABEL_103:
          v156 = 0;
          if (v136 >= v137) {
            goto LABEL_104;
          }
          goto LABEL_123;
        }
      LABEL_122:
        v188 = v136 >> 3;
        v189 = v136++ & 7;
        LODWORD(v188) = *(unsigned __int8*)(v138 + v188);
        v135[1] = v136;
        v156 = ((unsigned int)v188 >> v189) & 1;
        if (v136 >= v137) {
        LABEL_104:
          v157 = 0;
          if (v136 >= v137) {
            goto LABEL_105;
          }
          goto LABEL_124;
        }
      LABEL_123:
        v190 = v136 >> 3;
        v191 = v136++ & 7;
        LODWORD(v190) = *(unsigned __int8*)(v138 + v190);
        v135[1] = v136;
        v157 = 2 * (((unsigned int)v190 >> v191) & 1);
        if (v136 >= v137) {
        LABEL_105:
          v158 = 0;
          if (v136 < v137) {
            goto LABEL_125;
          }
          goto LABEL_106;
        }
      LABEL_124:
        v192 = v136 >> 3;
        v193 = v136++ & 7;
        LODWORD(v192) = *(unsigned __int8*)(v138 + v192);
        v135[1] = v136;
        v158 = ((unsigned int)v192 >> v193) & 1;
        if (v136 < v137) {
        LABEL_125:
          v194 = *(unsigned __int8*)(v138 + (v136 >> 3));
          v135[1] = v136 + 1;
          v159 = (v194 >> (v136 & 7)) & 1;
          goto LABEL_126;
        }
      LABEL_106:
        v159 = 0;
      LABEL_126:
        *v121 =
            v159 |
            (2 *
             (v158 | v157 |
              (4 *
               (v156 | v155 |
                (4 *
                 (v154 | v153 |
                  (4 *
                   (v152 | v151 |
                    (4 * (v150 | v149 |
                          (4 * (v148 | v147 |
                                (4 * (v146 | v145 |
                                      (4 * (v144 | v143 |
                                            (4 * (v142 | v141))))))))))))))))));
        v121 += 2;
        v47 = 1;
        if (++v122 >= a1[3]) {
          return v47;
        }
      }
    }
    v129 = 0;
  LABEL_81:
    v130 = 0;
    if (v124 < v125) {
      goto LABEL_85;
    }
    goto LABEL_82;
  }
  v93 = v90 >> 3;
  v94 = (*a2)[1] & 7;
  ++v90;
  LODWORD(v93) = *(unsigned __int8*)(v92 + v93);
  v89[1] = v90;
  v95 = 2 * (((unsigned int)v93 >> v94) & 1);
  if (v90 >= v91) {
    goto LABEL_58;
  }
  v108 = v90 >> 3;
  v109 = v90++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v92 + v108);
  v89[1] = v90;
  v96 = ((unsigned int)v108 >> v109) & 1;
  if (v90 < v91) {
    goto LABEL_68;
  }
LABEL_59:
  v97 = 0;
  v98 = v96 | v95;
  if (v90 >= v91) {
    goto LABEL_60;
  }
LABEL_69:
  v112 = v90 >> 3;
  v113 = v90++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v92 + v112);
  v89[1] = v90;
  v99 = ((unsigned int)v112 >> v113) & 1;
  v100 = v97 | (4 * v98);
  if (v90 < v91) {
    goto LABEL_70;
  }
LABEL_61:
  v101 = 0;
  v102 = v99 | v100;
  if (v90 >= v91) {
    goto LABEL_62;
  }
LABEL_71:
  v116 = v90 >> 3;
  v117 = v90++ & 7;
  LODWORD(v116) = *(unsigned __int8*)(v92 + v116);
  v89[1] = v90;
  v103 = ((unsigned int)v116 >> v117) & 1;
  v104 = v101 | (4 * v102);
  if (v90 < v91) {
    goto LABEL_72;
  }
LABEL_63:
  v105 = 0;
  v106 = v103 | v104;
  if (v90 >= v91) {
    goto LABEL_64;
  }
LABEL_73:
  v120 = *(unsigned __int8*)(v92 + (v90 >> 3));
  v89[1] = v90 + 1;
  v107 = (v120 >> (v90 & 7)) & 1 | v105 | (4 * v106);
  a1[3] = v107;
  if (v107 <= 0x40) {
    goto LABEL_74;
  }
  return 0;
}

__int64 nerd_gillette_internal_otete_jaimev2_SerializePosition(float* a1,
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
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
  unsigned __int64 v41;
  char v42;
  unsigned __int64 v43;
  char v44;
  unsigned __int64 v45;
  char v46;
  unsigned __int64 v47;
  char v48;
  unsigned int v49;
  __int64* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
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
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v78;
  char v79;
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
  unsigned int v98;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 0xC) {
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
    goto LABEL_17;
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
  v29 = v3 >> 3;
  v30 = v3++ & 7;
  LODWORD(v29) = *(unsigned __int8*)(v5 + v29);
  v2[1] = v3;
  v9 = ((unsigned int)v29 >> v30) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_18;
  }
LABEL_17:
  v31 = v3 >> 3;
  v32 = v3++ & 7;
  LODWORD(v31) = *(unsigned __int8*)(v5 + v31);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v31 >> v32) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_19;
  }
LABEL_18:
  v33 = v3 >> 3;
  v34 = v3++ & 7;
  LODWORD(v33) = *(unsigned __int8*)(v5 + v33);
  v2[1] = v3;
  v12 = ((unsigned int)v33 >> v34) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_20;
  }
LABEL_19:
  v35 = v3 >> 3;
  v36 = v3++ & 7;
  LODWORD(v35) = *(unsigned __int8*)(v5 + v35);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v35 >> v36) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_21;
  }
LABEL_20:
  v37 = v3 >> 3;
  v38 = v3++ & 7;
  LODWORD(v37) = *(unsigned __int8*)(v5 + v37);
  v2[1] = v3;
  v16 = ((unsigned int)v37 >> v38) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_22;
  }
LABEL_21:
  v39 = v3 >> 3;
  v40 = v3++ & 7;
  LODWORD(v39) = *(unsigned __int8*)(v5 + v39);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v39 >> v40) & 1);
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    v20 = 0;
    v21 = v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
    goto LABEL_23;
  }
LABEL_22:
  v41 = v3 >> 3;
  v42 = v3++ & 7;
  LODWORD(v41) = *(unsigned __int8*)(v5 + v41);
  v2[1] = v3;
  v20 = ((unsigned int)v41 >> v42) & 1;
  v21 = v18 | (4 * v19);
  if (v3 >= v4) {
  LABEL_11:
    v22 = 0;
    v23 = v20 | v21;
    if (v3 >= v4) {
      goto LABEL_12;
    }
    goto LABEL_24;
  }
LABEL_23:
  v43 = v3 >> 3;
  v44 = v3++ & 7;
  LODWORD(v43) = *(unsigned __int8*)(v5 + v43);
  v2[1] = v3;
  v22 = 2 * (((unsigned int)v43 >> v44) & 1);
  v23 = v20 | v21;
  if (v3 >= v4) {
  LABEL_12:
    v24 = 0;
    v25 = v22 | (4 * v23);
    if (v3 >= v4) {
      goto LABEL_13;
    }
  LABEL_25:
    v47 = v3 >> 3;
    v48 = v3++ & 7;
    LODWORD(v47) = *(unsigned __int8*)(v5 + v47);
    v2[1] = v3;
    v26 = 2 * (((unsigned int)v47 >> v48) & 1);
    v27 = v24 | v25;
    if (v3 >= v4) {
      goto LABEL_14;
    }
    goto LABEL_26;
  }
LABEL_24:
  v45 = v3 >> 3;
  v46 = v3++ & 7;
  LODWORD(v45) = *(unsigned __int8*)(v5 + v45);
  v2[1] = v3;
  v24 = ((unsigned int)v45 >> v46) & 1;
  v25 = v22 | (4 * v23);
  if (v3 < v4) {
    goto LABEL_25;
  }
LABEL_13:
  v26 = 0;
  v27 = v24 | v25;
  if (v3 >= v4) {
  LABEL_14:
    v28 = 0;
    goto LABEL_27;
  }
LABEL_26:
  v49 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v28 = (v49 >> (v3 & 7)) & 1;
LABEL_27:
  *a1 = (float)((float)((float)(v28 | v26 | (unsigned __int64)(4 * v27)) *
                        0x1.0010020000000p-12f) *
                0x1.4000000000000p+9f) +
        0x0.0p+0f;
  v50 = *a2;
  v51 = (*a2)[1];
  v52 = (*a2)[2];
  if (v52 - v51 < 0xC) {
    return 0;
  }
  v53 = *v50;
  if (v52 <= v51) {
    v56 = 0;
  LABEL_30:
    v57 = 0;
    if (v51 >= v52) {
      goto LABEL_31;
    }
    goto LABEL_44;
  }
  v54 = v51 >> 3;
  v55 = (*a2)[1] & 7;
  ++v51;
  LODWORD(v54) = *(unsigned __int8*)(v53 + v54);
  v50[1] = v51;
  v56 = 2 * (((unsigned int)v54 >> v55) & 1);
  if (v51 >= v52) {
    goto LABEL_30;
  }
  v78 = v51 >> 3;
  v79 = v51++ & 7;
  LODWORD(v78) = *(unsigned __int8*)(v53 + v78);
  v50[1] = v51;
  v57 = ((unsigned int)v78 >> v79) & 1;
  if (v51 >= v52) {
  LABEL_31:
    v58 = 0;
    v59 = v57 | v56;
    if (v51 >= v52) {
      goto LABEL_32;
    }
    goto LABEL_45;
  }
LABEL_44:
  v80 = v51 >> 3;
  v81 = v51++ & 7;
  LODWORD(v80) = *(unsigned __int8*)(v53 + v80);
  v50[1] = v51;
  v58 = 2 * (((unsigned int)v80 >> v81) & 1);
  v59 = v57 | v56;
  if (v51 >= v52) {
  LABEL_32:
    v60 = 0;
    v61 = v58 | (4 * v59);
    if (v51 >= v52) {
      goto LABEL_33;
    }
    goto LABEL_46;
  }
LABEL_45:
  v82 = v51 >> 3;
  v83 = v51++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v53 + v82);
  v50[1] = v51;
  v60 = ((unsigned int)v82 >> v83) & 1;
  v61 = v58 | (4 * v59);
  if (v51 >= v52) {
  LABEL_33:
    v62 = 0;
    v63 = v60 | v61;
    if (v51 >= v52) {
      goto LABEL_34;
    }
    goto LABEL_47;
  }
LABEL_46:
  v84 = v51 >> 3;
  v85 = v51++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v53 + v84);
  v50[1] = v51;
  v62 = 2 * (((unsigned int)v84 >> v85) & 1);
  v63 = v60 | v61;
  if (v51 >= v52) {
  LABEL_34:
    v64 = 0;
    v65 = v62 | (4 * v63);
    if (v51 >= v52) {
      goto LABEL_35;
    }
    goto LABEL_48;
  }
LABEL_47:
  v86 = v51 >> 3;
  v87 = v51++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v53 + v86);
  v50[1] = v51;
  v64 = ((unsigned int)v86 >> v87) & 1;
  v65 = v62 | (4 * v63);
  if (v51 >= v52) {
  LABEL_35:
    v66 = 0;
    v67 = v64 | v65;
    if (v51 >= v52) {
      goto LABEL_36;
    }
    goto LABEL_49;
  }
LABEL_48:
  v88 = v51 >> 3;
  v89 = v51++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v53 + v88);
  v50[1] = v51;
  v66 = 2 * (((unsigned int)v88 >> v89) & 1);
  v67 = v64 | v65;
  if (v51 >= v52) {
  LABEL_36:
    v68 = 0;
    v69 = v66 | (4 * v67);
    if (v51 >= v52) {
      goto LABEL_37;
    }
    goto LABEL_50;
  }
LABEL_49:
  v90 = v51 >> 3;
  v91 = v51++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v53 + v90);
  v50[1] = v51;
  v68 = ((unsigned int)v90 >> v91) & 1;
  v69 = v66 | (4 * v67);
  if (v51 >= v52) {
  LABEL_37:
    v70 = 0;
    v71 = v68 | v69;
    if (v51 >= v52) {
      goto LABEL_38;
    }
    goto LABEL_51;
  }
LABEL_50:
  v92 = v51 >> 3;
  v93 = v51++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v53 + v92);
  v50[1] = v51;
  v70 = 2 * (((unsigned int)v92 >> v93) & 1);
  v71 = v68 | v69;
  if (v51 >= v52) {
  LABEL_38:
    v72 = 0;
    v73 = v70 | (4 * v71);
    if (v51 >= v52) {
      goto LABEL_39;
    }
  LABEL_52:
    v96 = v51 >> 3;
    v97 = v51++ & 7;
    LODWORD(v96) = *(unsigned __int8*)(v53 + v96);
    v50[1] = v51;
    v74 = 2 * (((unsigned int)v96 >> v97) & 1);
    v75 = v72 | v73;
    if (v51 >= v52) {
      goto LABEL_40;
    }
  LABEL_53:
    v98 = *(unsigned __int8*)(v53 + (v51 >> 3));
    v50[1] = v51 + 1;
    v76 = (v98 >> (v51 & 7)) & 1;
    goto LABEL_54;
  }
LABEL_51:
  v94 = v51 >> 3;
  v95 = v51++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v53 + v94);
  v50[1] = v51;
  v72 = ((unsigned int)v94 >> v95) & 1;
  v73 = v70 | (4 * v71);
  if (v51 < v52) {
    goto LABEL_52;
  }
LABEL_39:
  v74 = 0;
  v75 = v72 | v73;
  if (v51 < v52) {
    goto LABEL_53;
  }
LABEL_40:
  v76 = 0;
LABEL_54:
  a1[1] = (float)((float)((float)(v76 | v74 | (unsigned __int64)(4 * v75)) *
                          0x1.0010020000000p-12f) *
                  0x1.4000000000000p+9f) +
          -0x1.4000000000000p+6f;
  return 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74aec0(unsigned int* a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  char v25;
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
  unsigned int v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned int v71;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 9) {
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
    goto LABEL_14;
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
  v22 = v3 >> 3;
  v23 = v3++ & 7;
  LODWORD(v22) = *(unsigned __int8*)(v5 + v22);
  v2[1] = v3;
  v9 = ((unsigned int)v22 >> v23) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v24 = v3 >> 3;
  v25 = v3++ & 7;
  LODWORD(v24) = *(unsigned __int8*)(v5 + v24);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v24 >> v25) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v26 = v3 >> 3;
  v27 = v3++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v5 + v26);
  v2[1] = v3;
  v12 = ((unsigned int)v26 >> v27) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v28 = v3 >> 3;
  v29 = v3++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v5 + v28);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v28 >> v29) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_18;
  }
LABEL_17:
  v30 = v3 >> 3;
  v31 = v3++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v5 + v30);
  v2[1] = v3;
  v16 = ((unsigned int)v30 >> v31) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
  LABEL_19:
    v34 = v3 >> 3;
    v35 = v3++ & 7;
    LODWORD(v34) = *(unsigned __int8*)(v5 + v34);
    v2[1] = v3;
    v20 = ((unsigned int)v34 >> v35) & 1 | v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
    goto LABEL_20;
  }
LABEL_18:
  v32 = v3 >> 3;
  v33 = v3++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v5 + v32);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v32 >> v33) & 1);
  v19 = v16 | v17;
  if (v3 < v4) {
    goto LABEL_19;
  }
LABEL_10:
  v20 = v18 | (4 * v19);
  if (v3 >= v4) {
  LABEL_11:
    v21 = 0;
    goto LABEL_21;
  }
LABEL_20:
  v36 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v21 = (v36 >> (v3 & 7)) & 1;
LABEL_21:
  *a1 = v21 | (2 * v20);
  v37 = *a2;
  v38 = (*a2)[1];
  v39 = (*a2)[2];
  if (v39 - v38 < 9) {
    return 0;
  }
  v40 = *v37;
  if (v39 <= v38) {
    v43 = 0;
  LABEL_24:
    v44 = 0;
    if (v38 >= v39) {
      goto LABEL_25;
    }
    goto LABEL_35;
  }
  v41 = v38 >> 3;
  v42 = (*a2)[1] & 7;
  ++v38;
  LODWORD(v41) = *(unsigned __int8*)(v40 + v41);
  v37[1] = v38;
  v43 = 2 * (((unsigned int)v41 >> v42) & 1);
  if (v38 >= v39) {
    goto LABEL_24;
  }
  v57 = v38 >> 3;
  v58 = v38++ & 7;
  LODWORD(v57) = *(unsigned __int8*)(v40 + v57);
  v37[1] = v38;
  v44 = ((unsigned int)v57 >> v58) & 1;
  if (v38 >= v39) {
  LABEL_25:
    v45 = 0;
    v46 = v44 | v43;
    if (v38 >= v39) {
      goto LABEL_26;
    }
    goto LABEL_36;
  }
LABEL_35:
  v59 = v38 >> 3;
  v60 = v38++ & 7;
  LODWORD(v59) = *(unsigned __int8*)(v40 + v59);
  v37[1] = v38;
  v45 = 2 * (((unsigned int)v59 >> v60) & 1);
  v46 = v44 | v43;
  if (v38 >= v39) {
  LABEL_26:
    v47 = 0;
    v48 = v45 | (4 * v46);
    if (v38 >= v39) {
      goto LABEL_27;
    }
    goto LABEL_37;
  }
LABEL_36:
  v61 = v38 >> 3;
  v62 = v38++ & 7;
  LODWORD(v61) = *(unsigned __int8*)(v40 + v61);
  v37[1] = v38;
  v47 = ((unsigned int)v61 >> v62) & 1;
  v48 = v45 | (4 * v46);
  if (v38 >= v39) {
  LABEL_27:
    v49 = 0;
    v50 = v47 | v48;
    if (v38 >= v39) {
      goto LABEL_28;
    }
    goto LABEL_38;
  }
LABEL_37:
  v63 = v38 >> 3;
  v64 = v38++ & 7;
  LODWORD(v63) = *(unsigned __int8*)(v40 + v63);
  v37[1] = v38;
  v49 = 2 * (((unsigned int)v63 >> v64) & 1);
  v50 = v47 | v48;
  if (v38 >= v39) {
  LABEL_28:
    v51 = 0;
    v52 = v49 | (4 * v50);
    if (v38 >= v39) {
      goto LABEL_29;
    }
    goto LABEL_39;
  }
LABEL_38:
  v65 = v38 >> 3;
  v66 = v38++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v40 + v65);
  v37[1] = v38;
  v51 = ((unsigned int)v65 >> v66) & 1;
  v52 = v49 | (4 * v50);
  if (v38 >= v39) {
  LABEL_29:
    v53 = 0;
    v54 = v51 | v52;
    if (v38 >= v39) {
      goto LABEL_30;
    }
    goto LABEL_40;
  }
LABEL_39:
  v67 = v38 >> 3;
  v68 = v38++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v40 + v67);
  v37[1] = v38;
  v53 = 2 * (((unsigned int)v67 >> v68) & 1);
  v54 = v51 | v52;
  if (v38 >= v39) {
  LABEL_30:
    v55 = v53 | (4 * v54);
    if (v38 >= v39) {
    LABEL_31:
      a1[1] = 2 * v55;
      return 1;
    }
    goto LABEL_41;
  }
LABEL_40:
  v69 = v38 >> 3;
  v70 = v38++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v40 + v69);
  v37[1] = v38;
  v55 = ((unsigned int)v69 >> v70) & 1 | v53 | (4 * v54);
  if (v38 >= v39) {
    goto LABEL_31;
  }
LABEL_41:
  v71 = *(unsigned __int8*)(v40 + (v38 >> 3));
  v37[1] = v38 + 1;
  a1[1] = (v71 >> (v38 & 7)) & 1 | (2 * v55);
  return 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74b2e0(__int64 a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char v14;
  unsigned int v15;
  unsigned __int64 v16;
  char v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 == v3) {
    return 0;
  }
  if (v3 >= v4) {
    *(_BYTE*)a1 = 0;
    return 1;
  }
  v6 = *(unsigned __int8*)(*v2 + (v3 >> 3));
  v2[1] = v3 + 1;
  *(_BYTE*)a1 = ((1 << (v3 & 7)) & v6) != 0;
  if (((1 << (v3 & 7)) & v6) == 0) {
    return 1;
  }
  if ((SdkRoutine_87ad10(a1 + 4, a2) & 1) == 0) {
    return 0;
  }
  if ((SdkRoutine_87ad10(a1 + 12, a2) & 1) == 0) {
    return 0;
  }
  v9 = *a2;
  v10 = (*a2)[1];
  v11 = (*a2)[2];
  if (v11 - v10 < 3) {
    return 0;
  }
  v12 = *v9;
  if (v11 <= v10) {
    v15 = 0;
  }
  else {
    v13 = v10 >> 3;
    v14 = v10++ & 7;
    LODWORD(v13) = *(unsigned __int8*)(v12 + v13);
    v9[1] = v10;
    v15 = 2 * (((unsigned int)v13 >> v14) & 1);
  }
  if (v10 >= v11) {
    v18 = 0;
  }
  else {
    v16 = v10 >> 3;
    v17 = v10++ & 7;
    LODWORD(v16) = *(unsigned __int8*)(v12 + v16);
    v9[1] = v10;
    v18 = ((unsigned int)v16 >> v17) & 1;
  }
  v19 = v18 | v15;
  if (v10 >= v11) {
    v21 = 0;
  }
  else {
    v20 = *(unsigned __int8*)(v12 + (v10 >> 3));
    v9[1] = v10 + 1;
    v21 = (v20 >> (v10 & 7)) & 1;
  }
  *(_DWORD*)(a1 + 20) = (v21 | (2 * v19)) - 1;
  v22 = *a2;
  v23 = (*a2)[1];
  v24 = (*a2)[2];
  if (v24 - v23 < 8) {
    return 0;
  }
  v25 = *v22;
  if (v24 <= v23) {
    v28 = 0;
  }
  else {
    v26 = v23 >> 3;
    v27 = (*a2)[1] & 7;
    ++v23;
    LODWORD(v26) = *(unsigned __int8*)(v25 + v26);
    v22[1] = v23;
    v28 = 2 * (((unsigned int)v26 >> v27) & 1);
  }
  if (v23 >= v24) {
    v31 = 0;
  }
  else {
    v29 = v23 >> 3;
    v30 = v23++ & 7;
    LODWORD(v29) = *(unsigned __int8*)(v25 + v29);
    v22[1] = v23;
    v31 = ((unsigned int)v29 >> v30) & 1;
  }
  if (v23 >= v24) {
    v34 = 0;
  }
  else {
    v32 = v23 >> 3;
    v33 = v23++ & 7;
    LODWORD(v32) = *(unsigned __int8*)(v25 + v32);
    v22[1] = v23;
    v34 = 2 * (((unsigned int)v32 >> v33) & 1);
  }
  v35 = v31 | v28;
  if (v23 >= v24) {
    v38 = 0;
  }
  else {
    v36 = v23 >> 3;
    v37 = v23++ & 7;
    LODWORD(v36) = *(unsigned __int8*)(v25 + v36);
    v22[1] = v23;
    v38 = ((unsigned int)v36 >> v37) & 1;
  }
  v39 = v34 | (4 * v35);
  if (v23 >= v24) {
    v42 = 0;
  }
  else {
    v40 = v23 >> 3;
    v41 = v23++ & 7;
    LODWORD(v40) = *(unsigned __int8*)(v25 + v40);
    v22[1] = v23;
    v42 = 2 * (((unsigned int)v40 >> v41) & 1);
  }
  v43 = v38 | v39;
  if (v23 >= v24) {
    v46 = 0;
  }
  else {
    v44 = v23 >> 3;
    v45 = v23++ & 7;
    LODWORD(v44) = *(unsigned __int8*)(v25 + v44);
    v22[1] = v23;
    v46 = ((unsigned int)v44 >> v45) & 1;
  }
  v47 = v42 | (4 * v43);
  if (v23 >= v24) {
    v50 = 0;
  }
  else {
    v48 = v23 >> 3;
    v49 = v23++ & 7;
    LODWORD(v48) = *(unsigned __int8*)(v25 + v48);
    v22[1] = v23;
    v50 = 2 * (((unsigned int)v48 >> v49) & 1);
  }
  v51 = v46 | v47;
  if (v23 >= v24) {
    v53 = 0;
  }
  else {
    v52 = *(unsigned __int8*)(v25 + (v23 >> 3));
    v22[1] = v23 + 1;
    v53 = (v52 >> (v23 & 7)) & 1;
  }
  *(float*)(a1 + 24) =
      (float)((float)(v53 | v50 | (unsigned __int64)(4 * v51)) * 0.0039216f) +
      0.0f;
  return 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_Serialize_74b600(__int64 a1,
                                                              __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char v14;
  __int64 v15;
  unsigned __int64 v16;
  char v17;
  __int64 v18;
  unsigned __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned __int64 v56;
  char v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  int v61;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 == v3) {
    return 0;
  }
  if (v3 >= v4) {
    *(_BYTE*)a1 = 0;
    return 1;
  }
  v6 = *(unsigned __int8*)(*v2 + (v3 >> 3));
  v2[1] = v3 + 1;
  *(_BYTE*)a1 = ((1 << (v3 & 7)) & v6) != 0;
  if (((1 << (v3 & 7)) & v6) == 0) {
    return 1;
  }
  if ((SdkRoutine_87ad10(a1 + 4, a2) & 1) == 0) {
    return 0;
  }
  v9 = *a2;
  v10 = (*a2)[1];
  v11 = (*a2)[2];
  if (v11 - v10 < 0xA) {
    return 0;
  }
  v12 = *v9;
  if (v11 <= v10) {
    v15 = 0;
  }
  else {
    v13 = v10 >> 3;
    v14 = v10++ & 7;
    LODWORD(v13) = *(unsigned __int8*)(v12 + v13);
    v9[1] = v10;
    v15 = 2 * (((unsigned int)v13 >> v14) & 1);
  }
  if (v10 >= v11) {
    v18 = 0;
  }
  else {
    v16 = v10 >> 3;
    v17 = v10++ & 7;
    LODWORD(v16) = *(unsigned __int8*)(v12 + v16);
    v9[1] = v10;
    v18 = ((unsigned int)v16 >> v17) & 1;
  }
  if (v10 >= v11) {
    v21 = 0;
  }
  else {
    v19 = v10 >> 3;
    v20 = v10++ & 7;
    LODWORD(v19) = *(unsigned __int8*)(v12 + v19);
    v9[1] = v10;
    v21 = 2 * (((unsigned int)v19 >> v20) & 1);
  }
  v22 = v18 | v15;
  if (v10 >= v11) {
    v25 = 0;
  }
  else {
    v23 = v10 >> 3;
    v24 = v10++ & 7;
    LODWORD(v23) = *(unsigned __int8*)(v12 + v23);
    v9[1] = v10;
    v25 = ((unsigned int)v23 >> v24) & 1;
  }
  v26 = v21 | (4 * v22);
  if (v10 >= v11) {
    v29 = 0;
  }
  else {
    v27 = v10 >> 3;
    v28 = v10++ & 7;
    LODWORD(v27) = *(unsigned __int8*)(v12 + v27);
    v9[1] = v10;
    v29 = 2 * (((unsigned int)v27 >> v28) & 1);
  }
  v30 = v25 | v26;
  if (v10 >= v11) {
    v33 = 0;
  }
  else {
    v31 = v10 >> 3;
    v32 = v10++ & 7;
    LODWORD(v31) = *(unsigned __int8*)(v12 + v31);
    v9[1] = v10;
    v33 = ((unsigned int)v31 >> v32) & 1;
  }
  v34 = v29 | (4 * v30);
  if (v10 >= v11) {
    v37 = 0;
  }
  else {
    v35 = v10 >> 3;
    v36 = v10++ & 7;
    LODWORD(v35) = *(unsigned __int8*)(v12 + v35);
    v9[1] = v10;
    v37 = 2 * (((unsigned int)v35 >> v36) & 1);
  }
  v38 = v33 | v34;
  if (v10 >= v11) {
    v41 = 0;
  }
  else {
    v39 = v10 >> 3;
    v40 = v10++ & 7;
    LODWORD(v39) = *(unsigned __int8*)(v12 + v39);
    v9[1] = v10;
    v41 = ((unsigned int)v39 >> v40) & 1;
  }
  v42 = v37 | (4 * v38);
  if (v10 >= v11) {
    v45 = 0;
  }
  else {
    v43 = v10 >> 3;
    v44 = v10++ & 7;
    LODWORD(v43) = *(unsigned __int8*)(v12 + v43);
    v9[1] = v10;
    v45 = 2 * (((unsigned int)v43 >> v44) & 1);
  }
  v46 = v41 | v42;
  if (v10 >= v11) {
    v48 = 0;
  }
  else {
    v47 = *(unsigned __int8*)(v12 + (v10 >> 3));
    v9[1] = v10 + 1;
    v48 = (v47 >> (v10 & 7)) & 1;
  }
  *(float*)(a1 + 12) =
      (float)((float)((float)(v48 | v45 | (unsigned __int64)(4 * v46)) *
                      0x1.0040100000000p-10f) *
              0x1.0000000000000p+1f) +
      -0x1.0000000000000p+0f;
  v49 = *a2;
  v50 = (*a2)[1];
  v51 = (*a2)[2];
  if (v51 - v50 < 3) {
    return 0;
  }
  v52 = *v49;
  if (v51 <= v50) {
    v55 = 0;
  }
  else {
    v53 = v50 >> 3;
    v54 = v49[1] & 7;
    ++v50;
    LODWORD(v53) = *(unsigned __int8*)(v52 + v53);
    v49[1] = v50;
    v55 = 2 * (((unsigned int)v53 >> v54) & 1);
  }
  if (v50 >= v51) {
    v58 = 0;
  }
  else {
    v56 = v50 >> 3;
    v57 = v50++ & 7;
    LODWORD(v56) = *(unsigned __int8*)(v52 + v56);
    v49[1] = v50;
    v58 = ((unsigned int)v56 >> v57) & 1;
  }
  v59 = v58 | v55;
  if (v50 >= v51) {
    v61 = 0;
  }
  else {
    v60 = *(unsigned __int8*)(v52 + (v50 >> 3));
    v49[1] = v50 + 1;
    v61 = (v60 >> (v50 & 7)) & 1;
  }
  *(_DWORD*)(a1 + 16) = (v61 | (2 * v59)) - 1;
  return 1;
}

__attribute__((swiftcall)) void

nerd_gillette_internal_otete_jaimev2_GetReverseSymmetricSegment(
    PSEUDO_X8 x8_, __int16* result, unsigned __int16* a2)
{
  _WORD* a3 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = result[1];
  v4 = *result;
  if (v3 >= 1) {
    if ((v4 & 0x80000000) == 0) {
      *a3 = *a2;
      a3[1] = a2[1];
      {
        result;
        return;
      }
    }
  LABEL_9:
    v6 = -a2[1];
    a3[1] = *a2;
    *a3 = v6;
    {
      result;
      return;
    }
  }
  if (v4 >= 1) {
    v5 = -*a2;
    *a3 = a2[1];
    a3[1] = v5;
    {
      result;
      return;
    }
  }
  if ((v3 & 0x80000000) == 0) {
    if ((v4 & 0x80000000) == 0) {
      *(_DWORD*)a3 = 0;
      {
        result;
        return;
      }
    }
    goto LABEL_9;
  }
  v7 = -a2[1];
  *a3 = -*a2;
  a3[1] = v7;
  {
    result;
    return;
  }
}

__int16* nerd_gillette_internal_otete_jaimev2_GetSymmetricEquivalentSegments(
    __int16* result, unsigned __int16* a2, _WORD* a3, _WORD* a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = result[1];
  v5 = *result;
  if (v4 >= 1) {
    if ((v5 & 0x80000000) == 0) {
      *a4 = *a2;
      a4[1] = a2[1];
      *a3 = *result;
      a3[1] = result[1];
      return result;
    }
  LABEL_8:
    v7 = -*a2;
    *a4 = a2[1];
    a4[1] = v7;
    v8 = -(unsigned __int16)*result;
    *a3 = result[1];
    a3[1] = v8;
    return result;
  }
  if (v5 >= 1) {
    v6 = -a2[1];
    a4[1] = *a2;
    *a4 = v6;
    LOWORD(v6) = *result;
    *a3 = -result[1];
    a3[1] = v6;
    return result;
  }
  if ((v4 & 0x80000000) == 0) {
    if ((v5 & 0x80000000) == 0) {
      return result;
    }
    goto LABEL_8;
  }
  v9 = -a2[1];
  *a4 = -*a2;
  a4[1] = v9;
  v10 = -(unsigned __int16)result[1];
  *a3 = -*result;
  a3[1] = v10;
  return result;
}

__attribute__((swiftcall)) void

nerd_gillette_internal_otete_jaimev2_IdentifyCluster(PSEUDO_X8 x8_,
                                                     __int64 result,
                                                     unsigned __int8 a2,
                                                     __int16* a3)
{
  __int16* a4 = (__int16*)PSEUDO_X8_VALUE(x8_);
  int v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  unsigned __int8* v12;
  __int16 v13;
  float v14;
  __int16 v15;
  int v16;
  int v17;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;

  v4 = a3[1];
  v5 = (float)v4;
  v6 = (float)*a3;
  v7 = fabsf((float)v4);
  if (v7 < v6) {
    v8 = (float)(v5 / v6) * 0x1.0000000000000p-2f;
    if (a2 == 0) {
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  v9 = -0x1.0000000000000p+0f;
  v10 = -v7;
  if (v4 > 0) {
    v9 = 0x1.0000000000000p+0f;
  }
  if (v6 >= v10) {
    v8 = (float)(PSEUDO_UNFUSED((float)(v6 / v5) * -0x1.0000000000000p-2f)) +
         (float)(v9 * 0x1.0000000000000p-1f);
    if (a2 != 0) {
      goto LABEL_8;
    }
  }
  else {
    v8 = v9 + (float)((float)(v5 / v6) * 0x1.0000000000000p-2f);
    if (a2 != 0) {
    LABEL_8:
      v11 = a2;
      v12 = (unsigned __int8*)(result + 1);
      v13 = -1;
      v14 = 0x1.fffffe0000000p+127f;
      v15 = -1;
      while (1) {
        v16 = (char)*(v12 - 1);
        v17 = *v12;
        if (*(v12 - 1) == 0 && (unsigned int)v17 < 2) {
          goto LABEL_9;
        }
        v17 = (char)v17;
        v19 = (float)v16;
        v20 = (float)(char)v17;
        v21 = fabsf(v20);
        if (v21 >= (float)v16) {
          v23 = -v21;
          if (v17 <= 0) {
            v24 = -0x1.0000000000000p+0f;
          }
          else {
            v24 = 0x1.0000000000000p+0f;
          }
          if (v19 >= v23) {
            v22 = vabds_f32((float)(PSEUDO_UNFUSED((float)(v19 / v20) *
                                                   -0x1.0000000000000p-2f)) +
                                (float)(v24 * 0x1.0000000000000p-1f),
                            v8);
            if (v22 < v14) {
            LABEL_25:
              v14 = v22;
              v15 = v17;
              v13 = (char)*(v12 - 1);
            }
          }
          else {
            v22 = vabds_f32(
                v24 + (float)((float)(v20 / v19) * 0x1.0000000000000p-2f), v8);
            if (v22 < v14) {
              goto LABEL_25;
            }
          }
        }
        else {
          v22 = vabds_f32((float)(v20 / v19) * 0x1.0000000000000p-2f, v8);
          if (v22 < v14) {
            goto LABEL_25;
          }
        }
      LABEL_9:
        v12 += 4;
        if (--v11 == 0) {
          goto LABEL_28;
        }
      }
    }
  }
LABEL_27:
  v15 = -1;
  v13 = -1;
LABEL_28:
  *a4 = v13;
  a4[1] = v15;
  {
    result;
    return;
  }
}

__int64 nerd_gillette_internal_otete_jaimev2_EncodeFullSilhouetteROK(
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
  __int64 v71;
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
  v37 = a4 + 8;
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
      v60 = &v37[16 * v58];
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
          v64 = &v37[16 * v58];
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
    v67 = &v37[16 * v58];
    v68 = 0;
    v69 = 0;
    v70 = v67[2];
    v71 = *((_QWORD*)v67 + 1);
    v72 = v70;
    while (2) {
      v73 = (char*)(v71 + 4 * v69);
      v74 = *v73;
      if ((__int16)v53 >= v74) {
        if ((__int16)v53 > v74) {
          goto LABEL_41;
        }
        v75 = v73[1];
        if ((__int16)v55 >= v75) {
          if ((__int16)v55 <= v75) {
            v76 = 0;
            v77 = *(unsigned __int16*)(v71 + 4 * v69 + 2);
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
      v82 = (char*)(v71 + 4 * v81);
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
    v77 = *(unsigned __int16*)(v71 + 4 * v81 + 2);
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

bool nerd_gillette_internal_otete_jaimev2_DecodeFullSilhouetteROK(
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
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  unsigned __int64 v46;
  char v47;
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
  unsigned int v59;
  int v60;
  unsigned int v61;
  int v62;
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
  int v76;
  unsigned int v77;
  unsigned __int64 v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  char v82;
  unsigned __int64 v83;
  char v84;
  unsigned __int64 v85;
  char v86;
  unsigned __int64 v87;
  char v88;
  unsigned __int64 v89;
  char v90;
  unsigned __int64 v91;
  char v92;
  unsigned __int64 v93;
  char v94;
  unsigned __int64 v95;
  char v96;
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
  unsigned __int64 v113;
  char v114;
  unsigned int v115;
  _WORD* v116;
  unsigned __int8* v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int8* v128;
  int v129;
  int v130;
  char v131;
  __int64 v132;
  unsigned __int8* v133;
  int v134;
  int v135;
  unsigned __int8* v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  int v140;
  unsigned __int64 v141;
  char v142;
  unsigned int v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned int v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  char* v153;
  int v154;
  int v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  char v158;
  unsigned int v159;
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
  _WORD* v192;
  unsigned __int64 v193;

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
    goto LABEL_14;
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
    goto LABEL_15;
  }
LABEL_14:
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
    goto LABEL_16;
  }
LABEL_15:
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
    goto LABEL_17;
  }
LABEL_16:
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
    goto LABEL_18;
  }
LABEL_17:
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
    goto LABEL_19;
  }
LABEL_18:
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
  LABEL_20:
    v40 = v4 >> 3;
    v41 = v4++ & 7;
    LODWORD(v40) = *(unsigned __int8*)(v6 + v40);
    a2[1] = v4;
    v23 = 2 * (((unsigned int)v40 >> v41) & 1);
    v24 = v22 | v21;
    if (v4 >= v5) {
      goto LABEL_11;
    }
    goto LABEL_21;
  }
LABEL_19:
  v38 = v4 >> 3;
  v39 = v4++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v6 + v38);
  a2[1] = v4;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v4 < v5) {
    goto LABEL_20;
  }
LABEL_10:
  v23 = 0;
  v24 = v22 | v21;
  if (v4 >= v5) {
  LABEL_11:
    v25 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v42 = v4 >> 3;
  v43 = v4++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
  a2[1] = v4;
  v25 = ((unsigned int)v42 >> v43) & 1;
LABEL_22:
  v44 = v23 | (4 * v24) | v25;
  if (v3 < v44) {
    return false;
  }
  if (v4 >= v5) {
    v48 = 0;
  LABEL_26:
    v49 = 0;
    if (v4 >= v5) {
      goto LABEL_27;
    }
    goto LABEL_47;
  }
  v46 = v4 >> 3;
  v47 = v4++ & 7;
  LODWORD(v46) = *(unsigned __int8*)(v6 + v46);
  a2[1] = v4;
  v48 = 2 * (((unsigned int)v46 >> v47) & 1);
  if (v4 >= v5) {
    goto LABEL_26;
  }
  v81 = v4 >> 3;
  v82 = v4++ & 7;
  LODWORD(v81) = *(unsigned __int8*)(v6 + v81);
  a2[1] = v4;
  v49 = ((unsigned int)v81 >> v82) & 1;
  if (v4 >= v5) {
  LABEL_27:
    v50 = 0;
    if (v4 >= v5) {
      goto LABEL_28;
    }
    goto LABEL_48;
  }
LABEL_47:
  v83 = v4 >> 3;
  v84 = v4++ & 7;
  LODWORD(v83) = *(unsigned __int8*)(v6 + v83);
  a2[1] = v4;
  v50 = 2 * (((unsigned int)v83 >> v84) & 1);
  if (v4 >= v5) {
  LABEL_28:
    v51 = 0;
    if (v4 >= v5) {
      goto LABEL_29;
    }
    goto LABEL_49;
  }
LABEL_48:
  v85 = v4 >> 3;
  v86 = v4++ & 7;
  LODWORD(v85) = *(unsigned __int8*)(v6 + v85);
  a2[1] = v4;
  v51 = ((unsigned int)v85 >> v86) & 1;
  if (v4 >= v5) {
  LABEL_29:
    v52 = 0;
    if (v4 >= v5) {
      goto LABEL_30;
    }
    goto LABEL_50;
  }
LABEL_49:
  v87 = v4 >> 3;
  v88 = v4++ & 7;
  LODWORD(v87) = *(unsigned __int8*)(v6 + v87);
  a2[1] = v4;
  v52 = 2 * (((unsigned int)v87 >> v88) & 1);
  if (v4 >= v5) {
  LABEL_30:
    v53 = 0;
    if (v4 >= v5) {
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_50:
  v89 = v4 >> 3;
  v90 = v4++ & 7;
  LODWORD(v89) = *(unsigned __int8*)(v6 + v89);
  a2[1] = v4;
  v53 = ((unsigned int)v89 >> v90) & 1;
  if (v4 >= v5) {
  LABEL_31:
    v54 = 0;
    if (v4 >= v5) {
      goto LABEL_32;
    }
    goto LABEL_52;
  }
LABEL_51:
  v91 = v4 >> 3;
  v92 = v4++ & 7;
  LODWORD(v91) = *(unsigned __int8*)(v6 + v91);
  a2[1] = v4;
  v54 = 2 * (((unsigned int)v91 >> v92) & 1);
  if (v4 >= v5) {
  LABEL_32:
    v55 = 0;
    if (v4 >= v5) {
      goto LABEL_33;
    }
    goto LABEL_53;
  }
LABEL_52:
  v93 = v4 >> 3;
  v94 = v4++ & 7;
  LODWORD(v93) = *(unsigned __int8*)(v6 + v93);
  a2[1] = v4;
  v55 = ((unsigned int)v93 >> v94) & 1;
  if (v4 >= v5) {
  LABEL_33:
    v56 = 0;
    if (v4 >= v5) {
      goto LABEL_34;
    }
    goto LABEL_54;
  }
LABEL_53:
  v95 = v4 >> 3;
  v96 = v4++ & 7;
  LODWORD(v95) = *(unsigned __int8*)(v6 + v95);
  a2[1] = v4;
  v56 = 2 * (((unsigned int)v95 >> v96) & 1);
  if (v4 >= v5) {
  LABEL_34:
    v57 = 0;
    if (v4 >= v5) {
      goto LABEL_35;
    }
    goto LABEL_55;
  }
LABEL_54:
  v97 = v4 >> 3;
  v98 = v4++ & 7;
  LODWORD(v97) = *(unsigned __int8*)(v6 + v97);
  a2[1] = v4;
  v57 = ((unsigned int)v97 >> v98) & 1;
  if (v4 >= v5) {
  LABEL_35:
    v58 = 0;
    if (v4 >= v5) {
      goto LABEL_36;
    }
    goto LABEL_56;
  }
LABEL_55:
  v99 = v4 >> 3;
  v100 = v4++ & 7;
  LODWORD(v99) = *(unsigned __int8*)(v6 + v99);
  a2[1] = v4;
  v58 = 2 * (((unsigned int)v99 >> v100) & 1);
  if (v4 >= v5) {
  LABEL_36:
    v59 = 0;
    v60 = v49 | v48;
    if (v4 >= v5) {
      goto LABEL_37;
    }
    goto LABEL_57;
  }
LABEL_56:
  v101 = v4 >> 3;
  v102 = v4++ & 7;
  LODWORD(v101) = *(unsigned __int8*)(v6 + v101);
  a2[1] = v4;
  v59 = ((unsigned int)v101 >> v102) & 1;
  v60 = v49 | v48;
  if (v4 >= v5) {
  LABEL_37:
    v61 = 0;
    v62 = v50 | (4 * v60);
    v63 = v59 | v58;
    if (v4 >= v5) {
      goto LABEL_38;
    }
    goto LABEL_58;
  }
LABEL_57:
  v103 = v4 >> 3;
  v104 = v4++ & 7;
  LODWORD(v103) = *(unsigned __int8*)(v6 + v103);
  a2[1] = v4;
  v61 = 2 * (((unsigned int)v103 >> v104) & 1);
  v62 = v50 | (4 * v60);
  v63 = v59 | v58;
  if (v4 >= v5) {
  LABEL_38:
    v64 = 0;
    v65 = v61 | (4 * v63);
    v66 = v51 | v62;
    if (v4 >= v5) {
      goto LABEL_39;
    }
    goto LABEL_59;
  }
LABEL_58:
  v105 = v4 >> 3;
  v106 = v4++ & 7;
  LODWORD(v105) = *(unsigned __int8*)(v6 + v105);
  a2[1] = v4;
  v64 = ((unsigned int)v105 >> v106) & 1;
  v65 = v61 | (4 * v63);
  v66 = v51 | v62;
  if (v4 >= v5) {
  LABEL_39:
    v67 = 0;
    v68 = v52 | (4 * v66);
    v69 = v64 | v65;
    if (v4 >= v5) {
      goto LABEL_40;
    }
    goto LABEL_60;
  }
LABEL_59:
  v107 = v4 >> 3;
  v108 = v4++ & 7;
  LODWORD(v107) = *(unsigned __int8*)(v6 + v107);
  a2[1] = v4;
  v67 = 2 * (((unsigned int)v107 >> v108) & 1);
  v68 = v52 | (4 * v66);
  v69 = v64 | v65;
  if (v4 >= v5) {
  LABEL_40:
    v70 = 0;
    v71 = v67 | (4 * v69);
    v72 = v53 | v68;
    if (v4 >= v5) {
      goto LABEL_41;
    }
    goto LABEL_61;
  }
LABEL_60:
  v109 = v4 >> 3;
  v110 = v4++ & 7;
  LODWORD(v109) = *(unsigned __int8*)(v6 + v109);
  a2[1] = v4;
  v70 = ((unsigned int)v109 >> v110) & 1;
  v71 = v67 | (4 * v69);
  v72 = v53 | v68;
  if (v4 >= v5) {
  LABEL_41:
    v73 = 0;
    v74 = v54 | (4 * v72);
    v75 = v70 | v71;
    if (v4 >= v5) {
      goto LABEL_42;
    }
    goto LABEL_62;
  }
LABEL_61:
  v111 = v4 >> 3;
  v112 = v4++ & 7;
  LODWORD(v111) = *(unsigned __int8*)(v6 + v111);
  a2[1] = v4;
  v73 = 2 * (((unsigned int)v111 >> v112) & 1);
  v74 = v54 | (4 * v72);
  v75 = v70 | v71;
  if (v4 >= v5) {
  LABEL_42:
    v76 = v55 | v74;
    v77 = v73 | (4 * v75);
    if (v4 >= v5) {
      goto LABEL_43;
    }
    goto LABEL_63;
  }
LABEL_62:
  v113 = v4 >> 3;
  v114 = v4++ & 7;
  LODWORD(v113) = *(unsigned __int8*)(v6 + v113);
  a2[1] = v4;
  v76 = v55 | v74;
  v77 = ((unsigned int)v113 >> v114) & 1 | v73 | (4 * v75);
  if (v4 >= v5) {
  LABEL_43:
    v78 = a1[1];
    v79 = 2 * v77;
    v80 = v57 | v56 | (4 * v76);
    if (v78 >= v3) {
      goto LABEL_65;
    }
    goto LABEL_64;
  }
LABEL_63:
  v115 = *(unsigned __int8*)(v6 + (v4 >> 3));
  a2[1] = v4 + 1;
  v78 = a1[1];
  v79 = (v115 >> (v4 & 7)) & 1 | (2 * v77);
  v80 = v57 | v56 | (4 * v76);
  if (v78 < v3) {
  LABEL_64:
    v116 = (_WORD*)(*a1 + 4 * v78);
    *v116 = v80;
    v116[1] = v79;
    a1[1] = v78 + 1;
  }
LABEL_65:
  v117 = a3 + 8;
  v118 = 65529;
  v119 = 0;
  while (2) {
    if ((__int16)v118 < 1) {
      if ((__int16)v119 >= 1) {
        v120 = -v118;
        LOWORD(v121) = v119;
        goto LABEL_71;
      }
      if ((v118 & 0x8000) != 0) {
        v120 = -v119;
        v121 = -v118;
        goto LABEL_71;
      }
      if ((v119 & 0x8000) == 0) {
        LOWORD(v120) = 0;
        LOWORD(v121) = 0;
        goto LABEL_71;
      }
      goto LABEL_68;
    }
    LOWORD(v120) = v119;
    LOWORD(v121) = v118;
    if ((v119 & 0x8000) != 0) {
    LABEL_68:
      v121 = -v119;
      LOWORD(v120) = v118;
    }
  LABEL_71:
    v122 = *a3;
    v123 = (unsigned __int16)v120;
    v124 = (unsigned __int16)v121;
    v125 = 0;
    v126 = 0;
    v127 = v122;
    while (1) {
      v128 = &v117[16 * v126];
      v129 = (char)*v128;
      if (v123 >= v129) {
        if (v123 <= v129) {
          v130 = (char)v128[1];
          if (v124 < v130) {
            goto LABEL_73;
          }
          if (v124 <= v130) {
            break;
          }
        }
        v125 = v126;
        v126 = v127;
      }
    LABEL_73:
      v127 = v126;
      v126 = (unsigned __int64)(v126 + v125) >> 1;
      if (v125 == v126) {
        v132 = 0;
        v126 = 0;
        while (1) {
          v133 = &v117[16 * v126];
          v134 = (char)*v133;
          if (v134 <= 0) {
            if ((v134 & 0x80000000) == 0) {
              v135 = (char)v133[1];
              if (v135 > 1) {
                goto LABEL_81;
              }
              if (v135 == 1) {
                v131 = 0;
                goto LABEL_88;
              }
            }
            v132 = v126;
            v126 = v122;
          }
        LABEL_81:
          v122 = v126;
          v126 = (unsigned __int64)(v126 + v132) >> 1;
          if (v132 == v126) {
            v131 = *(a3 - 8);
            v126 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v131 = v129;
  LABEL_88:
    if (v123 != (unsigned __int16)v131) {
      return false;
    }
    v136 = &v117[16 * v126];
    if (v124 != (unsigned __int16)(char)v136[1]) {
      return false;
    }
    v137 = a2[1];
    v138 = a2[2];
    v139 = *a2;
    v140 = 0;
    while (2) {
      if (v137 >= v138) {
        v143 = 0;
      }
      else {
        v141 = v137 >> 3;
        v142 = v137++ & 7;
        LODWORD(v141) = *(unsigned __int8*)(v139 + v141);
        a2[1] = v137;
        v143 = ((unsigned int)v141 >> v142) & 1;
      }
      v144 = v136[2];
      v145 = *((_QWORD*)v136 + 1);
      v146 = v143 & 0xFFFFF001 | (2 * (v140 & 0x7FF));
      v147 = 0;
      v148 = 0;
      v149 = (v140 & 0xFFFFF000) + 4096;
      v140 = v146 | v149;
      v150 = (unsigned __int16)v149 >> 12;
    LABEL_97:
      v151 = *(unsigned __int16*)(v145 + 4 * v148 + 2);
      if (v150 < v151 >> 12) {
        goto LABEL_96;
      }
      if (v150 > v151 >> 12) {
        goto LABEL_95;
      }
      v152 = v151 & 0xFFF;
      if (v146 < v152) {
        goto LABEL_96;
      }
      if (v146 > v152) {
      LABEL_95:
        v147 = v148;
        v148 = v144;
      LABEL_96:
        v144 = v148;
        v148 = (v148 + v147) >> 1;
        if (v147 == v148) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v153 = (char*)(v145 + 4 * v148);
    v154 = *v153;
    v155 = v153[1];
    if (v154 == 0) {
      if (v155 == 1) {
        if (v137 >= v138) {
          v159 = 0;
        LABEL_109:
          v160 = 0;
          if (v137 >= v138) {
            goto LABEL_110;
          }
        LABEL_127:
          v173 = v137 >> 3;
          v174 = v137++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v139 + v173);
          a2[1] = v137;
          v161 = 2 * (((unsigned int)v173 >> v174) & 1);
          if (v137 < v138) {
            goto LABEL_128;
          }
        LABEL_111:
          v162 = 0;
          if (v137 >= v138) {
            goto LABEL_112;
          }
        LABEL_129:
          v177 = v137 >> 3;
          v178 = v137++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v139 + v177);
          a2[1] = v137;
          v163 = 2 * (((unsigned int)v177 >> v178) & 1);
          if (v137 < v138) {
            goto LABEL_130;
          }
        LABEL_113:
          v164 = 0;
          if (v137 >= v138) {
            goto LABEL_114;
          }
        LABEL_131:
          v181 = v137 >> 3;
          v182 = v137++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v139 + v181);
          a2[1] = v137;
          v165 = 2 * (((unsigned int)v181 >> v182) & 1);
          if (v137 < v138) {
            goto LABEL_132;
          }
        LABEL_115:
          v166 = 0;
          if (v137 >= v138) {
            goto LABEL_116;
          }
        LABEL_133:
          v185 = v137 >> 3;
          v186 = v137++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v139 + v185);
          a2[1] = v137;
          v167 = 2 * (((unsigned int)v185 >> v186) & 1);
          if (v137 < v138) {
            goto LABEL_134;
          }
        LABEL_117:
          v168 = 0;
          if (v137 >= v138) {
            goto LABEL_118;
          }
        LABEL_135:
          v189 = v137 >> 3;
          v190 = v137++ & 7;
          LODWORD(v189) = *(unsigned __int8*)(v139 + v189);
          a2[1] = v137;
          v169 = 2 * (((unsigned int)v189 >> v190) & 1);
          if (v137 < v138) {
            goto LABEL_136;
          }
        LABEL_119:
          v170 = 0;
        }
        else {
          v157 = v137 >> 3;
          v158 = v137++ & 7;
          LODWORD(v157) = *(unsigned __int8*)(v139 + v157);
          a2[1] = v137;
          v159 = 2 * (((unsigned int)v157 >> v158) & 1);
          if (v137 >= v138) {
            goto LABEL_109;
          }
          v171 = v137 >> 3;
          v172 = v137++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v139 + v171);
          a2[1] = v137;
          v160 = ((unsigned int)v171 >> v172) & 1;
          if (v137 < v138) {
            goto LABEL_127;
          }
        LABEL_110:
          v161 = 0;
          if (v137 >= v138) {
            goto LABEL_111;
          }
        LABEL_128:
          v175 = v137 >> 3;
          v176 = v137++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v139 + v175);
          a2[1] = v137;
          v162 = ((unsigned int)v175 >> v176) & 1;
          if (v137 < v138) {
            goto LABEL_129;
          }
        LABEL_112:
          v163 = 0;
          if (v137 >= v138) {
            goto LABEL_113;
          }
        LABEL_130:
          v179 = v137 >> 3;
          v180 = v137++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v139 + v179);
          a2[1] = v137;
          v164 = ((unsigned int)v179 >> v180) & 1;
          if (v137 < v138) {
            goto LABEL_131;
          }
        LABEL_114:
          v165 = 0;
          if (v137 >= v138) {
            goto LABEL_115;
          }
        LABEL_132:
          v183 = v137 >> 3;
          v184 = v137++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v139 + v183);
          a2[1] = v137;
          v166 = ((unsigned int)v183 >> v184) & 1;
          if (v137 < v138) {
            goto LABEL_133;
          }
        LABEL_116:
          v167 = 0;
          if (v137 >= v138) {
            goto LABEL_117;
          }
        LABEL_134:
          v187 = v137 >> 3;
          v188 = v137++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v139 + v187);
          a2[1] = v137;
          v168 = ((unsigned int)v187 >> v188) & 1;
          if (v137 < v138) {
            goto LABEL_135;
          }
        LABEL_118:
          v169 = 0;
          if (v137 >= v138) {
            goto LABEL_119;
          }
        LABEL_136:
          v191 = *(unsigned __int8*)(v139 + (v137 >> 3));
          a2[1] = v137 + 1;
          v170 = (v191 >> (v137 & 7)) & 1;
        }
        v154 = (v163 | (4 * (v162 | v161 | (4 * (v160 | v159))))) + v164 - 32;
        v155 = (v169 | (4 * (v168 | v167 | (4 * (v166 | v165))))) + v170 - 32;
        if ((__int16)v118 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v154 = 0;
        if ((__int16)v118 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v119 & 0x8000) != 0) {
        goto LABEL_143;
      }
      v119 = v154;
      v154 = v155;
      v156 = a1[1];
      if (((unsigned __int16)v119 | (unsigned __int16)v155) == 0) {
        return v44 == v156;
      }
      goto LABEL_144;
    }
    if ((__int16)v118 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v119 < 1) {
      if ((v118 & 0x8000) == 0) {
        if ((v119 & 0x8000) == 0) {
          v156 = a1[1];
          return v44 == v156;
        }
      LABEL_143:
        v119 = -v155;
        v156 = a1[1];
        if (((unsigned __int16)-(__int16)v155 | (unsigned __int16)v154) == 0) {
          return v44 == v156;
        }
        goto LABEL_144;
      }
      v119 = -v154;
      v154 = -v155;
      v156 = a1[1];
      if (((unsigned __int16)v119 | (unsigned __int16)-(__int16)v155) == 0) {
        return v44 == v156;
      }
    LABEL_144:
      if (v156 >= v3) {
        return false;
      }
      v79 += v154;
      v80 += v119;
      v192 = (_WORD*)(*a1 + 4 * v156);
      *v192 = v80;
      v192[1] = v79;
      v193 = v156 + 1;
      a1[1] = v156 + 1;
      if (v156 >= v44) {
        return false;
      }
      v118 = v154;
      if (((unsigned __int16)v119 | (unsigned __int16)v154) == 0) {
        v156 = v193;
        return v44 == v156;
      }
      continue;
    }
    break;
  }
  v154 = -v154;
  v119 = v155;
  v156 = a1[1];
  if (((unsigned __int16)v155 | (unsigned __int16)v154) != 0) {
    goto LABEL_144;
  }
  return v44 == v156;
}

bool nerd_gillette_internal_otete_jaimev2_DecodeFullSilhouetteImplROK(
    _QWORD* a1, __int64* a2, unsigned __int8* a3,
    __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*))
{
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
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
  __int64 v148;
  unsigned int v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned int v155;
  char* v156;
  int v157;
  int v158;
  unsigned __int64 v159;
  char v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  int v171;
  unsigned __int64 v172;
  char v173;
  unsigned __int64 v174;
  char v175;
  unsigned __int64 v176;
  char v177;
  unsigned __int64 v178;
  char v179;
  unsigned __int64 v180;
  char v181;
  unsigned __int64 v182;
  char v183;
  unsigned __int64 v184;
  char v185;
  unsigned __int64 v186;
  char v187;
  unsigned __int64 v188;
  char v189;
  unsigned __int64 v190;
  char v191;
  unsigned int v192;
  unsigned __int64 v193;
  _QWORD* v194;
  _WORD v196[2];
  __int16 v197;
  _BYTE v198[10];

  a1[1] = 0;
  v4 = a1[2];
  v8 = a2[1];
  v9 = a2[2];
  v10 = *a2;
  if (v8 >= v9) {
    v13 = 0;
  LABEL_3:
    v14 = 0;
    if (v8 >= v9) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v11 = v8 >> 3;
  v12 = a2[1] & 7;
  ++v8;
  LODWORD(v11) = *(unsigned __int8*)(v10 + v11);
  a2[1] = v8;
  v13 = 2 * (((unsigned int)v11 >> v12) & 1);
  if (v8 >= v9) {
    goto LABEL_3;
  }
  v30 = v8 >> 3;
  v31 = v8++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v10 + v30);
  a2[1] = v8;
  v14 = ((unsigned int)v30 >> v31) & 1;
  if (v8 >= v9) {
  LABEL_4:
    v15 = 0;
    v16 = v14 | v13;
    if (v8 >= v9) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v32 = v8 >> 3;
  v33 = v8++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v10 + v32);
  a2[1] = v8;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v8 >= v9) {
  LABEL_5:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v8 >= v9) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v34 = v8 >> 3;
  v35 = v8++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v10 + v34);
  a2[1] = v8;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v8 >= v9) {
  LABEL_6:
    v19 = 0;
    v20 = v17 | v18;
    if (v8 >= v9) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v36 = v8 >> 3;
  v37 = v8++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v10 + v36);
  a2[1] = v8;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v17 | v18;
  if (v8 >= v9) {
  LABEL_7:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v8 >= v9) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v38 = v8 >> 3;
  v39 = v8++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v10 + v38);
  a2[1] = v8;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v8 >= v9) {
  LABEL_8:
    v23 = 0;
    v24 = v21 | v22;
    if (v8 >= v9) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v40 = v8 >> 3;
  v41 = v8++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v10 + v40);
  a2[1] = v8;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v21 | v22;
  if (v8 >= v9) {
  LABEL_9:
    v25 = 0;
    v26 = v23 | (4 * v24);
    if (v8 >= v9) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v42 = v8 >> 3;
  v43 = v8++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v10 + v42);
  a2[1] = v8;
  v25 = ((unsigned int)v42 >> v43) & 1;
  v26 = v23 | (4 * v24);
  if (v8 >= v9) {
  LABEL_10:
    v27 = 0;
    v28 = v25 | v26;
    if (v8 >= v9) {
      goto LABEL_11;
    }
  LABEL_22:
    v46 = v8 >> 3;
    v47 = v8++ & 7;
    LODWORD(v46) = *(unsigned __int8*)(v10 + v46);
    a2[1] = v8;
    v29 = ((unsigned int)v46 >> v47) & 1 | v27 | (4 * v28);
    if (v4 >= v29) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v44 = v8 >> 3;
  v45 = v8++ & 7;
  LODWORD(v44) = *(unsigned __int8*)(v10 + v44);
  a2[1] = v8;
  v27 = 2 * (((unsigned int)v44 >> v45) & 1);
  v28 = v25 | v26;
  if (v8 < v9) {
    goto LABEL_22;
  }
LABEL_11:
  v29 = v27 | (4 * v28);
  if (v4 < v29) {
    return false;
  }
LABEL_24:
  if (v8 >= v9) {
    v51 = 0;
  LABEL_26:
    v52 = 0;
    if (v8 >= v9) {
      goto LABEL_27;
    }
    goto LABEL_46;
  }
  v49 = v8 >> 3;
  v50 = v8++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v10 + v49);
  a2[1] = v8;
  v51 = 2 * (((unsigned int)v49 >> v50) & 1);
  if (v8 >= v9) {
    goto LABEL_26;
  }
  v82 = v8 >> 3;
  v83 = v8++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v10 + v82);
  a2[1] = v8;
  v52 = ((unsigned int)v82 >> v83) & 1;
  if (v8 >= v9) {
  LABEL_27:
    v53 = 0;
    if (v8 >= v9) {
      goto LABEL_28;
    }
    goto LABEL_47;
  }
LABEL_46:
  v84 = v8 >> 3;
  v85 = v8++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v10 + v84);
  a2[1] = v8;
  v53 = 2 * (((unsigned int)v84 >> v85) & 1);
  if (v8 >= v9) {
  LABEL_28:
    v54 = 0;
    if (v8 >= v9) {
      goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_47:
  v86 = v8 >> 3;
  v87 = v8++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v10 + v86);
  a2[1] = v8;
  v54 = ((unsigned int)v86 >> v87) & 1;
  if (v8 >= v9) {
  LABEL_29:
    v55 = 0;
    if (v8 >= v9) {
      goto LABEL_30;
    }
    goto LABEL_49;
  }
LABEL_48:
  v88 = v8 >> 3;
  v89 = v8++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v10 + v88);
  a2[1] = v8;
  v55 = 2 * (((unsigned int)v88 >> v89) & 1);
  if (v8 >= v9) {
  LABEL_30:
    v56 = 0;
    if (v8 >= v9) {
      goto LABEL_31;
    }
    goto LABEL_50;
  }
LABEL_49:
  v90 = v8 >> 3;
  v91 = v8++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v10 + v90);
  a2[1] = v8;
  v56 = ((unsigned int)v90 >> v91) & 1;
  if (v8 >= v9) {
  LABEL_31:
    v57 = 0;
    if (v8 >= v9) {
      goto LABEL_32;
    }
    goto LABEL_51;
  }
LABEL_50:
  v92 = v8 >> 3;
  v93 = v8++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v10 + v92);
  a2[1] = v8;
  v57 = 2 * (((unsigned int)v92 >> v93) & 1);
  if (v8 >= v9) {
  LABEL_32:
    v58 = 0;
    if (v8 >= v9) {
      goto LABEL_33;
    }
    goto LABEL_52;
  }
LABEL_51:
  v94 = v8 >> 3;
  v95 = v8++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v10 + v94);
  a2[1] = v8;
  v58 = ((unsigned int)v94 >> v95) & 1;
  if (v8 >= v9) {
  LABEL_33:
    v59 = 0;
    if (v8 >= v9) {
      goto LABEL_34;
    }
    goto LABEL_53;
  }
LABEL_52:
  v96 = v8 >> 3;
  v97 = v8++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v10 + v96);
  a2[1] = v8;
  v59 = 2 * (((unsigned int)v96 >> v97) & 1);
  if (v8 >= v9) {
  LABEL_34:
    v60 = 0;
    if (v8 >= v9) {
      goto LABEL_35;
    }
    goto LABEL_54;
  }
LABEL_53:
  v98 = v8 >> 3;
  v99 = v8++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v10 + v98);
  a2[1] = v8;
  v60 = ((unsigned int)v98 >> v99) & 1;
  if (v8 >= v9) {
  LABEL_35:
    v61 = 0;
    if (v8 >= v9) {
      goto LABEL_36;
    }
    goto LABEL_55;
  }
LABEL_54:
  v100 = v8 >> 3;
  v101 = v8++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v10 + v100);
  a2[1] = v8;
  v61 = 2 * (((unsigned int)v100 >> v101) & 1);
  if (v8 >= v9) {
  LABEL_36:
    v62 = 0;
    v63 = v52 | v51;
    if (v8 >= v9) {
      goto LABEL_37;
    }
    goto LABEL_56;
  }
LABEL_55:
  v102 = v8 >> 3;
  v103 = v8++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v10 + v102);
  a2[1] = v8;
  v62 = ((unsigned int)v102 >> v103) & 1;
  v63 = v52 | v51;
  if (v8 >= v9) {
  LABEL_37:
    v64 = 0;
    v65 = v53 | (4 * v63);
    v66 = v62 | v61;
    if (v8 >= v9) {
      goto LABEL_38;
    }
    goto LABEL_57;
  }
LABEL_56:
  v104 = v8 >> 3;
  v105 = v8++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v10 + v104);
  a2[1] = v8;
  v64 = 2 * (((unsigned int)v104 >> v105) & 1);
  v65 = v53 | (4 * v63);
  v66 = v62 | v61;
  if (v8 >= v9) {
  LABEL_38:
    v67 = 0;
    v68 = v64 | (4 * v66);
    v69 = v54 | v65;
    if (v8 >= v9) {
      goto LABEL_39;
    }
    goto LABEL_58;
  }
LABEL_57:
  v106 = v8 >> 3;
  v107 = v8++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v10 + v106);
  a2[1] = v8;
  v67 = ((unsigned int)v106 >> v107) & 1;
  v68 = v64 | (4 * v66);
  v69 = v54 | v65;
  if (v8 >= v9) {
  LABEL_39:
    v70 = 0;
    v71 = v55 | (4 * v69);
    v72 = v67 | v68;
    if (v8 >= v9) {
      goto LABEL_40;
    }
    goto LABEL_59;
  }
LABEL_58:
  v108 = v8 >> 3;
  v109 = v8++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v10 + v108);
  a2[1] = v8;
  v70 = 2 * (((unsigned int)v108 >> v109) & 1);
  v71 = v55 | (4 * v69);
  v72 = v67 | v68;
  if (v8 >= v9) {
  LABEL_40:
    v73 = 0;
    v74 = v70 | (4 * v72);
    v75 = v56 | v71;
    if (v8 >= v9) {
      goto LABEL_41;
    }
    goto LABEL_60;
  }
LABEL_59:
  v110 = v8 >> 3;
  v111 = v8++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v10 + v110);
  a2[1] = v8;
  v73 = ((unsigned int)v110 >> v111) & 1;
  v74 = v70 | (4 * v72);
  v75 = v56 | v71;
  if (v8 >= v9) {
  LABEL_41:
    v76 = 0;
    v77 = v57 | (4 * v75);
    v78 = v73 | v74;
    if (v8 >= v9) {
      goto LABEL_42;
    }
  LABEL_61:
    v114 = v8 >> 3;
    v115 = v8++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v10 + v114);
    a2[1] = v8;
    v79 = v58 | v77;
    v80 = ((unsigned int)v114 >> v115) & 1 | v76 | (4 * v78);
    if (v8 >= v9) {
      goto LABEL_43;
    }
  LABEL_62:
    v116 = *(unsigned __int8*)(v10 + (v8 >> 3));
    a2[1] = v8 + 1;
    v81 = (v116 >> (v8 & 7)) & 1;
    goto LABEL_63;
  }
LABEL_60:
  v112 = v8 >> 3;
  v113 = v8++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v10 + v112);
  a2[1] = v8;
  v76 = 2 * (((unsigned int)v112 >> v113) & 1);
  v77 = v57 | (4 * v75);
  v78 = v73 | v74;
  if (v8 < v9) {
    goto LABEL_61;
  }
LABEL_42:
  v79 = v58 | v77;
  v80 = v76 | (4 * v78);
  if (v8 < v9) {
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
  if (v119 < v4) {
    *(_QWORD*)(*a1 + 8 * v119) = *(_QWORD*)&v198[2];
    a1[1] = v119 + 1;
  }
  v120 = a3 + 8;
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
      v131 = &v120[16 * v129];
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
          v136 = &v120[16 * v129];
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
            v134 = *(a3 - 8);
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
    v139 = &v120[16 * v129];
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
      v148 = *((_QWORD*)v139 + 1);
      v149 = v146 & 0xFFFFF001 | (2 * (v143 & 0x7FF));
      v150 = 0;
      v151 = 0;
      v152 = (v143 & 0xFFFFF000) + 4096;
      v143 = v149 | v152;
      v153 = (unsigned __int16)v152 >> 12;
    LABEL_97:
      v154 = *(unsigned __int16*)(v148 + 4 * v151 + 2);
      if (v153 < v154 >> 12) {
        goto LABEL_96;
      }
      if (v153 > v154 >> 12) {
        goto LABEL_95;
      }
      v155 = v154 & 0xFFF;
      if (v149 < v155) {
        goto LABEL_96;
      }
      if (v149 > v155) {
      LABEL_95:
        v150 = v151;
        v151 = v147;
      LABEL_96:
        v147 = v151;
        v151 = (v151 + v150) >> 1;
        if (v150 == v151) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v156 = (char*)(v148 + 4 * v151);
    v157 = *v156;
    v158 = v156[1];
    if (v157 == 0) {
      if (v158 == 1) {
        if (v140 >= v141) {
          v161 = 0;
        LABEL_109:
          v162 = 0;
          if (v140 >= v141) {
            goto LABEL_110;
          }
        LABEL_127:
          v174 = v140 >> 3;
          v175 = v140++ & 7;
          LODWORD(v174) = *(unsigned __int8*)(v142 + v174);
          a2[1] = v140;
          v163 = 2 * (((unsigned int)v174 >> v175) & 1);
          if (v140 < v141) {
            goto LABEL_128;
          }
        LABEL_111:
          v164 = 0;
          if (v140 >= v141) {
            goto LABEL_112;
          }
        LABEL_129:
          v178 = v140 >> 3;
          v179 = v140++ & 7;
          LODWORD(v178) = *(unsigned __int8*)(v142 + v178);
          a2[1] = v140;
          v165 = 2 * (((unsigned int)v178 >> v179) & 1);
          if (v140 < v141) {
            goto LABEL_130;
          }
        LABEL_113:
          v166 = 0;
          if (v140 >= v141) {
            goto LABEL_114;
          }
        LABEL_131:
          v182 = v140 >> 3;
          v183 = v140++ & 7;
          LODWORD(v182) = *(unsigned __int8*)(v142 + v182);
          a2[1] = v140;
          v167 = 2 * (((unsigned int)v182 >> v183) & 1);
          if (v140 < v141) {
            goto LABEL_132;
          }
        LABEL_115:
          v147 = 0;
          if (v140 >= v141) {
            goto LABEL_116;
          }
        LABEL_133:
          v186 = v140 >> 3;
          v187 = v140++ & 7;
          LODWORD(v186) = *(unsigned __int8*)(v142 + v186);
          a2[1] = v140;
          v168 = 2 * (((unsigned int)v186 >> v187) & 1);
          if (v140 < v141) {
            goto LABEL_134;
          }
        LABEL_117:
          v169 = 0;
          if (v140 >= v141) {
            goto LABEL_118;
          }
        LABEL_135:
          v190 = v140 >> 3;
          v191 = v140++ & 7;
          LODWORD(v190) = *(unsigned __int8*)(v142 + v190);
          a2[1] = v140;
          v170 = 2 * (((unsigned int)v190 >> v191) & 1);
          if (v140 < v141) {
            goto LABEL_136;
          }
        LABEL_119:
          v171 = 0;
        }
        else {
          v159 = v140 >> 3;
          v160 = v140++ & 7;
          LODWORD(v159) = *(unsigned __int8*)(v142 + v159);
          a2[1] = v140;
          v161 = 2 * (((unsigned int)v159 >> v160) & 1);
          if (v140 >= v141) {
            goto LABEL_109;
          }
          v172 = v140 >> 3;
          v173 = v140++ & 7;
          LODWORD(v172) = *(unsigned __int8*)(v142 + v172);
          a2[1] = v140;
          v162 = ((unsigned int)v172 >> v173) & 1;
          if (v140 < v141) {
            goto LABEL_127;
          }
        LABEL_110:
          v163 = 0;
          if (v140 >= v141) {
            goto LABEL_111;
          }
        LABEL_128:
          v176 = v140 >> 3;
          v177 = v140++ & 7;
          LODWORD(v176) = *(unsigned __int8*)(v142 + v176);
          a2[1] = v140;
          v164 = ((unsigned int)v176 >> v177) & 1;
          if (v140 < v141) {
            goto LABEL_129;
          }
        LABEL_112:
          v165 = 0;
          if (v140 >= v141) {
            goto LABEL_113;
          }
        LABEL_130:
          v180 = v140 >> 3;
          v181 = v140++ & 7;
          LODWORD(v180) = *(unsigned __int8*)(v142 + v180);
          a2[1] = v140;
          v166 = ((unsigned int)v180 >> v181) & 1;
          if (v140 < v141) {
            goto LABEL_131;
          }
        LABEL_114:
          v167 = 0;
          if (v140 >= v141) {
            goto LABEL_115;
          }
        LABEL_132:
          v184 = v140 >> 3;
          v185 = v140++ & 7;
          LODWORD(v184) = *(unsigned __int8*)(v142 + v184);
          a2[1] = v140;
          v147 = ((unsigned int)v184 >> v185) & 1;
          if (v140 < v141) {
            goto LABEL_133;
          }
        LABEL_116:
          v168 = 0;
          if (v140 >= v141) {
            goto LABEL_117;
          }
        LABEL_134:
          v188 = v140 >> 3;
          v189 = v140++ & 7;
          LODWORD(v188) = *(unsigned __int8*)(v142 + v188);
          a2[1] = v140;
          v169 = ((unsigned int)v188 >> v189) & 1;
          if (v140 < v141) {
            goto LABEL_135;
          }
        LABEL_118:
          v170 = 0;
          if (v140 >= v141) {
            goto LABEL_119;
          }
        LABEL_136:
          v192 = *(unsigned __int8*)(v142 + (v140 >> 3));
          a2[1] = v140 + 1;
          v171 = (v192 >> (v140 & 7)) & 1;
        }
        v157 = (v166 | v165 | (4 * (v164 | v163 | (4 * (v162 | v161))))) - 32;
        v158 = (v171 | v170 | (4 * (v169 | v168 | (4 * (v147 | v167))))) - 32;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v157 = 0;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v122 & 0x8000) == 0) {
        v122 = v157;
        v157 = v158;
        if (((unsigned __int16)v122 | (unsigned __int16)v158) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
    LABEL_143:
      v122 = -v158;
      if (((unsigned __int16)-(__int16)v158 | (unsigned __int16)v157) == 0) {
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
        v122 = -v157;
        v157 = -v158;
        if (((unsigned __int16)v122 | (unsigned __int16)-(__int16)v158) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
      if ((v122 & 0x8000) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_143;
    }
    v157 = -v157;
    v122 = v158;
    if (((unsigned __int16)v158 | (unsigned __int16)v157) == 0) {
      return v29 == a1[1];
    }
  LABEL_144:
    if (a1[1] >= v4) {
      return false;
    }
    v117 += v157;
    v118 += v122;
    *(_QWORD*)&v198[2] = 0;
    v196[0] = v118;
    v196[1] = v117;
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, _WORD*, unsigned __int64))a4)((void*)&v198[2], v196, v147);
    v193 = a1[1];
    v194 = (_QWORD*)(*a1 + 8 * v193++);
    *v194 = *(_QWORD*)&v198[2];
    a1[1] = v193;
    if (v193 > v29) {
      return false;
    }
    v121 = v157;
  } while (((unsigned __int16)v122 | (unsigned __int16)v157) != 0);
  return v29 == a1[1];
}

#pragma GCC visibility pop
