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
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc6d10[])();
extern __int64 (*GameData_1fc6d90[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
float exp2f(float);
__int64 gfxa_TaskHeightFog_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskHeightFog_b69b80(_DWORD* a1, __int64 a2, __int64 a3);
__int64 TaskHeightFog_b69dc0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                             __int64 a5);

__int64 gfxa_TaskHeightFog_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 (**v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 (**v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 (**v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 (**v32)();
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 (**v38)();
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  struct {
    __int64 (**v45)();
    __int64 v46;
    char gap16_[16];
    __int64 (***v47)();
  } v45_;
  struct {
    _QWORD v48[2];
    __int64 v49;
    __int64 v50;
  } v48_;

  *(_QWORD*)(a1 + 160) = 0;
  v2 = (__int64*)(a1 + 160);
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
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
  *(_DWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v4 = (__int64*)(a1 + 104);
  *(_DWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  GameRoutine_604020((_QWORD*)(a1 + 216));
  v2[22] = -1;
  GameRoutine_604020(v2 + 23);
  v2[38] = -1;
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48[0] = 0;
  v48_.v48[1] = 0;
  v45_.v45 = GameData_1fc6d10;
  v45_.v47 = &v45_.v45;
  GameRoutine_5fc230((__int64)v48_.v48);
  if (v45_.v47 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v45_.v47)[6])(v45_.v47,
                                                             v48_.v48);
  }
  v5 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(v2 + 7),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v48_.v48);
  *(_QWORD*)(a1 + 336) =
      GameRoutine_615760(*(_QWORD*)(*v5 + 552), (__int64)(v2 + 7));
  if (v45_.v47 == &v45_.v45) {
    v6 = 4;
  }
  else {
    if (v45_.v47 == nullptr) {
      goto LABEL_8;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v45_.v47)[v6])((__int64)v45_.v47);
LABEL_8:
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48[0] = 0;
  v48_.v48[1] = 0;
  v45_.v45 = GameData_1fc6d90;
  v45_.v47 = &v45_.v45;
  GameRoutine_5fc230((__int64)v48_.v48);
  if (v45_.v47 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v45_.v47)[6])(v45_.v47,
                                                             v48_.v48);
  }
  GameRoutine_604060((__int64)(v2 + 23), (__int64*)(*v5 + 568),
                     (__int64)v48_.v48);
  *(_QWORD*)(a1 + 464) =
      GameRoutine_615760(*(_QWORD*)(*v5 + 552), (__int64)(v2 + 23));
  if (v45_.v47 == &v45_.v45) {
    v7 = 4;
    goto LABEL_14;
  }
  if (v45_.v47 != nullptr) {
    v7 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v45_.v47)[v7])((__int64)v45_.v47);
  }
  DecalObject_a91100(v4, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 80);
  DecalObject_a91100(v2, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 72);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v8 = v45_.v45;
  v9 = v45_.v46;
  v10 = *(_QWORD*)(a1 + 16);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 8) = v8;
  *(_QWORD*)(a1 + 16) = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"co_heightfog_type",
                           0x11u, 0);
  GameRoutine_ad5280(v12);
  v13 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 8), (__int64)"co_sky_mask", 0xBu, 0);
  GameRoutine_ad5280(v13);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v14 = v45_.v45;
  v15 = v45_.v46;
  v16 = *(_QWORD*)(a1 + 32);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 24) = v14;
  *(_QWORD*)(a1 + 32) = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"co_heightfog_type",
                           0x11u, 1);
  GameRoutine_ad5280(v18);
  v19 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 24), (__int64)"co_sky_mask", 0xBu, 0);
  GameRoutine_ad5280(v19);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v20 = v45_.v45;
  v21 = v45_.v46;
  v22 = *(_QWORD*)(a1 + 48);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 40) = v20;
  *(_QWORD*)(a1 + 48) = v21;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = GameRoutine_ad5000(*(_QWORD**)(a1 + 40), (__int64)"co_heightfog_type",
                           0x11u, 2);
  GameRoutine_ad5280(v24);
  v25 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 40), (__int64)"co_sky_mask", 0xBu, 0);
  GameRoutine_ad5280(v25);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v26 = v45_.v45;
  v27 = v45_.v46;
  v28 = *(_QWORD*)(a1 + 64);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 56) = v26;
  *(_QWORD*)(a1 + 64) = v27;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v29 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  v30 = GameRoutine_ad5000(*(_QWORD**)(a1 + 56), (__int64)"co_heightfog_type",
                           0x11u, 0);
  GameRoutine_ad5280(v30);
  v31 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 56), (__int64)"co_sky_mask", 0xBu, 1);
  GameRoutine_ad5280(v31);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v32 = v45_.v45;
  v33 = v45_.v46;
  v34 = *(_QWORD*)(a1 + 80);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 72) = v32;
  *(_QWORD*)(a1 + 80) = v33;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak(v35);
  }
  v36 = GameRoutine_ad5000(*(_QWORD**)(a1 + 72), (__int64)"co_heightfog_type",
                           0x11u, 1);
  GameRoutine_ad5280(v36);
  v37 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 72), (__int64)"co_sky_mask", 0xBu, 1);
  GameRoutine_ad5280(v37);
  gfx_shader_Archive_CreateShader(
      (void*)(&v45_.v45), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"HeightFog", 9u);
  v38 = v45_.v45;
  v39 = v45_.v46;
  v40 = *(_QWORD*)(a1 + 96);
  v45_.v45 = nullptr;
  v45_.v46 = 0;
  *(_QWORD*)(a1 + 88) = v38;
  *(_QWORD*)(a1 + 96) = v39;
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak(v40);
  }
  v41 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak(v41);
  }
  v42 = GameRoutine_ad5000(*(_QWORD**)(a1 + 88), (__int64)"co_heightfog_type",
                           0x11u, 2);
  GameRoutine_ad5280(v42);
  v43 =
      GameRoutine_ad5000(*(_QWORD**)(a1 + 88), (__int64)"co_sky_mask", 0xBu, 1);
  return GameRoutine_ad5280(v43);
}

