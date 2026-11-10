#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CameraAnimObj_5e9560(__int64 result, __int64, __int64);
__int64 GameRoutine_5f8490(_OWORD*, float*);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a83210;
extern __int128 GameData_1a83520;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int64 (*SkeletalAnimObj_5f6770_ptr[10])();
void CameraAnimObj_5e9680(__int64, __int64, long double);
void CameraAnimObj_5e9780(__int64, __int64, __int64, long double);
__int64 nn_g3d_5ed6f0(__int64 result, int a2, int32x4_t* a3, int a4);
__int64 nn_g3d_5ef0a0(__int64 result, __int64 a2);
__int64 nn_g3d_5ef450(__int64 result, __int64 a2);
void nn_g3d_5ef800(__int64 a1, long double a2);
void nn_g3d_5f0040(__int64 a1, long double a2);
int8x8_t nn_g3d_5f3f20(__int64 a1, float32x4_t* a2, int8x16_t* a3,
                       int8x16_t* a4);
__n128 nn_g3d_5f42a0(__int64 a1, float32x4_t* a2, int8x16_t* a3, int8x16_t* a4);
__int64 nn_g3d_5f4620(__int64 result, float32x4_t* a2);
__int64* nn_g3d_5f4aa0(__int64* result, __int64 a2);
float32x2_t nn_g3d_5f5100(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f5400(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f55c0(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f5760(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f5900(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f5c70(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5);
float32x2_t nn_g3d_5f5e30(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5);

__int64 nn_g3d_5ed6f0(__int64 result, int a2, int32x4_t* a3, int a4)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;

  if (*(_BYTE*)(result + 14) != 0) {
    v5 = (_QWORD*)result;
    if ((*(_BYTE*)(result + 8) & 1) != 0) {
      v7 = *(_QWORD*)(result + 32);
      if (*(_BYTE*)(result + 13) != 0) {
        v8 = v7 + 72LL * (a4 + a2 * *(unsigned __int8*)(result + 15));
      }
      else {
        v8 = v7 + 72LL * a4;
      }
      if (v7 != 0) {
        v6 = v8;
      }
      else {
        v6 = 0;
      }
    }
    else {
      v6 = 0;
    }
    v9 = (int32x4_t*)GameRoutine_5fcb50(v6);
    v10 = a3[1];
    v11 = a3[2];
    v12 = a3[3];
    v13 = vzip1q_s32(*a3, v11);
    v14 = vzip2q_s32(*a3, v11);
    v15 = vzip1q_s32(v10, v12);
    LANES128(v9[3]).n128_u32[0] = *(unsigned __int8*)(*v5 + 90LL);
    *v9 = vzip1q_s32(v13, v15);
    v9[1] = vzip2q_s32(v13, v15);
    v9[2] = vzip1q_s32(v14, vzip2q_s32(v10, v12));
    memcpy(&v9[4], v5[10],
           ((__int64)(v5[11] << 30) >> 30) & 0xFFFFFFFFFFFFFFFCLL);
    GameRoutine_5fcb80(v6);
    return GameRoutine_5fcb70(v6);
  }
  return result;
}

__int64 nn_g3d_5ef0a0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  char v8;
  char v9;
  int v10;
  _DWORD* v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned int v26;

  v2 = *(unsigned __int16*)(result + 100);
  v3 = result;
  if (*(_WORD*)(result + 100) == 0) {
    v26 = *(_DWORD*)(result + 124) & 0xFFFFFFF3 | 4;
  LABEL_11:
    *(_DWORD*)(v3 + 124) = v26;
    return result;
  }
  v4 = *(_QWORD*)(result + 72);
  v5 = 40;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do {
    if ((*(_DWORD*)(*(_QWORD*)(v3 + 88) + 4 * v7) & 0x7FFF) != 0x7FFF) {
      v11 = (_DWORD*)(*(_QWORD*)(v3 + 112) + v5);
      result = CameraAnimObj_5e9560(
          (__int64)(v11 - 10), v4,
          *(_QWORD*)(a2 + 16) +
              96LL * (*(_DWORD*)(*(_QWORD*)(v3 + 88) + 4 * v7) & 0x7FFF));
      if ((*v11 & 0xE020) == 0x20) {
        v12 = *(_QWORD*)(v3 + 128);
        v13 = *(float*)(v4 + 16);
        v15 = *(float*)(v4 + 20);
        v14 = *(float*)(v4 + 24);
        v16 = *(float32x4_t*)(v12 + 16 * v7);
        v17 = vmuls_lane_f32(v13, v16, 3) +
              (float)(v14 * LANES128(v16).n128_f32[1]);
        v18 = vmuls_lane_f32(v14, v16, 3) +
              (float)(v15 * LANES128(v16).n128_f32[0]);
        v19 =
            -(float)(v18 +
                     (float)((float)-v13 *
                             COERCE_FLOAT(HIDWORD(*(_QWORD*)(v12 + 16 * v7)))));
        v20 = -(float)(v17 +
                       (float)((float)-v15 *
                               COERCE_FLOAT(*(_QWORD*)(v12 + 16 * v7 + 8))));
        v21 = v17 - (float)(v15 * LANES128(v16).n128_f32[2]);
        v22 = v18 - (float)(v13 * LANES128(v16).n128_f32[1]);
        v23 = vmuls_lane_f32(v15, v16, 3) +
              (float)(v13 * LANES128(v16).n128_f32[2]);
        v24 = v23 - (float)(LANES128(v16).n128_f32[0] * v14);
        v25 =
            (float)(vmuls_lane_f32(
                        v15, COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                        1) +
                    (float)(v13 * LANES128(v16).n128_f32[0])) +
            (float)(v14 * LANES128(v16).n128_f32[2]);
        *(float*)(v4 + 16) =
            (float)((float)(vmuls_lane_f32(
                                -(float)(v23 +
                                         (float)((float)-v14 *
                                                 LANES128(v16).n128_f32[0])),
                                v16, 2) +
                            (float)(v22 * LANES128(v16).n128_f32[1])) +
                    (float)(v25 * LANES128(v16).n128_f32[0])) +
            (float)(v21 * LANES128(v16).n128_f32[3]);
        *(float*)(v4 + 20) =
            (float)((float)((float)(PSEUDO_UNFUSED(
                                v19 *
                                COERCE_FLOAT(*(_OWORD*)(v12 + 16 * v7)))) +
                            (float)(v21 * COERCE_FLOAT(
                                              *(_QWORD*)(v12 + 16 * v7 + 8)))) +
                    (float)(v25 *
                            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v12 + 16 * v7))))) +
            (float)(v24 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v12 + 16 * v7))));
        *(float*)(v4 + 24) =
            (float)((float)(vmuls_lane_f32(v20, *(float32x2_t*)(v12 + 16 * v7),
                                           1) +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v12 + 16 * v7)) *
                                    v24)) +
                    (float)(v25 *
                            COERCE_FLOAT(*(_QWORD*)(v12 + 16 * v7 + 8)))) +
            (float)(v22 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v12 + 16 * v7))));
      }
    }
    v10 = *(_DWORD*)v4;
    v4 += 48;
    ++v7;
    v5 += 56;
    v9 |= (v10 & 0x300000) != 0;
    v8 |= (v10 & 0x300000) == 0;
  } while (v2 != v7);
  v26 = *(_DWORD*)(v3 + 124) & 0xFFFFFFF3;
  *(_DWORD*)(v3 + 124) = v26 | 4;
  if ((v9 & 1) != 0) {
    if ((v8 & 1) != 0) {
      v26 |= 8u;
    }
    goto LABEL_11;
  }
  return result;
}

