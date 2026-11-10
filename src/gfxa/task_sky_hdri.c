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

__int64 gfxa_TaskSkyHDRI_Updater_Updater(__int64 a1, __int64 a2)
{
  __int64 (***v3)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (**v7)();
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 (**v20)();
  __int64 (**v21)();
  __int64 (**v22)();
  __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 (**v28)();
  __int64* v29;
  __int64 v30;
  struct {
    __int64 (**v32)();
    __int64 (**v33)();
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
  v3 = (__int64 (***)())(a1 + 104);
  GameRoutine_604020(a1 + 200);
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
    gfx_shader_Archive_CreateShader(
        (void*)(&v32_.v32), *(_QWORD*)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v7 = v32_.v32;
    v8 = v32_.v33;
    v9 = (__int64)*(v3 - 11);
    v32_.v32 = nullptr;
    v32_.v33 = nullptr;
    *(v3 - 12) = v7;
    *(v3 - 11) = v8;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      v10 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_9;
      }
    }
    else {
      v10 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_9;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v10 + 2))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  LABEL_9:
    v11 = GameRoutine_ad5000(*(v3 - 12), "ramp_tex_type", 13, (unsigned int)v4);
    v12 = GameRoutine_ad5000(v11, "use_add_tex", 11, 0);
    GameRoutine_ad5000(v12, "use_height_modifier", 19, 0);
    GameRoutine_ad5280(*(v3 - 12));
    gfx_shader_Archive_CreateShader(
        (void*)(&v32_.v32), *(_QWORD*)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v13 = v32_.v32;
    v14 = v32_.v33;
    v15 = (__int64)*(v3 - 9);
    v32_.v32 = nullptr;
    v32_.v33 = nullptr;
    *(v3 - 10) = v13;
    *(v3 - 9) = v14;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      v16 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_15;
      }
    }
    else {
      v16 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_15;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v16 + 2))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  LABEL_15:
    v17 = GameRoutine_ad5000(*(v3 - 10), "ramp_tex_type", 13, (unsigned int)v4);
    v18 = GameRoutine_ad5000(v17, "use_add_tex", 11, 0);
    GameRoutine_ad5000(v18, "use_height_modifier", 19, 1);
    GameRoutine_ad5280(*(v3 - 10));
    gfx_shader_Archive_CreateShader(
        (void*)(&v32_.v32), *(_QWORD*)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v19 = v32_.v32;
    v20 = v32_.v33;
    v21 = v3[1];
    v32_.v32 = nullptr;
    v32_.v33 = nullptr;
    *v3 = v19;
    v3[1] = v20;
    if (v21 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v21 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v21 + 2))(v21);
      std___1___shared_weak_count___release_weak(v21);
      v22 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_21;
      }
    }
    else {
      v22 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v22 + 2))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  LABEL_21:
    v23 = GameRoutine_ad5000(*v3, "ramp_tex_type", 13, (unsigned int)v4);
    v24 = GameRoutine_ad5000(v23, "use_add_tex", 11, 1);
    GameRoutine_ad5000(v24, "use_height_modifier", 19, 0);
    GameRoutine_ad5280(*v3);
    gfx_shader_Archive_CreateShader(
        (void*)(&v32_.v32), *(_QWORD*)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"Cubex2ToCubeFace", 0x10u);
    v25 = v32_.v32;
    v26 = v32_.v33;
    v27 = v3[3];
    v32_.v32 = nullptr;
    v32_.v33 = nullptr;
    v3[2] = v25;
    v3[3] = v26;
    if (v27 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v27 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v27 + 2))(v27);
      std___1___shared_weak_count___release_weak(v27);
      v28 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_2;
      }
    }
    else {
      v28 = v32_.v33;
      if (v32_.v33 == nullptr) {
        goto LABEL_2;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)()))*v28 + 2))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  LABEL_2:
    v5 = GameRoutine_ad5000(v3[2], "ramp_tex_type", 13, (unsigned int)v4);
    v6 = GameRoutine_ad5000(v5, "use_add_tex", 11, 1);
    GameRoutine_ad5000(v6, "use_height_modifier", 19, 1);
    GameRoutine_ad5280(v3[2]);
    ++v4;
    v3 += 4;
  } while (v4 != 3);
  memset(v35, 0, sizeof(v35));
  v32_.v32 = GameData_1fc7a90;
  v32_.v34 = &v32_.v32;
  GameRoutine_5fc230(v35);
  if (v32_.v34 != nullptr) {
    ((void (*)(__int64 (***)(), _QWORD*))(*v32_.v34)[6])(v32_.v34, v35);
  }
  v29 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 200, *game_g_frame_clock_ptr[0] + 568, v35);
  *(_QWORD*)(a1 + 320) = game_615760(*(_QWORD*)(*v29 + 552), a1 + 200);
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
