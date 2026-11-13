#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a837f0;
extern __int64 (**ModelAnimObj_Destructor_ptr_ptr)();
float powf(float, float);
float nn_g3d_5e4080(__int64 a1, __int64 a2, float a3);
__int64 nn_g3d_5f0bc0(__int64 result, __int64 a2, double a3, double a4,
                      double a5, double a6, double a7, double a8, double a9,
                      double a10);
void nn_g3d_5f2340(__int64* a1, __int64 a2, long double a3, double a4,
                   long double a5, long double a6, double a7, double a8);
__int64 nn_g3d_5f4340(__int64 result, float32x4_t* a2);
float32x4_t* nn_g3d_5f80f0(float32x4_t* result, float32x4_t* a2, float a3,
                           double a4, double a5, double a6, double a7,
                           double a8);

float nn_g3d_5e4080(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  char* v16;

  {
    v4 = *(float*)a2;
    __asm__ volatile("" ::"w"(v4));
  }
  if (a3 < *(float*)a2 || (v7 = *(float*)(a2 + 4)) <= a3) {
    {
      v8 = *(float*)(a1 + 24);
      __asm__ volatile("" ::"w"(v8));
    }
    {
      v9 = *(float*)(a1 + 28) - v8;
      __asm__ volatile("" ::"w"(v9));
    }
    *(float*)&v10 = a3 - v8;
    {
      v11 = *(float*)&v10 * (float)(0x1.0000000000000p+0f / v9);
      __asm__ volatile("" ::"w"(v11));
    }
    LOWORD(v10) = *(_WORD*)(a1 + 18);
    v12 = (int)(float)(v11 * (float)v10);
    *(_DWORD*)(a2 + 8) = v12;
    {
      v13 = *(unsigned __int16*)(a1 + 18);
      __asm__ volatile("" ::"r"(v13));
    }
    if (v13 <= v12) {
      *(_DWORD*)(a2 + 8) = v13 - 1;
    }
    ((void (*)(__int64, __int64, float))
         ModelAnimObj_Destructor_ptr_ptr[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2,
                                                                        a3);
    {
      v4 = *(float*)a2;
      __asm__ volatile("" ::"w"(v4));
    }
    {
      v7 = *(float*)(a2 + 4);
      __asm__ volatile("" ::"w"(v7));
    }
  }
  v14 = a3 - v4;
  v15 = 0x1.0000000000000p+0f / (float)(v7 - v4);
  {
    v16 = (char*)(*(_QWORD*)(a1 + 8) + 4LL * *(int*)(a2 + 8));
    __asm__ volatile("" ::"r"(v16));
  }
  return (float)((float)*v16 + (float)((float)v16[1] * (float)(v14 * v15))) +
         (float)((float)((float)(v14 * v15) *
                         (float)((float)v16[2] +
                                 (float)((float)v16[3] * (float)(v14 * v15)))) *
                 (float)(v14 * v15));
}

__int64 nn_g3d_5f0bc0(__int64 result, __int64 a2, double a3, double a4,
                      double a5, double a6, double a7, double a8, double a9,
                      double a10)
{
  int32x2_t v10;
  int32x2_t v11;
  float32x4_t v12;
  __int64 v13;
  __int64 v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  __int64 v19;
  int32x4_t v20;
  int32x4_t v21;
  unsigned int* v22;
  int32x4_t v23;
  float v24;
  int32x4_t v25;
  int32x4_t v26;
  float v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  unsigned int v35;
  float32x4_t v36;
  float32x4_t* v37;
  unsigned __int32 v38;
  float32x4_t v39;
  unsigned int v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;

  if (*(_WORD*)(result + 100) != 0) {
    LANES128(v12).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v12).n128_u64[1] = 0x3F8000003F800000LL;
    {
      v13 = 4LL * *(unsigned __int16*)(result + 100);
      __asm__ volatile("" ::"r"(v13));
    }
    v14 = 0;
    v15 = vdupq_n_s32(0x3E22F983u);
    v16 = vdupq_n_s32(0xC0C90FDB);
    {
      v17 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      __asm__ volatile("" ::"w"(v17));
    }
    {
      v18 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      __asm__ volatile("" ::"w"(v18));
    }
    {
      v19 = *(_QWORD*)(a2 + 24);
      __asm__ volatile("" ::"r"(v19));
    }
    v20 = vdupq_n_s32(0x3FC90FDBu);
    v21 = vdupq_n_s32(0x40490FDBu);
    {
      v22 = (unsigned int*)(*(_QWORD*)(result + 72) + 24LL);
      __asm__ volatile("" ::"r"(v22));
    }
    v23 = vdupq_n_s32(0xBFC90FDB);
    {
      v24 = -*(float*)GameData_212c190;
      __asm__ volatile("" ::"w"(v24));
    }
    v25 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 0);
    v26 = vdupq_laneq_s32(v17, 2);
    {
      v27 = -*(float*)GameData_212c188;
      __asm__ volatile("" ::"w"(v27));
    }
    v28 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0);
    v29 = vdupq_laneq_s32(v18, 2);
    v30 = vdupq_n_s32(0xC0490FDB);
    *(float*)&a9 = -COERCE_FLOAT(HIDWORD(
        *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190)));
    *(float*)&a10 = -COERCE_FLOAT(DWORD3(
        *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190)));
    PSEUDO_LOW_LANE64(
        v10, n64_f32,
        -COERCE_FLOAT(HIDWORD(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
    PSEUDO_LOW_LANE64(
        v11, n64_f32,
        -COERCE_FLOAT(DWORD3(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
    v31 = vdupq_lane_s32(*(int32x2_t*)&a9, 0);
    v32 = vdupq_lane_s32(*(int32x2_t*)&a10, 0);
    v33 = vdupq_lane_s32(v10, 0);
    v34 = vdupq_lane_s32(v11, 0);
    do {
      if ((*(_DWORD*)(*(_QWORD*)(result + 88) + v14) & 0x80000000) == 0) {
        {
          v35 = *(_DWORD*)(*(_QWORD*)(result + 88) + v14) & 0x7FFF;
          __asm__ volatile("" ::"r"(v35));
        }
        if (v35 != 0x7FFF) {
          LANES128(v36).n128_u64[0] = *(_QWORD*)(v22 - 5);
          v37 = (float32x4_t*)(v19 + 96LL * v35);
          {
            v38 = LANES128(*(v37)).n128_u32[0];
            __asm__ volatile("" ::"r"(v38));
          }
          LANES128(v36).n128_u64[1] = *(v22 - 3);
          LANES128(v39).n128_u64[0] = *((_QWORD*)v22 - 1);
          LANES128(v39).n128_u64[1] = *v22;
          {
            v40 = *(v22 - 6) >> 23;
            __asm__ volatile("" ::"r"(v40));
          }
          v37[1] = v36;
          LANES128(*(v37)).n128_u32[0] =
              v38 & 0xF07FFFFF | ((v40 & 0x1F) << 23);
          v37[5] = v39;
          LANES128(v36).n128_u64[0] = *((_QWORD*)v22 + 1);
          LANES128(v36).n128_u64[1] = v22[4];
          v41 = vmlaq_f32(v36, v16, vrndnq_f32(vmulq_f32(v36, v15)));
          v42 = vcgtq_f32(v41, v20);
          v43 = vbslq_s8(v42, vsubq_f32(v21, v41), v41);
          v44 = vmvnq_s8(v42);
          v45 = vcgtq_f32(v23, v43);
          v46 = vbslq_s8(v45, vsubq_f32(v30, v43), v43);
          v47 = vbicq_s8(v44, v45);
          v48 = vmulq_f32(v46, v46);
          v49 = vmulq_f32(
              v46,
              vmlaq_f32(
                  v12, v48,
                  vmlaq_f32(v32, v48,
                            vmlaq_f32(v26, v48,
                                      vmlaq_f32(v31, v48,
                                                vmlaq_n_f32(v25, v48, v24))))));
          v50 = vmlaq_f32(
              v12, v48,
              vmlaq_f32(
                  v34, v48,
                  vmlaq_f32(v29, v48,
                            vmlaq_f32(v33, v48, vmlaq_n_f32(v28, v48, v27)))));
          v51 = vbslq_s8(v47, v50, vnegq_f32(v50));
          LANES128(v48).n128_u64[0] =
              LANES128(v51).n128_u32[1] |
              ((unsigned __int64)LANES128(v51).n128_u32[1] << 32);
          LANES128(v52).n128_u32[0] = LANES128(v51).n128_u32[2];
          LANES128(v52).n128_u32[1] = LANES128(v49).n128_u32[2];
          LANES128(v53).n128_u64[0] = LANES128(v52).n128_u64[0];
          LANES128(v52).n128_u64[1] = 1065353216;
          LANES128(v48).n128_u64[1] = LANES128(v49).n128_u32[1];
          LANES128(v50).n128_u64[0] =
              LANES128(v49).n128_u32[1] |
              ((unsigned __int64)LANES128(v49).n128_u32[1] << 32);
          LANES128(v53).n128_u64[1] = 3212836864LL;
          LANES128(v50).n128_u64[1] = LANES128(v51).n128_u32[1];
          v54 = vmulq_f32(v50, v52);
          LANES128(v52).n128_u64[0] = __ROR8__(LANES128(v52).n128_u64[0], 32);
          v37[2] = vmulq_f32(v48, v53);
          v37[3] =
              vaddq_f32(vmulq_n_f32(v54, LANES128(v49).n128_f32[0]),
                        vmulq_f32(vmulq_n_f32(v52, LANES128(v51).n128_f32[0]),
                                  COERCE_AS(float32x4_t, GameData_1a82940)));
          v37[4] =
              vaddq_f32(vmulq_n_f32(v54, LANES128(v51).n128_f32[0]),
                        vmulq_f32(vmulq_n_f32(v52, LANES128(v49).n128_f32[0]),
                                  COERCE_AS(float32x4_t, GameData_1a83510)));
        }
      }
      v14 += 4;
      v22 += 12;
    } while (v13 != v14);
  }
  return result;
}

void nn_g3d_5f2340(__int64* a1, __int64 a2, long double a3, double a4,
                   long double a5, long double a6, double a7, double a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  __int64 v13;
  double v14;
  unsigned __int32 v15;
  float32x4_t v16;
  unsigned __int32 v17;
  unsigned int v18;
  float32x4_t* v19;
  float32x4_t v20;
  unsigned __int32 v21;
  double v22;
  double v23;
  float v24;
  float32x4_t v25;
  double v26;
  double v27;
  __int64 v28;

  if (*(_WORD*)(a2 + 100) != 0) {
    {
      v8 = 4LL * *(unsigned __int16*)(a2 + 100);
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = *(float32x4_t**)(a2 + 72);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = *a1;
      __asm__ volatile("" ::"r"(v10));
    }
    v13 = 0;
    {
      v28 = *(_QWORD*)&a3;
      __asm__ volatile("" ::"r"(v28));
    }
    v14 = 0x1.000003f800000p-7;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v13) & 0x80000000) == 0) {
        {
          v18 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v13) & 0x7FFF;
          __asm__ volatile("" ::"r"(v18));
        }
        if (v18 != 0x7FFF) {
          v19 = (float32x4_t*)(v10 + 80LL * v18);
          nn_g3d_5f80f0(v19, v9, *(float*)&a3, v14, *(double*)&a5,
                        *(double*)&a6, a7, a8);
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            *(float*)&v22 = powf(LANES128(*(v9)).n128_f32[1], *(float*)&v28);
            v27 = v22;
            *(float*)&v23 = powf(LANES128(*(v9)).n128_f32[2], *(float*)&v28);
            v26 = v23;
            v24 = powf(LANES128(*(v9)).n128_f32[3], *(float*)&v28);
            LODWORD(v14) = LANES128(v19[4]).n128_u32[1];
            v25 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(*(float*)&v14) >= 0x1.0624de0000000p-10f) {
              v25 = *v19;
              __asm__ volatile("" ::"w"(v25));
            }
            a7 = v26;
            a8 = v27;
            {
              v15 = LANES128(v19[4]).n128_u32[0];
              __asm__ volatile("" ::"r"(v15));
            }
            LANES128(v16).n128_u64[0] = __PAIR64__(LODWORD(v26), LODWORD(v27));
            LANES128(v16).n128_u64[1] = LODWORD(v24);
            *v19 = vmulq_f32(v16, v25);
            LODWORD(a3) = v28;
            LANES128(v16).n128_u64[0] = LANES128(v9[1]).n128_u64[0];
            *(float*)&v14 = *(float*)&v28 + *(float*)&v14;
            LANES128(v16).n128_u64[1] = LANES128(v9[1]).n128_u32[2];
            a6 = COERCE_LONG_DOUBLE(vmulq_n_f32(v16, *(float*)&v28));
            a5 = COERCE_LONG_DOUBLE(vaddq_f32(v19[1], *(float32x4_t*)&a6));
            *(long double*)&v19[1] = a5;
            {
              v17 = LANES128(*(v9)).n128_u32[0];
              __asm__ volatile("" ::"r"(v17));
            }
            LANES128(v19[4]).n128_u32[1] = LODWORD(v14);
            LANES128(v19[4]).n128_u32[0] = v15 | ~v17;
          }
          else {
            LANES128(v20).n128_u64[0] =
                *(unsigned __int64*)((char*)LANES128(*(v9)).n128_u64 + 4);
            *(_QWORD*)&a6 = v28;
            {
              v21 = LANES128(v19[4]).n128_u32[0];
              __asm__ volatile("" ::"r"(v21));
            }
            LANES128(v20).n128_u64[1] = LANES128(*(v9)).n128_u32[3];
            a5 = *(long double*)&v19[1];
            *v19 = vaddq_f32(*v19, vmulq_n_f32(v20, *(float*)&v28));
            *(_QWORD*)&a3 = LANES128(v9[1]).n128_u64[0];
            *(_QWORD*)&v14 = LANES128(v9[1]).n128_u32[2];
            *((double*)&a3 + 1) = v14;
            v19[1] = vaddq_f32(*(float32x4_t*)&a5,
                               vmulq_n_f32(*(float32x4_t*)&a3, *(float*)&v28));
            *(float*)&a3 = *(float*)&v28 + LANES128(v19[4]).n128_f32[1];
            LANES128(v19[4]).n128_u32[0] = v21 | ~LANES128(*(v9)).n128_u32[0];
            LANES128(v19[4]).n128_u32[1] = LODWORD(a3);
            LODWORD(a3) = v28;
          }
        }
      }
      v13 += 4;
      v9 += 3;
    } while (v8 != v13);
  }
}