__int64 nn_g3d_5ef450(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;

  v2 = *(unsigned __int16*)(result + 100);
  v3 = result;
  if (*(_WORD*)(result + 100) == 0) {
    v33 = *(_DWORD*)(result + 124) & 0xFFFFFFF3 | 4;
    goto LABEL_22;
  }
  v4 = *(_QWORD*)(result + 72);
  v5 = 40;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v34 = v4;
  v35 = *(unsigned __int16*)(result + 100);
  do {
    v9 = *(_QWORD*)(v3 + 88);
    v10 = v4;
    v11 = *(_DWORD*)(v9 + 4 * v6) & 0x7FFF;
    if ((*(_DWORD*)(v9 + 4 * v6) & 0x7FFF) == 0x7FFF) {
      goto LABEL_4;
    }
    v10 = v4;
    v12 = *(__int16*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) + 48LL) + 2 * v11);
    if ((v12 & 0x8000000000000000LL) == 0) {
      v10 =
          v34 + 48 * (((unsigned __int64)*(unsigned int*)(v9 + 4 * v12) >> 15) &
                      0x7FFF);
      LODWORD(v11) =
          *(__int16*)(*(_QWORD*)(*(_QWORD*)(v3 + 136) + 48LL) + 2 * v11);
    }
    v13 = *(_QWORD*)(v3 + 112);
    v14 = *(_QWORD*)(a2 + 16) + 96LL * (int)v11;
    result = CameraAnimObj_5e9560(v13 + v5 - 40, v10, v14);
    if ((*(_DWORD*)(v13 + v5) & 0xE020) == 0x20) {
      v15 = *(_QWORD*)(v3 + 128);
      v16 = *(float*)(v10 + 16);
      v18 = *(float*)(v10 + 20);
      v17 = *(float*)(v10 + 24);
      v19 = *(float32x4_t*)(v15 + 16 * v6);
      v20 = vmuls_lane_f32(v16, v19, 3) +
            (float)(v17 * LANES128(v19).n128_f32[1]);
      v21 = vmuls_lane_f32(v17, v19, 3) +
            (float)(v18 * LANES128(v19).n128_f32[0]);
      v22 = -(float)(v21 +
                     (float)((float)-v16 *
                             COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 16 * v6)))));
      v23 =
          -(float)(v20 + (float)((float)-v18 *
                                 COERCE_FLOAT(*(_QWORD*)(v15 + 16 * v6 + 8))));
      v24 = v20 - (float)(v18 * LANES128(v19).n128_f32[2]);
      v25 = v21 - (float)(v16 * LANES128(v19).n128_f32[1]);
      v26 = vmuls_lane_f32(v18, v19, 3) +
            (float)(v16 * LANES128(v19).n128_f32[2]);
      v27 = v26 - (float)(LANES128(v19).n128_f32[0] * v17);
      v28 = (float)(vmuls_lane_f32(
                        v18, COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                        1) +
                    (float)(v16 * LANES128(v19).n128_f32[0])) +
            (float)(v17 * LANES128(v19).n128_f32[2]);
      *(float*)(v10 + 16) =
          (float)((float)(vmuls_lane_f32(
                              -(float)(v26 +
                                       (float)((float)-v17 *
                                               LANES128(v19).n128_f32[0])),
                              v19, 2) +
                          (float)(v25 * LANES128(v19).n128_f32[1])) +
                  (float)(v28 * LANES128(v19).n128_f32[0])) +
          (float)(v24 * LANES128(v19).n128_f32[3]);
      *(float*)(v10 + 20) =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v22 * COERCE_FLOAT(*(_OWORD*)(v15 + 16 * v6)))) +
                          (float)(v24 * COERCE_FLOAT(
                                            *(_QWORD*)(v15 + 16 * v6 + 8)))) +
                  (float)(v28 *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 16 * v6))))) +
          (float)(v27 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v15 + 16 * v6))));
      *(float*)(v10 + 24) =
          (float)((float)(vmuls_lane_f32(v23, *(float32x2_t*)(v15 + 16 * v6),
                                         1) +
                          (float)(COERCE_FLOAT(*(_OWORD*)(v15 + 16 * v6)) *
                                  v27)) +
                  (float)(v28 * COERCE_FLOAT(*(_QWORD*)(v15 + 16 * v6 + 8)))) +
          (float)(v25 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v15 + 16 * v6))));
    }
    if ((v12 & 0x80000000) != 0) {
      v2 = v35;
      goto LABEL_4;
    }
    v29 = *(_DWORD*)(v13 + v5);
    v30 = v29 & 0x1E10;
    v31 = (unsigned __int16)v29 & 0xE020;
    if (v30 == 16) {
      v2 = v35;
      if (v31 == 32) {
        v32 = 3LL * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(v3 + 136) + 4LL) >>
                     6) +
              2;
      }
      else {
        v32 = 3LL *
              ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(v3 + 136) + 4LL) >> 6);
      }
    }
    else {
      v2 = v35;
      if (v31 != 32) {
        goto LABEL_4;
      }
      v32 =
          3LL * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(v3 + 136) + 4LL) >> 6) +
          1;
    }
    result = ((__int64 (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr[v32])(
        v10, *(_DWORD*)(v14 + 52) & 0x700000);
  LABEL_4:
    ++v6;
    v4 += 48;
    v5 += 56;
    v8 |= (*(_DWORD*)v10 & 0x300000) != 0;
    v7 |= (*(_DWORD*)v10 & 0x300000) == 0;
  } while (v2 != v6);
  v33 = *(_DWORD*)(v3 + 124) & 0xFFFFFFF3;
  *(_DWORD*)(v3 + 124) = v33 | 4;
  if ((v8 & 1) != 0) {
    if ((v7 & 1) != 0) {
      v33 |= 8u;
    }
  LABEL_22:
    *(_DWORD*)(v3 + 124) = v33;
  }
  return result;
}

void nn_g3d_5ef800(__int64 a1, long double a2)
{
  int v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  float v41;
  float32x4_t v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;

  v2 = *(_DWORD*)(a1 + 60);
  v4 = **(_DWORD**)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 72);
  v6 = *(unsigned __int16*)(a1 + 100);
  if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
    if (*(_WORD*)(a1 + 100) != 0) {
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 56 * v6;
      do {
        v33 = *(_QWORD*)(a1 + 112);
        v34 = v33 + v29;
        v35 = *(unsigned __int8*)(v33 + v29 + 46);
        if ((*(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v30) & 0x40000000) == 0) {
          LODWORD(a2) = v4;
          if ((*(_BYTE*)(v34 + 41) & 0xE0) != 0) {
            v36 = *(_QWORD*)(v33 + v29 + 16) +
                  4LL * *(unsigned __int8*)(v33 + v29 + 47);
            v37 = *(_QWORD*)v36;
            *(_DWORD*)(v5 + 24) = *(_DWORD*)(v36 + 8);
            *(_QWORD*)(v5 + 16) = v37;
            CameraAnimObj_5e9780(v34, v5, *(_QWORD*)(a1 + 48) + 12 * v31, a2);
            v38 = *(_QWORD*)(a1 + 128);
            v39 = *(float*)(v5 + 16);
            v41 = *(float*)(v5 + 20);
            v40 = *(float*)(v5 + 24);
            v42 = *(float32x4_t*)(v38 + 16 * v30);
            v43 = vmuls_lane_f32(v39, v42, 3) +
                  (float)(v40 * LANES128(v42).n128_f32[1]);
            v44 = vmuls_lane_f32(v40, v42, 3) +
                  (float)(v41 * LANES128(v42).n128_f32[0]);
            v45 = -(float)(v44 + (float)((float)-v39 *
                                         COERCE_FLOAT(HIDWORD(
                                             *(_QWORD*)(v38 + 16 * v30)))));
            v46 =
                -(float)(v43 +
                         (float)((float)-v41 *
                                 COERCE_FLOAT(*(_QWORD*)(v38 + 16 * v30 + 8))));
            v47 = v43 - (float)(v41 * LANES128(v42).n128_f32[2]);
            v48 = v44 - (float)(v39 * LANES128(v42).n128_f32[1]);
            v49 = vmuls_lane_f32(v41, v42, 3) +
                  (float)(v39 * LANES128(v42).n128_f32[2]);
            v50 = v49 - (float)(LANES128(v42).n128_f32[0] * v40);
            v51 = (float)(vmuls_lane_f32(
                              v41,
                              COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                              1) +
                          (float)(v39 * LANES128(v42).n128_f32[0])) +
                  (float)(v40 * LANES128(v42).n128_f32[2]);
            *(float*)(v5 + 16) =
                (float)((float)(vmuls_lane_f32(
                                    -(float)(v49 + (float)((float)-v40 *
                                                           LANES128(v42)
                                                               .n128_f32[0])),
                                    v42, 2) +
                                (float)(v48 * LANES128(v42).n128_f32[1])) +
                        (float)(v51 * LANES128(v42).n128_f32[0])) +
                (float)(v47 * LANES128(v42).n128_f32[3]);
            *(float*)(v5 + 20) =
                (float)((float)((float)(PSEUDO_UNFUSED(
                                    v45 *
                                    COERCE_FLOAT(*(_OWORD*)(v38 + 16 * v30)))) +
                                (float)(v47 *
                                        COERCE_FLOAT(
                                            *(_QWORD*)(v38 + 16 * v30 + 8)))) +
                        (float)(v51 * COERCE_FLOAT(HIDWORD(
                                          *(_QWORD*)(v38 + 16 * v30))))) +
                (float)(v50 *
                        COERCE_FLOAT(HIDWORD(*(_OWORD*)(v38 + 16 * v30))));
            a2 = *(long double*)(v38 + 16 * v30);
            *(float*)(v5 + 24) =
                (float)((float)(vmuls_lane_f32(v46, *(float32x2_t*)&a2, 1) +
                                (float)(*(float*)&a2 * v50)) +
                        (float)(v51 * *((float*)&a2 + 2))) +
                (float)(v48 * *((float*)&a2 + 3));
          }
          else {
            CameraAnimObj_5e9780(v34, v5, *(_QWORD*)(a1 + 48) + 12 * v31, a2);
          }
        }
        v31 += v35;
        ++v30;
        v29 += 56;
        v5 += 48;
      } while (v32 != v29);
    }
  }
  else if (*(_WORD*)(a1 + 100) != 0) {
    v8 = 0;
    v9 = 0;
    v10 = 56 * v6;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v9) & 0x40000000) == 0) {
        v11 = *(_QWORD*)(a1 + 112);
        v12 = v11 + v8;
        LODWORD(a2) = v4;
        if ((*(_BYTE*)(v11 + v8 + 41) & 0xE0) != 0) {
          v13 = *(_QWORD*)(v11 + v8 + 16) +
                4LL * *(unsigned __int8*)(v11 + v8 + 47);
          v14 = *(_QWORD*)v13;
          *(_DWORD*)(v5 + 24) = *(_DWORD*)(v13 + 8);
          *(_QWORD*)(v5 + 16) = v14;
          CameraAnimObj_5e9680(v12, v5, a2);
          v15 = *(_QWORD*)(a1 + 128);
          v16 = *(float*)(v5 + 16);
          v18 = *(float*)(v5 + 20);
          v17 = *(float*)(v5 + 24);
          v19 = *(float32x4_t*)(v15 + 16 * v9);
          v20 = vmuls_lane_f32(v16, v19, 3) +
                (float)(v17 * LANES128(v19).n128_f32[1]);
          v21 = vmuls_lane_f32(v17, v19, 3) +
                (float)(v18 * LANES128(v19).n128_f32[0]);
          v22 = -(float)(v21 +
                         (float)((float)-v16 * COERCE_FLOAT(HIDWORD(*(
                                                   _QWORD*)(v15 + 16 * v9)))));
          v23 = -(float)(v20 +
                         (float)((float)-v18 *
                                 COERCE_FLOAT(*(_QWORD*)(v15 + 16 * v9 + 8))));
          v24 = v20 - (float)(v18 * LANES128(v19).n128_f32[2]);
          v25 = v21 - (float)(v16 * LANES128(v19).n128_f32[1]);
          v26 = vmuls_lane_f32(v18, v19, 3) +
                (float)(v16 * LANES128(v19).n128_f32[2]);
          v27 = v26 - (float)(LANES128(v19).n128_f32[0] * v17);
          v28 = (float)(vmuls_lane_f32(
                            v18,
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                            1) +
                        (float)(v16 * LANES128(v19).n128_f32[0])) +
                (float)(v17 * LANES128(v19).n128_f32[2]);
          *(float*)(v5 + 16) =
              (float)((float)(vmuls_lane_f32(
                                  -(float)(v26 +
                                           (float)((float)-v17 *
                                                   LANES128(v19).n128_f32[0])),
                                  v19, 2) +
                              (float)(v25 * LANES128(v19).n128_f32[1])) +
                      (float)(v28 * LANES128(v19).n128_f32[0])) +
              (float)(v24 * LANES128(v19).n128_f32[3]);
          *(float*)(v5 + 20) =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v22 *
                                  COERCE_FLOAT(*(_OWORD*)(v15 + 16 * v9)))) +
                              (float)(v24 * COERCE_FLOAT(*(
                                                _QWORD*)(v15 + 16 * v9 + 8)))) +
                      (float)(v28 * COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v15 + 16 * v9))))) +
              (float)(v27 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v15 + 16 * v9))));
          a2 = *(long double*)(v15 + 16 * v9);
          *(float*)(v5 + 24) =
              (float)((float)(vmuls_lane_f32(v23, *(float32x2_t*)&a2, 1) +
                              (float)(*(float*)&a2 * v27)) +
                      (float)(v28 * *((float*)&a2 + 2))) +
              (float)(v25 * *((float*)&a2 + 3));
        }
        else {
          CameraAnimObj_5e9680(v12, v5, a2);
        }
      }
      ++v9;
      v8 += 56;
      v5 += 48;
    } while (v10 != v8);
  }
}

