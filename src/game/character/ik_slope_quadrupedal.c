#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeQuadrupedal_vtable[])();
__n128 IKSlopeQuadrupedal_Destructor(__int64 a1);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
math_Mtx43_MakeRotation_alt1(PSEUDO_X8,
                             float32x4_t*) __asm__("math_Mtx43_MakeRotation");
extern __int64 GameData_212d270;
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda2_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda4_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void game_109f820(PSEUDO_X8, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_200e148[])();
extern __int64 (*GameData_200e1c8[])();
extern __int64 (*GameData_200e248[])();
extern __int64 (*GameData_200e2c8[])();
extern __int64 (*GameData_200e348[])();
extern int* GameData_212df08;
void game_109d2e0(__int64, __int64, __int64, __int64, int);
void game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal(__int64 a1,
                                                          _QWORD* a2,
                                                          __int64 a3,
                                                          __int64 a4);

void game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal(__int64 a1,
                                                          _QWORD* a2,
                                                          __int64 a3,
                                                          __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 explicit;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int8 v19;
  unsigned int v20;
  float32x4_t v21;
  __int128 v22;
  __int128 v23;
  unsigned int v24;
  float32x4_t v25;
  __int128 v26;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;
  struct {
    float32x4_t v39[4];
    unsigned __int8 v40;
  } v39_;
  struct {
    float32x4_t v41[3];
    __int64 v42;
    unsigned int v43;
    char gap188_[4];
    unsigned __int8 v44;
  } v41_;
  struct {
    float32x4_t v45[4];
    char v46;
  } v45_;
  struct {
    float32x4_t v47[3];
    __int64 v48;
    unsigned int v49;
    char gap348_[4];
    char v50;
  } v47_;

  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = a4;
  *(_QWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_WORD*)(a1 + 16) = 256;
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)a1 = game_character_IKSlopeQuadrupedal_vtable;
  *(_QWORD*)(a1 + 8) = a3;
  *(_DWORD*)(a1 + 240) = -1;
  v7 = a1 + 240;
  *(_DWORD*)(a1 + 64) = -1;
  v8 = a1 + 64;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_DWORD*)(a1 + 272) = -1;
  v9 = a1 + 272;
  *(_QWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 304) = -1;
  v10 = a1 + 304;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_DWORD*)(a1 + 336) = -1;
  v11 = a1 + 336;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  v12 = a2[56];
  if (v12 != 0 || (v12 = a2[51]) != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v14 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
      *v14 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
    }
    v15 = *(_QWORD*)(v12 + 512);
    v16 = v15;
    do {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
    } while (v17 != *v14);
    v18 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 24LL);
    game_109f820((void*)(v47_.v47), v18, (__int64)"Jnt_L_Arm3");
    if ((v47_.v50 & 1) == 0) {
      game_109f820((void*)(v47_.v47), v18, (__int64)"Jnt_L_Hand");
    }
    game_109f820((void*)(v45_.v45), v18, (__int64)"Jnt_R_Arm3");
    if ((v45_.v46 & 1) == 0) {
      game_109f820((void*)(v45_.v45), v18, (__int64)"Jnt_R_Hand");
    }
    game_109f820((void*)(v41_.v41), v18, (__int64)"Jnt_L_Foot");
    if ((v41_.v44 & 1) == 0) {
      LANES128(v41_.v41[0]).n128_u8[0] = 0;
      v41_.v44 = 0;
    }
    game_109f820((void*)(v39_.v39), v18, (__int64)"Jnt_R_Foot");
    v19 = v39_.v40;
    if ((v39_.v40 & 1) == 0) {
      LANES128(v39_.v39[0]).n128_u8[0] = 0;
      v39_.v40 = 0;
    }
    if (v47_.v50 == 1 && (v45_.v46 & 1) != 0 && (v41_.v44 & v19) != 0) {
      v20 = v47_.v49;
      v21 = v45_.v45[3];
      *(_QWORD*)(a1 + 112) = v47_.v48;
      *(_QWORD*)(a1 + 128) = LANES128(v21).n128_u64[0];
      v22 = *(_OWORD*)(a1 + 112);
      v23 = *(_OWORD*)(a1 + 128);
      *((_QWORD*)&v22 + 1) = v20;
      *((_QWORD*)&v23 + 1) = LANES128(v21).n128_u32[2];
      v24 = v41_.v43;
      v25 = v39_.v39[3];
      *(_QWORD*)(a1 + 144) = v41_.v42;
      *(_QWORD*)(a1 + 160) = LANES128(v25).n128_u64[0];
      *(_OWORD*)(a1 + 112) = v22;
      *(_OWORD*)(a1 + 128) = v23;
      v26 = *(_OWORD*)(a1 + 144);
      v27 = *(_OWORD*)(a1 + 160);
      *(_DWORD*)(a1 + 116) = 0;
      *(_DWORD*)(a1 + 132) = 0;
      *((_QWORD*)&v26 + 1) = v24;
      *((_QWORD*)&v27 + 1) = LANES128(v25).n128_u32[2];
      *(_OWORD*)(a1 + 144) = v26;
      *(_OWORD*)(a1 + 160) = v27;
      *(_DWORD*)(a1 + 148) = 0;
      *(_DWORD*)(a1 + 164) = 0;
      if (a4 != 0 && *(_QWORD*)(a4 + 88) - *(_QWORD*)(a4 + 80) == 768) {
        v28 = a2[49];
        v29 = a2[50];
        if (v29 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                    memory_order_relaxed);
          v30 = *(_DWORD*)(v28 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            std___1___shared_weak_count___release_weak(v29);
          }
        }
        else {
          v30 = *(_DWORD*)(v28 + 11784);
        }
        if (a2[56] == 0 || (v30 & 0xFFFFFFFE) != 2) {
          goto LABEL_50;
        }
        v37_.v37[0] = GameData_200e148;
        v37_.v37[1] = a1;
        v37_.v38 = v37_.v37;
        game_109d2e0(v7, v12, (__int64)"Jnt_L_Arm1", (__int64)v37_.v37, 0);
        if (v37_.v38 == v37_.v37) {
          v31 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
            goto LABEL_30;
          }
          v31 = 40;
        }
        (*(void (**)(__int64))(*v37_.v38 + v31))((__int64)v37_.v38);
      LABEL_30:
        v37_.v37[0] = GameData_200e1c8;
        v37_.v37[1] = a1;
        v37_.v38 = v37_.v37;
        game_109d2e0(v9, v12, (__int64)"Jnt_R_Arm1", (__int64)v37_.v37, 0);
        if (v37_.v38 == v37_.v37) {
          v32 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
            goto LABEL_35;
          }
          v32 = 40;
        }
        (*(void (**)(__int64))(*v37_.v38 + v32))((__int64)v37_.v38);
      LABEL_35:
        v37_.v37[0] = GameData_200e248;
        v37_.v37[1] = a1;
        v37_.v38 = v37_.v37;
        game_109d2e0(v10, v12, (__int64)"Jnt_L_Leg1", (__int64)v37_.v37, 0);
        if (v37_.v38 == v37_.v37) {
          v33 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
            goto LABEL_40;
          }
          v33 = 40;
        }
        (*(void (**)(__int64))(*v37_.v38 + v33))((__int64)v37_.v38);
      LABEL_40:
        v37_.v37[0] = GameData_200e2c8;
        v37_.v37[1] = a1;
        v37_.v38 = v37_.v37;
        game_109d2e0(v11, v12, (__int64)"Jnt_R_Leg1", (__int64)v37_.v37, 0);
        if (v37_.v38 == v37_.v37) {
          v34 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
            goto LABEL_45;
          }
          v34 = 40;
        }
        (*(void (**)(__int64))(*v37_.v38 + v34))((__int64)v37_.v38);
      LABEL_45:
        v35 = a2[51];
        v37_.v37[0] = GameData_200e348;
        v37_.v37[1] = a1;
        v37_.v38 = v37_.v37;
        game_109d2e0(v8, v35, (__int64)"Jnt_C_Spine1", (__int64)v37_.v37, 0);
        if (v37_.v38 == v37_.v37) {
          v36 = 32;
        }
        else {
          if (v37_.v38 == nullptr) {
          LABEL_50:
            *(_BYTE*)(a1 + 16) = 1;
            return;
          }
          v36 = 40;
        }
        (*(void (**)(__int64))(*v37_.v38 + v36))((__int64)v37_.v38);
        goto LABEL_50;
      }
    }
  }
}

