#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e738;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskCharaMask_bfa6d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                             unsigned int* a5);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
extern __int64 (*GameData_1fd0f08[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_TaskCharaMask_Impl_Impl(__int64** a1, __int64* a2);

__int64 gfxa_TaskCharaMask_Impl_Impl(__int64** a1, __int64* a2)
{
  __int64** v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  struct {
    __int64 (**v11)();
    __int64 v12;
    char gap16_[16];
    __int64 (***v13)();
  } v11_;
  _QWORD v14[4];

  *a1 = a2;
  a1[2] = nullptr;
  a1[1] = nullptr;
  v3 = a1 + 1;
  GameRoutine_604020(a1 + 3);
  memset(v14, 0, sizeof(v14));
  a1[18] = (__int64*)-1LL;
  v11_.v13 = &v11_.v11;
  v11_.v11 = GameData_1fd0f08;
  GameRoutine_5fc230((__int64)v14);
  if (v11_.v13 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v11_.v13)[6])(v11_.v13, v14);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 3),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v14);
  a1[18] =
      (__int64*)GameRoutine_615760(*(_QWORD*)(*v4 + 552), (__int64)(a1 + 3));
  if (v11_.v13 == &v11_.v11) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v11_.v13 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
  }
  gfx_shader_Archive_CreateShader((void*)(&v11_.v11), (__int64*)(*a1)[1676],
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"CharaMaskComp", 0xDu);
  v6 = (__int64*)v11_.v11;
  v7 = (__int64*)v11_.v12;
  v8 = a1[2];
  v11_.v11 = nullptr;
  v11_.v12 = 0;
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v8 + 1),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v11_.v12;
  if (v11_.v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  return GameRoutine_ad5280(*v3);
}

__int64 TaskCharaMask_bfa6d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
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
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  _QWORD v26[2];

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11, v12);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]);
  v13 = *a4;
  v26[0] = 0;
  v26[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v13 + 144LL))(v13, 0, v26);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v14 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v14, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v14, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v14, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v14, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v15 = *a4;
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v15 + 248LL))(v15, 3, 0, v17, v18, *(unsigned int*)(a1 + 144));
  v19 = *a4;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 248LL))(v19, 3, 1, v21, v22, *(unsigned int*)(a1 + 144));
  v23 = *(_QWORD*)(a1 + 8);
  v24 = *(_QWORD*)(a1 + 16);
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v23 + 144));
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
  }
  else {
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v23 + 144));
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