__int64 nn_g3d_5f4340(__int64 result, float32x4_t* a2)
{
  float32x4_t* v2;
  unsigned __int64 v3;
  float32x4_t* v4;
  int8x16_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float v14;
  float v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;

  if (*(_WORD*)(result + 10) != 0) {
    v2 = a2 + 5;
    v3 = 0;
    {
      v4 = (float32x4_t*)(*(_QWORD*)result + 48LL);
      __asm__ volatile("" ::"r"(v4));
    }
    do {
      {
        v14 = LANES128(v4[1]).n128_f32[1];
        __asm__ volatile("" ::"w"(v14));
      }
      if (fabsf(v14) >= 0x1.0624de0000000p-10f) {
        if (fabsf(v14 + -0x1.0000000000000p+0f) >= 0x1.0624de0000000p-10f) {
          v15 = 0x1.0000000000000p+0f / v14;
          v16 = vmulq_n_f32(v4[-3], v15);
          v17 = vmulq_n_f32(v4[-2], v15);
          v4[-3] = v16;
          v4[-2] = v17;
        }
        LANES128(v2[-5]).n128_u32[0] =
            (LANES128(v2[-5]).n128_u32[0] & 0xF07FFFFF |
             (((LANES128(v4[1]).n128_u32[0] >> 23) & 0x1F) << 23)) ^
            0xF800000;
        LANES128(v2[-4]).n128_u64[1] = LANES128(v4[-3]).n128_u64[1];
        LANES128(v2[-4]).n128_u64[0] = LANES128(v4[-3]).n128_u64[0];
        *v2 = v4[-2];
        {
          v18 = *v4;
          __asm__ volatile("" ::"w"(v18));
        }
        v19 = vmulq_f32(v18, v18);
        LANES128(v19).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                .n64_u64[0];
        v20 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                  .n64_f32[0];
        if (v20 != 0x0.0p+0f) {
          {
            v21 = v4[-1];
            __asm__ volatile("" ::"w"(v21));
          }
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v22).n128_i8[8] =
              vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v23).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v23).n128_i8[8] =
              vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v24 = vmulq_f32(v23, v22);
          LANES128(v23).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v23).n128_i8[8] =
              vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v21).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v21).n128_i8[8] =
              vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v25 = vmlsq_f32(v24, v21, v23);
          v26 = vmulq_f32(v25, v25);
          LANES128(v26).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                  .n64_u64[0];
          v27 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                  .n64_f32[0];
          if (v27 != 0x0.0p+0f) {
            v5 = vmulq_n_f32(*v4, 0x1.0000000000000p+0f / sqrtf(v20));
            v6 = vmulq_n_f32(v25, 0x1.0000000000000p+0f / sqrtf(v27));
            LANES128(v7).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v8).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v7).n128_i8[8] =
                vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            *(int8x8_t*)&LANES128(v8).n128_i8[8] =
                vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v9).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v10 = vmulq_f32(v7, v8);
            *(int8x8_t*)&LANES128(v9).n128_i8[8] =
                vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v8).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v8).n128_i8[8] =
                vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            v11 = vmlsq_f32(v10, v8, v9);
            {
              v12 = *v2;
              __asm__ volatile("" ::"w"(v12));
            }
            LANES128(v8).n128_u64[0] =
                LANES64_OF(
                    vzip1_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]),
                              COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v13).n128_u64[0] =
                LANES64_OF(
                    vzip2_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]),
                              COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v5).n128_u64[0] =
                LANES64_OF(
                    vzip1_s32(
                        COERCE_AS(
                            int32x2_t,
                            LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                        COERCE_AS(
                            int32x2_t,
                            LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v8).n128_u64[1] = LANES128(v6).n128_u32[0];
            LANES128(v13).n128_u64[1] = LANES128(v6).n128_u32[1];
            LANES128(v5).n128_u64[1] = LANES128(v6).n128_u32[2];
            LANES128(v12).n128_u64[1] =
                (unsigned int)LANES128(*(v2)).n128_u64[1];
            v2[-3] = v8;
            v2[-2] = v13;
            v2[-1] = v5;
            *v2 = v12;
          }
        }
      }
      v4 += 5;
      ++v3;
      v2 += 6;
    } while (v3 < *(unsigned __int16*)(result + 10));
  }
  return result;
}

