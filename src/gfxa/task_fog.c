#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int64 (*GameData_1fc6950[])();
extern __int64 (*GameData_1fc69d0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
float exp2f(float);
__int64 gfxa_TaskFog_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskFog_b65790(_DWORD* a1, __int64 a2, float* a3);
__int64 TaskFog_b65db0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                       unsigned int* a5);

__int64 gfxa_TaskFog_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 (**v24)();
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  struct {
    __int64 (**v31)();
    __int64 v32;
    char gap16_[16];
    __int64 (***v33)();
  } v31_;
  struct {
    _QWORD v34[2];
    __int64 v35;
    __int64 v36;
  } v34_;

  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  v3 = (__int64*)(a1 + 72);
  *(_QWORD*)(a1 + 128) = 0;
  v4 = (__int64*)(a1 + 128);
  GameRoutine_604020((_QWORD*)(a1 + 184));
  *(_QWORD*)(a1 + 304) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 312));
  *(_QWORD*)(a1 + 432) = -1;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v34[0] = 0;
  v34_.v34[1] = 0;
  v31_.v31 = GameData_1fc6950;
  v31_.v33 = &v31_.v31;
  GameRoutine_5fc230((__int64)v34_.v34);
  if (v31_.v33 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v31_.v33)[6])(v31_.v33,
                                                             v34_.v34);
  }
  v5 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 184, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v34_.v34);
  *(_QWORD*)(a1 + 304) = GameRoutine_615760(*(_QWORD*)(*v5 + 552), a1 + 184);
  if (v31_.v33 == &v31_.v31) {
    v6 = 4;
  }
  else {
    if (v31_.v33 == nullptr) {
      goto LABEL_8;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v31_.v33)[v6])((__int64)v31_.v33);
