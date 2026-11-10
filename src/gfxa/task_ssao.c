#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskSSAO_b79df0(_QWORD* a1);
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
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e900;
extern __int64 (*GameData_1fc7ba0[])();
extern __int64 (*GameData_1fc7c20[])();
extern __int64 (*GameData_2177ce0)(__int64);
extern __int64 (*GameData_2177ce8)(__int64);
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskSSAO_Impl_Impl(_QWORD* a1, __int64 a2);
__int64 TaskSSAO_b7a910(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);
extern _UNKNOWN** GameData_212e4d8[2];
float cosf(float);
float sinf(float);
float tanf(float);
__int64 TaskSSAO_b79fc0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4);

__int64 gfxa_TaskSSAO_Impl_Impl(_QWORD* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 (**v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 result;
  __int64 v34;
  struct {
    __int64 (**v35)();
    __int64 v36;
    char gap16_[16];
    __int64 (***v37)();
  } v35_;
  struct {
    _QWORD v38[2];
    __int64 v39;
    __int64 v40;
  } v38_;

  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[12] = 0;
  *((_DWORD*)a1 + 26) = 0;
  *((_DWORD*)a1 + 40) = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[11] = 0;
  v3 = a1 + 11;
  a1[18] = 0;
  v4 = a1 + 18;
  GameRoutine_604020(a1 + 25);
  a1[40] = -1;
  GameRoutine_604020(a1 + 41);
  v5 = *a1;
  a1[56] = -1;
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35), *(__int64**)(v5 + 13408),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v6 = v35_.v35;
  v7 = v35_.v36;
  v8 = a1[2];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = GameRoutine_ad5000((_QWORD*)a1[1], (__int64)"pass", 4u, 0);
  GameRoutine_ad5280(v10);
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35),
                                  *(__int64**)(*a1 + 13408LL),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v11 = v35_.v35;
  v12 = v35_.v36;
  v13 = a1[4];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[3] = v11;
  a1[4] = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"pass", 4u, 1);
  GameRoutine_ad5280(v15);
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35),
                                  *(__int64**)(*a1 + 13408LL),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v16 = v35_.v35;
  v17 = v35_.v36;
  v18 = a1[6];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[5] = v16;
  a1[6] = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = GameRoutine_ad5000((_QWORD*)a1[5], (__int64)"pass", 4u, 2);
  GameRoutine_ad5280(v20);
  gfx_shader_Archive_CreateShader(
      (void*)(&v35_.v35), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"HBAO_Deinterleave", 0x11u);
  v21 = v35_.v35;
  v22 = v35_.v36;
  v23 = a1[8];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[7] = v21;
  a1[8] = v22;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = GameRoutine_ad5000((_QWORD*)a1[7], (__int64)"deinterleave_pass", 0x11u,
                           0);
  GameRoutine_ad5280(v25);
  gfx_shader_Archive_CreateShader(
      (void*)(&v35_.v35), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"HBAO_Deinterleave", 0x11u);
  v26 = v35_.v35;
  v27 = v35_.v36;
  v28 = a1[10];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[9] = v26;
  a1[10] = v27;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v29 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  v30 = GameRoutine_ad5000((_QWORD*)a1[9], (__int64)"deinterleave_pass", 0x11u,
                           1);
  GameRoutine_ad5280(v30);
  DecalObject_a91100(v3, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 740);
  DecalObject_a91100(v4, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 40);
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38[0] = 0;
  v38_.v38[1] = 0;
  v35_.v35 = GameData_1fc7ba0;
  v35_.v37 = &v35_.v35;
  GameRoutine_5fc230((__int64)v38_.v38);
  if (v35_.v37 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v37)[6])(v35_.v37,
                                                             v38_.v38);
  }
  v31 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 25),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v38_.v38);
  a1[40] = GameRoutine_615760(*(_QWORD*)(*v31 + 552), (__int64)(a1 + 25));
  if (v35_.v37 == &v35_.v35) {
    v32 = 4;
  }
  else {
    if (v35_.v37 == nullptr) {
      goto LABEL_38;
    }
    v32 = 5;
  }
  ((__int64 (*)(__int64))(*v35_.v37)[v32])((__int64)v35_.v37);
