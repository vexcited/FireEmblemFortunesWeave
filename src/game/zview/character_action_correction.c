#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_220b6f0;
bool game_zview_CharacterActionCorrection_SerchHitbox_Target_lambda0_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
extern __int64 GameData_212dc38[7];
float atan2f(long double, float);
float fmodf(float, float);
void __attribute__((noreturn)) GameRoutine_60a310();
unsigned __int64 CharacterActionCorrection_e1fda0(__int64 a1,
                                                  unsigned __int64** a2,
                                                  float32x4_t* a3, float a4,
                                                  float a5);

unsigned __int64 CharacterActionCorrection_e1fda0(__int64 a1,
                                                  unsigned __int64** a2,
                                                  float32x4_t* a3, float a4,
                                                  float a5)
{
  unsigned __int64* v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  char v13;
  float v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  float32x4_t v18;
  int8x16_t v19;
  int8x16_t v20;
  int8x16_t v21;
  unsigned int v22;
  int8x16_t v23;
  int8x16_t v24;
  unsigned int v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  int8x16_t* v31;
  __int64 v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  unsigned int v36;
  int8x16_t v37;
  int8x16_t v38;
  unsigned int v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int8x16_t v47;
  float v48;
  float v49;
  float v50;
  float32x4_t v52;
  float v53;
  _BYTE v54[240];
  struct {
    float32x4_t v55;
    int v56;
  } v55_;

  GameRoutine_edf510((void*)((__int64)v54),
                     *(_QWORD*)GameData_212dc38[0] + 16LL);
  v10 = *a2;
  v11 = a2[1];
  if (*a2 == v11) {
    return 0;
  }
  v12 = 0;
  v13 = 0;
  v14 = 0x0.0p+0f;
  do {
    v15 = *(_QWORD*)(a1 + 32);
    LANES128(v55_.v55).n128_u64[0] = *v10;
    if (v15 == 0) {
      GameRoutine_60a310();
    }
    if (((*(__int64 (**)(__int64, float32x4_t*))(*(_QWORD*)v15 + 48LL))(
             v15, &v55_.v55) &
         1) != 0) {
      v16 = *v10;
      v17 = *(_QWORD*)(*v10 + 168);
      if (v17 != 0) {
        v18 = *(float32x4_t*)(*(_QWORD*)(v17 + 8) + 304LL);
        v19 = vaddq_f32(v18, *(float32x4_t*)(v16 + 80));
        v20 = vaddq_f32(v18, *(float32x4_t*)(v16 + 96));
        LANES128(v19).n128_u32[3] = 0;
        LANES128(v20).n128_u32[3] = 0;
      }
      else {
        v20 = (__typeof__(v20)){0};
        v19 = (__typeof__(v19)){0};
      }
      v21 = *(int8x16_t*)(v16 + 16);
      LANES128(v21).n128_u32[3] = 0;
      v22 = *(_BYTE*)(v16 + 32) != 0 ? -1 : 0;
      v23 = vbslq_s8(vdupq_n_s32(v22), v21, v19);
      v24 = *(int8x16_t*)(v16 + 48);
      v25 = *(_BYTE*)(v16 + 64) != 0 ? -1 : 0;
      LANES128(v24).n128_u32[3] = 0;
      v26 = vaddq_f32(v23, vbslq_s8(vdupq_n_s32(v25), v24, v20));
      LANES128(v27).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v27).n128_u64[1] = 0x3F0000003F000000LL;
      v28 = vsubq_f32(vmulq_f32(v26, v27), *a3);
      if (fabsf(LANES128(v28).n128_f32[1]) <= 0x1.cccccc0000000p+0f) {
        v29 = LANES128(*(a3)).n128_u64[0];
        v30 = LANES128(*(a3)).n128_u64[1];
        v52 = v28;
        v55_.v56 = 1056964608;
        LANES128(v55_.v55).n128_u64[0] = v29;
        LANES128(v55_.v55).n128_u64[1] = v30;
        if (nn_g3d_5eb5c0((__int64)v54, &v55_.v55)) {
          v31 = (int8x16_t*)*v10;
          v32 = *(_QWORD*)(*v10 + 168);
          if (v32 != 0) {
            v33 = *(float32x4_t*)(*(_QWORD*)(v32 + 8) + 304LL);
            v34 = vaddq_f32(v33, v31[5]);
            v35 = vaddq_f32(v33, v31[6]);
            LANES128(v34).n128_u32[3] = 0;
            LANES128(v35).n128_u32[3] = 0;
          }
          else {
            v35 = (__typeof__(v35)){0};
            v34 = (__typeof__(v34)){0};
          }
          if (LANES128(v31[2]).n128_u8[0] != 0) {
            v36 = -1;
          }
          else {
            v36 = 0;
          }
          v37 = vbslq_s8(vdupq_n_s32(v36), v31[1], v34);
          v38 = v31[3];
          if (LANES128(v31[4]).n128_u8[0] != 0) {
            v39 = -1;
          }
          else {
            v39 = 0;
          }
          v40 = vaddq_f32(v37, vbslq_s8(vdupq_n_s32(v39), v38, v35));
          LANES128(v41).n128_u64[0] = 0x3F0000003F000000LL;
          LANES128(v41).n128_u64[1] = 0x3F0000003F000000LL;
          v42 = vsubq_f32(vmulq_f32(v40, v41), *a3);
          v43 = LANES128(v42).n128_f32[2];
          v44 = vmuls_lane_f32(LANES128(v42).n128_f32[2], v42, 2) +
                (float)(LANES128(v42).n128_f32[0] * LANES128(v42).n128_f32[0]);
          v45 = a4;
          if (v44 > 0x0.0p+0f) {
            if (LANES128(v42).n128_f32[0] != 0x0.0p+0f ||
                LANES128(v42).n128_f32[2] != 0x0.0p+0f) {
              v46 = sqrtf(v44);
              LANES128(v42).n128_f32[0] = LANES128(v42).n128_f32[0] / v46;
              v43 = LANES128(v42).n128_f32[2] / v46;
            }
            v45 = atan2f(*(long double*)&v42, v43);
          }
          v47 = vmulq_f32(v52, v52);
          LANES128(v47).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                  .n64_u64[0];
          LODWORD(v53) =
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]))))
                  .n64_u32[0];
          v48 = fmodf(a4 - v45, 0x1.921fb60000000p+2f);
          if (v48 >= 0x0.0p+0f) {
            v49 = v48 + 0x0.0p+0f;
          }
          else {
            v49 = (float)(v48 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
          }
          if (v49 > 0x1.921fb60000000p+1f) {
            v49 = v49 + -0x1.921fb60000000p+2f;
          }
          if (((unsigned __int8)v13 &
               (v53 > (float)(v14 + 0x1.0000000000000p-1f))) != 0) {
            v13 = 1;
          }
          else {
            v50 = fabsf(v49);
            if (v50 < a5) {
              v12 = *v10;
              a5 = v50;
              v13 = 1;
              v14 = v53;
            }
          }
        }
      }
    }
    ++v10;
  } while (v10 != v11);
  return v12;
}

