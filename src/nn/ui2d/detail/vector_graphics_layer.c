#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_59f870(__int64, unsigned int, __int64);
__int64 GameRoutine_5a71e0(__int64 result, __int64, __int64, int, int,
                           unsigned __int16*);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
__int64 VectorGraphicsLayer_Unknown8(__int64 a1, __int64 a2);
_QWORD* VectorGraphicsLayer_Unknown2(_QWORD* result, __int64 a2, __int64 a3,
                                     int a4, int a5);
__int64 VectorGraphicsLayer_Unknown3(__int64 a1, __int64 a2);
__int64 VectorGraphicsLayer_5a80e0(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4);
__int64 VectorGraphicsLayer_5a8160(_QWORD* a1, __int64 a2);
__int64 nn_ui2d_detail_5a7540(__int64 result, __int64, float32x4_t*,
                              float32x4_t*, float);
float nn_ui2d_5a3700(unsigned __int16*, float);
float32x4_t nn_ui2d_detail_5a8380(float, __int64, float32x4_t*,
                                  unsigned __int16*);
void VectorGraphicsLayer_Unknown6_alt1(
    __int64 a1, __int64 a2, float32x4_t* a3,
    float a4) __asm__("VectorGraphicsLayer_Unknown6");
float nn_ui2d_5a3700_alt1(unsigned __int16*,
                          long double) __asm__("nn_ui2d_5a3700");
float32x4_t
nn_ui2d_detail_5a8380_alt1(long double, __int64, float32x4_t*,
                           unsigned __int16*) __asm__("nn_ui2d_detail_5a8380");
void VectorGraphicsLayer_Unknown6(__int64 a1, __int64 a2, float32x4_t* a3,
                                  long double a4);

__int64 VectorGraphicsLayer_Unknown8(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;

  if (*(int*)(a1 + 80) < 1) {
    return 0;
  }
  v4 = 0;
  v5 = 0;
  do {
    v6 = GameRoutine_59f870(a2, 0x10u, 64) + v5;
    v5 = v6 + GameRoutine_59f870(a2, 0x10u, 16);
    ++v4;
  } while (v4 < *(_DWORD*)(a1 + 80));
  return v5;
}

_QWORD* VectorGraphicsLayer_Unknown2(_QWORD* result, __int64 a2, __int64 a3,
                                     int a4, int a5)
{
  __int64 v5;
  _OWORD* v6;
  __int64 v7;
  __int64 v8;

  v5 = result[17];
  v6 = (_OWORD*)((*(_QWORD*)(v5 + 16) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD*)(v5 + 16) = v6 + 3;
  result[4] = v6;
  *v6 = GameData_1a82dd0;
  v6[1] = GameData_1a83610;
  v6[2] = GameData_1a83090;
  v7 = result[6];
  if (v7 != 0) {
    v8 = result[5];
    if ((*(_BYTE*)(v8 + 145) & 2) != 0) {
      return (_QWORD*)GameRoutine_5a71e0(
          (__int64)(result + 8), a2, a3, a4, a5,
          (unsigned __int16*)(*(_QWORD*)(v7 + 160) +
                              16LL * *(unsigned __int16*)(v8 + 146)));
    }
  }
  return result;
}

__int64 VectorGraphicsLayer_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(int*)(a1 + 80) >= 1) {
    v4 = 8;
    v5 = 0;
    do {
      (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 88) + v4) + 24LL))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v4));
      (***(void (****)(_QWORD))(*(_QWORD*)(a1 + 88) + v4))(
          *(_QWORD*)(*(_QWORD*)(a1 + 88) + v4));
      ++v5;
      v4 += 40;
    } while (v5 < *(int*)(a1 + 80));
    *(_QWORD*)(a1 + 88) = 0;
    *(_QWORD*)(a1 + 96) = 0;
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 24LL))(
        result, a2);
    *(_QWORD*)(a1 + 64) = 0;
  }
  *(_QWORD*)(a1 + 32) = 0;
  v7 = a1 + 144;
  v8 = *(_QWORD*)(a1 + 152);
  if (v8 != v7) {
    do {
      v10 = *(_QWORD*)(v8 - 8);
      v9 = v8 - 8;
      v11 = *(_QWORD*)(v9 + 16);
      (*(void (**)(__int64, __int64))(v10 + 24))(v9, a2);
      result = (**(__int64 (***)(__int64))v9)(v9);
      v8 = v11;
    } while (v11 != v7);
  }
  return result;
}

__int64 VectorGraphicsLayer_5a80e0(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  __int64 result;
  _QWORD* v9;
  _QWORD* i;
  _QWORD* v11;
  __int64 v12;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 72LL))(a1);
  v9 = a1 + 18;
  for (i = (_QWORD*)a1[19]; i != v9; i = (_QWORD*)v11[2]) {
    v12 = *(i - 1);
    v11 = i - 1;
    result = (*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(v12 + 32))(
        v11, a2, a3, a4);
  }
  return result;
}

