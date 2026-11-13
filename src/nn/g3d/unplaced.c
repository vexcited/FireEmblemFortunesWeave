#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* Model_5e1fe0(__int64* result);
__int64 GameRoutine_5dfff0(__int64 result, int, char);
__int64 GameRoutine_5e8370(__int64 result, __int64);
__int64 GameRoutine_5eb740(int*);
__int64 GameRoutine_5f8490(_OWORD*, float*);
__int64 GameRoutine_5fcb50(_QWORD);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(_QWORD, _QWORD, _QWORD);
__int64 Model_5fa4a0(__int64 result);
extern _UNKNOWN* GameData_2135448;
extern _UNKNOWN* GameData_21365f8;
extern _UNKNOWN* GameData_2136608;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1f8dbd8[4])();
extern int* GameData_2136530;
float powf(_QWORD, float, float);
float32x4_t* GameRoutine_5f80f0(float32x4_t* result, float32x4_t*, float,
                                double, double, double, double, double);
float32x4_t* GameRoutine_5f80f0_alt1(float32x4_t* result, float32x4_t*,
                                     float) __asm__("GameRoutine_5f80f0");
float32x4_t* GameRoutine_5f80f0_alt2(float32x4_t* result, float32x4_t*, float,
                                     double) __asm__("GameRoutine_5f80f0");
int8x16_t* GameRoutine_5f7910(int8x16_t* result, unsigned int, float32x4_t,
                              float);
__int64 nn_g3d_5e2c00(__int64 result);
_QWORD* nn_g3d_5e3ab0(__int64 a1, int a2);
float nn_g3d_5e3d00(__int64* a1, __int64 a2, float a3);
__int64 nn_g3d_5e9f40(__int64 a1, __int64 a2);
bool nn_g3d_5eb5c0(__int64 a1, float32x4_t* a2);
float32x4_t nn_g3d_5ed500(_QWORD* a1, __int64 a2, int a3);
void nn_g3d_5f1f50(__int64* a1, __int64 a2, float a3);
void nn_g3d_5f2710(__int64* a1, __int64 a2, double a3, double a4,
                   long double a5, double a6, double a7, double a8);
void nn_g3d_5f2920(__int64* a1, __int64 a2, float a3);
void nn_g3d_5f2d90(__int64* a1, __int64 a2, float a3);
void nn_g3d_5f2f90(__int64* a1, __int64 a2, float a3);
void nn_g3d_5f31a0(__int64* a1, __int64 a2, float a3);
void nn_g3d_5f33e0(__int64 a1, __int64 a2, __int64 a3, int a4, float a5);
void nn_g3d_5f3620(__int64 a1, __int64 a2, __int64 a3, int a4, float a5);
void nn_g3d_5f3800(__int64 a1, __int64 a2, __int64 a3, int a4, float a5);
__int64 nn_g3d_5f48c0(__int64 result, float32x4_t* a2);
__int64 nn_g3d_5f5020(__int64 result);
float32x2_t nn_g3d_5f5ac0(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5);
__int64 nn_g3d_5f6180(__int64 result, unsigned __int16* a2, __int64 a3,
                      float a4);
__int64 nn_g3d_5f66c0(__int64 result);
extern _UNKNOWN* nn_g3d_5f33e0_ptr_ptr;
extern _UNKNOWN* nn_g3d_5f5100_ptr_ptr;
extern __int64 (*nn_g3d_5f3f20_ptr[4])();
float powf_alt1(float, float) __asm__("powf");
int8x16_t* SkeletalAnimObj_5f7910(int8x16_t* result, unsigned int, float32x4_t,
                                  float);

