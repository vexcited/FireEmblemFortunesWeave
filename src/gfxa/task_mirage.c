#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc7090[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
__int64 gfxa_TaskMirage_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskMirage_b6dbe0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5);

__int64 gfxa_TaskMirage_Impl_Impl(__int64 a1, __int64 a2)
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
  struct {
    __int64 (**v17)();
    __int64 v18;
    char gap16_[16];
    __int64 (***v19)();
  } v17_;
  _QWORD v20[4];

  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v3 = (__int64*)(a1 + 40);
  GameRoutine_604020((_QWORD*)(a1 + 96));
  memset(v20, 0, sizeof(v20));
  *(_QWORD*)(a1 + 216) = -1;
  v17_.v19 = &v17_.v17;
  v17_.v17 = GameData_1fc7090;
  GameRoutine_5fc230((__int64)v20);
  if (v17_.v19 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v17_.v19)[6])(v17_.v19, v20);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 96, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v20);
  *(_QWORD*)(a1 + 216) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 96);
  if (v17_.v19 == &v17_.v17) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v17_.v19 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v17_.v19)[v5])((__int64)v17_.v19);
  }
  DecalObject_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 40);
  gfx_shader_Archive_CreateShader(
      (void*)(&v17_.v17), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Mirage", 6u);
  v6 = v17_.v17;
  v7 = v17_.v18;
  v8 = *(_QWORD*)(a1 + 16);
  v17_.v17 = nullptr;
  v17_.v18 = 0;
  *(_QWORD*)(a1 + 8) = v6;
  *(_QWORD*)(a1 + 16) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"debug_mode", 0xAu, 0);
  GameRoutine_ad5280(v10);
  gfx_shader_Archive_CreateShader(
      (void*)(&v17_.v17), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Mirage", 6u);
  v11 = v17_.v17;
  v12 = v17_.v18;
  v13 = *(_QWORD*)(a1 + 32);
  v17_.v17 = nullptr;
  v17_.v18 = 0;
  *(_QWORD*)(a1 + 24) = v11;
  *(_QWORD*)(a1 + 32) = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"debug_mode", 0xAu, 1);
  return GameRoutine_ad5280(v15);
}

__int64 TaskMirage_b6dbe0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5)
{
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  float32x2_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x2_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
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
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v48[2];

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(_DWORD*)(a1 + 56);
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  *(_DWORD*)(a1 + 56) = v12;
  v13 = *(_QWORD*)(a1 + 8LL * v12 + 40);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)v14 = *((_DWORD*)a5 + 3);
  *(long double*)&v15 =
      ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 24LL))(*a5),
         v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v30 = COERCE_AS(__typeof__(v30),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v39 = COERCE_AS(__typeof__(v39),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v43 = COERCE_AS(__typeof__(v43),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  PSEUDO_LOW_LANE64(v16, n64_u32, *((_DWORD*)a5 + 4));
  v20 = vaddq_f32(
      v19, vmlsq_lane_f32(vmlaq_f32(vmulq_f32(v15, COERCE_AS(float32x4_t, 0LL)),
                                    COERCE_AS(float32x4_t, 0LL), v17),
                          v18, v16, 0));
  *(float*)(v14 + 4) =
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v20).n128_f32[3], v20, 2);
  *(long double*)&v21 =
      ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 24LL))(*a5),
         v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v30 = COERCE_AS(__typeof__(v30),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v39 = COERCE_AS(__typeof__(v39),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
         v43 = COERCE_AS(__typeof__(v43),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  PSEUDO_LOW_LANE64(v22, n64_f32, *((float*)a5 + 4) + *((float*)a5 + 5));
  v26 = vaddq_f32(
      v25, vmlsq_lane_f32(vmlaq_f32(vmulq_f32(v21, COERCE_AS(float32x4_t, 0)),
                                    COERCE_AS(float32x4_t, 0), v23),
                          v24, v22, 0));
  *(float*)(v14 + 8) =
      vmuls_lane_f32(0x1.0000000000000p+0f / LANES128(v26).n128_f32[3], v26, 2);
  *(_DWORD*)(v14 + 12) = *((_DWORD*)a5 + 6);
  *(_QWORD*)(v14 + 16) = *(_QWORD*)((char*)a5 + 28);
  *(float*)(v14 + 24) = (float)*((int*)a5 + 9);
  *(float*)(v14 + 28) = (float)*((int*)a5 + 10);
  *(float*)(v14 + 32) = 0x1.0000000000000p+0f / (float)*((int*)a5 + 9);
  *(float*)(v14 + 36) = 0x1.0000000000000p+0f / (float)*((int*)a5 + 10);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v27, GameData_21fdeb8[0]),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v27, GameData_21fdee0),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v27, GameData_21fdf10),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v27, GameData_21fdf14),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *((unsigned int*)a5 + 9), *((unsigned int*)a5 + 10)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *((unsigned int*)a5 + 9), *((unsigned int*)a5 + 10)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 32LL))(v28),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v29, v30),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a4;
  v48[0] = 0;
  v48[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v31 + 144LL))(v31, 0, v48),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = a1 + 16LL * *(int*)(a1 + 56);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v32 + 64),
                              *(_QWORD*)(v32 + 72)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = *a4;
  v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = v34 + 16LL * *(int*)(v34 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v33 + 224LL))(v33, 3, 1, *(_QWORD*)(v35 + 24),
                              *(_QWORD*)(v35 + 32)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 40LL))(v37),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v36 + 248LL))(v36, 3, 0, v38, v39, *(unsigned int*)(a1 + 216)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = *a4;
  v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v40 + 248LL))(v40, 3, 1, v42, v43, *(unsigned int*)(a1 + 216)),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = a1 + 16LL * *((unsigned __int8*)a5 + 8);
  v45 = *(_QWORD*)(v44 + 8);
  v46 = *(_QWORD*)(v44 + 16);
  if (v46 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v45 + 144)),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v46),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v45 + 144)),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