LABEL_8:
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v34[0] = 0;
  v34_.v34[1] = 0;
  v31_.v31 = GameData_1fc69d0;
  v31_.v33 = &v31_.v31;
  GameRoutine_5fc230((__int64)v34_.v34);
  if (v31_.v33 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v31_.v33)[6])(v31_.v33,
                                                             v34_.v34);
  }
  GameRoutine_604060(a1 + 312, (__int64*)(*v5 + 568), (__int64)v34_.v34);
  *(_QWORD*)(a1 + 432) = GameRoutine_615760(*(_QWORD*)(*v5 + 552), a1 + 312);
  if (v31_.v33 == &v31_.v31) {
    v7 = 4;
    goto LABEL_14;
  }
  if (v31_.v33 != nullptr) {
    v7 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v31_.v33)[v7])((__int64)v31_.v33);
  }
  DecalObject_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 80);
  DecalObject_a91100(v4, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 112);
  gfx_shader_Archive_CreateShader(
      (void*)(&v31_.v31), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Fog", 3u);
  v8 = v31_.v31;
  v9 = v31_.v32;
  v10 = *(_QWORD*)(a1 + 16);
  v31_.v31 = nullptr;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 8) = v8;
  *(_QWORD*)(a1 + 16) = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v31_.v32;
  if (v31_.v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"fog_type", 8u, 0);
  GameRoutine_ad5280(v12);
  gfx_shader_Archive_CreateShader(
      (void*)(&v31_.v31), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Fog", 3u);
  v13 = v31_.v31;
  v14 = v31_.v32;
  v15 = *(_QWORD*)(a1 + 48);
  v31_.v31 = nullptr;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 40) = v13;
  *(_QWORD*)(a1 + 48) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v31_.v32;
  if (v31_.v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = GameRoutine_ad5000(*(_QWORD**)(a1 + 40), (__int64)"fog_type", 8u, 0);
  v18 = GameRoutine_ad5000(v17, (__int64)"use_interior_fog", 0x10u, 1);
  GameRoutine_ad5280(v18);
  gfx_shader_Archive_CreateShader(
      (void*)(&v31_.v31), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Fog", 3u);
  v19 = v31_.v31;
  v20 = v31_.v32;
  v21 = *(_QWORD*)(a1 + 32);
  v31_.v31 = nullptr;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 24) = v19;
  *(_QWORD*)(a1 + 32) = v20;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v22 = v31_.v32;
  if (v31_.v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"fog_type", 8u, 1);
  GameRoutine_ad5280(v23);
  gfx_shader_Archive_CreateShader(
      (void*)(&v31_.v31), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Fog", 3u);
  v24 = v31_.v31;
  v25 = v31_.v32;
  v26 = *(_QWORD*)(a1 + 64);
  v31_.v31 = nullptr;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 56) = v24;
  *(_QWORD*)(a1 + 64) = v25;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = v31_.v32;
  if (v31_.v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = GameRoutine_ad5000(*(_QWORD**)(a1 + 56), (__int64)"fog_type", 8u, 1);
  v29 = GameRoutine_ad5000(v28, (__int64)"use_interior_fog", 0x10u, 1);
  return GameRoutine_ad5280(v29);
}

__int64 TaskFog_b65790(_DWORD* a1, __int64 a2, float* a3)
{

#pragma clang fp contract(off)
  _BYTE* v3;
  __int64 v6;
  __int64 v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  int8x16_t v11;
  int v12;
  float v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  char v19;
  __int64 v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  bool v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  __int64 v45;
  float v46;
  float v47;
  int v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  int v56;
  int v57;
  float v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int128 v63;
  __int64 v64;
  _UNKNOWN** v65;
  __int64 result;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  __int64 v76;
  float v77;
  float v78;
  __int64 v79;
  float v80;
  int v81;
  float v82;
  float v83;
  __int64 v84;
  float v85;
  __int64 v86;
  float32x4_t v87;
  __int64 v88;
  __int128 v89;
  __int64 v90;
  float32x4_t v91;
  __int64 v92;
  float32x4_t v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int128 v97;
  float v98;
  float v99;
  int8x16_t v100;
  int v101;

  v3 = *(_BYTE**)a3;
  v6 = 800;
  if (*(_BYTE*)(*(_QWORD*)a3 + 768LL) != 0) {
    v6 = 764;
  }
  v7 = 480;
  if (*(_BYTE*)(*(_QWORD*)a3 + 432LL) != 0) {
    v7 = 416;
  }
  v8 = *(float32x4_t*)&v3[v7];
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 3) > 3) {
    v100 = *(int8x16_t*)&v3[v7];
  }
  else {
    v9 = vmulq_f32(v8, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    v10 = vmulq_f32(v8, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    v11 = vmulq_f32(v8, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    LANES128(v10).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u32[0];
    v100 = v10;
  }
  v12 = *(_DWORD*)&v3[v6];
  v13 = a3[22];
  v14 = 568;
  if (v3[536] != 0) {
    v14 = 532;
  }
  v15 = *(float*)&v3[v14];
  v16 = 720;
  v99 = v15;
  if (v3[688] != 0) {
    v16 = 684;
  }
  v17 = *(float*)&v3[v16];
  v18 = 640;
  v98 = v17;
  if (v3[610] != 0) {
    v18 = 609;
  }
  v19 = v3[v18];
  v20 = 960;
  if (v3[928] != 0) {
    v20 = 924;
  }
  v21 = *(float*)&v3[v20];
  v22 = 1040;
  if (v3[1008] != 0) {
    v22 = 1004;
  }
  v23 = exp2f(*(float*)&v3[v22]);
  v24 = *(_QWORD*)a3;
  v25 = v23;
  v26 = 1120;
  if (*(_BYTE*)(*(_QWORD*)a3 + 1088LL) != 0) {
    v26 = 1084;
  }
  v27 = *(_DWORD*)(v24 + v26);
  v28 = 1200;
  if (*(_BYTE*)(v24 + 1168) != 0) {
    v28 = 1164;
  }
  v29 = *(_DWORD*)(v24 + v28);
  v30 = a1[22];
  v31 = v30 < -1;
  v32 = ((_BYTE)v30 + 1) & 1;
  v101 = v29;
  if (v31) {
    v32 = -v32;
  }
  a1[22] = v32;
  v33 = *(_QWORD*)&a1[2 * v32 + 18];
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 56LL))(v33);
  v35 = *(_QWORD*)a3;
  v36 = v34;
  v37 = 200;
  if (*(_BYTE*)(*(_QWORD*)a3 + 168LL) != 0) {
    v37 = 164;
  }
  v38 = *(float*)(v35 + v37);
  v39 = 280;
  if (*(_BYTE*)(v35 + 248) != 0) {
    v39 = 244;
  }
  v40 = *(float*)(v35 + v39);
  v41 = 360;
  if (*(_BYTE*)(v35 + 328) != 0) {
    v41 = 324;
  }
  v42 = v40 - v38;
  if (*(_BYTE*)(v35 + 848) == 1) {
    v43 = *(float*)(v35 + 844);
  }
  else {
    v44 = *((_QWORD*)a3 + 1);
    v45 = 952;
    if (*(_BYTE*)(v44 + 920) != 0) {
      v45 = 916;
    }
    v43 = *(float*)(v44 + v45);
  }
  v46 = v21 + 0x1.0000000000000p+0f;
  v47 = 0x1.0000000000000p+0f / v42;
  v48 = *(_DWORD*)(v35 + v41);
  v49 = -v38;
  if (v12 == 2) {
    v52 = *((_QWORD*)a3 + 1);
    v50 = 0x1.0000000000000p+0f;
    v53 = v43 + 0x1.0000000000000p+0f;
    v54 = 872;
    if (*(_BYTE*)(v52 + 840) != 0) {
      v54 = 836;
    }
    v55 = exp2f(*(float*)(v52 + v54));
    *(float*)(v36 + 48) = v53;
    *(float*)(v36 + 52) = v55;
    *(_DWORD*)(v36 + 56) = 0;
    goto LABEL_43;
  }
  if (v12 != 1) {
    v50 = 0x1.0000000000000p+0f;
    *(_DWORD*)(v34 + 56) = 0;
    *(_QWORD*)(v34 + 48) = 0x3F8000003F800000LL;
  LABEL_43:
    v56 = 0;
    v57 = v27;
    goto LABEL_46;
  }
  if ((v19 & 1) != 0) {
    v50 = (float)(0x1.0000000000000p+0f / v13) * exp2f(v98);
    v51 = 0x3F80000000000000LL;
  }
  else {
    v58 = exp2f(v99 + -0x1.8000000000000p+1f);
    v51 = 0;
    v50 = v58 / 0x1.9000000000000p+6f;
  }
  v57 = v27;
  *(_QWORD*)(v36 + 48) = LANES128(v100).n128_u32[0] |
                         ((unsigned __int64)LANES128(v100).n128_u32[1] << 32);
  v59 = v51 | LANES128(v100).n128_u32[2];
  *(_DWORD*)(v36 + 56) = v59;
  v56 = HIDWORD(v59);
LABEL_46:
  *(_DWORD*)(v36 + 60) = v56;
  *(float*)(v36 + 16) = v49;
  *(float*)(v36 + 20) = v47;
  *(_DWORD*)(v36 + 24) = v48;
  *(float*)(v36 + 28) = v50;
  *(float*)(v36 + 32) = v46;
  *(float*)(v36 + 36) = v25;
  *(_DWORD*)(v36 + 40) = v57;
  *(_DWORD*)(v36 + 44) = v101;
  v60 = *(_QWORD*)a3;
  v61 = 1272;
  if (*(_BYTE*)(*(_QWORD*)a3 + 1242LL) != 0) {
    v61 = 1241;
  }
  if ((*(_BYTE*)(v60 + v61) & 1) != 0) {
    v62 = 1392;
    if (*(_BYTE*)(v60 + 1344) != 0) {
      v62 = 1328;
    }
    v63 = *(_OWORD*)(v60 + v62);
  }
  else {
    v63 = *((_OWORD*)a3 + 1);
  }
  *(_QWORD*)v36 = v63;
  *(_DWORD*)(v36 + 12) = 0;
  *(_DWORD*)(v36 + 8) = DWORD2(v63);
  v64 = 18;
  if (v12 == 0) {
    v64 = 14;
  }
  v65 = GameData_212e4d8[0];
  *(_QWORD*)(v36 + 64) =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
          *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, LODWORD(a3[v64]),
          (unsigned int)a1[76]);
  *(_QWORD*)(v36 + 72) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v65)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *((unsigned int*)a3 + 10),
      (unsigned int)a1[76]);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 64LL))(v33);
  v67 = 1472;
  if (*(_BYTE*)(*(_QWORD*)a3 + 1442LL) != 0) {
    v67 = 1441;
  }
  if ((*(_BYTE*)(*(_QWORD*)a3 + v67) & 1) != 0) {
    v68 = a1[36];
    v31 = v68 < -1;
    v69 = ((_BYTE)v68 + 1) & 1;
    if (v31) {
      v69 = -v69;
    }
    a1[36] = v69;
    v70 = *(_QWORD*)&a1[2 * v69 + 32];
    v71 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 56LL))(v70);
    v72 = *(_QWORD*)a3;
    v73 = v71;
    v74 = 1944;
    if (*(_BYTE*)(*(_QWORD*)a3 + 1912LL) != 0) {
      v74 = 1908;
    }
    v75 = *(float*)(v72 + v74);
    v76 = 2024;
    if (*(_BYTE*)(v72 + 1992) != 0) {
      v76 = 1988;
    }
    v77 = -v75;
    v78 = *(float*)(v72 + v76);
    v79 = 2104;
    v80 = v78 - v75;
    if (*(_BYTE*)(v72 + 2072) != 0) {
      v79 = 2068;
    }
    v81 = *(_DWORD*)(v72 + v79);
    v82 = 0x1.0000000000000p+0f / v80;
    if ((v19 & 1) != 0) {
      v83 = exp2f(v98);
      v84 = 0x3F80000000000000LL;
    }
    else {
      v85 = exp2f(v99 + -0x1.8000000000000p+1f);
      v84 = 0;
      v83 = v85 / 0x1.9000000000000p+6f;
    }
    v86 = *(_QWORD*)a3;
    LANES128(v87).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v87).n128_u64[1] = 0x3F0000003F000000LL;
    v88 = 1856;
    if (*(_BYTE*)(*(_QWORD*)a3 + 1808LL) != 0) {
      v88 = 1792;
    }
    v89 = *(_OWORD*)(v86 + v88);
    v90 = 1728;
    if (*(_BYTE*)(v86 + 1680) != 0) {
      v90 = 1664;
    }
    v91 = *(float32x4_t*)(v86 + v90);
    v92 = 1600;
    if (*(_BYTE*)(v86 + 1552) != 0) {
      v92 = 1536;
    }
    v93 = vmulq_f32(v91, v87);
    v94 = (__int64*)(v86 + v92);
    v95 = *v94;
    v96 = *((unsigned int*)v94 + 2);
    *(_DWORD*)(v73 + 72) = v81;
    *(float*)(v73 + 76) = v83;
    *(_DWORD*)(v73 + 44) = 0;
    *(float*)(v73 + 64) = v77;
    *(float*)(v73 + 68) = v82;
    *(float*)(v73 + 80) = v46;
    *(float*)(v73 + 84) = v25;
    *(_DWORD*)(v73 + 88) = v57;
    *(_DWORD*)(v73 + 92) = v101;
    *(_QWORD*)v73 = v95;
    *(_QWORD*)(v73 + 8) = v96;
    *(_QWORD*)(v73 + 16) = LANES128(v93).n128_u64[0];
    *(_QWORD*)(v73 + 24) = LANES128(v93).n128_u32[2];
    *(_QWORD*)(v73 + 96) = LANES128(v100).n128_u64[0];
    *(_QWORD*)(v73 + 104) = v84 | LANES128(v100).n128_u32[2];
    *(float*)(v73 + 32) = 0x1.0000000000000p+0f / *(float*)&v89;
    *(float*)(v73 + 36) = 0x1.0000000000000p+0f / *((float*)&v89 + 1);
    *(float*)(v73 + 40) = 0x1.0000000000000p+0f / *((float*)&v89 + 2);
    v97 = *((_OWORD*)a3 + 1);
    *(_DWORD*)(v73 + 60) = 0;
    *(_QWORD*)(v73 + 48) = v97;
    *(_DWORD*)(v73 + 56) = DWORD2(v97);
    return (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 64LL))(v70);
  }
  return result;
}