__int64 nn_g3d_5e2c00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  int v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39[2];
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
  } v39_;

  v1 = *(_QWORD*)result;
  v2 = result;
  v3 = *(_QWORD*)(*(_QWORD*)result + 24LL);
  if (*(_QWORD*)(result + 8) != 0) {
    v4 = *(unsigned __int16*)(v1 + 106);
    v37 = v4;
    v38 = *(unsigned __int16*)(v1 + 108);
    v35 = *(unsigned __int16*)(v3 + 56);
    v36 = 0;
    if (*(_WORD*)(v1 + 106) != 0) {
    LABEL_3:
      v5 = *(_DWORD*)(v2 + 28);
      v6 = 0;
      v7 = 0;
      v8 = 96 * v4;
      do {
        v9 = *(_QWORD*)(v1 + 40);
        v10 = *(_DWORD*)(v2 + 20);
        v39_.v40 = 0;
        v39_.v41 = 0;
        v39_.v44 = 0;
        v39_.v45 = 8;
        v39_.v46 = 0;
        v39_.v47 = -1;
        v39_.v48 = 0;
        v39_.v49 = 8;
        v39_.v50 = 0;
        v39_.v51 = -1;
        v39_.v52 = 0;
        v39_.v53 = 8;
        v39_.v54 = 0;
        v39_.v55 = -1;
        v39_.v56 = 0;
        v39_.v57 = 8;
        v39_.v58 = 0;
        v39_.v59 = -1;
        v39_.v60 = 0;
        v39_.v61 = 8;
        v39_.v62 = 0;
        v39_.v63 = -1;
        v39_.v64 = 0;
        v39_.v65 = 8;
        v39_.v66 = 0;
        v39_.v67 = -1;
        v39_.v68 = 0;
        v39_.v69 = 8;
        v39_.v70 = 0;
        v39_.v71 = -1;
        v39_.v72 = 0;
        v39_.v73 = 8;
        v39_.v74 = 0;
        v39_.v75 = -1;
        v39_.v42 = 0;
        v39_.v43 = 0;
        v39_.v39[1] = v10 | 0x100000000LL;
        v11 = *(_QWORD*)(v3 + 16);
        v39_.v39[0] = v9 + v6;
        LODWORD(v9) =
            *(_DWORD*)(v11 + 96LL * *(unsigned __int16*)(v9 + v6 + 84) + 52);
        HIDWORD(v39_.v39[1]) = v5;
        v39_.v40 = (v9 & 0x70000) != 0;
        BYTE1(v39_.v40) = *(_BYTE*)(v2 + 48);
        v39_.v41 = *(_QWORD*)(v2 + 40);
        result = GameRoutine_5eb740((int*)v39_.v39);
        v6 += 96;
        v7 += (v39_.v42 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      } while (v8 != v6);
      v12 = v38;
      if ((_DWORD)v38 != 0) {
        goto LABEL_6;
      }
    LABEL_11:
      v14 = 0;
      goto LABEL_12;
    }
  }
  else {
    v39_.v39[0] = *(_QWORD*)(*(_QWORD*)result + 24LL);
    v39_.v39[1] = 0;
    v39_.v40 = 0;
    v39_.v41 = 0;
    v39_.v42 = 0;
    v39_.v43 = 8;
    v39_.v46 = 0;
    v39_.v47 = 8;
    v39_.v50 = 0;
    v39_.v51 = 8;
    v39_.v54 = 0;
    v39_.v55 = 8;
    v16 = *(_DWORD*)(result + 16);
    v39_.v44 = 0;
    v39_.v45 = -1;
    v39_.v48 = 0;
    v39_.v49 = -1;
    v39_.v52 = 0;
    v39_.v53 = -1;
    v39_.v56 = 0;
    v39_.v57 = -1;
    LODWORD(v39_.v39[1]) = v16;
    result = Model_5fa4a0((__int64)v39_.v39);
    v4 = *(unsigned __int16*)(v1 + 106);
    v37 = v4;
    v38 = *(unsigned __int16*)(v1 + 108);
    v35 = *(unsigned __int16*)(v3 + 56);
    v36 = (v39_.v40 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if (*(_WORD*)(v1 + 106) != 0) {
      goto LABEL_3;
    }
  }
  v7 = 0;
  v12 = v38;
  if ((_DWORD)v38 == 0) {
    goto LABEL_11;
  }
LABEL_6:
  v13 = 0;
  v14 = 0;
  do {
    v15 = *(_QWORD*)(v1 + 56);
    v39_.v42 = 0;
    v39_.v43 = 8;
    v39_.v44 = 0;
    v39_.v45 = -1;
    v39_.v46 = 0;
    v39_.v47 = 8;
    v39_.v48 = 0;
    v39_.v49 = -1;
    v39_.v50 = 0;
    v39_.v51 = 8;
    v39_.v52 = 0;
    v39_.v53 = -1;
    v39_.v54 = 0;
    v39_.v55 = 8;
    v39_.v56 = 0;
    v39_.v57 = -1;
    v39_.v58 = 0;
    v39_.v59 = 8;
    v39_.v60 = 0;
    v39_.v61 = -1;
    v39_.v40 = 0;
    v39_.v41 = 0;
    v39_.v39[0] = v15 + v13;
    v39_.v39[1] = 0;
    LODWORD(v39_.v39[1]) = *(_DWORD*)(v2 + 24);
    result = (__int64)Model_5e1fe0(v39_.v39);
    v13 += 168;
    v14 += (v39_.v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  } while (168LL * (unsigned int)v12 != v13);
LABEL_12:
  v17 = v36;
  v18 = 8;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = -1;
  *(_QWORD*)(v2 + 216) = 0;
  *(_QWORD*)(v2 + 224) = -1;
  *(_QWORD*)(v2 + 248) = 0;
  *(_QWORD*)(v2 + 256) = -1;
  *(_QWORD*)(v2 + 280) = 0;
  *(_QWORD*)(v2 + 288) = -1;
  v19 = v12 << 7;
  *(_QWORD*)(v2 + 312) = 0;
  *(_QWORD*)(v2 + 320) = -1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = -1;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = -1;
  *(_QWORD*)(v2 + 152) = 0;
  *(_QWORD*)(v2 + 160) = -1;
  *(_QWORD*)(v2 + 168) = 128;
  *(_QWORD*)(v2 + 176) = 8;
  *(_QWORD*)(v2 + 344) = 0;
  *(_QWORD*)(v2 + 352) = -1;
  v20 = *(_BYTE*)(v2 + 48) == 0;
  v21 = *(int*)(v2 + 32);
  *(_QWORD*)(v2 + 72) = v36;
  *(_QWORD*)(v2 + 80) = 16;
  *(_QWORD*)(v2 + 104) = v7;
  *(_QWORD*)(v2 + 112) = 16;
  v22 = 32 * v21;
  *(_QWORD*)(v2 + 136) = v14;
  *(_QWORD*)(v2 + 144) = 8;
  *(_QWORD*)(v2 + 200) = 112 * v37;
  *(_QWORD*)(v2 + 208) = 8;
  *(_QWORD*)(v2 + 232) = v12 << 7;
  *(_QWORD*)(v2 + 240) = 8;
  if (v20) {
    v22 = 0;
  }
  v23 = ((unsigned int)(v35 + 31) >> 3) & 0x3FFC;
  *(_QWORD*)(v2 + 328) = v22;
  *(_QWORD*)(v2 + 336) = 16;
  *(_QWORD*)(v2 + 264) = v23;
  *(_QWORD*)(v2 + 272) = 8;
  v24 = ((unsigned int)(v12 + 31) >> 3) & 0x3FFCLL;
  *(_QWORD*)(v2 + 296) = v24;
  *(_QWORD*)(v2 + 304) = 8;
  if (v36 != 0) {
    v18 = 16;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 96) = 0;
  }
  if (v7 != 0) {
    *(_QWORD*)(v2 + 128) = v36;
    v17 = v36 + v7;
    v18 = 16;
  }
  if (v14 != 0) {
    v25 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v25 + v14;
    *(_QWORD*)(v2 + 160) = v25;
  }
  v26 = *(_QWORD*)(v2 + 176);
  if (v18 <= v26) {
    v18 = *(_QWORD*)(v2 + 176);
  }
  v27 = ((v26 + *(_QWORD*)(v2 + 184) + v17 - 1) & -(__int64)v26) -
        *(_QWORD*)(v2 + 184);
  v28 = v27 + 128;
  *(_QWORD*)(v2 + 192) = v27;
  *(_QWORD*)(v2 + 56) = v27 + 128;
  *(_QWORD*)(v2 + 64) = v18;
  if ((_DWORD)v37 != 0) {
    v29 = (v27 + 135) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD*)(v2 + 224) = v29;
    v28 = v29 + 112 * v37;
    *(_QWORD*)(v2 + 56) = v28;
  }
  if ((_DWORD)v12 != 0) {
    v30 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v28 = v30 + v19;
    *(_QWORD*)(v2 + 256) = v30;
    *(_QWORD*)(v2 + 56) = v30 + v19;
    *(_QWORD*)(v2 + 64) = v18;
  }
  if (v23 != 0) {
    v31 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v28 = v31 + v23;
    *(_QWORD*)(v2 + 288) = v31;
    *(_QWORD*)(v2 + 56) = v31 + v23;
    *(_QWORD*)(v2 + 64) = v18;
  }
  if (v24 != 0) {
    v32 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v28 = v32 + v24;
    *(_QWORD*)(v2 + 320) = v32;
    *(_QWORD*)(v2 + 56) = v32 + v24;
    *(_QWORD*)(v2 + 64) = v18;
  }
  if (v22 != 0) {
    v33 = 16;
    v34 = (v28 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if (v18 > 0x10) {
      v33 = v18;
    }
    *(_QWORD*)(v2 + 352) = v34;
    *(_QWORD*)(v2 + 56) = v34 + v22;
    *(_QWORD*)(v2 + 64) = v33;
  }
  return result;
}

_QWORD* nn_g3d_5e3ab0(__int64 a1, int a2)
{
  _QWORD* result;
  _QWORD* v3;
  __int16* v5;
  float32x4_t* v6;
  __int64 v7;
  __int64 v8;
  int32x4_t* v9;
  float32x4_t* v10;
  __int16* v11;
  __int64 v12;
  __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int32x4_t* v32;
  int32x4_t* v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  __int64 v40;
  int32x4_t* v41;
  __int64 v42;
  __int16* v43;
  int32x4_t* v44;
  __int64 v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  __int64 v51;
  int32x4_t* v52;
  int32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  float* v58;
  __int64 v59;
  float32x2x2_t v60;
  float32x2x2_t v61;
  float32x2x2_t v62;
  float32x2x2_t v63;
  float32x2x2_t v64;

  result = *(_QWORD**)(a1 + 32);
  if (result[9] != 0) {
    v3 = result;
    v5 = *(__int16**)(*result + 24LL);
    v6 = *(float32x4_t**)(*result + 32LL);
    v7 = GameRoutine_5fcb50(result[8] + 72LL * a2);
    v8 = *(unsigned __int16*)(*v3 + 58LL);
    if (*(_WORD*)(*v3 + 58LL) != 0) {
      v9 = (int32x4_t*)(v7 + 16);
      v10 = v6 + 1;
      v11 = v5;
      v12 = *(unsigned __int16*)(*v3 + 58LL);
      do {
        v13 = *v11++;
        v14 = v10[-1];
        v15 = *v10;
        --v12;
        v16 = (float32x4_t*)(v3[4] + (v13 << 6));
        v17 = v10[1];
        v10 += 3;
        v18 = v16[1];
        v19 = v16[2];
        v20 = vmlaq_n_f32(
            vmlaq_n_f32(vmulq_n_f32(*v16, LANES128(v14).n128_f32[0]), v18,
                        LANES128(v15).n128_f32[0]),
            v19, LANES128(v17).n128_f32[0]);
        v21 = vmlaq_lane_f32(
            vmlaq_lane_f32(
                vmulq_lane_f32(
                    *v16, COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1),
                v18, COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
            v19, COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]), 1);
        v22 = vmlaq_laneq_f32(
            vmlaq_laneq_f32(vmulq_laneq_f32(*v16, v14, 2), v18, v15, 2), v19,
            v17, 2);
        v23 = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_laneq_f32(vmulq_laneq_f32(*v16, v14, 3), v18, v15, 3),
                v19, v17, 3),
            v16[3]);
        v24 = vzip1q_s32(v20, v22);
        v25 = vzip1q_s32(v21, v23);
        LANES64(v60.val[0]).n64_u64[0] = LANES128(v24).n128_u64[0];
        LANES64(v60.val[1]).n64_u64[0] = LANES128(v25).n128_u64[0];
        vst2_f32((float*)&v9[-1], v60);
        LANES64(v61.val[0]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(v20, v22)).n128_u64[0];
        LANES64(v61.val[1]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(v21, v23)).n128_u64[0];
        vst2_f32((float*)&v9[1], v61);
        *v9 = vzip2q_s32(v24, v25);
        v9 += 3;
      } while (v12 != 0);
      v26 = *(unsigned __int16*)(*v3 + 58LL);
      v27 = *(unsigned __int16*)(*v3 + 60LL);
      v28 = a2;
      if (v26 + (unsigned int)v27 <= (unsigned int)v8) {
        goto LABEL_14;
      }
    }
    else {
      v26 = 0;
      v27 = *(unsigned __int16*)(*v3 + 60LL);
      v28 = a2;
      if ((unsigned int)v27 <= (unsigned int)v8) {
      LABEL_14:
        v59 = 9 * v28;
        GameRoutine_5fcb80(v3[8] + 72 * v28, 0, v3[9]);
        return (_QWORD*)GameRoutine_5fcb70(v3[8] + 8 * v59);
      }
    }
    v29 = v26 + v27;
    v30 = v8 + 1;
    if ((((_DWORD)v29 - (_DWORD)v8) & 1) != 0) {
      v31 = v5[v8];
      v32 = (int32x4_t*)(v7 + 48LL * (unsigned int)v8);
      v33 = (int32x4_t*)(v3[4] + (v31 << 6));
      v34 = v33[1];
      v35 = v33[2];
      v36 = v33[3];
      v37 = vzip1q_s32(*v33, v35);
      v38 = vzip2q_s32(*v33, v35);
      v39 = vzip1q_s32(v34, v36);
      *v32 = vzip1q_s32(v37, v39);
      v32[1] = vzip2q_s32(v37, v39);
      v32[2] = vzip1q_s32(v38, vzip2q_s32(v34, v36));
      v8 = v30;
    }
    if (v29 != v30) {
      v40 = v26 + v27;
      v41 = (int32x4_t*)(v7 + 48LL * (unsigned int)v8);
      v42 = v40 - v8;
      v43 = &v5[v8 + 1];
      v44 = v41 + 3;
      do {
        v42 -= 2;
        v45 = v3[4] + ((__int64)*(v43 - 1) << 6);
        v46 = *(int32x4_t*)(v45 + 16);
        v47 = *(int32x4_t*)(v45 + 32);
        v48 = *(int32x4_t*)(v45 + 48);
        v49 = vzip1q_s32(*(int32x4_t*)v45, v47);
        v50 = vzip1q_s32(v46, v48);
        LANES64(v64.val[0]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(*(int32x4_t*)v45, v47)).n128_u64[0];
        LANES64(v64.val[1]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(v46, v48)).n128_u64[0];
        LANES64(v62.val[0]).n64_u64[0] = LANES128(v49).n128_u64[0];
        LANES64(v62.val[1]).n64_u64[0] = LANES128(v50).n128_u64[0];
        vst2_f32((float*)&v44[-3], v62);
        vst2_f32((float*)&v44[-1], v64);
        v44[-2] = vzip2q_s32(v49, v50);
        v51 = *v43;
        v43 += 2;
        v52 = (int32x4_t*)(v3[4] + (v51 << 6));
        v53 = v52[1];
        v54 = v52[2];
        v55 = v52[3];
        v56 = vzip1q_s32(*v52, v54);
        v57 = vzip1q_s32(v53, v55);
        LANES64(v64.val[0]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(*v52, v54)).n128_u64[0];
        LANES64(v64.val[1]).n64_u64[0] =
            LANES128_OF(vzip2q_s32(v53, v55)).n128_u64[0];
        LANES64(v63.val[0]).n64_u64[0] = LANES128(v56).n128_u64[0];
        LANES64(v63.val[1]).n64_u64[0] = LANES128(v57).n128_u64[0];
        vst2_f32((float*)v44, v63);
        v44[1] = vzip2q_s32(v56, v57);
        v58 = (float*)&v44[2];
        v44 += 6;
        vst2_f32(v58, v64);
      } while (v42 != 0);
    }
    goto LABEL_14;
  }
  return result;
}

float nn_g3d_5e3d00(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  signed int v5;
  __int64 v6;
  signed int v7;
  int v8;
  float v9;
  float result;
  __int16* v11;
  signed int v12;
  __int16* v13;

  v3 = *a1;
  v4 = *((unsigned __int16*)a1 + 9) - 1LL;
  v5 = vcvtms_s32_f32(a3 * 0x1.0000000000000p+5f);
  if (*(__int16*)(*a1 + 2 * v4) <= v5) {
    *(_DWORD*)(a2 + 8) = (unsigned __int16)(*((_WORD*)a1 + 9) - 1);
    v9 = vcvts_n_f32_s32(*(__int16*)(v3 + 2LL * (unsigned __int16)v4), 5u);
    *(float*)a2 = v9;
    result = v9 + 0x1.0000000000000p+0f;
    *(float*)(a2 + 4) = result;
  }
  else {
    v6 = *(int*)(a2 + 8);
    if (*(__int16*)(v3 + 2 * v6) <= v5) {
      v8 = v6 - 1;
      v11 = (__int16*)(v3 + 2 * v6 + 2);
      do {
        v12 = *v11++;
        ++v8;
      } while (v12 <= v5);
    }
    else {
      do {
        v7 = *(__int16*)(v3 - 2 + 2 * v6);
        v8 = --v6;
      } while (v7 > v5);
    }
    *(_DWORD*)(a2 + 8) = v8;
    v13 = (__int16*)(v3 + 2LL * v8);
    *(float*)a2 = vcvts_n_f32_s32(*v13, 5u);
    result = vcvts_n_f32_s32(v13[1], 5u);
    *(float*)(a2 + 4) = result;
  }
  return result;
}

