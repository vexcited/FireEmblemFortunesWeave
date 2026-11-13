#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_417e00(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64);
__int64 physx_Gu_epaPenetration(__int64, __int64*, unsigned __int8*,
                                unsigned __int8*, unsigned int, char, __int64,
                                double);
bool physx_Gu_gjkRaycast(float32x4_t*, __int64, int8x16_t*, int32x2_t, __int64,
                         float32x4_t*, float32x4_t*, _QWORD*, float32x4_t*,
                         int8x16_t*);
extern _UNKNOWN* GameData_2135c58;
extern _UNKNOWN* GameData_2135c70;
bool physx_source_geomutils_src_412160(float32x4_t* a1, __int64* a2,
                                       int8x16_t* a3, __int64 a4,
                                       float32x4_t* a5, float32x4_t* a6,
                                       float32x2_t* a7, float32x4_t* a8,
                                       int32x2_t a9, int8x16_t* a10, char a11);

bool physx_source_geomutils_src_412160(float32x4_t* a1, __int64* a2,
                                       int8x16_t* a3, __int64 a4,
                                       float32x4_t* a5, float32x4_t* a6,
                                       float32x2_t* a7, float32x4_t* a8,
                                       int32x2_t a9, int8x16_t* a10, char a11)
{

#pragma clang fp contract(off)
  bool v17;
  int32x2_t v18;
  unsigned __int64 v19;
  unsigned __int64* v20;
  __int64 v21;
  bool v22;
  float v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  float32x2_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v39;
  float32x4_t v40;
  int8x8_t v41;
  float32x2_t v42;
  float32x2_t v43;
  float32x2_t v44;
  float32x2_t v45;
  float32x2_t v46;
  float32x2_t v47;
  float32x2_t v48;
  _QWORD v49[2];
  struct {
    _QWORD v50[4];
    int32x4_t v51;
    int32x4_t v52;
    int32x4_t v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
  } v50_;
  struct {
    _QWORD v56[4];
    float32x4_t v57;
    char gap176_[16];
    unsigned __int64 v58;
    char gap200_[20];
    char v59[4];
  } v56_;
  struct {
    unsigned __int8 v60[4];
    unsigned __int8 v61[4];
  } v60_;
  unsigned __int64 v62;
  float32x4_t v63;
  int8x16_t v64;
  unsigned __int64 v65;

  v17 = physx_Gu_gjkRaycast(a1, (__int64)a2, a3, a9, a4, a5, a6, &v65, &v63,
                            &v64);
  if (v17) {
    PSEUDO_LOW_LANE64(v18, n64_u64, v65);
    LANES64(*(a7)).n64_u64[0] = v65;
    if (LANES64(v18).n64_f32[0] == 0x0.0p+0f && (a11 & 1) != 0) {
      v19 = LANES128(*(a1)).n128_u64[1];
      v20 = (unsigned __int64*)LANES128(a1[1]).n128_u64[0];
      v21 = a2[1];
      v22 = v17;
      v56_.v59[0] = 0;
      PSEUDO_LOW_LANE64(v18, n64_u32, *(_DWORD*)(v19 + 16));
      v23 = *(float*)(v21 + 16);
      v56_.v58 = 0;
      PSEUDO_LOW_LANE64(v18, n64_f32,
                        (float)(LANES64(v18).n64_f32[0] + v23) *
                            0x1.9000000000000p+6f);
      v62 = LANES64_OF(vdup_lane_s32(v18, 0)).n64_u64[0];
      v56_.v57 = (__typeof__(v56_.v57)){0};
      memset(v56_.v56, 0, sizeof(v56_.v56));
      v50_.v50[2] = v20;
      v50_.v50[0] = (char*)GameData_2135c70 + 16;
      v50_.v50[1] = v19;
      v24 = v20[5];
      v26 = v20[6];
      v25 = v20[7];
      LANES128(v50_.v53).n128_u64[0] = v20[4];
      LANES128(v50_.v53).n128_u64[1] = v24;
      v50_.v54 = v26;
      v50_.v55 = v25;
      v28 = *v20;
      v27 = v20[1];
      v31 = v20 + 2;
      v29 = v20[2];
      v30 = v31[1];
      LANES128(v50_.v51).n128_u64[0] = v28;
      LANES128(v50_.v51).n128_u64[1] = v27;
      LANES128(v50_.v52).n128_u64[0] = v29;
      LANES128(v50_.v52).n128_u64[1] = v30;
      v32 = vzip1q_s32(v50_.v51, v50_.v53);
      v33 = vzip1q_s32(v50_.v52, COERCE_AS(int32x4_t, 0));
      v34 = vzip1q_s32(vzip2q_s32(v50_.v51, v50_.v53),
                       vzip2q_s32(v50_.v52, COERCE_AS(int32x4_t, 0)));
      v50_.v51 = vzip1q_s32(v32, v33);
      v50_.v52 = vzip2q_s32(v32, v33);
      v50_.v53 = v34;
      v49[0] = (char*)GameData_2135c58 + 16;
      v49[1] = v21;
      if ((unsigned int)GameRoutine_417e00(
              (__int64)v50_.v50, (__int64)v49, (__int64)a3, (__int64)&v62, 0,
              (__int64)v60_.v61, (__int64)v60_.v60, (__int64)v56_.v59,
              (__int64)v56_.v56) == 5 &&
          (unsigned int)physx_Gu_epaPenetration(
              (__int64)a1, a2, v60_.v61, v60_.v60, (unsigned __int8)v56_.v59[0],
              0, (__int64)v56_.v56, 0x1.000003f800000p-7) -
                  5 >
              1) {
        v39 = vnegq_f32(*a6);
        LANES128(v39).n128_u32[3] = 0;
        v40 = vmulq_f32(v39, v39);
        LANES128(v40).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v40, v40)).n128_u64[0];
        LANES64(v41).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] = LANES64_OF(vrsqrte_f32(v41)).n64_u64[0];
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                    vrsqrts_f32(
                        vmul_f32(
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])),
                        v41)))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                    vrsqrts_f32(
                        vmul_f32(
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])),
                        v41)))
                .n64_u64[0];
        LANES128(v40).n128_u64[0] =
            LANES64_OF(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                    vrsqrts_f32(
                        vmul_f32(
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])),
                        v41)))
                .n64_u64[0];
        LANES64(v42).n64_u64[0] =
            LANES64_OF(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                    vrsqrts_f32(
                        vmul_f32(
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])),
                        v41)))
                .n64_u64[0];
        PSEUDO_LOW_LANE64(v35, n64_u64, 0);
        LANES64(v43).n64_u64[0] =
            LANES64_OF(vbsl_s8(vdup_lane_s32(vceqz_f32(v41), 0), v41,
                               vmul_f32(v41, v42)))
                .n64_u64[0];
        LANES64(v44).n64_u64[0] = LANES64_OF(vrecpe_f32(v43)).n64_u64[0];
        LANES64(v45).n64_u64[0] =
            LANES64_OF(vmul_f32(v44, vrecps_f32(v43, v44))).n64_u64[0];
        LANES64(v46).n64_u64[0] =
            LANES64_OF(vmul_f32(v45, vrecps_f32(v43, v45))).n64_u64[0];
        LANES64(v47).n64_u64[0] =
            LANES64_OF(vmul_f32(v46, vrecps_f32(v43, v46))).n64_u64[0];
        LANES64(v48).n64_u64[0] =
            LANES64_OF(vmul_f32(v47, vrecps_f32(v43, v47))).n64_u64[0];
        v37 = vmulq_n_f32(
            v39, LANES64_OF(vmul_f32(v48, vrecps_f32(v43, v48))).n64_f32[0]);
        v36 = (__typeof__(v36)){0};
        LANES128(v37).n128_u32[3] = 0;
      }
      else {
        PSEUDO_LOW_LANE64(v35, n64_u64, v56_.v58);
        v36 = *(int8x16_t*)v56_.v56;
        v37 = v56_.v57;
      }
      v17 = v22;
      LANES64(*(a7)).n64_u64[0] =
          LANES64_OF(vmin_f32(v35, ((float32x2_t){0}))).n64_u64[0];
    }
    else {
      v37 = v63;
      v36 = v64;
    }
    *a10 = v36;
    *a8 = v37;
  }
  return v17;
}

#pragma GCC visibility pop
