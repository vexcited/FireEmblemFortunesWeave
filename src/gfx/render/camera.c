#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64 (*gfx_render_Camera_vtable[])();
float cosf(float);
float sinf(float);
long double Camera_b3ac00(__int64 a1);
float32x4_t Camera_b3bac0(__int64 a1);
int8x16_t Camera_b3bb60(__int64 a1);

long double Camera_b3ac00(__int64 a1)
{

#pragma clang fp contract(off)
  long double result;
  __int64* v2;
  __int64* v3;
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
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = (__int64*)GameData_212c2a0;
  v3 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(a1 + 80) = 1065353216;
  *(_QWORD*)(a1 + 88) = 0x100000000LL;
  *(_QWORD*)(a1 + 112) = 0x4110000041800000LL;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_QWORD*)(a1 + 96) = 0x4248000041D80000LL;
  *(_QWORD*)(a1 + 104) = 0x41C0000042100000LL;
  *(_QWORD*)a1 = gfx_render_Camera_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_OWORD*)(a1 + 16) = GameData_1a83090;
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2);
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 8);
  v6 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2);
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v2 + 8);
  *(_OWORD*)(a1 + 48) = GameData_1a83610;
  *(_WORD*)(a1 + 132) = 1;
  *(_QWORD*)(a1 + 124) = 0x447A00003DCCCCCDLL;
  *(_QWORD*)(a1 + 136) = 1092616192;
  v8 = *v2;
  v9 = v2[1];
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v2);
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v2);
  *(_QWORD*)(a1 + 176) = v4;
  *(_QWORD*)(a1 + 184) = v5;
  *(_QWORD*)(a1 + 192) = v6;
  *(_QWORD*)(a1 + 200) = v7;
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
  v14 = *v3;
  *(_QWORD*)(a1 + 160) = v8;
  *(_QWORD*)(a1 + 168) = v9;
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
  v15 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 208) = v11;
  *(_QWORD*)(a1 + 216) = v10;
  *(_QWORD*)(a1 + 288) = v14;
  *(_QWORD*)(a1 + 296) = v16;
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 240) = v15;
  *(_QWORD*)(a1 + 248) = v17;
  v19 = v3[1];
  v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  v20 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 224) = *v3;
  *(_QWORD*)(a1 + 232) = v19;
  v22 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 272) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  *(_QWORD*)(a1 + 280) = v12;
  v24 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  v23 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 16);
  v25 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 320) = v21;
  *(_QWORD*)(a1 + 328) = v22;
  *(_QWORD*)(a1 + 256) = v23;
  *(_QWORD*)(a1 + 264) = v20;
  *(_QWORD*)(a1 + 304) = v18;
  *(_QWORD*)(a1 + 312) = v24;
  *(_QWORD*)(a1 + 336) = v13;
  *(_QWORD*)(a1 + 344) = v25;
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

float32x4_t Camera_b3bac0(__int64 a1)
{
  float v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float32x4_t v6;
  float v8;

  v1 = *(float*)(a1 + 84) * 0x1.1df46a0000000p-6f;
  v2 = *(float*)(a1 + 88) * 0x1.1df46a0000000p-6f;
  v3 = sinf(v1);
  v4 = cosf(v1);
  v8 = sinf(v2);
  v5 = cosf(v2);
  LANES128(v6).n128_f32[0] = v3 * v5;
  LANES128(v6).n128_f32[1] = v8;
  LANES128(v6).n128_u64[1] = COERCE_UNSIGNED_INT(v4 * v5);
  return vsubq_f32(COERCE_AS(float32x4_t, 0), v6);
}

int8x16_t Camera_b3bb60(__int64 a1)
{
  int32x4_t v1;
  int8x16_t v2;
  int8x16_t v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int32x4_t v8;
  float32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;

  v1 = *(int32x4_t*)(a1 + 160);
  v2 = *(int8x16_t*)(a1 + 176);
  v3 = *(int8x16_t*)(a1 + 192);
  LANES128(v4).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v4).n128_i8[8] =
      vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v5).n128_i8[8] =
      vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v6 = vmulq_f32(vmulq_f32(v1, v4), v5);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v5).n128_i8[8] =
      vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v7).n128_i8[8] =
      vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v8 = vzip1q_s32(v1, v3);
  v9 = vmulq_f32(v1, v5);
  v10 = vzip2q_s32(v1, v3);
  v11 = vzip1q_s32(v2, COERCE_AS(int32x4_t, 0));
  v12 = vsubq_f32(v6, vmulq_f32(v9, v7));
  v13 = vzip2q_s32(v8, v11);
  v14 = vzip1q_s32(v10, vzip2q_s32(v2, COERCE_AS(int32x4_t, 0)));
  LANES128(v12).n128_u64[0] = LANES128_OF(vpaddq_f32(v12, v12)).n128_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v2).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v17 = LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  v18 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v12).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v12).n128_u64[0]), 1));
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v2).n128_u64[1] = v17;
  v19 = vrecpeq_f32(v18);
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v20 = vzip1q_s32(v8, v11);
  LANES128(v4).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v22 = vmulq_f32(v19, vrecpsq_f32(v19, v18));
  *(int8x8_t*)&LANES128(v4).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v23 = vmulq_f32(v22, vnegq_f32(vrecpsq_f32(v22, v18)));
  return vbicq_s8(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(
                  vmulq_f32(v23, vmlsq_f32(vmulq_f32(v15, v2), v14, v16)),
                  COERCE_FLOAT(*(_OWORD*)(a1 + 208))),
              vmulq_f32(v23, vmlsq_f32(vmulq_f32(v16, v4), v2, v21)),
              *(float32x2_t*)(a1 + 208), 1),
          vmulq_f32(v23, vmlsq_f32(vmulq_f32(v14, v21), v4, v15)),
          *(float32x4_t*)(a1 + 208), 2),
      vceqzq_f32(v18));
}

#pragma GCC visibility pop
