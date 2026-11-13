#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fc5f40[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
float GameRoutine_652770(float, float);
struct GameRoutine_652770_xy {
  float x;
  float y;
};
struct GameRoutine_652770_xy GameRoutine_652770_alt1(float, float) __asm__(
    "GameRoutine_652770");
float exp2f(float);
float powf(float, float);
__int64 gfxa_TaskColorGrading_Impl_Impl(__int64 a1, __int64 a2);
__int64 TaskColorGrading_b55630(__int64* a1, __int64 a2, _BYTE* a3);
__int64 TaskColorGrading_b565d0(_DWORD* a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                                unsigned int* a5);
__int64 TaskColorGrading_b56bf0(__int64 a1, __int64 a2, _QWORD* a3,
                                __int64* a4);

__int64 gfxa_TaskColorGrading_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64 (***v2)();
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  int v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64 result;
  char v31;
  __int64 (**v32)();
  __int64 (**v33)();
  __int64 (**v34)();
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64 (**v39)();
  __int64 (**v40)();
  __int64 (**v41)();
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  __int64 (**v46)();
  __int64 (**v47)();
  __int64 (**v48)();
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64* v52;
  __int64 (**v53)();
  __int64 (**v54)();
  __int64 (**v55)();
  __int64 v56;
  struct {
    __int64 (**v57)();
    __int64 v58;
    char gap16_[16];
    __int64 (***v59)();
  } v57_;
  _QWORD v60[4];

  *(_QWORD*)(a1 + 208) = 0;
  v2 = (__int64 (***)(void))(a1 + 208);
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v4 = (__int64*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  v5 = (__int64*)(a1 + 64);
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  v6 = (__int64*)(a1 + 120);
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  GameRoutine_604020((_QWORD*)(a1 + 336));
  memset(v60, 0, sizeof(v60));
  v2[31] = (__int64 (**)(void))-1LL;
  v57_.v59 = &v57_.v57;
  v57_.v57 = GameData_1fc5f40;
  GameRoutine_5fc230((__int64)v60);
  if (v57_.v59 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v57_.v59)[6])(v57_.v59, v60);
  }
  v7 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(v2 + 16),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v60);
  *(_QWORD*)(a1 + 456) =
      GameRoutine_615760(*(_QWORD*)(*v7 + 552), (__int64)(v2 + 16));
  if (v57_.v59 == &v57_.v57) {
    v8 = 4;
  }
  else {
    if (v57_.v59 == nullptr) {
      goto LABEL_8;
    }
    v8 = 5;
  }
  ((__int64 (*)(__int64))(*v57_.v59)[v8])((__int64)v57_.v59);
