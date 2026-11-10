#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_1051400;

extern _UNKNOWN SdkData_1051408;

extern __int64 SdkData_10567d0;

extern _UNKNOWN SdkData_10567d8;

extern _UNKNOWN SdkData_1056800;

extern __int16 SdkData_ca7dde[30];

extern unsigned __int8 SdkData_ca7e1a[256];

extern unsigned __int8 SdkData_ca7f1a[3074];

extern __int64 (*SdkData_e7c7c0[])();

extern __int64 (*SdkData_e7cd38[])();

extern __int64 (*SdkData_e7cea8)();

extern __int64 (*SdkData_e7cfd0[])();

extern __int64 (*SdkData_e7d010)();

extern __int64 (*SdkData_e7d1e0[])();

extern __int64 (*SdkData_e7d258)();

extern __int64 (*SdkData_e7d448[])();

extern __int64 (*SdkData_e7d5c0)();

extern __int64 SdkData_e89398;

extern __int64 SdkData_e893a0;

extern __int64 SdkData_e893a8;

extern __int64 SdkData_e893b0;

__int64 SdkRoutine_2d0();

__int64 SdkRoutine_728fe0(void);

__int64 SdkRoutine_73b3a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);

__int64 SdkRoutine_73b5a0(_QWORD, _QWORD);

__int64 SdkRoutine_73cec0(void);

__int64 SdkRoutine_76d3c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_76d580(_QWORD);

__int64 SdkRoutine_7bc8c0(void);

__int64 SdkRoutine_7bd280(void);

__int64 SdkRoutine_7bd8c0(void);

__int64 SdkRoutine_7be2c0(void);

__int64 SdkRoutine_7be960(void);

__int64 SdkRoutine_7bf000(void);

__int64 SdkRoutine_7bf680(void);

__int64 SdkRoutine_7c15c0(void);

void __attribute__((noreturn)) SdkRoutine_7cd620();

__int64 SdkRoutine_7d63a0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8571c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_857e60(_QWORD);

void SdkRoutine_8584f0(void*, void*);

__int64 SdkRoutine_858d00(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858d40(_QWORD);

__int64 SdkRoutine_858d50(_QWORD);

__int64 SdkRoutine_859a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859a90(_QWORD, _QWORD);

__int64 SdkRoutine_859ab0(_QWORD);

__int64 SdkRoutine_859ac0(_QWORD);

__int64 SdkRoutine_859ad0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859ae0(_QWORD);

__int64 SdkRoutine_859af0(_QWORD, _QWORD);

__int64 SdkRoutine_85e050(unsigned __int64);

__int64 SdkRoutine_87a5c0(_QWORD);

__int64 SdkRoutine_87a5d0(void);

__int64 SdkRoutine_87a5e0(_QWORD, _QWORD);

__int64 SdkRoutine_87a6e0(void);

__int64 SdkRoutine_87a740(_QWORD);

__int64 SdkRoutine_87a750(_QWORD, _QWORD);

__int64 SdkRoutine_87a780(_QWORD);

__int64 SdkRoutine_87a7e0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87a7f0(_QWORD, _QWORD);

__int64 SdkRoutine_87a800(_QWORD, _QWORD);

__int64 SdkRoutine_87ac70(_QWORD);

__int64 SdkRoutine_87ae20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);

__int64 SdkRoutine_87bbe0(void);

__int64 SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c7a0(void);

__int64 SdkRoutine_87c7b0(_QWORD);

__int64 SdkRoutine_87c8d0(_QWORD);

__int64 SdkRoutine_87c8e0(void);

__int64 SdkRoutine_87c8f0(_QWORD);

__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87c920(_QWORD);

__int64 SdkRoutine_87cac0(_QWORD, _QWORD);

__int64 SdkRoutine_afbd0(void);

_QWORD* SdkHr_72bfd0(__int64 a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  int v4;

  v2 = (_QWORD*)(a1 + 8344);
  if ((*(_BYTE*)(a1 + 8384) & 1) == 0) {
    v3 = *a2;
    v4 = *((_DWORD*)a2 + 2);
    *(_QWORD*)(a1 + 8360) = 0;
    *(_QWORD*)(a1 + 8368) = 0;
    *(_QWORD*)(a1 + 8376) = 0;
    *v2 = v3;
    *(_DWORD*)(a1 + 8352) = v4;
    *(_BYTE*)(a1 + 8384) = 1;
    SdkRoutine_728fe0();
  }
  return v2;
}

