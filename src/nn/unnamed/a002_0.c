#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern char SdkData_bba743[3];
extern char SdkData_bbf545[9];
extern char SdkData_bc86e9[17];
extern _DWORD SdkData_d00eb0[16];
extern _WORD SdkData_d00ef0[64];
extern _WORD SdkData_d00f70[256];
extern __int64 (*SdkData_e7c7c0[])();
struct PseudoSret SdkRoutine_702080(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_715fa0(_QWORD, _QWORD);
__int64 SdkRoutine_73e140(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_7bc8c0(__int64 result, unsigned __int8*, char, __int64,
                          char);
__int64 SdkRoutine_7bd280(__int64 result, unsigned int*, char, __int64, char);
__int64 SdkRoutine_810f00(int, int, int, int, int, void*);
__int64 SdkRoutine_812100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_830290(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_84b2e0(_QWORD);
__int64 SdkRoutine_84e2a0(_QWORD);
__int64 SdkRoutine_86ee60(_QWORD);
__int64 SdkRoutine_879ee0(_QWORD, _QWORD);
float SdkRoutine_87a080(_QWORD, float, float, float);
__int64 SdkRoutine_87a580(_QWORD);
__int64 SdkRoutine_87a5c0(void);
__int64 SdkRoutine_87a5d0(void);
__int64 SdkRoutine_87a5e0(_QWORD, _QWORD);
__int64 SdkRoutine_87a6e0(void);
__int64 SdkRoutine_87a740(_QWORD);
__int64 SdkRoutine_87a750(_QWORD, _QWORD);
__int64 SdkRoutine_87a780(_QWORD);
__int64 SdkRoutine_87a960(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a970(_QWORD, _QWORD);
__int64 SdkRoutine_87c7a0(_QWORD);
__int64 SdkRoutine_87c7b0(_QWORD);
struct PseudoSret SdkRoutine_87cd90(_QWORD);
__int64 SdkRoutine_87d080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d4d0(void);
__int64 SdkRoutine_87d4e0(void);

__int64 SdkHr_701aa0(__int64 a1, __int64 a2)
{
  _BOOL4 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  _QWORD v20[364];
  _QWORD v21[364];
  _QWORD v22[18];
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[28];

  v3 = *(float*)a1 == *(float*)a2 && *(float*)(a1 + 4) == *(float*)(a2 + 4) &&
       *(float*)(a1 + 8) == *(float*)(a2 + 8) &&
       *(float*)(a1 + 12) == *(float*)(a2 + 12) &&
       *(float*)(a1 + 16) == *(float*)(a2 + 16) &&
       *(float*)(a1 + 20) == *(float*)(a2 + 20) &&
       *(float*)(a1 + 24) == *(float*)(a2 + 24) &&
       *(float*)(a1 + 28) == *(float*)(a2 + 28) &&
       *(float*)(a1 + 32) == *(float*)(a2 + 32) &&
       *(float*)(a1 + 36) == *(float*)(a2 + 36) &&
       *(float*)(a1 + 40) == *(float*)(a2 + 40) &&
       *(float*)(a1 + 44) == *(float*)(a2 + 44) &&
       *(float*)(a1 + 48) == *(float*)(a2 + 48) &&
       *(float*)(a1 + 52) == *(float*)(a2 + 52) &&
       *(float*)(a1 + 56) == *(float*)(a2 + 56) &&
       *(float*)(a1 + 60) == *(float*)(a2 + 60) &&
       *(float*)(a1 + 64) == *(float*)(a2 + 64) &&
       *(float*)(a1 + 68) == *(float*)(a2 + 68) &&
       *(float*)(a1 + 72) == *(float*)(a2 + 72) &&
       *(float*)(a1 + 76) == *(float*)(a2 + 76) &&
       *(float*)(a1 + 80) == *(float*)(a2 + 80) &&
       *(float*)(a1 + 84) == *(float*)(a2 + 84) &&
       *(float*)(a1 + 88) == *(float*)(a2 + 88) &&
       *(float*)(a1 + 92) == *(float*)(a2 + 92) &&
       *(float*)(a1 + 96) == *(float*)(a2 + 96) &&
       *(float*)(a1 + 100) == *(float*)(a2 + 100) &&
       *(float*)(a1 + 104) == *(float*)(a2 + 104) &&
       *(float*)(a1 + 108) == *(float*)(a2 + 108) &&
       *(float*)(a1 + 112) == *(float*)(a2 + 112) &&
       *(float*)(a1 + 116) == *(float*)(a2 + 116) &&
       *(float*)(a1 + 120) == *(float*)(a2 + 120);
  v4 = *(_QWORD*)(a1 + 128);
  v5 = *(_QWORD*)(a1 + 136);
  v6 = *(_QWORD*)(a2 + 168);
  v7 = v5 + 2;
  v23 = *(_QWORD*)(a2 + 160);
  v26 = v6;
  v32[0] = v4;
  v32[1] = v4 + 1;
  v8 = v5 + 1;
  v24 = v23 + 1;
  v25 = v23 + 2;
  v27 = v6 + 1;
  v28 = v6 + 2;
  v29 = v6 + 3;
  v30 = v6 + 4;
  v31 = v6 + 5;
  v32[2] = v4 + 2;
  v32[3] = v5;
  v9 = *(_QWORD*)(a1 + 144);
  v10 = *(_QWORD*)(a1 + 152);
  v32[4] = v8;
  v32[5] = v7;
  v11 = v9 + 2;
  v32[6] = v9;
  v32[7] = v9 + 1;
  v12 = *(_QWORD*)(a1 + 160);
  v13 = *(_QWORD*)(a1 + 168);
  v32[8] = v11;
  v32[9] = v10;
  v32[12] = v10 + 3;
  v32[13] = v10 + 4;
  v32[14] = v10 + 5;
  v32[15] = v10 + 6;
  v14 = *(_QWORD*)(a2 + 144);
  v15 = *(_QWORD*)(a2 + 152);
  v32[16] = v10 + 7;
  v32[17] = v10 + 8;
  v32[10] = v10 + 1;
  v32[11] = v10 + 2;
  v16 = v12 + 2;
  v22[6] = v14;
  v22[9] = v15;
  v32[18] = v12;
  v32[19] = v12 + 1;
  v17 = *(_QWORD*)(a2 + 128);
  v18 = *(_QWORD*)(a2 + 136);
  v32[20] = v16;
  v32[21] = v13;
  v32[22] = v13 + 1;
  v32[23] = v13 + 2;
  v32[24] = v13 + 3;
  v32[25] = v13 + 4;
  v32[26] = v13 + 5;
  v22[7] = v14 + 1;
  v22[8] = v14 + 2;
  v22[17] = v15 + 8;
  v22[11] = v15 + 2;
  v22[12] = v15 + 3;
  v22[10] = v15 + 1;
  v22[13] = v15 + 4;
  v22[14] = v15 + 5;
  v22[15] = v15 + 6;
  v22[16] = v15 + 7;
  v22[0] = v17;
  v22[3] = v18;
  v22[1] = v17 + 1;
  v22[2] = v17 + 2;
  v22[4] = v18 + 1;
  v22[5] = v18 + 2;
  *(struct PseudoSret*)(v21) = SdkRoutine_702080(a1 + 176, v32, v32);
  *(struct PseudoSret*)(v20) = SdkRoutine_702080(a2 + 176, v22, v22);
  return v3 & (unsigned int)SdkRoutine_879ee0(v21, v20);
}

float SdkHr_70a5e0(__int64 a1, float* a2)
{
  float v2;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  _DWORD v27[9];
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v2 = a2[24];
  v4 = a2[23] - *(float*)(a1 + 8416);
  v5 = *(float*)(a1 + 8420);
  v6 = *(_QWORD*)(a1 + 8440);
  v7 = *(float*)(a1 + 8424);
  v28 = *(_QWORD*)(a1 + 8432);
  v29 = v6;
  v30 = *(_QWORD*)(a1 + 8448);
  v8 = v2 - v5;
  v9 = a2[25] - v7;
  v28 = *(_QWORD*)SdkRoutine_715fa0(a1 + 4584, &v28);
  v29 = *(_QWORD*)SdkRoutine_715fa0(a1 + 4584, &v29);
  v10 = (__int64*)SdkRoutine_715fa0(a1 + 4584, &v30);
  v11 = *v10;
  v12 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + v29));
  v13 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + *v10));
  v14 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + *v10));
  v15 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + v28));
  v27[0] = *(_DWORD*)(a1 + 216 + 136 * v28);
  v27[1] = v12;
  v16 = *(_DWORD*)(a1 + 216 + 136 * v11);
  v17 = *(_DWORD*)(a1 + 216 + 136 * v29);
  v18 = *(_DWORD*)(a1 + 216 + 4 * (v28 + 33 * v11));
  v19 = *(_DWORD*)(a1 + 216 + 4 * (v29 + 33 * v11));
  v27[2] = v13;
  v27[3] = v15;
  v27[8] = v16;
  v27[4] = v17;
  v27[5] = v14;
  v27[6] = v18;
  v27[7] = v19;
  v20 = SdkRoutine_87a080(v27, v4, v8, v9);
  v21 = *(float*)(a1 + 8420);
  *(float*)(a1 + 15408) = *(float*)(a1 + 8416) + v20;
  v23 = v22 + v21;
  v24 = *(float*)(a1 + 8424);
  *(float*)(a1 + 15412) = v23;
  *(float*)(a1 + 15416) = v25 + v24;
  return v25 + v24;
}