__int64 nn_g3d_5e9f40(__int64 a1, __int64 a2)
{
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)(a1 + 96) = a2;
  GameRoutine_5dfff0(a1, *(_DWORD*)(a2 + 56), (*(_WORD*)(a2 + 4) & 4) != 0);
  v4 = *(unsigned __int8*)(a2 + 66);
  *(_DWORD*)(a1 + 60) = v4;
  v5 = v4 == 0 || *(_DWORD*)(a1 + 56) < v4;
  *(_DWORD*)(a1 + 64) = *GameData_2136530;
  if (!v5) {
    v6 = 0;
    v7 = 0;
    do {
      ++v7;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v6) = 2139095040;
      v6 += 12;
    } while (v7 < *(int*)(a1 + 60));
  }
  return GameRoutine_5e8370(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72));
}

bool nn_g3d_5eb5c0(__int64 a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  float* v5;
  bool v7;
  int8x16_t v8;
  float v9;
  _BOOL8 result;

  v2 = *(unsigned int*)(a1 + 224);
  if ((int)v2 < 1) {
    return true;
  }
  v3 = LANES128(a2[1]).n128_f32[0];
  v4 = v2 - 1;
  v5 = (float*)(a1 + 48);
  do {
    v7 = v4-- != 0;
    v8 = vmulq_f32(*(float32x4_t*)(v5 - 4), *a2);
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_u64[0];
    v9 = *v5;
    v5 += 8;
    PSEUDO_LOW_LANE128(
        v8, n128_f32,
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
                .n64_f32[0] +
            v9);
    result = LANES128(v8).n128_f32[0] <= v3;
  } while (LANES128(v8).n128_f32[0] <= v3 && v7);
  return result;
}

float32x4_t nn_g3d_5ed500(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int16* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned __int16* v14;
  int v15;
  __int64 v16;
  float32x4_t* v17;
  float32x4_t* v18;
  float* v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int64 v24;
  float32x4_t v25;
  float32x2_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a1[8];
  if (v3 == 0) {
    return result;
  }
  v4 = *a1;
  if (*(_BYTE*)(*a1 + 90LL) != 0) {
    return result;
  }
  v5 = *(_QWORD*)(v4 + 24);
  if (a3 < 1) {
    v8 = 0;
    goto LABEL_13;
  }
  v6 = a3 & 7;
  if ((unsigned int)a3 < 8) {
    v7 = 0;
    v8 = 0;
    if ((a3 & 7) == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v9 = (unsigned __int16*)(v5 + 276);
  v10 = 0;
  v8 = 0;
  do {
    v10 -= 8;
    v11 = v9[84];
    v12 =
        v8 + *(v9 - 112) + *(v9 - 84) + *(v9 - 56) + *(v9 - 28) + *v9 + v9[28];
    v13 = v9[56];
    v9 += 224;
    v8 = v12 + v13 + v11;
  } while (-(__int64)(a3 & 0x7FFFFFF8) != v10);
  v7 = -v10;
  if ((a3 & 7) != 0) {
  LABEL_11:
    v14 = (unsigned __int16*)(v5 + 56 * v7 + 52);
    do {
      v15 = *v14;
      v14 += 28;
      --v6;
      v8 += v15;
    } while (v6 != 0);
  }
LABEL_13:
  v16 = *(unsigned __int16*)(v5 + 56LL * a3 + 52);
  if (v16 != 0) {
    v17 =
        (float32x4_t*)(*(_QWORD*)(a2 + 32) +
                       ((unsigned __int64)*(unsigned __int16*)(v4 + 84) << 6));
    v18 = (float32x4_t*)(v3 + 32LL * v8 + 16);
    v19 = (float*)(*(_QWORD*)(v4 + 56) + 24LL * (int)(v8 + a3) + 16);
    do {
      v20 = v17[1];
      --v16;
      v21 = v17[2];
      v22 = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(
                          vmulq_n_f32(*v17, COERCE_FLOAT(*((_QWORD*)v19 - 2))),
                          v20, *(float32x2_t*)(v19 - 4), 1),
                      v21, *(v19 - 2)),
          v17[3]);
      LANES128(v23).n128_u64[0] =
          __PAIR64__(COERCE_UNSIGNED_INT(fabsf(
                         COERCE_FLOAT(HIDWORD(LANES128(*(v17)).n128_u64[0])))),
                     COERCE_UNSIGNED_INT(fabsf(COERCE_FLOAT(*v17))));
      v24 = *(_QWORD*)(v19 - 1);
      LANES128(v23).n128_u64[1] = COERCE_UNSIGNED_INT(
          fabsf(COERCE_FLOAT(LANES128(*(v17)).n128_u64[1])));
      LANES128(v25).n128_u64[0] =
          __PAIR64__(COERCE_UNSIGNED_INT(fabsf(
                         COERCE_FLOAT(HIDWORD(LANES128(v17[1]).n128_u64[0])))),
                     COERCE_UNSIGNED_INT(fabsf(LANES128(v20).n128_f32[0])));
      PSEUDO_LOW_LANE64(v26, n64_u64, *(unsigned __int64*)v19);
      v19 += 6;
      LANES128(v25).n128_u64[1] = COERCE_UNSIGNED_INT(
          fabsf(COERCE_FLOAT(LANES128(v17[1]).n128_u64[1])));
      v27 = vaddq_f32(vmulq_n_f32(v23, *(float*)&v24),
                      vmulq_n_f32(v25, LANES64(v26).n64_f32[0]));
      LANES128(v25).n128_u64[0] =
          __PAIR64__(COERCE_UNSIGNED_INT(fabsf(
                         COERCE_FLOAT(HIDWORD(LANES128(v17[2]).n128_u64[0])))),
                     COERCE_UNSIGNED_INT(fabsf(LANES128(v21).n128_f32[0])));
      LANES128(v25).n128_u64[1] = COERCE_UNSIGNED_INT(
          fabsf(COERCE_FLOAT(LANES128(v17[2]).n128_u64[1])));
      v28 = vaddq_f32(v27, vmulq_lane_f32(v25, v26, 1));
      v29 = vsubq_f32(v22, v28);
      result = vaddq_f32(v22, v28);
      v18[-1] = v29;
      *v18 = result;
      v18 += 2;
    } while (v16 != 0);
  }
  return result;
}

void nn_g3d_5f1f50(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v8;
  float* v9;
  float32x4_t v10;
  unsigned __int32 v11;
  float32x4_t v12;
  float v13;
  int v14;
  unsigned int v15;
  float v16;
  float v17;
  float v18;
  float32x4_t* v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  unsigned int v28;
  unsigned int v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  unsigned __int32 v34;
  float32x4_t v35;
  float v36;
  float v37;
  float32x4_t v38;
  float v39;
  float v40;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = 4LL * *(unsigned __int16*)(a2 + 100);
    v4 = a3;
    v5 = *a1;
    v8 = 0;
    v9 = (float*)(*(_QWORD*)(a2 + 72) + 24LL);
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x80000000) == 0) {
        v15 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x7FFF;
        if (v15 != 0x7FFF) {
          v17 = v9[2];
          v16 = v9[3];
          v18 = v9[4];
          v19 = (float32x4_t*)(v5 + 80LL * v15);
          v20 = v9[5] + v9[5];
          v21 = v16 * (float)(v16 + v16);
          v22 = v17 * (float)(v17 + v17);
          v23 = v16 * (float)(v17 + v17);
          v24 = v18 * (float)(v17 + v17);
          v25 = v18 * (float)(v18 + v18);
          v26 = (float)(v16 + v16) * v18;
          v27 = v18 * v20;
          *(float*)&v28 = v24 + (float)(v16 * v20);
          *(float*)&v29 = v26 - (float)(v17 * v20);
          LANES128(v30).n128_f32[0] =
              (float)(0x1.0000000000000p+0f - v21) - v25;
          LANES128(v30).n128_f32[1] = v23 - v27;
          LANES128(v30).n128_u64[1] = v28;
          LANES128(v31).n128_f32[0] = v23 + v27;
          LANES128(v31).n128_f32[1] =
              (float)(0x1.0000000000000p+0f - v22) - v25;
          LANES128(v31).n128_u64[1] = v29;
          v32 = vaddq_f32(v19[3], vmulq_n_f32(v31, v4));
          v19[2] = vaddq_f32(v19[2], vmulq_n_f32(v30, v4));
          v19[3] = v32;
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            v40 = powf_alt1(*(v9 - 5), v4);
            v39 = powf_alt1(*(v9 - 4), a3);
            v36 = powf_alt1(*(v9 - 3), a3);
            v37 = LANES128(v19[4]).n128_f32[1];
            v38 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(v37) >= 0x1.0624de0000000p-10f) {
              v38 = *v19;
            }
            v4 = a3;
            LANES128(v10).n128_u64[0] = __PAIR64__(LODWORD(v39), LODWORD(v40));
            v11 = LANES128(v19[4]).n128_u32[0];
            LANES128(v10).n128_u64[1] = LODWORD(v36);
            *v19 = vmulq_f32(v10, v38);
            LANES128(v12).n128_u64[0] = *((_QWORD*)v9 - 1);
            LANES128(v12).n128_u64[1] = *(unsigned int*)v9;
            v19[1] = vaddq_f32(v19[1], vmulq_n_f32(v12, a3));
            v13 = a3 + v37;
            v14 = v11 | ~*((_DWORD*)v9 - 6);
          }
          else {
            LANES128(v33).n128_u64[0] = *(_QWORD*)(v9 - 5);
            v34 = LANES128(v19[4]).n128_u32[0];
            LANES128(v33).n128_u64[1] = *((unsigned int*)v9 - 3);
            v35 = v19[1];
            *v19 = vaddq_f32(*v19, vmulq_n_f32(v33, v4));
            LANES128(v33).n128_u64[0] = *((_QWORD*)v9 - 1);
            LANES128(v33).n128_u64[1] = *(unsigned int*)v9;
            v19[1] = vaddq_f32(v35, vmulq_n_f32(v33, v4));
            v14 = v34 | ~*((_DWORD*)v9 - 6);
            v13 = v4 + LANES128(v19[4]).n128_f32[1];
          }
          LANES128(v19[4]).n128_u32[0] = v14;
          LANES128(v19[4]).n128_f32[1] = v13;
        }
      }
      v8 += 4;
      v9 += 12;
    } while (v3 != v8);
  }
}