float SdkHr_7349c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  float result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(v2 + 192) != 0) {
    v3 = 0;
    do {
      v4 = *(_QWORD*)(v2 + 8 * v3);
      result = *(float*)(a2 + 8 + 4 * v3++);
      *(float*)(*(_QWORD*)a1 +
                4LL * **(_QWORD**)(a1 + 24) * *(_QWORD*)(a1 + 16) +
                4 * v4 * *(_QWORD*)(a1 + 8)) = result;
      v2 = *(_QWORD*)(a1 + 32);
      v6 = *(_QWORD*)(v2 + 192);
    } while (v3 < v6);
    if (v6 != 0) {
      v7 = 0;
      do {
        v8 = *(_QWORD*)(v2 + 8 * v7);
        result = *(float*)(a2 + 104 + 4 * v7++);
        *(float*)(*(_QWORD*)a1 +
                  4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) *
                      *(_QWORD*)(a1 + 16) +
                  4 * v8 * *(_QWORD*)(a1 + 8)) = result;
        v2 = *(_QWORD*)(a1 + 32);
        v9 = *(_QWORD*)(v2 + 192);
      } while (v7 < v9);
      if (v9 != 0) {
        v10 = 0;
        do {
          v11 = *(_QWORD*)(v2 + 8 * v10);
          result = *(float*)(a2 + 200 + 4 * v10++);
          *(float*)(*(_QWORD*)a1 +
                    4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) *
                        *(_QWORD*)(a1 + 16) +
                    4 * v11 * *(_QWORD*)(a1 + 8)) = result;
          v2 = *(_QWORD*)(a1 + 32);
          v12 = *(_QWORD*)(v2 + 192);
        } while (v10 < v12);
        if (v12 != 0) {
          v13 = 0;
          do {
            v14 = *(_QWORD*)(v2 + 8 * v13);
            result = *(float*)(a2 + 296 + 4 * v13++);
            *(float*)(*(_QWORD*)a1 +
                      4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL) *
                          *(_QWORD*)(a1 + 16) +
                      4 * v14 * *(_QWORD*)(a1 + 8)) = result;
            v2 = *(_QWORD*)(a1 + 32);
            v15 = *(_QWORD*)(v2 + 192);
          } while (v13 < v15);
          if (v15 != 0) {
            v16 = 0;
            do {
              v17 = *(_QWORD*)(v2 + 8 * v16);
              result = *(float*)(a2 + 392 + 4 * v16++);
              *(float*)(*(_QWORD*)a1 +
                        4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL) *
                            *(_QWORD*)(a1 + 16) +
                        4 * v17 * *(_QWORD*)(a1 + 8)) = result;
              v2 = *(_QWORD*)(a1 + 32);
              v18 = *(_QWORD*)(v2 + 192);
            } while (v16 < v18);
            if (v18 != 0) {
              v19 = 0;
              do {
                v20 = *(_QWORD*)(v2 + 8 * v19);
                result = *(float*)(a2 + 488 + 4 * v19++);
                *(float*)(*(_QWORD*)a1 +
                          4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 40LL) *
                              *(_QWORD*)(a1 + 16) +
                          4 * v20 * *(_QWORD*)(a1 + 8)) = result;
                v2 = *(_QWORD*)(a1 + 32);
                v21 = *(_QWORD*)(v2 + 192);
              } while (v19 < v21);
              if (v21 != 0) {
                v22 = 0;
                do {
                  v23 = *(_QWORD*)(v2 + 8 * v22);
                  result = *(float*)(a2 + 584 + 4 * v22++);
                  *(float*)(*(_QWORD*)a1 +
                            4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48LL) *
                                *(_QWORD*)(a1 + 16) +
                            4 * v23 * *(_QWORD*)(a1 + 8)) = result;
                  v2 = *(_QWORD*)(a1 + 32);
                  v24 = *(_QWORD*)(v2 + 192);
                } while (v22 < v24);
                if (v24 != 0) {
                  v25 = 0;
                  do {
                    v26 = *(_QWORD*)(v2 + 8 * v25);
                    result = *(float*)(a2 + 680 + 4 * v25++);
                    *(float*)(*(_QWORD*)a1 +
                              4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 56LL) *
                                  *(_QWORD*)(a1 + 16) +
                              4 * v26 * *(_QWORD*)(a1 + 8)) = result;
                    v2 = *(_QWORD*)(a1 + 32);
                    v27 = *(_QWORD*)(v2 + 192);
                  } while (v25 < v27);
                  if (v27 != 0) {
                    v28 = 0;
                    do {
                      v29 = *(_QWORD*)(v2 + 8 * v28);
                      result = *(float*)(a2 + 776 + 4 * v28++);
                      *(float*)(*(_QWORD*)a1 +
                                4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) *
                                    *(_QWORD*)(a1 + 16) +
                                4 * v29 * *(_QWORD*)(a1 + 8)) = result;
                      v2 = *(_QWORD*)(a1 + 32);
                    } while (v28 < *(_QWORD*)(v2 + 192));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

float SdkHr_734c60(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  float result;

  v2 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v2 + 192) != 0) {
    v3 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(v2 + 8 * v3) * *(_QWORD*)(a1 + 16) +
                 4LL * **(_QWORD**)(a1 + 32) * *(_QWORD*)(a1 + 8)) =
          *(_DWORD*)(*a2 + 4 * v3 + 8);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 104);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 16LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 200);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 296);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 392);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 40LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 488);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 48LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 584);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 56LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 680);
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3);
      v5 = *a2 + 4 * v3++;
      result = *(float*)(v5 + 776);
      *(float*)(*(_QWORD*)a1 + 4 * v4 * *(_QWORD*)(a1 + 16) +
                4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 64LL) *
                    *(_QWORD*)(a1 + 8)) = result;
      v2 = *(_QWORD*)(a1 + 24);
    } while (v3 < *(_QWORD*)(v2 + 192));
  }
  return result;
}

