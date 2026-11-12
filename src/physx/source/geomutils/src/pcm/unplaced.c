#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
physx_Gu_PersistentContactManifold_addManifoldContactsToContactBuffer_4fba60(
    __int64 result, __int64, __int128*, float32x4_t*, float32x4_t*,
    float32x2_t*, _QWORD*);
__int64 physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(
    __int64 result, __int64, unsigned int);
__int64 physx_Gu_generateCapsuleBoxFullContactManifold(
    __int64, _QWORD*, __int64, __int64, __int64, int*, double*, float32x4_t*,
    long double, float, __int64, char);
extern _UNKNOWN* GameData_2135c00;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
float physx_Gu_PCMPolygonalBox_PCMPolygonalBox(__int64, float*);
float physx_Gu_PCMPolygonalBox_getPolygonalData(float**, __int64);
__int64 physx_source_geomutils_src_pcm_4d9a60(
    float32x2_t* a1, __int64 a2, float* a3, __int64 a4, float32x4_t* a5,
    float32x4_t* a6, __int64 a7, int* a8, float a9, float a10, __int64 a11,
    __int64 a12, float32x4_t* a13, __int64 a14, double* a15, char a16);

__int64 physx_source_geomutils_src_pcm_4d9a60(
    float32x2_t* a1, __int64 a2, float* a3, __int64 a4, float32x4_t* a5,
    float32x4_t* a6, __int64 a7, int* a8, float a9, float a10, __int64 a11,
    __int64 a12, float32x4_t* a13, __int64 a14, double* a15, char a16)
{
  long double v23;
  unsigned int v24;
  float32x2_t* v25;
  __int64 v26;
  char v27;
  int v28;
  int8x8_t v29;
  int8x16_t v30;
  float32x2_t v31;
  float32x4_t v32;
  int8x8_t v33;
  int8x8_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  struct {
    _QWORD v43[7];
    char v44;
    char gap105_[7];
    __int64 v45;
  } v43_;
  _QWORD v46[6];
  float* v47[28];
  struct {
    _QWORD v48[5];
    int v49;
  } v48_;

  v48_.v48[2] = 0x3F8000003F800000LL;
  v48_.v48[3] = 1065353216;
  v48_.v48[4] = 0;
  v48_.v49 = 1065353216;
  physx_Gu_PCMPolygonalBox_PCMPolygonalBox((__int64)v47, a3);
  physx_Gu_PCMPolygonalBox_getPolygonalData(v47, (__int64)v48_.v48);
  *(_OWORD*)v46 = GameData_1a82dd0;
  *(_OWORD*)&v46[2] = GameData_1a83610;
  v23 = *(long double*)&GameData_1a83090;
  v43_.v43[5] = v46;
  v43_.v43[6] = v46;
  v43_.v44 = 1;
  *(_OWORD*)&v46[4] = GameData_1a83090;
  *(float*)&v23 = a9;
  v43_.v45 = a2;
  v24 = *a8;
  v25 = a1;
  v26 = a7;
  v43_.v43[4] = a6;
  v43_.v43[0] = (char*)GameData_2135c00 + 16;
  v27 = physx_Gu_generateCapsuleBoxFullContactManifold(
      (__int64)v25, v48_.v48, (__int64)v43_.v43, a4, a7, a8, a15, a13, v23, a10,
      a14, a16);
  if ((v27 & 1) != 0) {
    v28 = *a8;
    if (v24 != 0) {
      if (v28 != v24) {
        v24 = v28 - 1;
        v26 = a7 + 48;
        *a8 = v28 - 1;
      }
    }
    else {
      v24 = *a8;
    }
    physx_Gu_SinglePersistentContactManifold_reduceBatchContactsConvex(a12, v26,
                                                                       v24);
    LANES64(v29).n64_u64[0] = LANES128_OF(vextq_s8(*a13, *a13, 8u)).n128_u64[0];
    v30 = *a6;
    LANES64(v31).n64_u64[0] = LANES128_OF(vdupq_laneq_s32(*a6, 3)).n128_u64[0];
    LANES128(v30).n128_u32[3] = 0;
    v32 = vmulq_n_f32(
        *a13, LANES64_OF(vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL),
                                  v31, v31))
                  .n64_f32[0]);
    LANES64(v33).n64_u64[0] = LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0];
    LANES128(v32).n128_u32[3] = 0;
    LANES64(v34).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(*(a6)).n128_u64[0]),
                    vext_s8(COERCE_AS(int8x8_t, LANES128(*(a13)).n128_u64[0]),
                            v29, 4u)),
                vext_s8(COERCE_AS(int8x8_t, LANES128(*(a6)).n128_u64[0]), v33,
                        4u),
                COERCE_AS(float32x2_t, LANES128(*(a13)).n128_u64[0])))
            .n64_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v34,
                vmls_f32(vmul_f32(v33, COERCE_AS(float32x2_t,
                                                 LANES128(*(a13)).n128_u64[0])),
                         COERCE_AS(float32x2_t, LANES128(*(a6)).n128_u64[0]),
                         v29),
                4u))
            .n64_u64[0];
    LANES128(v35).n128_u64[1] = LANES64(v34).n64_u32[0];
    v36 = vmlaq_laneq_f32(v32, v35, *a6, 3);
    LANES128(v36).n128_u64[1] = LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u32[0];
    v37 = vmulq_f32(v30, *a13);
    LANES128(v37).n128_u64[0] = LANES128_OF(vpaddq_f32(v37, v37)).n128_u64[0];
    v38 = vmlaq_n_f32(
        v36, v30,
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_f32[0]);
    v39 = vaddq_f32(v38, v38);
    LANES128(v39).n128_u32[3] = 0;
    *a13 = v39;
    physx_Gu_PersistentContactManifold_addManifoldContactsToContactBuffer_4fba60(
        a12, a11, (__int128*)a13, a13, a5, v25 + 10, a15);
  }
  return v27 & 1;
}

#pragma GCC visibility pop