__int64 SdkHr_73dfc0(__int64 a1, int* a2, int a3, __int64 a4, int a5, int a6,
                     __int64 a7)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;

  v25 = a4;
  v23 = a6;
  v24 = a5;
  v11 = SdkRoutine_87a5c0();
  v22 = SdkRoutine_87a5d0();
  v12 = SdkRoutine_87a5e0(v11, &v22);
  if (v12 == 0) {
    return 104653;
  }
  v13 = v12;
  SdkRoutine_87a6e0();
  *a2 = 0;
  SdkRoutine_87a960(v13, a1, a7);
  if ((SdkRoutine_87a740(v13) & 1) == 0) {
    return 82125;
  }
  v14 = SdkRoutine_87a780(a7);
  if (v14 == 0) {
    v15 = SdkRoutine_87a970(v13, a7);
    v14 = 82125;
    if (v15 != 0) {
      if (a3 >= 5) {
        v16 = 5;
      }
      else {
        v16 = (unsigned int)a3;
      }
      v20[0] = SdkData_e7c7c0;
      v20[1] = &v25;
      v21 = v20;
      v20[2] = &v24;
      v20[3] = &v23;
      v17 = SdkRoutine_73e140(v15, a1, v16, v20);
      *a2 = v17;
      if (v21 == v20) {
        v18 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_13;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v21 + v18))((__int64)v21);
      v17 = *a2;
    LABEL_13:
      if (v17 != 0) {
        return 0;
      }
      else {
        return (unsigned int)SdkRoutine_87a750(82125, a7);
      }
    }
  }
  return v14;
}

