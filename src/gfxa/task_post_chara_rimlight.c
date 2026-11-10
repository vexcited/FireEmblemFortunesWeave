#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

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
extern __int64 (*GameData_1fc7490[])();
extern __int64 (*GameData_1fc7510[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskPostCharaRimlight_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskPostCharaRimlight_b70bc0(__int64 a1, _QWORD** a2, _QWORD* a3,
                                     __int64* a4);

__int64 gfxa_TaskPostCharaRimlight_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
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
    _QWORD v14[2];
    __int64 v15;
    __int64 v16;
  } v14_;

  *(_QWORD*)a1 = a2;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 128) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 136));
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 256) = -1;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v14[0] = 0;
  v14_.v14[1] = 0;
  v11_.v11 = GameData_1fc7490;
  v11_.v13 = &v11_.v11;
  GameRoutine_5fc230((__int64)v14_.v14);
  if (v11_.v13 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v11_.v13)[6])(v11_.v13,
                                                             v14_.v14);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 8, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v14_.v14);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v3 + 552), a1 + 8);
  if (v11_.v13 == &v11_.v11) {
    v4 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_8;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v11_.v13)[v4])((__int64)v11_.v13);
LABEL_8:
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v14[0] = 0;
  v14_.v14[1] = 0;
  v11_.v11 = GameData_1fc7510;
  v11_.v13 = &v11_.v11;
  GameRoutine_5fc230((__int64)v14_.v14);
  if (v11_.v13 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v11_.v13)[6])(v11_.v13,
                                                             v14_.v14);
  }
  GameRoutine_604060(a1 + 136, (__int64*)(*v3 + 568), (__int64)v14_.v14);
  *(_QWORD*)(a1 + 256) = GameRoutine_615760(*(_QWORD*)(*v3 + 552), a1 + 136);
  if (v11_.v13 == &v11_.v11) {
    v5 = 4;
    goto LABEL_14;
  }
  if (v11_.v13 != nullptr) {
    v5 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v11_.v11), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaRimlight", 0xDu);
  v6 = v11_.v11;
  v7 = v11_.v12;
  v8 = *(_QWORD*)(a1 + 272);
  v11_.v11 = nullptr;
  v11_.v12 = 0;
  *(_QWORD*)(a1 + 264) = v6;
  *(_QWORD*)(a1 + 272) = v7;
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
  GameRoutine_ad5280(*(__int64**)(a1 + 264));
  return DecalObject_a91100(
      (__int64*)(a1 + 280), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 24);
}

__int64 TaskPostCharaRimlight_b70bc0(__int64 a1, _QWORD** a2, _QWORD* a3,
                                     __int64* a4)
{
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  unsigned int v11;
  unsigned int v12;
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
  __int64 v23;
  __int64 v24;
  _QWORD v26[2];
  _QWORD v27[2];

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27[1] = v9;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v27),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (unsigned int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v10 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v12 = *v10;
  v11 = v10[1];
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *v10, v11),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v12, v11),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *a4;
  v26[0] = 0;
  v26[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v13 + 144LL))(v13, 0, v26),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v15 = (*(__int64 (**)(_QWORD*))(*a2[3] + 16LL))(a2[3]),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 224LL))(v14, 3, 0, *(_QWORD*)(v16 + 24),
                              *(_QWORD*)(v16 + 32)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD*))(*a2[4] + 16LL))(a2[4]),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 1, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD*))(*a2[5] + 16LL))(a2[5]),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 3, 9, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = a1 + 16LL * *(int*)(a1 + 296);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 4, *(_QWORD*)(v23 + 304),
                              *(_QWORD*)(v23 + 312)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v24, GameData_21fdeb8[0]),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v24, GameData_21fdee0),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v24, GameData_21fdf08),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v24, GameData_21fdf14),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 264) + 144LL)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
