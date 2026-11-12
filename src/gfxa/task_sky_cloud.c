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
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 TaskSkyCloud_b77550(__int64 a1, _QWORD* a2, __int64 a3);

__int64 gfxa_TaskSkyCloud_Updater_Updater(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 (**v5)();
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
  v3 = a1 + 1;
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
  v5 = v12_.v12;
  v6 = v12_.v13;
  v7 = a1[2];
  v12_.v12 = nullptr;
  v12_.v13 = 0;
  *v3 = (__int64)v5;
  a1[2] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = v12_.v13;
  if (v12_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  GameHr_ad5280((_QWORD*)*v3);
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
  a1[18] = game_615760(*(_QWORD*)(*v9 + 552), (__int64)(a1 + 3));
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

__int64 TaskSkyCloud_b77550(__int64 a1, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  int v8;
  int v9;
  _DWORD* v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  int8x16_t v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;

  v3 = *(_DWORD*)(a3 + 24);
  v4 = *(_DWORD*)(a3 + 28);
  v8 = v3 / v4;
  v9 = v3 % v4;
  v10 = *(_DWORD**)(a3 + 16);
  v11 = (signed __int32)*v10 / v4;
  v12 = *(_DWORD*)(a1 + 168);
  v13 = (signed __int32)v10[1] / v4;
  v14 = v12 < -1;
  v15 = ((_BYTE)v12 + 1) & 1;
  if (v14) {
    v15 = -v15;
  }
  *(_DWORD*)(a1 + 168) = v15;
  v16 = *(_QWORD*)(a1 + 8LL * v15 + 152);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
  *(float*)(v17 + 32) = (float)(v11 * v9);
  *(float*)(v17 + 36) = (float)(v13 * v8);
  v18 = *(_OWORD*)(a1 + 208);
  *(_QWORD*)v17 = v18;
  *(_DWORD*)(v17 + 8) = DWORD2(v18);
  *(_DWORD*)(v17 + 12) = *(_DWORD*)(a1 + 224);
  v19 = *(int8x16_t*)(a1 + 240);
  *(_QWORD*)(v17 + 40) = 0x3B8D3AE73E9F3B64LL;
  *(_QWORD*)(v17 + 16) = LANES128(v19).n128_u64[0];
  *(_QWORD*)(v17 + 24) = LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0];
  (*(void (**)(__int64))(*(_QWORD*)v16 + 64LL))(v16);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 8, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL));
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, *(_QWORD*)a3, *(_QWORD*)(a3 + 8),
                              *(unsigned int*)(a1 + 144));
  v20 = a1 + 16LL * *(int*)(a1 + 168);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, *(_QWORD*)(v20 + 176),
                              *(_QWORD*)(v20 + 184));
  v21 = *(_QWORD*)(a3 + 16);
  v22 = 16;
  if (*(_BYTE*)(v21 + 24) == 0) {
    v22 = 8;
  }
  v23 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v21 + v22) + 48LL))(
      *(_QWORD*)(v21 + v22));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, _QWORD,
                                          _QWORD))(*(_QWORD*)*a2 + 256LL))(
      (void*)((_QWORD*)*a2), *a2, 8, 0, v23);
  return (
      *(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)*a2 + 304LL))(
      *a2, (unsigned int)(v11 / 8), (unsigned int)(v13 / 8), 1);
}

#pragma GCC visibility pop
