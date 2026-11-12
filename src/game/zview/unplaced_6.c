#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* GameRoutine_cf32c0(__int64* result, __int64*, __int64*);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82a80;
extern __int128 GameData_1a83800;
extern __int64 GameData_220b6f0;
void __attribute__((noreturn)) GameRoutine_8123d0();
__int64* game_zview_cf33a0(__int64* a1, __int64* a2, __int64* a3, __int64* a4);
__attribute__((swiftcall)) void game_zview_d33ac0(PSEUDO_X8 x8_, _QWORD* result,
                                                  unsigned int a2, _QWORD* a3,
                                                  _DWORD* a4, _BYTE* a5);

__int64* game_zview_cf33a0(__int64* a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  result = GameRoutine_cf32c0(a1, a2, a3);
  v9 = *a4;
  if ((*(_BYTE*)(*a4 + 456) & 1) != 0) {
    v10 = *a3;
    if ((*(_BYTE*)(*a3 + 456) & 1) != 0) {
      if (*(float*)(v9 + 452) >= *(float*)(v10 + 452)) {
        return result;
      }
      *a3 = v9;
      *a4 = v10;
      v11 = *a3;
      if ((*(_BYTE*)(*a3 + 456) & 1) != 0) {
        v12 = *a2;
        if ((*(_BYTE*)(*a2 + 456) & 1) != 0) {
          if (*(float*)(v11 + 452) >= *(float*)(v12 + 452)) {
            return result;
          }
          *a2 = v11;
          *a3 = v12;
          v13 = *a2;
          if ((*(_BYTE*)(*a2 + 456) & 1) != 0) {
            v14 = *a1;
            if ((*(_BYTE*)(*a1 + 456) & 1) != 0) {
              if (*(float*)(v13 + 452) < *(float*)(v14 + 452)) {
                *a1 = v13;
                *a2 = v14;
              }
              return result;
            }
          }
        }
      }
    }
  }
  GameRoutine_8123d0();
}

__attribute__((swiftcall)) void game_zview_d33ac0(PSEUDO_X8 x8_, _QWORD* result,
                                                  unsigned int a2, _QWORD* a3,
                                                  _DWORD* a4, _BYTE* a5)
{
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  int v8;
  __int64 v9;
  float32x4_t* v10;
  __int128 v11;
  float32x4_t v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int128 v16;
  __int64 v17;
  float32x4_t v18;
  int8x16_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  unsigned __int64 v35;
  float32x4_t v36;
  int8x16_t v37;

  v6 = &result[10 * a2];
  if ((v6[12] & 1) == 0) {
    *(_BYTE*)a6 = 0;
    *(_BYTE*)(a6 + 64) = 0;
    return;
  }
  v8 = *((_DWORD*)v6 + 8);
  v7 = v6 + 4;
  *a4 = v8;
  *a5 = *((_BYTE*)v7 + 4);
  if (*((_BYTE*)v7 + 5) == 1) {
    v9 = *(_QWORD*)(GameData_220b6f0 + 56);
    if (v9 != 0) {
      goto LABEL_4;
    }
  }
  if (*((_BYTE*)v7 + 12) == 1) {
    v13 = *(__int64**)(GameData_220b6f0 + 8);
    v14 = *(__int64**)(GameData_220b6f0 + 16);
    if (v13 != v14) {
      while (1) {
        v15 = *v13;
        v13 += 2;
        v9 = v15;
        if (*(_DWORD*)(v15 + 184) == *((_DWORD*)v7 + 2)) {
          break;
        }
        if (v13 == v14) {
          goto LABEL_11;
        }
      }
    LABEL_4:
      *a3 = v9;
      v10 = *(float32x4_t**)(*(_QWORD*)(v9 + 8) + 240LL);
      v11 = *(_OWORD*)(*(_QWORD*)(v9 + 16) + 560LL);
      HIDWORD(v11) = 0;
      if (v10 != nullptr) {
        v12 = v10[3];
      }
      else {
        LODWORD(v35) = 0;
        *((float*)&v35 + 1) = *(float*)(v9 + 544) * 0x1.99999a0000000p-1f;
        v12 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v9 + 16) + 560LL),
                        COERCE_AS(float32x4_t, v35));
      }
      LANES128(v12).n128_u32[3] = 0;
      *(_QWORD*)a6 = v9;
      *(_OWORD*)(a6 + 16) = v11;
      *(float32x4_t*)(a6 + 32) = v12;
      goto LABEL_17;
    }
  }
LABEL_11:
  if (*((_BYTE*)v7 + 32) == 1) {
    v16 = *((_OWORD*)v7 + 1);
    *(_QWORD*)a6 = 0;
    HIDWORD(v16) = 0;
    *(_OWORD*)(a6 + 16) = v16;
    *(_OWORD*)(a6 + 32) = v16;
  LABEL_17:
    *(_DWORD*)(a6 + 48) = 1065353216;
    *(_BYTE*)(a6 + 64) = 1;
    return;
  }
  if (*((_BYTE*)v7 + 52) == 1) {
    v17 = result[1];
    LANES128(v18).n128_u32[0] = 0;
    LANES128(v18).n128_u32[3] = 0;
    *(unsigned __int64*)((char*)LANES128(v18).n128_u64 + 4) =
        *(unsigned int*)(v17 + 560);
    v36 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v17 + 16) + 560LL), v18);
    math_Quat_FromYawPitchRoll((void*)(&v37), *((float*)v7 + 12), 0x0.0p+0f,
                               0x0.0p+0f);
    v20 = v37;
    LANES128(v21).n128_u64[0] = 0;
    *(_QWORD*)a6 = 0;
    v22 = vmulq_f32(v20, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
    LANES128(v25).n128_u64[1] = LANES128(v24).n128_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v26 = vmulq_f32(v21, v25);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82a80),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v27).n128_u64[0];
    *(int32x2_t*)&LANES128(v27).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
    v28 = vmlaq_f32(vmlaq_f32(vmulq_f32(v22, v23),
                              COERCE_AS(float32x4_t, GameData_1a83800), v26),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v27, v21));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(_DWORD*)(a6 + 48) = 1065353216;
    *(_BYTE*)(a6 + 64) = 1;
    *(int8x8_t*)&LANES128(v27).n128_i8[8] =
        vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
    v29 = vmlsq_f32(v28, v27, v24);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v31).n128_u64[0] = LANES128(v20).n128_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v31).n128_u64[1] = LANES128(v27).n128_u64[0];
    *(int8x8_t*)&LANES128(v30).n128_i8[8] =
        vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v32).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]), 1);
    v33 =
        vmlaq_f32(vmulq_f32(v22, v29), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v31, v30));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v30).n128_u64[0];
    LANES128(v30).n128_u64[1] = LANES128(v20).n128_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v20).n128_i8[8] =
        vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v34 = vaddq_f32(
        v36, vmlsq_f32(vmlaq_f32(v33, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v30, v32)),
                       v20, v27));
    LANES128(v34).n128_u32[3] = 0;
    *(float32x4_t*)(a6 + 16) = v34;
    *(float32x4_t*)(a6 + 32) = v34;
  }
  else {
    *(_BYTE*)a6 = 0;
    *(_BYTE*)(a6 + 64) = 0;
  }
}

#pragma GCC visibility pop