void nn_g3d_5f2710(__int64* a1, __int64 a2, double a3, double a4,
                   long double a5, double a6, double a7, double a8)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int v18;
  int v19;
  unsigned int v20;
  float32x4_t* v21;
  __int64 v22;
  float32x4_t* v23;
  __int64 v24;
  float32x4_t v25;
  int v26;
  double v27;
  __int64 v28;
  double v29;
  __int64 v30;
  float v31;
  float32x4_t v32;
  double v33;
  double v34;

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_WORD*)(a2 + 100) != 0) {
    v8 = *(_QWORD*)(a2 + 72);
    v9 = *a1;
    v12 = 0;
    v13 = 0;
    v14 = 48LL * *(unsigned __int16*)(a2 + 100);
    LANES128(v15).n128_u64[1] = 1065353216;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v12) & 0x80000000) != 0) {
        goto LABEL_5;
      }
      v20 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v12) & 0x7FFF;
      if (v20 == 0x7FFF) {
        goto LABEL_5;
      }
      v21 = (float32x4_t*)(v8 + v13);
      v22 = v9 + 80LL * v20;
      if ((*(_BYTE*)(v8 + v13 + 2) & 0x30) != 0) {
        v23 = GameRoutine_5f80f0((float32x4_t*)v22, v21, *(float*)&a3, a4,
                                 *(double*)&a5, a6, a7, a8),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v24 = v8 + v13;
        if ((*((_BYTE*)a1 + 12) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        LANES128(v15).n128_u64[0] = LANES128(v21[2]).n128_u64[0];
        v23 = GameRoutine_5f7910((int8x16_t*)v22, LANES128(v21[2]).n128_u32[2],
                                 v15, *(float*)&a3),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v24 = v8 + v13;
        if ((*((_BYTE*)a1 + 12) & 1) != 0) {
        LABEL_12:
          *(float*)&v27 = powf(v23, *(float*)(v24 + 4), *(float*)&a3),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v34 = v27;
          *(float*)&v29 = powf(v28, *(float*)(v24 + 8), *(float*)&a3),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v33 = v29;
          v31 = powf(v30, *(float*)(v24 + 12), *(float*)&a3),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          LODWORD(a4) = *(_DWORD*)(v22 + 68);
          v32 = COERCE_AS(float32x4_t, GameData_1a837f0);
          if (fabsf(*(float*)&a4) >= 0x1.0624de0000000p-10f) {
            v32 = *(float32x4_t*)v22;
          }
          a7 = v33;
          a8 = v34;
          LANES128(v16).n128_u64[0] = __PAIR64__(LODWORD(v33), LODWORD(v34));
          LANES128(v16).n128_u64[1] = LODWORD(v31);
          v17 = vmulq_f32(v16, v32);
          a6 = a3;
          *(float32x4_t*)v22 = v17;
          LANES128(v17).n128_u64[0] = *(_QWORD*)(v8 + v13 + 16);
          v18 = *(_DWORD*)(v22 + 64);
          LANES128(v17).n128_u64[1] = *(unsigned int*)(v8 + v13 + 24);
          a5 = *(long double*)(v22 + 16);
          v15 = vaddq_f32(*(float32x4_t*)&a5, vmulq_n_f32(v17, *(float*)&a3));
          *(float32x4_t*)(v22 + 16) = v15;
          LANES128(v15).n128_f32[0] = *(float*)&a3 + *(float*)&a4;
          v19 = v18 | ~*(_DWORD*)(v8 + v13);
          goto LABEL_4;
        }
      }
      LANES128(v25).n128_u64[0] = *(_QWORD*)(v24 + 4);
      a6 = a3;
      v26 = *(_DWORD*)(v22 + 64);
      LANES128(v25).n128_u64[1] = *(unsigned int*)(v24 + 12);
      a5 = *(long double*)(v22 + 16);
      *(float32x4_t*)v22 =
          vaddq_f32(*(float32x4_t*)v22, vmulq_n_f32(v25, *(float*)&a3));
      LANES128(v25).n128_u64[0] = *(_QWORD*)(v24 + 16);
      *(_QWORD*)&a4 = *(unsigned int*)(v24 + 24);
      LANES128(v25).n128_f64[1] = a4;
      v15 = vaddq_f32(*(float32x4_t*)&a5, vmulq_n_f32(v25, *(float*)&a3));
      *(float32x4_t*)(v22 + 16) = v15;
      v19 = v26 | ~*(_DWORD*)v24;
      LANES128(v15).n128_f32[0] = *(float*)&a3 + *(float*)(v22 + 68);
    LABEL_4:
      *(_DWORD*)(v22 + 64) = v19;
      *(_DWORD*)(v22 + 68) = LANES128(v15).n128_u32[0];
    LABEL_5:
      v13 += 48;
      v12 += 4;
    } while (v14 != v13);
  }
}

void nn_g3d_5f2920(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v8;
  float* v9;
  unsigned __int32 v10;
  float32x4_t v11;
  float32x4_t v12;
  float v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float32x4_t* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  unsigned int v30;
  float32x4_t v31;
  float v32;
  unsigned int v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  unsigned __int32 v37;
  float32x4_t v38;
  float v39;
  float v40;
  float32x4_t v41;
  float v42;
  float v43;
  float v44;
  struct {
    __int64 v45;
    int v46;
    float v47;
  } v45_;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = 4LL * *(unsigned __int16*)(a2 + 100);
    v5 = *a1;
    v8 = 0;
    v9 = (float*)(*(_QWORD*)(a2 + 72) + 24LL);
    do {
      v15 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8);
      if ((v15 & 0x80000000) == 0) {
        v16 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x7FFF;
        if (v16 != 0x7FFF) {
          v17 = a1[3];
          v45_.v45 = a2;
          v45_.v46 = v15 & 0x7FFF;
          v45_.v47 = a3;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v17 + 16LL))(v17,
                                                                  &v45_.v45);
          v19 = v9[2];
          v18 = v9[3];
          v20 = v9[4];
          v21 = v45_.v47;
          v22 = (float32x4_t*)(v5 + 80LL * v16);
          v23 = v9[5] + v9[5];
          v24 = v18 * (float)(v18 + v18);
          v25 = v18 * (float)(v19 + v19);
          v26 = v20 * (float)(v19 + v19);
          v27 = v20 * (float)(v20 + v20);
          v28 = (float)(v18 + v18) * v20;
          v29 = v20 * v23;
          *(float*)&v30 = v26 + (float)(v18 * v23);
          LANES128(v31).n128_f32[0] =
              (float)(0x1.0000000000000p+0f - v24) - v27;
          LANES128(v31).n128_f32[1] = v25 - v29;
          LANES128(v31).n128_u64[1] = v30;
          v32 = v25 + v29;
          *(float*)&v33 = v28 - (float)(v19 * v23);
          LANES128(v34).n128_f32[0] = v32;
          LANES128(v34).n128_f32[1] =
              (float)(0x1.0000000000000p+0f -
                      (float)(v19 * (float)(v19 + v19))) -
              v27;
          LANES128(v34).n128_u64[1] = v33;
          v35 = vaddq_f32(v22[3], vmulq_n_f32(v34, v45_.v47));
          v22[2] = vaddq_f32(v22[2], vmulq_n_f32(v31, v45_.v47));
          v22[3] = v35;
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            v44 = v21;
            v43 = powf_alt1(*(v9 - 5), v21);
            v42 = powf_alt1(*(v9 - 4), v44);
            v39 = powf_alt1(*(v9 - 3), v44);
            v40 = LANES128(v22[4]).n128_f32[1];
            v41 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(v40) >= 0x1.0624de0000000p-10f) {
              v41 = *v22;
            }
            v10 = LANES128(v22[4]).n128_u32[0];
            LANES128(v11).n128_u64[0] = __PAIR64__(LODWORD(v42), LODWORD(v43));
            LANES128(v11).n128_u64[1] = LODWORD(v39);
            *v22 = vmulq_f32(v11, v41);
            LANES128(v12).n128_u64[0] = *((_QWORD*)v9 - 1);
            LANES128(v12).n128_u64[1] = *(unsigned int*)v9;
            v22[1] = vaddq_f32(v22[1], vmulq_n_f32(v12, v44));
            v13 = v44 + v40;
            v14 = v10 | ~*((_DWORD*)v9 - 6);
          }
          else {
            LANES128(v36).n128_u64[0] = *(_QWORD*)(v9 - 5);
            v37 = LANES128(v22[4]).n128_u32[0];
            LANES128(v36).n128_u64[1] = *((unsigned int*)v9 - 3);
            v38 = v22[1];
            *v22 = vaddq_f32(*v22, vmulq_n_f32(v36, v21));
            LANES128(v36).n128_u64[0] = *((_QWORD*)v9 - 1);
            LANES128(v36).n128_u64[1] = *(unsigned int*)v9;
            v22[1] = vaddq_f32(v38, vmulq_n_f32(v36, v21));
            v14 = v37 | ~*((_DWORD*)v9 - 6);
            v13 = v21 + LANES128(v22[4]).n128_f32[1];
          }
          LANES128(v22[4]).n128_u32[0] = v14;
          LANES128(v22[4]).n128_f32[1] = v13;
        }
      }
      v8 += 4;
      v9 += 12;
    } while (v3 != v8);
  }
}

