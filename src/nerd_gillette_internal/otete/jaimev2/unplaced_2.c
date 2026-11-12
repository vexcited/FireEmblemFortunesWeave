#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HeartRateDriver_ExtractHeartRatePackets_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 HeartRateDriver_ProcessHeartRatePackets_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 PulseSignal_Clear_plt(_QWORD);
__int64 PulseSignal_DetectPeaksAndUpdatePulseMeasure_plt(_QWORD);
__int64 PulseSignal_GetFilteredAverageSignal_plt(_QWORD, float);
__int64 PulseSignal_PushNewValueAndUpdateScale_plt(_QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasFullFrameShapeROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK_plt(_QWORD,
                                                                      _QWORD,
                                                                      _QWORD,
                                                                      _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK_plt(_QWORD,
                                                                       _QWORD,
                                                                       _QWORD,
                                                                       _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
float PulseSignal_GetAverageSignalQuality_plt(_QWORD);
float PulseSignal_GetProgress_plt(_QWORD);
float PulseSignal_GetPulse_plt(_QWORD, _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_756c90(__int64 a1, __int64 a2,
                                                    __int64 a3, __int64 a4);
__int64 nerd_gillette_internal_otete_jaimev2_756d40(__int64 a1, __int64 a2,
                                                    _QWORD* a3, __int64 a4,
                                                    int a5);
__int64 nerd_gillette_internal_otete_jaimev2_756f40(__int64* a1, __int64* a2,
                                                    __int64 a3, __int64 a4);
__int64 nerd_gillette_internal_otete_jaimev2_757650(__int64 this_);

__int64 nerd_gillette_internal_otete_jaimev2_756c90(__int64 a1, __int64 a2,
                                                    __int64 a3, __int64 a4)
{
  char v8;
  char v9;
  _BYTE v11[8448];
  __int64 v12;

  if (a4 == 0) {
    return 0;
  }
  v12 = 0;
  memset_plt((__int64)v11, 0, 0x2100u);
  v8 = HeartRateDriver_ExtractHeartRatePackets_plt(a1, v11, &v12, a3, a4);
  v9 = 0;
  if ((v8 & 1) != 0) {
    v9 = HeartRateDriver_ProcessHeartRatePackets_plt(a1, a2, v11, v12);
  }
  return v9 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_756d40(__int64 a1, __int64 a2,
                                                    _QWORD* a3, __int64 a4,
                                                    int a5)
{
  char v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v21;
  _DWORD* v22;
  int v23;
  _DWORD v25[4];
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    int v29;
  } v28_;
  _BYTE v30[4];
  _BYTE v31[4];
  _BYTE v32[4];
  int v33;
  int v34;
  _QWORD v35[2];

  if (a5 >= 1) {
    v8 = 0;
    v9 = 0;
    v10 = (a5 & 0x7FFFFFFF) + 1LL;
    v11 = (__int64*)(a4 + 24LL * (a5 & 0x7FFFFFFF) - 8);
    while (1) {
      v12 = *(v11 - 2);
      v13 = *(_QWORD*)(a1 + 448);
      if (v13 != 0) {
        if (v12 <= v13) {
          goto LABEL_4;
        }
      }
      else {
        *(_QWORD*)(a1 + 448) = v12;
      }
      v14 = *(v11 - 1);
      v15 = *v11;
      v35[0] = 0;
      v34 = 0;
      if ((nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(
               &v34, v14, v15, v35) &
           1) == 0) {
        v8 = 0;
        return v8 & 1;
      }
      if (v34 == 1) {
        v16 = *(v11 - 1);
        v33 = 0;
        nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(&v33, v16,
                                                                    v15, v35);
        v17 = *(v11 - 1);
        v32[0] = 0;
        nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK_plt(v32, v17,
                                                                      v15, v35);
        if ((v32[0] & 1) == 0) {
          v18 = *(v11 - 1);
          v31[0] = 0;
          nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK_plt(
              v31, v18, v15, v35);
          if ((v31[0] & 1) == 0) {
            v19 = *(v11 - 1);
            v30[0] = 0;
            nerd_gillette_internal_otete_jaimev2_DecodeHasFullFrameShapeROK_plt(
                v30, v19, v15, v35);
            if (v30[0] == 1) {
              v28_.v29 = 0;
              v27 = 0;
              v28_.v28 = 0;
              memset_plt_alt1((__int64*)v30[0], (void*)v25, nullptr, 528);
              nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK_plt(
                  &v28_.v28, 0, &v27, 0, v25, *(v11 - 1), v15, v35, &v33);
              v21 = v25[0];
              v22 = (_DWORD*)(a2 + 528 * v9);
              *v22 = v25[1];
              v22[1] = v21;
              v23 = v25[3];
              v22[2] = v25[2];
              v22[3] = v23;
              memcpy_plt(v22 + 4, &v26, 512);
              *(_QWORD*)(a1 + 448) = v12;
              ++v9;
            }
          }
        }
      }
      v8 = 1;
    LABEL_4:
      --v10;
      v11 -= 3;
      if (v10 <= 1) {
        goto LABEL_16;
      }
    }
  }
  v9 = 0;
  v8 = 0;
LABEL_16:
  *a3 = v9;
  return v8 & 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_756f40(__int64* a1, __int64* a2,
                                                    __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  int* v17;
  unsigned int* v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int* v25;
  unsigned __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  unsigned int v29;
  __int64* v30;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  _BYTE* v42;
  __int64 v43;
  int v44;
  float v45;
  int v46;
  int v47;
  float v48;
  int v49;
  int v50;
  float v51;
  int v52;
  int v53;
  float v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  float* v63;
  int* v64;
  int v65;
  int v66;
  unsigned __int64 v67;
  float* v68;
  unsigned int v69;
  float v70;
  _BYTE* v71;
  __int64 v72;
  int v73;
  float v74;
  int v75;
  int v76;
  float v77;
  int v78;
  int v79;
  float v80;
  int v81;
  int v82;
  float v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  float* v92;
  int* v93;
  int v94;
  int v95;
  unsigned __int64 v96;
  float* v97;
  unsigned int v98;
  float v99;
  int v100;
  int v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64* v110;
  int v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned int v116;
  __int64 v117;
  _DWORD v118[8];
  _BYTE v119[488];

  if (PulseSignal_GetProgress_plt(a1 + 26) == 0x1.0000000000000p+0f) {
    *a2 = a1[50];
    v9 = a1[51];
    v10 = a1[52];
    v11 = a1[54];
    a2[3] = a1[53];
    a2[4] = v11;
    a2[1] = v9;
    a2[2] = v10;
    return 1;
  }
  if (a4 == 0) {
    *((_DWORD*)a2 + 7) = 0;
    a2[4] = 0;
    *a2 = 0;
    a2[1] = 0;
    *((_DWORD*)a2 + 4) = 0;
    *(__int64*)((char*)a2 + 20) = 0x3F8000003F800000LL;
    if (*((_DWORD*)a1 + 98) != 0) {
      v109 = 5;
    }
    else {
      v109 = 1;
    }
    *(_DWORD*)a2 = v109;
    *((_DWORD*)a1 + 98) = 0;
    a1[55] = 0;
    PulseSignal_Clear_plt(a1 + 26);
    return 1;
  }
  v13 = a1[55];
  v14 = 0;
  v116 = 0;
  v15 = 0;
  v16 = 2;
  v117 = a4;
  v114 = a3 + 40;
  v115 = a3 + 24;
  v110 = a2;
  v113 = a3 + 16;
  while (2) {
    v17 = (int*)(v114 + 528 * v14);
    v18 = (unsigned int*)(v115 + 528 * v14);
    v19 = v113 + 528 * v14;
    while (1) {
      v20 = a3;
      v21 = (unsigned int*)(a3 + 528 * v14);
      if (v13 == 0) {
        break;
      }
      v22 = *v21;
      if (v13 >= v22) {
        LODWORD(v23) = v21[3];
        v29 = v22 - v13;
        if ((_DWORD)v22 - (_DWORD)v13 < 0) {
          goto LABEL_7;
        }
      }
      else {
        v23 = v21[3];
        v24 = 0;
        v25 = v18;
        v26 = *v21;
        while (v23 != v24) {
          v27 = *v25;
          v25 += 2;
          ++v24;
          v26 -= v27;
          if (v26 <= v13) {
            v28 = v24 - 1;
            goto LABEL_17;
          }
        }
        v28 = v21[3];
        LODWORD(v24) = v21[3];
      LABEL_17:
        if (v28 >= v23) {
          v29 = -1;
        }
        else {
          v29 = v24;
        }
        if ((v29 & 0x80000000) != 0) {
          goto LABEL_7;
        }
      }
      v30 = (__int64*)v21[2];
      if ((_DWORD)v30 == *((_DWORD*)a1 + 98) && v29 <= (unsigned int)v23) {
        if (v29 != 0) {
          v111 = v16;
          memset_plt_alt1(v30, (void*)v118, nullptr, 512);
          v32 = 100 * v21[1];
          if (v29 >= 8) {
            v71 = v119;
            v72 = 0;
            v33 = 0;
            do {
              v72 -= 8;
              v73 = *(v17 - 6) + v33;
              v74 = (float)*(v17 - 5);
              *((_DWORD*)v71 - 8) = v32 * (v22 - v73);
              v75 = *(v17 - 4);
              *((float*)v71 - 7) = v74;
              v76 = v75 + v73;
              v77 = (float)*(v17 - 3);
              *((_DWORD*)v71 - 6) = v32 * (v22 - v76);
              v78 = *(v17 - 2);
              *((float*)v71 - 5) = v77;
              v79 = v78 + v76;
              v80 = (float)*(v17 - 1);
              *((_DWORD*)v71 - 4) = v32 * (v22 - v79);
              v81 = *v17;
              *((float*)v71 - 3) = v80;
              v82 = v81 + v79;
              v83 = (float)v17[1];
              *((_DWORD*)v71 - 2) = v32 * (v22 - v82);
              v84 = v17[2];
              *((float*)v71 - 1) = v83;
              v85 = v17[3];
              v86 = v84 + v82;
              *(_DWORD*)v71 = v32 * (v22 - v86);
              v87 = v17[4] + v86;
              *((float*)v71 + 1) = (float)v85;
              v88 = v17[5];
              *((_DWORD*)v71 + 2) = v32 * (v22 - v87);
              v89 = v17[6] + v87;
              *((float*)v71 + 3) = (float)v88;
              v90 = v17[7];
              *((_DWORD*)v71 + 4) = v32 * (v22 - v89);
              v33 = v17[8] + v89;
              *((float*)v71 + 5) = (float)v90;
              v91 = v17[9];
              v17 += 16;
              *((_DWORD*)v71 + 6) = v32 * (v22 - v33);
              *((float*)v71 + 7) = (float)v91;
              v71 += 64;
            } while (-(__int64)(v29 & 0x7FFFFFF8) != v72);
            v34 = -v72;
            v35 = v29 & 7;
            if (v35 != 0) {
              goto LABEL_46;
            }
          }
          else {
            v33 = 0;
            v34 = 0;
            v35 = v29 & 7;
            if (v35 == 0) {
              goto LABEL_48;
            }
          LABEL_46:
            v92 = (float*)&v118[2 * v34 + 1];
            v93 = (int*)(v19 + 8 * v34);
            do {
              v94 = v93[1];
              v95 = *v93;
              v93 += 2;
              --v35;
              v33 += v95;
              *((_DWORD*)v92 - 1) = v32 * (v22 - v33);
              *v92 = (float)v94;
              v92 += 2;
            } while (v35 != 0);
          }
        LABEL_48:
          v96 = v29 + 1LL;
          v97 = (float*)&v118[2 * v29 - 1];
          do {
            v98 = *((_DWORD*)v97 - 1);
            v99 = *v97;
            v97 -= 2;
            PulseSignal_GetFilteredAverageSignal_plt(a1 + 26, v99);
            PulseSignal_PushNewValueAndUpdateScale_plt(a1 + 26, v98);
            --v96;
          } while (v96 > 1);
          v16 = v111;
          v15 = 1;
          v116 += v29;
        }
        a4 = v117;
        goto LABEL_52;
      }
    LABEL_7:
      PulseSignal_Clear_plt(a1 + 26);
      a4 = v117;
      ++v14;
      v18 += 132;
      v17 += 132;
      v19 += 528;
      *((_DWORD*)a1 + 98) = v21[2];
      v15 = 1;
      v16 = 5;
      v13 = *v21;
      a3 = v20;
      a1[55] = v13;
      if (v14 == a4) {
        goto LABEL_54;
      }
    }
    v36 = v21[3];
    if ((_DWORD)v36 == 0) {
      goto LABEL_52;
    }
    v112 = v16;
    memset_plt_alt1(nullptr, (void*)v118, nullptr, 512);
    v37 = *v21;
    v38 = 100 * v21[1];
    if ((unsigned int)v36 >= 8) {
      v42 = v119;
      v43 = 0;
      v39 = 0;
      do {
        v43 -= 8;
        v44 = *(v17 - 6) + v39;
        v45 = (float)*(v17 - 5);
        *((_DWORD*)v42 - 8) = v38 * (v37 - v44);
        v46 = *(v17 - 4);
        *((float*)v42 - 7) = v45;
        v47 = v46 + v44;
        v48 = (float)*(v17 - 3);
        *((_DWORD*)v42 - 6) = v38 * (v37 - v47);
        v49 = *(v17 - 2);
        *((float*)v42 - 5) = v48;
        v50 = v49 + v47;
        v51 = (float)*(v17 - 1);
        *((_DWORD*)v42 - 4) = v38 * (v37 - v50);
        v52 = *v17;
        *((float*)v42 - 3) = v51;
        v53 = v52 + v50;
        v54 = (float)v17[1];
        *((_DWORD*)v42 - 2) = v38 * (v37 - v53);
        v55 = v17[2];
        *((float*)v42 - 1) = v54;
        v56 = v17[3];
        v57 = v55 + v53;
        *(_DWORD*)v42 = v38 * (v37 - v57);
        v58 = v17[4] + v57;
        *((float*)v42 + 1) = (float)v56;
        v59 = v17[5];
        *((_DWORD*)v42 + 2) = v38 * (v37 - v58);
        v60 = v17[6] + v58;
        *((float*)v42 + 3) = (float)v59;
        v61 = v17[7];
        *((_DWORD*)v42 + 4) = v38 * (v37 - v60);
        v39 = v17[8] + v60;
        *((float*)v42 + 5) = (float)v61;
        v62 = v17[9];
        v17 += 16;
        *((_DWORD*)v42 + 6) = v38 * (v37 - v39);
        *((float*)v42 + 7) = (float)v62;
        v42 += 64;
      } while (-(__int64)((unsigned int)v36 & 0xFFFFFFF8) != v43);
      v40 = -v43;
      v41 = v36 & 7;
      if ((v36 & 7) == 0) {
        goto LABEL_38;
      }
      goto LABEL_36;
    }
    v39 = 0;
    v40 = 0;
    v41 = v36 & 7;
    if ((v36 & 7) != 0) {
    LABEL_36:
      v63 = (float*)&v118[2 * v40 + 1];
      v64 = (int*)(v19 + 8 * v40);
      do {
        v65 = v64[1];
        v66 = *v64;
        v64 += 2;
        --v41;
        v39 += v66;
        *((_DWORD*)v63 - 1) = v38 * (v37 - v39);
        *v63 = (float)v65;
        v63 += 2;
      } while (v41 != 0);
    }
  LABEL_38:
    if ((int)v36 >= 1) {
      v67 = v36 + 1;
      v68 = (float*)&v118[2 * v36 - 1];
      do {
        v69 = *((_DWORD*)v68 - 1);
        v70 = *v68;
        v68 -= 2;
        PulseSignal_GetFilteredAverageSignal_plt(a1 + 26, v70);
        PulseSignal_PushNewValueAndUpdateScale_plt(a1 + 26, v69);
        --v67;
      } while (v67 > 1);
      a4 = v117;
      v15 = 1;
      v116 += v36;
    }
    v16 = v112;
  LABEL_52:
    ++v14;
    *((_DWORD*)a1 + 98) = v21[2];
    v13 = *v21;
    a3 = v20;
    a1[55] = v13;
    if (v14 != a4) {
      continue;
    }
    break;
  }
  if ((v15 & 1) == 0) {
    return 0;
  }
LABEL_54:
  v100 = v16;
  PulseSignal_DetectPeaksAndUpdatePulseMeasure_plt(a1 + 26);
  if (*((_BYTE*)a1 + 360) != 0) {
    v101 = 3;
  }
  else {
    v101 = v100;
  }
  *(_DWORD*)v110 = v101;
  *((_DWORD*)v110 + 1) = *((_DWORD*)a1 + 98);
  *((float*)v110 + 2) = PulseSignal_GetProgress_plt(a1 + 26);
  v118[0] = 0;
  v102 = PulseSignal_GetPulse_plt(a1 + 26, v118, 0);
  *((_DWORD*)v110 + 3) = v118[0];
  *((float*)v110 + 4) = v102;
  *((_DWORD*)v110 + 5) = *((_DWORD*)a1 + 92);
  *((float*)v110 + 6) = PulseSignal_GetAverageSignalQuality_plt(a1 + 26);
  v103 = *a1;
  v104 = a1[1];
  *((_DWORD*)v110 + 7) = v116;
  v110[4] = v103 + 4 * (v104 - v116);
  if (PulseSignal_GetProgress_plt(a1 + 26) == 0x1.0000000000000p+0f) {
    v105 = v110[2];
    v106 = v110[3];
    *(_DWORD*)v110 = 4;
    v107 = *v110;
    v108 = v110[1];
    a1[54] = 0;
    a1[52] = v105;
    a1[53] = v106;
    *((_DWORD*)a1 + 107) = 0;
    a1[50] = v107;
    a1[51] = v108;
  }
  return 1;
}

__int64 nerd_gillette_internal_otete_jaimev2_757650(__int64 this_)
{
  *(_DWORD*)(this_ + 28) = 0;
  *(_QWORD*)(this_ + 32) = 0;
  *(_QWORD*)this_ = 0;
  *(_QWORD*)(this_ + 8) = 0;
  *(_DWORD*)(this_ + 16) = 0;
  *(_QWORD*)(this_ + 20) = 0x3F8000003F800000LL;
  return this_;
}

#pragma GCC visibility pop