__n128 IKSlopeQuadrupedal_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;

  *(_QWORD*)a1 = game_character_IKSlopeQuadrupedal_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 336));
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 304));
  v3 = *(_QWORD*)(a1 + 328);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 272));
  v4 = *(_QWORD*)(a1 + 296);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 240));
  v5 = *(_QWORD*)(a1 + 264);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 64));
  v7 = *(_QWORD*)(a1 + 88);
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda0_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda1_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda2_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda3_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t result;
  float32x4_t* v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(result).n128_f32[0] = fabsf(*(float*)(v5 + 48));
    if (LANES128(result).n128_f32[0] >= 0x1.0624de0000000p-10f) {
      v22 = v3;
      v23 = v4;
      **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
      v7 = *(float32x4_t**)a3;
      *(_QWORD*)&v8 = 0;
      *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
          -(float)(*(float*)(v5 + 48) *
                   *(float*)(*(_QWORD*)GameData_212d270 + 280LL)));
      v17 = v8;
      math_Mtx43_MakeRotation((void*)(&v18), &v17);
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      v12 = v20;
      v13 = v21;
      v14 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v19).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
          v10, v19, 2);
      v15 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v21).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
      v16 =
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v20).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
      *v7 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          v10, v18, 2);
      v7[1] = v14;
      result = vaddq_f32(v11, vmlaq_laneq_f32(v15, v10, v13, 2));
      v7[2] = vmlaq_laneq_f32(v16, v10, v12, 2);
      v7[3] = result;
    }
  }
  return result;
}

