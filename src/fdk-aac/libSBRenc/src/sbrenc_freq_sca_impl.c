#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_3e7d00(int, int);
__int64 nn_codec_fDivNorm_plt_866980(_QWORD);
__int64 nn_codec_fPow_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_c37124;
extern _UNKNOWN SdkData_c37164;
extern _UNKNOWN SdkData_c371a4;
extern _UNKNOWN SdkData_c371e4;
extern _UNKNOWN SdkData_c37224;
extern _UNKNOWN SdkData_c37264;
extern _UNKNOWN SdkData_c372a4;
__int64 nn_codec_FDKsbrEnc_getSbrStartFreqRAW(unsigned int a1, int a2);
__int64 nn_codec_FDKsbrEnc_FindStartAndStopBand(int a1, int a2, int a3, int a4,
                                                int a5, int* a6, int* a7);
__int64 sbrenc_freq_sca_3e8980(__int64 result, int a2, unsigned int a3, int a4);

__int64 nn_codec_FDKsbrEnc_getSbrStartFreqRAW(unsigned int a1, int a2)
{
  int v3;
  int v4;
  _DWORD* v5;

  if (a1 > 0xF) {
    return 0xFFFFFFFFLL;
  }
  if (a2 > 22049) {
    if (a2 <= 44099) {
      if (a2 == 22050) {
        v3 = 12;
        goto LABEL_36;
      }
      if (a2 == 32000) {
        v3 = 10;
        goto LABEL_36;
      }
    LABEL_28:
      v3 = 11;
      if (a2 > 23999) {
        goto LABEL_29;
      }
      goto LABEL_21;
    }
    if (a2 != 44100 && a2 != 48000) {
      if (a2 == 96000) {
        v3 = 3;
      LABEL_32:
        v5 = &SdkData_c37264;
        return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
      }
      goto LABEL_28;
    }
    v3 = 7;
  LABEL_20:
    if (a2 > 23999) {
    LABEL_29:
      if (a2 > 44099) {
        if (a2 == 44100 || a2 == 48000) {
          goto LABEL_32;
        }
      LABEL_40:
        v5 = &SdkData_c372a4;
        return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
      }
      if (a2 == 24000) {
      LABEL_36:
        v5 = &SdkData_c37224;
        return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
      }
      v4 = 32000;
    LABEL_35:
      if (a2 != v4) {
        goto LABEL_40;
      }
      goto LABEL_36;
    }
  LABEL_21:
    if (a2 <= 11999) {
      goto LABEL_40;
    }
    if (a2 == 12000) {
      v5 = &SdkData_c371a4;
      return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
    }
    if (a2 == 16000) {
      v5 = &SdkData_c371e4;
      return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
    }
    v4 = 22050;
    goto LABEL_35;
  }
  if (a2 > 11999) {
    v3 = 16;
    if (a2 != 12000 && a2 != 16000) {
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  if (a2 == 8000) {
    v3 = 24;
    v5 = &SdkData_c37124;
  }
  else {
    if (a2 != 11025) {
      goto LABEL_28;
    }
    v3 = 17;
    v5 = &SdkData_c37164;
  }
  return (unsigned int)(((v5[a1] + v3) * (a2 >> 5) + 1) >> 1);
}

__int64 nn_codec_FDKsbrEnc_FindStartAndStopBand(int a1, int a2, int a3, int a4,
                                                int a5, int* a6, int* a7)
{
  int v7;
  _DWORD* v8;
  int v9;
  int v11;
  int* v12;
  int v15;
  int v16;
  int v17;

  if (a2 <= 22049) {
    if (a2 <= 11999) {
      if (a2 == 8000) {
        v7 = 24;
        v8 = &SdkData_c37124;
        goto LABEL_33;
      }
      if (a2 == 11025) {
        v7 = 17;
        v8 = &SdkData_c37164;
        goto LABEL_33;
      }
      goto LABEL_26;
    }
    v7 = 16;
    if (a2 != 12000 && a2 != 16000) {
      goto LABEL_26;
    }
    goto LABEL_18;
  }
  if (a2 > 44099) {
    if (a2 != 44100 && a2 != 48000) {
      if (a2 == 96000) {
        v7 = 3;
      LABEL_30:
        v8 = &SdkData_c37264;
        goto LABEL_33;
      }
      goto LABEL_26;
    }
    v7 = 7;
  LABEL_18:
    if (a2 > 23999) {
      goto LABEL_27;
    }
  LABEL_19:
    if (a2 > 11999) {
      if (a2 == 12000) {
        v8 = &SdkData_c371a4;
        goto LABEL_33;
      }
      if (a2 == 16000) {
        v8 = &SdkData_c371e4;
        goto LABEL_33;
      }
    }
    goto LABEL_60;
  }
  if (a2 == 22050) {
    v7 = 12;
    goto LABEL_32;
  }
  if (a2 == 32000) {
    v7 = 10;
    goto LABEL_32;
  }
LABEL_26:
  v7 = 11;
  if (a2 <= 23999) {
    goto LABEL_19;
  }
LABEL_27:
  if (a2 > 44099) {
    if (a2 == 44100 || a2 == 48000) {
      goto LABEL_30;
    }
    goto LABEL_60;
  }
  if (a2 == 24000) {
  LABEL_32:
    v8 = &SdkData_c37224;
    goto LABEL_33;
  }
LABEL_60:
  v8 = &SdkData_c372a4;
LABEL_33:
  v9 = v8[a4] + v7;
  *a6 = v9;
  if (a3 * a1 < v9 * a2) {
    return 1;
  }
  if (a5 <= 13) {
    v11 = a2;
    v12 = a6;
    v15 = SdkRoutine_3e7d00(a2, a5);
    a2 = v11;
    a6 = v12;
    if (v15 >= a3) {
      v16 = a3;
    }
    else {
      v16 = v15;
    }
    *a7 = v16;
    if (v11 == 22050) {
      goto LABEL_53;
    }
  LABEL_46:
    v17 = v16 - *a6;
    if (a2 >= 24000 && v17 > 32) {
      return 1;
    }
    goto LABEL_55;
  }
  if (a5 == 14) {
    if (2 * v9 >= a3) {
      v16 = a3;
    }
    else {
      v16 = 2 * v9;
    }
    *a7 = v16;
    if (a2 != 22050) {
      goto LABEL_46;
    }
  }
  else {
    if (3 * v9 >= a3) {
      v16 = a3;
    }
    else {
      v16 = 3 * v9;
    }
    *a7 = v16;
    if (a2 != 22050) {
      goto LABEL_46;
    }
  }
LABEL_53:
  v17 = v16 - *a6;
  if (v17 > 35) {
    return 1;
  }
LABEL_55:
  if (v17 > 48) {
    return 1;
  }
  else {
    return (unsigned int)v17 >> 31;
  }
}

__int64 sbrenc_freq_sca_3e8980(__int64 result, int a2, unsigned int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;

  if (a4 >= 1) {
    v23 = v4;
    v24 = v5;
    v6 = a2 << 24;
    v8 = result;
    v9 = 0;
    v10 = (unsigned int)a4;
    v22 = 0;
    v20 = 0;
    v21 = 0;
    v11 = a2;
    do {
      v12 = v9 + 1;
      v13 = nn_codec_fDivNorm_plt_866980(a3);
      v14 = nn_codec_fDivNorm_plt_866980((unsigned int)(v9 + 1));
      result = nn_codec_fPow_plt(v13, v22, v14, v21, &v20);
      v15 = ((unsigned __int64)(v6 * (__int64)(int)result) >> 31) & 0xFFFFFFFE;
      v16 = v15 << (v20 - 23);
      v17 = v15 >> (23 - v20);
      if (v20 > 23) {
        v17 = v16;
      }
      v18 = (v17 + 1) >> 1;
      v19 = v18 - v11;
      v11 = v18;
      *(_DWORD*)(v8 + 4 * v9++) = v19;
    } while (v10 != v12);
  }
  return result;
}

#pragma GCC visibility pop