void nn_g3d_5f0040(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float32x4_t v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  unsigned __int8* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  float32x4_t v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float v65;
  float v66;
  float v67;
  float32x4_t v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  unsigned __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float32x4_t v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  float v116;
  float v117;
  float v118;
  float32x4_t v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  float v136;
  float v137;
  float v138;
  float32x4_t v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;

  v2 = *(_QWORD*)(a1 + 72);
  v3 = *(unsigned __int16*)(a1 + 100);
  v5 = **(_DWORD**)(a1 + 8);
  v6 = *(_DWORD*)(a1 + 60);
  if (v6 >= 1 && v6 <= *(_DWORD*)(a1 + 56)) {
    if (*(_WORD*)(a1 + 100) == 0) {
      return;
    }
    v78 = 0;
    v79 = 0;
    v80 = 0;
    while (1) {
      v81 = *(_QWORD*)(a1 + 112);
      v82 = *(_QWORD*)(a1 + 88);
      v83 = v81 + v78;
      v84 = *(_DWORD*)(v82 + 4 * v79);
      v85 = *(unsigned __int8*)(v81 + v78 + 46);
      v86 = v84 & 0x7FFF;
      if ((v84 & 0x7FFF) == 0x7FFF) {
        goto LABEL_45;
      }
      v87 = *(_QWORD*)(a1 + 136);
      v88 = *(__int16*)(*(_QWORD*)(v87 + 48) + 2 * v86);
      if ((v88 & 0x80000000) != 0) {
        break;
      }
      v89 =
          ((unsigned __int64)*(unsigned int*)(v82 + 4LL * v88) >> 15) & 0x7FFF;
      if ((*(_DWORD*)(v82 + 4 * v89) & 0x40000000) != 0) {
        goto LABEL_33;
      }
      v90 = v2 + 48LL * (unsigned int)v89;
      v91 = *(_DWORD*)(v81 + v78 + 40);
      if ((v91 & 0xE000) != 0) {
        v92 = 16 * v79;
        if ((v91 & 0x1E00) != 0) {
          if ((*(_DWORD*)(*(_QWORD*)(v87 + 16) + 96LL * v88 + 52) & 0x700000) !=
              0x400000) {
            v21 = (v91 & 8) == 0;
            v93 = 12;
            if (v21) {
              v93 = 0;
            }
            v94 = *(_QWORD*)(v81 + v78 + 16) + v93;
            v95 = *(_QWORD*)v94;
            *(_DWORD*)(v90 + 40) = *(_DWORD*)(v94 + 8);
            *(_QWORD*)(v90 + 32) = v95;
          }
          LODWORD(a2) = v5;
          v96 = *(_QWORD*)(v81 + v78 + 16) +
                4LL * *(unsigned __int8*)(v81 + v78 + 47);
          v97 = *(_QWORD*)v96;
          *(_DWORD*)(v90 + 24) = *(_DWORD*)(v96 + 8);
          *(_QWORD*)(v90 + 16) = v97;
          CameraAnimObj_5e9780(v83, v90, *(_QWORD*)(a1 + 48) + 12 * v80, a2);
          v98 = *(_QWORD*)(a1 + 128);
          v99 = *(float*)(v90 + 16);
          v101 = *(float*)(v90 + 20);
          v100 = *(float*)(v90 + 24);
          v102 = *(float32x4_t*)(v98 + 16 * v79);
          v103 = vmuls_lane_f32(v99, v102, 3) +
                 (float)(v100 * LANES128(v102).n128_f32[1]);
          v104 = vmuls_lane_f32(v100, v102, 3) +
                 (float)(v101 * LANES128(v102).n128_f32[0]);
          v105 = -(float)(v104 + (float)((float)-v99 *
                                         COERCE_FLOAT(HIDWORD(
                                             *(_QWORD*)(v98 + 16 * v79)))));
          v106 =
              -(float)(v103 + (float)((float)-v101 *
                                      COERCE_FLOAT(*(_QWORD*)(v98 + v92 + 8))));
          v107 = v103 - (float)(v101 * LANES128(v102).n128_f32[2]);
          v108 = v104 - (float)(v99 * LANES128(v102).n128_f32[1]);
          v109 = vmuls_lane_f32(v101, v102, 3) +
                 (float)(v99 * LANES128(v102).n128_f32[2]);
          v110 = v109 - (float)(LANES128(v102).n128_f32[0] * v100);
          v111 = (float)(vmuls_lane_f32(
                             v101,
                             COERCE_AS(float32x2_t, LANES128(v102).n128_u64[0]),
                             1) +
                         (float)(v99 * LANES128(v102).n128_f32[0])) +
                 (float)(v100 * LANES128(v102).n128_f32[2]);
          *(float*)(v90 + 16) =
              (float)((float)(vmuls_lane_f32(
                                  -(float)(v109 +
                                           (float)((float)-v100 *
                                                   LANES128(v102).n128_f32[0])),
                                  v102, 2) +
                              (float)(v108 * LANES128(v102).n128_f32[1])) +
                      (float)(v111 * LANES128(v102).n128_f32[0])) +
              (float)(v107 * LANES128(v102).n128_f32[3]);
          *(float*)(v90 + 20) =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v105 *
                                  COERCE_FLOAT(*(_OWORD*)(v98 + 16 * v79)))) +
                              (float)(v107 *
                                      COERCE_FLOAT(
                                          *(_QWORD*)(v98 + 16 * v79 + 8)))) +
                      (float)(v111 * COERCE_FLOAT(HIDWORD(
                                         *(_QWORD*)(v98 + 16 * v79))))) +
              (float)(v110 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v98 + 16 * v79))));
          *(float*)(v90 + 24) =
              (float)((float)(vmuls_lane_f32(
                                  v106, *(float32x2_t*)(v98 + 16 * v79), 1) +
                              (float)(COERCE_FLOAT(*(_OWORD*)(v98 + 16 * v79)) *
                                      v110)) +
                      (float)(v111 *
                              COERCE_FLOAT(*(_QWORD*)(v98 + 16 * v79 + 8)))) +
              (float)(v108 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v98 + 16 * v79))));
          ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
               [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                     6) +
                2])(v90, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                    96LL * v88 + 52) &
                             0x700000);
        }
        else {
          LODWORD(a2) = v5;
          v133 = *(_QWORD*)(v81 + v78 + 16) +
                 4LL * *(unsigned __int8*)(v81 + v78 + 47);
          v134 = *(_QWORD*)v133;
          *(_DWORD*)(v90 + 24) = *(_DWORD*)(v133 + 8);
          *(_QWORD*)(v90 + 16) = v134;
          CameraAnimObj_5e9780(v83, v90, *(_QWORD*)(a1 + 48) + 12 * v80, a2);
          v135 = *(_QWORD*)(a1 + 128);
          v136 = *(float*)(v90 + 16);
          v138 = *(float*)(v90 + 20);
          v137 = *(float*)(v90 + 24);
          v139 = *(float32x4_t*)(v135 + 16 * v79);
          v140 = vmuls_lane_f32(v136, v139, 3) +
                 (float)(v137 * LANES128(v139).n128_f32[1]);
          v141 = vmuls_lane_f32(v137, v139, 3) +
                 (float)(v138 * LANES128(v139).n128_f32[0]);
          v142 = -(float)(v141 + (float)((float)-v136 *
                                         COERCE_FLOAT(HIDWORD(
                                             *(_QWORD*)(v135 + 16 * v79)))));
          v143 = -(float)(v140 +
                          (float)((float)-v138 *
                                  COERCE_FLOAT(*(_QWORD*)(v135 + v92 + 8))));
          v144 = v140 - (float)(v138 * LANES128(v139).n128_f32[2]);
          v145 = v141 - (float)(v136 * LANES128(v139).n128_f32[1]);
          v146 = vmuls_lane_f32(v138, v139, 3) +
                 (float)(v136 * LANES128(v139).n128_f32[2]);
          v147 = v146 - (float)(LANES128(v139).n128_f32[0] * v137);
          v148 = (float)(vmuls_lane_f32(
                             v138,
                             COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0]),
                             1) +
                         (float)(v136 * LANES128(v139).n128_f32[0])) +
                 (float)(v137 * LANES128(v139).n128_f32[2]);
          *(float*)(v90 + 16) =
              (float)((float)(vmuls_lane_f32(
                                  -(float)(v146 +
                                           (float)((float)-v137 *
                                                   LANES128(v139).n128_f32[0])),
                                  v139, 2) +
                              (float)(v145 * LANES128(v139).n128_f32[1])) +
                      (float)(v148 * LANES128(v139).n128_f32[0])) +
              (float)(v144 * LANES128(v139).n128_f32[3]);
          *(float*)(v90 + 20) =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v142 *
                                  COERCE_FLOAT(*(_OWORD*)(v135 + 16 * v79)))) +
                              (float)(v144 *
                                      COERCE_FLOAT(
                                          *(_QWORD*)(v135 + 16 * v79 + 8)))) +
                      (float)(v148 * COERCE_FLOAT(HIDWORD(
                                         *(_QWORD*)(v135 + 16 * v79))))) +
              (float)(v147 *
                      COERCE_FLOAT(HIDWORD(*(_OWORD*)(v135 + 16 * v79))));
          *(float*)(v90 + 24) =
              (float)((float)(vmuls_lane_f32(
                                  v143, *(float32x2_t*)(v135 + 16 * v79), 1) +
                              (float)(COERCE_FLOAT(
                                          *(_OWORD*)(v135 + 16 * v79)) *
                                      v147)) +
                      (float)(v148 *
                              COERCE_FLOAT(*(_QWORD*)(v135 + 16 * v79 + 8)))) +
              (float)(v145 *
                      COERCE_FLOAT(HIDWORD(*(_OWORD*)(v135 + 16 * v79))));
          ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
               [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                     6) +
                1])(v90, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                    96LL * v88 + 52) &
                             0x700000);
        }
        goto LABEL_33;
      }
      if ((v91 & 0x1E00) != 0) {
        if ((*(_DWORD*)(*(_QWORD*)(v87 + 16) + 96LL * v88 + 52) & 0x700000) !=
            0x400000) {
          v129 = 12;
          v130 = *(_QWORD*)(v81 + v78 + 16);
          if ((v91 & 8) == 0) {
            v129 = 0;
          }
          v131 = (__int64*)(v130 + v129);
          v132 = *v131;
          *(_DWORD*)(v90 + 40) = *((_DWORD*)v131 + 2);
          *(_QWORD*)(v90 + 32) = v132;
        }
        LODWORD(a2) = v5;
        CameraAnimObj_5e9780(v83, v90, *(_QWORD*)(a1 + 48) + 12 * v80, a2);
        ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
             [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                   6)])(v90,
                        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                   96LL * v88 + 52) &
                            0x700000);
        goto LABEL_33;
      }
    LABEL_32:
      LODWORD(a2) = v5;
      CameraAnimObj_5e9780(v83, v90, *(_QWORD*)(a1 + 48) + 12 * v80, a2);
    LABEL_33:
      v80 += v85;
      ++v79;
      v78 += 56;
      if (v3 == v79) {
        return;
      }
    }
    v84 = *(_DWORD*)(v82 + 4 * v79);
  LABEL_45:
    if ((v84 & 0x40000000) != 0) {
      goto LABEL_33;
    }
    v112 = v81 + v78;
    v90 = v2 + 48 * v79;
    if ((*(_BYTE*)(v112 + 41) & 0xE0) != 0) {
      LODWORD(a2) = v5;
      v113 = *(_QWORD*)(v112 + 16) + 4LL * *(unsigned __int8*)(v112 + 47);
      v114 = *(_QWORD*)v113;
      *(_DWORD*)(v90 + 24) = *(_DWORD*)(v113 + 8);
      *(_QWORD*)(v90 + 16) = v114;
      CameraAnimObj_5e9780(v83, v2 + 48 * v79, *(_QWORD*)(a1 + 48) + 12 * v80,
                           a2);
      v115 = *(_QWORD*)(a1 + 128);
      v116 = *(float*)(v90 + 16);
      v118 = *(float*)(v90 + 20);
      v117 = *(float*)(v90 + 24);
      v119 = *(float32x4_t*)(v115 + 16 * v79);
      v120 = vmuls_lane_f32(v116, v119, 3) +
             (float)(v117 * LANES128(v119).n128_f32[1]);
      v121 = vmuls_lane_f32(v117, v119, 3) +
             (float)(v118 * LANES128(v119).n128_f32[0]);
      v122 =
          -(float)(v121 +
                   (float)((float)-v116 *
                           COERCE_FLOAT(HIDWORD(*(_QWORD*)(v115 + 16 * v79)))));
      v123 = -(float)(v120 +
                      (float)((float)-v118 *
                              COERCE_FLOAT(*(_QWORD*)(v115 + 16 * v79 + 8))));
      v124 = v120 - (float)(v118 * LANES128(v119).n128_f32[2]);
      v125 = v121 - (float)(v116 * LANES128(v119).n128_f32[1]);
      v126 = vmuls_lane_f32(v118, v119, 3) +
             (float)(v116 * LANES128(v119).n128_f32[2]);
      v127 = v126 - (float)(LANES128(v119).n128_f32[0] * v117);
      v128 =
          (float)(vmuls_lane_f32(
                      v118, COERCE_AS(float32x2_t, LANES128(v119).n128_u64[0]),
                      1) +
                  (float)(v116 * LANES128(v119).n128_f32[0])) +
          (float)(v117 * LANES128(v119).n128_f32[2]);
      *(float*)(v90 + 16) =
          (float)((float)(vmuls_lane_f32(
                              -(float)(v126 +
                                       (float)((float)-v117 *
                                               LANES128(v119).n128_f32[0])),
                              v119, 2) +
                          (float)(v125 * LANES128(v119).n128_f32[1])) +
                  (float)(v128 * LANES128(v119).n128_f32[0])) +
          (float)(v124 * LANES128(v119).n128_f32[3]);
      *(float*)(v90 + 20) =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v122 *
                              COERCE_FLOAT(*(_OWORD*)(v115 + 16 * v79)))) +
                          (float)(v124 * COERCE_FLOAT(*(
                                             _QWORD*)(v115 + 16 * v79 + 8)))) +
                  (float)(v128 *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v115 + 16 * v79))))) +
          (float)(v127 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v115 + 16 * v79))));
      a2 = *(long double*)(v115 + 16 * v79);
      *(float*)(v90 + 24) =
          (float)((float)(vmuls_lane_f32(v123, *(float32x2_t*)&a2, 1) +
                          (float)(*(float*)&a2 * v127)) +
                  (float)(v128 * *((float*)&a2 + 2))) +
          (float)(v125 * *((float*)&a2 + 3));
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if (*(_WORD*)(a1 + 100) != 0) {
    v8 = 47;
    v9 = 0;
    while (1) {
      v10 = *(_QWORD*)(a1 + 112);
      v11 = *(_QWORD*)(a1 + 88);
      v12 = v10 + v8 - 47;
      v13 = *(_DWORD*)(v11 + 4 * v9);
      v14 = v13 & 0x7FFF;
      if ((v13 & 0x7FFF) == 0x7FFF) {
        goto LABEL_20;
      }
      v15 = *(_QWORD*)(a1 + 136);
      v16 = *(__int16*)(*(_QWORD*)(v15 + 48) + 2 * v14);
      if ((v16 & 0x80000000) != 0) {
        break;
      }
      v17 =
          ((unsigned __int64)*(unsigned int*)(v11 + 4LL * v16) >> 15) & 0x7FFF;
      if ((*(_DWORD*)(v11 + 4 * v17) & 0x40000000) != 0) {
        goto LABEL_8;
      }
      v18 = v2 + 48LL * (unsigned int)v17;
      v19 = *(_DWORD*)(v10 + v8 - 7);
      if ((v19 & 0xE000) != 0) {
        v20 = 16 * v9;
        if ((v19 & 0x1E00) != 0) {
          if ((*(_DWORD*)(*(_QWORD*)(v15 + 16) + 96LL * v16 + 52) & 0x700000) !=
              0x400000) {
            v21 = (v19 & 8) == 0;
            v22 = 12;
            if (v21) {
              v22 = 0;
            }
            v23 = *(_QWORD*)(v10 + v8 - 31) + v22;
            v24 = *(_QWORD*)v23;
            *(_DWORD*)(v18 + 40) = *(_DWORD*)(v23 + 8);
            *(_QWORD*)(v18 + 32) = v24;
          }
          LODWORD(a2) = v5;
          v25 = *(_QWORD*)(v10 + v8 - 31) + 4LL * *(unsigned __int8*)(v10 + v8);
          v26 = *(_QWORD*)v25;
          *(_DWORD*)(v18 + 24) = *(_DWORD*)(v25 + 8);
          *(_QWORD*)(v18 + 16) = v26;
          CameraAnimObj_5e9680(v12, v18, a2);
          v27 = *(_QWORD*)(a1 + 128);
          v28 = *(float*)(v18 + 16);
          v30 = *(float*)(v18 + 20);
          v29 = *(float*)(v18 + 24);
          v31 = *(float32x4_t*)(v27 + 16 * v9);
          v32 = vmuls_lane_f32(v28, v31, 3) +
                (float)(v29 * LANES128(v31).n128_f32[1]);
          v33 = vmuls_lane_f32(v29, v31, 3) +
                (float)(v30 * LANES128(v31).n128_f32[0]);
          v34 = -(float)(v33 +
                         (float)((float)-v28 * COERCE_FLOAT(HIDWORD(*(
                                                   _QWORD*)(v27 + 16 * v9)))));
          v35 =
              -(float)(v32 + (float)((float)-v30 *
                                     COERCE_FLOAT(*(_QWORD*)(v27 + v20 + 8))));
          v36 = v32 - (float)(v30 * LANES128(v31).n128_f32[2]);
          v37 = v33 - (float)(v28 * LANES128(v31).n128_f32[1]);
          v38 = vmuls_lane_f32(v30, v31, 3) +
                (float)(v28 * LANES128(v31).n128_f32[2]);
          v39 = v38 - (float)(LANES128(v31).n128_f32[0] * v29);
          v40 = (float)(vmuls_lane_f32(
                            v30,
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            1) +
                        (float)(v28 * LANES128(v31).n128_f32[0])) +
                (float)(v29 * LANES128(v31).n128_f32[2]);
          *(float*)(v18 + 16) =
              (float)((float)(vmuls_lane_f32(
                                  -(float)(v38 +
                                           (float)((float)-v29 *
                                                   LANES128(v31).n128_f32[0])),
                                  v31, 2) +
                              (float)(v37 * LANES128(v31).n128_f32[1])) +
                      (float)(v40 * LANES128(v31).n128_f32[0])) +
              (float)(v36 * LANES128(v31).n128_f32[3]);
          *(float*)(v18 + 20) =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v34 *
                                  COERCE_FLOAT(*(_OWORD*)(v27 + 16 * v9)))) +
                              (float)(v36 * COERCE_FLOAT(*(
                                                _QWORD*)(v27 + 16 * v9 + 8)))) +
                      (float)(v40 * COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v27 + 16 * v9))))) +
              (float)(v39 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v27 + 16 * v9))));
          *(float*)(v18 + 24) =
              (float)((float)(vmuls_lane_f32(
                                  v35, *(float32x2_t*)(v27 + 16 * v9), 1) +
                              (float)(COERCE_FLOAT(*(_OWORD*)(v27 + 16 * v9)) *
                                      v39)) +
                      (float)(v40 *
                              COERCE_FLOAT(*(_QWORD*)(v27 + 16 * v9 + 8)))) +
              (float)(v37 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v27 + 16 * v9))));
          ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
               [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                     6) +
                2])(v18, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                    96LL * v16 + 52) &
                             0x700000);
        }
        else {
          LODWORD(a2) = v5;
          v62 = *(_QWORD*)(v10 + v8 - 31) + 4LL * *(unsigned __int8*)(v10 + v8);
          v63 = *(_QWORD*)v62;
          *(_DWORD*)(v18 + 24) = *(_DWORD*)(v62 + 8);
          *(_QWORD*)(v18 + 16) = v63;
          CameraAnimObj_5e9680(v12, v18, a2);
          v64 = *(_QWORD*)(a1 + 128);
          v65 = *(float*)(v18 + 16);
          v67 = *(float*)(v18 + 20);
          v66 = *(float*)(v18 + 24);
          v68 = *(float32x4_t*)(v64 + 16 * v9);
          v69 = vmuls_lane_f32(v65, v68, 3) +
                (float)(v66 * LANES128(v68).n128_f32[1]);
          v70 = vmuls_lane_f32(v66, v68, 3) +
                (float)(v67 * LANES128(v68).n128_f32[0]);
          v71 = -(float)(v70 +
                         (float)((float)-v65 * COERCE_FLOAT(HIDWORD(*(
                                                   _QWORD*)(v64 + 16 * v9)))));
          v72 =
              -(float)(v69 + (float)((float)-v67 *
                                     COERCE_FLOAT(*(_QWORD*)(v64 + v20 + 8))));
          v73 = v69 - (float)(v67 * LANES128(v68).n128_f32[2]);
          v74 = v70 - (float)(v65 * LANES128(v68).n128_f32[1]);
          v75 = vmuls_lane_f32(v67, v68, 3) +
                (float)(v65 * LANES128(v68).n128_f32[2]);
          v76 = v75 - (float)(LANES128(v68).n128_f32[0] * v66);
          v77 = (float)(vmuls_lane_f32(
                            v67,
                            COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                            1) +
                        (float)(v65 * LANES128(v68).n128_f32[0])) +
                (float)(v66 * LANES128(v68).n128_f32[2]);
          *(float*)(v18 + 16) =
              (float)((float)(vmuls_lane_f32(
                                  -(float)(v75 +
                                           (float)((float)-v66 *
                                                   LANES128(v68).n128_f32[0])),
                                  v68, 2) +
                              (float)(v74 * LANES128(v68).n128_f32[1])) +
                      (float)(v77 * LANES128(v68).n128_f32[0])) +
              (float)(v73 * LANES128(v68).n128_f32[3]);
          *(float*)(v18 + 20) =
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v71 *
                                  COERCE_FLOAT(*(_OWORD*)(v64 + 16 * v9)))) +
                              (float)(v73 * COERCE_FLOAT(*(
                                                _QWORD*)(v64 + 16 * v9 + 8)))) +
                      (float)(v77 * COERCE_FLOAT(
                                        HIDWORD(*(_QWORD*)(v64 + 16 * v9))))) +
              (float)(v76 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v64 + 16 * v9))));
          *(float*)(v18 + 24) =
              (float)((float)(vmuls_lane_f32(
                                  v72, *(float32x2_t*)(v64 + 16 * v9), 1) +
                              (float)(COERCE_FLOAT(*(_OWORD*)(v64 + 16 * v9)) *
                                      v76)) +
                      (float)(v77 *
                              COERCE_FLOAT(*(_QWORD*)(v64 + 16 * v9 + 8)))) +
              (float)(v74 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v64 + 16 * v9))));
          ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
               [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                     6) +
                1])(v18, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                    96LL * v16 + 52) &
                             0x700000);
        }
        goto LABEL_8;
      }
      if ((v19 & 0x1E00) != 0) {
        if ((*(_DWORD*)(*(_QWORD*)(v15 + 16) + 96LL * v16 + 52) & 0x700000) !=
            0x400000) {
          v58 = 12;
          v59 = *(_QWORD*)(v10 + v8 - 31);
          if ((v19 & 8) == 0) {
            v58 = 0;
          }
          v60 = (__int64*)(v59 + v58);
          v61 = *v60;
          *(_DWORD*)(v18 + 40) = *((_DWORD*)v60 + 2);
          *(_QWORD*)(v18 + 32) = v61;
        }
        LODWORD(a2) = v5;
        CameraAnimObj_5e9680(v12, v18, a2);
        ((void (*)(__int64, _QWORD))SkeletalAnimObj_5f6770_ptr
             [3 * ((unsigned __int8)*(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL) >>
                   6)])(v18,
                        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16LL) +
                                   96LL * v16 + 52) &
                            0x700000);
        goto LABEL_8;
      }
    LABEL_7:
      LODWORD(a2) = v5;
      CameraAnimObj_5e9680(v12, v18, a2);
    LABEL_8:
      ++v9;
      v8 += 56;
      if (v3 == v9) {
        return;
      }
    }
    v13 = *(_DWORD*)(v11 + 4 * v9);
  LABEL_20:
    if ((v13 & 0x40000000) != 0) {
      goto LABEL_8;
    }
    v41 = (unsigned __int8*)(v10 + v8);
    v18 = v2 + 48 * v9;
    if ((*(v41 - 6) & 0xE0) != 0) {
      LODWORD(a2) = v5;
      v42 = *(_QWORD*)(v41 - 31) + 4LL * *v41;
      v43 = *(_QWORD*)v42;
      *(_DWORD*)(v18 + 24) = *(_DWORD*)(v42 + 8);
      *(_QWORD*)(v18 + 16) = v43;
      CameraAnimObj_5e9680(v12, v2 + 48 * v9, a2);
      v44 = *(_QWORD*)(a1 + 128);
      v45 = *(float*)(v18 + 16);
      v47 = *(float*)(v18 + 20);
      v46 = *(float*)(v18 + 24);
      v48 = *(float32x4_t*)(v44 + 16 * v9);
      v49 = vmuls_lane_f32(v45, v48, 3) +
            (float)(v46 * LANES128(v48).n128_f32[1]);
      v50 = vmuls_lane_f32(v46, v48, 3) +
            (float)(v47 * LANES128(v48).n128_f32[0]);
      v51 = -(float)(v50 +
                     (float)((float)-v45 *
                             COERCE_FLOAT(HIDWORD(*(_QWORD*)(v44 + 16 * v9)))));
      v52 =
          -(float)(v49 + (float)((float)-v47 *
                                 COERCE_FLOAT(*(_QWORD*)(v44 + 16 * v9 + 8))));
      v53 = v49 - (float)(v47 * LANES128(v48).n128_f32[2]);
      v54 = v50 - (float)(v45 * LANES128(v48).n128_f32[1]);
      v55 = vmuls_lane_f32(v47, v48, 3) +
            (float)(v45 * LANES128(v48).n128_f32[2]);
      v56 = v55 - (float)(LANES128(v48).n128_f32[0] * v46);
      v57 = (float)(vmuls_lane_f32(
                        v47, COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                        1) +
                    (float)(v45 * LANES128(v48).n128_f32[0])) +
            (float)(v46 * LANES128(v48).n128_f32[2]);
      *(float*)(v18 + 16) =
          (float)((float)(vmuls_lane_f32(
                              -(float)(v55 +
                                       (float)((float)-v46 *
                                               LANES128(v48).n128_f32[0])),
                              v48, 2) +
                          (float)(v54 * LANES128(v48).n128_f32[1])) +
                  (float)(v57 * LANES128(v48).n128_f32[0])) +
          (float)(v53 * LANES128(v48).n128_f32[3]);
      *(float*)(v18 + 20) =
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v51 * COERCE_FLOAT(*(_OWORD*)(v44 + 16 * v9)))) +
                          (float)(v53 * COERCE_FLOAT(
                                            *(_QWORD*)(v44 + 16 * v9 + 8)))) +
                  (float)(v57 *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v44 + 16 * v9))))) +
          (float)(v56 * COERCE_FLOAT(HIDWORD(*(_OWORD*)(v44 + 16 * v9))));
      a2 = *(long double*)(v44 + 16 * v9);
      *(float*)(v18 + 24) =
          (float)((float)(vmuls_lane_f32(v52, *(float32x2_t*)&a2, 1) +
                          (float)(*(float*)&a2 * v56)) +
                  (float)(v57 * *((float*)&a2 + 2))) +
          (float)(v54 * *((float*)&a2 + 3));
      goto LABEL_8;
    }
    goto LABEL_7;
  }
}