LABEL_8:
  DecalObject_a91100(v4, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 44);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
  *(_DWORD*)(v10 + 40) = 1107296256;
  *(_QWORD*)(v10 + 32) = 0x3C0000003A000000LL;
  *(_QWORD*)(v10 + 16) = 0x3F8208213F842108LL;
  *(_QWORD*)(v10 + 24) = 1065623816;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  v11 = *(_QWORD*)(a1 + 16);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  *(_QWORD*)(v12 + 16) = 0x3F8208213F842108LL;
  *(_QWORD*)(v12 + 24) = 1065623816;
  *(_QWORD*)(v12 + 32) = 0x3C0000003A000000LL;
  *(_DWORD*)(v12 + 40) = 1107296256;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  DecalObject_a91100(v5, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 76);
  v13 = *(_QWORD*)(a1 + 64);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  *(_QWORD*)(v14 + 44) = 0;
  *(_QWORD*)(v14 + 52) = 0;
  *(_DWORD*)(v14 + 60) = 0;
  *(_DWORD*)(v14 + 40) = 1023410176;
  *(_QWORD*)(v14 + 64) = 0x3F8000003F800000LL;
  *(_DWORD*)(v14 + 72) = 1065353216;
  *(_QWORD*)(v14 + 16) = 0x427C000041F80000LL;
  *(_QWORD*)(v14 + 24) = 1106771968;
  *(_QWORD*)(v14 + 32) = 0x3C8000003A800000LL;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
  v15 = *(_QWORD*)(a1 + 72);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 56LL))(v15);
  *(_QWORD*)(v16 + 16) = 0x427C000041F80000LL;
  *(_QWORD*)(v16 + 24) = 1106771968;
  *(_QWORD*)(v16 + 32) = 0x3C8000003A800000LL;
  *(_DWORD*)(v16 + 40) = 1023410176;
  *(_QWORD*)(v16 + 44) = 0;
  *(_QWORD*)(v16 + 52) = 0;
  *(_DWORD*)(v16 + 60) = 0;
  *(_QWORD*)(v16 + 64) = 0x3F8000003F800000LL;
  *(_DWORD*)(v16 + 72) = 1065353216;
  (*(void (**)(__int64))(*(_QWORD*)v15 + 64LL))(v15);
  DecalObject_a91100(v6, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 104);
  TaskColorGrading_b55630((__int64*)a1, *(_QWORD*)(a1 + 120), nullptr);
  TaskColorGrading_b55630((__int64*)a1, *(_QWORD*)(a1 + 128), nullptr);
  gfx_shader_Archive_CreateShader(
      (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"Lutbuilder", 0xAu);
  v17 = v57_.v57;
  v18 = v57_.v58;
  v19 = *(_QWORD*)(a1 + 184);
  v57_.v57 = nullptr;
  v57_.v58 = 0;
  *(_QWORD*)(a1 + 176) = v17;
  *(_QWORD*)(a1 + 184) = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v57_.v58;
  if (v57_.v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57_.v58 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 176));
  gfx_shader_Archive_CreateShader(
      (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"LutbuilderCS", 0xCu);
  v21 = v57_.v57;
  v22 = v57_.v58;
  v23 = *(_QWORD*)(a1 + 200);
  v57_.v57 = nullptr;
  v57_.v58 = 0;
  *(_QWORD*)(a1 + 192) = v21;
  *(_QWORD*)(a1 + 200) = v22;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v57_.v58;
  if (v57_.v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57_.v58 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 192));
  v25 = 1;
  v26 = 0;
  do {
    v31 = v25;
    gfx_shader_Archive_CreateShader(
        (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"ImageProcessing", 0xFu, (__int64)"ColorGradingApply", 0x11u);
    v32 = v57_.v57;
    v33 = (__int64 (**)(void))v57_.v58;
    v34 = v2[1];
    v57_.v57 = nullptr;
    v57_.v58 = 0;
    *v2 = v32;
    v2[1] = v33;
    if (v34 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v34 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)(void)))*v34 + 2))(v34);
      std___1___shared_weak_count___release_weak(v34);
      v35 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_28;
      }
    }
    else {
      v35 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_28;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v35);
    }
  LABEL_28:
    v36 = GameRoutine_ad5000(*v2, (__int64)"apply_colorgrading", 0x12u, v26);
    GameRoutine_ad5280(v36);
    v37 = GameRoutine_ad5000(*v2, (__int64)"apply_sepia", 0xBu, 0);
    GameRoutine_ad5280(v37);
    v38 = GameRoutine_ad5000(*v2, (__int64)"use_volume_texture", 0x12u, 0);
    GameRoutine_ad5280(v38);
    gfx_shader_Archive_CreateShader(
        (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"ImageProcessing", 0xFu, (__int64)"ColorGradingApply", 0x11u);
    v39 = v57_.v57;
    v40 = (__int64 (**)(void))v57_.v58;
    v41 = v2[3];
    v57_.v57 = nullptr;
    v57_.v58 = 0;
    v2[2] = v39;
    v2[3] = v40;
    if (v41 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v41 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)(void)))*v41 + 2))(v41);
      std___1___shared_weak_count___release_weak(v41);
      v42 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_34;
      }
    }
    else {
      v42 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_34;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak(v42);
    }
  LABEL_34:
    v43 = GameRoutine_ad5000(v2[2], (__int64)"apply_colorgrading", 0x12u, v26);
    GameRoutine_ad5280(v43);
    v44 = GameRoutine_ad5000(v2[2], (__int64)"apply_sepia", 0xBu, 0);
    GameRoutine_ad5280(v44);
    v45 = GameRoutine_ad5000(v2[2], (__int64)"use_volume_texture", 0x12u, 1);
    GameRoutine_ad5280(v45);
    gfx_shader_Archive_CreateShader(
        (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"ImageProcessing", 0xFu, (__int64)"ColorGradingApply", 0x11u);
    v46 = v57_.v57;
    v47 = (__int64 (**)(void))v57_.v58;
    v48 = v2[5];
    v57_.v57 = nullptr;
    v57_.v58 = 0;
    v2[4] = v46;
    v2[5] = v47;
    if (v48 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v48 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)(void)))*v48 + 2))(v48);
      std___1___shared_weak_count___release_weak(v48);
      v49 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_40;
      }
    }
    else {
      v49 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_40;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      std___1___shared_weak_count___release_weak(v49);
    }
  LABEL_40:
    v50 = GameRoutine_ad5000(v2[4], (__int64)"apply_colorgrading", 0x12u, v26);
    GameRoutine_ad5280(v50);
    v51 = GameRoutine_ad5000(v2[4], (__int64)"apply_sepia", 0xBu, 1);
    GameRoutine_ad5280(v51);
    v52 = GameRoutine_ad5000(v2[4], (__int64)"use_volume_texture", 0x12u, 0);
    GameRoutine_ad5280(v52);
    gfx_shader_Archive_CreateShader(
        (void*)(&v57_.v57), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"ImageProcessing", 0xFu, (__int64)"ColorGradingApply", 0x11u);
    v53 = v57_.v57;
    v54 = (__int64 (**)(void))v57_.v58;
    v55 = v2[7];
    v57_.v57 = nullptr;
    v57_.v58 = 0;
    v2[6] = v53;
    v2[7] = v54;
    if (v55 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v55 + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*((void (**)(__int64 (**)(void)))*v55 + 2))(v55);
      std___1___shared_weak_count___release_weak(v55);
      v56 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v56 = v57_.v58;
      if (v57_.v58 == 0) {
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
      std___1___shared_weak_count___release_weak(v56);
    }
  LABEL_21:
    v27 = GameRoutine_ad5000(v2[6], (__int64)"apply_colorgrading", 0x12u, v26);
    GameRoutine_ad5280(v27);
    v26 = 1;
    v28 = GameRoutine_ad5000(v2[6], (__int64)"apply_sepia", 0xBu, 1);
    GameRoutine_ad5280(v28);
    v29 = GameRoutine_ad5000(v2[6], (__int64)"use_volume_texture", 0x12u, 1);
    result = GameRoutine_ad5280(v29);
    v2 += 8;
    v25 = 0;
  } while ((v31 & 1) != 0);
  return result;
}

