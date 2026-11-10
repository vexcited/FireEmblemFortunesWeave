#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nerd_Butterworth_DoInit_plt(_QWORD, _QWORD, _QWORD, long double,
                                    long double);
__int64 nerd_VibrationDecoder_GenerateChunk_plt(_QWORD, _QWORD, _QWORD);
__int64 nerd_VibrationDecoder_Init_plt(_QWORD, _QWORD);
__int64 nerd_VibrationEncoder_ExtractBand_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 nerd_VibrationEncoder_Init_plt(_QWORD, long double, float, float,
                                       float);
__int64 nerd_VibrationEncoder_Init_6d14e0(void* this_, unsigned int a2,
                                          long double a3, long double a4,
                                          float a5, float a6, unsigned int a7);
__int64 nerd_VibrationEncoder_Init_6d16e0(void* this_, long double a2);
__int64 nerd_VibrationEncoder_ProcessChunk(__int64 a1, __int64 a2, float* a3);

__int64 nerd_VibrationEncoder_Init_6d14e0(void* this_, unsigned int a2,
                                          long double a3, long double a4,
                                          float a5, float a6, unsigned int a7)
{

#pragma clang fp contract(off)
  __int64 result;
  unsigned int v9;
  float v10;
  double v11;
  bool v12;
  float v13;
  void* v18;
  int v19;
  long double v20;
  long double v21;
  unsigned int v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  unsigned int v27;

  result = 3587;
  if (a2 - 4000 <= 0xABE0 && a7 - 4000 <= 0xABE0 &&
      (unsigned __int16)a7 % 0xC8u == 0) {
    v9 = (unsigned __int16)a2 / (unsigned int)(unsigned __int16)a7;
    if ((unsigned __int16)a2 % (unsigned __int16)a7 == 0 &&
        *(float*)&a3 >= 0x1.4000000000000p+3f && *(float*)&a3 < *(float*)&a4 &&
        a5 < a6 && *(float*)&a4 <= 0x1.3880000000000p+11f &&
        a5 >= 0x1.4000000000000p+3f && a6 <= 0x1.3880000000000p+11f) {
      v10 = (float)(a7 >> 1);
      if (*(float*)&a4 < v10 && a6 < v10) {
        v11 = (double)a7;
        v12 = a6 <= *(float*)&a4;
        *((_DWORD*)this_ + 410) = (unsigned __int16)a7 / 0xC8u;
        v13 = *(float*)&a4;
        *(double*)&a4 = *(float*)&a3;
        *((_DWORD*)this_ + 406) = a2;
        *((_DWORD*)this_ + 407) = a7;
        *((_DWORD*)this_ + 408) = v9;
        *((_QWORD*)this_ + 206) = 0;
        v18 = this_;
        v19 = !v12;
        *((_QWORD*)this_ + 96) = 0;
        if (v9 == 1) {
          v19 = -1;
        }
        *((_QWORD*)this_ + 97) = 0;
        *((_DWORD*)this_ + 196) = 0;
        *((_QWORD*)this_ + 195) = 0;
        *((_QWORD*)this_ + 196) = 0;
        *((_DWORD*)this_ + 394) = 0;
        *((_DWORD*)this_ + 409) = v19;
        *(double*)&a3 = (double)a7;
        result = nerd_Butterworth_DoInit_plt((char*)this_ + 384, 6, 1, a3, a4);
        if ((_DWORD)result == 0) {
          v22 = *((_DWORD*)v18 + 409) != 0 ? a7 : a2;
          *(double*)&v20 = (double)v22;
          *(double*)&v21 = v13;
          result = nerd_Butterworth_DoInit_plt(v18, 6, 0, v20, v21);
          if ((_DWORD)result == 0) {
            *(double*)&v24 = a5;
            *(double*)&v23 = v11;
            result =
                nerd_Butterworth_DoInit_plt((char*)v18 + 1176, 6, 1, v23, v24);
            if ((_DWORD)result == 0) {
              if (*((_DWORD*)v18 + 409) == 1) {
                v27 = a2;
              }
              else {
                v27 = a7;
              }
              *(double*)&v25 = (double)v27;
              *(double*)&v26 = a6;
              result =
                  nerd_Butterworth_DoInit_plt((char*)v18 + 792, 6, 0, v25, v26);
              if ((_DWORD)result == 0) {
                return nerd_VibrationDecoder_Init_plt((char*)v18 + 1584, a7);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nerd_VibrationEncoder_Init_6d16e0(void* this_, long double a2)
{

#pragma clang fp contract(off)
  *(_QWORD*)&a2 = 0x4300000043000000LL;
  return nerd_VibrationEncoder_Init_plt(this_, a2, 0x1.9000000000000p+7f,
                                        0x1.0000000000000p+8f,
                                        0x1.9000000000000p+8f);
}

__int64 nerd_VibrationEncoder_ProcessChunk(__int64 a1, __int64 a2, float* a3)
{
  int v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int16* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  __int16* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int16* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  int v36;
  __int16* v37;
  int v38;
  float v39;
  unsigned __int64 v40;
  float v41;
  float v42;

  v3 = *(_DWORD*)(a1 + 1632);
  v7 = a2;
  if (v3 != 1) {
    v7 = a1 + 2136;
    v8 = a1 + 792LL * *(int*)(a1 + 1636);
    v9 = (unsigned int)(*(_DWORD*)(a1 + 1640) * v3);
    v10 = *(char**)(v8 + 368);
    v11 = *(_QWORD*)(v8 + 376);
    v12 = (_QWORD*)(v8 + (v11 >> 1));
    if ((v11 & 1) != 0) {
      v10 = *(char**)&v10[*v12];
    }
    ((void (*)(_QWORD*, __int64, __int64, __int64, __int64))v10)(
        v12, a2, a1 + 2136, v9, 1);
  }
  nerd_VibrationEncoder_ExtractBand_plt(a1, v7, 0, a3, a3 + 1);
  nerd_VibrationEncoder_ExtractBand_plt(a1, v7, 1, a3 + 2, a3 + 3);
  *(_QWORD*)(a1 + 1648) += *(unsigned int*)(a1 + 1640);
  result = nerd_VibrationDecoder_GenerateChunk_plt(a1 + 1584, a3, a1 + 1656);
  v14 = *(_DWORD*)(a1 + 1640);
  v15 = *(unsigned int*)(a1 + 1632);
  v16 = v15 * v14;
  if ((_DWORD)v15 * v14 == 0) {
    v19 = 0;
    goto LABEL_15;
  }
  v17 = v16 & 7;
  if (v16 < 8) {
    v18 = 0;
    v19 = 0;
    if ((v16 & 7) == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v20 = (__int16*)(a2 + 8);
  v21 = 0;
  v19 = 0;
  v22 = -(__int64)(v16 & 0xFFFFFFF8);
  do {
    v21 -= 8;
    v23 = v20[3];
    v24 = v19 + (unsigned int)(*(v20 - 4) * *(v20 - 4)) +
          (unsigned int)(*(v20 - 3) * *(v20 - 3)) +
          (unsigned __int64)(unsigned int)(*(v20 - 2) * *(v20 - 2)) +
          (unsigned int)(*(v20 - 1) * *(v20 - 1)) +
          (unsigned __int64)(unsigned int)(*v20 * *v20) +
          (unsigned int)(v20[1] * v20[1]);
    v25 = v20[2];
    v20 += 8;
    v19 = v24 + (unsigned int)(v25 * v25) +
          (unsigned __int64)(unsigned int)(v23 * v23);
  } while (v22 != v21);
  v18 = -v21;
  if (v17 != 0) {
  LABEL_13:
    v26 = (__int16*)(a2 + 2 * v18);
    do {
      v27 = *v26++;
      --v17;
      v19 += (unsigned int)(v27 * v27);
    } while (v17 != 0);
  }
LABEL_15:
  if (v14 == 0) {
    v30 = 0;
    goto LABEL_25;
  }
  v28 = v14 & 7;
  if (v14 < 8) {
    v29 = 0;
    v30 = 0;
    if (v28 == 0) {
      goto LABEL_25;
    }
    goto LABEL_23;
  }
  v31 = (__int16*)(a1 + 1670);
  v32 = 0;
  v30 = 0;
  v33 = -(__int64)(v14 & 0xFFFFFFF8);
  do {
    v32 -= 8;
    v34 = *v31;
    v35 = v30 + (unsigned int)(*(v31 - 7) * *(v31 - 7)) +
          (unsigned int)(*(v31 - 6) * *(v31 - 6)) +
          (unsigned __int64)(unsigned int)(*(v31 - 5) * *(v31 - 5)) +
          (unsigned int)(*(v31 - 4) * *(v31 - 4)) +
          (unsigned __int64)(unsigned int)(*(v31 - 3) * *(v31 - 3)) +
          (unsigned int)(*(v31 - 2) * *(v31 - 2));
    v36 = *(v31 - 1);
    v31 += 8;
    v30 = v35 + (unsigned int)(v36 * v36) +
          (unsigned __int64)(unsigned int)(v34 * v34);
  } while (v33 != v32);
  v29 = -v32;
  if (v28 != 0) {
  LABEL_23:
    v37 = (__int16*)(a1 + 2 * v29 + 1656);
    do {
      v38 = *v37++;
      --v28;
      v30 += (unsigned int)(v38 * v38);
    } while (v28 != 0);
  }
LABEL_25:
  v39 = 0.0;
  if (v19 != 0) {
    v40 = v30 * v15;
    v41 = 0.0;
    if (v40 != 0) {
      v42 = sqrtf((float)v19 / (float)v40);
      v39 = fminf(v42 * *a3, 1.0);
      v41 = fminf(v42 * a3[2], 1.0);
    }
  }
  else {
    v41 = 0.0;
  }
  *a3 = v39;
  a3[2] = v41;
  return result;
}

#pragma GCC visibility pop