void nn_g3d_5f2d90(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  float32x4_t* v5;
  __int64 v6;
  __int64 v9;
  unsigned __int32 v10;
  float32x4_t v11;
  float32x4_t v12;
  float v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  float32x4_t* v18;
  float32x4_t v24;
  unsigned __int32 v25;
  float32x4_t v26;
  float v27;
  float v28;
  float32x4_t v29;
  float v30;
  float v31;
  float v32;
  struct {
    __int64 v33;
    int v34;
    float v35;
  } v33_;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = 4LL * *(unsigned __int16*)(a2 + 100);
    v5 = *(float32x4_t**)(a2 + 72);
    v6 = *a1;
    v9 = 0;
    do {
      v15 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v9);
      if ((v15 & 0x80000000) == 0) {
        v16 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v9) & 0x7FFF;
        if (v16 != 0x7FFF) {
          v17 = a1[3];
          v33_.v33 = a2;
          v33_.v34 = v15 & 0x7FFF;
          v33_.v35 = a3;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v17 + 16LL))(v17,
                                                                  &v33_.v33);
          v18 = (float32x4_t*)(v6 + 80LL * v16);
          v32 = v33_.v35;
          GameRoutine_5f80f0_alt1(v18, v5, v33_.v35);
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            v31 = powf_alt1(LANES128(*(v5)).n128_f32[1], v32);
            v30 = powf_alt1(LANES128(*(v5)).n128_f32[2], v32);
            v27 = powf_alt1(LANES128(*(v5)).n128_f32[3], v32);
            v28 = LANES128(v18[4]).n128_f32[1];
            v29 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(v28) >= 0x1.0624de0000000p-10f) {
              v29 = *v18;
            }
            v10 = LANES128(v18[4]).n128_u32[0];
            LANES128(v11).n128_u64[0] = __PAIR64__(LODWORD(v30), LODWORD(v31));
            LANES128(v11).n128_u64[1] = LODWORD(v27);
            *v18 = vmulq_f32(v11, v29);
            LANES128(v12).n128_u64[0] = LANES128(v5[1]).n128_u64[0];
            LANES128(v12).n128_u64[1] = LANES128(v5[1]).n128_u32[2];
            v18[1] = vaddq_f32(v18[1], vmulq_n_f32(v12, v32));
            v13 = v32 + v28;
            v14 = v10 | ~LANES128(*(v5)).n128_u32[0];
          }
          else {
            LANES128(v24).n128_u64[0] =
                *(unsigned __int64*)((char*)LANES128(*(v5)).n128_u64 + 4);
            v25 = LANES128(v18[4]).n128_u32[0];
            LANES128(v24).n128_u64[1] = LANES128(*(v5)).n128_u32[3];
            v26 = v18[1];
            *v18 = vaddq_f32(*v18, vmulq_n_f32(v24, v32));
            LANES128(v24).n128_u64[0] = LANES128(v5[1]).n128_u64[0];
            LANES128(v24).n128_u64[1] = LANES128(v5[1]).n128_u32[2];
            v18[1] = vaddq_f32(v26, vmulq_n_f32(v24, v32));
            v14 = v25 | ~LANES128(*(v5)).n128_u32[0];
            v13 = v32 + LANES128(v18[4]).n128_f32[1];
          }
          LANES128(v18[4]).n128_u32[0] = v14;
          LANES128(v18[4]).n128_f32[1] = v13;
        }
      }
      v9 += 4;
      v5 += 3;
    } while (v3 != v9);
  }
}

void nn_g3d_5f2f90(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int32 v13;
  float v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  float32x4_t v19;
  __int64 v20;
  float32x4_t* v21;
  float32x4_t v22;
  unsigned __int32 v23;
  float32x4_t v24;
  float v25;
  float v26;
  float32x4_t v27;
  float v28;
  float v29;
  float v30;
  struct {
    __int64 v31;
    int v32;
    float v33;
  } v31_;

  if (*(_WORD*)(a2 + 100) != 0) {
    v4 = *(_QWORD*)(a2 + 72);
    v5 = *a1;
    v8 = 0;
    v9 = 0;
    v10 = 48LL * *(unsigned __int16*)(a2 + 100);
    do {
      v16 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8);
      if ((v16 & 0x80000000) == 0) {
        v17 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x7FFF;
        if (v17 != 0x7FFF) {
          v18 = a1[3];
          v31_.v31 = a2;
          v31_.v32 = v16 & 0x7FFF;
          v31_.v33 = a3;
          LANES128(v19).n128_u64[1] =
              LANES128_OF(((__n128 (*)(__int64, __int64*)) *
                           (_QWORD*)(*(_QWORD*)v18 + 16LL))(v18, &v31_.v31))
                  .n128_u64[1];
          v20 = v4 + v9;
          LANES128(v19).n128_u64[0] = *(_QWORD*)(v4 + v9 + 32);
          v21 = (float32x4_t*)(v5 + 80LL * v17);
          v30 = v31_.v33;
          SkeletalAnimObj_5f7910(v21, *(_DWORD*)(v4 + v9 + 40), v19, v31_.v33);
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            v29 = powf_alt1(*(float*)(v20 + 4), v30);
            v28 = powf_alt1(*(float*)(v20 + 8), v30);
            v25 = powf_alt1(*(float*)(v20 + 12), v30);
            v26 = LANES128(v21[4]).n128_f32[1];
            v27 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(v26) >= 0x1.0624de0000000p-10f) {
              v27 = *v21;
            }
            LANES128(v11).n128_u64[0] = __PAIR64__(LODWORD(v28), LODWORD(v29));
            LANES128(v11).n128_u64[1] = LODWORD(v25);
            *v21 = vmulq_f32(v11, v27);
            LANES128(v12).n128_u64[0] = *(_QWORD*)(v4 + v9 + 16);
            v13 = LANES128(v21[4]).n128_u32[0];
            LANES128(v12).n128_u64[1] = *(unsigned int*)(v4 + v9 + 24);
            v21[1] = vaddq_f32(v21[1], vmulq_n_f32(v12, v30));
            v14 = v30 + v26;
            v15 = v13 | ~*(_DWORD*)(v4 + v9);
          }
          else {
            LANES128(v22).n128_u64[0] = *(_QWORD*)(v20 + 4);
            v23 = LANES128(v21[4]).n128_u32[0];
            LANES128(v22).n128_u64[1] = *(unsigned int*)(v20 + 12);
            v24 = v21[1];
            *v21 = vaddq_f32(*v21, vmulq_n_f32(v22, v30));
            LANES128(v22).n128_u64[0] = *(_QWORD*)(v20 + 16);
            LANES128(v22).n128_u64[1] = *(unsigned int*)(v20 + 24);
            v21[1] = vaddq_f32(v24, vmulq_n_f32(v22, v30));
            v15 = v23 | ~*(_DWORD*)v20;
            v14 = v30 + LANES128(v21[4]).n128_f32[1];
          }
          LANES128(v21[4]).n128_u32[0] = v15;
          LANES128(v21[4]).n128_f32[1] = v14;
        }
      }
      v9 += 48;
      v8 += 4;
    } while (v10 != v9);
  }
}

void nn_g3d_5f31a0(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int32 v13;
  float v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  float32x4_t v19;
  double v24;
  float32x4_t* v25;
  float32x4_t* v26;
  __int64 v27;
  float32x4_t v28;
  unsigned __int32 v29;
  float32x4_t v30;
  float v31;
  float v32;
  float32x4_t v33;
  float v34;
  float v35;
  float v36;
  struct {
    __int64 v37;
    int v38;
    float v39;
  } v37_;

  if (*(_WORD*)(a2 + 100) != 0) {
    v4 = *(_QWORD*)(a2 + 72);
    v5 = *a1;
    v8 = 0;
    v9 = 0;
    v10 = 48LL * *(unsigned __int16*)(a2 + 100);
    do {
      v16 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8);
      if (v16 < 0) {
        goto LABEL_5;
      }
      v17 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x7FFF;
      if (v17 == 0x7FFF) {
        goto LABEL_5;
      }
      v18 = a1[3];
      v37_.v37 = a2;
      v37_.v38 = v16 & 0x7FFF;
      v37_.v39 = a3;
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 16LL))(v18, &v37_.v37);
      *(float*)&v24 = v37_.v39;
      v25 = (float32x4_t*)(v4 + v9);
      v26 = (float32x4_t*)(v5 + 80LL * v17);
      v36 = v37_.v39;
      if ((*(_BYTE*)(v4 + v9 + 2) & 0x30) != 0) {
        GameRoutine_5f80f0_alt2(v26, v25, v37_.v39, v24);
        v27 = v4 + v9;
        if ((*((_BYTE*)a1 + 12) & 1) != 0) {
          goto LABEL_12;
        }
      }
      else {
        PSEUDO_LOW_LANE128(v19, n128_u64, LANES128(v25[2]).n128_u64[0]);
        SkeletalAnimObj_5f7910(v26, LANES128(v25[2]).n128_u32[2], v19,
                               v37_.v39);
        v27 = v4 + v9;
        if ((*((_BYTE*)a1 + 12) & 1) != 0) {
        LABEL_12:
          v35 = powf_alt1(*(float*)(v27 + 4), v36);
          v34 = powf_alt1(*(float*)(v27 + 8), v36);
          v31 = powf_alt1(*(float*)(v27 + 12), v36);
          v32 = LANES128(v26[4]).n128_f32[1];
          v33 = COERCE_AS(float32x4_t, GameData_1a837f0);
          if (fabsf(v32) >= 0x1.0624de0000000p-10f) {
            v33 = *v26;
          }
          LANES128(v11).n128_u64[0] = __PAIR64__(LODWORD(v34), LODWORD(v35));
          LANES128(v11).n128_u64[1] = LODWORD(v31);
          *v26 = vmulq_f32(v11, v33);
          LANES128(v12).n128_u64[0] = *(_QWORD*)(v4 + v9 + 16);
          v13 = LANES128(v26[4]).n128_u32[0];
          LANES128(v12).n128_u64[1] = *(unsigned int*)(v4 + v9 + 24);
          v26[1] = vaddq_f32(v26[1], vmulq_n_f32(v12, v36));
          v14 = v36 + v32;
          v15 = v13 | ~*(_DWORD*)(v4 + v9);
          goto LABEL_4;
        }
      }
      LANES128(v28).n128_u64[0] = *(_QWORD*)(v27 + 4);
      v29 = LANES128(v26[4]).n128_u32[0];
      LANES128(v28).n128_u64[1] = *(unsigned int*)(v27 + 12);
      v30 = v26[1];
      *v26 = vaddq_f32(*v26, vmulq_n_f32(v28, v36));
      LANES128(v28).n128_u64[0] = *(_QWORD*)(v27 + 16);
      LANES128(v28).n128_u64[1] = *(unsigned int*)(v27 + 24);
      v26[1] = vaddq_f32(v30, vmulq_n_f32(v28, v36));
      v15 = v29 | ~*(_DWORD*)v27;
      v14 = v36 + LANES128(v26[4]).n128_f32[1];
    LABEL_4:
      LANES128(v26[4]).n128_u32[0] = v15;
      LANES128(v26[4]).n128_f32[1] = v14;
    LABEL_5:
      v9 += 48;
      v8 += 4;
    } while (v10 != v9);
  }
}