__int64 SdkHr_73b2d0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{
  __int64 v6;
  unsigned int v13;
  __int64 v14;
  __int64 v16;
  __int64* v17;
  __int64 v18;

  v6 = *(_QWORD*)(a1 + 32);
  v18 = 0;
  v16 = v6;
  v17 = &v18;
  SdkRoutine_73b5a0(&v16, 0);
  if (v17 == nullptr) {
    v13 = 5642;
    v14 = v18;
    if (v18 == 0) {
      return v13;
    }
    goto LABEL_3;
  }
  v16 = *a2;
  v13 = SdkRoutine_73b3a0(a1 + 8, &v16, a3, a4, a5, a6, 0, &v18);
  v14 = v18;
  if (v18 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  return v13;
}

__int64 SdkHr_73cb20(float* a1, int* a2, __int64 a3, __int64 a4)
{
  float* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v40;

  v6 = a1;
  v7 = SdkRoutine_87a5c0(a1);
  v40 = SdkRoutine_87a5d0();
  v8 = SdkRoutine_87a5e0(v7, &v40);
  if (v8 == 0) {
    return 104653;
  }
  v9 = v8;
  v10 = 82125;
  SdkRoutine_87a6e0();
  *a2 = 0;
  SdkRoutine_87a7e0(v9, v6, a4);
  if ((SdkRoutine_87a740(v9) & 1) != 0) {
    v11 = SdkRoutine_87a780(a4);
    if (v11 != 0) {
      return v11;
    }
    if (SdkRoutine_87a7f0(v9, a4) == 0) {
      return v10;
    }
    v12 = SdkRoutine_73cec0();
    *a2 = v12;
    if (v12 == 0 && (v11 = SdkRoutine_87a750(82125, a4)) != 0) {
      return v11;
    }
    else {
      v13 = SdkRoutine_87a800(v9, a4);
      if (*a2 >= 1) {
        v14 = 0;
        v15 =
            76800.0 / (float)(int)(((int)((unsigned __int64)v13 >> 16) >> 16) *
                                   (v13 >> 48));
        do {
          v16 = v6[9];
          ++v14;
          v6[6] = v15 * v6[6];
          v17 = v15 * v16;
          v18 = v6[21];
          v6[9] = v17;
          v6[12] = v15 * v6[12];
          v6[15] = v15 * v6[15];
          v6[18] = v15 * v6[18];
          v19 = v15 * v18;
          v20 = v6[33];
          v6[21] = v19;
          v6[24] = v15 * v6[24];
          v6[27] = v15 * v6[27];
          v6[30] = v15 * v6[30];
          v21 = v15 * v20;
          v22 = v6[45];
          v6[33] = v21;
          v6[36] = v15 * v6[36];
          v6[39] = v15 * v6[39];
          v6[42] = v15 * v6[42];
          v23 = v15 * v22;
          v24 = v6[57];
          v6[45] = v23;
          v6[48] = v15 * v6[48];
          v6[51] = v15 * v6[51];
          v6[54] = v15 * v6[54];
          v25 = v15 * v24;
          v26 = v6[69];
          v6[57] = v25;
          v6[60] = v15 * v6[60];
          v6[63] = v15 * v6[63];
          v6[66] = v15 * v6[66];
          v27 = v15 * v26;
          v28 = v6[81];
          v6[69] = v27;
          v6[72] = v15 * v6[72];
          v6[75] = v15 * v6[75];
          v6[78] = v15 * v6[78];
          v29 = v15 * v28;
          v30 = v6[93];
          v6[81] = v29;
          v6[84] = v15 * v6[84];
          v6[87] = v15 * v6[87];
          v6[90] = v15 * v6[90];
          v31 = v15 * v30;
          v32 = v6[105];
          v6[93] = v31;
          v6[96] = v15 * v6[96];
          v6[99] = v15 * v6[99];
          v6[102] = v15 * v6[102];
          v33 = v15 * v32;
          v34 = v6[117];
          v6[105] = v33;
          v6[108] = v15 * v6[108];
          v6[111] = v15 * v6[111];
          v6[114] = v15 * v6[114];
          v35 = v15 * v34;
          v36 = v6[129];
          v6[117] = v35;
          v6[120] = v15 * v6[120];
          v6[123] = v15 * v6[123];
          v6[126] = v15 * v6[126];
          v37 = v15 * v36;
          v38 = v6[141];
          v6[129] = v37;
          v6[132] = v15 * v6[132];
          v6[135] = v15 * v6[135];
          v6[138] = v15 * v6[138];
          v6[141] = v15 * v38;
          v6[144] = v15 * v6[144];
          v6[147] = v15 * v6[147];
          v6 += 150;
        } while (v14 < *a2);
      }
      return 0;
    }
  }
  return v10;
}

_QWORD* SdkHr_73e510(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (_QWORD*)SdkRoutine_85e050(0x20u);
  v3 = a1[1];
  v4 = a1[2];
  *result = SdkData_e7c7c0;
  result[1] = v3;
  v5 = a1[3];
  result[2] = v4;
  result[3] = v5;
  return result;
}

bool SdkHr_7441e0(__int64** a1, unsigned int* a2, unsigned __int64 a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char v12;
  unsigned __int64 v13;
  char v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  char v19;
  unsigned __int64 v20;
  char v21;
  unsigned __int64 v22;
  char v23;

  v3 = *a1;
  v5 = (*a1)[1];
  v4 = (*a1)[2];
  v6 = v4 - v5;
  if (v4 - v5 >= a3) {
    if (a3 == 0) {
      v9 = 0;
    LABEL_22:
      *a2 = v9;
      return v6 >= a3;
    }
    v7 = *v3;
    v8 = a3 & 3;
    if (a3 < 4) {
      v9 = 0;
    LABEL_17:
      if ((a3 & 3) != 0) {
        do {
          while (v5 < v4) {
            v22 = v5 >> 3;
            v23 = v5++ & 7;
            LODWORD(v22) = *(unsigned __int8*)(v7 + v22);
            v3[1] = v5;
            v9 = ((unsigned int)v22 >> v23) & 1 | (2 * v9);
            if (--v8 == 0) {
              goto LABEL_22;
            }
          }
          v9 *= 2;
          --v8;
        } while (v8 != 0);
      }
      goto LABEL_22;
    }
    v10 = a3 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = 0;
    while (1) {
      if (v5 >= v4) {
        v15 = 0;
      LABEL_10:
        v16 = 0;
        if (v5 >= v4) {
          goto LABEL_11;
        }
      LABEL_15:
        v20 = v5 >> 3;
        v21 = v5++ & 7;
        LODWORD(v20) = *(unsigned __int8*)(v7 + v20);
        v3[1] = v5;
        v17 = 2 * (((unsigned int)v20 >> v21) & 1);
        if (v5 < v4) {
          goto LABEL_7;
        }
      LABEL_16:
        v10 -= 4LL;
        v9 = v17 | (4 * (v16 | v15 | (4 * v9)));
        if (v10 == 0) {
          goto LABEL_17;
        }
      }
      else {
        v13 = v5 >> 3;
        v14 = v5++ & 7;
        LODWORD(v13) = *(unsigned __int8*)(v7 + v13);
        v3[1] = v5;
        v15 = 2 * (((unsigned int)v13 >> v14) & 1);
        if (v5 >= v4) {
          goto LABEL_10;
        }
        v18 = v5 >> 3;
        v19 = v5++ & 7;
        LODWORD(v18) = *(unsigned __int8*)(v7 + v18);
        v3[1] = v5;
        v16 = ((unsigned int)v18 >> v19) & 1;
        if (v5 < v4) {
          goto LABEL_15;
        }
      LABEL_11:
        v17 = 0;
        if (v5 >= v4) {
          goto LABEL_16;
        }
      LABEL_7:
        v11 = v5 >> 3;
        v12 = v5++ & 7;
        LODWORD(v11) = *(unsigned __int8*)(v7 + v11);
        v3[1] = v5;
        v10 -= 4LL;
        v9 =
            ((unsigned int)v11 >> v12) & 1 | v17 | (4 * (v16 | v15 | (4 * v9)));
        if (v10 == 0) {
          goto LABEL_17;
        }
      }
    }
  }
  return v6 >= a3;
}

int** SdkHr_751ac0(int** result, unsigned __int8* a2, unsigned __int8 a3,
                   char a4)
{
  int v4;
  int v5;
  __int16 v6;
  unsigned __int8 v7;
  int* v8;
  __int64* v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a4 != 0) {
    v4 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] + 256 + *a2 -
                        (unsigned int)a3];
    v5 =
        SdkData_ca7dde[5 * SdkData_ca7e1a[a3] +
                       SdkData_ca7f1a[512 *
                                          (unsigned __int64)SdkData_ca7e1a[a3] +
                                      256 + *a2 - (unsigned int)a3]] +
        a3;
    if ((unsigned int)v5 >= 0xFF) {
      LOBYTE(v6) = -1;
    }
    else {
      v6 = SdkData_ca7dde
               [5 * SdkData_ca7e1a[a3] +
                SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] +
                               256 + *a2 - (unsigned int)a3]] +
           a3;
    }
    if (v5 >= 0) {
      v7 = v6;
    }
    else {
      v7 = 0;
    }
    *a2 = v7;
    **result += *result[1] * v4;
    *result[1] *= 5;
    v8 = result[1];
    if (*v8 == 125) {
      v9 = (__int64*)result[2];
      v10 = v9[1];
      if (v10 >> 1 <= 0xDAC) {
        v11 = **result;
        *(_BYTE*)(*v9 + (v10 >> 3)) |= ((v11 & 0x40) != 0) << (v10 & 7);
        v12 = *v9;
        v9[1] = v10 + 1;
        *(_BYTE*)(v12 + ((v10 + 1) >> 3)) |= ((v11 & 0x20) != 0)
                                             << ((v10 + 1) & 7);
        v13 = *v9;
        v9[1] = v10 + 2;
        *(_BYTE*)(v13 + ((v10 + 2) >> 3)) |= ((v11 & 0x10) != 0)
                                             << ((v10 + 2) & 7);
        v14 = *v9;
        v9[1] = v10 + 3;
        *(_BYTE*)(v14 + ((v10 + 3) >> 3)) |= ((v11 & 8) != 0)
                                             << ((v10 + 3) & 7);
        v15 = *v9;
        v9[1] = v10 + 4;
        *(_BYTE*)(v15 + ((v10 + 4) >> 3)) |= ((v11 & 4) != 0)
                                             << ((v10 + 4) & 7);
        v16 = *v9;
        v9[1] = v10 + 5;
        *(_BYTE*)(v16 + ((v10 + 5) >> 3)) |= ((v11 & 2) != 0)
                                             << ((v10 + 5) & 7);
        v17 = *v9;
        v9[1] = v10 + 6;
        *(_BYTE*)(v17 + ((v10 + 6) >> 3)) |= (v11 & 1) << ((v10 + 6) & 7);
        v9[1] = v10 + 7;
        v8 = result[1];
      }
      *v8 = 1;
      **result = 0;
    }
  }
  else {
    *a2 = a3;
  }
  return result;
}