float32x4_t game_character_IKSlopeQuadrupedal_IKSlopeQuadrupedal_lambda4_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  float32x4_t v6;
  float32x4_t* v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t result;
  float32x4_t v17;
  struct {
    float32x4_t v18;
    float32x4_t v19;
    float32x4_t v20;
    float32x4_t v21;
  } v18_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v5 + 8) == 0) {
    LANES128(v6).n128_u64[0] = 0;
    LANES128(v6).n128_u32[3] = 0;
    **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
    LANES128(v6).n128_u32[2] = *(_DWORD*)(v5 + 96);
    v7 = *(float32x4_t**)a3;
    v17 = v6;
    math_Mtx43_MakeRotation_alt1((void*)(&v18_.v18), &v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    v11 = v18_.v20;
    v12 = v18_.v21;
    v13 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v19).n128_f32[0]), v8,
                       COERCE_AS(float32x2_t, LANES128(v18_.v19).n128_u64[0]),
                       1),
        v9, v18_.v19, 2);
    v14 = vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v21).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v18_.v21).n128_u64[0]),
                         1);
    v15 = vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v20).n128_f32[0]), v8,
                         COERCE_AS(float32x2_t, LANES128(v18_.v20).n128_u64[0]),
                         1);
    *v7 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v7, LANES128(v18_.v18).n128_f32[0]), v8,
                       COERCE_AS(float32x2_t, LANES128(v18_.v18).n128_u64[0]),
                       1),
        v9, v18_.v18, 2);
    v7[1] = v13;
    result = vaddq_f32(v10, vmlaq_laneq_f32(v14, v9, v12, 2));
    v7[2] = vmlaq_laneq_f32(v15, v9, v11, 2);
    v7[3] = result;
  }
  return result;
}

#pragma GCC visibility pop