int8x8_t nn_g3d_5f3f20(__int64 a1, float32x4_t* a2, int8x16_t* a3,
                       int8x16_t* a4)
{
  int8x16_t v4;
  int8x16_t v5;
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float v14;
  int8x16_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x8_t result;
  int8x16x2_t v41;

  v4 = a3[3];
  v5 = vmulq_f32(v4, v4);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  v6 = COERCE_AS(int8x16_t, GameData_1a82dc0);
  v7 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
           .n64_f32[0];
  if (v7 != 0x0.0p+0f) {
    v8 = a3[2];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v10).n128_i8[8] =
        vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v9).n128_i8[8] =
        vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v11 = vmulq_f32(v10, v9);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v10).n128_i8[8] =
        vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v12 = vmlsq_f32(v11, v8, v10);
    v13 = vmulq_f32(v12, v12);
    LANES128(v13).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_u64[0];
    v14 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
            .n64_f32[0];
    if (v14 != 0x0.0p+0f) {
      v15 = vmulq_n_f32(a3[3], 0x1.0000000000000p+0f / sqrtf(v7));
      v16 = vmulq_n_f32(v12, 0x1.0000000000000p+0f / sqrtf(v14));
      LANES128(v17).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v18).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v17).n128_i8[8] =
          vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v18).n128_i8[8] =
          vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v19 = vmulq_f32(v17, v18);
      LANES128(v17).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v17).n128_i8[8] =
          vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v20).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v20).n128_i8[8] =
          vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v21 = vmlsq_f32(v19, v20, v17);
      LANES128(v20).n128_u64[0] = 0xBF800000BF800000LL;
      LANES128(v20).n128_u64[1] = 0xBF800000BF800000LL;
      LANES128(v17).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v17).n128_u64[1] = 0x3F8000003F800000LL;
      v22 = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83520),
                                      LANES128(v21).n128_f32[0]),
                          vnegq_f64(v20),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83210),
                      LANES128(v16).n128_f32[2]),
          v17);
      LANES128(v23).n128_u32[0] = LANES128(v15).n128_u32[0];
      LANES128(v23).n128_u32[1] = LANES128(v21).n128_u32[2];
      LANES128(v23).n128_u64[1] = LANES128(v16).n128_u32[1];
      LANES128(v20).n128_u32[0] = LANES128(v21).n128_u32[1];
      LANES128(v20).n128_u32[1] = LANES128(v16).n128_u32[0];
      LANES128(v20).n128_u64[1] = LANES128(v15).n128_u32[2];
      v41.val[0] = vaddq_f32(v20, v23);
      v41.val[1] = vsubq_f32(v23, v20);
      LANES128(v15).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x302010003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v20).n128_i8[8] =
          vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
      LANES128(v20).n128_u64[0] =
          __PAIR64__(LANES128(v15).n128_u32[1], LANES128(v22).n128_u32[0]);
      *(int8x8_t*)&LANES128(v15).n128_i8[8] =
          vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
      LANES128(v23).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v23).n128_u32[3] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u32[1];
      LANES128(v15).n128_u32[1] = LANES128(v22).n128_u32[1];
      LANES128(v18).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
              .n64_u64[0];
      LANES128(v23).n128_u32[2] = LANES128(v22).n128_u32[2];
      LANES128(v41.val[0]).n128_u32[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x302010013121110LL)))
              .n64_u32[0];
      v41.val[1] =
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
      v24 = vdupq_laneq_s32(v22, 2);
      LANES128(v18).n128_u64[1] = __PAIR64__(LANES128(v22).n128_u32[3],
                                             LANES128(v41.val[0]).n128_u32[0]);
      v41.val[0] =
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 0);
      v25 = vcgeq_f32(v41.val[1], v41.val[0]);
      v41.val[0] = vbslq_s8(v25, v41.val[1], v41.val[0]);
      v26 = vbslq_s8(v25, v15, v20);
      v27 = vcgeq_f32(v24, v41.val[0]);
      v28 = vbslq_s8(
          vcgeq_f32(vdupq_laneq_s32(v22, 3), vbslq_s8(v27, v24, v41.val[0])),
          v18, vbslq_s8(v27, v23, v26));
      v29 = vmulq_f32(v28, v28);
      LANES128(v29).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
              .n64_u64[0];
      LANES128(v29).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
              .n64_u64[0];
      LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
      v30 = vrsqrteq_f32(v29);
      v31 = vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(v29, v30)));
      v6 = vbicq_s8(
          vmulq_f32(vmulq_f32(v31, vrsqrtsq_f32(v31, vmulq_f32(v29, v31))),
                    v28),
          vceqzq_f32(v29));
    }
  }
  v32 = a4[2];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] = LANES128(v6).n128_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v33).n128_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v38 = vmlaq_f32(vmulq_f32(v32, v36), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v34, v37));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v35).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
  LANES128(v33).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v6).n128_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES64(result).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v39).n128_i8[8] = result;
  a2[2] = vmlsq_f32(vmlaq_f32(v38, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v37, v35)),
                    v39, v33);
  return result;
}

