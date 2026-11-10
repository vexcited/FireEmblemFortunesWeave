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
extern _UNKNOWN* GameData_212c568;
extern _UNKNOWN* GameData_212e8b0;
extern __int64 (*GameData_1fc6c90[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskGradationFilter_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskGradationFilter_b68fc0(__int64 a1, _QWORD* a2, _QWORD* a3,
                                   __int64* a4, unsigned int* a5);

__int64 gfxa_TaskGradationFilter_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128* v8;
  __int128 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)();
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 (**v28)();
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 (**v33)();
    __int64 v34;
    char gap16_[16];
    __int64 (***v35)();
  } v33_;
  _QWORD v36[4];

  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v3 = (__int64*)(a1 + 88);
  GameRoutine_604020((_QWORD*)(a1 + 200));
  memset(v36, 0, sizeof(v36));
  *(_QWORD*)(a1 + 320) = -1;
  v33_.v35 = &v33_.v33;
  v33_.v33 = GameData_1fc6c90;
  GameRoutine_5fc230((__int64)v36);
  if (v33_.v35 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v33_.v35)[6])(v33_.v35, v36);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 200, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v36);
  *(_QWORD*)(a1 + 320) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 200);
  if (v33_.v35 == &v33_.v33) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v33_.v35 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v33_.v35)[v5])((__int64)v33_.v35);
  }
  DecalObject_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 100);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
  v8 = (__int128*)GameData_212c568;
  *(_OWORD*)v7 = *(_OWORD*)GameData_212c568;
  v9 = *v8;
  *(_OWORD*)(v7 + 16) = *v8;
  v10 = GameData_212e8b0;
  *(_OWORD*)(v7 + 48) = v9;
  *(_DWORD*)(v7 + 84) = 1065353216;
  *(_QWORD*)(v7 + 64) = *v10;
  *(_QWORD*)(v7 + 72) = 0x3F0000003F000000LL;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
  v11 = *(_QWORD*)(a1 + 96);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = *v8;
  *(_DWORD*)(v12 + 84) = 1065353216;
  *(_OWORD*)v12 = v13;
  v14 = *v8;
  v15 = *v10;
  *(_OWORD*)(v12 + 16) = *v8;
  *(_OWORD*)(v12 + 48) = v14;
  *(_QWORD*)(v12 + 64) = v15;
  *(_QWORD*)(v12 + 72) = 0x3F0000003F000000LL;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"GradationFilter", 0xFu);
  v16 = v33_.v33;
  v17 = v33_.v34;
  v18 = *(_QWORD*)(a1 + 16);
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  *(_QWORD*)(a1 + 8) = v16;
  *(_QWORD*)(a1 + 16) = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"type", 4u, 0);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"vignette", 8u, 0);
  GameRoutine_ad5280(*(__int64**)(a1 + 8));
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"GradationFilter", 0xFu);
  v20 = v33_.v33;
  v21 = v33_.v34;
  v22 = *(_QWORD*)(a1 + 32);
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  *(_QWORD*)(a1 + 24) = v20;
  *(_QWORD*)(a1 + 32) = v21;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"type", 4u, 0);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"vignette", 8u, 1);
  GameRoutine_ad5280(*(__int64**)(a1 + 24));
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"GradationFilter", 0xFu);
  v24 = v33_.v33;
  v25 = v33_.v34;
  v26 = *(_QWORD*)(a1 + 48);
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  *(_QWORD*)(a1 + 40) = v24;
  *(_QWORD*)(a1 + 48) = v25;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 40), (__int64)"type", 4u, 1);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 40), (__int64)"vignette", 8u, 0);
  GameRoutine_ad5280(*(__int64**)(a1 + 40));
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"GradationFilter", 0xFu);
  v28 = v33_.v33;
  v29 = v33_.v34;
  v30 = *(_QWORD*)(a1 + 64);
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  *(_QWORD*)(a1 + 56) = v28;
  *(_QWORD*)(a1 + 64) = v29;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  v31 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 56), (__int64)"type", 4u, 1);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 56), (__int64)"vignette", 8u, 1);
  return GameRoutine_ad5280(*(__int64**)(a1 + 56));
}

__int64 TaskGradationFilter_b68fc0(__int64 a1, _QWORD* a2, _QWORD* a3,
                                   __int64* a4, unsigned int* a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v10,
                                                                  v11),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *a4;
  v22[0] = 0;
  v22[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v12 + 144LL))(v12, 0, v22),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v13, GameData_21fdeb8[0]),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v13, GameData_21fdee0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v13, GameData_21fdf08),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v13, GameData_21fdf14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 248LL))(v14, 3, 0, v16, v17, *(unsigned int*)(a1 + 320)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = a1 + 16LL * *(int*)(a1 + 104);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v18 + 112),
                              *(_QWORD*)(v18 + 120)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = *((_QWORD*)a5 + 2);
  v20 = 120;
  if (*(_BYTE*)(v19 + 90) != 0) {
    v20 = 89;
  }
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3,
      *(_QWORD*)(*(_QWORD*)(a1 + 16LL * *(unsigned __int8*)(v19 + v20) + 8) +
                 144LL)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