__int64 SdkHr_756b20(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  int v5;
  int v6;
  __int64 result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 24) = a2 + 2048;
  *(_QWORD*)(a1 + 16) = 512;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 512;
  *(_QWORD*)(a1 + 48) = a2 + 4096;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 32;
  *(_QWORD*)(a1 + 72) = a2 + 4224;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 32;
  *(_QWORD*)(a1 + 120) = a2 + 4544;
  *(_QWORD*)(a1 + 96) = a2 + 4352;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 43;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 43;
  v6 = *a4;
  v5 = a4[1];
  *(_QWORD*)(a1 + 144) = 0x409CCCCD3E9C28F6LL;
  *(_QWORD*)(a1 + 152) = 0x12C0000002BLL;
  *(_QWORD*)(a1 + 160) = 0x4000004E2LL;
  *(_DWORD*)(a1 + 200) = v6;
  *(_DWORD*)(a1 + 204) = v5;
  *(_QWORD*)(a1 + 168) = 0xA00000003LL;
  *(_QWORD*)(a1 + 176) = 0x4500000000000000LL;
  *(_QWORD*)(a1 + 184) = 0x3CF5C28F3E4CCCCDLL;
  *(_QWORD*)(a1 + 192) = 0x30000000CLL;
  SdkRoutine_87ae20(a1 + 208, a1 + 144, a1, a1 + 24, a1 + 48, a1 + 72, a1 + 96,
                    a1 + 120);
  *(_DWORD*)(a1 + 392) = 0;
  result = SdkRoutine_87ac70(a1 + 400);
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  return result;
}