__int64 SdkHr_740860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  float v13;
  float v14;
  float v15;
  int v16;
  int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int v23;
  float v24;
  float v25;
  int v26;
  float v27;
  float v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;

  result = SdkRoutine_87a580(a3);
  v6 = a1 + 8LL * (int)result;
  v7 = a2 + 60;
  v8 = -12;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_DWORD*)(a2 + 16) = 3;
  v9 = a1 + 208;
  do {
    v10 = 0;
    v11 = 0;
    v12 = 0.0f;
    v13 = 0.0f;
    if ((*(_BYTE*)(v9 + (int)result) & 1) != 0) {
      v12 = vcvts_n_f32_s32(
          (__int16)(*(_WORD*)(v6 + 222) +
                    (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
              3,
          1u);
      v13 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v11 = 1132396544;
    }
    *(_DWORD*)(v7 - 36) = v11;
    *(float*)(v7 - 32) = v12;
    *(float*)(v7 - 28) = v13;
    v14 = 0.0f;
    v15 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v14 = vcvts_n_f32_s32(
          3 * ((__int16)(*(_WORD*)(v6 + 222) +
                         (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
               3),
          1u);
      v15 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v10 = 1132396544;
    }
    *(_DWORD*)(v7 - 24) = v10;
    *(float*)(v7 - 20) = v14;
    *(float*)(v7 - 16) = v15;
    v16 = 0;
    v17 = 0;
    v18 = 0.0f;
    v19 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v18 = vcvts_n_f32_s32(
          (__int16)(5 * ((unsigned int)(__int16)(*(_WORD*)(v6 + 222) +
                                                 (((unsigned int)*(
                                                       __int16*)(v6 + 222) >>
                                                   28) &
                                                  7)) >>
                         3)),
          1u);
      v19 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v17 = 1132396544;
    }
    *(_DWORD*)(v7 - 12) = v17;
    *(float*)(v7 - 8) = v18;
    *(float*)(v7 - 4) = v19;
    v20 = 0.0f;
    v21 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v20 = vcvts_n_f32_s32(
          (__int16)(7 * ((unsigned int)(__int16)(*(_WORD*)(v6 + 222) +
                                                 (((unsigned int)*(
                                                       __int16*)(v6 + 222) >>
                                                   28) &
                                                  7)) >>
                         3)),
          1u);
      v21 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v16 = 1132396544;
    }
    *(_DWORD*)v7 = v16;
    *(float*)(v7 + 4) = v20;
    *(float*)(v7 + 8) = v21;
    v22 = 0;
    v23 = 0;
    v24 = 0.0f;
    v25 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v26 = (__int16)(*(_WORD*)(v6 + 222) +
                      (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7));
      v24 = vcvts_n_f32_s32((v26 & 0xFFFFFFF8) + (v26 >> 3), 1u);
      v25 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v23 = 1132396544;
    }
    *(_DWORD*)(v7 + 12) = v23;
    *(float*)(v7 + 16) = v24;
    *(float*)(v7 + 20) = v25;
    v27 = 0.0f;
    v28 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v27 = vcvts_n_f32_s32(
          11 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v28 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v22 = 1132396544;
    }
    *(_DWORD*)(v7 + 24) = v22;
    *(float*)(v7 + 28) = v27;
    *(float*)(v7 + 32) = v28;
    v29 = 0;
    v30 = 0;
    v31 = 0.0f;
    v32 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v31 = vcvts_n_f32_s32(
          13 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v32 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v30 = 1132396544;
    }
    *(_DWORD*)(v7 + 36) = v30;
    *(float*)(v7 + 40) = v31;
    *(float*)(v7 + 44) = v32;
    v33 = 0.0f;
    v34 = 0.0f;
    if (*(_BYTE*)(v9 + (int)result) == 1) {
      v33 = vcvts_n_f32_s32(
          15 * ((__int16)(*(_WORD*)(v6 + 222) +
                          (((unsigned int)*(__int16*)(v6 + 222) >> 28) & 7)) >>
                3),
          1u);
      v34 = vcvts_n_f32_s32((v8 + 13) * (*(__int16*)(v6 + 224) / 6), 1u);
      v29 = 1132396544;
    }
    *(_DWORD*)(v7 + 48) = v29;
    *(float*)(v7 + 52) = v33;
    v8 += 2;
    *(float*)(v7 + 56) = v34;
    v7 += 96;
  } while (v8 != 0);
  return result;
}

