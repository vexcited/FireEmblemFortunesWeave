#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskSharpness_19a3ed0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              int* a5);
void gfxa_TaskSharpness_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameHr_ad5280(_QWORD*);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 game_615760(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_211ec90[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_TaskSharpness_Impl_Impl(__int64 a1, __int64 a2);

__int64 gfxa_TaskSharpness_Impl_Impl(__int64 a1, __int64 a2)
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
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  GameRoutine_604020((_QWORD*)(a1 + 24));
  *(_QWORD*)(a1 + 152) = 0;
  memset(v13, 0, sizeof(v13));
  *(_QWORD*)(a1 + 144) = -1;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  v10_.v12 = &v10_.v10;
  v10_.v10 = GameData_211ec90;
  GameRoutine_5fc230((__int64)v13);
  if (v10_.v12 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v10_.v12)[6])(v10_.v12, v13);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 24, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v13);
  *(_QWORD*)(a1 + 144) = game_615760(*(_QWORD*)(*v3 + 552), a1 + 24);
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
      (__int64)"filter", 6u, (__int64)"Sharpness", 9u);
  v5 = v10_.v10;
  v6 = v10_.v11;
  v7 = *(_QWORD*)(a1 + 16);
  v10_.v10 = nullptr;
  v10_.v11 = 0;
  *(_QWORD*)(a1 + 8) = v5;
  *(_QWORD*)(a1 + 16) = v6;
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
  GameHr_ad5280(*(_QWORD**)(a1 + 8));
  return DecalObject_a91100(
      (__int64*)(a1 + 152), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 32);
}

__int64 TaskSharpness_19a3ed0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              int* a5)
{
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  _QWORD v34[2];

  v5 = *(_DWORD*)(a1 + 168);
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  *(_DWORD*)(a1 + 168) = v12;
  v13 = *(_QWORD*)(a1 + 8LL * v12 + 152);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  v15 = (float)a5[7];
  v16 = (float)a5[4];
  v17 = (float)a5[5];
  v18 = v16 / (float)a5[6];
  *(float*)v14 = 1.0 / v16;
  *(float*)(v14 + 4) = 1.0 / v17;
  v19 = v17 / v15;
  *(float*)(v14 + 8) = v18;
  *(float*)(v14 + 12) = v19;
  v20 = a5[5];
  v21 = a5[8];
  *(float*)(v14 + 24) = v18;
  *(float*)(v14 + 28) = v19;
  *(_DWORD*)(v14 + 16) = v21;
  *(float*)(v14 + 20) = 1.0 / (float)v20;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50);
  v22 = *a4;
  v23 = a3[1];
  if (v23 == 0) {
    v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  }
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v22 + 96LL))(v22, v24,
                                                                  v25);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]);
  v26 = *a4;
  v34[0] = 0;
  v34[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v26 + 144LL))(v26, 0, v34);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v27 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v27, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v27, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v27, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v27, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL));
  v28 = a1 + 16LL * *(int*)(a1 + 168);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v28 + 176),
                              *(_QWORD*)(v28 + 184));
  v29 = *a4;
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
      *(_QWORD*)v29 + 240LL))(v29, 3, 0, v31, v32);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

void gfxa_TaskSharpness_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 22;
}

#pragma GCC visibility pop