LABEL_38:
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38[0] = 0;
  v38_.v38[1] = 0;
  v35_.v35 = GameData_1fc7c20;
  v35_.v37 = &v35_.v35;
  GameRoutine_5fc230((__int64)v38_.v38);
  if (v35_.v37 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v37)[6])(v35_.v37,
                                                             v38_.v38);
  }
  GameRoutine_604060((__int64)(a1 + 41), (__int64*)(*v31 + 568),
                     (__int64)v38_.v38);
  a1[56] = GameRoutine_615760(*(_QWORD*)(*v31 + 552), (__int64)(a1 + 41));
  result = (__int64)v35_.v37;
  if (v35_.v37 == &v35_.v35) {
    v34 = 4;
  }
  else {
    if (v35_.v37 == nullptr) {
      return result;
    }
    v34 = 5;
  }
  return ((__int64 (*)(__int64))(*v35_.v37)[v34])((__int64)v35_.v37);
}

__int64 TaskSSAO_b79df0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 25, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 41, *v2 + 568);
  GameRoutine_604050(a1 + 41);
  GameRoutine_604050(a1 + 25);
  v3 = a1[19];
  a1[19] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[18];
  a1[18] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[12];
  a1[12] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[10];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[8];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[6];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[4];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  else {
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 TaskSSAO_b79fc0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  __int64 v14;
  int32x4_t v15;
  int32x4_t v16;
  float32x4_t v17;
  unsigned __int64 v18;
  int8x16_t v19;
  int8x16_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  float32x4_t v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  int v65;
  int v66;
  bool v67;
  int v68;
  __int64 v69;
  int v70;
  float v71;
  unsigned int v72;
  __int64 v73;
  float v74;
  unsigned int* v75;
  __int64 v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  int v85;
  int v86;
  float v87;
  __int64 v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  float v102;
  float v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 i;
  unsigned __int64 v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  float v115;
  int v116;
  unsigned int v117;
  __int64 v118;
  float v119;
  unsigned __int64 v120;
  int v121;
  int v122;
  float v123;
  unsigned int v124;
  unsigned int v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  int v134;
  int v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  _QWORD* v139;
  __int64 v140;
  __int64 (**v141)(__int64);
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v151;
  __int64 v152;
  _DWORD* v153;
  _DWORD v154[4];
  struct {
    __int64 v155;
    char gap72_[2472];
    unsigned __int64 v156;
  } v155_;
  struct {
    float v157[18];
    char gap2624_[8];
    __int64 v158;
  } v157_;
  float32x4x4_t v159;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v5 = *(_QWORD*)(a4 + 8);
  v157_.v158 = a2;
  *(long double*)&v8 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v5 + 24LL))(v5),
         v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v10 = vzip1q_s32(v8, v9);
  v13 = vzip1q_s32(v11, v12);
  v14 = *(_QWORD*)(a3 + 32);
  v15 = vzip2q_s32(v8, v9);
  v16 = vzip2q_s32(v11, v12);
  v17 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 0);
  v18 = LANES64_OF(vdup_laneq_s32(v11, 2)).n64_u64[0];
  LANES128(v17).n128_u32[0] = LANES128(v11).n128_u32[0];
  v19 = vzip1q_s32(v10, v13);
  v20 = vzip1q_s32(v15, v16);
  v21 = vzip2q_s32(v15, v16);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v22).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]), 0);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v24 = vzip2q_s32(v10, v13);
  v25 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 1);
  LANES128(v25).n128_u32[0] = LANES128(v11).n128_u32[1];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v13).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]), 1);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v28 = vdupq_laneq_s32(v8, 2);
  v29 = LANES64_OF(vdup_laneq_s32(v11, 3)).n64_u64[0];
  LANES128(v28).n128_u32[0] = LANES128(v11).n128_u32[2];
  v30 = vextq_s8(v11, vdupq_laneq_s32(v8, 3), 0xCu);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = v29;
  LANES128(v27).n128_u64[1] = v18;
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v20).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v20).n128_u64[1] = 0x3F8000003F800000LL;
  v32 = vnegq_f64(v20);
  v33 = vsubq_f32(vmulq_f32(v27, v11), vmulq_f32(v16, v31));
  v34 = vsubq_f32(vmulq_f32(v28, v11), vmulq_f32(v30, v31));
  v35 = vsubq_f32(vmulq_f32(v28, v16), vmulq_f32(v30, v27));
  v36 = vmlsq_f32(vmulq_f32(v25, v33), v34, v13);
  v37 = vmlsq_f32(vmulq_f32(v17, v33), v34, v22);
  LANES128(v34).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v34).n128_u64[1] = 0xBF800000BF800000LL;
  v38 = vmlaq_f32(v36, v35, v26);
  v39 = vmlaq_f32(v37, v35, v23);
  v40 = vnegq_f64(v34);
  v41 = vsubq_f32(vmulq_f32(v22, v26), vmulq_f32(v13, v23));
  v42 = vsubq_f32(vmulq_f32(v17, v26), vmulq_f32(v25, v23));
  v43 = vsubq_f32(vmulq_f32(v17, v13), vmulq_f32(v22, v25));
  v44 = vmulq_f32(v38, v32);
  v45 = vmulq_f32(v19, v44);
  v46 = vmlaq_f32(vmlsq_f32(vmulq_f32(v30, v41), v42, v16), v43, v11);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
          .n64_u64[0];
  v47 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v28, v41), v42, v27), v43, v31),
                  v40);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
          .n64_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v45).n128_u64[0];
  v48 = vrecpeq_f32(v45);
  v49 = vmulq_f32(v48, vrecpsq_f32(v48, v45));
  v50 = vrecpsq_f32(v49, v45);
  v51 = vceqzq_f32(v45);
  v52 = vmulq_f32(v49, v50);
  v159.val[0] = vbicq_s8(vmulq_f32(v52, v44), v51);
  v159.val[1] = vbicq_s8(vmulq_f32(v52, vmulq_f32(v39, v40)), v51);
  v159.val[2] = vbicq_s8(vmulq_f32(vmulq_f32(v46, v32), v52), v51);
  v159.val[3] = vbicq_s8(vmulq_f32(v47, v52), v51);
  vst4q_f32(v157_.v157, v159);
  v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 32LL))(v53),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v55 = GameData_2177ce0(v54);
  v56 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 32) + 16LL))(
      *(_QWORD*)(a3 + 32)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v57 = (*(__int64 (**)(__int64))(*(_QWORD*)v56 + 32LL))(v56),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v58 = GameData_2177ce8(v57);
  v59 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v60 = (*(__int64 (**)(__int64))(*(_QWORD*)v59 + 32LL))(v59),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v61 = GameData_2177ce0(v60);
  v152 = a3;
  v62 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 32LL))(v62),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v64 = GameData_2177ce8(v63);
  v65 = a1[26];
  v66 = v64;
  v153 = a1;
  v67 = v65 < -1;
  v68 = ((_BYTE)v65 + 1) & 1;
  if (v67) {
    v68 = -v68;
  }
  a1[26] = v68;
  v151 = *(_QWORD*)&a1[2 * v68 + 22];
  v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v151 + 56LL))(v151),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(float*)(v69 + 16) = 0x1.0000000000000p+0f / (float)*(int*)a4;
  v70 = *(_DWORD*)(a4 + 4);
  *(_QWORD*)(v69 + 24) = 0;
  *(float*)(v69 + 20) = 0x1.0000000000000p+0f / (float)v70;
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a4 + 8) + 48LL))(
           *(_QWORD*)(a4 + 8)) &
       1) != 0) {
    v71 = (*(float (**)(_QWORD))(**(_QWORD**)(a4 + 8) + 56LL))(
        *(_QWORD*)(a4 + 8)),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
    *(float*)(v69 + 24) =
        v71 / (*(float (**)(_QWORD))(**(_QWORD**)(a4 + 8) + 64LL))(
                  *(_QWORD*)(a4 + 8)),
                    v11 = COERCE_AS(__typeof__(v11),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v12 = COERCE_AS(__typeof__(v12),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
  v72 = 5489;
  v73 = -623;
  v154[0] = 5489;
  v74 = (float)v58;
  v75 = (unsigned int*)&v155_.v155;
  v76 = 1;
  *(float*)(v69 + 32) = 0x1.0000000000000p+0f / (float)v55;
  *(float*)(v69 + 36) = 0x1.0000000000000p+0f / (float)v58;
  *(float*)(v69 + 40) = 0x1.0000000000000p+0f / (float)v61;
  *(float*)(v69 + 44) = 0x1.0000000000000p+0f / (float)v66;
  v77 = *(_DWORD*)(a4 + 32);
  *(_DWORD*)(v69 + 736) = v77;
  do {
    v78 = v73 + 1812433253 * (v72 ^ (v72 >> 30)) + 624;
    v79 = v73 + 1812433253 * (v78 ^ (v78 >> 30)) + 625;
    *(v75 - 3) = v78;
    *(v75 - 2) = v79;
    v80 = v73 + 1812433253 * (v79 ^ (v79 >> 30)) + 626;
    v81 = v73 + 1812433253 * (v80 ^ (v80 >> 30)) + 627;
    *(v75 - 1) = v80;
    *v75 = v81;
    v82 = v73 + 1812433253 * (v81 ^ (v81 >> 30)) + 628;
    v83 = v73 + 1812433253 * (v82 ^ (v82 >> 30)) + 629;
    v75[1] = v82;
    v75[2] = v83;
    v84 = 1812433253 * (v83 ^ (v83 >> 30));
    v85 = v76 + v84;
    v86 = v73 + v84;
    v76 += 7;
    v73 += 7;
    v72 = v85 + 6;
    v75[3] = v86 + 630;
    v75 += 7;
  } while (v73 != 0);
  v87 = (float)v77;
  v155_.v156 = 0;
  if (v77 >= 1) {
    v88 = v77 & 3;
    v89 = 0x1.921fb60000000p+2f / v87;
    if ((unsigned int)v77 >= 4) {
      v91 = v77 & 0x7FFFFFFC;
      v92 = v69 + 620;
      v90 = 0;
      do {
        v93 = cosf(v89 * (float)(unsigned int)v90),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v94 = sinf(v89 * (float)(unsigned int)v90),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        *(float*)(v92 - 60) = v93;
        *(float*)(v92 - 56) = v94;
        *(_QWORD*)(v92 - 52) = 0;
        v95 = cosf(v89 * (float)(unsigned int)(v90 + 1)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v96 = sinf(v89 * (float)(unsigned int)(v90 + 1)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        *(float*)(v92 - 44) = v95;
        *(float*)(v92 - 40) = v96;
        *(_QWORD*)(v92 - 36) = 0;
        v97 = cosf(v89 * (float)(unsigned int)(v90 + 2)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v98 = sinf(v89 * (float)(unsigned int)(v90 + 2)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        *(float*)(v92 - 28) = v97;
        *(float*)(v92 - 24) = v98;
        *(_QWORD*)(v92 - 20) = 0;
        v99 = cosf(v89 * (float)(unsigned int)(v90 + 3)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v100 = sinf(v89 * (float)(unsigned int)(v90 + 3)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        *(float*)(v92 - 12) = v99;
        *(float*)(v92 - 8) = v100;
        *(_QWORD*)(v92 - 4) = 0;
        v90 += 4;
        v92 += 64;
      } while (v90 != v91);
    }
    else {
      v90 = 0;
    }
    if (v88 != 0) {
      v101 = v69 + 16 * v90 + 572;
      do {
        v102 = cosf(v89 * (float)(unsigned int)v90),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v103 = sinf(v89 * (float)(unsigned int)v90),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
        *(float*)(v101 - 12) = v102;
        *(float*)(v101 - 8) = v103;
        *(_QWORD*)(v101 - 4) = 0;
        --v88;
        LODWORD(v90) = v90 + 1;
        v101 += 16;
      } while (v88 != 0);
    }
  }
  v104 = v69 + 304;
  v105 = 0;
  for (i = 0; i != 16; ++i) {
    *(_QWORD*)(v104 - 248) = 0;
    v107 = (v105 + 1) % 0x270;
    v108 = v154[v105];
    *(float*)(v104 - 256) = (float)(i & 1) + 0x1.0000000000000p-1f;
    *(float*)(v104 - 252) =
        (float)((unsigned int)i >> 1) + 0x1.0000000000000p-1f;
    v109 = v154[v107];
    v110 = v109 & 0x7FFFFFFE | v108 & 0x80000000;
    if ((v109 & 1) != 0) {
      v111 = -1727483681;
    }
    else {
      v111 = 0;
    }
    v154[v105] = v111 ^ v154[(v105 + 397) % 0x270] ^ (v110 >> 1);
    v112 = v154[v155_.v156];
    v155_.v156 = (v105 + 1) % 0x270;
    v113 = ((v112 ^ (v112 >> 11)) << 7) & 0x9D2C5680 ^ v112 ^ (v112 >> 11);
    v114 = (v113 << 15) & 0xEFC60000 ^ v113;
    if (v107 < 0x26F) {
      v105 = v107 + 1;
    }
    else {
      v105 = v107 - 623;
    }
    v115 = vcvts_n_f32_u32(v114 ^ (v114 >> 18), 0x20u);
    v116 = v154[v105];
    v117 = v116 & 0x7FFFFFFE | v154[v107] & 0x80000000;
    v118 = 397;
    v119 = (float)(v115 + 0x0.0p+0f) * 0x1.921fb60000000p+2f;
    if (v107 >= 0xE3) {
      v118 = -227;
    }
    v120 = v118 + v107;
    if ((v116 & 1) != 0) {
      v121 = -1727483681;
    }
    else {
      v121 = 0;
    }
    v122 = v154[v120];
    v123 = v119 / v87;
    v155_.v156 = v105;
    v124 = v121 ^ v122 ^ (v117 >> 1);
    v154[v107] = v124;
    v125 = ((v124 ^ (v124 >> 11)) << 7) & 0x9D2C5680 ^ v124 ^ (v124 >> 11);
    v126 = vcvts_n_f32_u32((v125 << 15) & 0xEFC60000 ^ v125 ^
                               (((v125 << 15) & 0xEFC60000 ^ v125) >> 18),
                           0x20u) +
           0x0.0p+0f;
    *(float*)v104 = cosf(v119 / v87),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
    *(float*)(v104 + 4) = sinf(v123),
                     v11 = COERCE_AS(__typeof__(v11),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                     v12 = COERCE_AS(__typeof__(v12),
                                     PSEUDO_REGISTER(__n128, "v3", "=w")),
                     v9 = COERCE_AS(__typeof__(v9),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
    *(float*)(v104 + 8) = v126;
    *(_DWORD*)(v104 + 12) = 0;
    v104 += 16;
  }
  v127 = v157_.v157[15];
  v128 = v157_.v157[5];
  v129 = v157_.v157[0];
  *(float*)(v69 + 8) = v157_.v157[14];
  *(float*)(v69 + 12) = v127;
  *(float*)v69 = v129;
  *(float*)(v69 + 4) = v128;
  *(float*)(v69 + 700) = v128;
  *(float*)(v69 + 688) = v129 + v129;
  *(float*)(v69 + 692) = -v129;
  *(float*)(v69 + 696) = v128 * -0x1.0000000000000p+1f;
  v130 = *(float*)(a4 + 16);
  v131 =
      (*(float (**)(_QWORD))(**(_QWORD**)(a4 + 8) + 72LL))(*(_QWORD*)(a4 + 8)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v132 = tanf(v131 * 0x1.0000000000000p-1f),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *(float*)(v69 + 708) = v130 * v130;
  *(float*)(v69 + 704) = (float)(v130 * 0x1.0000000000000p-1f) *
                         (float)((float)(v74 * 0x1.0000000000000p-1f) / v132);
  *(float*)(v69 + 712) = -0x1.0000000000000p+0f / (float)(v130 * v130);
  v133 = *(float*)(a4 + 20);
  *(_DWORD*)(v69 + 732) = 0;
  *(float*)(v69 + 716) = v133;
  *(float*)(v69 + 720) =
      0x1.0000000000000p+0f / (float)(0x1.0000000000000p+0f - v133);
  *(_DWORD*)(v69 + 724) = *(_DWORD*)(a4 + 24);
  *(_DWORD*)(v69 + 728) = *(_DWORD*)(a4 + 28);
  (*(void (**)(__int64))(*(_QWORD*)v151 + 64LL))(v151),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v134 = v153[40];
  v67 = v134 < -1;
  v135 = ((_BYTE)v134 + 1) & 1;
  if (v67) {
    v135 = -v135;
  }
  v153[40] = v135;
  v136 = *(_QWORD*)&v153[2 * v135 + 36];
  v137 = (*(__int64 (**)(__int64))(*(_QWORD*)v136 + 56LL))(v136),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v138 = (_QWORD*)v157_.v158;
  v139 = (_QWORD*)v137;
  v140 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v157_.v158 + 8) + 16LL))(
      *(_QWORD*)(v157_.v158 + 8)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v140 + 40LL))(v140),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v141 = (__int64 (**)(__int64))GameData_212e4d8[0],
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  *v139 = (*(__int64 (**)(__int64))GameData_212e4d8[0])(
      *(_QWORD*)(*(_QWORD*)v153 + 256LL) + 8LL),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v142 = *(_QWORD*)(*(_QWORD*)v153 + 256LL);
  v143 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v138 + 16LL))(*v138),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v143 + 40LL))(v143),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v139[1] = (*v141)(v142 + 8);
  v144 = *(_QWORD*)(*(_QWORD*)v153 + 256LL);
  v145 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v152 + 8) + 16LL))(
      *(_QWORD*)(v152 + 8)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v145 + 40LL))(v145),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v139[2] = (*v141)(v144 + 8);
  v146 = *(_QWORD*)(*(_QWORD*)v153 + 256LL);
  v147 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v152 + 16) + 16LL))(
      *(_QWORD*)(v152 + 16)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v147 + 40LL))(v147),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v139[3] = (*v141)(v146 + 8);
  v148 = *(_QWORD*)(*(_QWORD*)v153 + 256LL);
  v149 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v138[2] + 16LL))(v138[2]),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v149 + 40LL))(v149),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v139[4] = (*v141)(v148 + 8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v136 + 64LL))(v136);
}