__int64 TaskColorGrading_b55630(__int64* a1, __int64 a2, _BYTE* a3)
{
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  struct GameRoutine_652770_xy v34_;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float32x4_t v19;
  __int64 v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float32x4_t v34;
  __int64 v35;
  __int128 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int128 v40;
  unsigned __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  __int128 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float32x4_t v54;
  float v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  int8x16_t v62;
  int8x16_t v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float32x4_t v70;
  float v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  int8x16_t v78;
  int8x16_t v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float32x4_t v86;
  float v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  int8x16_t v93;
  int8x16_t v94;
  unsigned __int32 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  int v99;
  __int64 v100;
  float v101;
  __int64 v102;
  float v103;
  float v105;
  float v106;
  float v107;
  float v108;
  float32x4_t v109;
  float v110;
  __int128 v111;
  float v112;
  float32x4_t v113;
  float32x4_t v114;
  __int128 v115;
  float v116;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a3 != nullptr) {
    v7 = 200;
    if (a3[168] != 0) {
      v7 = 164;
    }
    v8 = *(float*)&a3[v7];
    v9 = 280;
    if (a3[248] != 0) {
      v9 = 244;
    }
    v34_ = GameRoutine_652770_alt1(v8, *(float*)&a3[v9]);
    v10 = v34_.x;
    v11 = v34_.y;
    v14 = v34_.y;
    v27 = v34_.y;
    v30 = v34_.y;
    v12 = v11;
    v34_ = GameRoutine_652770_alt1(0x1.9640000000000p+12f, 0x0.0p+0f);
    v13 = v34_.x;
    v11 = v34_.y;
    v14 = v34_.y;
    v27 = v34_.y;
    v30 = v34_.y;
    v15 = v13 / v14;
    v16 = (float)((float)(0x1.0000000000000p+0f - v13) - v14) / v14;
    v17 = (float)((float)(0x1.0000000000000p+0f - v10) - v12) / v12;
    *(_DWORD*)(v6 + 12) = 1065353216;
    *(float*)v6 =
        (float)((float)((float)(v15 * 0x1.ca4a8c0000000p-1f) +
                        0x1.10cb2a0000000p-2f) +
                (float)(v16 * -0x1.4a8c160000000p-3f)) /
        (float)((float)((float)((float)(v10 / v12) * 0x1.ca4a8c0000000p-1f) +
                        0x1.10cb2a0000000p-2f) +
                (float)(v17 * -0x1.4a8c160000000p-3f));
    *(float*)(v6 + 4) =
        (float)((float)((float)(v15 * -0x1.801a360000000p-1f) +
                        0x1.b6a7f00000000p+0f) +
                (float)(v16 * 0x1.2ca57a0000000p-5f)) /
        (float)((float)((float)((float)(v10 / v12) * -0x1.801a360000000p-1f) +
                        0x1.b6a7f00000000p+0f) +
                (float)(v17 * 0x1.2ca57a0000000p-5f));
    *(float*)(v6 + 8) =
        (float)((float)((float)(v15 * 0x1.3eab360000000p-5f) +
                        -0x1.1893740000000p-4f) +
                (float)(v16 * 0x1.0793de0000000p+0f)) /
        (float)((float)((float)((float)(v10 / v12) * 0x1.3eab360000000p-5f) +
                        -0x1.1893740000000p-4f) +
                (float)(v17 * 0x1.0793de0000000p+0f));
    v18 = 400;
    if (a3[352] != 0) {
      v18 = 336;
    }
    v19 = *(float32x4_t*)&a3[v18];
    v20 = 488;
    v114 = v19;
    if (a3[456] != 0) {
      v20 = 452;
    }
    v21 = *(float*)&a3[v20];
    v22 = 568;
    if (a3[536] != 0) {
      v22 = 532;
    }
    v23 = *(float*)&a3[v22];
    v24 = 648;
    if (a3[616] != 0) {
      v24 = 612;
    }
    v25 = *(float*)&a3[v24];
  }
  else {
    v23 = 0x0.0p+0f;
    v34_ = GameRoutine_652770_alt1(0x1.9640000000000p+12f, 0x0.0p+0f);
    v26 = v34_.x;
    v11 = v34_.y;
    v14 = v34_.y;
    v27 = v34_.y;
    v30 = v34_.y;
    v28 = v27;
    v34_ = GameRoutine_652770_alt1(0x1.9640000000000p+12f, 0x0.0p+0f);
    v29 = v34_.x;
    v11 = v34_.y;
    v14 = v34_.y;
    v27 = v34_.y;
    v30 = v34_.y;
    v31 = v29 / v30;
    v25 = 0x0.0p+0f;
    v32 = (float)((float)(0x1.0000000000000p+0f - v29) - v30) / v30;
    v33 = (float)((float)(0x1.0000000000000p+0f - v26) - v28) / v28;
    *(_DWORD*)(v6 + 12) = 1065353216;
    *(float*)(v6 + 8) =
        (float)((float)((float)(v31 * 0x1.3eab360000000p-5f) +
                        -0x1.1893740000000p-4f) +
                (float)(v32 * 0x1.0793de0000000p+0f)) /
        (float)((float)((float)((float)(v26 / v28) * 0x1.3eab360000000p-5f) +
                        -0x1.1893740000000p-4f) +
                (float)(v33 * 0x1.0793de0000000p+0f));
    *(float*)v6 =
        (float)((float)((float)(v31 * 0x1.ca4a8c0000000p-1f) +
                        0x1.10cb2a0000000p-2f) +
                (float)(v32 * -0x1.4a8c160000000p-3f)) /
        (float)((float)((float)((float)(v26 / v28) * 0x1.ca4a8c0000000p-1f) +
                        0x1.10cb2a0000000p-2f) +
                (float)(v33 * -0x1.4a8c160000000p-3f));
    *(float*)(v6 + 4) =
        (float)((float)((float)(v31 * -0x1.801a360000000p-1f) +
                        0x1.b6a7f00000000p+0f) +
                (float)(v32 * 0x1.2ca57a0000000p-5f)) /
        (float)((float)((float)((float)(v26 / v28) * -0x1.801a360000000p-1f) +
                        0x1.b6a7f00000000p+0f) +
                (float)(v33 * 0x1.2ca57a0000000p-5f));
    v114 = COERCE_AS(float32x4_t, GameData_1a837f0);
    v21 = 0x0.0p+0f;
  }
  v34 = vmulq_n_f32(v114, exp2f(v21)),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
  *(_QWORD*)(v6 + 16) = LANES128(v34).n128_u64[0];
  *(_QWORD*)(v6 + 24) = LANES128(v34).n128_u32[2];
  *(float*)(v6 + 96) = v23 / 0x1.6800000000000p+8f;
  *(float*)(v6 + 100) =
      (float)(v25 / 0x1.9000000000000p+6f) + 0x1.0000000000000p+0f;
  if (a3 != nullptr) {
    v35 = 768;
    if (a3[720] != 0) {
      v35 = 704;
    }
    v36 = *(_OWORD*)&a3[v35];
    v37 = 856;
    if (a3[824] != 0) {
      v37 = 820;
    }
    v38 = *(float*)&a3[v37];
    v39 = 1136;
    if (a3[1088] != 0) {
      v39 = 1072;
    }
    v40 = *(_OWORD*)&a3[v39];
    v41 = COERCE_UNSIGNED_INT(v38 + 0x1.0000000000000p+0f);
    v42 = 1224;
    v111 = v40;
    if (a3[1192] != 0) {
      v42 = 1188;
    }
    v43 = *(float*)&a3[v42];
    v44 = 1344;
    if (a3[1296] != 0) {
      v44 = 1280;
    }
    v45 = *(_OWORD*)&a3[v44];
    v46 = COERCE_UNSIGNED_INT(v43 + 0x1.0000000000000p+0f);
    v47 = 1432;
    v115 = v45;
    if (a3[1400] != 0) {
      v47 = 1396;
    }
    v48 = COERCE_UNSIGNED_INT(*(float*)&a3[v47] + 0x1.0000000000000p+0f);
  }
  else {
    v36 = GameData_1a837f0;
    v41 = 0x40000000;
    v46 = 0x40000000;
    v48 = 0x40000000;
    v111 = GameData_1a837f0;
    v115 = GameData_1a837f0;
  }
  v49 = *a1;
  v50 = *((float*)&v36 + 1);
  v110 = *((float*)&v36 + 2);
  if (*(float*)&v36 <= 0x1.4b5dcc0000000p-5f) {
    v51 = *(float*)&v36 / 0x1.9d70a40000000p+3f;
  }
  else {
    v51 = powf((float)(*(float*)&v36 + 0x1.c28f5c0000000p-5f) /
                   0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v105 = v51;
  if (v50 <= 0x1.4b5dcc0000000p-5f) {
    v52 = v50 / 0x1.9d70a40000000p+3f;
  }
  else {
    v52 = powf((float)(v50 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (v110 <= 0x1.4b5dcc0000000p-5f) {
    v53 = v110 / 0x1.9d70a40000000p+3f;
  }
  else {
    v108 = v52;
    v53 = powf((float)(v110 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v52 = v108;
  }
  LANES128(v54).n128_u64[0] = __PAIR64__(LODWORD(v52), LODWORD(v105));
  v55 = (float)(PSEUDO_UNFUSED(v52 * 0x1.6e2aa20000000p-1f)) +
        (float)(v105 * 0x1.b37c140000000p-3f);
  LANES128(v54).n128_u64[1] = LODWORD(v53);
  v56 = COERCE_UNSIGNED_INT(v55 + (float)(v53 * 0x1.27b2cc0000000p-4f)) |
        ((unsigned __int64)COERCE_UNSIGNED_INT(
             v55 + (float)(v53 * 0x1.27b2cc0000000p-4f))
         << 32);
  v57 = COERCE_UNSIGNED_INT(v55 + (float)(v53 * 0x1.27b2cc0000000p-4f));
  LANES128(v58).n128_u64[0] = v56;
  LANES128(v58).n128_u64[1] = v57;
  v59 = vmaxq_f32(vsubq_f32(v54, v58), COERCE_AS(float32x4_t, 0));
  LANES128(v54).n128_u64[0] = v41 | (v41 << 32);
  LANES128(v54).n128_u64[1] = v41;
  v60 = vaddq_f32(v54, v59);
  if ((unsigned int)(*(_DWORD*)(v49 + 13240) - 3) <= 3) {
    v61 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v61).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    v62 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
            .n64_u64[0];
    v63 = vmulq_f32(v60, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
            .n64_u64[0];
    LANES128(v60).n128_u32[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u32[0];
    LANES128(v60).n128_u32[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
            .n64_u32[0];
    LANES128(v60).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
            .n64_u32[0];
  }
  v64 = *((float*)&v111 + 2);
  v109 = v60;
  if (*(float*)&v111 <= 0x1.4b5dcc0000000p-5f) {
    v66 = *((float*)&v111 + 1);
    v106 = *(float*)&v111 / 0x1.9d70a40000000p+3f;
  }
  else {
    v65 = powf((float)(*(float*)&v111 + 0x1.c28f5c0000000p-5f) /
                   0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v64 = *((float*)&v111 + 2);
    v106 = v65;
    v66 = *((float*)&v111 + 1);
  }
  if (v66 <= 0x1.4b5dcc0000000p-5f) {
    v68 = v66 / 0x1.9d70a40000000p+3f;
  }
  else {
    v67 = powf((float)(v66 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v64 = *((float*)&v111 + 2);
    v68 = v67;
  }
  if (v64 <= 0x1.4b5dcc0000000p-5f) {
    v69 = v64 / 0x1.9d70a40000000p+3f;
  }
  else {
    v112 = v68;
    v69 = powf((float)(v64 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v68 = v112;
  }
  LANES128(v70).n128_u64[0] = __PAIR64__(LODWORD(v68), LODWORD(v106));
  v71 = (float)(PSEUDO_UNFUSED(v68 * 0x1.6e2aa20000000p-1f)) +
        (float)(v106 * 0x1.b37c140000000p-3f);
  LANES128(v70).n128_u64[1] = LODWORD(v69);
  v72 = COERCE_UNSIGNED_INT(v71 + (float)(v69 * 0x1.27b2cc0000000p-4f)) |
        ((unsigned __int64)COERCE_UNSIGNED_INT(
             v71 + (float)(v69 * 0x1.27b2cc0000000p-4f))
         << 32);
  v73 = COERCE_UNSIGNED_INT(v71 + (float)(v69 * 0x1.27b2cc0000000p-4f));
  LANES128(v74).n128_u64[0] = v72;
  LANES128(v74).n128_u64[1] = v73;
  v75 = vmaxq_f32(vsubq_f32(v70, v74), COERCE_AS(float32x4_t, 0));
  LANES128(v70).n128_u64[0] = v46 | (v46 << 32);
  LANES128(v70).n128_u64[1] = v46;
  v76 = vaddq_f32(v70, v75);
  if ((unsigned int)(*(_DWORD*)(v49 + 13240) - 3) <= 3) {
    v77 = vmulq_f32(v76, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v77).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0])))
            .n64_u64[0];
    v78 = vmulq_f32(v76, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v78).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
            .n64_u64[0];
    v79 = vmulq_f32(v76, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v79).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v79, v79, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
            .n64_u64[0];
    LANES128(v76).n128_u32[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0])))
            .n64_u32[0];
    LANES128(v76).n128_u32[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0])))
            .n64_u32[0];
    LANES128(v76).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
            .n64_u32[0];
  }
  v80 = *((float*)&v115 + 2);
  v113 = v76;
  if (*(float*)&v115 <= 0x1.4b5dcc0000000p-5f) {
    v82 = *((float*)&v115 + 1);
    v107 = *(float*)&v115 / 0x1.9d70a40000000p+3f;
  }
  else {
    v81 = powf((float)(*(float*)&v115 + 0x1.c28f5c0000000p-5f) /
                   0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v80 = *((float*)&v115 + 2);
    v107 = v81;
    v82 = *((float*)&v115 + 1);
  }
  if (v82 <= 0x1.4b5dcc0000000p-5f) {
    v84 = v82 / 0x1.9d70a40000000p+3f;
  }
  else {
    v83 = powf((float)(v82 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v80 = *((float*)&v115 + 2);
    v84 = v83;
  }
  if (v80 <= 0x1.4b5dcc0000000p-5f) {
    v85 = v80 / 0x1.9d70a40000000p+3f;
  }
  else {
    v116 = v84;
    v85 = powf((float)(v80 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
               0x1.3333340000000p+1f),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s1", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w"));
    v84 = v116;
  }
  LANES128(v86).n128_u64[0] = __PAIR64__(LODWORD(v84), LODWORD(v107));
  v87 = (float)(PSEUDO_UNFUSED(v84 * 0x1.6e2aa20000000p-1f)) +
        (float)(v107 * 0x1.b37c140000000p-3f);
  LANES128(v86).n128_u64[1] = LODWORD(v85);
  v88 = COERCE_UNSIGNED_INT(v87 + (float)(v85 * 0x1.27b2cc0000000p-4f)) |
        ((unsigned __int64)COERCE_UNSIGNED_INT(
             v87 + (float)(v85 * 0x1.27b2cc0000000p-4f))
         << 32);
  v89 = COERCE_UNSIGNED_INT(v87 + (float)(v85 * 0x1.27b2cc0000000p-4f));
  LANES128(v90).n128_u64[0] = v88;
  LANES128(v90).n128_u64[1] = v89;
  v91 = vmaxq_f32(vsubq_f32(v86, v90), COERCE_AS(float32x4_t, 0));
  LANES128(v86).n128_u64[0] = v48 | (v48 << 32);
  LANES128(v86).n128_u64[1] = v48;
  v92 = vaddq_f32(v86, v91);
  if ((unsigned int)(*(_DWORD*)(v49 + 13240) - 3) <= 3) {
    v93 = vmulq_f32(v92, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v93).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v93, v93, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])))
            .n64_u64[0];
    v94 = vmulq_f32(v92, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v94).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v94, v94, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0])))
            .n64_u64[0];
    v92 = vmulq_f32(v92, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v92).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v92, v92, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
            .n64_u64[0];
    v95 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
            .n64_u32[0];
    LANES128(v92).n128_u32[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])))
            .n64_u32[0];
    LANES128(v92).n128_u32[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0])))
            .n64_u32[0];
    LANES128(v92).n128_u32[2] = v95;
  }
  if (a3 != nullptr) {
    v96 = 936;
    if (a3[904] != 0) {
      v96 = 900;
    }
    v97 = *(_DWORD*)&a3[v96];
    v98 = 1016;
    if (a3[984] != 0) {
      v98 = 980;
    }
    v99 = *(_DWORD*)&a3[v98];
    v100 = 1512;
    if (a3[1480] != 0) {
      v100 = 1476;
    }
    v101 = *(float*)&a3[v100];
    v102 = 1592;
    if (a3[1560] != 0) {
      v102 = 1556;
    }
    v103 = *(float*)&a3[v102];
  }
  else {
    v103 = 0x1.0000000000000p+0f;
    v97 = 0;
    v101 = 0x1.0000000000000p-1f;
    v99 = 1035489772;
  }
  *(_DWORD*)(v6 + 80) = v97;
  *(_DWORD*)(v6 + 84) = v99;
  *(float*)(v6 + 88) = v101;
  *(float*)(v6 + 92) = v103;
  *(_QWORD*)(v6 + 64) = LANES128(v92).n128_u64[0];
  *(_QWORD*)(v6 + 72) = LANES128(v92).n128_u32[2] | 0x3F80000000000000LL;
  *(_QWORD*)(v6 + 32) = LANES128(v109).n128_u32[0] |
                        ((unsigned __int64)LANES128(v109).n128_u32[1] << 32);
  *(_QWORD*)(v6 + 40) = LANES128(v109).n128_u32[2] | 0x3F80000000000000LL;
  *(_QWORD*)(v6 + 48) = LANES128(v113).n128_u32[0] |
                        ((unsigned __int64)LANES128(v113).n128_u32[1] << 32);
  *(_QWORD*)(v6 + 56) = LANES128(v113).n128_u32[2] | 0x3F80000000000000LL;
  return (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
}