__n128 nn_g3d_5f42a0(__int64 a1, float32x4_t* a2, int8x16_t* a3, int8x16_t* a4)
{
  int8x16_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  __n128 result;

  v4 = a3[2];
  v5 = a4[2];
  LANES128(v6).n128_u64[0] = LANES128(a3[2]).n128_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  LANES128(v6).n128_u64[1] = LANES128(v9).n128_u64[0];
  *(int32x2_t*)&LANES128(v10).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v11 = vmlaq_f32(vmulq_f32(v5, v7), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v6, v8));
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v9).n128_u64[1] = LANES128(v6).n128_u64[0];
  LANES128(v6).n128_u64[1] = LANES128(a3[2]).n128_u64[0];
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(result).n128_i8[8] =
      vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  a2[2] = vmlsq_f32(vmlaq_f32(v11, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v6, v10)),
                    result, v9);
  return result;
}

__int64 nn_g3d_5f4620(__int64 result, float32x4_t* a2)
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
  int8x16_t v14;
  int8x16_t v15;
  float v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float v23;

  if (*(_WORD*)(result + 10) != 0) {
    v2 = a2 + 5;
    v3 = 0;
    v4 = (float32x4_t*)(*(_QWORD*)result + 48LL);
    do {
      if (fabsf(LANES128(v4[1]).n128_f32[1]) >= 0x1.0624de0000000p-10f) {
        LANES128(v2[-5]).n128_u32[0] =
            (LANES128(v2[-5]).n128_u32[0] & 0xF07FFFFF |
             (((LANES128(v4[1]).n128_u32[0] >> 23) & 0x1F) << 23)) ^
            0xF800000;
        LANES128(v2[-4]).n128_u64[1] = LANES128(v4[-3]).n128_u64[1];
        LANES128(v2[-4]).n128_u64[0] = LANES128(v4[-3]).n128_u64[0];
        *v2 = v4[-2];
        v14 = *v4;
        v15 = vmulq_f32(v14, v14);
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        v16 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                  .n64_f32[0];
        if (v16 != 0x0.0p+0f) {
          v17 = v4[-1];
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v18).n128_i8[8] =
              vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v19).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v19).n128_i8[8] =
              vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v20 = vmulq_f32(v19, v18);
          LANES128(v19).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v19).n128_i8[8] =
              vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v17).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v17).n128_i8[8] =
              vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v21 = vmlsq_f32(v20, v17, v19);
          v22 = vmulq_f32(v21, v21);
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_u64[0];
          v23 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_f32[0];
          if (v23 != 0x0.0p+0f) {
            v5 = vmulq_n_f32(*v4, 0x1.0000000000000p+0f / sqrtf(v16));
            v6 = vmulq_n_f32(v21, 0x1.0000000000000p+0f / sqrtf(v23));
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
            v12 = *v2;
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

__int64* nn_g3d_5f4aa0(__int64* result, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned int v2;
  unsigned __int64 v3;
  __int64 v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  unsigned __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16x2_t v14;
  int8x16x2_t v15;
  int8x16x2_t v16;

  v2 = *((unsigned __int16*)result + 5);
  if (*((_WORD*)result + 5) != 0) {
    v3 = 0;
    v4 = *result;
    do {
      if (fabsf(*(float*)(v4 + 68)) >= 0x1.0624de0000000p-10f) {
        *(_DWORD*)a2 = (*(_DWORD*)a2 & 0xF07FFFFF |
                        (((*(_DWORD*)(v4 + 64) >> 23) & 0x1F) << 23)) ^
                       0xF800000;
        *(_QWORD*)(a2 + 24) = *(_QWORD*)(v4 + 8);
        *(_QWORD*)(a2 + 16) = *(_QWORD*)v4;
        *(_OWORD*)(a2 + 80) = *(_OWORD*)(v4 + 16);
        v14.val[1] = *(int8x16_t*)(v4 + 32);
        LANES128(v14.val[1]).n128_u32[3] = 0;
        LANES128(v5).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v6).n128_u64[0] =
            LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                            LANES128(v14.val[1]).n128_u64[0])))
                .n64_u64[0];
        LANES128(v7).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v8 = LANES64_OF(vqtbl1_s8(v14.val[1],
                                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                 .n64_u64[0];
        *(int8x8_t*)&LANES128(v5).n128_i8[8] =
            vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v6).n128_u64[1] = LANES128(v5).n128_u64[1];
        LANES128(v7).n128_u64[1] = v8;
        v9 = vmulq_f32(v5, v14.val[1]);
        LANES128(v14.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v10 = vmulq_f32(v6, v6);
        v15.val[1] = vmulq_f32(v7, v7);
        v11 = vaddq_f32(v9, v9);
        LANES128(v14.val[1]).n128_u64[1] = v8;
        v12 = vmulq_laneq_f32(v14.val[1], *(float32x4_t*)(v4 + 32), 3);
        v15.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v15.val[1], v15.val[1]), vaddq_f32(v10, v10)));
        v13 = vaddq_f32(v12, v12);
        v16.val[0] = vaddq_f32(v11, v13);
        v16.val[1] = vsubq_f32(v11, v13);
        LANES128(v14.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v15.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v15.val[1]).n128_i8[8] =
            vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        *(int8x8_t*)&LANES128(v14.val[1]).n128_i8[8] =
            vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x706050413121110LL));
        v14.val[0] = v15.val[0];
        LANES128(v11).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v11).n128_i8[8] =
            vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v16.val[0]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v16.val[0]).n128_i8[8] =
            vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v14.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v14.val[0]).n128_i8[8] =
            vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        *(float32x4_t*)(a2 + 32) = v11;
        *(int8x16_t*)(a2 + 48) = v16.val[0];
        *(int8x16_t*)(a2 + 64) = v14.val[0];
        v2 = *((unsigned __int16*)result + 5);
      }
      ++v3;
      v4 += 80;
      a2 += 96;
    } while (v3 < v2);
  }
  return result;
}

