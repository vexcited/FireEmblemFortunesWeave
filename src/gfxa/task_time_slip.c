#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_TaskTimeSlip_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
_QWORD* GameRoutine_604020(_QWORD* result);
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
extern _UNKNOWN** GameData_212e738;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fc7f20[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21675c0;
extern int GameData_21675c4;
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskTimeSlip_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskTimeSlip_b7e1f0(_DWORD* a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                            unsigned int* a5);

__int64 gfxa_TaskTimeSlip_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 (**v5)();
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v10)();
    __int64 v11;
    char gap16_[16];
    __int64 (***v12)();
  } v10_;
  _QWORD v13[4];

  *(_QWORD*)a1 = a2;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  memset(v13, 0, sizeof(v13));
  *(_QWORD*)(a1 + 128) = -1;
  *(_QWORD*)(a1 + 136) = 0;
  v10_.v12 = &v10_.v10;
  v10_.v10 = GameData_1fc7f20;
  GameRoutine_5fc230((__int64)v13);
  if (v10_.v12 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v10_.v12)[6])(v10_.v12, v13);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 8, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v13);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v3 + 552), a1 + 8);
  if (v10_.v12 == &v10_.v10) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v10_.v12 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v10_.v12)[v4])((__int64)v10_.v12);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v10_.v10), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"TimeSlip", 8u);
  v5 = v10_.v10;
  v6 = v10_.v11;
  v7 = *(_QWORD*)(a1 + 144);
  v10_.v10 = nullptr;
  v10_.v11 = 0;
  *(_QWORD*)(a1 + 136) = v5;
  *(_QWORD*)(a1 + 144) = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 136));
  return DecalObject_a91100(
      (__int64*)(a1 + 152), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 76);
}

