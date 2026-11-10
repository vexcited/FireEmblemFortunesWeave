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
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc5488[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_Task2DFinal_Impl_Impl(__int64 a1, __int64 a2);

__int64 gfxa_Task2DFinal_Impl_Impl(__int64 a1, __int64 a2)
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
  v10_.v10 = GameData_1fc5488;
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
      (__int64)"ImageProcessing", 0xFu, (__int64)"2DFinal", 7u);
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
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 4);
}

#pragma GCC visibility pop