__int64 TaskFog_b65db0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                       unsigned int* a5)
{
  int v10;
  int v11;
  int v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  bool v41;
  _BOOL8 v42;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(unsigned __int8*)(*(_QWORD*)a5 + 768LL);
  v11 = *(_DWORD*)(*(_QWORD*)a5 + 764LL);
  v12 = *(_DWORD*)(*(_QWORD*)a5 + 800LL);
  v13 = 1472;
  if (*(_BYTE*)(*(_QWORD*)a5 + 1442LL) != 0) {
    v13 = 1441;
  }
  v14 = *(_BYTE*)(*(_QWORD*)a5 + v13);
  gxc_NvnStateCache_Reset(a4[1]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v15, GameData_21fdeb8[0]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v15, GameData_21fdee0),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v15, GameData_21fdf08),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v15, GameData_21fdf14),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 17),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v17, v18),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, a5[20], a5[21]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, a5[20], a5[21]),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = *a4;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
      *(_QWORD*)v19 + 240LL))(v19, 3, 0, v21, v22),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = *a4;
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v23 + 248LL))(v23, 3, 1, v25, v26, *(unsigned int*)(a1 + 432)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = v28 + 16LL * *(int*)(v28 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 224LL))(v27, 3, 0, *(_QWORD*)(v29 + 24),
                              *(_QWORD*)(v29 + 32)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *a4;
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = v31 + 16LL * *(int*)(v31 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v30 + 224LL))(v30, 3, 1, *(_QWORD*)(v32 + 24),
                              *(_QWORD*)(v32 + 32)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = a1 + 16LL * *(int*)(a1 + 88);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *(_QWORD*)(v33 + 96),
                              *(_QWORD*)(v33 + 104)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v14 & 1) != 0) {
    v34 = *a4;
    v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 40LL))(v35),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v34 + 248LL))(v34, 3, 2, v36, v37,
                                *(unsigned int*)(a1 + 432)),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38 = a1 + 16LL * *(int*)(a1 + 144);
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *(_QWORD*)(v38 + 152),
                                *(_QWORD*)(v38 + 160)),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v39 = 2;
  if (v10 != 0) {
    v40 = v11;
  }
  else {
    v40 = v12;
  }
  v41 = v40 == 1;
  v42 = v40 == 1;
  if (v41) {
    v39 = 3;
  }
  if ((v14 & 1) != 0) {
    v42 = v39;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 16 * v42 + 8) + 144LL)),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
