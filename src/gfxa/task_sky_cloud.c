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
extern __int128 GameData_1a83610;
extern __int64 (*GameData_1fc7990[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_TaskSkyCloud_Updater_Updater(__int64* a1, __int64 a2);

__int64 gfxa_TaskSkyCloud_Updater_Updater(__int64* a1, __int64 a2)
{
  __int64** v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  struct {
    __int64 (**v12)();
    __int64 v13;
    char gap16_[16];
    __int64 (***v14)();
  } v12_;
  _QWORD v15[4];

  *a1 = a2;
  a1[2] = 0;
  a1[1] = 0;
  v3 = (__int64**)(a1 + 1);
  GameRoutine_604020(a1 + 3);
  a1[19] = 0;
  a1[20] = 0;
  *((_DWORD*)a1 + 42) = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[18] = -1;
  a1[24] = 0;
  a1[25] = 0;
  a1[35] = 0;
  *((_DWORD*)a1 + 72) = -1;
  v4 = *a1;
  *((_OWORD*)a1 + 13) = GameData_1a83610;
  gfx_shader_Archive_CreateShader((void*)(&v12_.v12), *(__int64**)(v4 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"RenderCloud", 0xBu);
  v5 = (__int64*)v12_.v12;
  v6 = v12_.v13;
  v7 = a1[2];
  v12_.v12 = nullptr;
  v12_.v13 = 0;
  *v3 = v5;
  a1[2] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v12_.v13;
  if (v12_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_ad5280(*v3);
  memset(v15, 0, sizeof(v15));
  v12_.v12 = GameData_1fc7990;
  v12_.v14 = &v12_.v12;
  GameRoutine_5fc230((__int64)v15);
  if (v12_.v14 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v12_.v14)[6])(v12_.v14, v15);
  }
  v9 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 3),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v15);
  a1[18] = GameRoutine_615760(*(_QWORD*)(*v9 + 552), (__int64)(a1 + 3));
  if (v12_.v14 == &v12_.v12) {
    v10 = 4;
    goto LABEL_13;
  }
  if (v12_.v14 != nullptr) {
    v10 = 5;
  LABEL_13:
    ((__int64 (*)(__int64))(*v12_.v14)[v10])((__int64)v12_.v14);
  }
  return DecalObject_a91100(a1 + 19, *(_QWORD*)(*a1 + 312),
                            *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 48);
}

#pragma GCC visibility pop
