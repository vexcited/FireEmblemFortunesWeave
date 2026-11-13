#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct TaskSkyComp_mtx34 {
  float32x4_t v[3];
};

struct TaskSkyComp_mtx44 {
  float32x4_t v[4];
};

struct TaskSkyComp_xy {
  float x;
  float y;
};

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540_alt1 __asm__("GameData_212c540");
extern __int64 (*GameData_1fc7a10[])();
extern __int64* game_g_frame_clock_ptr[3];
float cosf(float);
float exp2f(float);
float sinf(float);
_QWORD* gfxa_TaskSkyComp_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskSkyComp_b77c60(__int64 a1, __int64 a2, __int64 a3);

_QWORD* gfxa_TaskSkyComp_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  _QWORD* result;
  struct {
    __int64 (**v21)();
    __int64 v22;
    char gap16_[16];
    __int64 (***v23)();
  } v21_;
  _QWORD v24[4];

  *(_QWORD*)a1 = a2;
  v2 = a1 + 8;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 200) = 0;
  memset(v24, 0, sizeof(v24));
  *(_QWORD*)(a1 + 128) = -1;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  v21_.v23 = &v21_.v21;
  *(_DWORD*)(a1 + 192) = -1;
  v21_.v21 = GameData_1fc7a10;
  GameRoutine_5fc230((__int64)v24);
  if (v21_.v23 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v21_.v23)[6])(v21_.v23, v24);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(v2, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v24);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), v2);
  if (v21_.v23 == &v21_.v21) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v21_.v23 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v21_.v23)[v5])((__int64)v21_.v23);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v21_.v21), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"SkyComp", 7u);
  v6 = v21_.v21;
  v7 = v21_.v22;
  v8 = *(_QWORD*)(a1 + 144);
  v21_.v21 = nullptr;
  v21_.v22 = 0;
  *(_QWORD*)(a1 + 136) = v6;
  *(_QWORD*)(a1 + 144) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v21_.v22;
  if (v21_.v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 136));
  gfx_shader_Archive_CreateShader(
      (void*)(&v21_.v21), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"SkyComp", 7u);
  v10 = v21_.v21;
  v11 = v21_.v22;
  v12 = *(_QWORD*)(a1 + 160);
  v21_.v21 = nullptr;
  v21_.v22 = 0;
  *(_QWORD*)(a1 + 152) = v10;
  *(_QWORD*)(a1 + 160) = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v21_.v22;
  if (v21_.v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = GameRoutine_ad5000(*(_QWORD**)(a1 + 152), (__int64)"constant_color",
                           0xEu, 1);
  GameRoutine_ad5280(v14);
  gfx_shader_Archive_CreateShader(
      (void*)(&v21_.v21), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"SkyComp", 7u);
  v15 = v21_.v21;
  v16 = v21_.v22;
  v17 = *(_QWORD*)(a1 + 176);
  v21_.v21 = nullptr;
  v21_.v22 = 0;
  *(_QWORD*)(a1 + 168) = v15;
  *(_QWORD*)(a1 + 176) = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v21_.v22;
  if (v21_.v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = GameRoutine_ad5000(*(_QWORD**)(a1 + 168), (__int64)"use_cloud", 9u, 1);
  GameRoutine_ad5280(v19);
  DecalObject_a91100((__int64*)(a1 + 200), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 248);
  result = X8CALL_X0(
      _QWORD*, GameRoutine_b34420((void*)((__int64)&v21_.v21),
                                  *(_QWORD**)(*(_QWORD*)a1 + 13424LL),
                                  (__int64)"Graphics/Textures/common_default",
                                  0x20u, (__int64)"Sky_Moon_000_BC", 0xFu, 0));
  *(_QWORD*)(a1 + 184) = v21_.v21;
  *(_DWORD*)(a1 + 192) = v21_.v22;
  return result;
}

__int64 TaskSkyComp_b77c60(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v5;
  bool v7;
  int v8;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;
  float v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  double v25;
  __int64 v26;
  float32x4_t* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  float32x4_t v45;
  __int64 v46;
  float32x4_t v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int128 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int128 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  int8x16_t v63;
  int8x16_t v64;
  __int128 v65;
  float32x4_t* v66;
  float32x4_t v67;
  float v68;
  float v69;
  float v70;
  int v71;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4x4_t v81;
  struct TaskSkyComp_mtx34 v82_;
  struct TaskSkyComp_mtx44 v83_;
  struct TaskSkyComp_xy v84_;
  v3 = *(_DWORD*)(a1 + 216);
  v5 = a1 + 200;
  v7 = v3 < -1;
  v8 = ((_BYTE)v3 + 1) & 1;
  if (v7) {
    v8 = -v8;
  }
  *(_DWORD*)(a1 + 216) = v8;
  v82_ = ((struct TaskSkyComp_mtx34 (*)(_QWORD)) *
          (_QWORD*)(**(_QWORD**)(a3 + 136) + 16LL))(*(_QWORD*)(a3 + 136));
  v77 = v82_.v[0];
  v78 = v82_.v[1];
  v79 = v82_.v[2];
  v80 = *(float32x4_t*)GameData_212c540_alt1;
  v83_ = ((struct TaskSkyComp_mtx44 (*)(_QWORD)) *
          (_QWORD*)(**(_QWORD**)(a3 + 136) + 24LL))(*(_QWORD*)(a3 + 136));
  v11 = v83_.v[0];
  v12 = v83_.v[1];
  v13 = v83_.v[2];
  v14 = v83_.v[3];
  if (LANES128(v14).n128_f32[3] == 0x1.0000000000000p+0f) {
    v84_ = ((struct TaskSkyComp_xy (*)(_QWORD)) *
            (_QWORD*)(**(_QWORD**)(a3 + 136) + 80LL))(*(_QWORD*)(a3 + 136));
    v17 = v84_.x / v84_.y;
    v18 = (*(float (**)(_QWORD))(**(_QWORD**)(a3 + 136) + 56LL))(
        *(_QWORD*)(a3 + 136));
    v19 = (*(float (**)(_QWORD))(**(_QWORD**)(a3 + 136) + 64LL))(
        *(_QWORD*)(a3 + 136));
    LANES128(v20).n128_u64[0] = 0;
    v21 = -0x1.0000000000000p+0f / (float)(v19 - v18);
    LODWORD(v22) = 0;
    *((float*)&v22 + 1) =
        0x1.0000000000000p+0f /
        (float)((float)((float)((float)((float)-(
                                            float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                             (_QWORD)
                                                                 GameData_212c190) -
                                                   (float)((float)(*(float*)((char*)((
                                                                                 _UNKNOWN**)0x8LL) +
                                                                             (_QWORD)
                                                                                 GameData_212c190 +
                                                                             4) +
                                                                   (float)((float)-(
                                                                               float)(*(float*)((char*)((
                                                                                                    _UNKNOWN**)0x8LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c190) -
                                                                                      (float)((float)(*((float*)
                                                                                                            GameData_212c190 +
                                                                                                        1) -
                                                                                                      (float)(*(float*)
                                                                                                                  GameData_212c190 *
                                                                                                              0x1.3bd3ca0000000p-1f)) *
                                                                                              0x1.3bd3ca0000000p-1f)) *
                                                                           0x1.3bd3ca0000000p-1f)) *
                                                           0x1.3bd3ca0000000p-1f)) *
                                        0x1.3bd3ca0000000p-1f) +
                                0x1.0000000000000p+0f) *
                        0x1.921fb40000000p-1f) /
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c188) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c188 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c188) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c188 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      0x1.3bd3ca0000000p-1f)) *
                                                                                      0x1.3bd3ca0000000p-1f)) *
                                                                   0x1.3bd3ca0000000p-1f)) *
                                                   0x1.3bd3ca0000000p-1f)) *
                                0x1.3bd3ca0000000p-1f) +
                        0x1.0000000000000p+0f));
    v74 = COERCE_AS(float32x4_t, v22);
    v75 =
        COERCE_AS(float32x4_t, COERCE_UNSIGNED_INT(*((float*)&v22 + 1) / v17));
    LANES128(v13).n128_u64[0] = 0;
    LANES128(v20).n128_u64[1] = COERCE_UNSIGNED_INT((float)(v18 * v19) * v21);
    v76 = v20;
    LANES128(v13).n128_f32[2] = v19 * v21;
    LANES128(v13).n128_u32[3] =
        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
  }
  else {
    v75 = v11;
    v76 = v14;
    v74 = v12;
  }
  *(float*)&v23 = (float)(*(float*)(a3 + 144) + *(float*)(a3 + 144)) /
                  (float)*(int*)(a3 + 128);
  *((float*)&v23 + 1) = (float)(*(float*)(a3 + 148) * -0x1.0000000000000p+1f) /
                        (float)*(int*)(a3 + 132);
  v24 = *(_QWORD*)(v5 + 8LL * *(int*)(a1 + 216));
  v73 = vsubq_f32(v13, COERCE_AS(float32x4_t, v23));
  v25 = *(float*)(a3 + 176) * 0x1.32617c1bda512p-7;
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 56LL))(v24);
  v81.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v77).n128_f32[0]), v74,
                     COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]), 1),
      v73, v77, 2);
  v81.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v78).n128_f32[0]), v74,
                     COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]), 1),
      v73, v78, 2);
  v81.val[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v79).n128_f32[0]), v74,
                     COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]), 1),
      v73, v79, 2);
  v81.val[3] = vaddq_f32(
      v76,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v80).n128_f32[0]), v74,
                         COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]), 1),
          v73, v80, 2));
  vst4q_f32((float*)v26, v81);
  v81.val[0] = *(float32x4_t*)(a3 + 48);
  *(_QWORD*)(v26 + 64) = LANES128(v81.val[0]).n128_u64[0];
  *(_DWORD*)(v26 + 72) = LANES128(v81.val[0]).n128_u32[2];
  *(_DWORD*)(v26 + 76) = 1008283838;
  v81.val[0] = *(float32x4_t*)(a3 + 64);
  *(_QWORD*)(v26 + 112) = LANES128(v81.val[0]).n128_u64[0];
  *(_DWORD*)(v26 + 120) = LANES128(v81.val[0]).n128_u32[2];
  LANES128(v81.val[0]).n128_f32[0] = v25;
  *(_DWORD*)(v26 + 124) = LANES128(v81.val[0]).n128_u32[0];
  v81.val[0] = *(float32x4_t*)(a3 + 96);
  *(_QWORD*)(v26 + 80) = LANES128(v81.val[0]).n128_u64[0];
  *(_DWORD*)(v26 + 88) = LANES128(v81.val[0]).n128_u32[2];
  v27 = (float32x4_t*)(a3 + 112);
  v81.val[0] = *(float32x4_t*)(a3 + 112);
  *(_QWORD*)(v26 + 128) = LANES128(v81.val[0]).n128_u64[0];
  *(_DWORD*)(v26 + 136) = LANES128(v81.val[0]).n128_u32[2];
  *(_DWORD*)(v26 + 140) = *(_DWORD*)(a3 + 172);
  v81.val[0] = *(float32x4_t*)(a3 + 80);
  *(_QWORD*)(v26 + 144) = LANES128(v81.val[0]).n128_u64[0];
  *(_DWORD*)(v26 + 152) = LANES128(v81.val[0]).n128_u32[2];
  v28 = *(_QWORD*)(a3 + 160);
  v29 = 528;
  if (*(_BYTE*)(v28 + 496) != 0) {
    v29 = 492;
  }
  v30 = sinf((float)(0x1.6800000000000p+6f - *(float*)(v28 + v29)) *
             0x1.1df46a0000000p-6f);
  v31 = *(_QWORD*)(a3 + 160);
  v32 = v30;
  v33 = 608;
  if (*(_BYTE*)(v31 + 576) != 0) {
    v33 = 572;
  }
  v34 = sinf(*(float*)(v31 + v33) * 0x1.1df46a0000000p-6f);
  v35 = *(_QWORD*)(a3 + 160);
  v36 = v32 - v34;
  v37 = 128;
  if (*(_BYTE*)(v35 + 96) != 0) {
    v37 = 92;
  }
  *(_DWORD*)(v26 + 188) = *(_DWORD*)(v35 + v37);
  v38 = *(_QWORD*)(a3 + 160);
  v39 = 368;
  if (*(_BYTE*)(v38 + 336) != 0) {
    v39 = 332;
  }
  v40 = *(_DWORD*)(v38 + v39);
  v41 = 448;
  if (*(_BYTE*)(v38 + 416) != 0) {
    v41 = 412;
  }
  v42 = *(_DWORD*)(v38 + v41);
  *(_DWORD*)(v26 + 208) = v40;
  *(_DWORD*)(v26 + 212) = v42;
  if (v36 < 0x1.a36e2e0000000p-14f) {
    v36 = 0x1.a36e2e0000000p-14f;
  }
  *(float*)(v26 + 216) = v34;
  *(float*)(v26 + 220) = 0x1.0000000000000p+0f / v36;
  v43 = *(_QWORD*)(a3 + 160);
  v44 = 1152;
  if (*(_BYTE*)(v43 + 1104) != 0) {
    v44 = 1088;
  }
  v45 = *(float32x4_t*)(v43 + v44);
  v46 = 1240;
  if (*(_BYTE*)(v43 + 1208) != 0) {
    v46 = 1204;
  }
  v47 = vmulq_n_f32(v45, exp2f(*(float*)(v43 + v46)));
  *(_QWORD*)(v26 + 176) = LANES128(v47).n128_u64[0];
  *(_DWORD*)(v26 + 184) = LANES128(v47).n128_u32[2];
  v48 = *(_QWORD*)(a3 + 160);
  v49 = 288;
  if (*(_BYTE*)(v48 + 256) != 0) {
    v49 = 252;
  }
  *(_DWORD*)(v26 + 204) = *(_DWORD*)(v48 + v49);
  v50 = *(_QWORD*)(a3 + 160);
  v51 = 944;
  if (*(_BYTE*)(v50 + 896) != 0) {
    v51 = 880;
  }
  v52 = *(_OWORD*)(v50 + v51);
  *(_QWORD*)(v26 + 224) = v52;
  *(_DWORD*)(v26 + 232) = DWORD2(v52);
  v53 = *(_QWORD*)(a3 + 160);
  v54 = 1032;
  if (*(_BYTE*)(v53 + 1000) != 0) {
    v54 = 996;
  }
  *(_DWORD*)(v26 + 236) = *(_DWORD*)(v53 + v54);
  v55 = 0x0.0p+0f;
  v56 = *(_QWORD*)(a3 + 160);
  v57 = 1312;
  if (*(_BYTE*)(v56 + 1282) != 0) {
    v57 = 1281;
  }
  if ((*(_BYTE*)(v56 + v57) & 1) != 0) {
    v58 = 1392;
    if (*(_BYTE*)(v56 + 1360) != 0) {
      v58 = 1356;
    }
    v55 = exp2f(*(float*)(v56 + v58));
  }
  *(float*)(v26 + 240) = v55;
  *(float*)(v26 + 92) = *(float*)(a3 + 168) + 0x1.0000000000000p+0f;
  *(float*)(v26 +
            156) = cosf(*(float*)(a3 + 208));
  v59 = *(_OWORD*)(a3 + 192);
  *(_QWORD*)(v26 + 160) = v59;
  v60 = (_QWORD*)(v26 + 160);
  *(_DWORD*)(v26 + 168) = DWORD2(v59);
  *(_DWORD*)(v26 + 172) = *(_DWORD*)(a3 + 212);
  v61 = *(_QWORD*)(a3 + 160);
  v62 = 1472;
  if (*(_BYTE*)(v61 + 1440) != 0) {
    v62 = 1436;
  }
  *(_DWORD*)(v26 + 244) = *(_DWORD*)(v61 + v62);
  if (*(_BYTE*)(a3 + 153) == 1 &&
      (v63 = vmulq_f32(*(float32x4_t*)(a3 + 96), *(float32x4_t*)(a3 + 96)),
       LANES128(v63).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
               .n64_f32[0] >= 0x1.0000000000000p-23f) &&
      (*(_BYTE*)(a3 + 154) & 1) != 0) {
    *(_DWORD*)(v26 + 124) = 0;
    *v60 = 0;
    *(_QWORD*)(v26 + 168) = 0;
    v27 = (float32x4_t*)(a3 + 96);
    *(_DWORD*)(v26 + 156) = 1065353216;
  }
  else {
    *(_DWORD*)(v26 + 76) = 0;
    if (*(_BYTE*)(a3 + 153) == 1 && (*(_BYTE*)(a3 + 154) & 1) != 0 &&
        (v64 = vmulq_f32(*v27, *v27),
         LANES128(v64).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(
                     COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                 .n64_u64[0],
         LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                 .n64_f32[0] >= 0x1.0000000000000p-23f)) {
      v65 = *(_OWORD*)(a3 + 80);
      *(_QWORD*)(v26 + 64) = v65;
      *(_DWORD*)(v26 + 72) = DWORD2(v65);
    }
    else {
      *(_DWORD*)(v26 + 124) = 0;
      *v60 = 0;
      *(_QWORD*)(v26 + 168) = 0;
      *(_DWORD*)(v26 + 156) = 1065353216;
    }
  }
  v66 = (float32x4_t*)(a3 + 224);
  if (*(_BYTE*)(a3 + 240) == 0) {
    v66 = v27;
  }
  v67 = *v66;
  *(_QWORD*)(v26 + 192) = LANES128(*(v66)).n128_u64[0];
  *(_DWORD*)(v26 + 200) = LANES128(v67).n128_u32[2];
  v68 = sinf((float)(0x1.6800000000000p+6f - *(float*)(a3 + 268)) *
             0x1.1df46a0000000p-6f);
  v69 = sinf(*(float*)(a3 + 272) * 0x1.1df46a0000000p-6f);
  v70 = v68 - v69;
  v71 = *(_DWORD*)(a3 + 264);
  *(_DWORD*)(v26 + 96) = *(_DWORD*)(a3 + 260);
  *(_DWORD*)(v26 + 100) = v71;
  if ((float)(v68 - v69) < 0x1.a36e2e0000000p-14f) {
    v70 = 0x1.a36e2e0000000p-14f;
  }
  *(float*)(v26 + 104) = v69;
  *(float*)(v26 + 108) = 0x1.0000000000000p+0f / v70;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 64LL))(v24);
}

#pragma GCC visibility pop
