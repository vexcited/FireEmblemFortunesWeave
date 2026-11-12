#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ResourceBuilder_b6b150(__int64 a1, __int64 a2);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_2177ce0)(__int64);
extern __int64 (*GameData_2177ce8)(__int64);
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 ResourceBuilder_b6b560(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                               float32x4_t* a5);
_QWORD* GameRoutine_ad5000_alt1(_QWORD*, __int64, unsigned __int64,
                                int) __asm__("GameRoutine_ad5000");
__attribute__((swiftcall)) void gfx_shader_Archive_CreateShader_alt1(
    PSEUDO_X8, __int64*, __int64, unsigned __int64, __int64,
    unsigned __int64) __asm__("gfx_shader_Archive_CreateShader");
__int64 GameHr_ad5280(_QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 ResourceBuilder_b6b150(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 16) = a2;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v20_.v20), *(__int64**)(a2 + 13408), (__int64)"Lighting", 8u,
      (__int64)"LensFlareSampling", 0x11u);
  v3 = v20_.v20;
  v4 = v20_.v21;
  v5 = *(_QWORD*)(a1 + 32);
  v20_.v20 = 0;
  v20_.v21 = 0;
  *(_QWORD*)(a1 + 24) = v3;
  *(_QWORD*)(a1 + 32) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  GameHr_ad5280(*(_QWORD**)(a1 + 24));
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v20_.v20), *(__int64**)(*(_QWORD*)(a1 + 16) + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"LensFlareAverage", 0x10u);
  v7 = v20_.v20;
  v8 = v20_.v21;
  v9 = *(_QWORD*)(a1 + 48);
  v20_.v20 = 0;
  v20_.v21 = 0;
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(a1 + 48) = v8;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  v10 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  v11 = GameRoutine_ad5000_alt1(*(_QWORD**)(a1 + 40), (__int64)"pass", 4u, 0);
  GameHr_ad5280(v11);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v20_.v20), *(__int64**)(*(_QWORD*)(a1 + 16) + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"LensFlareAverage", 0x10u);
  v12 = v20_.v20;
  v13 = v20_.v21;
  v14 = *(_QWORD*)(a1 + 64);
  v20_.v20 = 0;
  v20_.v21 = 0;
  *(_QWORD*)(a1 + 56) = v12;
  *(_QWORD*)(a1 + 64) = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = GameRoutine_ad5000_alt1(*(_QWORD**)(a1 + 56), (__int64)"pass", 4u, 1);
  GameHr_ad5280(v16);
  DecalObject_a91100(
      (__int64*)(a1 + 72), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 552LL) + 16LL), 40);
  Model_a636e0((__int64*)(a1 + 128), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 312LL),
               *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 552LL) + 16LL), 4);
  v17 = *(_QWORD*)(a1 + 128);
  *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
  v18 = *(_QWORD*)(a1 + 136);
  *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18) = 0;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18);
}