float32x2_t nn_g3d_5f5100(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5)
{
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  int8x16_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x2_t result;

  *(float*)&a5 = 0x1.0000000000000p+0f / *(float*)(a3 + 4);
  *((float*)&a5 + 1) = 0x1.0000000000000p+0f / *(float*)(a3 + 8);
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / *(float*)(a3 + 12);
  LANES128(v5).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v5).n128_u64[1] = *(unsigned int*)(a2 + 12);
  v6 = vmulq_f32(*(float32x4_t*)&a5, v5);
  *(_QWORD*)(a1 + 4) = LANES128(v6).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v6).n128_u32[2];
  v7 = *(float32x4_t*)(a3 + 32);
  v8 = *(int8x16_t*)(a2 + 32);
  v9 = vmulq_f32(v7, COERCE_AS(float32x4_t, GameData_1a829d0));
  v10 = vmulq_f32(v7, v7);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
  v11 = vrecpeq_f32(v10);
  v12 = vmulq_f32(v11, vrecpsq_f32(v11, v10));
  v13 = vbslq_s8(vceqzq_f32(v10), v9,
                 vmulq_f32(v9, vmulq_f32(v12, vrecpsq_f32(v12, v10))));
  LANES128(v14).n128_u64[0] = LANES128(v13).n128_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v15).n128_u64[0];
  *(int32x2_t*)&LANES128(v16).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v17 = vmlaq_f32(vmulq_f32(v8, v12), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v14, v9));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v14).n128_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v13).n128_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v14, v16)),
                v13, v15);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v13).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), *(float32x2_t*)(a3 + 16)))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v17, n128_u64, *(unsigned int*)(a3 + 24));
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f5400(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5)
{
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t* v11;
  int8x16_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x2_t result;
  int8x16_t v22;
  __int128 v23;

  *(float*)&a5 = 0x1.0000000000000p+0f / LANES64(*(a3)).n64_f32[1];
  *((float*)&a5 + 1) = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[0];
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[1];
  LANES128(v8).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v8).n128_u64[1] = *(unsigned int*)(a2 + 12);
  v9 = vmulq_f32(*(float32x4_t*)&a5, v8);
  *(_QWORD*)(a1 + 4) = LANES128(v9).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v9).n128_u32[2];
  v10 = *(int8x16_t*)(a2 + 32);
  if ((LANES64(*(a3)).n64_u8[2] & 0x30) != 0) {
    v11 = (float32x4_t*)&a3[4];
  }
  else {
    v23 = (__typeof__(v23)){0};
    v11 = (float32x4_t*)&v23;
    v22 = v10;
    GameRoutine_5f8490(&v23, (float*)a3);
    v10 = v22;
  }
  v12 = vmulq_f32(*v11, COERCE_AS(float32x4_t, GameData_1a829d0));
  v13 = vmulq_f32(*v11, *v11);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  v14 = vrecpeq_f32(v13);
  v15 = vmulq_f32(v14, vrecpsq_f32(v14, v13));
  v16 = vbslq_s8(vceqzq_f32(v13), v12,
                 vmulq_f32(v12, vmulq_f32(v15, vrecpsq_f32(v15, v13))));
  LANES128(v17).n128_u64[0] = LANES128(v16).n128_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u64[0];
  *(int32x2_t*)&LANES128(v19).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v10).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v20 = vmlaq_f32(vmulq_f32(v10, v15), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v17, v12));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v20, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v17, v19)),
                v16, v18);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v12).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), a3[2])).n64_u64[0];
  LANES128(v19).n128_u64[0] = LANES64(a3[3]).n64_u32[0];
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f55c0(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5)
{
  float v5;
  unsigned __int64 v6;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x2_t result;
  int8x16_t v24;

  v5 = *(float*)(a3 + 12);
  v6 = *(unsigned int*)(a2 + 12);
  *(float*)&a5 = 0x1.0000000000000p+0f / *(float*)(a3 + 4);
  v10 = 0x1.0000000000000p+0f / *(float*)(a3 + 8);
  v24 = (__typeof__(v24)){0};
  *((float*)&a5 + 1) = v10;
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / v5;
  LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v11).n128_u64[1] = v6;
  v12 = vmulq_f32(*(float32x4_t*)&a5, v11);
  *(_QWORD*)(a1 + 4) = LANES128(v12).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v12).n128_u32[2];
  GameRoutine_5f8490(&v24, (float*)a2);
  v13 = *(float32x4_t*)(a3 + 32);
  v14 = vmulq_f32(v13, COERCE_AS(float32x4_t, GameData_1a829d0));
  v15 = vmulq_f32(v13, v13);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrecpeq_f32(v15);
  v17 = vmulq_f32(v16, vrecpsq_f32(v16, v15));
  v18 = vbslq_s8(vceqzq_f32(v15), v14,
                 vmulq_f32(v14, vmulq_f32(v17, vrecpsq_f32(v17, v15))));
  LANES128(v19).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int32x2_t*)&LANES128(v21).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v22 = vmlaq_f32(vmulq_f32(v24, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v14));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v22, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v19, v21)),
                v18, v20);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v18).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), *(float32x2_t*)(a3 + 16)))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v22, n128_u64, *(unsigned int*)(a3 + 24));
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f5760(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5)
{
  float v5;
  unsigned __int64 v6;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x2_t result;
  float32x4_t v23;
  int8x16_t v24;

  v5 = LANES64(a3[1]).n64_f32[1];
  v6 = *(unsigned int*)(a2 + 12);
  *(float*)&a5 = 0x1.0000000000000p+0f / LANES64(*(a3)).n64_f32[1];
  v10 = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[0];
  v24 = (__typeof__(v24)){0};
  v23 = (__typeof__(v23)){0};
  *((float*)&a5 + 1) = v10;
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / v5;
  LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v11).n128_u64[1] = v6;
  v12 = vmulq_f32(*(float32x4_t*)&a5, v11);
  *(_QWORD*)(a1 + 4) = LANES128(v12).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v12).n128_u32[2];
  GameRoutine_5f8490(&v24, (float*)a2);
  GameRoutine_5f8490(&v23, (float*)a3);
  v13 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a829d0));
  v14 = vmulq_f32(v23, v23);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrecpeq_f32(v14);
  v16 = vmulq_f32(v15, vrecpsq_f32(v15, v14));
  v17 = vbslq_s8(vceqzq_f32(v14), v13,
                 vmulq_f32(v13, vmulq_f32(v16, vrecpsq_f32(v16, v14))));
  LANES128(v18).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int32x2_t*)&LANES128(v20).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v21 = vmlaq_f32(vmulq_f32(v24, v16), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v18, v13));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v21, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v18, v20)),
                v17, v19);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v17).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), a3[2])).n64_u64[0];
  PSEUDO_LOW_LANE128(v21, n128_u64, LANES64(a3[3]).n64_u32[0]);
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f5900(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5)
{
  float v5;
  unsigned __int64 v6;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t* v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x2_t result;
  __int128 v24;
  int8x16_t v25;

  v5 = LANES64(a3[1]).n64_f32[1];
  v6 = *(unsigned int*)(a2 + 12);
  *(float*)&a5 = 0x1.0000000000000p+0f / LANES64(*(a3)).n64_f32[1];
  v10 = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[0];
  v25 = (__typeof__(v25)){0};
  v24 = (__typeof__(v24)){0};
  *((float*)&a5 + 1) = v10;
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / v5;
  LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v11).n128_u64[1] = v6;
  v12 = vmulq_f32(*(float32x4_t*)&a5, v11);
  *(_QWORD*)(a1 + 4) = LANES128(v12).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v12).n128_u32[2];
  GameRoutine_5f8490(&v25, (float*)a2);
  if ((LANES64(*(a3)).n64_u8[2] & 0x30) != 0) {
    v13 = (float32x4_t*)&a3[4];
  }
  else {
    v13 = (float32x4_t*)&v24;
    GameRoutine_5f8490(&v24, (float*)a3);
  }
  v14 = vmulq_f32(*v13, COERCE_AS(float32x4_t, GameData_1a829d0));
  v15 = vmulq_f32(*v13, *v13);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrecpeq_f32(v15);
  v17 = vmulq_f32(v16, vrecpsq_f32(v16, v15));
  v18 = vbslq_s8(vceqzq_f32(v15), v14,
                 vmulq_f32(v14, vmulq_f32(v17, vrecpsq_f32(v17, v15))));
  LANES128(v19).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int32x2_t*)&LANES128(v21).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v22 = vmlaq_f32(vmulq_f32(v25, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v14));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v22, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v19, v21)),
                v18, v20);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v18).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), a3[2])).n64_u64[0];
  PSEUDO_LOW_LANE128(v22, n128_u64, LANES64(a3[3]).n64_u32[0]);
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f5c70(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5)
{
  float v5;
  unsigned __int64 v6;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x2_t result;
  float32x4_t v23;
  int8x16_t v24;

  v5 = LANES64(a3[1]).n64_f32[1];
  v6 = *(unsigned int*)(a2 + 12);
  *(float*)&a5 = 0x1.0000000000000p+0f / LANES64(*(a3)).n64_f32[1];
  v10 = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[0];
  v24 = (__typeof__(v24)){0};
  v23 = (__typeof__(v23)){0};
  *((float*)&a5 + 1) = v10;
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / v5;
  LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v11).n128_u64[1] = v6;
  v12 = vmulq_f32(*(float32x4_t*)&a5, v11);
  *(_QWORD*)(a1 + 4) = LANES128(v12).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v12).n128_u32[2];
  if ((*(_BYTE*)(a2 + 2) & 0x30) != 0) {
    v24 = *(int8x16_t*)(a2 + 32);
  }
  else {
    GameRoutine_5f8490(&v24, (float*)a2);
  }
  GameRoutine_5f8490(&v23, (float*)a3);
  v13 = vmulq_f32(v23, COERCE_AS(float32x4_t, GameData_1a829d0));
  v14 = vmulq_f32(v23, v23);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrecpeq_f32(v14);
  v16 = vmulq_f32(v15, vrecpsq_f32(v15, v14));
  v17 = vbslq_s8(vceqzq_f32(v14), v13,
                 vmulq_f32(v13, vmulq_f32(v16, vrecpsq_f32(v16, v14))));
  LANES128(v18).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int32x2_t*)&LANES128(v20).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v21 = vmlaq_f32(vmulq_f32(v24, v16), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v18, v13));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v21, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v18, v20)),
                v17, v19);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v17).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), a3[2])).n64_u64[0];
  PSEUDO_LOW_LANE128(v21, n128_u64, LANES64(a3[3]).n64_u32[0]);
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u32[0];
  return result;
}

