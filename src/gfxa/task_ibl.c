#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc6e10[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 (***gfxa_TaskIBL_Worker_Worker_alt1(
    __int64* a1, __int64 a2, int a3))() __asm__("gfxa_TaskIBL_Worker_Worker");
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 (***gfxa_TaskIBL_Worker_Worker(_QWORD* a1, __int64 a2, int a3))();

__int64 (***gfxa_TaskIBL_Worker_Worker(_QWORD* a1, __int64 a2, int a3))()
{
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 (***result)();
  __int64 v22;
  struct {
    __int64 (**v23)();
    __int64 v24;
    char gap16_[16];
    __int64 (***v25)();
  } v23_;
  _QWORD v26[4];

  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  GameRoutine_604020(a1 + 7);
  v5 = *a1;
  a1[22] = -1;
  gfx_shader_Archive_CreateShader((void*)(&v23_.v23), *(__int64**)(v5 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"DiffuseIBLFilter", 0x10u);
  v6 = v23_.v23;
  v7 = v23_.v24;
  v8 = a1[2];
  v23_.v23 = nullptr;
  v23_.v24 = 0;
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  v10 = GameRoutine_ad5000((_QWORD*)a1[1], (__int64)"quality", 7u, a3);
  GameHr_ad5280(v10);
  gfx_shader_Archive_CreateShader(
      (void*)(&v23_.v23), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"SpecularIBLFilter", 0x11u);
  v11 = v23_.v23;
  v12 = v23_.v24;
  v13 = a1[4];
  v23_.v23 = nullptr;
  v23_.v24 = 0;
  a1[3] = v11;
  a1[4] = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v14 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"quality", 7u, a3);
  GameHr_ad5280(v15);
  gfx_shader_Archive_CreateShader(
      (void*)(&v23_.v23), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"CopyToCubeFace", 0xEu);
  v16 = v23_.v23;
  v17 = v23_.v24;
  v18 = a1[6];
  v23_.v23 = nullptr;
  v23_.v24 = 0;
  a1[5] = v16;
  a1[6] = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  GameHr_ad5280((_QWORD*)a1[5]);
  memset(v26, 0, sizeof(v26));
  v23_.v23 = GameData_1fc6e10;
  v23_.v25 = &v23_.v23;
  GameRoutine_5fc230((__int64)v26);
  if (v23_.v25 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v23_.v25)[6])(v23_.v25, v26);
  }
  v20 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 7),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v26);
  a1[22] = game_615760(*(_QWORD*)(*v20 + 552), (__int64)(a1 + 7));
  result = v23_.v25;
  if (v23_.v25 == &v23_.v23) {
    v22 = 4;
  }
  else {
    if (v23_.v25 == nullptr) {
      return result;
    }
    v22 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v23_.v25)[v22])(
      (__int64)v23_.v25);
}

#pragma GCC visibility pop