__int64 SdkHr_7be250(__int64 result, unsigned __int8* a2, char a3)
{
  if ((unsigned __int8*)result != a2) {
    return SdkRoutine_7bc8c0(
        result, a2, a3, (2 * __clz((unsigned __int64)&a2[-result])) ^ 0x7E, 1);
  }
  return result;
}

__int64 SdkHr_7bf610(__int64 result, unsigned int* a2, char a3)
{
  if ((unsigned int*)result != a2) {
    return SdkRoutine_7bd280(
        result, a2, a3, (2 * __clz(((__int64)a2 - result) >> 2)) ^ 0x7E, 1);
  }
  return result;
}

__int64 SdkHr_802900(__int64 a1, int a2, __int64 a3, unsigned int a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  char* v9;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 i;
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
  char* v31;
  __int64 v33;
  __int64 v34;
  int v35;
  _BYTE v36[45];
  char v37;
  unsigned __int8 v38;
  _BYTE v39[6];
  _QWORD v40[2];

  v40[0] = v5;
  v40[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v37;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 < 0) {
    if (v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v15 = -a5;
      v9 = (char*)&v38;
      v37 = 45;
    }
  }
  else {
    if ((v7 & 0x800) == 0 || v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v9 = (char*)&v38;
      v37 = 43;
    LABEL_15:
      v15 = a5;
    }
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      *v9++ = 48;
    }
    else if (v12 == 8) {
      *v9 = 48;
      if ((v7 & 0x4000) != 0) {
        v16 = 88;
      }
      else {
        v16 = 120;
      }
      v9[1] = v16;
      v9 += 2;
    }
  }
  v17 = SdkRoutine_830290(v9, v40, v15, v14);
  v18 = v17;
  if ((~v7 & 0x4008) == 0) {
    v19 = (unsigned __int64)&v9[-v17];
    if (v9 != (char*)v17) {
      for (i = ((_BYTE)v17 - (_BYTE)v9) & 7; i != 0; *v9++ = v21) {
        v21 = (unsigned __int8)*v9;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --i;
      }
      if (v19 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v22 = (unsigned __int8)*v9;
          if ((unsigned int)(v22 - 97) < 6) {
            LOBYTE(v22) = v22 - 32;
          }
          *v9 = v22;
          v23 = (unsigned __int8)v9[1];
          if ((unsigned int)(v23 - 97) < 6) {
            LOBYTE(v23) = v23 - 32;
          }
          v9[1] = v23;
          v24 = (unsigned __int8)v9[2];
          if ((unsigned int)(v24 - 97) < 6) {
            LOBYTE(v24) = v24 - 32;
          }
          v9[2] = v24;
          v25 = (unsigned __int8)v9[3];
          if ((unsigned int)(v25 - 97) < 6) {
            LOBYTE(v25) = v25 - 32;
          }
          v9[3] = v25;
          v26 = (unsigned __int8)v9[4];
          if ((unsigned int)(v26 - 97) < 6) {
            LOBYTE(v26) = v26 - 32;
          }
          v9[4] = v26;
          v27 = (unsigned __int8)v9[5];
          if ((unsigned int)(v27 - 97) < 6) {
            LOBYTE(v27) = v27 - 32;
          }
          v9[5] = v27;
          v28 = (unsigned __int8)v9[6];
          if ((unsigned int)(v28 - 97) < 6) {
            LOBYTE(v28) = v28 - 32;
          }
          v9[6] = v28;
          v29 = (unsigned __int8)v9[7];
          if ((unsigned int)(v29 - 97) < 6) {
            LOBYTE(v29) = v29 - 32;
          }
          v9[7] = v29;
          v9 += 8;
        } while (v9 != (char*)v17);
      }
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (char*)v17;
    goto LABEL_60;
  }
  if (v30 != 16) {
  LABEL_59:
    v31 = &v37;
    goto LABEL_60;
  }
  if (v37 != 45 && v37 != 43) {
    if (v17 - (__int64)&v37 >= 2 && v37 == 48 && (v38 | 0x20) == 0x78) {
      v31 = v39;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v31 = (char*)&v38;
LABEL_60:
  *(struct PseudoSret*)(&v33) = SdkRoutine_87cd90(a3);
  SdkRoutine_87d080(&v37, v31, v18, v36, &v35, &v34, &v33);
  SdkRoutine_86ee60(&v33);
  return SdkRoutine_810f00(a2, (int)v36, v35, v34, a3, (void*)a4);
}

__int64 SdkHr_804ad0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  char* v9;
  int v12;
  unsigned int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  char* v20;
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
  char* v31;
  __int64 v33;
  __int64 v34;
  _BYTE v35[180];
  char v36;
  unsigned __int8 v37;
  _BYTE v38[22];
  _QWORD v39[2];
  __int64 v40;

  v39[0] = v5;
  v39[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v36;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      v9 = (char*)&v37;
      v36 = 48;
    }
    else if (v12 == 8) {
      v9 = v38;
      v36 = 48;
      if ((v7 & 0x4000) != 0) {
        v15 = 88;
      }
      else {
        v15 = 120;
      }
      v37 = v15;
    }
  }
  v16 = SdkRoutine_830290(v9, v39, a5, v14);
  v17 = v16;
  if ((~v7 & 0x4008) == 0 && v9 != (char*)v16) {
    v19 = ((_BYTE)v16 - (_BYTE)v9) & 7;
    v20 = v9;
    if ((((_BYTE)v16 - (_BYTE)v9) & 7) != 0) {
      v20 = v9;
      do {
        v21 = (unsigned __int8)*v20;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --v19;
        *v20++ = v21;
      } while (v19 != 0);
    }
    if ((unsigned __int64)&v9[-v16] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v22 = (unsigned __int8)*v20;
        if ((unsigned int)(v22 - 97) < 6) {
          LOBYTE(v22) = v22 - 32;
        }
        *v20 = v22;
        v23 = (unsigned __int8)v20[1];
        if ((unsigned int)(v23 - 97) < 6) {
          LOBYTE(v23) = v23 - 32;
        }
        v20[1] = v23;
        v24 = (unsigned __int8)v20[2];
        if ((unsigned int)(v24 - 97) < 6) {
          LOBYTE(v24) = v24 - 32;
        }
        v20[2] = v24;
        v25 = (unsigned __int8)v20[3];
        if ((unsigned int)(v25 - 97) < 6) {
          LOBYTE(v25) = v25 - 32;
        }
        v20[3] = v25;
        v26 = (unsigned __int8)v20[4];
        if ((unsigned int)(v26 - 97) < 6) {
          LOBYTE(v26) = v26 - 32;
        }
        v20[4] = v26;
        v27 = (unsigned __int8)v20[5];
        if ((unsigned int)(v27 - 97) < 6) {
          LOBYTE(v27) = v27 - 32;
        }
        v20[5] = v27;
        v28 = (unsigned __int8)v20[6];
        if ((unsigned int)(v28 - 97) < 6) {
          LOBYTE(v28) = v28 - 32;
        }
        v20[6] = v28;
        v29 = (unsigned __int8)v20[7];
        if ((unsigned int)(v29 - 97) < 6) {
          LOBYTE(v29) = v29 - 32;
        }
        v20[7] = v29;
        v20 += 8;
      } while (v20 != (char*)v16);
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (char*)v16;
    goto LABEL_54;
  }
  if (v30 != 16) {
  LABEL_53:
    v31 = &v36;
    goto LABEL_54;
  }
  if (v36 != 45 && v36 != 43) {
    if (v16 - (__int64)&v36 >= 2 && v36 == 48 && (v37 | 0x20) == 0x78) {
      v31 = v38;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v31 = (char*)&v37;
LABEL_54:
  *(struct PseudoSret*)(&v33) = SdkRoutine_87cd90(a3);
  SdkRoutine_87d0a0(&v36, v31, v17, v35, &v40, &v34, &v33);
  SdkRoutine_86ee60(&v33);
  return SdkRoutine_812100(a2, v35, v40, v34, a3, a4);
}

__int64 SdkHr_830500(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  _BYTE* v9;

  v3 = 64 - __clz(a3 | 1);
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x11) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 4;
      *(_DWORD*)(v6 - 4) = SdkData_d00eb0[a3 & 0xF];
      v6 -= 4;
      v8 = a3 > 0x10F;
      a3 >>= 4;
    } while (v8);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bba743[v7 & 1];
    v8 = v7 > 1;
    v7 >>= 1;
  } while (v8);
  return v5;
}