float32x2_t nn_g3d_5f5e30(__int64 a1, __int64 a2, float32x2_t* a3, double a4,
                          long double a5)
{
  float v5;
  unsigned __int64 v6;
  float v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t* v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x2_t result;
  __int128 v24;
  int8x16_t v25;

  v5 = LANES64(a3[1]).n64_f32[1];
  v6 = *(unsigned int*)(a2 + 12);
  *(float*)&a5 = 0x1.0000000000000p+0f / LANES64(*(a3)).n64_f32[1];
  v10 = 0x1.0000000000000p+0f / LANES64(a3[1]).n64_f32[0];
  v25 = (__typeof__(v25)){0};
  v24 = (__typeof__(v24)){0};
  *((float*)&a5 + 1) = v10;
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / v5;
  LANES128(v11).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v11).n128_u64[1] = v6;
  v12 = vmulq_f32(*(float32x4_t*)&a5, v11);
  *(_QWORD*)(a1 + 4) = LANES128(v12).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v12).n128_u32[2];
  if ((*(_BYTE*)(a2 + 2) & 0x30) == 0) {
    GameRoutine_5f8490(&v25, (float*)a2);
    if ((LANES64(*(a3)).n64_u8[2] & 0x30) != 0) {
      goto LABEL_3;
    }
  LABEL_5:
    v13 = (float32x4_t*)&v24;
    GameRoutine_5f8490(&v24, (float*)a3);
    goto LABEL_6;
  }
  v25 = *(int8x16_t*)(a2 + 32);
  if ((LANES64(*(a3)).n64_u8[2] & 0x30) == 0) {
    goto LABEL_5;
  }
LABEL_3:
  v13 = (float32x4_t*)&a3[4];
LABEL_6:
  v14 = vmulq_f32(*v13, COERCE_AS(float32x4_t, GameData_1a829d0));
  v15 = vmulq_f32(*v13, *v13);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrecpeq_f32(v15);
  v17 = vmulq_f32(v16, vrecpsq_f32(v16, v15));
  v18 = vbslq_s8(vceqzq_f32(v15), v14,
                 vmulq_f32(v14, vmulq_f32(v17, vrecpsq_f32(v17, v15))));
  LANES128(v19).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int32x2_t*)&LANES128(v21).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v22 = vmlaq_f32(vmulq_f32(v25, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v14));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v22, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v19, v21)),
                v18, v20);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v18).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), a3[2])).n64_u64[0];
  PSEUDO_LOW_LANE128(v22, n128_u64, LANES64(a3[3]).n64_u32[0]);
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u32[0];
  return result;
}

#pragma GCC visibility pop