void nn_g3d_5f33e0(__int64 a1, __int64 a2, __int64 a3, int a4, float a5)
{
  float32x4_t* v7;
  __int64 v8;
  float v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  float* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned __int32 v32;
  float32x4_t v33;
  int v34;
  float v35;
  float v36;
  float v37;
  float32x4_t v38;
  unsigned __int32 v39;
  float32x4_t v40;
  float32x4_t v41;
  float v42;
  float v43;
  float v44;

  v7 = (float32x4_t*)(a2 + 80LL * a4);
  v8 = (__int64)(float)(*(float*)(a3 + 32) * 0x1.45f3060000000p+29f);
  v9 = vcvts_n_f32_u32(v8 & 0xFFFFFF, 0x18u);
  v10 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v8));
  v12 = *v10;
  v11 = v10[1];
  v14 = v10[2];
  v13 = v10[3];
  v15 = (__int64)(float)(*(float*)(a3 + 36) * 0x1.45f3060000000p+29f);
  v16 = vcvts_n_f32_u32(v15 & 0xFFFFFF, 0x18u);
  v17 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v15));
  v18 = v11 + (float)(v13 * v9);
  v19 = v12 + (float)(v14 * v9);
  v20 = v17[1] + (float)(v17[3] * v16);
  v21 = *v17 + (float)(v17[2] * v16);
  v22 = (float*)((char*)GameData_2135448 +
                 16 * ((unsigned int)(__int64)(float)(*(float*)(a3 + 40) *
                                                      0x1.45f3060000000p+29f) >>
                       24));
  v23 = vcvts_n_f32_u32(
      (__int64)(float)(*(float*)(a3 + 40) * 0x1.45f3060000000p+29f) & 0xFFFFFF,
      0x18u);
  v24 = v22[1] + (float)(v22[3] * v23);
  v25 = *v22 + (float)(v22[2] * v23);
  v26 = v19 * v25;
  v27 = v19 * v24;
  LANES128(v28).n128_f32[0] = v21 * v25;
  LANES128(v29).n128_f32[0] = v21 * v24;
  LANES128(v28).n128_f32[1] = -(float)(v27 - (float)((float)(v18 * v20) * v25));
  LANES128(v29).n128_f32[1] = v26 + (float)((float)(v18 * v20) * v24);
  LANES128(v28).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)(PSEUDO_UNFUSED(v18 * v24)) + (float)(v26 * v20));
  LANES128(v29).n128_u64[1] = COERCE_UNSIGNED_INT(
      (float)(v27 * v20) - (float)(PSEUDO_UNFUSED(v25 * v18)));
  v30 = vaddq_f32(v7[3], vmulq_n_f32(v29, a5));
  v7[2] = vaddq_f32(v7[2], vmulq_n_f32(v28, a5));
  v7[3] = v30;
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    v44 = a5;
    v43 = powf_alt1(*(float*)(a3 + 4), a5);
    v42 = powf_alt1(*(float*)(a3 + 8), v44);
    v36 = powf_alt1(*(float*)(a3 + 12), v44);
    v37 = LANES128(v7[4]).n128_f32[1];
    if (fabsf(v37) >= 0x1.0624de0000000p-10f) {
      v38 = *v7;
    }
    else {
      v38 = COERCE_AS(float32x4_t, GameData_1a837f0);
    }
    v39 = LANES128(v7[4]).n128_u32[0];
    LANES128(v40).n128_u64[0] = __PAIR64__(LODWORD(v42), LODWORD(v43));
    LANES128(v40).n128_u64[1] = LODWORD(v36);
    *v7 = vmulq_f32(v40, v38);
    LANES128(v41).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v41).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v7[1] = vaddq_f32(v7[1], vmulq_n_f32(v41, v44));
    v35 = v44 + v37;
    v34 = v39 | ~*(_DWORD*)a3;
  }
  else {
    LANES128(v31).n128_u64[0] = *(_QWORD*)(a3 + 4);
    v32 = LANES128(v7[4]).n128_u32[0];
    LANES128(v31).n128_u64[1] = *(unsigned int*)(a3 + 12);
    v33 = v7[1];
    *v7 = vaddq_f32(*v7, vmulq_n_f32(v31, a5));
    LANES128(v31).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v31).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v7[1] = vaddq_f32(v33, vmulq_n_f32(v31, a5));
    v34 = v32 | ~*(_DWORD*)a3;
    v35 = a5 + LANES128(v7[4]).n128_f32[1];
  }
  LANES128(v7[4]).n128_u32[0] = v34;
  LANES128(v7[4]).n128_f32[1] = v35;
}

void nn_g3d_5f3620(__int64 a1, __int64 a2, __int64 a3, int a4, float a5)
{

#pragma clang fp contract(off)
  float v6;
  float v7;
  float v8;
  float32x4_t v9;
  float32x4_t* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  unsigned __int32 v21;
  float32x4_t v22;
  int v23;
  float v24;
  float v25;
  float v26;
  float32x4_t v27;
  unsigned __int32 v28;
  float32x4_t v29;
  float32x4_t v30;
  float v31;
  float v32;
  float v33;

  v7 = *(float*)(a3 + 32);
  v6 = *(float*)(a3 + 36);
  v8 = *(float*)(a3 + 40);
  LANES128(v9).n128_u32[3] = 0;
  v11 = (float32x4_t*)(a2 + 80LL * a4);
  v12 = *(float*)(a3 + 44) + *(float*)(a3 + 44);
  v13 = v8 * (float)(v8 + v8);
  v14 = v6 * (float)(v7 + v7);
  v15 = v8 * (float)(v7 + v7);
  v16 = (float)(v6 + v6) * v8;
  v17 = v8 * v12;
  LANES128(v18).n128_u32[3] = 0;
  LANES128(v9).n128_f32[0] =
      (float)(0x1.0000000000000p+0f - (float)(v6 * (float)(v6 + v6))) - v13;
  LANES128(v9).n128_f32[1] = v14 - v17;
  LANES128(v9).n128_f32[2] = v15 + (float)(v6 * v12);
  LANES128(v18).n128_f32[0] = v14 + v17;
  LANES128(v18).n128_f32[1] =
      (float)(0x1.0000000000000p+0f - (float)(v7 * (float)(v7 + v7))) - v13;
  LANES128(v18).n128_f32[2] = v16 - (float)(v7 * v12);
  v19 = vaddq_f32(v11[3], vmulq_n_f32(v18, a5));
  v11[2] = vaddq_f32(v11[2], vmulq_n_f32(v9, a5));
  v11[3] = v19;
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    v33 = a5;
    v32 = powf_alt1(*(float*)(a3 + 4), a5);
    v31 = powf_alt1(*(float*)(a3 + 8), v33);
    v25 = powf_alt1(*(float*)(a3 + 12), v33);
    v26 = LANES128(v11[4]).n128_f32[1];
    if (fabsf(v26) >= 0x1.0624de0000000p-10f) {
      v27 = *v11;
    }
    else {
      v27 = COERCE_AS(float32x4_t, GameData_1a837f0);
    }
    v28 = LANES128(v11[4]).n128_u32[0];
    LANES128(v29).n128_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(v32));
    LANES128(v29).n128_u64[1] = LODWORD(v25);
    *v11 = vmulq_f32(v29, v27);
    LANES128(v30).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v30).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v11[1] = vaddq_f32(v11[1], vmulq_n_f32(v30, v33));
    v24 = v33 + v26;
    v23 = v28 | ~*(_DWORD*)a3;
  }
  else {
    LANES128(v20).n128_u64[0] = *(_QWORD*)(a3 + 4);
    v21 = LANES128(v11[4]).n128_u32[0];
    LANES128(v20).n128_u64[1] = *(unsigned int*)(a3 + 12);
    v22 = v11[1];
    *v11 = vaddq_f32(*v11, vmulq_n_f32(v20, a5));
    LANES128(v20).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v20).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v11[1] = vaddq_f32(v22, vmulq_n_f32(v20, a5));
    v23 = v21 | ~*(_DWORD*)a3;
    v24 = a5 + LANES128(v11[4]).n128_f32[1];
  }
  LANES128(v11[4]).n128_u32[0] = v23;
  LANES128(v11[4]).n128_f32[1] = v24;
}