float32x4_t* nn_g3d_5f80f0(float32x4_t* result, float32x4_t* a2, float a3,
                           double a4, double a5, double a6, double a7,
                           double a8)
{
  int32x2_t v8;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float v13;
  int8x16_t v14;
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
  int32x2_t v29;
  int32x2_t v30;
  float v31;
  int32x2_t v32;
  int32x2_t v33;
  int32x2_t v34;
  float v35;
  int32x2_t v36;
  float v37;
  float32x2_t v38;
  float v39;
  float32x2_t v40;
  int8x8_t v41;
  int8x8_t v42;
  int8x8_t v43;
  float v44;
  int8x8_t v45;
  float32x2_t v46;
  float v47;
  float v48;
  float32x2_t v49;
  float32x2_t v50;
  float v51;
  float v52;
  float v53;

  {
    v10 = LANES128(result[4]).n128_f32[1];
    __asm__ volatile("" ::"w"(v10));
  }
  if (v10 == 0x0.0p+0f) {
    result[2] = a2[2];
  }
  else {
    {
      v11 = a2[2];
      __asm__ volatile("" ::"w"(v11));
    }
    {
      v12 = result[2];
      __asm__ volatile("" ::"w"(v12));
    }
    v13 = a3 + v10;
    v14 = vmulq_f32(v11, v12);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    v15 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_f32[0];
    if (v15 < 0x0.0p+0f) {
      v16 = -v15;
    }
    else {
      v16 = v15;
    }
    if (v15 < 0x0.0p+0f) {
      v17 = -0x1.0000000000000p+0f;
    }
    else {
      v17 = 0x1.0000000000000p+0f;
    }
    v18 = sqrtf(0x1.0000000000000p+0f - (float)(v16 * v16));
    v19 = a3 / v13;
    if (v16 >= 0x0.0p+0f) {
      {
        v23 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v24));
      }
      {
        v25 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        __asm__ volatile("" ::"w"(v25));
      }
      v26 = v16 / v18;
      v27 = v18 / v16;
      v28 = 0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v26 *
                (float)((float)((float)((float)((float)(v25 +
                                                        (float)((float)((float)((float)(v24 + (float)((
                                                                                                          float)((float)((float)(v23 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v26 * v26)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v26 *
                                                                                                                                                       v26))) *
                                                                                                                         (float)(v26 *
                                                                                                                                 v26)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v26 *
                                                                                                              v26))) *
                                                                                (float)(v26 *
                                                                                        v26)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v26 *
                                                                        v26))) *
                                                (float)(v26 * v26)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v26 * v26)) +
                        0x1.0000000000000p+0f)));
      v21 =
          v27 *
          (float)((
                      float)((float)((float)((float)(v25 +
                                                     (float)((float)((float)((
                                                                                 float)(v24 + (float)((
                                                                                                          float)((float)((float)(v23 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v27 * v27)) - *((float*)GameData_212c2f0 + 1)) * (float)(v27 * v27))) * (float)(v27 * v27)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v27 *
                                                                                                              v27))) *
                                                                             (float)(v27 *
                                                                                     v27)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v27 *
                                                                     v27))) *
                                             (float)(v27 * v27)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v27 * v27)) +
                  0x1.0000000000000p+0f);
      if (v16 <= 0x1.6a09e60000000p-1f) {
        v21 = v28;
      }
    }
    else if (v16 >= -0x1.6a09e60000000p-1f) {
      v22 = (float)-v16 / v18;
      v21 =
          (float)(PSEUDO_UNFUSED(
              v22 * (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v22 *
                                                                                                                                                                                                                                                                                                                                                                                                v22))) *
                                                                                                                                                                                                                                                                                                       (float)(v22 *
                                                                                                                                                                                                                                                                                                               v22))) *
                                                                                                                                                                                                                                                                                    (float)(v22 *
                                                                                                                                                                                                                                                                                            v22))) *
                                                                                                                                                                                                                                                            (float)(v22 *
                                                                                                                                                                                                                                                                    v22))) *
                                                                                                                                                                         (float)(v22 *
                                                                                                                                                                                 v22))) *
                                                                          (float)(v22 *
                                                                                  v22))) *
                                                       (float)(v22 * v22))) *
                                    (float)(v22 * v22)) +
                            0x1.0000000000000p+0f))) +
          0x1.921fb60000000p+0f;
    }
    else {
      v20 = (float)-v18 / v16;
      v21 =
          0x1.921fb60000000p+1f -
          (float)(PSEUDO_UNFUSED(
              v20 * (float)((
                                float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12) - (float)((
                                                                                                                                           float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                                                                                     float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                              4) -
                                                                                                                                                                                                                                                    (float)((
                                                                                                                                                                                                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                                                                                                                  (float)((
                                                                                                                                                                                                                                                                                                                                                                              float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     (float)(v20 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             v20))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(v20 * v20))) *
                                                                                                                                                                                                                                                                                                                                                                          (float)(v20 *
                                                                                                                                                                                                                                                                                                                                                                                  v20))) *
                                                                                                                                                                                                                                                                                                                                                  (float)(v20 *
                                                                                                                                                                                                                                                                                                                                                          v20))) *
                                                                                                                                                                                                                                                            (float)(v20 * v20))) *
                                                                                                                                                                                                                                 (float)(v20 *
                                                                                                                                                                                                                                         v20))) *
                                                                                                                                       (float)(v20 *
                                                                                                                                               v20))) *
                                       (float)(v20 * v20)) +
                            0x1.0000000000000p+0f)));
    }
    LANES64(v29).n64_u64[0] = LANES64_OF(vdup_n_s32(0x3E22F983u)).n64_u64[0];
    LANES64(v30).n64_u64[0] = LANES64_OF(vdup_n_s32(0xC0C90FDB)).n64_u64[0];
    v31 = v21 +
          (float)(roundf(v21 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    LANES64(v32).n64_u64[0] = LANES64_OF(vdup_n_s32(0x3FC90FDBu)).n64_u64[0];
    LANES64(v33).n64_u64[0] = LANES64_OF(vdup_n_s32(0xBFC90FDB)).n64_u64[0];
    LANES64(v34).n64_u64[0] = LANES64_OF(vdup_n_s32(0xC0490FDB)).n64_u64[0];
    v35 = -0x1.921fb60000000p+1f - v31;
    LANES64(v36).n64_u64[0] = LANES64_OF(vdup_n_s32(0x40490FDBu)).n64_u64[0];
    if (v31 >= -0x1.921fb60000000p+0f) {
      v35 = v31;
    }
    if (v31 > 0x1.921fb60000000p+0f) {
      *(float*)&a8 = 0x1.921fb60000000p+1f - v31;
    }
    else {
      *(float*)&a8 = v35;
    }
    v37 = 0x1.0000000000000p+0f - v19;
    LANES64(v38).n64_f32[0] = 0x1.0000000000000p+0f - v19;
    LANES64(v38).n64_f32[1] = v19;
    v39 = v19 * v17;
    LANES64(v40).n64_u64[0] = LANES64_OF(vmul_n_f32(v38, v21)).n64_u64[0];
    LANES64(v38).n64_u32[0] = *(_DWORD*)GameData_212c190;
    PSEUDO_LOW_LANE64(v8, n64_u32, *((_DWORD*)GameData_212c190 + 1));
    LANES64(v41).n64_u64[0] =
        LANES64_OF(vmla_f32(v40, v30, vrndn_f32(vmul_f32(v40, v29))))
            .n64_u64[0];
    LANES64(v42).n64_u64[0] = LANES64_OF(vcgt_f32(v41, v32)).n64_u64[0];
    LANES64(v43).n64_u64[0] = LANES64_OF(vsub_f32(v36, v41)).n64_u64[0];
    {
      v44 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
      __asm__ volatile("" ::"w"(v44));
    }
    LANES64(v45).n64_u64[0] = LANES64_OF(vbsl_s8(v42, v43, v41)).n64_u64[0];
    PSEUDO_LOW_LANE64(
        v42, n64_u32,
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190));
    PSEUDO_LOW_LANE64(
        v43, n64_u32,
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4));
    LANES64(v46).n64_u64[0] =
        LANES64_OF(vbsl_s8(vcgt_f32(v33, v45), vsub_f32(v34, v45), v45))
            .n64_u64[0];
    v47 =
        *(float*)&a8 *
        (float)((float)((float)-(
                            float)(v44 -
                                   (float)((float)(LANES64(v43).n64_f32[0] +
                                                   (float)((float)-(
                                                               float)(LANES64(
                                                                          v42)
                                                                          .n64_f32
                                                                              [0] -
                                                                      (float)((float)(LANES64(
                                                                                          v8)
                                                                                          .n64_f32
                                                                                              [0] -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c190 *
                                                                                              (float)(*(float*)&a8 *
                                                                                                      *(float*)&a8))) *
                                                                              (float)(*(float*)&a8 *
                                                                                      *(float*)&a8))) *
                                                           (float)(*(float*)&a8 *
                                                                   *(float*)&a8))) *
                                           (float)(*(float*)&a8 *
                                                   *(float*)&a8))) *
                        (float)(*(float*)&a8 * *(float*)&a8)) +
                0x1.0000000000000p+0f);
    *(float*)&a8 = -LANES64(v42).n64_f32[0];
    PSEUDO_LOW_LANE64(v42, n64_f32, -v44);
    v48 = 0x1.0000000000000p+0f / v47;
    LANES64(v49).n64_u64[0] = LANES64_OF(vmul_f32(v46, v46)).n64_u64[0];
    LANES64(v50).n64_u64[0] =
        LANES64_OF(
            vmul_f32(
                v46,
                vmla_f32(
                    COERCE_AS(float32x2_t, 0x3F8000003F800000LL), v49,
                    vmla_f32(
                        vdup_lane_s32(v42, 0), v49,
                        vmla_f32(vdup_lane_s32(v43, 0), v49,
                                 vmla_f32(vdup_lane_s32(*(int32x2_t*)&a8, 0),
                                          v49,
                                          vmls_lane_f32(vdup_lane_s32(v8, 0),
                                                        v49, v38, 0)))))))
            .n64_u64[0];
    {
      v51 = v48 * LANES64(v50).n64_f32[0];
      __asm__ volatile("" ::"w"(v51));
    }
    v52 = v48 * vmuls_lane_f32(v17, v50, 1);
    if (v16 <= 0x1.fffeb00000000p-1f) {
      v53 = v51;
    }
    else {
      v53 = v37;
    }
    if (v16 > 0x1.fffeb00000000p-1f) {
      v52 = v39;
    }
    result[2] = vmlaq_n_f32(vmulq_n_f32(v12, v53), v11, v52);
  }
  return result;
}

#pragma GCC visibility pop
