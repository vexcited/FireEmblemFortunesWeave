#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_ui2d_Window_vtable[])();
float GameRoutine_5a3700(unsigned __int16*, float);
float acosf(float);
void VectorGraphicsShapePathEllipse_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathEllipse_Unknown8(__int64 a1);
bool VectorGraphicsShapePathEllipse_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathEllipse_Unknown9(__int64 a1);
float VectorGraphicsShapePathEllipse_Unknown6(__int64 a1);
__int64 VectorGraphicsShapePathData_5a3ca0(float*, float32x2_t*, unsigned int*,
                                           __int64, _DWORD*);
extern _UNKNOWN* GameData_2135448;
__int64 VectorGraphicsShapePathEllipse_Unknown13(__int64* a1, float32x2_t** a2,
                                                 int* a3, _DWORD** a4,
                                                 _DWORD* a5, __int64 a6);

void VectorGraphicsShapePathEllipse_Unknown5(__int64 a1, float a2)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  int v11;

  v4 = GameRoutine_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 56LL), a2);
  v5 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 48) = v4;
  v6 = GameRoutine_5a3700((unsigned __int16*)(v5 + 72), a2);
  v7 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 52) = v6;
  v8 = GameRoutine_5a3700((unsigned __int16*)(v7 + 24), a2);
  v9 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 40) = v8;
  v10 = GameRoutine_5a3700((unsigned __int16*)(v9 + 40), a2);
  v11 = *(unsigned __int8*)(a1 + 20);
  *(float*)(a1 + 44) = v10;
  if (v11 == 1) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathEllipse_Unknown8(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 48);
  if (*(float*)(a1 + 52) > v1) {
    v1 = *(float*)(a1 + 52);
  }
  v2 = acosf((float)(-2.0f / (float)(v1 * 0.5f)) + 1.0f);
  if (v2 <= 0.0f) {
    return 4;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 4);
  }
}

__int64 VectorGraphicsShapePathEllipse_Unknown13(__int64* a1, float32x2_t** a2,
                                                 int* a3, _DWORD** a4,
                                                 _DWORD* a5, __int64 a6)
{
  __int64 v6;
  int v7;
  float32x2_t* v8;
  unsigned int v15;
  long double v16;
  long double v17;
  float32x2_t* v18;
  signed int v19;
  char* v20;
  float v21;
  float v22;
  unsigned int v23;
  __int64 v24;
  float v25;
  float* v26;
  float v27;
  __int64 v28;
  char v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int64 result;
  unsigned int v37;
  unsigned int v38;

  v6 = *a1;
  v7 = *a3;
  v8 = *a2;
  v38 = 0;
  v15 = (*(__int64 (**)(__int64*, _QWORD))(v6 + 64))(a1, 0);
  v18 = *a2;
  v19 = v15;
  if (v15 == -1) {
    *(_QWORD*)&v16 = 0;
    if ((*(_WORD*)(a1[4] + 4) & 2) != 0) {
    LABEL_6:
      *(_QWORD*)a6 = *(_QWORD*)&v16;
      *(_DWORD*)(a6 + 16) = v15;
      *(_BYTE*)(a6 + 20) = 0;
      *(_QWORD*)(a6 + 8) = v18 + 1;
      v38 = 1;
    }
  }
  else {
    v20 = (char*)GameData_2135448;
    *(_QWORD*)&v17 = *((unsigned int*)a1 + 12);
    *(float*)&v17 =
        *((float*)a1 + 10) +
        (float)((float)((float)(*(float*)((char*)((char*)0x400LL) +
                                          (_QWORD)GameData_2135448) +
                                (float)(*(float*)((char*)((_UNKNOWN*)0x408LL) +
                                                  (_QWORD)GameData_2135448) *
                                        0.0)) *
                        *(float*)&v17) *
                0.5);
    v21 =
        *((float*)a1 + 11) +
        (float)((float)-(
                    float)((float)(*(float*)((char*)((char*)0x400LL) +
                                             (_QWORD)GameData_2135448 + 4) +
                                   (float)(*(float*)((char*)((int*)0x40CLL) +
                                                     (_QWORD)GameData_2135448) *
                                           0.0)) *
                           *((float*)a1 + 13)) *
                0.5);
    LANES64(*(v18)).n64_u32[0] = LODWORD(v17);
    v16 = v17;
    *((float*)&v16 + 1) = v21;
    LANES64(*((*a2))).n64_f32[1] = v21;
    ++*a2;
    ++*a3;
    if (v15 != 0) {
      v22 = 0x1.921fb60000000p+0;
      v23 = v15;
      do {
        v22 = v22 - (float)(0x1.921fb60000000p+2 / (float)v15);
        --v23;
        v24 = (__int64)(float)(v22 * 0x1.45f3060000000p+29);
        v25 = vcvts_n_f32_u32(v24 & 0xFFFFFF, 0x18u);
        v26 = (float*)&v20[16 * BYTE3(v24)];
        v27 = *((float*)a1 + 11) +
              (float)((float)-(float)((float)(v26[1] + (float)(v26[3] * v25)) *
                                      *((float*)a1 + 13)) *
                      0.5);
        LANES64(*((*a2))).n64_f32[0] =
            *((float*)a1 + 10) +
            (float)((float)((float)(*v26 + (float)(v26[2] * v25)) *
                            *((float*)a1 + 12)) *
                    0.5);
        LANES64(*((*a2))).n64_f32[1] = v27;
        ++*a2;
        ++*a3;
      } while (v23 != 0);
    }
    if ((*(_WORD*)(a1[4] + 4) & 2) != 0) {
      goto LABEL_6;
    }
  }
  v28 = *a1;
  v37 = v15;
  v29 = (*(__int64 (**)(__int64*, long double))(v28 + 88))(a1, v16);
  v30 = v7;
  v31 = v19;
  if ((v29 & 1) != 0) {
    v32 = VectorGraphicsShapePathData_5a3ca0((float*)a1, v8, &v37, a6, &v38);
    v19 = v37;
    v33 = v32 & ~(v32 >> 31);
    v30 = v33 + v7;
    v31 = v37 - v33;
  }
  if ((*(_WORD*)(a1[4] + 4) & 1) != 0 && v31 >= 1) {
    v34 = 0;
    if (v31 != 1) {
      do {
        *(*a4)++ = v30;
        ++*a5;
        v35 = v30 + v34;
        v34 += 2;
        *(*a4)++ = v35;
        ++*a5;
        *(*a4)++ = v35 + 1;
        ++*a5;
        *(*a4)++ = v30;
        ++*a5;
        *(*a4)++ = v35 + 1;
        ++*a5;
        *(*a4)++ = v35 + 2;
        ++*a5;
      } while ((v31 & 0x7FFFFFFE) != v34);
    }
    if ((v31 & 1) != 0) {
      *(*a4)++ = v30;
      ++*a5;
      *(*a4)++ = v34 + v30;
      ++*a5;
      *(*a4)++ = v30 + 1 + v34;
      ++*a5;
    }
  }
  result = v38;
  *a2 = &v8[v19 + 1];
  *a3 = v7 + v19 + 1;
  return result;
}

bool VectorGraphicsShapePathEllipse_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

__int64 VectorGraphicsShapePathEllipse_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

float VectorGraphicsShapePathEllipse_Unknown6(__int64 a1)
{
  return *(float*)(a1 + 40);
}

__int64 VectorGraphicsShapePathEllipse_Unknown9(__int64 a1)
{
  return (*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, 0) +
         1;
}

#pragma GCC visibility pop