_QWORD* SdkHr_7603c0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7cd38;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7cea8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

_QWORD* SdkHr_761b40(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7cfd0;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7d010;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_761bf0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = SdkRoutine_859ab0(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)SdkRoutine_859ac0(result);
      *v4 = 2;
      SdkRoutine_859ad0(v3, v4, 256);
      SdkRoutine_859ae0(v3);
    }
    SdkRoutine_858d40(&SdkData_1051408);
    SdkRoutine_859af0(SdkData_1051400, a1);
    return SdkRoutine_858d50(&SdkData_1051408);
  }
  return result;
}

_QWORD* SdkHr_761d10(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 32);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = SdkData_e7d1e0;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e7d258;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

_QWORD* SdkHr_761fa0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7d448;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7d5c0;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_76d290(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = SdkRoutine_859ab0(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)SdkRoutine_859ac0(result);
      *v4 = 2;
      SdkRoutine_859ad0(v3, v4, 256);
      SdkRoutine_859ae0(v3);
    }
    SdkRoutine_858d40(&SdkData_10567d8);
    SdkRoutine_859af0(SdkData_10567d0, a1);
    return SdkRoutine_858d50(&SdkData_10567d8);
  }
  return result;
}

__int64 SdkHr_76d320(__int64 a1, __int64* a2, unsigned int a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_76d580(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_76d3c0(a1 + 8, &v9, a3, 0, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 SdkHr_76ec80()
{
  SdkData_10567d0 = SdkRoutine_859a50(&SdkData_1056800, 0x4000, 0);
  return SdkRoutine_858d00(&SdkData_10567d8, 0, 0);
}

__int64 SdkHr_770010()
{
  SdkRoutine_2d0();
  SdkRoutine_2d0();
  return SdkRoutine_2d0();
}

unsigned __int64 SdkHr_78da80(unsigned __int64 result, unsigned __int8 a2,
                              __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  int v8;

  if ((result & 7) != 0 && *(unsigned __int8*)result != a2) {
    v3 = result & 0xFFFFFFFFFFFFFFF8LL;
    v4 = result++;
    v5 = v3 + 8;
    if ((result & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 2;
    if (((v4 + 2) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 3;
    if (((v4 + 3) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 4;
    if (((v4 + 4) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 5;
    if (((v4 + 5) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 6;
    if (((v4 + 6) & 7) == 0) {
    LABEL_19:
      result = v5;
      goto LABEL_20;
    }
    if (*(unsigned __int8*)result != a2) {
      v6 = (unsigned __int8*)(v4 + 7);
      result = v5;
      if (((unsigned __int8)v6 & 7) != 0) {
        if (*v6 == a2) {
          result = (unsigned __int64)v6;
        }
        else {
          result = v5;
        }
      }
    }
  }
LABEL_20:
  if (a3 != 0 && *(unsigned __int8*)result != a2) {
    result -= 9LL;
    do {
      v7 = *(_QWORD*)(result + 9);
      result += 8LL;
    } while ((~((0x101010101010100LL - (v7 ^ (0x101010101010101LL * a2))) |
                v7 ^ (0x101010101010101LL * a2)) &
              0x8080808080808080LL) == 0);
    do {
      v8 = *(unsigned __int8*)++result;
    } while (v8 != a2);
  }
  return result;
}

_DWORD* SdkHr_78dbc0(_DWORD* result, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  _BYTE* v6;
  _BYTE* v7;
  _BYTE* v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int* v26;
  unsigned int v27;
  unsigned __int64 v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int* v32;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int* v38;
  unsigned int v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;

  v3 = -a2;
  v4 = -a2 & 7;
  if (a3 <= v4) {
    v5 = (char*)a2;
    v6 = result;
    if (a3 == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v5 = (char*)a2;
  v6 = result;
  if (v4 != 0) {
    v7 = (_BYTE*)a2;
    v8 = result;
    if ((v3 & 4) != 0) {
      v7 = (_BYTE*)(a2 + 4);
      *result = *(_DWORD*)a2;
      v8 = result + 1;
      if ((v3 & 2) == 0) {
      LABEL_5:
        if ((v3 & 1) == 0) {
        LABEL_7:
          v6 = (char*)result + v4;
          v5 = (char*)(a2 + v4);
          a3 -= v4;
          goto LABEL_8;
        }
      LABEL_6:
        *v8 = *v7;
        goto LABEL_7;
      }
    }
    else if ((v3 & 2) == 0) {
      goto LABEL_5;
    }
    v21 = *(_WORD*)v7;
    v7 += 2;
    *(_WORD*)v8 = v21;
    v8 += 2;
    if ((v3 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_8:
  if (((unsigned __int8)v6 & 7) != 0) {
    if (a3 >= 0x20) {
      if (((unsigned __int8)v6 & 3u) > 1uLL) {
        if (((unsigned __int8)v6 & 3) == 2) {
          v25 = *(_DWORD*)v5;
          a3 -= 2LL;
          v26 = (unsigned int*)(v4 + a2 + 8);
          *(_WORD*)v6 = v25;
          v6 += 2;
          do {
            v27 = *v26;
            a3 -= 16LL;
            HIDWORD(v28) = *(v26 - 1);
            LODWORD(v28) = v25;
            v29 = v26[1];
            v25 = v26[2];
            v30 = *(_QWORD*)(v26 - 1) >> 16;
            v26 += 4;
            *(_DWORD*)v6 = v28 >> 16;
            *((_DWORD*)v6 + 1) = v30;
            *((_DWORD*)v6 + 2) = __PAIR64__(v29, v27) >> 16;
            *((_DWORD*)v6 + 3) = __PAIR64__(v25, v29) >> 16;
            v6 += 16;
          } while (a3 > 0x11);
          v5 = (char*)v26 - 6;
        }
        else {
          v37 = *(_DWORD*)v5;
          --a3;
          v38 = (unsigned int*)(v4 + a2 + 8);
          *v6++ = v37;
          do {
            v39 = *v38;
            a3 -= 16LL;
            HIDWORD(v40) = *(v38 - 1);
            LODWORD(v40) = v37;
            v41 = v38[1];
            v37 = v38[2];
            v42 = *(_QWORD*)(v38 - 1) >> 8;
            v38 += 4;
            *(_DWORD*)v6 = v40 >> 8;
            *((_DWORD*)v6 + 1) = v42;
            *((_DWORD*)v6 + 2) = __PAIR64__(v41, v39) >> 8;
            *((_DWORD*)v6 + 3) = __PAIR64__(v37, v41) >> 8;
            v6 += 16;
          } while (a3 > 0x12);
          v5 = (char*)v38 - 7;
        }
        goto LABEL_16;
      }
      if (((unsigned __int8)v6 & 3) != 0) {
        v31 = *(_DWORD*)v5;
        a3 -= 3LL;
        v32 = (unsigned int*)(v4 + a2 + 8);
        *(_WORD*)v6 = v31;
        v6[2] = BYTE2(v31);
        v6 += 3;
        do {
          v33 = *v32;
          a3 -= 16LL;
          HIDWORD(v34) = *(v32 - 1);
          LODWORD(v34) = v31;
          v35 = v32[1];
          v31 = v32[2];
          v36 = *(_QWORD*)(v32 - 1) >> 24;
          v32 += 4;
          *(_DWORD*)v6 = v34 >> 24;
          *((_DWORD*)v6 + 1) = v36;
          *((_DWORD*)v6 + 2) = __PAIR64__(v35, v33) >> 24;
          *((_DWORD*)v6 + 3) = __PAIR64__(v31, v35) >> 24;
          v6 += 16;
        } while (a3 > 0x10);
        v5 = (char*)v32 - 5;
        goto LABEL_16;
      }
      do {
        v9 = *(_QWORD*)v5;
        v10 = *((_DWORD*)v5 + 2);
        v11 = *((_DWORD*)v5 + 3);
        v5 += 16;
        a3 -= 16LL;
        *(_QWORD*)v6 = v9;
        *((_DWORD*)v6 + 2) = v10;
        *((_DWORD*)v6 + 3) = v11;
        v6 += 16;
      } while (a3 > 0xF);
    }
    if (a3 == 0) {
      return result;
    }
  LABEL_16:
    if ((a3 & 0x10) != 0) {
      *v6 = *v5;
      *(_QWORD*)(v6 + 1) = *(_QWORD*)(v5 + 1);
      *(_DWORD*)(v6 + 9) = *(_DWORD*)(v5 + 9);
      *(_WORD*)(v6 + 13) = *(_WORD*)(v5 + 13);
      v12 = v5[15];
      v5 += 16;
      v6[15] = v12;
      v6 += 16;
      if ((a3 & 8) == 0) {
        goto LABEL_35;
      }
    }
    else if ((a3 & 8) == 0) {
      goto LABEL_35;
    }
    v13 = *(_DWORD*)v5;
    v14 = *((_DWORD*)v5 + 1);
    v5 += 8;
    *(_DWORD*)v6 = v13;
    *((_DWORD*)v6 + 1) = v14;
    v6 += 8;
    if ((a3 & 4) == 0) {
      goto LABEL_36;
    }
  LABEL_21:
    v15 = *(_DWORD*)v5;
    v5 += 4;
    *(_DWORD*)v6 = v15;
    v6 += 4;
    if ((a3 & 2) == 0) {
      goto LABEL_37;
    }
  LABEL_22:
    v16 = *(_WORD*)v5;
    v5 += 2;
    *(_WORD*)v6 = v16;
    v6 += 2;
    if ((a3 & 1) == 0) {
      return result;
    }
  LABEL_39:
    *v6 = *v5;
    return result;
  }
  if (a3 >= 0x20) {
    do {
      v17 = *(_QWORD*)v5;
      v18 = *((_QWORD*)v5 + 1);
      v19 = *((_QWORD*)v5 + 2);
      v20 = *((_QWORD*)v5 + 3);
      v5 += 32;
      a3 -= 32LL;
      *(_QWORD*)v6 = v17;
      *((_QWORD*)v6 + 1) = v18;
      *((_QWORD*)v6 + 2) = v19;
      *((_QWORD*)v6 + 3) = v20;
      v6 += 32;
    } while (a3 > 0x1F);
  }
  if (a3 >= 0x10) {
    v22 = *(_QWORD*)v5;
    v23 = *((_QWORD*)v5 + 1);
    v5 += 16;
    *(_QWORD*)v6 = v22;
    *((_QWORD*)v6 + 1) = v23;
    v6 += 16;
    if ((a3 & 8) == 0) {
    LABEL_28:
      if ((a3 & 7) == 0) {
        return result;
      }
      goto LABEL_35;
    }
  }
  else if ((a3 & 8) == 0) {
    goto LABEL_28;
  }
  v24 = *(_QWORD*)v5;
  v5 += 8;
  *(_QWORD*)v6 = v24;
  v6 += 8;
  if ((a3 & 7) == 0) {
    return result;
  }
LABEL_35:
  if ((a3 & 4) != 0) {
    goto LABEL_21;
  }
LABEL_36:
  if ((a3 & 2) != 0) {
    goto LABEL_22;
  }
LABEL_37:
  if ((a3 & 1) != 0) {
    goto LABEL_39;
  }
  return result;
}

__int64 SdkHr_78de80(__int64 result, __int64* a2, unsigned __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  if (a3 < 0x10) {
    return SdkRoutine_87bbe0();
  }
  v3 = (_QWORD*)result;
  if (a3 < 0x20) {
    goto LABEL_6;
  }
  do {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    a2 += 4;
    a3 -= 32LL;
    *v3 = v4;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v3 += 4;
  } while (a3 > 0x1F);
  if (a3 >= 0x10) {
  LABEL_6:
    v8 = *a2;
    v9 = a2[1];
    a2 += 2;
    a3 -= 16LL;
    *v3 = v8;
    v3[1] = v9;
    v3 += 2;
  }
  if (a3 != 0) {
    v10 = (__int64*)((char*)a2 + a3 - 16);
    v11 = (_QWORD*)((char*)v3 + a3 - 16);
    v12 = *v10;
    v13 = v10[1];
    *v11 = v12;
    v11[1] = v13;
  }
  return result;
}

__int64 SdkHr_79fb10(int* a1)
{
  int v2;
  __int64 result;
  __int64 v4;

  *((_BYTE*)a1 + 128) |= *((_BYTE*)a1 + 128) - 1;
  if (*((_QWORD*)a1 + 5) != *((_QWORD*)a1 + 7)) {
    (*((void (**)(int*, _QWORD, _QWORD))a1 + 9))(a1, 0, 0);
  }
  v2 = *a1;
  *((_QWORD*)a1 + 7) = 0;
  *((_QWORD*)a1 + 4) = 0;
  *((_QWORD*)a1 + 5) = 0;
  if ((v2 & 4) != 0) {
    *a1 = v2 | 0x20;
    return 0xFFFFFFFFLL;
  }
  else {
    result = (unsigned int)(v2 << 27 >> 31);
    v4 = *((_QWORD*)a1 + 11) + *((_QWORD*)a1 + 12);
    *((_QWORD*)a1 + 1) = v4;
    *((_QWORD*)a1 + 2) = v4;
  }
  return result;
}

__int64 SdkHr_79fba0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_BYTE*)(a1 + 128) |= *(_BYTE*)(a1 + 128) - 1;
  if ((*(_DWORD*)a1 & 8) != 0) {
    *(_DWORD*)a1 |= 0x20u;
    return 0xFFFFFFFFLL;
  }
  else {
    v1 = *(_QWORD*)(a1 + 88);
    v2 = *(_QWORD*)(a1 + 96);
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 56) = v1;
    *(_QWORD*)(a1 + 32) = v1 + v2;
    *(_QWORD*)(a1 + 40) = v1;
    return 0;
  }
}

unsigned __int64 SdkHr_7a3c30(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;

  v3 = a1[18];
  v4 = a3 + 256;
  v5 = a3;
  v8 = SdkRoutine_8571c0(v3, 0, a3 + 256);
  if (v8 != 0) {
    v4 = v8 - v3;
  }
  if (v4 < v5) {
    v5 = v4;
  }
  SdkRoutine_856130(a2, v3, v5);
  a1[1] = v3 + v5;
  a1[2] = v3 + v4;
  a1[18] = v3 + v4;
  return v5;
}

__int64 SdkHr_7bc480(__int64 a1, unsigned int a2)
{
  SdkRoutine_afbd0();
  return a2;
}

__int64 SdkHr_7bc890(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bc8c0();
  }
  return result;
}

__int64 SdkHr_7bd250(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bd280();
  }
  return result;
}

__int64 SdkHr_7bd890(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bd8c0();
  }
  return result;
}

__int64 SdkHr_7be280(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7be2c0();
  }
  return result;
}

__int64 SdkHr_7be930(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7be960();
  }
  return result;
}

__int64 SdkHr_7befd0(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bf000();
  }
  return result;
}

__int64 SdkHr_7bf640(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bf680();
  }
  return result;
}

__int64 SdkHr_7c1590(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c15c0();
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7cd620()
{
  __int64 v0;

  v0 = SdkRoutine_87c7a0();
  SdkRoutine_87c7b0(v0);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7d37f8()
{
  __int64 v0;
  __int64 v1;

  v0 = SdkRoutine_87c7a0();
  v1 = SdkRoutine_87c8d0(v0);
  SdkRoutine_87c8e0();
  SdkRoutine_87c790(v1);
  SdkRoutine_7cd620();
}

__int64 SdkHr_7d6360(const void* a1, __int64 a2)
{
  char v3;

  return SdkRoutine_7d63a0(&v3, a1, a2);
}

__int64 SdkHr_7dbc60(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  *a1 = SdkData_e89398 + 16;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = SdkRoutine_857e60(v3);
  v5 = SdkRoutine_85e050(v4 + 25);
  v6 = v5 + 24;
  *(_QWORD*)v5 = v4;
  *(_QWORD*)(v5 + 8) = v4;
  *(_DWORD*)(v5 + 16) = 0;
  result = SdkRoutine_856130(v5 + 24, v3, v4 + 1);
  a1[1] = v6;
  return result;
}

_QWORD* SdkHr_7dbd80(_QWORD* result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a2 + 8);
  *result = SdkData_e89398 + 16;
  result[1] = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  return result;
}

__int64 SdkHr_7dbdb0(__int64 result, void* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *((_QWORD*)a2 + 1);
  v3 = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 8) = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  if ((int)(atomic_fetch_add((atomic_uint* volatile)(v3 - 8), 0xFFFFFFFF) - 1) <
      0) {
    v4 = result;
    SdkRoutine_8584f0((void*)(v3 - 24), a2);
    return v4;
  }
  return result;
}

__int64 SdkHr_7dbe10(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  *a1 = SdkData_e893a0 + 16;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = SdkRoutine_857e60(v3);
  v5 = SdkRoutine_85e050(v4 + 25);
  v6 = v5 + 24;
  *(_QWORD*)v5 = v4;
  *(_QWORD*)(v5 + 8) = v4;
  *(_DWORD*)(v5 + 16) = 0;
  result = SdkRoutine_856130(v5 + 24, v3, v4 + 1);
  a1[1] = v6;
  return result;
}

_QWORD* SdkHr_7dbf30(_QWORD* result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a2 + 8);
  *result = SdkData_e893a0 + 16;
  result[1] = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  return result;
}

__int64 SdkHr_7dbf60(__int64 result, void* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *((_QWORD*)a2 + 1);
  v3 = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 8) = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  if ((int)(atomic_fetch_add((atomic_uint* volatile)(v3 - 8), 0xFFFFFFFF) - 1) <
      0) {
    v4 = result;
    SdkRoutine_8584f0((void*)(v3 - 24), a2);
    return v4;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7dbfc0(const char* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_87cac0(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e893a8, SdkData_e893b0);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

#pragma GCC visibility pop