__int64 TaskTimeSlip_b7e1f0(_DWORD* a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                            unsigned int* a5)
{
  int* v10;
  float v11;
  float v12;
  int v13;
  bool v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 v18;
  int8x16_t v19;
  int8x16_t v20;
  float v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int8x16_t v26;
  int8x16_t v27;
  unsigned __int32 v28;
  __int64 v29;
  float32x4_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  _DWORD* v50;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int8x16_t v55;
  int8x16_t v56;
  unsigned __int32 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  float v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  float v66;
  __int64 v67;
  float v68;
  float v69;
  float v70;
  float v71;
  bool v72;
  _QWORD v73[2];

  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(int**)(*(_QWORD*)a1 + 16632LL);
  if (*(_QWORD*)(*(_QWORD*)a1 + 16616LL) != 0) {
    v10 = *(int**)(*(_QWORD*)a1 + 16616LL);
  }
  v11 = (float)*v10;
  v12 = (float)v10[1];
  v13 = a1[42];
  v14 = v13 < -1;
  v15 = ((_BYTE)v13 + 1) & 1;
  v16 = *(float*)&GameData_21675c4 / *(float*)&GameData_21675c0;
  if (v14) {
    v15 = -v15;
  }
  a1[42] = v15;
  v17 = *(_QWORD*)&a1[2 * v15 + 38];
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v19).n128_u64[0] = 0;
  LANES128(v19).n128_u32[2] = 0;
  v20 = COERCE_AS(int8x16_t, GameData_1a837f0);
  *(float*)(v18 + 48) = v16;
  *(float*)(v18 + 52) = 0x1.0000000000000p+0f / v16;
  v21 = 0x0.0p+0f;
  v22 = *((_BYTE**)a5 + 1);
  if (v22 == nullptr) {
    goto LABEL_15;
  }
  v23 = 120;
  if (v22[90] != 0) {
    v23 = 89;
  }
  if ((v22[v23] & 1) != 0) {
    v24 = 320;
    v25 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
    if (v22[272] != 0) {
      v24 = 256;
    }
    v19 = *(int8x16_t*)&v22[v24];
    if ((unsigned int)(v25 - 3) >= 4) {
      v52 = 448;
      if (v22[400] != 0) {
        v52 = 384;
      }
      v33 = *(int8x16_t*)&v22[v52];
    }
    else {
      v26 = vmulq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      v27 = vmulq_f32(v19, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      v19 = vmulq_f32(v19, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v19).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
              .n64_u64[0];
      v28 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                .n64_u32[0];
      LANES128(v19).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v19).n128_u32[2] = v28;
      v29 = 448;
      if (v22[400] != 0) {
        v29 = 384;
      }
      v30 = *(float32x4_t*)&v22[v29];
      v33 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a83620));
      v31 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a834b0));
      v32 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v33).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_u64[0];
      LANES128(v31).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
              .n64_u64[0];
      LANES128(v32).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
              .n64_u64[0];
      LANES128(v33).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v33).n128_u32[2] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
              .n64_u32[0];
    }
    v53 = 200;
    if (v22[168] != 0) {
      v53 = 164;
    }
    v54 = 576;
    if (v22[528] != 0) {
      v54 = 512;
    }
    v20 = *(int8x16_t*)&v22[v54];
    if ((unsigned int)(v25 - 3) <= 3) {
      v55 = vmulq_f32(v20, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v55).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
              .n64_u64[0];
      v56 = vmulq_f32(v20, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v56).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
              .n64_u64[0];
      v20 = vmulq_f32(v20, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
              .n64_u64[0];
      v57 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u32[0];
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v20).n128_u32[2] = v57;
    }
    v36 = *(_DWORD*)&v22[v53];
    v58 = 664;
    if (v22[632] != 0) {
      v58 = 628;
    }
    v35 = *(_DWORD*)&v22[v58];
    v59 = 744;
    if (v22[712] != 0) {
      v59 = 708;
    }
    v60 = *(float*)&v22[v59];
    v61 = sqrtf((float)((float)(v11 / v12) * (float)(v11 / v12)) +
                0x1.0000000000000p+0f);
    v62 = 984;
    if (v22[952] != 0) {
      v62 = 948;
    }
    v63 = *(float*)&v22[v62];
    v64 = v61 * 0x1.0000000000000p-1f;
    v65 = 1064;
    if (v22[1032] != 0) {
      v65 = 1028;
    }
    v66 = *(float*)&v22[v65];
    v67 = 1144;
    if (v22[1112] != 0) {
      v67 = 1108;
    }
    v68 = v63 + v66;
    v69 = *(float*)&v22[v67];
    v70 = (float)(v63 + v66) + v69;
    v71 = v68 / v70;
    v72 = v60 < (float)(v63 / v70);
    v34 = (float)((float)((float)(v64 + 0x1.0000000000000p+0f) * v60) * v70) /
          v63;
    if (!v72) {
      v34 = v64 + 0x1.0000000000000p+0f;
    }
    if (v60 > v71) {
      v21 = (float)(v70 * (float)((float)(v64 + 0x1.0000000000000p-1f) *
                                  (float)(v60 - v71))) /
            v69;
    }
  }
  else {
  LABEL_15:
    v33 = COERCE_AS(int8x16_t, GameData_1a837f0);
    v34 = 0x0.0p+0f;
    v35 = 0;
    v36 = 0;
  }
  *(_QWORD*)v18 = LANES128(v19).n128_u64[0];
  *(_QWORD*)(v18 + 16) = LANES128(v33).n128_u64[0];
  *(_DWORD*)(v18 + 8) = LANES128(v19).n128_u32[2];
  *(_DWORD*)(v18 + 24) = LANES128(v33).n128_u32[2];
  *(_QWORD*)(v18 + 32) = LANES128(v20).n128_u64[0];
  *(_DWORD*)(v18 + 56) = v36;
  *(_DWORD*)(v18 + 60) = v35;
  *(float*)(v18 + 72) = v21;
  *(_DWORD*)(v18 + 12) = 1065353216;
  *(_DWORD*)(v18 + 28) = 1065353216;
  *(_DWORD*)(v18 + 44) = 1065353216;
  *(float*)(v18 + 64) = v11 / v12;
  *(float*)(v18 + 68) = v34;
  *(_DWORD*)(v18 + 40) = LANES128(v20).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 18),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 32LL))(v37),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v38,
                                                                  v39),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = *a4;
  v73[0] = 0;
  v73[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v40 + 144LL))(v40, 0, v73),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v41, GameData_21fdeb8[0]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v41, GameData_21fdee0),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v41, GameData_21fdf08),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v41, GameData_21fdf14),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = *a4;
  v43 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 40LL))(v43),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v42 + 248LL))(v42, 3, 0, v44, v45, (unsigned int)a1[32]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = *a4;
  v47 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 40LL))(v47),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v46 + 248LL))(v46, 3, 1, v48, v49, (unsigned int)a1[32]),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v50 = &a1[4 * a1[42]];
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *((_QWORD*)v50 + 22),
                              *((_QWORD*)v50 + 23)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*((_QWORD*)a1 + 17) + 144LL)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

void gfxa_TaskTimeSlip_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

#pragma GCC visibility pop
