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
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc5558[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_Task3DFinal_Impl_Impl(__int64 a1, __int64 a2);

__int64 gfxa_Task3DFinal_Impl_Impl(__int64 a1, __int64 a2)
{
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
  struct {
    __int64 (**v22)();
    __int64 v23;
    char gap16_[16];
    __int64 (***v24)();
  } v22_;
  _QWORD v25[4];

  *(_QWORD*)a1 = a2;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  v25[2] = 0;
  v25[3] = 0;
  *(_QWORD*)(a1 + 128) = -1;
  *(_QWORD*)(a1 + 136) = 0;
  v22_.v24 = &v22_.v22;
  v25[0] = 0;
  v25[1] = 0;
  v22_.v22 = GameData_1fc5558;
  GameRoutine_5fc230((__int64)v25);
  if (v22_.v24 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v22_.v24)[6])(v22_.v24, v25);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 8, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v25);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v3 + 552), a1 + 8);
  if (v22_.v24 == &v22_.v22) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v22_.v24 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v22_.v24)[v4])((__int64)v22_.v24);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v22_.v22), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"3DFinal", 7u);
  v5 = v22_.v22;
  v6 = v22_.v23;
  v7 = *(_QWORD*)(a1 + 144);
  v22_.v22 = nullptr;
  v22_.v23 = 0;
  *(_QWORD*)(a1 + 136) = v5;
  *(_QWORD*)(a1 + 144) = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 136), (__int64)"apply_tonemap", 0xDu, 0);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 136), (__int64)"apply_negaposi", 0xEu, 0);
  GameRoutine_ad5280(*(__int64**)(a1 + 136));
  gfx_shader_Archive_CreateShader(
      (void*)(&v22_.v22), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"3DFinal", 7u);
  v9 = v22_.v22;
  v10 = v22_.v23;
  v11 = *(_QWORD*)(a1 + 160);
  v22_.v22 = nullptr;
  v22_.v23 = 0;
  *(_QWORD*)(a1 + 152) = v9;
  *(_QWORD*)(a1 + 160) = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 152), (__int64)"apply_tonemap", 0xDu, 1);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 152), (__int64)"apply_negaposi", 0xEu, 0);
  GameRoutine_ad5280(*(__int64**)(a1 + 152));
  gfx_shader_Archive_CreateShader(
      (void*)(&v22_.v22), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"3DFinal", 7u);
  v13 = v22_.v22;
  v14 = v22_.v23;
  v15 = *(_QWORD*)(a1 + 176);
  v22_.v22 = nullptr;
  v22_.v23 = 0;
  *(_QWORD*)(a1 + 168) = v13;
  *(_QWORD*)(a1 + 176) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 168), (__int64)"apply_tonemap", 0xDu, 0);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 168), (__int64)"apply_negaposi", 0xEu, 1);
  GameRoutine_ad5280(*(__int64**)(a1 + 168));
  gfx_shader_Archive_CreateShader(
      (void*)(&v22_.v22), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"3DFinal", 7u);
  v17 = v22_.v22;
  v18 = v22_.v23;
  v19 = *(_QWORD*)(a1 + 192);
  v22_.v22 = nullptr;
  v22_.v23 = 0;
  *(_QWORD*)(a1 + 184) = v17;
  *(_QWORD*)(a1 + 192) = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  GameRoutine_ad5000(*(_QWORD**)(a1 + 184), (__int64)"apply_tonemap", 0xDu, 1);
  GameRoutine_ad5000(*(_QWORD**)(a1 + 184), (__int64)"apply_negaposi", 0xEu, 1);
  GameRoutine_ad5280(*(__int64**)(a1 + 184));
  return DecalObject_a91100(
      (__int64*)(a1 + 200), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 60);
}

#pragma GCC visibility pop
