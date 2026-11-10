#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
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
extern __int64 (*GameData_1fc7390[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
__int64 gfxa_TaskPainting_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskPainting_b6f990(_DWORD* a1, __int64 a2);
__int64 TaskPainting_b6fcd0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                            unsigned int* a5);

__int64 gfxa_TaskPainting_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 (**v11)();
    __int64 v12;
    char gap16_[16];
    __int64 (***v13)();
  } v11_;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v14_;

  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  v3 = (__int64*)(a1 + 80);
  GameRoutine_604020((_QWORD*)(a1 + 136));
  *(_QWORD*)(a1 + 280) = 0;
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 256) = -1;
  *(_QWORD*)(a1 + 264) = 0;
  v11_.v13 = &v11_.v11;
  *(_DWORD*)(a1 + 272) = -1;
  *(_DWORD*)(a1 + 288) = -1;
  v11_.v11 = GameData_1fc7390;
  GameRoutine_5fc230((__int64)&v14_.v14);
  if (v11_.v13 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v11_.v13)[6])(v11_.v13,
                                                              &v14_.v14);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 136, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v14_.v14);
  *(_QWORD*)(a1 + 256) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 136);
  if (v11_.v13 == &v11_.v11) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v11_.v13 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
  }
  DecalObject_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 76);
  gfx_shader_Archive_CreateShader(
      (void*)(&v11_.v11), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Painting", 8u);
  v6 = v11_.v11;
  v7 = v11_.v12;
  v8 = *(_QWORD*)(a1 + 16);
  v11_.v11 = nullptr;
  v11_.v12 = 0;
  *(_QWORD*)(a1 + 8) = v6;
  *(_QWORD*)(a1 + 16) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v11_.v12;
  if (v11_.v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 8));
  GameRoutine_b34420((void*)((__int64)&v11_.v11),
                     *(_QWORD**)(*(_QWORD*)a1 + 13424LL),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_PaintPeeling", 0x10u, 0);
  *(_QWORD*)(a1 + 264) = v11_.v11;
  *(_DWORD*)(a1 + 272) = v11_.v12;
  GameRoutine_b34420((void*)((__int64)&v14_.v14),
                     *(_QWORD**)(*(_QWORD*)a1 + 13424LL),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Painting_NM", 0xFu, 0);
  *(_QWORD*)(a1 + 280) = v14_.v14;
  *(_DWORD*)(a1 + 288) = v14_.v15;
  return DecalObject_a91100(
      (__int64*)(a1 + 24), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 16);
}

__int64 TaskPainting_b6f990(_DWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  bool v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  _UNKNOWN** v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  int* v16;
  int v17;
  __int64 v18;
  float v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  unsigned __int32 v34;
  __int64 v35;
  __int64 v36;

  v2 = a1[10];
  v3 = *(_QWORD*)a1;
  v6 = v2 < -1;
  v7 = ((_BYTE)v2 + 1) & 1;
  if (v6) {
    v7 = -v7;
  }
  a1[10] = v7;
  v8 = *(_QWORD*)&a1[2 * v7 + 6];
  v9 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  v10 = GameData_212e4d8[0];
  *v9 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
      *(_QWORD*)(v3 + 256) + 8LL, (unsigned int)a1[68], (unsigned int)a1[64]);
  v9[1] = ((__int64 (*)(__int64, _QWORD, _QWORD))*v10)(
      *(_QWORD*)(v3 + 256) + 8LL, (unsigned int)a1[72], (unsigned int)a1[64]);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v11 = a1[24];
  v6 = v11 < -1;
  v12 = ((_BYTE)v11 + 1) & 1;
  if (v6) {
    v12 = -v12;
  }
  a1[24] = v12;
  v13 = *(_QWORD*)&a1[2 * v12 + 20];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  v15 = *(_BYTE**)(a2 + 8);
  *(float*)v14 = (float)*(int*)a2;
  *(float*)(v14 + 4) = (float)*(int*)(a2 + 4);
  *(float*)(v14 + 8) = 0x1.0000000000000p+0f / (float)*(int*)a2;
  *(float*)(v14 + 12) = 0x1.0000000000000p+0f / (float)*(int*)(a2 + 4);
  v16 = (int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v16 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v17 = v16[1];
  v18 = 360;
  if (v15[328] != 0) {
    v18 = 324;
  }
  v19 = *(float*)&v15[v18];
  v20 = 200;
  if (v15[168] != 0) {
    v20 = 164;
  }
  v21 = v19 * (float)*v16;
  *(_DWORD*)(v14 + 16) = *(_DWORD*)&v15[v20];
  v22 = 280;
  if (v15[248] != 0) {
    v22 = 244;
  }
  *(_DWORD*)(v14 + 20) = *(_DWORD*)&v15[v22];
  *(float*)(v14 + 24) = v21;
  *(float*)(v14 + 28) = v19 * (float)v17;
  v23 = 592;
  if (v15[560] != 0) {
    v23 = 556;
  }
  *(_DWORD*)(v14 + 48) = *(_DWORD*)&v15[v23];
  v24 = 672;
  if (v15[640] != 0) {
    v24 = 636;
  }
  *(_DWORD*)(v14 + 52) = *(_DWORD*)&v15[v24];
  v25 = 752;
  if (v15[720] != 0) {
    v25 = 716;
  }
  *(_DWORD*)(v14 + 56) = *(_DWORD*)&v15[v25];
  v26 = 832;
  if (v15[800] != 0) {
    v26 = 796;
  }
  v27 = *(_DWORD*)&v15[v26];
  v28 = v15 + 401;
  *(_DWORD*)(v14 + 60) = v27;
  if (v15[402] == 0) {
    v28 = v15 + 432;
  }
  *(float*)(v14 + 64) = (float)(*v28 & 1);
  v29 = 512;
  if (v15[480] != 0) {
    v29 = 476;
  }
  *(_DWORD*)(v14 + 68) = *(_DWORD*)&v15[v29];
  v30 = 960;
  if (v15[912] != 0) {
    v30 = 896;
  }
  v31 = *(int8x16_t*)&v15[v30];
  if ((unsigned int)(*(_DWORD*)(v3 + 13240) - 3) <= 3) {
    v32 = vmulq_f32(v31, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    v33 = vmulq_f32(v31, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
            .n64_u64[0];
    v31 = vmulq_f32(v31, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v31).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
            .n64_u64[0];
    v34 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
            .n64_u32[0];
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v31).n128_u32[2] = v34;
  }
  *(_QWORD*)(v14 + 32) = LANES128(v31).n128_u64[0];
  *(_DWORD*)(v14 + 40) = LANES128(v31).n128_u32[2];
  v35 = 1048;
  if (v15[1016] != 0) {
    v35 = 1012;
  }
  *(_DWORD*)(v14 + 44) = *(_DWORD*)&v15[v35];
  v36 = 1128;
  if (v15[1096] != 0) {
    v36 = 1092;
  }
  *(_DWORD*)(v14 + 72) = *(_DWORD*)&v15[v36];
  return (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
}

__int64 TaskPainting_b6fcd0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                            unsigned int* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  _QWORD v27[2];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v10, GameData_21fdeb8[0]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v10, GameData_21fdee0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v10, GameData_21fdf10),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v10, GameData_21fdf14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v12, v13),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v27[0] = 0;
  v27[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v14 + 144LL))(v14, 0, v27),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a1 + 16LL * *(int*)(a1 + 96);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v15 + 104),
                              *(_QWORD*)(v15 + 112)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a4;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = v17 + 16LL * *(int*)(v17 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v16 + 224LL))(v16, 3, 1, *(_QWORD*)(v18 + 24),
                              *(_QWORD*)(v18 + 32)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = a1 + 16LL * *(int*)(a1 + 40);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 13, *(_QWORD*)(v19 + 48),
                              *(_QWORD*)(v19 + 56)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 248LL))(v20, 3, 0, v22, v23, *(unsigned int*)(a1 + 256)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = *(_QWORD*)(a1 + 8);
  v25 = *(_QWORD*)(a1 + 16);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v24 + 144)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v25),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v23 = COERCE_AS(__typeof__(v23),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v24 + 144)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