__int64 TaskSSAO_b7a910(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _UNKNOWN** v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  void (**v39)(__int64, __int64);
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
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;

  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = GameData_2177ce0(v9);
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = GameData_2177ce8(v12);
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = GameData_2177ce0(v15);
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 32LL))(v17),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = GameData_2177ce8(v18);
  gxc_NvnStateCache_Reset(a4[1]),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v20, GameData_21fdeb8[0]),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v20, GameData_21fdee0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v20, GameData_21fdf08),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v20, GameData_21fdf14),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = *a4;
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 24) + 16LL))(
      *(_QWORD*)(a2 + 24)),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = v22 + 16LL * *(int*)(v22 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v21 + 224LL))(v21, 2, 0, *(_QWORD*)(v23 + 24),
                              *(_QWORD*)(v23 + 32)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a1 + 16LL * *(int*)(a1 + 104);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 1, *(_QWORD*)(v24 + 112),
                              *(_QWORD*)(v24 + 120)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = a1 + 16LL * *(int*)(a1 + 160);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 2, *(_QWORD*)(v25 + 168),
                              *(_QWORD*)(v25 + 176)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *a4;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = GameData_212e900;
  ((void (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD,
             _QWORD))*GameData_212e900)(v26 + 8, 0, 0, 0, 0, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 48LL))(v29),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v28 + 256LL))(
      v28, 2, 0, v30),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *(_QWORD*)(a1 + 56);
  v32 = *(_QWORD*)(a1 + 64);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v31 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v32),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v33 = *a4;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = *(_QWORD*)(a1 + 8);
  v35 = *(_QWORD*)(a1 + 16);
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v34 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*v27)(v33 + 8, 0,
                                                                    0, 0, 0, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 48LL))(v37),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v36 + 256LL))(
      v36, 2, 0, v38),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 12, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v35),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v39 = (void (**)(__int64, __int64))GameData_212e738,
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 32LL))(v40),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v41, v42),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = *(_QWORD*)(a1 + 72);
  v44 = *(_QWORD*)(a1 + 80);
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v43 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v44),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = *a4;
  v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 32LL))(v46),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49 = v48;
  (*v39)(v45 + 8, 50);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v47, v49),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = *(_QWORD*)(a1 + 24);
  v50 = *(_QWORD*)(a1 + 32);
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                              memory_order_relaxed);
  }
  v52 = *a4;
  v53 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 40LL))(v53),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v52 + 248LL))(v52, 2, 1, v54, v55, *(unsigned int*)(a1 + 320)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v51 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v50),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v56 = *a4;
  v57 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 32LL))(v57),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = v59;
  (*v39)(v56 + 8, 50);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v58, v60),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a4;
  v62 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 40LL))(v62),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v61 + 248LL))(v61, 2, 1, v63, v64, *(unsigned int*)(a1 + 320)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 40) + 144LL)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return gxc_NvnStateCache_ClearCommandList(a4[1]);
}

#pragma GCC visibility pop
