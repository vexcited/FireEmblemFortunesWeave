#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 game_615760(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc7a90[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_TaskSkyHDRI_Updater_Updater(__int64 a1, __int64 a2);
_QWORD* GameRoutine_604020_alt1(_QWORD* result) __asm__("GameRoutine_604020");
_QWORD* GameRoutine_ad5000_alt1(_QWORD*, __int64, unsigned __int64,
                                int) __asm__("GameRoutine_ad5000");
__attribute__((swiftcall)) void gfx_shader_Archive_CreateShader_alt1(
    PSEUDO_X8, __int64*, __int64, unsigned __int64, __int64,
    unsigned __int64) __asm__("gfx_shader_Archive_CreateShader");
__int64 GameHr_ad5280(_QWORD*);
__int64 GameRoutine_5fc230_alt1(__int64 result) __asm__("GameRoutine_5fc230");
__int64 GameRoutine_604060_alt1(__int64, __int64*,
                                __int64) __asm__("GameRoutine_604060");
__int64 game_615760_alt1(__int64, __int64) __asm__("game_615760");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 gfxa_TaskSkyHDRI_Updater_Updater(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 (**v7)();
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 (**v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  struct {
    __int64 (**v32)();
    __int64 v33;
    char gap16_[16];
    __int64 (***v34)();
  } v32_;
  _QWORD v35[4];

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
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v3 = a1 + 104;
  GameRoutine_604020_alt1((_QWORD*)(a1 + 200));
  v4 = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 320) = -1;
  do {
    gfx_shader_Archive_CreateShader_alt1(
        (void*)(&v32_.v32), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v7 = v32_.v32;
    v8 = v32_.v33;
    v9 = *(_QWORD*)(v3 - 88);
    v32_.v32 = nullptr;
    v32_.v33 = 0;
    *(_QWORD*)(v3 - 96) = v7;
    *(_QWORD*)(v3 - 88) = v8;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
      v10 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_9;
      }
    }
    else {
      v10 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_9;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  LABEL_9:
    v11 = GameRoutine_ad5000_alt1(*(_QWORD**)(v3 - 96),
                                  (__int64)"ramp_tex_type", 0xDu, v4);
    v12 = GameRoutine_ad5000_alt1(v11, (__int64)"use_add_tex", 0xBu, 0);
    GameRoutine_ad5000_alt1(v12, (__int64)"use_height_modifier", 0x13u, 0);
    GameHr_ad5280(*(_QWORD**)(v3 - 96));
    gfx_shader_Archive_CreateShader_alt1(
        (void*)(&v32_.v32), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v13 = v32_.v32;
    v14 = v32_.v33;
    v15 = *(_QWORD*)(v3 - 72);
    v32_.v32 = nullptr;
    v32_.v33 = 0;
    *(_QWORD*)(v3 - 80) = v13;
    *(_QWORD*)(v3 - 72) = v14;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
      v16 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_15;
      }
    }
    else {
      v16 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_15;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt1(v16);
    }
  LABEL_15:
    v17 = GameRoutine_ad5000_alt1(*(_QWORD**)(v3 - 80),
                                  (__int64)"ramp_tex_type", 0xDu, v4);
    v18 = GameRoutine_ad5000_alt1(v17, (__int64)"use_add_tex", 0xBu, 0);
    GameRoutine_ad5000_alt1(v18, (__int64)"use_height_modifier", 0x13u, 1);
    GameHr_ad5280(*(_QWORD**)(v3 - 80));
    gfx_shader_Archive_CreateShader_alt1(
        (void*)(&v32_.v32), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v19 = v32_.v32;
    v20 = v32_.v33;
    v21 = *(_QWORD*)(v3 + 8);
    v32_.v32 = nullptr;
    v32_.v33 = 0;
    *(_QWORD*)v3 = v19;
    *(_QWORD*)(v3 + 8) = v20;
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v21);
      v22 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v22 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
  LABEL_21:
    v23 = GameRoutine_ad5000_alt1(*(_QWORD**)v3, (__int64)"ramp_tex_type", 0xDu,
                                  v4);
    v24 = GameRoutine_ad5000_alt1(v23, (__int64)"use_add_tex", 0xBu, 1);
    GameRoutine_ad5000_alt1(v24, (__int64)"use_height_modifier", 0x13u, 0);
    GameHr_ad5280(*(_QWORD**)v3);
    gfx_shader_Archive_CreateShader_alt1(
        (void*)(&v32_.v32), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v25 = v32_.v32;
    v26 = v32_.v33;
    v27 = *(_QWORD*)(v3 + 24);
    v32_.v32 = nullptr;
    v32_.v33 = 0;
    *(_QWORD*)(v3 + 16) = v25;
    *(_QWORD*)(v3 + 24) = v26;
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt1(v27);
      v28 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_2;
      }
    }
    else {
      v28 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_2;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak_alt1(v28);
    }
  LABEL_2:
    v5 = GameRoutine_ad5000_alt1(*(_QWORD**)(v3 + 16), (__int64)"ramp_tex_type",
                                 0xDu, v4);
    v6 = GameRoutine_ad5000_alt1(v5, (__int64)"use_add_tex", 0xBu, 1);
    GameRoutine_ad5000_alt1(v6, (__int64)"use_height_modifier", 0x13u, 1);
    GameHr_ad5280(*(_QWORD**)(v3 + 16));
    ++v4;
    v3 += 32;
  } while (v4 != 3);
  memset(v35, 0, sizeof(v35));
  v32_.v32 = GameData_1fc7a90;
  v32_.v34 = &v32_.v32;
  GameRoutine_5fc230_alt1((__int64)v35);
  if (v32_.v34 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v32_.v34)[6])(v32_.v34, v35);
  }
  v29 = game_g_frame_clock_ptr[0];
  GameRoutine_604060_alt1(
      a1 + 200, (__int64*)(*game_g_frame_clock_ptr[0] + 568), (__int64)v35);
  *(_QWORD*)(a1 + 320) = game_615760_alt1(*(_QWORD*)(*v29 + 552), a1 + 200);
  if (v32_.v34 == &v32_.v32) {
    v30 = 4;
  LABEL_34:
    ((__int64 (*)(__int64))(*v32_.v34)[v30])((__int64)v32_.v34);
  }
  else if (v32_.v34 != nullptr) {
    v30 = 5;
    goto LABEL_34;
  }
  return DecalObject_a91100(
      (__int64*)(a1 + 328), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 48);
}

#pragma GCC visibility pop