bool game_zview_CharacterActionCorrection_SerchHitbox_Target_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  int v8;
  int v9;
  __int64* v11;
  __int64* v12;
  int v13;
  __int64 v14;
  __int64 v15;

  v2 = *a2;
  if (*a2 == 0) {
    goto LABEL_22;
  }
  v3 = *(unsigned __int8**)(v2 + 184);
  v4 = *(unsigned __int8**)(v2 + 192);
  if (v3 != v4) {
    while (1) {
      v5 = *v3;
      v6 = *((_QWORD*)v3 + 1);
      if ((v5 & 1) == 0) {
        v6 = v5 >> 1;
      }
      if (v6 == 6) {
        v7 = (v5 & 1) != 0 ? *((unsigned __int8**)v3 + 2) : v3 + 1;
        v8 = *(_DWORD*)v7;
        v9 = *((unsigned __int16*)v7 + 2);
        if (*(_DWORD*)"MakeId" == v8 && *(unsigned __int16*)"Id" == v9) {
          break;
        }
      }
      v3 += 160;
      if (v3 == v4) {
        goto LABEL_22;
      }
    }
  }
  if (v3 == v4 || *((_DWORD*)v3 + 36) != 3 ||
      (v11 = *(__int64**)(GameData_220b6f0 + 8),
       v12 = *(__int64**)(GameData_220b6f0 + 16), v11 == v12)) {
  LABEL_22:
    v14 = 0;
  }
  else {
    v13 = *((_DWORD*)v3 + 12);
    while (1) {
      v15 = *v11;
      v11 += 2;
      v14 = v15;
      if (*(_DWORD*)(v15 + 184) == v13) {
        break;
      }
      if (v11 == v12) {
        goto LABEL_22;
      }
    }
  }
  return v14 == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
