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
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc62c0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskDiffusion_Impl_Impl(_QWORD* a1, __int64 a2);
__int64 TaskDiffusion_b59e10(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4);

__int64 gfxa_TaskDiffusion_Impl_Impl(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64 (**v5)();
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v9)();
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int* v28;
  int v29;
  int v30;
  struct {
    __int64 (**v32)();
    __int64 v33;
    char gap16_[16];
    __int64 (***v34)();
  } v32_;
  _QWORD v35[4];

  *a1 = a2;
  GameRoutine_604020(a1 + 1);
  a1[28] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[26] = 0;
  *((_DWORD*)a1 + 54) = 0;
  v35[2] = 0;
  v35[3] = 0;
  a1[16] = -1;
  a1[17] = 0;
  v32_.v34 = &v32_.v32;
  v35[0] = 0;
  v35[1] = 0;
  v32_.v32 = GameData_1fc62c0;
  GameRoutine_5fc230((__int64)v35);
  if (v32_.v34 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v32_.v34)[6])(v32_.v34, v35);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 1),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v35);
  a1[16] = GameRoutine_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 1));
  if (v32_.v34 == &v32_.v32) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v32_.v34 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v32_.v34)[v4])((__int64)v32_.v34);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v32_.v32), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Diffusion", 9u);
  v5 = v32_.v32;
  v6 = v32_.v33;
  v7 = a1[18];
  v32_.v32 = nullptr;
  v32_.v33 = 0;
  a1[17] = v5;
  a1[18] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_ad5000((_QWORD*)a1[17], (__int64)"phase", 5u, 0);
  GameRoutine_ad5280((__int64*)a1[17]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v32_.v32), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Diffusion", 9u);
  v9 = v32_.v32;
  v10 = v32_.v33;
  v11 = a1[20];
  v32_.v32 = nullptr;
  v32_.v33 = 0;
  a1[19] = v9;
  a1[20] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_ad5000((_QWORD*)a1[19], (__int64)"phase", 5u, 1);
  GameRoutine_ad5280((__int64*)a1[19]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v32_.v32), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Diffusion", 9u);
  v13 = v32_.v32;
  v14 = v32_.v33;
  v15 = a1[22];
  v32_.v32 = nullptr;
  v32_.v33 = 0;
  a1[21] = v13;
  a1[22] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  GameRoutine_ad5000((_QWORD*)a1[21], (__int64)"phase", 5u, 2);
  GameRoutine_ad5280((__int64*)a1[21]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v32_.v32), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Diffusion", 9u);
  v17 = v32_.v32;
  v18 = v32_.v33;
  v19 = a1[24];
  v32_.v32 = nullptr;
  v32_.v33 = 0;
  a1[23] = v17;
  a1[24] = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  GameRoutine_ad5000((_QWORD*)a1[23], (__int64)"phase", 5u, 3);
  GameRoutine_ad5280((__int64*)a1[23]);
  DecalObject_a91100(a1 + 25, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 24);
  v21 = a1[25];
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 56LL))(v21);
  v23 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v23 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v24 = *v23;
  v25 = v23[1];
  *(_DWORD*)(v22 + 8) = 1112014848;
  *(_DWORD*)(v22 + 20) = 0;
  *(float*)v22 =
      0x1.0000000000000p+0f / (float)((float)v24 * 0x1.0000000000000p-1f);
  *(float*)(v22 + 4) =
      0x1.0000000000000p+0f / (float)((float)v25 * 0x1.0000000000000p-1f);
  (*(void (**)(__int64))(*(_QWORD*)v21 + 64LL))(v21);
  v26 = a1[26];
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 56LL))(v26);
  v28 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v28 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v29 = *v28;
  v30 = v28[1];
  *(_DWORD*)(v27 + 8) = 1112014848;
  *(_DWORD*)(v27 + 20) = 0;
  *(float*)v27 =
      0x1.0000000000000p+0f / (float)((float)v29 * 0x1.0000000000000p-1f);
  *(float*)(v27 + 4) =
      0x1.0000000000000p+0f / (float)((float)v30 * 0x1.0000000000000p-1f);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 64LL))(v26);
}

__int64 TaskDiffusion_b59e10(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4)
{
  void (**v8)(__int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  _QWORD v49[2];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (void (**)(__int64, __int64))GameData_212e738,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[1] = v10;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (__int64*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v11 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v12 = *v11;
  v13 = HIDWORD(*v11);
  v14 = (int)*v11 / 2;
  v15 = (int)HIDWORD(*v11) / 2;
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v14, v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v14, v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a4;
  v49[0] = 0;
  v49[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v16 + 144LL))(v16, 0, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = a1 + 16LL * *(int*)(a1 + 216);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v17 + 224),
                              *(_QWORD*)(v17 + 232)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *a4;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v18 + 248LL))(v18, 3, 0, v20, v21, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v22, GameData_21fdeb8[0]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v22, GameData_21fdee0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v22, GameData_21fdf08),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v22, GameData_21fdf14),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 136) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[1] = v24;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a4;
  v49[0] = 0;
  v49[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v25 + 144LL))(v25, 0, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *a4;
  v27 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v26 + 248LL))(v26, 3, 0, v28, v29, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 152) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 32LL))(v30),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[1] = v31;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = *a4;
  v49[0] = 0;
  v49[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v32 + 144LL))(v32, 0, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = *a4;
  v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v33 + 248LL))(v33, 3, 0, v35, v36, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 168) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 32LL))(v37),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49[1] = v38;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)v12, (unsigned int)v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)v12, (unsigned int)v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = *a4;
  v49[0] = 0;
  v49[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v39 + 144LL))(v39, 0, v49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = *a4;
  v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v40 + 248LL))(v40, 3, 0, v42, v43, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = *a4;
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v44 + 248LL))(v44, 3, 1, v46, v47, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 184) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