void nn_g3d_5f3800(__int64 a1, __int64 a2, __int64 a3, int a4, float a5)
{
  float32x4_t* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  unsigned int v18;
  float v19;
  float v20;
  float v21;
  float32x4_t v22;
  __int64 v23;
  float v24;
  float* v25;
  float v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  float v31;
  float* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  float* v40;
  float v41;
  float v42;
  float v43;
  float v44;
  unsigned int v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  unsigned __int32 v49;
  float32x4_t v50;
  int v51;
  float v52;
  float v53;
  float v54;
  float32x4_t v55;
  unsigned __int32 v56;
  float32x4_t v57;
  float32x4_t v58;
  float v59;
  float v60;
  float v61;

  v7 = (float32x4_t*)(a2 + 80LL * a4);
  if ((*(_BYTE*)(a3 + 2) & 0x30) != 0) {
    v9 = *(float*)(a3 + 32);
    v8 = *(float*)(a3 + 36);
    v10 = *(float*)(a3 + 40);
    v11 = (float)(v8 + v8) * v10;
    v12 = *(float*)(a3 + 44) + *(float*)(a3 + 44);
    v13 = v8 * (float)(v9 + v9);
    v14 = v10 * (float)(v9 + v9);
    v15 = v10 * (float)(v10 + v10);
    v16 = v10 * v12;
    v17 = v9 * v12;
    *(float*)&v18 = v14 + (float)(PSEUDO_UNFUSED(v8 * v12));
    v19 = (float)(0x1.0000000000000p+0f -
                  (float)(PSEUDO_UNFUSED(v9 * (float)(v9 + v9)))) -
          v15;
    LANES128(v22).n128_f32[0] =
        (float)(0x1.0000000000000p+0f -
                (float)(PSEUDO_UNFUSED(v8 * (float)(v8 + v8)))) -
        v15;
    v20 = v13 + v16;
    LANES128(v22).n128_f32[1] = v13 - v16;
    v21 = v11 - v17;
    LANES128(v22).n128_u64[1] = v18;
  }
  else {
    v23 = (__int64)(float)(*(float*)(a3 + 32) * 0x1.45f3060000000p+29f);
    v24 = vcvts_n_f32_u32(v23 & 0xFFFFFF, 0x18u);
    v25 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v23));
    v27 = *v25;
    v26 = v25[1];
    v29 = v25[2];
    v28 = v25[3];
    v30 = (__int64)(float)(*(float*)(a3 + 36) * 0x1.45f3060000000p+29f);
    v31 = vcvts_n_f32_u32(v30 & 0xFFFFFF, 0x18u);
    v32 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v30));
    v33 = v26 + (float)(v28 * v24);
    v34 = v27 + (float)(v29 * v24);
    v35 = v32[1] + (float)(v32[3] * v31);
    v36 = *v32 + (float)(v32[2] * v31);
    v37 = v33 * v35;
    v38 = (__int64)(float)(*(float*)(a3 + 40) * 0x1.45f3060000000p+29f);
    v39 = vcvts_n_f32_u32(v38 & 0xFFFFFF, 0x18u);
    v40 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v38));
    v41 = v40[1] + (float)(v40[3] * v39);
    v42 = *v40 + (float)(v40[2] * v39);
    v43 = v34 * v42;
    v44 = v34 * v41;
    *(float*)&v45 =
        (float)(PSEUDO_UNFUSED(v33 * v41)) + (float)((float)(v34 * v42) * v35);
    v21 =
        (float)((float)(v34 * v41) * v35) - (float)(PSEUDO_UNFUSED(v42 * v33));
    LANES128(v22).n128_f32[0] = v36 * v42;
    v20 = v36 * v41;
    v19 = v43 + (float)(v37 * v41);
    LANES128(v22).n128_f32[1] = -(float)(v44 - (float)(v37 * v42));
    LANES128(v22).n128_u64[1] = v45;
  }
  LANES128(v46).n128_u64[0] = __PAIR64__(LODWORD(v19), LODWORD(v20));
  LANES128(v46).n128_u64[1] = LODWORD(v21);
  v47 = vaddq_f32(vmulq_n_f32(v46, a5), v7[3]);
  v7[2] = vaddq_f32(v7[2], vmulq_n_f32(v22, a5));
  v7[3] = v47;
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    v61 = a5;
    v60 = powf_alt1(*(float*)(a3 + 4), a5);
    v59 = powf_alt1(*(float*)(a3 + 8), v61);
    v53 = powf_alt1(*(float*)(a3 + 12), v61);
    v54 = LANES128(v7[4]).n128_f32[1];
    if (fabsf(v54) >= 0x1.0624de0000000p-10f) {
      v55 = *v7;
    }
    else {
      v55 = COERCE_AS(float32x4_t, GameData_1a837f0);
    }
    v56 = LANES128(v7[4]).n128_u32[0];
    LANES128(v57).n128_u64[0] = __PAIR64__(LODWORD(v59), LODWORD(v60));
    LANES128(v57).n128_u64[1] = LODWORD(v53);
    *v7 = vmulq_f32(v57, v55);
    LANES128(v58).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v58).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v7[1] = vaddq_f32(v7[1], vmulq_n_f32(v58, v61));
    v52 = v61 + v54;
    v51 = v56 | ~*(_DWORD*)a3;
  }
  else {
    LANES128(v48).n128_u64[0] = *(_QWORD*)(a3 + 4);
    v49 = LANES128(v7[4]).n128_u32[0];
    LANES128(v48).n128_u64[1] = *(unsigned int*)(a3 + 12);
    v50 = v7[1];
    *v7 = vaddq_f32(*v7, vmulq_n_f32(v48, a5));
    LANES128(v48).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v48).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v7[1] = vaddq_f32(v50, vmulq_n_f32(v48, a5));
    v51 = v49 | ~*(_DWORD*)a3;
    v52 = a5 + LANES128(v7[4]).n128_f32[1];
  }
  LANES128(v7[4]).n128_u32[0] = v51;
  LANES128(v7[4]).n128_f32[1] = v52;
}

__int64 nn_g3d_5f48c0(__int64 result, float32x4_t* a2)
{

#pragma clang fp contract(off)
  unsigned int v2;
  unsigned __int64 v3;
  float32x4_t* v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  unsigned __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float v14;
  float v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16x2_t v18;
  int8x16x2_t v19;
  int8x16x2_t v20;

  v2 = *(unsigned __int16*)(result + 10);
  if (*(_WORD*)(result + 10) != 0) {
    v3 = 0;
    v4 = *(float32x4_t**)result;
    do {
      v14 = LANES128(v4[4]).n128_f32[1];
      if (fabsf(v14) >= 0x1.0624de0000000p-10f) {
        if (fabsf(v14 + -0x1.0000000000000p+0f) >= 0x1.0624de0000000p-10f) {
          v15 = 0x1.0000000000000p+0f / v14;
          v16 = vmulq_n_f32(*v4, v15);
          v17 = vmulq_n_f32(v4[1], v15);
          *v4 = v16;
          v4[1] = v17;
        }
        LANES128(*(a2)).n128_u32[0] =
            (LANES128(*(a2)).n128_u32[0] & 0xF07FFFFF |
             (((LANES128(v4[4]).n128_u32[0] >> 23) & 0x1F) << 23)) ^
            0xF800000;
        LANES128(a2[1]).n128_u64[1] = LANES128(*(v4)).n128_u64[1];
        LANES128(a2[1]).n128_u64[0] = LANES128(*(v4)).n128_u64[0];
        a2[5] = v4[1];
        v19.val[1] = v4[2];
        LANES128(v19.val[1]).n128_u32[3] = 0;
        LANES128(v5).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v19.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v6).n128_u64[0] =
            LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                            LANES128(v19.val[1]).n128_u64[0])))
                .n64_u64[0];
        LANES128(v7).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v19.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v8 = LANES64_OF(vqtbl1_s8(v19.val[1],
                                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                 .n64_u64[0];
        *(int8x8_t*)&LANES128(v5).n128_i8[8] =
            vqtbl1_s8(v19.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v6).n128_u64[1] = LANES128(v5).n128_u64[1];
        LANES128(v7).n128_u64[1] = v8;
        v9 = vmulq_f32(v5, v19.val[1]);
        LANES128(v19.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v19.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v10 = vmulq_f32(v6, v6);
        v20.val[1] = vmulq_f32(v7, v7);
        v11 = vaddq_f32(v9, v9);
        LANES128(v19.val[1]).n128_u64[1] = v8;
        v12 = vmulq_laneq_f32(v19.val[1], v4[2], 3);
        v20.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v20.val[1], v20.val[1]), vaddq_f32(v10, v10)));
        v13 = vaddq_f32(v12, v12);
        v18.val[0] = vaddq_f32(v11, v13);
        v18.val[1] = vsubq_f32(v11, v13);
        LANES128(v19.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v20.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v20.val[1]).n128_i8[8] =
            vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        *(int8x8_t*)&LANES128(v19.val[1]).n128_i8[8] =
            vqtbl2_s8(v18, COERCE_AS(int8x8_t, 0x706050413121110LL));
        v19.val[0] = v20.val[0];
        LANES128(v11).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v19, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v11).n128_i8[8] =
            vqtbl2_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v18.val[0]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v19, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v18.val[0]).n128_i8[8] =
            vqtbl2_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v19.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v20, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v19.val[0]).n128_i8[8] =
            vqtbl2_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        a2[2] = v11;
        a2[3] = v18.val[0];
        a2[4] = v19.val[0];
        v2 = *(unsigned __int16*)(result + 10);
      }
      ++v3;
      v4 += 5;
      a2 += 6;
    } while (v3 < v2);
  }
  return result;
}

__int64 nn_g3d_5f5020(__int64 result)
{

#pragma clang fp contract(off)
  unsigned int v1;
  unsigned __int64 v2;
  __int64 v3;
  float32x4_t v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int128 v9;
  float v10;
  __int128 v11;

  v1 = *(unsigned __int16*)(result + 10);
  if (*(_WORD*)(result + 10) != 0) {
    v2 = 0;
    v3 = *(_QWORD*)result + 48LL;
    do {
      if (fabsf(*(float*)(v3 + 20)) >= 0x1.0624de0000000p-10f) {
        v4 = *(float32x4_t*)(v3 - 16);
        v5 =
            vmuls_lane_f32(LANES128(v4).n128_f32[0] + LANES128(v4).n128_f32[0],
                           COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]), 1);
        v6 = COERCE_FLOAT(HIDWORD(*(_QWORD*)(v3 - 16))) +
             COERCE_FLOAT(HIDWORD(*(_QWORD*)(v3 - 16)));
        v7 = vmuls_lane_f32(COERCE_FLOAT(*(_QWORD*)(v3 - 8)) +
                                COERCE_FLOAT(*(_QWORD*)(v3 - 8)),
                            v4, 2);
        v8 = vmuls_lane_f32(LANES128(v4).n128_f32[3] + LANES128(v4).n128_f32[3],
                            v4, 2);
        *(float*)&v9 =
            (float)(0x1.0000000000000p+0f -
                    vmuls_lane_f32(
                        v6, COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                        1)) -
            v7;
        v10 = (float)(0x1.0000000000000p+0f -
                      (float)((float)(LANES128(v4).n128_f32[0] +
                                      LANES128(v4).n128_f32[0]) *
                              LANES128(v4).n128_f32[0])) -
              v7;
        *((float*)&v9 + 1) = v5 - v8;
        *((_QWORD*)&v9 + 1) = COERCE_UNSIGNED_INT(
            vmuls_lane_f32(LANES128(v4).n128_f32[0] + LANES128(v4).n128_f32[0],
                           v4, 2) +
            vmuls_lane_f32(LANES128(v4).n128_f32[3] + LANES128(v4).n128_f32[3],
                           COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                           1));
        *(float*)&v11 = v5 + v8;
        *((float*)&v11 + 1) = v10;
        *((_QWORD*)&v11 + 1) =
            COERCE_UNSIGNED_INT(vmuls_lane_f32(v6, v4, 2) -
                                (float)((float)(LANES128(v4).n128_f32[3] +
                                                LANES128(v4).n128_f32[3]) *
                                        LANES128(v4).n128_f32[0]));
        *(_OWORD*)(v3 - 16) = v9;
        *(_OWORD*)v3 = v11;
        v1 = *(unsigned __int16*)(result + 10);
      }
      ++v2;
      v3 += 80;
    } while (v2 < v1);
  }
  return result;
}

