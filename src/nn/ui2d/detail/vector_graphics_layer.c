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
void VectorGraphicsLayer_Unknown6(__int64 a1, __int64 a2, float32x4_t* a3,
                                  float a4);

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
                                  float a4)
{
  __int64 v4;
  float v9;
  __int64 v10;
  float32x4_t* v11;
  float32x2_t* v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int128 v17;
  float32x4_t v18;
  int v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  __int64 i;
  __int64 v24;
  __int64 v25;
  struct {
    float32x4_t v26;
    float32x4_t v27;
    float32x4_t v28;
  } v26_;

  v4 = *(_QWORD*)(a1 + 40);
  if (v4 != 0) {
    if (a4 < *(float*)(v4 + 124) || a4 >= *(float*)(v4 + 128)) {
      *(_BYTE*)(a1 + 28) = 0;
      return;
    }
    v26_.v28 = (__typeof__(v26_.v28)){0};
    v26_.v27 = (__typeof__(v26_.v27)){0};
    v26_.v26 = (__typeof__(v26_.v26)){0};
    *(_BYTE*)(a1 + 28) = 1;
    nn_ui2d_detail_5a8380(a4, a1, &v26_.v26, (unsigned __int16*)(v4 + 8));
    v9 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 40) + 104LL), a4);
    v10 = *(_QWORD*)(a1 + 56);
    v11 = *(float32x4_t**)(a1 + 32);
    if (v10 != 0) {
      v12 = *(float32x2_t**)(v10 + 32);
      v13 = 0;
      HIDWORD(v17) = 0;
      v14 = 0;
      v15 = 0;
      v16 = HIDWORD(*(_OWORD*)LANES64(*(v12)).n64_u64);
      *(_QWORD*)&v17 = (unsigned int)HIDWORD(*(_OWORD*)LANES64(v12[4]).n64_u64);
      v18 = vaddq_f32(
          *(float32x4_t*)(&v13 - 1),
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v26_.v26,
                              COERCE_FLOAT(*(_OWORD*)LANES64(*(v12)).n64_u64)),
                  v26_.v27, COERCE_AS(float32x2_t, LANES64(*(v12)).n64_u64[0]),
                  1),
              v26_.v28, *(float32x4_t*)LANES64(*(v12)).n64_u64, 2));
      *(_QWORD*)((char*)&v17 + 4) = 0;
      HIDWORD(v17) = 0;
      v19 = HIDWORD(*(_OWORD*)LANES64(v12[2]).n64_u64);
      v20 = vaddq_f32(
          *(float32x4_t*)((char*)&v17 + 4),
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v26_.v26,
                              COERCE_FLOAT(*(_OWORD*)LANES64(v12[2]).n64_u64)),
                  v26_.v27, v12[2], 1),
              v26_.v28, *(float32x4_t*)LANES64(v12[2]).n64_u64, 2));
      v21 = vaddq_f32(
          *(float32x4_t*)&v14,
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v26_.v26,
                              COERCE_FLOAT(*(_OWORD*)LANES64(v12[4]).n64_u64)),
                  v26_.v27, v12[4], 1),
              v26_.v28, *(float32x4_t*)LANES64(v12[4]).n64_u64, 2));
      *v11 = v18;
      v11[1] = v20;
      v11[2] = v21;
    }
    else {
      v11[1] = v26_.v27;
      v11[2] = v26_.v28;
      *v11 = v26_.v26;
    }
    *(float*)(a1 + 24) = v9;
  }
  if (*(int*)(a1 + 80) >= 1) {
    nn_ui2d_detail_5a7540(a1 + 64, a2, a3, *(float32x4_t**)(a1 + 32), a4);
  }
  v22 = a1 + 144;
  for (i = *(_QWORD*)(a1 + 152); i != v22; i = *(_QWORD*)(v24 + 16)) {
    v25 = *(_QWORD*)(i - 8);
    v24 = i - 8;
    (*(void (**)(__int64, __int64, float32x4_t*, float))(v25 + 48))(v24, a2, a3,
                                                                    a4);
  }
}

#pragma GCC visibility pop