__int64 TaskHeightFog_b69b80(_DWORD* a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  bool v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _UNKNOWN** v11;
  float v12;
  int v13;
  float v14;
  int v15;
  float v16;
  float v17;
  int v18;
  int v19;
  float v20;
  __int128 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;

  v3 = a1[30];
  v7 = v3 < -1;
  v8 = ((_BYTE)v3 + 1) & 1;
  if (v7) {
    v8 = -v8;
  }
  a1[30] = v8;
  v9 = *(_QWORD*)&a1[2 * v8 + 26];
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
  v11 = GameData_212e4d8[0];
  *(_QWORD*)(v10 + 64) =
      (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
          *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a2 + 152),
          (unsigned int)a1[84]);
  *(_QWORD*)(v10 + 72) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v11)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, *(unsigned int*)(a2 + 168),
      (unsigned int)a1[84]);
  v12 = 0x1.0000000000000p+0f;
  if (*(_DWORD*)(a2 + 136) == 1) {
    if (*(_BYTE*)(a2 + 141) == 1) {
      v12 = exp2f(*(float*)(a2 + 124)) * *(float*)(a2 + 128);
    }
    else {
      v12 = exp2f(*(float*)(a2 + 120) + -0x1.8000000000000p+1f) /
            0x1.9000000000000p+6f;
    }
  }
  v13 = *(_DWORD*)(a2 + 88);
  *(_QWORD*)v10 = *(_QWORD*)(a2 + 80);
  *(_DWORD*)(v10 + 8) = v13;
  *(float*)(v10 + 12) = v12;
  v14 = *(float*)(a2 + 92);
  v15 = *(_DWORD*)(a2 + 132);
  v16 = -v14;
  v17 = *(float*)(a2 + 96) - v14;
  if (v17 < 0x1.0000000000000p-23f) {
    v17 = 0x1.0000000000000p-23f;
  }
  *(_DWORD*)(v10 + 24) = *(_DWORD*)(a2 + 100);
  *(_DWORD*)(v10 + 28) = v15;
  *(float*)(v10 + 16) = v16;
  *(float*)(v10 + 20) = 0x1.0000000000000p+0f / v17;
  v18 = *(_DWORD*)(a2 + 112);
  v19 = *(_DWORD*)(a2 + 116);
  *(_QWORD*)(v10 + 32) = *(_QWORD*)(a2 + 104);
  *(_DWORD*)(v10 + 40) = v18;
  *(_DWORD*)(v10 + 44) = v19;
  v20 = 0x0.0p+0f;
  v21 = *(_OWORD*)(a2 + 64);
  if (*(_BYTE*)(a2 + 141) != 0) {
    v20 = 0x1.0000000000000p+0f;
  }
  *(_QWORD*)(v10 + 48) = v21;
  *(_DWORD*)(v10 + 56) = DWORD2(v21);
  *(float*)(v10 + 60) = v20;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  v22 = a1[44];
  v7 = v22 < -1;
  v23 = ((_BYTE)v22 + 1) & 1;
  if (v7) {
    v23 = -v23;
  }
  a1[44] = v23;
  v24 = *(_QWORD*)&a1[2 * v23 + 40];
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 56LL))(v24);
  v26 = *(_DWORD*)(*(_QWORD*)a3 + 16LL);
  v27 = *(_QWORD*)(*(_QWORD*)a3 + 8LL);
  *(_DWORD*)(v25 + 12) = 0;
  *(_QWORD*)v25 = v27;
  *(_DWORD*)(v25 + 8) = v26;
  v28 = *(_DWORD*)(*(_QWORD*)a3 + 28LL);
  v29 = *(_DWORD*)(*(_QWORD*)a3 + 56LL);
  *(_QWORD*)(v25 + 16) = *(_QWORD*)(*(_QWORD*)a3 + 20LL);
  *(_DWORD*)(v25 + 24) = v28;
  *(_DWORD*)(v25 + 28) = v29;
  v30 = *(_DWORD*)(*(_QWORD*)a3 + 40LL);
  v31 = *(_DWORD*)(*(_QWORD*)a3 + 60LL);
  *(_QWORD*)(v25 + 32) = *(_QWORD*)(*(_QWORD*)a3 + 32LL);
  *(_DWORD*)(v25 + 40) = v30;
  *(_DWORD*)(v25 + 44) = v31;
  v32 = *(_DWORD*)(*(_QWORD*)a3 + 52LL);
  v33 = *(_DWORD*)(*(_QWORD*)a3 + 64LL);
  v34 = *(_QWORD*)(*(_QWORD*)a3 + 44LL);
  *(_DWORD*)(v25 + 64) = 1077936128;
  *(_QWORD*)(v25 + 48) = v34;
  *(_DWORD*)(v25 + 56) = v32;
  *(_DWORD*)(v25 + 60) = v33;
  *(_DWORD*)(v25 + 68) = *(_DWORD*)(*(_QWORD*)a3 + 4LL);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 64LL))(v24);
}