__int64 VectorGraphicsLayer_5a8160(_QWORD* a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  _QWORD* i;
  _QWORD* v7;
  __int64 v8;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 80LL))(a1);
  v5 = a1 + 18;
  for (i = (_QWORD*)a1[19]; i != v5; i = (_QWORD*)v7[2]) {
    v8 = *(i - 1);
    v7 = i - 1;
    result = (*(__int64 (**)(_QWORD*, __int64))(v8 + 40))(v7, a2);
  }
  return result;
}

void VectorGraphicsLayer_Unknown6(__int64 a1, __int64 a2, float32x4_t* a3,
                                  long double a4)
{
  __int64 v4;
  float v5;
  long double v9;
  float v10;
  __int64 v11;
  float32x4_t* v12;
  float32x2_t* v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  __int128 v18;
  float32x4_t v19;
  int v20;
  float32x4_t v21;
  float32x4_t v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64 v26;
  struct {
    float32x4_t v27;
    float32x4_t v28;
    float32x4_t v29;
  } v27_;

  v4 = *(_QWORD*)(a1 + 40);
  v5 = *(float*)&a4;
  if (v4 != 0) {
    if (*(float*)&a4 < *(float*)(v4 + 124) ||
        *(float*)&a4 >= *(float*)(v4 + 128)) {
      *(_BYTE*)(a1 + 28) = 0;
      return;
    }
    v27_.v29 = (__typeof__(v27_.v29)){0};
    v27_.v28 = (__typeof__(v27_.v28)){0};
    v27_.v27 = (__typeof__(v27_.v27)){0};
    *(_BYTE*)(a1 + 28) = 1;
    *(float32x4_t*)&v9 = nn_ui2d_detail_5a8380_alt1(
        a4, a1, &v27_.v27, (unsigned __int16*)(v4 + 8));
    *(float*)&v9 = v5;
    v10 = nn_ui2d_5a3700_alt1((unsigned __int16*)(*(_QWORD*)(a1 + 40) + 104LL),
                              v9);
    v11 = *(_QWORD*)(a1 + 56);
    v12 = *(float32x4_t**)(a1 + 32);
    if (v11 != 0) {
      v13 = *(float32x2_t**)(v11 + 32);
      v14 = 0;
      DWORD3(v18) = 0;
      v15 = 0;
      v16 = 0;
      v17 = DWORD3(*(_OWORD*)LANES64(*(v13)).n64_u64);
      *(_QWORD*)&v18 = (unsigned int)DWORD3(*(_OWORD*)LANES64(v13[4]).n64_u64);
      v19 = vaddq_f32(
          *(float32x4_t*)(&v14 - 1),
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v27_.v27,
                              COERCE_FLOAT(*(_OWORD*)LANES64(*(v13)).n64_u64)),
                  v27_.v28, COERCE_AS(float32x2_t, LANES64(*(v13)).n64_u64[0]),
                  1),
              v27_.v29, *(float32x4_t*)LANES64(*(v13)).n64_u64, 2));
      *(_QWORD*)((char*)&v18 + 4) = 0;
      DWORD3(v18) = 0;
      v20 = DWORD3(*(_OWORD*)LANES64(v13[2]).n64_u64);
      v21 = vaddq_f32(
          *(float32x4_t*)((char*)&v18 + 4),
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v27_.v27,
                              COERCE_FLOAT(*(_OWORD*)LANES64(v13[2]).n64_u64)),
                  v27_.v28, v13[2], 1),
              v27_.v29, *(float32x4_t*)LANES64(v13[2]).n64_u64, 2));
      v22 = vaddq_f32(
          *(float32x4_t*)&v15,
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v27_.v27,
                              COERCE_FLOAT(*(_OWORD*)LANES64(v13[4]).n64_u64)),
                  v27_.v28, v13[4], 1),
              v27_.v29, *(float32x4_t*)LANES64(v13[4]).n64_u64, 2));
      *v12 = v19;
      v12[1] = v21;
      v12[2] = v22;
    }
    else {
      v12[1] = v27_.v28;
      v12[2] = v27_.v29;
      *v12 = v27_.v27;
    }
    *(float*)(a1 + 24) = v10;
  }
  if (*(int*)(a1 + 80) >= 1) {
    nn_ui2d_detail_5a7540(a1 + 64, a2, a3, *(float32x4_t**)(a1 + 32), v5);
  }
  v23 = a1 + 144;
  for (i = *(_QWORD*)(a1 + 152); i != v23; i = *(_QWORD*)(v25 + 16)) {
    v26 = *(_QWORD*)(i - 8);
    v25 = i - 8;
    (*(void (**)(__int64, __int64, float32x4_t*, float))(v26 + 48))(v25, a2, a3,
                                                                    v5);
  }
}

#pragma GCC visibility pop