__int64 ResourceBuilder_b6b560(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                               float32x4_t* a5)
{
  long double v9;
  __int128 v10;
  __int128 v11;
  float32x4_t v12;
  __int64 v13;
  float v14;
  float32x4_t v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  bool v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  float v41;
  int v42;
  int v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  void (**v61)(__int64, __int64);
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  _QWORD* v66;
  _QWORD* v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  __int128 v73;
  __int128 v74;
  float32x4_t v75;
  long double v76;
  float32x4_t v77;
  float32x4_t v78;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = COERCE_FLOAT32X4_T(((long double (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)LANES128(*(a5)).n128_u64[0] +
                                      40LL))(LANES128(*(a5)).n128_u64[0])),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = vaddq_f32(v77,
                  vmulq_n_f32(a5[1], (*(float (**)(unsigned __int64))(
                                         *(_QWORD*)LANES128(*(a5)).n128_u64[0] +
                                         64LL))(LANES128(*(a5)).n128_u64[0]))),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = ((long double (*)(unsigned __int64)) *
        (_QWORD*)(*(_QWORD*)LANES128(*(a5)).n128_u64[0] + 16LL))(
      LANES128(*(a5)).n128_u64[0]),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v73 = v11;
  v74 = v10;
  v75 = v12;
  v76 = v9;
  (*(void (**)(unsigned __int64))(*(_QWORD*)LANES128(*(a5)).n128_u64[0] +
                                  24LL))(LANES128(*(a5)).n128_u64[0]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *((float*)&v73 + 2) +
        (float)((float)(vmuls_lane_f32(LANES128(v78).n128_f32[1], v75, 2) +
                        (float)(LANES128(v78).n128_f32[0] *
                                *((float*)&v76 + 2))) +
                (float)(LANES128(v78).n128_f32[2] * *((float*)&v74 + 2)));
  v21 = 0;
  if (v20 < 0x0.0p+0f) {
    v22 = *(float*)&v73 +
          (float)((float)(vmuls_lane_f32(
                              LANES128(v75).n128_f32[0],
                              COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                              1) +
                          (float)(*(float*)&v76 * LANES128(v78).n128_f32[0])) +
                  (float)(*(float*)&v74 * LANES128(v78).n128_f32[2]));
    v23 = *((float*)&v73 + 1) +
          (float)((float)(LANES128_OF(vmulq_f32(v78, v75)).n128_f32[1] +
                          (float)(LANES128(v78).n128_f32[0] *
                                  *((float*)&v76 + 1))) +
                  (float)(LANES128(v78).n128_f32[2] * *((float*)&v74 + 1)));
    v24 = v19 +
          (float)((float)(vmuls_lane_f32(v23, v15, 3) + (float)(v22 * v14)) +
                  (float)(v20 * v17));
    if (v24 != 0x0.0p+0f) {
      v25 = 0x1.0000000000000p+0f / v24;
      v26 = *(float*)&v18 +
            (float)((float)((float)(PSEUDO_UNFUSED(v23 *
                                                   LANES128(v15).n128_f32[0])) +
                            (float)(*(float*)&v13 * v22)) +
                    (float)(*(float*)&v16 * v20));
      v27 =
          (float)((float)-(
                      float)(v25 *
                             (float)(*((float*)&v18 + 1) +
                                     (float)((float)(vmuls_lane_f32(
                                                         v23,
                                                         COERCE_AS(
                                                             float32x2_t,
                                                             LANES128(v15)
                                                                 .n128_u64[0]),
                                                         1) +
                                                     (float)(v22 *
                                                             *((float*)&v13 +
                                                               1))) +
                                             (float)(v20 *
                                                     *((float*)&v16 + 1))))) *
                  0x1.0e00000000000p+9f) +
          0x1.0e00000000000p+9f;
      *(float*)&v21 = (float)((float)(v26 * v25) * 0x1.e000000000000p+9f) +
                      0x1.e000000000000p+9f;
      *((float*)&v21 + 1) = v27;
    }
  }
  *(_DWORD*)(a1 + 8) = *((_DWORD*)a2 + 2);
  *(float*)a1 = (float)((float)(*(float*)&v21 / 0x1.e000000000000p+10f) *
                        0x1.0000000000000p+1f) +
                -0x1.0000000000000p+0f;
  *(float*)(a1 + 4) =
      -(float)((float)((float)(*((float*)&v21 + 1) / 0x1.0e00000000000p+10f) *
                       0x1.0000000000000p+1f) +
               -0x1.0000000000000p+0f);
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 32LL))(v28),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = GameData_2177ce0(v29);
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 32LL))(v31),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = GameData_2177ce8(v32);
  v34 = *(_DWORD*)(a1 + 88);
  v35 = v33;
  v36 = v34 < -1;
  v37 = ((_BYTE)v34 + 1) & 1;
  if (v36) {
    v37 = -v37;
  }
  *(_DWORD*)(a1 + 88) = v37;
  v38 = *(_QWORD*)(a1 + 8LL * v37 + 72);
  v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 56LL))(v38),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = *(_DWORD*)(a1 + 4);
  v41 = (float)*(int*)(a1 + 8);
  *(_DWORD*)v39 = *(_DWORD*)a1;
  *(_DWORD*)(v39 + 4) = v40;
  *(float*)(v39 + 16) = (float)v30;
  *(float*)(v39 + 20) = (float)v35;
  *(float*)(v39 + 8) = v41;
  *(float*)(v39 + 12) = v41;
  *(float*)(v39 + 24) = 0x1.0000000000000p+0f / (float)v30;
  *(float*)(v39 + 28) = 0x1.0000000000000p+0f / (float)v35;
  *(_DWORD*)(v39 + 32) = LANES128(a5[2]).n128_u32[1];
  *(_DWORD*)(v39 + 36) = LANES128(a5[2]).n128_u32[0];
  (*(void (**)(__int64))(*(_QWORD*)v38 + 64LL))(v38),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = *(_DWORD*)(a1 + 144);
  v36 = v42 < -1;
  v43 = ((_BYTE)v42 + 1) & 1;
  if (v36) {
    v43 = -v43;
  }
  *(_DWORD*)(a1 + 144) = v43;
  v44 = *(_QWORD*)(a1 + 8LL * v43 + 128);
  *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v44 + 56LL))(
      v44) = 0,
   v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
   v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
   v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
   v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
   v49 = COERCE_AS(__typeof__(v49),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
   v54 = COERCE_AS(__typeof__(v54),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v44 + 64LL))(v44),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 18),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = (_QWORD*)(a1 + 96 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *v45, v45[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = *a4;
  v47 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 40LL))(v47),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v46 + 240LL))(v46, 3, 1, v48, v49),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v50 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v50, GameData_21fdeb8),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v50, GameData_21fdee0),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v50, GameData_21fdf08),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v50, GameData_21fdf14),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = a3;
  v52 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v52 + 32LL))(v52),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v53,
                                                                  v54),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v55 = *a4;
  v56 = GameData_2177ce0(v53);
  v57 = GameData_2177ce8(v53);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v55 + 72LL))(
      v55, 0, 0, v56, v57),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = *a4;
  v59 = GameData_2177ce0(v53);
  v60 = GameData_2177ce8(v53);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v58 + 88LL))(
      v58, 0, 0, v59, v60),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = (void (**)(__int64, __int64))GameData_212e738,
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 50),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v62 = (_QWORD*)(a1 + 96 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *v62, v62[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = *a4;
  v64 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v51 + 16LL))(*v51),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = (*(__int64 (**)(__int64))(*(_QWORD*)v64 + 48LL))(v64),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v63 + 256LL))(
      v63, 8, 1, v65),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v66 = (_QWORD*)(a1 + 152 + 16LL * *(int*)(a1 + 144));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 232LL))(*a4, 8, 0, *v66, v66[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 40) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)*a4 + 304LL))(
      *a4, *((unsigned int*)a2 + 2), *((unsigned int*)a2 + 2), 1),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v61)(*a4 + 8, 49);
  v67 = (_QWORD*)(a1 + 96 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *v67, v67[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68 = (_QWORD*)(a1 + 152 + 16LL * *(int*)(a1 + 144));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 232LL))(*a4, 8, 0, *v68, v68[1]),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v69 = *a4;
  v70 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v51[1] + 16LL))(v51[1]),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v71 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 48LL))(v70),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v69 + 256LL))(
      v69, 8, 1, v71),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 56) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 304LL))(*a4, 1, 1, 1);
}

#pragma GCC visibility pop