__int64 SdkHr_8305c0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (86 * (66 - (unsigned int)__clz(a3 | 1))) >> 8;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x41) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 6;
      v8 = SdkData_d00ef0[a3 & 0x3F];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x40);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bbf545[v7 & 7];
    v10 = v7 > 7;
    v7 >>= 3;
  } while (v10);
  return v5;
}

__int64 SdkHr_8306a0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (67 - __clz(a3 | 1)) >> 2;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x101) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 8;
      v8 = SdkData_d00f70[(unsigned __int8)a3];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x100);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bc86e9[v7 & 0xF];
    v10 = v7 > 0xF;
    v7 >>= 4;
  } while (v10);
  return v5;
}

void __attribute__((noreturn)) SdkHr_84f1a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (a1 == 0) {
    v1 = SdkRoutine_87c7a0(0);
    a1 = SdkRoutine_87c7b0(v1);
  }
  v2 = a1;
  SdkRoutine_87c7a0(a1);
  if ((SdkRoutine_84e2a0(v2) & 1) != 0) {
    v3 = *(_QWORD*)(v2 - 64);
  }
  else {
    SdkRoutine_87d4e0();
    v3 = SdkRoutine_87d4d0();
  }
  SdkRoutine_84b2e0(v3);
}

#pragma GCC visibility pop