__int64 TaskColorGrading_b565d0(_DWORD* a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                                unsigned int* a5)
{

#pragma clang fp contract(off)
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  unsigned __int32 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _DWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  _DWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 result;
  _QWORD v49[2];

  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1[20];
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  a1[20] = v12;
  v13 = *(_QWORD*)&a1[2 * v12 + 16];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)v14 = 0x4280000042800000LL;
  *(_QWORD*)(v14 + 8) = 1115684864;
  *(_QWORD*)(v14 + 16) = 0x427C0000427C0000LL;
  *(_QWORD*)(v14 + 24) = 0x3C800000427C0000LL;
  *(_QWORD*)(v14 + 32) = 0x3C80000039800000LL;
  *(_QWORD*)(v14 + 40) = 0x428000003C800000LL;
  v15 = *((_QWORD*)a5 + 2);
  v16 = 200;
  if (*(_BYTE*)(v15 + 168) != 0) {
    v16 = 164;
  }
  *(_DWORD*)(v14 + 48) = *(_DWORD*)(v15 + v16);
  v17 = *((_QWORD*)a5 + 2);
  v18 = 280;
  if (*(_BYTE*)(v17 + 248) != 0) {
    v18 = 244;
  }
  *(_DWORD*)(v14 + 52) = *(_DWORD*)(v17 + v18);
  v19 = *((_QWORD*)a5 + 2);
  v20 = 360;
  if (*(_BYTE*)(v19 + 328) != 0) {
    v20 = 324;
  }
  *(_DWORD*)(v14 + 56) = *(_DWORD*)(v19 + v20);
  v21 = *((_QWORD*)a5 + 2);
  v22 = 568;
  if (*(_BYTE*)(v21 + 536) != 0) {
    v22 = 532;
  }
  *(_DWORD*)(v14 + 60) = *(_DWORD*)(v21 + v22);
  v23 = *((_QWORD*)a5 + 2);
  v24 = 480;
  if (*(_BYTE*)(v23 + 432) != 0) {
    v24 = 416;
  }
  v25 = *(int8x16_t*)(v23 + v24);
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 3) <= 3) {
    v26 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    v27 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    v25 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v28 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u32[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v25).n128_u32[2] = v28;
  }
  *(_QWORD*)(v14 + 64) = LANES128(v25).n128_u64[0];
  *(_DWORD*)(v14 + 72) = LANES128(v25).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 17),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 32LL))(v29),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v30,
                                                                  v31),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = *a4;
  v49[0] = 0;
  v49[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v32 + 144LL))(v32, 0, v49),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v33, GameData_21fdeb8[0]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v33, GameData_21fdee0),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v33, GameData_21fdf08),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v33, GameData_21fdf14),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = &a1[4 * a1[20]];
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *((_QWORD*)v34 + 11),
                              *((_QWORD*)v34 + 12)),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *a4;
  v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 40LL))(v36),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v35 + 248LL))(v35, 3, 0, v37, v38, (unsigned int)a1[114]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = *a4;
  v40 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v39 + 248LL))(v39, 3, 1, v41, v42, (unsigned int)a1[114]),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = *((_QWORD*)a5 + 2);
  v44 = 120;
  if (*(_BYTE*)(v43 + 90) != 0) {
    v44 = 89;
  }
  v45 = &a1[4 * (unsigned __int8)((2 * *(_BYTE*)(v43 + v44)) |
                                  (4 * *((_BYTE*)a5 + 24)))];
  v46 = *((_QWORD*)v45 + 26);
  v47 = *((_QWORD*)v45 + 27);
  if (v47 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v46 + 144)),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak(v47);
  }
  return result;
}

__int64 TaskColorGrading_b56bf0(__int64 a1, __int64 a2, _QWORD* a3, __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v7, v8),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(__int64))GameData_212e778[0])(v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v7) = ((__int64 (*)(__int64))*GameData_212e780)(v7),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v9, (unsigned int)v7),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v9, (unsigned int)v7),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *a4;
  v15[0] = 0;
  v15[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v10 + 144LL))(v10, 0, v15),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v11, GameData_21fdeb8[0]),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v11, GameData_21fdee0),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v11, GameData_21fdf08),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v11, GameData_21fdf14),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = a1 + 16LL * *(int*)(a1 + 24);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *(_QWORD*)(v12 + 32),
                              *(_QWORD*)(v12 + 40)),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = a1 + 16LL * *(int*)(a1 + 136);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 1, *(_QWORD*)(v13 + 144),
                              *(_QWORD*)(v13 + 152)),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 176) + 144LL)),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
