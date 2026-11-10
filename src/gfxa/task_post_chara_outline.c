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
extern __int128 GameData_1a83550;
extern __int64 (*GameData_1fc7410[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskPostCharaOutline_Impl_Impl(__int64* a1, __int64 a2);
__int64 TaskPostCharaOutline_b70550(__int64 a1, _QWORD** a2, _QWORD* a3,
                                    __int64* a4);

__int64 gfxa_TaskPostCharaOutline_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap16_[16];
    __int64 (***v17)();
  } v15_;
  _QWORD v18[4];

  *a1 = a2;
  a1[4] = 1065353216;
  *((_OWORD*)a1 + 1) = GameData_1a83550;
  GameRoutine_604020(a1 + 5);
  a1[33] = 0;
  a1[34] = 0;
  a1[35] = 0;
  a1[36] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  *((_DWORD*)a1 + 50) = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[29] = 0;
  a1[31] = 0;
  *((_DWORD*)a1 + 64) = 0;
  a1[20] = -1;
  a1[21] = 0;
  v3 = *a1;
  a1[30] = 0;
  DecalObject_a91100(a1 + 30, *(_QWORD*)(v3 + 312),
                     *(_QWORD*)(*(_QWORD*)(v3 + 552) + 16LL), 24);
  v4 = a1[30];
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
  *(_OWORD*)v5 = *((_OWORD*)a1 + 1);
  *(_DWORD*)(v5 + 16) = *((_DWORD*)a1 + 8);
  *(_DWORD*)(v5 + 20) = *((_DWORD*)a1 + 9);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
  v6 = a1[31];
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
  *(_OWORD*)v7 = *((_OWORD*)a1 + 1);
  *(_DWORD*)(v7 + 16) = *((_DWORD*)a1 + 8);
  *(_DWORD*)(v7 + 20) = *((_DWORD*)a1 + 9);
  (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
  memset(v18, 0, sizeof(v18));
  v15_.v15 = GameData_1fc7410;
  v15_.v17 = &v15_.v15;
  GameRoutine_5fc230((__int64)v18);
  if (v15_.v17 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v15_.v17)[6])(v15_.v17, v18);
  }
  v8 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 5),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v18);
  a1[20] = GameRoutine_615760(*(_QWORD*)(*v8 + 552), (__int64)(a1 + 5));
  if (v15_.v17 == &v15_.v15) {
    v9 = 4;
    goto LABEL_7;
  }
  if (v15_.v17 != nullptr) {
    v9 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v15_.v17)[v9])((__int64)v15_.v17);
  }
  gfx_shader_Archive_CreateShader((void*)(&v15_.v15), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"CharaOutline", 0xCu);
  v10 = v15_.v15;
  v11 = v15_.v16;
  v12 = a1[22];
  v15_.v15 = nullptr;
  v15_.v16 = 0;
  a1[21] = (__int64)v10;
  a1[22] = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  GameRoutine_ad5280((__int64*)a1[21]);
  return DecalObject_a91100(a1 + 23, *(_QWORD*)(*a1 + 312),
                            *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 32);
}

__int64 TaskPostCharaOutline_b70550(__int64 a1, _QWORD** a2, _QWORD* a3,
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

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26[1] = v9;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v26),
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
  v18 = (*(__int64 (**)(_QWORD*))(*a2[2] + 16LL))(a2[2]),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 1, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD*))(*a2[4] + 16LL))(a2[4]),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 3, 9, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = a1 + 16LL * *(int*)(a1 + 200);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 4, *(_QWORD*)(v23 + 208),
                              *(_QWORD*)(v23 + 216)),
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
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 168) + 144LL)),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