__int64 TaskHeightFog_b69dc0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                             __int64 a5)
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
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _QWORD v38[2];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v10, GameData_21fdeb8[0]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v10, GameData_21fdee0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v10, GameData_21fdf08),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v10, GameData_21fdf14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v12, v13),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 8), *(unsigned int*)(a5 + 12)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 8), *(unsigned int*)(a5 + 12)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v38[0] = 0;
  v38[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v14 + 144LL))(v14, 0, v38),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = *a4;
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
      *(_QWORD*)v15 + 240LL))(v15, 3, 0, v17, v18),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = *a4;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 248LL))(v19, 3, 1, v21, v22, *(unsigned int*)(a1 + 464)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = *a4;
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v23 + 248LL))(v23, 3, 2, v25, v26, *(unsigned int*)(a1 + 464)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = v28 + 16LL * *(int*)(v28 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 224LL))(v27, 3, 0, *(_QWORD*)(v29 + 24),
                              *(_QWORD*)(v29 + 32)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *a4;
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = v31 + 16LL * *(int*)(v31 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v30 + 224LL))(v30, 3, 1, *(_QWORD*)(v32 + 24),
                              *(_QWORD*)(v32 + 32)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = a1 + 16LL * *(int*)(a1 + 120);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *(_QWORD*)(v33 + 128),
                              *(_QWORD*)(v33 + 136)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = a1 + 16LL * *(int*)(a1 + 176);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *(_QWORD*)(v34 + 184),
                              *(_QWORD*)(v34 + 192)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *((_DWORD*)a2 + 34);
  switch (v35) {
  case 2:
    v36 = a1 + 48LL * *((unsigned __int8*)a2 + 140) + 24;
    goto LABEL_7;
  case 1:
    v36 = a1 +
          ((16 * *((unsigned __int8*)a2 + 140)) |
           (32 * (unsigned int)*((unsigned __int8*)a2 + 140))) +
          40;
    goto LABEL_7;
  case 0:
    v36 = a1 + 48LL * *((unsigned __int8*)a2 + 140) + 8;
  LABEL_7:
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)v36 + 144LL)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    break;
  default:
    break;
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