float32x2_t nn_g3d_5f5ac0(__int64 a1, __int64 a2, __int64 a3, double a4,
                          long double a5)
{
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t* v10;
  float32x4_t v11;
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
  __int128 v22;

  *(float*)&a5 = 0x1.0000000000000p+0f / *(float*)(a3 + 4);
  *((float*)&a5 + 1) = 0x1.0000000000000p+0f / *(float*)(a3 + 8);
  *((float*)&a5 + 2) = 0x1.0000000000000p+0f / *(float*)(a3 + 12);
  LANES128(v8).n128_u64[0] = *(_QWORD*)(a2 + 4);
  LANES128(v8).n128_u64[1] = *(unsigned int*)(a2 + 12);
  v9 = vmulq_f32(*(float32x4_t*)&a5, v8);
  *(_QWORD*)(a1 + 4) = LANES128(v9).n128_u64[0];
  *(_DWORD*)(a1 + 12) = LANES128(v9).n128_u32[2];
  if ((*(_BYTE*)(a2 + 2) & 0x30) != 0) {
    v10 = (int8x16_t*)(a2 + 32);
  }
  else {
    v22 = (__typeof__(v22)){0};
    v10 = (int8x16_t*)&v22;
    GameRoutine_5f8490(&v22, (float*)a2);
  }
  v11 = *(float32x4_t*)(a3 + 32);
  v12 = vmulq_f32(v11, COERCE_AS(float32x4_t, GameData_1a829d0));
  v13 = vmulq_f32(v11, v11);
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
      LANES64_OF(vqtbl1_s8(*v10, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u64[0];
  *(int32x2_t*)&LANES128(v19).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(*(v10)).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(*v10, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v20 =
      vmlaq_f32(vmulq_f32(*v10, v15), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v17, v12));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(*v10, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(float32x4_t*)(a1 + 32) =
      vmlsq_f32(vmlaq_f32(v20, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v17, v19)),
                v16, v18);
  *(_DWORD*)a1 = *(_DWORD*)a2 & 0xFFCFFFFF | 0x100000;
  LANES128(v16).n128_u64[0] = *(unsigned int*)(a2 + 24);
  LANES64(result).n64_u64[0] =
      LANES64_OF(vsub_f32(*(float32x2_t*)(a2 + 16), *(float32x2_t*)(a3 + 16)))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v20, n128_u64, *(unsigned int*)(a3 + 24));
  *(float32x2_t*)(a1 + 16) = result;
  *(_DWORD*)(a1 + 24) =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u32[0];
  return result;
}

__int64 nn_g3d_5f6180(__int64 result, unsigned __int16* a2, __int64 a3,
                      float a4)
{

#pragma clang fp contract(off)
  __int64 v9;
  long double v13;
  unsigned __int16* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int16* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  float v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  float32x4_t* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float32x4_t v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  float v46;
  int v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  long double v51;
  __int64 (**v52)();
  char* v53;
  __int64 v54;
  __int64 v55;
  __int128 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _DWORD v61[12];
  struct {
    _DWORD v62[3];
    int v63;
  } v62_;
  __int64 v65;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;

  if (fabsf(a4) >= 0x1.0624de0000000p-10f) {
    v9 = result;
    *(_DWORD*)(result + 12) &= ~4u;
    (*(void (**)(unsigned __int16*))(*(_QWORD*)a2 + 24LL))(a2);
    (*(void (**)(__int64))(*(_QWORD*)a3 + 24LL))(a3);
    result = v9;
    v14 = a2;
    v15 = a3;
    v16 = a2[50];
    if (a2[50] != 0) {
      v67 = v70;
      v68 = v71;
      v69 = v72;
      v17 = *(unsigned int*)(a3 + 124);
      v18 = *(_QWORD*)(a3 + 72);
      v19 = *(_QWORD*)v9;
      v20 = 4 * v16;
      v21 = a3;
      v22 = a2;
      v23 = (_QWORD*)v9;
      v24 = 0;
      memset(v61, 0, sizeof(v61));
      *(float*)&v13 = 0x1.0000000000000p+0f - a4;
      v25 = *((_QWORD*)v14 + 9);
      v26 = fabsf(a4);
      v65 = v18;
      v54 = (v17 >> 2) & 3;
      v55 = v19;
      v53 =
          (char*)nn_g3d_5f5100_ptr_ptr + 24 * ((*((_DWORD*)v14 + 31) >> 2) & 3);
      v51 = v13;
      v50 = v15;
      v52 = &nn_g3d_5f3f20_ptr[2 * ((*(_DWORD*)(v9 + 12) & 2LL) != 0)];
      do {
        v27 = *(_DWORD*)(*((_QWORD*)v22 + 11) + v24);
        if ((v27 & 0x80000000) == 0) {
          v28 = v27 & 0x7FFF;
          if ((*(_DWORD*)(*((_QWORD*)v22 + 11) + v24) & 0x7FFF) != 0x7FFF) {
            v29 = *(_QWORD*)(v21 + 88);
            v30 = ((unsigned __int64)*(unsigned int*)(v29 + 4 * v28) >> 15) &
                  0x7FFF;
            if ((_DWORD)v30 != 0x7FFF && *(_DWORD*)(v29 + 4 * v30) >> 30 == 0) {
              v31 = (float32x4_t*)(v55 + 80LL * (unsigned int)v28);
              if (fabsf(LANES128(v31[4]).n128_f32[1]) <
                  0x1.0624de0000000p-10f) {
                v32 = *((_QWORD*)v22 + 17);
                v56 = (__typeof__(v56)){0};
                v33 = *((_DWORD*)v23 + 3);
                v34 = v23[3];
                v35 = *(_QWORD*)(v32 + 16);
                v59 = 0;
                v60 = 0;
                v57 = 0;
                v58 = 0;
                v36 = v35 + 96LL * (unsigned int)v28;
                v37 = *(_DWORD*)(v36 + 52);
                if ((v37 & 0x7000) != 0) {
                  v38 = v37 & 0xF800000;
                }
                else {
                  v38 = v37 & 0xF800000 | 0x100000;
                }
                LODWORD(v56) = v38;
                v39 = *(_QWORD*)(v36 + 76);
                v59 = *(_QWORD*)(v36 + 68);
                v60 = v39;
                v40 = *(_QWORD*)(v36 + 56);
                DWORD3(v56) = *(_DWORD*)(v36 + 64);
                *(_QWORD*)((char*)&v56 + 4) = v40;
                v41 = *(_QWORD*)(v36 + 84);
                LODWORD(v58) = *(_DWORD*)(v36 + 92);
                v57 = v41;
                *((_DWORD*)v23 + 3) = v33 & 0xFFFFFFFB;
                if (v34 != 0) {
                  *(_QWORD*)v62_.v62 = 0;
                  v62_.v62[2] = v28;
                  v62_.v63 = 1065353216;
                  (*(void (**)(__int64, _DWORD*))(*(_QWORD*)v34 + 16LL))(
                      v34, v62_.v62);
                  LODWORD(v13) = v62_.v63;
                }
                else {
                  LODWORD(v13) =
                      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                }
                (*((void (**)(_QWORD*, _QWORD, __int128*, _QWORD,
                              long double))nn_g3d_5f33e0_ptr_ptr +
                   6 * ((v33 & 2) != 0) + 2 * ((v38 & 0x100000) != 0)))(
                    v23, *v23, &v56, (unsigned int)v28, v13);
                v21 = v50;
                LANES128(v31[4]).n128_u32[1] = 0;
              }
              (*(void (**)(_DWORD*, __int64, __int64))&v53[8 * v54])(
                  v61, v25, v65 + 48LL * (unsigned int)v30);
              result = ((__int64 (*)(_QWORD*, _DWORD*, float32x4_t*,
                                     _DWORD*))*v52)(v23, v61, v31, v61);
              if ((*((_BYTE*)v23 + 12) & 2) != 0) {
                v13 = v51;
                v46 = LANES128(v31[4]).n128_f32[1];
                LANES128(v31[4]).n128_u32[1] = LODWORD(v51);
                if (v26 >= 0x1.0624de0000000p-10f) {
                  v47 = *((_DWORD*)v23 + 3);
                  v48 = v61[0];
                  v49 = v23[3];
                  *((_DWORD*)v23 + 3) = v47 & 0xFFFFFFFB;
                  if (v49 != 0) {
                    *(_QWORD*)&v56 = 0;
                    *((_QWORD*)&v56 + 1) = __PAIR64__(LODWORD(a4), v28);
                    (*(void (**)(__int64, __int128*, float))(
                        *(_QWORD*)v49 + 16LL))(v49, &v56, a4);
                  }
                  result = (*((__int64 (**)(_QWORD*, _QWORD, _DWORD*,
                                            _QWORD))nn_g3d_5f33e0_ptr_ptr +
                              6 * ((v47 & 2) != 0) + 2 * ((v48 >> 20) & 3)))(
                      v23, *v23, v61, (unsigned int)v28);
                }
                LANES128(v31[4]).n128_f32[1] = a4 + v46;
              }
              else {
                v13 = COERCE_LONG_DOUBLE(vmulq_n_f32(v31[2], *(float*)&v51));
                v42 = vmulq_n_f32(v31[3], *(float*)&v51);
                *(long double*)&v31[2] = v13;
                v31[3] = v42;
                if (v26 >= 0x1.0624de0000000p-10f) {
                  v43 = *((_DWORD*)v23 + 3);
                  v44 = v61[0];
                  v45 = v23[3];
                  *(float*)&v13 = a4;
                  *((_DWORD*)v23 + 3) = v43 & 0xFFFFFFFB;
                  if (v45 != 0) {
                    *(_QWORD*)&v56 = 0;
                    *((_QWORD*)&v56 + 1) = __PAIR64__(LODWORD(a4), v28);
                    (*(void (**)(__int64, __int128*, float))(
                        *(_QWORD*)v45 + 16LL))(v45, &v56, a4);
                    LODWORD(v13) = DWORD3(v56);
                  }
                  result = (*((__int64 (**)(_QWORD*, _QWORD, _DWORD*, _QWORD,
                                            long double))nn_g3d_5f33e0_ptr_ptr +
                              6 * ((v43 & 2) != 0) + 2 * ((v44 >> 20) & 3)))(
                      v23, *v23, v61, (unsigned int)v28, v13);
                }
              }
            }
          }
        }
        v24 += 4;
        v25 += 48;
      } while (v20 != v24);
    }
  }
  return result;
}

__int64 nn_g3d_5f66c0(__int64 result)
{

#pragma clang fp contract(off)
  unsigned int v1;
  float32x4_t* v2;
  unsigned __int64 v3;
  float v4;
  float v5;
  float32x4_t v6;
  float32x4_t v7;

  v1 = *(unsigned __int16*)(result + 10);
  if (*(_WORD*)(result + 10) != 0) {
    v2 = *(float32x4_t**)result;
    v3 = 0;
    do {
      v4 = LANES128(v2[4]).n128_f32[1];
      if (fabsf(v4) >= 0x1.0624de0000000p-10f) {
        if ((*(_BYTE*)(result + 12) & 1) == 0 &&
            fabsf(v4 + -0x1.0000000000000p+0f) >= 0x1.0624de0000000p-10f) {
          v5 = 0x1.0000000000000p+0f / v4;
          v6 = vmulq_n_f32(*v2, v5);
          v7 = vmulq_n_f32(v2[1], v5);
          *v2 = v6;
          v2[1] = v7;
        }
        LANES128(v2[4]).n128_u32[1] = 1065353216;
        v1 = *(unsigned __int16*)(result + 10);
      }
      ++v3;
      v2 += 5;
    } while (v3 < v1);
  }
  *(_DWORD*)(result + 12) = *(_DWORD*)(result + 12) & 0xFFFFFFFB ^ 0xC;
  return result;
}

#pragma GCC visibility pop
